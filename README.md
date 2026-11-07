# Martian Panic (Wii, NTSC-U) - native recompilation

A static recompilation of **Martian Panic** for Wii (disc, NTSC-U, `RQ7E20`, Zoo Games / n-Fusion Interactive) to
native code. The game's PowerPC executable is translated to C++ and runs on Windows and Linux (SteamOS / Steam Deck)
with a small runtime that replaces the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso`, `.ciso` or `.wbfs`).

## Status

Work in progress. Boots through the safety and Wii Zapper screens, the publisher logos, the title screen and the
menus (Linux headless tests). Controls: the mouse (or the right stick) is the Wii Remote pointer, and a real Wii
Remote paired over Bluetooth works for buttons, motion and pointer.

## Download

Test builds: GitHub Actions (Windows zip and Linux tar.gz). Unpack, put your disc image in the same folder and run
`martianpanic.exe` (Windows) or `./martianpanic` (Linux): the first start builds the `game` folder from it. The
zip's `README.txt` has the controls.

## Building

Same tool chain as the other Wii recomps (Zack & Wiki, TARGET: Terror, Lost in Shadow): the generated C++ is in
`src/gen`; GitHub Actions cross-compiles the Windows exe with mingw-w64 and SDL2 and builds the Linux one with
`-DUSE_SDL=ON`. Regenerating needs the game's `main.dol` (`src/main.dol`) from your disc (`tools/prepare_disc.py`).
The game ships its own linked ELF with a full symbol table (`files/MartianPanic.elf`), so every function has its
real name. See [NOTES.md](NOTES.md).

## Disclaimer

Unofficial fan project, **not affiliated with, endorsed by, or sponsored by** Zoo Games, n-Fusion Interactive or
Nintendo. *Martian Panic* and all related names and marks belong to their respective owners. This repository and its
builds contain no game data; `src/gen` and the exe contain code machine-translated from the game's executable.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components keep their own
licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
