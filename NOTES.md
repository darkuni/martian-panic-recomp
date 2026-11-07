# Martian Panic (RQ7E20, Wii disc, NTSC-U) - native recomp notes

Same recompiler and runtime as Zack & Wiki, TARGET: Terror and Lost in Shadow.

## Source
- main.dol sha1 b7893e948006ccdf496d449b20556663863215c2, entry 0x8000403C; RVL SDK Feb 24 2009 (IOS53), NW4R,
  Nintendo HOME Button menu. No REL modules.
- The disc carries the linked executable as `files/MartianPanic.elf` (not stripped, 15k symbols). Its .text is word
  for word the same as main.dol's.

## Naming
- `dtk dol split` (6,918 functions, 119 jump tables), then `dtk dol apply config.yml MartianPanic.elf`: every
  function gets its real (mangled) name. `apply` renames dtk's jumptable_ objects to the ELF's `@nnn` labels; the
  recompiler finds jump tables by the jumptable_ prefix, so those names are put back afterwards (a short script
  matching the addresses of the pre-apply symbols.txt).

## game.h constants
- __AXDSPResumeCallback 0x800C991C, DecrementerExceptionCallback 0x800AB0CC, iosFree 0x800F1860, OSExitThread
  0x800B3DBC, SelectThread idle branch 0x800B3A28, interrupt table r13-0x7320, IOS heap r13-0x7D44.
- KPADStatus stride 0xF0 (KPADiRead: mulli 0xF0). Interrupt handlers run with the scheduler disabled and async IOS
  requests complete 2 ms later, as in Lost in Shadow.

## Renderer
- Destination alpha (BP 0x42 bit 8): with alpha writes on, the EFB alpha gets the constant instead of the TEV
  alpha, while blending still uses the TEV alpha (GL: separate alpha blend func with GL_CONSTANT_ALPHA). The game's
  glow pass (WiiGraphics::RenderPostProcess) masks the bright pass with EFB alpha and draws the scene with a
  constant alpha of 3 (0 in RGBA6); without this every surface glowed and gameplay came out white.

## Input
- Light gun: B fires, A works the menus. Reload is Weapon::CheckForReload: the aim (pixels) outside 640x448. The
  reload button (G_RELOAD_OFFSCREEN: middle mouse, V, LB/LT) puts the pointer just left of the picture; mouse
  motions use Ctrl only in this game.

## Threads and the GL context
- The level loader spawns a short-lived thread per sound-file read (DVDSoundReadFunc, ~2000 per level) and polls
  it with 1 ms OSSleepTicks, so it switches guest threads dozens of times per frame. Each switch used to release
  the GL context (so the next thread could do GX work); on Windows that is a driver flush and waits for the display
  refresh, and the level load crawled at ~4 fps for minutes. Now the context stays with the last guest thread
  that used GX, and a thread that needs it asks the holder (blocked in switch_to) to let go.

## Status / open issues
- Boots through the strap / Zapper screens, the Zoo and n-Fusion logos, the title, the menus (Play Game, Single
  Wield, 1 player, character, stage, skill level) into the first stage ("When Donuts Collide"): shooting, score,
  damage, the Failure screen; music and effects play.

## Testing
- Same switches as the other recomps: `POINTER=x,y` (or a timeline: `POINTER=x,y;x,y@frame;...`, frames with
  `AUTOPRESS_FRAMES=1`), `AUTOPRESS_FRAMES=1 AUTOPRESS=A@400-406,...`, `SHOT_EVERY`, `SHOT_FROM`, `SHOT_DIR`,
  `TIMEOUT` (seconds), `TRACEFN=addr,...`, `AXVOICES=n`, `AXLOG=1`, `AUDIO_WAV=file`, `MEMDUMP_EVERY` /
  `MEMDUMP_FROM`. Headless tests run much faster with resolution_scale = 1, msaa = 1 and speed = 8 in the ini.
