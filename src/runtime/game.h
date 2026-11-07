// Per-game constants for Martian Panic (Wii disc, NTSC-U, RQ7E20).
// Addresses come from config/symbols.txt: dtk analysis with names from the MartianPanic.elf the game ships on
// its disc (files/MartianPanic.elf, same code as main.dol, full symbol table). r13 offsets were read from the
// instruction that loads the variable in the named SDK function.
#pragma once
#define GAME_NAME        "Martian Panic"
#define GAME_EXE         "martianpanic"
#define GAME_INI         "martianpanic.ini"

#define G_AX_RESUME_CB          0x800C991Cu   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x800AB0CCu   // DecrementerExceptionCallback
#define G_IOS_FREE              0x800F1860u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x800B3DBCu   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x7320u       // __OSGetInterruptHandler: lwz r4,-0x7320(r13)
#define G_SDA_IOS_HEAP          0x7D44u       // __ios_Ipc2: lwz r3,-0x7D44(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_800B3DBC
#define G_FN_IOS_FREE           f_800F1860
#define G_KPAD_STATUS_SIZE      0xF0u         // KPADStatus (KPADiRead: mulli 0xF0): KPADRead buffer stride
#define G_FN_OS_DISABLE_SCHEDULER f_800B35B4  // interrupt handlers run with the scheduler off (hle_thread.cpp irq_check)
#define G_FN_OS_ENABLE_SCHEDULER  f_800B35F0
#define G_FN_OS_RESCHEDULE        f_800B3AFC  // __OSReschedule after the handlers
#define G_IOS_ASYNC_DELAY_US    2000u         // async IOS requests (disc reads) complete 2 ms later (hle_ios.cpp)
#define G_RELOAD_OFFSCREEN      1             // reload = aim off the picture (Weapon::CheckForReload): middle mouse / V / LB / LT
