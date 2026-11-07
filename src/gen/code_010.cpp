#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// MEMiInitHeapHead
void f_800ED1C8(Ctx* __restrict c) {
  trace_call(0x800ED1C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED1C8
  c->r[0]=c->lr; // 800ED1CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED1D0
  c->r[11]=c->r[1]+0x00000020u; // 800ED1D4
  c->lr=0x800ED1DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ED1D8
  c->r[0]=0u+0x00000000u; // 800ED1DC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800ED1E0
  c->r[0]=(rotl(c->r[7],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 800ED1E4
  c->r[27]=c->r[3]|c->r[3]; // 800ED1E8
  W32(c->r[3]+0x00000018u,c->r[5]); // 800ED1EC
  c->r[4]=0u+0x00000004u; // 800ED1F0
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800ED1F4
  W32(c->r[3]+0x00000038u,c->r[0]); // 800ED1F8
  c->r[3]=c->r[3]+0x0000000Cu; // 800ED1FC
  c->lr=0x800ED204u; f_800EE164(c); // 800ED200
  c->r[0]=R32(c->r[13]+0xFFFF9278u); // 800ED204
  cmps(c,0,(int32_t)c->r[0],0); // 800ED208
  if (!crb(c,2)) { goto L_800ED234; } // 800ED20C
  c->r[3]=0u+0x802D0000u; // 800ED210
  c->r[4]=0u+0x00000004u; // 800ED214
  c->r[3]=c->r[3]+0x00002B00u; // 800ED218
  c->lr=0x800ED220u; f_800EE164(c); // 800ED21C
  c->r[3]=0u+0x802D0000u; // 800ED220
  c->r[3]=c->r[3]+0x00002B10u; // 800ED224
  c->lr=0x800ED22Cu; f_800B1A24(c); // 800ED228
  c->r[0]=0u+0x00000001u; // 800ED22C
  W32(c->r[13]+0xFFFF9278u,c->r[0]); // 800ED230
L_800ED234:;
  c->r[3]=c->r[27]+0x00000020u; // 800ED234
  c->lr=0x800ED23Cu; f_800B1A24(c); // 800ED238
  c->r[3]=0u+0x802D0000u; // 800ED23C
  c->r[3]=c->r[3]+0x00002B10u; // 800ED240
  c->lr=0x800ED248u; f_800B1A5C(c); // 800ED244
  c->r[31]=0u+0x802D0000u; // 800ED248
  c->r[30]=0u+0x00000000u; // 800ED24C
  c->r[28]=c->r[31]+0x00002B00u; // 800ED250
  goto L_800ED330; // 800ED254
L_800ED258:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800ED258
  cmpu(c,0,c->r[0],c->r[27]); // 800ED25C
  if (crb(c,1)) { goto L_800ED330; } // 800ED260
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800ED264
  cmpu(c,0,c->r[27],c->r[0]); // 800ED268
  if (!crb(c,0)) { goto L_800ED330; } // 800ED26C
  c->r[31]=0u+0x00000000u; // 800ED270
  goto L_800ED300; // 800ED274
L_800ED278:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800ED278
  cmpu(c,0,c->r[0],c->r[27]); // 800ED27C
  if (crb(c,1)) { goto L_800ED300; } // 800ED280
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800ED284
  cmpu(c,0,c->r[27],c->r[0]); // 800ED288
  if (!crb(c,0)) { goto L_800ED300; } // 800ED28C
  c->r[29]=0u+0x00000000u; // 800ED290
  goto L_800ED2D0; // 800ED294
L_800ED298:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800ED298
  cmpu(c,0,c->r[0],c->r[27]); // 800ED29C
  if (crb(c,1)) { goto L_800ED2D0; } // 800ED2A0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800ED2A4
  cmpu(c,0,c->r[27],c->r[0]); // 800ED2A8
  if (!crb(c,0)) { goto L_800ED2D0; } // 800ED2AC
  c->r[4]=c->r[27]|c->r[27]; // 800ED2B0
  c->r[3]=c->r[3]+0x0000000Cu; // 800ED2B4
  c->lr=0x800ED2BCu; f_800ED088(c); // 800ED2B8
  cmps(c,0,(int32_t)c->r[3],0); // 800ED2BC
  if (crb(c,2)) { goto L_800ED2C8; } // 800ED2C0
  goto L_800ED2EC; // 800ED2C4
L_800ED2C8:;
  c->r[3]=c->r[29]|c->r[29]; // 800ED2C8
  goto L_800ED2EC; // 800ED2CC
L_800ED2D0:;
  c->r[4]=c->r[29]|c->r[29]; // 800ED2D0
  c->r[3]=c->r[31]+0x0000000Cu; // 800ED2D4
  c->lr=0x800ED2DCu; f_800EE258(c); // 800ED2D8
  cmps(c,0,(int32_t)c->r[3],0); // 800ED2DC
  c->r[29]=c->r[3]|c->r[3]; // 800ED2E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800ED298; } // 800ED2E4
  c->r[3]=0u+0x00000000u; // 800ED2E8
L_800ED2EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800ED2EC
  if (crb(c,2)) { goto L_800ED2F8; } // 800ED2F0
  goto L_800ED31C; // 800ED2F4
L_800ED2F8:;
  c->r[3]=c->r[31]|c->r[31]; // 800ED2F8
  goto L_800ED31C; // 800ED2FC
L_800ED300:;
  c->r[4]=c->r[31]|c->r[31]; // 800ED300
  c->r[3]=c->r[30]+0x0000000Cu; // 800ED304
  c->lr=0x800ED30Cu; f_800EE258(c); // 800ED308
  cmps(c,0,(int32_t)c->r[3],0); // 800ED30C
  c->r[31]=c->r[3]|c->r[3]; // 800ED310
  if (!crb(c,2)) { IRQCHK(c); goto L_800ED278; } // 800ED314
  c->r[3]=0u+0x00000000u; // 800ED318
L_800ED31C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800ED31C
  if (crb(c,2)) { goto L_800ED328; } // 800ED320
  goto L_800ED34C; // 800ED324
L_800ED328:;
  c->r[3]=c->r[30]|c->r[30]; // 800ED328
  goto L_800ED34C; // 800ED32C
L_800ED330:;
  c->r[4]=c->r[30]|c->r[30]; // 800ED330
  c->r[3]=c->r[31]+0x00002B00u; // 800ED334
  c->lr=0x800ED33Cu; f_800EE258(c); // 800ED338
  cmps(c,0,(int32_t)c->r[3],0); // 800ED33C
  c->r[30]=c->r[3]|c->r[3]; // 800ED340
  if (!crb(c,2)) { IRQCHK(c); goto L_800ED258; } // 800ED344
  c->r[3]=0u+0x00000000u; // 800ED348
L_800ED34C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800ED34C
  if (crb(c,2)) { goto L_800ED358; } // 800ED350
  c->r[28]=c->r[3]+0x0000000Cu; // 800ED354
L_800ED358:;
  c->r[3]=c->r[28]|c->r[28]; // 800ED358
  c->r[4]=c->r[27]|c->r[27]; // 800ED35C
  c->lr=0x800ED364u; f_800EE17C(c); // 800ED360
  c->r[3]=0u+0x802D0000u; // 800ED364
  c->r[3]=c->r[3]+0x00002B10u; // 800ED368
  c->lr=0x800ED370u; f_800B1B38(c); // 800ED36C
  c->r[11]=c->r[1]+0x00000020u; // 800ED370
  c->lr=0x800ED378u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ED374
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED378
  c->lr=c->r[0]; // 800ED37C
  c->r[1]=c->r[1]+0x00000020u; // 800ED380
  return; // 800ED384
}

// MEMiFinalizeHeap
void f_800ED388(Ctx* __restrict c) {
  trace_call(0x800ED388u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED388
  c->r[0]=c->lr; // 800ED38C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED390
  c->r[11]=c->r[1]+0x00000020u; // 800ED394
  c->lr=0x800ED39Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ED398
  c->r[4]=0u+0x802D0000u; // 800ED39C
  c->r[27]=c->r[3]|c->r[3]; // 800ED3A0
  c->r[3]=c->r[4]+0x00002B10u; // 800ED3A4
  c->lr=0x800ED3ACu; f_800B1A5C(c); // 800ED3A8
  c->r[31]=0u+0x802D0000u; // 800ED3AC
  c->r[30]=0u+0x00000000u; // 800ED3B0
  c->r[28]=c->r[31]+0x00002B00u; // 800ED3B4
  goto L_800ED494; // 800ED3B8
L_800ED3BC:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800ED3BC
  cmpu(c,0,c->r[0],c->r[27]); // 800ED3C0
  if (crb(c,1)) { goto L_800ED494; } // 800ED3C4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800ED3C8
  cmpu(c,0,c->r[27],c->r[0]); // 800ED3CC
  if (!crb(c,0)) { goto L_800ED494; } // 800ED3D0
  c->r[31]=0u+0x00000000u; // 800ED3D4
  goto L_800ED464; // 800ED3D8
L_800ED3DC:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800ED3DC
  cmpu(c,0,c->r[0],c->r[27]); // 800ED3E0
  if (crb(c,1)) { goto L_800ED464; } // 800ED3E4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800ED3E8
  cmpu(c,0,c->r[27],c->r[0]); // 800ED3EC
  if (!crb(c,0)) { goto L_800ED464; } // 800ED3F0
  c->r[29]=0u+0x00000000u; // 800ED3F4
  goto L_800ED434; // 800ED3F8
L_800ED3FC:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800ED3FC
  cmpu(c,0,c->r[0],c->r[27]); // 800ED400
  if (crb(c,1)) { goto L_800ED434; } // 800ED404
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800ED408
  cmpu(c,0,c->r[27],c->r[0]); // 800ED40C
  if (!crb(c,0)) { goto L_800ED434; } // 800ED410
  c->r[4]=c->r[27]|c->r[27]; // 800ED414
  c->r[3]=c->r[3]+0x0000000Cu; // 800ED418
  c->lr=0x800ED420u; f_800ED088(c); // 800ED41C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED420
  if (crb(c,2)) { goto L_800ED42C; } // 800ED424
  goto L_800ED450; // 800ED428
L_800ED42C:;
  c->r[3]=c->r[29]|c->r[29]; // 800ED42C
  goto L_800ED450; // 800ED430
L_800ED434:;
  c->r[4]=c->r[29]|c->r[29]; // 800ED434
  c->r[3]=c->r[31]+0x0000000Cu; // 800ED438
  c->lr=0x800ED440u; f_800EE258(c); // 800ED43C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED440
  c->r[29]=c->r[3]|c->r[3]; // 800ED444
  if (!crb(c,2)) { IRQCHK(c); goto L_800ED3FC; } // 800ED448
  c->r[3]=0u+0x00000000u; // 800ED44C
L_800ED450:;
  cmps(c,0,(int32_t)c->r[3],0); // 800ED450
  if (crb(c,2)) { goto L_800ED45C; } // 800ED454
  goto L_800ED480; // 800ED458
L_800ED45C:;
  c->r[3]=c->r[31]|c->r[31]; // 800ED45C
  goto L_800ED480; // 800ED460
L_800ED464:;
  c->r[4]=c->r[31]|c->r[31]; // 800ED464
  c->r[3]=c->r[30]+0x0000000Cu; // 800ED468
  c->lr=0x800ED470u; f_800EE258(c); // 800ED46C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED470
  c->r[31]=c->r[3]|c->r[3]; // 800ED474
  if (!crb(c,2)) { IRQCHK(c); goto L_800ED3DC; } // 800ED478
  c->r[3]=0u+0x00000000u; // 800ED47C
L_800ED480:;
  cmps(c,0,(int32_t)c->r[3],0); // 800ED480
  if (crb(c,2)) { goto L_800ED48C; } // 800ED484
  goto L_800ED4B0; // 800ED488
L_800ED48C:;
  c->r[3]=c->r[30]|c->r[30]; // 800ED48C
  goto L_800ED4B0; // 800ED490
L_800ED494:;
  c->r[4]=c->r[30]|c->r[30]; // 800ED494
  c->r[3]=c->r[31]+0x00002B00u; // 800ED498
  c->lr=0x800ED4A0u; f_800EE258(c); // 800ED49C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED4A0
  c->r[30]=c->r[3]|c->r[3]; // 800ED4A4
  if (!crb(c,2)) { IRQCHK(c); goto L_800ED3BC; } // 800ED4A8
  c->r[3]=0u+0x00000000u; // 800ED4AC
L_800ED4B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800ED4B0
  if (crb(c,2)) { goto L_800ED4BC; } // 800ED4B4
  c->r[28]=c->r[3]+0x0000000Cu; // 800ED4B8
L_800ED4BC:;
  c->r[3]=c->r[28]|c->r[28]; // 800ED4BC
  c->r[4]=c->r[27]|c->r[27]; // 800ED4C0
  c->lr=0x800ED4C8u; f_800EE1EC(c); // 800ED4C4
  c->r[3]=0u+0x802D0000u; // 800ED4C8
  c->r[3]=c->r[3]+0x00002B10u; // 800ED4CC
  c->lr=0x800ED4D4u; f_800B1B38(c); // 800ED4D0
  c->r[0]=0u+0x00000000u; // 800ED4D4
  c->r[11]=c->r[1]+0x00000020u; // 800ED4D8
  W32(c->r[27]+0x00000000u,c->r[0]); // 800ED4DC
  c->lr=0x800ED4E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ED4E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED4E4
  c->lr=c->r[0]; // 800ED4E8
  c->r[1]=c->r[1]+0x00000020u; // 800ED4EC
  return; // 800ED4F0
}

// AllocUsedBlockFromFreeBlock_
void f_800ED4F4(Ctx* __restrict c) {
  trace_call(0x800ED4F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED4F4
  c->r[0]=c->lr; // 800ED4F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED4FC
  c->r[11]=c->r[1]+0x00000020u; // 800ED500
  c->lr=0x800ED508u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ED504
  c->r[8]=R32(c->r[4]+0x00000008u); // 800ED508
  c->r[30]=c->r[6]+c->r[5]; // 800ED50C
  c->r[6]=R16(c->r[4]+0x00000002u); // 800ED510
  c->r[29]=c->r[5]+0xFFFFFFF0u; // 800ED514
  c->r[0]=R32(c->r[4]+0x00000004u); // 800ED518
  cmps(c,0,(int32_t)c->r[8],0); // 800ED51C
  c->r[9]=rotl(c->r[6],24)&0x0000007Fu; // 800ED520
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 800ED524
  c->r[6]=c->r[4]+c->r[0]; // 800ED528
  c->r[27]=c->r[5]|c->r[5]; // 800ED52C
  c->r[26]=c->r[3]|c->r[3]; // 800ED530
  c->r[28]=c->r[7]|c->r[7]; // 800ED534
  c->r[31]=c->r[29]|c->r[29]; // 800ED538
  c->r[5]=c->r[4]-c->r[9]; // 800ED53C
  c->r[6]=c->r[6]+0x00000010u; // 800ED540
  if (crb(c,2)) { goto L_800ED550; } // 800ED544
  W32(c->r[8]+0x0000000Cu,c->r[10]); // 800ED548
  goto L_800ED554; // 800ED54C
L_800ED550:;
  W32(c->r[3]+0x00000000u,c->r[10]); // 800ED550
L_800ED554:;
  cmps(c,0,(int32_t)c->r[10],0); // 800ED554
  if (crb(c,2)) { goto L_800ED564; } // 800ED558
  W32(c->r[10]+0x00000008u,c->r[8]); // 800ED55C
  goto L_800ED568; // 800ED560
L_800ED564:;
  W32(c->r[3]+0x00000004u,c->r[8]); // 800ED564
L_800ED568:;
  c->r[0]=c->r[29]-c->r[5]; // 800ED568
  cmpu(c,0,c->r[0],0x00000014u); // 800ED56C
  if (crb(c,0)) { goto L_800ED588; } // 800ED570
  cmps(c,0,(int32_t)c->r[7],0); // 800ED574
  if (!crb(c,2)) { goto L_800ED590; } // 800ED578
  c->r[0]=R16(c->r[3]+0x00000012u); // 800ED57C
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 800ED580
  if (!crb(c,2)) { goto L_800ED590; } // 800ED584
L_800ED588:;
  c->r[31]=c->r[5]|c->r[5]; // 800ED588
  goto L_800ED5EC; // 800ED58C
L_800ED590:;
  c->r[4]=0u+0x00004652u; // 800ED590
  c->r[0]=c->r[5]+0x00000010u; // 800ED594
  W16(c->r[5]+0x00000000u,c->r[4]); // 800ED598
  c->r[4]=0u+0x00000000u; // 800ED59C
  c->r[0]=c->r[29]-c->r[0]; // 800ED5A0
  cmps(c,0,(int32_t)c->r[8],0); // 800ED5A4
  W16(c->r[5]+0x00000002u,c->r[4]); // 800ED5A8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800ED5AC
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800ED5B0
  W32(c->r[5]+0x00000008u,c->r[8]); // 800ED5B4
  if (crb(c,2)) { goto L_800ED5C8; } // 800ED5B8
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800ED5BC
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 800ED5C0
  goto L_800ED5D0; // 800ED5C4
L_800ED5C8:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800ED5C8
  W32(c->r[3]+0x00000000u,c->r[5]); // 800ED5CC
L_800ED5D0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800ED5D0
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800ED5D4
  if (crb(c,2)) { goto L_800ED5E4; } // 800ED5D8
  W32(c->r[4]+0x00000008u,c->r[5]); // 800ED5DC
  goto L_800ED5E8; // 800ED5E0
L_800ED5E4:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 800ED5E4
L_800ED5E8:;
  c->r[8]=c->r[5]|c->r[5]; // 800ED5E8
L_800ED5EC:;
  c->r[0]=c->r[6]-c->r[30]; // 800ED5EC
  cmpu(c,0,c->r[0],0x00000014u); // 800ED5F0
  if (crb(c,0)) { goto L_800ED60C; } // 800ED5F4
  cmpu(c,0,c->r[7],0x00000001u); // 800ED5F8
  if (!crb(c,2)) { goto L_800ED614; } // 800ED5FC
  c->r[0]=R16(c->r[3]+0x00000012u); // 800ED600
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 800ED604
  if (!crb(c,2)) { goto L_800ED614; } // 800ED608
L_800ED60C:;
  c->r[30]=c->r[6]|c->r[6]; // 800ED60C
  goto L_800ED66C; // 800ED610
L_800ED614:;
  c->r[4]=0u+0x00004652u; // 800ED614
  c->r[0]=c->r[30]+0x00000010u; // 800ED618
  W16(c->r[30]+0x00000000u,c->r[4]); // 800ED61C
  c->r[4]=0u+0x00000000u; // 800ED620
  c->r[0]=c->r[6]-c->r[0]; // 800ED624
  cmps(c,0,(int32_t)c->r[8],0); // 800ED628
  W16(c->r[30]+0x00000002u,c->r[4]); // 800ED62C
  W32(c->r[30]+0x00000004u,c->r[0]); // 800ED630
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800ED634
  W32(c->r[30]+0x00000008u,c->r[8]); // 800ED638
  if (crb(c,2)) { goto L_800ED64C; } // 800ED63C
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800ED640
  W32(c->r[8]+0x0000000Cu,c->r[30]); // 800ED644
  goto L_800ED654; // 800ED648
L_800ED64C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800ED64C
  W32(c->r[3]+0x00000000u,c->r[30]); // 800ED650
L_800ED654:;
  cmps(c,0,(int32_t)c->r[4],0); // 800ED654
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800ED658
  if (crb(c,2)) { goto L_800ED668; } // 800ED65C
  W32(c->r[4]+0x00000008u,c->r[30]); // 800ED660
  goto L_800ED66C; // 800ED664
L_800ED668:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 800ED668
L_800ED66C:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 800ED66C
  c->r[5]=c->r[30]-c->r[31]; // 800ED670
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ED674
  if (crb(c,2)) { goto L_800ED688; } // 800ED678
  c->r[3]=c->r[31]|c->r[31]; // 800ED67C
  c->r[4]=0u+0x00000000u; // 800ED680
  c->lr=0x800ED688u; f_80004688(c); // 800ED684
L_800ED688:;
  c->r[5]=0u+0x00000000u; // 800ED688
  c->r[4]=c->r[29]+0x00000010u; // 800ED68C
  c->r[3]=c->r[5]|c->r[5]; // 800ED690
  c->r[6]=0u+0x00005544u; // 800ED694
  c->r[4]=c->r[30]-c->r[4]; // 800ED698
  c->r[0]=c->r[29]-c->r[31]; // 800ED69C
  c->r[3]=(rotl(c->r[28],15)&0x00008000u)|(c->r[3]&~0x00008000u); // 800ED6A0
  W16(c->r[29]+0x00000000u,c->r[6]); // 800ED6A4
  c->r[3]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[3]&~0x00007F00u); // 800ED6A8
  W32(c->r[29]+0x00000004u,c->r[4]); // 800ED6AC
  W32(c->r[29]+0x00000008u,c->r[5]); // 800ED6B0
  W32(c->r[29]+0x0000000Cu,c->r[5]); // 800ED6B4
  W16(c->r[29]+0x00000002u,c->r[3]); // 800ED6B8
  c->r[0]=R16(c->r[26]+0x00000010u); // 800ED6BC
  c->r[3]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 800ED6C0
  W16(c->r[29]+0x00000002u,c->r[3]); // 800ED6C4
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800ED6C8
  cmps(c,0,(int32_t)c->r[4],0); // 800ED6CC
  W32(c->r[29]+0x00000008u,c->r[4]); // 800ED6D0
  if (crb(c,2)) { goto L_800ED6E4; } // 800ED6D4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800ED6D8
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 800ED6DC
  goto L_800ED6EC; // 800ED6E0
L_800ED6E4:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 800ED6E4
  W32(c->r[26]+0x00000008u,c->r[29]); // 800ED6E8
L_800ED6EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800ED6EC
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 800ED6F0
  if (crb(c,2)) { goto L_800ED700; } // 800ED6F4
  W32(c->r[3]+0x00000008u,c->r[29]); // 800ED6F8
  goto L_800ED704; // 800ED6FC
L_800ED700:;
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 800ED700
L_800ED704:;
  c->r[11]=c->r[1]+0x00000020u; // 800ED704
  c->r[3]=c->r[27]|c->r[27]; // 800ED708
  c->lr=0x800ED710u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ED70C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED710
  c->lr=c->r[0]; // 800ED714
  c->r[1]=c->r[1]+0x00000020u; // 800ED718
  return; // 800ED71C
}

// AllocFromHead_
void f_800ED720(Ctx* __restrict c) {
  trace_call(0x800ED720u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED720
  c->r[0]=c->lr; // 800ED724
  c->r[3]=c->r[3]+0x0000003Cu; // 800ED728
  c->r[6]=c->r[4]|c->r[4]; // 800ED72C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED730
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800ED734
  c->r[8]=~(c->r[0]|c->r[0]); // 800ED738
  c->r[12]=0u+0x00000000u; // 800ED73C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ED740
  c->r[31]=0u+0xFFFFFFFFu; // 800ED744
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ED748
  c->r[30]=0u+0x00000000u; // 800ED74C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800ED750
  c->r[7]=R16(c->r[3]+0x00000012u); // 800ED754
  c->r[11]=R32(c->r[3]+0x00000000u); // 800ED758
  c->r[0]=rotl(c->r[7],0)&0x00000001u; // 800ED75C
  c->r[0]=cntlz(c->r[0]); // 800ED760
  c->r[10]=rotl(c->r[0],27)&0x07FFFFFFu; // 800ED764
  goto L_800ED7B8; // 800ED768
L_800ED76C:;
  c->r[29]=c->r[11]+0x00000010u; // 800ED76C
  c->r[9]=R32(c->r[11]+0x00000004u); // 800ED770
  c->r[7]=c->r[5]+c->r[29]; // 800ED774
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800ED778
  c->r[7]=c->r[8]&c->r[0]; // 800ED77C
  c->r[0]=c->r[7]-c->r[29]; // 800ED780
  c->r[0]=c->r[4]+c->r[0]; // 800ED784
  cmpu(c,0,c->r[9],c->r[0]); // 800ED788
  if (crb(c,0)) { goto L_800ED7B4; } // 800ED78C
  cmpu(c,0,c->r[31],c->r[9]); // 800ED790
  if (!crb(c,1)) { goto L_800ED7B4; } // 800ED794
  cmps(c,0,(int32_t)c->r[10],0); // 800ED798
  c->r[12]=c->r[11]|c->r[11]; // 800ED79C
  c->r[31]=c->r[9]|c->r[9]; // 800ED7A0
  c->r[30]=c->r[7]|c->r[7]; // 800ED7A4
  if (!crb(c,2)) { goto L_800ED7C0; } // 800ED7A8
  cmpu(c,0,c->r[9],c->r[4]); // 800ED7AC
  if (crb(c,2)) { goto L_800ED7C0; } // 800ED7B0
L_800ED7B4:;
  c->r[11]=R32(c->r[11]+0x0000000Cu); // 800ED7B4
L_800ED7B8:;
  cmps(c,0,(int32_t)c->r[11],0); // 800ED7B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800ED76C; } // 800ED7BC
L_800ED7C0:;
  cmps(c,0,(int32_t)c->r[12],0); // 800ED7C0
  if (crb(c,2)) { goto L_800ED7DC; } // 800ED7C4
  c->r[4]=c->r[12]|c->r[12]; // 800ED7C8
  c->r[5]=c->r[30]|c->r[30]; // 800ED7CC
  c->r[7]=0u+0x00000000u; // 800ED7D0
  c->lr=0x800ED7D8u; f_800ED4F4(c); // 800ED7D4
  goto L_800ED7E0; // 800ED7D8
L_800ED7DC:;
  c->r[3]=0u+0x00000000u; // 800ED7DC
L_800ED7E0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED7E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ED7E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ED7E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800ED7EC
  c->lr=c->r[0]; // 800ED7F0
  c->r[1]=c->r[1]+0x00000020u; // 800ED7F4
  return; // 800ED7F8
}

// AllocFromTail_
void f_800ED7FC(Ctx* __restrict c) {
  trace_call(0x800ED7FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED7FC
  c->r[0]=c->lr; // 800ED800
  c->r[3]=c->r[3]+0x0000003Cu; // 800ED804
  c->r[6]=c->r[4]|c->r[4]; // 800ED808
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED80C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800ED810
  c->r[7]=~(c->r[0]|c->r[0]); // 800ED814
  c->r[11]=0u+0x00000000u; // 800ED818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED81C
  c->r[12]=0u+0xFFFFFFFFu; // 800ED820
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ED824
  c->r[5]=R16(c->r[3]+0x00000012u); // 800ED828
  c->r[10]=R32(c->r[3]+0x00000004u); // 800ED82C
  c->r[0]=rotl(c->r[5],0)&0x00000001u; // 800ED830
  c->r[5]=0u+0x00000000u; // 800ED834
  c->r[0]=cntlz(c->r[0]); // 800ED838
  c->r[9]=rotl(c->r[0],27)&0x07FFFFFFu; // 800ED83C
  goto L_800ED888; // 800ED840
L_800ED844:;
  c->r[8]=R32(c->r[10]+0x00000004u); // 800ED844
  c->r[31]=c->r[10]+0x00000010u; // 800ED848
  c->r[0]=c->r[8]+c->r[31]; // 800ED84C
  c->r[0]=c->r[0]-c->r[4]; // 800ED850
  c->r[30]=c->r[7]&c->r[0]; // 800ED854
  c->r[0]=c->r[30]-c->r[31]; cr0(c,c->r[0]); // 800ED858
  if (crb(c,0)) { goto L_800ED884; } // 800ED85C
  cmpu(c,0,c->r[12],c->r[8]); // 800ED860
  if (!crb(c,1)) { goto L_800ED884; } // 800ED864
  cmps(c,0,(int32_t)c->r[9],0); // 800ED868
  c->r[11]=c->r[10]|c->r[10]; // 800ED86C
  c->r[12]=c->r[8]|c->r[8]; // 800ED870
  c->r[5]=c->r[30]|c->r[30]; // 800ED874
  if (!crb(c,2)) { goto L_800ED890; } // 800ED878
  cmpu(c,0,c->r[8],c->r[4]); // 800ED87C
  if (crb(c,2)) { goto L_800ED890; } // 800ED880
L_800ED884:;
  c->r[10]=R32(c->r[10]+0x00000008u); // 800ED884
L_800ED888:;
  cmps(c,0,(int32_t)c->r[10],0); // 800ED888
  if (!crb(c,2)) { IRQCHK(c); goto L_800ED844; } // 800ED88C
L_800ED890:;
  cmps(c,0,(int32_t)c->r[11],0); // 800ED890
  if (crb(c,2)) { goto L_800ED8A8; } // 800ED894
  c->r[4]=c->r[11]|c->r[11]; // 800ED898
  c->r[7]=0u+0x00000001u; // 800ED89C
  c->lr=0x800ED8A4u; f_800ED4F4(c); // 800ED8A0
  goto L_800ED8AC; // 800ED8A4
L_800ED8A8:;
  c->r[3]=0u+0x00000000u; // 800ED8A8
L_800ED8AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED8AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED8B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ED8B4
  c->lr=c->r[0]; // 800ED8B8
  c->r[1]=c->r[1]+0x00000010u; // 800ED8BC
  return; // 800ED8C0
}

// RecycleRegion_
void f_800ED8C4(Ctx* __restrict c) {
  trace_call(0x800ED8C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED8C4
  c->r[8]=0u+0x00000000u; // 800ED8C8
  c->r[5]=R32(c->r[4]+0x00000000u); // 800ED8CC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800ED8D0
  W32(c->r[1]+0x00000008u,c->r[5]); // 800ED8D4
  c->r[6]=R32(c->r[3]+0x00000000u); // 800ED8D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ED8DC
  goto L_800ED94C; // 800ED8E0
L_800ED8E4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800ED8E4
  cmpu(c,0,c->r[6],c->r[0]); // 800ED8E8
  if (!crb(c,0)) { goto L_800ED8F8; } // 800ED8EC
  c->r[8]=c->r[6]|c->r[6]; // 800ED8F0
  goto L_800ED948; // 800ED8F4
L_800ED8F8:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800ED8F8
  cmpu(c,0,c->r[6],c->r[0]); // 800ED8FC
  if (!crb(c,2)) { goto L_800ED954; } // 800ED900
  c->r[0]=R32(c->r[6]+0x00000004u); // 800ED904
  c->r[7]=R32(c->r[6]+0x00000008u); // 800ED908
  c->r[5]=c->r[6]+c->r[0]; // 800ED90C
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 800ED910
  c->r[0]=c->r[5]+0x00000010u; // 800ED914
  cmps(c,0,(int32_t)c->r[7],0); // 800ED918
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ED91C
  if (crb(c,2)) { goto L_800ED92C; } // 800ED920
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 800ED924
  goto L_800ED930; // 800ED928
L_800ED92C:;
  W32(c->r[3]+0x00000000u,c->r[6]); // 800ED92C
L_800ED930:;
  cmps(c,0,(int32_t)c->r[6],0); // 800ED930
  if (crb(c,2)) { goto L_800ED940; } // 800ED934
  W32(c->r[6]+0x00000008u,c->r[7]); // 800ED938
  goto L_800ED954; // 800ED93C
L_800ED940:;
  W32(c->r[3]+0x00000004u,c->r[7]); // 800ED940
  goto L_800ED954; // 800ED944
L_800ED948:;
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 800ED948
L_800ED94C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800ED94C
  if (!crb(c,2)) { IRQCHK(c); goto L_800ED8E4; } // 800ED950
L_800ED954:;
  cmps(c,0,(int32_t)c->r[8],0); // 800ED954
  if (crb(c,2)) { goto L_800ED9AC; } // 800ED958
  c->r[5]=R32(c->r[8]+0x00000004u); // 800ED95C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800ED960
  c->r[4]=c->r[8]+c->r[5]; // 800ED964
  c->r[4]=c->r[4]+0x00000010u; // 800ED968
  cmpu(c,0,c->r[4],c->r[0]); // 800ED96C
  if (!crb(c,2)) { goto L_800ED9AC; } // 800ED970
  c->r[5]=R32(c->r[8]+0x00000008u); // 800ED974
  W32(c->r[1]+0x00000008u,c->r[8]); // 800ED978
  cmps(c,0,(int32_t)c->r[5],0); // 800ED97C
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800ED980
  if (crb(c,2)) { goto L_800ED990; } // 800ED984
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800ED988
  goto L_800ED994; // 800ED98C
L_800ED990:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 800ED990
L_800ED994:;
  cmps(c,0,(int32_t)c->r[4],0); // 800ED994
  if (crb(c,2)) { goto L_800ED9A4; } // 800ED998
  W32(c->r[4]+0x00000008u,c->r[5]); // 800ED99C
  goto L_800ED9A8; // 800ED9A0
L_800ED9A4:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 800ED9A4
L_800ED9A8:;
  c->r[8]=c->r[5]|c->r[5]; // 800ED9A8
L_800ED9AC:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800ED9AC
  c->r[5]=R32(c->r[1]+0x00000008u); // 800ED9B0
  c->r[0]=c->r[6]-c->r[5]; // 800ED9B4
  cmpu(c,0,c->r[0],0x00000010u); // 800ED9B8
  if (!crb(c,0)) { goto L_800ED9C8; } // 800ED9BC
  c->r[3]=0u+0x00000000u; // 800ED9C0
  goto L_800EDA24; // 800ED9C4
L_800ED9C8:;
  c->r[4]=0u+0x00004652u; // 800ED9C8
  c->r[0]=c->r[5]+0x00000010u; // 800ED9CC
  W16(c->r[5]+0x00000000u,c->r[4]); // 800ED9D0
  c->r[4]=0u+0x00000000u; // 800ED9D4
  c->r[0]=c->r[6]-c->r[0]; // 800ED9D8
  cmps(c,0,(int32_t)c->r[8],0); // 800ED9DC
  W16(c->r[5]+0x00000002u,c->r[4]); // 800ED9E0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800ED9E4
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800ED9E8
  W32(c->r[5]+0x00000008u,c->r[8]); // 800ED9EC
  if (crb(c,2)) { goto L_800EDA00; } // 800ED9F0
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800ED9F4
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 800ED9F8
  goto L_800EDA08; // 800ED9FC
L_800EDA00:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800EDA00
  W32(c->r[3]+0x00000000u,c->r[5]); // 800EDA04
L_800EDA08:;
  cmps(c,0,(int32_t)c->r[4],0); // 800EDA08
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800EDA0C
  if (crb(c,2)) { goto L_800EDA1C; } // 800EDA10
  W32(c->r[4]+0x00000008u,c->r[5]); // 800EDA14
  goto L_800EDA20; // 800EDA18
L_800EDA1C:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 800EDA1C
L_800EDA20:;
  c->r[3]=0u+0x00000001u; // 800EDA20
L_800EDA24:;
  c->r[1]=c->r[1]+0x00000010u; // 800EDA24
  return; // 800EDA28
}

// MEMCreateExpHeapEx
void f_800EDA2C(Ctx* __restrict c) {
  trace_call(0x800EDA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDA2C
  c->r[0]=c->lr; // 800EDA30
  c->r[4]=c->r[4]+c->r[3]; // 800EDA34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDA38
  c->r[0]=c->r[3]+0x00000003u; // 800EDA3C
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800EDA40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDA44
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800EDA48
  cmpu(c,0,c->r[31],c->r[6]); // 800EDA4C
  if (crb(c,1)) { goto L_800EDA60; } // 800EDA50
  c->r[0]=c->r[6]-c->r[31]; // 800EDA54
  cmpu(c,0,c->r[0],0x00000064u); // 800EDA58
  if (!crb(c,0)) { goto L_800EDA68; } // 800EDA5C
L_800EDA60:;
  c->r[3]=0u+0x00000000u; // 800EDA60
  goto L_800EDAC8; // 800EDA64
L_800EDA68:;
  c->r[4]=0u+0x45580000u; // 800EDA68
  c->r[7]=c->r[5]|c->r[5]; // 800EDA6C
  c->r[3]=c->r[31]|c->r[31]; // 800EDA70
  c->r[5]=c->r[31]+0x00000050u; // 800EDA74
  c->r[4]=c->r[4]+0x00005048u; // 800EDA78
  c->lr=0x800EDA80u; f_800ED1C8(c); // 800EDA7C
  c->r[5]=0u+0x00000000u; // 800EDA80
  c->r[4]=0u+0x00004652u; // 800EDA84
  W16(c->r[31]+0x0000004Cu,c->r[5]); // 800EDA88
  c->r[3]=c->r[31]|c->r[31]; // 800EDA8C
  W16(c->r[31]+0x0000004Eu,c->r[5]); // 800EDA90
  c->r[6]=R32(c->r[31]+0x00000018u); // 800EDA94
  c->r[7]=R32(c->r[31]+0x0000001Cu); // 800EDA98
  c->r[0]=c->r[6]+0x00000010u; // 800EDA9C
  W16(c->r[6]+0x00000000u,c->r[4]); // 800EDAA0
  c->r[0]=c->r[7]-c->r[0]; // 800EDAA4
  W16(c->r[6]+0x00000002u,c->r[5]); // 800EDAA8
  W32(c->r[6]+0x00000004u,c->r[0]); // 800EDAAC
  W32(c->r[6]+0x00000008u,c->r[5]); // 800EDAB0
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 800EDAB4
  W32(c->r[31]+0x0000003Cu,c->r[6]); // 800EDAB8
  W32(c->r[31]+0x00000040u,c->r[6]); // 800EDABC
  W32(c->r[31]+0x00000044u,c->r[5]); // 800EDAC0
  W32(c->r[31]+0x00000048u,c->r[5]); // 800EDAC4
L_800EDAC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDAC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDACC
  c->lr=c->r[0]; // 800EDAD0
  c->r[1]=c->r[1]+0x00000010u; // 800EDAD4
  return; // 800EDAD8
}

// MEMDestroyExpHeap
void f_800EDADC(Ctx* __restrict c) {
  trace_call(0x800EDADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDADC
  c->r[0]=c->lr; // 800EDAE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDAE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDAE8
  c->r[31]=c->r[3]|c->r[3]; // 800EDAEC
  c->lr=0x800EDAF4u; f_800ED388(c); // 800EDAF0
  c->r[3]=c->r[31]|c->r[31]; // 800EDAF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDAF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDAFC
  c->lr=c->r[0]; // 800EDB00
  c->r[1]=c->r[1]+0x00000010u; // 800EDB04
  return; // 800EDB08
}

// MEMAllocFromExpHeapEx
void f_800EDB0C(Ctx* __restrict c) {
  trace_call(0x800EDB0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDB0C
  c->r[0]=c->lr; // 800EDB10
  cmps(c,0,(int32_t)c->r[4],0); // 800EDB14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDB18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EDB1C
  c->r[31]=c->r[5]|c->r[5]; // 800EDB20
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EDB24
  c->r[30]=c->r[4]|c->r[4]; // 800EDB28
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EDB2C
  c->r[29]=c->r[3]|c->r[3]; // 800EDB30
  if (!crb(c,2)) { goto L_800EDB3C; } // 800EDB34
  c->r[30]=0u+0x00000001u; // 800EDB38
L_800EDB3C:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 800EDB3C
  c->r[4]=c->r[30]+0x00000003u; // 800EDB40
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800EDB44
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDB48
  if (crb(c,2)) { goto L_800EDB58; } // 800EDB4C
  c->r[3]=c->r[3]+0x00000020u; // 800EDB50
  c->lr=0x800EDB58u; f_800B1A5C(c); // 800EDB54
L_800EDB58:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EDB58
  if (crb(c,0)) { goto L_800EDB74; } // 800EDB5C
  c->r[3]=c->r[29]|c->r[29]; // 800EDB60
  c->r[4]=c->r[30]|c->r[30]; // 800EDB64
  c->r[5]=c->r[31]|c->r[31]; // 800EDB68
  c->lr=0x800EDB70u; f_800ED720(c); // 800EDB6C
  goto L_800EDB84; // 800EDB70
L_800EDB74:;
  c->r[3]=c->r[29]|c->r[29]; // 800EDB74
  c->r[4]=c->r[30]|c->r[30]; // 800EDB78
  c->r[5]=0u-c->r[31]; // 800EDB7C
  c->lr=0x800EDB84u; f_800ED7FC(c); // 800EDB80
L_800EDB84:;
  c->r[0]=R32(c->r[29]+0x00000038u); // 800EDB84
  c->r[31]=c->r[3]|c->r[3]; // 800EDB88
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDB8C
  if (crb(c,2)) { goto L_800EDB9C; } // 800EDB90
  c->r[3]=c->r[29]+0x00000020u; // 800EDB94
  c->lr=0x800EDB9Cu; f_800B1B38(c); // 800EDB98
L_800EDB9C:;
  c->r[3]=c->r[31]|c->r[31]; // 800EDB9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EDBA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EDBA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EDBA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDBAC
  c->lr=c->r[0]; // 800EDBB0
  c->r[1]=c->r[1]+0x00000020u; // 800EDBB4
  return; // 800EDBB8
}

// MEMFreeToExpHeap
void f_800EDBBC(Ctx* __restrict c) {
  trace_call(0x800EDBBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDBBC
  c->r[0]=c->lr; // 800EDBC0
  cmps(c,0,(int32_t)c->r[4],0); // 800EDBC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDBC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EDBCC
  c->r[31]=c->r[4]|c->r[4]; // 800EDBD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EDBD4
  c->r[30]=c->r[3]|c->r[3]; // 800EDBD8
  if (crb(c,2)) { goto L_800EDC68; } // 800EDBDC
  c->r[0]=R32(c->r[3]+0x00000038u); // 800EDBE0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDBE4
  if (crb(c,2)) { goto L_800EDBF4; } // 800EDBE8
  c->r[3]=c->r[3]+0x00000020u; // 800EDBEC
  c->lr=0x800EDBF4u; f_800B1A5C(c); // 800EDBF0
L_800EDBF4:;
  c->r[0]=R16(c->r[31]+0xFFFFFFF2u); // 800EDBF4
  c->r[6]=c->r[31]+0xFFFFFFF0u; // 800EDBF8
  c->r[3]=c->r[30]+0x0000003Cu; // 800EDBFC
  c->r[0]=rotl(c->r[0],24)&0x0000007Fu; // 800EDC00
  c->r[0]=c->r[6]-c->r[0]; // 800EDC04
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EDC08
  c->r[0]=R32(c->r[31]+0xFFFFFFF4u); // 800EDC0C
  c->r[4]=c->r[6]+c->r[0]; // 800EDC10
  c->r[0]=c->r[4]+0x00000010u; // 800EDC14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800EDC18
  c->r[5]=R32(c->r[31]+0xFFFFFFF8u); // 800EDC1C
  c->r[4]=R32(c->r[31]+0xFFFFFFFCu); // 800EDC20
  cmps(c,0,(int32_t)c->r[5],0); // 800EDC24
  if (crb(c,2)) { goto L_800EDC34; } // 800EDC28
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800EDC2C
  goto L_800EDC38; // 800EDC30
L_800EDC34:;
  W32(c->r[3]+0x00000008u,c->r[4]); // 800EDC34
L_800EDC38:;
  cmps(c,0,(int32_t)c->r[4],0); // 800EDC38
  if (crb(c,2)) { goto L_800EDC48; } // 800EDC3C
  W32(c->r[4]+0x00000008u,c->r[5]); // 800EDC40
  goto L_800EDC4C; // 800EDC44
L_800EDC48:;
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 800EDC48
L_800EDC4C:;
  c->r[4]=c->r[1]+0x00000008u; // 800EDC4C
  c->lr=0x800EDC54u; f_800ED8C4(c); // 800EDC50
  c->r[0]=R32(c->r[30]+0x00000038u); // 800EDC54
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDC58
  if (crb(c,2)) { goto L_800EDC68; } // 800EDC5C
  c->r[3]=c->r[30]+0x00000020u; // 800EDC60
  c->lr=0x800EDC68u; f_800B1B38(c); // 800EDC64
L_800EDC68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDC68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EDC6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EDC70
  c->lr=c->r[0]; // 800EDC74
  c->r[1]=c->r[1]+0x00000020u; // 800EDC78
  return; // 800EDC7C
}

// MEMGetTotalFreeSizeForExpHeap
void f_800EDC80(Ctx* __restrict c) {
  trace_call(0x800EDC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDC80
  c->r[0]=c->lr; // 800EDC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDC88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDC8C
  c->r[31]=0u+0x00000000u; // 800EDC90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EDC94
  c->r[30]=c->r[3]|c->r[3]; // 800EDC98
  c->r[0]=R32(c->r[3]+0x00000038u); // 800EDC9C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDCA0
  if (crb(c,2)) { goto L_800EDCB0; } // 800EDCA4
  c->r[3]=c->r[3]+0x00000020u; // 800EDCA8
  c->lr=0x800EDCB0u; f_800B1A5C(c); // 800EDCAC
L_800EDCB0:;
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 800EDCB0
  goto L_800EDCC4; // 800EDCB4
L_800EDCB8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EDCB8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800EDCBC
  c->r[31]=c->r[31]+c->r[0]; // 800EDCC0
L_800EDCC4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800EDCC4
  if (!crb(c,2)) { IRQCHK(c); goto L_800EDCB8; } // 800EDCC8
  c->r[0]=R32(c->r[30]+0x00000038u); // 800EDCCC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDCD0
  if (crb(c,2)) { goto L_800EDCE0; } // 800EDCD4
  c->r[3]=c->r[30]+0x00000020u; // 800EDCD8
  c->lr=0x800EDCE0u; f_800B1B38(c); // 800EDCDC
L_800EDCE0:;
  c->r[3]=c->r[31]|c->r[31]; // 800EDCE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDCE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EDCE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDCEC
  c->lr=c->r[0]; // 800EDCF0
  c->r[1]=c->r[1]+0x00000010u; // 800EDCF4
  return; // 800EDCF8
}

// MEMGetAllocatableSizeForExpHeapEx
void f_800EDCFC(Ctx* __restrict c) {
  trace_call(0x800EDCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDCFC
  c->r[0]=c->lr; // 800EDD00
  c->r[5]=sraw(c,c->r[4],31); // 800EDD04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDD08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EDD0C
  c->r[31]=c->r[5]^c->r[4]; // 800EDD10
  c->r[31]=c->r[31]-c->r[5]; // 800EDD14
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EDD18
  c->r[30]=c->r[3]|c->r[3]; // 800EDD1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EDD20
  c->r[0]=R32(c->r[3]+0x00000038u); // 800EDD24
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDD28
  if (crb(c,2)) { goto L_800EDD38; } // 800EDD2C
  c->r[3]=c->r[3]+0x00000020u; // 800EDD30
  c->lr=0x800EDD38u; f_800B1A5C(c); // 800EDD34
L_800EDD38:;
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800EDD38
  c->r[6]=R32(c->r[30]+0x0000003Cu); // 800EDD3C
  c->r[4]=~(c->r[0]|c->r[0]); // 800EDD40
  c->r[29]=0u+0x00000000u; // 800EDD44
  c->r[7]=0u+0xFFFFFFFFu; // 800EDD48
  goto L_800EDD98; // 800EDD4C
L_800EDD50:;
  c->r[5]=c->r[6]+0x00000010u; // 800EDD50
  c->r[0]=R32(c->r[6]+0x00000004u); // 800EDD54
  c->r[3]=c->r[31]+c->r[5]; // 800EDD58
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800EDD5C
  c->r[0]=c->r[0]+c->r[5]; // 800EDD60
  c->r[3]=c->r[4]&c->r[3]; // 800EDD64
  cmpu(c,0,c->r[3],c->r[0]); // 800EDD68
  if (!crb(c,0)) { goto L_800EDD94; } // 800EDD6C
  c->r[0]=c->r[0]-c->r[3]; // 800EDD70
  c->r[3]=c->r[3]-c->r[5]; // 800EDD74
  cmpu(c,0,c->r[29],c->r[0]); // 800EDD78
  if (crb(c,0)) { goto L_800EDD8C; } // 800EDD7C
  if (!crb(c,2)) { goto L_800EDD94; } // 800EDD80
  cmpu(c,0,c->r[7],c->r[3]); // 800EDD84
  if (!crb(c,1)) { goto L_800EDD94; } // 800EDD88
L_800EDD8C:;
  c->r[29]=c->r[0]|c->r[0]; // 800EDD8C
  c->r[7]=c->r[3]|c->r[3]; // 800EDD90
L_800EDD94:;
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 800EDD94
L_800EDD98:;
  cmps(c,0,(int32_t)c->r[6],0); // 800EDD98
  if (!crb(c,2)) { IRQCHK(c); goto L_800EDD50; } // 800EDD9C
  c->r[0]=R32(c->r[30]+0x00000038u); // 800EDDA0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDDA4
  if (crb(c,2)) { goto L_800EDDB4; } // 800EDDA8
  c->r[3]=c->r[30]+0x00000020u; // 800EDDAC
  c->lr=0x800EDDB4u; f_800B1B38(c); // 800EDDB0
L_800EDDB4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EDDB4
  c->r[3]=c->r[29]|c->r[29]; // 800EDDB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EDDBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EDDC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDDC4
  c->lr=c->r[0]; // 800EDDC8
  c->r[1]=c->r[1]+0x00000020u; // 800EDDCC
  return; // 800EDDD0
}

// MEMSetGroupIDForExpHeap
void f_800EDDD4(Ctx* __restrict c) {
  trace_call(0x800EDDD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDDD4
  c->r[0]=c->lr; // 800EDDD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDDDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EDDE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EDDE4
  c->r[30]=c->r[4]|c->r[4]; // 800EDDE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EDDEC
  c->r[29]=c->r[3]|c->r[3]; // 800EDDF0
  c->lr=0x800EDDF8u; f_800B087C(c); // 800EDDF4
  c->r[31]=R16(c->r[29]+0x0000004Cu); // 800EDDF8
  W16(c->r[29]+0x0000004Cu,c->r[30]); // 800EDDFC
  c->lr=0x800EDE04u; f_800B08A4(c); // 800EDE00
  c->r[3]=c->r[31]|c->r[31]; // 800EDE04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EDE08
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EDE0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EDE10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDE14
  c->lr=c->r[0]; // 800EDE18
  c->r[1]=c->r[1]+0x00000020u; // 800EDE1C
  return; // 800EDE20
}

// MEMCreateFrmHeapEx
void f_800EDE24(Ctx* __restrict c) {
  trace_call(0x800EDE24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDE24
  c->r[0]=c->lr; // 800EDE28
  c->r[4]=c->r[4]+c->r[3]; // 800EDE2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDE30
  c->r[0]=c->r[3]+0x00000003u; // 800EDE34
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800EDE38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDE3C
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800EDE40
  cmpu(c,0,c->r[31],c->r[6]); // 800EDE44
  if (crb(c,1)) { goto L_800EDE58; } // 800EDE48
  c->r[0]=c->r[6]-c->r[31]; // 800EDE4C
  cmpu(c,0,c->r[0],0x00000048u); // 800EDE50
  if (!crb(c,0)) { goto L_800EDE60; } // 800EDE54
L_800EDE58:;
  c->r[3]=0u+0x00000000u; // 800EDE58
  goto L_800EDE94; // 800EDE5C
L_800EDE60:;
  c->r[4]=0u+0x46520000u; // 800EDE60
  c->r[7]=c->r[5]|c->r[5]; // 800EDE64
  c->r[3]=c->r[31]|c->r[31]; // 800EDE68
  c->r[5]=c->r[31]+0x00000048u; // 800EDE6C
  c->r[4]=c->r[4]+0x00004D48u; // 800EDE70
  c->lr=0x800EDE78u; f_800ED1C8(c); // 800EDE74
  c->r[4]=R32(c->r[31]+0x00000018u); // 800EDE78
  c->r[0]=0u+0x00000000u; // 800EDE7C
  c->r[3]=c->r[31]|c->r[31]; // 800EDE80
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 800EDE84
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800EDE88
  W32(c->r[31]+0x00000040u,c->r[4]); // 800EDE8C
  W32(c->r[31]+0x00000044u,c->r[0]); // 800EDE90
L_800EDE94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDE94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDE98
  c->lr=c->r[0]; // 800EDE9C
  c->r[1]=c->r[1]+0x00000010u; // 800EDEA0
  return; // 800EDEA4
}

// MEMDestroyFrmHeap
void f_800EDEA8(Ctx* __restrict c) {
  trace_call(0x800EDEA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDEA8
  c->r[0]=c->lr; // 800EDEAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDEB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDEB4
  c->r[31]=c->r[3]|c->r[3]; // 800EDEB8
  c->lr=0x800EDEC0u; f_800ED388(c); // 800EDEBC
  c->r[3]=c->r[31]|c->r[31]; // 800EDEC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDEC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDEC8
  c->lr=c->r[0]; // 800EDECC
  c->r[1]=c->r[1]+0x00000010u; // 800EDED0
  return; // 800EDED4
}

// MEMAllocFromFrmHeapEx
void f_800EDED8(Ctx* __restrict c) {
  trace_call(0x800EDED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDED8
  c->r[0]=c->lr; // 800EDEDC
  cmps(c,0,(int32_t)c->r[4],0); // 800EDEE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDEE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EDEE8
  c->r[31]=c->r[3]|c->r[3]; // 800EDEEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EDEF0
  c->r[30]=c->r[4]|c->r[4]; // 800EDEF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EDEF8
  c->r[29]=c->r[5]|c->r[5]; // 800EDEFC
  if (!crb(c,2)) { goto L_800EDF08; } // 800EDF00
  c->r[30]=0u+0x00000001u; // 800EDF04
L_800EDF08:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 800EDF08
  c->r[4]=c->r[30]+0x00000003u; // 800EDF0C
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800EDF10
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDF14
  if (crb(c,2)) { goto L_800EDF24; } // 800EDF18
  c->r[3]=c->r[3]+0x00000020u; // 800EDF1C
  c->lr=0x800EDF24u; f_800B1A5C(c); // 800EDF20
L_800EDF24:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EDF24
  if (crb(c,0)) { goto L_800EDF7C; } // 800EDF28
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800EDF2C
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 800EDF30
  c->r[5]=~(c->r[0]|c->r[0]); // 800EDF34
  c->r[0]=R32(c->r[31]+0x00000040u); // 800EDF38
  c->r[4]=c->r[29]+c->r[3]; // 800EDF3C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800EDF40
  c->r[29]=c->r[5]&c->r[4]; // 800EDF44
  c->r[30]=c->r[30]+c->r[29]; // 800EDF48
  cmpu(c,0,c->r[30],c->r[0]); // 800EDF4C
  if (!crb(c,1)) { goto L_800EDF5C; } // 800EDF50
  c->r[29]=0u+0x00000000u; // 800EDF54
  goto L_800EDFC4; // 800EDF58
L_800EDF5C:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 800EDF5C
  c->r[5]=c->r[30]-c->r[3]; // 800EDF60
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800EDF64
  if (crb(c,2)) { goto L_800EDF74; } // 800EDF68
  c->r[4]=0u+0x00000000u; // 800EDF6C
  c->lr=0x800EDF74u; f_80004688(c); // 800EDF70
L_800EDF74:;
  W32(c->r[31]+0x0000003Cu,c->r[30]); // 800EDF74
  goto L_800EDFC4; // 800EDF78
L_800EDF7C:;
  c->r[5]=R32(c->r[31]+0x00000040u); // 800EDF7C
  c->r[0]=addc(c,~c->r[29],0xFFFFFFFFu,1); // 800EDF80
  c->r[4]=~(c->r[0]|c->r[0]); // 800EDF84
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 800EDF88
  c->r[3]=c->r[5]-c->r[30]; // 800EDF8C
  c->r[29]=c->r[4]&c->r[3]; // 800EDF90
  cmpu(c,0,c->r[29],c->r[0]); // 800EDF94
  if (!crb(c,0)) { goto L_800EDFA4; } // 800EDF98
  c->r[29]=0u+0x00000000u; // 800EDF9C
  goto L_800EDFC4; // 800EDFA0
L_800EDFA4:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 800EDFA4
  c->r[5]=c->r[5]-c->r[29]; // 800EDFA8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800EDFAC
  if (crb(c,2)) { goto L_800EDFC0; } // 800EDFB0
  c->r[3]=c->r[29]|c->r[29]; // 800EDFB4
  c->r[4]=0u+0x00000000u; // 800EDFB8
  c->lr=0x800EDFC0u; f_80004688(c); // 800EDFBC
L_800EDFC0:;
  W32(c->r[31]+0x00000040u,c->r[29]); // 800EDFC0
L_800EDFC4:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 800EDFC4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EDFC8
  if (crb(c,2)) { goto L_800EDFD8; } // 800EDFCC
  c->r[3]=c->r[31]+0x00000020u; // 800EDFD0
  c->lr=0x800EDFD8u; f_800B1B38(c); // 800EDFD4
L_800EDFD8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EDFD8
  c->r[3]=c->r[29]|c->r[29]; // 800EDFDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EDFE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EDFE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDFE8
  c->lr=c->r[0]; // 800EDFEC
  c->r[1]=c->r[1]+0x00000020u; // 800EDFF0
  return; // 800EDFF4
}

// MEMFreeToFrmHeap
void f_800EDFF8(Ctx* __restrict c) {
  trace_call(0x800EDFF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDFF8
  c->r[0]=c->lr; // 800EDFFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE000
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE004
  c->r[31]=c->r[4]|c->r[4]; // 800EE008
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE00C
  c->r[30]=c->r[3]|c->r[3]; // 800EE010
  c->r[0]=R32(c->r[3]+0x00000038u); // 800EE014
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EE018
  if (crb(c,2)) { goto L_800EE028; } // 800EE01C
  c->r[3]=c->r[3]+0x00000020u; // 800EE020
  c->lr=0x800EE028u; f_800B1A5C(c); // 800EE024
L_800EE028:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800EE028
  if (crb(c,2)) { goto L_800EE040; } // 800EE02C
  c->r[3]=R32(c->r[30]+0x00000018u); // 800EE030
  c->r[0]=0u+0x00000000u; // 800EE034
  W32(c->r[30]+0x00000044u,c->r[0]); // 800EE038
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EE03C
L_800EE040:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 800EE040
  if (crb(c,2)) { goto L_800EE06C; } // 800EE044
  c->r[3]=R32(c->r[30]+0x00000044u); // 800EE048
  goto L_800EE05C; // 800EE04C
L_800EE050:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800EE050
  W32(c->r[3]+0x00000008u,c->r[0]); // 800EE054
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800EE058
L_800EE05C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800EE05C
  if (!crb(c,2)) { IRQCHK(c); goto L_800EE050; } // 800EE060
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800EE064
  W32(c->r[30]+0x00000040u,c->r[0]); // 800EE068
L_800EE06C:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 800EE06C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800EE070
  if (crb(c,2)) { goto L_800EE080; } // 800EE074
  c->r[3]=c->r[30]+0x00000020u; // 800EE078
  c->lr=0x800EE080u; f_800B1B38(c); // 800EE07C
L_800EE080:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE080
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE084
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EE088
  c->lr=c->r[0]; // 800EE08C
  c->r[1]=c->r[1]+0x00000010u; // 800EE090
  return; // 800EE094
}

// MEMGetAllocatableSizeForFrmHeapEx
void f_800EE098(Ctx* __restrict c) {
  trace_call(0x800EE098u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE098
  c->r[0]=c->lr; // 800EE09C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE0A0
  c->r[0]=sraw(c,c->r[4],31); // 800EE0A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE0A8
  c->r[31]=c->r[0]^c->r[4]; // 800EE0AC
  c->r[31]=c->r[31]-c->r[0]; // 800EE0B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE0B4
  c->r[30]=c->r[3]|c->r[3]; // 800EE0B8
  c->lr=0x800EE0C0u; f_800B087C(c); // 800EE0BC
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800EE0C0
  c->r[4]=c->r[31]+0xFFFFFFFFu; // 800EE0C4
  c->r[5]=~(c->r[4]|c->r[4]); // 800EE0C8
  c->r[6]=R32(c->r[30]+0x00000040u); // 800EE0CC
  c->r[4]=c->r[31]+c->r[0]; // 800EE0D0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800EE0D4
  c->r[0]=c->r[5]&c->r[0]; // 800EE0D8
  cmpu(c,0,c->r[0],c->r[6]); // 800EE0DC
  if (!crb(c,1)) { goto L_800EE0EC; } // 800EE0E0
  c->r[31]=0u+0x00000000u; // 800EE0E4
  goto L_800EE0F0; // 800EE0E8
L_800EE0EC:;
  c->r[31]=c->r[6]-c->r[0]; // 800EE0EC
L_800EE0F0:;
  c->lr=0x800EE0F4u; f_800B08A4(c); // 800EE0F0
  c->r[3]=c->r[31]|c->r[31]; // 800EE0F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE0F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EE0FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE100
  c->lr=c->r[0]; // 800EE104
  c->r[1]=c->r[1]+0x00000010u; // 800EE108
  return; // 800EE10C
}

// AllocatorAllocForExpHeap_
void f_800EE110(Ctx* __restrict c) {
  trace_call(0x800EE110u);
  c->r[5]=c->r[3]|c->r[3]; // 800EE110
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EE114
  c->r[5]=R32(c->r[5]+0x00000008u); // 800EE118
  f_800EDB0C(c); return; // 800EE11C
}

// AllocatorFreeForExpHeap_
void f_800EE120(Ctx* __restrict c) {
  trace_call(0x800EE120u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EE120
  f_800EDBBC(c); return; // 800EE124
}

// MEMAllocFromAllocator
void f_800EE128(Ctx* __restrict c) {
  trace_call(0x800EE128u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800EE128
  c->r[12]=R32(c->r[5]+0x00000000u); // 800EE12C
  c->ctr=c->r[12]; // 800EE130
  if (true) { dispatch(c,c->ctr); return; } // 800EE134
}

// MEMFreeToAllocator
void f_800EE138(Ctx* __restrict c) {
  trace_call(0x800EE138u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800EE138
  c->r[12]=R32(c->r[5]+0x00000004u); // 800EE13C
  c->ctr=c->r[12]; // 800EE140
  if (true) { dispatch(c,c->ctr); return; } // 800EE144
}

// MEMInitAllocatorForExpHeap
void f_800EE148(Ctx* __restrict c) {
  trace_call(0x800EE148u);
  c->r[6]=c->r[2]+0xFFFF96F8u; // 800EE148
  c->r[0]=0u+0x00000000u; // 800EE14C
  W32(c->r[3]+0x00000000u,c->r[6]); // 800EE150
  W32(c->r[3]+0x00000004u,c->r[4]); // 800EE154
  W32(c->r[3]+0x00000008u,c->r[5]); // 800EE158
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EE15C
  return; // 800EE160
}

// MEMInitList
void f_800EE164(Ctx* __restrict c) {
  trace_call(0x800EE164u);
  c->r[0]=0u+0x00000000u; // 800EE164
  W16(c->r[3]+0x0000000Au,c->r[4]); // 800EE168
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE16C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800EE170
  W16(c->r[3]+0x00000008u,c->r[0]); // 800EE174
  return; // 800EE178
}

// MEMAppendListObject
void f_800EE17C(Ctx* __restrict c) {
  trace_call(0x800EE17Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE17C
  cmps(c,0,(int32_t)c->r[0],0); // 800EE180
  if (!crb(c,2)) { goto L_800EE1B4; } // 800EE184
  c->r[5]=R16(c->r[3]+0x0000000Au); // 800EE188
  c->r[0]=0u+0x00000000u; // 800EE18C
  c->r[5]=c->r[4]+c->r[5]; // 800EE190
  W32(c->r[5]+0x00000004u,c->r[0]); // 800EE194
  W32(c->r[5]+0x00000000u,c->r[0]); // 800EE198
  c->r[5]=R16(c->r[3]+0x00000008u); // 800EE19C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800EE1A0
  c->r[0]=c->r[5]+0x00000001u; // 800EE1A4
  W32(c->r[3]+0x00000004u,c->r[4]); // 800EE1A8
  W16(c->r[3]+0x00000008u,c->r[0]); // 800EE1AC
  return; // 800EE1B0
L_800EE1B4:;
  c->r[6]=R16(c->r[3]+0x0000000Au); // 800EE1B4
  c->r[0]=0u+0x00000000u; // 800EE1B8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EE1BC
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[5]); c->r[6]=ea;} // 800EE1C0
  W32(c->r[6]+0x00000004u,c->r[0]); // 800EE1C4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EE1C8
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800EE1CC
  c->r[5]=c->r[5]+c->r[0]; // 800EE1D0
  W32(c->r[5]+0x00000004u,c->r[4]); // 800EE1D4
  c->r[5]=R16(c->r[3]+0x00000008u); // 800EE1D8
  W32(c->r[3]+0x00000004u,c->r[4]); // 800EE1DC
  c->r[0]=c->r[5]+0x00000001u; // 800EE1E0
  W16(c->r[3]+0x00000008u,c->r[0]); // 800EE1E4
  return; // 800EE1E8
}

// MEMRemoveListObject
void f_800EE1EC(Ctx* __restrict c) {
  trace_call(0x800EE1ECu);
  c->r[5]=R16(c->r[3]+0x0000000Au); // 800EE1EC
  c->r[6]=c->r[4]+c->r[5]; // 800EE1F0
  c->r[4]=R32(c->r[4]+c->r[5]); // 800EE1F4
  cmps(c,0,(int32_t)c->r[4],0); // 800EE1F8
  if (!crb(c,2)) { goto L_800EE20C; } // 800EE1FC
  c->r[0]=R32(c->r[6]+0x00000004u); // 800EE200
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE204
  goto L_800EE218; // 800EE208
L_800EE20C:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 800EE20C
  c->r[4]=c->r[4]+c->r[5]; // 800EE210
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EE214
L_800EE218:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800EE218
  cmps(c,0,(int32_t)c->r[5],0); // 800EE21C
  if (!crb(c,2)) { goto L_800EE230; } // 800EE220
  c->r[0]=R32(c->r[6]+0x00000000u); // 800EE224
  W32(c->r[3]+0x00000004u,c->r[0]); // 800EE228
  goto L_800EE23C; // 800EE22C
L_800EE230:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800EE230
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800EE234
  W32(c->r[5]+c->r[0],c->r[4]); // 800EE238
L_800EE23C:;
  c->r[0]=0u+0x00000000u; // 800EE23C
  W32(c->r[6]+0x00000000u,c->r[0]); // 800EE240
  W32(c->r[6]+0x00000004u,c->r[0]); // 800EE244
  c->r[4]=R16(c->r[3]+0x00000008u); // 800EE248
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800EE24C
  W16(c->r[3]+0x00000008u,c->r[0]); // 800EE250
  return; // 800EE254
}

// MEMGetNextListObject
void f_800EE258(Ctx* __restrict c) {
  trace_call(0x800EE258u);
  cmps(c,0,(int32_t)c->r[4],0); // 800EE258
  if (!crb(c,2)) { goto L_800EE268; } // 800EE25C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EE260
  return; // 800EE264
L_800EE268:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800EE268
  c->r[3]=c->r[4]+c->r[0]; // 800EE26C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EE270
  return; // 800EE274
}

// EUARTInit
void f_800EE278(Ctx* __restrict c) {
  trace_call(0x800EE278u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE278
  c->r[0]=c->lr; // 800EE27C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EE280
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EE284
  c->r[0]=R32(c->r[13]+0xFFFF9280u); // 800EE288
  cmps(c,0,(int32_t)c->r[0],0); // 800EE28C
  if (crb(c,2)) { goto L_800EE29C; } // 800EE290
  c->r[3]=0u+0x00000001u; // 800EE294
  goto L_800EE360; // 800EE298
L_800EE29C:;
  c->lr=0x800EE2A0u; f_800A9880(c); // 800EE29C
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 800EE2A0
  if (!crb(c,2)) { goto L_800EE2B8; } // 800EE2A4
  c->r[0]=0u+0x00000002u; // 800EE2A8
  c->r[3]=0u+0x00000000u; // 800EE2AC
  W32(c->r[13]+0xFFFF9284u,c->r[0]); // 800EE2B0
  goto L_800EE360; // 800EE2B4
L_800EE2B8:;
  c->lr=0x800EE2BCu; f_800B087C(c); // 800EE2B8
  c->r[0]=0u+0x000000F2u; // 800EE2BC
  c->r[31]=c->r[3]|c->r[3]; // 800EE2C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800EE2C4
  c->r[6]=c->r[1]+0x00000008u; // 800EE2C8
  c->r[3]=0u+0x00000000u; // 800EE2CC
  c->r[4]=0u+0x00000001u; // 800EE2D0
  c->r[5]=0u+0xB0000000u; // 800EE2D4
  c->r[7]=0u+0x00000001u; // 800EE2D8
  c->lr=0x800EE2E0u; f_800E5DD4(c); // 800EE2DC
  cmps(c,0,(int32_t)c->r[3],0); // 800EE2E0
  if (!crb(c,2)) { goto L_800EE300; } // 800EE2E4
  c->r[0]=0u+0x00000005u; // 800EE2E8
  c->r[3]=c->r[31]|c->r[31]; // 800EE2EC
  W32(c->r[13]+0xFFFF9284u,c->r[0]); // 800EE2F0
  c->lr=0x800EE2F8u; f_800B08A4(c); // 800EE2F4
  c->r[3]=0u+0x00000000u; // 800EE2F8
  goto L_800EE360; // 800EE2FC
L_800EE300:;
  c->r[0]=0u+0x000000F3u; // 800EE300
  c->r[6]=c->r[1]+0x00000008u; // 800EE304
  W8(c->r[1]+0x00000008u,c->r[0]); // 800EE308
  c->r[3]=0u+0x00000000u; // 800EE30C
  c->r[4]=0u+0x00000001u; // 800EE310
  c->r[5]=0u+0xB0000000u; // 800EE314
  c->r[7]=0u+0x00000001u; // 800EE318
  c->lr=0x800EE320u; f_800E5DD4(c); // 800EE31C
  cmps(c,0,(int32_t)c->r[3],0); // 800EE320
  if (!crb(c,2)) { goto L_800EE340; } // 800EE324
  c->r[0]=0u+0x00000005u; // 800EE328
  c->r[3]=c->r[31]|c->r[31]; // 800EE32C
  W32(c->r[13]+0xFFFF9284u,c->r[0]); // 800EE330
  c->lr=0x800EE338u; f_800B08A4(c); // 800EE334
  c->r[3]=0u+0x00000000u; // 800EE338
  goto L_800EE360; // 800EE33C
L_800EE340:;
  c->r[3]=c->r[31]|c->r[31]; // 800EE340
  c->lr=0x800EE348u; f_800B08A4(c); // 800EE344
  c->r[0]=0u+0x00000000u; // 800EE348
  c->r[3]=0u+0x00000001u; // 800EE34C
  W32(c->r[13]+0xFFFF9280u,c->r[3]); // 800EE350
  c->r[3]=0u+0x00000001u; // 800EE354
  W32(c->r[13]+0xFFFF9284u,c->r[0]); // 800EE358
  W32(c->r[13]+0xFFFF9288u,c->r[0]); // 800EE35C
L_800EE360:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EE360
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EE364
  c->lr=c->r[0]; // 800EE368
  c->r[1]=c->r[1]+0x00000020u; // 800EE36C
  return; // 800EE370
}

// InitializeUART
void f_800EE374(Ctx* __restrict c) {
  trace_call(0x800EE374u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE374
  c->r[0]=c->lr; // 800EE378
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE37C
  c->lr=0x800EE384u; f_800A9880(c); // 800EE380
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 800EE384
  if (!crb(c,2)) { goto L_800EE39C; } // 800EE388
  c->r[0]=0u+0x00000000u; // 800EE38C
  c->r[3]=0u+0x00000002u; // 800EE390
  W32(c->r[13]+0xFFFF928Cu,c->r[0]); // 800EE394
  goto L_800EE3AC; // 800EE398
L_800EE39C:;
  c->r[4]=0u+0xA5FF0000u; // 800EE39C
  c->r[3]=0u+0x00000000u; // 800EE3A0
  c->r[0]=c->r[4]+0x0000005Au; // 800EE3A4
  W32(c->r[13]+0xFFFF928Cu,c->r[0]); // 800EE3A8
L_800EE3AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE3AC
  c->lr=c->r[0]; // 800EE3B0
  c->r[1]=c->r[1]+0x00000010u; // 800EE3B4
  return; // 800EE3B8
}

// WriteUARTN
void f_800EE3BC(Ctx* __restrict c) {
  trace_call(0x800EE3BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE3BC
  c->r[0]=c->lr; // 800EE3C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE3C4
  c->r[11]=c->r[1]+0x00000030u; // 800EE3C8
  c->lr=0x800EE3D0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EE3CC
  c->r[5]=R32(c->r[13]+0xFFFF928Cu); // 800EE3D0
  c->r[30]=c->r[3]|c->r[3]; // 800EE3D4
  c->r[31]=c->r[4]|c->r[4]; // 800EE3D8
  c->r[0]=c->r[5]+0x5A010000u; // 800EE3DC
  cmpu(c,0,c->r[0],0x0000005Au); // 800EE3E0
  if (crb(c,2)) { goto L_800EE3F0; } // 800EE3E4
  c->r[3]=0u+0x00000002u; // 800EE3E8
  goto L_800EE5D0; // 800EE3EC
L_800EE3F0:;
  c->r[0]=R32(c->r[13]+0xFFFF9280u); // 800EE3F0
  cmps(c,0,(int32_t)c->r[0],0); // 800EE3F4
  if (!crb(c,2)) { goto L_800EE410; } // 800EE3F8
  c->lr=0x800EE400u; f_800EE278(c); // 800EE3FC
  cmps(c,0,(int32_t)c->r[3],0); // 800EE400
  if (!crb(c,2)) { goto L_800EE410; } // 800EE404
  c->r[3]=0u+0x00000002u; // 800EE408
  goto L_800EE5D0; // 800EE40C
L_800EE410:;
  c->r[0]=R32(c->r[13]+0xFFFF9280u); // 800EE410
  cmps(c,0,(int32_t)c->r[0],0); // 800EE414
  if (!crb(c,2)) { goto L_800EE42C; } // 800EE418
  c->r[0]=0u+0x00000001u; // 800EE41C
  c->r[3]=0u+0x00000002u; // 800EE420
  W32(c->r[13]+0xFFFF9284u,c->r[0]); // 800EE424
  goto L_800EE5D0; // 800EE428
L_800EE42C:;
  c->r[3]=0u+0x00000000u; // 800EE42C
  c->r[4]=0u+0x00000001u; // 800EE430
  c->r[5]=0u+0x00000000u; // 800EE434
  c->lr=0x800EE43Cu; f_800E54F8(c); // 800EE438
  cmps(c,0,(int32_t)c->r[3],0); // 800EE43C
  if (!crb(c,2)) { goto L_800EE44C; } // 800EE440
  c->r[3]=0u+0x00000000u; // 800EE444
  goto L_800EE5D0; // 800EE448
L_800EE44C:;
  c->r[4]=c->r[30]|c->r[30]; // 800EE44C
  c->r[3]=0u+0x0000000Du; // 800EE450
  goto L_800EE46C; // 800EE454
L_800EE458:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800EE458
  cmps(c,0,(int32_t)c->r[0],10); // 800EE45C
  if (!crb(c,2)) { goto L_800EE468; } // 800EE460
  W8(c->r[4]+0x00000000u,c->r[3]); // 800EE464
L_800EE468:;
  c->r[4]=c->r[4]+0x00000001u; // 800EE468
L_800EE46C:;
  c->r[0]=c->r[4]-c->r[30]; // 800EE46C
  cmpu(c,0,c->r[0],c->r[31]); // 800EE470
  if (crb(c,0)) { IRQCHK(c); goto L_800EE458; } // 800EE474
  c->r[3]=0u+0xB0000000u; // 800EE478
  c->r[28]=R32(c->r[2]+0xFFFF96E8u); // 800EE47C
  c->r[0]=c->r[3]+0x00000100u; // 800EE480
  c->r[26]=0u+0x00000000u; // 800EE484
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE488
  c->r[29]=0u+0x30000000u; // 800EE48C
  goto L_800EE5BC; // 800EE490
L_800EE494:;
  c->r[5]=c->r[28]|c->r[28]; // 800EE494
  c->r[3]=0u+0x00000000u; // 800EE498
  c->r[4]=0u+0x00000001u; // 800EE49C
  c->lr=0x800EE4A4u; f_800E4D64(c); // 800EE4A0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE4A4
  if (!crb(c,2)) { goto L_800EE4B4; } // 800EE4A8
  c->r[27]=0u+0xFFFFFFFFu; // 800EE4AC
  goto L_800EE510; // 800EE4B0
L_800EE4B4:;
  c->r[0]=c->r[29]+0x00000100u; // 800EE4B4
  c->r[4]=c->r[1]+0x00000008u; // 800EE4B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EE4BC
  c->r[3]=0u+0x00000000u; // 800EE4C0
  c->r[5]=0u+0x00000004u; // 800EE4C4
  c->r[6]=0u+0x00000001u; // 800EE4C8
  c->r[7]=0u+0x00000000u; // 800EE4CC
  c->lr=0x800EE4D4u; f_800E42FC(c); // 800EE4D0
  c->r[3]=0u+0x00000000u; // 800EE4D4
  c->lr=0x800EE4DCu; f_800E4714(c); // 800EE4D8
  c->r[4]=c->r[1]+0x0000000Cu; // 800EE4DC
  c->r[3]=0u+0x00000000u; // 800EE4E0
  c->r[5]=0u+0x00000004u; // 800EE4E4
  c->r[6]=0u+0x00000000u; // 800EE4E8
  c->r[7]=0u+0x00000000u; // 800EE4EC
  c->lr=0x800EE4F4u; f_800E42FC(c); // 800EE4F0
  c->r[3]=0u+0x00000000u; // 800EE4F4
  c->lr=0x800EE4FCu; f_800E4714(c); // 800EE4F8
  c->r[3]=0u+0x00000000u; // 800EE4FC
  c->lr=0x800EE504u; f_800E4E94(c); // 800EE500
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800EE504
  c->r[0]=rotl(c->r[0],8)&0x0000003Fu; // 800EE508
  c->r[27]=addc(c,~c->r[0],0x00000020u,1); // 800EE50C
L_800EE510:;
  cmps(c,0,(int32_t)c->r[27],0); // 800EE510
  if (!crb(c,0)) { goto L_800EE520; } // 800EE514
  c->r[26]=0u+0x00000003u; // 800EE518
  goto L_800EE5C4; // 800EE51C
L_800EE520:;
  cmps(c,0,(int32_t)c->r[27],32); // 800EE520
  if (!crb(c,2)) { goto L_800EE5BC; } // 800EE524
  c->r[5]=c->r[28]|c->r[28]; // 800EE528
  c->r[3]=0u+0x00000000u; // 800EE52C
  c->r[4]=0u+0x00000001u; // 800EE530
  c->lr=0x800EE538u; f_800E4D64(c); // 800EE534
  cmps(c,0,(int32_t)c->r[3],0); // 800EE538
  if (!crb(c,2)) { goto L_800EE548; } // 800EE53C
  c->r[26]=0u+0x00000003u; // 800EE540
  goto L_800EE5C4; // 800EE544
L_800EE548:;
  c->r[4]=c->r[1]+0x00000014u; // 800EE548
  c->r[3]=0u+0x00000000u; // 800EE54C
  c->r[5]=0u+0x00000004u; // 800EE550
  c->r[6]=0u+0x00000001u; // 800EE554
  c->r[7]=0u+0x00000000u; // 800EE558
  c->lr=0x800EE560u; f_800E42FC(c); // 800EE55C
  c->r[3]=0u+0x00000000u; // 800EE560
  c->lr=0x800EE568u; f_800E4714(c); // 800EE564
  goto L_800EE5A4; // 800EE568
L_800EE56C:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 800EE56C
  c->r[4]=c->r[1]+0x00000010u; // 800EE570
  c->r[3]=0u+0x00000000u; // 800EE574
  c->r[5]=0u+0x00000004u; // 800EE578
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 800EE57C
  c->r[6]=0u+0x00000001u; // 800EE580
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EE584
  c->r[7]=0u+0x00000000u; // 800EE588
  c->lr=0x800EE590u; f_800E42FC(c); // 800EE58C
  c->r[3]=0u+0x00000000u; // 800EE590
  c->lr=0x800EE598u; f_800E4714(c); // 800EE594
  c->r[30]=c->r[30]+0x00000001u; // 800EE598
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800EE59C
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800EE5A0
L_800EE5A4:;
  cmps(c,0,(int32_t)c->r[27],0); // 800EE5A4
  if (!crb(c,1)) { goto L_800EE5B4; } // 800EE5A8
  cmps(c,0,(int32_t)c->r[31],0); // 800EE5AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800EE56C; } // 800EE5B0
L_800EE5B4:;
  c->r[3]=0u+0x00000000u; // 800EE5B4
  c->lr=0x800EE5BCu; f_800E4E94(c); // 800EE5B8
L_800EE5BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EE5BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800EE494; } // 800EE5C0
L_800EE5C4:;
  c->r[3]=0u+0x00000000u; // 800EE5C4
  c->lr=0x800EE5CCu; f_800E55F4(c); // 800EE5C8
  c->r[3]=c->r[26]|c->r[26]; // 800EE5CC
L_800EE5D0:;
  c->r[11]=c->r[1]+0x00000030u; // 800EE5D0
  c->lr=0x800EE5D8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EE5D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE5D8
  c->lr=c->r[0]; // 800EE5DC
  c->r[1]=c->r[1]+0x00000030u; // 800EE5E0
  return; // 800EE5E4
}

// ISFS_OpenLib
void f_800EE5E8(Ctx* __restrict c) {
  trace_call(0x800EE5E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE5E8
  c->r[0]=c->lr; // 800EE5EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE5F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE5F4
  c->r[31]=0u+0x00000000u; // 800EE5F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE5FC
  c->r[0]=R32(c->r[13]+0xFFFF9290u); // 800EE600
  cmps(c,0,(int32_t)c->r[0],0); // 800EE604
  if (!crb(c,2)) { goto L_800EE61C; } // 800EE608
  c->lr=0x800EE610u; f_800EFBA8(c); // 800EE60C
  W32(c->r[13]+0xFFFF929Cu,c->r[3]); // 800EE610
  c->lr=0x800EE618u; f_800EFBA0(c); // 800EE614
  W32(c->r[13]+0xFFFF92A0u,c->r[3]); // 800EE618
L_800EE61C:;
  c->r[3]=R32(c->r[13]+0xFFFF929Cu); // 800EE61C
  c->r[0]=R32(c->r[13]+0xFFFF9290u); // 800EE620
  c->r[3]=c->r[3]+0x0000001Fu; // 800EE624
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFE0u; // 800EE628
  cmps(c,0,(int32_t)c->r[0],0); // 800EE62C
  W32(c->r[13]+0xFFFF9294u,c->r[3]); // 800EE630
  if (!crb(c,2)) { goto L_800EE660; } // 800EE634
  c->r[0]=R32(c->r[13]+0xFFFF92A0u); // 800EE638
  c->r[4]=c->r[3]+0x00000040u; // 800EE63C
  cmpu(c,0,c->r[4],c->r[0]); // 800EE640
  if (!crb(c,1)) { goto L_800EE660; } // 800EE644
  c->r[3]=0u+0x80280000u; // 800EE648
  c->r[3]=c->r[3]+0xFFFFB338u; // 800EE64C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EE650
  c->lr=0x800EE658u; f_800ACBA4(c); // 800EE654
  c->r[31]=0u+0xFFFFFFEAu; // 800EE658
  goto L_800EE6F4; // 800EE65C
L_800EE660:;
  c->r[4]=c->r[13]+0xFFFF82B0u; // 800EE660
  c->lr=0x800EE668u; f_800DB9A8(c); // 800EE664
  c->r[3]=R32(c->r[13]+0xFFFF9294u); // 800EE668
  c->r[4]=0u+0x00000000u; // 800EE66C
  c->lr=0x800EE674u; f_800F0468(c); // 800EE670
  cmps(c,0,(int32_t)c->r[3],0); // 800EE674
  W32(c->r[13]+0xFFFF82A8u,c->r[3]); // 800EE678
  if (!crb(c,0)) { goto L_800EE688; } // 800EE67C
  c->r[31]=c->r[3]|c->r[3]; // 800EE680
  goto L_800EE6F4; // 800EE684
L_800EE688:;
  c->r[4]=R32(c->r[13]+0xFFFF9290u); // 800EE688
  c->r[30]=R32(c->r[13]+0xFFFF9294u); // 800EE68C
  cmps(c,0,(int32_t)c->r[4],0); // 800EE690
  if (!crb(c,2)) { goto L_800EE6C0; } // 800EE694
  c->r[0]=R32(c->r[13]+0xFFFF92A0u); // 800EE698
  c->r[3]=c->r[30]+0x00001540u; // 800EE69C
  cmpu(c,0,c->r[3],c->r[0]); // 800EE6A0
  if (!crb(c,1)) { goto L_800EE6C0; } // 800EE6A4
  c->r[3]=0u+0x80280000u; // 800EE6A8
  c->r[3]=c->r[3]+0xFFFFB338u; // 800EE6AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EE6B0
  c->lr=0x800EE6B8u; f_800ACBA4(c); // 800EE6B4
  c->r[31]=0u+0xFFFFFFEAu; // 800EE6B8
  goto L_800EE6F4; // 800EE6BC
L_800EE6C0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800EE6C0
  if (!crb(c,2)) { goto L_800EE6D8; } // 800EE6C4
  c->r[3]=c->r[30]+0x00001540u; // 800EE6C8
  c->lr=0x800EE6D0u; f_800EFBB0(c); // 800EE6CC
  c->r[0]=0u+0x00000001u; // 800EE6D0
  W32(c->r[13]+0xFFFF9290u,c->r[0]); // 800EE6D4
L_800EE6D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800EE6D8
  c->r[4]=0u+0x00001540u; // 800EE6DC
  c->lr=0x800EE6E4u; f_800F1528(c); // 800EE6E0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE6E4
  W32(c->r[13]+0xFFFF92A4u,c->r[3]); // 800EE6E8
  if (!crb(c,0)) { goto L_800EE6F4; } // 800EE6EC
  c->r[31]=0u+0xFFFFFFEAu; // 800EE6F0
L_800EE6F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800EE6F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE6F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EE6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE700
  c->lr=c->r[0]; // 800EE704
  c->r[1]=c->r[1]+0x00000010u; // 800EE708
  return; // 800EE70C
}

// _isfsFuncCb
void f_800EE710(Ctx* __restrict c) {
  trace_call(0x800EE710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE710
  c->r[0]=c->lr; // 800EE714
  cmps(c,1,(int32_t)c->r[3],0); // 800EE718
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE71C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE720
  c->r[31]=c->r[4]|c->r[4]; // 800EE724
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE728
  c->r[30]=c->r[3]|c->r[3]; // 800EE72C
  if (crb(c,4)) { goto L_800EE83C; } // 800EE730
  c->r[0]=R32(c->r[4]+0x00000108u); // 800EE734
  cmps(c,0,(int32_t)c->r[0],3); // 800EE738
  if (crb(c,2)) { goto L_800EE79C; } // 800EE73C
  if (!crb(c,0)) { goto L_800EE754; } // 800EE740
  cmps(c,0,(int32_t)c->r[0],1); // 800EE744
  if (crb(c,2)) { goto L_800EE764; } // 800EE748
  if (!crb(c,0)) { goto L_800EE778; } // 800EE74C
  goto L_800EE83C; // 800EE750
L_800EE754:;
  cmps(c,0,(int32_t)c->r[0],5); // 800EE754
  if (crb(c,2)) { goto L_800EE82C; } // 800EE758
  if (!crb(c,0)) { goto L_800EE83C; } // 800EE75C
  goto L_800EE7F4; // 800EE760
L_800EE764:;
  if (!crb(c,6)) { goto L_800EE83C; } // 800EE764
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EE768
  c->r[5]=0u+0x0000001Cu; // 800EE76C
  c->lr=0x800EE774u; f_80004338(c); // 800EE770
  goto L_800EE83C; // 800EE774
L_800EE778:;
  if (!crb(c,6)) { goto L_800EE83C; } // 800EE778
  c->r[0]=c->r[4]+0x0000003Fu; // 800EE77C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EE780
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EE784
  c->r[0]=c->r[4]+0x0000005Fu; // 800EE788
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EE78C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800EE790
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE794
  goto L_800EE83C; // 800EE798
L_800EE79C:;
  if (!crb(c,6)) { goto L_800EE83C; } // 800EE79C
  c->r[0]=c->r[4]+0x0000005Fu; // 800EE7A0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EE7A4
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EE7A8
  c->r[0]=R32(c->r[5]+0x00000000u); // 800EE7AC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE7B0
  c->r[0]=R16(c->r[5]+0x00000004u); // 800EE7B4
  c->r[3]=R32(c->r[4]+0x00000110u); // 800EE7B8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800EE7BC
  c->r[0]=R8(c->r[5]+0x00000049u); // 800EE7C0
  c->r[3]=R32(c->r[4]+0x00000114u); // 800EE7C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE7C8
  c->r[0]=R8(c->r[5]+0x00000046u); // 800EE7CC
  c->r[3]=R32(c->r[4]+0x00000118u); // 800EE7D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE7D4
  c->r[0]=R8(c->r[5]+0x00000047u); // 800EE7D8
  c->r[3]=R32(c->r[4]+0x0000011Cu); // 800EE7DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE7E0
  c->r[0]=R8(c->r[5]+0x00000048u); // 800EE7E4
  c->r[3]=R32(c->r[4]+0x00000120u); // 800EE7E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE7EC
  goto L_800EE83C; // 800EE7F0
L_800EE7F4:;
  if (!crb(c,6)) { goto L_800EE83C; } // 800EE7F4
  c->r[0]=c->r[4]+0x0000003Fu; // 800EE7F8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EE7FC
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EE800
  c->r[0]=c->r[5]+0x0000005Fu; // 800EE804
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EE808
  c->r[5]=R32(c->r[6]+0x00000000u); // 800EE80C
  c->r[0]=c->r[6]+0x00000023u; // 800EE810
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EE814
  W32(c->r[3]+0x00000000u,c->r[5]); // 800EE818
  c->r[0]=R32(c->r[6]+0x00000000u); // 800EE81C
  c->r[3]=R32(c->r[4]+0x00000110u); // 800EE820
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE824
  goto L_800EE83C; // 800EE828
L_800EE82C:;
  if (!crb(c,6)) { goto L_800EE83C; } // 800EE82C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800EE830
  c->r[5]=0u+0x00000008u; // 800EE834
  c->lr=0x800EE83Cu; f_80004338(c); // 800EE838
L_800EE83C:;
  c->r[0]=0u+0x00000000u; // 800EE83C
  W32(c->r[13]+0xFFFF9298u,c->r[0]); // 800EE840
  c->r[12]=R32(c->r[31]+0x00000100u); // 800EE844
  cmps(c,0,(int32_t)c->r[12],0); // 800EE848
  if (crb(c,2)) { goto L_800EE860; } // 800EE84C
  c->r[3]=c->r[30]|c->r[30]; // 800EE850
  c->r[4]=R32(c->r[31]+0x00000104u); // 800EE854
  c->ctr=c->r[12]; // 800EE858
  if (true) { c->lr=0x800EE860u; dispatch(c,c->ctr); } // 800EE85C
L_800EE860:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EE860
  if (crb(c,2)) { goto L_800EE874; } // 800EE864
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EE868
  c->r[4]=c->r[31]|c->r[31]; // 800EE86C
  c->lr=0x800EE874u; f_800F1860(c); // 800EE870
L_800EE874:;
  c->r[3]=c->r[30]|c->r[30]; // 800EE874
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE878
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EE87C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE880
  c->lr=c->r[0]; // 800EE884
  c->r[1]=c->r[1]+0x00000010u; // 800EE888
  return; // 800EE88C
}

// ISFS_CreateDir
void f_800EE890(Ctx* __restrict c) {
  trace_call(0x800EE890u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE890
  c->r[0]=c->lr; // 800EE894
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE898
  c->r[11]=c->r[1]+0x00000030u; // 800EE89C
  c->lr=0x800EE8A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EE8A0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE8A4
  c->r[25]=c->r[3]|c->r[3]; // 800EE8A8
  c->r[26]=c->r[4]|c->r[4]; // 800EE8AC
  c->r[27]=c->r[5]|c->r[5]; // 800EE8B0
  c->r[28]=c->r[6]|c->r[6]; // 800EE8B4
  c->r[29]=c->r[7]|c->r[7]; // 800EE8B8
  c->r[30]=0u+0x00000000u; // 800EE8BC
  if (crb(c,2)) { goto L_800EE8E4; } // 800EE8C0
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EE8C4
  cmps(c,0,(int32_t)c->r[0],0); // 800EE8C8
  if (crb(c,0)) { goto L_800EE8E4; } // 800EE8CC
  c->r[4]=0u+0x00000040u; // 800EE8D0
  c->lr=0x800EE8D8u; f_800EFBB8(c); // 800EE8D4
  cmpu(c,0,c->r[3],0x00000040u); // 800EE8D8
  c->r[31]=c->r[3]|c->r[3]; // 800EE8DC
  if (!crb(c,2)) { goto L_800EE8EC; } // 800EE8E0
L_800EE8E4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800EE8E4
  goto L_800EE950; // 800EE8E8
L_800EE8EC:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EE8EC
  c->r[4]=0u+0x00000140u; // 800EE8F0
  c->r[5]=0u+0x00000020u; // 800EE8F4
  c->lr=0x800EE8FCu; f_800F185C(c); // 800EE8F8
  cmps(c,0,(int32_t)c->r[3],0); // 800EE8FC
  c->r[30]=c->r[3]|c->r[3]; // 800EE900
  if (!crb(c,2)) { goto L_800EE910; } // 800EE904
  c->r[31]=0u+0xFFFFFFEAu; // 800EE908
  goto L_800EE950; // 800EE90C
L_800EE910:;
  c->r[4]=c->r[25]|c->r[25]; // 800EE910
  c->r[5]=c->r[31]+0x00000001u; // 800EE914
  c->r[3]=c->r[3]+0x00000006u; // 800EE918
  c->lr=0x800EE920u; f_80004338(c); // 800EE91C
  W8(c->r[30]+0x00000049u,c->r[26]); // 800EE920
  c->r[5]=c->r[30]|c->r[30]; // 800EE924
  c->r[4]=0u+0x00000003u; // 800EE928
  c->r[6]=0u+0x0000004Cu; // 800EE92C
  W8(c->r[30]+0x00000046u,c->r[27]); // 800EE930
  c->r[7]=0u+0x00000000u; // 800EE934
  c->r[8]=0u+0x00000000u; // 800EE938
  W8(c->r[30]+0x00000047u,c->r[28]); // 800EE93C
  W8(c->r[30]+0x00000048u,c->r[29]); // 800EE940
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EE944
  c->lr=0x800EE94Cu; f_800F0E00(c); // 800EE948
  c->r[31]=c->r[3]|c->r[3]; // 800EE94C
L_800EE950:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EE950
  if (crb(c,2)) { goto L_800EE968; } // 800EE954
  if (crb(c,2)) { goto L_800EE968; } // 800EE958
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EE95C
  c->r[4]=c->r[30]|c->r[30]; // 800EE960
  c->lr=0x800EE968u; f_800F1860(c); // 800EE964
L_800EE968:;
  c->r[11]=c->r[1]+0x00000030u; // 800EE968
  c->r[3]=c->r[31]|c->r[31]; // 800EE96C
  c->lr=0x800EE974u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EE970
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE974
  c->lr=c->r[0]; // 800EE978
  c->r[1]=c->r[1]+0x00000030u; // 800EE97C
  return; // 800EE980
}

// ISFS_CreateDirAsync
void f_800EE984(Ctx* __restrict c) {
  trace_call(0x800EE984u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE984
  c->r[0]=c->lr; // 800EE988
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE98C
  c->r[11]=c->r[1]+0x00000030u; // 800EE990
  c->lr=0x800EE998u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EE994
  cmps(c,0,(int32_t)c->r[3],0); // 800EE998
  c->r[23]=c->r[3]|c->r[3]; // 800EE99C
  c->r[24]=c->r[4]|c->r[4]; // 800EE9A0
  c->r[25]=c->r[5]|c->r[5]; // 800EE9A4
  c->r[26]=c->r[6]|c->r[6]; // 800EE9A8
  c->r[27]=c->r[7]|c->r[7]; // 800EE9AC
  c->r[28]=c->r[8]|c->r[8]; // 800EE9B0
  c->r[29]=c->r[9]|c->r[9]; // 800EE9B4
  if (crb(c,2)) { goto L_800EE9DC; } // 800EE9B8
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EE9BC
  cmps(c,0,(int32_t)c->r[0],0); // 800EE9C0
  if (crb(c,0)) { goto L_800EE9DC; } // 800EE9C4
  c->r[4]=0u+0x00000040u; // 800EE9C8
  c->lr=0x800EE9D0u; f_800EFBB8(c); // 800EE9CC
  cmpu(c,0,c->r[3],0x00000040u); // 800EE9D0
  c->r[31]=c->r[3]|c->r[3]; // 800EE9D4
  if (!crb(c,2)) { goto L_800EE9E4; } // 800EE9D8
L_800EE9DC:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EE9DC
  goto L_800EEA60; // 800EE9E0
L_800EE9E4:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EE9E4
  c->r[4]=0u+0x00000140u; // 800EE9E8
  c->r[5]=0u+0x00000020u; // 800EE9EC
  c->lr=0x800EE9F4u; f_800F185C(c); // 800EE9F0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE9F4
  c->r[30]=c->r[3]|c->r[3]; // 800EE9F8
  if (!crb(c,2)) { goto L_800EEA08; } // 800EE9FC
  c->r[3]=0u+0xFFFFFF8Au; // 800EEA00
  goto L_800EEA60; // 800EEA04
L_800EEA08:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800EEA08
  c->r[0]=0u+0x00000000u; // 800EEA0C
  c->r[4]=c->r[23]|c->r[23]; // 800EEA10
  c->r[5]=c->r[31]+0x00000001u; // 800EEA14
  W32(c->r[3]+0x00000104u,c->r[29]); // 800EEA18
  W32(c->r[3]+0x00000108u,c->r[0]); // 800EEA1C
  c->r[3]=c->r[3]+0x00000006u; // 800EEA20
  c->lr=0x800EEA28u; f_80004338(c); // 800EEA24
  W8(c->r[30]+0x00000049u,c->r[24]); // 800EEA28
  c->r[9]=0u+0x800F0000u; // 800EEA2C
  c->r[5]=c->r[30]|c->r[30]; // 800EEA30
  c->r[10]=c->r[30]|c->r[30]; // 800EEA34
  W8(c->r[30]+0x00000046u,c->r[25]); // 800EEA38
  c->r[9]=c->r[9]+0xFFFFE710u; // 800EEA3C
  c->r[4]=0u+0x00000003u; // 800EEA40
  c->r[6]=0u+0x0000004Cu; // 800EEA44
  W8(c->r[30]+0x00000047u,c->r[26]); // 800EEA48
  c->r[7]=0u+0x00000000u; // 800EEA4C
  c->r[8]=0u+0x00000000u; // 800EEA50
  W8(c->r[30]+0x00000048u,c->r[27]); // 800EEA54
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EEA58
  c->lr=0x800EEA60u; f_800F0CC8(c); // 800EEA5C
L_800EEA60:;
  c->r[11]=c->r[1]+0x00000030u; // 800EEA60
  c->lr=0x800EEA68u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EEA64
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EEA68
  c->lr=c->r[0]; // 800EEA6C
  c->r[1]=c->r[1]+0x00000030u; // 800EEA70
  return; // 800EEA74
}

// ISFS_ReadDir
void f_800EEA78(Ctx* __restrict c) {
  trace_call(0x800EEA78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEA78
  c->r[0]=c->lr; // 800EEA7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EEA80
  c->r[11]=c->r[1]+0x00000020u; // 800EEA84
  c->lr=0x800EEA8Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EEA88
  cmps(c,0,(int32_t)c->r[3],0); // 800EEA8C
  c->r[26]=c->r[3]|c->r[3]; // 800EEA90
  c->r[27]=c->r[4]|c->r[4]; // 800EEA94
  c->r[28]=c->r[5]|c->r[5]; // 800EEA98
  c->r[29]=0u+0x00000000u; // 800EEA9C
  if (crb(c,2)) { goto L_800EEAD4; } // 800EEAA0
  cmps(c,0,(int32_t)c->r[5],0); // 800EEAA4
  if (crb(c,2)) { goto L_800EEAD4; } // 800EEAA8
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EEAAC
  cmps(c,0,(int32_t)c->r[0],0); // 800EEAB0
  if (crb(c,0)) { goto L_800EEAD4; } // 800EEAB4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EEAB8
  if (!crb(c,2)) { goto L_800EEAD4; } // 800EEABC
  c->r[4]=0u+0x00000040u; // 800EEAC0
  c->lr=0x800EEAC8u; f_800EFBB8(c); // 800EEAC4
  cmpu(c,0,c->r[3],0x00000040u); // 800EEAC8
  c->r[31]=c->r[3]|c->r[3]; // 800EEACC
  if (!crb(c,2)) { goto L_800EEADC; } // 800EEAD0
L_800EEAD4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800EEAD4
  goto L_800EEB98; // 800EEAD8
L_800EEADC:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EEADC
  c->r[4]=0u+0x00000140u; // 800EEAE0
  c->r[5]=0u+0x00000020u; // 800EEAE4
  c->lr=0x800EEAECu; f_800F185C(c); // 800EEAE8
  cmps(c,0,(int32_t)c->r[3],0); // 800EEAEC
  c->r[29]=c->r[3]|c->r[3]; // 800EEAF0
  if (!crb(c,2)) { goto L_800EEB00; } // 800EEAF4
  c->r[31]=0u+0xFFFFFFEAu; // 800EEAF8
  goto L_800EEB98; // 800EEAFC
L_800EEB00:;
  c->r[0]=c->r[3]+0x0000003Fu; // 800EEB00
  c->r[4]=c->r[26]|c->r[26]; // 800EEB04
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EEB08
  c->r[5]=c->r[31]+0x00000001u; // 800EEB0C
  c->r[3]=c->r[30]|c->r[30]; // 800EEB10
  c->lr=0x800EEB18u; f_80004338(c); // 800EEB14
  W32(c->r[29]+0x00000000u,c->r[30]); // 800EEB18
  c->r[3]=0u+0x00000040u; // 800EEB1C
  c->r[0]=c->r[30]+0x0000005Fu; // 800EEB20
  cmps(c,0,(int32_t)c->r[27],0); // 800EEB24
  W32(c->r[29]+0x00000004u,c->r[3]); // 800EEB28
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EEB2C
  c->r[3]=0u+0x00000004u; // 800EEB30
  W32(c->r[29]+0x00000008u,c->r[30]); // 800EEB34
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 800EEB38
  if (crb(c,2)) { goto L_800EEB6C; } // 800EEB3C
  c->r[0]=R32(c->r[28]+0x00000000u); // 800EEB40
  c->r[5]=0u+0x00000002u; // 800EEB44
  c->r[6]=0u+0x00000002u; // 800EEB48
  W32(c->r[30]+0x00000000u,c->r[0]); // 800EEB4C
  W32(c->r[29]+0x00000010u,c->r[27]); // 800EEB50
  c->r[0]=R32(c->r[28]+0x00000000u); // 800EEB54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 800EEB58
  W32(c->r[29]+0x00000014u,c->r[0]); // 800EEB5C
  W32(c->r[29]+0x00000018u,c->r[30]); // 800EEB60
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 800EEB64
  goto L_800EEB74; // 800EEB68
L_800EEB6C:;
  c->r[5]=0u+0x00000001u; // 800EEB6C
  c->r[6]=0u+0x00000001u; // 800EEB70
L_800EEB74:;
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EEB74
  c->r[7]=c->r[29]|c->r[29]; // 800EEB78
  c->r[4]=0u+0x00000004u; // 800EEB7C
  c->lr=0x800EEB84u; f_800F1150(c); // 800EEB80
  cmps(c,0,(int32_t)c->r[3],0); // 800EEB84
  c->r[31]=c->r[3]|c->r[3]; // 800EEB88
  if (!crb(c,2)) { goto L_800EEB98; } // 800EEB8C
  c->r[0]=R32(c->r[30]+0x00000000u); // 800EEB90
  W32(c->r[28]+0x00000000u,c->r[0]); // 800EEB94
L_800EEB98:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EEB98
  if (crb(c,2)) { goto L_800EEBB0; } // 800EEB9C
  if (crb(c,2)) { goto L_800EEBB0; } // 800EEBA0
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EEBA4
  c->r[4]=c->r[29]|c->r[29]; // 800EEBA8
  c->lr=0x800EEBB0u; f_800F1860(c); // 800EEBAC
L_800EEBB0:;
  c->r[11]=c->r[1]+0x00000020u; // 800EEBB0
  c->r[3]=c->r[31]|c->r[31]; // 800EEBB4
  c->lr=0x800EEBBCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EEBB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EEBBC
  c->lr=c->r[0]; // 800EEBC0
  c->r[1]=c->r[1]+0x00000020u; // 800EEBC4
  return; // 800EEBC8
}

// ISFS_ReadDirAsync
void f_800EEBCC(Ctx* __restrict c) {
  trace_call(0x800EEBCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEBCC
  c->r[0]=c->lr; // 800EEBD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EEBD4
  c->r[11]=c->r[1]+0x00000030u; // 800EEBD8
  c->lr=0x800EEBE0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EEBDC
  cmps(c,0,(int32_t)c->r[3],0); // 800EEBE0
  c->r[25]=c->r[3]|c->r[3]; // 800EEBE4
  c->r[26]=c->r[4]|c->r[4]; // 800EEBE8
  c->r[27]=c->r[5]|c->r[5]; // 800EEBEC
  c->r[28]=c->r[6]|c->r[6]; // 800EEBF0
  c->r[29]=c->r[7]|c->r[7]; // 800EEBF4
  if (crb(c,2)) { goto L_800EEC2C; } // 800EEBF8
  cmps(c,0,(int32_t)c->r[5],0); // 800EEBFC
  if (crb(c,2)) { goto L_800EEC2C; } // 800EEC00
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EEC04
  cmps(c,0,(int32_t)c->r[0],0); // 800EEC08
  if (crb(c,0)) { goto L_800EEC2C; } // 800EEC0C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EEC10
  if (!crb(c,2)) { goto L_800EEC2C; } // 800EEC14
  c->r[4]=0u+0x00000040u; // 800EEC18
  c->lr=0x800EEC20u; f_800EFBB8(c); // 800EEC1C
  cmpu(c,0,c->r[3],0x00000040u); // 800EEC20
  c->r[31]=c->r[3]|c->r[3]; // 800EEC24
  if (!crb(c,2)) { goto L_800EEC34; } // 800EEC28
L_800EEC2C:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EEC2C
  goto L_800EECFC; // 800EEC30
L_800EEC34:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EEC34
  c->r[4]=0u+0x00000140u; // 800EEC38
  c->r[5]=0u+0x00000020u; // 800EEC3C
  c->lr=0x800EEC44u; f_800F185C(c); // 800EEC40
  cmps(c,0,(int32_t)c->r[3],0); // 800EEC44
  c->r[30]=c->r[3]|c->r[3]; // 800EEC48
  if (!crb(c,2)) { goto L_800EEC58; } // 800EEC4C
  c->r[3]=0u+0xFFFFFF8Au; // 800EEC50
  goto L_800EECFC; // 800EEC54
L_800EEC58:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800EEC58
  c->r[6]=0u+0x00000002u; // 800EEC5C
  c->r[0]=c->r[3]+0x0000003Fu; // 800EEC60
  c->r[4]=c->r[25]|c->r[25]; // 800EEC64
  W32(c->r[3]+0x00000104u,c->r[29]); // 800EEC68
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EEC6C
  c->r[5]=c->r[31]+0x00000001u; // 800EEC70
  W32(c->r[3]+0x00000108u,c->r[6]); // 800EEC74
  W32(c->r[3]+0x0000010Cu,c->r[27]); // 800EEC78
  c->r[3]=c->r[29]|c->r[29]; // 800EEC7C
  c->lr=0x800EEC84u; f_80004338(c); // 800EEC80
  W32(c->r[30]+0x00000000u,c->r[29]); // 800EEC84
  c->r[3]=0u+0x00000040u; // 800EEC88
  c->r[0]=c->r[29]+0x0000005Fu; // 800EEC8C
  cmps(c,0,(int32_t)c->r[26],0); // 800EEC90
  W32(c->r[30]+0x00000004u,c->r[3]); // 800EEC94
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EEC98
  c->r[3]=0u+0x00000004u; // 800EEC9C
  W32(c->r[30]+0x00000008u,c->r[4]); // 800EECA0
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800EECA4
  if (crb(c,2)) { goto L_800EECD8; } // 800EECA8
  c->r[0]=R32(c->r[27]+0x00000000u); // 800EECAC
  c->r[5]=0u+0x00000002u; // 800EECB0
  c->r[6]=0u+0x00000002u; // 800EECB4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EECB8
  W32(c->r[30]+0x00000010u,c->r[26]); // 800EECBC
  c->r[0]=R32(c->r[27]+0x00000000u); // 800EECC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 800EECC4
  W32(c->r[30]+0x00000014u,c->r[0]); // 800EECC8
  W32(c->r[30]+0x00000018u,c->r[4]); // 800EECCC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800EECD0
  goto L_800EECE0; // 800EECD4
L_800EECD8:;
  c->r[5]=0u+0x00000001u; // 800EECD8
  c->r[6]=0u+0x00000001u; // 800EECDC
L_800EECE0:;
  c->r[8]=0u+0x800F0000u; // 800EECE0
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EECE4
  c->r[7]=c->r[30]|c->r[30]; // 800EECE8
  c->r[9]=c->r[30]|c->r[30]; // 800EECEC
  c->r[8]=c->r[8]+0xFFFFE710u; // 800EECF0
  c->r[4]=0u+0x00000004u; // 800EECF4
  c->lr=0x800EECFCu; f_800F106C(c); // 800EECF8
L_800EECFC:;
  c->r[11]=c->r[1]+0x00000030u; // 800EECFC
  c->lr=0x800EED04u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EED00
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EED04
  c->lr=c->r[0]; // 800EED08
  c->r[1]=c->r[1]+0x00000030u; // 800EED0C
  return; // 800EED10
}

// ISFS_GetAttr
void f_800EED14(Ctx* __restrict c) {
  trace_call(0x800EED14u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EED14
  c->r[0]=c->lr; // 800EED18
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EED1C
  c->r[11]=c->r[1]+0x00000030u; // 800EED20
  c->lr=0x800EED28u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EED24
  cmps(c,0,(int32_t)c->r[3],0); // 800EED28
  c->r[30]=c->r[3]|c->r[3]; // 800EED2C
  c->r[23]=c->r[4]|c->r[4]; // 800EED30
  c->r[24]=c->r[5]|c->r[5]; // 800EED34
  c->r[25]=c->r[6]|c->r[6]; // 800EED38
  c->r[26]=c->r[7]|c->r[7]; // 800EED3C
  c->r[27]=c->r[8]|c->r[8]; // 800EED40
  c->r[28]=c->r[9]|c->r[9]; // 800EED44
  c->r[29]=0u+0x00000000u; // 800EED48
  if (crb(c,2)) { goto L_800EEDA0; } // 800EED4C
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EED50
  cmps(c,0,(int32_t)c->r[0],0); // 800EED54
  if (crb(c,0)) { goto L_800EEDA0; } // 800EED58
  c->r[4]=0u+0x00000040u; // 800EED5C
  c->lr=0x800EED64u; f_800EFBB8(c); // 800EED60
  cmpu(c,0,c->r[3],0x00000040u); // 800EED64
  c->r[31]=c->r[3]|c->r[3]; // 800EED68
  if (crb(c,2)) { goto L_800EEDA0; } // 800EED6C
  cmps(c,0,(int32_t)c->r[23],0); // 800EED70
  if (crb(c,2)) { goto L_800EEDA0; } // 800EED74
  cmps(c,0,(int32_t)c->r[24],0); // 800EED78
  if (crb(c,2)) { goto L_800EEDA0; } // 800EED7C
  cmps(c,0,(int32_t)c->r[25],0); // 800EED80
  if (crb(c,2)) { goto L_800EEDA0; } // 800EED84
  cmps(c,0,(int32_t)c->r[26],0); // 800EED88
  if (crb(c,2)) { goto L_800EEDA0; } // 800EED8C
  cmps(c,0,(int32_t)c->r[27],0); // 800EED90
  if (crb(c,2)) { goto L_800EEDA0; } // 800EED94
  cmps(c,0,(int32_t)c->r[28],0); // 800EED98
  if (!crb(c,2)) { goto L_800EEDA8; } // 800EED9C
L_800EEDA0:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800EEDA0
  goto L_800EEE38; // 800EEDA4
L_800EEDA8:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EEDA8
  c->r[4]=0u+0x00000140u; // 800EEDAC
  c->r[5]=0u+0x00000020u; // 800EEDB0
  c->lr=0x800EEDB8u; f_800F185C(c); // 800EEDB4
  cmps(c,0,(int32_t)c->r[3],0); // 800EEDB8
  c->r[29]=c->r[3]|c->r[3]; // 800EEDBC
  if (!crb(c,2)) { goto L_800EEDCC; } // 800EEDC0
  c->r[31]=0u+0xFFFFFFEAu; // 800EEDC4
  goto L_800EEE38; // 800EEDC8
L_800EEDCC:;
  c->r[4]=c->r[30]|c->r[30]; // 800EEDCC
  c->r[5]=c->r[31]+0x00000001u; // 800EEDD0
  c->lr=0x800EEDD8u; f_80004338(c); // 800EEDD4
  c->r[0]=c->r[29]+0x0000005Fu; // 800EEDD8
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EEDDC
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EEDE0
  c->r[5]=c->r[29]|c->r[29]; // 800EEDE4
  c->r[7]=c->r[30]|c->r[30]; // 800EEDE8
  c->r[4]=0u+0x00000006u; // 800EEDEC
  c->r[6]=0u+0x00000040u; // 800EEDF0
  c->r[8]=0u+0x0000004Cu; // 800EEDF4
  c->lr=0x800EEDFCu; f_800F0E00(c); // 800EEDF8
  cmps(c,0,(int32_t)c->r[3],0); // 800EEDFC
  c->r[31]=c->r[3]|c->r[3]; // 800EEE00
  if (!crb(c,2)) { goto L_800EEE38; } // 800EEE04
  c->r[0]=R32(c->r[30]+0x00000000u); // 800EEE08
  W32(c->r[23]+0x00000000u,c->r[0]); // 800EEE0C
  c->r[0]=R16(c->r[30]+0x00000004u); // 800EEE10
  W16(c->r[24]+0x00000000u,c->r[0]); // 800EEE14
  c->r[0]=R8(c->r[30]+0x00000049u); // 800EEE18
  W32(c->r[25]+0x00000000u,c->r[0]); // 800EEE1C
  c->r[0]=R8(c->r[30]+0x00000046u); // 800EEE20
  W32(c->r[26]+0x00000000u,c->r[0]); // 800EEE24
  c->r[0]=R8(c->r[30]+0x00000047u); // 800EEE28
  W32(c->r[27]+0x00000000u,c->r[0]); // 800EEE2C
  c->r[0]=R8(c->r[30]+0x00000048u); // 800EEE30
  W32(c->r[28]+0x00000000u,c->r[0]); // 800EEE34
L_800EEE38:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EEE38
  if (crb(c,2)) { goto L_800EEE50; } // 800EEE3C
  if (crb(c,2)) { goto L_800EEE50; } // 800EEE40
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EEE44
  c->r[4]=c->r[29]|c->r[29]; // 800EEE48
  c->lr=0x800EEE50u; f_800F1860(c); // 800EEE4C
L_800EEE50:;
  c->r[11]=c->r[1]+0x00000030u; // 800EEE50
  c->r[3]=c->r[31]|c->r[31]; // 800EEE54
  c->lr=0x800EEE5Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EEE58
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EEE5C
  c->lr=c->r[0]; // 800EEE60
  c->r[1]=c->r[1]+0x00000030u; // 800EEE64
  return; // 800EEE68
}

// ISFS_GetAttrAsync
void f_800EEE6C(Ctx* __restrict c) {
  trace_call(0x800EEE6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEE6C
  c->r[0]=c->lr; // 800EEE70
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EEE74
  c->r[11]=c->r[1]+0x00000040u; // 800EEE78
  c->lr=0x800EEE80u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EEE7C
  cmps(c,0,(int32_t)c->r[3],0); // 800EEE80
  c->r[29]=R32(c->r[1]+0x00000048u); // 800EEE84
  c->r[21]=c->r[3]|c->r[3]; // 800EEE88
  c->r[22]=c->r[4]|c->r[4]; // 800EEE8C
  c->r[23]=c->r[5]|c->r[5]; // 800EEE90
  c->r[24]=c->r[6]|c->r[6]; // 800EEE94
  c->r[25]=c->r[7]|c->r[7]; // 800EEE98
  c->r[26]=c->r[8]|c->r[8]; // 800EEE9C
  c->r[27]=c->r[9]|c->r[9]; // 800EEEA0
  c->r[28]=c->r[10]|c->r[10]; // 800EEEA4
  if (crb(c,2)) { goto L_800EEEFC; } // 800EEEA8
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EEEAC
  cmps(c,0,(int32_t)c->r[0],0); // 800EEEB0
  if (crb(c,0)) { goto L_800EEEFC; } // 800EEEB4
  c->r[4]=0u+0x00000040u; // 800EEEB8
  c->lr=0x800EEEC0u; f_800EFBB8(c); // 800EEEBC
  cmpu(c,0,c->r[3],0x00000040u); // 800EEEC0
  c->r[31]=c->r[3]|c->r[3]; // 800EEEC4
  if (crb(c,2)) { goto L_800EEEFC; } // 800EEEC8
  cmps(c,0,(int32_t)c->r[22],0); // 800EEECC
  if (crb(c,2)) { goto L_800EEEFC; } // 800EEED0
  cmps(c,0,(int32_t)c->r[23],0); // 800EEED4
  if (crb(c,2)) { goto L_800EEEFC; } // 800EEED8
  cmps(c,0,(int32_t)c->r[24],0); // 800EEEDC
  if (crb(c,2)) { goto L_800EEEFC; } // 800EEEE0
  cmps(c,0,(int32_t)c->r[25],0); // 800EEEE4
  if (crb(c,2)) { goto L_800EEEFC; } // 800EEEE8
  cmps(c,0,(int32_t)c->r[26],0); // 800EEEEC
  if (crb(c,2)) { goto L_800EEEFC; } // 800EEEF0
  cmps(c,0,(int32_t)c->r[27],0); // 800EEEF4
  if (!crb(c,2)) { goto L_800EEF04; } // 800EEEF8
L_800EEEFC:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EEEFC
  goto L_800EEF88; // 800EEF00
L_800EEF04:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EEF04
  c->r[4]=0u+0x00000140u; // 800EEF08
  c->r[5]=0u+0x00000020u; // 800EEF0C
  c->lr=0x800EEF14u; f_800F185C(c); // 800EEF10
  cmps(c,0,(int32_t)c->r[3],0); // 800EEF14
  c->r[30]=c->r[3]|c->r[3]; // 800EEF18
  if (!crb(c,2)) { goto L_800EEF28; } // 800EEF1C
  c->r[3]=0u+0xFFFFFF8Au; // 800EEF20
  goto L_800EEF88; // 800EEF24
L_800EEF28:;
  W32(c->r[3]+0x0000010Cu,c->r[22]); // 800EEF28
  c->r[0]=0u+0x00000003u; // 800EEF2C
  c->r[4]=c->r[21]|c->r[21]; // 800EEF30
  c->r[5]=c->r[31]+0x00000001u; // 800EEF34
  W32(c->r[3]+0x00000110u,c->r[23]); // 800EEF38
  W32(c->r[3]+0x00000114u,c->r[24]); // 800EEF3C
  W32(c->r[3]+0x00000118u,c->r[25]); // 800EEF40
  W32(c->r[3]+0x0000011Cu,c->r[26]); // 800EEF44
  W32(c->r[3]+0x00000120u,c->r[27]); // 800EEF48
  W32(c->r[3]+0x00000100u,c->r[28]); // 800EEF4C
  W32(c->r[3]+0x00000104u,c->r[29]); // 800EEF50
  W32(c->r[3]+0x00000108u,c->r[0]); // 800EEF54
  c->lr=0x800EEF5Cu; f_80004338(c); // 800EEF58
  c->r[0]=c->r[30]+0x0000005Fu; // 800EEF5C
  c->r[9]=0u+0x800F0000u; // 800EEF60
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EEF64
  c->r[5]=c->r[30]|c->r[30]; // 800EEF68
  c->r[10]=c->r[30]|c->r[30]; // 800EEF6C
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EEF70
  c->r[9]=c->r[9]+0xFFFFE710u; // 800EEF74
  c->r[4]=0u+0x00000006u; // 800EEF78
  c->r[6]=0u+0x00000040u; // 800EEF7C
  c->r[8]=0u+0x0000004Cu; // 800EEF80
  c->lr=0x800EEF88u; f_800F0CC8(c); // 800EEF84
L_800EEF88:;
  c->r[11]=c->r[1]+0x00000040u; // 800EEF88
  c->lr=0x800EEF90u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EEF8C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EEF90
  c->lr=c->r[0]; // 800EEF94
  c->r[1]=c->r[1]+0x00000040u; // 800EEF98
  return; // 800EEF9C
}

// ISFS_Delete
void f_800EEFA0(Ctx* __restrict c) {
  trace_call(0x800EEFA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEFA0
  c->r[0]=c->lr; // 800EEFA4
  cmps(c,0,(int32_t)c->r[3],0); // 800EEFA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EEFAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EEFB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EEFB4
  c->r[30]=0u+0x00000000u; // 800EEFB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EEFBC
  c->r[29]=c->r[3]|c->r[3]; // 800EEFC0
  if (crb(c,2)) { goto L_800EEFE8; } // 800EEFC4
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EEFC8
  cmps(c,0,(int32_t)c->r[0],0); // 800EEFCC
  if (crb(c,0)) { goto L_800EEFE8; } // 800EEFD0
  c->r[4]=0u+0x00000040u; // 800EEFD4
  c->lr=0x800EEFDCu; f_800EFBB8(c); // 800EEFD8
  cmpu(c,0,c->r[3],0x00000040u); // 800EEFDC
  c->r[31]=c->r[3]|c->r[3]; // 800EEFE0
  if (!crb(c,2)) { goto L_800EEFF0; } // 800EEFE4
L_800EEFE8:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800EEFE8
  goto L_800EF040; // 800EEFEC
L_800EEFF0:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EEFF0
  c->r[4]=0u+0x00000140u; // 800EEFF4
  c->r[5]=0u+0x00000020u; // 800EEFF8
  c->lr=0x800EF000u; f_800F185C(c); // 800EEFFC
  cmps(c,0,(int32_t)c->r[3],0); // 800EF000
  c->r[30]=c->r[3]|c->r[3]; // 800EF004
  if (!crb(c,2)) { goto L_800EF014; } // 800EF008
  c->r[31]=0u+0xFFFFFFEAu; // 800EF00C
  goto L_800EF040; // 800EF010
L_800EF014:;
  c->r[4]=c->r[29]|c->r[29]; // 800EF014
  c->r[5]=c->r[31]+0x00000001u; // 800EF018
  c->lr=0x800EF020u; f_80004338(c); // 800EF01C
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EF020
  c->r[5]=c->r[30]|c->r[30]; // 800EF024
  c->r[4]=0u+0x00000007u; // 800EF028
  c->r[6]=0u+0x00000040u; // 800EF02C
  c->r[7]=0u+0x00000000u; // 800EF030
  c->r[8]=0u+0x00000000u; // 800EF034
  c->lr=0x800EF03Cu; f_800F0E00(c); // 800EF038
  c->r[31]=c->r[3]|c->r[3]; // 800EF03C
L_800EF040:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EF040
  if (crb(c,2)) { goto L_800EF058; } // 800EF044
  if (crb(c,2)) { goto L_800EF058; } // 800EF048
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF04C
  c->r[4]=c->r[30]|c->r[30]; // 800EF050
  c->lr=0x800EF058u; f_800F1860(c); // 800EF054
L_800EF058:;
  c->r[3]=c->r[31]|c->r[31]; // 800EF058
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EF05C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EF060
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EF064
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF068
  c->lr=c->r[0]; // 800EF06C
  c->r[1]=c->r[1]+0x00000020u; // 800EF070
  return; // 800EF074
}

// ISFS_DeleteAsync
void f_800EF078(Ctx* __restrict c) {
  trace_call(0x800EF078u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF078
  c->r[0]=c->lr; // 800EF07C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF080
  c->r[11]=c->r[1]+0x00000020u; // 800EF084
  c->lr=0x800EF08Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF088
  cmps(c,0,(int32_t)c->r[3],0); // 800EF08C
  c->r[27]=c->r[3]|c->r[3]; // 800EF090
  c->r[28]=c->r[4]|c->r[4]; // 800EF094
  c->r[29]=c->r[5]|c->r[5]; // 800EF098
  if (crb(c,2)) { goto L_800EF0C0; } // 800EF09C
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EF0A0
  cmps(c,0,(int32_t)c->r[0],0); // 800EF0A4
  if (crb(c,0)) { goto L_800EF0C0; } // 800EF0A8
  c->r[4]=0u+0x00000040u; // 800EF0AC
  c->lr=0x800EF0B4u; f_800EFBB8(c); // 800EF0B0
  cmpu(c,0,c->r[3],0x00000040u); // 800EF0B4
  c->r[31]=c->r[3]|c->r[3]; // 800EF0B8
  if (!crb(c,2)) { goto L_800EF0C8; } // 800EF0BC
L_800EF0C0:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EF0C0
  goto L_800EF130; // 800EF0C4
L_800EF0C8:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF0C8
  c->r[4]=0u+0x00000140u; // 800EF0CC
  c->r[5]=0u+0x00000020u; // 800EF0D0
  c->lr=0x800EF0D8u; f_800F185C(c); // 800EF0D4
  cmps(c,0,(int32_t)c->r[3],0); // 800EF0D8
  c->r[30]=c->r[3]|c->r[3]; // 800EF0DC
  if (!crb(c,2)) { goto L_800EF0EC; } // 800EF0E0
  c->r[3]=0u+0xFFFFFF8Au; // 800EF0E4
  goto L_800EF130; // 800EF0E8
L_800EF0EC:;
  c->r[4]=c->r[27]|c->r[27]; // 800EF0EC
  c->r[5]=c->r[31]+0x00000001u; // 800EF0F0
  c->lr=0x800EF0F8u; f_80004338(c); // 800EF0F4
  W32(c->r[30]+0x00000100u,c->r[28]); // 800EF0F8
  c->r[9]=0u+0x800F0000u; // 800EF0FC
  c->r[0]=0u+0x00000000u; // 800EF100
  c->r[5]=c->r[30]|c->r[30]; // 800EF104
  W32(c->r[30]+0x00000104u,c->r[29]); // 800EF108
  c->r[10]=c->r[30]|c->r[30]; // 800EF10C
  c->r[9]=c->r[9]+0xFFFFE710u; // 800EF110
  c->r[4]=0u+0x00000007u; // 800EF114
  W32(c->r[30]+0x00000108u,c->r[0]); // 800EF118
  c->r[6]=0u+0x00000040u; // 800EF11C
  c->r[7]=0u+0x00000000u; // 800EF120
  c->r[8]=0u+0x00000000u; // 800EF124
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EF128
  c->lr=0x800EF130u; f_800F0CC8(c); // 800EF12C
L_800EF130:;
  c->r[11]=c->r[1]+0x00000020u; // 800EF130
  c->lr=0x800EF138u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF134
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF138
  c->lr=c->r[0]; // 800EF13C
  c->r[1]=c->r[1]+0x00000020u; // 800EF140
  return; // 800EF144
}

// ISFS_Rename
void f_800EF148(Ctx* __restrict c) {
  trace_call(0x800EF148u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF148
  c->r[0]=c->lr; // 800EF14C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF150
  c->r[11]=c->r[1]+0x00000020u; // 800EF154
  c->lr=0x800EF15Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF158
  cmps(c,0,(int32_t)c->r[3],0); // 800EF15C
  c->r[27]=c->r[3]|c->r[3]; // 800EF160
  c->r[28]=c->r[4]|c->r[4]; // 800EF164
  c->r[29]=0u+0x00000000u; // 800EF168
  if (crb(c,2)) { goto L_800EF1B0; } // 800EF16C
  cmps(c,0,(int32_t)c->r[4],0); // 800EF170
  if (crb(c,2)) { goto L_800EF1B0; } // 800EF174
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EF178
  cmps(c,0,(int32_t)c->r[0],0); // 800EF17C
  if (crb(c,0)) { goto L_800EF1B0; } // 800EF180
  c->r[4]=0u+0x00000040u; // 800EF184
  c->lr=0x800EF18Cu; f_800EFBB8(c); // 800EF188
  cmpu(c,0,c->r[3],0x00000040u); // 800EF18C
  c->r[30]=c->r[3]|c->r[3]; // 800EF190
  if (crb(c,2)) { goto L_800EF1B0; } // 800EF194
  c->r[3]=c->r[28]|c->r[28]; // 800EF198
  c->r[4]=0u+0x00000040u; // 800EF19C
  c->lr=0x800EF1A4u; f_800EFBB8(c); // 800EF1A0
  cmpu(c,0,c->r[3],0x00000040u); // 800EF1A4
  c->r[31]=c->r[3]|c->r[3]; // 800EF1A8
  if (!crb(c,2)) { goto L_800EF1B8; } // 800EF1AC
L_800EF1B0:;
  c->r[30]=0u+0xFFFFFF9Bu; // 800EF1B0
  goto L_800EF218; // 800EF1B4
L_800EF1B8:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF1B8
  c->r[4]=0u+0x00000140u; // 800EF1BC
  c->r[5]=0u+0x00000020u; // 800EF1C0
  c->lr=0x800EF1C8u; f_800F185C(c); // 800EF1C4
  cmps(c,0,(int32_t)c->r[3],0); // 800EF1C8
  c->r[29]=c->r[3]|c->r[3]; // 800EF1CC
  if (!crb(c,2)) { goto L_800EF1DC; } // 800EF1D0
  c->r[30]=0u+0xFFFFFFEAu; // 800EF1D4
  goto L_800EF218; // 800EF1D8
L_800EF1DC:;
  c->r[4]=c->r[27]|c->r[27]; // 800EF1DC
  c->r[5]=c->r[30]+0x00000001u; // 800EF1E0
  c->lr=0x800EF1E8u; f_80004338(c); // 800EF1E4
  c->r[4]=c->r[28]|c->r[28]; // 800EF1E8
  c->r[3]=c->r[29]+0x00000040u; // 800EF1EC
  c->r[5]=c->r[31]+0x00000001u; // 800EF1F0
  c->lr=0x800EF1F8u; f_80004338(c); // 800EF1F4
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EF1F8
  c->r[5]=c->r[29]|c->r[29]; // 800EF1FC
  c->r[4]=0u+0x00000008u; // 800EF200
  c->r[6]=0u+0x00000080u; // 800EF204
  c->r[7]=0u+0x00000000u; // 800EF208
  c->r[8]=0u+0x00000000u; // 800EF20C
  c->lr=0x800EF214u; f_800F0E00(c); // 800EF210
  c->r[30]=c->r[3]|c->r[3]; // 800EF214
L_800EF218:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EF218
  if (crb(c,2)) { goto L_800EF230; } // 800EF21C
  if (crb(c,2)) { goto L_800EF230; } // 800EF220
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF224
  c->r[4]=c->r[29]|c->r[29]; // 800EF228
  c->lr=0x800EF230u; f_800F1860(c); // 800EF22C
L_800EF230:;
  c->r[11]=c->r[1]+0x00000020u; // 800EF230
  c->r[3]=c->r[30]|c->r[30]; // 800EF234
  c->lr=0x800EF23Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF238
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF23C
  c->lr=c->r[0]; // 800EF240
  c->r[1]=c->r[1]+0x00000020u; // 800EF244
  return; // 800EF248
}

// ISFS_GetUsage
void f_800EF24C(Ctx* __restrict c) {
  trace_call(0x800EF24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF24C
  c->r[0]=c->lr; // 800EF250
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF254
  c->r[11]=c->r[1]+0x00000020u; // 800EF258
  c->lr=0x800EF260u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF25C
  cmps(c,0,(int32_t)c->r[3],0); // 800EF260
  c->r[30]=c->r[3]|c->r[3]; // 800EF264
  c->r[26]=c->r[4]|c->r[4]; // 800EF268
  c->r[27]=c->r[5]|c->r[5]; // 800EF26C
  c->r[28]=0u+0x00000000u; // 800EF270
  if (crb(c,2)) { goto L_800EF2A8; } // 800EF274
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EF278
  cmps(c,0,(int32_t)c->r[0],0); // 800EF27C
  if (crb(c,0)) { goto L_800EF2A8; } // 800EF280
  cmps(c,0,(int32_t)c->r[4],0); // 800EF284
  if (crb(c,2)) { goto L_800EF2A8; } // 800EF288
  cmps(c,0,(int32_t)c->r[5],0); // 800EF28C
  if (crb(c,2)) { goto L_800EF2A8; } // 800EF290
  c->r[4]=0u+0x00000040u; // 800EF294
  c->lr=0x800EF29Cu; f_800EFBB8(c); // 800EF298
  cmpu(c,0,c->r[3],0x00000040u); // 800EF29C
  c->r[31]=c->r[3]|c->r[3]; // 800EF2A0
  if (!crb(c,2)) { goto L_800EF2B0; } // 800EF2A4
L_800EF2A8:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800EF2A8
  goto L_800EF350; // 800EF2AC
L_800EF2B0:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF2B0
  c->r[4]=0u+0x00000140u; // 800EF2B4
  c->r[5]=0u+0x00000020u; // 800EF2B8
  c->lr=0x800EF2C0u; f_800F185C(c); // 800EF2BC
  cmps(c,0,(int32_t)c->r[3],0); // 800EF2C0
  c->r[28]=c->r[3]|c->r[3]; // 800EF2C4
  if (!crb(c,2)) { goto L_800EF2D4; } // 800EF2C8
  c->r[31]=0u+0xFFFFFFEAu; // 800EF2CC
  goto L_800EF350; // 800EF2D0
L_800EF2D4:;
  c->r[0]=c->r[3]+0x00000037u; // 800EF2D4
  c->r[4]=c->r[30]|c->r[30]; // 800EF2D8
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800EF2DC
  c->r[5]=c->r[31]+0x00000001u; // 800EF2E0
  c->r[3]=c->r[29]|c->r[29]; // 800EF2E4
  c->lr=0x800EF2ECu; f_80004338(c); // 800EF2E8
  W32(c->r[28]+0x00000000u,c->r[29]); // 800EF2EC
  c->r[4]=0u+0x00000040u; // 800EF2F0
  c->r[3]=c->r[29]+0x0000005Fu; // 800EF2F4
  c->r[0]=0u+0x00000004u; // 800EF2F8
  W32(c->r[28]+0x00000004u,c->r[4]); // 800EF2FC
  c->r[30]=rotl(c->r[3],0)&0xFFFFFFE0u; // 800EF300
  c->r[3]=c->r[30]+0x00000023u; // 800EF304
  c->r[7]=c->r[28]|c->r[28]; // 800EF308
  W32(c->r[28]+0x00000008u,c->r[30]); // 800EF30C
  c->r[29]=rotl(c->r[3],0)&0xFFFFFFE0u; // 800EF310
  c->r[4]=0u+0x0000000Cu; // 800EF314
  c->r[5]=0u+0x00000001u; // 800EF318
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800EF31C
  c->r[6]=0u+0x00000002u; // 800EF320
  W32(c->r[28]+0x00000010u,c->r[29]); // 800EF324
  W32(c->r[28]+0x00000014u,c->r[0]); // 800EF328
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EF32C
  c->lr=0x800EF334u; f_800F1150(c); // 800EF330
  cmps(c,0,(int32_t)c->r[3],0); // 800EF334
  c->r[31]=c->r[3]|c->r[3]; // 800EF338
  if (!crb(c,2)) { goto L_800EF350; } // 800EF33C
  c->r[0]=R32(c->r[30]+0x00000000u); // 800EF340
  W32(c->r[26]+0x00000000u,c->r[0]); // 800EF344
  c->r[0]=R32(c->r[29]+0x00000000u); // 800EF348
  W32(c->r[27]+0x00000000u,c->r[0]); // 800EF34C
L_800EF350:;
  cmps(c,0,(int32_t)c->r[28],0); // 800EF350
  if (crb(c,2)) { goto L_800EF368; } // 800EF354
  if (crb(c,2)) { goto L_800EF368; } // 800EF358
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF35C
  c->r[4]=c->r[28]|c->r[28]; // 800EF360
  c->lr=0x800EF368u; f_800F1860(c); // 800EF364
L_800EF368:;
  c->r[11]=c->r[1]+0x00000020u; // 800EF368
  c->r[3]=c->r[31]|c->r[31]; // 800EF36C
  c->lr=0x800EF374u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF370
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF374
  c->lr=c->r[0]; // 800EF378
  c->r[1]=c->r[1]+0x00000020u; // 800EF37C
  return; // 800EF380
}

// ISFS_CreateFile
void f_800EF384(Ctx* __restrict c) {
  trace_call(0x800EF384u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF384
  c->r[0]=c->lr; // 800EF388
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EF38C
  c->r[11]=c->r[1]+0x00000030u; // 800EF390
  c->lr=0x800EF398u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF394
  cmps(c,0,(int32_t)c->r[3],0); // 800EF398
  c->r[25]=c->r[3]|c->r[3]; // 800EF39C
  c->r[26]=c->r[4]|c->r[4]; // 800EF3A0
  c->r[27]=c->r[5]|c->r[5]; // 800EF3A4
  c->r[28]=c->r[6]|c->r[6]; // 800EF3A8
  c->r[29]=c->r[7]|c->r[7]; // 800EF3AC
  c->r[30]=0u+0x00000000u; // 800EF3B0
  if (crb(c,2)) { goto L_800EF3D8; } // 800EF3B4
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EF3B8
  cmps(c,0,(int32_t)c->r[0],0); // 800EF3BC
  if (crb(c,0)) { goto L_800EF3D8; } // 800EF3C0
  c->r[4]=0u+0x00000040u; // 800EF3C4
  c->lr=0x800EF3CCu; f_800EFBB8(c); // 800EF3C8
  cmpu(c,0,c->r[3],0x00000040u); // 800EF3CC
  c->r[31]=c->r[3]|c->r[3]; // 800EF3D0
  if (!crb(c,2)) { goto L_800EF3E0; } // 800EF3D4
L_800EF3D8:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800EF3D8
  goto L_800EF444; // 800EF3DC
L_800EF3E0:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF3E0
  c->r[4]=0u+0x00000140u; // 800EF3E4
  c->r[5]=0u+0x00000020u; // 800EF3E8
  c->lr=0x800EF3F0u; f_800F185C(c); // 800EF3EC
  cmps(c,0,(int32_t)c->r[3],0); // 800EF3F0
  c->r[30]=c->r[3]|c->r[3]; // 800EF3F4
  if (!crb(c,2)) { goto L_800EF404; } // 800EF3F8
  c->r[31]=0u+0xFFFFFFEAu; // 800EF3FC
  goto L_800EF444; // 800EF400
L_800EF404:;
  c->r[4]=c->r[25]|c->r[25]; // 800EF404
  c->r[5]=c->r[31]+0x00000001u; // 800EF408
  c->r[3]=c->r[3]+0x00000006u; // 800EF40C
  c->lr=0x800EF414u; f_80004338(c); // 800EF410
  W8(c->r[30]+0x00000049u,c->r[26]); // 800EF414
  c->r[5]=c->r[30]|c->r[30]; // 800EF418
  c->r[4]=0u+0x00000009u; // 800EF41C
  c->r[6]=0u+0x0000004Cu; // 800EF420
  W8(c->r[30]+0x00000046u,c->r[27]); // 800EF424
  c->r[7]=0u+0x00000000u; // 800EF428
  c->r[8]=0u+0x00000000u; // 800EF42C
  W8(c->r[30]+0x00000047u,c->r[28]); // 800EF430
  W8(c->r[30]+0x00000048u,c->r[29]); // 800EF434
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EF438
  c->lr=0x800EF440u; f_800F0E00(c); // 800EF43C
  c->r[31]=c->r[3]|c->r[3]; // 800EF440
L_800EF444:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EF444
  if (crb(c,2)) { goto L_800EF45C; } // 800EF448
  if (crb(c,2)) { goto L_800EF45C; } // 800EF44C
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF450
  c->r[4]=c->r[30]|c->r[30]; // 800EF454
  c->lr=0x800EF45Cu; f_800F1860(c); // 800EF458
L_800EF45C:;
  c->r[11]=c->r[1]+0x00000030u; // 800EF45C
  c->r[3]=c->r[31]|c->r[31]; // 800EF460
  c->lr=0x800EF468u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF464
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EF468
  c->lr=c->r[0]; // 800EF46C
  c->r[1]=c->r[1]+0x00000030u; // 800EF470
  return; // 800EF474
}

// ISFS_CreateFileAsync
void f_800EF478(Ctx* __restrict c) {
  trace_call(0x800EF478u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF478
  c->r[0]=c->lr; // 800EF47C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EF480
  c->r[11]=c->r[1]+0x00000030u; // 800EF484
  c->lr=0x800EF48Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF488
  cmps(c,0,(int32_t)c->r[3],0); // 800EF48C
  c->r[23]=c->r[3]|c->r[3]; // 800EF490
  c->r[24]=c->r[4]|c->r[4]; // 800EF494
  c->r[25]=c->r[5]|c->r[5]; // 800EF498
  c->r[26]=c->r[6]|c->r[6]; // 800EF49C
  c->r[27]=c->r[7]|c->r[7]; // 800EF4A0
  c->r[28]=c->r[8]|c->r[8]; // 800EF4A4
  c->r[29]=c->r[9]|c->r[9]; // 800EF4A8
  if (crb(c,2)) { goto L_800EF4D0; } // 800EF4AC
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EF4B0
  cmps(c,0,(int32_t)c->r[0],0); // 800EF4B4
  if (crb(c,0)) { goto L_800EF4D0; } // 800EF4B8
  c->r[4]=0u+0x00000040u; // 800EF4BC
  c->lr=0x800EF4C4u; f_800EFBB8(c); // 800EF4C0
  cmpu(c,0,c->r[3],0x00000040u); // 800EF4C4
  c->r[31]=c->r[3]|c->r[3]; // 800EF4C8
  if (!crb(c,2)) { goto L_800EF4D8; } // 800EF4CC
L_800EF4D0:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EF4D0
  goto L_800EF554; // 800EF4D4
L_800EF4D8:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF4D8
  c->r[4]=0u+0x00000140u; // 800EF4DC
  c->r[5]=0u+0x00000020u; // 800EF4E0
  c->lr=0x800EF4E8u; f_800F185C(c); // 800EF4E4
  cmps(c,0,(int32_t)c->r[3],0); // 800EF4E8
  c->r[30]=c->r[3]|c->r[3]; // 800EF4EC
  if (!crb(c,2)) { goto L_800EF4FC; } // 800EF4F0
  c->r[3]=0u+0xFFFFFF8Au; // 800EF4F4
  goto L_800EF554; // 800EF4F8
L_800EF4FC:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800EF4FC
  c->r[0]=0u+0x00000000u; // 800EF500
  c->r[4]=c->r[23]|c->r[23]; // 800EF504
  c->r[5]=c->r[31]+0x00000001u; // 800EF508
  W32(c->r[3]+0x00000104u,c->r[29]); // 800EF50C
  W32(c->r[3]+0x00000108u,c->r[0]); // 800EF510
  c->r[3]=c->r[3]+0x00000006u; // 800EF514
  c->lr=0x800EF51Cu; f_80004338(c); // 800EF518
  W8(c->r[30]+0x00000049u,c->r[24]); // 800EF51C
  c->r[9]=0u+0x800F0000u; // 800EF520
  c->r[5]=c->r[30]|c->r[30]; // 800EF524
  c->r[10]=c->r[30]|c->r[30]; // 800EF528
  W8(c->r[30]+0x00000046u,c->r[25]); // 800EF52C
  c->r[9]=c->r[9]+0xFFFFE710u; // 800EF530
  c->r[4]=0u+0x00000009u; // 800EF534
  c->r[6]=0u+0x0000004Cu; // 800EF538
  W8(c->r[30]+0x00000047u,c->r[26]); // 800EF53C
  c->r[7]=0u+0x00000000u; // 800EF540
  c->r[8]=0u+0x00000000u; // 800EF544
  W8(c->r[30]+0x00000048u,c->r[27]); // 800EF548
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EF54C
  c->lr=0x800EF554u; f_800F0CC8(c); // 800EF550
L_800EF554:;
  c->r[11]=c->r[1]+0x00000030u; // 800EF554
  c->lr=0x800EF55Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF558
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EF55C
  c->lr=c->r[0]; // 800EF560
  c->r[1]=c->r[1]+0x00000030u; // 800EF564
  return; // 800EF568
}

// ISFS_Open
void f_800EF56C(Ctx* __restrict c) {
  trace_call(0x800EF56Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF56C
  c->r[0]=c->lr; // 800EF570
  cmps(c,0,(int32_t)c->r[3],0); // 800EF574
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF578
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EF57C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EF580
  c->r[30]=0u+0x00000000u; // 800EF584
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EF588
  c->r[29]=c->r[4]|c->r[4]; // 800EF58C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800EF590
  c->r[28]=c->r[3]|c->r[3]; // 800EF594
  if (crb(c,2)) { goto L_800EF5B0; } // 800EF598
  c->r[4]=0u+0x00000040u; // 800EF59C
  c->lr=0x800EF5A4u; f_800EFBB8(c); // 800EF5A0
  cmpu(c,0,c->r[3],0x00000040u); // 800EF5A4
  c->r[31]=c->r[3]|c->r[3]; // 800EF5A8
  if (!crb(c,2)) { goto L_800EF5B8; } // 800EF5AC
L_800EF5B0:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800EF5B0
  goto L_800EF5F8; // 800EF5B4
L_800EF5B8:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF5B8
  c->r[4]=0u+0x00000140u; // 800EF5BC
  c->r[5]=0u+0x00000020u; // 800EF5C0
  c->lr=0x800EF5C8u; f_800F185C(c); // 800EF5C4
  cmps(c,0,(int32_t)c->r[3],0); // 800EF5C8
  c->r[30]=c->r[3]|c->r[3]; // 800EF5CC
  if (!crb(c,2)) { goto L_800EF5DC; } // 800EF5D0
  c->r[31]=0u+0xFFFFFFEAu; // 800EF5D4
  goto L_800EF5F8; // 800EF5D8
L_800EF5DC:;
  c->r[4]=c->r[28]|c->r[28]; // 800EF5DC
  c->r[5]=c->r[31]+0x00000001u; // 800EF5E0
  c->lr=0x800EF5E8u; f_80004338(c); // 800EF5E4
  c->r[3]=c->r[30]|c->r[30]; // 800EF5E8
  c->r[4]=c->r[29]|c->r[29]; // 800EF5EC
  c->lr=0x800EF5F4u; f_800F0468(c); // 800EF5F0
  c->r[31]=c->r[3]|c->r[3]; // 800EF5F4
L_800EF5F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EF5F8
  if (crb(c,2)) { goto L_800EF610; } // 800EF5FC
  if (crb(c,2)) { goto L_800EF610; } // 800EF600
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF604
  c->r[4]=c->r[30]|c->r[30]; // 800EF608
  c->lr=0x800EF610u; f_800F1860(c); // 800EF60C
L_800EF610:;
  c->r[3]=c->r[31]|c->r[31]; // 800EF610
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EF614
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EF618
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EF61C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800EF620
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF624
  c->lr=c->r[0]; // 800EF628
  c->r[1]=c->r[1]+0x00000020u; // 800EF62C
  return; // 800EF630
}

// ISFS_OpenAsync
void f_800EF634(Ctx* __restrict c) {
  trace_call(0x800EF634u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF634
  c->r[0]=c->lr; // 800EF638
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF63C
  c->r[11]=c->r[1]+0x00000020u; // 800EF640
  c->lr=0x800EF648u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF644
  cmps(c,0,(int32_t)c->r[3],0); // 800EF648
  c->r[26]=c->r[3]|c->r[3]; // 800EF64C
  c->r[27]=c->r[4]|c->r[4]; // 800EF650
  c->r[28]=c->r[5]|c->r[5]; // 800EF654
  c->r[29]=c->r[6]|c->r[6]; // 800EF658
  if (crb(c,2)) { goto L_800EF674; } // 800EF65C
  c->r[4]=0u+0x00000040u; // 800EF660
  c->lr=0x800EF668u; f_800EFBB8(c); // 800EF664
  cmpu(c,0,c->r[3],0x00000040u); // 800EF668
  c->r[31]=c->r[3]|c->r[3]; // 800EF66C
  if (!crb(c,2)) { goto L_800EF67C; } // 800EF670
L_800EF674:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EF674
  goto L_800EF6D4; // 800EF678
L_800EF67C:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF67C
  c->r[4]=0u+0x00000140u; // 800EF680
  c->r[5]=0u+0x00000020u; // 800EF684
  c->lr=0x800EF68Cu; f_800F185C(c); // 800EF688
  cmps(c,0,(int32_t)c->r[3],0); // 800EF68C
  c->r[30]=c->r[3]|c->r[3]; // 800EF690
  if (!crb(c,2)) { goto L_800EF6A0; } // 800EF694
  c->r[3]=0u+0xFFFFFF8Au; // 800EF698
  goto L_800EF6D4; // 800EF69C
L_800EF6A0:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800EF6A0
  c->r[0]=0u+0x00000000u; // 800EF6A4
  c->r[4]=c->r[26]|c->r[26]; // 800EF6A8
  c->r[5]=c->r[31]+0x00000001u; // 800EF6AC
  W32(c->r[3]+0x00000104u,c->r[29]); // 800EF6B0
  W32(c->r[3]+0x00000108u,c->r[0]); // 800EF6B4
  c->lr=0x800EF6BCu; f_80004338(c); // 800EF6B8
  c->r[5]=0u+0x800F0000u; // 800EF6BC
  c->r[3]=c->r[30]|c->r[30]; // 800EF6C0
  c->r[4]=c->r[27]|c->r[27]; // 800EF6C4
  c->r[6]=c->r[30]|c->r[30]; // 800EF6C8
  c->r[5]=c->r[5]+0xFFFFE710u; // 800EF6CC
  c->lr=0x800EF6D4u; f_800F0350(c); // 800EF6D0
L_800EF6D4:;
  c->r[11]=c->r[1]+0x00000020u; // 800EF6D4
  c->lr=0x800EF6DCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF6D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF6DC
  c->lr=c->r[0]; // 800EF6E0
  c->r[1]=c->r[1]+0x00000020u; // 800EF6E4
  return; // 800EF6E8
}

// ISFS_GetFileStats
void f_800EF6EC(Ctx* __restrict c) {
  trace_call(0x800EF6ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF6EC
  c->r[0]=c->lr; // 800EF6F0
  cmps(c,0,(int32_t)c->r[4],0); // 800EF6F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF6F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EF6FC
  c->r[31]=c->r[3]|c->r[3]; // 800EF700
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EF704
  c->r[30]=0u+0x00000000u; // 800EF708
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EF70C
  c->r[29]=c->r[4]|c->r[4]; // 800EF710
  if (crb(c,2)) { goto L_800EF720; } // 800EF714
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EF718
  if (crb(c,2)) { goto L_800EF728; } // 800EF71C
L_800EF720:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800EF720
  goto L_800EF784; // 800EF724
L_800EF728:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF728
  c->r[4]=0u+0x00000140u; // 800EF72C
  c->r[5]=0u+0x00000020u; // 800EF730
  c->lr=0x800EF738u; f_800F185C(c); // 800EF734
  cmps(c,0,(int32_t)c->r[3],0); // 800EF738
  c->r[30]=c->r[3]|c->r[3]; // 800EF73C
  if (!crb(c,2)) { goto L_800EF74C; } // 800EF740
  c->r[31]=0u+0xFFFFFFEAu; // 800EF744
  goto L_800EF784; // 800EF748
L_800EF74C:;
  c->r[3]=c->r[31]|c->r[31]; // 800EF74C
  c->r[7]=c->r[30]|c->r[30]; // 800EF750
  c->r[4]=0u+0x0000000Bu; // 800EF754
  c->r[5]=0u+0x00000000u; // 800EF758
  c->r[6]=0u+0x00000000u; // 800EF75C
  c->r[8]=0u+0x00000008u; // 800EF760
  c->lr=0x800EF768u; f_800F0E00(c); // 800EF764
  cmps(c,0,(int32_t)c->r[3],0); // 800EF768
  c->r[31]=c->r[3]|c->r[3]; // 800EF76C
  if (!crb(c,2)) { goto L_800EF784; } // 800EF770
  c->r[3]=c->r[29]|c->r[29]; // 800EF774
  c->r[4]=c->r[30]|c->r[30]; // 800EF778
  c->r[5]=0u+0x00000008u; // 800EF77C
  c->lr=0x800EF784u; f_80004338(c); // 800EF780
L_800EF784:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EF784
  if (crb(c,2)) { goto L_800EF79C; } // 800EF788
  if (crb(c,2)) { goto L_800EF79C; } // 800EF78C
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF790
  c->r[4]=c->r[30]|c->r[30]; // 800EF794
  c->lr=0x800EF79Cu; f_800F1860(c); // 800EF798
L_800EF79C:;
  c->r[3]=c->r[31]|c->r[31]; // 800EF79C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EF7A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EF7A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EF7A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF7AC
  c->lr=c->r[0]; // 800EF7B0
  c->r[1]=c->r[1]+0x00000020u; // 800EF7B4
  return; // 800EF7B8
}

// ISFS_Seek
void f_800EF7BC(Ctx* __restrict c) {
  trace_call(0x800EF7BCu);
  f_800F0BE0(c); return; // 800EF7BC
}

// ISFS_SeekAsync
void f_800EF7C0(Ctx* __restrict c) {
  trace_call(0x800EF7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF7C0
  c->r[0]=c->lr; // 800EF7C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF7C8
  c->r[11]=c->r[1]+0x00000020u; // 800EF7CC
  c->lr=0x800EF7D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF7D0
  c->r[27]=c->r[3]|c->r[3]; // 800EF7D4
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF7D8
  c->r[28]=c->r[4]|c->r[4]; // 800EF7DC
  c->r[29]=c->r[5]|c->r[5]; // 800EF7E0
  c->r[30]=c->r[6]|c->r[6]; // 800EF7E4
  c->r[31]=c->r[7]|c->r[7]; // 800EF7E8
  c->r[4]=0u+0x00000140u; // 800EF7EC
  c->r[5]=0u+0x00000020u; // 800EF7F0
  c->lr=0x800EF7F8u; f_800F185C(c); // 800EF7F4
  cmps(c,0,(int32_t)c->r[3],0); // 800EF7F8
  if (!crb(c,2)) { goto L_800EF808; } // 800EF7FC
  c->r[3]=0u+0xFFFFFF8Au; // 800EF800
  goto L_800EF834; // 800EF804
L_800EF808:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800EF808
  c->r[6]=0u+0x800F0000u; // 800EF80C
  c->r[0]=0u+0x00000000u; // 800EF810
  c->r[4]=c->r[28]|c->r[28]; // 800EF814
  W32(c->r[3]+0x00000104u,c->r[31]); // 800EF818
  c->r[5]=c->r[29]|c->r[29]; // 800EF81C
  c->r[7]=c->r[3]|c->r[3]; // 800EF820
  c->r[6]=c->r[6]+0xFFFFE710u; // 800EF824
  W32(c->r[3]+0x00000108u,c->r[0]); // 800EF828
  c->r[3]=c->r[27]|c->r[27]; // 800EF82C
  c->lr=0x800EF834u; f_800F0B00(c); // 800EF830
L_800EF834:;
  c->r[11]=c->r[1]+0x00000020u; // 800EF834
  c->lr=0x800EF83Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF838
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF83C
  c->lr=c->r[0]; // 800EF840
  c->r[1]=c->r[1]+0x00000020u; // 800EF844
  return; // 800EF848
}

// ISFS_Read
void f_800EF84C(Ctx* __restrict c) {
  trace_call(0x800EF84Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 800EF84C
  if (crb(c,2)) { goto L_800EF85C; } // 800EF850
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EF854
  if (crb(c,2)) { goto L_800EF864; } // 800EF858
L_800EF85C:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EF85C
  return; // 800EF860
L_800EF864:;
  f_800F07F0(c); return; // 800EF864
  return; // 800EF868
}

// ISFS_ReadAsync
void f_800EF86C(Ctx* __restrict c) {
  trace_call(0x800EF86Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF86C
  c->r[0]=c->lr; // 800EF870
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF874
  c->r[11]=c->r[1]+0x00000020u; // 800EF878
  c->lr=0x800EF880u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF87C
  cmps(c,0,(int32_t)c->r[4],0); // 800EF880
  c->r[27]=c->r[3]|c->r[3]; // 800EF884
  c->r[28]=c->r[4]|c->r[4]; // 800EF888
  c->r[29]=c->r[5]|c->r[5]; // 800EF88C
  c->r[30]=c->r[6]|c->r[6]; // 800EF890
  c->r[31]=c->r[7]|c->r[7]; // 800EF894
  if (crb(c,2)) { goto L_800EF8A4; } // 800EF898
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EF89C
  if (crb(c,2)) { goto L_800EF8AC; } // 800EF8A0
L_800EF8A4:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EF8A4
  goto L_800EF8F8; // 800EF8A8
L_800EF8AC:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF8AC
  c->r[4]=0u+0x00000140u; // 800EF8B0
  c->r[5]=0u+0x00000020u; // 800EF8B4
  c->lr=0x800EF8BCu; f_800F185C(c); // 800EF8B8
  cmps(c,0,(int32_t)c->r[3],0); // 800EF8BC
  if (!crb(c,2)) { goto L_800EF8CC; } // 800EF8C0
  c->r[3]=0u+0xFFFFFF8Au; // 800EF8C4
  goto L_800EF8F8; // 800EF8C8
L_800EF8CC:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800EF8CC
  c->r[6]=0u+0x800F0000u; // 800EF8D0
  c->r[0]=0u+0x00000000u; // 800EF8D4
  c->r[4]=c->r[28]|c->r[28]; // 800EF8D8
  W32(c->r[3]+0x00000104u,c->r[31]); // 800EF8DC
  c->r[5]=c->r[29]|c->r[29]; // 800EF8E0
  c->r[7]=c->r[3]|c->r[3]; // 800EF8E4
  c->r[6]=c->r[6]+0xFFFFE710u; // 800EF8E8
  W32(c->r[3]+0x00000108u,c->r[0]); // 800EF8EC
  c->r[3]=c->r[27]|c->r[27]; // 800EF8F0
  c->lr=0x800EF8F8u; f_800F06F0(c); // 800EF8F4
L_800EF8F8:;
  c->r[11]=c->r[1]+0x00000020u; // 800EF8F8
  c->lr=0x800EF900u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF8FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF900
  c->lr=c->r[0]; // 800EF904
  c->r[1]=c->r[1]+0x00000020u; // 800EF908
  return; // 800EF90C
}

// ISFS_Write
void f_800EF910(Ctx* __restrict c) {
  trace_call(0x800EF910u);
  cmps(c,0,(int32_t)c->r[4],0); // 800EF910
  if (crb(c,2)) { goto L_800EF920; } // 800EF914
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EF918
  if (crb(c,2)) { goto L_800EF928; } // 800EF91C
L_800EF920:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EF920
  return; // 800EF924
L_800EF928:;
  f_800F09F8(c); return; // 800EF928
  return; // 800EF92C
}

// ISFS_WriteAsync
void f_800EF930(Ctx* __restrict c) {
  trace_call(0x800EF930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF930
  c->r[0]=c->lr; // 800EF934
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF938
  c->r[11]=c->r[1]+0x00000020u; // 800EF93C
  c->lr=0x800EF944u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF940
  cmps(c,0,(int32_t)c->r[4],0); // 800EF944
  c->r[27]=c->r[3]|c->r[3]; // 800EF948
  c->r[28]=c->r[4]|c->r[4]; // 800EF94C
  c->r[29]=c->r[5]|c->r[5]; // 800EF950
  c->r[30]=c->r[6]|c->r[6]; // 800EF954
  c->r[31]=c->r[7]|c->r[7]; // 800EF958
  if (crb(c,2)) { goto L_800EF968; } // 800EF95C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800EF960
  if (crb(c,2)) { goto L_800EF970; } // 800EF964
L_800EF968:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800EF968
  goto L_800EF9BC; // 800EF96C
L_800EF970:;
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EF970
  c->r[4]=0u+0x00000140u; // 800EF974
  c->r[5]=0u+0x00000020u; // 800EF978
  c->lr=0x800EF980u; f_800F185C(c); // 800EF97C
  cmps(c,0,(int32_t)c->r[3],0); // 800EF980
  if (!crb(c,2)) { goto L_800EF990; } // 800EF984
  c->r[3]=0u+0xFFFFFF8Au; // 800EF988
  goto L_800EF9BC; // 800EF98C
L_800EF990:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800EF990
  c->r[6]=0u+0x800F0000u; // 800EF994
  c->r[0]=0u+0x00000000u; // 800EF998
  c->r[4]=c->r[28]|c->r[28]; // 800EF99C
  W32(c->r[3]+0x00000104u,c->r[31]); // 800EF9A0
  c->r[5]=c->r[29]|c->r[29]; // 800EF9A4
  c->r[7]=c->r[3]|c->r[3]; // 800EF9A8
  c->r[6]=c->r[6]+0xFFFFE710u; // 800EF9AC
  W32(c->r[3]+0x00000108u,c->r[0]); // 800EF9B0
  c->r[3]=c->r[27]|c->r[27]; // 800EF9B4
  c->lr=0x800EF9BCu; f_800F08F8(c); // 800EF9B8
L_800EF9BC:;
  c->r[11]=c->r[1]+0x00000020u; // 800EF9BC
  c->lr=0x800EF9C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EF9C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF9C4
  c->lr=c->r[0]; // 800EF9C8
  c->r[1]=c->r[1]+0x00000020u; // 800EF9CC
  return; // 800EF9D0
}

// ISFS_Close
void f_800EF9D4(Ctx* __restrict c) {
  trace_call(0x800EF9D4u);
  f_800F0648(c); return; // 800EF9D4
}

// ISFS_CloseAsync
void f_800EF9D8(Ctx* __restrict c) {
  trace_call(0x800EF9D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF9D8
  c->r[0]=c->lr; // 800EF9DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF9E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EF9E4
  c->r[31]=c->r[5]|c->r[5]; // 800EF9E8
  c->r[5]=0u+0x00000020u; // 800EF9EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EF9F0
  c->r[30]=c->r[4]|c->r[4]; // 800EF9F4
  c->r[4]=0u+0x00000140u; // 800EF9F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EF9FC
  c->r[29]=c->r[3]|c->r[3]; // 800EFA00
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EFA04
  c->lr=0x800EFA0Cu; f_800F185C(c); // 800EFA08
  cmps(c,0,(int32_t)c->r[3],0); // 800EFA0C
  if (!crb(c,2)) { goto L_800EFA1C; } // 800EFA10
  c->r[3]=0u+0xFFFFFF8Au; // 800EFA14
  goto L_800EFA40; // 800EFA18
L_800EFA1C:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800EFA1C
  c->r[4]=0u+0x800F0000u; // 800EFA20
  c->r[0]=0u+0x00000000u; // 800EFA24
  c->r[5]=c->r[3]|c->r[3]; // 800EFA28
  W32(c->r[3]+0x00000104u,c->r[31]); // 800EFA2C
  c->r[4]=c->r[4]+0xFFFFE710u; // 800EFA30
  W32(c->r[3]+0x00000108u,c->r[0]); // 800EFA34
  c->r[3]=c->r[29]|c->r[29]; // 800EFA38
  c->lr=0x800EFA40u; f_800F0588(c); // 800EFA3C
L_800EFA40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFA40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EFA44
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EFA48
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EFA4C
  c->lr=c->r[0]; // 800EFA50
  c->r[1]=c->r[1]+0x00000020u; // 800EFA54
  return; // 800EFA58
}

// ISFS_ShutdownAsync
void f_800EFA5C(Ctx* __restrict c) {
  trace_call(0x800EFA5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFA5C
  c->r[0]=c->lr; // 800EFA60
  c->r[5]=0u+0x00000020u; // 800EFA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFA68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFA6C
  c->r[31]=c->r[4]|c->r[4]; // 800EFA70
  c->r[4]=0u+0x00000140u; // 800EFA74
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EFA78
  c->r[30]=c->r[3]|c->r[3]; // 800EFA7C
  c->r[3]=R32(c->r[13]+0xFFFF92A4u); // 800EFA80
  c->lr=0x800EFA88u; f_800F185C(c); // 800EFA84
  c->r[0]=R32(c->r[13]+0xFFFF82A8u); // 800EFA88
  cmps(c,0,(int32_t)c->r[0],0); // 800EFA8C
  if (!crb(c,0)) { goto L_800EFA9C; } // 800EFA90
  c->r[3]=0u+0xFFFFFF9Bu; // 800EFA94
  goto L_800EFAD4; // 800EFA98
L_800EFA9C:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800EFA9C
  c->r[9]=0u+0x800F0000u; // 800EFAA0
  c->r[0]=0u+0x00000000u; // 800EFAA4
  c->r[10]=c->r[3]|c->r[3]; // 800EFAA8
  W32(c->r[3]+0x00000104u,c->r[31]); // 800EFAAC
  c->r[9]=c->r[9]+0xFFFFE710u; // 800EFAB0
  c->r[4]=0u+0x0000000Du; // 800EFAB4
  c->r[5]=0u+0x00000000u; // 800EFAB8
  W32(c->r[3]+0x00000108u,c->r[0]); // 800EFABC
  c->r[6]=0u+0x00000000u; // 800EFAC0
  c->r[7]=0u+0x00000000u; // 800EFAC4
  c->r[8]=0u+0x00000000u; // 800EFAC8
  c->r[3]=R32(c->r[13]+0xFFFF82A8u); // 800EFACC
  c->lr=0x800EFAD4u; f_800F0CC8(c); // 800EFAD0
L_800EFAD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFAD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFAD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EFADC
  c->lr=c->r[0]; // 800EFAE0
  c->r[1]=c->r[1]+0x00000010u; // 800EFAE4
  return; // 800EFAE8
}

// IPCInit
void f_800EFAEC(Ctx* __restrict c) {
  trace_call(0x800EFAECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFAEC
  c->r[0]=c->lr; // 800EFAF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFAF4
  c->r[0]=R8(c->r[13]+0xFFFF92A8u); // 800EFAF8
  cmps(c,0,(int32_t)c->r[0],0); // 800EFAFC
  if (!crb(c,2)) { goto L_800EFB28; } // 800EFB00
  c->lr=0x800EFB08u; f_800B4F40(c); // 800EFB04
  W32(c->r[13]+0xFFFF92B8u,c->r[3]); // 800EFB08
  c->lr=0x800EFB10u; f_800B4F48(c); // 800EFB0C
  c->r[4]=R32(c->r[13]+0xFFFF92B8u); // 800EFB10
  c->r[0]=0u+0x00000001u; // 800EFB14
  W32(c->r[13]+0xFFFF92B4u,c->r[3]); // 800EFB18
  W32(c->r[13]+0xFFFF92B0u,c->r[4]); // 800EFB1C
  W32(c->r[13]+0xFFFF92ACu,c->r[3]); // 800EFB20
  W8(c->r[13]+0xFFFF92A8u,c->r[0]); // 800EFB24
L_800EFB28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFB28
  c->lr=c->r[0]; // 800EFB2C
  c->r[1]=c->r[1]+0x00000010u; // 800EFB30
  return; // 800EFB34
}

// IPCReInit
void f_800EFB38(Ctx* __restrict c) {
  trace_call(0x800EFB38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFB38
  c->r[0]=c->lr; // 800EFB3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFB40
  c->r[0]=0u+0x00000000u; // 800EFB44
  W8(c->r[13]+0xFFFF92A8u,c->r[0]); // 800EFB48
  c->lr=0x800EFB50u; f_800B4F40(c); // 800EFB4C
  W32(c->r[13]+0xFFFF92B8u,c->r[3]); // 800EFB50
  c->lr=0x800EFB58u; f_800B4F48(c); // 800EFB54
  c->r[4]=R32(c->r[13]+0xFFFF92B8u); // 800EFB58
  c->r[0]=0u+0x00000001u; // 800EFB5C
  W32(c->r[13]+0xFFFF92B4u,c->r[3]); // 800EFB60
  W32(c->r[13]+0xFFFF92B0u,c->r[4]); // 800EFB64
  W32(c->r[13]+0xFFFF92ACu,c->r[3]); // 800EFB68
  W8(c->r[13]+0xFFFF92A8u,c->r[0]); // 800EFB6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFB70
  c->lr=c->r[0]; // 800EFB74
  c->r[1]=c->r[1]+0x00000010u; // 800EFB78
  return; // 800EFB7C
}

// IPCReadReg
void f_800EFB80(Ctx* __restrict c) {
  trace_call(0x800EFB80u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EFB80
  c->r[3]=0u+0xCD000000u; // 800EFB84
  c->r[3]=R32(c->r[3]+c->r[0]); // 800EFB88
  return; // 800EFB8C
}

// IPCWriteReg
void f_800EFB90(Ctx* __restrict c) {
  trace_call(0x800EFB90u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EFB90
  c->r[3]=0u+0xCD000000u; // 800EFB94
  W32(c->r[3]+c->r[0],c->r[4]); // 800EFB98
  return; // 800EFB9C
}

// IPCGetBufferHi
void f_800EFBA0(Ctx* __restrict c) {
  trace_call(0x800EFBA0u);
  c->r[3]=R32(c->r[13]+0xFFFF92B0u); // 800EFBA0
  return; // 800EFBA4
}

// IPCGetBufferLo
void f_800EFBA8(Ctx* __restrict c) {
  trace_call(0x800EFBA8u);
  c->r[3]=R32(c->r[13]+0xFFFF92ACu); // 800EFBA8
  return; // 800EFBAC
}

// IPCSetBufferLo
void f_800EFBB0(Ctx* __restrict c) {
  trace_call(0x800EFBB0u);
  W32(c->r[13]+0xFFFF92ACu,c->r[3]); // 800EFBB0
  return; // 800EFBB4
}

// strnlen
void f_800EFBB8(Ctx* __restrict c) {
  trace_call(0x800EFBB8u);
  c->r[5]=c->r[3]|c->r[3]; // 800EFBB8
  goto L_800EFBC4; // 800EFBBC
L_800EFBC0:;
  c->r[5]=c->r[5]+0x00000001u; // 800EFBC0
L_800EFBC4:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 800EFBC4
  cmps(c,0,(int32_t)c->r[0],0); // 800EFBC8
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFBCC
  cmps(c,0,(int32_t)c->r[4],0); // 800EFBD0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800EFBD4
  if (!crb(c,2)) { IRQCHK(c); goto L_800EFBC0; } // 800EFBD8
L_800EFBDC:;
  c->r[3]=c->r[5]-c->r[3]; // 800EFBDC
  return; // 800EFBE0
}

// IpcReplyHandler
void f_800EFBE4(Ctx* __restrict c) {
  trace_call(0x800EFBE4u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFBE4
  c->r[0]=c->lr; // 800EFBE8
  c->r[3]=0u+0x00000002u; // 800EFBEC
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800EFBF0
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800EFBF4
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800EFBF8
  c->r[30]=c->r[4]|c->r[4]; // 800EFBFC
  W32(c->r[1]+0x000002D4u,c->r[29]); // 800EFC00
  W32(c->r[1]+0x000002D0u,c->r[28]); // 800EFC04
  c->lr=0x800EFC0Cu; f_800EFB80(c); // 800EFC08
  cmps(c,0,(int32_t)c->r[3],0); // 800EFC0C
  if (crb(c,2)) { goto L_800EFE1C; } // 800EFC10
  c->r[31]=c->r[3]+0x80000000u; // 800EFC14
  c->r[3]=0u+0x00000001u; // 800EFC18
  c->lr=0x800EFC20u; f_800EFB80(c); // 800EFC1C
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800EFC20
  c->r[3]=0u+0x00000001u; // 800EFC24
  c->r[4]=c->r[0]|0x00000004u; // 800EFC28
  c->lr=0x800EFC30u; f_800EFB90(c); // 800EFC2C
  c->r[0]=0u+0x40000000u; // 800EFC30
  c->r[3]=0u+0xCD000000u; // 800EFC34
  W32(c->r[3]+0x00000030u,c->r[0]); // 800EFC38
  c->r[3]=c->r[31]|c->r[31]; // 800EFC3C
  c->r[4]=0u+0x00000020u; // 800EFC40
  c->lr=0x800EFC48u; f_800ABD00(c); // 800EFC44
  c->r[0]=R32(c->r[31]+0x00000008u); // 800EFC48
  cmps(c,0,(int32_t)c->r[0],6); // 800EFC4C
  if (crb(c,2)) { goto L_800EFCA4; } // 800EFC50
  if (!crb(c,0)) { goto L_800EFC64; } // 800EFC54
  cmps(c,0,(int32_t)c->r[0],3); // 800EFC58
  if (crb(c,2)) { goto L_800EFC70; } // 800EFC5C
  goto L_800EFDA0; // 800EFC60
L_800EFC64:;
  cmps(c,0,(int32_t)c->r[0],8); // 800EFC64
  if (!crb(c,0)) { goto L_800EFDA0; } // 800EFC68
  goto L_800EFCDC; // 800EFC6C
L_800EFC70:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800EFC70
  cmps(c,0,(int32_t)c->r[3],0); // 800EFC74
  if (crb(c,2)) { goto L_800EFC84; } // 800EFC78
  c->r[0]=c->r[3]+0x80000000u; // 800EFC7C
  goto L_800EFC88; // 800EFC80
L_800EFC84:;
  c->r[0]=0u+0x00000000u; // 800EFC84
L_800EFC88:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800EFC88
  c->r[4]=R32(c->r[31]+0x00000004u); // 800EFC8C
  cmps(c,0,(int32_t)c->r[4],0); // 800EFC90
  if (!crb(c,1)) { goto L_800EFDA0; } // 800EFC94
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800EFC98
  c->lr=0x800EFCA0u; f_800ABD00(c); // 800EFC9C
  goto L_800EFDA0; // 800EFCA0
L_800EFCA4:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800EFCA4
  cmps(c,0,(int32_t)c->r[3],0); // 800EFCA8
  if (crb(c,2)) { goto L_800EFCB8; } // 800EFCAC
  c->r[0]=c->r[3]+0x80000000u; // 800EFCB0
  goto L_800EFCBC; // 800EFCB4
L_800EFCB8:;
  c->r[0]=0u+0x00000000u; // 800EFCB8
L_800EFCBC:;
  W32(c->r[31]+0x00000018u,c->r[0]); // 800EFCBC
  c->r[3]=R32(c->r[31]+0x00000010u); // 800EFCC0
  c->r[4]=R32(c->r[31]+0x00000014u); // 800EFCC4
  c->lr=0x800EFCCCu; f_800ABD00(c); // 800EFCC8
  c->r[3]=R32(c->r[31]+0x00000018u); // 800EFCCC
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800EFCD0
  c->lr=0x800EFCD8u; f_800ABD00(c); // 800EFCD4
  goto L_800EFDA0; // 800EFCD8
L_800EFCDC:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800EFCDC
  cmps(c,0,(int32_t)c->r[3],0); // 800EFCE0
  if (crb(c,2)) { goto L_800EFCF0; } // 800EFCE4
  c->r[3]=c->r[3]+0x80000000u; // 800EFCE8
  goto L_800EFCF4; // 800EFCEC
L_800EFCF0:;
  c->r[3]=0u+0x00000000u; // 800EFCF0
L_800EFCF4:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 800EFCF4
  c->r[4]=R32(c->r[31]+0x00000010u); // 800EFCF8
  c->r[0]=R32(c->r[31]+0x00000014u); // 800EFCFC
  c->r[0]=c->r[4]+c->r[0]; // 800EFD00
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800EFD04
  c->lr=0x800EFD0Cu; f_800ABD00(c); // 800EFD08
  c->r[28]=0u+0x00000000u; // 800EFD0C
  c->r[29]=0u+0x00000000u; // 800EFD10
  goto L_800EFD58; // 800EFD14
L_800EFD18:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800EFD18
  c->r[3]=R32(c->r[3]+c->r[29]); // 800EFD1C
  cmps(c,0,(int32_t)c->r[3],0); // 800EFD20
  if (crb(c,2)) { goto L_800EFD30; } // 800EFD24
  c->r[0]=c->r[3]+0x80000000u; // 800EFD28
  goto L_800EFD34; // 800EFD2C
L_800EFD30:;
  c->r[0]=0u+0x00000000u; // 800EFD30
L_800EFD34:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800EFD34
  W32(c->r[3]+c->r[29],c->r[0]); // 800EFD38
  c->r[3]=R32(c->r[31]+0x00000018u); // 800EFD3C
  c->r[4]=c->r[3]+c->r[29]; // 800EFD40
  c->r[3]=R32(c->r[3]+c->r[29]); // 800EFD44
  c->r[4]=R32(c->r[4]+0x00000004u); // 800EFD48
  c->lr=0x800EFD50u; f_800ABD00(c); // 800EFD4C
  c->r[28]=c->r[28]+0x00000001u; // 800EFD50
  c->r[29]=c->r[29]+0x00000008u; // 800EFD54
L_800EFD58:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 800EFD58
  c->r[0]=R32(c->r[31]+0x00000014u); // 800EFD5C
  c->r[0]=c->r[3]+c->r[0]; // 800EFD60
  cmpu(c,0,c->r[28],c->r[0]); // 800EFD64
  if (crb(c,0)) { IRQCHK(c); goto L_800EFD18; } // 800EFD68
  c->r[0]=R32(c->r[13]+0xFFFF92C0u); // 800EFD6C
  cmps(c,0,(int32_t)c->r[0],0); // 800EFD70
  if (crb(c,2)) { goto L_800EFDA0; } // 800EFD74
  c->r[0]=R32(c->r[13]+0xFFFF92C8u); // 800EFD78
  cmpu(c,0,c->r[0],c->r[31]); // 800EFD7C
  if (!crb(c,2)) { goto L_800EFDA0; } // 800EFD80
  c->r[3]=R32(c->r[13]+0xFFFF82B8u); // 800EFD84
  c->r[0]=0u+0x00000000u; // 800EFD88
  W32(c->r[13]+0xFFFF92C0u,c->r[0]); // 800EFD8C
  cmps(c,0,(int32_t)c->r[3],1); // 800EFD90
  if (!crb(c,0)) { goto L_800EFDA0; } // 800EFD94
  c->r[0]=c->r[3]+0x00000001u; // 800EFD98
  W32(c->r[13]+0xFFFF82B8u,c->r[0]); // 800EFD9C
L_800EFDA0:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 800EFDA0
  cmps(c,0,(int32_t)c->r[0],0); // 800EFDA4
  if (crb(c,2)) { goto L_800EFDF0; } // 800EFDA8
  c->r[3]=c->r[1]+0x00000008u; // 800EFDAC
  c->lr=0x800EFDB4u; f_800AC798(c); // 800EFDB0
  c->r[3]=c->r[1]+0x00000008u; // 800EFDB4
  c->lr=0x800EFDBCu; f_800AC570(c); // 800EFDB8
  c->r[12]=R32(c->r[31]+0x00000020u); // 800EFDBC
  c->r[3]=R32(c->r[31]+0x00000004u); // 800EFDC0
  c->r[4]=R32(c->r[31]+0x00000024u); // 800EFDC4
  c->ctr=c->r[12]; // 800EFDC8
  if (true) { c->lr=0x800EFDD0u; dispatch(c,c->ctr); } // 800EFDCC
  c->r[3]=c->r[1]+0x00000008u; // 800EFDD0
  c->lr=0x800EFDD8u; f_800AC798(c); // 800EFDD4
  c->r[3]=c->r[30]|c->r[30]; // 800EFDD8
  c->lr=0x800EFDE0u; f_800AC570(c); // 800EFDDC
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800EFDE0
  c->r[4]=c->r[31]|c->r[31]; // 800EFDE4
  c->lr=0x800EFDECu; f_800F1860(c); // 800EFDE8
  goto L_800EFDF8; // 800EFDEC
L_800EFDF0:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800EFDF0
  c->lr=0x800EFDF8u; f_800B46D8(c); // 800EFDF4
L_800EFDF8:;
  c->r[3]=0u+0x00000001u; // 800EFDF8
  c->lr=0x800EFE00u; f_800EFB80(c); // 800EFDFC
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800EFE00
  c->r[3]=0u+0x00000001u; // 800EFE04
  c->r[4]=c->r[0]|0x00000008u; // 800EFE08
  c->lr=0x800EFE10u; f_800EFB90(c); // 800EFE0C
  c->r[4]=R32(c->r[31]+0x00000008u); // 800EFE10
  c->r[3]=c->r[31]|c->r[31]; // 800EFE14
  c->lr=0x800EFE1Cu; f_800F1B94(c); // 800EFE18
L_800EFE1C:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800EFE1C
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800EFE20
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800EFE24
  c->r[29]=R32(c->r[1]+0x000002D4u); // 800EFE28
  c->r[28]=R32(c->r[1]+0x000002D0u); // 800EFE2C
  c->lr=c->r[0]; // 800EFE30
  c->r[1]=c->r[1]+0x000002E0u; // 800EFE34
  return; // 800EFE38
}

// IPCInterruptHandler
void f_800EFE3C(Ctx* __restrict c) {
  trace_call(0x800EFE3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFE3C
  c->r[0]=c->lr; // 800EFE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFE44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFE48
  c->r[31]=c->r[4]|c->r[4]; // 800EFE4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EFE50
  c->r[30]=c->r[3]|c->r[3]; // 800EFE54
  c->r[3]=0u+0x00000001u; // 800EFE58
  c->lr=0x800EFE60u; f_800EFB80(c); // 800EFE5C
  c->r[0]=c->r[3]&0x00000014u; cr0(c,c->r[0]); // 800EFE60
  cmpu(c,0,c->r[0],0x00000014u); // 800EFE64
  if (!crb(c,2)) { goto L_800EFE78; } // 800EFE68
  c->r[3]=c->r[30]|c->r[30]; // 800EFE6C
  c->r[4]=c->r[31]|c->r[31]; // 800EFE70
  c->lr=0x800EFE78u; f_800EFBE4(c); // 800EFE74
L_800EFE78:;
  c->r[3]=0u+0x00000001u; // 800EFE78
  c->lr=0x800EFE80u; f_800EFB80(c); // 800EFE7C
  c->r[0]=c->r[3]&0x00000022u; cr0(c,c->r[0]); // 800EFE80
  cmpu(c,0,c->r[0],0x00000022u); // 800EFE84
  if (!crb(c,2)) { goto L_800EFFD0; } // 800EFE88
  c->r[3]=0u+0x00000001u; // 800EFE8C
  c->lr=0x800EFE94u; f_800EFB80(c); // 800EFE90
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800EFE94
  c->r[3]=0u+0x00000001u; // 800EFE98
  c->r[4]=c->r[0]|0x00000002u; // 800EFE9C
  c->lr=0x800EFEA4u; f_800EFB90(c); // 800EFEA0
  c->r[0]=0u+0x40000000u; // 800EFEA4
  c->r[3]=0u+0xCD000000u; // 800EFEA8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800EFEAC
  c->r[31]=R32(c->r[13]+0xFFFF82B8u); // 800EFEB0
  cmps(c,0,(int32_t)c->r[31],1); // 800EFEB4
  if (!crb(c,0)) { goto L_800EFEC8; } // 800EFEB8
  c->r[31]=c->r[31]+0x00000001u; // 800EFEBC
  W32(c->r[13]+0xFFFF82B8u,c->r[31]); // 800EFEC0
  c->lr=0x800EFEC8u; f_800F1B84(c); // 800EFEC4
L_800EFEC8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EFEC8
  if (!crb(c,1)) { goto L_800EFFD0; } // 800EFECC
  c->r[0]=R32(c->r[13]+0xFFFF92C0u); // 800EFED0
  cmps(c,0,(int32_t)c->r[0],0); // 800EFED4
  if (crb(c,2)) { goto L_800EFF10; } // 800EFED8
  c->r[3]=R32(c->r[13]+0xFFFF92C4u); // 800EFEDC
  c->r[0]=0u+0x00000000u; // 800EFEE0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800EFEE4
  c->r[3]=R32(c->r[13]+0xFFFF92C4u); // 800EFEE8
  W32(c->r[13]+0xFFFF92C0u,c->r[0]); // 800EFEEC
  c->r[3]=c->r[3]+0x0000002Cu; // 800EFEF0
  c->lr=0x800EFEF8u; f_800B46D8(c); // 800EFEF4
  c->r[3]=0u+0x00000001u; // 800EFEF8
  c->lr=0x800EFF00u; f_800EFB80(c); // 800EFEFC
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800EFF00
  c->r[3]=0u+0x00000001u; // 800EFF04
  c->r[4]=c->r[0]|0x00000008u; // 800EFF08
  c->lr=0x800EFF10u; f_800EFB90(c); // 800EFF0C
L_800EFF10:;
  c->r[4]=0u+0x802D0000u; // 800EFF10
  c->r[3]=c->r[4]+0x00002B40u; // 800EFF14
  c->r[4]=R32(c->r[4]+0x00002B40u); // 800EFF18
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EFF1C
  cmpu(c,0,c->r[0],c->r[4]); // 800EFF20
  if (!crb(c,0)) { goto L_800EFF30; } // 800EFF24
  c->r[0]=c->r[0]-c->r[4]; // 800EFF28
  goto L_800EFF3C; // 800EFF2C
L_800EFF30:;
  c->r[0]=c->r[0]-c->r[4]; // 800EFF30
  c->r[0]=cntlz(c->r[0]); // 800EFF34
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EFF38
L_800EFF3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800EFF3C
  if (!crb(c,2)) { goto L_800EFFD0; } // 800EFF40
  c->r[3]=0u+0x802D0000u; // 800EFF44
  c->r[3]=c->r[3]+0x00002B40u; // 800EFF48
  c->r[0]=R32(c->r[3]+0x00000008u); // 800EFF4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EFF50
  c->r[3]=c->r[3]+c->r[0]; // 800EFF54
  c->r[4]=R32(c->r[3]+0x00000010u); // 800EFF58
  cmps(c,0,(int32_t)c->r[4],0); // 800EFF5C
  if (crb(c,2)) { goto L_800EFFD0; } // 800EFF60
  c->r[0]=R32(c->r[4]+0x00000028u); // 800EFF64
  cmps(c,0,(int32_t)c->r[0],0); // 800EFF68
  if (crb(c,2)) { goto L_800EFF7C; } // 800EFF6C
  c->r[3]=R32(c->r[13]+0xFFFF82B8u); // 800EFF70
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800EFF74
  W32(c->r[13]+0xFFFF82B8u,c->r[0]); // 800EFF78
L_800EFF7C:;
  c->r[4]=c->r[4]+0x80000000u; // 800EFF7C
  c->r[3]=0u+0x00000000u; // 800EFF80
  c->lr=0x800EFF88u; f_800EFB90(c); // 800EFF84
  c->r[7]=0u+0x802D0000u; // 800EFF88
  c->r[3]=R32(c->r[13]+0xFFFF82B8u); // 800EFF8C
  c->r[6]=c->r[7]+0x00002B40u; // 800EFF90
  c->r[4]=R32(c->r[7]+0x00002B40u); // 800EFF94
  c->r[5]=R32(c->r[6]+0x00000008u); // 800EFF98
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800EFF9C
  W32(c->r[13]+0xFFFF82B8u,c->r[0]); // 800EFFA0
  c->r[4]=c->r[4]+0x00000001u; // 800EFFA4
  c->r[0]=c->r[5]+0x00000001u; // 800EFFA8
  c->r[3]=0u+0x00000001u; // 800EFFAC
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800EFFB0
  W32(c->r[7]+0x00002B40u,c->r[4]); // 800EFFB4
  W32(c->r[6]+0x00000008u,c->r[0]); // 800EFFB8
  c->lr=0x800EFFC0u; f_800EFB80(c); // 800EFFBC
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800EFFC0
  c->r[3]=0u+0x00000001u; // 800EFFC4
  c->r[4]=c->r[0]|0x00000001u; // 800EFFC8
  c->lr=0x800EFFD0u; f_800EFB90(c); // 800EFFCC
L_800EFFD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFFD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFFD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EFFD8
  c->lr=c->r[0]; // 800EFFDC
  c->r[1]=c->r[1]+0x00000010u; // 800EFFE0
  return; // 800EFFE4
}

// IPCCltInit
void f_800EFFE8(Ctx* __restrict c) {
  trace_call(0x800EFFE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFFE8
  c->r[0]=c->lr; // 800EFFEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFFF0
  c->r[0]=R32(c->r[13]+0xFFFF92CCu); // 800EFFF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EFFF8
  cmps(c,0,(int32_t)c->r[0],0); // 800EFFFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F0000
  c->r[30]=0u+0x00000000u; // 800F0004
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F0008
  if (!crb(c,2)) { goto L_800F007C; } // 800F000C
  c->r[0]=0u+0x00000001u; // 800F0010
  W32(c->r[13]+0xFFFF92CCu,c->r[0]); // 800F0014
  c->lr=0x800F001Cu; f_800EFAEC(c); // 800F0018
  c->lr=0x800F0020u; f_800EFBA8(c); // 800F001C
  c->r[29]=c->r[3]|c->r[3]; // 800F0020
  c->r[31]=c->r[3]+0x00001000u; // 800F0024
  c->lr=0x800F002Cu; f_800EFBA0(c); // 800F0028
  cmpu(c,0,c->r[31],c->r[3]); // 800F002C
  if (!crb(c,1)) { goto L_800F003C; } // 800F0030
  c->r[30]=0u+0xFFFFFFEAu; // 800F0034
  goto L_800F007C; // 800F0038
L_800F003C:;
  c->r[3]=c->r[29]|c->r[29]; // 800F003C
  c->r[4]=0u+0x00001000u; // 800F0040
  c->lr=0x800F0048u; f_800F1528(c); // 800F0044
  W32(c->r[13]+0xFFFF82BCu,c->r[3]); // 800F0048
  c->r[3]=c->r[31]|c->r[31]; // 800F004C
  c->lr=0x800F0054u; f_800EFBB0(c); // 800F0050
  c->r[4]=0u+0x800F0000u; // 800F0054
  c->r[3]=0u+0x0000001Bu; // 800F0058
  c->r[4]=c->r[4]+0xFFFFFE3Cu; // 800F005C
  c->lr=0x800F0064u; f_800B08C8(c); // 800F0060
  c->r[3]=0u+0x00000010u; // 800F0064
  c->lr=0x800F006Cu; f_800B0C8C(c); // 800F0068
  c->r[3]=0u+0x00000001u; // 800F006C
  c->r[4]=0u+0x00000038u; // 800F0070
  c->lr=0x800F0078u; f_800EFB90(c); // 800F0074
  c->lr=0x800F007Cu; f_800F1A4C(c); // 800F0078
L_800F007C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F007C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0080
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F0084
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F0088
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F008C
  c->lr=c->r[0]; // 800F0090
  c->r[1]=c->r[1]+0x00000020u; // 800F0094
  return; // 800F0098
}

// IPCCltReInit
void f_800F009C(Ctx* __restrict c) {
  trace_call(0x800F009Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F009C
  c->r[0]=c->lr; // 800F00A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F00A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F00A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F00AC
  c->r[30]=0u+0x00000000u; // 800F00B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F00B4
  c->lr=0x800F00BCu; f_800EFBA8(c); // 800F00B8
  c->r[29]=c->r[3]|c->r[3]; // 800F00BC
  c->r[31]=c->r[3]+0x00000800u; // 800F00C0
  c->lr=0x800F00C8u; f_800EFBA0(c); // 800F00C4
  cmpu(c,0,c->r[31],c->r[3]); // 800F00C8
  if (!crb(c,1)) { goto L_800F00D8; } // 800F00CC
  c->r[30]=0u+0xFFFFFFEAu; // 800F00D0
  goto L_800F00F0; // 800F00D4
L_800F00D8:;
  c->r[3]=c->r[29]|c->r[29]; // 800F00D8
  c->r[4]=0u+0x00000800u; // 800F00DC
  c->lr=0x800F00E4u; f_800F1528(c); // 800F00E0
  W32(c->r[13]+0xFFFF82BCu,c->r[3]); // 800F00E4
  c->r[3]=c->r[31]|c->r[31]; // 800F00E8
  c->lr=0x800F00F0u; f_800EFBB0(c); // 800F00EC
L_800F00F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F00F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F00F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F00F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F00FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0100
  c->lr=c->r[0]; // 800F0104
  c->r[1]=c->r[1]+0x00000020u; // 800F0108
  return; // 800F010C
}

void hle___ios_Ipc2(Ctx*);
// __ios_Ipc2
void f_800F0110(Ctx* __restrict c) {
  hle___ios_Ipc2(c);
}

// IOS_OpenAsync
void f_800F0350(Ctx* __restrict c) {
  trace_call(0x800F0350u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0350
  c->r[0]=c->lr; // 800F0354
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F0358
  c->r[11]=c->r[1]+0x00000030u; // 800F035C
  c->lr=0x800F0364u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0360
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0364
  c->r[27]=c->r[3]|c->r[3]; // 800F0368
  c->r[28]=c->r[4]|c->r[4]; // 800F036C
  c->r[29]=c->r[5]|c->r[5]; // 800F0370
  c->r[31]=c->r[6]|c->r[6]; // 800F0374
  c->r[30]=0u+0x00000000u; // 800F0378
  if (!crb(c,2)) { goto L_800F0388; } // 800F037C
  c->r[30]=0u+0xFFFFFFFCu; // 800F0380
  goto L_800F03D0; // 800F0384
L_800F0388:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F0388
  c->r[4]=0u+0x00000040u; // 800F038C
  c->r[5]=0u+0x00000020u; // 800F0390
  c->lr=0x800F0398u; f_800F185C(c); // 800F0394
  cmps(c,0,(int32_t)c->r[3],0); // 800F0398
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F039C
  if (!crb(c,2)) { goto L_800F03AC; } // 800F03A0
  c->r[30]=0u+0xFFFFFFEAu; // 800F03A4
  goto L_800F03D0; // 800F03A8
L_800F03AC:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 800F03AC
  c->r[5]=0u+0x00000000u; // 800F03B0
  c->r[0]=0u+0x00000001u; // 800F03B4
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F03B8
  W32(c->r[4]+0x00000024u,c->r[31]); // 800F03BC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F03C0
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F03C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F03C8
  W32(c->r[3]+0x00000008u,c->r[5]); // 800F03CC
L_800F03D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F03D0
  if (!crb(c,2)) { goto L_800F044C; } // 800F03D4
  c->r[31]=R32(c->r[1]+0x00000008u); // 800F03D8
  c->r[30]=0u+0x00000000u; // 800F03DC
  cmps(c,0,(int32_t)c->r[31],0); // 800F03E0
  if (!crb(c,2)) { goto L_800F03F0; } // 800F03E4
  c->r[30]=0u+0xFFFFFFFCu; // 800F03E8
  goto L_800F0434; // 800F03EC
L_800F03F0:;
  c->r[3]=c->r[27]|c->r[27]; // 800F03F0
  c->r[4]=0u+0x00000040u; // 800F03F4
  goto L_800F0400; // 800F03F8
L_800F03FC:;
  c->r[3]=c->r[3]+0x00000001u; // 800F03FC
L_800F0400:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F0400
  cmps(c,0,(int32_t)c->r[0],0); // 800F0404
  if (crb(c,2)) { goto L_800F0418; } // 800F0408
  cmps(c,0,(int32_t)c->r[4],0); // 800F040C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F0410
  if (!crb(c,2)) { IRQCHK(c); goto L_800F03FC; } // 800F0414
L_800F0418:;
  c->r[4]=c->r[3]-c->r[27]; // 800F0418
  c->r[3]=c->r[27]|c->r[27]; // 800F041C
  c->r[4]=c->r[4]+0x00000001u; // 800F0420
  c->lr=0x800F0428u; f_800ABD2C(c); // 800F0424
  c->r[0]=c->r[27]+0x80000000u; // 800F0428
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800F042C
  W32(c->r[31]+0x00000010u,c->r[28]); // 800F0430
L_800F0434:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F0434
  if (!crb(c,2)) { goto L_800F044C; } // 800F0438
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F043C
  c->r[4]=c->r[29]|c->r[29]; // 800F0440
  c->lr=0x800F0448u; f_800F0110(c); // 800F0444
  c->r[30]=c->r[3]|c->r[3]; // 800F0448
L_800F044C:;
  c->r[11]=c->r[1]+0x00000030u; // 800F044C
  c->r[3]=c->r[30]|c->r[30]; // 800F0450
  c->lr=0x800F0458u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0454
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F0458
  c->lr=c->r[0]; // 800F045C
  c->r[1]=c->r[1]+0x00000030u; // 800F0460
  return; // 800F0464
}

// IOS_Open
void f_800F0468(Ctx* __restrict c) {
  trace_call(0x800F0468u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0468
  c->r[0]=c->lr; // 800F046C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0470
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0474
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0478
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F047C
  c->r[30]=0u+0x00000000u; // 800F0480
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F0484
  c->r[29]=c->r[4]|c->r[4]; // 800F0488
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F048C
  c->r[28]=c->r[3]|c->r[3]; // 800F0490
  if (!crb(c,2)) { goto L_800F04A0; } // 800F0494
  c->r[30]=0u+0xFFFFFFFCu; // 800F0498
  goto L_800F04E8; // 800F049C
L_800F04A0:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F04A0
  c->r[4]=0u+0x00000040u; // 800F04A4
  c->r[5]=0u+0x00000020u; // 800F04A8
  c->lr=0x800F04B0u; f_800F185C(c); // 800F04AC
  cmps(c,0,(int32_t)c->r[3],0); // 800F04B0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F04B4
  if (!crb(c,2)) { goto L_800F04C4; } // 800F04B8
  c->r[30]=0u+0xFFFFFFEAu; // 800F04BC
  goto L_800F04E8; // 800F04C0
L_800F04C4:;
  c->r[5]=0u+0x00000000u; // 800F04C4
  c->r[0]=0u+0x00000001u; // 800F04C8
  W32(c->r[3]+0x00000020u,c->r[5]); // 800F04CC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F04D0
  W32(c->r[4]+0x00000024u,c->r[5]); // 800F04D4
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F04D8
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F04DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F04E0
  W32(c->r[3]+0x00000008u,c->r[5]); // 800F04E4
L_800F04E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F04E8
  if (!crb(c,2)) { goto L_800F0564; } // 800F04EC
  c->r[31]=R32(c->r[1]+0x00000008u); // 800F04F0
  c->r[30]=0u+0x00000000u; // 800F04F4
  cmps(c,0,(int32_t)c->r[31],0); // 800F04F8
  if (!crb(c,2)) { goto L_800F0508; } // 800F04FC
  c->r[30]=0u+0xFFFFFFFCu; // 800F0500
  goto L_800F054C; // 800F0504
L_800F0508:;
  c->r[3]=c->r[28]|c->r[28]; // 800F0508
  c->r[4]=0u+0x00000040u; // 800F050C
  goto L_800F0518; // 800F0510
L_800F0514:;
  c->r[3]=c->r[3]+0x00000001u; // 800F0514
L_800F0518:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F0518
  cmps(c,0,(int32_t)c->r[0],0); // 800F051C
  if (crb(c,2)) { goto L_800F0530; } // 800F0520
  cmps(c,0,(int32_t)c->r[4],0); // 800F0524
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F0528
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0514; } // 800F052C
L_800F0530:;
  c->r[4]=c->r[3]-c->r[28]; // 800F0530
  c->r[3]=c->r[28]|c->r[28]; // 800F0534
  c->r[4]=c->r[4]+0x00000001u; // 800F0538
  c->lr=0x800F0540u; f_800ABD2C(c); // 800F053C
  c->r[0]=c->r[28]+0x80000000u; // 800F0540
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800F0544
  W32(c->r[31]+0x00000010u,c->r[29]); // 800F0548
L_800F054C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F054C
  if (!crb(c,2)) { goto L_800F0564; } // 800F0550
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0554
  c->r[4]=0u+0x00000000u; // 800F0558
  c->lr=0x800F0560u; f_800F0110(c); // 800F055C
  c->r[30]=c->r[3]|c->r[3]; // 800F0560
L_800F0564:;
  c->r[3]=c->r[30]|c->r[30]; // 800F0564
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0568
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F056C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F0570
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F0574
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0578
  c->lr=c->r[0]; // 800F057C
  c->r[1]=c->r[1]+0x00000020u; // 800F0580
  return; // 800F0584
}

// IOS_CloseAsync
void f_800F0588(Ctx* __restrict c) {
  trace_call(0x800F0588u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0588
  c->r[0]=c->lr; // 800F058C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0590
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0598
  c->r[31]=0u+0x00000000u; // 800F059C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F05A0
  c->r[30]=c->r[5]|c->r[5]; // 800F05A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F05A8
  c->r[29]=c->r[4]|c->r[4]; // 800F05AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F05B0
  c->r[28]=c->r[3]|c->r[3]; // 800F05B4
  if (!crb(c,2)) { goto L_800F05C4; } // 800F05B8
  c->r[31]=0u+0xFFFFFFFCu; // 800F05BC
  goto L_800F060C; // 800F05C0
L_800F05C4:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F05C4
  c->r[4]=0u+0x00000040u; // 800F05C8
  c->r[5]=0u+0x00000020u; // 800F05CC
  c->lr=0x800F05D4u; f_800F185C(c); // 800F05D0
  cmps(c,0,(int32_t)c->r[3],0); // 800F05D4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F05D8
  if (!crb(c,2)) { goto L_800F05E8; } // 800F05DC
  c->r[31]=0u+0xFFFFFFEAu; // 800F05E0
  goto L_800F060C; // 800F05E4
L_800F05E8:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 800F05E8
  c->r[5]=0u+0x00000000u; // 800F05EC
  c->r[0]=0u+0x00000002u; // 800F05F0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F05F4
  W32(c->r[4]+0x00000024u,c->r[30]); // 800F05F8
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F05FC
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F0600
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0604
  W32(c->r[3]+0x00000008u,c->r[28]); // 800F0608
L_800F060C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F060C
  if (!crb(c,2)) { goto L_800F0624; } // 800F0610
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0614
  c->r[4]=c->r[29]|c->r[29]; // 800F0618
  c->lr=0x800F0620u; f_800F0110(c); // 800F061C
  c->r[31]=c->r[3]|c->r[3]; // 800F0620
L_800F0624:;
  c->r[3]=c->r[31]|c->r[31]; // 800F0624
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0628
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F062C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F0630
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F0634
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0638
  c->lr=c->r[0]; // 800F063C
  c->r[1]=c->r[1]+0x00000020u; // 800F0640
  return; // 800F0644
}

// IOS_Close
void f_800F0648(Ctx* __restrict c) {
  trace_call(0x800F0648u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0648
  c->r[0]=c->lr; // 800F064C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0650
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0654
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0658
  c->r[31]=0u+0x00000000u; // 800F065C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F0660
  c->r[30]=c->r[3]|c->r[3]; // 800F0664
  if (!crb(c,2)) { goto L_800F0674; } // 800F0668
  c->r[31]=0u+0xFFFFFFFCu; // 800F066C
  goto L_800F06BC; // 800F0670
L_800F0674:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F0674
  c->r[4]=0u+0x00000040u; // 800F0678
  c->r[5]=0u+0x00000020u; // 800F067C
  c->lr=0x800F0684u; f_800F185C(c); // 800F0680
  cmps(c,0,(int32_t)c->r[3],0); // 800F0684
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F0688
  if (!crb(c,2)) { goto L_800F0698; } // 800F068C
  c->r[31]=0u+0xFFFFFFEAu; // 800F0690
  goto L_800F06BC; // 800F0694
L_800F0698:;
  c->r[5]=0u+0x00000000u; // 800F0698
  c->r[0]=0u+0x00000002u; // 800F069C
  W32(c->r[3]+0x00000020u,c->r[5]); // 800F06A0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F06A4
  W32(c->r[4]+0x00000024u,c->r[5]); // 800F06A8
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F06AC
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F06B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F06B4
  W32(c->r[3]+0x00000008u,c->r[30]); // 800F06B8
L_800F06BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F06BC
  if (!crb(c,2)) { goto L_800F06D4; } // 800F06C0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F06C4
  c->r[4]=0u+0x00000000u; // 800F06C8
  c->lr=0x800F06D0u; f_800F0110(c); // 800F06CC
  c->r[31]=c->r[3]|c->r[3]; // 800F06D0
L_800F06D4:;
  c->r[3]=c->r[31]|c->r[31]; // 800F06D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F06D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F06DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F06E0
  c->lr=c->r[0]; // 800F06E4
  c->r[1]=c->r[1]+0x00000020u; // 800F06E8
  return; // 800F06EC
}

// IOS_ReadAsync
void f_800F06F0(Ctx* __restrict c) {
  trace_call(0x800F06F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F06F0
  c->r[0]=c->lr; // 800F06F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F06F8
  c->r[11]=c->r[1]+0x00000030u; // 800F06FC
  c->lr=0x800F0704u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0700
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0704
  c->r[26]=c->r[3]|c->r[3]; // 800F0708
  c->r[27]=c->r[4]|c->r[4]; // 800F070C
  c->r[28]=c->r[5]|c->r[5]; // 800F0710
  c->r[29]=c->r[6]|c->r[6]; // 800F0714
  c->r[31]=c->r[7]|c->r[7]; // 800F0718
  c->r[30]=0u+0x00000000u; // 800F071C
  if (!crb(c,2)) { goto L_800F072C; } // 800F0720
  c->r[30]=0u+0xFFFFFFFCu; // 800F0724
  goto L_800F0774; // 800F0728
L_800F072C:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F072C
  c->r[4]=0u+0x00000040u; // 800F0730
  c->r[5]=0u+0x00000020u; // 800F0734
  c->lr=0x800F073Cu; f_800F185C(c); // 800F0738
  cmps(c,0,(int32_t)c->r[3],0); // 800F073C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F0740
  if (!crb(c,2)) { goto L_800F0750; } // 800F0744
  c->r[30]=0u+0xFFFFFFEAu; // 800F0748
  goto L_800F0774; // 800F074C
L_800F0750:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 800F0750
  c->r[5]=0u+0x00000000u; // 800F0754
  c->r[0]=0u+0x00000003u; // 800F0758
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F075C
  W32(c->r[4]+0x00000024u,c->r[31]); // 800F0760
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0764
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F0768
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F076C
  W32(c->r[3]+0x00000008u,c->r[26]); // 800F0770
L_800F0774:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F0774
  if (!crb(c,2)) { goto L_800F07D4; } // 800F0778
  c->r[31]=R32(c->r[1]+0x00000008u); // 800F077C
  c->r[30]=0u+0x00000000u; // 800F0780
  cmps(c,0,(int32_t)c->r[31],0); // 800F0784
  if (!crb(c,2)) { goto L_800F0794; } // 800F0788
  c->r[30]=0u+0xFFFFFFFCu; // 800F078C
  goto L_800F07BC; // 800F0790
L_800F0794:;
  c->r[3]=c->r[27]|c->r[27]; // 800F0794
  c->r[4]=c->r[28]|c->r[28]; // 800F0798
  c->lr=0x800F07A0u; f_800ABD00(c); // 800F079C
  cmps(c,0,(int32_t)c->r[27],0); // 800F07A0
  if (crb(c,2)) { goto L_800F07B0; } // 800F07A4
  c->r[0]=c->r[27]+0x80000000u; // 800F07A8
  goto L_800F07B4; // 800F07AC
L_800F07B0:;
  c->r[0]=0u+0x00000000u; // 800F07B0
L_800F07B4:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800F07B4
  W32(c->r[31]+0x00000010u,c->r[28]); // 800F07B8
L_800F07BC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F07BC
  if (!crb(c,2)) { goto L_800F07D4; } // 800F07C0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F07C4
  c->r[4]=c->r[29]|c->r[29]; // 800F07C8
  c->lr=0x800F07D0u; f_800F0110(c); // 800F07CC
  c->r[30]=c->r[3]|c->r[3]; // 800F07D0
L_800F07D4:;
  c->r[11]=c->r[1]+0x00000030u; // 800F07D4
  c->r[3]=c->r[30]|c->r[30]; // 800F07D8
  c->lr=0x800F07E0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F07DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F07E0
  c->lr=c->r[0]; // 800F07E4
  c->r[1]=c->r[1]+0x00000030u; // 800F07E8
  return; // 800F07EC
}

// IOS_Read
void f_800F07F0(Ctx* __restrict c) {
  trace_call(0x800F07F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F07F0
  c->r[0]=c->lr; // 800F07F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F07F8
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F07FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0800
  c->r[31]=c->r[3]|c->r[3]; // 800F0804
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F0808
  c->r[30]=0u+0x00000000u; // 800F080C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F0810
  c->r[29]=c->r[5]|c->r[5]; // 800F0814
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F0818
  c->r[28]=c->r[4]|c->r[4]; // 800F081C
  if (!crb(c,2)) { goto L_800F082C; } // 800F0820
  c->r[30]=0u+0xFFFFFFFCu; // 800F0824
  goto L_800F0874; // 800F0828
L_800F082C:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F082C
  c->r[4]=0u+0x00000040u; // 800F0830
  c->r[5]=0u+0x00000020u; // 800F0834
  c->lr=0x800F083Cu; f_800F185C(c); // 800F0838
  cmps(c,0,(int32_t)c->r[3],0); // 800F083C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F0840
  if (!crb(c,2)) { goto L_800F0850; } // 800F0844
  c->r[30]=0u+0xFFFFFFEAu; // 800F0848
  goto L_800F0874; // 800F084C
L_800F0850:;
  c->r[5]=0u+0x00000000u; // 800F0850
  c->r[0]=0u+0x00000003u; // 800F0854
  W32(c->r[3]+0x00000020u,c->r[5]); // 800F0858
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F085C
  W32(c->r[4]+0x00000024u,c->r[5]); // 800F0860
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0864
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F0868
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F086C
  W32(c->r[3]+0x00000008u,c->r[31]); // 800F0870
L_800F0874:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F0874
  if (!crb(c,2)) { goto L_800F08D4; } // 800F0878
  c->r[31]=R32(c->r[1]+0x00000008u); // 800F087C
  c->r[30]=0u+0x00000000u; // 800F0880
  cmps(c,0,(int32_t)c->r[31],0); // 800F0884
  if (!crb(c,2)) { goto L_800F0894; } // 800F0888
  c->r[30]=0u+0xFFFFFFFCu; // 800F088C
  goto L_800F08BC; // 800F0890
L_800F0894:;
  c->r[3]=c->r[28]|c->r[28]; // 800F0894
  c->r[4]=c->r[29]|c->r[29]; // 800F0898
  c->lr=0x800F08A0u; f_800ABD00(c); // 800F089C
  cmps(c,0,(int32_t)c->r[28],0); // 800F08A0
  if (crb(c,2)) { goto L_800F08B0; } // 800F08A4
  c->r[0]=c->r[28]+0x80000000u; // 800F08A8
  goto L_800F08B4; // 800F08AC
L_800F08B0:;
  c->r[0]=0u+0x00000000u; // 800F08B0
L_800F08B4:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800F08B4
  W32(c->r[31]+0x00000010u,c->r[29]); // 800F08B8
L_800F08BC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F08BC
  if (!crb(c,2)) { goto L_800F08D4; } // 800F08C0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F08C4
  c->r[4]=0u+0x00000000u; // 800F08C8
  c->lr=0x800F08D0u; f_800F0110(c); // 800F08CC
  c->r[30]=c->r[3]|c->r[3]; // 800F08D0
L_800F08D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F08D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F08D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F08DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F08E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F08E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F08E8
  c->lr=c->r[0]; // 800F08EC
  c->r[1]=c->r[1]+0x00000020u; // 800F08F0
  return; // 800F08F4
}

// IOS_WriteAsync
void f_800F08F8(Ctx* __restrict c) {
  trace_call(0x800F08F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F08F8
  c->r[0]=c->lr; // 800F08FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F0900
  c->r[11]=c->r[1]+0x00000030u; // 800F0904
  c->lr=0x800F090Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0908
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F090C
  c->r[26]=c->r[3]|c->r[3]; // 800F0910
  c->r[27]=c->r[4]|c->r[4]; // 800F0914
  c->r[28]=c->r[5]|c->r[5]; // 800F0918
  c->r[29]=c->r[6]|c->r[6]; // 800F091C
  c->r[30]=c->r[7]|c->r[7]; // 800F0920
  c->r[31]=0u+0x00000000u; // 800F0924
  if (!crb(c,2)) { goto L_800F0934; } // 800F0928
  c->r[31]=0u+0xFFFFFFFCu; // 800F092C
  goto L_800F097C; // 800F0930
L_800F0934:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F0934
  c->r[4]=0u+0x00000040u; // 800F0938
  c->r[5]=0u+0x00000020u; // 800F093C
  c->lr=0x800F0944u; f_800F185C(c); // 800F0940
  cmps(c,0,(int32_t)c->r[3],0); // 800F0944
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F0948
  if (!crb(c,2)) { goto L_800F0958; } // 800F094C
  c->r[31]=0u+0xFFFFFFEAu; // 800F0950
  goto L_800F097C; // 800F0954
L_800F0958:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 800F0958
  c->r[5]=0u+0x00000000u; // 800F095C
  c->r[0]=0u+0x00000004u; // 800F0960
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0964
  W32(c->r[4]+0x00000024u,c->r[30]); // 800F0968
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F096C
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F0970
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0974
  W32(c->r[3]+0x00000008u,c->r[26]); // 800F0978
L_800F097C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F097C
  if (!crb(c,2)) { goto L_800F09DC; } // 800F0980
  c->r[5]=R32(c->r[1]+0x00000008u); // 800F0984
  c->r[31]=0u+0x00000000u; // 800F0988
  cmps(c,0,(int32_t)c->r[5],0); // 800F098C
  if (!crb(c,2)) { goto L_800F099C; } // 800F0990
  c->r[31]=0u+0xFFFFFFFCu; // 800F0994
  goto L_800F09C4; // 800F0998
L_800F099C:;
  cmps(c,0,(int32_t)c->r[27],0); // 800F099C
  if (crb(c,2)) { goto L_800F09AC; } // 800F09A0
  c->r[0]=c->r[27]+0x80000000u; // 800F09A4
  goto L_800F09B0; // 800F09A8
L_800F09AC:;
  c->r[0]=0u+0x00000000u; // 800F09AC
L_800F09B0:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800F09B0
  c->r[3]=c->r[27]|c->r[27]; // 800F09B4
  c->r[4]=c->r[28]|c->r[28]; // 800F09B8
  W32(c->r[5]+0x00000010u,c->r[28]); // 800F09BC
  c->lr=0x800F09C4u; f_800ABD2C(c); // 800F09C0
L_800F09C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F09C4
  if (!crb(c,2)) { goto L_800F09DC; } // 800F09C8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F09CC
  c->r[4]=c->r[29]|c->r[29]; // 800F09D0
  c->lr=0x800F09D8u; f_800F0110(c); // 800F09D4
  c->r[31]=c->r[3]|c->r[3]; // 800F09D8
L_800F09DC:;
  c->r[11]=c->r[1]+0x00000030u; // 800F09DC
  c->r[3]=c->r[31]|c->r[31]; // 800F09E0
  c->lr=0x800F09E8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F09E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F09E8
  c->lr=c->r[0]; // 800F09EC
  c->r[1]=c->r[1]+0x00000030u; // 800F09F0
  return; // 800F09F4
}

// IOS_Write
void f_800F09F8(Ctx* __restrict c) {
  trace_call(0x800F09F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F09F8
  c->r[0]=c->lr; // 800F09FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0A00
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0A04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0A08
  c->r[31]=0u+0x00000000u; // 800F0A0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F0A10
  c->r[30]=c->r[5]|c->r[5]; // 800F0A14
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F0A18
  c->r[29]=c->r[4]|c->r[4]; // 800F0A1C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F0A20
  c->r[28]=c->r[3]|c->r[3]; // 800F0A24
  if (!crb(c,2)) { goto L_800F0A34; } // 800F0A28
  c->r[31]=0u+0xFFFFFFFCu; // 800F0A2C
  goto L_800F0A7C; // 800F0A30
L_800F0A34:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F0A34
  c->r[4]=0u+0x00000040u; // 800F0A38
  c->r[5]=0u+0x00000020u; // 800F0A3C
  c->lr=0x800F0A44u; f_800F185C(c); // 800F0A40
  cmps(c,0,(int32_t)c->r[3],0); // 800F0A44
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F0A48
  if (!crb(c,2)) { goto L_800F0A58; } // 800F0A4C
  c->r[31]=0u+0xFFFFFFEAu; // 800F0A50
  goto L_800F0A7C; // 800F0A54
L_800F0A58:;
  c->r[5]=0u+0x00000000u; // 800F0A58
  c->r[0]=0u+0x00000004u; // 800F0A5C
  W32(c->r[3]+0x00000020u,c->r[5]); // 800F0A60
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0A64
  W32(c->r[4]+0x00000024u,c->r[5]); // 800F0A68
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0A6C
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F0A70
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0A74
  W32(c->r[3]+0x00000008u,c->r[28]); // 800F0A78
L_800F0A7C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0A7C
  if (!crb(c,2)) { goto L_800F0ADC; } // 800F0A80
  c->r[5]=R32(c->r[1]+0x00000008u); // 800F0A84
  c->r[31]=0u+0x00000000u; // 800F0A88
  cmps(c,0,(int32_t)c->r[5],0); // 800F0A8C
  if (!crb(c,2)) { goto L_800F0A9C; } // 800F0A90
  c->r[31]=0u+0xFFFFFFFCu; // 800F0A94
  goto L_800F0AC4; // 800F0A98
L_800F0A9C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F0A9C
  if (crb(c,2)) { goto L_800F0AAC; } // 800F0AA0
  c->r[0]=c->r[29]+0x80000000u; // 800F0AA4
  goto L_800F0AB0; // 800F0AA8
L_800F0AAC:;
  c->r[0]=0u+0x00000000u; // 800F0AAC
L_800F0AB0:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800F0AB0
  c->r[3]=c->r[29]|c->r[29]; // 800F0AB4
  c->r[4]=c->r[30]|c->r[30]; // 800F0AB8
  W32(c->r[5]+0x00000010u,c->r[30]); // 800F0ABC
  c->lr=0x800F0AC4u; f_800ABD2C(c); // 800F0AC0
L_800F0AC4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0AC4
  if (!crb(c,2)) { goto L_800F0ADC; } // 800F0AC8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0ACC
  c->r[4]=0u+0x00000000u; // 800F0AD0
  c->lr=0x800F0AD8u; f_800F0110(c); // 800F0AD4
  c->r[31]=c->r[3]|c->r[3]; // 800F0AD8
L_800F0ADC:;
  c->r[3]=c->r[31]|c->r[31]; // 800F0ADC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0AE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F0AE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F0AE8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F0AEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0AF0
  c->lr=c->r[0]; // 800F0AF4
  c->r[1]=c->r[1]+0x00000020u; // 800F0AF8
  return; // 800F0AFC
}

// IOS_SeekAsync
void f_800F0B00(Ctx* __restrict c) {
  trace_call(0x800F0B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0B00
  c->r[0]=c->lr; // 800F0B04
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F0B08
  c->r[11]=c->r[1]+0x00000030u; // 800F0B0C
  c->lr=0x800F0B14u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0B10
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0B14
  c->r[26]=c->r[3]|c->r[3]; // 800F0B18
  c->r[27]=c->r[4]|c->r[4]; // 800F0B1C
  c->r[28]=c->r[5]|c->r[5]; // 800F0B20
  c->r[29]=c->r[6]|c->r[6]; // 800F0B24
  c->r[30]=c->r[7]|c->r[7]; // 800F0B28
  c->r[31]=0u+0x00000000u; // 800F0B2C
  if (!crb(c,2)) { goto L_800F0B3C; } // 800F0B30
  c->r[31]=0u+0xFFFFFFFCu; // 800F0B34
  goto L_800F0B84; // 800F0B38
L_800F0B3C:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F0B3C
  c->r[4]=0u+0x00000040u; // 800F0B40
  c->r[5]=0u+0x00000020u; // 800F0B44
  c->lr=0x800F0B4Cu; f_800F185C(c); // 800F0B48
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F0B50
  if (!crb(c,2)) { goto L_800F0B60; } // 800F0B54
  c->r[31]=0u+0xFFFFFFEAu; // 800F0B58
  goto L_800F0B84; // 800F0B5C
L_800F0B60:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 800F0B60
  c->r[5]=0u+0x00000000u; // 800F0B64
  c->r[0]=0u+0x00000005u; // 800F0B68
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0B6C
  W32(c->r[4]+0x00000024u,c->r[30]); // 800F0B70
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0B74
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F0B78
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0B7C
  W32(c->r[3]+0x00000008u,c->r[26]); // 800F0B80
L_800F0B84:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0B84
  if (!crb(c,2)) { goto L_800F0BC4; } // 800F0B88
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0B8C
  c->r[31]=0u+0x00000000u; // 800F0B90
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B94
  if (!crb(c,2)) { goto L_800F0BA4; } // 800F0B98
  c->r[31]=0u+0xFFFFFFFCu; // 800F0B9C
  goto L_800F0BAC; // 800F0BA0
L_800F0BA4:;
  W32(c->r[3]+0x0000000Cu,c->r[27]); // 800F0BA4
  W32(c->r[3]+0x00000010u,c->r[28]); // 800F0BA8
L_800F0BAC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0BAC
  if (!crb(c,2)) { goto L_800F0BC4; } // 800F0BB0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0BB4
  c->r[4]=c->r[29]|c->r[29]; // 800F0BB8
  c->lr=0x800F0BC0u; f_800F0110(c); // 800F0BBC
  c->r[31]=c->r[3]|c->r[3]; // 800F0BC0
L_800F0BC4:;
  c->r[11]=c->r[1]+0x00000030u; // 800F0BC4
  c->r[3]=c->r[31]|c->r[31]; // 800F0BC8
  c->lr=0x800F0BD0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0BCC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F0BD0
  c->lr=c->r[0]; // 800F0BD4
  c->r[1]=c->r[1]+0x00000030u; // 800F0BD8
  return; // 800F0BDC
}

// IOS_Seek
void f_800F0BE0(Ctx* __restrict c) {
  trace_call(0x800F0BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0BE0
  c->r[0]=c->lr; // 800F0BE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0BE8
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0BEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0BF0
  c->r[31]=0u+0x00000000u; // 800F0BF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F0BF8
  c->r[30]=c->r[5]|c->r[5]; // 800F0BFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F0C00
  c->r[29]=c->r[4]|c->r[4]; // 800F0C04
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F0C08
  c->r[28]=c->r[3]|c->r[3]; // 800F0C0C
  if (!crb(c,2)) { goto L_800F0C1C; } // 800F0C10
  c->r[31]=0u+0xFFFFFFFCu; // 800F0C14
  goto L_800F0C64; // 800F0C18
L_800F0C1C:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F0C1C
  c->r[4]=0u+0x00000040u; // 800F0C20
  c->r[5]=0u+0x00000020u; // 800F0C24
  c->lr=0x800F0C2Cu; f_800F185C(c); // 800F0C28
  cmps(c,0,(int32_t)c->r[3],0); // 800F0C2C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F0C30
  if (!crb(c,2)) { goto L_800F0C40; } // 800F0C34
  c->r[31]=0u+0xFFFFFFEAu; // 800F0C38
  goto L_800F0C64; // 800F0C3C
L_800F0C40:;
  c->r[5]=0u+0x00000000u; // 800F0C40
  c->r[0]=0u+0x00000005u; // 800F0C44
  W32(c->r[3]+0x00000020u,c->r[5]); // 800F0C48
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0C4C
  W32(c->r[4]+0x00000024u,c->r[5]); // 800F0C50
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0C54
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F0C58
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0C5C
  W32(c->r[3]+0x00000008u,c->r[28]); // 800F0C60
L_800F0C64:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0C64
  if (!crb(c,2)) { goto L_800F0CA4; } // 800F0C68
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0C6C
  c->r[31]=0u+0x00000000u; // 800F0C70
  cmps(c,0,(int32_t)c->r[3],0); // 800F0C74
  if (!crb(c,2)) { goto L_800F0C84; } // 800F0C78
  c->r[31]=0u+0xFFFFFFFCu; // 800F0C7C
  goto L_800F0C8C; // 800F0C80
L_800F0C84:;
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 800F0C84
  W32(c->r[3]+0x00000010u,c->r[30]); // 800F0C88
L_800F0C8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0C8C
  if (!crb(c,2)) { goto L_800F0CA4; } // 800F0C90
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0C94
  c->r[4]=0u+0x00000000u; // 800F0C98
  c->lr=0x800F0CA0u; f_800F0110(c); // 800F0C9C
  c->r[31]=c->r[3]|c->r[3]; // 800F0CA0
L_800F0CA4:;
  c->r[3]=c->r[31]|c->r[31]; // 800F0CA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0CA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F0CAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F0CB0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F0CB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0CB8
  c->lr=c->r[0]; // 800F0CBC
  c->r[1]=c->r[1]+0x00000020u; // 800F0CC0
  return; // 800F0CC4
}

// IOS_IoctlAsync
void f_800F0CC8(Ctx* __restrict c) {
  trace_call(0x800F0CC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0CC8
  c->r[0]=c->lr; // 800F0CCC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F0CD0
  c->r[11]=c->r[1]+0x00000040u; // 800F0CD4
  c->lr=0x800F0CDCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0CD8
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0CDC
  c->r[23]=c->r[3]|c->r[3]; // 800F0CE0
  c->r[24]=c->r[4]|c->r[4]; // 800F0CE4
  c->r[25]=c->r[5]|c->r[5]; // 800F0CE8
  c->r[26]=c->r[6]|c->r[6]; // 800F0CEC
  c->r[27]=c->r[7]|c->r[7]; // 800F0CF0
  c->r[28]=c->r[8]|c->r[8]; // 800F0CF4
  c->r[29]=c->r[9]|c->r[9]; // 800F0CF8
  c->r[30]=c->r[10]|c->r[10]; // 800F0CFC
  c->r[31]=0u+0x00000000u; // 800F0D00
  if (!crb(c,2)) { goto L_800F0D10; } // 800F0D04
  c->r[31]=0u+0xFFFFFFFCu; // 800F0D08
  goto L_800F0D58; // 800F0D0C
L_800F0D10:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F0D10
  c->r[4]=0u+0x00000040u; // 800F0D14
  c->r[5]=0u+0x00000020u; // 800F0D18
  c->lr=0x800F0D20u; f_800F185C(c); // 800F0D1C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0D20
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F0D24
  if (!crb(c,2)) { goto L_800F0D34; } // 800F0D28
  c->r[31]=0u+0xFFFFFFEAu; // 800F0D2C
  goto L_800F0D58; // 800F0D30
L_800F0D34:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 800F0D34
  c->r[5]=0u+0x00000000u; // 800F0D38
  c->r[0]=0u+0x00000006u; // 800F0D3C
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0D40
  W32(c->r[4]+0x00000024u,c->r[30]); // 800F0D44
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0D48
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F0D4C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0D50
  W32(c->r[3]+0x00000008u,c->r[23]); // 800F0D54
L_800F0D58:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0D58
  if (!crb(c,2)) { goto L_800F0DE4; } // 800F0D5C
  c->r[5]=R32(c->r[1]+0x00000008u); // 800F0D60
  c->r[31]=0u+0x00000000u; // 800F0D64
  cmps(c,0,(int32_t)c->r[5],0); // 800F0D68
  if (!crb(c,2)) { goto L_800F0D78; } // 800F0D6C
  c->r[31]=0u+0xFFFFFFFCu; // 800F0D70
  goto L_800F0DCC; // 800F0D74
L_800F0D78:;
  cmps(c,0,(int32_t)c->r[27],0); // 800F0D78
  W32(c->r[5]+0x0000000Cu,c->r[24]); // 800F0D7C
  if (crb(c,2)) { goto L_800F0D8C; } // 800F0D80
  c->r[0]=c->r[27]+0x80000000u; // 800F0D84
  goto L_800F0D90; // 800F0D88
L_800F0D8C:;
  c->r[0]=0u+0x00000000u; // 800F0D8C
L_800F0D90:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 800F0D90
  cmps(c,0,(int32_t)c->r[25],0); // 800F0D94
  W32(c->r[5]+0x0000001Cu,c->r[28]); // 800F0D98
  if (crb(c,2)) { goto L_800F0DA8; } // 800F0D9C
  c->r[0]=c->r[25]+0x80000000u; // 800F0DA0
  goto L_800F0DAC; // 800F0DA4
L_800F0DA8:;
  c->r[0]=0u+0x00000000u; // 800F0DA8
L_800F0DAC:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 800F0DAC
  c->r[3]=c->r[25]|c->r[25]; // 800F0DB0
  c->r[4]=c->r[26]|c->r[26]; // 800F0DB4
  W32(c->r[5]+0x00000014u,c->r[26]); // 800F0DB8
  c->lr=0x800F0DC0u; f_800ABD2C(c); // 800F0DBC
  c->r[3]=c->r[27]|c->r[27]; // 800F0DC0
  c->r[4]=c->r[28]|c->r[28]; // 800F0DC4
  c->lr=0x800F0DCCu; f_800ABD2C(c); // 800F0DC8
L_800F0DCC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0DCC
  if (!crb(c,2)) { goto L_800F0DE4; } // 800F0DD0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0DD4
  c->r[4]=c->r[29]|c->r[29]; // 800F0DD8
  c->lr=0x800F0DE0u; f_800F0110(c); // 800F0DDC
  c->r[31]=c->r[3]|c->r[3]; // 800F0DE0
L_800F0DE4:;
  c->r[11]=c->r[1]+0x00000040u; // 800F0DE4
  c->r[3]=c->r[31]|c->r[31]; // 800F0DE8
  c->lr=0x800F0DF0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0DEC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F0DF0
  c->lr=c->r[0]; // 800F0DF4
  c->r[1]=c->r[1]+0x00000040u; // 800F0DF8
  return; // 800F0DFC
}

// IOS_Ioctl
void f_800F0E00(Ctx* __restrict c) {
  trace_call(0x800F0E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0E00
  c->r[0]=c->lr; // 800F0E04
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F0E08
  c->r[11]=c->r[1]+0x00000030u; // 800F0E0C
  c->lr=0x800F0E14u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0E10
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F0E14
  c->r[25]=c->r[3]|c->r[3]; // 800F0E18
  c->r[26]=c->r[4]|c->r[4]; // 800F0E1C
  c->r[27]=c->r[5]|c->r[5]; // 800F0E20
  c->r[28]=c->r[6]|c->r[6]; // 800F0E24
  c->r[29]=c->r[7]|c->r[7]; // 800F0E28
  c->r[30]=c->r[8]|c->r[8]; // 800F0E2C
  c->r[31]=0u+0x00000000u; // 800F0E30
  if (!crb(c,2)) { goto L_800F0E40; } // 800F0E34
  c->r[31]=0u+0xFFFFFFFCu; // 800F0E38
  goto L_800F0E88; // 800F0E3C
L_800F0E40:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F0E40
  c->r[4]=0u+0x00000040u; // 800F0E44
  c->r[5]=0u+0x00000020u; // 800F0E48
  c->lr=0x800F0E50u; f_800F185C(c); // 800F0E4C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0E50
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F0E54
  if (!crb(c,2)) { goto L_800F0E64; } // 800F0E58
  c->r[31]=0u+0xFFFFFFEAu; // 800F0E5C
  goto L_800F0E88; // 800F0E60
L_800F0E64:;
  c->r[5]=0u+0x00000000u; // 800F0E64
  c->r[0]=0u+0x00000006u; // 800F0E68
  W32(c->r[3]+0x00000020u,c->r[5]); // 800F0E6C
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0E70
  W32(c->r[4]+0x00000024u,c->r[5]); // 800F0E74
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F0E78
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F0E7C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0E80
  W32(c->r[3]+0x00000008u,c->r[25]); // 800F0E84
L_800F0E88:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0E88
  if (!crb(c,2)) { goto L_800F0F14; } // 800F0E8C
  c->r[5]=R32(c->r[1]+0x00000008u); // 800F0E90
  c->r[31]=0u+0x00000000u; // 800F0E94
  cmps(c,0,(int32_t)c->r[5],0); // 800F0E98
  if (!crb(c,2)) { goto L_800F0EA8; } // 800F0E9C
  c->r[31]=0u+0xFFFFFFFCu; // 800F0EA0
  goto L_800F0EFC; // 800F0EA4
L_800F0EA8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F0EA8
  W32(c->r[5]+0x0000000Cu,c->r[26]); // 800F0EAC
  if (crb(c,2)) { goto L_800F0EBC; } // 800F0EB0
  c->r[0]=c->r[29]+0x80000000u; // 800F0EB4
  goto L_800F0EC0; // 800F0EB8
L_800F0EBC:;
  c->r[0]=0u+0x00000000u; // 800F0EBC
L_800F0EC0:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 800F0EC0
  cmps(c,0,(int32_t)c->r[27],0); // 800F0EC4
  W32(c->r[5]+0x0000001Cu,c->r[30]); // 800F0EC8
  if (crb(c,2)) { goto L_800F0ED8; } // 800F0ECC
  c->r[0]=c->r[27]+0x80000000u; // 800F0ED0
  goto L_800F0EDC; // 800F0ED4
L_800F0ED8:;
  c->r[0]=0u+0x00000000u; // 800F0ED8
L_800F0EDC:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 800F0EDC
  c->r[3]=c->r[27]|c->r[27]; // 800F0EE0
  c->r[4]=c->r[28]|c->r[28]; // 800F0EE4
  W32(c->r[5]+0x00000014u,c->r[28]); // 800F0EE8
  c->lr=0x800F0EF0u; f_800ABD2C(c); // 800F0EEC
  c->r[3]=c->r[29]|c->r[29]; // 800F0EF0
  c->r[4]=c->r[30]|c->r[30]; // 800F0EF4
  c->lr=0x800F0EFCu; f_800ABD2C(c); // 800F0EF8
L_800F0EFC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F0EFC
  if (!crb(c,2)) { goto L_800F0F14; } // 800F0F00
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0F04
  c->r[4]=0u+0x00000000u; // 800F0F08
  c->lr=0x800F0F10u; f_800F0110(c); // 800F0F0C
  c->r[31]=c->r[3]|c->r[3]; // 800F0F10
L_800F0F14:;
  c->r[11]=c->r[1]+0x00000030u; // 800F0F14
  c->r[3]=c->r[31]|c->r[31]; // 800F0F18
  c->lr=0x800F0F20u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0F1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F0F20
  c->lr=c->r[0]; // 800F0F24
  c->r[1]=c->r[1]+0x00000030u; // 800F0F28
  return; // 800F0F2C
}

// __ios_Ioctlv
void f_800F0F30(Ctx* __restrict c) {
  trace_call(0x800F0F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0F30
  c->r[0]=c->lr; // 800F0F34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0F38
  c->r[11]=c->r[1]+0x00000020u; // 800F0F3C
  c->lr=0x800F0F44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0F40
  cmps(c,0,(int32_t)c->r[3],0); // 800F0F44
  c->r[29]=c->r[3]|c->r[3]; // 800F0F48
  c->r[30]=c->r[7]|c->r[7]; // 800F0F4C
  c->r[31]=0u+0x00000000u; // 800F0F50
  if (!crb(c,2)) { goto L_800F0F60; } // 800F0F54
  c->r[31]=0u+0xFFFFFFFCu; // 800F0F58
  goto L_800F1050; // 800F0F5C
L_800F0F60:;
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800F0F60
  c->r[27]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800F0F64
  c->r[26]=0u+0x00000000u; // 800F0F68
  c->r[28]=0u+0x00000000u; // 800F0F6C
  W32(c->r[3]+0x00000010u,c->r[5]); // 800F0F70
  W32(c->r[3]+0x00000014u,c->r[6]); // 800F0F74
  W32(c->r[3]+0x00000018u,c->r[7]); // 800F0F78
  goto L_800F0FC4; // 800F0F7C
L_800F0F80:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 800F0F80
  c->r[0]=c->r[28]+c->r[27]; // 800F0F84
  c->r[4]=c->r[3]+c->r[0]; // 800F0F88
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F0F8C
  c->r[4]=R32(c->r[4]+0x00000004u); // 800F0F90
  c->lr=0x800F0F98u; f_800ABD2C(c); // 800F0F94
  c->r[4]=R32(c->r[29]+0x00000018u); // 800F0F98
  c->r[3]=c->r[28]+c->r[27]; // 800F0F9C
  c->r[5]=R32(c->r[4]+c->r[3]); // 800F0FA0
  cmps(c,0,(int32_t)c->r[5],0); // 800F0FA4
  if (crb(c,2)) { goto L_800F0FB4; } // 800F0FA8
  c->r[0]=c->r[5]+0x80000000u; // 800F0FAC
  goto L_800F0FB8; // 800F0FB0
L_800F0FB4:;
  c->r[0]=0u+0x00000000u; // 800F0FB4
L_800F0FB8:;
  W32(c->r[4]+c->r[3],c->r[0]); // 800F0FB8
  c->r[28]=c->r[28]+0x00000008u; // 800F0FBC
  c->r[26]=c->r[26]+0x00000001u; // 800F0FC0
L_800F0FC4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 800F0FC4
  cmpu(c,0,c->r[26],c->r[0]); // 800F0FC8
  if (crb(c,0)) { IRQCHK(c); goto L_800F0F80; } // 800F0FCC
  c->r[27]=0u+0x00000000u; // 800F0FD0
  c->r[28]=0u+0x00000000u; // 800F0FD4
  goto L_800F1018; // 800F0FD8
L_800F0FDC:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 800F0FDC
  c->r[4]=c->r[0]+c->r[28]; // 800F0FE0
  c->r[3]=R32(c->r[28]+c->r[0]); // 800F0FE4
  c->r[4]=R32(c->r[4]+0x00000004u); // 800F0FE8
  c->lr=0x800F0FF0u; f_800ABD2C(c); // 800F0FEC
  c->r[3]=R32(c->r[29]+0x00000018u); // 800F0FF0
  c->r[4]=R32(c->r[3]+c->r[28]); // 800F0FF4
  cmps(c,0,(int32_t)c->r[4],0); // 800F0FF8
  if (crb(c,2)) { goto L_800F1008; } // 800F0FFC
  c->r[0]=c->r[4]+0x80000000u; // 800F1000
  goto L_800F100C; // 800F1004
L_800F1008:;
  c->r[0]=0u+0x00000000u; // 800F1008
L_800F100C:;
  W32(c->r[3]+c->r[28],c->r[0]); // 800F100C
  c->r[28]=c->r[28]+0x00000008u; // 800F1010
  c->r[27]=c->r[27]+0x00000001u; // 800F1014
L_800F1018:;
  c->r[4]=R32(c->r[29]+0x00000010u); // 800F1018
  cmpu(c,0,c->r[27],c->r[4]); // 800F101C
  if (crb(c,0)) { IRQCHK(c); goto L_800F0FDC; } // 800F1020
  c->r[0]=R32(c->r[29]+0x00000014u); // 800F1024
  c->r[3]=R32(c->r[29]+0x00000018u); // 800F1028
  c->r[0]=c->r[4]+c->r[0]; // 800F102C
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800F1030
  c->lr=0x800F1038u; f_800ABD2C(c); // 800F1034
  cmps(c,0,(int32_t)c->r[30],0); // 800F1038
  if (crb(c,2)) { goto L_800F1048; } // 800F103C
  c->r[0]=c->r[30]+0x80000000u; // 800F1040
  goto L_800F104C; // 800F1044
L_800F1048:;
  c->r[0]=0u+0x00000000u; // 800F1048
L_800F104C:;
  W32(c->r[29]+0x00000018u,c->r[0]); // 800F104C
L_800F1050:;
  c->r[11]=c->r[1]+0x00000020u; // 800F1050
  c->r[3]=c->r[31]|c->r[31]; // 800F1054
  c->lr=0x800F105Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F1058
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F105C
  c->lr=c->r[0]; // 800F1060
  c->r[1]=c->r[1]+0x00000020u; // 800F1064
  return; // 800F1068
}

// IOS_IoctlvAsync
void f_800F106C(Ctx* __restrict c) {
  trace_call(0x800F106Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F106C
  c->r[0]=c->lr; // 800F1070
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F1074
  c->r[11]=c->r[1]+0x00000030u; // 800F1078
  c->lr=0x800F1080u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F107C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F1080
  c->r[24]=c->r[3]|c->r[3]; // 800F1084
  c->r[25]=c->r[4]|c->r[4]; // 800F1088
  c->r[26]=c->r[5]|c->r[5]; // 800F108C
  c->r[27]=c->r[6]|c->r[6]; // 800F1090
  c->r[28]=c->r[7]|c->r[7]; // 800F1094
  c->r[29]=c->r[8]|c->r[8]; // 800F1098
  c->r[30]=c->r[9]|c->r[9]; // 800F109C
  c->r[31]=0u+0x00000000u; // 800F10A0
  if (!crb(c,2)) { goto L_800F10B0; } // 800F10A4
  c->r[31]=0u+0xFFFFFFFCu; // 800F10A8
  goto L_800F10F8; // 800F10AC
L_800F10B0:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F10B0
  c->r[4]=0u+0x00000040u; // 800F10B4
  c->r[5]=0u+0x00000020u; // 800F10B8
  c->lr=0x800F10C0u; f_800F185C(c); // 800F10BC
  cmps(c,0,(int32_t)c->r[3],0); // 800F10C0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F10C4
  if (!crb(c,2)) { goto L_800F10D4; } // 800F10C8
  c->r[31]=0u+0xFFFFFFEAu; // 800F10CC
  goto L_800F10F8; // 800F10D0
L_800F10D4:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 800F10D4
  c->r[5]=0u+0x00000000u; // 800F10D8
  c->r[0]=0u+0x00000007u; // 800F10DC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F10E0
  W32(c->r[4]+0x00000024u,c->r[30]); // 800F10E4
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F10E8
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F10EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F10F0
  W32(c->r[3]+0x00000008u,c->r[24]); // 800F10F4
L_800F10F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F10F8
  if (!crb(c,2)) { goto L_800F1134; } // 800F10FC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F1100
  c->r[4]=c->r[25]|c->r[25]; // 800F1104
  c->r[5]=c->r[26]|c->r[26]; // 800F1108
  c->r[6]=c->r[27]|c->r[27]; // 800F110C
  c->r[7]=c->r[28]|c->r[28]; // 800F1110
  c->lr=0x800F1118u; f_800F0F30(c); // 800F1114
  cmps(c,0,(int32_t)c->r[3],0); // 800F1118
  c->r[31]=c->r[3]|c->r[3]; // 800F111C
  if (!crb(c,2)) { goto L_800F1134; } // 800F1120
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F1124
  c->r[4]=c->r[29]|c->r[29]; // 800F1128
  c->lr=0x800F1130u; f_800F0110(c); // 800F112C
  c->r[31]=c->r[3]|c->r[3]; // 800F1130
L_800F1134:;
  c->r[11]=c->r[1]+0x00000030u; // 800F1134
  c->r[3]=c->r[31]|c->r[31]; // 800F1138
  c->lr=0x800F1140u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F113C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F1140
  c->lr=c->r[0]; // 800F1144
  c->r[1]=c->r[1]+0x00000030u; // 800F1148
  return; // 800F114C
}

// IOS_Ioctlv
void f_800F1150(Ctx* __restrict c) {
  trace_call(0x800F1150u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1150
  c->r[0]=c->lr; // 800F1154
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F1158
  c->r[11]=c->r[1]+0x00000030u; // 800F115C
  c->lr=0x800F1164u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F1160
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F1164
  c->r[26]=c->r[3]|c->r[3]; // 800F1168
  c->r[27]=c->r[4]|c->r[4]; // 800F116C
  c->r[28]=c->r[5]|c->r[5]; // 800F1170
  c->r[29]=c->r[6]|c->r[6]; // 800F1174
  c->r[30]=c->r[7]|c->r[7]; // 800F1178
  c->r[31]=0u+0x00000000u; // 800F117C
  if (!crb(c,2)) { goto L_800F118C; } // 800F1180
  c->r[31]=0u+0xFFFFFFFCu; // 800F1184
  goto L_800F11D4; // 800F1188
L_800F118C:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F118C
  c->r[4]=0u+0x00000040u; // 800F1190
  c->r[5]=0u+0x00000020u; // 800F1194
  c->lr=0x800F119Cu; f_800F185C(c); // 800F1198
  cmps(c,0,(int32_t)c->r[3],0); // 800F119C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F11A0
  if (!crb(c,2)) { goto L_800F11B0; } // 800F11A4
  c->r[31]=0u+0xFFFFFFEAu; // 800F11A8
  goto L_800F11D4; // 800F11AC
L_800F11B0:;
  c->r[5]=0u+0x00000000u; // 800F11B0
  c->r[0]=0u+0x00000007u; // 800F11B4
  W32(c->r[3]+0x00000020u,c->r[5]); // 800F11B8
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F11BC
  W32(c->r[4]+0x00000024u,c->r[5]); // 800F11C0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F11C4
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F11C8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F11CC
  W32(c->r[3]+0x00000008u,c->r[26]); // 800F11D0
L_800F11D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F11D4
  if (!crb(c,2)) { goto L_800F1210; } // 800F11D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F11DC
  c->r[4]=c->r[27]|c->r[27]; // 800F11E0
  c->r[5]=c->r[28]|c->r[28]; // 800F11E4
  c->r[6]=c->r[29]|c->r[29]; // 800F11E8
  c->r[7]=c->r[30]|c->r[30]; // 800F11EC
  c->lr=0x800F11F4u; f_800F0F30(c); // 800F11F0
  cmps(c,0,(int32_t)c->r[3],0); // 800F11F4
  c->r[31]=c->r[3]|c->r[3]; // 800F11F8
  if (!crb(c,2)) { goto L_800F1210; } // 800F11FC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F1200
  c->r[4]=0u+0x00000000u; // 800F1204
  c->lr=0x800F120Cu; f_800F0110(c); // 800F1208
  c->r[31]=c->r[3]|c->r[3]; // 800F120C
L_800F1210:;
  c->r[11]=c->r[1]+0x00000030u; // 800F1210
  c->r[3]=c->r[31]|c->r[31]; // 800F1214
  c->lr=0x800F121Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F1218
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F121C
  c->lr=c->r[0]; // 800F1220
  c->r[1]=c->r[1]+0x00000030u; // 800F1224
  return; // 800F1228
}

// IOS_IoctlvReboot
void f_800F122C(Ctx* __restrict c) {
  trace_call(0x800F122Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F122C
  c->r[0]=c->lr; // 800F1230
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F1234
  c->r[11]=c->r[1]+0x00000030u; // 800F1238
  c->lr=0x800F1240u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F123C
  c->r[26]=c->r[3]|c->r[3]; // 800F1240
  c->r[27]=c->r[4]|c->r[4]; // 800F1244
  c->r[28]=c->r[5]|c->r[5]; // 800F1248
  c->r[30]=c->r[6]|c->r[6]; // 800F124C
  c->r[29]=c->r[7]|c->r[7]; // 800F1250
  c->lr=0x800F1258u; f_800B087C(c); // 800F1254
  c->r[0]=R32(c->r[13]+0xFFFF92C0u); // 800F1258
  cmps(c,0,(int32_t)c->r[0],0); // 800F125C
  if (crb(c,2)) { goto L_800F1270; } // 800F1260
  c->lr=0x800F1268u; f_800B08A4(c); // 800F1264
  c->r[31]=0u+0xFFFFFFF6u; // 800F1268
  goto L_800F150C; // 800F126C
L_800F1270:;
  c->r[0]=0u+0x00000001u; // 800F1270
  W32(c->r[13]+0xFFFF92C0u,c->r[0]); // 800F1274
  c->lr=0x800F127Cu; f_800B08A4(c); // 800F1278
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800F127C
  c->r[31]=0u+0x00000000u; // 800F1280
  if (!crb(c,2)) { goto L_800F1290; } // 800F1284
  c->r[31]=0u+0xFFFFFFFCu; // 800F1288
  goto L_800F12D8; // 800F128C
L_800F1290:;
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F1290
  c->r[4]=0u+0x00000040u; // 800F1294
  c->r[5]=0u+0x00000020u; // 800F1298
  c->lr=0x800F12A0u; f_800F185C(c); // 800F129C
  cmps(c,0,(int32_t)c->r[3],0); // 800F12A0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F12A4
  if (!crb(c,2)) { goto L_800F12B4; } // 800F12A8
  c->r[31]=0u+0xFFFFFFEAu; // 800F12AC
  goto L_800F12D8; // 800F12B0
L_800F12B4:;
  c->r[5]=0u+0x00000000u; // 800F12B4
  c->r[0]=0u+0x00000007u; // 800F12B8
  W32(c->r[3]+0x00000020u,c->r[5]); // 800F12BC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F12C0
  W32(c->r[4]+0x00000024u,c->r[5]); // 800F12C4
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F12C8
  W32(c->r[4]+0x00000028u,c->r[5]); // 800F12CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F12D0
  W32(c->r[3]+0x00000008u,c->r[26]); // 800F12D4
L_800F12D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F12D8
  if (!crb(c,2)) { goto L_800F14E4; } // 800F12DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F12E0
  c->r[0]=0u+0x00000001u; // 800F12E4
  c->r[4]=c->r[27]|c->r[27]; // 800F12E8
  c->r[5]=c->r[28]|c->r[28]; // 800F12EC
  W32(c->r[13]+0xFFFF92C8u,c->r[3]); // 800F12F0
  c->r[6]=c->r[30]|c->r[30]; // 800F12F4
  c->r[7]=c->r[29]|c->r[29]; // 800F12F8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800F12FC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F1300
  c->lr=0x800F1308u; f_800F0F30(c); // 800F1304
  cmps(c,0,(int32_t)c->r[3],0); // 800F1308
  c->r[31]=c->r[3]|c->r[3]; // 800F130C
  if (!crb(c,2)) { goto L_800F14E4; } // 800F1310
  c->r[29]=0u+0x802D0000u; // 800F1314
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F1318
  c->r[3]=c->r[29]+0x00002BA0u; // 800F131C
  c->r[5]=0u+0x00000040u; // 800F1320
  c->lr=0x800F1328u; f_80004338(c); // 800F1324
  c->r[3]=c->r[29]+0x00002BA0u; // 800F1328
  c->r[29]=R32(c->r[1]+0x00000008u); // 800F132C
  W32(c->r[13]+0xFFFF92C4u,c->r[3]); // 800F1330
  c->r[3]=c->r[3]+0x0000002Cu; // 800F1334
  c->lr=0x800F133Cu; f_800B356C(c); // 800F1338
  c->r[3]=c->r[29]|c->r[29]; // 800F133C
  c->r[4]=0u+0x00000020u; // 800F1340
  c->lr=0x800F1348u; f_800ABD2C(c); // 800F1344
  c->lr=0x800F134Cu; f_800B087C(c); // 800F1348
  c->r[4]=0u+0x802D0000u; // 800F134C
  c->r[30]=c->r[3]|c->r[3]; // 800F1350
  c->r[3]=c->r[4]+0x00002B40u; // 800F1354
  c->r[0]=R32(c->r[4]+0x00002B40u); // 800F1358
  c->r[3]=R32(c->r[3]+0x00000004u); // 800F135C
  c->r[31]=0u+0x00000000u; // 800F1360
  cmpu(c,0,c->r[3],c->r[0]); // 800F1364
  if (!crb(c,0)) { goto L_800F1378; } // 800F1368
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 800F136C
  c->r[0]=c->r[0]+c->r[3]; // 800F1370
  goto L_800F1394; // 800F1374
L_800F1378:;
  c->r[4]=c->r[3]-c->r[0]; // 800F1378
  c->r[3]=0u+0x00000010u; // 800F137C
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 800F1380
  c->r[3]=c->r[4]|~c->r[3]; // 800F1384
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F1388
  c->r[0]=c->r[3]-c->r[0]; // 800F138C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F1390
L_800F1394:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F1394
  if (crb(c,2)) { goto L_800F13A4; } // 800F1398
  c->r[31]=0u+0xFFFFFFF8u; // 800F139C
  goto L_800F13E4; // 800F13A0
L_800F13A4:;
  c->r[6]=0u+0x802D0000u; // 800F13A4
  c->r[3]=c->r[29]|c->r[29]; // 800F13A8
  c->r[6]=c->r[6]+0x00002B40u; // 800F13AC
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800F13B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F13B4
  c->r[4]=c->r[6]+c->r[0]; // 800F13B8
  W32(c->r[4]+0x00000010u,c->r[29]); // 800F13BC
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800F13C0
  c->r[4]=R32(c->r[6]+0x00000004u); // 800F13C4
  c->r[0]=c->r[5]+0x00000001u; // 800F13C8
  c->r[5]=rotl(c->r[0],0)&0x0000000Fu; // 800F13CC
  c->r[0]=c->r[4]+0x00000001u; // 800F13D0
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 800F13D4
  W32(c->r[6]+0x00000004u,c->r[0]); // 800F13D8
  c->r[4]=R32(c->r[29]+0x00000008u); // 800F13DC
  c->lr=0x800F13E4u; f_800F1B04(c); // 800F13E0
L_800F13E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F13E4
  if (crb(c,2)) { goto L_800F13F8; } // 800F13E8
  c->r[3]=c->r[30]|c->r[30]; // 800F13EC
  c->lr=0x800F13F4u; f_800B08A4(c); // 800F13F0
  goto L_800F14E4; // 800F13F4
L_800F13F8:;
  c->r[0]=R32(c->r[13]+0xFFFF82B8u); // 800F13F8
  cmps(c,0,(int32_t)c->r[0],0); // 800F13FC
  if (!crb(c,1)) { goto L_800F14C8; } // 800F1400
  c->r[4]=0u+0x802D0000u; // 800F1404
  c->r[3]=c->r[4]+0x00002B40u; // 800F1408
  c->r[0]=R32(c->r[4]+0x00002B40u); // 800F140C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800F1410
  cmpu(c,0,c->r[3],c->r[0]); // 800F1414
  if (!crb(c,0)) { goto L_800F1428; } // 800F1418
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 800F141C
  c->r[0]=c->r[0]+c->r[3]; // 800F1420
  goto L_800F1434; // 800F1424
L_800F1428:;
  c->r[0]=c->r[3]-c->r[0]; // 800F1428
  c->r[0]=cntlz(c->r[0]); // 800F142C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F1430
L_800F1434:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F1434
  if (!crb(c,2)) { goto L_800F14C8; } // 800F1438
  c->r[3]=0u+0x802D0000u; // 800F143C
  c->r[3]=c->r[3]+0x00002B40u; // 800F1440
  c->r[0]=R32(c->r[3]+0x00000008u); // 800F1444
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F1448
  c->r[3]=c->r[3]+c->r[0]; // 800F144C
  c->r[4]=R32(c->r[3]+0x00000010u); // 800F1450
  cmps(c,0,(int32_t)c->r[4],0); // 800F1454
  if (crb(c,2)) { goto L_800F14C8; } // 800F1458
  c->r[0]=R32(c->r[4]+0x00000028u); // 800F145C
  cmps(c,0,(int32_t)c->r[0],0); // 800F1460
  if (crb(c,2)) { goto L_800F1474; } // 800F1464
  c->r[3]=R32(c->r[13]+0xFFFF82B8u); // 800F1468
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F146C
  W32(c->r[13]+0xFFFF82B8u,c->r[0]); // 800F1470
L_800F1474:;
  c->r[4]=c->r[4]+0x80000000u; // 800F1474
  c->r[3]=0u+0x00000000u; // 800F1478
  c->lr=0x800F1480u; f_800EFB90(c); // 800F147C
  c->r[7]=0u+0x802D0000u; // 800F1480
  c->r[3]=R32(c->r[13]+0xFFFF82B8u); // 800F1484
  c->r[6]=c->r[7]+0x00002B40u; // 800F1488
  c->r[4]=R32(c->r[7]+0x00002B40u); // 800F148C
  c->r[5]=R32(c->r[6]+0x00000008u); // 800F1490
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F1494
  W32(c->r[13]+0xFFFF82B8u,c->r[0]); // 800F1498
  c->r[4]=c->r[4]+0x00000001u; // 800F149C
  c->r[0]=c->r[5]+0x00000001u; // 800F14A0
  c->r[3]=0u+0x00000001u; // 800F14A4
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800F14A8
  W32(c->r[7]+0x00002B40u,c->r[4]); // 800F14AC
  W32(c->r[6]+0x00000008u,c->r[0]); // 800F14B0
  c->lr=0x800F14B8u; f_800EFB80(c); // 800F14B4
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800F14B8
  c->r[3]=0u+0x00000001u; // 800F14BC
  c->r[4]=c->r[0]|0x00000001u; // 800F14C0
  c->lr=0x800F14C8u; f_800EFB90(c); // 800F14C4
L_800F14C8:;
  c->r[3]=R32(c->r[13]+0xFFFF92C4u); // 800F14C8
  c->r[3]=c->r[3]+0x0000002Cu; // 800F14CC
  c->lr=0x800F14D4u; f_800B45EC(c); // 800F14D0
  c->r[3]=c->r[30]|c->r[30]; // 800F14D4
  c->lr=0x800F14DCu; f_800B08A4(c); // 800F14D8
  c->r[3]=R32(c->r[13]+0xFFFF92C4u); // 800F14DC
  c->r[31]=R32(c->r[3]+0x00000004u); // 800F14E0
L_800F14E4:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F14E4
  c->r[0]=0u+0x00000000u; // 800F14E8
  W32(c->r[13]+0xFFFF92C0u,c->r[0]); // 800F14EC
  cmps(c,0,(int32_t)c->r[4],0); // 800F14F0
  W32(c->r[13]+0xFFFF92C8u,c->r[0]); // 800F14F4
  if (crb(c,2)) { goto L_800F150C; } // 800F14F8
  cmps(c,0,(int32_t)c->r[31],0); // 800F14FC
  if (crb(c,2)) { goto L_800F150C; } // 800F1500
  c->r[3]=R32(c->r[13]+0xFFFF82BCu); // 800F1504
  c->lr=0x800F150Cu; f_800F1860(c); // 800F1508
L_800F150C:;
  c->r[11]=c->r[1]+0x00000030u; // 800F150C
  c->r[3]=c->r[31]|c->r[31]; // 800F1510
  c->lr=0x800F1518u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F1514
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F1518
  c->lr=c->r[0]; // 800F151C
  c->r[1]=c->r[1]+0x00000030u; // 800F1520
  return; // 800F1524
}

// iosCreateHeap
void f_800F1528(Ctx* __restrict c) {
  trace_call(0x800F1528u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1528
  c->r[0]=c->lr; // 800F152C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1530
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F1534
  c->r[31]=0u+0xFFFFFFFCu; // 800F1538
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F153C
  c->r[30]=c->r[4]|c->r[4]; // 800F1540
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F1544
  c->r[29]=c->r[3]|c->r[3]; // 800F1548
  c->lr=0x800F1550u; f_800B087C(c); // 800F154C
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 800F1550
  if (!crb(c,2)) { goto L_800F1634; } // 800F1554
  c->r[4]=0u+0x802D0000u; // 800F1558
  {uint32_t ea=c->r[4]+0x00002BE0u; c->r[0]=R32(ea); c->r[4]=ea;} // 800F155C
  c->r[31]=0u+0x00000000u; // 800F1560
  cmps(c,0,(int32_t)c->r[0],0); // 800F1564
  if (crb(c,2)) { goto L_800F15E0; } // 800F1568
  c->r[0]=R32(c->r[4]+0x00000010u); // 800F156C
  c->r[31]=0u+0x00000001u; // 800F1570
  cmps(c,0,(int32_t)c->r[0],0); // 800F1574
  if (crb(c,2)) { goto L_800F15E0; } // 800F1578
  c->r[0]=R32(c->r[4]+0x00000020u); // 800F157C
  c->r[31]=0u+0x00000002u; // 800F1580
  cmps(c,0,(int32_t)c->r[0],0); // 800F1584
  if (crb(c,2)) { goto L_800F15E0; } // 800F1588
  c->r[0]=R32(c->r[4]+0x00000030u); // 800F158C
  c->r[31]=0u+0x00000003u; // 800F1590
  cmps(c,0,(int32_t)c->r[0],0); // 800F1594
  if (crb(c,2)) { goto L_800F15E0; } // 800F1598
  c->r[0]=R32(c->r[4]+0x00000040u); // 800F159C
  c->r[31]=0u+0x00000004u; // 800F15A0
  cmps(c,0,(int32_t)c->r[0],0); // 800F15A4
  if (crb(c,2)) { goto L_800F15E0; } // 800F15A8
  c->r[0]=R32(c->r[4]+0x00000050u); // 800F15AC
  c->r[31]=0u+0x00000005u; // 800F15B0
  cmps(c,0,(int32_t)c->r[0],0); // 800F15B4
  if (crb(c,2)) { goto L_800F15E0; } // 800F15B8
  c->r[0]=R32(c->r[4]+0x00000060u); // 800F15BC
  c->r[31]=0u+0x00000006u; // 800F15C0
  cmps(c,0,(int32_t)c->r[0],0); // 800F15C4
  if (crb(c,2)) { goto L_800F15E0; } // 800F15C8
  c->r[0]=R32(c->r[4]+0x00000070u); // 800F15CC
  c->r[31]=0u+0x00000007u; // 800F15D0
  cmps(c,0,(int32_t)c->r[0],0); // 800F15D4
  if (crb(c,2)) { goto L_800F15E0; } // 800F15D8
  c->r[31]=0u+0x00000008u; // 800F15DC
L_800F15E0:;
  cmps(c,0,(int32_t)c->r[31],8); // 800F15E0
  if (!crb(c,2)) { goto L_800F15F0; } // 800F15E4
  c->r[31]=0u+0xFFFFFFFBu; // 800F15E8
  goto L_800F1634; // 800F15EC
L_800F15F0:;
  c->r[5]=0u+0x802D0000u; // 800F15F0
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 800F15F4
  c->r[5]=c->r[5]+0x00002BE0u; // 800F15F8
  c->r[4]=0u+0xBABE0000u; // 800F15FC
  c->r[6]=c->r[5]+c->r[0]; // 800F1600
  c->r[0]=0u+0x00000000u; // 800F1604
  W32(c->r[6]+0x00000000u,c->r[29]); // 800F1608
  c->r[5]=c->r[30]+0xFFFFFFF0u; // 800F160C
  W32(c->r[6]+0x00000008u,c->r[30]); // 800F1610
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 800F1614
  W32(c->r[29]+0x00000000u,c->r[4]); // 800F1618
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 800F161C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800F1620
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 800F1624
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F1628
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 800F162C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F1630
L_800F1634:;
  c->lr=0x800F1638u; f_800B08A4(c); // 800F1634
  c->r[3]=c->r[31]|c->r[31]; // 800F1638
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F163C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F1640
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F1644
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1648
  c->lr=c->r[0]; // 800F164C
  c->r[1]=c->r[1]+0x00000020u; // 800F1650
  return; // 800F1654
}

// __iosAlloc
void f_800F1658(Ctx* __restrict c) {
  trace_call(0x800F1658u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1658
  c->r[0]=c->lr; // 800F165C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1660
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F1664
  c->r[31]=0u+0x00000000u; // 800F1668
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F166C
  c->r[30]=c->r[5]|c->r[5]; // 800F1670
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F1674
  c->r[29]=c->r[4]|c->r[4]; // 800F1678
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F167C
  c->r[28]=c->r[3]|c->r[3]; // 800F1680
  c->lr=0x800F1688u; f_800B087C(c); // 800F1684
  cmps(c,0,(int32_t)c->r[29],0); // 800F1688
  if (crb(c,2)) { goto L_800F1834; } // 800F168C
  cmps(c,0,(int32_t)c->r[30],0); // 800F1690
  if (crb(c,2)) { goto L_800F1834; } // 800F1694
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 800F1698
  c->r[0]=c->r[30]&c->r[0]; cr0(c,c->r[0]); // 800F169C
  if (!crb(c,2)) { goto L_800F1834; } // 800F16A0
  cmpu(c,0,c->r[30],0x00000020u); // 800F16A4
  if (!crb(c,0)) { goto L_800F16B0; } // 800F16A8
  c->r[30]=0u+0x00000020u; // 800F16AC
L_800F16B0:;
  cmps(c,0,(int32_t)c->r[28],0); // 800F16B0
  c->r[0]=c->r[29]+0x0000001Fu; // 800F16B4
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800F16B8
  if (crb(c,0)) { goto L_800F16E0; } // 800F16BC
  cmps(c,0,(int32_t)c->r[28],8); // 800F16C0
  if (!crb(c,0)) { goto L_800F16E0; } // 800F16C4
  c->r[4]=0u+0x802D0000u; // 800F16C8
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 800F16CC
  c->r[4]=c->r[4]+0x00002BE0u; // 800F16D0
  {uint32_t ea=c->r[4]+c->r[0]; c->r[0]=R32(ea); c->r[4]=ea;} // 800F16D4
  cmps(c,0,(int32_t)c->r[0],0); // 800F16D8
  if (!crb(c,2)) { goto L_800F16E8; } // 800F16DC
L_800F16E0:;
  c->r[31]=0u+0x00000000u; // 800F16E0
  goto L_800F1834; // 800F16E4
L_800F16E8:;
  c->r[8]=R32(c->r[4]+0x0000000Cu); // 800F16E8
  c->r[6]=c->r[30]+0xFFFFFFFFu; // 800F16EC
  c->r[5]=0u+0x00000000u; // 800F16F0
  goto L_800F174C; // 800F16F4
L_800F16F8:;
  c->r[7]=R32(c->r[8]+0x00000004u); // 800F16F8
  c->r[0]=c->r[8]+0x00000010u; // 800F16FC
  c->r[0]=c->r[0]&c->r[6]; // 800F1700
  cmpu(c,0,c->r[7],c->r[29]); // 800F1704
  c->r[0]=c->r[30]-c->r[0]; // 800F1708
  c->r[0]=c->r[6]&c->r[0]; // 800F170C
  if (!crb(c,2)) { goto L_800F1724; } // 800F1710
  cmps(c,0,(int32_t)c->r[0],0); // 800F1714
  if (!crb(c,2)) { goto L_800F1724; } // 800F1718
  c->r[5]=c->r[8]|c->r[8]; // 800F171C
  goto L_800F1754; // 800F1720
L_800F1724:;
  c->r[0]=c->r[29]+c->r[0]; // 800F1724
  cmpu(c,0,c->r[7],c->r[0]); // 800F1728
  if (crb(c,0)) { goto L_800F1748; } // 800F172C
  cmps(c,0,(int32_t)c->r[5],0); // 800F1730
  if (crb(c,2)) { goto L_800F1744; } // 800F1734
  c->r[0]=R32(c->r[5]+0x00000004u); // 800F1738
  cmpu(c,0,c->r[7],c->r[0]); // 800F173C
  if (!crb(c,0)) { goto L_800F1748; } // 800F1740
L_800F1744:;
  c->r[5]=c->r[8]|c->r[8]; // 800F1744
L_800F1748:;
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 800F1748
L_800F174C:;
  cmps(c,0,(int32_t)c->r[8],0); // 800F174C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F16F8; } // 800F1750
L_800F1754:;
  cmps(c,0,(int32_t)c->r[5],0); // 800F1754
  if (crb(c,2)) { goto L_800F1834; } // 800F1758
  c->r[7]=c->r[30]+0xFFFFFFFFu; // 800F175C
  c->r[0]=c->r[5]+0x00000010u; // 800F1760
  c->r[0]=c->r[0]&c->r[7]; // 800F1764
  c->r[6]=R32(c->r[5]+0x00000004u); // 800F1768
  c->r[0]=c->r[30]-c->r[0]; // 800F176C
  c->r[8]=c->r[7]&c->r[0]; // 800F1770
  c->r[7]=c->r[29]+c->r[8]; // 800F1774
  c->r[0]=c->r[7]+0x00000010u; // 800F1778
  cmpu(c,0,c->r[6],c->r[0]); // 800F177C
  if (!crb(c,1)) { goto L_800F17C8; } // 800F1780
  c->r[6]=c->r[5]+c->r[29]; // 800F1784
  c->r[0]=0u+0xBABE0000u; // 800F1788
  c->r[9]=c->r[8]+c->r[6]; // 800F178C
  W32(c->r[9]+0x00000010u,c->r[0]); // 800F1790
  c->r[0]=R32(c->r[5]+0x00000004u); // 800F1794
  c->r[0]=c->r[0]-c->r[29]; // 800F1798
  c->r[6]=c->r[0]-c->r[8]; // 800F179C
  c->r[0]=c->r[6]+0xFFFFFFF0u; // 800F17A0
  W32(c->r[9]+0x00000014u,c->r[0]); // 800F17A4
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 800F17A8
  cmps(c,0,(int32_t)c->r[6],0); // 800F17AC
  W32(c->r[9]+0x0000001Cu,c->r[6]); // 800F17B0
  c->r[9]=c->r[9]+0x00000010u; // 800F17B4
  if (crb(c,2)) { goto L_800F17C0; } // 800F17B8
  W32(c->r[6]+0x00000008u,c->r[9]); // 800F17BC
L_800F17C0:;
  W32(c->r[5]+0x0000000Cu,c->r[9]); // 800F17C0
  W32(c->r[5]+0x00000004u,c->r[7]); // 800F17C4
L_800F17C8:;
  c->r[6]=0u+0xBABE0000u; // 800F17C8
  c->r[0]=c->r[6]+0x00000001u; // 800F17CC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800F17D0
  c->r[6]=R32(c->r[5]+0x00000008u); // 800F17D4
  cmps(c,0,(int32_t)c->r[6],0); // 800F17D8
  if (crb(c,2)) { goto L_800F17EC; } // 800F17DC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800F17E0
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800F17E4
  goto L_800F17F4; // 800F17E8
L_800F17EC:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800F17EC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F17F0
L_800F17F4:;
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 800F17F4
  cmps(c,0,(int32_t)c->r[4],0); // 800F17F8
  if (crb(c,2)) { goto L_800F1808; } // 800F17FC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F1800
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F1804
L_800F1808:;
  c->r[0]=0u+0x00000000u; // 800F1808
  c->r[31]=c->r[5]+c->r[8]; // 800F180C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800F1810
  cmps(c,0,(int32_t)c->r[8],0); // 800F1814
  c->r[31]=c->r[31]+0x00000010u; // 800F1818
  W32(c->r[5]+0x00000008u,c->r[0]); // 800F181C
  if (crb(c,2)) { goto L_800F1834; } // 800F1820
  c->r[4]=0u+0xBABE0000u; // 800F1824
  c->r[0]=c->r[4]+0x00000002u; // 800F1828
  W32(c->r[31]+0xFFFFFFF0u,c->r[0]); // 800F182C
  W32(c->r[31]+0xFFFFFFF8u,c->r[5]); // 800F1830
L_800F1834:;
  c->lr=0x800F1838u; f_800B08A4(c); // 800F1834
  c->r[3]=c->r[31]|c->r[31]; // 800F1838
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F183C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F1840
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F1844
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F1848
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F184C
  c->lr=c->r[0]; // 800F1850
  c->r[1]=c->r[1]+0x00000020u; // 800F1854
  return; // 800F1858
}

// iosAllocAligned
void f_800F185C(Ctx* __restrict c) {
  trace_call(0x800F185Cu);
  f_800F1658(c); return; // 800F185C
}

// iosFree
void f_800F1860(Ctx* __restrict c) {
  trace_call(0x800F1860u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1860
  c->r[0]=c->lr; // 800F1864
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1868
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F186C
  c->r[31]=0u+0xFFFFFFFCu; // 800F1870
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F1874
  c->r[30]=c->r[4]|c->r[4]; // 800F1878
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F187C
  c->r[29]=c->r[3]|c->r[3]; // 800F1880
  c->lr=0x800F1888u; f_800B087C(c); // 800F1884
  cmps(c,0,(int32_t)c->r[30],0); // 800F1888
  if (crb(c,2)) { goto L_800F1A28; } // 800F188C
  cmps(c,0,(int32_t)c->r[29],0); // 800F1890
  if (crb(c,0)) { goto L_800F18BC; } // 800F1894
  cmps(c,0,(int32_t)c->r[29],8); // 800F1898
  if (!crb(c,0)) { goto L_800F18BC; } // 800F189C
  c->r[4]=0u+0x802D0000u; // 800F18A0
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 800F18A4
  c->r[4]=c->r[4]+0x00002BE0u; // 800F18A8
  c->r[5]=c->r[4]+c->r[0]; // 800F18AC
  c->r[4]=R32(c->r[4]+c->r[0]); // 800F18B0
  cmps(c,0,(int32_t)c->r[4],0); // 800F18B4
  if (!crb(c,2)) { goto L_800F18C4; } // 800F18B8
L_800F18BC:;
  c->r[31]=0u+0xFFFFFFFCu; // 800F18BC
  goto L_800F1A28; // 800F18C0
L_800F18C4:;
  c->r[0]=c->r[4]+0x00000010u; // 800F18C4
  cmpu(c,0,c->r[30],c->r[0]); // 800F18C8
  if (crb(c,0)) { goto L_800F1A28; } // 800F18CC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F18D0
  c->r[0]=c->r[4]+c->r[0]; // 800F18D4
  cmpu(c,0,c->r[30],c->r[0]); // 800F18D8
  if (crb(c,1)) { goto L_800F1A28; } // 800F18DC
  c->r[4]=R32(c->r[30]+0xFFFFFFF0u); // 800F18E0
  c->r[6]=c->r[30]+0xFFFFFFF0u; // 800F18E4
  c->r[0]=c->r[4]+0x45420000u; // 800F18E8
  cmpu(c,0,c->r[0],0x00000002u); // 800F18EC
  if (!crb(c,2)) { goto L_800F18F8; } // 800F18F0
  c->r[6]=R32(c->r[6]+0x00000008u); // 800F18F4
L_800F18F8:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800F18F8
  c->r[0]=c->r[4]+0x45420000u; // 800F18FC
  cmpu(c,0,c->r[0],0x00000001u); // 800F1900
  if (!crb(c,2)) { goto L_800F1A28; } // 800F1904
  c->r[0]=0u+0xBABE0000u; // 800F1908
  W32(c->r[6]+0x00000000u,c->r[0]); // 800F190C
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 800F1910
  c->r[7]=c->r[4]|c->r[4]; // 800F1914
  goto L_800F1934; // 800F1918
L_800F191C:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 800F191C
  cmps(c,0,(int32_t)c->r[0],0); // 800F1920
  if (crb(c,2)) { goto L_800F193C; } // 800F1924
  cmpu(c,0,c->r[0],c->r[6]); // 800F1928
  if (crb(c,1)) { goto L_800F193C; } // 800F192C
  c->r[7]=c->r[0]|c->r[0]; // 800F1930
L_800F1934:;
  cmps(c,0,(int32_t)c->r[7],0); // 800F1934
  if (!crb(c,2)) { IRQCHK(c); goto L_800F191C; } // 800F1938
L_800F193C:;
  cmps(c,0,(int32_t)c->r[7],0); // 800F193C
  if (crb(c,2)) { goto L_800F1970; } // 800F1940
  cmpu(c,0,c->r[6],c->r[7]); // 800F1944
  if (!crb(c,1)) { goto L_800F1970; } // 800F1948
  W32(c->r[6]+0x00000008u,c->r[7]); // 800F194C
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 800F1950
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800F1954
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 800F1958
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 800F195C
  cmps(c,0,(int32_t)c->r[4],0); // 800F1960
  if (crb(c,2)) { goto L_800F1990; } // 800F1964
  W32(c->r[4]+0x00000008u,c->r[6]); // 800F1968
  goto L_800F1990; // 800F196C
L_800F1970:;
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 800F1970
  c->r[0]=0u+0x00000000u; // 800F1974
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 800F1978
  W32(c->r[6]+0x00000008u,c->r[0]); // 800F197C
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 800F1980
  cmps(c,0,(int32_t)c->r[4],0); // 800F1984
  if (crb(c,2)) { goto L_800F1990; } // 800F1988
  W32(c->r[4]+0x00000008u,c->r[6]); // 800F198C
L_800F1990:;
  cmps(c,0,(int32_t)c->r[6],0); // 800F1990
  if (crb(c,2)) { goto L_800F19D8; } // 800F1994
  c->r[0]=R32(c->r[6]+0x00000004u); // 800F1998
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800F199C
  c->r[4]=c->r[6]+c->r[0]; // 800F19A0
  c->r[0]=c->r[4]+0x00000010u; // 800F19A4
  cmpu(c,0,c->r[5],c->r[0]); // 800F19A8
  if (!crb(c,2)) { goto L_800F19D8; } // 800F19AC
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 800F19B0
  cmps(c,0,(int32_t)c->r[4],0); // 800F19B4
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 800F19B8
  if (crb(c,2)) { goto L_800F19C4; } // 800F19BC
  W32(c->r[4]+0x00000008u,c->r[6]); // 800F19C0
L_800F19C4:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 800F19C4
  c->r[0]=R32(c->r[5]+0x00000004u); // 800F19C8
  c->r[4]=c->r[0]+c->r[4]; // 800F19CC
  c->r[0]=c->r[4]+0x00000010u; // 800F19D0
  W32(c->r[6]+0x00000004u,c->r[0]); // 800F19D4
L_800F19D8:;
  c->r[5]=R32(c->r[6]+0x00000008u); // 800F19D8
  cmps(c,0,(int32_t)c->r[5],0); // 800F19DC
  if (crb(c,2)) { goto L_800F1A24; } // 800F19E0
  c->r[0]=R32(c->r[5]+0x00000004u); // 800F19E4
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 800F19E8
  c->r[4]=c->r[5]+c->r[0]; // 800F19EC
  c->r[0]=c->r[4]+0x00000010u; // 800F19F0
  cmpu(c,0,c->r[6],c->r[0]); // 800F19F4
  if (!crb(c,2)) { goto L_800F1A24; } // 800F19F8
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 800F19FC
  cmps(c,0,(int32_t)c->r[4],0); // 800F1A00
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800F1A04
  if (crb(c,2)) { goto L_800F1A10; } // 800F1A08
  W32(c->r[4]+0x00000008u,c->r[5]); // 800F1A0C
L_800F1A10:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800F1A10
  c->r[0]=R32(c->r[6]+0x00000004u); // 800F1A14
  c->r[4]=c->r[0]+c->r[4]; // 800F1A18
  c->r[0]=c->r[4]+0x00000010u; // 800F1A1C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800F1A20
L_800F1A24:;
  c->r[31]=0u+0x00000000u; // 800F1A24
L_800F1A28:;
  c->lr=0x800F1A2Cu; f_800B08A4(c); // 800F1A28
  c->r[3]=c->r[31]|c->r[31]; // 800F1A2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F1A30
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F1A34
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F1A38
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1A3C
  c->lr=c->r[0]; // 800F1A40
  c->r[1]=c->r[1]+0x00000020u; // 800F1A44
  return; // 800F1A48
}

// IPCiProfInit
void f_800F1A4C(Ctx* __restrict c) {
  trace_call(0x800F1A4Cu);
  c->r[4]=0u+0x00000000u; // 800F1A4C
  c->r[5]=0u+0x802D0000u; // 800F1A50
  c->r[6]=0u+0x802D0000u; // 800F1A54
  c->r[0]=0u+0x00000002u; // 800F1A58
  W32(c->r[13]+0xFFFF92D0u,c->r[4]); // 800F1A5C
  c->r[5]=c->r[5]+0x00002CE0u; // 800F1A60
  c->r[6]=c->r[6]+0x00002C60u; // 800F1A64
  c->r[3]=0u+0xFFFFFFFFu; // 800F1A68
  W32(c->r[13]+0xFFFF92D4u,c->r[4]); // 800F1A6C
  c->ctr=c->r[0]; // 800F1A70
L_800F1A74:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 800F1A74
  W32(c->r[6]+0x00000000u,c->r[3]); // 800F1A78
  W32(c->r[5]+0x00000004u,c->r[4]); // 800F1A7C
  W32(c->r[6]+0x00000004u,c->r[3]); // 800F1A80
  W32(c->r[5]+0x00000008u,c->r[4]); // 800F1A84
  W32(c->r[6]+0x00000008u,c->r[3]); // 800F1A88
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800F1A8C
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 800F1A90
  W32(c->r[5]+0x00000010u,c->r[4]); // 800F1A94
  W32(c->r[6]+0x00000010u,c->r[3]); // 800F1A98
  W32(c->r[5]+0x00000014u,c->r[4]); // 800F1A9C
  W32(c->r[6]+0x00000014u,c->r[3]); // 800F1AA0
  W32(c->r[5]+0x00000018u,c->r[4]); // 800F1AA4
  W32(c->r[6]+0x00000018u,c->r[3]); // 800F1AA8
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 800F1AAC
  W32(c->r[6]+0x0000001Cu,c->r[3]); // 800F1AB0
  W32(c->r[5]+0x00000020u,c->r[4]); // 800F1AB4
  W32(c->r[6]+0x00000020u,c->r[3]); // 800F1AB8
  W32(c->r[5]+0x00000024u,c->r[4]); // 800F1ABC
  W32(c->r[6]+0x00000024u,c->r[3]); // 800F1AC0
  W32(c->r[5]+0x00000028u,c->r[4]); // 800F1AC4
  W32(c->r[6]+0x00000028u,c->r[3]); // 800F1AC8
  W32(c->r[5]+0x0000002Cu,c->r[4]); // 800F1ACC
  W32(c->r[6]+0x0000002Cu,c->r[3]); // 800F1AD0
  W32(c->r[5]+0x00000030u,c->r[4]); // 800F1AD4
  W32(c->r[6]+0x00000030u,c->r[3]); // 800F1AD8
  W32(c->r[5]+0x00000034u,c->r[4]); // 800F1ADC
  W32(c->r[6]+0x00000034u,c->r[3]); // 800F1AE0
  W32(c->r[5]+0x00000038u,c->r[4]); // 800F1AE4
  W32(c->r[6]+0x00000038u,c->r[3]); // 800F1AE8
  W32(c->r[5]+0x0000003Cu,c->r[4]); // 800F1AEC
  c->r[5]=c->r[5]+0x00000040u; // 800F1AF0
  W32(c->r[6]+0x0000003Cu,c->r[3]); // 800F1AF4
  c->r[6]=c->r[6]+0x00000040u; // 800F1AF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1A74; } // 800F1AFC
  return; // 800F1B00
}

// IPCiProfQueueReq
void f_800F1B04(Ctx* __restrict c) {
  trace_call(0x800F1B04u);
  c->r[6]=R32(c->r[13]+0xFFFF92D0u); // 800F1B04
  c->r[8]=0u+0x802D0000u; // 800F1B08
  c->r[5]=R32(c->r[13]+0xFFFF92D4u); // 800F1B0C
  c->r[9]=0u+0x802D0000u; // 800F1B10
  c->r[6]=c->r[6]+0x00000001u; // 800F1B14
  c->r[0]=0u+0x00000020u; // 800F1B18
  c->r[5]=c->r[5]+0x00000001u; // 800F1B1C
  W32(c->r[13]+0xFFFF92D0u,c->r[6]); // 800F1B20
  c->r[8]=c->r[8]+0x00002CE0u; // 800F1B24
  c->r[9]=c->r[9]+0x00002C60u; // 800F1B28
  W32(c->r[13]+0xFFFF92D4u,c->r[5]); // 800F1B2C
  c->r[7]=0u+0x00000000u; // 800F1B30
  c->ctr=c->r[0]; // 800F1B34
L_800F1B38:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 800F1B38
  cmps(c,0,(int32_t)c->r[0],0); // 800F1B3C
  if (!crb(c,2)) { goto L_800F1B70; } // 800F1B40
  c->r[0]=R32(c->r[9]+0x00000000u); // 800F1B44
  cmps(c,0,(int32_t)c->r[0],-1); // 800F1B48
  if (!crb(c,2)) { goto L_800F1B70; } // 800F1B4C
  c->r[6]=0u+0x802D0000u; // 800F1B50
  c->r[5]=0u+0x802D0000u; // 800F1B54
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800F1B58
  c->r[6]=c->r[6]+0x00002CE0u; // 800F1B5C
  c->r[5]=c->r[5]+0x00002C60u; // 800F1B60
  W32(c->r[6]+c->r[0],c->r[3]); // 800F1B64
  W32(c->r[5]+c->r[0],c->r[4]); // 800F1B68
  return; // 800F1B6C
L_800F1B70:;
  c->r[8]=c->r[8]+0x00000004u; // 800F1B70
  c->r[9]=c->r[9]+0x00000004u; // 800F1B74
  c->r[7]=c->r[7]+0x00000001u; // 800F1B78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1B38; } // 800F1B7C
  return; // 800F1B80
}

// IPCiProfAck
void f_800F1B84(Ctx* __restrict c) {
  trace_call(0x800F1B84u);
  c->r[3]=R32(c->r[13]+0xFFFF92D4u); // 800F1B84
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F1B88
  W32(c->r[13]+0xFFFF92D4u,c->r[0]); // 800F1B8C
  return; // 800F1B90
}

// IPCiProfReply
void f_800F1B94(Ctx* __restrict c) {
  trace_call(0x800F1B94u);
  c->r[5]=R32(c->r[13]+0xFFFF92D0u); // 800F1B94
  c->r[6]=0u+0x802D0000u; // 800F1B98
  c->r[7]=0u+0x802D0000u; // 800F1B9C
  c->r[0]=0u+0x00000020u; // 800F1BA0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800F1BA4
  c->r[6]=c->r[6]+0x00002CE0u; // 800F1BA8
  W32(c->r[13]+0xFFFF92D0u,c->r[5]); // 800F1BAC
  c->r[7]=c->r[7]+0x00002C60u; // 800F1BB0
  c->r[5]=0u+0x00000000u; // 800F1BB4
  c->ctr=c->r[0]; // 800F1BB8
L_800F1BBC:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F1BBC
  cmpu(c,0,c->r[3],c->r[0]); // 800F1BC0
  if (!crb(c,2)) { goto L_800F1BFC; } // 800F1BC4
  c->r[0]=R32(c->r[7]+0x00000000u); // 800F1BC8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800F1BCC
  if (!crb(c,2)) { goto L_800F1BFC; } // 800F1BD0
  c->r[4]=0u+0x802D0000u; // 800F1BD4
  c->r[3]=0u+0x802D0000u; // 800F1BD8
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800F1BDC
  c->r[5]=0u+0x00000000u; // 800F1BE0
  c->r[4]=c->r[4]+0x00002CE0u; // 800F1BE4
  c->r[3]=c->r[3]+0x00002C60u; // 800F1BE8
  c->r[0]=0u+0xFFFFFFFFu; // 800F1BEC
  W32(c->r[4]+c->r[6],c->r[5]); // 800F1BF0
  W32(c->r[3]+c->r[6],c->r[0]); // 800F1BF4
  return; // 800F1BF8
L_800F1BFC:;
  c->r[6]=c->r[6]+0x00000004u; // 800F1BFC
  c->r[7]=c->r[7]+0x00000004u; // 800F1C00
  c->r[5]=c->r[5]+0x00000001u; // 800F1C04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1BBC; } // 800F1C08
  return; // 800F1C0C
}

// nandCreate
void f_800F1C10(Ctx* __restrict c) {
  trace_call(0x800F1C10u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1C10
  c->r[0]=c->lr; // 800F1C14
  W32(c->r[1]+0x00000074u,c->r[0]); // 800F1C18
  c->r[11]=c->r[1]+0x00000070u; // 800F1C1C
  c->lr=0x800F1C24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F1C20
  c->r[0]=0u+0x00000000u; // 800F1C24
  c->r[27]=c->r[4]|c->r[4]; // 800F1C28
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F1C2C
  c->r[4]=c->r[3]|c->r[3]; // 800F1C30
  c->r[28]=c->r[5]|c->r[5]; // 800F1C34
  c->r[29]=c->r[6]|c->r[6]; // 800F1C38
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F1C3C
  c->r[30]=c->r[7]|c->r[7]; // 800F1C40
  c->r[31]=c->r[8]|c->r[8]; // 800F1C44
  c->r[3]=c->r[1]+0x00000018u; // 800F1C48
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F1C4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1C50
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F1C54
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F1C58
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F1C5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F1C60
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F1C64
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F1C68
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F1C6C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F1C70
  W32(c->r[1]+0x00000048u,c->r[0]); // 800F1C74
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800F1C78
  W32(c->r[1]+0x00000050u,c->r[0]); // 800F1C7C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F1C80
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F1C84
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F1C88
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F1C8C
  c->lr=0x800F1C94u; f_800F39C4(c); // 800F1C90
  cmps(c,0,(int32_t)c->r[31],0); // 800F1C94
  if (!crb(c,2)) { goto L_800F1CB4; } // 800F1C98
  c->r[3]=c->r[1]+0x00000018u; // 800F1C9C
  c->lr=0x800F1CA4u; f_800F37C0(c); // 800F1CA0
  cmps(c,0,(int32_t)c->r[3],0); // 800F1CA4
  if (crb(c,2)) { goto L_800F1CB4; } // 800F1CA8
  c->r[3]=0u+0xFFFFFF9Au; // 800F1CAC
  goto L_800F1D20; // 800F1CB0
L_800F1CB4:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 800F1CB4
  if (!crb(c,2)) { goto L_800F1CC4; } // 800F1CB8
  c->r[3]=0u+0xFFFFFF9Bu; // 800F1CBC
  goto L_800F1D20; // 800F1CC0
L_800F1CC4:;
  c->r[3]=c->r[27]|c->r[27]; // 800F1CC4
  c->r[4]=c->r[1]+0x00000010u; // 800F1CC8
  c->r[5]=c->r[1]+0x0000000Cu; // 800F1CCC
  c->r[6]=c->r[1]+0x00000008u; // 800F1CD0
  c->lr=0x800F1CD8u; f_800F2630(c); // 800F1CD4
  cmps(c,0,(int32_t)c->r[30],0); // 800F1CD8
  if (crb(c,2)) { goto L_800F1D08; } // 800F1CDC
  c->r[8]=0u+0x800F0000u; // 800F1CE0
  c->r[5]=R32(c->r[1]+0x00000010u); // 800F1CE4
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800F1CE8
  c->r[4]=c->r[28]|c->r[28]; // 800F1CEC
  c->r[7]=R32(c->r[1]+0x00000008u); // 800F1CF0
  c->r[9]=c->r[29]|c->r[29]; // 800F1CF4
  c->r[3]=c->r[1]+0x00000018u; // 800F1CF8
  c->r[8]=c->r[8]+0x00003D88u; // 800F1CFC
  c->lr=0x800F1D04u; f_800EF478(c); // 800F1D00
  goto L_800F1D20; // 800F1D04
L_800F1D08:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 800F1D08
  c->r[4]=c->r[28]|c->r[28]; // 800F1D0C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800F1D10
  c->r[3]=c->r[1]+0x00000018u; // 800F1D14
  c->r[7]=R32(c->r[1]+0x00000008u); // 800F1D18
  c->lr=0x800F1D20u; f_800EF384(c); // 800F1D1C
L_800F1D20:;
  c->r[11]=c->r[1]+0x00000070u; // 800F1D20
  c->lr=0x800F1D28u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F1D24
  c->r[0]=R32(c->r[1]+0x00000074u); // 800F1D28
  c->lr=c->r[0]; // 800F1D2C
  c->r[1]=c->r[1]+0x00000070u; // 800F1D30
  return; // 800F1D34
}

// NANDCreate
void f_800F1D38(Ctx* __restrict c) {
  trace_call(0x800F1D38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1D38
  c->r[0]=c->lr; // 800F1D3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1D40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F1D44
  c->r[31]=c->r[5]|c->r[5]; // 800F1D48
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F1D4C
  c->r[30]=c->r[4]|c->r[4]; // 800F1D50
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F1D54
  c->r[29]=c->r[3]|c->r[3]; // 800F1D58
  c->lr=0x800F1D60u; f_800F384C(c); // 800F1D5C
  cmps(c,0,(int32_t)c->r[3],0); // 800F1D60
  if (crb(c,2)) { goto L_800F1D8C; } // 800F1D64
  c->r[3]=c->r[29]|c->r[29]; // 800F1D68
  c->r[4]=c->r[30]|c->r[30]; // 800F1D6C
  c->r[5]=c->r[31]|c->r[31]; // 800F1D70
  c->r[6]=0u+0x00000000u; // 800F1D74
  c->r[7]=0u+0x00000000u; // 800F1D78
  c->r[8]=0u+0x00000000u; // 800F1D7C
  c->lr=0x800F1D84u; f_800F1C10(c); // 800F1D80
  c->lr=0x800F1D88u; f_800F3864(c); // 800F1D84
  goto L_800F1D90; // 800F1D88
L_800F1D8C:;
  c->r[3]=0u+0xFFFFFF80u; // 800F1D8C
L_800F1D90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1D90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F1D94
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F1D98
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F1D9C
  c->lr=c->r[0]; // 800F1DA0
  c->r[1]=c->r[1]+0x00000020u; // 800F1DA4
  return; // 800F1DA8
}

// NANDPrivateCreate
void f_800F1DAC(Ctx* __restrict c) {
  trace_call(0x800F1DACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1DAC
  c->r[0]=c->lr; // 800F1DB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1DB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F1DB8
  c->r[31]=c->r[5]|c->r[5]; // 800F1DBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F1DC0
  c->r[30]=c->r[4]|c->r[4]; // 800F1DC4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F1DC8
  c->r[29]=c->r[3]|c->r[3]; // 800F1DCC
  c->lr=0x800F1DD4u; f_800F384C(c); // 800F1DD0
  cmps(c,0,(int32_t)c->r[3],0); // 800F1DD4
  if (crb(c,2)) { goto L_800F1E00; } // 800F1DD8
  c->r[3]=c->r[29]|c->r[29]; // 800F1DDC
  c->r[4]=c->r[30]|c->r[30]; // 800F1DE0
  c->r[5]=c->r[31]|c->r[31]; // 800F1DE4
  c->r[6]=0u+0x00000000u; // 800F1DE8
  c->r[7]=0u+0x00000000u; // 800F1DEC
  c->r[8]=0u+0x00000001u; // 800F1DF0
  c->lr=0x800F1DF8u; f_800F1C10(c); // 800F1DF4
  c->lr=0x800F1DFCu; f_800F3864(c); // 800F1DF8
  goto L_800F1E04; // 800F1DFC
L_800F1E00:;
  c->r[3]=0u+0xFFFFFF80u; // 800F1E00
L_800F1E04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1E04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F1E08
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F1E0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F1E10
  c->lr=c->r[0]; // 800F1E14
  c->r[1]=c->r[1]+0x00000020u; // 800F1E18
  return; // 800F1E1C
}

// NANDPrivateCreateAsync
void f_800F1E20(Ctx* __restrict c) {
  trace_call(0x800F1E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1E20
  c->r[0]=c->lr; // 800F1E24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1E28
  c->r[11]=c->r[1]+0x00000020u; // 800F1E2C
  c->lr=0x800F1E34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F1E30
  c->r[27]=c->r[3]|c->r[3]; // 800F1E34
  c->r[28]=c->r[4]|c->r[4]; // 800F1E38
  c->r[29]=c->r[5]|c->r[5]; // 800F1E3C
  c->r[30]=c->r[6]|c->r[6]; // 800F1E40
  c->r[31]=c->r[7]|c->r[7]; // 800F1E44
  c->lr=0x800F1E4Cu; f_800F384C(c); // 800F1E48
  cmps(c,0,(int32_t)c->r[3],0); // 800F1E4C
  if (!crb(c,2)) { goto L_800F1E5C; } // 800F1E50
  c->r[3]=0u+0xFFFFFF80u; // 800F1E54
  goto L_800F1E80; // 800F1E58
L_800F1E5C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F1E5C
  c->r[3]=c->r[27]|c->r[27]; // 800F1E60
  c->r[4]=c->r[28]|c->r[28]; // 800F1E64
  c->r[5]=c->r[29]|c->r[29]; // 800F1E68
  c->r[6]=c->r[31]|c->r[31]; // 800F1E6C
  c->r[7]=0u+0x00000001u; // 800F1E70
  c->r[8]=0u+0x00000001u; // 800F1E74
  c->lr=0x800F1E7Cu; f_800F1C10(c); // 800F1E78
  c->lr=0x800F1E80u; f_800F3864(c); // 800F1E7C
L_800F1E80:;
  c->r[11]=c->r[1]+0x00000020u; // 800F1E80
  c->lr=0x800F1E88u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F1E84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1E88
  c->lr=c->r[0]; // 800F1E8C
  c->r[1]=c->r[1]+0x00000020u; // 800F1E90
  return; // 800F1E94
}

// NANDDelete
void f_800F1E98(Ctx* __restrict c) {
  trace_call(0x800F1E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1E98
  c->r[0]=c->lr; // 800F1E9C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F1EA0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F1EA4
  c->r[31]=c->r[3]|c->r[3]; // 800F1EA8
  c->lr=0x800F1EB0u; f_800F384C(c); // 800F1EAC
  cmps(c,0,(int32_t)c->r[3],0); // 800F1EB0
  if (!crb(c,2)) { goto L_800F1EC0; } // 800F1EB4
  c->r[3]=0u+0xFFFFFF80u; // 800F1EB8
  goto L_800F1F34; // 800F1EBC
L_800F1EC0:;
  c->r[0]=0u+0x00000000u; // 800F1EC0
  c->r[4]=c->r[31]|c->r[31]; // 800F1EC4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F1EC8
  c->r[3]=c->r[1]+0x00000008u; // 800F1ECC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F1ED0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F1ED4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1ED8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F1EDC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F1EE0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F1EE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1EE8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F1EEC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F1EF0
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F1EF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F1EF8
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F1EFC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F1F00
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F1F04
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F1F08
  c->lr=0x800F1F10u; f_800F39C4(c); // 800F1F0C
  c->r[3]=c->r[1]+0x00000008u; // 800F1F10
  c->lr=0x800F1F18u; f_800F37C0(c); // 800F1F14
  cmps(c,0,(int32_t)c->r[3],0); // 800F1F18
  if (crb(c,2)) { goto L_800F1F28; } // 800F1F1C
  c->r[3]=0u+0xFFFFFF9Au; // 800F1F20
  goto L_800F1F30; // 800F1F24
L_800F1F28:;
  c->r[3]=c->r[1]+0x00000008u; // 800F1F28
  c->lr=0x800F1F30u; f_800EEFA0(c); // 800F1F2C
L_800F1F30:;
  c->lr=0x800F1F34u; f_800F3864(c); // 800F1F30
L_800F1F34:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F1F34
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F1F38
  c->lr=c->r[0]; // 800F1F3C
  c->r[1]=c->r[1]+0x00000050u; // 800F1F40
  return; // 800F1F44
}

// NANDPrivateDelete
void f_800F1F48(Ctx* __restrict c) {
  trace_call(0x800F1F48u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1F48
  c->r[0]=c->lr; // 800F1F4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F1F50
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F1F54
  c->r[31]=c->r[3]|c->r[3]; // 800F1F58
  c->lr=0x800F1F60u; f_800F384C(c); // 800F1F5C
  cmps(c,0,(int32_t)c->r[3],0); // 800F1F60
  if (!crb(c,2)) { goto L_800F1F70; } // 800F1F64
  c->r[3]=0u+0xFFFFFF80u; // 800F1F68
  goto L_800F1FCC; // 800F1F6C
L_800F1F70:;
  c->r[0]=0u+0x00000000u; // 800F1F70
  c->r[4]=c->r[31]|c->r[31]; // 800F1F74
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F1F78
  c->r[3]=c->r[1]+0x00000008u; // 800F1F7C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F1F80
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F1F84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1F88
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F1F8C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F1F90
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F1F94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1F98
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F1F9C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F1FA0
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F1FA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F1FA8
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F1FAC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F1FB0
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F1FB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F1FB8
  c->lr=0x800F1FC0u; f_800F39C4(c); // 800F1FBC
  c->r[3]=c->r[1]+0x00000008u; // 800F1FC0
  c->lr=0x800F1FC8u; f_800EEFA0(c); // 800F1FC4
  c->lr=0x800F1FCCu; f_800F3864(c); // 800F1FC8
L_800F1FCC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F1FCC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F1FD0
  c->lr=c->r[0]; // 800F1FD4
  c->r[1]=c->r[1]+0x00000050u; // 800F1FD8
  return; // 800F1FDC
}

// NANDPrivateDeleteAsync
void f_800F1FE0(Ctx* __restrict c) {
  trace_call(0x800F1FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1FE0
  c->r[0]=c->lr; // 800F1FE4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F1FE8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800F1FEC
  c->r[31]=c->r[5]|c->r[5]; // 800F1FF0
  W32(c->r[1]+0x00000058u,c->r[30]); // 800F1FF4
  c->r[30]=c->r[4]|c->r[4]; // 800F1FF8
  W32(c->r[1]+0x00000054u,c->r[29]); // 800F1FFC
  c->r[29]=c->r[3]|c->r[3]; // 800F2000
  c->lr=0x800F2008u; f_800F384C(c); // 800F2004
  cmps(c,0,(int32_t)c->r[3],0); // 800F2008
  if (!crb(c,2)) { goto L_800F2018; } // 800F200C
  c->r[3]=0u+0xFFFFFF80u; // 800F2010
  goto L_800F2084; // 800F2014
L_800F2018:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F2018
  c->r[0]=0u+0x00000000u; // 800F201C
  c->r[4]=c->r[29]|c->r[29]; // 800F2020
  c->r[3]=c->r[1]+0x00000008u; // 800F2024
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F2028
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F202C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F2030
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2034
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F2038
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F203C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F2040
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2044
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F2048
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F204C
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F2050
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F2054
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F2058
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F205C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F2060
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F2064
  c->lr=0x800F206Cu; f_800F39C4(c); // 800F2068
  c->r[4]=0u+0x800F0000u; // 800F206C
  c->r[5]=c->r[31]|c->r[31]; // 800F2070
  c->r[3]=c->r[1]+0x00000008u; // 800F2074
  c->r[4]=c->r[4]+0x00003D88u; // 800F2078
  c->lr=0x800F2080u; f_800EF078(c); // 800F207C
  c->lr=0x800F2084u; f_800F3864(c); // 800F2080
L_800F2084:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F2084
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800F2088
  c->r[30]=R32(c->r[1]+0x00000058u); // 800F208C
  c->r[29]=R32(c->r[1]+0x00000054u); // 800F2090
  c->lr=c->r[0]; // 800F2094
  c->r[1]=c->r[1]+0x00000060u; // 800F2098
  return; // 800F209C
}

// NANDRead
void f_800F20A0(Ctx* __restrict c) {
  trace_call(0x800F20A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F20A0
  c->r[0]=c->lr; // 800F20A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F20A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F20AC
  c->r[31]=c->r[5]|c->r[5]; // 800F20B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F20B4
  c->r[30]=c->r[4]|c->r[4]; // 800F20B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F20BC
  c->r[29]=c->r[3]|c->r[3]; // 800F20C0
  c->lr=0x800F20C8u; f_800F384C(c); // 800F20C4
  cmps(c,0,(int32_t)c->r[3],0); // 800F20C8
  if (crb(c,2)) { goto L_800F20E8; } // 800F20CC
  c->r[3]=R32(c->r[29]+0x00000000u); // 800F20D0
  c->r[4]=c->r[30]|c->r[30]; // 800F20D4
  c->r[5]=c->r[31]|c->r[31]; // 800F20D8
  c->lr=0x800F20E0u; f_800EF84C(c); // 800F20DC
  c->lr=0x800F20E4u; f_800F3864(c); // 800F20E0
  goto L_800F20EC; // 800F20E4
L_800F20E8:;
  c->r[3]=0u+0xFFFFFF80u; // 800F20E8
L_800F20EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F20EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F20F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F20F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F20F8
  c->lr=c->r[0]; // 800F20FC
  c->r[1]=c->r[1]+0x00000020u; // 800F2100
  return; // 800F2104
}

// NANDReadAsync
void f_800F2108(Ctx* __restrict c) {
  trace_call(0x800F2108u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2108
  c->r[0]=c->lr; // 800F210C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2110
  c->r[11]=c->r[1]+0x00000020u; // 800F2114
  c->lr=0x800F211Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2118
  c->r[27]=c->r[3]|c->r[3]; // 800F211C
  c->r[28]=c->r[4]|c->r[4]; // 800F2120
  c->r[29]=c->r[5]|c->r[5]; // 800F2124
  c->r[30]=c->r[6]|c->r[6]; // 800F2128
  c->r[31]=c->r[7]|c->r[7]; // 800F212C
  c->lr=0x800F2134u; f_800F384C(c); // 800F2130
  cmps(c,0,(int32_t)c->r[3],0); // 800F2134
  if (!crb(c,2)) { goto L_800F2144; } // 800F2138
  c->r[3]=0u+0xFFFFFF80u; // 800F213C
  goto L_800F2168; // 800F2140
L_800F2144:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F2144
  c->r[6]=0u+0x800F0000u; // 800F2148
  c->r[4]=c->r[28]|c->r[28]; // 800F214C
  c->r[5]=c->r[29]|c->r[29]; // 800F2150
  c->r[3]=R32(c->r[27]+0x00000000u); // 800F2154
  c->r[7]=c->r[31]|c->r[31]; // 800F2158
  c->r[6]=c->r[6]+0x00003D88u; // 800F215C
  c->lr=0x800F2164u; f_800EF86C(c); // 800F2160
  c->lr=0x800F2168u; f_800F3864(c); // 800F2164
L_800F2168:;
  c->r[11]=c->r[1]+0x00000020u; // 800F2168
  c->lr=0x800F2170u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F216C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2170
  c->lr=c->r[0]; // 800F2174
  c->r[1]=c->r[1]+0x00000020u; // 800F2178
  return; // 800F217C
}

// NANDWrite
void f_800F2180(Ctx* __restrict c) {
  trace_call(0x800F2180u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2180
  c->r[0]=c->lr; // 800F2184
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2188
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F218C
  c->r[31]=c->r[5]|c->r[5]; // 800F2190
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2194
  c->r[30]=c->r[4]|c->r[4]; // 800F2198
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F219C
  c->r[29]=c->r[3]|c->r[3]; // 800F21A0
  c->lr=0x800F21A8u; f_800F384C(c); // 800F21A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F21A8
  if (crb(c,2)) { goto L_800F21C8; } // 800F21AC
  c->r[3]=R32(c->r[29]+0x00000000u); // 800F21B0
  c->r[4]=c->r[30]|c->r[30]; // 800F21B4
  c->r[5]=c->r[31]|c->r[31]; // 800F21B8
  c->lr=0x800F21C0u; f_800EF910(c); // 800F21BC
  c->lr=0x800F21C4u; f_800F3864(c); // 800F21C0
  goto L_800F21CC; // 800F21C4
L_800F21C8:;
  c->r[3]=0u+0xFFFFFF80u; // 800F21C8
L_800F21CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F21CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F21D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F21D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F21D8
  c->lr=c->r[0]; // 800F21DC
  c->r[1]=c->r[1]+0x00000020u; // 800F21E0
  return; // 800F21E4
}

// NANDWriteAsync
void f_800F21E8(Ctx* __restrict c) {
  trace_call(0x800F21E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F21E8
  c->r[0]=c->lr; // 800F21EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F21F0
  c->r[11]=c->r[1]+0x00000020u; // 800F21F4
  c->lr=0x800F21FCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F21F8
  c->r[27]=c->r[3]|c->r[3]; // 800F21FC
  c->r[28]=c->r[4]|c->r[4]; // 800F2200
  c->r[29]=c->r[5]|c->r[5]; // 800F2204
  c->r[30]=c->r[6]|c->r[6]; // 800F2208
  c->r[31]=c->r[7]|c->r[7]; // 800F220C
  c->lr=0x800F2214u; f_800F384C(c); // 800F2210
  cmps(c,0,(int32_t)c->r[3],0); // 800F2214
  if (!crb(c,2)) { goto L_800F2224; } // 800F2218
  c->r[3]=0u+0xFFFFFF80u; // 800F221C
  goto L_800F2248; // 800F2220
L_800F2224:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F2224
  c->r[6]=0u+0x800F0000u; // 800F2228
  c->r[4]=c->r[28]|c->r[28]; // 800F222C
  c->r[5]=c->r[29]|c->r[29]; // 800F2230
  c->r[3]=R32(c->r[27]+0x00000000u); // 800F2234
  c->r[7]=c->r[31]|c->r[31]; // 800F2238
  c->r[6]=c->r[6]+0x00003D88u; // 800F223C
  c->lr=0x800F2244u; f_800EF930(c); // 800F2240
  c->lr=0x800F2248u; f_800F3864(c); // 800F2244
L_800F2248:;
  c->r[11]=c->r[1]+0x00000020u; // 800F2248
  c->lr=0x800F2250u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F224C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2250
  c->lr=c->r[0]; // 800F2254
  c->r[1]=c->r[1]+0x00000020u; // 800F2258
  return; // 800F225C
}

// NANDSeek
void f_800F2260(Ctx* __restrict c) {
  trace_call(0x800F2260u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2260
  c->r[0]=c->lr; // 800F2264
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2268
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F226C
  c->r[31]=c->r[5]|c->r[5]; // 800F2270
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2274
  c->r[30]=c->r[4]|c->r[4]; // 800F2278
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F227C
  c->r[29]=c->r[3]|c->r[3]; // 800F2280
  c->lr=0x800F2288u; f_800F384C(c); // 800F2284
  cmps(c,0,(int32_t)c->r[3],0); // 800F2288
  if (!crb(c,2)) { goto L_800F2298; } // 800F228C
  c->r[3]=0u+0xFFFFFF80u; // 800F2290
  goto L_800F22E4; // 800F2294
L_800F2298:;
  cmps(c,0,(int32_t)c->r[31],1); // 800F2298
  c->r[3]=R32(c->r[29]+0x00000000u); // 800F229C
  c->r[5]=0u+0xFFFFFFFFu; // 800F22A0
  if (crb(c,2)) { goto L_800F22CC; } // 800F22A4
  if (!crb(c,0)) { goto L_800F22B8; } // 800F22A8
  cmps(c,0,(int32_t)c->r[31],0); // 800F22AC
  if (!crb(c,0)) { goto L_800F22C4; } // 800F22B0
  goto L_800F22D8; // 800F22B4
L_800F22B8:;
  cmps(c,0,(int32_t)c->r[31],3); // 800F22B8
  if (!crb(c,0)) { goto L_800F22D8; } // 800F22BC
  goto L_800F22D4; // 800F22C0
L_800F22C4:;
  c->r[5]=0u+0x00000000u; // 800F22C4
  goto L_800F22D8; // 800F22C8
L_800F22CC:;
  c->r[5]=0u+0x00000001u; // 800F22CC
  goto L_800F22D8; // 800F22D0
L_800F22D4:;
  c->r[5]=0u+0x00000002u; // 800F22D4
L_800F22D8:;
  c->r[4]=c->r[30]|c->r[30]; // 800F22D8
  c->lr=0x800F22E0u; f_800EF7BC(c); // 800F22DC
  c->lr=0x800F22E4u; f_800F3864(c); // 800F22E0
L_800F22E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F22E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F22E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F22EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F22F0
  c->lr=c->r[0]; // 800F22F4
  c->r[1]=c->r[1]+0x00000020u; // 800F22F8
  return; // 800F22FC
}

// NANDSeekAsync
void f_800F2300(Ctx* __restrict c) {
  trace_call(0x800F2300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2300
  c->r[0]=c->lr; // 800F2304
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2308
  c->r[11]=c->r[1]+0x00000020u; // 800F230C
  c->lr=0x800F2314u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2310
  c->r[27]=c->r[3]|c->r[3]; // 800F2314
  c->r[28]=c->r[4]|c->r[4]; // 800F2318
  c->r[29]=c->r[5]|c->r[5]; // 800F231C
  c->r[30]=c->r[6]|c->r[6]; // 800F2320
  c->r[31]=c->r[7]|c->r[7]; // 800F2324
  c->lr=0x800F232Cu; f_800F384C(c); // 800F2328
  cmps(c,0,(int32_t)c->r[3],0); // 800F232C
  if (!crb(c,2)) { goto L_800F233C; } // 800F2330
  c->r[3]=0u+0xFFFFFF80u; // 800F2334
  goto L_800F2398; // 800F2338
L_800F233C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F233C
  cmps(c,0,(int32_t)c->r[29],1); // 800F2340
  c->r[5]=0u+0xFFFFFFFFu; // 800F2344
  c->r[3]=R32(c->r[27]+0x00000000u); // 800F2348
  if (crb(c,2)) { goto L_800F2374; } // 800F234C
  if (!crb(c,0)) { goto L_800F2360; } // 800F2350
  cmps(c,0,(int32_t)c->r[29],0); // 800F2354
  if (!crb(c,0)) { goto L_800F236C; } // 800F2358
  goto L_800F2380; // 800F235C
L_800F2360:;
  cmps(c,0,(int32_t)c->r[29],3); // 800F2360
  if (!crb(c,0)) { goto L_800F2380; } // 800F2364
  goto L_800F237C; // 800F2368
L_800F236C:;
  c->r[5]=0u+0x00000000u; // 800F236C
  goto L_800F2380; // 800F2370
L_800F2374:;
  c->r[5]=0u+0x00000001u; // 800F2374
  goto L_800F2380; // 800F2378
L_800F237C:;
  c->r[5]=0u+0x00000002u; // 800F237C
L_800F2380:;
  c->r[6]=0u+0x800F0000u; // 800F2380
  c->r[4]=c->r[28]|c->r[28]; // 800F2384
  c->r[7]=c->r[31]|c->r[31]; // 800F2388
  c->r[6]=c->r[6]+0x00003D88u; // 800F238C
  c->lr=0x800F2394u; f_800EF7C0(c); // 800F2390
  c->lr=0x800F2398u; f_800F3864(c); // 800F2394
L_800F2398:;
  c->r[11]=c->r[1]+0x00000020u; // 800F2398
  c->lr=0x800F23A0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F239C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F23A0
  c->lr=c->r[0]; // 800F23A4
  c->r[1]=c->r[1]+0x00000020u; // 800F23A8
  return; // 800F23AC
}

// nandCreateDir
void f_800F23B0(Ctx* __restrict c) {
  trace_call(0x800F23B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F23B0
  c->r[0]=c->lr; // 800F23B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800F23B8
  c->r[11]=c->r[1]+0x00000070u; // 800F23BC
  c->lr=0x800F23C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F23C0
  c->r[0]=0u+0x00000000u; // 800F23C4
  c->r[27]=c->r[4]|c->r[4]; // 800F23C8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F23CC
  c->r[4]=c->r[3]|c->r[3]; // 800F23D0
  c->r[28]=c->r[5]|c->r[5]; // 800F23D4
  c->r[29]=c->r[6]|c->r[6]; // 800F23D8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F23DC
  c->r[30]=c->r[7]|c->r[7]; // 800F23E0
  c->r[31]=c->r[8]|c->r[8]; // 800F23E4
  c->r[3]=c->r[1]+0x00000018u; // 800F23E8
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F23EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F23F0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F23F4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F23F8
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F23FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F2400
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F2404
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F2408
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F240C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F2410
  W32(c->r[1]+0x00000048u,c->r[0]); // 800F2414
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800F2418
  W32(c->r[1]+0x00000050u,c->r[0]); // 800F241C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F2420
  c->lr=0x800F2428u; f_800F39C4(c); // 800F2424
  cmps(c,0,(int32_t)c->r[31],0); // 800F2428
  if (!crb(c,2)) { goto L_800F2448; } // 800F242C
  c->r[3]=c->r[1]+0x00000018u; // 800F2430
  c->lr=0x800F2438u; f_800F37C0(c); // 800F2434
  cmps(c,0,(int32_t)c->r[3],0); // 800F2438
  if (crb(c,2)) { goto L_800F2448; } // 800F243C
  c->r[3]=0u+0xFFFFFF9Au; // 800F2440
  goto L_800F24C4; // 800F2444
L_800F2448:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 800F2448
  if (!crb(c,2)) { goto L_800F2458; } // 800F244C
  c->r[3]=0u+0xFFFFFF9Bu; // 800F2450
  goto L_800F24C4; // 800F2454
L_800F2458:;
  c->r[0]=0u+0x00000000u; // 800F2458
  c->r[3]=c->r[27]|c->r[27]; // 800F245C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F2460
  c->r[4]=c->r[1]+0x00000010u; // 800F2464
  c->r[5]=c->r[1]+0x0000000Cu; // 800F2468
  c->r[6]=c->r[1]+0x00000008u; // 800F246C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F2470
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F2474
  c->lr=0x800F247Cu; f_800F2630(c); // 800F2478
  cmps(c,0,(int32_t)c->r[30],0); // 800F247C
  if (crb(c,2)) { goto L_800F24AC; } // 800F2480
  c->r[8]=0u+0x800F0000u; // 800F2484
  c->r[5]=R32(c->r[1]+0x00000010u); // 800F2488
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800F248C
  c->r[4]=c->r[28]|c->r[28]; // 800F2490
  c->r[7]=R32(c->r[1]+0x00000008u); // 800F2494
  c->r[9]=c->r[29]|c->r[29]; // 800F2498
  c->r[3]=c->r[1]+0x00000018u; // 800F249C
  c->r[8]=c->r[8]+0x00003D88u; // 800F24A0
  c->lr=0x800F24A8u; f_800EE984(c); // 800F24A4
  goto L_800F24C4; // 800F24A8
L_800F24AC:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 800F24AC
  c->r[4]=c->r[28]|c->r[28]; // 800F24B0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800F24B4
  c->r[3]=c->r[1]+0x00000018u; // 800F24B8
  c->r[7]=R32(c->r[1]+0x00000008u); // 800F24BC
  c->lr=0x800F24C4u; f_800EE890(c); // 800F24C0
L_800F24C4:;
  c->r[11]=c->r[1]+0x00000070u; // 800F24C4
  c->lr=0x800F24CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F24C8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800F24CC
  c->lr=c->r[0]; // 800F24D0
  c->r[1]=c->r[1]+0x00000070u; // 800F24D4
  return; // 800F24D8
}

// NANDPrivateCreateDirAsync
void f_800F24DC(Ctx* __restrict c) {
  trace_call(0x800F24DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F24DC
  c->r[0]=c->lr; // 800F24E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F24E4
  c->r[11]=c->r[1]+0x00000020u; // 800F24E8
  c->lr=0x800F24F0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F24EC
  c->r[27]=c->r[3]|c->r[3]; // 800F24F0
  c->r[28]=c->r[4]|c->r[4]; // 800F24F4
  c->r[29]=c->r[5]|c->r[5]; // 800F24F8
  c->r[30]=c->r[6]|c->r[6]; // 800F24FC
  c->r[31]=c->r[7]|c->r[7]; // 800F2500
  c->lr=0x800F2508u; f_800F384C(c); // 800F2504
  cmps(c,0,(int32_t)c->r[3],0); // 800F2508
  if (!crb(c,2)) { goto L_800F2518; } // 800F250C
  c->r[3]=0u+0xFFFFFF80u; // 800F2510
  goto L_800F253C; // 800F2514
L_800F2518:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F2518
  c->r[3]=c->r[27]|c->r[27]; // 800F251C
  c->r[4]=c->r[28]|c->r[28]; // 800F2520
  c->r[5]=c->r[29]|c->r[29]; // 800F2524
  c->r[6]=c->r[31]|c->r[31]; // 800F2528
  c->r[7]=0u+0x00000001u; // 800F252C
  c->r[8]=0u+0x00000001u; // 800F2530
  c->lr=0x800F2538u; f_800F23B0(c); // 800F2534
  c->lr=0x800F253Cu; f_800F3864(c); // 800F2538
L_800F253C:;
  c->r[11]=c->r[1]+0x00000020u; // 800F253C
  c->lr=0x800F2544u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F2540
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2544
  c->lr=c->r[0]; // 800F2548
  c->r[1]=c->r[1]+0x00000020u; // 800F254C
  return; // 800F2550
}

// NANDGetLength
void f_800F2554(Ctx* __restrict c) {
  trace_call(0x800F2554u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800F2554
  c->r[12]=c->r[1]|c->r[1]; // 800F2558
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 800F255C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2560
  c->r[0]=c->lr; // 800F2564
  W32(c->r[12]+0x00000004u,c->r[0]); // 800F2568
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800F256C
  c->r[31]=c->r[4]|c->r[4]; // 800F2570
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800F2574
  c->r[30]=c->r[3]|c->r[3]; // 800F2578
  c->lr=0x800F2580u; f_800F384C(c); // 800F257C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2580
  if (!crb(c,2)) { goto L_800F2590; } // 800F2584
  c->r[3]=0u+0xFFFFFF80u; // 800F2588
  goto L_800F25C0; // 800F258C
L_800F2590:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800F2590
  c->r[4]=c->r[1]+0x00000020u; // 800F2594
  c->lr=0x800F259Cu; f_800EF6EC(c); // 800F2598
  cmps(c,0,(int32_t)c->r[3],0); // 800F259C
  if (!crb(c,2)) { goto L_800F25BC; } // 800F25A0
  cmps(c,0,(int32_t)c->r[31],0); // 800F25A4
  if (crb(c,2)) { goto L_800F25BC; } // 800F25A8
  c->r[0]=R32(c->r[1]+0x00000020u); // 800F25AC
  W32(c->r[31]+0x00000000u,c->r[0]); // 800F25B0
  goto L_800F25BC; // 800F25B4
  W32(0u+0x00000000u,c->r[0]); // 800F25B8
L_800F25BC:;
  c->lr=0x800F25C0u; f_800F3864(c); // 800F25BC
L_800F25C0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F25C0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F25C4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800F25C8
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800F25CC
  c->lr=c->r[0]; // 800F25D0
  c->r[1]=c->r[10]|c->r[10]; // 800F25D4
  return; // 800F25D8
}

// nandComposePerm
void f_800F25DC(Ctx* __restrict c) {
  trace_call(0x800F25DCu);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800F25DC
  c->r[7]=0u+0x00000000u; // 800F25E0
  if (crb(c,2)) { goto L_800F25EC; } // 800F25E4
  c->r[7]=c->r[7]|0x00000010u; // 800F25E8
L_800F25EC:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 800F25EC
  if (crb(c,2)) { goto L_800F25F8; } // 800F25F0
  c->r[7]=c->r[7]|0x00000020u; // 800F25F4
L_800F25F8:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 800F25F8
  if (crb(c,2)) { goto L_800F2604; } // 800F25FC
  c->r[7]=c->r[7]|0x00000004u; // 800F2600
L_800F2604:;
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 800F2604
  if (crb(c,2)) { goto L_800F2610; } // 800F2608
  c->r[7]=c->r[7]|0x00000008u; // 800F260C
L_800F2610:;
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 800F2610
  if (crb(c,2)) { goto L_800F261C; } // 800F2614
  c->r[7]=c->r[7]|0x00000001u; // 800F2618
L_800F261C:;
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 800F261C
  if (crb(c,2)) { goto L_800F2628; } // 800F2620
  c->r[7]=c->r[7]|0x00000002u; // 800F2624
L_800F2628:;
  W8(c->r[3]+0x00000000u,c->r[7]); // 800F2628
  return; // 800F262C
}

// nandSplitPerm
void f_800F2630(Ctx* __restrict c) {
  trace_call(0x800F2630u);
  c->r[7]=0u+0x00000000u; // 800F2630
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 800F2634
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F2638
  W32(c->r[5]+0x00000000u,c->r[7]); // 800F263C
  W32(c->r[6]+0x00000000u,c->r[7]); // 800F2640
  if (crb(c,2)) { goto L_800F2654; } // 800F2644
  c->r[0]=R32(c->r[4]+0x00000000u); // 800F2648
  c->r[0]=c->r[0]|0x00000001u; // 800F264C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F2650
L_800F2654:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 800F2654
  if (crb(c,2)) { goto L_800F2668; } // 800F2658
  c->r[0]=R32(c->r[4]+0x00000000u); // 800F265C
  c->r[0]=c->r[0]|0x00000002u; // 800F2660
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F2664
L_800F2668:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800F2668
  if (crb(c,2)) { goto L_800F267C; } // 800F266C
  c->r[0]=R32(c->r[5]+0x00000000u); // 800F2670
  c->r[0]=c->r[0]|0x00000001u; // 800F2674
  W32(c->r[5]+0x00000000u,c->r[0]); // 800F2678
L_800F267C:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800F267C
  if (crb(c,2)) { goto L_800F2690; } // 800F2680
  c->r[0]=R32(c->r[5]+0x00000000u); // 800F2684
  c->r[0]=c->r[0]|0x00000002u; // 800F2688
  W32(c->r[5]+0x00000000u,c->r[0]); // 800F268C
L_800F2690:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800F2690
  if (crb(c,2)) { goto L_800F26A4; } // 800F2694
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F2698
  c->r[0]=c->r[0]|0x00000001u; // 800F269C
  W32(c->r[6]+0x00000000u,c->r[0]); // 800F26A0
L_800F26A4:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800F26A4
  if (crb(c,2)) return; // 800F26A8
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F26AC
  c->r[0]=c->r[0]|0x00000002u; // 800F26B0
  W32(c->r[6]+0x00000000u,c->r[0]); // 800F26B4
  return; // 800F26B8
}

// nandGetStatus
void f_800F26BC(Ctx* __restrict c) {
  trace_call(0x800F26BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F26BC
  c->r[0]=c->lr; // 800F26C0
  W32(c->r[1]+0x00000074u,c->r[0]); // 800F26C4
  c->r[0]=0u+0x00000000u; // 800F26C8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800F26CC
  c->r[31]=c->r[7]|c->r[7]; // 800F26D0
  W32(c->r[1]+0x00000068u,c->r[30]); // 800F26D4
  c->r[30]=c->r[6]|c->r[6]; // 800F26D8
  W32(c->r[1]+0x00000064u,c->r[29]); // 800F26DC
  c->r[29]=c->r[5]|c->r[5]; // 800F26E0
  W32(c->r[1]+0x00000060u,c->r[28]); // 800F26E4
  c->r[28]=c->r[4]|c->r[4]; // 800F26E8
  c->r[4]=c->r[3]|c->r[3]; // 800F26EC
  c->r[3]=c->r[1]+0x00000020u; // 800F26F0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F26F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F26F8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F26FC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F2700
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F2704
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F2708
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F270C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F2710
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F2714
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F2718
  W32(c->r[1]+0x00000048u,c->r[0]); // 800F271C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800F2720
  W32(c->r[1]+0x00000050u,c->r[0]); // 800F2724
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F2728
  W32(c->r[1]+0x00000058u,c->r[0]); // 800F272C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800F2730
  c->lr=0x800F2738u; f_800F39C4(c); // 800F2734
  cmps(c,0,(int32_t)c->r[31],0); // 800F2738
  if (!crb(c,2)) { goto L_800F2758; } // 800F273C
  c->r[3]=c->r[1]+0x00000020u; // 800F2740
  c->lr=0x800F2748u; f_800F37F4(c); // 800F2744
  cmps(c,0,(int32_t)c->r[3],0); // 800F2748
  if (crb(c,2)) { goto L_800F2758; } // 800F274C
  c->r[3]=0u+0xFFFFFF9Au; // 800F2750
  goto L_800F27F0; // 800F2754
L_800F2758:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F2758
  if (crb(c,2)) { goto L_800F2790; } // 800F275C
  c->r[10]=0u+0x800F0000u; // 800F2760
  W32(c->r[1]+0x00000008u,c->r[29]); // 800F2764
  c->r[4]=c->r[28]|c->r[28]; // 800F2768
  c->r[3]=c->r[1]+0x00000020u; // 800F276C
  c->r[5]=c->r[28]+0x00000004u; // 800F2770
  c->r[6]=c->r[29]+0x00000020u; // 800F2774
  c->r[7]=c->r[29]+0x00000024u; // 800F2778
  c->r[8]=c->r[29]+0x00000028u; // 800F277C
  c->r[9]=c->r[29]+0x0000002Cu; // 800F2780
  c->r[10]=c->r[10]+0x00002810u; // 800F2784
  c->lr=0x800F278Cu; f_800EEE6C(c); // 800F2788
  goto L_800F27F0; // 800F278C
L_800F2790:;
  c->r[0]=0u+0x00000000u; // 800F2790
  c->r[4]=c->r[28]|c->r[28]; // 800F2794
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F2798
  c->r[3]=c->r[1]+0x00000020u; // 800F279C
  c->r[5]=c->r[28]+0x00000004u; // 800F27A0
  c->r[6]=c->r[1]+0x0000001Cu; // 800F27A4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F27A8
  c->r[7]=c->r[1]+0x00000018u; // 800F27AC
  c->r[8]=c->r[1]+0x00000014u; // 800F27B0
  c->r[9]=c->r[1]+0x00000010u; // 800F27B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F27B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F27BC
  c->lr=0x800F27C4u; f_800EED14(c); // 800F27C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F27C4
  c->r[31]=c->r[3]|c->r[3]; // 800F27C8
  if (!crb(c,2)) { goto L_800F27EC; } // 800F27CC
  c->r[4]=R32(c->r[1]+0x00000018u); // 800F27D0
  c->r[3]=c->r[28]+0x00000007u; // 800F27D4
  c->r[5]=R32(c->r[1]+0x00000014u); // 800F27D8
  c->r[6]=R32(c->r[1]+0x00000010u); // 800F27DC
  c->lr=0x800F27E4u; f_800F25DC(c); // 800F27E0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800F27E4
  W8(c->r[28]+0x00000006u,c->r[0]); // 800F27E8
L_800F27EC:;
  c->r[3]=c->r[31]|c->r[31]; // 800F27EC
L_800F27F0:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800F27F0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800F27F4
  c->r[30]=R32(c->r[1]+0x00000068u); // 800F27F8
  c->r[29]=R32(c->r[1]+0x00000064u); // 800F27FC
  c->r[28]=R32(c->r[1]+0x00000060u); // 800F2800
  c->lr=c->r[0]; // 800F2804
  c->r[1]=c->r[1]+0x00000070u; // 800F2808
  return; // 800F280C
}

// nandGetStatusCallback
void f_800F2810(Ctx* __restrict c) {
  trace_call(0x800F2810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2810
  c->r[0]=c->lr; // 800F2814
  cmps(c,0,(int32_t)c->r[3],0); // 800F2818
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F281C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2820
  c->r[31]=c->r[4]|c->r[4]; // 800F2824
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2828
  c->r[30]=c->r[3]|c->r[3]; // 800F282C
  if (!crb(c,2)) { goto L_800F2854; } // 800F2830
  c->r[5]=R32(c->r[4]+0x00000014u); // 800F2834
  c->r[0]=R32(c->r[4]+0x00000020u); // 800F2838
  c->r[3]=c->r[5]+0x00000007u; // 800F283C
  W8(c->r[5]+0x00000006u,c->r[0]); // 800F2840
  c->r[4]=R32(c->r[4]+0x00000024u); // 800F2844
  c->r[5]=R32(c->r[31]+0x00000028u); // 800F2848
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 800F284C
  c->lr=0x800F2854u; f_800F25DC(c); // 800F2850
L_800F2854:;
  c->r[3]=c->r[30]|c->r[30]; // 800F2854
  c->lr=0x800F285Cu; f_800F3864(c); // 800F2858
  c->r[12]=R32(c->r[31]+0x00000004u); // 800F285C
  c->r[4]=c->r[31]|c->r[31]; // 800F2860
  c->ctr=c->r[12]; // 800F2864
  if (true) { c->lr=0x800F286Cu; dispatch(c,c->ctr); } // 800F2868
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F286C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2870
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2874
  c->lr=c->r[0]; // 800F2878
  c->r[1]=c->r[1]+0x00000010u; // 800F287C
  return; // 800F2880
}

// NANDGetStatus
void f_800F2884(Ctx* __restrict c) {
  trace_call(0x800F2884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2884
  c->r[0]=c->lr; // 800F2888
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F288C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2890
  c->r[31]=c->r[4]|c->r[4]; // 800F2894
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2898
  c->r[30]=c->r[3]|c->r[3]; // 800F289C
  c->lr=0x800F28A4u; f_800F384C(c); // 800F28A0
  cmps(c,0,(int32_t)c->r[3],0); // 800F28A4
  if (crb(c,2)) { goto L_800F28CC; } // 800F28A8
  c->r[3]=c->r[30]|c->r[30]; // 800F28AC
  c->r[4]=c->r[31]|c->r[31]; // 800F28B0
  c->r[5]=0u+0x00000000u; // 800F28B4
  c->r[6]=0u+0x00000000u; // 800F28B8
  c->r[7]=0u+0x00000000u; // 800F28BC
  c->lr=0x800F28C4u; f_800F26BC(c); // 800F28C0
  c->lr=0x800F28C8u; f_800F3864(c); // 800F28C4
  goto L_800F28D0; // 800F28C8
L_800F28CC:;
  c->r[3]=0u+0xFFFFFF80u; // 800F28CC
L_800F28D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F28D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F28D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F28D8
  c->lr=c->r[0]; // 800F28DC
  c->r[1]=c->r[1]+0x00000010u; // 800F28E0
  return; // 800F28E4
}

// NANDPrivateGetStatus
void f_800F28E8(Ctx* __restrict c) {
  trace_call(0x800F28E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F28E8
  c->r[0]=c->lr; // 800F28EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F28F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F28F4
  c->r[31]=c->r[4]|c->r[4]; // 800F28F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F28FC
  c->r[30]=c->r[3]|c->r[3]; // 800F2900
  c->lr=0x800F2908u; f_800F384C(c); // 800F2904
  cmps(c,0,(int32_t)c->r[3],0); // 800F2908
  if (crb(c,2)) { goto L_800F2930; } // 800F290C
  c->r[3]=c->r[30]|c->r[30]; // 800F2910
  c->r[4]=c->r[31]|c->r[31]; // 800F2914
  c->r[5]=0u+0x00000000u; // 800F2918
  c->r[6]=0u+0x00000000u; // 800F291C
  c->r[7]=0u+0x00000001u; // 800F2920
  c->lr=0x800F2928u; f_800F26BC(c); // 800F2924
  c->lr=0x800F292Cu; f_800F3864(c); // 800F2928
  goto L_800F2934; // 800F292C
L_800F2930:;
  c->r[3]=0u+0xFFFFFF80u; // 800F2930
L_800F2934:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2938
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F293C
  c->lr=c->r[0]; // 800F2940
  c->r[1]=c->r[1]+0x00000010u; // 800F2944
  return; // 800F2948
}

// NANDPrivateGetStatusAsync
void f_800F294C(Ctx* __restrict c) {
  trace_call(0x800F294Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F294C
  c->r[0]=c->lr; // 800F2950
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2954
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F2958
  c->r[31]=c->r[6]|c->r[6]; // 800F295C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2960
  c->r[30]=c->r[5]|c->r[5]; // 800F2964
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F2968
  c->r[29]=c->r[4]|c->r[4]; // 800F296C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F2970
  c->r[28]=c->r[3]|c->r[3]; // 800F2974
  c->lr=0x800F297Cu; f_800F384C(c); // 800F2978
  cmps(c,0,(int32_t)c->r[3],0); // 800F297C
  if (!crb(c,2)) { goto L_800F298C; } // 800F2980
  c->r[3]=0u+0xFFFFFF80u; // 800F2984
  goto L_800F29B0; // 800F2988
L_800F298C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F298C
  c->r[3]=c->r[28]|c->r[28]; // 800F2990
  c->r[4]=c->r[29]|c->r[29]; // 800F2994
  c->r[5]=c->r[31]|c->r[31]; // 800F2998
  W32(c->r[31]+0x00000014u,c->r[29]); // 800F299C
  c->r[6]=0u+0x00000001u; // 800F29A0
  c->r[7]=0u+0x00000001u; // 800F29A4
  c->lr=0x800F29ACu; f_800F26BC(c); // 800F29A8
  c->lr=0x800F29B0u; f_800F3864(c); // 800F29AC
L_800F29B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F29B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F29B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F29B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F29BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F29C0
  c->lr=c->r[0]; // 800F29C4
  c->r[1]=c->r[1]+0x00000020u; // 800F29C8
  return; // 800F29CC
}

// nandOpen
void f_800F29D0(Ctx* __restrict c) {
  trace_call(0x800F29D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F29D0
  c->r[0]=c->lr; // 800F29D4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F29D8
  c->r[11]=c->r[1]+0x00000060u; // 800F29DC
  c->lr=0x800F29E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F29E0
  c->r[0]=0u+0x00000000u; // 800F29E4
  c->r[27]=c->r[4]|c->r[4]; // 800F29E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F29EC
  c->r[4]=c->r[3]|c->r[3]; // 800F29F0
  c->r[28]=c->r[5]|c->r[5]; // 800F29F4
  c->r[29]=c->r[6]|c->r[6]; // 800F29F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F29FC
  c->r[30]=c->r[7]|c->r[7]; // 800F2A00
  c->r[3]=c->r[1]+0x00000008u; // 800F2A04
  c->r[31]=0u+0x00000000u; // 800F2A08
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F2A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2A10
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F2A14
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F2A18
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F2A1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2A20
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F2A24
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F2A28
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F2A2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F2A30
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F2A34
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F2A38
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F2A3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F2A40
  c->lr=0x800F2A48u; f_800F39C4(c); // 800F2A44
  cmps(c,0,(int32_t)c->r[30],0); // 800F2A48
  if (!crb(c,2)) { goto L_800F2A68; } // 800F2A4C
  c->r[3]=c->r[1]+0x00000008u; // 800F2A50
  c->lr=0x800F2A58u; f_800F37C0(c); // 800F2A54
  cmps(c,0,(int32_t)c->r[3],0); // 800F2A58
  if (crb(c,2)) { goto L_800F2A68; } // 800F2A5C
  c->r[3]=0u+0xFFFFFF9Au; // 800F2A60
  goto L_800F2ACC; // 800F2A64
L_800F2A68:;
  cmps(c,0,(int32_t)c->r[27],2); // 800F2A68
  if (crb(c,2)) { goto L_800F2A98; } // 800F2A6C
  if (!crb(c,0)) { goto L_800F2A80; } // 800F2A70
  cmps(c,0,(int32_t)c->r[27],1); // 800F2A74
  if (!crb(c,0)) { goto L_800F2A90; } // 800F2A78
  goto L_800F2A9C; // 800F2A7C
L_800F2A80:;
  cmps(c,0,(int32_t)c->r[27],4); // 800F2A80
  if (!crb(c,0)) { goto L_800F2A9C; } // 800F2A84
  c->r[31]=0u+0x00000003u; // 800F2A88
  goto L_800F2A9C; // 800F2A8C
L_800F2A90:;
  c->r[31]=0u+0x00000001u; // 800F2A90
  goto L_800F2A9C; // 800F2A94
L_800F2A98:;
  c->r[31]=0u+0x00000002u; // 800F2A98
L_800F2A9C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F2A9C
  if (crb(c,2)) { goto L_800F2AC0; } // 800F2AA0
  c->r[5]=0u+0x800F0000u; // 800F2AA4
  c->r[4]=c->r[31]|c->r[31]; // 800F2AA8
  c->r[6]=c->r[28]|c->r[28]; // 800F2AAC
  c->r[3]=c->r[1]+0x00000008u; // 800F2AB0
  c->r[5]=c->r[5]+0x00002CECu; // 800F2AB4
  c->lr=0x800F2ABCu; f_800EF634(c); // 800F2AB8
  goto L_800F2ACC; // 800F2ABC
L_800F2AC0:;
  c->r[4]=c->r[31]|c->r[31]; // 800F2AC0
  c->r[3]=c->r[1]+0x00000008u; // 800F2AC4
  c->lr=0x800F2ACCu; f_800EF56C(c); // 800F2AC8
L_800F2ACC:;
  c->r[11]=c->r[1]+0x00000060u; // 800F2ACC
  c->lr=0x800F2AD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F2AD0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F2AD4
  c->lr=c->r[0]; // 800F2AD8
  c->r[1]=c->r[1]+0x00000060u; // 800F2ADC
  return; // 800F2AE0
}

// NANDOpen
void f_800F2AE4(Ctx* __restrict c) {
  trace_call(0x800F2AE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2AE4
  c->r[0]=c->lr; // 800F2AE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2AEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F2AF0
  c->r[31]=c->r[5]|c->r[5]; // 800F2AF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2AF8
  c->r[30]=c->r[4]|c->r[4]; // 800F2AFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F2B00
  c->r[29]=c->r[3]|c->r[3]; // 800F2B04
  c->lr=0x800F2B0Cu; f_800F384C(c); // 800F2B08
  cmps(c,0,(int32_t)c->r[3],0); // 800F2B0C
  if (!crb(c,2)) { goto L_800F2B1C; } // 800F2B10
  c->r[3]=0u+0xFFFFFF80u; // 800F2B14
  goto L_800F2B54; // 800F2B18
L_800F2B1C:;
  c->r[3]=c->r[29]|c->r[29]; // 800F2B1C
  c->r[4]=c->r[31]|c->r[31]; // 800F2B20
  c->r[5]=0u+0x00000000u; // 800F2B24
  c->r[6]=0u+0x00000000u; // 800F2B28
  c->r[7]=0u+0x00000000u; // 800F2B2C
  c->lr=0x800F2B34u; f_800F29D0(c); // 800F2B30
  cmps(c,0,(int32_t)c->r[3],0); // 800F2B34
  if (crb(c,0)) { goto L_800F2B50; } // 800F2B38
  c->r[0]=0u+0x00000001u; // 800F2B3C
  W32(c->r[30]+0x00000000u,c->r[3]); // 800F2B40
  c->r[3]=0u+0x00000000u; // 800F2B44
  W8(c->r[30]+0x0000008Au,c->r[0]); // 800F2B48
  goto L_800F2B54; // 800F2B4C
L_800F2B50:;
  c->lr=0x800F2B54u; f_800F3864(c); // 800F2B50
L_800F2B54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2B54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F2B58
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F2B5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F2B60
  c->lr=c->r[0]; // 800F2B64
  c->r[1]=c->r[1]+0x00000020u; // 800F2B68
  return; // 800F2B6C
}

// NANDPrivateOpen
void f_800F2B70(Ctx* __restrict c) {
  trace_call(0x800F2B70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2B70
  c->r[0]=c->lr; // 800F2B74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2B78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F2B7C
  c->r[31]=c->r[5]|c->r[5]; // 800F2B80
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2B84
  c->r[30]=c->r[4]|c->r[4]; // 800F2B88
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F2B8C
  c->r[29]=c->r[3]|c->r[3]; // 800F2B90
  c->lr=0x800F2B98u; f_800F384C(c); // 800F2B94
  cmps(c,0,(int32_t)c->r[3],0); // 800F2B98
  if (!crb(c,2)) { goto L_800F2BA8; } // 800F2B9C
  c->r[3]=0u+0xFFFFFF80u; // 800F2BA0
  goto L_800F2BE0; // 800F2BA4
L_800F2BA8:;
  c->r[3]=c->r[29]|c->r[29]; // 800F2BA8
  c->r[4]=c->r[31]|c->r[31]; // 800F2BAC
  c->r[5]=0u+0x00000000u; // 800F2BB0
  c->r[6]=0u+0x00000000u; // 800F2BB4
  c->r[7]=0u+0x00000001u; // 800F2BB8
  c->lr=0x800F2BC0u; f_800F29D0(c); // 800F2BBC
  cmps(c,0,(int32_t)c->r[3],0); // 800F2BC0
  if (crb(c,0)) { goto L_800F2BDC; } // 800F2BC4
  c->r[0]=0u+0x00000001u; // 800F2BC8
  W32(c->r[30]+0x00000000u,c->r[3]); // 800F2BCC
  c->r[3]=0u+0x00000000u; // 800F2BD0
  W8(c->r[30]+0x0000008Au,c->r[0]); // 800F2BD4
  goto L_800F2BE0; // 800F2BD8
L_800F2BDC:;
  c->lr=0x800F2BE0u; f_800F3864(c); // 800F2BDC
L_800F2BE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2BE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F2BE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F2BE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F2BEC
  c->lr=c->r[0]; // 800F2BF0
  c->r[1]=c->r[1]+0x00000020u; // 800F2BF4
  return; // 800F2BF8
}

// NANDOpenAsync
void f_800F2BFC(Ctx* __restrict c) {
  trace_call(0x800F2BFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2BFC
  c->r[0]=c->lr; // 800F2C00
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2C04
  c->r[11]=c->r[1]+0x00000020u; // 800F2C08
  c->lr=0x800F2C10u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2C0C
  c->r[27]=c->r[3]|c->r[3]; // 800F2C10
  c->r[28]=c->r[4]|c->r[4]; // 800F2C14
  c->r[29]=c->r[5]|c->r[5]; // 800F2C18
  c->r[30]=c->r[6]|c->r[6]; // 800F2C1C
  c->r[31]=c->r[7]|c->r[7]; // 800F2C20
  c->lr=0x800F2C28u; f_800F384C(c); // 800F2C24
  cmps(c,0,(int32_t)c->r[3],0); // 800F2C28
  if (!crb(c,2)) { goto L_800F2C38; } // 800F2C2C
  c->r[3]=0u+0xFFFFFF80u; // 800F2C30
  goto L_800F2C5C; // 800F2C34
L_800F2C38:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F2C38
  c->r[3]=c->r[27]|c->r[27]; // 800F2C3C
  c->r[4]=c->r[29]|c->r[29]; // 800F2C40
  c->r[5]=c->r[31]|c->r[31]; // 800F2C44
  W32(c->r[31]+0x00000008u,c->r[28]); // 800F2C48
  c->r[6]=0u+0x00000001u; // 800F2C4C
  c->r[7]=0u+0x00000000u; // 800F2C50
  c->lr=0x800F2C58u; f_800F29D0(c); // 800F2C54
  c->lr=0x800F2C5Cu; f_800F3864(c); // 800F2C58
L_800F2C5C:;
  c->r[11]=c->r[1]+0x00000020u; // 800F2C5C
  c->lr=0x800F2C64u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F2C60
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2C64
  c->lr=c->r[0]; // 800F2C68
  c->r[1]=c->r[1]+0x00000020u; // 800F2C6C
  return; // 800F2C70
}

// NANDPrivateOpenAsync
void f_800F2C74(Ctx* __restrict c) {
  trace_call(0x800F2C74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2C74
  c->r[0]=c->lr; // 800F2C78
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2C7C
  c->r[11]=c->r[1]+0x00000020u; // 800F2C80
  c->lr=0x800F2C88u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2C84
  c->r[27]=c->r[3]|c->r[3]; // 800F2C88
  c->r[28]=c->r[4]|c->r[4]; // 800F2C8C
  c->r[29]=c->r[5]|c->r[5]; // 800F2C90
  c->r[30]=c->r[6]|c->r[6]; // 800F2C94
  c->r[31]=c->r[7]|c->r[7]; // 800F2C98
  c->lr=0x800F2CA0u; f_800F384C(c); // 800F2C9C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2CA0
  if (!crb(c,2)) { goto L_800F2CB0; } // 800F2CA4
  c->r[3]=0u+0xFFFFFF80u; // 800F2CA8
  goto L_800F2CD4; // 800F2CAC
L_800F2CB0:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F2CB0
  c->r[3]=c->r[27]|c->r[27]; // 800F2CB4
  c->r[4]=c->r[29]|c->r[29]; // 800F2CB8
  c->r[5]=c->r[31]|c->r[31]; // 800F2CBC
  W32(c->r[31]+0x00000008u,c->r[28]); // 800F2CC0
  c->r[6]=0u+0x00000001u; // 800F2CC4
  c->r[7]=0u+0x00000001u; // 800F2CC8
  c->lr=0x800F2CD0u; f_800F29D0(c); // 800F2CCC
  c->lr=0x800F2CD4u; f_800F3864(c); // 800F2CD0
L_800F2CD4:;
  c->r[11]=c->r[1]+0x00000020u; // 800F2CD4
  c->lr=0x800F2CDCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F2CD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2CDC
  c->lr=c->r[0]; // 800F2CE0
  c->r[1]=c->r[1]+0x00000020u; // 800F2CE4
  return; // 800F2CE8
}

// nandOpenCallback
void f_800F2CEC(Ctx* __restrict c) {
  trace_call(0x800F2CECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2CEC
  c->r[0]=c->lr; // 800F2CF0
  cmps(c,0,(int32_t)c->r[3],0); // 800F2CF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2CF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2CFC
  c->r[31]=c->r[4]|c->r[4]; // 800F2D00
  if (crb(c,0)) { goto L_800F2D3C; } // 800F2D04
  c->r[5]=R32(c->r[4]+0x00000008u); // 800F2D08
  c->r[6]=0u+0x00000002u; // 800F2D0C
  c->r[0]=0u+0x00000001u; // 800F2D10
  W32(c->r[5]+0x00000000u,c->r[3]); // 800F2D14
  c->r[3]=0u+0x00000000u; // 800F2D18
  c->r[5]=R32(c->r[4]+0x00000008u); // 800F2D1C
  W8(c->r[5]+0x00000089u,c->r[6]); // 800F2D20
  c->r[5]=R32(c->r[4]+0x00000008u); // 800F2D24
  W8(c->r[5]+0x0000008Au,c->r[0]); // 800F2D28
  c->r[12]=R32(c->r[4]+0x00000004u); // 800F2D2C
  c->ctr=c->r[12]; // 800F2D30
  if (true) { c->lr=0x800F2D38u; dispatch(c,c->ctr); } // 800F2D34
  goto L_800F2D50; // 800F2D38
L_800F2D3C:;
  c->lr=0x800F2D40u; f_800F3864(c); // 800F2D3C
  c->r[12]=R32(c->r[31]+0x00000004u); // 800F2D40
  c->r[4]=c->r[31]|c->r[31]; // 800F2D44
  c->ctr=c->r[12]; // 800F2D48
  if (true) { c->lr=0x800F2D50u; dispatch(c,c->ctr); } // 800F2D4C
L_800F2D50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2D50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2D54
  c->lr=c->r[0]; // 800F2D58
  c->r[1]=c->r[1]+0x00000010u; // 800F2D5C
  return; // 800F2D60
}

// NANDClose
void f_800F2D64(Ctx* __restrict c) {
  trace_call(0x800F2D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2D64
  c->r[0]=c->lr; // 800F2D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2D6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2D70
  c->r[31]=c->r[3]|c->r[3]; // 800F2D74
  c->lr=0x800F2D7Cu; f_800F384C(c); // 800F2D78
  cmps(c,0,(int32_t)c->r[3],0); // 800F2D7C
  if (!crb(c,2)) { goto L_800F2D8C; } // 800F2D80
  c->r[3]=0u+0xFFFFFF80u; // 800F2D84
  goto L_800F2DBC; // 800F2D88
L_800F2D8C:;
  c->r[0]=R8(c->r[31]+0x0000008Au); // 800F2D8C
  cmpu(c,0,c->r[0],0x00000001u); // 800F2D90
  if (crb(c,2)) { goto L_800F2DA0; } // 800F2D94
  c->r[3]=0u+0xFFFFFFF8u; // 800F2D98
  goto L_800F2DBC; // 800F2D9C
L_800F2DA0:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F2DA0
  c->lr=0x800F2DA8u; f_800EF9D4(c); // 800F2DA4
  cmps(c,0,(int32_t)c->r[3],0); // 800F2DA8
  if (!crb(c,2)) { goto L_800F2DB8; } // 800F2DAC
  c->r[0]=0u+0x00000002u; // 800F2DB0
  W8(c->r[31]+0x0000008Au,c->r[0]); // 800F2DB4
L_800F2DB8:;
  c->lr=0x800F2DBCu; f_800F3864(c); // 800F2DB8
L_800F2DBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2DBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2DC0
  c->lr=c->r[0]; // 800F2DC4
  c->r[1]=c->r[1]+0x00000010u; // 800F2DC8
  return; // 800F2DCC
}

// NANDCloseAsync
void f_800F2DD0(Ctx* __restrict c) {
  trace_call(0x800F2DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2DD0
  c->r[0]=c->lr; // 800F2DD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2DD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F2DDC
  c->r[31]=c->r[5]|c->r[5]; // 800F2DE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2DE4
  c->r[30]=c->r[4]|c->r[4]; // 800F2DE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F2DEC
  c->r[29]=c->r[3]|c->r[3]; // 800F2DF0
  c->lr=0x800F2DF8u; f_800F384C(c); // 800F2DF4
  cmps(c,0,(int32_t)c->r[3],0); // 800F2DF8
  if (!crb(c,2)) { goto L_800F2E08; } // 800F2DFC
  c->r[3]=0u+0xFFFFFF80u; // 800F2E00
  goto L_800F2E3C; // 800F2E04
L_800F2E08:;
  c->r[0]=R8(c->r[29]+0x0000008Au); // 800F2E08
  cmpu(c,0,c->r[0],0x00000001u); // 800F2E0C
  if (crb(c,2)) { goto L_800F2E1C; } // 800F2E10
  c->r[3]=0u+0xFFFFFFF8u; // 800F2E14
  goto L_800F2E3C; // 800F2E18
L_800F2E1C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800F2E1C
  c->r[4]=0u+0x800F0000u; // 800F2E20
  c->r[5]=c->r[31]|c->r[31]; // 800F2E24
  W32(c->r[31]+0x00000008u,c->r[29]); // 800F2E28
  c->r[4]=c->r[4]+0x000033E8u; // 800F2E2C
  c->r[3]=R32(c->r[29]+0x00000000u); // 800F2E30
  c->lr=0x800F2E38u; f_800EF9D8(c); // 800F2E34
  c->lr=0x800F2E3Cu; f_800F3864(c); // 800F2E38
L_800F2E3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2E3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F2E40
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F2E44
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F2E48
  c->lr=c->r[0]; // 800F2E4C
  c->r[1]=c->r[1]+0x00000020u; // 800F2E50
  return; // 800F2E54
}

// NANDSimpleSafeOpen
void f_800F2E58(Ctx* __restrict c) {
  trace_call(0x800F2E58u);
  c->r[8]=0u+0x00000000u; // 800F2E58
  c->r[9]=0u+0x00000001u; // 800F2E5C
  f_800F2E64(c); return; // 800F2E60
}

// nandSafeOpen
void f_800F2E64(Ctx* __restrict c) {
  trace_call(0x800F2E64u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2E64
  c->r[0]=c->lr; // 800F2E68
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F2E6C
  c->r[11]=c->r[1]+0x00000090u; // 800F2E70
  c->lr=0x800F2E78u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2E74
  c->r[25]=c->r[3]|c->r[3]; // 800F2E78
  c->r[28]=c->r[4]|c->r[4]; // 800F2E7C
  c->r[27]=c->r[5]|c->r[5]; // 800F2E80
  c->r[29]=c->r[6]|c->r[6]; // 800F2E84
  c->r[30]=c->r[7]|c->r[7]; // 800F2E88
  c->r[26]=c->r[8]|c->r[8]; // 800F2E8C
  c->r[31]=c->r[9]|c->r[9]; // 800F2E90
  c->lr=0x800F2E98u; f_800F384C(c); // 800F2E94
  cmps(c,0,(int32_t)c->r[3],0); // 800F2E98
  if (!crb(c,2)) { goto L_800F2EA8; } // 800F2E9C
  c->r[3]=0u+0xFFFFFF80u; // 800F2EA0
  goto L_800F31F4; // 800F2EA4
L_800F2EA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F2EA8
  if (crb(c,2)) { goto L_800F2EC0; } // 800F2EAC
  c->r[0]=rotl(c->r[30],0)&0x00003FFFu; cr0(c,c->r[0]); // 800F2EB0
  if (crb(c,2)) { goto L_800F2EC0; } // 800F2EB4
  c->r[3]=0u+0xFFFFFFF8u; // 800F2EB8
  goto L_800F31F4; // 800F2EBC
L_800F2EC0:;
  c->r[0]=0u+0x00000000u; // 800F2EC0
  W8(c->r[28]+0x00000088u,c->r[27]); // 800F2EC4
  c->r[4]=c->r[25]|c->r[25]; // 800F2EC8
  c->r[3]=c->r[28]+0x00000008u; // 800F2ECC
  W8(c->r[28]+0x00000089u,c->r[0]); // 800F2ED0
  c->lr=0x800F2ED8u; f_800F39C4(c); // 800F2ED4
  cmps(c,0,(int32_t)c->r[26],0); // 800F2ED8
  if (!crb(c,2)) { goto L_800F2EF8; } // 800F2EDC
  c->r[3]=c->r[28]+0x00000008u; // 800F2EE0
  c->lr=0x800F2EE8u; f_800F37C0(c); // 800F2EE4
  cmps(c,0,(int32_t)c->r[3],0); // 800F2EE8
  if (crb(c,2)) { goto L_800F2EF8; } // 800F2EEC
  c->r[3]=0u+0xFFFFFFFFu; // 800F2EF0
  goto L_800F31F4; // 800F2EF4
L_800F2EF8:;
  cmpu(c,0,c->r[27],0x00000001u); // 800F2EF8
  if (!crb(c,2)) { goto L_800F2F4C; } // 800F2EFC
  c->r[3]=c->r[28]+0x00000008u; // 800F2F00
  c->r[4]=0u+0x00000001u; // 800F2F04
  c->lr=0x800F2F0Cu; f_800EF56C(c); // 800F2F08
  cmps(c,0,(int32_t)c->r[3],0); // 800F2F0C
  if (crb(c,0)) { goto L_800F2F44; } // 800F2F10
  c->r[0]=0u+0x00000002u; // 800F2F14
  cmps(c,0,(int32_t)c->r[31],0); // 800F2F18
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F2F1C
  W8(c->r[28]+0x00000089u,c->r[0]); // 800F2F20
  if (!crb(c,2)) { goto L_800F2F34; } // 800F2F24
  c->r[0]=0u+0x00000003u; // 800F2F28
  W8(c->r[28]+0x0000008Au,c->r[0]); // 800F2F2C
  goto L_800F2F3C; // 800F2F30
L_800F2F34:;
  c->r[0]=0u+0x00000005u; // 800F2F34
  W8(c->r[28]+0x0000008Au,c->r[0]); // 800F2F38
L_800F2F3C:;
  c->r[3]=0u+0x00000000u; // 800F2F3C
  goto L_800F31F4; // 800F2F40
L_800F2F44:;
  c->lr=0x800F2F48u; f_800F3864(c); // 800F2F44
  goto L_800F31F4; // 800F2F48
L_800F2F4C:;
  c->r[0]=c->r[27]+0x000000FEu; // 800F2F4C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800F2F50
  cmpu(c,0,c->r[0],0x00000001u); // 800F2F54
  if (crb(c,1)) { goto L_800F31F0; } // 800F2F58
  c->r[0]=0u+0x00000000u; // 800F2F5C
  c->r[3]=0u+0x80280000u; // 800F2F60
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F2F64
  c->r[3]=c->r[3]+0xFFFFB360u; // 800F2F68
  c->r[26]=0u+0xFFFFFFFFu; // 800F2F6C
  c->r[4]=0u+0x00000000u; // 800F2F70
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2F74
  c->r[5]=0u+0x00000003u; // 800F2F78
  c->r[6]=0u+0x00000003u; // 800F2F7C
  c->r[7]=0u+0x00000003u; // 800F2F80
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F2F84
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 800F2F88
  c->lr=0x800F2F90u; f_800EE890(c); // 800F2F8C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2F90
  if (crb(c,2)) { goto L_800F2FA8; } // 800F2F94
  cmps(c,0,(int32_t)c->r[3],-105); // 800F2F98
  if (crb(c,2)) { goto L_800F2FA8; } // 800F2F9C
  c->lr=0x800F2FA4u; f_800F3864(c); // 800F2FA0
  goto L_800F31F4; // 800F2FA4
L_800F2FA8:;
  c->r[0]=0u+0x00000001u; // 800F2FA8
  c->r[3]=c->r[28]+0x00000008u; // 800F2FAC
  W8(c->r[28]+0x00000089u,c->r[0]); // 800F2FB0
  c->r[4]=c->r[1]+0x0000001Cu; // 800F2FB4
  c->r[5]=c->r[1]+0x00000008u; // 800F2FB8
  c->r[6]=c->r[1]+0x00000018u; // 800F2FBC
  c->r[7]=c->r[1]+0x00000014u; // 800F2FC0
  c->r[8]=c->r[1]+0x00000010u; // 800F2FC4
  c->r[9]=c->r[1]+0x0000000Cu; // 800F2FC8
  c->lr=0x800F2FD0u; f_800EED14(c); // 800F2FCC
  cmps(c,0,(int32_t)c->r[3],0); // 800F2FD0
  if (crb(c,2)) { goto L_800F2FE0; } // 800F2FD4
  c->lr=0x800F2FDCu; f_800F3864(c); // 800F2FD8
  goto L_800F31F4; // 800F2FDC
L_800F2FE0:;
  c->r[3]=c->r[28]+0x00000008u; // 800F2FE0
  c->r[4]=0u+0x00000001u; // 800F2FE4
  c->lr=0x800F2FECu; f_800EF56C(c); // 800F2FE8
  cmps(c,0,(int32_t)c->r[3],0); // 800F2FEC
  W32(c->r[28]+0x00000004u,c->r[3]); // 800F2FF0
  if (!crb(c,0)) { goto L_800F3000; } // 800F2FF4
  c->lr=0x800F2FFCu; f_800F3864(c); // 800F2FF8
  goto L_800F31F4; // 800F2FFC
L_800F3000:;
  c->r[0]=0u+0x00000002u; // 800F3000
  cmps(c,0,(int32_t)c->r[31],0); // 800F3004
  W8(c->r[28]+0x00000089u,c->r[0]); // 800F3008
  if (!crb(c,2)) { goto L_800F3070; } // 800F300C
  c->lr=0x800F3014u; f_800B087C(c); // 800F3010
  c->r[26]=R32(c->r[13]+0xFFFF92D8u); // 800F3014
  c->r[0]=c->r[26]+0x00000001u; // 800F3018
  W32(c->r[13]+0xFFFF92D8u,c->r[0]); // 800F301C
  c->lr=0x800F3024u; f_800B08A4(c); // 800F3020
  c->r[5]=0u+0x80280000u; // 800F3024
  c->r[6]=c->r[26]|c->r[26]; // 800F3028
  c->r[3]=c->r[1]+0x00000030u; // 800F302C
  c->r[4]=c->r[13]+0xFFFF82C0u; // 800F3030
  c->r[5]=c->r[5]+0xFFFFB360u; // 800F3034
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3038
  c->lr=0x800F3040u; f_800DA3C8(c); // 800F303C
  c->r[3]=c->r[1]+0x00000030u; // 800F3040
  c->r[4]=0u+0x00000000u; // 800F3044
  c->r[5]=0u+0x00000003u; // 800F3048
  c->r[6]=0u+0x00000000u; // 800F304C
  c->r[7]=0u+0x00000000u; // 800F3050
  c->lr=0x800F3058u; f_800EE890(c); // 800F3054
  cmps(c,0,(int32_t)c->r[3],0); // 800F3058
  if (crb(c,2)) { goto L_800F3068; } // 800F305C
  c->lr=0x800F3064u; f_800F3864(c); // 800F3060
  goto L_800F31F4; // 800F3064
L_800F3068:;
  c->r[0]=0u+0x00000003u; // 800F3068
  W8(c->r[28]+0x00000089u,c->r[0]); // 800F306C
L_800F3070:;
  c->r[3]=c->r[1]+0x00000020u; // 800F3070
  c->r[4]=c->r[28]+0x00000008u; // 800F3074
  c->lr=0x800F307Cu; f_800F35EC(c); // 800F3078
  cmps(c,0,(int32_t)c->r[31],0); // 800F307C
  if (!crb(c,2)) { goto L_800F30AC; } // 800F3080
  c->r[4]=0u+0x80280000u; // 800F3084
  c->r[5]=0u+0x80280000u; // 800F3088
  c->r[6]=c->r[26]|c->r[26]; // 800F308C
  c->r[3]=c->r[28]+0x00000048u; // 800F3090
  c->r[4]=c->r[4]+0xFFFFB36Cu; // 800F3094
  c->r[5]=c->r[5]+0xFFFFB360u; // 800F3098
  c->r[7]=c->r[1]+0x00000020u; // 800F309C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F30A0
  c->lr=0x800F30A8u; f_800DA3C8(c); // 800F30A4
  goto L_800F30C8; // 800F30A8
L_800F30AC:;
  c->r[5]=0u+0x80280000u; // 800F30AC
  c->r[3]=c->r[28]+0x00000048u; // 800F30B0
  c->r[5]=c->r[5]+0xFFFFB360u; // 800F30B4
  c->r[6]=c->r[1]+0x00000020u; // 800F30B8
  c->r[4]=c->r[13]+0xFFFF82C8u; // 800F30BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F30C0
  c->lr=0x800F30C8u; f_800DA3C8(c); // 800F30C4
L_800F30C8:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 800F30C8
  c->r[3]=c->r[28]+0x00000048u; // 800F30CC
  c->r[5]=R32(c->r[1]+0x00000014u); // 800F30D0
  c->r[6]=R32(c->r[1]+0x00000010u); // 800F30D4
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 800F30D8
  c->lr=0x800F30E0u; f_800EF384(c); // 800F30DC
  cmps(c,0,(int32_t)c->r[3],0); // 800F30E0
  if (crb(c,2)) { goto L_800F30F0; } // 800F30E4
  c->lr=0x800F30ECu; f_800F3864(c); // 800F30E8
  goto L_800F31F4; // 800F30EC
L_800F30F0:;
  c->r[0]=0u+0x00000004u; // 800F30F0
  cmpu(c,0,c->r[27],0x00000002u); // 800F30F4
  W8(c->r[28]+0x00000089u,c->r[0]); // 800F30F8
  if (!crb(c,2)) { goto L_800F3114; } // 800F30FC
  c->r[3]=c->r[28]+0x00000048u; // 800F3100
  c->r[4]=0u+0x00000002u; // 800F3104
  c->lr=0x800F310Cu; f_800EF56C(c); // 800F3108
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F310C
  goto L_800F312C; // 800F3110
L_800F3114:;
  cmpu(c,0,c->r[27],0x00000003u); // 800F3114
  if (!crb(c,2)) { goto L_800F312C; } // 800F3118
  c->r[3]=c->r[28]+0x00000048u; // 800F311C
  c->r[4]=0u+0x00000003u; // 800F3120
  c->lr=0x800F3128u; f_800EF56C(c); // 800F3124
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F3128
L_800F312C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800F312C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3130
  if (!crb(c,0)) { goto L_800F3140; } // 800F3134
  c->lr=0x800F313Cu; f_800F3864(c); // 800F3138
  goto L_800F31F4; // 800F313C
L_800F3140:;
  c->r[0]=0u+0x00000005u; // 800F3140
  c->r[26]=R32(c->r[28]+0x00000004u); // 800F3144
  W8(c->r[28]+0x00000089u,c->r[0]); // 800F3148
  c->r[27]=c->r[3]|c->r[3]; // 800F314C
L_800F3150:;
  c->r[3]=c->r[26]|c->r[26]; // 800F3150
  c->r[4]=c->r[29]|c->r[29]; // 800F3154
  c->r[5]=c->r[30]|c->r[30]; // 800F3158
  c->lr=0x800F3160u; f_800EF84C(c); // 800F315C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3160
  c->r[5]=c->r[3]|c->r[3]; // 800F3164
  if (!crb(c,2)) { goto L_800F3174; } // 800F3168
  c->r[5]=0u+0x00000000u; // 800F316C
  goto L_800F3194; // 800F3170
L_800F3174:;
  if (!crb(c,0)) { goto L_800F317C; } // 800F3174
  goto L_800F3194; // 800F3178
L_800F317C:;
  c->r[3]=c->r[27]|c->r[27]; // 800F317C
  c->r[4]=c->r[29]|c->r[29]; // 800F3180
  c->lr=0x800F3188u; f_800EF910(c); // 800F3184
  cmps(c,0,(int32_t)c->r[3],0); // 800F3188
  if (!crb(c,0)) { IRQCHK(c); goto L_800F3150; } // 800F318C
  c->r[5]=c->r[3]|c->r[3]; // 800F3190
L_800F3194:;
  cmps(c,0,(int32_t)c->r[5],0); // 800F3194
  if (crb(c,2)) { goto L_800F31A8; } // 800F3198
  c->r[3]=c->r[5]|c->r[5]; // 800F319C
  c->lr=0x800F31A4u; f_800F3864(c); // 800F31A0
  goto L_800F31F4; // 800F31A4
L_800F31A8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800F31A8
  c->r[4]=0u+0x00000000u; // 800F31AC
  c->r[5]=0u+0x00000000u; // 800F31B0
  c->lr=0x800F31B8u; f_800EF7BC(c); // 800F31B4
  cmps(c,0,(int32_t)c->r[3],0); // 800F31B8
  if (crb(c,2)) { goto L_800F31C8; } // 800F31BC
  c->lr=0x800F31C4u; f_800F3864(c); // 800F31C0
  goto L_800F31F4; // 800F31C4
L_800F31C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F31C8
  if (crb(c,2)) { goto L_800F31DC; } // 800F31CC
  c->r[0]=0u+0x00000005u; // 800F31D0
  W8(c->r[28]+0x0000008Au,c->r[0]); // 800F31D4
  goto L_800F31E4; // 800F31D8
L_800F31DC:;
  c->r[0]=0u+0x00000003u; // 800F31DC
  W8(c->r[28]+0x0000008Au,c->r[0]); // 800F31E0
L_800F31E4:;
  c->r[3]=0u+0x00000000u; // 800F31E4
  c->lr=0x800F31ECu; f_800F3864(c); // 800F31E8
  goto L_800F31F4; // 800F31EC
L_800F31F0:;
  c->r[3]=0u+0xFFFFFFF8u; // 800F31F0
L_800F31F4:;
  c->r[11]=c->r[1]+0x00000090u; // 800F31F4
  c->lr=0x800F31FCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F31F8
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F31FC
  c->lr=c->r[0]; // 800F3200
  c->r[1]=c->r[1]+0x00000090u; // 800F3204
  return; // 800F3208
}

// NANDSimpleSafeClose
void f_800F320C(Ctx* __restrict c) {
  trace_call(0x800F320Cu);
  c->r[4]=0u+0x00000001u; // 800F320C
  f_800F3214(c); return; // 800F3210
}

// nandSafeClose
void f_800F3214(Ctx* __restrict c) {
  trace_call(0x800F3214u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3214
  c->r[0]=c->lr; // 800F3218
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F321C
  c->r[0]=0u+0x00000000u; // 800F3220
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800F3224
  W32(c->r[1]+0x00000058u,c->r[30]); // 800F3228
  c->r[30]=c->r[4]|c->r[4]; // 800F322C
  W32(c->r[1]+0x00000054u,c->r[29]); // 800F3230
  c->r[29]=c->r[3]|c->r[3]; // 800F3234
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F3238
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F323C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F3240
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3244
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F3248
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F324C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F3250
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3254
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F3258
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F325C
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F3260
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F3264
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F3268
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F326C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F3270
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F3274
  c->lr=0x800F327Cu; f_800F384C(c); // 800F3278
  cmps(c,0,(int32_t)c->r[3],0); // 800F327C
  if (!crb(c,2)) { goto L_800F328C; } // 800F3280
  c->r[3]=0u+0xFFFFFF80u; // 800F3284
  goto L_800F33CC; // 800F3288
L_800F328C:;
  c->r[0]=R8(c->r[29]+0x0000008Au); // 800F328C
  cmpu(c,0,c->r[0],0x00000003u); // 800F3290
  if (!crb(c,2)) { goto L_800F32A0; } // 800F3294
  cmps(c,0,(int32_t)c->r[30],0); // 800F3298
  if (crb(c,2)) { goto L_800F32B8; } // 800F329C
L_800F32A0:;
  cmpu(c,0,c->r[0],0x00000005u); // 800F32A0
  if (!crb(c,2)) { goto L_800F32B0; } // 800F32A4
  cmps(c,0,(int32_t)c->r[30],0); // 800F32A8
  if (!crb(c,2)) { goto L_800F32B8; } // 800F32AC
L_800F32B0:;
  c->r[3]=0u+0xFFFFFFF8u; // 800F32B0
  goto L_800F33CC; // 800F32B4
L_800F32B8:;
  c->r[3]=R8(c->r[29]+0x00000088u); // 800F32B8
  cmpu(c,0,c->r[3],0x00000001u); // 800F32BC
  if (!crb(c,2)) { goto L_800F3300; } // 800F32C0
  c->r[3]=R32(c->r[29]+0x00000000u); // 800F32C4
  c->lr=0x800F32CCu; f_800EF9D4(c); // 800F32C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F32CC
  if (!crb(c,2)) { goto L_800F32F8; } // 800F32D0
  c->r[0]=0u+0x00000007u; // 800F32D4
  cmps(c,0,(int32_t)c->r[30],0); // 800F32D8
  W8(c->r[29]+0x00000089u,c->r[0]); // 800F32DC
  if (!crb(c,2)) { goto L_800F32F0; } // 800F32E0
  c->r[0]=0u+0x00000004u; // 800F32E4
  W8(c->r[29]+0x0000008Au,c->r[0]); // 800F32E8
  goto L_800F32F8; // 800F32EC
L_800F32F0:;
  c->r[0]=0u+0x00000006u; // 800F32F0
  W8(c->r[29]+0x0000008Au,c->r[0]); // 800F32F4
L_800F32F8:;
  c->lr=0x800F32FCu; f_800F3864(c); // 800F32F8
  goto L_800F33CC; // 800F32FC
L_800F3300:;
  c->r[0]=c->r[3]+0x000000FEu; // 800F3300
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800F3304
  cmpu(c,0,c->r[0],0x00000001u); // 800F3308
  if (crb(c,1)) { goto L_800F33B8; } // 800F330C
  c->r[3]=R32(c->r[29]+0x00000000u); // 800F3310
  c->lr=0x800F3318u; f_800EF9D4(c); // 800F3314
  cmps(c,0,(int32_t)c->r[3],0); // 800F3318
  if (crb(c,2)) { goto L_800F3328; } // 800F331C
  c->lr=0x800F3324u; f_800F3864(c); // 800F3320
  goto L_800F33CC; // 800F3324
L_800F3328:;
  c->r[31]=0u+0x00000006u; // 800F3328
  c->r[3]=R32(c->r[29]+0x00000004u); // 800F332C
  W8(c->r[29]+0x00000089u,c->r[31]); // 800F3330
  c->lr=0x800F3338u; f_800EF9D4(c); // 800F3334
  cmps(c,0,(int32_t)c->r[3],0); // 800F3338
  if (crb(c,2)) { goto L_800F3348; } // 800F333C
  c->lr=0x800F3344u; f_800F3864(c); // 800F3340
  goto L_800F33CC; // 800F3344
L_800F3348:;
  c->r[0]=0u+0x00000007u; // 800F3348
  c->r[3]=c->r[29]+0x00000048u; // 800F334C
  W8(c->r[29]+0x00000089u,c->r[0]); // 800F3350
  c->r[4]=c->r[29]+0x00000008u; // 800F3354
  c->lr=0x800F335Cu; f_800EF148(c); // 800F3358
  cmps(c,0,(int32_t)c->r[3],0); // 800F335C
  if (crb(c,2)) { goto L_800F336C; } // 800F3360
  c->lr=0x800F3368u; f_800F3864(c); // 800F3364
  goto L_800F33CC; // 800F3368
L_800F336C:;
  c->r[0]=0u+0x00000008u; // 800F336C
  cmps(c,0,(int32_t)c->r[30],0); // 800F3370
  W8(c->r[29]+0x00000089u,c->r[0]); // 800F3374
  if (!crb(c,2)) { goto L_800F33AC; } // 800F3378
  c->r[3]=c->r[1]+0x00000008u; // 800F337C
  c->r[4]=c->r[29]+0x00000048u; // 800F3380
  c->lr=0x800F3388u; f_800F3A8C(c); // 800F3384
  c->r[3]=c->r[1]+0x00000008u; // 800F3388
  c->lr=0x800F3390u; f_800EEFA0(c); // 800F338C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3390
  if (!crb(c,2)) { goto L_800F33B0; } // 800F3394
  c->r[4]=0u+0x00000009u; // 800F3398
  c->r[0]=0u+0x00000004u; // 800F339C
  W8(c->r[29]+0x00000089u,c->r[4]); // 800F33A0
  W8(c->r[29]+0x0000008Au,c->r[0]); // 800F33A4
  goto L_800F33B0; // 800F33A8
L_800F33AC:;
  W8(c->r[29]+0x0000008Au,c->r[31]); // 800F33AC
L_800F33B0:;
  c->lr=0x800F33B4u; f_800F3864(c); // 800F33B0
  goto L_800F33CC; // 800F33B4
L_800F33B8:;
  c->r[3]=0u+0x80280000u; // 800F33B8
  c->r[3]=c->r[3]+0xFFFFB378u; // 800F33BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F33C0
  c->lr=0x800F33C8u; f_800ACBA4(c); // 800F33C4
  c->r[3]=0u+0xFFFFFFF8u; // 800F33C8
L_800F33CC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F33CC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800F33D0
  c->r[30]=R32(c->r[1]+0x00000058u); // 800F33D4
  c->r[29]=R32(c->r[1]+0x00000054u); // 800F33D8
  c->lr=c->r[0]; // 800F33DC
  c->r[1]=c->r[1]+0x00000060u; // 800F33E0
  return; // 800F33E4
}

// nandCloseCallback
void f_800F33E8(Ctx* __restrict c) {
  trace_call(0x800F33E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F33E8
  c->r[0]=c->lr; // 800F33EC
  cmps(c,0,(int32_t)c->r[3],0); // 800F33F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F33F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F33F8
  c->r[31]=c->r[4]|c->r[4]; // 800F33FC
  if (!crb(c,2)) { goto L_800F341C; } // 800F3400
  c->r[5]=R32(c->r[4]+0x00000008u); // 800F3404
  c->r[6]=0u+0x00000007u; // 800F3408
  c->r[0]=0u+0x00000002u; // 800F340C
  W8(c->r[5]+0x00000089u,c->r[6]); // 800F3410
  c->r[4]=R32(c->r[4]+0x00000008u); // 800F3414
  W8(c->r[4]+0x0000008Au,c->r[0]); // 800F3418
L_800F341C:;
  c->lr=0x800F3420u; f_800F3864(c); // 800F341C
  c->r[12]=R32(c->r[31]+0x00000004u); // 800F3420
  c->r[4]=c->r[31]|c->r[31]; // 800F3424
  c->ctr=c->r[12]; // 800F3428
  if (true) { c->lr=0x800F3430u; dispatch(c,c->ctr); } // 800F342C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3430
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3434
  c->lr=c->r[0]; // 800F3438
  c->r[1]=c->r[1]+0x00000010u; // 800F343C
  return; // 800F3440
}

// nandRemoveTailToken
void f_800F3444(Ctx* __restrict c) {
  trace_call(0x800F3444u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3444
  c->r[0]=c->lr; // 800F3448
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F344C
  c->r[0]=R8(c->r[4]+0x00000000u); // 800F3450
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F3454
  cmps(c,0,(int32_t)c->r[0],47); // 800F3458
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F345C
  c->r[30]=c->r[4]|c->r[4]; // 800F3460
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F3464
  c->r[29]=c->r[3]|c->r[3]; // 800F3468
  if (!crb(c,2)) { goto L_800F3490; } // 800F346C
  c->r[0]=R8(c->r[4]+0x00000001u); // 800F3470
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3474
  if (!crb(c,2)) { goto L_800F3490; } // 800F3478
  c->r[4]=0u+0x0000002Fu; // 800F347C
  c->r[0]=0u+0x00000000u; // 800F3480
  W8(c->r[3]+0x00000000u,c->r[4]); // 800F3484
  W8(c->r[3]+0x00000001u,c->r[0]); // 800F3488
  goto L_800F34FC; // 800F348C
L_800F3490:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3490
  c->lr=0x800F3498u; f_800D4394(c); // 800F3494
  c->r[31]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 800F3498
  c->r[0]=c->r[31]+0x00000001u; // 800F349C
  c->r[3]=c->r[30]+c->r[31]; // 800F34A0
  c->ctr=c->r[0]; // 800F34A4
  if (crb(c,0)) { goto L_800F34FC; } // 800F34A8
L_800F34AC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F34AC
  cmps(c,0,(int32_t)c->r[0],47); // 800F34B0
  if (!crb(c,2)) { goto L_800F34F0; } // 800F34B4
  cmps(c,0,(int32_t)c->r[31],0); // 800F34B8
  if (crb(c,2)) { goto L_800F34DC; } // 800F34BC
  c->r[3]=c->r[29]|c->r[29]; // 800F34C0
  c->r[4]=c->r[30]|c->r[30]; // 800F34C4
  c->r[5]=c->r[31]|c->r[31]; // 800F34C8
  c->lr=0x800F34D0u; f_800DBA68(c); // 800F34CC
  c->r[0]=0u+0x00000000u; // 800F34D0
  W8(c->r[29]+c->r[31],c->r[0]); // 800F34D4
  goto L_800F34FC; // 800F34D8
L_800F34DC:;
  c->r[3]=0u+0x0000002Fu; // 800F34DC
  c->r[0]=0u+0x00000000u; // 800F34E0
  W8(c->r[29]+0x00000000u,c->r[3]); // 800F34E4
  W8(c->r[29]+0x00000001u,c->r[0]); // 800F34E8
  goto L_800F34FC; // 800F34EC
L_800F34F0:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800F34F0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800F34F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F34AC; } // 800F34F8
L_800F34FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F34FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3500
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F3504
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F3508
  c->lr=c->r[0]; // 800F350C
  c->r[1]=c->r[1]+0x00000020u; // 800F3510
  return; // 800F3514
}

// nandGetHeadToken
void f_800F3518(Ctx* __restrict c) {
  trace_call(0x800F3518u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3518
  c->r[0]=c->lr; // 800F351C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3520
  c->r[11]=c->r[1]+0x00000020u; // 800F3524
  c->lr=0x800F352Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F3528
  c->r[27]=c->r[3]|c->r[3]; // 800F352C
  c->r[28]=c->r[4]|c->r[4]; // 800F3530
  c->r[29]=c->r[5]|c->r[5]; // 800F3534
  c->r[31]=c->r[5]|c->r[5]; // 800F3538
  c->r[30]=0u+0x00000000u; // 800F353C
  goto L_800F35C4; // 800F3540
L_800F3544:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 800F3544
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F3548
  cmps(c,0,(int32_t)c->r[0],47); // 800F354C
  if (!crb(c,2)) { goto L_800F3594; } // 800F3550
  c->r[3]=c->r[27]|c->r[27]; // 800F3554
  c->r[4]=c->r[29]|c->r[29]; // 800F3558
  c->r[5]=c->r[30]|c->r[30]; // 800F355C
  c->lr=0x800F3564u; f_800DBA68(c); // 800F3560
  c->r[4]=c->r[30]+c->r[29]; // 800F3564
  c->r[3]=0u+0x00000000u; // 800F3568
  c->r[0]=R8(c->r[4]+0x00000001u); // 800F356C
  W8(c->r[27]+c->r[30],c->r[3]); // 800F3570
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3574
  if (!crb(c,2)) { goto L_800F3584; } // 800F3578
  W8(c->r[28]+0x00000000u,c->r[3]); // 800F357C
  goto L_800F35D4; // 800F3580
L_800F3584:;
  c->r[3]=c->r[28]|c->r[28]; // 800F3584
  c->r[4]=c->r[4]+0x00000001u; // 800F3588
  c->lr=0x800F3590u; f_800DB9A8(c); // 800F358C
  goto L_800F35D4; // 800F3590
L_800F3594:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F3594
  if (!crb(c,2)) { goto L_800F35BC; } // 800F3598
  c->r[3]=c->r[27]|c->r[27]; // 800F359C
  c->r[4]=c->r[29]|c->r[29]; // 800F35A0
  c->r[5]=c->r[30]|c->r[30]; // 800F35A4
  c->lr=0x800F35ACu; f_800DBA68(c); // 800F35A8
  c->r[0]=0u+0x00000000u; // 800F35AC
  W8(c->r[27]+c->r[30],c->r[0]); // 800F35B0
  W8(c->r[28]+0x00000000u,c->r[0]); // 800F35B4
  goto L_800F35D4; // 800F35B8
L_800F35BC:;
  c->r[30]=c->r[30]+0x00000001u; // 800F35BC
  c->r[31]=c->r[31]+0x00000001u; // 800F35C0
L_800F35C4:;
  c->r[3]=c->r[29]|c->r[29]; // 800F35C4
  c->lr=0x800F35CCu; f_800D4394(c); // 800F35C8
  cmpu(c,0,c->r[30],c->r[3]); // 800F35CC
  if (!crb(c,1)) { IRQCHK(c); goto L_800F3544; } // 800F35D0
L_800F35D4:;
  c->r[11]=c->r[1]+0x00000020u; // 800F35D4
  c->lr=0x800F35DCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F35D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F35DC
  c->lr=c->r[0]; // 800F35E0
  c->r[1]=c->r[1]+0x00000020u; // 800F35E4
  return; // 800F35E8
}

// nandGetRelativeName
void f_800F35EC(Ctx* __restrict c) {
  trace_call(0x800F35ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F35EC
  c->r[0]=c->lr; // 800F35F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F35F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F35F8
  c->r[31]=c->r[4]|c->r[4]; // 800F35FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3600
  c->r[30]=c->r[3]|c->r[3]; // 800F3604
  c->r[3]=c->r[13]+0xFFFF82D4u; // 800F3608
  c->lr=0x800F3610u; f_800DBB24(c); // 800F360C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3610
  if (!crb(c,2)) { goto L_800F3628; } // 800F3614
  c->r[3]=c->r[30]|c->r[30]; // 800F3618
  c->r[4]=c->r[13]+0xFFFF82D8u; // 800F361C
  c->lr=0x800F3624u; f_800DB9A8(c); // 800F3620
  goto L_800F366C; // 800F3624
L_800F3628:;
  c->r[3]=c->r[31]|c->r[31]; // 800F3628
  c->lr=0x800F3630u; f_800D4394(c); // 800F362C
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 800F3630
  c->r[0]=c->r[4]+0x00000001u; // 800F3634
  c->r[3]=c->r[31]+c->r[4]; // 800F3638
  c->ctr=c->r[0]; // 800F363C
  if (crb(c,0)) { goto L_800F365C; } // 800F3640
L_800F3644:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F3644
  cmps(c,0,(int32_t)c->r[0],47); // 800F3648
  if (crb(c,2)) { goto L_800F365C; } // 800F364C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F3650
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800F3654
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F3644; } // 800F3658
L_800F365C:;
  c->r[4]=c->r[31]+c->r[4]; // 800F365C
  c->r[3]=c->r[30]|c->r[30]; // 800F3660
  c->r[4]=c->r[4]+0x00000001u; // 800F3664
  c->lr=0x800F366Cu; f_800DB9A8(c); // 800F3668
L_800F366C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F366C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3670
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3674
  c->lr=c->r[0]; // 800F3678
  c->r[1]=c->r[1]+0x00000010u; // 800F367C
  return; // 800F3680
}

// nandConvertPath
void f_800F3684(Ctx* __restrict c) {
  trace_call(0x800F3684u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3684
  c->r[0]=c->lr; // 800F3688
  W32(c->r[1]+0x00000224u,c->r[0]); // 800F368C
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 800F3690
  c->r[31]=c->r[5]|c->r[5]; // 800F3694
  W32(c->r[1]+0x00000218u,c->r[30]); // 800F3698
  c->r[30]=c->r[4]|c->r[4]; // 800F369C
  W32(c->r[1]+0x00000214u,c->r[29]); // 800F36A0
  c->r[29]=c->r[3]|c->r[3]; // 800F36A4
  c->r[3]=c->r[31]|c->r[31]; // 800F36A8
  c->lr=0x800F36B0u; f_800D4394(c); // 800F36AC
  cmps(c,0,(int32_t)c->r[3],0); // 800F36B0
  if (!crb(c,2)) { goto L_800F36C8; } // 800F36B4
  c->r[3]=c->r[29]|c->r[29]; // 800F36B8
  c->r[4]=c->r[30]|c->r[30]; // 800F36BC
  c->lr=0x800F36C4u; f_800DB9A8(c); // 800F36C0
  goto L_800F37A4; // 800F36C4
L_800F36C8:;
  c->r[5]=c->r[31]|c->r[31]; // 800F36C8
  c->r[3]=c->r[1]+0x00000188u; // 800F36CC
  c->r[4]=c->r[1]+0x00000108u; // 800F36D0
  c->lr=0x800F36D8u; f_800F3518(c); // 800F36D4
  c->r[3]=c->r[1]+0x00000188u; // 800F36D8
  c->r[4]=c->r[13]+0xFFFF82DCu; // 800F36DC
  c->lr=0x800F36E4u; f_800DBB24(c); // 800F36E0
  cmps(c,0,(int32_t)c->r[3],0); // 800F36E4
  if (!crb(c,2)) { goto L_800F3700; } // 800F36E8
  c->r[3]=c->r[29]|c->r[29]; // 800F36EC
  c->r[4]=c->r[30]|c->r[30]; // 800F36F0
  c->r[5]=c->r[1]+0x00000108u; // 800F36F4
  c->lr=0x800F36FCu; f_800F3684(c); // 800F36F8
  goto L_800F37A4; // 800F36FC
L_800F3700:;
  c->r[3]=c->r[1]+0x00000188u; // 800F3700
  c->r[4]=c->r[13]+0xFFFF82E0u; // 800F3704
  c->lr=0x800F370Cu; f_800DBB24(c); // 800F3708
  cmps(c,0,(int32_t)c->r[3],0); // 800F370C
  if (!crb(c,2)) { goto L_800F3734; } // 800F3710
  c->r[4]=c->r[30]|c->r[30]; // 800F3714
  c->r[3]=c->r[1]+0x00000088u; // 800F3718
  c->lr=0x800F3720u; f_800F3444(c); // 800F371C
  c->r[3]=c->r[29]|c->r[29]; // 800F3720
  c->r[4]=c->r[1]+0x00000088u; // 800F3724
  c->r[5]=c->r[1]+0x00000108u; // 800F3728
  c->lr=0x800F3730u; f_800F3684(c); // 800F372C
  goto L_800F37A4; // 800F3730
L_800F3734:;
  c->r[0]=R8(c->r[1]+0x00000188u); // 800F3734
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3738
  if (crb(c,2)) { goto L_800F3798; } // 800F373C
  c->r[3]=c->r[30]|c->r[30]; // 800F3740
  c->r[4]=c->r[13]+0xFFFF82D4u; // 800F3744
  c->lr=0x800F374Cu; f_800DBB24(c); // 800F3748
  cmps(c,0,(int32_t)c->r[3],0); // 800F374C
  if (!crb(c,2)) { goto L_800F376C; } // 800F3750
  c->r[3]=c->r[1]+0x00000008u; // 800F3754
  c->r[5]=c->r[1]+0x00000188u; // 800F3758
  c->r[4]=c->r[13]+0xFFFF82E4u; // 800F375C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3760
  c->lr=0x800F3768u; f_800DA3C8(c); // 800F3764
  goto L_800F3784; // 800F3768
L_800F376C:;
  c->r[5]=c->r[30]|c->r[30]; // 800F376C
  c->r[3]=c->r[1]+0x00000008u; // 800F3770
  c->r[6]=c->r[1]+0x00000188u; // 800F3774
  c->r[4]=c->r[13]+0xFFFF82E8u; // 800F3778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F377C
  c->lr=0x800F3784u; f_800DA3C8(c); // 800F3780
L_800F3784:;
  c->r[3]=c->r[29]|c->r[29]; // 800F3784
  c->r[4]=c->r[1]+0x00000008u; // 800F3788
  c->r[5]=c->r[1]+0x00000108u; // 800F378C
  c->lr=0x800F3794u; f_800F3684(c); // 800F3790
  goto L_800F37A4; // 800F3794
L_800F3798:;
  c->r[3]=c->r[29]|c->r[29]; // 800F3798
  c->r[4]=c->r[30]|c->r[30]; // 800F379C
  c->lr=0x800F37A4u; f_800DB9A8(c); // 800F37A0
L_800F37A4:;
  c->r[0]=R32(c->r[1]+0x00000224u); // 800F37A4
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 800F37A8
  c->r[30]=R32(c->r[1]+0x00000218u); // 800F37AC
  c->r[29]=R32(c->r[1]+0x00000214u); // 800F37B0
  c->lr=c->r[0]; // 800F37B4
  c->r[1]=c->r[1]+0x00000220u; // 800F37B8
  return; // 800F37BC
}

// nandIsPrivatePath
void f_800F37C0(Ctx* __restrict c) {
  trace_call(0x800F37C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F37C0
  c->r[0]=c->lr; // 800F37C4
  c->r[4]=0u+0x80280000u; // 800F37C8
  c->r[5]=0u+0x00000008u; // 800F37CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F37D0
  c->r[4]=c->r[4]+0xFFFFB450u; // 800F37D4
  c->lr=0x800F37DCu; f_800DBC40(c); // 800F37D8
  c->r[0]=cntlz(c->r[3]); // 800F37DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F37E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F37E4
  c->lr=c->r[0]; // 800F37E8
  c->r[1]=c->r[1]+0x00000010u; // 800F37EC
  return; // 800F37F0
}

// nandIsUnderPrivatePath
void f_800F37F4(Ctx* __restrict c) {
  trace_call(0x800F37F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F37F4
  c->r[0]=c->lr; // 800F37F8
  c->r[4]=0u+0x80280000u; // 800F37FC
  c->r[5]=0u+0x00000009u; // 800F3800
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3804
  c->r[4]=c->r[4]+0xFFFFB45Cu; // 800F3808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F380C
  c->r[31]=c->r[3]|c->r[3]; // 800F3810
  c->lr=0x800F3818u; f_800DBC40(c); // 800F3814
  cmps(c,0,(int32_t)c->r[3],0); // 800F3818
  if (!crb(c,2)) { goto L_800F3834; } // 800F381C
  c->r[0]=R8(c->r[31]+0x00000009u); // 800F3820
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3824
  if (crb(c,2)) { goto L_800F3834; } // 800F3828
  c->r[3]=0u+0x00000001u; // 800F382C
  goto L_800F3838; // 800F3830
L_800F3834:;
  c->r[3]=0u+0x00000000u; // 800F3834
L_800F3838:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F383C
  c->lr=c->r[0]; // 800F3840
  c->r[1]=c->r[1]+0x00000010u; // 800F3844
  return; // 800F3848
}

// nandIsInitialized
void f_800F384C(Ctx* __restrict c) {
  trace_call(0x800F384Cu);
  c->r[3]=R32(c->r[13]+0xFFFF92E0u); // 800F384C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800F3850
  c->r[0]=cntlz(c->r[0]); // 800F3854
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F3858
  return; // 800F385C
}

// nandReportErrorCode
void f_800F3860(Ctx* __restrict c) {
  trace_call(0x800F3860u);
  return; // 800F3860
}

// nandConvertErrorCode
void f_800F3864(Ctx* __restrict c) {
  trace_call(0x800F3864u);
  c->r[11]=rotl(c->r[1],0)&0x0000003Fu; // 800F3864
  c->r[12]=c->r[1]|c->r[1]; // 800F3868
  c->r[11]=addc(c,~c->r[11],0xFFFFFD00u,1); // 800F386C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3870
  c->r[0]=c->lr; // 800F3874
  c->r[4]=0u+0x80260000u; // 800F3878
  W32(c->r[12]+0x00000004u,c->r[0]); // 800F387C
  c->r[4]=c->r[4]+0xFFFFBA58u; // 800F3880
  c->r[0]=0u+0x00000029u; // 800F3884
  c->r[6]=c->r[1]+0x0000013Cu; // 800F3888
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800F388C
  c->r[31]=0u+0x80280000u; // 800F3890
  c->r[31]=c->r[31]+0xFFFFB3A0u; // 800F3894
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 800F3898
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800F389C
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800F38A0
  c->r[29]=c->r[3]|c->r[3]; // 800F38A4
  c->ctr=c->r[0]; // 800F38A8
L_800F38AC:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800F38AC
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800F38B0
  W32(c->r[6]+0x00000004u,c->r[4]); // 800F38B4
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800F38B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F38AC; } // 800F38BC
  cmps(c,0,(int32_t)c->r[3],0); // 800F38C0
  c->r[30]=0u+0x00000000u; // 800F38C4
  c->r[4]=0u+0x00000000u; // 800F38C8
  if (crb(c,0)) { goto L_800F38D8; } // 800F38CC
  c->r[3]=c->r[29]|c->r[29]; // 800F38D0
  goto L_800F39A4; // 800F38D4
L_800F38D8:;
  c->r[0]=0u+0x00000029u; // 800F38D8
  c->r[5]=c->r[1]+0x00000140u; // 800F38DC
  c->ctr=c->r[0]; // 800F38E0
L_800F38E4:;
  c->r[0]=R32(c->r[5]+c->r[4]); // 800F38E4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800F38E8
  if (!crb(c,2)) { goto L_800F3958; } // 800F38EC
  cmps(c,0,(int32_t)c->r[3],-114); // 800F38F0
  if (crb(c,2)) { goto L_800F3918; } // 800F38F4
  cmps(c,0,(int32_t)c->r[3],-116); // 800F38F8
  if (crb(c,2)) { goto L_800F3918; } // 800F38FC
  cmps(c,0,(int32_t)c->r[3],-117); // 800F3900
  if (crb(c,2)) { goto L_800F3918; } // 800F3904
  cmps(c,0,(int32_t)c->r[3],-9); // 800F3908
  if (crb(c,2)) { goto L_800F3918; } // 800F390C
  cmps(c,0,(int32_t)c->r[3],-12); // 800F3910
  if (!crb(c,2)) { goto L_800F393C; } // 800F3914
L_800F3918:;
  c->r[5]=c->r[29]|c->r[29]; // 800F3918
  c->r[3]=c->r[1]+0x000000C0u; // 800F391C
  c->r[4]=c->r[31]+0x000000C8u; // 800F3920
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3924
  c->lr=0x800F392Cu; f_800DA3C8(c); // 800F3928
  c->r[4]=c->r[1]+0x000000C0u; // 800F392C
  c->r[3]=0u+0x00000000u; // 800F3930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3934
  c->lr=0x800F393Cu; f_800F4434(c); // 800F3938
L_800F393C:;
  c->r[3]=c->r[29]|c->r[29]; // 800F393C
  c->lr=0x800F3944u; f_800F3860(c); // 800F3940
  c->r[0]=c->r[30]+0x00000001u; // 800F3944
  c->r[3]=c->r[1]+0x00000140u; // 800F3948
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F394C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F3950
  goto L_800F39A4; // 800F3954
L_800F3958:;
  c->r[30]=c->r[30]+0x00000002u; // 800F3958
  c->r[4]=c->r[4]+0x00000008u; // 800F395C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F38E4; } // 800F3960
  c->r[4]=c->r[29]|c->r[29]; // 800F3964
  c->r[3]=c->r[31]+0x000000DCu; // 800F3968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F396C
  c->lr=0x800F3974u; f_800ACBA4(c); // 800F3970
  c->r[5]=c->r[29]|c->r[29]; // 800F3974
  c->r[3]=c->r[1]+0x00000040u; // 800F3978
  c->r[4]=c->r[31]+0x00000110u; // 800F397C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3980
  c->lr=0x800F3988u; f_800DA3C8(c); // 800F3984
  c->r[4]=c->r[1]+0x00000040u; // 800F3988
  c->r[3]=0u+0x00000000u; // 800F398C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3990
  c->lr=0x800F3998u; f_800F4434(c); // 800F3994
  c->r[3]=c->r[29]|c->r[29]; // 800F3998
  c->lr=0x800F39A0u; f_800F3860(c); // 800F399C
  c->r[3]=0u+0xFFFFFFC0u; // 800F39A0
L_800F39A4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F39A4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F39A8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800F39AC
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800F39B0
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 800F39B4
  c->lr=c->r[0]; // 800F39B8
  c->r[1]=c->r[10]|c->r[10]; // 800F39BC
  return; // 800F39C0
}

// nandGenerateAbsPath
void f_800F39C4(Ctx* __restrict c) {
  trace_call(0x800F39C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F39C4
  c->r[0]=c->lr; // 800F39C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F39CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F39D0
  c->r[31]=c->r[4]|c->r[4]; // 800F39D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F39D8
  c->r[30]=c->r[3]|c->r[3]; // 800F39DC
  c->r[3]=c->r[31]|c->r[31]; // 800F39E0
  c->lr=0x800F39E8u; f_800D4394(c); // 800F39E4
  cmps(c,0,(int32_t)c->r[3],0); // 800F39E8
  if (!crb(c,2)) { goto L_800F3A00; } // 800F39EC
  c->r[3]=c->r[30]|c->r[30]; // 800F39F0
  c->r[4]=c->r[13]+0xFFFF82D8u; // 800F39F4
  c->lr=0x800F39FCu; f_800DB9A8(c); // 800F39F8
  goto L_800F3A74; // 800F39FC
L_800F3A00:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 800F3A00
  cmps(c,0,(int32_t)c->r[0],47); // 800F3A04
  if (!crb(c,2)) { goto L_800F3A14; } // 800F3A08
  c->r[0]=0u+0x00000000u; // 800F3A0C
  goto L_800F3A18; // 800F3A10
L_800F3A14:;
  c->r[0]=0u+0x00000001u; // 800F3A14
L_800F3A18:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F3A18
  if (crb(c,2)) { goto L_800F3A38; } // 800F3A1C
  c->r[4]=0u+0x80280000u; // 800F3A20
  c->r[3]=c->r[30]|c->r[30]; // 800F3A24
  c->r[5]=c->r[31]|c->r[31]; // 800F3A28
  c->r[4]=c->r[4]+0xFFFFB400u; // 800F3A2C
  c->lr=0x800F3A34u; f_800F3684(c); // 800F3A30
  goto L_800F3A74; // 800F3A34
L_800F3A38:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3A38
  c->r[4]=c->r[31]|c->r[31]; // 800F3A3C
  c->lr=0x800F3A44u; f_800DB9A8(c); // 800F3A40
  c->r[3]=c->r[30]|c->r[30]; // 800F3A44
  c->lr=0x800F3A4Cu; f_800D4394(c); // 800F3A48
  cmps(c,0,(int32_t)c->r[3],0); // 800F3A4C
  if (crb(c,2)) { goto L_800F3A74; } // 800F3A50
  c->r[4]=c->r[3]+c->r[30]; // 800F3A54
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 800F3A58
  cmps(c,0,(int32_t)c->r[0],47); // 800F3A5C
  if (!crb(c,2)) { goto L_800F3A74; } // 800F3A60
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F3A64
  if (crb(c,2)) { goto L_800F3A74; } // 800F3A68
  c->r[0]=0u+0x00000000u; // 800F3A6C
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 800F3A70
L_800F3A74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3A74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3A78
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3A7C
  c->lr=c->r[0]; // 800F3A80
  c->r[1]=c->r[1]+0x00000010u; // 800F3A84
  return; // 800F3A88
}

// nandGetParentDirectory
void f_800F3A8C(Ctx* __restrict c) {
  trace_call(0x800F3A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3A8C
  c->r[0]=c->lr; // 800F3A90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3A94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F3A98
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F3A9C
  c->r[30]=c->r[4]|c->r[4]; // 800F3AA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F3AA4
  c->r[29]=c->r[3]|c->r[3]; // 800F3AA8
  c->r[3]=c->r[30]|c->r[30]; // 800F3AAC
  c->lr=0x800F3AB4u; f_800D4394(c); // 800F3AB0
  c->r[0]=c->r[3]+0x00000001u; // 800F3AB4
  c->r[31]=c->r[3]|c->r[3]; // 800F3AB8
  c->r[4]=c->r[30]+c->r[3]; // 800F3ABC
  c->ctr=c->r[0]; // 800F3AC0
  cmps(c,0,(int32_t)c->r[3],0); // 800F3AC4
  if (crb(c,0)) { goto L_800F3AE4; } // 800F3AC8
L_800F3ACC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800F3ACC
  cmps(c,0,(int32_t)c->r[0],47); // 800F3AD0
  if (crb(c,2)) { goto L_800F3AE4; } // 800F3AD4
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800F3AD8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F3ADC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F3ACC; } // 800F3AE0
L_800F3AE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F3AE4
  if (!crb(c,2)) { goto L_800F3AFC; } // 800F3AE8
  c->r[3]=c->r[29]|c->r[29]; // 800F3AEC
  c->r[4]=c->r[13]+0xFFFF82D4u; // 800F3AF0
  c->lr=0x800F3AF8u; f_800DB9A8(c); // 800F3AF4
  goto L_800F3B14; // 800F3AF8
L_800F3AFC:;
  c->r[3]=c->r[29]|c->r[29]; // 800F3AFC
  c->r[4]=c->r[30]|c->r[30]; // 800F3B00
  c->r[5]=c->r[31]|c->r[31]; // 800F3B04
  c->lr=0x800F3B0Cu; f_800DBA68(c); // 800F3B08
  c->r[0]=0u+0x00000000u; // 800F3B0C
  W8(c->r[29]+c->r[31],c->r[0]); // 800F3B10
L_800F3B14:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3B14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3B18
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F3B1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F3B20
  c->lr=c->r[0]; // 800F3B24
  c->r[1]=c->r[1]+0x00000020u; // 800F3B28
  return; // 800F3B2C
}

// NANDInit
void f_800F3B30(Ctx* __restrict c) {
  trace_call(0x800F3B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3B30
  c->r[0]=c->lr; // 800F3B34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3B38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F3B3C
  c->r[31]=0u+0x80280000u; // 800F3B40
  c->r[31]=c->r[31]+0xFFFFB3A0u; // 800F3B44
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F3B48
  c->lr=0x800F3B50u; f_800B087C(c); // 800F3B4C
  c->r[0]=R32(c->r[13]+0xFFFF92E0u); // 800F3B50
  cmps(c,0,(int32_t)c->r[0],1); // 800F3B54
  if (!crb(c,2)) { goto L_800F3B68; } // 800F3B58
  c->lr=0x800F3B60u; f_800B08A4(c); // 800F3B5C
  c->r[3]=0u+0xFFFFFFFDu; // 800F3B60
  goto L_800F3C44; // 800F3B64
L_800F3B68:;
  cmps(c,0,(int32_t)c->r[0],2); // 800F3B68
  if (!crb(c,2)) { goto L_800F3B7C; } // 800F3B6C
  c->lr=0x800F3B74u; f_800B08A4(c); // 800F3B70
  c->r[3]=0u+0x00000000u; // 800F3B74
  goto L_800F3C44; // 800F3B78
L_800F3B7C:;
  c->r[0]=0u+0x00000001u; // 800F3B7C
  W32(c->r[13]+0xFFFF92E0u,c->r[0]); // 800F3B80
  c->lr=0x800F3B88u; f_800B08A4(c); // 800F3B84
  c->lr=0x800F3B8Cu; f_800EE5E8(c); // 800F3B88
  cmps(c,0,(int32_t)c->r[3],0); // 800F3B8C
  c->r[30]=c->r[3]|c->r[3]; // 800F3B90
  if (!crb(c,2)) { goto L_800F3C2C; } // 800F3B94
  c->lr=0x800F3B9Cu; f_80144FB4(c); // 800F3B98
  cmps(c,0,(int32_t)c->r[3],0); // 800F3B9C
  c->r[30]=c->r[3]|c->r[3]; // 800F3BA0
  if (!crb(c,2)) { goto L_800F3BB4; } // 800F3BA4
  c->r[3]=c->r[1]+0x00000008u; // 800F3BA8
  c->lr=0x800F3BB0u; f_8014553C(c); // 800F3BAC
  c->r[30]=c->r[3]|c->r[3]; // 800F3BB0
L_800F3BB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F3BB4
  if (!crb(c,2)) { goto L_800F3BD4; } // 800F3BB8
  c->r[5]=0u+0x802D0000u; // 800F3BBC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F3BC0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800F3BC4
  c->r[5]=c->r[5]+0x00002D60u; // 800F3BC8
  c->lr=0x800F3BD0u; f_801454A4(c); // 800F3BCC
  c->r[30]=c->r[3]|c->r[3]; // 800F3BD0
L_800F3BD4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F3BD4
  if (!crb(c,2)) { goto L_800F3BEC; } // 800F3BD8
  c->r[4]=0u+0x802D0000u; // 800F3BDC
  c->r[3]=c->r[31]+0x00000060u; // 800F3BE0
  c->r[4]=c->r[4]+0x00002D60u; // 800F3BE4
  c->lr=0x800F3BECu; f_800DB9A8(c); // 800F3BE8
L_800F3BEC:;
  c->lr=0x800F3BF0u; f_80145008(c); // 800F3BEC
  cmps(c,0,(int32_t)c->r[30],0); // 800F3BF0
  if (crb(c,2)) { goto L_800F3C04; } // 800F3BF4
  c->r[3]=c->r[31]+0x00000130u; // 800F3BF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3BFC
  c->lr=0x800F3C04u; f_800ACBA4(c); // 800F3C00
L_800F3C04:;
  c->r[3]=c->r[31]+0x000000A0u; // 800F3C04
  c->lr=0x800F3C0Cu; f_800B1DA8(c); // 800F3C08
  c->lr=0x800F3C10u; f_800B087C(c); // 800F3C0C
  c->r[0]=0u+0x00000002u; // 800F3C10
  W32(c->r[13]+0xFFFF92E0u,c->r[0]); // 800F3C14
  c->lr=0x800F3C1Cu; f_800B08A4(c); // 800F3C18
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 800F3C1C
  c->lr=0x800F3C24u; f_800AAB54(c); // 800F3C20
  c->r[3]=0u+0x00000000u; // 800F3C24
  goto L_800F3C44; // 800F3C28
L_800F3C2C:;
  c->lr=0x800F3C30u; f_800B087C(c); // 800F3C2C
  c->r[0]=0u+0x00000000u; // 800F3C30
  W32(c->r[13]+0xFFFF92E0u,c->r[0]); // 800F3C34
  c->lr=0x800F3C3Cu; f_800B08A4(c); // 800F3C38
  c->r[3]=c->r[30]|c->r[30]; // 800F3C3C
  c->lr=0x800F3C44u; f_800F3864(c); // 800F3C40
L_800F3C44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3C44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3C48
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F3C4C
  c->lr=c->r[0]; // 800F3C50
  c->r[1]=c->r[1]+0x00000020u; // 800F3C54
  return; // 800F3C58
}

// nandOnShutdown
void f_800F3C5C(Ctx* __restrict c) {
  trace_call(0x800F3C5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3C5C
  c->r[0]=c->lr; // 800F3C60
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F3C64
  c->r[11]=c->r[1]+0x00000030u; // 800F3C68
  c->lr=0x800F3C70u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F3C6C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3C70
  if (!crb(c,2)) { goto L_800F3D0C; } // 800F3C74
  cmpu(c,0,c->r[4],0x00000002u); // 800F3C78
  if (!crb(c,2)) { goto L_800F3D04; } // 800F3C7C
  c->r[26]=0u+0x00000000u; // 800F3C80
  W32(c->r[1]+0x00000008u,c->r[26]); // 800F3C84
  c->lr=0x800F3C8Cu; f_800B48F4(c); // 800F3C88
  c->r[5]=0u+0x800F0000u; // 800F3C8C
  c->r[27]=c->r[4]|c->r[4]; // 800F3C90
  c->r[28]=c->r[3]|c->r[3]; // 800F3C94
  c->r[4]=c->r[1]+0x00000008u; // 800F3C98
  c->r[3]=c->r[5]+0x00003D28u; // 800F3C9C
  c->lr=0x800F3CA4u; f_800EFA5C(c); // 800F3CA0
  c->r[3]=0u+0x10620000u; // 800F3CA4
  c->r[30]=0u+0x80000000u; // 800F3CA8
  c->r[29]=c->r[3]+0x00004DD3u; // 800F3CAC
  c->r[31]=0u+0x000001F4u; // 800F3CB0
  goto L_800F3CC4; // 800F3CB4
L_800F3CB8:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800F3CB8
  cmps(c,0,(int32_t)c->r[0],0); // 800F3CBC
  if (!crb(c,2)) { goto L_800F3D04; } // 800F3CC0
L_800F3CC4:;
  c->lr=0x800F3CC8u; f_800B48F4(c); // 800F3CC4
  c->r[0]=R32(c->r[30]+0x000000F8u); // 800F3CC8
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 800F3CCC
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 800F3CD0
  c->r[5]=0u+0x00000000u; // 800F3CD4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F3CD8
  c->r[0]=(uint32_t)(((uint64_t)c->r[29]*(uint64_t)c->r[0])>>32); // 800F3CDC
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 800F3CE0
  c->lr=0x800F3CE8u; f_800D4B64(c); // 800F3CE4
  c->r[0]=c->r[3]^0x80000000u; // 800F3CE8
  c->r[5]=c->r[26]^0x80000000u; // 800F3CEC
  c->r[3]=addc(c,~c->r[31],c->r[4],1); // 800F3CF0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800F3CF4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800F3CF8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800F3CFC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3CB8; } // 800F3D00
L_800F3D04:;
  c->r[3]=0u+0x00000001u; // 800F3D04
  goto L_800F3D10; // 800F3D08
L_800F3D0C:;
  c->r[3]=0u+0x00000001u; // 800F3D0C
L_800F3D10:;
  c->r[11]=c->r[1]+0x00000030u; // 800F3D10
  c->lr=0x800F3D18u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F3D14
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F3D18
  c->lr=c->r[0]; // 800F3D1C
  c->r[1]=c->r[1]+0x00000030u; // 800F3D20
  return; // 800F3D24
}

// nandShutdownCallback
void f_800F3D28(Ctx* __restrict c) {
  trace_call(0x800F3D28u);
  c->r[0]=0u+0x00000001u; // 800F3D28
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3D2C
  return; // 800F3D30
}

// NANDGetHomeDir
void f_800F3D34(Ctx* __restrict c) {
  trace_call(0x800F3D34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3D34
  c->r[0]=c->lr; // 800F3D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3D3C
  c->r[0]=R32(c->r[13]+0xFFFF92E0u); // 800F3D40
  cmps(c,0,(int32_t)c->r[0],2); // 800F3D44
  if (!crb(c,2)) { goto L_800F3D54; } // 800F3D48
  c->r[0]=0u+0x00000001u; // 800F3D4C
  goto L_800F3D58; // 800F3D50
L_800F3D54:;
  c->r[0]=0u+0x00000000u; // 800F3D54
L_800F3D58:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F3D58
  if (!crb(c,2)) { goto L_800F3D68; } // 800F3D5C
  c->r[3]=0u+0xFFFFFF80u; // 800F3D60
  goto L_800F3D78; // 800F3D64
L_800F3D68:;
  c->r[4]=0u+0x802D0000u; // 800F3D68
  c->r[4]=c->r[4]+0x00002D60u; // 800F3D6C
  c->lr=0x800F3D74u; f_800DB9A8(c); // 800F3D70
  c->r[3]=0u+0x00000000u; // 800F3D74
L_800F3D78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3D78
  c->lr=c->r[0]; // 800F3D7C
  c->r[1]=c->r[1]+0x00000010u; // 800F3D80
  return; // 800F3D84
}

// nandCallback
void f_800F3D88(Ctx* __restrict c) {
  trace_call(0x800F3D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3D88
  c->r[0]=c->lr; // 800F3D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3D90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3D94
  c->r[31]=c->r[4]|c->r[4]; // 800F3D98
  c->lr=0x800F3DA0u; f_800F3864(c); // 800F3D9C
  c->r[12]=R32(c->r[31]+0x00000004u); // 800F3DA0
  c->r[4]=c->r[31]|c->r[31]; // 800F3DA4
  c->ctr=c->r[12]; // 800F3DA8
  if (true) { c->lr=0x800F3DB0u; dispatch(c,c->ctr); } // 800F3DAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3DB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3DB4
  c->lr=c->r[0]; // 800F3DB8
  c->r[1]=c->r[1]+0x00000010u; // 800F3DBC
  return; // 800F3DC0
}

// nandGetType
void f_800F3DC4(Ctx* __restrict c) {
  trace_call(0x800F3DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3DC4
  c->r[0]=c->lr; // 800F3DC8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800F3DCC
  c->r[11]=c->r[1]+0x00000070u; // 800F3DD0
  c->lr=0x800F3DD8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F3DD4
  c->r[27]=c->r[3]|c->r[3]; // 800F3DD8
  c->r[30]=c->r[4]|c->r[4]; // 800F3DDC
  c->r[28]=c->r[5]|c->r[5]; // 800F3DE0
  c->r[29]=c->r[6]|c->r[6]; // 800F3DE4
  c->r[31]=c->r[7]|c->r[7]; // 800F3DE8
  c->lr=0x800F3DF0u; f_800D4394(c); // 800F3DEC
  cmps(c,0,(int32_t)c->r[3],0); // 800F3DF0
  if (!crb(c,2)) { goto L_800F3E00; } // 800F3DF4
  c->r[3]=0u+0xFFFFFF9Bu; // 800F3DF8
  goto L_800F4080; // 800F3DFC
L_800F3E00:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F3E00
  if (crb(c,2)) { goto L_800F3F0C; } // 800F3E04
  c->r[3]=c->r[27]|c->r[27]; // 800F3E08
  c->lr=0x800F3E10u; f_800D4394(c); // 800F3E0C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3E10
  if (!crb(c,2)) { goto L_800F3E28; } // 800F3E14
  c->r[3]=c->r[28]+0x00000034u; // 800F3E18
  c->r[4]=c->r[13]+0xFFFF82D8u; // 800F3E1C
  c->lr=0x800F3E24u; f_800DB9A8(c); // 800F3E20
  goto L_800F3E9C; // 800F3E24
L_800F3E28:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 800F3E28
  cmps(c,0,(int32_t)c->r[0],47); // 800F3E2C
  if (!crb(c,2)) { goto L_800F3E3C; } // 800F3E30
  c->r[0]=0u+0x00000000u; // 800F3E34
  goto L_800F3E40; // 800F3E38
L_800F3E3C:;
  c->r[0]=0u+0x00000001u; // 800F3E3C
L_800F3E40:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F3E40
  if (crb(c,2)) { goto L_800F3E60; } // 800F3E44
  c->r[4]=0u+0x80280000u; // 800F3E48
  c->r[5]=c->r[27]|c->r[27]; // 800F3E4C
  c->r[3]=c->r[28]+0x00000034u; // 800F3E50
  c->r[4]=c->r[4]+0xFFFFB400u; // 800F3E54
  c->lr=0x800F3E5Cu; f_800F3684(c); // 800F3E58
  goto L_800F3E9C; // 800F3E5C
L_800F3E60:;
  c->r[4]=c->r[27]|c->r[27]; // 800F3E60
  c->r[3]=c->r[28]+0x00000034u; // 800F3E64
  c->lr=0x800F3E6Cu; f_800DB9A8(c); // 800F3E68
  c->r[3]=c->r[28]+0x00000034u; // 800F3E6C
  c->lr=0x800F3E74u; f_800D4394(c); // 800F3E70
  cmps(c,0,(int32_t)c->r[3],0); // 800F3E74
  if (crb(c,2)) { goto L_800F3E9C; } // 800F3E78
  c->r[4]=c->r[3]+c->r[28]; // 800F3E7C
  c->r[0]=R8(c->r[4]+0x00000033u); // 800F3E80
  cmps(c,0,(int32_t)c->r[0],47); // 800F3E84
  if (!crb(c,2)) { goto L_800F3E9C; } // 800F3E88
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F3E8C
  if (crb(c,2)) { goto L_800F3E9C; } // 800F3E90
  c->r[0]=0u+0x00000000u; // 800F3E94
  W8(c->r[4]+0x00000033u,c->r[0]); // 800F3E98
L_800F3E9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F3E9C
  if (!crb(c,2)) { goto L_800F3EE8; } // 800F3EA0
  c->r[4]=0u+0x80280000u; // 800F3EA4
  c->r[3]=c->r[28]+0x00000034u; // 800F3EA8
  c->r[4]=c->r[4]+0xFFFFB45Cu; // 800F3EAC
  c->r[5]=0u+0x00000009u; // 800F3EB0
  c->lr=0x800F3EB8u; f_800DBC40(c); // 800F3EB4
  cmps(c,0,(int32_t)c->r[3],0); // 800F3EB8
  if (!crb(c,2)) { goto L_800F3ED4; } // 800F3EBC
  c->r[0]=R8(c->r[28]+0x0000003Du); // 800F3EC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3EC4
  if (crb(c,2)) { goto L_800F3ED4; } // 800F3EC8
  c->r[0]=0u+0x00000001u; // 800F3ECC
  goto L_800F3ED8; // 800F3ED0
L_800F3ED4:;
  c->r[0]=0u+0x00000000u; // 800F3ED4
L_800F3ED8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F3ED8
  if (crb(c,2)) { goto L_800F3EE8; } // 800F3EDC
  c->r[3]=0u+0xFFFFFF9Au; // 800F3EE0
  goto L_800F4080; // 800F3EE4
L_800F3EE8:;
  c->r[6]=0u+0x800F0000u; // 800F3EE8
  W32(c->r[28]+0x00000088u,c->r[30]); // 800F3EEC
  c->r[7]=c->r[28]|c->r[28]; // 800F3EF0
  c->r[3]=c->r[28]+0x00000034u; // 800F3EF4
  c->r[5]=c->r[28]+0x00000030u; // 800F3EF8
  c->r[6]=c->r[6]+0x000040E0u; // 800F3EFC
  c->r[4]=0u+0x00000000u; // 800F3F00
  c->lr=0x800F3F08u; f_800EEBCC(c); // 800F3F04
  goto L_800F4080; // 800F3F08
L_800F3F0C:;
  c->r[0]=0u+0x00000000u; // 800F3F0C
  c->r[3]=c->r[27]|c->r[27]; // 800F3F10
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F3F14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3F18
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F3F1C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F3F20
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F3F24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3F28
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F3F2C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F3F30
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F3F34
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F3F38
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F3F3C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F3F40
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F3F44
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F3F48
  W32(c->r[1]+0x00000048u,c->r[0]); // 800F3F4C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800F3F50
  c->lr=0x800F3F58u; f_800D4394(c); // 800F3F54
  cmps(c,0,(int32_t)c->r[3],0); // 800F3F58
  if (!crb(c,2)) { goto L_800F3F70; } // 800F3F5C
  c->r[3]=c->r[1]+0x00000010u; // 800F3F60
  c->r[4]=c->r[13]+0xFFFF82D8u; // 800F3F64
  c->lr=0x800F3F6Cu; f_800DB9A8(c); // 800F3F68
  goto L_800F3FE8; // 800F3F6C
L_800F3F70:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 800F3F70
  cmps(c,0,(int32_t)c->r[0],47); // 800F3F74
  if (!crb(c,2)) { goto L_800F3F84; } // 800F3F78
  c->r[0]=0u+0x00000000u; // 800F3F7C
  goto L_800F3F88; // 800F3F80
L_800F3F84:;
  c->r[0]=0u+0x00000001u; // 800F3F84
L_800F3F88:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F3F88
  if (crb(c,2)) { goto L_800F3FA8; } // 800F3F8C
  c->r[4]=0u+0x80280000u; // 800F3F90
  c->r[5]=c->r[27]|c->r[27]; // 800F3F94
  c->r[3]=c->r[1]+0x00000010u; // 800F3F98
  c->r[4]=c->r[4]+0xFFFFB400u; // 800F3F9C
  c->lr=0x800F3FA4u; f_800F3684(c); // 800F3FA0
  goto L_800F3FE8; // 800F3FA4
L_800F3FA8:;
  c->r[4]=c->r[27]|c->r[27]; // 800F3FA8
  c->r[3]=c->r[1]+0x00000010u; // 800F3FAC
  c->lr=0x800F3FB4u; f_800DB9A8(c); // 800F3FB0
  c->r[3]=c->r[1]+0x00000010u; // 800F3FB4
  c->lr=0x800F3FBCu; f_800D4394(c); // 800F3FB8
  cmps(c,0,(int32_t)c->r[3],0); // 800F3FBC
  if (crb(c,2)) { goto L_800F3FE8; } // 800F3FC0
  c->r[0]=c->r[1]+0x00000010u; // 800F3FC4
  c->r[4]=c->r[3]+c->r[0]; // 800F3FC8
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 800F3FCC
  cmps(c,0,(int32_t)c->r[0],47); // 800F3FD0
  if (!crb(c,2)) { goto L_800F3FE8; } // 800F3FD4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F3FD8
  if (crb(c,2)) { goto L_800F3FE8; } // 800F3FDC
  c->r[0]=0u+0x00000000u; // 800F3FE0
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 800F3FE4
L_800F3FE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F3FE8
  if (!crb(c,2)) { goto L_800F4034; } // 800F3FEC
  c->r[4]=0u+0x80280000u; // 800F3FF0
  c->r[3]=c->r[1]+0x00000010u; // 800F3FF4
  c->r[4]=c->r[4]+0xFFFFB45Cu; // 800F3FF8
  c->r[5]=0u+0x00000009u; // 800F3FFC
  c->lr=0x800F4004u; f_800DBC40(c); // 800F4000
  cmps(c,0,(int32_t)c->r[3],0); // 800F4004
  if (!crb(c,2)) { goto L_800F4020; } // 800F4008
  c->r[0]=R8(c->r[1]+0x00000019u); // 800F400C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4010
  if (crb(c,2)) { goto L_800F4020; } // 800F4014
  c->r[0]=0u+0x00000001u; // 800F4018
  goto L_800F4024; // 800F401C
L_800F4020:;
  c->r[0]=0u+0x00000000u; // 800F4020
L_800F4024:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F4024
  if (crb(c,2)) { goto L_800F4034; } // 800F4028
  c->r[3]=0u+0xFFFFFF9Au; // 800F402C
  goto L_800F4080; // 800F4030
L_800F4034:;
  c->r[0]=0u+0x00000000u; // 800F4034
  c->r[3]=c->r[1]+0x00000010u; // 800F4038
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F403C
  c->r[5]=c->r[1]+0x00000008u; // 800F4040
  c->r[4]=0u+0x00000000u; // 800F4044
  c->lr=0x800F404Cu; f_800EEA78(c); // 800F4048
  cmps(c,0,(int32_t)c->r[3],0); // 800F404C
  if (crb(c,2)) { goto L_800F405C; } // 800F4050
  cmps(c,0,(int32_t)c->r[3],-102); // 800F4054
  if (!crb(c,2)) { goto L_800F406C; } // 800F4058
L_800F405C:;
  c->r[0]=0u+0x00000002u; // 800F405C
  c->r[3]=0u+0x00000000u; // 800F4060
  W8(c->r[30]+0x00000000u,c->r[0]); // 800F4064
  goto L_800F4080; // 800F4068
L_800F406C:;
  cmps(c,0,(int32_t)c->r[3],-101); // 800F406C
  if (!crb(c,2)) { goto L_800F4080; } // 800F4070
  c->r[0]=0u+0x00000001u; // 800F4074
  c->r[3]=0u+0x00000000u; // 800F4078
  W8(c->r[30]+0x00000000u,c->r[0]); // 800F407C
L_800F4080:;
  c->r[11]=c->r[1]+0x00000070u; // 800F4080
  c->lr=0x800F4088u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F4084
  c->r[0]=R32(c->r[1]+0x00000074u); // 800F4088
  c->lr=c->r[0]; // 800F408C
  c->r[1]=c->r[1]+0x00000070u; // 800F4090
  return; // 800F4094
}

// NANDPrivateGetTypeAsync
void f_800F4098(Ctx* __restrict c) {
  trace_call(0x800F4098u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4098
  c->r[0]=c->lr; // 800F409C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F40A0
  c->r[0]=R32(c->r[13]+0xFFFF92E0u); // 800F40A4
  cmps(c,0,(int32_t)c->r[0],2); // 800F40A8
  if (crb(c,2)) { goto L_800F40B8; } // 800F40AC
  c->r[3]=0u+0xFFFFFF80u; // 800F40B0
  goto L_800F40D0; // 800F40B4
L_800F40B8:;
  W32(c->r[6]+0x00000004u,c->r[5]); // 800F40B8
  c->r[5]=c->r[6]|c->r[6]; // 800F40BC
  c->r[6]=0u+0x00000001u; // 800F40C0
  c->r[7]=0u+0x00000001u; // 800F40C4
  c->lr=0x800F40CCu; f_800F3DC4(c); // 800F40C8
  c->lr=0x800F40D0u; f_800F3864(c); // 800F40CC
L_800F40D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F40D0
  c->lr=c->r[0]; // 800F40D4
  c->r[1]=c->r[1]+0x00000010u; // 800F40D8
  return; // 800F40DC
}

// nandGetTypeCallback
void f_800F40E0(Ctx* __restrict c) {
  trace_call(0x800F40E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F40E0
  c->r[0]=c->lr; // 800F40E4
  cmps(c,0,(int32_t)c->r[3],0); // 800F40E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F40EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F40F0
  c->r[31]=c->r[4]|c->r[4]; // 800F40F4
  if (crb(c,2)) { goto L_800F4104; } // 800F40F8
  cmps(c,0,(int32_t)c->r[3],-102); // 800F40FC
  if (!crb(c,2)) { goto L_800F4118; } // 800F4100
L_800F4104:;
  c->r[4]=R32(c->r[4]+0x00000088u); // 800F4104
  c->r[0]=0u+0x00000002u; // 800F4108
  c->r[3]=0u+0x00000000u; // 800F410C
  W8(c->r[4]+0x00000000u,c->r[0]); // 800F4110
  goto L_800F4130; // 800F4114
L_800F4118:;
  cmps(c,0,(int32_t)c->r[3],-101); // 800F4118
  if (!crb(c,2)) { goto L_800F4130; } // 800F411C
  c->r[4]=R32(c->r[4]+0x00000088u); // 800F4120
  c->r[0]=0u+0x00000001u; // 800F4124
  c->r[3]=0u+0x00000000u; // 800F4128
  W8(c->r[4]+0x00000000u,c->r[0]); // 800F412C
L_800F4130:;
  c->lr=0x800F4134u; f_800F3864(c); // 800F4130
  c->r[12]=R32(c->r[31]+0x00000004u); // 800F4134
  c->r[4]=c->r[31]|c->r[31]; // 800F4138
  c->ctr=c->r[12]; // 800F413C
  if (true) { c->lr=0x800F4144u; dispatch(c,c->ctr); } // 800F4140
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4144
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4148
  c->lr=c->r[0]; // 800F414C
  c->r[1]=c->r[1]+0x00000010u; // 800F4150
  return; // 800F4154
}

// nandGetHomeDir
void f_800F4158(Ctx* __restrict c) {
  trace_call(0x800F4158u);
  c->r[3]=0u+0x802D0000u; // 800F4158
  c->r[3]=c->r[3]+0x00002D60u; // 800F415C
  return; // 800F4160
}

// NANDSecretGetUsage
void f_800F4164(Ctx* __restrict c) {
  trace_call(0x800F4164u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4164
  c->r[0]=c->lr; // 800F4168
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F416C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800F4170
  c->r[31]=c->r[5]|c->r[5]; // 800F4174
  W32(c->r[1]+0x00000058u,c->r[30]); // 800F4178
  c->r[30]=c->r[4]|c->r[4]; // 800F417C
  W32(c->r[1]+0x00000054u,c->r[29]); // 800F4180
  c->r[29]=c->r[3]|c->r[3]; // 800F4184
  c->lr=0x800F418Cu; f_800F384C(c); // 800F4188
  cmps(c,0,(int32_t)c->r[3],0); // 800F418C
  if (!crb(c,2)) { goto L_800F419C; } // 800F4190
  c->r[3]=0u+0xFFFFFF80u; // 800F4194
  goto L_800F4200; // 800F4198
L_800F419C:;
  c->r[0]=0u+0x00000000u; // 800F419C
  c->r[4]=c->r[29]|c->r[29]; // 800F41A0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F41A4
  c->r[3]=c->r[1]+0x00000008u; // 800F41A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F41AC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F41B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F41B4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F41B8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F41BC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F41C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F41C4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F41C8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F41CC
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F41D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F41D4
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F41D8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F41DC
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F41E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F41E4
  c->lr=0x800F41ECu; f_800F39C4(c); // 800F41E8
  c->r[4]=c->r[30]|c->r[30]; // 800F41EC
  c->r[5]=c->r[31]|c->r[31]; // 800F41F0
  c->r[3]=c->r[1]+0x00000008u; // 800F41F4
  c->lr=0x800F41FCu; f_800EF24C(c); // 800F41F8
  c->lr=0x800F4200u; f_800F3864(c); // 800F41FC
L_800F4200:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F4200
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800F4204
  c->r[30]=R32(c->r[1]+0x00000058u); // 800F4208
  c->r[29]=R32(c->r[1]+0x00000054u); // 800F420C
  c->lr=c->r[0]; // 800F4210
  c->r[1]=c->r[1]+0x00000060u; // 800F4214
  return; // 800F4218
}

// nandCalcUsage
void f_800F421C(Ctx* __restrict c) {
  trace_call(0x800F421Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F421C
  c->r[0]=c->lr; // 800F4220
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4224
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F4228
  c->r[31]=0u+0x00000000u; // 800F422C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F4230
  c->r[30]=c->r[5]|c->r[5]; // 800F4234
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F4238
  c->r[29]=c->r[4]|c->r[4]; // 800F423C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F4240
  c->r[28]=c->r[3]|c->r[3]; // 800F4244
  W32(c->r[3]+0x00000000u,c->r[31]); // 800F4248
  c->r[3]=0u+0xFFFFFF8Bu; // 800F424C
  W32(c->r[4]+0x00000000u,c->r[31]); // 800F4250
  goto L_800F42AC; // 800F4254
L_800F4258:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4258
  c->r[4]=c->r[1]+0x0000000Cu; // 800F425C
  c->r[5]=c->r[1]+0x00000008u; // 800F4260
  W32(c->r[1]+0x00000008u,c->r[31]); // 800F4264
  c->r[3]=R32(c->r[30]+0x00000000u); // 800F4268
  c->lr=0x800F4270u; f_800EF24C(c); // 800F426C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4270
  if (!crb(c,2)) { goto L_800F429C; } // 800F4274
  c->r[4]=R32(c->r[28]+0x00000000u); // 800F4278
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800F427C
  c->r[0]=c->r[4]+c->r[0]; // 800F4280
  W32(c->r[28]+0x00000000u,c->r[0]); // 800F4284
  c->r[4]=R32(c->r[29]+0x00000000u); // 800F4288
  c->r[0]=R32(c->r[1]+0x00000008u); // 800F428C
  c->r[0]=c->r[4]+c->r[0]; // 800F4290
  W32(c->r[29]+0x00000000u,c->r[0]); // 800F4294
  goto L_800F42A8; // 800F4298
L_800F429C:;
  cmps(c,0,(int32_t)c->r[3],-106); // 800F429C
  if (!crb(c,2)) { goto L_800F42B8; } // 800F42A0
  c->r[3]=0u+0x00000000u; // 800F42A4
L_800F42A8:;
  c->r[30]=c->r[30]+0x00000004u; // 800F42A8
L_800F42AC:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800F42AC
  cmps(c,0,(int32_t)c->r[0],0); // 800F42B0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4258; } // 800F42B4
L_800F42B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F42B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F42BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F42C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F42C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F42C8
  c->lr=c->r[0]; // 800F42CC
  c->r[1]=c->r[1]+0x00000020u; // 800F42D0
  return; // 800F42D4
}

// NANDCheck
void f_800F42D8(Ctx* __restrict c) {
  trace_call(0x800F42D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F42D8
  c->r[0]=c->lr; // 800F42DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F42E0
  c->r[0]=0u+0xFFFFFFFFu; // 800F42E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F42E8
  c->r[31]=c->r[5]|c->r[5]; // 800F42EC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800F42F0
  c->r[30]=c->r[4]|c->r[4]; // 800F42F4
  W32(c->r[1]+0x00000024u,c->r[29]); // 800F42F8
  c->r[29]=c->r[3]|c->r[3]; // 800F42FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4300
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F4304
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F4308
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F430C
  c->lr=0x800F4314u; f_800F384C(c); // 800F4310
  cmps(c,0,(int32_t)c->r[3],0); // 800F4314
  if (!crb(c,2)) { goto L_800F4324; } // 800F4318
  c->r[3]=0u+0xFFFFFF80u; // 800F431C
  goto L_800F43C4; // 800F4320
L_800F4324:;
  c->lr=0x800F4328u; f_800F4158(c); // 800F4324
  c->r[4]=c->r[1]+0x00000014u; // 800F4328
  c->r[5]=c->r[1]+0x00000010u; // 800F432C
  c->lr=0x800F4334u; f_800EF24C(c); // 800F4330
  cmps(c,0,(int32_t)c->r[3],0); // 800F4334
  if (crb(c,2)) { goto L_800F4344; } // 800F4338
  c->lr=0x800F4340u; f_800F3864(c); // 800F433C
  goto L_800F43C4; // 800F4340
L_800F4344:;
  c->r[5]=0u+0x80280000u; // 800F4344
  c->r[3]=c->r[1]+0x0000000Cu; // 800F4348
  c->r[4]=c->r[1]+0x00000008u; // 800F434C
  c->r[5]=c->r[5]+0xFFFFB570u; // 800F4350
  c->lr=0x800F4358u; f_800F421C(c); // 800F4354
  cmps(c,0,(int32_t)c->r[3],0); // 800F4358
  if (crb(c,2)) { goto L_800F4368; } // 800F435C
  c->lr=0x800F4364u; f_800F3864(c); // 800F4360
  goto L_800F43C4; // 800F4364
L_800F4368:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4368
  c->r[5]=0u+0x00000000u; // 800F436C
  c->r[4]=R32(c->r[1]+0x00000008u); // 800F4370
  c->r[0]=c->r[0]+c->r[29]; // 800F4374
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800F4378
  cmpu(c,0,c->r[0],0x00000400u); // 800F437C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800F4380
  if (!crb(c,1)) { goto L_800F438C; } // 800F4384
  c->r[5]=c->r[5]|0x00000001u; // 800F4388
L_800F438C:;
  c->r[0]=c->r[0]+c->r[30]; // 800F438C
  cmpu(c,0,c->r[0],0x00000021u); // 800F4390
  if (!crb(c,1)) { goto L_800F439C; } // 800F4394
  c->r[5]=c->r[5]|0x00000002u; // 800F4398
L_800F439C:;
  c->r[0]=c->r[3]+c->r[29]; // 800F439C
  cmpu(c,0,c->r[0],0x00004400u); // 800F43A0
  if (!crb(c,1)) { goto L_800F43AC; } // 800F43A4
  c->r[5]=c->r[5]|0x00000004u; // 800F43A8
L_800F43AC:;
  c->r[0]=c->r[4]+c->r[30]; // 800F43AC
  cmpu(c,0,c->r[0],0x00000FA0u); // 800F43B0
  if (!crb(c,1)) { goto L_800F43BC; } // 800F43B4
  c->r[5]=c->r[5]|0x00000008u; // 800F43B8
L_800F43BC:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 800F43BC
  c->r[3]=0u+0x00000000u; // 800F43C0
L_800F43C4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F43C4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F43C8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800F43CC
  c->r[29]=R32(c->r[1]+0x00000024u); // 800F43D0
  c->lr=c->r[0]; // 800F43D4
  c->r[1]=c->r[1]+0x00000030u; // 800F43D8
  return; // 800F43DC
}

// reserveFileDescriptor
void f_800F43E0(Ctx* __restrict c) {
  trace_call(0x800F43E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F43E0
  c->r[0]=c->lr; // 800F43E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F43E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F43EC
  c->lr=0x800F43F4u; f_800B087C(c); // 800F43F0
  c->r[0]=R32(c->r[13]+0xFFFF8300u); // 800F43F4
  cmps(c,0,(int32_t)c->r[0],-255); // 800F43F8
  if (!crb(c,2)) { goto L_800F4410; } // 800F43FC
  c->r[0]=0u+0xFFFFFF02u; // 800F4400
  c->r[31]=0u+0x00000000u; // 800F4404
  W32(c->r[13]+0xFFFF8300u,c->r[0]); // 800F4408
  goto L_800F4414; // 800F440C
L_800F4410:;
  c->r[31]=0u+0x00000001u; // 800F4410
L_800F4414:;
  c->lr=0x800F4418u; f_800B08A4(c); // 800F4414
  c->r[0]=cntlz(c->r[31]); // 800F4418
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F441C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F4420
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4424
  c->lr=c->r[0]; // 800F4428
  c->r[1]=c->r[1]+0x00000010u; // 800F442C
  return; // 800F4430
}

// NANDLoggingAddMessageAsync
void f_800F4434(Ctx* __restrict c) {
  trace_call(0x800F4434u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4434
  c->r[0]=c->lr; // 800F4438
  W32(c->r[1]+0x00000084u,c->r[0]); // 800F443C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800F4440
  c->r[31]=c->r[4]|c->r[4]; // 800F4444
  W32(c->r[1]+0x00000078u,c->r[30]); // 800F4448
  c->r[30]=c->r[3]|c->r[3]; // 800F444C
  if (!crb(c,6)) { goto L_800F4474; } // 800F4450
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800F4454
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800F4458
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800F445C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800F4460
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800F4464
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800F4468
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800F446C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800F4470
L_800F4474:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F4474
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800F4478
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F447C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800F4480
  W32(c->r[1]+0x00000018u,c->r[7]); // 800F4484
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800F4488
  W32(c->r[1]+0x00000020u,c->r[9]); // 800F448C
  W32(c->r[1]+0x00000024u,c->r[10]); // 800F4490
  c->lr=0x800F4498u; f_800F43E0(c); // 800F4494
  cmps(c,0,(int32_t)c->r[3],0); // 800F4498
  if (!crb(c,2)) { goto L_800F44A8; } // 800F449C
  c->r[3]=0u+0x00000000u; // 800F44A0
  goto L_800F4514; // 800F44A4
L_800F44A8:;
  c->r[4]=c->r[1]+0x00000088u; // 800F44A8
  c->r[0]=c->r[1]+0x00000008u; // 800F44AC
  c->r[5]=0u+0x02000000u; // 800F44B0
  c->r[3]=0u+0x802D0000u; // 800F44B4
  W32(c->r[1]+0x00000068u,c->r[5]); // 800F44B8
  c->r[6]=c->r[1]+0x00000068u; // 800F44BC
  c->r[5]=c->r[31]|c->r[31]; // 800F44C0
  c->r[3]=c->r[3]+0x00002DC0u; // 800F44C4
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800F44C8
  c->r[4]=0u+0x00000100u; // 800F44CC
  W32(c->r[1]+0x00000070u,c->r[0]); // 800F44D0
  c->lr=0x800F44D8u; f_800DA1C8(c); // 800F44D4
  c->r[0]=0u+0x00000001u; // 800F44D8
  c->r[3]=0u+0x80280000u; // 800F44DC
  c->r[5]=0u+0x800F0000u; // 800F44E0
  W32(c->r[13]+0xFFFF92E8u,c->r[30]); // 800F44E4
  c->r[3]=c->r[3]+0xFFFFB5A0u; // 800F44E8
  c->r[4]=0u+0x00000003u; // 800F44EC
  W32(c->r[13]+0xFFFF92ECu,c->r[0]); // 800F44F0
  c->r[5]=c->r[5]+0x0000452Cu; // 800F44F4
  c->r[6]=0u+0x00000000u; // 800F44F8
  c->lr=0x800F4500u; f_800EF634(c); // 800F44FC
  cmps(c,0,(int32_t)c->r[3],0); // 800F4500
  if (!crb(c,2)) { goto L_800F4510; } // 800F4504
  c->r[3]=0u+0x00000001u; // 800F4508
  goto L_800F4514; // 800F450C
L_800F4510:;
  c->r[3]=0u+0x00000000u; // 800F4510
L_800F4514:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800F4514
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800F4518
  c->r[30]=R32(c->r[1]+0x00000078u); // 800F451C
  c->lr=c->r[0]; // 800F4520
  c->r[1]=c->r[1]+0x00000080u; // 800F4524
  return; // 800F4528
}

// asyncRoutine
void f_800F452C(Ctx* __restrict c) {
  trace_call(0x800F452Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F452C
  c->r[0]=c->lr; // 800F4530
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F4534
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800F4538
  c->r[31]=c->r[3]|c->r[3]; // 800F453C
  W32(c->r[1]+0x00000088u,c->r[30]); // 800F4540
  c->r[30]=0u+0x802D0000u; // 800F4544
  c->r[30]=c->r[30]+0x00002DC0u; // 800F4548
  c->r[4]=R32(c->r[13]+0xFFFF92ECu); // 800F454C
  c->r[0]=c->r[4]+0x00000001u; // 800F4550
  cmps(c,0,(int32_t)c->r[0],2); // 800F4554
  W32(c->r[13]+0xFFFF92ECu,c->r[0]); // 800F4558
  if (!crb(c,2)) { goto L_800F45C4; } // 800F455C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4560
  if (crb(c,0)) { goto L_800F45A8; } // 800F4564
  c->r[6]=0u+0x800F0000u; // 800F4568
  W32(c->r[13]+0xFFFF8300u,c->r[3]); // 800F456C
  c->r[6]=c->r[6]+0x0000452Cu; // 800F4570
  c->r[4]=0u+0x00000000u; // 800F4574
  c->r[5]=0u+0x00000000u; // 800F4578
  c->r[7]=0u+0x00000000u; // 800F457C
  c->lr=0x800F4584u; f_800EF7C0(c); // 800F4580
  cmps(c,0,(int32_t)c->r[3],0); // 800F4584
  if (crb(c,2)) { goto L_800F4998; } // 800F4588
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F458C
  cmps(c,0,(int32_t)c->r[12],0); // 800F4590
  if (crb(c,2)) { goto L_800F4998; } // 800F4594
  c->r[3]=0u+0x00000000u; // 800F4598
  c->ctr=c->r[12]; // 800F459C
  if (true) { c->lr=0x800F45A4u; dispatch(c,c->ctr); } // 800F45A0
  goto L_800F4998; // 800F45A4
L_800F45A8:;
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F45A8
  cmps(c,0,(int32_t)c->r[12],0); // 800F45AC
  if (crb(c,2)) { goto L_800F4998; } // 800F45B0
  c->r[3]=0u+0x00000000u; // 800F45B4
  c->ctr=c->r[12]; // 800F45B8
  if (true) { c->lr=0x800F45C0u; dispatch(c,c->ctr); } // 800F45BC
  goto L_800F4998; // 800F45C0
L_800F45C4:;
  cmps(c,0,(int32_t)c->r[0],3); // 800F45C4
  if (!crb(c,2)) { goto L_800F4630; } // 800F45C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F45CC
  if (!crb(c,2)) { goto L_800F4614; } // 800F45D0
  c->r[6]=0u+0x800F0000u; // 800F45D4
  c->r[3]=R32(c->r[13]+0xFFFF8300u); // 800F45D8
  c->r[4]=c->r[30]+0x00000100u; // 800F45DC
  c->r[5]=0u+0x00000100u; // 800F45E0
  c->r[6]=c->r[6]+0x0000452Cu; // 800F45E4
  c->r[7]=0u+0x00000000u; // 800F45E8
  c->lr=0x800F45F0u; f_800EF86C(c); // 800F45EC
  cmps(c,0,(int32_t)c->r[3],0); // 800F45F0
  if (crb(c,2)) { goto L_800F4998; } // 800F45F4
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F45F8
  cmps(c,0,(int32_t)c->r[12],0); // 800F45FC
  if (crb(c,2)) { goto L_800F4998; } // 800F4600
  c->r[3]=0u+0x00000000u; // 800F4604
  c->ctr=c->r[12]; // 800F4608
  if (true) { c->lr=0x800F4610u; dispatch(c,c->ctr); } // 800F460C
  goto L_800F4998; // 800F4610
L_800F4614:;
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F4614
  cmps(c,0,(int32_t)c->r[12],0); // 800F4618
  if (crb(c,2)) { goto L_800F4998; } // 800F461C
  c->r[3]=0u+0x00000000u; // 800F4620
  c->ctr=c->r[12]; // 800F4624
  if (true) { c->lr=0x800F462Cu; dispatch(c,c->ctr); } // 800F4628
  goto L_800F4998; // 800F462C
L_800F4630:;
  cmps(c,0,(int32_t)c->r[0],4); // 800F4630
  if (!crb(c,2)) { goto L_800F469C; } // 800F4634
  cmps(c,0,(int32_t)c->r[3],256); // 800F4638
  if (!crb(c,2)) { goto L_800F4680; } // 800F463C
  c->r[6]=0u+0x800F0000u; // 800F4640
  c->r[3]=R32(c->r[13]+0xFFFF8300u); // 800F4644
  c->r[6]=c->r[6]+0x0000452Cu; // 800F4648
  c->r[4]=0u+0x00000000u; // 800F464C
  c->r[5]=0u+0x00000000u; // 800F4650
  c->r[7]=0u+0x00000000u; // 800F4654
  c->lr=0x800F465Cu; f_800EF7C0(c); // 800F4658
  cmps(c,0,(int32_t)c->r[3],0); // 800F465C
  if (crb(c,2)) { goto L_800F4998; } // 800F4660
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F4664
  cmps(c,0,(int32_t)c->r[12],0); // 800F4668
  if (crb(c,2)) { goto L_800F4998; } // 800F466C
  c->r[3]=0u+0x00000000u; // 800F4670
  c->ctr=c->r[12]; // 800F4674
  if (true) { c->lr=0x800F467Cu; dispatch(c,c->ctr); } // 800F4678
  goto L_800F4998; // 800F467C
L_800F4680:;
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F4680
  cmps(c,0,(int32_t)c->r[12],0); // 800F4684
  if (crb(c,2)) { goto L_800F4998; } // 800F4688
  c->r[3]=0u+0x00000000u; // 800F468C
  c->ctr=c->r[12]; // 800F4690
  if (true) { c->lr=0x800F4698u; dispatch(c,c->ctr); } // 800F4694
  goto L_800F4998; // 800F4698
L_800F469C:;
  cmps(c,0,(int32_t)c->r[0],5); // 800F469C
  if (!crb(c,2)) { goto L_800F47F8; } // 800F46A0
  cmps(c,0,(int32_t)c->r[3],0); // 800F46A4
  if (!crb(c,2)) { goto L_800F47DC; } // 800F46A8
  c->r[3]=c->r[30]+0x00000100u; // 800F46AC
  c->r[0]=0u+0x00000000u; // 800F46B0
  W8(c->r[3]+0x000000FFu,c->r[0]); // 800F46B4
  c->lr=0x800F46BCu; f_800DDA7C(c); // 800F46B8
  c->r[31]=c->r[3]|c->r[3]; // 800F46BC
  c->r[3]=c->r[30]+0x00000200u; // 800F46C0
  c->r[4]=0u+0x00000020u; // 800F46C4
  c->r[5]=0u+0x000000FEu; // 800F46C8
  c->lr=0x800F46D0u; f_80004688(c); // 800F46CC
  c->lr=0x800F46D4u; f_800B48F4(c); // 800F46D0
  c->r[5]=c->r[1]+0x00000058u; // 800F46D4
  c->lr=0x800F46DCu; f_800B4B40(c); // 800F46D8
  c->lr=0x800F46E0u; f_800F4158(c); // 800F46DC
  c->r[4]=c->r[3]|c->r[3]; // 800F46E0
  c->r[3]=c->r[1]+0x00000018u; // 800F46E4
  c->r[4]=c->r[4]+0x00000007u; // 800F46E8
  c->r[5]=0u+0x00000011u; // 800F46EC
  c->lr=0x800F46F4u; f_800DBA68(c); // 800F46F0
  c->r[0]=0u+0x0000002Du; // 800F46F4
  c->r[4]=0u+0x00000000u; // 800F46F8
  W8(c->r[1]+0x00000029u,c->r[4]); // 800F46FC
  c->r[3]=0u+0x82080000u; // 800F4700
  c->r[5]=0u+0x80280000u; // 800F4704
  c->r[4]=c->r[1]+0x00000018u; // 800F4708
  W8(c->r[1]+0x00000020u,c->r[0]); // 800F470C
  c->r[0]=c->r[3]+0x00002083u; // 800F4710
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 800F4714
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[31])>>32); // 800F4718
  c->r[6]=c->r[30]+0x00000000u; // 800F471C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F4720
  c->r[5]=c->r[5]+0xFFFFB5BCu; // 800F4724
  c->r[3]=R32(c->r[1]+0x00000058u); // 800F4728
  c->r[0]=c->r[0]+c->r[31]; // 800F472C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800F4730
  c->r[0]=sraw(c,c->r[0],5); // 800F4734
  c->r[3]=c->r[30]+0x00000200u; // 800F4738
  W32(c->r[1]+0x00000010u,c->r[4]); // 800F473C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800F4740
  c->r[0]=c->r[0]+c->r[4]; // 800F4744
  W32(c->r[1]+0x00000014u,c->r[6]); // 800F4748
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)63); // 800F474C
  c->r[4]=0u+0x00000100u; // 800F4750
  c->r[8]=R32(c->r[1]+0x00000068u); // 800F4754
  c->r[6]=c->r[31]-c->r[0]; // 800F4758
  c->r[7]=R32(c->r[1]+0x0000006Cu); // 800F475C
  c->r[9]=R32(c->r[1]+0x00000064u); // 800F4760
  c->r[6]=c->r[6]+0x00000001u; // 800F4764
  c->r[10]=R32(c->r[1]+0x00000060u); // 800F4768
  c->r[8]=c->r[8]+0x00000001u; // 800F476C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F4770
  c->lr=0x800F4778u; f_800DA2D4(c); // 800F4774
  cmps(c,0,(int32_t)c->r[3],256); // 800F4778
  if (!crb(c,0)) { goto L_800F478C; } // 800F477C
  c->r[4]=c->r[30]+0x00000200u; // 800F4780
  c->r[0]=0u+0x00000020u; // 800F4784
  W8(c->r[4]+c->r[3],c->r[0]); // 800F4788
L_800F478C:;
  c->r[4]=c->r[30]+0x00000200u; // 800F478C
  c->r[3]=0u+0x0000000Du; // 800F4790
  c->r[0]=0u+0x0000000Au; // 800F4794
  c->r[6]=0u+0x800F0000u; // 800F4798
  W8(c->r[4]+0x000000FEu,c->r[3]); // 800F479C
  c->r[6]=c->r[6]+0x0000452Cu; // 800F47A0
  c->r[3]=R32(c->r[13]+0xFFFF8300u); // 800F47A4
  c->r[5]=0u+0x00000100u; // 800F47A8
  W8(c->r[4]+0x000000FFu,c->r[0]); // 800F47AC
  c->r[7]=0u+0x00000000u; // 800F47B0
  c->lr=0x800F47B8u; f_800EF930(c); // 800F47B4
  cmps(c,0,(int32_t)c->r[3],0); // 800F47B8
  if (crb(c,2)) { goto L_800F4998; } // 800F47BC
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F47C0
  cmps(c,0,(int32_t)c->r[12],0); // 800F47C4
  if (crb(c,2)) { goto L_800F4998; } // 800F47C8
  c->r[3]=0u+0x00000000u; // 800F47CC
  c->ctr=c->r[12]; // 800F47D0
  if (true) { c->lr=0x800F47D8u; dispatch(c,c->ctr); } // 800F47D4
  goto L_800F4998; // 800F47D8
L_800F47DC:;
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F47DC
  cmps(c,0,(int32_t)c->r[12],0); // 800F47E0
  if (crb(c,2)) { goto L_800F4998; } // 800F47E4
  c->r[3]=0u+0x00000000u; // 800F47E8
  c->ctr=c->r[12]; // 800F47EC
  if (true) { c->lr=0x800F47F4u; dispatch(c,c->ctr); } // 800F47F0
  goto L_800F4998; // 800F47F4
L_800F47F8:;
  cmps(c,0,(int32_t)c->r[0],6); // 800F47F8
  if (!crb(c,2)) { goto L_800F4870; } // 800F47FC
  cmps(c,0,(int32_t)c->r[3],256); // 800F4800
  if (!crb(c,2)) { goto L_800F4854; } // 800F4804
  c->r[3]=c->r[30]+0x00000100u; // 800F4808
  c->lr=0x800F4810u; f_800DDA7C(c); // 800F480C
  c->r[0]=c->r[3]|c->r[3]; // 800F4810
  c->r[6]=0u+0x800F0000u; // 800F4814
  c->r[3]=R32(c->r[13]+0xFFFF8300u); // 800F4818
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F481C
  c->r[6]=c->r[6]+0x0000452Cu; // 800F4820
  c->r[5]=0u+0x00000000u; // 800F4824
  c->r[7]=0u+0x00000000u; // 800F4828
  c->lr=0x800F4830u; f_800EF7C0(c); // 800F482C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4830
  if (crb(c,2)) { goto L_800F4998; } // 800F4834
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F4838
  cmps(c,0,(int32_t)c->r[12],0); // 800F483C
  if (crb(c,2)) { goto L_800F4998; } // 800F4840
  c->r[3]=0u+0x00000000u; // 800F4844
  c->ctr=c->r[12]; // 800F4848
  if (true) { c->lr=0x800F4850u; dispatch(c,c->ctr); } // 800F484C
  goto L_800F4998; // 800F4850
L_800F4854:;
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F4854
  cmps(c,0,(int32_t)c->r[12],0); // 800F4858
  if (crb(c,2)) { goto L_800F4998; } // 800F485C
  c->r[3]=0u+0x00000000u; // 800F4860
  c->ctr=c->r[12]; // 800F4864
  if (true) { c->lr=0x800F486Cu; dispatch(c,c->ctr); } // 800F4868
  goto L_800F4998; // 800F486C
L_800F4870:;
  cmps(c,0,(int32_t)c->r[0],7); // 800F4870
  if (!crb(c,2)) { goto L_800F48E8; } // 800F4874
  c->r[3]=c->r[30]+0x00000100u; // 800F4878
  c->lr=0x800F4880u; f_800DDA7C(c); // 800F487C
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800F4880
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800F4884
  if (!crb(c,2)) { goto L_800F48CC; } // 800F4888
  c->r[6]=0u+0x800F0000u; // 800F488C
  c->r[3]=R32(c->r[13]+0xFFFF8300u); // 800F4890
  c->r[4]=c->r[30]+0x00000200u; // 800F4894
  c->r[5]=0u+0x00000100u; // 800F4898
  c->r[6]=c->r[6]+0x0000452Cu; // 800F489C
  c->r[7]=0u+0x00000000u; // 800F48A0
  c->lr=0x800F48A8u; f_800EF930(c); // 800F48A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F48A8
  if (crb(c,2)) { goto L_800F4998; } // 800F48AC
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F48B0
  cmps(c,0,(int32_t)c->r[12],0); // 800F48B4
  if (crb(c,2)) { goto L_800F4998; } // 800F48B8
  c->r[3]=0u+0x00000000u; // 800F48BC
  c->ctr=c->r[12]; // 800F48C0
  if (true) { c->lr=0x800F48C8u; dispatch(c,c->ctr); } // 800F48C4
  goto L_800F4998; // 800F48C8
L_800F48CC:;
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F48CC
  cmps(c,0,(int32_t)c->r[12],0); // 800F48D0
  if (crb(c,2)) { goto L_800F4998; } // 800F48D4
  c->r[3]=0u+0x00000000u; // 800F48D8
  c->ctr=c->r[12]; // 800F48DC
  if (true) { c->lr=0x800F48E4u; dispatch(c,c->ctr); } // 800F48E0
  goto L_800F4998; // 800F48E4
L_800F48E8:;
  cmps(c,0,(int32_t)c->r[0],8); // 800F48E8
  if (!crb(c,2)) { goto L_800F494C; } // 800F48EC
  cmps(c,0,(int32_t)c->r[3],256); // 800F48F0
  if (!crb(c,2)) { goto L_800F4930; } // 800F48F4
  c->r[4]=0u+0x800F0000u; // 800F48F8
  c->r[3]=R32(c->r[13]+0xFFFF8300u); // 800F48FC
  c->r[4]=c->r[4]+0x0000452Cu; // 800F4900
  c->r[5]=0u+0x00000000u; // 800F4904
  c->lr=0x800F490Cu; f_800EF9D8(c); // 800F4908
  cmps(c,0,(int32_t)c->r[3],0); // 800F490C
  if (crb(c,2)) { goto L_800F4998; } // 800F4910
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F4914
  cmps(c,0,(int32_t)c->r[12],0); // 800F4918
  if (crb(c,2)) { goto L_800F4998; } // 800F491C
  c->r[3]=0u+0x00000000u; // 800F4920
  c->ctr=c->r[12]; // 800F4924
  if (true) { c->lr=0x800F492Cu; dispatch(c,c->ctr); } // 800F4928
  goto L_800F4998; // 800F492C
L_800F4930:;
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F4930
  cmps(c,0,(int32_t)c->r[12],0); // 800F4934
  if (crb(c,2)) { goto L_800F4998; } // 800F4938
  c->r[3]=0u+0x00000000u; // 800F493C
  c->ctr=c->r[12]; // 800F4940
  if (true) { c->lr=0x800F4948u; dispatch(c,c->ctr); } // 800F4944
  goto L_800F4998; // 800F4948
L_800F494C:;
  cmps(c,0,(int32_t)c->r[0],9); // 800F494C
  if (!crb(c,2)) { goto L_800F4998; } // 800F4950
  cmps(c,0,(int32_t)c->r[3],0); // 800F4954
  if (!crb(c,2)) { goto L_800F4980; } // 800F4958
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F495C
  c->r[0]=0u+0xFFFFFF01u; // 800F4960
  W32(c->r[13]+0xFFFF8300u,c->r[0]); // 800F4964
  cmps(c,0,(int32_t)c->r[12],0); // 800F4968
  if (crb(c,2)) { goto L_800F4998; } // 800F496C
  c->r[3]=0u+0x00000001u; // 800F4970
  c->ctr=c->r[12]; // 800F4974
  if (true) { c->lr=0x800F497Cu; dispatch(c,c->ctr); } // 800F4978
  goto L_800F4998; // 800F497C
L_800F4980:;
  c->r[12]=R32(c->r[13]+0xFFFF92E8u); // 800F4980
  cmps(c,0,(int32_t)c->r[12],0); // 800F4984
  if (crb(c,2)) { goto L_800F4998; } // 800F4988
  c->r[3]=0u+0x00000000u; // 800F498C
  c->ctr=c->r[12]; // 800F4990
  if (true) { c->lr=0x800F4998u; dispatch(c,c->ctr); } // 800F4994
L_800F4998:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F4998
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800F499C
  c->r[30]=R32(c->r[1]+0x00000088u); // 800F49A0
  c->lr=c->r[0]; // 800F49A4
  c->r[1]=c->r[1]+0x00000090u; // 800F49A8
  return; // 800F49AC
}

// SCInit
void f_800F49B0(Ctx* __restrict c) {
  trace_call(0x800F49B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F49B0
  c->r[0]=c->lr; // 800F49B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F49B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F49BC
  c->lr=0x800F49C4u; f_800B087C(c); // 800F49C0
  c->r[0]=R8(c->r[13]+0xFFFF9306u); // 800F49C4
  cmps(c,0,(int32_t)c->r[0],0); // 800F49C8
  if (crb(c,2)) { goto L_800F49D8; } // 800F49CC
  c->lr=0x800F49D4u; f_800B08A4(c); // 800F49D0
  goto L_800F4A3C; // 800F49D4
L_800F49D8:;
  c->r[31]=0u+0x00000001u; // 800F49D8
  W8(c->r[13]+0xFFFF9306u,c->r[31]); // 800F49DC
  W8(c->r[13]+0xFFFF92F0u,c->r[31]); // 800F49E0
  c->lr=0x800F49E8u; f_800B08A4(c); // 800F49E4
  c->r[3]=R32(c->r[13]+0xFFFF8308u); // 800F49E8
  c->lr=0x800F49F0u; f_800AAB54(c); // 800F49EC
  c->r[3]=0u+0x802D0000u; // 800F49F0
  c->r[3]=c->r[3]+0x000030C0u; // 800F49F4
  c->lr=0x800F49FCu; f_800B356C(c); // 800F49F8
  c->lr=0x800F4A00u; f_800A9880(c); // 800F49FC
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 800F4A00
  if (crb(c,2)) { goto L_800F4A0C; } // 800F4A04
  W8(c->r[13]+0xFFFF9304u,c->r[31]); // 800F4A08
L_800F4A0C:;
  c->lr=0x800F4A10u; f_800F3B30(c); // 800F4A0C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4A10
  if (!crb(c,2)) { goto L_800F4A34; } // 800F4A14
  c->r[3]=0u+0x802D0000u; // 800F4A18
  c->r[4]=0u+0x00004000u; // 800F4A1C
  c->r[3]=c->r[3]+0x00003260u; // 800F4A20
  c->r[5]=0u+0x00000000u; // 800F4A24
  c->lr=0x800F4A2Cu; f_800F4B6C(c); // 800F4A28
  cmps(c,0,(int32_t)c->r[3],0); // 800F4A2C
  if (crb(c,2)) { goto L_800F4A3C; } // 800F4A30
L_800F4A34:;
  c->r[0]=0u+0x00000002u; // 800F4A34
  W8(c->r[13]+0xFFFF92F0u,c->r[0]); // 800F4A38
L_800F4A3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4A3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4A40
  c->lr=c->r[0]; // 800F4A44
  c->r[1]=c->r[1]+0x00000010u; // 800F4A48
  return; // 800F4A4C
}

// SCCheckStatus
void f_800F4A50(Ctx* __restrict c) {
  trace_call(0x800F4A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4A50
  c->r[0]=c->lr; // 800F4A54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4A58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F4A5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F4A60
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F4A64
  c->lr=0x800F4A6Cu; f_800B087C(c); // 800F4A68
  c->r[29]=R8(c->r[13]+0xFFFF92F0u); // 800F4A6C
  cmpu(c,0,c->r[29],0x00000003u); // 800F4A70
  if (!crb(c,2)) { goto L_800F4B48; } // 800F4A74
  c->r[0]=0u+0x00000001u; // 800F4A78
  W8(c->r[13]+0xFFFF92F0u,c->r[0]); // 800F4A7C
  c->lr=0x800F4A84u; f_800B08A4(c); // 800F4A80
  c->r[31]=0u+0x802D0000u; // 800F4A84
  c->r[31]=c->r[31]+0x000030C0u; // 800F4A88
  c->r[3]=R32(c->r[31]+0x0000016Cu); // 800F4A8C
  c->r[4]=R32(c->r[31]+0x0000017Cu); // 800F4A90
  c->lr=0x800F4A98u; f_800F5004(c); // 800F4A94
  cmps(c,0,(int32_t)c->r[3],0); // 800F4A98
  if (!crb(c,2)) { goto L_800F4ADC; } // 800F4A9C
  c->lr=0x800F4AA4u; f_800B087C(c); // 800F4AA0
  c->r[5]=0u+0x802D0000u; // 800F4AA4
  c->r[4]=R32(c->r[31]+0x0000016Cu); // 800F4AA8
  c->r[5]=c->r[5]+0x00003260u; // 800F4AAC
  c->r[29]=c->r[3]|c->r[3]; // 800F4AB0
  cmpu(c,0,c->r[5],c->r[4]); // 800F4AB4
  if (crb(c,2)) { goto L_800F4AC8; } // 800F4AB8
  c->r[3]=c->r[5]|c->r[5]; // 800F4ABC
  c->r[5]=0u+0x00004000u; // 800F4AC0
  c->lr=0x800F4AC8u; f_80004338(c); // 800F4AC4
L_800F4AC8:;
  c->r[0]=0u+0x00000000u; // 800F4AC8
  c->r[3]=c->r[29]|c->r[29]; // 800F4ACC
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F4AD0
  c->lr=0x800F4AD8u; f_800B08A4(c); // 800F4AD4
  goto L_800F4B3C; // 800F4AD8
L_800F4ADC:;
  c->lr=0x800F4AE0u; f_800B087C(c); // 800F4ADC
  c->r[31]=R32(c->r[31]+0x0000016Cu); // 800F4AE0
  c->r[29]=c->r[3]|c->r[3]; // 800F4AE4
  c->r[30]=0u+0x00004000u; // 800F4AE8
  c->r[4]=0u+0x00000000u; // 800F4AEC
  c->r[3]=c->r[31]|c->r[31]; // 800F4AF0
  c->r[5]=0u+0x00004000u; // 800F4AF4
  c->lr=0x800F4AFCu; f_80004688(c); // 800F4AF8
  cmpu(c,0,c->r[30],0x0000000Cu); // 800F4AFC
  if (!crb(c,1)) { goto L_800F4B2C; } // 800F4B00
  c->r[3]=c->r[31]|c->r[31]; // 800F4B04
  c->r[4]=c->r[13]+0xFFFF8400u; // 800F4B08
  c->r[5]=0u+0x00000004u; // 800F4B0C
  c->lr=0x800F4B14u; f_80004338(c); // 800F4B10
  c->r[3]=c->r[31]+0x00003FFCu; // 800F4B14
  c->r[4]=c->r[13]+0xFFFF8408u; // 800F4B18
  c->r[5]=0u+0x00000004u; // 800F4B1C
  c->lr=0x800F4B24u; f_80004338(c); // 800F4B20
  c->r[0]=0u+0x00000008u; // 800F4B24
  W16(c->r[31]+0x00000006u,c->r[0]); // 800F4B28
L_800F4B2C:;
  c->r[0]=0u+0x00000000u; // 800F4B2C
  c->r[3]=c->r[29]|c->r[29]; // 800F4B30
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F4B34
  c->lr=0x800F4B3Cu; f_800B08A4(c); // 800F4B38
L_800F4B3C:;
  c->r[29]=0u+0x00000000u; // 800F4B3C
  W8(c->r[13]+0xFFFF92F0u,c->r[29]); // 800F4B40
  goto L_800F4B4C; // 800F4B44
L_800F4B48:;
  c->lr=0x800F4B4Cu; f_800B08A4(c); // 800F4B48
L_800F4B4C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F4B4C
  c->r[3]=c->r[29]|c->r[29]; // 800F4B50
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F4B54
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F4B58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4B5C
  c->lr=c->r[0]; // 800F4B60
  c->r[1]=c->r[1]+0x00000020u; // 800F4B64
  return; // 800F4B68
}

// SCReloadConfFileAsync
void f_800F4B6C(Ctx* __restrict c) {
  trace_call(0x800F4B6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4B6C
  c->r[0]=c->lr; // 800F4B70
  cmpu(c,0,c->r[4],0x00004000u); // 800F4B74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4B78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F4B7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F4B80
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F4B84
  c->r[29]=c->r[3]|c->r[3]; // 800F4B88
  if (!crb(c,0)) { goto L_800F4B98; } // 800F4B8C
  c->r[3]=0u+0xFFFFFF80u; // 800F4B90
  goto L_800F4C64; // 800F4B94
L_800F4B98:;
  c->r[30]=0u+0x802D0000u; // 800F4B98
  c->r[9]=0u+0x80260000u; // 800F4B9C
  c->r[30]=c->r[30]+0x000030C0u; // 800F4BA0
  c->r[31]=0u+0x00000000u; // 800F4BA4
  c->r[8]=0u+0x80260000u; // 800F4BA8
  c->r[4]=0u+0x80000000u; // 800F4BAC
  c->r[7]=c->r[4]+0x00003800u; // 800F4BB0
  c->r[9]=c->r[9]+0xFFFFBBB0u; // 800F4BB4
  c->r[10]=0u+0x00000001u; // 800F4BB8
  c->r[8]=c->r[8]+0xFFFFBBC8u; // 800F4BBC
  c->r[6]=0u+0x00004000u; // 800F4BC0
  c->r[0]=0u+0x00000100u; // 800F4BC4
  W32(c->r[30]+0x0000015Cu,c->r[5]); // 800F4BC8
  c->r[4]=0u+0x00000000u; // 800F4BCC
  c->r[5]=0u+0x00004000u; // 800F4BD0
  W8(c->r[13]+0xFFFF92F0u,c->r[10]); // 800F4BD4
  W32(c->r[30]+0x00000160u,c->r[31]); // 800F4BD8
  W8(c->r[30]+0x0000015Au,c->r[31]); // 800F4BDC
  W32(c->r[30]+0x0000017Cu,c->r[31]); // 800F4BE0
  W32(c->r[30]+0x00000180u,c->r[31]); // 800F4BE4
  W32(c->r[30]+0x00000164u,c->r[9]); // 800F4BE8
  W32(c->r[30]+0x00000168u,c->r[8]); // 800F4BEC
  W32(c->r[30]+0x0000016Cu,c->r[3]); // 800F4BF0
  W32(c->r[30]+0x00000170u,c->r[7]); // 800F4BF4
  W32(c->r[30]+0x00000174u,c->r[6]); // 800F4BF8
  W32(c->r[30]+0x00000178u,c->r[0]); // 800F4BFC
  c->lr=0x800F4C04u; f_80004688(c); // 800F4C00
  c->r[3]=c->r[29]|c->r[29]; // 800F4C04
  c->r[4]=c->r[13]+0xFFFF8400u; // 800F4C08
  c->r[5]=0u+0x00000004u; // 800F4C0C
  c->lr=0x800F4C14u; f_80004338(c); // 800F4C10
  c->r[3]=c->r[29]+0x00003FFCu; // 800F4C14
  c->r[4]=c->r[13]+0xFFFF8408u; // 800F4C18
  c->r[5]=0u+0x00000004u; // 800F4C1C
  c->lr=0x800F4C24u; f_80004338(c); // 800F4C20
  c->r[0]=0u+0x00000008u; // 800F4C24
  c->r[6]=0u+0x800F0000u; // 800F4C28
  W16(c->r[29]+0x00000006u,c->r[0]); // 800F4C2C
  c->r[4]=c->r[30]+0x00000008u; // 800F4C30
  c->r[6]=c->r[6]+0x00004C80u; // 800F4C34
  c->r[7]=c->r[30]+0x00000094u; // 800F4C38
  c->r[0]=R8(c->r[30]+0x0000015Au); // 800F4C3C
  c->r[5]=0u+0x00000001u; // 800F4C40
  W8(c->r[30]+0x00000159u,c->r[31]); // 800F4C44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4C48
  c->r[3]=c->r[30]+c->r[0]; // 800F4C4C
  W32(c->r[13]+0xFFFF9300u,c->r[31]); // 800F4C50
  c->r[3]=R32(c->r[3]+0x00000164u); // 800F4C54
  W32(c->r[13]+0xFFFF92F8u,c->r[31]); // 800F4C58
  W32(c->r[13]+0xFFFF92F4u,c->r[31]); // 800F4C5C
  c->lr=0x800F4C64u; f_800F2C74(c); // 800F4C60
L_800F4C64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4C64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F4C68
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F4C6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F4C70
  c->lr=c->r[0]; // 800F4C74
  c->r[1]=c->r[1]+0x00000020u; // 800F4C78
  return; // 800F4C7C
}

// OpenCallbackFromReload
void f_800F4C80(Ctx* __restrict c) {
  trace_call(0x800F4C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4C80
  c->r[0]=c->lr; // 800F4C84
  cmps(c,0,(int32_t)c->r[3],0); // 800F4C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4C8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4C90
  c->r[31]=c->r[3]|c->r[3]; // 800F4C94
  if (!crb(c,2)) { goto L_800F4CDC; } // 800F4C98
  c->r[4]=0u+0x802D0000u; // 800F4C9C
  c->r[6]=0u+0x800F0000u; // 800F4CA0
  c->r[4]=c->r[4]+0x000030C0u; // 800F4CA4
  c->r[5]=0u+0x00000001u; // 800F4CA8
  c->r[0]=R8(c->r[4]+0x0000015Au); // 800F4CAC
  c->r[3]=c->r[4]+0x00000008u; // 800F4CB0
  W8(c->r[4]+0x00000159u,c->r[5]); // 800F4CB4
  c->r[7]=c->r[4]+0x00000094u; // 800F4CB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4CBC
  c->r[6]=c->r[6]+0x00004D50u; // 800F4CC0
  c->r[5]=c->r[4]+c->r[0]; // 800F4CC4
  c->r[4]=R32(c->r[5]+0x0000016Cu); // 800F4CC8
  c->r[5]=R32(c->r[5]+0x00000174u); // 800F4CCC
  c->lr=0x800F4CD4u; f_800F2108(c); // 800F4CD0
  cmps(c,0,(int32_t)c->r[3],0); // 800F4CD4
  if (crb(c,2)) { goto L_800F4D3C; } // 800F4CD8
L_800F4CDC:;
  c->r[3]=0u+0x802D0000u; // 800F4CDC
  c->r[3]=c->r[3]+0x000030C0u; // 800F4CE0
  c->r[0]=R8(c->r[3]+0x0000015Au); // 800F4CE4
  cmps(c,0,(int32_t)c->r[0],0); // 800F4CE8
  if (!crb(c,2)) { goto L_800F4CF4; } // 800F4CEC
  W32(c->r[3]+0x00000160u,c->r[31]); // 800F4CF0
L_800F4CF4:;
  c->r[5]=0u+0x802D0000u; // 800F4CF4
  c->r[4]=0u+0x00000000u; // 800F4CF8
  c->r[5]=c->r[5]+0x000030C0u; // 800F4CFC
  c->r[0]=R8(c->r[5]+0x0000015Au); // 800F4D00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4D04
  c->r[3]=c->r[5]+c->r[0]; // 800F4D08
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 800F4D0C
  c->r[0]=R8(c->r[5]+0x00000159u); // 800F4D10
  cmps(c,0,(int32_t)c->r[0],0); // 800F4D14
  if (crb(c,2)) { goto L_800F4D38; } // 800F4D18
  c->r[4]=0u+0x800F0000u; // 800F4D1C
  c->r[3]=c->r[5]+0x00000008u; // 800F4D20
  c->r[4]=c->r[4]+0x00005000u; // 800F4D24
  c->r[5]=c->r[5]+0x00000094u; // 800F4D28
  c->lr=0x800F4D30u; f_800F2DD0(c); // 800F4D2C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4D30
  if (crb(c,2)) { goto L_800F4D3C; } // 800F4D34
L_800F4D38:;
  c->lr=0x800F4D3Cu; f_800F4EC4(c); // 800F4D38
L_800F4D3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4D3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4D40
  c->lr=c->r[0]; // 800F4D44
  c->r[1]=c->r[1]+0x00000010u; // 800F4D48
  return; // 800F4D4C
}

// ReadCallbackFromReload
void f_800F4D50(Ctx* __restrict c) {
  trace_call(0x800F4D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4D50
  c->r[0]=c->lr; // 800F4D54
  c->r[5]=0u+0x802D0000u; // 800F4D58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4D5C
  c->r[5]=c->r[5]+0x000030C0u; // 800F4D60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4D64
  c->r[31]=c->r[3]|c->r[3]; // 800F4D68
  c->r[0]=R8(c->r[5]+0x0000015Au); // 800F4D6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4D70
  c->r[4]=c->r[5]+c->r[0]; // 800F4D74
  c->r[0]=R32(c->r[4]+0x00000174u); // 800F4D78
  cmpu(c,0,c->r[3],c->r[0]); // 800F4D7C
  if (!crb(c,2)) { goto L_800F4DAC; } // 800F4D80
  W32(c->r[4]+0x0000017Cu,c->r[3]); // 800F4D84
  c->r[0]=0u+0x00000000u; // 800F4D88
  c->r[4]=0u+0x800F0000u; // 800F4D8C
  c->r[3]=c->r[5]+0x00000008u; // 800F4D90
  W8(c->r[5]+0x00000159u,c->r[0]); // 800F4D94
  c->r[4]=c->r[4]+0x00004E38u; // 800F4D98
  c->r[5]=c->r[5]+0x00000094u; // 800F4D9C
  c->lr=0x800F4DA4u; f_800F2DD0(c); // 800F4DA0
  cmps(c,0,(int32_t)c->r[3],0); // 800F4DA4
  if (crb(c,2)) { goto L_800F4E24; } // 800F4DA8
L_800F4DAC:;
  c->r[3]=0u+0x802D0000u; // 800F4DAC
  c->r[3]=c->r[3]+0x000030C0u; // 800F4DB0
  c->r[0]=R8(c->r[3]+0x0000015Au); // 800F4DB4
  cmps(c,0,(int32_t)c->r[0],0); // 800F4DB8
  if (!crb(c,2)) { goto L_800F4DDC; } // 800F4DBC
  cmps(c,0,(int32_t)c->r[31],0); // 800F4DC0
  c->r[0]=0u+0xFFFFFF80u; // 800F4DC4
  if (crb(c,2)) { goto L_800F4DD0; } // 800F4DC8
  c->r[0]=c->r[31]|c->r[31]; // 800F4DCC
L_800F4DD0:;
  c->r[3]=0u+0x802D0000u; // 800F4DD0
  c->r[3]=c->r[3]+0x000030C0u; // 800F4DD4
  W32(c->r[3]+0x00000160u,c->r[0]); // 800F4DD8
L_800F4DDC:;
  c->r[5]=0u+0x802D0000u; // 800F4DDC
  c->r[4]=0u+0x00000000u; // 800F4DE0
  c->r[5]=c->r[5]+0x000030C0u; // 800F4DE4
  c->r[0]=R8(c->r[5]+0x0000015Au); // 800F4DE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4DEC
  c->r[3]=c->r[5]+c->r[0]; // 800F4DF0
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 800F4DF4
  c->r[0]=R8(c->r[5]+0x00000159u); // 800F4DF8
  cmps(c,0,(int32_t)c->r[0],0); // 800F4DFC
  if (crb(c,2)) { goto L_800F4E20; } // 800F4E00
  c->r[4]=0u+0x800F0000u; // 800F4E04
  c->r[3]=c->r[5]+0x00000008u; // 800F4E08
  c->r[4]=c->r[4]+0x00005000u; // 800F4E0C
  c->r[5]=c->r[5]+0x00000094u; // 800F4E10
  c->lr=0x800F4E18u; f_800F2DD0(c); // 800F4E14
  cmps(c,0,(int32_t)c->r[3],0); // 800F4E18
  if (crb(c,2)) { goto L_800F4E24; } // 800F4E1C
L_800F4E20:;
  c->lr=0x800F4E24u; f_800F4EC4(c); // 800F4E20
L_800F4E24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4E28
  c->lr=c->r[0]; // 800F4E2C
  c->r[1]=c->r[1]+0x00000010u; // 800F4E30
  return; // 800F4E34
}

// CloseCallbackFromReload
void f_800F4E38(Ctx* __restrict c) {
  trace_call(0x800F4E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4E38
  c->r[0]=c->lr; // 800F4E3C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4E40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4E44
  if (!crb(c,2)) { goto L_800F4E54; } // 800F4E48
  c->lr=0x800F4E50u; f_800F4EC4(c); // 800F4E4C
  goto L_800F4EB4; // 800F4E50
L_800F4E54:;
  c->r[4]=0u+0x802D0000u; // 800F4E54
  c->r[4]=c->r[4]+0x000030C0u; // 800F4E58
  c->r[0]=R8(c->r[4]+0x0000015Au); // 800F4E5C
  cmps(c,0,(int32_t)c->r[0],0); // 800F4E60
  if (!crb(c,2)) { goto L_800F4E6C; } // 800F4E64
  W32(c->r[4]+0x00000160u,c->r[3]); // 800F4E68
L_800F4E6C:;
  c->r[5]=0u+0x802D0000u; // 800F4E6C
  c->r[4]=0u+0x00000000u; // 800F4E70
  c->r[5]=c->r[5]+0x000030C0u; // 800F4E74
  c->r[0]=R8(c->r[5]+0x0000015Au); // 800F4E78
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4E7C
  c->r[3]=c->r[5]+c->r[0]; // 800F4E80
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 800F4E84
  c->r[0]=R8(c->r[5]+0x00000159u); // 800F4E88
  cmps(c,0,(int32_t)c->r[0],0); // 800F4E8C
  if (crb(c,2)) { goto L_800F4EB0; } // 800F4E90
  c->r[4]=0u+0x800F0000u; // 800F4E94
  c->r[3]=c->r[5]+0x00000008u; // 800F4E98
  c->r[4]=c->r[4]+0x00005000u; // 800F4E9C
  c->r[5]=c->r[5]+0x00000094u; // 800F4EA0
  c->lr=0x800F4EA8u; f_800F2DD0(c); // 800F4EA4
  cmps(c,0,(int32_t)c->r[3],0); // 800F4EA8
  if (crb(c,2)) { goto L_800F4EB4; } // 800F4EAC
L_800F4EB0:;
  c->lr=0x800F4EB4u; f_800F4EC4(c); // 800F4EB0
L_800F4EB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4EB4
  c->lr=c->r[0]; // 800F4EB8
  c->r[1]=c->r[1]+0x00000010u; // 800F4EBC
  return; // 800F4EC0
}

// FinishFromReload
void f_800F4EC4(Ctx* __restrict c) {
  trace_call(0x800F4EC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4EC4
  c->r[0]=c->lr; // 800F4EC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4ECC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F4ED0
  c->r[31]=0u+0x00000000u; // 800F4ED4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F4ED8
  c->r[30]=0u+0x800F0000u; // 800F4EDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F4EE0
  c->r[29]=0u+0x802D0000u; // 800F4EE4
  c->r[29]=c->r[29]+0x000030C0u; // 800F4EE8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F4EEC
L_800F4EF0:;
  c->r[3]=R8(c->r[29]+0x0000015Au); // 800F4EF0
  c->r[3]=c->r[3]+0x00000001u; // 800F4EF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F4EF8
  W8(c->r[29]+0x0000015Au,c->r[3]); // 800F4EFC
  cmpu(c,0,c->r[0],0x00000002u); // 800F4F00
  if (!crb(c,0)) { goto L_800F4F38; } // 800F4F04
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800F4F08
  W8(c->r[29]+0x00000159u,c->r[31]); // 800F4F0C
  c->r[3]=c->r[29]+c->r[0]; // 800F4F10
  c->r[4]=c->r[29]+0x00000008u; // 800F4F14
  c->r[3]=R32(c->r[3]+0x00000164u); // 800F4F18
  c->r[6]=c->r[30]+0x00004C80u; // 800F4F1C
  c->r[7]=c->r[29]+0x00000094u; // 800F4F20
  c->r[5]=0u+0x00000001u; // 800F4F24
  c->lr=0x800F4F2Cu; f_800F2C74(c); // 800F4F28
  cmps(c,0,(int32_t)c->r[3],0); // 800F4F2C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4EF0; } // 800F4F30
  goto L_800F4FE0; // 800F4F34
L_800F4F38:;
  c->r[0]=R32(c->r[29]+0x00000160u); // 800F4F38
  cmps(c,0,(int32_t)c->r[0],0); // 800F4F3C
  if (crb(c,2)) { goto L_800F4F54; } // 800F4F40
  if (!crb(c,0)) { goto L_800F4F5C; } // 800F4F44
  cmps(c,0,(int32_t)c->r[0],-12); // 800F4F48
  if (crb(c,2)) { goto L_800F4F5C; } // 800F4F4C
  goto L_800F4F5C; // 800F4F50
L_800F4F54:;
  c->r[28]=0u+0x00000003u; // 800F4F54
  goto L_800F4FAC; // 800F4F58
L_800F4F5C:;
  c->r[30]=0u+0x802D0000u; // 800F4F5C
  c->r[4]=0u+0x00000000u; // 800F4F60
  c->r[30]=c->r[30]+0x000030C0u; // 800F4F64
  c->r[5]=0u+0x00004000u; // 800F4F68
  c->r[29]=R32(c->r[30]+0x0000016Cu); // 800F4F6C
  c->r[3]=c->r[29]|c->r[29]; // 800F4F70
  c->lr=0x800F4F78u; f_80004688(c); // 800F4F74
  c->r[3]=c->r[29]|c->r[29]; // 800F4F78
  c->r[4]=c->r[13]+0xFFFF8400u; // 800F4F7C
  c->r[5]=0u+0x00000004u; // 800F4F80
  c->lr=0x800F4F88u; f_80004338(c); // 800F4F84
  c->r[3]=c->r[29]+0x00003FFCu; // 800F4F88
  c->r[4]=c->r[13]+0xFFFF8408u; // 800F4F8C
  c->r[5]=0u+0x00000004u; // 800F4F90
  c->lr=0x800F4F98u; f_80004338(c); // 800F4F94
  c->r[0]=0u+0x00000008u; // 800F4F98
  c->r[28]=0u+0x00000003u; // 800F4F9C
  W16(c->r[29]+0x00000006u,c->r[0]); // 800F4FA0
  c->r[0]=R32(c->r[30]+0x00000174u); // 800F4FA4
  W32(c->r[30]+0x0000017Cu,c->r[0]); // 800F4FA8
L_800F4FAC:;
  c->r[30]=0u+0x00000000u; // 800F4FAC
  c->r[3]=0u+0x80000000u; // 800F4FB0
  c->r[31]=0u+0x802D0000u; // 800F4FB4
  W8(c->r[3]+0x000038FFu,c->r[30]); // 800F4FB8
  c->r[31]=c->r[31]+0x000030C0u; // 800F4FBC
  c->r[12]=R32(c->r[31]+0x0000015Cu); // 800F4FC0
  cmps(c,0,(int32_t)c->r[12],0); // 800F4FC4
  if (crb(c,2)) { goto L_800F4FDC; } // 800F4FC8
  c->r[3]=R32(c->r[31]+0x00000160u); // 800F4FCC
  c->ctr=c->r[12]; // 800F4FD0
  if (true) { c->lr=0x800F4FD8u; dispatch(c,c->ctr); } // 800F4FD4
  W32(c->r[31]+0x0000015Cu,c->r[30]); // 800F4FD8
L_800F4FDC:;
  W8(c->r[13]+0xFFFF92F0u,c->r[28]); // 800F4FDC
L_800F4FE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4FE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F4FE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F4FE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F4FEC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F4FF0
  c->lr=c->r[0]; // 800F4FF4
  c->r[1]=c->r[1]+0x00000020u; // 800F4FF8
  return; // 800F4FFC
}

// CloseCallbackFromReloadError
void f_800F5000(Ctx* __restrict c) {
  trace_call(0x800F5000u);
  f_800F4EC4(c); return; // 800F5000
}

// ParseConfBuf
void f_800F5004(Ctx* __restrict c) {
  trace_call(0x800F5004u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5004
  c->r[0]=c->lr; // 800F5008
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F500C
  c->r[11]=c->r[1]+0x00000060u; // 800F5010
  c->lr=0x800F5018u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F5014
  cmpu(c,0,c->r[4],0x0000000Cu); // 800F5018
  c->r[27]=0u+0x80280000u; // 800F501C
  c->r[25]=c->r[3]|c->r[3]; // 800F5020
  c->r[26]=c->r[4]|c->r[4]; // 800F5024
  c->r[27]=c->r[27]+0xFFFFB678u; // 800F5028
  if (crb(c,0)) { goto L_800F5234; } // 800F502C
  cmpu(c,0,c->r[4],0x00004000u); // 800F5030
  if (crb(c,1)) { goto L_800F5234; } // 800F5034
  c->r[0]=0u+0x00000024u; // 800F5038
  c->r[31]=c->r[3]+c->r[4]; // 800F503C
  W32(c->r[13]+0xFFFF92FCu,c->r[0]); // 800F5040
  c->r[4]=c->r[13]+0xFFFF8400u; // 800F5044
  c->r[5]=0u+0x00000004u; // 800F5048
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 800F504C
  c->lr=0x800F5054u; f_800D7BBC(c); // 800F5050
  cmps(c,0,(int32_t)c->r[3],0); // 800F5054
  if (!crb(c,2)) { goto L_800F5234; } // 800F5058
  c->r[3]=c->r[31]|c->r[31]; // 800F505C
  c->r[4]=c->r[13]+0xFFFF8408u; // 800F5060
  c->r[5]=0u+0x00000004u; // 800F5064
  c->lr=0x800F506Cu; f_800D7BBC(c); // 800F5068
  cmps(c,0,(int32_t)c->r[3],0); // 800F506C
  if (!crb(c,2)) { goto L_800F5234; } // 800F5070
  cmpu(c,0,c->r[26],0x00004000u); // 800F5074
  if (!crb(c,0)) { goto L_800F50A4; } // 800F5078
  c->r[22]=addc(c,~c->r[26],0x00004000u,1); // 800F507C
  c->r[3]=c->r[31]|c->r[31]; // 800F5080
  c->r[5]=c->r[22]|c->r[22]; // 800F5084
  c->r[4]=0u+0x00000000u; // 800F5088
  c->lr=0x800F5090u; f_80004688(c); // 800F508C
  c->r[31]=c->r[31]+c->r[22]; // 800F5090
  c->r[4]=c->r[13]+0xFFFF8408u; // 800F5094
  c->r[3]=c->r[31]|c->r[31]; // 800F5098
  c->r[5]=0u+0x00000004u; // 800F509C
  c->lr=0x800F50A4u; f_80004338(c); // 800F50A0
L_800F50A4:;
  c->r[0]=c->r[25]+0x00000006u; // 800F50A4
  cmpu(c,0,c->r[0],c->r[31]); // 800F50A8
  if (!crb(c,1)) { goto L_800F50B8; } // 800F50AC
  c->r[0]=0u+0x00000000u; // 800F50B0
  goto L_800F50C8; // 800F50B4
L_800F50B8:;
  c->r[3]=R8(c->r[25]+0x00000004u); // 800F50B8
  c->r[0]=0u+0x00000001u; // 800F50BC
  c->r[30]=R8(c->r[25]+0x00000005u); // 800F50C0
  c->r[30]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[30]&~0x0000FF00u); // 800F50C4
L_800F50C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F50C8
  if (crb(c,2)) { goto L_800F5234; } // 800F50CC
  c->r[29]=c->r[25]+0x00000006u; // 800F50D0
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800F50D4
  c->r[3]=c->r[29]+c->r[0]; // 800F50D8
  c->r[23]=0u+0x00000000u; // 800F50DC
  c->r[0]=c->r[3]+0x00000002u; // 800F50E0
  c->r[24]=c->r[29]|c->r[29]; // 800F50E4
  c->r[28]=c->r[0]-c->r[25]; // 800F50E8
  goto L_800F5134; // 800F50EC
L_800F50F0:;
  cmpu(c,0,c->r[28],c->r[26]); // 800F50F0
  if (crb(c,1)) { goto L_800F5234; } // 800F50F4
  c->r[0]=c->r[24]-c->r[25]; // 800F50F8
  cmpu(c,0,c->r[0],c->r[26]); // 800F50FC
  if (crb(c,1)) { goto L_800F5234; } // 800F5100
  c->r[0]=R16(c->r[24]+0x00000000u); // 800F5104
  cmpu(c,0,c->r[28],c->r[0]); // 800F5108
  if (!crb(c,2)) { goto L_800F5234; } // 800F510C
  c->r[3]=c->r[25]+c->r[28]; // 800F5110
  c->r[4]=c->r[1]+0x00000008u; // 800F5114
  c->lr=0x800F511Cu; f_800F5250(c); // 800F5118
  cmps(c,0,(int32_t)c->r[3],0); // 800F511C
  if (crb(c,2)) { goto L_800F5234; } // 800F5120
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F5124
  c->r[24]=c->r[24]+0x00000002u; // 800F5128
  c->r[23]=c->r[23]+0x00000001u; // 800F512C
  c->r[28]=c->r[28]+c->r[0]; // 800F5130
L_800F5134:;
  cmpu(c,0,c->r[23],c->r[30]); // 800F5134
  if (crb(c,0)) { IRQCHK(c); goto L_800F50F0; } // 800F5138
  cmpu(c,0,c->r[28],c->r[26]); // 800F513C
  if (crb(c,1)) { goto L_800F5234; } // 800F5140
  c->r[0]=rotl(c->r[23],1)&0xFFFFFFFEu; // 800F5144
  c->r[0]=R16(c->r[29]+c->r[0]); // 800F5148
  cmpu(c,0,c->r[28],c->r[0]); // 800F514C
  if (!crb(c,2)) { goto L_800F5234; } // 800F5150
  c->r[3]=c->r[31]+0xFFFFFFBAu; // 800F5154
  c->r[0]=c->r[25]+c->r[28]; // 800F5158
  cmpu(c,0,c->r[0],c->r[3]); // 800F515C
  if (crb(c,1)) { goto L_800F5234; } // 800F5160
  c->r[28]=c->r[3]-c->r[0]; // 800F5164
  c->r[5]=c->r[31]-c->r[3]; // 800F5168
  c->r[4]=0u+0x00000000u; // 800F516C
  c->lr=0x800F5174u; f_80004688(c); // 800F5170
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F5174
  c->r[31]=c->r[31]+0xFFFFFFFEu; // 800F5178
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800F517C
  c->r[26]=c->r[27]+c->r[0]; // 800F5180
  goto L_800F5208; // 800F5184
L_800F5188:;
  c->r[3]=c->r[22]|c->r[22]; // 800F5188
  c->lr=0x800F5190u; f_800D4394(c); // 800F518C
  c->r[21]=c->r[3]|c->r[3]; // 800F5190
  c->r[24]=c->r[29]|c->r[29]; // 800F5194
  c->r[23]=0u+0x00000000u; // 800F5198
  goto L_800F51FC; // 800F519C
L_800F51A0:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 800F51A0
  c->r[4]=c->r[25]+c->r[0]; // 800F51A4
  c->r[0]=R8(c->r[25]+c->r[0]); // 800F51A8
  c->r[3]=rotl(c->r[0],0)&0x0000001Fu; // 800F51AC
  c->r[0]=c->r[3]+0x00000001u; // 800F51B0
  cmpu(c,0,c->r[21],c->r[0]); // 800F51B4
  if (!crb(c,2)) { goto L_800F51F4; } // 800F51B8
  c->r[3]=c->r[22]|c->r[22]; // 800F51BC
  c->r[5]=c->r[21]|c->r[21]; // 800F51C0
  c->r[4]=c->r[4]+0x00000001u; // 800F51C4
  c->lr=0x800F51CCu; f_800D7BBC(c); // 800F51C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F51CC
  if (!crb(c,2)) { goto L_800F51F4; } // 800F51D0
  c->r[0]=R32(c->r[27]+0x00000004u); // 800F51D4
  c->r[3]=rotl(c->r[23],1)&0xFFFFFFFEu; // 800F51D8
  c->r[3]=c->r[29]+c->r[3]; // 800F51DC
  c->r[0]=0u-c->r[0]; // 800F51E0
  c->r[3]=c->r[3]-c->r[25]; // 800F51E4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F51E8
  W16(c->r[31]+c->r[0],c->r[3]); // 800F51EC
  goto L_800F5204; // 800F51F0
L_800F51F4:;
  c->r[24]=c->r[24]+0x00000002u; // 800F51F4
  c->r[23]=c->r[23]+0x00000001u; // 800F51F8
L_800F51FC:;
  cmpu(c,0,c->r[23],c->r[30]); // 800F51FC
  if (crb(c,0)) { IRQCHK(c); goto L_800F51A0; } // 800F5200
L_800F5204:;
  c->r[27]=c->r[27]+0x00000008u; // 800F5204
L_800F5208:;
  cmpu(c,0,c->r[27],c->r[26]); // 800F5208
  if (!crb(c,0)) { goto L_800F521C; } // 800F520C
  c->r[22]=R32(c->r[27]+0x00000000u); // 800F5210
  cmps(c,0,(int32_t)c->r[22],0); // 800F5214
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5188; } // 800F5218
L_800F521C:;
  c->r[0]=c->r[31]-c->r[25]; // 800F521C
  W32(c->r[13]+0xFFFF92F8u,c->r[30]); // 800F5220
  c->r[3]=0u+0x00000000u; // 800F5224
  W32(c->r[13]+0xFFFF9300u,c->r[0]); // 800F5228
  W32(c->r[13]+0xFFFF92F4u,c->r[28]); // 800F522C
  goto L_800F5238; // 800F5230
L_800F5234:;
  c->r[3]=0u+0x00000002u; // 800F5234
L_800F5238:;
  c->r[11]=c->r[1]+0x00000060u; // 800F5238
  c->lr=0x800F5240u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F523C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F5240
  c->lr=c->r[0]; // 800F5244
  c->r[1]=c->r[1]+0x00000060u; // 800F5248
  return; // 800F524C
}

// UnpackItem
void f_800F5250(Ctx* __restrict c) {
  trace_call(0x800F5250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5250
  c->r[0]=c->lr; // 800F5254
  c->r[5]=0u+0x00000020u; // 800F5258
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F525C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5260
  c->r[31]=c->r[4]|c->r[4]; // 800F5264
  c->r[4]=0u+0x00000000u; // 800F5268
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F526C
  c->r[30]=c->r[3]|c->r[3]; // 800F5270
  c->r[3]=c->r[31]|c->r[31]; // 800F5274
  c->lr=0x800F527Cu; f_80004688(c); // 800F5278
  c->r[4]=R8(c->r[30]+0x00000000u); // 800F527C
  c->r[0]=c->r[30]+0x00000001u; // 800F5280
  W32(c->r[31]+0x00000014u,c->r[0]); // 800F5284
  c->r[3]=rotl(c->r[4],0)&0x0000001Fu; // 800F5288
  c->r[6]=rotl(c->r[4],0)&0x000000E0u; // 800F528C
  c->r[0]=c->r[3]+0x00000001u; // 800F5290
  c->r[3]=c->r[30]+c->r[0]; // 800F5294
  cmps(c,0,(int32_t)c->r[6],128); // 800F5298
  c->r[3]=c->r[3]+0x00000001u; // 800F529C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800F52A0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800F52A4
  if (crb(c,2)) { goto L_800F5304; } // 800F52A8
  if (!crb(c,0)) { goto L_800F52D4; } // 800F52AC
  cmps(c,0,(int32_t)c->r[6],64); // 800F52B0
  if (crb(c,2)) { goto L_800F5328; } // 800F52B4
  if (!crb(c,0)) { goto L_800F52C8; } // 800F52B8
  cmps(c,0,(int32_t)c->r[6],32); // 800F52BC
  if (crb(c,2)) { goto L_800F534C; } // 800F52C0
  goto L_800F53C0; // 800F52C4
L_800F52C8:;
  cmps(c,0,(int32_t)c->r[6],96); // 800F52C8
  if (crb(c,2)) { goto L_800F52F8; } // 800F52CC
  goto L_800F53C0; // 800F52D0
L_800F52D4:;
  cmps(c,0,(int32_t)c->r[6],192); // 800F52D4
  if (crb(c,2)) { goto L_800F531C; } // 800F52D8
  if (!crb(c,0)) { goto L_800F52EC; } // 800F52DC
  cmps(c,0,(int32_t)c->r[6],160); // 800F52E0
  if (crb(c,2)) { goto L_800F5310; } // 800F52E4
  goto L_800F53C0; // 800F52E8
L_800F52EC:;
  cmps(c,0,(int32_t)c->r[6],224); // 800F52EC
  if (crb(c,2)) { goto L_800F52F8; } // 800F52F0
  goto L_800F53C0; // 800F52F4
L_800F52F8:;
  c->r[0]=0u+0x00000001u; // 800F52F8
  W32(c->r[31]+0x00000010u,c->r[0]); // 800F52FC
  goto L_800F5374; // 800F5300
L_800F5304:;
  c->r[0]=0u+0x00000002u; // 800F5304
  W32(c->r[31]+0x00000010u,c->r[0]); // 800F5308
  goto L_800F5374; // 800F530C
L_800F5310:;
  c->r[0]=0u+0x00000004u; // 800F5310
  W32(c->r[31]+0x00000010u,c->r[0]); // 800F5314
  goto L_800F5374; // 800F5318
L_800F531C:;
  c->r[0]=0u+0x00000008u; // 800F531C
  W32(c->r[31]+0x00000010u,c->r[0]); // 800F5320
  goto L_800F5374; // 800F5324
L_800F5328:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 800F5328
  c->r[0]=c->r[3]+0x00000001u; // 800F532C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 800F5330
  c->r[4]=c->r[4]+0x00000001u; // 800F5334
  W32(c->r[31]+0x00000018u,c->r[0]); // 800F5338
  c->r[0]=c->r[3]+0x00000001u; // 800F533C
  W32(c->r[31]+0x00000010u,c->r[4]); // 800F5340
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800F5344
  goto L_800F5374; // 800F5348
L_800F534C:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 800F534C
  c->r[0]=c->r[3]+0x00000002u; // 800F5350
  c->r[4]=R8(c->r[3]+0x00000001u); // 800F5354
  c->r[4]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 800F5358
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 800F535C
  c->r[4]=c->r[4]+0x00000001u; // 800F5360
  W32(c->r[31]+0x00000018u,c->r[0]); // 800F5364
  c->r[0]=c->r[3]+0x00000002u; // 800F5368
  W32(c->r[31]+0x00000010u,c->r[4]); // 800F536C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800F5370
L_800F5374:;
  cmpu(c,0,c->r[6],0x00000040u); // 800F5374
  if (crb(c,2)) { goto L_800F5384; } // 800F5378
  cmpu(c,0,c->r[6],0x00000020u); // 800F537C
  if (!crb(c,2)) { goto L_800F5390; } // 800F5380
L_800F5384:;
  c->r[0]=0u+0x00000040u; // 800F5384
  W8(c->r[31]+0x00000009u,c->r[0]); // 800F5388
  goto L_800F53A4; // 800F538C
L_800F5390:;
  W8(c->r[31]+0x00000008u,c->r[6]); // 800F5390
  c->r[3]=c->r[31]|c->r[31]; // 800F5394
  c->r[4]=R32(c->r[31]+0x00000018u); // 800F5398
  c->r[5]=R32(c->r[31]+0x00000010u); // 800F539C
  c->lr=0x800F53A4u; f_80004338(c); // 800F53A0
L_800F53A4:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800F53A4
  c->r[0]=R32(c->r[31]+0x00000010u); // 800F53A8
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800F53AC
  c->r[0]=c->r[3]+c->r[0]; // 800F53B0
  c->r[3]=c->r[0]+c->r[4]; // 800F53B4
  c->r[0]=c->r[3]+0x00000001u; // 800F53B8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800F53BC
L_800F53C0:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 800F53C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F53C4
  c->r[0]=0u-c->r[3]; // 800F53C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F53CC
  c->r[0]=c->r[0]|c->r[3]; // 800F53D0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800F53D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F53D8
  c->lr=c->r[0]; // 800F53DC
  c->r[1]=c->r[1]+0x00000010u; // 800F53E0
  return; // 800F53E4
}

// DeleteItemByID
void f_800F53E8(Ctx* __restrict c) {
  trace_call(0x800F53E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F53E8
  c->r[0]=c->lr; // 800F53EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F53F0
  c->r[11]=c->r[1]+0x00000030u; // 800F53F4
  c->lr=0x800F53FCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F53F8
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F53FC
  c->r[31]=0u+0x802D0000u; // 800F5400
  c->r[31]=c->r[31]+0x00003260u; // 800F5404
  cmpu(c,0,c->r[3],c->r[0]); // 800F5408
  if (!crb(c,0)) { goto L_800F5560; } // 800F540C
  c->r[4]=R32(c->r[13]+0xFFFF9300u); // 800F5410
  cmps(c,0,(int32_t)c->r[4],0); // 800F5414
  if (crb(c,2)) { goto L_800F5560; } // 800F5418
  c->r[0]=0u-c->r[3]; // 800F541C
  c->r[28]=c->r[31]+c->r[4]; // 800F5420
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5424
  c->r[30]=R16(c->r[28]+c->r[0]); // 800F5428
  cmps(c,0,(int32_t)c->r[30],0); // 800F542C
  if (crb(c,2)) { goto L_800F5560; } // 800F5430
  c->r[0]=R32(c->r[13]+0xFFFF92F8u); // 800F5434
  cmps(c,0,(int32_t)c->r[0],0); // 800F5438
  if (crb(c,2)) { goto L_800F5560; } // 800F543C
  c->r[27]=c->r[31]+c->r[30]; // 800F5440
  c->r[25]=c->r[31]+0x00000006u; // 800F5444
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5448
  c->r[5]=R16(c->r[31]+c->r[30]); // 800F544C
  c->r[24]=c->r[25]+c->r[0]; // 800F5450
  c->r[3]=R16(c->r[27]+0x00000002u); // 800F5454
  c->r[4]=c->r[27]|c->r[27]; // 800F5458
  c->r[0]=c->r[30]+0x00000002u; // 800F545C
  c->r[6]=c->r[3]-c->r[5]; // 800F5460
  c->r[26]=R16(c->r[24]+0x00000000u); // 800F5464
  c->r[3]=c->r[27]|c->r[27]; // 800F5468
  c->r[5]=c->r[5]-c->r[0]; // 800F546C
  c->r[29]=c->r[6]+0x00000002u; // 800F5470
  c->r[4]=c->r[4]+0x00000002u; // 800F5474
  c->lr=0x800F547Cu; f_800D7A98(c); // 800F5478
  c->r[4]=c->r[24]+0xFFFFFFFEu; // 800F547C
  c->r[0]=c->r[4]+0x00000002u; // 800F5480
  c->r[0]=c->r[0]-c->r[25]; // 800F5484
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5488
  c->ctr=c->r[0]; // 800F548C
  cmpu(c,0,c->r[4],c->r[25]); // 800F5490
  if (crb(c,0)) { goto L_800F54C4; } // 800F5494
L_800F5498:;
  cmpu(c,0,c->r[4],c->r[27]); // 800F5498
  if (!crb(c,0)) { goto L_800F54B0; } // 800F549C
  c->r[3]=R16(c->r[4]+0x00000000u); // 800F54A0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800F54A4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F54A8
  goto L_800F54BC; // 800F54AC
L_800F54B0:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 800F54B0
  c->r[0]=c->r[0]-c->r[29]; // 800F54B4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F54B8
L_800F54BC:;
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 800F54BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F5498; } // 800F54C0
L_800F54C4:;
  c->r[5]=R16(c->r[27]+0x00000000u); // 800F54C4
  c->r[4]=c->r[31]+c->r[29]; // 800F54C8
  c->r[0]=c->r[5]+c->r[29]; // 800F54CC
  c->r[3]=c->r[31]+c->r[5]; // 800F54D0
  c->r[4]=c->r[5]+c->r[4]; // 800F54D4
  c->r[5]=c->r[26]-c->r[0]; // 800F54D8
  c->lr=0x800F54E0u; f_800D7A98(c); // 800F54DC
  c->r[0]=c->r[26]-c->r[29]; // 800F54E0
  c->r[5]=c->r[29]|c->r[29]; // 800F54E4
  c->r[3]=c->r[31]+c->r[0]; // 800F54E8
  c->r[4]=0u+0x00000000u; // 800F54EC
  c->lr=0x800F54F4u; f_80004688(c); // 800F54F0
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F54F4
  c->r[6]=0u+0x00000000u; // 800F54F8
  c->r[3]=0u+0x00000000u; // 800F54FC
  c->ctr=c->r[0]; // 800F5500
  cmpu(c,0,c->r[0],0x00000000u); // 800F5504
  if (!crb(c,1)) { goto L_800F553C; } // 800F5508
L_800F550C:;
  c->r[0]=0u-c->r[6]; // 800F550C
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5510
  c->r[4]=R16(c->r[28]+c->r[5]); // 800F5514
  cmpu(c,0,c->r[4],c->r[30]); // 800F5518
  if (crb(c,0)) { goto L_800F5534; } // 800F551C
  if (!crb(c,1)) { goto L_800F5530; } // 800F5520
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800F5524
  W16(c->r[28]+c->r[5],c->r[0]); // 800F5528
  goto L_800F5534; // 800F552C
L_800F5530:;
  W16(c->r[28]+c->r[5],c->r[3]); // 800F5530
L_800F5534:;
  c->r[6]=c->r[6]+0x00000001u; // 800F5534
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F550C; } // 800F5538
L_800F553C:;
  c->r[4]=R32(c->r[13]+0xFFFF92F4u); // 800F553C
  c->r[0]=0u+0x00000001u; // 800F5540
  c->r[3]=R32(c->r[13]+0xFFFF92F8u); // 800F5544
  c->r[4]=c->r[4]+c->r[29]; // 800F5548
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F554C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F5550
  W32(c->r[13]+0xFFFF92F4u,c->r[4]); // 800F5554
  W32(c->r[13]+0xFFFF92F8u,c->r[0]); // 800F5558
  W16(c->r[31]+0x00000004u,c->r[0]); // 800F555C
L_800F5560:;
  c->r[11]=c->r[1]+0x00000030u; // 800F5560
  c->lr=0x800F5568u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F5564
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F5568
  c->lr=c->r[0]; // 800F556C
  c->r[1]=c->r[1]+0x00000030u; // 800F5570
  return; // 800F5574
}

// CreateItemByID
void f_800F5578(Ctx* __restrict c) {
  trace_call(0x800F5578u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5578
  c->r[0]=c->lr; // 800F557C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F5580
  c->r[11]=c->r[1]+0x00000030u; // 800F5584
  c->lr=0x800F558Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F5588
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F558C
  c->r[31]=0u+0x802D0000u; // 800F5590
  c->r[7]=0u+0x80280000u; // 800F5594
  c->r[23]=c->r[3]|c->r[3]; // 800F5598
  cmpu(c,0,c->r[3],c->r[0]); // 800F559C
  c->r[24]=c->r[4]|c->r[4]; // 800F55A0
  c->r[25]=c->r[5]|c->r[5]; // 800F55A4
  c->r[26]=c->r[6]|c->r[6]; // 800F55A8
  c->r[31]=c->r[31]+0x00003260u; // 800F55AC
  c->r[7]=c->r[7]+0xFFFFB678u; // 800F55B0
  c->r[29]=0u+0x00000001u; // 800F55B4
  if (!crb(c,0)) { goto L_800F57D4; } // 800F55B8
  c->r[0]=0u+0x00000000u; // 800F55BC
  cmpu(c,0,c->r[5],c->r[0]); // 800F55C0
  if (crb(c,2)) { goto L_800F57D4; } // 800F55C4
  c->r[0]=R32(c->r[13]+0xFFFF92F8u); // 800F55C8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F55CC
  if (!crb(c,0)) { goto L_800F57D4; } // 800F55D0
  c->r[0]=R32(c->r[13]+0xFFFF9300u); // 800F55D4
  cmps(c,0,(int32_t)c->r[0],0); // 800F55D8
  if (crb(c,2)) { goto L_800F57D4; } // 800F55DC
  cmps(c,0,(int32_t)c->r[4],160); // 800F55E0
  if (crb(c,2)) { goto L_800F5638; } // 800F55E4
  if (!crb(c,0)) { goto L_800F5610; } // 800F55E8
  cmps(c,0,(int32_t)c->r[4],96); // 800F55EC
  if (crb(c,2)) { goto L_800F5628; } // 800F55F0
  if (!crb(c,0)) { goto L_800F5604; } // 800F55F4
  cmps(c,0,(int32_t)c->r[4],64); // 800F55F8
  if (crb(c,2)) { goto L_800F5648; } // 800F55FC
  goto L_800F57D4; // 800F5600
L_800F5604:;
  cmps(c,0,(int32_t)c->r[4],128); // 800F5604
  if (crb(c,2)) { goto L_800F5630; } // 800F5608
  goto L_800F57D4; // 800F560C
L_800F5610:;
  cmps(c,0,(int32_t)c->r[4],224); // 800F5610
  if (crb(c,2)) { goto L_800F5628; } // 800F5614
  if (!crb(c,0)) { goto L_800F57D4; } // 800F5618
  cmps(c,0,(int32_t)c->r[4],192); // 800F561C
  if (crb(c,2)) { goto L_800F5640; } // 800F5620
  goto L_800F57D4; // 800F5624
L_800F5628:;
  c->r[26]=0u+0x00000001u; // 800F5628
  goto L_800F5674; // 800F562C
L_800F5630:;
  c->r[26]=0u+0x00000002u; // 800F5630
  goto L_800F5674; // 800F5634
L_800F5638:;
  c->r[26]=0u+0x00000004u; // 800F5638
  goto L_800F5674; // 800F563C
L_800F5640:;
  c->r[26]=0u+0x00000008u; // 800F5640
  goto L_800F5674; // 800F5644
L_800F5648:;
  cmps(c,0,(int32_t)c->r[6],0); // 800F5648
  if (crb(c,2)) { goto L_800F57D4; } // 800F564C
  c->r[0]=0u+0x00010000u; // 800F5650
  cmpu(c,0,c->r[6],c->r[0]); // 800F5654
  if (crb(c,1)) { goto L_800F57D4; } // 800F5658
  cmpu(c,0,c->r[6],0x00000100u); // 800F565C
  if (!crb(c,1)) { goto L_800F5670; } // 800F5660
  c->r[24]=0u+0x00000020u; // 800F5664
  c->r[29]=0u+0x00000003u; // 800F5668
  goto L_800F5674; // 800F566C
L_800F5670:;
  c->r[29]=0u+0x00000002u; // 800F5670
L_800F5674:;
  c->r[29]=c->r[29]+c->r[26]; // 800F5674
  c->r[0]=0u+0x00000000u; // 800F5678
  goto L_800F5690; // 800F567C
L_800F5680:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 800F5680
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 800F5684
  if (crb(c,2)) { goto L_800F569C; } // 800F5688
  c->r[7]=c->r[7]+0x00000008u; // 800F568C
L_800F5690:;
  c->r[28]=R32(c->r[7]+0x00000000u); // 800F5690
  cmpu(c,0,c->r[28],c->r[0]); // 800F5694
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5680; } // 800F5698
L_800F569C:;
  c->r[0]=0u+0x00000000u; // 800F569C
  cmpu(c,0,c->r[28],c->r[0]); // 800F56A0
  if (crb(c,2)) { goto L_800F57D4; } // 800F56A4
  c->r[3]=c->r[28]|c->r[28]; // 800F56A8
  c->lr=0x800F56B0u; f_800D4394(c); // 800F56AC
  cmpu(c,0,c->r[3],0x00000020u); // 800F56B0
  c->r[30]=c->r[3]|c->r[3]; // 800F56B4
  if (crb(c,1)) { goto L_800F57D4; } // 800F56B8
  c->r[29]=c->r[29]+c->r[3]; // 800F56BC
  c->r[3]=R32(c->r[13]+0xFFFF92F4u); // 800F56C0
  c->r[0]=c->r[29]+0x00000002u; // 800F56C4
  cmpu(c,0,c->r[3],c->r[0]); // 800F56C8
  if (crb(c,0)) { goto L_800F57D4; } // 800F56CC
  c->r[3]=R32(c->r[13]+0xFFFF92F8u); // 800F56D0
  c->r[22]=c->r[31]+0x00000006u; // 800F56D4
  c->r[0]=R16(c->r[31]+0x00000006u); // 800F56D8
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800F56DC
  c->r[5]=R16(c->r[22]+c->r[3]); // 800F56E0
  c->r[4]=c->r[0]+c->r[31]; // 800F56E4
  c->r[27]=c->r[22]+c->r[3]; // 800F56E8
  c->r[3]=c->r[4]+0x00000002u; // 800F56EC
  c->r[5]=c->r[5]-c->r[0]; // 800F56F0
  c->lr=0x800F56F8u; f_800D7A98(c); // 800F56F4
L_800F56F8:;
  c->r[3]=R16(c->r[22]+0x00000000u); // 800F56F8
  c->r[0]=c->r[3]+0x00000002u; // 800F56FC
  W16(c->r[22]+0x00000000u,c->r[0]); // 800F5700
  c->r[22]=c->r[22]+0x00000002u; // 800F5704
  cmpu(c,0,c->r[22],c->r[27]); // 800F5708
  if (!crb(c,1)) { IRQCHK(c); goto L_800F56F8; } // 800F570C
  c->r[5]=R16(c->r[27]+0x00000000u); // 800F5710
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 800F5714
  c->r[4]=c->r[28]|c->r[28]; // 800F5718
  c->r[28]=c->r[31]+c->r[5]; // 800F571C
  c->r[0]=c->r[24]|c->r[0]; // 800F5720
  W8(c->r[28]+0x00000000u,c->r[0]); // 800F5724
  c->r[5]=c->r[30]|c->r[30]; // 800F5728
  c->r[3]=c->r[28]+0x00000001u; // 800F572C
  c->lr=0x800F5734u; f_80004338(c); // 800F5730
  cmpu(c,0,c->r[24],0x00000040u); // 800F5734
  c->r[3]=c->r[30]+c->r[28]; // 800F5738
  c->r[28]=c->r[3]+0x00000001u; // 800F573C
  if (!crb(c,2)) { goto L_800F5754; } // 800F5740
  c->r[0]=c->r[26]+0xFFFFFFFFu; // 800F5744
  W8(c->r[28]+0x00000000u,c->r[0]); // 800F5748
  c->r[28]=c->r[28]+0x00000001u; // 800F574C
  goto L_800F5770; // 800F5750
L_800F5754:;
  cmpu(c,0,c->r[24],0x00000020u); // 800F5754
  if (!crb(c,2)) { goto L_800F5770; } // 800F5758
  c->r[3]=c->r[26]+0xFFFFFFFFu; // 800F575C
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 800F5760
  W8(c->r[28]+0x00000000u,c->r[0]); // 800F5764
  W8(c->r[28]+0x00000001u,c->r[3]); // 800F5768
  c->r[28]=c->r[28]+0x00000002u; // 800F576C
L_800F5770:;
  c->r[3]=c->r[28]|c->r[28]; // 800F5770
  c->r[4]=c->r[25]|c->r[25]; // 800F5774
  c->r[5]=c->r[26]|c->r[26]; // 800F5778
  c->lr=0x800F5780u; f_80004338(c); // 800F577C
  c->r[5]=R32(c->r[13]+0xFFFF9300u); // 800F5780
  c->r[0]=0u+0x00000001u; // 800F5784
  c->r[4]=0u-c->r[23]; // 800F5788
  c->r[6]=c->r[27]-c->r[31]; // 800F578C
  c->r[7]=c->r[31]+c->r[5]; // 800F5790
  c->r[3]=R32(c->r[13]+0xFFFF92F8u); // 800F5794
  c->r[5]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800F5798
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F579C
  c->r[4]=c->r[3]+0x00000001u; // 800F57A0
  c->r[3]=0u+0x00000001u; // 800F57A4
  W16(c->r[7]+c->r[5],c->r[6]); // 800F57A8
  c->r[6]=c->r[29]+0x00000002u; // 800F57AC
  c->r[5]=R32(c->r[13]+0xFFFF92F4u); // 800F57B0
  c->r[7]=R16(c->r[27]+0x00000000u); // 800F57B4
  c->r[5]=c->r[5]-c->r[6]; // 800F57B8
  W32(c->r[13]+0xFFFF92F8u,c->r[4]); // 800F57BC
  c->r[6]=c->r[7]+c->r[29]; // 800F57C0
  W16(c->r[27]+0x00000002u,c->r[6]); // 800F57C4
  W32(c->r[13]+0xFFFF92F4u,c->r[5]); // 800F57C8
  W16(c->r[31]+0x00000004u,c->r[4]); // 800F57CC
  goto L_800F57D8; // 800F57D0
L_800F57D4:;
  c->r[3]=0u+0x00000000u; // 800F57D4
L_800F57D8:;
  c->r[11]=c->r[1]+0x00000030u; // 800F57D8
  c->lr=0x800F57E0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F57DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F57E0
  c->lr=c->r[0]; // 800F57E4
  c->r[1]=c->r[1]+0x00000030u; // 800F57E8
  return; // 800F57EC
}

// SCFindByteArrayItem
void f_800F57F0(Ctx* __restrict c) {
  trace_call(0x800F57F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F57F0
  c->r[0]=c->lr; // 800F57F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F57F8
  c->r[11]=c->r[1]+0x00000040u; // 800F57FC
  c->lr=0x800F5804u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F5800
  c->r[27]=c->r[3]|c->r[3]; // 800F5804
  c->r[28]=c->r[4]|c->r[4]; // 800F5808
  c->r[29]=c->r[5]|c->r[5]; // 800F580C
  c->r[31]=0u+0x00000000u; // 800F5810
  c->lr=0x800F5818u; f_800B087C(c); // 800F5814
  c->r[0]=0u+0x00000000u; // 800F5818
  c->r[30]=c->r[3]|c->r[3]; // 800F581C
  cmpu(c,0,c->r[27],c->r[0]); // 800F5820
  if (crb(c,2)) { goto L_800F58AC; } // 800F5824
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F5828
  c->r[5]=0u+0x802D0000u; // 800F582C
  c->r[5]=c->r[5]+0x00003260u; // 800F5830
  cmpu(c,0,c->r[29],c->r[0]); // 800F5834
  if (!crb(c,0)) { goto L_800F5874; } // 800F5838
  c->r[3]=R32(c->r[13]+0xFFFF9300u); // 800F583C
  cmps(c,0,(int32_t)c->r[3],0); // 800F5840
  if (crb(c,2)) { goto L_800F5874; } // 800F5844
  c->r[0]=0u-c->r[29]; // 800F5848
  c->r[3]=c->r[5]+c->r[3]; // 800F584C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5850
  c->r[0]=R16(c->r[3]+c->r[0]); // 800F5854
  cmps(c,0,(int32_t)c->r[0],0); // 800F5858
  if (crb(c,2)) { goto L_800F5874; } // 800F585C
  c->r[0]=R16(c->r[5]+c->r[0]); // 800F5860
  c->r[4]=c->r[1]+0x00000008u; // 800F5864
  c->r[3]=c->r[5]+c->r[0]; // 800F5868
  c->lr=0x800F5870u; f_800F5250(c); // 800F586C
  goto L_800F5878; // 800F5870
L_800F5874:;
  c->r[3]=0u+0x00000000u; // 800F5874
L_800F5878:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F5878
  if (crb(c,2)) { goto L_800F58AC; } // 800F587C
  c->r[0]=R8(c->r[1]+0x00000011u); // 800F5880
  cmps(c,0,(int32_t)c->r[0],0); // 800F5884
  if (crb(c,2)) { goto L_800F58AC; } // 800F5888
  c->r[0]=R32(c->r[1]+0x00000018u); // 800F588C
  cmpu(c,0,c->r[0],c->r[28]); // 800F5890
  if (!crb(c,2)) { goto L_800F58AC; } // 800F5894
  c->r[4]=R32(c->r[1]+0x00000020u); // 800F5898
  c->r[3]=c->r[27]|c->r[27]; // 800F589C
  c->r[5]=c->r[28]|c->r[28]; // 800F58A0
  c->lr=0x800F58A8u; f_80004338(c); // 800F58A4
  c->r[31]=0u+0x00000001u; // 800F58A8
L_800F58AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F58AC
  c->lr=0x800F58B4u; f_800B08A4(c); // 800F58B0
  c->r[11]=c->r[1]+0x00000040u; // 800F58B4
  c->r[3]=c->r[31]|c->r[31]; // 800F58B8
  c->lr=0x800F58C0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F58BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F58C0
  c->lr=c->r[0]; // 800F58C4
  c->r[1]=c->r[1]+0x00000040u; // 800F58C8
  return; // 800F58CC
}

// SCReplaceByteArrayItem
void f_800F58D0(Ctx* __restrict c) {
  trace_call(0x800F58D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F58D0
  c->r[0]=c->lr; // 800F58D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F58D8
  c->r[11]=c->r[1]+0x00000040u; // 800F58DC
  c->lr=0x800F58E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F58E0
  c->r[27]=c->r[3]|c->r[3]; // 800F58E4
  c->r[28]=c->r[4]|c->r[4]; // 800F58E8
  c->r[29]=c->r[5]|c->r[5]; // 800F58EC
  c->r[31]=0u+0x00000000u; // 800F58F0
  c->lr=0x800F58F8u; f_800B087C(c); // 800F58F4
  c->r[0]=0u+0x00000000u; // 800F58F8
  c->r[30]=c->r[3]|c->r[3]; // 800F58FC
  cmpu(c,0,c->r[27],c->r[0]); // 800F5900
  if (crb(c,2)) { goto L_800F59D0; } // 800F5904
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F5908
  c->r[5]=0u+0x802D0000u; // 800F590C
  c->r[5]=c->r[5]+0x00003260u; // 800F5910
  cmpu(c,0,c->r[29],c->r[0]); // 800F5914
  if (!crb(c,0)) { goto L_800F5954; } // 800F5918
  c->r[3]=R32(c->r[13]+0xFFFF9300u); // 800F591C
  cmps(c,0,(int32_t)c->r[3],0); // 800F5920
  if (crb(c,2)) { goto L_800F5954; } // 800F5924
  c->r[0]=0u-c->r[29]; // 800F5928
  c->r[3]=c->r[5]+c->r[3]; // 800F592C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5930
  c->r[0]=R16(c->r[3]+c->r[0]); // 800F5934
  cmps(c,0,(int32_t)c->r[0],0); // 800F5938
  if (crb(c,2)) { goto L_800F5954; } // 800F593C
  c->r[0]=R16(c->r[5]+c->r[0]); // 800F5940
  c->r[4]=c->r[1]+0x00000008u; // 800F5944
  c->r[3]=c->r[5]+c->r[0]; // 800F5948
  c->lr=0x800F5950u; f_800F5250(c); // 800F594C
  goto L_800F5958; // 800F5950
L_800F5954:;
  c->r[3]=0u+0x00000000u; // 800F5954
L_800F5958:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F5958
  if (crb(c,2)) { goto L_800F59B8; } // 800F595C
  c->r[0]=R8(c->r[1]+0x00000011u); // 800F5960
  cmps(c,0,(int32_t)c->r[0],0); // 800F5964
  if (crb(c,2)) { goto L_800F59B0; } // 800F5968
  c->r[0]=R32(c->r[1]+0x00000018u); // 800F596C
  cmpu(c,0,c->r[0],c->r[28]); // 800F5970
  if (!crb(c,2)) { goto L_800F59B0; } // 800F5974
  c->r[3]=R32(c->r[1]+0x00000020u); // 800F5978
  c->r[4]=c->r[27]|c->r[27]; // 800F597C
  c->r[5]=c->r[28]|c->r[28]; // 800F5980
  c->lr=0x800F5988u; f_800D7BBC(c); // 800F5984
  cmps(c,0,(int32_t)c->r[3],0); // 800F5988
  if (crb(c,2)) { goto L_800F59A8; } // 800F598C
  c->r[3]=R32(c->r[1]+0x00000020u); // 800F5990
  c->r[4]=c->r[27]|c->r[27]; // 800F5994
  c->r[5]=c->r[28]|c->r[28]; // 800F5998
  c->lr=0x800F59A0u; f_80004338(c); // 800F599C
  c->r[0]=0u+0x00000001u; // 800F59A0
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F59A4
L_800F59A8:;
  c->r[31]=0u+0x00000001u; // 800F59A8
  goto L_800F59D0; // 800F59AC
L_800F59B0:;
  c->r[3]=c->r[29]|c->r[29]; // 800F59B0
  c->lr=0x800F59B8u; f_800F53E8(c); // 800F59B4
L_800F59B8:;
  c->r[3]=c->r[29]|c->r[29]; // 800F59B8
  c->r[5]=c->r[27]|c->r[27]; // 800F59BC
  c->r[6]=c->r[28]|c->r[28]; // 800F59C0
  c->r[4]=0u+0x00000040u; // 800F59C4
  c->lr=0x800F59CCu; f_800F5578(c); // 800F59C8
  c->r[31]=c->r[3]|c->r[3]; // 800F59CC
L_800F59D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F59D0
  c->lr=0x800F59D8u; f_800B08A4(c); // 800F59D4
  c->r[11]=c->r[1]+0x00000040u; // 800F59D8
  c->r[3]=c->r[31]|c->r[31]; // 800F59DC
  c->lr=0x800F59E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F59E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F59E4
  c->lr=c->r[0]; // 800F59E8
  c->r[1]=c->r[1]+0x00000040u; // 800F59EC
  return; // 800F59F0
}

// SCReplaceIntegerItem
void f_800F59F4(Ctx* __restrict c) {
  trace_call(0x800F59F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F59F4
  c->r[0]=c->lr; // 800F59F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F59FC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F5A00
  c->r[31]=c->r[5]|c->r[5]; // 800F5A04
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F5A08
  W32(c->r[1]+0x00000034u,c->r[29]); // 800F5A0C
  c->r[29]=c->r[4]|c->r[4]; // 800F5A10
  W32(c->r[1]+0x00000030u,c->r[28]); // 800F5A14
  c->r[28]=c->r[3]|c->r[3]; // 800F5A18
  c->lr=0x800F5A20u; f_800B087C(c); // 800F5A1C
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F5A20
  c->r[5]=0u+0x802D0000u; // 800F5A24
  c->r[30]=c->r[3]|c->r[3]; // 800F5A28
  cmpu(c,0,c->r[29],c->r[0]); // 800F5A2C
  c->r[5]=c->r[5]+0x00003260u; // 800F5A30
  if (!crb(c,0)) { goto L_800F5A70; } // 800F5A34
  c->r[3]=R32(c->r[13]+0xFFFF9300u); // 800F5A38
  cmps(c,0,(int32_t)c->r[3],0); // 800F5A3C
  if (crb(c,2)) { goto L_800F5A70; } // 800F5A40
  c->r[0]=0u-c->r[29]; // 800F5A44
  c->r[3]=c->r[5]+c->r[3]; // 800F5A48
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5A4C
  c->r[0]=R16(c->r[3]+c->r[0]); // 800F5A50
  cmps(c,0,(int32_t)c->r[0],0); // 800F5A54
  if (crb(c,2)) { goto L_800F5A70; } // 800F5A58
  c->r[0]=R16(c->r[5]+c->r[0]); // 800F5A5C
  c->r[4]=c->r[1]+0x00000008u; // 800F5A60
  c->r[3]=c->r[5]+c->r[0]; // 800F5A64
  c->lr=0x800F5A6Cu; f_800F5250(c); // 800F5A68
  goto L_800F5A74; // 800F5A6C
L_800F5A70:;
  c->r[3]=0u+0x00000000u; // 800F5A70
L_800F5A74:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F5A74
  if (crb(c,2)) { goto L_800F5AC8; } // 800F5A78
  c->r[0]=R8(c->r[1]+0x00000010u); // 800F5A7C
  cmpu(c,0,c->r[0],c->r[31]); // 800F5A80
  if (!crb(c,2)) { goto L_800F5AC0; } // 800F5A84
  c->r[3]=R32(c->r[1]+0x00000020u); // 800F5A88
  c->r[4]=c->r[28]|c->r[28]; // 800F5A8C
  c->r[5]=R32(c->r[1]+0x00000018u); // 800F5A90
  c->lr=0x800F5A98u; f_800D7BBC(c); // 800F5A94
  cmps(c,0,(int32_t)c->r[3],0); // 800F5A98
  if (crb(c,2)) { goto L_800F5AB8; } // 800F5A9C
  c->r[3]=R32(c->r[1]+0x00000020u); // 800F5AA0
  c->r[4]=c->r[28]|c->r[28]; // 800F5AA4
  c->r[5]=R32(c->r[1]+0x00000018u); // 800F5AA8
  c->lr=0x800F5AB0u; f_80004338(c); // 800F5AAC
  c->r[0]=0u+0x00000001u; // 800F5AB0
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F5AB4
L_800F5AB8:;
  c->r[31]=0u+0x00000001u; // 800F5AB8
  goto L_800F5AE0; // 800F5ABC
L_800F5AC0:;
  c->r[3]=c->r[29]|c->r[29]; // 800F5AC0
  c->lr=0x800F5AC8u; f_800F53E8(c); // 800F5AC4
L_800F5AC8:;
  c->r[3]=c->r[29]|c->r[29]; // 800F5AC8
  c->r[4]=c->r[31]|c->r[31]; // 800F5ACC
  c->r[5]=c->r[28]|c->r[28]; // 800F5AD0
  c->r[6]=0u+0x00000000u; // 800F5AD4
  c->lr=0x800F5ADCu; f_800F5578(c); // 800F5AD8
  c->r[31]=c->r[3]|c->r[3]; // 800F5ADC
L_800F5AE0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5AE0
  c->lr=0x800F5AE8u; f_800B08A4(c); // 800F5AE4
  c->r[3]=c->r[31]|c->r[31]; // 800F5AE8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F5AEC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F5AF0
  c->r[29]=R32(c->r[1]+0x00000034u); // 800F5AF4
  c->r[28]=R32(c->r[1]+0x00000030u); // 800F5AF8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F5AFC
  c->lr=c->r[0]; // 800F5B00
  c->r[1]=c->r[1]+0x00000040u; // 800F5B04
  return; // 800F5B08
}

// SCFindU8Item
void f_800F5B0C(Ctx* __restrict c) {
  trace_call(0x800F5B0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5B0C
  c->r[0]=c->lr; // 800F5B10
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F5B14
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F5B18
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F5B1C
  c->r[30]=0u+0x00000000u; // 800F5B20
  W32(c->r[1]+0x00000034u,c->r[29]); // 800F5B24
  c->r[29]=c->r[4]|c->r[4]; // 800F5B28
  W32(c->r[1]+0x00000030u,c->r[28]); // 800F5B2C
  c->r[28]=c->r[3]|c->r[3]; // 800F5B30
  c->lr=0x800F5B38u; f_800B087C(c); // 800F5B34
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F5B38
  c->r[5]=0u+0x802D0000u; // 800F5B3C
  c->r[31]=c->r[3]|c->r[3]; // 800F5B40
  cmpu(c,0,c->r[29],c->r[0]); // 800F5B44
  c->r[5]=c->r[5]+0x00003260u; // 800F5B48
  if (!crb(c,0)) { goto L_800F5B88; } // 800F5B4C
  c->r[3]=R32(c->r[13]+0xFFFF9300u); // 800F5B50
  cmps(c,0,(int32_t)c->r[3],0); // 800F5B54
  if (crb(c,2)) { goto L_800F5B88; } // 800F5B58
  c->r[0]=0u-c->r[29]; // 800F5B5C
  c->r[3]=c->r[5]+c->r[3]; // 800F5B60
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5B64
  c->r[0]=R16(c->r[3]+c->r[0]); // 800F5B68
  cmps(c,0,(int32_t)c->r[0],0); // 800F5B6C
  if (crb(c,2)) { goto L_800F5B88; } // 800F5B70
  c->r[0]=R16(c->r[5]+c->r[0]); // 800F5B74
  c->r[4]=c->r[1]+0x00000008u; // 800F5B78
  c->r[3]=c->r[5]+c->r[0]; // 800F5B7C
  c->lr=0x800F5B84u; f_800F5250(c); // 800F5B80
  goto L_800F5B8C; // 800F5B84
L_800F5B88:;
  c->r[3]=0u+0x00000000u; // 800F5B88
L_800F5B8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F5B8C
  if (crb(c,2)) { goto L_800F5BB4; } // 800F5B90
  c->r[0]=R8(c->r[1]+0x00000010u); // 800F5B94
  cmpu(c,0,c->r[0],0x00000060u); // 800F5B98
  if (!crb(c,2)) { goto L_800F5BB4; } // 800F5B9C
  c->r[4]=R32(c->r[1]+0x00000020u); // 800F5BA0
  c->r[3]=c->r[28]|c->r[28]; // 800F5BA4
  c->r[5]=R32(c->r[1]+0x00000018u); // 800F5BA8
  c->lr=0x800F5BB0u; f_80004338(c); // 800F5BAC
  c->r[30]=0u+0x00000001u; // 800F5BB0
L_800F5BB4:;
  c->r[3]=c->r[31]|c->r[31]; // 800F5BB4
  c->lr=0x800F5BBCu; f_800B08A4(c); // 800F5BB8
  c->r[3]=c->r[30]|c->r[30]; // 800F5BBC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F5BC0
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F5BC4
  c->r[29]=R32(c->r[1]+0x00000034u); // 800F5BC8
  c->r[28]=R32(c->r[1]+0x00000030u); // 800F5BCC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F5BD0
  c->lr=c->r[0]; // 800F5BD4
  c->r[1]=c->r[1]+0x00000040u; // 800F5BD8
  return; // 800F5BDC
}

// SCFindS8Item
void f_800F5BE0(Ctx* __restrict c) {
  trace_call(0x800F5BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5BE0
  c->r[0]=c->lr; // 800F5BE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F5BE8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F5BEC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F5BF0
  c->r[30]=0u+0x00000000u; // 800F5BF4
  W32(c->r[1]+0x00000034u,c->r[29]); // 800F5BF8
  c->r[29]=c->r[4]|c->r[4]; // 800F5BFC
  W32(c->r[1]+0x00000030u,c->r[28]); // 800F5C00
  c->r[28]=c->r[3]|c->r[3]; // 800F5C04
  c->lr=0x800F5C0Cu; f_800B087C(c); // 800F5C08
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F5C0C
  c->r[5]=0u+0x802D0000u; // 800F5C10
  c->r[31]=c->r[3]|c->r[3]; // 800F5C14
  cmpu(c,0,c->r[29],c->r[0]); // 800F5C18
  c->r[5]=c->r[5]+0x00003260u; // 800F5C1C
  if (!crb(c,0)) { goto L_800F5C5C; } // 800F5C20
  c->r[3]=R32(c->r[13]+0xFFFF9300u); // 800F5C24
  cmps(c,0,(int32_t)c->r[3],0); // 800F5C28
  if (crb(c,2)) { goto L_800F5C5C; } // 800F5C2C
  c->r[0]=0u-c->r[29]; // 800F5C30
  c->r[3]=c->r[5]+c->r[3]; // 800F5C34
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5C38
  c->r[0]=R16(c->r[3]+c->r[0]); // 800F5C3C
  cmps(c,0,(int32_t)c->r[0],0); // 800F5C40
  if (crb(c,2)) { goto L_800F5C5C; } // 800F5C44
  c->r[0]=R16(c->r[5]+c->r[0]); // 800F5C48
  c->r[4]=c->r[1]+0x00000008u; // 800F5C4C
  c->r[3]=c->r[5]+c->r[0]; // 800F5C50
  c->lr=0x800F5C58u; f_800F5250(c); // 800F5C54
  goto L_800F5C60; // 800F5C58
L_800F5C5C:;
  c->r[3]=0u+0x00000000u; // 800F5C5C
L_800F5C60:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F5C60
  if (crb(c,2)) { goto L_800F5C88; } // 800F5C64
  c->r[0]=R8(c->r[1]+0x00000010u); // 800F5C68
  cmpu(c,0,c->r[0],0x00000060u); // 800F5C6C
  if (!crb(c,2)) { goto L_800F5C88; } // 800F5C70
  c->r[4]=R32(c->r[1]+0x00000020u); // 800F5C74
  c->r[3]=c->r[28]|c->r[28]; // 800F5C78
  c->r[5]=R32(c->r[1]+0x00000018u); // 800F5C7C
  c->lr=0x800F5C84u; f_80004338(c); // 800F5C80
  c->r[30]=0u+0x00000001u; // 800F5C84
L_800F5C88:;
  c->r[3]=c->r[31]|c->r[31]; // 800F5C88
  c->lr=0x800F5C90u; f_800B08A4(c); // 800F5C8C
  c->r[3]=c->r[30]|c->r[30]; // 800F5C90
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F5C94
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F5C98
  c->r[29]=R32(c->r[1]+0x00000034u); // 800F5C9C
  c->r[28]=R32(c->r[1]+0x00000030u); // 800F5CA0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F5CA4
  c->lr=c->r[0]; // 800F5CA8
  c->r[1]=c->r[1]+0x00000040u; // 800F5CAC
  return; // 800F5CB0
}

// SCFindU32Item
void f_800F5CB4(Ctx* __restrict c) {
  trace_call(0x800F5CB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5CB4
  c->r[0]=c->lr; // 800F5CB8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F5CBC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F5CC0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F5CC4
  c->r[30]=0u+0x00000000u; // 800F5CC8
  W32(c->r[1]+0x00000034u,c->r[29]); // 800F5CCC
  c->r[29]=c->r[4]|c->r[4]; // 800F5CD0
  W32(c->r[1]+0x00000030u,c->r[28]); // 800F5CD4
  c->r[28]=c->r[3]|c->r[3]; // 800F5CD8
  c->lr=0x800F5CE0u; f_800B087C(c); // 800F5CDC
  c->r[0]=R32(c->r[13]+0xFFFF92FCu); // 800F5CE0
  c->r[5]=0u+0x802D0000u; // 800F5CE4
  c->r[31]=c->r[3]|c->r[3]; // 800F5CE8
  cmpu(c,0,c->r[29],c->r[0]); // 800F5CEC
  c->r[5]=c->r[5]+0x00003260u; // 800F5CF0
  if (!crb(c,0)) { goto L_800F5D30; } // 800F5CF4
  c->r[3]=R32(c->r[13]+0xFFFF9300u); // 800F5CF8
  cmps(c,0,(int32_t)c->r[3],0); // 800F5CFC
  if (crb(c,2)) { goto L_800F5D30; } // 800F5D00
  c->r[0]=0u-c->r[29]; // 800F5D04
  c->r[3]=c->r[5]+c->r[3]; // 800F5D08
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5D0C
  c->r[0]=R16(c->r[3]+c->r[0]); // 800F5D10
  cmps(c,0,(int32_t)c->r[0],0); // 800F5D14
  if (crb(c,2)) { goto L_800F5D30; } // 800F5D18
  c->r[0]=R16(c->r[5]+c->r[0]); // 800F5D1C
  c->r[4]=c->r[1]+0x00000008u; // 800F5D20
  c->r[3]=c->r[5]+c->r[0]; // 800F5D24
  c->lr=0x800F5D2Cu; f_800F5250(c); // 800F5D28
  goto L_800F5D34; // 800F5D2C
L_800F5D30:;
  c->r[3]=0u+0x00000000u; // 800F5D30
L_800F5D34:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F5D34
  if (crb(c,2)) { goto L_800F5D5C; } // 800F5D38
  c->r[0]=R8(c->r[1]+0x00000010u); // 800F5D3C
  cmpu(c,0,c->r[0],0x000000A0u); // 800F5D40
  if (!crb(c,2)) { goto L_800F5D5C; } // 800F5D44
  c->r[4]=R32(c->r[1]+0x00000020u); // 800F5D48
  c->r[3]=c->r[28]|c->r[28]; // 800F5D4C
  c->r[5]=R32(c->r[1]+0x00000018u); // 800F5D50
  c->lr=0x800F5D58u; f_80004338(c); // 800F5D54
  c->r[30]=0u+0x00000001u; // 800F5D58
L_800F5D5C:;
  c->r[3]=c->r[31]|c->r[31]; // 800F5D5C
  c->lr=0x800F5D64u; f_800B08A4(c); // 800F5D60
  c->r[3]=c->r[30]|c->r[30]; // 800F5D64
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F5D68
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F5D6C
  c->r[29]=R32(c->r[1]+0x00000034u); // 800F5D70
  c->r[28]=R32(c->r[1]+0x00000030u); // 800F5D74
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F5D78
  c->lr=c->r[0]; // 800F5D7C
  c->r[1]=c->r[1]+0x00000040u; // 800F5D80
  return; // 800F5D84
}

// SCReplaceU8Item
void f_800F5D88(Ctx* __restrict c) {
  trace_call(0x800F5D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5D88
  c->r[0]=c->lr; // 800F5D8C
  c->r[5]=0u+0x00000060u; // 800F5D90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5D94
  W8(c->r[1]+0x00000008u,c->r[3]); // 800F5D98
  c->r[3]=c->r[1]+0x00000008u; // 800F5D9C
  c->lr=0x800F5DA4u; f_800F59F4(c); // 800F5DA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5DA4
  c->lr=c->r[0]; // 800F5DA8
  c->r[1]=c->r[1]+0x00000010u; // 800F5DAC
  return; // 800F5DB0
}

// __SCFlushSyncCallback
void f_800F5DB4(Ctx* __restrict c) {
  trace_call(0x800F5DB4u);
  c->r[3]=0u+0x802D0000u; // 800F5DB4
  c->r[3]=c->r[3]+0x000030C0u; // 800F5DB8
  f_800B46D8(c); return; // 800F5DBC
}

// SCFlushAsync
void f_800F5DC0(Ctx* __restrict c) {
  trace_call(0x800F5DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5DC0
  c->r[0]=c->lr; // 800F5DC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F5DC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F5DCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F5DD0
  c->r[30]=c->r[3]|c->r[3]; // 800F5DD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F5DD8
  c->r[29]=0u+0x802D0000u; // 800F5DDC
  c->r[29]=c->r[29]+0x000030C0u; // 800F5DE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F5DE4
  c->r[28]=c->r[29]+0x00000000u; // 800F5DE8
  c->lr=0x800F5DF0u; f_800B087C(c); // 800F5DEC
  c->r[0]=R8(c->r[13]+0xFFFF92F0u); // 800F5DF0
  c->r[31]=c->r[3]|c->r[3]; // 800F5DF4
  cmps(c,0,(int32_t)c->r[0],0); // 800F5DF8
  if (!crb(c,2)) { goto L_800F5F8C; } // 800F5DFC
  c->r[0]=0u+0x00000000u; // 800F5E00
  c->r[3]=0u+0x00000001u; // 800F5E04
  cmpu(c,0,c->r[30],c->r[0]); // 800F5E08
  W8(c->r[13]+0xFFFF92F0u,c->r[3]); // 800F5E0C
  if (!crb(c,2)) { goto L_800F5E1C; } // 800F5E10
  c->r[30]=0u+0x800F0000u; // 800F5E14
  c->r[30]=c->r[30]+0x00005DB4u; // 800F5E18
L_800F5E1C:;
  c->r[0]=R8(c->r[13]+0xFFFF9305u); // 800F5E1C
  c->r[4]=0u+0x00000000u; // 800F5E20
  c->r[3]=0u+0x00004000u; // 800F5E24
  W32(c->r[28]+0x00000184u,c->r[30]); // 800F5E28
  cmps(c,0,(int32_t)c->r[0],0); // 800F5E2C
  W32(c->r[28]+0x00000188u,c->r[4]); // 800F5E30
  W8(c->r[28]+0x00000159u,c->r[4]); // 800F5E34
  W32(c->r[28]+0x0000018Cu,c->r[3]); // 800F5E38
  if (crb(c,2)) { goto L_800F5E48; } // 800F5E3C
  c->r[0]=0u+0x00000001u; // 800F5E40
  goto L_800F5E4C; // 800F5E44
L_800F5E48:;
  c->r[0]=0u+0x00000000u; // 800F5E48
L_800F5E4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F5E4C
  if (!crb(c,2)) { goto L_800F5EB4; } // 800F5E50
  c->r[3]=c->r[31]|c->r[31]; // 800F5E54
  c->lr=0x800F5E5Cu; f_800B08A4(c); // 800F5E58
  c->r[29]=c->r[29]+0x00000000u; // 800F5E5C
  c->r[0]=R32(c->r[29]+0x00000188u); // 800F5E60
  cmps(c,0,(int32_t)c->r[0],0); // 800F5E64
  if (crb(c,2)) { goto L_800F5E74; } // 800F5E68
  c->r[0]=0u+0x00000001u; // 800F5E6C
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F5E70
L_800F5E74:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 800F5E74
  cmps(c,0,(int32_t)c->r[12],0); // 800F5E78
  if (crb(c,2)) { goto L_800F5EA8; } // 800F5E7C
  c->r[30]=0u+0x00000000u; // 800F5E80
  c->r[3]=R32(c->r[29]+0x00000188u); // 800F5E84
  W32(c->r[29]+0x00000184u,c->r[30]); // 800F5E88
  c->ctr=c->r[12]; // 800F5E8C
  if (true) { c->lr=0x800F5E94u; dispatch(c,c->ctr); } // 800F5E90
  c->r[0]=R32(c->r[29]+0x00000000u); // 800F5E94
  cmpu(c,0,c->r[0],c->r[30]); // 800F5E98
  if (crb(c,2)) { goto L_800F5EA8; } // 800F5E9C
  c->r[3]=c->r[29]|c->r[29]; // 800F5EA0
  c->lr=0x800F5EA8u; f_800B46D8(c); // 800F5EA4
L_800F5EA8:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 800F5EA8
  W8(c->r[13]+0xFFFF92F0u,c->r[0]); // 800F5EAC
  goto L_800F5FBC; // 800F5EB0
L_800F5EB4:;
  c->r[30]=0u+0x00000000u; // 800F5EB4
  c->r[3]=c->r[29]+0x000041A0u; // 800F5EB8
  W8(c->r[13]+0xFFFF9305u,c->r[30]); // 800F5EBC
  c->r[4]=c->r[29]+0x000001A0u; // 800F5EC0
  c->r[5]=0u+0x00004000u; // 800F5EC4
  c->lr=0x800F5ECCu; f_80004338(c); // 800F5EC8
  c->r[3]=c->r[31]|c->r[31]; // 800F5ECC
  c->lr=0x800F5ED4u; f_800B08A4(c); // 800F5ED0
  c->r[3]=0u+0x80260000u; // 800F5ED4
  c->r[31]=0u+0x800F0000u; // 800F5ED8
  W8(c->r[28]+0x00000158u,c->r[30]); // 800F5EDC
  c->r[3]=c->r[3]+0xFFFFBBB0u; // 800F5EE0
  c->r[4]=c->r[28]+0x00000150u; // 800F5EE4
  c->r[5]=c->r[31]+0x00005FDCu; // 800F5EE8
  c->r[6]=c->r[28]+0x00000094u; // 800F5EEC
  c->lr=0x800F5EF4u; f_800F4098(c); // 800F5EF0
  cmps(c,0,(int32_t)c->r[3],0); // 800F5EF4
  if (crb(c,2)) { goto L_800F5FBC; } // 800F5EF8
  c->r[5]=c->r[29]+0x00000000u; // 800F5EFC
  c->r[3]=0u+0x00000002u; // 800F5F00
  c->r[0]=R8(c->r[5]+0x00000159u); // 800F5F04
  W32(c->r[5]+0x00000188u,c->r[3]); // 800F5F08
  cmps(c,0,(int32_t)c->r[0],0); // 800F5F0C
  if (crb(c,2)) { goto L_800F5F34; } // 800F5F10
  c->r[0]=0u+0x00000009u; // 800F5F14
  c->r[3]=c->r[5]+0x00000008u; // 800F5F18
  W8(c->r[5]+0x00000158u,c->r[0]); // 800F5F1C
  c->r[4]=c->r[31]+0x00005FDCu; // 800F5F20
  c->r[5]=c->r[5]+0x00000094u; // 800F5F24
  c->lr=0x800F5F2Cu; f_800F2DD0(c); // 800F5F28
  cmps(c,0,(int32_t)c->r[3],0); // 800F5F2C
  if (crb(c,2)) { goto L_800F5FBC; } // 800F5F30
L_800F5F34:;
  c->r[29]=c->r[29]+0x00000000u; // 800F5F34
  c->r[0]=R32(c->r[29]+0x00000188u); // 800F5F38
  cmps(c,0,(int32_t)c->r[0],0); // 800F5F3C
  if (crb(c,2)) { goto L_800F5F4C; } // 800F5F40
  c->r[0]=0u+0x00000001u; // 800F5F44
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F5F48
L_800F5F4C:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 800F5F4C
  cmps(c,0,(int32_t)c->r[12],0); // 800F5F50
  if (crb(c,2)) { goto L_800F5F80; } // 800F5F54
  c->r[31]=0u+0x00000000u; // 800F5F58
  c->r[3]=R32(c->r[29]+0x00000188u); // 800F5F5C
  W32(c->r[29]+0x00000184u,c->r[31]); // 800F5F60
  c->ctr=c->r[12]; // 800F5F64
  if (true) { c->lr=0x800F5F6Cu; dispatch(c,c->ctr); } // 800F5F68
  c->r[0]=R32(c->r[29]+0x00000000u); // 800F5F6C
  cmpu(c,0,c->r[0],c->r[31]); // 800F5F70
  if (crb(c,2)) { goto L_800F5F80; } // 800F5F74
  c->r[3]=c->r[29]|c->r[29]; // 800F5F78
  c->lr=0x800F5F80u; f_800B46D8(c); // 800F5F7C
L_800F5F80:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 800F5F80
  W8(c->r[13]+0xFFFF92F0u,c->r[0]); // 800F5F84
  goto L_800F5FBC; // 800F5F88
L_800F5F8C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F5F8C
  if (crb(c,2)) { goto L_800F5FB4; } // 800F5F90
  cmpu(c,0,c->r[0],0x00000001u); // 800F5F94
  if (!crb(c,2)) { goto L_800F5FA0; } // 800F5F98
  goto L_800F5FA4; // 800F5F9C
L_800F5FA0:;
  c->r[0]=0u+0x00000002u; // 800F5FA0
L_800F5FA4:;
  c->r[12]=c->r[30]|c->r[30]; // 800F5FA4
  c->r[3]=c->r[0]|c->r[0]; // 800F5FA8
  c->ctr=c->r[12]; // 800F5FAC
  if (true) { c->lr=0x800F5FB4u; dispatch(c,c->ctr); } // 800F5FB0
L_800F5FB4:;
  c->r[3]=c->r[31]|c->r[31]; // 800F5FB4
  c->lr=0x800F5FBCu; f_800B08A4(c); // 800F5FB8
L_800F5FBC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F5FBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F5FC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F5FC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F5FC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F5FCC
  c->lr=c->r[0]; // 800F5FD0
  c->r[1]=c->r[1]+0x00000020u; // 800F5FD4
  return; // 800F5FD8
}

// MyNandCallback
void f_800F5FDC(Ctx* __restrict c) {
  trace_call(0x800F5FDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5FDC
  c->r[0]=c->lr; // 800F5FE0
  c->r[7]=0u+0x802D0000u; // 800F5FE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5FE8
  c->r[7]=c->r[7]+0x000030C0u; // 800F5FEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5FF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5FF4
  c->r[0]=R8(c->r[7]+0x00000158u); // 800F5FF8
  cmpu(c,0,c->r[0],0x00000009u); // 800F5FFC
  if (crb(c,1)) { goto L_800F62FC; } // 800F6000
  c->r[4]=0u+0x80280000u; // 800F6004
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F6008
  c->r[4]=c->r[4]+0xFFFFB798u; // 800F600C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800F6010
  c->ctr=c->r[4]; // 800F6014
  if (true) { switch (c->ctr) { case 0x800F601Cu: goto L_800F601C; case 0x800F6060u: goto L_800F6060; case 0x800F60A0u: goto L_800F60A0; case 0x800F60D0u: goto L_800F60D0; case 0x800F6118u: goto L_800F6118; case 0x800F614Cu: goto L_800F614C; case 0x800F6180u: goto L_800F6180; case 0x800F61C4u: goto L_800F61C4; case 0x800F6200u: goto L_800F6200; case 0x800F6208u: goto L_800F6208; default: break; } dispatch(c,c->ctr); return; } // 800F6018
L_800F601C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F601C
  if (!crb(c,2)) { goto L_800F6074; } // 800F6020
  c->r[0]=R8(c->r[7]+0x00000150u); // 800F6024
  cmpu(c,0,c->r[0],0x00000001u); // 800F6028
  if (!crb(c,2)) { goto L_800F6074; } // 800F602C
  c->r[0]=0u+0x00000001u; // 800F6030
  c->r[3]=0u+0x80260000u; // 800F6034
  c->r[5]=0u+0x800F0000u; // 800F6038
  W8(c->r[7]+0x00000158u,c->r[0]); // 800F603C
  c->r[3]=c->r[3]+0xFFFFBBB0u; // 800F6040
  c->r[4]=c->r[7]+0x00000150u; // 800F6044
  c->r[5]=c->r[5]+0x00005FDCu; // 800F6048
  c->r[6]=c->r[7]+0x00000094u; // 800F604C
  c->lr=0x800F6054u; f_800F294C(c); // 800F6050
  cmps(c,0,(int32_t)c->r[3],0); // 800F6054
  if (!crb(c,2)) { goto L_800F6264; } // 800F6058
  goto L_800F62FC; // 800F605C
L_800F6060:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F6060
  if (!crb(c,2)) { goto L_800F6074; } // 800F6064
  c->r[0]=R8(c->r[7]+0x00000157u); // 800F6068
  cmpu(c,0,c->r[0],0x0000003Fu); // 800F606C
  if (crb(c,2)) { goto L_800F614C; } // 800F6070
L_800F6074:;
  c->r[0]=0u+0x00000002u; // 800F6074
  c->r[3]=0u+0x80260000u; // 800F6078
  c->r[4]=0u+0x800F0000u; // 800F607C
  W8(c->r[7]+0x00000158u,c->r[0]); // 800F6080
  c->r[3]=c->r[3]+0xFFFFBBB0u; // 800F6084
  c->r[5]=c->r[7]+0x00000094u; // 800F6088
  c->r[4]=c->r[4]+0x00005FDCu; // 800F608C
  c->lr=0x800F6094u; f_800F1FE0(c); // 800F6090
  cmps(c,0,(int32_t)c->r[3],0); // 800F6094
  if (!crb(c,2)) { goto L_800F6264; } // 800F6098
  goto L_800F62FC; // 800F609C
L_800F60A0:;
  c->r[0]=0u+0x00000003u; // 800F60A0
  c->r[3]=0u+0x80260000u; // 800F60A4
  c->r[5]=0u+0x800F0000u; // 800F60A8
  W8(c->r[7]+0x00000158u,c->r[0]); // 800F60AC
  c->r[3]=c->r[3]+0xFFFFBBA0u; // 800F60B0
  c->r[4]=c->r[7]+0x00000150u; // 800F60B4
  c->r[5]=c->r[5]+0x00005FDCu; // 800F60B8
  c->r[6]=c->r[7]+0x00000094u; // 800F60BC
  c->lr=0x800F60C4u; f_800F4098(c); // 800F60C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F60C4
  if (!crb(c,2)) { goto L_800F6264; } // 800F60C8
  goto L_800F62FC; // 800F60CC
L_800F60D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F60D0
  if (!crb(c,2)) { goto L_800F60E4; } // 800F60D4
  c->r[0]=R8(c->r[7]+0x00000150u); // 800F60D8
  cmpu(c,0,c->r[0],0x00000002u); // 800F60DC
  if (crb(c,2)) { goto L_800F6118; } // 800F60E0
L_800F60E4:;
  c->r[0]=0u+0x00000004u; // 800F60E4
  c->r[3]=0u+0x80260000u; // 800F60E8
  c->r[6]=0u+0x800F0000u; // 800F60EC
  W8(c->r[7]+0x00000158u,c->r[0]); // 800F60F0
  c->r[3]=c->r[3]+0xFFFFBBA0u; // 800F60F4
  c->r[7]=c->r[7]+0x00000094u; // 800F60F8
  c->r[6]=c->r[6]+0x00005FDCu; // 800F60FC
  c->r[4]=0u+0x0000003Fu; // 800F6100
  c->r[5]=0u+0x00000000u; // 800F6104
  c->lr=0x800F610Cu; f_800F24DC(c); // 800F6108
  cmps(c,0,(int32_t)c->r[3],0); // 800F610C
  if (!crb(c,2)) { goto L_800F6264; } // 800F6110
  goto L_800F62FC; // 800F6114
L_800F6118:;
  c->r[0]=0u+0x00000005u; // 800F6118
  c->r[3]=0u+0x80260000u; // 800F611C
  c->r[6]=0u+0x800F0000u; // 800F6120
  W8(c->r[7]+0x00000158u,c->r[0]); // 800F6124
  c->r[3]=c->r[3]+0xFFFFBBB0u; // 800F6128
  c->r[7]=c->r[7]+0x00000094u; // 800F612C
  c->r[6]=c->r[6]+0x00005FDCu; // 800F6130
  c->r[4]=0u+0x0000003Fu; // 800F6134
  c->r[5]=0u+0x00000000u; // 800F6138
  c->lr=0x800F6140u; f_800F1E20(c); // 800F613C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6140
  if (!crb(c,2)) { goto L_800F6264; } // 800F6144
  goto L_800F62FC; // 800F6148
L_800F614C:;
  c->r[0]=0u+0x00000006u; // 800F614C
  c->r[3]=0u+0x80260000u; // 800F6150
  c->r[6]=0u+0x800F0000u; // 800F6154
  W8(c->r[7]+0x00000158u,c->r[0]); // 800F6158
  c->r[4]=c->r[7]+0x00000008u; // 800F615C
  c->r[3]=c->r[3]+0xFFFFBBB0u; // 800F6160
  c->r[6]=c->r[6]+0x00005FDCu; // 800F6164
  c->r[7]=c->r[7]+0x00000094u; // 800F6168
  c->r[5]=0u+0x00000002u; // 800F616C
  c->lr=0x800F6174u; f_800F2C74(c); // 800F6170
  cmps(c,0,(int32_t)c->r[3],0); // 800F6174
  if (!crb(c,2)) { goto L_800F6264; } // 800F6178
  goto L_800F62FC; // 800F617C
L_800F6180:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F6180
  if (!crb(c,2)) { goto L_800F6264; } // 800F6184
  c->r[3]=0u+0x00000001u; // 800F6188
  c->r[0]=0u+0x00000007u; // 800F618C
  c->r[4]=0u+0x802D0000u; // 800F6190
  c->r[6]=0u+0x800F0000u; // 800F6194
  W8(c->r[7]+0x00000159u,c->r[3]); // 800F6198
  c->r[3]=c->r[7]+0x00000008u; // 800F619C
  c->r[5]=R32(c->r[7]+0x0000018Cu); // 800F61A0
  c->r[4]=c->r[4]+0x00007260u; // 800F61A4
  W8(c->r[7]+0x00000158u,c->r[0]); // 800F61A8
  c->r[6]=c->r[6]+0x00005FDCu; // 800F61AC
  c->r[7]=c->r[7]+0x00000094u; // 800F61B0
  c->lr=0x800F61B8u; f_800F21E8(c); // 800F61B4
  cmps(c,0,(int32_t)c->r[3],0); // 800F61B8
  if (!crb(c,2)) { goto L_800F6264; } // 800F61BC
  goto L_800F62FC; // 800F61C0
L_800F61C4:;
  c->r[0]=R32(c->r[7]+0x0000018Cu); // 800F61C4
  cmpu(c,0,c->r[3],c->r[0]); // 800F61C8
  if (!crb(c,2)) { goto L_800F6264; } // 800F61CC
  c->r[3]=0u+0x00000000u; // 800F61D0
  c->r[0]=0u+0x00000008u; // 800F61D4
  c->r[4]=0u+0x800F0000u; // 800F61D8
  W8(c->r[7]+0x00000159u,c->r[3]); // 800F61DC
  c->r[3]=c->r[7]+0x00000008u; // 800F61E0
  c->r[5]=c->r[7]+0x00000094u; // 800F61E4
  W8(c->r[7]+0x00000158u,c->r[0]); // 800F61E8
  c->r[4]=c->r[4]+0x00005FDCu; // 800F61EC
  c->lr=0x800F61F4u; f_800F2DD0(c); // 800F61F0
  cmps(c,0,(int32_t)c->r[3],0); // 800F61F4
  if (!crb(c,2)) { goto L_800F6264; } // 800F61F8
  goto L_800F62FC; // 800F61FC
L_800F6200:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F6200
  if (!crb(c,2)) { goto L_800F6264; } // 800F6204
L_800F6208:;
  c->r[30]=0u+0x802D0000u; // 800F6208
  c->r[30]=c->r[30]+0x000030C0u; // 800F620C
  c->r[0]=R32(c->r[30]+0x00000188u); // 800F6210
  cmps(c,0,(int32_t)c->r[0],0); // 800F6214
  if (crb(c,2)) { goto L_800F6224; } // 800F6218
  c->r[0]=0u+0x00000001u; // 800F621C
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F6220
L_800F6224:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 800F6224
  cmps(c,0,(int32_t)c->r[12],0); // 800F6228
  if (crb(c,2)) { goto L_800F6258; } // 800F622C
  c->r[31]=0u+0x00000000u; // 800F6230
  c->r[3]=R32(c->r[30]+0x00000188u); // 800F6234
  W32(c->r[30]+0x00000184u,c->r[31]); // 800F6238
  c->ctr=c->r[12]; // 800F623C
  if (true) { c->lr=0x800F6244u; dispatch(c,c->ctr); } // 800F6240
  c->r[0]=R32(c->r[30]+0x00000000u); // 800F6244
  cmpu(c,0,c->r[0],c->r[31]); // 800F6248
  if (crb(c,2)) { goto L_800F6258; } // 800F624C
  c->r[3]=c->r[30]|c->r[30]; // 800F6250
  c->lr=0x800F6258u; f_800B46D8(c); // 800F6254
L_800F6258:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 800F6258
  W8(c->r[13]+0xFFFF92F0u,c->r[0]); // 800F625C
  goto L_800F62FC; // 800F6260
L_800F6264:;
  c->r[5]=0u+0x802D0000u; // 800F6264
  c->r[3]=0u+0x00000002u; // 800F6268
  c->r[5]=c->r[5]+0x000030C0u; // 800F626C
  c->r[0]=R8(c->r[5]+0x00000159u); // 800F6270
  W32(c->r[5]+0x00000188u,c->r[3]); // 800F6274
  cmps(c,0,(int32_t)c->r[0],0); // 800F6278
  if (crb(c,2)) { goto L_800F62A4; } // 800F627C
  c->r[0]=0u+0x00000009u; // 800F6280
  c->r[4]=0u+0x800F0000u; // 800F6284
  W8(c->r[5]+0x00000158u,c->r[0]); // 800F6288
  c->r[3]=c->r[5]+0x00000008u; // 800F628C
  c->r[4]=c->r[4]+0x00005FDCu; // 800F6290
  c->r[5]=c->r[5]+0x00000094u; // 800F6294
  c->lr=0x800F629Cu; f_800F2DD0(c); // 800F6298
  cmps(c,0,(int32_t)c->r[3],0); // 800F629C
  if (crb(c,2)) { goto L_800F62FC; } // 800F62A0
L_800F62A4:;
  c->r[30]=0u+0x802D0000u; // 800F62A4
  c->r[30]=c->r[30]+0x000030C0u; // 800F62A8
  c->r[0]=R32(c->r[30]+0x00000188u); // 800F62AC
  cmps(c,0,(int32_t)c->r[0],0); // 800F62B0
  if (crb(c,2)) { goto L_800F62C0; } // 800F62B4
  c->r[0]=0u+0x00000001u; // 800F62B8
  W8(c->r[13]+0xFFFF9305u,c->r[0]); // 800F62BC
L_800F62C0:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 800F62C0
  cmps(c,0,(int32_t)c->r[12],0); // 800F62C4
  if (crb(c,2)) { goto L_800F62F4; } // 800F62C8
  c->r[31]=0u+0x00000000u; // 800F62CC
  c->r[3]=R32(c->r[30]+0x00000188u); // 800F62D0
  W32(c->r[30]+0x00000184u,c->r[31]); // 800F62D4
  c->ctr=c->r[12]; // 800F62D8
  if (true) { c->lr=0x800F62E0u; dispatch(c,c->ctr); } // 800F62DC
  c->r[0]=R32(c->r[30]+0x00000000u); // 800F62E0
  cmpu(c,0,c->r[0],c->r[31]); // 800F62E4
  if (crb(c,2)) { goto L_800F62F4; } // 800F62E8
  c->r[3]=c->r[30]|c->r[30]; // 800F62EC
  c->lr=0x800F62F4u; f_800B46D8(c); // 800F62F0
L_800F62F4:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 800F62F4
  W8(c->r[13]+0xFFFF92F0u,c->r[0]); // 800F62F8
L_800F62FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F62FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6300
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6304
  c->lr=c->r[0]; // 800F6308
  c->r[1]=c->r[1]+0x00000010u; // 800F630C
  return; // 800F6310
}

void hle_SCGetAspectRatio(Ctx*);
// SCGetAspectRatio
void f_800F6314(Ctx* __restrict c) {
  hle_SCGetAspectRatio(c);
}

// SCGetDisplayOffsetH
void f_800F6368(Ctx* __restrict c) {
  trace_call(0x800F6368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6368
  c->r[0]=c->lr; // 800F636C
  c->r[4]=0u+0x00000005u; // 800F6370
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6374
  c->r[3]=c->r[1]+0x00000008u; // 800F6378
  c->lr=0x800F6380u; f_800F5BE0(c); // 800F637C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6380
  if (!crb(c,2)) { goto L_800F6394; } // 800F6384
  c->r[0]=0u+0x00000000u; // 800F6388
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F638C
  goto L_800F63C0; // 800F6390
L_800F6394:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F6394
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F6398
  cmps(c,0,(int32_t)c->r[0],-32); // 800F639C
  if (!crb(c,0)) { goto L_800F63B0; } // 800F63A0
  c->r[0]=0u+0xFFFFFFE0u; // 800F63A4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F63A8
  goto L_800F63C0; // 800F63AC
L_800F63B0:;
  cmps(c,0,(int32_t)c->r[0],32); // 800F63B0
  if (!crb(c,1)) { goto L_800F63C0; } // 800F63B4
  c->r[0]=0u+0x00000020u; // 800F63B8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F63BC
L_800F63C0:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F63C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800F63C4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F63C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F63CC
  c->lr=c->r[0]; // 800F63D0
  c->r[1]=c->r[1]+0x00000010u; // 800F63D4
  return; // 800F63D8
}

// SCGetEuRgb60Mode
void f_800F63DC(Ctx* __restrict c) {
  trace_call(0x800F63DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F63DC
  c->r[0]=c->lr; // 800F63E0
  c->r[4]=0u+0x00000006u; // 800F63E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F63E8
  c->r[3]=c->r[1]+0x00000008u; // 800F63EC
  c->lr=0x800F63F4u; f_800F5B0C(c); // 800F63F0
  cmps(c,0,(int32_t)c->r[3],0); // 800F63F4
  if (!crb(c,2)) { goto L_800F6408; } // 800F63F8
  c->r[0]=0u+0x00000000u; // 800F63FC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6400
  goto L_800F641C; // 800F6404
L_800F6408:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F6408
  cmpu(c,0,c->r[0],0x00000001u); // 800F640C
  if (crb(c,2)) { goto L_800F641C; } // 800F6410
  c->r[0]=0u+0x00000000u; // 800F6414
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6418
L_800F641C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F641C
  c->r[3]=R8(c->r[1]+0x00000008u); // 800F6420
  c->lr=c->r[0]; // 800F6424
  c->r[1]=c->r[1]+0x00000010u; // 800F6428
  return; // 800F642C
}

// SCGetIdleMode
void f_800F6430(Ctx* __restrict c) {
  trace_call(0x800F6430u);
  c->r[4]=0u+0x00000002u; // 800F6430
  c->r[5]=0u+0x00000009u; // 800F6434
  f_800F57F0(c); return; // 800F6438
}

// SCGetLanguage
void f_800F643C(Ctx* __restrict c) {
  trace_call(0x800F643Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F643C
  c->r[0]=c->lr; // 800F6440
  c->r[4]=0u+0x0000000Bu; // 800F6444
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6448
  c->r[3]=c->r[1]+0x00000008u; // 800F644C
  c->lr=0x800F6454u; f_800F5B0C(c); // 800F6450
  cmps(c,0,(int32_t)c->r[3],0); // 800F6454
  if (!crb(c,2)) { goto L_800F6480; } // 800F6458
  c->lr=0x800F6460u; f_800F6904(c); // 800F645C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800F6460
  if (!crb(c,2)) { goto L_800F6474; } // 800F6464
  c->r[0]=0u+0x00000000u; // 800F6468
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F646C
  goto L_800F6494; // 800F6470
L_800F6474:;
  c->r[0]=0u+0x00000001u; // 800F6474
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6478
  goto L_800F6494; // 800F647C
L_800F6480:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F6480
  cmpu(c,0,c->r[0],0x00000009u); // 800F6484
  if (!crb(c,1)) { goto L_800F6494; } // 800F6488
  c->r[0]=0u+0x00000001u; // 800F648C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6490
L_800F6494:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6494
  c->r[3]=R8(c->r[1]+0x00000008u); // 800F6498
  c->lr=c->r[0]; // 800F649C
  c->r[1]=c->r[1]+0x00000010u; // 800F64A0
  return; // 800F64A4
}

// SCGetProgressiveMode
void f_800F64A8(Ctx* __restrict c) {
  trace_call(0x800F64A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F64A8
  c->r[0]=c->lr; // 800F64AC
  c->r[4]=0u+0x0000000Eu; // 800F64B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F64B4
  c->r[3]=c->r[1]+0x00000008u; // 800F64B8
  c->lr=0x800F64C0u; f_800F5B0C(c); // 800F64BC
  cmps(c,0,(int32_t)c->r[3],0); // 800F64C0
  if (!crb(c,2)) { goto L_800F64D4; } // 800F64C4
  c->r[0]=0u+0x00000000u; // 800F64C8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F64CC
  goto L_800F64E8; // 800F64D0
L_800F64D4:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F64D4
  cmpu(c,0,c->r[0],0x00000001u); // 800F64D8
  if (crb(c,2)) { goto L_800F64E8; } // 800F64DC
  c->r[0]=0u+0x00000000u; // 800F64E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F64E4
L_800F64E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F64E8
  c->r[3]=R8(c->r[1]+0x00000008u); // 800F64EC
  c->lr=c->r[0]; // 800F64F0
  c->r[1]=c->r[1]+0x00000010u; // 800F64F4
  return; // 800F64F8
}

// SCGetScreenSaverMode
void f_800F64FC(Ctx* __restrict c) {
  trace_call(0x800F64FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F64FC
  c->r[0]=c->lr; // 800F6500
  c->r[4]=0u+0x0000000Fu; // 800F6504
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6508
  c->r[3]=c->r[1]+0x00000008u; // 800F650C
  c->lr=0x800F6514u; f_800F5B0C(c); // 800F6510
  cmps(c,0,(int32_t)c->r[3],0); // 800F6514
  if (!crb(c,2)) { goto L_800F6528; } // 800F6518
  c->r[0]=0u+0x00000001u; // 800F651C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6520
  goto L_800F653C; // 800F6524
L_800F6528:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F6528
  cmpu(c,0,c->r[0],0x00000001u); // 800F652C
  if (crb(c,2)) { goto L_800F653C; } // 800F6530
  c->r[0]=0u+0x00000000u; // 800F6534
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6538
L_800F653C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F653C
  c->r[3]=R8(c->r[1]+0x00000008u); // 800F6540
  c->lr=c->r[0]; // 800F6544
  c->r[1]=c->r[1]+0x00000010u; // 800F6548
  return; // 800F654C
}

// SCGetSoundMode
void f_800F6550(Ctx* __restrict c) {
  trace_call(0x800F6550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6550
  c->r[0]=c->lr; // 800F6554
  c->r[4]=0u+0x00000011u; // 800F6558
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F655C
  c->r[3]=c->r[1]+0x00000008u; // 800F6560
  c->lr=0x800F6568u; f_800F5B0C(c); // 800F6564
  cmps(c,0,(int32_t)c->r[3],0); // 800F6568
  if (!crb(c,2)) { goto L_800F657C; } // 800F656C
  c->r[0]=0u+0x00000001u; // 800F6570
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6574
  goto L_800F65A0; // 800F6578
L_800F657C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F657C
  cmps(c,0,(int32_t)c->r[0],0); // 800F6580
  if (crb(c,2)) { goto L_800F65A0; } // 800F6584
  cmpu(c,0,c->r[0],0x00000001u); // 800F6588
  if (crb(c,2)) { goto L_800F65A0; } // 800F658C
  cmpu(c,0,c->r[0],0x00000002u); // 800F6590
  if (crb(c,2)) { goto L_800F65A0; } // 800F6594
  c->r[0]=0u+0x00000001u; // 800F6598
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F659C
L_800F65A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F65A0
  c->r[3]=R8(c->r[1]+0x00000008u); // 800F65A4
  c->lr=c->r[0]; // 800F65A8
  c->r[1]=c->r[1]+0x00000010u; // 800F65AC
  return; // 800F65B0
}

// SCGetCounterBias
void f_800F65B4(Ctx* __restrict c) {
  trace_call(0x800F65B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F65B4
  c->r[0]=c->lr; // 800F65B8
  c->r[4]=0u+0x00000000u; // 800F65BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F65C0
  c->r[3]=c->r[1]+0x00000008u; // 800F65C4
  c->lr=0x800F65CCu; f_800F5CB4(c); // 800F65C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F65CC
  if (!crb(c,2)) { goto L_800F65E0; } // 800F65D0
  c->r[3]=0u+0x0B4A0000u; // 800F65D4
  c->r[0]=c->r[3]+0xFFFFD800u; // 800F65D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F65DC
L_800F65E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F65E0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F65E4
  c->lr=c->r[0]; // 800F65E8
  c->r[1]=c->r[1]+0x00000010u; // 800F65EC
  return; // 800F65F0
}

// SCGetBtDeviceInfoArray
void f_800F65F4(Ctx* __restrict c) {
  trace_call(0x800F65F4u);
  c->r[4]=0u+0x00000461u; // 800F65F4
  c->r[5]=0u+0x0000001Cu; // 800F65F8
  f_800F57F0(c); return; // 800F65FC
}

// SCSetBtDeviceInfoArray
void f_800F6600(Ctx* __restrict c) {
  trace_call(0x800F6600u);
  c->r[4]=0u+0x00000461u; // 800F6600
  c->r[5]=0u+0x0000001Cu; // 800F6604
  f_800F58D0(c); return; // 800F6608
}

// SCGetBtCmpDevInfoArray
void f_800F660C(Ctx* __restrict c) {
  trace_call(0x800F660Cu);
  c->r[4]=0u+0x00000205u; // 800F660C
  c->r[5]=0u+0x0000001Du; // 800F6610
  f_800F57F0(c); return; // 800F6614
}

// SCSetBtCmpDevInfoArray
void f_800F6618(Ctx* __restrict c) {
  trace_call(0x800F6618u);
  c->r[4]=0u+0x00000205u; // 800F6618
  c->r[5]=0u+0x0000001Du; // 800F661C
  f_800F58D0(c); return; // 800F6620
}

// SCGetBtDpdSensibility
void f_800F6624(Ctx* __restrict c) {
  trace_call(0x800F6624u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6624
  c->r[0]=c->lr; // 800F6628
  c->r[4]=0u+0x0000001Eu; // 800F662C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6630
  c->r[3]=c->r[1]+0x00000008u; // 800F6634
  c->lr=0x800F663Cu; f_800F5CB4(c); // 800F6638
  cmps(c,0,(int32_t)c->r[3],0); // 800F663C
  if (!crb(c,2)) { goto L_800F6650; } // 800F6640
  c->r[0]=0u+0x00000002u; // 800F6644
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F6648
  goto L_800F6678; // 800F664C
L_800F6650:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800F6650
  cmpu(c,0,c->r[0],0x00000001u); // 800F6654
  if (!crb(c,0)) { goto L_800F6668; } // 800F6658
  c->r[0]=0u+0x00000001u; // 800F665C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F6660
  goto L_800F6678; // 800F6664
L_800F6668:;
  cmpu(c,0,c->r[0],0x00000005u); // 800F6668
  if (!crb(c,1)) { goto L_800F6678; } // 800F666C
  c->r[0]=0u+0x00000005u; // 800F6670
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F6674
L_800F6678:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6678
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F667C
  c->lr=c->r[0]; // 800F6680
  c->r[1]=c->r[1]+0x00000010u; // 800F6684
  return; // 800F6688
}

// SCGetWpadMotorMode
void f_800F668C(Ctx* __restrict c) {
  trace_call(0x800F668Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F668C
  c->r[0]=c->lr; // 800F6690
  c->r[4]=0u+0x00000020u; // 800F6694
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6698
  c->r[3]=c->r[1]+0x00000008u; // 800F669C
  c->lr=0x800F66A4u; f_800F5B0C(c); // 800F66A0
  cmps(c,0,(int32_t)c->r[3],0); // 800F66A4
  if (!crb(c,2)) { goto L_800F66B8; } // 800F66A8
  c->r[0]=0u+0x00000001u; // 800F66AC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F66B0
  goto L_800F66CC; // 800F66B4
L_800F66B8:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F66B8
  cmpu(c,0,c->r[0],0x00000001u); // 800F66BC
  if (crb(c,2)) { goto L_800F66CC; } // 800F66C0
  c->r[0]=0u+0x00000000u; // 800F66C4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F66C8
L_800F66CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F66CC
  c->r[3]=R8(c->r[1]+0x00000008u); // 800F66D0
  c->lr=c->r[0]; // 800F66D4
  c->r[1]=c->r[1]+0x00000010u; // 800F66D8
  return; // 800F66DC
}

// SCSetWpadMotorMode
void f_800F66E0(Ctx* __restrict c) {
  trace_call(0x800F66E0u);
  c->r[4]=0u+0x00000020u; // 800F66E0
  f_800F5D88(c); return; // 800F66E4
}

// SCGetWpadSensorBarPosition
void f_800F66E8(Ctx* __restrict c) {
  trace_call(0x800F66E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F66E8
  c->r[0]=c->lr; // 800F66EC
  c->r[4]=0u+0x00000021u; // 800F66F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F66F4
  c->r[3]=c->r[1]+0x00000008u; // 800F66F8
  c->lr=0x800F6700u; f_800F5B0C(c); // 800F66FC
  cmps(c,0,(int32_t)c->r[3],0); // 800F6700
  if (!crb(c,2)) { goto L_800F6714; } // 800F6704
  c->r[0]=0u+0x00000000u; // 800F6708
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F670C
  goto L_800F6728; // 800F6710
L_800F6714:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F6714
  cmpu(c,0,c->r[0],0x00000001u); // 800F6718
  if (crb(c,2)) { goto L_800F6728; } // 800F671C
  c->r[0]=0u+0x00000000u; // 800F6720
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6724
L_800F6728:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6728
  c->r[3]=R8(c->r[1]+0x00000008u); // 800F672C
  c->lr=c->r[0]; // 800F6730
  c->r[1]=c->r[1]+0x00000010u; // 800F6734
  return; // 800F6738
}

// SCGetWpadSpeakerVolume
void f_800F673C(Ctx* __restrict c) {
  trace_call(0x800F673Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F673C
  c->r[0]=c->lr; // 800F6740
  c->r[4]=0u+0x0000001Fu; // 800F6744
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6748
  c->r[3]=c->r[1]+0x00000008u; // 800F674C
  c->lr=0x800F6754u; f_800F5B0C(c); // 800F6750
  cmps(c,0,(int32_t)c->r[3],0); // 800F6754
  if (!crb(c,2)) { goto L_800F6768; } // 800F6758
  c->r[0]=0u+0x00000059u; // 800F675C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6760
  goto L_800F677C; // 800F6764
L_800F6768:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F6768
  cmpu(c,0,c->r[0],0x0000007Fu); // 800F676C
  if (!crb(c,1)) { goto L_800F677C; } // 800F6770
  c->r[0]=0u+0x0000007Fu; // 800F6774
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F6778
L_800F677C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F677C
  c->r[3]=R8(c->r[1]+0x00000008u); // 800F6780
  c->lr=c->r[0]; // 800F6784
  c->r[1]=c->r[1]+0x00000010u; // 800F6788
  return; // 800F678C
}

// SCSetWpadSpeakerVolume
void f_800F6790(Ctx* __restrict c) {
  trace_call(0x800F6790u);
  c->r[4]=0u+0x0000001Fu; // 800F6790
  f_800F5D88(c); return; // 800F6794
}

// __SCF1
void f_800F6798(Ctx* __restrict c) {
  trace_call(0x800F6798u);
  c->r[6]=0u+0x73B60000u; // 800F6798
  c->r[0]=0u+0x00000080u; // 800F679C
  c->r[11]=c->r[6]+0xFFFFDBFAu; // 800F67A0
  c->r[9]=0u+0x00000000u; // 800F67A4
  c->r[12]=0u+0x00000000u; // 800F67A8
  c->r[6]=0u+0x00000000u; // 800F67AC
  c->r[10]=0u+0x00000000u; // 800F67B0
  c->ctr=c->r[0]; // 800F67B4
L_800F67B8:;
  c->r[8]=c->r[10]+0x80000000u; // 800F67B8
  c->r[8]=R8(c->r[8]+0x00003800u); // 800F67BC
  cmps(c,0,(int32_t)c->r[8],0); // 800F67C0
  if (crb(c,2)) { goto L_800F680C; } // 800F67C4
  c->r[7]=R8(c->r[3]+c->r[12]); // 800F67C8
  c->r[0]=c->r[8]^c->r[11]; // 800F67CC
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 800F67D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 800F67D4
  if (!crb(c,2)) { goto L_800F67EC; } // 800F67D8
  cmpu(c,0,c->r[8],0x0000003Du); // 800F67DC
  if (!crb(c,2)) { goto L_800F67EC; } // 800F67E0
  c->r[9]=0u+0x00000001u; // 800F67E4
  goto L_800F6884; // 800F67E8
L_800F67EC:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800F67EC
  c->r[0]=c->r[12]+0x00000001u; // 800F67F0
  c->r[7]=c->r[8]^c->r[7]; // 800F67F4
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 800F67F8
  c->r[7]=cntlz(c->r[7]); // 800F67FC
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 800F6800
  c->r[7]=0u-c->r[7]; // 800F6804
  c->r[12]=c->r[0]&c->r[7]; // 800F6808
L_800F680C:;
  c->r[10]=c->r[10]+0x00000001u; // 800F680C
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 800F6810
  c->r[8]=c->r[10]+0x80000000u; // 800F6814
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 800F6818
  c->r[8]=R8(c->r[8]+0x00003800u); // 800F681C
  c->r[11]=c->r[7]|c->r[0]; // 800F6820
  cmps(c,0,(int32_t)c->r[8],0); // 800F6824
  if (crb(c,2)) { goto L_800F6870; } // 800F6828
  c->r[7]=R8(c->r[3]+c->r[12]); // 800F682C
  c->r[0]=c->r[8]^c->r[11]; // 800F6830
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 800F6834
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 800F6838
  if (!crb(c,2)) { goto L_800F6850; } // 800F683C
  cmpu(c,0,c->r[8],0x0000003Du); // 800F6840
  if (!crb(c,2)) { goto L_800F6850; } // 800F6844
  c->r[9]=0u+0x00000001u; // 800F6848
  goto L_800F6884; // 800F684C
L_800F6850:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800F6850
  c->r[0]=c->r[12]+0x00000001u; // 800F6854
  c->r[7]=c->r[8]^c->r[7]; // 800F6858
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 800F685C
  c->r[7]=cntlz(c->r[7]); // 800F6860
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 800F6864
  c->r[7]=0u-c->r[7]; // 800F6868
  c->r[12]=c->r[0]&c->r[7]; // 800F686C
L_800F6870:;
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 800F6870
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 800F6874
  c->r[11]=c->r[7]|c->r[0]; // 800F6878
  c->r[10]=c->r[10]+0x00000001u; // 800F687C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F67B8; } // 800F6880
L_800F6884:;
  cmps(c,0,(int32_t)c->r[9],0); // 800F6884
  if (crb(c,2)) { goto L_800F68FC; } // 800F6888
  c->r[10]=c->r[10]+0x00000001u; // 800F688C
  goto L_800F68EC; // 800F6890
L_800F6894:;
  c->r[3]=c->r[10]+0x80000000u; // 800F6894
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 800F6898
  c->r[3]=R8(c->r[3]+0x00003800u); // 800F689C
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 800F68A0
  c->r[11]=c->r[7]|c->r[0]; // 800F68A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F68A8
  if (crb(c,2)) { goto L_800F68CC; } // 800F68AC
  c->r[0]=c->r[3]^c->r[11]; // 800F68B0
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800F68B4
  cmpu(c,0,c->r[3],0x0000000Du); // 800F68B8
  if (crb(c,2)) { goto L_800F68C8; } // 800F68BC
  cmpu(c,0,c->r[3],0x0000000Au); // 800F68C0
  if (!crb(c,2)) { goto L_800F68CC; } // 800F68C4
L_800F68C8:;
  c->r[3]=0u+0x00000000u; // 800F68C8
L_800F68CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F68CC
  W8(c->r[4]+0x00000000u,c->r[3]); // 800F68D0
  c->r[6]=c->r[6]+0x00000001u; // 800F68D4
  c->r[4]=c->r[4]+0x00000001u; // 800F68D8
  if (!crb(c,2)) { goto L_800F68E8; } // 800F68DC
  c->r[3]=0u+0x00000001u; // 800F68E0
  return; // 800F68E4
L_800F68E8:;
  c->r[10]=c->r[10]+0x00000001u; // 800F68E8
L_800F68EC:;
  cmpu(c,0,c->r[10],0x00000100u); // 800F68EC
  if (!crb(c,0)) { goto L_800F68FC; } // 800F68F0
  cmpu(c,0,c->r[6],c->r[5]); // 800F68F4
  if (crb(c,0)) { IRQCHK(c); goto L_800F6894; } // 800F68F8
L_800F68FC:;
  c->r[3]=0u+0x00000000u; // 800F68FC
  return; // 800F6900
}

// SCGetProductArea
void f_800F6904(Ctx* __restrict c) {
  trace_call(0x800F6904u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6904
  c->r[0]=c->lr; // 800F6908
  c->r[3]=c->r[13]+0xFFFF8410u; // 800F690C
  c->r[5]=0u+0x00000004u; // 800F6910
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F6914
  c->r[4]=c->r[1]+0x00000008u; // 800F6918
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F691C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F6920
  c->r[30]=0u+0x80280000u; // 800F6924
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800F6928
  c->lr=0x800F6930u; f_800F6798(c); // 800F692C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6930
  if (crb(c,2)) { goto L_800F696C; } // 800F6934
  goto L_800F695C; // 800F6938
L_800F693C:;
  c->r[3]=c->r[30]+0x00000001u; // 800F693C
  c->r[4]=c->r[1]+0x00000008u; // 800F6940
  c->lr=0x800F6948u; f_800DBB24(c); // 800F6944
  cmps(c,0,(int32_t)c->r[3],0); // 800F6948
  if (!crb(c,2)) { goto L_800F6958; } // 800F694C
  c->r[3]=c->r[31]|c->r[31]; // 800F6950
  goto L_800F6970; // 800F6954
L_800F6958:;
  c->r[30]=c->r[30]+0x00000005u; // 800F6958
L_800F695C:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 800F695C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 800F6960
  cmps(c,0,(int32_t)c->r[0],-1); // 800F6964
  if (!crb(c,2)) { IRQCHK(c); goto L_800F693C; } // 800F6968
L_800F696C:;
  c->r[3]=0u+0xFFFFFFFFu; // 800F696C
L_800F6970:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F6970
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F6974
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F6978
  c->lr=c->r[0]; // 800F697C
  c->r[1]=c->r[1]+0x00000020u; // 800F6980
  return; // 800F6984
}

// SCGetProductGameRegion
void f_800F6988(Ctx* __restrict c) {
  trace_call(0x800F6988u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6988
  c->r[0]=c->lr; // 800F698C
  c->r[3]=c->r[13]+0xFFFF8418u; // 800F6990
  c->r[5]=0u+0x00000003u; // 800F6994
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F6998
  c->r[4]=c->r[1]+0x00000008u; // 800F699C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F69A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F69A4
  c->r[30]=0u+0x80280000u; // 800F69A8
  c->r[30]=c->r[30]+0xFFFFB808u; // 800F69AC
  c->lr=0x800F69B4u; f_800F6798(c); // 800F69B0
  cmps(c,0,(int32_t)c->r[3],0); // 800F69B4
  if (crb(c,2)) { goto L_800F69F0; } // 800F69B8
  goto L_800F69E0; // 800F69BC
L_800F69C0:;
  c->r[3]=c->r[30]+0x00000001u; // 800F69C0
  c->r[4]=c->r[1]+0x00000008u; // 800F69C4
  c->lr=0x800F69CCu; f_800DBB24(c); // 800F69C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F69CC
  if (!crb(c,2)) { goto L_800F69DC; } // 800F69D0
  c->r[3]=c->r[31]|c->r[31]; // 800F69D4
  goto L_800F69F4; // 800F69D8
L_800F69DC:;
  c->r[30]=c->r[30]+0x00000004u; // 800F69DC
L_800F69E0:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 800F69E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 800F69E4
  cmps(c,0,(int32_t)c->r[0],-1); // 800F69E8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F69C0; } // 800F69EC
L_800F69F0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800F69F0
L_800F69F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F69F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F69F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F69FC
  c->lr=c->r[0]; // 800F6A00
  c->r[1]=c->r[1]+0x00000020u; // 800F6A04
  return; // 800F6A08
}

// WENCGetEncodeData
void f_800F6A0C(Ctx* __restrict c) {
  trace_call(0x800F6A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6A0C
  c->r[0]=c->lr; // 800F6A10
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F6A14
  c->r[11]=c->r[1]+0x00000090u; // 800F6A18
  c->lr=0x800F6A20u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F6A1C
  c->r[10]=0u+0x80260000u; // 800F6A20
  {uint32_t ea=c->r[10]+0xFFFFBBF8u; c->r[9]=R32(ea); c->r[10]=ea;} // 800F6A24
  c->r[11]=c->r[6]+0x00000001u; // 800F6A28
  c->r[25]=c->r[4]|c->r[4]; // 800F6A2C
  c->r[4]=rotl(c->r[11],1)&0x00000001u; // 800F6A30
  c->r[8]=R32(c->r[10]+0x00000004u); // 800F6A34
  c->r[31]=c->r[7]|c->r[7]; // 800F6A38
  c->r[0]=R32(c->r[10]+0x00000008u); // 800F6A3C
  c->r[4]=c->r[4]+c->r[11]; // 800F6A40
  c->r[18]=R32(c->r[10]+0x0000000Cu); // 800F6A44
  c->r[27]=R32(c->r[10]+0x00000010u); // 800F6A48
  c->r[30]=c->r[6]|c->r[6]; // 800F6A4C
  c->r[26]=R32(c->r[10]+0x00000014u); // 800F6A50
  c->r[28]=c->r[3]|c->r[3]; // 800F6A54
  c->r[24]=R32(c->r[10]+0x00000018u); // 800F6A58
  c->r[29]=c->r[5]|c->r[5]; // 800F6A5C
  c->r[23]=R32(c->r[10]+0x0000001Cu); // 800F6A60
  c->r[5]=sraw(c,c->r[4],1); // 800F6A64
  c->r[22]=R32(c->r[10]+0x00000020u); // 800F6A68
  c->r[3]=c->r[31]|c->r[31]; // 800F6A6C
  c->r[21]=R32(c->r[10]+0x00000024u); // 800F6A70
  c->r[4]=0u+0x00000000u; // 800F6A74
  c->r[20]=R32(c->r[10]+0x00000028u); // 800F6A78
  c->r[19]=R32(c->r[10]+0x0000002Cu); // 800F6A7C
  c->r[12]=R32(c->r[10]+0x00000030u); // 800F6A80
  c->r[11]=R32(c->r[10]+0x00000034u); // 800F6A84
  c->r[7]=R32(c->r[10]+0x00000038u); // 800F6A88
  c->r[6]=R32(c->r[10]+0x0000003Cu); // 800F6A8C
  W32(c->r[1]+0x00000008u,c->r[9]); // 800F6A90
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 800F6A94
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F6A98
  W32(c->r[1]+0x00000014u,c->r[18]); // 800F6A9C
  W32(c->r[1]+0x00000018u,c->r[27]); // 800F6AA0
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 800F6AA4
  W32(c->r[1]+0x00000020u,c->r[24]); // 800F6AA8
  W32(c->r[1]+0x00000024u,c->r[23]); // 800F6AAC
  W32(c->r[1]+0x00000028u,c->r[22]); // 800F6AB0
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 800F6AB4
  W32(c->r[1]+0x00000030u,c->r[20]); // 800F6AB8
  W32(c->r[1]+0x00000034u,c->r[19]); // 800F6ABC
  W32(c->r[1]+0x00000038u,c->r[12]); // 800F6AC0
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 800F6AC4
  W32(c->r[1]+0x00000040u,c->r[7]); // 800F6AC8
  W32(c->r[1]+0x00000044u,c->r[6]); // 800F6ACC
  c->lr=0x800F6AD4u; f_80004688(c); // 800F6AD0
  c->r[0]=rotl(c->r[25],0)&0x00000001u; cr0(c,c->r[0]); // 800F6AD4
  if (!crb(c,2)) { goto L_800F6AF8; } // 800F6AD8
  c->r[11]=0u+0x00000000u; // 800F6ADC
  c->r[12]=0u+0x0000007Fu; // 800F6AE0
  c->r[5]=0u+0x00000000u; // 800F6AE4
  c->r[27]=0u+0x00000000u; // 800F6AE8
  c->r[26]=0u+0x00000000u; // 800F6AEC
  c->r[25]=0u+0x00000000u; // 800F6AF0
  goto L_800F6B10; // 800F6AF4
L_800F6AF8:;
  c->r[11]=R32(c->r[28]+0x00000000u); // 800F6AF8
  c->r[12]=R32(c->r[28]+0x00000004u); // 800F6AFC
  c->r[5]=R32(c->r[28]+0x00000008u); // 800F6B00
  c->r[27]=R32(c->r[28]+0x0000000Cu); // 800F6B04
  c->r[26]=R32(c->r[28]+0x00000010u); // 800F6B08
  c->r[25]=R32(c->r[28]+0x00000014u); // 800F6B0C
L_800F6B10:;
  c->r[3]=0u+0x00010000u; // 800F6B10
  c->r[24]=c->r[1]+0x00000008u; // 800F6B14
  {uint32_t ea=c->r[2]+0xFFFF9700u; c->f[2]=RF64(ea);} // 800F6B18
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800F6B1C
  c->r[6]=0u+0x00000000u; // 800F6B20
  c->r[0]=0u+0xFFFF0000u; // 800F6B24
  c->r[23]=0u+0x43300000u; // 800F6B28
  c->ctr=c->r[30]; // 800F6B2C
  cmps(c,0,(int32_t)c->r[30],0); // 800F6B30
  if (!crb(c,1)) { goto L_800F6CB0; } // 800F6B34
L_800F6B38:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800F6B38
  c->r[10]=0u+0x00000000u; // 800F6B3C
  c->r[9]=0u+0x00000000u; // 800F6B40
  c->r[8]=0u+0x00000000u; // 800F6B44
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[11]); // 800F6B48
  c->r[7]=0u+0x00000000u; // 800F6B4C
  c->r[29]=c->r[29]+0x00000002u; // 800F6B50
  if (!crb(c,0)) { goto L_800F6B5C; } // 800F6B54
  c->r[7]=0u+0x00000001u; // 800F6B58
L_800F6B5C:;
  c->r[19]=c->r[5]-c->r[11]; // 800F6B5C
  c->r[5]=sraw(c,c->r[19],31); // 800F6B60
  c->r[27]=c->r[5]^c->r[19]; // 800F6B64
  c->r[27]=c->r[27]-c->r[5]; // 800F6B68
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[12]); // 800F6B6C
  if (crb(c,0)) { goto L_800F6B7C; } // 800F6B70
  c->r[8]=0u+0x00000001u; // 800F6B74
  c->r[27]=c->r[27]-c->r[12]; // 800F6B78
L_800F6B7C:;
  c->r[5]=rotl(c->r[12],1)&0x00000001u; // 800F6B7C
  c->r[5]=c->r[5]+c->r[12]; // 800F6B80
  c->r[26]=sraw(c,c->r[5],1); // 800F6B84
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[26]); // 800F6B88
  if (crb(c,0)) { goto L_800F6B98; } // 800F6B8C
  c->r[9]=0u+0x00000001u; // 800F6B90
  c->r[27]=c->r[27]-c->r[26]; // 800F6B94
L_800F6B98:;
  c->r[5]=rotl(c->r[26],1)&0x00000001u; // 800F6B98
  c->r[5]=c->r[5]+c->r[26]; // 800F6B9C
  c->r[25]=sraw(c,c->r[5],1); // 800F6BA0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[25]); // 800F6BA4
  if (crb(c,0)) { goto L_800F6BB4; } // 800F6BA8
  c->r[10]=0u+0x00000001u; // 800F6BAC
  c->r[27]=c->r[27]-c->r[25]; // 800F6BB0
L_800F6BB4:;
  c->r[20]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[10]); // 800F6BB4
  c->r[5]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800F6BB8
  c->r[19]=rotl(c->r[25],1)&0x00000001u; // 800F6BBC
  c->r[5]=addc(c,~c->r[5],0x00000001u,1); // 800F6BC0
  c->r[19]=c->r[19]+c->r[25]; // 800F6BC4
  c->r[21]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 800F6BC8
  c->r[19]=sraw(c,c->r[19],1); // 800F6BCC
  c->r[22]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[9]); // 800F6BD0
  c->r[21]=c->r[20]+c->r[21]; // 800F6BD4
  c->r[22]=c->r[19]+c->r[22]; // 800F6BD8
  c->r[22]=c->r[21]+c->r[22]; // 800F6BDC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[22]); // 800F6BE0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 800F6BE4
  if (!crb(c,1)) { goto L_800F6BF0; } // 800F6BE8
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 800F6BEC
L_800F6BF0:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800F6BF0
  if (!crb(c,0)) { goto L_800F6BFC; } // 800F6BF4
  c->r[5]=0u+0xFFFF0000u; // 800F6BF8
L_800F6BFC:;
  c->r[11]=c->r[11]+c->r[5]; // 800F6BFC
  cmps(c,0,(int32_t)c->r[11],32767); // 800F6C00
  if (!crb(c,1)) { goto L_800F6C0C; } // 800F6C04
  c->r[11]=0u+0x00007FFFu; // 800F6C08
L_800F6C0C:;
  cmps(c,0,(int32_t)c->r[11],-32768); // 800F6C0C
  if (!crb(c,0)) { goto L_800F6C18; } // 800F6C10
  c->r[11]=0u+0xFFFF8000u; // 800F6C14
L_800F6C18:;
  c->r[12]=c->r[12]^0x80000000u; // 800F6C18
  c->r[18]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800F6C1C
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 800F6C20
  c->r[22]=rotl(c->r[6],0)&0x00000001u; // 800F6C24
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800F6C28
  c->r[8]=c->r[10]+c->r[18]; // 800F6C2C
  W32(c->r[1]+0x00000048u,c->r[23]); // 800F6C30
  c->r[8]=c->r[9]+c->r[8]; // 800F6C34
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800F6C38
  c->r[12]=rotl(c->r[6],1)&0x00000001u; // 800F6C3C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 800F6C40
  c->r[9]=c->r[9]+c->r[18]; // 800F6C44
  {uint32_t ea=c->r[24]+c->r[8]; c->f[0]=RF64(ea);} // 800F6C48
  c->r[8]=c->r[12]+c->r[6]; // 800F6C4C
  c->f[1]=c->f[1]-c->f[2]; // 800F6C50
  c->r[12]=sraw(c,c->r[8],1); // 800F6C54
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800F6C58
  c->r[7]=c->r[10]+c->r[9]; // 800F6C5C
  c->r[7]=c->r[8]+c->r[7]; // 800F6C60
  c->r[22]=c->r[22]+0xFFFFFFFFu; // 800F6C64
  c->f[0]=c->f[1]*c->f[0]; // 800F6C68
  c->r[9]=rotl(c->r[22],0)&0x00000004u; // 800F6C6C
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 800F6C70
  c->r[8]=R8(c->r[31]+c->r[12]); // 800F6C74
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[7]<<((c->r[9])&31)); // 800F6C78
  c->r[7]=c->r[8]|c->r[7]; // 800F6C7C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800F6C80
  W8(c->r[31]+c->r[12],c->r[7]); // 800F6C84
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800F6C88
  c->r[12]=R32(c->r[1]+0x00000054u); // 800F6C8C
  cmps(c,0,(int32_t)c->r[12],127); // 800F6C90
  if (crb(c,1)) { goto L_800F6C9C; } // 800F6C94
  c->r[12]=0u+0x0000007Fu; // 800F6C98
L_800F6C9C:;
  cmps(c,0,(int32_t)c->r[12],24576); // 800F6C9C
  if (crb(c,0)) { goto L_800F6CA8; } // 800F6CA0
  c->r[12]=0u+0x00006000u; // 800F6CA4
L_800F6CA8:;
  c->r[6]=c->r[6]+0x00000001u; // 800F6CA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F6B38; } // 800F6CAC
L_800F6CB0:;
  W32(c->r[28]+0x00000000u,c->r[11]); // 800F6CB0
  c->r[11]=c->r[1]+0x00000090u; // 800F6CB4
  c->r[3]=c->r[30]|c->r[30]; // 800F6CB8
  W32(c->r[28]+0x00000004u,c->r[12]); // 800F6CBC
  W32(c->r[28]+0x00000008u,c->r[5]); // 800F6CC0
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 800F6CC4
  W32(c->r[28]+0x00000010u,c->r[26]); // 800F6CC8
  W32(c->r[28]+0x00000014u,c->r[25]); // 800F6CCC
  c->lr=0x800F6CD4u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F6CD0
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F6CD4
  c->lr=c->r[0]; // 800F6CD8
  c->r[1]=c->r[1]+0x00000090u; // 800F6CDC
  return; // 800F6CE0
}

// ARCInitHandle
void f_800F6CE4(Ctx* __restrict c) {
  trace_call(0x800F6CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6CE4
  c->r[0]=c->lr; // 800F6CE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6CEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6CF0
  c->r[31]=c->r[4]|c->r[4]; // 800F6CF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6CF8
  c->r[30]=c->r[3]|c->r[3]; // 800F6CFC
  c->r[5]=R32(c->r[3]+0x00000000u); // 800F6D00
  c->r[0]=c->r[5]+0xAA560000u; // 800F6D04
  cmpu(c,0,c->r[0],0x0000382Du); // 800F6D08
  if (crb(c,2)) { goto L_800F6D28; } // 800F6D0C
  c->r[5]=0u+0x80280000u; // 800F6D10
  c->r[3]=c->r[13]+0xFFFF8420u; // 800F6D14
  c->r[5]=c->r[5]+0xFFFFB820u; // 800F6D18
  c->r[4]=0u+0x0000004Au; // 800F6D1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F6D20
  c->lr=0x800F6D28u; f_800ACC34(c); // 800F6D24
L_800F6D28:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 800F6D28
  c->r[0]=0u+0x00000000u; // 800F6D2C
  c->r[3]=0u+0x00000001u; // 800F6D30
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F6D34
  c->r[6]=c->r[30]+c->r[4]; // 800F6D38
  W32(c->r[31]+0x00000004u,c->r[6]); // 800F6D3C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800F6D40
  c->r[4]=c->r[30]+c->r[4]; // 800F6D44
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F6D48
  c->r[5]=R32(c->r[6]+0x00000008u); // 800F6D4C
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 800F6D50
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800F6D54
  c->r[4]=c->r[6]+c->r[4]; // 800F6D58
  W32(c->r[31]+0x00000010u,c->r[4]); // 800F6D5C
  c->r[4]=R32(c->r[30]+0x00000008u); // 800F6D60
  W32(c->r[31]+0x00000014u,c->r[4]); // 800F6D64
  W32(c->r[31]+0x00000018u,c->r[0]); // 800F6D68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6D6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6D70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6D74
  c->lr=c->r[0]; // 800F6D78
  c->r[1]=c->r[1]+0x00000010u; // 800F6D7C
  return; // 800F6D80
}

// ARCOpen
void f_800F6D84(Ctx* __restrict c) {
  trace_call(0x800F6D84u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6D84
  c->r[0]=c->lr; // 800F6D88
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800F6D8C
  c->r[11]=c->r[1]+0x000000A0u; // 800F6D90
  c->lr=0x800F6D98u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F6D94
  c->r[28]=R32(c->r[3]+0x00000004u); // 800F6D98
  c->r[26]=c->r[3]|c->r[3]; // 800F6D9C
  c->r[27]=c->r[4]|c->r[4]; // 800F6DA0
  c->r[29]=c->r[5]|c->r[5]; // 800F6DA4
  c->lr=0x800F6DACu; f_800F7078(c); // 800F6DA8
  cmps(c,0,(int32_t)c->r[3],0); // 800F6DAC
  if (!crb(c,0)) { goto L_800F6FD8; } // 800F6DB0
  c->r[29]=R32(c->r[26]+0x00000018u); // 800F6DB4
  c->r[28]=R32(c->r[26]+0x00000004u); // 800F6DB8
  cmps(c,0,(int32_t)c->r[29],0); // 800F6DBC
  if (!crb(c,2)) { goto L_800F6DCC; } // 800F6DC0
  c->r[4]=0u+0x00000000u; // 800F6DC4
  goto L_800F6F60; // 800F6DC8
L_800F6DCC:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 800F6DCC
  c->r[7]=R32(c->r[26]+0x00000010u); // 800F6DD0
  c->r[3]=c->r[28]+c->r[0]; // 800F6DD4
  c->r[0]=R32(c->r[28]+c->r[0]); // 800F6DD8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800F6DDC
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800F6DE0
  cmps(c,0,(int32_t)c->r[3],0); // 800F6DE4
  c->r[30]=c->r[7]+c->r[0]; // 800F6DE8
  if (!crb(c,2)) { goto L_800F6DF8; } // 800F6DEC
  c->r[4]=0u+0x00000000u; // 800F6DF0
  goto L_800F6F04; // 800F6DF4
L_800F6DF8:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800F6DF8
  c->r[3]=c->r[28]+c->r[0]; // 800F6DFC
  c->r[0]=R32(c->r[28]+c->r[0]); // 800F6E00
  c->r[3]=R32(c->r[3]+0x00000004u); // 800F6E04
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800F6E08
  cmps(c,0,(int32_t)c->r[3],0); // 800F6E0C
  c->r[31]=c->r[7]+c->r[0]; // 800F6E10
  if (!crb(c,2)) { goto L_800F6E20; } // 800F6E14
  c->r[4]=0u+0x00000000u; // 800F6E18
  goto L_800F6EA8; // 800F6E1C
L_800F6E20:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800F6E20
  c->r[3]=c->r[26]|c->r[26]; // 800F6E24
  c->r[5]=c->r[1]+0x00000008u; // 800F6E28
  c->r[6]=0u+0x00000080u; // 800F6E2C
  c->r[0]=R32(c->r[28]+c->r[4]); // 800F6E30
  c->r[4]=c->r[28]+c->r[4]; // 800F6E34
  c->r[4]=R32(c->r[4]+0x00000004u); // 800F6E38
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800F6E3C
  c->r[26]=c->r[7]+c->r[0]; // 800F6E40
  c->lr=0x800F6E48u; f_800F72DC(c); // 800F6E44
  cmpu(c,0,c->r[3],0x00000080u); // 800F6E48
  c->r[4]=c->r[3]|c->r[3]; // 800F6E4C
  if (!crb(c,2)) { goto L_800F6E58; } // 800F6E50
  goto L_800F6EA8; // 800F6E54
L_800F6E58:;
  c->r[4]=c->r[3]+0x00000001u; // 800F6E58
  c->r[5]=c->r[1]+0x00000008u; // 800F6E5C
  c->r[0]=0u+0x0000002Fu; // 800F6E60
  W8(c->r[5]+c->r[3],c->r[0]); // 800F6E64
  c->r[6]=addc(c,~c->r[4],0x00000080u,1); // 800F6E68
  c->r[3]=c->r[6]|c->r[6]; // 800F6E6C
  c->r[5]=c->r[5]+c->r[4]; // 800F6E70
  goto L_800F6E8C; // 800F6E74
L_800F6E78:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 800F6E78
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800F6E7C
  c->r[26]=c->r[26]+0x00000001u; // 800F6E80
  W8(c->r[5]+0x00000000u,c->r[0]); // 800F6E84
  c->r[5]=c->r[5]+0x00000001u; // 800F6E88
L_800F6E8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F6E8C
  if (crb(c,2)) { goto L_800F6EA0; } // 800F6E90
  c->r[0]=R8(c->r[26]+0x00000000u); // 800F6E94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F6E98
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6E78; } // 800F6E9C
L_800F6EA0:;
  c->r[0]=c->r[6]-c->r[3]; // 800F6EA0
  c->r[4]=c->r[4]+c->r[0]; // 800F6EA4
L_800F6EA8:;
  cmpu(c,0,c->r[4],0x00000080u); // 800F6EA8
  if (!crb(c,2)) { goto L_800F6EB4; } // 800F6EAC
  goto L_800F6F04; // 800F6EB0
L_800F6EB4:;
  c->r[5]=c->r[4]+0x00000001u; // 800F6EB4
  c->r[3]=c->r[1]+0x00000008u; // 800F6EB8
  c->r[0]=0u+0x0000002Fu; // 800F6EBC
  W8(c->r[3]+c->r[4],c->r[0]); // 800F6EC0
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 800F6EC4
  c->r[4]=c->r[6]|c->r[6]; // 800F6EC8
  c->r[3]=c->r[3]+c->r[5]; // 800F6ECC
  goto L_800F6EE8; // 800F6ED0
L_800F6ED4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 800F6ED4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F6ED8
  c->r[31]=c->r[31]+0x00000001u; // 800F6EDC
  W8(c->r[3]+0x00000000u,c->r[0]); // 800F6EE0
  c->r[3]=c->r[3]+0x00000001u; // 800F6EE4
L_800F6EE8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F6EE8
  if (crb(c,2)) { goto L_800F6EFC; } // 800F6EEC
  c->r[0]=R8(c->r[31]+0x00000000u); // 800F6EF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F6EF4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6ED4; } // 800F6EF8
L_800F6EFC:;
  c->r[0]=c->r[6]-c->r[4]; // 800F6EFC
  c->r[4]=c->r[5]+c->r[0]; // 800F6F00
L_800F6F04:;
  cmpu(c,0,c->r[4],0x00000080u); // 800F6F04
  if (!crb(c,2)) { goto L_800F6F10; } // 800F6F08
  goto L_800F6F60; // 800F6F0C
L_800F6F10:;
  c->r[5]=c->r[4]+0x00000001u; // 800F6F10
  c->r[3]=c->r[1]+0x00000008u; // 800F6F14
  c->r[0]=0u+0x0000002Fu; // 800F6F18
  W8(c->r[3]+c->r[4],c->r[0]); // 800F6F1C
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 800F6F20
  c->r[4]=c->r[6]|c->r[6]; // 800F6F24
  c->r[3]=c->r[3]+c->r[5]; // 800F6F28
  goto L_800F6F44; // 800F6F2C
L_800F6F30:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 800F6F30
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F6F34
  c->r[30]=c->r[30]+0x00000001u; // 800F6F38
  W8(c->r[3]+0x00000000u,c->r[0]); // 800F6F3C
  c->r[3]=c->r[3]+0x00000001u; // 800F6F40
L_800F6F44:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F6F44
  if (crb(c,2)) { goto L_800F6F58; } // 800F6F48
  c->r[0]=R8(c->r[30]+0x00000000u); // 800F6F4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F6F50
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6F30; } // 800F6F54
L_800F6F58:;
  c->r[0]=c->r[6]-c->r[4]; // 800F6F58
  c->r[4]=c->r[5]+c->r[0]; // 800F6F5C
L_800F6F60:;
  cmpu(c,0,c->r[4],0x00000080u); // 800F6F60
  if (!crb(c,2)) { goto L_800F6F74; } // 800F6F64
  c->r[0]=0u+0x00000000u; // 800F6F68
  W8(c->r[1]+0x00000087u,c->r[0]); // 800F6F6C
  goto L_800F6FB8; // 800F6F70
L_800F6F74:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 800F6F74
  c->r[0]=R32(c->r[28]+c->r[0]); // 800F6F78
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 800F6F7C
  if (crb(c,2)) { goto L_800F6FAC; } // 800F6F80
  cmpu(c,0,c->r[4],0x0000007Fu); // 800F6F84
  if (!crb(c,2)) { goto L_800F6F9C; } // 800F6F88
  c->r[3]=c->r[1]+0x00000008u; // 800F6F8C
  c->r[0]=0u+0x00000000u; // 800F6F90
  W8(c->r[3]+c->r[4],c->r[0]); // 800F6F94
  goto L_800F6FB8; // 800F6F98
L_800F6F9C:;
  c->r[3]=c->r[1]+0x00000008u; // 800F6F9C
  c->r[0]=0u+0x0000002Fu; // 800F6FA0
  W8(c->r[3]+c->r[4],c->r[0]); // 800F6FA4
  c->r[4]=c->r[4]+0x00000001u; // 800F6FA8
L_800F6FAC:;
  c->r[3]=c->r[1]+0x00000008u; // 800F6FAC
  c->r[0]=0u+0x00000000u; // 800F6FB0
  W8(c->r[3]+c->r[4],c->r[0]); // 800F6FB4
L_800F6FB8:;
  c->r[3]=0u+0x80280000u; // 800F6FB8
  c->r[4]=c->r[27]|c->r[27]; // 800F6FBC
  c->r[3]=c->r[3]+0xFFFFB844u; // 800F6FC0
  c->r[5]=c->r[1]+0x00000008u; // 800F6FC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F6FC8
  c->lr=0x800F6FD0u; f_800ACBA4(c); // 800F6FCC
  c->r[3]=0u+0x00000000u; // 800F6FD0
  goto L_800F7010; // 800F6FD4
L_800F6FD8:;
  if (crb(c,0)) { goto L_800F6FEC; } // 800F6FD8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800F6FDC
  c->r[0]=R32(c->r[28]+c->r[3]); // 800F6FE0
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 800F6FE4
  if (crb(c,2)) { goto L_800F6FF4; } // 800F6FE8
L_800F6FEC:;
  c->r[3]=0u+0x00000000u; // 800F6FEC
  goto L_800F7010; // 800F6FF0
L_800F6FF4:;
  W32(c->r[29]+0x00000000u,c->r[26]); // 800F6FF4
  c->r[4]=c->r[28]+c->r[3]; // 800F6FF8
  c->r[3]=0u+0x00000001u; // 800F6FFC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F7000
  W32(c->r[29]+0x00000004u,c->r[0]); // 800F7004
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F7008
  W32(c->r[29]+0x00000008u,c->r[0]); // 800F700C
L_800F7010:;
  c->r[11]=c->r[1]+0x000000A0u; // 800F7010
  c->lr=0x800F7018u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F7014
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800F7018
  c->lr=c->r[0]; // 800F701C
  c->r[1]=c->r[1]+0x000000A0u; // 800F7020
  return; // 800F7024
}

// ARCFastOpen
void f_800F7028(Ctx* __restrict c) {
  trace_call(0x800F7028u);
  cmps(c,0,(int32_t)c->r[4],0); // 800F7028
  c->r[6]=R32(c->r[3]+0x00000004u); // 800F702C
  if (crb(c,0)) { goto L_800F7050; } // 800F7030
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800F7034
  cmpu(c,0,c->r[4],c->r[0]); // 800F7038
  if (!crb(c,0)) { goto L_800F7050; } // 800F703C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800F7040
  c->r[0]=R32(c->r[6]+c->r[4]); // 800F7044
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 800F7048
  if (crb(c,2)) { goto L_800F7058; } // 800F704C
L_800F7050:;
  c->r[3]=0u+0x00000000u; // 800F7050
  return; // 800F7054
L_800F7058:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 800F7058
  c->r[4]=c->r[6]+c->r[4]; // 800F705C
  c->r[3]=0u+0x00000001u; // 800F7060
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F7064
  W32(c->r[5]+0x00000004u,c->r[0]); // 800F7068
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F706C
  W32(c->r[5]+0x00000008u,c->r[0]); // 800F7070
  return; // 800F7074
}

// ARCConvertPathToEntrynum
void f_800F7078(Ctx* __restrict c) {
  trace_call(0x800F7078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7078
  c->r[5]=0u+0x80280000u; // 800F707C
  c->r[5]=c->r[5]+0xFFFFA778u; // 800F7080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7084
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7088
  c->r[8]=R32(c->r[3]+0x00000018u); // 800F708C
  c->r[9]=R32(c->r[3]+0x00000004u); // 800F7090
  c->r[6]=R32(c->r[5]+0x00000038u); // 800F7094
L_800F7098:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800F7098
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F709C
  if (!crb(c,2)) { goto L_800F70AC; } // 800F70A0
  c->r[3]=c->r[8]|c->r[8]; // 800F70A4
  goto L_800F72CC; // 800F70A8
L_800F70AC:;
  cmps(c,0,(int32_t)c->r[0],47); // 800F70AC
  if (!crb(c,2)) { goto L_800F70C0; } // 800F70B0
  c->r[8]=0u+0x00000000u; // 800F70B4
  c->r[4]=c->r[4]+0x00000001u; // 800F70B8
  IRQCHK(c); goto L_800F7098; // 800F70BC
L_800F70C0:;
  cmps(c,0,(int32_t)c->r[0],46); // 800F70C0
  if (!crb(c,2)) { goto L_800F7134; } // 800F70C4
  c->r[0]=R8(c->r[4]+0x00000001u); // 800F70C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F70CC
  cmps(c,0,(int32_t)c->r[0],46); // 800F70D0
  if (!crb(c,2)) { goto L_800F7114; } // 800F70D4
  c->r[0]=R8(c->r[4]+0x00000002u); // 800F70D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F70DC
  cmps(c,0,(int32_t)c->r[0],47); // 800F70E0
  if (!crb(c,2)) { goto L_800F70FC; } // 800F70E4
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 800F70E8
  c->r[4]=c->r[4]+0x00000003u; // 800F70EC
  c->r[5]=c->r[9]+c->r[0]; // 800F70F0
  c->r[8]=R32(c->r[5]+0x00000004u); // 800F70F4
  IRQCHK(c); goto L_800F7098; // 800F70F8
L_800F70FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F70FC
  if (!crb(c,2)) { goto L_800F7134; } // 800F7100
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 800F7104
  c->r[3]=c->r[9]+c->r[0]; // 800F7108
  c->r[3]=R32(c->r[3]+0x00000004u); // 800F710C
  goto L_800F72CC; // 800F7110
L_800F7114:;
  cmps(c,0,(int32_t)c->r[0],47); // 800F7114
  if (!crb(c,2)) { goto L_800F7124; } // 800F7118
  c->r[4]=c->r[4]+0x00000002u; // 800F711C
  IRQCHK(c); goto L_800F7098; // 800F7120
L_800F7124:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F7124
  if (!crb(c,2)) { goto L_800F7134; } // 800F7128
  c->r[3]=c->r[8]|c->r[8]; // 800F712C
  goto L_800F72CC; // 800F7130
L_800F7134:;
  c->r[7]=c->r[4]|c->r[4]; // 800F7134
  goto L_800F7140; // 800F7138
L_800F713C:;
  c->r[7]=c->r[7]+0x00000001u; // 800F713C
L_800F7140:;
  c->r[5]=R8(c->r[7]+0x00000000u); // 800F7140
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 800F7144
  if (crb(c,2)) { goto L_800F7154; } // 800F7148
  cmps(c,0,(int32_t)c->r[0],47); // 800F714C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F713C; } // 800F7150
L_800F7154:;
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 800F7154
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800F7158
  c->r[7]=c->r[7]-c->r[4]; // 800F715C
  c->r[10]=0u-c->r[11]; // 800F7160
  c->r[5]=c->r[9]+c->r[0]; // 800F7164
  c->r[8]=c->r[8]+0x00000001u; // 800F7168
  c->r[0]=c->r[10]|c->r[11]; // 800F716C
  c->r[5]=R32(c->r[5]+0x00000008u); // 800F7170
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F7174
  goto L_800F72A0; // 800F7178
L_800F717C:;
  c->r[10]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 800F717C
  c->r[12]=c->r[9]+c->r[10]; // 800F7180
L_800F7184:;
  c->r[31]=R32(c->r[12]+0x00000000u); // 800F7184
  c->r[10]=rotl(c->r[31],0)&0xFF000000u; cr0(c,c->r[10]); // 800F7188
  if (!crb(c,2)) { goto L_800F7198; } // 800F718C
  cmps(c,0,(int32_t)c->r[0],1); // 800F7190
  if (crb(c,2)) { goto L_800F7280; } // 800F7194
L_800F7198:;
  c->r[11]=R32(c->r[3]+0x00000010u); // 800F7198
  c->r[10]=rotl(c->r[31],0)&0x00FFFFFFu; // 800F719C
  c->r[30]=c->r[11]+c->r[10]; // 800F71A0
  c->r[10]=R8(c->r[11]+c->r[10]); // 800F71A4
  cmps(c,0,(int32_t)c->r[10],46); // 800F71A8
  if (!crb(c,2)) { goto L_800F71C8; } // 800F71AC
  c->r[10]=R8(c->r[30]+0x00000001u); // 800F71B0
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[10]); // 800F71B4
  if (!crb(c,2)) { goto L_800F71C8; } // 800F71B8
  c->r[12]=c->r[12]+0x0000000Cu; // 800F71BC
  c->r[8]=c->r[8]+0x00000001u; // 800F71C0
  IRQCHK(c); goto L_800F7184; // 800F71C4
L_800F71C8:;
  c->r[12]=c->r[4]|c->r[4]; // 800F71C8
  goto L_800F7248; // 800F71CC
L_800F71D0:;
  c->r[11]=R8(c->r[30]+0x00000000u); // 800F71D0
  c->r[10]=0u+0x00000000u; // 800F71D4
  c->r[30]=c->r[30]+0x00000001u; // 800F71D8
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[31]); // 800F71DC
  if (crb(c,0)) { goto L_800F71EC; } // 800F71E0
  cmps(c,0,(int32_t)c->r[31],256); // 800F71E4
  if (crb(c,0)) { goto L_800F71F0; } // 800F71E8
L_800F71EC:;
  c->r[10]=0u+0x00000001u; // 800F71EC
L_800F71F0:;
  cmps(c,0,(int32_t)c->r[10],0); // 800F71F0
  if (crb(c,2)) { goto L_800F71FC; } // 800F71F4
  goto L_800F7204; // 800F71F8
L_800F71FC:;
  c->r[10]=R32(c->r[6]+0x00000010u); // 800F71FC
  c->r[31]=R8(c->r[10]+c->r[31]); // 800F7200
L_800F7204:;
  c->r[11]=R8(c->r[12]+0x00000000u); // 800F7204
  c->r[10]=0u+0x00000000u; // 800F7208
  c->r[12]=c->r[12]+0x00000001u; // 800F720C
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 800F7210
  if (crb(c,0)) { goto L_800F7220; } // 800F7214
  cmps(c,0,(int32_t)c->r[11],256); // 800F7218
  if (crb(c,0)) { goto L_800F7224; } // 800F721C
L_800F7220:;
  c->r[10]=0u+0x00000001u; // 800F7220
L_800F7224:;
  cmps(c,0,(int32_t)c->r[10],0); // 800F7224
  if (crb(c,2)) { goto L_800F7230; } // 800F7228
  goto L_800F7238; // 800F722C
L_800F7230:;
  c->r[10]=R32(c->r[6]+0x00000010u); // 800F7230
  c->r[11]=R8(c->r[10]+c->r[11]); // 800F7234
L_800F7238:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[31]); // 800F7238
  if (crb(c,2)) { goto L_800F7248; } // 800F723C
  c->r[10]=0u+0x00000000u; // 800F7240
  goto L_800F7278; // 800F7244
L_800F7248:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 800F7248
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[10]); // 800F724C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F71D0; } // 800F7250
  c->r[10]=R8(c->r[12]+0x00000000u); // 800F7254
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 800F7258
  cmps(c,0,(int32_t)c->r[10],47); // 800F725C
  if (crb(c,2)) { goto L_800F726C; } // 800F7260
  cmps(c,0,(int32_t)c->r[10],0); // 800F7264
  if (!crb(c,2)) { goto L_800F7274; } // 800F7268
L_800F726C:;
  c->r[10]=0u+0x00000001u; // 800F726C
  goto L_800F7278; // 800F7270
L_800F7274:;
  c->r[10]=0u+0x00000000u; // 800F7274
L_800F7278:;
  cmps(c,0,(int32_t)c->r[10],1); // 800F7278
  if (crb(c,2)) { goto L_800F72B0; } // 800F727C
L_800F7280:;
  c->r[10]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 800F7280
  c->r[11]=c->r[9]+c->r[10]; // 800F7284
  c->r[10]=R32(c->r[9]+c->r[10]); // 800F7288
  c->r[10]=rotl(c->r[10],0)&0xFF000000u; cr0(c,c->r[10]); // 800F728C
  if (crb(c,2)) { goto L_800F729C; } // 800F7290
  c->r[8]=R32(c->r[11]+0x00000008u); // 800F7294
  goto L_800F72A0; // 800F7298
L_800F729C:;
  c->r[8]=c->r[8]+0x00000001u; // 800F729C
L_800F72A0:;
  cmpu(c,0,c->r[8],c->r[5]); // 800F72A0
  if (crb(c,0)) { IRQCHK(c); goto L_800F717C; } // 800F72A4
  c->r[3]=0u+0xFFFFFFFFu; // 800F72A8
  goto L_800F72CC; // 800F72AC
L_800F72B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F72B0
  if (!crb(c,2)) { goto L_800F72C0; } // 800F72B4
  c->r[3]=c->r[8]|c->r[8]; // 800F72B8
  goto L_800F72CC; // 800F72BC
L_800F72C0:;
  c->r[4]=c->r[7]+c->r[4]; // 800F72C0
  c->r[4]=c->r[4]+0x00000001u; // 800F72C4
  IRQCHK(c); goto L_800F7098; // 800F72C8
L_800F72CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F72CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F72D0
  c->r[1]=c->r[1]+0x00000010u; // 800F72D4
  return; // 800F72D8
}

// entryToPath
void f_800F72DC(Ctx* __restrict c) {
  trace_call(0x800F72DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F72DC
  c->r[0]=c->lr; // 800F72E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F72E4
  c->r[11]=c->r[1]+0x00000020u; // 800F72E8
  c->lr=0x800F72F0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F72EC
  cmps(c,0,(int32_t)c->r[4],0); // 800F72F0
  c->r[7]=R32(c->r[3]+0x00000004u); // 800F72F4
  c->r[28]=c->r[5]|c->r[5]; // 800F72F8
  c->r[29]=c->r[6]|c->r[6]; // 800F72FC
  if (!crb(c,2)) { goto L_800F730C; } // 800F7300
  c->r[3]=0u+0x00000000u; // 800F7304
  goto L_800F748C; // 800F7308
L_800F730C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800F730C
  c->r[8]=R32(c->r[3]+0x00000010u); // 800F7310
  c->r[4]=c->r[7]+c->r[0]; // 800F7314
  c->r[0]=R32(c->r[7]+c->r[0]); // 800F7318
  c->r[4]=R32(c->r[4]+0x00000004u); // 800F731C
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800F7320
  cmps(c,0,(int32_t)c->r[4],0); // 800F7324
  c->r[30]=c->r[8]+c->r[0]; // 800F7328
  if (!crb(c,2)) { goto L_800F7338; } // 800F732C
  c->r[4]=0u+0x00000000u; // 800F7330
  goto L_800F7430; // 800F7334
L_800F7338:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800F7338
  c->r[4]=c->r[7]+c->r[0]; // 800F733C
  c->r[0]=R32(c->r[7]+c->r[0]); // 800F7340
  c->r[4]=R32(c->r[4]+0x00000004u); // 800F7344
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800F7348
  cmps(c,0,(int32_t)c->r[4],0); // 800F734C
  c->r[31]=c->r[8]+c->r[0]; // 800F7350
  if (!crb(c,2)) { goto L_800F7360; } // 800F7354
  c->r[4]=0u+0x00000000u; // 800F7358
  goto L_800F73D8; // 800F735C
L_800F7360:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800F7360
  c->r[0]=R32(c->r[7]+c->r[4]); // 800F7364
  c->r[4]=c->r[7]+c->r[4]; // 800F7368
  c->r[4]=R32(c->r[4]+0x00000004u); // 800F736C
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800F7370
  c->r[27]=c->r[8]+c->r[0]; // 800F7374
  c->lr=0x800F737Cu; f_800F72DC(c); // 800F7378
  cmpu(c,0,c->r[3],c->r[29]); // 800F737C
  c->r[4]=c->r[3]|c->r[3]; // 800F7380
  if (!crb(c,2)) { goto L_800F738C; } // 800F7384
  goto L_800F73D8; // 800F7388
L_800F738C:;
  c->r[4]=c->r[3]+0x00000001u; // 800F738C
  c->r[0]=0u+0x0000002Fu; // 800F7390
  c->r[6]=c->r[29]-c->r[4]; // 800F7394
  W8(c->r[28]+c->r[3],c->r[0]); // 800F7398
  c->r[3]=c->r[28]+c->r[4]; // 800F739C
  c->r[5]=c->r[6]|c->r[6]; // 800F73A0
  goto L_800F73BC; // 800F73A4
L_800F73A8:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 800F73A8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800F73AC
  c->r[27]=c->r[27]+0x00000001u; // 800F73B0
  W8(c->r[3]+0x00000000u,c->r[0]); // 800F73B4
  c->r[3]=c->r[3]+0x00000001u; // 800F73B8
L_800F73BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800F73BC
  if (crb(c,2)) { goto L_800F73D0; } // 800F73C0
  c->r[0]=R8(c->r[27]+0x00000000u); // 800F73C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F73C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F73A8; } // 800F73CC
L_800F73D0:;
  c->r[0]=c->r[6]-c->r[5]; // 800F73D0
  c->r[4]=c->r[4]+c->r[0]; // 800F73D4
L_800F73D8:;
  cmpu(c,0,c->r[4],c->r[29]); // 800F73D8
  if (!crb(c,2)) { goto L_800F73E4; } // 800F73DC
  goto L_800F7430; // 800F73E0
L_800F73E4:;
  c->r[3]=c->r[4]+0x00000001u; // 800F73E4
  c->r[0]=0u+0x0000002Fu; // 800F73E8
  c->r[6]=c->r[29]-c->r[3]; // 800F73EC
  W8(c->r[28]+c->r[4],c->r[0]); // 800F73F0
  c->r[4]=c->r[28]+c->r[3]; // 800F73F4
  c->r[5]=c->r[6]|c->r[6]; // 800F73F8
  goto L_800F7414; // 800F73FC
L_800F7400:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 800F7400
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800F7404
  c->r[31]=c->r[31]+0x00000001u; // 800F7408
  W8(c->r[4]+0x00000000u,c->r[0]); // 800F740C
  c->r[4]=c->r[4]+0x00000001u; // 800F7410
L_800F7414:;
  cmps(c,0,(int32_t)c->r[5],0); // 800F7414
  if (crb(c,2)) { goto L_800F7428; } // 800F7418
  c->r[0]=R8(c->r[31]+0x00000000u); // 800F741C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F7420
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7400; } // 800F7424
L_800F7428:;
  c->r[0]=c->r[6]-c->r[5]; // 800F7428
  c->r[4]=c->r[3]+c->r[0]; // 800F742C
L_800F7430:;
  cmpu(c,0,c->r[4],c->r[29]); // 800F7430
  if (!crb(c,2)) { goto L_800F7440; } // 800F7434
  c->r[3]=c->r[4]|c->r[4]; // 800F7438
  goto L_800F748C; // 800F743C
L_800F7440:;
  c->r[6]=c->r[4]+0x00000001u; // 800F7440
  c->r[0]=0u+0x0000002Fu; // 800F7444
  c->r[5]=c->r[29]-c->r[6]; // 800F7448
  W8(c->r[28]+c->r[4],c->r[0]); // 800F744C
  c->r[3]=c->r[28]+c->r[6]; // 800F7450
  c->r[4]=c->r[5]|c->r[5]; // 800F7454
  goto L_800F7470; // 800F7458
L_800F745C:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 800F745C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F7460
  c->r[30]=c->r[30]+0x00000001u; // 800F7464
  W8(c->r[3]+0x00000000u,c->r[0]); // 800F7468
  c->r[3]=c->r[3]+0x00000001u; // 800F746C
L_800F7470:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F7470
  if (crb(c,2)) { goto L_800F7484; } // 800F7474
  c->r[0]=R8(c->r[30]+0x00000000u); // 800F7478
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F747C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F745C; } // 800F7480
L_800F7484:;
  c->r[0]=c->r[5]-c->r[4]; // 800F7484
  c->r[3]=c->r[6]+c->r[0]; // 800F7488
L_800F748C:;
  c->r[11]=c->r[1]+0x00000020u; // 800F748C
  c->lr=0x800F7494u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F7490
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7494
  c->lr=c->r[0]; // 800F7498
  c->r[1]=c->r[1]+0x00000020u; // 800F749C
  return; // 800F74A0
}

// ARCGetStartAddrInMem
void f_800F74A4(Ctx* __restrict c) {
  trace_call(0x800F74A4u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 800F74A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F74A8
  c->r[3]=R32(c->r[4]+0x00000000u); // 800F74AC
  c->r[3]=c->r[3]+c->r[0]; // 800F74B0
  return; // 800F74B4
}

// ARCGetLength
void f_800F74B8(Ctx* __restrict c) {
  trace_call(0x800F74B8u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 800F74B8
  return; // 800F74BC
}

// ARCClose
void f_800F74C0(Ctx* __restrict c) {
  trace_call(0x800F74C0u);
  c->r[3]=0u+0x00000001u; // 800F74C0
  return; // 800F74C4
}

// ARCChangeDir
void f_800F74C8(Ctx* __restrict c) {
  trace_call(0x800F74C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F74C8
  c->r[0]=c->lr; // 800F74CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F74D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F74D4
  c->r[31]=c->r[3]|c->r[3]; // 800F74D8
  c->lr=0x800F74E0u; f_800F7078(c); // 800F74DC
  cmps(c,0,(int32_t)c->r[3],0); // 800F74E0
  c->r[4]=R32(c->r[31]+0x00000004u); // 800F74E4
  if (crb(c,0)) { goto L_800F74FC; } // 800F74E8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800F74EC
  c->r[0]=R32(c->r[4]+c->r[0]); // 800F74F0
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 800F74F4
  if (!crb(c,2)) { goto L_800F7504; } // 800F74F8
L_800F74FC:;
  c->r[3]=0u+0x00000000u; // 800F74FC
  goto L_800F750C; // 800F7500
L_800F7504:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 800F7504
  c->r[3]=0u+0x00000001u; // 800F7508
L_800F750C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F750C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7510
  c->lr=c->r[0]; // 800F7514
  c->r[1]=c->r[1]+0x00000010u; // 800F7518
  return; // 800F751C
}

// ARCOpenDir
void f_800F7520(Ctx* __restrict c) {
  trace_call(0x800F7520u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7520
  c->r[0]=c->lr; // 800F7524
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F752C
  c->r[31]=c->r[5]|c->r[5]; // 800F7530
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7534
  c->r[30]=c->r[3]|c->r[3]; // 800F7538
  c->lr=0x800F7540u; f_800F7078(c); // 800F753C
  cmps(c,0,(int32_t)c->r[3],0); // 800F7540
  c->r[5]=R32(c->r[30]+0x00000004u); // 800F7544
  if (crb(c,0)) { goto L_800F755C; } // 800F7548
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800F754C
  c->r[0]=R32(c->r[5]+c->r[4]); // 800F7550
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 800F7554
  if (!crb(c,2)) { goto L_800F7564; } // 800F7558
L_800F755C:;
  c->r[3]=0u+0x00000000u; // 800F755C
  goto L_800F7584; // 800F7560
L_800F7564:;
  c->r[0]=c->r[3]+0x00000001u; // 800F7564
  W32(c->r[31]+0x00000004u,c->r[3]); // 800F7568
  c->r[4]=c->r[5]+c->r[4]; // 800F756C
  c->r[3]=0u+0x00000001u; // 800F7570
  W32(c->r[31]+0x00000000u,c->r[30]); // 800F7574
  W32(c->r[31]+0x00000008u,c->r[0]); // 800F7578
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F757C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800F7580
L_800F7584:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7588
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F758C
  c->lr=c->r[0]; // 800F7590
  c->r[1]=c->r[1]+0x00000010u; // 800F7594
  return; // 800F7598
}

// ARCReadDir
void f_800F759C(Ctx* __restrict c) {
  trace_call(0x800F759Cu);
  c->r[7]=R32(c->r[3]+0x00000008u); // 800F759C
  c->r[9]=R32(c->r[3]+0x00000000u); // 800F75A0
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 800F75A4
  c->r[8]=R32(c->r[9]+0x00000004u); // 800F75A8
  c->r[6]=c->r[8]+c->r[0]; // 800F75AC
L_800F75B0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F75B0
  cmpu(c,0,c->r[7],c->r[0]); // 800F75B4
  if (!crb(c,1)) { goto L_800F75C8; } // 800F75B8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800F75BC
  cmpu(c,0,c->r[0],c->r[7]); // 800F75C0
  if (crb(c,1)) { goto L_800F75D0; } // 800F75C4
L_800F75C8:;
  c->r[3]=0u+0x00000000u; // 800F75C8
  return; // 800F75CC
L_800F75D0:;
  W32(c->r[4]+0x00000000u,c->r[9]); // 800F75D0
  W32(c->r[4]+0x00000004u,c->r[7]); // 800F75D4
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F75D8
  c->r[5]=rotl(c->r[0],0)&0xFF000000u; // 800F75DC
  c->r[0]=0u-c->r[5]; // 800F75E0
  c->r[0]=c->r[0]|c->r[5]; // 800F75E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F75E8
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F75EC
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F75F0
  c->r[5]=R32(c->r[9]+0x00000010u); // 800F75F4
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 800F75F8
  c->r[5]=c->r[5]+c->r[0]; // 800F75FC
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 800F7600
  c->r[0]=R8(c->r[5]+0x00000000u); // 800F7604
  cmps(c,0,(int32_t)c->r[0],46); // 800F7608
  if (!crb(c,2)) { goto L_800F7628; } // 800F760C
  c->r[0]=R8(c->r[5]+0x00000001u); // 800F7610
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F7614
  if (!crb(c,2)) { goto L_800F7628; } // 800F7618
  c->r[6]=c->r[6]+0x0000000Cu; // 800F761C
  c->r[7]=c->r[7]+0x00000001u; // 800F7620
  IRQCHK(c); goto L_800F75B0; // 800F7624
L_800F7628:;
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 800F7628
  c->r[0]=R32(c->r[8]+c->r[4]); // 800F762C
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 800F7630
  if (crb(c,2)) { goto L_800F7644; } // 800F7634
  c->r[4]=c->r[8]+c->r[4]; // 800F7638
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F763C
  goto L_800F7648; // 800F7640
L_800F7644:;
  c->r[0]=c->r[7]+0x00000001u; // 800F7644
L_800F7648:;
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F7648
  c->r[3]=0u+0x00000001u; // 800F764C
  return; // 800F7650
}

// ARCCloseDir
void f_800F7654(Ctx* __restrict c) {
  trace_call(0x800F7654u);
  c->r[3]=0u+0x00000001u; // 800F7654
  return; // 800F7658
}

// __wpadNoAlloc
void f_800F7660(Ctx* __restrict c) {
  trace_call(0x800F7660u);
  c->r[3]=0u+0x00000000u; // 800F7660
  return; // 800F7664
}

// __wpadNoFree
void f_800F7670(Ctx* __restrict c) {
  trace_call(0x800F7670u);
  c->r[3]=0u+0x00000000u; // 800F7670
  return; // 800F7674
}

// WPADIsEnabledVSM
void f_800F7680(Ctx* __restrict c) {
  trace_call(0x800F7680u);
  c->r[3]=R32(c->r[13]+0xFFFF9330u); // 800F7680
  return; // 800F7684
}

// WPADIsEnabledTRN
void f_800F7690(Ctx* __restrict c) {
  trace_call(0x800F7690u);
  c->r[3]=R32(c->r[13]+0xFFFF9334u); // 800F7690
  return; // 800F7694
}

// WPADIsEnabledGTR
void f_800F76A0(Ctx* __restrict c) {
  trace_call(0x800F76A0u);
  c->r[3]=R32(c->r[13]+0xFFFF9338u); // 800F76A0
  return; // 800F76A4
}

// WPADIsEnabledDRM
void f_800F76B0(Ctx* __restrict c) {
  trace_call(0x800F76B0u);
  c->r[3]=R32(c->r[13]+0xFFFF933Cu); // 800F76B0
  return; // 800F76B4
}

// WBCSetupCalibration
void f_800F76C0(Ctx* __restrict c) {
  trace_call(0x800F76C0u);
  c->r[3]=0u+0x00000000u; // 800F76C0
  return; // 800F76C4
}

// WBCGetCalibrationStatus
void f_800F76D0(Ctx* __restrict c) {
  trace_call(0x800F76D0u);
  c->r[3]=0u+0x00000000u; // 800F76D0
  return; // 800F76D4
}

// WBCGetBatteryLevel
void f_800F76E0(Ctx* __restrict c) {
  trace_call(0x800F76E0u);
  c->r[3]=0u+0x00000000u; // 800F76E0
  return; // 800F76E4
}

// WBCRead
void f_800F76F0(Ctx* __restrict c) {
  trace_call(0x800F76F0u);
  c->r[3]=0u+0xFFFFFFFFu; // 800F76F0
  return; // 800F76F4
}

// WBCSetZEROPoint
void f_800F7700(Ctx* __restrict c) {
  trace_call(0x800F7700u);
  c->r[3]=0u+0xFFFFFFFFu; // 800F7700
  return; // 800F7704
}

// WBCGetTGCWeight
void f_800F7710(Ctx* __restrict c) {
  trace_call(0x800F7710u);
  c->r[3]=0u+0xFFFFFFFFu; // 800F7710
  return; // 800F7714
}

// OnShutdown
void f_800F7720(Ctx* __restrict c) {
  trace_call(0x800F7720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7720
  c->r[0]=c->lr; // 800F7724
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F772C
  c->r[31]=c->r[3]|c->r[3]; // 800F7730
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7734
  c->r[30]=c->r[4]|c->r[4]; // 800F7738
  c->lr=0x800F7740u; f_8010BD1C(c); // 800F773C
  cmps(c,0,(int32_t)c->r[31],0); // 800F7740
  if (!crb(c,2)) { goto L_800F7750; } // 800F7744
  cmps(c,0,(int32_t)c->r[3],0); // 800F7748
  if (!crb(c,2)) { goto L_800F7758; } // 800F774C
L_800F7750:;
  c->r[3]=0u+0x00000001u; // 800F7750
  goto L_800F78B4; // 800F7754
L_800F7758:;
  cmps(c,0,(int32_t)c->r[3],4); // 800F7758
  if (crb(c,2)) { goto L_800F776C; } // 800F775C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F7760
  cmpu(c,0,c->r[0],0x00000001u); // 800F7764
  if (crb(c,1)) { goto L_800F7774; } // 800F7768
L_800F776C:;
  c->r[3]=0u+0x00000000u; // 800F776C
  goto L_800F78B4; // 800F7770
L_800F7774:;
  c->lr=0x800F7778u; f_8010D770(c); // 800F7774
  cmps(c,0,(int32_t)c->r[3],0); // 800F7778
  if (crb(c,2)) { goto L_800F778C; } // 800F777C
  c->lr=0x800F7784u; f_8010BFC8(c); // 800F7780
  c->r[3]=0u+0x00000000u; // 800F7784
  goto L_800F78B4; // 800F7788
L_800F778C:;
  c->r[0]=c->r[30]+0xFFFFFFFEu; // 800F778C
  cmpu(c,0,c->r[0],0x00000001u); // 800F7790
  if (!crb(c,1)) { goto L_800F77D8; } // 800F7794
  cmps(c,0,(int32_t)c->r[30],0); // 800F7798
  if (crb(c,2)) { goto L_800F77C4; } // 800F779C
  cmpu(c,0,c->r[30],0x00000001u); // 800F77A0
  if (crb(c,2)) { goto L_800F77E0; } // 800F77A4
  cmpu(c,0,c->r[30],0x00000004u); // 800F77A8
  if (crb(c,2)) { goto L_800F77E0; } // 800F77AC
  cmpu(c,0,c->r[30],0x00000006u); // 800F77B0
  if (crb(c,2)) { goto L_800F77E0; } // 800F77B4
  cmpu(c,0,c->r[30],0x00000005u); // 800F77B8
  if (crb(c,2)) { goto L_800F77E8; } // 800F77BC
  goto L_800F77F8; // 800F77C0
L_800F77C4:;
  c->r[3]=0u+0x800F0000u; // 800F77C4
  c->r[4]=0u+0x800F0000u; // 800F77C8
  c->r[3]=c->r[3]+0x00007660u; // 800F77CC
  c->r[4]=c->r[4]+0x00007670u; // 800F77D0
  c->lr=0x800F77D8u; f_8010BAB0(c); // 800F77D4
L_800F77D8:;
  c->r[0]=0u+0x00000001u; // 800F77D8
  goto L_800F77F8; // 800F77DC
L_800F77E0:;
  c->r[0]=0u+0x00000000u; // 800F77E0
  goto L_800F77F8; // 800F77E4
L_800F77E8:;
  c->r[3]=R32(c->r[13]+0xFFFF8CFCu); // 800F77E8
  c->r[0]=0u-c->r[3]; // 800F77EC
  c->r[0]=c->r[0]|c->r[3]; // 800F77F0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F77F4
L_800F77F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F77F8
  if (crb(c,2)) { goto L_800F7874; } // 800F77FC
  c->lr=0x800F7804u; f_800B087C(c); // 800F7800
  c->r[0]=R8(c->r[13]+0xFFFF934Du); // 800F7804
  c->r[30]=c->r[3]|c->r[3]; // 800F7808
  cmps(c,0,(int32_t)c->r[0],0); // 800F780C
  if (crb(c,2)) { goto L_800F781C; } // 800F7810
  c->lr=0x800F7818u; f_800B08A4(c); // 800F7814
  goto L_800F78B0; // 800F7818
L_800F781C:;
  c->r[0]=0u+0x00000001u; // 800F781C
  W8(c->r[13]+0xFFFF934Du,c->r[0]); // 800F7820
  c->r[3]=0u+0x00000000u; // 800F7824
  c->r[4]=0u+0x00000000u; // 800F7828
  c->lr=0x800F7830u; f_8010C284(c); // 800F782C
  c->r[31]=0u+0x00000000u; // 800F7830
L_800F7834:;
  c->r[3]=c->r[31]|c->r[31]; // 800F7834
  c->r[4]=0u+0x00000000u; // 800F7838
  c->lr=0x800F7840u; f_8010E858(c); // 800F783C
  c->r[31]=c->r[31]+0x00000001u; // 800F7840
  cmps(c,0,(int32_t)c->r[31],4); // 800F7844
  if (crb(c,0)) { IRQCHK(c); goto L_800F7834; } // 800F7848
  c->r[3]=0u+0x802E0000u; // 800F784C
  c->r[3]=c->r[3]+0xFFFFB260u; // 800F7850
  c->lr=0x800F7858u; f_800AAFB4(c); // 800F7854
  c->r[3]=0u+0x00000000u; // 800F7858
  c->lr=0x800F7860u; f_8010C1CC(c); // 800F785C
  c->r[3]=0u+0x00000000u; // 800F7860
  c->lr=0x800F7868u; f_8010BAFC(c); // 800F7864
  c->r[3]=c->r[30]|c->r[30]; // 800F7868
  c->lr=0x800F7870u; f_800B08A4(c); // 800F786C
  goto L_800F78B0; // 800F7870
L_800F7874:;
  c->lr=0x800F7878u; f_800B087C(c); // 800F7874
  c->r[0]=R32(c->r[13]+0xFFFF9318u); // 800F7878
  cmps(c,0,(int32_t)c->r[0],0); // 800F787C
  if (!crb(c,2)) { goto L_800F788C; } // 800F7880
  c->lr=0x800F7888u; f_800B08A4(c); // 800F7884
  goto L_800F78B0; // 800F7888
L_800F788C:;
  c->r[0]=R8(c->r[13]+0xFFFF934Du); // 800F788C
  cmps(c,0,(int32_t)c->r[0],0); // 800F7890
  if (crb(c,2)) { goto L_800F78A0; } // 800F7894
  c->lr=0x800F789Cu; f_800B08A4(c); // 800F7898
  goto L_800F78B0; // 800F789C
L_800F78A0:;
  c->r[0]=0u+0x00000001u; // 800F78A0
  W8(c->r[13]+0xFFFF934Du,c->r[0]); // 800F78A4
  W32(c->r[13]+0xFFFF842Cu,c->r[0]); // 800F78A8
  c->lr=0x800F78B0u; f_800B08A4(c); // 800F78AC
L_800F78B0:;
  c->r[3]=0u+0x00000000u; // 800F78B0
L_800F78B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F78B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F78B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F78BC
  c->lr=c->r[0]; // 800F78C0
  c->r[1]=c->r[1]+0x00000010u; // 800F78C4
  return; // 800F78C8
}

// __wpadSendDataSub
void f_800F78D0(Ctx* __restrict c) {
  trace_call(0x800F78D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F78D0
  c->r[0]=c->lr; // 800F78D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F78D8
  c->r[11]=c->r[1]+0x00000030u; // 800F78DC
  c->lr=0x800F78E4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F78E0
  c->r[5]=0u+0x802E0000u; // 800F78E4
  c->r[0]=R32(c->r[4]+0x00000000u); // 800F78E8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F78EC
  c->r[25]=R16(c->r[4]+0x0000001Au); // 800F78F0
  c->r[5]=c->r[5]+0xFFFFB290u; // 800F78F4
  c->r[24]=c->r[4]|c->r[4]; // 800F78F8
  c->r[28]=R32(c->r[5]+c->r[3]); // 800F78FC
  c->r[27]=rotl(c->r[0],0)&0x000000FFu; // 800F7900
  c->r[26]=c->r[4]+0x00000004u; // 800F7904
  c->lr=0x800F790Cu; f_800B087C(c); // 800F7908
  c->r[29]=R8(c->r[28]+0x00000907u); // 800F790C
  c->r[31]=c->r[3]|c->r[3]; // 800F7910
  c->r[4]=R32(c->r[28]+0x00000900u); // 800F7914
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[29]; cr0(c,c->r[0]); // 800F7918
  if (!crb(c,0)) { goto L_800F792C; } // 800F791C
  c->lr=0x800F7924u; f_800B08A4(c); // 800F7920
  c->r[3]=0u+0xFFFFFFFCu; // 800F7924
  goto L_800F7A7C; // 800F7928
L_800F792C:;
  c->r[0]=0u+0xFFFFFFFEu; // 800F792C
  W32(c->r[28]+0x00000900u,c->r[0]); // 800F7930
  cmpu(c,0,c->r[27],0x00000010u); // 800F7934
  c->r[3]=R32(c->r[28]+0x00000918u); // 800F7938
  c->r[0]=R32(c->r[13]+0xFFFF9350u); // 800F793C
  c->r[30]=c->r[3]&c->r[0]; // 800F7940
  if (!crb(c,2)) { goto L_800F7950; } // 800F7944
  W32(c->r[28]+0x00000900u,c->r[4]); // 800F7948
  goto L_800F7A04; // 800F794C
L_800F7950:;
  cmpu(c,0,c->r[27],0x00000018u); // 800F7950
  if (!crb(c,2)) { goto L_800F796C; } // 800F7954
  W32(c->r[28]+0x00000900u,c->r[4]); // 800F7958
  c->r[3]=R8(c->r[28]+0x00000913u); // 800F795C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F7960
  W8(c->r[28]+0x00000913u,c->r[0]); // 800F7964
  goto L_800F7A04; // 800F7968
L_800F796C:;
  cmps(c,0,(int32_t)c->r[27],22); // 800F796C
  if (crb(c,2)) { goto L_800F79D0; } // 800F7970
  cmps(c,0,(int32_t)c->r[27],23); // 800F7974
  if (crb(c,2)) { goto L_800F7988; } // 800F7978
  cmps(c,0,(int32_t)c->r[27],21); // 800F797C
  if (crb(c,2)) { goto L_800F79AC; } // 800F7980
  goto L_800F79C4; // 800F7984
L_800F7988:;
  c->r[0]=0u+0x00000000u; // 800F7988
  W32(c->r[28]+0x00000B6Cu,c->r[0]); // 800F798C
  c->r[0]=R32(c->r[24]+0x00000024u); // 800F7990
  W32(c->r[28]+0x00000B68u,c->r[0]); // 800F7994
  c->r[0]=R16(c->r[24]+0x00000020u); // 800F7998
  W16(c->r[28]+0x00000B70u,c->r[0]); // 800F799C
  c->r[0]=R32(c->r[24]+0x0000001Cu); // 800F79A0
  W32(c->r[28]+0x00000B64u,c->r[0]); // 800F79A4
  goto L_800F79D0; // 800F79A8
L_800F79AC:;
  W32(c->r[28]+0x00000900u,c->r[4]); // 800F79AC
  c->r[0]=0u+0x00000001u; // 800F79B0
  c->r[3]=R32(c->r[24]+0x00000028u); // 800F79B4
  W32(c->r[28]+0x00000850u,c->r[3]); // 800F79B8
  W8(c->r[28]+0x00000904u,c->r[0]); // 800F79BC
  goto L_800F79D0; // 800F79C0
L_800F79C4:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 800F79C4
  c->r[0]=c->r[0]|0x00000002u; // 800F79C8
  W8(c->r[26]+0x00000000u,c->r[0]); // 800F79CC
L_800F79D0:;
  c->r[0]=R32(c->r[24]+0x0000002Cu); // 800F79D0
  W32(c->r[28]+0x000008E0u,c->r[0]); // 800F79D4
  W8(c->r[28]+0x00000B77u,c->r[27]); // 800F79D8
  c->lr=0x800F79E0u; f_800B4914(c); // 800F79DC
  c->r[6]=0u+0x80000000u; // 800F79E0
  c->r[5]=0u+0x00000000u; // 800F79E4
  c->r[0]=R32(c->r[6]+0x000000F8u); // 800F79E8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFEu; // 800F79EC
  c->r[0]=addc(c,c->r[0],c->r[4],0); // 800F79F0
  W32(c->r[28]+0x00000AFCu,c->r[0]); // 800F79F4
  c->r[0]=addc(c,c->r[5],c->r[3],c->xer_ca); // 800F79F8
  W32(c->r[28]+0x00000AF8u,c->r[0]); // 800F79FC
  W8(c->r[28]+0x00000B00u,c->r[5]); // 800F7A00
L_800F7A04:;
  c->r[3]=c->r[31]|c->r[31]; // 800F7A04
  c->lr=0x800F7A0Cu; f_800B08A4(c); // 800F7A08
  c->r[0]=c->r[25]+0x00000012u; // 800F7A0C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800F7A10
  c->lr=0x800F7A18u; f_8010F4D4(c); // 800F7A14
  c->r[4]=c->r[25]+0x00000001u; // 800F7A18
  c->r[0]=0u+0x0000000Au; // 800F7A1C
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800F7A20
  W16(c->r[3]+0x00000002u,c->r[4]); // 800F7A24
  c->r[28]=c->r[3]+0x00000012u; // 800F7A28
  c->r[24]=c->r[3]|c->r[3]; // 800F7A2C
  W16(c->r[3]+0x00000004u,c->r[0]); // 800F7A30
  c->r[4]=c->r[26]|c->r[26]; // 800F7A34
  c->r[5]=c->r[25]|c->r[25]; // 800F7A38
  c->r[3]=c->r[28]+0x00000001u; // 800F7A3C
  W8(c->r[28]+0x00000000u,c->r[27]); // 800F7A40
  c->lr=0x800F7A48u; f_80004338(c); // 800F7A44
  cmps(c,0,(int32_t)c->r[30],0); // 800F7A48
  if (crb(c,2)) { goto L_800F7A60; } // 800F7A4C
  c->r[0]=R8(c->r[28]+0x00000001u); // 800F7A50
  c->r[0]=c->r[0]|0x00000001u; // 800F7A54
  W8(c->r[28]+0x00000001u,c->r[0]); // 800F7A58
  goto L_800F7A6C; // 800F7A5C
L_800F7A60:;
  c->r[0]=R8(c->r[28]+0x00000001u); // 800F7A60
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 800F7A64
  W8(c->r[28]+0x00000001u,c->r[0]); // 800F7A68
L_800F7A6C:;
  c->r[3]=c->r[29]|c->r[29]; // 800F7A6C
  c->r[4]=c->r[24]|c->r[24]; // 800F7A70
  c->lr=0x800F7A78u; f_80117A78(c); // 800F7A74
  c->r[3]=0u+0x00000000u; // 800F7A78
L_800F7A7C:;
  c->r[11]=c->r[1]+0x00000030u; // 800F7A7C
  c->lr=0x800F7A84u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F7A80
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F7A84
  c->lr=c->r[0]; // 800F7A88
  c->r[1]=c->r[1]+0x00000030u; // 800F7A8C
  return; // 800F7A90
}

// __wpadCalcRadioQuality
void f_800F7AA0(Ctx* __restrict c) {
  trace_call(0x800F7AA0u);
  c->r[0]=R16(c->r[13]+0xFFFF930Au); // 800F7AA0
  c->r[4]=0u+0x802E0000u; // 800F7AA4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F7AA8
  c->r[4]=c->r[4]+0xFFFFB290u; // 800F7AAC
  cmpu(c,0,c->r[0],0x0000000Au); // 800F7AB0
  c->r[7]=R32(c->r[4]+c->r[3]); // 800F7AB4
  if (!crb(c,2)) return; // 800F7AB8
  c->r[0]=R16(c->r[7]+0x00000B74u); // 800F7ABC
  c->r[3]=0u+0x66660000u; // 800F7AC0
  c->r[6]=R8(c->r[7]+0x00000B73u); // 800F7AC4
  c->r[4]=c->r[3]+0x00006667u; // 800F7AC8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800F7ACC
  c->r[0]=0u+0x00000064u; // 800F7AD0
  c->r[5]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800F7AD4
  c->r[5]=c->r[5]+c->r[6]; // 800F7AD8
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800F7ADC
  c->r[3]=rotl(c->r[3],31)&0x0000FFFFu; // 800F7AE0
  c->r[5]=c->r[5]+c->r[3]; // 800F7AE4
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 800F7AE8
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[3])>>32); // 800F7AEC
  c->r[3]=sraw(c,c->r[3],2); // 800F7AF0
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800F7AF4
  c->r[3]=c->r[3]+c->r[4]; // 800F7AF8
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 800F7AFC
  cmpu(c,0,c->r[5],0x00000064u); // 800F7B00
  if (crb(c,1)) { goto L_800F7B0C; } // 800F7B04
  c->r[0]=c->r[5]|c->r[5]; // 800F7B08
L_800F7B0C:;
  W8(c->r[7]+0x00000B73u,c->r[0]); // 800F7B0C
  c->r[4]=0u+0x00000000u; // 800F7B10
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F7B14
  W16(c->r[7]+0x00000B74u,c->r[4]); // 800F7B18
  c->r[0]=R8(c->r[7]+0x00000911u); // 800F7B1C
  cmps(c,0,(int32_t)c->r[0],0); // 800F7B20
  if (crb(c,2)) { goto L_800F7B68; } // 800F7B24
  cmpu(c,0,c->r[3],0x00000055u); // 800F7B28
  if (!crb(c,1)) { goto L_800F7B3C; } // 800F7B2C
  W8(c->r[7]+0x00000911u,c->r[4]); // 800F7B30
  W8(c->r[7]+0x00000912u,c->r[4]); // 800F7B34
  return; // 800F7B38
L_800F7B3C:;
  cmpu(c,0,c->r[3],0x00000050u); // 800F7B3C
  if (!crb(c,1)) return; // 800F7B40
  c->r[3]=R8(c->r[7]+0x00000912u); // 800F7B44
  c->r[0]=c->r[3]+0x00000001u; // 800F7B48
  W8(c->r[7]+0x00000912u,c->r[0]); // 800F7B4C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800F7B50
  cmpu(c,0,c->r[0],0x00000014u); // 800F7B54
  if (crb(c,0)) return; // 800F7B58
  W8(c->r[7]+0x00000911u,c->r[4]); // 800F7B5C
  W8(c->r[7]+0x00000912u,c->r[4]); // 800F7B60
  return; // 800F7B64
L_800F7B68:;
  cmpu(c,0,c->r[3],0x0000004Bu); // 800F7B68
  if (!crb(c,0)) { goto L_800F7B80; } // 800F7B6C
  c->r[0]=0u+0x00000001u; // 800F7B70
  W8(c->r[7]+0x00000911u,c->r[0]); // 800F7B74
  W8(c->r[7]+0x00000912u,c->r[4]); // 800F7B78
  return; // 800F7B7C
L_800F7B80:;
  cmpu(c,0,c->r[3],0x00000050u); // 800F7B80
  if (!crb(c,0)) return; // 800F7B84
  c->r[3]=R8(c->r[7]+0x00000912u); // 800F7B88
  c->r[0]=c->r[3]+0x00000001u; // 800F7B8C
  W8(c->r[7]+0x00000912u,c->r[0]); // 800F7B90
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800F7B94
  cmpu(c,0,c->r[0],0x00000001u); // 800F7B98
  if (crb(c,0)) return; // 800F7B9C
  c->r[0]=0u+0x00000001u; // 800F7BA0
  W8(c->r[7]+0x00000911u,c->r[0]); // 800F7BA4
  W8(c->r[7]+0x00000912u,c->r[4]); // 800F7BA8
  return; // 800F7BAC
}

// __wpadFmt2Size
void f_800F7BB0(Ctx* __restrict c) {
  trace_call(0x800F7BB0u);
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800F7BB0
  cmpu(c,0,c->r[0],0x0000000Du); // 800F7BB4
  if (crb(c,1)) { goto L_800F7C0C; } // 800F7BB8
  c->r[3]=0u+0x80280000u; // 800F7BBC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F7BC0
  c->r[3]=c->r[3]+0xFFFFB8E8u; // 800F7BC4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F7BC8
  c->ctr=c->r[3]; // 800F7BCC
  if (true) { switch (c->ctr) { case 0x800F7BD4u: goto L_800F7BD4; case 0x800F7BDCu: goto L_800F7BDC; case 0x800F7BE4u: goto L_800F7BE4; case 0x800F7BECu: goto L_800F7BEC; case 0x800F7BF4u: goto L_800F7BF4; case 0x800F7BFCu: goto L_800F7BFC; case 0x800F7C04u: goto L_800F7C04; case 0x800F7C0Cu: goto L_800F7C0C; default: break; } dispatch(c,c->ctr); return; } // 800F7BD0
L_800F7BD4:;
  c->r[3]=0u+0x00000032u; // 800F7BD4
  return; // 800F7BD8
L_800F7BDC:;
  c->r[3]=0u+0x00000036u; // 800F7BDC
  return; // 800F7BE0
L_800F7BE4:;
  c->r[3]=0u+0x0000002Eu; // 800F7BE4
  return; // 800F7BE8
L_800F7BEC:;
  c->r[3]=0u+0x00000034u; // 800F7BEC
  return; // 800F7BF0
L_800F7BF4:;
  c->r[3]=0u+0x0000004Au; // 800F7BF4
  return; // 800F7BF8
L_800F7BFC:;
  c->r[3]=0u+0x0000005Au; // 800F7BFC
  return; // 800F7C00
L_800F7C04:;
  c->r[3]=0u+0x0000003Eu; // 800F7C04
  return; // 800F7C08
L_800F7C0C:;
  c->r[3]=0u+0x0000002Au; // 800F7C0C
  return; // 800F7C10
}

// __wpadIsControllerDataChanged
void f_800F7C20(Ctx* __restrict c) {
  trace_call(0x800F7C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7C20
  c->r[10]=0u+0x00000000u; // 800F7C24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F7C28
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F7C2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F7C30
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F7C34
  c->r[0]=R8(c->r[4]+0x00000029u); // 800F7C38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F7C3C
  if (crb(c,2)) { goto L_800F7C4C; } // 800F7C40
  cmps(c,0,(int32_t)c->r[0],-7); // 800F7C44
  if (!crb(c,2)) { goto L_800F7F64; } // 800F7C48
L_800F7C4C:;
  c->r[0]=R8(c->r[5]+0x00000029u); // 800F7C4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F7C50
  if (crb(c,2)) { goto L_800F7C60; } // 800F7C54
  cmps(c,0,(int32_t)c->r[0],-7); // 800F7C58
  if (!crb(c,2)) { goto L_800F7F64; } // 800F7C5C
L_800F7C60:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 800F7C60
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 800F7C64
  c->r[7]=R16(c->r[4]+0x00000000u); // 800F7C68
  c->r[0]=R16(c->r[5]+0x00000000u); // 800F7C6C
  c->r[10]=c->r[8]-c->r[9]; cr0(c,c->r[10]); // 800F7C70
  c->r[6]=c->r[0]-c->r[7]; // 800F7C74
  c->r[0]=c->r[7]-c->r[0]; // 800F7C78
  c->r[0]=c->r[6]|c->r[0]; // 800F7C7C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F7C80
  if (!crb(c,0)) { goto L_800F7C8C; } // 800F7C84
  c->r[10]=c->r[9]-c->r[8]; // 800F7C88
L_800F7C8C:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 800F7C8C
  c->r[6]=c->r[10]^0x0000000Cu; // 800F7C90
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 800F7C94
  c->r[7]=sraw(c,c->r[6],1); // 800F7C98
  c->r[6]=c->r[6]&c->r[10]; // 800F7C9C
  c->r[6]=c->r[7]-c->r[6]; // 800F7CA0
  c->r[11]=c->r[8]-c->r[9]; cr0(c,c->r[11]); // 800F7CA4
  c->r[10]=rotl(c->r[6],1)&0x00000001u; // 800F7CA8
  if (!crb(c,0)) { goto L_800F7CB4; } // 800F7CAC
  c->r[11]=c->r[9]-c->r[8]; // 800F7CB0
L_800F7CB4:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 800F7CB4
  c->r[6]=c->r[11]^0x0000000Cu; // 800F7CB8
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 800F7CBC
  c->r[7]=sraw(c,c->r[6],1); // 800F7CC0
  c->r[6]=c->r[6]&c->r[11]; // 800F7CC4
  c->r[6]=c->r[7]-c->r[6]; // 800F7CC8
  c->r[11]=c->r[8]-c->r[9]; cr0(c,c->r[11]); // 800F7CCC
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 800F7CD0
  if (!crb(c,0)) { goto L_800F7CDC; } // 800F7CD4
  c->r[11]=c->r[9]-c->r[8]; // 800F7CD8
L_800F7CDC:;
  c->r[7]=c->r[11]^0x0000000Cu; // 800F7CDC
  c->r[6]=c->r[6]|c->r[10]; // 800F7CE0
  c->r[8]=sraw(c,c->r[7],1); // 800F7CE4
  c->r[7]=c->r[7]&c->r[11]; // 800F7CE8
  c->r[7]=c->r[8]-c->r[7]; // 800F7CEC
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 800F7CF0
  c->r[6]=c->r[7]|c->r[6]; cr0(c,c->r[6]); // 800F7CF4
  if (crb(c,2)) { goto L_800F7D2C; } // 800F7CF8
  c->r[6]=R16(c->r[3]+0x00000AE8u); // 800F7CFC
  c->r[6]=c->r[6]+0x00000001u; // 800F7D00
  W16(c->r[3]+0x00000AE8u,c->r[6]); // 800F7D04
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 800F7D08
  c->r[6]=R16(c->r[13]+0xFFFF8430u); // 800F7D0C
  cmpu(c,0,c->r[7],c->r[6]); // 800F7D10
  if (!crb(c,1)) { goto L_800F7D70; } // 800F7D14
  c->r[6]=0u+0x00000000u; // 800F7D18
  W16(c->r[3]+0x00000AE8u,c->r[6]); // 800F7D1C
  c->r[7]=0u+0x00000001u; // 800F7D20
  W16(c->r[3]+0x00000AF0u,c->r[6]); // 800F7D24
  goto L_800F7D74; // 800F7D28
L_800F7D2C:;
  c->r[6]=R16(c->r[3]+0x00000AF0u); // 800F7D2C
  c->r[7]=R16(c->r[13]+0xFFFF8438u); // 800F7D30
  c->r[8]=c->r[6]+0x00000001u; // 800F7D34
  c->r[6]=divw((int32_t)c->r[8],(int32_t)c->r[7]); // 800F7D38
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 800F7D3C
  c->r[6]=c->r[8]-c->r[6]; // 800F7D40
  W16(c->r[3]+0x00000AF0u,c->r[6]); // 800F7D44
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 800F7D48
  c->r[6]=R16(c->r[13]+0xFFFF8438u); // 800F7D4C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800F7D50
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 800F7D54
  if (!crb(c,2)) { goto L_800F7D70; } // 800F7D58
  c->r[6]=R16(c->r[3]+0x00000AE8u); // 800F7D5C
  cmps(c,0,(int32_t)c->r[6],0); // 800F7D60
  if (crb(c,2)) { goto L_800F7D70; } // 800F7D64
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800F7D68
  W16(c->r[3]+0x00000AE8u,c->r[6]); // 800F7D6C
L_800F7D70:;
  c->r[7]=0u+0x00000000u; // 800F7D70
L_800F7D74:;
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000000Au); // 800F7D74
  c->r[0]=c->r[0]|c->r[7]; // 800F7D78
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000000Au); // 800F7D7C
  c->r[10]=rotl(c->r[0],0)&0x000000FFu; // 800F7D80
  c->r[9]=c->r[6]-c->r[8]; cr0(c,c->r[9]); // 800F7D84
  if (!crb(c,0)) { goto L_800F7D90; } // 800F7D88
  c->r[9]=c->r[8]-c->r[6]; // 800F7D8C
L_800F7D90:;
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000008u); // 800F7D90
  c->r[0]=c->r[9]^0x00000002u; // 800F7D94
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000008u); // 800F7D98
  c->r[6]=sraw(c,c->r[0],1); // 800F7D9C
  c->r[0]=c->r[0]&c->r[9]; // 800F7DA0
  c->r[0]=c->r[6]-c->r[0]; // 800F7DA4
  c->r[11]=c->r[7]-c->r[8]; cr0(c,c->r[11]); // 800F7DA8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F7DAC
  if (!crb(c,0)) { goto L_800F7DB8; } // 800F7DB0
  c->r[11]=c->r[8]-c->r[7]; // 800F7DB4
L_800F7DB8:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000010u); // 800F7DB8
  c->r[6]=c->r[11]^0x00000002u; // 800F7DBC
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000010u); // 800F7DC0
  c->r[7]=sraw(c,c->r[6],1); // 800F7DC4
  c->r[6]=c->r[6]&c->r[11]; // 800F7DC8
  c->r[6]=c->r[7]-c->r[6]; // 800F7DCC
  c->r[12]=c->r[8]-c->r[9]; cr0(c,c->r[12]); // 800F7DD0
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 800F7DD4
  if (!crb(c,0)) { goto L_800F7DE0; } // 800F7DD8
  c->r[12]=c->r[9]-c->r[8]; // 800F7DDC
L_800F7DE0:;
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000012u); // 800F7DE0
  c->r[7]=c->r[12]^0x00000002u; // 800F7DE4
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000012u); // 800F7DE8
  c->r[8]=sraw(c,c->r[7],1); // 800F7DEC
  c->r[7]=c->r[7]&c->r[12]; // 800F7DF0
  c->r[7]=c->r[8]-c->r[7]; // 800F7DF4
  c->r[29]=c->r[9]-c->r[11]; cr0(c,c->r[29]); // 800F7DF8
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 800F7DFC
  if (!crb(c,0)) { goto L_800F7E08; } // 800F7E00
  c->r[29]=c->r[11]-c->r[9]; // 800F7E04
L_800F7E08:;
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000018u); // 800F7E08
  c->r[8]=c->r[29]^0x00000002u; // 800F7E0C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000018u); // 800F7E10
  c->r[9]=sraw(c,c->r[8],1); // 800F7E14
  c->r[8]=c->r[8]&c->r[29]; // 800F7E18
  c->r[8]=c->r[9]-c->r[8]; // 800F7E1C
  c->r[29]=c->r[11]-c->r[12]; cr0(c,c->r[29]); // 800F7E20
  c->r[8]=rotl(c->r[8],1)&0x00000001u; // 800F7E24
  if (!crb(c,0)) { goto L_800F7E30; } // 800F7E28
  c->r[29]=c->r[12]-c->r[11]; // 800F7E2C
L_800F7E30:;
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000001Au); // 800F7E30
  c->r[9]=c->r[29]^0x00000002u; // 800F7E34
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000001Au); // 800F7E38
  c->r[11]=sraw(c,c->r[9],1); // 800F7E3C
  c->r[9]=c->r[9]&c->r[29]; // 800F7E40
  c->r[9]=c->r[11]-c->r[9]; // 800F7E44
  c->r[29]=c->r[12]-c->r[30]; cr0(c,c->r[29]); // 800F7E48
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 800F7E4C
  if (!crb(c,0)) { goto L_800F7E58; } // 800F7E50
  c->r[29]=c->r[30]-c->r[12]; // 800F7E54
L_800F7E58:;
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000020u); // 800F7E58
  c->r[11]=c->r[29]^0x00000002u; // 800F7E5C
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000020u); // 800F7E60
  c->r[12]=sraw(c,c->r[11],1); // 800F7E64
  c->r[11]=c->r[11]&c->r[29]; // 800F7E68
  c->r[11]=c->r[12]-c->r[11]; // 800F7E6C
  c->r[28]=c->r[30]-c->r[31]; cr0(c,c->r[28]); // 800F7E70
  c->r[29]=rotl(c->r[11],1)&0x00000001u; // 800F7E74
  if (!crb(c,0)) { goto L_800F7E80; } // 800F7E78
  c->r[28]=c->r[31]-c->r[30]; // 800F7E7C
L_800F7E80:;
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000022u); // 800F7E80
  c->r[11]=c->r[28]^0x00000002u; // 800F7E84
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000022u); // 800F7E88
  c->r[12]=sraw(c,c->r[11],1); // 800F7E8C
  c->r[11]=c->r[11]&c->r[28]; // 800F7E90
  c->r[11]=c->r[12]-c->r[11]; // 800F7E94
  c->r[28]=c->r[31]-c->r[30]; cr0(c,c->r[28]); // 800F7E98
  c->r[12]=rotl(c->r[11],1)&0x00000001u; // 800F7E9C
  if (!crb(c,0)) { goto L_800F7EA8; } // 800F7EA0
  c->r[28]=c->r[30]-c->r[31]; // 800F7EA4
L_800F7EA8:;
  c->r[6]=c->r[7]|c->r[6]; // 800F7EA8
  c->r[11]=c->r[28]^0x00000002u; // 800F7EAC
  c->r[0]=c->r[8]|c->r[0]; // 800F7EB0
  c->r[6]=c->r[29]|c->r[6]; // 800F7EB4
  c->r[8]=sraw(c,c->r[11],1); // 800F7EB8
  c->r[7]=c->r[11]&c->r[28]; // 800F7EBC
  c->r[0]=c->r[9]|c->r[0]; // 800F7EC0
  c->r[7]=c->r[8]-c->r[7]; // 800F7EC4
  c->r[6]=c->r[12]|c->r[6]; // 800F7EC8
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 800F7ECC
  c->r[0]=c->r[6]|c->r[0]; // 800F7ED0
  c->r[0]=c->r[7]|c->r[0]; cr0(c,c->r[0]); // 800F7ED4
  if (crb(c,2)) { goto L_800F7F10; } // 800F7ED8
  c->r[7]=R16(c->r[3]+0x00000AEAu); // 800F7EDC
  c->r[6]=c->r[13]+0xFFFF8430u; // 800F7EE0
  c->r[0]=c->r[7]+0x00000001u; // 800F7EE4
  W16(c->r[3]+0x00000AEAu,c->r[0]); // 800F7EE8
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800F7EEC
  c->r[0]=R16(c->r[6]+0x00000002u); // 800F7EF0
  cmpu(c,0,c->r[7],c->r[0]); // 800F7EF4
  if (!crb(c,1)) { goto L_800F7F58; } // 800F7EF8
  c->r[0]=0u+0x00000000u; // 800F7EFC
  W16(c->r[3]+0x00000AEAu,c->r[0]); // 800F7F00
  c->r[6]=0u+0x00000001u; // 800F7F04
  W16(c->r[3]+0x00000AF2u,c->r[0]); // 800F7F08
  goto L_800F7F5C; // 800F7F0C
L_800F7F10:;
  c->r[8]=c->r[13]+0xFFFF8438u; // 800F7F10
  c->r[7]=R16(c->r[3]+0x00000AF2u); // 800F7F14
  c->r[6]=R16(c->r[8]+0x00000002u); // 800F7F18
  c->r[7]=c->r[7]+0x00000001u; // 800F7F1C
  c->r[0]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 800F7F20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800F7F24
  c->r[0]=c->r[7]-c->r[0]; // 800F7F28
  W16(c->r[3]+0x00000AF2u,c->r[0]); // 800F7F2C
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800F7F30
  c->r[6]=R16(c->r[8]+0x00000002u); // 800F7F34
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F7F38
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800F7F3C
  if (!crb(c,2)) { goto L_800F7F58; } // 800F7F40
  c->r[6]=R16(c->r[3]+0x00000AEAu); // 800F7F44
  cmps(c,0,(int32_t)c->r[6],0); // 800F7F48
  if (crb(c,2)) { goto L_800F7F58; } // 800F7F4C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F7F50
  W16(c->r[3]+0x00000AEAu,c->r[0]); // 800F7F54
L_800F7F58:;
  c->r[6]=0u+0x00000000u; // 800F7F58
L_800F7F5C:;
  c->r[0]=c->r[10]|c->r[6]; // 800F7F5C
  c->r[10]=rotl(c->r[0],0)&0x000000FFu; // 800F7F60
L_800F7F64:;
  c->r[0]=R8(c->r[4]+0x00000029u); // 800F7F64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F7F68
  if (!crb(c,2)) { goto L_800F891C; } // 800F7F6C
  c->r[0]=R8(c->r[5]+0x00000029u); // 800F7F70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F7F74
  if (!crb(c,2)) { goto L_800F891C; } // 800F7F78
  c->r[6]=R32(c->r[3]+0x000008FCu); // 800F7F7C
  c->r[0]=c->r[6]+0xFFFFFFFDu; // 800F7F80
  cmpu(c,0,c->r[0],0x0000000Du); // 800F7F84
  if (crb(c,1)) { goto L_800F891C; } // 800F7F88
  c->r[6]=0u+0x80280000u; // 800F7F8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F7F90
  c->r[6]=c->r[6]+0xFFFFB920u; // 800F7F94
  c->r[6]=R32(c->r[6]+c->r[0]); // 800F7F98
  c->ctr=c->r[6]; // 800F7F9C
  if (true) { switch (c->ctr) { case 0x800F7FA4u: goto L_800F7FA4; case 0x800F811Cu: goto L_800F811C; case 0x800F82B8u: goto L_800F82B8; case 0x800F8330u: goto L_800F8330; case 0x800F846Cu: goto L_800F846C; case 0x800F84F8u: goto L_800F84F8; case 0x800F891Cu: goto L_800F891C; default: break; } dispatch(c,c->ctr); return; } // 800F7FA0
L_800F7FA4:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Cu); // 800F7FA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Cu); // 800F7FA8
  c->r[9]=c->r[0]-c->r[6]; cr0(c,c->r[9]); // 800F7FAC
  if (!crb(c,0)) { goto L_800F7FB8; } // 800F7FB0
  c->r[9]=c->r[6]-c->r[0]; // 800F7FB4
L_800F7FB8:;
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Au); // 800F7FB8
  c->r[0]=c->r[9]^0x0000000Cu; // 800F7FBC
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Au); // 800F7FC0
  c->r[6]=sraw(c,c->r[0],1); // 800F7FC4
  c->r[0]=c->r[0]&c->r[9]; // 800F7FC8
  c->r[0]=c->r[6]-c->r[0]; // 800F7FCC
  c->r[11]=c->r[7]-c->r[8]; cr0(c,c->r[11]); // 800F7FD0
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 800F7FD4
  if (!crb(c,0)) { goto L_800F7FE0; } // 800F7FD8
  c->r[11]=c->r[8]-c->r[7]; // 800F7FDC
L_800F7FE0:;
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Eu); // 800F7FE0
  c->r[0]=c->r[11]^0x0000000Cu; // 800F7FE4
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Eu); // 800F7FE8
  c->r[6]=sraw(c,c->r[0],1); // 800F7FEC
  c->r[0]=c->r[0]&c->r[11]; // 800F7FF0
  c->r[0]=c->r[6]-c->r[0]; // 800F7FF4
  c->r[11]=c->r[7]-c->r[8]; cr0(c,c->r[11]); // 800F7FF8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F7FFC
  if (!crb(c,0)) { goto L_800F8008; } // 800F8000
  c->r[11]=c->r[8]-c->r[7]; // 800F8004
L_800F8008:;
  c->r[6]=c->r[11]^0x0000000Cu; // 800F8008
  c->r[0]=c->r[0]|c->r[9]; // 800F800C
  c->r[7]=sraw(c,c->r[6],1); // 800F8010
  c->r[6]=c->r[6]&c->r[11]; // 800F8014
  c->r[6]=c->r[7]-c->r[6]; // 800F8018
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 800F801C
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 800F8020
  if (crb(c,2)) { goto L_800F805C; } // 800F8024
  c->r[7]=R16(c->r[3]+0x00000AECu); // 800F8028
  c->r[6]=c->r[13]+0xFFFF8430u; // 800F802C
  c->r[0]=c->r[7]+0x00000001u; // 800F8030
  W16(c->r[3]+0x00000AECu,c->r[0]); // 800F8034
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800F8038
  c->r[0]=R16(c->r[6]+0x00000004u); // 800F803C
  cmpu(c,0,c->r[7],c->r[0]); // 800F8040
  if (!crb(c,1)) { goto L_800F80A4; } // 800F8044
  c->r[0]=0u+0x00000000u; // 800F8048
  W16(c->r[3]+0x00000AECu,c->r[0]); // 800F804C
  c->r[6]=0u+0x00000001u; // 800F8050
  W16(c->r[3]+0x00000AF4u,c->r[0]); // 800F8054
  goto L_800F80A8; // 800F8058
L_800F805C:;
  c->r[8]=c->r[13]+0xFFFF8438u; // 800F805C
  c->r[7]=R16(c->r[3]+0x00000AF4u); // 800F8060
  c->r[6]=R16(c->r[8]+0x00000004u); // 800F8064
  c->r[7]=c->r[7]+0x00000001u; // 800F8068
  c->r[0]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 800F806C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800F8070
  c->r[0]=c->r[7]-c->r[0]; // 800F8074
  W16(c->r[3]+0x00000AF4u,c->r[0]); // 800F8078
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800F807C
  c->r[6]=R16(c->r[8]+0x00000004u); // 800F8080
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F8084
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800F8088
  if (!crb(c,2)) { goto L_800F80A4; } // 800F808C
  c->r[6]=R16(c->r[3]+0x00000AECu); // 800F8090
  cmps(c,0,(int32_t)c->r[6],0); // 800F8094
  if (crb(c,2)) { goto L_800F80A4; } // 800F8098
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F809C
  W16(c->r[3]+0x00000AECu,c->r[0]); // 800F80A0
L_800F80A4:;
  c->r[6]=0u+0x00000000u; // 800F80A4
L_800F80A8:;
  c->r[7]=R8(c->r[5]+0x00000030u); // 800F80A8
  c->r[0]=c->r[10]|c->r[6]; // 800F80AC
  c->r[3]=R8(c->r[4]+0x00000030u); // 800F80B0
  c->r[10]=rotl(c->r[0],0)&0x000000FFu; // 800F80B4
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800F80B8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800F80BC
  c->r[6]=c->r[3]-c->r[7]; cr0(c,c->r[6]); // 800F80C0
  if (!crb(c,0)) { goto L_800F80CC; } // 800F80C4
  c->r[6]=c->r[7]-c->r[3]; // 800F80C8
L_800F80CC:;
  c->r[5]=R8(c->r[5]+0x00000031u); // 800F80CC
  c->r[0]=c->r[6]^0x00000001u; // 800F80D0
  c->r[4]=R8(c->r[4]+0x00000031u); // 800F80D4
  c->r[3]=sraw(c,c->r[0],1); // 800F80D8
  c->r[0]=c->r[0]&c->r[6]; // 800F80DC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800F80E0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800F80E4
  c->r[0]=c->r[3]-c->r[0]; // 800F80E8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F80EC
  c->r[6]=c->r[4]-c->r[5]; cr0(c,c->r[6]); // 800F80F0
  c->r[10]=c->r[10]|c->r[0]; // 800F80F4
  if (!crb(c,0)) { goto L_800F8100; } // 800F80F8
  c->r[6]=c->r[5]-c->r[4]; // 800F80FC
L_800F8100:;
  c->r[0]=c->r[6]^0x00000001u; // 800F8100
  c->r[3]=sraw(c,c->r[0],1); // 800F8104
  c->r[0]=c->r[0]&c->r[6]; // 800F8108
  c->r[0]=c->r[3]-c->r[0]; // 800F810C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F8110
  c->r[10]=c->r[10]|c->r[0]; // 800F8114
  goto L_800F891C; // 800F8118
L_800F811C:;
  c->r[0]=R8(c->r[3]+0x00000906u); // 800F811C
  cmps(c,0,(int32_t)c->r[0],1); // 800F8120
  if (crb(c,2)) { goto L_800F8134; } // 800F8124
  cmps(c,0,(int32_t)c->r[0],3); // 800F8128
  if (crb(c,2)) { goto L_800F8144; } // 800F812C
  goto L_800F8154; // 800F8130
L_800F8134:;
  c->r[28]=0u+0x00000010u; // 800F8134
  c->r[0]=0u+0x00000020u; // 800F8138
  c->r[3]=0u+0x00000008u; // 800F813C
  goto L_800F8160; // 800F8140
L_800F8144:;
  c->r[28]=0u+0x00000004u; // 800F8144
  c->r[0]=0u+0x00000004u; // 800F8148
  c->r[3]=0u+0x00000001u; // 800F814C
  goto L_800F8160; // 800F8150
L_800F8154:;
  c->r[28]=0u+0x00000001u; // 800F8154
  c->r[0]=0u+0x00000001u; // 800F8158
  c->r[3]=0u+0x00000001u; // 800F815C
L_800F8160:;
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Cu); // 800F8160
  c->r[9]=R16(c->r[4]+0x0000002Au); // 800F8164
  c->r[11]=divw((int32_t)c->r[7],(int32_t)c->r[28]); // 800F8168
  c->r[7]=R16(c->r[5]+0x0000002Au); // 800F816C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Cu); // 800F8170
  c->r[8]=c->r[7]-c->r[9]; // 800F8174
  c->r[7]=c->r[9]-c->r[7]; // 800F8178
  c->r[7]=c->r[8]|c->r[7]; // 800F817C
  c->r[8]=divw((int32_t)c->r[6],(int32_t)c->r[28]); // 800F8180
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 800F8184
  c->r[10]=c->r[10]|c->r[6]; // 800F8188
  c->r[12]=c->r[8]-c->r[11]; cr0(c,c->r[12]); // 800F818C
  if (!crb(c,0)) { goto L_800F8198; } // 800F8190
  c->r[12]=c->r[11]-c->r[8]; // 800F8194
L_800F8198:;
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Eu); // 800F8198
  c->r[9]=c->r[12]^0x00000001u; // 800F819C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Eu); // 800F81A0
  c->r[8]=sraw(c,c->r[9],1); // 800F81A4
  c->r[11]=divw((int32_t)c->r[7],(int32_t)c->r[28]); // 800F81A8
  c->r[7]=c->r[9]&c->r[12]; // 800F81AC
  c->r[7]=c->r[8]-c->r[7]; // 800F81B0
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 800F81B4
  c->r[10]=c->r[10]|c->r[7]; // 800F81B8
  c->r[6]=divw((int32_t)c->r[6],(int32_t)c->r[28]); // 800F81BC
  c->r[12]=c->r[6]-c->r[11]; cr0(c,c->r[12]); // 800F81C0
  if (!crb(c,0)) { goto L_800F81CC; } // 800F81C4
  c->r[12]=c->r[11]-c->r[6]; // 800F81C8
L_800F81CC:;
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000030u); // 800F81CC
  c->r[9]=c->r[12]^0x00000001u; // 800F81D0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000030u); // 800F81D4
  c->r[8]=sraw(c,c->r[9],1); // 800F81D8
  c->r[11]=divw((int32_t)c->r[7],(int32_t)c->r[0]); // 800F81DC
  c->r[7]=c->r[9]&c->r[12]; // 800F81E0
  c->r[7]=c->r[8]-c->r[7]; // 800F81E4
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 800F81E8
  c->r[10]=c->r[10]|c->r[7]; // 800F81EC
  c->r[6]=divw((int32_t)c->r[6],(int32_t)c->r[0]); // 800F81F0
  c->r[12]=c->r[6]-c->r[11]; cr0(c,c->r[12]); // 800F81F4
  if (!crb(c,0)) { goto L_800F8200; } // 800F81F8
  c->r[12]=c->r[11]-c->r[6]; // 800F81FC
L_800F8200:;
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000032u); // 800F8200
  c->r[9]=c->r[12]^0x00000001u; // 800F8204
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000032u); // 800F8208
  c->r[8]=sraw(c,c->r[9],1); // 800F820C
  c->r[11]=divw((int32_t)c->r[7],(int32_t)c->r[0]); // 800F8210
  c->r[7]=c->r[9]&c->r[12]; // 800F8214
  c->r[7]=c->r[8]-c->r[7]; // 800F8218
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 800F821C
  c->r[10]=c->r[10]|c->r[7]; // 800F8220
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[0]); // 800F8224
  c->r[12]=c->r[0]-c->r[11]; cr0(c,c->r[12]); // 800F8228
  if (!crb(c,0)) { goto L_800F8234; } // 800F822C
  c->r[12]=c->r[11]-c->r[0]; // 800F8230
L_800F8234:;
  c->r[6]=R8(c->r[5]+0x00000034u); // 800F8234
  c->r[8]=c->r[12]^0x00000001u; // 800F8238
  c->r[0]=R8(c->r[4]+0x00000034u); // 800F823C
  c->r[7]=sraw(c,c->r[8],1); // 800F8240
  c->r[9]=divw((int32_t)c->r[6],(int32_t)c->r[3]); // 800F8244
  c->r[6]=c->r[8]&c->r[12]; // 800F8248
  c->r[6]=c->r[7]-c->r[6]; // 800F824C
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 800F8250
  c->r[10]=c->r[10]|c->r[6]; // 800F8254
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[3]); // 800F8258
  c->r[8]=c->r[0]-c->r[9]; cr0(c,c->r[8]); // 800F825C
  if (!crb(c,0)) { goto L_800F8268; } // 800F8260
  c->r[8]=c->r[9]-c->r[0]; // 800F8264
L_800F8268:;
  c->r[5]=R8(c->r[5]+0x00000035u); // 800F8268
  c->r[7]=c->r[8]^0x00000001u; // 800F826C
  c->r[0]=R8(c->r[4]+0x00000035u); // 800F8270
  c->r[6]=sraw(c,c->r[7],1); // 800F8274
  c->r[5]=divw((int32_t)c->r[5],(int32_t)c->r[3]); // 800F8278
  c->r[4]=c->r[7]&c->r[8]; // 800F827C
  c->r[4]=c->r[6]-c->r[4]; // 800F8280
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 800F8284
  c->r[10]=c->r[10]|c->r[4]; // 800F8288
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[3]); // 800F828C
  c->r[4]=c->r[0]-c->r[5]; cr0(c,c->r[4]); // 800F8290
  if (!crb(c,0)) { goto L_800F829C; } // 800F8294
  c->r[4]=c->r[5]-c->r[0]; // 800F8298
L_800F829C:;
  c->r[0]=c->r[4]^0x00000001u; // 800F829C
  c->r[3]=sraw(c,c->r[0],1); // 800F82A0
  c->r[0]=c->r[0]&c->r[4]; // 800F82A4
  c->r[0]=c->r[3]-c->r[0]; // 800F82A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F82AC
  c->r[10]=c->r[10]|c->r[0]; // 800F82B0
  goto L_800F891C; // 800F82B4
L_800F82B8:;
  c->r[6]=R16(c->r[4]+0x0000002Au); // 800F82B8
  c->r[0]=R16(c->r[5]+0x0000002Au); // 800F82BC
  c->r[8]=R8(c->r[5]+0x0000002Cu); // 800F82C0
  c->r[3]=c->r[0]-c->r[6]; // 800F82C4
  c->r[0]=c->r[6]-c->r[0]; // 800F82C8
  c->r[7]=R8(c->r[4]+0x0000002Cu); // 800F82CC
  c->r[0]=c->r[3]|c->r[0]; // 800F82D0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F82D4
  c->r[6]=c->r[7]-c->r[8]; cr0(c,c->r[6]); // 800F82D8
  c->r[10]=c->r[10]|c->r[0]; // 800F82DC
  if (!crb(c,0)) { goto L_800F82E8; } // 800F82E0
  c->r[6]=c->r[8]-c->r[7]; // 800F82E4
L_800F82E8:;
  c->r[0]=c->r[6]^0x00000001u; // 800F82E8
  c->r[5]=R8(c->r[5]+0x0000002Du); // 800F82EC
  c->r[3]=sraw(c,c->r[0],1); // 800F82F0
  c->r[4]=R8(c->r[4]+0x0000002Du); // 800F82F4
  c->r[0]=c->r[0]&c->r[6]; // 800F82F8
  c->r[0]=c->r[3]-c->r[0]; // 800F82FC
  c->r[6]=c->r[4]-c->r[5]; cr0(c,c->r[6]); // 800F8300
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F8304
  c->r[10]=c->r[10]|c->r[0]; // 800F8308
  if (!crb(c,0)) { goto L_800F8314; } // 800F830C
  c->r[6]=c->r[5]-c->r[4]; // 800F8310
L_800F8314:;
  c->r[0]=c->r[6]^0x00000001u; // 800F8314
  c->r[3]=sraw(c,c->r[0],1); // 800F8318
  c->r[0]=c->r[0]&c->r[6]; // 800F831C
  c->r[0]=c->r[3]-c->r[0]; // 800F8320
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F8324
  c->r[10]=c->r[10]|c->r[0]; // 800F8328
  goto L_800F891C; // 800F832C
L_800F8330:;
  c->r[6]=R16(c->r[5]+0x0000002Cu); // 800F8330
  c->r[0]=R16(c->r[4]+0x0000002Cu); // 800F8334
  c->r[9]=c->r[0]-c->r[6]; cr0(c,c->r[9]); // 800F8338
  if (!crb(c,0)) { goto L_800F8344; } // 800F833C
  c->r[9]=c->r[6]-c->r[0]; // 800F8340
L_800F8344:;
  c->r[8]=R16(c->r[5]+0x0000002Au); // 800F8344
  c->r[0]=c->r[9]^0x00000032u; // 800F8348
  c->r[7]=R16(c->r[4]+0x0000002Au); // 800F834C
  c->r[6]=sraw(c,c->r[0],1); // 800F8350
  c->r[0]=c->r[0]&c->r[9]; // 800F8354
  c->r[0]=c->r[6]-c->r[0]; // 800F8358
  c->r[11]=c->r[7]-c->r[8]; cr0(c,c->r[11]); // 800F835C
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 800F8360
  if (!crb(c,0)) { goto L_800F836C; } // 800F8364
  c->r[11]=c->r[8]-c->r[7]; // 800F8368
L_800F836C:;
  c->r[8]=R16(c->r[5]+0x0000002Eu); // 800F836C
  c->r[0]=c->r[11]^0x00000032u; // 800F8370
  c->r[7]=R16(c->r[4]+0x0000002Eu); // 800F8374
  c->r[6]=sraw(c,c->r[0],1); // 800F8378
  c->r[0]=c->r[0]&c->r[11]; // 800F837C
  c->r[0]=c->r[6]-c->r[0]; // 800F8380
  c->r[12]=c->r[7]-c->r[8]; cr0(c,c->r[12]); // 800F8384
  c->r[11]=rotl(c->r[0],1)&0x00000001u; // 800F8388
  if (!crb(c,0)) { goto L_800F8394; } // 800F838C
  c->r[12]=c->r[8]-c->r[7]; // 800F8390
L_800F8394:;
  c->r[6]=R16(c->r[5]+0x00000030u); // 800F8394
  c->r[0]=c->r[12]^0x00000032u; // 800F8398
  c->r[5]=R16(c->r[4]+0x00000030u); // 800F839C
  c->r[4]=sraw(c,c->r[0],1); // 800F83A0
  c->r[0]=c->r[0]&c->r[12]; // 800F83A4
  c->r[0]=c->r[4]-c->r[0]; // 800F83A8
  c->r[7]=c->r[5]-c->r[6]; cr0(c,c->r[7]); // 800F83AC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F83B0
  if (!crb(c,0)) { goto L_800F83BC; } // 800F83B4
  c->r[7]=c->r[6]-c->r[5]; // 800F83B8
L_800F83BC:;
  c->r[4]=c->r[7]^0x00000032u; // 800F83BC
  c->r[0]=c->r[0]|c->r[11]; // 800F83C0
  c->r[5]=sraw(c,c->r[4],1); // 800F83C4
  c->r[4]=c->r[4]&c->r[7]; // 800F83C8
  c->r[0]=c->r[0]|c->r[9]; // 800F83CC
  c->r[4]=c->r[5]-c->r[4]; // 800F83D0
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 800F83D4
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 800F83D8
  if (crb(c,2)) { goto L_800F8414; } // 800F83DC
  c->r[5]=R16(c->r[3]+0x00000AECu); // 800F83E0
  c->r[4]=c->r[13]+0xFFFF8430u; // 800F83E4
  c->r[0]=c->r[5]+0x00000001u; // 800F83E8
  W16(c->r[3]+0x00000AECu,c->r[0]); // 800F83EC
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800F83F0
  c->r[0]=R16(c->r[4]+0x00000004u); // 800F83F4
  cmpu(c,0,c->r[5],c->r[0]); // 800F83F8
  if (!crb(c,1)) { goto L_800F845C; } // 800F83FC
  c->r[0]=0u+0x00000000u; // 800F8400
  W16(c->r[3]+0x00000AECu,c->r[0]); // 800F8404
  c->r[4]=0u+0x00000001u; // 800F8408
  W16(c->r[3]+0x00000AF4u,c->r[0]); // 800F840C
  goto L_800F8460; // 800F8410
L_800F8414:;
  c->r[6]=c->r[13]+0xFFFF8438u; // 800F8414
  c->r[5]=R16(c->r[3]+0x00000AF4u); // 800F8418
  c->r[4]=R16(c->r[6]+0x00000004u); // 800F841C
  c->r[5]=c->r[5]+0x00000001u; // 800F8420
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[4]); // 800F8424
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800F8428
  c->r[0]=c->r[5]-c->r[0]; // 800F842C
  W16(c->r[3]+0x00000AF4u,c->r[0]); // 800F8430
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800F8434
  c->r[4]=R16(c->r[6]+0x00000004u); // 800F8438
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800F843C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800F8440
  if (!crb(c,2)) { goto L_800F845C; } // 800F8444
  c->r[4]=R16(c->r[3]+0x00000AECu); // 800F8448
  cmps(c,0,(int32_t)c->r[4],0); // 800F844C
  if (crb(c,2)) { goto L_800F845C; } // 800F8450
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800F8454
  W16(c->r[3]+0x00000AECu,c->r[0]); // 800F8458
L_800F845C:;
  c->r[4]=0u+0x00000000u; // 800F845C
L_800F8460:;
  c->r[0]=c->r[10]|c->r[4]; // 800F8460
  c->r[10]=rotl(c->r[0],0)&0x000000FFu; // 800F8464
  goto L_800F891C; // 800F8468
L_800F846C:;
  c->r[6]=R8(c->r[4]+0x00000046u); // 800F846C
  c->r[0]=R8(c->r[5]+0x00000046u); // 800F8470
  c->r[7]=R16(c->r[5]+0x00000044u); // 800F8474
  c->r[3]=c->r[0]-c->r[6]; // 800F8478
  c->r[0]=c->r[6]-c->r[0]; // 800F847C
  c->r[5]=R16(c->r[4]+0x00000044u); // 800F8480
  c->r[0]=c->r[3]|c->r[0]; // 800F8484
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F8488
  c->r[6]=c->r[5]-c->r[7]; cr0(c,c->r[6]); // 800F848C
  c->r[10]=c->r[10]|c->r[0]; // 800F8490
  if (!crb(c,0)) { goto L_800F849C; } // 800F8494
  c->r[6]=c->r[7]-c->r[5]; // 800F8498
L_800F849C:;
  c->r[3]=c->r[6]^0x00000020u; // 800F849C
  c->r[0]=0u+0x00000005u; // 800F84A0
  c->r[5]=sraw(c,c->r[3],1); // 800F84A4
  c->r[3]=c->r[3]&c->r[6]; // 800F84A8
  c->r[3]=c->r[5]-c->r[3]; // 800F84AC
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 800F84B0
  c->r[10]=c->r[10]|c->r[3]; // 800F84B4
  c->ctr=c->r[0]; // 800F84B8
  c->r[0]=c->r[0]|0x00000000u; // 800F84BC
L_800F84C0:;
  c->r[3]=R16(c->r[4]+0x00000036u); // 800F84C0
  c->r[0]=R16(c->r[4]+0x0000002Au); // 800F84C4
  c->r[5]=c->r[0]-c->r[3]; cr0(c,c->r[5]); // 800F84C8
  if (!crb(c,0)) { goto L_800F84D4; } // 800F84CC
  c->r[5]=c->r[3]-c->r[0]; // 800F84D0
L_800F84D4:;
  c->r[0]=c->r[5]^0x00000020u; // 800F84D4
  c->r[4]=c->r[4]+0x00000002u; // 800F84D8
  c->r[3]=sraw(c,c->r[0],1); // 800F84DC
  c->r[0]=c->r[0]&c->r[5]; // 800F84E0
  c->r[0]=c->r[3]-c->r[0]; // 800F84E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F84E8
  c->r[10]=c->r[10]|c->r[0]; // 800F84EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F84C0; } // 800F84F0
  goto L_800F891C; // 800F84F4
L_800F84F8:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000003Au); // 800F84F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000003Au); // 800F84FC
  c->r[9]=c->r[0]-c->r[6]; cr0(c,c->r[9]); // 800F8500
  if (!crb(c,0)) { goto L_800F850C; } // 800F8504
  c->r[9]=c->r[6]-c->r[0]; // 800F8508
L_800F850C:;
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000038u); // 800F850C
  c->r[0]=c->r[9]^0x00000040u; // 800F8510
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000038u); // 800F8514
  c->r[6]=sraw(c,c->r[0],1); // 800F8518
  c->r[0]=c->r[0]&c->r[9]; // 800F851C
  c->r[0]=c->r[6]-c->r[0]; // 800F8520
  c->r[11]=c->r[7]-c->r[8]; cr0(c,c->r[11]); // 800F8524
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 800F8528
  if (!crb(c,0)) { goto L_800F8534; } // 800F852C
  c->r[11]=c->r[8]-c->r[7]; // 800F8530
L_800F8534:;
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000003Cu); // 800F8534
  c->r[0]=c->r[11]^0x00000040u; // 800F8538
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000003Cu); // 800F853C
  c->r[6]=sraw(c,c->r[0],1); // 800F8540
  c->r[0]=c->r[0]&c->r[11]; // 800F8544
  c->r[0]=c->r[6]-c->r[0]; // 800F8548
  c->r[11]=c->r[7]-c->r[8]; cr0(c,c->r[11]); // 800F854C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F8550
  if (!crb(c,0)) { goto L_800F855C; } // 800F8554
  c->r[11]=c->r[8]-c->r[7]; // 800F8558
L_800F855C:;
  c->r[6]=c->r[11]^0x00000040u; // 800F855C
  c->r[0]=c->r[0]|c->r[9]; // 800F8560
  c->r[7]=sraw(c,c->r[6],1); // 800F8564
  c->r[6]=c->r[6]&c->r[11]; // 800F8568
  c->r[6]=c->r[7]-c->r[6]; // 800F856C
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 800F8570
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 800F8574
  if (crb(c,2)) { goto L_800F85B0; } // 800F8578
  c->r[7]=R16(c->r[3]+0x00000AEEu); // 800F857C
  c->r[6]=c->r[13]+0xFFFF8430u; // 800F8580
  c->r[0]=c->r[7]+0x00000001u; // 800F8584
  W16(c->r[3]+0x00000AEEu,c->r[0]); // 800F8588
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800F858C
  c->r[0]=R16(c->r[6]+0x00000006u); // 800F8590
  cmpu(c,0,c->r[7],c->r[0]); // 800F8594
  if (!crb(c,1)) { goto L_800F85F8; } // 800F8598
  c->r[0]=0u+0x00000000u; // 800F859C
  W16(c->r[3]+0x00000AEEu,c->r[0]); // 800F85A0
  c->r[6]=0u+0x00000001u; // 800F85A4
  W16(c->r[3]+0x00000AF6u,c->r[0]); // 800F85A8
  goto L_800F85FC; // 800F85AC
L_800F85B0:;
  c->r[8]=c->r[13]+0xFFFF8438u; // 800F85B0
  c->r[7]=R16(c->r[3]+0x00000AF6u); // 800F85B4
  c->r[6]=R16(c->r[8]+0x00000006u); // 800F85B8
  c->r[7]=c->r[7]+0x00000001u; // 800F85BC
  c->r[0]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 800F85C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800F85C4
  c->r[0]=c->r[7]-c->r[0]; // 800F85C8
  W16(c->r[3]+0x00000AF6u,c->r[0]); // 800F85CC
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800F85D0
  c->r[6]=R16(c->r[8]+0x00000006u); // 800F85D4
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F85D8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800F85DC
  if (!crb(c,2)) { goto L_800F85F8; } // 800F85E0
  c->r[6]=R16(c->r[3]+0x00000AEEu); // 800F85E4
  cmps(c,0,(int32_t)c->r[6],0); // 800F85E8
  if (crb(c,2)) { goto L_800F85F8; } // 800F85EC
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F85F0
  W16(c->r[3]+0x00000AEEu,c->r[0]); // 800F85F4
L_800F85F8:;
  c->r[6]=0u+0x00000000u; // 800F85F8
L_800F85FC:;
  c->r[0]=R8(c->r[4]+0x00000036u); // 800F85FC
  c->r[6]=c->r[10]|c->r[6]; // 800F8600
  c->r[10]=rotl(c->r[6],0)&0x000000FFu; // 800F8604
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F8608
  if (crb(c,2)) { goto L_800F891C; } // 800F860C
  c->r[0]=R8(c->r[5]+0x00000036u); // 800F8610
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F8614
  if (crb(c,2)) { goto L_800F891C; } // 800F8618
  c->r[0]=R8(c->r[3]+0x00000906u); // 800F861C
  cmpu(c,0,c->r[0],0x00000005u); // 800F8620
  if (!crb(c,2)) { goto L_800F87A0; } // 800F8624
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Cu); // 800F8628
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Cu); // 800F862C
  c->r[9]=c->r[0]-c->r[6]; cr0(c,c->r[9]); // 800F8630
  if (!crb(c,0)) { goto L_800F863C; } // 800F8634
  c->r[9]=c->r[6]-c->r[0]; // 800F8638
L_800F863C:;
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Au); // 800F863C
  c->r[0]=c->r[9]^0x0000000Cu; // 800F8640
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Au); // 800F8644
  c->r[6]=sraw(c,c->r[0],1); // 800F8648
  c->r[0]=c->r[0]&c->r[9]; // 800F864C
  c->r[0]=c->r[6]-c->r[0]; // 800F8650
  c->r[11]=c->r[7]-c->r[8]; cr0(c,c->r[11]); // 800F8654
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 800F8658
  if (!crb(c,0)) { goto L_800F8664; } // 800F865C
  c->r[11]=c->r[8]-c->r[7]; // 800F8660
L_800F8664:;
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Eu); // 800F8664
  c->r[0]=c->r[11]^0x0000000Cu; // 800F8668
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Eu); // 800F866C
  c->r[6]=sraw(c,c->r[0],1); // 800F8670
  c->r[0]=c->r[0]&c->r[11]; // 800F8674
  c->r[0]=c->r[6]-c->r[0]; // 800F8678
  c->r[11]=c->r[7]-c->r[8]; cr0(c,c->r[11]); // 800F867C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F8680
  if (!crb(c,0)) { goto L_800F868C; } // 800F8684
  c->r[11]=c->r[8]-c->r[7]; // 800F8688
L_800F868C:;
  c->r[6]=c->r[11]^0x0000000Cu; // 800F868C
  c->r[0]=c->r[0]|c->r[9]; // 800F8690
  c->r[7]=sraw(c,c->r[6],1); // 800F8694
  c->r[6]=c->r[6]&c->r[11]; // 800F8698
  c->r[6]=c->r[7]-c->r[6]; // 800F869C
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 800F86A0
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 800F86A4
  if (crb(c,2)) { goto L_800F86E0; } // 800F86A8
  c->r[7]=R16(c->r[3]+0x00000AECu); // 800F86AC
  c->r[6]=c->r[13]+0xFFFF8430u; // 800F86B0
  c->r[0]=c->r[7]+0x00000001u; // 800F86B4
  W16(c->r[3]+0x00000AECu,c->r[0]); // 800F86B8
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800F86BC
  c->r[0]=R16(c->r[6]+0x00000004u); // 800F86C0
  cmpu(c,0,c->r[7],c->r[0]); // 800F86C4
  if (!crb(c,1)) { goto L_800F8728; } // 800F86C8
  c->r[0]=0u+0x00000000u; // 800F86CC
  W16(c->r[3]+0x00000AECu,c->r[0]); // 800F86D0
  c->r[6]=0u+0x00000001u; // 800F86D4
  W16(c->r[3]+0x00000AF4u,c->r[0]); // 800F86D8
  goto L_800F872C; // 800F86DC
L_800F86E0:;
  c->r[8]=c->r[13]+0xFFFF8438u; // 800F86E0
  c->r[7]=R16(c->r[3]+0x00000AF4u); // 800F86E4
  c->r[6]=R16(c->r[8]+0x00000004u); // 800F86E8
  c->r[7]=c->r[7]+0x00000001u; // 800F86EC
  c->r[0]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 800F86F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800F86F4
  c->r[0]=c->r[7]-c->r[0]; // 800F86F8
  W16(c->r[3]+0x00000AF4u,c->r[0]); // 800F86FC
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800F8700
  c->r[6]=R16(c->r[8]+0x00000004u); // 800F8704
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F8708
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800F870C
  if (!crb(c,2)) { goto L_800F8728; } // 800F8710
  c->r[6]=R16(c->r[3]+0x00000AECu); // 800F8714
  cmps(c,0,(int32_t)c->r[6],0); // 800F8718
  if (crb(c,2)) { goto L_800F8728; } // 800F871C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F8720
  W16(c->r[3]+0x00000AECu,c->r[0]); // 800F8724
L_800F8728:;
  c->r[6]=0u+0x00000000u; // 800F8728
L_800F872C:;
  c->r[7]=R8(c->r[5]+0x00000030u); // 800F872C
  c->r[0]=c->r[10]|c->r[6]; // 800F8730
  c->r[3]=R8(c->r[4]+0x00000030u); // 800F8734
  c->r[10]=rotl(c->r[0],0)&0x000000FFu; // 800F8738
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800F873C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800F8740
  c->r[6]=c->r[3]-c->r[7]; cr0(c,c->r[6]); // 800F8744
  if (!crb(c,0)) { goto L_800F8750; } // 800F8748
  c->r[6]=c->r[7]-c->r[3]; // 800F874C
L_800F8750:;
  c->r[5]=R8(c->r[5]+0x00000031u); // 800F8750
  c->r[0]=c->r[6]^0x00000001u; // 800F8754
  c->r[4]=R8(c->r[4]+0x00000031u); // 800F8758
  c->r[3]=sraw(c,c->r[0],1); // 800F875C
  c->r[0]=c->r[0]&c->r[6]; // 800F8760
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800F8764
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800F8768
  c->r[0]=c->r[3]-c->r[0]; // 800F876C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F8770
  c->r[6]=c->r[4]-c->r[5]; cr0(c,c->r[6]); // 800F8774
  c->r[10]=c->r[10]|c->r[0]; // 800F8778
  if (!crb(c,0)) { goto L_800F8784; } // 800F877C
  c->r[6]=c->r[5]-c->r[4]; // 800F8780
L_800F8784:;
  c->r[0]=c->r[6]^0x00000001u; // 800F8784
  c->r[3]=sraw(c,c->r[0],1); // 800F8788
  c->r[0]=c->r[0]&c->r[6]; // 800F878C
  c->r[0]=c->r[3]-c->r[0]; // 800F8790
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F8794
  c->r[10]=c->r[10]|c->r[0]; // 800F8798
  goto L_800F891C; // 800F879C
L_800F87A0:;
  cmpu(c,0,c->r[0],0x00000007u); // 800F87A0
  if (!crb(c,2)) { goto L_800F891C; } // 800F87A4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Cu); // 800F87A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Cu); // 800F87AC
  c->r[3]=sraw(c,c->r[3],4); // 800F87B0
  c->r[7]=R16(c->r[4]+0x0000002Au); // 800F87B4
  c->r[9]=addc(c,c->r[3],0,c->xer_ca); // 800F87B8
  c->r[6]=R16(c->r[5]+0x0000002Au); // 800F87BC
  c->r[0]=sraw(c,c->r[0],4); // 800F87C0
  c->r[8]=addc(c,c->r[0],0,c->xer_ca); // 800F87C4
  c->r[3]=c->r[6]-c->r[7]; // 800F87C8
  c->r[0]=c->r[7]-c->r[6]; // 800F87CC
  c->r[0]=c->r[3]|c->r[0]; // 800F87D0
  c->r[11]=c->r[8]-c->r[9]; cr0(c,c->r[11]); // 800F87D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F87D8
  c->r[10]=c->r[10]|c->r[0]; // 800F87DC
  if (!crb(c,0)) { goto L_800F87E8; } // 800F87E0
  c->r[11]=c->r[9]-c->r[8]; // 800F87E4
L_800F87E8:;
  c->r[6]=c->r[11]^0x00000001u; // 800F87E8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Eu); // 800F87EC
  c->r[7]=sraw(c,c->r[6],1); // 800F87F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Eu); // 800F87F4
  c->r[3]=sraw(c,c->r[3],4); // 800F87F8
  c->r[6]=c->r[6]&c->r[11]; // 800F87FC
  c->r[8]=addc(c,c->r[3],0,c->xer_ca); // 800F8800
  c->r[0]=sraw(c,c->r[0],4); // 800F8804
  c->r[3]=c->r[7]-c->r[6]; // 800F8808
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 800F880C
  c->r[9]=c->r[6]-c->r[8]; cr0(c,c->r[9]); // 800F8810
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800F8814
  c->r[10]=c->r[10]|c->r[0]; // 800F8818
  if (!crb(c,0)) { goto L_800F8824; } // 800F881C
  c->r[9]=c->r[8]-c->r[6]; // 800F8820
L_800F8824:;
  c->r[6]=c->r[9]^0x00000001u; // 800F8824
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000030u); // 800F8828
  c->r[7]=sraw(c,c->r[6],1); // 800F882C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000030u); // 800F8830
  c->r[3]=sraw(c,c->r[3],5); // 800F8834
  c->r[6]=c->r[6]&c->r[9]; // 800F8838
  c->r[8]=addc(c,c->r[3],0,c->xer_ca); // 800F883C
  c->r[0]=sraw(c,c->r[0],5); // 800F8840
  c->r[3]=c->r[7]-c->r[6]; // 800F8844
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 800F8848
  c->r[9]=c->r[6]-c->r[8]; cr0(c,c->r[9]); // 800F884C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800F8850
  c->r[10]=c->r[10]|c->r[0]; // 800F8854
  if (!crb(c,0)) { goto L_800F8860; } // 800F8858
  c->r[9]=c->r[8]-c->r[6]; // 800F885C
L_800F8860:;
  c->r[6]=c->r[9]^0x00000001u; // 800F8860
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000032u); // 800F8864
  c->r[7]=sraw(c,c->r[6],1); // 800F8868
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000032u); // 800F886C
  c->r[3]=sraw(c,c->r[3],5); // 800F8870
  c->r[6]=c->r[6]&c->r[9]; // 800F8874
  c->r[8]=addc(c,c->r[3],0,c->xer_ca); // 800F8878
  c->r[0]=sraw(c,c->r[0],5); // 800F887C
  c->r[3]=c->r[7]-c->r[6]; // 800F8880
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 800F8884
  c->r[9]=c->r[6]-c->r[8]; cr0(c,c->r[9]); // 800F8888
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800F888C
  c->r[10]=c->r[10]|c->r[0]; // 800F8890
  if (!crb(c,0)) { goto L_800F889C; } // 800F8894
  c->r[9]=c->r[8]-c->r[6]; // 800F8898
L_800F889C:;
  c->r[3]=R8(c->r[5]+0x00000034u); // 800F889C
  c->r[7]=c->r[9]^0x00000001u; // 800F88A0
  c->r[0]=R8(c->r[4]+0x00000034u); // 800F88A4
  c->r[6]=sraw(c,c->r[7],1); // 800F88A8
  c->r[8]=rotl(c->r[3],29)&0x1FFFFFFFu; // 800F88AC
  c->r[3]=c->r[7]&c->r[9]; // 800F88B0
  c->r[7]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800F88B4
  c->r[0]=c->r[6]-c->r[3]; // 800F88B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F88BC
  c->r[9]=c->r[7]-c->r[8]; cr0(c,c->r[9]); // 800F88C0
  c->r[10]=c->r[10]|c->r[0]; // 800F88C4
  if (!crb(c,0)) { goto L_800F88D0; } // 800F88C8
  c->r[9]=c->r[8]-c->r[7]; // 800F88CC
L_800F88D0:;
  c->r[3]=R8(c->r[5]+0x00000035u); // 800F88D0
  c->r[5]=c->r[9]^0x00000001u; // 800F88D4
  c->r[0]=R8(c->r[4]+0x00000035u); // 800F88D8
  c->r[4]=sraw(c,c->r[5],1); // 800F88DC
  c->r[6]=rotl(c->r[3],29)&0x1FFFFFFFu; // 800F88E0
  c->r[3]=c->r[5]&c->r[9]; // 800F88E4
  c->r[5]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800F88E8
  c->r[0]=c->r[4]-c->r[3]; // 800F88EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F88F0
  c->r[7]=c->r[5]-c->r[6]; cr0(c,c->r[7]); // 800F88F4
  c->r[10]=c->r[10]|c->r[0]; // 800F88F8
  if (!crb(c,0)) { goto L_800F8904; } // 800F88FC
  c->r[7]=c->r[6]-c->r[5]; // 800F8900
L_800F8904:;
  c->r[0]=c->r[7]^0x00000001u; // 800F8904
  c->r[3]=sraw(c,c->r[0],1); // 800F8908
  c->r[0]=c->r[0]&c->r[7]; // 800F890C
  c->r[0]=c->r[3]-c->r[0]; // 800F8910
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F8914
  c->r[10]=c->r[10]|c->r[0]; // 800F8918
L_800F891C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F891C
  c->r[3]=rotl(c->r[10],0)&0x000000FFu; // 800F8920
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F8924
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F8928
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F892C
  c->r[1]=c->r[1]+0x00000020u; // 800F8930
  return; // 800F8934
}

// __wpadCalcRecalibration
void f_800F8940(Ctx* __restrict c) {
  trace_call(0x800F8940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8940
  c->r[0]=c->lr; // 800F8944
  c->r[5]=0u+0x802E0000u; // 800F8948
  c->r[6]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F894C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8950
  c->r[5]=c->r[5]+0xFFFFB290u; // 800F8954
  c->r[8]=0u+0x00000000u; // 800F8958
  c->r[9]=0u+0x00000000u; // 800F895C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8960
  c->r[0]=R8(c->r[4]+0x00000029u); // 800F8964
  c->r[7]=R32(c->r[5]+c->r[6]); // 800F8968
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F896C
  if (crb(c,2)) { goto L_800F897C; } // 800F8970
  cmps(c,0,(int32_t)c->r[0],-7); // 800F8974
  if (!crb(c,2)) { goto L_800F8A14; } // 800F8978
L_800F897C:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 800F897C
  cmpu(c,0,c->r[0],0x00001C10u); // 800F8980
  if (!crb(c,2)) { goto L_800F89A4; } // 800F8984
  c->r[3]=R32(c->r[7]+0x000008FCu); // 800F8988
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800F898C
  cmpu(c,0,c->r[0],0x00000005u); // 800F8990
  if (!crb(c,1)) { goto L_800F89A0; } // 800F8994
  cmpu(c,0,c->r[3],0x00000010u); // 800F8998
  if (!crb(c,2)) { goto L_800F89A4; } // 800F899C
L_800F89A0:;
  c->r[8]=0u+0x00000001u; // 800F89A0
L_800F89A4:;
  c->r[0]=R8(c->r[7]+0x00000905u); // 800F89A4
  cmpu(c,0,c->r[0],0x00000002u); // 800F89A8
  if (!crb(c,2)) { goto L_800F89B4; } // 800F89AC
  c->r[9]=R16(c->r[4]+0x0000002Au); // 800F89B0
L_800F89B4:;
  cmpu(c,0,c->r[0],0x00000007u); // 800F89B4
  if (!crb(c,2)) { goto L_800F89C0; } // 800F89B8
  c->r[9]=R16(c->r[4]+0x0000002Au); // 800F89BC
L_800F89C0:;
  cmpu(c,0,c->r[9],0x00001450u); // 800F89C0
  if (!crb(c,2)) { goto L_800F89E4; } // 800F89C4
  c->r[3]=R32(c->r[7]+0x000008FCu); // 800F89C8
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 800F89CC
  cmpu(c,0,c->r[0],0x00000002u); // 800F89D0
  if (!crb(c,1)) { goto L_800F89E0; } // 800F89D4
  cmpu(c,0,c->r[3],0x00000010u); // 800F89D8
  if (!crb(c,2)) { goto L_800F89E4; } // 800F89DC
L_800F89E0:;
  c->r[8]=0u+0x00000001u; // 800F89E0
L_800F89E4:;
  c->r[0]=R16(c->r[7]+0x00000B02u); // 800F89E4
  c->r[0]=c->r[0]+c->r[8]; // 800F89E8
  W16(c->r[7]+0x00000B02u,c->r[0]); // 800F89EC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800F89F0
  cmpu(c,0,c->r[0],0x00000258u); // 800F89F4
  if (!crb(c,1)) { goto L_800F8A14; } // 800F89F8
  c->r[31]=R32(c->r[5]+c->r[6]); // 800F89FC
  c->lr=0x800F8A04u; f_800B087C(c); // 800F8A00
  c->r[0]=0u+0x00000000u; // 800F8A04
  W8(c->r[31]+0x00000B01u,c->r[0]); // 800F8A08
  W16(c->r[31]+0x00000B02u,c->r[0]); // 800F8A0C
  c->lr=0x800F8A14u; f_800B08A4(c); // 800F8A10
L_800F8A14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8A18
  c->lr=c->r[0]; // 800F8A1C
  c->r[1]=c->r[1]+0x00000010u; // 800F8A20
  return; // 800F8A24
}

// __wpadCalcControllerData
void f_800F8A30(Ctx* __restrict c) {
  trace_call(0x800F8A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8A30
  c->r[0]=c->lr; // 800F8A34
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F8A38
  c->r[11]=c->r[1]+0x00000030u; // 800F8A3C
  c->lr=0x800F8A44u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F8A40
  c->r[0]=R8(c->r[13]+0xFFFF930Cu); // 800F8A44
  c->r[31]=0u+0x802E0000u; // 800F8A48
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F8A4C
  c->r[25]=c->r[3]|c->r[3]; // 800F8A50
  c->r[31]=c->r[31]+0xFFFFB290u; // 800F8A54
  cmpu(c,0,c->r[0],0x00000005u); // 800F8A58
  c->r[29]=R32(c->r[31]+c->r[30]); // 800F8A5C
  c->r[28]=0u+0x00000000u; // 800F8A60
  if (!crb(c,2)) { goto L_800F8BAC; } // 800F8A64
  c->lr=0x800F8A6Cu; f_800B087C(c); // 800F8A68
  c->r[0]=R8(c->r[29]+0x0000090Cu); // 800F8A6C
  c->r[0]=cntlz(c->r[0]); // 800F8A70
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800F8A74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800F8A78
  c->r[4]=c->r[29]+c->r[0]; // 800F8A7C
  c->r[27]=c->r[4]+0x000000A0u; // 800F8A80
  c->lr=0x800F8A88u; f_800B08A4(c); // 800F8A84
  c->r[3]=c->r[29]|c->r[29]; // 800F8A88
  c->r[4]=c->r[27]|c->r[27]; // 800F8A8C
  c->r[5]=c->r[29]+0x00000040u; // 800F8A90
  c->lr=0x800F8A98u; f_800F7C20(c); // 800F8A94
  c->r[26]=c->r[3]|c->r[3]; // 800F8A98
  c->r[3]=c->r[25]|c->r[25]; // 800F8A9C
  c->r[4]=c->r[27]|c->r[27]; // 800F8AA0
  c->lr=0x800F8AA8u; f_800F8940(c); // 800F8AA4
  cmps(c,0,(int32_t)c->r[26],0); // 800F8AA8
  if (crb(c,2)) { goto L_800F8AD4; } // 800F8AAC
  c->r[28]=0u+0x00000001u; // 800F8AB0
  c->lr=0x800F8AB8u; f_800B4914(c); // 800F8AB4
  W32(c->r[29]+0x00000AE4u,c->r[4]); // 800F8AB8
  c->r[4]=c->r[27]|c->r[27]; // 800F8ABC
  c->r[5]=0u+0x00000060u; // 800F8AC0
  W32(c->r[29]+0x00000AE0u,c->r[3]); // 800F8AC4
  c->r[3]=c->r[29]+0x00000040u; // 800F8AC8
  c->lr=0x800F8AD0u; f_80004338(c); // 800F8ACC
  goto L_800F8B7C; // 800F8AD0
L_800F8AD4:;
  c->r[0]=R8(c->r[13]+0xFFFF9356u); // 800F8AD4
  cmps(c,0,(int32_t)c->r[0],0); // 800F8AD8
  if (crb(c,2)) { goto L_800F8B7C; } // 800F8ADC
  c->lr=0x800F8AE4u; f_800B4914(c); // 800F8AE0
  c->r[6]=R32(c->r[29]+0x00000AE4u); // 800F8AE4
  c->r[5]=0u+0x80000000u; // 800F8AE8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800F8AEC
  c->r[5]=0u+0x00000000u; // 800F8AF0
  c->r[4]=addc(c,~c->r[6],c->r[4],1); // 800F8AF4
  c->r[7]=R32(c->r[29]+0x00000AE0u); // 800F8AF8
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F8AFC
  c->r[3]=addc(c,~c->r[7],c->r[3],c->xer_ca); // 800F8B00
  c->lr=0x800F8B08u; f_800D4B64(c); // 800F8B04
  c->r[0]=R8(c->r[13]+0xFFFF9356u); // 800F8B08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800F8B0C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800F8B10
  if (!crb(c,1)) { goto L_800F8B7C; } // 800F8B14
  c->r[26]=R32(c->r[31]+c->r[30]); // 800F8B18
  c->lr=0x800F8B20u; f_800B087C(c); // 800F8B1C
  c->r[26]=R32(c->r[26]+0x00000900u); // 800F8B20
  c->lr=0x800F8B28u; f_800B08A4(c); // 800F8B24
  cmps(c,0,(int32_t)c->r[26],-1); // 800F8B28
  if (crb(c,2)) { goto L_800F8B7C; } // 800F8B2C
  c->r[26]=R32(c->r[31]+c->r[30]); // 800F8B30
  c->lr=0x800F8B38u; f_800B087C(c); // 800F8B34
  c->r[26]=R8(c->r[26]+0x00000907u); // 800F8B38
  c->lr=0x800F8B40u; f_800B08A4(c); // 800F8B3C
  c->r[3]=c->r[26]|c->r[26]; // 800F8B40
  c->lr=0x800F8B48u; f_8010E704(c); // 800F8B44
  cmps(c,0,(int32_t)c->r[3],0); // 800F8B48
  if (crb(c,2)) { goto L_800F8B64; } // 800F8B4C
  c->r[4]=c->r[3]|c->r[3]; // 800F8B50
  c->r[3]=c->r[1]+0x00000008u; // 800F8B54
  c->r[5]=0u+0x00000006u; // 800F8B58
  c->lr=0x800F8B60u; f_80004338(c); // 800F8B5C
  goto L_800F8B74; // 800F8B60
L_800F8B64:;
  c->r[3]=c->r[1]+0x00000008u; // 800F8B64
  c->r[4]=0u+0x00000000u; // 800F8B68
  c->r[5]=0u+0x00000006u; // 800F8B6C
  c->lr=0x800F8B74u; f_80004688(c); // 800F8B70
L_800F8B74:;
  c->r[3]=c->r[1]+0x00000008u; // 800F8B74
  c->lr=0x800F8B7Cu; f_80119FD8(c); // 800F8B78
L_800F8B7C:;
  c->r[0]=R8(c->r[29]+0x00000069u); // 800F8B7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F8B80
  if (crb(c,2)) { goto L_800F8BA0; } // 800F8B84
  cmps(c,0,(int32_t)c->r[0],-7); // 800F8B88
  if (crb(c,2)) { goto L_800F8BA0; } // 800F8B8C
  c->r[4]=c->r[27]|c->r[27]; // 800F8B90
  c->r[3]=c->r[29]+0x00000040u; // 800F8B94
  c->r[5]=0u+0x00000060u; // 800F8B98
  c->lr=0x800F8BA0u; f_80004338(c); // 800F8B9C
L_800F8BA0:;
  cmps(c,0,(int32_t)c->r[28],0); // 800F8BA0
  if (crb(c,2)) { goto L_800F8BAC; } // 800F8BA4
  c->lr=0x800F8BACu; f_800C4748(c); // 800F8BA8
L_800F8BAC:;
  c->r[11]=c->r[1]+0x00000030u; // 800F8BAC
  c->lr=0x800F8BB4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F8BB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F8BB4
  c->lr=c->r[0]; // 800F8BB8
  c->r[1]=c->r[1]+0x00000030u; // 800F8BBC
  return; // 800F8BC0
}

// __wpadManageHandler
void f_800F8BD0(Ctx* __restrict c) {
  trace_call(0x800F8BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFE20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8BD0
  c->r[0]=c->lr; // 800F8BD4
  W32(c->r[1]+0x000001E4u,c->r[0]); // 800F8BD8
  c->r[11]=c->r[1]+0x000001E0u; // 800F8BDC
  c->lr=0x800F8BE4u; f_800D49E0(c); // 800F8BE0
  c->lr=0x800F8BE8u; f_8010BD1C(c); // 800F8BE4
  cmps(c,0,(int32_t)c->r[3],3); // 800F8BE8
  if (crb(c,2)) { goto L_800F8C30; } // 800F8BEC
  cmps(c,0,(int32_t)c->r[3],2); // 800F8BF0
  if (!crb(c,2)) { goto L_800F9600; } // 800F8BF4
  c->r[0]=R32(c->r[13]+0xFFFF9344u); // 800F8BF8
  cmps(c,0,(int32_t)c->r[0],0); // 800F8BFC
  if (!crb(c,2)) { goto L_800F9600; } // 800F8C00
  c->r[4]=0u+0x00000001u; // 800F8C04
  c->r[0]=0u+0x00000032u; // 800F8C08
  c->r[3]=0u+0x80100000u; // 800F8C0C
  W32(c->r[13]+0xFFFF9344u,c->r[4]); // 800F8C10
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 800F8C14
  W32(c->r[13]+0xFFFF931Cu,c->r[0]); // 800F8C18
  c->lr=0x800F8C20u; f_8010C228(c); // 800F8C1C
  c->r[3]=0u+0x80100000u; // 800F8C20
  c->r[3]=c->r[3]+0xFFFFAD70u; // 800F8C24
  c->lr=0x800F8C2Cu; f_8010C1CC(c); // 800F8C28
  goto L_800F9600; // 800F8C2C
L_800F8C30:;
  c->r[14]=R32(c->r[13]+0xFFFF842Cu); // 800F8C30
  cmps(c,0,(int32_t)c->r[14],0); // 800F8C34
  if (crb(c,0)) { goto L_800F8C74; } // 800F8C38
  c->r[3]=R32(c->r[13]+0xFFFF931Cu); // 800F8C3C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F8C40
  W32(c->r[13]+0xFFFF931Cu,c->r[0]); // 800F8C44
  if (crb(c,1)) { goto L_800F8C6C; } // 800F8C48
  c->lr=0x800F8C50u; f_801155A4(c); // 800F8C4C
  c->r[3]=0u+0x802E0000u; // 800F8C50
  c->r[3]=c->r[3]+0xFFFFB260u; // 800F8C54
  c->lr=0x800F8C5Cu; f_800AAFB4(c); // 800F8C58
  c->r[3]=0u+0x00000000u; // 800F8C5C
  c->lr=0x800F8C64u; f_8010C1CC(c); // 800F8C60
  c->r[3]=c->r[14]|c->r[14]; // 800F8C64
  c->lr=0x800F8C6Cu; f_8010BAFC(c); // 800F8C68
L_800F8C6C:;
  c->r[0]=0u+0x00000001u; // 800F8C6C
  goto L_800F8C78; // 800F8C70
L_800F8C74:;
  c->r[0]=0u+0x00000000u; // 800F8C74
L_800F8C78:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F8C78
  if (!crb(c,2)) { goto L_800F9600; } // 800F8C7C
  c->r[0]=R16(c->r[13]+0xFFFF930Eu); // 800F8C80
  cmpu(c,0,c->r[0],0x0000EA60u); // 800F8C84
  if (!crb(c,2)) { goto L_800F8CCC; } // 800F8C88
  c->r[14]=0u+0x80000000u; // 800F8C8C
  c->r[4]=0u+0x00000001u; // 800F8C90
  c->r[3]=c->r[14]+0x000031A2u; // 800F8C94
  c->lr=0x800F8C9Cu; f_800ABD00(c); // 800F8C98
  c->r[3]=R8(c->r[13]+0xFFFF934Cu); // 800F8C9C
  c->r[0]=R8(c->r[14]+0x000031A2u); // 800F8CA0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800F8CA4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800F8CA8
  if (crb(c,2)) { goto L_800F8CCC; } // 800F8CAC
  c->lr=0x800F8CB4u; f_800B087C(c); // 800F8CB0
  c->r[0]=R8(c->r[14]+0x000031A2u); // 800F8CB4
  W8(c->r[13]+0xFFFF934Cu,c->r[0]); // 800F8CB8
  c->lr=0x800F8CC0u; f_800B08A4(c); // 800F8CBC
  c->r[0]=R8(c->r[13]+0xFFFF934Cu); // 800F8CC0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F8CC4
  c->lr=0x800F8CCCu; f_8010C0E0(c); // 800F8CC8
L_800F8CCC:;
  c->lr=0x800F8CD0u; f_800F4A50(c); // 800F8CCC
  cmps(c,0,(int32_t)c->r[3],0); // 800F8CD0
  if (!crb(c,2)) { goto L_800F8D6C; } // 800F8CD4
  c->lr=0x800F8CDCu; f_8010E920(c); // 800F8CD8
  c->r[0]=R8(c->r[13]+0xFFFF934Eu); // 800F8CDC
  cmps(c,0,(int32_t)c->r[0],0); // 800F8CE0
  if (crb(c,2)) { goto L_800F8D6C; } // 800F8CE4
  c->lr=0x800F8CECu; f_800F6624(c); // 800F8CE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F8CEC
  cmpu(c,0,c->r[0],0x00000001u); // 800F8CF0
  if (!crb(c,0)) { goto L_800F8CFC; } // 800F8CF4
  c->r[0]=0u+0x00000001u; // 800F8CF8
L_800F8CFC:;
  cmpu(c,0,c->r[0],0x00000005u); // 800F8CFC
  if (!crb(c,1)) { goto L_800F8D08; } // 800F8D00
  c->r[0]=0u+0x00000005u; // 800F8D04
L_800F8D08:;
  W8(c->r[13]+0xFFFF9355u,c->r[0]); // 800F8D08
  c->lr=0x800F8D10u; f_800F66E8(c); // 800F8D0C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800F8D10
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F8D14
  c->r[0]=cntlz(c->r[0]); // 800F8D18
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800F8D1C
  W8(c->r[13]+0xFFFF9354u,c->r[0]); // 800F8D20
  c->lr=0x800F8D28u; f_800F668C(c); // 800F8D24
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800F8D28
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F8D2C
  c->r[0]=cntlz(c->r[0]); // 800F8D30
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F8D34
  W32(c->r[13]+0xFFFF9350u,c->r[0]); // 800F8D38
  c->lr=0x800F8D40u; f_800F673C(c); // 800F8D3C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800F8D40
  c->r[4]=c->r[3]|c->r[3]; // 800F8D44
  if (!crb(c,2)) { goto L_800F8D50; } // 800F8D48
  c->r[4]=0u+0x00000000u; // 800F8D4C
L_800F8D50:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F8D50
  cmpu(c,0,c->r[0],0x0000007Fu); // 800F8D54
  if (crb(c,0)) { goto L_800F8D60; } // 800F8D58
  c->r[4]=0u+0x0000007Fu; // 800F8D5C
L_800F8D60:;
  c->r[0]=0u+0x00000000u; // 800F8D60
  W8(c->r[13]+0xFFFF934Fu,c->r[4]); // 800F8D64
  W8(c->r[13]+0xFFFF934Eu,c->r[0]); // 800F8D68
L_800F8D6C:;
  c->r[24]=0u+0x00000000u; // 800F8D6C
  c->r[3]=0u+0x802E0000u; // 800F8D70
  c->r[30]=c->r[24]|c->r[24]; // 800F8D74
  c->r[23]=0u+0x00000000u; // 800F8D78
  c->r[31]=c->r[24]|c->r[24]; // 800F8D7C
  c->r[18]=c->r[24]|c->r[24]; // 800F8D80
  c->r[21]=c->r[24]|c->r[24]; // 800F8D84
  c->r[19]=c->r[24]|c->r[24]; // 800F8D88
  c->r[22]=c->r[24]|c->r[24]; // 800F8D8C
  c->r[27]=c->r[3]+0xFFFFB290u; // 800F8D90
  c->r[14]=0u+0x80000000u; // 800F8D94
  c->r[29]=0u+0x00000001u; // 800F8D98
  c->r[28]=c->r[13]+0xFFFF9310u; // 800F8D9C
  c->r[20]=c->r[13]+0xFFFF9314u; // 800F8DA0
L_800F8DA4:;
  c->r[25]=R32(c->r[27]+c->r[23]); // 800F8DA4
  c->r[0]=R32(c->r[25]+0x0000091Cu); // 800F8DA8
  cmps(c,0,(int32_t)c->r[0],0); // 800F8DAC
  if (crb(c,2)) { goto L_800F9514; } // 800F8DB0
  c->r[0]=R8(c->r[28]+c->r[24]); // 800F8DB4
  c->r[26]=0u+0x00000000u; // 800F8DB8
  cmpu(c,0,c->r[0],0x00000005u); // 800F8DBC
  if (!crb(c,2)) { goto L_800F90D4; } // 800F8DC0
  c->lr=0x800F8DC8u; f_800B087C(c); // 800F8DC4
  c->r[0]=R8(c->r[25]+0x000005ECu); // 800F8DC8
  c->r[5]=R8(c->r[25]+0x000005EDu); // 800F8DCC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F8DD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800F8DD4
  c->r[0]=c->r[0]-c->r[4]; // 800F8DD8
  c->r[15]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[15]); // 800F8DDC
  if (!crb(c,0)) { goto L_800F8DF0; } // 800F8DE0
  c->r[0]=R32(c->r[25]+0x000005F4u); // 800F8DE4
  c->r[0]=c->r[15]+c->r[0]; // 800F8DE8
  c->r[15]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F8DEC
L_800F8DF0:;
  c->lr=0x800F8DF4u; f_800B08A4(c); // 800F8DF0
  cmps(c,0,(int32_t)c->r[15],0); // 800F8DF4
  if (!crb(c,2)) { goto L_800F8E04; } // 800F8DF8
  c->r[0]=0u+0x00000000u; // 800F8DFC
  goto L_800F8E38; // 800F8E00
L_800F8E04:;
  c->lr=0x800F8E08u; f_800B087C(c); // 800F8E04
  c->r[0]=R8(c->r[25]+0x000005ECu); // 800F8E08
  c->r[15]=c->r[3]|c->r[3]; // 800F8E0C
  c->r[4]=R32(c->r[25]+0x000005F0u); // 800F8E10
  c->r[3]=c->r[1]+0x00000108u; // 800F8E14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F8E18
  c->r[5]=0u+0x00000030u; // 800F8E1C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800F8E20
  c->r[4]=c->r[4]+c->r[0]; // 800F8E24
  c->lr=0x800F8E2Cu; f_80004338(c); // 800F8E28
  c->r[3]=c->r[15]|c->r[15]; // 800F8E2C
  c->lr=0x800F8E34u; f_800B08A4(c); // 800F8E30
  c->r[0]=0u+0x00000001u; // 800F8E34
L_800F8E38:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F8E38
  if (crb(c,2)) { goto L_800F90D4; } // 800F8E3C
  c->r[0]=R32(c->r[1]+0x00000108u); // 800F8E40
  cmpu(c,0,c->r[0],0x00000012u); // 800F8E44
  if (crb(c,2)) { goto L_800F8E58; } // 800F8E48
  c->r[0]=R32(c->r[25]+0x00000840u); // 800F8E4C
  cmps(c,0,(int32_t)c->r[0],0); // 800F8E50
  if (crb(c,2)) { goto L_800F90D4; } // 800F8E54
L_800F8E58:;
  c->r[15]=R32(c->r[1]+0x00000108u); // 800F8E58
  c->r[12]=R32(c->r[1]+0x0000010Cu); // 800F8E5C
  c->r[11]=R32(c->r[1]+0x00000110u); // 800F8E60
  c->r[10]=R32(c->r[1]+0x00000114u); // 800F8E64
  c->r[9]=R32(c->r[1]+0x00000118u); // 800F8E68
  c->r[8]=R32(c->r[1]+0x0000011Cu); // 800F8E6C
  c->r[7]=R32(c->r[1]+0x00000120u); // 800F8E70
  c->r[6]=R32(c->r[1]+0x00000124u); // 800F8E74
  c->r[5]=R32(c->r[1]+0x00000128u); // 800F8E78
  c->r[4]=R32(c->r[1]+0x0000012Cu); // 800F8E7C
  c->r[3]=R32(c->r[1]+0x00000130u); // 800F8E80
  c->r[0]=R32(c->r[1]+0x00000134u); // 800F8E84
  W32(c->r[1]+0x00000138u,c->r[15]); // 800F8E88
  c->r[15]=R32(c->r[27]+c->r[23]); // 800F8E8C
  W32(c->r[1]+0x0000013Cu,c->r[12]); // 800F8E90
  W32(c->r[1]+0x00000140u,c->r[11]); // 800F8E94
  W32(c->r[1]+0x00000144u,c->r[10]); // 800F8E98
  W32(c->r[1]+0x00000148u,c->r[9]); // 800F8E9C
  W32(c->r[1]+0x0000014Cu,c->r[8]); // 800F8EA0
  W32(c->r[1]+0x00000150u,c->r[7]); // 800F8EA4
  W32(c->r[1]+0x00000154u,c->r[6]); // 800F8EA8
  W32(c->r[1]+0x00000158u,c->r[5]); // 800F8EAC
  W32(c->r[1]+0x0000015Cu,c->r[4]); // 800F8EB0
  W32(c->r[1]+0x00000160u,c->r[3]); // 800F8EB4
  W32(c->r[1]+0x00000164u,c->r[0]); // 800F8EB8
  c->lr=0x800F8EC0u; f_800B087C(c); // 800F8EBC
  c->r[0]=R8(c->r[15]+0x00000904u); // 800F8EC0
  c->r[16]=c->r[3]|c->r[3]; // 800F8EC4
  cmps(c,0,(int32_t)c->r[0],0); // 800F8EC8
  if (crb(c,2)) { goto L_800F8ED8; } // 800F8ECC
  c->r[17]=0u+0xFFFFFFFEu; // 800F8ED0
  goto L_800F8EE8; // 800F8ED4
L_800F8ED8:;
  c->r[17]=R32(c->r[27]+c->r[23]); // 800F8ED8
  c->lr=0x800F8EE0u; f_800B087C(c); // 800F8EDC
  c->r[17]=R32(c->r[17]+0x00000900u); // 800F8EE0
  c->lr=0x800F8EE8u; f_800B08A4(c); // 800F8EE4
L_800F8EE8:;
  c->r[3]=c->r[16]|c->r[16]; // 800F8EE8
  c->lr=0x800F8EF0u; f_800B08A4(c); // 800F8EEC
  cmps(c,0,(int32_t)c->r[17],0); // 800F8EF0
  if (!crb(c,2)) { goto L_800F8F6C; } // 800F8EF4
  c->r[17]=R32(c->r[1]+0x00000138u); // 800F8EF8
  c->r[3]=c->r[24]|c->r[24]; // 800F8EFC
  c->r[16]=R32(c->r[1]+0x0000013Cu); // 800F8F00
  c->r[4]=c->r[1]+0x00000168u; // 800F8F04
  c->r[15]=R32(c->r[1]+0x00000140u); // 800F8F08
  c->r[12]=R32(c->r[1]+0x00000144u); // 800F8F0C
  c->r[11]=R32(c->r[1]+0x00000148u); // 800F8F10
  c->r[10]=R32(c->r[1]+0x0000014Cu); // 800F8F14
  c->r[9]=R32(c->r[1]+0x00000150u); // 800F8F18
  c->r[8]=R32(c->r[1]+0x00000154u); // 800F8F1C
  c->r[7]=R32(c->r[1]+0x00000158u); // 800F8F20
  c->r[6]=R32(c->r[1]+0x0000015Cu); // 800F8F24
  c->r[5]=R32(c->r[1]+0x00000160u); // 800F8F28
  c->r[0]=R32(c->r[1]+0x00000164u); // 800F8F2C
  W32(c->r[1]+0x00000168u,c->r[17]); // 800F8F30
  W32(c->r[1]+0x0000016Cu,c->r[16]); // 800F8F34
  W32(c->r[1]+0x00000170u,c->r[15]); // 800F8F38
  W32(c->r[1]+0x00000174u,c->r[12]); // 800F8F3C
  W32(c->r[1]+0x00000178u,c->r[11]); // 800F8F40
  W32(c->r[1]+0x0000017Cu,c->r[10]); // 800F8F44
  W32(c->r[1]+0x00000180u,c->r[9]); // 800F8F48
  W32(c->r[1]+0x00000184u,c->r[8]); // 800F8F4C
  W32(c->r[1]+0x00000188u,c->r[7]); // 800F8F50
  W32(c->r[1]+0x0000018Cu,c->r[6]); // 800F8F54
  W32(c->r[1]+0x00000190u,c->r[5]); // 800F8F58
  W32(c->r[1]+0x00000194u,c->r[0]); // 800F8F5C
  c->lr=0x800F8F64u; f_800F78D0(c); // 800F8F60
  c->r[17]=c->r[3]|c->r[3]; // 800F8F64
  goto L_800F9024; // 800F8F68
L_800F8F6C:;
  cmps(c,0,(int32_t)c->r[17],-2); // 800F8F6C
  if (!crb(c,2)) { goto L_800F9024; } // 800F8F70
  c->lr=0x800F8F78u; f_800B4914(c); // 800F8F74
  c->r[6]=R32(c->r[15]+0x00000AFCu); // 800F8F78
  c->r[5]=0u+0x00000000u; // 800F8F7C
  c->r[0]=R32(c->r[14]+0x000000F8u); // 800F8F80
  c->r[4]=addc(c,~c->r[6],c->r[4],1); // 800F8F84
  c->r[7]=R32(c->r[15]+0x00000AF8u); // 800F8F88
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F8F8C
  c->r[3]=addc(c,~c->r[7],c->r[3],c->xer_ca); // 800F8F90
  c->lr=0x800F8F98u; f_800D4B64(c); // 800F8F94
  c->r[5]=c->r[3]^0x80000000u; // 800F8F98
  c->r[0]=c->r[30]^0x80000000u; // 800F8F9C
  c->r[3]=addc(c,~c->r[4],c->r[29],1); // 800F8FA0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800F8FA4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800F8FA8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800F8FAC
  if (crb(c,2)) { goto L_800F9024; } // 800F8FB0
  c->lr=0x800F8FB8u; f_800B4914(c); // 800F8FB4
  W32(c->r[15]+0x00000AFCu,c->r[4]); // 800F8FB8
  W32(c->r[15]+0x00000AF8u,c->r[3]); // 800F8FBC
  c->r[15]=R32(c->r[27]+c->r[23]); // 800F8FC0
  c->lr=0x800F8FC8u; f_800B087C(c); // 800F8FC4
  c->r[15]=R32(c->r[15]+0x00000900u); // 800F8FC8
  c->lr=0x800F8FD0u; f_800B08A4(c); // 800F8FCC
  cmps(c,0,(int32_t)c->r[15],-1); // 800F8FD0
  if (crb(c,2)) { goto L_800F9024; } // 800F8FD4
  c->r[15]=R32(c->r[27]+c->r[23]); // 800F8FD8
  c->lr=0x800F8FE0u; f_800B087C(c); // 800F8FDC
  c->r[15]=R8(c->r[15]+0x00000907u); // 800F8FE0
  c->lr=0x800F8FE8u; f_800B08A4(c); // 800F8FE4
  c->r[3]=c->r[15]|c->r[15]; // 800F8FE8
  c->lr=0x800F8FF0u; f_8010E704(c); // 800F8FEC
  cmps(c,0,(int32_t)c->r[3],0); // 800F8FF0
  if (crb(c,2)) { goto L_800F900C; } // 800F8FF4
  c->r[4]=c->r[3]|c->r[3]; // 800F8FF8
  c->r[3]=c->r[1]+0x00000010u; // 800F8FFC
  c->r[5]=0u+0x00000006u; // 800F9000
  c->lr=0x800F9008u; f_80004338(c); // 800F9004
  goto L_800F901C; // 800F9008
L_800F900C:;
  c->r[3]=c->r[1]+0x00000010u; // 800F900C
  c->r[4]=0u+0x00000000u; // 800F9010
  c->r[5]=0u+0x00000006u; // 800F9014
  c->lr=0x800F901Cu; f_80004688(c); // 800F9018
L_800F901C:;
  c->r[3]=c->r[1]+0x00000010u; // 800F901C
  c->lr=0x800F9024u; f_80119FD8(c); // 800F9020
L_800F9024:;
  cmps(c,0,(int32_t)c->r[17],0); // 800F9024
  if (!crb(c,2)) { goto L_800F90D4; } // 800F9028
  c->lr=0x800F9030u; f_800B087C(c); // 800F902C
  c->r[15]=c->r[3]|c->r[3]; // 800F9030
  c->lr=0x800F9038u; f_800B087C(c); // 800F9034
  c->r[0]=R8(c->r[25]+0x000005ECu); // 800F9038
  c->r[5]=R8(c->r[25]+0x000005EDu); // 800F903C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F9040
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800F9044
  c->r[0]=c->r[0]-c->r[4]; // 800F9048
  c->r[16]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[16]); // 800F904C
  if (!crb(c,0)) { goto L_800F9060; } // 800F9050
  c->r[0]=R32(c->r[25]+0x000005F4u); // 800F9054
  c->r[0]=c->r[16]+c->r[0]; // 800F9058
  c->r[16]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F905C
L_800F9060:;
  c->lr=0x800F9064u; f_800B08A4(c); // 800F9060
  cmps(c,0,(int32_t)c->r[16],0); // 800F9064
  if (!crb(c,2)) { goto L_800F9078; } // 800F9068
  c->r[3]=c->r[15]|c->r[15]; // 800F906C
  c->lr=0x800F9074u; f_800B08A4(c); // 800F9070
  goto L_800F90CC; // 800F9074
L_800F9078:;
  c->r[0]=R8(c->r[25]+0x000005ECu); // 800F9078
  c->r[4]=0u+0x00000000u; // 800F907C
  c->r[3]=R32(c->r[25]+0x000005F0u); // 800F9080
  c->r[5]=0u+0x00000030u; // 800F9084
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F9088
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800F908C
  c->r[3]=c->r[3]+c->r[0]; // 800F9090
  c->lr=0x800F9098u; f_80004688(c); // 800F9094
  c->r[0]=R8(c->r[25]+0x000005ECu); // 800F9098
  c->r[3]=c->r[15]|c->r[15]; // 800F909C
  c->r[4]=R32(c->r[25]+0x000005F4u); // 800F90A0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F90A4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F90A8
  c->r[5]=c->r[6]-c->r[4]; // 800F90AC
  c->r[0]=c->r[6]+0x00000001u; // 800F90B0
  c->r[4]=c->r[4]-c->r[6]; // 800F90B4
  c->r[4]=~(c->r[5]|c->r[4]); // 800F90B8
  c->r[4]=sraw(c,c->r[4],31); // 800F90BC
  c->r[0]=c->r[0]&~c->r[4]; // 800F90C0
  W8(c->r[25]+0x000005ECu,c->r[0]); // 800F90C4
  c->lr=0x800F90CCu; f_800B08A4(c); // 800F90C8
L_800F90CC:;
  c->r[26]=0u+0x00000001u; // 800F90CC
  W8(c->r[28]+c->r[24],c->r[31]); // 800F90D0
L_800F90D4:;
  c->r[3]=R8(c->r[28]+c->r[24]); // 800F90D4
  cmpu(c,0,c->r[3],0x00000005u); // 800F90D8
  c->r[0]=c->r[3]+0x00000001u; // 800F90DC
  if (!crb(c,2)) { goto L_800F90E8; } // 800F90E0
  c->r[0]=c->r[3]|c->r[3]; // 800F90E4
L_800F90E8:;
  cmps(c,0,(int32_t)c->r[26],0); // 800F90E8
  W8(c->r[28]+c->r[24],c->r[0]); // 800F90EC
  c->r[25]=R32(c->r[27]+c->r[23]); // 800F90F0
  if (crb(c,2)) { goto L_800F9100; } // 800F90F4
  c->r[0]=0u+0x00000001u; // 800F90F8
  goto L_800F93FC; // 800F90FC
L_800F9100:;
  c->lr=0x800F9104u; f_800B087C(c); // 800F9100
  c->r[0]=R8(c->r[25]+0x00000160u); // 800F9104
  c->r[5]=R8(c->r[25]+0x00000161u); // 800F9108
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F910C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800F9110
  c->r[0]=c->r[0]-c->r[4]; // 800F9114
  c->r[15]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[15]); // 800F9118
  if (!crb(c,0)) { goto L_800F912C; } // 800F911C
  c->r[0]=R32(c->r[25]+0x00000168u); // 800F9120
  c->r[0]=c->r[15]+c->r[0]; // 800F9124
  c->r[15]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F9128
L_800F912C:;
  c->lr=0x800F9130u; f_800B08A4(c); // 800F912C
  cmps(c,0,(int32_t)c->r[15],0); // 800F9130
  if (!crb(c,2)) { goto L_800F9140; } // 800F9134
  c->r[0]=0u+0x00000000u; // 800F9138
  goto L_800F9174; // 800F913C
L_800F9140:;
  c->lr=0x800F9144u; f_800B087C(c); // 800F9140
  c->r[0]=R8(c->r[25]+0x00000160u); // 800F9144
  c->r[15]=c->r[3]|c->r[3]; // 800F9148
  c->r[4]=R32(c->r[25]+0x00000164u); // 800F914C
  c->r[3]=c->r[1]+0x00000078u; // 800F9150
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F9154
  c->r[5]=0u+0x00000030u; // 800F9158
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800F915C
  c->r[4]=c->r[4]+c->r[0]; // 800F9160
  c->lr=0x800F9168u; f_80004338(c); // 800F9164
  c->r[3]=c->r[15]|c->r[15]; // 800F9168
  c->lr=0x800F9170u; f_800B08A4(c); // 800F916C
  c->r[0]=0u+0x00000001u; // 800F9170
L_800F9174:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F9174
  if (crb(c,2)) { goto L_800F93F8; } // 800F9178
  c->r[15]=R32(c->r[1]+0x00000078u); // 800F917C
  c->r[12]=R32(c->r[1]+0x0000007Cu); // 800F9180
  c->r[11]=R32(c->r[1]+0x00000080u); // 800F9184
  c->r[10]=R32(c->r[1]+0x00000084u); // 800F9188
  c->r[9]=R32(c->r[1]+0x00000088u); // 800F918C
  c->r[8]=R32(c->r[1]+0x0000008Cu); // 800F9190
  c->r[7]=R32(c->r[1]+0x00000090u); // 800F9194
  c->r[6]=R32(c->r[1]+0x00000094u); // 800F9198
  c->r[5]=R32(c->r[1]+0x00000098u); // 800F919C
  c->r[4]=R32(c->r[1]+0x0000009Cu); // 800F91A0
  c->r[3]=R32(c->r[1]+0x000000A0u); // 800F91A4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800F91A8
  W32(c->r[1]+0x000000A8u,c->r[15]); // 800F91AC
  c->r[15]=R32(c->r[27]+c->r[23]); // 800F91B0
  W32(c->r[1]+0x000000ACu,c->r[12]); // 800F91B4
  W32(c->r[1]+0x000000B0u,c->r[11]); // 800F91B8
  W32(c->r[1]+0x000000B4u,c->r[10]); // 800F91BC
  W32(c->r[1]+0x000000B8u,c->r[9]); // 800F91C0
  W32(c->r[1]+0x000000BCu,c->r[8]); // 800F91C4
  W32(c->r[1]+0x000000C0u,c->r[7]); // 800F91C8
  W32(c->r[1]+0x000000C4u,c->r[6]); // 800F91CC
  W32(c->r[1]+0x000000C8u,c->r[5]); // 800F91D0
  W32(c->r[1]+0x000000CCu,c->r[4]); // 800F91D4
  W32(c->r[1]+0x000000D0u,c->r[3]); // 800F91D8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800F91DC
  c->lr=0x800F91E4u; f_800B087C(c); // 800F91E0
  c->r[0]=R8(c->r[15]+0x00000904u); // 800F91E4
  c->r[16]=c->r[3]|c->r[3]; // 800F91E8
  cmps(c,0,(int32_t)c->r[0],0); // 800F91EC
  if (crb(c,2)) { goto L_800F91FC; } // 800F91F0
  c->r[17]=0u+0xFFFFFFFEu; // 800F91F4
  goto L_800F920C; // 800F91F8
L_800F91FC:;
  c->r[17]=R32(c->r[27]+c->r[23]); // 800F91FC
  c->lr=0x800F9204u; f_800B087C(c); // 800F9200
  c->r[17]=R32(c->r[17]+0x00000900u); // 800F9204
  c->lr=0x800F920Cu; f_800B08A4(c); // 800F9208
L_800F920C:;
  c->r[3]=c->r[16]|c->r[16]; // 800F920C
  c->lr=0x800F9214u; f_800B08A4(c); // 800F9210
  cmps(c,0,(int32_t)c->r[17],0); // 800F9214
  if (!crb(c,2)) { goto L_800F9290; } // 800F9218
  c->r[15]=R32(c->r[1]+0x000000A8u); // 800F921C
  c->r[3]=c->r[24]|c->r[24]; // 800F9220
  c->r[16]=R32(c->r[1]+0x000000ACu); // 800F9224
  c->r[4]=c->r[1]+0x000000D8u; // 800F9228
  c->r[17]=R32(c->r[1]+0x000000B0u); // 800F922C
  c->r[12]=R32(c->r[1]+0x000000B4u); // 800F9230
  c->r[11]=R32(c->r[1]+0x000000B8u); // 800F9234
  c->r[10]=R32(c->r[1]+0x000000BCu); // 800F9238
  c->r[9]=R32(c->r[1]+0x000000C0u); // 800F923C
  c->r[8]=R32(c->r[1]+0x000000C4u); // 800F9240
  c->r[7]=R32(c->r[1]+0x000000C8u); // 800F9244
  c->r[6]=R32(c->r[1]+0x000000CCu); // 800F9248
  c->r[5]=R32(c->r[1]+0x000000D0u); // 800F924C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800F9250
  W32(c->r[1]+0x000000D8u,c->r[15]); // 800F9254
  W32(c->r[1]+0x000000DCu,c->r[16]); // 800F9258
  W32(c->r[1]+0x000000E0u,c->r[17]); // 800F925C
  W32(c->r[1]+0x000000E4u,c->r[12]); // 800F9260
  W32(c->r[1]+0x000000E8u,c->r[11]); // 800F9264
  W32(c->r[1]+0x000000ECu,c->r[10]); // 800F9268
  W32(c->r[1]+0x000000F0u,c->r[9]); // 800F926C
  W32(c->r[1]+0x000000F4u,c->r[8]); // 800F9270
  W32(c->r[1]+0x000000F8u,c->r[7]); // 800F9274
  W32(c->r[1]+0x000000FCu,c->r[6]); // 800F9278
  W32(c->r[1]+0x00000100u,c->r[5]); // 800F927C
  W32(c->r[1]+0x00000104u,c->r[0]); // 800F9280
  c->lr=0x800F9288u; f_800F78D0(c); // 800F9284
  c->r[17]=c->r[3]|c->r[3]; // 800F9288
  goto L_800F9348; // 800F928C
L_800F9290:;
  cmps(c,0,(int32_t)c->r[17],-2); // 800F9290
  if (!crb(c,2)) { goto L_800F9348; } // 800F9294
  c->lr=0x800F929Cu; f_800B4914(c); // 800F9298
  c->r[6]=R32(c->r[15]+0x00000AFCu); // 800F929C
  c->r[5]=0u+0x00000000u; // 800F92A0
  c->r[0]=R32(c->r[14]+0x000000F8u); // 800F92A4
  c->r[4]=addc(c,~c->r[6],c->r[4],1); // 800F92A8
  c->r[7]=R32(c->r[15]+0x00000AF8u); // 800F92AC
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F92B0
  c->r[3]=addc(c,~c->r[7],c->r[3],c->xer_ca); // 800F92B4
  c->lr=0x800F92BCu; f_800D4B64(c); // 800F92B8
  c->r[5]=c->r[3]^0x80000000u; // 800F92BC
  c->r[0]=c->r[18]^0x80000000u; // 800F92C0
  c->r[3]=addc(c,~c->r[4],c->r[29],1); // 800F92C4
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800F92C8
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800F92CC
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800F92D0
  if (crb(c,2)) { goto L_800F9348; } // 800F92D4
  c->lr=0x800F92DCu; f_800B4914(c); // 800F92D8
  W32(c->r[15]+0x00000AFCu,c->r[4]); // 800F92DC
  W32(c->r[15]+0x00000AF8u,c->r[3]); // 800F92E0
  c->r[15]=R32(c->r[27]+c->r[23]); // 800F92E4
  c->lr=0x800F92ECu; f_800B087C(c); // 800F92E8
  c->r[15]=R32(c->r[15]+0x00000900u); // 800F92EC
  c->lr=0x800F92F4u; f_800B08A4(c); // 800F92F0
  cmps(c,0,(int32_t)c->r[15],-1); // 800F92F4
  if (crb(c,2)) { goto L_800F9348; } // 800F92F8
  c->r[15]=R32(c->r[27]+c->r[23]); // 800F92FC
  c->lr=0x800F9304u; f_800B087C(c); // 800F9300
  c->r[15]=R8(c->r[15]+0x00000907u); // 800F9304
  c->lr=0x800F930Cu; f_800B08A4(c); // 800F9308
  c->r[3]=c->r[15]|c->r[15]; // 800F930C
  c->lr=0x800F9314u; f_8010E704(c); // 800F9310
  cmps(c,0,(int32_t)c->r[3],0); // 800F9314
  if (crb(c,2)) { goto L_800F9330; } // 800F9318
  c->r[4]=c->r[3]|c->r[3]; // 800F931C
  c->r[3]=c->r[1]+0x00000008u; // 800F9320
  c->r[5]=0u+0x00000006u; // 800F9324
  c->lr=0x800F932Cu; f_80004338(c); // 800F9328
  goto L_800F9340; // 800F932C
L_800F9330:;
  c->r[3]=c->r[1]+0x00000008u; // 800F9330
  c->r[4]=0u+0x00000000u; // 800F9334
  c->r[5]=0u+0x00000006u; // 800F9338
  c->lr=0x800F9340u; f_80004688(c); // 800F933C
L_800F9340:;
  c->r[3]=c->r[1]+0x00000008u; // 800F9340
  c->lr=0x800F9348u; f_80119FD8(c); // 800F9344
L_800F9348:;
  cmps(c,0,(int32_t)c->r[17],0); // 800F9348
  if (!crb(c,2)) { goto L_800F93F8; } // 800F934C
  c->lr=0x800F9354u; f_800B087C(c); // 800F9350
  c->r[15]=c->r[3]|c->r[3]; // 800F9354
  c->lr=0x800F935Cu; f_800B087C(c); // 800F9358
  c->r[0]=R8(c->r[25]+0x00000160u); // 800F935C
  c->r[5]=R8(c->r[25]+0x00000161u); // 800F9360
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F9364
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800F9368
  c->r[0]=c->r[0]-c->r[4]; // 800F936C
  c->r[16]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[16]); // 800F9370
  if (!crb(c,0)) { goto L_800F9384; } // 800F9374
  c->r[0]=R32(c->r[25]+0x00000168u); // 800F9378
  c->r[0]=c->r[16]+c->r[0]; // 800F937C
  c->r[16]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F9380
L_800F9384:;
  c->lr=0x800F9388u; f_800B08A4(c); // 800F9384
  cmps(c,0,(int32_t)c->r[16],0); // 800F9388
  if (!crb(c,2)) { goto L_800F939C; } // 800F938C
  c->r[3]=c->r[15]|c->r[15]; // 800F9390
  c->lr=0x800F9398u; f_800B08A4(c); // 800F9394
  goto L_800F93F0; // 800F9398
L_800F939C:;
  c->r[0]=R8(c->r[25]+0x00000160u); // 800F939C
  c->r[4]=0u+0x00000000u; // 800F93A0
  c->r[3]=R32(c->r[25]+0x00000164u); // 800F93A4
  c->r[5]=0u+0x00000030u; // 800F93A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F93AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800F93B0
  c->r[3]=c->r[3]+c->r[0]; // 800F93B4
  c->lr=0x800F93BCu; f_80004688(c); // 800F93B8
  c->r[0]=R8(c->r[25]+0x00000160u); // 800F93BC
  c->r[3]=c->r[15]|c->r[15]; // 800F93C0
  c->r[4]=R32(c->r[25]+0x00000168u); // 800F93C4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F93C8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F93CC
  c->r[5]=c->r[6]-c->r[4]; // 800F93D0
  c->r[0]=c->r[6]+0x00000001u; // 800F93D4
  c->r[4]=c->r[4]-c->r[6]; // 800F93D8
  c->r[4]=~(c->r[5]|c->r[4]); // 800F93DC
  c->r[4]=sraw(c,c->r[4],31); // 800F93E0
  c->r[0]=c->r[0]&~c->r[4]; // 800F93E4
  W8(c->r[25]+0x00000160u,c->r[0]); // 800F93E8
  c->lr=0x800F93F0u; f_800B08A4(c); // 800F93EC
L_800F93F0:;
  c->r[0]=0u+0x00000001u; // 800F93F0
  goto L_800F93FC; // 800F93F4
L_800F93F8:;
  c->r[0]=0u+0x00000000u; // 800F93F8
L_800F93FC:;
  c->r[0]=c->r[26]|c->r[0]; // 800F93FC
  cmps(c,0,(int32_t)c->r[0],1); // 800F9400
  if (crb(c,2)) { goto L_800F9444; } // 800F9404
  c->r[15]=R32(c->r[27]+c->r[23]); // 800F9408
  c->lr=0x800F9410u; f_800B087C(c); // 800F940C
  c->r[0]=R8(c->r[15]+0x00000160u); // 800F9410
  c->r[5]=R8(c->r[15]+0x00000161u); // 800F9414
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F9418
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800F941C
  c->r[0]=c->r[0]-c->r[4]; // 800F9420
  c->r[16]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[16]); // 800F9424
  if (!crb(c,0)) { goto L_800F9438; } // 800F9428
  c->r[0]=R32(c->r[15]+0x00000168u); // 800F942C
  c->r[0]=c->r[16]+c->r[0]; // 800F9430
  c->r[16]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800F9434
L_800F9438:;
  c->lr=0x800F943Cu; f_800B08A4(c); // 800F9438
  cmps(c,0,(int32_t)c->r[16],0); // 800F943C
  if (!crb(c,1)) { goto L_800F9450; } // 800F9440
L_800F9444:;
  c->r[3]=R32(c->r[27]+c->r[23]); // 800F9444
  W32(c->r[3]+0x00000914u,c->r[19]); // 800F9448
  goto L_800F94E0; // 800F944C
L_800F9450:;
  c->r[0]=R8(c->r[20]+c->r[24]); // 800F9450
  cmpu(c,0,c->r[0],0x00000005u); // 800F9454
  if (!crb(c,2)) { goto L_800F94E0; } // 800F9458
  c->r[5]=R32(c->r[27]+c->r[23]); // 800F945C
  c->r[0]=0u+0x00000010u; // 800F9460
  W16(c->r[1]+0x00000032u,c->r[29]); // 800F9464
  c->r[3]=c->r[24]|c->r[24]; // 800F9468
  c->r[15]=R32(c->r[1]+0x00000020u); // 800F946C
  c->r[4]=c->r[1]+0x00000048u; // 800F9470
  W32(c->r[5]+0x00000914u,c->r[21]); // 800F9474
  c->r[12]=R32(c->r[1]+0x00000024u); // 800F9478
  W8(c->r[1]+0x0000001Cu,c->r[21]); // 800F947C
  c->r[11]=R32(c->r[1]+0x00000028u); // 800F9480
  c->r[16]=R32(c->r[1]+0x0000001Cu); // 800F9484
  c->r[10]=R32(c->r[1]+0x0000002Cu); // 800F9488
  c->r[9]=R32(c->r[1]+0x00000030u); // 800F948C
  c->r[8]=R32(c->r[1]+0x00000034u); // 800F9490
  c->r[7]=R32(c->r[1]+0x00000038u); // 800F9494
  c->r[6]=R32(c->r[1]+0x0000003Cu); // 800F9498
  c->r[5]=R32(c->r[1]+0x00000040u); // 800F949C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F94A0
  c->r[0]=0u+0x00000010u; // 800F94A4
  W32(c->r[1]+0x00000044u,c->r[21]); // 800F94A8
  W32(c->r[1]+0x00000048u,c->r[0]); // 800F94AC
  W32(c->r[1]+0x0000004Cu,c->r[16]); // 800F94B0
  W32(c->r[1]+0x00000050u,c->r[15]); // 800F94B4
  W32(c->r[1]+0x00000054u,c->r[12]); // 800F94B8
  W32(c->r[1]+0x00000058u,c->r[11]); // 800F94BC
  W32(c->r[1]+0x0000005Cu,c->r[10]); // 800F94C0
  W32(c->r[1]+0x00000060u,c->r[9]); // 800F94C4
  W32(c->r[1]+0x00000064u,c->r[8]); // 800F94C8
  W32(c->r[1]+0x00000068u,c->r[7]); // 800F94CC
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 800F94D0
  W32(c->r[1]+0x00000070u,c->r[5]); // 800F94D4
  W32(c->r[1]+0x00000074u,c->r[21]); // 800F94D8
  c->lr=0x800F94E0u; f_800F78D0(c); // 800F94DC
L_800F94E0:;
  c->r[3]=R32(c->r[27]+c->r[23]); // 800F94E0
  c->r[0]=R32(c->r[3]+0x00000914u); // 800F94E4
  cmps(c,0,(int32_t)c->r[0],0); // 800F94E8
  if (crb(c,2)) { goto L_800F94FC; } // 800F94EC
  c->r[3]=R8(c->r[20]+c->r[24]); // 800F94F0
  c->r[0]=c->r[3]+0x00000001u; // 800F94F4
  goto L_800F9500; // 800F94F8
L_800F94FC:;
  c->r[0]=0u+0x00000000u; // 800F94FC
L_800F9500:;
  W8(c->r[20]+c->r[24],c->r[0]); // 800F9500
  c->r[3]=c->r[24]|c->r[24]; // 800F9504
  c->lr=0x800F950Cu; f_800F8A30(c); // 800F9508
  c->r[3]=c->r[24]|c->r[24]; // 800F950C
  c->lr=0x800F9514u; f_800F7AA0(c); // 800F9510
L_800F9514:;
  c->r[4]=R32(c->r[27]+c->r[23]); // 800F9514
  c->r[0]=R8(c->r[4]+0x00000B81u); // 800F9518
  cmps(c,0,(int32_t)c->r[0],0); // 800F951C
  if (crb(c,2)) { goto L_800F9540; } // 800F9520
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000B82u); // 800F9524
  cmps(c,0,(int32_t)c->r[3],0); // 800F9528
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F952C
  W16(c->r[4]+0x00000B82u,c->r[0]); // 800F9530
  if (!crb(c,0)) { goto L_800F9540; } // 800F9534
  c->r[3]=R32(c->r[27]+c->r[23]); // 800F9538
  W8(c->r[3]+0x00000B81u,c->r[22]); // 800F953C
L_800F9540:;
  c->r[3]=c->r[24]|c->r[24]; // 800F9540
  c->lr=0x800F9548u; f_80101300(c); // 800F9544
  c->r[3]=R32(c->r[27]+c->r[23]); // 800F9548
  c->r[3]=R8(c->r[3]+0x00000905u); // 800F954C
  c->r[0]=c->r[3]+0x000000FBu; // 800F9550
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800F9554
  cmpu(c,0,c->r[0],0x00000002u); // 800F9558
  if (!crb(c,1)) { goto L_800F9568; } // 800F955C
  cmpu(c,0,c->r[3],0x000000FAu); // 800F9560
  if (!crb(c,2)) { goto L_800F9580; } // 800F9564
L_800F9568:;
  c->r[4]=R32(c->r[27]+c->r[23]); // 800F9568
  c->r[3]=R8(c->r[4]+0x00000B9Fu); // 800F956C
  cmpu(c,0,c->r[3],0x000000C8u); // 800F9570
  if (!crb(c,0)) { goto L_800F9580; } // 800F9574
  c->r[0]=c->r[3]+0x00000001u; // 800F9578
  W8(c->r[4]+0x00000B9Fu,c->r[0]); // 800F957C
L_800F9580:;
  c->r[24]=c->r[24]+0x00000001u; // 800F9580
  c->r[23]=c->r[23]+0x00000004u; // 800F9584
  cmps(c,0,(int32_t)c->r[24],4); // 800F9588
  if (crb(c,0)) { IRQCHK(c); goto L_800F8DA4; } // 800F958C
  c->r[5]=R16(c->r[13]+0xFFFF930Au); // 800F9590
  c->r[3]=0u+0x00010000u; // 800F9594
  c->r[0]=c->r[3]+0xFFFFEA60u; // 800F9598
  c->r[8]=R8(c->r[13]+0xFFFF930Cu); // 800F959C
  c->r[4]=c->r[5]+0xFFFFFFF6u; // 800F95A0
  c->r[3]=addc(c,~c->r[5],0x0000000Au,1); // 800F95A4
  c->r[3]=~(c->r[4]|c->r[3]); // 800F95A8
  c->r[9]=R16(c->r[13]+0xFFFF930Eu); // 800F95AC
  c->r[7]=sraw(c,c->r[3],31); // 800F95B0
  c->r[6]=c->r[5]+0x00000001u; // 800F95B4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800F95B8
  c->r[4]=c->r[8]+0xFFFFFFFBu; // 800F95BC
  c->r[3]=addc(c,~c->r[8],0x00000005u,1); // 800F95C0
  c->r[6]=c->r[6]&~c->r[7]; // 800F95C4
  c->r[4]=~(c->r[4]|c->r[3]); // 800F95C8
  W16(c->r[13]+0xFFFF930Au,c->r[6]); // 800F95CC
  c->r[3]=c->r[9]-c->r[0]; // 800F95D0
  c->r[0]=c->r[0]-c->r[9]; // 800F95D4
  c->r[5]=sraw(c,c->r[4],31); // 800F95D8
  c->r[4]=c->r[8]+0x00000001u; // 800F95DC
  c->r[3]=~(c->r[3]|c->r[0]); // 800F95E0
  c->r[0]=c->r[9]+0x00000001u; // 800F95E4
  c->r[3]=sraw(c,c->r[3],31); // 800F95E8
  c->r[4]=c->r[4]&~c->r[5]; // 800F95EC
  c->r[0]=c->r[0]&~c->r[3]; // 800F95F0
  W8(c->r[13]+0xFFFF930Cu,c->r[4]); // 800F95F4
  W16(c->r[13]+0xFFFF930Eu,c->r[0]); // 800F95F8
  c->lr=0x800F9600u; f_80117C1C(c); // 800F95FC
L_800F9600:;
  c->r[11]=c->r[1]+0x000001E0u; // 800F9600
  c->lr=0x800F9608u; f_800D4A2C(c); // 800F9604
  c->r[0]=R32(c->r[1]+0x000001E4u); // 800F9608
  c->lr=c->r[0]; // 800F960C
  c->r[1]=c->r[1]+0x000001E0u; // 800F9610
  return; // 800F9614
}

// __wpadManageHandler0
void f_800F9620(Ctx* __restrict c) {
  trace_call(0x800F9620u);
  c->r[8]=0u+0x802E0000u; // 800F9620
  c->r[7]=0u+0x80100000u; // 800F9624
  c->r[8]=c->r[8]+0xFFFFB2A0u; // 800F9628
  c->r[5]=0u+0x00000000u; // 800F962C
  c->r[7]=c->r[7]+0xFFFF8BD0u; // 800F9630
  c->r[6]=0u+0x00000000u; // 800F9634
  c->r[8]=c->r[8]+0x00001000u; // 800F9638
  f_800AC768(c); return; // 800F963C
}

// __wpadClearControlBlock
void f_800F9640(Ctx* __restrict c) {
  trace_call(0x800F9640u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9640
  c->r[0]=c->lr; // 800F9644
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F9648
  c->r[11]=c->r[1]+0x00000030u; // 800F964C
  c->lr=0x800F9654u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F9650
  c->r[4]=0u+0x802E0000u; // 800F9654
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F9658
  c->r[4]=c->r[4]+0xFFFFB290u; // 800F965C
  c->r[31]=0u+0x00000000u; // 800F9660
  c->r[30]=R32(c->r[4]+c->r[0]); // 800F9664
  c->r[25]=0u+0xFFFFFFFFu; // 800F9668
  c->r[26]=0u+0x000000FDu; // 800F966C
  c->r[27]=0u+0x0000000Cu; // 800F9670
  W32(c->r[30]+0x00000850u,c->r[31]); // 800F9674
  c->r[29]=c->r[3]|c->r[3]; // 800F9678
  W32(c->r[30]+0x00000918u,c->r[31]); // 800F967C
  W32(c->r[30]+0x000008E0u,c->r[31]); // 800F9680
  W32(c->r[30]+0x000008E4u,c->r[31]); // 800F9684
  W32(c->r[30]+0x000008ECu,c->r[31]); // 800F9688
  W32(c->r[30]+0x000008F0u,c->r[31]); // 800F968C
  W32(c->r[30]+0x000008F4u,c->r[31]); // 800F9690
  W32(c->r[30]+0x000008F8u,c->r[31]); // 800F9694
  W32(c->r[30]+0x000008FCu,c->r[31]); // 800F9698
  W32(c->r[30]+0x00000900u,c->r[25]); // 800F969C
  W8(c->r[30]+0x00000905u,c->r[26]); // 800F96A0
  W8(c->r[30]+0x00000906u,c->r[31]); // 800F96A4
  W8(c->r[30]+0x00000B01u,c->r[31]); // 800F96A8
  W16(c->r[30]+0x00000B02u,c->r[31]); // 800F96AC
  W8(c->r[30]+0x00000904u,c->r[31]); // 800F96B0
  W8(c->r[30]+0x0000090Eu,c->r[27]); // 800F96B4
  W8(c->r[30]+0x0000090Fu,c->r[31]); // 800F96B8
  W8(c->r[30]+0x00000910u,c->r[31]); // 800F96BC
  W16(c->r[30]+0x00000AE8u,c->r[31]); // 800F96C0
  W16(c->r[30]+0x00000AF0u,c->r[31]); // 800F96C4
  W16(c->r[30]+0x00000AEAu,c->r[31]); // 800F96C8
  W16(c->r[30]+0x00000AF2u,c->r[31]); // 800F96CC
  W16(c->r[30]+0x00000AECu,c->r[31]); // 800F96D0
  W16(c->r[30]+0x00000AF4u,c->r[31]); // 800F96D4
  W16(c->r[30]+0x00000AEEu,c->r[31]); // 800F96D8
  W16(c->r[30]+0x00000AF6u,c->r[31]); // 800F96DC
  c->lr=0x800F96E4u; f_800B4914(c); // 800F96E0
  W32(c->r[30]+0x00000AE4u,c->r[4]); // 800F96E4
  W32(c->r[30]+0x00000AE0u,c->r[3]); // 800F96E8
  c->lr=0x800F96F0u; f_800B4914(c); // 800F96EC
  W32(c->r[30]+0x00000AFCu,c->r[4]); // 800F96F0
  c->r[28]=0u+0x00000001u; // 800F96F4
  c->r[0]=0u+0x00000004u; // 800F96F8
  c->r[4]=0u+0x00000000u; // 800F96FC
  W32(c->r[30]+0x00000AF8u,c->r[3]); // 800F9700
  c->r[3]=c->r[30]+0x00000838u; // 800F9704
  c->r[5]=0u+0x00000018u; // 800F9708
  W8(c->r[30]+0x00000B00u,c->r[31]); // 800F970C
  W8(c->r[30]+0x0000090Du,c->r[31]); // 800F9710
  W32(c->r[30]+0x00000908u,c->r[31]); // 800F9714
  W32(c->r[30]+0x00000B64u,c->r[31]); // 800F9718
  W32(c->r[30]+0x00000B68u,c->r[31]); // 800F971C
  W16(c->r[30]+0x00000B70u,c->r[31]); // 800F9720
  W32(c->r[30]+0x00000B6Cu,c->r[31]); // 800F9724
  W8(c->r[30]+0x00000907u,c->r[25]); // 800F9728
  W32(c->r[30]+0x0000091Cu,c->r[31]); // 800F972C
  W32(c->r[30]+0x00000920u,c->r[31]); // 800F9730
  W32(c->r[30]+0x00000924u,c->r[31]); // 800F9734
  W8(c->r[30]+0x00000911u,c->r[28]); // 800F9738
  W8(c->r[30]+0x00000912u,c->r[31]); // 800F973C
  W8(c->r[30]+0x00000913u,c->r[31]); // 800F9740
  W8(c->r[30]+0x00000B72u,c->r[31]); // 800F9744
  W8(c->r[30]+0x00000B73u,c->r[31]); // 800F9748
  W16(c->r[30]+0x00000B74u,c->r[31]); // 800F974C
  W8(c->r[30]+0x00000B76u,c->r[28]); // 800F9750
  W8(c->r[30]+0x00000B7Cu,c->r[31]); // 800F9754
  W32(c->r[30]+0x00000B78u,c->r[31]); // 800F9758
  W8(c->r[30]+0x00000B7Eu,c->r[31]); // 800F975C
  W8(c->r[30]+0x00000B7Fu,c->r[0]); // 800F9760
  W8(c->r[30]+0x00000B80u,c->r[26]); // 800F9764
  W8(c->r[30]+0x00000B81u,c->r[31]); // 800F9768
  W16(c->r[30]+0x00000B82u,c->r[31]); // 800F976C
  W8(c->r[30]+0x00000BA1u,c->r[31]); // 800F9770
  W8(c->r[30]+0x00000BA2u,c->r[31]); // 800F9774
  c->lr=0x800F977Cu; f_80004688(c); // 800F9778
  c->r[3]=c->r[30]+0x00000B24u; // 800F977C
  c->r[4]=0u+0x00000000u; // 800F9780
  c->r[5]=0u+0x00000040u; // 800F9784
  c->lr=0x800F978Cu; f_80004688(c); // 800F9788
  c->r[3]=c->r[30]+0x00000854u; // 800F978C
  c->r[4]=0u+0x00000000u; // 800F9790
  c->r[5]=0u+0x00000030u; // 800F9794
  c->lr=0x800F979Cu; f_80004688(c); // 800F9798
  c->r[3]=c->r[30]+0x00000884u; // 800F979C
  c->r[4]=0u+0x00000000u; // 800F97A0
  c->r[5]=0u+0x0000005Cu; // 800F97A4
  c->lr=0x800F97ACu; f_80004688(c); // 800F97A8
  c->r[3]=c->r[30]+0x00000B04u; // 800F97AC
  c->r[4]=0u+0x00000000u; // 800F97B0
  c->r[5]=0u+0x00000010u; // 800F97B4
  c->lr=0x800F97BCu; f_80004688(c); // 800F97B8
  c->r[3]=c->r[30]+0x00000B14u; // 800F97BC
  c->r[4]=0u+0x00000000u; // 800F97C0
  c->r[5]=0u+0x00000008u; // 800F97C4
  c->lr=0x800F97CCu; f_80004688(c); // 800F97C8
  c->r[3]=c->r[30]+0x00000B1Cu; // 800F97CC
  c->r[4]=0u+0x00000000u; // 800F97D0
  c->r[5]=0u+0x00000008u; // 800F97D4
  c->lr=0x800F97DCu; f_80004688(c); // 800F97D8
  c->r[3]=c->r[30]|c->r[30]; // 800F97DC
  c->r[4]=0u+0x00000000u; // 800F97E0
  c->r[5]=0u+0x00000038u; // 800F97E4
  c->lr=0x800F97ECu; f_80004688(c); // 800F97E8
  W8(c->r[30]+0x0000090Cu,c->r[31]); // 800F97EC
  c->r[3]=c->r[30]+0x000000A0u; // 800F97F0
  c->r[4]=0u+0x00000000u; // 800F97F4
  c->r[5]=0u+0x000000C0u; // 800F97F8
  c->lr=0x800F9800u; f_80004688(c); // 800F97FC
  W8(c->r[30]+0x000000C9u,c->r[25]); // 800F9800
  c->r[3]=c->r[30]+0x00000040u; // 800F9804
  c->r[4]=c->r[30]+0x000000A0u; // 800F9808
  c->r[5]=0u+0x00000060u; // 800F980C
  W8(c->r[30]+0x00000129u,c->r[25]); // 800F9810
  c->lr=0x800F9818u; f_80004338(c); // 800F9814
  W32(c->r[30]+0x00000038u,c->r[25]); // 800F9818
  c->r[4]=c->r[30]+0x0000016Cu; // 800F981C
  c->r[3]=0u+0x00000018u; // 800F9820
  c->r[0]=c->r[30]+0x000005F8u; // 800F9824
  W32(c->r[30]+0x0000003Cu,c->r[25]); // 800F9828
  W32(c->r[30]+0x00000164u,c->r[4]); // 800F982C
  W32(c->r[30]+0x00000168u,c->r[3]); // 800F9830
  W32(c->r[30]+0x000005F0u,c->r[0]); // 800F9834
  W32(c->r[30]+0x000005F4u,c->r[27]); // 800F9838
  c->lr=0x800F9840u; f_800B087C(c); // 800F983C
  W8(c->r[30]+0x00000160u,c->r[31]); // 800F9840
  c->r[27]=c->r[3]|c->r[3]; // 800F9844
  c->r[4]=0u+0x00000000u; // 800F9848
  W8(c->r[30]+0x00000161u,c->r[31]); // 800F984C
  c->r[0]=R32(c->r[30]+0x00000168u); // 800F9850
  c->r[3]=R32(c->r[30]+0x00000164u); // 800F9854
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800F9858
  c->lr=0x800F9860u; f_80004688(c); // 800F985C
  c->r[3]=c->r[27]|c->r[27]; // 800F9860
  c->lr=0x800F9868u; f_800B08A4(c); // 800F9864
  c->lr=0x800F986Cu; f_800B087C(c); // 800F9868
  W8(c->r[30]+0x000005ECu,c->r[31]); // 800F986C
  c->r[27]=c->r[3]|c->r[3]; // 800F9870
  c->r[4]=0u+0x00000000u; // 800F9874
  W8(c->r[30]+0x000005EDu,c->r[31]); // 800F9878
  c->r[0]=R32(c->r[30]+0x000005F4u); // 800F987C
  c->r[3]=R32(c->r[30]+0x000005F0u); // 800F9880
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800F9884
  c->lr=0x800F988Cu; f_80004688(c); // 800F9888
  c->r[3]=c->r[27]|c->r[27]; // 800F988C
  c->lr=0x800F9894u; f_800B08A4(c); // 800F9890
  W8(c->r[30]+0x00000936u,c->r[31]); // 800F9894
  c->r[8]=0u+0x00000003u; // 800F9898
  c->r[7]=0u+0x00000005u; // 800F989C
  c->r[6]=0u+0x00000BB8u; // 800F98A0
  W8(c->r[30]+0x00000930u,c->r[31]); // 800F98A4
  c->r[0]=0u+0x00000002u; // 800F98A8
  c->r[3]=c->r[30]+0x00000948u; // 800F98AC
  c->r[4]=0u+0x00000000u; // 800F98B0
  W8(c->r[30]+0x00000931u,c->r[31]); // 800F98B4
  c->r[5]=0u+0x00000048u; // 800F98B8
  W8(c->r[30]+0x00000932u,c->r[31]); // 800F98BC
  W8(c->r[30]+0x00000934u,c->r[31]); // 800F98C0
  W8(c->r[30]+0x00000933u,c->r[8]); // 800F98C4
  W8(c->r[30]+0x00000935u,c->r[7]); // 800F98C8
  W32(c->r[30]+0x00000B98u,c->r[31]); // 800F98CC
  W8(c->r[30]+0x00000B9Fu,c->r[31]); // 800F98D0
  W8(c->r[30]+0x00000940u,c->r[25]); // 800F98D4
  W8(c->r[30]+0x00000941u,c->r[31]); // 800F98D8
  W8(c->r[30]+0x00000943u,c->r[25]); // 800F98DC
  W8(c->r[30]+0x00000942u,c->r[31]); // 800F98E0
  W16(c->r[30]+0x0000093Eu,c->r[6]); // 800F98E4
  W8(c->r[30]+0x0000093Bu,c->r[0]); // 800F98E8
  W8(c->r[30]+0x0000093Au,c->r[31]); // 800F98EC
  W32(c->r[30]+0x00000944u,c->r[31]); // 800F98F0
  c->lr=0x800F98F8u; f_80004688(c); // 800F98F4
  c->r[3]=c->r[30]+0x00000990u; // 800F98F8
  c->r[4]=0u+0x00000000u; // 800F98FC
  c->r[5]=0u+0x00000048u; // 800F9900
  c->lr=0x800F9908u; f_80004688(c); // 800F9904
  c->r[3]=c->r[30]+0x000009D8u; // 800F9908
  c->r[4]=0u+0x00000000u; // 800F990C
  c->r[5]=0u+0x00000108u; // 800F9910
  c->lr=0x800F9918u; f_80004688(c); // 800F9914
  W32(c->r[30]+0x000009D8u,c->r[28]); // 800F9918
  c->r[3]=c->r[30]+0x00000BC0u; // 800F991C
  c->r[4]=0u+0x00000000u; // 800F9920
  c->r[5]=0u+0x00000020u; // 800F9924
  W32(c->r[30]+0x00000990u,c->r[28]); // 800F9928
  W32(c->r[30]+0x00000948u,c->r[28]); // 800F992C
  W8(c->r[30]+0x00000BA3u,c->r[31]); // 800F9930
  W8(c->r[30]+0x00000BBDu,c->r[25]); // 800F9934
  W8(c->r[30]+0x00000BBFu,c->r[26]); // 800F9938
  W8(c->r[30]+0x00000BBEu,c->r[31]); // 800F993C
  c->lr=0x800F9944u; f_80004688(c); // 800F9940
  c->r[3]=c->r[29]|c->r[29]; // 800F9944
  c->lr=0x800F994Cu; f_80107E10(c); // 800F9948
  c->r[4]=c->r[13]+0xFFFF9310u; // 800F994C
  c->r[3]=c->r[13]+0xFFFF9314u; // 800F9950
  W8(c->r[4]+c->r[29],c->r[31]); // 800F9954
  c->r[11]=c->r[1]+0x00000030u; // 800F9958
  W8(c->r[3]+c->r[29],c->r[31]); // 800F995C
  c->lr=0x800F9964u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F9960
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F9964
  c->lr=c->r[0]; // 800F9968
  c->r[1]=c->r[1]+0x00000030u; // 800F996C
  return; // 800F9970
}

// __wpadInitSub
void f_800F9980(Ctx* __restrict c) {
  trace_call(0x800F9980u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9980
  c->r[0]=c->lr; // 800F9984
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F9988
  c->r[11]=c->r[1]+0x00000030u; // 800F998C
  c->lr=0x800F9994u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F9990
  c->r[31]=0u+0x802E0000u; // 800F9994
  c->r[31]=c->r[31]+0xFFFFB260u; // 800F9998
  c->lr=0x800F99A0u; f_800B087C(c); // 800F999C
  c->r[4]=0u+0xCD000000u; // 800F99A0
  c->r[0]=R32(c->r[4]+0x000000C0u); // 800F99A4
  c->r[0]=c->r[0]|0x00000100u; // 800F99A8
  W32(c->r[4]+0x000000C0u,c->r[0]); // 800F99AC
  c->lr=0x800F99B4u; f_800B08A4(c); // 800F99B0
  c->r[3]=c->r[31]+0x00001040u; // 800F99B4
  c->r[0]=0u+0xFFFFFFFFu; // 800F99B8
  W8(c->r[3]+0x00000000u,c->r[0]); // 800F99BC
  c->r[29]=c->r[31]+0x00001060u; // 800F99C0
  c->r[28]=c->r[31]+0x00000030u; // 800F99C4
  c->r[24]=0u+0x00000000u; // 800F99C8
  W8(c->r[3]+0x00000001u,c->r[0]); // 800F99CC
  c->r[27]=c->r[13]+0xFFFF9348u; // 800F99D0
  c->r[26]=c->r[13]+0xFFFF9310u; // 800F99D4
  c->r[25]=c->r[13]+0xFFFF9314u; // 800F99D8
  W8(c->r[3]+0x00000002u,c->r[0]); // 800F99DC
  c->r[30]=0u+0x00000000u; // 800F99E0
  W8(c->r[3]+0x00000003u,c->r[0]); // 800F99E4
  W8(c->r[3]+0x00000004u,c->r[0]); // 800F99E8
  W8(c->r[3]+0x00000005u,c->r[0]); // 800F99EC
  W8(c->r[3]+0x00000006u,c->r[0]); // 800F99F0
  W8(c->r[3]+0x00000007u,c->r[0]); // 800F99F4
  W8(c->r[3]+0x00000008u,c->r[0]); // 800F99F8
  W8(c->r[3]+0x00000009u,c->r[0]); // 800F99FC
  W8(c->r[3]+0x0000000Au,c->r[0]); // 800F9A00
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 800F9A04
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800F9A08
  W8(c->r[3]+0x0000000Du,c->r[0]); // 800F9A0C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 800F9A10
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 800F9A14
L_800F9A18:;
  W32(c->r[28]+0x00000000u,c->r[29]); // 800F9A18
  c->r[3]=c->r[24]|c->r[24]; // 800F9A1C
  W8(c->r[27]+0x00000000u,c->r[30]); // 800F9A20
  W32(c->r[29]+0x000008E8u,c->r[30]); // 800F9A24
  c->lr=0x800F9A2Cu; f_800F9640(c); // 800F9A28
  c->r[3]=c->r[29]+0x00000928u; // 800F9A2C
  c->lr=0x800F9A34u; f_800B356C(c); // 800F9A30
  c->r[3]=R32(c->r[28]+0x00000000u); // 800F9A34
  c->r[24]=c->r[24]+0x00000001u; // 800F9A38
  cmps(c,0,(int32_t)c->r[24],4); // 800F9A3C
  c->r[29]=c->r[29]+0x00000BE0u; // 800F9A40
  W8(c->r[3]+0x00000BA4u,c->r[30]); // 800F9A44
  c->r[28]=c->r[28]+0x00000004u; // 800F9A48
  c->r[27]=c->r[27]+0x00000001u; // 800F9A4C
  W8(c->r[26]+0x00000000u,c->r[30]); // 800F9A50
  c->r[26]=c->r[26]+0x00000001u; // 800F9A54
  W8(c->r[25]+0x00000000u,c->r[30]); // 800F9A58
  c->r[25]=c->r[25]+0x00000001u; // 800F9A5C
  if (crb(c,0)) { IRQCHK(c); goto L_800F9A18; } // 800F9A60
  c->r[0]=0u+0x00000005u; // 800F9A64
  W8(c->r[13]+0xFFFF9356u,c->r[0]); // 800F9A68
  c->lr=0x800F9A70u; f_800AAB64(c); // 800F9A6C
  W32(c->r[13]+0xFFFF9358u,c->r[3]); // 800F9A70
  c->lr=0x800F9A78u; f_800AABE8(c); // 800F9A74
  W8(c->r[13]+0xFFFF935Cu,c->r[3]); // 800F9A78
  c->lr=0x800F9A80u; f_800F6624(c); // 800F9A7C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F9A80
  cmpu(c,0,c->r[0],0x00000001u); // 800F9A84
  if (!crb(c,0)) { goto L_800F9A90; } // 800F9A88
  c->r[0]=0u+0x00000001u; // 800F9A8C
L_800F9A90:;
  cmpu(c,0,c->r[0],0x00000005u); // 800F9A90
  if (!crb(c,1)) { goto L_800F9A9C; } // 800F9A94
  c->r[0]=0u+0x00000005u; // 800F9A98
L_800F9A9C:;
  W8(c->r[13]+0xFFFF9355u,c->r[0]); // 800F9A9C
  c->lr=0x800F9AA4u; f_800F66E8(c); // 800F9AA0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800F9AA4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F9AA8
  c->r[0]=cntlz(c->r[0]); // 800F9AAC
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800F9AB0
  W8(c->r[13]+0xFFFF9354u,c->r[0]); // 800F9AB4
  c->lr=0x800F9ABCu; f_800F668C(c); // 800F9AB8
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800F9ABC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F9AC0
  c->r[0]=cntlz(c->r[0]); // 800F9AC4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F9AC8
  W32(c->r[13]+0xFFFF9350u,c->r[0]); // 800F9ACC
  c->lr=0x800F9AD4u; f_800F673C(c); // 800F9AD0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800F9AD4
  c->r[6]=c->r[3]|c->r[3]; // 800F9AD8
  if (!crb(c,2)) { goto L_800F9AE4; } // 800F9ADC
  c->r[6]=0u+0x00000000u; // 800F9AE0
L_800F9AE4:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F9AE4
  cmpu(c,0,c->r[0],0x0000007Fu); // 800F9AE8
  if (crb(c,0)) { goto L_800F9AF4; } // 800F9AEC
  c->r[6]=0u+0x0000007Fu; // 800F9AF0
L_800F9AF4:;
  c->r[5]=0u+0x00000000u; // 800F9AF4
  c->r[4]=0u+0x00000001u; // 800F9AF8
  c->r[0]=0u+0xFFFFFFFFu; // 800F9AFC
  W8(c->r[13]+0xFFFF934Fu,c->r[6]); // 800F9B00
  c->r[3]=R32(c->r[13]+0xFFFF8428u); // 800F9B04
  W16(c->r[13]+0xFFFF930Au,c->r[5]); // 800F9B08
  W8(c->r[13]+0xFFFF930Cu,c->r[5]); // 800F9B0C
  W16(c->r[13]+0xFFFF930Eu,c->r[5]); // 800F9B10
  W8(c->r[13]+0xFFFF934Du,c->r[5]); // 800F9B14
  W8(c->r[13]+0xFFFF934Eu,c->r[4]); // 800F9B18
  W8(c->r[13]+0xFFFF934Cu,c->r[0]); // 800F9B1C
  W32(c->r[13]+0xFFFF9340u,c->r[5]); // 800F9B20
  c->lr=0x800F9B28u; f_800AAB54(c); // 800F9B24
  c->r[12]=R32(c->r[13]+0xFFFF9320u); // 800F9B28
  cmps(c,0,(int32_t)c->r[12],0); // 800F9B2C
  if (crb(c,2)) { goto L_800F9B3C; } // 800F9B30
  c->ctr=c->r[12]; // 800F9B34
  if (true) { c->lr=0x800F9B3Cu; dispatch(c,c->ctr); } // 800F9B38
L_800F9B3C:;
  c->r[12]=R32(c->r[13]+0xFFFF9324u); // 800F9B3C
  cmps(c,0,(int32_t)c->r[12],0); // 800F9B40
  if (crb(c,2)) { goto L_800F9B50; } // 800F9B44
  c->ctr=c->r[12]; // 800F9B48
  if (true) { c->lr=0x800F9B50u; dispatch(c,c->ctr); } // 800F9B4C
L_800F9B50:;
  c->r[12]=R32(c->r[13]+0xFFFF9328u); // 800F9B50
  cmps(c,0,(int32_t)c->r[12],0); // 800F9B54
  if (crb(c,2)) { goto L_800F9B64; } // 800F9B58
  c->ctr=c->r[12]; // 800F9B5C
  if (true) { c->lr=0x800F9B64u; dispatch(c,c->ctr); } // 800F9B60
L_800F9B64:;
  c->r[12]=R32(c->r[13]+0xFFFF932Cu); // 800F9B64
  cmps(c,0,(int32_t)c->r[12],0); // 800F9B68
  if (crb(c,2)) { goto L_800F9B78; } // 800F9B6C
  c->ctr=c->r[12]; // 800F9B70
  if (true) { c->lr=0x800F9B78u; dispatch(c,c->ctr); } // 800F9B74
L_800F9B78:;
  c->r[3]=c->r[31]+0x00000000u; // 800F9B78
  c->lr=0x800F9B80u; f_800AAC60(c); // 800F9B7C
  c->lr=0x800F9B84u; f_800B48F4(c); // 800F9B80
  c->r[5]=0u+0x80000000u; // 800F9B84
  c->r[9]=0u+0x80100000u; // 800F9B88
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800F9B8C
  c->r[6]=0u+0x10620000u; // 800F9B90
  c->r[5]=c->r[3]|c->r[3]; // 800F9B94
  c->r[9]=c->r[9]+0xFFFF9620u; // 800F9B98
  c->r[3]=c->r[6]+0x00004DD3u; // 800F9B9C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F9BA0
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 800F9BA4
  c->r[6]=c->r[4]|c->r[4]; // 800F9BA8
  c->r[3]=c->r[31]+0x00000000u; // 800F9BAC
  c->r[7]=0u+0x00000000u; // 800F9BB0
  c->r[8]=rotl(c->r[0],26)&0x03FFFFFFu; // 800F9BB4
  c->lr=0x800F9BBCu; f_800AAF30(c); // 800F9BB8
  c->r[11]=c->r[1]+0x00000030u; // 800F9BBC
  c->lr=0x800F9BC4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F9BC0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F9BC4
  c->lr=c->r[0]; // 800F9BC8
  c->r[1]=c->r[1]+0x00000030u; // 800F9BCC
  return; // 800F9BD0
}

// WPADInit
void f_800F9BE0(Ctx* __restrict c) {
  stub_log(0x800F9BE0u);  return;
}

// WPADStartFastSimpleSync
void f_800F9C50(Ctx* __restrict c) {
  stub_log(0x800F9C50u); c->r[3]=0; return;
}

// WPADStopSimpleSync
void f_800F9C60(Ctx* __restrict c) {
  stub_log(0x800F9C60u); c->r[3]=0; return;
}

// WPADSetSimpleSyncCallback
void f_800F9C70(Ctx* __restrict c) {
  trace_call(0x800F9C70u);
  f_8010BE0C(c); return; // 800F9C70
}

// WPADRegisterAllocator
void f_800F9C80(Ctx* __restrict c) {
  trace_call(0x800F9C80u);
  f_8010BAB0(c); return; // 800F9C80
}

// WPADGetStatus
void f_800F9C90(Ctx* __restrict c) {
  trace_call(0x800F9C90u);
  f_8010BD1C(c); return; // 800F9C90
}

// WPADGetRadioSensitivity
void f_800F9CA0(Ctx* __restrict c) {
  stub_log(0x800F9CA0u); c->r[3]=0; return;
}

// WPADGetSensorBarPosition
void f_800F9CF0(Ctx* __restrict c) {
  trace_call(0x800F9CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9CF0
  c->r[0]=c->lr; // 800F9CF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9CF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9CFC
  c->lr=0x800F9D04u; f_800B087C(c); // 800F9D00
  c->r[31]=R8(c->r[13]+0xFFFF9354u); // 800F9D04
  c->lr=0x800F9D0Cu; f_800B08A4(c); // 800F9D08
  c->r[3]=c->r[31]|c->r[31]; // 800F9D0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9D10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9D14
  c->lr=c->r[0]; // 800F9D18
  c->r[1]=c->r[1]+0x00000010u; // 800F9D1C
  return; // 800F9D20
}

// __wpadSetupConnectionCallback
void f_800F9D30(Ctx* __restrict c) {
  trace_call(0x800F9D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9D30
  c->r[0]=c->lr; // 800F9D34
  cmps(c,0,(int32_t)c->r[4],0); // 800F9D38
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9D3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9D40
  c->r[31]=0u+0x802E0000u; // 800F9D44
  c->r[31]=c->r[31]+0xFFFFB290u; // 800F9D48
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F9D4C
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F9D50
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F9D54
  c->r[29]=R32(c->r[31]+c->r[30]); // 800F9D58
  if (!crb(c,2)) { goto L_800F9D80; } // 800F9D5C
  c->r[0]=0u+0x00000001u; // 800F9D60
  W32(c->r[29]+0x00000920u,c->r[0]); // 800F9D64
  c->r[12]=R32(c->r[29]+0x000008E8u); // 800F9D68
  cmps(c,0,(int32_t)c->r[12],0); // 800F9D6C
  if (crb(c,2)) { goto L_800F9DE0; } // 800F9D70
  c->ctr=c->r[12]; // 800F9D74
  if (true) { c->lr=0x800F9D7Cu; dispatch(c,c->ctr); } // 800F9D78
  goto L_800F9DE0; // 800F9D7C
L_800F9D80:;
  c->lr=0x800F9D84u; f_800B087C(c); // 800F9D80
  c->r[29]=R32(c->r[29]+0x00000900u); // 800F9D84
  c->lr=0x800F9D8Cu; f_800B08A4(c); // 800F9D88
  cmps(c,0,(int32_t)c->r[29],-1); // 800F9D8C
  if (crb(c,2)) { goto L_800F9DE0; } // 800F9D90
  c->r[30]=R32(c->r[31]+c->r[30]); // 800F9D94
  c->lr=0x800F9D9Cu; f_800B087C(c); // 800F9D98
  c->r[30]=R8(c->r[30]+0x00000907u); // 800F9D9C
  c->lr=0x800F9DA4u; f_800B08A4(c); // 800F9DA0
  c->r[3]=c->r[30]|c->r[30]; // 800F9DA4
  c->lr=0x800F9DACu; f_8010E704(c); // 800F9DA8
  cmps(c,0,(int32_t)c->r[3],0); // 800F9DAC
  if (crb(c,2)) { goto L_800F9DC8; } // 800F9DB0
  c->r[4]=c->r[3]|c->r[3]; // 800F9DB4
  c->r[3]=c->r[1]+0x00000008u; // 800F9DB8
  c->r[5]=0u+0x00000006u; // 800F9DBC
  c->lr=0x800F9DC4u; f_80004338(c); // 800F9DC0
  goto L_800F9DD8; // 800F9DC4
L_800F9DC8:;
  c->r[3]=c->r[1]+0x00000008u; // 800F9DC8
  c->r[4]=0u+0x00000000u; // 800F9DCC
  c->r[5]=0u+0x00000006u; // 800F9DD0
  c->lr=0x800F9DD8u; f_80004688(c); // 800F9DD4
L_800F9DD8:;
  c->r[3]=c->r[1]+0x00000008u; // 800F9DD8
  c->lr=0x800F9DE0u; f_80119FD8(c); // 800F9DDC
L_800F9DE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9DE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9DE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F9DE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F9DEC
  c->lr=c->r[0]; // 800F9DF0
  c->r[1]=c->r[1]+0x00000020u; // 800F9DF4
  return; // 800F9DF8
}

// __wpadAbortConnectionCallback
void f_800F9E00(Ctx* __restrict c) {
  trace_call(0x800F9E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9E00
  c->r[0]=c->lr; // 800F9E04
  cmps(c,0,(int32_t)c->r[4],0); // 800F9E08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9E0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9E10
  c->r[31]=0u+0x802E0000u; // 800F9E14
  c->r[31]=c->r[31]+0xFFFFB290u; // 800F9E18
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F9E1C
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F9E20
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F9E24
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F9E28
  c->r[28]=R32(c->r[31]+c->r[30]); // 800F9E2C
  if (crb(c,2)) { goto L_800F9EC8; } // 800F9E30
  c->lr=0x800F9E38u; f_800B087C(c); // 800F9E34
  c->r[0]=0u+0x00000000u; // 800F9E38
  W8(c->r[28]+0x00000160u,c->r[0]); // 800F9E3C
  c->r[29]=c->r[3]|c->r[3]; // 800F9E40
  c->r[4]=0u+0x00000000u; // 800F9E44
  W8(c->r[28]+0x00000161u,c->r[0]); // 800F9E48
  c->r[0]=R32(c->r[28]+0x00000168u); // 800F9E4C
  c->r[3]=R32(c->r[28]+0x00000164u); // 800F9E50
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800F9E54
  c->lr=0x800F9E5Cu; f_80004688(c); // 800F9E58
  c->r[3]=c->r[29]|c->r[29]; // 800F9E5C
  c->lr=0x800F9E64u; f_800B08A4(c); // 800F9E60
  c->r[29]=R32(c->r[31]+c->r[30]); // 800F9E64
  c->lr=0x800F9E6Cu; f_800B087C(c); // 800F9E68
  c->r[29]=R32(c->r[29]+0x00000900u); // 800F9E6C
  c->lr=0x800F9E74u; f_800B08A4(c); // 800F9E70
  cmps(c,0,(int32_t)c->r[29],-1); // 800F9E74
  if (crb(c,2)) { goto L_800F9EC8; } // 800F9E78
  c->r[29]=R32(c->r[31]+c->r[30]); // 800F9E7C
  c->lr=0x800F9E84u; f_800B087C(c); // 800F9E80
  c->r[29]=R8(c->r[29]+0x00000907u); // 800F9E84
  c->lr=0x800F9E8Cu; f_800B08A4(c); // 800F9E88
  c->r[3]=c->r[29]|c->r[29]; // 800F9E8C
  c->lr=0x800F9E94u; f_8010E704(c); // 800F9E90
  cmps(c,0,(int32_t)c->r[3],0); // 800F9E94
  if (crb(c,2)) { goto L_800F9EB0; } // 800F9E98
  c->r[4]=c->r[3]|c->r[3]; // 800F9E9C
  c->r[3]=c->r[1]+0x00000008u; // 800F9EA0
  c->r[5]=0u+0x00000006u; // 800F9EA4
  c->lr=0x800F9EACu; f_80004338(c); // 800F9EA8
  goto L_800F9EC0; // 800F9EAC
L_800F9EB0:;
  c->r[3]=c->r[1]+0x00000008u; // 800F9EB0
  c->r[4]=0u+0x00000000u; // 800F9EB4
  c->r[5]=0u+0x00000006u; // 800F9EB8
  c->lr=0x800F9EC0u; f_80004688(c); // 800F9EBC
L_800F9EC0:;
  c->r[3]=c->r[1]+0x00000008u; // 800F9EC0
  c->lr=0x800F9EC8u; f_80119FD8(c); // 800F9EC4
L_800F9EC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9EC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9ECC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F9ED0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F9ED4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F9ED8
  c->lr=c->r[0]; // 800F9EDC
  c->r[1]=c->r[1]+0x00000020u; // 800F9EE0
  return; // 800F9EE4
}

// __wpadInitConnectionCallback
void f_800F9EF0(Ctx* __restrict c) {
  trace_call(0x800F9EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFD80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9EF0
  c->r[0]=c->lr; // 800F9EF4
  W32(c->r[1]+0x00000284u,c->r[0]); // 800F9EF8
  c->r[11]=c->r[1]+0x00000280u; // 800F9EFC
  c->lr=0x800F9F04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F9F00
  c->r[5]=0u+0x802E0000u; // 800F9F04
  cmps(c,0,(int32_t)c->r[4],-1); // 800F9F08
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F9F0C
  c->r[27]=c->r[3]|c->r[3]; // 800F9F10
  c->r[5]=c->r[5]+0xFFFFB290u; // 800F9F14
  c->r[26]=c->r[4]|c->r[4]; // 800F9F18
  c->r[29]=R32(c->r[5]+c->r[0]); // 800F9F1C
  if (crb(c,2)) { goto L_800FA7A4; } // 800F9F20
  c->lr=0x800F9F28u; f_800B087C(c); // 800F9F24
  c->r[4]=cntlz(c->r[26]); // 800F9F28
  c->r[0]=0u+0x00000000u; // 800F9F2C
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800F9F30
  W32(c->r[29]+0x00000924u,c->r[4]); // 800F9F34
  W32(c->r[29]+0x00000900u,c->r[0]); // 800F9F38
  c->lr=0x800F9F40u; f_800B08A4(c); // 800F9F3C
  cmps(c,0,(int32_t)c->r[26],0); // 800F9F40
  c->r[31]=0u+0x0000002Au; // 800F9F44
  if (!crb(c,2)) { goto L_800F9F50; } // 800F9F48
  c->r[31]=0u+0x00000014u; // 800F9F4C
L_800F9F50:;
  c->r[3]=cntlz(c->r[26]); // 800F9F50
  c->r[0]=R8(c->r[29]+0x00000905u); // 800F9F54
  c->r[4]=rotl(c->r[3],27)&0x00000001u; // 800F9F58
  c->r[4]=0u-c->r[4]; // 800F9F5C
  cmpu(c,1,c->r[0],0x00000003u); // 800F9F60
  c->r[28]=c->r[4]&0x0000176Cu; cr0(c,c->r[28]); // 800F9F64
  c->r[3]=0u+0x00000001u; // 800F9F68
  if (crb(c,6)) { goto L_800F9F74; } // 800F9F6C
  c->r[3]=((c->r[27])&0x20)?0u:(c->r[3]<<((c->r[27])&31)); // 800F9F70
L_800F9F74:;
  c->r[30]=0u+0x80100000u; // 800F9F74
  c->r[5]=R8(c->r[29]+0x00000B7Eu); // 800F9F78
  c->r[27]=rotl(c->r[3],0)&0x000000FFu; // 800F9F7C
  c->r[3]=c->r[29]+0x00000160u; // 800F9F80
  c->r[6]=c->r[30]+0xFFFF9E00u; // 800F9F84
  c->r[4]=0u+0x00000000u; // 800F9F88
  c->lr=0x800F9F90u; f_80100190(c); // 800F9F8C
  c->r[0]=0u+0x00000001u; // 800F9F90
  W16(c->r[1]+0x0000021Au,c->r[0]); // 800F9F94
  c->r[0]=0u+0x00000000u; // 800F9F98
  c->r[12]=c->r[30]+0xFFFF9E00u; // 800F9F9C
  W8(c->r[1]+0x00000204u,c->r[0]); // 800F9FA0
  c->r[30]=0u+0x0000001Au; // 800F9FA4
  c->r[10]=R32(c->r[1]+0x00000208u); // 800F9FA8
  c->r[11]=R32(c->r[1]+0x00000204u); // 800F9FAC
  c->r[9]=R32(c->r[1]+0x0000020Cu); // 800F9FB0
  c->r[8]=R32(c->r[1]+0x00000210u); // 800F9FB4
  c->r[7]=R32(c->r[1]+0x00000214u); // 800F9FB8
  c->r[6]=R32(c->r[1]+0x00000218u); // 800F9FBC
  c->r[5]=R32(c->r[1]+0x0000021Cu); // 800F9FC0
  c->r[4]=R32(c->r[1]+0x00000220u); // 800F9FC4
  c->r[3]=R32(c->r[1]+0x00000224u); // 800F9FC8
  c->r[0]=R32(c->r[1]+0x00000228u); // 800F9FCC
  W32(c->r[1]+0x00000200u,c->r[30]); // 800F9FD0
  W32(c->r[1]+0x0000022Cu,c->r[12]); // 800F9FD4
  W32(c->r[1]+0x00000230u,c->r[30]); // 800F9FD8
  W32(c->r[1]+0x00000234u,c->r[11]); // 800F9FDC
  W32(c->r[1]+0x00000238u,c->r[10]); // 800F9FE0
  W32(c->r[1]+0x0000023Cu,c->r[9]); // 800F9FE4
  W32(c->r[1]+0x00000240u,c->r[8]); // 800F9FE8
  W32(c->r[1]+0x00000244u,c->r[7]); // 800F9FEC
  W32(c->r[1]+0x00000248u,c->r[6]); // 800F9FF0
  W32(c->r[1]+0x0000024Cu,c->r[5]); // 800F9FF4
  W32(c->r[1]+0x00000250u,c->r[4]); // 800F9FF8
  W32(c->r[1]+0x00000254u,c->r[3]); // 800F9FFC
  W32(c->r[1]+0x00000258u,c->r[0]); // 800FA000
  W32(c->r[1]+0x0000025Cu,c->r[12]); // 800FA004
  c->lr=0x800FA00Cu; f_800B087C(c); // 800FA008
  c->r[30]=c->r[3]|c->r[3]; // 800FA00C
  c->lr=0x800FA014u; f_800B087C(c); // 800FA010
  c->r[4]=R8(c->r[29]+0x00000160u); // 800FA014
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA018
  c->r[0]=c->r[0]-c->r[4]; // 800FA01C
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[26]); // 800FA020
  if (!crb(c,0)) { goto L_800FA034; } // 800FA024
  c->r[0]=R32(c->r[29]+0x00000168u); // 800FA028
  c->r[0]=c->r[26]+c->r[0]; // 800FA02C
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA030
L_800FA034:;
  c->lr=0x800FA038u; f_800B08A4(c); // 800FA034
  c->r[3]=R32(c->r[29]+0x00000168u); // 800FA038
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FA03C
  cmpu(c,0,c->r[0],c->r[26]); // 800FA040
  if (!crb(c,2)) { goto L_800FA054; } // 800FA044
  c->r[3]=c->r[30]|c->r[30]; // 800FA048
  c->lr=0x800FA050u; f_800B08A4(c); // 800FA04C
  goto L_800FA0C8; // 800FA050
L_800FA054:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA054
  c->r[4]=0u+0x00000000u; // 800FA058
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA05C
  c->r[5]=0u+0x00000030u; // 800FA060
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA064
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA068
  c->r[3]=c->r[3]+c->r[0]; // 800FA06C
  c->lr=0x800FA074u; f_80004688(c); // 800FA070
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA074
  c->r[4]=c->r[1]+0x00000230u; // 800FA078
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA07C
  c->r[5]=0u+0x00000030u; // 800FA080
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA084
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA088
  c->r[3]=c->r[3]+c->r[0]; // 800FA08C
  c->lr=0x800FA094u; f_80004338(c); // 800FA090
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA094
  c->r[3]=c->r[30]|c->r[30]; // 800FA098
  c->r[4]=R32(c->r[29]+0x00000168u); // 800FA09C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA0A0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FA0A4
  c->r[5]=c->r[6]-c->r[4]; // 800FA0A8
  c->r[0]=c->r[6]+0x00000001u; // 800FA0AC
  c->r[4]=c->r[4]-c->r[6]; // 800FA0B0
  c->r[4]=~(c->r[5]|c->r[4]); // 800FA0B4
  c->r[4]=sraw(c,c->r[4],31); // 800FA0B8
  c->r[0]=c->r[0]&~c->r[4]; // 800FA0BC
  W8(c->r[29]+0x00000161u,c->r[0]); // 800FA0C0
  c->lr=0x800FA0C8u; f_800B08A4(c); // 800FA0C4
L_800FA0C8:;
  c->r[0]=rotl(c->r[27],4)&0x000000F0u; // 800FA0C8
  W8(c->r[1]+0x000001A4u,c->r[0]); // 800FA0CC
  c->r[0]=0u+0x00000001u; // 800FA0D0
  c->r[27]=0u+0x00000011u; // 800FA0D4
  W16(c->r[1]+0x000001BAu,c->r[0]); // 800FA0D8
  c->r[12]=0u+0x80100000u; // 800FA0DC
  c->r[12]=c->r[12]+0xFFFF9E00u; // 800FA0E0
  c->r[11]=R32(c->r[1]+0x000001A4u); // 800FA0E4
  c->r[10]=R32(c->r[1]+0x000001A8u); // 800FA0E8
  c->r[9]=R32(c->r[1]+0x000001ACu); // 800FA0EC
  c->r[8]=R32(c->r[1]+0x000001B0u); // 800FA0F0
  c->r[7]=R32(c->r[1]+0x000001B4u); // 800FA0F4
  c->r[6]=R32(c->r[1]+0x000001B8u); // 800FA0F8
  c->r[5]=R32(c->r[1]+0x000001BCu); // 800FA0FC
  c->r[4]=R32(c->r[1]+0x000001C0u); // 800FA100
  c->r[3]=R32(c->r[1]+0x000001C4u); // 800FA104
  c->r[0]=R32(c->r[1]+0x000001C8u); // 800FA108
  W32(c->r[1]+0x000001A0u,c->r[27]); // 800FA10C
  W32(c->r[1]+0x000001CCu,c->r[12]); // 800FA110
  W32(c->r[1]+0x000001D0u,c->r[27]); // 800FA114
  W32(c->r[1]+0x000001D4u,c->r[11]); // 800FA118
  W32(c->r[1]+0x000001D8u,c->r[10]); // 800FA11C
  W32(c->r[1]+0x000001DCu,c->r[9]); // 800FA120
  W32(c->r[1]+0x000001E0u,c->r[8]); // 800FA124
  W32(c->r[1]+0x000001E4u,c->r[7]); // 800FA128
  W32(c->r[1]+0x000001E8u,c->r[6]); // 800FA12C
  W32(c->r[1]+0x000001ECu,c->r[5]); // 800FA130
  W32(c->r[1]+0x000001F0u,c->r[4]); // 800FA134
  W32(c->r[1]+0x000001F4u,c->r[3]); // 800FA138
  W32(c->r[1]+0x000001F8u,c->r[0]); // 800FA13C
  W32(c->r[1]+0x000001FCu,c->r[12]); // 800FA140
  c->lr=0x800FA148u; f_800B087C(c); // 800FA144
  c->r[30]=c->r[3]|c->r[3]; // 800FA148
  c->lr=0x800FA150u; f_800B087C(c); // 800FA14C
  c->r[4]=R8(c->r[29]+0x00000160u); // 800FA150
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA154
  c->r[0]=c->r[0]-c->r[4]; // 800FA158
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[26]); // 800FA15C
  if (!crb(c,0)) { goto L_800FA170; } // 800FA160
  c->r[0]=R32(c->r[29]+0x00000168u); // 800FA164
  c->r[0]=c->r[26]+c->r[0]; // 800FA168
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA16C
L_800FA170:;
  c->lr=0x800FA174u; f_800B08A4(c); // 800FA170
  c->r[3]=R32(c->r[29]+0x00000168u); // 800FA174
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FA178
  cmpu(c,0,c->r[0],c->r[26]); // 800FA17C
  if (!crb(c,2)) { goto L_800FA190; } // 800FA180
  c->r[3]=c->r[30]|c->r[30]; // 800FA184
  c->lr=0x800FA18Cu; f_800B08A4(c); // 800FA188
  goto L_800FA204; // 800FA18C
L_800FA190:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA190
  c->r[4]=0u+0x00000000u; // 800FA194
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA198
  c->r[5]=0u+0x00000030u; // 800FA19C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA1A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA1A4
  c->r[3]=c->r[3]+c->r[0]; // 800FA1A8
  c->lr=0x800FA1B0u; f_80004688(c); // 800FA1AC
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA1B0
  c->r[4]=c->r[1]+0x000001D0u; // 800FA1B4
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA1B8
  c->r[5]=0u+0x00000030u; // 800FA1BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA1C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA1C4
  c->r[3]=c->r[3]+c->r[0]; // 800FA1C8
  c->lr=0x800FA1D0u; f_80004338(c); // 800FA1CC
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA1D0
  c->r[3]=c->r[30]|c->r[30]; // 800FA1D4
  c->r[4]=R32(c->r[29]+0x00000168u); // 800FA1D8
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA1DC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FA1E0
  c->r[5]=c->r[6]-c->r[4]; // 800FA1E4
  c->r[0]=c->r[6]+0x00000001u; // 800FA1E8
  c->r[4]=c->r[4]-c->r[6]; // 800FA1EC
  c->r[4]=~(c->r[5]|c->r[4]); // 800FA1F0
  c->r[4]=sraw(c,c->r[4],31); // 800FA1F4
  c->r[0]=c->r[0]&~c->r[4]; // 800FA1F8
  W8(c->r[29]+0x00000161u,c->r[0]); // 800FA1FC
  c->lr=0x800FA204u; f_800B08A4(c); // 800FA200
L_800FA204:;
  c->r[6]=0u+0x80100000u; // 800FA204
  c->r[3]=0u+0x0000002Au; // 800FA208
  c->r[6]=c->r[6]+0xFFFF9E00u; // 800FA20C
  c->r[8]=0u+0x00000038u; // 800FA210
  c->r[7]=0u+0x00000017u; // 800FA214
  c->r[0]=0u+0x00000006u; // 800FA218
  W32(c->r[1]+0x00000018u,c->r[3]); // 800FA21C
  c->r[3]=c->r[1]+0x00000144u; // 800FA220
  c->r[4]=c->r[1]+0x00000018u; // 800FA224
  c->r[5]=0u+0x00000004u; // 800FA228
  W16(c->r[1]+0x0000000Cu,c->r[8]); // 800FA22C
  W32(c->r[1]+0x00000140u,c->r[7]); // 800FA230
  W16(c->r[1]+0x0000015Au,c->r[0]); // 800FA234
  W32(c->r[1]+0x0000016Cu,c->r[6]); // 800FA238
  c->lr=0x800FA240u; f_80004338(c); // 800FA23C
  c->r[3]=c->r[1]+0x00000148u; // 800FA240
  c->r[4]=c->r[1]+0x0000000Cu; // 800FA244
  c->r[5]=0u+0x00000002u; // 800FA248
  c->lr=0x800FA250u; f_80004338(c); // 800FA24C
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 800FA250
  c->r[27]=c->r[29]+0x00000B24u; // 800FA254
  W16(c->r[1]+0x00000160u,c->r[0]); // 800FA258
  c->r[12]=R32(c->r[1]+0x00000018u); // 800FA25C
  c->r[11]=R32(c->r[1]+0x00000140u); // 800FA260
  c->r[10]=R32(c->r[1]+0x00000144u); // 800FA264
  c->r[9]=R32(c->r[1]+0x00000148u); // 800FA268
  c->r[8]=R32(c->r[1]+0x0000014Cu); // 800FA26C
  c->r[7]=R32(c->r[1]+0x00000150u); // 800FA270
  c->r[6]=R32(c->r[1]+0x00000154u); // 800FA274
  c->r[5]=R32(c->r[1]+0x00000158u); // 800FA278
  c->r[4]=R32(c->r[1]+0x00000160u); // 800FA27C
  c->r[3]=R32(c->r[1]+0x00000168u); // 800FA280
  c->r[0]=R32(c->r[1]+0x0000016Cu); // 800FA284
  W32(c->r[1]+0x0000015Cu,c->r[27]); // 800FA288
  W32(c->r[1]+0x00000164u,c->r[12]); // 800FA28C
  W32(c->r[1]+0x00000170u,c->r[11]); // 800FA290
  W32(c->r[1]+0x00000174u,c->r[10]); // 800FA294
  W32(c->r[1]+0x00000178u,c->r[9]); // 800FA298
  W32(c->r[1]+0x0000017Cu,c->r[8]); // 800FA29C
  W32(c->r[1]+0x00000180u,c->r[7]); // 800FA2A0
  W32(c->r[1]+0x00000184u,c->r[6]); // 800FA2A4
  W32(c->r[1]+0x00000188u,c->r[5]); // 800FA2A8
  W32(c->r[1]+0x0000018Cu,c->r[27]); // 800FA2AC
  W32(c->r[1]+0x00000190u,c->r[4]); // 800FA2B0
  W32(c->r[1]+0x00000194u,c->r[12]); // 800FA2B4
  W32(c->r[1]+0x00000198u,c->r[3]); // 800FA2B8
  W32(c->r[1]+0x0000019Cu,c->r[0]); // 800FA2BC
  c->lr=0x800FA2C4u; f_800B087C(c); // 800FA2C0
  c->r[30]=c->r[3]|c->r[3]; // 800FA2C4
  c->lr=0x800FA2CCu; f_800B087C(c); // 800FA2C8
  c->r[4]=R8(c->r[29]+0x00000160u); // 800FA2CC
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA2D0
  c->r[0]=c->r[0]-c->r[4]; // 800FA2D4
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[26]); // 800FA2D8
  if (!crb(c,0)) { goto L_800FA2EC; } // 800FA2DC
  c->r[0]=R32(c->r[29]+0x00000168u); // 800FA2E0
  c->r[0]=c->r[26]+c->r[0]; // 800FA2E4
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA2E8
L_800FA2EC:;
  c->lr=0x800FA2F0u; f_800B08A4(c); // 800FA2EC
  c->r[3]=R32(c->r[29]+0x00000168u); // 800FA2F0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FA2F4
  cmpu(c,0,c->r[0],c->r[26]); // 800FA2F8
  if (!crb(c,2)) { goto L_800FA30C; } // 800FA2FC
  c->r[3]=c->r[30]|c->r[30]; // 800FA300
  c->lr=0x800FA308u; f_800B08A4(c); // 800FA304
  goto L_800FA380; // 800FA308
L_800FA30C:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA30C
  c->r[4]=0u+0x00000000u; // 800FA310
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA314
  c->r[5]=0u+0x00000030u; // 800FA318
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA31C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA320
  c->r[3]=c->r[3]+c->r[0]; // 800FA324
  c->lr=0x800FA32Cu; f_80004688(c); // 800FA328
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA32C
  c->r[4]=c->r[1]+0x00000170u; // 800FA330
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA334
  c->r[5]=0u+0x00000030u; // 800FA338
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA33C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA340
  c->r[3]=c->r[3]+c->r[0]; // 800FA344
  c->lr=0x800FA34Cu; f_80004338(c); // 800FA348
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA34C
  c->r[3]=c->r[30]|c->r[30]; // 800FA350
  c->r[4]=R32(c->r[29]+0x00000168u); // 800FA354
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA358
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FA35C
  c->r[5]=c->r[6]-c->r[4]; // 800FA360
  c->r[0]=c->r[6]+0x00000001u; // 800FA364
  c->r[4]=c->r[4]-c->r[6]; // 800FA368
  c->r[4]=~(c->r[5]|c->r[4]); // 800FA36C
  c->r[4]=sraw(c,c->r[4],31); // 800FA370
  c->r[0]=c->r[0]&~c->r[4]; // 800FA374
  W8(c->r[29]+0x00000161u,c->r[0]); // 800FA378
  c->lr=0x800FA380u; f_800B08A4(c); // 800FA37C
L_800FA380:;
  c->r[6]=0u+0x80100000u; // 800FA380
  c->r[3]=0u+0x00000062u; // 800FA384
  c->r[6]=c->r[6]+0xFFFF9E00u; // 800FA388
  c->r[8]=0u+0x00000038u; // 800FA38C
  c->r[7]=0u+0x00000017u; // 800FA390
  c->r[0]=0u+0x00000006u; // 800FA394
  W32(c->r[1]+0x00000014u,c->r[3]); // 800FA398
  c->r[3]=c->r[1]+0x000000E4u; // 800FA39C
  c->r[4]=c->r[1]+0x00000014u; // 800FA3A0
  c->r[5]=0u+0x00000004u; // 800FA3A4
  W16(c->r[1]+0x0000000Au,c->r[8]); // 800FA3A8
  W32(c->r[1]+0x000000E0u,c->r[7]); // 800FA3AC
  W16(c->r[1]+0x000000FAu,c->r[0]); // 800FA3B0
  W32(c->r[1]+0x0000010Cu,c->r[6]); // 800FA3B4
  c->lr=0x800FA3BCu; f_80004338(c); // 800FA3B8
  c->r[3]=c->r[1]+0x000000E8u; // 800FA3BC
  c->r[4]=c->r[1]+0x0000000Au; // 800FA3C0
  c->r[5]=0u+0x00000002u; // 800FA3C4
  c->lr=0x800FA3CCu; f_80004338(c); // 800FA3C8
  c->r[0]=R16(c->r[1]+0x0000000Au); // 800FA3CC
  c->r[27]=c->r[29]+0x00000B24u; // 800FA3D0
  W16(c->r[1]+0x00000100u,c->r[0]); // 800FA3D4
  c->r[12]=R32(c->r[1]+0x00000014u); // 800FA3D8
  c->r[11]=R32(c->r[1]+0x000000E0u); // 800FA3DC
  c->r[10]=R32(c->r[1]+0x000000E4u); // 800FA3E0
  c->r[9]=R32(c->r[1]+0x000000E8u); // 800FA3E4
  c->r[8]=R32(c->r[1]+0x000000ECu); // 800FA3E8
  c->r[7]=R32(c->r[1]+0x000000F0u); // 800FA3EC
  c->r[6]=R32(c->r[1]+0x000000F4u); // 800FA3F0
  c->r[5]=R32(c->r[1]+0x000000F8u); // 800FA3F4
  c->r[4]=R32(c->r[1]+0x00000100u); // 800FA3F8
  c->r[3]=R32(c->r[1]+0x00000108u); // 800FA3FC
  c->r[0]=R32(c->r[1]+0x0000010Cu); // 800FA400
  W32(c->r[1]+0x000000FCu,c->r[27]); // 800FA404
  W32(c->r[1]+0x00000104u,c->r[12]); // 800FA408
  W32(c->r[1]+0x00000110u,c->r[11]); // 800FA40C
  W32(c->r[1]+0x00000114u,c->r[10]); // 800FA410
  W32(c->r[1]+0x00000118u,c->r[9]); // 800FA414
  W32(c->r[1]+0x0000011Cu,c->r[8]); // 800FA418
  W32(c->r[1]+0x00000120u,c->r[7]); // 800FA41C
  W32(c->r[1]+0x00000124u,c->r[6]); // 800FA420
  W32(c->r[1]+0x00000128u,c->r[5]); // 800FA424
  W32(c->r[1]+0x0000012Cu,c->r[27]); // 800FA428
  W32(c->r[1]+0x00000130u,c->r[4]); // 800FA42C
  W32(c->r[1]+0x00000134u,c->r[12]); // 800FA430
  W32(c->r[1]+0x00000138u,c->r[3]); // 800FA434
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 800FA438
  c->lr=0x800FA440u; f_800B087C(c); // 800FA43C
  c->r[30]=c->r[3]|c->r[3]; // 800FA440
  c->lr=0x800FA448u; f_800B087C(c); // 800FA444
  c->r[4]=R8(c->r[29]+0x00000160u); // 800FA448
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA44C
  c->r[0]=c->r[0]-c->r[4]; // 800FA450
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[26]); // 800FA454
  if (!crb(c,0)) { goto L_800FA468; } // 800FA458
  c->r[0]=R32(c->r[29]+0x00000168u); // 800FA45C
  c->r[0]=c->r[26]+c->r[0]; // 800FA460
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA464
L_800FA468:;
  c->lr=0x800FA46Cu; f_800B08A4(c); // 800FA468
  c->r[3]=R32(c->r[29]+0x00000168u); // 800FA46C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FA470
  cmpu(c,0,c->r[0],c->r[26]); // 800FA474
  if (!crb(c,2)) { goto L_800FA488; } // 800FA478
  c->r[3]=c->r[30]|c->r[30]; // 800FA47C
  c->lr=0x800FA484u; f_800B08A4(c); // 800FA480
  goto L_800FA4FC; // 800FA484
L_800FA488:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA488
  c->r[4]=0u+0x00000000u; // 800FA48C
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA490
  c->r[5]=0u+0x00000030u; // 800FA494
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA498
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA49C
  c->r[3]=c->r[3]+c->r[0]; // 800FA4A0
  c->lr=0x800FA4A8u; f_80004688(c); // 800FA4A4
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA4A8
  c->r[4]=c->r[1]+0x00000110u; // 800FA4AC
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA4B0
  c->r[5]=0u+0x00000030u; // 800FA4B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA4B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA4BC
  c->r[3]=c->r[3]+c->r[0]; // 800FA4C0
  c->lr=0x800FA4C8u; f_80004338(c); // 800FA4C4
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA4C8
  c->r[3]=c->r[30]|c->r[30]; // 800FA4CC
  c->r[4]=R32(c->r[29]+0x00000168u); // 800FA4D0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA4D4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FA4D8
  c->r[5]=c->r[6]-c->r[4]; // 800FA4DC
  c->r[0]=c->r[6]+0x00000001u; // 800FA4E0
  c->r[4]=c->r[4]-c->r[6]; // 800FA4E4
  c->r[4]=~(c->r[5]|c->r[4]); // 800FA4E8
  c->r[4]=sraw(c,c->r[4],31); // 800FA4EC
  c->r[0]=c->r[0]&~c->r[4]; // 800FA4F0
  W8(c->r[29]+0x00000161u,c->r[0]); // 800FA4F4
  c->lr=0x800FA4FCu; f_800B08A4(c); // 800FA4F8
L_800FA4FC:;
  c->r[6]=0u+0x80100000u; // 800FA4FC
  c->r[7]=0u+0x00000017u; // 800FA500
  c->r[6]=c->r[6]+0xFFFF9D30u; // 800FA504
  c->r[0]=0u+0x00000006u; // 800FA508
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FA50C
  c->r[3]=c->r[1]+0x00000084u; // 800FA510
  c->r[4]=c->r[1]+0x00000010u; // 800FA514
  c->r[5]=0u+0x00000004u; // 800FA518
  W16(c->r[1]+0x00000008u,c->r[31]); // 800FA51C
  W32(c->r[1]+0x00000080u,c->r[7]); // 800FA520
  W16(c->r[1]+0x0000009Au,c->r[0]); // 800FA524
  W32(c->r[1]+0x000000ACu,c->r[6]); // 800FA528
  c->lr=0x800FA530u; f_80004338(c); // 800FA52C
  c->r[3]=c->r[1]+0x00000088u; // 800FA530
  c->r[4]=c->r[1]+0x00000008u; // 800FA534
  c->r[5]=0u+0x00000002u; // 800FA538
  c->lr=0x800FA540u; f_80004338(c); // 800FA53C
  c->r[0]=R16(c->r[1]+0x00000008u); // 800FA540
  c->r[27]=c->r[29]+0x00000B24u; // 800FA544
  W16(c->r[1]+0x000000A0u,c->r[0]); // 800FA548
  c->r[12]=R32(c->r[1]+0x00000010u); // 800FA54C
  c->r[11]=R32(c->r[1]+0x00000080u); // 800FA550
  c->r[10]=R32(c->r[1]+0x00000084u); // 800FA554
  c->r[9]=R32(c->r[1]+0x00000088u); // 800FA558
  c->r[8]=R32(c->r[1]+0x0000008Cu); // 800FA55C
  c->r[7]=R32(c->r[1]+0x00000090u); // 800FA560
  c->r[6]=R32(c->r[1]+0x00000094u); // 800FA564
  c->r[5]=R32(c->r[1]+0x00000098u); // 800FA568
  c->r[4]=R32(c->r[1]+0x000000A0u); // 800FA56C
  c->r[3]=R32(c->r[1]+0x000000A8u); // 800FA570
  c->r[0]=R32(c->r[1]+0x000000ACu); // 800FA574
  W32(c->r[1]+0x0000009Cu,c->r[27]); // 800FA578
  W32(c->r[1]+0x000000A4u,c->r[12]); // 800FA57C
  W32(c->r[1]+0x000000B0u,c->r[11]); // 800FA580
  W32(c->r[1]+0x000000B4u,c->r[10]); // 800FA584
  W32(c->r[1]+0x000000B8u,c->r[9]); // 800FA588
  W32(c->r[1]+0x000000BCu,c->r[8]); // 800FA58C
  W32(c->r[1]+0x000000C0u,c->r[7]); // 800FA590
  W32(c->r[1]+0x000000C4u,c->r[6]); // 800FA594
  W32(c->r[1]+0x000000C8u,c->r[5]); // 800FA598
  W32(c->r[1]+0x000000CCu,c->r[27]); // 800FA59C
  W32(c->r[1]+0x000000D0u,c->r[4]); // 800FA5A0
  W32(c->r[1]+0x000000D4u,c->r[12]); // 800FA5A4
  W32(c->r[1]+0x000000D8u,c->r[3]); // 800FA5A8
  W32(c->r[1]+0x000000DCu,c->r[0]); // 800FA5AC
  c->lr=0x800FA5B4u; f_800B087C(c); // 800FA5B0
  c->r[26]=c->r[3]|c->r[3]; // 800FA5B4
  c->lr=0x800FA5BCu; f_800B087C(c); // 800FA5B8
  c->r[4]=R8(c->r[29]+0x00000160u); // 800FA5BC
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA5C0
  c->r[0]=c->r[0]-c->r[4]; // 800FA5C4
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[27]); // 800FA5C8
  if (!crb(c,0)) { goto L_800FA5DC; } // 800FA5CC
  c->r[0]=R32(c->r[29]+0x00000168u); // 800FA5D0
  c->r[0]=c->r[27]+c->r[0]; // 800FA5D4
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA5D8
L_800FA5DC:;
  c->lr=0x800FA5E0u; f_800B08A4(c); // 800FA5DC
  c->r[3]=R32(c->r[29]+0x00000168u); // 800FA5E0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FA5E4
  cmpu(c,0,c->r[0],c->r[27]); // 800FA5E8
  if (!crb(c,2)) { goto L_800FA5FC; } // 800FA5EC
  c->r[3]=c->r[26]|c->r[26]; // 800FA5F0
  c->lr=0x800FA5F8u; f_800B08A4(c); // 800FA5F4
  goto L_800FA670; // 800FA5F8
L_800FA5FC:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA5FC
  c->r[4]=0u+0x00000000u; // 800FA600
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA604
  c->r[5]=0u+0x00000030u; // 800FA608
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA60C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA610
  c->r[3]=c->r[3]+c->r[0]; // 800FA614
  c->lr=0x800FA61Cu; f_80004688(c); // 800FA618
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA61C
  c->r[4]=c->r[1]+0x000000B0u; // 800FA620
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA624
  c->r[5]=0u+0x00000030u; // 800FA628
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA62C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA630
  c->r[3]=c->r[3]+c->r[0]; // 800FA634
  c->lr=0x800FA63Cu; f_80004338(c); // 800FA638
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA63C
  c->r[3]=c->r[26]|c->r[26]; // 800FA640
  c->r[4]=R32(c->r[29]+0x00000168u); // 800FA644
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA648
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FA64C
  c->r[5]=c->r[6]-c->r[4]; // 800FA650
  c->r[0]=c->r[6]+0x00000001u; // 800FA654
  c->r[4]=c->r[4]-c->r[6]; // 800FA658
  c->r[4]=~(c->r[5]|c->r[4]); // 800FA65C
  c->r[4]=sraw(c,c->r[4],31); // 800FA660
  c->r[0]=c->r[0]&~c->r[4]; // 800FA664
  W8(c->r[29]+0x00000161u,c->r[0]); // 800FA668
  c->lr=0x800FA670u; f_800B08A4(c); // 800FA66C
L_800FA670:;
  c->r[11]=0u+0x00000000u; // 800FA670
  W8(c->r[1]+0x00000024u,c->r[11]); // 800FA674
  c->r[0]=0u+0x00000001u; // 800FA678
  c->r[12]=0u+0x00000015u; // 800FA67C
  W16(c->r[1]+0x0000003Au,c->r[0]); // 800FA680
  c->r[10]=R32(c->r[1]+0x00000024u); // 800FA684
  c->r[9]=R32(c->r[1]+0x00000028u); // 800FA688
  c->r[8]=R32(c->r[1]+0x0000002Cu); // 800FA68C
  c->r[7]=R32(c->r[1]+0x00000030u); // 800FA690
  c->r[6]=R32(c->r[1]+0x00000034u); // 800FA694
  c->r[5]=R32(c->r[1]+0x00000038u); // 800FA698
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 800FA69C
  c->r[3]=R32(c->r[1]+0x00000040u); // 800FA6A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FA6A4
  W32(c->r[1]+0x00000020u,c->r[12]); // 800FA6A8
  W32(c->r[1]+0x0000004Cu,c->r[11]); // 800FA6AC
  W32(c->r[1]+0x00000048u,c->r[11]); // 800FA6B0
  W32(c->r[1]+0x00000050u,c->r[12]); // 800FA6B4
  W32(c->r[1]+0x00000054u,c->r[10]); // 800FA6B8
  W32(c->r[1]+0x00000058u,c->r[9]); // 800FA6BC
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 800FA6C0
  W32(c->r[1]+0x00000060u,c->r[7]); // 800FA6C4
  W32(c->r[1]+0x00000064u,c->r[6]); // 800FA6C8
  W32(c->r[1]+0x00000068u,c->r[5]); // 800FA6CC
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800FA6D0
  W32(c->r[1]+0x00000070u,c->r[3]); // 800FA6D4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800FA6D8
  W32(c->r[1]+0x00000078u,c->r[11]); // 800FA6DC
  W32(c->r[1]+0x0000007Cu,c->r[11]); // 800FA6E0
  c->lr=0x800FA6E8u; f_800B087C(c); // 800FA6E4
  c->r[26]=c->r[3]|c->r[3]; // 800FA6E8
  c->lr=0x800FA6F0u; f_800B087C(c); // 800FA6EC
  c->r[4]=R8(c->r[29]+0x00000160u); // 800FA6F0
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA6F4
  c->r[0]=c->r[0]-c->r[4]; // 800FA6F8
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[27]); // 800FA6FC
  if (!crb(c,0)) { goto L_800FA710; } // 800FA700
  c->r[0]=R32(c->r[29]+0x00000168u); // 800FA704
  c->r[0]=c->r[27]+c->r[0]; // 800FA708
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA70C
L_800FA710:;
  c->lr=0x800FA714u; f_800B08A4(c); // 800FA710
  c->r[3]=R32(c->r[29]+0x00000168u); // 800FA714
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FA718
  cmpu(c,0,c->r[0],c->r[27]); // 800FA71C
  if (!crb(c,2)) { goto L_800FA730; } // 800FA720
  c->r[3]=c->r[26]|c->r[26]; // 800FA724
  c->lr=0x800FA72Cu; f_800B08A4(c); // 800FA728
  goto L_800FA7A4; // 800FA72C
L_800FA730:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA730
  c->r[4]=0u+0x00000000u; // 800FA734
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA738
  c->r[5]=0u+0x00000030u; // 800FA73C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA740
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA744
  c->r[3]=c->r[3]+c->r[0]; // 800FA748
  c->lr=0x800FA750u; f_80004688(c); // 800FA74C
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA750
  c->r[4]=c->r[1]+0x00000050u; // 800FA754
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FA758
  c->r[5]=0u+0x00000030u; // 800FA75C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA760
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FA764
  c->r[3]=c->r[3]+c->r[0]; // 800FA768
  c->lr=0x800FA770u; f_80004338(c); // 800FA76C
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FA770
  c->r[3]=c->r[26]|c->r[26]; // 800FA774
  c->r[4]=R32(c->r[29]+0x00000168u); // 800FA778
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FA77C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FA780
  c->r[5]=c->r[6]-c->r[4]; // 800FA784
  c->r[0]=c->r[6]+0x00000001u; // 800FA788
  c->r[4]=c->r[4]-c->r[6]; // 800FA78C
  c->r[4]=~(c->r[5]|c->r[4]); // 800FA790
  c->r[4]=sraw(c,c->r[4],31); // 800FA794
  c->r[0]=c->r[0]&~c->r[4]; // 800FA798
  W8(c->r[29]+0x00000161u,c->r[0]); // 800FA79C
  c->lr=0x800FA7A4u; f_800B08A4(c); // 800FA7A0
L_800FA7A4:;
  c->r[11]=c->r[1]+0x00000280u; // 800FA7A4
  c->lr=0x800FA7ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FA7A8
  c->r[0]=R32(c->r[1]+0x00000284u); // 800FA7AC
  c->lr=c->r[0]; // 800FA7B0
  c->r[1]=c->r[1]+0x00000280u; // 800FA7B4
  return; // 800FA7B8
}

// __wpadRetrieveChannel
void f_800FA7C0(Ctx* __restrict c) {
  trace_call(0x800FA7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA7C0
  c->r[0]=c->lr; // 800FA7C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA7C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FA7CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FA7D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FA7D4
  c->r[29]=c->r[3]|c->r[3]; // 800FA7D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FA7DC
  c->r[28]=0u+0xFFFFFFFFu; // 800FA7E0
  c->r[3]=R8(c->r[3]+0x00000056u); // 800FA7E4
  c->lr=0x800FA7ECu; f_8010E704(c); // 800FA7E8
  c->r[4]=0u+0x80280000u; // 800FA7EC
  c->r[30]=c->r[3]|c->r[3]; // 800FA7F0
  c->r[3]=c->r[29]|c->r[29]; // 800FA7F4
  c->r[5]=0u+0x00000010u; // 800FA7F8
  c->r[4]=c->r[4]+0xFFFFB958u; // 800FA7FC
  c->lr=0x800FA804u; f_800D7BBC(c); // 800FA800
  cmps(c,0,(int32_t)c->r[3],0); // 800FA804
  if (!crb(c,2)) { goto L_800FA838; } // 800FA808
  c->r[3]=0u+0x802E0000u; // 800FA80C
  c->r[28]=0u+0x00000003u; // 800FA810
  c->r[3]=c->r[3]+0xFFFFB290u; // 800FA814
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800FA818
  c->r[0]=R32(c->r[3]+0x0000091Cu); // 800FA81C
  cmps(c,0,(int32_t)c->r[0],0); // 800FA820
  if (crb(c,2)) { goto L_800FA890; } // 800FA824
  c->r[3]=c->r[30]|c->r[30]; // 800FA828
  c->lr=0x800FA830u; f_80119FD8(c); // 800FA82C
  c->r[3]=0u+0xFFFFFFFFu; // 800FA830
  goto L_800FA8C0; // 800FA834
L_800FA838:;
  c->r[29]=0u+0x00000000u; // 800FA838
  c->r[31]=c->r[13]+0xFFFF9348u; // 800FA83C
L_800FA840:;
  c->r[3]=c->r[29]|c->r[29]; // 800FA840
  c->r[4]=c->r[30]|c->r[30]; // 800FA844
  c->lr=0x800FA84Cu; f_8010E8CC(c); // 800FA848
  cmps(c,0,(int32_t)c->r[3],0); // 800FA84C
  if (crb(c,2)) { goto L_800FA868; } // 800FA850
  c->r[0]=R8(c->r[31]+0x00000000u); // 800FA854
  cmps(c,0,(int32_t)c->r[0],0); // 800FA858
  if (!crb(c,2)) { goto L_800FA868; } // 800FA85C
  c->r[28]=c->r[29]|c->r[29]; // 800FA860
  goto L_800FA890; // 800FA864
L_800FA868:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 800FA868
  cmps(c,0,(int32_t)c->r[0],0); // 800FA86C
  if (!crb(c,2)) { goto L_800FA880; } // 800FA870
  cmps(c,0,(int32_t)c->r[28],0); // 800FA874
  if (!crb(c,0)) { goto L_800FA880; } // 800FA878
  c->r[28]=c->r[29]|c->r[29]; // 800FA87C
L_800FA880:;
  c->r[29]=c->r[29]+0x00000001u; // 800FA880
  c->r[31]=c->r[31]+0x00000001u; // 800FA884
  cmps(c,0,(int32_t)c->r[29],4); // 800FA888
  if (crb(c,0)) { IRQCHK(c); goto L_800FA840; } // 800FA88C
L_800FA890:;
  c->r[3]=c->r[28]|c->r[28]; // 800FA890
  c->r[4]=c->r[30]|c->r[30]; // 800FA894
  c->lr=0x800FA89Cu; f_8010E8CC(c); // 800FA898
  cmps(c,0,(int32_t)c->r[3],0); // 800FA89C
  if (!crb(c,2)) { goto L_800FA8B0; } // 800FA8A0
  c->r[3]=c->r[28]|c->r[28]; // 800FA8A4
  c->r[4]=c->r[30]|c->r[30]; // 800FA8A8
  c->lr=0x800FA8B0u; f_8010E858(c); // 800FA8AC
L_800FA8B0:;
  c->r[3]=c->r[13]+0xFFFF9348u; // 800FA8B0
  c->r[0]=0u+0x00000001u; // 800FA8B4
  W8(c->r[3]+c->r[28],c->r[0]); // 800FA8B8
  c->r[3]=c->r[28]|c->r[28]; // 800FA8BC
L_800FA8C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA8C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FA8C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FA8C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FA8CC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FA8D0
  c->lr=c->r[0]; // 800FA8D4
  c->r[1]=c->r[1]+0x00000020u; // 800FA8D8
  return; // 800FA8DC
}

// __wpadConnectionCallback
void f_800FA8E0(Ctx* __restrict c) {
  trace_call(0x800FA8E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA8E0
  c->r[0]=c->lr; // 800FA8E4
  cmps(c,0,(int32_t)c->r[4],0); // 800FA8E8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800FA8EC
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800FA8F0
  c->r[31]=c->r[3]|c->r[3]; // 800FA8F4
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800FA8F8
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800FA8FC
  W32(c->r[1]+0x000000A0u,c->r[28]); // 800FA900
  c->r[28]=R8(c->r[3]+0x00000056u); // 800FA904
  if (crb(c,2)) { goto L_800FAB60; } // 800FA908
  c->lr=0x800FA910u; f_800FA7C0(c); // 800FA90C
  cmps(c,0,(int32_t)c->r[3],0); // 800FA910
  c->r[29]=c->r[3]|c->r[3]; // 800FA914
  if (crb(c,0)) { goto L_800FAD44; } // 800FA918
  c->r[4]=0u+0x802E0000u; // 800FA91C
  c->r[4]=c->r[4]+0xFFFFC2A0u; // 800FA920
  W8(c->r[4]+c->r[28],c->r[3]); // 800FA924
  c->lr=0x800FA92Cu; f_800F9640(c); // 800FA928
  c->r[5]=0u+0x802E0000u; // 800FA92C
  c->r[4]=0u+0x80280000u; // 800FA930
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800FA934
  c->r[3]=c->r[31]|c->r[31]; // 800FA938
  c->r[5]=c->r[5]+0xFFFFB290u; // 800FA93C
  c->r[4]=c->r[4]+0xFFFFB96Cu; // 800FA940
  c->r[30]=R32(c->r[5]+c->r[0]); // 800FA944
  c->r[5]=0u+0x00000010u; // 800FA948
  c->lr=0x800FA950u; f_800D7BBC(c); // 800FA94C
  cmps(c,0,(int32_t)c->r[3],0); // 800FA950
  if (!crb(c,2)) { goto L_800FA968; } // 800FA954
  c->r[0]=0u+0x00000000u; // 800FA958
  W8(c->r[30]+0x00000905u,c->r[0]); // 800FA95C
  W32(c->r[30]+0x000008FCu,c->r[0]); // 800FA960
  goto L_800FA9B4; // 800FA964
L_800FA968:;
  c->r[4]=0u+0x80280000u; // 800FA968
  c->r[3]=c->r[31]|c->r[31]; // 800FA96C
  c->r[4]=c->r[4]+0xFFFFB958u; // 800FA970
  c->r[5]=0u+0x00000010u; // 800FA974
  c->lr=0x800FA97Cu; f_800D7BBC(c); // 800FA978
  cmps(c,0,(int32_t)c->r[3],0); // 800FA97C
  if (!crb(c,2)) { goto L_800FA9A4; } // 800FA980
  c->lr=0x800FA988u; f_8010878C(c); // 800FA984
  cmps(c,0,(int32_t)c->r[3],0); // 800FA988
  if (crb(c,2)) { goto L_800FA9A4; } // 800FA98C
  c->r[0]=0u+0x00000003u; // 800FA990
  W8(c->r[30]+0x00000905u,c->r[0]); // 800FA994
  c->r[0]=0u+0x0000000Cu; // 800FA998
  W32(c->r[30]+0x000008FCu,c->r[0]); // 800FA99C
  goto L_800FA9B4; // 800FA9A0
L_800FA9A4:;
  c->r[0]=0u+0x000000FBu; // 800FA9A4
  W8(c->r[30]+0x00000905u,c->r[0]); // 800FA9A8
  c->r[0]=0u+0x00000000u; // 800FA9AC
  W32(c->r[30]+0x000008FCu,c->r[0]); // 800FA9B0
L_800FA9B4:;
  W8(c->r[30]+0x00000907u,c->r[28]); // 800FA9B4
  c->r[10]=0u+0x00000001u; // 800FA9B8
  c->r[6]=0u+0x80100000u; // 800FA9BC
  c->r[9]=0u+0x00000000u; // 800FA9C0
  W32(c->r[30]+0x0000091Cu,c->r[10]); // 800FA9C4
  c->r[4]=0u+0x00000064u; // 800FA9C8
  c->r[6]=c->r[6]+0xFFFF9EF0u; // 800FA9CC
  c->r[8]=0u+0x00001770u; // 800FA9D0
  W32(c->r[30]+0x00000900u,c->r[9]); // 800FA9D4
  c->r[7]=0u+0x00000017u; // 800FA9D8
  c->r[0]=0u+0x00000006u; // 800FA9DC
  c->r[3]=c->r[1]+0x00000014u; // 800FA9E0
  W8(c->r[30]+0x00000B73u,c->r[4]); // 800FA9E4
  c->r[4]=c->r[1]+0x0000000Cu; // 800FA9E8
  c->r[5]=0u+0x00000004u; // 800FA9EC
  W8(c->r[30]+0x00000B76u,c->r[9]); // 800FA9F0
  W8(c->r[30]+0x00000B7Du,c->r[9]); // 800FA9F4
  c->r[9]=R8(c->r[30]+0x00000905u); // 800FA9F8
  W8(c->r[30]+0x00000B80u,c->r[9]); // 800FA9FC
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 800FAA00
  W16(c->r[1]+0x00000008u,c->r[10]); // 800FAA04
  W32(c->r[1]+0x00000010u,c->r[7]); // 800FAA08
  W16(c->r[1]+0x0000002Au,c->r[0]); // 800FAA0C
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800FAA10
  c->lr=0x800FAA18u; f_80004338(c); // 800FAA14
  c->r[3]=c->r[1]+0x00000018u; // 800FAA18
  c->r[4]=c->r[1]+0x00000008u; // 800FAA1C
  c->r[5]=0u+0x00000002u; // 800FAA20
  c->lr=0x800FAA28u; f_80004338(c); // 800FAA24
  c->r[0]=R16(c->r[1]+0x00000008u); // 800FAA28
  c->r[31]=c->r[30]+0x00000B24u; // 800FAA2C
  W16(c->r[1]+0x00000030u,c->r[0]); // 800FAA30
  c->r[12]=R32(c->r[1]+0x0000000Cu); // 800FAA34
  c->r[11]=R32(c->r[1]+0x00000010u); // 800FAA38
  c->r[10]=R32(c->r[1]+0x00000014u); // 800FAA3C
  c->r[9]=R32(c->r[1]+0x00000018u); // 800FAA40
  c->r[8]=R32(c->r[1]+0x0000001Cu); // 800FAA44
  c->r[7]=R32(c->r[1]+0x00000020u); // 800FAA48
  c->r[6]=R32(c->r[1]+0x00000024u); // 800FAA4C
  c->r[5]=R32(c->r[1]+0x00000028u); // 800FAA50
  c->r[4]=R32(c->r[1]+0x00000030u); // 800FAA54
  c->r[3]=R32(c->r[1]+0x00000038u); // 800FAA58
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800FAA5C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FAA60
  W32(c->r[1]+0x00000034u,c->r[12]); // 800FAA64
  W32(c->r[1]+0x00000040u,c->r[11]); // 800FAA68
  W32(c->r[1]+0x00000044u,c->r[10]); // 800FAA6C
  W32(c->r[1]+0x00000048u,c->r[9]); // 800FAA70
  W32(c->r[1]+0x0000004Cu,c->r[8]); // 800FAA74
  W32(c->r[1]+0x00000050u,c->r[7]); // 800FAA78
  W32(c->r[1]+0x00000054u,c->r[6]); // 800FAA7C
  W32(c->r[1]+0x00000058u,c->r[5]); // 800FAA80
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800FAA84
  W32(c->r[1]+0x00000060u,c->r[4]); // 800FAA88
  W32(c->r[1]+0x00000064u,c->r[12]); // 800FAA8C
  W32(c->r[1]+0x00000068u,c->r[3]); // 800FAA90
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800FAA94
  c->lr=0x800FAA9Cu; f_800B087C(c); // 800FAA98
  c->r[31]=c->r[3]|c->r[3]; // 800FAA9C
  c->lr=0x800FAAA4u; f_800B087C(c); // 800FAAA0
  c->r[4]=R8(c->r[30]+0x00000160u); // 800FAAA4
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FAAA8
  c->r[0]=c->r[0]-c->r[4]; // 800FAAAC
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[29]); // 800FAAB0
  if (!crb(c,0)) { goto L_800FAAC4; } // 800FAAB4
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FAAB8
  c->r[0]=c->r[29]+c->r[0]; // 800FAABC
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FAAC0
L_800FAAC4:;
  c->lr=0x800FAAC8u; f_800B08A4(c); // 800FAAC4
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FAAC8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FAACC
  cmpu(c,0,c->r[0],c->r[29]); // 800FAAD0
  if (!crb(c,2)) { goto L_800FAAE4; } // 800FAAD4
  c->r[3]=c->r[31]|c->r[31]; // 800FAAD8
  c->lr=0x800FAAE0u; f_800B08A4(c); // 800FAADC
  goto L_800FAB58; // 800FAAE0
L_800FAAE4:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FAAE4
  c->r[4]=0u+0x00000000u; // 800FAAE8
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FAAEC
  c->r[5]=0u+0x00000030u; // 800FAAF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FAAF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FAAF8
  c->r[3]=c->r[3]+c->r[0]; // 800FAAFC
  c->lr=0x800FAB04u; f_80004688(c); // 800FAB00
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FAB04
  c->r[4]=c->r[1]+0x00000040u; // 800FAB08
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FAB0C
  c->r[5]=0u+0x00000030u; // 800FAB10
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FAB14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FAB18
  c->r[3]=c->r[3]+c->r[0]; // 800FAB1C
  c->lr=0x800FAB24u; f_80004338(c); // 800FAB20
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FAB24
  c->r[3]=c->r[31]|c->r[31]; // 800FAB28
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FAB2C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FAB30
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FAB34
  c->r[5]=c->r[6]-c->r[4]; // 800FAB38
  c->r[0]=c->r[6]+0x00000001u; // 800FAB3C
  c->r[4]=c->r[4]-c->r[6]; // 800FAB40
  c->r[4]=~(c->r[5]|c->r[4]); // 800FAB44
  c->r[4]=sraw(c,c->r[4],31); // 800FAB48
  c->r[0]=c->r[0]&~c->r[4]; // 800FAB4C
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FAB50
  c->lr=0x800FAB58u; f_800B08A4(c); // 800FAB54
L_800FAB58:;
  c->lr=0x800FAB5Cu; f_800C4748(c); // 800FAB58
  goto L_800FAD44; // 800FAB5C
L_800FAB60:;
  c->r[3]=0u+0x802E0000u; // 800FAB60
  c->r[4]=0u+0xFFFFFFFFu; // 800FAB64
  c->r[3]=c->r[3]+0xFFFFC2A0u; // 800FAB68
  c->r[31]=R8(c->r[3]+c->r[28]); // 800FAB6C
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 800FAB70
  W8(c->r[3]+c->r[28],c->r[4]); // 800FAB74
  cmps(c,0,(int32_t)c->r[31],-1); // 800FAB78
  if (crb(c,2)) { goto L_800FAD44; } // 800FAB7C
  c->r[3]=0u+0x802E0000u; // 800FAB80
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800FAB84
  c->r[3]=c->r[3]+0xFFFFB290u; // 800FAB88
  c->r[30]=R32(c->r[3]+c->r[0]); // 800FAB8C
  W32(c->r[30]+0x00000900u,c->r[4]); // 800FAB90
  c->r[12]=R32(c->r[30]+0x000008E0u); // 800FAB94
  cmps(c,0,(int32_t)c->r[12],0); // 800FAB98
  if (crb(c,2)) { goto L_800FABB4; } // 800FAB9C
  c->r[3]=c->r[31]|c->r[31]; // 800FABA0
  c->r[4]=0u+0xFFFFFFFFu; // 800FABA4
  c->ctr=c->r[12]; // 800FABA8
  if (true) { c->lr=0x800FABB0u; dispatch(c,c->ctr); } // 800FABAC
  goto L_800FAC88; // 800FABB0
L_800FABB4:;
  c->r[12]=R32(c->r[30]+0x00000B94u); // 800FABB4
  cmps(c,0,(int32_t)c->r[12],0); // 800FABB8
  if (crb(c,2)) { goto L_800FAC88; } // 800FABBC
  c->r[3]=c->r[31]|c->r[31]; // 800FABC0
  c->r[4]=0u+0xFFFFFFFFu; // 800FABC4
  c->ctr=c->r[12]; // 800FABC8
  if (true) { c->lr=0x800FABD0u; dispatch(c,c->ctr); } // 800FABCC
  goto L_800FAC88; // 800FABD0
L_800FABD4:;
  c->r[12]=R32(c->r[1]+0x0000009Cu); // 800FABD4
  cmps(c,0,(int32_t)c->r[12],0); // 800FABD8
  if (crb(c,2)) { goto L_800FABF0; } // 800FABDC
  c->r[3]=c->r[31]|c->r[31]; // 800FABE0
  c->r[4]=0u+0xFFFFFFFFu; // 800FABE4
  c->ctr=c->r[12]; // 800FABE8
  if (true) { c->lr=0x800FABF0u; dispatch(c,c->ctr); } // 800FABEC
L_800FABF0:;
  c->lr=0x800FABF4u; f_800B087C(c); // 800FABF0
  c->r[28]=c->r[3]|c->r[3]; // 800FABF4
  c->lr=0x800FABFCu; f_800B087C(c); // 800FABF8
  c->r[4]=R8(c->r[30]+0x00000160u); // 800FABFC
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FAC00
  c->r[0]=c->r[0]-c->r[4]; // 800FAC04
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[29]); // 800FAC08
  if (!crb(c,0)) { goto L_800FAC1C; } // 800FAC0C
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FAC10
  c->r[0]=c->r[29]+c->r[0]; // 800FAC14
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FAC18
L_800FAC1C:;
  c->lr=0x800FAC20u; f_800B08A4(c); // 800FAC1C
  cmps(c,0,(int32_t)c->r[29],0); // 800FAC20
  if (!crb(c,2)) { goto L_800FAC34; } // 800FAC24
  c->r[3]=c->r[28]|c->r[28]; // 800FAC28
  c->lr=0x800FAC30u; f_800B08A4(c); // 800FAC2C
  goto L_800FAC88; // 800FAC30
L_800FAC34:;
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FAC34
  c->r[4]=0u+0x00000000u; // 800FAC38
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FAC3C
  c->r[5]=0u+0x00000030u; // 800FAC40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FAC44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FAC48
  c->r[3]=c->r[3]+c->r[0]; // 800FAC4C
  c->lr=0x800FAC54u; f_80004688(c); // 800FAC50
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FAC54
  c->r[3]=c->r[28]|c->r[28]; // 800FAC58
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FAC5C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FAC60
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FAC64
  c->r[5]=c->r[6]-c->r[4]; // 800FAC68
  c->r[0]=c->r[6]+0x00000001u; // 800FAC6C
  c->r[4]=c->r[4]-c->r[6]; // 800FAC70
  c->r[4]=~(c->r[5]|c->r[4]); // 800FAC74
  c->r[4]=sraw(c,c->r[4],31); // 800FAC78
  c->r[0]=c->r[0]&~c->r[4]; // 800FAC7C
  W8(c->r[30]+0x00000160u,c->r[0]); // 800FAC80
  c->lr=0x800FAC88u; f_800B08A4(c); // 800FAC84
L_800FAC88:;
  c->lr=0x800FAC8Cu; f_800B087C(c); // 800FAC88
  c->r[4]=R8(c->r[30]+0x00000160u); // 800FAC8C
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FAC90
  c->r[0]=c->r[0]-c->r[4]; // 800FAC94
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[28]); // 800FAC98
  if (!crb(c,0)) { goto L_800FACAC; } // 800FAC9C
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FACA0
  c->r[0]=c->r[28]+c->r[0]; // 800FACA4
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FACA8
L_800FACAC:;
  c->lr=0x800FACB0u; f_800B08A4(c); // 800FACAC
  cmps(c,0,(int32_t)c->r[28],0); // 800FACB0
  if (!crb(c,2)) { goto L_800FACC0; } // 800FACB4
  c->r[0]=0u+0x00000000u; // 800FACB8
  goto L_800FACF4; // 800FACBC
L_800FACC0:;
  c->lr=0x800FACC4u; f_800B087C(c); // 800FACC0
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FACC4
  c->r[28]=c->r[3]|c->r[3]; // 800FACC8
  c->r[4]=R32(c->r[30]+0x00000164u); // 800FACCC
  c->r[3]=c->r[1]+0x00000070u; // 800FACD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FACD4
  c->r[5]=0u+0x00000030u; // 800FACD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FACDC
  c->r[4]=c->r[4]+c->r[0]; // 800FACE0
  c->lr=0x800FACE8u; f_80004338(c); // 800FACE4
  c->r[3]=c->r[28]|c->r[28]; // 800FACE8
  c->lr=0x800FACF0u; f_800B08A4(c); // 800FACEC
  c->r[0]=0u+0x00000001u; // 800FACF0
L_800FACF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800FACF4
  if (!crb(c,2)) { IRQCHK(c); goto L_800FABD4; } // 800FACF8
  c->r[4]=R32(c->r[30]+0x000008F0u); // 800FACFC
  cmps(c,0,(int32_t)c->r[4],0); // 800FAD00
  if (crb(c,2)) { goto L_800FAD14; } // 800FAD04
  c->r[5]=R32(c->r[30]+0x000008F8u); // 800FAD08
  c->r[3]=c->r[31]|c->r[31]; // 800FAD0C
  c->lr=0x800FAD14u; f_800FB9A0(c); // 800FAD10
L_800FAD14:;
  c->r[3]=c->r[31]|c->r[31]; // 800FAD14
  c->lr=0x800FAD1Cu; f_800F9640(c); // 800FAD18
  c->r[3]=c->r[13]+0xFFFF9348u; // 800FAD1C
  c->r[0]=0u+0x00000000u; // 800FAD20
  W8(c->r[3]+c->r[31],c->r[0]); // 800FAD24
  c->r[12]=R32(c->r[30]+0x000008E8u); // 800FAD28
  cmps(c,0,(int32_t)c->r[12],0); // 800FAD2C
  if (crb(c,2)) { goto L_800FAD44; } // 800FAD30
  c->r[3]=c->r[31]|c->r[31]; // 800FAD34
  c->r[4]=0u+0xFFFFFFFFu; // 800FAD38
  c->ctr=c->r[12]; // 800FAD3C
  if (true) { c->lr=0x800FAD44u; dispatch(c,c->ctr); } // 800FAD40
L_800FAD44:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800FAD44
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800FAD48
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800FAD4C
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800FAD50
  c->r[28]=R32(c->r[1]+0x000000A0u); // 800FAD54
  c->lr=c->r[0]; // 800FAD58
  c->r[1]=c->r[1]+0x000000B0u; // 800FAD5C
  return; // 800FAD60
}

// __wpadReceiveCallback
void f_800FAD70(Ctx* __restrict c) {
  trace_call(0x800FAD70u);
  c->r[5]=0u+0x802E0000u; // 800FAD70
  c->r[5]=c->r[5]+0xFFFFC2A0u; // 800FAD74
  c->r[3]=R8(c->r[5]+c->r[3]); // 800FAD78
  cmpu(c,0,c->r[3],0x00000004u); // 800FAD7C
  if (!crb(c,0)) return; // 800FAD80
  f_80104060(c); return; // 800FAD84
  return; // 800FAD88
}

// WPADGetAccGravityUnit
void f_800FAD90(Ctx* __restrict c) {
  trace_call(0x800FAD90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAD90
  c->r[0]=c->lr; // 800FAD94
  c->r[6]=0u+0x802E0000u; // 800FAD98
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FAD9C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FADA0
  c->r[6]=c->r[6]+0xFFFFB290u; // 800FADA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FADA8
  c->r[31]=c->r[5]|c->r[5]; // 800FADAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FADB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FADB4
  c->r[29]=c->r[4]|c->r[4]; // 800FADB8
  c->r[30]=R32(c->r[6]+c->r[0]); // 800FADBC
  c->lr=0x800FADC4u; f_800B087C(c); // 800FADC0
  cmps(c,0,(int32_t)c->r[31],0); // 800FADC4
  if (crb(c,2)) { goto L_800FAE44; } // 800FADC8
  cmps(c,0,(int32_t)c->r[29],0); // 800FADCC
  if (crb(c,2)) { goto L_800FADE0; } // 800FADD0
  cmpu(c,0,c->r[29],0x00000001u); // 800FADD4
  if (crb(c,2)) { goto L_800FAE14; } // 800FADD8
  goto L_800FAE44; // 800FADDC
L_800FADE0:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000874u); // 800FADE0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000087Au); // 800FADE4
  c->r[0]=c->r[0]-c->r[4]; // 800FADE8
  W16(c->r[31]+0x00000000u,c->r[0]); // 800FADEC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000876u); // 800FADF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000087Cu); // 800FADF4
  c->r[0]=c->r[0]-c->r[4]; // 800FADF8
  W16(c->r[31]+0x00000002u,c->r[0]); // 800FADFC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000878u); // 800FAE00
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000087Eu); // 800FAE04
  c->r[0]=c->r[0]-c->r[4]; // 800FAE08
  W16(c->r[31]+0x00000004u,c->r[0]); // 800FAE0C
  goto L_800FAE44; // 800FAE10
L_800FAE14:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000890u); // 800FAE14
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000896u); // 800FAE18
  c->r[0]=c->r[0]-c->r[4]; // 800FAE1C
  W16(c->r[31]+0x00000000u,c->r[0]); // 800FAE20
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000892u); // 800FAE24
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000898u); // 800FAE28
  c->r[0]=c->r[0]-c->r[4]; // 800FAE2C
  W16(c->r[31]+0x00000002u,c->r[0]); // 800FAE30
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000894u); // 800FAE34
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000089Au); // 800FAE38
  c->r[0]=c->r[0]-c->r[4]; // 800FAE3C
  W16(c->r[31]+0x00000004u,c->r[0]); // 800FAE40
L_800FAE44:;
  c->lr=0x800FAE48u; f_800B08A4(c); // 800FAE44
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FAE48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FAE4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FAE50
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FAE54
  c->lr=c->r[0]; // 800FAE58
  c->r[1]=c->r[1]+0x00000020u; // 800FAE5C
  return; // 800FAE60
}

// __wpadDisconnectCallback
void f_800FAE70(Ctx* __restrict c) {
  trace_call(0x800FAE70u);
  c->r[5]=0u+0x802E0000u; // 800FAE70
  cmps(c,0,(int32_t)c->r[4],-1); // 800FAE74
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FAE78
  c->r[5]=c->r[5]+0xFFFFB290u; // 800FAE7C
  c->r[3]=R32(c->r[5]+c->r[0]); // 800FAE80
  if (crb(c,2)) return; // 800FAE84
  c->r[3]=R8(c->r[3]+0x00000907u); // 800FAE88
  f_80117960(c); return; // 800FAE8C
  return; // 800FAE90
}

// WPADDisconnect
void f_800FAEA0(Ctx* __restrict c) {
  stub_log(0x800FAEA0u);  return;
}

void hle_WPADProbe(Ctx*);
// WPADProbe
void f_800FAF60(Ctx* __restrict c) {
  hle_WPADProbe(c);
}

// WPADSetSamplingCallback
void f_800FAFF0(Ctx* __restrict c) {
  stub_log(0x800FAFF0u); c->r[3]=0; return;
}

// WPADSetConnectCallback
void f_800FB080(Ctx* __restrict c) {
  stub_log(0x800FB080u); c->r[3]=0; return;
}

// WPADSetExtensionCallback
void f_800FB110(Ctx* __restrict c) {
  stub_log(0x800FB110u); c->r[3]=0; return;
}

void hle_WPADGetDataFormat(Ctx*);
// WPADGetDataFormat
void f_800FB170(Ctx* __restrict c) {
  hle_WPADGetDataFormat(c);
}

void hle_WPADSetDataFormat(Ctx*);
// WPADSetDataFormat
void f_800FB1C0(Ctx* __restrict c) {
  hle_WPADSetDataFormat(c);
}

// __wpadInfoCallback
void f_800FB290(Ctx* __restrict c) {
  trace_call(0x800FB290u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB290
  c->r[0]=c->lr; // 800FB294
  c->r[5]=0u+0x802E0000u; // 800FB298
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB29C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FB2A0
  c->r[5]=c->r[5]+0xFFFFB290u; // 800FB2A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB2A8
  c->r[31]=R32(c->r[5]+c->r[0]); // 800FB2AC
  c->r[12]=R32(c->r[31]+0x00000B78u); // 800FB2B0
  cmps(c,0,(int32_t)c->r[12],0); // 800FB2B4
  if (crb(c,2)) { goto L_800FB2C4; } // 800FB2B8
  c->ctr=c->r[12]; // 800FB2BC
  if (true) { c->lr=0x800FB2C4u; dispatch(c,c->ctr); } // 800FB2C0
L_800FB2C4:;
  c->r[0]=0u+0x00000000u; // 800FB2C4
  W32(c->r[31]+0x00000B78u,c->r[0]); // 800FB2C8
  W8(c->r[31]+0x00000B7Cu,c->r[0]); // 800FB2CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB2D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB2D4
  c->lr=c->r[0]; // 800FB2D8
  c->r[1]=c->r[1]+0x00000010u; // 800FB2DC
  return; // 800FB2E0
}

// WPADGetInfoAsync
void f_800FB2F0(Ctx* __restrict c) {
  stub_log(0x800FB2F0u); c->r[3]=0xFFFFFFFFu; return;
}

// WPADControlMotor
void f_800FB510(Ctx* __restrict c) {
  stub_log(0x800FB510u); c->r[3]=0; return;
}

// WPADEnableMotor
void f_800FB5E0(Ctx* __restrict c) {
  stub_log(0x800FB5E0u);  return;
}

// WPADIsMotorEnabled
void f_800FB620(Ctx* __restrict c) {
  stub_log(0x800FB620u); c->r[3]=1; return;
}

// WPADControlLed
void f_800FB660(Ctx* __restrict c) {
  trace_call(0x800FB660u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB660
  c->r[0]=c->lr; // 800FB664
  W32(c->r[1]+0x00000084u,c->r[0]); // 800FB668
  c->r[11]=c->r[1]+0x00000080u; // 800FB66C
  c->lr=0x800FB674u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FB670
  c->r[6]=0u+0x802E0000u; // 800FB674
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FB678
  c->r[6]=c->r[6]+0xFFFFB290u; // 800FB67C
  c->r[28]=c->r[3]|c->r[3]; // 800FB680
  c->r[30]=R32(c->r[6]+c->r[0]); // 800FB684
  c->r[26]=c->r[4]|c->r[4]; // 800FB688
  c->r[29]=c->r[5]|c->r[5]; // 800FB68C
  c->lr=0x800FB694u; f_800B087C(c); // 800FB690
  c->r[31]=R32(c->r[30]+0x00000900u); // 800FB694
  c->r[27]=R32(c->r[30]+0x00000920u); // 800FB698
  c->lr=0x800FB6A0u; f_800B08A4(c); // 800FB69C
  cmps(c,0,(int32_t)c->r[31],-1); // 800FB6A0
  if (crb(c,2)) { goto L_800FB808; } // 800FB6A4
  cmps(c,0,(int32_t)c->r[27],0); // 800FB6A8
  if (!crb(c,2)) { goto L_800FB6B8; } // 800FB6AC
  c->r[31]=0u+0xFFFFFFFEu; // 800FB6B0
  goto L_800FB808; // 800FB6B4
L_800FB6B8:;
  c->r[0]=rotl(c->r[26],4)&0x000000F0u; // 800FB6B8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800FB6BC
  c->r[0]=0u+0x00000001u; // 800FB6C0
  c->r[12]=0u+0x00000011u; // 800FB6C4
  W16(c->r[1]+0x00000022u,c->r[0]); // 800FB6C8
  c->r[11]=R32(c->r[1]+0x0000000Cu); // 800FB6CC
  c->r[10]=R32(c->r[1]+0x00000010u); // 800FB6D0
  c->r[9]=R32(c->r[1]+0x00000014u); // 800FB6D4
  c->r[8]=R32(c->r[1]+0x00000018u); // 800FB6D8
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 800FB6DC
  c->r[6]=R32(c->r[1]+0x00000020u); // 800FB6E0
  c->r[5]=R32(c->r[1]+0x00000024u); // 800FB6E4
  c->r[4]=R32(c->r[1]+0x00000028u); // 800FB6E8
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800FB6EC
  c->r[0]=R32(c->r[1]+0x00000030u); // 800FB6F0
  W32(c->r[1]+0x00000008u,c->r[12]); // 800FB6F4
  W32(c->r[1]+0x00000034u,c->r[29]); // 800FB6F8
  W32(c->r[1]+0x00000038u,c->r[12]); // 800FB6FC
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 800FB700
  W32(c->r[1]+0x00000040u,c->r[10]); // 800FB704
  W32(c->r[1]+0x00000044u,c->r[9]); // 800FB708
  W32(c->r[1]+0x00000048u,c->r[8]); // 800FB70C
  W32(c->r[1]+0x0000004Cu,c->r[7]); // 800FB710
  W32(c->r[1]+0x00000050u,c->r[6]); // 800FB714
  W32(c->r[1]+0x00000054u,c->r[5]); // 800FB718
  W32(c->r[1]+0x00000058u,c->r[4]); // 800FB71C
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 800FB720
  W32(c->r[1]+0x00000060u,c->r[0]); // 800FB724
  W32(c->r[1]+0x00000064u,c->r[29]); // 800FB728
  c->lr=0x800FB730u; f_800B087C(c); // 800FB72C
  c->r[31]=c->r[3]|c->r[3]; // 800FB730
  c->lr=0x800FB738u; f_800B087C(c); // 800FB734
  c->r[4]=R8(c->r[30]+0x00000160u); // 800FB738
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FB73C
  c->r[0]=c->r[0]-c->r[4]; // 800FB740
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[27]); // 800FB744
  if (!crb(c,0)) { goto L_800FB758; } // 800FB748
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FB74C
  c->r[0]=c->r[27]+c->r[0]; // 800FB750
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FB754
L_800FB758:;
  c->lr=0x800FB75Cu; f_800B08A4(c); // 800FB758
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FB75C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FB760
  cmpu(c,0,c->r[0],c->r[27]); // 800FB764
  if (!crb(c,2)) { goto L_800FB77C; } // 800FB768
  c->r[3]=c->r[31]|c->r[31]; // 800FB76C
  c->lr=0x800FB774u; f_800B08A4(c); // 800FB770
  c->r[4]=0u+0x00000000u; // 800FB774
  goto L_800FB7F4; // 800FB778
L_800FB77C:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FB77C
  c->r[4]=0u+0x00000000u; // 800FB780
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FB784
  c->r[5]=0u+0x00000030u; // 800FB788
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FB78C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FB790
  c->r[3]=c->r[3]+c->r[0]; // 800FB794
  c->lr=0x800FB79Cu; f_80004688(c); // 800FB798
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FB79C
  c->r[4]=c->r[1]+0x00000038u; // 800FB7A0
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FB7A4
  c->r[5]=0u+0x00000030u; // 800FB7A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FB7AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FB7B0
  c->r[3]=c->r[3]+c->r[0]; // 800FB7B4
  c->lr=0x800FB7BCu; f_80004338(c); // 800FB7B8
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FB7BC
  c->r[3]=c->r[31]|c->r[31]; // 800FB7C0
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FB7C4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FB7C8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FB7CC
  c->r[5]=c->r[6]-c->r[4]; // 800FB7D0
  c->r[0]=c->r[6]+0x00000001u; // 800FB7D4
  c->r[4]=c->r[4]-c->r[6]; // 800FB7D8
  c->r[4]=~(c->r[5]|c->r[4]); // 800FB7DC
  c->r[4]=sraw(c,c->r[4],31); // 800FB7E0
  c->r[0]=c->r[0]&~c->r[4]; // 800FB7E4
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FB7E8
  c->lr=0x800FB7F0u; f_800B08A4(c); // 800FB7EC
  c->r[4]=0u+0x00000001u; // 800FB7F0
L_800FB7F4:;
  c->r[3]=0u-c->r[4]; // 800FB7F4
  c->r[0]=0u+0xFFFFFFFEu; // 800FB7F8
  c->r[3]=c->r[3]|c->r[4]; // 800FB7FC
  c->r[3]=sraw(c,c->r[3],31); // 800FB800
  c->r[31]=c->r[0]&~c->r[3]; // 800FB804
L_800FB808:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB808
  if (crb(c,2)) { goto L_800FB82C; } // 800FB80C
  cmps(c,0,(int32_t)c->r[29],0); // 800FB810
  if (crb(c,2)) { goto L_800FB82C; } // 800FB814
  c->r[12]=c->r[29]|c->r[29]; // 800FB818
  c->r[3]=c->r[28]|c->r[28]; // 800FB81C
  c->r[4]=c->r[31]|c->r[31]; // 800FB820
  c->ctr=c->r[12]; // 800FB824
  if (true) { c->lr=0x800FB82Cu; dispatch(c,c->ctr); } // 800FB828
L_800FB82C:;
  c->r[11]=c->r[1]+0x00000080u; // 800FB82C
  c->r[3]=c->r[31]|c->r[31]; // 800FB830
  c->lr=0x800FB838u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FB834
  c->r[0]=R32(c->r[1]+0x00000084u); // 800FB838
  c->lr=c->r[0]; // 800FB83C
  c->r[1]=c->r[1]+0x00000080u; // 800FB840
  return; // 800FB844
}

// WPADSaveConfig
void f_800FB850(Ctx* __restrict c) {
  stub_log(0x800FB850u); c->r[3]=1; return;
}

void hle_WPADRead(Ctx*);
// WPADRead
void f_800FB900(Ctx* __restrict c) {
  hle_WPADRead(c);
}

// WPADSetAutoSamplingBuf
void f_800FB9A0(Ctx* __restrict c) {
  trace_call(0x800FB9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB9A0
  c->r[0]=c->lr; // 800FB9A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB9A8
  c->r[11]=c->r[1]+0x00000020u; // 800FB9AC
  c->lr=0x800FB9B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FB9B0
  c->r[6]=0u+0x802E0000u; // 800FB9B4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FB9B8
  c->r[6]=c->r[6]+0xFFFFB290u; // 800FB9BC
  c->r[26]=c->r[4]|c->r[4]; // 800FB9C0
  c->r[29]=R32(c->r[6]+c->r[0]); // 800FB9C4
  c->r[27]=c->r[5]|c->r[5]; // 800FB9C8
  c->lr=0x800FB9D0u; f_800B087C(c); // 800FB9CC
  c->r[0]=R32(c->r[29]+0x00000900u); // 800FB9D0
  c->r[28]=c->r[3]|c->r[3]; // 800FB9D4
  c->r[30]=0u+0xFFFFFFFCu; // 800FB9D8
  cmps(c,0,(int32_t)c->r[0],-1); // 800FB9DC
  if (!crb(c,2)) { goto L_800FB9E8; } // 800FB9E0
  c->r[30]=0u+0xFFFFFFFFu; // 800FB9E4
L_800FB9E8:;
  c->r[3]=R32(c->r[29]+0x000008FCu); // 800FB9E8
  c->lr=0x800FB9F0u; f_800F7BB0(c); // 800FB9EC
  cmps(c,0,(int32_t)c->r[26],0); // 800FB9F0
  c->r[31]=c->r[3]|c->r[3]; // 800FB9F4
  if (crb(c,2)) { goto L_800FBAD8; } // 800FB9F8
  c->r[5]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[27]); // 800FB9FC
  c->r[3]=c->r[26]|c->r[26]; // 800FBA00
  c->r[4]=0u+0x00000000u; // 800FBA04
  c->lr=0x800FBA0Cu; f_80004688(c); // 800FBA08
  cmpu(c,0,c->r[27],0x00000000u); // 800FBA0C
  c->r[3]=c->r[27]|c->r[27]; // 800FBA10
  c->r[4]=0u+0x00000000u; // 800FBA14
  if (!crb(c,1)) { goto L_800FBACC; } // 800FBA18
  c->r[0]=rotl(c->r[27],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800FBA1C
  c->ctr=c->r[0]; // 800FBA20
  if (crb(c,2)) { goto L_800FBAB4; } // 800FBA24
L_800FBA28:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[31]); // 800FBA28
  c->r[4]=c->r[4]+0x00000001u; // 800FBA2C
  c->r[3]=c->r[26]+c->r[0]; // 800FBA30
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[31]); // 800FBA34
  W8(c->r[3]+0x00000029u,c->r[30]); // 800FBA38
  c->r[4]=c->r[4]+0x00000001u; // 800FBA3C
  c->r[3]=c->r[26]+c->r[0]; // 800FBA40
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[31]); // 800FBA44
  W8(c->r[3]+0x00000029u,c->r[30]); // 800FBA48
  c->r[4]=c->r[4]+0x00000001u; // 800FBA4C
  c->r[3]=c->r[26]+c->r[0]; // 800FBA50
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[31]); // 800FBA54
  W8(c->r[3]+0x00000029u,c->r[30]); // 800FBA58
  c->r[4]=c->r[4]+0x00000001u; // 800FBA5C
  c->r[3]=c->r[26]+c->r[0]; // 800FBA60
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[31]); // 800FBA64
  c->r[4]=c->r[4]+0x00000001u; // 800FBA68
  W8(c->r[3]+0x00000029u,c->r[30]); // 800FBA6C
  c->r[3]=c->r[26]+c->r[0]; // 800FBA70
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[31]); // 800FBA74
  W8(c->r[3]+0x00000029u,c->r[30]); // 800FBA78
  c->r[4]=c->r[4]+0x00000001u; // 800FBA7C
  c->r[3]=c->r[26]+c->r[0]; // 800FBA80
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[31]); // 800FBA84
  W8(c->r[3]+0x00000029u,c->r[30]); // 800FBA88
  c->r[4]=c->r[4]+0x00000001u; // 800FBA8C
  c->r[3]=c->r[26]+c->r[0]; // 800FBA90
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[31]); // 800FBA94
  W8(c->r[3]+0x00000029u,c->r[30]); // 800FBA98
  c->r[4]=c->r[4]+0x00000001u; // 800FBA9C
  c->r[3]=c->r[26]+c->r[0]; // 800FBAA0
  W8(c->r[3]+0x00000029u,c->r[30]); // 800FBAA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FBA28; } // 800FBAA8
  c->r[3]=c->r[27]&0x00000007u; cr0(c,c->r[3]); // 800FBAAC
  if (crb(c,2)) { goto L_800FBACC; } // 800FBAB0
L_800FBAB4:;
  c->ctr=c->r[3]; // 800FBAB4
L_800FBAB8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[31]); // 800FBAB8
  c->r[4]=c->r[4]+0x00000001u; // 800FBABC
  c->r[3]=c->r[26]+c->r[0]; // 800FBAC0
  W8(c->r[3]+0x00000029u,c->r[30]); // 800FBAC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FBAB8; } // 800FBAC8
L_800FBACC:;
  c->r[0]=0u+0xFFFFFFFFu; // 800FBACC
  W32(c->r[29]+0x000008F4u,c->r[0]); // 800FBAD0
  W32(c->r[29]+0x000008F8u,c->r[27]); // 800FBAD4
L_800FBAD8:;
  W32(c->r[29]+0x000008F0u,c->r[26]); // 800FBAD8
  c->r[3]=c->r[28]|c->r[28]; // 800FBADC
  c->lr=0x800FBAE4u; f_800B08A4(c); // 800FBAE0
  c->r[11]=c->r[1]+0x00000020u; // 800FBAE4
  c->lr=0x800FBAECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FBAE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBAEC
  c->lr=c->r[0]; // 800FBAF0
  c->r[1]=c->r[1]+0x00000020u; // 800FBAF4
  return; // 800FBAF8
}

// WPADiExcludeButton
void f_800FBB00(Ctx* __restrict c) {
  trace_call(0x800FBB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBB00
  c->r[0]=c->lr; // 800FBB04
  c->r[4]=0u+0x802E0000u; // 800FBB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBB0C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FBB10
  c->r[4]=c->r[4]+0xFFFFB290u; // 800FBB14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FBB18
  c->r[31]=R32(c->r[4]+c->r[0]); // 800FBB1C
  c->lr=0x800FBB24u; f_800B087C(c); // 800FBB20
  c->r[0]=R8(c->r[31]+0x0000090Cu); // 800FBB24
  c->r[0]=cntlz(c->r[0]); // 800FBB28
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800FBB2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800FBB30
  c->r[6]=c->r[31]+c->r[0]; // 800FBB34
  c->r[4]=R16(c->r[6]+0x000000A0u); // 800FBB38
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 800FBB3C
  cmps(c,0,(int32_t)c->r[0],3); // 800FBB40
  if (!crb(c,2)) { goto L_800FBB50; } // 800FBB44
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFDu; // 800FBB48
  W16(c->r[6]+0x000000A0u,c->r[0]); // 800FBB4C
L_800FBB50:;
  c->r[4]=R16(c->r[6]+0x000000A0u); // 800FBB50
  c->r[0]=rotl(c->r[4],0)&0x0000000Cu; // 800FBB54
  cmps(c,0,(int32_t)c->r[0],12); // 800FBB58
  if (!crb(c,2)) { goto L_800FBB68; } // 800FBB5C
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFBu; // 800FBB60
  W16(c->r[6]+0x000000A0u,c->r[0]); // 800FBB64
L_800FBB68:;
  c->r[4]=R32(c->r[31]+0x000008FCu); // 800FBB68
  c->r[0]=c->r[4]+0xFFFFFFFAu; // 800FBB6C
  cmpu(c,0,c->r[0],0x00000002u); // 800FBB70
  if (!crb(c,1)) { goto L_800FBB88; } // 800FBB74
  cmpu(c,0,c->r[4],0x0000000Bu); // 800FBB78
  if (crb(c,2)) { goto L_800FBB88; } // 800FBB7C
  cmpu(c,0,c->r[4],0x0000000Fu); // 800FBB80
  if (!crb(c,2)) { goto L_800FBBBC; } // 800FBB84
L_800FBB88:;
  c->r[5]=R16(c->r[6]+0x000000CAu); // 800FBB88
  c->r[4]=c->r[5]&0x00008002u; cr0(c,c->r[4]); // 800FBB8C
  c->r[0]=c->r[4]+0x00000000u; // 800FBB90
  cmpu(c,0,c->r[0],0x00008002u); // 800FBB94
  if (!crb(c,2)) { goto L_800FBBA4; } // 800FBB98
  c->r[0]=rotl(c->r[5],0)&0x00007FFFu; // 800FBB9C
  W16(c->r[6]+0x000000CAu,c->r[0]); // 800FBBA0
L_800FBBA4:;
  c->r[4]=R16(c->r[6]+0x000000CAu); // 800FBBA4
  c->r[0]=c->r[4]&0x00004001u; cr0(c,c->r[0]); // 800FBBA8
  cmps(c,0,(int32_t)c->r[0],16385); // 800FBBAC
  if (!crb(c,2)) { goto L_800FBBBC; } // 800FBBB0
  c->r[0]=rotl(c->r[4],0)&0xFFFFBFFFu; // 800FBBB4
  W16(c->r[6]+0x000000CAu,c->r[0]); // 800FBBB8
L_800FBBBC:;
  c->r[0]=R32(c->r[31]+0x000008FCu); // 800FBBBC
  cmpu(c,0,c->r[0],0x0000000Au); // 800FBBC0
  if (!crb(c,2)) { goto L_800FBBFC; } // 800FBBC4
  c->r[5]=R16(c->r[6]+0x000000CAu); // 800FBBC8
  c->r[4]=c->r[5]&0x00008002u; cr0(c,c->r[4]); // 800FBBCC
  c->r[0]=c->r[4]+0x00000000u; // 800FBBD0
  cmpu(c,0,c->r[0],0x00008002u); // 800FBBD4
  if (!crb(c,2)) { goto L_800FBBE4; } // 800FBBD8
  c->r[0]=rotl(c->r[5],0)&0x00007FFFu; // 800FBBDC
  W16(c->r[6]+0x000000CAu,c->r[0]); // 800FBBE0
L_800FBBE4:;
  c->r[4]=R16(c->r[6]+0x000000CAu); // 800FBBE4
  c->r[0]=c->r[4]&0x00004001u; cr0(c,c->r[0]); // 800FBBE8
  cmps(c,0,(int32_t)c->r[0],16385); // 800FBBEC
  if (!crb(c,2)) { goto L_800FBBFC; } // 800FBBF0
  c->r[0]=rotl(c->r[4],0)&0xFFFFBFFFu; // 800FBBF4
  W16(c->r[6]+0x000000CAu,c->r[0]); // 800FBBF8
L_800FBBFC:;
  c->lr=0x800FBC00u; f_800B08A4(c); // 800FBBFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBC00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FBC04
  c->lr=c->r[0]; // 800FBC08
  c->r[1]=c->r[1]+0x00000010u; // 800FBC0C
  return; // 800FBC10
}

// WPADiCopyOut
void f_800FBC20(Ctx* __restrict c) {
  trace_call(0x800FBC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBC20
  c->r[0]=c->lr; // 800FBC24
  c->r[4]=0u+0x802E0000u; // 800FBC28
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FBC2C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FBC30
  c->r[4]=c->r[4]+0xFFFFB290u; // 800FBC34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FBC38
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FBC3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FBC40
  c->r[29]=c->r[3]|c->r[3]; // 800FBC44
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FBC48
  c->r[31]=R32(c->r[4]+c->r[0]); // 800FBC4C
  c->lr=0x800FBC54u; f_800B087C(c); // 800FBC50
  c->r[0]=R8(c->r[31]+0x0000090Cu); // 800FBC54
  c->r[30]=c->r[3]|c->r[3]; // 800FBC58
  c->r[3]=R32(c->r[31]+0x000008FCu); // 800FBC5C
  c->r[0]=cntlz(c->r[0]); // 800FBC60
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800FBC64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800FBC68
  c->r[4]=c->r[31]+c->r[0]; // 800FBC6C
  c->r[28]=c->r[4]+0x000000A0u; // 800FBC70
  c->lr=0x800FBC78u; f_800F7BB0(c); // 800FBC74
  c->r[0]=R32(c->r[31]+0x000008F0u); // 800FBC78
  c->r[5]=c->r[3]|c->r[3]; // 800FBC7C
  cmps(c,0,(int32_t)c->r[0],0); // 800FBC80
  if (crb(c,2)) { goto L_800FBCD0; } // 800FBC84
  c->r[4]=R32(c->r[31]+0x000008F4u); // 800FBC88
  c->r[4]=c->r[4]+0x00000001u; // 800FBC8C
  W32(c->r[31]+0x000008F4u,c->r[4]); // 800FBC90
  c->r[0]=R32(c->r[31]+0x000008F8u); // 800FBC94
  cmpu(c,0,c->r[4],c->r[0]); // 800FBC98
  if (crb(c,0)) { goto L_800FBCA8; } // 800FBC9C
  c->r[0]=0u+0x00000000u; // 800FBCA0
  W32(c->r[31]+0x000008F4u,c->r[0]); // 800FBCA4
L_800FBCA8:;
  c->r[4]=R32(c->r[31]+0x000008F4u); // 800FBCA8
  c->r[0]=R8(c->r[28]+0x00000029u); // 800FBCAC
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[3]); // 800FBCB0
  c->r[4]=R32(c->r[31]+0x000008F0u); // 800FBCB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800FBCB8
  c->r[3]=c->r[4]+c->r[3]; // 800FBCBC
  if (crb(c,2)) { goto L_800FBCC8; } // 800FBCC0
  c->r[5]=0u+0x0000002Au; // 800FBCC4
L_800FBCC8:;
  c->r[4]=c->r[28]|c->r[28]; // 800FBCC8
  c->lr=0x800FBCD0u; f_80004338(c); // 800FBCCC
L_800FBCD0:;
  c->r[12]=R32(c->r[31]+0x000008ECu); // 800FBCD0
  cmps(c,0,(int32_t)c->r[12],0); // 800FBCD4
  if (crb(c,2)) { goto L_800FBCE8; } // 800FBCD8
  c->r[3]=c->r[29]|c->r[29]; // 800FBCDC
  c->ctr=c->r[12]; // 800FBCE0
  if (true) { c->lr=0x800FBCE8u; dispatch(c,c->ctr); } // 800FBCE4
L_800FBCE8:;
  c->r[4]=R16(c->r[31]+0x00000B74u); // 800FBCE8
  c->r[3]=c->r[30]|c->r[30]; // 800FBCEC
  c->r[0]=c->r[4]+0x00000001u; // 800FBCF0
  W16(c->r[31]+0x00000B74u,c->r[0]); // 800FBCF4
  c->lr=0x800FBCFCu; f_800B08A4(c); // 800FBCF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBCFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FBD00
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FBD04
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FBD08
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FBD0C
  c->lr=c->r[0]; // 800FBD10
  c->r[1]=c->r[1]+0x00000020u; // 800FBD14
  return; // 800FBD18
}

// WPADIsSpeakerEnabled
void f_800FBD20(Ctx* __restrict c) {
  stub_log(0x800FBD20u); c->r[3]=0; return;
}

// WPADControlSpeaker
void f_800FBD70(Ctx* __restrict c) {
  stub_log(0x800FBD70u); c->r[3]=0; return;
}

// WPADGetSpeakerVolume
void f_800FD370(Ctx* __restrict c) {
  stub_log(0x800FD370u); c->r[3]=0; return;
}

// WPADSetSpeakerVolume
void f_800FD3B0(Ctx* __restrict c) {
  stub_log(0x800FD3B0u);  return;
}

// __wpadIsBusyStream
void f_800FD400(Ctx* __restrict c) {
  trace_call(0x800FD400u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD400
  c->r[0]=c->lr; // 800FD404
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FD408
  c->r[11]=c->r[1]+0x00000030u; // 800FD40C
  c->lr=0x800FD414u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FD410
  c->r[27]=0u+0x802E0000u; // 800FD414
  c->r[25]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD418
  c->r[27]=c->r[27]+0xFFFFB290u; // 800FD41C
  c->r[30]=R32(c->r[27]+c->r[25]); // 800FD420
  c->lr=0x800FD428u; f_800B087C(c); // 800FD424
  c->r[29]=R8(c->r[30]+0x00000911u); // 800FD428
  c->r[31]=c->r[3]|c->r[3]; // 800FD42C
  c->r[28]=R8(c->r[30]+0x00000905u); // 800FD430
  c->lr=0x800FD438u; f_8010BD58(c); // 800FD434
  c->r[26]=c->r[3]|c->r[3]; // 800FD438
  c->lr=0x800FD440u; f_800B087C(c); // 800FD43C
  c->r[4]=R8(c->r[30]+0x00000160u); // 800FD440
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FD444
  c->r[0]=c->r[0]-c->r[4]; // 800FD448
  c->r[24]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[24]); // 800FD44C
  if (!crb(c,0)) { goto L_800FD460; } // 800FD450
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FD454
  c->r[0]=c->r[24]+c->r[0]; // 800FD458
  c->r[24]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FD45C
L_800FD460:;
  c->lr=0x800FD464u; f_800B08A4(c); // 800FD460
  c->r[23]=R32(c->r[27]+c->r[25]); // 800FD464
  c->lr=0x800FD46Cu; f_800B087C(c); // 800FD468
  c->r[22]=R32(c->r[23]+0x00000900u); // 800FD46C
  c->r[23]=R8(c->r[23]+0x00000907u); // 800FD470
  c->lr=0x800FD478u; f_800B08A4(c); // 800FD474
  cmps(c,0,(int32_t)c->r[22],-1); // 800FD478
  if (crb(c,2)) { goto L_800FD488; } // 800FD47C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[23]; // 800FD480
  c->lr=0x800FD488u; f_8010E758(c); // 800FD484
L_800FD488:;
  c->r[22]=R32(c->r[27]+c->r[25]); // 800FD488
  c->lr=0x800FD490u; f_800B087C(c); // 800FD48C
  c->r[23]=R32(c->r[22]+0x00000900u); // 800FD490
  c->r[22]=R8(c->r[22]+0x00000907u); // 800FD494
  c->lr=0x800FD49Cu; f_800B08A4(c); // 800FD498
  cmps(c,0,(int32_t)c->r[23],-1); // 800FD49C
  if (!crb(c,2)) { goto L_800FD4AC; } // 800FD4A0
  c->r[27]=0u+0x00000000u; // 800FD4A4
  goto L_800FD4B8; // 800FD4A8
L_800FD4AC:;
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[22]; // 800FD4AC
  c->lr=0x800FD4B4u; f_8010E7B4(c); // 800FD4B0
  c->r[27]=c->r[3]|c->r[3]; // 800FD4B4
L_800FD4B8:;
  c->r[22]=R8(c->r[30]+0x00000913u); // 800FD4B8
  c->lr=0x800FD4C0u; f_8010E810(c); // 800FD4BC
  c->r[30]=c->r[3]|c->r[3]; // 800FD4C0
  c->r[3]=c->r[31]|c->r[31]; // 800FD4C4
  c->lr=0x800FD4CCu; f_800B08A4(c); // 800FD4C8
  cmps(c,0,(int32_t)c->r[29],0); // 800FD4CC
  if (!crb(c,2)) { goto L_800FD514; } // 800FD4D0
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; // 800FD4D4
  cmpu(c,0,c->r[0],0x00000003u); // 800FD4D8
  if (crb(c,1)) { goto L_800FD514; } // 800FD4DC
  c->r[4]=rotl(c->r[26],0)&0x000000FFu; // 800FD4E0
  cmpu(c,0,c->r[4],0x0000000Au); // 800FD4E4
  if (crb(c,2)) { goto L_800FD514; } // 800FD4E8
  c->r[3]=rotl(c->r[30],1)&0x000001FEu; // 800FD4EC
  c->r[0]=c->r[3]+0x00000002u; // 800FD4F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800FD4F4
  if (!crb(c,0)) { goto L_800FD514; } // 800FD4F8
  cmpu(c,0,c->r[28],0x000000FFu); // 800FD4FC
  if (crb(c,2)) { goto L_800FD514; } // 800FD500
  cmps(c,0,(int32_t)c->r[24],21); // 800FD504
  if (!crb(c,0)) { goto L_800FD514; } // 800FD508
  cmpu(c,0,c->r[22],0x00000001u); // 800FD50C
  if (crb(c,0)) { goto L_800FD51C; } // 800FD510
L_800FD514:;
  c->r[3]=0u+0x00000001u; // 800FD514
  goto L_800FD520; // 800FD518
L_800FD51C:;
  c->r[3]=0u+0x00000000u; // 800FD51C
L_800FD520:;
  c->r[11]=c->r[1]+0x00000030u; // 800FD520
  c->lr=0x800FD528u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FD524
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FD528
  c->lr=c->r[0]; // 800FD52C
  c->r[1]=c->r[1]+0x00000030u; // 800FD530
  return; // 800FD534
}

// WPADCanSendStreamData
void f_800FD540(Ctx* __restrict c) {
  stub_log(0x800FD540u); c->r[3]=0; return;
}

// WPADSendStreamData
void f_800FD5D0(Ctx* __restrict c) {
  stub_log(0x800FD5D0u); c->r[3]=0xFFFFFFFFu; return;
}

// WPADGetDpdSensitivity
void f_800FD7E0(Ctx* __restrict c) {
  trace_call(0x800FD7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD7E0
  c->r[0]=c->lr; // 800FD7E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD7E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FD7EC
  c->lr=0x800FD7F4u; f_800B087C(c); // 800FD7F0
  c->r[31]=R8(c->r[13]+0xFFFF9355u); // 800FD7F4
  c->lr=0x800FD7FCu; f_800B08A4(c); // 800FD7F8
  c->r[3]=c->r[31]|c->r[31]; // 800FD7FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FD800
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD804
  c->lr=c->r[0]; // 800FD808
  c->r[1]=c->r[1]+0x00000010u; // 800FD80C
  return; // 800FD810
}

// WPADIsDpdEnabled
void f_800FD820(Ctx* __restrict c) {
  stub_log(0x800FD820u); c->r[3]=1; return;
}

// __wpadDpdCallback
void f_800FD870(Ctx* __restrict c) {
  trace_call(0x800FD870u);
  c->r[4]=0u+0x802E0000u; // 800FD870
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD874
  c->r[4]=c->r[4]+0xFFFFB290u; // 800FD878
  c->r[0]=0u+0x00000000u; // 800FD87C
  c->r[4]=R32(c->r[4]+c->r[3]); // 800FD880
  c->r[3]=R8(c->r[4]+0x00000910u); // 800FD884
  W8(c->r[4]+0x0000090Fu,c->r[3]); // 800FD888
  W8(c->r[4]+0x00000BA0u,c->r[0]); // 800FD88C
  c->r[3]=R8(c->r[4]+0x00000910u); // 800FD890
  c->r[0]=0u-c->r[3]; // 800FD894
  c->r[0]=c->r[0]|c->r[3]; // 800FD898
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800FD89C
  W32(c->r[4]+0x00000838u,c->r[0]); // 800FD8A0
  return; // 800FD8A4
}

// WPADControlDpd
void f_800FD8B0(Ctx* __restrict c) {
  stub_log(0x800FD8B0u); c->r[3]=0; return;
}

// WPADControlBLC
void f_800FE930(Ctx* __restrict c) {
  trace_call(0x800FE930u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE930
  c->r[0]=c->lr; // 800FE934
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FE938
  c->r[11]=c->r[1]+0x00000030u; // 800FE93C
  c->lr=0x800FE944u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FE940
  c->r[6]=0u+0x802E0000u; // 800FE944
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FE948
  c->r[6]=c->r[6]+0xFFFFB290u; // 800FE94C
  c->r[31]=c->r[3]|c->r[3]; // 800FE950
  c->r[28]=R32(c->r[6]+c->r[0]); // 800FE954
  c->r[26]=c->r[4]|c->r[4]; // 800FE958
  c->r[27]=c->r[5]|c->r[5]; // 800FE95C
  c->lr=0x800FE964u; f_800B087C(c); // 800FE960
  c->r[30]=R32(c->r[28]+0x00000900u); // 800FE964
  c->r[29]=R32(c->r[28]+0x00000920u); // 800FE968
  c->lr=0x800FE970u; f_800B08A4(c); // 800FE96C
  cmps(c,0,(int32_t)c->r[30],-1); // 800FE970
  if (crb(c,2)) { goto L_800FEB1C; } // 800FE974
  cmps(c,0,(int32_t)c->r[29],0); // 800FE978
  if (crb(c,2)) { goto L_800FE98C; } // 800FE97C
  c->lr=0x800FE984u; f_8010878C(c); // 800FE980
  cmps(c,0,(int32_t)c->r[3],0); // 800FE984
  if (!crb(c,2)) { goto L_800FE994; } // 800FE988
L_800FE98C:;
  c->r[30]=0u+0xFFFFFFFEu; // 800FE98C
  goto L_800FEB1C; // 800FE990
L_800FE994:;
  c->r[3]=0u+0x000000AAu; // 800FE994
  c->r[0]=0u+0x00000055u; // 800FE998
  W8(c->r[1]+0x0000000Au,c->r[3]); // 800FE99C
  W8(c->r[1]+0x00000009u,c->r[3]); // 800FE9A0
  W8(c->r[1]+0x00000008u,c->r[3]); // 800FE9A4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800FE9A8
  W8(c->r[1]+0x0000000Eu,c->r[26]); // 800FE9AC
  W8(c->r[1]+0x0000000Du,c->r[26]); // 800FE9B0
  W8(c->r[1]+0x0000000Cu,c->r[26]); // 800FE9B4
  c->lr=0x800FE9BCu; f_800B087C(c); // 800FE9B8
  cmps(c,0,(int32_t)c->r[26],170); // 800FE9BC
  c->r[29]=c->r[3]|c->r[3]; // 800FE9C0
  if (crb(c,2)) { goto L_800FE9DC; } // 800FE9C4
  cmps(c,0,(int32_t)c->r[26],85); // 800FE9C8
  if (crb(c,2)) { goto L_800FEAA0; } // 800FE9CC
  cmps(c,0,(int32_t)c->r[26],0); // 800FE9D0
  if (crb(c,2)) { goto L_800FEAD8; } // 800FE9D4
  goto L_800FEB10; // 800FE9D8
L_800FE9DC:;
  c->lr=0x800FE9E0u; f_800B087C(c); // 800FE9DC
  c->r[4]=R8(c->r[28]+0x00000160u); // 800FE9E0
  c->r[0]=R8(c->r[28]+0x00000161u); // 800FE9E4
  c->r[0]=c->r[0]-c->r[4]; // 800FE9E8
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[30]); // 800FE9EC
  if (!crb(c,0)) { goto L_800FEA00; } // 800FE9F0
  c->r[0]=R32(c->r[28]+0x00000168u); // 800FE9F4
  c->r[0]=c->r[30]+c->r[0]; // 800FE9F8
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FE9FC
L_800FEA00:;
  c->lr=0x800FEA04u; f_800B08A4(c); // 800FEA00
  c->r[3]=R32(c->r[28]+0x00000168u); // 800FEA04
  c->r[4]=c->r[30]+0x00000004u; // 800FEA08
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FEA0C
  cmpu(c,0,c->r[4],c->r[0]); // 800FEA10
  if (crb(c,1)) { goto L_800FEA98; } // 800FEA14
  c->r[3]=c->r[31]|c->r[31]; // 800FEA18
  c->r[4]=c->r[1]+0x00000008u; // 800FEA1C
  c->r[5]=0u+0x00000007u; // 800FEA20
  c->r[6]=0u+0x000000A4u; // 800FEA24
  c->r[7]=0u+0x000000F1u; // 800FEA28
  c->r[8]=0u+0x00000000u; // 800FEA2C
  c->lr=0x800FEA34u; f_80107E40(c); // 800FEA30
  c->r[3]=c->r[31]|c->r[31]; // 800FEA34
  c->r[4]=c->r[1]+0x00000008u; // 800FEA38
  c->r[5]=0u+0x00000001u; // 800FEA3C
  c->r[6]=0u+0x000000A4u; // 800FEA40
  c->r[7]=0u+0x000000F1u; // 800FEA44
  c->r[8]=0u+0x00000000u; // 800FEA48
  c->lr=0x800FEA50u; f_80107E40(c); // 800FEA4C
  c->r[3]=c->r[31]|c->r[31]; // 800FEA50
  c->r[4]=c->r[1]+0x00000008u; // 800FEA54
  c->r[5]=0u+0x00000001u; // 800FEA58
  c->r[6]=0u+0x000000A4u; // 800FEA5C
  c->r[7]=0u+0x000000F1u; // 800FEA60
  c->r[8]=0u+0x00000000u; // 800FEA64
  c->lr=0x800FEA6Cu; f_80107E40(c); // 800FEA68
  c->r[3]=c->r[31]|c->r[31]; // 800FEA6C
  c->r[8]=c->r[27]|c->r[27]; // 800FEA70
  c->r[4]=c->r[1]+0x00000008u; // 800FEA74
  c->r[5]=0u+0x00000001u; // 800FEA78
  c->r[6]=0u+0x000000A4u; // 800FEA7C
  c->r[7]=0u+0x000000F1u; // 800FEA80
  c->lr=0x800FEA88u; f_80107E40(c); // 800FEA84
  c->r[3]=c->r[29]|c->r[29]; // 800FEA88
  c->lr=0x800FEA90u; f_800B08A4(c); // 800FEA8C
  c->r[3]=0u+0x00000000u; // 800FEA90
  goto L_800FEB3C; // 800FEA94
L_800FEA98:;
  c->r[30]=0u+0xFFFFFFFEu; // 800FEA98
  goto L_800FEB14; // 800FEA9C
L_800FEAA0:;
  c->r[3]=c->r[31]|c->r[31]; // 800FEAA0
  c->r[8]=c->r[27]|c->r[27]; // 800FEAA4
  c->r[4]=c->r[1]+0x00000008u; // 800FEAA8
  c->r[5]=0u+0x00000007u; // 800FEAAC
  c->r[6]=0u+0x000000A4u; // 800FEAB0
  c->r[7]=0u+0x000000F1u; // 800FEAB4
  c->lr=0x800FEABCu; f_80107E40(c); // 800FEAB8
  cmps(c,0,(int32_t)c->r[3],0); // 800FEABC
  c->r[30]=c->r[3]|c->r[3]; // 800FEAC0
  if (!crb(c,2)) { goto L_800FEB14; } // 800FEAC4
  c->r[3]=c->r[29]|c->r[29]; // 800FEAC8
  c->lr=0x800FEAD0u; f_800B08A4(c); // 800FEACC
  c->r[3]=0u+0x00000000u; // 800FEAD0
  goto L_800FEB3C; // 800FEAD4
L_800FEAD8:;
  c->r[3]=c->r[31]|c->r[31]; // 800FEAD8
  c->r[8]=c->r[27]|c->r[27]; // 800FEADC
  c->r[4]=c->r[1]+0x00000008u; // 800FEAE0
  c->r[5]=0u+0x00000001u; // 800FEAE4
  c->r[6]=0u+0x000000A4u; // 800FEAE8
  c->r[7]=0u+0x000000F1u; // 800FEAEC
  c->lr=0x800FEAF4u; f_80107E40(c); // 800FEAF0
  cmps(c,0,(int32_t)c->r[3],0); // 800FEAF4
  c->r[30]=c->r[3]|c->r[3]; // 800FEAF8
  if (!crb(c,2)) { goto L_800FEB14; } // 800FEAFC
  c->r[3]=c->r[29]|c->r[29]; // 800FEB00
  c->lr=0x800FEB08u; f_800B08A4(c); // 800FEB04
  c->r[3]=0u+0x00000000u; // 800FEB08
  goto L_800FEB3C; // 800FEB0C
L_800FEB10:;
  c->r[30]=0u+0xFFFFFFFEu; // 800FEB10
L_800FEB14:;
  c->r[3]=c->r[29]|c->r[29]; // 800FEB14
  c->lr=0x800FEB1Cu; f_800B08A4(c); // 800FEB18
L_800FEB1C:;
  cmps(c,0,(int32_t)c->r[27],0); // 800FEB1C
  if (crb(c,2)) { goto L_800FEB38; } // 800FEB20
  c->r[12]=c->r[27]|c->r[27]; // 800FEB24
  c->r[3]=c->r[31]|c->r[31]; // 800FEB28
  c->r[4]=c->r[30]|c->r[30]; // 800FEB2C
  c->ctr=c->r[12]; // 800FEB30
  if (true) { c->lr=0x800FEB38u; dispatch(c,c->ctr); } // 800FEB34
L_800FEB38:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEB38
L_800FEB3C:;
  c->r[11]=c->r[1]+0x00000030u; // 800FEB3C
  c->lr=0x800FEB44u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FEB40
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FEB44
  c->lr=c->r[0]; // 800FEB48
  c->r[1]=c->r[1]+0x00000030u; // 800FEB4C
  return; // 800FEB50
}

// WPADGetMplsStatus
void f_800FEB60(Ctx* __restrict c) {
  trace_call(0x800FEB60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEB60
  c->r[0]=c->lr; // 800FEB64
  c->r[4]=0u+0x802E0000u; // 800FEB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEB6C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FEB70
  c->r[4]=c->r[4]+0xFFFFB290u; // 800FEB74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FEB78
  c->r[31]=0u+0x00000000u; // 800FEB7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FEB80
  c->r[30]=R32(c->r[4]+c->r[0]); // 800FEB84
  c->lr=0x800FEB8Cu; f_800B087C(c); // 800FEB88
  c->r[4]=R8(c->r[30]+0x00000905u); // 800FEB8C
  c->r[0]=c->r[4]+0x000000FBu; // 800FEB90
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800FEB94
  cmpu(c,0,c->r[0],0x00000002u); // 800FEB98
  if (!crb(c,1)) { goto L_800FEBA8; } // 800FEB9C
  cmpu(c,0,c->r[4],0x000000FAu); // 800FEBA0
  if (!crb(c,2)) { goto L_800FEBAC; } // 800FEBA4
L_800FEBA8:;
  c->r[31]=R8(c->r[30]+0x00000906u); // 800FEBA8
L_800FEBAC:;
  c->lr=0x800FEBB0u; f_800B08A4(c); // 800FEBAC
  c->r[3]=c->r[31]|c->r[31]; // 800FEBB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FEBB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FEBB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEBBC
  c->lr=c->r[0]; // 800FEBC0
  c->r[1]=c->r[1]+0x00000010u; // 800FEBC4
  return; // 800FEBC8
}

// __wpadMplsCallback
void f_800FEBD0(Ctx* __restrict c) {
  trace_call(0x800FEBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFC50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEBD0
  c->r[0]=c->lr; // 800FEBD4
  c->r[5]=0u+0x802E0000u; // 800FEBD8
  W32(c->r[1]+0x000003B4u,c->r[0]); // 800FEBDC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FEBE0
  c->r[5]=c->r[5]+0xFFFFB290u; // 800FEBE4
  W32(c->r[1]+0x000003ACu,c->r[31]); // 800FEBE8
  W32(c->r[1]+0x000003A8u,c->r[30]); // 800FEBEC
  W32(c->r[1]+0x000003A4u,c->r[29]); // 800FEBF0
  c->r[29]=c->r[3]|c->r[3]; // 800FEBF4
  W32(c->r[1]+0x000003A0u,c->r[28]); // 800FEBF8
  c->r[30]=R32(c->r[5]+c->r[0]); // 800FEBFC
  c->r[0]=R8(c->r[30]+0x00000B9Eu); // 800FEC00
  cmpu(c,0,c->r[0],0x00000008u); // 800FEC04
  if (crb(c,1)) { goto L_800FFCDC; } // 800FEC08
  c->r[3]=0u+0x80280000u; // 800FEC0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FEC10
  c->r[3]=c->r[3]+0xFFFFBA58u; // 800FEC14
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FEC18
  c->ctr=c->r[3]; // 800FEC1C
  if (true) { switch (c->ctr) { case 0x800FEC24u: goto L_800FEC24; case 0x800FF570u: goto L_800FF570; case 0x800FF754u: goto L_800FF754; case 0x800FF914u: goto L_800FF914; case 0x800FF930u: goto L_800FF930; case 0x800FFB14u: goto L_800FFB14; case 0x800FFCD0u: goto L_800FFCD0; case 0x800FFCD4u: goto L_800FFCD4; case 0x800FFCDCu: goto L_800FFCDC; default: break; } dispatch(c,c->ctr); return; } // 800FEC20
L_800FEC24:;
  cmps(c,0,(int32_t)c->r[4],0); // 800FEC24
  if (!crb(c,2)) { goto L_800FF388; } // 800FEC28
  c->r[3]=R8(c->r[30]+0x00000932u); // 800FEC2C
  c->r[0]=c->r[3]+0x000000FBu; // 800FEC30
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800FEC34
  cmpu(c,0,c->r[0],0x00000002u); // 800FEC38
  if (!crb(c,1)) { goto L_800FEE2C; } // 800FEC3C
  cmpu(c,0,c->r[3],0x000000FAu); // 800FEC40
  if (crb(c,2)) { goto L_800FEE2C; } // 800FEC44
  c->r[3]=R8(c->r[30]+0x00000933u); // 800FEC48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FEC4C
  W8(c->r[30]+0x00000933u,c->r[0]); // 800FEC50
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 800FEC54
  if (!crb(c,2)) { goto L_800FEC64; } // 800FEC58
  c->r[4]=0u+0xFFFFFFFDu; // 800FEC5C
  goto L_800FFCDC; // 800FEC60
L_800FEC64:;
  cmpu(c,0,c->r[0],0x00000001u); // 800FEC64
  if (!crb(c,1)) { goto L_800FEC7C; } // 800FEC68
  c->r[3]=0u+0x04A60000u; // 800FEC6C
  c->r[0]=c->r[3]+0x000000FEu; // 800FEC70
  W32(c->r[30]+0x00000BA8u,c->r[0]); // 800FEC74
  goto L_800FEC88; // 800FEC78
L_800FEC7C:;
  c->r[3]=0u+0x04A40000u; // 800FEC7C
  c->r[0]=c->r[3]+0x000000FEu; // 800FEC80
  W32(c->r[30]+0x00000BA8u,c->r[0]); // 800FEC84
L_800FEC88:;
  c->r[3]=R32(c->r[30]+0x00000BA8u); // 800FEC88
  c->r[6]=0u+0x80100000u; // 800FEC8C
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FEC90
  c->r[8]=0u+0x00000002u; // 800FEC94
  c->r[7]=0u+0x00000017u; // 800FEC98
  c->r[0]=0u+0x00000006u; // 800FEC9C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800FECA0
  c->r[3]=c->r[1]+0x00000344u; // 800FECA4
  c->r[4]=c->r[1]+0x0000003Cu; // 800FECA8
  c->r[5]=0u+0x00000004u; // 800FECAC
  W16(c->r[1]+0x00000018u,c->r[8]); // 800FECB0
  W32(c->r[1]+0x00000340u,c->r[7]); // 800FECB4
  W16(c->r[1]+0x0000035Au,c->r[0]); // 800FECB8
  W32(c->r[1]+0x0000036Cu,c->r[6]); // 800FECBC
  c->lr=0x800FECC4u; f_80004338(c); // 800FECC0
  c->r[3]=c->r[1]+0x00000348u; // 800FECC4
  c->r[4]=c->r[1]+0x00000018u; // 800FECC8
  c->r[5]=0u+0x00000002u; // 800FECCC
  c->lr=0x800FECD4u; f_80004338(c); // 800FECD0
  c->r[0]=R16(c->r[1]+0x00000018u); // 800FECD4
  c->r[31]=c->r[30]+0x00000931u; // 800FECD8
  W16(c->r[1]+0x00000360u,c->r[0]); // 800FECDC
  c->r[12]=R32(c->r[1]+0x0000003Cu); // 800FECE0
  c->r[11]=R32(c->r[1]+0x00000340u); // 800FECE4
  c->r[10]=R32(c->r[1]+0x00000344u); // 800FECE8
  c->r[9]=R32(c->r[1]+0x00000348u); // 800FECEC
  c->r[8]=R32(c->r[1]+0x0000034Cu); // 800FECF0
  c->r[7]=R32(c->r[1]+0x00000350u); // 800FECF4
  c->r[6]=R32(c->r[1]+0x00000354u); // 800FECF8
  c->r[5]=R32(c->r[1]+0x00000358u); // 800FECFC
  c->r[4]=R32(c->r[1]+0x00000360u); // 800FED00
  c->r[3]=R32(c->r[1]+0x00000368u); // 800FED04
  c->r[0]=R32(c->r[1]+0x0000036Cu); // 800FED08
  W32(c->r[1]+0x0000035Cu,c->r[31]); // 800FED0C
  W32(c->r[1]+0x00000364u,c->r[12]); // 800FED10
  W32(c->r[1]+0x00000370u,c->r[11]); // 800FED14
  W32(c->r[1]+0x00000374u,c->r[10]); // 800FED18
  W32(c->r[1]+0x00000378u,c->r[9]); // 800FED1C
  W32(c->r[1]+0x0000037Cu,c->r[8]); // 800FED20
  W32(c->r[1]+0x00000380u,c->r[7]); // 800FED24
  W32(c->r[1]+0x00000384u,c->r[6]); // 800FED28
  W32(c->r[1]+0x00000388u,c->r[5]); // 800FED2C
  W32(c->r[1]+0x0000038Cu,c->r[31]); // 800FED30
  W32(c->r[1]+0x00000390u,c->r[4]); // 800FED34
  W32(c->r[1]+0x00000394u,c->r[12]); // 800FED38
  W32(c->r[1]+0x00000398u,c->r[3]); // 800FED3C
  W32(c->r[1]+0x0000039Cu,c->r[0]); // 800FED40
  c->lr=0x800FED48u; f_800B087C(c); // 800FED44
  c->r[31]=c->r[3]|c->r[3]; // 800FED48
  c->lr=0x800FED50u; f_800B087C(c); // 800FED4C
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FED50
  c->r[5]=R8(c->r[30]+0x00000161u); // 800FED54
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FED58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FED5C
  c->r[0]=c->r[0]-c->r[4]; // 800FED60
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[28]); // 800FED64
  if (!crb(c,0)) { goto L_800FED78; } // 800FED68
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FED6C
  c->r[0]=c->r[28]+c->r[0]; // 800FED70
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FED74
L_800FED78:;
  c->lr=0x800FED7Cu; f_800B08A4(c); // 800FED78
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FED7C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FED80
  cmpu(c,0,c->r[0],c->r[28]); // 800FED84
  if (!crb(c,2)) { goto L_800FED9C; } // 800FED88
  c->r[3]=c->r[31]|c->r[31]; // 800FED8C
  c->lr=0x800FED94u; f_800B08A4(c); // 800FED90
  c->r[0]=0u+0x00000000u; // 800FED94
  goto L_800FEE14; // 800FED98
L_800FED9C:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FED9C
  c->r[4]=0u+0x00000000u; // 800FEDA0
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FEDA4
  c->r[5]=0u+0x00000030u; // 800FEDA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FEDAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FEDB0
  c->r[3]=c->r[3]+c->r[0]; // 800FEDB4
  c->lr=0x800FEDBCu; f_80004688(c); // 800FEDB8
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FEDBC
  c->r[4]=c->r[1]+0x00000370u; // 800FEDC0
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FEDC4
  c->r[5]=0u+0x00000030u; // 800FEDC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FEDCC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FEDD0
  c->r[3]=c->r[3]+c->r[0]; // 800FEDD4
  c->lr=0x800FEDDCu; f_80004338(c); // 800FEDD8
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FEDDC
  c->r[3]=c->r[31]|c->r[31]; // 800FEDE0
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FEDE4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FEDE8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FEDEC
  c->r[5]=c->r[6]-c->r[4]; // 800FEDF0
  c->r[0]=c->r[6]+0x00000001u; // 800FEDF4
  c->r[4]=c->r[4]-c->r[6]; // 800FEDF8
  c->r[4]=~(c->r[5]|c->r[4]); // 800FEDFC
  c->r[4]=sraw(c,c->r[4],31); // 800FEE00
  c->r[0]=c->r[0]&~c->r[4]; // 800FEE04
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FEE08
  c->lr=0x800FEE10u; f_800B08A4(c); // 800FEE0C
  c->r[0]=0u+0x00000001u; // 800FEE10
L_800FEE14:;
  c->r[3]=cntlz(c->r[0]); // 800FEE14
  c->r[0]=0u+0xFFFFFFFEu; // 800FEE18
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 800FEE1C
  c->r[3]=0u-c->r[3]; // 800FEE20
  c->r[4]=c->r[0]&c->r[3]; // 800FEE24
  goto L_800FFCDC; // 800FEE28
L_800FEE2C:;
  c->r[0]=R32(c->r[30]+0x00000BA8u); // 800FEE2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF00u; // 800FEE30
  c->r[9]=c->r[0]|0x000000F0u; // 800FEE34
  c->r[0]=c->r[9]+0xFB5A0000u; // 800FEE38
  cmpu(c,0,c->r[0],0x000000F0u); // 800FEE3C
  if (!crb(c,2)) { goto L_800FEFF4; } // 800FEE40
  c->r[0]=0u+0x00000003u; // 800FEE44
  W8(c->r[30]+0x00000B9Eu,c->r[0]); // 800FEE48
  c->r[6]=0u+0x80100000u; // 800FEE4C
  c->r[3]=0u+0x00000055u; // 800FEE50
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FEE54
  c->r[8]=0u+0x00000001u; // 800FEE58
  c->r[7]=0u+0x00000016u; // 800FEE5C
  c->r[0]=0u+0x00000015u; // 800FEE60
  W8(c->r[1]+0x00000011u,c->r[3]); // 800FEE64
  c->r[3]=c->r[1]+0x00000314u; // 800FEE68
  c->r[4]=c->r[1]+0x00000038u; // 800FEE6C
  c->r[5]=0u+0x00000004u; // 800FEE70
  W32(c->r[1]+0x00000038u,c->r[9]); // 800FEE74
  W8(c->r[1]+0x00000010u,c->r[8]); // 800FEE78
  W32(c->r[1]+0x00000310u,c->r[7]); // 800FEE7C
  W16(c->r[1]+0x0000032Au,c->r[0]); // 800FEE80
  W32(c->r[1]+0x0000033Cu,c->r[6]); // 800FEE84
  c->lr=0x800FEE8Cu; f_80004338(c); // 800FEE88
  c->r[3]=c->r[1]+0x00000318u; // 800FEE8C
  c->r[4]=c->r[1]+0x00000010u; // 800FEE90
  c->r[5]=0u+0x00000001u; // 800FEE94
  c->lr=0x800FEE9Cu; f_80004338(c); // 800FEE98
  c->r[3]=c->r[1]+0x00000319u; // 800FEE9C
  c->r[4]=c->r[1]+0x00000011u; // 800FEEA0
  c->r[5]=0u+0x00000001u; // 800FEEA4
  c->lr=0x800FEEACu; f_80004338(c); // 800FEEA8
  c->r[31]=R32(c->r[1]+0x00000310u); // 800FEEAC
  c->r[12]=R32(c->r[1]+0x00000314u); // 800FEEB0
  c->r[11]=R32(c->r[1]+0x00000318u); // 800FEEB4
  c->r[10]=R32(c->r[1]+0x0000031Cu); // 800FEEB8
  c->r[9]=R32(c->r[1]+0x00000320u); // 800FEEBC
  c->r[8]=R32(c->r[1]+0x00000324u); // 800FEEC0
  c->r[7]=R32(c->r[1]+0x00000328u); // 800FEEC4
  c->r[6]=R32(c->r[1]+0x0000032Cu); // 800FEEC8
  c->r[5]=R32(c->r[1]+0x00000330u); // 800FEECC
  c->r[4]=R32(c->r[1]+0x00000334u); // 800FEED0
  c->r[3]=R32(c->r[1]+0x00000338u); // 800FEED4
  c->r[0]=R32(c->r[1]+0x0000033Cu); // 800FEED8
  W32(c->r[1]+0x000002E0u,c->r[31]); // 800FEEDC
  W32(c->r[1]+0x000002E4u,c->r[12]); // 800FEEE0
  W32(c->r[1]+0x000002E8u,c->r[11]); // 800FEEE4
  W32(c->r[1]+0x000002ECu,c->r[10]); // 800FEEE8
  W32(c->r[1]+0x000002F0u,c->r[9]); // 800FEEEC
  W32(c->r[1]+0x000002F4u,c->r[8]); // 800FEEF0
  W32(c->r[1]+0x000002F8u,c->r[7]); // 800FEEF4
  W32(c->r[1]+0x000002FCu,c->r[6]); // 800FEEF8
  W32(c->r[1]+0x00000300u,c->r[5]); // 800FEEFC
  W32(c->r[1]+0x00000304u,c->r[4]); // 800FEF00
  W32(c->r[1]+0x00000308u,c->r[3]); // 800FEF04
  W32(c->r[1]+0x0000030Cu,c->r[0]); // 800FEF08
  c->lr=0x800FEF10u; f_800B087C(c); // 800FEF0C
  c->r[31]=c->r[3]|c->r[3]; // 800FEF10
  c->lr=0x800FEF18u; f_800B087C(c); // 800FEF14
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FEF18
  c->r[5]=R8(c->r[30]+0x00000161u); // 800FEF1C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FEF20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FEF24
  c->r[0]=c->r[0]-c->r[4]; // 800FEF28
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[28]); // 800FEF2C
  if (!crb(c,0)) { goto L_800FEF40; } // 800FEF30
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FEF34
  c->r[0]=c->r[28]+c->r[0]; // 800FEF38
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FEF3C
L_800FEF40:;
  c->lr=0x800FEF44u; f_800B08A4(c); // 800FEF40
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FEF44
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FEF48
  cmpu(c,0,c->r[0],c->r[28]); // 800FEF4C
  if (!crb(c,2)) { goto L_800FEF64; } // 800FEF50
  c->r[3]=c->r[31]|c->r[31]; // 800FEF54
  c->lr=0x800FEF5Cu; f_800B08A4(c); // 800FEF58
  c->r[0]=0u+0x00000000u; // 800FEF5C
  goto L_800FEFDC; // 800FEF60
L_800FEF64:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FEF64
  c->r[4]=0u+0x00000000u; // 800FEF68
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FEF6C
  c->r[5]=0u+0x00000030u; // 800FEF70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FEF74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FEF78
  c->r[3]=c->r[3]+c->r[0]; // 800FEF7C
  c->lr=0x800FEF84u; f_80004688(c); // 800FEF80
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FEF84
  c->r[4]=c->r[1]+0x000002E0u; // 800FEF88
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FEF8C
  c->r[5]=0u+0x00000030u; // 800FEF90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FEF94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FEF98
  c->r[3]=c->r[3]+c->r[0]; // 800FEF9C
  c->lr=0x800FEFA4u; f_80004338(c); // 800FEFA0
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FEFA4
  c->r[3]=c->r[31]|c->r[31]; // 800FEFA8
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FEFAC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FEFB0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FEFB4
  c->r[5]=c->r[6]-c->r[4]; // 800FEFB8
  c->r[0]=c->r[6]+0x00000001u; // 800FEFBC
  c->r[4]=c->r[4]-c->r[6]; // 800FEFC0
  c->r[4]=~(c->r[5]|c->r[4]); // 800FEFC4
  c->r[4]=sraw(c,c->r[4],31); // 800FEFC8
  c->r[0]=c->r[0]&~c->r[4]; // 800FEFCC
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FEFD0
  c->lr=0x800FEFD8u; f_800B08A4(c); // 800FEFD4
  c->r[0]=0u+0x00000001u; // 800FEFD8
L_800FEFDC:;
  c->r[3]=cntlz(c->r[0]); // 800FEFDC
  c->r[0]=0u+0xFFFFFFFEu; // 800FEFE0
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 800FEFE4
  c->r[3]=0u-c->r[3]; // 800FEFE8
  c->r[4]=c->r[0]&c->r[3]; // 800FEFEC
  goto L_800FFCDC; // 800FEFF0
L_800FEFF4:;
  c->r[3]=R8(c->r[30]+0x00000931u); // 800FEFF4
  c->r[0]=R8(c->r[30]+0x00000934u); // 800FEFF8
  cmpu(c,0,c->r[3],c->r[0]); // 800FEFFC
  if (!crb(c,2)) { goto L_800FF010; } // 800FF000
  c->r[0]=0u+0x00000000u; // 800FF004
  W8(c->r[30]+0x00000B9Eu,c->r[0]); // 800FF008
  goto L_800FFCDC; // 800FF00C
L_800FF010:;
  c->r[3]=R8(c->r[30]+0x00000933u); // 800FF010
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FF014
  W8(c->r[30]+0x00000933u,c->r[0]); // 800FF018
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 800FF01C
  if (crb(c,2)) { goto L_800FF1D0; } // 800FF020
  c->r[3]=0u+0x04A40000u; // 800FF024
  c->r[6]=0u+0x80100000u; // 800FF028
  c->r[3]=c->r[3]+0x000000FEu; // 800FF02C
  W32(c->r[30]+0x00000BA8u,c->r[3]); // 800FF030
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FF034
  c->r[8]=0u+0x00000002u; // 800FF038
  c->r[7]=0u+0x00000017u; // 800FF03C
  c->r[0]=0u+0x00000006u; // 800FF040
  W32(c->r[1]+0x00000034u,c->r[3]); // 800FF044
  c->r[3]=c->r[1]+0x00000284u; // 800FF048
  c->r[4]=c->r[1]+0x00000034u; // 800FF04C
  c->r[5]=0u+0x00000004u; // 800FF050
  W16(c->r[1]+0x00000016u,c->r[8]); // 800FF054
  W32(c->r[1]+0x00000280u,c->r[7]); // 800FF058
  W16(c->r[1]+0x0000029Au,c->r[0]); // 800FF05C
  W32(c->r[1]+0x000002ACu,c->r[6]); // 800FF060
  c->lr=0x800FF068u; f_80004338(c); // 800FF064
  c->r[3]=c->r[1]+0x00000288u; // 800FF068
  c->r[4]=c->r[1]+0x00000016u; // 800FF06C
  c->r[5]=0u+0x00000002u; // 800FF070
  c->lr=0x800FF078u; f_80004338(c); // 800FF074
  c->r[0]=R16(c->r[1]+0x00000016u); // 800FF078
  c->r[31]=c->r[30]+0x00000931u; // 800FF07C
  W16(c->r[1]+0x000002A0u,c->r[0]); // 800FF080
  c->r[12]=R32(c->r[1]+0x00000034u); // 800FF084
  c->r[11]=R32(c->r[1]+0x00000280u); // 800FF088
  c->r[10]=R32(c->r[1]+0x00000284u); // 800FF08C
  c->r[9]=R32(c->r[1]+0x00000288u); // 800FF090
  c->r[8]=R32(c->r[1]+0x0000028Cu); // 800FF094
  c->r[7]=R32(c->r[1]+0x00000290u); // 800FF098
  c->r[6]=R32(c->r[1]+0x00000294u); // 800FF09C
  c->r[5]=R32(c->r[1]+0x00000298u); // 800FF0A0
  c->r[4]=R32(c->r[1]+0x000002A0u); // 800FF0A4
  c->r[3]=R32(c->r[1]+0x000002A8u); // 800FF0A8
  c->r[0]=R32(c->r[1]+0x000002ACu); // 800FF0AC
  W32(c->r[1]+0x0000029Cu,c->r[31]); // 800FF0B0
  W32(c->r[1]+0x000002A4u,c->r[12]); // 800FF0B4
  W32(c->r[1]+0x000002B0u,c->r[11]); // 800FF0B8
  W32(c->r[1]+0x000002B4u,c->r[10]); // 800FF0BC
  W32(c->r[1]+0x000002B8u,c->r[9]); // 800FF0C0
  W32(c->r[1]+0x000002BCu,c->r[8]); // 800FF0C4
  W32(c->r[1]+0x000002C0u,c->r[7]); // 800FF0C8
  W32(c->r[1]+0x000002C4u,c->r[6]); // 800FF0CC
  W32(c->r[1]+0x000002C8u,c->r[5]); // 800FF0D0
  W32(c->r[1]+0x000002CCu,c->r[31]); // 800FF0D4
  W32(c->r[1]+0x000002D0u,c->r[4]); // 800FF0D8
  W32(c->r[1]+0x000002D4u,c->r[12]); // 800FF0DC
  W32(c->r[1]+0x000002D8u,c->r[3]); // 800FF0E0
  W32(c->r[1]+0x000002DCu,c->r[0]); // 800FF0E4
  c->lr=0x800FF0ECu; f_800B087C(c); // 800FF0E8
  c->r[28]=c->r[3]|c->r[3]; // 800FF0EC
  c->lr=0x800FF0F4u; f_800B087C(c); // 800FF0F0
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FF0F4
  c->r[5]=R8(c->r[30]+0x00000161u); // 800FF0F8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF0FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FF100
  c->r[0]=c->r[0]-c->r[4]; // 800FF104
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 800FF108
  if (!crb(c,0)) { goto L_800FF11C; } // 800FF10C
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FF110
  c->r[0]=c->r[31]+c->r[0]; // 800FF114
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF118
L_800FF11C:;
  c->lr=0x800FF120u; f_800B08A4(c); // 800FF11C
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FF120
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FF124
  cmpu(c,0,c->r[0],c->r[31]); // 800FF128
  if (!crb(c,2)) { goto L_800FF140; } // 800FF12C
  c->r[3]=c->r[28]|c->r[28]; // 800FF130
  c->lr=0x800FF138u; f_800B08A4(c); // 800FF134
  c->r[0]=0u+0x00000000u; // 800FF138
  goto L_800FF1B8; // 800FF13C
L_800FF140:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF140
  c->r[4]=0u+0x00000000u; // 800FF144
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF148
  c->r[5]=0u+0x00000030u; // 800FF14C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF150
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF154
  c->r[3]=c->r[3]+c->r[0]; // 800FF158
  c->lr=0x800FF160u; f_80004688(c); // 800FF15C
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF160
  c->r[4]=c->r[1]+0x000002B0u; // 800FF164
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF168
  c->r[5]=0u+0x00000030u; // 800FF16C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF170
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF174
  c->r[3]=c->r[3]+c->r[0]; // 800FF178
  c->lr=0x800FF180u; f_80004338(c); // 800FF17C
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF180
  c->r[3]=c->r[28]|c->r[28]; // 800FF184
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FF188
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF18C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FF190
  c->r[5]=c->r[6]-c->r[4]; // 800FF194
  c->r[0]=c->r[6]+0x00000001u; // 800FF198
  c->r[4]=c->r[4]-c->r[6]; // 800FF19C
  c->r[4]=~(c->r[5]|c->r[4]); // 800FF1A0
  c->r[4]=sraw(c,c->r[4],31); // 800FF1A4
  c->r[0]=c->r[0]&~c->r[4]; // 800FF1A8
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FF1AC
  c->lr=0x800FF1B4u; f_800B08A4(c); // 800FF1B0
  c->r[0]=0u+0x00000001u; // 800FF1B4
L_800FF1B8:;
  c->r[3]=cntlz(c->r[0]); // 800FF1B8
  c->r[0]=0u+0xFFFFFFFEu; // 800FF1BC
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 800FF1C0
  c->r[3]=0u-c->r[3]; // 800FF1C4
  c->r[4]=c->r[0]&c->r[3]; // 800FF1C8
  goto L_800FFCDC; // 800FF1CC
L_800FF1D0:;
  c->r[0]=0u+0x00000006u; // 800FF1D0
  W8(c->r[30]+0x00000B9Eu,c->r[0]); // 800FF1D4
  c->r[3]=0u+0x04A40000u; // 800FF1D8
  c->r[6]=0u+0x80100000u; // 800FF1DC
  c->r[9]=c->r[3]+0x000000FEu; // 800FF1E0
  c->r[8]=0u+0x00000001u; // 800FF1E4
  c->r[3]=0u+0x00000000u; // 800FF1E8
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FF1EC
  c->r[7]=0u+0x00000016u; // 800FF1F0
  c->r[0]=0u+0x00000015u; // 800FF1F4
  W8(c->r[1]+0x0000000Fu,c->r[3]); // 800FF1F8
  c->r[3]=c->r[1]+0x00000254u; // 800FF1FC
  c->r[4]=c->r[1]+0x00000030u; // 800FF200
  c->r[5]=0u+0x00000004u; // 800FF204
  W32(c->r[1]+0x00000030u,c->r[9]); // 800FF208
  W8(c->r[1]+0x0000000Eu,c->r[8]); // 800FF20C
  W32(c->r[1]+0x00000250u,c->r[7]); // 800FF210
  W16(c->r[1]+0x0000026Au,c->r[0]); // 800FF214
  W32(c->r[1]+0x0000027Cu,c->r[6]); // 800FF218
  c->lr=0x800FF220u; f_80004338(c); // 800FF21C
  c->r[3]=c->r[1]+0x00000258u; // 800FF220
  c->r[4]=c->r[1]+0x0000000Eu; // 800FF224
  c->r[5]=0u+0x00000001u; // 800FF228
  c->lr=0x800FF230u; f_80004338(c); // 800FF22C
  c->r[3]=c->r[1]+0x00000259u; // 800FF230
  c->r[4]=c->r[1]+0x0000000Fu; // 800FF234
  c->r[5]=0u+0x00000001u; // 800FF238
  c->lr=0x800FF240u; f_80004338(c); // 800FF23C
  c->r[31]=R32(c->r[1]+0x00000250u); // 800FF240
  c->r[12]=R32(c->r[1]+0x00000254u); // 800FF244
  c->r[11]=R32(c->r[1]+0x00000258u); // 800FF248
  c->r[10]=R32(c->r[1]+0x0000025Cu); // 800FF24C
  c->r[9]=R32(c->r[1]+0x00000260u); // 800FF250
  c->r[8]=R32(c->r[1]+0x00000264u); // 800FF254
  c->r[7]=R32(c->r[1]+0x00000268u); // 800FF258
  c->r[6]=R32(c->r[1]+0x0000026Cu); // 800FF25C
  c->r[5]=R32(c->r[1]+0x00000270u); // 800FF260
  c->r[4]=R32(c->r[1]+0x00000274u); // 800FF264
  c->r[3]=R32(c->r[1]+0x00000278u); // 800FF268
  c->r[0]=R32(c->r[1]+0x0000027Cu); // 800FF26C
  W32(c->r[1]+0x00000220u,c->r[31]); // 800FF270
  W32(c->r[1]+0x00000224u,c->r[12]); // 800FF274
  W32(c->r[1]+0x00000228u,c->r[11]); // 800FF278
  W32(c->r[1]+0x0000022Cu,c->r[10]); // 800FF27C
  W32(c->r[1]+0x00000230u,c->r[9]); // 800FF280
  W32(c->r[1]+0x00000234u,c->r[8]); // 800FF284
  W32(c->r[1]+0x00000238u,c->r[7]); // 800FF288
  W32(c->r[1]+0x0000023Cu,c->r[6]); // 800FF28C
  W32(c->r[1]+0x00000240u,c->r[5]); // 800FF290
  W32(c->r[1]+0x00000244u,c->r[4]); // 800FF294
  W32(c->r[1]+0x00000248u,c->r[3]); // 800FF298
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800FF29C
  c->lr=0x800FF2A4u; f_800B087C(c); // 800FF2A0
  c->r[31]=c->r[3]|c->r[3]; // 800FF2A4
  c->lr=0x800FF2ACu; f_800B087C(c); // 800FF2A8
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FF2AC
  c->r[5]=R8(c->r[30]+0x00000161u); // 800FF2B0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF2B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FF2B8
  c->r[0]=c->r[0]-c->r[4]; // 800FF2BC
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[28]); // 800FF2C0
  if (!crb(c,0)) { goto L_800FF2D4; } // 800FF2C4
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FF2C8
  c->r[0]=c->r[28]+c->r[0]; // 800FF2CC
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF2D0
L_800FF2D4:;
  c->lr=0x800FF2D8u; f_800B08A4(c); // 800FF2D4
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FF2D8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FF2DC
  cmpu(c,0,c->r[0],c->r[28]); // 800FF2E0
  if (!crb(c,2)) { goto L_800FF2F8; } // 800FF2E4
  c->r[3]=c->r[31]|c->r[31]; // 800FF2E8
  c->lr=0x800FF2F0u; f_800B08A4(c); // 800FF2EC
  c->r[0]=0u+0x00000000u; // 800FF2F0
  goto L_800FF370; // 800FF2F4
L_800FF2F8:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF2F8
  c->r[4]=0u+0x00000000u; // 800FF2FC
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF300
  c->r[5]=0u+0x00000030u; // 800FF304
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF308
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF30C
  c->r[3]=c->r[3]+c->r[0]; // 800FF310
  c->lr=0x800FF318u; f_80004688(c); // 800FF314
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF318
  c->r[4]=c->r[1]+0x00000220u; // 800FF31C
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF320
  c->r[5]=0u+0x00000030u; // 800FF324
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF328
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF32C
  c->r[3]=c->r[3]+c->r[0]; // 800FF330
  c->lr=0x800FF338u; f_80004338(c); // 800FF334
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF338
  c->r[3]=c->r[31]|c->r[31]; // 800FF33C
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FF340
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF344
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FF348
  c->r[5]=c->r[6]-c->r[4]; // 800FF34C
  c->r[0]=c->r[6]+0x00000001u; // 800FF350
  c->r[4]=c->r[4]-c->r[6]; // 800FF354
  c->r[4]=~(c->r[5]|c->r[4]); // 800FF358
  c->r[4]=sraw(c,c->r[4],31); // 800FF35C
  c->r[0]=c->r[0]&~c->r[4]; // 800FF360
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FF364
  c->lr=0x800FF36Cu; f_800B08A4(c); // 800FF368
  c->r[0]=0u+0x00000001u; // 800FF36C
L_800FF370:;
  c->r[3]=cntlz(c->r[0]); // 800FF370
  c->r[0]=0u+0xFFFFFFFEu; // 800FF374
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 800FF378
  c->r[3]=0u-c->r[3]; // 800FF37C
  c->r[4]=c->r[0]&c->r[3]; // 800FF380
  goto L_800FFCDC; // 800FF384
L_800FF388:;
  cmps(c,0,(int32_t)c->r[4],-3); // 800FF388
  if (!crb(c,2)) { goto L_800FFCDC; } // 800FF38C
  c->r[3]=R8(c->r[30]+0x00000933u); // 800FF390
  cmps(c,0,(int32_t)c->r[3],0); // 800FF394
  if (crb(c,2)) { goto L_800FFCDC; } // 800FF398
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FF39C
  W8(c->r[30]+0x00000933u,c->r[0]); // 800FF3A0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800FF3A4
  cmpu(c,0,c->r[0],0x00000001u); // 800FF3A8
  if (!crb(c,1)) { goto L_800FF3C0; } // 800FF3AC
  c->r[3]=0u+0x04A60000u; // 800FF3B0
  c->r[0]=c->r[3]+0x000000FEu; // 800FF3B4
  W32(c->r[30]+0x00000BA8u,c->r[0]); // 800FF3B8
  goto L_800FF3CC; // 800FF3BC
L_800FF3C0:;
  c->r[3]=0u+0x04A40000u; // 800FF3C0
  c->r[0]=c->r[3]+0x000000FEu; // 800FF3C4
  W32(c->r[30]+0x00000BA8u,c->r[0]); // 800FF3C8
L_800FF3CC:;
  c->r[3]=R32(c->r[30]+0x00000BA8u); // 800FF3CC
  c->r[6]=0u+0x80100000u; // 800FF3D0
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FF3D4
  c->r[8]=0u+0x00000002u; // 800FF3D8
  c->r[7]=0u+0x00000017u; // 800FF3DC
  c->r[0]=0u+0x00000006u; // 800FF3E0
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800FF3E4
  c->r[3]=c->r[1]+0x000001C4u; // 800FF3E8
  c->r[4]=c->r[1]+0x0000002Cu; // 800FF3EC
  c->r[5]=0u+0x00000004u; // 800FF3F0
  W16(c->r[1]+0x00000014u,c->r[8]); // 800FF3F4
  W32(c->r[1]+0x000001C0u,c->r[7]); // 800FF3F8
  W16(c->r[1]+0x000001DAu,c->r[0]); // 800FF3FC
  W32(c->r[1]+0x000001ECu,c->r[6]); // 800FF400
  c->lr=0x800FF408u; f_80004338(c); // 800FF404
  c->r[3]=c->r[1]+0x000001C8u; // 800FF408
  c->r[4]=c->r[1]+0x00000014u; // 800FF40C
  c->r[5]=0u+0x00000002u; // 800FF410
  c->lr=0x800FF418u; f_80004338(c); // 800FF414
  c->r[0]=R16(c->r[1]+0x00000014u); // 800FF418
  c->r[31]=c->r[30]+0x00000931u; // 800FF41C
  W16(c->r[1]+0x000001E0u,c->r[0]); // 800FF420
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 800FF424
  c->r[11]=R32(c->r[1]+0x000001C0u); // 800FF428
  c->r[10]=R32(c->r[1]+0x000001C4u); // 800FF42C
  c->r[9]=R32(c->r[1]+0x000001C8u); // 800FF430
  c->r[8]=R32(c->r[1]+0x000001CCu); // 800FF434
  c->r[7]=R32(c->r[1]+0x000001D0u); // 800FF438
  c->r[6]=R32(c->r[1]+0x000001D4u); // 800FF43C
  c->r[5]=R32(c->r[1]+0x000001D8u); // 800FF440
  c->r[4]=R32(c->r[1]+0x000001E0u); // 800FF444
  c->r[3]=R32(c->r[1]+0x000001E8u); // 800FF448
  c->r[0]=R32(c->r[1]+0x000001ECu); // 800FF44C
  W32(c->r[1]+0x000001DCu,c->r[31]); // 800FF450
  W32(c->r[1]+0x000001E4u,c->r[12]); // 800FF454
  W32(c->r[1]+0x000001F0u,c->r[11]); // 800FF458
  W32(c->r[1]+0x000001F4u,c->r[10]); // 800FF45C
  W32(c->r[1]+0x000001F8u,c->r[9]); // 800FF460
  W32(c->r[1]+0x000001FCu,c->r[8]); // 800FF464
  W32(c->r[1]+0x00000200u,c->r[7]); // 800FF468
  W32(c->r[1]+0x00000204u,c->r[6]); // 800FF46C
  W32(c->r[1]+0x00000208u,c->r[5]); // 800FF470
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 800FF474
  W32(c->r[1]+0x00000210u,c->r[4]); // 800FF478
  W32(c->r[1]+0x00000214u,c->r[12]); // 800FF47C
  W32(c->r[1]+0x00000218u,c->r[3]); // 800FF480
  W32(c->r[1]+0x0000021Cu,c->r[0]); // 800FF484
  c->lr=0x800FF48Cu; f_800B087C(c); // 800FF488
  c->r[28]=c->r[3]|c->r[3]; // 800FF48C
  c->lr=0x800FF494u; f_800B087C(c); // 800FF490
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FF494
  c->r[5]=R8(c->r[30]+0x00000161u); // 800FF498
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF49C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FF4A0
  c->r[0]=c->r[0]-c->r[4]; // 800FF4A4
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 800FF4A8
  if (!crb(c,0)) { goto L_800FF4BC; } // 800FF4AC
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FF4B0
  c->r[0]=c->r[31]+c->r[0]; // 800FF4B4
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF4B8
L_800FF4BC:;
  c->lr=0x800FF4C0u; f_800B08A4(c); // 800FF4BC
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FF4C0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FF4C4
  cmpu(c,0,c->r[0],c->r[31]); // 800FF4C8
  if (!crb(c,2)) { goto L_800FF4E0; } // 800FF4CC
  c->r[3]=c->r[28]|c->r[28]; // 800FF4D0
  c->lr=0x800FF4D8u; f_800B08A4(c); // 800FF4D4
  c->r[0]=0u+0x00000000u; // 800FF4D8
  goto L_800FF558; // 800FF4DC
L_800FF4E0:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF4E0
  c->r[4]=0u+0x00000000u; // 800FF4E4
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF4E8
  c->r[5]=0u+0x00000030u; // 800FF4EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF4F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF4F4
  c->r[3]=c->r[3]+c->r[0]; // 800FF4F8
  c->lr=0x800FF500u; f_80004688(c); // 800FF4FC
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF500
  c->r[4]=c->r[1]+0x000001F0u; // 800FF504
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF508
  c->r[5]=0u+0x00000030u; // 800FF50C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF510
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF514
  c->r[3]=c->r[3]+c->r[0]; // 800FF518
  c->lr=0x800FF520u; f_80004338(c); // 800FF51C
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF520
  c->r[3]=c->r[28]|c->r[28]; // 800FF524
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FF528
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF52C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FF530
  c->r[5]=c->r[6]-c->r[4]; // 800FF534
  c->r[0]=c->r[6]+0x00000001u; // 800FF538
  c->r[4]=c->r[4]-c->r[6]; // 800FF53C
  c->r[4]=~(c->r[5]|c->r[4]); // 800FF540
  c->r[4]=sraw(c,c->r[4],31); // 800FF544
  c->r[0]=c->r[0]&~c->r[4]; // 800FF548
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FF54C
  c->lr=0x800FF554u; f_800B08A4(c); // 800FF550
  c->r[0]=0u+0x00000001u; // 800FF554
L_800FF558:;
  c->r[3]=cntlz(c->r[0]); // 800FF558
  c->r[0]=0u+0xFFFFFFFEu; // 800FF55C
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 800FF560
  c->r[3]=0u-c->r[3]; // 800FF564
  c->r[4]=c->r[0]&c->r[3]; // 800FF568
  goto L_800FFCDC; // 800FF56C
L_800FF570:;
  cmps(c,0,(int32_t)c->r[4],0); // 800FF570
  if (!crb(c,2)) { goto L_800FFCDC; } // 800FF574
  c->r[3]=R8(c->r[30]+0x00000932u); // 800FF578
  c->r[0]=c->r[3]+0x000000FBu; // 800FF57C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800FF580
  cmpu(c,0,c->r[0],0x00000002u); // 800FF584
  if (!crb(c,1)) { goto L_800FF594; } // 800FF588
  cmpu(c,0,c->r[3],0x000000FAu); // 800FF58C
  if (!crb(c,2)) { goto L_800FF74C; } // 800FF590
L_800FF594:;
  c->r[0]=0u+0x00000007u; // 800FF594
  W8(c->r[30]+0x00000B9Eu,c->r[0]); // 800FF598
  c->r[3]=0u+0x04A40000u; // 800FF59C
  c->r[6]=0u+0x80100000u; // 800FF5A0
  c->r[9]=c->r[3]+0x000000FEu; // 800FF5A4
  c->r[8]=0u+0x00000001u; // 800FF5A8
  c->r[3]=0u+0x00000000u; // 800FF5AC
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FF5B0
  c->r[7]=0u+0x00000016u; // 800FF5B4
  c->r[0]=0u+0x00000015u; // 800FF5B8
  W8(c->r[1]+0x0000000Du,c->r[3]); // 800FF5BC
  c->r[3]=c->r[1]+0x00000194u; // 800FF5C0
  c->r[4]=c->r[1]+0x00000028u; // 800FF5C4
  c->r[5]=0u+0x00000004u; // 800FF5C8
  W32(c->r[1]+0x00000028u,c->r[9]); // 800FF5CC
  W8(c->r[1]+0x0000000Cu,c->r[8]); // 800FF5D0
  W32(c->r[1]+0x00000190u,c->r[7]); // 800FF5D4
  W16(c->r[1]+0x000001AAu,c->r[0]); // 800FF5D8
  W32(c->r[1]+0x000001BCu,c->r[6]); // 800FF5DC
  c->lr=0x800FF5E4u; f_80004338(c); // 800FF5E0
  c->r[3]=c->r[1]+0x00000198u; // 800FF5E4
  c->r[4]=c->r[1]+0x0000000Cu; // 800FF5E8
  c->r[5]=0u+0x00000001u; // 800FF5EC
  c->lr=0x800FF5F4u; f_80004338(c); // 800FF5F0
  c->r[3]=c->r[1]+0x00000199u; // 800FF5F4
  c->r[4]=c->r[1]+0x0000000Du; // 800FF5F8
  c->r[5]=0u+0x00000001u; // 800FF5FC
  c->lr=0x800FF604u; f_80004338(c); // 800FF600
  c->r[31]=R32(c->r[1]+0x00000190u); // 800FF604
  c->r[12]=R32(c->r[1]+0x00000194u); // 800FF608
  c->r[11]=R32(c->r[1]+0x00000198u); // 800FF60C
  c->r[10]=R32(c->r[1]+0x0000019Cu); // 800FF610
  c->r[9]=R32(c->r[1]+0x000001A0u); // 800FF614
  c->r[8]=R32(c->r[1]+0x000001A4u); // 800FF618
  c->r[7]=R32(c->r[1]+0x000001A8u); // 800FF61C
  c->r[6]=R32(c->r[1]+0x000001ACu); // 800FF620
  c->r[5]=R32(c->r[1]+0x000001B0u); // 800FF624
  c->r[4]=R32(c->r[1]+0x000001B4u); // 800FF628
  c->r[3]=R32(c->r[1]+0x000001B8u); // 800FF62C
  c->r[0]=R32(c->r[1]+0x000001BCu); // 800FF630
  W32(c->r[1]+0x00000160u,c->r[31]); // 800FF634
  W32(c->r[1]+0x00000164u,c->r[12]); // 800FF638
  W32(c->r[1]+0x00000168u,c->r[11]); // 800FF63C
  W32(c->r[1]+0x0000016Cu,c->r[10]); // 800FF640
  W32(c->r[1]+0x00000170u,c->r[9]); // 800FF644
  W32(c->r[1]+0x00000174u,c->r[8]); // 800FF648
  W32(c->r[1]+0x00000178u,c->r[7]); // 800FF64C
  W32(c->r[1]+0x0000017Cu,c->r[6]); // 800FF650
  W32(c->r[1]+0x00000180u,c->r[5]); // 800FF654
  W32(c->r[1]+0x00000184u,c->r[4]); // 800FF658
  W32(c->r[1]+0x00000188u,c->r[3]); // 800FF65C
  W32(c->r[1]+0x0000018Cu,c->r[0]); // 800FF660
  c->lr=0x800FF668u; f_800B087C(c); // 800FF664
  c->r[31]=c->r[3]|c->r[3]; // 800FF668
  c->lr=0x800FF670u; f_800B087C(c); // 800FF66C
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FF670
  c->r[5]=R8(c->r[30]+0x00000161u); // 800FF674
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF678
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FF67C
  c->r[0]=c->r[0]-c->r[4]; // 800FF680
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[28]); // 800FF684
  if (!crb(c,0)) { goto L_800FF698; } // 800FF688
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FF68C
  c->r[0]=c->r[28]+c->r[0]; // 800FF690
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF694
L_800FF698:;
  c->lr=0x800FF69Cu; f_800B08A4(c); // 800FF698
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FF69C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FF6A0
  cmpu(c,0,c->r[0],c->r[28]); // 800FF6A4
  if (!crb(c,2)) { goto L_800FF6BC; } // 800FF6A8
  c->r[3]=c->r[31]|c->r[31]; // 800FF6AC
  c->lr=0x800FF6B4u; f_800B08A4(c); // 800FF6B0
  c->r[0]=0u+0x00000000u; // 800FF6B4
  goto L_800FF734; // 800FF6B8
L_800FF6BC:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF6BC
  c->r[4]=0u+0x00000000u; // 800FF6C0
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF6C4
  c->r[5]=0u+0x00000030u; // 800FF6C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF6CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF6D0
  c->r[3]=c->r[3]+c->r[0]; // 800FF6D4
  c->lr=0x800FF6DCu; f_80004688(c); // 800FF6D8
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF6DC
  c->r[4]=c->r[1]+0x00000160u; // 800FF6E0
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF6E4
  c->r[5]=0u+0x00000030u; // 800FF6E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF6EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF6F0
  c->r[3]=c->r[3]+c->r[0]; // 800FF6F4
  c->lr=0x800FF6FCu; f_80004338(c); // 800FF6F8
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF6FC
  c->r[3]=c->r[31]|c->r[31]; // 800FF700
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FF704
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF708
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FF70C
  c->r[5]=c->r[6]-c->r[4]; // 800FF710
  c->r[0]=c->r[6]+0x00000001u; // 800FF714
  c->r[4]=c->r[4]-c->r[6]; // 800FF718
  c->r[4]=~(c->r[5]|c->r[4]); // 800FF71C
  c->r[4]=sraw(c,c->r[4],31); // 800FF720
  c->r[0]=c->r[0]&~c->r[4]; // 800FF724
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FF728
  c->lr=0x800FF730u; f_800B08A4(c); // 800FF72C
  c->r[0]=0u+0x00000001u; // 800FF730
L_800FF734:;
  c->r[3]=cntlz(c->r[0]); // 800FF734
  c->r[0]=0u+0xFFFFFFFEu; // 800FF738
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 800FF73C
  c->r[3]=0u-c->r[3]; // 800FF740
  c->r[4]=c->r[0]&c->r[3]; // 800FF744
  goto L_800FFCDC; // 800FF748
L_800FF74C:;
  c->r[4]=0u+0xFFFFFFFDu; // 800FF74C
  goto L_800FFCDC; // 800FF750
L_800FF754:;
  cmps(c,0,(int32_t)c->r[4],0); // 800FF754
  if (!crb(c,2)) { goto L_800FFCDC; } // 800FF758
  c->r[0]=0u+0x00000004u; // 800FF75C
  W8(c->r[30]+0x00000B9Eu,c->r[0]); // 800FF760
  c->r[3]=0u+0x04A60000u; // 800FF764
  c->r[6]=0u+0x80100000u; // 800FF768
  c->r[4]=R8(c->r[30]+0x00000934u); // 800FF76C
  c->r[9]=c->r[3]+0x000000FEu; // 800FF770
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FF774
  c->r[8]=0u+0x00000001u; // 800FF778
  c->r[7]=0u+0x00000016u; // 800FF77C
  c->r[0]=0u+0x00000015u; // 800FF780
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 800FF784
  c->r[3]=c->r[1]+0x00000134u; // 800FF788
  c->r[4]=c->r[1]+0x00000024u; // 800FF78C
  c->r[5]=0u+0x00000004u; // 800FF790
  W32(c->r[1]+0x00000024u,c->r[9]); // 800FF794
  W8(c->r[1]+0x0000000Au,c->r[8]); // 800FF798
  W32(c->r[1]+0x00000130u,c->r[7]); // 800FF79C
  W16(c->r[1]+0x0000014Au,c->r[0]); // 800FF7A0
  W32(c->r[1]+0x0000015Cu,c->r[6]); // 800FF7A4
  c->lr=0x800FF7ACu; f_80004338(c); // 800FF7A8
  c->r[3]=c->r[1]+0x00000138u; // 800FF7AC
  c->r[4]=c->r[1]+0x0000000Au; // 800FF7B0
  c->r[5]=0u+0x00000001u; // 800FF7B4
  c->lr=0x800FF7BCu; f_80004338(c); // 800FF7B8
  c->r[3]=c->r[1]+0x00000139u; // 800FF7BC
  c->r[4]=c->r[1]+0x0000000Bu; // 800FF7C0
  c->r[5]=0u+0x00000001u; // 800FF7C4
  c->lr=0x800FF7CCu; f_80004338(c); // 800FF7C8
  c->r[31]=R32(c->r[1]+0x00000130u); // 800FF7CC
  c->r[12]=R32(c->r[1]+0x00000134u); // 800FF7D0
  c->r[11]=R32(c->r[1]+0x00000138u); // 800FF7D4
  c->r[10]=R32(c->r[1]+0x0000013Cu); // 800FF7D8
  c->r[9]=R32(c->r[1]+0x00000140u); // 800FF7DC
  c->r[8]=R32(c->r[1]+0x00000144u); // 800FF7E0
  c->r[7]=R32(c->r[1]+0x00000148u); // 800FF7E4
  c->r[6]=R32(c->r[1]+0x0000014Cu); // 800FF7E8
  c->r[5]=R32(c->r[1]+0x00000150u); // 800FF7EC
  c->r[4]=R32(c->r[1]+0x00000154u); // 800FF7F0
  c->r[3]=R32(c->r[1]+0x00000158u); // 800FF7F4
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 800FF7F8
  W32(c->r[1]+0x00000100u,c->r[31]); // 800FF7FC
  W32(c->r[1]+0x00000104u,c->r[12]); // 800FF800
  W32(c->r[1]+0x00000108u,c->r[11]); // 800FF804
  W32(c->r[1]+0x0000010Cu,c->r[10]); // 800FF808
  W32(c->r[1]+0x00000110u,c->r[9]); // 800FF80C
  W32(c->r[1]+0x00000114u,c->r[8]); // 800FF810
  W32(c->r[1]+0x00000118u,c->r[7]); // 800FF814
  W32(c->r[1]+0x0000011Cu,c->r[6]); // 800FF818
  W32(c->r[1]+0x00000120u,c->r[5]); // 800FF81C
  W32(c->r[1]+0x00000124u,c->r[4]); // 800FF820
  W32(c->r[1]+0x00000128u,c->r[3]); // 800FF824
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 800FF828
  c->lr=0x800FF830u; f_800B087C(c); // 800FF82C
  c->r[31]=c->r[3]|c->r[3]; // 800FF830
  c->lr=0x800FF838u; f_800B087C(c); // 800FF834
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FF838
  c->r[5]=R8(c->r[30]+0x00000161u); // 800FF83C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF840
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FF844
  c->r[0]=c->r[0]-c->r[4]; // 800FF848
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[28]); // 800FF84C
  if (!crb(c,0)) { goto L_800FF860; } // 800FF850
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FF854
  c->r[0]=c->r[28]+c->r[0]; // 800FF858
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF85C
L_800FF860:;
  c->lr=0x800FF864u; f_800B08A4(c); // 800FF860
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FF864
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FF868
  cmpu(c,0,c->r[0],c->r[28]); // 800FF86C
  if (!crb(c,2)) { goto L_800FF884; } // 800FF870
  c->r[3]=c->r[31]|c->r[31]; // 800FF874
  c->lr=0x800FF87Cu; f_800B08A4(c); // 800FF878
  c->r[0]=0u+0x00000000u; // 800FF87C
  goto L_800FF8FC; // 800FF880
L_800FF884:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF884
  c->r[4]=0u+0x00000000u; // 800FF888
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF88C
  c->r[5]=0u+0x00000030u; // 800FF890
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF894
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF898
  c->r[3]=c->r[3]+c->r[0]; // 800FF89C
  c->lr=0x800FF8A4u; f_80004688(c); // 800FF8A0
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF8A4
  c->r[4]=c->r[1]+0x00000100u; // 800FF8A8
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FF8AC
  c->r[5]=0u+0x00000030u; // 800FF8B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF8B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FF8B8
  c->r[3]=c->r[3]+c->r[0]; // 800FF8BC
  c->lr=0x800FF8C4u; f_80004338(c); // 800FF8C0
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FF8C4
  c->r[3]=c->r[31]|c->r[31]; // 800FF8C8
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FF8CC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FF8D0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FF8D4
  c->r[5]=c->r[6]-c->r[4]; // 800FF8D8
  c->r[0]=c->r[6]+0x00000001u; // 800FF8DC
  c->r[4]=c->r[4]-c->r[6]; // 800FF8E0
  c->r[4]=~(c->r[5]|c->r[4]); // 800FF8E4
  c->r[4]=sraw(c,c->r[4],31); // 800FF8E8
  c->r[0]=c->r[0]&~c->r[4]; // 800FF8EC
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FF8F0
  c->lr=0x800FF8F8u; f_800B08A4(c); // 800FF8F4
  c->r[0]=0u+0x00000001u; // 800FF8F8
L_800FF8FC:;
  c->r[3]=cntlz(c->r[0]); // 800FF8FC
  c->r[0]=0u+0xFFFFFFFEu; // 800FF900
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 800FF904
  c->r[3]=0u-c->r[3]; // 800FF908
  c->r[4]=c->r[0]&c->r[3]; // 800FF90C
  goto L_800FFCDC; // 800FF910
L_800FF914:;
  cmps(c,0,(int32_t)c->r[4],0); // 800FF914
  if (!crb(c,2)) { goto L_800FFCDC; } // 800FF918
  c->r[0]=0u+0x00000001u; // 800FF91C
  W8(c->r[30]+0x00000936u,c->r[0]); // 800FF920
  c->r[0]=0u+0x00000000u; // 800FF924
  W8(c->r[30]+0x00000B9Eu,c->r[0]); // 800FF928
  goto L_800FFCDC; // 800FF92C
L_800FF930:;
  cmps(c,0,(int32_t)c->r[4],0); // 800FF930
  if (!crb(c,2)) { goto L_800FFCDC; } // 800FF934
  c->r[3]=R8(c->r[30]+0x00000932u); // 800FF938
  c->r[0]=c->r[3]+0x000000FBu; // 800FF93C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800FF940
  cmpu(c,0,c->r[0],0x00000002u); // 800FF944
  if (!crb(c,1)) { goto L_800FF954; } // 800FF948
  cmpu(c,0,c->r[3],0x000000FAu); // 800FF94C
  if (!crb(c,2)) { goto L_800FFB0C; } // 800FF950
L_800FF954:;
  c->r[0]=0u+0x00000008u; // 800FF954
  W8(c->r[30]+0x00000B9Eu,c->r[0]); // 800FF958
  c->r[3]=0u+0x04A40000u; // 800FF95C
  c->r[6]=0u+0x80100000u; // 800FF960
  c->r[9]=c->r[3]+0x000000F2u; // 800FF964
  c->r[8]=0u+0x00000001u; // 800FF968
  c->r[3]=0u+0x00000000u; // 800FF96C
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FF970
  c->r[7]=0u+0x00000016u; // 800FF974
  c->r[0]=0u+0x00000015u; // 800FF978
  W8(c->r[1]+0x00000009u,c->r[3]); // 800FF97C
  c->r[3]=c->r[1]+0x000000D4u; // 800FF980
  c->r[4]=c->r[1]+0x00000020u; // 800FF984
  c->r[5]=0u+0x00000004u; // 800FF988
  W32(c->r[1]+0x00000020u,c->r[9]); // 800FF98C
  W8(c->r[1]+0x00000008u,c->r[8]); // 800FF990
  W32(c->r[1]+0x000000D0u,c->r[7]); // 800FF994
  W16(c->r[1]+0x000000EAu,c->r[0]); // 800FF998
  W32(c->r[1]+0x000000FCu,c->r[6]); // 800FF99C
  c->lr=0x800FF9A4u; f_80004338(c); // 800FF9A0
  c->r[3]=c->r[1]+0x000000D8u; // 800FF9A4
  c->r[4]=c->r[1]+0x00000008u; // 800FF9A8
  c->r[5]=0u+0x00000001u; // 800FF9AC
  c->lr=0x800FF9B4u; f_80004338(c); // 800FF9B0
  c->r[3]=c->r[1]+0x000000D9u; // 800FF9B4
  c->r[4]=c->r[1]+0x00000009u; // 800FF9B8
  c->r[5]=0u+0x00000001u; // 800FF9BC
  c->lr=0x800FF9C4u; f_80004338(c); // 800FF9C0
  c->r[31]=R32(c->r[1]+0x000000D0u); // 800FF9C4
  c->r[12]=R32(c->r[1]+0x000000D4u); // 800FF9C8
  c->r[11]=R32(c->r[1]+0x000000D8u); // 800FF9CC
  c->r[10]=R32(c->r[1]+0x000000DCu); // 800FF9D0
  c->r[9]=R32(c->r[1]+0x000000E0u); // 800FF9D4
  c->r[8]=R32(c->r[1]+0x000000E4u); // 800FF9D8
  c->r[7]=R32(c->r[1]+0x000000E8u); // 800FF9DC
  c->r[6]=R32(c->r[1]+0x000000ECu); // 800FF9E0
  c->r[5]=R32(c->r[1]+0x000000F0u); // 800FF9E4
  c->r[4]=R32(c->r[1]+0x000000F4u); // 800FF9E8
  c->r[3]=R32(c->r[1]+0x000000F8u); // 800FF9EC
  c->r[0]=R32(c->r[1]+0x000000FCu); // 800FF9F0
  W32(c->r[1]+0x000000A0u,c->r[31]); // 800FF9F4
  W32(c->r[1]+0x000000A4u,c->r[12]); // 800FF9F8
  W32(c->r[1]+0x000000A8u,c->r[11]); // 800FF9FC
  W32(c->r[1]+0x000000ACu,c->r[10]); // 800FFA00
  W32(c->r[1]+0x000000B0u,c->r[9]); // 800FFA04
  W32(c->r[1]+0x000000B4u,c->r[8]); // 800FFA08
  W32(c->r[1]+0x000000B8u,c->r[7]); // 800FFA0C
  W32(c->r[1]+0x000000BCu,c->r[6]); // 800FFA10
  W32(c->r[1]+0x000000C0u,c->r[5]); // 800FFA14
  W32(c->r[1]+0x000000C4u,c->r[4]); // 800FFA18
  W32(c->r[1]+0x000000C8u,c->r[3]); // 800FFA1C
  W32(c->r[1]+0x000000CCu,c->r[0]); // 800FFA20
  c->lr=0x800FFA28u; f_800B087C(c); // 800FFA24
  c->r[31]=c->r[3]|c->r[3]; // 800FFA28
  c->lr=0x800FFA30u; f_800B087C(c); // 800FFA2C
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FFA30
  c->r[5]=R8(c->r[30]+0x00000161u); // 800FFA34
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFA38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FFA3C
  c->r[0]=c->r[0]-c->r[4]; // 800FFA40
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[28]); // 800FFA44
  if (!crb(c,0)) { goto L_800FFA58; } // 800FFA48
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FFA4C
  c->r[0]=c->r[28]+c->r[0]; // 800FFA50
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFA54
L_800FFA58:;
  c->lr=0x800FFA5Cu; f_800B08A4(c); // 800FFA58
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FFA5C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FFA60
  cmpu(c,0,c->r[0],c->r[28]); // 800FFA64
  if (!crb(c,2)) { goto L_800FFA7C; } // 800FFA68
  c->r[3]=c->r[31]|c->r[31]; // 800FFA6C
  c->lr=0x800FFA74u; f_800B08A4(c); // 800FFA70
  c->r[0]=0u+0x00000000u; // 800FFA74
  goto L_800FFAF4; // 800FFA78
L_800FFA7C:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FFA7C
  c->r[4]=0u+0x00000000u; // 800FFA80
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FFA84
  c->r[5]=0u+0x00000030u; // 800FFA88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFA8C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FFA90
  c->r[3]=c->r[3]+c->r[0]; // 800FFA94
  c->lr=0x800FFA9Cu; f_80004688(c); // 800FFA98
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FFA9C
  c->r[4]=c->r[1]+0x000000A0u; // 800FFAA0
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FFAA4
  c->r[5]=0u+0x00000030u; // 800FFAA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFAAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FFAB0
  c->r[3]=c->r[3]+c->r[0]; // 800FFAB4
  c->lr=0x800FFABCu; f_80004338(c); // 800FFAB8
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FFABC
  c->r[3]=c->r[31]|c->r[31]; // 800FFAC0
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FFAC4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFAC8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FFACC
  c->r[5]=c->r[6]-c->r[4]; // 800FFAD0
  c->r[0]=c->r[6]+0x00000001u; // 800FFAD4
  c->r[4]=c->r[4]-c->r[6]; // 800FFAD8
  c->r[4]=~(c->r[5]|c->r[4]); // 800FFADC
  c->r[4]=sraw(c,c->r[4],31); // 800FFAE0
  c->r[0]=c->r[0]&~c->r[4]; // 800FFAE4
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FFAE8
  c->lr=0x800FFAF0u; f_800B08A4(c); // 800FFAEC
  c->r[0]=0u+0x00000001u; // 800FFAF0
L_800FFAF4:;
  c->r[3]=cntlz(c->r[0]); // 800FFAF4
  c->r[0]=0u+0xFFFFFFFEu; // 800FFAF8
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 800FFAFC
  c->r[3]=0u-c->r[3]; // 800FFB00
  c->r[4]=c->r[0]&c->r[3]; // 800FFB04
  goto L_800FFCDC; // 800FFB08
L_800FFB0C:;
  c->r[4]=0u+0xFFFFFFFDu; // 800FFB0C
  goto L_800FFCDC; // 800FFB10
L_800FFB14:;
  cmps(c,0,(int32_t)c->r[4],0); // 800FFB14
  if (!crb(c,2)) { goto L_800FFCDC; } // 800FFB18
  c->r[0]=0u+0x00000004u; // 800FFB1C
  W8(c->r[30]+0x00000933u,c->r[0]); // 800FFB20
  c->r[8]=0u+0x00000001u; // 800FFB24
  c->r[3]=0u+0x04A60000u; // 800FFB28
  W8(c->r[30]+0x00000B9Eu,c->r[8]); // 800FFB2C
  c->r[6]=0u+0x80100000u; // 800FFB30
  c->r[3]=c->r[3]+0x000000FFu; // 800FFB34
  c->r[7]=0u+0x00000017u; // 800FFB38
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FFB3C
  c->r[0]=0u+0x00000006u; // 800FFB40
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800FFB44
  c->r[3]=c->r[1]+0x00000044u; // 800FFB48
  c->r[4]=c->r[1]+0x0000001Cu; // 800FFB4C
  c->r[5]=0u+0x00000004u; // 800FFB50
  W16(c->r[1]+0x00000012u,c->r[8]); // 800FFB54
  W32(c->r[1]+0x00000040u,c->r[7]); // 800FFB58
  W16(c->r[1]+0x0000005Au,c->r[0]); // 800FFB5C
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 800FFB60
  c->lr=0x800FFB68u; f_80004338(c); // 800FFB64
  c->r[3]=c->r[1]+0x00000048u; // 800FFB68
  c->r[4]=c->r[1]+0x00000012u; // 800FFB6C
  c->r[5]=0u+0x00000002u; // 800FFB70
  c->lr=0x800FFB78u; f_80004338(c); // 800FFB74
  c->r[0]=R16(c->r[1]+0x00000012u); // 800FFB78
  c->r[31]=c->r[30]+0x00000931u; // 800FFB7C
  W16(c->r[1]+0x00000060u,c->r[0]); // 800FFB80
  c->r[12]=R32(c->r[1]+0x0000001Cu); // 800FFB84
  c->r[11]=R32(c->r[1]+0x00000040u); // 800FFB88
  c->r[10]=R32(c->r[1]+0x00000044u); // 800FFB8C
  c->r[9]=R32(c->r[1]+0x00000048u); // 800FFB90
  c->r[8]=R32(c->r[1]+0x0000004Cu); // 800FFB94
  c->r[7]=R32(c->r[1]+0x00000050u); // 800FFB98
  c->r[6]=R32(c->r[1]+0x00000054u); // 800FFB9C
  c->r[5]=R32(c->r[1]+0x00000058u); // 800FFBA0
  c->r[4]=R32(c->r[1]+0x00000060u); // 800FFBA4
  c->r[3]=R32(c->r[1]+0x00000068u); // 800FFBA8
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 800FFBAC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800FFBB0
  W32(c->r[1]+0x00000064u,c->r[12]); // 800FFBB4
  W32(c->r[1]+0x00000070u,c->r[11]); // 800FFBB8
  W32(c->r[1]+0x00000074u,c->r[10]); // 800FFBBC
  W32(c->r[1]+0x00000078u,c->r[9]); // 800FFBC0
  W32(c->r[1]+0x0000007Cu,c->r[8]); // 800FFBC4
  W32(c->r[1]+0x00000080u,c->r[7]); // 800FFBC8
  W32(c->r[1]+0x00000084u,c->r[6]); // 800FFBCC
  W32(c->r[1]+0x00000088u,c->r[5]); // 800FFBD0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800FFBD4
  W32(c->r[1]+0x00000090u,c->r[4]); // 800FFBD8
  W32(c->r[1]+0x00000094u,c->r[12]); // 800FFBDC
  W32(c->r[1]+0x00000098u,c->r[3]); // 800FFBE0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800FFBE4
  c->lr=0x800FFBECu; f_800B087C(c); // 800FFBE8
  c->r[28]=c->r[3]|c->r[3]; // 800FFBEC
  c->lr=0x800FFBF4u; f_800B087C(c); // 800FFBF0
  c->r[0]=R8(c->r[30]+0x00000160u); // 800FFBF4
  c->r[5]=R8(c->r[30]+0x00000161u); // 800FFBF8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFBFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FFC00
  c->r[0]=c->r[0]-c->r[4]; // 800FFC04
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 800FFC08
  if (!crb(c,0)) { goto L_800FFC1C; } // 800FFC0C
  c->r[0]=R32(c->r[30]+0x00000168u); // 800FFC10
  c->r[0]=c->r[31]+c->r[0]; // 800FFC14
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFC18
L_800FFC1C:;
  c->lr=0x800FFC20u; f_800B08A4(c); // 800FFC1C
  c->r[3]=R32(c->r[30]+0x00000168u); // 800FFC20
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FFC24
  cmpu(c,0,c->r[0],c->r[31]); // 800FFC28
  if (!crb(c,2)) { goto L_800FFC40; } // 800FFC2C
  c->r[3]=c->r[28]|c->r[28]; // 800FFC30
  c->lr=0x800FFC38u; f_800B08A4(c); // 800FFC34
  c->r[0]=0u+0x00000000u; // 800FFC38
  goto L_800FFCB8; // 800FFC3C
L_800FFC40:;
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FFC40
  c->r[4]=0u+0x00000000u; // 800FFC44
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FFC48
  c->r[5]=0u+0x00000030u; // 800FFC4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFC50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FFC54
  c->r[3]=c->r[3]+c->r[0]; // 800FFC58
  c->lr=0x800FFC60u; f_80004688(c); // 800FFC5C
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FFC60
  c->r[4]=c->r[1]+0x00000070u; // 800FFC64
  c->r[3]=R32(c->r[30]+0x00000164u); // 800FFC68
  c->r[5]=0u+0x00000030u; // 800FFC6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFC70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FFC74
  c->r[3]=c->r[3]+c->r[0]; // 800FFC78
  c->lr=0x800FFC80u; f_80004338(c); // 800FFC7C
  c->r[0]=R8(c->r[30]+0x00000161u); // 800FFC80
  c->r[3]=c->r[28]|c->r[28]; // 800FFC84
  c->r[4]=R32(c->r[30]+0x00000168u); // 800FFC88
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFC8C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FFC90
  c->r[5]=c->r[6]-c->r[4]; // 800FFC94
  c->r[0]=c->r[6]+0x00000001u; // 800FFC98
  c->r[4]=c->r[4]-c->r[6]; // 800FFC9C
  c->r[4]=~(c->r[5]|c->r[4]); // 800FFCA0
  c->r[4]=sraw(c,c->r[4],31); // 800FFCA4
  c->r[0]=c->r[0]&~c->r[4]; // 800FFCA8
  W8(c->r[30]+0x00000161u,c->r[0]); // 800FFCAC
  c->lr=0x800FFCB4u; f_800B08A4(c); // 800FFCB0
  c->r[0]=0u+0x00000001u; // 800FFCB4
L_800FFCB8:;
  c->r[3]=cntlz(c->r[0]); // 800FFCB8
  c->r[0]=0u+0xFFFFFFFEu; // 800FFCBC
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 800FFCC0
  c->r[3]=0u-c->r[3]; // 800FFCC4
  c->r[4]=c->r[0]&c->r[3]; // 800FFCC8
  goto L_800FFCDC; // 800FFCCC
L_800FFCD0:;
  c->r[4]=0u+0x00000000u; // 800FFCD0
L_800FFCD4:;
  c->r[0]=0u+0x00000000u; // 800FFCD4
  W8(c->r[30]+0x00000B9Eu,c->r[0]); // 800FFCD8
L_800FFCDC:;
  c->r[0]=R8(c->r[30]+0x00000B9Eu); // 800FFCDC
  cmps(c,0,(int32_t)c->r[0],0); // 800FFCE0
  if (crb(c,2)) { goto L_800FFCF0; } // 800FFCE4
  cmps(c,0,(int32_t)c->r[4],0); // 800FFCE8
  if (crb(c,2)) { goto L_800FFD14; } // 800FFCEC
L_800FFCF0:;
  c->r[12]=R32(c->r[30]+0x00000B98u); // 800FFCF0
  c->r[0]=0u+0x00000000u; // 800FFCF4
  W8(c->r[30]+0x00000930u,c->r[0]); // 800FFCF8
  cmps(c,0,(int32_t)c->r[12],0); // 800FFCFC
  W32(c->r[30]+0x00000B98u,c->r[0]); // 800FFD00
  if (crb(c,2)) { goto L_800FFD14; } // 800FFD04
  c->r[3]=c->r[29]|c->r[29]; // 800FFD08
  c->ctr=c->r[12]; // 800FFD0C
  if (true) { c->lr=0x800FFD14u; dispatch(c,c->ctr); } // 800FFD10
L_800FFD14:;
  c->r[0]=R32(c->r[1]+0x000003B4u); // 800FFD14
  c->r[31]=R32(c->r[1]+0x000003ACu); // 800FFD18
  c->r[30]=R32(c->r[1]+0x000003A8u); // 800FFD1C
  c->r[29]=R32(c->r[1]+0x000003A4u); // 800FFD20
  c->r[28]=R32(c->r[1]+0x000003A0u); // 800FFD24
  c->lr=c->r[0]; // 800FFD28
  c->r[1]=c->r[1]+0x000003B0u; // 800FFD2C
  return; // 800FFD30
}

// WPADControlMpls
void f_800FFD40(Ctx* __restrict c) {
  trace_call(0x800FFD40u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFD40
  c->r[0]=c->lr; // 800FFD44
  W32(c->r[1]+0x00000094u,c->r[0]); // 800FFD48
  c->r[11]=c->r[1]+0x00000090u; // 800FFD4C
  c->lr=0x800FFD54u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FFD50
  c->r[6]=0u+0x802E0000u; // 800FFD54
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FFD58
  c->r[6]=c->r[6]+0xFFFFB290u; // 800FFD5C
  c->r[27]=c->r[3]|c->r[3]; // 800FFD60
  c->r[29]=R32(c->r[6]+c->r[0]); // 800FFD64
  c->r[31]=c->r[4]|c->r[4]; // 800FFD68
  c->r[28]=c->r[5]|c->r[5]; // 800FFD6C
  c->lr=0x800FFD74u; f_800B087C(c); // 800FFD70
  c->r[0]=R32(c->r[29]+0x00000B98u); // 800FFD74
  c->r[30]=c->r[3]|c->r[3]; // 800FFD78
  c->r[4]=R8(c->r[29]+0x00000905u); // 800FFD7C
  cmps(c,0,(int32_t)c->r[0],0); // 800FFD80
  c->r[5]=R8(c->r[29]+0x00000906u); // 800FFD84
  c->r[26]=R32(c->r[29]+0x00000900u); // 800FFD88
  c->r[3]=R32(c->r[29]+0x00000920u); // 800FFD8C
  if (crb(c,2)) { goto L_800FFD9C; } // 800FFD90
  c->r[0]=0u+0x00000001u; // 800FFD94
  goto L_800FFDA0; // 800FFD98
L_800FFD9C:;
  c->r[0]=R8(c->r[29]+0x00000930u); // 800FFD9C
L_800FFDA0:;
  cmps(c,0,(int32_t)c->r[26],-1); // 800FFDA0
  if (crb(c,2)) { goto L_80100068; } // 800FFDA4
  cmps(c,0,(int32_t)c->r[3],0); // 800FFDA8
  if (crb(c,2)) { goto L_800FFDB8; } // 800FFDAC
  cmps(c,0,(int32_t)c->r[0],0); // 800FFDB0
  if (crb(c,2)) { goto L_800FFDC0; } // 800FFDB4
L_800FFDB8:;
  c->r[26]=0u+0xFFFFFFFEu; // 800FFDB8
  goto L_80100068; // 800FFDBC
L_800FFDC0:;
  c->r[0]=R8(c->r[29]+0x00000942u); // 800FFDC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800FFDC4
  if (!crb(c,0)) { goto L_800FFDD4; } // 800FFDC8
  c->r[26]=0u+0xFFFFFFFCu; // 800FFDCC
  goto L_80100068; // 800FFDD0
L_800FFDD4:;
  cmpu(c,0,c->r[31],c->r[5]); // 800FFDD4
  if (!crb(c,2)) { goto L_800FFDE4; } // 800FFDD8
  c->r[26]=0u+0x00000000u; // 800FFDDC
  goto L_80100068; // 800FFDE0
L_800FFDE4:;
  c->r[0]=c->r[4]+0xFFFFFFFBu; // 800FFDE4
  cmpu(c,0,c->r[0],0x00000002u); // 800FFDE8
  if (!crb(c,1)) { goto L_800FFDF8; } // 800FFDEC
  cmpu(c,0,c->r[4],0x000000FAu); // 800FFDF0
  if (!crb(c,2)) { goto L_800FFE08; } // 800FFDF4
L_800FFDF8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFDF8
  if (crb(c,2)) { goto L_800FFE34; } // 800FFDFC
  cmpu(c,0,c->r[31],0x00000080u); // 800FFE00
  if (crb(c,2)) { goto L_800FFE34; } // 800FFE04
L_800FFE08:;
  c->r[0]=c->r[4]+0xFFFFFFFBu; // 800FFE08
  cmpu(c,0,c->r[0],0x00000002u); // 800FFE0C
  if (!crb(c,1)) { goto L_80100064; } // 800FFE10
  cmpu(c,0,c->r[4],0x000000FAu); // 800FFE14
  if (crb(c,2)) { goto L_80100064; } // 800FFE18
  cmpu(c,0,c->r[31],0x00000004u); // 800FFE1C
  if (crb(c,2)) { goto L_800FFE34; } // 800FFE20
  cmpu(c,0,c->r[31],0x00000005u); // 800FFE24
  if (crb(c,2)) { goto L_800FFE34; } // 800FFE28
  cmpu(c,0,c->r[31],0x00000007u); // 800FFE2C
  if (!crb(c,2)) { goto L_80100064; } // 800FFE30
L_800FFE34:;
  cmpu(c,0,c->r[31],0x00000080u); // 800FFE34
  if (!crb(c,2)) { goto L_800FFE50; } // 800FFE38
  c->r[0]=R8(c->r[29]+0x00000B9Fu); // 800FFE3C
  cmpu(c,0,c->r[0],0x000000C8u); // 800FFE40
  if (!crb(c,0)) { goto L_800FFE50; } // 800FFE44
  c->r[26]=0u+0xFFFFFFFEu; // 800FFE48
  goto L_80100068; // 800FFE4C
L_800FFE50:;
  W8(c->r[29]+0x00000934u,c->r[31]); // 800FFE50
  c->r[0]=0u+0x00000004u; // 800FFE54
  cmps(c,0,(int32_t)c->r[31],0); // 800FFE58
  W8(c->r[29]+0x00000933u,c->r[0]); // 800FFE5C
  if (crb(c,2)) { goto L_800FFE70; } // 800FFE60
  cmps(c,0,(int32_t)c->r[31],128); // 800FFE64
  if (crb(c,2)) { goto L_800FFE88; } // 800FFE68
  goto L_800FFEA0; // 800FFE6C
L_800FFE70:;
  c->r[0]=0u+0x00000002u; // 800FFE70
  W8(c->r[29]+0x00000B9Eu,c->r[0]); // 800FFE74
  c->r[3]=0u+0x04A40000u; // 800FFE78
  c->r[0]=c->r[3]+0x000000FEu; // 800FFE7C
  W32(c->r[29]+0x00000BA8u,c->r[0]); // 800FFE80
  goto L_800FFEB4; // 800FFE84
L_800FFE88:;
  c->r[0]=0u+0x00000005u; // 800FFE88
  W8(c->r[29]+0x00000B9Eu,c->r[0]); // 800FFE8C
  c->r[3]=0u+0x04A40000u; // 800FFE90
  c->r[0]=c->r[3]+0x000000FEu; // 800FFE94
  W32(c->r[29]+0x00000BA8u,c->r[0]); // 800FFE98
  goto L_800FFEB4; // 800FFE9C
L_800FFEA0:;
  c->r[0]=0u+0x00000001u; // 800FFEA0
  W8(c->r[29]+0x00000B9Eu,c->r[0]); // 800FFEA4
  c->r[3]=0u+0x04A60000u; // 800FFEA8
  c->r[0]=c->r[3]+0x000000FEu; // 800FFEAC
  W32(c->r[29]+0x00000BA8u,c->r[0]); // 800FFEB0
L_800FFEB4:;
  c->r[3]=R32(c->r[29]+0x00000BA8u); // 800FFEB4
  c->r[6]=0u+0x80100000u; // 800FFEB8
  c->r[6]=c->r[6]+0xFFFFEBD0u; // 800FFEBC
  c->r[8]=0u+0x00000002u; // 800FFEC0
  c->r[7]=0u+0x00000017u; // 800FFEC4
  c->r[0]=0u+0x00000006u; // 800FFEC8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800FFECC
  c->r[3]=c->r[1]+0x00000014u; // 800FFED0
  c->r[4]=c->r[1]+0x0000000Cu; // 800FFED4
  c->r[5]=0u+0x00000004u; // 800FFED8
  W16(c->r[1]+0x00000008u,c->r[8]); // 800FFEDC
  W32(c->r[1]+0x00000010u,c->r[7]); // 800FFEE0
  W16(c->r[1]+0x0000002Au,c->r[0]); // 800FFEE4
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800FFEE8
  c->lr=0x800FFEF0u; f_80004338(c); // 800FFEEC
  c->r[3]=c->r[1]+0x00000018u; // 800FFEF0
  c->r[4]=c->r[1]+0x00000008u; // 800FFEF4
  c->r[5]=0u+0x00000002u; // 800FFEF8
  c->lr=0x800FFF00u; f_80004338(c); // 800FFEFC
  c->r[0]=R16(c->r[1]+0x00000008u); // 800FFF00
  c->r[31]=c->r[29]+0x00000931u; // 800FFF04
  W16(c->r[1]+0x00000030u,c->r[0]); // 800FFF08
  c->r[12]=R32(c->r[1]+0x0000000Cu); // 800FFF0C
  c->r[11]=R32(c->r[1]+0x00000010u); // 800FFF10
  c->r[10]=R32(c->r[1]+0x00000014u); // 800FFF14
  c->r[9]=R32(c->r[1]+0x00000018u); // 800FFF18
  c->r[8]=R32(c->r[1]+0x0000001Cu); // 800FFF1C
  c->r[7]=R32(c->r[1]+0x00000020u); // 800FFF20
  c->r[6]=R32(c->r[1]+0x00000024u); // 800FFF24
  c->r[5]=R32(c->r[1]+0x00000028u); // 800FFF28
  c->r[4]=R32(c->r[1]+0x00000030u); // 800FFF2C
  c->r[3]=R32(c->r[1]+0x00000038u); // 800FFF30
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800FFF34
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FFF38
  W32(c->r[1]+0x00000034u,c->r[12]); // 800FFF3C
  W32(c->r[1]+0x00000040u,c->r[11]); // 800FFF40
  W32(c->r[1]+0x00000044u,c->r[10]); // 800FFF44
  W32(c->r[1]+0x00000048u,c->r[9]); // 800FFF48
  W32(c->r[1]+0x0000004Cu,c->r[8]); // 800FFF4C
  W32(c->r[1]+0x00000050u,c->r[7]); // 800FFF50
  W32(c->r[1]+0x00000054u,c->r[6]); // 800FFF54
  W32(c->r[1]+0x00000058u,c->r[5]); // 800FFF58
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800FFF5C
  W32(c->r[1]+0x00000060u,c->r[4]); // 800FFF60
  W32(c->r[1]+0x00000064u,c->r[12]); // 800FFF64
  W32(c->r[1]+0x00000068u,c->r[3]); // 800FFF68
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800FFF6C
  c->lr=0x800FFF74u; f_800B087C(c); // 800FFF70
  c->r[31]=c->r[3]|c->r[3]; // 800FFF74
  c->lr=0x800FFF7Cu; f_800B087C(c); // 800FFF78
  c->r[4]=R8(c->r[29]+0x00000160u); // 800FFF7C
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FFF80
  c->r[0]=c->r[0]-c->r[4]; // 800FFF84
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[26]); // 800FFF88
  if (!crb(c,0)) { goto L_800FFF9C; } // 800FFF8C
  c->r[0]=R32(c->r[29]+0x00000168u); // 800FFF90
  c->r[0]=c->r[26]+c->r[0]; // 800FFF94
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFF98
L_800FFF9C:;
  c->lr=0x800FFFA0u; f_800B08A4(c); // 800FFF9C
  c->r[3]=R32(c->r[29]+0x00000168u); // 800FFFA0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FFFA4
  cmpu(c,0,c->r[0],c->r[26]); // 800FFFA8
  if (!crb(c,2)) { goto L_800FFFC0; } // 800FFFAC
  c->r[3]=c->r[31]|c->r[31]; // 800FFFB0
  c->lr=0x800FFFB8u; f_800B08A4(c); // 800FFFB4
  c->r[0]=0u+0x00000000u; // 800FFFB8
  goto L_80100038; // 800FFFBC
L_800FFFC0:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FFFC0
  c->r[4]=0u+0x00000000u; // 800FFFC4
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FFFC8
  c->r[5]=0u+0x00000030u; // 800FFFCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFFD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FFFD4
  c->r[3]=c->r[3]+c->r[0]; // 800FFFD8
  c->lr=0x800FFFE0u; f_80004688(c); // 800FFFDC
  c->r[0]=R8(c->r[29]+0x00000161u); // 800FFFE0
  c->r[4]=c->r[1]+0x00000040u; // 800FFFE4
  c->r[3]=R32(c->r[29]+0x00000164u); // 800FFFE8
  c->r[5]=0u+0x00000030u; // 800FFFEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800FFFF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800FFFF4
  c->r[3]=c->r[3]+c->r[0]; // 800FFFF8
  c->lr=0x80100000u; f_80004338(c); // 800FFFFC
  c->r[0]=R8(c->r[29]+0x00000161u); // 80100000
  c->r[3]=c->r[31]|c->r[31]; // 80100004
  c->r[4]=R32(c->r[29]+0x00000168u); // 80100008
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8010000C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80100010
  c->r[5]=c->r[6]-c->r[4]; // 80100014
  c->r[0]=c->r[6]+0x00000001u; // 80100018
  c->r[4]=c->r[4]-c->r[6]; // 8010001C
  c->r[4]=~(c->r[5]|c->r[4]); // 80100020
  c->r[4]=sraw(c,c->r[4],31); // 80100024
  c->r[0]=c->r[0]&~c->r[4]; // 80100028
  W8(c->r[29]+0x00000161u,c->r[0]); // 8010002C
  c->lr=0x80100034u; f_800B08A4(c); // 80100030
  c->r[0]=0u+0x00000001u; // 80100034
L_80100038:;
  cmps(c,0,(int32_t)c->r[0],0); // 80100038
  if (!crb(c,2)) { goto L_80100048; } // 8010003C
  c->r[26]=0u+0xFFFFFFFEu; // 80100040
  goto L_80100068; // 80100044
L_80100048:;
  c->r[0]=0u+0x00000001u; // 80100048
  W8(c->r[29]+0x00000930u,c->r[0]); // 8010004C
  c->r[3]=c->r[30]|c->r[30]; // 80100050
  W32(c->r[29]+0x00000B98u,c->r[28]); // 80100054
  c->lr=0x8010005Cu; f_800B08A4(c); // 80100058
  c->r[3]=0u+0x00000000u; // 8010005C
  goto L_80100090; // 80100060
L_80100064:;
  c->r[26]=0u+0xFFFFFFFCu; // 80100064
L_80100068:;
  c->r[3]=c->r[30]|c->r[30]; // 80100068
  c->lr=0x80100070u; f_800B08A4(c); // 8010006C
  cmps(c,0,(int32_t)c->r[28],0); // 80100070
  if (crb(c,2)) { goto L_8010008C; } // 80100074
  c->r[12]=c->r[28]|c->r[28]; // 80100078
  c->r[3]=c->r[27]|c->r[27]; // 8010007C
  c->r[4]=c->r[26]|c->r[26]; // 80100080
  c->ctr=c->r[12]; // 80100084
  if (true) { c->lr=0x8010008Cu; dispatch(c,c->ctr); } // 80100088
L_8010008C:;
  c->r[3]=c->r[26]|c->r[26]; // 8010008C
L_80100090:;
  c->r[11]=c->r[1]+0x00000090u; // 80100090
  c->lr=0x80100098u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80100094
  c->r[0]=R32(c->r[1]+0x00000094u); // 80100098
  c->lr=c->r[0]; // 8010009C
  c->r[1]=c->r[1]+0x00000090u; // 801000A0
  return; // 801000A4
}

// WPADGetMplsCalibration
void f_801000B0(Ctx* __restrict c) {
  trace_call(0x801000B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801000B0
  c->r[0]=c->lr; // 801000B4
  c->r[6]=0u+0x802E0000u; // 801000B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801000BC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801000C0
  c->r[6]=c->r[6]+0xFFFFB290u; // 801000C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801000C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801000CC
  c->r[30]=c->r[5]|c->r[5]; // 801000D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801000D4
  c->r[29]=c->r[4]|c->r[4]; // 801000D8
  c->r[31]=R32(c->r[6]+c->r[0]); // 801000DC
  c->lr=0x801000E4u; f_800B087C(c); // 801000E0
  cmps(c,0,(int32_t)c->r[29],0); // 801000E4
  if (crb(c,2)) { goto L_80100164; } // 801000E8
  cmps(c,0,(int32_t)c->r[30],0); // 801000EC
  if (crb(c,2)) { goto L_80100164; } // 801000F0
  c->r[4]=R32(c->r[31]+0x000008A0u); // 801000F4
  c->r[0]=R32(c->r[31]+0x000008A4u); // 801000F8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801000FC
  W32(c->r[29]+0x00000000u,c->r[4]); // 80100100
  c->r[4]=R32(c->r[31]+0x000008A8u); // 80100104
  c->r[0]=R32(c->r[31]+0x000008ACu); // 80100108
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8010010C
  W32(c->r[29]+0x00000008u,c->r[4]); // 80100110
  c->r[4]=R32(c->r[31]+0x000008B0u); // 80100114
  c->r[0]=R32(c->r[31]+0x000008B4u); // 80100118
  W32(c->r[29]+0x00000014u,c->r[0]); // 8010011C
  W32(c->r[29]+0x00000010u,c->r[4]); // 80100120
  c->r[0]=R32(c->r[31]+0x000008B8u); // 80100124
  W32(c->r[29]+0x00000018u,c->r[0]); // 80100128
  c->r[4]=R32(c->r[31]+0x000008BCu); // 8010012C
  c->r[0]=R32(c->r[31]+0x000008C0u); // 80100130
  W32(c->r[30]+0x00000004u,c->r[0]); // 80100134
  W32(c->r[30]+0x00000000u,c->r[4]); // 80100138
  c->r[4]=R32(c->r[31]+0x000008C4u); // 8010013C
  c->r[0]=R32(c->r[31]+0x000008C8u); // 80100140
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80100144
  W32(c->r[30]+0x00000008u,c->r[4]); // 80100148
  c->r[4]=R32(c->r[31]+0x000008CCu); // 8010014C
  c->r[0]=R32(c->r[31]+0x000008D0u); // 80100150
  W32(c->r[30]+0x00000014u,c->r[0]); // 80100154
  W32(c->r[30]+0x00000010u,c->r[4]); // 80100158
  c->r[0]=R32(c->r[31]+0x000008D4u); // 8010015C
  W32(c->r[30]+0x00000018u,c->r[0]); // 80100160
L_80100164:;
  c->lr=0x80100168u; f_800B08A4(c); // 80100164
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100168
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010016C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80100170
  c->r[29]=R32(c->r[1]+0x00000014u); // 80100174
  c->lr=c->r[0]; // 80100178
  c->r[1]=c->r[1]+0x00000020u; // 8010017C
  return; // 80100180
}

// WPADiSendSetReportType
void f_80100190(Ctx* __restrict c) {
  trace_call(0x80100190u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100190
  c->r[0]=c->lr; // 80100194
  c->r[8]=0u+0x00000012u; // 80100198
  c->r[7]=0u+0x00000002u; // 8010019C
  W32(c->r[1]+0x00000084u,c->r[0]); // 801001A0
  c->r[0]=0u-c->r[5]; // 801001A4
  c->r[5]=c->r[0]|c->r[5]; // 801001A8
  cmpu(c,0,c->r[4],0x00000010u); // 801001AC
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801001B0
  c->r[0]=0u+0x00000004u; // 801001B4
  c->r[5]=sraw(c,c->r[5],31); // 801001B8
  W32(c->r[1]+0x00000078u,c->r[30]); // 801001BC
  c->r[0]=c->r[0]&~c->r[5]; // 801001C0
  c->r[30]=c->r[3]|c->r[3]; // 801001C4
  W32(c->r[1]+0x00000074u,c->r[29]); // 801001C8
  W32(c->r[1]+0x00000038u,c->r[8]); // 801001CC
  W16(c->r[1]+0x00000052u,c->r[7]); // 801001D0
  W8(c->r[1]+0x0000003Cu,c->r[0]); // 801001D4
  W32(c->r[1]+0x00000064u,c->r[6]); // 801001D8
  if (crb(c,1)) { goto L_801002B4; } // 801001DC
  c->r[3]=0u+0x80280000u; // 801001E0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801001E4
  c->r[3]=c->r[3]+0xFFFFBA7Cu; // 801001E8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801001EC
  c->ctr=c->r[3]; // 801001F0
  if (true) { switch (c->ctr) { case 0x801001F8u: goto L_801001F8; case 0x80100204u: goto L_80100204; case 0x80100210u: goto L_80100210; case 0x8010021Cu: goto L_8010021C; case 0x80100228u: goto L_80100228; case 0x80100234u: goto L_80100234; case 0x80100240u: goto L_80100240; case 0x8010024Cu: goto L_8010024C; case 0x80100258u: goto L_80100258; case 0x80100264u: goto L_80100264; case 0x80100270u: goto L_80100270; case 0x8010027Cu: goto L_8010027C; case 0x80100288u: goto L_80100288; case 0x80100294u: goto L_80100294; case 0x801002A0u: goto L_801002A0; case 0x801002ACu: goto L_801002AC; case 0x801002B4u: goto L_801002B4; default: break; } dispatch(c,c->ctr); return; } // 801001F4
L_801001F8:;
  c->r[0]=0u+0x00000030u; // 801001F8
  W8(c->r[1]+0x0000003Du,c->r[0]); // 801001FC
  goto L_801002B4; // 80100200
L_80100204:;
  c->r[0]=0u+0x00000031u; // 80100204
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100208
  goto L_801002B4; // 8010020C
L_80100210:;
  c->r[0]=0u+0x00000033u; // 80100210
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100214
  goto L_801002B4; // 80100218
L_8010021C:;
  c->r[0]=0u+0x00000032u; // 8010021C
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100220
  goto L_801002B4; // 80100224
L_80100228:;
  c->r[0]=0u+0x00000035u; // 80100228
  W8(c->r[1]+0x0000003Du,c->r[0]); // 8010022C
  goto L_801002B4; // 80100230
L_80100234:;
  c->r[0]=0u+0x00000037u; // 80100234
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100238
  goto L_801002B4; // 8010023C
L_80100240:;
  c->r[0]=0u+0x00000032u; // 80100240
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100244
  goto L_801002B4; // 80100248
L_8010024C:;
  c->r[0]=0u+0x00000035u; // 8010024C
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100250
  goto L_801002B4; // 80100254
L_80100258:;
  c->r[0]=0u+0x00000037u; // 80100258
  W8(c->r[1]+0x0000003Du,c->r[0]); // 8010025C
  goto L_801002B4; // 80100260
L_80100264:;
  c->r[0]=0u+0x0000003Eu; // 80100264
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100268
  goto L_801002B4; // 8010026C
L_80100270:;
  c->r[0]=0u+0x00000032u; // 80100270
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100274
  goto L_801002B4; // 80100278
L_8010027C:;
  c->r[0]=0u+0x00000037u; // 8010027C
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100280
  goto L_801002B4; // 80100284
L_80100288:;
  c->r[0]=0u+0x00000037u; // 80100288
  W8(c->r[1]+0x0000003Du,c->r[0]); // 8010028C
  goto L_801002B4; // 80100290
L_80100294:;
  c->r[0]=0u+0x00000034u; // 80100294
  W8(c->r[1]+0x0000003Du,c->r[0]); // 80100298
  goto L_801002B4; // 8010029C
L_801002A0:;
  c->r[0]=0u+0x00000035u; // 801002A0
  W8(c->r[1]+0x0000003Du,c->r[0]); // 801002A4
  goto L_801002B4; // 801002A8
L_801002AC:;
  c->r[0]=0u+0x00000037u; // 801002AC
  W8(c->r[1]+0x0000003Du,c->r[0]); // 801002B0
L_801002B4:;
  c->r[31]=R32(c->r[1]+0x00000038u); // 801002B4
  c->r[12]=R32(c->r[1]+0x0000003Cu); // 801002B8
  c->r[11]=R32(c->r[1]+0x00000040u); // 801002BC
  c->r[10]=R32(c->r[1]+0x00000044u); // 801002C0
  c->r[9]=R32(c->r[1]+0x00000048u); // 801002C4
  c->r[8]=R32(c->r[1]+0x0000004Cu); // 801002C8
  c->r[7]=R32(c->r[1]+0x00000050u); // 801002CC
  c->r[6]=R32(c->r[1]+0x00000054u); // 801002D0
  c->r[5]=R32(c->r[1]+0x00000058u); // 801002D4
  c->r[4]=R32(c->r[1]+0x0000005Cu); // 801002D8
  c->r[3]=R32(c->r[1]+0x00000060u); // 801002DC
  c->r[0]=R32(c->r[1]+0x00000064u); // 801002E0
  W32(c->r[1]+0x00000008u,c->r[31]); // 801002E4
  W32(c->r[1]+0x0000000Cu,c->r[12]); // 801002E8
  W32(c->r[1]+0x00000010u,c->r[11]); // 801002EC
  W32(c->r[1]+0x00000014u,c->r[10]); // 801002F0
  W32(c->r[1]+0x00000018u,c->r[9]); // 801002F4
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801002F8
  W32(c->r[1]+0x00000020u,c->r[7]); // 801002FC
  W32(c->r[1]+0x00000024u,c->r[6]); // 80100300
  W32(c->r[1]+0x00000028u,c->r[5]); // 80100304
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80100308
  W32(c->r[1]+0x00000030u,c->r[3]); // 8010030C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80100310
  c->lr=0x80100318u; f_800B087C(c); // 80100314
  c->r[31]=c->r[3]|c->r[3]; // 80100318
  c->lr=0x80100320u; f_800B087C(c); // 8010031C
  c->r[4]=R8(c->r[30]+0x00000000u); // 80100320
  c->r[0]=R8(c->r[30]+0x00000001u); // 80100324
  c->r[0]=c->r[0]-c->r[4]; // 80100328
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[29]); // 8010032C
  if (!crb(c,0)) { goto L_80100340; } // 80100330
  c->r[0]=R32(c->r[30]+0x00000008u); // 80100334
  c->r[0]=c->r[29]+c->r[0]; // 80100338
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8010033C
L_80100340:;
  c->lr=0x80100344u; f_800B08A4(c); // 80100340
  c->r[3]=R32(c->r[30]+0x00000008u); // 80100344
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80100348
  cmpu(c,0,c->r[0],c->r[29]); // 8010034C
  if (!crb(c,2)) { goto L_80100364; } // 80100350
  c->r[3]=c->r[31]|c->r[31]; // 80100354
  c->lr=0x8010035Cu; f_800B08A4(c); // 80100358
  c->r[3]=0u+0x00000000u; // 8010035C
  goto L_801003DC; // 80100360
L_80100364:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 80100364
  c->r[4]=0u+0x00000000u; // 80100368
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010036C
  c->r[5]=0u+0x00000030u; // 80100370
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80100374
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80100378
  c->r[3]=c->r[3]+c->r[0]; // 8010037C
  c->lr=0x80100384u; f_80004688(c); // 80100380
  c->r[0]=R8(c->r[30]+0x00000001u); // 80100384
  c->r[4]=c->r[1]+0x00000008u; // 80100388
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010038C
  c->r[5]=0u+0x00000030u; // 80100390
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80100394
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80100398
  c->r[3]=c->r[3]+c->r[0]; // 8010039C
  c->lr=0x801003A4u; f_80004338(c); // 801003A0
  c->r[0]=R8(c->r[30]+0x00000001u); // 801003A4
  c->r[3]=c->r[31]|c->r[31]; // 801003A8
  c->r[4]=R32(c->r[30]+0x00000008u); // 801003AC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801003B0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801003B4
  c->r[5]=c->r[6]-c->r[4]; // 801003B8
  c->r[0]=c->r[6]+0x00000001u; // 801003BC
  c->r[4]=c->r[4]-c->r[6]; // 801003C0
  c->r[4]=~(c->r[5]|c->r[4]); // 801003C4
  c->r[4]=sraw(c,c->r[4],31); // 801003C8
  c->r[0]=c->r[0]&~c->r[4]; // 801003CC
  W8(c->r[30]+0x00000001u,c->r[0]); // 801003D0
  c->lr=0x801003D8u; f_800B08A4(c); // 801003D4
  c->r[3]=0u+0x00000001u; // 801003D8
L_801003DC:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 801003DC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801003E0
  c->r[30]=R32(c->r[1]+0x00000078u); // 801003E4
  c->r[29]=R32(c->r[1]+0x00000074u); // 801003E8
  c->lr=c->r[0]; // 801003EC
  c->r[1]=c->r[1]+0x00000080u; // 801003F0
  return; // 801003F4
}

// WPADiSendWriteDataCmd
void f_80100400(Ctx* __restrict c) {
  trace_call(0x80100400u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100400
  c->r[0]=c->lr; // 80100404
  c->r[8]=0u+0x00000001u; // 80100408
  c->r[7]=0u+0x00000016u; // 8010040C
  W32(c->r[1]+0x00000084u,c->r[0]); // 80100410
  c->r[0]=0u+0x00000015u; // 80100414
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80100418
  c->r[31]=c->r[3]|c->r[3]; // 8010041C
  c->r[3]=c->r[1]+0x00000014u; // 80100420
  W32(c->r[1]+0x00000078u,c->r[30]); // 80100424
  W32(c->r[1]+0x00000074u,c->r[29]); // 80100428
  W8(c->r[1]+0x00000008u,c->r[4]); // 8010042C
  c->r[4]=c->r[1]+0x0000000Cu; // 80100430
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80100434
  c->r[5]=0u+0x00000004u; // 80100438
  W8(c->r[1]+0x00000009u,c->r[8]); // 8010043C
  W32(c->r[1]+0x00000010u,c->r[7]); // 80100440
  W16(c->r[1]+0x0000002Au,c->r[0]); // 80100444
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 80100448
  c->lr=0x80100450u; f_80004338(c); // 8010044C
  c->r[3]=c->r[1]+0x00000018u; // 80100450
  c->r[4]=c->r[1]+0x00000009u; // 80100454
  c->r[5]=0u+0x00000001u; // 80100458
  c->lr=0x80100460u; f_80004338(c); // 8010045C
  c->r[3]=c->r[1]+0x00000019u; // 80100460
  c->r[4]=c->r[1]+0x00000008u; // 80100464
  c->r[5]=0u+0x00000001u; // 80100468
  c->lr=0x80100470u; f_80004338(c); // 8010046C
  c->r[30]=R32(c->r[1]+0x00000010u); // 80100470
  c->r[12]=R32(c->r[1]+0x00000014u); // 80100474
  c->r[11]=R32(c->r[1]+0x00000018u); // 80100478
  c->r[10]=R32(c->r[1]+0x0000001Cu); // 8010047C
  c->r[9]=R32(c->r[1]+0x00000020u); // 80100480
  c->r[8]=R32(c->r[1]+0x00000024u); // 80100484
  c->r[7]=R32(c->r[1]+0x00000028u); // 80100488
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 8010048C
  c->r[5]=R32(c->r[1]+0x00000030u); // 80100490
  c->r[4]=R32(c->r[1]+0x00000034u); // 80100494
  c->r[3]=R32(c->r[1]+0x00000038u); // 80100498
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8010049C
  W32(c->r[1]+0x00000040u,c->r[30]); // 801004A0
  W32(c->r[1]+0x00000044u,c->r[12]); // 801004A4
  W32(c->r[1]+0x00000048u,c->r[11]); // 801004A8
  W32(c->r[1]+0x0000004Cu,c->r[10]); // 801004AC
  W32(c->r[1]+0x00000050u,c->r[9]); // 801004B0
  W32(c->r[1]+0x00000054u,c->r[8]); // 801004B4
  W32(c->r[1]+0x00000058u,c->r[7]); // 801004B8
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 801004BC
  W32(c->r[1]+0x00000060u,c->r[5]); // 801004C0
  W32(c->r[1]+0x00000064u,c->r[4]); // 801004C4
  W32(c->r[1]+0x00000068u,c->r[3]); // 801004C8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801004CC
  c->lr=0x801004D4u; f_800B087C(c); // 801004D0
  c->r[30]=c->r[3]|c->r[3]; // 801004D4
  c->lr=0x801004DCu; f_800B087C(c); // 801004D8
  c->r[4]=R8(c->r[31]+0x00000000u); // 801004DC
  c->r[0]=R8(c->r[31]+0x00000001u); // 801004E0
  c->r[0]=c->r[0]-c->r[4]; // 801004E4
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[29]); // 801004E8
  if (!crb(c,0)) { goto L_801004FC; } // 801004EC
  c->r[0]=R32(c->r[31]+0x00000008u); // 801004F0
  c->r[0]=c->r[29]+c->r[0]; // 801004F4
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801004F8
L_801004FC:;
  c->lr=0x80100500u; f_800B08A4(c); // 801004FC
  c->r[3]=R32(c->r[31]+0x00000008u); // 80100500
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80100504
  cmpu(c,0,c->r[0],c->r[29]); // 80100508
  if (!crb(c,2)) { goto L_80100520; } // 8010050C
  c->r[3]=c->r[30]|c->r[30]; // 80100510
  c->lr=0x80100518u; f_800B08A4(c); // 80100514
  c->r[3]=0u+0x00000000u; // 80100518
  goto L_80100598; // 8010051C
L_80100520:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 80100520
  c->r[4]=0u+0x00000000u; // 80100524
  c->r[3]=R32(c->r[31]+0x00000004u); // 80100528
  c->r[5]=0u+0x00000030u; // 8010052C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80100530
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80100534
  c->r[3]=c->r[3]+c->r[0]; // 80100538
  c->lr=0x80100540u; f_80004688(c); // 8010053C
  c->r[0]=R8(c->r[31]+0x00000001u); // 80100540
  c->r[4]=c->r[1]+0x00000040u; // 80100544
  c->r[3]=R32(c->r[31]+0x00000004u); // 80100548
  c->r[5]=0u+0x00000030u; // 8010054C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80100550
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80100554
  c->r[3]=c->r[3]+c->r[0]; // 80100558
  c->lr=0x80100560u; f_80004338(c); // 8010055C
  c->r[0]=R8(c->r[31]+0x00000001u); // 80100560
  c->r[3]=c->r[30]|c->r[30]; // 80100564
  c->r[4]=R32(c->r[31]+0x00000008u); // 80100568
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8010056C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80100570
  c->r[5]=c->r[6]-c->r[4]; // 80100574
  c->r[0]=c->r[6]+0x00000001u; // 80100578
  c->r[4]=c->r[4]-c->r[6]; // 8010057C
  c->r[4]=~(c->r[5]|c->r[4]); // 80100580
  c->r[4]=sraw(c,c->r[4],31); // 80100584
  c->r[0]=c->r[0]&~c->r[4]; // 80100588
  W8(c->r[31]+0x00000001u,c->r[0]); // 8010058C
  c->lr=0x80100594u; f_800B08A4(c); // 80100590
  c->r[3]=0u+0x00000001u; // 80100594
L_80100598:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 80100598
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8010059C
  c->r[30]=R32(c->r[1]+0x00000078u); // 801005A0
  c->r[29]=R32(c->r[1]+0x00000074u); // 801005A4
  c->lr=c->r[0]; // 801005A8
  c->r[1]=c->r[1]+0x00000080u; // 801005AC
  return; // 801005B0
}

// WPADiSendWriteData
void f_801005C0(Ctx* __restrict c) {
  trace_call(0x801005C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801005C0
  c->r[0]=c->lr; // 801005C4
  c->r[9]=rotl(c->r[5],0)&0x0000001Fu; // 801005C8
  c->r[8]=0u+0x00000016u; // 801005CC
  W32(c->r[1]+0x00000084u,c->r[0]); // 801005D0
  c->r[0]=0u+0x00000015u; // 801005D4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801005D8
  c->r[31]=c->r[4]|c->r[4]; // 801005DC
  c->r[4]=c->r[1]+0x00000008u; // 801005E0
  W32(c->r[1]+0x00000078u,c->r[30]); // 801005E4
  c->r[30]=c->r[3]|c->r[3]; // 801005E8
  c->r[3]=c->r[1]+0x00000044u; // 801005EC
  W32(c->r[1]+0x00000074u,c->r[29]); // 801005F0
  c->r[29]=c->r[5]|c->r[5]; // 801005F4
  c->r[5]=0u+0x00000004u; // 801005F8
  W32(c->r[1]+0x00000008u,c->r[6]); // 801005FC
  W8(c->r[1]+0x0000000Cu,c->r[9]); // 80100600
  W32(c->r[1]+0x00000040u,c->r[8]); // 80100604
  W16(c->r[1]+0x0000005Au,c->r[0]); // 80100608
  W32(c->r[1]+0x0000006Cu,c->r[7]); // 8010060C
  c->lr=0x80100614u; f_80004338(c); // 80100610
  c->r[3]=c->r[1]+0x00000048u; // 80100614
  c->r[4]=c->r[1]+0x0000000Cu; // 80100618
  c->r[5]=0u+0x00000001u; // 8010061C
  c->lr=0x80100624u; f_80004338(c); // 80100620
  c->r[4]=c->r[31]|c->r[31]; // 80100624
  c->r[5]=c->r[29]|c->r[29]; // 80100628
  c->r[3]=c->r[1]+0x00000049u; // 8010062C
  c->lr=0x80100634u; f_80004338(c); // 80100630
  c->r[31]=R32(c->r[1]+0x00000040u); // 80100634
  c->r[12]=R32(c->r[1]+0x00000044u); // 80100638
  c->r[11]=R32(c->r[1]+0x00000048u); // 8010063C
  c->r[10]=R32(c->r[1]+0x0000004Cu); // 80100640
  c->r[9]=R32(c->r[1]+0x00000050u); // 80100644
  c->r[8]=R32(c->r[1]+0x00000054u); // 80100648
  c->r[7]=R32(c->r[1]+0x00000058u); // 8010064C
  c->r[6]=R32(c->r[1]+0x0000005Cu); // 80100650
  c->r[5]=R32(c->r[1]+0x00000060u); // 80100654
  c->r[4]=R32(c->r[1]+0x00000064u); // 80100658
  c->r[3]=R32(c->r[1]+0x00000068u); // 8010065C
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 80100660
  W32(c->r[1]+0x00000010u,c->r[31]); // 80100664
  W32(c->r[1]+0x00000014u,c->r[12]); // 80100668
  W32(c->r[1]+0x00000018u,c->r[11]); // 8010066C
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 80100670
  W32(c->r[1]+0x00000020u,c->r[9]); // 80100674
  W32(c->r[1]+0x00000024u,c->r[8]); // 80100678
  W32(c->r[1]+0x00000028u,c->r[7]); // 8010067C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80100680
  W32(c->r[1]+0x00000030u,c->r[5]); // 80100684
  W32(c->r[1]+0x00000034u,c->r[4]); // 80100688
  W32(c->r[1]+0x00000038u,c->r[3]); // 8010068C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80100690
  c->lr=0x80100698u; f_800B087C(c); // 80100694
  c->r[31]=c->r[3]|c->r[3]; // 80100698
  c->lr=0x801006A0u; f_800B087C(c); // 8010069C
  c->r[4]=R8(c->r[30]+0x00000000u); // 801006A0
  c->r[0]=R8(c->r[30]+0x00000001u); // 801006A4
  c->r[0]=c->r[0]-c->r[4]; // 801006A8
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[29]); // 801006AC
  if (!crb(c,0)) { goto L_801006C0; } // 801006B0
  c->r[0]=R32(c->r[30]+0x00000008u); // 801006B4
  c->r[0]=c->r[29]+c->r[0]; // 801006B8
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801006BC
L_801006C0:;
  c->lr=0x801006C4u; f_800B08A4(c); // 801006C0
  c->r[3]=R32(c->r[30]+0x00000008u); // 801006C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801006C8
  cmpu(c,0,c->r[0],c->r[29]); // 801006CC
  if (!crb(c,2)) { goto L_801006E4; } // 801006D0
  c->r[3]=c->r[31]|c->r[31]; // 801006D4
  c->lr=0x801006DCu; f_800B08A4(c); // 801006D8
  c->r[3]=0u+0x00000000u; // 801006DC
  goto L_8010075C; // 801006E0
L_801006E4:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801006E4
  c->r[4]=0u+0x00000000u; // 801006E8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801006EC
  c->r[5]=0u+0x00000030u; // 801006F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801006F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801006F8
  c->r[3]=c->r[3]+c->r[0]; // 801006FC
  c->lr=0x80100704u; f_80004688(c); // 80100700
  c->r[0]=R8(c->r[30]+0x00000001u); // 80100704
  c->r[4]=c->r[1]+0x00000010u; // 80100708
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010070C
  c->r[5]=0u+0x00000030u; // 80100710
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80100714
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80100718
  c->r[3]=c->r[3]+c->r[0]; // 8010071C
  c->lr=0x80100724u; f_80004338(c); // 80100720
  c->r[0]=R8(c->r[30]+0x00000001u); // 80100724
  c->r[3]=c->r[31]|c->r[31]; // 80100728
  c->r[4]=R32(c->r[30]+0x00000008u); // 8010072C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80100730
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80100734
  c->r[5]=c->r[6]-c->r[4]; // 80100738
  c->r[0]=c->r[6]+0x00000001u; // 8010073C
  c->r[4]=c->r[4]-c->r[6]; // 80100740
  c->r[4]=~(c->r[5]|c->r[4]); // 80100744
  c->r[4]=sraw(c,c->r[4],31); // 80100748
  c->r[0]=c->r[0]&~c->r[4]; // 8010074C
  W8(c->r[30]+0x00000001u,c->r[0]); // 80100750
  c->lr=0x80100758u; f_800B08A4(c); // 80100754
  c->r[3]=0u+0x00000001u; // 80100758
L_8010075C:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 8010075C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80100760
  c->r[30]=R32(c->r[1]+0x00000078u); // 80100764
  c->r[29]=R32(c->r[1]+0x00000074u); // 80100768
  c->lr=c->r[0]; // 8010076C
  c->r[1]=c->r[1]+0x00000080u; // 80100770
  return; // 80100774
}

// WPADiSendReadData
void f_80100780(Ctx* __restrict c) {
  trace_call(0x80100780u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100780
  c->r[0]=c->lr; // 80100784
  W32(c->r[1]+0x00000084u,c->r[0]); // 80100788
  c->r[0]=0u+0x00000006u; // 8010078C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80100790
  W32(c->r[1]+0x00000078u,c->r[30]); // 80100794
  c->r[30]=c->r[3]|c->r[3]; // 80100798
  c->r[3]=c->r[1]+0x00000044u; // 8010079C
  W32(c->r[1]+0x00000074u,c->r[29]); // 801007A0
  c->r[29]=c->r[4]|c->r[4]; // 801007A4
  c->r[4]=c->r[1]+0x0000000Cu; // 801007A8
  W16(c->r[1]+0x00000008u,c->r[5]); // 801007AC
  c->r[5]=0u+0x00000017u; // 801007B0
  W32(c->r[1]+0x00000040u,c->r[5]); // 801007B4
  c->r[5]=0u+0x00000004u; // 801007B8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801007BC
  W16(c->r[1]+0x0000005Au,c->r[0]); // 801007C0
  W32(c->r[1]+0x0000006Cu,c->r[7]); // 801007C4
  c->lr=0x801007CCu; f_80004338(c); // 801007C8
  c->r[3]=c->r[1]+0x00000048u; // 801007CC
  c->r[4]=c->r[1]+0x00000008u; // 801007D0
  c->r[5]=0u+0x00000002u; // 801007D4
  c->lr=0x801007DCu; f_80004338(c); // 801007D8
  c->r[0]=R16(c->r[1]+0x00000008u); // 801007DC
  W16(c->r[1]+0x00000060u,c->r[0]); // 801007E0
  c->r[12]=R32(c->r[1]+0x0000000Cu); // 801007E4
  c->r[11]=R32(c->r[1]+0x00000040u); // 801007E8
  c->r[10]=R32(c->r[1]+0x00000044u); // 801007EC
  c->r[9]=R32(c->r[1]+0x00000048u); // 801007F0
  c->r[8]=R32(c->r[1]+0x0000004Cu); // 801007F4
  c->r[7]=R32(c->r[1]+0x00000050u); // 801007F8
  c->r[6]=R32(c->r[1]+0x00000054u); // 801007FC
  c->r[5]=R32(c->r[1]+0x00000058u); // 80100800
  c->r[4]=R32(c->r[1]+0x00000060u); // 80100804
  c->r[3]=R32(c->r[1]+0x00000068u); // 80100808
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 8010080C
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 80100810
  W32(c->r[1]+0x00000064u,c->r[12]); // 80100814
  W32(c->r[1]+0x00000010u,c->r[11]); // 80100818
  W32(c->r[1]+0x00000014u,c->r[10]); // 8010081C
  W32(c->r[1]+0x00000018u,c->r[9]); // 80100820
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80100824
  W32(c->r[1]+0x00000020u,c->r[7]); // 80100828
  W32(c->r[1]+0x00000024u,c->r[6]); // 8010082C
  W32(c->r[1]+0x00000028u,c->r[5]); // 80100830
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 80100834
  W32(c->r[1]+0x00000030u,c->r[4]); // 80100838
  W32(c->r[1]+0x00000034u,c->r[12]); // 8010083C
  W32(c->r[1]+0x00000038u,c->r[3]); // 80100840
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80100844
  c->lr=0x8010084Cu; f_800B087C(c); // 80100848
  c->r[31]=c->r[3]|c->r[3]; // 8010084C
  c->lr=0x80100854u; f_800B087C(c); // 80100850
  c->r[4]=R8(c->r[30]+0x00000000u); // 80100854
  c->r[0]=R8(c->r[30]+0x00000001u); // 80100858
  c->r[0]=c->r[0]-c->r[4]; // 8010085C
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[29]); // 80100860
  if (!crb(c,0)) { goto L_80100874; } // 80100864
  c->r[0]=R32(c->r[30]+0x00000008u); // 80100868
  c->r[0]=c->r[29]+c->r[0]; // 8010086C
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80100870
L_80100874:;
  c->lr=0x80100878u; f_800B08A4(c); // 80100874
  c->r[3]=R32(c->r[30]+0x00000008u); // 80100878
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010087C
  cmpu(c,0,c->r[0],c->r[29]); // 80100880
  if (!crb(c,2)) { goto L_80100898; } // 80100884
  c->r[3]=c->r[31]|c->r[31]; // 80100888
  c->lr=0x80100890u; f_800B08A4(c); // 8010088C
  c->r[3]=0u+0x00000000u; // 80100890
  goto L_80100910; // 80100894
L_80100898:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 80100898
  c->r[4]=0u+0x00000000u; // 8010089C
  c->r[3]=R32(c->r[30]+0x00000004u); // 801008A0
  c->r[5]=0u+0x00000030u; // 801008A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801008A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801008AC
  c->r[3]=c->r[3]+c->r[0]; // 801008B0
  c->lr=0x801008B8u; f_80004688(c); // 801008B4
  c->r[0]=R8(c->r[30]+0x00000001u); // 801008B8
  c->r[4]=c->r[1]+0x00000010u; // 801008BC
  c->r[3]=R32(c->r[30]+0x00000004u); // 801008C0
  c->r[5]=0u+0x00000030u; // 801008C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801008C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801008CC
  c->r[3]=c->r[3]+c->r[0]; // 801008D0
  c->lr=0x801008D8u; f_80004338(c); // 801008D4
  c->r[0]=R8(c->r[30]+0x00000001u); // 801008D8
  c->r[3]=c->r[31]|c->r[31]; // 801008DC
  c->r[4]=R32(c->r[30]+0x00000008u); // 801008E0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801008E4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801008E8
  c->r[5]=c->r[6]-c->r[4]; // 801008EC
  c->r[0]=c->r[6]+0x00000001u; // 801008F0
  c->r[4]=c->r[4]-c->r[6]; // 801008F4
  c->r[4]=~(c->r[5]|c->r[4]); // 801008F8
  c->r[4]=sraw(c,c->r[4],31); // 801008FC
  c->r[0]=c->r[0]&~c->r[4]; // 80100900
  W8(c->r[30]+0x00000001u,c->r[0]); // 80100904
  c->lr=0x8010090Cu; f_800B08A4(c); // 80100908
  c->r[3]=0u+0x00000001u; // 8010090C
L_80100910:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 80100910
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80100914
  c->r[30]=R32(c->r[1]+0x00000078u); // 80100918
  c->r[29]=R32(c->r[1]+0x00000074u); // 8010091C
  c->lr=c->r[0]; // 80100920
  c->r[1]=c->r[1]+0x00000080u; // 80100924
  return; // 80100928
}

// WPADiIsAvailableCmdQueue
void f_80100930(Ctx* __restrict c) {
  trace_call(0x80100930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100930
  c->r[0]=c->lr; // 80100934
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100938
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010093C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80100940
  c->r[30]=c->r[4]|c->r[4]; // 80100944
  W32(c->r[1]+0x00000014u,c->r[29]); // 80100948
  c->r[29]=c->r[3]|c->r[3]; // 8010094C
  c->lr=0x80100954u; f_800B087C(c); // 80100950
  c->r[4]=R8(c->r[29]+0x00000000u); // 80100954
  c->r[0]=R8(c->r[29]+0x00000001u); // 80100958
  c->r[0]=c->r[0]-c->r[4]; // 8010095C
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 80100960
  if (!crb(c,0)) { goto L_80100974; } // 80100964
  c->r[0]=R32(c->r[29]+0x00000008u); // 80100968
  c->r[0]=c->r[31]+c->r[0]; // 8010096C
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80100970
L_80100974:;
  c->lr=0x80100978u; f_800B08A4(c); // 80100974
  c->r[3]=R32(c->r[29]+0x00000008u); // 80100978
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 8010097C
  c->r[4]=c->r[31]+c->r[0]; // 80100980
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80100984
  cmpu(c,0,c->r[4],c->r[0]); // 80100988
  if (crb(c,1)) { goto L_80100998; } // 8010098C
  c->r[3]=0u+0x00000001u; // 80100990
  goto L_8010099C; // 80100994
L_80100998:;
  c->r[3]=0u+0x00000000u; // 80100998
L_8010099C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010099C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801009A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801009A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801009A8
  c->lr=c->r[0]; // 801009AC
  c->r[1]=c->r[1]+0x00000020u; // 801009B0
  return; // 801009B4
}

// WPADiClearQueue
void f_801009C0(Ctx* __restrict c) {
  trace_call(0x801009C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801009C0
  c->r[0]=c->lr; // 801009C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801009C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801009CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801009D0
  c->r[30]=c->r[3]|c->r[3]; // 801009D4
  c->lr=0x801009DCu; f_800B087C(c); // 801009D8
  c->r[0]=R32(c->r[30]+0x00000008u); // 801009DC
  c->r[4]=0u+0x00000000u; // 801009E0
  c->r[31]=c->r[3]|c->r[3]; // 801009E4
  W8(c->r[30]+0x00000000u,c->r[4]); // 801009E8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801009EC
  c->r[3]=R32(c->r[30]+0x00000004u); // 801009F0
  W8(c->r[30]+0x00000001u,c->r[4]); // 801009F4
  c->r[4]=0u+0x00000000u; // 801009F8
  c->lr=0x80100A00u; f_80004688(c); // 801009FC
  c->r[3]=c->r[31]|c->r[31]; // 80100A00
  c->lr=0x80100A08u; f_800B08A4(c); // 80100A04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100A08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100A0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100A10
  c->lr=c->r[0]; // 80100A14
  c->r[1]=c->r[1]+0x00000010u; // 80100A18
  return; // 80100A1C
}

// WPADSetCallbackByKPAD
void f_80100A20(Ctx* __restrict c) {
  trace_call(0x80100A20u);
  W32(c->r[13]+0xFFFF9340u,c->r[3]); // 80100A20
  return; // 80100A24
}

// __wpadCertFailed
void f_80100A30(Ctx* __restrict c) {
  trace_call(0x80100A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100A30
  c->r[0]=c->lr; // 80100A34
  c->r[4]=0u+0x802E0000u; // 80100A38
  c->r[5]=0u+0x00000048u; // 80100A3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100A40
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80100A44
  c->r[4]=c->r[4]+0xFFFFB290u; // 80100A48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80100A4C
  c->r[31]=0u+0x00000000u; // 80100A50
  W32(c->r[1]+0x00000018u,c->r[30]); // 80100A54
  c->r[30]=0u+0xFFFFFFFFu; // 80100A58
  W32(c->r[1]+0x00000014u,c->r[29]); // 80100A5C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80100A60
  c->r[28]=c->r[3]|c->r[3]; // 80100A64
  c->r[29]=R32(c->r[4]+c->r[0]); // 80100A68
  c->r[4]=0u+0x00000000u; // 80100A6C
  W8(c->r[29]+0x00000942u,c->r[30]); // 80100A70
  c->r[3]=c->r[29]+0x00000948u; // 80100A74
  W8(c->r[29]+0x00000941u,c->r[31]); // 80100A78
  W8(c->r[29]+0x00000940u,c->r[30]); // 80100A7C
  W8(c->r[29]+0x00000943u,c->r[30]); // 80100A80
  W16(c->r[29]+0x0000093Eu,c->r[31]); // 80100A84
  W8(c->r[29]+0x0000093Bu,c->r[31]); // 80100A88
  W16(c->r[29]+0x0000093Cu,c->r[31]); // 80100A8C
  c->lr=0x80100A94u; f_80004688(c); // 80100A90
  c->r[3]=c->r[29]+0x00000990u; // 80100A94
  c->r[4]=0u+0x00000000u; // 80100A98
  c->r[5]=0u+0x00000048u; // 80100A9C
  c->lr=0x80100AA4u; f_80004688(c); // 80100AA0
  c->r[3]=c->r[29]+0x000009D8u; // 80100AA4
  c->r[4]=0u+0x00000000u; // 80100AA8
  c->r[5]=0u+0x00000108u; // 80100AAC
  c->lr=0x80100AB4u; f_80004688(c); // 80100AB0
  c->r[3]=0u+0x00000001u; // 80100AB4
  W32(c->r[29]+0x000009D8u,c->r[3]); // 80100AB8
  c->r[0]=0u+0x000000FCu; // 80100ABC
  W32(c->r[29]+0x00000990u,c->r[3]); // 80100AC0
  W32(c->r[29]+0x00000948u,c->r[3]); // 80100AC4
  W8(c->r[29]+0x0000093Au,c->r[31]); // 80100AC8
  W8(c->r[29]+0x00000BA4u,c->r[30]); // 80100ACC
  W8(c->r[29]+0x00000905u,c->r[0]); // 80100AD0
  c->r[12]=R32(c->r[29]+0x000008E4u); // 80100AD4
  cmps(c,0,(int32_t)c->r[12],0); // 80100AD8
  if (crb(c,2)) { goto L_80100AF0; } // 80100ADC
  c->r[3]=c->r[28]|c->r[28]; // 80100AE0
  c->r[4]=0u+0x000000FCu; // 80100AE4
  c->ctr=c->r[12]; // 80100AE8
  if (true) { c->lr=0x80100AF0u; dispatch(c,c->ctr); } // 80100AEC
L_80100AF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100AF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80100AF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80100AF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80100AFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80100B00
  c->lr=c->r[0]; // 80100B04
  c->r[1]=c->r[1]+0x00000020u; // 80100B08
  return; // 80100B0C
}

// __wpadCertCalcModX
void f_80100B10(Ctx* __restrict c) {
  trace_call(0x80100B10u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100B10
  c->r[0]=c->lr; // 80100B14
  W32(c->r[1]+0x00000134u,c->r[0]); // 80100B18
  c->r[11]=c->r[1]+0x00000130u; // 80100B1C
  c->lr=0x80100B24u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80100B20
  c->r[4]=0u+0x802E0000u; // 80100B24
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80100B28
  c->r[4]=c->r[4]+0xFFFFB290u; // 80100B2C
  c->r[25]=R32(c->r[4]+c->r[0]); // 80100B30
  c->lr=0x80100B38u; f_800B48F4(c); // 80100B34
  c->r[27]=0u+0x80260000u; // 80100B38
  c->r[26]=c->r[4]|c->r[4]; // 80100B3C
  c->r[3]=c->r[27]+0xFFFFBC38u; // 80100B40
  c->lr=0x80100B48u; f_80108270(c); // 80100B44
  c->r[4]=0u+0x431C0000u; // 80100B48
  c->r[28]=c->r[3]|c->r[3]; // 80100B4C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80100B50
  c->r[29]=0u+0x00000009u; // 80100B54
  c->r[31]=0u+0x80000000u; // 80100B58
L_80100B5C:;
  c->r[3]=c->r[25]+0x000009D8u; // 80100B5C
  c->lr=0x80100B64u; f_80108270(c); // 80100B60
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[28]); // 80100B64
  if (!crb(c,1)) { goto L_80100BA8; } // 80100B68
  c->r[5]=c->r[3]-c->r[28]; // 80100B6C
  c->r[3]=c->r[1]+0x00000008u; // 80100B70
  c->r[4]=c->r[27]+0xFFFFBC38u; // 80100B74
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80100B78
  c->lr=0x80100B80u; f_80107FA0(c); // 80100B7C
  c->r[3]=c->r[25]+0x000009D8u; // 80100B80
  c->r[4]=c->r[1]+0x00000008u; // 80100B84
  c->lr=0x80100B8Cu; f_80107F20(c); // 80100B88
  cmps(c,0,(int32_t)c->r[3],0); // 80100B8C
  if (crb(c,0)) { goto L_80100BE0; } // 80100B90
  c->r[3]=c->r[25]+0x000009D8u; // 80100B94
  c->r[5]=c->r[1]+0x00000008u; // 80100B98
  c->r[4]=c->r[3]|c->r[3]; // 80100B9C
  c->lr=0x80100BA4u; f_80108350(c); // 80100BA0
  goto L_80100BE0; // 80100BA4
L_80100BA8:;
  c->r[3]=c->r[25]+0x000009D8u; // 80100BA8
  c->r[4]=c->r[27]+0xFFFFBC38u; // 80100BAC
  c->lr=0x80100BB4u; f_80107F20(c); // 80100BB0
  cmps(c,0,(int32_t)c->r[3],0); // 80100BB4
  if (crb(c,0)) { goto L_80100BCC; } // 80100BB8
  c->r[3]=c->r[25]+0x000009D8u; // 80100BBC
  c->r[5]=c->r[27]+0xFFFFBC38u; // 80100BC0
  c->r[4]=c->r[3]|c->r[3]; // 80100BC4
  c->lr=0x80100BCCu; f_80108350(c); // 80100BC8
L_80100BCC:;
  c->r[3]=c->r[25]+0x00000948u; // 80100BCC
  c->r[4]=c->r[25]+0x000009D8u; // 80100BD0
  c->r[5]=0u+0x00000048u; // 80100BD4
  c->lr=0x80100BDCu; f_80004338(c); // 80100BD8
  W8(c->r[25]+0x00000943u,c->r[29]); // 80100BDC
L_80100BE0:;
  c->lr=0x80100BE4u; f_800B48F4(c); // 80100BE0
  c->r[0]=R32(c->r[31]+0x000000F8u); // 80100BE4
  c->r[3]=c->r[4]-c->r[26]; // 80100BE8
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80100BEC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80100BF0
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80100BF4
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80100BF8
  c->r[0]=divwu(c->r[3],c->r[0]); // 80100BFC
  cmpu(c,0,c->r[0],0x00000050u); // 80100C00
  if (crb(c,0)) { IRQCHK(c); goto L_80100B5C; } // 80100C04
  c->r[0]=0u+0x00000000u; // 80100C08
  W8(c->r[25]+0x00000941u,c->r[0]); // 80100C0C
  c->r[11]=c->r[1]+0x00000130u; // 80100C10
  W16(c->r[25]+0x0000093Eu,c->r[0]); // 80100C14
  c->lr=0x80100C1Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80100C18
  c->r[0]=R32(c->r[1]+0x00000134u); // 80100C1C
  c->lr=c->r[0]; // 80100C20
  c->r[1]=c->r[1]+0x00000130u; // 80100C24
  return; // 80100C28
}

// __wpadCertCalcModY
void f_80100C30(Ctx* __restrict c) {
  trace_call(0x80100C30u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100C30
  c->r[0]=c->lr; // 80100C34
  W32(c->r[1]+0x00000134u,c->r[0]); // 80100C38
  c->r[11]=c->r[1]+0x00000130u; // 80100C3C
  c->lr=0x80100C44u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80100C40
  c->r[4]=0u+0x802E0000u; // 80100C44
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80100C48
  c->r[4]=c->r[4]+0xFFFFB290u; // 80100C4C
  c->r[25]=R32(c->r[4]+c->r[0]); // 80100C50
  c->lr=0x80100C58u; f_800B48F4(c); // 80100C54
  c->r[27]=0u+0x80260000u; // 80100C58
  c->r[26]=c->r[4]|c->r[4]; // 80100C5C
  c->r[3]=c->r[27]+0xFFFFBC38u; // 80100C60
  c->lr=0x80100C68u; f_80108270(c); // 80100C64
  c->r[4]=0u+0x431C0000u; // 80100C68
  c->r[28]=c->r[3]|c->r[3]; // 80100C6C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80100C70
  c->r[29]=0u+0x0000000Bu; // 80100C74
  c->r[31]=0u+0x80000000u; // 80100C78
L_80100C7C:;
  c->r[3]=c->r[25]+0x000009D8u; // 80100C7C
  c->lr=0x80100C84u; f_80108270(c); // 80100C80
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[28]); // 80100C84
  if (!crb(c,1)) { goto L_80100CC8; } // 80100C88
  c->r[5]=c->r[3]-c->r[28]; // 80100C8C
  c->r[3]=c->r[1]+0x00000008u; // 80100C90
  c->r[4]=c->r[27]+0xFFFFBC38u; // 80100C94
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80100C98
  c->lr=0x80100CA0u; f_80107FA0(c); // 80100C9C
  c->r[3]=c->r[25]+0x000009D8u; // 80100CA0
  c->r[4]=c->r[1]+0x00000008u; // 80100CA4
  c->lr=0x80100CACu; f_80107F20(c); // 80100CA8
  cmps(c,0,(int32_t)c->r[3],0); // 80100CAC
  if (crb(c,0)) { goto L_80100D00; } // 80100CB0
  c->r[3]=c->r[25]+0x000009D8u; // 80100CB4
  c->r[5]=c->r[1]+0x00000008u; // 80100CB8
  c->r[4]=c->r[3]|c->r[3]; // 80100CBC
  c->lr=0x80100CC4u; f_80108350(c); // 80100CC0
  goto L_80100D00; // 80100CC4
L_80100CC8:;
  c->r[3]=c->r[25]+0x000009D8u; // 80100CC8
  c->r[4]=c->r[27]+0xFFFFBC38u; // 80100CCC
  c->lr=0x80100CD4u; f_80107F20(c); // 80100CD0
  cmps(c,0,(int32_t)c->r[3],0); // 80100CD4
  if (crb(c,0)) { goto L_80100CEC; } // 80100CD8
  c->r[3]=c->r[25]+0x000009D8u; // 80100CDC
  c->r[5]=c->r[27]+0xFFFFBC38u; // 80100CE0
  c->r[4]=c->r[3]|c->r[3]; // 80100CE4
  c->lr=0x80100CECu; f_80108350(c); // 80100CE8
L_80100CEC:;
  c->r[3]=c->r[25]+0x00000990u; // 80100CEC
  c->r[4]=c->r[25]+0x000009D8u; // 80100CF0
  c->r[5]=0u+0x00000048u; // 80100CF4
  c->lr=0x80100CFCu; f_80004338(c); // 80100CF8
  W8(c->r[25]+0x00000943u,c->r[29]); // 80100CFC
L_80100D00:;
  c->lr=0x80100D04u; f_800B48F4(c); // 80100D00
  c->r[0]=R32(c->r[31]+0x000000F8u); // 80100D04
  c->r[3]=c->r[4]-c->r[26]; // 80100D08
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80100D0C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80100D10
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80100D14
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80100D18
  c->r[0]=divwu(c->r[3],c->r[0]); // 80100D1C
  cmpu(c,0,c->r[0],0x00000050u); // 80100D20
  if (crb(c,0)) { IRQCHK(c); goto L_80100C7C; } // 80100D24
  c->r[0]=0u+0x00000000u; // 80100D28
  W8(c->r[25]+0x00000941u,c->r[0]); // 80100D2C
  c->r[11]=c->r[1]+0x00000130u; // 80100D30
  W16(c->r[25]+0x0000093Eu,c->r[0]); // 80100D34
  c->lr=0x80100D3Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80100D38
  c->r[0]=R32(c->r[1]+0x00000134u); // 80100D3C
  c->lr=c->r[0]; // 80100D40
  c->r[1]=c->r[1]+0x00000130u; // 80100D44
  return; // 80100D48
}

// __wpadCertChallengeCallback
void f_80100D50(Ctx* __restrict c) {
  trace_call(0x80100D50u);
  c->r[5]=0u+0x802E0000u; // 80100D50
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80100D54
  c->r[5]=c->r[5]+0xFFFFB290u; // 80100D58
  cmps(c,0,(int32_t)c->r[4],0); // 80100D5C
  c->r[6]=R32(c->r[5]+c->r[0]); // 80100D60
  c->r[5]=0u+0x00000000u; // 80100D64
  W8(c->r[6]+0x00000941u,c->r[5]); // 80100D68
  if (!crb(c,2)) { goto L_80100D94; } // 80100D6C
  c->r[0]=R8(c->r[6]+0x00000940u); // 80100D70
  c->r[3]=0u+0x00002328u; // 80100D74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80100D78
  if (!crb(c,2)) { goto L_80100D84; } // 80100D7C
  c->r[3]=0u+0x000003E8u; // 80100D80
L_80100D84:;
  W16(c->r[6]+0x0000093Eu,c->r[3]); // 80100D84
  c->r[0]=0u+0x00000004u; // 80100D88
  W8(c->r[6]+0x00000943u,c->r[0]); // 80100D8C
  return; // 80100D90
L_80100D94:;
  c->r[4]=R8(c->r[6]+0x0000093Bu); // 80100D94
  cmps(c,0,(int32_t)c->r[4],0); // 80100D98
  c->r[0]=c->r[4]+0x00000001u; // 80100D9C
  W8(c->r[6]+0x0000093Bu,c->r[0]); // 80100DA0
  if (crb(c,2)) return; // 80100DA4
  W16(c->r[6]+0x0000093Eu,c->r[5]); // 80100DA8
  f_80100A30(c); return; // 80100DAC
  return; // 80100DB0
}

// __wpadCertProbeReadyCallback
void f_80100DC0(Ctx* __restrict c) {
  trace_call(0x80100DC0u);
  c->r[5]=0u+0x802E0000u; // 80100DC0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80100DC4
  c->r[5]=c->r[5]+0xFFFFB290u; // 80100DC8
  cmps(c,0,(int32_t)c->r[4],0); // 80100DCC
  c->r[6]=R32(c->r[5]+c->r[0]); // 80100DD0
  c->r[5]=0u+0x00000000u; // 80100DD4
  W8(c->r[6]+0x00000941u,c->r[5]); // 80100DD8
  if (!crb(c,2)) { goto L_80100E70; } // 80100DDC
  W16(c->r[6]+0x0000093Eu,c->r[5]); // 80100DE0
  c->r[4]=R8(c->r[6]+0x0000093Bu); // 80100DE4
  c->r[0]=c->r[4]+0x00000001u; // 80100DE8
  W8(c->r[6]+0x0000093Bu,c->r[0]); // 80100DEC
  c->r[0]=R8(c->r[6]+0x00000943u); // 80100DF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80100DF4
  if (!crb(c,2)) { goto L_80100E44; } // 80100DF8
  c->r[0]=R8(c->r[6]+0x00000B9Du); // 80100DFC
  cmpu(c,0,c->r[0],0x00000004u); // 80100E00
  if (crb(c,1)) { goto L_80100E0C; } // 80100E04
  W8(c->r[6]+0x0000093Bu,c->r[5]); // 80100E08
L_80100E0C:;
  c->r[0]=R8(c->r[6]+0x00000B9Du); // 80100E0C
  cmpu(c,0,c->r[0],0x0000000Cu); // 80100E10
  if (crb(c,1)) { goto L_80100E28; } // 80100E14
  c->r[0]=0u+0x0000157Cu; // 80100E18
  W16(c->r[6]+0x0000093Eu,c->r[0]); // 80100E1C
  c->r[0]=0u+0x00000000u; // 80100E20
  W8(c->r[6]+0x0000093Bu,c->r[0]); // 80100E24
L_80100E28:;
  c->r[0]=R8(c->r[6]+0x00000B9Du); // 80100E28
  cmpu(c,0,c->r[0],0x0000000Eu); // 80100E2C
  if (!crb(c,2)) { goto L_80100E44; } // 80100E30
  c->r[0]=0u+0x00000001u; // 80100E34
  W8(c->r[6]+0x00000943u,c->r[0]); // 80100E38
  c->r[0]=0u+0x00000000u; // 80100E3C
  W8(c->r[6]+0x0000093Bu,c->r[0]); // 80100E40
L_80100E44:;
  c->r[0]=R8(c->r[6]+0x00000943u); // 80100E44
  cmps(c,0,(int32_t)c->r[0],4); // 80100E48
  if (!crb(c,2)) { goto L_80100E84; } // 80100E4C
  c->r[0]=R8(c->r[6]+0x00000B9Du); // 80100E50
  cmpu(c,0,c->r[0],0x0000001Au); // 80100E54
  if (!crb(c,2)) { goto L_80100E84; } // 80100E58
  c->r[0]=0u+0x00000005u; // 80100E5C
  W8(c->r[6]+0x00000943u,c->r[0]); // 80100E60
  c->r[0]=0u+0x00000000u; // 80100E64
  W8(c->r[6]+0x0000093Bu,c->r[0]); // 80100E68
  goto L_80100E84; // 80100E6C
L_80100E70:;
  c->r[0]=0u+0x000003E8u; // 80100E70
  W16(c->r[6]+0x0000093Eu,c->r[0]); // 80100E74
  c->r[4]=R8(c->r[6]+0x0000093Bu); // 80100E78
  c->r[0]=c->r[4]+0x00000004u; // 80100E7C
  W8(c->r[6]+0x0000093Bu,c->r[0]); // 80100E80
L_80100E84:;
  c->r[0]=R8(c->r[6]+0x0000093Bu); // 80100E84
  cmpu(c,0,c->r[0],0x00000064u); // 80100E88
  if (!crb(c,1)) return; // 80100E8C
  f_80100A30(c); return; // 80100E90
  return; // 80100E94
}

// __wpadCertGetParamCallback
void f_80100EA0(Ctx* __restrict c) {
  trace_call(0x80100EA0u);
  c->r[5]=0u+0x802E0000u; // 80100EA0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80100EA4
  c->r[5]=c->r[5]+0xFFFFB290u; // 80100EA8
  cmps(c,0,(int32_t)c->r[4],0); // 80100EAC
  c->r[4]=R32(c->r[5]+c->r[0]); // 80100EB0
  c->r[6]=0u+0x00000000u; // 80100EB4
  W8(c->r[4]+0x00000941u,c->r[6]); // 80100EB8
  if (!crb(c,2)) { goto L_80100FE4; } // 80100EBC
  c->r[9]=c->r[4]|c->r[4]; // 80100EC0
  c->r[10]=0u+0x00000000u; // 80100EC4
  goto L_80100F0C; // 80100EC8
L_80100ECC:;
  c->r[0]=R8(c->r[4]+0x0000093Au); // 80100ECC
  c->r[3]=R32(c->r[4]+0x00000944u); // 80100ED0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80100ED4
  c->r[7]=R8(c->r[9]+0x00000B26u); // 80100ED8
  c->r[0]=c->r[10]+c->r[0]; // 80100EDC
  c->r[6]=R8(c->r[9]+0x00000B25u); // 80100EE0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80100EE4
  c->r[8]=R8(c->r[9]+0x00000B27u); // 80100EE8
  c->r[5]=R8(c->r[9]+0x00000B24u); // 80100EEC
  c->r[3]=c->r[3]+c->r[0]; // 80100EF0
  c->r[5]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[5]&~0x0000FF00u); // 80100EF4
  c->r[9]=c->r[9]+0x00000004u; // 80100EF8
  c->r[5]=(rotl(c->r[7],16)&0x00FF0000u)|(c->r[5]&~0x00FF0000u); // 80100EFC
  c->r[10]=c->r[10]+0x00000001u; // 80100F00
  c->r[5]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80100F04
  W32(c->r[3]+0x00000004u,c->r[5]); // 80100F08
L_80100F0C:;
  c->r[0]=R16(c->r[4]+0x00000B70u); // 80100F0C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80100F10
  cmpu(c,0,c->r[10],c->r[0]); // 80100F14
  if (crb(c,0)) { IRQCHK(c); goto L_80100ECC; } // 80100F18
  c->r[5]=0u+0x00000000u; // 80100F1C
  W8(c->r[4]+0x0000093Bu,c->r[5]); // 80100F20
  c->r[3]=R8(c->r[4]+0x0000093Au); // 80100F24
  c->r[0]=R16(c->r[4]+0x00000B70u); // 80100F28
  c->r[0]=c->r[3]+c->r[0]; // 80100F2C
  W8(c->r[4]+0x0000093Au,c->r[0]); // 80100F30
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80100F34
  cmpu(c,0,c->r[0],0x00000040u); // 80100F38
  if (!crb(c,0)) { goto L_80100F48; } // 80100F3C
  W16(c->r[4]+0x0000093Eu,c->r[5]); // 80100F40
  return; // 80100F44
L_80100F48:;
  c->r[0]=0u+0x00000004u; // 80100F48
  c->r[7]=0u+0x00000000u; // 80100F4C
  c->r[5]=0u+0x00000000u; // 80100F50
  c->ctr=c->r[0]; // 80100F54
L_80100F58:;
  c->r[6]=R32(c->r[4]+0x00000944u); // 80100F58
  c->r[3]=c->r[6]+c->r[5]; // 80100F5C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80100F60
  cmps(c,0,(int32_t)c->r[0],0); // 80100F64
  if (crb(c,2)) { goto L_80100F74; } // 80100F68
  c->r[0]=c->r[7]+0x00000001u; // 80100F6C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80100F70
L_80100F74:;
  c->r[6]=R32(c->r[4]+0x00000944u); // 80100F74
  c->r[5]=c->r[5]+0x00000004u; // 80100F78
  c->r[3]=c->r[6]+c->r[5]; // 80100F7C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80100F80
  cmps(c,0,(int32_t)c->r[0],0); // 80100F84
  if (crb(c,2)) { goto L_80100F94; } // 80100F88
  c->r[0]=c->r[7]+0x00000002u; // 80100F8C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80100F90
L_80100F94:;
  c->r[6]=R32(c->r[4]+0x00000944u); // 80100F94
  c->r[5]=c->r[5]+0x00000004u; // 80100F98
  c->r[3]=c->r[6]+c->r[5]; // 80100F9C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80100FA0
  cmps(c,0,(int32_t)c->r[0],0); // 80100FA4
  if (crb(c,2)) { goto L_80100FB4; } // 80100FA8
  c->r[0]=c->r[7]+0x00000003u; // 80100FAC
  W32(c->r[6]+0x00000000u,c->r[0]); // 80100FB0
L_80100FB4:;
  c->r[6]=R32(c->r[4]+0x00000944u); // 80100FB4
  c->r[5]=c->r[5]+0x00000004u; // 80100FB8
  c->r[3]=c->r[6]+c->r[5]; // 80100FBC
  c->r[0]=R32(c->r[3]+0x00000004u); // 80100FC0
  cmps(c,0,(int32_t)c->r[0],0); // 80100FC4
  if (crb(c,2)) { goto L_80100FD4; } // 80100FC8
  c->r[0]=c->r[7]+0x00000004u; // 80100FCC
  W32(c->r[6]+0x00000000u,c->r[0]); // 80100FD0
L_80100FD4:;
  c->r[5]=c->r[5]+0x00000004u; // 80100FD4
  c->r[7]=c->r[7]+0x00000004u; // 80100FD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80100F58; } // 80100FDC
  return; // 80100FE0
L_80100FE4:;
  c->r[5]=R8(c->r[4]+0x0000093Bu); // 80100FE4
  cmpu(c,0,c->r[5],0x00000001u); // 80100FE8
  c->r[0]=c->r[5]+0x00000001u; // 80100FEC
  W8(c->r[4]+0x0000093Bu,c->r[0]); // 80100FF0
  if (!crb(c,0)) { goto L_80101000; } // 80100FF4
  W16(c->r[4]+0x0000093Eu,c->r[6]); // 80100FF8
  return; // 80100FFC
L_80101000:;
  f_80100A30(c); return; // 80101000
  return; // 80101004
}

// __wpadCertVerifyParamY
void f_80101010(Ctx* __restrict c) {
  trace_call(0x80101010u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101010
  c->r[0]=c->lr; // 80101014
  c->r[4]=0u+0x802E0000u; // 80101018
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8010101C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80101020
  c->r[4]=c->r[4]+0xFFFFB290u; // 80101024
  W32(c->r[1]+0x000000CCu,c->r[31]); // 80101028
  W32(c->r[1]+0x000000C8u,c->r[30]); // 8010102C
  W32(c->r[1]+0x000000C4u,c->r[29]); // 80101030
  c->r[29]=c->r[3]|c->r[3]; // 80101034
  W32(c->r[1]+0x000000C0u,c->r[28]); // 80101038
  c->r[30]=R32(c->r[4]+c->r[0]); // 8010103C
  c->r[0]=R8(c->r[30]+0x0000093Au); // 80101040
  cmpu(c,0,c->r[0],0x00000040u); // 80101044
  if (!crb(c,0)) { goto L_801011E0; } // 80101048
  c->r[0]=c->r[30]+0x000009D8u; // 8010104C
  W32(c->r[30]+0x00000944u,c->r[0]); // 80101050
  c->r[6]=0u+0x80100000u; // 80101054
  c->r[3]=0u+0x00000040u; // 80101058
  c->r[4]=R8(c->r[30]+0x0000093Au); // 8010105C
  c->r[6]=c->r[6]+0x00000EA0u; // 80101060
  c->r[7]=0u+0x00000017u; // 80101064
  c->r[0]=0u+0x00000006u; // 80101068
  c->r[4]=c->r[4]+0x04A40000u; // 8010106C
  W16(c->r[1]+0x00000008u,c->r[3]); // 80101070
  c->r[4]=c->r[4]+0x00000050u; // 80101074
  c->r[3]=c->r[1]+0x00000044u; // 80101078
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8010107C
  c->r[4]=c->r[1]+0x0000000Cu; // 80101080
  c->r[5]=0u+0x00000004u; // 80101084
  W32(c->r[1]+0x00000040u,c->r[7]); // 80101088
  W16(c->r[1]+0x0000005Au,c->r[0]); // 8010108C
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 80101090
  c->lr=0x80101098u; f_80004338(c); // 80101094
  c->r[3]=c->r[1]+0x00000048u; // 80101098
  c->r[4]=c->r[1]+0x00000008u; // 8010109C
  c->r[5]=0u+0x00000002u; // 801010A0
  c->lr=0x801010A8u; f_80004338(c); // 801010A4
  c->r[0]=R16(c->r[1]+0x00000008u); // 801010A8
  c->r[31]=c->r[30]+0x00000B24u; // 801010AC
  W16(c->r[1]+0x00000060u,c->r[0]); // 801010B0
  c->r[12]=R32(c->r[1]+0x0000000Cu); // 801010B4
  c->r[11]=R32(c->r[1]+0x00000040u); // 801010B8
  c->r[10]=R32(c->r[1]+0x00000044u); // 801010BC
  c->r[9]=R32(c->r[1]+0x00000048u); // 801010C0
  c->r[8]=R32(c->r[1]+0x0000004Cu); // 801010C4
  c->r[7]=R32(c->r[1]+0x00000050u); // 801010C8
  c->r[6]=R32(c->r[1]+0x00000054u); // 801010CC
  c->r[5]=R32(c->r[1]+0x00000058u); // 801010D0
  c->r[4]=R32(c->r[1]+0x00000060u); // 801010D4
  c->r[3]=R32(c->r[1]+0x00000068u); // 801010D8
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 801010DC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801010E0
  W32(c->r[1]+0x00000064u,c->r[12]); // 801010E4
  W32(c->r[1]+0x00000010u,c->r[11]); // 801010E8
  W32(c->r[1]+0x00000014u,c->r[10]); // 801010EC
  W32(c->r[1]+0x00000018u,c->r[9]); // 801010F0
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801010F4
  W32(c->r[1]+0x00000020u,c->r[7]); // 801010F8
  W32(c->r[1]+0x00000024u,c->r[6]); // 801010FC
  W32(c->r[1]+0x00000028u,c->r[5]); // 80101100
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80101104
  W32(c->r[1]+0x00000030u,c->r[4]); // 80101108
  W32(c->r[1]+0x00000034u,c->r[12]); // 8010110C
  W32(c->r[1]+0x00000038u,c->r[3]); // 80101110
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80101114
  c->lr=0x8010111Cu; f_800B087C(c); // 80101118
  c->r[31]=c->r[3]|c->r[3]; // 8010111C
  c->lr=0x80101124u; f_800B087C(c); // 80101120
  c->r[4]=R8(c->r[30]+0x000005ECu); // 80101124
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101128
  c->r[0]=c->r[0]-c->r[4]; // 8010112C
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[28]); // 80101130
  if (!crb(c,0)) { goto L_80101144; } // 80101134
  c->r[0]=R32(c->r[30]+0x000005F4u); // 80101138
  c->r[0]=c->r[28]+c->r[0]; // 8010113C
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101140
L_80101144:;
  c->lr=0x80101148u; f_800B08A4(c); // 80101144
  c->r[3]=R32(c->r[30]+0x000005F4u); // 80101148
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010114C
  cmpu(c,0,c->r[0],c->r[28]); // 80101150
  if (!crb(c,2)) { goto L_80101164; } // 80101154
  c->r[3]=c->r[31]|c->r[31]; // 80101158
  c->lr=0x80101160u; f_800B08A4(c); // 8010115C
  goto L_801011D8; // 80101160
L_80101164:;
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101164
  c->r[4]=0u+0x00000000u; // 80101168
  c->r[3]=R32(c->r[30]+0x000005F0u); // 8010116C
  c->r[5]=0u+0x00000030u; // 80101170
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101174
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101178
  c->r[3]=c->r[3]+c->r[0]; // 8010117C
  c->lr=0x80101184u; f_80004688(c); // 80101180
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101184
  c->r[4]=c->r[1]+0x00000010u; // 80101188
  c->r[3]=R32(c->r[30]+0x000005F0u); // 8010118C
  c->r[5]=0u+0x00000030u; // 80101190
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101194
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101198
  c->r[3]=c->r[3]+c->r[0]; // 8010119C
  c->lr=0x801011A4u; f_80004338(c); // 801011A0
  c->r[0]=R8(c->r[30]+0x000005EDu); // 801011A4
  c->r[3]=c->r[31]|c->r[31]; // 801011A8
  c->r[4]=R32(c->r[30]+0x000005F4u); // 801011AC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801011B0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801011B4
  c->r[5]=c->r[6]-c->r[4]; // 801011B8
  c->r[0]=c->r[6]+0x00000001u; // 801011BC
  c->r[4]=c->r[4]-c->r[6]; // 801011C0
  c->r[4]=~(c->r[5]|c->r[4]); // 801011C4
  c->r[4]=sraw(c,c->r[4],31); // 801011C8
  c->r[0]=c->r[0]&~c->r[4]; // 801011CC
  W8(c->r[30]+0x000005EDu,c->r[0]); // 801011D0
  c->lr=0x801011D8u; f_800B08A4(c); // 801011D4
L_801011D8:;
  c->r[3]=0u+0x00000000u; // 801011D8
  goto L_801011F0; // 801011DC
L_801011E0:;
  c->r[0]=0u+0x00000000u; // 801011E0
  W8(c->r[30]+0x00000941u,c->r[0]); // 801011E4
  c->r[3]=0u+0x00000001u; // 801011E8
  W8(c->r[30]+0x0000093Au,c->r[0]); // 801011EC
L_801011F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801011F0
  if (crb(c,2)) { goto L_801012D4; } // 801011F4
  c->r[3]=0u+0x80260000u; // 801011F8
  c->r[0]=0u+0x00000009u; // 801011FC
  c->r[3]=c->r[3]+0xFFFFBC38u; // 80101200
  c->r[5]=c->r[1]+0x0000006Cu; // 80101204
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 80101208
  c->ctr=c->r[0]; // 8010120C
L_80101210:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80101210
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80101214
  W32(c->r[5]+0x00000004u,c->r[3]); // 80101218
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8010121C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80101210; } // 80101220
  c->r[3]=R32(c->r[1]+0x00000074u); // 80101224
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80101228
  W32(c->r[1]+0x00000074u,c->r[0]); // 8010122C
  c->r[0]=R32(c->r[30]+0x000009D8u); // 80101230
  cmpu(c,0,c->r[0],0x00000001u); // 80101234
  if (crb(c,1)) { goto L_80101248; } // 80101238
  c->r[0]=R32(c->r[30]+0x000009DCu); // 8010123C
  cmpu(c,0,c->r[0],0x00000001u); // 80101240
  if (!crb(c,1)) { goto L_801012CC; } // 80101244
L_80101248:;
  c->r[0]=R8(c->r[30]+0x00000940u); // 80101248
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8010124C
  if (crb(c,2)) { goto L_8010126C; } // 80101250
  c->r[4]=0u+0x80260000u; // 80101254
  c->r[3]=c->r[30]+0x000009D8u; // 80101258
  c->r[4]=c->r[4]+0xFFFFBC38u; // 8010125C
  c->lr=0x80101264u; f_80107F20(c); // 80101260
  cmps(c,0,(int32_t)c->r[3],-1); // 80101264
  if (crb(c,2)) { goto L_8010128C; } // 80101268
L_8010126C:;
  c->r[0]=R8(c->r[30]+0x00000940u); // 8010126C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80101270
  if (!crb(c,2)) { goto L_801012CC; } // 80101274
  c->r[3]=c->r[30]+0x000009D8u; // 80101278
  c->r[4]=c->r[1]+0x00000070u; // 8010127C
  c->lr=0x80101284u; f_80107F20(c); // 80101280
  cmps(c,0,(int32_t)c->r[3],-1); // 80101284
  if (!crb(c,2)) { goto L_801012CC; } // 80101288
L_8010128C:;
  c->r[3]=c->r[30]+0x000009D8u; // 8010128C
  c->r[4]=c->r[30]+0x00000990u; // 80101290
  c->lr=0x80101298u; f_80107F20(c); // 80101294
  cmps(c,0,(int32_t)c->r[3],0); // 80101298
  if (!crb(c,2)) { goto L_801012CC; } // 8010129C
  c->r[3]=c->r[30]+0x000009D8u; // 801012A0
  c->r[4]=0u+0x00000000u; // 801012A4
  c->r[5]=0u+0x00000108u; // 801012A8
  c->lr=0x801012B0u; f_80004688(c); // 801012AC
  c->r[0]=0u+0x00000001u; // 801012B0
  W32(c->r[30]+0x000009D8u,c->r[0]); // 801012B4
  c->r[3]=0u+0x00000007u; // 801012B8
  W8(c->r[30]+0x00000943u,c->r[3]); // 801012BC
  c->r[0]=0u+0x00000000u; // 801012C0
  W16(c->r[30]+0x0000093Eu,c->r[0]); // 801012C4
  goto L_801012D4; // 801012C8
L_801012CC:;
  c->r[3]=c->r[29]|c->r[29]; // 801012CC
  c->lr=0x801012D4u; f_80100A30(c); // 801012D0
L_801012D4:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801012D4
  c->r[31]=R32(c->r[1]+0x000000CCu); // 801012D8
  c->r[30]=R32(c->r[1]+0x000000C8u); // 801012DC
  c->r[29]=R32(c->r[1]+0x000000C4u); // 801012E0
  c->r[28]=R32(c->r[1]+0x000000C0u); // 801012E4
  c->lr=c->r[0]; // 801012E8
  c->r[1]=c->r[1]+0x000000D0u; // 801012EC
  return; // 801012F0
}

// __wpadCertWork
void f_80101300(Ctx* __restrict c) {
  trace_call(0x80101300u);
  {uint32_t ea=c->r[1]+0xFFFFFD30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101300
  c->r[0]=c->lr; // 80101304
  W32(c->r[1]+0x000002D4u,c->r[0]); // 80101308
  c->r[11]=c->r[1]+0x000002D0u; // 8010130C
  c->lr=0x80101314u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80101310
  c->r[5]=0u+0x802E0000u; // 80101314
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80101318
  c->r[5]=c->r[5]+0xFFFFB290u; // 8010131C
  c->r[27]=c->r[3]|c->r[3]; // 80101320
  c->r[28]=R32(c->r[5]+c->r[8]); // 80101324
  c->r[0]=R8(c->r[28]+0x00000942u); // 80101328
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8010132C
  if (!crb(c,2)) { goto L_80101FEC; } // 80101330
  c->r[0]=R8(c->r[28]+0x00000943u); // 80101334
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80101338
  if (crb(c,0)) { goto L_80101FEC; } // 8010133C
  c->r[0]=R32(c->r[28]+0x00000840u); // 80101340
  cmps(c,0,(int32_t)c->r[0],0); // 80101344
  if (crb(c,2)) { goto L_80101FEC; } // 80101348
  c->r[0]=R8(c->r[28]+0x00000941u); // 8010134C
  cmps(c,0,(int32_t)c->r[0],0); // 80101350
  if (!crb(c,2)) { goto L_80101FC8; } // 80101354
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x0000093Eu); // 80101358
  cmps(c,0,(int32_t)c->r[4],0); // 8010135C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80101360
  W16(c->r[28]+0x0000093Eu,c->r[0]); // 80101364
  if (!crb(c,0)) { goto L_80101FC8; } // 80101368
  c->r[31]=0u+0x00000001u; // 8010136C
  W8(c->r[28]+0x00000941u,c->r[31]); // 80101370
  c->r[0]=R8(c->r[28]+0x00000943u); // 80101374
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101378
  cmpu(c,0,c->r[0],0x0000000Bu); // 8010137C
  if (crb(c,1)) { goto L_80101FC8; } // 80101380
  c->r[4]=0u+0x80280000u; // 80101384
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80101388
  c->r[4]=c->r[4]+0xFFFFBAC0u; // 8010138C
  c->r[4]=R32(c->r[4]+c->r[0]); // 80101390
  c->ctr=c->r[4]; // 80101394
  if (true) { switch (c->ctr) { case 0x8010139Cu: goto L_8010139C; case 0x80101520u: goto L_80101520; case 0x8010172Cu: goto L_8010172C; case 0x80101970u: goto L_80101970; case 0x80101AFCu: goto L_80101AFC; case 0x80101C80u: goto L_80101C80; case 0x80101EF4u: goto L_80101EF4; case 0x80101EFCu: goto L_80101EFC; case 0x80101F4Cu: goto L_80101F4C; case 0x80101F54u: goto L_80101F54; case 0x80101F80u: goto L_80101F80; case 0x80101F88u: goto L_80101F88; default: break; } dispatch(c,c->ctr); return; } // 80101398
L_8010139C:;
  c->r[3]=0u+0x04A40000u; // 8010139C
  c->r[6]=0u+0x80100000u; // 801013A0
  c->r[3]=c->r[3]+0x000000F7u; // 801013A4
  c->r[7]=0u+0x00000017u; // 801013A8
  c->r[6]=c->r[6]+0x00000DC0u; // 801013AC
  c->r[0]=0u+0x00000006u; // 801013B0
  W32(c->r[1]+0x00000028u,c->r[3]); // 801013B4
  c->r[3]=c->r[1]+0x00000244u; // 801013B8
  c->r[30]=R32(c->r[5]+c->r[8]); // 801013BC
  c->r[4]=c->r[1]+0x00000028u; // 801013C0
  W16(c->r[1]+0x00000012u,c->r[31]); // 801013C4
  c->r[5]=0u+0x00000004u; // 801013C8
  W32(c->r[1]+0x00000240u,c->r[7]); // 801013CC
  W16(c->r[1]+0x0000025Au,c->r[0]); // 801013D0
  W32(c->r[1]+0x0000026Cu,c->r[6]); // 801013D4
  c->lr=0x801013DCu; f_80004338(c); // 801013D8
  c->r[3]=c->r[1]+0x00000248u; // 801013DC
  c->r[4]=c->r[1]+0x00000012u; // 801013E0
  c->r[5]=0u+0x00000002u; // 801013E4
  c->lr=0x801013ECu; f_80004338(c); // 801013E8
  c->r[0]=R16(c->r[1]+0x00000012u); // 801013EC
  c->r[29]=c->r[30]+0x00000B9Du; // 801013F0
  W16(c->r[1]+0x00000260u,c->r[0]); // 801013F4
  c->r[12]=R32(c->r[1]+0x00000028u); // 801013F8
  c->r[11]=R32(c->r[1]+0x00000240u); // 801013FC
  c->r[10]=R32(c->r[1]+0x00000244u); // 80101400
  c->r[9]=R32(c->r[1]+0x00000248u); // 80101404
  c->r[8]=R32(c->r[1]+0x0000024Cu); // 80101408
  c->r[7]=R32(c->r[1]+0x00000250u); // 8010140C
  c->r[6]=R32(c->r[1]+0x00000254u); // 80101410
  c->r[5]=R32(c->r[1]+0x00000258u); // 80101414
  c->r[4]=R32(c->r[1]+0x00000260u); // 80101418
  c->r[3]=R32(c->r[1]+0x00000268u); // 8010141C
  c->r[0]=R32(c->r[1]+0x0000026Cu); // 80101420
  W32(c->r[1]+0x0000025Cu,c->r[29]); // 80101424
  W32(c->r[1]+0x00000264u,c->r[12]); // 80101428
  W32(c->r[1]+0x00000210u,c->r[11]); // 8010142C
  W32(c->r[1]+0x00000214u,c->r[10]); // 80101430
  W32(c->r[1]+0x00000218u,c->r[9]); // 80101434
  W32(c->r[1]+0x0000021Cu,c->r[8]); // 80101438
  W32(c->r[1]+0x00000220u,c->r[7]); // 8010143C
  W32(c->r[1]+0x00000224u,c->r[6]); // 80101440
  W32(c->r[1]+0x00000228u,c->r[5]); // 80101444
  W32(c->r[1]+0x0000022Cu,c->r[29]); // 80101448
  W32(c->r[1]+0x00000230u,c->r[4]); // 8010144C
  W32(c->r[1]+0x00000234u,c->r[12]); // 80101450
  W32(c->r[1]+0x00000238u,c->r[3]); // 80101454
  W32(c->r[1]+0x0000023Cu,c->r[0]); // 80101458
  c->lr=0x80101460u; f_800B087C(c); // 8010145C
  c->r[31]=c->r[3]|c->r[3]; // 80101460
  c->lr=0x80101468u; f_800B087C(c); // 80101464
  c->r[4]=R8(c->r[30]+0x000005ECu); // 80101468
  c->r[0]=R8(c->r[30]+0x000005EDu); // 8010146C
  c->r[0]=c->r[0]-c->r[4]; // 80101470
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[29]); // 80101474
  if (!crb(c,0)) { goto L_80101488; } // 80101478
  c->r[0]=R32(c->r[30]+0x000005F4u); // 8010147C
  c->r[0]=c->r[29]+c->r[0]; // 80101480
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101484
L_80101488:;
  c->lr=0x8010148Cu; f_800B08A4(c); // 80101488
  c->r[3]=R32(c->r[30]+0x000005F4u); // 8010148C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80101490
  cmpu(c,0,c->r[0],c->r[29]); // 80101494
  if (!crb(c,2)) { goto L_801014A8; } // 80101498
  c->r[3]=c->r[31]|c->r[31]; // 8010149C
  c->lr=0x801014A4u; f_800B08A4(c); // 801014A0
  goto L_80101FC8; // 801014A4
L_801014A8:;
  c->r[0]=R8(c->r[30]+0x000005EDu); // 801014A8
  c->r[4]=0u+0x00000000u; // 801014AC
  c->r[3]=R32(c->r[30]+0x000005F0u); // 801014B0
  c->r[5]=0u+0x00000030u; // 801014B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801014B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801014BC
  c->r[3]=c->r[3]+c->r[0]; // 801014C0
  c->lr=0x801014C8u; f_80004688(c); // 801014C4
  c->r[0]=R8(c->r[30]+0x000005EDu); // 801014C8
  c->r[4]=c->r[1]+0x00000210u; // 801014CC
  c->r[3]=R32(c->r[30]+0x000005F0u); // 801014D0
  c->r[5]=0u+0x00000030u; // 801014D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801014D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801014DC
  c->r[3]=c->r[3]+c->r[0]; // 801014E0
  c->lr=0x801014E8u; f_80004338(c); // 801014E4
  c->r[0]=R8(c->r[30]+0x000005EDu); // 801014E8
  c->r[3]=c->r[31]|c->r[31]; // 801014EC
  c->r[4]=R32(c->r[30]+0x000005F4u); // 801014F0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801014F4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801014F8
  c->r[5]=c->r[6]-c->r[4]; // 801014FC
  c->r[0]=c->r[6]+0x00000001u; // 80101500
  c->r[4]=c->r[4]-c->r[6]; // 80101504
  c->r[4]=~(c->r[5]|c->r[4]); // 80101508
  c->r[4]=sraw(c,c->r[4],31); // 8010150C
  c->r[0]=c->r[0]&~c->r[4]; // 80101510
  W8(c->r[30]+0x000005EDu,c->r[0]); // 80101514
  c->lr=0x8010151Cu; f_800B08A4(c); // 80101518
  goto L_80101FC8; // 8010151C
L_80101520:;
  c->r[29]=R32(c->r[5]+c->r[8]); // 80101520
  c->r[0]=R8(c->r[29]+0x0000093Au); // 80101524
  cmpu(c,0,c->r[0],0x00000040u); // 80101528
  if (!crb(c,0)) { goto L_801016C4; } // 8010152C
  c->r[0]=c->r[29]+0x00000948u; // 80101530
  W32(c->r[29]+0x00000944u,c->r[0]); // 80101534
  c->r[6]=0u+0x80100000u; // 80101538
  c->r[3]=0u+0x00000040u; // 8010153C
  c->r[4]=R8(c->r[29]+0x0000093Au); // 80101540
  c->r[6]=c->r[6]+0x00000EA0u; // 80101544
  c->r[7]=0u+0x00000017u; // 80101548
  c->r[0]=0u+0x00000006u; // 8010154C
  c->r[4]=c->r[4]+0x04A40000u; // 80101550
  W16(c->r[1]+0x00000010u,c->r[3]); // 80101554
  c->r[4]=c->r[4]+0x00000050u; // 80101558
  c->r[3]=c->r[1]+0x000001B4u; // 8010155C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80101560
  c->r[4]=c->r[1]+0x00000024u; // 80101564
  c->r[5]=0u+0x00000004u; // 80101568
  W32(c->r[1]+0x000001B0u,c->r[7]); // 8010156C
  W16(c->r[1]+0x000001CAu,c->r[0]); // 80101570
  W32(c->r[1]+0x000001DCu,c->r[6]); // 80101574
  c->lr=0x8010157Cu; f_80004338(c); // 80101578
  c->r[3]=c->r[1]+0x000001B8u; // 8010157C
  c->r[4]=c->r[1]+0x00000010u; // 80101580
  c->r[5]=0u+0x00000002u; // 80101584
  c->lr=0x8010158Cu; f_80004338(c); // 80101588
  c->r[0]=R16(c->r[1]+0x00000010u); // 8010158C
  c->r[30]=c->r[29]+0x00000B24u; // 80101590
  W16(c->r[1]+0x000001D0u,c->r[0]); // 80101594
  c->r[12]=R32(c->r[1]+0x00000024u); // 80101598
  c->r[11]=R32(c->r[1]+0x000001B0u); // 8010159C
  c->r[10]=R32(c->r[1]+0x000001B4u); // 801015A0
  c->r[9]=R32(c->r[1]+0x000001B8u); // 801015A4
  c->r[8]=R32(c->r[1]+0x000001BCu); // 801015A8
  c->r[7]=R32(c->r[1]+0x000001C0u); // 801015AC
  c->r[6]=R32(c->r[1]+0x000001C4u); // 801015B0
  c->r[5]=R32(c->r[1]+0x000001C8u); // 801015B4
  c->r[4]=R32(c->r[1]+0x000001D0u); // 801015B8
  c->r[3]=R32(c->r[1]+0x000001D8u); // 801015BC
  c->r[0]=R32(c->r[1]+0x000001DCu); // 801015C0
  W32(c->r[1]+0x000001CCu,c->r[30]); // 801015C4
  W32(c->r[1]+0x000001D4u,c->r[12]); // 801015C8
  W32(c->r[1]+0x000001E0u,c->r[11]); // 801015CC
  W32(c->r[1]+0x000001E4u,c->r[10]); // 801015D0
  W32(c->r[1]+0x000001E8u,c->r[9]); // 801015D4
  W32(c->r[1]+0x000001ECu,c->r[8]); // 801015D8
  W32(c->r[1]+0x000001F0u,c->r[7]); // 801015DC
  W32(c->r[1]+0x000001F4u,c->r[6]); // 801015E0
  W32(c->r[1]+0x000001F8u,c->r[5]); // 801015E4
  W32(c->r[1]+0x000001FCu,c->r[30]); // 801015E8
  W32(c->r[1]+0x00000200u,c->r[4]); // 801015EC
  W32(c->r[1]+0x00000204u,c->r[12]); // 801015F0
  W32(c->r[1]+0x00000208u,c->r[3]); // 801015F4
  W32(c->r[1]+0x0000020Cu,c->r[0]); // 801015F8
  c->lr=0x80101600u; f_800B087C(c); // 801015FC
  c->r[30]=c->r[3]|c->r[3]; // 80101600
  c->lr=0x80101608u; f_800B087C(c); // 80101604
  c->r[4]=R8(c->r[29]+0x000005ECu); // 80101608
  c->r[0]=R8(c->r[29]+0x000005EDu); // 8010160C
  c->r[0]=c->r[0]-c->r[4]; // 80101610
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 80101614
  if (!crb(c,0)) { goto L_80101628; } // 80101618
  c->r[0]=R32(c->r[29]+0x000005F4u); // 8010161C
  c->r[0]=c->r[31]+c->r[0]; // 80101620
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101624
L_80101628:;
  c->lr=0x8010162Cu; f_800B08A4(c); // 80101628
  c->r[3]=R32(c->r[29]+0x000005F4u); // 8010162C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80101630
  cmpu(c,0,c->r[0],c->r[31]); // 80101634
  if (!crb(c,2)) { goto L_80101648; } // 80101638
  c->r[3]=c->r[30]|c->r[30]; // 8010163C
  c->lr=0x80101644u; f_800B08A4(c); // 80101640
  goto L_801016BC; // 80101644
L_80101648:;
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101648
  c->r[4]=0u+0x00000000u; // 8010164C
  c->r[3]=R32(c->r[29]+0x000005F0u); // 80101650
  c->r[5]=0u+0x00000030u; // 80101654
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101658
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8010165C
  c->r[3]=c->r[3]+c->r[0]; // 80101660
  c->lr=0x80101668u; f_80004688(c); // 80101664
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101668
  c->r[4]=c->r[1]+0x000001E0u; // 8010166C
  c->r[3]=R32(c->r[29]+0x000005F0u); // 80101670
  c->r[5]=0u+0x00000030u; // 80101674
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101678
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8010167C
  c->r[3]=c->r[3]+c->r[0]; // 80101680
  c->lr=0x80101688u; f_80004338(c); // 80101684
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101688
  c->r[3]=c->r[30]|c->r[30]; // 8010168C
  c->r[4]=R32(c->r[29]+0x000005F4u); // 80101690
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101694
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80101698
  c->r[5]=c->r[6]-c->r[4]; // 8010169C
  c->r[0]=c->r[6]+0x00000001u; // 801016A0
  c->r[4]=c->r[4]-c->r[6]; // 801016A4
  c->r[4]=~(c->r[5]|c->r[4]); // 801016A8
  c->r[4]=sraw(c,c->r[4],31); // 801016AC
  c->r[0]=c->r[0]&~c->r[4]; // 801016B0
  W8(c->r[29]+0x000005EDu,c->r[0]); // 801016B4
  c->lr=0x801016BCu; f_800B08A4(c); // 801016B8
L_801016BC:;
  c->r[3]=0u+0x00000000u; // 801016BC
  goto L_801016D4; // 801016C0
L_801016C4:;
  c->r[0]=0u+0x00000000u; // 801016C4
  W8(c->r[29]+0x00000941u,c->r[0]); // 801016C8
  c->r[3]=0u+0x00000001u; // 801016CC
  W8(c->r[29]+0x0000093Au,c->r[0]); // 801016D0
L_801016D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801016D4
  if (crb(c,2)) { goto L_80101FC8; } // 801016D8
  c->r[0]=R32(c->r[29]+0x00000948u); // 801016DC
  cmpu(c,0,c->r[0],0x00000001u); // 801016E0
  if (crb(c,1)) { goto L_801016F4; } // 801016E4
  c->r[0]=R32(c->r[29]+0x0000094Cu); // 801016E8
  cmpu(c,0,c->r[0],0x00000001u); // 801016EC
  if (!crb(c,1)) { goto L_80101720; } // 801016F0
L_801016F4:;
  c->r[4]=0u+0x80260000u; // 801016F4
  c->r[3]=c->r[29]+0x00000948u; // 801016F8
  c->r[4]=c->r[4]+0xFFFFBC38u; // 801016FC
  c->lr=0x80101704u; f_80107F20(c); // 80101700
  cmps(c,0,(int32_t)c->r[3],-1); // 80101704
  if (!crb(c,2)) { goto L_80101720; } // 80101708
  c->r[0]=0u+0x00000002u; // 8010170C
  W8(c->r[29]+0x00000943u,c->r[0]); // 80101710
  c->r[0]=0u+0x000001F4u; // 80101714
  W16(c->r[29]+0x0000093Eu,c->r[0]); // 80101718
  goto L_80101FC8; // 8010171C
L_80101720:;
  c->r[3]=c->r[27]|c->r[27]; // 80101720
  c->lr=0x80101728u; f_80100A30(c); // 80101724
  goto L_80101FC8; // 80101728
L_8010172C:;
  c->r[29]=R32(c->r[5]+c->r[8]); // 8010172C
  c->r[0]=R8(c->r[29]+0x0000093Au); // 80101730
  cmpu(c,0,c->r[0],0x00000040u); // 80101734
  if (!crb(c,0)) { goto L_801018D0; } // 80101738
  c->r[0]=c->r[29]+0x000009D8u; // 8010173C
  W32(c->r[29]+0x00000944u,c->r[0]); // 80101740
  c->r[6]=0u+0x80100000u; // 80101744
  c->r[3]=0u+0x00000040u; // 80101748
  c->r[4]=R8(c->r[29]+0x0000093Au); // 8010174C
  c->r[6]=c->r[6]+0x00000EA0u; // 80101750
  c->r[7]=0u+0x00000017u; // 80101754
  c->r[0]=0u+0x00000006u; // 80101758
  c->r[4]=c->r[4]+0x04A40000u; // 8010175C
  W16(c->r[1]+0x0000000Eu,c->r[3]); // 80101760
  c->r[4]=c->r[4]+0x00000050u; // 80101764
  c->r[3]=c->r[1]+0x00000154u; // 80101768
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010176C
  c->r[4]=c->r[1]+0x00000020u; // 80101770
  c->r[5]=0u+0x00000004u; // 80101774
  W32(c->r[1]+0x00000150u,c->r[7]); // 80101778
  W16(c->r[1]+0x0000016Au,c->r[0]); // 8010177C
  W32(c->r[1]+0x0000017Cu,c->r[6]); // 80101780
  c->lr=0x80101788u; f_80004338(c); // 80101784
  c->r[3]=c->r[1]+0x00000158u; // 80101788
  c->r[4]=c->r[1]+0x0000000Eu; // 8010178C
  c->r[5]=0u+0x00000002u; // 80101790
  c->lr=0x80101798u; f_80004338(c); // 80101794
  c->r[0]=R16(c->r[1]+0x0000000Eu); // 80101798
  c->r[30]=c->r[29]+0x00000B24u; // 8010179C
  W16(c->r[1]+0x00000170u,c->r[0]); // 801017A0
  c->r[12]=R32(c->r[1]+0x00000020u); // 801017A4
  c->r[11]=R32(c->r[1]+0x00000150u); // 801017A8
  c->r[10]=R32(c->r[1]+0x00000154u); // 801017AC
  c->r[9]=R32(c->r[1]+0x00000158u); // 801017B0
  c->r[8]=R32(c->r[1]+0x0000015Cu); // 801017B4
  c->r[7]=R32(c->r[1]+0x00000160u); // 801017B8
  c->r[6]=R32(c->r[1]+0x00000164u); // 801017BC
  c->r[5]=R32(c->r[1]+0x00000168u); // 801017C0
  c->r[4]=R32(c->r[1]+0x00000170u); // 801017C4
  c->r[3]=R32(c->r[1]+0x00000178u); // 801017C8
  c->r[0]=R32(c->r[1]+0x0000017Cu); // 801017CC
  W32(c->r[1]+0x0000016Cu,c->r[30]); // 801017D0
  W32(c->r[1]+0x00000174u,c->r[12]); // 801017D4
  W32(c->r[1]+0x00000180u,c->r[11]); // 801017D8
  W32(c->r[1]+0x00000184u,c->r[10]); // 801017DC
  W32(c->r[1]+0x00000188u,c->r[9]); // 801017E0
  W32(c->r[1]+0x0000018Cu,c->r[8]); // 801017E4
  W32(c->r[1]+0x00000190u,c->r[7]); // 801017E8
  W32(c->r[1]+0x00000194u,c->r[6]); // 801017EC
  W32(c->r[1]+0x00000198u,c->r[5]); // 801017F0
  W32(c->r[1]+0x0000019Cu,c->r[30]); // 801017F4
  W32(c->r[1]+0x000001A0u,c->r[4]); // 801017F8
  W32(c->r[1]+0x000001A4u,c->r[12]); // 801017FC
  W32(c->r[1]+0x000001A8u,c->r[3]); // 80101800
  W32(c->r[1]+0x000001ACu,c->r[0]); // 80101804
  c->lr=0x8010180Cu; f_800B087C(c); // 80101808
  c->r[30]=c->r[3]|c->r[3]; // 8010180C
  c->lr=0x80101814u; f_800B087C(c); // 80101810
  c->r[4]=R8(c->r[29]+0x000005ECu); // 80101814
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101818
  c->r[0]=c->r[0]-c->r[4]; // 8010181C
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 80101820
  if (!crb(c,0)) { goto L_80101834; } // 80101824
  c->r[0]=R32(c->r[29]+0x000005F4u); // 80101828
  c->r[0]=c->r[31]+c->r[0]; // 8010182C
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101830
L_80101834:;
  c->lr=0x80101838u; f_800B08A4(c); // 80101834
  c->r[3]=R32(c->r[29]+0x000005F4u); // 80101838
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010183C
  cmpu(c,0,c->r[0],c->r[31]); // 80101840
  if (!crb(c,2)) { goto L_80101854; } // 80101844
  c->r[3]=c->r[30]|c->r[30]; // 80101848
  c->lr=0x80101850u; f_800B08A4(c); // 8010184C
  goto L_801018C8; // 80101850
L_80101854:;
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101854
  c->r[4]=0u+0x00000000u; // 80101858
  c->r[3]=R32(c->r[29]+0x000005F0u); // 8010185C
  c->r[5]=0u+0x00000030u; // 80101860
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101864
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101868
  c->r[3]=c->r[3]+c->r[0]; // 8010186C
  c->lr=0x80101874u; f_80004688(c); // 80101870
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101874
  c->r[4]=c->r[1]+0x00000180u; // 80101878
  c->r[3]=R32(c->r[29]+0x000005F0u); // 8010187C
  c->r[5]=0u+0x00000030u; // 80101880
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101884
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101888
  c->r[3]=c->r[3]+c->r[0]; // 8010188C
  c->lr=0x80101894u; f_80004338(c); // 80101890
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101894
  c->r[3]=c->r[30]|c->r[30]; // 80101898
  c->r[4]=R32(c->r[29]+0x000005F4u); // 8010189C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801018A0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801018A4
  c->r[5]=c->r[6]-c->r[4]; // 801018A8
  c->r[0]=c->r[6]+0x00000001u; // 801018AC
  c->r[4]=c->r[4]-c->r[6]; // 801018B0
  c->r[4]=~(c->r[5]|c->r[4]); // 801018B4
  c->r[4]=sraw(c,c->r[4],31); // 801018B8
  c->r[0]=c->r[0]&~c->r[4]; // 801018BC
  W8(c->r[29]+0x000005EDu,c->r[0]); // 801018C0
  c->lr=0x801018C8u; f_800B08A4(c); // 801018C4
L_801018C8:;
  c->r[3]=0u+0x00000000u; // 801018C8
  goto L_801018E0; // 801018CC
L_801018D0:;
  c->r[0]=0u+0x00000000u; // 801018D0
  W8(c->r[29]+0x00000941u,c->r[0]); // 801018D4
  c->r[3]=0u+0x00000001u; // 801018D8
  W8(c->r[29]+0x0000093Au,c->r[0]); // 801018DC
L_801018E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801018E0
  if (crb(c,2)) { goto L_80101FC8; } // 801018E4
  c->r[0]=R32(c->r[29]+0x000009D8u); // 801018E8
  cmpu(c,0,c->r[0],0x00000001u); // 801018EC
  if (crb(c,1)) { goto L_80101900; } // 801018F0
  c->r[0]=R32(c->r[29]+0x000009DCu); // 801018F4
  cmpu(c,0,c->r[0],0x00000001u); // 801018F8
  if (!crb(c,1)) { goto L_80101964; } // 801018FC
L_80101900:;
  c->r[4]=0u+0x80260000u; // 80101900
  c->r[3]=c->r[29]+0x000009D8u; // 80101904
  c->r[4]=c->r[4]+0xFFFFBC38u; // 80101908
  c->lr=0x80101910u; f_80107F20(c); // 8010190C
  cmps(c,0,(int32_t)c->r[3],-1); // 80101910
  if (!crb(c,2)) { goto L_80101964; } // 80101914
  c->r[3]=c->r[29]+0x000009D8u; // 80101918
  c->r[4]=c->r[29]+0x00000948u; // 8010191C
  c->lr=0x80101924u; f_80107F20(c); // 80101920
  cmps(c,0,(int32_t)c->r[3],0); // 80101924
  if (!crb(c,2)) { goto L_80101964; } // 80101928
  c->r[3]=c->r[29]+0x000009D8u; // 8010192C
  c->r[4]=0u+0x00000000u; // 80101930
  c->r[5]=0u+0x00000108u; // 80101934
  c->lr=0x8010193Cu; f_80004688(c); // 80101938
  c->r[0]=0u+0x00000001u; // 8010193C
  W32(c->r[29]+0x000009D8u,c->r[0]); // 80101940
  c->lr=0x80101948u; f_800B490C(c); // 80101944
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 80101948
  W8(c->r[29]+0x00000940u,c->r[0]); // 8010194C
  c->r[3]=0u+0x00000003u; // 80101950
  W8(c->r[29]+0x00000943u,c->r[3]); // 80101954
  c->r[0]=0u+0x00000000u; // 80101958
  W16(c->r[29]+0x0000093Eu,c->r[0]); // 8010195C
  goto L_80101FC8; // 80101960
L_80101964:;
  c->r[3]=c->r[27]|c->r[27]; // 80101964
  c->lr=0x8010196Cu; f_80100A30(c); // 80101968
  goto L_80101FC8; // 8010196C
L_80101970:;
  c->r[29]=R32(c->r[5]+c->r[8]); // 80101970
  c->r[3]=0u+0x04A40000u; // 80101974
  c->r[6]=0u+0x80100000u; // 80101978
  c->r[7]=0u+0x00000016u; // 8010197C
  c->r[4]=R8(c->r[29]+0x00000940u); // 80101980
  c->r[5]=c->r[3]+0x000000F1u; // 80101984
  c->r[6]=c->r[6]+0x00000D50u; // 80101988
  c->r[0]=0u+0x00000015u; // 8010198C
  W8(c->r[1]+0x00000008u,c->r[4]); // 80101990
  c->r[3]=c->r[1]+0x000000F4u; // 80101994
  c->r[4]=c->r[1]+0x0000001Cu; // 80101998
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8010199C
  c->r[5]=0u+0x00000004u; // 801019A0
  W8(c->r[1]+0x00000009u,c->r[31]); // 801019A4
  W32(c->r[1]+0x000000F0u,c->r[7]); // 801019A8
  W16(c->r[1]+0x0000010Au,c->r[0]); // 801019AC
  W32(c->r[1]+0x0000011Cu,c->r[6]); // 801019B0
  c->lr=0x801019B8u; f_80004338(c); // 801019B4
  c->r[3]=c->r[1]+0x000000F8u; // 801019B8
  c->r[4]=c->r[1]+0x00000009u; // 801019BC
  c->r[5]=0u+0x00000001u; // 801019C0
  c->lr=0x801019C8u; f_80004338(c); // 801019C4
  c->r[3]=c->r[1]+0x000000F9u; // 801019C8
  c->r[4]=c->r[1]+0x00000008u; // 801019CC
  c->r[5]=0u+0x00000001u; // 801019D0
  c->lr=0x801019D8u; f_80004338(c); // 801019D4
  c->r[30]=R32(c->r[1]+0x000000F0u); // 801019D8
  c->r[12]=R32(c->r[1]+0x000000F4u); // 801019DC
  c->r[11]=R32(c->r[1]+0x000000F8u); // 801019E0
  c->r[10]=R32(c->r[1]+0x000000FCu); // 801019E4
  c->r[9]=R32(c->r[1]+0x00000100u); // 801019E8
  c->r[8]=R32(c->r[1]+0x00000104u); // 801019EC
  c->r[7]=R32(c->r[1]+0x00000108u); // 801019F0
  c->r[6]=R32(c->r[1]+0x0000010Cu); // 801019F4
  c->r[5]=R32(c->r[1]+0x00000110u); // 801019F8
  c->r[4]=R32(c->r[1]+0x00000114u); // 801019FC
  c->r[3]=R32(c->r[1]+0x00000118u); // 80101A00
  c->r[0]=R32(c->r[1]+0x0000011Cu); // 80101A04
  W32(c->r[1]+0x00000120u,c->r[30]); // 80101A08
  W32(c->r[1]+0x00000124u,c->r[12]); // 80101A0C
  W32(c->r[1]+0x00000128u,c->r[11]); // 80101A10
  W32(c->r[1]+0x0000012Cu,c->r[10]); // 80101A14
  W32(c->r[1]+0x00000130u,c->r[9]); // 80101A18
  W32(c->r[1]+0x00000134u,c->r[8]); // 80101A1C
  W32(c->r[1]+0x00000138u,c->r[7]); // 80101A20
  W32(c->r[1]+0x0000013Cu,c->r[6]); // 80101A24
  W32(c->r[1]+0x00000140u,c->r[5]); // 80101A28
  W32(c->r[1]+0x00000144u,c->r[4]); // 80101A2C
  W32(c->r[1]+0x00000148u,c->r[3]); // 80101A30
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 80101A34
  c->lr=0x80101A3Cu; f_800B087C(c); // 80101A38
  c->r[30]=c->r[3]|c->r[3]; // 80101A3C
  c->lr=0x80101A44u; f_800B087C(c); // 80101A40
  c->r[4]=R8(c->r[29]+0x000005ECu); // 80101A44
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101A48
  c->r[0]=c->r[0]-c->r[4]; // 80101A4C
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 80101A50
  if (!crb(c,0)) { goto L_80101A64; } // 80101A54
  c->r[0]=R32(c->r[29]+0x000005F4u); // 80101A58
  c->r[0]=c->r[31]+c->r[0]; // 80101A5C
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101A60
L_80101A64:;
  c->lr=0x80101A68u; f_800B08A4(c); // 80101A64
  c->r[3]=R32(c->r[29]+0x000005F4u); // 80101A68
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80101A6C
  cmpu(c,0,c->r[0],c->r[31]); // 80101A70
  if (!crb(c,2)) { goto L_80101A84; } // 80101A74
  c->r[3]=c->r[30]|c->r[30]; // 80101A78
  c->lr=0x80101A80u; f_800B08A4(c); // 80101A7C
  goto L_80101FC8; // 80101A80
L_80101A84:;
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101A84
  c->r[4]=0u+0x00000000u; // 80101A88
  c->r[3]=R32(c->r[29]+0x000005F0u); // 80101A8C
  c->r[5]=0u+0x00000030u; // 80101A90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101A94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101A98
  c->r[3]=c->r[3]+c->r[0]; // 80101A9C
  c->lr=0x80101AA4u; f_80004688(c); // 80101AA0
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101AA4
  c->r[4]=c->r[1]+0x00000120u; // 80101AA8
  c->r[3]=R32(c->r[29]+0x000005F0u); // 80101AAC
  c->r[5]=0u+0x00000030u; // 80101AB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101AB4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101AB8
  c->r[3]=c->r[3]+c->r[0]; // 80101ABC
  c->lr=0x80101AC4u; f_80004338(c); // 80101AC0
  c->r[0]=R8(c->r[29]+0x000005EDu); // 80101AC4
  c->r[3]=c->r[30]|c->r[30]; // 80101AC8
  c->r[4]=R32(c->r[29]+0x000005F4u); // 80101ACC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101AD0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80101AD4
  c->r[5]=c->r[6]-c->r[4]; // 80101AD8
  c->r[0]=c->r[6]+0x00000001u; // 80101ADC
  c->r[4]=c->r[4]-c->r[6]; // 80101AE0
  c->r[4]=~(c->r[5]|c->r[4]); // 80101AE4
  c->r[4]=sraw(c,c->r[4],31); // 80101AE8
  c->r[0]=c->r[0]&~c->r[4]; // 80101AEC
  W8(c->r[29]+0x000005EDu,c->r[0]); // 80101AF0
  c->lr=0x80101AF8u; f_800B08A4(c); // 80101AF4
  goto L_80101FC8; // 80101AF8
L_80101AFC:;
  c->r[3]=0u+0x04A40000u; // 80101AFC
  c->r[6]=0u+0x80100000u; // 80101B00
  c->r[3]=c->r[3]+0x000000F7u; // 80101B04
  c->r[7]=0u+0x00000017u; // 80101B08
  c->r[6]=c->r[6]+0x00000DC0u; // 80101B0C
  c->r[0]=0u+0x00000006u; // 80101B10
  W32(c->r[1]+0x00000018u,c->r[3]); // 80101B14
  c->r[3]=c->r[1]+0x000000C4u; // 80101B18
  c->r[30]=R32(c->r[5]+c->r[8]); // 80101B1C
  c->r[4]=c->r[1]+0x00000018u; // 80101B20
  W16(c->r[1]+0x0000000Cu,c->r[31]); // 80101B24
  c->r[5]=0u+0x00000004u; // 80101B28
  W32(c->r[1]+0x000000C0u,c->r[7]); // 80101B2C
  W16(c->r[1]+0x000000DAu,c->r[0]); // 80101B30
  W32(c->r[1]+0x000000ECu,c->r[6]); // 80101B34
  c->lr=0x80101B3Cu; f_80004338(c); // 80101B38
  c->r[3]=c->r[1]+0x000000C8u; // 80101B3C
  c->r[4]=c->r[1]+0x0000000Cu; // 80101B40
  c->r[5]=0u+0x00000002u; // 80101B44
  c->lr=0x80101B4Cu; f_80004338(c); // 80101B48
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80101B4C
  c->r[29]=c->r[30]+0x00000B9Du; // 80101B50
  W16(c->r[1]+0x000000E0u,c->r[0]); // 80101B54
  c->r[12]=R32(c->r[1]+0x00000018u); // 80101B58
  c->r[11]=R32(c->r[1]+0x000000C0u); // 80101B5C
  c->r[10]=R32(c->r[1]+0x000000C4u); // 80101B60
  c->r[9]=R32(c->r[1]+0x000000C8u); // 80101B64
  c->r[8]=R32(c->r[1]+0x000000CCu); // 80101B68
  c->r[7]=R32(c->r[1]+0x000000D0u); // 80101B6C
  c->r[6]=R32(c->r[1]+0x000000D4u); // 80101B70
  c->r[5]=R32(c->r[1]+0x000000D8u); // 80101B74
  c->r[4]=R32(c->r[1]+0x000000E0u); // 80101B78
  c->r[3]=R32(c->r[1]+0x000000E8u); // 80101B7C
  c->r[0]=R32(c->r[1]+0x000000ECu); // 80101B80
  W32(c->r[1]+0x000000DCu,c->r[29]); // 80101B84
  W32(c->r[1]+0x000000E4u,c->r[12]); // 80101B88
  W32(c->r[1]+0x00000090u,c->r[11]); // 80101B8C
  W32(c->r[1]+0x00000094u,c->r[10]); // 80101B90
  W32(c->r[1]+0x00000098u,c->r[9]); // 80101B94
  W32(c->r[1]+0x0000009Cu,c->r[8]); // 80101B98
  W32(c->r[1]+0x000000A0u,c->r[7]); // 80101B9C
  W32(c->r[1]+0x000000A4u,c->r[6]); // 80101BA0
  W32(c->r[1]+0x000000A8u,c->r[5]); // 80101BA4
  W32(c->r[1]+0x000000ACu,c->r[29]); // 80101BA8
  W32(c->r[1]+0x000000B0u,c->r[4]); // 80101BAC
  W32(c->r[1]+0x000000B4u,c->r[12]); // 80101BB0
  W32(c->r[1]+0x000000B8u,c->r[3]); // 80101BB4
  W32(c->r[1]+0x000000BCu,c->r[0]); // 80101BB8
  c->lr=0x80101BC0u; f_800B087C(c); // 80101BBC
  c->r[29]=c->r[3]|c->r[3]; // 80101BC0
  c->lr=0x80101BC8u; f_800B087C(c); // 80101BC4
  c->r[4]=R8(c->r[30]+0x000005ECu); // 80101BC8
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101BCC
  c->r[0]=c->r[0]-c->r[4]; // 80101BD0
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 80101BD4
  if (!crb(c,0)) { goto L_80101BE8; } // 80101BD8
  c->r[0]=R32(c->r[30]+0x000005F4u); // 80101BDC
  c->r[0]=c->r[31]+c->r[0]; // 80101BE0
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101BE4
L_80101BE8:;
  c->lr=0x80101BECu; f_800B08A4(c); // 80101BE8
  c->r[3]=R32(c->r[30]+0x000005F4u); // 80101BEC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80101BF0
  cmpu(c,0,c->r[0],c->r[31]); // 80101BF4
  if (!crb(c,2)) { goto L_80101C08; } // 80101BF8
  c->r[3]=c->r[29]|c->r[29]; // 80101BFC
  c->lr=0x80101C04u; f_800B08A4(c); // 80101C00
  goto L_80101FC8; // 80101C04
L_80101C08:;
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101C08
  c->r[4]=0u+0x00000000u; // 80101C0C
  c->r[3]=R32(c->r[30]+0x000005F0u); // 80101C10
  c->r[5]=0u+0x00000030u; // 80101C14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101C18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101C1C
  c->r[3]=c->r[3]+c->r[0]; // 80101C20
  c->lr=0x80101C28u; f_80004688(c); // 80101C24
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101C28
  c->r[4]=c->r[1]+0x00000090u; // 80101C2C
  c->r[3]=R32(c->r[30]+0x000005F0u); // 80101C30
  c->r[5]=0u+0x00000030u; // 80101C34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101C38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101C3C
  c->r[3]=c->r[3]+c->r[0]; // 80101C40
  c->lr=0x80101C48u; f_80004338(c); // 80101C44
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101C48
  c->r[3]=c->r[29]|c->r[29]; // 80101C4C
  c->r[4]=R32(c->r[30]+0x000005F4u); // 80101C50
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101C54
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80101C58
  c->r[5]=c->r[6]-c->r[4]; // 80101C5C
  c->r[0]=c->r[6]+0x00000001u; // 80101C60
  c->r[4]=c->r[4]-c->r[6]; // 80101C64
  c->r[4]=~(c->r[5]|c->r[4]); // 80101C68
  c->r[4]=sraw(c,c->r[4],31); // 80101C6C
  c->r[0]=c->r[0]&~c->r[4]; // 80101C70
  W8(c->r[30]+0x000005EDu,c->r[0]); // 80101C74
  c->lr=0x80101C7Cu; f_800B08A4(c); // 80101C78
  goto L_80101FC8; // 80101C7C
L_80101C80:;
  c->r[30]=R32(c->r[5]+c->r[8]); // 80101C80
  c->r[0]=R8(c->r[30]+0x0000093Au); // 80101C84
  cmpu(c,0,c->r[0],0x00000040u); // 80101C88
  if (!crb(c,0)) { goto L_80101E24; } // 80101C8C
  c->r[0]=c->r[30]+0x00000990u; // 80101C90
  W32(c->r[30]+0x00000944u,c->r[0]); // 80101C94
  c->r[6]=0u+0x80100000u; // 80101C98
  c->r[3]=0u+0x00000040u; // 80101C9C
  c->r[4]=R8(c->r[30]+0x0000093Au); // 80101CA0
  c->r[6]=c->r[6]+0x00000EA0u; // 80101CA4
  c->r[7]=0u+0x00000017u; // 80101CA8
  c->r[0]=0u+0x00000006u; // 80101CAC
  c->r[4]=c->r[4]+0x04A40000u; // 80101CB0
  W16(c->r[1]+0x0000000Au,c->r[3]); // 80101CB4
  c->r[4]=c->r[4]+0x00000050u; // 80101CB8
  c->r[3]=c->r[1]+0x00000034u; // 80101CBC
  W32(c->r[1]+0x00000014u,c->r[4]); // 80101CC0
  c->r[4]=c->r[1]+0x00000014u; // 80101CC4
  c->r[5]=0u+0x00000004u; // 80101CC8
  W32(c->r[1]+0x00000030u,c->r[7]); // 80101CCC
  W16(c->r[1]+0x0000004Au,c->r[0]); // 80101CD0
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 80101CD4
  c->lr=0x80101CDCu; f_80004338(c); // 80101CD8
  c->r[3]=c->r[1]+0x00000038u; // 80101CDC
  c->r[4]=c->r[1]+0x0000000Au; // 80101CE0
  c->r[5]=0u+0x00000002u; // 80101CE4
  c->lr=0x80101CECu; f_80004338(c); // 80101CE8
  c->r[0]=R16(c->r[1]+0x0000000Au); // 80101CEC
  c->r[29]=c->r[30]+0x00000B24u; // 80101CF0
  W16(c->r[1]+0x00000050u,c->r[0]); // 80101CF4
  c->r[12]=R32(c->r[1]+0x00000014u); // 80101CF8
  c->r[11]=R32(c->r[1]+0x00000030u); // 80101CFC
  c->r[10]=R32(c->r[1]+0x00000034u); // 80101D00
  c->r[9]=R32(c->r[1]+0x00000038u); // 80101D04
  c->r[8]=R32(c->r[1]+0x0000003Cu); // 80101D08
  c->r[7]=R32(c->r[1]+0x00000040u); // 80101D0C
  c->r[6]=R32(c->r[1]+0x00000044u); // 80101D10
  c->r[5]=R32(c->r[1]+0x00000048u); // 80101D14
  c->r[4]=R32(c->r[1]+0x00000050u); // 80101D18
  c->r[3]=R32(c->r[1]+0x00000058u); // 80101D1C
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 80101D20
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 80101D24
  W32(c->r[1]+0x00000054u,c->r[12]); // 80101D28
  W32(c->r[1]+0x00000060u,c->r[11]); // 80101D2C
  W32(c->r[1]+0x00000064u,c->r[10]); // 80101D30
  W32(c->r[1]+0x00000068u,c->r[9]); // 80101D34
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 80101D38
  W32(c->r[1]+0x00000070u,c->r[7]); // 80101D3C
  W32(c->r[1]+0x00000074u,c->r[6]); // 80101D40
  W32(c->r[1]+0x00000078u,c->r[5]); // 80101D44
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 80101D48
  W32(c->r[1]+0x00000080u,c->r[4]); // 80101D4C
  W32(c->r[1]+0x00000084u,c->r[12]); // 80101D50
  W32(c->r[1]+0x00000088u,c->r[3]); // 80101D54
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80101D58
  c->lr=0x80101D60u; f_800B087C(c); // 80101D5C
  c->r[29]=c->r[3]|c->r[3]; // 80101D60
  c->lr=0x80101D68u; f_800B087C(c); // 80101D64
  c->r[4]=R8(c->r[30]+0x000005ECu); // 80101D68
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101D6C
  c->r[0]=c->r[0]-c->r[4]; // 80101D70
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 80101D74
  if (!crb(c,0)) { goto L_80101D88; } // 80101D78
  c->r[0]=R32(c->r[30]+0x000005F4u); // 80101D7C
  c->r[0]=c->r[31]+c->r[0]; // 80101D80
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101D84
L_80101D88:;
  c->lr=0x80101D8Cu; f_800B08A4(c); // 80101D88
  c->r[3]=R32(c->r[30]+0x000005F4u); // 80101D8C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80101D90
  cmpu(c,0,c->r[0],c->r[31]); // 80101D94
  if (!crb(c,2)) { goto L_80101DA8; } // 80101D98
  c->r[3]=c->r[29]|c->r[29]; // 80101D9C
  c->lr=0x80101DA4u; f_800B08A4(c); // 80101DA0
  goto L_80101E1C; // 80101DA4
L_80101DA8:;
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101DA8
  c->r[4]=0u+0x00000000u; // 80101DAC
  c->r[3]=R32(c->r[30]+0x000005F0u); // 80101DB0
  c->r[5]=0u+0x00000030u; // 80101DB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101DB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101DBC
  c->r[3]=c->r[3]+c->r[0]; // 80101DC0
  c->lr=0x80101DC8u; f_80004688(c); // 80101DC4
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101DC8
  c->r[4]=c->r[1]+0x00000060u; // 80101DCC
  c->r[3]=R32(c->r[30]+0x000005F0u); // 80101DD0
  c->r[5]=0u+0x00000030u; // 80101DD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101DD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80101DDC
  c->r[3]=c->r[3]+c->r[0]; // 80101DE0
  c->lr=0x80101DE8u; f_80004338(c); // 80101DE4
  c->r[0]=R8(c->r[30]+0x000005EDu); // 80101DE8
  c->r[3]=c->r[29]|c->r[29]; // 80101DEC
  c->r[4]=R32(c->r[30]+0x000005F4u); // 80101DF0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80101DF4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80101DF8
  c->r[5]=c->r[6]-c->r[4]; // 80101DFC
  c->r[0]=c->r[6]+0x00000001u; // 80101E00
  c->r[4]=c->r[4]-c->r[6]; // 80101E04
  c->r[4]=~(c->r[5]|c->r[4]); // 80101E08
  c->r[4]=sraw(c,c->r[4],31); // 80101E0C
  c->r[0]=c->r[0]&~c->r[4]; // 80101E10
  W8(c->r[30]+0x000005EDu,c->r[0]); // 80101E14
  c->lr=0x80101E1Cu; f_800B08A4(c); // 80101E18
L_80101E1C:;
  c->r[3]=0u+0x00000000u; // 80101E1C
  goto L_80101E34; // 80101E20
L_80101E24:;
  c->r[0]=0u+0x00000000u; // 80101E24
  W8(c->r[30]+0x00000941u,c->r[0]); // 80101E28
  c->r[3]=0u+0x00000001u; // 80101E2C
  W8(c->r[30]+0x0000093Au,c->r[0]); // 80101E30
L_80101E34:;
  cmps(c,0,(int32_t)c->r[3],0); // 80101E34
  if (crb(c,2)) { goto L_80101FC8; } // 80101E38
  c->r[3]=0u+0x80260000u; // 80101E3C
  c->r[0]=0u+0x00000009u; // 80101E40
  c->r[3]=c->r[3]+0xFFFFBC38u; // 80101E44
  c->r[5]=c->r[1]+0x0000026Cu; // 80101E48
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 80101E4C
  c->ctr=c->r[0]; // 80101E50
  c->r[0]=c->r[0]|0x00000000u; // 80101E54
L_80101E58:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80101E58
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80101E5C
  W32(c->r[5]+0x00000004u,c->r[3]); // 80101E60
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80101E64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80101E58; } // 80101E68
  c->r[3]=R32(c->r[1]+0x00000274u); // 80101E6C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80101E70
  W32(c->r[1]+0x00000274u,c->r[0]); // 80101E74
  c->r[0]=R32(c->r[30]+0x00000990u); // 80101E78
  cmpu(c,0,c->r[0],0x00000001u); // 80101E7C
  if (crb(c,1)) { goto L_80101E90; } // 80101E80
  c->r[0]=R32(c->r[30]+0x00000994u); // 80101E84
  cmpu(c,0,c->r[0],0x00000001u); // 80101E88
  if (!crb(c,1)) { goto L_80101EE8; } // 80101E8C
L_80101E90:;
  c->r[0]=R8(c->r[30]+0x00000940u); // 80101E90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80101E94
  if (crb(c,2)) { goto L_80101EB4; } // 80101E98
  c->r[4]=0u+0x80260000u; // 80101E9C
  c->r[3]=c->r[30]+0x00000990u; // 80101EA0
  c->r[4]=c->r[4]+0xFFFFBC38u; // 80101EA4
  c->lr=0x80101EACu; f_80107F20(c); // 80101EA8
  cmps(c,0,(int32_t)c->r[3],-1); // 80101EAC
  if (crb(c,2)) { goto L_80101ED4; } // 80101EB0
L_80101EB4:;
  c->r[0]=R8(c->r[30]+0x00000940u); // 80101EB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80101EB8
  if (!crb(c,2)) { goto L_80101EE8; } // 80101EBC
  c->r[3]=c->r[30]+0x00000990u; // 80101EC0
  c->r[4]=c->r[1]+0x00000270u; // 80101EC4
  c->lr=0x80101ECCu; f_80107F20(c); // 80101EC8
  cmps(c,0,(int32_t)c->r[3],-1); // 80101ECC
  if (!crb(c,2)) { goto L_80101EE8; } // 80101ED0
L_80101ED4:;
  c->r[0]=0u+0x000001F4u; // 80101ED4
  W16(c->r[30]+0x0000093Eu,c->r[0]); // 80101ED8
  c->r[0]=0u+0x00000006u; // 80101EDC
  W8(c->r[30]+0x00000943u,c->r[0]); // 80101EE0
  goto L_80101FC8; // 80101EE4
L_80101EE8:;
  c->r[3]=c->r[27]|c->r[27]; // 80101EE8
  c->lr=0x80101EF0u; f_80100A30(c); // 80101EEC
  goto L_80101FC8; // 80101EF0
L_80101EF4:;
  c->lr=0x80101EF8u; f_80101010(c); // 80101EF4
  goto L_80101FC8; // 80101EF8
L_80101EFC:;
  c->r[29]=R32(c->r[5]+c->r[8]); // 80101EFC
  c->r[0]=R8(c->r[29]+0x00000940u); // 80101F00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80101F04
  if (crb(c,2)) { goto L_80101F24; } // 80101F08
  c->r[5]=0u+0x80260000u; // 80101F0C
  c->r[3]=c->r[29]+0x000009D8u; // 80101F10
  c->r[4]=c->r[29]+0x00000948u; // 80101F14
  c->r[5]=c->r[5]+0xFFFFBC80u; // 80101F18
  c->lr=0x80101F20u; f_80108460(c); // 80101F1C
  goto L_80101F34; // 80101F20
L_80101F24:;
  c->r[3]=c->r[29]+0x000009D8u; // 80101F24
  c->r[4]=c->r[29]+0x00000948u; // 80101F28
  c->r[5]=0u+0x00000048u; // 80101F2C
  c->lr=0x80101F34u; f_80004338(c); // 80101F30
L_80101F34:;
  c->r[3]=0u+0x00000000u; // 80101F34
  W8(c->r[29]+0x00000941u,c->r[3]); // 80101F38
  c->r[0]=0u+0x00000008u; // 80101F3C
  W16(c->r[29]+0x0000093Eu,c->r[3]); // 80101F40
  W8(c->r[29]+0x00000943u,c->r[0]); // 80101F44
  goto L_80101FC8; // 80101F48
L_80101F4C:;
  c->lr=0x80101F50u; f_80100B10(c); // 80101F4C
  goto L_80101FC8; // 80101F50
L_80101F54:;
  c->r[29]=R32(c->r[5]+c->r[8]); // 80101F54
  c->r[4]=c->r[29]+0x00000990u; // 80101F58
  c->r[3]=c->r[29]+0x000009D8u; // 80101F5C
  c->r[5]=c->r[4]|c->r[4]; // 80101F60
  c->lr=0x80101F68u; f_80108460(c); // 80101F64
  c->r[3]=0u+0x00000000u; // 80101F68
  W8(c->r[29]+0x00000941u,c->r[3]); // 80101F6C
  c->r[0]=0u+0x0000000Au; // 80101F70
  W16(c->r[29]+0x0000093Eu,c->r[3]); // 80101F74
  W8(c->r[29]+0x00000943u,c->r[0]); // 80101F78
  goto L_80101FC8; // 80101F7C
L_80101F80:;
  c->lr=0x80101F84u; f_80100C30(c); // 80101F80
  goto L_80101FC8; // 80101F84
L_80101F88:;
  c->r[29]=R32(c->r[5]+c->r[8]); // 80101F88
  c->r[3]=c->r[29]+0x00000948u; // 80101F8C
  c->r[4]=c->r[29]+0x00000990u; // 80101F90
  c->lr=0x80101F98u; f_80107F20(c); // 80101F94
  c->r[4]=0u+0x00000000u; // 80101F98
  W8(c->r[29]+0x00000941u,c->r[4]); // 80101F9C
  cmps(c,0,(int32_t)c->r[3],0); // 80101FA0
  c->r[0]=0u+0x0000000Cu; // 80101FA4
  W16(c->r[29]+0x0000093Eu,c->r[4]); // 80101FA8
  W8(c->r[29]+0x00000943u,c->r[0]); // 80101FAC
  if (!crb(c,2)) { goto L_80101FC0; } // 80101FB0
  W8(c->r[29]+0x00000942u,c->r[31]); // 80101FB4
  W8(c->r[29]+0x00000BA4u,c->r[31]); // 80101FB8
  goto L_80101FC8; // 80101FBC
L_80101FC0:;
  c->r[3]=c->r[27]|c->r[27]; // 80101FC0
  c->lr=0x80101FC8u; f_80100A30(c); // 80101FC4
L_80101FC8:;
  c->r[3]=R16(c->r[28]+0x0000093Cu); // 80101FC8
  cmpu(c,0,c->r[3],0x0000EA60u); // 80101FCC
  c->r[0]=c->r[3]+0x00000001u; // 80101FD0
  W16(c->r[28]+0x0000093Cu,c->r[0]); // 80101FD4
  if (!crb(c,1)) { goto L_80101FEC; } // 80101FD8
  c->r[0]=0u+0x00000078u; // 80101FDC
  W8(c->r[28]+0x00000943u,c->r[0]); // 80101FE0
  c->r[3]=c->r[27]|c->r[27]; // 80101FE4
  c->lr=0x80101FECu; f_80100A30(c); // 80101FE8
L_80101FEC:;
  c->r[11]=c->r[1]+0x000002D0u; // 80101FEC
  c->lr=0x80101FF4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80101FF0
  c->r[0]=R32(c->r[1]+0x000002D4u); // 80101FF4
  c->lr=c->r[0]; // 80101FF8
  c->r[1]=c->r[1]+0x000002D0u; // 80101FFC
  return; // 80102000
}

