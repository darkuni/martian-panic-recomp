#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GetLocation__17SoundScriptEntityFv
void f_800A650C(Ctx* __restrict c) {
  trace_call(0x800A650Cu);
  c->r[4]=R32(c->r[4]+0x00000054u); // 800A650C
  cmps(c,0,(int32_t)c->r[4],0); // 800A6510
  if (!crb(c,2)) { goto L_800A652C; } // 800A6514
  {uint32_t ea=c->r[2]+0xFFFF8EBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6518
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800A651C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800A6520
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800A6524
  return; // 800A6528
L_800A652C:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 800A652C
  c->r[5]=0u+0xFFFFFFFFu; // 800A6530
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800A6534
  c->ctr=c->r[12]; // 800A6538
  if (true) { dispatch(c,c->ctr); return; } // 800A653C
  return; // 800A6540
}

// fn_800A6540
void f_800A6540(Ctx* __restrict c) {
  trace_call(0x800A6540u);
  return; // 800A6540
}

// __ct__20ParticleScriptEntityFPcPv13EAttachedType
void f_800A6544(Ctx* __restrict c) {
  trace_call(0x800A6544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6544
  c->r[0]=c->lr; // 800A6548
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A654C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6550
  c->r[31]=c->r[3]|c->r[3]; // 800A6554
  c->lr=0x800A655Cu; f_800A2990(c); // 800A6558
  c->r[3]=0u+0x80260000u; // 800A655C
  c->r[0]=0u+0x00000000u; // 800A6560
  c->r[3]=c->r[3]+0x00005A28u; // 800A6564
  W32(c->r[31]+0x00000000u,c->r[3]); // 800A6568
  c->r[3]=c->r[31]|c->r[31]; // 800A656C
  W8(c->r[31]+0x00000059u,c->r[0]); // 800A6570
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6574
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6578
  c->lr=c->r[0]; // 800A657C
  c->r[1]=c->r[1]+0x00000010u; // 800A6580
  return; // 800A6584
}

// RunAction__20ParticleScriptEntityFP12ScriptActionP12ScriptEntity
void f_800A6588(Ctx* __restrict c) {
  trace_call(0x800A6588u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6588
  c->r[0]=c->lr; // 800A658C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A6590
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A6594
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A6598
  c->r[30]=c->r[4]|c->r[4]; // 800A659C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A65A0
  c->r[29]=c->r[3]|c->r[3]; // 800A65A4
  c->lr=0x800A65ACu; f_800A3230(c); // 800A65A8
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A65AC
  c->r[3]=c->r[29]|c->r[29]; // 800A65B0
  c->r[12]=R32(c->r[12]+0x00000030u); // 800A65B4
  c->ctr=c->r[12]; // 800A65B8
  if (true) { c->lr=0x800A65C0u; dispatch(c,c->ctr); } // 800A65BC
  cmps(c,0,(int32_t)c->r[3],0); // 800A65C0
  if (crb(c,2)) { goto L_800A6694; } // 800A65C4
  c->r[31]=R32(c->r[29]+0x00000054u); // 800A65C8
  cmps(c,0,(int32_t)c->r[31],0); // 800A65CC
  if (crb(c,2)) { goto L_800A6694; } // 800A65D0
  c->r[0]=R32(c->r[30]+0x00000008u); // 800A65D4
  cmps(c,0,(int32_t)c->r[0],9); // 800A65D8
  if (crb(c,2)) { goto L_800A65EC; } // 800A65DC
  cmps(c,0,(int32_t)c->r[0],24); // 800A65E0
  if (crb(c,2)) { goto L_800A6680; } // 800A65E4
  goto L_800A6694; // 800A65E8
L_800A65EC:;
  c->r[0]=R8(c->r[29]+0x00000059u); // 800A65EC
  cmps(c,0,(int32_t)c->r[0],0); // 800A65F0
  if (crb(c,2)) { goto L_800A6668; } // 800A65F4
  c->r[0]=R32(c->r[13]+0xFFFF8AE0u); // 800A65F8
  cmps(c,0,(int32_t)c->r[0],0); // 800A65FC
  if (!crb(c,2)) { goto L_800A6638; } // 800A6600
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A6604
  cmps(c,0,(int32_t)c->r[0],0); // 800A6608
  if (!crb(c,2)) { goto L_800A6618; } // 800A660C
  c->lr=0x800A6614u; f_80080758(c); // 800A6610
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A6614
L_800A6618:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A6618
  c->r[4]=0u+0x80260000u; // 800A661C
  c->r[4]=c->r[4]+0x00001BA0u; // 800A6620
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6624
  c->r[12]=R32(c->r[12]+0x00000034u); // 800A6628
  c->ctr=c->r[12]; // 800A662C
  if (true) { c->lr=0x800A6634u; dispatch(c,c->ctr); } // 800A6630
  W32(c->r[13]+0xFFFF8AE0u,c->r[3]); // 800A6634
L_800A6638:;
  c->r[3]=R32(c->r[13]+0xFFFF8AE0u); // 800A6638
  c->r[4]=0u+0x00000000u; // 800A663C
  c->r[3]=c->r[3]+0x00010000u; // 800A6640
  c->r[0]=R8(c->r[3]+0xFFFF82DEu); // 800A6644
  cmps(c,0,(int32_t)c->r[0],0); // 800A6648
  if (crb(c,2)) { goto L_800A6660; } // 800A664C
  c->r[0]=R8(c->r[3]+0xFFFF82DCu); // 800A6650
  cmps(c,0,(int32_t)c->r[0],0); // 800A6654
  if (crb(c,2)) { goto L_800A6660; } // 800A6658
  c->r[4]=0u+0x00000001u; // 800A665C
L_800A6660:;
  cmps(c,0,(int32_t)c->r[4],0); // 800A6660
  if (!crb(c,2)) { goto L_800A6694; } // 800A6664
L_800A6668:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800A6668
  c->r[3]=c->r[31]|c->r[31]; // 800A666C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800A6670
  c->ctr=c->r[12]; // 800A6674
  if (true) { c->lr=0x800A667Cu; dispatch(c,c->ctr); } // 800A6678
  goto L_800A6694; // 800A667C
L_800A6680:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800A6680
  c->r[3]=c->r[31]|c->r[31]; // 800A6684
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A6688
  c->ctr=c->r[12]; // 800A668C
  if (true) { c->lr=0x800A6694u; dispatch(c,c->ctr); } // 800A6690
L_800A6694:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A6694
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A6698
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A669C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A66A0
  c->lr=c->r[0]; // 800A66A4
  c->r[1]=c->r[1]+0x00000020u; // 800A66A8
  return; // 800A66AC
}

// GetLocation__20ParticleScriptEntityFv
void f_800A66B0(Ctx* __restrict c) {
  trace_call(0x800A66B0u);
  c->r[4]=R32(c->r[4]+0x00000054u); // 800A66B0
  cmps(c,0,(int32_t)c->r[4],0); // 800A66B4
  if (!crb(c,2)) { goto L_800A66D0; } // 800A66B8
  {uint32_t ea=c->r[2]+0xFFFF8EBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A66BC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800A66C0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800A66C4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800A66C8
  return; // 800A66CC
L_800A66D0:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 800A66D0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800A66D4
  c->ctr=c->r[12]; // 800A66D8
  if (true) { dispatch(c,c->ctr); return; } // 800A66DC
  return; // 800A66E0
}

// fn_800A66E0
void f_800A66E0(Ctx* __restrict c) {
  trace_call(0x800A66E0u);
  return; // 800A66E0
}

// GetLocation__21AnnouncerScriptEntityFv
void f_800A66E4(Ctx* __restrict c) {
  trace_call(0x800A66E4u);
  {uint32_t ea=c->r[2]+0xFFFF8EBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A66E4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800A66E8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800A66EC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800A66F0
  return; // 800A66F4
}

// __dt__21AnnouncerScriptEntityFv
void f_800A66F8(Ctx* __restrict c) {
  trace_call(0x800A66F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A66F8
  c->r[0]=c->lr; // 800A66FC
  cmps(c,0,(int32_t)c->r[3],0); // 800A6700
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A6704
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A6708
  c->r[29]=c->r[3]|c->r[3]; // 800A670C
  c->r[30]=c->r[4]|c->r[4]; // 800A6710
  if (crb(c,2)) { goto L_800A6998; } // 800A6714
  c->r[31]=R32(c->r[3]+0x0000005Cu); // 800A6718
  c->r[4]=0u+0x80260000u; // 800A671C
  c->r[4]=c->r[4]+0x00005AC4u; // 800A6720
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A6724
  cmps(c,0,(int32_t)c->r[31],0); // 800A6728
  if (crb(c,2)) { goto L_800A6974; } // 800A672C
  if (crb(c,2)) { goto L_800A6974; } // 800A6730
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6734
  cmps(c,0,(int32_t)c->r[0],0); // 800A6738
  if (!crb(c,2)) { goto L_800A6748; } // 800A673C
  c->lr=0x800A6744u; f_800838DC(c); // 800A6740
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6744
L_800A6748:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6748
  c->r[4]=R32(c->r[31]+0x00000000u); // 800A674C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6750
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A6754
  c->ctr=c->r[12]; // 800A6758
  if (true) { c->lr=0x800A6760u; dispatch(c,c->ctr); } // 800A675C
  c->r[28]=0u+0x00000000u; // 800A6760
  W32(c->r[31]+0x00000000u,c->r[28]); // 800A6764
  c->r[27]=0u+0x00000000u; // 800A6768
  c->r[26]=0u+0x00000000u; // 800A676C
L_800A6770:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6770
  cmps(c,0,(int32_t)c->r[0],0); // 800A6774
  if (!crb(c,2)) { goto L_800A6784; } // 800A6778
  c->lr=0x800A6780u; f_800838DC(c); // 800A677C
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6780
L_800A6784:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6784
  c->r[4]=c->r[31]+c->r[26]; // 800A6788
  c->r[4]=R32(c->r[4]+0x00000004u); // 800A678C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6790
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A6794
  c->ctr=c->r[12]; // 800A6798
  if (true) { c->lr=0x800A67A0u; dispatch(c,c->ctr); } // 800A679C
  c->r[27]=c->r[27]+0x00000001u; // 800A67A0
  c->r[3]=c->r[31]+c->r[26]; // 800A67A4
  cmps(c,0,(int32_t)c->r[27],3); // 800A67A8
  W32(c->r[3]+0x00000004u,c->r[28]); // 800A67AC
  c->r[26]=c->r[26]+0x00000004u; // 800A67B0
  if (crb(c,0)) { IRQCHK(c); goto L_800A6770; } // 800A67B4
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A67B8
  cmps(c,0,(int32_t)c->r[0],0); // 800A67BC
  if (!crb(c,2)) { goto L_800A67CC; } // 800A67C0
  c->lr=0x800A67C8u; f_800838DC(c); // 800A67C4
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A67C8
L_800A67CC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A67CC
  c->r[4]=R32(c->r[31]+0x00000010u); // 800A67D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A67D4
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A67D8
  c->ctr=c->r[12]; // 800A67DC
  if (true) { c->lr=0x800A67E4u; dispatch(c,c->ctr); } // 800A67E0
  c->r[0]=0u+0x00000000u; // 800A67E4
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A67E8
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A67EC
  cmps(c,0,(int32_t)c->r[0],0); // 800A67F0
  if (!crb(c,2)) { goto L_800A6800; } // 800A67F4
  c->lr=0x800A67FCu; f_800838DC(c); // 800A67F8
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A67FC
L_800A6800:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6800
  c->r[4]=R32(c->r[31]+0x00000014u); // 800A6804
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6808
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A680C
  c->ctr=c->r[12]; // 800A6810
  if (true) { c->lr=0x800A6818u; dispatch(c,c->ctr); } // 800A6814
  c->r[28]=0u+0x00000000u; // 800A6818
  W32(c->r[31]+0x00000014u,c->r[28]); // 800A681C
  c->r[27]=0u+0x00000000u; // 800A6820
  c->r[26]=0u+0x00000000u; // 800A6824
L_800A6828:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6828
  cmps(c,0,(int32_t)c->r[0],0); // 800A682C
  if (!crb(c,2)) { goto L_800A683C; } // 800A6830
  c->lr=0x800A6838u; f_800838DC(c); // 800A6834
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6838
L_800A683C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A683C
  c->r[4]=c->r[31]+c->r[26]; // 800A6840
  c->r[4]=R32(c->r[4]+0x00000018u); // 800A6844
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6848
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A684C
  c->ctr=c->r[12]; // 800A6850
  if (true) { c->lr=0x800A6858u; dispatch(c,c->ctr); } // 800A6854
  c->r[27]=c->r[27]+0x00000001u; // 800A6858
  c->r[3]=c->r[31]+c->r[26]; // 800A685C
  cmps(c,0,(int32_t)c->r[27],3); // 800A6860
  W32(c->r[3]+0x00000018u,c->r[28]); // 800A6864
  c->r[26]=c->r[26]+0x00000004u; // 800A6868
  if (crb(c,0)) { IRQCHK(c); goto L_800A6828; } // 800A686C
  c->r[27]=0u+0x00000000u; // 800A6870
  c->r[26]=0u+0x00000000u; // 800A6874
  c->r[28]=0u+0x00000000u; // 800A6878
L_800A687C:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A687C
  cmps(c,0,(int32_t)c->r[0],0); // 800A6880
  if (!crb(c,2)) { goto L_800A6890; } // 800A6884
  c->lr=0x800A688Cu; f_800838DC(c); // 800A6888
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A688C
L_800A6890:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6890
  c->r[4]=c->r[31]+c->r[26]; // 800A6894
  c->r[4]=R32(c->r[4]+0x00000024u); // 800A6898
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A689C
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A68A0
  c->ctr=c->r[12]; // 800A68A4
  if (true) { c->lr=0x800A68ACu; dispatch(c,c->ctr); } // 800A68A8
  c->r[27]=c->r[27]+0x00000001u; // 800A68AC
  c->r[3]=c->r[31]+c->r[26]; // 800A68B0
  cmps(c,0,(int32_t)c->r[27],3); // 800A68B4
  W32(c->r[3]+0x00000024u,c->r[28]); // 800A68B8
  c->r[26]=c->r[26]+0x00000004u; // 800A68BC
  if (crb(c,0)) { IRQCHK(c); goto L_800A687C; } // 800A68C0
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A68C4
  cmps(c,0,(int32_t)c->r[0],0); // 800A68C8
  if (!crb(c,2)) { goto L_800A68D8; } // 800A68CC
  c->lr=0x800A68D4u; f_80078EC8(c); // 800A68D0
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A68D4
L_800A68D8:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A68D8
  c->r[4]=R32(c->r[31]+0x00000030u); // 800A68DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A68E0
  c->r[12]=R32(c->r[12]+0x00000034u); // 800A68E4
  c->ctr=c->r[12]; // 800A68E8
  if (true) { c->lr=0x800A68F0u; dispatch(c,c->ctr); } // 800A68EC
  c->r[0]=0u+0x00000000u; // 800A68F0
  W32(c->r[31]+0x00000030u,c->r[0]); // 800A68F4
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A68F8
  cmps(c,0,(int32_t)c->r[0],0); // 800A68FC
  if (!crb(c,2)) { goto L_800A690C; } // 800A6900
  c->lr=0x800A6908u; f_80078EC8(c); // 800A6904
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A6908
L_800A690C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A690C
  c->r[4]=R32(c->r[31]+0x00000034u); // 800A6910
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6914
  c->r[12]=R32(c->r[12]+0x00000024u); // 800A6918
  c->ctr=c->r[12]; // 800A691C
  if (true) { c->lr=0x800A6924u; dispatch(c,c->ctr); } // 800A6920
  c->r[0]=0u+0x00000000u; // 800A6924
  W32(c->r[31]+0x00000034u,c->r[0]); // 800A6928
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A692C
  cmps(c,0,(int32_t)c->r[0],0); // 800A6930
  if (!crb(c,2)) { goto L_800A6940; } // 800A6934
  c->lr=0x800A693Cu; f_80078EC8(c); // 800A6938
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A693C
L_800A6940:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A6940
  c->r[4]=R32(c->r[31]+0x00000038u); // 800A6944
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6948
  c->r[12]=R32(c->r[12]+0x00000024u); // 800A694C
  c->ctr=c->r[12]; // 800A6950
  if (true) { c->lr=0x800A6958u; dispatch(c,c->ctr); } // 800A6954
  c->r[0]=0u+0x00000000u; // 800A6958
  W32(c->r[31]+0x00000038u,c->r[0]); // 800A695C
  c->r[3]=c->r[31]+0x0000007Cu; // 800A6960
  c->r[4]=0u+0xFFFFFFFFu; // 800A6964
  c->lr=0x800A696Cu; f_80073BD8(c); // 800A6968
  c->r[3]=c->r[31]|c->r[31]; // 800A696C
  c->lr=0x800A6974u; f_8008DE54(c); // 800A6970
L_800A6974:;
  c->r[0]=0u+0x00000000u; // 800A6974
  W32(c->r[29]+0x0000005Cu,c->r[0]); // 800A6978
  c->r[3]=c->r[29]|c->r[29]; // 800A697C
  c->r[4]=0u+0x00000000u; // 800A6980
  c->lr=0x800A6988u; f_800A2AD4(c); // 800A6984
  cmps(c,0,(int32_t)c->r[30],0); // 800A6988
  if (!crb(c,1)) { goto L_800A6998; } // 800A698C
  c->r[3]=c->r[29]|c->r[29]; // 800A6990
  c->lr=0x800A6998u; f_8008DE54(c); // 800A6994
L_800A6998:;
  c->r[3]=c->r[29]|c->r[29]; // 800A6998
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A699C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A69A0
  c->lr=c->r[0]; // 800A69A4
  c->r[1]=c->r[1]+0x00000020u; // 800A69A8
  return; // 800A69AC
}

// __dt__12MPScriptCoreFv
void f_800A69B0(Ctx* __restrict c) {
  trace_call(0x800A69B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A69B0
  c->r[0]=c->lr; // 800A69B4
  cmps(c,0,(int32_t)c->r[3],0); // 800A69B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A69BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A69C0
  c->r[31]=c->r[4]|c->r[4]; // 800A69C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A69C8
  c->r[30]=c->r[3]|c->r[3]; // 800A69CC
  if (crb(c,2)) { goto L_800A69EC; } // 800A69D0
  c->r[4]=0u+0x00000000u; // 800A69D4
  c->lr=0x800A69DCu; f_800A3464(c); // 800A69D8
  cmps(c,0,(int32_t)c->r[31],0); // 800A69DC
  if (!crb(c,1)) { goto L_800A69EC; } // 800A69E0
  c->r[3]=c->r[30]|c->r[30]; // 800A69E4
  c->lr=0x800A69ECu; f_8008DE54(c); // 800A69E8
L_800A69EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800A69EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A69F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A69F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A69F8
  c->lr=c->r[0]; // 800A69FC
  c->r[1]=c->r[1]+0x00000010u; // 800A6A00
  return; // 800A6A04
}

// __dt__18CameraScriptEntityFv
void f_800A6A08(Ctx* __restrict c) {
  trace_call(0x800A6A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6A08
  c->r[0]=c->lr; // 800A6A0C
  cmps(c,0,(int32_t)c->r[3],0); // 800A6A10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6A14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6A18
  c->r[31]=c->r[4]|c->r[4]; // 800A6A1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6A20
  c->r[30]=c->r[3]|c->r[3]; // 800A6A24
  if (crb(c,2)) { goto L_800A6A44; } // 800A6A28
  c->r[4]=0u+0x00000000u; // 800A6A2C
  c->lr=0x800A6A34u; f_800A2AD4(c); // 800A6A30
  cmps(c,0,(int32_t)c->r[31],0); // 800A6A34
  if (!crb(c,1)) { goto L_800A6A44; } // 800A6A38
  c->r[3]=c->r[30]|c->r[30]; // 800A6A3C
  c->lr=0x800A6A44u; f_8008DE54(c); // 800A6A40
L_800A6A44:;
  c->r[3]=c->r[30]|c->r[30]; // 800A6A44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6A48
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A6A4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6A50
  c->lr=c->r[0]; // 800A6A54
  c->r[1]=c->r[1]+0x00000010u; // 800A6A58
  return; // 800A6A5C
}

// __dt__19SpawnerScriptEntityFv
void f_800A6A60(Ctx* __restrict c) {
  trace_call(0x800A6A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6A60
  c->r[0]=c->lr; // 800A6A64
  cmps(c,0,(int32_t)c->r[3],0); // 800A6A68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6A6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6A70
  c->r[31]=c->r[4]|c->r[4]; // 800A6A74
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6A78
  c->r[30]=c->r[3]|c->r[3]; // 800A6A7C
  if (crb(c,2)) { goto L_800A6A9C; } // 800A6A80
  c->r[4]=0u+0x00000000u; // 800A6A84
  c->lr=0x800A6A8Cu; f_800A2AD4(c); // 800A6A88
  cmps(c,0,(int32_t)c->r[31],0); // 800A6A8C
  if (!crb(c,1)) { goto L_800A6A9C; } // 800A6A90
  c->r[3]=c->r[30]|c->r[30]; // 800A6A94
  c->lr=0x800A6A9Cu; f_8008DE54(c); // 800A6A98
L_800A6A9C:;
  c->r[3]=c->r[30]|c->r[30]; // 800A6A9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6AA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A6AA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6AA8
  c->lr=c->r[0]; // 800A6AAC
  c->r[1]=c->r[1]+0x00000010u; // 800A6AB0
  return; // 800A6AB4
}

// __dt__22ActionNodeScriptEntityFv
void f_800A6AB8(Ctx* __restrict c) {
  trace_call(0x800A6AB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6AB8
  c->r[0]=c->lr; // 800A6ABC
  cmps(c,0,(int32_t)c->r[3],0); // 800A6AC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6AC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6AC8
  c->r[31]=c->r[4]|c->r[4]; // 800A6ACC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6AD0
  c->r[30]=c->r[3]|c->r[3]; // 800A6AD4
  if (crb(c,2)) { goto L_800A6AF4; } // 800A6AD8
  c->r[4]=0u+0x00000000u; // 800A6ADC
  c->lr=0x800A6AE4u; f_800A2AD4(c); // 800A6AE0
  cmps(c,0,(int32_t)c->r[31],0); // 800A6AE4
  if (!crb(c,1)) { goto L_800A6AF4; } // 800A6AE8
  c->r[3]=c->r[30]|c->r[30]; // 800A6AEC
  c->lr=0x800A6AF4u; f_8008DE54(c); // 800A6AF0
L_800A6AF4:;
  c->r[3]=c->r[30]|c->r[30]; // 800A6AF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6AF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A6AFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6B00
  c->lr=c->r[0]; // 800A6B04
  c->r[1]=c->r[1]+0x00000010u; // 800A6B08
  return; // 800A6B0C
}

// __dt__23DynamicMeshScriptEntityFv
void f_800A6B10(Ctx* __restrict c) {
  trace_call(0x800A6B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6B10
  c->r[0]=c->lr; // 800A6B14
  cmps(c,0,(int32_t)c->r[3],0); // 800A6B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6B20
  c->r[31]=c->r[4]|c->r[4]; // 800A6B24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6B28
  c->r[30]=c->r[3]|c->r[3]; // 800A6B2C
  if (crb(c,2)) { goto L_800A6B4C; } // 800A6B30
  c->r[4]=0u+0x00000000u; // 800A6B34
  c->lr=0x800A6B3Cu; f_800A2AD4(c); // 800A6B38
  cmps(c,0,(int32_t)c->r[31],0); // 800A6B3C
  if (!crb(c,1)) { goto L_800A6B4C; } // 800A6B40
  c->r[3]=c->r[30]|c->r[30]; // 800A6B44
  c->lr=0x800A6B4Cu; f_8008DE54(c); // 800A6B48
L_800A6B4C:;
  c->r[3]=c->r[30]|c->r[30]; // 800A6B4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6B50
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A6B54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6B58
  c->lr=c->r[0]; // 800A6B5C
  c->r[1]=c->r[1]+0x00000010u; // 800A6B60
  return; // 800A6B64
}

// __dt__17SoundScriptEntityFv
void f_800A6B68(Ctx* __restrict c) {
  trace_call(0x800A6B68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6B68
  c->r[0]=c->lr; // 800A6B6C
  cmps(c,0,(int32_t)c->r[3],0); // 800A6B70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6B74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6B78
  c->r[31]=c->r[4]|c->r[4]; // 800A6B7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6B80
  c->r[30]=c->r[3]|c->r[3]; // 800A6B84
  if (crb(c,2)) { goto L_800A6BA4; } // 800A6B88
  c->r[4]=0u+0x00000000u; // 800A6B8C
  c->lr=0x800A6B94u; f_800A2AD4(c); // 800A6B90
  cmps(c,0,(int32_t)c->r[31],0); // 800A6B94
  if (!crb(c,1)) { goto L_800A6BA4; } // 800A6B98
  c->r[3]=c->r[30]|c->r[30]; // 800A6B9C
  c->lr=0x800A6BA4u; f_8008DE54(c); // 800A6BA0
L_800A6BA4:;
  c->r[3]=c->r[30]|c->r[30]; // 800A6BA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6BA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A6BAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6BB0
  c->lr=c->r[0]; // 800A6BB4
  c->r[1]=c->r[1]+0x00000010u; // 800A6BB8
  return; // 800A6BBC
}

// __dt__20ParticleScriptEntityFv
void f_800A6BC0(Ctx* __restrict c) {
  trace_call(0x800A6BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6BC0
  c->r[0]=c->lr; // 800A6BC4
  cmps(c,0,(int32_t)c->r[3],0); // 800A6BC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6BCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6BD0
  c->r[31]=c->r[4]|c->r[4]; // 800A6BD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6BD8
  c->r[30]=c->r[3]|c->r[3]; // 800A6BDC
  if (crb(c,2)) { goto L_800A6BFC; } // 800A6BE0
  c->r[4]=0u+0x00000000u; // 800A6BE4
  c->lr=0x800A6BECu; f_800A2AD4(c); // 800A6BE8
  cmps(c,0,(int32_t)c->r[31],0); // 800A6BEC
  if (!crb(c,1)) { goto L_800A6BFC; } // 800A6BF0
  c->r[3]=c->r[30]|c->r[30]; // 800A6BF4
  c->lr=0x800A6BFCu; f_8008DE54(c); // 800A6BF8
L_800A6BFC:;
  c->r[3]=c->r[30]|c->r[30]; // 800A6BFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6C00
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A6C04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6C08
  c->lr=c->r[0]; // 800A6C0C
  c->r[1]=c->r[1]+0x00000010u; // 800A6C10
  return; // 800A6C14
}

// __ct__10PopupStateFv
void f_800A6C18(Ctx* __restrict c) {
  trace_call(0x800A6C18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6C18
  c->r[0]=c->lr; // 800A6C1C
  c->r[4]=0u+0x80260000u; // 800A6C20
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A6C24
  c->r[4]=c->r[4]+0x00005BA8u; // 800A6C28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A6C2C
  c->r[31]=c->r[3]|c->r[3]; // 800A6C30
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A6C34
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A6C38
  c->r[29]=0u+0x00000000u; // 800A6C3C
  W8(c->r[3]+0x00000024u,c->r[29]); // 800A6C40
  W8(c->r[3]+0x00000025u,c->r[29]); // 800A6C44
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A6C48
  c->r[3]=c->r[3]+0x00000034u; // 800A6C4C
  c->lr=0x800A6C54u; f_80073B7C(c); // 800A6C50
  c->r[3]=c->r[31]+0x00000040u; // 800A6C54
  c->lr=0x800A6C5Cu; f_80073B7C(c); // 800A6C58
  c->r[3]=c->r[31]+0x0000004Cu; // 800A6C5C
  c->lr=0x800A6C64u; f_80073B7C(c); // 800A6C60
  c->r[3]=c->r[31]+0x00000058u; // 800A6C64
  c->lr=0x800A6C6Cu; f_80073B7C(c); // 800A6C68
  c->r[3]=c->r[31]+0x00000080u; // 800A6C6C
  c->lr=0x800A6C74u; f_80074518(c); // 800A6C70
  c->r[3]=c->r[31]+0x000015A0u; // 800A6C74
  c->lr=0x800A6C7Cu; f_80074518(c); // 800A6C78
  c->r[3]=c->r[31]+0x00002AC0u; // 800A6C7C
  c->lr=0x800A6C84u; f_80074518(c); // 800A6C80
  W32(c->r[13]+0xFFFF8C30u,c->r[31]); // 800A6C84
  c->r[30]=0u+0x80260000u; // 800A6C88
  c->r[3]=c->r[31]+0x00000040u; // 800A6C8C
  W32(c->r[31]+0x00000028u,c->r[29]); // 800A6C90
  c->r[4]=c->r[30]+0xFFFFA580u; // 800A6C94
  c->lr=0x800A6C9Cu; f_80073C88(c); // 800A6C98
  c->r[30]=c->r[30]+0xFFFFA580u; // 800A6C9C
  c->r[3]=c->r[31]+0x0000004Cu; // 800A6CA0
  c->r[4]=c->r[30]+0x00000003u; // 800A6CA4
  c->lr=0x800A6CACu; f_80073C88(c); // 800A6CA8
  c->r[3]=c->r[31]+0x00000058u; // 800A6CAC
  c->r[4]=c->r[30]+0x00000007u; // 800A6CB0
  c->lr=0x800A6CB8u; f_80073C88(c); // 800A6CB4
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6CB8
  cmps(c,0,(int32_t)c->r[0],0); // 800A6CBC
  if (!crb(c,2)) { goto L_800A6CCC; } // 800A6CC0
  c->lr=0x800A6CC8u; f_800838DC(c); // 800A6CC4
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6CC8
L_800A6CCC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6CCC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6CD0
  c->r[12]=R32(c->r[12]+0x000000ACu); // 800A6CD4
  c->ctr=c->r[12]; // 800A6CD8
  if (true) { c->lr=0x800A6CE0u; dispatch(c,c->ctr); } // 800A6CDC
  W32(c->r[31]+0x00000064u,c->r[3]); // 800A6CE0
  c->r[4]=0u+0x80260000u; // 800A6CE4
  c->r[4]=c->r[4]+0xFFFFA580u; // 800A6CE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6CEC
  c->r[4]=c->r[4]+0x0000000Au; // 800A6CF0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800A6CF4
  c->ctr=c->r[12]; // 800A6CF8
  if (true) { c->lr=0x800A6D00u; dispatch(c,c->ctr); } // 800A6CFC
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6D00
  cmps(c,0,(int32_t)c->r[0],0); // 800A6D04
  if (!crb(c,2)) { goto L_800A6D14; } // 800A6D08
  c->lr=0x800A6D10u; f_800838DC(c); // 800A6D0C
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6D10
L_800A6D14:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6D14
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6D18
  c->r[12]=R32(c->r[12]+0x000000ACu); // 800A6D1C
  c->ctr=c->r[12]; // 800A6D20
  if (true) { c->lr=0x800A6D28u; dispatch(c,c->ctr); } // 800A6D24
  W32(c->r[31]+0x00000068u,c->r[3]); // 800A6D28
  c->r[4]=0u+0x80260000u; // 800A6D2C
  c->r[4]=c->r[4]+0xFFFFA580u; // 800A6D30
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6D34
  c->r[4]=c->r[4]+0x00000029u; // 800A6D38
  c->r[12]=R32(c->r[12]+0x00000010u); // 800A6D3C
  c->ctr=c->r[12]; // 800A6D40
  if (true) { c->lr=0x800A6D48u; dispatch(c,c->ctr); } // 800A6D44
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6D48
  cmps(c,0,(int32_t)c->r[0],0); // 800A6D4C
  if (!crb(c,2)) { goto L_800A6D5C; } // 800A6D50
  c->lr=0x800A6D58u; f_800838DC(c); // 800A6D54
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6D58
L_800A6D5C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6D5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6D60
  c->r[12]=R32(c->r[12]+0x000000ACu); // 800A6D64
  c->ctr=c->r[12]; // 800A6D68
  if (true) { c->lr=0x800A6D70u; dispatch(c,c->ctr); } // 800A6D6C
  W32(c->r[31]+0x0000006Cu,c->r[3]); // 800A6D70
  c->r[4]=0u+0x80260000u; // 800A6D74
  c->r[4]=c->r[4]+0xFFFFA580u; // 800A6D78
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6D7C
  c->r[4]=c->r[4]+0x0000004Cu; // 800A6D80
  c->r[12]=R32(c->r[12]+0x00000010u); // 800A6D84
  c->ctr=c->r[12]; // 800A6D88
  if (true) { c->lr=0x800A6D90u; dispatch(c,c->ctr); } // 800A6D8C
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6D90
  cmps(c,0,(int32_t)c->r[0],0); // 800A6D94
  if (!crb(c,2)) { goto L_800A6DA4; } // 800A6D98
  c->lr=0x800A6DA0u; f_800838DC(c); // 800A6D9C
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6DA0
L_800A6DA4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6DA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6DA8
  c->r[12]=R32(c->r[12]+0x000000ACu); // 800A6DAC
  c->ctr=c->r[12]; // 800A6DB0
  if (true) { c->lr=0x800A6DB8u; dispatch(c,c->ctr); } // 800A6DB4
  W32(c->r[31]+0x00000070u,c->r[3]); // 800A6DB8
  c->r[4]=0u+0x80260000u; // 800A6DBC
  c->r[4]=c->r[4]+0xFFFFA580u; // 800A6DC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6DC4
  c->r[4]=c->r[4]+0x00000029u; // 800A6DC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800A6DCC
  c->ctr=c->r[12]; // 800A6DD0
  if (true) { c->lr=0x800A6DD8u; dispatch(c,c->ctr); } // 800A6DD4
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6DD8
  cmps(c,0,(int32_t)c->r[0],0); // 800A6DDC
  if (!crb(c,2)) { goto L_800A6DEC; } // 800A6DE0
  c->lr=0x800A6DE8u; f_800838DC(c); // 800A6DE4
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6DE8
L_800A6DEC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6DEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6DF0
  c->r[12]=R32(c->r[12]+0x000000ACu); // 800A6DF4
  c->ctr=c->r[12]; // 800A6DF8
  if (true) { c->lr=0x800A6E00u; dispatch(c,c->ctr); } // 800A6DFC
  W32(c->r[31]+0x00000074u,c->r[3]); // 800A6E00
  c->r[4]=0u+0x80260000u; // 800A6E04
  c->r[4]=c->r[4]+0xFFFFA580u; // 800A6E08
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6E0C
  c->r[4]=c->r[4]+0x0000004Cu; // 800A6E10
  c->r[12]=R32(c->r[12]+0x00000010u); // 800A6E14
  c->ctr=c->r[12]; // 800A6E18
  if (true) { c->lr=0x800A6E20u; dispatch(c,c->ctr); } // 800A6E1C
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6E20
  cmps(c,0,(int32_t)c->r[0],0); // 800A6E24
  if (!crb(c,2)) { goto L_800A6E34; } // 800A6E28
  c->lr=0x800A6E30u; f_800838DC(c); // 800A6E2C
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6E30
L_800A6E34:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6E34
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6E38
  c->r[12]=R32(c->r[12]+0x000000ACu); // 800A6E3C
  c->ctr=c->r[12]; // 800A6E40
  if (true) { c->lr=0x800A6E48u; dispatch(c,c->ctr); } // 800A6E44
  W32(c->r[31]+0x00000078u,c->r[3]); // 800A6E48
  c->r[4]=0u+0x80260000u; // 800A6E4C
  c->r[4]=c->r[4]+0xFFFFA580u; // 800A6E50
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6E54
  c->r[4]=c->r[4]+0x00000029u; // 800A6E58
  c->r[12]=R32(c->r[12]+0x00000010u); // 800A6E5C
  c->ctr=c->r[12]; // 800A6E60
  if (true) { c->lr=0x800A6E68u; dispatch(c,c->ctr); } // 800A6E64
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6E68
  cmps(c,0,(int32_t)c->r[0],0); // 800A6E6C
  if (!crb(c,2)) { goto L_800A6E7C; } // 800A6E70
  c->lr=0x800A6E78u; f_800838DC(c); // 800A6E74
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6E78
L_800A6E7C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6E7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6E80
  c->r[12]=R32(c->r[12]+0x000000ACu); // 800A6E84
  c->ctr=c->r[12]; // 800A6E88
  if (true) { c->lr=0x800A6E90u; dispatch(c,c->ctr); } // 800A6E8C
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 800A6E90
  c->r[30]=0u+0x80260000u; // 800A6E94
  c->r[30]=c->r[30]+0xFFFFA580u; // 800A6E98
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6E9C
  c->r[4]=c->r[30]+0x0000004Cu; // 800A6EA0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800A6EA4
  c->ctr=c->r[12]; // 800A6EA8
  if (true) { c->lr=0x800A6EB0u; dispatch(c,c->ctr); } // 800A6EAC
  c->r[3]=c->r[31]+0x00000080u; // 800A6EB0
  c->r[4]=c->r[30]+0x00000070u; // 800A6EB4
  c->r[5]=c->r[30]+0x0000008Cu; // 800A6EB8
  c->r[6]=0u+0x00000006u; // 800A6EBC
  c->r[7]=0u+0x00000000u; // 800A6EC0
  c->lr=0x800A6EC8u; f_800745A8(c); // 800A6EC4
  c->r[3]=c->r[31]+0x000015A0u; // 800A6EC8
  c->r[4]=c->r[30]+0x00000070u; // 800A6ECC
  c->r[5]=c->r[30]+0x0000008Cu; // 800A6ED0
  c->r[6]=0u+0x00000006u; // 800A6ED4
  c->r[7]=0u+0x00000000u; // 800A6ED8
  c->lr=0x800A6EE0u; f_800745A8(c); // 800A6EDC
  c->r[3]=c->r[31]|c->r[31]; // 800A6EE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A6EE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A6EE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A6EEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A6EF0
  c->lr=c->r[0]; // 800A6EF4
  c->r[1]=c->r[1]+0x00000020u; // 800A6EF8
  return; // 800A6EFC
}

// __dt__10PopupStateFv
void f_800A6F00(Ctx* __restrict c) {
  trace_call(0x800A6F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6F00
  c->r[0]=c->lr; // 800A6F04
  cmps(c,0,(int32_t)c->r[3],0); // 800A6F08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A6F0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A6F10
  c->r[31]=c->r[4]|c->r[4]; // 800A6F14
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A6F18
  c->r[30]=c->r[3]|c->r[3]; // 800A6F1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A6F20
  if (crb(c,2)) { goto L_800A7180; } // 800A6F24
  c->r[4]=0u+0x80260000u; // 800A6F28
  c->r[4]=c->r[4]+0x00005BA8u; // 800A6F2C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A6F30
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6F34
  cmps(c,0,(int32_t)c->r[0],0); // 800A6F38
  if (!crb(c,2)) { goto L_800A6F48; } // 800A6F3C
  c->lr=0x800A6F44u; f_800838DC(c); // 800A6F40
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6F44
L_800A6F48:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6F48
  c->r[4]=R32(c->r[30]+0x00000064u); // 800A6F4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6F50
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A6F54
  c->ctr=c->r[12]; // 800A6F58
  if (true) { c->lr=0x800A6F60u; dispatch(c,c->ctr); } // 800A6F5C
  c->r[0]=0u+0x00000000u; // 800A6F60
  W32(c->r[30]+0x00000064u,c->r[0]); // 800A6F64
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6F68
  cmps(c,0,(int32_t)c->r[0],0); // 800A6F6C
  if (!crb(c,2)) { goto L_800A6F7C; } // 800A6F70
  c->lr=0x800A6F78u; f_800838DC(c); // 800A6F74
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6F78
L_800A6F7C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6F7C
  c->r[4]=R32(c->r[30]+0x00000068u); // 800A6F80
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6F84
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A6F88
  c->ctr=c->r[12]; // 800A6F8C
  if (true) { c->lr=0x800A6F94u; dispatch(c,c->ctr); } // 800A6F90
  c->r[0]=0u+0x00000000u; // 800A6F94
  W32(c->r[30]+0x00000068u,c->r[0]); // 800A6F98
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6F9C
  cmps(c,0,(int32_t)c->r[0],0); // 800A6FA0
  if (!crb(c,2)) { goto L_800A6FB0; } // 800A6FA4
  c->lr=0x800A6FACu; f_800838DC(c); // 800A6FA8
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6FAC
L_800A6FB0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6FB0
  c->r[4]=R32(c->r[30]+0x0000006Cu); // 800A6FB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6FB8
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A6FBC
  c->ctr=c->r[12]; // 800A6FC0
  if (true) { c->lr=0x800A6FC8u; dispatch(c,c->ctr); } // 800A6FC4
  c->r[0]=0u+0x00000000u; // 800A6FC8
  W32(c->r[30]+0x0000006Cu,c->r[0]); // 800A6FCC
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A6FD0
  cmps(c,0,(int32_t)c->r[0],0); // 800A6FD4
  if (!crb(c,2)) { goto L_800A6FE4; } // 800A6FD8
  c->lr=0x800A6FE0u; f_800838DC(c); // 800A6FDC
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A6FE0
L_800A6FE4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A6FE4
  c->r[4]=R32(c->r[30]+0x00000070u); // 800A6FE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6FEC
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A6FF0
  c->ctr=c->r[12]; // 800A6FF4
  if (true) { c->lr=0x800A6FFCu; dispatch(c,c->ctr); } // 800A6FF8
  c->r[0]=0u+0x00000000u; // 800A6FFC
  W32(c->r[30]+0x00000070u,c->r[0]); // 800A7000
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A7004
  cmps(c,0,(int32_t)c->r[0],0); // 800A7008
  if (!crb(c,2)) { goto L_800A7018; } // 800A700C
  c->lr=0x800A7014u; f_800838DC(c); // 800A7010
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A7014
L_800A7018:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A7018
  c->r[4]=R32(c->r[30]+0x00000074u); // 800A701C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7020
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A7024
  c->ctr=c->r[12]; // 800A7028
  if (true) { c->lr=0x800A7030u; dispatch(c,c->ctr); } // 800A702C
  c->r[0]=0u+0x00000000u; // 800A7030
  W32(c->r[30]+0x00000074u,c->r[0]); // 800A7034
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A7038
  cmps(c,0,(int32_t)c->r[0],0); // 800A703C
  if (!crb(c,2)) { goto L_800A704C; } // 800A7040
  c->lr=0x800A7048u; f_800838DC(c); // 800A7044
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A7048
L_800A704C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A704C
  c->r[4]=R32(c->r[30]+0x00000078u); // 800A7050
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7054
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A7058
  c->ctr=c->r[12]; // 800A705C
  if (true) { c->lr=0x800A7064u; dispatch(c,c->ctr); } // 800A7060
  c->r[0]=0u+0x00000000u; // 800A7064
  W32(c->r[30]+0x00000078u,c->r[0]); // 800A7068
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A706C
  cmps(c,0,(int32_t)c->r[0],0); // 800A7070
  if (!crb(c,2)) { goto L_800A7080; } // 800A7074
  c->lr=0x800A707Cu; f_800838DC(c); // 800A7078
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A707C
L_800A7080:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A7080
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800A7084
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7088
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800A708C
  c->ctr=c->r[12]; // 800A7090
  if (true) { c->lr=0x800A7098u; dispatch(c,c->ctr); } // 800A7094
  c->r[29]=addc(c,c->r[30],0x00002AC0u,0); cr0(c,c->r[29]); // 800A7098
  c->r[0]=0u+0x00000000u; // 800A709C
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 800A70A0
  if (crb(c,2)) { goto L_800A70C8; } // 800A70A4
  c->r[3]=c->r[29]|c->r[29]; // 800A70A8
  c->lr=0x800A70B0u; f_800747D8(c); // 800A70AC
  c->r[4]=0u+0x80030000u; // 800A70B0
  c->r[3]=c->r[29]+0x00000010u; // 800A70B4
  c->r[4]=c->r[4]+0x00004658u; // 800A70B8
  c->r[5]=0u+0x00000014u; // 800A70BC
  c->r[6]=0u+0x00000100u; // 800A70C0
  c->lr=0x800A70C8u; f_800D4790(c); // 800A70C4
L_800A70C8:;
  c->r[29]=addc(c,c->r[30],0x000015A0u,0); cr0(c,c->r[29]); // 800A70C8
  if (crb(c,2)) { goto L_800A70F0; } // 800A70CC
  c->r[3]=c->r[29]|c->r[29]; // 800A70D0
  c->lr=0x800A70D8u; f_800747D8(c); // 800A70D4
  c->r[4]=0u+0x80030000u; // 800A70D8
  c->r[3]=c->r[29]+0x00000010u; // 800A70DC
  c->r[4]=c->r[4]+0x00004658u; // 800A70E0
  c->r[5]=0u+0x00000014u; // 800A70E4
  c->r[6]=0u+0x00000100u; // 800A70E8
  c->lr=0x800A70F0u; f_800D4790(c); // 800A70EC
L_800A70F0:;
  c->r[29]=addc(c,c->r[30],0x00000080u,0); cr0(c,c->r[29]); // 800A70F0
  if (crb(c,2)) { goto L_800A7118; } // 800A70F4
  c->r[3]=c->r[29]|c->r[29]; // 800A70F8
  c->lr=0x800A7100u; f_800747D8(c); // 800A70FC
  c->r[4]=0u+0x80030000u; // 800A7100
  c->r[3]=c->r[29]+0x00000010u; // 800A7104
  c->r[4]=c->r[4]+0x00004658u; // 800A7108
  c->r[5]=0u+0x00000014u; // 800A710C
  c->r[6]=0u+0x00000100u; // 800A7110
  c->lr=0x800A7118u; f_800D4790(c); // 800A7114
L_800A7118:;
  c->r[3]=c->r[30]+0x00000058u; // 800A7118
  c->r[4]=0u+0xFFFFFFFFu; // 800A711C
  c->lr=0x800A7124u; f_80073BD8(c); // 800A7120
  c->r[3]=c->r[30]+0x0000004Cu; // 800A7124
  c->r[4]=0u+0xFFFFFFFFu; // 800A7128
  c->lr=0x800A7130u; f_80073BD8(c); // 800A712C
  c->r[3]=c->r[30]+0x00000040u; // 800A7130
  c->r[4]=0u+0xFFFFFFFFu; // 800A7134
  c->lr=0x800A713Cu; f_80073BD8(c); // 800A7138
  c->r[3]=c->r[30]+0x00000034u; // 800A713C
  c->r[4]=0u+0xFFFFFFFFu; // 800A7140
  c->lr=0x800A7148u; f_80073BD8(c); // 800A7144
  cmps(c,0,(int32_t)c->r[30],0); // 800A7148
  if (crb(c,2)) { goto L_800A7170; } // 800A714C
  c->r[4]=0u+0x80260000u; // 800A7150
  c->r[3]=c->r[30]|c->r[30]; // 800A7154
  c->r[4]=c->r[4]+0x00002528u; // 800A7158
  W32(c->r[30]+0x00000000u,c->r[4]); // 800A715C
  c->r[12]=R32(c->r[30]+0x00000000u); // 800A7160
  c->r[12]=R32(c->r[12]+0x00000010u); // 800A7164
  c->ctr=c->r[12]; // 800A7168
  if (true) { c->lr=0x800A7170u; dispatch(c,c->ctr); } // 800A716C
L_800A7170:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A7170
  if (!crb(c,1)) { goto L_800A7180; } // 800A7174
  c->r[3]=c->r[30]|c->r[30]; // 800A7178
  c->lr=0x800A7180u; f_8008DE54(c); // 800A717C
L_800A7180:;
  c->r[3]=c->r[30]|c->r[30]; // 800A7180
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A7184
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A7188
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A718C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A7190
  c->lr=c->r[0]; // 800A7194
  c->r[1]=c->r[1]+0x00000020u; // 800A7198
  return; // 800A719C
}

// OnRun__10PopupStateFv
void f_800A71A0(Ctx* __restrict c) {
  trace_call(0x800A71A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A71A0
  c->r[0]=c->lr; // 800A71A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A71A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A71AC
  c->r[31]=0u+0x00000001u; // 800A71B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A71B4
  c->r[30]=c->r[3]|c->r[3]; // 800A71B8
  W8(c->r[3]+0x00000025u,c->r[31]); // 800A71BC
  c->r[0]=R32(c->r[13]+0xFFFF8AF8u); // 800A71C0
  cmps(c,0,(int32_t)c->r[0],0); // 800A71C4
  if (!crb(c,2)) { goto L_800A7200; } // 800A71C8
  c->r[3]=0u+0x00000014u; // 800A71CC
  c->lr=0x800A71D4u; f_8008DC84(c); // 800A71D0
  cmps(c,0,(int32_t)c->r[3],0); // 800A71D4
  if (crb(c,2)) { goto L_800A71FC; } // 800A71D8
  c->r[4]=0u+0x80260000u; // 800A71DC
  c->r[0]=0u+0x00000000u; // 800A71E0
  c->r[4]=c->r[4]+0x00003680u; // 800A71E4
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A71E8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800A71EC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A71F0
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A71F4
  W8(c->r[3]+0x00000004u,c->r[31]); // 800A71F8
L_800A71FC:;
  W32(c->r[13]+0xFFFF8AF8u,c->r[3]); // 800A71FC
L_800A7200:;
  c->r[4]=R32(c->r[13]+0xFFFF8AF8u); // 800A7200
  c->r[31]=0u+0x00000000u; // 800A7204
  c->r[3]=c->r[30]+0x00000034u; // 800A7208
  W8(c->r[4]+0x00000004u,c->r[31]); // 800A720C
  W32(c->r[30]+0x00000028u,c->r[31]); // 800A7210
  c->lr=0x800A7218u; f_80073C44(c); // 800A7214
  {uint32_t ea=c->r[2]+0xFFFF8EC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7218
  c->r[3]=c->r[30]+0x00003FE4u; // 800A721C
  {uint32_t ea=c->r[30]+0x000040E4u; WF32(ea,c->f[0]);} // 800A7220
  c->r[4]=0u+0x00000000u; // 800A7224
  c->r[5]=0u+0x00000100u; // 800A7228
  W32(c->r[30]+0x00003FE0u,c->r[31]); // 800A722C
  c->lr=0x800A7234u; f_80004688(c); // 800A7230
  c->r[5]=0u+0x80260000u; // 800A7234
  c->r[3]=c->r[30]+0x00002AC0u; // 800A7238
  c->r[5]=c->r[5]+0xFFFFA580u; // 800A723C
  c->r[6]=0u+0x00000006u; // 800A7240
  c->r[4]=c->r[5]+0x00000147u; // 800A7244
  c->r[7]=0u+0xFFFFFFF9u; // 800A7248
  c->r[5]=c->r[5]+0x0000008Cu; // 800A724C
  c->lr=0x800A7254u; f_800745A8(c); // 800A7250
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7254
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A7258
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A725C
  c->lr=c->r[0]; // 800A7260
  c->r[1]=c->r[1]+0x00000010u; // 800A7264
  return; // 800A7268
}

// GetInstance__6UICoreFv
void f_800A726C(Ctx* __restrict c) {
  trace_call(0x800A726Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A726C
  c->r[0]=c->lr; // 800A7270
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A7274
  c->r[0]=R32(c->r[13]+0xFFFF8AF8u); // 800A7278
  cmps(c,0,(int32_t)c->r[0],0); // 800A727C
  if (!crb(c,2)) { goto L_800A72BC; } // 800A7280
  c->r[3]=0u+0x00000014u; // 800A7284
  c->lr=0x800A728Cu; f_8008DC84(c); // 800A7288
  cmps(c,0,(int32_t)c->r[3],0); // 800A728C
  if (crb(c,2)) { goto L_800A72B8; } // 800A7290
  c->r[5]=0u+0x80260000u; // 800A7294
  c->r[4]=0u+0x00000000u; // 800A7298
  c->r[5]=c->r[5]+0x00003680u; // 800A729C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A72A0
  c->r[0]=0u+0x00000001u; // 800A72A4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800A72A8
  W32(c->r[3]+0x00000008u,c->r[4]); // 800A72AC
  W32(c->r[3]+0x00000010u,c->r[4]); // 800A72B0
  W8(c->r[3]+0x00000004u,c->r[0]); // 800A72B4
L_800A72B8:;
  W32(c->r[13]+0xFFFF8AF8u,c->r[3]); // 800A72B8
L_800A72BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A72BC
  c->r[3]=R32(c->r[13]+0xFFFF8AF8u); // 800A72C0
  c->lr=c->r[0]; // 800A72C4
  c->r[1]=c->r[1]+0x00000010u; // 800A72C8
  return; // 800A72CC
}

// CreateInstance__6UICoreFv
void f_800A72D0(Ctx* __restrict c) {
  trace_call(0x800A72D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A72D0
  c->r[0]=c->lr; // 800A72D4
  c->r[3]=0u+0x00000014u; // 800A72D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A72DC
  c->lr=0x800A72E4u; f_8008DC84(c); // 800A72E0
  cmps(c,0,(int32_t)c->r[3],0); // 800A72E4
  if (crb(c,2)) { goto L_800A7310; } // 800A72E8
  c->r[5]=0u+0x80260000u; // 800A72EC
  c->r[4]=0u+0x00000000u; // 800A72F0
  c->r[5]=c->r[5]+0x00003680u; // 800A72F4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A72F8
  c->r[0]=0u+0x00000001u; // 800A72FC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800A7300
  W32(c->r[3]+0x00000008u,c->r[4]); // 800A7304
  W32(c->r[3]+0x00000010u,c->r[4]); // 800A7308
  W8(c->r[3]+0x00000004u,c->r[0]); // 800A730C
L_800A7310:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7310
  c->lr=c->r[0]; // 800A7314
  c->r[1]=c->r[1]+0x00000010u; // 800A7318
  return; // 800A731C
}

// __ct__6UICoreFv
void f_800A7320(Ctx* __restrict c) {
  trace_call(0x800A7320u);
  c->r[5]=0u+0x80260000u; // 800A7320
  c->r[4]=0u+0x00000000u; // 800A7324
  c->r[5]=c->r[5]+0x00003680u; // 800A7328
  c->r[0]=0u+0x00000001u; // 800A732C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A7330
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800A7334
  W32(c->r[3]+0x00000008u,c->r[4]); // 800A7338
  W32(c->r[3]+0x00000010u,c->r[4]); // 800A733C
  W8(c->r[3]+0x00000004u,c->r[0]); // 800A7340
  return; // 800A7344
}

// __ct__14List<7UIState>Fv
void f_800A7348(Ctx* __restrict c) {
  trace_call(0x800A7348u);
  c->r[0]=0u+0x00000000u; // 800A7348
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A734C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A7350
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A7354
  return; // 800A7358
}

// Sub__14List<7UIState>FP7UIState
void f_800A735C(Ctx* __restrict c) {
  trace_call(0x800A735Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800A735C
  goto L_800A7378; // 800A7360
L_800A7364:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 800A7364
  cmpu(c,0,c->r[0],c->r[4]); // 800A7368
  if (!crb(c,2)) { goto L_800A7374; } // 800A736C
  goto L_800A7384; // 800A7370
L_800A7374:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 800A7374
L_800A7378:;
  cmps(c,0,(int32_t)c->r[5],0); // 800A7378
  if (!crb(c,2)) { IRQCHK(c); goto L_800A7364; } // 800A737C
  c->r[5]=0u+0x00000000u; // 800A7380
L_800A7384:;
  cmps(c,1,(int32_t)c->r[5],0); // 800A7384
  if (crb(c,6)) return; // 800A7388
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A738C
  c->r[4]=R32(c->r[3]+0x00000008u); // 800A7390
  cmpu(c,0,c->r[5],c->r[0]); // 800A7394
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800A7398
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A739C
  if (!crb(c,2)) { goto L_800A73E8; } // 800A73A0
  c->r[4]=R32(c->r[5]+0x00000000u); // 800A73A4
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A73A8
  cmps(c,0,(int32_t)c->r[4],0); // 800A73AC
  if (crb(c,2)) { goto L_800A73C0; } // 800A73B0
  c->r[0]=0u+0x00000000u; // 800A73B4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800A73B8
  goto L_800A73C8; // 800A73BC
L_800A73C0:;
  c->r[0]=0u+0x00000000u; // 800A73C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A73C4
L_800A73C8:;
  c->r[0]=0u+0x00000000u; // 800A73C8
  W32(c->r[5]+0x00000000u,c->r[0]); // 800A73CC
  cmps(c,0,(int32_t)c->r[5],0); // 800A73D0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800A73D4
  if (crb(c,2)) return; // 800A73D8
  c->r[3]=c->r[5]|c->r[5]; // 800A73DC
  f_8008DE54(c); return; // 800A73E0
  return; // 800A73E4
L_800A73E8:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 800A73E8
  cmps(c,0,(int32_t)c->r[4],0); // 800A73EC
  if (!crb(c,2)) { goto L_800A741C; } // 800A73F0
  c->r[4]=R32(c->r[5]+0x00000004u); // 800A73F4
  c->r[0]=0u+0x00000000u; // 800A73F8
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A73FC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800A7400
  W32(c->r[5]+0x00000000u,c->r[0]); // 800A7404
  W32(c->r[5]+0x00000004u,c->r[0]); // 800A7408
  if (crb(c,6)) return; // 800A740C
  c->r[3]=c->r[5]|c->r[5]; // 800A7410
  f_8008DE54(c); return; // 800A7414
  return; // 800A7418
L_800A741C:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 800A741C
  c->r[0]=0u+0x00000000u; // 800A7420
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A7424
  c->r[3]=R32(c->r[5]+0x00000000u); // 800A7428
  c->r[4]=R32(c->r[5]+0x00000004u); // 800A742C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A7430
  W32(c->r[5]+0x00000000u,c->r[0]); // 800A7434
  W32(c->r[5]+0x00000004u,c->r[0]); // 800A7438
  if (crb(c,6)) return; // 800A743C
  c->r[3]=c->r[5]|c->r[5]; // 800A7440
  f_8008DE54(c); return; // 800A7444
  return; // 800A7448
}

// Seek__14List<7UIState>FP7UIState
void f_800A744C(Ctx* __restrict c) {
  trace_call(0x800A744Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A744C
  goto L_800A7464; // 800A7450
L_800A7454:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A7454
  cmpu(c,0,c->r[0],c->r[4]); // 800A7458
  if (crb(c,2)) return; // 800A745C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A7460
L_800A7464:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A7464
  if (!crb(c,2)) { IRQCHK(c); goto L_800A7454; } // 800A7468
  c->r[3]=0u+0x00000000u; // 800A746C
  return; // 800A7470
}

// __dt__18ListNode<7UIState>Fv
void f_800A7474(Ctx* __restrict c) {
  trace_call(0x800A7474u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7474
  c->r[0]=c->lr; // 800A7478
  cmps(c,0,(int32_t)c->r[3],0); // 800A747C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A7480
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A7484
  c->r[31]=c->r[3]|c->r[3]; // 800A7488
  if (crb(c,2)) { goto L_800A749C; } // 800A748C
  cmps(c,0,(int32_t)c->r[4],0); // 800A7490
  if (!crb(c,1)) { goto L_800A749C; } // 800A7494
  c->lr=0x800A749Cu; f_8008DE54(c); // 800A7498
L_800A749C:;
  c->r[3]=c->r[31]|c->r[31]; // 800A749C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A74A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A74A4
  c->lr=c->r[0]; // 800A74A8
  c->r[1]=c->r[1]+0x00000010u; // 800A74AC
  return; // 800A74B0
}

// OnStop__10PopupStateFv
void f_800A74B4(Ctx* __restrict c) {
  trace_call(0x800A74B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A74B4
  c->r[0]=c->lr; // 800A74B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A74BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A74C0
  c->r[31]=0u+0x00000000u; // 800A74C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A74C8
  c->r[30]=c->r[3]|c->r[3]; // 800A74CC
  W8(c->r[3]+0x00000025u,c->r[31]); // 800A74D0
  c->r[0]=R32(c->r[13]+0xFFFF8AF8u); // 800A74D4
  cmps(c,0,(int32_t)c->r[0],0); // 800A74D8
  if (!crb(c,2)) { goto L_800A7514; } // 800A74DC
  c->r[3]=0u+0x00000014u; // 800A74E0
  c->lr=0x800A74E8u; f_8008DC84(c); // 800A74E4
  cmps(c,0,(int32_t)c->r[3],0); // 800A74E8
  if (crb(c,2)) { goto L_800A7510; } // 800A74EC
  c->r[4]=0u+0x80260000u; // 800A74F0
  c->r[0]=0u+0x00000001u; // 800A74F4
  c->r[4]=c->r[4]+0x00003680u; // 800A74F8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A74FC
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 800A7500
  W32(c->r[3]+0x00000008u,c->r[31]); // 800A7504
  W32(c->r[3]+0x00000010u,c->r[31]); // 800A7508
  W8(c->r[3]+0x00000004u,c->r[0]); // 800A750C
L_800A7510:;
  W32(c->r[13]+0xFFFF8AF8u,c->r[3]); // 800A7510
L_800A7514:;
  c->r[3]=R32(c->r[13]+0xFFFF8AF8u); // 800A7514
  c->r[0]=0u+0x00000001u; // 800A7518
  W8(c->r[3]+0x00000004u,c->r[0]); // 800A751C
  c->r[3]=R32(c->r[13]+0xFFFF8C34u); // 800A7520
  cmps(c,0,(int32_t)c->r[3],0); // 800A7524
  if (crb(c,2)) { goto L_800A754C; } // 800A7528
  c->r[0]=R8(c->r[30]+0x00003FE4u); // 800A752C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A7530
  if (crb(c,2)) { goto L_800A754C; } // 800A7534
  c->r[4]=R32(c->r[3]+0x00000054u); // 800A7538
  c->r[6]=c->r[30]+0x00003FE4u; // 800A753C
  c->r[5]=0u+0x00000000u; // 800A7540
  c->r[7]=0u+0xFFFFFFFFu; // 800A7544
  c->lr=0x800A754Cu; f_80066D18(c); // 800A7548
L_800A754C:;
  c->r[3]=c->r[30]+0x00002AC0u; // 800A754C
  c->lr=0x800A7554u; f_800747D8(c); // 800A7550
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7554
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A7558
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A755C
  c->lr=c->r[0]; // 800A7560
  c->r[1]=c->r[1]+0x00000010u; // 800A7564
  return; // 800A7568
}

// GetFocusedScreen__7UIStateFv
void f_800A756C(Ctx* __restrict c) {
  trace_call(0x800A756Cu);
  c->r[3]=R32(c->r[3]+0x00000054u); // 800A756C
  return; // 800A7570
}

// OnUpdate__10PopupStateFv
void f_800A7574(Ctx* __restrict c) {
  trace_call(0x800A7574u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7574
  c->r[0]=c->lr; // 800A7578
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A757C
  c->r[11]=c->r[1]+0x00000050u; // 800A7580
  c->lr=0x800A7588u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A7584
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A7588
  c->r[27]=c->r[3]|c->r[3]; // 800A758C
  cmps(c,0,(int32_t)c->r[0],0); // 800A7590
  if (!crb(c,2)) { goto L_800A75A0; } // 800A7594
  c->lr=0x800A759Cu; f_80080758(c); // 800A7598
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A759C
L_800A75A0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A75A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A75A4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800A75A8
  c->ctr=c->r[12]; // 800A75AC
  if (true) { c->lr=0x800A75B4u; dispatch(c,c->ctr); } // 800A75B0
  cmpu(c,0,c->r[3],c->r[27]); // 800A75B4
  if (crb(c,2)) { goto L_800A75E8; } // 800A75B8
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A75BC
  cmps(c,0,(int32_t)c->r[0],0); // 800A75C0
  if (!crb(c,2)) { goto L_800A75D0; } // 800A75C4
  c->lr=0x800A75CCu; f_80080758(c); // 800A75C8
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A75CC
L_800A75D0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A75D0
  c->r[4]=c->r[27]+0x00000004u; // 800A75D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A75D8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A75DC
  c->ctr=c->r[12]; // 800A75E0
  if (true) { c->lr=0x800A75E8u; dispatch(c,c->ctr); } // 800A75E4
L_800A75E8:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A75E8
  cmps(c,0,(int32_t)c->r[0],0); // 800A75EC
  if (!crb(c,2)) { goto L_800A75FC; } // 800A75F0
  c->lr=0x800A75F8u; f_800838DC(c); // 800A75F4
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A75F8
L_800A75FC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A75FC
  c->r[4]=c->r[1]+0x00000024u; // 800A7600
  c->r[5]=c->r[1]+0x00000020u; // 800A7604
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7608
  c->r[12]=R32(c->r[12]+0x00000014u); // 800A760C
  c->ctr=c->r[12]; // 800A7610
  if (true) { c->lr=0x800A7618u; dispatch(c,c->ctr); } // 800A7614
  c->r[3]=R32(c->r[27]+0x00000064u); // 800A7618
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A761C
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A7620
  c->ctr=c->r[12]; // 800A7624
  if (true) { c->lr=0x800A762Cu; dispatch(c,c->ctr); } // 800A7628
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A762C
  c->r[4]=R32(c->r[1]+0x00000024u); // 800A7630
  c->r[5]=c->r[0]+c->r[3]; // 800A7634
  c->r[3]=R32(c->r[27]+0x00000064u); // 800A7638
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 800A763C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7640
  c->r[5]=sraw(c,c->r[5],1); // 800A7644
  c->r[0]=c->r[0]+c->r[4]; // 800A7648
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A764C
  c->r[0]=sraw(c,c->r[0],1); // 800A7650
  c->r[25]=c->r[0]-c->r[5]; // 800A7654
  c->ctr=c->r[12]; // 800A7658
  if (true) { c->lr=0x800A7660u; dispatch(c,c->ctr); } // 800A765C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A7660
  c->r[5]=R32(c->r[1]+0x00000020u); // 800A7664
  c->r[6]=c->r[0]+c->r[3]; // 800A7668
  c->r[3]=R32(c->r[27]+0x00000064u); // 800A766C
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 800A7670
  c->r[4]=c->r[25]|c->r[25]; // 800A7674
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7678
  c->r[7]=sraw(c,c->r[6],1); // 800A767C
  c->r[0]=c->r[0]+c->r[5]; // 800A7680
  c->r[6]=0u+0x00000000u; // 800A7684
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A7688
  c->r[0]=sraw(c,c->r[0],1); // 800A768C
  c->r[5]=c->r[0]-c->r[7]; // 800A7690
  c->ctr=c->r[12]; // 800A7694
  if (true) { c->lr=0x800A769Cu; dispatch(c,c->ctr); } // 800A7698
  c->r[3]=c->r[27]+0x00000034u; // 800A769C
  c->lr=0x800A76A4u; f_80074088(c); // 800A76A0
  cmps(c,0,(int32_t)c->r[3],0); // 800A76A4
  if (crb(c,2)) { goto L_800A7704; } // 800A76A8
  c->r[0]=R32(c->r[27]+0x00000028u); // 800A76AC
  cmpu(c,0,c->r[0],0x00000001u); // 800A76B0
  if (crb(c,1)) { goto L_800A76E0; } // 800A76B4
  c->r[3]=c->r[27]+0x00000034u; // 800A76B8
  c->lr=0x800A76C0u; f_80074088(c); // 800A76BC
  c->r[4]=R32(c->r[27]+0x0000002Cu); // 800A76C0
  c->r[6]=c->r[3]|c->r[3]; // 800A76C4
  c->r[5]=R32(c->r[27]+0x00000030u); // 800A76C8
  c->r[3]=c->r[27]+0x00000080u; // 800A76CC
  {uint32_t ea=c->r[27]+0x000040E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A76D0
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 800A76D4
  c->lr=0x800A76DCu; f_80075E08(c); // 800A76D8
  goto L_800A7704; // 800A76DC
L_800A76E0:;
  c->r[3]=c->r[27]+0x00000034u; // 800A76E0
  c->lr=0x800A76E8u; f_80074088(c); // 800A76E4
  c->r[4]=R32(c->r[27]+0x0000002Cu); // 800A76E8
  c->r[6]=c->r[3]|c->r[3]; // 800A76EC
  c->r[5]=R32(c->r[27]+0x00000030u); // 800A76F0
  c->r[3]=c->r[27]+0x000015A0u; // 800A76F4
  {uint32_t ea=c->r[27]+0x000040E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A76F8
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 800A76FC
  c->lr=0x800A7704u; f_80075E08(c); // 800A7700
L_800A7704:;
  c->r[0]=R32(c->r[27]+0x00000028u); // 800A7704
  cmpu(c,0,c->r[0],0x00000001u); // 800A7708
  if (crb(c,1)) { goto L_800A773C; } // 800A770C
  c->r[31]=R8(c->r[27]+0x00000080u); // 800A7710
  c->r[3]=0u+0x00000000u; // 800A7714
  c->r[30]=R8(c->r[27]+0x00000081u); // 800A7718
  c->r[0]=0u+0x000000FFu; // 800A771C
  c->r[29]=R8(c->r[27]+0x00000082u); // 800A7720
  c->r[28]=R8(c->r[27]+0x00000083u); // 800A7724
  W8(c->r[27]+0x00000080u,c->r[3]); // 800A7728
  W8(c->r[27]+0x00000081u,c->r[3]); // 800A772C
  W8(c->r[27]+0x00000082u,c->r[3]); // 800A7730
  W8(c->r[27]+0x00000083u,c->r[0]); // 800A7734
  goto L_800A7764; // 800A7738
L_800A773C:;
  c->r[31]=R8(c->r[27]+0x000015A0u); // 800A773C
  c->r[3]=0u+0x00000000u; // 800A7740
  c->r[30]=R8(c->r[27]+0x000015A1u); // 800A7744
  c->r[0]=0u+0x000000FFu; // 800A7748
  c->r[29]=R8(c->r[27]+0x000015A2u); // 800A774C
  c->r[28]=R8(c->r[27]+0x000015A3u); // 800A7750
  W8(c->r[27]+0x000015A0u,c->r[3]); // 800A7754
  W8(c->r[27]+0x000015A1u,c->r[3]); // 800A7758
  W8(c->r[27]+0x000015A2u,c->r[3]); // 800A775C
  W8(c->r[27]+0x000015A3u,c->r[0]); // 800A7760
L_800A7764:;
  c->r[0]=R32(c->r[27]+0x00000028u); // 800A7764
  cmps(c,0,(int32_t)c->r[0],1); // 800A7768
  if (crb(c,2)) { goto L_800A777C; } // 800A776C
  cmps(c,0,(int32_t)c->r[0],2); // 800A7770
  if (crb(c,2)) { goto L_800A7880; } // 800A7774
  goto L_800A7AB0; // 800A7778
L_800A777C:;
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A777C
  c->r[25]=R32(c->r[27]+0x0000006Cu); // 800A7780
  cmps(c,0,(int32_t)c->r[0],0); // 800A7784
  c->r[26]=R32(c->r[27]+0x00000068u); // 800A7788
  if (!crb(c,2)) { goto L_800A7798; } // 800A778C
  c->lr=0x800A7794u; f_80080758(c); // 800A7790
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A7794
L_800A7798:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A7798
  c->r[4]=c->r[1]+0x00000018u; // 800A779C
  c->r[5]=c->r[1]+0x0000001Cu; // 800A77A0
  c->r[6]=0u+0x00000000u; // 800A77A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A77A8
  c->r[12]=R32(c->r[12]+0x000000B4u); // 800A77AC
  c->ctr=c->r[12]; // 800A77B0
  if (true) { c->lr=0x800A77B8u; dispatch(c,c->ctr); } // 800A77B4
  c->r[0]=R32(c->r[1]+0x00000018u); // 800A77B8
  cmps(c,0,(int32_t)c->r[0],448); // 800A77BC
  if (!crb(c,1)) { goto L_800A783C; } // 800A77C0
  c->r[12]=R32(c->r[26]+0x00000000u); // 800A77C4
  c->r[3]=c->r[26]|c->r[26]; // 800A77C8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A77CC
  c->ctr=c->r[12]; // 800A77D0
  if (true) { c->lr=0x800A77D8u; dispatch(c,c->ctr); } // 800A77D4
  c->r[0]=R32(c->r[1]+0x00000018u); // 800A77D8
  c->r[3]=c->r[3]+0x000001C0u; // 800A77DC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A77E0
  if (!crb(c,0)) { goto L_800A783C; } // 800A77E4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800A77E8
  cmps(c,0,(int32_t)c->r[0],320); // 800A77EC
  if (!crb(c,1)) { goto L_800A783C; } // 800A77F0
  c->r[12]=R32(c->r[26]+0x00000000u); // 800A77F4
  c->r[3]=c->r[26]|c->r[26]; // 800A77F8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A77FC
  c->ctr=c->r[12]; // 800A7800
  if (true) { c->lr=0x800A7808u; dispatch(c,c->ctr); } // 800A7804
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800A7808
  c->r[3]=c->r[3]+0x00000140u; // 800A780C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7810
  if (!crb(c,0)) { goto L_800A783C; } // 800A7814
  c->r[12]=R32(c->r[25]+0x00000000u); // 800A7818
  c->r[3]=c->r[25]|c->r[25]; // 800A781C
  c->r[4]=0u+0x000001C0u; // 800A7820
  c->r[5]=0u+0x00000140u; // 800A7824
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A7828
  c->r[6]=0u+0x00000000u; // 800A782C
  c->ctr=c->r[12]; // 800A7830
  if (true) { c->lr=0x800A7838u; dispatch(c,c->ctr); } // 800A7834
  goto L_800A785C; // 800A7838
L_800A783C:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 800A783C
  c->r[3]=c->r[26]|c->r[26]; // 800A7840
  c->r[4]=0u+0x000001C0u; // 800A7844
  c->r[5]=0u+0x00000140u; // 800A7848
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A784C
  c->r[6]=0u+0x00000000u; // 800A7850
  c->ctr=c->r[12]; // 800A7854
  if (true) { c->lr=0x800A785Cu; dispatch(c,c->ctr); } // 800A7858
L_800A785C:;
  c->r[3]=c->r[27]+0x00000040u; // 800A785C
  c->lr=0x800A7864u; f_80074088(c); // 800A7860
  c->r[6]=c->r[3]|c->r[3]; // 800A7864
  c->r[3]=c->r[27]+0x00002AC0u; // 800A7868
  c->r[4]=0u+0x00000160u; // 800A786C
  c->r[5]=0u+0x0000012Cu; // 800A7870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A7874
  c->lr=0x800A787Cu; f_80075D38(c); // 800A7878
  goto L_800A7AB0; // 800A787C
L_800A7880:;
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A7880
  c->r[26]=R32(c->r[27]+0x00000074u); // 800A7884
  cmps(c,0,(int32_t)c->r[0],0); // 800A7888
  c->r[25]=R32(c->r[27]+0x00000070u); // 800A788C
  if (!crb(c,2)) { goto L_800A789C; } // 800A7890
  c->lr=0x800A7898u; f_80080758(c); // 800A7894
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A7898
L_800A789C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A789C
  c->r[4]=c->r[1]+0x00000010u; // 800A78A0
  c->r[5]=c->r[1]+0x00000014u; // 800A78A4
  c->r[6]=0u+0x00000000u; // 800A78A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A78AC
  c->r[12]=R32(c->r[12]+0x000000B4u); // 800A78B0
  c->ctr=c->r[12]; // 800A78B4
  if (true) { c->lr=0x800A78BCu; dispatch(c,c->ctr); } // 800A78B8
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A78BC
  cmps(c,0,(int32_t)c->r[0],448); // 800A78C0
  if (!crb(c,1)) { goto L_800A7940; } // 800A78C4
  c->r[12]=R32(c->r[25]+0x00000000u); // 800A78C8
  c->r[3]=c->r[25]|c->r[25]; // 800A78CC
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A78D0
  c->ctr=c->r[12]; // 800A78D4
  if (true) { c->lr=0x800A78DCu; dispatch(c,c->ctr); } // 800A78D8
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A78DC
  c->r[3]=c->r[3]+0x000001C0u; // 800A78E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A78E4
  if (!crb(c,0)) { goto L_800A7940; } // 800A78E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A78EC
  cmps(c,0,(int32_t)c->r[0],320); // 800A78F0
  if (!crb(c,1)) { goto L_800A7940; } // 800A78F4
  c->r[12]=R32(c->r[25]+0x00000000u); // 800A78F8
  c->r[3]=c->r[25]|c->r[25]; // 800A78FC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A7900
  c->ctr=c->r[12]; // 800A7904
  if (true) { c->lr=0x800A790Cu; dispatch(c,c->ctr); } // 800A7908
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A790C
  c->r[3]=c->r[3]+0x00000140u; // 800A7910
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7914
  if (!crb(c,0)) { goto L_800A7940; } // 800A7918
  c->r[12]=R32(c->r[26]+0x00000000u); // 800A791C
  c->r[3]=c->r[26]|c->r[26]; // 800A7920
  c->r[4]=0u+0x000001C0u; // 800A7924
  c->r[5]=0u+0x00000140u; // 800A7928
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A792C
  c->r[6]=0u+0x00000000u; // 800A7930
  c->ctr=c->r[12]; // 800A7934
  if (true) { c->lr=0x800A793Cu; dispatch(c,c->ctr); } // 800A7938
  goto L_800A7960; // 800A793C
L_800A7940:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 800A7940
  c->r[3]=c->r[25]|c->r[25]; // 800A7944
  c->r[4]=0u+0x000001C0u; // 800A7948
  c->r[5]=0u+0x00000140u; // 800A794C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A7950
  c->r[6]=0u+0x00000000u; // 800A7954
  c->ctr=c->r[12]; // 800A7958
  if (true) { c->lr=0x800A7960u; dispatch(c,c->ctr); } // 800A795C
L_800A7960:;
  c->r[3]=c->r[27]+0x0000004Cu; // 800A7960
  c->lr=0x800A7968u; f_80074088(c); // 800A7964
  c->r[26]=c->r[3]|c->r[3]; // 800A7968
  c->r[3]=c->r[27]+0x0000004Cu; // 800A796C
  c->lr=0x800A7974u; f_80074088(c); // 800A7970
  c->r[4]=c->r[3]|c->r[3]; // 800A7974
  c->r[3]=c->r[27]+0x00002AC0u; // 800A7978
  c->lr=0x800A7980u; f_80075EE4(c); // 800A797C
  c->r[4]=addc(c,~c->r[3],0x00000230u,1); // 800A7980
  c->r[6]=c->r[26]|c->r[26]; // 800A7984
  c->r[3]=c->r[27]+0x00002AC0u; // 800A7988
  c->r[5]=0u+0x0000014Au; // 800A798C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A7990
  c->lr=0x800A7998u; f_80075D38(c); // 800A7994
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A7998
  c->r[26]=R32(c->r[27]+0x0000007Cu); // 800A799C
  cmps(c,0,(int32_t)c->r[0],0); // 800A79A0
  c->r[25]=R32(c->r[27]+0x00000078u); // 800A79A4
  if (!crb(c,2)) { goto L_800A79B4; } // 800A79A8
  c->lr=0x800A79B0u; f_80080758(c); // 800A79AC
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A79B0
L_800A79B4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A79B4
  c->r[4]=c->r[1]+0x00000008u; // 800A79B8
  c->r[5]=c->r[1]+0x0000000Cu; // 800A79BC
  c->r[6]=0u+0x00000000u; // 800A79C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A79C4
  c->r[12]=R32(c->r[12]+0x000000B4u); // 800A79C8
  c->ctr=c->r[12]; // 800A79CC
  if (true) { c->lr=0x800A79D4u; dispatch(c,c->ctr); } // 800A79D0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A79D4
  cmps(c,0,(int32_t)c->r[0],56); // 800A79D8
  if (!crb(c,1)) { goto L_800A7A58; } // 800A79DC
  c->r[12]=R32(c->r[25]+0x00000000u); // 800A79E0
  c->r[3]=c->r[25]|c->r[25]; // 800A79E4
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A79E8
  c->ctr=c->r[12]; // 800A79EC
  if (true) { c->lr=0x800A79F4u; dispatch(c,c->ctr); } // 800A79F0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A79F4
  c->r[3]=c->r[3]+0x00000038u; // 800A79F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A79FC
  if (!crb(c,0)) { goto L_800A7A58; } // 800A7A00
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7A04
  cmps(c,0,(int32_t)c->r[0],320); // 800A7A08
  if (!crb(c,1)) { goto L_800A7A58; } // 800A7A0C
  c->r[12]=R32(c->r[25]+0x00000000u); // 800A7A10
  c->r[3]=c->r[25]|c->r[25]; // 800A7A14
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A7A18
  c->ctr=c->r[12]; // 800A7A1C
  if (true) { c->lr=0x800A7A24u; dispatch(c,c->ctr); } // 800A7A20
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7A24
  c->r[3]=c->r[3]+0x00000140u; // 800A7A28
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7A2C
  if (!crb(c,0)) { goto L_800A7A58; } // 800A7A30
  c->r[12]=R32(c->r[26]+0x00000000u); // 800A7A34
  c->r[3]=c->r[26]|c->r[26]; // 800A7A38
  c->r[4]=0u+0x00000038u; // 800A7A3C
  c->r[5]=0u+0x00000140u; // 800A7A40
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A7A44
  c->r[6]=0u+0x00000000u; // 800A7A48
  c->ctr=c->r[12]; // 800A7A4C
  if (true) { c->lr=0x800A7A54u; dispatch(c,c->ctr); } // 800A7A50
  goto L_800A7A78; // 800A7A54
L_800A7A58:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 800A7A58
  c->r[3]=c->r[25]|c->r[25]; // 800A7A5C
  c->r[4]=0u+0x00000038u; // 800A7A60
  c->r[5]=0u+0x00000140u; // 800A7A64
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A7A68
  c->r[6]=0u+0x00000000u; // 800A7A6C
  c->ctr=c->r[12]; // 800A7A70
  if (true) { c->lr=0x800A7A78u; dispatch(c,c->ctr); } // 800A7A74
L_800A7A78:;
  c->r[3]=c->r[27]+0x00000058u; // 800A7A78
  c->lr=0x800A7A80u; f_80074088(c); // 800A7A7C
  c->r[26]=c->r[3]|c->r[3]; // 800A7A80
  c->r[3]=c->r[27]+0x00000058u; // 800A7A84
  c->lr=0x800A7A8Cu; f_80074088(c); // 800A7A88
  c->r[4]=c->r[3]|c->r[3]; // 800A7A8C
  c->r[3]=c->r[27]+0x00002AC0u; // 800A7A90
  c->lr=0x800A7A98u; f_80075EE4(c); // 800A7A94
  c->r[4]=addc(c,~c->r[3],0x000000A0u,1); // 800A7A98
  c->r[6]=c->r[26]|c->r[26]; // 800A7A9C
  c->r[3]=c->r[27]+0x00002AC0u; // 800A7AA0
  c->r[5]=0u+0x0000014Au; // 800A7AA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A7AA8
  c->lr=0x800A7AB0u; f_80075D38(c); // 800A7AAC
L_800A7AB0:;
  c->r[0]=R32(c->r[27]+0x00000028u); // 800A7AB0
  cmpu(c,0,c->r[0],0x00000001u); // 800A7AB4
  if (crb(c,1)) { goto L_800A7AD0; } // 800A7AB8
  W8(c->r[27]+0x00000080u,c->r[31]); // 800A7ABC
  W8(c->r[27]+0x00000081u,c->r[30]); // 800A7AC0
  W8(c->r[27]+0x00000082u,c->r[29]); // 800A7AC4
  W8(c->r[27]+0x00000083u,c->r[28]); // 800A7AC8
  goto L_800A7AE0; // 800A7ACC
L_800A7AD0:;
  W8(c->r[27]+0x000015A0u,c->r[31]); // 800A7AD0
  W8(c->r[27]+0x000015A1u,c->r[30]); // 800A7AD4
  W8(c->r[27]+0x000015A2u,c->r[29]); // 800A7AD8
  W8(c->r[27]+0x000015A3u,c->r[28]); // 800A7ADC
L_800A7AE0:;
  c->r[3]=R32(c->r[13]+0xFFFF8C34u); // 800A7AE0
  cmps(c,0,(int32_t)c->r[3],0); // 800A7AE4
  if (crb(c,2)) { goto L_800A7B00; } // 800A7AE8
  c->r[3]=R32(c->r[3]+0x00000054u); // 800A7AEC
  cmps(c,0,(int32_t)c->r[3],0); // 800A7AF0
  if (crb(c,2)) { goto L_800A7B00; } // 800A7AF4
  c->r[4]=0u+0x000000FFu; // 800A7AF8
  c->lr=0x800A7B00u; f_800694F0(c); // 800A7AFC
L_800A7B00:;
  c->r[11]=c->r[1]+0x00000050u; // 800A7B00
  c->lr=0x800A7B08u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A7B04
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A7B08
  c->lr=c->r[0]; // 800A7B0C
  c->r[1]=c->r[1]+0x00000050u; // 800A7B10
  return; // 800A7B14
}

// __ct__5ColorFv
void f_800A7B18(Ctx* __restrict c) {
  trace_call(0x800A7B18u);
  c->r[0]=0u+0x000000FFu; // 800A7B18
  W8(c->r[3]+0x00000000u,c->r[0]); // 800A7B1C
  W8(c->r[3]+0x00000001u,c->r[0]); // 800A7B20
  W8(c->r[3]+0x00000002u,c->r[0]); // 800A7B24
  W8(c->r[3]+0x00000003u,c->r[0]); // 800A7B28
  return; // 800A7B2C
}

// DrawButton__10PopupStateFiiP6SpriteP6Sprite
void f_800A7B30(Ctx* __restrict c) {
  trace_call(0x800A7B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7B30
  c->r[0]=c->lr; // 800A7B34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A7B38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A7B3C
  c->r[31]=c->r[7]|c->r[7]; // 800A7B40
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A7B44
  c->r[30]=c->r[6]|c->r[6]; // 800A7B48
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A7B4C
  c->r[29]=c->r[5]|c->r[5]; // 800A7B50
  W32(c->r[1]+0x00000010u,c->r[28]); // 800A7B54
  c->r[28]=c->r[4]|c->r[4]; // 800A7B58
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A7B5C
  cmps(c,0,(int32_t)c->r[0],0); // 800A7B60
  if (!crb(c,2)) { goto L_800A7B70; } // 800A7B64
  c->lr=0x800A7B6Cu; f_80080758(c); // 800A7B68
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A7B6C
L_800A7B70:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A7B70
  c->r[4]=c->r[1]+0x0000000Cu; // 800A7B74
  c->r[5]=c->r[1]+0x00000008u; // 800A7B78
  c->r[6]=0u+0x00000000u; // 800A7B7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7B80
  c->r[12]=R32(c->r[12]+0x000000B4u); // 800A7B84
  c->ctr=c->r[12]; // 800A7B88
  if (true) { c->lr=0x800A7B90u; dispatch(c,c->ctr); } // 800A7B8C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7B90
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 800A7B94
  if (!crb(c,1)) { goto L_800A7C14; } // 800A7B98
  c->r[12]=R32(c->r[30]+0x00000000u); // 800A7B9C
  c->r[3]=c->r[30]|c->r[30]; // 800A7BA0
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A7BA4
  c->ctr=c->r[12]; // 800A7BA8
  if (true) { c->lr=0x800A7BB0u; dispatch(c,c->ctr); } // 800A7BAC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7BB0
  c->r[3]=c->r[28]+c->r[3]; // 800A7BB4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7BB8
  if (!crb(c,0)) { goto L_800A7C14; } // 800A7BBC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A7BC0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 800A7BC4
  if (!crb(c,1)) { goto L_800A7C14; } // 800A7BC8
  c->r[12]=R32(c->r[30]+0x00000000u); // 800A7BCC
  c->r[3]=c->r[30]|c->r[30]; // 800A7BD0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A7BD4
  c->ctr=c->r[12]; // 800A7BD8
  if (true) { c->lr=0x800A7BE0u; dispatch(c,c->ctr); } // 800A7BDC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A7BE0
  c->r[3]=c->r[29]+c->r[3]; // 800A7BE4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7BE8
  if (!crb(c,0)) { goto L_800A7C14; } // 800A7BEC
  c->r[12]=R32(c->r[31]+0x00000000u); // 800A7BF0
  c->r[3]=c->r[31]|c->r[31]; // 800A7BF4
  c->r[4]=c->r[28]|c->r[28]; // 800A7BF8
  c->r[5]=c->r[29]|c->r[29]; // 800A7BFC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A7C00
  c->r[6]=0u+0x00000000u; // 800A7C04
  c->ctr=c->r[12]; // 800A7C08
  if (true) { c->lr=0x800A7C10u; dispatch(c,c->ctr); } // 800A7C0C
  goto L_800A7C34; // 800A7C10
L_800A7C14:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800A7C14
  c->r[3]=c->r[30]|c->r[30]; // 800A7C18
  c->r[4]=c->r[28]|c->r[28]; // 800A7C1C
  c->r[5]=c->r[29]|c->r[29]; // 800A7C20
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A7C24
  c->r[6]=0u+0x00000000u; // 800A7C28
  c->ctr=c->r[12]; // 800A7C2C
  if (true) { c->lr=0x800A7C34u; dispatch(c,c->ctr); } // 800A7C30
L_800A7C34:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A7C34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A7C38
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A7C3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A7C40
  c->r[28]=R32(c->r[1]+0x00000010u); // 800A7C44
  c->lr=c->r[0]; // 800A7C48
  c->r[1]=c->r[1]+0x00000020u; // 800A7C4C
  return; // 800A7C50
}

// OnKeyDown__10PopupStateF3Keyi
void f_800A7C54(Ctx* __restrict c) {
  trace_call(0x800A7C54u);
  return; // 800A7C54
}

// OnKeyUp__10PopupStateF3Keyi
void f_800A7C58(Ctx* __restrict c) {
  trace_call(0x800A7C58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7C58
  c->r[0]=c->lr; // 800A7C5C
  cmps(c,0,(int32_t)c->r[4],2048); // 800A7C60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A7C64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A7C68
  c->r[31]=c->r[3]|c->r[3]; // 800A7C6C
  if (crb(c,2)) { goto L_800A7C84; } // 800A7C70
  cmps(c,0,(int32_t)c->r[4],1024); // 800A7C74
  if (crb(c,2)) { goto L_800A7C84; } // 800A7C78
  cmps(c,0,(int32_t)c->r[4],8192); // 800A7C7C
  if (!crb(c,2)) { goto L_800A7ED0; } // 800A7C80
L_800A7C84:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A7C84
  cmps(c,0,(int32_t)c->r[0],0); // 800A7C88
  if (!crb(c,2)) { goto L_800A7C98; } // 800A7C8C
  c->lr=0x800A7C94u; f_800838DC(c); // 800A7C90
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A7C94
L_800A7C98:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A7C98
  c->r[4]=c->r[1]+0x00000014u; // 800A7C9C
  c->r[5]=c->r[1]+0x00000010u; // 800A7CA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7CA4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800A7CA8
  c->ctr=c->r[12]; // 800A7CAC
  if (true) { c->lr=0x800A7CB4u; dispatch(c,c->ctr); } // 800A7CB0
  c->r[3]=R32(c->r[31]+0x00000064u); // 800A7CB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7CB8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A7CBC
  c->ctr=c->r[12]; // 800A7CC0
  if (true) { c->lr=0x800A7CC8u; dispatch(c,c->ctr); } // 800A7CC4
  c->r[3]=R32(c->r[31]+0x00000064u); // 800A7CC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7CCC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A7CD0
  c->ctr=c->r[12]; // 800A7CD4
  if (true) { c->lr=0x800A7CDCu; dispatch(c,c->ctr); } // 800A7CD8
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A7CDC
  cmps(c,0,(int32_t)c->r[0],0); // 800A7CE0
  if (!crb(c,2)) { goto L_800A7CF0; } // 800A7CE4
  c->lr=0x800A7CECu; f_80080758(c); // 800A7CE8
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A7CEC
L_800A7CF0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A7CF0
  c->r[4]=c->r[1]+0x0000000Cu; // 800A7CF4
  c->r[5]=c->r[1]+0x00000008u; // 800A7CF8
  c->r[6]=0u+0x00000000u; // 800A7CFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7D00
  c->r[12]=R32(c->r[12]+0x000000B4u); // 800A7D04
  c->ctr=c->r[12]; // 800A7D08
  if (true) { c->lr=0x800A7D10u; dispatch(c,c->ctr); } // 800A7D0C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A7D10
  cmps(c,0,(int32_t)c->r[0],1); // 800A7D14
  if (crb(c,2)) { goto L_800A7D28; } // 800A7D18
  cmps(c,0,(int32_t)c->r[0],2); // 800A7D1C
  if (crb(c,2)) { goto L_800A7DC0; } // 800A7D20
  goto L_800A7ED0; // 800A7D24
L_800A7D28:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7D28
  cmps(c,0,(int32_t)c->r[0],448); // 800A7D2C
  if (!crb(c,1)) { goto L_800A7ED0; } // 800A7D30
  c->r[3]=R32(c->r[31]+0x00000068u); // 800A7D34
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7D38
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A7D3C
  c->ctr=c->r[12]; // 800A7D40
  if (true) { c->lr=0x800A7D48u; dispatch(c,c->ctr); } // 800A7D44
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7D48
  c->r[3]=c->r[3]+0x000001C0u; // 800A7D4C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7D50
  if (!crb(c,0)) { goto L_800A7ED0; } // 800A7D54
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A7D58
  cmps(c,0,(int32_t)c->r[0],320); // 800A7D5C
  if (!crb(c,1)) { goto L_800A7ED0; } // 800A7D60
  c->r[3]=R32(c->r[31]+0x00000068u); // 800A7D64
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7D68
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A7D6C
  c->ctr=c->r[12]; // 800A7D70
  if (true) { c->lr=0x800A7D78u; dispatch(c,c->ctr); } // 800A7D74
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A7D78
  c->r[3]=c->r[3]+0x00000140u; // 800A7D7C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7D80
  if (!crb(c,0)) { goto L_800A7ED0; } // 800A7D84
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A7D88
  cmps(c,0,(int32_t)c->r[0],0); // 800A7D8C
  if (!crb(c,2)) { goto L_800A7D9C; } // 800A7D90
  c->lr=0x800A7D98u; f_80080758(c); // 800A7D94
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A7D98
L_800A7D9C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A7D9C
  c->r[4]=0u+0x80260000u; // 800A7DA0
  c->r[4]=c->r[4]+0xFFFFA580u; // 800A7DA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7DA8
  c->r[4]=c->r[4]+0x00000162u; // 800A7DAC
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A7DB0
  c->ctr=c->r[12]; // 800A7DB4
  if (true) { c->lr=0x800A7DBCu; dispatch(c,c->ctr); } // 800A7DB8
  goto L_800A7ED0; // 800A7DBC
L_800A7DC0:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7DC0
  cmps(c,0,(int32_t)c->r[0],448); // 800A7DC4
  if (!crb(c,1)) { goto L_800A7E28; } // 800A7DC8
  c->r[3]=R32(c->r[31]+0x00000068u); // 800A7DCC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7DD0
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A7DD4
  c->ctr=c->r[12]; // 800A7DD8
  if (true) { c->lr=0x800A7DE0u; dispatch(c,c->ctr); } // 800A7DDC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7DE0
  c->r[3]=c->r[3]+0x000001C0u; // 800A7DE4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7DE8
  if (!crb(c,0)) { goto L_800A7E28; } // 800A7DEC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A7DF0
  cmps(c,0,(int32_t)c->r[0],320); // 800A7DF4
  if (!crb(c,1)) { goto L_800A7E28; } // 800A7DF8
  c->r[3]=R32(c->r[31]+0x00000068u); // 800A7DFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7E00
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A7E04
  c->ctr=c->r[12]; // 800A7E08
  if (true) { c->lr=0x800A7E10u; dispatch(c,c->ctr); } // 800A7E0C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A7E10
  c->r[3]=c->r[3]+0x00000140u; // 800A7E14
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7E18
  if (!crb(c,0)) { goto L_800A7E28; } // 800A7E1C
  c->r[0]=0u+0x00000001u; // 800A7E20
  W32(c->r[31]+0x00003FE0u,c->r[0]); // 800A7E24
L_800A7E28:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7E28
  cmps(c,0,(int32_t)c->r[0],56); // 800A7E2C
  if (!crb(c,1)) { goto L_800A7E90; } // 800A7E30
  c->r[3]=R32(c->r[31]+0x00000068u); // 800A7E34
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7E38
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A7E3C
  c->ctr=c->r[12]; // 800A7E40
  if (true) { c->lr=0x800A7E48u; dispatch(c,c->ctr); } // 800A7E44
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A7E48
  c->r[3]=c->r[3]+0x00000038u; // 800A7E4C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7E50
  if (!crb(c,0)) { goto L_800A7E90; } // 800A7E54
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A7E58
  cmps(c,0,(int32_t)c->r[0],320); // 800A7E5C
  if (!crb(c,1)) { goto L_800A7E90; } // 800A7E60
  c->r[3]=R32(c->r[31]+0x00000068u); // 800A7E64
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7E68
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A7E6C
  c->ctr=c->r[12]; // 800A7E70
  if (true) { c->lr=0x800A7E78u; dispatch(c,c->ctr); } // 800A7E74
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A7E78
  c->r[3]=c->r[3]+0x00000140u; // 800A7E7C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800A7E80
  if (!crb(c,0)) { goto L_800A7E90; } // 800A7E84
  c->r[0]=0u+0x00000002u; // 800A7E88
  W32(c->r[31]+0x00003FE0u,c->r[0]); // 800A7E8C
L_800A7E90:;
  c->r[0]=R32(c->r[31]+0x00003FE0u); // 800A7E90
  cmps(c,0,(int32_t)c->r[0],0); // 800A7E94
  if (crb(c,2)) { goto L_800A7ED0; } // 800A7E98
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A7E9C
  cmps(c,0,(int32_t)c->r[0],0); // 800A7EA0
  if (!crb(c,2)) { goto L_800A7EB0; } // 800A7EA4
  c->lr=0x800A7EACu; f_80080758(c); // 800A7EA8
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A7EAC
L_800A7EB0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A7EB0
  c->r[4]=0u+0x80260000u; // 800A7EB4
  c->r[4]=c->r[4]+0xFFFFA580u; // 800A7EB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A7EBC
  c->r[4]=c->r[4]+0x00000162u; // 800A7EC0
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A7EC4
  c->ctr=c->r[12]; // 800A7EC8
  if (true) { c->lr=0x800A7ED0u; dispatch(c,c->ctr); } // 800A7ECC
L_800A7ED0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A7ED0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A7ED4
  c->lr=c->r[0]; // 800A7ED8
  c->r[1]=c->r[1]+0x00000020u; // 800A7EDC
  return; // 800A7EE0
}

// SetText__10PopupStateFPcf
void f_800A7EE4(Ctx* __restrict c) {
  trace_call(0x800A7EE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7EE4
  c->r[0]=c->lr; // 800A7EE8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A7EEC
  c->r[0]=0u+0x43300000u; // 800A7EF0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800A7EF4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800A7EF8
  c->f[31]=c->f[1]; // 800A7EFC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800A7F00
  W32(c->r[1]+0x00000038u,c->r[30]); // 800A7F04
  c->r[30]=c->r[3]|c->r[3]; // 800A7F08
  W32(c->r[1]+0x00000034u,c->r[29]); // 800A7F0C
  W32(c->r[1]+0x00000030u,c->r[28]); // 800A7F10
  {uint32_t ea=c->r[3]+0x000040E4u; WF32(ea,c->f[1]);} // 800A7F14
  c->r[3]=c->r[3]+0x00000034u; // 800A7F18
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A7F1C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800A7F20
  c->lr=0x800A7F28u; f_80073C88(c); // 800A7F24
  c->r[0]=R32(c->r[30]+0x00000028u); // 800A7F28
  cmpu(c,0,c->r[0],0x00000001u); // 800A7F2C
  if (crb(c,1)) { goto L_800A7F58; } // 800A7F30
  c->r[3]=c->r[30]+0x00000034u; // 800A7F34
  c->lr=0x800A7F3Cu; f_80074088(c); // 800A7F38
  {uint32_t ea=c->r[30]+0x000040E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7F3C
  c->r[4]=c->r[3]|c->r[3]; // 800A7F40
  c->r[3]=c->r[30]|c->r[30]; // 800A7F44
  c->r[6]=c->r[30]+0x00000080u; // 800A7F48
  c->r[5]=0u+0x00000217u; // 800A7F4C
  c->lr=0x800A7F54u; f_800A81D8(c); // 800A7F50
  goto L_800A7F78; // 800A7F54
L_800A7F58:;
  c->r[3]=c->r[30]+0x00000034u; // 800A7F58
  c->lr=0x800A7F60u; f_80074088(c); // 800A7F5C
  {uint32_t ea=c->r[30]+0x000040E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7F60
  c->r[4]=c->r[3]|c->r[3]; // 800A7F64
  c->r[3]=c->r[30]|c->r[30]; // 800A7F68
  c->r[6]=c->r[30]+0x000015A0u; // 800A7F6C
  c->r[5]=0u+0x00000217u; // 800A7F70
  c->lr=0x800A7F78u; f_800A81D8(c); // 800A7F74
L_800A7F78:;
  c->r[3]=c->r[30]+0x00000034u; // 800A7F78
  c->r[29]=0u+0x00000001u; // 800A7F7C
  c->lr=0x800A7F84u; f_800740AC(c); // 800A7F80
  c->r[31]=c->r[3]|c->r[3]; // 800A7F84
  c->r[28]=0u+0x00000000u; // 800A7F88
  goto L_800A7FB0; // 800A7F8C
L_800A7F90:;
  c->r[4]=c->r[28]|c->r[28]; // 800A7F90
  c->r[3]=c->r[30]+0x00000034u; // 800A7F94
  c->lr=0x800A7F9Cu; f_80074090(c); // 800A7F98
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800A7F9C
  cmps(c,0,(int32_t)c->r[0],10); // 800A7FA0
  if (!crb(c,2)) { goto L_800A7FAC; } // 800A7FA4
  c->r[29]=c->r[29]+0x00000001u; // 800A7FA8
L_800A7FAC:;
  c->r[28]=c->r[28]+0x00000001u; // 800A7FAC
L_800A7FB0:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[31]); // 800A7FB0
  if (crb(c,0)) { IRQCHK(c); goto L_800A7F90; } // 800A7FB4
  c->r[0]=R32(c->r[30]+0x00000028u); // 800A7FB8
  cmpu(c,0,c->r[0],0x00000001u); // 800A7FBC
  if (crb(c,1)) { goto L_800A803C; } // 800A7FC0
  c->r[3]=c->r[30]+0x00000034u; // 800A7FC4
  c->lr=0x800A7FCCu; f_80074088(c); // 800A7FC8
  c->r[4]=c->r[3]|c->r[3]; // 800A7FCC
  c->r[3]=c->r[30]+0x00000080u; // 800A7FD0
  c->lr=0x800A7FD8u; f_80075EE4(c); // 800A7FD4
  c->r[0]=c->r[3]^0x80000000u; // 800A7FD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A7FDC
  c->r[0]=R32(c->r[30]+0x00000088u); // 800A7FE0
  {uint32_t ea=c->r[2]+0xFFFF8ED0u; c->f[1]=RF64(ea);} // 800A7FE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800A7FE8
  cmps(c,0,(int32_t)c->r[0],-1); // 800A7FEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800A7FF0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800A7FF4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800A7FF8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800A7FFC
  c->r[28]=R32(c->r[1]+0x00000024u); // 800A8000
  if (crb(c,2)) { goto L_800A800C; } // 800A8004
  goto L_800A8010; // 800A8008
L_800A800C:;
  c->r[0]=R32(c->r[30]+0x00001498u); // 800A800C
L_800A8010:;
  c->r[0]=c->r[0]^0x80000000u; // 800A8010
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A8014
  {uint32_t ea=c->r[2]+0xFFFF8ED0u; c->f[1]=RF64(ea);} // 800A8018
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800A801C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800A8020
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800A8024
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800A8028
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800A802C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800A8030
  c->r[31]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 800A8034
  goto L_800A80B0; // 800A8038
L_800A803C:;
  c->r[3]=c->r[30]+0x00000034u; // 800A803C
  c->lr=0x800A8044u; f_80074088(c); // 800A8040
  c->r[4]=c->r[3]|c->r[3]; // 800A8044
  c->r[3]=c->r[30]+0x000015A0u; // 800A8048
  c->lr=0x800A8050u; f_80075EE4(c); // 800A804C
  c->r[0]=c->r[3]^0x80000000u; // 800A8050
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8054
  c->r[0]=R32(c->r[30]+0x000015A8u); // 800A8058
  {uint32_t ea=c->r[2]+0xFFFF8ED0u; c->f[1]=RF64(ea);} // 800A805C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800A8060
  cmps(c,0,(int32_t)c->r[0],-1); // 800A8064
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800A8068
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800A806C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800A8070
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800A8074
  c->r[28]=R32(c->r[1]+0x0000002Cu); // 800A8078
  if (crb(c,2)) { goto L_800A8084; } // 800A807C
  goto L_800A8088; // 800A8080
L_800A8084:;
  c->r[0]=R32(c->r[30]+0x000029B8u); // 800A8084
L_800A8088:;
  c->r[0]=c->r[0]^0x80000000u; // 800A8088
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A808C
  {uint32_t ea=c->r[2]+0xFFFF8ED0u; c->f[1]=RF64(ea);} // 800A8090
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800A8094
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800A8098
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800A809C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800A80A0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800A80A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A80A8
  c->r[31]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 800A80AC
L_800A80B0:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A80B0
  cmps(c,0,(int32_t)c->r[0],0); // 800A80B4
  if (!crb(c,2)) { goto L_800A80C4; } // 800A80B8
  c->lr=0x800A80C0u; f_800838DC(c); // 800A80BC
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A80C0
L_800A80C4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A80C4
  c->r[4]=c->r[1]+0x0000000Cu; // 800A80C8
  c->r[5]=c->r[1]+0x00000008u; // 800A80CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A80D0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800A80D4
  c->ctr=c->r[12]; // 800A80D8
  if (true) { c->lr=0x800A80E0u; dispatch(c,c->ctr); } // 800A80DC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800A80E0
  c->r[0]=rotl(c->r[28],1)&0x00000001u; // 800A80E4
  c->r[5]=c->r[0]+c->r[28]; // 800A80E8
  c->r[0]=R32(c->r[30]+0x00000028u); // 800A80EC
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 800A80F0
  cmps(c,0,(int32_t)c->r[0],0); // 800A80F4
  c->r[5]=sraw(c,c->r[5],1); // 800A80F8
  c->r[0]=c->r[3]+c->r[4]; // 800A80FC
  c->r[0]=sraw(c,c->r[0],1); // 800A8100
  c->r[0]=c->r[0]-c->r[5]; // 800A8104
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800A8108
  if (crb(c,2)) { goto L_800A8124; } // 800A810C
  c->r[3]=R32(c->r[30]+0x00000070u); // 800A8110
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8114
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A8118
  c->ctr=c->r[12]; // 800A811C
  if (true) { c->lr=0x800A8124u; dispatch(c,c->ctr); } // 800A8120
L_800A8124:;
  c->r[3]=R32(c->r[30]+0x00000064u); // 800A8124
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8128
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A812C
  c->ctr=c->r[12]; // 800A8130
  if (true) { c->lr=0x800A8138u; dispatch(c,c->ctr); } // 800A8134
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A8138
  c->r[4]=R32(c->r[1]+0x00000008u); // 800A813C
  c->r[5]=c->r[0]+c->r[3]; // 800A8140
  c->r[3]=R32(c->r[30]+0x00000064u); // 800A8144
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 800A8148
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A814C
  c->r[5]=sraw(c,c->r[5],1); // 800A8150
  c->r[0]=c->r[0]+c->r[4]; // 800A8154
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A8158
  c->r[0]=sraw(c,c->r[0],1); // 800A815C
  c->r[28]=c->r[0]-c->r[5]; // 800A8160
  c->ctr=c->r[12]; // 800A8164
  if (true) { c->lr=0x800A816Cu; dispatch(c,c->ctr); } // 800A8168
  c->r[0]=R32(c->r[30]+0x00000028u); // 800A816C
  cmps(c,0,(int32_t)c->r[0],0); // 800A8170
  if (crb(c,2)) { goto L_800A817C; } // 800A8174
  c->r[3]=c->r[3]+0xFFFFFFBAu; // 800A8178
L_800A817C:;
  c->r[4]=rotl(c->r[31],1)&0x00000001u; // 800A817C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A8180
  c->r[4]=c->r[4]+c->r[31]; // 800A8184
  c->r[4]=sraw(c,c->r[4],1); // 800A8188
  c->r[0]=c->r[0]+c->r[3]; // 800A818C
  c->r[0]=sraw(c,c->r[0],1); // 800A8190
  c->r[0]=c->r[28]+c->r[0]; // 800A8194
  c->r[0]=c->r[0]-c->r[4]; // 800A8198
  W32(c->r[30]+0x00000030u,c->r[0]); // 800A819C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800A81A0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800A81A4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800A81A8
  c->r[30]=R32(c->r[1]+0x00000038u); // 800A81AC
  c->r[29]=R32(c->r[1]+0x00000034u); // 800A81B0
  c->r[28]=R32(c->r[1]+0x00000030u); // 800A81B4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A81B8
  c->lr=c->r[0]; // 800A81BC
  c->r[1]=c->r[1]+0x00000050u; // 800A81C0
  return; // 800A81C4
}

// SetType__10PopupStateF9PopupType
void f_800A81C8(Ctx* __restrict c) {
  trace_call(0x800A81C8u);
  W32(c->r[3]+0x00000028u,c->r[4]); // 800A81C8
  return; // 800A81CC
}

// SetUICommand__10PopupStateFPc
void f_800A81D0(Ctx* __restrict c) {
  trace_call(0x800A81D0u);
  c->r[3]=c->r[3]+0x00003FE4u; // 800A81D0
  f_800DB9A8(c); return; // 800A81D4
}

// WordWrap__10PopupStateFPciP4Fontf
void f_800A81D8(Ctx* __restrict c) {
  trace_call(0x800A81D8u);
  {uint32_t ea=c->r[1]+0xFFFFF790u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A81D8
  c->r[0]=c->lr; // 800A81DC
  W32(c->r[1]+0x00000874u,c->r[0]); // 800A81E0
  c->r[0]=0u+0x00000868u; // 800A81E4
  c->r[11]=c->r[1]+0x00000850u; // 800A81E8
  {uint32_t ea=c->r[1]+0x00000860u; WF64(ea,c->f[31]);} // 800A81EC
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800A81F0
  c->r[0]=0u+0x00000858u; // 800A81F4
  {uint32_t ea=c->r[1]+0x00000850u; WF64(ea,c->f[30]);} // 800A81F8
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,30,ea,0,0);} // 800A81FC
  c->lr=0x800A8204u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A8200
  c->f[30]=c->f[1]; // 800A8204
  c->r[21]=c->r[4]|c->r[4]; // 800A8208
  c->r[22]=c->r[5]|c->r[5]; // 800A820C
  c->r[23]=c->r[6]|c->r[6]; // 800A8210
  c->r[28]=c->r[21]|c->r[21]; // 800A8214
  c->r[3]=c->r[21]|c->r[21]; // 800A8218
  c->r[27]=0u+0x00000000u; // 800A821C
  c->r[26]=0u+0x00000000u; // 800A8220
  c->r[25]=0u+0x00000000u; // 800A8224
  c->lr=0x800A822Cu; f_800D4394(c); // 800A8228
  {uint32_t ea=c->r[2]+0xFFFF8ED0u; c->f[31]=RF64(ea);} // 800A822C
  c->r[29]=c->r[3]|c->r[3]; // 800A8230
  c->r[24]=0u+0x00000000u; // 800A8234
  c->r[31]=0u+0x0000000Au; // 800A8238
  c->r[30]=0u+0x43300000u; // 800A823C
  goto L_800A82D4; // 800A8240
L_800A8244:;
  c->r[3]=c->r[1]+0x00000008u; // 800A8244
  c->r[4]=0u+0x00000000u; // 800A8248
  c->r[5]=0u+0x00000800u; // 800A824C
  c->lr=0x800A8254u; f_80004688(c); // 800A8250
  c->r[4]=c->r[28]|c->r[28]; // 800A8254
  c->r[5]=c->r[26]|c->r[26]; // 800A8258
  c->r[3]=c->r[1]+0x00000008u; // 800A825C
  c->lr=0x800A8264u; f_800DBA68(c); // 800A8260
  c->r[3]=c->r[23]|c->r[23]; // 800A8264
  c->r[4]=c->r[1]+0x00000008u; // 800A8268
  c->r[26]=c->r[26]+0x00000001u; // 800A826C
  c->lr=0x800A8274u; f_80075EE4(c); // 800A8270
  c->r[0]=c->r[3]^0x80000000u; // 800A8274
  W32(c->r[1]+0x0000080Cu,c->r[0]); // 800A8278
  W32(c->r[1]+0x00000808u,c->r[30]); // 800A827C
  {uint32_t ea=c->r[1]+0x00000808u; c->f[0]=RF64(ea);} // 800A8280
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800A8284
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 800A8288
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800A828C
  {uint32_t ea=c->r[1]+0x00000810u; WF64(ea,c->f[0]);} // 800A8290
  c->r[0]=R32(c->r[1]+0x00000814u); // 800A8294
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[22]); // 800A8298
  if (!crb(c,1)) { goto L_800A82B0; } // 800A829C
  W8(c->r[27]+0x00000000u,c->r[31]); // 800A82A0
  c->r[24]=c->r[25]|c->r[25]; // 800A82A4
  c->r[28]=c->r[27]+0x00000001u; // 800A82A8
  c->r[26]=0u+0x00000000u; // 800A82AC
L_800A82B0:;
  cmps(c,0,(int32_t)c->r[24],0); // 800A82B0
  if (crb(c,2)) { goto L_800A82D0; } // 800A82B4
  c->r[3]=c->r[21]+c->r[24]; // 800A82B8
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 800A82BC
  cmps(c,0,(int32_t)c->r[0],32); // 800A82C0
  if (!crb(c,2)) { goto L_800A82D0; } // 800A82C4
  c->r[27]=c->r[3]+0xFFFFFFFFu; // 800A82C8
  c->r[25]=c->r[24]+0xFFFFFFFFu; // 800A82CC
L_800A82D0:;
  c->r[24]=c->r[24]+0x00000001u; // 800A82D0
L_800A82D4:;
  cmpu(c,0,c->r[24],c->r[29]); // 800A82D4
  if (crb(c,0)) { IRQCHK(c); goto L_800A8244; } // 800A82D8
  c->r[0]=0u+0x00000868u; // 800A82DC
  c->r[11]=c->r[1]+0x00000850u; // 800A82E0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800A82E4
  {uint32_t ea=c->r[1]+0x00000860u; c->f[31]=RF64(ea);} // 800A82E8
  c->r[0]=0u+0x00000858u; // 800A82EC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800A82F0
  {uint32_t ea=c->r[1]+0x00000850u; c->f[30]=RF64(ea);} // 800A82F4
  c->lr=0x800A82FCu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A82F8
  c->r[0]=R32(c->r[1]+0x00000874u); // 800A82FC
  c->lr=c->r[0]; // 800A8300
  c->r[1]=c->r[1]+0x00000870u; // 800A8304
  return; // 800A8308
}

// SetUIState__10PopupStateFP7UIState
void f_800A830C(Ctx* __restrict c) {
  trace_call(0x800A830Cu);
  W32(c->r[13]+0xFFFF8C34u,c->r[3]); // 800A830C
  return; // 800A8310
}

// __sinit_\PopupState_cpp
void f_800A8314(Ctx* __restrict c) {
  trace_call(0x800A8314u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8314
  c->r[0]=c->lr; // 800A8318
  c->r[5]=0u+0x80260000u; // 800A831C
  c->r[4]=0u+0x80260000u; // 800A8320
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8324
  c->r[3]=0u+0x802B0000u; // 800A8328
  c->r[5]=c->r[5]+0xFFFFA580u; // 800A832C
  c->r[0]=0u+0x00000000u; // 800A8330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8334
  c->r[31]=c->r[3]+0x00003868u; // 800A8338
  c->r[4]=c->r[4]+0x00002510u; // 800A833C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A8340
  c->r[30]=c->r[5]+0x00000162u; // 800A8344
  c->r[5]=0u+0x00000100u; // 800A8348
  W32(c->r[3]+0x00003868u,c->r[4]); // 800A834C
  c->r[3]=c->r[31]+0x00000004u; // 800A8350
  c->r[4]=0u+0x00000000u; // 800A8354
  W32(c->r[31]+0x00000104u,c->r[0]); // 800A8358
  c->lr=0x800A8360u; f_80004688(c); // 800A835C
  c->r[4]=c->r[30]|c->r[30]; // 800A8360
  c->r[3]=c->r[31]+0x00000004u; // 800A8364
  c->r[5]=0u+0x00000100u; // 800A8368
  c->lr=0x800A8370u; f_800DBA68(c); // 800A836C
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A8370
  cmps(c,0,(int32_t)c->r[0],0); // 800A8374
  if (!crb(c,2)) { goto L_800A8384; } // 800A8378
  c->lr=0x800A8380u; f_80080758(c); // 800A837C
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A8380
L_800A8384:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A8384
  c->r[31]=0u+0x802B0000u; // 800A8388
  c->r[4]=c->r[31]+0x00003868u; // 800A838C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8390
  c->r[12]=R32(c->r[12]+0x0000016Cu); // 800A8394
  c->ctr=c->r[12]; // 800A8398
  if (true) { c->lr=0x800A83A0u; dispatch(c,c->ctr); } // 800A839C
  c->r[3]=0u+0x80260000u; // 800A83A0
  c->r[3]=c->r[3]+0x00005BD8u; // 800A83A4
  W32(c->r[31]+0x00003868u,c->r[3]); // 800A83A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A83AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A83B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A83B4
  c->lr=c->r[0]; // 800A83B8
  c->r[1]=c->r[1]+0x00000010u; // 800A83BC
  return; // 800A83C0
}

// __ct__34StateFactoryTemplate<10PopupState>FPc
void f_800A83C4(Ctx* __restrict c) {
  trace_call(0x800A83C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A83C4
  c->r[0]=c->lr; // 800A83C8
  c->r[5]=0u+0x80260000u; // 800A83CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A83D0
  c->r[0]=0u+0x00000000u; // 800A83D4
  c->r[5]=c->r[5]+0x00002510u; // 800A83D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A83DC
  c->r[31]=c->r[4]|c->r[4]; // 800A83E0
  c->r[4]=0u+0x00000000u; // 800A83E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A83E8
  c->r[30]=c->r[3]|c->r[3]; // 800A83EC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A83F0
  c->r[5]=0u+0x00000100u; // 800A83F4
  W32(c->r[3]+0x00000104u,c->r[0]); // 800A83F8
  c->r[3]=c->r[3]+0x00000004u; // 800A83FC
  c->lr=0x800A8404u; f_80004688(c); // 800A8400
  c->r[4]=c->r[31]|c->r[31]; // 800A8404
  c->r[3]=c->r[30]+0x00000004u; // 800A8408
  c->r[5]=0u+0x00000100u; // 800A840C
  c->lr=0x800A8414u; f_800DBA68(c); // 800A8410
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A8414
  cmps(c,0,(int32_t)c->r[0],0); // 800A8418
  if (!crb(c,2)) { goto L_800A8428; } // 800A841C
  c->lr=0x800A8424u; f_80080758(c); // 800A8420
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A8424
L_800A8428:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A8428
  c->r[4]=c->r[30]|c->r[30]; // 800A842C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8430
  c->r[12]=R32(c->r[12]+0x0000016Cu); // 800A8434
  c->ctr=c->r[12]; // 800A8438
  if (true) { c->lr=0x800A8440u; dispatch(c,c->ctr); } // 800A843C
  c->r[4]=0u+0x80260000u; // 800A8440
  c->r[3]=c->r[30]|c->r[30]; // 800A8444
  c->r[4]=c->r[4]+0x00005BD8u; // 800A8448
  W32(c->r[30]+0x00000000u,c->r[4]); // 800A844C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8450
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A8454
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8458
  c->lr=c->r[0]; // 800A845C
  c->r[1]=c->r[1]+0x00000010u; // 800A8460
  return; // 800A8464
}

// GetState__34StateFactoryTemplate<10PopupState>Fv
void f_800A8468(Ctx* __restrict c) {
  trace_call(0x800A8468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8468
  c->r[0]=c->lr; // 800A846C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8474
  c->r[31]=c->r[3]|c->r[3]; // 800A8478
  c->r[0]=R32(c->r[3]+0x00000104u); // 800A847C
  cmps(c,0,(int32_t)c->r[0],0); // 800A8480
  if (!crb(c,2)) { goto L_800A84AC; } // 800A8484
  c->r[3]=0u+0x000040E8u; // 800A8488
  c->lr=0x800A8490u; f_8008DC84(c); // 800A848C
  cmps(c,0,(int32_t)c->r[3],0); // 800A8490
  if (crb(c,2)) { goto L_800A849C; } // 800A8494
  c->lr=0x800A849Cu; f_800A6C18(c); // 800A8498
L_800A849C:;
  W32(c->r[31]+0x00000104u,c->r[3]); // 800A849C
  c->r[3]=c->r[3]+0x00000004u; // 800A84A0
  c->r[4]=c->r[31]+0x00000004u; // 800A84A4
  c->lr=0x800A84ACu; f_800DB9A8(c); // 800A84A8
L_800A84AC:;
  c->r[3]=R32(c->r[31]+0x00000104u); // 800A84AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A84B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A84B4
  c->lr=c->r[0]; // 800A84B8
  c->r[1]=c->r[1]+0x00000010u; // 800A84BC
  return; // 800A84C0
}

// __ct__13CivilianGirl2F11EObjectTypePcP7Spawner
void f_800A84C4(Ctx* __restrict c) {
  trace_call(0x800A84C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A84C4
  c->r[0]=c->lr; // 800A84C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A84CC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800A84D0
  W32(c->r[1]+0x00000028u,c->r[30]); // 800A84D4
  W32(c->r[1]+0x00000024u,c->r[29]); // 800A84D8
  W32(c->r[1]+0x00000020u,c->r[28]); // 800A84DC
  c->r[28]=c->r[3]|c->r[3]; // 800A84E0
  c->lr=0x800A84E8u; f_80008A5C(c); // 800A84E4
  {uint32_t ea=c->r[2]+0xFFFF8ED8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A84E8
  c->r[8]=0u+0x00000000u; // 800A84EC
  {uint32_t ea=c->r[2]+0xFFFF8EE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A84F0
  c->r[6]=0u+0x00000002u; // 800A84F4
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A84F8
  c->r[29]=0u+0x80260000u; // 800A84FC
  {uint32_t ea=c->r[2]+0xFFFF8EE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8500
  c->r[29]=c->r[29]+0x00005BF0u; // 800A8504
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800A8508
  c->r[7]=0u+0x00000005u; // 800A850C
  c->r[5]=0u+0x00000006u; // 800A8510
  c->r[4]=0u+0x00000007u; // 800A8514
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800A8518
  c->r[0]=0u+0x00000008u; // 800A851C
  c->r[30]=R32(c->r[1]+0x00000014u); // 800A8520
  c->r[3]=c->r[28]|c->r[28]; // 800A8524
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[3]);} // 800A8528
  c->r[31]=R32(c->r[1]+0x00000018u); // 800A852C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800A8530
  c->r[12]=R32(c->r[1]+0x0000001Cu); // 800A8534
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A8538
  c->r[11]=R32(c->r[1]+0x00000008u); // 800A853C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800A8540
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 800A8544
  c->r[9]=R32(c->r[1]+0x00000010u); // 800A8548
  W32(c->r[28]+0x00000000u,c->r[29]); // 800A854C
  W32(c->r[28]+0x0000008Cu,c->r[30]); // 800A8550
  W32(c->r[28]+0x00000090u,c->r[31]); // 800A8554
  W32(c->r[28]+0x00000094u,c->r[12]); // 800A8558
  W32(c->r[28]+0x00000098u,c->r[11]); // 800A855C
  W32(c->r[28]+0x0000009Cu,c->r[10]); // 800A8560
  W32(c->r[28]+0x000000A0u,c->r[9]); // 800A8564
  W32(c->r[28]+0x000001ECu,c->r[8]); // 800A8568
  W32(c->r[28]+0x000001F0u,c->r[8]); // 800A856C
  W8(c->r[28]+0x00000190u,c->r[8]); // 800A8570
  W32(c->r[28]+0x00000170u,c->r[8]); // 800A8574
  W32(c->r[28]+0x00000178u,c->r[7]); // 800A8578
  W32(c->r[28]+0x000001F4u,c->r[8]); // 800A857C
  W32(c->r[28]+0x000001F8u,c->r[8]); // 800A8580
  W32(c->r[28]+0x000001FCu,c->r[8]); // 800A8584
  W32(c->r[28]+0x00000200u,c->r[8]); // 800A8588
  W32(c->r[28]+0x00000204u,c->r[8]); // 800A858C
  W32(c->r[28]+0x00000208u,c->r[8]); // 800A8590
  W32(c->r[28]+0x000001D0u,c->r[6]); // 800A8594
  W32(c->r[28]+0x000001D4u,c->r[5]); // 800A8598
  W32(c->r[28]+0x000001D8u,c->r[4]); // 800A859C
  W32(c->r[28]+0x000001DCu,c->r[0]); // 800A85A0
  W32(c->r[28]+0x000001E0u,c->r[6]); // 800A85A4
  W32(c->r[28]+0x0000020Cu,c->r[8]); // 800A85A8
  W32(c->r[28]+0x00000210u,c->r[8]); // 800A85AC
  W32(c->r[28]+0x00000214u,c->r[8]); // 800A85B0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800A85B4
  c->r[30]=R32(c->r[1]+0x00000028u); // 800A85B8
  c->r[29]=R32(c->r[1]+0x00000024u); // 800A85BC
  c->r[28]=R32(c->r[1]+0x00000020u); // 800A85C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A85C4
  c->lr=c->r[0]; // 800A85C8
  c->r[1]=c->r[1]+0x00000030u; // 800A85CC
  return; // 800A85D0
}

// __dt__13CivilianGirl2Fv
void f_800A85D4(Ctx* __restrict c) {
  trace_call(0x800A85D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A85D4
  c->r[0]=c->lr; // 800A85D8
  cmps(c,0,(int32_t)c->r[3],0); // 800A85DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A85E0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A85E4
  c->r[30]=c->r[3]|c->r[3]; // 800A85E8
  c->r[31]=c->r[4]|c->r[4]; // 800A85EC
  if (crb(c,2)) { goto L_800A8778; } // 800A85F0
  c->r[4]=0u+0x80260000u; // 800A85F4
  c->r[27]=0u+0x00000000u; // 800A85F8
  c->r[4]=c->r[4]+0x00005BF0u; // 800A85FC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A8600
  c->r[28]=0u+0x00000000u; // 800A8604
  c->r[29]=0u+0x00000000u; // 800A8608
L_800A860C:;
  c->r[3]=c->r[30]+c->r[28]; // 800A860C
  c->r[0]=R32(c->r[3]+0x000001F4u); // 800A8610
  cmps(c,0,(int32_t)c->r[0],0); // 800A8614
  if (crb(c,2)) { goto L_800A8654; } // 800A8618
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A861C
  cmps(c,0,(int32_t)c->r[0],0); // 800A8620
  if (!crb(c,2)) { goto L_800A8630; } // 800A8624
  c->lr=0x800A862Cu; f_80078EC8(c); // 800A8628
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A862C
L_800A8630:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8630
  c->r[4]=c->r[30]+c->r[28]; // 800A8634
  c->r[4]=R32(c->r[4]+0x000001F4u); // 800A8638
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A863C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A8640
  c->ctr=c->r[12]; // 800A8644
  if (true) { c->lr=0x800A864Cu; dispatch(c,c->ctr); } // 800A8648
  c->r[3]=c->r[30]+c->r[28]; // 800A864C
  W32(c->r[3]+0x000001F4u,c->r[29]); // 800A8650
L_800A8654:;
  c->r[27]=c->r[27]+0x00000001u; // 800A8654
  c->r[28]=c->r[28]+0x00000004u; // 800A8658
  cmps(c,0,(int32_t)c->r[27],3); // 800A865C
  if (crb(c,0)) { IRQCHK(c); goto L_800A860C; } // 800A8660
  c->r[27]=0u+0x00000000u; // 800A8664
  c->r[28]=0u+0x00000000u; // 800A8668
  c->r[29]=0u+0x00000000u; // 800A866C
L_800A8670:;
  c->r[3]=c->r[30]+c->r[28]; // 800A8670
  c->r[0]=R32(c->r[3]+0x00000200u); // 800A8674
  cmps(c,0,(int32_t)c->r[0],0); // 800A8678
  if (crb(c,2)) { goto L_800A86B8; } // 800A867C
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A8680
  cmps(c,0,(int32_t)c->r[0],0); // 800A8684
  if (!crb(c,2)) { goto L_800A8694; } // 800A8688
  c->lr=0x800A8690u; f_80078EC8(c); // 800A868C
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A8690
L_800A8694:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8694
  c->r[4]=c->r[30]+c->r[28]; // 800A8698
  c->r[4]=R32(c->r[4]+0x00000200u); // 800A869C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A86A0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A86A4
  c->ctr=c->r[12]; // 800A86A8
  if (true) { c->lr=0x800A86B0u; dispatch(c,c->ctr); } // 800A86AC
  c->r[3]=c->r[30]+c->r[28]; // 800A86B0
  W32(c->r[3]+0x00000200u,c->r[29]); // 800A86B4
L_800A86B8:;
  c->r[27]=c->r[27]+0x00000001u; // 800A86B8
  c->r[28]=c->r[28]+0x00000004u; // 800A86BC
  cmps(c,0,(int32_t)c->r[27],3); // 800A86C0
  if (crb(c,0)) { IRQCHK(c); goto L_800A8670; } // 800A86C4
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A86C8
  cmps(c,0,(int32_t)c->r[0],0); // 800A86CC
  if (!crb(c,2)) { goto L_800A86DC; } // 800A86D0
  c->lr=0x800A86D8u; f_800838DC(c); // 800A86D4
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A86D8
L_800A86DC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A86DC
  c->r[4]=R32(c->r[30]+0x00000188u); // 800A86E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A86E4
  c->r[12]=R32(c->r[12]+0x000000C8u); // 800A86E8
  c->ctr=c->r[12]; // 800A86EC
  if (true) { c->lr=0x800A86F4u; dispatch(c,c->ctr); } // 800A86F0
  c->r[29]=0u+0x00000000u; // 800A86F4
  W32(c->r[30]+0x00000188u,c->r[29]); // 800A86F8
  c->r[27]=0u+0x00000000u; // 800A86FC
  c->r[28]=0u+0x00000000u; // 800A8700
L_800A8704:;
  c->r[3]=c->r[30]+c->r[28]; // 800A8704
  c->r[0]=R32(c->r[3]+0x0000015Cu); // 800A8708
  cmps(c,0,(int32_t)c->r[0],0); // 800A870C
  if (crb(c,2)) { goto L_800A874C; } // 800A8710
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A8714
  cmps(c,0,(int32_t)c->r[0],0); // 800A8718
  if (!crb(c,2)) { goto L_800A8728; } // 800A871C
  c->lr=0x800A8724u; f_800838DC(c); // 800A8720
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A8724
L_800A8728:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A8728
  c->r[4]=c->r[30]+c->r[28]; // 800A872C
  c->r[4]=R32(c->r[4]+0x0000015Cu); // 800A8730
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8734
  c->r[12]=R32(c->r[12]+0x000000D0u); // 800A8738
  c->ctr=c->r[12]; // 800A873C
  if (true) { c->lr=0x800A8744u; dispatch(c,c->ctr); } // 800A8740
  c->r[3]=c->r[30]+c->r[28]; // 800A8744
  W32(c->r[3]+0x0000015Cu,c->r[29]); // 800A8748
L_800A874C:;
  c->r[27]=c->r[27]+0x00000001u; // 800A874C
  c->r[28]=c->r[28]+0x00000004u; // 800A8750
  cmps(c,0,(int32_t)c->r[27],4); // 800A8754
  if (crb(c,0)) { IRQCHK(c); goto L_800A8704; } // 800A8758
  c->r[3]=c->r[30]|c->r[30]; // 800A875C
  c->r[4]=0u+0x00000000u; // 800A8760
  c->lr=0x800A8768u; f_80008AD0(c); // 800A8764
  cmps(c,0,(int32_t)c->r[31],0); // 800A8768
  if (!crb(c,1)) { goto L_800A8778; } // 800A876C
  c->r[3]=c->r[30]|c->r[30]; // 800A8770
  c->lr=0x800A8778u; f_8008DE54(c); // 800A8774
L_800A8778:;
  c->r[3]=c->r[30]|c->r[30]; // 800A8778
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A877C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A8780
  c->lr=c->r[0]; // 800A8784
  c->r[1]=c->r[1]+0x00000020u; // 800A8788
  return; // 800A878C
}

// Spawn__13CivilianGirl2F7Vector3R7Matrix3
void f_800A8790(Ctx* __restrict c) {
  trace_call(0x800A8790u);
  {uint32_t ea=c->r[1]+0xFFFFFDA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8790
  c->r[0]=c->lr; // 800A8794
  W32(c->r[1]+0x00000264u,c->r[0]); // 800A8798
  c->r[11]=c->r[1]+0x00000260u; // 800A879C
  c->lr=0x800A87A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A87A0
  c->r[0]=R32(c->r[13]+0xFFFF8AE0u); // 800A87A4
  c->r[29]=c->r[3]|c->r[3]; // 800A87A8
  c->r[30]=c->r[4]|c->r[4]; // 800A87AC
  c->r[31]=c->r[5]|c->r[5]; // 800A87B0
  cmps(c,0,(int32_t)c->r[0],0); // 800A87B4
  if (!crb(c,2)) { goto L_800A87F0; } // 800A87B8
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800A87BC
  cmps(c,0,(int32_t)c->r[0],0); // 800A87C0
  if (!crb(c,2)) { goto L_800A87D0; } // 800A87C4
  c->lr=0x800A87CCu; f_80080758(c); // 800A87C8
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800A87CC
L_800A87D0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800A87D0
  c->r[4]=0u+0x80260000u; // 800A87D4
  c->r[4]=c->r[4]+0x00001BA0u; // 800A87D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A87DC
  c->r[12]=R32(c->r[12]+0x00000034u); // 800A87E0
  c->ctr=c->r[12]; // 800A87E4
  if (true) { c->lr=0x800A87ECu; dispatch(c,c->ctr); } // 800A87E8
  W32(c->r[13]+0xFFFF8AE0u,c->r[3]); // 800A87EC
L_800A87F0:;
  c->r[3]=R32(c->r[13]+0xFFFF8AE0u); // 800A87F0
  c->lr=0x800A87F8u; f_800295C4(c); // 800A87F4
  c->r[4]=c->r[3]|c->r[3]; // 800A87F8
  c->r[3]=c->r[29]|c->r[29]; // 800A87FC
  c->r[5]=c->r[1]+0x00000148u; // 800A8800
  c->r[6]=0u+0x00000100u; // 800A8804
  c->lr=0x800A880Cu; f_80023698(c); // 800A8808
  c->r[28]=0u+0x80260000u; // 800A880C
  c->r[3]=c->r[1]+0x00000048u; // 800A8810
  c->r[4]=c->r[28]+0xFFFFA6F0u; // 800A8814
  c->r[5]=c->r[1]+0x00000148u; // 800A8818
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A881C
  c->lr=0x800A8824u; f_800DA3C8(c); // 800A8820
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A8824
  c->r[4]=c->r[28]+0xFFFFA6F0u; // 800A8828
  c->r[3]=c->r[29]|c->r[29]; // 800A882C
  c->r[5]=c->r[1]+0x00000048u; // 800A8830
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 800A8834
  c->r[4]=c->r[4]+0x0000001Eu; // 800A8838
  c->ctr=c->r[12]; // 800A883C
  if (true) { c->lr=0x800A8844u; dispatch(c,c->ctr); } // 800A8840
  c->r[3]=R32(c->r[29]+0x00000188u); // 800A8844
  c->r[4]=0u+0x00000002u; // 800A8848
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A884C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8850
  {uint32_t ea=c->r[2]+0xFFFF8EE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A8854
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800A8858
  c->ctr=c->r[12]; // 800A885C
  if (true) { c->lr=0x800A8864u; dispatch(c,c->ctr); } // 800A8860
  c->r[0]=0u+0x00000002u; // 800A8864
  W32(c->r[29]+0x0000018Cu,c->r[0]); // 800A8868
  c->r[3]=0u+0x00000120u; // 800A886C
  c->lr=0x800A8874u; f_8008DC84(c); // 800A8870
  cmps(c,0,(int32_t)c->r[3],0); // 800A8874
  c->r[28]=c->r[3]|c->r[3]; // 800A8878
  if (crb(c,2)) { goto L_800A88B8; } // 800A887C
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8880
  c->r[5]=0u+0xFFFFFFFFu; // 800A8884
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800A8888
  c->r[0]=0u+0x00000000u; // 800A888C
  c->r[4]=c->r[13]+0xFFFF8000u; // 800A8890
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800A8894
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800A8898
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A889C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800A88A0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800A88A4
  W32(c->r[3]+0x00000018u,c->r[5]); // 800A88A8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800A88AC
  c->r[3]=c->r[3]+0x0000001Du; // 800A88B0
  c->lr=0x800A88B8u; f_800DB9A8(c); // 800A88B4
L_800A88B8:;
  {uint32_t ea=c->r[2]+0xFFFF8EECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A88B8
  c->r[3]=0u+0x80260000u; // 800A88BC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800A88C0
  c->r[3]=c->r[3]+0xFFFFA6F0u; // 800A88C4
  {uint32_t ea=c->r[2]+0xFFFF8EF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A88C8
  c->r[4]=c->r[3]+0x0000003Au; // 800A88CC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A88D0
  {uint32_t ea=c->r[2]+0xFFFF8EF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A88D4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800A88D8
  c->r[0]=R32(c->r[1]+0x00000038u); // 800A88DC
  W32(c->r[29]+0x000001ECu,c->r[28]); // 800A88E0
  {uint32_t ea=c->r[2]+0xFFFF8EF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A88E4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A88E8
  {uint32_t ea=c->r[2]+0xFFFF8EFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A88EC
  W32(c->r[28]+0x00000000u,c->r[0]); // 800A88F0
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800A88F4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800A88F8
  {uint32_t ea=c->r[2]+0xFFFF8F00u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A88FC
  W32(c->r[28]+0x00000004u,c->r[3]); // 800A8900
  c->r[0]=R32(c->r[1]+0x00000040u); // 800A8904
  W32(c->r[28]+0x00000008u,c->r[0]); // 800A8908
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 800A890C
  c->r[6]=R32(c->r[29]+0x000001ECu); // 800A8910
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800A8914
  c->r[3]=R32(c->r[1]+0x00000030u); // 800A8918
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 800A891C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A8920
  W32(c->r[6]+0x00000010u,c->r[3]); // 800A8924
  W32(c->r[6]+0x00000014u,c->r[0]); // 800A8928
  c->r[3]=R32(c->r[29]+0x00000188u); // 800A892C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8930
  c->r[12]=R32(c->r[12]+0x00000030u); // 800A8934
  c->ctr=c->r[12]; // 800A8938
  if (true) { c->lr=0x800A8940u; dispatch(c,c->ctr); } // 800A893C
  c->r[4]=R32(c->r[29]+0x000001ECu); // 800A8940
  c->r[0]=0u+0x00000001u; // 800A8944
  W32(c->r[4]+0x00000018u,c->r[3]); // 800A8948
  c->r[3]=0u+0x0000000Cu; // 800A894C
  c->r[4]=R32(c->r[29]+0x000001ECu); // 800A8950
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 800A8954
  c->r[28]=R32(c->r[29]+0x000001ECu); // 800A8958
  c->lr=0x800A8960u; f_8008DC84(c); // 800A895C
  cmps(c,0,(int32_t)c->r[3],0); // 800A8960
  if (crb(c,2)) { goto L_800A8974; } // 800A8964
  c->r[0]=0u+0x00000000u; // 800A8968
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A896C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A8970
L_800A8974:;
  W32(c->r[3]+0x00000008u,c->r[28]); // 800A8974
  c->r[4]=R32(c->r[29]+0x000000A8u); // 800A8978
  cmps(c,0,(int32_t)c->r[4],0); // 800A897C
  if (crb(c,2)) { goto L_800A8988; } // 800A8980
  W32(c->r[4]+0x00000000u,c->r[3]); // 800A8984
L_800A8988:;
  c->r[4]=R32(c->r[29]+0x000000A8u); // 800A8988
  c->r[0]=0u+0x00000000u; // 800A898C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A8990
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A8994
  c->r[0]=R32(c->r[29]+0x000000A4u); // 800A8998
  W32(c->r[29]+0x000000A8u,c->r[3]); // 800A899C
  cmps(c,0,(int32_t)c->r[0],0); // 800A89A0
  if (!crb(c,2)) { goto L_800A89AC; } // 800A89A4
  W32(c->r[29]+0x000000A4u,c->r[3]); // 800A89A8
L_800A89AC:;
  c->r[4]=R32(c->r[29]+0x000000ACu); // 800A89AC
  c->r[3]=0u+0x00000120u; // 800A89B0
  c->r[0]=c->r[4]+0x00000001u; // 800A89B4
  W32(c->r[29]+0x000000ACu,c->r[0]); // 800A89B8
  c->lr=0x800A89C0u; f_8008DC84(c); // 800A89BC
  cmps(c,0,(int32_t)c->r[3],0); // 800A89C0
  c->r[28]=c->r[3]|c->r[3]; // 800A89C4
  if (crb(c,2)) { goto L_800A8A04; } // 800A89C8
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A89CC
  c->r[5]=0u+0xFFFFFFFFu; // 800A89D0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800A89D4
  c->r[0]=0u+0x00000000u; // 800A89D8
  c->r[4]=c->r[13]+0xFFFF8000u; // 800A89DC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800A89E0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800A89E4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A89E8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800A89EC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800A89F0
  W32(c->r[3]+0x00000018u,c->r[5]); // 800A89F4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800A89F8
  c->r[3]=c->r[3]+0x0000001Du; // 800A89FC
  c->lr=0x800A8A04u; f_800DB9A8(c); // 800A8A00
L_800A8A04:;
  {uint32_t ea=c->r[2]+0xFFFF8F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8A04
  c->r[3]=0u+0x80260000u; // 800A8A08
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800A8A0C
  c->r[3]=c->r[3]+0xFFFFA6F0u; // 800A8A10
  {uint32_t ea=c->r[2]+0xFFFF8EF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8A14
  c->r[4]=c->r[3]+0x0000003Au; // 800A8A18
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800A8A1C
  {uint32_t ea=c->r[2]+0xFFFF8EF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8A20
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800A8A24
  c->r[0]=R32(c->r[1]+0x00000020u); // 800A8A28
  W32(c->r[29]+0x000001F0u,c->r[28]); // 800A8A2C
  {uint32_t ea=c->r[2]+0xFFFF8F08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8A30
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800A8A34
  {uint32_t ea=c->r[2]+0xFFFF8EFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8A38
  W32(c->r[28]+0x00000000u,c->r[0]); // 800A8A3C
  c->r[3]=R32(c->r[1]+0x00000024u); // 800A8A40
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A8A44
  {uint32_t ea=c->r[2]+0xFFFF8F00u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8A48
  W32(c->r[28]+0x00000004u,c->r[3]); // 800A8A4C
  c->r[0]=R32(c->r[1]+0x00000028u); // 800A8A50
  W32(c->r[28]+0x00000008u,c->r[0]); // 800A8A54
  c->r[5]=R32(c->r[1]+0x00000014u); // 800A8A58
  c->r[6]=R32(c->r[29]+0x000001F0u); // 800A8A5C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A8A60
  c->r[3]=R32(c->r[1]+0x00000018u); // 800A8A64
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 800A8A68
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800A8A6C
  W32(c->r[6]+0x00000010u,c->r[3]); // 800A8A70
  W32(c->r[6]+0x00000014u,c->r[0]); // 800A8A74
  c->r[3]=R32(c->r[29]+0x00000188u); // 800A8A78
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8A7C
  c->r[12]=R32(c->r[12]+0x00000030u); // 800A8A80
  c->ctr=c->r[12]; // 800A8A84
  if (true) { c->lr=0x800A8A8Cu; dispatch(c,c->ctr); } // 800A8A88
  c->r[4]=R32(c->r[29]+0x000001F0u); // 800A8A8C
  c->r[28]=0u+0x00000000u; // 800A8A90
  W32(c->r[4]+0x00000018u,c->r[3]); // 800A8A94
  c->r[3]=0u+0x0000000Cu; // 800A8A98
  c->r[4]=R32(c->r[29]+0x000001F0u); // 800A8A9C
  W8(c->r[4]+0x0000001Cu,c->r[28]); // 800A8AA0
  c->r[27]=R32(c->r[29]+0x000001F0u); // 800A8AA4
  c->lr=0x800A8AACu; f_8008DC84(c); // 800A8AA8
  cmps(c,0,(int32_t)c->r[3],0); // 800A8AAC
  if (crb(c,2)) { goto L_800A8ABC; } // 800A8AB0
  W32(c->r[3]+0x00000004u,c->r[28]); // 800A8AB4
  W32(c->r[3]+0x00000000u,c->r[28]); // 800A8AB8
L_800A8ABC:;
  W32(c->r[3]+0x00000008u,c->r[27]); // 800A8ABC
  c->r[4]=R32(c->r[29]+0x000000A8u); // 800A8AC0
  cmps(c,0,(int32_t)c->r[4],0); // 800A8AC4
  if (crb(c,2)) { goto L_800A8AD0; } // 800A8AC8
  W32(c->r[4]+0x00000000u,c->r[3]); // 800A8ACC
L_800A8AD0:;
  c->r[4]=R32(c->r[29]+0x000000A8u); // 800A8AD0
  c->r[0]=0u+0x00000000u; // 800A8AD4
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A8AD8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A8ADC
  c->r[0]=R32(c->r[29]+0x000000A4u); // 800A8AE0
  W32(c->r[29]+0x000000A8u,c->r[3]); // 800A8AE4
  cmps(c,0,(int32_t)c->r[0],0); // 800A8AE8
  if (!crb(c,2)) { goto L_800A8AF4; } // 800A8AEC
  W32(c->r[29]+0x000000A4u,c->r[3]); // 800A8AF0
L_800A8AF4:;
  c->r[6]=R32(c->r[29]+0x000000ACu); // 800A8AF4
  c->r[3]=c->r[29]|c->r[29]; // 800A8AF8
  c->r[5]=c->r[31]|c->r[31]; // 800A8AFC
  c->r[4]=c->r[1]+0x00000008u; // 800A8B00
  c->r[0]=c->r[6]+0x00000001u; // 800A8B04
  W32(c->r[29]+0x000000ACu,c->r[0]); // 800A8B08
  c->r[6]=R32(c->r[30]+0x00000000u); // 800A8B0C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800A8B10
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A8B14
  W32(c->r[1]+0x00000008u,c->r[6]); // 800A8B18
  c->r[0]=R32(c->r[30]+0x00000008u); // 800A8B1C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A8B20
  c->lr=0x800A8B28u; f_80008E80(c); // 800A8B24
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A8B28
  cmps(c,0,(int32_t)c->r[0],0); // 800A8B2C
  if (!crb(c,2)) { goto L_800A8B3C; } // 800A8B30
  c->lr=0x800A8B38u; f_800838DC(c); // 800A8B34
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A8B38
L_800A8B3C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A8B3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8B40
  c->r[12]=R32(c->r[12]+0x000000CCu); // 800A8B44
  c->ctr=c->r[12]; // 800A8B48
  if (true) { c->lr=0x800A8B50u; dispatch(c,c->ctr); } // 800A8B4C
  W32(c->r[29]+0x0000015Cu,c->r[3]); // 800A8B50
  c->r[5]=0u+0x80260000u; // 800A8B54
  c->r[5]=c->r[5]+0xFFFFA6F0u; // 800A8B58
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8B5C
  c->r[4]=c->r[5]+0x00000048u; // 800A8B60
  c->r[5]=c->r[5]+0x0000005Cu; // 800A8B64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8B68
  c->ctr=c->r[12]; // 800A8B6C
  if (true) { c->lr=0x800A8B74u; dispatch(c,c->ctr); } // 800A8B70
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A8B74
  cmps(c,0,(int32_t)c->r[0],0); // 800A8B78
  if (!crb(c,2)) { goto L_800A8B88; } // 800A8B7C
  c->lr=0x800A8B84u; f_800838DC(c); // 800A8B80
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A8B84
L_800A8B88:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A8B88
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8B8C
  c->r[12]=R32(c->r[12]+0x000000CCu); // 800A8B90
  c->ctr=c->r[12]; // 800A8B94
  if (true) { c->lr=0x800A8B9Cu; dispatch(c,c->ctr); } // 800A8B98
  W32(c->r[29]+0x00000160u,c->r[3]); // 800A8B9C
  c->r[5]=0u+0x80260000u; // 800A8BA0
  c->r[5]=c->r[5]+0xFFFFA6F0u; // 800A8BA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8BA8
  c->r[4]=c->r[5]+0x00000072u; // 800A8BAC
  c->r[5]=c->r[5]+0x0000005Cu; // 800A8BB0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8BB4
  c->ctr=c->r[12]; // 800A8BB8
  if (true) { c->lr=0x800A8BC0u; dispatch(c,c->ctr); } // 800A8BBC
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A8BC0
  cmps(c,0,(int32_t)c->r[0],0); // 800A8BC4
  if (!crb(c,2)) { goto L_800A8BD4; } // 800A8BC8
  c->lr=0x800A8BD0u; f_800838DC(c); // 800A8BCC
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A8BD0
L_800A8BD4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A8BD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8BD8
  c->r[12]=R32(c->r[12]+0x000000CCu); // 800A8BDC
  c->ctr=c->r[12]; // 800A8BE0
  if (true) { c->lr=0x800A8BE8u; dispatch(c,c->ctr); } // 800A8BE4
  W32(c->r[29]+0x00000164u,c->r[3]); // 800A8BE8
  c->r[5]=0u+0x80260000u; // 800A8BEC
  c->r[5]=c->r[5]+0xFFFFA6F0u; // 800A8BF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8BF4
  c->r[4]=c->r[5]+0x00000085u; // 800A8BF8
  c->r[5]=c->r[5]+0x0000005Cu; // 800A8BFC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8C00
  c->ctr=c->r[12]; // 800A8C04
  if (true) { c->lr=0x800A8C0Cu; dispatch(c,c->ctr); } // 800A8C08
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 800A8C0C
  cmps(c,0,(int32_t)c->r[0],0); // 800A8C10
  if (!crb(c,2)) { goto L_800A8C20; } // 800A8C14
  c->lr=0x800A8C1Cu; f_800838DC(c); // 800A8C18
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800A8C1C
L_800A8C20:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 800A8C20
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8C24
  c->r[12]=R32(c->r[12]+0x000000CCu); // 800A8C28
  c->ctr=c->r[12]; // 800A8C2C
  if (true) { c->lr=0x800A8C34u; dispatch(c,c->ctr); } // 800A8C30
  W32(c->r[29]+0x00000168u,c->r[3]); // 800A8C34
  c->r[5]=0u+0x80260000u; // 800A8C38
  c->r[5]=c->r[5]+0xFFFFA6F0u; // 800A8C3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8C40
  c->r[4]=c->r[5]+0x0000009Au; // 800A8C44
  c->r[5]=c->r[5]+0x0000005Cu; // 800A8C48
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8C4C
  c->ctr=c->r[12]; // 800A8C50
  if (true) { c->lr=0x800A8C58u; dispatch(c,c->ctr); } // 800A8C54
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A8C58
  cmps(c,0,(int32_t)c->r[0],0); // 800A8C5C
  if (!crb(c,2)) { goto L_800A8C6C; } // 800A8C60
  c->lr=0x800A8C68u; f_80078EC8(c); // 800A8C64
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A8C68
L_800A8C6C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8C6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8C70
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A8C74
  c->ctr=c->r[12]; // 800A8C78
  if (true) { c->lr=0x800A8C80u; dispatch(c,c->ctr); } // 800A8C7C
  W32(c->r[29]+0x00000158u,c->r[3]); // 800A8C80
  c->r[4]=0u+0x80260000u; // 800A8C84
  c->r[4]=c->r[4]+0xFFFFA6F0u; // 800A8C88
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8C8C
  c->r[4]=c->r[4]+0x000000B1u; // 800A8C90
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8C94
  c->ctr=c->r[12]; // 800A8C98
  if (true) { c->lr=0x800A8CA0u; dispatch(c,c->ctr); } // 800A8C9C
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A8CA0
  cmps(c,0,(int32_t)c->r[0],0); // 800A8CA4
  if (!crb(c,2)) { goto L_800A8CB4; } // 800A8CA8
  c->lr=0x800A8CB0u; f_80078EC8(c); // 800A8CAC
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A8CB0
L_800A8CB4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8CB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8CB8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A8CBC
  c->ctr=c->r[12]; // 800A8CC0
  if (true) { c->lr=0x800A8CC8u; dispatch(c,c->ctr); } // 800A8CC4
  W32(c->r[29]+0x000001F4u,c->r[3]); // 800A8CC8
  c->r[4]=0u+0x80260000u; // 800A8CCC
  c->r[4]=c->r[4]+0xFFFFA6F0u; // 800A8CD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8CD4
  c->r[4]=c->r[4]+0x000000E1u; // 800A8CD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8CDC
  c->ctr=c->r[12]; // 800A8CE0
  if (true) { c->lr=0x800A8CE8u; dispatch(c,c->ctr); } // 800A8CE4
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A8CE8
  cmps(c,0,(int32_t)c->r[0],0); // 800A8CEC
  if (!crb(c,2)) { goto L_800A8CFC; } // 800A8CF0
  c->lr=0x800A8CF8u; f_80078EC8(c); // 800A8CF4
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A8CF8
L_800A8CFC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8CFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8D00
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A8D04
  c->ctr=c->r[12]; // 800A8D08
  if (true) { c->lr=0x800A8D10u; dispatch(c,c->ctr); } // 800A8D0C
  W32(c->r[29]+0x000001F8u,c->r[3]); // 800A8D10
  c->r[4]=0u+0x80260000u; // 800A8D14
  c->r[4]=c->r[4]+0xFFFFA6F0u; // 800A8D18
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8D1C
  c->r[4]=c->r[4]+0x00000111u; // 800A8D20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8D24
  c->ctr=c->r[12]; // 800A8D28
  if (true) { c->lr=0x800A8D30u; dispatch(c,c->ctr); } // 800A8D2C
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A8D30
  cmps(c,0,(int32_t)c->r[0],0); // 800A8D34
  if (!crb(c,2)) { goto L_800A8D44; } // 800A8D38
  c->lr=0x800A8D40u; f_80078EC8(c); // 800A8D3C
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A8D40
L_800A8D44:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8D44
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8D48
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A8D4C
  c->ctr=c->r[12]; // 800A8D50
  if (true) { c->lr=0x800A8D58u; dispatch(c,c->ctr); } // 800A8D54
  W32(c->r[29]+0x000001FCu,c->r[3]); // 800A8D58
  c->r[4]=0u+0x80260000u; // 800A8D5C
  c->r[4]=c->r[4]+0xFFFFA6F0u; // 800A8D60
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8D64
  c->r[4]=c->r[4]+0x00000141u; // 800A8D68
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8D6C
  c->ctr=c->r[12]; // 800A8D70
  if (true) { c->lr=0x800A8D78u; dispatch(c,c->ctr); } // 800A8D74
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A8D78
  cmps(c,0,(int32_t)c->r[0],0); // 800A8D7C
  if (!crb(c,2)) { goto L_800A8D8C; } // 800A8D80
  c->lr=0x800A8D88u; f_80078EC8(c); // 800A8D84
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A8D88
L_800A8D8C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8D8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8D90
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A8D94
  c->ctr=c->r[12]; // 800A8D98
  if (true) { c->lr=0x800A8DA0u; dispatch(c,c->ctr); } // 800A8D9C
  W32(c->r[29]+0x00000200u,c->r[3]); // 800A8DA0
  c->r[4]=0u+0x80260000u; // 800A8DA4
  c->r[4]=c->r[4]+0xFFFFA6F0u; // 800A8DA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8DAC
  c->r[4]=c->r[4]+0x00000171u; // 800A8DB0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8DB4
  c->ctr=c->r[12]; // 800A8DB8
  if (true) { c->lr=0x800A8DC0u; dispatch(c,c->ctr); } // 800A8DBC
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A8DC0
  cmps(c,0,(int32_t)c->r[0],0); // 800A8DC4
  if (!crb(c,2)) { goto L_800A8DD4; } // 800A8DC8
  c->lr=0x800A8DD0u; f_80078EC8(c); // 800A8DCC
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A8DD0
L_800A8DD4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8DD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8DD8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A8DDC
  c->ctr=c->r[12]; // 800A8DE0
  if (true) { c->lr=0x800A8DE8u; dispatch(c,c->ctr); } // 800A8DE4
  W32(c->r[29]+0x00000204u,c->r[3]); // 800A8DE8
  c->r[4]=0u+0x80260000u; // 800A8DEC
  c->r[4]=c->r[4]+0xFFFFA6F0u; // 800A8DF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8DF4
  c->r[4]=c->r[4]+0x0000019Fu; // 800A8DF8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8DFC
  c->ctr=c->r[12]; // 800A8E00
  if (true) { c->lr=0x800A8E08u; dispatch(c,c->ctr); } // 800A8E04
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A8E08
  cmps(c,0,(int32_t)c->r[0],0); // 800A8E0C
  if (!crb(c,2)) { goto L_800A8E1C; } // 800A8E10
  c->lr=0x800A8E18u; f_80078EC8(c); // 800A8E14
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A8E18
L_800A8E1C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8E1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8E20
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A8E24
  c->ctr=c->r[12]; // 800A8E28
  if (true) { c->lr=0x800A8E30u; dispatch(c,c->ctr); } // 800A8E2C
  W32(c->r[29]+0x00000208u,c->r[3]); // 800A8E30
  c->r[4]=0u+0x80260000u; // 800A8E34
  c->r[4]=c->r[4]+0xFFFFA6F0u; // 800A8E38
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8E3C
  c->r[4]=c->r[4]+0x000001CDu; // 800A8E40
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8E44
  c->ctr=c->r[12]; // 800A8E48
  if (true) { c->lr=0x800A8E50u; dispatch(c,c->ctr); } // 800A8E4C
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800A8E50
  cmps(c,0,(int32_t)c->r[0],0); // 800A8E54
  if (!crb(c,2)) { goto L_800A8E64; } // 800A8E58
  c->lr=0x800A8E60u; f_80078EC8(c); // 800A8E5C
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800A8E60
L_800A8E64:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800A8E64
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8E68
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A8E6C
  c->ctr=c->r[12]; // 800A8E70
  if (true) { c->lr=0x800A8E78u; dispatch(c,c->ctr); } // 800A8E74
  W32(c->r[29]+0x000001E4u,c->r[3]); // 800A8E78
  c->r[4]=0u+0x80260000u; // 800A8E7C
  c->r[4]=c->r[4]+0xFFFFA6F0u; // 800A8E80
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8E84
  c->r[4]=c->r[4]+0x000001FBu; // 800A8E88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8E8C
  c->ctr=c->r[12]; // 800A8E90
  if (true) { c->lr=0x800A8E98u; dispatch(c,c->ctr); } // 800A8E94
  c->r[11]=c->r[1]+0x00000260u; // 800A8E98
  c->lr=0x800A8EA0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A8E9C
  c->r[0]=R32(c->r[1]+0x00000264u); // 800A8EA0
  c->lr=c->r[0]; // 800A8EA4
  c->r[1]=c->r[1]+0x00000260u; // 800A8EA8
  return; // 800A8EAC
}

// InitializeLife__13CivilianGirl2Fv
void f_800A8EB0(Ctx* __restrict c) {
  trace_call(0x800A8EB0u);
  c->r[0]=0u+0x00000001u; // 800A8EB0
  W32(c->r[3]+0x00000058u,c->r[0]); // 800A8EB4
  return; // 800A8EB8
}

// Update__13CivilianGirl2Ff
void f_800A8EBC(Ctx* __restrict c) {
  trace_call(0x800A8EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8EBC
  c->r[0]=c->lr; // 800A8EC0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A8EC4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800A8EC8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800A8ECC
  c->f[31]=c->f[1]; // 800A8ED0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800A8ED4
  c->r[31]=c->r[3]|c->r[3]; // 800A8ED8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8EDC
  c->r[12]=R32(c->r[12]+0x00000078u); // 800A8EE0
  c->ctr=c->r[12]; // 800A8EE4
  if (true) { c->lr=0x800A8EECu; dispatch(c,c->ctr); } // 800A8EE8
  c->r[0]=R32(c->r[31]+0x00000058u); // 800A8EEC
  c->r[3]=0u+0x00000002u; // 800A8EF0
  W32(c->r[31]+0x000001D0u,c->r[3]); // 800A8EF4
  cmps(c,0,(int32_t)c->r[0],0); // 800A8EF8
  if (!crb(c,1)) { goto L_800A9078; } // 800A8EFC
  c->r[5]=R32(c->r[31]+0x000000F4u); // 800A8F00
  c->r[3]=c->r[31]|c->r[31]; // 800A8F04
  c->r[0]=R32(c->r[31]+0x000000F8u); // 800A8F08
  c->r[4]=c->r[1]+0x00000020u; // 800A8F0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A8F10
  W32(c->r[1]+0x00000020u,c->r[5]); // 800A8F14
  c->r[0]=R32(c->r[31]+0x000000FCu); // 800A8F18
  W32(c->r[1]+0x00000028u,c->r[0]); // 800A8F1C
  c->r[12]=R32(c->r[31]+0x00000000u); // 800A8F20
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 800A8F24
  c->ctr=c->r[12]; // 800A8F28
  if (true) { c->lr=0x800A8F30u; dispatch(c,c->ctr); } // 800A8F2C
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8F30
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A8F34
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A8F38
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 800A8F3C
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A8F40
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 800A8F44
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A8F48
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800A8F4C
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[2]); // 800A8F50
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[3],c->f[0])); // 800A8F54
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 800A8F58
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 800A8F5C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[1],c->f[0])); // 800A8F60
  c->lr=0x800A8F68u; f_800E4168(c); // 800A8F64
  c->f[3]=c->ps1[3]=S(c->f[1]); // 800A8F68
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8F6C
  fcmp(c,0,c->f[3],c->f[0]); // 800A8F70
  if (crb(c,2)) { goto L_800A8F9C; } // 800A8F74
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A8F78
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8F7C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8F80
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[3]); // 800A8F84
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 800A8F88
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 800A8F8C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800A8F90
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 800A8F94
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800A8F98
L_800A8F9C:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8F9C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8FA0
  {uint32_t ea=c->r[31]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A8FA4
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 800A8FA8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8FAC
  {uint32_t ea=c->r[31]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A8FB0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8FB4
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[0],c->f[4])); // 800A8FB8
  {uint32_t ea=c->r[2]+0xFFFF8F0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8FBC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[1],c->f[3])); // 800A8FC0
  fcmp(c,0,c->f[1],c->f[0]); // 800A8FC4
  if (!crb(c,1)) { goto L_800A9018; } // 800A8FC8
  c->r[0]=R8(c->r[31]+0x00000102u); // 800A8FCC
  cmps(c,0,(int32_t)c->r[0],0); // 800A8FD0
  if (!crb(c,2)) { goto L_800A9018; } // 800A8FD4
  c->r[5]=R32(c->r[31]+0x000000F4u); // 800A8FD8
  c->f[1]=c->f[31]; // 800A8FDC
  c->r[0]=R32(c->r[31]+0x000000F8u); // 800A8FE0
  c->r[3]=c->r[31]|c->r[31]; // 800A8FE4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800A8FE8
  c->r[4]=c->r[1]+0x00000014u; // 800A8FEC
  W32(c->r[1]+0x00000014u,c->r[5]); // 800A8FF0
  c->r[0]=R32(c->r[31]+0x000000FCu); // 800A8FF4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A8FF8
  c->r[12]=R32(c->r[31]+0x00000000u); // 800A8FFC
  c->r[12]=R32(c->r[12]+0x00000080u); // 800A9000
  c->ctr=c->r[12]; // 800A9004
  if (true) { c->lr=0x800A900Cu; dispatch(c,c->ctr); } // 800A9008
  c->r[0]=R32(c->r[31]+0x0000020Cu); // 800A900C
  W32(c->r[31]+0x000001D0u,c->r[0]); // 800A9010
  goto L_800A9020; // 800A9014
L_800A9018:;
  c->r[0]=0u+0x00000002u; // 800A9018
  W32(c->r[31]+0x000001D0u,c->r[0]); // 800A901C
L_800A9020:;
  c->r[0]=R8(c->r[31]+0x000001ACu); // 800A9020
  cmps(c,0,(int32_t)c->r[0],0); // 800A9024
  if (crb(c,2)) { goto L_800A9080; } // 800A9028
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A902C
  c->r[4]=c->r[1]+0x00000008u; // 800A9030
  c->r[0]=R32(c->r[31]+0x00000060u); // 800A9034
  c->r[5]=0u+0xFFFFFFFFu; // 800A9038
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A903C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A9040
  c->r[0]=R32(c->r[31]+0x00000064u); // 800A9044
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A9048
  c->r[0]=R32(c->r[31]+0x00000210u); // 800A904C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A9050
  c->r[3]=c->r[31]+c->r[0]; // 800A9054
  c->r[3]=R32(c->r[3]+0x000001F4u); // 800A9058
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A905C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800A9060
  c->ctr=c->r[12]; // 800A9064
  if (true) { c->lr=0x800A906Cu; dispatch(c,c->ctr); } // 800A9068
  c->r[0]=R32(c->r[31]+0x0000020Cu); // 800A906C
  W32(c->r[31]+0x000001D0u,c->r[0]); // 800A9070
  goto L_800A9080; // 800A9074
L_800A9078:;
  c->r[0]=0u+0x00000005u; // 800A9078
  W32(c->r[31]+0x000001D0u,c->r[0]); // 800A907C
L_800A9080:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800A9080
  c->f[1]=c->f[31]; // 800A9084
  c->r[3]=c->r[31]|c->r[31]; // 800A9088
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 800A908C
  c->ctr=c->r[12]; // 800A9090
  if (true) { c->lr=0x800A9098u; dispatch(c,c->ctr); } // 800A9094
  c->r[4]=R32(c->r[31]+0x000001D0u); // 800A9098
  c->r[0]=R32(c->r[31]+0x0000018Cu); // 800A909C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800A90A0
  if (crb(c,2)) { goto L_800A90CC; } // 800A90A4
  c->r[0]=R32(c->r[31]+0x00000108u); // 800A90A8
  cmps(c,0,(int32_t)c->r[0],-1); // 800A90AC
  if (!crb(c,2)) { goto L_800A90CC; } // 800A90B0
  c->r[12]=R32(c->r[31]+0x00000000u); // 800A90B4
  c->r[3]=c->r[31]|c->r[31]; // 800A90B8
  c->r[5]=0u+0x00000001u; // 800A90BC
  c->r[12]=R32(c->r[12]+0x00000044u); // 800A90C0
  c->ctr=c->r[12]; // 800A90C4
  if (true) { c->lr=0x800A90CCu; dispatch(c,c->ctr); } // 800A90C8
L_800A90CC:;
  c->r[0]=R32(c->r[31]+0x0000018Cu); // 800A90CC
  cmps(c,0,(int32_t)c->r[0],2); // 800A90D0
  if (crb(c,2)) { goto L_800A90E4; } // 800A90D4
  c->r[0]=R32(c->r[31]+0x00000108u); // 800A90D8
  cmps(c,0,(int32_t)c->r[0],2); // 800A90DC
  if (!crb(c,2)) { goto L_800A9100; } // 800A90E0
L_800A90E4:;
  c->r[3]=R32(c->r[31]+0x000001ECu); // 800A90E4
  c->r[4]=0u+0x00000001u; // 800A90E8
  c->r[0]=0u+0x00000000u; // 800A90EC
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800A90F0
  c->r[3]=R32(c->r[31]+0x000001F0u); // 800A90F4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800A90F8
  goto L_800A9118; // 800A90FC
L_800A9100:;
  c->r[3]=R32(c->r[31]+0x000001ECu); // 800A9100
  c->r[4]=0u+0x00000000u; // 800A9104
  c->r[0]=0u+0x00000001u; // 800A9108
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800A910C
  c->r[3]=R32(c->r[31]+0x000001F0u); // 800A9110
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800A9114
L_800A9118:;
  c->f[1]=c->f[31]; // 800A9118
  c->r[3]=c->r[31]|c->r[31]; // 800A911C
  c->lr=0x800A9124u; f_800239DC(c); // 800A9120
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A9124
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800A9128
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800A912C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800A9130
  c->lr=c->r[0]; // 800A9134
  c->r[1]=c->r[1]+0x00000050u; // 800A9138
  return; // 800A913C
}

// MoveTo__13CivilianGirl2F7Vector3P22ActionNodeScriptEntity
void f_800A9140(Ctx* __restrict c) {
  trace_call(0x800A9140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9140
  c->r[0]=c->lr; // 800A9144
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A9148
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A914C
  c->r[31]=c->r[3]|c->r[3]; // 800A9150
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A9154
  c->r[6]=R32(c->r[4]+0x00000000u); // 800A9158
  c->r[0]=R32(c->r[4]+0x00000004u); // 800A915C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A9160
  W32(c->r[1]+0x00000008u,c->r[6]); // 800A9164
  c->r[0]=R32(c->r[4]+0x00000008u); // 800A9168
  c->r[4]=c->r[1]+0x00000008u; // 800A916C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A9170
  c->lr=0x800A9178u; f_80025EC8(c); // 800A9174
  c->r[30]=0u+0x00000000u; // 800A9178
  c->lr=0x800A9180u; f_800DA49C(c); // 800A917C
  c->r[4]=0u+0x51EC0000u; // 800A9180
  c->r[0]=c->r[4]+0xFFFF851Fu; // 800A9184
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800A9188
  c->r[0]=sraw(c,c->r[0],5); // 800A918C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800A9190
  c->r[0]=c->r[0]+c->r[4]; // 800A9194
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800A9198
  c->r[0]=c->r[3]-c->r[0]; // 800A919C
  cmps(c,0,(int32_t)c->r[0],50); // 800A91A0
  if (!crb(c,1)) { goto L_800A91AC; } // 800A91A4
  c->r[30]=0u+0x00000001u; // 800A91A8
L_800A91AC:;
  c->r[0]=R32(c->r[31]+0x00000214u); // 800A91AC
  c->r[4]=0u+0xFFFFFFFFu; // 800A91B0
  W32(c->r[31]+0x0000020Cu,c->r[30]); // 800A91B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A91B8
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A91BC
  c->r[3]=c->r[31]+c->r[0]; // 800A91C0
  c->r[3]=R32(c->r[3]+0x00000200u); // 800A91C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A91C8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A91CC
  c->ctr=c->r[12]; // 800A91D0
  if (true) { c->lr=0x800A91D8u; dispatch(c,c->ctr); } // 800A91D4
  c->r[0]=R32(c->r[31]+0x00000210u); // 800A91D8
  c->r[4]=0u+0xFFFFFFFFu; // 800A91DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A91E0
  c->r[3]=c->r[31]+c->r[0]; // 800A91E4
  c->r[3]=R32(c->r[3]+0x000001F4u); // 800A91E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A91EC
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 800A91F0
  c->ctr=c->r[12]; // 800A91F4
  if (true) { c->lr=0x800A91FCu; dispatch(c,c->ctr); } // 800A91F8
  cmps(c,0,(int32_t)c->r[3],0); // 800A91FC
  if (!crb(c,2)) { goto L_800A924C; } // 800A9200
  c->lr=0x800A9208u; f_800DA49C(c); // 800A9204
  c->r[4]=0u+0x55550000u; // 800A9208
  c->r[5]=0u+0x00000001u; // 800A920C
  c->r[0]=c->r[4]+0x00005556u; // 800A9210
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800A9214
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 800A9218
  c->r[0]=c->r[4]+c->r[0]; // 800A921C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800A9220
  c->r[0]=c->r[3]-c->r[0]; // 800A9224
  W32(c->r[31]+0x00000210u,c->r[0]); // 800A9228
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A922C
  c->r[3]=c->r[31]|c->r[31]; // 800A9230
  c->r[12]=R32(c->r[31]+0x00000000u); // 800A9234
  c->r[4]=c->r[31]+c->r[0]; // 800A9238
  c->r[4]=R32(c->r[4]+0x000001F4u); // 800A923C
  c->r[12]=R32(c->r[12]+0x00000054u); // 800A9240
  c->ctr=c->r[12]; // 800A9244
  if (true) { c->lr=0x800A924Cu; dispatch(c,c->ctr); } // 800A9248
L_800A924C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A924C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A9250
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A9254
  c->lr=c->r[0]; // 800A9258
  c->r[1]=c->r[1]+0x00000020u; // 800A925C
  return; // 800A9260
}

// DoneMoving__13CivilianGirl2Fv
void f_800A9264(Ctx* __restrict c) {
  trace_call(0x800A9264u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9264
  c->r[0]=c->lr; // 800A9268
  c->r[4]=0u+0xFFFFFFFFu; // 800A926C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A9270
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A9274
  c->r[31]=c->r[3]|c->r[3]; // 800A9278
  c->r[0]=R32(c->r[3]+0x00000214u); // 800A927C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A9280
  c->r[3]=c->r[3]+c->r[0]; // 800A9284
  c->r[3]=R32(c->r[3]+0x00000200u); // 800A9288
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A928C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 800A9290
  c->ctr=c->r[12]; // 800A9294
  if (true) { c->lr=0x800A929Cu; dispatch(c,c->ctr); } // 800A9298
  cmps(c,0,(int32_t)c->r[3],0); // 800A929C
  if (!crb(c,2)) { goto L_800A932C; } // 800A92A0
  c->lr=0x800A92A8u; f_800DA49C(c); // 800A92A4
  c->r[4]=0u+0x55550000u; // 800A92A8
  c->r[7]=R32(c->r[31]+0x0000005Cu); // 800A92AC
  c->r[0]=c->r[4]+0x00005556u; // 800A92B0
  c->r[6]=R32(c->r[31]+0x00000060u); // 800A92B4
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800A92B8
  c->r[4]=c->r[1]+0x00000008u; // 800A92BC
  c->r[5]=0u+0xFFFFFFFFu; // 800A92C0
  c->r[0]=rotl(c->r[8],1)&0x00000001u; // 800A92C4
  c->r[0]=c->r[8]+c->r[0]; // 800A92C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800A92CC
  c->r[0]=c->r[3]-c->r[0]; // 800A92D0
  W32(c->r[31]+0x00000214u,c->r[0]); // 800A92D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A92D8
  W32(c->r[1]+0x00000008u,c->r[7]); // 800A92DC
  c->r[3]=c->r[31]+c->r[0]; // 800A92E0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800A92E4
  c->r[0]=R32(c->r[31]+0x00000064u); // 800A92E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A92EC
  c->r[3]=R32(c->r[3]+0x00000200u); // 800A92F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A92F4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800A92F8
  c->ctr=c->r[12]; // 800A92FC
  if (true) { c->lr=0x800A9304u; dispatch(c,c->ctr); } // 800A9300
  c->r[0]=R32(c->r[31]+0x00000214u); // 800A9304
  c->r[4]=0u+0x00000001u; // 800A9308
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A930C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A9310
  c->r[3]=c->r[31]+c->r[0]; // 800A9314
  c->r[3]=R32(c->r[3]+0x00000200u); // 800A9318
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A931C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800A9320
  c->ctr=c->r[12]; // 800A9324
  if (true) { c->lr=0x800A932Cu; dispatch(c,c->ctr); } // 800A9328
L_800A932C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A932C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A9330
  c->lr=c->r[0]; // 800A9334
  c->r[1]=c->r[1]+0x00000020u; // 800A9338
  return; // 800A933C
}

// TakeDamage__13CivilianGirl2FP6PlayeriP6WeaponP6HitBox
void f_800A9340(Ctx* __restrict c) {
  trace_call(0x800A9340u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9340
  c->r[0]=c->lr; // 800A9344
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A9348
  c->r[11]=c->r[1]+0x00000020u; // 800A934C
  c->lr=0x800A9354u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A9350
  c->r[0]=R8(c->r[3]+0x00000009u); // 800A9354
  c->r[27]=c->r[3]|c->r[3]; // 800A9358
  c->r[28]=c->r[4]|c->r[4]; // 800A935C
  c->r[29]=c->r[5]|c->r[5]; // 800A9360
  cmps(c,0,(int32_t)c->r[0],0); // 800A9364
  c->r[30]=c->r[6]|c->r[6]; // 800A9368
  c->r[31]=c->r[7]|c->r[7]; // 800A936C
  if (!crb(c,2)) { goto L_800A93F8; } // 800A9370
  c->r[0]=R32(c->r[3]+0x00000058u); // 800A9374
  c->r[0]=c->r[0]-c->r[5]; cr0(c,c->r[0]); // 800A9378
  if (crb(c,1)) { goto L_800A93E0; } // 800A937C
  cmps(c,0,(int32_t)c->r[4],0); // 800A9380
  if (crb(c,2)) { goto L_800A9390; } // 800A9384
  c->r[0]=R32(c->r[4]+0x00000000u); // 800A9388
  W32(c->r[3]+0x0000016Cu,c->r[0]); // 800A938C
L_800A9390:;
  c->r[0]=R32(c->r[3]+0x00000210u); // 800A9390
  c->r[4]=0u+0xFFFFFFFFu; // 800A9394
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A9398
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A939C
  c->r[3]=c->r[3]+c->r[0]; // 800A93A0
  c->r[3]=R32(c->r[3]+0x000001F4u); // 800A93A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A93A8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A93AC
  c->ctr=c->r[12]; // 800A93B0
  if (true) { c->lr=0x800A93B8u; dispatch(c,c->ctr); } // 800A93B4
  c->r[0]=R32(c->r[27]+0x00000214u); // 800A93B8
  c->r[4]=0u+0xFFFFFFFFu; // 800A93BC
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A93C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A93C4
  c->r[3]=c->r[27]+c->r[0]; // 800A93C8
  c->r[3]=R32(c->r[3]+0x00000200u); // 800A93CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A93D0
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A93D4
  c->ctr=c->r[12]; // 800A93D8
  if (true) { c->lr=0x800A93E0u; dispatch(c,c->ctr); } // 800A93DC
L_800A93E0:;
  c->r[3]=c->r[27]|c->r[27]; // 800A93E0
  c->r[4]=c->r[28]|c->r[28]; // 800A93E4
  c->r[5]=c->r[29]|c->r[29]; // 800A93E8
  c->r[6]=c->r[30]|c->r[30]; // 800A93EC
  c->r[7]=c->r[31]|c->r[31]; // 800A93F0
  c->lr=0x800A93F8u; f_80008DF4(c); // 800A93F4
L_800A93F8:;
  c->r[11]=c->r[1]+0x00000020u; // 800A93F8
  c->lr=0x800A9400u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A93FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A9400
  c->lr=c->r[0]; // 800A9404
  c->r[1]=c->r[1]+0x00000020u; // 800A9408
  return; // 800A940C
}

// SetAbducter__13CivilianGirl2FP12FlyingSaucer
void f_800A9410(Ctx* __restrict c) {
  trace_call(0x800A9410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9410
  c->r[0]=c->lr; // 800A9414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A941C
  c->r[31]=c->r[3]|c->r[3]; // 800A9420
  c->lr=0x800A9428u; f_80008C94(c); // 800A9424
  c->r[0]=R32(c->r[31]+0x000001E8u); // 800A9428
  cmps(c,0,(int32_t)c->r[0],0); // 800A942C
  if (crb(c,2)) { goto L_800A9484; } // 800A9430
  c->r[0]=R32(c->r[31]+0x00000210u); // 800A9434
  c->r[4]=0u+0xFFFFFFFFu; // 800A9438
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A943C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A9440
  c->r[3]=c->r[31]+c->r[0]; // 800A9444
  c->r[3]=R32(c->r[3]+0x000001F4u); // 800A9448
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A944C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A9450
  c->ctr=c->r[12]; // 800A9454
  if (true) { c->lr=0x800A945Cu; dispatch(c,c->ctr); } // 800A9458
  c->r[0]=R32(c->r[31]+0x00000214u); // 800A945C
  c->r[4]=0u+0xFFFFFFFFu; // 800A9460
  {uint32_t ea=c->r[2]+0xFFFF8EDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A9464
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A9468
  c->r[3]=c->r[31]+c->r[0]; // 800A946C
  c->r[3]=R32(c->r[3]+0x00000200u); // 800A9470
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A9474
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A9478
  c->ctr=c->r[12]; // 800A947C
  if (true) { c->lr=0x800A9484u; dispatch(c,c->ctr); } // 800A9480
L_800A9484:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A9484
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A9488
  c->lr=c->r[0]; // 800A948C
  c->r[1]=c->r[1]+0x00000010u; // 800A9490
  return; // 800A9494
}

// GetPoints__13CivilianGirl2Fv
void f_800A9498(Ctx* __restrict c) {
  trace_call(0x800A9498u);
  c->r[3]=0u+0xFFFFFC18u; // 800A9498
  return; // 800A949C
}

// PPCMfmsr
void f_800A94A0(Ctx* __restrict c) {
  trace_call(0x800A94A0u);
  c->r[3]=c->msr; // 800A94A0
  return; // 800A94A4
}

// PPCMtmsr
void f_800A94A8(Ctx* __restrict c) {
  trace_call(0x800A94A8u);
  c->msr=c->r[3]; // 800A94A8
  return; // 800A94AC
}

// PPCMfhid0
void f_800A94B0(Ctx* __restrict c) {
  trace_call(0x800A94B0u);
  c->r[3]=mfspr(c,1008); // 800A94B0
  return; // 800A94B4
}

// PPCMthid0
void f_800A94B8(Ctx* __restrict c) {
  trace_call(0x800A94B8u);
  mtspr(c,1008,c->r[3]); // 800A94B8
  return; // 800A94BC
}

// PPCMfl2cr
void f_800A94C0(Ctx* __restrict c) {
  trace_call(0x800A94C0u);
  c->r[3]=mfspr(c,1017); // 800A94C0
  return; // 800A94C4
}

// PPCMtl2cr
void f_800A94C8(Ctx* __restrict c) {
  trace_call(0x800A94C8u);
  mtspr(c,1017,c->r[3]); // 800A94C8
  return; // 800A94CC
}

// PPCMtdec
void f_800A94D0(Ctx* __restrict c) {
  trace_call(0x800A94D0u);
  mtspr(c,22,c->r[3]); // 800A94D0
  return; // 800A94D4
}

// PPCSync
void f_800A94D8(Ctx* __restrict c) {
  trace_call(0x800A94D8u);
  sc(c,0x800A94D8u); // 800A94D8
  return; // 800A94DC
}

// PPCHalt
void f_800A94E0(Ctx* __restrict c) {
  trace_call(0x800A94E0u);
  /* sync */ // 800A94E0
L_800A94E4:;
  c->r[0]=c->r[0]|0x00000000u; // 800A94E4
  c->r[3]=0u+0x00000000u; // 800A94E8
  c->r[0]=c->r[0]|0x00000000u; // 800A94EC
  IRQCHK(c); goto L_800A94E4; // 800A94F0
}

// PPCMtmmcr0
void f_800A94F4(Ctx* __restrict c) {
  trace_call(0x800A94F4u);
  mtspr(c,952,c->r[3]); // 800A94F4
  return; // 800A94F8
}

// PPCMtmmcr1
void f_800A94FC(Ctx* __restrict c) {
  trace_call(0x800A94FCu);
  mtspr(c,956,c->r[3]); // 800A94FC
  return; // 800A9500
}

// PPCMtpmc1
void f_800A9504(Ctx* __restrict c) {
  trace_call(0x800A9504u);
  mtspr(c,953,c->r[3]); // 800A9504
  return; // 800A9508
}

// PPCMtpmc2
void f_800A950C(Ctx* __restrict c) {
  trace_call(0x800A950Cu);
  mtspr(c,954,c->r[3]); // 800A950C
  return; // 800A9510
}

// PPCMtpmc3
void f_800A9514(Ctx* __restrict c) {
  trace_call(0x800A9514u);
  mtspr(c,957,c->r[3]); // 800A9514
  return; // 800A9518
}

// PPCMtpmc4
void f_800A951C(Ctx* __restrict c) {
  trace_call(0x800A951Cu);
  mtspr(c,958,c->r[3]); // 800A951C
  return; // 800A9520
}

// PPCMffpscr
void f_800A9524(Ctx* __restrict c) {
  trace_call(0x800A9524u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9524
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800A9528
  c->f[31]=u2d((uint64_t)c->fpscr); // 800A952C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 800A9530
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800A9534
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800A9538
  c->r[1]=c->r[1]+0x00000020u; // 800A953C
  return; // 800A9540
}

// PPCMtfpscr
void f_800A9544(Ctx* __restrict c) {
  trace_call(0x800A9544u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9544
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800A9548
  c->r[4]=0u+0x00000000u; // 800A954C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800A9550
  W32(c->r[1]+0x00000008u,c->r[4]); // 800A9554
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 800A9558
  c->fpscr=(uint32_t)d2u(c->f[31]); // 800A955C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800A9560
  c->r[1]=c->r[1]+0x00000020u; // 800A9564
  return; // 800A9568
}

// PPCMfhid2
void f_800A956C(Ctx* __restrict c) {
  trace_call(0x800A956Cu);
  c->r[3]=mfspr(c,920); // 800A956C
  return; // 800A9570
}

// PPCMthid2
void f_800A9574(Ctx* __restrict c) {
  trace_call(0x800A9574u);
  mtspr(c,920,c->r[3]); // 800A9574
  return; // 800A9578
}

// PPCMtwpar
void f_800A957C(Ctx* __restrict c) {
  trace_call(0x800A957Cu);
  mtspr(c,921,c->r[3]); // 800A957C
  return; // 800A9580
}

// PPCDisableSpeculation
void f_800A9584(Ctx* __restrict c) {
  trace_call(0x800A9584u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9584
  c->r[0]=c->lr; // 800A9588
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A958C
  c->lr=0x800A9594u; f_800A94B0(c); // 800A9590
  c->r[3]=c->r[3]|0x00000200u; // 800A9594
  c->lr=0x800A959Cu; f_800A94B8(c); // 800A9598
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A959C
  c->lr=c->r[0]; // 800A95A0
  c->r[1]=c->r[1]+0x00000010u; // 800A95A4
  return; // 800A95A8
}

// PPCSetFpNonIEEEMode
void f_800A95AC(Ctx* __restrict c) {
  trace_call(0x800A95ACu);
  c->fpscr|=0x00000004u; // 800A95AC
  return; // 800A95B0
}

// PPCMthid4
void f_800A95B4(Ctx* __restrict c) {
  trace_call(0x800A95B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A95B4
  c->r[0]=c->lr; // 800A95B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A95BC
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 800A95C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A95C4
  c->r[31]=c->r[3]|c->r[3]; // 800A95C8
  if (crb(c,2)) { goto L_800A95D8; } // 800A95CC
  mtspr(c,1011,c->r[3]); // 800A95D0
  goto L_800A95F0; // 800A95D4
L_800A95D8:;
  c->r[3]=0u+0x80260000u; // 800A95D8
  c->r[3]=c->r[3]+0x00005C80u; // 800A95DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A95E0
  c->lr=0x800A95E8u; f_800ACBA4(c); // 800A95E4
  c->r[31]=c->r[31]|0x80000000u; // 800A95E8
  mtspr(c,1011,c->r[31]); // 800A95EC
L_800A95F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A95F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A95F4
  c->lr=c->r[0]; // 800A95F8
  c->r[1]=c->r[1]+0x00000010u; // 800A95FC
  return; // 800A9600
}

// DBInit
void f_800A9604(Ctx* __restrict c) {
  trace_call(0x800A9604u);
  c->r[4]=0u+0x80000000u; // 800A9604
  c->r[3]=0u+0x800B0000u; // 800A9608
  c->r[5]=c->r[4]+0x00000040u; // 800A960C
  c->r[0]=0u+0x00000001u; // 800A9610
  c->r[3]=c->r[3]+0xFFFF9674u; // 800A9614
  W32(c->r[13]+0xFFFF8C38u,c->r[5]); // 800A9618
  c->r[3]=c->r[3]+0x80000000u; // 800A961C
  W32(c->r[4]+0x00000048u,c->r[3]); // 800A9620
  W32(c->r[13]+0xFFFF8C3Cu,c->r[0]); // 800A9624
  return; // 800A9628
}

// __DBExceptionDestinationAux
void f_800A962C(Ctx* __restrict c) {
  trace_call(0x800A962Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A962C
  c->r[0]=c->lr; // 800A9630
  c->r[3]=0u+0x80260000u; // 800A9634
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9638
  c->r[3]=c->r[3]+0x00005CB8u; // 800A963C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A9640
  c->r[4]=R32(0u+0x000000C0u); // 800A9644
  c->r[31]=c->r[4]+0x80000000u; // 800A9648
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A964C
  c->lr=0x800A9654u; f_800ACBA4(c); // 800A9650
  c->r[3]=c->r[31]|c->r[31]; // 800A9654
  c->lr=0x800A965Cu; f_800AC878(c); // 800A9658
  c->lr=0x800A9660u; f_800A94E0(c); // 800A965C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A9660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A9664
  c->lr=c->r[0]; // 800A9668
  c->r[1]=c->r[1]+0x00000010u; // 800A966C
  return; // 800A9670
}

// __DBExceptionDestination
void f_800A9674(Ctx* __restrict c) {
  trace_call(0x800A9674u);
  c->r[3]=c->msr; // 800A9674
  c->r[3]=c->r[3]|0x00000030u; // 800A9678
  c->msr=c->r[3]; // 800A967C
  f_800A962C(c); return; // 800A9680
}

// __DBIsExceptionMarked
void f_800A9684(Ctx* __restrict c) {
  trace_call(0x800A9684u);
  c->r[4]=R32(c->r[13]+0xFFFF8C38u); // 800A9684
  c->r[0]=0u+0x00000001u; // 800A9688
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 800A968C
  c->r[3]=R32(c->r[4]+0x00000004u); // 800A9690
  c->r[3]=c->r[3]&c->r[0]; // 800A9694
  return; // 800A9698
}

// DBPrintf
void f_800A969C(Ctx* __restrict c) {
  trace_call(0x800A969Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A969C
  if (!crb(c,6)) { goto L_800A96C4; } // 800A96A0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800A96A4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800A96A8
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800A96AC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800A96B0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800A96B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800A96B8
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800A96BC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800A96C0
L_800A96C4:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A96C4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800A96C8
  W32(c->r[1]+0x00000010u,c->r[5]); // 800A96CC
  W32(c->r[1]+0x00000014u,c->r[6]); // 800A96D0
  W32(c->r[1]+0x00000018u,c->r[7]); // 800A96D4
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800A96D8
  W32(c->r[1]+0x00000020u,c->r[9]); // 800A96DC
  W32(c->r[1]+0x00000024u,c->r[10]); // 800A96E0
  c->r[1]=c->r[1]+0x00000070u; // 800A96E4
  return; // 800A96E8
}

// __OSFPRInit
void f_800A96EC(Ctx* __restrict c) {
  trace_call(0x800A96ECu);
  c->r[3]=c->msr; // 800A96EC
  c->r[3]=c->r[3]|0x00002000u; // 800A96F0
  c->msr=c->r[3]; // 800A96F4
  c->r[3]=mfspr(c,920); // 800A96F8
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 800A96FC
  if (crb(c,2)) { goto L_800A978C; } // 800A9700
  c->r[3]=0u+0x80360000u; // 800A9704
  c->r[3]=c->r[3]+0xFFFFE698u; // 800A9708
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800A970C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 800A9710
  {double t0=c->f[0], t1=c->ps1[0]; c->f[2]=t0; c->ps1[2]=t1;} // 800A9714
  {double t0=c->f[0], t1=c->ps1[0]; c->f[3]=t0; c->ps1[3]=t1;} // 800A9718
  {double t0=c->f[0], t1=c->ps1[0]; c->f[4]=t0; c->ps1[4]=t1;} // 800A971C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[5]=t0; c->ps1[5]=t1;} // 800A9720
  {double t0=c->f[0], t1=c->ps1[0]; c->f[6]=t0; c->ps1[6]=t1;} // 800A9724
  {double t0=c->f[0], t1=c->ps1[0]; c->f[7]=t0; c->ps1[7]=t1;} // 800A9728
  {double t0=c->f[0], t1=c->ps1[0]; c->f[8]=t0; c->ps1[8]=t1;} // 800A972C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[9]=t0; c->ps1[9]=t1;} // 800A9730
  {double t0=c->f[0], t1=c->ps1[0]; c->f[10]=t0; c->ps1[10]=t1;} // 800A9734
  {double t0=c->f[0], t1=c->ps1[0]; c->f[11]=t0; c->ps1[11]=t1;} // 800A9738
  {double t0=c->f[0], t1=c->ps1[0]; c->f[12]=t0; c->ps1[12]=t1;} // 800A973C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[13]=t0; c->ps1[13]=t1;} // 800A9740
  {double t0=c->f[0], t1=c->ps1[0]; c->f[14]=t0; c->ps1[14]=t1;} // 800A9744
  {double t0=c->f[0], t1=c->ps1[0]; c->f[15]=t0; c->ps1[15]=t1;} // 800A9748
  {double t0=c->f[0], t1=c->ps1[0]; c->f[16]=t0; c->ps1[16]=t1;} // 800A974C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[17]=t0; c->ps1[17]=t1;} // 800A9750
  {double t0=c->f[0], t1=c->ps1[0]; c->f[18]=t0; c->ps1[18]=t1;} // 800A9754
  {double t0=c->f[0], t1=c->ps1[0]; c->f[19]=t0; c->ps1[19]=t1;} // 800A9758
  {double t0=c->f[0], t1=c->ps1[0]; c->f[20]=t0; c->ps1[20]=t1;} // 800A975C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[21]=t0; c->ps1[21]=t1;} // 800A9760
  {double t0=c->f[0], t1=c->ps1[0]; c->f[22]=t0; c->ps1[22]=t1;} // 800A9764
  {double t0=c->f[0], t1=c->ps1[0]; c->f[23]=t0; c->ps1[23]=t1;} // 800A9768
  {double t0=c->f[0], t1=c->ps1[0]; c->f[24]=t0; c->ps1[24]=t1;} // 800A976C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[25]=t0; c->ps1[25]=t1;} // 800A9770
  {double t0=c->f[0], t1=c->ps1[0]; c->f[26]=t0; c->ps1[26]=t1;} // 800A9774
  {double t0=c->f[0], t1=c->ps1[0]; c->f[27]=t0; c->ps1[27]=t1;} // 800A9778
  {double t0=c->f[0], t1=c->ps1[0]; c->f[28]=t0; c->ps1[28]=t1;} // 800A977C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[29]=t0; c->ps1[29]=t1;} // 800A9780
  {double t0=c->f[0], t1=c->ps1[0]; c->f[30]=t0; c->ps1[30]=t1;} // 800A9784
  {double t0=c->f[0], t1=c->ps1[0]; c->f[31]=t0; c->ps1[31]=t1;} // 800A9788
L_800A978C:;
  {uint32_t ea=c->r[13]+0xFFFF8C60u; c->f[0]=RF64(ea);} // 800A978C
  c->f[1]=c->f[0]; // 800A9790
  c->f[2]=c->f[0]; // 800A9794
  c->f[3]=c->f[0]; // 800A9798
  c->f[4]=c->f[0]; // 800A979C
  c->f[5]=c->f[0]; // 800A97A0
  c->f[6]=c->f[0]; // 800A97A4
  c->f[7]=c->f[0]; // 800A97A8
  c->f[8]=c->f[0]; // 800A97AC
  c->f[9]=c->f[0]; // 800A97B0
  c->f[10]=c->f[0]; // 800A97B4
  c->f[11]=c->f[0]; // 800A97B8
  c->f[12]=c->f[0]; // 800A97BC
  c->f[13]=c->f[0]; // 800A97C0
  c->f[14]=c->f[0]; // 800A97C4
  c->f[15]=c->f[0]; // 800A97C8
  c->f[16]=c->f[0]; // 800A97CC
  c->f[17]=c->f[0]; // 800A97D0
  c->f[18]=c->f[0]; // 800A97D4
  c->f[19]=c->f[0]; // 800A97D8
  c->f[20]=c->f[0]; // 800A97DC
  c->f[21]=c->f[0]; // 800A97E0
  c->f[22]=c->f[0]; // 800A97E4
  c->f[23]=c->f[0]; // 800A97E8
  c->f[24]=c->f[0]; // 800A97EC
  c->f[25]=c->f[0]; // 800A97F0
  c->f[26]=c->f[0]; // 800A97F4
  c->f[27]=c->f[0]; // 800A97F8
  c->f[28]=c->f[0]; // 800A97FC
  c->f[29]=c->f[0]; // 800A9800
  c->f[30]=c->f[0]; // 800A9804
  c->f[31]=c->f[0]; // 800A9808
  c->fpscr=(uint32_t)d2u(c->f[0]); // 800A980C
  return; // 800A9810
}

// __OSGetIOSRev
void f_800A9814(Ctx* __restrict c) {
  trace_call(0x800A9814u);
  c->r[4]=0u+0xC0000000u; // 800A9814
  c->r[10]=R32(c->r[4]+0x00003144u); // 800A9818
  c->r[9]=R32(c->r[4]+0x00003140u); // 800A981C
  c->r[0]=rotl(c->r[10],28)&0x0000000Fu; // 800A9820
  c->r[6]=rotl(c->r[10],12)&0x0000000Fu; // 800A9824
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800A9828
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800A982C
  c->r[0]=rotl(c->r[10],0)&0x0000000Fu; // 800A9830
  W8(c->r[3]+0x00000000u,c->r[7]); // 800A9834
  c->r[8]=rotl(c->r[9],16)&0x000000FFu; // 800A9838
  c->r[4]=c->r[0]+c->r[4]; // 800A983C
  c->r[0]=c->r[4]+0x000007D0u; // 800A9840
  c->r[5]=rotl(c->r[10],20)&0x0000000Fu; // 800A9844
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 800A9848
  W8(c->r[3]+0x00000001u,c->r[8]); // 800A984C
  c->r[5]=rotl(c->r[10],24)&0x0000000Fu; // 800A9850
  c->r[8]=rotl(c->r[9],24)&0x000000FFu; // 800A9854
  W8(c->r[3]+0x00000003u,c->r[9]); // 800A9858
  c->r[4]=c->r[5]+c->r[4]; // 800A985C
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 800A9860
  c->r[7]=rotl(c->r[10],16)&0x0000000Fu; // 800A9864
  W8(c->r[3]+0x00000002u,c->r[8]); // 800A9868
  c->r[6]=c->r[7]+c->r[6]; // 800A986C
  W8(c->r[3]+0x00000005u,c->r[4]); // 800A9870
  W8(c->r[3]+0x00000004u,c->r[6]); // 800A9874
  W16(c->r[3]+0x00000006u,c->r[0]); // 800A9878
  return; // 800A987C
}

// OSGetConsoleType
void f_800A9880(Ctx* __restrict c) {
  trace_call(0x800A9880u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9880
  c->r[0]=c->lr; // 800A9884
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A988C
  c->r[3]=R32(c->r[13]+0xFFFF8C78u); // 800A9890
  cmps(c,0,(int32_t)c->r[3],0); // 800A9894
  if (crb(c,2)) { goto L_800A98A8; } // 800A9898
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800A989C
  cmps(c,0,(int32_t)c->r[0],0); // 800A98A0
  if (!crb(c,2)) { goto L_800A98B4; } // 800A98A4
L_800A98A8:;
  c->r[3]=0u+0x10000000u; // 800A98A8
  c->r[3]=c->r[3]+0x00000002u; // 800A98AC
  goto L_800A9AF0; // 800A98B0
L_800A98B4:;
  c->r[3]=0u+0x80000000u; // 800A98B4
  c->r[0]=R16(c->r[3]+0x000030E6u); // 800A98B8
  c->r[31]=R32(c->r[3]+0x00003138u); // 800A98BC
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800A98C0
  if (crb(c,2)) { goto L_800A9A00; } // 800A98C4
  c->r[0]=R16(c->r[3]+0x000030E6u); // 800A98C8
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800A98CC
  cmps(c,0,(int32_t)c->r[0],515); // 800A98D0
  if (crb(c,2)) { goto L_800A9908; } // 800A98D4
  if (!crb(c,0)) { goto L_800A98FC; } // 800A98D8
  cmps(c,0,(int32_t)c->r[0],4); // 800A98DC
  if (!crb(c,0)) { goto L_800A98F0; } // 800A98E0
  cmps(c,0,(int32_t)c->r[0],2); // 800A98E4
  if (!crb(c,0)) { goto L_800A9908; } // 800A98E8
  goto L_800A9A00; // 800A98EC
L_800A98F0:;
  cmps(c,0,(int32_t)c->r[0],513); // 800A98F0
  if (!crb(c,0)) { goto L_800A9974; } // 800A98F4
  goto L_800A9A00; // 800A98F8
L_800A98FC:;
  cmps(c,0,(int32_t)c->r[0],768); // 800A98FC
  if (crb(c,2)) { goto L_800A99F8; } // 800A9900
  goto L_800A9A00; // 800A9904
L_800A9908:;
  cmps(c,0,(int32_t)c->r[31],2); // 800A9908
  if (crb(c,2)) { goto L_800A994C; } // 800A990C
  if (!crb(c,0)) { goto L_800A9924; } // 800A9910
  cmps(c,0,(int32_t)c->r[31],0); // 800A9914
  if (crb(c,2)) { goto L_800A993C; } // 800A9918
  if (!crb(c,0)) { goto L_800A9944; } // 800A991C
  goto L_800A9964; // 800A9920
L_800A9924:;
  cmps(c,0,(int32_t)c->r[31],17); // 800A9924
  if (crb(c,2)) { goto L_800A995C; } // 800A9928
  if (!crb(c,0)) { goto L_800A9964; } // 800A992C
  cmps(c,0,(int32_t)c->r[31],16); // 800A9930
  if (!crb(c,0)) { goto L_800A9954; } // 800A9934
  goto L_800A9964; // 800A9938
L_800A993C:;
  c->r[3]=0u+0x00000010u; // 800A993C
  goto L_800A9AF0; // 800A9940
L_800A9944:;
  c->r[3]=0u+0x00000011u; // 800A9944
  goto L_800A9AF0; // 800A9948
L_800A994C:;
  c->r[3]=0u+0x00000012u; // 800A994C
  goto L_800A9AF0; // 800A9950
L_800A9954:;
  c->r[3]=0u+0x00000020u; // 800A9954
  goto L_800A9AF0; // 800A9958
L_800A995C:;
  c->r[3]=0u+0x00000021u; // 800A995C
  goto L_800A9AF0; // 800A9960
L_800A9964:;
  cmpu(c,0,c->r[31],0x00000011u); // 800A9964
  if (!crb(c,1)) { goto L_800A9974; } // 800A9968
  c->r[3]=0u+0x00000021u; // 800A996C
  goto L_800A9AF0; // 800A9970
L_800A9974:;
  cmps(c,0,(int32_t)c->r[31],2); // 800A9974
  if (crb(c,2)) { goto L_800A99C0; } // 800A9978
  if (!crb(c,0)) { goto L_800A9990; } // 800A997C
  cmps(c,0,(int32_t)c->r[31],0); // 800A9980
  if (crb(c,2)) { goto L_800A99A8; } // 800A9984
  if (!crb(c,0)) { goto L_800A99B4; } // 800A9988
  goto L_800A99E4; // 800A998C
L_800A9990:;
  cmps(c,0,(int32_t)c->r[31],17); // 800A9990
  if (crb(c,2)) { goto L_800A99D8; } // 800A9994
  if (!crb(c,0)) { goto L_800A99E4; } // 800A9998
  cmps(c,0,(int32_t)c->r[31],16); // 800A999C
  if (!crb(c,0)) { goto L_800A99CC; } // 800A99A0
  goto L_800A99E4; // 800A99A4
L_800A99A8:;
  c->r[3]=0u+0x10000000u; // 800A99A8
  c->r[3]=c->r[3]+0x00000010u; // 800A99AC
  goto L_800A9AF0; // 800A99B0
L_800A99B4:;
  c->r[3]=0u+0x10000000u; // 800A99B4
  c->r[3]=c->r[3]+0x00000011u; // 800A99B8
  goto L_800A9AF0; // 800A99BC
L_800A99C0:;
  c->r[3]=0u+0x10000000u; // 800A99C0
  c->r[3]=c->r[3]+0x00000012u; // 800A99C4
  goto L_800A9AF0; // 800A99C8
L_800A99CC:;
  c->r[3]=0u+0x10000000u; // 800A99CC
  c->r[3]=c->r[3]+0x00000020u; // 800A99D0
  goto L_800A9AF0; // 800A99D4
L_800A99D8:;
  c->r[3]=0u+0x10000000u; // 800A99D8
  c->r[3]=c->r[3]+0x00000021u; // 800A99DC
  goto L_800A9AF0; // 800A99E0
L_800A99E4:;
  cmpu(c,0,c->r[31],0x00000011u); // 800A99E4
  if (!crb(c,1)) { goto L_800A99F8; } // 800A99E8
  c->r[3]=0u+0x10000000u; // 800A99EC
  c->r[3]=c->r[3]+0x00000021u; // 800A99F0
  goto L_800A9AF0; // 800A99F4
L_800A99F8:;
  c->r[3]=0u+0x00000100u; // 800A99F8
  goto L_800A9AF0; // 800A99FC
L_800A9A00:;
  c->lr=0x800A9A04u; f_800B12EC(c); // 800A9A00
  cmps(c,0,(int32_t)c->r[31],2); // 800A9A04
  if (crb(c,2)) { goto L_800A9A70; } // 800A9A08
  if (!crb(c,0)) { goto L_800A9A20; } // 800A9A0C
  cmps(c,0,(int32_t)c->r[31],0); // 800A9A10
  if (crb(c,2)) { goto L_800A9A38; } // 800A9A14
  if (!crb(c,0)) { goto L_800A9A54; } // 800A9A18
  goto L_800A9AC4; // 800A9A1C
L_800A9A20:;
  cmps(c,0,(int32_t)c->r[31],17); // 800A9A20
  if (crb(c,2)) { goto L_800A9AA8; } // 800A9A24
  if (!crb(c,0)) { goto L_800A9AC4; } // 800A9A28
  cmps(c,0,(int32_t)c->r[31],16); // 800A9A2C
  if (!crb(c,0)) { goto L_800A9A8C; } // 800A9A30
  goto L_800A9AC4; // 800A9A34
L_800A9A38:;
  c->r[0]=c->r[3]+0xFC000000u; // 800A9A38
  c->r[3]=0u+0x10000000u; // 800A9A3C
  cmpu(c,0,c->r[0],0x00000000u); // 800A9A40
  c->r[3]=c->r[3]+0x00000010u; // 800A9A44
  if (!crb(c,2)) { goto L_800A9AF0; } // 800A9A48
  c->r[3]=0u+0x00000010u; // 800A9A4C
  goto L_800A9AF0; // 800A9A50
L_800A9A54:;
  c->r[0]=c->r[3]+0xFC000000u; // 800A9A54
  c->r[3]=0u+0x10000000u; // 800A9A58
  cmpu(c,0,c->r[0],0x00000000u); // 800A9A5C
  c->r[3]=c->r[3]+0x00000011u; // 800A9A60
  if (!crb(c,2)) { goto L_800A9AF0; } // 800A9A64
  c->r[3]=0u+0x00000011u; // 800A9A68
  goto L_800A9AF0; // 800A9A6C
L_800A9A70:;
  c->r[0]=c->r[3]+0xFC000000u; // 800A9A70
  c->r[3]=0u+0x10000000u; // 800A9A74
  cmpu(c,0,c->r[0],0x00000000u); // 800A9A78
  c->r[3]=c->r[3]+0x00000012u; // 800A9A7C
  if (!crb(c,2)) { goto L_800A9AF0; } // 800A9A80
  c->r[3]=0u+0x00000012u; // 800A9A84
  goto L_800A9AF0; // 800A9A88
L_800A9A8C:;
  c->r[0]=c->r[3]+0xFC000000u; // 800A9A8C
  c->r[3]=0u+0x10000000u; // 800A9A90
  cmpu(c,0,c->r[0],0x00000000u); // 800A9A94
  c->r[3]=c->r[3]+0x00000020u; // 800A9A98
  if (!crb(c,2)) { goto L_800A9AF0; } // 800A9A9C
  c->r[3]=0u+0x00000020u; // 800A9AA0
  goto L_800A9AF0; // 800A9AA4
L_800A9AA8:;
  c->r[0]=c->r[3]+0xFC000000u; // 800A9AA8
  c->r[3]=0u+0x10000000u; // 800A9AAC
  cmpu(c,0,c->r[0],0x00000000u); // 800A9AB0
  c->r[3]=c->r[3]+0x00000021u; // 800A9AB4
  if (!crb(c,2)) { goto L_800A9AF0; } // 800A9AB8
  c->r[3]=0u+0x00000021u; // 800A9ABC
  goto L_800A9AF0; // 800A9AC0
L_800A9AC4:;
  cmpu(c,0,c->r[31],0x00000011u); // 800A9AC4
  if (!crb(c,1)) { goto L_800A9AE8; } // 800A9AC8
  c->r[0]=c->r[3]+0xFC000000u; // 800A9ACC
  c->r[3]=0u+0x10000000u; // 800A9AD0
  cmpu(c,0,c->r[0],0x00000000u); // 800A9AD4
  c->r[3]=c->r[3]+0x00000021u; // 800A9AD8
  if (!crb(c,2)) { goto L_800A9AF0; } // 800A9ADC
  c->r[3]=0u+0x00000021u; // 800A9AE0
  goto L_800A9AF0; // 800A9AE4
L_800A9AE8:;
  c->r[3]=R32(c->r[13]+0xFFFF8C78u); // 800A9AE8
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800A9AEC
L_800A9AF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A9AF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A9AF4
  c->lr=c->r[0]; // 800A9AF8
  c->r[1]=c->r[1]+0x00000010u; // 800A9AFC
  return; // 800A9B00
}

// ClearArena
void f_800A9B04(Ctx* __restrict c) {
  trace_call(0x800A9B04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9B04
  c->r[0]=c->lr; // 800A9B08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9B0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A9B10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A9B14
  c->lr=0x800A9B1Cu; f_800B278C(c); // 800A9B18
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800A9B1C
  if (!crb(c,2)) { goto L_800A9B6C; } // 800A9B20
  c->lr=0x800A9B28u; f_800AB7B4(c); // 800A9B24
  c->r[31]=c->r[3]|c->r[3]; // 800A9B28
  c->lr=0x800A9B30u; f_800AB7CC(c); // 800A9B2C
  c->r[31]=c->r[31]-c->r[3]; // 800A9B30
  c->lr=0x800A9B38u; f_800AB7CC(c); // 800A9B34
  c->r[0]=0u+0x00040000u; // 800A9B38
  cmpu(c,0,c->r[31],c->r[0]); // 800A9B3C
  if (!crb(c,1)) { goto L_800A9B50; } // 800A9B40
  c->r[30]=c->r[31]+0xFFFC0000u; // 800A9B44
  c->r[30]=c->r[3]+c->r[30]; // 800A9B48
  goto L_800A9B54; // 800A9B4C
L_800A9B50:;
  c->r[30]=c->r[3]|c->r[3]; // 800A9B50
L_800A9B54:;
  c->r[4]=c->r[31]|c->r[31]; // 800A9B54
  c->lr=0x800A9B5Cu; f_800ABDE4(c); // 800A9B58
  c->r[3]=c->r[30]|c->r[30]; // 800A9B5C
  c->r[4]=0u+0x00040000u; // 800A9B60
  c->lr=0x800A9B68u; f_800ABD2C(c); // 800A9B64
  goto L_800A9CC8; // 800A9B68
L_800A9B6C:;
  c->r[31]=0u+0x802B0000u; // 800A9B6C
  c->r[31]=c->r[31]+0x00003980u; // 800A9B70
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800A9B74
  cmps(c,0,(int32_t)c->r[0],0); // 800A9B78
  if (crb(c,2)) { goto L_800A9B88; } // 800A9B7C
  c->r[0]=rotl(c->r[0],0)&0x30000000u; cr0(c,c->r[0]); // 800A9B80
  if (crb(c,2)) { goto L_800A9BD0; } // 800A9B84
L_800A9B88:;
  c->lr=0x800A9B8Cu; f_800AB7B4(c); // 800A9B88
  c->r[31]=c->r[3]|c->r[3]; // 800A9B8C
  c->lr=0x800A9B94u; f_800AB7CC(c); // 800A9B90
  c->r[31]=c->r[31]-c->r[3]; // 800A9B94
  c->lr=0x800A9B9Cu; f_800AB7CC(c); // 800A9B98
  c->r[0]=0u+0x00040000u; // 800A9B9C
  cmpu(c,0,c->r[31],c->r[0]); // 800A9BA0
  if (!crb(c,1)) { goto L_800A9BB4; } // 800A9BA4
  c->r[30]=c->r[31]+0xFFFC0000u; // 800A9BA8
  c->r[30]=c->r[3]+c->r[30]; // 800A9BAC
  goto L_800A9BB8; // 800A9BB0
L_800A9BB4:;
  c->r[30]=c->r[3]|c->r[3]; // 800A9BB4
L_800A9BB8:;
  c->r[4]=c->r[31]|c->r[31]; // 800A9BB8
  c->lr=0x800A9BC0u; f_800ABDE4(c); // 800A9BBC
  c->r[3]=c->r[30]|c->r[30]; // 800A9BC0
  c->r[4]=0u+0x00040000u; // 800A9BC4
  c->lr=0x800A9BCCu; f_800ABD2C(c); // 800A9BC8
  goto L_800A9CC8; // 800A9BCC
L_800A9BD0:;
  c->lr=0x800A9BD4u; f_800AB7CC(c); // 800A9BD0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800A9BD4
  cmpu(c,0,c->r[3],c->r[0]); // 800A9BD8
  if (!crb(c,0)) { goto L_800A9CC8; } // 800A9BDC
  c->lr=0x800A9BE4u; f_800AB7B4(c); // 800A9BE0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800A9BE4
  cmpu(c,0,c->r[3],c->r[0]); // 800A9BE8
  if (crb(c,1)) { goto L_800A9C38; } // 800A9BEC
  c->lr=0x800A9BF4u; f_800AB7B4(c); // 800A9BF0
  c->r[31]=c->r[3]|c->r[3]; // 800A9BF4
  c->lr=0x800A9BFCu; f_800AB7CC(c); // 800A9BF8
  c->r[31]=c->r[31]-c->r[3]; // 800A9BFC
  c->lr=0x800A9C04u; f_800AB7CC(c); // 800A9C00
  c->r[0]=0u+0x00040000u; // 800A9C04
  cmpu(c,0,c->r[31],c->r[0]); // 800A9C08
  if (!crb(c,1)) { goto L_800A9C1C; } // 800A9C0C
  c->r[30]=c->r[31]+0xFFFC0000u; // 800A9C10
  c->r[30]=c->r[3]+c->r[30]; // 800A9C14
  goto L_800A9C20; // 800A9C18
L_800A9C1C:;
  c->r[30]=c->r[3]|c->r[3]; // 800A9C1C
L_800A9C20:;
  c->r[4]=c->r[31]|c->r[31]; // 800A9C20
  c->lr=0x800A9C28u; f_800ABDE4(c); // 800A9C24
  c->r[3]=c->r[30]|c->r[30]; // 800A9C28
  c->r[4]=0u+0x00040000u; // 800A9C2C
  c->lr=0x800A9C34u; f_800ABD2C(c); // 800A9C30
  goto L_800A9CC8; // 800A9C34
L_800A9C38:;
  c->lr=0x800A9C3Cu; f_800AB7CC(c); // 800A9C38
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800A9C3C
  c->r[31]=c->r[0]-c->r[3]; // 800A9C40
  c->lr=0x800A9C48u; f_800AB7CC(c); // 800A9C44
  c->r[0]=0u+0x00040000u; // 800A9C48
  cmpu(c,0,c->r[31],c->r[0]); // 800A9C4C
  if (!crb(c,1)) { goto L_800A9C60; } // 800A9C50
  c->r[30]=c->r[31]+0xFFFC0000u; // 800A9C54
  c->r[30]=c->r[3]+c->r[30]; // 800A9C58
  goto L_800A9C64; // 800A9C5C
L_800A9C60:;
  c->r[30]=c->r[3]|c->r[3]; // 800A9C60
L_800A9C64:;
  c->r[4]=c->r[31]|c->r[31]; // 800A9C64
  c->lr=0x800A9C6Cu; f_800ABDE4(c); // 800A9C68
  c->r[3]=c->r[30]|c->r[30]; // 800A9C6C
  c->r[4]=0u+0x00040000u; // 800A9C70
  c->lr=0x800A9C78u; f_800ABD2C(c); // 800A9C74
  c->r[3]=0u+0x802B0000u; // 800A9C78
  c->r[3]=c->r[3]+0x00003980u; // 800A9C7C
  c->r[31]=R32(c->r[3]+0x00000010u); // 800A9C80
  c->lr=0x800A9C88u; f_800AB7B4(c); // 800A9C84
  cmpu(c,0,c->r[3],c->r[31]); // 800A9C88
  if (!crb(c,1)) { goto L_800A9CC8; } // 800A9C8C
  c->lr=0x800A9C94u; f_800AB7B4(c); // 800A9C90
  c->r[4]=c->r[3]-c->r[31]; // 800A9C94
  c->r[0]=0u+0x00040000u; // 800A9C98
  cmpu(c,0,c->r[4],c->r[0]); // 800A9C9C
  if (!crb(c,1)) { goto L_800A9CB0; } // 800A9CA0
  c->r[30]=c->r[4]+0xFFFC0000u; // 800A9CA4
  c->r[30]=c->r[31]+c->r[30]; // 800A9CA8
  goto L_800A9CB4; // 800A9CAC
L_800A9CB0:;
  c->r[30]=c->r[31]|c->r[31]; // 800A9CB0
L_800A9CB4:;
  c->r[3]=c->r[31]|c->r[31]; // 800A9CB4
  c->lr=0x800A9CBCu; f_800ABDE4(c); // 800A9CB8
  c->r[3]=c->r[30]|c->r[30]; // 800A9CBC
  c->r[4]=0u+0x00040000u; // 800A9CC0
  c->lr=0x800A9CC8u; f_800ABD2C(c); // 800A9CC4
L_800A9CC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A9CC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A9CCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A9CD0
  c->lr=c->r[0]; // 800A9CD4
  c->r[1]=c->r[1]+0x00000010u; // 800A9CD8
  return; // 800A9CDC
}

// ClearMEM2Arena
void f_800A9CE0(Ctx* __restrict c) {
  trace_call(0x800A9CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9CE0
  c->r[0]=c->lr; // 800A9CE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9CE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A9CEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A9CF0
  c->lr=0x800A9CF8u; f_800B278C(c); // 800A9CF4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800A9CF8
  if (!crb(c,2)) { goto L_800A9D48; } // 800A9CFC
  c->lr=0x800A9D04u; f_800AB7AC(c); // 800A9D00
  c->r[31]=c->r[3]|c->r[3]; // 800A9D04
  c->lr=0x800A9D0Cu; f_800AB7C4(c); // 800A9D08
  c->r[31]=c->r[31]-c->r[3]; // 800A9D0C
  c->lr=0x800A9D14u; f_800AB7C4(c); // 800A9D10
  c->r[0]=0u+0x00040000u; // 800A9D14
  cmpu(c,0,c->r[31],c->r[0]); // 800A9D18
  if (!crb(c,1)) { goto L_800A9D2C; } // 800A9D1C
  c->r[30]=c->r[31]+0xFFFC0000u; // 800A9D20
  c->r[30]=c->r[3]+c->r[30]; // 800A9D24
  goto L_800A9D30; // 800A9D28
L_800A9D2C:;
  c->r[30]=c->r[3]|c->r[3]; // 800A9D2C
L_800A9D30:;
  c->r[4]=c->r[31]|c->r[31]; // 800A9D30
  c->lr=0x800A9D38u; f_800ABDE4(c); // 800A9D34
  c->r[3]=c->r[30]|c->r[30]; // 800A9D38
  c->r[4]=0u+0x00040000u; // 800A9D3C
  c->lr=0x800A9D44u; f_800ABD2C(c); // 800A9D40
  goto L_800A9EAC; // 800A9D44
L_800A9D48:;
  c->r[31]=0u+0x802B0000u; // 800A9D48
  c->r[31]=c->r[31]+0x00003980u; // 800A9D4C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800A9D50
  cmps(c,0,(int32_t)c->r[0],0); // 800A9D54
  if (crb(c,2)) { goto L_800A9D6C; } // 800A9D58
  c->r[3]=rotl(c->r[0],0)&0x30000000u; // 800A9D5C
  c->r[0]=c->r[3]+0xF0000000u; // 800A9D60
  cmpu(c,0,c->r[0],0x00000000u); // 800A9D64
  if (crb(c,2)) { goto L_800A9DB4; } // 800A9D68
L_800A9D6C:;
  c->lr=0x800A9D70u; f_800AB7AC(c); // 800A9D6C
  c->r[31]=c->r[3]|c->r[3]; // 800A9D70
  c->lr=0x800A9D78u; f_800AB7C4(c); // 800A9D74
  c->r[31]=c->r[31]-c->r[3]; // 800A9D78
  c->lr=0x800A9D80u; f_800AB7C4(c); // 800A9D7C
  c->r[0]=0u+0x00040000u; // 800A9D80
  cmpu(c,0,c->r[31],c->r[0]); // 800A9D84
  if (!crb(c,1)) { goto L_800A9D98; } // 800A9D88
  c->r[30]=c->r[31]+0xFFFC0000u; // 800A9D8C
  c->r[30]=c->r[3]+c->r[30]; // 800A9D90
  goto L_800A9D9C; // 800A9D94
L_800A9D98:;
  c->r[30]=c->r[3]|c->r[3]; // 800A9D98
L_800A9D9C:;
  c->r[4]=c->r[31]|c->r[31]; // 800A9D9C
  c->lr=0x800A9DA4u; f_800ABDE4(c); // 800A9DA0
  c->r[3]=c->r[30]|c->r[30]; // 800A9DA4
  c->r[4]=0u+0x00040000u; // 800A9DA8
  c->lr=0x800A9DB0u; f_800ABD2C(c); // 800A9DAC
  goto L_800A9EAC; // 800A9DB0
L_800A9DB4:;
  c->lr=0x800A9DB8u; f_800AB7C4(c); // 800A9DB4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800A9DB8
  cmpu(c,0,c->r[3],c->r[0]); // 800A9DBC
  if (!crb(c,0)) { goto L_800A9EAC; } // 800A9DC0
  c->lr=0x800A9DC8u; f_800AB7AC(c); // 800A9DC4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800A9DC8
  cmpu(c,0,c->r[3],c->r[0]); // 800A9DCC
  if (crb(c,1)) { goto L_800A9E1C; } // 800A9DD0
  c->lr=0x800A9DD8u; f_800AB7AC(c); // 800A9DD4
  c->r[31]=c->r[3]|c->r[3]; // 800A9DD8
  c->lr=0x800A9DE0u; f_800AB7C4(c); // 800A9DDC
  c->r[31]=c->r[31]-c->r[3]; // 800A9DE0
  c->lr=0x800A9DE8u; f_800AB7C4(c); // 800A9DE4
  c->r[0]=0u+0x00040000u; // 800A9DE8
  cmpu(c,0,c->r[31],c->r[0]); // 800A9DEC
  if (!crb(c,1)) { goto L_800A9E00; } // 800A9DF0
  c->r[30]=c->r[31]+0xFFFC0000u; // 800A9DF4
  c->r[30]=c->r[3]+c->r[30]; // 800A9DF8
  goto L_800A9E04; // 800A9DFC
L_800A9E00:;
  c->r[30]=c->r[3]|c->r[3]; // 800A9E00
L_800A9E04:;
  c->r[4]=c->r[31]|c->r[31]; // 800A9E04
  c->lr=0x800A9E0Cu; f_800ABDE4(c); // 800A9E08
  c->r[3]=c->r[30]|c->r[30]; // 800A9E0C
  c->r[4]=0u+0x00040000u; // 800A9E10
  c->lr=0x800A9E18u; f_800ABD2C(c); // 800A9E14
  goto L_800A9EAC; // 800A9E18
L_800A9E1C:;
  c->lr=0x800A9E20u; f_800AB7C4(c); // 800A9E1C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800A9E20
  c->r[31]=c->r[0]-c->r[3]; // 800A9E24
  c->lr=0x800A9E2Cu; f_800AB7C4(c); // 800A9E28
  c->r[0]=0u+0x00040000u; // 800A9E2C
  cmpu(c,0,c->r[31],c->r[0]); // 800A9E30
  if (!crb(c,1)) { goto L_800A9E44; } // 800A9E34
  c->r[30]=c->r[31]+0xFFFC0000u; // 800A9E38
  c->r[30]=c->r[3]+c->r[30]; // 800A9E3C
  goto L_800A9E48; // 800A9E40
L_800A9E44:;
  c->r[30]=c->r[3]|c->r[3]; // 800A9E44
L_800A9E48:;
  c->r[4]=c->r[31]|c->r[31]; // 800A9E48
  c->lr=0x800A9E50u; f_800ABDE4(c); // 800A9E4C
  c->r[3]=c->r[30]|c->r[30]; // 800A9E50
  c->r[4]=0u+0x00040000u; // 800A9E54
  c->lr=0x800A9E5Cu; f_800ABD2C(c); // 800A9E58
  c->r[3]=0u+0x802B0000u; // 800A9E5C
  c->r[3]=c->r[3]+0x00003980u; // 800A9E60
  c->r[31]=R32(c->r[3]+0x00000010u); // 800A9E64
  c->lr=0x800A9E6Cu; f_800AB7AC(c); // 800A9E68
  cmpu(c,0,c->r[3],c->r[31]); // 800A9E6C
  if (!crb(c,1)) { goto L_800A9EAC; } // 800A9E70
  c->lr=0x800A9E78u; f_800AB7AC(c); // 800A9E74
  c->r[4]=c->r[3]-c->r[31]; // 800A9E78
  c->r[0]=0u+0x00040000u; // 800A9E7C
  cmpu(c,0,c->r[4],c->r[0]); // 800A9E80
  if (!crb(c,1)) { goto L_800A9E94; } // 800A9E84
  c->r[30]=c->r[4]+0xFFFC0000u; // 800A9E88
  c->r[30]=c->r[31]+c->r[30]; // 800A9E8C
  goto L_800A9E98; // 800A9E90
L_800A9E94:;
  c->r[30]=c->r[31]|c->r[31]; // 800A9E94
L_800A9E98:;
  c->r[3]=c->r[31]|c->r[31]; // 800A9E98
  c->lr=0x800A9EA0u; f_800ABDE4(c); // 800A9E9C
  c->r[3]=c->r[30]|c->r[30]; // 800A9EA0
  c->r[4]=0u+0x00040000u; // 800A9EA4
  c->lr=0x800A9EACu; f_800ABD2C(c); // 800A9EA8
L_800A9EAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A9EAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A9EB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A9EB4
  c->lr=c->r[0]; // 800A9EB8
  c->r[1]=c->r[1]+0x00000010u; // 800A9EBC
  return; // 800A9EC0
}

// InquiryCallback
void f_800A9EC4(Ctx* __restrict c) {
  trace_call(0x800A9EC4u);
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800A9EC4
  cmps(c,0,(int32_t)c->r[0],0); // 800A9EC8
  if (crb(c,2)) { goto L_800A9ED4; } // 800A9ECC
  goto L_800A9EF0; // 800A9ED0
L_800A9ED4:;
  c->r[4]=0u+0x802B0000u; // 800A9ED4
  c->r[3]=0u+0x80000000u; // 800A9ED8
  c->r[4]=c->r[4]+0x000039A0u; // 800A9EDC
  c->r[0]=R16(c->r[4]+0x00000002u); // 800A9EE0
  c->r[0]=c->r[0]|0x00008000u; // 800A9EE4
  W16(c->r[3]+0x000030E6u,c->r[0]); // 800A9EE8
  return; // 800A9EEC
L_800A9EF0:;
  c->r[0]=0u+0x00000001u; // 800A9EF0
  c->r[3]=0u+0x80000000u; // 800A9EF4
  W16(c->r[3]+0x000030E6u,c->r[0]); // 800A9EF8
  return; // 800A9EFC
}

// ReportOSInfo
void f_800A9F00(Ctx* __restrict c) {
  trace_call(0x800A9F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9F00
  c->r[0]=c->lr; // 800A9F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9F08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A9F0C
  c->r[31]=0u+0x80260000u; // 800A9F10
  c->r[31]=c->r[31]+0x00005CD0u; // 800A9F14
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A9F18
  c->r[3]=c->r[31]+0x00000048u; // 800A9F1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9F20
  c->lr=0x800A9F28u; f_800ACBA4(c); // 800A9F24
  c->r[3]=c->r[31]+0x00000058u; // 800A9F28
  c->r[4]=c->r[31]+0x00000070u; // 800A9F2C
  c->r[5]=c->r[31]+0x0000007Cu; // 800A9F30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9F34
  c->lr=0x800A9F3Cu; f_800ACBA4(c); // 800A9F38
  c->r[3]=c->r[31]+0x00000088u; // 800A9F3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9F40
  c->lr=0x800A9F48u; f_800ACBA4(c); // 800A9F44
  c->lr=0x800A9F4Cu; f_800A9880(c); // 800A9F48
  c->r[4]=rotl(c->r[3],0)&0xF0000000u; // 800A9F4C
  c->r[0]=0u+0x10000000u; // 800A9F50
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800A9F54
  if (crb(c,2)) { goto L_800AA000; } // 800A9F58
  if (!crb(c,0)) { goto L_800A9F6C; } // 800A9F5C
  cmps(c,0,(int32_t)c->r[4],0); // 800A9F60
  if (crb(c,2)) { goto L_800A9F7C; } // 800A9F64
  goto L_800AA0B4; // 800A9F68
L_800A9F6C:;
  c->r[0]=0u+0x20000000u; // 800A9F6C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800A9F70
  if (crb(c,2)) { goto L_800AA09C; } // 800A9F74
  goto L_800AA0B4; // 800A9F78
L_800A9F7C:;
  cmps(c,0,(int32_t)c->r[3],32); // 800A9F7C
  if (crb(c,2)) { goto L_800A9FCC; } // 800A9F80
  if (!crb(c,0)) { goto L_800A9FA0; } // 800A9F84
  cmps(c,0,(int32_t)c->r[3],18); // 800A9F88
  if (crb(c,2)) { goto L_800A9FBC; } // 800A9F8C
  if (!crb(c,0)) { goto L_800A9FEC; } // 800A9F90
  cmps(c,0,(int32_t)c->r[3],17); // 800A9F94
  if (!crb(c,0)) { goto L_800A9FAC; } // 800A9F98
  goto L_800A9FEC; // 800A9F9C
L_800A9FA0:;
  cmps(c,0,(int32_t)c->r[3],256); // 800A9FA0
  if (crb(c,2)) { goto L_800A9FDC; } // 800A9FA4
  goto L_800A9FEC; // 800A9FA8
L_800A9FAC:;
  c->r[3]=c->r[31]+0x00000098u; // 800A9FAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9FB0
  c->lr=0x800A9FB8u; f_800ACBA4(c); // 800A9FB4
  goto L_800AA0C4; // 800A9FB8
L_800A9FBC:;
  c->r[3]=c->r[31]+0x000000B0u; // 800A9FBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9FC0
  c->lr=0x800A9FC8u; f_800ACBA4(c); // 800A9FC4
  goto L_800AA0C4; // 800A9FC8
L_800A9FCC:;
  c->r[3]=c->r[31]+0x000000CCu; // 800A9FCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9FD0
  c->lr=0x800A9FD8u; f_800ACBA4(c); // 800A9FD4
  goto L_800AA0C4; // 800A9FD8
L_800A9FDC:;
  c->r[3]=c->r[13]+0xFFFF8094u; // 800A9FDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9FE0
  c->lr=0x800A9FE8u; f_800ACBA4(c); // 800A9FE4
  goto L_800AA0C4; // 800A9FE8
L_800A9FEC:;
  c->r[4]=c->r[3]|c->r[3]; // 800A9FEC
  c->r[3]=c->r[31]+0x000000E8u; // 800A9FF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9FF4
  c->lr=0x800A9FFCu; f_800ACBA4(c); // 800A9FF8
  goto L_800AA0C4; // 800A9FFC
L_800AA000:;
  c->r[5]=c->r[3]+0xF0000000u; // 800AA000
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 800AA004
  cmpu(c,0,c->r[5],0x00000019u); // 800AA008
  if (crb(c,1)) { goto L_800AA088; } // 800AA00C
  c->r[4]=0u+0x80260000u; // 800AA010
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800AA014
  c->r[4]=c->r[4]+0x00005EC0u; // 800AA018
  c->r[4]=R32(c->r[4]+c->r[5]); // 800AA01C
  c->ctr=c->r[4]; // 800AA020
  if (true) { switch (c->ctr) { case 0x800AA028u: goto L_800AA028; case 0x800AA038u: goto L_800AA038; case 0x800AA048u: goto L_800AA048; case 0x800AA058u: goto L_800AA058; case 0x800AA068u: goto L_800AA068; case 0x800AA078u: goto L_800AA078; case 0x800AA088u: goto L_800AA088; default: break; } dispatch(c,c->ctr); return; } // 800AA024
L_800AA028:;
  c->r[3]=c->r[31]+0x000000F4u; // 800AA028
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA02C
  c->lr=0x800AA034u; f_800ACBA4(c); // 800AA030
  goto L_800AA0C4; // 800AA034
L_800AA038:;
  c->r[3]=c->r[31]+0x00000100u; // 800AA038
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA03C
  c->lr=0x800AA044u; f_800ACBA4(c); // 800AA040
  goto L_800AA0C4; // 800AA044
L_800AA048:;
  c->r[3]=c->r[31]+0x0000010Cu; // 800AA048
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA04C
  c->lr=0x800AA054u; f_800ACBA4(c); // 800AA050
  goto L_800AA0C4; // 800AA054
L_800AA058:;
  c->r[3]=c->r[31]+0x00000118u; // 800AA058
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA05C
  c->lr=0x800AA064u; f_800ACBA4(c); // 800AA060
  goto L_800AA0C4; // 800AA064
L_800AA068:;
  c->r[3]=c->r[31]+0x00000124u; // 800AA068
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA06C
  c->lr=0x800AA074u; f_800ACBA4(c); // 800AA070
  goto L_800AA0C4; // 800AA074
L_800AA078:;
  c->r[3]=c->r[31]+0x00000130u; // 800AA078
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA07C
  c->lr=0x800AA084u; f_800ACBA4(c); // 800AA080
  goto L_800AA0C4; // 800AA084
L_800AA088:;
  c->r[4]=c->r[3]|c->r[3]; // 800AA088
  c->r[3]=c->r[31]+0x00000148u; // 800AA08C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA090
  c->lr=0x800AA098u; f_800ACBA4(c); // 800AA094
  goto L_800AA0C4; // 800AA098
L_800AA09C:;
  c->r[4]=rotl(c->r[3],0)&0x0FFFFFFFu; // 800AA09C
  c->r[3]=c->r[31]+0x00000164u; // 800AA0A0
  c->r[4]=c->r[4]+0xFFFFFFFDu; // 800AA0A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA0A8
  c->lr=0x800AA0B0u; f_800ACBA4(c); // 800AA0AC
  goto L_800AA0C4; // 800AA0B0
L_800AA0B4:;
  c->r[4]=c->r[3]|c->r[3]; // 800AA0B4
  c->r[3]=c->r[13]+0xFFFF809Cu; // 800AA0B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA0BC
  c->lr=0x800AA0C4u; f_800ACBA4(c); // 800AA0C0
L_800AA0C4:;
  c->r[4]=0u+0xC0000000u; // 800AA0C4
  c->r[3]=c->r[31]+0x00000180u; // 800AA0C8
  c->r[0]=R32(c->r[4]+0x00003140u); // 800AA0CC
  c->r[30]=R32(c->r[4]+0x00003144u); // 800AA0D0
  c->r[4]=rotl(c->r[0],16)&0x000000FFu; // 800AA0D4
  c->r[5]=rotl(c->r[0],24)&0x000000FFu; // 800AA0D8
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 800AA0DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA0E0
  c->lr=0x800AA0E8u; f_800ACBA4(c); // 800AA0E4
  c->r[3]=rotl(c->r[30],28)&0x0000000Fu; // 800AA0E8
  c->r[6]=rotl(c->r[30],12)&0x0000000Fu; // 800AA0EC
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 800AA0F0
  c->r[5]=rotl(c->r[30],20)&0x0000000Fu; // 800AA0F4
  c->r[0]=rotl(c->r[30],0)&0x0000000Fu; // 800AA0F8
  c->r[8]=rotl(c->r[30],16)&0x0000000Fu; // 800AA0FC
  c->r[4]=c->r[0]+c->r[4]; // 800AA100
  c->r[7]=rotl(c->r[30],24)&0x0000000Fu; // 800AA104
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 800AA108
  c->r[3]=c->r[31]+0x0000019Cu; // 800AA10C
  c->r[0]=c->r[4]+0x000007D0u; // 800AA110
  c->r[4]=c->r[8]+c->r[6]; // 800AA114
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 800AA118
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800AA11C
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800AA120
  c->r[0]=c->r[7]+c->r[5]; // 800AA124
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800AA128
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA12C
  c->lr=0x800AA134u; f_800ACBA4(c); // 800AA130
  c->lr=0x800AA138u; f_800B1304(c); // 800AA134
  c->r[30]=c->r[3]|c->r[3]; // 800AA138
  c->lr=0x800AA140u; f_800B12F8(c); // 800AA13C
  c->r[0]=c->r[3]+c->r[30]; // 800AA140
  c->r[3]=c->r[31]+0x000001A8u; // 800AA144
  c->r[4]=rotl(c->r[0],12)&0x00000FFFu; // 800AA148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA14C
  c->lr=0x800AA154u; f_800ACBA4(c); // 800AA150
  c->lr=0x800AA158u; f_800AB7A4(c); // 800AA154
  c->r[30]=c->r[3]|c->r[3]; // 800AA158
  c->lr=0x800AA160u; f_800AB7BC(c); // 800AA15C
  c->r[4]=c->r[3]|c->r[3]; // 800AA160
  c->r[5]=c->r[30]|c->r[30]; // 800AA164
  c->r[3]=c->r[31]+0x000001B8u; // 800AA168
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA16C
  c->lr=0x800AA174u; f_800ACBA4(c); // 800AA170
  c->lr=0x800AA178u; f_800AB7AC(c); // 800AA174
  c->r[30]=c->r[3]|c->r[3]; // 800AA178
  c->lr=0x800AA180u; f_800AB7C4(c); // 800AA17C
  c->r[4]=c->r[3]|c->r[3]; // 800AA180
  c->r[5]=c->r[30]|c->r[30]; // 800AA184
  c->r[3]=c->r[31]+0x000001D4u; // 800AA188
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA18C
  c->lr=0x800AA194u; f_800ACBA4(c); // 800AA190
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AA194
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AA198
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AA19C
  c->lr=c->r[0]; // 800AA1A0
  c->r[1]=c->r[1]+0x00000010u; // 800AA1A4
  return; // 800AA1A8
}

// OSInit
void f_800AA1AC(Ctx* __restrict c) {
  trace_call(0x800AA1ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA1AC
  c->r[0]=c->lr; // 800AA1B0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800AA1B4
  c->r[11]=c->r[1]+0x00000050u; // 800AA1B8
  c->lr=0x800AA1C0u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AA1BC
  c->r[0]=R32(c->r[13]+0xFFFF8C4Cu); // 800AA1C0
  c->r[30]=0u+0x802B0000u; // 800AA1C4
  c->r[31]=0u+0x80260000u; // 800AA1C8
  cmps(c,0,(int32_t)c->r[0],0); // 800AA1CC
  c->r[30]=c->r[30]+0x00003980u; // 800AA1D0
  c->r[31]=c->r[31]+0x00005CD0u; // 800AA1D4
  if (!crb(c,2)) { goto L_800AA718; } // 800AA1D8
  c->r[0]=0u+0x00000001u; // 800AA1DC
  W32(c->r[13]+0xFFFF8C4Cu,c->r[0]); // 800AA1E0
  c->lr=0x800AA1E8u; f_800B4914(c); // 800AA1E4
  W32(c->r[13]+0xFFFF8C84u,c->r[4]); // 800AA1E8
  W32(c->r[13]+0xFFFF8C80u,c->r[3]); // 800AA1EC
  c->lr=0x800AA1F4u; f_800B087C(c); // 800AA1F0
  c->r[3]=c->r[30]+0x00000000u; // 800AA1F4
  c->lr=0x800AA1FCu; f_800AD7C4(c); // 800AA1F8
  c->r[3]=0u+0x00000000u; // 800AA1FC
  c->lr=0x800AA204u; f_800A94F4(c); // 800AA200
  c->r[3]=0u+0x00000000u; // 800AA204
  c->lr=0x800AA20Cu; f_800A94FC(c); // 800AA208
  c->r[3]=0u+0x00000000u; // 800AA20C
  c->lr=0x800AA214u; f_800A9504(c); // 800AA210
  c->r[3]=0u+0x00000000u; // 800AA214
  c->lr=0x800AA21Cu; f_800A950C(c); // 800AA218
  c->r[3]=0u+0x00000000u; // 800AA21C
  c->lr=0x800AA224u; f_800A9514(c); // 800AA220
  c->r[3]=0u+0x00000000u; // 800AA224
  c->lr=0x800AA22Cu; f_800A951C(c); // 800AA228
  c->r[3]=0u+0x83900000u; // 800AA22C
  c->lr=0x800AA234u; f_800A95B4(c); // 800AA230
  c->lr=0x800AA238u; f_800A9584(c); // 800AA234
  c->lr=0x800AA23Cu; f_800A95AC(c); // 800AA238
  c->r[0]=0u+0x00000000u; // 800AA23C
  c->r[4]=0u+0x80000000u; // 800AA240
  W32(c->r[13]+0xFFFF8C78u,c->r[4]); // 800AA244
  W32(c->r[13]+0xFFFF8C74u,c->r[0]); // 800AA248
  W32(c->r[13]+0xFFFF8138u,c->r[0]); // 800AA24C
  c->r[5]=R32(c->r[4]+0x000000F4u); // 800AA250
  cmps(c,0,(int32_t)c->r[5],0); // 800AA254
  if (crb(c,2)) { goto L_800AA280; } // 800AA258
  c->r[3]=c->r[5]+0x0000000Cu; // 800AA25C
  W32(c->r[13]+0xFFFF8C74u,c->r[3]); // 800AA260
  c->r[0]=R32(c->r[5]+0x00000024u); // 800AA264
  W32(c->r[13]+0xFFFF8F78u,c->r[0]); // 800AA268
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800AA26C
  W8(c->r[4]+0x000030E8u,c->r[0]); // 800AA270
  c->r[0]=R32(c->r[13]+0xFFFF8F78u); // 800AA274
  W8(c->r[4]+0x000030E9u,c->r[0]); // 800AA278
  goto L_800AA2A4; // 800AA27C
L_800AA280:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 800AA280
  cmps(c,0,(int32_t)c->r[0],0); // 800AA284
  if (crb(c,2)) { goto L_800AA2A4; } // 800AA288
  c->r[3]=R8(c->r[4]+0x000030E8u); // 800AA28C
  c->r[0]=c->r[13]+0xFFFF8C70u; // 800AA290
  W32(c->r[13]+0xFFFF8C70u,c->r[3]); // 800AA294
  W32(c->r[13]+0xFFFF8C74u,c->r[0]); // 800AA298
  c->r[0]=R8(c->r[4]+0x000030E9u); // 800AA29C
  W32(c->r[13]+0xFFFF8F78u,c->r[0]); // 800AA2A0
L_800AA2A4:;
  c->r[0]=0u+0x00000001u; // 800AA2A4
  c->r[4]=0u+0x80000000u; // 800AA2A8
  W32(c->r[13]+0xFFFF8138u,c->r[0]); // 800AA2AC
  c->r[3]=R32(c->r[4]+0x0000310Cu); // 800AA2B0
  cmps(c,0,(int32_t)c->r[3],0); // 800AA2B4
  if (!crb(c,2)) { goto L_800AA324; } // 800AA2B8
  c->r[3]=0u+0x80370000u; // 800AA2BC
  c->r[3]=c->r[3]+0x00003620u; // 800AA2C0
  c->r[0]=rotl(c->r[3],0)&0x30000000u; cr0(c,c->r[0]); // 800AA2C4
  if (!crb(c,2)) { goto L_800AA320; } // 800AA2C8
  c->r[4]=R32(c->r[13]+0xFFFF8C78u); // 800AA2CC
  c->r[0]=R32(c->r[4]+0x00000030u); // 800AA2D0
  cmps(c,0,(int32_t)c->r[0],0); // 800AA2D4
  if (!crb(c,2)) { goto L_800AA2E0; } // 800AA2D8
  goto L_800AA2E4; // 800AA2DC
L_800AA2E0:;
  c->r[3]=c->r[0]|c->r[0]; // 800AA2E0
L_800AA2E4:;
  c->r[4]=R32(c->r[13]+0xFFFF8C78u); // 800AA2E4
  c->r[0]=R32(c->r[4]+0x00000030u); // 800AA2E8
  cmps(c,0,(int32_t)c->r[0],0); // 800AA2EC
  if (!crb(c,2)) { goto L_800AA324; } // 800AA2F0
  c->r[4]=R32(c->r[13]+0xFFFF8C74u); // 800AA2F4
  cmps(c,0,(int32_t)c->r[4],0); // 800AA2F8
  if (crb(c,2)) { goto L_800AA324; } // 800AA2FC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800AA300
  cmpu(c,0,c->r[0],0x00000002u); // 800AA304
  if (!crb(c,0)) { goto L_800AA324; } // 800AA308
  c->r[3]=0u+0x80370000u; // 800AA30C
  c->r[3]=c->r[3]+0x00001610u; // 800AA310
  c->r[0]=c->r[3]+0x0000001Fu; // 800AA314
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800AA318
  goto L_800AA324; // 800AA31C
L_800AA320:;
  c->r[3]=c->r[4]+0x00004000u; // 800AA320
L_800AA324:;
  c->lr=0x800AA328u; f_800AB7EC(c); // 800AA324
  c->r[3]=0u+0x80000000u; // 800AA328
  c->r[3]=R32(c->r[3]+0x00003110u); // 800AA32C
  cmps(c,0,(int32_t)c->r[3],0); // 800AA330
  if (!crb(c,2)) { goto L_800AA350; } // 800AA334
  c->r[3]=R32(c->r[13]+0xFFFF8C78u); // 800AA338
  c->r[3]=R32(c->r[3]+0x00000034u); // 800AA33C
  cmps(c,0,(int32_t)c->r[3],0); // 800AA340
  if (!crb(c,2)) { goto L_800AA350; } // 800AA344
  c->r[3]=0u+0x81700000u; // 800AA348
  c->r[3]=c->r[3]+0x00000000u; // 800AA34C
L_800AA350:;
  c->lr=0x800AA354u; f_800AB7D4(c); // 800AA350
  c->r[3]=0u+0x80000000u; // 800AA354
  c->r[3]=R32(c->r[3]+0x00003124u); // 800AA358
  cmps(c,0,(int32_t)c->r[3],0); // 800AA35C
  if (crb(c,2)) { goto L_800AA3CC; } // 800AA360
  c->r[5]=0u+0x80370000u; // 800AA364
  c->r[5]=c->r[5]+0x00003620u; // 800AA368
  c->r[4]=rotl(c->r[5],0)&0x30000000u; // 800AA36C
  c->r[0]=c->r[4]+0xF0000000u; // 800AA370
  cmpu(c,0,c->r[0],0x00000000u); // 800AA374
  if (!crb(c,2)) { goto L_800AA3AC; } // 800AA378
  c->r[4]=R32(c->r[13]+0xFFFF8C74u); // 800AA37C
  c->r[3]=c->r[5]|c->r[5]; // 800AA380
  cmps(c,0,(int32_t)c->r[4],0); // 800AA384
  if (crb(c,2)) { goto L_800AA3C8; } // 800AA388
  c->r[0]=R32(c->r[4]+0x00000000u); // 800AA38C
  cmpu(c,0,c->r[0],0x00000002u); // 800AA390
  if (!crb(c,0)) { goto L_800AA3C8; } // 800AA394
  c->r[3]=0u+0x80370000u; // 800AA398
  c->r[3]=c->r[3]+0x00001610u; // 800AA39C
  c->r[0]=c->r[3]+0x0000001Fu; // 800AA3A0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800AA3A4
  goto L_800AA3C8; // 800AA3A8
L_800AA3AC:;
  c->r[4]=0u+0x90000000u; // 800AA3AC
  cmpu(c,0,c->r[3],c->r[4]); // 800AA3B0
  if (crb(c,0)) { goto L_800AA3C8; } // 800AA3B4
  c->r[0]=c->r[4]+0x00000800u; // 800AA3B8
  cmpu(c,0,c->r[3],c->r[0]); // 800AA3BC
  if (!crb(c,0)) { goto L_800AA3C8; } // 800AA3C0
  c->r[3]=c->r[0]|c->r[0]; // 800AA3C4
L_800AA3C8:;
  c->lr=0x800AA3CCu; f_800AB7F4(c); // 800AA3C8
L_800AA3CC:;
  c->r[3]=0u+0x80000000u; // 800AA3CC
  c->r[3]=R32(c->r[3]+0x00003128u); // 800AA3D0
  cmps(c,0,(int32_t)c->r[3],0); // 800AA3D4
  if (crb(c,2)) { goto L_800AA3E0; } // 800AA3D8
  c->lr=0x800AA3E0u; f_800AB7DC(c); // 800AA3DC
L_800AA3E0:;
  c->lr=0x800AA3E4u; f_800B4F50(c); // 800AA3E0
  c->lr=0x800AA3E8u; f_800AA730(c); // 800AA3E4
  c->lr=0x800AA3ECu; f_800B3284(c); // 800AA3E8
  c->lr=0x800AA3F0u; f_800AAC08(c); // 800AA3EC
  c->lr=0x800AA3F4u; f_800B1000(c); // 800AA3F0
  c->lr=0x800AA3F8u; f_800B08EC(c); // 800AA3F4
  c->lr=0x800AA3FCu; f_800ACB5C(c); // 800AA3F8
  c->lr=0x800AA400u; f_800AC1E4(c); // 800AA3FC
  c->lr=0x800AA404u; f_800E5334(c); // 800AA400
  c->lr=0x800AA408u; f_800E67BC(c); // 800AA404
  c->lr=0x800AA40Cu; f_800B2910(c); // 800AA408
  c->lr=0x800AA410u; f_800B32E8(c); // 800AA40C
  c->lr=0x800AA414u; f_800ABA58(c); // 800AA410
  c->lr=0x800AA418u; f_800A956C(c); // 800AA414
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 800AA418
  c->lr=0x800AA420u; f_800A9574(c); // 800AA41C
  c->r[0]=R32(c->r[13]+0xFFFF8C40u); // 800AA420
  cmps(c,0,(int32_t)c->r[0],0); // 800AA424
  if (!crb(c,2)) { goto L_800AA430; } // 800AA428
  c->lr=0x800AA430u; f_800B1958(c); // 800AA42C
L_800AA430:;
  c->lr=0x800AA434u; f_800A9F00(c); // 800AA430
  c->r[4]=R32(c->r[13]+0xFFFF8090u); // 800AA434
  c->r[3]=c->r[13]+0xFFFF80A4u; // 800AA438
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA43C
  c->lr=0x800AA444u; f_800ACBA4(c); // 800AA440
  c->r[3]=R32(c->r[13]+0xFFFF8C74u); // 800AA444
  cmps(c,0,(int32_t)c->r[3],0); // 800AA448
  if (crb(c,2)) { goto L_800AA460; } // 800AA44C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AA450
  cmpu(c,0,c->r[0],0x00000002u); // 800AA454
  if (crb(c,0)) { goto L_800AA460; } // 800AA458
  c->lr=0x800AA460u; f_800E8020(c); // 800AA45C
L_800AA460:;
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800AA460
  cmps(c,0,(int32_t)c->r[0],0); // 800AA464
  if (!crb(c,2)) { goto L_800AA480; } // 800AA468
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800AA46C
  cmps(c,0,(int32_t)c->r[0],0); // 800AA470
  if (!crb(c,2)) { goto L_800AA480; } // 800AA474
  c->lr=0x800AA47Cu; f_800A9B04(c); // 800AA478
  c->lr=0x800AA480u; f_800A9CE0(c); // 800AA47C
L_800AA480:;
  c->lr=0x800AA484u; f_800B0890(c); // 800AA480
  c->lr=0x800AA488u; f_800EFFE8(c); // 800AA484
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800AA488
  cmps(c,0,(int32_t)c->r[0],0); // 800AA48C
  if (!crb(c,2)) { goto L_800AA4B8; } // 800AA490
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800AA494
  cmps(c,0,(int32_t)c->r[0],0); // 800AA498
  if (!crb(c,2)) { goto L_800AA4B8; } // 800AA49C
  c->lr=0x800AA4A4u; f_800B5140(c); // 800AA4A0
  c->lr=0x800AA4A8u; f_800F49B0(c); // 800AA4A4
L_800AA4A8:;
  c->lr=0x800AA4ACu; f_800F4A50(c); // 800AA4A8
  cmpu(c,0,c->r[3],0x00000001u); // 800AA4AC
  if (crb(c,2)) { IRQCHK(c); goto L_800AA4A8; } // 800AA4B0
  c->lr=0x800AA4B8u; f_800B5F20(c); // 800AA4B4
L_800AA4B8:;
  c->r[0]=R32(c->r[13]+0xFFFF8C40u); // 800AA4B8
  cmps(c,0,(int32_t)c->r[0],0); // 800AA4BC
  if (!crb(c,2)) { goto L_800AA6D4; } // 800AA4C0
  c->r[3]=0u+0x80000000u; // 800AA4C4
  c->r[0]=R8(c->r[3]+0x0000315Cu); // 800AA4C8
  cmps(c,0,(int32_t)c->r[0],129); // 800AA4CC
  if (crb(c,2)) { goto L_800AA4DC; } // 800AA4D0
  if (!crb(c,0)) { goto L_800AA4FC; } // 800AA4D4
  goto L_800AA4FC; // 800AA4D8
L_800AA4DC:;
  c->r[3]=c->r[31]+0x00000258u; // 800AA4DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA4E0
  c->lr=0x800AA4E8u; f_800ACBA4(c); // 800AA4E4
  c->r[5]=c->r[31]+0x000002A8u; // 800AA4E8
  c->r[3]=c->r[13]+0xFFFF80A8u; // 800AA4EC
  c->r[4]=0u+0x00000481u; // 800AA4F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA4F4
  c->lr=0x800AA4FCu; f_800ACC34(c); // 800AA4F8
L_800AA4FC:;
  c->r[3]=0u+0x80000000u; // 800AA4FC
  c->r[0]=R8(c->r[3]+0x0000315Du); // 800AA500
  cmps(c,0,(int32_t)c->r[0],129); // 800AA504
  if (crb(c,2)) { goto L_800AA514; } // 800AA508
  if (!crb(c,0)) { goto L_800AA534; } // 800AA50C
  goto L_800AA534; // 800AA510
L_800AA514:;
  c->r[3]=c->r[31]+0x000002C0u; // 800AA514
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA518
  c->lr=0x800AA520u; f_800ACBA4(c); // 800AA51C
  c->r[5]=c->r[31]+0x000002A8u; // 800AA520
  c->r[3]=c->r[13]+0xFFFF80A8u; // 800AA524
  c->r[4]=0u+0x00000493u; // 800AA528
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA52C
  c->lr=0x800AA534u; f_800ACC34(c); // 800AA530
L_800AA534:;
  c->r[4]=0u+0xC0000000u; // 800AA534
  c->r[21]=R8(c->r[2]+0xFFFF8F10u); // 800AA538
  c->r[20]=R32(c->r[4]+0x00003144u); // 800AA53C
  c->r[3]=0u+0x80000000u; // 800AA540
  c->r[0]=R32(c->r[4]+0x00003140u); // 800AA544
  c->r[5]=rotl(c->r[20],28)&0x0000000Fu; // 800AA548
  c->r[8]=rotl(c->r[20],12)&0x0000000Fu; // 800AA54C
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 800AA550
  c->r[4]=R32(c->r[3]+0x00003188u); // 800AA554
  c->r[5]=rotl(c->r[20],0)&0x0000000Fu; // 800AA558
  c->r[22]=R8(c->r[2]+0xFFFF8F11u); // 800AA55C
  c->r[7]=rotl(c->r[20],20)&0x0000000Fu; // 800AA560
  c->r[23]=R8(c->r[2]+0xFFFF8F12u); // 800AA564
  c->r[5]=c->r[5]+c->r[6]; // 800AA568
  c->r[12]=rotl(c->r[0],16)&0x000000FFu; // 800AA56C
  c->r[9]=(uint32_t)((int32_t)c->r[8]*(int32_t)10); // 800AA570
  c->r[3]=rotl(c->r[4],16)&0x0000FFFFu; // 800AA574
  c->r[24]=R8(c->r[2]+0xFFFF8F13u); // 800AA578
  c->r[29]=rotl(c->r[0],8)&0x000000FFu; // 800AA57C
  c->r[25]=R8(c->r[2]+0xFFFF8F14u); // 800AA580
  c->r[11]=rotl(c->r[0],24)&0x000000FFu; // 800AA584
  c->r[26]=R8(c->r[2]+0xFFFF8F15u); // 800AA588
  c->r[5]=c->r[5]+0x000007D0u; // 800AA58C
  c->r[27]=R8(c->r[2]+0xFFFF8F16u); // 800AA590
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)10); // 800AA594
  c->r[10]=rotl(c->r[20],16)&0x0000000Fu; // 800AA598
  c->r[28]=R8(c->r[2]+0xFFFF8F17u); // 800AA59C
  c->r[8]=rotl(c->r[20],24)&0x0000000Fu; // 800AA5A0
  W8(c->r[1]+0x00000008u,c->r[21]); // 800AA5A4
  c->r[7]=c->r[10]+c->r[9]; // 800AA5A8
  cmpu(c,0,c->r[12],c->r[3]); // 800AA5AC
  c->r[3]=c->r[8]+c->r[6]; // 800AA5B0
  W8(c->r[1]+0x00000009u,c->r[22]); // 800AA5B4
  c->r[6]=rotl(c->r[0],0)&0x00FFFFFFu; // 800AA5B8
  W8(c->r[1]+0x0000000Au,c->r[23]); // 800AA5BC
  W8(c->r[1]+0x0000000Bu,c->r[24]); // 800AA5C0
  W8(c->r[1]+0x0000000Cu,c->r[25]); // 800AA5C4
  W8(c->r[1]+0x0000000Du,c->r[26]); // 800AA5C8
  W8(c->r[1]+0x0000000Eu,c->r[27]); // 800AA5CC
  W8(c->r[1]+0x0000000Fu,c->r[28]); // 800AA5D0
  W8(c->r[1]+0x00000018u,c->r[29]); // 800AA5D4
  W8(c->r[1]+0x00000019u,c->r[12]); // 800AA5D8
  W8(c->r[1]+0x0000001Au,c->r[11]); // 800AA5DC
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 800AA5E0
  W8(c->r[1]+0x0000001Cu,c->r[7]); // 800AA5E4
  W8(c->r[1]+0x0000001Du,c->r[3]); // 800AA5E8
  W16(c->r[1]+0x0000001Eu,c->r[5]); // 800AA5EC
  if (!crb(c,2)) { goto L_800AA600; } // 800AA5F0
  if (!crb(c,2)) { goto L_800AA640; } // 800AA5F4
  cmpu(c,0,c->r[6],c->r[4]); // 800AA5F8
  if (!crb(c,0)) { goto L_800AA640; } // 800AA5FC
L_800AA600:;
  c->r[3]=c->r[31]+0x00000318u; // 800AA600
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA604
  c->lr=0x800AA60Cu; f_800ACBA4(c); // 800AA608
  c->r[5]=R32(c->r[1]+0x00000008u); // 800AA60C
  c->r[4]=c->r[1]+0x00000014u; // 800AA610
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800AA614
  c->r[3]=c->r[1]+0x00000010u; // 800AA618
  W32(c->r[1]+0x00000014u,c->r[5]); // 800AA61C
  c->r[5]=c->r[31]+0x00000378u; // 800AA620
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AA624
  c->lr=0x800AA62Cu; f_800AED9C(c); // 800AA628
  c->r[5]=c->r[31]+0x000002A8u; // 800AA62C
  c->r[3]=c->r[13]+0xFFFF80A8u; // 800AA630
  c->r[4]=0u+0x000004D4u; // 800AA634
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA638
  c->lr=0x800AA640u; f_800ACC34(c); // 800AA63C
L_800AA640:;
  c->lr=0x800AA644u; f_800B9CB8(c); // 800AA640
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 800AA644
  cmps(c,0,(int32_t)c->r[0],0); // 800AA648
  if (crb(c,2)) { goto L_800AA664; } // 800AA64C
  c->r[4]=0u+0x00010000u; // 800AA650
  c->r[3]=0u+0x80000000u; // 800AA654
  c->r[0]=c->r[4]+0xFFFF9000u; // 800AA658
  W16(c->r[3]+0x000030E6u,c->r[0]); // 800AA65C
  goto L_800AA694; // 800AA660
L_800AA664:;
  c->r[3]=0u+0x80000000u; // 800AA664
  c->r[0]=R16(c->r[3]+0x000030E6u); // 800AA668
  cmps(c,0,(int32_t)c->r[0],0); // 800AA66C
  if (!crb(c,2)) { goto L_800AA694; } // 800AA670
  c->r[3]=c->r[30]+0x00000020u; // 800AA674
  c->r[4]=0u+0x00000020u; // 800AA678
  c->lr=0x800AA680u; f_800ABD00(c); // 800AA67C
  c->r[5]=0u+0x800B0000u; // 800AA680
  c->r[3]=c->r[30]+0x00000040u; // 800AA684
  c->r[4]=c->r[30]+0x00000020u; // 800AA688
  c->r[5]=c->r[5]+0xFFFF9EC4u; // 800AA68C
  c->lr=0x800AA694u; f_800BDC4C(c); // 800AA690
L_800AA694:;
  c->r[0]=R32(c->r[13]+0xFFFF8C40u); // 800AA694
  cmps(c,0,(int32_t)c->r[0],0); // 800AA698
  if (crb(c,2)) { goto L_800AA6A8; } // 800AA69C
  c->r[0]=0u+0x00000040u; // 800AA6A0
  goto L_800AA6B0; // 800AA6A4
L_800AA6A8:;
  c->r[3]=0u+0x80000000u; // 800AA6A8
  c->r[0]=R8(c->r[3]+0x00003184u); // 800AA6AC
L_800AA6B0:;
  cmpu(c,0,c->r[0],0x00000080u); // 800AA6B0
  if (!crb(c,2)) { goto L_800AA6D4; } // 800AA6B4
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800AA6B8
  cmps(c,0,(int32_t)c->r[0],0); // 800AA6BC
  if (!crb(c,2)) { goto L_800AA6D4; } // 800AA6C0
  c->lr=0x800AA6C8u; f_800BF58C(c); // 800AA6C4
  cmps(c,0,(int32_t)c->r[3],0); // 800AA6C8
  if (!crb(c,2)) { goto L_800AA6D4; } // 800AA6CC
  c->lr=0x800AA6D4u; f_800B2554(c); // 800AA6D0
L_800AA6D4:;
  c->r[0]=R32(c->r[13]+0xFFFF8C40u); // 800AA6D4
  cmps(c,0,(int32_t)c->r[0],0); // 800AA6D8
  if (!crb(c,2)) { goto L_800AA6F0; } // 800AA6DC
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800AA6E0
  cmps(c,0,(int32_t)c->r[0],0); // 800AA6E4
  if (!crb(c,2)) { goto L_800AA6F0; } // 800AA6E8
  c->lr=0x800AA6F0u; f_800B6CE0(c); // 800AA6EC
L_800AA6F0:;
  c->r[0]=R32(c->r[13]+0xFFFF8C40u); // 800AA6F0
  cmps(c,0,(int32_t)c->r[0],0); // 800AA6F4
  if (!crb(c,2)) { goto L_800AA718; } // 800AA6F8
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800AA6FC
  cmps(c,0,(int32_t)c->r[0],0); // 800AA700
  if (!crb(c,2)) { goto L_800AA718; } // 800AA704
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800AA708
  cmps(c,0,(int32_t)c->r[0],0); // 800AA70C
  if (!crb(c,2)) { goto L_800AA718; } // 800AA710
  c->lr=0x800AA718u; f_800B5AD8(c); // 800AA714
L_800AA718:;
  c->r[11]=c->r[1]+0x00000050u; // 800AA718
  c->lr=0x800AA720u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AA71C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800AA720
  c->lr=c->r[0]; // 800AA724
  c->r[1]=c->r[1]+0x00000050u; // 800AA728
  return; // 800AA72C
}

// OSExceptionInit
void f_800AA730(Ctx* __restrict c) {
  trace_call(0x800AA730u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA730
  c->r[0]=c->lr; // 800AA734
  W32(c->r[1]+0x00000044u,c->r[0]); // 800AA738
  c->r[11]=c->r[1]+0x00000040u; // 800AA73C
  c->lr=0x800AA744u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AA740
  c->r[22]=0u+0x80000000u; // 800AA744
  c->r[26]=0u+0x800B0000u; // 800AA748
  c->r[0]=R32(c->r[22]+0x00000060u); // 800AA74C
  c->r[3]=0u+0x800B0000u; // 800AA750
  c->r[28]=0u+0x800B0000u; // 800AA754
  c->r[30]=0u+0x80260000u; // 800AA758
  cmps(c,0,(int32_t)c->r[0],0); // 800AA75C
  c->r[26]=c->r[26]+0xFFFFA9FCu; // 800AA760
  c->r[3]=c->r[3]+0xFFFFAA94u; // 800AA764
  {uint32_t ea=c->r[28]+0xFFFFAA64u; c->r[27]=R32(ea); c->r[28]=ea;} // 800AA768
  c->r[30]=c->r[30]+0x00005CD0u; // 800AA76C
  c->r[25]=c->r[3]-c->r[26]; // 800AA770
  if (!crb(c,2)) { goto L_800AA7C0; } // 800AA774
  c->r[3]=c->r[30]+0x00000474u; // 800AA778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA77C
  c->lr=0x800AA784u; f_800A969C(c); // 800AA780
  c->r[4]=0u+0x800B0000u; // 800AA784
  c->r[5]=0u+0x800B0000u; // 800AA788
  c->r[4]=c->r[4]+0xFFFFA9B0u; // 800AA78C
  c->r[3]=c->r[22]+0x00000060u; // 800AA790
  c->r[5]=c->r[5]+0xFFFFA9D4u; // 800AA794
  c->r[21]=c->r[5]-c->r[4]; // 800AA798
  c->r[5]=c->r[21]|c->r[21]; // 800AA79C
  c->lr=0x800AA7A4u; f_80004338(c); // 800AA7A0
  c->r[4]=c->r[21]|c->r[21]; // 800AA7A4
  c->r[3]=c->r[22]+0x00000060u; // 800AA7A8
  c->lr=0x800AA7B0u; f_800ABD8C(c); // 800AA7AC
  /* sync */ // 800AA7B0
  c->r[4]=c->r[21]|c->r[21]; // 800AA7B4
  c->r[3]=c->r[22]+0x00000060u; // 800AA7B8
  c->lr=0x800AA7C0u; f_800ABE10(c); // 800AA7BC
L_800AA7C0:;
  c->r[31]=0u+0x800B0000u; // 800AA7C0
  c->r[3]=0u+0x800B0000u; // 800AA7C4
  c->r[0]=c->r[31]+0xFFFFA9D4u; // 800AA7C8
  c->r[24]=c->r[30]+0x00000438u; // 800AA7CC
  c->r[3]=c->r[3]+0xFFFFA9D8u; // 800AA7D0
  c->r[29]=0u+0x00000000u; // 800AA7D4
  c->r[21]=c->r[3]-c->r[0]; // 800AA7D8
  c->r[23]=0u+0x60000000u; // 800AA7DC
  c->r[22]=0u+0x800B0000u; // 800AA7E0
L_800AA7E4:;
  c->r[3]=R32(c->r[13]+0xFFFF8C74u); // 800AA7E4
  cmps(c,0,(int32_t)c->r[3],0); // 800AA7E8
  if (crb(c,2)) { goto L_800AA820; } // 800AA7EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AA7F0
  cmpu(c,0,c->r[0],0x00000002u); // 800AA7F4
  if (crb(c,0)) { goto L_800AA820; } // 800AA7F8
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800AA7FC
  c->lr=0x800AA804u; f_800A9684(c); // 800AA800
  cmps(c,0,(int32_t)c->r[3],0); // 800AA804
  if (crb(c,2)) { goto L_800AA820; } // 800AA808
  c->r[3]=c->r[30]+0x00000490u; // 800AA80C
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800AA810
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA814
  c->lr=0x800AA81Cu; f_800A969C(c); // 800AA818
  goto L_800AA8F4; // 800AA81C
L_800AA820:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800AA820
  c->r[0]=c->r[27]|c->r[3]; // 800AA824
  W32(c->r[28]+0x00000000u,c->r[0]); // 800AA828
  c->lr=0x800AA830u; f_800A9684(c); // 800AA82C
  cmps(c,0,(int32_t)c->r[3],0); // 800AA830
  if (crb(c,2)) { goto L_800AA85C; } // 800AA834
  c->r[3]=c->r[30]+0x000004C0u; // 800AA838
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800AA83C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA840
  c->lr=0x800AA848u; f_800A969C(c); // 800AA844
  c->r[5]=c->r[21]|c->r[21]; // 800AA848
  c->r[3]=c->r[22]+0xFFFFAA54u; // 800AA84C
  c->r[4]=c->r[31]+0xFFFFA9D4u; // 800AA850
  c->lr=0x800AA858u; f_80004338(c); // 800AA854
  goto L_800AA8BC; // 800AA858
L_800AA85C:;
  cmpu(c,0,c->r[21],0x00000000u); // 800AA85C
  c->r[3]=c->r[21]+0x00000003u; // 800AA860
  c->r[4]=c->r[22]+0xFFFFAA54u; // 800AA864
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800AA868
  if (!crb(c,1)) { goto L_800AA8BC; } // 800AA86C
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800AA870
  c->ctr=c->r[0]; // 800AA874
  if (crb(c,2)) { goto L_800AA8AC; } // 800AA878
L_800AA87C:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 800AA87C
  W32(c->r[4]+0x00000004u,c->r[23]); // 800AA880
  W32(c->r[4]+0x00000008u,c->r[23]); // 800AA884
  W32(c->r[4]+0x0000000Cu,c->r[23]); // 800AA888
  W32(c->r[4]+0x00000010u,c->r[23]); // 800AA88C
  W32(c->r[4]+0x00000014u,c->r[23]); // 800AA890
  W32(c->r[4]+0x00000018u,c->r[23]); // 800AA894
  W32(c->r[4]+0x0000001Cu,c->r[23]); // 800AA898
  c->r[4]=c->r[4]+0x00000020u; // 800AA89C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AA87C; } // 800AA8A0
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 800AA8A4
  if (crb(c,2)) { goto L_800AA8BC; } // 800AA8A8
L_800AA8AC:;
  c->ctr=c->r[3]; // 800AA8AC
L_800AA8B0:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 800AA8B0
  c->r[4]=c->r[4]+0x00000004u; // 800AA8B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AA8B0; } // 800AA8B8
L_800AA8BC:;
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 800AA8BC
  c->r[4]=c->r[26]|c->r[26]; // 800AA8C0
  c->r[3]=R32(c->r[24]+c->r[0]); // 800AA8C4
  c->r[5]=c->r[25]|c->r[25]; // 800AA8C8
  c->r[20]=c->r[3]+0x80000000u; // 800AA8CC
  c->r[3]=c->r[20]|c->r[20]; // 800AA8D0
  c->lr=0x800AA8D8u; f_80004338(c); // 800AA8D4
  c->r[3]=c->r[20]|c->r[20]; // 800AA8D8
  c->r[4]=c->r[25]|c->r[25]; // 800AA8DC
  c->lr=0x800AA8E4u; f_800ABD8C(c); // 800AA8E0
  /* sync */ // 800AA8E4
  c->r[3]=c->r[20]|c->r[20]; // 800AA8E8
  c->r[4]=c->r[25]|c->r[25]; // 800AA8EC
  c->lr=0x800AA8F4u; f_800ABE10(c); // 800AA8F0
L_800AA8F4:;
  c->r[29]=c->r[29]+0x00000001u; // 800AA8F4
  cmpu(c,0,c->r[29],0x0000000Fu); // 800AA8F8
  if (crb(c,0)) { IRQCHK(c); goto L_800AA7E4; } // 800AA8FC
  c->r[3]=0u+0x80000000u; // 800AA900
  c->r[5]=0u+0x800B0000u; // 800AA904
  c->r[4]=c->r[3]+0x00003000u; // 800AA908
  W32(c->r[13]+0xFFFF8C50u,c->r[4]); // 800AA90C
  c->r[5]=c->r[5]+0xFFFFAA98u; // 800AA910
  c->r[3]=c->r[30]+0x000004F0u; // 800AA914
  W32(c->r[4]+0x00000000u,c->r[5]); // 800AA918
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA91C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800AA920
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA924
  W32(c->r[4]+0x00000008u,c->r[5]); // 800AA928
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA92C
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 800AA930
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA934
  W32(c->r[4]+0x00000010u,c->r[5]); // 800AA938
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA93C
  W32(c->r[4]+0x00000014u,c->r[5]); // 800AA940
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA944
  W32(c->r[4]+0x00000018u,c->r[5]); // 800AA948
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA94C
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 800AA950
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA954
  W32(c->r[4]+0x00000020u,c->r[5]); // 800AA958
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA95C
  W32(c->r[4]+0x00000024u,c->r[5]); // 800AA960
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA964
  W32(c->r[4]+0x00000028u,c->r[5]); // 800AA968
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA96C
  W32(c->r[4]+0x0000002Cu,c->r[5]); // 800AA970
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA974
  W32(c->r[4]+0x00000030u,c->r[5]); // 800AA978
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA97C
  W32(c->r[4]+0x00000034u,c->r[5]); // 800AA980
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA984
  W32(c->r[4]+0x00000038u,c->r[5]); // 800AA988
  W32(c->r[28]+0x00000000u,c->r[27]); // 800AA98C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AA990
  c->lr=0x800AA998u; f_800A969C(c); // 800AA994
  c->r[11]=c->r[1]+0x00000040u; // 800AA998
  c->lr=0x800AA9A0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AA99C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AA9A0
  c->lr=c->r[0]; // 800AA9A4
  c->r[1]=c->r[1]+0x00000040u; // 800AA9A8
  return; // 800AA9AC
}

// __OSDBIntegrator
void f_800AA9B0(Ctx* __restrict c) {
  trace_call(0x800AA9B0u);
  c->r[5]=0u+0x00000040u; // 800AA9B0
  c->r[3]=c->lr; // 800AA9B4
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800AA9B8
  c->r[3]=R32(c->r[5]+0x00000008u); // 800AA9BC
  c->r[3]=c->r[3]|0x80000000u; // 800AA9C0
  c->lr=c->r[3]; // 800AA9C4
  c->r[3]=0u+0x00000030u; // 800AA9C8
  c->msr=c->r[3]; // 800AA9CC
  return; // 800AA9D0
}

// __OSDBJump
void f_800AA9D4(Ctx* __restrict c) {
  trace_call(0x800AA9D4u);
  c->lr=0x800AA9D8u; dispatch(c,0x800AAA34u); // 800AA9D4
}

// __OSSetExceptionHandler
void f_800AA9D8(Ctx* __restrict c) {
  trace_call(0x800AA9D8u);
  c->r[5]=R32(c->r[13]+0xFFFF8C50u); // 800AA9D8
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800AA9DC
  c->r[3]=R32(c->r[5]+c->r[0]); // 800AA9E0
  W32(c->r[5]+c->r[0],c->r[4]); // 800AA9E4
  return; // 800AA9E8
}

// __OSGetExceptionHandler
void f_800AA9EC(Ctx* __restrict c) {
  trace_call(0x800AA9ECu);
  c->r[4]=R32(c->r[13]+0xFFFF8C50u); // 800AA9EC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800AA9F0
  c->r[3]=R32(c->r[4]+c->r[0]); // 800AA9F4
  return; // 800AA9F8
}

// OSExceptionVector
void f_800AA9FC(Ctx* __restrict c) {
  trace_call(0x800AA9FCu);
  mtspr(c,272,c->r[4]); // 800AA9FC
  c->r[4]=R32(0u+0x000000C0u); // 800AAA00
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800AAA04
  c->r[3]=mfspr(c,272); // 800AAA08
  W32(c->r[4]+0x00000010u,c->r[3]); // 800AAA0C
  W32(c->r[4]+0x00000014u,c->r[5]); // 800AAA10
  c->r[3]=R16(c->r[4]+0x000001A2u); // 800AAA14
  c->r[3]=c->r[3]|0x00000002u; // 800AAA18
  W16(c->r[4]+0x000001A2u,c->r[3]); // 800AAA1C
  c->r[3]=c->cr; // 800AAA20
  W32(c->r[4]+0x00000080u,c->r[3]); // 800AAA24
  c->r[3]=c->lr; // 800AAA28
  W32(c->r[4]+0x00000084u,c->r[3]); // 800AAA2C
  c->r[3]=c->ctr; // 800AAA30
  W32(c->r[4]+0x00000088u,c->r[3]); // 800AAA34
  c->r[3]=mfspr(c,1); // 800AAA38
  W32(c->r[4]+0x0000008Cu,c->r[3]); // 800AAA3C
  c->r[3]=mfspr(c,26); // 800AAA40
  W32(c->r[4]+0x00000198u,c->r[3]); // 800AAA44
  c->r[3]=mfspr(c,27); // 800AAA48
  W32(c->r[4]+0x0000019Cu,c->r[3]); // 800AAA4C
  c->r[5]=c->r[3]|c->r[3]; // 800AAA50
  c->r[0]=c->r[0]|0x00000000u; // 800AAA54
  c->r[3]=c->msr; // 800AAA58
  c->r[3]=c->r[3]|0x00000030u; // 800AAA5C
  mtspr(c,27,c->r[3]); // 800AAA60
  c->r[3]=0u+0x00000000u; // 800AAA64
  c->r[4]=R32(0u+0x000000D4u); // 800AAA68
  c->r[5]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[5]); // 800AAA6C
  if (!crb(c,2)) { goto L_800AAA84; } // 800AAA70
  c->r[5]=0u+0x800B0000u; // 800AAA74
  c->r[5]=c->r[5]+0xFFFFAA98u; // 800AAA78
  mtspr(c,26,c->r[5]); // 800AAA7C
  return; /* rfi */ // 800AAA80
L_800AAA84:;
  c->r[5]=rotl(c->r[3],2)&0x000003FCu; // 800AAA84
  c->r[5]=R32(c->r[5]+0x00003000u); // 800AAA88
  mtspr(c,26,c->r[5]); // 800AAA8C
  return; /* rfi */ // 800AAA90
  c->r[0]=c->r[0]|0x00000000u; // 800AAA94
}

// OSDefaultExceptionHandler
void f_800AAA98(Ctx* __restrict c) {
  trace_call(0x800AAA98u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 800AAA98
  W32(c->r[4]+0x00000004u,c->r[1]); // 800AAA9C
  W32(c->r[4]+0x00000008u,c->r[2]); // 800AAAA0
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AAAA4
  c->r[0]=mfspr(c,913); // 800AAAA8
  W32(c->r[4]+0x000001A8u,c->r[0]); // 800AAAAC
  c->r[0]=mfspr(c,914); // 800AAAB0
  W32(c->r[4]+0x000001ACu,c->r[0]); // 800AAAB4
  c->r[0]=mfspr(c,915); // 800AAAB8
  W32(c->r[4]+0x000001B0u,c->r[0]); // 800AAABC
  c->r[0]=mfspr(c,916); // 800AAAC0
  W32(c->r[4]+0x000001B4u,c->r[0]); // 800AAAC4
  c->r[0]=mfspr(c,917); // 800AAAC8
  W32(c->r[4]+0x000001B8u,c->r[0]); // 800AAACC
  c->r[0]=mfspr(c,918); // 800AAAD0
  W32(c->r[4]+0x000001BCu,c->r[0]); // 800AAAD4
  c->r[0]=mfspr(c,919); // 800AAAD8
  W32(c->r[4]+0x000001C0u,c->r[0]); // 800AAADC
  c->r[5]=mfspr(c,18); // 800AAAE0
  c->r[6]=mfspr(c,19); // 800AAAE4
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAAE8
  f_800ACFE8(c); return; // 800AAAEC
}

// __OSPSInit
void f_800AAAF0(Ctx* __restrict c) {
  trace_call(0x800AAAF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAAF0
  c->r[0]=c->lr; // 800AAAF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AAAF8
  c->lr=0x800AAB00u; f_800A956C(c); // 800AAAFC
  c->r[3]=c->r[3]|0xA0000000u; // 800AAB00
  c->lr=0x800AAB08u; f_800A9574(c); // 800AAB04
  c->lr=0x800AAB0Cu; f_800ABE44(c); // 800AAB08
  /* sync */ // 800AAB0C
  c->r[3]=0u+0x00000000u; // 800AAB10
  mtspr(c,912,c->r[3]); // 800AAB14
  mtspr(c,913,c->r[3]); // 800AAB18
  mtspr(c,914,c->r[3]); // 800AAB1C
  mtspr(c,915,c->r[3]); // 800AAB20
  mtspr(c,916,c->r[3]); // 800AAB24
  mtspr(c,917,c->r[3]); // 800AAB28
  mtspr(c,918,c->r[3]); // 800AAB2C
  mtspr(c,919,c->r[3]); // 800AAB30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AAB34
  c->lr=c->r[0]; // 800AAB38
  c->r[1]=c->r[1]+0x00000010u; // 800AAB3C
  return; // 800AAB40
}

// __OSGetDIConfig
void f_800AAB44(Ctx* __restrict c) {
  trace_call(0x800AAB44u);
  c->r[3]=0u+0xCD000000u; // 800AAB44
  c->r[0]=R32(c->r[3]+0x00006024u); // 800AAB48
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800AAB4C
  return; // 800AAB50
}

// OSRegisterVersion
void f_800AAB54(Ctx* __restrict c) {
  trace_call(0x800AAB54u);
  c->r[4]=c->r[3]|c->r[3]; // 800AAB54
  c->r[3]=c->r[13]+0xFFFF80A4u; // 800AAB58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AAB5C
  f_800ACBA4(c); return; // 800AAB60
}

// OSGetAppGamename
void f_800AAB64(Ctx* __restrict c) {
  trace_call(0x800AAB64u);
  c->r[0]=R32(c->r[13]+0xFFFF8C40u); // 800AAB64
  c->r[3]=0u+0x80000000u; // 800AAB68
  c->r[6]=c->r[3]+0x00003194u; // 800AAB6C
  cmps(c,0,(int32_t)c->r[0],0); // 800AAB70
  if (crb(c,2)) { goto L_800AAB80; } // 800AAB74
  c->r[6]=R32(c->r[13]+0xFFFF80B8u); // 800AAB78
  goto L_800AABB4; // 800AAB7C
L_800AAB80:;
  c->r[3]=R8(c->r[3]+0x00003194u); // 800AAB80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800AAB84
  cmps(c,0,(int32_t)c->r[0],48); // 800AAB88
  if (crb(c,0)) { goto L_800AABAC; } // 800AAB8C
  cmps(c,0,(int32_t)c->r[0],57); // 800AAB90
  if (!crb(c,1)) { goto L_800AABA0; } // 800AAB94
  cmps(c,0,(int32_t)c->r[0],65); // 800AAB98
  if (crb(c,0)) { goto L_800AABAC; } // 800AAB9C
L_800AABA0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800AABA0
  cmps(c,0,(int32_t)c->r[0],90); // 800AABA4
  if (!crb(c,1)) { goto L_800AABB4; } // 800AABA8
L_800AABAC:;
  c->r[3]=0u+0x80000000u; // 800AABAC
  c->r[6]=c->r[3]+0x00003180u; // 800AABB0
L_800AABB4:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 800AABB4
  c->r[5]=c->r[13]+0xFFFF8C68u; // 800AABB8
  c->r[0]=0u+0x00000000u; // 800AABBC
  c->r[3]=c->r[13]+0xFFFF8C68u; // 800AABC0
  W8(c->r[13]+0xFFFF8C68u,c->r[4]); // 800AABC4
  c->r[4]=R8(c->r[6]+0x00000001u); // 800AABC8
  W8(c->r[5]+0x00000001u,c->r[4]); // 800AABCC
  c->r[4]=R8(c->r[6]+0x00000002u); // 800AABD0
  W8(c->r[5]+0x00000002u,c->r[4]); // 800AABD4
  c->r[4]=R8(c->r[6]+0x00000003u); // 800AABD8
  W8(c->r[5]+0x00000003u,c->r[4]); // 800AABDC
  W8(c->r[5]+0x00000004u,c->r[0]); // 800AABE0
  return; // 800AABE4
}

// OSGetAppType
void f_800AABE8(Ctx* __restrict c) {
  trace_call(0x800AABE8u);
  c->r[0]=R32(c->r[13]+0xFFFF8C40u); // 800AABE8
  cmps(c,0,(int32_t)c->r[0],0); // 800AABEC
  if (crb(c,2)) { goto L_800AABFC; } // 800AABF0
  c->r[3]=0u+0x00000040u; // 800AABF4
  return; // 800AABF8
L_800AABFC:;
  c->r[3]=0u+0x80000000u; // 800AABFC
  c->r[3]=R8(c->r[3]+0x00003184u); // 800AAC00
  return; // 800AAC04
}

// __OSInitAlarm
void f_800AAC08(Ctx* __restrict c) {
  trace_call(0x800AAC08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAC08
  c->r[0]=c->lr; // 800AAC0C
  c->r[3]=0u+0x00000008u; // 800AAC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AAC14
  c->lr=0x800AAC1Cu; f_800AA9EC(c); // 800AAC18
  c->r[4]=0u+0x800B0000u; // 800AAC1C
  c->r[4]=c->r[4]+0xFFFFB2F8u; // 800AAC20
  cmpu(c,0,c->r[3],c->r[4]); // 800AAC24
  if (crb(c,2)) { goto L_800AAC50; } // 800AAC28
  c->r[0]=0u+0x00000000u; // 800AAC2C
  c->r[3]=c->r[13]+0xFFFF8C88u; // 800AAC30
  W32(c->r[3]+0x00000004u,c->r[0]); // 800AAC34
  c->r[3]=0u+0x00000008u; // 800AAC38
  W32(c->r[13]+0xFFFF8C88u,c->r[0]); // 800AAC3C
  c->lr=0x800AAC44u; f_800AA9D8(c); // 800AAC40
  c->r[3]=0u+0x80260000u; // 800AAC44
  c->r[3]=c->r[3]+0x000061E0u; // 800AAC48
  c->lr=0x800AAC50u; f_800B1DA8(c); // 800AAC4C
L_800AAC50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AAC50
  c->lr=c->r[0]; // 800AAC54
  c->r[1]=c->r[1]+0x00000010u; // 800AAC58
  return; // 800AAC5C
}

// OSCreateAlarm
void f_800AAC60(Ctx* __restrict c) {
  trace_call(0x800AAC60u);
  c->r[0]=0u+0x00000000u; // 800AAC60
  W32(c->r[3]+0x00000000u,c->r[0]); // 800AAC64
  W32(c->r[3]+0x00000004u,c->r[0]); // 800AAC68
  return; // 800AAC6C
}

// InsertAlarm
void f_800AAC70(Ctx* __restrict c) {
  trace_call(0x800AAC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAC70
  c->r[0]=c->lr; // 800AAC74
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AAC78
  c->r[11]=c->r[1]+0x00000030u; // 800AAC7C
  c->lr=0x800AAC84u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AAC80
  c->r[4]=R32(c->r[3]+0x00000018u); // 800AAC84
  c->r[29]=0u+0x00000000u; // 800AAC88
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 800AAC8C
  c->r[30]=c->r[3]|c->r[3]; // 800AAC90
  c->r[0]=c->r[29]^0x80000000u; // 800AAC94
  c->r[4]=c->r[4]^0x80000000u; // 800AAC98
  c->r[3]=addc(c,~c->r[8],c->r[29],1); // 800AAC9C
  c->r[31]=c->r[7]|c->r[7]; // 800AACA0
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800AACA4
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800AACA8
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800AACAC
  if (crb(c,2)) { goto L_800AAD2C; } // 800AACB0
  c->lr=0x800AACB8u; f_800B4914(c); // 800AACB4
  c->r[28]=R32(c->r[30]+0x00000020u); // 800AACB8
  c->r[7]=c->r[3]^0x80000000u; // 800AACBC
  c->r[27]=R32(c->r[30]+0x00000024u); // 800AACC0
  c->r[0]=c->r[28]^0x80000000u; // 800AACC4
  c->r[5]=c->r[28]|c->r[28]; // 800AACC8
  c->r[6]=addc(c,~c->r[4],c->r[27],1); // 800AACCC
  c->r[7]=addc(c,~c->r[7],c->r[0],c->xer_ca); // 800AACD0
  c->r[7]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800AACD4
  c->r[6]=c->r[27]|c->r[27]; // 800AACD8
  c->r[7]=0u-c->r[7]; cr0(c,c->r[7]); // 800AACDC
  if (crb(c,2)) { goto L_800AAD2C; } // 800AACE0
  c->r[26]=R32(c->r[30]+0x00000018u); // 800AACE4
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 800AACE8
  c->r[25]=R32(c->r[30]+0x0000001Cu); // 800AACEC
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 800AACF0
  c->r[5]=c->r[26]|c->r[26]; // 800AACF4
  c->r[6]=c->r[25]|c->r[25]; // 800AACF8
  c->lr=0x800AAD00u; f_800D4B64(c); // 800AACFC
  c->r[0]=0u+0x00000001u; // 800AAD00
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 800AAD04
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[4])>>32); // 800AAD08
  c->r[5]=addc(c,c->r[3],c->r[29],c->xer_ca); // 800AAD0C
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[4]); // 800AAD10
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[4]); // 800AAD14
  c->r[3]=c->r[0]+c->r[3]; // 800AAD18
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[5]); // 800AAD1C
  c->r[6]=addc(c,c->r[27],c->r[4],0); // 800AAD20
  c->r[0]=c->r[3]+c->r[0]; // 800AAD24
  c->r[5]=addc(c,c->r[28],c->r[0],c->xer_ca); // 800AAD28
L_800AAD2C:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 800AAD2C
  c->r[0]=c->r[5]^0x80000000u; // 800AAD30
  W32(c->r[30]+0x0000000Cu,c->r[6]); // 800AAD34
  W32(c->r[30]+0x00000008u,c->r[5]); // 800AAD38
  c->r[7]=R32(c->r[13]+0xFFFF8C88u); // 800AAD3C
  goto L_800AAE04; // 800AAD40
L_800AAD44:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 800AAD44
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 800AAD48
  c->r[4]=c->r[3]^0x80000000u; // 800AAD4C
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 800AAD50
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800AAD54
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800AAD58
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800AAD5C
  if (crb(c,2)) { goto L_800AAE00; } // 800AAD60
  c->r[0]=R32(c->r[7]+0x00000010u); // 800AAD64
  W32(c->r[30]+0x00000010u,c->r[0]); // 800AAD68
  W32(c->r[7]+0x00000010u,c->r[30]); // 800AAD6C
  c->r[3]=R32(c->r[30]+0x00000010u); // 800AAD70
  W32(c->r[30]+0x00000014u,c->r[7]); // 800AAD74
  cmps(c,0,(int32_t)c->r[3],0); // 800AAD78
  if (crb(c,2)) { goto L_800AAD88; } // 800AAD7C
  W32(c->r[3]+0x00000014u,c->r[30]); // 800AAD80
  goto L_800AAEA8; // 800AAD84
L_800AAD88:;
  W32(c->r[13]+0xFFFF8C88u,c->r[30]); // 800AAD88
  c->lr=0x800AAD90u; f_800B4914(c); // 800AAD8C
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 800AAD90
  c->r[7]=0u+0x00000000u; // 800AAD94
  c->r[0]=R32(c->r[30]+0x00000008u); // 800AAD98
  c->r[6]=c->r[7]^0x80000000u; // 800AAD9C
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 800AADA0
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800AADA4
  c->r[5]=c->r[0]^0x80000000u; // 800AADA8
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 800AADAC
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800AADB0
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AADB4
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800AADB8
  if (crb(c,2)) { goto L_800AADCC; } // 800AADBC
  c->r[3]=0u+0x00000000u; // 800AADC0
  c->lr=0x800AADC8u; f_800A94D0(c); // 800AADC4
  goto L_800AAEA8; // 800AADC8
L_800AADCC:;
  c->r[4]=0u+0x80000000u; // 800AADCC
  c->r[3]=c->r[7]^0x80000000u; // 800AADD0
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 800AADD4
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800AADD8
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AADDC
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800AADE0
  if (crb(c,2)) { goto L_800AADF4; } // 800AADE4
  c->r[3]=c->r[8]|c->r[8]; // 800AADE8
  c->lr=0x800AADF0u; f_800A94D0(c); // 800AADEC
  goto L_800AAEA8; // 800AADF0
L_800AADF4:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800AADF4
  c->lr=0x800AADFCu; f_800A94D0(c); // 800AADF8
  goto L_800AAEA8; // 800AADFC
L_800AAE00:;
  c->r[7]=R32(c->r[7]+0x00000014u); // 800AAE00
L_800AAE04:;
  cmps(c,0,(int32_t)c->r[7],0); // 800AAE04
  if (!crb(c,2)) { IRQCHK(c); goto L_800AAD44; } // 800AAE08
  c->r[31]=0u+0x00000000u; // 800AAE0C
  c->r[3]=c->r[13]+0xFFFF8C88u; // 800AAE10
  W32(c->r[30]+0x00000014u,c->r[31]); // 800AAE14
  c->r[4]=R32(c->r[3]+0x00000004u); // 800AAE18
  W32(c->r[3]+0x00000004u,c->r[30]); // 800AAE1C
  cmps(c,0,(int32_t)c->r[4],0); // 800AAE20
  W32(c->r[30]+0x00000010u,c->r[4]); // 800AAE24
  if (crb(c,2)) { goto L_800AAE34; } // 800AAE28
  W32(c->r[4]+0x00000014u,c->r[30]); // 800AAE2C
  goto L_800AAEA8; // 800AAE30
L_800AAE34:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 800AAE34
  W32(c->r[13]+0xFFFF8C88u,c->r[30]); // 800AAE38
  c->lr=0x800AAE40u; f_800B4914(c); // 800AAE3C
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 800AAE40
  c->r[6]=c->r[31]^0x80000000u; // 800AAE44
  c->r[0]=R32(c->r[30]+0x00000008u); // 800AAE48
  c->r[7]=addc(c,~c->r[4],c->r[5],1); // 800AAE4C
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800AAE50
  c->r[5]=c->r[0]^0x80000000u; // 800AAE54
  c->r[0]=addc(c,~c->r[31],c->r[7],1); // 800AAE58
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800AAE5C
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AAE60
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800AAE64
  if (crb(c,2)) { goto L_800AAE78; } // 800AAE68
  c->r[3]=0u+0x00000000u; // 800AAE6C
  c->lr=0x800AAE74u; f_800A94D0(c); // 800AAE70
  goto L_800AAEA8; // 800AAE74
L_800AAE78:;
  c->r[4]=0u+0x80000000u; // 800AAE78
  c->r[3]=c->r[31]^0x80000000u; // 800AAE7C
  c->r[0]=addc(c,~c->r[4],c->r[7],1); // 800AAE80
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800AAE84
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AAE88
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800AAE8C
  if (crb(c,2)) { goto L_800AAEA0; } // 800AAE90
  c->r[3]=c->r[7]|c->r[7]; // 800AAE94
  c->lr=0x800AAE9Cu; f_800A94D0(c); // 800AAE98
  goto L_800AAEA8; // 800AAE9C
L_800AAEA0:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800AAEA0
  c->lr=0x800AAEA8u; f_800A94D0(c); // 800AAEA4
L_800AAEA8:;
  c->r[11]=c->r[1]+0x00000030u; // 800AAEA8
  c->lr=0x800AAEB0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AAEAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AAEB0
  c->lr=c->r[0]; // 800AAEB4
  c->r[1]=c->r[1]+0x00000030u; // 800AAEB8
  return; // 800AAEBC
}

// OSSetAlarm
void f_800AAEC0(Ctx* __restrict c) {
  trace_call(0x800AAEC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAEC0
  c->r[0]=c->lr; // 800AAEC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AAEC8
  c->r[11]=c->r[1]+0x00000020u; // 800AAECC
  c->lr=0x800AAED4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AAED0
  c->r[27]=c->r[3]|c->r[3]; // 800AAED4
  c->r[29]=c->r[5]|c->r[5]; // 800AAED8
  c->r[28]=c->r[6]|c->r[6]; // 800AAEDC
  c->r[30]=c->r[7]|c->r[7]; // 800AAEE0
  c->lr=0x800AAEE8u; f_800B087C(c); // 800AAEE4
  c->r[0]=0u+0x00000000u; // 800AAEE8
  c->r[31]=c->r[3]|c->r[3]; // 800AAEEC
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 800AAEF0
  W32(c->r[27]+0x00000018u,c->r[0]); // 800AAEF4
  c->lr=0x800AAEFCu; f_800B4914(c); // 800AAEF8
  c->r[6]=addc(c,c->r[28],c->r[4],0); // 800AAEFC
  c->r[7]=c->r[30]|c->r[30]; // 800AAF00
  c->r[5]=addc(c,c->r[29],c->r[3],c->xer_ca); // 800AAF04
  c->r[3]=c->r[27]|c->r[27]; // 800AAF08
  c->lr=0x800AAF10u; f_800AAC70(c); // 800AAF0C
  c->r[3]=c->r[31]|c->r[31]; // 800AAF10
  c->lr=0x800AAF18u; f_800B08A4(c); // 800AAF14
  c->r[11]=c->r[1]+0x00000020u; // 800AAF18
  c->lr=0x800AAF20u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AAF1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AAF20
  c->lr=c->r[0]; // 800AAF24
  c->r[1]=c->r[1]+0x00000020u; // 800AAF28
  return; // 800AAF2C
}

// OSSetPeriodicAlarm
void f_800AAF30(Ctx* __restrict c) {
  trace_call(0x800AAF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAF30
  c->r[0]=c->lr; // 800AAF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AAF38
  c->r[11]=c->r[1]+0x00000020u; // 800AAF3C
  c->lr=0x800AAF44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AAF40
  c->r[26]=c->r[3]|c->r[3]; // 800AAF44
  c->r[28]=c->r[5]|c->r[5]; // 800AAF48
  c->r[27]=c->r[6]|c->r[6]; // 800AAF4C
  c->r[29]=c->r[7]|c->r[7]; // 800AAF50
  c->r[31]=c->r[8]|c->r[8]; // 800AAF54
  c->r[30]=c->r[9]|c->r[9]; // 800AAF58
  c->lr=0x800AAF60u; f_800B087C(c); // 800AAF5C
  W32(c->r[26]+0x0000001Cu,c->r[31]); // 800AAF60
  c->r[31]=c->r[3]|c->r[3]; // 800AAF64
  c->r[4]=c->r[27]|c->r[27]; // 800AAF68
  c->r[3]=c->r[28]|c->r[28]; // 800AAF6C
  W32(c->r[26]+0x00000018u,c->r[29]); // 800AAF70
  c->lr=0x800AAF78u; f_800B4978(c); // 800AAF74
  W32(c->r[26]+0x00000020u,c->r[3]); // 800AAF78
  c->r[3]=c->r[26]|c->r[26]; // 800AAF7C
  c->r[7]=c->r[30]|c->r[30]; // 800AAF80
  c->r[6]=0u+0x00000000u; // 800AAF84
  W32(c->r[26]+0x00000024u,c->r[4]); // 800AAF88
  c->r[5]=0u+0x00000000u; // 800AAF8C
  c->lr=0x800AAF94u; f_800AAC70(c); // 800AAF90
  c->r[3]=c->r[31]|c->r[31]; // 800AAF94
  c->lr=0x800AAF9Cu; f_800B08A4(c); // 800AAF98
  c->r[11]=c->r[1]+0x00000020u; // 800AAF9C
  c->lr=0x800AAFA4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AAFA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AAFA4
  c->lr=c->r[0]; // 800AAFA8
  c->r[1]=c->r[1]+0x00000020u; // 800AAFAC
  return; // 800AAFB0
}

// OSCancelAlarm
void f_800AAFB4(Ctx* __restrict c) {
  trace_call(0x800AAFB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAFB4
  c->r[0]=c->lr; // 800AAFB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AAFBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AAFC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AAFC4
  c->r[30]=c->r[3]|c->r[3]; // 800AAFC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AAFCC
  c->lr=0x800AAFD4u; f_800B087C(c); // 800AAFD0
  c->r[0]=R32(c->r[30]+0x00000000u); // 800AAFD4
  c->r[31]=c->r[3]|c->r[3]; // 800AAFD8
  cmps(c,0,(int32_t)c->r[0],0); // 800AAFDC
  if (!crb(c,2)) { goto L_800AAFEC; } // 800AAFE0
  c->lr=0x800AAFE8u; f_800B08A4(c); // 800AAFE4
  goto L_800AB0B0; // 800AAFE8
L_800AAFEC:;
  c->r[29]=R32(c->r[30]+0x00000014u); // 800AAFEC
  cmps(c,0,(int32_t)c->r[29],0); // 800AAFF0
  if (!crb(c,2)) { goto L_800AB008; } // 800AAFF4
  c->r[0]=R32(c->r[30]+0x00000010u); // 800AAFF8
  c->r[3]=c->r[13]+0xFFFF8C88u; // 800AAFFC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800AB000
  goto L_800AB010; // 800AB004
L_800AB008:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 800AB008
  W32(c->r[29]+0x00000010u,c->r[0]); // 800AB00C
L_800AB010:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 800AB010
  cmps(c,0,(int32_t)c->r[3],0); // 800AB014
  if (crb(c,2)) { goto L_800AB024; } // 800AB018
  W32(c->r[3]+0x00000014u,c->r[29]); // 800AB01C
  goto L_800AB0A0; // 800AB020
L_800AB024:;
  cmps(c,0,(int32_t)c->r[29],0); // 800AB024
  W32(c->r[13]+0xFFFF8C88u,c->r[29]); // 800AB028
  if (crb(c,2)) { goto L_800AB0A0; } // 800AB02C
  c->lr=0x800AB034u; f_800B4914(c); // 800AB030
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 800AB034
  c->r[7]=0u+0x00000000u; // 800AB038
  c->r[0]=R32(c->r[29]+0x00000008u); // 800AB03C
  c->r[6]=c->r[7]^0x80000000u; // 800AB040
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 800AB044
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800AB048
  c->r[5]=c->r[0]^0x80000000u; // 800AB04C
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 800AB050
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800AB054
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AB058
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800AB05C
  if (crb(c,2)) { goto L_800AB070; } // 800AB060
  c->r[3]=0u+0x00000000u; // 800AB064
  c->lr=0x800AB06Cu; f_800A94D0(c); // 800AB068
  goto L_800AB0A0; // 800AB06C
L_800AB070:;
  c->r[4]=0u+0x80000000u; // 800AB070
  c->r[3]=c->r[7]^0x80000000u; // 800AB074
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 800AB078
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800AB07C
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AB080
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800AB084
  if (crb(c,2)) { goto L_800AB098; } // 800AB088
  c->r[3]=c->r[8]|c->r[8]; // 800AB08C
  c->lr=0x800AB094u; f_800A94D0(c); // 800AB090
  goto L_800AB0A0; // 800AB094
L_800AB098:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800AB098
  c->lr=0x800AB0A0u; f_800A94D0(c); // 800AB09C
L_800AB0A0:;
  c->r[0]=0u+0x00000000u; // 800AB0A0
  c->r[3]=c->r[31]|c->r[31]; // 800AB0A4
  W32(c->r[30]+0x00000000u,c->r[0]); // 800AB0A8
  c->lr=0x800AB0B0u; f_800B08A4(c); // 800AB0AC
L_800AB0B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AB0B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AB0B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AB0B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AB0BC
  c->lr=c->r[0]; // 800AB0C0
  c->r[1]=c->r[1]+0x00000020u; // 800AB0C4
  return; // 800AB0C8
}

// DecrementerExceptionCallback
void f_800AB0CC(Ctx* __restrict c) {
  trace_call(0x800AB0CCu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB0CC
  c->r[0]=c->lr; // 800AB0D0
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800AB0D4
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800AB0D8
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800AB0DC
  W32(c->r[1]+0x000002D4u,c->r[29]); // 800AB0E0
  c->r[29]=c->r[4]|c->r[4]; // 800AB0E4
  W32(c->r[1]+0x000002D0u,c->r[28]); // 800AB0E8
  c->lr=0x800AB0F0u; f_800B4914(c); // 800AB0EC
  c->r[31]=R32(c->r[13]+0xFFFF8C88u); // 800AB0F0
  c->r[28]=c->r[4]|c->r[4]; // 800AB0F4
  c->r[30]=c->r[3]|c->r[3]; // 800AB0F8
  cmps(c,0,(int32_t)c->r[31],0); // 800AB0FC
  if (!crb(c,2)) { goto L_800AB10C; } // 800AB100
  c->r[3]=c->r[29]|c->r[29]; // 800AB104
  c->lr=0x800AB10Cu; f_800AC658(c); // 800AB108
L_800AB10C:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800AB10C
  c->r[0]=c->r[30]^0x80000000u; // 800AB110
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 800AB114
  c->r[4]=c->r[3]^0x80000000u; // 800AB118
  c->r[3]=addc(c,~c->r[5],c->r[28],1); // 800AB11C
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800AB120
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800AB124
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800AB128
  if (crb(c,2)) { goto L_800AB1A8; } // 800AB12C
  c->lr=0x800AB134u; f_800B4914(c); // 800AB130
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 800AB134
  c->r[7]=0u+0x00000000u; // 800AB138
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AB13C
  c->r[6]=c->r[7]^0x80000000u; // 800AB140
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 800AB144
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800AB148
  c->r[5]=c->r[0]^0x80000000u; // 800AB14C
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 800AB150
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800AB154
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AB158
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800AB15C
  if (crb(c,2)) { goto L_800AB170; } // 800AB160
  c->r[3]=0u+0x00000000u; // 800AB164
  c->lr=0x800AB16Cu; f_800A94D0(c); // 800AB168
  goto L_800AB1A0; // 800AB16C
L_800AB170:;
  c->r[4]=0u+0x80000000u; // 800AB170
  c->r[3]=c->r[7]^0x80000000u; // 800AB174
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 800AB178
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800AB17C
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AB180
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800AB184
  if (crb(c,2)) { goto L_800AB198; } // 800AB188
  c->r[3]=c->r[8]|c->r[8]; // 800AB18C
  c->lr=0x800AB194u; f_800A94D0(c); // 800AB190
  goto L_800AB1A0; // 800AB194
L_800AB198:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800AB198
  c->lr=0x800AB1A0u; f_800A94D0(c); // 800AB19C
L_800AB1A0:;
  c->r[3]=c->r[29]|c->r[29]; // 800AB1A0
  c->lr=0x800AB1A8u; f_800AC658(c); // 800AB1A4
L_800AB1A8:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800AB1A8
  cmps(c,0,(int32_t)c->r[3],0); // 800AB1AC
  W32(c->r[13]+0xFFFF8C88u,c->r[3]); // 800AB1B0
  if (!crb(c,2)) { goto L_800AB1C8; } // 800AB1B4
  c->r[0]=0u+0x00000000u; // 800AB1B8
  c->r[3]=c->r[13]+0xFFFF8C88u; // 800AB1BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800AB1C0
  goto L_800AB1D0; // 800AB1C4
L_800AB1C8:;
  c->r[0]=0u+0x00000000u; // 800AB1C8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800AB1CC
L_800AB1D0:;
  c->r[30]=R32(c->r[31]+0x00000000u); // 800AB1D0
  c->r[6]=0u+0x00000000u; // 800AB1D4
  c->r[0]=c->r[6]^0x80000000u; // 800AB1D8
  W32(c->r[31]+0x00000000u,c->r[6]); // 800AB1DC
  c->r[3]=R32(c->r[31]+0x00000018u); // 800AB1E0
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 800AB1E4
  c->r[4]=c->r[3]^0x80000000u; // 800AB1E8
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 800AB1EC
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800AB1F0
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800AB1F4
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800AB1F8
  if (crb(c,2)) { goto L_800AB214; } // 800AB1FC
  c->r[3]=c->r[31]|c->r[31]; // 800AB200
  c->r[7]=c->r[30]|c->r[30]; // 800AB204
  c->r[6]=0u+0x00000000u; // 800AB208
  c->r[5]=0u+0x00000000u; // 800AB20C
  c->lr=0x800AB214u; f_800AAC70(c); // 800AB210
L_800AB214:;
  c->r[28]=R32(c->r[13]+0xFFFF8C88u); // 800AB214
  cmps(c,0,(int32_t)c->r[28],0); // 800AB218
  if (crb(c,2)) { goto L_800AB290; } // 800AB21C
  c->lr=0x800AB224u; f_800B4914(c); // 800AB220
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 800AB224
  c->r[7]=0u+0x00000000u; // 800AB228
  c->r[0]=R32(c->r[28]+0x00000008u); // 800AB22C
  c->r[6]=c->r[7]^0x80000000u; // 800AB230
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 800AB234
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 800AB238
  c->r[5]=c->r[0]^0x80000000u; // 800AB23C
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 800AB240
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 800AB244
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AB248
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800AB24C
  if (crb(c,2)) { goto L_800AB260; } // 800AB250
  c->r[3]=0u+0x00000000u; // 800AB254
  c->lr=0x800AB25Cu; f_800A94D0(c); // 800AB258
  goto L_800AB290; // 800AB25C
L_800AB260:;
  c->r[4]=0u+0x80000000u; // 800AB260
  c->r[3]=c->r[7]^0x80000000u; // 800AB264
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 800AB268
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 800AB26C
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800AB270
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800AB274
  if (crb(c,2)) { goto L_800AB288; } // 800AB278
  c->r[3]=c->r[8]|c->r[8]; // 800AB27C
  c->lr=0x800AB284u; f_800A94D0(c); // 800AB280
  goto L_800AB290; // 800AB284
L_800AB288:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800AB288
  c->lr=0x800AB290u; f_800A94D0(c); // 800AB28C
L_800AB290:;
  c->lr=0x800AB294u; f_800B35B4(c); // 800AB290
  c->r[3]=c->r[1]+0x00000008u; // 800AB294
  c->lr=0x800AB29Cu; f_800AC798(c); // 800AB298
  c->r[3]=c->r[1]+0x00000008u; // 800AB29C
  c->lr=0x800AB2A4u; f_800AC570(c); // 800AB2A0
  c->r[12]=c->r[30]|c->r[30]; // 800AB2A4
  c->r[3]=c->r[31]|c->r[31]; // 800AB2A8
  c->r[4]=c->r[29]|c->r[29]; // 800AB2AC
  c->ctr=c->r[12]; // 800AB2B0
  if (true) { c->lr=0x800AB2B8u; dispatch(c,c->ctr); } // 800AB2B4
  c->r[3]=c->r[1]+0x00000008u; // 800AB2B8
  c->lr=0x800AB2C0u; f_800AC798(c); // 800AB2BC
  c->r[3]=c->r[29]|c->r[29]; // 800AB2C0
  c->lr=0x800AB2C8u; f_800AC570(c); // 800AB2C4
  c->lr=0x800AB2CCu; f_800B35F0(c); // 800AB2C8
  c->lr=0x800AB2D0u; f_800B3AFC(c); // 800AB2CC
  c->r[3]=c->r[29]|c->r[29]; // 800AB2D0
  c->lr=0x800AB2D8u; f_800AC658(c); // 800AB2D4
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800AB2D8
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800AB2DC
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800AB2E0
  c->r[29]=R32(c->r[1]+0x000002D4u); // 800AB2E4
  c->r[28]=R32(c->r[1]+0x000002D0u); // 800AB2E8
  c->lr=c->r[0]; // 800AB2EC
  c->r[1]=c->r[1]+0x000002E0u; // 800AB2F0
  return; // 800AB2F4
}

// DecrementerExceptionHandler
void f_800AB2F8(Ctx* __restrict c) {
  trace_call(0x800AB2F8u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 800AB2F8
  W32(c->r[4]+0x00000004u,c->r[1]); // 800AB2FC
  W32(c->r[4]+0x00000008u,c->r[2]); // 800AB300
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AB304
  c->r[0]=mfspr(c,913); // 800AB308
  W32(c->r[4]+0x000001A8u,c->r[0]); // 800AB30C
  c->r[0]=mfspr(c,914); // 800AB310
  W32(c->r[4]+0x000001ACu,c->r[0]); // 800AB314
  c->r[0]=mfspr(c,915); // 800AB318
  W32(c->r[4]+0x000001B0u,c->r[0]); // 800AB31C
  c->r[0]=mfspr(c,916); // 800AB320
  W32(c->r[4]+0x000001B4u,c->r[0]); // 800AB324
  c->r[0]=mfspr(c,917); // 800AB328
  W32(c->r[4]+0x000001B8u,c->r[0]); // 800AB32C
  c->r[0]=mfspr(c,918); // 800AB330
  W32(c->r[4]+0x000001BCu,c->r[0]); // 800AB334
  c->r[0]=mfspr(c,919); // 800AB338
  W32(c->r[4]+0x000001C0u,c->r[0]); // 800AB33C
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB340
  f_800AB0CC(c); return; // 800AB344
}

// OnReset
void f_800AB348(Ctx* __restrict c) {
  trace_call(0x800AB348u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB348
  c->r[0]=c->lr; // 800AB34C
  cmps(c,0,(int32_t)c->r[3],0); // 800AB350
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AB354
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AB358
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AB35C
  if (crb(c,2)) { goto L_800AB3B8; } // 800AB360
  c->r[31]=R32(c->r[13]+0xFFFF8C88u); // 800AB364
  cmps(c,0,(int32_t)c->r[31],0); // 800AB368
  if (crb(c,2)) { goto L_800AB378; } // 800AB36C
  c->r[30]=R32(c->r[31]+0x00000014u); // 800AB370
  goto L_800AB3B0; // 800AB374
L_800AB378:;
  c->r[30]=0u+0x00000000u; // 800AB378
  goto L_800AB3B0; // 800AB37C
L_800AB380:;
  c->r[3]=c->r[31]|c->r[31]; // 800AB380
  c->lr=0x800AB388u; f_800BE6A8(c); // 800AB384
  cmps(c,0,(int32_t)c->r[3],0); // 800AB388
  if (!crb(c,2)) { goto L_800AB398; } // 800AB38C
  c->r[3]=c->r[31]|c->r[31]; // 800AB390
  c->lr=0x800AB398u; f_800AAFB4(c); // 800AB394
L_800AB398:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AB398
  c->r[31]=c->r[30]|c->r[30]; // 800AB39C
  if (crb(c,2)) { goto L_800AB3AC; } // 800AB3A0
  c->r[30]=R32(c->r[30]+0x00000014u); // 800AB3A4
  goto L_800AB3B0; // 800AB3A8
L_800AB3AC:;
  c->r[30]=0u+0x00000000u; // 800AB3AC
L_800AB3B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AB3B0
  if (!crb(c,2)) { IRQCHK(c); goto L_800AB380; } // 800AB3B4
L_800AB3B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AB3B8
  c->r[3]=0u+0x00000001u; // 800AB3BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AB3C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AB3C4
  c->lr=c->r[0]; // 800AB3C8
  c->r[1]=c->r[1]+0x00000010u; // 800AB3CC
  return; // 800AB3D0
}

// OSSetAlarmUserData
void f_800AB3D4(Ctx* __restrict c) {
  trace_call(0x800AB3D4u);
  W32(c->r[3]+0x00000028u,c->r[4]); // 800AB3D4
  return; // 800AB3D8
}

// OSGetAlarmUserData
void f_800AB3DC(Ctx* __restrict c) {
  trace_call(0x800AB3DCu);
  c->r[3]=R32(c->r[3]+0x00000028u); // 800AB3DC
  return; // 800AB3E0
}

// __OSSetInternalAlarmUserData
void f_800AB3E4(Ctx* __restrict c) {
  trace_call(0x800AB3E4u);
  c->r[0]=0u+0xFFFFFFFFu; // 800AB3E4
  W32(c->r[3]+0x00000028u,c->r[4]); // 800AB3E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800AB3EC
  return; // 800AB3F0
}

// __OSCancelInternalAlarms
void f_800AB3F4(Ctx* __restrict c) {
  trace_call(0x800AB3F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB3F4
  c->r[0]=c->lr; // 800AB3F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AB3FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AB400
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AB404
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AB408
  c->r[29]=c->r[3]|c->r[3]; // 800AB40C
  c->lr=0x800AB414u; f_800B087C(c); // 800AB410
  c->r[4]=R32(c->r[13]+0xFFFF8C88u); // 800AB414
  c->r[31]=c->r[3]|c->r[3]; // 800AB418
  cmps(c,0,(int32_t)c->r[4],0); // 800AB41C
  if (crb(c,2)) { goto L_800AB42C; } // 800AB420
  c->r[30]=R32(c->r[4]+0x00000014u); // 800AB424
  goto L_800AB470; // 800AB428
L_800AB42C:;
  c->r[30]=0u+0x00000000u; // 800AB42C
  goto L_800AB470; // 800AB430
L_800AB434:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AB434
  c->r[0]=c->r[3]+0x00010000u; // 800AB438
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800AB43C
  if (!crb(c,2)) { goto L_800AB458; } // 800AB440
  c->r[0]=R32(c->r[4]+0x00000028u); // 800AB444
  cmpu(c,0,c->r[0],c->r[29]); // 800AB448
  if (!crb(c,2)) { goto L_800AB458; } // 800AB44C
  c->r[3]=c->r[4]|c->r[4]; // 800AB450
  c->lr=0x800AB458u; f_800AAFB4(c); // 800AB454
L_800AB458:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AB458
  c->r[4]=c->r[30]|c->r[30]; // 800AB45C
  if (crb(c,2)) { goto L_800AB46C; } // 800AB460
  c->r[30]=R32(c->r[30]+0x00000014u); // 800AB464
  goto L_800AB470; // 800AB468
L_800AB46C:;
  c->r[30]=0u+0x00000000u; // 800AB46C
L_800AB470:;
  cmps(c,0,(int32_t)c->r[4],0); // 800AB470
  if (!crb(c,2)) { IRQCHK(c); goto L_800AB434; } // 800AB474
  c->r[3]=c->r[31]|c->r[31]; // 800AB478
  c->lr=0x800AB480u; f_800B08A4(c); // 800AB47C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AB480
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AB484
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AB488
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AB48C
  c->lr=c->r[0]; // 800AB490
  c->r[1]=c->r[1]+0x00000020u; // 800AB494
  return; // 800AB498
}

// DLInsert
void f_800AB49C(Ctx* __restrict c) {
  trace_call(0x800AB49Cu);
  c->r[7]=c->r[3]|c->r[3]; // 800AB49C
  c->r[6]=0u+0x00000000u; // 800AB4A0
  goto L_800AB4B8; // 800AB4A4
L_800AB4A8:;
  cmpu(c,0,c->r[4],c->r[7]); // 800AB4A8
  if (!crb(c,1)) { goto L_800AB4C0; } // 800AB4AC
  c->r[6]=c->r[7]|c->r[7]; // 800AB4B0
  c->r[7]=R32(c->r[7]+0x00000004u); // 800AB4B4
L_800AB4B8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800AB4B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800AB4A8; } // 800AB4BC
L_800AB4C0:;
  cmps(c,0,(int32_t)c->r[7],0); // 800AB4C0
  W32(c->r[4]+0x00000004u,c->r[7]); // 800AB4C4
  W32(c->r[4]+0x00000000u,c->r[6]); // 800AB4C8
  if (crb(c,2)) { goto L_800AB504; } // 800AB4CC
  W32(c->r[7]+0x00000000u,c->r[4]); // 800AB4D0
  c->r[5]=R32(c->r[4]+0x00000008u); // 800AB4D4
  c->r[0]=c->r[4]+c->r[5]; // 800AB4D8
  cmpu(c,0,c->r[0],c->r[7]); // 800AB4DC
  if (!crb(c,2)) { goto L_800AB504; } // 800AB4E0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800AB4E4
  c->r[0]=c->r[5]+c->r[0]; // 800AB4E8
  W32(c->r[4]+0x00000008u,c->r[0]); // 800AB4EC
  c->r[7]=R32(c->r[7]+0x00000004u); // 800AB4F0
  cmps(c,0,(int32_t)c->r[7],0); // 800AB4F4
  W32(c->r[4]+0x00000004u,c->r[7]); // 800AB4F8
  if (crb(c,2)) { goto L_800AB504; } // 800AB4FC
  W32(c->r[7]+0x00000000u,c->r[4]); // 800AB500
L_800AB504:;
  cmps(c,0,(int32_t)c->r[6],0); // 800AB504
  if (crb(c,2)) { goto L_800AB540; } // 800AB508
  W32(c->r[6]+0x00000004u,c->r[4]); // 800AB50C
  c->r[5]=R32(c->r[6]+0x00000008u); // 800AB510
  c->r[0]=c->r[6]+c->r[5]; // 800AB514
  cmpu(c,0,c->r[0],c->r[4]); // 800AB518
  if (!crb(c,2)) return; // 800AB51C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AB520
  cmps(c,0,(int32_t)c->r[7],0); // 800AB524
  c->r[0]=c->r[5]+c->r[0]; // 800AB528
  W32(c->r[6]+0x00000008u,c->r[0]); // 800AB52C
  W32(c->r[6]+0x00000004u,c->r[7]); // 800AB530
  if (crb(c,2)) return; // 800AB534
  W32(c->r[7]+0x00000000u,c->r[6]); // 800AB538
  return; // 800AB53C
L_800AB540:;
  c->r[3]=c->r[4]|c->r[4]; // 800AB540
  return; // 800AB544
}

// OSAllocFromHeap
void f_800AB548(Ctx* __restrict c) {
  trace_call(0x800AB548u);
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800AB548
  c->r[5]=R32(c->r[13]+0xFFFF8C9Cu); // 800AB54C
  c->r[0]=c->r[4]+0x0000003Fu; // 800AB550
  c->r[5]=c->r[5]+c->r[3]; // 800AB554
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800AB558
  c->r[3]=R32(c->r[5]+0x00000004u); // 800AB55C
  c->r[6]=c->r[3]|c->r[3]; // 800AB560
  goto L_800AB578; // 800AB564
L_800AB568:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 800AB568
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800AB56C
  if (!crb(c,1)) { goto L_800AB580; } // 800AB570
  c->r[6]=R32(c->r[6]+0x00000004u); // 800AB574
L_800AB578:;
  cmps(c,0,(int32_t)c->r[6],0); // 800AB578
  if (!crb(c,2)) { IRQCHK(c); goto L_800AB568; } // 800AB57C
L_800AB580:;
  cmps(c,0,(int32_t)c->r[6],0); // 800AB580
  if (!crb(c,2)) { goto L_800AB590; } // 800AB584
  c->r[3]=0u+0x00000000u; // 800AB588
  return; // 800AB58C
L_800AB590:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 800AB590
  c->r[0]=c->r[0]-c->r[4]; // 800AB594
  cmpu(c,0,c->r[0],0x00000040u); // 800AB598
  if (!crb(c,0)) { goto L_800AB5D8; } // 800AB59C
  c->r[4]=R32(c->r[6]+0x00000004u); // 800AB5A0
  cmps(c,0,(int32_t)c->r[4],0); // 800AB5A4
  if (crb(c,2)) { goto L_800AB5B4; } // 800AB5A8
  c->r[0]=R32(c->r[6]+0x00000000u); // 800AB5AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800AB5B0
L_800AB5B4:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800AB5B4
  cmps(c,0,(int32_t)c->r[4],0); // 800AB5B8
  if (!crb(c,2)) { goto L_800AB5C8; } // 800AB5BC
  c->r[3]=R32(c->r[6]+0x00000004u); // 800AB5C0
  goto L_800AB5D0; // 800AB5C4
L_800AB5C8:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 800AB5C8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800AB5CC
L_800AB5D0:;
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AB5D0
  goto L_800AB618; // 800AB5D4
L_800AB5D8:;
  W32(c->r[6]+0x00000008u,c->r[4]); // 800AB5D8
  c->r[4]=c->r[6]+c->r[4]; // 800AB5DC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800AB5E0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800AB5E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800AB5E8
  c->r[3]=R32(c->r[6]+0x00000004u); // 800AB5EC
  cmps(c,0,(int32_t)c->r[3],0); // 800AB5F0
  W32(c->r[4]+0x00000004u,c->r[3]); // 800AB5F4
  if (crb(c,2)) { goto L_800AB600; } // 800AB5F8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800AB5FC
L_800AB600:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800AB600
  cmps(c,0,(int32_t)c->r[3],0); // 800AB604
  if (crb(c,2)) { goto L_800AB614; } // 800AB608
  W32(c->r[3]+0x00000004u,c->r[4]); // 800AB60C
  goto L_800AB618; // 800AB610
L_800AB614:;
  W32(c->r[5]+0x00000004u,c->r[4]); // 800AB614
L_800AB618:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 800AB618
  c->r[0]=0u+0x00000000u; // 800AB61C
  W32(c->r[6]+0x00000004u,c->r[3]); // 800AB620
  cmps(c,0,(int32_t)c->r[3],0); // 800AB624
  W32(c->r[6]+0x00000000u,c->r[0]); // 800AB628
  if (crb(c,2)) { goto L_800AB634; } // 800AB62C
  W32(c->r[3]+0x00000000u,c->r[6]); // 800AB630
L_800AB634:;
  W32(c->r[5]+0x00000008u,c->r[6]); // 800AB634
  c->r[3]=c->r[6]+0x00000020u; // 800AB638
  return; // 800AB63C
}

// OSFreeToHeap
void f_800AB640(Ctx* __restrict c) {
  trace_call(0x800AB640u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB640
  c->r[0]=c->lr; // 800AB644
  c->r[4]=c->r[4]+0xFFFFFFE0u; // 800AB648
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AB64C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800AB650
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AB654
  c->r[5]=R32(c->r[13]+0xFFFF8C9Cu); // 800AB658
  c->r[6]=R32(c->r[4]+0x00000004u); // 800AB65C
  c->r[31]=c->r[5]+c->r[0]; // 800AB660
  cmps(c,0,(int32_t)c->r[6],0); // 800AB664
  c->r[3]=R32(c->r[31]+0x00000008u); // 800AB668
  if (crb(c,2)) { goto L_800AB678; } // 800AB66C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800AB670
  W32(c->r[6]+0x00000000u,c->r[0]); // 800AB674
L_800AB678:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 800AB678
  cmps(c,0,(int32_t)c->r[5],0); // 800AB67C
  if (!crb(c,2)) { goto L_800AB68C; } // 800AB680
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AB684
  goto L_800AB694; // 800AB688
L_800AB68C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800AB68C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800AB690
L_800AB694:;
  W32(c->r[31]+0x00000008u,c->r[3]); // 800AB694
  c->r[3]=R32(c->r[31]+0x00000004u); // 800AB698
  c->lr=0x800AB6A0u; f_800AB49C(c); // 800AB69C
  W32(c->r[31]+0x00000004u,c->r[3]); // 800AB6A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AB6A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AB6A8
  c->lr=c->r[0]; // 800AB6AC
  c->r[1]=c->r[1]+0x00000010u; // 800AB6B0
  return; // 800AB6B4
}

// OSSetCurrentHeap
void f_800AB6B8(Ctx* __restrict c) {
  trace_call(0x800AB6B8u);
  c->r[0]=R32(c->r[13]+0xFFFF80C0u); // 800AB6B8
  W32(c->r[13]+0xFFFF80C0u,c->r[3]); // 800AB6BC
  c->r[3]=c->r[0]|c->r[0]; // 800AB6C0
  return; // 800AB6C4
}

// OSInitAlloc
void f_800AB6C8(Ctx* __restrict c) {
  trace_call(0x800AB6C8u);
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 800AB6C8
  W32(c->r[13]+0xFFFF8C9Cu,c->r[3]); // 800AB6CC
  c->r[8]=0u+0x00000000u; // 800AB6D0
  W32(c->r[13]+0xFFFF8C98u,c->r[5]); // 800AB6D4
  c->r[6]=0u+0x00000000u; // 800AB6D8
  c->r[5]=0u+0xFFFFFFFFu; // 800AB6DC
  c->r[3]=0u+0x00000000u; // 800AB6E0
  goto L_800AB704; // 800AB6E4
L_800AB6E8:;
  c->r[0]=R32(c->r[13]+0xFFFF8C9Cu); // 800AB6E8
  c->r[8]=c->r[8]+0x00000001u; // 800AB6EC
  W32(c->r[6]+c->r[0],c->r[5]); // 800AB6F0
  c->r[9]=c->r[0]+c->r[6]; // 800AB6F4
  c->r[6]=c->r[6]+0x0000000Cu; // 800AB6F8
  W32(c->r[9]+0x00000008u,c->r[3]); // 800AB6FC
  W32(c->r[9]+0x00000004u,c->r[3]); // 800AB700
L_800AB704:;
  c->r[0]=R32(c->r[13]+0xFFFF8C98u); // 800AB704
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800AB708
  if (crb(c,0)) { IRQCHK(c); goto L_800AB6E8; } // 800AB70C
  c->r[3]=R32(c->r[13]+0xFFFF8C9Cu); // 800AB710
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 800AB714
  c->r[4]=0u+0xFFFFFFFFu; // 800AB718
  W32(c->r[13]+0xFFFF8C90u,c->r[0]); // 800AB71C
  c->r[3]=c->r[3]+c->r[7]; // 800AB720
  c->r[0]=c->r[3]+0x0000001Fu; // 800AB724
  W32(c->r[13]+0xFFFF80C0u,c->r[4]); // 800AB728
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800AB72C
  W32(c->r[13]+0xFFFF8C94u,c->r[3]); // 800AB730
  return; // 800AB734
}

// OSCreateHeap
void f_800AB738(Ctx* __restrict c) {
  trace_call(0x800AB738u);
  c->r[6]=R32(c->r[13]+0xFFFF8C98u); // 800AB738
  c->r[0]=c->r[3]+0x0000001Fu; // 800AB73C
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800AB740
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 800AB744
  c->r[5]=R32(c->r[13]+0xFFFF8C9Cu); // 800AB748
  c->r[3]=0u+0x00000000u; // 800AB74C
  c->ctr=c->r[6]; // 800AB750
  cmps(c,0,(int32_t)c->r[6],0); // 800AB754
  if (!crb(c,1)) { goto L_800AB79C; } // 800AB758
L_800AB75C:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800AB75C
  cmps(c,0,(int32_t)c->r[0],0); // 800AB760
  if (!crb(c,0)) { goto L_800AB790; } // 800AB764
  c->r[0]=c->r[4]-c->r[7]; // 800AB768
  c->r[4]=0u+0x00000000u; // 800AB76C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800AB770
  W32(c->r[7]+0x00000000u,c->r[4]); // 800AB774
  W32(c->r[7]+0x00000004u,c->r[4]); // 800AB778
  c->r[0]=R32(c->r[5]+0x00000000u); // 800AB77C
  W32(c->r[7]+0x00000008u,c->r[0]); // 800AB780
  W32(c->r[5]+0x00000004u,c->r[7]); // 800AB784
  W32(c->r[5]+0x00000008u,c->r[4]); // 800AB788
  return; // 800AB78C
L_800AB790:;
  c->r[5]=c->r[5]+0x0000000Cu; // 800AB790
  c->r[3]=c->r[3]+0x00000001u; // 800AB794
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AB75C; } // 800AB798
L_800AB79C:;
  c->r[3]=0u+0xFFFFFFFFu; // 800AB79C
  return; // 800AB7A0
}

// OSGetMEM1ArenaHi
void f_800AB7A4(Ctx* __restrict c) {
  trace_call(0x800AB7A4u);
  c->r[3]=R32(c->r[13]+0xFFFF8CA0u); // 800AB7A4
  return; // 800AB7A8
}

// OSGetMEM2ArenaHi
void f_800AB7AC(Ctx* __restrict c) {
  trace_call(0x800AB7ACu);
  c->r[3]=R32(c->r[13]+0xFFFF8CA4u); // 800AB7AC
  return; // 800AB7B0
}

// OSGetArenaHi
void f_800AB7B4(Ctx* __restrict c) {
  trace_call(0x800AB7B4u);
  c->r[3]=R32(c->r[13]+0xFFFF8CA0u); // 800AB7B4
  return; // 800AB7B8
}

// OSGetMEM1ArenaLo
void f_800AB7BC(Ctx* __restrict c) {
  trace_call(0x800AB7BCu);
  c->r[3]=R32(c->r[13]+0xFFFF80C8u); // 800AB7BC
  return; // 800AB7C0
}

// OSGetMEM2ArenaLo
void f_800AB7C4(Ctx* __restrict c) {
  trace_call(0x800AB7C4u);
  c->r[3]=R32(c->r[13]+0xFFFF80CCu); // 800AB7C4
  return; // 800AB7C8
}

// OSGetArenaLo
void f_800AB7CC(Ctx* __restrict c) {
  trace_call(0x800AB7CCu);
  c->r[3]=R32(c->r[13]+0xFFFF80C8u); // 800AB7CC
  return; // 800AB7D0
}

// OSSetMEM1ArenaHi
void f_800AB7D4(Ctx* __restrict c) {
  trace_call(0x800AB7D4u);
  W32(c->r[13]+0xFFFF8CA0u,c->r[3]); // 800AB7D4
  return; // 800AB7D8
}

// OSSetMEM2ArenaHi
void f_800AB7DC(Ctx* __restrict c) {
  trace_call(0x800AB7DCu);
  W32(c->r[13]+0xFFFF8CA4u,c->r[3]); // 800AB7DC
  return; // 800AB7E0
}

// OSSetArenaHi
void f_800AB7E4(Ctx* __restrict c) {
  trace_call(0x800AB7E4u);
  W32(c->r[13]+0xFFFF8CA0u,c->r[3]); // 800AB7E4
  return; // 800AB7E8
}

// OSSetMEM1ArenaLo
void f_800AB7EC(Ctx* __restrict c) {
  trace_call(0x800AB7ECu);
  W32(c->r[13]+0xFFFF80C8u,c->r[3]); // 800AB7EC
  return; // 800AB7F0
}

// OSSetMEM2ArenaLo
void f_800AB7F4(Ctx* __restrict c) {
  trace_call(0x800AB7F4u);
  W32(c->r[13]+0xFFFF80CCu,c->r[3]); // 800AB7F4
  return; // 800AB7F8
}

// OSSetArenaLo
void f_800AB7FC(Ctx* __restrict c) {
  trace_call(0x800AB7FCu);
  W32(c->r[13]+0xFFFF80C8u,c->r[3]); // 800AB7FC
  return; // 800AB800
}

// OSAllocFromMEM1ArenaLo
void f_800AB804(Ctx* __restrict c) {
  trace_call(0x800AB804u);
  c->r[0]=R32(c->r[13]+0xFFFF80C8u); // 800AB804
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 800AB808
  c->r[6]=~(c->r[5]|c->r[5]); // 800AB80C
  c->r[5]=c->r[4]+c->r[0]; // 800AB810
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800AB814
  c->r[0]=c->r[6]&c->r[0]; // 800AB818
  c->r[3]=c->r[0]+c->r[3]; // 800AB81C
  c->r[4]=c->r[3]+c->r[4]; // 800AB820
  c->r[3]=c->r[0]|c->r[0]; // 800AB824
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800AB828
  c->r[0]=c->r[6]&c->r[0]; // 800AB82C
  W32(c->r[13]+0xFFFF80C8u,c->r[0]); // 800AB830
  return; // 800AB834
}

// __AIClockInit
void f_800AB838(Ctx* __restrict c) {
  trace_call(0x800AB838u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB838
  c->r[0]=c->lr; // 800AB83C
  c->r[4]=0u+0xCD800000u; // 800AB840
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AB844
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800AB848
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AB84C
  c->r[31]=c->r[3]|c->r[3]; // 800AB850
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AB854
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AB858
  W32(c->r[1]+0x00000010u,c->r[28]); // 800AB85C
  c->r[5]=R32(c->r[4]+0x00000180u); // 800AB860
  c->r[5]=rotl(c->r[5],0)&0xFFFFFEFFu; // 800AB864
  c->r[5]=c->r[5]|c->r[0]; // 800AB868
  c->r[0]=rotl(c->r[5],0)&0xFFFFFF7Fu; // 800AB86C
  W32(c->r[4]+0x00000180u,c->r[0]); // 800AB870
  c->r[0]=R32(c->r[4]+0x000001D0u); // 800AB874
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800AB878
  W32(c->r[4]+0x000001D0u,c->r[0]); // 800AB87C
  c->lr=0x800AB884u; f_800B490C(c); // 800AB880
  c->r[4]=0u+0x431C0000u; // 800AB884
  c->r[28]=c->r[3]|c->r[3]; // 800AB888
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800AB88C
  c->r[29]=0u+0x80000000u; // 800AB890
L_800AB894:;
  c->lr=0x800AB898u; f_800B490C(c); // 800AB894
  c->r[0]=R32(c->r[29]+0x000000F8u); // 800AB898
  c->r[3]=c->r[3]-c->r[28]; // 800AB89C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800AB8A0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800AB8A4
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800AB8A8
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800AB8AC
  c->r[0]=divwu(c->r[3],c->r[0]); // 800AB8B0
  cmpu(c,0,c->r[0],0x00000064u); // 800AB8B4
  if (crb(c,0)) { IRQCHK(c); goto L_800AB894; } // 800AB8B8
  cmps(c,0,(int32_t)c->r[31],0); // 800AB8BC
  if (!crb(c,2)) { goto L_800AB8EC; } // 800AB8C0
  c->r[4]=0u+0xCD800000u; // 800AB8C4
  c->r[3]=0u+0xF8040000u; // 800AB8C8
  c->r[5]=R32(c->r[4]+0x000001CCu); // 800AB8CC
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 800AB8D0
  c->r[3]=rotl(c->r[5],0)&0xFFFC003Fu; // 800AB8D4
  c->r[3]=c->r[3]|0x00000FC0u; // 800AB8D8
  c->r[0]=c->r[3]&c->r[0]; // 800AB8DC
  c->r[0]=c->r[0]|0x04640000u; // 800AB8E0
  W32(c->r[4]+0x000001CCu,c->r[0]); // 800AB8E4
  goto L_800AB910; // 800AB8E8
L_800AB8EC:;
  c->r[3]=0u+0xCD800000u; // 800AB8EC
  c->r[0]=R32(c->r[3]+0x000001CCu); // 800AB8F0
  c->r[0]=rotl(c->r[0],0)&0xFFFC003Fu; // 800AB8F4
  c->r[0]=c->r[0]|0x0000FFC0u; // 800AB8F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC0u; // 800AB8FC
  c->r[0]=c->r[0]|0x0000000Eu; // 800AB900
  c->r[0]=rotl(c->r[0],0)&0xF803FFFFu; // 800AB904
  c->r[0]=c->r[0]|0x04B00000u; // 800AB908
  W32(c->r[3]+0x000001CCu,c->r[0]); // 800AB90C
L_800AB910:;
  c->lr=0x800AB914u; f_800B490C(c); // 800AB910
  c->r[4]=0u+0x431C0000u; // 800AB914
  c->r[31]=c->r[3]|c->r[3]; // 800AB918
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800AB91C
  c->r[29]=0u+0x80000000u; // 800AB920
L_800AB924:;
  c->lr=0x800AB928u; f_800B490C(c); // 800AB924
  c->r[0]=R32(c->r[29]+0x000000F8u); // 800AB928
  c->r[3]=c->r[3]-c->r[31]; // 800AB92C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800AB930
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800AB934
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800AB938
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800AB93C
  c->r[0]=divwu(c->r[3],c->r[0]); // 800AB940
  cmpu(c,0,c->r[0],0x00000064u); // 800AB944
  if (crb(c,0)) { IRQCHK(c); goto L_800AB924; } // 800AB948
  c->r[3]=0u+0xCD800000u; // 800AB94C
  c->r[0]=R32(c->r[3]+0x000001D0u); // 800AB950
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 800AB954
  W32(c->r[3]+0x000001D0u,c->r[0]); // 800AB958
  c->lr=0x800AB960u; f_800B490C(c); // 800AB95C
  c->r[4]=0u+0x431C0000u; // 800AB960
  c->r[31]=c->r[3]|c->r[3]; // 800AB964
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800AB968
  c->r[29]=0u+0x80000000u; // 800AB96C
L_800AB970:;
  c->lr=0x800AB974u; f_800B490C(c); // 800AB970
  c->r[0]=R32(c->r[29]+0x000000F8u); // 800AB974
  c->r[3]=c->r[3]-c->r[31]; // 800AB978
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800AB97C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800AB980
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800AB984
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800AB988
  c->r[0]=divwu(c->r[3],c->r[0]); // 800AB98C
  cmpu(c,0,c->r[0],0x000003E8u); // 800AB990
  if (crb(c,0)) { IRQCHK(c); goto L_800AB970; } // 800AB994
  c->r[3]=0u+0xCD800000u; // 800AB998
  c->r[0]=R32(c->r[3]+0x000001D0u); // 800AB99C
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 800AB9A0
  c->r[0]=c->r[0]|0x40000000u; // 800AB9A4
  W32(c->r[3]+0x000001D0u,c->r[0]); // 800AB9A8
  c->lr=0x800AB9B0u; f_800B490C(c); // 800AB9AC
  c->r[4]=0u+0x431C0000u; // 800AB9B0
  c->r[31]=c->r[3]|c->r[3]; // 800AB9B4
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800AB9B8
  c->r[29]=0u+0x80000000u; // 800AB9BC
L_800AB9C0:;
  c->lr=0x800AB9C4u; f_800B490C(c); // 800AB9C0
  c->r[0]=R32(c->r[29]+0x000000F8u); // 800AB9C4
  c->r[3]=c->r[3]-c->r[31]; // 800AB9C8
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800AB9CC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800AB9D0
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800AB9D4
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800AB9D8
  c->r[0]=divwu(c->r[3],c->r[0]); // 800AB9DC
  cmpu(c,0,c->r[0],0x000003E8u); // 800AB9E0
  if (crb(c,0)) { IRQCHK(c); goto L_800AB9C0; } // 800AB9E4
  c->r[3]=0u+0xCD800000u; // 800AB9E8
  c->r[0]=R32(c->r[3]+0x000001D0u); // 800AB9EC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800AB9F0
  c->r[0]=c->r[0]|0x80000000u; // 800AB9F4
  W32(c->r[3]+0x000001D0u,c->r[0]); // 800AB9F8
  c->lr=0x800ABA00u; f_800B490C(c); // 800AB9FC
  c->r[4]=0u+0x431C0000u; // 800ABA00
  c->r[29]=c->r[3]|c->r[3]; // 800ABA04
  c->r[30]=c->r[4]+0xFFFFDE83u; // 800ABA08
  c->r[31]=0u+0x80000000u; // 800ABA0C
L_800ABA10:;
  c->lr=0x800ABA14u; f_800B490C(c); // 800ABA10
  c->r[0]=R32(c->r[31]+0x000000F8u); // 800ABA14
  c->r[3]=c->r[3]-c->r[29]; // 800ABA18
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800ABA1C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800ABA20
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 800ABA24
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 800ABA28
  c->r[0]=divwu(c->r[3],c->r[0]); // 800ABA2C
  cmpu(c,0,c->r[0],0x000003E8u); // 800ABA30
  if (crb(c,0)) { IRQCHK(c); goto L_800ABA10; } // 800ABA34
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ABA38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ABA3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ABA40
  c->r[29]=R32(c->r[1]+0x00000014u); // 800ABA44
  c->r[28]=R32(c->r[1]+0x00000010u); // 800ABA48
  c->lr=c->r[0]; // 800ABA4C
  c->r[1]=c->r[1]+0x00000020u; // 800ABA50
  return; // 800ABA54
}

// __OSInitAudioSystem
void f_800ABA58(Ctx* __restrict c) {
  stub_log(0x800ABA58u);  return;
}

// __OSStopAudioSystem
void f_800ABC20(Ctx* __restrict c) {
  trace_call(0x800ABC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ABC20
  c->r[0]=c->lr; // 800ABC24
  c->r[3]=0u+0xCC000000u; // 800ABC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ABC2C
  c->r[0]=0u+0x00000804u; // 800ABC30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ABC34
  W16(c->r[3]+0x0000500Au,c->r[0]); // 800ABC38
  c->r[0]=R16(c->r[3]+0x00005036u); // 800ABC3C
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800ABC40
  W16(c->r[3]+0x00005036u,c->r[0]); // 800ABC44
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800ABC48
  goto L_800ABC54; // 800ABC4C
L_800ABC50:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800ABC50
L_800ABC54:;
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 800ABC54
  if (!crb(c,2)) { IRQCHK(c); goto L_800ABC50; } // 800ABC58
  c->r[3]=0u+0xCC000000u; // 800ABC5C
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800ABC60
  goto L_800ABC6C; // 800ABC64
L_800ABC68:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800ABC68
L_800ABC6C:;
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 800ABC6C
  if (!crb(c,2)) { IRQCHK(c); goto L_800ABC68; } // 800ABC70
  c->r[4]=0u+0xCC000000u; // 800ABC74
  c->r[0]=0u+0x000008ACu; // 800ABC78
  W16(c->r[4]+0x0000500Au,c->r[0]); // 800ABC7C
  c->r[0]=0u+0x00000000u; // 800ABC80
  W16(c->r[4]+0x00005000u,c->r[0]); // 800ABC84
L_800ABC88:;
  c->r[3]=R16(c->r[4]+0x00005004u); // 800ABC88
  c->r[0]=R16(c->r[4]+0x00005006u); // 800ABC8C
  c->r[0]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 800ABC90
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800ABC94
  if (!crb(c,2)) { IRQCHK(c); goto L_800ABC88; } // 800ABC98
  c->lr=0x800ABCA0u; f_800B490C(c); // 800ABC9C
  c->r[31]=c->r[3]|c->r[3]; // 800ABCA0
L_800ABCA4:;
  c->lr=0x800ABCA8u; f_800B490C(c); // 800ABCA4
  c->r[0]=c->r[3]-c->r[31]; // 800ABCA8
  cmps(c,0,(int32_t)c->r[0],44); // 800ABCAC
  if (crb(c,0)) { IRQCHK(c); goto L_800ABCA4; } // 800ABCB0
  c->r[3]=0u+0xCC000000u; // 800ABCB4
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800ABCB8
  c->r[0]=c->r[0]|0x00000001u; // 800ABCBC
  W16(c->r[3]+0x0000500Au,c->r[0]); // 800ABCC0
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800ABCC4
  goto L_800ABCD0; // 800ABCC8
L_800ABCCC:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 800ABCCC
L_800ABCD0:;
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ABCD0
  if (!crb(c,2)) { IRQCHK(c); goto L_800ABCCC; } // 800ABCD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ABCD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ABCDC
  c->lr=c->r[0]; // 800ABCE0
  c->r[1]=c->r[1]+0x00000010u; // 800ABCE4
  return; // 800ABCE8
}

// DCEnable
void f_800ABCEC(Ctx* __restrict c) {
  trace_call(0x800ABCECu);
  /* sync */ // 800ABCEC
  c->r[3]=mfspr(c,1008); // 800ABCF0
  c->r[3]=c->r[3]|0x00004000u; // 800ABCF4
  mtspr(c,1008,c->r[3]); // 800ABCF8
  return; // 800ABCFC
}

// DCInvalidateRange
void f_800ABD00(Ctx* __restrict c) {
  trace_call(0x800ABD00u);
  cmpu(c,0,c->r[4],0x00000000u); // 800ABD00
  if (!crb(c,1)) return; // 800ABD04
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800ABD08
  c->r[4]=c->r[4]+c->r[5]; // 800ABD0C
  c->r[4]=c->r[4]+0x0000001Fu; // 800ABD10
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800ABD14
  c->ctr=c->r[4]; // 800ABD18
L_800ABD1C:;
  /* dcbi */ // 800ABD1C
  c->r[3]=c->r[3]+0x00000020u; // 800ABD20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABD1C; } // 800ABD24
  return; // 800ABD28
}

// DCFlushRange
void f_800ABD2C(Ctx* __restrict c) {
  trace_call(0x800ABD2Cu);
  cmpu(c,0,c->r[4],0x00000000u); // 800ABD2C
  if (!crb(c,1)) return; // 800ABD30
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800ABD34
  c->r[4]=c->r[4]+c->r[5]; // 800ABD38
  c->r[4]=c->r[4]+0x0000001Fu; // 800ABD3C
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800ABD40
  c->ctr=c->r[4]; // 800ABD44
L_800ABD48:;
  /* dcbf */ // 800ABD48
  c->r[3]=c->r[3]+0x00000020u; // 800ABD4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABD48; } // 800ABD50
  sc(c,0x800ABD54u); // 800ABD54
  return; // 800ABD58
}

// DCStoreRange
void f_800ABD5C(Ctx* __restrict c) {
  trace_call(0x800ABD5Cu);
  cmpu(c,0,c->r[4],0x00000000u); // 800ABD5C
  if (!crb(c,1)) return; // 800ABD60
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800ABD64
  c->r[4]=c->r[4]+c->r[5]; // 800ABD68
  c->r[4]=c->r[4]+0x0000001Fu; // 800ABD6C
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800ABD70
  c->ctr=c->r[4]; // 800ABD74
L_800ABD78:;
  /* dcbst */ // 800ABD78
  c->r[3]=c->r[3]+0x00000020u; // 800ABD7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABD78; } // 800ABD80
  sc(c,0x800ABD84u); // 800ABD84
  return; // 800ABD88
}

// DCFlushRangeNoSync
void f_800ABD8C(Ctx* __restrict c) {
  trace_call(0x800ABD8Cu);
  cmpu(c,0,c->r[4],0x00000000u); // 800ABD8C
  if (!crb(c,1)) return; // 800ABD90
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800ABD94
  c->r[4]=c->r[4]+c->r[5]; // 800ABD98
  c->r[4]=c->r[4]+0x0000001Fu; // 800ABD9C
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800ABDA0
  c->ctr=c->r[4]; // 800ABDA4
L_800ABDA8:;
  /* dcbf */ // 800ABDA8
  c->r[3]=c->r[3]+0x00000020u; // 800ABDAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABDA8; } // 800ABDB0
  return; // 800ABDB4
}

// DCStoreRangeNoSync
void f_800ABDB8(Ctx* __restrict c) {
  trace_call(0x800ABDB8u);
  cmpu(c,0,c->r[4],0x00000000u); // 800ABDB8
  if (!crb(c,1)) return; // 800ABDBC
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800ABDC0
  c->r[4]=c->r[4]+c->r[5]; // 800ABDC4
  c->r[4]=c->r[4]+0x0000001Fu; // 800ABDC8
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800ABDCC
  c->ctr=c->r[4]; // 800ABDD0
L_800ABDD4:;
  /* dcbst */ // 800ABDD4
  c->r[3]=c->r[3]+0x00000020u; // 800ABDD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABDD4; } // 800ABDDC
  return; // 800ABDE0
}

// DCZeroRange
void f_800ABDE4(Ctx* __restrict c) {
  trace_call(0x800ABDE4u);
  cmpu(c,0,c->r[4],0x00000000u); // 800ABDE4
  if (!crb(c,1)) return; // 800ABDE8
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800ABDEC
  c->r[4]=c->r[4]+c->r[5]; // 800ABDF0
  c->r[4]=c->r[4]+0x0000001Fu; // 800ABDF4
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800ABDF8
  c->ctr=c->r[4]; // 800ABDFC
L_800ABE00:;
  dcbz(0u+c->r[3]); // 800ABE00
  c->r[3]=c->r[3]+0x00000020u; // 800ABE04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABE00; } // 800ABE08
  return; // 800ABE0C
}

// ICInvalidateRange
void f_800ABE10(Ctx* __restrict c) {
  trace_call(0x800ABE10u);
  cmpu(c,0,c->r[4],0x00000000u); // 800ABE10
  if (!crb(c,1)) return; // 800ABE14
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800ABE18
  c->r[4]=c->r[4]+c->r[5]; // 800ABE1C
  c->r[4]=c->r[4]+0x0000001Fu; // 800ABE20
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800ABE24
  c->ctr=c->r[4]; // 800ABE28
L_800ABE2C:;
  /* icbi */ // 800ABE2C
  c->r[3]=c->r[3]+0x00000020u; // 800ABE30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABE2C; } // 800ABE34
  /* sync */ // 800ABE38
  /* isync */ // 800ABE3C
  return; // 800ABE40
}

// ICFlashInvalidate
void f_800ABE44(Ctx* __restrict c) {
  trace_call(0x800ABE44u);
  c->r[3]=mfspr(c,1008); // 800ABE44
  c->r[3]=c->r[3]|0x00000800u; // 800ABE48
  mtspr(c,1008,c->r[3]); // 800ABE4C
  return; // 800ABE50
}

// ICEnable
void f_800ABE54(Ctx* __restrict c) {
  trace_call(0x800ABE54u);
  /* isync */ // 800ABE54
  c->r[3]=mfspr(c,1008); // 800ABE58
  c->r[3]=c->r[3]|0x00008000u; // 800ABE5C
  mtspr(c,1008,c->r[3]); // 800ABE60
  return; // 800ABE64
}

// __LCEnable
void f_800ABE68(Ctx* __restrict c) {
  trace_call(0x800ABE68u);
  c->r[5]=c->msr; // 800ABE68
  c->r[5]=c->r[5]|0x00001000u; // 800ABE6C
  c->msr=c->r[5]; // 800ABE70
  c->r[3]=0u+0x80000000u; // 800ABE74
  c->r[4]=0u+0x00000400u; // 800ABE78
  c->ctr=c->r[4]; // 800ABE7C
L_800ABE80:;
  /* dcbt */ // 800ABE80
  /* dcbst */ // 800ABE84
  c->r[3]=c->r[3]+0x00000020u; // 800ABE88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABE80; } // 800ABE8C
  c->r[4]=mfspr(c,920); // 800ABE90
  c->r[4]=c->r[4]|0x100F0000u; // 800ABE94
  mtspr(c,920,c->r[4]); // 800ABE98
  c->r[0]=c->r[0]|0x00000000u; // 800ABE9C
  c->r[0]=c->r[0]|0x00000000u; // 800ABEA0
  c->r[0]=c->r[0]|0x00000000u; // 800ABEA4
  c->r[0]=c->r[0]|0x00000000u; // 800ABEA8
  c->r[0]=c->r[0]|0x00000000u; // 800ABEAC
  c->r[0]=c->r[0]|0x00000000u; // 800ABEB0
  c->r[0]=c->r[0]|0x00000000u; // 800ABEB4
  c->r[0]=c->r[0]|0x00000000u; // 800ABEB8
  c->r[0]=c->r[0]|0x00000000u; // 800ABEBC
  c->r[0]=c->r[0]|0x00000000u; // 800ABEC0
  c->r[0]=c->r[0]|0x00000000u; // 800ABEC4
  c->r[0]=c->r[0]|0x00000000u; // 800ABEC8
  c->r[3]=0u+0xE0000000u; // 800ABECC
  c->r[3]=c->r[3]|0x00000002u; // 800ABED0
  mtspr(c,543,c->r[3]); // 800ABED4
  c->r[3]=c->r[3]|0x000001FEu; // 800ABED8
  mtspr(c,542,c->r[3]); // 800ABEDC
  /* isync */ // 800ABEE0
  c->r[3]=0u+0xE0000000u; // 800ABEE4
  c->r[6]=0u+0x00000200u; // 800ABEE8
  c->ctr=c->r[6]; // 800ABEEC
  c->r[6]=0u+0x00000000u; // 800ABEF0
L_800ABEF4:;
  dcbz(c->r[6]+c->r[3]); // 800ABEF4
  c->r[3]=c->r[3]+0x00000020u; // 800ABEF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABEF4; } // 800ABEFC
  c->r[0]=c->r[0]|0x00000000u; // 800ABF00
  c->r[0]=c->r[0]|0x00000000u; // 800ABF04
  c->r[0]=c->r[0]|0x00000000u; // 800ABF08
  c->r[0]=c->r[0]|0x00000000u; // 800ABF0C
  c->r[0]=c->r[0]|0x00000000u; // 800ABF10
  c->r[0]=c->r[0]|0x00000000u; // 800ABF14
  c->r[0]=c->r[0]|0x00000000u; // 800ABF18
  c->r[0]=c->r[0]|0x00000000u; // 800ABF1C
  c->r[0]=c->r[0]|0x00000000u; // 800ABF20
  c->r[0]=c->r[0]|0x00000000u; // 800ABF24
  c->r[0]=c->r[0]|0x00000000u; // 800ABF28
  c->r[0]=c->r[0]|0x00000000u; // 800ABF2C
  return; // 800ABF30
}

// LCEnable
void f_800ABF34(Ctx* __restrict c) {
  trace_call(0x800ABF34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ABF34
  c->r[0]=c->lr; // 800ABF38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ABF3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ABF40
  c->lr=0x800ABF48u; f_800B087C(c); // 800ABF44
  c->r[31]=c->r[3]|c->r[3]; // 800ABF48
  c->lr=0x800ABF50u; f_800ABE68(c); // 800ABF4C
  c->r[3]=c->r[31]|c->r[31]; // 800ABF50
  c->lr=0x800ABF58u; f_800B08A4(c); // 800ABF54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ABF58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ABF5C
  c->lr=c->r[0]; // 800ABF60
  c->r[1]=c->r[1]+0x00000010u; // 800ABF64
  return; // 800ABF68
}

// LCDisable
void f_800ABF6C(Ctx* __restrict c) {
  trace_call(0x800ABF6Cu);
  c->r[3]=0u+0xE0000000u; // 800ABF6C
  c->r[4]=0u+0x00000200u; // 800ABF70
  c->ctr=c->r[4]; // 800ABF74
L_800ABF78:;
  /* dcbi */ // 800ABF78
  c->r[3]=c->r[3]+0x00000020u; // 800ABF7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ABF78; } // 800ABF80
  c->r[4]=mfspr(c,920); // 800ABF84
  c->r[4]=rotl(c->r[4],0)&0xEFFFFFFFu; // 800ABF88
  mtspr(c,920,c->r[4]); // 800ABF8C
  return; // 800ABF90
}

// LCLoadBlocks
void f_800ABF94(Ctx* __restrict c) {
  trace_call(0x800ABF94u);
  c->r[6]=rotl(c->r[5],30)&0x0000001Fu; // 800ABF94
  c->r[4]=rotl(c->r[4],0)&0x1FFFFFFFu; // 800ABF98
  c->r[6]=c->r[6]|c->r[4]; // 800ABF9C
  mtspr(c,922,c->r[6]); // 800ABFA0
  c->r[6]=rotl(c->r[5],2)&0x0000000Cu; // 800ABFA4
  c->r[6]=c->r[6]|c->r[3]; // 800ABFA8
  c->r[6]=c->r[6]|0x00000012u; // 800ABFAC
  mtspr(c,923,c->r[6]); // 800ABFB0
  return; // 800ABFB4
}

// LCStoreBlocks
void f_800ABFB8(Ctx* __restrict c) {
  trace_call(0x800ABFB8u);
  c->r[6]=rotl(c->r[5],30)&0x0000001Fu; // 800ABFB8
  c->r[3]=rotl(c->r[3],0)&0x1FFFFFFFu; // 800ABFBC
  c->r[6]=c->r[6]|c->r[3]; // 800ABFC0
  mtspr(c,922,c->r[6]); // 800ABFC4
  c->r[6]=rotl(c->r[5],2)&0x0000000Cu; // 800ABFC8
  c->r[6]=c->r[6]|c->r[4]; // 800ABFCC
  c->r[6]=c->r[6]|0x00000002u; // 800ABFD0
  mtspr(c,923,c->r[6]); // 800ABFD4
  return; // 800ABFD8
}

// LCStoreData
void f_800ABFDC(Ctx* __restrict c) {
  trace_call(0x800ABFDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ABFDC
  c->r[0]=c->lr; // 800ABFE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ABFE4
  c->r[0]=c->r[5]+0x0000001Fu; // 800ABFE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ABFEC
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800ABFF0
  c->r[0]=c->r[31]+0x0000007Fu; // 800ABFF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ABFF8
  c->r[30]=rotl(c->r[0],25)&0x01FFFFFFu; // 800ABFFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AC000
  c->r[29]=c->r[4]|c->r[4]; // 800AC004
  W32(c->r[1]+0x00000010u,c->r[28]); // 800AC008
  c->r[28]=c->r[3]|c->r[3]; // 800AC00C
  goto L_800AC050; // 800AC010
L_800AC014:;
  cmpu(c,0,c->r[31],0x00000080u); // 800AC014
  if (!crb(c,0)) { goto L_800AC034; } // 800AC018
  c->r[3]=c->r[28]|c->r[28]; // 800AC01C
  c->r[4]=c->r[29]|c->r[29]; // 800AC020
  c->r[5]=c->r[31]|c->r[31]; // 800AC024
  c->lr=0x800AC02Cu; f_800ABFB8(c); // 800AC028
  c->r[31]=0u+0x00000000u; // 800AC02C
  goto L_800AC050; // 800AC030
L_800AC034:;
  c->r[3]=c->r[28]|c->r[28]; // 800AC034
  c->r[4]=c->r[29]|c->r[29]; // 800AC038
  c->r[5]=0u+0x00000000u; // 800AC03C
  c->lr=0x800AC044u; f_800ABFB8(c); // 800AC040
  c->r[31]=c->r[31]+0xFFFFFF80u; // 800AC044
  c->r[28]=c->r[28]+0x00001000u; // 800AC048
  c->r[29]=c->r[29]+0x00001000u; // 800AC04C
L_800AC050:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AC050
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC014; } // 800AC054
  c->r[3]=c->r[30]|c->r[30]; // 800AC058
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AC05C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AC060
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AC064
  c->r[28]=R32(c->r[1]+0x00000010u); // 800AC068
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AC06C
  c->lr=c->r[0]; // 800AC070
  c->r[1]=c->r[1]+0x00000020u; // 800AC074
  return; // 800AC078
}

// LCQueueLength
void f_800AC07C(Ctx* __restrict c) {
  trace_call(0x800AC07Cu);
  c->r[4]=mfspr(c,920); // 800AC07C
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 800AC080
  return; // 800AC084
}

// LCQueueWait
void f_800AC088(Ctx* __restrict c) {
  trace_call(0x800AC088u);
L_800AC088:;
  c->r[4]=mfspr(c,920); // 800AC088
  c->r[4]=rotl(c->r[4],8)&0x0000000Fu; // 800AC08C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 800AC090
  if (crb(c,1)) { IRQCHK(c); goto L_800AC088; } // 800AC094
  return; // 800AC098
}

// DMAErrorHandler
void f_800AC09C(Ctx* __restrict c) {
  trace_call(0x800AC09Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC09C
  c->r[0]=c->lr; // 800AC0A0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800AC0A4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800AC0A8
  W32(c->r[1]+0x00000078u,c->r[30]); // 800AC0AC
  W32(c->r[1]+0x00000074u,c->r[29]); // 800AC0B0
  c->r[29]=c->r[4]|c->r[4]; // 800AC0B4
  if (!crb(c,6)) { goto L_800AC0DC; } // 800AC0B8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800AC0BC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800AC0C0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800AC0C4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800AC0C8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800AC0CC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800AC0D0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800AC0D4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800AC0D8
L_800AC0DC:;
  c->r[31]=0u+0x80260000u; // 800AC0DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800AC0E0
  c->r[31]=c->r[31]+0x00006270u; // 800AC0E4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800AC0E8
  W32(c->r[1]+0x00000010u,c->r[5]); // 800AC0EC
  W32(c->r[1]+0x00000014u,c->r[6]); // 800AC0F0
  W32(c->r[1]+0x00000018u,c->r[7]); // 800AC0F4
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800AC0F8
  W32(c->r[1]+0x00000020u,c->r[9]); // 800AC0FC
  W32(c->r[1]+0x00000024u,c->r[10]); // 800AC100
  c->lr=0x800AC108u; f_800A956C(c); // 800AC104
  c->r[30]=c->r[3]|c->r[3]; // 800AC108
  c->r[3]=c->r[31]+0x00000030u; // 800AC10C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC110
  c->lr=0x800AC118u; f_800ACBA4(c); // 800AC114
  c->r[5]=R32(c->r[29]+0x0000019Cu); // 800AC118
  c->r[4]=c->r[30]|c->r[30]; // 800AC11C
  c->r[3]=c->r[31]+0x00000048u; // 800AC120
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC124
  c->lr=0x800AC12Cu; f_800ACBA4(c); // 800AC128
  c->r[0]=rotl(c->r[30],0)&0x00F00000u; cr0(c,c->r[0]); // 800AC12C
  if (crb(c,2)) { goto L_800AC140; } // 800AC130
  c->r[0]=R32(c->r[29]+0x0000019Cu); // 800AC134
  c->r[0]=rotl(c->r[0],0)&0x00200000u; cr0(c,c->r[0]); // 800AC138
  if (!crb(c,2)) { goto L_800AC158; } // 800AC13C
L_800AC140:;
  c->r[3]=c->r[31]+0x00000068u; // 800AC140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC144
  c->lr=0x800AC14Cu; f_800ACBA4(c); // 800AC148
  c->r[3]=c->r[29]|c->r[29]; // 800AC14C
  c->lr=0x800AC154u; f_800AC878(c); // 800AC150
  c->lr=0x800AC158u; f_800A94E0(c); // 800AC154
L_800AC158:;
  c->r[3]=c->r[31]+0x00000098u; // 800AC158
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC15C
  c->lr=0x800AC164u; f_800ACBA4(c); // 800AC160
  c->r[3]=c->r[31]+0x000000D4u; // 800AC164
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC168
  c->lr=0x800AC170u; f_800ACBA4(c); // 800AC16C
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 800AC170
  if (crb(c,2)) { goto L_800AC184; } // 800AC174
  c->r[3]=c->r[31]+0x0000010Cu; // 800AC178
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC17C
  c->lr=0x800AC184u; f_800ACBA4(c); // 800AC180
L_800AC184:;
  c->r[0]=rotl(c->r[30],0)&0x00400000u; cr0(c,c->r[0]); // 800AC184
  if (crb(c,2)) { goto L_800AC198; } // 800AC188
  c->r[3]=c->r[31]+0x0000014Cu; // 800AC18C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC190
  c->lr=0x800AC198u; f_800ACBA4(c); // 800AC194
L_800AC198:;
  c->r[0]=rotl(c->r[30],0)&0x00200000u; cr0(c,c->r[0]); // 800AC198
  if (crb(c,2)) { goto L_800AC1AC; } // 800AC19C
  c->r[3]=c->r[31]+0x00000178u; // 800AC1A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC1A4
  c->lr=0x800AC1ACu; f_800ACBA4(c); // 800AC1A8
L_800AC1AC:;
  c->r[0]=rotl(c->r[30],0)&0x00100000u; cr0(c,c->r[0]); // 800AC1AC
  if (crb(c,2)) { goto L_800AC1C0; } // 800AC1B0
  c->r[3]=c->r[31]+0x00000198u; // 800AC1B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC1B8
  c->lr=0x800AC1C0u; f_800ACBA4(c); // 800AC1BC
L_800AC1C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800AC1C0
  c->lr=0x800AC1C8u; f_800A9574(c); // 800AC1C4
  c->r[0]=R32(c->r[1]+0x00000084u); // 800AC1C8
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800AC1CC
  c->r[30]=R32(c->r[1]+0x00000078u); // 800AC1D0
  c->r[29]=R32(c->r[1]+0x00000074u); // 800AC1D4
  c->lr=c->r[0]; // 800AC1D8
  c->r[1]=c->r[1]+0x00000080u; // 800AC1DC
  return; // 800AC1E0
}

// __OSCacheInit
void f_800AC1E4(Ctx* __restrict c) {
  trace_call(0x800AC1E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC1E4
  c->r[0]=c->lr; // 800AC1E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AC1EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AC1F0
  c->r[31]=0u+0x80260000u; // 800AC1F4
  c->r[31]=c->r[31]+0x00006270u; // 800AC1F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AC1FC
  c->lr=0x800AC204u; f_800A94B0(c); // 800AC200
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 800AC204
  if (!crb(c,2)) { goto L_800AC21C; } // 800AC208
  c->lr=0x800AC210u; f_800ABE54(c); // 800AC20C
  c->r[3]=c->r[31]+0x000001B4u; // 800AC210
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC214
  c->lr=0x800AC21Cu; f_800A969C(c); // 800AC218
L_800AC21C:;
  c->lr=0x800AC220u; f_800A94B0(c); // 800AC21C
  c->r[0]=rotl(c->r[3],0)&0x00004000u; cr0(c,c->r[0]); // 800AC220
  if (!crb(c,2)) { goto L_800AC238; } // 800AC224
  c->lr=0x800AC22Cu; f_800ABCEC(c); // 800AC228
  c->r[3]=c->r[31]+0x000001D0u; // 800AC22C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC230
  c->lr=0x800AC238u; f_800A969C(c); // 800AC234
L_800AC238:;
  c->lr=0x800AC23Cu; f_800A94C0(c); // 800AC238
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 800AC23C
  if (!crb(c,2)) { goto L_800AC2E8; } // 800AC240
  c->lr=0x800AC248u; f_800A94A0(c); // 800AC244
  c->r[30]=c->r[3]|c->r[3]; // 800AC248
  /* sync */ // 800AC24C
  c->r[3]=0u+0x00000030u; // 800AC250
  c->lr=0x800AC258u; f_800A94A8(c); // 800AC254
  /* sync */ // 800AC258
  /* sync */ // 800AC25C
  c->lr=0x800AC264u; f_800A94C0(c); // 800AC260
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800AC264
  c->lr=0x800AC26Cu; f_800A94C8(c); // 800AC268
  /* sync */ // 800AC26C
  /* sync */ // 800AC270
  c->lr=0x800AC278u; f_800A94C0(c); // 800AC274
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800AC278
  c->lr=0x800AC280u; f_800A94C8(c); // 800AC27C
  /* sync */ // 800AC280
  c->lr=0x800AC288u; f_800A94C0(c); // 800AC284
  c->r[3]=c->r[3]|0x00200000u; // 800AC288
  c->lr=0x800AC290u; f_800A94C8(c); // 800AC28C
L_800AC290:;
  c->lr=0x800AC294u; f_800A94C0(c); // 800AC290
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800AC294
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC290; } // 800AC298
  c->lr=0x800AC2A0u; f_800A94C0(c); // 800AC29C
  c->r[3]=rotl(c->r[3],0)&0xFFDFFFFFu; // 800AC2A0
  c->lr=0x800AC2A8u; f_800A94C8(c); // 800AC2A4
  goto L_800AC2B8; // 800AC2A8
L_800AC2AC:;
  c->r[3]=c->r[31]+0x00000000u; // 800AC2AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC2B0
  c->lr=0x800AC2B8u; f_800A969C(c); // 800AC2B4
L_800AC2B8:;
  c->lr=0x800AC2BCu; f_800A94C0(c); // 800AC2B8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800AC2BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC2AC; } // 800AC2C0
  c->r[3]=c->r[30]|c->r[30]; // 800AC2C4
  c->lr=0x800AC2CCu; f_800A94A8(c); // 800AC2C8
  c->lr=0x800AC2D0u; f_800A94C0(c); // 800AC2CC
  c->r[0]=c->r[3]|0x80000000u; // 800AC2D0
  c->r[3]=rotl(c->r[0],0)&0xFFDFFFFFu; // 800AC2D4
  c->lr=0x800AC2DCu; f_800A94C8(c); // 800AC2D8
  c->r[3]=c->r[31]+0x000001ECu; // 800AC2DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC2E0
  c->lr=0x800AC2E8u; f_800A969C(c); // 800AC2E4
L_800AC2E8:;
  c->r[4]=0u+0x800B0000u; // 800AC2E8
  c->r[3]=0u+0x00000001u; // 800AC2EC
  c->r[4]=c->r[4]+0xFFFFC09Cu; // 800AC2F0
  c->lr=0x800AC2F8u; f_800ACD60(c); // 800AC2F4
  c->r[3]=c->r[31]+0x00000204u; // 800AC2F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC2FC
  c->lr=0x800AC304u; f_800A969C(c); // 800AC300
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AC304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AC308
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AC30C
  c->lr=c->r[0]; // 800AC310
  c->r[1]=c->r[1]+0x00000010u; // 800AC314
  return; // 800AC318
}

// __OSLoadFPUContext
void f_800AC31C(Ctx* __restrict c) {
  trace_call(0x800AC31Cu);
  c->r[5]=R16(c->r[4]+0x000001A2u); // 800AC31C
  c->r[5]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[5]); // 800AC320
  if (crb(c,2)) { goto L_800AC43C; } // 800AC324
  {uint32_t ea=c->r[4]+0x00000190u; c->f[0]=RF64(ea);} // 800AC328
  c->fpscr=(uint32_t)d2u(c->f[0]); // 800AC32C
  c->r[5]=mfspr(c,920); // 800AC330
  c->r[5]=rotl(c->r[5],3)&0x00000001u; cr0(c,c->r[5]); // 800AC334
  if (crb(c,2)) { goto L_800AC3BC; } // 800AC338
  {uint32_t ea=c->r[4]+0x000001C8u; psq_load(c,0,ea,0,0);} // 800AC33C
  {uint32_t ea=c->r[4]+0x000001D0u; psq_load(c,1,ea,0,0);} // 800AC340
  {uint32_t ea=c->r[4]+0x000001D8u; psq_load(c,2,ea,0,0);} // 800AC344
  {uint32_t ea=c->r[4]+0x000001E0u; psq_load(c,3,ea,0,0);} // 800AC348
  {uint32_t ea=c->r[4]+0x000001E8u; psq_load(c,4,ea,0,0);} // 800AC34C
  {uint32_t ea=c->r[4]+0x000001F0u; psq_load(c,5,ea,0,0);} // 800AC350
  {uint32_t ea=c->r[4]+0x000001F8u; psq_load(c,6,ea,0,0);} // 800AC354
  {uint32_t ea=c->r[4]+0x00000200u; psq_load(c,7,ea,0,0);} // 800AC358
  {uint32_t ea=c->r[4]+0x00000208u; psq_load(c,8,ea,0,0);} // 800AC35C
  {uint32_t ea=c->r[4]+0x00000210u; psq_load(c,9,ea,0,0);} // 800AC360
  {uint32_t ea=c->r[4]+0x00000218u; psq_load(c,10,ea,0,0);} // 800AC364
  {uint32_t ea=c->r[4]+0x00000220u; psq_load(c,11,ea,0,0);} // 800AC368
  {uint32_t ea=c->r[4]+0x00000228u; psq_load(c,12,ea,0,0);} // 800AC36C
  {uint32_t ea=c->r[4]+0x00000230u; psq_load(c,13,ea,0,0);} // 800AC370
  {uint32_t ea=c->r[4]+0x00000238u; psq_load(c,14,ea,0,0);} // 800AC374
  {uint32_t ea=c->r[4]+0x00000240u; psq_load(c,15,ea,0,0);} // 800AC378
  {uint32_t ea=c->r[4]+0x00000248u; psq_load(c,16,ea,0,0);} // 800AC37C
  {uint32_t ea=c->r[4]+0x00000250u; psq_load(c,17,ea,0,0);} // 800AC380
  {uint32_t ea=c->r[4]+0x00000258u; psq_load(c,18,ea,0,0);} // 800AC384
  {uint32_t ea=c->r[4]+0x00000260u; psq_load(c,19,ea,0,0);} // 800AC388
  {uint32_t ea=c->r[4]+0x00000268u; psq_load(c,20,ea,0,0);} // 800AC38C
  {uint32_t ea=c->r[4]+0x00000270u; psq_load(c,21,ea,0,0);} // 800AC390
  {uint32_t ea=c->r[4]+0x00000278u; psq_load(c,22,ea,0,0);} // 800AC394
  {uint32_t ea=c->r[4]+0x00000280u; psq_load(c,23,ea,0,0);} // 800AC398
  {uint32_t ea=c->r[4]+0x00000288u; psq_load(c,24,ea,0,0);} // 800AC39C
  {uint32_t ea=c->r[4]+0x00000290u; psq_load(c,25,ea,0,0);} // 800AC3A0
  {uint32_t ea=c->r[4]+0x00000298u; psq_load(c,26,ea,0,0);} // 800AC3A4
  {uint32_t ea=c->r[4]+0x000002A0u; psq_load(c,27,ea,0,0);} // 800AC3A8
  {uint32_t ea=c->r[4]+0x000002A8u; psq_load(c,28,ea,0,0);} // 800AC3AC
  {uint32_t ea=c->r[4]+0x000002B0u; psq_load(c,29,ea,0,0);} // 800AC3B0
  {uint32_t ea=c->r[4]+0x000002B8u; psq_load(c,30,ea,0,0);} // 800AC3B4
  {uint32_t ea=c->r[4]+0x000002C0u; psq_load(c,31,ea,0,0);} // 800AC3B8
L_800AC3BC:;
  {uint32_t ea=c->r[4]+0x00000090u; c->f[0]=RF64(ea);} // 800AC3BC
  {uint32_t ea=c->r[4]+0x00000098u; c->f[1]=RF64(ea);} // 800AC3C0
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[2]=RF64(ea);} // 800AC3C4
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[3]=RF64(ea);} // 800AC3C8
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[4]=RF64(ea);} // 800AC3CC
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[5]=RF64(ea);} // 800AC3D0
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[6]=RF64(ea);} // 800AC3D4
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[7]=RF64(ea);} // 800AC3D8
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[8]=RF64(ea);} // 800AC3DC
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[9]=RF64(ea);} // 800AC3E0
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[10]=RF64(ea);} // 800AC3E4
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[11]=RF64(ea);} // 800AC3E8
  {uint32_t ea=c->r[4]+0x000000F0u; c->f[12]=RF64(ea);} // 800AC3EC
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[13]=RF64(ea);} // 800AC3F0
  {uint32_t ea=c->r[4]+0x00000100u; c->f[14]=RF64(ea);} // 800AC3F4
  {uint32_t ea=c->r[4]+0x00000108u; c->f[15]=RF64(ea);} // 800AC3F8
  {uint32_t ea=c->r[4]+0x00000110u; c->f[16]=RF64(ea);} // 800AC3FC
  {uint32_t ea=c->r[4]+0x00000118u; c->f[17]=RF64(ea);} // 800AC400
  {uint32_t ea=c->r[4]+0x00000120u; c->f[18]=RF64(ea);} // 800AC404
  {uint32_t ea=c->r[4]+0x00000128u; c->f[19]=RF64(ea);} // 800AC408
  {uint32_t ea=c->r[4]+0x00000130u; c->f[20]=RF64(ea);} // 800AC40C
  {uint32_t ea=c->r[4]+0x00000138u; c->f[21]=RF64(ea);} // 800AC410
  {uint32_t ea=c->r[4]+0x00000140u; c->f[22]=RF64(ea);} // 800AC414
  {uint32_t ea=c->r[4]+0x00000148u; c->f[23]=RF64(ea);} // 800AC418
  {uint32_t ea=c->r[4]+0x00000150u; c->f[24]=RF64(ea);} // 800AC41C
  {uint32_t ea=c->r[4]+0x00000158u; c->f[25]=RF64(ea);} // 800AC420
  {uint32_t ea=c->r[4]+0x00000160u; c->f[26]=RF64(ea);} // 800AC424
  {uint32_t ea=c->r[4]+0x00000168u; c->f[27]=RF64(ea);} // 800AC428
  {uint32_t ea=c->r[4]+0x00000170u; c->f[28]=RF64(ea);} // 800AC42C
  {uint32_t ea=c->r[4]+0x00000178u; c->f[29]=RF64(ea);} // 800AC430
  {uint32_t ea=c->r[4]+0x00000180u; c->f[30]=RF64(ea);} // 800AC434
  {uint32_t ea=c->r[4]+0x00000188u; c->f[31]=RF64(ea);} // 800AC438
L_800AC43C:;
  return; // 800AC43C
}

// __OSSaveFPUContext
void f_800AC440(Ctx* __restrict c) {
  trace_call(0x800AC440u);
  c->r[3]=R16(c->r[5]+0x000001A2u); // 800AC440
  c->r[3]=c->r[3]|0x00000001u; // 800AC444
  W16(c->r[5]+0x000001A2u,c->r[3]); // 800AC448
  {uint32_t ea=c->r[5]+0x00000090u; WF64(ea,c->f[0]);} // 800AC44C
  {uint32_t ea=c->r[5]+0x00000098u; WF64(ea,c->f[1]);} // 800AC450
  {uint32_t ea=c->r[5]+0x000000A0u; WF64(ea,c->f[2]);} // 800AC454
  {uint32_t ea=c->r[5]+0x000000A8u; WF64(ea,c->f[3]);} // 800AC458
  {uint32_t ea=c->r[5]+0x000000B0u; WF64(ea,c->f[4]);} // 800AC45C
  {uint32_t ea=c->r[5]+0x000000B8u; WF64(ea,c->f[5]);} // 800AC460
  {uint32_t ea=c->r[5]+0x000000C0u; WF64(ea,c->f[6]);} // 800AC464
  {uint32_t ea=c->r[5]+0x000000C8u; WF64(ea,c->f[7]);} // 800AC468
  {uint32_t ea=c->r[5]+0x000000D0u; WF64(ea,c->f[8]);} // 800AC46C
  {uint32_t ea=c->r[5]+0x000000D8u; WF64(ea,c->f[9]);} // 800AC470
  {uint32_t ea=c->r[5]+0x000000E0u; WF64(ea,c->f[10]);} // 800AC474
  {uint32_t ea=c->r[5]+0x000000E8u; WF64(ea,c->f[11]);} // 800AC478
  {uint32_t ea=c->r[5]+0x000000F0u; WF64(ea,c->f[12]);} // 800AC47C
  {uint32_t ea=c->r[5]+0x000000F8u; WF64(ea,c->f[13]);} // 800AC480
  {uint32_t ea=c->r[5]+0x00000100u; WF64(ea,c->f[14]);} // 800AC484
  {uint32_t ea=c->r[5]+0x00000108u; WF64(ea,c->f[15]);} // 800AC488
  {uint32_t ea=c->r[5]+0x00000110u; WF64(ea,c->f[16]);} // 800AC48C
  {uint32_t ea=c->r[5]+0x00000118u; WF64(ea,c->f[17]);} // 800AC490
  {uint32_t ea=c->r[5]+0x00000120u; WF64(ea,c->f[18]);} // 800AC494
  {uint32_t ea=c->r[5]+0x00000128u; WF64(ea,c->f[19]);} // 800AC498
  {uint32_t ea=c->r[5]+0x00000130u; WF64(ea,c->f[20]);} // 800AC49C
  {uint32_t ea=c->r[5]+0x00000138u; WF64(ea,c->f[21]);} // 800AC4A0
  {uint32_t ea=c->r[5]+0x00000140u; WF64(ea,c->f[22]);} // 800AC4A4
  {uint32_t ea=c->r[5]+0x00000148u; WF64(ea,c->f[23]);} // 800AC4A8
  {uint32_t ea=c->r[5]+0x00000150u; WF64(ea,c->f[24]);} // 800AC4AC
  {uint32_t ea=c->r[5]+0x00000158u; WF64(ea,c->f[25]);} // 800AC4B0
  {uint32_t ea=c->r[5]+0x00000160u; WF64(ea,c->f[26]);} // 800AC4B4
  {uint32_t ea=c->r[5]+0x00000168u; WF64(ea,c->f[27]);} // 800AC4B8
  {uint32_t ea=c->r[5]+0x00000170u; WF64(ea,c->f[28]);} // 800AC4BC
  {uint32_t ea=c->r[5]+0x00000178u; WF64(ea,c->f[29]);} // 800AC4C0
  {uint32_t ea=c->r[5]+0x00000180u; WF64(ea,c->f[30]);} // 800AC4C4
  {uint32_t ea=c->r[5]+0x00000188u; WF64(ea,c->f[31]);} // 800AC4C8
  c->f[0]=u2d((uint64_t)c->fpscr); // 800AC4CC
  {uint32_t ea=c->r[5]+0x00000190u; WF64(ea,c->f[0]);} // 800AC4D0
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=RF64(ea);} // 800AC4D4
  c->r[3]=mfspr(c,920); // 800AC4D8
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 800AC4DC
  if (crb(c,2)) { goto L_800AC564; } // 800AC4E0
  {uint32_t ea=c->r[5]+0x000001C8u; psq_store(c,0,ea,0,0);} // 800AC4E4
  {uint32_t ea=c->r[5]+0x000001D0u; psq_store(c,1,ea,0,0);} // 800AC4E8
  {uint32_t ea=c->r[5]+0x000001D8u; psq_store(c,2,ea,0,0);} // 800AC4EC
  {uint32_t ea=c->r[5]+0x000001E0u; psq_store(c,3,ea,0,0);} // 800AC4F0
  {uint32_t ea=c->r[5]+0x000001E8u; psq_store(c,4,ea,0,0);} // 800AC4F4
  {uint32_t ea=c->r[5]+0x000001F0u; psq_store(c,5,ea,0,0);} // 800AC4F8
  {uint32_t ea=c->r[5]+0x000001F8u; psq_store(c,6,ea,0,0);} // 800AC4FC
  {uint32_t ea=c->r[5]+0x00000200u; psq_store(c,7,ea,0,0);} // 800AC500
  {uint32_t ea=c->r[5]+0x00000208u; psq_store(c,8,ea,0,0);} // 800AC504
  {uint32_t ea=c->r[5]+0x00000210u; psq_store(c,9,ea,0,0);} // 800AC508
  {uint32_t ea=c->r[5]+0x00000218u; psq_store(c,10,ea,0,0);} // 800AC50C
  {uint32_t ea=c->r[5]+0x00000220u; psq_store(c,11,ea,0,0);} // 800AC510
  {uint32_t ea=c->r[5]+0x00000228u; psq_store(c,12,ea,0,0);} // 800AC514
  {uint32_t ea=c->r[5]+0x00000230u; psq_store(c,13,ea,0,0);} // 800AC518
  {uint32_t ea=c->r[5]+0x00000238u; psq_store(c,14,ea,0,0);} // 800AC51C
  {uint32_t ea=c->r[5]+0x00000240u; psq_store(c,15,ea,0,0);} // 800AC520
  {uint32_t ea=c->r[5]+0x00000248u; psq_store(c,16,ea,0,0);} // 800AC524
  {uint32_t ea=c->r[5]+0x00000250u; psq_store(c,17,ea,0,0);} // 800AC528
  {uint32_t ea=c->r[5]+0x00000258u; psq_store(c,18,ea,0,0);} // 800AC52C
  {uint32_t ea=c->r[5]+0x00000260u; psq_store(c,19,ea,0,0);} // 800AC530
  {uint32_t ea=c->r[5]+0x00000268u; psq_store(c,20,ea,0,0);} // 800AC534
  {uint32_t ea=c->r[5]+0x00000270u; psq_store(c,21,ea,0,0);} // 800AC538
  {uint32_t ea=c->r[5]+0x00000278u; psq_store(c,22,ea,0,0);} // 800AC53C
  {uint32_t ea=c->r[5]+0x00000280u; psq_store(c,23,ea,0,0);} // 800AC540
  {uint32_t ea=c->r[5]+0x00000288u; psq_store(c,24,ea,0,0);} // 800AC544
  {uint32_t ea=c->r[5]+0x00000290u; psq_store(c,25,ea,0,0);} // 800AC548
  {uint32_t ea=c->r[5]+0x00000298u; psq_store(c,26,ea,0,0);} // 800AC54C
  {uint32_t ea=c->r[5]+0x000002A0u; psq_store(c,27,ea,0,0);} // 800AC550
  {uint32_t ea=c->r[5]+0x000002A8u; psq_store(c,28,ea,0,0);} // 800AC554
  {uint32_t ea=c->r[5]+0x000002B0u; psq_store(c,29,ea,0,0);} // 800AC558
  {uint32_t ea=c->r[5]+0x000002B8u; psq_store(c,30,ea,0,0);} // 800AC55C
  {uint32_t ea=c->r[5]+0x000002C0u; psq_store(c,31,ea,0,0);} // 800AC560
L_800AC564:;
  return; // 800AC564
}

// OSSaveFPUContext
void f_800AC568(Ctx* __restrict c) {
  trace_call(0x800AC568u);
  c->r[5]=c->r[3]+0x00000000u; // 800AC568
  f_800AC440(c); return; // 800AC56C
}

// OSSetCurrentContext
void f_800AC570(Ctx* __restrict c) {
  trace_call(0x800AC570u);
  c->r[4]=0u+0x80000000u; // 800AC570
  W32(c->r[4]+0x000000D4u,c->r[3]); // 800AC574
  c->r[5]=rotl(c->r[3],0)&0x3FFFFFFFu; // 800AC578
  W32(c->r[4]+0x000000C0u,c->r[5]); // 800AC57C
  c->r[5]=R32(c->r[4]+0x000000D8u); // 800AC580
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 800AC584
  if (!crb(c,2)) { goto L_800AC5A8; } // 800AC588
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 800AC58C
  c->r[6]=c->r[6]|0x00002000u; // 800AC590
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 800AC594
  c->r[6]=c->msr; // 800AC598
  c->r[6]=c->r[6]|0x00000002u; // 800AC59C
  c->msr=c->r[6]; // 800AC5A0
  return; // 800AC5A4
L_800AC5A8:;
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 800AC5A8
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 800AC5AC
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 800AC5B0
  c->r[6]=c->msr; // 800AC5B4
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 800AC5B8
  c->r[6]=c->r[6]|0x00000002u; // 800AC5BC
  c->msr=c->r[6]; // 800AC5C0
  /* isync */ // 800AC5C4
  return; // 800AC5C8
}

// OSGetCurrentContext
void f_800AC5CC(Ctx* __restrict c) {
  trace_call(0x800AC5CCu);
  c->r[3]=0u+0x80000000u; // 800AC5CC
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800AC5D0
  return; // 800AC5D4
}

void hle_OSSaveContext(Ctx*);
// OSSaveContext
void f_800AC5D8(Ctx* __restrict c) {
  hle_OSSaveContext(c);
}

void hle_OSLoadContext(Ctx*);
// OSLoadContext
void f_800AC658(Ctx* __restrict c) {
  hle_OSLoadContext(c);
}

// OSGetStackPointer
void f_800AC730(Ctx* __restrict c) {
  trace_call(0x800AC730u);
  c->r[3]=c->r[1]|c->r[1]; // 800AC730
  return; // 800AC734
}

void hle_OSSwitchFiber(Ctx*);
// OSSwitchFiber
void f_800AC738(Ctx* __restrict c) {
  hle_OSSwitchFiber(c);
}

void hle_OSSwitchFiberEx(Ctx*);
// OSSwitchFiberEx
void f_800AC768(Ctx* __restrict c) {
  hle_OSSwitchFiberEx(c);
}

// OSClearContext
void f_800AC798(Ctx* __restrict c) {
  trace_call(0x800AC798u);
  c->r[5]=0u+0x00000000u; // 800AC798
  c->r[4]=0u+0x80000000u; // 800AC79C
  W16(c->r[3]+0x000001A0u,c->r[5]); // 800AC7A0
  W16(c->r[3]+0x000001A2u,c->r[5]); // 800AC7A4
  c->r[0]=R32(c->r[4]+0x000000D8u); // 800AC7A8
  cmpu(c,0,c->r[3],c->r[0]); // 800AC7AC
  if (!crb(c,2)) return; // 800AC7B0
  W32(c->r[4]+0x000000D8u,c->r[5]); // 800AC7B4
  return; // 800AC7B8
}

// OSInitContext
void f_800AC7BC(Ctx* __restrict c) {
  trace_call(0x800AC7BCu);
  W32(c->r[3]+0x00000198u,c->r[4]); // 800AC7BC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800AC7C0
  c->r[11]=0u+0x00000000u; // 800AC7C4
  c->r[11]=c->r[11]|0x00009032u; // 800AC7C8
  W32(c->r[3]+0x0000019Cu,c->r[11]); // 800AC7CC
  c->r[0]=0u+0x00000000u; // 800AC7D0
  W32(c->r[3]+0x00000080u,c->r[0]); // 800AC7D4
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 800AC7D8
  W32(c->r[3]+0x00000008u,c->r[2]); // 800AC7DC
  W32(c->r[3]+0x00000034u,c->r[13]); // 800AC7E0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800AC7E4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800AC7E8
  W32(c->r[3]+0x00000014u,c->r[0]); // 800AC7EC
  W32(c->r[3]+0x00000018u,c->r[0]); // 800AC7F0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800AC7F4
  W32(c->r[3]+0x00000020u,c->r[0]); // 800AC7F8
  W32(c->r[3]+0x00000024u,c->r[0]); // 800AC7FC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800AC800
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800AC804
  W32(c->r[3]+0x00000030u,c->r[0]); // 800AC808
  W32(c->r[3]+0x00000038u,c->r[0]); // 800AC80C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800AC810
  W32(c->r[3]+0x00000040u,c->r[0]); // 800AC814
  W32(c->r[3]+0x00000044u,c->r[0]); // 800AC818
  W32(c->r[3]+0x00000048u,c->r[0]); // 800AC81C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800AC820
  W32(c->r[3]+0x00000050u,c->r[0]); // 800AC824
  W32(c->r[3]+0x00000054u,c->r[0]); // 800AC828
  W32(c->r[3]+0x00000058u,c->r[0]); // 800AC82C
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800AC830
  W32(c->r[3]+0x00000060u,c->r[0]); // 800AC834
  W32(c->r[3]+0x00000064u,c->r[0]); // 800AC838
  W32(c->r[3]+0x00000068u,c->r[0]); // 800AC83C
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800AC840
  W32(c->r[3]+0x00000070u,c->r[0]); // 800AC844
  W32(c->r[3]+0x00000074u,c->r[0]); // 800AC848
  W32(c->r[3]+0x00000078u,c->r[0]); // 800AC84C
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800AC850
  W32(c->r[3]+0x000001A4u,c->r[0]); // 800AC854
  W32(c->r[3]+0x000001A8u,c->r[0]); // 800AC858
  W32(c->r[3]+0x000001ACu,c->r[0]); // 800AC85C
  W32(c->r[3]+0x000001B0u,c->r[0]); // 800AC860
  W32(c->r[3]+0x000001B4u,c->r[0]); // 800AC864
  W32(c->r[3]+0x000001B8u,c->r[0]); // 800AC868
  W32(c->r[3]+0x000001BCu,c->r[0]); // 800AC86C
  W32(c->r[3]+0x000001C0u,c->r[0]); // 800AC870
  f_800AC798(c); return; // 800AC874
}

// OSDumpContext
void f_800AC878(Ctx* __restrict c) {
  trace_call(0x800AC878u);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC878
  c->r[0]=c->lr; // 800AC87C
  W32(c->r[1]+0x000002F4u,c->r[0]); // 800AC880
  c->r[11]=c->r[1]+0x000002F0u; // 800AC884
  c->lr=0x800AC88Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AC888
  c->r[28]=0u+0x80260000u; // 800AC88C
  c->r[30]=c->r[3]|c->r[3]; // 800AC890
  c->r[28]=c->r[28]+0x000064A8u; // 800AC894
  c->r[4]=c->r[30]|c->r[30]; // 800AC898
  c->r[3]=c->r[28]+0x00000000u; // 800AC89C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC8A0
  c->lr=0x800AC8A8u; f_800ACBA4(c); // 800AC8A4
  c->r[26]=c->r[30]|c->r[30]; // 800AC8A8
  c->r[25]=0u+0x00000000u; // 800AC8AC
L_800AC8B0:;
  c->r[8]=R32(c->r[26]+0x00000040u); // 800AC8B0
  c->r[4]=c->r[25]|c->r[25]; // 800AC8B4
  c->r[5]=R32(c->r[26]+0x00000000u); // 800AC8B8
  c->r[3]=c->r[28]+0x00000048u; // 800AC8BC
  c->r[9]=c->r[8]|c->r[8]; // 800AC8C0
  c->r[7]=c->r[25]+0x00000010u; // 800AC8C4
  c->r[6]=c->r[5]|c->r[5]; // 800AC8C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC8CC
  c->lr=0x800AC8D4u; f_800ACBA4(c); // 800AC8D0
  c->r[25]=c->r[25]+0x00000001u; // 800AC8D4
  c->r[26]=c->r[26]+0x00000004u; // 800AC8D8
  cmpu(c,0,c->r[25],0x00000010u); // 800AC8DC
  if (crb(c,0)) { IRQCHK(c); goto L_800AC8B0; } // 800AC8E0
  c->r[4]=R32(c->r[30]+0x00000084u); // 800AC8E4
  c->r[3]=c->r[28]+0x00000078u; // 800AC8E8
  c->r[5]=R32(c->r[30]+0x00000080u); // 800AC8EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC8F0
  c->lr=0x800AC8F8u; f_800ACBA4(c); // 800AC8F4
  c->r[4]=R32(c->r[30]+0x00000198u); // 800AC8F8
  c->r[3]=c->r[28]+0x000000A8u; // 800AC8FC
  c->r[5]=R32(c->r[30]+0x0000019Cu); // 800AC900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC904
  c->lr=0x800AC90Cu; f_800ACBA4(c); // 800AC908
  c->r[3]=c->r[28]+0x000000D8u; // 800AC90C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC910
  c->lr=0x800AC918u; f_800ACBA4(c); // 800AC914
  c->r[26]=c->r[30]|c->r[30]; // 800AC918
  c->r[25]=0u+0x00000000u; // 800AC91C
L_800AC920:;
  c->r[5]=R32(c->r[26]+0x000001A4u); // 800AC920
  c->r[4]=c->r[25]|c->r[25]; // 800AC924
  c->r[7]=R32(c->r[26]+0x000001B4u); // 800AC928
  c->r[3]=c->r[28]+0x000000ECu; // 800AC92C
  c->r[6]=c->r[25]+0x00000004u; // 800AC930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC934
  c->lr=0x800AC93Cu; f_800ACBA4(c); // 800AC938
  c->r[25]=c->r[25]+0x00000001u; // 800AC93C
  c->r[26]=c->r[26]+0x00000004u; // 800AC940
  cmpu(c,0,c->r[25],0x00000004u); // 800AC944
  if (crb(c,0)) { IRQCHK(c); goto L_800AC920; } // 800AC948
  c->r[0]=R16(c->r[30]+0x000001A2u); // 800AC94C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800AC950
  if (crb(c,2)) { goto L_800ACA6C; } // 800AC954
  c->lr=0x800AC95Cu; f_800B087C(c); // 800AC958
  c->r[6]=0u+0x80000000u; // 800AC95C
  c->r[5]=0u+0x00000000u; // 800AC960
  c->r[27]=R32(c->r[6]+0x000000D4u); // 800AC964
  c->r[4]=c->r[1]+0x00000008u; // 800AC968
  c->r[31]=c->r[3]|c->r[3]; // 800AC96C
  W16(c->r[1]+0x000001A8u,c->r[5]); // 800AC970
  W16(c->r[1]+0x000001AAu,c->r[5]); // 800AC974
  c->r[0]=R32(c->r[6]+0x000000D8u); // 800AC978
  cmpu(c,0,c->r[4],c->r[0]); // 800AC97C
  if (!crb(c,2)) { goto L_800AC988; } // 800AC980
  W32(c->r[6]+0x000000D8u,c->r[5]); // 800AC984
L_800AC988:;
  c->r[3]=c->r[1]+0x00000008u; // 800AC988
  c->lr=0x800AC990u; f_800AC570(c); // 800AC98C
  c->r[3]=c->r[28]+0x00000110u; // 800AC990
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC994
  c->lr=0x800AC99Cu; f_800ACBA4(c); // 800AC998
  c->r[26]=c->r[30]|c->r[30]; // 800AC99C
  c->r[25]=0u+0x00000000u; // 800AC9A0
L_800AC9A4:;
  {uint32_t ea=c->r[26]+0x00000098u; c->f[1]=RF64(ea);} // 800AC9A4
  c->lr=0x800AC9ACu; f_800D48EC(c); // 800AC9A8
  {uint32_t ea=c->r[26]+0x00000090u; c->f[1]=RF64(ea);} // 800AC9AC
  c->r[29]=c->r[3]|c->r[3]; // 800AC9B0
  c->lr=0x800AC9B8u; f_800D48EC(c); // 800AC9B4
  c->r[5]=c->r[3]|c->r[3]; // 800AC9B8
  c->r[4]=c->r[25]|c->r[25]; // 800AC9BC
  c->r[7]=c->r[29]|c->r[29]; // 800AC9C0
  c->r[3]=c->r[28]+0x00000124u; // 800AC9C4
  c->r[6]=c->r[25]+0x00000001u; // 800AC9C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC9CC
  c->lr=0x800AC9D4u; f_800ACBA4(c); // 800AC9D0
  c->r[25]=c->r[25]+0x00000002u; // 800AC9D4
  c->r[26]=c->r[26]+0x00000010u; // 800AC9D8
  cmpu(c,0,c->r[25],0x00000020u); // 800AC9DC
  if (crb(c,0)) { IRQCHK(c); goto L_800AC9A4; } // 800AC9E0
  c->r[3]=c->r[28]+0x00000140u; // 800AC9E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AC9E8
  c->lr=0x800AC9F0u; f_800ACBA4(c); // 800AC9EC
  c->r[26]=c->r[30]|c->r[30]; // 800AC9F0
  c->r[25]=0u+0x00000000u; // 800AC9F4
L_800AC9F8:;
  {uint32_t ea=c->r[26]+0x000001D0u; c->f[1]=RF64(ea);} // 800AC9F8
  c->lr=0x800ACA00u; f_800D48EC(c); // 800AC9FC
  {uint32_t ea=c->r[26]+0x000001C8u; c->f[1]=RF64(ea);} // 800ACA00
  c->r[29]=c->r[3]|c->r[3]; // 800ACA04
  c->lr=0x800ACA0Cu; f_800D48EC(c); // 800ACA08
  c->r[5]=c->r[3]|c->r[3]; // 800ACA0C
  c->r[4]=c->r[25]|c->r[25]; // 800ACA10
  c->r[7]=c->r[29]|c->r[29]; // 800ACA14
  c->r[3]=c->r[28]+0x00000154u; // 800ACA18
  c->r[6]=c->r[25]+0x00000001u; // 800ACA1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ACA20
  c->lr=0x800ACA28u; f_800ACBA4(c); // 800ACA24
  c->r[25]=c->r[25]+0x00000002u; // 800ACA28
  c->r[26]=c->r[26]+0x00000010u; // 800ACA2C
  cmpu(c,0,c->r[25],0x00000020u); // 800ACA30
  if (crb(c,0)) { IRQCHK(c); goto L_800AC9F8; } // 800ACA34
  c->r[5]=0u+0x00000000u; // 800ACA38
  c->r[3]=0u+0x80000000u; // 800ACA3C
  W16(c->r[1]+0x000001A8u,c->r[5]); // 800ACA40
  c->r[4]=c->r[1]+0x00000008u; // 800ACA44
  W16(c->r[1]+0x000001AAu,c->r[5]); // 800ACA48
  c->r[0]=R32(c->r[3]+0x000000D8u); // 800ACA4C
  cmpu(c,0,c->r[4],c->r[0]); // 800ACA50
  if (!crb(c,2)) { goto L_800ACA5C; } // 800ACA54
  W32(c->r[3]+0x000000D8u,c->r[5]); // 800ACA58
L_800ACA5C:;
  c->r[3]=c->r[27]|c->r[27]; // 800ACA5C
  c->lr=0x800ACA64u; f_800AC570(c); // 800ACA60
  c->r[3]=c->r[31]|c->r[31]; // 800ACA64
  c->lr=0x800ACA6Cu; f_800B08A4(c); // 800ACA68
L_800ACA6C:;
  c->r[3]=c->r[28]+0x00000174u; // 800ACA6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ACA70
  c->lr=0x800ACA78u; f_800ACBA4(c); // 800ACA74
  c->r[25]=R32(c->r[30]+0x00000004u); // 800ACA78
  c->r[26]=0u+0x00000000u; // 800ACA7C
  goto L_800ACAA0; // 800ACA80
L_800ACA84:;
  c->r[5]=R32(c->r[25]+0x00000000u); // 800ACA84
  c->r[4]=c->r[25]|c->r[25]; // 800ACA88
  c->r[6]=R32(c->r[25]+0x00000004u); // 800ACA8C
  c->r[3]=c->r[28]+0x0000019Cu; // 800ACA90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ACA94
  c->lr=0x800ACA9Cu; f_800ACBA4(c); // 800ACA98
  c->r[25]=R32(c->r[25]+0x00000000u); // 800ACA9C
L_800ACAA0:;
  cmps(c,0,(int32_t)c->r[25],0); // 800ACAA0
  if (crb(c,2)) { goto L_800ACAC0; } // 800ACAA4
  c->r[0]=c->r[25]+0x00010000u; // 800ACAA8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800ACAAC
  if (crb(c,2)) { goto L_800ACAC0; } // 800ACAB0
  cmpu(c,0,c->r[26],0x00000010u); // 800ACAB4
  c->r[26]=c->r[26]+0x00000001u; // 800ACAB8
  if (crb(c,0)) { IRQCHK(c); goto L_800ACA84; } // 800ACABC
L_800ACAC0:;
  c->r[11]=c->r[1]+0x000002F0u; // 800ACAC0
  c->lr=0x800ACAC8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ACAC4
  c->r[0]=R32(c->r[1]+0x000002F4u); // 800ACAC8
  c->lr=c->r[0]; // 800ACACC
  c->r[1]=c->r[1]+0x000002F0u; // 800ACAD0
  return; // 800ACAD4
}

// OSSwitchFPUContext
void f_800ACAD8(Ctx* __restrict c) {
  trace_call(0x800ACAD8u);
  c->r[5]=c->msr; // 800ACAD8
  c->r[5]=c->r[5]|0x00002000u; // 800ACADC
  c->msr=c->r[5]; // 800ACAE0
  /* isync */ // 800ACAE4
  c->r[5]=R32(c->r[4]+0x0000019Cu); // 800ACAE8
  c->r[5]=c->r[5]|0x00002000u; // 800ACAEC
  mtspr(c,27,c->r[5]); // 800ACAF0
  c->r[3]=0u+0x80000000u; // 800ACAF4
  c->r[5]=R32(c->r[3]+0x000000D8u); // 800ACAF8
  W32(c->r[3]+0x000000D8u,c->r[4]); // 800ACAFC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 800ACB00
  if (crb(c,2)) { goto L_800ACB18; } // 800ACB04
  cmps(c,0,(int32_t)c->r[5],0); // 800ACB08
  if (crb(c,2)) { goto L_800ACB14; } // 800ACB0C
  c->lr=0x800ACB14u; f_800AC440(c); // 800ACB10
L_800ACB14:;
  c->lr=0x800ACB18u; f_800AC31C(c); // 800ACB14
L_800ACB18:;
  c->r[3]=R32(c->r[4]+0x00000080u); // 800ACB18
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 800ACB1C
  c->r[3]=R32(c->r[4]+0x00000084u); // 800ACB20
  c->lr=c->r[3]; // 800ACB24
  c->r[3]=R32(c->r[4]+0x00000198u); // 800ACB28
  mtspr(c,26,c->r[3]); // 800ACB2C
  c->r[3]=R32(c->r[4]+0x00000088u); // 800ACB30
  c->ctr=c->r[3]; // 800ACB34
  c->r[3]=R32(c->r[4]+0x0000008Cu); // 800ACB38
  mtspr(c,1,c->r[3]); // 800ACB3C
  c->r[3]=R16(c->r[4]+0x000001A2u); // 800ACB40
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 800ACB44
  W16(c->r[4]+0x000001A2u,c->r[3]); // 800ACB48
  c->r[5]=R32(c->r[4]+0x00000014u); // 800ACB4C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800ACB50
  c->r[4]=R32(c->r[4]+0x00000010u); // 800ACB54
  return; /* rfi */ // 800ACB58
}

// __OSContextInit
void f_800ACB5C(Ctx* __restrict c) {
  trace_call(0x800ACB5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACB5C
  c->r[0]=c->lr; // 800ACB60
  c->r[4]=0u+0x800B0000u; // 800ACB64
  c->r[3]=0u+0x00000007u; // 800ACB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ACB6C
  c->r[4]=c->r[4]+0xFFFFCAD8u; // 800ACB70
  c->lr=0x800ACB78u; f_800AA9D8(c); // 800ACB74
  c->r[0]=0u+0x00000000u; // 800ACB78
  c->r[4]=0u+0x80000000u; // 800ACB7C
  c->r[3]=0u+0x80260000u; // 800ACB80
  W32(c->r[4]+0x000000D8u,c->r[0]); // 800ACB84
  c->r[3]=c->r[3]+0x00006660u; // 800ACB88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ACB8C
  c->lr=0x800ACB94u; f_800A969C(c); // 800ACB90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ACB94
  c->lr=c->r[0]; // 800ACB98
  c->r[1]=c->r[1]+0x00000010u; // 800ACB9C
  return; // 800ACBA0
}

void hle_OSReport(Ctx*);
// OSReport
void f_800ACBA4(Ctx* __restrict c) {
  hle_OSReport(c);
}

// OSVReport
void f_800ACC30(Ctx* __restrict c) {
  trace_call(0x800ACC30u);
  f_800DA14C(c); return; // 800ACC30
}

void hle_OSPanic(Ctx*);
// OSPanic
void f_800ACC34(Ctx* __restrict c) {
  hle_OSPanic(c);
}

// OSSetErrorHandler
void f_800ACD60(Ctx* __restrict c) {
  trace_call(0x800ACD60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACD60
  c->r[0]=c->lr; // 800ACD64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ACD68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ACD6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ACD70
  W32(c->r[1]+0x00000014u,c->r[29]); // 800ACD74
  c->r[29]=c->r[3]|c->r[3]; // 800ACD78
  W32(c->r[1]+0x00000010u,c->r[28]); // 800ACD7C
  c->r[28]=c->r[4]|c->r[4]; // 800ACD80
  c->lr=0x800ACD88u; f_800B087C(c); // 800ACD84
  c->r[4]=0u+0x802B0000u; // 800ACD88
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 800ACD8C
  c->r[4]=c->r[4]+0x000039F0u; // 800ACD90
  cmpu(c,0,c->r[29],0x00000010u); // 800ACD94
  c->r[30]=R32(c->r[4]+c->r[0]); // 800ACD98
  c->r[29]=c->r[3]|c->r[3]; // 800ACD9C
  W32(c->r[4]+c->r[0],c->r[28]); // 800ACDA0
  if (!crb(c,2)) { goto L_800ACFBC; } // 800ACDA4
  c->lr=0x800ACDACu; f_800A94A0(c); // 800ACDA8
  c->r[31]=c->r[3]|c->r[3]; // 800ACDAC
  c->r[3]=c->r[3]|0x00002000u; // 800ACDB0
  c->lr=0x800ACDB8u; f_800A94A8(c); // 800ACDB4
  c->lr=0x800ACDBCu; f_800A9524(c); // 800ACDB8
  cmps(c,0,(int32_t)c->r[28],0); // 800ACDBC
  if (crb(c,2)) { goto L_800ACF58; } // 800ACDC0
  c->r[5]=0u+0x80000000u; // 800ACDC4
  c->r[4]=0u+0x60060000u; // 800ACDC8
  c->r[9]=R32(c->r[5]+0x000000DCu); // 800ACDCC
  c->r[5]=c->r[4]+0xFFFFF8FFu; // 800ACDD0
  c->r[8]=0u+0xFFFFFFFFu; // 800ACDD4
  c->r[7]=0u+0x00000004u; // 800ACDD8
  c->r[0]=0u+0x00000002u; // 800ACDDC
  goto L_800ACF3C; // 800ACDE0
L_800ACDE4:;
  c->r[4]=R32(c->r[9]+0x0000019Cu); // 800ACDE4
  c->r[4]=c->r[4]|0x00000900u; // 800ACDE8
  W32(c->r[9]+0x0000019Cu,c->r[4]); // 800ACDEC
  c->r[6]=R16(c->r[9]+0x000001A2u); // 800ACDF0
  c->r[4]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[4]); // 800ACDF4
  if (!crb(c,2)) { goto L_800ACF20; } // 800ACDF8
  c->r[4]=c->r[6]|0x00000001u; // 800ACDFC
  c->r[6]=c->r[9]+0x00000090u; // 800ACE00
  W16(c->r[9]+0x000001A2u,c->r[4]); // 800ACE04
  c->r[4]=c->r[9]+0x000001C8u; // 800ACE08
  c->ctr=c->r[0]; // 800ACE0C
L_800ACE10:;
  W32(c->r[6]+0x00000004u,c->r[8]); // 800ACE10
  W32(c->r[6]+0x00000000u,c->r[8]); // 800ACE14
  W32(c->r[4]+0x00000004u,c->r[8]); // 800ACE18
  W32(c->r[4]+0x00000000u,c->r[8]); // 800ACE1C
  W32(c->r[6]+0x0000000Cu,c->r[8]); // 800ACE20
  W32(c->r[6]+0x00000008u,c->r[8]); // 800ACE24
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 800ACE28
  W32(c->r[4]+0x00000008u,c->r[8]); // 800ACE2C
  W32(c->r[6]+0x00000014u,c->r[8]); // 800ACE30
  W32(c->r[6]+0x00000010u,c->r[8]); // 800ACE34
  W32(c->r[4]+0x00000014u,c->r[8]); // 800ACE38
  W32(c->r[4]+0x00000010u,c->r[8]); // 800ACE3C
  W32(c->r[6]+0x0000001Cu,c->r[8]); // 800ACE40
  W32(c->r[6]+0x00000018u,c->r[8]); // 800ACE44
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 800ACE48
  W32(c->r[4]+0x00000018u,c->r[8]); // 800ACE4C
  W32(c->r[6]+0x00000024u,c->r[8]); // 800ACE50
  W32(c->r[6]+0x00000020u,c->r[8]); // 800ACE54
  W32(c->r[4]+0x00000024u,c->r[8]); // 800ACE58
  W32(c->r[4]+0x00000020u,c->r[8]); // 800ACE5C
  W32(c->r[6]+0x0000002Cu,c->r[8]); // 800ACE60
  W32(c->r[6]+0x00000028u,c->r[8]); // 800ACE64
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 800ACE68
  W32(c->r[4]+0x00000028u,c->r[8]); // 800ACE6C
  W32(c->r[6]+0x00000034u,c->r[8]); // 800ACE70
  W32(c->r[6]+0x00000030u,c->r[8]); // 800ACE74
  W32(c->r[4]+0x00000034u,c->r[8]); // 800ACE78
  W32(c->r[4]+0x00000030u,c->r[8]); // 800ACE7C
  W32(c->r[6]+0x0000003Cu,c->r[8]); // 800ACE80
  W32(c->r[6]+0x00000038u,c->r[8]); // 800ACE84
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 800ACE88
  W32(c->r[4]+0x00000038u,c->r[8]); // 800ACE8C
  W32(c->r[6]+0x00000044u,c->r[8]); // 800ACE90
  W32(c->r[6]+0x00000040u,c->r[8]); // 800ACE94
  W32(c->r[4]+0x00000044u,c->r[8]); // 800ACE98
  W32(c->r[4]+0x00000040u,c->r[8]); // 800ACE9C
  W32(c->r[6]+0x0000004Cu,c->r[8]); // 800ACEA0
  W32(c->r[6]+0x00000048u,c->r[8]); // 800ACEA4
  W32(c->r[4]+0x0000004Cu,c->r[8]); // 800ACEA8
  W32(c->r[4]+0x00000048u,c->r[8]); // 800ACEAC
  W32(c->r[6]+0x00000054u,c->r[8]); // 800ACEB0
  W32(c->r[6]+0x00000050u,c->r[8]); // 800ACEB4
  W32(c->r[4]+0x00000054u,c->r[8]); // 800ACEB8
  W32(c->r[4]+0x00000050u,c->r[8]); // 800ACEBC
  W32(c->r[6]+0x0000005Cu,c->r[8]); // 800ACEC0
  W32(c->r[6]+0x00000058u,c->r[8]); // 800ACEC4
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 800ACEC8
  W32(c->r[4]+0x00000058u,c->r[8]); // 800ACECC
  W32(c->r[6]+0x00000064u,c->r[8]); // 800ACED0
  W32(c->r[6]+0x00000060u,c->r[8]); // 800ACED4
  W32(c->r[4]+0x00000064u,c->r[8]); // 800ACED8
  W32(c->r[4]+0x00000060u,c->r[8]); // 800ACEDC
  W32(c->r[6]+0x0000006Cu,c->r[8]); // 800ACEE0
  W32(c->r[6]+0x00000068u,c->r[8]); // 800ACEE4
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 800ACEE8
  W32(c->r[4]+0x00000068u,c->r[8]); // 800ACEEC
  W32(c->r[6]+0x00000074u,c->r[8]); // 800ACEF0
  W32(c->r[6]+0x00000070u,c->r[8]); // 800ACEF4
  W32(c->r[4]+0x00000074u,c->r[8]); // 800ACEF8
  W32(c->r[4]+0x00000070u,c->r[8]); // 800ACEFC
  W32(c->r[6]+0x0000007Cu,c->r[8]); // 800ACF00
  W32(c->r[6]+0x00000078u,c->r[8]); // 800ACF04
  c->r[6]=c->r[6]+0x00000080u; // 800ACF08
  W32(c->r[4]+0x0000007Cu,c->r[8]); // 800ACF0C
  W32(c->r[4]+0x00000078u,c->r[8]); // 800ACF10
  c->r[4]=c->r[4]+0x00000080u; // 800ACF14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ACE10; } // 800ACF18
  W32(c->r[9]+0x00000194u,c->r[7]); // 800ACF1C
L_800ACF20:;
  c->r[4]=R32(c->r[13]+0xFFFF80D0u); // 800ACF20
  c->r[6]=R32(c->r[9]+0x00000194u); // 800ACF24
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 800ACF28
  c->r[4]=c->r[6]|c->r[4]; // 800ACF2C
  c->r[4]=c->r[4]&c->r[5]; // 800ACF30
  W32(c->r[9]+0x00000194u,c->r[4]); // 800ACF34
  c->r[9]=R32(c->r[9]+0x000002FCu); // 800ACF38
L_800ACF3C:;
  cmps(c,0,(int32_t)c->r[9],0); // 800ACF3C
  if (!crb(c,2)) { IRQCHK(c); goto L_800ACDE4; } // 800ACF40
  c->r[0]=R32(c->r[13]+0xFFFF80D0u); // 800ACF44
  c->r[31]=c->r[31]|0x00000900u; // 800ACF48
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 800ACF4C
  c->r[4]=c->r[3]|c->r[0]; // 800ACF50
  goto L_800ACFA4; // 800ACF54
L_800ACF58:;
  c->r[5]=0u+0x80000000u; // 800ACF58
  c->r[4]=0u+0x60060000u; // 800ACF5C
  c->r[6]=R32(c->r[5]+0x000000DCu); // 800ACF60
  c->r[4]=c->r[4]+0xFFFFF8FFu; // 800ACF64
  c->r[5]=0u+0xFFFFF6FFu; // 800ACF68
  goto L_800ACF90; // 800ACF6C
L_800ACF70:;
  c->r[0]=R32(c->r[6]+0x0000019Cu); // 800ACF70
  c->r[0]=c->r[0]&c->r[5]; // 800ACF74
  W32(c->r[6]+0x0000019Cu,c->r[0]); // 800ACF78
  c->r[0]=R32(c->r[6]+0x00000194u); // 800ACF7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF07u; // 800ACF80
  c->r[0]=c->r[0]&c->r[4]; // 800ACF84
  W32(c->r[6]+0x00000194u,c->r[0]); // 800ACF88
  c->r[6]=R32(c->r[6]+0x000002FCu); // 800ACF8C
L_800ACF90:;
  cmps(c,0,(int32_t)c->r[6],0); // 800ACF90
  if (!crb(c,2)) { IRQCHK(c); goto L_800ACF70; } // 800ACF94
  c->r[0]=0u+0xFFFFF6FFu; // 800ACF98
  c->r[4]=rotl(c->r[3],0)&0xFFFFFF07u; // 800ACF9C
  c->r[31]=c->r[31]&c->r[0]; // 800ACFA0
L_800ACFA4:;
  c->r[3]=0u+0x60060000u; // 800ACFA4
  c->r[0]=c->r[3]+0xFFFFF8FFu; // 800ACFA8
  c->r[3]=c->r[4]&c->r[0]; // 800ACFAC
  c->lr=0x800ACFB4u; f_800A9544(c); // 800ACFB0
  c->r[3]=c->r[31]|c->r[31]; // 800ACFB4
  c->lr=0x800ACFBCu; f_800A94A8(c); // 800ACFB8
L_800ACFBC:;
  c->r[3]=c->r[29]|c->r[29]; // 800ACFBC
  c->lr=0x800ACFC4u; f_800B08A4(c); // 800ACFC0
  c->r[3]=c->r[30]|c->r[30]; // 800ACFC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ACFC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ACFCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800ACFD0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800ACFD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ACFD8
  c->lr=c->r[0]; // 800ACFDC
  c->r[1]=c->r[1]+0x00000020u; // 800ACFE0
  return; // 800ACFE4
}

// __OSUnhandledException
void f_800ACFE8(Ctx* __restrict c) {
  trace_call(0x800ACFE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACFE8
  c->r[0]=c->lr; // 800ACFEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ACFF0
  c->r[11]=c->r[1]+0x00000030u; // 800ACFF4
  c->lr=0x800ACFFCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ACFF8
  c->r[31]=0u+0x80260000u; // 800ACFFC
  c->r[25]=c->r[3]|c->r[3]; // 800AD000
  c->r[26]=c->r[4]|c->r[4]; // 800AD004
  c->r[27]=c->r[5]|c->r[5]; // 800AD008
  c->r[28]=c->r[6]|c->r[6]; // 800AD00C
  c->r[31]=c->r[31]+0x00006688u; // 800AD010
  c->lr=0x800AD018u; f_800B48F4(c); // 800AD014
  c->r[5]=R32(c->r[26]+0x0000019Cu); // 800AD018
  c->r[29]=c->r[4]|c->r[4]; // 800AD01C
  c->r[30]=c->r[3]|c->r[3]; // 800AD020
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 800AD024
  if (!crb(c,2)) { goto L_800AD040; } // 800AD028
  c->r[4]=c->r[25]|c->r[25]; // 800AD02C
  c->r[3]=c->r[31]+0x0000005Cu; // 800AD030
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD034
  c->lr=0x800AD03Cu; f_800ACBA4(c); // 800AD038
  goto L_800AD19C; // 800AD03C
L_800AD040:;
  cmpu(c,0,c->r[25],0x00000006u); // 800AD040
  if (!crb(c,2)) { goto L_800AD130; } // 800AD044
  c->r[0]=rotl(c->r[5],0)&0x00100000u; cr0(c,c->r[0]); // 800AD048
  if (crb(c,2)) { goto L_800AD130; } // 800AD04C
  c->r[3]=0u+0x802B0000u; // 800AD050
  c->r[3]=c->r[3]+0x000039F0u; // 800AD054
  c->r[0]=R32(c->r[3]+0x00000040u); // 800AD058
  cmps(c,0,(int32_t)c->r[0],0); // 800AD05C
  if (crb(c,2)) { goto L_800AD130; } // 800AD060
  c->r[25]=0u+0x00000010u; // 800AD064
  c->lr=0x800AD06Cu; f_800A94A0(c); // 800AD068
  c->r[23]=c->r[3]|c->r[3]; // 800AD06C
  c->r[3]=c->r[3]|0x00002000u; // 800AD070
  c->lr=0x800AD078u; f_800A94A8(c); // 800AD074
  c->r[3]=0u+0x80000000u; // 800AD078
  c->r[3]=R32(c->r[3]+0x000000D8u); // 800AD07C
  cmps(c,0,(int32_t)c->r[3],0); // 800AD080
  if (crb(c,2)) { goto L_800AD08C; } // 800AD084
  c->lr=0x800AD08Cu; f_800AC568(c); // 800AD088
L_800AD08C:;
  c->lr=0x800AD090u; f_800A9524(c); // 800AD08C
  c->r[24]=0u+0x60060000u; // 800AD090
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 800AD094
  c->r[3]=c->r[3]&c->r[0]; // 800AD098
  c->lr=0x800AD0A0u; f_800A9544(c); // 800AD09C
  c->r[3]=c->r[23]|c->r[23]; // 800AD0A0
  c->lr=0x800AD0A8u; f_800A94A8(c); // 800AD0A4
  c->r[23]=0u+0x80000000u; // 800AD0A8
  c->r[0]=R32(c->r[23]+0x000000D8u); // 800AD0AC
  cmpu(c,0,c->r[0],c->r[26]); // 800AD0B0
  if (!crb(c,2)) { goto L_800AD114; } // 800AD0B4
  c->lr=0x800AD0BCu; f_800B35B4(c); // 800AD0B8
  c->r[4]=c->r[26]|c->r[26]; // 800AD0BC
  c->r[5]=c->r[27]|c->r[27]; // 800AD0C0
  c->r[6]=c->r[28]|c->r[28]; // 800AD0C4
  c->r[3]=0u+0x00000010u; // 800AD0C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD0CC
  c->r[7]=0u+0x802B0000u; // 800AD0D0
  c->r[7]=c->r[7]+0x000039F0u; // 800AD0D4
  c->r[12]=R32(c->r[7]+0x00000040u); // 800AD0D8
  c->ctr=c->r[12]; // 800AD0DC
  if (true) { c->lr=0x800AD0E4u; dispatch(c,c->ctr); } // 800AD0E0
  c->r[4]=R32(c->r[26]+0x0000019Cu); // 800AD0E4
  c->r[3]=0u+0x00000000u; // 800AD0E8
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 800AD0EC
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800AD0F0
  W32(c->r[26]+0x0000019Cu,c->r[4]); // 800AD0F4
  W32(c->r[23]+0x000000D8u,c->r[3]); // 800AD0F8
  c->r[3]=R32(c->r[26]+0x00000194u); // 800AD0FC
  c->r[0]=c->r[3]&c->r[0]; // 800AD100
  W32(c->r[26]+0x00000194u,c->r[0]); // 800AD104
  c->lr=0x800AD10Cu; f_800B35F0(c); // 800AD108
  c->lr=0x800AD110u; f_800B3AFC(c); // 800AD10C
  goto L_800AD128; // 800AD110
L_800AD114:;
  c->r[3]=R32(c->r[26]+0x0000019Cu); // 800AD114
  c->r[0]=0u+0x00000000u; // 800AD118
  c->r[3]=rotl(c->r[3],0)&0xFFFFDFFFu; // 800AD11C
  W32(c->r[26]+0x0000019Cu,c->r[3]); // 800AD120
  W32(c->r[23]+0x000000D8u,c->r[0]); // 800AD124
L_800AD128:;
  c->r[3]=c->r[26]|c->r[26]; // 800AD128
  c->lr=0x800AD130u; f_800AC658(c); // 800AD12C
L_800AD130:;
  c->r[24]=0u+0x802B0000u; // 800AD130
  c->r[23]=rotl(c->r[25],2)&0x000003FCu; // 800AD134
  c->r[24]=c->r[24]+0x000039F0u; // 800AD138
  c->r[0]=R32(c->r[24]+c->r[23]); // 800AD13C
  cmps(c,0,(int32_t)c->r[0],0); // 800AD140
  if (crb(c,2)) { goto L_800AD17C; } // 800AD144
  c->lr=0x800AD14Cu; f_800B35B4(c); // 800AD148
  c->r[3]=c->r[25]|c->r[25]; // 800AD14C
  c->r[4]=c->r[26]|c->r[26]; // 800AD150
  c->r[5]=c->r[27]|c->r[27]; // 800AD154
  c->r[6]=c->r[28]|c->r[28]; // 800AD158
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD15C
  c->r[12]=R32(c->r[24]+c->r[23]); // 800AD160
  c->ctr=c->r[12]; // 800AD164
  if (true) { c->lr=0x800AD16Cu; dispatch(c,c->ctr); } // 800AD168
  c->lr=0x800AD170u; f_800B35F0(c); // 800AD16C
  c->lr=0x800AD174u; f_800B3AFC(c); // 800AD170
  c->r[3]=c->r[26]|c->r[26]; // 800AD174
  c->lr=0x800AD17Cu; f_800AC658(c); // 800AD178
L_800AD17C:;
  cmpu(c,0,c->r[25],0x00000008u); // 800AD17C
  if (!crb(c,2)) { goto L_800AD18C; } // 800AD180
  c->r[3]=c->r[26]|c->r[26]; // 800AD184
  c->lr=0x800AD18Cu; f_800AC658(c); // 800AD188
L_800AD18C:;
  c->r[4]=c->r[25]|c->r[25]; // 800AD18C
  c->r[3]=c->r[31]+0x0000007Cu; // 800AD190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD194
  c->lr=0x800AD19Cu; f_800ACBA4(c); // 800AD198
L_800AD19C:;
  c->r[3]=c->r[13]+0xFFFF80D4u; // 800AD19C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD1A0
  c->lr=0x800AD1A8u; f_800ACBA4(c); // 800AD1A4
  c->r[3]=c->r[26]|c->r[26]; // 800AD1A8
  c->lr=0x800AD1B0u; f_800AC878(c); // 800AD1AC
  c->r[4]=c->r[27]|c->r[27]; // 800AD1B0
  c->r[5]=c->r[28]|c->r[28]; // 800AD1B4
  c->r[3]=c->r[31]+0x00000094u; // 800AD1B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD1BC
  c->lr=0x800AD1C4u; f_800ACBA4(c); // 800AD1C0
  c->r[6]=c->r[29]|c->r[29]; // 800AD1C4
  c->r[5]=c->r[30]|c->r[30]; // 800AD1C8
  c->r[3]=c->r[31]+0x000000C8u; // 800AD1CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD1D0
  c->lr=0x800AD1D8u; f_800ACBA4(c); // 800AD1D4
  cmpu(c,0,c->r[25],0x0000000Fu); // 800AD1D8
  if (crb(c,1)) { goto L_800AD2A0; } // 800AD1DC
  c->r[3]=0u+0x80260000u; // 800AD1E0
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800AD1E4
  c->r[3]=c->r[3]+0x00006964u; // 800AD1E8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800AD1EC
  c->ctr=c->r[3]; // 800AD1F0
  if (true) { switch (c->ctr) { case 0x800AD1F8u: goto L_800AD1F8; case 0x800AD210u: goto L_800AD210; case 0x800AD224u: goto L_800AD224; case 0x800AD23Cu: goto L_800AD23C; case 0x800AD254u: goto L_800AD254; case 0x800AD2A0u: goto L_800AD2A0; default: break; } dispatch(c,c->ctr); return; } // 800AD1F4
L_800AD1F8:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800AD1F8
  c->r[5]=c->r[28]|c->r[28]; // 800AD1FC
  c->r[3]=c->r[31]+0x000000D8u; // 800AD200
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD204
  c->lr=0x800AD20Cu; f_800ACBA4(c); // 800AD208
  goto L_800AD2A0; // 800AD20C
L_800AD210:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800AD210
  c->r[3]=c->r[31]+0x00000138u; // 800AD214
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD218
  c->lr=0x800AD220u; f_800ACBA4(c); // 800AD21C
  goto L_800AD2A0; // 800AD220
L_800AD224:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800AD224
  c->r[5]=c->r[28]|c->r[28]; // 800AD228
  c->r[3]=c->r[31]+0x00000184u; // 800AD22C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD230
  c->lr=0x800AD238u; f_800ACBA4(c); // 800AD234
  goto L_800AD2A0; // 800AD238
L_800AD23C:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800AD23C
  c->r[5]=c->r[28]|c->r[28]; // 800AD240
  c->r[3]=c->r[31]+0x000001E8u; // 800AD244
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD248
  c->lr=0x800AD250u; f_800ACBA4(c); // 800AD24C
  goto L_800AD2A0; // 800AD250
L_800AD254:;
  c->r[3]=c->r[13]+0xFFFF80D4u; // 800AD254
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD258
  c->lr=0x800AD260u; f_800ACBA4(c); // 800AD25C
  c->r[25]=0u+0xCC000000u; // 800AD260
  c->r[3]=c->r[31]+0x00000248u; // 800AD264
  c->r[4]=R16(c->r[25]+0x00005030u); // 800AD268
  c->r[5]=R16(c->r[25]+0x00005032u); // 800AD26C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD270
  c->lr=0x800AD278u; f_800ACBA4(c); // 800AD274
  c->r[4]=R16(c->r[25]+0x00005020u); // 800AD278
  c->r[3]=c->r[31]+0x00000268u; // 800AD27C
  c->r[5]=R16(c->r[25]+0x00005022u); // 800AD280
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD284
  c->lr=0x800AD28Cu; f_800ACBA4(c); // 800AD288
  c->r[4]=0u+0xCD000000u; // 800AD28C
  c->r[3]=c->r[31]+0x00000288u; // 800AD290
  c->r[4]=R32(c->r[4]+0x00006014u); // 800AD294
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD298
  c->lr=0x800AD2A0u; f_800ACBA4(c); // 800AD29C
L_800AD2A0:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF8CD4u); // 800AD2A0
  c->r[3]=c->r[31]+0x000002A4u; // 800AD2A4
  c->r[5]=R32(c->r[13]+0xFFFF8CD0u); // 800AD2A8
  c->r[7]=R32(c->r[13]+0xFFFF8CD8u); // 800AD2AC
  c->r[8]=R32(c->r[13]+0xFFFF8CDCu); // 800AD2B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD2B4
  c->lr=0x800AD2BCu; f_800ACBA4(c); // 800AD2B8
  c->lr=0x800AD2C0u; f_800A94E0(c); // 800AD2BC
  c->r[11]=c->r[1]+0x00000030u; // 800AD2C0
  c->lr=0x800AD2C8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AD2C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AD2C8
  c->lr=c->r[0]; // 800AD2CC
  c->r[1]=c->r[1]+0x00000030u; // 800AD2D0
  return; // 800AD2D4
}

// PackArgs
void f_800AD2D8(Ctx* __restrict c) {
  trace_call(0x800AD2D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD2D8
  c->r[0]=c->lr; // 800AD2DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AD2E0
  c->r[11]=c->r[1]+0x00000030u; // 800AD2E4
  c->lr=0x800AD2ECu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AD2E8
  c->r[25]=c->r[4]|c->r[4]; // 800AD2EC
  c->r[29]=c->r[5]|c->r[5]; // 800AD2F0
  c->r[30]=c->r[3]|c->r[3]; // 800AD2F4
  c->r[4]=0u+0x00000000u; // 800AD2F8
  c->r[5]=0u+0x00002000u; // 800AD2FC
  c->lr=0x800AD304u; f_80004688(c); // 800AD300
  cmps(c,0,(int32_t)c->r[25],0); // 800AD304
  if (!crb(c,2)) { goto L_800AD318; } // 800AD308
  c->r[0]=0u+0x00000000u; // 800AD30C
  W32(c->r[30]+0x00000008u,c->r[0]); // 800AD310
  goto L_800AD43C; // 800AD314
L_800AD318:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800AD318
  c->r[31]=c->r[25]|c->r[25]; // 800AD31C
  c->r[26]=c->r[30]+0x00002000u; // 800AD320
  c->r[28]=c->r[29]+c->r[0]; // 800AD324
  goto L_800AD354; // 800AD328
L_800AD32C:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 800AD32C
  c->r[3]=c->r[27]|c->r[27]; // 800AD330
  c->lr=0x800AD338u; f_800D4394(c); // 800AD334
  c->r[0]=c->r[3]+0x00000001u; // 800AD338
  c->r[4]=c->r[27]|c->r[27]; // 800AD33C
  c->r[26]=c->r[26]-c->r[0]; // 800AD340
  c->r[3]=c->r[26]|c->r[26]; // 800AD344
  c->lr=0x800AD34Cu; f_800DB9A8(c); // 800AD348
  c->r[0]=c->r[26]-c->r[30]; // 800AD34C
  W32(c->r[28]+0x00000000u,c->r[0]); // 800AD350
L_800AD354:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 800AD354
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 800AD358
  if (!crb(c,0)) { IRQCHK(c); goto L_800AD32C; } // 800AD35C
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 800AD360
  c->r[0]=c->r[26]-c->r[30]; // 800AD364
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800AD368
  c->r[7]=0u+0x00000000u; // 800AD36C
  c->r[6]=c->r[30]+c->r[4]; // 800AD370
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800AD374
  c->r[6]=c->r[6]-c->r[0]; // 800AD378
  if (crb(c,2)) { goto L_800AD42C; } // 800AD37C
  cmpu(c,0,c->r[3],0x00000008u); // 800AD380
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 800AD384
  if (!crb(c,1)) { goto L_800AD3F8; } // 800AD388
  c->r[0]=c->r[3]+0x00000007u; // 800AD38C
  c->r[4]=c->r[29]|c->r[29]; // 800AD390
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800AD394
  c->r[5]=c->r[6]|c->r[6]; // 800AD398
  c->ctr=c->r[0]; // 800AD39C
  cmpu(c,0,c->r[3],0x00000000u); // 800AD3A0
  if (!crb(c,1)) { goto L_800AD3F8; } // 800AD3A4
L_800AD3A8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800AD3A8
  c->r[7]=c->r[7]+0x00000008u; // 800AD3AC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800AD3B0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800AD3B4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800AD3B8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AD3BC
  W32(c->r[5]+0x00000008u,c->r[0]); // 800AD3C0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800AD3C4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800AD3C8
  c->r[0]=R32(c->r[4]+0x00000010u); // 800AD3CC
  W32(c->r[5]+0x00000010u,c->r[0]); // 800AD3D0
  c->r[0]=R32(c->r[4]+0x00000014u); // 800AD3D4
  W32(c->r[5]+0x00000014u,c->r[0]); // 800AD3D8
  c->r[0]=R32(c->r[4]+0x00000018u); // 800AD3DC
  W32(c->r[5]+0x00000018u,c->r[0]); // 800AD3E0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800AD3E4
  c->r[4]=c->r[4]+0x00000020u; // 800AD3E8
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800AD3EC
  c->r[5]=c->r[5]+0x00000020u; // 800AD3F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD3A8; } // 800AD3F4
L_800AD3F8:;
  c->r[3]=c->r[31]+0x00000001u; // 800AD3F8
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800AD3FC
  c->r[0]=c->r[3]-c->r[7]; // 800AD400
  c->r[4]=c->r[29]+c->r[5]; // 800AD404
  c->r[5]=c->r[6]+c->r[5]; // 800AD408
  c->ctr=c->r[0]; // 800AD40C
  cmpu(c,0,c->r[7],c->r[3]); // 800AD410
  if (!crb(c,0)) { goto L_800AD42C; } // 800AD414
L_800AD418:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800AD418
  c->r[4]=c->r[4]+0x00000004u; // 800AD41C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800AD420
  c->r[5]=c->r[5]+0x00000004u; // 800AD424
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD418; } // 800AD428
L_800AD42C:;
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 800AD42C
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 800AD430
  c->r[0]=c->r[0]-c->r[30]; // 800AD434
  W32(c->r[30]+0x00000008u,c->r[0]); // 800AD438
L_800AD43C:;
  c->r[11]=c->r[1]+0x00000030u; // 800AD43C
  c->r[3]=0u+0x00000001u; // 800AD440
  c->lr=0x800AD448u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AD444
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AD448
  c->lr=c->r[0]; // 800AD44C
  c->r[1]=c->r[1]+0x00000030u; // 800AD450
  return; // 800AD454
}

// Utf16ToArg
void f_800AD458(Ctx* __restrict c) {
  trace_call(0x800AD458u);
  cmps(c,0,(int32_t)c->r[4],0); // 800AD458
  if (crb(c,2)) { goto L_800AD5A8; } // 800AD45C
  c->r[9]=c->r[3]|c->r[3]; // 800AD460
  c->r[5]=0u+0x00000004u; // 800AD464
  c->r[0]=0u+0x00000002u; // 800AD468
  goto L_800AD580; // 800AD46C
L_800AD470:;
  c->r[10]=0u+0x00000000u; // 800AD470
  c->ctr=c->r[0]; // 800AD474
L_800AD478:;
  c->r[8]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[8]); // 800AD478
  c->r[7]=0u+0x000000F0u; // 800AD47C
  if (crb(c,2)) { goto L_800AD488; } // 800AD480
  c->r[7]=0u+0x0000000Fu; // 800AD484
L_800AD488:;
  c->r[3]=0u-c->r[8]; // 800AD488
  c->r[6]=R8(c->r[4]+0x00000000u); // 800AD48C
  c->r[3]=c->r[3]|c->r[8]; // 800AD490
  c->r[3]=sraw(c,c->r[3],31); // 800AD494
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800AD498
  c->r[3]=c->r[5]&~c->r[3]; // 800AD49C
  c->r[6]=c->r[6]&c->r[7]; // 800AD4A0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800AD4A4
  c->r[3]=sraw(c,c->r[6],(c->r[3])&63); cr0(c,c->r[3]); // 800AD4A8
  if (crb(c,0)) { goto L_800AD4C4; } // 800AD4AC
  cmps(c,0,(int32_t)c->r[3],10); // 800AD4B0
  if (!crb(c,0)) { goto L_800AD4C4; } // 800AD4B4
  c->r[3]=c->r[3]+0x00000030u; // 800AD4B8
  W8(c->r[9]+0x00000000u,c->r[3]); // 800AD4BC
  goto L_800AD4E8; // 800AD4C0
L_800AD4C4:;
  cmps(c,0,(int32_t)c->r[3],10); // 800AD4C4
  if (crb(c,0)) { goto L_800AD4E0; } // 800AD4C8
  cmps(c,0,(int32_t)c->r[3],16); // 800AD4CC
  if (!crb(c,0)) { goto L_800AD4E0; } // 800AD4D0
  c->r[3]=c->r[3]+0x00000057u; // 800AD4D4
  W8(c->r[9]+0x00000000u,c->r[3]); // 800AD4D8
  goto L_800AD4E8; // 800AD4DC
L_800AD4E0:;
  c->r[3]=0u+0x00000000u; // 800AD4E0
  return; // 800AD4E4
L_800AD4E8:;
  cmps(c,0,(int32_t)c->r[8],0); // 800AD4E8
  if (crb(c,2)) { goto L_800AD4F4; } // 800AD4EC
  c->r[4]=c->r[4]+0x00000001u; // 800AD4F0
L_800AD4F4:;
  c->r[10]=c->r[10]+0x00000001u; // 800AD4F4
  c->r[7]=0u+0x000000F0u; // 800AD4F8
  c->r[8]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[8]); // 800AD4FC
  if (crb(c,2)) { goto L_800AD508; } // 800AD500
  c->r[7]=0u+0x0000000Fu; // 800AD504
L_800AD508:;
  c->r[3]=0u-c->r[8]; // 800AD508
  c->r[6]=R8(c->r[4]+0x00000000u); // 800AD50C
  c->r[3]=c->r[3]|c->r[8]; // 800AD510
  c->r[3]=sraw(c,c->r[3],31); // 800AD514
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800AD518
  c->r[3]=c->r[5]&~c->r[3]; // 800AD51C
  c->r[6]=c->r[6]&c->r[7]; // 800AD520
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800AD524
  c->r[3]=sraw(c,c->r[6],(c->r[3])&63); cr0(c,c->r[3]); // 800AD528
  if (crb(c,0)) { goto L_800AD544; } // 800AD52C
  cmps(c,0,(int32_t)c->r[3],10); // 800AD530
  if (!crb(c,0)) { goto L_800AD544; } // 800AD534
  c->r[3]=c->r[3]+0x00000030u; // 800AD538
  W8(c->r[9]+0x00000001u,c->r[3]); // 800AD53C
  goto L_800AD568; // 800AD540
L_800AD544:;
  cmps(c,0,(int32_t)c->r[3],10); // 800AD544
  if (crb(c,0)) { goto L_800AD560; } // 800AD548
  cmps(c,0,(int32_t)c->r[3],16); // 800AD54C
  if (!crb(c,0)) { goto L_800AD560; } // 800AD550
  c->r[3]=c->r[3]+0x00000057u; // 800AD554
  W8(c->r[9]+0x00000001u,c->r[3]); // 800AD558
  goto L_800AD568; // 800AD55C
L_800AD560:;
  c->r[3]=0u+0x00000000u; // 800AD560
  return; // 800AD564
L_800AD568:;
  cmps(c,0,(int32_t)c->r[8],0); // 800AD568
  c->r[9]=c->r[9]+0x00000002u; // 800AD56C
  if (crb(c,2)) { goto L_800AD578; } // 800AD570
  c->r[4]=c->r[4]+0x00000001u; // 800AD574
L_800AD578:;
  c->r[10]=c->r[10]+0x00000001u; // 800AD578
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD478; } // 800AD57C
L_800AD580:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 800AD580
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[3]); // 800AD584
  if (!crb(c,2)) { IRQCHK(c); goto L_800AD470; } // 800AD588
  c->r[3]=R8(c->r[4]+0x00000001u); // 800AD58C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[3]); // 800AD590
  if (!crb(c,2)) { IRQCHK(c); goto L_800AD470; } // 800AD594
  c->r[0]=0u+0x00000000u; // 800AD598
  c->r[3]=0u+0x00000001u; // 800AD59C
  W8(c->r[9]+0x00000000u,c->r[0]); // 800AD5A0
  return; // 800AD5A4
L_800AD5A8:;
  c->r[3]=0u+0x00000000u; // 800AD5A8
  return; // 800AD5AC
}

// PackInstallerArgs
void f_800AD5B0(Ctx* __restrict c) {
  trace_call(0x800AD5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD5B0
  c->r[0]=c->lr; // 800AD5B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AD5B8
  c->r[11]=c->r[1]+0x00000030u; // 800AD5BC
  c->lr=0x800AD5C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AD5C0
  c->r[27]=c->r[4]|c->r[4]; // 800AD5C4
  c->r[28]=c->r[5]|c->r[5]; // 800AD5C8
  c->r[30]=c->r[3]|c->r[3]; // 800AD5CC
  c->r[4]=0u+0x00000000u; // 800AD5D0
  c->r[5]=0u+0x00002000u; // 800AD5D4
  c->lr=0x800AD5DCu; f_80004688(c); // 800AD5D8
  cmps(c,0,(int32_t)c->r[27],0); // 800AD5DC
  if (!crb(c,2)) { goto L_800AD5F0; } // 800AD5E0
  c->r[0]=0u+0x00000000u; // 800AD5E4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800AD5E8
  goto L_800AD760; // 800AD5EC
L_800AD5F0:;
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800AD5F0
  c->r[31]=c->r[27]|c->r[27]; // 800AD5F4
  c->r[29]=c->r[30]+0x00002000u; // 800AD5F8
  c->r[26]=c->r[28]+c->r[0]; // 800AD5FC
  goto L_800AD678; // 800AD600
L_800AD604:;
  cmps(c,0,(int32_t)c->r[27],2); // 800AD604
  if (crb(c,0)) { goto L_800AD620; } // 800AD608
  c->r[3]=rotl(c->r[27],1)&0x00000001u; // 800AD60C
  c->r[0]=rotl(c->r[27],0)&0x00000001u; // 800AD610
  c->r[0]=c->r[0]^c->r[3]; // 800AD614
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 800AD618
  if (crb(c,2)) { goto L_800AD64C; } // 800AD61C
L_800AD620:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 800AD620
  c->r[3]=c->r[25]|c->r[25]; // 800AD624
  c->lr=0x800AD62Cu; f_800D4394(c); // 800AD628
  c->r[0]=c->r[3]+0x00000001u; // 800AD62C
  c->r[4]=c->r[25]|c->r[25]; // 800AD630
  c->r[29]=c->r[29]-c->r[0]; // 800AD634
  c->r[3]=c->r[29]|c->r[29]; // 800AD638
  c->lr=0x800AD640u; f_800DB9A8(c); // 800AD63C
  c->r[0]=c->r[29]-c->r[30]; // 800AD640
  W32(c->r[26]+0x00000000u,c->r[0]); // 800AD644
  goto L_800AD678; // 800AD648
L_800AD64C:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 800AD64C
  c->r[3]=c->r[25]|c->r[25]; // 800AD650
  c->lr=0x800AD658u; f_800DFD90(c); // 800AD654
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800AD658
  c->r[4]=c->r[25]|c->r[25]; // 800AD65C
  c->r[0]=c->r[3]+0x00000001u; // 800AD660
  c->r[29]=c->r[29]-c->r[0]; // 800AD664
  c->r[3]=c->r[29]|c->r[29]; // 800AD668
  c->lr=0x800AD670u; f_800AD458(c); // 800AD66C
  c->r[0]=c->r[29]-c->r[30]; // 800AD670
  W32(c->r[26]+0x00000000u,c->r[0]); // 800AD674
L_800AD678:;
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 800AD678
  c->r[26]=c->r[26]+0xFFFFFFFCu; // 800AD67C
  if (!crb(c,0)) { IRQCHK(c); goto L_800AD604; } // 800AD680
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 800AD684
  c->r[0]=c->r[29]-c->r[30]; // 800AD688
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800AD68C
  c->r[7]=0u+0x00000000u; // 800AD690
  c->r[6]=c->r[30]+c->r[4]; // 800AD694
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800AD698
  c->r[6]=c->r[6]-c->r[0]; // 800AD69C
  if (crb(c,2)) { goto L_800AD750; } // 800AD6A0
  cmpu(c,0,c->r[3],0x00000008u); // 800AD6A4
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 800AD6A8
  if (!crb(c,1)) { goto L_800AD71C; } // 800AD6AC
  c->r[0]=c->r[3]+0x00000007u; // 800AD6B0
  c->r[4]=c->r[28]|c->r[28]; // 800AD6B4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800AD6B8
  c->r[5]=c->r[6]|c->r[6]; // 800AD6BC
  c->ctr=c->r[0]; // 800AD6C0
  cmpu(c,0,c->r[3],0x00000000u); // 800AD6C4
  if (!crb(c,1)) { goto L_800AD71C; } // 800AD6C8
L_800AD6CC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800AD6CC
  c->r[7]=c->r[7]+0x00000008u; // 800AD6D0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800AD6D4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800AD6D8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800AD6DC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AD6E0
  W32(c->r[5]+0x00000008u,c->r[0]); // 800AD6E4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800AD6E8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800AD6EC
  c->r[0]=R32(c->r[4]+0x00000010u); // 800AD6F0
  W32(c->r[5]+0x00000010u,c->r[0]); // 800AD6F4
  c->r[0]=R32(c->r[4]+0x00000014u); // 800AD6F8
  W32(c->r[5]+0x00000014u,c->r[0]); // 800AD6FC
  c->r[0]=R32(c->r[4]+0x00000018u); // 800AD700
  W32(c->r[5]+0x00000018u,c->r[0]); // 800AD704
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800AD708
  c->r[4]=c->r[4]+0x00000020u; // 800AD70C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800AD710
  c->r[5]=c->r[5]+0x00000020u; // 800AD714
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD6CC; } // 800AD718
L_800AD71C:;
  c->r[3]=c->r[31]+0x00000001u; // 800AD71C
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800AD720
  c->r[0]=c->r[3]-c->r[7]; // 800AD724
  c->r[4]=c->r[28]+c->r[5]; // 800AD728
  c->r[5]=c->r[6]+c->r[5]; // 800AD72C
  c->ctr=c->r[0]; // 800AD730
  cmpu(c,0,c->r[7],c->r[3]); // 800AD734
  if (!crb(c,0)) { goto L_800AD750; } // 800AD738
L_800AD73C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800AD73C
  c->r[4]=c->r[4]+0x00000004u; // 800AD740
  W32(c->r[5]+0x00000000u,c->r[0]); // 800AD744
  c->r[5]=c->r[5]+0x00000004u; // 800AD748
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD73C; } // 800AD74C
L_800AD750:;
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 800AD750
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 800AD754
  c->r[0]=c->r[0]-c->r[30]; // 800AD758
  W32(c->r[30]+0x00000008u,c->r[0]); // 800AD75C
L_800AD760:;
  c->r[11]=c->r[1]+0x00000030u; // 800AD760
  c->r[3]=0u+0x00000001u; // 800AD764
  c->lr=0x800AD76Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AD768
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AD76C
  c->lr=c->r[0]; // 800AD770
  c->r[1]=c->r[1]+0x00000030u; // 800AD774
  return; // 800AD778
}

// Run
void f_800AD77C(Ctx* __restrict c) {
  trace_call(0x800AD77Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD77C
  c->r[0]=c->lr; // 800AD780
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD788
  c->r[31]=c->r[3]|c->r[3]; // 800AD78C
  c->lr=0x800AD794u; f_800ABE44(c); // 800AD790
  /* sync */ // 800AD794
  /* isync */ // 800AD798
  c->ctr=c->r[31]; // 800AD79C
  if (true) { dispatch(c,c->ctr); return; } // 800AD7A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD7A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD7A8
  c->lr=c->r[0]; // 800AD7AC
  c->r[1]=c->r[1]+0x00000010u; // 800AD7B0
  return; // 800AD7B4
}

// Callback
void f_800AD7B8(Ctx* __restrict c) {
  trace_call(0x800AD7B8u);
  c->r[0]=0u+0x00000001u; // 800AD7B8
  W32(c->r[13]+0xFFFF8CB8u,c->r[0]); // 800AD7BC
  return; // 800AD7C0
}

// __OSGetExecParams
void f_800AD7C4(Ctx* __restrict c) {
  trace_call(0x800AD7C4u);
  c->r[5]=0u+0x80000000u; // 800AD7C4
  c->r[4]=R32(c->r[5]+0x000030F0u); // 800AD7C8
  cmpu(c,0,c->r[4],c->r[5]); // 800AD7CC
  if (crb(c,0)) { goto L_800AD7DC; } // 800AD7D0
  c->r[5]=0u+0x0000001Cu; // 800AD7D4
  f_80004338(c); return; // 800AD7D8
L_800AD7DC:;
  c->r[0]=0u+0x00000000u; // 800AD7DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800AD7E0
  return; // 800AD7E4
}

// callback
void f_800AD7E8(Ctx* __restrict c) {
  trace_call(0x800AD7E8u);
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 800AD7E8
  return; // 800AD7EC
}

// __OSLaunchNextFirmware
void f_800AD7F0(Ctx* __restrict c) {
  trace_call(0x800AD7F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD7F0
  c->r[0]=c->lr; // 800AD7F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800AD7F8
  c->r[11]=c->r[1]+0x00000040u; // 800AD7FC
  c->lr=0x800AD804u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AD800
  c->r[3]=0u+0x00000001u; // 800AD804
  c->r[0]=0u+0x00000000u; // 800AD808
  W32(c->r[1]+0x00000014u,c->r[3]); // 800AD80C
  c->r[31]=0u+0xFFFFFFFFu; // 800AD810
  c->r[3]=0u+0x00000020u; // 800AD814
  c->r[4]=0u+0x00000020u; // 800AD818
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AD81C
  c->lr=0x800AD824u; f_800AB804(c); // 800AD820
  c->r[28]=c->r[3]|c->r[3]; // 800AD824
  c->r[3]=0u+0x00000800u; // 800AD828
  c->r[4]=0u+0x00000020u; // 800AD82C
  c->lr=0x800AD834u; f_800AB804(c); // 800AD830
  c->r[29]=c->r[3]|c->r[3]; // 800AD834
  c->r[3]=0u+0x00004A00u; // 800AD838
  c->r[4]=0u+0x00000040u; // 800AD83C
  c->lr=0x800AD844u; f_800AB804(c); // 800AD840
  c->r[26]=c->r[3]|c->r[3]; // 800AD844
  c->r[3]=0u+0x000000E0u; // 800AD848
  c->r[4]=0u+0x00000020u; // 800AD84C
  c->lr=0x800AD854u; f_800AB804(c); // 800AD850
  c->r[4]=0u+0x80000000u; // 800AD854
  c->r[5]=R32(c->r[13]+0xFFFF8CA8u); // 800AD858
  c->r[0]=R32(c->r[4]+0x00003194u); // 800AD85C
  c->r[30]=c->r[3]|c->r[3]; // 800AD860
  cmpu(c,0,c->r[5],c->r[0]); // 800AD864
  if (!crb(c,2)) { goto L_800AD90C; } // 800AD868
  c->r[0]=R32(c->r[4]+0x00003198u); // 800AD86C
  cmps(c,0,(int32_t)c->r[0],0); // 800AD870
  if (crb(c,2)) { goto L_800AD90C; } // 800AD874
  c->lr=0x800AD87Cu; f_80144FB4(c); // 800AD878
  cmps(c,0,(int32_t)c->r[3],0); // 800AD87C
  c->r[31]=c->r[3]|c->r[3]; // 800AD880
  if (!crb(c,2)) { goto L_800AD898; } // 800AD884
  c->r[4]=c->r[30]|c->r[30]; // 800AD888
  c->r[3]=0u+0x00000000u; // 800AD88C
  c->lr=0x800AD894u; f_801451FC(c); // 800AD890
  c->r[31]=c->r[3]|c->r[3]; // 800AD894
L_800AD898:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AD898
  if (!crb(c,2)) { goto L_800AD8B0; } // 800AD89C
  c->r[4]=c->r[1]+0x00000010u; // 800AD8A0
  c->r[3]=0u+0x00000000u; // 800AD8A4
  c->lr=0x800AD8ACu; f_801452A0(c); // 800AD8A8
  c->r[31]=c->r[3]|c->r[3]; // 800AD8AC
L_800AD8B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AD8B0
  if (!crb(c,2)) { goto L_800AD8C8; } // 800AD8B4
  c->r[3]=c->r[26]|c->r[26]; // 800AD8B8
  c->r[4]=c->r[1]+0x00000010u; // 800AD8BC
  c->lr=0x800AD8C4u; f_801452A0(c); // 800AD8C0
  c->r[31]=c->r[3]|c->r[3]; // 800AD8C4
L_800AD8C8:;
  c->lr=0x800AD8CCu; f_80145008(c); // 800AD8C8
  c->lr=0x800AD8D0u; f_800B668C(c); // 800AD8CC
  cmps(c,0,(int32_t)c->r[3],0); // 800AD8D0
  if (crb(c,2)) { goto L_800AD90C; } // 800AD8D4
  c->r[3]=0u+0x00000000u; // 800AD8D8
  c->r[0]=0u+0xFFFFFFFFu; // 800AD8DC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800AD8E0
  c->r[3]=c->r[30]|c->r[30]; // 800AD8E4
  c->r[4]=c->r[1]+0x0000000Cu; // 800AD8E8
  c->r[5]=c->r[1]+0x00000008u; // 800AD8EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800AD8F0
  c->lr=0x800AD8F8u; f_800B6B18(c); // 800AD8F4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800AD8F8
  cmps(c,0,(int32_t)c->r[0],0); // 800AD8FC
  if (!crb(c,2)) { goto L_800AD90C; } // 800AD900
  c->lr=0x800AD908u; f_800B6860(c); // 800AD904
  c->lr=0x800AD90Cu; f_800B2690(c); // 800AD908
L_800AD90C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AD90C
  if (!crb(c,2)) { goto L_800AD930; } // 800AD910
  c->r[3]=0u+0x80000000u; // 800AD914
  c->r[27]=c->r[29]|c->r[29]; // 800AD918
  c->r[0]=R32(c->r[3]+0x00003194u); // 800AD91C
  W32(c->r[29]+0x00000004u,c->r[0]); // 800AD920
  c->r[0]=R32(c->r[3]+0x00003198u); // 800AD924
  W32(c->r[29]+0x00000000u,c->r[0]); // 800AD928
  goto L_800ADBA4; // 800AD92C
L_800AD930:;
  c->r[0]=0u+0x00000000u; // 800AD930
  c->r[3]=0u+0x800B0000u; // 800AD934
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 800AD938
  c->r[3]=c->r[3]+0xFFFFD7E8u; // 800AD93C
  c->lr=0x800AD944u; f_800C0734(c); // 800AD940
L_800AD944:;
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800AD944
  cmps(c,0,(int32_t)c->r[0],0); // 800AD948
  if (crb(c,2)) { IRQCHK(c); goto L_800AD944; } // 800AD94C
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800AD950
  cmpu(c,0,c->r[0],0x00000001u); // 800AD954
  if (crb(c,2)) { goto L_800AD978; } // 800AD958
  c->r[3]=0u+0x80260000u; // 800AD95C
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800AD960
  c->r[3]=c->r[3]+0x000069A8u; // 800AD964
  c->r[5]=0u+0x00000398u; // 800AD968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD96C
  c->lr=0x800AD974u; f_800ACBA4(c); // 800AD970
  c->lr=0x800AD978u; f_800B2690(c); // 800AD974
L_800AD978:;
  c->r[0]=0u+0x00000000u; // 800AD978
  c->r[6]=0u+0x800B0000u; // 800AD97C
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 800AD980
  c->r[3]=c->r[28]|c->r[28]; // 800AD984
  c->r[6]=c->r[6]+0xFFFFD7E8u; // 800AD988
  c->r[4]=0u+0x00000020u; // 800AD98C
  c->r[5]=0u+0x00010000u; // 800AD990
  c->lr=0x800AD998u; f_800C0898(c); // 800AD994
L_800AD998:;
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800AD998
  cmps(c,0,(int32_t)c->r[0],0); // 800AD99C
  if (crb(c,2)) { IRQCHK(c); goto L_800AD998; } // 800AD9A0
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800AD9A4
  cmpu(c,0,c->r[0],0x00000001u); // 800AD9A8
  if (crb(c,2)) { goto L_800AD9CC; } // 800AD9AC
  c->r[3]=0u+0x80260000u; // 800AD9B0
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800AD9B4
  c->r[3]=c->r[3]+0x000069A8u; // 800AD9B8
  c->r[5]=0u+0x000003A2u; // 800AD9BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD9C0
  c->lr=0x800AD9C8u; f_800ACBA4(c); // 800AD9C4
  c->lr=0x800AD9CCu; f_800B2690(c); // 800AD9C8
L_800AD9CC:;
  c->r[0]=0u+0x00000000u; // 800AD9CC
  c->r[6]=0u+0x800B0000u; // 800AD9D0
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 800AD9D4
  c->r[3]=c->r[29]|c->r[29]; // 800AD9D8
  c->r[6]=c->r[6]+0xFFFFD7E8u; // 800AD9DC
  c->r[4]=0u+0x00000800u; // 800AD9E0
  c->r[5]=R32(c->r[28]+0x00000004u); // 800AD9E4
  c->lr=0x800AD9ECu; f_800C0898(c); // 800AD9E8
L_800AD9EC:;
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800AD9EC
  cmps(c,0,(int32_t)c->r[0],0); // 800AD9F0
  if (crb(c,2)) { IRQCHK(c); goto L_800AD9EC; } // 800AD9F4
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800AD9F8
  cmpu(c,0,c->r[0],0x00000001u); // 800AD9FC
  if (crb(c,2)) { goto L_800ADA20; } // 800ADA00
  c->r[3]=0u+0x80260000u; // 800ADA04
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800ADA08
  c->r[3]=c->r[3]+0x000069A8u; // 800ADA0C
  c->r[5]=0u+0x000003AEu; // 800ADA10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADA14
  c->lr=0x800ADA1Cu; f_800ACBA4(c); // 800ADA18
  c->lr=0x800ADA20u; f_800B2690(c); // 800ADA1C
L_800ADA20:;
  c->r[4]=R32(c->r[13]+0xFFFF8CA8u); // 800ADA20
  c->r[6]=c->r[29]|c->r[29]; // 800ADA24
  c->r[27]=0u+0x00000000u; // 800ADA28
  c->r[5]=0u+0x00000000u; // 800ADA2C
  goto L_800ADA4C; // 800ADA30
L_800ADA34:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 800ADA34
  cmpu(c,0,c->r[0],c->r[4]); // 800ADA38
  if (!crb(c,2)) { goto L_800ADA44; } // 800ADA3C
  c->r[27]=c->r[6]|c->r[6]; // 800ADA40
L_800ADA44:;
  c->r[6]=c->r[6]+0x00000008u; // 800ADA44
  c->r[5]=c->r[5]+0x00000001u; // 800ADA48
L_800ADA4C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 800ADA4C
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 800ADA50
  cmpu(c,0,c->r[3],c->r[0]); // 800ADA54
  if (crb(c,0)) { IRQCHK(c); goto L_800ADA34; } // 800ADA58
  cmps(c,0,(int32_t)c->r[27],0); // 800ADA5C
  if (!crb(c,2)) { goto L_800ADA9C; } // 800ADA60
  c->r[4]=R32(c->r[13]+0xFFFF8CA8u); // 800ADA64
  c->r[6]=c->r[29]+0x00000020u; // 800ADA68
  c->r[5]=0u+0x00000000u; // 800ADA6C
  goto L_800ADA8C; // 800ADA70
L_800ADA74:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 800ADA74
  cmpu(c,0,c->r[0],c->r[4]); // 800ADA78
  if (!crb(c,2)) { goto L_800ADA84; } // 800ADA7C
  c->r[27]=c->r[6]|c->r[6]; // 800ADA80
L_800ADA84:;
  c->r[6]=c->r[6]+0x00000008u; // 800ADA84
  c->r[5]=c->r[5]+0x00000001u; // 800ADA88
L_800ADA8C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800ADA8C
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 800ADA90
  cmpu(c,0,c->r[3],c->r[0]); // 800ADA94
  if (crb(c,0)) { IRQCHK(c); goto L_800ADA74; } // 800ADA98
L_800ADA9C:;
  cmps(c,0,(int32_t)c->r[27],0); // 800ADA9C
  if (!crb(c,2)) { goto L_800ADAB8; } // 800ADAA0
  c->r[3]=0u+0x80260000u; // 800ADAA4
  c->r[3]=c->r[3]+0x000069CCu; // 800ADAA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADAAC
  c->lr=0x800ADAB4u; f_800ACBA4(c); // 800ADAB0
  c->lr=0x800ADAB8u; f_800B2690(c); // 800ADAB4
L_800ADAB8:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 800ADAB8
  c->r[4]=0u+0x80000000u; // 800ADABC
  c->r[0]=0u+0x00000000u; // 800ADAC0
  W32(c->r[4]+0x00003194u,c->r[3]); // 800ADAC4
  c->r[3]=R32(c->r[27]+0x00000000u); // 800ADAC8
  W32(c->r[4]+0x00003198u,c->r[3]); // 800ADACC
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 800ADAD0
  c->r[0]=R8(c->r[4]+0x00003187u); // 800ADAD4
  cmpu(c,0,c->r[0],0x00000080u); // 800ADAD8
  if (!crb(c,2)) { goto L_800ADB08; } // 800ADADC
  c->r[9]=0u+0x800B0000u; // 800ADAE0
  c->r[3]=R32(c->r[27]+0x00000000u); // 800ADAE4
  c->r[5]=R32(c->r[1]+0x00000010u); // 800ADAE8
  c->r[4]=c->r[30]|c->r[30]; // 800ADAEC
  c->r[6]=c->r[26]|c->r[26]; // 800ADAF0
  c->r[9]=c->r[9]+0xFFFFD7E8u; // 800ADAF4
  c->r[7]=0u+0x00000000u; // 800ADAF8
  c->r[8]=0u+0x00000000u; // 800ADAFC
  c->lr=0x800ADB04u; f_800C002C(c); // 800ADB00
  goto L_800ADB28; // 800ADB04
L_800ADB08:;
  c->r[8]=0u+0x800B0000u; // 800ADB08
  c->r[3]=R32(c->r[27]+0x00000000u); // 800ADB0C
  c->r[7]=c->r[26]|c->r[26]; // 800ADB10
  c->r[4]=0u+0x00000000u; // 800ADB14
  c->r[8]=c->r[8]+0xFFFFD7E8u; // 800ADB18
  c->r[5]=0u+0x00000000u; // 800ADB1C
  c->r[6]=0u+0x00000000u; // 800ADB20
  c->lr=0x800ADB28u; f_800BFDC4(c); // 800ADB24
L_800ADB28:;
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800ADB28
  cmps(c,0,(int32_t)c->r[0],0); // 800ADB2C
  if (crb(c,2)) { IRQCHK(c); goto L_800ADB28; } // 800ADB30
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800ADB34
  cmpu(c,0,c->r[0],0x00000001u); // 800ADB38
  if (crb(c,2)) { goto L_800ADB5C; } // 800ADB3C
  c->r[3]=0u+0x80260000u; // 800ADB40
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800ADB44
  c->r[3]=c->r[3]+0x000069A8u; // 800ADB48
  c->r[5]=0u+0x000003EBu; // 800ADB4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADB50
  c->lr=0x800ADB58u; f_800ACBA4(c); // 800ADB54
  c->lr=0x800ADB5Cu; f_800B2690(c); // 800ADB58
L_800ADB5C:;
  c->r[0]=0u+0x00000000u; // 800ADB5C
  c->r[3]=0u+0x800B0000u; // 800ADB60
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 800ADB64
  c->r[3]=c->r[3]+0xFFFFD7E8u; // 800ADB68
  c->lr=0x800ADB70u; f_800C0734(c); // 800ADB6C
L_800ADB70:;
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800ADB70
  cmps(c,0,(int32_t)c->r[0],0); // 800ADB74
  if (crb(c,2)) { IRQCHK(c); goto L_800ADB70; } // 800ADB78
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800ADB7C
  cmpu(c,0,c->r[0],0x00000001u); // 800ADB80
  if (crb(c,2)) { goto L_800ADBA4; } // 800ADB84
  c->r[3]=0u+0x80260000u; // 800ADB88
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800ADB8C
  c->r[3]=c->r[3]+0x000069A8u; // 800ADB90
  c->r[5]=0u+0x000003F5u; // 800ADB94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADB98
  c->lr=0x800ADBA0u; f_800ACBA4(c); // 800ADB9C
  c->lr=0x800ADBA4u; f_800B2690(c); // 800ADBA0
L_800ADBA4:;
  c->r[24]=R32(c->r[26]+0x00000184u); // 800ADBA4
  c->r[23]=R32(c->r[26]+0x00000188u); // 800ADBA8
  c->lr=0x800ADBB0u; f_80144FB4(c); // 800ADBAC
  cmps(c,0,(int32_t)c->r[3],0); // 800ADBB0
  c->r[31]=c->r[3]|c->r[3]; // 800ADBB4
  if (crb(c,2)) { goto L_800ADBD8; } // 800ADBB8
  c->r[3]=0u+0x80260000u; // 800ADBBC
  c->r[4]=c->r[31]|c->r[31]; // 800ADBC0
  c->r[3]=c->r[3]+0x000069A8u; // 800ADBC4
  c->r[5]=0u+0x00000400u; // 800ADBC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADBCC
  c->lr=0x800ADBD4u; f_800ACBA4(c); // 800ADBD0
  c->lr=0x800ADBD8u; f_800B2734(c); // 800ADBD4
L_800ADBD8:;
  c->r[4]=c->r[23]|c->r[23]; // 800ADBD8
  c->r[3]=c->r[24]|c->r[24]; // 800ADBDC
  c->r[6]=c->r[1]+0x00000014u; // 800ADBE0
  c->r[5]=0u+0x00000000u; // 800ADBE4
  c->lr=0x800ADBECu; f_801450E4(c); // 800ADBE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADBEC
  c->r[31]=c->r[3]|c->r[3]; // 800ADBF0
  cmpu(c,0,c->r[0],0x00000001u); // 800ADBF4
  if (!crb(c,2)) { goto L_800ADC04; } // 800ADBF8
  cmps(c,0,(int32_t)c->r[3],0); // 800ADBFC
  if (crb(c,2)) { goto L_800ADC20; } // 800ADC00
L_800ADC04:;
  c->r[3]=0u+0x80260000u; // 800ADC04
  c->r[4]=c->r[31]|c->r[31]; // 800ADC08
  c->r[3]=c->r[3]+0x000069A8u; // 800ADC0C
  c->r[5]=0u+0x00000409u; // 800ADC10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADC14
  c->lr=0x800ADC1Cu; f_800ACBA4(c); // 800ADC18
  c->lr=0x800ADC20u; f_800B2734(c); // 800ADC1C
L_800ADC20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADC20
  c->r[4]=0u+0x00000020u; // 800ADC24
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 800ADC28
  c->r[0]=c->r[3]+0x0000001Fu; // 800ADC2C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800ADC30
  c->lr=0x800ADC38u; f_800AB804(c); // 800ADC34
  c->r[25]=c->r[3]|c->r[3]; // 800ADC38
  c->r[4]=c->r[23]|c->r[23]; // 800ADC3C
  c->r[3]=c->r[24]|c->r[24]; // 800ADC40
  c->r[6]=c->r[1]+0x00000014u; // 800ADC44
  c->r[5]=c->r[25]|c->r[25]; // 800ADC48
  c->lr=0x800ADC50u; f_801450E4(c); // 800ADC4C
  cmps(c,0,(int32_t)c->r[3],0); // 800ADC50
  c->r[31]=c->r[3]|c->r[3]; // 800ADC54
  if (crb(c,2)) { goto L_800ADC78; } // 800ADC58
  c->r[3]=0u+0x80260000u; // 800ADC5C
  c->r[4]=c->r[31]|c->r[31]; // 800ADC60
  c->r[3]=c->r[3]+0x000069A8u; // 800ADC64
  c->r[5]=0u+0x00000412u; // 800ADC68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADC6C
  c->lr=0x800ADC74u; f_800ACBA4(c); // 800ADC70
  c->lr=0x800ADC78u; f_800B2734(c); // 800ADC74
L_800ADC78:;
  c->lr=0x800ADC7Cu; f_800BF988(c); // 800ADC78
  c->r[5]=0u+0x80000000u; // 800ADC7C
  c->r[4]=0u+0x00000100u; // 800ADC80
  c->r[29]=R32(c->r[5]+0x0000311Cu); // 800ADC84
  c->r[3]=c->r[5]+0x00003100u; // 800ADC88
  c->r[28]=R32(c->r[5]+0x00003120u); // 800ADC8C
  c->lr=0x800ADC94u; f_800ABD5C(c); // 800ADC90
  c->r[4]=c->r[23]|c->r[23]; // 800ADC94
  c->r[3]=c->r[24]|c->r[24]; // 800ADC98
  c->r[5]=c->r[25]|c->r[25]; // 800ADC9C
  c->lr=0x800ADCA4u; f_80145050(c); // 800ADCA0
  cmps(c,0,(int32_t)c->r[3],0); // 800ADCA4
  c->r[31]=c->r[3]|c->r[3]; // 800ADCA8
  if (crb(c,2)) { goto L_800ADCCC; } // 800ADCAC
  c->r[3]=0u+0x80260000u; // 800ADCB0
  c->r[4]=c->r[31]|c->r[31]; // 800ADCB4
  c->r[3]=c->r[3]+0x000069A8u; // 800ADCB8
  c->r[5]=0u+0x00000422u; // 800ADCBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADCC0
  c->lr=0x800ADCC8u; f_800ACBA4(c); // 800ADCC4
  c->lr=0x800ADCCCu; f_800B2734(c); // 800ADCC8
L_800ADCCC:;
  c->lr=0x800ADCD0u; f_80145008(c); // 800ADCCC
  c->r[31]=0u+0x80000000u; // 800ADCD0
  c->r[4]=0u+0x00000100u; // 800ADCD4
  c->r[3]=c->r[31]+0x00003100u; // 800ADCD8
  c->lr=0x800ADCE0u; f_800ABD00(c); // 800ADCDC
  c->r[3]=R32(c->r[31]+0x0000311Cu); // 800ADCE0
  cmpu(c,0,c->r[29],c->r[3]); // 800ADCE4
  if (!crb(c,0)) { goto L_800ADD3C; } // 800ADCE8
  c->r[0]=R32(c->r[31]+0x00003120u); // 800ADCEC
  c->r[0]=c->r[3]-c->r[0]; // 800ADCF0
  c->r[0]=c->r[29]-c->r[0]; // 800ADCF4
  W32(c->r[31]+0x00003120u,c->r[0]); // 800ADCF8
  c->r[3]=R32(c->r[31]+0x00003128u); // 800ADCFC
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 800ADD00
  c->r[0]=c->r[0]-c->r[3]; // 800ADD04
  c->r[0]=c->r[29]-c->r[0]; // 800ADD08
  W32(c->r[31]+0x00003128u,c->r[0]); // 800ADD0C
  c->r[3]=R32(c->r[31]+0x00003130u); // 800ADD10
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 800ADD14
  c->r[0]=c->r[0]-c->r[3]; // 800ADD18
  c->r[0]=c->r[29]-c->r[0]; // 800ADD1C
  W32(c->r[31]+0x00003130u,c->r[0]); // 800ADD20
  c->r[3]=R32(c->r[31]+0x00003134u); // 800ADD24
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 800ADD28
  c->r[0]=c->r[0]-c->r[3]; // 800ADD2C
  c->r[0]=c->r[29]-c->r[0]; // 800ADD30
  W32(c->r[31]+0x00003134u,c->r[0]); // 800ADD34
  W32(c->r[31]+0x0000311Cu,c->r[29]); // 800ADD38
L_800ADD3C:;
  c->r[3]=0u+0x80000000u; // 800ADD3C
  c->r[0]=R32(c->r[3]+0x00003120u); // 800ADD40
  cmpu(c,0,c->r[28],c->r[0]); // 800ADD44
  if (!crb(c,0)) { goto L_800ADD50; } // 800ADD48
  c->lr=0x800ADD50u; f_800B1958(c); // 800ADD4C
L_800ADD50:;
  c->lr=0x800ADD54u; f_800B4F50(c); // 800ADD50
  c->lr=0x800ADD58u; f_800EFB38(c); // 800ADD54
  c->lr=0x800ADD5Cu; f_800F009C(c); // 800ADD58
  c->lr=0x800ADD60u; f_800BF9D8(c); // 800ADD5C
  c->r[0]=0u+0x00000000u; // 800ADD60
  c->r[3]=0u+0x802B0000u; // 800ADD64
  c->r[4]=0u+0x800B0000u; // 800ADD68
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 800ADD6C
  c->r[3]=c->r[3]+0x00003A40u; // 800ADD70
  c->r[4]=c->r[4]+0xFFFFD7E8u; // 800ADD74
  c->lr=0x800ADD7Cu; f_800BFC3C(c); // 800ADD78
L_800ADD7C:;
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800ADD7C
  cmps(c,0,(int32_t)c->r[0],0); // 800ADD80
  if (crb(c,2)) { IRQCHK(c); goto L_800ADD7C; } // 800ADD84
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800ADD88
  cmpu(c,0,c->r[0],0x00000001u); // 800ADD8C
  if (crb(c,2)) { goto L_800ADDB0; } // 800ADD90
  c->r[3]=0u+0x80260000u; // 800ADD94
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800ADD98
  c->r[3]=c->r[3]+0x000069A8u; // 800ADD9C
  c->r[5]=0u+0x0000044Eu; // 800ADDA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADDA4
  c->lr=0x800ADDACu; f_800ACBA4(c); // 800ADDA8
  c->lr=0x800ADDB0u; f_800B2690(c); // 800ADDAC
L_800ADDB0:;
  c->r[0]=0u+0x00000000u; // 800ADDB0
  c->r[3]=0u+0x80000000u; // 800ADDB4
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 800ADDB8
  c->r[0]=R8(c->r[3]+0x00003187u); // 800ADDBC
  cmpu(c,0,c->r[0],0x00000080u); // 800ADDC0
  if (!crb(c,2)) { goto L_800ADDF0; } // 800ADDC4
  c->r[9]=0u+0x800B0000u; // 800ADDC8
  c->r[3]=R32(c->r[27]+0x00000000u); // 800ADDCC
  c->r[5]=R32(c->r[1]+0x00000010u); // 800ADDD0
  c->r[4]=c->r[30]|c->r[30]; // 800ADDD4
  c->r[6]=c->r[26]|c->r[26]; // 800ADDD8
  c->r[9]=c->r[9]+0xFFFFD7E8u; // 800ADDDC
  c->r[7]=0u+0x00000000u; // 800ADDE0
  c->r[8]=0u+0x00000000u; // 800ADDE4
  c->lr=0x800ADDECu; f_800C002C(c); // 800ADDE8
  goto L_800ADE10; // 800ADDEC
L_800ADDF0:;
  c->r[8]=0u+0x800B0000u; // 800ADDF0
  c->r[3]=R32(c->r[27]+0x00000000u); // 800ADDF4
  c->r[7]=c->r[26]|c->r[26]; // 800ADDF8
  c->r[4]=0u+0x00000000u; // 800ADDFC
  c->r[8]=c->r[8]+0xFFFFD7E8u; // 800ADE00
  c->r[5]=0u+0x00000000u; // 800ADE04
  c->r[6]=0u+0x00000000u; // 800ADE08
  c->lr=0x800ADE10u; f_800BFDC4(c); // 800ADE0C
L_800ADE10:;
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800ADE10
  cmps(c,0,(int32_t)c->r[0],0); // 800ADE14
  if (crb(c,2)) { IRQCHK(c); goto L_800ADE10; } // 800ADE18
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800ADE1C
  cmpu(c,0,c->r[0],0x00000001u); // 800ADE20
  if (crb(c,2)) { goto L_800ADE44; } // 800ADE24
  c->r[3]=0u+0x80260000u; // 800ADE28
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800ADE2C
  c->r[3]=c->r[3]+0x000069A8u; // 800ADE30
  c->r[5]=0u+0x00000465u; // 800ADE34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ADE38
  c->lr=0x800ADE40u; f_800ACBA4(c); // 800ADE3C
  c->lr=0x800ADE44u; f_800B2690(c); // 800ADE40
L_800ADE44:;
  c->r[11]=c->r[1]+0x00000040u; // 800ADE44
  c->lr=0x800ADE4Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ADE48
  c->r[0]=R32(c->r[1]+0x00000044u); // 800ADE4C
  c->lr=c->r[0]; // 800ADE50
  c->r[1]=c->r[1]+0x00000040u; // 800ADE54
  return; // 800ADE58
}

// __OSLaunchMenu
void f_800ADE5C(Ctx* __restrict c) {
  trace_call(0x800ADE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADE5C
  c->r[0]=c->lr; // 800ADE60
  c->r[3]=0u+0x81280000u; // 800ADE64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ADE68
  c->r[0]=0u+0x00000001u; // 800ADE6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ADE70
  W32(c->r[1]+0x00000008u,c->r[0]); // 800ADE74
  c->lr=0x800ADE7Cu; f_800AB7FC(c); // 800ADE78
  c->r[3]=0u+0x812F0000u; // 800ADE7C
  c->lr=0x800ADE84u; f_800AB7E4(c); // 800ADE80
  c->lr=0x800ADE88u; f_80144FB4(c); // 800ADE84
  cmps(c,0,(int32_t)c->r[3],0); // 800ADE88
  if (!crb(c,2)) { goto L_800ADF0C; } // 800ADE8C
  c->r[6]=c->r[1]+0x00000008u; // 800ADE90
  c->r[4]=0u+0x00000002u; // 800ADE94
  c->r[3]=0u+0x00000001u; // 800ADE98
  c->r[5]=0u+0x00000000u; // 800ADE9C
  c->lr=0x800ADEA4u; f_801450E4(c); // 800ADEA0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800ADEA4
  cmpu(c,0,c->r[0],0x00000001u); // 800ADEA8
  if (!crb(c,2)) { goto L_800ADF0C; } // 800ADEAC
  cmps(c,0,(int32_t)c->r[3],0); // 800ADEB0
  if (crb(c,2)) { goto L_800ADEBC; } // 800ADEB4
  goto L_800ADF0C; // 800ADEB8
L_800ADEBC:;
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 800ADEBC
  c->r[4]=0u+0x00000020u; // 800ADEC0
  c->r[0]=c->r[3]+0x0000001Fu; // 800ADEC4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800ADEC8
  c->lr=0x800ADED0u; f_800AB804(c); // 800ADECC
  c->r[31]=c->r[3]|c->r[3]; // 800ADED0
  c->r[6]=c->r[1]+0x00000008u; // 800ADED4
  c->r[5]=c->r[31]|c->r[31]; // 800ADED8
  c->r[4]=0u+0x00000002u; // 800ADEDC
  c->r[3]=0u+0x00000001u; // 800ADEE0
  c->lr=0x800ADEE8u; f_801450E4(c); // 800ADEE4
  cmps(c,0,(int32_t)c->r[3],0); // 800ADEE8
  if (!crb(c,2)) { goto L_800ADF0C; } // 800ADEEC
  c->r[5]=c->r[31]|c->r[31]; // 800ADEF0
  c->r[4]=0u+0x00000002u; // 800ADEF4
  c->r[3]=0u+0x00000001u; // 800ADEF8
  c->lr=0x800ADF00u; f_80145050(c); // 800ADEFC
  cmps(c,0,(int32_t)c->r[3],0); // 800ADF00
  if (!crb(c,2)) { goto L_800ADF0C; } // 800ADF04
L_800ADF08:;
  IRQCHK(c); goto L_800ADF08; // 800ADF08
L_800ADF0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ADF0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ADF10
  c->lr=c->r[0]; // 800ADF14
  c->r[1]=c->r[1]+0x00000020u; // 800ADF18
  return; // 800ADF1C
}

// __OSBootDolSimple
void f_800ADF20(Ctx* __restrict c) {
  trace_call(0x800ADF20u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800ADF20
  c->r[12]=c->r[1]|c->r[1]; // 800ADF24
  c->r[11]=addc(c,~c->r[11],0xFFFFFDE0u,1); // 800ADF28
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADF2C
  c->r[0]=c->lr; // 800ADF30
  c->r[11]=c->r[12]|c->r[12]; // 800ADF34
  W32(c->r[12]+0x00000004u,c->r[0]); // 800ADF38
  c->lr=0x800ADF40u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ADF3C
  c->r[27]=c->r[3]|c->r[3]; // 800ADF40
  c->r[24]=c->r[4]|c->r[4]; // 800ADF44
  c->r[28]=c->r[5]|c->r[5]; // 800ADF48
  c->r[29]=c->r[6]|c->r[6]; // 800ADF4C
  c->r[31]=c->r[7]|c->r[7]; // 800ADF50
  c->r[26]=c->r[8]|c->r[8]; // 800ADF54
  c->r[25]=c->r[9]|c->r[9]; // 800ADF58
  c->lr=0x800ADF60u; f_800B087C(c); // 800ADF5C
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800ADF60
  cmps(c,0,(int32_t)c->r[0],0); // 800ADF64
  if (crb(c,2)) { goto L_800ADF78; } // 800ADF68
  c->r[3]=0u+0x80000000u; // 800ADF6C
  c->r[0]=R32(c->r[3]+0x00003194u); // 800ADF70
  W32(c->r[13]+0xFFFF8CA8u,c->r[0]); // 800ADF74
L_800ADF78:;
  c->r[3]=0u+0x000C0000u; // 800ADF78
  c->r[3]=c->r[3]+0xFFFFA2CFu; // 800ADF7C
  c->lr=0x800ADF84u; f_800B1918(c); // 800ADF80
  c->r[3]=0u+0x0000001Cu; // 800ADF84
  c->r[4]=0u+0x00000001u; // 800ADF88
  c->lr=0x800ADF90u; f_800AB804(c); // 800ADF8C
  c->r[0]=0u+0x00000001u; // 800ADF90
  cmps(c,0,(int32_t)c->r[31],0); // 800ADF94
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ADF98
  c->r[30]=c->r[3]|c->r[3]; // 800ADF9C
  W32(c->r[3]+0x00000004u,c->r[24]); // 800ADFA0
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 800ADFA4
  W32(c->r[3]+0x00000010u,c->r[29]); // 800ADFA8
  W32(c->r[3]+0x00000014u,c->r[31]); // 800ADFAC
  if (!crb(c,2)) { goto L_800AE000; } // 800ADFB0
  c->r[3]=0u+0x00002000u; // 800ADFB4
  c->r[4]=0u+0x00000001u; // 800ADFB8
  c->lr=0x800ADFC0u; f_800AB804(c); // 800ADFBC
  W32(c->r[30]+0x00000018u,c->r[3]); // 800ADFC0
  c->r[0]=R32(c->r[13]+0xFFFF8CA8u); // 800ADFC4
  cmpu(c,0,c->r[0],0x00000002u); // 800ADFC8
  if (!crb(c,2)) { goto L_800ADFF0; } // 800ADFCC
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800ADFD0
  cmps(c,0,(int32_t)c->r[0],0); // 800ADFD4
  if (!crb(c,2)) { goto L_800ADFF0; } // 800ADFD8
  c->r[3]=R32(c->r[30]+0x00000018u); // 800ADFDC
  c->r[4]=c->r[26]|c->r[26]; // 800ADFE0
  c->r[5]=c->r[25]|c->r[25]; // 800ADFE4
  c->lr=0x800ADFECu; f_800AD5B0(c); // 800ADFE8
  goto L_800AE000; // 800ADFEC
L_800ADFF0:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 800ADFF0
  c->r[4]=c->r[26]|c->r[26]; // 800ADFF4
  c->r[5]=c->r[25]|c->r[25]; // 800ADFF8
  c->lr=0x800AE000u; f_800AD2D8(c); // 800ADFFC
L_800AE000:;
  c->lr=0x800AE004u; f_800B9CB8(c); // 800AE000
  c->r[3]=0u+0x00000001u; // 800AE004
  c->lr=0x800AE00Cu; f_800BDE88(c); // 800AE008
  c->lr=0x800AE010u; f_800BDE98(c); // 800AE00C
  c->r[0]=0u+0x00000000u; // 800AE010
  c->r[3]=0u+0x800B0000u; // 800AE014
  W32(c->r[13]+0xFFFF8CB8u,c->r[0]); // 800AE018
  c->r[3]=c->r[3]+0xFFFFD7B8u; // 800AE01C
  c->lr=0x800AE024u; f_800BE44C(c); // 800AE020
  c->r[3]=0u+0xFFFFFFF0u; // 800AE024
  c->lr=0x800AE02Cu; f_800B0C0C(c); // 800AE028
  c->r[3]=0u+0x00000010u; // 800AE02C
  c->lr=0x800AE034u; f_800B0C8C(c); // 800AE030
  c->lr=0x800AE038u; f_800B0890(c); // 800AE034
L_800AE038:;
  c->r[0]=R32(c->r[13]+0xFFFF8CB8u); // 800AE038
  cmps(c,0,(int32_t)c->r[0],1); // 800AE03C
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE038; } // 800AE040
  c->lr=0x800AE048u; f_800AD7F0(c); // 800AE044
  c->r[0]=c->r[24]+0x60000000u; // 800AE048
  cmpu(c,0,c->r[0],0x00000000u); // 800AE04C
  if (!crb(c,2)) { goto L_800AE0AC; } // 800AE050
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800AE054
  cmps(c,0,(int32_t)c->r[0],0); // 800AE058
  if (!crb(c,2)) { goto L_800AE0AC; } // 800AE05C
  c->lr=0x800AE064u; f_80144FB4(c); // 800AE060
  cmps(c,0,(int32_t)c->r[3],0); // 800AE064
  if (!crb(c,2)) { goto L_800AE758; } // 800AE068
  c->r[3]=c->r[1]+0x00000060u; // 800AE06C
  c->lr=0x800AE074u; f_8014553C(c); // 800AE070
  cmps(c,0,(int32_t)c->r[3],0); // 800AE074
  if (!crb(c,2)) { goto L_800AE758; } // 800AE078
  c->lr=0x800AE080u; f_80145008(c); // 800AE07C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE080
  if (!crb(c,2)) { goto L_800AE758; } // 800AE084
  c->r[3]=R32(c->r[30]+0x00000018u); // 800AE088
  c->r[4]=0u+0x00000011u; // 800AE08C
  c->r[0]=R32(c->r[25]+0x00000004u); // 800AE090
  c->r[5]=c->r[13]+0xFFFF80D8u; // 800AE094
  c->r[7]=R32(c->r[1]+0x00000060u); // 800AE098
  c->r[8]=R32(c->r[1]+0x00000064u); // 800AE09C
  c->r[3]=c->r[3]+c->r[0]; // 800AE0A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AE0A4
  c->lr=0x800AE0ACu; f_800DA2D4(c); // 800AE0A8
L_800AE0AC:;
  c->r[3]=0u+0x00000020u; // 800AE0AC
  c->r[4]=0u+0x00000020u; // 800AE0B0
  c->lr=0x800AE0B8u; f_800AB804(c); // 800AE0B4
  c->r[6]=R32(c->r[13]+0xFFFF8CACu); // 800AE0B8
  c->r[31]=c->r[3]|c->r[3]; // 800AE0BC
  cmps(c,0,(int32_t)c->r[6],0); // 800AE0C0
  if (crb(c,2)) { goto L_800AE0CC; } // 800AE0C4
  goto L_800AE188; // 800AE0C8
L_800AE0CC:;
  c->r[26]=0u+0x80000000u; // 800AE0CC
  c->r[0]=R32(c->r[26]+0x000030F4u); // 800AE0D0
  cmps(c,0,(int32_t)c->r[0],0); // 800AE0D4
  if (crb(c,2)) { goto L_800AE180; } // 800AE0D8
  c->r[3]=0u+0x00000040u; // 800AE0DC
  c->r[4]=0u+0x00000020u; // 800AE0E0
  c->lr=0x800AE0E8u; f_800AB804(c); // 800AE0E4
  c->r[6]=R8(c->r[2]+0xFFFF8F18u); // 800AE0E8
  c->r[25]=c->r[3]|c->r[3]; // 800AE0EC
  c->r[10]=R8(c->r[2]+0xFFFF8F19u); // 800AE0F0
  c->r[4]=c->r[25]|c->r[25]; // 800AE0F4
  c->r[9]=R8(c->r[2]+0xFFFF8F1Au); // 800AE0F8
  c->r[3]=c->r[1]+0x00000140u; // 800AE0FC
  c->r[0]=R8(c->r[2]+0xFFFF8F1Bu); // 800AE100
  c->r[5]=0u+0x00000040u; // 800AE104
  c->r[8]=R32(c->r[26]+0x000030F4u); // 800AE108
  c->r[7]=0u+0x00000000u; // 800AE10C
  W8(c->r[1]+0x00000048u,c->r[6]); // 800AE110
  c->r[6]=sraw(c,c->r[8],2); // 800AE114
  c->r[8]=0u+0x00000000u; // 800AE118
  W8(c->r[1]+0x00000049u,c->r[10]); // 800AE11C
  W8(c->r[1]+0x0000004Au,c->r[9]); // 800AE120
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 800AE124
  c->lr=0x800AE12Cu; f_800BDB68(c); // 800AE128
  goto L_800AE154; // 800AE12C
L_800AE130:;
  c->r[3]=c->r[1]+0x00000140u; // 800AE130
  c->lr=0x800AE138u; f_800BDD24(c); // 800AE134
  cmps(c,0,(int32_t)c->r[3],2); // 800AE138
  if (crb(c,1)) { goto L_800AE150; } // 800AE13C
  c->r[3]=c->r[1]+0x00000140u; // 800AE140
  c->lr=0x800AE148u; f_800BDD24(c); // 800AE144
  cmps(c,0,(int32_t)c->r[3],0); // 800AE148
  if (!crb(c,0)) { goto L_800AE154; } // 800AE14C
L_800AE150:;
  c->lr=0x800AE154u; f_800B2690(c); // 800AE150
L_800AE154:;
  c->r[3]=c->r[1]+0x00000140u; // 800AE154
  c->lr=0x800AE15Cu; f_800BDD24(c); // 800AE158
  cmps(c,0,(int32_t)c->r[3],0); // 800AE15C
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE130; } // 800AE160
  c->r[3]=0u+0x80000000u; // 800AE164
  c->r[4]=R32(c->r[25]+0x00000038u); // 800AE168
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800AE16C
  c->r[0]=c->r[0]+c->r[4]; // 800AE170
  c->r[6]=sraw(c,c->r[0],2); // 800AE174
  W32(c->r[13]+0xFFFF8CACu,c->r[6]); // 800AE178
  goto L_800AE188; // 800AE17C
L_800AE180:;
  c->r[6]=0u+0x00000910u; // 800AE180
  W32(c->r[13]+0xFFFF8CACu,c->r[6]); // 800AE184
L_800AE188:;
  c->r[7]=R8(c->r[2]+0xFFFF8F18u); // 800AE188
  c->r[4]=c->r[31]|c->r[31]; // 800AE18C
  c->r[10]=R8(c->r[2]+0xFFFF8F19u); // 800AE190
  c->r[3]=c->r[1]+0x00000170u; // 800AE194
  c->r[9]=R8(c->r[2]+0xFFFF8F1Au); // 800AE198
  c->r[5]=0u+0x00000020u; // 800AE19C
  c->r[0]=R8(c->r[2]+0xFFFF8F1Bu); // 800AE1A0
  c->r[8]=0u+0x00000000u; // 800AE1A4
  W8(c->r[1]+0x0000004Cu,c->r[7]); // 800AE1A8
  c->r[7]=0u+0x00000000u; // 800AE1AC
  W8(c->r[1]+0x0000004Du,c->r[10]); // 800AE1B0
  W8(c->r[1]+0x0000004Eu,c->r[9]); // 800AE1B4
  W8(c->r[1]+0x0000004Fu,c->r[0]); // 800AE1B8
  c->lr=0x800AE1C0u; f_800BDB68(c); // 800AE1BC
  goto L_800AE1E8; // 800AE1C0
L_800AE1C4:;
  c->r[3]=c->r[1]+0x00000170u; // 800AE1C4
  c->lr=0x800AE1CCu; f_800BDD24(c); // 800AE1C8
  cmps(c,0,(int32_t)c->r[3],2); // 800AE1CC
  if (crb(c,1)) { goto L_800AE1E4; } // 800AE1D0
  c->r[3]=c->r[1]+0x00000170u; // 800AE1D4
  c->lr=0x800AE1DCu; f_800BDD24(c); // 800AE1D8
  cmps(c,0,(int32_t)c->r[3],0); // 800AE1DC
  if (!crb(c,0)) { goto L_800AE1E8; } // 800AE1E0
L_800AE1E4:;
  c->lr=0x800AE1E8u; f_800B2690(c); // 800AE1E4
L_800AE1E8:;
  c->r[3]=c->r[1]+0x00000170u; // 800AE1E8
  c->lr=0x800AE1F0u; f_800BDD24(c); // 800AE1EC
  cmps(c,0,(int32_t)c->r[3],0); // 800AE1F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE1C4; } // 800AE1F4
  c->r[6]=R32(c->r[13]+0xFFFF8CACu); // 800AE1F8
  cmps(c,0,(int32_t)c->r[6],0); // 800AE1FC
  if (crb(c,2)) { goto L_800AE208; } // 800AE200
  goto L_800AE2C4; // 800AE204
L_800AE208:;
  c->r[26]=0u+0x80000000u; // 800AE208
  c->r[0]=R32(c->r[26]+0x000030F4u); // 800AE20C
  cmps(c,0,(int32_t)c->r[0],0); // 800AE210
  if (crb(c,2)) { goto L_800AE2BC; } // 800AE214
  c->r[3]=0u+0x00000040u; // 800AE218
  c->r[4]=0u+0x00000020u; // 800AE21C
  c->lr=0x800AE224u; f_800AB804(c); // 800AE220
  c->r[6]=R8(c->r[2]+0xFFFF8F18u); // 800AE224
  c->r[25]=c->r[3]|c->r[3]; // 800AE228
  c->r[10]=R8(c->r[2]+0xFFFF8F19u); // 800AE22C
  c->r[4]=c->r[25]|c->r[25]; // 800AE230
  c->r[9]=R8(c->r[2]+0xFFFF8F1Au); // 800AE234
  c->r[3]=c->r[1]+0x000001A0u; // 800AE238
  c->r[0]=R8(c->r[2]+0xFFFF8F1Bu); // 800AE23C
  c->r[5]=0u+0x00000040u; // 800AE240
  c->r[8]=R32(c->r[26]+0x000030F4u); // 800AE244
  c->r[7]=0u+0x00000000u; // 800AE248
  W8(c->r[1]+0x00000050u,c->r[6]); // 800AE24C
  c->r[6]=sraw(c,c->r[8],2); // 800AE250
  c->r[8]=0u+0x00000000u; // 800AE254
  W8(c->r[1]+0x00000051u,c->r[10]); // 800AE258
  W8(c->r[1]+0x00000052u,c->r[9]); // 800AE25C
  W8(c->r[1]+0x00000053u,c->r[0]); // 800AE260
  c->lr=0x800AE268u; f_800BDB68(c); // 800AE264
  goto L_800AE290; // 800AE268
L_800AE26C:;
  c->r[3]=c->r[1]+0x000001A0u; // 800AE26C
  c->lr=0x800AE274u; f_800BDD24(c); // 800AE270
  cmps(c,0,(int32_t)c->r[3],2); // 800AE274
  if (crb(c,1)) { goto L_800AE28C; } // 800AE278
  c->r[3]=c->r[1]+0x000001A0u; // 800AE27C
  c->lr=0x800AE284u; f_800BDD24(c); // 800AE280
  cmps(c,0,(int32_t)c->r[3],0); // 800AE284
  if (!crb(c,0)) { goto L_800AE290; } // 800AE288
L_800AE28C:;
  c->lr=0x800AE290u; f_800B2690(c); // 800AE28C
L_800AE290:;
  c->r[3]=c->r[1]+0x000001A0u; // 800AE290
  c->lr=0x800AE298u; f_800BDD24(c); // 800AE294
  cmps(c,0,(int32_t)c->r[3],0); // 800AE298
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE26C; } // 800AE29C
  c->r[3]=0u+0x80000000u; // 800AE2A0
  c->r[4]=R32(c->r[25]+0x00000038u); // 800AE2A4
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800AE2A8
  c->r[0]=c->r[0]+c->r[4]; // 800AE2AC
  c->r[6]=sraw(c,c->r[0],2); // 800AE2B0
  W32(c->r[13]+0xFFFF8CACu,c->r[6]); // 800AE2B4
  goto L_800AE2C4; // 800AE2B8
L_800AE2BC:;
  c->r[6]=0u+0x00000910u; // 800AE2BC
  W32(c->r[13]+0xFFFF8CACu,c->r[6]); // 800AE2C0
L_800AE2C4:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 800AE2C4
  c->r[3]=c->r[1]+0x000001D0u; // 800AE2C8
  c->r[7]=R8(c->r[2]+0xFFFF8F18u); // 800AE2CC
  c->r[6]=c->r[6]+0x00000008u; // 800AE2D0
  c->r[0]=c->r[4]+0x0000001Fu; // 800AE2D4
  c->r[10]=R8(c->r[2]+0xFFFF8F19u); // 800AE2D8
  c->r[9]=R8(c->r[2]+0xFFFF8F1Au); // 800AE2DC
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800AE2E0
  c->r[0]=R8(c->r[2]+0xFFFF8F1Bu); // 800AE2E4
  c->r[4]=0u+0x81200000u; // 800AE2E8
  W8(c->r[1]+0x00000054u,c->r[7]); // 800AE2EC
  c->r[7]=0u+0x00000000u; // 800AE2F0
  c->r[8]=0u+0x00000000u; // 800AE2F4
  W8(c->r[1]+0x00000055u,c->r[10]); // 800AE2F8
  W8(c->r[1]+0x00000056u,c->r[9]); // 800AE2FC
  W8(c->r[1]+0x00000057u,c->r[0]); // 800AE300
  c->lr=0x800AE308u; f_800BDB68(c); // 800AE304
  goto L_800AE330; // 800AE308
L_800AE30C:;
  c->r[3]=c->r[1]+0x000001D0u; // 800AE30C
  c->lr=0x800AE314u; f_800BDD24(c); // 800AE310
  cmps(c,0,(int32_t)c->r[3],2); // 800AE314
  if (crb(c,1)) { goto L_800AE32C; } // 800AE318
  c->r[3]=c->r[1]+0x000001D0u; // 800AE31C
  c->lr=0x800AE324u; f_800BDD24(c); // 800AE320
  cmps(c,0,(int32_t)c->r[3],0); // 800AE324
  if (!crb(c,0)) { goto L_800AE330; } // 800AE328
L_800AE32C:;
  c->lr=0x800AE330u; f_800B2690(c); // 800AE32C
L_800AE330:;
  c->r[3]=c->r[1]+0x000001D0u; // 800AE330
  c->lr=0x800AE338u; f_800BDD24(c); // 800AE334
  cmps(c,0,(int32_t)c->r[3],0); // 800AE338
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE30C; } // 800AE33C
  c->r[4]=R32(c->r[31]+0x00000014u); // 800AE340
  c->r[3]=0u+0x81200000u; // 800AE344
  c->r[0]=c->r[4]+0x0000001Fu; // 800AE348
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800AE34C
  c->lr=0x800AE354u; f_800ABE10(c); // 800AE350
  c->r[4]=0u+0x80260000u; // 800AE354
  c->r[3]=c->r[31]|c->r[31]; // 800AE358
  c->r[4]=c->r[4]+0x00006A08u; // 800AE35C
  c->r[5]=0u+0x0000000Au; // 800AE360
  c->lr=0x800AE368u; f_800DBC40(c); // 800AE364
  cmps(c,0,(int32_t)c->r[3],0); // 800AE368
  if (!crb(c,1)) { goto L_800AE378; } // 800AE36C
  c->r[0]=0u+0x00000001u; // 800AE370
  goto L_800AE37C; // 800AE374
L_800AE378:;
  c->r[0]=0u+0x00000000u; // 800AE378
L_800AE37C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AE37C
  if (crb(c,2)) { goto L_800AE5CC; } // 800AE380
  c->r[0]=c->r[27]+0x00010000u; // 800AE384
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800AE388
  if (!crb(c,2)) { goto L_800AE46C; } // 800AE38C
  c->r[6]=R32(c->r[13]+0xFFFF8CACu); // 800AE390
  cmps(c,0,(int32_t)c->r[6],0); // 800AE394
  if (crb(c,2)) { goto L_800AE3A0; } // 800AE398
  goto L_800AE45C; // 800AE39C
L_800AE3A0:;
  c->r[27]=0u+0x80000000u; // 800AE3A0
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800AE3A4
  cmps(c,0,(int32_t)c->r[0],0); // 800AE3A8
  if (crb(c,2)) { goto L_800AE454; } // 800AE3AC
  c->r[3]=0u+0x00000040u; // 800AE3B0
  c->r[4]=0u+0x00000020u; // 800AE3B4
  c->lr=0x800AE3BCu; f_800AB804(c); // 800AE3B8
  c->r[6]=R8(c->r[2]+0xFFFF8F18u); // 800AE3BC
  c->r[25]=c->r[3]|c->r[3]; // 800AE3C0
  c->r[10]=R8(c->r[2]+0xFFFF8F19u); // 800AE3C4
  c->r[4]=c->r[25]|c->r[25]; // 800AE3C8
  c->r[9]=R8(c->r[2]+0xFFFF8F1Au); // 800AE3CC
  c->r[3]=c->r[1]+0x00000110u; // 800AE3D0
  c->r[0]=R8(c->r[2]+0xFFFF8F1Bu); // 800AE3D4
  c->r[5]=0u+0x00000040u; // 800AE3D8
  c->r[8]=R32(c->r[27]+0x000030F4u); // 800AE3DC
  c->r[7]=0u+0x00000000u; // 800AE3E0
  W8(c->r[1]+0x00000044u,c->r[6]); // 800AE3E4
  c->r[6]=sraw(c,c->r[8],2); // 800AE3E8
  c->r[8]=0u+0x00000000u; // 800AE3EC
  W8(c->r[1]+0x00000045u,c->r[10]); // 800AE3F0
  W8(c->r[1]+0x00000046u,c->r[9]); // 800AE3F4
  W8(c->r[1]+0x00000047u,c->r[0]); // 800AE3F8
  c->lr=0x800AE400u; f_800BDB68(c); // 800AE3FC
  goto L_800AE428; // 800AE400
L_800AE404:;
  c->r[3]=c->r[1]+0x00000110u; // 800AE404
  c->lr=0x800AE40Cu; f_800BDD24(c); // 800AE408
  cmps(c,0,(int32_t)c->r[3],2); // 800AE40C
  if (crb(c,1)) { goto L_800AE424; } // 800AE410
  c->r[3]=c->r[1]+0x00000110u; // 800AE414
  c->lr=0x800AE41Cu; f_800BDD24(c); // 800AE418
  cmps(c,0,(int32_t)c->r[3],0); // 800AE41C
  if (!crb(c,0)) { goto L_800AE428; } // 800AE420
L_800AE424:;
  c->lr=0x800AE428u; f_800B2690(c); // 800AE424
L_800AE428:;
  c->r[3]=c->r[1]+0x00000110u; // 800AE428
  c->lr=0x800AE430u; f_800BDD24(c); // 800AE42C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE430
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE404; } // 800AE434
  c->r[3]=0u+0x80000000u; // 800AE438
  c->r[4]=R32(c->r[25]+0x00000038u); // 800AE43C
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800AE440
  c->r[0]=c->r[0]+c->r[4]; // 800AE444
  c->r[6]=sraw(c,c->r[0],2); // 800AE448
  W32(c->r[13]+0xFFFF8CACu,c->r[6]); // 800AE44C
  goto L_800AE45C; // 800AE450
L_800AE454:;
  c->r[6]=0u+0x00000910u; // 800AE454
  W32(c->r[13]+0xFFFF8CACu,c->r[6]); // 800AE458
L_800AE45C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800AE45C
  c->r[0]=c->r[3]+0x00000020u; // 800AE460
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800AE464
  c->r[27]=c->r[0]+c->r[6]; // 800AE468
L_800AE46C:;
  W32(c->r[30]+0x00000008u,c->r[27]); // 800AE46C
  c->r[3]=c->r[1]+0x00000028u; // 800AE470
  c->r[4]=c->r[1]+0x0000002Cu; // 800AE474
  c->r[5]=c->r[1]+0x00000030u; // 800AE478
  c->r[12]=R32(c->r[31]+0x00000010u); // 800AE47C
  c->ctr=c->r[12]; // 800AE480
  if (true) { c->lr=0x800AE488u; dispatch(c,c->ctr); } // 800AE484
  c->r[3]=0u+0x0000001Cu; // 800AE488
  c->r[4]=0u+0x00000001u; // 800AE48C
  c->lr=0x800AE494u; f_800AB804(c); // 800AE490
  c->r[25]=c->r[3]|c->r[3]; // 800AE494
  c->r[4]=c->r[30]|c->r[30]; // 800AE498
  c->r[5]=0u+0x0000001Cu; // 800AE49C
  c->lr=0x800AE4A4u; f_80004338(c); // 800AE4A0
  c->r[4]=0u+0x80000000u; // 800AE4A4
  c->r[3]=0u+0x800B0000u; // 800AE4A8
  W32(c->r[4]+0x000030F0u,c->r[25]); // 800AE4AC
  c->r[3]=c->r[3]+0xFFFFCBA4u; // 800AE4B0
  c->r[12]=R32(c->r[1]+0x00000028u); // 800AE4B4
  c->ctr=c->r[12]; // 800AE4B8
  if (true) { c->lr=0x800AE4C0u; dispatch(c,c->ctr); } // 800AE4BC
  c->r[3]=c->r[25]|c->r[25]; // 800AE4C0
  c->lr=0x800AE4C8u; f_800AB7FC(c); // 800AE4C4
  goto L_800AE548; // 800AE4C8
L_800AE4CC:;
  c->r[5]=R8(c->r[2]+0xFFFF8F18u); // 800AE4CC
  c->r[3]=c->r[1]+0x000000E0u; // 800AE4D0
  c->r[4]=R8(c->r[2]+0xFFFF8F19u); // 800AE4D4
  c->r[7]=0u+0x00000000u; // 800AE4D8
  c->r[9]=R8(c->r[2]+0xFFFF8F1Au); // 800AE4DC
  c->r[8]=0u+0x00000000u; // 800AE4E0
  c->r[0]=R8(c->r[2]+0xFFFF8F1Bu); // 800AE4E4
  W8(c->r[1]+0x00000040u,c->r[5]); // 800AE4E8
  c->r[10]=R32(c->r[1]+0x0000003Cu); // 800AE4EC
  c->r[6]=R32(c->r[13]+0xFFFF8DF8u); // 800AE4F0
  W8(c->r[1]+0x00000041u,c->r[4]); // 800AE4F4
  c->r[5]=R32(c->r[1]+0x00000038u); // 800AE4F8
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[10]>>((c->r[6])&31)); // 800AE4FC
  c->r[4]=R32(c->r[1]+0x00000034u); // 800AE500
  W8(c->r[1]+0x00000042u,c->r[9]); // 800AE504
  W8(c->r[1]+0x00000043u,c->r[0]); // 800AE508
  c->lr=0x800AE510u; f_800BDB68(c); // 800AE50C
  goto L_800AE538; // 800AE510
L_800AE514:;
  c->r[3]=c->r[1]+0x000000E0u; // 800AE514
  c->lr=0x800AE51Cu; f_800BDD24(c); // 800AE518
  cmps(c,0,(int32_t)c->r[3],2); // 800AE51C
  if (crb(c,1)) { goto L_800AE534; } // 800AE520
  c->r[3]=c->r[1]+0x000000E0u; // 800AE524
  c->lr=0x800AE52Cu; f_800BDD24(c); // 800AE528
  cmps(c,0,(int32_t)c->r[3],0); // 800AE52C
  if (!crb(c,0)) { goto L_800AE538; } // 800AE530
L_800AE534:;
  c->lr=0x800AE538u; f_800B2690(c); // 800AE534
L_800AE538:;
  c->r[3]=c->r[1]+0x000000E0u; // 800AE538
  c->lr=0x800AE540u; f_800BDD24(c); // 800AE53C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE540
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE514; } // 800AE544
L_800AE548:;
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 800AE548
  c->r[3]=c->r[1]+0x00000034u; // 800AE54C
  c->r[4]=c->r[1]+0x00000038u; // 800AE550
  c->r[5]=c->r[1]+0x0000003Cu; // 800AE554
  c->ctr=c->r[12]; // 800AE558
  if (true) { c->lr=0x800AE560u; dispatch(c,c->ctr); } // 800AE55C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE560
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE4CC; } // 800AE564
  c->r[12]=R32(c->r[1]+0x00000030u); // 800AE568
  c->ctr=c->r[12]; // 800AE56C
  if (true) { c->lr=0x800AE574u; dispatch(c,c->ctr); } // 800AE570
  c->r[6]=0u+0x80000000u; // 800AE574
  c->r[26]=c->r[3]|c->r[3]; // 800AE578
  c->r[5]=R32(c->r[6]+0x00000000u); // 800AE57C
  c->r[0]=0u+0x00000080u; // 800AE580
  c->r[3]=0u+0x0000001Cu; // 800AE584
  c->r[4]=0u+0x00000001u; // 800AE588
  W32(c->r[6]+0x00003180u,c->r[5]); // 800AE58C
  W8(c->r[6]+0x00003184u,c->r[0]); // 800AE590
  c->lr=0x800AE598u; f_800AB804(c); // 800AE594
  c->r[25]=c->r[3]|c->r[3]; // 800AE598
  c->r[4]=c->r[30]|c->r[30]; // 800AE59C
  c->r[5]=0u+0x0000001Cu; // 800AE5A0
  c->lr=0x800AE5A8u; f_80004338(c); // 800AE5A4
  c->r[3]=0u+0x80000000u; // 800AE5A8
  c->r[0]=0u+0x00000007u; // 800AE5AC
  W32(c->r[3]+0x000030F0u,c->r[25]); // 800AE5B0
  c->r[3]=0u+0xCC000000u; // 800AE5B4
  W32(c->r[3]+0x00003024u,c->r[0]); // 800AE5B8
  c->lr=0x800AE5C0u; f_800B087C(c); // 800AE5BC
  c->r[3]=c->r[26]|c->r[26]; // 800AE5C0
  c->lr=0x800AE5C8u; f_800AD77C(c); // 800AE5C4
  goto L_800AE758; // 800AE5C8
L_800AE5CC:;
  c->r[3]=0u+0x81300000u; // 800AE5CC
  c->r[6]=R32(c->r[13]+0xFFFF8CACu); // 800AE5D0
  W32(c->r[3]+0xFFFFDFF0u,c->r[28]); // 800AE5D4
  c->r[0]=0u+0x00000001u; // 800AE5D8
  cmps(c,0,(int32_t)c->r[6],0); // 800AE5DC
  c->r[27]=0u+0x80000000u; // 800AE5E0
  W32(c->r[3]+0xFFFFDFECu,c->r[29]); // 800AE5E4
  W8(c->r[27]+0x000030E2u,c->r[0]); // 800AE5E8
  if (crb(c,2)) { goto L_800AE5F4; } // 800AE5EC
  goto L_800AE6AC; // 800AE5F0
L_800AE5F4:;
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800AE5F4
  cmps(c,0,(int32_t)c->r[0],0); // 800AE5F8
  if (crb(c,2)) { goto L_800AE6A4; } // 800AE5FC
  c->r[3]=0u+0x00000040u; // 800AE600
  c->r[4]=0u+0x00000020u; // 800AE604
  c->lr=0x800AE60Cu; f_800AB804(c); // 800AE608
  c->r[6]=R8(c->r[2]+0xFFFF8F18u); // 800AE60C
  c->r[25]=c->r[3]|c->r[3]; // 800AE610
  c->r[10]=R8(c->r[2]+0xFFFF8F19u); // 800AE614
  c->r[4]=c->r[25]|c->r[25]; // 800AE618
  c->r[9]=R8(c->r[2]+0xFFFF8F1Au); // 800AE61C
  c->r[3]=c->r[1]+0x000000B0u; // 800AE620
  c->r[0]=R8(c->r[2]+0xFFFF8F1Bu); // 800AE624
  c->r[5]=0u+0x00000040u; // 800AE628
  c->r[8]=R32(c->r[27]+0x000030F4u); // 800AE62C
  c->r[7]=0u+0x00000000u; // 800AE630
  W8(c->r[1]+0x00000024u,c->r[6]); // 800AE634
  c->r[6]=sraw(c,c->r[8],2); // 800AE638
  c->r[8]=0u+0x00000000u; // 800AE63C
  W8(c->r[1]+0x00000025u,c->r[10]); // 800AE640
  W8(c->r[1]+0x00000026u,c->r[9]); // 800AE644
  W8(c->r[1]+0x00000027u,c->r[0]); // 800AE648
  c->lr=0x800AE650u; f_800BDB68(c); // 800AE64C
  goto L_800AE678; // 800AE650
L_800AE654:;
  c->r[3]=c->r[1]+0x000000B0u; // 800AE654
  c->lr=0x800AE65Cu; f_800BDD24(c); // 800AE658
  cmps(c,0,(int32_t)c->r[3],2); // 800AE65C
  if (crb(c,1)) { goto L_800AE674; } // 800AE660
  c->r[3]=c->r[1]+0x000000B0u; // 800AE664
  c->lr=0x800AE66Cu; f_800BDD24(c); // 800AE668
  cmps(c,0,(int32_t)c->r[3],0); // 800AE66C
  if (!crb(c,0)) { goto L_800AE678; } // 800AE670
L_800AE674:;
  c->lr=0x800AE678u; f_800B2690(c); // 800AE674
L_800AE678:;
  c->r[3]=c->r[1]+0x000000B0u; // 800AE678
  c->lr=0x800AE680u; f_800BDD24(c); // 800AE67C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE680
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE654; } // 800AE684
  c->r[3]=0u+0x80000000u; // 800AE688
  c->r[4]=R32(c->r[25]+0x00000038u); // 800AE68C
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800AE690
  c->r[0]=c->r[0]+c->r[4]; // 800AE694
  c->r[6]=sraw(c,c->r[0],2); // 800AE698
  W32(c->r[13]+0xFFFF8CACu,c->r[6]); // 800AE69C
  goto L_800AE6AC; // 800AE6A0
L_800AE6A4:;
  c->r[6]=0u+0x00000910u; // 800AE6A4
  W32(c->r[13]+0xFFFF8CACu,c->r[6]); // 800AE6A8
L_800AE6AC:;
  c->r[8]=R32(c->r[31]+0x00000014u); // 800AE6AC
  c->r[3]=c->r[1]+0x00000080u; // 800AE6B0
  c->r[7]=R32(c->r[31]+0x00000018u); // 800AE6B4
  c->r[4]=0u+0x81330000u; // 800AE6B8
  c->r[0]=c->r[8]+0x00000020u; // 800AE6BC
  c->r[5]=R8(c->r[2]+0xFFFF8F18u); // 800AE6C0
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800AE6C4
  c->r[10]=R8(c->r[2]+0xFFFF8F19u); // 800AE6C8
  c->r[9]=R8(c->r[2]+0xFFFF8F1Au); // 800AE6CC
  c->r[6]=c->r[8]+c->r[6]; // 800AE6D0
  c->r[0]=R8(c->r[2]+0xFFFF8F1Bu); // 800AE6D4
  c->r[7]=c->r[7]+0x0000001Fu; // 800AE6D8
  W8(c->r[1]+0x00000020u,c->r[5]); // 800AE6DC
  c->r[5]=rotl(c->r[7],0)&0xFFFFFFE0u; // 800AE6E0
  c->r[7]=0u+0x00000000u; // 800AE6E4
  c->r[8]=0u+0x00000000u; // 800AE6E8
  W8(c->r[1]+0x00000021u,c->r[10]); // 800AE6EC
  W8(c->r[1]+0x00000022u,c->r[9]); // 800AE6F0
  W8(c->r[1]+0x00000023u,c->r[0]); // 800AE6F4
  c->lr=0x800AE6FCu; f_800BDB68(c); // 800AE6F8
  goto L_800AE724; // 800AE6FC
L_800AE700:;
  c->r[3]=c->r[1]+0x00000080u; // 800AE700
  c->lr=0x800AE708u; f_800BDD24(c); // 800AE704
  cmps(c,0,(int32_t)c->r[3],2); // 800AE708
  if (crb(c,1)) { goto L_800AE720; } // 800AE70C
  c->r[3]=c->r[1]+0x00000080u; // 800AE710
  c->lr=0x800AE718u; f_800BDD24(c); // 800AE714
  cmps(c,0,(int32_t)c->r[3],0); // 800AE718
  if (!crb(c,0)) { goto L_800AE724; } // 800AE71C
L_800AE720:;
  c->lr=0x800AE724u; f_800B2690(c); // 800AE720
L_800AE724:;
  c->r[3]=c->r[1]+0x00000080u; // 800AE724
  c->lr=0x800AE72Cu; f_800BDD24(c); // 800AE728
  cmps(c,0,(int32_t)c->r[3],0); // 800AE72C
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE700; } // 800AE730
  c->r[4]=R32(c->r[31]+0x00000018u); // 800AE734
  c->r[3]=0u+0x81330000u; // 800AE738
  c->r[0]=c->r[4]+0x0000001Fu; // 800AE73C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800AE740
  c->lr=0x800AE748u; f_800ABE10(c); // 800AE744
  c->lr=0x800AE74Cu; f_800B087C(c); // 800AE748
  c->lr=0x800AE750u; f_800ABE44(c); // 800AE74C
  c->r[3]=0u+0x81330000u; // 800AE750
  c->lr=0x800AE758u; f_800AD77C(c); // 800AE754
L_800AE758:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800AE758
  c->r[11]=c->r[10]|c->r[10]; // 800AE75C
  c->lr=0x800AE764u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AE760
  c->r[0]=R32(c->r[10]+0x00000004u); // 800AE764
  c->lr=c->r[0]; // 800AE768
  c->r[1]=c->r[10]|c->r[10]; // 800AE76C
  return; // 800AE770
}

// __OSBootDol
void f_800AE774(Ctx* __restrict c) {
  trace_call(0x800AE774u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE774
  c->r[0]=c->lr; // 800AE778
  W32(c->r[1]+0x00000044u,c->r[0]); // 800AE77C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800AE780
  c->r[31]=c->r[3]|c->r[3]; // 800AE784
  c->r[3]=c->r[1]+0x0000000Cu; // 800AE788
  W32(c->r[1]+0x00000038u,c->r[30]); // 800AE78C
  c->r[30]=c->r[5]|c->r[5]; // 800AE790
  W32(c->r[1]+0x00000034u,c->r[29]); // 800AE794
  c->r[29]=c->r[4]|c->r[4]; // 800AE798
  c->r[4]=c->r[1]+0x00000008u; // 800AE79C
  c->lr=0x800AE7A4u; f_800B1D94(c); // 800AE7A0
  c->r[5]=c->r[31]|c->r[31]; // 800AE7A4
  c->r[3]=c->r[1]+0x00000010u; // 800AE7A8
  c->r[4]=c->r[13]+0xFFFF80E0u; // 800AE7AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AE7B0
  c->lr=0x800AE7B8u; f_800DA3C8(c); // 800AE7B4
  cmps(c,0,(int32_t)c->r[30],0); // 800AE7B8
  c->r[31]=0u+0x00000000u; // 800AE7BC
  if (crb(c,2)) { goto L_800AE7E0; } // 800AE7C0
  c->r[3]=c->r[30]|c->r[30]; // 800AE7C4
  goto L_800AE7D4; // 800AE7C8
L_800AE7CC:;
  c->r[3]=c->r[3]+0x00000004u; // 800AE7CC
  c->r[31]=c->r[31]+0x00000001u; // 800AE7D0
L_800AE7D4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AE7D4
  cmps(c,0,(int32_t)c->r[0],0); // 800AE7D8
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE7CC; } // 800AE7DC
L_800AE7E0:;
  c->r[0]=c->r[31]+0x00000002u; // 800AE7E0
  c->r[4]=0u+0x00000001u; // 800AE7E4
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AE7E8
  c->lr=0x800AE7F0u; f_800AB804(c); // 800AE7EC
  c->r[6]=c->r[31]+0x00000001u; // 800AE7F0
  c->r[0]=c->r[1]+0x00000010u; // 800AE7F4
  cmps(c,1,(int32_t)c->r[6],1); // 800AE7F8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800AE7FC
  c->r[4]=0u+0x00000001u; // 800AE800
  if (!crb(c,5)) { goto L_800AE918; } // 800AE804
  cmps(c,0,(int32_t)c->r[31],8); // 800AE808
  c->r[7]=c->r[31]+0xFFFFFFF9u; // 800AE80C
  if (!crb(c,1)) { goto L_800AE8E4; } // 800AE810
  c->r[8]=0u+0x00000000u; // 800AE814
  c->r[9]=0u+0x00000000u; // 800AE818
  if (crb(c,4)) { goto L_800AE834; } // 800AE81C
  c->r[5]=0u+0x80000000u; // 800AE820
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 800AE824
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800AE828
  if (crb(c,1)) { goto L_800AE834; } // 800AE82C
  c->r[9]=0u+0x00000001u; // 800AE830
L_800AE834:;
  cmps(c,0,(int32_t)c->r[9],0); // 800AE834
  if (crb(c,2)) { goto L_800AE870; } // 800AE838
  c->r[0]=c->r[31]+0x00000001u; // 800AE83C
  c->r[5]=0u+0x00000001u; // 800AE840
  c->r[6]=rotl(c->r[0],0)&0x80000000u; // 800AE844
  c->r[0]=c->r[6]+0x80000000u; // 800AE848
  cmpu(c,0,c->r[0],0x00000000u); // 800AE84C
  if (!crb(c,2)) { goto L_800AE864; } // 800AE850
  c->r[0]=rotl(c->r[31],0)&0x80000000u; // 800AE854
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800AE858
  if (crb(c,2)) { goto L_800AE864; } // 800AE85C
  c->r[5]=0u+0x00000000u; // 800AE860
L_800AE864:;
  cmps(c,0,(int32_t)c->r[5],0); // 800AE864
  if (crb(c,2)) { goto L_800AE870; } // 800AE868
  c->r[8]=0u+0x00000001u; // 800AE86C
L_800AE870:;
  cmps(c,0,(int32_t)c->r[8],0); // 800AE870
  if (crb(c,2)) { goto L_800AE8E4; } // 800AE874
  c->r[0]=c->r[7]+0x00000006u; // 800AE878
  c->r[5]=c->r[30]+0x00000004u; // 800AE87C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800AE880
  c->r[6]=c->r[3]+0x00000004u; // 800AE884
  c->ctr=c->r[0]; // 800AE888
  cmps(c,0,(int32_t)c->r[7],1); // 800AE88C
  if (!crb(c,1)) { goto L_800AE8E4; } // 800AE890
L_800AE894:;
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 800AE894
  c->r[4]=c->r[4]+0x00000008u; // 800AE898
  W32(c->r[6]+0x00000000u,c->r[0]); // 800AE89C
  c->r[0]=R32(c->r[5]+0x00000000u); // 800AE8A0
  W32(c->r[6]+0x00000004u,c->r[0]); // 800AE8A4
  c->r[0]=R32(c->r[5]+0x00000004u); // 800AE8A8
  W32(c->r[6]+0x00000008u,c->r[0]); // 800AE8AC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800AE8B0
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800AE8B4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800AE8B8
  W32(c->r[6]+0x00000010u,c->r[0]); // 800AE8BC
  c->r[0]=R32(c->r[5]+0x00000010u); // 800AE8C0
  W32(c->r[6]+0x00000014u,c->r[0]); // 800AE8C4
  c->r[0]=R32(c->r[5]+0x00000014u); // 800AE8C8
  W32(c->r[6]+0x00000018u,c->r[0]); // 800AE8CC
  c->r[0]=R32(c->r[5]+0x00000018u); // 800AE8D0
  c->r[5]=c->r[5]+0x00000020u; // 800AE8D4
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 800AE8D8
  c->r[6]=c->r[6]+0x00000020u; // 800AE8DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AE894; } // 800AE8E0
L_800AE8E4:;
  c->r[5]=c->r[31]+0x00000001u; // 800AE8E4
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800AE8E8
  c->r[0]=c->r[5]-c->r[4]; // 800AE8EC
  c->r[6]=c->r[30]+c->r[7]; // 800AE8F0
  c->r[7]=c->r[3]+c->r[7]; // 800AE8F4
  c->ctr=c->r[0]; // 800AE8F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 800AE8FC
  if (!crb(c,0)) { goto L_800AE918; } // 800AE900
L_800AE904:;
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800AE904
  c->r[6]=c->r[6]+0x00000004u; // 800AE908
  W32(c->r[7]+0x00000000u,c->r[0]); // 800AE90C
  c->r[7]=c->r[7]+0x00000004u; // 800AE910
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AE904; } // 800AE914
L_800AE918:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800AE918
  c->r[9]=c->r[3]|c->r[3]; // 800AE91C
  c->r[6]=R32(c->r[1]+0x00000008u); // 800AE920
  c->r[4]=c->r[29]|c->r[29]; // 800AE924
  c->r[8]=c->r[31]+0x00000001u; // 800AE928
  c->r[3]=0u+0xFFFFFFFFu; // 800AE92C
  c->r[7]=0u+0x00000000u; // 800AE930
  c->lr=0x800AE938u; f_800ADF20(c); // 800AE934
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AE938
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800AE93C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800AE940
  c->r[29]=R32(c->r[1]+0x00000034u); // 800AE944
  c->lr=c->r[0]; // 800AE948
  c->r[1]=c->r[1]+0x00000040u; // 800AE94C
  return; // 800AE950
}

// ScreenReport
void f_800AE954(Ctx* __restrict c) {
  trace_call(0x800AE954u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE954
  c->r[0]=c->lr; // 800AE958
  W32(c->r[1]+0x00000174u,c->r[0]); // 800AE95C
  c->r[11]=c->r[1]+0x00000170u; // 800AE960
  c->lr=0x800AE968u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AE964
  c->r[22]=c->r[3]|c->r[3]; // 800AE968
  c->r[23]=c->r[4]|c->r[4]; // 800AE96C
  c->r[24]=c->r[6]|c->r[6]; // 800AE970
  c->r[25]=c->r[7]|c->r[7]; // 800AE974
  c->r[26]=c->r[8]|c->r[8]; // 800AE978
  c->r[27]=c->r[9]|c->r[9]; // 800AE97C
  c->r[31]=c->r[5]+0xFFFFFFE8u; // 800AE980
  c->r[30]=c->r[4]+0xFFFFFFD0u; // 800AE984
  c->r[18]=0u+0x80810000u; // 800AE988
  c->r[19]=0u+0x88890000u; // 800AE98C
  c->r[17]=0u+0x00000000u; // 800AE990
  c->r[21]=0u+0x00000018u; // 800AE994
  c->r[20]=0u+0x00000003u; // 800AE998
L_800AE99C:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[26]); // 800AE99C
  if (crb(c,0)) { goto L_800AEC60; } // 800AE9A0
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[23]); // 800AE9A4
  c->r[28]=c->r[25]|c->r[25]; // 800AE9A8
  c->r[0]=c->r[25]+c->r[0]; // 800AE9AC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800AE9B0
  c->r[29]=c->r[22]+c->r[0]; // 800AE9B4
  goto L_800AEC54; // 800AE9B8
L_800AE9BC:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800AE9BC
  cmps(c,0,(int32_t)c->r[0],10); // 800AE9C0
  if (!crb(c,2)) { goto L_800AE9D4; } // 800AE9C4
  c->r[26]=c->r[26]+c->r[27]; // 800AE9C8
  c->r[10]=c->r[10]+0x00000001u; // 800AE9CC
  IRQCHK(c); goto L_800AE99C; // 800AE9D0
L_800AE9D4:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[28]); // 800AE9D4
  if (!crb(c,0)) { goto L_800AE9E4; } // 800AE9D8
  c->r[26]=c->r[26]+c->r[27]; // 800AE9DC
  IRQCHK(c); goto L_800AE99C; // 800AE9E0
L_800AE9E4:;
  c->r[6]=0u+0x00000000u; // 800AE9E4
  c->r[7]=0u+0x00000000u; // 800AE9E8
  c->ctr=c->r[20]; // 800AE9EC
L_800AE9F0:;
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 800AE9F0
  c->r[3]=c->r[6]+0x00000001u; // 800AE9F4
  c->r[0]=c->r[0]+c->r[7]; // 800AE9F8
  c->r[4]=c->r[1]+0x00000010u; // 800AE9FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AEA00
  c->r[5]=c->r[6]+0x00000002u; // 800AEA04
  c->r[4]=c->r[4]+c->r[0]; // 800AEA08
  c->r[8]=c->r[6]+0x00000003u; // 800AEA0C
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; // 800AEA10
  W32(c->r[4]+0x00000000u,c->r[17]); // 800AEA14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800AEA18
  c->r[3]=rotl(c->r[3],0)&0x00000007u; // 800AEA1C
  W32(c->r[4]+0x00000020u,c->r[17]); // 800AEA20
  c->r[9]=c->r[6]+0x00000004u; // 800AEA24
  c->r[11]=c->r[6]+0x00000006u; // 800AEA28
  c->r[0]=c->r[3]+c->r[0]; // 800AEA2C
  W32(c->r[4]+0x00000040u,c->r[17]); // 800AEA30
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AEA34
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; // 800AEA38
  c->r[3]=c->r[1]+0x00000010u; // 800AEA3C
  c->r[3]=c->r[3]+c->r[0]; // 800AEA40
  c->r[5]=rotl(c->r[5],0)&0x00000007u; // 800AEA44
  W32(c->r[3]+0x00000000u,c->r[17]); // 800AEA48
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 800AEA4C
  c->r[0]=c->r[6]+0x00000005u; // 800AEA50
  W32(c->r[3]+0x00000020u,c->r[17]); // 800AEA54
  c->r[7]=c->r[7]+0x00000018u; // 800AEA58
  c->r[5]=c->r[5]+c->r[4]; // 800AEA5C
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800AEA60
  W32(c->r[3]+0x00000040u,c->r[17]); // 800AEA64
  c->r[5]=rotl(c->r[8],29)&0x1FFFFFFFu; // 800AEA68
  c->r[4]=c->r[1]+0x00000010u; // 800AEA6C
  {uint32_t ea=c->r[4]+c->r[12]; W32(ea,c->r[17]); c->r[4]=ea;} // 800AEA70
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 800AEA74
  c->r[12]=rotl(c->r[8],0)&0x00000007u; // 800AEA78
  W32(c->r[4]+0x00000020u,c->r[17]); // 800AEA7C
  c->r[8]=rotl(c->r[9],29)&0x1FFFFFFFu; // 800AEA80
  c->r[12]=c->r[12]+c->r[3]; // 800AEA84
  c->r[5]=c->r[6]+0x00000007u; // 800AEA88
  W32(c->r[4]+0x00000040u,c->r[17]); // 800AEA8C
  c->r[3]=c->r[1]+0x00000010u; // 800AEA90
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 800AEA94
  c->r[9]=rotl(c->r[9],0)&0x00000007u; // 800AEA98
  c->r[3]=c->r[3]+c->r[12]; // 800AEA9C
  c->r[4]=c->r[1]+0x00000010u; // 800AEAA0
  W32(c->r[3]+0x00000000u,c->r[17]); // 800AEAA4
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 800AEAA8
  c->r[12]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800AEAAC
  W32(c->r[3]+0x00000020u,c->r[17]); // 800AEAB0
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800AEAB4
  c->r[8]=c->r[9]+c->r[8]; // 800AEAB8
  c->r[9]=rotl(c->r[11],29)&0x1FFFFFFFu; // 800AEABC
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800AEAC0
  W32(c->r[3]+0x00000040u,c->r[17]); // 800AEAC4
  c->r[4]=c->r[4]+c->r[8]; // 800AEAC8
  c->r[3]=c->r[1]+0x00000010u; // 800AEACC
  W32(c->r[4]+0x00000000u,c->r[17]); // 800AEAD0
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)24); // 800AEAD4
  c->r[11]=rotl(c->r[11],0)&0x00000007u; // 800AEAD8
  W32(c->r[4]+0x00000020u,c->r[17]); // 800AEADC
  c->r[8]=rotl(c->r[5],29)&0x1FFFFFFFu; // 800AEAE0
  c->r[0]=c->r[0]+c->r[12]; // 800AEAE4
  c->r[6]=c->r[6]+0x00000008u; // 800AEAE8
  W32(c->r[4]+0x00000040u,c->r[17]); // 800AEAEC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AEAF0
  c->r[4]=c->r[1]+0x00000010u; // 800AEAF4
  {uint32_t ea=c->r[3]+c->r[0]; W32(ea,c->r[17]); c->r[3]=ea;} // 800AEAF8
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)24); // 800AEAFC
  c->r[9]=rotl(c->r[5],0)&0x00000007u; // 800AEB00
  W32(c->r[3]+0x00000020u,c->r[17]); // 800AEB04
  c->r[5]=c->r[4]|c->r[4]; // 800AEB08
  c->r[0]=c->r[11]+c->r[0]; // 800AEB0C
  W32(c->r[3]+0x00000040u,c->r[17]); // 800AEB10
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AEB14
  {uint32_t ea=c->r[4]+c->r[0]; W32(ea,c->r[17]); c->r[4]=ea;} // 800AEB18
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 800AEB1C
  W32(c->r[4]+0x00000020u,c->r[17]); // 800AEB20
  c->r[0]=c->r[9]+c->r[0]; // 800AEB24
  W32(c->r[4]+0x00000040u,c->r[17]); // 800AEB28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AEB2C
  {uint32_t ea=c->r[5]+c->r[0]; W32(ea,c->r[17]); c->r[5]=ea;} // 800AEB30
  W32(c->r[5]+0x00000020u,c->r[17]); // 800AEB34
  W32(c->r[5]+0x00000040u,c->r[17]); // 800AEB38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AE9F0; } // 800AEB3C
  c->r[3]=c->r[10]|c->r[10]; // 800AEB40
  c->r[4]=c->r[1]+0x00000010u; // 800AEB44
  c->r[7]=c->r[1]+0x00000008u; // 800AEB48
  c->r[5]=0u+0x00000000u; // 800AEB4C
  c->r[6]=0u+0x00000006u; // 800AEB50
  c->lr=0x800AEB58u; f_800B0040(c); // 800AEB54
  c->r[10]=c->r[3]|c->r[3]; // 800AEB58
  c->r[7]=0u+0x00000000u; // 800AEB5C
  c->r[3]=0u+0x00000000u; // 800AEB60
L_800AEB64:;
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 800AEB64
  c->r[6]=rotl(c->r[7],0)&0x00000007u; // 800AEB68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800AEB6C
  c->r[5]=c->r[1]+0x00000010u; // 800AEB70
  c->r[4]=c->r[28]|c->r[28]; // 800AEB74
  c->r[8]=0u+0x00000000u; // 800AEB78
  c->r[0]=c->r[6]+c->r[0]; // 800AEB7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AEB80
  c->r[5]=c->r[5]+c->r[0]; // 800AEB84
  c->ctr=c->r[21]; // 800AEB88
L_800AEB8C:;
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFE0u; // 800AEB8C
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 800AEB90
  c->r[0]=addc(c,~c->r[0],0x00000007u,1); // 800AEB94
  c->r[6]=R32(c->r[5]+c->r[6]); // 800AEB98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AEB9C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 800AEBA0
  c->r[9]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[9]); // 800AEBA4
  if (crb(c,2)) { goto L_800AEC28; } // 800AEBA8
  c->r[6]=R8(c->r[24]+0x00000000u); // 800AEBAC
  c->r[0]=c->r[8]+c->r[3]; // 800AEBB0
  c->r[12]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800AEBB4
  c->r[11]=c->r[18]+0xFFFF8081u; // 800AEBB8
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 800AEBBC
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800AEBC0
  c->r[6]=c->r[29]+c->r[12]; // 800AEBC4
  c->r[0]=c->r[19]+0xFFFF8889u; // 800AEBC8
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)239); // 800AEBCC
  c->r[11]=(uint32_t)(((int64_t)(int32_t)c->r[11]*(int64_t)(int32_t)c->r[9])>>32); // 800AEBD0
  c->r[9]=c->r[11]+c->r[9]; // 800AEBD4
  c->r[9]=sraw(c,c->r[9],7); // 800AEBD8
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 800AEBDC
  c->r[9]=c->r[9]+c->r[11]; // 800AEBE0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 800AEBE4
  c->r[0]=c->r[0]+c->r[9]; // 800AEBE8
  c->r[0]=sraw(c,c->r[0],3); // 800AEBEC
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 800AEBF0
  c->r[9]=c->r[0]+c->r[9]; // 800AEBF4
  c->r[0]=c->r[9]+0x00000010u; // 800AEBF8
  W8(c->r[29]+c->r[12],c->r[0]); // 800AEBFC
  if (crb(c,2)) { goto L_800AEC18; } // 800AEC00
  c->r[9]=R8(c->r[24]+0x00000001u); // 800AEC04
  c->r[0]=R8(c->r[24]+0x00000002u); // 800AEC08
  W8(c->r[6]+0xFFFFFFFFu,c->r[9]); // 800AEC0C
  W8(c->r[6]+0x00000001u,c->r[0]); // 800AEC10
  goto L_800AEC28; // 800AEC14
L_800AEC18:;
  c->r[9]=R8(c->r[24]+0x00000002u); // 800AEC18
  c->r[0]=R8(c->r[24]+0x00000001u); // 800AEC1C
  W8(c->r[6]+0xFFFFFFFFu,c->r[9]); // 800AEC20
  W8(c->r[6]+0x00000001u,c->r[0]); // 800AEC24
L_800AEC28:;
  c->r[4]=c->r[4]+0x00000001u; // 800AEC28
  c->r[8]=c->r[8]+0x00000001u; // 800AEC2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AEB8C; } // 800AEC30
  c->r[7]=c->r[7]+0x00000001u; // 800AEC34
  c->r[3]=c->r[3]+c->r[23]; // 800AEC38
  cmpu(c,0,c->r[7],0x00000018u); // 800AEC3C
  if (crb(c,0)) { IRQCHK(c); goto L_800AEB64; } // 800AEC40
  c->r[3]=R32(c->r[1]+0x00000008u); // 800AEC44
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800AEC48
  c->r[28]=c->r[28]+c->r[3]; // 800AEC4C
  c->r[29]=c->r[29]+c->r[0]; // 800AEC50
L_800AEC54:;
  c->r[3]=R8(c->r[10]+0x00000000u); // 800AEC54
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800AEC58
  if (!crb(c,2)) { IRQCHK(c); goto L_800AE9BC; } // 800AEC5C
L_800AEC60:;
  c->r[11]=c->r[1]+0x00000170u; // 800AEC60
  c->lr=0x800AEC68u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AEC64
  c->r[0]=R32(c->r[1]+0x00000174u); // 800AEC68
  c->lr=c->r[0]; // 800AEC6C
  c->r[1]=c->r[1]+0x00000170u; // 800AEC70
  return; // 800AEC74
}

// ConfigureVideo
void f_800AEC78(Ctx* __restrict c) {
  trace_call(0x800AEC78u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEC78
  c->r[0]=c->lr; // 800AEC7C
  c->r[6]=0u+0x000001E0u; // 800AEC80
  c->r[5]=0u+0x00000028u; // 800AEC84
  W32(c->r[1]+0x00000054u,c->r[0]); // 800AEC88
  c->r[0]=0u+0x00000280u; // 800AEC8C
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 800AEC90
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 800AEC94
  W16(c->r[1]+0x00000010u,c->r[4]); // 800AEC98
  W16(c->r[1]+0x00000012u,c->r[5]); // 800AEC9C
  W16(c->r[1]+0x00000016u,c->r[0]); // 800AECA0
  W16(c->r[1]+0x00000018u,c->r[4]); // 800AECA4
  c->lr=0x800AECACu; f_800C4360(c); // 800AECA8
  cmps(c,0,(int32_t)c->r[3],2); // 800AECAC
  if (crb(c,2)) { goto L_800AECD4; } // 800AECB0
  if (!crb(c,0)) { goto L_800AECC8; } // 800AECB4
  cmps(c,0,(int32_t)c->r[3],0); // 800AECB8
  if (crb(c,2)) { goto L_800AECD4; } // 800AECBC
  if (!crb(c,0)) { goto L_800AED58; } // 800AECC0
  goto L_800AED70; // 800AECC4
L_800AECC8:;
  cmps(c,0,(int32_t)c->r[3],5); // 800AECC8
  if (crb(c,2)) { goto L_800AED14; } // 800AECCC
  goto L_800AED70; // 800AECD0
L_800AECD4:;
  c->r[3]=0u+0xCC000000u; // 800AECD4
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 800AECD8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800AECDC
  if (crb(c,2)) { goto L_800AECFC; } // 800AECE0
  c->r[0]=0u+0x00000000u; // 800AECE4
  c->r[3]=0u+0x00000002u; // 800AECE8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800AECEC
  W16(c->r[1]+0x00000014u,c->r[0]); // 800AECF0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AECF4
  goto L_800AED70; // 800AECF8
L_800AECFC:;
  c->r[3]=0u+0x00000000u; // 800AECFC
  c->r[0]=0u+0x00000001u; // 800AED00
  W32(c->r[1]+0x00000008u,c->r[3]); // 800AED04
  W16(c->r[1]+0x00000014u,c->r[3]); // 800AED08
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AED0C
  goto L_800AED70; // 800AED10
L_800AED14:;
  c->r[3]=0u+0xCC000000u; // 800AED14
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 800AED18
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800AED1C
  if (crb(c,2)) { goto L_800AED3C; } // 800AED20
  c->r[0]=0u+0x00000000u; // 800AED24
  c->r[3]=0u+0x00000016u; // 800AED28
  W32(c->r[1]+0x00000008u,c->r[3]); // 800AED2C
  W16(c->r[1]+0x00000014u,c->r[0]); // 800AED30
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AED34
  goto L_800AED70; // 800AED38
L_800AED3C:;
  c->r[4]=0u+0x00000014u; // 800AED3C
  c->r[3]=0u+0x00000000u; // 800AED40
  c->r[0]=0u+0x00000001u; // 800AED44
  W32(c->r[1]+0x00000008u,c->r[4]); // 800AED48
  W16(c->r[1]+0x00000014u,c->r[3]); // 800AED4C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AED50
  goto L_800AED70; // 800AED54
L_800AED58:;
  c->r[4]=0u+0x00000004u; // 800AED58
  c->r[3]=0u+0x0000002Fu; // 800AED5C
  c->r[0]=0u+0x00000001u; // 800AED60
  W32(c->r[1]+0x00000008u,c->r[4]); // 800AED64
  W16(c->r[1]+0x00000014u,c->r[3]); // 800AED68
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800AED6C
L_800AED70:;
  c->r[3]=c->r[1]+0x00000008u; // 800AED70
  c->lr=0x800AED78u; f_800C35F4(c); // 800AED74
  c->r[3]=0u+0x00000000u; // 800AED78
  c->r[4]=0u+0x00000000u; // 800AED7C
  c->r[5]=0u+0x00000280u; // 800AED80
  c->r[6]=0u+0x000001E0u; // 800AED84
  c->lr=0x800AED8Cu; f_800C3CD8(c); // 800AED88
  c->r[0]=R32(c->r[1]+0x00000054u); // 800AED8C
  c->lr=c->r[0]; // 800AED90
  c->r[1]=c->r[1]+0x00000050u; // 800AED94
  return; // 800AED98
}

// OSFatal
void f_800AED9C(Ctx* __restrict c) {
  trace_call(0x800AED9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AED9C
  c->r[0]=c->lr; // 800AEDA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AEDA4
  c->r[11]=c->r[1]+0x00000030u; // 800AEDA8
  c->lr=0x800AEDB0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AEDAC
  c->r[27]=c->r[3]|c->r[3]; // 800AEDB0
  c->r[28]=c->r[4]|c->r[4]; // 800AEDB4
  c->r[29]=c->r[5]|c->r[5]; // 800AEDB8
  c->lr=0x800AEDC0u; f_800B087C(c); // 800AEDBC
  c->lr=0x800AEDC4u; f_800B35B4(c); // 800AEDC0
  c->r[24]=0u+0x802B0000u; // 800AEDC4
  c->r[3]=c->r[24]+0x00003A60u; // 800AEDC8
  c->lr=0x800AEDD0u; f_800AC798(c); // 800AEDCC
  c->r[3]=c->r[24]+0x00003A60u; // 800AEDD0
  c->lr=0x800AEDD8u; f_800AC570(c); // 800AEDD4
  c->lr=0x800AEDDCu; f_800ABC20(c); // 800AEDD8
  c->lr=0x800AEDE0u; f_800C2B2C(c); // 800AEDDC
  c->r[3]=0u+0x00000080u; // 800AEDE0
  c->lr=0x800AEDE8u; f_800B0C8C(c); // 800AEDE4
  c->r[3]=0u+0x00000001u; // 800AEDE8
  c->lr=0x800AEDF0u; f_800C41B4(c); // 800AEDEC
  c->lr=0x800AEDF4u; f_800C402C(c); // 800AEDF0
  c->r[3]=0u+0x00000000u; // 800AEDF4
  c->lr=0x800AEDFCu; f_800C277C(c); // 800AEDF8
  c->r[3]=0u+0x00000000u; // 800AEDFC
  c->lr=0x800AEE04u; f_800C27C0(c); // 800AEE00
  c->lr=0x800AEE08u; f_800B0890(c); // 800AEE04
  c->lr=0x800AEE0Cu; f_800C422C(c); // 800AEE08
  c->r[24]=c->r[3]|c->r[3]; // 800AEE0C
L_800AEE10:;
  c->lr=0x800AEE14u; f_800C422C(c); // 800AEE10
  c->r[0]=c->r[3]-c->r[24]; // 800AEE14
  cmps(c,0,(int32_t)c->r[0],1); // 800AEE18
  if (crb(c,0)) { IRQCHK(c); goto L_800AEE10; } // 800AEE1C
  c->lr=0x800AEE24u; f_800B48F4(c); // 800AEE20
  c->r[5]=0u+0x10620000u; // 800AEE24
  c->r[30]=c->r[4]|c->r[4]; // 800AEE28
  c->r[31]=c->r[3]|c->r[3]; // 800AEE2C
  c->r[25]=0u+0x80000000u; // 800AEE30
  c->r[24]=c->r[5]+0x00004DD3u; // 800AEE34
  c->r[26]=0u+0x00000000u; // 800AEE38
L_800AEE3C:;
  c->r[3]=0u+0x00000000u; // 800AEE3C
  c->r[4]=0u+0x00000000u; // 800AEE40
  c->lr=0x800AEE48u; f_800B1E30(c); // 800AEE44
  cmps(c,0,(int32_t)c->r[3],0); // 800AEE48
  if (!crb(c,2)) { goto L_800AEE8C; } // 800AEE4C
  c->lr=0x800AEE54u; f_800B48F4(c); // 800AEE50
  c->r[0]=R32(c->r[25]+0x000000F8u); // 800AEE54
  c->r[6]=addc(c,~c->r[30],c->r[4],1); // 800AEE58
  c->r[5]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 800AEE5C
  c->r[4]=c->r[26]^0x80000000u; // 800AEE60
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800AEE64
  c->r[3]=(uint32_t)(((uint64_t)c->r[24]*(uint64_t)c->r[0])>>32); // 800AEE68
  c->r[0]=c->r[5]^0x80000000u; // 800AEE6C
  c->r[3]=rotl(c->r[3],26)&0x03FFFFFFu; // 800AEE70
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1000); // 800AEE74
  c->r[3]=addc(c,~c->r[3],c->r[6],1); // 800AEE78
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800AEE7C
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800AEE80
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800AEE84
  if (!crb(c,2)) { IRQCHK(c); goto L_800AEE3C; } // 800AEE88
L_800AEE8C:;
  c->lr=0x800AEE90u; f_800B087C(c); // 800AEE8C
  c->r[3]=0u+0x00000001u; // 800AEE90
  c->r[4]=0u+0x00000000u; // 800AEE94
  c->lr=0x800AEE9Cu; f_800B1E30(c); // 800AEE98
  c->r[3]=0u+0x00000000u; // 800AEE9C
  c->r[4]=0u+0x00000000u; // 800AEEA0
  c->lr=0x800AEEA8u; f_800E4990(c); // 800AEEA4
  c->r[3]=0u+0x00000002u; // 800AEEA8
  c->r[4]=0u+0x00000000u; // 800AEEAC
  c->lr=0x800AEEB4u; f_800E4990(c); // 800AEEB0
  goto L_800AEED0; // 800AEEB4
L_800AEEB8:;
  c->r[3]=0u+0x00000000u; // 800AEEB8
  c->lr=0x800AEEC0u; f_800E4714(c); // 800AEEBC
  c->r[3]=0u+0x00000000u; // 800AEEC0
  c->lr=0x800AEEC8u; f_800E4E94(c); // 800AEEC4
  c->r[3]=0u+0x00000000u; // 800AEEC8
  c->lr=0x800AEED0u; f_800E55F4(c); // 800AEECC
L_800AEED0:;
  c->r[3]=0u+0x00000000u; // 800AEED0
  c->r[4]=0u+0x00000001u; // 800AEED4
  c->r[5]=0u+0x00000000u; // 800AEED8
  c->lr=0x800AEEE0u; f_800E54F8(c); // 800AEEDC
  cmps(c,0,(int32_t)c->r[3],0); // 800AEEE0
  if (crb(c,2)) { IRQCHK(c); goto L_800AEEB8; } // 800AEEE4
  c->r[3]=0u+0x00000000u; // 800AEEE8
  c->lr=0x800AEEF0u; f_800E55F4(c); // 800AEEEC
  c->r[3]=0u+0xCD000000u; // 800AEEF0
L_800AEEF4:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 800AEEF4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800AEEF8
  cmpu(c,0,c->r[0],0x00000001u); // 800AEEFC
  if (crb(c,2)) { IRQCHK(c); goto L_800AEEF4; } // 800AEF00
  c->r[4]=0u+0x800B0000u; // 800AEF04
  c->r[3]=0u+0x00000008u; // 800AEF08
  c->r[4]=c->r[4]+0xFFFFAA98u; // 800AEF0C
  c->lr=0x800AEF14u; f_800AA9D8(c); // 800AEF10
  c->lr=0x800AEF18u; f_800CF638(c); // 800AEF14
  c->r[3]=0u+0x81400000u; // 800AEF18
  c->lr=0x800AEF20u; f_800AB7FC(c); // 800AEF1C
  c->r[4]=0u+0x80000000u; // 800AEF20
  c->r[3]=R32(c->r[4]+0x00000038u); // 800AEF24
  cmps(c,0,(int32_t)c->r[3],0); // 800AEF28
  if (!crb(c,2)) { goto L_800AEF3C; } // 800AEF2C
  c->r[3]=R32(c->r[4]+0x00003110u); // 800AEF30
  c->lr=0x800AEF38u; f_800AB7E4(c); // 800AEF34
  goto L_800AEF40; // 800AEF38
L_800AEF3C:;
  c->lr=0x800AEF40u; f_800AB7E4(c); // 800AEF3C
L_800AEF40:;
  c->r[9]=R8(c->r[27]+0x00000000u); // 800AEF40
  c->r[10]=0u+0x802B0000u; // 800AEF44
  c->r[8]=R8(c->r[27]+0x00000001u); // 800AEF48
  {uint32_t ea=c->r[10]+0x00003D28u; W8(ea,c->r[9]); c->r[10]=ea;} // 800AEF4C
  c->r[7]=R8(c->r[27]+0x00000002u); // 800AEF50
  c->r[6]=R8(c->r[27]+0x00000003u); // 800AEF54
  c->r[5]=R8(c->r[28]+0x00000000u); // 800AEF58
  c->r[4]=R8(c->r[28]+0x00000001u); // 800AEF5C
  c->r[3]=R8(c->r[28]+0x00000002u); // 800AEF60
  c->r[0]=R8(c->r[28]+0x00000003u); // 800AEF64
  W8(c->r[10]+0x00000001u,c->r[8]); // 800AEF68
  W8(c->r[10]+0x00000002u,c->r[7]); // 800AEF6C
  W8(c->r[10]+0x00000003u,c->r[6]); // 800AEF70
  W8(c->r[10]+0x00000004u,c->r[5]); // 800AEF74
  W8(c->r[10]+0x00000005u,c->r[4]); // 800AEF78
  W8(c->r[10]+0x00000006u,c->r[3]); // 800AEF7C
  W8(c->r[10]+0x00000007u,c->r[0]); // 800AEF80
  W32(c->r[10]+0x00000008u,c->r[29]); // 800AEF84
  c->lr=0x800AEF8Cu; f_800AB7B4(c); // 800AEF88
  c->r[5]=0u+0x800B0000u; // 800AEF8C
  c->r[4]=c->r[3]|c->r[3]; // 800AEF90
  c->r[3]=c->r[5]+0xFFFFEFB4u; // 800AEF94
  c->lr=0x800AEF9Cu; f_800AC738(c); // 800AEF98
  c->r[11]=c->r[1]+0x00000030u; // 800AEF9C
  c->lr=0x800AEFA4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AEFA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AEFA4
  c->lr=c->r[0]; // 800AEFA8
  c->r[1]=c->r[1]+0x00000030u; // 800AEFAC
  return; // 800AEFB0
}

// Halt
void f_800AEFB4(Ctx* __restrict c) {
  trace_call(0x800AEFB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEFB4
  c->r[0]=c->lr; // 800AEFB8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800AEFBC
  c->r[0]=0u+0x43300000u; // 800AEFC0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800AEFC4
  W32(c->r[1]+0x00000048u,c->r[30]); // 800AEFC8
  W32(c->r[1]+0x00000044u,c->r[29]); // 800AEFCC
  W32(c->r[1]+0x00000040u,c->r[28]); // 800AEFD0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800AEFD4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800AEFD8
  c->lr=0x800AEFE0u; f_800B0890(c); // 800AEFDC
  c->r[29]=0u+0x802B0000u; // 800AEFE0
  c->r[29]=c->r[29]+0x00003D28u; // 800AEFE4
  c->r[28]=R32(c->r[29]+0x00000008u); // 800AEFE8
  c->r[3]=c->r[28]|c->r[28]; // 800AEFEC
  c->lr=0x800AEFF4u; f_800D4394(c); // 800AEFF0
  c->r[30]=c->r[3]+0x00000001u; // 800AEFF4
  c->r[4]=0u+0x00000020u; // 800AEFF8
  c->r[3]=c->r[30]|c->r[30]; // 800AEFFC
  c->lr=0x800AF004u; f_800AB804(c); // 800AF000
  c->r[4]=c->r[28]|c->r[28]; // 800AF004
  c->r[5]=c->r[30]|c->r[30]; // 800AF008
  c->lr=0x800AF010u; f_800D7A98(c); // 800AF00C
  W32(c->r[29]+0x00000008u,c->r[3]); // 800AF010
  c->r[3]=0u+0x000A0000u; // 800AF014
  c->r[3]=c->r[3]+0x00001004u; // 800AF018
  c->r[4]=0u+0x00000020u; // 800AF01C
  c->lr=0x800AF024u; f_800AB804(c); // 800AF020
  c->r[31]=c->r[3]|c->r[3]; // 800AF024
  c->lr=0x800AF02Cu; f_800AB7CC(c); // 800AF028
  c->r[4]=c->r[3]|c->r[3]; // 800AF02C
  c->r[3]=c->r[31]|c->r[31]; // 800AF030
  c->lr=0x800AF038u; f_800AFC60(c); // 800AF034
  c->r[3]=0u+0x00090000u; // 800AF038
  c->r[4]=0u+0x00000020u; // 800AF03C
  c->r[3]=c->r[3]+0x00006000u; // 800AF040
  c->lr=0x800AF048u; f_800AB804(c); // 800AF044
  c->r[4]=R8(c->r[29]+0x00000006u); // 800AF048
  c->r[30]=c->r[3]|c->r[3]; // 800AF04C
  c->r[5]=R8(c->r[29]+0x00000004u); // 800AF050
  W32(c->r[1]+0x00000024u,c->r[4]); // 800AF054
  c->r[3]=R8(c->r[29]+0x00000005u); // 800AF058
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800AF05C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=RF64(ea);} // 800AF060
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 800AF064
  {uint32_t ea=c->r[2]+0xFFFF8F58u; c->f[0]=RF64(ea);} // 800AF068
  W32(c->r[1]+0x00000024u,c->r[3]); // 800AF06C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 800AF070
  {uint32_t ea=c->r[2]+0xFFFF8F2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF074
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800AF078
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[0]); // 800AF07C
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800AF080
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 800AF084
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800AF088
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 800AF08C
  W32(c->r[1]+0x00000024u,c->r[5]); // 800AF090
  {uint32_t ea=c->r[2]+0xFFFF8F30u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF094
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 800AF098
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 800AF09C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 800AF0A0
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800AF0A4
  {uint32_t ea=c->r[2]+0xFFFF8F28u; c->f[5]=c->ps1[5]=RF32(ea);} // 800AF0A8
  c->f[9]=c->ps1[9]=S(c->f[2]-c->f[0]); // 800AF0AC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800AF0B0
  c->f[13]=c->ps1[13]=S(c->f[5]*c->f[7]); // 800AF0B4
  {uint32_t ea=c->r[2]+0xFFFF8F38u; c->f[11]=c->ps1[11]=RF32(ea);} // 800AF0B8
  c->f[12]=c->ps1[12]=S(c->f[6]+c->f[4]); // 800AF0BC
  {uint32_t ea=c->r[2]+0xFFFF8F3Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 800AF0C0
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[0]); // 800AF0C4
  W32(c->r[1]+0x00000024u,c->r[5]); // 800AF0C8
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[3]); // 800AF0CC
  {uint32_t ea=c->r[2]+0xFFFF8F40u; c->f[6]=c->ps1[6]=RF32(ea);} // 800AF0D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800AF0D4
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 800AF0D8
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 800AF0DC
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800AF0E0
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 800AF0E4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800AF0E8
  W32(c->r[1]+0x00000024u,c->r[4]); // 800AF0EC
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 800AF0F0
  {uint32_t ea=c->r[2]+0xFFFF8F44u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF0F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 800AF0F8
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[5]); // 800AF0FC
  {uint32_t ea=c->r[2]+0xFFFF8F48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF100
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800AF104
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 800AF108
  c->r[0]=R8(c->r[29]+0x00000007u); // 800AF10C
  c->f[3]=c->ps1[3]=S(c->f[13]+c->f[12]); // 800AF110
  c->f[4]=c->ps1[4]=S(c->f[8]-c->f[6]); // 800AF114
  {uint32_t ea=c->r[2]+0xFFFF8F24u; c->f[9]=c->ps1[9]=RF32(ea);} // 800AF118
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 800AF11C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF120
  {uint32_t ea=c->r[2]+0xFFFF8F20u; c->f[5]=c->ps1[5]=RF32(ea);} // 800AF124
  c->f[6]=c->ps1[6]=S(c->f[9]+c->f[3]); // 800AF128
  c->f[1]=c->ps1[1]=S(c->f[10]+c->f[4]); // 800AF12C
  {uint32_t ea=c->r[2]+0xFFFF8F34u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF130
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800AF134
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[6]); // 800AF138
  {uint32_t ea=c->r[2]+0xFFFF8F4Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 800AF13C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800AF140
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800AF144
  W8(c->r[1]+0x00000018u,c->r[5]); // 800AF148
  fcmp(c,0,c->f[4],c->f[7]); // 800AF14C
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 800AF150
  W8(c->r[1]+0x00000019u,c->r[3]); // 800AF154
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 800AF158
  W8(c->r[1]+0x0000001Au,c->r[4]); // 800AF15C
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 800AF160
  if (!crb(c,1)) { goto L_800AF16C; } // 800AF164
  goto L_800AF180; // 800AF168
L_800AF16C:;
  fcmp(c,0,c->f[4],c->f[9]); // 800AF16C
  if (!crb(c,0)) { goto L_800AF178; } // 800AF170
  goto L_800AF17C; // 800AF174
L_800AF178:;
  c->f[9]=c->f[4]; // 800AF178
L_800AF17C:;
  c->f[7]=c->f[9]; // 800AF17C
L_800AF180:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[7],true)); // 800AF180
  {uint32_t ea=c->r[2]+0xFFFF8F50u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF184
  fcmp(c,0,c->f[2],c->f[3]); // 800AF188
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800AF18C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AF190
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800AF194
  if (!crb(c,1)) { goto L_800AF1A0; } // 800AF198
  goto L_800AF1B4; // 800AF19C
L_800AF1A0:;
  {uint32_t ea=c->r[2]+0xFFFF8F24u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF1A0
  fcmp(c,0,c->f[2],c->f[3]); // 800AF1A4
  if (!crb(c,0)) { goto L_800AF1B0; } // 800AF1A8
  goto L_800AF1B4; // 800AF1AC
L_800AF1B0:;
  c->f[3]=c->f[2]; // 800AF1B0
L_800AF1B4:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800AF1B4
  {uint32_t ea=c->r[2]+0xFFFF8F50u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF1B8
  fcmp(c,0,c->f[1],c->f[2]); // 800AF1BC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800AF1C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AF1C4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800AF1C8
  if (!crb(c,1)) { goto L_800AF1D4; } // 800AF1CC
  goto L_800AF1E8; // 800AF1D0
L_800AF1D4:;
  {uint32_t ea=c->r[2]+0xFFFF8F24u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF1D4
  fcmp(c,0,c->f[1],c->f[2]); // 800AF1D8
  if (!crb(c,0)) { goto L_800AF1E4; } // 800AF1DC
  goto L_800AF1E8; // 800AF1E0
L_800AF1E4:;
  c->f[2]=c->f[1]; // 800AF1E4
L_800AF1E8:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800AF1E8
  c->r[0]=0u+0x00000000u; // 800AF1EC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800AF1F0
  c->r[4]=c->r[30]|c->r[30]; // 800AF1F4
  c->r[5]=0u+0x00000000u; // 800AF1F8
  c->r[0]=0u+0x00000014u; // 800AF1FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800AF200
  c->r[3]=R32(c->r[1]+0x00000034u); // 800AF204
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800AF208
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800AF20C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800AF210
  c->r[6]=R8(c->r[1]+0x0000001Du); // 800AF214
  c->r[7]=R8(c->r[1]+0x0000001Eu); // 800AF218
  c->r[3]=R8(c->r[1]+0x0000001Cu); // 800AF21C
L_800AF220:;
  c->ctr=c->r[0]; // 800AF220
L_800AF224:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 800AF224
  W8(c->r[4]+0x00000001u,c->r[6]); // 800AF228
  W8(c->r[4]+0x00000002u,c->r[3]); // 800AF22C
  W8(c->r[4]+0x00000003u,c->r[7]); // 800AF230
  W8(c->r[4]+0x00000004u,c->r[3]); // 800AF234
  W8(c->r[4]+0x00000005u,c->r[6]); // 800AF238
  W8(c->r[4]+0x00000006u,c->r[3]); // 800AF23C
  W8(c->r[4]+0x00000007u,c->r[7]); // 800AF240
  W8(c->r[4]+0x00000008u,c->r[3]); // 800AF244
  W8(c->r[4]+0x00000009u,c->r[6]); // 800AF248
  W8(c->r[4]+0x0000000Au,c->r[3]); // 800AF24C
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 800AF250
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 800AF254
  W8(c->r[4]+0x0000000Du,c->r[6]); // 800AF258
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 800AF25C
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 800AF260
  W8(c->r[4]+0x00000010u,c->r[3]); // 800AF264
  W8(c->r[4]+0x00000011u,c->r[6]); // 800AF268
  W8(c->r[4]+0x00000012u,c->r[3]); // 800AF26C
  W8(c->r[4]+0x00000013u,c->r[7]); // 800AF270
  W8(c->r[4]+0x00000014u,c->r[3]); // 800AF274
  W8(c->r[4]+0x00000015u,c->r[6]); // 800AF278
  W8(c->r[4]+0x00000016u,c->r[3]); // 800AF27C
  W8(c->r[4]+0x00000017u,c->r[7]); // 800AF280
  W8(c->r[4]+0x00000018u,c->r[3]); // 800AF284
  W8(c->r[4]+0x00000019u,c->r[6]); // 800AF288
  W8(c->r[4]+0x0000001Au,c->r[3]); // 800AF28C
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 800AF290
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 800AF294
  W8(c->r[4]+0x0000001Du,c->r[6]); // 800AF298
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 800AF29C
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 800AF2A0
  W8(c->r[4]+0x00000020u,c->r[3]); // 800AF2A4
  W8(c->r[4]+0x00000021u,c->r[6]); // 800AF2A8
  W8(c->r[4]+0x00000022u,c->r[3]); // 800AF2AC
  W8(c->r[4]+0x00000023u,c->r[7]); // 800AF2B0
  W8(c->r[4]+0x00000024u,c->r[3]); // 800AF2B4
  W8(c->r[4]+0x00000025u,c->r[6]); // 800AF2B8
  W8(c->r[4]+0x00000026u,c->r[3]); // 800AF2BC
  W8(c->r[4]+0x00000027u,c->r[7]); // 800AF2C0
  W8(c->r[4]+0x00000028u,c->r[3]); // 800AF2C4
  W8(c->r[4]+0x00000029u,c->r[6]); // 800AF2C8
  W8(c->r[4]+0x0000002Au,c->r[3]); // 800AF2CC
  W8(c->r[4]+0x0000002Bu,c->r[7]); // 800AF2D0
  W8(c->r[4]+0x0000002Cu,c->r[3]); // 800AF2D4
  W8(c->r[4]+0x0000002Du,c->r[6]); // 800AF2D8
  W8(c->r[4]+0x0000002Eu,c->r[3]); // 800AF2DC
  W8(c->r[4]+0x0000002Fu,c->r[7]); // 800AF2E0
  W8(c->r[4]+0x00000030u,c->r[3]); // 800AF2E4
  W8(c->r[4]+0x00000031u,c->r[6]); // 800AF2E8
  W8(c->r[4]+0x00000032u,c->r[3]); // 800AF2EC
  W8(c->r[4]+0x00000033u,c->r[7]); // 800AF2F0
  W8(c->r[4]+0x00000034u,c->r[3]); // 800AF2F4
  W8(c->r[4]+0x00000035u,c->r[6]); // 800AF2F8
  W8(c->r[4]+0x00000036u,c->r[3]); // 800AF2FC
  W8(c->r[4]+0x00000037u,c->r[7]); // 800AF300
  W8(c->r[4]+0x00000038u,c->r[3]); // 800AF304
  W8(c->r[4]+0x00000039u,c->r[6]); // 800AF308
  W8(c->r[4]+0x0000003Au,c->r[3]); // 800AF30C
  W8(c->r[4]+0x0000003Bu,c->r[7]); // 800AF310
  W8(c->r[4]+0x0000003Cu,c->r[3]); // 800AF314
  W8(c->r[4]+0x0000003Du,c->r[6]); // 800AF318
  W8(c->r[4]+0x0000003Eu,c->r[3]); // 800AF31C
  W8(c->r[4]+0x0000003Fu,c->r[7]); // 800AF320
  c->r[4]=c->r[4]+0x00000040u; // 800AF324
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AF224; } // 800AF328
  c->r[5]=c->r[5]+0x00000001u; // 800AF32C
  cmps(c,0,(int32_t)c->r[5],480); // 800AF330
  if (crb(c,0)) { IRQCHK(c); goto L_800AF220; } // 800AF334
  c->r[3]=c->r[30]|c->r[30]; // 800AF338
  c->lr=0x800AF340u; f_800C4140(c); // 800AF33C
  c->r[3]=0u+0x00000280u; // 800AF340
  c->r[4]=0u+0x000001E0u; // 800AF344
  c->lr=0x800AF34Cu; f_800AEC78(c); // 800AF348
  c->lr=0x800AF350u; f_800C402C(c); // 800AF34C
  c->lr=0x800AF354u; f_800C422C(c); // 800AF350
  c->r[28]=c->r[3]|c->r[3]; // 800AF354
L_800AF358:;
  c->lr=0x800AF35Cu; f_800C422C(c); // 800AF358
  c->r[0]=c->r[3]-c->r[28]; // 800AF35C
  cmps(c,0,(int32_t)c->r[0],2); // 800AF360
  if (crb(c,0)) { IRQCHK(c); goto L_800AF358; } // 800AF364
  c->r[3]=R8(c->r[29]+0x00000002u); // 800AF368
  c->r[5]=R8(c->r[29]+0x00000000u); // 800AF36C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800AF370
  c->r[4]=R8(c->r[29]+0x00000001u); // 800AF374
  W32(c->r[1]+0x00000024u,c->r[5]); // 800AF378
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 800AF37C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 800AF380
  {uint32_t ea=c->r[2]+0xFFFF8F58u; c->f[0]=RF64(ea);} // 800AF384
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800AF388
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 800AF38C
  {uint32_t ea=c->r[2]+0xFFFF8F2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF390
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800AF394
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[0]); // 800AF398
  W32(c->r[1]+0x00000024u,c->r[3]); // 800AF39C
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 800AF3A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800AF3A4
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 800AF3A8
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800AF3AC
  {uint32_t ea=c->r[2]+0xFFFF8F30u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF3B0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 800AF3B4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 800AF3B8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 800AF3BC
  W32(c->r[1]+0x00000024u,c->r[4]); // 800AF3C0
  {uint32_t ea=c->r[2]+0xFFFF8F28u; c->f[5]=c->ps1[5]=RF32(ea);} // 800AF3C4
  c->f[9]=c->ps1[9]=S(c->f[2]-c->f[0]); // 800AF3C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800AF3CC
  c->f[13]=c->ps1[13]=S(c->f[5]*c->f[7]); // 800AF3D0
  {uint32_t ea=c->r[2]+0xFFFF8F38u; c->f[11]=c->ps1[11]=RF32(ea);} // 800AF3D4
  c->f[12]=c->ps1[12]=S(c->f[6]+c->f[4]); // 800AF3D8
  {uint32_t ea=c->r[2]+0xFFFF8F3Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 800AF3DC
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[0]); // 800AF3E0
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800AF3E4
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[3]); // 800AF3E8
  {uint32_t ea=c->r[2]+0xFFFF8F40u; c->f[6]=c->ps1[6]=RF32(ea);} // 800AF3EC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800AF3F0
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 800AF3F4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 800AF3F8
  W32(c->r[1]+0x00000024u,c->r[4]); // 800AF3FC
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 800AF400
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800AF404
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800AF408
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 800AF40C
  {uint32_t ea=c->r[2]+0xFFFF8F44u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF410
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 800AF414
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[5]); // 800AF418
  {uint32_t ea=c->r[2]+0xFFFF8F48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF41C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800AF420
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 800AF424
  c->r[0]=R8(c->r[29]+0x00000003u); // 800AF428
  c->f[3]=c->ps1[3]=S(c->f[13]+c->f[12]); // 800AF42C
  c->f[4]=c->ps1[4]=S(c->f[8]-c->f[6]); // 800AF430
  {uint32_t ea=c->r[2]+0xFFFF8F24u; c->f[9]=c->ps1[9]=RF32(ea);} // 800AF434
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 800AF438
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF43C
  {uint32_t ea=c->r[2]+0xFFFF8F20u; c->f[5]=c->ps1[5]=RF32(ea);} // 800AF440
  c->f[6]=c->ps1[6]=S(c->f[9]+c->f[3]); // 800AF444
  c->f[1]=c->ps1[1]=S(c->f[10]+c->f[4]); // 800AF448
  {uint32_t ea=c->r[2]+0xFFFF8F34u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF44C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800AF450
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[6]); // 800AF454
  {uint32_t ea=c->r[2]+0xFFFF8F4Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 800AF458
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800AF45C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800AF460
  W8(c->r[1]+0x00000010u,c->r[5]); // 800AF464
  fcmp(c,0,c->f[4],c->f[7]); // 800AF468
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 800AF46C
  W8(c->r[1]+0x00000011u,c->r[4]); // 800AF470
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 800AF474
  W8(c->r[1]+0x00000012u,c->r[3]); // 800AF478
  W8(c->r[1]+0x00000013u,c->r[0]); // 800AF47C
  if (!crb(c,1)) { goto L_800AF488; } // 800AF480
  goto L_800AF49C; // 800AF484
L_800AF488:;
  fcmp(c,0,c->f[4],c->f[9]); // 800AF488
  if (!crb(c,0)) { goto L_800AF494; } // 800AF48C
  goto L_800AF498; // 800AF490
L_800AF494:;
  c->f[9]=c->f[4]; // 800AF494
L_800AF498:;
  c->f[7]=c->f[9]; // 800AF498
L_800AF49C:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[7],true)); // 800AF49C
  {uint32_t ea=c->r[2]+0xFFFF8F50u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF4A0
  fcmp(c,0,c->f[2],c->f[3]); // 800AF4A4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800AF4A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AF4AC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800AF4B0
  if (!crb(c,1)) { goto L_800AF4BC; } // 800AF4B4
  goto L_800AF4D0; // 800AF4B8
L_800AF4BC:;
  {uint32_t ea=c->r[2]+0xFFFF8F24u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF4BC
  fcmp(c,0,c->f[2],c->f[3]); // 800AF4C0
  if (!crb(c,0)) { goto L_800AF4CC; } // 800AF4C4
  goto L_800AF4D0; // 800AF4C8
L_800AF4CC:;
  c->f[3]=c->f[2]; // 800AF4CC
L_800AF4D0:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800AF4D0
  {uint32_t ea=c->r[2]+0xFFFF8F50u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF4D4
  fcmp(c,0,c->f[1],c->f[2]); // 800AF4D8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800AF4DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AF4E0
  W8(c->r[1]+0x00000009u,c->r[0]); // 800AF4E4
  if (!crb(c,1)) { goto L_800AF4F0; } // 800AF4E8
  goto L_800AF504; // 800AF4EC
L_800AF4F0:;
  {uint32_t ea=c->r[2]+0xFFFF8F24u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF4F0
  fcmp(c,0,c->f[1],c->f[2]); // 800AF4F4
  if (!crb(c,0)) { goto L_800AF500; } // 800AF4F8
  goto L_800AF504; // 800AF4FC
L_800AF500:;
  c->f[2]=c->f[1]; // 800AF500
L_800AF504:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800AF504
  c->r[0]=0u+0x00000000u; // 800AF508
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800AF50C
  c->r[3]=c->r[30]|c->r[30]; // 800AF510
  c->r[10]=R32(c->r[29]+0x00000008u); // 800AF514
  c->r[6]=c->r[1]+0x00000014u; // 800AF518
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800AF51C
  c->r[4]=0u+0x00000280u; // 800AF520
  c->r[5]=0u+0x000001E0u; // 800AF524
  c->r[7]=0u+0x00000030u; // 800AF528
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AF52C
  c->r[8]=0u+0x00000064u; // 800AF530
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800AF534
  c->r[0]=R32(c->r[1]+0x00000008u); // 800AF538
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF53C
  c->r[9]=R16(c->r[31]+0x0000000Eu); // 800AF540
  c->lr=0x800AF548u; f_800AE954(c); // 800AF544
  c->r[4]=0u+0x00090000u; // 800AF548
  c->r[3]=c->r[30]|c->r[30]; // 800AF54C
  c->r[4]=c->r[4]+0x00006000u; // 800AF550
  c->lr=0x800AF558u; f_800ABD2C(c); // 800AF554
  c->r[3]=0u+0x00000000u; // 800AF558
  c->lr=0x800AF560u; f_800C41B4(c); // 800AF55C
  c->lr=0x800AF564u; f_800C402C(c); // 800AF560
  c->lr=0x800AF568u; f_800C422C(c); // 800AF564
  c->r[30]=c->r[3]|c->r[3]; // 800AF568
L_800AF56C:;
  c->lr=0x800AF570u; f_800C422C(c); // 800AF56C
  c->r[0]=c->r[3]-c->r[30]; // 800AF570
  cmps(c,0,(int32_t)c->r[0],1); // 800AF574
  if (crb(c,0)) { IRQCHK(c); goto L_800AF56C; } // 800AF578
  c->lr=0x800AF580u; f_800B087C(c); // 800AF57C
  c->r[4]=R32(c->r[29]+0x00000008u); // 800AF580
  c->r[3]=c->r[13]+0xFFFF80E8u; // 800AF584
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AF588
  c->lr=0x800AF590u; f_800ACBA4(c); // 800AF58C
  c->lr=0x800AF594u; f_800A94E0(c); // 800AF590
  c->r[0]=R32(c->r[1]+0x00000054u); // 800AF594
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800AF598
  c->r[30]=R32(c->r[1]+0x00000048u); // 800AF59C
  c->r[29]=R32(c->r[1]+0x00000044u); // 800AF5A0
  c->r[28]=R32(c->r[1]+0x00000040u); // 800AF5A4
  c->lr=c->r[0]; // 800AF5A8
  c->r[1]=c->r[1]+0x00000050u; // 800AF5AC
  return; // 800AF5B0
}

// GetFontCode
void f_800AF5B4(Ctx* __restrict c) {
  trace_call(0x800AF5B4u);
  cmpu(c,0,c->r[3],0x00000001u); // 800AF5B4
  if (!crb(c,2)) { goto L_800AF6C8; } // 800AF5B8
  cmpu(c,0,c->r[4],0x00000020u); // 800AF5BC
  if (crb(c,0)) { goto L_800AF5E4; } // 800AF5C0
  cmpu(c,0,c->r[4],0x000000DFu); // 800AF5C4
  if (crb(c,1)) { goto L_800AF5E4; } // 800AF5C8
  c->r[0]=c->r[4]+0xFFFFFFE0u; // 800AF5CC
  c->r[3]=0u+0x80260000u; // 800AF5D0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800AF5D4
  c->r[3]=c->r[3]+0x00006A18u; // 800AF5D8
  c->r[3]=R16(c->r[3]+c->r[0]); // 800AF5DC
  return; // 800AF5E0
L_800AF5E4:;
  cmpu(c,0,c->r[4],0x0000889Eu); // 800AF5E4
  if (!crb(c,1)) { goto L_800AF650; } // 800AF5E8
  cmpu(c,0,c->r[4],0x00009872u); // 800AF5EC
  if (crb(c,1)) { goto L_800AF650; } // 800AF5F0
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 800AF5F4
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800AF5F8
  c->r[3]=c->r[3]+0xFFFFFF78u; // 800AF5FC
  c->r[0]=0u+0x00000000u; // 800AF600
  cmpu(c,0,c->r[4],0x00000040u); // 800AF604
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 800AF608
  if (crb(c,0)) { goto L_800AF624; } // 800AF60C
  cmpu(c,0,c->r[4],0x000000FCu); // 800AF610
  if (crb(c,1)) { goto L_800AF624; } // 800AF614
  cmpu(c,0,c->r[4],0x0000007Fu); // 800AF618
  if (crb(c,2)) { goto L_800AF624; } // 800AF61C
  c->r[0]=0u+0x00000001u; // 800AF620
L_800AF624:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AF624
  if (!crb(c,2)) { goto L_800AF634; } // 800AF628
  c->r[3]=0u+0x00000000u; // 800AF62C
  return; // 800AF630
L_800AF634:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800AF634
  cmps(c,0,(int32_t)c->r[4],64); // 800AF638
  if (crb(c,0)) { goto L_800AF644; } // 800AF63C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800AF640
L_800AF644:;
  c->r[3]=c->r[3]+c->r[4]; // 800AF644
  c->r[3]=c->r[3]+0x000002BEu; // 800AF648
  return; // 800AF64C
L_800AF650:;
  cmpu(c,0,c->r[4],0x00008140u); // 800AF650
  if (crb(c,0)) { goto L_800AF6E0; } // 800AF654
  cmpu(c,0,c->r[4],0x0000879Eu); // 800AF658
  if (!crb(c,0)) { goto L_800AF6E0; } // 800AF65C
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 800AF660
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800AF664
  c->r[3]=c->r[3]+0xFFFFFF7Fu; // 800AF668
  c->r[0]=0u+0x00000000u; // 800AF66C
  cmpu(c,0,c->r[4],0x00000040u); // 800AF670
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 800AF674
  if (crb(c,0)) { goto L_800AF690; } // 800AF678
  cmpu(c,0,c->r[4],0x000000FCu); // 800AF67C
  if (crb(c,1)) { goto L_800AF690; } // 800AF680
  cmpu(c,0,c->r[4],0x0000007Fu); // 800AF684
  if (crb(c,2)) { goto L_800AF690; } // 800AF688
  c->r[0]=0u+0x00000001u; // 800AF68C
L_800AF690:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AF690
  if (!crb(c,2)) { goto L_800AF6A0; } // 800AF694
  c->r[3]=0u+0x00000000u; // 800AF698
  return; // 800AF69C
L_800AF6A0:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800AF6A0
  cmps(c,0,(int32_t)c->r[4],64); // 800AF6A4
  if (crb(c,0)) { goto L_800AF6B0; } // 800AF6A8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800AF6AC
L_800AF6B0:;
  c->r[0]=c->r[3]+c->r[4]; // 800AF6B0
  c->r[3]=0u+0x80260000u; // 800AF6B4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800AF6B8
  c->r[3]=c->r[3]+0x00006B98u; // 800AF6BC
  c->r[3]=R16(c->r[3]+c->r[0]); // 800AF6C0
  return; // 800AF6C4
L_800AF6C8:;
  cmpu(c,0,c->r[4],0x00000020u); // 800AF6C8
  if (!crb(c,1)) { goto L_800AF6E0; } // 800AF6CC
  cmpu(c,0,c->r[4],0x000000FFu); // 800AF6D0
  if (crb(c,1)) { goto L_800AF6E0; } // 800AF6D4
  c->r[3]=c->r[4]+0xFFFFFFE0u; // 800AF6D8
  return; // 800AF6DC
L_800AF6E0:;
  c->r[3]=0u+0x00000000u; // 800AF6E0
  return; // 800AF6E4
}

// Decode
void f_800AF6E8(Ctx* __restrict c) {
  trace_call(0x800AF6E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF6E8
  c->r[0]=c->lr; // 800AF6EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AF6F0
  c->r[11]=c->r[1]+0x00000020u; // 800AF6F4
  c->lr=0x800AF6FCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AF6F8
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800AF6FC
  c->r[30]=c->r[3]+0x00000010u; // 800AF700
  c->r[0]=R32(c->r[3]+0x00000004u); // 800AF704
  c->r[8]=0u+0x00000000u; // 800AF708
  c->r[29]=c->r[3]+c->r[5]; // 800AF70C
  c->r[9]=R32(c->r[3]+0x00000008u); // 800AF710
  c->r[11]=0u+0x00000000u; // 800AF714
  c->r[5]=0u+0x80000000u; // 800AF718
L_800AF71C:;
  cmps(c,0,(int32_t)c->r[11],0); // 800AF71C
  if (!crb(c,2)) { goto L_800AF730; } // 800AF720
  c->r[12]=R32(c->r[30]+0x00000000u); // 800AF724
  c->r[11]=0u+0x00000020u; // 800AF728
  c->r[30]=c->r[30]+0x00000004u; // 800AF72C
L_800AF730:;
  c->r[6]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[6]); // 800AF730
  if (crb(c,2)) { goto L_800AF74C; } // 800AF734
  c->r[6]=R8(c->r[29]+0x00000000u); // 800AF738
  c->r[29]=c->r[29]+0x00000001u; // 800AF73C
  W8(c->r[4]+c->r[8],c->r[6]); // 800AF740
  c->r[8]=c->r[8]+0x00000001u; // 800AF744
  goto L_800AF864; // 800AF748
L_800AF74C:;
  c->r[7]=c->r[3]+c->r[9]; // 800AF74C
  c->r[6]=R8(c->r[3]+c->r[9]); // 800AF750
  c->r[7]=R8(c->r[7]+0x00000001u); // 800AF754
  c->r[9]=c->r[9]+0x00000002u; // 800AF758
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 800AF75C
  c->r[10]=sraw(c,c->r[7],12); cr0(c,c->r[10]); // 800AF760
  c->r[6]=rotl(c->r[7],0)&0x00000FFFu; // 800AF764
  c->r[7]=c->r[8]-c->r[6]; // 800AF768
  if (!crb(c,2)) { goto L_800AF780; } // 800AF76C
  c->r[6]=R8(c->r[29]+0x00000000u); // 800AF770
  c->r[29]=c->r[29]+0x00000001u; // 800AF774
  c->r[10]=c->r[6]+0x00000012u; // 800AF778
  goto L_800AF784; // 800AF77C
L_800AF780:;
  c->r[10]=c->r[10]+0x00000002u; // 800AF780
L_800AF784:;
  cmps(c,1,(int32_t)c->r[10],0); // 800AF784
  c->r[6]=0u+0x00000000u; // 800AF788
  if (!crb(c,5)) { goto L_800AF864; } // 800AF78C
  cmps(c,0,(int32_t)c->r[10],8); // 800AF790
  c->r[27]=c->r[10]+0xFFFFFFF8u; // 800AF794
  if (!crb(c,1)) { goto L_800AF830; } // 800AF798
  c->r[28]=0u+0x00000000u; // 800AF79C
  if (crb(c,4)) { goto L_800AF7B4; } // 800AF7A0
  c->r[26]=c->r[5]+0xFFFFFFFEu; // 800AF7A4
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[26]); // 800AF7A8
  if (crb(c,1)) { goto L_800AF7B4; } // 800AF7AC
  c->r[28]=0u+0x00000001u; // 800AF7B0
L_800AF7B4:;
  cmps(c,0,(int32_t)c->r[28],0); // 800AF7B4
  if (crb(c,2)) { goto L_800AF830; } // 800AF7B8
  c->r[31]=c->r[27]+0x00000007u; // 800AF7BC
  c->r[28]=c->r[4]+c->r[8]; // 800AF7C0
  c->r[31]=rotl(c->r[31],29)&0x1FFFFFFFu; // 800AF7C4
  c->ctr=c->r[31]; // 800AF7C8
  cmps(c,0,(int32_t)c->r[27],0); // 800AF7CC
  if (!crb(c,1)) { goto L_800AF830; } // 800AF7D0
L_800AF7D4:;
  c->r[26]=c->r[4]+c->r[7]; // 800AF7D4
  c->r[27]=c->r[8]+c->r[4]; // 800AF7D8
  c->r[31]=R8(c->r[26]+0xFFFFFFFFu); // 800AF7DC
  c->r[8]=c->r[8]+0x00000008u; // 800AF7E0
  c->r[6]=c->r[6]+0x00000008u; // 800AF7E4
  W8(c->r[28]+0x00000000u,c->r[31]); // 800AF7E8
  c->r[28]=c->r[28]+0x00000008u; // 800AF7EC
  c->r[31]=R8(c->r[4]+c->r[7]); // 800AF7F0
  c->r[7]=c->r[7]+0x00000008u; // 800AF7F4
  W8(c->r[27]+0x00000001u,c->r[31]); // 800AF7F8
  c->r[31]=R8(c->r[26]+0x00000001u); // 800AF7FC
  W8(c->r[27]+0x00000002u,c->r[31]); // 800AF800
  c->r[31]=R8(c->r[26]+0x00000002u); // 800AF804
  W8(c->r[27]+0x00000003u,c->r[31]); // 800AF808
  c->r[31]=R8(c->r[26]+0x00000003u); // 800AF80C
  W8(c->r[27]+0x00000004u,c->r[31]); // 800AF810
  c->r[31]=R8(c->r[26]+0x00000004u); // 800AF814
  W8(c->r[27]+0x00000005u,c->r[31]); // 800AF818
  c->r[31]=R8(c->r[26]+0x00000005u); // 800AF81C
  W8(c->r[27]+0x00000006u,c->r[31]); // 800AF820
  c->r[31]=R8(c->r[26]+0x00000006u); // 800AF824
  W8(c->r[27]+0x00000007u,c->r[31]); // 800AF828
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AF7D4; } // 800AF82C
L_800AF830:;
  c->r[31]=c->r[10]-c->r[6]; // 800AF830
  c->r[28]=c->r[4]+c->r[8]; // 800AF834
  c->ctr=c->r[31]; // 800AF838
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[10]); // 800AF83C
  if (!crb(c,0)) { goto L_800AF864; } // 800AF840
L_800AF844:;
  c->r[10]=c->r[4]+c->r[7]; // 800AF844
  c->r[6]=c->r[6]+0x00000001u; // 800AF848
  c->r[10]=R8(c->r[10]+0xFFFFFFFFu); // 800AF84C
  c->r[8]=c->r[8]+0x00000001u; // 800AF850
  c->r[7]=c->r[7]+0x00000001u; // 800AF854
  W8(c->r[28]+0x00000000u,c->r[10]); // 800AF858
  c->r[28]=c->r[28]+0x00000001u; // 800AF85C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AF844; } // 800AF860
L_800AF864:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800AF864
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 800AF868
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 800AF86C
  if (crb(c,0)) { IRQCHK(c); goto L_800AF71C; } // 800AF870
  c->r[11]=c->r[1]+0x00000020u; // 800AF874
  c->lr=0x800AF87Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AF878
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AF87C
  c->lr=c->r[0]; // 800AF880
  c->r[1]=c->r[1]+0x00000020u; // 800AF884
  return; // 800AF888
}

// OSGetFontEncode
void f_800AF88C(Ctx* __restrict c) {
  trace_call(0x800AF88Cu);
  c->r[3]=R16(c->r[13]+0xFFFF80F0u); // 800AF88C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 800AF890
  if (!crb(c,2)) return; // 800AF894
  c->r[3]=0u+0x80000000u; // 800AF898
  c->r[0]=R32(c->r[3]+0x000000CCu); // 800AF89C
  cmps(c,0,(int32_t)c->r[0],0); // 800AF8A0
  if (crb(c,2)) { goto L_800AF8B0; } // 800AF8A4
  if (crb(c,0)) { goto L_800AF8C4; } // 800AF8A8
  goto L_800AF8C4; // 800AF8AC
L_800AF8B0:;
  c->r[3]=0u+0xCC000000u; // 800AF8B0
  c->r[0]=R16(c->r[3]+0x0000206Eu); // 800AF8B4
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 800AF8B8
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800AF8BC
  goto L_800AF8CC; // 800AF8C0
L_800AF8C4:;
  c->r[0]=0u+0x00000000u; // 800AF8C4
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800AF8C8
L_800AF8CC:;
  c->r[4]=0u+0x800B0000u; // 800AF8CC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800AF8D0
  c->r[4]=c->r[4]+0xFFFFFD88u; // 800AF8D4
  W32(c->r[13]+0xFFFF8CC0u,c->r[4]); // 800AF8D8
  return; // 800AF8DC
}

// OSSetFontEncode
void f_800AF8E0(Ctx* __restrict c) {
  trace_call(0x800AF8E0u);
  c->r[0]=R16(c->r[13]+0xFFFF80F0u); // 800AF8E0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800AF8E4
  if (crb(c,2)) { goto L_800AF8F0; } // 800AF8E8
  goto L_800AF934; // 800AF8EC
L_800AF8F0:;
  c->r[4]=0u+0x80000000u; // 800AF8F0
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800AF8F4
  cmps(c,0,(int32_t)c->r[0],0); // 800AF8F8
  if (crb(c,2)) { goto L_800AF908; } // 800AF8FC
  if (crb(c,0)) { goto L_800AF91C; } // 800AF900
  goto L_800AF91C; // 800AF904
L_800AF908:;
  c->r[4]=0u+0xCC000000u; // 800AF908
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800AF90C
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 800AF910
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800AF914
  goto L_800AF924; // 800AF918
L_800AF91C:;
  c->r[0]=0u+0x00000000u; // 800AF91C
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800AF920
L_800AF924:;
  c->r[4]=0u+0x800B0000u; // 800AF924
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800AF928
  c->r[4]=c->r[4]+0xFFFFFD88u; // 800AF92C
  W32(c->r[13]+0xFFFF8CC0u,c->r[4]); // 800AF930
L_800AF934:;
  cmpu(c,1,c->r[3],0x00000005u); // 800AF934
  if (crb(c,5)) { goto L_800AF958; } // 800AF938
  cmpu(c,0,c->r[3],0x00000003u); // 800AF93C
  W16(c->r[13]+0xFFFF80F0u,c->r[3]); // 800AF940
  if (crb(c,0)) { goto L_800AF958; } // 800AF944
  if (crb(c,5)) { goto L_800AF958; } // 800AF948
  c->r[3]=0u+0x800B0000u; // 800AF94C
  c->r[3]=c->r[3]+0xFFFFFE84u; // 800AF950
  W32(c->r[13]+0xFFFF8CC0u,c->r[3]); // 800AF954
L_800AF958:;
  c->r[3]=c->r[0]|c->r[0]; // 800AF958
  return; // 800AF95C
}

// ReadFont
void f_800AF960(Ctx* __restrict c) {
  trace_call(0x800AF960u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF960
  c->r[0]=c->lr; // 800AF964
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AF968
  c->r[11]=c->r[1]+0x00000030u; // 800AF96C
  c->lr=0x800AF974u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AF970
  cmpu(c,0,c->r[4],0x00000001u); // 800AF974
  c->r[28]=c->r[3]|c->r[3]; // 800AF978
  c->r[29]=c->r[4]|c->r[4]; // 800AF97C
  c->r[26]=c->r[5]|c->r[5]; // 800AF980
  if (!crb(c,2)) { goto L_800AF9E0; } // 800AF984
  c->r[4]=0u+0x001B0000u; // 800AF988
  c->r[3]=0u+0x00050000u; // 800AF98C
  c->r[27]=c->r[28]|c->r[28]; // 800AF990
  c->r[31]=c->r[4]+0xFFFFFF00u; // 800AF994
  c->r[30]=c->r[3]+0xFFFFD000u; // 800AF998
  goto L_800AF9D4; // 800AF99C
L_800AF9A0:;
  cmps(c,0,(int32_t)c->r[30],256); // 800AF9A0
  c->r[25]=0u+0x00000100u; // 800AF9A4
  if (crb(c,1)) { goto L_800AF9B0; } // 800AF9A8
  c->r[25]=c->r[30]|c->r[30]; // 800AF9AC
L_800AF9B0:;
  c->r[30]=c->r[30]-c->r[25]; // 800AF9B0
L_800AF9B4:;
  c->r[3]=c->r[27]|c->r[27]; // 800AF9B4
  c->r[4]=c->r[25]|c->r[25]; // 800AF9B8
  c->r[5]=c->r[31]|c->r[31]; // 800AF9BC
  c->lr=0x800AF9C4u; f_800B2E00(c); // 800AF9C0
  cmps(c,0,(int32_t)c->r[3],0); // 800AF9C4
  if (crb(c,2)) { IRQCHK(c); goto L_800AF9B4; } // 800AF9C8
  c->r[31]=c->r[31]+c->r[25]; // 800AF9CC
  c->r[27]=c->r[27]+c->r[25]; // 800AF9D0
L_800AF9D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AF9D4
  if (crb(c,1)) { IRQCHK(c); goto L_800AF9A0; } // 800AF9D8
  goto L_800AFA30; // 800AF9DC
L_800AF9E0:;
  c->r[3]=0u+0x00200000u; // 800AF9E0
  c->r[27]=c->r[28]|c->r[28]; // 800AF9E4
  c->r[31]=c->r[3]+0xFFFFCF00u; // 800AF9E8
  c->r[30]=0u+0x00003000u; // 800AF9EC
  goto L_800AFA28; // 800AF9F0
L_800AF9F4:;
  cmps(c,0,(int32_t)c->r[30],256); // 800AF9F4
  c->r[25]=0u+0x00000100u; // 800AF9F8
  if (crb(c,1)) { goto L_800AFA04; } // 800AF9FC
  c->r[25]=c->r[30]|c->r[30]; // 800AFA00
L_800AFA04:;
  c->r[30]=c->r[30]-c->r[25]; // 800AFA04
L_800AFA08:;
  c->r[3]=c->r[27]|c->r[27]; // 800AFA08
  c->r[4]=c->r[25]|c->r[25]; // 800AFA0C
  c->r[5]=c->r[31]|c->r[31]; // 800AFA10
  c->lr=0x800AFA18u; f_800B2E00(c); // 800AFA14
  cmps(c,0,(int32_t)c->r[3],0); // 800AFA18
  if (crb(c,2)) { IRQCHK(c); goto L_800AFA08; } // 800AFA1C
  c->r[31]=c->r[31]+c->r[25]; // 800AFA20
  c->r[27]=c->r[27]+c->r[25]; // 800AFA24
L_800AFA28:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AFA28
  if (crb(c,1)) { IRQCHK(c); goto L_800AF9F4; } // 800AFA2C
L_800AFA30:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 800AFA30
  cmpu(c,0,c->r[0],0x00000059u); // 800AFA34
  if (!crb(c,2)) { goto L_800AFA5C; } // 800AFA38
  c->r[0]=R8(c->r[28]+0x00000001u); // 800AFA3C
  cmpu(c,0,c->r[0],0x00000061u); // 800AFA40
  if (!crb(c,2)) { goto L_800AFA5C; } // 800AFA44
  c->r[0]=R8(c->r[28]+0x00000002u); // 800AFA48
  cmpu(c,0,c->r[0],0x00000079u); // 800AFA4C
  if (!crb(c,2)) { goto L_800AFA5C; } // 800AFA50
  c->r[27]=R32(c->r[28]+0x00000004u); // 800AFA54
  goto L_800AFA60; // 800AFA58
L_800AFA5C:;
  c->r[27]=0u+0x00000000u; // 800AFA5C
L_800AFA60:;
  cmps(c,0,(int32_t)c->r[27],0); // 800AFA60
  if (!crb(c,2)) { goto L_800AFA70; } // 800AFA64
  c->r[3]=0u+0x00000000u; // 800AFA68
  goto L_800AFC48; // 800AFA6C
L_800AFA70:;
  c->r[3]=c->r[28]|c->r[28]; // 800AFA70
  c->r[4]=c->r[26]|c->r[26]; // 800AFA74
  c->lr=0x800AFA7Cu; f_800AF6E8(c); // 800AFA78
  cmpu(c,0,c->r[29],0x00000001u); // 800AFA7C
  if (!crb(c,2)) { goto L_800AFC44; } // 800AFA80
  c->r[3]=c->r[29]|c->r[29]; // 800AFA84
  c->r[28]=R16(c->r[2]+0xFFFF8F60u); // 800AFA88
  c->r[29]=R16(c->r[2]+0xFFFF8F62u); // 800AFA8C
  c->r[4]=0u+0x00000054u; // 800AFA90
  c->r[30]=R16(c->r[2]+0xFFFF8F64u); // 800AFA94
  c->r[31]=R16(c->r[2]+0xFFFF8F66u); // 800AFA98
  c->lr=0x800AFAA0u; f_800AF5B4(c); // 800AFA9C
  c->r[9]=R16(c->r[26]+0x0000001Au); // 800AFAA0
  c->r[4]=R16(c->r[26]+0x0000001Cu); // 800AFAA4
  c->r[0]=R16(c->r[26]+0x0000001Eu); // 800AFAA8
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[4]); // 800AFAAC
  c->r[5]=R32(c->r[26]+0x00000024u); // 800AFAB0
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFE0u; // 800AFAB4
  c->r[6]=R16(c->r[26]+0x00000012u); // 800AFAB8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 800AFABC
  c->r[7]=R16(c->r[26]+0x00000010u); // 800AFAC0
  c->r[12]=divw((int32_t)c->r[3],(int32_t)c->r[10]); // 800AFAC4
  c->r[0]=c->r[0]+c->r[4]; // 800AFAC8
  c->r[4]=c->r[26]+c->r[5]; // 800AFACC
  c->r[8]=R32(c->r[26]+0x00000014u); // 800AFAD0
  c->r[11]=sraw(c,c->r[0],1); // 800AFAD4
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 800AFAD8
  c->r[3]=c->r[3]-c->r[0]; // 800AFADC
  c->r[5]=divw((int32_t)c->r[3],(int32_t)c->r[9]); // 800AFAE0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 800AFAE4
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800AFAE8
  c->r[25]=c->r[3]-c->r[0]; // 800AFAEC
  c->r[6]=c->r[5]+0x00000004u; // 800AFAF0
  c->r[25]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[7]); // 800AFAF4
  c->r[10]=c->r[5]+0x00000005u; // 800AFAF8
  c->r[3]=sraw(c,c->r[6],3); // 800AFAFC
  c->r[0]=rotl(c->r[6],29)&0xE0000000u; // 800AFB00
  c->r[9]=addc(c,c->r[3],0,c->xer_ca); // 800AFB04
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 800AFB08
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 800AFB0C
  c->r[3]=sraw(c,c->r[25],3); // 800AFB10
  c->r[0]=c->r[0]-c->r[7]; // 800AFB14
  c->r[8]=addc(c,c->r[3],0,c->xer_ca); // 800AFB18
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800AFB1C
  c->r[0]=rotl(c->r[25],29)&0xE0000000u; // 800AFB20
  c->r[6]=rotl(c->r[25],1)&0x00000001u; // 800AFB24
  c->r[12]=rotl(c->r[12],31)&0x7FFFFFFFu; // 800AFB28
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[9]); // 800AFB2C
  c->r[7]=c->r[3]+c->r[7]; // 800AFB30
  c->r[0]=c->r[0]-c->r[6]; // 800AFB34
  c->r[4]=c->r[4]+c->r[12]; // 800AFB38
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800AFB3C
  c->r[0]=rotl(c->r[8],4)&0xFFFFFFF0u; // 800AFB40
  c->r[3]=c->r[3]+c->r[6]; // 800AFB44
  c->r[9]=c->r[4]+c->r[9]; // 800AFB48
  c->r[8]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800AFB4C
  c->r[6]=rotl(c->r[10],29)&0xE0000000u; // 800AFB50
  c->r[3]=sraw(c,c->r[3],2); // 800AFB54
  c->r[9]=c->r[9]+c->r[0]; // 800AFB58
  c->r[9]=c->r[9]+c->r[8]; // 800AFB5C
  c->r[7]=rotl(c->r[10],1)&0x00000001u; // 800AFB60
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 800AFB64
  c->r[8]=c->r[5]+0x00000006u; // 800AFB68
  W16(c->r[9]+c->r[3],c->r[28]); // 800AFB6C
  c->r[6]=c->r[6]-c->r[7]; // 800AFB70
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800AFB74
  c->r[6]=c->r[6]+c->r[7]; // 800AFB78
  c->r[11]=R16(c->r[26]+0x0000001Eu); // 800AFB7C
  c->r[9]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800AFB80
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 800AFB84
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFE0u; // 800AFB88
  c->r[11]=rotl(c->r[11],3)&0x00000001u; // 800AFB8C
  c->r[11]=c->r[11]+c->r[12]; // 800AFB90
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 800AFB94
  c->r[11]=sraw(c,c->r[11],1); // 800AFB98
  c->r[10]=sraw(c,c->r[10],3); // 800AFB9C
  c->r[6]=c->r[6]-c->r[7]; // 800AFBA0
  c->r[10]=addc(c,c->r[10],0,c->xer_ca); // 800AFBA4
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800AFBA8
  c->r[6]=c->r[6]+c->r[7]; // 800AFBAC
  c->r[10]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[10]); // 800AFBB0
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800AFBB4
  c->r[7]=c->r[4]+c->r[10]; // 800AFBB8
  c->r[7]=c->r[7]+c->r[0]; // 800AFBBC
  c->r[7]=c->r[7]+c->r[9]; // 800AFBC0
  W16(c->r[7]+c->r[3],c->r[29]); // 800AFBC4
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 800AFBC8
  c->r[9]=rotl(c->r[7],2)&0xFFFFFFE0u; // 800AFBCC
  c->r[7]=rotl(c->r[7],3)&0x00000001u; // 800AFBD0
  c->r[7]=c->r[7]+c->r[9]; // 800AFBD4
  c->r[9]=sraw(c,c->r[7],1); // 800AFBD8
  c->r[7]=sraw(c,c->r[8],3); // 800AFBDC
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 800AFBE0
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 800AFBE4
  c->r[7]=c->r[4]+c->r[7]; // 800AFBE8
  c->r[7]=c->r[7]+c->r[0]; // 800AFBEC
  c->r[7]=c->r[7]+c->r[6]; // 800AFBF0
  W16(c->r[7]+c->r[3],c->r[30]); // 800AFBF4
  c->r[7]=c->r[5]+0x00000007u; // 800AFBF8
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 800AFBFC
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 800AFC00
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 800AFC04
  c->r[5]=c->r[5]-c->r[6]; // 800AFC08
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFE0u; // 800AFC0C
  c->r[8]=rotl(c->r[8],3)&0x00000001u; // 800AFC10
  c->r[8]=c->r[8]+c->r[9]; // 800AFC14
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 800AFC18
  c->r[8]=sraw(c,c->r[8],1); // 800AFC1C
  c->r[7]=sraw(c,c->r[7],3); // 800AFC20
  c->r[5]=c->r[5]+c->r[6]; // 800AFC24
  c->r[6]=addc(c,c->r[7],0,c->xer_ca); // 800AFC28
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 800AFC2C
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800AFC30
  c->r[4]=c->r[4]+c->r[6]; // 800AFC34
  c->r[4]=c->r[4]+c->r[0]; // 800AFC38
  c->r[4]=c->r[4]+c->r[5]; // 800AFC3C
  W16(c->r[4]+c->r[3],c->r[31]); // 800AFC40
L_800AFC44:;
  c->r[3]=c->r[27]|c->r[27]; // 800AFC44
L_800AFC48:;
  c->r[11]=c->r[1]+0x00000030u; // 800AFC48
  c->lr=0x800AFC50u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AFC4C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AFC50
  c->lr=c->r[0]; // 800AFC54
  c->r[1]=c->r[1]+0x00000030u; // 800AFC58
  return; // 800AFC5C
}

// OSLoadFont
void f_800AFC60(Ctx* __restrict c) {
  trace_call(0x800AFC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFC60
  c->r[0]=c->lr; // 800AFC64
  c->r[5]=c->r[3]|c->r[3]; // 800AFC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFC6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFC70
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AFC74
  c->r[30]=c->r[4]|c->r[4]; // 800AFC78
  c->r[0]=R16(c->r[13]+0xFFFF80F0u); // 800AFC7C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800AFC80
  if (crb(c,2)) { goto L_800AFC8C; } // 800AFC84
  goto L_800AFCD0; // 800AFC88
L_800AFC8C:;
  c->r[4]=0u+0x80000000u; // 800AFC8C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800AFC90
  cmps(c,0,(int32_t)c->r[0],0); // 800AFC94
  if (crb(c,2)) { goto L_800AFCA4; } // 800AFC98
  if (crb(c,0)) { goto L_800AFCB8; } // 800AFC9C
  goto L_800AFCB8; // 800AFCA0
L_800AFCA4:;
  c->r[4]=0u+0xCC000000u; // 800AFCA4
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800AFCA8
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 800AFCAC
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800AFCB0
  goto L_800AFCC0; // 800AFCB4
L_800AFCB8:;
  c->r[0]=0u+0x00000000u; // 800AFCB8
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800AFCBC
L_800AFCC0:;
  c->r[4]=0u+0x800B0000u; // 800AFCC0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800AFCC4
  c->r[4]=c->r[4]+0xFFFFFD88u; // 800AFCC8
  W32(c->r[13]+0xFFFF8CC0u,c->r[4]); // 800AFCCC
L_800AFCD0:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800AFCD0
  cmps(c,0,(int32_t)c->r[0],2); // 800AFCD4
  if (crb(c,2)) { goto L_800AFD68; } // 800AFCD8
  if (!crb(c,0)) { goto L_800AFCF0; } // 800AFCDC
  cmps(c,0,(int32_t)c->r[0],0); // 800AFCE0
  if (crb(c,2)) { goto L_800AFCFC; } // 800AFCE4
  if (!crb(c,0)) { goto L_800AFD14; } // 800AFCE8
  goto L_800AFD68; // 800AFCEC
L_800AFCF0:;
  cmps(c,0,(int32_t)c->r[0],6); // 800AFCF0
  if (!crb(c,0)) { goto L_800AFD68; } // 800AFCF4
  goto L_800AFD2C; // 800AFCF8
L_800AFCFC:;
  W32(c->r[13]+0xFFFF8CCCu,c->r[3]); // 800AFCFC
  c->r[3]=c->r[30]|c->r[30]; // 800AFD00
  c->r[4]=0u+0x00000000u; // 800AFD04
  c->lr=0x800AFD0Cu; f_800AF960(c); // 800AFD08
  c->r[31]=c->r[3]|c->r[3]; // 800AFD0C
  goto L_800AFD6C; // 800AFD10
L_800AFD14:;
  W32(c->r[13]+0xFFFF8CC8u,c->r[3]); // 800AFD14
  c->r[3]=c->r[30]|c->r[30]; // 800AFD18
  c->r[4]=0u+0x00000001u; // 800AFD1C
  c->lr=0x800AFD24u; f_800AF960(c); // 800AFD20
  c->r[31]=c->r[3]|c->r[3]; // 800AFD24
  goto L_800AFD6C; // 800AFD28
L_800AFD2C:;
  W32(c->r[13]+0xFFFF8CCCu,c->r[3]); // 800AFD2C
  c->r[3]=c->r[30]|c->r[30]; // 800AFD30
  c->r[4]=0u+0x00000000u; // 800AFD34
  c->lr=0x800AFD3Cu; f_800AF960(c); // 800AFD38
  cmps(c,0,(int32_t)c->r[3],0); // 800AFD3C
  c->r[31]=c->r[3]|c->r[3]; // 800AFD40
  if (crb(c,2)) { goto L_800AFD6C; } // 800AFD44
  c->r[0]=R32(c->r[13]+0xFFFF8CCCu); // 800AFD48
  c->r[4]=0u+0x00000001u; // 800AFD4C
  c->r[5]=c->r[0]+c->r[3]; // 800AFD50
  c->r[3]=c->r[30]|c->r[30]; // 800AFD54
  W32(c->r[13]+0xFFFF8CC8u,c->r[5]); // 800AFD58
  c->lr=0x800AFD60u; f_800AF960(c); // 800AFD5C
  c->r[31]=c->r[31]+c->r[3]; // 800AFD60
  goto L_800AFD6C; // 800AFD64
L_800AFD68:;
  c->r[31]=0u+0x00000000u; // 800AFD68
L_800AFD6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800AFD6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFD70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AFD74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFD78
  c->lr=c->r[0]; // 800AFD7C
  c->r[1]=c->r[1]+0x00000010u; // 800AFD80
  return; // 800AFD84
}

// ParseStringS
void f_800AFD88(Ctx* __restrict c) {
  trace_call(0x800AFD88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFD88
  c->r[0]=c->lr; // 800AFD8C
  cmps(c,0,(int32_t)c->r[3],1); // 800AFD90
  c->r[7]=0u+0x00000000u; // 800AFD94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFD98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFD9C
  c->r[31]=c->r[6]|c->r[6]; // 800AFDA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AFDA4
  c->r[30]=c->r[4]|c->r[4]; // 800AFDA8
  if (crb(c,2)) { goto L_800AFDD8; } // 800AFDAC
  if (!crb(c,0)) { goto L_800AFE58; } // 800AFDB0
  cmps(c,0,(int32_t)c->r[3],0); // 800AFDB4
  if (!crb(c,0)) { goto L_800AFDC0; } // 800AFDB8
  goto L_800AFE58; // 800AFDBC
L_800AFDC0:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 800AFDC0
  c->r[6]=R32(c->r[13]+0xFFFF8CCCu); // 800AFDC4
  cmps(c,0,(int32_t)c->r[7],0); // 800AFDC8
  if (crb(c,2)) { goto L_800AFE58; } // 800AFDCC
  c->r[30]=c->r[4]+0x00000001u; // 800AFDD0
  goto L_800AFE58; // 800AFDD4
L_800AFDD8:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 800AFDD8
  c->r[6]=R32(c->r[13]+0xFFFF8CC8u); // 800AFDDC
  cmps(c,0,(int32_t)c->r[7],0); // 800AFDE0
  if (crb(c,2)) { goto L_800AFE58; } // 800AFDE4
  cmpu(c,0,c->r[7],0x00000081u); // 800AFDE8
  c->r[30]=c->r[4]+0x00000001u; // 800AFDEC
  c->r[0]=0u+0x00000000u; // 800AFDF0
  if (crb(c,0)) { goto L_800AFE00; } // 800AFDF4
  cmpu(c,0,c->r[7],0x0000009Fu); // 800AFDF8
  if (!crb(c,1)) { goto L_800AFE10; } // 800AFDFC
L_800AFE00:;
  cmpu(c,0,c->r[7],0x000000E0u); // 800AFE00
  if (crb(c,0)) { goto L_800AFE14; } // 800AFE04
  cmpu(c,0,c->r[7],0x000000FCu); // 800AFE08
  if (crb(c,1)) { goto L_800AFE14; } // 800AFE0C
L_800AFE10:;
  c->r[0]=0u+0x00000001u; // 800AFE10
L_800AFE14:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AFE14
  if (crb(c,2)) { goto L_800AFE58; } // 800AFE18
  c->r[4]=R8(c->r[30]+0x00000000u); // 800AFE1C
  c->r[0]=0u+0x00000000u; // 800AFE20
  cmpu(c,0,c->r[4],0x00000040u); // 800AFE24
  if (crb(c,0)) { goto L_800AFE40; } // 800AFE28
  cmpu(c,0,c->r[4],0x000000FCu); // 800AFE2C
  if (crb(c,1)) { goto L_800AFE40; } // 800AFE30
  cmpu(c,0,c->r[4],0x0000007Fu); // 800AFE34
  if (crb(c,2)) { goto L_800AFE40; } // 800AFE38
  c->r[0]=0u+0x00000001u; // 800AFE3C
L_800AFE40:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AFE40
  if (crb(c,2)) { goto L_800AFE58; } // 800AFE44
  c->r[0]=R8(c->r[30]+0x00000000u); // 800AFE48
  c->r[0]=(rotl(c->r[7],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 800AFE4C
  c->r[30]=c->r[30]+0x00000001u; // 800AFE50
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 800AFE54
L_800AFE58:;
  W32(c->r[5]+0x00000000u,c->r[6]); // 800AFE58
  c->r[4]=c->r[7]|c->r[7]; // 800AFE5C
  c->lr=0x800AFE64u; f_800AF5B4(c); // 800AFE60
  W32(c->r[31]+0x00000000u,c->r[3]); // 800AFE64
  c->r[3]=c->r[30]|c->r[30]; // 800AFE68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFE6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AFE70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFE74
  c->lr=c->r[0]; // 800AFE78
  c->r[1]=c->r[1]+0x00000010u; // 800AFE7C
  return; // 800AFE80
}

// ParseStringW
void f_800AFE84(Ctx* __restrict c) {
  trace_call(0x800AFE84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFE84
  c->r[0]=c->lr; // 800AFE88
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AFE8C
  c->r[11]=c->r[1]+0x00000030u; // 800AFE90
  c->lr=0x800AFE98u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AFE94
  c->r[30]=0u+0x00000000u; // 800AFE98
  cmps(c,0,(int32_t)c->r[3],3); // 800AFE9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AFEA0
  c->r[26]=c->r[3]|c->r[3]; // 800AFEA4
  c->r[27]=c->r[4]|c->r[4]; // 800AFEA8
  c->r[28]=c->r[5]|c->r[5]; // 800AFEAC
  c->r[29]=c->r[6]|c->r[6]; // 800AFEB0
  if (crb(c,2)) { goto L_800AFF80; } // 800AFEB4
  if (!crb(c,0)) { goto L_800AFED4; } // 800AFEB8
  cmps(c,0,(int32_t)c->r[3],1); // 800AFEBC
  if (crb(c,2)) { goto L_800AFEFC; } // 800AFEC0
  if (!crb(c,0)) { goto L_800AFFBC; } // 800AFEC4
  cmps(c,0,(int32_t)c->r[3],0); // 800AFEC8
  if (!crb(c,0)) { goto L_800AFEE4; } // 800AFECC
  goto L_800AFFBC; // 800AFED0
L_800AFED4:;
  cmps(c,0,(int32_t)c->r[3],5); // 800AFED4
  if (crb(c,2)) { goto L_800AFFA8; } // 800AFED8
  if (!crb(c,0)) { goto L_800AFFBC; } // 800AFEDC
  goto L_800AFF94; // 800AFEE0
L_800AFEE4:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 800AFEE4
  c->r[31]=R32(c->r[13]+0xFFFF8CCCu); // 800AFEE8
  cmps(c,0,(int32_t)c->r[30],0); // 800AFEEC
  if (crb(c,2)) { goto L_800AFFBC; } // 800AFEF0
  c->r[27]=c->r[4]+0x00000001u; // 800AFEF4
  goto L_800AFFBC; // 800AFEF8
L_800AFEFC:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 800AFEFC
  c->r[31]=R32(c->r[13]+0xFFFF8CC8u); // 800AFF00
  cmps(c,0,(int32_t)c->r[30],0); // 800AFF04
  if (crb(c,2)) { goto L_800AFFBC; } // 800AFF08
  cmpu(c,0,c->r[30],0x00000081u); // 800AFF0C
  c->r[27]=c->r[4]+0x00000001u; // 800AFF10
  c->r[0]=0u+0x00000000u; // 800AFF14
  if (crb(c,0)) { goto L_800AFF24; } // 800AFF18
  cmpu(c,0,c->r[30],0x0000009Fu); // 800AFF1C
  if (!crb(c,1)) { goto L_800AFF34; } // 800AFF20
L_800AFF24:;
  cmpu(c,0,c->r[30],0x000000E0u); // 800AFF24
  if (crb(c,0)) { goto L_800AFF38; } // 800AFF28
  cmpu(c,0,c->r[30],0x000000FCu); // 800AFF2C
  if (crb(c,1)) { goto L_800AFF38; } // 800AFF30
L_800AFF34:;
  c->r[0]=0u+0x00000001u; // 800AFF34
L_800AFF38:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AFF38
  if (crb(c,2)) { goto L_800AFFBC; } // 800AFF3C
  c->r[3]=R8(c->r[27]+0x00000000u); // 800AFF40
  c->r[0]=0u+0x00000000u; // 800AFF44
  cmpu(c,0,c->r[3],0x00000040u); // 800AFF48
  if (crb(c,0)) { goto L_800AFF64; } // 800AFF4C
  cmpu(c,0,c->r[3],0x000000FCu); // 800AFF50
  if (crb(c,1)) { goto L_800AFF64; } // 800AFF54
  cmpu(c,0,c->r[3],0x0000007Fu); // 800AFF58
  if (crb(c,2)) { goto L_800AFF64; } // 800AFF5C
  c->r[0]=0u+0x00000001u; // 800AFF60
L_800AFF64:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AFF64
  if (crb(c,2)) { goto L_800AFFBC; } // 800AFF68
  c->r[0]=R8(c->r[27]+0x00000000u); // 800AFF6C
  c->r[0]=(rotl(c->r[30],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 800AFF70
  c->r[27]=c->r[27]+0x00000001u; // 800AFF74
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 800AFF78
  goto L_800AFFBC; // 800AFF7C
L_800AFF80:;
  c->r[3]=c->r[27]|c->r[27]; // 800AFF80
  c->r[4]=c->r[1]+0x00000008u; // 800AFF84
  c->lr=0x800AFF8Cu; f_800B4D08(c); // 800AFF88
  c->r[27]=c->r[3]|c->r[3]; // 800AFF8C
  goto L_800AFFBC; // 800AFF90
L_800AFF94:;
  c->r[3]=c->r[27]|c->r[27]; // 800AFF94
  c->r[4]=c->r[1]+0x00000008u; // 800AFF98
  c->lr=0x800AFFA0u; f_800B4E18(c); // 800AFF9C
  c->r[27]=c->r[3]|c->r[3]; // 800AFFA0
  goto L_800AFFBC; // 800AFFA4
L_800AFFA8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800AFFA8
  cmps(c,0,(int32_t)c->r[0],0); // 800AFFAC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800AFFB0
  if (crb(c,2)) { goto L_800AFFBC; } // 800AFFB4
  c->r[27]=c->r[4]+0x00000004u; // 800AFFB8
L_800AFFBC:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800AFFBC
  cmps(c,0,(int32_t)c->r[3],0); // 800AFFC0
  if (crb(c,2)) { goto L_800B0010; } // 800AFFC4
  c->r[31]=R32(c->r[13]+0xFFFF8CCCu); // 800AFFC8
  c->r[26]=0u+0x00000000u; // 800AFFCC
  c->lr=0x800AFFD4u; f_800B4E88(c); // 800AFFD0
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[30]); // 800AFFD4
  if (crb(c,2)) { goto L_800AFFF4; } // 800AFFD8
  c->r[0]=R32(c->r[13]+0xFFFF8CC4u); // 800AFFDC
  cmps(c,0,(int32_t)c->r[0],0); // 800AFFE0
  if (crb(c,2)) { goto L_800B0010; } // 800AFFE4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800AFFE8
  cmpu(c,0,c->r[0],0x0000007Fu); // 800AFFEC
  if (crb(c,1)) { goto L_800B0010; } // 800AFFF0
L_800AFFF4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800AFFF4
  c->lr=0x800AFFFCu; f_800B4F00(c); // 800AFFF8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800AFFFC
  c->r[30]=c->r[3]|c->r[3]; // 800B0000
  if (crb(c,2)) { goto L_800B0010; } // 800B0004
  c->r[26]=0u+0x00000001u; // 800B0008
  c->r[31]=R32(c->r[13]+0xFFFF8CC8u); // 800B000C
L_800B0010:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 800B0010
  c->r[3]=c->r[26]|c->r[26]; // 800B0014
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 800B0018
  c->lr=0x800B0020u; f_800AF5B4(c); // 800B001C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800B0020
  c->r[11]=c->r[1]+0x00000030u; // 800B0024
  c->r[3]=c->r[27]|c->r[27]; // 800B0028
  c->lr=0x800B0030u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B002C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B0030
  c->lr=c->r[0]; // 800B0034
  c->r[1]=c->r[1]+0x00000030u; // 800B0038
  return; // 800B003C
}

// OSGetFontTexel
void f_800B0040(Ctx* __restrict c) {
  trace_call(0x800B0040u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0040
  c->r[0]=c->lr; // 800B0044
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B0048
  c->r[11]=c->r[1]+0x00000050u; // 800B004C
  c->lr=0x800B0054u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B0050
  c->r[0]=R16(c->r[13]+0xFFFF80F0u); // 800B0054
  c->r[29]=c->r[4]|c->r[4]; // 800B0058
  c->r[30]=c->r[5]|c->r[5]; // 800B005C
  c->r[17]=c->r[6]|c->r[6]; // 800B0060
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800B0064
  c->r[31]=c->r[7]|c->r[7]; // 800B0068
  if (crb(c,2)) { goto L_800B0074; } // 800B006C
  goto L_800B00B8; // 800B0070
L_800B0074:;
  c->r[4]=0u+0x80000000u; // 800B0074
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800B0078
  cmps(c,0,(int32_t)c->r[0],0); // 800B007C
  if (crb(c,2)) { goto L_800B008C; } // 800B0080
  if (crb(c,0)) { goto L_800B00A0; } // 800B0084
  goto L_800B00A0; // 800B0088
L_800B008C:;
  c->r[4]=0u+0xCC000000u; // 800B008C
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800B0090
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 800B0094
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800B0098
  goto L_800B00A8; // 800B009C
L_800B00A0:;
  c->r[0]=0u+0x00000000u; // 800B00A0
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800B00A4
L_800B00A8:;
  c->r[4]=0u+0x800B0000u; // 800B00A8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800B00AC
  c->r[4]=c->r[4]+0xFFFFFD88u; // 800B00B0
  W32(c->r[13]+0xFFFF8CC0u,c->r[4]); // 800B00B4
L_800B00B8:;
  c->r[12]=R32(c->r[13]+0xFFFF8CC0u); // 800B00B8
  c->r[4]=c->r[3]|c->r[3]; // 800B00BC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800B00C0
  c->r[5]=c->r[1]+0x0000000Cu; // 800B00C4
  c->r[6]=c->r[1]+0x00000008u; // 800B00C8
  c->ctr=c->r[12]; // 800B00CC
  if (true) { c->lr=0x800B00D4u; dispatch(c,c->ctr); } // 800B00D0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800B00D4
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 800B00D8
  c->r[0]=sraw(c,c->r[0],3); // 800B00DC
  c->r[11]=R32(c->r[1]+0x00000008u); // 800B00E0
  c->r[9]=R16(c->r[4]+0x0000001Au); // 800B00E4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800B00E8
  c->r[5]=R16(c->r[4]+0x0000001Cu); // 800B00EC
  c->r[8]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B00F0
  c->r[6]=R32(c->r[4]+0x00000024u); // 800B00F4
  c->r[23]=c->r[4]+0x0000002Cu; // 800B00F8
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[5]); // 800B00FC
  c->r[5]=R32(c->r[4]+0x00000014u); // 800B0100
  c->r[22]=c->r[4]+c->r[6]; // 800B0104
  c->r[7]=R16(c->r[4]+0x00000012u); // 800B0108
  c->r[6]=R16(c->r[4]+0x00000010u); // 800B010C
  c->r[24]=0u+0x00000000u; // 800B0110
  c->r[12]=divw((int32_t)c->r[11],(int32_t)c->r[10]); // 800B0114
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 800B0118
  c->r[11]=c->r[11]-c->r[0]; // 800B011C
  c->r[10]=divw((int32_t)c->r[11],(int32_t)c->r[9]); // 800B0120
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 800B0124
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 800B0128
  c->r[26]=c->r[11]-c->r[9]; // 800B012C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800B0130
  c->r[27]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 800B0134
  c->r[22]=c->r[22]+c->r[0]; // 800B0138
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[6]); // 800B013C
  goto L_800B028C; // 800B0140
L_800B0144:;
  c->r[7]=c->r[27]+c->r[24]; // 800B0144
  c->r[0]=rotl(c->r[24],29)&0xE0000000u; // 800B0148
  c->r[5]=sraw(c,c->r[7],3); // 800B014C
  c->r[4]=rotl(c->r[24],1)&0x00000001u; // 800B0150
  c->r[9]=addc(c,c->r[5],0,c->xer_ca); // 800B0154
  c->r[6]=rotl(c->r[7],29)&0xE0000000u; // 800B0158
  c->r[5]=sraw(c,c->r[24],3); // 800B015C
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 800B0160
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 800B0164
  c->r[0]=c->r[0]-c->r[4]; // 800B0168
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[8]); // 800B016C
  c->r[6]=c->r[6]-c->r[7]; // 800B0170
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800B0174
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800B0178
  c->r[0]=c->r[0]+c->r[4]; // 800B017C
  c->r[4]=c->r[6]+c->r[7]; // 800B0180
  c->r[10]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800B0184
  c->r[11]=c->r[29]+c->r[5]; // 800B0188
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800B018C
  c->r[25]=0u+0x00000000u; // 800B0190
  goto L_800B0278; // 800B0194
L_800B0198:;
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 800B0198
  c->r[28]=c->r[30]+c->r[25]; // 800B019C
  c->r[5]=c->r[26]+c->r[25]; // 800B01A0
  c->r[0]=0u+0x000000F0u; // 800B01A4
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFE0u; // 800B01A8
  c->r[4]=rotl(c->r[4],3)&0x00000001u; // 800B01AC
  c->r[4]=c->r[4]+c->r[6]; // 800B01B0
  c->r[20]=rotl(c->r[28],29)&0xE0000000u; // 800B01B4
  c->r[7]=sraw(c,c->r[4],1); // 800B01B8
  c->r[19]=rotl(c->r[28],1)&0x00000001u; // 800B01BC
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[9]); // 800B01C0
  c->r[6]=rotl(c->r[5],29)&0xE0000000u; // 800B01C4
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 800B01C8
  c->r[18]=sraw(c,c->r[5],3); // 800B01CC
  c->r[6]=c->r[6]-c->r[4]; // 800B01D0
  c->r[21]=rotl(c->r[28],0)&0x00000001u; // 800B01D4
  c->r[17]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800B01D8
  c->r[6]=addc(c,c->r[18],0,c->xer_ca); // 800B01DC
  c->r[17]=c->r[17]+c->r[4]; // 800B01E0
  c->r[20]=c->r[20]-c->r[19]; // 800B01E4
  c->r[21]=c->r[21]^c->r[19]; // 800B01E8
  c->r[5]=rotl(c->r[5],30)&0xC0000000u; // 800B01EC
  c->r[18]=sraw(c,c->r[17],2); // 800B01F0
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFFFu; // 800B01F4
  c->r[17]=c->r[5]-c->r[4]; // 800B01F8
  c->r[21]=c->r[21]-c->r[19]; cr0(c,c->r[21]); // 800B01FC
  c->r[5]=addc(c,c->r[18],0,c->xer_ca); // 800B0200
  c->r[20]=c->r[20]+c->r[19]; // 800B0204
  c->r[18]=sraw(c,c->r[28],3); // 800B0208
  c->r[17]=rotl(c->r[17],2)&0xFFFFFFFFu; // 800B020C
  c->r[7]=c->r[22]+c->r[7]; // 800B0210
  c->r[6]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800B0214
  c->r[7]=c->r[7]+c->r[6]; // 800B0218
  c->r[19]=addc(c,c->r[18],0,c->xer_ca); // 800B021C
  c->r[7]=c->r[7]+c->r[10]; // 800B0220
  c->r[21]=rotl(c->r[20],1)&0x00000001u; // 800B0224
  c->r[28]=c->r[17]+c->r[4]; // 800B0228
  c->r[6]=rotl(c->r[19],5)&0xFFFFFFE0u; // 800B022C
  c->r[4]=c->r[21]+c->r[20]; // 800B0230
  c->r[7]=R8(c->r[7]+c->r[5]); // 800B0234
  c->r[6]=c->r[11]+c->r[6]; // 800B0238
  c->r[21]=rotl(c->r[28],1)&0xFFFFFFFEu; // 800B023C
  c->r[4]=sraw(c,c->r[4],1); // 800B0240
  c->r[5]=addc(c,~c->r[21],0x00000006u,1); // 800B0244
  c->r[6]=c->r[6]+c->r[12]; // 800B0248
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); // 800B024C
  c->r[7]=R8(c->r[6]+c->r[4]); // 800B0250
  c->r[5]=rotl(c->r[5],0)&0x00000003u; // 800B0254
  c->r[5]=R8(c->r[23]+c->r[5]); // 800B0258
  if (crb(c,2)) { goto L_800B0264; } // 800B025C
  c->r[0]=0u+0x0000000Fu; // 800B0260
L_800B0264:;
  c->r[0]=c->r[5]&c->r[0]; // 800B0264
  c->r[25]=c->r[25]+0x00000001u; // 800B0268
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800B026C
  c->r[0]=c->r[7]|c->r[0]; // 800B0270
  W8(c->r[6]+c->r[4],c->r[0]); // 800B0274
L_800B0278:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800B0278
  c->r[0]=R16(c->r[4]+0x00000010u); // 800B027C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800B0280
  if (crb(c,0)) { IRQCHK(c); goto L_800B0198; } // 800B0284
  c->r[24]=c->r[24]+0x00000001u; // 800B0288
L_800B028C:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 800B028C
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800B0290
  if (crb(c,0)) { IRQCHK(c); goto L_800B0144; } // 800B0294
  cmps(c,0,(int32_t)c->r[31],0); // 800B0298
  if (crb(c,2)) { goto L_800B02B8; } // 800B029C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800B02A0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800B02A4
  c->r[0]=R16(c->r[5]+0x00000022u); // 800B02A8
  c->r[0]=c->r[5]+c->r[0]; // 800B02AC
  c->r[0]=R8(c->r[4]+c->r[0]); // 800B02B0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800B02B4
L_800B02B8:;
  c->r[11]=c->r[1]+0x00000050u; // 800B02B8
  c->lr=0x800B02C0u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B02BC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B02C0
  c->lr=c->r[0]; // 800B02C4
  c->r[1]=c->r[1]+0x00000050u; // 800B02C8
  return; // 800B02CC
}

// ExpandFontSheet
void f_800B02D0(Ctx* __restrict c) {
  trace_call(0x800B02D0u);
  c->r[0]=R16(c->r[3]+0x00000018u); // 800B02D0
  c->r[6]=c->r[3]+0x0000002Cu; // 800B02D4
  cmps(c,0,(int32_t)c->r[0],0); // 800B02D8
  if (!crb(c,2)) { goto L_800B0408; } // 800B02DC
  c->r[7]=R32(c->r[3]+0x00000028u); // 800B02E0
  c->r[0]=rotl(c->r[7],1)&0x00000001u; // 800B02E4
  c->r[0]=c->r[0]+c->r[7]; // 800B02E8
  c->r[7]=sraw(c,c->r[0],1); // 800B02EC
  c->r[8]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800B02F0
  c->r[7]=c->r[4]+c->r[8]; // 800B02F4
  c->r[9]=rotl(c->r[8],1)&0xFFFFFFFEu; // 800B02F8
  c->r[4]=c->r[8]+0x00000001u; // 800B02FC
  if (crb(c,0)) { goto L_800B0530; } // 800B0300
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 800B0304
  c->ctr=c->r[0]; // 800B0308
  if (crb(c,2)) { goto L_800B03B0; } // 800B030C
L_800B0310:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B0310
  c->r[10]=c->r[5]+c->r[9]; // 800B0314
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 800B0318
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 800B031C
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B0320
  c->r[8]=R8(c->r[6]+c->r[8]); // 800B0324
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800B0328
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800B032C
  W8(c->r[5]+c->r[9],c->r[0]); // 800B0330
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 800B0334
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B0338
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 800B033C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800B0340
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B0344
  c->r[8]=R8(c->r[6]+c->r[8]); // 800B0348
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800B034C
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800B0350
  W8(c->r[10]+0x00000001u,c->r[0]); // 800B0354
  c->r[10]=c->r[5]+c->r[9]; // 800B0358
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 800B035C
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 800B0360
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 800B0364
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B0368
  c->r[8]=R8(c->r[6]+c->r[8]); // 800B036C
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800B0370
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800B0374
  W8(c->r[5]+c->r[9],c->r[0]); // 800B0378
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 800B037C
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 800B0380
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 800B0384
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 800B0388
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800B038C
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B0390
  c->r[8]=R8(c->r[6]+c->r[8]); // 800B0394
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800B0398
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800B039C
  W8(c->r[10]+0x00000001u,c->r[0]); // 800B03A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B0310; } // 800B03A4
  c->r[4]=c->r[4]&0x00000001u; cr0(c,c->r[4]); // 800B03A8
  if (crb(c,2)) { goto L_800B0530; } // 800B03AC
L_800B03B0:;
  c->ctr=c->r[4]; // 800B03B0
L_800B03B4:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B03B4
  c->r[10]=c->r[5]+c->r[9]; // 800B03B8
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 800B03BC
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 800B03C0
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B03C4
  c->r[8]=R8(c->r[6]+c->r[8]); // 800B03C8
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800B03CC
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800B03D0
  W8(c->r[5]+c->r[9],c->r[0]); // 800B03D4
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 800B03D8
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B03DC
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800B03E0
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 800B03E4
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800B03E8
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B03EC
  c->r[8]=R8(c->r[6]+c->r[8]); // 800B03F0
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800B03F4
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800B03F8
  W8(c->r[10]+0x00000001u,c->r[0]); // 800B03FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B03B4; } // 800B0400
  goto L_800B0530; // 800B0404
L_800B0408:;
  cmpu(c,0,c->r[0],0x00000002u); // 800B0408
  if (!crb(c,2)) { goto L_800B0530; } // 800B040C
  c->r[0]=R32(c->r[3]+0x00000028u); // 800B0410
  c->r[0]=sraw(c,c->r[0],2); // 800B0414
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 800B0418
  c->r[9]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800B041C
  c->r[7]=c->r[4]+c->r[9]; // 800B0420
  c->r[8]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800B0424
  c->r[4]=c->r[9]+0x00000001u; // 800B0428
  if (crb(c,0)) { goto L_800B0530; } // 800B042C
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 800B0430
  c->ctr=c->r[0]; // 800B0434
  if (crb(c,2)) { goto L_800B04DC; } // 800B0438
L_800B043C:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B043C
  c->r[9]=c->r[5]+c->r[8]; // 800B0440
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 800B0444
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B0448
  W8(c->r[5]+c->r[8],c->r[0]); // 800B044C
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 800B0450
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B0454
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 800B0458
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B045C
  W8(c->r[9]+0x00000001u,c->r[0]); // 800B0460
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B0464
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 800B0468
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B046C
  W8(c->r[9]+0x00000002u,c->r[0]); // 800B0470
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B0474
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800B0478
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B047C
  W8(c->r[9]+0x00000003u,c->r[0]); // 800B0480
  c->r[9]=c->r[5]+c->r[8]; // 800B0484
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 800B0488
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 800B048C
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B0490
  W8(c->r[5]+c->r[8],c->r[0]); // 800B0494
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 800B0498
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 800B049C
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 800B04A0
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B04A4
  W8(c->r[9]+0x00000001u,c->r[0]); // 800B04A8
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 800B04AC
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 800B04B0
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B04B4
  W8(c->r[9]+0x00000002u,c->r[0]); // 800B04B8
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 800B04BC
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 800B04C0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800B04C4
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B04C8
  W8(c->r[9]+0x00000003u,c->r[0]); // 800B04CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B043C; } // 800B04D0
  c->r[4]=c->r[4]&0x00000001u; cr0(c,c->r[4]); // 800B04D4
  if (crb(c,2)) { goto L_800B0530; } // 800B04D8
L_800B04DC:;
  c->ctr=c->r[4]; // 800B04DC
L_800B04E0:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B04E0
  c->r[9]=c->r[5]+c->r[8]; // 800B04E4
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 800B04E8
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B04EC
  W8(c->r[5]+c->r[8],c->r[0]); // 800B04F0
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 800B04F4
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B04F8
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 800B04FC
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B0500
  W8(c->r[9]+0x00000001u,c->r[0]); // 800B0504
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B0508
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 800B050C
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B0510
  W8(c->r[9]+0x00000002u,c->r[0]); // 800B0514
  c->r[0]=R8(c->r[7]+0x00000000u); // 800B0518
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800B051C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800B0520
  c->r[0]=R8(c->r[6]+c->r[0]); // 800B0524
  W8(c->r[9]+0x00000003u,c->r[0]); // 800B0528
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B04E0; } // 800B052C
L_800B0530:;
  c->r[4]=R32(c->r[3]+0x00000028u); // 800B0530
  c->r[3]=c->r[5]|c->r[5]; // 800B0534
  f_800ABD5C(c); return; // 800B0538
}

// OSInitFont
void f_800B053C(Ctx* __restrict c) {
  trace_call(0x800B053Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B053C
  c->r[0]=c->lr; // 800B0540
  c->r[5]=c->r[3]|c->r[3]; // 800B0544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B054C
  c->r[0]=R16(c->r[13]+0xFFFF80F0u); // 800B0550
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800B0554
  if (crb(c,2)) { goto L_800B0560; } // 800B0558
  goto L_800B05A4; // 800B055C
L_800B0560:;
  c->r[4]=0u+0x80000000u; // 800B0560
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800B0564
  cmps(c,0,(int32_t)c->r[0],0); // 800B0568
  if (crb(c,2)) { goto L_800B0578; } // 800B056C
  if (crb(c,0)) { goto L_800B058C; } // 800B0570
  goto L_800B058C; // 800B0574
L_800B0578:;
  c->r[4]=0u+0xCC000000u; // 800B0578
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800B057C
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 800B0580
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800B0584
  goto L_800B0594; // 800B0588
L_800B058C:;
  c->r[0]=0u+0x00000000u; // 800B058C
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800B0590
L_800B0594:;
  c->r[4]=0u+0x800B0000u; // 800B0594
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800B0598
  c->r[4]=c->r[4]+0xFFFFFD88u; // 800B059C
  W32(c->r[13]+0xFFFF8CC0u,c->r[4]); // 800B05A0
L_800B05A4:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800B05A4
  cmps(c,0,(int32_t)c->r[0],2); // 800B05A8
  if (crb(c,2)) { goto L_800B0714; } // 800B05AC
  if (!crb(c,0)) { goto L_800B05C4; } // 800B05B0
  cmps(c,0,(int32_t)c->r[0],0); // 800B05B4
  if (crb(c,2)) { goto L_800B05D0; } // 800B05B8
  if (!crb(c,0)) { goto L_800B0620; } // 800B05BC
  goto L_800B0714; // 800B05C0
L_800B05C4:;
  cmps(c,0,(int32_t)c->r[0],6); // 800B05C4
  if (!crb(c,0)) { goto L_800B0714; } // 800B05C8
  goto L_800B0670; // 800B05CC
L_800B05D0:;
  W32(c->r[13]+0xFFFF8CCCu,c->r[3]); // 800B05D0
  c->r[3]=c->r[3]+0x00020000u; // 800B05D4
  c->r[4]=0u+0x00000000u; // 800B05D8
  c->r[3]=c->r[3]+0xFFFFD120u; // 800B05DC
  c->lr=0x800B05E4u; f_800AF960(c); // 800B05E0
  cmps(c,0,(int32_t)c->r[3],0); // 800B05E4
  if (!crb(c,2)) { goto L_800B05F4; } // 800B05E8
  c->r[3]=0u+0x00000000u; // 800B05EC
  goto L_800B0718; // 800B05F0
L_800B05F4:;
  c->r[5]=R32(c->r[13]+0xFFFF8CCCu); // 800B05F4
  c->r[3]=R32(c->r[5]+0x00000024u); // 800B05F8
  c->r[0]=c->r[3]+0x0000001Fu; // 800B05FC
  c->r[4]=c->r[5]+c->r[3]; // 800B0600
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800B0604
  W32(c->r[5]+0x00000024u,c->r[0]); // 800B0608
  c->r[3]=R32(c->r[13]+0xFFFF8CCCu); // 800B060C
  c->r[0]=R32(c->r[3]+0x00000024u); // 800B0610
  c->r[5]=c->r[3]+c->r[0]; // 800B0614
  c->lr=0x800B061Cu; f_800B02D0(c); // 800B0618
  goto L_800B0714; // 800B061C
L_800B0620:;
  W32(c->r[13]+0xFFFF8CC8u,c->r[3]); // 800B0620
  c->r[3]=c->r[3]+0x000D0000u; // 800B0624
  c->r[4]=0u+0x00000001u; // 800B0628
  c->r[3]=c->r[3]+0x00003F00u; // 800B062C
  c->lr=0x800B0634u; f_800AF960(c); // 800B0630
  cmps(c,0,(int32_t)c->r[3],0); // 800B0634
  if (!crb(c,2)) { goto L_800B0644; } // 800B0638
  c->r[3]=0u+0x00000000u; // 800B063C
  goto L_800B0718; // 800B0640
L_800B0644:;
  c->r[5]=R32(c->r[13]+0xFFFF8CC8u); // 800B0644
  c->r[3]=R32(c->r[5]+0x00000024u); // 800B0648
  c->r[0]=c->r[3]+0x0000001Fu; // 800B064C
  c->r[4]=c->r[5]+c->r[3]; // 800B0650
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800B0654
  W32(c->r[5]+0x00000024u,c->r[0]); // 800B0658
  c->r[3]=R32(c->r[13]+0xFFFF8CC8u); // 800B065C
  c->r[0]=R32(c->r[3]+0x00000024u); // 800B0660
  c->r[5]=c->r[3]+c->r[0]; // 800B0664
  c->lr=0x800B066Cu; f_800B02D0(c); // 800B0668
  goto L_800B0714; // 800B066C
L_800B0670:;
  c->r[31]=c->r[3]+0x000F0000u; // 800B0670
  W32(c->r[13]+0xFFFF8CCCu,c->r[3]); // 800B0674
  c->r[31]=c->r[31]+0x00004020u; // 800B0678
  c->r[4]=0u+0x00000000u; // 800B067C
  c->r[3]=c->r[31]|c->r[31]; // 800B0680
  c->lr=0x800B0688u; f_800AF960(c); // 800B0684
  cmps(c,0,(int32_t)c->r[3],0); // 800B0688
  if (!crb(c,2)) { goto L_800B0698; } // 800B068C
  c->r[3]=0u+0x00000000u; // 800B0690
  goto L_800B0718; // 800B0694
L_800B0698:;
  c->r[5]=R32(c->r[13]+0xFFFF8CCCu); // 800B0698
  c->r[3]=R32(c->r[5]+0x00000024u); // 800B069C
  c->r[0]=c->r[3]+0x0000001Fu; // 800B06A0
  c->r[4]=c->r[5]+c->r[3]; // 800B06A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800B06A8
  W32(c->r[5]+0x00000024u,c->r[0]); // 800B06AC
  c->r[3]=R32(c->r[13]+0xFFFF8CCCu); // 800B06B0
  c->r[0]=R32(c->r[3]+0x00000024u); // 800B06B4
  c->r[5]=c->r[3]+c->r[0]; // 800B06B8
  c->lr=0x800B06C0u; f_800B02D0(c); // 800B06BC
  c->r[5]=R32(c->r[13]+0xFFFF8CCCu); // 800B06C0
  c->r[3]=c->r[31]|c->r[31]; // 800B06C4
  c->r[4]=0u+0x00000001u; // 800B06C8
  c->r[5]=c->r[5]+0x00020000u; // 800B06CC
  c->r[5]=c->r[5]+0x00000120u; // 800B06D0
  W32(c->r[13]+0xFFFF8CC8u,c->r[5]); // 800B06D4
  c->lr=0x800B06DCu; f_800AF960(c); // 800B06D8
  cmps(c,0,(int32_t)c->r[3],0); // 800B06DC
  if (!crb(c,2)) { goto L_800B06EC; } // 800B06E0
  c->r[3]=0u+0x00000000u; // 800B06E4
  goto L_800B0718; // 800B06E8
L_800B06EC:;
  c->r[5]=R32(c->r[13]+0xFFFF8CC8u); // 800B06EC
  c->r[3]=R32(c->r[5]+0x00000024u); // 800B06F0
  c->r[0]=c->r[3]+0x0000001Fu; // 800B06F4
  c->r[4]=c->r[5]+c->r[3]; // 800B06F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800B06FC
  W32(c->r[5]+0x00000024u,c->r[0]); // 800B0700
  c->r[3]=R32(c->r[13]+0xFFFF8CC8u); // 800B0704
  c->r[0]=R32(c->r[3]+0x00000024u); // 800B0708
  c->r[5]=c->r[3]+c->r[0]; // 800B070C
  c->lr=0x800B0714u; f_800B02D0(c); // 800B0710
L_800B0714:;
  c->r[3]=0u+0x00000001u; // 800B0714
L_800B0718:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B071C
  c->lr=c->r[0]; // 800B0720
  c->r[1]=c->r[1]+0x00000010u; // 800B0724
  return; // 800B0728
}

// OSGetFontTexture
void f_800B072C(Ctx* __restrict c) {
  trace_call(0x800B072Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B072C
  c->r[0]=c->lr; // 800B0730
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0734
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0738
  c->r[31]=c->r[7]|c->r[7]; // 800B073C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B0740
  c->r[30]=c->r[6]|c->r[6]; // 800B0744
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B0748
  c->r[29]=c->r[5]|c->r[5]; // 800B074C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B0750
  c->r[28]=c->r[4]|c->r[4]; // 800B0754
  c->r[0]=R16(c->r[13]+0xFFFF80F0u); // 800B0758
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800B075C
  if (crb(c,2)) { goto L_800B0768; } // 800B0760
  goto L_800B07AC; // 800B0764
L_800B0768:;
  c->r[4]=0u+0x80000000u; // 800B0768
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800B076C
  cmps(c,0,(int32_t)c->r[0],0); // 800B0770
  if (crb(c,2)) { goto L_800B0780; } // 800B0774
  if (crb(c,0)) { goto L_800B0794; } // 800B0778
  goto L_800B0794; // 800B077C
L_800B0780:;
  c->r[4]=0u+0xCC000000u; // 800B0780
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 800B0784
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 800B0788
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800B078C
  goto L_800B079C; // 800B0790
L_800B0794:;
  c->r[0]=0u+0x00000000u; // 800B0794
  W16(c->r[13]+0xFFFF80F0u,c->r[0]); // 800B0798
L_800B079C:;
  c->r[4]=0u+0x800B0000u; // 800B079C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800B07A0
  c->r[4]=c->r[4]+0xFFFFFD88u; // 800B07A4
  W32(c->r[13]+0xFFFF8CC0u,c->r[4]); // 800B07A8
L_800B07AC:;
  c->r[12]=R32(c->r[13]+0xFFFF8CC0u); // 800B07AC
  c->r[4]=c->r[3]|c->r[3]; // 800B07B0
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800B07B4
  c->r[5]=c->r[1]+0x0000000Cu; // 800B07B8
  c->r[6]=c->r[1]+0x00000008u; // 800B07BC
  c->ctr=c->r[12]; // 800B07C0
  if (true) { c->lr=0x800B07C8u; dispatch(c,c->ctr); } // 800B07C4
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 800B07C8
  cmps(c,0,(int32_t)c->r[31],0); // 800B07CC
  c->r[6]=R32(c->r[1]+0x00000008u); // 800B07D0
  c->r[5]=R16(c->r[7]+0x0000001Au); // 800B07D4
  c->r[4]=R16(c->r[7]+0x0000001Cu); // 800B07D8
  c->r[0]=R32(c->r[7]+0x00000024u); // 800B07DC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 800B07E0
  c->r[4]=R32(c->r[7]+0x00000014u); // 800B07E4
  c->r[0]=c->r[7]+c->r[0]; // 800B07E8
  c->r[6]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 800B07EC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 800B07F0
  c->r[0]=c->r[4]+c->r[0]; // 800B07F4
  W32(c->r[28]+0x00000000u,c->r[0]); // 800B07F8
  c->r[8]=R32(c->r[1]+0x0000000Cu); // 800B07FC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800B0800
  c->r[7]=R16(c->r[8]+0x0000001Au); // 800B0804
  c->r[5]=R16(c->r[8]+0x0000001Cu); // 800B0808
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 800B080C
  c->r[0]=R16(c->r[8]+0x00000010u); // 800B0810
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 800B0814
  c->r[5]=c->r[4]-c->r[5]; // 800B0818
  c->r[6]=divw((int32_t)c->r[5],(int32_t)c->r[7]); // 800B081C
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 800B0820
  c->r[4]=c->r[5]-c->r[4]; // 800B0824
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800B0828
  W32(c->r[29]+0x00000000u,c->r[0]); // 800B082C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800B0830
  c->r[0]=R16(c->r[4]+0x00000012u); // 800B0834
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800B0838
  W32(c->r[30]+0x00000000u,c->r[0]); // 800B083C
  if (crb(c,2)) { goto L_800B085C; } // 800B0840
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800B0844
  c->r[4]=R32(c->r[1]+0x00000008u); // 800B0848
  c->r[0]=R16(c->r[5]+0x00000022u); // 800B084C
  c->r[0]=c->r[5]+c->r[0]; // 800B0850
  c->r[0]=R8(c->r[4]+c->r[0]); // 800B0854
  W32(c->r[31]+0x00000000u,c->r[0]); // 800B0858
L_800B085C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B085C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B0860
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B0864
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B0868
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B086C
  c->lr=c->r[0]; // 800B0870
  c->r[1]=c->r[1]+0x00000020u; // 800B0874
  return; // 800B0878
}

void hle_OSDisableInterrupts(Ctx*);
// OSDisableInterrupts
void f_800B087C(Ctx* __restrict c) {
  hle_OSDisableInterrupts(c);
}

void hle_OSEnableInterrupts(Ctx*);
// OSEnableInterrupts
void f_800B0890(Ctx* __restrict c) {
  hle_OSEnableInterrupts(c);
}

void hle_OSRestoreInterrupts(Ctx*);
// OSRestoreInterrupts
void f_800B08A4(Ctx* __restrict c) {
  hle_OSRestoreInterrupts(c);
}

// __OSSetInterruptHandler
void f_800B08C8(Ctx* __restrict c) {
  trace_call(0x800B08C8u);
  c->r[5]=R32(c->r[13]+0xFFFF8CE0u); // 800B08C8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B08CC
  c->r[3]=R32(c->r[5]+c->r[0]); // 800B08D0
  W32(c->r[5]+c->r[0],c->r[4]); // 800B08D4
  return; // 800B08D8
}

// __OSGetInterruptHandler
void f_800B08DC(Ctx* __restrict c) {
  trace_call(0x800B08DCu);
  c->r[4]=R32(c->r[13]+0xFFFF8CE0u); // 800B08DC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B08E0
  c->r[3]=R32(c->r[4]+c->r[0]); // 800B08E4
  return; // 800B08E8
}

// __OSInterruptInit
void f_800B08EC(Ctx* __restrict c) {
  trace_call(0x800B08ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B08EC
  c->r[0]=c->lr; // 800B08F0
  c->r[4]=0u+0x00000000u; // 800B08F4
  c->r[5]=0u+0x00000080u; // 800B08F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B08FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0900
  c->r[31]=0u+0x80000000u; // 800B0904
  c->r[3]=c->r[31]+0x00003040u; // 800B0908
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B090C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B0910
  W32(c->r[13]+0xFFFF8CE0u,c->r[3]); // 800B0914
  c->lr=0x800B091Cu; f_80004688(c); // 800B0918
  c->r[6]=0u+0x00000000u; // 800B091C
  c->r[5]=0u+0x000000F0u; // 800B0920
  W32(c->r[31]+0x000000C4u,c->r[6]); // 800B0924
  c->r[4]=0u+0xCC000000u; // 800B0928
  c->r[0]=0u+0x40000000u; // 800B092C
  c->r[3]=0u+0xCD000000u; // 800B0930
  W32(c->r[31]+0x000000C8u,c->r[6]); // 800B0934
  c->r[30]=0u+0xFFFFFFF0u; // 800B0938
  W32(c->r[4]+0x00003004u,c->r[5]); // 800B093C
  W32(c->r[3]+0x00000034u,c->r[0]); // 800B0940
  c->lr=0x800B0948u; f_800B087C(c); // 800B0944
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800B0948
  c->r[29]=c->r[3]|c->r[3]; // 800B094C
  c->r[4]=R32(c->r[31]+0x000000C8u); // 800B0950
  c->r[30]=c->r[30]|c->r[0]; // 800B0954
  c->r[0]=~(c->r[0]|c->r[4]); // 800B0958
  W32(c->r[31]+0x000000C4u,c->r[30]); // 800B095C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF0u; // 800B0960
  c->r[30]=c->r[30]|c->r[4]; // 800B0964
  goto L_800B0974; // 800B0968
L_800B096C:;
  c->r[4]=c->r[30]|c->r[30]; // 800B096C
  c->lr=0x800B0974u; f_800B09B0(c); // 800B0970
L_800B0974:;
  cmps(c,0,(int32_t)c->r[3],0); // 800B0974
  if (!crb(c,2)) { IRQCHK(c); goto L_800B096C; } // 800B0978
  c->r[3]=c->r[29]|c->r[29]; // 800B097C
  c->lr=0x800B0984u; f_800B08A4(c); // 800B0980
  c->r[4]=0u+0x800B0000u; // 800B0984
  c->r[3]=0u+0x00000004u; // 800B0988
  c->r[4]=c->r[4]+0x00000FB0u; // 800B098C
  c->lr=0x800B0994u; f_800AA9D8(c); // 800B0990
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0994
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B0998
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B099C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B09A0
  c->lr=c->r[0]; // 800B09A4
  c->r[1]=c->r[1]+0x00000020u; // 800B09A8
  return; // 800B09AC
}

// SetInterruptMask
void f_800B09B0(Ctx* __restrict c) {
  trace_call(0x800B09B0u);
  c->r[0]=cntlz(c->r[3]); // 800B09B0
  cmps(c,0,(int32_t)c->r[0],12); // 800B09B4
  if (!crb(c,0)) { goto L_800B09DC; } // 800B09B8
  cmps(c,0,(int32_t)c->r[0],8); // 800B09BC
  if (crb(c,2)) { goto L_800B0A8C; } // 800B09C0
  if (!crb(c,0)) { goto L_800B0AB8; } // 800B09C4
  cmps(c,0,(int32_t)c->r[0],5); // 800B09C8
  if (!crb(c,0)) { goto L_800B0A4C; } // 800B09CC
  cmps(c,0,(int32_t)c->r[0],0); // 800B09D0
  if (!crb(c,0)) { goto L_800B09FC; } // 800B09D4
  return; // 800B09D8
L_800B09DC:;
  cmps(c,0,(int32_t)c->r[0],17); // 800B09DC
  if (!crb(c,0)) { goto L_800B09F0; } // 800B09E0
  cmps(c,0,(int32_t)c->r[0],15); // 800B09E4
  if (!crb(c,0)) { goto L_800B0B40; } // 800B09E8
  goto L_800B0AFC; // 800B09EC
L_800B09F0:;
  cmps(c,0,(int32_t)c->r[0],28); // 800B09F0
  if (!crb(c,0)) return; // 800B09F4
  goto L_800B0B74; // 800B09F8
L_800B09FC:;
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 800B09FC
  c->r[5]=0u+0x00000000u; // 800B0A00
  if (!crb(c,2)) { goto L_800B0A0C; } // 800B0A04
  c->r[5]=c->r[5]|0x00000001u; // 800B0A08
L_800B0A0C:;
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 800B0A0C
  if (!crb(c,2)) { goto L_800B0A18; } // 800B0A10
  c->r[5]=c->r[5]|0x00000002u; // 800B0A14
L_800B0A18:;
  c->r[0]=rotl(c->r[4],0)&0x20000000u; cr0(c,c->r[0]); // 800B0A18
  if (!crb(c,2)) { goto L_800B0A24; } // 800B0A1C
  c->r[5]=c->r[5]|0x00000004u; // 800B0A20
L_800B0A24:;
  c->r[0]=rotl(c->r[4],0)&0x10000000u; cr0(c,c->r[0]); // 800B0A24
  if (!crb(c,2)) { goto L_800B0A30; } // 800B0A28
  c->r[5]=c->r[5]|0x00000008u; // 800B0A2C
L_800B0A30:;
  c->r[0]=rotl(c->r[4],0)&0x08000000u; cr0(c,c->r[0]); // 800B0A30
  if (!crb(c,2)) { goto L_800B0A3C; } // 800B0A34
  c->r[5]=c->r[5]|0x00000010u; // 800B0A38
L_800B0A3C:;
  c->r[4]=0u+0xCC000000u; // 800B0A3C
  c->r[3]=rotl(c->r[3],0)&0x07FFFFFFu; // 800B0A40
  W16(c->r[4]+0x0000401Cu,c->r[5]); // 800B0A44
  return; // 800B0A48
L_800B0A4C:;
  c->r[5]=0u+0xCC000000u; // 800B0A4C
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 800B0A50
  c->r[5]=R16(c->r[5]+0x0000500Au); // 800B0A54
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE07u; // 800B0A58
  if (!crb(c,2)) { goto L_800B0A64; } // 800B0A5C
  c->r[5]=c->r[5]|0x00000010u; // 800B0A60
L_800B0A64:;
  c->r[0]=rotl(c->r[4],0)&0x02000000u; cr0(c,c->r[0]); // 800B0A64
  if (!crb(c,2)) { goto L_800B0A70; } // 800B0A68
  c->r[5]=c->r[5]|0x00000040u; // 800B0A6C
L_800B0A70:;
  c->r[0]=rotl(c->r[4],0)&0x01000000u; cr0(c,c->r[0]); // 800B0A70
  if (!crb(c,2)) { goto L_800B0A7C; } // 800B0A74
  c->r[5]=c->r[5]|0x00000100u; // 800B0A78
L_800B0A7C:;
  c->r[4]=0u+0xCC000000u; // 800B0A7C
  c->r[3]=rotl(c->r[3],0)&0xF8FFFFFFu; // 800B0A80
  W16(c->r[4]+0x0000500Au,c->r[5]); // 800B0A84
  return; // 800B0A88
L_800B0A8C:;
  c->r[0]=rotl(c->r[4],0)&0x00800000u; cr0(c,c->r[0]); // 800B0A8C
  c->r[4]=0u+0xCD000000u; // 800B0A90
  c->r[5]=R32(c->r[4]+0x00006C00u); // 800B0A94
  c->r[0]=0u+0xFFFFFFD3u; // 800B0A98
  c->r[5]=c->r[5]&c->r[0]; // 800B0A9C
  if (!crb(c,2)) { goto L_800B0AA8; } // 800B0AA0
  c->r[5]=c->r[5]|0x00000004u; // 800B0AA4
L_800B0AA8:;
  c->r[4]=0u+0xCD000000u; // 800B0AA8
  c->r[3]=rotl(c->r[3],0)&0xFF7FFFFFu; // 800B0AAC
  W32(c->r[4]+0x00006C00u,c->r[5]); // 800B0AB0
  return; // 800B0AB4
L_800B0AB8:;
  c->r[0]=rotl(c->r[4],0)&0x00400000u; cr0(c,c->r[0]); // 800B0AB8
  c->r[5]=0u+0xCD000000u; // 800B0ABC
  c->r[5]=R32(c->r[5]+0x00006800u); // 800B0AC0
  c->r[0]=0u+0xFFFFD3F0u; // 800B0AC4
  c->r[5]=c->r[5]&c->r[0]; // 800B0AC8
  if (!crb(c,2)) { goto L_800B0AD4; } // 800B0ACC
  c->r[5]=c->r[5]|0x00000001u; // 800B0AD0
L_800B0AD4:;
  c->r[0]=rotl(c->r[4],0)&0x00200000u; cr0(c,c->r[0]); // 800B0AD4
  if (!crb(c,2)) { goto L_800B0AE0; } // 800B0AD8
  c->r[5]=c->r[5]|0x00000004u; // 800B0ADC
L_800B0AE0:;
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 800B0AE0
  if (!crb(c,2)) { goto L_800B0AEC; } // 800B0AE4
  c->r[5]=c->r[5]|0x00000400u; // 800B0AE8
L_800B0AEC:;
  c->r[4]=0u+0xCD000000u; // 800B0AEC
  c->r[3]=rotl(c->r[3],0)&0xFF8FFFFFu; // 800B0AF0
  W32(c->r[4]+0x00006800u,c->r[5]); // 800B0AF4
  return; // 800B0AF8
L_800B0AFC:;
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 800B0AFC
  c->r[5]=0u+0xCD000000u; // 800B0B00
  c->r[5]=R32(c->r[5]+0x00006814u); // 800B0B04
  c->r[0]=0u+0xFFFFF3F0u; // 800B0B08
  c->r[5]=c->r[5]&c->r[0]; // 800B0B0C
  if (!crb(c,2)) { goto L_800B0B18; } // 800B0B10
  c->r[5]=c->r[5]|0x00000001u; // 800B0B14
L_800B0B18:;
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 800B0B18
  if (!crb(c,2)) { goto L_800B0B24; } // 800B0B1C
  c->r[5]=c->r[5]|0x00000004u; // 800B0B20
L_800B0B24:;
  c->r[0]=rotl(c->r[4],0)&0x00020000u; cr0(c,c->r[0]); // 800B0B24
  if (!crb(c,2)) { goto L_800B0B30; } // 800B0B28
  c->r[5]=c->r[5]|0x00000400u; // 800B0B2C
L_800B0B30:;
  c->r[4]=0u+0xCD000000u; // 800B0B30
  c->r[3]=rotl(c->r[3],0)&0xFFF1FFFFu; // 800B0B34
  W32(c->r[4]+0x00006814u,c->r[5]); // 800B0B38
  return; // 800B0B3C
L_800B0B40:;
  c->r[5]=0u+0xCD000000u; // 800B0B40
  c->r[0]=rotl(c->r[4],0)&0x00010000u; cr0(c,c->r[0]); // 800B0B44
  c->r[5]=R32(c->r[5]+0x00006828u); // 800B0B48
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFF0u; // 800B0B4C
  if (!crb(c,2)) { goto L_800B0B58; } // 800B0B50
  c->r[5]=c->r[5]|0x00000001u; // 800B0B54
L_800B0B58:;
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 800B0B58
  if (!crb(c,2)) { goto L_800B0B64; } // 800B0B5C
  c->r[5]=c->r[5]|0x00000004u; // 800B0B60
L_800B0B64:;
  c->r[4]=0u+0xCD000000u; // 800B0B64
  c->r[3]=rotl(c->r[3],0)&0xFFFE7FFFu; // 800B0B68
  W32(c->r[4]+0x00006828u,c->r[5]); // 800B0B6C
  return; // 800B0B70
L_800B0B74:;
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 800B0B74
  c->r[5]=0u+0x000000F0u; // 800B0B78
  if (!crb(c,2)) { goto L_800B0B84; } // 800B0B7C
  c->r[5]=c->r[5]|0x00000800u; // 800B0B80
L_800B0B84:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 800B0B84
  if (!crb(c,2)) { goto L_800B0B90; } // 800B0B88
  c->r[5]=c->r[5]|0x00000008u; // 800B0B8C
L_800B0B90:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 800B0B90
  if (!crb(c,2)) { goto L_800B0B9C; } // 800B0B94
  c->r[5]=c->r[5]|0x00000004u; // 800B0B98
L_800B0B9C:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 800B0B9C
  if (!crb(c,2)) { goto L_800B0BA8; } // 800B0BA0
  c->r[5]=c->r[5]|0x00000002u; // 800B0BA4
L_800B0BA8:;
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 800B0BA8
  if (!crb(c,2)) { goto L_800B0BB4; } // 800B0BAC
  c->r[5]=c->r[5]|0x00000001u; // 800B0BB0
L_800B0BB4:;
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 800B0BB4
  if (!crb(c,2)) { goto L_800B0BC0; } // 800B0BB8
  c->r[5]=c->r[5]|0x00000100u; // 800B0BBC
L_800B0BC0:;
  c->r[0]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[0]); // 800B0BC0
  if (!crb(c,2)) { goto L_800B0BCC; } // 800B0BC4
  c->r[5]=c->r[5]|0x00001000u; // 800B0BC8
L_800B0BCC:;
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 800B0BCC
  if (!crb(c,2)) { goto L_800B0BD8; } // 800B0BD0
  c->r[5]=c->r[5]|0x00000200u; // 800B0BD4
L_800B0BD8:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 800B0BD8
  if (!crb(c,2)) { goto L_800B0BE4; } // 800B0BDC
  c->r[5]=c->r[5]|0x00000400u; // 800B0BE0
L_800B0BE4:;
  c->r[0]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[0]); // 800B0BE4
  if (!crb(c,2)) { goto L_800B0BF0; } // 800B0BE8
  c->r[5]=c->r[5]|0x00002000u; // 800B0BEC
L_800B0BF0:;
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 800B0BF0
  if (!crb(c,2)) { goto L_800B0BFC; } // 800B0BF4
  c->r[5]=c->r[5]|0x00004000u; // 800B0BF8
L_800B0BFC:;
  c->r[4]=0u+0xCC000000u; // 800B0BFC
  c->r[3]=rotl(c->r[3],0)&0xFFFF800Fu; // 800B0C00
  W32(c->r[4]+0x00003004u,c->r[5]); // 800B0C04
  return; // 800B0C08
}

// __OSMaskInterrupts
void f_800B0C0C(Ctx* __restrict c) {
  trace_call(0x800B0C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0C0C
  c->r[0]=c->lr; // 800B0C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0C14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0C18
  c->r[31]=c->r[3]|c->r[3]; // 800B0C1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B0C20
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B0C24
  c->lr=0x800B0C2Cu; f_800B087C(c); // 800B0C28
  c->r[4]=0u+0x80000000u; // 800B0C2C
  c->r[30]=c->r[3]|c->r[3]; // 800B0C30
  c->r[29]=R32(c->r[4]+0x000000C4u); // 800B0C34
  c->r[5]=R32(c->r[4]+0x000000C8u); // 800B0C38
  c->r[0]=c->r[29]|c->r[5]; // 800B0C3C
  c->r[3]=c->r[31]&~c->r[0]; // 800B0C40
  c->r[31]=c->r[31]|c->r[29]; // 800B0C44
  W32(c->r[4]+0x000000C4u,c->r[31]); // 800B0C48
  c->r[31]=c->r[31]|c->r[5]; // 800B0C4C
  goto L_800B0C5C; // 800B0C50
L_800B0C54:;
  c->r[4]=c->r[31]|c->r[31]; // 800B0C54
  c->lr=0x800B0C5Cu; f_800B09B0(c); // 800B0C58
L_800B0C5C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800B0C5C
  if (!crb(c,2)) { IRQCHK(c); goto L_800B0C54; } // 800B0C60
  c->r[3]=c->r[30]|c->r[30]; // 800B0C64
  c->lr=0x800B0C6Cu; f_800B08A4(c); // 800B0C68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B0C6C
  c->r[3]=c->r[29]|c->r[29]; // 800B0C70
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B0C74
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B0C78
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0C7C
  c->lr=c->r[0]; // 800B0C80
  c->r[1]=c->r[1]+0x00000020u; // 800B0C84
  return; // 800B0C88
}

// __OSUnmaskInterrupts
void f_800B0C8C(Ctx* __restrict c) {
  trace_call(0x800B0C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0C8C
  c->r[0]=c->lr; // 800B0C90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0C94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0C98
  c->r[31]=c->r[3]|c->r[3]; // 800B0C9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B0CA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B0CA4
  c->lr=0x800B0CACu; f_800B087C(c); // 800B0CA8
  c->r[4]=0u+0x80000000u; // 800B0CAC
  c->r[30]=c->r[3]|c->r[3]; // 800B0CB0
  c->r[29]=R32(c->r[4]+0x000000C4u); // 800B0CB4
  c->r[5]=R32(c->r[4]+0x000000C8u); // 800B0CB8
  c->r[0]=c->r[29]|c->r[5]; // 800B0CBC
  c->r[3]=c->r[31]&c->r[0]; // 800B0CC0
  c->r[31]=c->r[29]&~c->r[31]; // 800B0CC4
  W32(c->r[4]+0x000000C4u,c->r[31]); // 800B0CC8
  c->r[31]=c->r[31]|c->r[5]; // 800B0CCC
  goto L_800B0CDC; // 800B0CD0
L_800B0CD4:;
  c->r[4]=c->r[31]|c->r[31]; // 800B0CD4
  c->lr=0x800B0CDCu; f_800B09B0(c); // 800B0CD8
L_800B0CDC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800B0CDC
  if (!crb(c,2)) { IRQCHK(c); goto L_800B0CD4; } // 800B0CE0
  c->r[3]=c->r[30]|c->r[30]; // 800B0CE4
  c->lr=0x800B0CECu; f_800B08A4(c); // 800B0CE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B0CEC
  c->r[3]=c->r[29]|c->r[29]; // 800B0CF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B0CF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B0CF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0CFC
  c->lr=c->r[0]; // 800B0D00
  c->r[1]=c->r[1]+0x00000020u; // 800B0D04
  return; // 800B0D08
}

// __OSDispatchInterrupt
void f_800B0D0C(Ctx* __restrict c) {
  trace_call(0x800B0D0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0D0C
  c->r[0]=c->lr; // 800B0D10
  c->r[3]=0u+0xCC000000u; // 800B0D14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0D18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B0D1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B0D20
  c->r[30]=c->r[4]|c->r[4]; // 800B0D24
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B0D28
  c->r[31]=R32(c->r[3]+0x00003000u); // 800B0D2C
  c->r[0]=R32(c->r[3]+0x00003004u); // 800B0D30
  c->r[31]=rotl(c->r[31],0)&0xFFFEFFFFu; cr0(c,c->r[31]); // 800B0D34
  if (crb(c,2)) { goto L_800B0D44; } // 800B0D38
  c->r[0]=c->r[31]&c->r[0]; cr0(c,c->r[0]); // 800B0D3C
  if (!crb(c,2)) { goto L_800B0D4C; } // 800B0D40
L_800B0D44:;
  c->r[3]=c->r[30]|c->r[30]; // 800B0D44
  c->lr=0x800B0D4Cu; f_800AC658(c); // 800B0D48
L_800B0D4C:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 800B0D4C
  c->r[0]=0u+0x00000000u; // 800B0D50
  if (crb(c,2)) { goto L_800B0D9C; } // 800B0D54
  c->r[3]=0u+0xCC000000u; // 800B0D58
  c->r[4]=R16(c->r[3]+0x0000401Eu); // 800B0D5C
  c->r[3]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[3]); // 800B0D60
  if (crb(c,2)) { goto L_800B0D6C; } // 800B0D64
  c->r[0]=c->r[0]|0x80000000u; // 800B0D68
L_800B0D6C:;
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 800B0D6C
  if (crb(c,2)) { goto L_800B0D78; } // 800B0D70
  c->r[0]=c->r[0]|0x40000000u; // 800B0D74
L_800B0D78:;
  c->r[3]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[3]); // 800B0D78
  if (crb(c,2)) { goto L_800B0D84; } // 800B0D7C
  c->r[0]=c->r[0]|0x20000000u; // 800B0D80
L_800B0D84:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800B0D84
  if (crb(c,2)) { goto L_800B0D90; } // 800B0D88
  c->r[0]=c->r[0]|0x10000000u; // 800B0D8C
L_800B0D90:;
  c->r[3]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[3]); // 800B0D90
  if (crb(c,2)) { goto L_800B0D9C; } // 800B0D94
  c->r[0]=c->r[0]|0x08000000u; // 800B0D98
L_800B0D9C:;
  c->r[3]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[3]); // 800B0D9C
  if (crb(c,2)) { goto L_800B0DD0; } // 800B0DA0
  c->r[3]=0u+0xCC000000u; // 800B0DA4
  c->r[4]=R16(c->r[3]+0x0000500Au); // 800B0DA8
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800B0DAC
  if (crb(c,2)) { goto L_800B0DB8; } // 800B0DB0
  c->r[0]=c->r[0]|0x04000000u; // 800B0DB4
L_800B0DB8:;
  c->r[3]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[3]); // 800B0DB8
  if (crb(c,2)) { goto L_800B0DC4; } // 800B0DBC
  c->r[0]=c->r[0]|0x02000000u; // 800B0DC0
L_800B0DC4:;
  c->r[3]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[3]); // 800B0DC4
  if (crb(c,2)) { goto L_800B0DD0; } // 800B0DC8
  c->r[0]=c->r[0]|0x01000000u; // 800B0DCC
L_800B0DD0:;
  c->r[3]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[3]); // 800B0DD0
  if (crb(c,2)) { goto L_800B0DEC; } // 800B0DD4
  c->r[3]=0u+0xCD000000u; // 800B0DD8
  c->r[3]=R32(c->r[3]+0x00006C00u); // 800B0DDC
  c->r[3]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[3]); // 800B0DE0
  if (crb(c,2)) { goto L_800B0DEC; } // 800B0DE4
  c->r[0]=c->r[0]|0x00800000u; // 800B0DE8
L_800B0DEC:;
  c->r[3]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[3]); // 800B0DEC
  if (crb(c,2)) { goto L_800B0E6C; } // 800B0DF0
  c->r[3]=0u+0xCD000000u; // 800B0DF4
  c->r[4]=R32(c->r[3]+0x00006800u); // 800B0DF8
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 800B0DFC
  if (crb(c,2)) { goto L_800B0E08; } // 800B0E00
  c->r[0]=c->r[0]|0x00400000u; // 800B0E04
L_800B0E08:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800B0E08
  if (crb(c,2)) { goto L_800B0E14; } // 800B0E0C
  c->r[0]=c->r[0]|0x00200000u; // 800B0E10
L_800B0E14:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 800B0E14
  if (crb(c,2)) { goto L_800B0E20; } // 800B0E18
  c->r[0]=c->r[0]|0x00100000u; // 800B0E1C
L_800B0E20:;
  c->r[3]=0u+0xCD000000u; // 800B0E20
  c->r[4]=R32(c->r[3]+0x00006814u); // 800B0E24
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 800B0E28
  if (crb(c,2)) { goto L_800B0E34; } // 800B0E2C
  c->r[0]=c->r[0]|0x00080000u; // 800B0E30
L_800B0E34:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800B0E34
  if (crb(c,2)) { goto L_800B0E40; } // 800B0E38
  c->r[0]=c->r[0]|0x00040000u; // 800B0E3C
L_800B0E40:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 800B0E40
  if (crb(c,2)) { goto L_800B0E4C; } // 800B0E44
  c->r[0]=c->r[0]|0x00020000u; // 800B0E48
L_800B0E4C:;
  c->r[3]=0u+0xCD000000u; // 800B0E4C
  c->r[4]=R32(c->r[3]+0x00006828u); // 800B0E50
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 800B0E54
  if (crb(c,2)) { goto L_800B0E60; } // 800B0E58
  c->r[0]=c->r[0]|0x00010000u; // 800B0E5C
L_800B0E60:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 800B0E60
  if (crb(c,2)) { goto L_800B0E6C; } // 800B0E64
  c->r[0]=c->r[0]|0x00008000u; // 800B0E68
L_800B0E6C:;
  c->r[3]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[3]); // 800B0E6C
  if (crb(c,2)) { goto L_800B0E78; } // 800B0E70
  c->r[0]=c->r[0]|0x00000020u; // 800B0E74
L_800B0E78:;
  c->r[3]=rotl(c->r[31],0)&0x00001000u; cr0(c,c->r[3]); // 800B0E78
  if (crb(c,2)) { goto L_800B0E84; } // 800B0E7C
  c->r[0]=c->r[0]|0x00000040u; // 800B0E80
L_800B0E84:;
  c->r[3]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[3]); // 800B0E84
  if (crb(c,2)) { goto L_800B0E90; } // 800B0E88
  c->r[0]=c->r[0]|0x00001000u; // 800B0E8C
L_800B0E90:;
  c->r[3]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[3]); // 800B0E90
  if (crb(c,2)) { goto L_800B0E9C; } // 800B0E94
  c->r[0]=c->r[0]|0x00002000u; // 800B0E98
L_800B0E9C:;
  c->r[3]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[3]); // 800B0E9C
  if (crb(c,2)) { goto L_800B0EA8; } // 800B0EA0
  c->r[0]=c->r[0]|0x00000080u; // 800B0EA4
L_800B0EA8:;
  c->r[3]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[3]); // 800B0EA8
  if (crb(c,2)) { goto L_800B0EB4; } // 800B0EAC
  c->r[0]=c->r[0]|0x00000800u; // 800B0EB0
L_800B0EB4:;
  c->r[3]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[3]); // 800B0EB4
  if (crb(c,2)) { goto L_800B0EC0; } // 800B0EB8
  c->r[0]=c->r[0]|0x00000400u; // 800B0EBC
L_800B0EC0:;
  c->r[3]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[3]); // 800B0EC0
  if (crb(c,2)) { goto L_800B0ECC; } // 800B0EC4
  c->r[0]=c->r[0]|0x00000200u; // 800B0EC8
L_800B0ECC:;
  c->r[3]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[3]); // 800B0ECC
  if (crb(c,2)) { goto L_800B0ED8; } // 800B0ED0
  c->r[0]=c->r[0]|0x00004000u; // 800B0ED4
L_800B0ED8:;
  c->r[3]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[3]); // 800B0ED8
  if (crb(c,2)) { goto L_800B0EE4; } // 800B0EDC
  c->r[0]=c->r[0]|0x00000100u; // 800B0EE0
L_800B0EE4:;
  c->r[3]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[3]); // 800B0EE4
  if (crb(c,2)) { goto L_800B0EF0; } // 800B0EE8
  c->r[0]=c->r[0]|0x00000010u; // 800B0EEC
L_800B0EF0:;
  c->r[3]=0u+0x80000000u; // 800B0EF0
  c->r[4]=R32(c->r[3]+0x000000C4u); // 800B0EF4
  c->r[3]=R32(c->r[3]+0x000000C8u); // 800B0EF8
  c->r[3]=c->r[4]|c->r[3]; // 800B0EFC
  c->r[3]=c->r[0]&~c->r[3]; cr0(c,c->r[3]); // 800B0F00
  if (crb(c,2)) { goto L_800B0F8C; } // 800B0F04
  c->r[4]=0u+0x80260000u; // 800B0F08
  c->r[4]=c->r[4]+0x00007528u; // 800B0F0C
L_800B0F10:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800B0F10
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800B0F14
  if (crb(c,2)) { goto L_800B0F28; } // 800B0F18
  c->r[0]=cntlz(c->r[0]); // 800B0F1C
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800B0F20
  goto L_800B0F30; // 800B0F24
L_800B0F28:;
  c->r[4]=c->r[4]+0x00000004u; // 800B0F28
  IRQCHK(c); goto L_800B0F10; // 800B0F2C
L_800B0F30:;
  c->r[3]=R32(c->r[13]+0xFFFF8CE0u); // 800B0F30
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800B0F34
  c->r[31]=R32(c->r[3]+c->r[0]); // 800B0F38
  cmps(c,0,(int32_t)c->r[31],0); // 800B0F3C
  if (crb(c,2)) { goto L_800B0F8C; } // 800B0F40
  cmps(c,0,(int32_t)c->r[29],4); // 800B0F44
  if (!crb(c,1)) { goto L_800B0F64; } // 800B0F48
  W16(c->r[13]+0xFFFF8CD4u,c->r[29]); // 800B0F4C
  c->lr=0x800B0F54u; f_800B48F4(c); // 800B0F50
  W32(c->r[13]+0xFFFF8CDCu,c->r[4]); // 800B0F54
  W32(c->r[13]+0xFFFF8CD8u,c->r[3]); // 800B0F58
  c->r[0]=R32(c->r[30]+0x00000198u); // 800B0F5C
  W32(c->r[13]+0xFFFF8CD0u,c->r[0]); // 800B0F60
L_800B0F64:;
  c->lr=0x800B0F68u; f_800B35B4(c); // 800B0F64
  c->r[12]=c->r[31]|c->r[31]; // 800B0F68
  c->r[3]=c->r[29]|c->r[29]; // 800B0F6C
  c->r[4]=c->r[30]|c->r[30]; // 800B0F70
  c->ctr=c->r[12]; // 800B0F74
  if (true) { c->lr=0x800B0F7Cu; dispatch(c,c->ctr); } // 800B0F78
  c->lr=0x800B0F80u; f_800B35F0(c); // 800B0F7C
  c->lr=0x800B0F84u; f_800B3AFC(c); // 800B0F80
  c->r[3]=c->r[30]|c->r[30]; // 800B0F84
  c->lr=0x800B0F8Cu; f_800AC658(c); // 800B0F88
L_800B0F8C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B0F8C
  c->lr=0x800B0F94u; f_800AC658(c); // 800B0F90
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0F94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B0F98
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B0F9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B0FA0
  c->lr=c->r[0]; // 800B0FA4
  c->r[1]=c->r[1]+0x00000020u; // 800B0FA8
  return; // 800B0FAC
}

// ExternalInterruptHandler
void f_800B0FB0(Ctx* __restrict c) {
  trace_call(0x800B0FB0u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 800B0FB0
  W32(c->r[4]+0x00000004u,c->r[1]); // 800B0FB4
  W32(c->r[4]+0x00000008u,c->r[2]); // 800B0FB8
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B0FBC
  c->r[0]=mfspr(c,913); // 800B0FC0
  W32(c->r[4]+0x000001A8u,c->r[0]); // 800B0FC4
  c->r[0]=mfspr(c,914); // 800B0FC8
  W32(c->r[4]+0x000001ACu,c->r[0]); // 800B0FCC
  c->r[0]=mfspr(c,915); // 800B0FD0
  W32(c->r[4]+0x000001B0u,c->r[0]); // 800B0FD4
  c->r[0]=mfspr(c,916); // 800B0FD8
  W32(c->r[4]+0x000001B4u,c->r[0]); // 800B0FDC
  c->r[0]=mfspr(c,917); // 800B0FE0
  W32(c->r[4]+0x000001B8u,c->r[0]); // 800B0FE4
  c->r[0]=mfspr(c,918); // 800B0FE8
  W32(c->r[4]+0x000001BCu,c->r[0]); // 800B0FEC
  c->r[0]=mfspr(c,919); // 800B0FF0
  W32(c->r[4]+0x000001C0u,c->r[0]); // 800B0FF4
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0FF8
  f_800B0D0C(c); return; // 800B0FFC
}

// __OSModuleInit
void f_800B1000(Ctx* __restrict c) {
  trace_call(0x800B1000u);
  c->r[0]=0u+0x00000000u; // 800B1000
  c->r[3]=0u+0x80000000u; // 800B1004
  W32(c->r[3]+0x000030CCu,c->r[0]); // 800B1008
  W32(c->r[3]+0x000030C8u,c->r[0]); // 800B100C
  W32(c->r[3]+0x000030D0u,c->r[0]); // 800B1010
  return; // 800B1014
}

// OSInitMessageQueue
void f_800B1018(Ctx* __restrict c) {
  trace_call(0x800B1018u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1018
  c->r[0]=c->lr; // 800B101C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1020
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B1024
  c->r[31]=c->r[5]|c->r[5]; // 800B1028
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B102C
  c->r[30]=c->r[4]|c->r[4]; // 800B1030
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B1034
  c->r[29]=c->r[3]|c->r[3]; // 800B1038
  c->lr=0x800B1040u; f_800B356C(c); // 800B103C
  c->r[3]=c->r[29]+0x00000008u; // 800B1040
  c->lr=0x800B1048u; f_800B356C(c); // 800B1044
  c->r[0]=0u+0x00000000u; // 800B1048
  W32(c->r[29]+0x00000010u,c->r[30]); // 800B104C
  W32(c->r[29]+0x00000014u,c->r[31]); // 800B1050
  W32(c->r[29]+0x00000018u,c->r[0]); // 800B1054
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800B1058
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B105C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B1060
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B1064
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1068
  c->lr=c->r[0]; // 800B106C
  c->r[1]=c->r[1]+0x00000020u; // 800B1070
  return; // 800B1074
}

// OSSendMessage
void f_800B1078(Ctx* __restrict c) {
  trace_call(0x800B1078u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1078
  c->r[0]=c->lr; // 800B107C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1080
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B1084
  c->r[31]=c->r[5]|c->r[5]; // 800B1088
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B108C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B1090
  c->r[29]=c->r[4]|c->r[4]; // 800B1094
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B1098
  c->r[28]=c->r[3]|c->r[3]; // 800B109C
  c->lr=0x800B10A4u; f_800B087C(c); // 800B10A0
  c->r[30]=c->r[3]|c->r[3]; // 800B10A4
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 800B10A8
  goto L_800B10D0; // 800B10AC
L_800B10B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B10B0
  if (!crb(c,2)) { goto L_800B10C8; } // 800B10B4
  c->r[3]=c->r[30]|c->r[30]; // 800B10B8
  c->lr=0x800B10C0u; f_800B08A4(c); // 800B10BC
  c->r[3]=0u+0x00000000u; // 800B10C0
  goto L_800B1120; // 800B10C4
L_800B10C8:;
  c->r[3]=c->r[28]|c->r[28]; // 800B10C8
  c->lr=0x800B10D0u; f_800B45EC(c); // 800B10CC
L_800B10D0:;
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800B10D0
  c->r[6]=R32(c->r[28]+0x00000014u); // 800B10D4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 800B10D8
  if (!crb(c,1)) { IRQCHK(c); goto L_800B10B0; } // 800B10DC
  c->r[0]=R32(c->r[28]+0x00000018u); // 800B10E0
  c->r[3]=c->r[28]+0x00000008u; // 800B10E4
  c->r[5]=R32(c->r[28]+0x00000010u); // 800B10E8
  c->r[4]=c->r[0]+c->r[4]; // 800B10EC
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 800B10F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800B10F4
  c->r[0]=c->r[4]-c->r[0]; // 800B10F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800B10FC
  W32(c->r[5]+c->r[0],c->r[29]); // 800B1100
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800B1104
  c->r[0]=c->r[4]+0x00000001u; // 800B1108
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800B110C
  c->lr=0x800B1114u; f_800B46D8(c); // 800B1110
  c->r[3]=c->r[30]|c->r[30]; // 800B1114
  c->lr=0x800B111Cu; f_800B08A4(c); // 800B1118
  c->r[3]=0u+0x00000001u; // 800B111C
L_800B1120:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1120
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B1124
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B1128
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B112C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B1130
  c->lr=c->r[0]; // 800B1134
  c->r[1]=c->r[1]+0x00000020u; // 800B1138
  return; // 800B113C
}

// OSReceiveMessage
void f_800B1140(Ctx* __restrict c) {
  trace_call(0x800B1140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1140
  c->r[0]=c->lr; // 800B1144
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1148
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B114C
  c->r[31]=c->r[3]|c->r[3]; // 800B1150
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B1154
  c->r[30]=c->r[5]|c->r[5]; // 800B1158
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B115C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B1160
  c->r[28]=c->r[4]|c->r[4]; // 800B1164
  c->lr=0x800B116Cu; f_800B087C(c); // 800B1168
  c->r[29]=c->r[3]|c->r[3]; // 800B116C
  c->r[30]=rotl(c->r[30],0)&0x00000001u; // 800B1170
  goto L_800B1198; // 800B1174
L_800B1178:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B1178
  if (!crb(c,2)) { goto L_800B1190; } // 800B117C
  c->r[3]=c->r[29]|c->r[29]; // 800B1180
  c->lr=0x800B1188u; f_800B08A4(c); // 800B1184
  c->r[3]=0u+0x00000000u; // 800B1188
  goto L_800B11FC; // 800B118C
L_800B1190:;
  c->r[3]=c->r[31]+0x00000008u; // 800B1190
  c->lr=0x800B1198u; f_800B45EC(c); // 800B1194
L_800B1198:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800B1198
  cmps(c,0,(int32_t)c->r[0],0); // 800B119C
  if (crb(c,2)) { IRQCHK(c); goto L_800B1178; } // 800B11A0
  cmps(c,0,(int32_t)c->r[28],0); // 800B11A4
  if (crb(c,2)) { goto L_800B11C0; } // 800B11A8
  c->r[0]=R32(c->r[31]+0x00000018u); // 800B11AC
  c->r[3]=R32(c->r[31]+0x00000010u); // 800B11B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800B11B4
  c->r[0]=R32(c->r[3]+c->r[0]); // 800B11B8
  W32(c->r[28]+0x00000000u,c->r[0]); // 800B11BC
L_800B11C0:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 800B11C0
  c->r[3]=c->r[31]|c->r[31]; // 800B11C4
  c->r[6]=R32(c->r[31]+0x00000014u); // 800B11C8
  c->r[7]=c->r[4]+0x00000001u; // 800B11CC
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800B11D0
  c->r[5]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 800B11D4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800B11D8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800B11DC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800B11E0
  c->r[0]=c->r[7]-c->r[0]; // 800B11E4
  W32(c->r[31]+0x00000018u,c->r[0]); // 800B11E8
  c->lr=0x800B11F0u; f_800B46D8(c); // 800B11EC
  c->r[3]=c->r[29]|c->r[29]; // 800B11F0
  c->lr=0x800B11F8u; f_800B08A4(c); // 800B11F4
  c->r[3]=0u+0x00000001u; // 800B11F8
L_800B11FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B11FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B1200
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B1204
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B1208
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B120C
  c->lr=c->r[0]; // 800B1210
  c->r[1]=c->r[1]+0x00000020u; // 800B1214
  return; // 800B1218
}

// OSJamMessage
void f_800B121C(Ctx* __restrict c) {
  trace_call(0x800B121Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B121C
  c->r[0]=c->lr; // 800B1220
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1224
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B1228
  c->r[31]=c->r[5]|c->r[5]; // 800B122C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B1230
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B1234
  c->r[29]=c->r[4]|c->r[4]; // 800B1238
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B123C
  c->r[28]=c->r[3]|c->r[3]; // 800B1240
  c->lr=0x800B1248u; f_800B087C(c); // 800B1244
  c->r[30]=c->r[3]|c->r[3]; // 800B1248
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 800B124C
  goto L_800B1274; // 800B1250
L_800B1254:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B1254
  if (!crb(c,2)) { goto L_800B126C; } // 800B1258
  c->r[3]=c->r[30]|c->r[30]; // 800B125C
  c->lr=0x800B1264u; f_800B08A4(c); // 800B1260
  c->r[3]=0u+0x00000000u; // 800B1264
  goto L_800B12CC; // 800B1268
L_800B126C:;
  c->r[3]=c->r[28]|c->r[28]; // 800B126C
  c->lr=0x800B1274u; f_800B45EC(c); // 800B1270
L_800B1274:;
  c->r[6]=R32(c->r[28]+0x00000014u); // 800B1274
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 800B1278
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800B127C
  if (!crb(c,1)) { IRQCHK(c); goto L_800B1254; } // 800B1280
  c->r[0]=R32(c->r[28]+0x00000018u); // 800B1284
  c->r[3]=c->r[28]+0x00000008u; // 800B1288
  c->r[4]=R32(c->r[28]+0x00000010u); // 800B128C
  c->r[5]=c->r[6]+c->r[0]; // 800B1290
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800B1294
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 800B1298
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800B129C
  c->r[0]=c->r[5]-c->r[0]; // 800B12A0
  W32(c->r[28]+0x00000018u,c->r[0]); // 800B12A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800B12A8
  W32(c->r[4]+c->r[0],c->r[29]); // 800B12AC
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800B12B0
  c->r[0]=c->r[4]+0x00000001u; // 800B12B4
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800B12B8
  c->lr=0x800B12C0u; f_800B46D8(c); // 800B12BC
  c->r[3]=c->r[30]|c->r[30]; // 800B12C0
  c->lr=0x800B12C8u; f_800B08A4(c); // 800B12C4
  c->r[3]=0u+0x00000001u; // 800B12C8
L_800B12CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B12CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B12D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B12D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B12D8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B12DC
  c->lr=c->r[0]; // 800B12E0
  c->r[1]=c->r[1]+0x00000020u; // 800B12E4
  return; // 800B12E8
}

// OSGetPhysicalMem2Size
void f_800B12EC(Ctx* __restrict c) {
  trace_call(0x800B12ECu);
  c->r[3]=0u+0x80000000u; // 800B12EC
  c->r[3]=R32(c->r[3]+0x00003118u); // 800B12F0
  return; // 800B12F4
}

// OSGetConsoleSimulatedMem1Size
void f_800B12F8(Ctx* __restrict c) {
  trace_call(0x800B12F8u);
  c->r[3]=0u+0x80000000u; // 800B12F8
  c->r[3]=R32(c->r[3]+0x00003104u); // 800B12FC
  return; // 800B1300
}

// OSGetConsoleSimulatedMem2Size
void f_800B1304(Ctx* __restrict c) {
  trace_call(0x800B1304u);
  c->r[3]=0u+0x80000000u; // 800B1304
  c->r[3]=R32(c->r[3]+0x0000311Cu); // 800B1308
  return; // 800B130C
}

// OnShutdown
void f_800B1310(Ctx* __restrict c) {
  trace_call(0x800B1310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1310
  c->r[0]=c->lr; // 800B1314
  cmps(c,0,(int32_t)c->r[3],0); // 800B1318
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B131C
  if (crb(c,2)) { goto L_800B1338; } // 800B1320
  c->r[0]=0u+0x000000FFu; // 800B1324
  c->r[3]=0u+0xCC000000u; // 800B1328
  W16(c->r[3]+0x00004010u,c->r[0]); // 800B132C
  c->r[3]=0u+0xF0000000u; // 800B1330
  c->lr=0x800B1338u; f_800B0C0C(c); // 800B1334
L_800B1338:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1338
  c->r[3]=0u+0x00000001u; // 800B133C
  c->lr=c->r[0]; // 800B1340
  c->r[1]=c->r[1]+0x00000010u; // 800B1344
  return; // 800B1348
}

// MEMIntrruptHandler
void f_800B134C(Ctx* __restrict c) {
  trace_call(0x800B134Cu);
  c->r[8]=0u+0xCC000000u; // 800B134C
  c->r[3]=0u+0x802B0000u; // 800B1350
  c->r[5]=R16(c->r[8]+0x0000401Eu); // 800B1354
  c->r[0]=0u+0x00000000u; // 800B1358
  c->r[7]=R16(c->r[8]+0x00004024u); // 800B135C
  c->r[3]=c->r[3]+0x000039F0u; // 800B1360
  c->r[6]=R16(c->r[8]+0x00004022u); // 800B1364
  c->r[6]=(rotl(c->r[7],16)&0x03FF0000u)|(c->r[6]&~0x03FF0000u); // 800B1368
  W16(c->r[8]+0x00004020u,c->r[0]); // 800B136C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 800B1370
  cmps(c,0,(int32_t)c->r[12],0); // 800B1374
  if (crb(c,2)) { goto L_800B138C; } // 800B1378
  c->r[3]=0u+0x0000000Fu; // 800B137C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B1380
  c->ctr=c->r[12]; // 800B1384
  if (true) { dispatch(c,c->ctr); return; } // 800B1388
L_800B138C:;
  c->r[3]=0u+0x0000000Fu; // 800B138C
  f_800ACFE8(c); return; // 800B1390
}

// ConfigMEM1_24MB
void f_800B1394(Ctx* __restrict c) {
  trace_call(0x800B1394u);
  c->r[7]=0u+0x00000000u; // 800B1394
  c->r[4]=0u+0x00000000u; // 800B1398
  c->r[4]=c->r[4]+0x00000002u; // 800B139C
  c->r[3]=0u+0x80000000u; // 800B13A0
  c->r[3]=c->r[3]+0x000001FFu; // 800B13A4
  c->r[6]=0u+0x01000000u; // 800B13A8
  c->r[6]=c->r[6]+0x00000002u; // 800B13AC
  c->r[5]=0u+0x81000000u; // 800B13B0
  c->r[5]=c->r[5]+0x000000FFu; // 800B13B4
  /* isync */ // 800B13B8
  mtspr(c,536,c->r[7]); // 800B13BC
  mtspr(c,537,c->r[4]); // 800B13C0
  mtspr(c,536,c->r[3]); // 800B13C4
  /* isync */ // 800B13C8
  mtspr(c,528,c->r[7]); // 800B13CC
  mtspr(c,529,c->r[4]); // 800B13D0
  mtspr(c,528,c->r[3]); // 800B13D4
  /* isync */ // 800B13D8
  mtspr(c,540,c->r[7]); // 800B13DC
  mtspr(c,541,c->r[6]); // 800B13E0
  mtspr(c,540,c->r[5]); // 800B13E4
  /* isync */ // 800B13E8
  mtspr(c,532,c->r[7]); // 800B13EC
  mtspr(c,533,c->r[6]); // 800B13F0
  mtspr(c,532,c->r[5]); // 800B13F4
  /* isync */ // 800B13F8
  c->r[3]=c->msr; // 800B13FC
  c->r[3]=c->r[3]|0x00000030u; // 800B1400
  mtspr(c,27,c->r[3]); // 800B1404
  c->r[3]=c->lr; // 800B1408
  mtspr(c,26,c->r[3]); // 800B140C
  return; /* rfi */ // 800B1410
}

// ConfigMEM2_52MB
void f_800B1414(Ctx* __restrict c) {
  trace_call(0x800B1414u);
  c->r[7]=0u+0x00000000u; // 800B1414
  c->r[4]=0u+0x10000000u; // 800B1418
  c->r[4]=c->r[4]+0x00000002u; // 800B141C
  c->r[3]=0u+0x90000000u; // 800B1420
  c->r[3]=c->r[3]+0x000003FFu; // 800B1424
  c->r[6]=0u+0x10000000u; // 800B1428
  c->r[6]=c->r[6]+0x0000002Au; // 800B142C
  c->r[5]=0u+0xD0000000u; // 800B1430
  c->r[5]=c->r[5]+0x000007FFu; // 800B1434
  /* isync */ // 800B1438
  mtspr(c,568,c->r[7]); // 800B143C
  mtspr(c,569,c->r[4]); // 800B1440
  mtspr(c,568,c->r[3]); // 800B1444
  /* isync */ // 800B1448
  mtspr(c,560,c->r[7]); // 800B144C
  mtspr(c,561,c->r[7]); // 800B1450
  /* isync */ // 800B1454
  mtspr(c,570,c->r[7]); // 800B1458
  mtspr(c,571,c->r[6]); // 800B145C
  mtspr(c,570,c->r[5]); // 800B1460
  /* isync */ // 800B1464
  mtspr(c,562,c->r[7]); // 800B1468
  mtspr(c,563,c->r[7]); // 800B146C
  /* isync */ // 800B1470
  c->r[4]=0u+0x12000000u; // 800B1474
  c->r[4]=c->r[4]+0x00000002u; // 800B1478
  c->r[3]=0u+0x92000000u; // 800B147C
  c->r[3]=c->r[3]+0x000001FFu; // 800B1480
  c->r[6]=0u+0x13000000u; // 800B1484
  c->r[6]=c->r[6]+0x00000002u; // 800B1488
  c->r[5]=0u+0x93000000u; // 800B148C
  c->r[5]=c->r[5]+0x0000007Fu; // 800B1490
  /* isync */ // 800B1494
  mtspr(c,572,c->r[7]); // 800B1498
  mtspr(c,573,c->r[4]); // 800B149C
  mtspr(c,572,c->r[3]); // 800B14A0
  /* isync */ // 800B14A4
  mtspr(c,564,c->r[7]); // 800B14A8
  mtspr(c,565,c->r[7]); // 800B14AC
  /* isync */ // 800B14B0
  mtspr(c,574,c->r[7]); // 800B14B4
  mtspr(c,575,c->r[6]); // 800B14B8
  mtspr(c,574,c->r[5]); // 800B14BC
  /* isync */ // 800B14C0
  mtspr(c,566,c->r[7]); // 800B14C4
  mtspr(c,567,c->r[7]); // 800B14C8
  /* isync */ // 800B14CC
  c->r[3]=c->msr; // 800B14D0
  c->r[3]=c->r[3]|0x00000030u; // 800B14D4
  mtspr(c,27,c->r[3]); // 800B14D8
  c->r[3]=c->lr; // 800B14DC
  mtspr(c,26,c->r[3]); // 800B14E0
  return; /* rfi */ // 800B14E4
}

// ConfigMEM2_56MB
void f_800B14E8(Ctx* __restrict c) {
  trace_call(0x800B14E8u);
  c->r[7]=0u+0x00000000u; // 800B14E8
  c->r[4]=0u+0x10000000u; // 800B14EC
  c->r[4]=c->r[4]+0x00000002u; // 800B14F0
  c->r[3]=0u+0x90000000u; // 800B14F4
  c->r[3]=c->r[3]+0x000003FFu; // 800B14F8
  c->r[6]=0u+0x10000000u; // 800B14FC
  c->r[6]=c->r[6]+0x0000002Au; // 800B1500
  c->r[5]=0u+0xD0000000u; // 800B1504
  c->r[5]=c->r[5]+0x000007FFu; // 800B1508
  /* isync */ // 800B150C
  mtspr(c,568,c->r[7]); // 800B1510
  mtspr(c,569,c->r[4]); // 800B1514
  mtspr(c,568,c->r[3]); // 800B1518
  /* isync */ // 800B151C
  mtspr(c,560,c->r[7]); // 800B1520
  mtspr(c,561,c->r[7]); // 800B1524
  /* isync */ // 800B1528
  mtspr(c,570,c->r[7]); // 800B152C
  mtspr(c,571,c->r[6]); // 800B1530
  mtspr(c,570,c->r[5]); // 800B1534
  /* isync */ // 800B1538
  mtspr(c,562,c->r[7]); // 800B153C
  mtspr(c,563,c->r[7]); // 800B1540
  /* isync */ // 800B1544
  c->r[4]=0u+0x12000000u; // 800B1548
  c->r[4]=c->r[4]+0x00000002u; // 800B154C
  c->r[3]=0u+0x92000000u; // 800B1550
  c->r[3]=c->r[3]+0x000001FFu; // 800B1554
  c->r[6]=0u+0x13000000u; // 800B1558
  c->r[6]=c->r[6]+0x00000002u; // 800B155C
  c->r[5]=0u+0x93000000u; // 800B1560
  c->r[5]=c->r[5]+0x000000FFu; // 800B1564
  /* isync */ // 800B1568
  mtspr(c,572,c->r[7]); // 800B156C
  mtspr(c,573,c->r[4]); // 800B1570
  mtspr(c,572,c->r[3]); // 800B1574
  /* isync */ // 800B1578
  mtspr(c,564,c->r[7]); // 800B157C
  mtspr(c,565,c->r[7]); // 800B1580
  /* isync */ // 800B1584
  mtspr(c,574,c->r[7]); // 800B1588
  mtspr(c,575,c->r[6]); // 800B158C
  mtspr(c,574,c->r[5]); // 800B1590
  /* isync */ // 800B1594
  mtspr(c,566,c->r[7]); // 800B1598
  mtspr(c,567,c->r[7]); // 800B159C
  /* isync */ // 800B15A0
  c->r[3]=c->msr; // 800B15A4
  c->r[3]=c->r[3]|0x00000030u; // 800B15A8
  mtspr(c,27,c->r[3]); // 800B15AC
  c->r[3]=c->lr; // 800B15B0
  mtspr(c,26,c->r[3]); // 800B15B4
  return; /* rfi */ // 800B15B8
}

// ConfigMEM2_64MB
void f_800B15BC(Ctx* __restrict c) {
  trace_call(0x800B15BCu);
  c->r[7]=0u+0x00000000u; // 800B15BC
  c->r[4]=0u+0x10000000u; // 800B15C0
  c->r[4]=c->r[4]+0x00000002u; // 800B15C4
  c->r[3]=0u+0x90000000u; // 800B15C8
  c->r[3]=c->r[3]+0x000007FFu; // 800B15CC
  c->r[6]=0u+0x10000000u; // 800B15D0
  c->r[6]=c->r[6]+0x0000002Au; // 800B15D4
  c->r[5]=0u+0xD0000000u; // 800B15D8
  c->r[5]=c->r[5]+0x000007FFu; // 800B15DC
  /* isync */ // 800B15E0
  mtspr(c,568,c->r[7]); // 800B15E4
  mtspr(c,569,c->r[4]); // 800B15E8
  mtspr(c,568,c->r[3]); // 800B15EC
  /* isync */ // 800B15F0
  mtspr(c,560,c->r[7]); // 800B15F4
  mtspr(c,561,c->r[7]); // 800B15F8
  /* isync */ // 800B15FC
  mtspr(c,570,c->r[7]); // 800B1600
  mtspr(c,571,c->r[6]); // 800B1604
  mtspr(c,570,c->r[5]); // 800B1608
  /* isync */ // 800B160C
  mtspr(c,562,c->r[7]); // 800B1610
  mtspr(c,563,c->r[7]); // 800B1614
  /* isync */ // 800B1618
  mtspr(c,564,c->r[7]); // 800B161C
  mtspr(c,565,c->r[7]); // 800B1620
  /* isync */ // 800B1624
  mtspr(c,566,c->r[7]); // 800B1628
  mtspr(c,567,c->r[7]); // 800B162C
  /* isync */ // 800B1630
  mtspr(c,572,c->r[7]); // 800B1634
  mtspr(c,573,c->r[7]); // 800B1638
  /* isync */ // 800B163C
  mtspr(c,574,c->r[7]); // 800B1640
  mtspr(c,575,c->r[7]); // 800B1644
  /* isync */ // 800B1648
  c->r[3]=c->msr; // 800B164C
  c->r[3]=c->r[3]|0x00000030u; // 800B1650
  mtspr(c,27,c->r[3]); // 800B1654
  c->r[3]=c->lr; // 800B1658
  mtspr(c,26,c->r[3]); // 800B165C
  return; /* rfi */ // 800B1660
}

// ConfigMEM2_112MB
void f_800B1664(Ctx* __restrict c) {
  trace_call(0x800B1664u);
  c->r[7]=0u+0x00000000u; // 800B1664
  c->r[4]=0u+0x10000000u; // 800B1668
  c->r[4]=c->r[4]+0x00000002u; // 800B166C
  c->r[3]=0u+0x90000000u; // 800B1670
  c->r[3]=c->r[3]+0x000007FFu; // 800B1674
  c->r[6]=0u+0x10000000u; // 800B1678
  c->r[6]=c->r[6]+0x0000002Au; // 800B167C
  c->r[5]=0u+0xD0000000u; // 800B1680
  c->r[5]=c->r[5]+0x00000FFFu; // 800B1684
  /* isync */ // 800B1688
  mtspr(c,568,c->r[7]); // 800B168C
  mtspr(c,569,c->r[4]); // 800B1690
  mtspr(c,568,c->r[3]); // 800B1694
  /* isync */ // 800B1698
  mtspr(c,560,c->r[7]); // 800B169C
  mtspr(c,561,c->r[7]); // 800B16A0
  /* isync */ // 800B16A4
  mtspr(c,570,c->r[7]); // 800B16A8
  mtspr(c,571,c->r[6]); // 800B16AC
  mtspr(c,570,c->r[5]); // 800B16B0
  /* isync */ // 800B16B4
  mtspr(c,562,c->r[7]); // 800B16B8
  mtspr(c,563,c->r[7]); // 800B16BC
  /* isync */ // 800B16C0
  c->r[4]=0u+0x14000000u; // 800B16C4
  c->r[4]=c->r[4]+0x00000002u; // 800B16C8
  c->r[3]=0u+0x94000000u; // 800B16CC
  c->r[3]=c->r[3]+0x000003FFu; // 800B16D0
  c->r[6]=0u+0x16000000u; // 800B16D4
  c->r[6]=c->r[6]+0x00000002u; // 800B16D8
  c->r[5]=0u+0x96000000u; // 800B16DC
  c->r[5]=c->r[5]+0x000001FFu; // 800B16E0
  /* isync */ // 800B16E4
  mtspr(c,572,c->r[7]); // 800B16E8
  mtspr(c,573,c->r[4]); // 800B16EC
  mtspr(c,572,c->r[3]); // 800B16F0
  /* isync */ // 800B16F4
  mtspr(c,564,c->r[7]); // 800B16F8
  mtspr(c,565,c->r[7]); // 800B16FC
  /* isync */ // 800B1700
  mtspr(c,574,c->r[7]); // 800B1704
  mtspr(c,575,c->r[6]); // 800B1708
  mtspr(c,574,c->r[5]); // 800B170C
  /* isync */ // 800B1710
  mtspr(c,566,c->r[7]); // 800B1714
  mtspr(c,567,c->r[7]); // 800B1718
  /* isync */ // 800B171C
  c->r[3]=c->msr; // 800B1720
  c->r[3]=c->r[3]|0x00000030u; // 800B1724
  mtspr(c,27,c->r[3]); // 800B1728
  c->r[3]=c->lr; // 800B172C
  mtspr(c,26,c->r[3]); // 800B1730
  return; /* rfi */ // 800B1734
}

// ConfigMEM2_128MB
void f_800B1738(Ctx* __restrict c) {
  trace_call(0x800B1738u);
  c->r[7]=0u+0x00000000u; // 800B1738
  c->r[4]=0u+0x10000000u; // 800B173C
  c->r[4]=c->r[4]+0x00000002u; // 800B1740
  c->r[3]=0u+0x90000000u; // 800B1744
  c->r[3]=c->r[3]+0x00000FFFu; // 800B1748
  c->r[6]=0u+0x10000000u; // 800B174C
  c->r[6]=c->r[6]+0x0000002Au; // 800B1750
  c->r[5]=0u+0xD0000000u; // 800B1754
  c->r[5]=c->r[5]+0x00000FFFu; // 800B1758
  /* isync */ // 800B175C
  mtspr(c,568,c->r[7]); // 800B1760
  mtspr(c,569,c->r[4]); // 800B1764
  mtspr(c,568,c->r[3]); // 800B1768
  /* isync */ // 800B176C
  mtspr(c,560,c->r[7]); // 800B1770
  mtspr(c,561,c->r[7]); // 800B1774
  /* isync */ // 800B1778
  mtspr(c,570,c->r[7]); // 800B177C
  mtspr(c,571,c->r[6]); // 800B1780
  mtspr(c,570,c->r[5]); // 800B1784
  /* isync */ // 800B1788
  mtspr(c,562,c->r[7]); // 800B178C
  mtspr(c,563,c->r[7]); // 800B1790
  /* isync */ // 800B1794
  mtspr(c,564,c->r[7]); // 800B1798
  mtspr(c,565,c->r[7]); // 800B179C
  /* isync */ // 800B17A0
  mtspr(c,566,c->r[7]); // 800B17A4
  mtspr(c,567,c->r[7]); // 800B17A8
  /* isync */ // 800B17AC
  mtspr(c,572,c->r[7]); // 800B17B0
  mtspr(c,573,c->r[7]); // 800B17B4
  /* isync */ // 800B17B8
  mtspr(c,574,c->r[7]); // 800B17BC
  mtspr(c,575,c->r[7]); // 800B17C0
  /* isync */ // 800B17C4
  c->r[3]=c->msr; // 800B17C8
  c->r[3]=c->r[3]|0x00000030u; // 800B17CC
  mtspr(c,27,c->r[3]); // 800B17D0
  c->r[3]=c->lr; // 800B17D4
  mtspr(c,26,c->r[3]); // 800B17D8
  return; /* rfi */ // 800B17DC
}

// RealMode
void f_800B17E0(Ctx* __restrict c) {
  trace_call(0x800B17E0u);
  c->r[3]=rotl(c->r[3],0)&0x3FFFFFFFu; // 800B17E0
  mtspr(c,26,c->r[3]); // 800B17E4
  c->r[3]=c->msr; // 800B17E8
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFCFu; // 800B17EC
  mtspr(c,27,c->r[3]); // 800B17F0
  return; /* rfi */ // 800B17F4
}

// BATConfig
void f_800B17F8(Ctx* __restrict c) {
  trace_call(0x800B17F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B17F8
  c->r[0]=c->lr; // 800B17FC
  c->r[4]=0u+0x80000000u; // 800B1800
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1804
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1808
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B180C
  c->r[30]=c->r[3]|c->r[3]; // 800B1810
  c->r[31]=R32(c->r[4]+0x00003104u); // 800B1814
  c->r[0]=R32(c->r[4]+0x00003100u); // 800B1818
  cmpu(c,0,c->r[31],c->r[0]); // 800B181C
  if (!crb(c,0)) { goto L_800B1848; } // 800B1820
  c->r[0]=c->r[31]+0xFE800000u; // 800B1824
  cmpu(c,0,c->r[0],0x00000000u); // 800B1828
  if (!crb(c,2)) { goto L_800B1848; } // 800B182C
  c->r[3]=0u+0x81800000u; // 800B1830
  c->r[4]=0u+0x01800000u; // 800B1834
  c->lr=0x800B183Cu; f_800ABD00(c); // 800B1838
  c->r[0]=0u+0x00000002u; // 800B183C
  c->r[3]=0u+0xCC000000u; // 800B1840
  W16(c->r[3]+0x00004028u,c->r[0]); // 800B1844
L_800B1848:;
  c->r[0]=0u+0x01800000u; // 800B1848
  cmpu(c,0,c->r[31],c->r[0]); // 800B184C
  if (crb(c,1)) { goto L_800B1860; } // 800B1850
  c->r[3]=0u+0x800B0000u; // 800B1854
  c->r[3]=c->r[3]+0x00001394u; // 800B1858
  c->lr=0x800B1860u; f_800B17E0(c); // 800B185C
L_800B1860:;
  c->r[3]=0u+0x80000000u; // 800B1860
  c->r[0]=0u+0x04000000u; // 800B1864
  c->r[4]=R32(c->r[3]+0x0000311Cu); // 800B1868
  c->r[3]=R32(c->r[3]+0x00003120u); // 800B186C
  cmpu(c,0,c->r[4],c->r[0]); // 800B1870
  if (crb(c,1)) { goto L_800B18C0; } // 800B1874
  c->r[0]=0u+0x93400000u; // 800B1878
  cmpu(c,0,c->r[3],c->r[0]); // 800B187C
  if (crb(c,1)) { goto L_800B1894; } // 800B1880
  c->r[3]=0u+0x800B0000u; // 800B1884
  c->r[3]=c->r[3]+0x00001414u; // 800B1888
  c->lr=0x800B1890u; f_800B17E0(c); // 800B188C
  goto L_800B18F4; // 800B1890
L_800B1894:;
  c->r[0]=0u+0x93800000u; // 800B1894
  cmpu(c,0,c->r[3],c->r[0]); // 800B1898
  if (crb(c,1)) { goto L_800B18B0; } // 800B189C
  c->r[3]=0u+0x800B0000u; // 800B18A0
  c->r[3]=c->r[3]+0x000014E8u; // 800B18A4
  c->lr=0x800B18ACu; f_800B17E0(c); // 800B18A8
  goto L_800B18F4; // 800B18AC
L_800B18B0:;
  c->r[3]=0u+0x800B0000u; // 800B18B0
  c->r[3]=c->r[3]+0x000015BCu; // 800B18B4
  c->lr=0x800B18BCu; f_800B17E0(c); // 800B18B8
  goto L_800B18F4; // 800B18BC
L_800B18C0:;
  c->r[0]=0u+0x08000000u; // 800B18C0
  cmpu(c,0,c->r[4],c->r[0]); // 800B18C4
  if (crb(c,1)) { goto L_800B18F4; } // 800B18C8
  c->r[0]=0u+0x97000000u; // 800B18CC
  cmpu(c,0,c->r[3],c->r[0]); // 800B18D0
  if (crb(c,1)) { goto L_800B18E8; } // 800B18D4
  c->r[3]=0u+0x800B0000u; // 800B18D8
  c->r[3]=c->r[3]+0x00001664u; // 800B18DC
  c->lr=0x800B18E4u; f_800B17E0(c); // 800B18E0
  goto L_800B18F4; // 800B18E4
L_800B18E8:;
  c->r[3]=0u+0x800B0000u; // 800B18E8
  c->r[3]=c->r[3]+0x00001738u; // 800B18EC
  c->lr=0x800B18F4u; f_800B17E0(c); // 800B18F0
L_800B18F4:;
  c->r[0]=c->r[30]+0xFFF50000u; // 800B18F4
L_800B18F8:;
  cmpu(c,0,c->r[0],0x0000A2CFu); // 800B18F8
  if (!crb(c,2)) { IRQCHK(c); goto L_800B18F8; } // 800B18FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1900
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1904
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B1908
  c->lr=c->r[0]; // 800B190C
  c->r[1]=c->r[1]+0x00000010u; // 800B1910
  return; // 800B1914
}

// __OSRestoreCodeExecOnMEM1
void f_800B1918(Ctx* __restrict c) {
  trace_call(0x800B1918u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1918
  c->r[0]=c->lr; // 800B191C
  c->r[4]=0u+0x800B0000u; // 800B1920
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1924
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1928
  c->r[31]=c->r[3]|c->r[3]; // 800B192C
  c->r[3]=c->r[4]+0x00001394u; // 800B1930
  c->lr=0x800B1938u; f_800B17E0(c); // 800B1934
  c->r[0]=c->r[31]+0xFFF50000u; // 800B1938
L_800B193C:;
  cmpu(c,0,c->r[0],0x0000A2CFu); // 800B193C
  if (!crb(c,2)) { IRQCHK(c); goto L_800B193C; } // 800B1940
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1948
  c->lr=c->r[0]; // 800B194C
  c->r[1]=c->r[1]+0x00000010u; // 800B1950
  return; // 800B1954
}

// __OSInitMemoryProtection
void f_800B1958(Ctx* __restrict c) {
  trace_call(0x800B1958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1958
  c->r[0]=c->lr; // 800B195C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1960
  c->r[0]=R32(c->r[13]+0xFFFF8CE8u); // 800B1964
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1968
  cmps(c,0,(int32_t)c->r[0],0); // 800B196C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B1970
  if (!crb(c,2)) { goto L_800B1A0C; } // 800B1974
  c->lr=0x800B197Cu; f_800B087C(c); // 800B1978
  c->r[4]=0u+0xCC000000u; // 800B197C
  c->r[0]=0u+0x00000000u; // 800B1980
  W16(c->r[4]+0x00004020u,c->r[0]); // 800B1984
  c->r[0]=0u+0x000000FFu; // 800B1988
  c->r[30]=c->r[3]|c->r[3]; // 800B198C
  c->r[3]=0u+0xF0000000u; // 800B1990
  W16(c->r[4]+0x00004010u,c->r[0]); // 800B1994
  c->lr=0x800B199Cu; f_800B0C0C(c); // 800B1998
  c->r[31]=0u+0x800B0000u; // 800B199C
  c->r[3]=0u+0x00000000u; // 800B19A0
  c->r[4]=c->r[31]+0x0000134Cu; // 800B19A4
  c->lr=0x800B19ACu; f_800B08C8(c); // 800B19A8
  c->r[4]=c->r[31]+0x0000134Cu; // 800B19AC
  c->r[3]=0u+0x00000001u; // 800B19B0
  c->lr=0x800B19B8u; f_800B08C8(c); // 800B19B4
  c->r[4]=c->r[31]+0x0000134Cu; // 800B19B8
  c->r[3]=0u+0x00000002u; // 800B19BC
  c->lr=0x800B19C4u; f_800B08C8(c); // 800B19C0
  c->r[4]=c->r[31]+0x0000134Cu; // 800B19C4
  c->r[3]=0u+0x00000003u; // 800B19C8
  c->lr=0x800B19D0u; f_800B08C8(c); // 800B19CC
  c->r[4]=c->r[31]+0x0000134Cu; // 800B19D0
  c->r[3]=0u+0x00000004u; // 800B19D4
  c->lr=0x800B19DCu; f_800B08C8(c); // 800B19D8
  c->r[3]=0u+0x80260000u; // 800B19DC
  c->r[3]=c->r[3]+0x00007558u; // 800B19E0
  c->lr=0x800B19E8u; f_800B1DA8(c); // 800B19E4
  c->r[3]=0u+0x000C0000u; // 800B19E8
  c->r[3]=c->r[3]+0xFFFFA2CFu; // 800B19EC
  c->lr=0x800B19F4u; f_800B17F8(c); // 800B19F0
  c->r[3]=0u+0x08000000u; // 800B19F4
  c->lr=0x800B19FCu; f_800B0C8C(c); // 800B19F8
  c->r[0]=0u+0x00000001u; // 800B19FC
  c->r[3]=c->r[30]|c->r[30]; // 800B1A00
  W32(c->r[13]+0xFFFF8CE8u,c->r[0]); // 800B1A04
  c->lr=0x800B1A0Cu; f_800B08A4(c); // 800B1A08
L_800B1A0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1A0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1A10
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B1A14
  c->lr=c->r[0]; // 800B1A18
  c->r[1]=c->r[1]+0x00000010u; // 800B1A1C
  return; // 800B1A20
}

// OSInitMutex
void f_800B1A24(Ctx* __restrict c) {
  trace_call(0x800B1A24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1A24
  c->r[0]=c->lr; // 800B1A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1A2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1A30
  c->r[31]=c->r[3]|c->r[3]; // 800B1A34
  c->lr=0x800B1A3Cu; f_800B356C(c); // 800B1A38
  c->r[0]=0u+0x00000000u; // 800B1A3C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B1A40
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800B1A44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1A48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1A4C
  c->lr=c->r[0]; // 800B1A50
  c->r[1]=c->r[1]+0x00000010u; // 800B1A54
  return; // 800B1A58
}

// OSLockMutex
void f_800B1A5C(Ctx* __restrict c) {
  trace_call(0x800B1A5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1A5C
  c->r[0]=c->lr; // 800B1A60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1A64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B1A68
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B1A6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B1A70
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B1A74
  c->r[28]=c->r[3]|c->r[3]; // 800B1A78
  c->lr=0x800B1A80u; f_800B087C(c); // 800B1A7C
  c->r[29]=c->r[3]|c->r[3]; // 800B1A80
  c->lr=0x800B1A88u; f_800B357C(c); // 800B1A84
  c->r[30]=c->r[3]|c->r[3]; // 800B1A88
  c->r[31]=0u+0x00000000u; // 800B1A8C
L_800B1A90:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800B1A90
  cmps(c,0,(int32_t)c->r[0],0); // 800B1A94
  if (!crb(c,2)) { goto L_800B1AD8; } // 800B1A98
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800B1A9C
  W32(c->r[28]+0x00000008u,c->r[30]); // 800B1AA0
  c->r[0]=c->r[3]+0x00000001u; // 800B1AA4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800B1AA8
  c->r[3]=R32(c->r[30]+0x000002F8u); // 800B1AAC
  cmps(c,0,(int32_t)c->r[3],0); // 800B1AB0
  if (!crb(c,2)) { goto L_800B1AC0; } // 800B1AB4
  W32(c->r[30]+0x000002F4u,c->r[28]); // 800B1AB8
  goto L_800B1AC4; // 800B1ABC
L_800B1AC0:;
  W32(c->r[3]+0x00000010u,c->r[28]); // 800B1AC0
L_800B1AC4:;
  c->r[0]=0u+0x00000000u; // 800B1AC4
  W32(c->r[28]+0x00000014u,c->r[3]); // 800B1AC8
  W32(c->r[28]+0x00000010u,c->r[0]); // 800B1ACC
  W32(c->r[30]+0x000002F8u,c->r[28]); // 800B1AD0
  goto L_800B1B10; // 800B1AD4
L_800B1AD8:;
  cmpu(c,0,c->r[0],c->r[30]); // 800B1AD8
  if (!crb(c,2)) { goto L_800B1AF0; } // 800B1ADC
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800B1AE0
  c->r[0]=c->r[3]+0x00000001u; // 800B1AE4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800B1AE8
  goto L_800B1B10; // 800B1AEC
L_800B1AF0:;
  W32(c->r[30]+0x000002F0u,c->r[28]); // 800B1AF0
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B1AF4
  c->r[4]=R32(c->r[30]+0x000002D0u); // 800B1AF8
  c->lr=0x800B1B00u; f_800B3884(c); // 800B1AFC
  c->r[3]=c->r[28]|c->r[28]; // 800B1B00
  c->lr=0x800B1B08u; f_800B45EC(c); // 800B1B04
  W32(c->r[30]+0x000002F0u,c->r[31]); // 800B1B08
  IRQCHK(c); goto L_800B1A90; // 800B1B0C
L_800B1B10:;
  c->r[3]=c->r[29]|c->r[29]; // 800B1B10
  c->lr=0x800B1B18u; f_800B08A4(c); // 800B1B14
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1B18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B1B1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B1B20
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B1B24
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B1B28
  c->lr=c->r[0]; // 800B1B2C
  c->r[1]=c->r[1]+0x00000020u; // 800B1B30
  return; // 800B1B34
}

// OSUnlockMutex
void f_800B1B38(Ctx* __restrict c) {
  trace_call(0x800B1B38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1B38
  c->r[0]=c->lr; // 800B1B3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1B40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B1B44
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B1B48
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B1B4C
  c->r[29]=c->r[3]|c->r[3]; // 800B1B50
  c->lr=0x800B1B58u; f_800B087C(c); // 800B1B54
  c->r[31]=c->r[3]|c->r[3]; // 800B1B58
  c->lr=0x800B1B60u; f_800B357C(c); // 800B1B5C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800B1B60
  c->r[30]=c->r[3]|c->r[3]; // 800B1B64
  cmpu(c,0,c->r[0],c->r[3]); // 800B1B68
  if (!crb(c,2)) { goto L_800B1BDC; } // 800B1B6C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800B1B70
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B1B74
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800B1B78
  if (!crb(c,2)) { goto L_800B1BDC; } // 800B1B7C
  c->r[4]=R32(c->r[29]+0x00000010u); // 800B1B80
  c->r[5]=R32(c->r[29]+0x00000014u); // 800B1B84
  cmps(c,0,(int32_t)c->r[4],0); // 800B1B88
  if (!crb(c,2)) { goto L_800B1B98; } // 800B1B8C
  W32(c->r[3]+0x000002F8u,c->r[5]); // 800B1B90
  goto L_800B1B9C; // 800B1B94
L_800B1B98:;
  W32(c->r[4]+0x00000014u,c->r[5]); // 800B1B98
L_800B1B9C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B1B9C
  if (!crb(c,2)) { goto L_800B1BAC; } // 800B1BA0
  W32(c->r[3]+0x000002F4u,c->r[4]); // 800B1BA4
  goto L_800B1BB0; // 800B1BA8
L_800B1BAC:;
  W32(c->r[5]+0x00000010u,c->r[4]); // 800B1BAC
L_800B1BB0:;
  c->r[0]=0u+0x00000000u; // 800B1BB0
  W32(c->r[29]+0x00000008u,c->r[0]); // 800B1BB4
  c->r[4]=R32(c->r[3]+0x000002D0u); // 800B1BB8
  c->r[0]=R32(c->r[3]+0x000002D4u); // 800B1BBC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B1BC0
  if (!crb(c,0)) { goto L_800B1BD4; } // 800B1BC4
  c->r[3]=c->r[30]|c->r[30]; // 800B1BC8
  c->lr=0x800B1BD0u; f_800B3694(c); // 800B1BCC
  W32(c->r[30]+0x000002D0u,c->r[3]); // 800B1BD0
L_800B1BD4:;
  c->r[3]=c->r[29]|c->r[29]; // 800B1BD4
  c->lr=0x800B1BDCu; f_800B46D8(c); // 800B1BD8
L_800B1BDC:;
  c->r[3]=c->r[31]|c->r[31]; // 800B1BDC
  c->lr=0x800B1BE4u; f_800B08A4(c); // 800B1BE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1BE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B1BE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B1BEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B1BF0
  c->lr=c->r[0]; // 800B1BF4
  c->r[1]=c->r[1]+0x00000020u; // 800B1BF8
  return; // 800B1BFC
}

// __OSUnlockAllMutex
void f_800B1C00(Ctx* __restrict c) {
  trace_call(0x800B1C00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1C00
  c->r[0]=c->lr; // 800B1C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1C08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1C0C
  c->r[31]=0u+0x00000000u; // 800B1C10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B1C14
  c->r[30]=c->r[3]|c->r[3]; // 800B1C18
  goto L_800B1C48; // 800B1C1C
L_800B1C20:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 800B1C20
  cmps(c,0,(int32_t)c->r[4],0); // 800B1C24
  if (!crb(c,2)) { goto L_800B1C34; } // 800B1C28
  W32(c->r[30]+0x000002F8u,c->r[31]); // 800B1C2C
  goto L_800B1C38; // 800B1C30
L_800B1C34:;
  W32(c->r[4]+0x00000014u,c->r[31]); // 800B1C34
L_800B1C38:;
  W32(c->r[30]+0x000002F4u,c->r[4]); // 800B1C38
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 800B1C3C
  W32(c->r[3]+0x00000008u,c->r[31]); // 800B1C40
  c->lr=0x800B1C48u; f_800B46D8(c); // 800B1C44
L_800B1C48:;
  c->r[3]=R32(c->r[30]+0x000002F4u); // 800B1C48
  cmps(c,0,(int32_t)c->r[3],0); // 800B1C4C
  if (!crb(c,2)) { IRQCHK(c); goto L_800B1C20; } // 800B1C50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1C54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1C58
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B1C5C
  c->lr=c->r[0]; // 800B1C60
  c->r[1]=c->r[1]+0x00000010u; // 800B1C64
  return; // 800B1C68
}

// OSTryLockMutex
void f_800B1C6C(Ctx* __restrict c) {
  trace_call(0x800B1C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1C6C
  c->r[0]=c->lr; // 800B1C70
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1C74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B1C78
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B1C7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B1C80
  c->r[29]=c->r[3]|c->r[3]; // 800B1C84
  c->lr=0x800B1C8Cu; f_800B087C(c); // 800B1C88
  c->r[31]=c->r[3]|c->r[3]; // 800B1C8C
  c->lr=0x800B1C94u; f_800B357C(c); // 800B1C90
  c->r[0]=R32(c->r[29]+0x00000008u); // 800B1C94
  cmps(c,0,(int32_t)c->r[0],0); // 800B1C98
  if (!crb(c,2)) { goto L_800B1CE0; } // 800B1C9C
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800B1CA0
  W32(c->r[29]+0x00000008u,c->r[3]); // 800B1CA4
  c->r[0]=c->r[4]+0x00000001u; // 800B1CA8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800B1CAC
  c->r[4]=R32(c->r[3]+0x000002F8u); // 800B1CB0
  cmps(c,0,(int32_t)c->r[4],0); // 800B1CB4
  if (!crb(c,2)) { goto L_800B1CC4; } // 800B1CB8
  W32(c->r[3]+0x000002F4u,c->r[29]); // 800B1CBC
  goto L_800B1CC8; // 800B1CC0
L_800B1CC4:;
  W32(c->r[4]+0x00000010u,c->r[29]); // 800B1CC4
L_800B1CC8:;
  c->r[0]=0u+0x00000000u; // 800B1CC8
  W32(c->r[29]+0x00000014u,c->r[4]); // 800B1CCC
  c->r[30]=0u+0x00000001u; // 800B1CD0
  W32(c->r[29]+0x00000010u,c->r[0]); // 800B1CD4
  W32(c->r[3]+0x000002F8u,c->r[29]); // 800B1CD8
  goto L_800B1D00; // 800B1CDC
L_800B1CE0:;
  cmpu(c,0,c->r[0],c->r[3]); // 800B1CE0
  if (!crb(c,2)) { goto L_800B1CFC; } // 800B1CE4
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800B1CE8
  c->r[30]=0u+0x00000001u; // 800B1CEC
  c->r[0]=c->r[3]+0x00000001u; // 800B1CF0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800B1CF4
  goto L_800B1D00; // 800B1CF8
L_800B1CFC:;
  c->r[30]=0u+0x00000000u; // 800B1CFC
L_800B1D00:;
  c->r[3]=c->r[31]|c->r[31]; // 800B1D00
  c->lr=0x800B1D08u; f_800B08A4(c); // 800B1D04
  c->r[3]=c->r[30]|c->r[30]; // 800B1D08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B1D0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B1D10
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B1D14
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1D18
  c->lr=c->r[0]; // 800B1D1C
  c->r[1]=c->r[1]+0x00000020u; // 800B1D20
  return; // 800B1D24
}

// __OSReboot
void f_800B1D28(Ctx* __restrict c) {
  trace_call(0x800B1D28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1D28
  c->r[0]=c->lr; // 800B1D2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1D30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B1D34
  c->r[31]=c->r[4]|c->r[4]; // 800B1D38
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B1D3C
  c->r[30]=c->r[3]|c->r[3]; // 800B1D40
  c->lr=0x800B1D48u; f_800B087C(c); // 800B1D44
  c->r[3]=0u+0x81280000u; // 800B1D48
  c->lr=0x800B1D50u; f_800AB7FC(c); // 800B1D4C
  c->r[3]=0u+0x812F0000u; // 800B1D50
  c->lr=0x800B1D58u; f_800AB7E4(c); // 800B1D54
  c->r[0]=0u+0x00000000u; // 800B1D58
  c->r[6]=0u+0x80000000u; // 800B1D5C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B1D60
  c->r[3]=c->r[31]|c->r[31]; // 800B1D64
  c->r[4]=c->r[30]|0x80000000u; // 800B1D68
  c->r[5]=c->r[1]+0x00000008u; // 800B1D6C
  c->r[0]=R32(c->r[6]+0x00003194u); // 800B1D70
  W32(c->r[13]+0xFFFF8CA8u,c->r[0]); // 800B1D74
  c->lr=0x800B1D7Cu; f_800AE774(c); // 800B1D78
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1D7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B1D80
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B1D84
  c->lr=c->r[0]; // 800B1D88
  c->r[1]=c->r[1]+0x00000020u; // 800B1D8C
  return; // 800B1D90
}

// OSGetSaveRegion
void f_800B1D94(Ctx* __restrict c) {
  trace_call(0x800B1D94u);
  c->r[0]=R32(c->r[13]+0xFFFF8CF0u); // 800B1D94
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B1D98
  c->r[0]=R32(c->r[13]+0xFFFF8CF4u); // 800B1D9C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800B1DA0
  return; // 800B1DA4
}

// OSRegisterShutdownFunction
void f_800B1DA8(Ctx* __restrict c) {
  trace_call(0x800B1DA8u);
  c->r[5]=R32(c->r[13]+0xFFFF8D00u); // 800B1DA8
  goto L_800B1DB4; // 800B1DAC
L_800B1DB0:;
  c->r[5]=R32(c->r[5]+0x00000008u); // 800B1DB0
L_800B1DB4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B1DB4
  if (crb(c,2)) { goto L_800B1DCC; } // 800B1DB8
  c->r[4]=R32(c->r[5]+0x00000004u); // 800B1DBC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800B1DC0
  cmpu(c,0,c->r[4],c->r[0]); // 800B1DC4
  if (!crb(c,1)) { IRQCHK(c); goto L_800B1DB0; } // 800B1DC8
L_800B1DCC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B1DCC
  if (!crb(c,2)) { goto L_800B1E08; } // 800B1DD0
  c->r[4]=c->r[13]+0xFFFF8D00u; // 800B1DD4
  c->r[4]=R32(c->r[4]+0x00000004u); // 800B1DD8
  cmps(c,0,(int32_t)c->r[4],0); // 800B1DDC
  if (!crb(c,2)) { goto L_800B1DEC; } // 800B1DE0
  W32(c->r[13]+0xFFFF8D00u,c->r[3]); // 800B1DE4
  goto L_800B1DF0; // 800B1DE8
L_800B1DEC:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 800B1DEC
L_800B1DF0:;
  c->r[0]=0u+0x00000000u; // 800B1DF0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800B1DF4
  c->r[4]=c->r[13]+0xFFFF8D00u; // 800B1DF8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800B1DFC
  W32(c->r[4]+0x00000004u,c->r[3]); // 800B1E00
  return; // 800B1E04
L_800B1E08:;
  W32(c->r[3]+0x00000008u,c->r[5]); // 800B1E08
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 800B1E0C
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800B1E10
  cmps(c,0,(int32_t)c->r[4],0); // 800B1E14
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800B1E18
  if (!crb(c,2)) { goto L_800B1E28; } // 800B1E1C
  W32(c->r[13]+0xFFFF8D00u,c->r[3]); // 800B1E20
  return; // 800B1E24
L_800B1E28:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 800B1E28
  return; // 800B1E2C
}

// __OSCallShutdownFunctions
void f_800B1E30(Ctx* __restrict c) {
  trace_call(0x800B1E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1E30
  c->r[0]=c->lr; // 800B1E34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1E38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B1E3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B1E40
  c->r[30]=0u+0x00000000u; // 800B1E44
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B1E48
  c->r[29]=c->r[4]|c->r[4]; // 800B1E4C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B1E50
  c->r[28]=c->r[3]|c->r[3]; // 800B1E54
  c->r[3]=0u+0x00000000u; // 800B1E58
  c->r[31]=R32(c->r[13]+0xFFFF8D00u); // 800B1E5C
  goto L_800B1EA0; // 800B1E60
L_800B1E64:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B1E64
  if (crb(c,2)) { goto L_800B1E78; } // 800B1E68
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B1E6C
  cmpu(c,0,c->r[3],c->r[0]); // 800B1E70
  if (!crb(c,2)) { goto L_800B1EA8; } // 800B1E74
L_800B1E78:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800B1E78
  c->r[3]=c->r[28]|c->r[28]; // 800B1E7C
  c->r[4]=c->r[29]|c->r[29]; // 800B1E80
  c->ctr=c->r[12]; // 800B1E84
  if (true) { c->lr=0x800B1E8Cu; dispatch(c,c->ctr); } // 800B1E88
  c->r[0]=cntlz(c->r[3]); // 800B1E8C
  c->r[3]=R32(c->r[31]+0x00000004u); // 800B1E90
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B1E94
  c->r[31]=R32(c->r[31]+0x00000008u); // 800B1E98
  c->r[30]=c->r[30]|c->r[0]; // 800B1E9C
L_800B1EA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B1EA0
  if (!crb(c,2)) { IRQCHK(c); goto L_800B1E64; } // 800B1EA4
L_800B1EA8:;
  c->lr=0x800B1EACu; f_800B2DF0(c); // 800B1EA8
  c->r[0]=cntlz(c->r[3]); // 800B1EAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B1EB0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B1EB4
  c->r[30]=c->r[30]|c->r[0]; // 800B1EB8
  c->r[0]=cntlz(c->r[30]); // 800B1EBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B1EC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B1EC4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B1EC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B1ECC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1ED0
  c->lr=c->r[0]; // 800B1ED4
  c->r[1]=c->r[1]+0x00000020u; // 800B1ED8
  return; // 800B1EDC
}

// __OSShutdownDevices
void f_800B1EE0(Ctx* __restrict c) {
  trace_call(0x800B1EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1EE0
  c->r[0]=c->lr; // 800B1EE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1EE8
  c->r[11]=c->r[1]+0x00000020u; // 800B1EEC
  c->lr=0x800B1EF4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B1EF0
  cmps(c,0,(int32_t)c->r[3],5); // 800B1EF4
  c->r[27]=c->r[3]|c->r[3]; // 800B1EF8
  if (!crb(c,0)) { goto L_800B1F0C; } // 800B1EFC
  cmps(c,0,(int32_t)c->r[3],0); // 800B1F00
  if (crb(c,2)) { goto L_800B1F14; } // 800B1F04
  goto L_800B1F1C; // 800B1F08
L_800B1F0C:;
  cmps(c,0,(int32_t)c->r[3],7); // 800B1F0C
  if (!crb(c,0)) { goto L_800B1F1C; } // 800B1F10
L_800B1F14:;
  c->r[28]=0u+0x00000000u; // 800B1F14
  goto L_800B1F20; // 800B1F18
L_800B1F1C:;
  c->r[28]=0u+0x00000001u; // 800B1F1C
L_800B1F20:;
  c->lr=0x800B1F24u; f_800ABC20(c); // 800B1F20
  cmps(c,0,(int32_t)c->r[28],0); // 800B1F24
  if (!crb(c,2)) { goto L_800B1F38; } // 800B1F28
  c->r[3]=0u+0x00000001u; // 800B1F2C
  c->lr=0x800B1F34u; f_800C7864(c); // 800B1F30
  c->r[29]=c->r[3]|c->r[3]; // 800B1F34
L_800B1F38:;
  c->r[30]=R32(c->r[13]+0xFFFF8D00u); // 800B1F38
  c->r[3]=0u+0x00000000u; // 800B1F3C
  c->r[31]=0u+0x00000000u; // 800B1F40
  goto L_800B1F84; // 800B1F44
L_800B1F48:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B1F48
  if (crb(c,2)) { goto L_800B1F5C; } // 800B1F4C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B1F50
  cmpu(c,0,c->r[3],c->r[0]); // 800B1F54
  if (!crb(c,2)) { goto L_800B1F8C; } // 800B1F58
L_800B1F5C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B1F5C
  c->r[4]=c->r[27]|c->r[27]; // 800B1F60
  c->r[3]=0u+0x00000000u; // 800B1F64
  c->ctr=c->r[12]; // 800B1F68
  if (true) { c->lr=0x800B1F70u; dispatch(c,c->ctr); } // 800B1F6C
  c->r[0]=cntlz(c->r[3]); // 800B1F70
  c->r[3]=R32(c->r[30]+0x00000004u); // 800B1F74
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B1F78
  c->r[30]=R32(c->r[30]+0x00000008u); // 800B1F7C
  c->r[31]=c->r[31]|c->r[0]; // 800B1F80
L_800B1F84:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B1F84
  if (!crb(c,2)) { IRQCHK(c); goto L_800B1F48; } // 800B1F88
L_800B1F8C:;
  c->lr=0x800B1F90u; f_800B2DF0(c); // 800B1F8C
  c->r[0]=cntlz(c->r[3]); // 800B1F90
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B1F94
  c->r[31]=c->r[31]|c->r[0]; cr0(c,c->r[31]); // 800B1F98
  if (!crb(c,2)) { IRQCHK(c); goto L_800B1F38; } // 800B1F9C
L_800B1FA0:;
  c->lr=0x800B1FA4u; f_800B2DF0(c); // 800B1FA0
  cmps(c,0,(int32_t)c->r[3],0); // 800B1FA4
  if (crb(c,2)) { IRQCHK(c); goto L_800B1FA0; } // 800B1FA8
  c->lr=0x800B1FB0u; f_800B087C(c); // 800B1FAC
  c->r[31]=R32(c->r[13]+0xFFFF8D00u); // 800B1FB0
  c->r[3]=0u+0x00000000u; // 800B1FB4
  c->r[30]=0u+0x00000000u; // 800B1FB8
  goto L_800B1FFC; // 800B1FBC
L_800B1FC0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B1FC0
  if (crb(c,2)) { goto L_800B1FD4; } // 800B1FC4
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B1FC8
  cmpu(c,0,c->r[3],c->r[0]); // 800B1FCC
  if (!crb(c,2)) { goto L_800B2004; } // 800B1FD0
L_800B1FD4:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800B1FD4
  c->r[4]=c->r[27]|c->r[27]; // 800B1FD8
  c->r[3]=0u+0x00000001u; // 800B1FDC
  c->ctr=c->r[12]; // 800B1FE0
  if (true) { c->lr=0x800B1FE8u; dispatch(c,c->ctr); } // 800B1FE4
  c->r[0]=cntlz(c->r[3]); // 800B1FE8
  c->r[3]=R32(c->r[31]+0x00000004u); // 800B1FEC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B1FF0
  c->r[31]=R32(c->r[31]+0x00000008u); // 800B1FF4
  c->r[30]=c->r[30]|c->r[0]; // 800B1FF8
L_800B1FFC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B1FFC
  if (!crb(c,2)) { IRQCHK(c); goto L_800B1FC0; } // 800B2000
L_800B2004:;
  c->lr=0x800B2008u; f_800B2DF0(c); // 800B2004
  c->lr=0x800B200Cu; f_800ABF6C(c); // 800B2008
  cmps(c,0,(int32_t)c->r[28],0); // 800B200C
  if (!crb(c,2)) { goto L_800B201C; } // 800B2010
  c->r[3]=c->r[29]|c->r[29]; // 800B2014
  c->lr=0x800B201Cu; f_800C7864(c); // 800B2018
L_800B201C:;
  c->r[3]=0u+0x80000000u; // 800B201C
  c->r[3]=R32(c->r[3]+0x000000DCu); // 800B2020
  goto L_800B2050; // 800B2024
L_800B2028:;
  c->r[0]=R16(c->r[3]+0x000002C8u); // 800B2028
  c->r[30]=R32(c->r[3]+0x000002FCu); // 800B202C
  cmps(c,0,(int32_t)c->r[0],4); // 800B2030
  if (crb(c,2)) { goto L_800B2048; } // 800B2034
  if (!crb(c,0)) { goto L_800B204C; } // 800B2038
  cmps(c,0,(int32_t)c->r[0],1); // 800B203C
  if (crb(c,2)) { goto L_800B2048; } // 800B2040
  goto L_800B204C; // 800B2044
L_800B2048:;
  c->lr=0x800B204Cu; f_800B3EA0(c); // 800B2048
L_800B204C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B204C
L_800B2050:;
  cmps(c,0,(int32_t)c->r[3],0); // 800B2050
  if (!crb(c,2)) { IRQCHK(c); goto L_800B2028; } // 800B2054
  c->r[11]=c->r[1]+0x00000020u; // 800B2058
  c->lr=0x800B2060u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B205C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B2060
  c->lr=c->r[0]; // 800B2064
  c->r[1]=c->r[1]+0x00000020u; // 800B2068
  return; // 800B206C
}

// __OSGetDiscState
void f_800B2070(Ctx* __restrict c) {
  trace_call(0x800B2070u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2070
  c->r[0]=c->lr; // 800B2074
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B2078
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B207C
  c->r[31]=c->r[3]|c->r[3]; // 800B2080
  c->lr=0x800B2088u; f_800BE340(c); // 800B2084
  cmpu(c,0,c->r[3],0x00000002u); // 800B2088
  if (crb(c,2)) { goto L_800B2098; } // 800B208C
  c->r[3]=0u+0x00000003u; // 800B2090
  goto L_800B20C8; // 800B2094
L_800B2098:;
  cmpu(c,0,c->r[31],0x00000001u); // 800B2098
  if (!crb(c,2)) { goto L_800B20C4; } // 800B209C
  c->r[3]=c->r[1]+0x00000008u; // 800B20A0
  c->lr=0x800B20A8u; f_800B3038(c); // 800B20A4
  cmps(c,0,(int32_t)c->r[3],0); // 800B20A8
  if (crb(c,2)) { goto L_800B20C4; } // 800B20AC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800B20B0
  cmps(c,0,(int32_t)c->r[0],0); // 800B20B4
  if (!crb(c,2)) { goto L_800B20C4; } // 800B20B8
  c->r[3]=0u+0x00000001u; // 800B20BC
  goto L_800B20C8; // 800B20C0
L_800B20C4:;
  c->r[3]=0u+0x00000002u; // 800B20C4
L_800B20C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B20C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B20CC
  c->lr=c->r[0]; // 800B20D0
  c->r[1]=c->r[1]+0x00000020u; // 800B20D4
  return; // 800B20D8
}

// OSShutdownSystem
void f_800B20DC(Ctx* __restrict c) {
  trace_call(0x800B20DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B20DC
  c->r[0]=c->lr; // 800B20E0
  c->r[4]=0u+0x00000000u; // 800B20E4
  c->r[5]=0u+0x00000002u; // 800B20E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B20EC
  c->r[3]=c->r[1]+0x00000008u; // 800B20F0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B20F4
  c->lr=0x800B20FCu; f_80004688(c); // 800B20F8
  c->lr=0x800B2100u; f_800F49B0(c); // 800B20FC
L_800B2100:;
  c->lr=0x800B2104u; f_800F4A50(c); // 800B2100
  cmpu(c,0,c->r[3],0x00000001u); // 800B2104
  if (crb(c,2)) { IRQCHK(c); goto L_800B2100; } // 800B2108
  c->r[3]=c->r[1]+0x00000008u; // 800B210C
  c->lr=0x800B2114u; f_800F6430(c); // 800B2110
  c->lr=0x800B2118u; f_800B5B2C(c); // 800B2114
  c->lr=0x800B211Cu; f_800B5438(c); // 800B2118
  c->lr=0x800B2120u; f_800BE574(c); // 800B211C
  c->r[3]=c->r[1]+0x00000018u; // 800B2120
  c->lr=0x800B2128u; f_800B5DF8(c); // 800B2124
  c->r[31]=R8(c->r[1]+0x0000001Eu); // 800B2128
  c->lr=0x800B2130u; f_800BE340(c); // 800B212C
  cmpu(c,0,c->r[3],0x00000002u); // 800B2130
  if (crb(c,2)) { goto L_800B2140; } // 800B2134
  c->r[3]=0u+0x00000003u; // 800B2138
  goto L_800B2170; // 800B213C
L_800B2140:;
  cmpu(c,0,c->r[31],0x00000001u); // 800B2140
  if (!crb(c,2)) { goto L_800B216C; } // 800B2144
  c->r[3]=c->r[1]+0x0000000Cu; // 800B2148
  c->lr=0x800B2150u; f_800B3038(c); // 800B214C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2150
  if (crb(c,2)) { goto L_800B216C; } // 800B2154
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800B2158
  cmps(c,0,(int32_t)c->r[0],0); // 800B215C
  if (!crb(c,2)) { goto L_800B216C; } // 800B2160
  c->r[3]=0u+0x00000001u; // 800B2164
  goto L_800B2170; // 800B2168
L_800B216C:;
  c->r[3]=0u+0x00000002u; // 800B216C
L_800B2170:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800B2170
  W8(c->r[1]+0x0000001Eu,c->r[3]); // 800B2174
  cmpu(c,0,c->r[0],0x00000001u); // 800B2178
  if (!crb(c,2)) { goto L_800B218C; } // 800B217C
  c->r[0]=0u+0x00000005u; // 800B2180
  W8(c->r[1]+0x0000001Du,c->r[0]); // 800B2184
  goto L_800B2194; // 800B2188
L_800B218C:;
  c->r[0]=0u+0x00000001u; // 800B218C
  W8(c->r[1]+0x0000001Du,c->r[0]); // 800B2190
L_800B2194:;
  c->lr=0x800B2198u; f_800B3154(c); // 800B2194
  c->r[3]=c->r[1]+0x00000018u; // 800B2198
  c->lr=0x800B21A0u; f_800B5D14(c); // 800B219C
  c->r[3]=c->r[1]+0x00000010u; // 800B21A0
  c->lr=0x800B21A8u; f_800A9814(c); // 800B21A4
  c->r[0]=R8(c->r[1]+0x00000008u); // 800B21A8
  cmpu(c,0,c->r[0],0x00000001u); // 800B21AC
  if (!crb(c,2)) { goto L_800B21D4; } // 800B21B0
  c->r[0]=0u+0x00000001u; // 800B21B4
  W32(c->r[13]+0xFFFF8CFCu,c->r[0]); // 800B21B8
  c->lr=0x800B21C0u; f_800B35B4(c); // 800B21BC
  c->r[3]=0u+0x00000005u; // 800B21C0
  c->lr=0x800B21C8u; f_800B1EE0(c); // 800B21C4
  c->lr=0x800B21CCu; f_800B35F0(c); // 800B21C8
  c->lr=0x800B21D0u; f_800ADE5C(c); // 800B21CC
  goto L_800B21E4; // 800B21D0
L_800B21D4:;
  c->lr=0x800B21D8u; f_800B35B4(c); // 800B21D4
  c->r[3]=0u+0x00000002u; // 800B21D8
  c->lr=0x800B21E0u; f_800B1EE0(c); // 800B21DC
  c->lr=0x800B21E4u; f_800B5258(c); // 800B21E0
L_800B21E4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B21E4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B21E8
  c->lr=c->r[0]; // 800B21EC
  c->r[1]=c->r[1]+0x00000040u; // 800B21F0
  return; // 800B21F4
}

// OSRestart
void f_800B21F8(Ctx* __restrict c) {
  trace_call(0x800B21F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B21F8
  c->r[0]=c->lr; // 800B21FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2200
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2204
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B2208
  c->r[30]=c->r[3]|c->r[3]; // 800B220C
  c->lr=0x800B2214u; f_800AABE8(c); // 800B2210
  c->r[31]=c->r[3]|c->r[3]; // 800B2214
  c->lr=0x800B221Cu; f_800B5B2C(c); // 800B2218
  c->lr=0x800B2220u; f_800B5438(c); // 800B221C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800B2220
  cmpu(c,0,c->r[0],0x00000081u); // 800B2224
  if (!crb(c,2)) { goto L_800B2248; } // 800B2228
  c->lr=0x800B2230u; f_800B35B4(c); // 800B222C
  c->r[3]=0u+0x00000004u; // 800B2230
  c->lr=0x800B2238u; f_800B1EE0(c); // 800B2234
  c->lr=0x800B223Cu; f_800B35F0(c); // 800B2238
  c->r[3]=c->r[30]|c->r[30]; // 800B223C
  c->lr=0x800B2244u; f_800B74C4(c); // 800B2240
  goto L_800B226C; // 800B2244
L_800B2248:;
  cmpu(c,0,c->r[0],0x00000080u); // 800B2248
  if (!crb(c,2)) { goto L_800B226C; } // 800B224C
  c->lr=0x800B2254u; f_800B35B4(c); // 800B2250
  c->r[3]=0u+0x00000004u; // 800B2254
  c->lr=0x800B225Cu; f_800B1EE0(c); // 800B2258
  c->lr=0x800B2260u; f_800B35F0(c); // 800B225C
  c->r[4]=R32(c->r[13]+0xFFFF8CF8u); // 800B2260
  c->r[3]=c->r[30]|c->r[30]; // 800B2264
  c->lr=0x800B226Cu; f_800B1D28(c); // 800B2268
L_800B226C:;
  c->lr=0x800B2270u; f_800B35B4(c); // 800B226C
  c->r[3]=0u+0x00000001u; // 800B2270
  c->lr=0x800B2278u; f_800B1EE0(c); // 800B2274
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800B2278
  cmps(c,0,(int32_t)c->r[0],0); // 800B227C
  if (!crb(c,2)) { goto L_800B2290; } // 800B2280
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800B2284
  cmps(c,0,(int32_t)c->r[0],0); // 800B2288
  if (crb(c,2)) { goto L_800B2294; } // 800B228C
L_800B2290:;
  c->lr=0x800B2294u; f_800B5140(c); // 800B2290
L_800B2294:;
  c->lr=0x800B2298u; f_800B52D0(c); // 800B2294
  c->r[3]=0u+0x80260000u; // 800B2298
  c->r[5]=0u+0x80260000u; // 800B229C
  c->r[3]=c->r[3]+0x00007568u; // 800B22A0
  c->r[4]=0u+0x0000040Au; // 800B22A4
  c->r[5]=c->r[5]+0x00007574u; // 800B22A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B22AC
  c->lr=0x800B22B4u; f_800ACC34(c); // 800B22B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B22B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B22B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B22BC
  c->lr=c->r[0]; // 800B22C0
  c->r[1]=c->r[1]+0x00000010u; // 800B22C4
  return; // 800B22C8
}

// __OSReturnToMenu
void f_800B22CC(Ctx* __restrict c) {
  trace_call(0x800B22CCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B22CC
  c->r[0]=c->lr; // 800B22D0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B22D4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800B22D8
  W32(c->r[1]+0x00000088u,c->r[30]); // 800B22DC
  c->r[30]=0u+0x80260000u; // 800B22E0
  c->r[30]=c->r[30]+0x00007568u; // 800B22E4
  W32(c->r[1]+0x00000084u,c->r[29]); // 800B22E8
  c->r[29]=c->r[3]|c->r[3]; // 800B22EC
  c->lr=0x800B22F4u; f_800B5B2C(c); // 800B22F0
  c->lr=0x800B22F8u; f_800B5438(c); // 800B22F4
  c->lr=0x800B22FCu; f_800BE574(c); // 800B22F8
  c->r[3]=c->r[1]+0x00000058u; // 800B22FC
  c->lr=0x800B2304u; f_800B5DF8(c); // 800B2300
  c->r[31]=R8(c->r[1]+0x0000005Eu); // 800B2304
  c->lr=0x800B230Cu; f_800BE340(c); // 800B2308
  cmpu(c,0,c->r[3],0x00000002u); // 800B230C
  if (crb(c,2)) { goto L_800B231C; } // 800B2310
  c->r[0]=0u+0x00000003u; // 800B2314
  goto L_800B234C; // 800B2318
L_800B231C:;
  cmpu(c,0,c->r[31],0x00000001u); // 800B231C
  if (!crb(c,2)) { goto L_800B2348; } // 800B2320
  c->r[3]=c->r[1]+0x00000008u; // 800B2324
  c->lr=0x800B232Cu; f_800B3038(c); // 800B2328
  cmps(c,0,(int32_t)c->r[3],0); // 800B232C
  if (crb(c,2)) { goto L_800B2348; } // 800B2330
  c->r[0]=R32(c->r[1]+0x00000008u); // 800B2334
  cmps(c,0,(int32_t)c->r[0],0); // 800B2338
  if (!crb(c,2)) { goto L_800B2348; } // 800B233C
  c->r[0]=0u+0x00000001u; // 800B2340
  goto L_800B234C; // 800B2344
L_800B2348:;
  c->r[0]=0u+0x00000002u; // 800B2348
L_800B234C:;
  c->r[31]=0u+0x00000003u; // 800B234C
  W8(c->r[1]+0x0000005Eu,c->r[0]); // 800B2350
  W8(c->r[1]+0x0000005Du,c->r[31]); // 800B2354
  W8(c->r[1]+0x0000005Fu,c->r[29]); // 800B2358
  c->lr=0x800B2360u; f_800B3154(c); // 800B235C
  c->r[3]=c->r[1]+0x00000058u; // 800B2360
  c->lr=0x800B2368u; f_800B5D14(c); // 800B2364
  c->r[3]=0u+0x81280000u; // 800B2368
  c->lr=0x800B2370u; f_800AB7FC(c); // 800B236C
  c->r[3]=0u+0x812F0000u; // 800B2370
  c->lr=0x800B2378u; f_800AB7E4(c); // 800B2374
  c->lr=0x800B237Cu; f_80144FB4(c); // 800B2378
  cmps(c,0,(int32_t)c->r[3],0); // 800B237C
  if (crb(c,2)) { goto L_800B23F8; } // 800B2380
  c->r[3]=c->r[1]+0x00000038u; // 800B2384
  c->lr=0x800B238Cu; f_800B5DF8(c); // 800B2388
  c->r[0]=0u+0x00000002u; // 800B238C
  W8(c->r[1]+0x0000003Du,c->r[31]); // 800B2390
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 800B2394
  c->lr=0x800B239Cu; f_800B3154(c); // 800B2398
  c->r[3]=c->r[1]+0x00000038u; // 800B239C
  c->lr=0x800B23A4u; f_800B5D14(c); // 800B23A0
  c->lr=0x800B23A8u; f_800ADE5C(c); // 800B23A4
  c->lr=0x800B23ACu; f_800B35B4(c); // 800B23A8
  c->lr=0x800B23B0u; f_800C62BC(c); // 800B23AC
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800B23B0
  cmps(c,0,(int32_t)c->r[0],0); // 800B23B4
  if (!crb(c,2)) { goto L_800B23C8; } // 800B23B8
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800B23BC
  cmps(c,0,(int32_t)c->r[0],0); // 800B23C0
  if (crb(c,2)) { goto L_800B23CC; } // 800B23C4
L_800B23C8:;
  c->lr=0x800B23CCu; f_800B5140(c); // 800B23C8
L_800B23CC:;
  c->lr=0x800B23D0u; f_800B52D0(c); // 800B23CC
  c->r[3]=c->r[30]+0x00000000u; // 800B23D0
  c->r[5]=c->r[30]+0x0000000Cu; // 800B23D4
  c->r[4]=0u+0x0000040Au; // 800B23D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B23DC
  c->lr=0x800B23E4u; f_800ACC34(c); // 800B23E0
  c->r[3]=c->r[30]+0x00000000u; // 800B23E4
  c->r[5]=c->r[30]+0x00000038u; // 800B23E8
  c->r[4]=0u+0x000003F2u; // 800B23EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B23F0
  c->lr=0x800B23F8u; f_800ACC34(c); // 800B23F4
L_800B23F8:;
  c->r[3]=0u+0x000000E0u; // 800B23F8
  c->r[4]=0u+0x00000020u; // 800B23FC
  c->lr=0x800B2404u; f_800AB804(c); // 800B2400
  cmps(c,0,(int32_t)c->r[3],0); // 800B2404
  c->r[31]=c->r[3]|c->r[3]; // 800B2408
  if (!crb(c,2)) { goto L_800B2488; } // 800B240C
  c->r[3]=c->r[1]+0x00000018u; // 800B2410
  c->lr=0x800B2418u; f_800B5DF8(c); // 800B2414
  c->r[3]=0u+0x00000002u; // 800B2418
  c->r[0]=0u+0x00000003u; // 800B241C
  W8(c->r[1]+0x0000001Eu,c->r[3]); // 800B2420
  W8(c->r[1]+0x0000001Du,c->r[0]); // 800B2424
  c->lr=0x800B242Cu; f_800B3154(c); // 800B2428
  c->r[3]=c->r[1]+0x00000018u; // 800B242C
  c->lr=0x800B2434u; f_800B5D14(c); // 800B2430
  c->lr=0x800B2438u; f_800ADE5C(c); // 800B2434
  c->lr=0x800B243Cu; f_800B35B4(c); // 800B2438
  c->lr=0x800B2440u; f_800C62BC(c); // 800B243C
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800B2440
  cmps(c,0,(int32_t)c->r[0],0); // 800B2444
  if (!crb(c,2)) { goto L_800B2458; } // 800B2448
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800B244C
  cmps(c,0,(int32_t)c->r[0],0); // 800B2450
  if (crb(c,2)) { goto L_800B245C; } // 800B2454
L_800B2458:;
  c->lr=0x800B245Cu; f_800B5140(c); // 800B2458
L_800B245C:;
  c->lr=0x800B2460u; f_800B52D0(c); // 800B245C
  c->r[3]=c->r[30]+0x00000000u; // 800B2460
  c->r[5]=c->r[30]+0x0000000Cu; // 800B2464
  c->r[4]=0u+0x0000040Au; // 800B2468
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B246C
  c->lr=0x800B2474u; f_800ACC34(c); // 800B2470
  c->r[3]=c->r[30]+0x00000000u; // 800B2474
  c->r[5]=c->r[30]+0x00000038u; // 800B2478
  c->r[4]=0u+0x000003F2u; // 800B247C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B2480
  c->lr=0x800B2488u; f_800ACC34(c); // 800B2484
L_800B2488:;
  c->r[3]=c->r[31]|c->r[31]; // 800B2488
  c->r[4]=0u+0x00000000u; // 800B248C
  c->r[5]=0u+0x000000E0u; // 800B2490
  c->lr=0x800B2498u; f_80004688(c); // 800B2494
  c->r[4]=c->r[31]|c->r[31]; // 800B2498
  c->r[3]=0u+0x00000000u; // 800B249C
  c->lr=0x800B24A4u; f_801451FC(c); // 800B24A0
  cmps(c,0,(int32_t)c->r[3],0); // 800B24A4
  if (!crb(c,2)) { goto L_800B24E8; } // 800B24A8
  c->lr=0x800B24B0u; f_800B668C(c); // 800B24AC
  cmps(c,0,(int32_t)c->r[3],0); // 800B24B0
  if (crb(c,2)) { goto L_800B24E8; } // 800B24B4
  c->r[3]=0u+0x00000000u; // 800B24B8
  c->r[0]=0u+0xFFFFFFFFu; // 800B24BC
  W32(c->r[1]+0x00000010u,c->r[3]); // 800B24C0
  c->r[3]=c->r[31]|c->r[31]; // 800B24C4
  c->r[4]=c->r[1]+0x00000010u; // 800B24C8
  c->r[5]=c->r[1]+0x0000000Cu; // 800B24CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B24D0
  c->lr=0x800B24D8u; f_800B6B18(c); // 800B24D4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800B24D8
  cmps(c,0,(int32_t)c->r[0],0); // 800B24DC
  if (!crb(c,2)) { goto L_800B24E8; } // 800B24E0
  c->lr=0x800B24E8u; f_800B6974(c); // 800B24E4
L_800B24E8:;
  c->lr=0x800B24ECu; f_800B35B4(c); // 800B24E8
  c->r[3]=0u+0x00000005u; // 800B24EC
  c->lr=0x800B24F4u; f_800B1EE0(c); // 800B24F0
  c->lr=0x800B24F8u; f_800B35F0(c); // 800B24F4
  c->lr=0x800B24FCu; f_800ADE5C(c); // 800B24F8
  c->lr=0x800B2500u; f_800B35B4(c); // 800B24FC
  c->lr=0x800B2504u; f_800C62BC(c); // 800B2500
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800B2504
  cmps(c,0,(int32_t)c->r[0],0); // 800B2508
  if (!crb(c,2)) { goto L_800B251C; } // 800B250C
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800B2510
  cmps(c,0,(int32_t)c->r[0],0); // 800B2514
  if (crb(c,2)) { goto L_800B2520; } // 800B2518
L_800B251C:;
  c->lr=0x800B2520u; f_800B5140(c); // 800B251C
L_800B2520:;
  c->lr=0x800B2524u; f_800B52D0(c); // 800B2520
  c->r[3]=c->r[30]+0x00000000u; // 800B2524
  c->r[5]=c->r[30]+0x0000000Cu; // 800B2528
  c->r[4]=0u+0x0000040Au; // 800B252C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B2530
  c->lr=0x800B2538u; f_800ACC34(c); // 800B2534
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B2538
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800B253C
  c->r[30]=R32(c->r[1]+0x00000088u); // 800B2540
  c->r[29]=R32(c->r[1]+0x00000084u); // 800B2544
  c->lr=c->r[0]; // 800B2548
  c->r[1]=c->r[1]+0x00000090u; // 800B254C
  return; // 800B2550
}

// OSReturnToMenu
void f_800B2554(Ctx* __restrict c) {
  trace_call(0x800B2554u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2554
  c->r[0]=c->lr; // 800B2558
  c->r[3]=0u+0x00000000u; // 800B255C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2560
  c->lr=0x800B2568u; f_800B22CC(c); // 800B2564
  c->r[3]=0u+0x80260000u; // 800B2568
  c->r[5]=0u+0x80260000u; // 800B256C
  c->r[3]=c->r[3]+0x00007568u; // 800B2570
  c->r[4]=0u+0x0000037Fu; // 800B2574
  c->r[5]=c->r[5]+0x000075D4u; // 800B2578
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B257C
  c->lr=0x800B2584u; f_800ACC34(c); // 800B2580
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2584
  c->lr=c->r[0]; // 800B2588
  c->r[1]=c->r[1]+0x00000010u; // 800B258C
  return; // 800B2590
}

// OSReturnToDataManager
void f_800B2594(Ctx* __restrict c) {
  trace_call(0x800B2594u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2594
  c->r[0]=c->lr; // 800B2598
  c->r[3]=0u+0x00000001u; // 800B259C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B25A0
  c->lr=0x800B25A8u; f_800B22CC(c); // 800B25A4
  c->r[3]=0u+0x80260000u; // 800B25A8
  c->r[5]=0u+0x80260000u; // 800B25AC
  c->r[3]=c->r[3]+0x00007568u; // 800B25B0
  c->r[4]=0u+0x00000391u; // 800B25B4
  c->r[5]=c->r[5]+0x00007604u; // 800B25B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B25BC
  c->lr=0x800B25C4u; f_800ACC34(c); // 800B25C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B25C4
  c->lr=c->r[0]; // 800B25C8
  c->r[1]=c->r[1]+0x00000010u; // 800B25CC
  return; // 800B25D0
}

// OSReturnToSetting
void f_800B25D4(Ctx* __restrict c) {
  trace_call(0x800B25D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B25D4
  c->r[0]=c->lr; // 800B25D8
  cmpu(c,0,c->r[3],0x00000007u); // 800B25DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B25E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B25E4
  c->r[31]=0u+0x80260000u; // 800B25E8
  c->r[31]=c->r[31]+0x00007568u; // 800B25EC
  if (crb(c,1)) { goto L_800B2644; } // 800B25F0
  c->r[4]=0u+0x80260000u; // 800B25F4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B25F8
  c->r[4]=c->r[4]+0x00007754u; // 800B25FC
  c->r[4]=R32(c->r[4]+c->r[0]); // 800B2600
  c->ctr=c->r[4]; // 800B2604
  if (true) { switch (c->ctr) { case 0x800B260Cu: goto L_800B260C; case 0x800B2614u: goto L_800B2614; case 0x800B261Cu: goto L_800B261C; case 0x800B2624u: goto L_800B2624; case 0x800B262Cu: goto L_800B262C; case 0x800B2634u: goto L_800B2634; case 0x800B263Cu: goto L_800B263C; case 0x800B2644u: goto L_800B2644; default: break; } dispatch(c,c->ctr); return; } // 800B2608
L_800B260C:;
  c->r[31]=c->r[31]+0x000000D4u; // 800B260C
  goto L_800B2668; // 800B2610
L_800B2614:;
  c->r[31]=c->r[31]+0x000000F4u; // 800B2614
  goto L_800B2668; // 800B2618
L_800B261C:;
  c->r[31]=c->r[31]+0x00000110u; // 800B261C
  goto L_800B2668; // 800B2620
L_800B2624:;
  c->r[31]=c->r[31]+0x00000128u; // 800B2624
  goto L_800B2668; // 800B2628
L_800B262C:;
  c->r[31]=c->r[31]+0x00000158u; // 800B262C
  goto L_800B2668; // 800B2630
L_800B2634:;
  c->r[31]=c->r[31]+0x00000178u; // 800B2634
  goto L_800B2668; // 800B2638
L_800B263C:;
  c->r[31]=c->r[31]+0x000001A0u; // 800B263C
  goto L_800B2668; // 800B2640
L_800B2644:;
  c->r[4]=c->r[3]|c->r[3]; // 800B2644
  c->r[3]=c->r[31]+0x000001BCu; // 800B2648
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B264C
  c->lr=0x800B2654u; f_800ACBA4(c); // 800B2650
  c->r[3]=c->r[31]+0x00000000u; // 800B2654
  c->r[4]=0u+0x000003CBu; // 800B2658
  c->r[5]=c->r[13]+0xFFFF80F8u; // 800B265C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B2660
  c->lr=0x800B2668u; f_800ACC34(c); // 800B2664
L_800B2668:;
  c->r[4]=c->r[31]|c->r[31]; // 800B2668
  c->r[3]=0u+0x00000001u; // 800B266C
  c->r[5]=0u+0x00000000u; // 800B2670
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B2674
  c->lr=0x800B267Cu; f_800B7C24(c); // 800B2678
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B267C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2680
  c->lr=c->r[0]; // 800B2684
  c->r[1]=c->r[1]+0x00000010u; // 800B2688
  return; // 800B268C
}

// __OSReturnToMenuForError
void f_800B2690(Ctx* __restrict c) {
  trace_call(0x800B2690u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2690
  c->r[0]=c->lr; // 800B2694
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B2698
  c->r[3]=c->r[1]+0x00000008u; // 800B269C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B26A0
  c->r[31]=0u+0x80260000u; // 800B26A4
  c->r[31]=c->r[31]+0x00007568u; // 800B26A8
  c->lr=0x800B26B0u; f_800B5DF8(c); // 800B26AC
  c->r[3]=0u+0x00000002u; // 800B26B0
  c->r[0]=0u+0x00000003u; // 800B26B4
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800B26B8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800B26BC
  c->lr=0x800B26C4u; f_800B3154(c); // 800B26C0
  c->r[3]=c->r[1]+0x00000008u; // 800B26C4
  c->lr=0x800B26CCu; f_800B5D14(c); // 800B26C8
  c->lr=0x800B26D0u; f_800ADE5C(c); // 800B26CC
  c->lr=0x800B26D4u; f_800B35B4(c); // 800B26D0
  c->lr=0x800B26D8u; f_800C62BC(c); // 800B26D4
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800B26D8
  cmps(c,0,(int32_t)c->r[0],0); // 800B26DC
  if (!crb(c,2)) { goto L_800B26F0; } // 800B26E0
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800B26E4
  cmps(c,0,(int32_t)c->r[0],0); // 800B26E8
  if (crb(c,2)) { goto L_800B26F4; } // 800B26EC
L_800B26F0:;
  c->lr=0x800B26F4u; f_800B5140(c); // 800B26F0
L_800B26F4:;
  c->lr=0x800B26F8u; f_800B52D0(c); // 800B26F4
  c->r[3]=c->r[31]+0x00000000u; // 800B26F8
  c->r[5]=c->r[31]+0x0000000Cu; // 800B26FC
  c->r[4]=0u+0x0000040Au; // 800B2700
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B2704
  c->lr=0x800B270Cu; f_800ACC34(c); // 800B2708
  c->r[3]=c->r[31]+0x00000000u; // 800B270C
  c->r[5]=c->r[31]+0x00000038u; // 800B2710
  c->r[4]=0u+0x000003F2u; // 800B2714
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B2718
  c->lr=0x800B2720u; f_800ACC34(c); // 800B271C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B2720
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B2724
  c->lr=c->r[0]; // 800B2728
  c->r[1]=c->r[1]+0x00000030u; // 800B272C
  return; // 800B2730
}

// __OSHotResetForError
void f_800B2734(Ctx* __restrict c) {
  trace_call(0x800B2734u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2734
  c->r[0]=c->lr; // 800B2738
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B273C
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800B2740
  cmps(c,0,(int32_t)c->r[0],0); // 800B2744
  if (!crb(c,2)) { goto L_800B2758; } // 800B2748
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800B274C
  cmps(c,0,(int32_t)c->r[0],0); // 800B2750
  if (crb(c,2)) { goto L_800B275C; } // 800B2754
L_800B2758:;
  c->lr=0x800B275Cu; f_800B5140(c); // 800B2758
L_800B275C:;
  c->lr=0x800B2760u; f_800B52D0(c); // 800B275C
  c->r[3]=0u+0x80260000u; // 800B2760
  c->r[5]=0u+0x80260000u; // 800B2764
  c->r[3]=c->r[3]+0x00007568u; // 800B2768
  c->r[4]=0u+0x0000040Au; // 800B276C
  c->r[5]=c->r[5]+0x00007574u; // 800B2770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B2774
  c->lr=0x800B277Cu; f_800ACC34(c); // 800B2778
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B277C
  c->lr=c->r[0]; // 800B2780
  c->r[1]=c->r[1]+0x00000010u; // 800B2784
  return; // 800B2788
}

// OSGetResetCode
void f_800B278C(Ctx* __restrict c) {
  trace_call(0x800B278Cu);
  c->r[3]=0u+0x802B0000u; // 800B278C
  c->r[0]=R32(c->r[3]+0x00003980u); // 800B2790
  cmps(c,0,(int32_t)c->r[0],0); // 800B2794
  if (crb(c,2)) { goto L_800B27AC; } // 800B2798
  c->r[3]=c->r[3]+0x00003980u; // 800B279C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800B27A0
  c->r[3]=c->r[0]|0x80000000u; // 800B27A4
  return; // 800B27A8
L_800B27AC:;
  c->r[3]=0u+0xCC000000u; // 800B27AC
  c->r[0]=R32(c->r[3]+0x00003024u); // 800B27B0
  c->r[3]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800B27B4
  return; // 800B27B8
}

// OSResetSystem
void f_800B27BC(Ctx* __restrict c) {
  trace_call(0x800B27BCu);
  c->r[3]=0u+0x80260000u; // 800B27BC
  c->r[5]=0u+0x80260000u; // 800B27C0
  c->r[3]=c->r[3]+0x00007568u; // 800B27C4
  c->r[4]=0u+0x000004A1u; // 800B27C8
  c->r[5]=c->r[5]+0x00007774u; // 800B27CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B27D0
  f_800ACC34(c); return; // 800B27D4
}

// WriteSramCallback
void f_800B27D8(Ctx* __restrict c) {
  trace_call(0x800B27D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B27D8
  c->r[0]=c->lr; // 800B27DC
  c->r[6]=0u+0x802B0000u; // 800B27E0
  c->r[5]=0u+0x800B0000u; // 800B27E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B27E8
  c->r[6]=c->r[6]+0x00003D40u; // 800B27EC
  c->r[3]=0u+0x00000000u; // 800B27F0
  c->r[5]=c->r[5]+0x000027D8u; // 800B27F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B27F8
  c->r[4]=0u+0x00000001u; // 800B27FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B2800
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B2804
  c->r[31]=R32(c->r[6]+0x00000040u); // 800B2808
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 800B280C
  c->r[30]=c->r[6]+c->r[31]; // 800B2810
  c->lr=0x800B2818u; f_800E54F8(c); // 800B2814
  cmps(c,0,(int32_t)c->r[3],0); // 800B2818
  if (!crb(c,2)) { goto L_800B2828; } // 800B281C
  c->r[0]=0u+0x00000000u; // 800B2820
  goto L_800B28D8; // 800B2824
L_800B2828:;
  c->r[3]=0u+0x00000000u; // 800B2828
  c->r[4]=0u+0x00000001u; // 800B282C
  c->r[5]=0u+0x00000003u; // 800B2830
  c->lr=0x800B2838u; f_800E4D64(c); // 800B2834
  cmps(c,0,(int32_t)c->r[3],0); // 800B2838
  if (!crb(c,2)) { goto L_800B2850; } // 800B283C
  c->r[3]=0u+0x00000000u; // 800B2840
  c->lr=0x800B2848u; f_800E55F4(c); // 800B2844
  c->r[0]=0u+0x00000000u; // 800B2848
  goto L_800B28D8; // 800B284C
L_800B2850:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 800B2850
  c->r[4]=c->r[1]+0x00000008u; // 800B2854
  c->r[0]=c->r[3]+0x00000100u; // 800B2858
  c->r[5]=0u+0x00000004u; // 800B285C
  c->r[0]=c->r[0]|0xA0000000u; // 800B2860
  c->r[3]=0u+0x00000000u; // 800B2864
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B2868
  c->r[6]=0u+0x00000001u; // 800B286C
  c->r[7]=0u+0x00000000u; // 800B2870
  c->lr=0x800B2878u; f_800E42FC(c); // 800B2874
  c->r[0]=cntlz(c->r[3]); // 800B2878
  c->r[3]=0u+0x00000000u; // 800B287C
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2880
  c->lr=0x800B2888u; f_800E4714(c); // 800B2884
  c->r[0]=cntlz(c->r[3]); // 800B2888
  c->r[4]=c->r[30]|c->r[30]; // 800B288C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2890
  c->r[5]=c->r[29]|c->r[29]; // 800B2894
  c->r[29]=c->r[31]|c->r[0]; // 800B2898
  c->r[3]=0u+0x00000000u; // 800B289C
  c->r[6]=0u+0x00000001u; // 800B28A0
  c->lr=0x800B28A8u; f_800E4578(c); // 800B28A4
  c->r[0]=cntlz(c->r[3]); // 800B28A8
  c->r[3]=0u+0x00000000u; // 800B28AC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B28B0
  c->r[29]=c->r[29]|c->r[0]; // 800B28B4
  c->lr=0x800B28BCu; f_800E4E94(c); // 800B28B8
  c->r[0]=cntlz(c->r[3]); // 800B28BC
  c->r[3]=0u+0x00000000u; // 800B28C0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B28C4
  c->r[29]=c->r[29]|c->r[0]; // 800B28C8
  c->lr=0x800B28D0u; f_800E55F4(c); // 800B28CC
  c->r[0]=cntlz(c->r[29]); // 800B28D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B28D4
L_800B28D8:;
  c->r[3]=0u+0x802B0000u; // 800B28D8
  cmps(c,0,(int32_t)c->r[0],0); // 800B28DC
  c->r[3]=c->r[3]+0x00003D40u; // 800B28E0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800B28E4
  if (crb(c,2)) { goto L_800B28F4; } // 800B28E8
  c->r[0]=0u+0x00000040u; // 800B28EC
  W32(c->r[3]+0x00000040u,c->r[0]); // 800B28F0
L_800B28F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B28F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B28F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B28FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B2900
  c->lr=c->r[0]; // 800B2904
  c->r[1]=c->r[1]+0x00000020u; // 800B2908
  return; // 800B290C
}

// __OSInitSram
void f_800B2910(Ctx* __restrict c) {
  trace_call(0x800B2910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2910
  c->r[0]=c->lr; // 800B2914
  c->r[4]=0u+0x00000040u; // 800B2918
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B291C
  c->r[0]=0u+0x00000000u; // 800B2920
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B2924
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B2928
  c->r[30]=0u+0x802B0000u; // 800B292C
  c->r[30]=c->r[30]+0x00003D40u; // 800B2930
  W32(c->r[30]+0x00000044u,c->r[0]); // 800B2934
  c->r[3]=c->r[30]|c->r[30]; // 800B2938
  W32(c->r[30]+0x00000048u,c->r[0]); // 800B293C
  c->lr=0x800B2944u; f_800ABD00(c); // 800B2940
  c->r[3]=0u+0x00000000u; // 800B2944
  c->r[4]=0u+0x00000001u; // 800B2948
  c->r[5]=0u+0x00000000u; // 800B294C
  c->lr=0x800B2954u; f_800E54F8(c); // 800B2950
  cmps(c,0,(int32_t)c->r[3],0); // 800B2954
  if (!crb(c,2)) { goto L_800B2964; } // 800B2958
  c->r[3]=0u+0x00000000u; // 800B295C
  goto L_800B2A28; // 800B2960
L_800B2964:;
  c->r[3]=0u+0x00000000u; // 800B2964
  c->r[4]=0u+0x00000001u; // 800B2968
  c->r[5]=0u+0x00000003u; // 800B296C
  c->lr=0x800B2974u; f_800E4D64(c); // 800B2970
  cmps(c,0,(int32_t)c->r[3],0); // 800B2974
  if (!crb(c,2)) { goto L_800B298C; } // 800B2978
  c->r[3]=0u+0x00000000u; // 800B297C
  c->lr=0x800B2984u; f_800E55F4(c); // 800B2980
  c->r[3]=0u+0x00000000u; // 800B2984
  goto L_800B2A28; // 800B2988
L_800B298C:;
  c->r[3]=0u+0x20000000u; // 800B298C
  c->r[4]=c->r[1]+0x00000008u; // 800B2990
  c->r[0]=c->r[3]+0x00000100u; // 800B2994
  c->r[5]=0u+0x00000004u; // 800B2998
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B299C
  c->r[3]=0u+0x00000000u; // 800B29A0
  c->r[6]=0u+0x00000001u; // 800B29A4
  c->r[7]=0u+0x00000000u; // 800B29A8
  c->lr=0x800B29B0u; f_800E42FC(c); // 800B29AC
  c->r[0]=cntlz(c->r[3]); // 800B29B0
  c->r[3]=0u+0x00000000u; // 800B29B4
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B29B8
  c->lr=0x800B29C0u; f_800E4714(c); // 800B29BC
  c->r[0]=cntlz(c->r[3]); // 800B29C0
  c->r[4]=c->r[30]|c->r[30]; // 800B29C4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B29C8
  c->r[3]=0u+0x00000000u; // 800B29CC
  c->r[30]=c->r[31]|c->r[0]; // 800B29D0
  c->r[5]=0u+0x00000040u; // 800B29D4
  c->r[6]=0u+0x00000000u; // 800B29D8
  c->r[7]=0u+0x00000000u; // 800B29DC
  c->lr=0x800B29E4u; f_800E461C(c); // 800B29E0
  c->r[0]=cntlz(c->r[3]); // 800B29E4
  c->r[3]=0u+0x00000000u; // 800B29E8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B29EC
  c->r[30]=c->r[30]|c->r[0]; // 800B29F0
  c->lr=0x800B29F8u; f_800E4714(c); // 800B29F4
  c->r[0]=cntlz(c->r[3]); // 800B29F8
  c->r[3]=0u+0x00000000u; // 800B29FC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2A00
  c->r[30]=c->r[30]|c->r[0]; // 800B2A04
  c->lr=0x800B2A0Cu; f_800E4E94(c); // 800B2A08
  c->r[0]=cntlz(c->r[3]); // 800B2A0C
  c->r[3]=0u+0x00000000u; // 800B2A10
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2A14
  c->r[30]=c->r[30]|c->r[0]; // 800B2A18
  c->lr=0x800B2A20u; f_800E55F4(c); // 800B2A1C
  c->r[0]=cntlz(c->r[30]); // 800B2A20
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2A24
L_800B2A28:;
  c->r[31]=0u+0x802B0000u; // 800B2A28
  c->r[0]=0u+0x00000040u; // 800B2A2C
  c->r[31]=c->r[31]+0x00003D40u; // 800B2A30
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 800B2A34
  W32(c->r[31]+0x00000040u,c->r[0]); // 800B2A38
  c->lr=0x800B2A40u; f_800B087C(c); // 800B2A3C
  c->r[0]=R32(c->r[31]+0x00000048u); // 800B2A40
  cmps(c,0,(int32_t)c->r[0],0); // 800B2A44
  if (crb(c,2)) { goto L_800B2A58; } // 800B2A48
  c->lr=0x800B2A50u; f_800B08A4(c); // 800B2A4C
  c->r[3]=0u+0x00000000u; // 800B2A50
  goto L_800B2A68; // 800B2A54
L_800B2A58:;
  c->r[0]=0u+0x00000001u; // 800B2A58
  W32(c->r[31]+0x00000044u,c->r[3]); // 800B2A5C
  c->r[3]=c->r[31]+0x00000014u; // 800B2A60
  W32(c->r[31]+0x00000048u,c->r[0]); // 800B2A64
L_800B2A68:;
  c->r[30]=R16(c->r[3]+0x00000028u); // 800B2A68
  c->r[3]=0u+0x00000000u; // 800B2A6C
  c->r[4]=0u+0x00000014u; // 800B2A70
  c->lr=0x800B2A78u; f_800B2B10(c); // 800B2A74
  c->r[0]=rotl(c->r[30],0)&0x00007C00u; // 800B2A78
  cmpu(c,0,c->r[0],0x00005000u); // 800B2A7C
  if (crb(c,2)) { goto L_800B2A90; } // 800B2A80
  c->r[0]=rotl(c->r[30],0)&0x000000C0u; // 800B2A84
  cmpu(c,0,c->r[0],0x000000C0u); // 800B2A88
  if (!crb(c,2)) { goto L_800B2A94; } // 800B2A8C
L_800B2A90:;
  c->r[30]=0u+0x00000000u; // 800B2A90
L_800B2A94:;
  c->lr=0x800B2A98u; f_800B087C(c); // 800B2A94
  c->r[4]=0u+0x802B0000u; // 800B2A98
  c->r[4]=c->r[4]+0x00003D40u; // 800B2A9C
  c->r[0]=R32(c->r[4]+0x00000048u); // 800B2AA0
  cmps(c,0,(int32_t)c->r[0],0); // 800B2AA4
  if (crb(c,2)) { goto L_800B2AB8; } // 800B2AA8
  c->lr=0x800B2AB0u; f_800B08A4(c); // 800B2AAC
  c->r[5]=0u+0x00000000u; // 800B2AB0
  goto L_800B2AC8; // 800B2AB4
L_800B2AB8:;
  c->r[0]=0u+0x00000001u; // 800B2AB8
  W32(c->r[4]+0x00000044u,c->r[3]); // 800B2ABC
  c->r[5]=c->r[4]+0x00000014u; // 800B2AC0
  W32(c->r[4]+0x00000048u,c->r[0]); // 800B2AC4
L_800B2AC8:;
  c->r[0]=R16(c->r[5]+0x00000028u); // 800B2AC8
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 800B2ACC
  cmpu(c,0,c->r[3],c->r[0]); // 800B2AD0
  if (!crb(c,2)) { goto L_800B2AE8; } // 800B2AD4
  c->r[3]=0u+0x00000000u; // 800B2AD8
  c->r[4]=0u+0x00000014u; // 800B2ADC
  c->lr=0x800B2AE4u; f_800B2B10(c); // 800B2AE0
  goto L_800B2AF8; // 800B2AE4
L_800B2AE8:;
  W16(c->r[5]+0x00000028u,c->r[30]); // 800B2AE8
  c->r[3]=0u+0x00000001u; // 800B2AEC
  c->r[4]=0u+0x00000014u; // 800B2AF0
  c->lr=0x800B2AF8u; f_800B2B10(c); // 800B2AF4
L_800B2AF8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B2AF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B2AFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B2B00
  c->lr=c->r[0]; // 800B2B04
  c->r[1]=c->r[1]+0x00000020u; // 800B2B08
  return; // 800B2B0C
}

// UnlockSram
void f_800B2B10(Ctx* __restrict c) {
  trace_call(0x800B2B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2B10
  c->r[0]=c->lr; // 800B2B14
  cmps(c,0,(int32_t)c->r[3],0); // 800B2B18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B2B1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B2B20
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B2B24
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B2B28
  if (crb(c,2)) { goto L_800B2DB8; } // 800B2B2C
  cmps(c,0,(int32_t)c->r[4],0); // 800B2B30
  if (!crb(c,2)) { goto L_800B2C64; } // 800B2B34
  c->r[8]=0u+0x802B0000u; // 800B2B38
  c->r[8]=c->r[8]+0x00003D40u; // 800B2B3C
  c->r[3]=R8(c->r[8]+0x00000013u); // 800B2B40
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 800B2B44
  cmpu(c,0,c->r[0],0x00000002u); // 800B2B48
  if (!crb(c,1)) { goto L_800B2B58; } // 800B2B4C
  c->r[0]=rotl(c->r[3],0)&0x000000FCu; // 800B2B50
  W8(c->r[8]+0x00000013u,c->r[0]); // 800B2B54
L_800B2B58:;
  c->r[3]=0u+0x802B0000u; // 800B2B58
  c->r[0]=0u+0x00000000u; // 800B2B5C
  c->r[3]=c->r[3]+0x00003D40u; // 800B2B60
  c->r[7]=c->r[8]+0x0000000Cu; // 800B2B64
  c->r[5]=c->r[3]+0x00000014u; // 800B2B68
  W16(c->r[8]+0x00000002u,c->r[0]); // 800B2B6C
  c->r[3]=c->r[5]+0x00000001u; // 800B2B70
  c->r[3]=c->r[3]-c->r[7]; // 800B2B74
  cmpu(c,0,c->r[7],c->r[5]); // 800B2B78
  W16(c->r[8]+0x00000000u,c->r[0]); // 800B2B7C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800B2B80
  if (!crb(c,0)) { goto L_800B2C64; } // 800B2B84
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 800B2B88
  c->ctr=c->r[0]; // 800B2B8C
  if (crb(c,2)) { goto L_800B2C34; } // 800B2B90
L_800B2B94:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 800B2B94
  c->r[0]=R16(c->r[7]+0x00000000u); // 800B2B98
  c->r[5]=R16(c->r[8]+0x00000002u); // 800B2B9C
  c->r[0]=c->r[6]+c->r[0]; // 800B2BA0
  W16(c->r[8]+0x00000000u,c->r[0]); // 800B2BA4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800B2BA8
  c->r[0]=R16(c->r[7]+0x00000000u); // 800B2BAC
  c->r[0]=~(c->r[0]|c->r[0]); // 800B2BB0
  c->r[0]=c->r[5]+c->r[0]; // 800B2BB4
  W16(c->r[8]+0x00000002u,c->r[0]); // 800B2BB8
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800B2BBC
  c->r[0]=R16(c->r[7]+0x00000002u); // 800B2BC0
  c->r[0]=c->r[6]+c->r[0]; // 800B2BC4
  W16(c->r[8]+0x00000000u,c->r[0]); // 800B2BC8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800B2BCC
  c->r[0]=R16(c->r[7]+0x00000002u); // 800B2BD0
  c->r[0]=~(c->r[0]|c->r[0]); // 800B2BD4
  c->r[0]=c->r[5]+c->r[0]; // 800B2BD8
  W16(c->r[8]+0x00000002u,c->r[0]); // 800B2BDC
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800B2BE0
  c->r[0]=R16(c->r[7]+0x00000004u); // 800B2BE4
  c->r[0]=c->r[6]+c->r[0]; // 800B2BE8
  W16(c->r[8]+0x00000000u,c->r[0]); // 800B2BEC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800B2BF0
  c->r[0]=R16(c->r[7]+0x00000004u); // 800B2BF4
  c->r[0]=~(c->r[0]|c->r[0]); // 800B2BF8
  c->r[0]=c->r[5]+c->r[0]; // 800B2BFC
  W16(c->r[8]+0x00000002u,c->r[0]); // 800B2C00
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800B2C04
  c->r[0]=R16(c->r[7]+0x00000006u); // 800B2C08
  c->r[0]=c->r[6]+c->r[0]; // 800B2C0C
  W16(c->r[8]+0x00000000u,c->r[0]); // 800B2C10
  c->r[0]=R16(c->r[7]+0x00000006u); // 800B2C14
  c->r[7]=c->r[7]+0x00000008u; // 800B2C18
  c->r[0]=~(c->r[0]|c->r[0]); // 800B2C1C
  c->r[0]=c->r[5]+c->r[0]; // 800B2C20
  W16(c->r[8]+0x00000002u,c->r[0]); // 800B2C24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B2B94; } // 800B2C28
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 800B2C2C
  if (crb(c,2)) { goto L_800B2C64; } // 800B2C30
L_800B2C34:;
  c->ctr=c->r[3]; // 800B2C34
L_800B2C38:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 800B2C38
  c->r[0]=R16(c->r[7]+0x00000000u); // 800B2C3C
  c->r[5]=R16(c->r[8]+0x00000002u); // 800B2C40
  c->r[0]=c->r[6]+c->r[0]; // 800B2C44
  W16(c->r[8]+0x00000000u,c->r[0]); // 800B2C48
  c->r[0]=R16(c->r[7]+0x00000000u); // 800B2C4C
  c->r[7]=c->r[7]+0x00000002u; // 800B2C50
  c->r[0]=~(c->r[0]|c->r[0]); // 800B2C54
  c->r[0]=c->r[5]+c->r[0]; // 800B2C58
  W16(c->r[8]+0x00000002u,c->r[0]); // 800B2C5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B2C38; } // 800B2C60
L_800B2C64:;
  c->r[3]=0u+0x802B0000u; // 800B2C64
  c->r[3]=c->r[3]+0x00003D40u; // 800B2C68
  c->r[0]=R32(c->r[3]+0x00000040u); // 800B2C6C
  cmpu(c,0,c->r[4],c->r[0]); // 800B2C70
  if (!crb(c,0)) { goto L_800B2C7C; } // 800B2C74
  W32(c->r[3]+0x00000040u,c->r[4]); // 800B2C78
L_800B2C7C:;
  c->r[4]=0u+0x802B0000u; // 800B2C7C
  c->r[4]=c->r[4]+0x00003D40u; // 800B2C80
  c->r[0]=R32(c->r[4]+0x00000040u); // 800B2C84
  cmpu(c,0,c->r[0],0x00000014u); // 800B2C88
  if (crb(c,1)) { goto L_800B2CB4; } // 800B2C8C
  c->r[3]=R16(c->r[4]+0x0000003Cu); // 800B2C90
  c->r[0]=rotl(c->r[3],0)&0x00007C00u; // 800B2C94
  cmpu(c,0,c->r[0],0x00005000u); // 800B2C98
  if (crb(c,2)) { goto L_800B2CAC; } // 800B2C9C
  c->r[0]=rotl(c->r[3],0)&0x000000C0u; // 800B2CA0
  cmpu(c,0,c->r[0],0x000000C0u); // 800B2CA4
  if (!crb(c,2)) { goto L_800B2CB4; } // 800B2CA8
L_800B2CAC:;
  c->r[0]=0u+0x00000000u; // 800B2CAC
  W16(c->r[4]+0x0000003Cu,c->r[0]); // 800B2CB0
L_800B2CB4:;
  c->r[6]=0u+0x802B0000u; // 800B2CB4
  c->r[5]=0u+0x800B0000u; // 800B2CB8
  c->r[6]=c->r[6]+0x00003D40u; // 800B2CBC
  c->r[3]=0u+0x00000000u; // 800B2CC0
  c->r[31]=R32(c->r[6]+0x00000040u); // 800B2CC4
  c->r[5]=c->r[5]+0x000027D8u; // 800B2CC8
  c->r[4]=0u+0x00000001u; // 800B2CCC
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 800B2CD0
  c->r[30]=c->r[6]+c->r[31]; // 800B2CD4
  c->lr=0x800B2CDCu; f_800E54F8(c); // 800B2CD8
  cmps(c,0,(int32_t)c->r[3],0); // 800B2CDC
  if (!crb(c,2)) { goto L_800B2CEC; } // 800B2CE0
  c->r[0]=0u+0x00000000u; // 800B2CE4
  goto L_800B2D9C; // 800B2CE8
L_800B2CEC:;
  c->r[3]=0u+0x00000000u; // 800B2CEC
  c->r[4]=0u+0x00000001u; // 800B2CF0
  c->r[5]=0u+0x00000003u; // 800B2CF4
  c->lr=0x800B2CFCu; f_800E4D64(c); // 800B2CF8
  cmps(c,0,(int32_t)c->r[3],0); // 800B2CFC
  if (!crb(c,2)) { goto L_800B2D14; } // 800B2D00
  c->r[3]=0u+0x00000000u; // 800B2D04
  c->lr=0x800B2D0Cu; f_800E55F4(c); // 800B2D08
  c->r[0]=0u+0x00000000u; // 800B2D0C
  goto L_800B2D9C; // 800B2D10
L_800B2D14:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 800B2D14
  c->r[4]=c->r[1]+0x00000008u; // 800B2D18
  c->r[0]=c->r[3]+0x00000100u; // 800B2D1C
  c->r[5]=0u+0x00000004u; // 800B2D20
  c->r[0]=c->r[0]|0xA0000000u; // 800B2D24
  c->r[3]=0u+0x00000000u; // 800B2D28
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B2D2C
  c->r[6]=0u+0x00000001u; // 800B2D30
  c->r[7]=0u+0x00000000u; // 800B2D34
  c->lr=0x800B2D3Cu; f_800E42FC(c); // 800B2D38
  c->r[0]=cntlz(c->r[3]); // 800B2D3C
  c->r[3]=0u+0x00000000u; // 800B2D40
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2D44
  c->lr=0x800B2D4Cu; f_800E4714(c); // 800B2D48
  c->r[0]=cntlz(c->r[3]); // 800B2D4C
  c->r[4]=c->r[30]|c->r[30]; // 800B2D50
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2D54
  c->r[5]=c->r[29]|c->r[29]; // 800B2D58
  c->r[29]=c->r[31]|c->r[0]; // 800B2D5C
  c->r[3]=0u+0x00000000u; // 800B2D60
  c->r[6]=0u+0x00000001u; // 800B2D64
  c->lr=0x800B2D6Cu; f_800E4578(c); // 800B2D68
  c->r[0]=cntlz(c->r[3]); // 800B2D6C
  c->r[3]=0u+0x00000000u; // 800B2D70
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2D74
  c->r[29]=c->r[29]|c->r[0]; // 800B2D78
  c->lr=0x800B2D80u; f_800E4E94(c); // 800B2D7C
  c->r[0]=cntlz(c->r[3]); // 800B2D80
  c->r[3]=0u+0x00000000u; // 800B2D84
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2D88
  c->r[29]=c->r[29]|c->r[0]; // 800B2D8C
  c->lr=0x800B2D94u; f_800E55F4(c); // 800B2D90
  c->r[0]=cntlz(c->r[29]); // 800B2D94
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B2D98
L_800B2D9C:;
  c->r[3]=0u+0x802B0000u; // 800B2D9C
  cmps(c,0,(int32_t)c->r[0],0); // 800B2DA0
  c->r[3]=c->r[3]+0x00003D40u; // 800B2DA4
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800B2DA8
  if (crb(c,2)) { goto L_800B2DB8; } // 800B2DAC
  c->r[0]=0u+0x00000040u; // 800B2DB0
  W32(c->r[3]+0x00000040u,c->r[0]); // 800B2DB4
L_800B2DB8:;
  c->r[31]=0u+0x802B0000u; // 800B2DB8
  c->r[0]=0u+0x00000000u; // 800B2DBC
  c->r[31]=c->r[31]+0x00003D40u; // 800B2DC0
  W32(c->r[31]+0x00000048u,c->r[0]); // 800B2DC4
  c->r[3]=R32(c->r[31]+0x00000044u); // 800B2DC8
  c->lr=0x800B2DD0u; f_800B08A4(c); // 800B2DCC
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 800B2DD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B2DD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B2DD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B2DDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B2DE0
  c->lr=c->r[0]; // 800B2DE4
  c->r[1]=c->r[1]+0x00000020u; // 800B2DE8
  return; // 800B2DEC
}

// __OSSyncSram
void f_800B2DF0(Ctx* __restrict c) {
  trace_call(0x800B2DF0u);
  c->r[3]=0u+0x802B0000u; // 800B2DF0
  c->r[3]=c->r[3]+0x00003D40u; // 800B2DF4
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800B2DF8
  return; // 800B2DFC
}

void hle___OSReadROM(Ctx*);
// __OSReadROM
void f_800B2E00(Ctx* __restrict c) {
  hle___OSReadROM(c);
}

// OSGetWirelessID
void f_800B2F24(Ctx* __restrict c) {
  trace_call(0x800B2F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2F24
  c->r[0]=c->lr; // 800B2F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2F2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2F30
  c->r[31]=c->r[3]|c->r[3]; // 800B2F34
  c->lr=0x800B2F3Cu; f_800B087C(c); // 800B2F38
  c->r[4]=0u+0x802B0000u; // 800B2F3C
  c->r[4]=c->r[4]+0x00003D40u; // 800B2F40
  c->r[0]=R32(c->r[4]+0x00000048u); // 800B2F44
  cmps(c,0,(int32_t)c->r[0],0); // 800B2F48
  if (crb(c,2)) { goto L_800B2F5C; } // 800B2F4C
  c->lr=0x800B2F54u; f_800B08A4(c); // 800B2F50
  c->r[5]=0u+0x00000000u; // 800B2F54
  goto L_800B2F6C; // 800B2F58
L_800B2F5C:;
  c->r[0]=0u+0x00000001u; // 800B2F5C
  W32(c->r[4]+0x00000044u,c->r[3]); // 800B2F60
  c->r[5]=c->r[4]+0x00000014u; // 800B2F64
  W32(c->r[4]+0x00000048u,c->r[0]); // 800B2F68
L_800B2F6C:;
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800B2F6C
  c->r[3]=0u+0x00000000u; // 800B2F70
  c->r[5]=c->r[5]+c->r[0]; // 800B2F74
  c->r[4]=0u+0x00000014u; // 800B2F78
  c->r[31]=R16(c->r[5]+0x0000001Cu); // 800B2F7C
  c->lr=0x800B2F84u; f_800B2B10(c); // 800B2F80
  c->r[3]=c->r[31]|c->r[31]; // 800B2F84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2F88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2F8C
  c->lr=c->r[0]; // 800B2F90
  c->r[1]=c->r[1]+0x00000010u; // 800B2F94
  return; // 800B2F98
}

// OSSetWirelessID
void f_800B2F9C(Ctx* __restrict c) {
  trace_call(0x800B2F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2F9C
  c->r[0]=c->lr; // 800B2FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2FA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2FA8
  c->r[31]=c->r[4]|c->r[4]; // 800B2FAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B2FB0
  c->r[30]=c->r[3]|c->r[3]; // 800B2FB4
  c->lr=0x800B2FBCu; f_800B087C(c); // 800B2FB8
  c->r[4]=0u+0x802B0000u; // 800B2FBC
  c->r[4]=c->r[4]+0x00003D40u; // 800B2FC0
  c->r[0]=R32(c->r[4]+0x00000048u); // 800B2FC4
  cmps(c,0,(int32_t)c->r[0],0); // 800B2FC8
  if (crb(c,2)) { goto L_800B2FDC; } // 800B2FCC
  c->lr=0x800B2FD4u; f_800B08A4(c); // 800B2FD0
  c->r[3]=0u+0x00000000u; // 800B2FD4
  goto L_800B2FEC; // 800B2FD8
L_800B2FDC:;
  c->r[0]=0u+0x00000001u; // 800B2FDC
  W32(c->r[4]+0x00000044u,c->r[3]); // 800B2FE0
  c->r[3]=c->r[4]+0x00000014u; // 800B2FE4
  W32(c->r[4]+0x00000048u,c->r[0]); // 800B2FE8
L_800B2FEC:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800B2FEC
  c->r[3]=c->r[3]+c->r[0]; // 800B2FF0
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 800B2FF4
  cmpu(c,0,c->r[31],c->r[0]); // 800B2FF8
  if (crb(c,2)) { goto L_800B3014; } // 800B2FFC
  W16(c->r[3]+0x0000001Cu,c->r[31]); // 800B3000
  c->r[3]=0u+0x00000001u; // 800B3004
  c->r[4]=0u+0x00000014u; // 800B3008
  c->lr=0x800B3010u; f_800B2B10(c); // 800B300C
  goto L_800B3020; // 800B3010
L_800B3014:;
  c->r[3]=0u+0x00000000u; // 800B3014
  c->r[4]=0u+0x00000014u; // 800B3018
  c->lr=0x800B3020u; f_800B2B10(c); // 800B301C
L_800B3020:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3024
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B3028
  c->lr=c->r[0]; // 800B302C
  c->r[1]=c->r[1]+0x00000010u; // 800B3030
  return; // 800B3034
}

// __OSGetRTCFlags
void f_800B3038(Ctx* __restrict c) {
  trace_call(0x800B3038u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3038
  c->r[0]=c->lr; // 800B303C
  c->r[4]=0u+0x00000001u; // 800B3040
  c->r[5]=0u+0x00000000u; // 800B3044
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B3048
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B304C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B3050
  c->r[30]=c->r[3]|c->r[3]; // 800B3054
  c->r[3]=0u+0x00000000u; // 800B3058
  c->lr=0x800B3060u; f_800E54F8(c); // 800B305C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3060
  if (!crb(c,2)) { goto L_800B3070; } // 800B3064
  c->r[3]=0u+0x00000000u; // 800B3068
  goto L_800B313C; // 800B306C
L_800B3070:;
  c->r[3]=0u+0x00000000u; // 800B3070
  c->r[4]=0u+0x00000001u; // 800B3074
  c->r[5]=0u+0x00000003u; // 800B3078
  c->lr=0x800B3080u; f_800E4D64(c); // 800B307C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3080
  if (!crb(c,2)) { goto L_800B3098; } // 800B3084
  c->r[3]=0u+0x00000000u; // 800B3088
  c->lr=0x800B3090u; f_800E55F4(c); // 800B308C
  c->r[3]=0u+0x00000000u; // 800B3090
  goto L_800B313C; // 800B3094
L_800B3098:;
  c->r[3]=0u+0x21000000u; // 800B3098
  c->r[4]=c->r[1]+0x00000008u; // 800B309C
  c->r[0]=c->r[3]+0x00000800u; // 800B30A0
  c->r[5]=0u+0x00000004u; // 800B30A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B30A8
  c->r[3]=0u+0x00000000u; // 800B30AC
  c->r[6]=0u+0x00000001u; // 800B30B0
  c->r[7]=0u+0x00000000u; // 800B30B4
  c->lr=0x800B30BCu; f_800E42FC(c); // 800B30B8
  c->r[0]=cntlz(c->r[3]); // 800B30BC
  c->r[3]=0u+0x00000000u; // 800B30C0
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B30C4
  c->lr=0x800B30CCu; f_800E4714(c); // 800B30C8
  c->r[0]=cntlz(c->r[3]); // 800B30CC
  c->r[4]=c->r[1]+0x00000008u; // 800B30D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B30D4
  c->r[3]=0u+0x00000000u; // 800B30D8
  c->r[31]=c->r[31]|c->r[0]; // 800B30DC
  c->r[5]=0u+0x00000004u; // 800B30E0
  c->r[6]=0u+0x00000000u; // 800B30E4
  c->r[7]=0u+0x00000000u; // 800B30E8
  c->lr=0x800B30F0u; f_800E42FC(c); // 800B30EC
  c->r[0]=cntlz(c->r[3]); // 800B30F0
  c->r[3]=0u+0x00000000u; // 800B30F4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B30F8
  c->r[31]=c->r[31]|c->r[0]; // 800B30FC
  c->lr=0x800B3104u; f_800E4714(c); // 800B3100
  c->r[0]=cntlz(c->r[3]); // 800B3104
  c->r[3]=0u+0x00000000u; // 800B3108
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B310C
  c->r[31]=c->r[31]|c->r[0]; // 800B3110
  c->lr=0x800B3118u; f_800E4E94(c); // 800B3114
  c->r[0]=cntlz(c->r[3]); // 800B3118
  c->r[3]=0u+0x00000000u; // 800B311C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B3120
  c->r[31]=c->r[31]|c->r[0]; // 800B3124
  c->lr=0x800B312Cu; f_800E55F4(c); // 800B3128
  c->r[4]=R32(c->r[1]+0x00000008u); // 800B312C
  c->r[0]=cntlz(c->r[31]); // 800B3130
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B3134
  W32(c->r[30]+0x00000000u,c->r[4]); // 800B3138
L_800B313C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B313C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B3140
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B3144
  c->lr=c->r[0]; // 800B3148
  c->r[1]=c->r[1]+0x00000020u; // 800B314C
  return; // 800B3150
}

// __OSClearRTCFlags
void f_800B3154(Ctx* __restrict c) {
  trace_call(0x800B3154u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3154
  c->r[0]=c->lr; // 800B3158
  c->r[3]=0u+0x00000000u; // 800B315C
  c->r[4]=0u+0x00000001u; // 800B3160
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B3164
  c->r[0]=0u+0x00000000u; // 800B3168
  c->r[5]=0u+0x00000000u; // 800B316C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B3170
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B3174
  c->lr=0x800B317Cu; f_800E54F8(c); // 800B3178
  cmps(c,0,(int32_t)c->r[3],0); // 800B317C
  if (!crb(c,2)) { goto L_800B318C; } // 800B3180
  c->r[3]=0u+0x00000000u; // 800B3184
  goto L_800B3250; // 800B3188
L_800B318C:;
  c->r[3]=0u+0x00000000u; // 800B318C
  c->r[4]=0u+0x00000001u; // 800B3190
  c->r[5]=0u+0x00000003u; // 800B3194
  c->lr=0x800B319Cu; f_800E4D64(c); // 800B3198
  cmps(c,0,(int32_t)c->r[3],0); // 800B319C
  if (!crb(c,2)) { goto L_800B31B4; } // 800B31A0
  c->r[3]=0u+0x00000000u; // 800B31A4
  c->lr=0x800B31ACu; f_800E55F4(c); // 800B31A8
  c->r[3]=0u+0x00000000u; // 800B31AC
  goto L_800B3250; // 800B31B0
L_800B31B4:;
  c->r[3]=0u+0xA1000000u; // 800B31B4
  c->r[4]=c->r[1]+0x0000000Cu; // 800B31B8
  c->r[0]=c->r[3]+0x00000800u; // 800B31BC
  c->r[5]=0u+0x00000004u; // 800B31C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B31C4
  c->r[3]=0u+0x00000000u; // 800B31C8
  c->r[6]=0u+0x00000001u; // 800B31CC
  c->r[7]=0u+0x00000000u; // 800B31D0
  c->lr=0x800B31D8u; f_800E42FC(c); // 800B31D4
  c->r[0]=cntlz(c->r[3]); // 800B31D8
  c->r[3]=0u+0x00000000u; // 800B31DC
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B31E0
  c->lr=0x800B31E8u; f_800E4714(c); // 800B31E4
  c->r[0]=cntlz(c->r[3]); // 800B31E8
  c->r[4]=c->r[1]+0x00000008u; // 800B31EC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B31F0
  c->r[3]=0u+0x00000000u; // 800B31F4
  c->r[31]=c->r[31]|c->r[0]; // 800B31F8
  c->r[5]=0u+0x00000004u; // 800B31FC
  c->r[6]=0u+0x00000001u; // 800B3200
  c->r[7]=0u+0x00000000u; // 800B3204
  c->lr=0x800B320Cu; f_800E42FC(c); // 800B3208
  c->r[0]=cntlz(c->r[3]); // 800B320C
  c->r[3]=0u+0x00000000u; // 800B3210
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B3214
  c->r[31]=c->r[31]|c->r[0]; // 800B3218
  c->lr=0x800B3220u; f_800E4714(c); // 800B321C
  c->r[0]=cntlz(c->r[3]); // 800B3220
  c->r[3]=0u+0x00000000u; // 800B3224
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B3228
  c->r[31]=c->r[31]|c->r[0]; // 800B322C
  c->lr=0x800B3234u; f_800E4E94(c); // 800B3230
  c->r[0]=cntlz(c->r[3]); // 800B3234
  c->r[3]=0u+0x00000000u; // 800B3238
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B323C
  c->r[31]=c->r[31]|c->r[0]; // 800B3240
  c->lr=0x800B3248u; f_800E55F4(c); // 800B3244
  c->r[0]=cntlz(c->r[31]); // 800B3248
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B324C
L_800B3250:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B3250
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B3254
  c->lr=c->r[0]; // 800B3258
  c->r[1]=c->r[1]+0x00000020u; // 800B325C
  return; // 800B3260
}

// SystemCallVector
void f_800B3264(Ctx* __restrict c) {
  trace_call(0x800B3264u);
  c->r[9]=mfspr(c,1008); // 800B3264
  c->r[10]=c->r[9]|0x00000008u; // 800B3268
  mtspr(c,1008,c->r[10]); // 800B326C
  /* isync */ // 800B3270
  /* sync */ // 800B3274
  mtspr(c,1008,c->r[9]); // 800B3278
  return; /* rfi */ // 800B327C
  c->r[0]=c->r[0]|0x00000000u; // 800B3280
}

// __OSInitSystemCall
void f_800B3284(Ctx* __restrict c) {
  trace_call(0x800B3284u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3284
  c->r[0]=c->lr; // 800B3288
  c->r[4]=0u+0x800B0000u; // 800B328C
  c->r[5]=0u+0x800B0000u; // 800B3290
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3294
  c->r[4]=c->r[4]+0x00003264u; // 800B3298
  c->r[5]=c->r[5]+0x00003280u; // 800B329C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B32A0
  c->r[31]=0u+0x80000000u; // 800B32A4
  c->r[3]=c->r[31]+0x00000C00u; // 800B32A8
  c->r[5]=c->r[5]-c->r[4]; // 800B32AC
  c->lr=0x800B32B4u; f_80004338(c); // 800B32B0
  c->r[3]=c->r[31]+0x00000C00u; // 800B32B4
  c->r[4]=0u+0x00000100u; // 800B32B8
  c->lr=0x800B32C0u; f_800ABD8C(c); // 800B32BC
  /* sync */ // 800B32C0
  c->r[3]=c->r[31]+0x00000C00u; // 800B32C4
  c->r[4]=0u+0x00000100u; // 800B32C8
  c->lr=0x800B32D0u; f_800ABE10(c); // 800B32CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B32D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B32D4
  c->lr=c->r[0]; // 800B32D8
  c->r[1]=c->r[1]+0x00000010u; // 800B32DC
  return; // 800B32E0
}

// DefaultSwitchThreadCallback
void f_800B32E4(Ctx* __restrict c) {
  trace_call(0x800B32E4u);
  return; // 800B32E4
}

// __OSThreadInit
void f_800B32E8(Ctx* __restrict c) {
  trace_call(0x800B32E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B32E8
  c->r[0]=c->lr; // 800B32EC
  c->r[3]=0u+0x00000002u; // 800B32F0
  c->r[6]=0u+0x00000001u; // 800B32F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B32F8
  c->r[4]=0u+0x00000000u; // 800B32FC
  c->r[5]=0u+0x00000010u; // 800B3300
  c->r[0]=0u+0xFFFFFFFFu; // 800B3304
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B3308
  c->r[31]=0u+0x802B0000u; // 800B330C
  c->r[31]=c->r[31]+0x00003D98u; // 800B3310
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B3314
  c->r[30]=c->r[31]+0x00000000u; // 800B3318
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B331C
  c->r[29]=0u+0x80000000u; // 800B3320
  W16(c->r[30]+0x000002C8u,c->r[3]); // 800B3324
  c->r[3]=c->r[30]|c->r[30]; // 800B3328
  W16(c->r[30]+0x000002CAu,c->r[6]); // 800B332C
  W32(c->r[30]+0x000002D4u,c->r[5]); // 800B3330
  W32(c->r[30]+0x000002D0u,c->r[5]); // 800B3334
  W32(c->r[30]+0x000002CCu,c->r[4]); // 800B3338
  W32(c->r[30]+0x000002D8u,c->r[0]); // 800B333C
  W32(c->r[30]+0x000002F0u,c->r[4]); // 800B3340
  W32(c->r[30]+0x000002ECu,c->r[4]); // 800B3344
  W32(c->r[30]+0x000002E8u,c->r[4]); // 800B3348
  W32(c->r[30]+0x000002F8u,c->r[4]); // 800B334C
  W32(c->r[30]+0x000002F4u,c->r[4]); // 800B3350
  W32(c->r[29]+0x000000D8u,c->r[30]); // 800B3354
  c->lr=0x800B335Cu; f_800AC798(c); // 800B3358
  c->r[3]=c->r[30]|c->r[30]; // 800B335C
  c->lr=0x800B3364u; f_800AC570(c); // 800B3360
  c->r[4]=0u+0x80370000u; // 800B3364
  c->r[5]=0u+0x80360000u; // 800B3368
  c->r[4]=c->r[4]+0x00001610u; // 800B336C
  c->r[3]=0u+0xDEAE0000u; // 800B3370
  c->r[5]=c->r[5]+0x00001610u; // 800B3374
  W32(c->r[30]+0x00000304u,c->r[4]); // 800B3378
  c->r[0]=c->r[3]+0xFFFFBABEu; // 800B337C
  c->r[4]=c->r[30]|c->r[30]; // 800B3380
  W32(c->r[30]+0x00000308u,c->r[5]); // 800B3384
  W32(c->r[5]+0x00000000u,c->r[0]); // 800B3388
  c->r[12]=R32(c->r[13]+0xFFFF8100u); // 800B338C
  c->r[3]=R32(c->r[29]+0x000000E4u); // 800B3390
  c->ctr=c->r[12]; // 800B3394
  if (true) { c->lr=0x800B339Cu; dispatch(c,c->ctr); } // 800B3398
  W32(c->r[29]+0x000000E4u,c->r[30]); // 800B339C
  c->lr=0x800B33A4u; f_800AC730(c); // 800B33A0
  c->r[4]=R32(c->r[29]+0x000000E4u); // 800B33A4
  c->r[4]=R32(c->r[4]+0x00000308u); // 800B33A8
  c->r[8]=c->r[4]+0x00000004u; // 800B33AC
  cmpu(c,1,c->r[8],c->r[3]); // 800B33B0
  if (!crb(c,4)) { goto L_800B3474; } // 800B33B4
  c->r[5]=c->r[3]-c->r[8]; // 800B33B8
  c->r[6]=c->r[3]+0xFFFFFFE0u; // 800B33BC
  c->r[4]=c->r[5]+0x00000003u; // 800B33C0
  c->r[0]=sraw(c,c->r[4],2); // 800B33C4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800B33C8
  cmps(c,0,(int32_t)c->r[0],8); // 800B33CC
  if (!crb(c,1)) { goto L_800B344C; } // 800B33D0
  c->r[7]=0u+0x00000000u; // 800B33D4
  if (crb(c,5)) { goto L_800B3400; } // 800B33D8
  c->r[0]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[0]); // 800B33DC
  c->r[5]=0u+0x00000001u; // 800B33E0
  if (!crb(c,2)) { goto L_800B33F4; } // 800B33E4
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 800B33E8
  if (crb(c,2)) { goto L_800B33F4; } // 800B33EC
  c->r[5]=0u+0x00000000u; // 800B33F0
L_800B33F4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B33F4
  if (crb(c,2)) { goto L_800B3400; } // 800B33F8
  c->r[7]=0u+0x00000001u; // 800B33FC
L_800B3400:;
  cmps(c,0,(int32_t)c->r[7],0); // 800B3400
  if (crb(c,2)) { goto L_800B344C; } // 800B3404
  c->r[0]=c->r[6]+0x0000001Fu; // 800B3408
  c->r[4]=0u+0x00000000u; // 800B340C
  c->r[0]=c->r[0]-c->r[8]; // 800B3410
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B3414
  c->ctr=c->r[0]; // 800B3418
  cmpu(c,0,c->r[8],c->r[6]); // 800B341C
  if (!crb(c,0)) { goto L_800B344C; } // 800B3420
L_800B3424:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 800B3424
  W32(c->r[8]+0x00000004u,c->r[4]); // 800B3428
  W32(c->r[8]+0x00000008u,c->r[4]); // 800B342C
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 800B3430
  W32(c->r[8]+0x00000010u,c->r[4]); // 800B3434
  W32(c->r[8]+0x00000014u,c->r[4]); // 800B3438
  W32(c->r[8]+0x00000018u,c->r[4]); // 800B343C
  W32(c->r[8]+0x0000001Cu,c->r[4]); // 800B3440
  c->r[8]=c->r[8]+0x00000020u; // 800B3444
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B3424; } // 800B3448
L_800B344C:;
  c->r[0]=c->r[3]+0x00000003u; // 800B344C
  c->r[4]=0u+0x00000000u; // 800B3450
  c->r[0]=c->r[0]-c->r[8]; // 800B3454
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800B3458
  c->ctr=c->r[0]; // 800B345C
  cmpu(c,0,c->r[8],c->r[3]); // 800B3460
  if (!crb(c,0)) { goto L_800B3474; } // 800B3464
L_800B3468:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 800B3468
  c->r[8]=c->r[8]+0x00000004u; // 800B346C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B3468; } // 800B3470
L_800B3474:;
  c->r[3]=0u+0x00000000u; // 800B3474
  c->r[0]=0u+0x00000002u; // 800B3478
  W32(c->r[13]+0xFFFF8D10u,c->r[3]); // 800B347C
  c->r[4]=c->r[31]+0x00000318u; // 800B3480
  W32(c->r[13]+0xFFFF8D0Cu,c->r[3]); // 800B3484
  c->ctr=c->r[0]; // 800B3488
L_800B348C:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 800B348C
  W32(c->r[4]+0x00000000u,c->r[3]); // 800B3490
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800B3494
  W32(c->r[4]+0x00000008u,c->r[3]); // 800B3498
  W32(c->r[4]+0x00000014u,c->r[3]); // 800B349C
  W32(c->r[4]+0x00000010u,c->r[3]); // 800B34A0
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800B34A4
  W32(c->r[4]+0x00000018u,c->r[3]); // 800B34A8
  W32(c->r[4]+0x00000024u,c->r[3]); // 800B34AC
  W32(c->r[4]+0x00000020u,c->r[3]); // 800B34B0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800B34B4
  W32(c->r[4]+0x00000028u,c->r[3]); // 800B34B8
  W32(c->r[4]+0x00000034u,c->r[3]); // 800B34BC
  W32(c->r[4]+0x00000030u,c->r[3]); // 800B34C0
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 800B34C4
  W32(c->r[4]+0x00000038u,c->r[3]); // 800B34C8
  W32(c->r[4]+0x00000044u,c->r[3]); // 800B34CC
  W32(c->r[4]+0x00000040u,c->r[3]); // 800B34D0
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 800B34D4
  W32(c->r[4]+0x00000048u,c->r[3]); // 800B34D8
  W32(c->r[4]+0x00000054u,c->r[3]); // 800B34DC
  W32(c->r[4]+0x00000050u,c->r[3]); // 800B34E0
  W32(c->r[4]+0x0000005Cu,c->r[3]); // 800B34E4
  W32(c->r[4]+0x00000058u,c->r[3]); // 800B34E8
  W32(c->r[4]+0x00000064u,c->r[3]); // 800B34EC
  W32(c->r[4]+0x00000060u,c->r[3]); // 800B34F0
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 800B34F4
  W32(c->r[4]+0x00000068u,c->r[3]); // 800B34F8
  W32(c->r[4]+0x00000074u,c->r[3]); // 800B34FC
  W32(c->r[4]+0x00000070u,c->r[3]); // 800B3500
  W32(c->r[4]+0x0000007Cu,c->r[3]); // 800B3504
  W32(c->r[4]+0x00000078u,c->r[3]); // 800B3508
  c->r[4]=c->r[4]+0x00000080u; // 800B350C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B348C; } // 800B3510
  c->r[4]=0u+0x00000000u; // 800B3514
  c->r[3]=0u+0x80000000u; // 800B3518
  W32(c->r[3]+0x000000E0u,c->r[4]); // 800B351C
  W32(c->r[3]+0x000000DCu,c->r[4]); // 800B3520
  W32(c->r[3]+0x000000DCu,c->r[30]); // 800B3524
  goto L_800B3530; // 800B3528
  W32(c->r[4]+0x000002FCu,c->r[30]); // 800B352C
L_800B3530:;
  c->r[29]=0u+0x00000000u; // 800B3530
  W32(c->r[30]+0x00000300u,c->r[4]); // 800B3534
  c->r[4]=0u+0x80000000u; // 800B3538
  c->r[3]=c->r[31]+0x00000418u; // 800B353C
  W32(c->r[30]+0x000002FCu,c->r[29]); // 800B3540
  W32(c->r[4]+0x000000E0u,c->r[30]); // 800B3544
  c->lr=0x800B354Cu; f_800AC798(c); // 800B3548
  W32(c->r[13]+0xFFFF8D08u,c->r[29]); // 800B354C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B3550
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B3554
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B3558
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B355C
  c->lr=c->r[0]; // 800B3560
  c->r[1]=c->r[1]+0x00000020u; // 800B3564
  return; // 800B3568
}

// OSInitThreadQueue
void f_800B356C(Ctx* __restrict c) {
  trace_call(0x800B356Cu);
  c->r[0]=0u+0x00000000u; // 800B356C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B3570
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B3574
  return; // 800B3578
}

// OSGetCurrentThread
void f_800B357C(Ctx* __restrict c) {
  trace_call(0x800B357Cu);
  c->r[3]=0u+0x80000000u; // 800B357C
  c->r[3]=R32(c->r[3]+0x000000E4u); // 800B3580
  return; // 800B3584
}

// OSIsThreadTerminated
void f_800B3588(Ctx* __restrict c) {
  trace_call(0x800B3588u);
  c->r[0]=R16(c->r[3]+0x000002C8u); // 800B3588
  c->r[3]=0u+0x00000001u; // 800B358C
  cmpu(c,0,c->r[0],0x00000008u); // 800B3590
  if (crb(c,2)) { goto L_800B35A4; } // 800B3594
  cmps(c,0,(int32_t)c->r[0],0); // 800B3598
  if (crb(c,2)) { goto L_800B35A4; } // 800B359C
  c->r[3]=0u+0x00000000u; // 800B35A0
L_800B35A4:;
  c->r[0]=0u-c->r[3]; // 800B35A4
  c->r[0]=c->r[0]|c->r[3]; // 800B35A8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B35AC
  return; // 800B35B0
}

// OSDisableScheduler
void f_800B35B4(Ctx* __restrict c) {
  trace_call(0x800B35B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B35B4
  c->r[0]=c->lr; // 800B35B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B35BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B35C0
  c->lr=0x800B35C8u; f_800B087C(c); // 800B35C4
  c->r[31]=R32(c->r[13]+0xFFFF8D08u); // 800B35C8
  c->r[0]=c->r[31]+0x00000001u; // 800B35CC
  W32(c->r[13]+0xFFFF8D08u,c->r[0]); // 800B35D0
  c->lr=0x800B35D8u; f_800B08A4(c); // 800B35D4
  c->r[3]=c->r[31]|c->r[31]; // 800B35D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B35DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B35E0
  c->lr=c->r[0]; // 800B35E4
  c->r[1]=c->r[1]+0x00000010u; // 800B35E8
  return; // 800B35EC
}

// OSEnableScheduler
void f_800B35F0(Ctx* __restrict c) {
  trace_call(0x800B35F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B35F0
  c->r[0]=c->lr; // 800B35F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B35F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B35FC
  c->lr=0x800B3604u; f_800B087C(c); // 800B3600
  c->r[31]=R32(c->r[13]+0xFFFF8D08u); // 800B3604
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800B3608
  W32(c->r[13]+0xFFFF8D08u,c->r[0]); // 800B360C
  c->lr=0x800B3614u; f_800B08A4(c); // 800B3610
  c->r[3]=c->r[31]|c->r[31]; // 800B3614
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3618
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B361C
  c->lr=c->r[0]; // 800B3620
  c->r[1]=c->r[1]+0x00000010u; // 800B3624
  return; // 800B3628
}

// UnsetRun
void f_800B362C(Ctx* __restrict c) {
  trace_call(0x800B362Cu);
  c->r[5]=R32(c->r[3]+0x000002E0u); // 800B362C
  c->r[4]=R32(c->r[3]+0x000002DCu); // 800B3630
  cmps(c,0,(int32_t)c->r[5],0); // 800B3634
  c->r[6]=R32(c->r[3]+0x000002E4u); // 800B3638
  if (!crb(c,2)) { goto L_800B3648; } // 800B363C
  W32(c->r[4]+0x00000004u,c->r[6]); // 800B3640
  goto L_800B364C; // 800B3644
L_800B3648:;
  W32(c->r[5]+0x000002E4u,c->r[6]); // 800B3648
L_800B364C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800B364C
  if (!crb(c,2)) { goto L_800B365C; } // 800B3650
  W32(c->r[4]+0x00000000u,c->r[5]); // 800B3654
  goto L_800B3660; // 800B3658
L_800B365C:;
  W32(c->r[6]+0x000002E0u,c->r[5]); // 800B365C
L_800B3660:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800B3660
  cmps(c,0,(int32_t)c->r[0],0); // 800B3664
  if (!crb(c,2)) { goto L_800B3688; } // 800B3668
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800B366C
  c->r[4]=0u+0x00000001u; // 800B3670
  c->r[5]=R32(c->r[13]+0xFFFF8D10u); // 800B3674
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800B3678
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800B367C
  c->r[0]=c->r[5]&~c->r[0]; // 800B3680
  W32(c->r[13]+0xFFFF8D10u,c->r[0]); // 800B3684
L_800B3688:;
  c->r[0]=0u+0x00000000u; // 800B3688
  W32(c->r[3]+0x000002DCu,c->r[0]); // 800B368C
  return; // 800B3690
}

// __OSGetEffectivePriority
void f_800B3694(Ctx* __restrict c) {
  trace_call(0x800B3694u);
  c->r[4]=R32(c->r[3]+0x000002D4u); // 800B3694
  c->r[3]=R32(c->r[3]+0x000002F4u); // 800B3698
  goto L_800B36C0; // 800B369C
L_800B36A0:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 800B36A0
  cmps(c,0,(int32_t)c->r[5],0); // 800B36A4
  if (crb(c,2)) { goto L_800B36BC; } // 800B36A8
  c->r[0]=R32(c->r[5]+0x000002D0u); // 800B36AC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800B36B0
  if (!crb(c,0)) { goto L_800B36BC; } // 800B36B4
  c->r[4]=c->r[0]|c->r[0]; // 800B36B8
L_800B36BC:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 800B36BC
L_800B36C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800B36C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800B36A0; } // 800B36C4
  c->r[3]=c->r[4]|c->r[4]; // 800B36C8
  return; // 800B36CC
}

// SetEffectivePriority
void f_800B36D0(Ctx* __restrict c) {
  trace_call(0x800B36D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B36D0
  c->r[0]=c->lr; // 800B36D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B36D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B36DC
  c->r[31]=c->r[4]|c->r[4]; // 800B36E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B36E4
  c->r[30]=c->r[3]|c->r[3]; // 800B36E8
  c->r[0]=R16(c->r[3]+0x000002C8u); // 800B36EC
  cmps(c,0,(int32_t)c->r[0],3); // 800B36F0
  if (crb(c,2)) { goto L_800B3868; } // 800B36F4
  if (!crb(c,0)) { goto L_800B370C; } // 800B36F8
  cmps(c,0,(int32_t)c->r[0],1); // 800B36FC
  if (crb(c,2)) { goto L_800B3718; } // 800B3700
  if (!crb(c,0)) { goto L_800B385C; } // 800B3704
  goto L_800B3868; // 800B3708
L_800B370C:;
  cmps(c,0,(int32_t)c->r[0],5); // 800B370C
  if (!crb(c,0)) { goto L_800B3868; } // 800B3710
  goto L_800B3784; // 800B3714
L_800B3718:;
  c->lr=0x800B371Cu; f_800B362C(c); // 800B3718
  c->r[3]=0u+0x802B0000u; // 800B371C
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 800B3720
  c->r[3]=c->r[3]+0x000040B0u; // 800B3724
  W32(c->r[30]+0x000002D0u,c->r[31]); // 800B3728
  c->r[3]=c->r[3]+c->r[0]; // 800B372C
  W32(c->r[30]+0x000002DCu,c->r[3]); // 800B3730
  c->r[4]=R32(c->r[3]+0x00000004u); // 800B3734
  cmps(c,0,(int32_t)c->r[4],0); // 800B3738
  if (!crb(c,2)) { goto L_800B3748; } // 800B373C
  W32(c->r[3]+0x00000000u,c->r[30]); // 800B3740
  goto L_800B374C; // 800B3744
L_800B3748:;
  W32(c->r[4]+0x000002E0u,c->r[30]); // 800B3748
L_800B374C:;
  c->r[0]=0u+0x00000000u; // 800B374C
  W32(c->r[30]+0x000002E4u,c->r[4]); // 800B3750
  c->r[4]=R32(c->r[30]+0x000002DCu); // 800B3754
  c->r[3]=0u+0x00000001u; // 800B3758
  W32(c->r[30]+0x000002E0u,c->r[0]); // 800B375C
  W32(c->r[4]+0x00000004u,c->r[30]); // 800B3760
  c->r[0]=R32(c->r[30]+0x000002D0u); // 800B3764
  c->r[4]=R32(c->r[13]+0xFFFF8D10u); // 800B3768
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800B376C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800B3770
  c->r[0]=c->r[4]|c->r[0]; // 800B3774
  W32(c->r[13]+0xFFFF8D10u,c->r[0]); // 800B3778
  W32(c->r[13]+0xFFFF8D0Cu,c->r[3]); // 800B377C
  goto L_800B3868; // 800B3780
L_800B3784:;
  c->r[6]=R32(c->r[3]+0x000002E0u); // 800B3784
  c->r[7]=R32(c->r[3]+0x000002E4u); // 800B3788
  cmps(c,0,(int32_t)c->r[6],0); // 800B378C
  if (!crb(c,2)) { goto L_800B37A0; } // 800B3790
  c->r[5]=R32(c->r[3]+0x000002DCu); // 800B3794
  W32(c->r[5]+0x00000004u,c->r[7]); // 800B3798
  goto L_800B37A4; // 800B379C
L_800B37A0:;
  W32(c->r[6]+0x000002E4u,c->r[7]); // 800B37A0
L_800B37A4:;
  cmps(c,0,(int32_t)c->r[7],0); // 800B37A4
  if (!crb(c,2)) { goto L_800B37B8; } // 800B37A8
  c->r[5]=R32(c->r[3]+0x000002DCu); // 800B37AC
  W32(c->r[5]+0x00000000u,c->r[6]); // 800B37B0
  goto L_800B37BC; // 800B37B4
L_800B37B8:;
  W32(c->r[7]+0x000002E0u,c->r[6]); // 800B37B8
L_800B37BC:;
  W32(c->r[3]+0x000002D0u,c->r[4]); // 800B37BC
  c->r[5]=R32(c->r[3]+0x000002DCu); // 800B37C0
  c->r[6]=R32(c->r[5]+0x00000000u); // 800B37C4
  goto L_800B37D0; // 800B37C8
L_800B37CC:;
  c->r[6]=R32(c->r[6]+0x000002E0u); // 800B37CC
L_800B37D0:;
  cmps(c,0,(int32_t)c->r[6],0); // 800B37D0
  if (crb(c,2)) { goto L_800B37E8; } // 800B37D4
  c->r[4]=R32(c->r[6]+0x000002D0u); // 800B37D8
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800B37DC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B37E0
  if (!crb(c,1)) { IRQCHK(c); goto L_800B37CC; } // 800B37E4
L_800B37E8:;
  cmps(c,0,(int32_t)c->r[6],0); // 800B37E8
  if (!crb(c,2)) { goto L_800B3820; } // 800B37EC
  c->r[4]=R32(c->r[5]+0x00000004u); // 800B37F0
  cmps(c,0,(int32_t)c->r[4],0); // 800B37F4
  if (!crb(c,2)) { goto L_800B3804; } // 800B37F8
  W32(c->r[5]+0x00000000u,c->r[3]); // 800B37FC
  goto L_800B3808; // 800B3800
L_800B3804:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 800B3804
L_800B3808:;
  c->r[0]=0u+0x00000000u; // 800B3808
  W32(c->r[3]+0x000002E4u,c->r[4]); // 800B380C
  c->r[4]=R32(c->r[3]+0x000002DCu); // 800B3810
  W32(c->r[3]+0x000002E0u,c->r[0]); // 800B3814
  W32(c->r[4]+0x00000004u,c->r[3]); // 800B3818
  goto L_800B3848; // 800B381C
L_800B3820:;
  W32(c->r[3]+0x000002E0u,c->r[6]); // 800B3820
  c->r[4]=R32(c->r[6]+0x000002E4u); // 800B3824
  W32(c->r[6]+0x000002E4u,c->r[3]); // 800B3828
  cmps(c,0,(int32_t)c->r[4],0); // 800B382C
  W32(c->r[3]+0x000002E4u,c->r[4]); // 800B3830
  if (!crb(c,2)) { goto L_800B3844; } // 800B3834
  c->r[4]=R32(c->r[3]+0x000002DCu); // 800B3838
  W32(c->r[4]+0x00000000u,c->r[3]); // 800B383C
  goto L_800B3848; // 800B3840
L_800B3844:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 800B3844
L_800B3848:;
  c->r[3]=R32(c->r[3]+0x000002F0u); // 800B3848
  cmps(c,0,(int32_t)c->r[3],0); // 800B384C
  if (crb(c,2)) { goto L_800B3868; } // 800B3850
  c->r[3]=R32(c->r[3]+0x00000008u); // 800B3854
  goto L_800B386C; // 800B3858
L_800B385C:;
  c->r[0]=0u+0x00000001u; // 800B385C
  W32(c->r[13]+0xFFFF8D0Cu,c->r[0]); // 800B3860
  W32(c->r[3]+0x000002D0u,c->r[4]); // 800B3864
L_800B3868:;
  c->r[3]=0u+0x00000000u; // 800B3868
L_800B386C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B386C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3870
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B3874
  c->lr=c->r[0]; // 800B3878
  c->r[1]=c->r[1]+0x00000010u; // 800B387C
  return; // 800B3880
}

// __OSPromoteThread
void f_800B3884(Ctx* __restrict c) {
  trace_call(0x800B3884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3884
  c->r[0]=c->lr; // 800B3888
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B388C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3890
  c->r[31]=c->r[4]|c->r[4]; // 800B3894
L_800B3898:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 800B3898
  cmps(c,0,(int32_t)c->r[0],0); // 800B389C
  if (crb(c,1)) { goto L_800B38C0; } // 800B38A0
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800B38A4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 800B38A8
  if (!crb(c,1)) { goto L_800B38C0; } // 800B38AC
  c->r[4]=c->r[31]|c->r[31]; // 800B38B0
  c->lr=0x800B38B8u; f_800B36D0(c); // 800B38B4
  cmps(c,0,(int32_t)c->r[3],0); // 800B38B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800B3898; } // 800B38BC
L_800B38C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B38C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B38C4
  c->lr=c->r[0]; // 800B38C8
  c->r[1]=c->r[1]+0x00000010u; // 800B38CC
  return; // 800B38D0
}

// SelectThread
void f_800B38D4(Ctx* __restrict c) {
  trace_call(0x800B38D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B38D4
  c->r[0]=c->lr; // 800B38D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B38DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B38E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B38E4
  c->r[30]=c->r[3]|c->r[3]; // 800B38E8
  c->r[0]=R32(c->r[13]+0xFFFF8D08u); // 800B38EC
  cmps(c,0,(int32_t)c->r[0],0); // 800B38F0
  if (!crb(c,1)) { goto L_800B3900; } // 800B38F4
  c->r[3]=0u+0x00000000u; // 800B38F8
  goto L_800B3AE4; // 800B38FC
L_800B3900:;
  c->lr=0x800B3904u; f_800AC5CC(c); // 800B3900
  c->r[4]=0u+0x80000000u; // 800B3904
  c->r[5]=R32(c->r[4]+0x000000E4u); // 800B3908
  cmpu(c,0,c->r[3],c->r[5]); // 800B390C
  if (crb(c,2)) { goto L_800B391C; } // 800B3910
  c->r[3]=0u+0x00000000u; // 800B3914
  goto L_800B3AE4; // 800B3918
L_800B391C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B391C
  if (crb(c,2)) { goto L_800B39E4; } // 800B3920
  c->r[0]=R16(c->r[5]+0x000002C8u); // 800B3924
  cmpu(c,0,c->r[0],0x00000002u); // 800B3928
  if (!crb(c,2)) { goto L_800B39C0; } // 800B392C
  cmps(c,0,(int32_t)c->r[30],0); // 800B3930
  if (!crb(c,2)) { goto L_800B3954; } // 800B3934
  c->r[3]=R32(c->r[13]+0xFFFF8D10u); // 800B3938
  c->r[0]=R32(c->r[5]+0x000002D0u); // 800B393C
  c->r[3]=cntlz(c->r[3]); // 800B3940
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800B3944
  if (crb(c,1)) { goto L_800B3954; } // 800B3948
  c->r[3]=0u+0x00000000u; // 800B394C
  goto L_800B3AE4; // 800B3950
L_800B3954:;
  c->r[0]=0u+0x00000001u; // 800B3954
  c->r[3]=0u+0x802B0000u; // 800B3958
  W16(c->r[5]+0x000002C8u,c->r[0]); // 800B395C
  c->r[3]=c->r[3]+0x000040B0u; // 800B3960
  c->r[0]=R32(c->r[5]+0x000002D0u); // 800B3964
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B3968
  c->r[3]=c->r[3]+c->r[0]; // 800B396C
  W32(c->r[5]+0x000002DCu,c->r[3]); // 800B3970
  c->r[4]=R32(c->r[3]+0x00000004u); // 800B3974
  cmps(c,0,(int32_t)c->r[4],0); // 800B3978
  if (!crb(c,2)) { goto L_800B3988; } // 800B397C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800B3980
  goto L_800B398C; // 800B3984
L_800B3988:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 800B3988
L_800B398C:;
  W32(c->r[5]+0x000002E4u,c->r[4]); // 800B398C
  c->r[0]=0u+0x00000000u; // 800B3990
  c->r[3]=0u+0x00000001u; // 800B3994
  W32(c->r[5]+0x000002E0u,c->r[0]); // 800B3998
  c->r[4]=R32(c->r[5]+0x000002DCu); // 800B399C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800B39A0
  c->r[0]=R32(c->r[5]+0x000002D0u); // 800B39A4
  c->r[4]=R32(c->r[13]+0xFFFF8D10u); // 800B39A8
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800B39AC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800B39B0
  c->r[0]=c->r[4]|c->r[0]; // 800B39B4
  W32(c->r[13]+0xFFFF8D10u,c->r[0]); // 800B39B8
  W32(c->r[13]+0xFFFF8D0Cu,c->r[3]); // 800B39BC
L_800B39C0:;
  c->r[0]=R16(c->r[5]+0x000001A2u); // 800B39C0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800B39C4
  if (!crb(c,2)) { goto L_800B39E4; } // 800B39C8
  c->r[3]=c->r[5]|c->r[5]; // 800B39CC
  c->lr=0x800B39D4u; f_800AC5D8(c); // 800B39D0
  cmps(c,0,(int32_t)c->r[3],0); // 800B39D4
  if (crb(c,2)) { goto L_800B39E4; } // 800B39D8
  c->r[3]=0u+0x00000000u; // 800B39DC
  goto L_800B3AE4; // 800B39E0
L_800B39E4:;
  c->r[0]=R32(c->r[13]+0xFFFF8D10u); // 800B39E4
  cmps(c,0,(int32_t)c->r[0],0); // 800B39E8
  if (!crb(c,2)) { goto L_800B3A48; } // 800B39EC
  c->r[12]=R32(c->r[13]+0xFFFF8100u); // 800B39F0
  c->r[31]=0u+0x80000000u; // 800B39F4
  c->r[3]=R32(c->r[31]+0x000000E4u); // 800B39F8
  c->r[4]=0u+0x00000000u; // 800B39FC
  c->ctr=c->r[12]; // 800B3A00
  if (true) { c->lr=0x800B3A08u; dispatch(c,c->ctr); } // 800B3A04
  c->r[0]=0u+0x00000000u; // 800B3A08
  c->r[3]=0u+0x802B0000u; // 800B3A0C
  W32(c->r[31]+0x000000E4u,c->r[0]); // 800B3A10
  c->r[3]=c->r[3]+0x000041B0u; // 800B3A14
  c->lr=0x800B3A1Cu; f_800AC570(c); // 800B3A18
L_800B3A1C:;
  c->lr=0x800B3A20u; f_800B0890(c); // 800B3A1C
L_800B3A20:;
  c->r[0]=R32(c->r[13]+0xFFFF8D10u); // 800B3A20
  cmps(c,0,(int32_t)c->r[0],0); // 800B3A24
  if (crb(c,2)) { IDLEWAIT(c); goto L_800B3A20; } // 800B3A28
  c->lr=0x800B3A30u; f_800B087C(c); // 800B3A2C
  c->r[0]=R32(c->r[13]+0xFFFF8D10u); // 800B3A30
  cmps(c,0,(int32_t)c->r[0],0); // 800B3A34
  if (crb(c,2)) { IRQCHK(c); goto L_800B3A1C; } // 800B3A38
  c->r[3]=0u+0x802B0000u; // 800B3A3C
  c->r[3]=c->r[3]+0x000041B0u; // 800B3A40
  c->lr=0x800B3A48u; f_800AC798(c); // 800B3A44
L_800B3A48:;
  c->r[4]=0u+0x00000000u; // 800B3A48
  c->r[3]=0u+0x802B0000u; // 800B3A4C
  W32(c->r[13]+0xFFFF8D0Cu,c->r[4]); // 800B3A50
  c->r[3]=c->r[3]+0x000040B0u; // 800B3A54
  c->r[0]=R32(c->r[13]+0xFFFF8D10u); // 800B3A58
  c->r[5]=cntlz(c->r[0]); // 800B3A5C
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800B3A60
  {uint32_t ea=c->r[3]+c->r[0]; c->r[30]=R32(ea); c->r[3]=ea;} // 800B3A64
  c->r[6]=R32(c->r[30]+0x000002E0u); // 800B3A68
  cmps(c,0,(int32_t)c->r[6],0); // 800B3A6C
  if (!crb(c,2)) { goto L_800B3A7C; } // 800B3A70
  W32(c->r[3]+0x00000004u,c->r[4]); // 800B3A74
  goto L_800B3A80; // 800B3A78
L_800B3A7C:;
  W32(c->r[6]+0x000002E4u,c->r[4]); // 800B3A7C
L_800B3A80:;
  cmps(c,0,(int32_t)c->r[6],0); // 800B3A80
  W32(c->r[3]+0x00000000u,c->r[6]); // 800B3A84
  if (!crb(c,2)) { goto L_800B3AA4; } // 800B3A88
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 800B3A8C
  c->r[3]=0u+0x00000001u; // 800B3A90
  c->r[4]=R32(c->r[13]+0xFFFF8D10u); // 800B3A94
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800B3A98
  c->r[0]=c->r[4]&~c->r[0]; // 800B3A9C
  W32(c->r[13]+0xFFFF8D10u,c->r[0]); // 800B3AA0
L_800B3AA4:;
  c->r[3]=0u+0x00000000u; // 800B3AA4
  c->r[0]=0u+0x00000002u; // 800B3AA8
  W32(c->r[30]+0x000002DCu,c->r[3]); // 800B3AAC
  c->r[31]=0u+0x80000000u; // 800B3AB0
  c->r[4]=c->r[30]|c->r[30]; // 800B3AB4
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800B3AB8
  c->r[12]=R32(c->r[13]+0xFFFF8100u); // 800B3ABC
  c->r[3]=R32(c->r[31]+0x000000E4u); // 800B3AC0
  c->ctr=c->r[12]; // 800B3AC4
  if (true) { c->lr=0x800B3ACCu; dispatch(c,c->ctr); } // 800B3AC8
  W32(c->r[31]+0x000000E4u,c->r[30]); // 800B3ACC
  c->r[3]=c->r[30]|c->r[30]; // 800B3AD0
  c->lr=0x800B3AD8u; f_800AC570(c); // 800B3AD4
  c->r[3]=c->r[30]|c->r[30]; // 800B3AD8
  c->lr=0x800B3AE0u; f_800AC658(c); // 800B3ADC
  c->r[3]=c->r[30]|c->r[30]; // 800B3AE0
L_800B3AE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3AE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3AE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B3AEC
  c->lr=c->r[0]; // 800B3AF0
  c->r[1]=c->r[1]+0x00000010u; // 800B3AF4
  return; // 800B3AF8
}

// __OSReschedule
void f_800B3AFC(Ctx* __restrict c) {
  trace_call(0x800B3AFCu);
  c->r[0]=R32(c->r[13]+0xFFFF8D0Cu); // 800B3AFC
  cmps(c,0,(int32_t)c->r[0],0); // 800B3B00
  if (crb(c,2)) return; // 800B3B04
  c->r[3]=0u+0x00000000u; // 800B3B08
  f_800B38D4(c); return; // 800B3B0C
  return; // 800B3B10
}

// OSYieldThread
void f_800B3B14(Ctx* __restrict c) {
  trace_call(0x800B3B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3B14
  c->r[0]=c->lr; // 800B3B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3B20
  c->lr=0x800B3B28u; f_800B087C(c); // 800B3B24
  c->r[31]=c->r[3]|c->r[3]; // 800B3B28
  c->r[3]=0u+0x00000001u; // 800B3B2C
  c->lr=0x800B3B34u; f_800B38D4(c); // 800B3B30
  c->r[3]=c->r[31]|c->r[31]; // 800B3B34
  c->lr=0x800B3B3Cu; f_800B08A4(c); // 800B3B38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3B3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3B40
  c->lr=c->r[0]; // 800B3B44
  c->r[1]=c->r[1]+0x00000010u; // 800B3B48
  return; // 800B3B4C
}

// OSCreateThread
void f_800B3B50(Ctx* __restrict c) {
  trace_call(0x800B3B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3B50
  c->r[0]=c->lr; // 800B3B54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B3B58
  c->r[11]=c->r[1]+0x00000020u; // 800B3B5C
  c->lr=0x800B3B64u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B3B60
  cmps(c,0,(int32_t)c->r[8],0); // 800B3B64
  c->r[31]=c->r[3]|c->r[3]; // 800B3B68
  c->r[26]=c->r[5]|c->r[5]; // 800B3B6C
  c->r[27]=c->r[6]|c->r[6]; // 800B3B70
  c->r[28]=c->r[7]|c->r[7]; // 800B3B74
  if (crb(c,0)) { goto L_800B3B84; } // 800B3B78
  cmps(c,0,(int32_t)c->r[8],31); // 800B3B7C
  if (!crb(c,1)) { goto L_800B3B8C; } // 800B3B80
L_800B3B84:;
  c->r[3]=0u+0x00000000u; // 800B3B84
  goto L_800B3DA4; // 800B3B88
L_800B3B8C:;
  c->r[30]=0u+0x00000000u; // 800B3B8C
  c->r[7]=0u+0x00000001u; // 800B3B90
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 800B3B94
  c->r[29]=0u+0xFFFFFFFFu; // 800B3B98
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFF8u; // 800B3B9C
  W16(c->r[3]+0x000002C8u,c->r[7]); // 800B3BA0
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 800B3BA4
  W16(c->r[3]+0x000002CAu,c->r[0]); // 800B3BA8
  W32(c->r[3]+0x000002D4u,c->r[8]); // 800B3BAC
  W32(c->r[3]+0x000002D0u,c->r[8]); // 800B3BB0
  W32(c->r[3]+0x000002CCu,c->r[7]); // 800B3BB4
  W32(c->r[3]+0x000002D8u,c->r[29]); // 800B3BB8
  W32(c->r[3]+0x000002F0u,c->r[30]); // 800B3BBC
  W32(c->r[3]+0x000002ECu,c->r[30]); // 800B3BC0
  W32(c->r[3]+0x000002E8u,c->r[30]); // 800B3BC4
  W32(c->r[3]+0x000002F8u,c->r[30]); // 800B3BC8
  W32(c->r[3]+0x000002F4u,c->r[30]); // 800B3BCC
  W32(c->r[6]+0xFFFFFFF8u,c->r[30]); // 800B3BD0
  W32(c->r[6]+0xFFFFFFFCu,c->r[30]); // 800B3BD4
  c->lr=0x800B3BDCu; f_800AC7BC(c); // 800B3BD8
  c->r[5]=0u+0x800B0000u; // 800B3BDC
  c->r[4]=c->r[27]-c->r[28]; // 800B3BE0
  c->r[5]=c->r[5]+0x00003DBCu; // 800B3BE4
  c->r[3]=0u+0xDEAE0000u; // 800B3BE8
  W32(c->r[31]+0x00000084u,c->r[5]); // 800B3BEC
  c->r[0]=c->r[3]+0xFFFFBABEu; // 800B3BF0
  W32(c->r[31]+0x0000000Cu,c->r[26]); // 800B3BF4
  W32(c->r[31]+0x00000304u,c->r[27]); // 800B3BF8
  W32(c->r[31]+0x00000308u,c->r[4]); // 800B3BFC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800B3C00
  W32(c->r[31]+0x0000030Cu,c->r[30]); // 800B3C04
  W32(c->r[31]+0x00000310u,c->r[30]); // 800B3C08
  W32(c->r[31]+0x00000314u,c->r[30]); // 800B3C0C
  c->lr=0x800B3C14u; f_800B087C(c); // 800B3C10
  c->r[4]=0u+0x802B0000u; // 800B3C14
  c->r[4]=c->r[4]+0x000039F0u; // 800B3C18
  c->r[0]=R32(c->r[4]+0x00000040u); // 800B3C1C
  cmps(c,0,(int32_t)c->r[0],0); // 800B3C20
  if (crb(c,2)) { goto L_800B3D6C; } // 800B3C24
  c->r[5]=R32(c->r[31]+0x0000019Cu); // 800B3C28
  c->r[0]=0u+0x00000002u; // 800B3C2C
  c->r[4]=R16(c->r[31]+0x000001A2u); // 800B3C30
  c->r[6]=c->r[31]+0x00000090u; // 800B3C34
  c->r[5]=c->r[5]|0x00000900u; // 800B3C38
  c->r[7]=c->r[31]+0x000001C8u; // 800B3C3C
  c->r[4]=c->r[4]|0x00000001u; // 800B3C40
  W32(c->r[31]+0x0000019Cu,c->r[5]); // 800B3C44
  W16(c->r[31]+0x000001A2u,c->r[4]); // 800B3C48
  c->r[4]=R32(c->r[13]+0xFFFF80D0u); // 800B3C4C
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 800B3C50
  c->r[4]=c->r[4]|0x00000004u; // 800B3C54
  W32(c->r[31]+0x00000194u,c->r[4]); // 800B3C58
  c->ctr=c->r[0]; // 800B3C5C
L_800B3C60:;
  W32(c->r[6]+0x00000004u,c->r[29]); // 800B3C60
  W32(c->r[6]+0x00000000u,c->r[29]); // 800B3C64
  W32(c->r[7]+0x00000004u,c->r[29]); // 800B3C68
  W32(c->r[7]+0x00000000u,c->r[29]); // 800B3C6C
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 800B3C70
  W32(c->r[6]+0x00000008u,c->r[29]); // 800B3C74
  W32(c->r[7]+0x0000000Cu,c->r[29]); // 800B3C78
  W32(c->r[7]+0x00000008u,c->r[29]); // 800B3C7C
  W32(c->r[6]+0x00000014u,c->r[29]); // 800B3C80
  W32(c->r[6]+0x00000010u,c->r[29]); // 800B3C84
  W32(c->r[7]+0x00000014u,c->r[29]); // 800B3C88
  W32(c->r[7]+0x00000010u,c->r[29]); // 800B3C8C
  W32(c->r[6]+0x0000001Cu,c->r[29]); // 800B3C90
  W32(c->r[6]+0x00000018u,c->r[29]); // 800B3C94
  W32(c->r[7]+0x0000001Cu,c->r[29]); // 800B3C98
  W32(c->r[7]+0x00000018u,c->r[29]); // 800B3C9C
  W32(c->r[6]+0x00000024u,c->r[29]); // 800B3CA0
  W32(c->r[6]+0x00000020u,c->r[29]); // 800B3CA4
  W32(c->r[7]+0x00000024u,c->r[29]); // 800B3CA8
  W32(c->r[7]+0x00000020u,c->r[29]); // 800B3CAC
  W32(c->r[6]+0x0000002Cu,c->r[29]); // 800B3CB0
  W32(c->r[6]+0x00000028u,c->r[29]); // 800B3CB4
  W32(c->r[7]+0x0000002Cu,c->r[29]); // 800B3CB8
  W32(c->r[7]+0x00000028u,c->r[29]); // 800B3CBC
  W32(c->r[6]+0x00000034u,c->r[29]); // 800B3CC0
  W32(c->r[6]+0x00000030u,c->r[29]); // 800B3CC4
  W32(c->r[7]+0x00000034u,c->r[29]); // 800B3CC8
  W32(c->r[7]+0x00000030u,c->r[29]); // 800B3CCC
  W32(c->r[6]+0x0000003Cu,c->r[29]); // 800B3CD0
  W32(c->r[6]+0x00000038u,c->r[29]); // 800B3CD4
  W32(c->r[7]+0x0000003Cu,c->r[29]); // 800B3CD8
  W32(c->r[7]+0x00000038u,c->r[29]); // 800B3CDC
  W32(c->r[6]+0x00000044u,c->r[29]); // 800B3CE0
  W32(c->r[6]+0x00000040u,c->r[29]); // 800B3CE4
  W32(c->r[7]+0x00000044u,c->r[29]); // 800B3CE8
  W32(c->r[7]+0x00000040u,c->r[29]); // 800B3CEC
  W32(c->r[6]+0x0000004Cu,c->r[29]); // 800B3CF0
  W32(c->r[6]+0x00000048u,c->r[29]); // 800B3CF4
  W32(c->r[7]+0x0000004Cu,c->r[29]); // 800B3CF8
  W32(c->r[7]+0x00000048u,c->r[29]); // 800B3CFC
  W32(c->r[6]+0x00000054u,c->r[29]); // 800B3D00
  W32(c->r[6]+0x00000050u,c->r[29]); // 800B3D04
  W32(c->r[7]+0x00000054u,c->r[29]); // 800B3D08
  W32(c->r[7]+0x00000050u,c->r[29]); // 800B3D0C
  W32(c->r[6]+0x0000005Cu,c->r[29]); // 800B3D10
  W32(c->r[6]+0x00000058u,c->r[29]); // 800B3D14
  W32(c->r[7]+0x0000005Cu,c->r[29]); // 800B3D18
  W32(c->r[7]+0x00000058u,c->r[29]); // 800B3D1C
  W32(c->r[6]+0x00000064u,c->r[29]); // 800B3D20
  W32(c->r[6]+0x00000060u,c->r[29]); // 800B3D24
  W32(c->r[7]+0x00000064u,c->r[29]); // 800B3D28
  W32(c->r[7]+0x00000060u,c->r[29]); // 800B3D2C
  W32(c->r[6]+0x0000006Cu,c->r[29]); // 800B3D30
  W32(c->r[6]+0x00000068u,c->r[29]); // 800B3D34
  W32(c->r[7]+0x0000006Cu,c->r[29]); // 800B3D38
  W32(c->r[7]+0x00000068u,c->r[29]); // 800B3D3C
  W32(c->r[6]+0x00000074u,c->r[29]); // 800B3D40
  W32(c->r[6]+0x00000070u,c->r[29]); // 800B3D44
  W32(c->r[7]+0x00000074u,c->r[29]); // 800B3D48
  W32(c->r[7]+0x00000070u,c->r[29]); // 800B3D4C
  W32(c->r[6]+0x0000007Cu,c->r[29]); // 800B3D50
  W32(c->r[6]+0x00000078u,c->r[29]); // 800B3D54
  c->r[6]=c->r[6]+0x00000080u; // 800B3D58
  W32(c->r[7]+0x0000007Cu,c->r[29]); // 800B3D5C
  W32(c->r[7]+0x00000078u,c->r[29]); // 800B3D60
  c->r[7]=c->r[7]+0x00000080u; // 800B3D64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B3C60; } // 800B3D68
L_800B3D6C:;
  c->r[4]=0u+0x80000000u; // 800B3D6C
  c->r[5]=R32(c->r[4]+0x000000E0u); // 800B3D70
  cmps(c,0,(int32_t)c->r[5],0); // 800B3D74
  if (!crb(c,2)) { goto L_800B3D84; } // 800B3D78
  W32(c->r[4]+0x000000DCu,c->r[31]); // 800B3D7C
  goto L_800B3D88; // 800B3D80
L_800B3D84:;
  W32(c->r[5]+0x000002FCu,c->r[31]); // 800B3D84
L_800B3D88:;
  c->r[0]=0u+0x00000000u; // 800B3D88
  W32(c->r[31]+0x00000300u,c->r[5]); // 800B3D8C
  c->r[4]=0u+0x80000000u; // 800B3D90
  W32(c->r[31]+0x000002FCu,c->r[0]); // 800B3D94
  W32(c->r[4]+0x000000E0u,c->r[31]); // 800B3D98
  c->lr=0x800B3DA0u; f_800B08A4(c); // 800B3D9C
  c->r[3]=0u+0x00000001u; // 800B3DA0
L_800B3DA4:;
  c->r[11]=c->r[1]+0x00000020u; // 800B3DA4
  c->lr=0x800B3DACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3DA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B3DAC
  c->lr=c->r[0]; // 800B3DB0
  c->r[1]=c->r[1]+0x00000020u; // 800B3DB4
  return; // 800B3DB8
}

void f_800B3DBC_orig(Ctx* __restrict c);
// OSExitThread
void f_800B3DBC_orig(Ctx* __restrict c) {
  trace_call(0x800B3DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3DBC
  c->r[0]=c->lr; // 800B3DC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B3DC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B3DC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B3DCC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B3DD0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B3DD4
  c->r[28]=c->r[3]|c->r[3]; // 800B3DD8
  c->lr=0x800B3DE0u; f_800B087C(c); // 800B3DDC
  c->r[31]=0u+0x80000000u; // 800B3DE0
  c->r[29]=c->r[3]|c->r[3]; // 800B3DE4
  c->r[30]=R32(c->r[31]+0x000000E4u); // 800B3DE8
  c->r[3]=c->r[30]|c->r[30]; // 800B3DEC
  c->lr=0x800B3DF4u; f_800AC798(c); // 800B3DF0
  c->r[0]=R16(c->r[30]+0x000002CAu); // 800B3DF4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800B3DF8
  if (crb(c,2)) { goto L_800B3E40; } // 800B3DFC
  c->r[4]=R32(c->r[30]+0x000002FCu); // 800B3E00
  c->r[3]=R32(c->r[30]+0x00000300u); // 800B3E04
  cmps(c,0,(int32_t)c->r[4],0); // 800B3E08
  if (!crb(c,2)) { goto L_800B3E18; } // 800B3E0C
  W32(c->r[31]+0x000000E0u,c->r[3]); // 800B3E10
  goto L_800B3E1C; // 800B3E14
L_800B3E18:;
  W32(c->r[4]+0x00000300u,c->r[3]); // 800B3E18
L_800B3E1C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800B3E1C
  if (!crb(c,2)) { goto L_800B3E30; } // 800B3E20
  c->r[3]=0u+0x80000000u; // 800B3E24
  W32(c->r[3]+0x000000DCu,c->r[4]); // 800B3E28
  goto L_800B3E34; // 800B3E2C
L_800B3E30:;
  W32(c->r[3]+0x000002FCu,c->r[4]); // 800B3E30
L_800B3E34:;
  c->r[0]=0u+0x00000000u; // 800B3E34
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800B3E38
  goto L_800B3E4C; // 800B3E3C
L_800B3E40:;
  c->r[0]=0u+0x00000008u; // 800B3E40
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800B3E44
  W32(c->r[30]+0x000002D8u,c->r[28]); // 800B3E48
L_800B3E4C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B3E4C
  c->lr=0x800B3E54u; f_800B1C00(c); // 800B3E50
  c->r[3]=c->r[30]+0x000002E8u; // 800B3E54
  c->lr=0x800B3E5Cu; f_800B46D8(c); // 800B3E58
  c->r[0]=0u+0x00000001u; // 800B3E5C
  W32(c->r[13]+0xFFFF8D0Cu,c->r[0]); // 800B3E60
  c->r[0]=R32(c->r[13]+0xFFFF8D0Cu); // 800B3E64
  cmps(c,0,(int32_t)c->r[0],0); // 800B3E68
  if (crb(c,2)) { goto L_800B3E78; } // 800B3E6C
  c->r[3]=0u+0x00000000u; // 800B3E70
  c->lr=0x800B3E78u; f_800B38D4(c); // 800B3E74
L_800B3E78:;
  c->r[3]=c->r[29]|c->r[29]; // 800B3E78
  c->lr=0x800B3E80u; f_800B08A4(c); // 800B3E7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B3E80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B3E84
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B3E88
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B3E8C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B3E90
  c->lr=c->r[0]; // 800B3E94
  c->r[1]=c->r[1]+0x00000020u; // 800B3E98
  return; // 800B3E9C
}
void hle_wrap_OSExitThread(Ctx*, GuestFn);
void f_800B3DBC(Ctx* __restrict c) { hle_wrap_OSExitThread(c, f_800B3DBC_orig); }

// OSCancelThread
void f_800B3EA0(Ctx* __restrict c) {
  trace_call(0x800B3EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3EA0
  c->r[0]=c->lr; // 800B3EA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3EA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3EAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B3EB0
  c->r[30]=c->r[3]|c->r[3]; // 800B3EB4
  c->lr=0x800B3EBCu; f_800B087C(c); // 800B3EB8
  c->r[31]=c->r[3]|c->r[3]; // 800B3EBC
  c->r[3]=c->r[30]|c->r[30]; // 800B3EC0
  c->lr=0x800B3EC8u; f_800AB3F4(c); // 800B3EC4
  c->r[0]=R16(c->r[30]+0x000002C8u); // 800B3EC8
  cmps(c,0,(int32_t)c->r[0],3); // 800B3ECC
  if (crb(c,2)) { goto L_800B3FD0; } // 800B3ED0
  if (!crb(c,0)) { goto L_800B3EE8; } // 800B3ED4
  cmps(c,0,(int32_t)c->r[0],1); // 800B3ED8
  if (crb(c,2)) { goto L_800B3EF4; } // 800B3EDC
  if (!crb(c,0)) { goto L_800B3F0C; } // 800B3EE0
  goto L_800B3FD0; // 800B3EE4
L_800B3EE8:;
  cmps(c,0,(int32_t)c->r[0],5); // 800B3EE8
  if (!crb(c,0)) { goto L_800B3FD0; } // 800B3EEC
  goto L_800B3F18; // 800B3EF0
L_800B3EF4:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 800B3EF4
  cmps(c,0,(int32_t)c->r[0],0); // 800B3EF8
  if (crb(c,1)) { goto L_800B3FDC; } // 800B3EFC
  c->r[3]=c->r[30]|c->r[30]; // 800B3F00
  c->lr=0x800B3F08u; f_800B362C(c); // 800B3F04
  goto L_800B3FDC; // 800B3F08
L_800B3F0C:;
  c->r[0]=0u+0x00000001u; // 800B3F0C
  W32(c->r[13]+0xFFFF8D0Cu,c->r[0]); // 800B3F10
  goto L_800B3FDC; // 800B3F14
L_800B3F18:;
  c->r[4]=R32(c->r[30]+0x000002E0u); // 800B3F18
  c->r[5]=R32(c->r[30]+0x000002E4u); // 800B3F1C
  cmps(c,0,(int32_t)c->r[4],0); // 800B3F20
  if (!crb(c,2)) { goto L_800B3F34; } // 800B3F24
  c->r[3]=R32(c->r[30]+0x000002DCu); // 800B3F28
  W32(c->r[3]+0x00000004u,c->r[5]); // 800B3F2C
  goto L_800B3F38; // 800B3F30
L_800B3F34:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 800B3F34
L_800B3F38:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B3F38
  if (!crb(c,2)) { goto L_800B3F4C; } // 800B3F3C
  c->r[3]=R32(c->r[30]+0x000002DCu); // 800B3F40
  W32(c->r[3]+0x00000000u,c->r[4]); // 800B3F44
  goto L_800B3F50; // 800B3F48
L_800B3F4C:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 800B3F4C
L_800B3F50:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 800B3F50
  c->r[3]=0u+0x00000000u; // 800B3F54
  W32(c->r[30]+0x000002DCu,c->r[3]); // 800B3F58
  cmps(c,0,(int32_t)c->r[0],0); // 800B3F5C
  if (crb(c,1)) { goto L_800B3FDC; } // 800B3F60
  c->r[3]=R32(c->r[30]+0x000002F0u); // 800B3F64
  cmps(c,0,(int32_t)c->r[3],0); // 800B3F68
  if (crb(c,2)) { goto L_800B3FDC; } // 800B3F6C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800B3F70
L_800B3F74:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 800B3F74
  cmps(c,0,(int32_t)c->r[0],0); // 800B3F78
  if (crb(c,1)) { goto L_800B3FDC; } // 800B3F7C
  c->r[4]=R32(c->r[3]+0x000002D4u); // 800B3F80
  c->r[5]=R32(c->r[3]+0x000002F4u); // 800B3F84
  goto L_800B3FAC; // 800B3F88
L_800B3F8C:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 800B3F8C
  cmps(c,0,(int32_t)c->r[6],0); // 800B3F90
  if (crb(c,2)) { goto L_800B3FA8; } // 800B3F94
  c->r[0]=R32(c->r[6]+0x000002D0u); // 800B3F98
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800B3F9C
  if (!crb(c,0)) { goto L_800B3FA8; } // 800B3FA0
  c->r[4]=c->r[0]|c->r[0]; // 800B3FA4
L_800B3FA8:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 800B3FA8
L_800B3FAC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B3FAC
  if (!crb(c,2)) { IRQCHK(c); goto L_800B3F8C; } // 800B3FB0
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800B3FB4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800B3FB8
  if (crb(c,2)) { goto L_800B3FDC; } // 800B3FBC
  c->lr=0x800B3FC4u; f_800B36D0(c); // 800B3FC0
  cmps(c,0,(int32_t)c->r[3],0); // 800B3FC4
  if (!crb(c,2)) { IRQCHK(c); goto L_800B3F74; } // 800B3FC8
  goto L_800B3FDC; // 800B3FCC
L_800B3FD0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B3FD0
  c->lr=0x800B3FD8u; f_800B08A4(c); // 800B3FD4
  goto L_800B4068; // 800B3FD8
L_800B3FDC:;
  c->r[3]=c->r[30]|c->r[30]; // 800B3FDC
  c->lr=0x800B3FE4u; f_800AC798(c); // 800B3FE0
  c->r[0]=R16(c->r[30]+0x000002CAu); // 800B3FE4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800B3FE8
  if (crb(c,2)) { goto L_800B4034; } // 800B3FEC
  c->r[4]=R32(c->r[30]+0x000002FCu); // 800B3FF0
  c->r[5]=R32(c->r[30]+0x00000300u); // 800B3FF4
  cmps(c,0,(int32_t)c->r[4],0); // 800B3FF8
  if (!crb(c,2)) { goto L_800B400C; } // 800B3FFC
  c->r[3]=0u+0x80000000u; // 800B4000
  W32(c->r[3]+0x000000E0u,c->r[5]); // 800B4004
  goto L_800B4010; // 800B4008
L_800B400C:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 800B400C
L_800B4010:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B4010
  if (!crb(c,2)) { goto L_800B4024; } // 800B4014
  c->r[3]=0u+0x80000000u; // 800B4018
  W32(c->r[3]+0x000000DCu,c->r[4]); // 800B401C
  goto L_800B4028; // 800B4020
L_800B4024:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 800B4024
L_800B4028:;
  c->r[0]=0u+0x00000000u; // 800B4028
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800B402C
  goto L_800B403C; // 800B4030
L_800B4034:;
  c->r[0]=0u+0x00000008u; // 800B4034
  W16(c->r[30]+0x000002C8u,c->r[0]); // 800B4038
L_800B403C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B403C
  c->lr=0x800B4044u; f_800B1C00(c); // 800B4040
  c->r[3]=c->r[30]+0x000002E8u; // 800B4044
  c->lr=0x800B404Cu; f_800B46D8(c); // 800B4048
  c->r[0]=R32(c->r[13]+0xFFFF8D0Cu); // 800B404C
  cmps(c,0,(int32_t)c->r[0],0); // 800B4050
  if (crb(c,2)) { goto L_800B4060; } // 800B4054
  c->r[3]=0u+0x00000000u; // 800B4058
  c->lr=0x800B4060u; f_800B38D4(c); // 800B405C
L_800B4060:;
  c->r[3]=c->r[31]|c->r[31]; // 800B4060
  c->lr=0x800B4068u; f_800B08A4(c); // 800B4064
L_800B4068:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4068
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B406C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B4070
  c->lr=c->r[0]; // 800B4074
  c->r[1]=c->r[1]+0x00000010u; // 800B4078
  return; // 800B407C
}

// OSJoinThread
void f_800B4080(Ctx* __restrict c) {
  trace_call(0x800B4080u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4080
  c->r[0]=c->lr; // 800B4084
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4088
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B408C
  c->r[31]=c->r[3]|c->r[3]; // 800B4090
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4094
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B4098
  c->r[29]=c->r[4]|c->r[4]; // 800B409C
  c->lr=0x800B40A4u; f_800B087C(c); // 800B40A0
  c->r[0]=R16(c->r[31]+0x000002CAu); // 800B40A4
  c->r[30]=c->r[3]|c->r[3]; // 800B40A8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800B40AC
  if (!crb(c,2)) { goto L_800B412C; } // 800B40B0
  c->r[0]=R16(c->r[31]+0x000002C8u); // 800B40B4
  cmpu(c,0,c->r[0],0x00000008u); // 800B40B8
  if (crb(c,2)) { goto L_800B412C; } // 800B40BC
  c->r[0]=R32(c->r[31]+0x000002E8u); // 800B40C0
  cmps(c,0,(int32_t)c->r[0],0); // 800B40C4
  if (!crb(c,2)) { goto L_800B412C; } // 800B40C8
  c->r[3]=c->r[31]+0x000002E8u; // 800B40CC
  c->lr=0x800B40D4u; f_800B45EC(c); // 800B40D0
  c->r[0]=R16(c->r[31]+0x000002C8u); // 800B40D4
  cmps(c,0,(int32_t)c->r[0],0); // 800B40D8
  if (!crb(c,2)) { goto L_800B40E8; } // 800B40DC
  c->r[0]=0u+0x00000000u; // 800B40E0
  goto L_800B4114; // 800B40E4
L_800B40E8:;
  c->r[3]=0u+0x80000000u; // 800B40E8
  c->r[3]=R32(c->r[3]+0x000000DCu); // 800B40EC
  goto L_800B4108; // 800B40F0
L_800B40F4:;
  cmpu(c,0,c->r[31],c->r[3]); // 800B40F4
  if (!crb(c,2)) { goto L_800B4104; } // 800B40F8
  c->r[0]=0u+0x00000001u; // 800B40FC
  goto L_800B4114; // 800B4100
L_800B4104:;
  c->r[3]=R32(c->r[3]+0x000002FCu); // 800B4104
L_800B4108:;
  cmps(c,0,(int32_t)c->r[3],0); // 800B4108
  if (!crb(c,2)) { IRQCHK(c); goto L_800B40F4; } // 800B410C
  c->r[0]=0u+0x00000000u; // 800B4110
L_800B4114:;
  cmps(c,0,(int32_t)c->r[0],0); // 800B4114
  if (!crb(c,2)) { goto L_800B412C; } // 800B4118
  c->r[3]=c->r[30]|c->r[30]; // 800B411C
  c->lr=0x800B4124u; f_800B08A4(c); // 800B4120
  c->r[3]=0u+0x00000000u; // 800B4124
  goto L_800B41A4; // 800B4128
L_800B412C:;
  c->r[0]=R16(c->r[31]+0x000002C8u); // 800B412C
  cmpu(c,0,c->r[0],0x00000008u); // 800B4130
  if (!crb(c,2)) { goto L_800B4198; } // 800B4134
  cmps(c,0,(int32_t)c->r[29],0); // 800B4138
  if (crb(c,2)) { goto L_800B4148; } // 800B413C
  c->r[0]=R32(c->r[31]+0x000002D8u); // 800B4140
  W32(c->r[29]+0x00000000u,c->r[0]); // 800B4144
L_800B4148:;
  c->r[4]=R32(c->r[31]+0x000002FCu); // 800B4148
  c->r[5]=R32(c->r[31]+0x00000300u); // 800B414C
  cmps(c,0,(int32_t)c->r[4],0); // 800B4150
  if (!crb(c,2)) { goto L_800B4164; } // 800B4154
  c->r[3]=0u+0x80000000u; // 800B4158
  W32(c->r[3]+0x000000E0u,c->r[5]); // 800B415C
  goto L_800B4168; // 800B4160
L_800B4164:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 800B4164
L_800B4168:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B4168
  if (!crb(c,2)) { goto L_800B417C; } // 800B416C
  c->r[3]=0u+0x80000000u; // 800B4170
  W32(c->r[3]+0x000000DCu,c->r[4]); // 800B4174
  goto L_800B4180; // 800B4178
L_800B417C:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 800B417C
L_800B4180:;
  c->r[0]=0u+0x00000000u; // 800B4180
  c->r[3]=c->r[30]|c->r[30]; // 800B4184
  W16(c->r[31]+0x000002C8u,c->r[0]); // 800B4188
  c->lr=0x800B4190u; f_800B08A4(c); // 800B418C
  c->r[3]=0u+0x00000001u; // 800B4190
  goto L_800B41A4; // 800B4194
L_800B4198:;
  c->r[3]=c->r[30]|c->r[30]; // 800B4198
  c->lr=0x800B41A0u; f_800B08A4(c); // 800B419C
  c->r[3]=0u+0x00000000u; // 800B41A0
L_800B41A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B41A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B41A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B41AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B41B0
  c->lr=c->r[0]; // 800B41B4
  c->r[1]=c->r[1]+0x00000020u; // 800B41B8
  return; // 800B41BC
}

// OSResumeThread
void f_800B41C0(Ctx* __restrict c) {
  trace_call(0x800B41C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B41C0
  c->r[0]=c->lr; // 800B41C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B41C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B41CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B41D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B41D4
  c->r[29]=c->r[3]|c->r[3]; // 800B41D8
  c->lr=0x800B41E0u; f_800B087C(c); // 800B41DC
  c->r[30]=R32(c->r[29]+0x000002CCu); // 800B41E0
  c->r[31]=c->r[3]|c->r[3]; // 800B41E4
  c->r[0]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B41E8
  W32(c->r[29]+0x000002CCu,c->r[0]); // 800B41EC
  if (!crb(c,0)) { goto L_800B4200; } // 800B41F0
  c->r[0]=0u+0x00000000u; // 800B41F4
  W32(c->r[29]+0x000002CCu,c->r[0]); // 800B41F8
  goto L_800B4430; // 800B41FC
L_800B4200:;
  if (!crb(c,2)) { goto L_800B4430; } // 800B4200
  c->r[0]=R16(c->r[29]+0x000002C8u); // 800B4204
  cmps(c,0,(int32_t)c->r[0],4); // 800B4208
  if (crb(c,2)) { goto L_800B42BC; } // 800B420C
  if (!crb(c,0)) { goto L_800B441C; } // 800B4210
  cmps(c,0,(int32_t)c->r[0],1); // 800B4214
  if (crb(c,2)) { goto L_800B4220; } // 800B4218
  goto L_800B441C; // 800B421C
L_800B4220:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 800B4220
  c->r[4]=R32(c->r[29]+0x000002F4u); // 800B4224
  goto L_800B424C; // 800B4228
L_800B422C:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800B422C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4230
  if (crb(c,2)) { goto L_800B4248; } // 800B4234
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800B4238
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800B423C
  if (!crb(c,0)) { goto L_800B4248; } // 800B4240
  c->r[5]=c->r[0]|c->r[0]; // 800B4244
L_800B4248:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 800B4248
L_800B424C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B424C
  if (!crb(c,2)) { IRQCHK(c); goto L_800B422C; } // 800B4250
  c->r[3]=0u+0x802B0000u; // 800B4254
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800B4258
  c->r[3]=c->r[3]+0x000040B0u; // 800B425C
  W32(c->r[29]+0x000002D0u,c->r[5]); // 800B4260
  c->r[3]=c->r[3]+c->r[0]; // 800B4264
  W32(c->r[29]+0x000002DCu,c->r[3]); // 800B4268
  c->r[4]=R32(c->r[3]+0x00000004u); // 800B426C
  cmps(c,0,(int32_t)c->r[4],0); // 800B4270
  if (!crb(c,2)) { goto L_800B4280; } // 800B4274
  W32(c->r[3]+0x00000000u,c->r[29]); // 800B4278
  goto L_800B4284; // 800B427C
L_800B4280:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 800B4280
L_800B4284:;
  c->r[0]=0u+0x00000000u; // 800B4284
  W32(c->r[29]+0x000002E4u,c->r[4]); // 800B4288
  c->r[4]=R32(c->r[29]+0x000002DCu); // 800B428C
  c->r[3]=0u+0x00000001u; // 800B4290
  W32(c->r[29]+0x000002E0u,c->r[0]); // 800B4294
  W32(c->r[4]+0x00000004u,c->r[29]); // 800B4298
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800B429C
  c->r[4]=R32(c->r[13]+0xFFFF8D10u); // 800B42A0
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800B42A4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800B42A8
  c->r[0]=c->r[4]|c->r[0]; // 800B42AC
  W32(c->r[13]+0xFFFF8D10u,c->r[0]); // 800B42B0
  W32(c->r[13]+0xFFFF8D0Cu,c->r[3]); // 800B42B4
  goto L_800B441C; // 800B42B8
L_800B42BC:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 800B42BC
  c->r[5]=R32(c->r[29]+0x000002E4u); // 800B42C0
  cmps(c,0,(int32_t)c->r[4],0); // 800B42C4
  if (!crb(c,2)) { goto L_800B42D8; } // 800B42C8
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800B42CC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800B42D0
  goto L_800B42DC; // 800B42D4
L_800B42D8:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 800B42D8
L_800B42DC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B42DC
  if (!crb(c,2)) { goto L_800B42F0; } // 800B42E0
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800B42E4
  W32(c->r[3]+0x00000000u,c->r[4]); // 800B42E8
  goto L_800B42F4; // 800B42EC
L_800B42F0:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 800B42F0
L_800B42F4:;
  c->r[0]=R32(c->r[29]+0x000002D4u); // 800B42F4
  c->r[4]=R32(c->r[29]+0x000002F4u); // 800B42F8
  goto L_800B4320; // 800B42FC
L_800B4300:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800B4300
  cmps(c,0,(int32_t)c->r[3],0); // 800B4304
  if (crb(c,2)) { goto L_800B431C; } // 800B4308
  c->r[3]=R32(c->r[3]+0x000002D0u); // 800B430C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800B4310
  if (!crb(c,0)) { goto L_800B431C; } // 800B4314
  c->r[0]=c->r[3]|c->r[3]; // 800B4318
L_800B431C:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 800B431C
L_800B4320:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B4320
  if (!crb(c,2)) { IRQCHK(c); goto L_800B4300; } // 800B4324
  W32(c->r[29]+0x000002D0u,c->r[0]); // 800B4328
  c->r[4]=R32(c->r[29]+0x000002DCu); // 800B432C
  c->r[5]=R32(c->r[4]+0x00000000u); // 800B4330
  goto L_800B433C; // 800B4334
L_800B4338:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 800B4338
L_800B433C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B433C
  if (crb(c,2)) { goto L_800B4354; } // 800B4340
  c->r[3]=R32(c->r[5]+0x000002D0u); // 800B4344
  c->r[0]=R32(c->r[29]+0x000002D0u); // 800B4348
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800B434C
  if (!crb(c,1)) { IRQCHK(c); goto L_800B4338; } // 800B4350
L_800B4354:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B4354
  if (!crb(c,2)) { goto L_800B438C; } // 800B4358
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B435C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4360
  if (!crb(c,2)) { goto L_800B4370; } // 800B4364
  W32(c->r[4]+0x00000000u,c->r[29]); // 800B4368
  goto L_800B4374; // 800B436C
L_800B4370:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 800B4370
L_800B4374:;
  c->r[0]=0u+0x00000000u; // 800B4374
  W32(c->r[29]+0x000002E4u,c->r[3]); // 800B4378
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800B437C
  W32(c->r[29]+0x000002E0u,c->r[0]); // 800B4380
  W32(c->r[3]+0x00000004u,c->r[29]); // 800B4384
  goto L_800B43B4; // 800B4388
L_800B438C:;
  W32(c->r[29]+0x000002E0u,c->r[5]); // 800B438C
  c->r[3]=R32(c->r[5]+0x000002E4u); // 800B4390
  W32(c->r[5]+0x000002E4u,c->r[29]); // 800B4394
  cmps(c,0,(int32_t)c->r[3],0); // 800B4398
  W32(c->r[29]+0x000002E4u,c->r[3]); // 800B439C
  if (!crb(c,2)) { goto L_800B43B0; } // 800B43A0
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800B43A4
  W32(c->r[3]+0x00000000u,c->r[29]); // 800B43A8
  goto L_800B43B4; // 800B43AC
L_800B43B0:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 800B43B0
L_800B43B4:;
  c->r[3]=R32(c->r[29]+0x000002F0u); // 800B43B4
  cmps(c,0,(int32_t)c->r[3],0); // 800B43B8
  if (crb(c,2)) { goto L_800B441C; } // 800B43BC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800B43C0
L_800B43C4:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 800B43C4
  cmps(c,0,(int32_t)c->r[0],0); // 800B43C8
  if (crb(c,1)) { goto L_800B441C; } // 800B43CC
  c->r[4]=R32(c->r[3]+0x000002D4u); // 800B43D0
  c->r[5]=R32(c->r[3]+0x000002F4u); // 800B43D4
  goto L_800B43FC; // 800B43D8
L_800B43DC:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 800B43DC
  cmps(c,0,(int32_t)c->r[6],0); // 800B43E0
  if (crb(c,2)) { goto L_800B43F8; } // 800B43E4
  c->r[0]=R32(c->r[6]+0x000002D0u); // 800B43E8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800B43EC
  if (!crb(c,0)) { goto L_800B43F8; } // 800B43F0
  c->r[4]=c->r[0]|c->r[0]; // 800B43F4
L_800B43F8:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 800B43F8
L_800B43FC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B43FC
  if (!crb(c,2)) { IRQCHK(c); goto L_800B43DC; } // 800B4400
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800B4404
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800B4408
  if (crb(c,2)) { goto L_800B441C; } // 800B440C
  c->lr=0x800B4414u; f_800B36D0(c); // 800B4410
  cmps(c,0,(int32_t)c->r[3],0); // 800B4414
  if (!crb(c,2)) { IRQCHK(c); goto L_800B43C4; } // 800B4418
L_800B441C:;
  c->r[0]=R32(c->r[13]+0xFFFF8D0Cu); // 800B441C
  cmps(c,0,(int32_t)c->r[0],0); // 800B4420
  if (crb(c,2)) { goto L_800B4430; } // 800B4424
  c->r[3]=0u+0x00000000u; // 800B4428
  c->lr=0x800B4430u; f_800B38D4(c); // 800B442C
L_800B4430:;
  c->r[3]=c->r[31]|c->r[31]; // 800B4430
  c->lr=0x800B4438u; f_800B08A4(c); // 800B4434
  c->r[3]=c->r[30]|c->r[30]; // 800B4438
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B443C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4440
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B4444
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4448
  c->lr=c->r[0]; // 800B444C
  c->r[1]=c->r[1]+0x00000020u; // 800B4450
  return; // 800B4454
}

// OSSuspendThread
void f_800B4458(Ctx* __restrict c) {
  trace_call(0x800B4458u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4458
  c->r[0]=c->lr; // 800B445C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4460
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4464
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4468
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B446C
  c->r[29]=c->r[3]|c->r[3]; // 800B4470
  c->lr=0x800B4478u; f_800B087C(c); // 800B4474
  c->r[30]=R32(c->r[29]+0x000002CCu); // 800B4478
  c->r[31]=c->r[3]|c->r[3]; // 800B447C
  c->r[0]=c->r[30]+0x00000001u; // 800B4480
  cmps(c,0,(int32_t)c->r[30],0); // 800B4484
  W32(c->r[29]+0x000002CCu,c->r[0]); // 800B4488
  if (!crb(c,2)) { goto L_800B45C4; } // 800B448C
  c->r[0]=R16(c->r[29]+0x000002C8u); // 800B4490
  cmps(c,0,(int32_t)c->r[0],3); // 800B4494
  if (crb(c,2)) { goto L_800B45B0; } // 800B4498
  if (!crb(c,0)) { goto L_800B44B0; } // 800B449C
  cmps(c,0,(int32_t)c->r[0],1); // 800B44A0
  if (crb(c,2)) { goto L_800B44CC; } // 800B44A4
  if (!crb(c,0)) { goto L_800B44BC; } // 800B44A8
  goto L_800B45B0; // 800B44AC
L_800B44B0:;
  cmps(c,0,(int32_t)c->r[0],5); // 800B44B0
  if (!crb(c,0)) { goto L_800B45B0; } // 800B44B4
  goto L_800B44D8; // 800B44B8
L_800B44BC:;
  c->r[0]=0u+0x00000001u; // 800B44BC
  W32(c->r[13]+0xFFFF8D0Cu,c->r[0]); // 800B44C0
  W16(c->r[29]+0x000002C8u,c->r[0]); // 800B44C4
  goto L_800B45B0; // 800B44C8
L_800B44CC:;
  c->r[3]=c->r[29]|c->r[29]; // 800B44CC
  c->lr=0x800B44D4u; f_800B362C(c); // 800B44D0
  goto L_800B45B0; // 800B44D4
L_800B44D8:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 800B44D8
  c->r[5]=R32(c->r[29]+0x000002E4u); // 800B44DC
  cmps(c,0,(int32_t)c->r[4],0); // 800B44E0
  if (!crb(c,2)) { goto L_800B44F4; } // 800B44E4
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800B44E8
  W32(c->r[3]+0x00000004u,c->r[5]); // 800B44EC
  goto L_800B44F8; // 800B44F0
L_800B44F4:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 800B44F4
L_800B44F8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B44F8
  if (!crb(c,2)) { goto L_800B450C; } // 800B44FC
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800B4500
  W32(c->r[3]+0x00000000u,c->r[4]); // 800B4504
  goto L_800B4510; // 800B4508
L_800B450C:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 800B450C
L_800B4510:;
  c->r[0]=0u+0x00000020u; // 800B4510
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800B4514
  W32(c->r[29]+0x000002D0u,c->r[0]); // 800B4518
  c->r[4]=R32(c->r[3]+0x00000004u); // 800B451C
  cmps(c,0,(int32_t)c->r[4],0); // 800B4520
  if (!crb(c,2)) { goto L_800B4530; } // 800B4524
  W32(c->r[3]+0x00000000u,c->r[29]); // 800B4528
  goto L_800B4534; // 800B452C
L_800B4530:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 800B4530
L_800B4534:;
  c->r[0]=0u+0x00000000u; // 800B4534
  W32(c->r[29]+0x000002E4u,c->r[4]); // 800B4538
  c->r[3]=R32(c->r[29]+0x000002DCu); // 800B453C
  W32(c->r[29]+0x000002E0u,c->r[0]); // 800B4540
  W32(c->r[3]+0x00000004u,c->r[29]); // 800B4544
  c->r[3]=R32(c->r[29]+0x000002F0u); // 800B4548
  cmps(c,0,(int32_t)c->r[3],0); // 800B454C
  if (crb(c,2)) { goto L_800B45B0; } // 800B4550
  c->r[3]=R32(c->r[3]+0x00000008u); // 800B4554
L_800B4558:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 800B4558
  cmps(c,0,(int32_t)c->r[0],0); // 800B455C
  if (crb(c,1)) { goto L_800B45B0; } // 800B4560
  c->r[4]=R32(c->r[3]+0x000002D4u); // 800B4564
  c->r[5]=R32(c->r[3]+0x000002F4u); // 800B4568
  goto L_800B4590; // 800B456C
L_800B4570:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 800B4570
  cmps(c,0,(int32_t)c->r[6],0); // 800B4574
  if (crb(c,2)) { goto L_800B458C; } // 800B4578
  c->r[0]=R32(c->r[6]+0x000002D0u); // 800B457C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800B4580
  if (!crb(c,0)) { goto L_800B458C; } // 800B4584
  c->r[4]=c->r[0]|c->r[0]; // 800B4588
L_800B458C:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 800B458C
L_800B4590:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B4590
  if (!crb(c,2)) { IRQCHK(c); goto L_800B4570; } // 800B4594
  c->r[0]=R32(c->r[3]+0x000002D0u); // 800B4598
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800B459C
  if (crb(c,2)) { goto L_800B45B0; } // 800B45A0
  c->lr=0x800B45A8u; f_800B36D0(c); // 800B45A4
  cmps(c,0,(int32_t)c->r[3],0); // 800B45A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800B4558; } // 800B45AC
L_800B45B0:;
  c->r[0]=R32(c->r[13]+0xFFFF8D0Cu); // 800B45B0
  cmps(c,0,(int32_t)c->r[0],0); // 800B45B4
  if (crb(c,2)) { goto L_800B45C4; } // 800B45B8
  c->r[3]=0u+0x00000000u; // 800B45BC
  c->lr=0x800B45C4u; f_800B38D4(c); // 800B45C0
L_800B45C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B45C4
  c->lr=0x800B45CCu; f_800B08A4(c); // 800B45C8
  c->r[3]=c->r[30]|c->r[30]; // 800B45CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B45D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B45D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B45D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B45DC
  c->lr=c->r[0]; // 800B45E0
  c->r[1]=c->r[1]+0x00000020u; // 800B45E4
  return; // 800B45E8
}

// OSSleepThread
void f_800B45EC(Ctx* __restrict c) {
  trace_call(0x800B45ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B45EC
  c->r[0]=c->lr; // 800B45F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B45F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B45F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B45FC
  c->r[30]=c->r[3]|c->r[3]; // 800B4600
  c->lr=0x800B4608u; f_800B087C(c); // 800B4604
  c->r[4]=0u+0x80000000u; // 800B4608
  c->r[0]=0u+0x00000004u; // 800B460C
  c->r[4]=R32(c->r[4]+0x000000E4u); // 800B4610
  c->r[31]=c->r[3]|c->r[3]; // 800B4614
  W16(c->r[4]+0x000002C8u,c->r[0]); // 800B4618
  W32(c->r[4]+0x000002DCu,c->r[30]); // 800B461C
  c->r[5]=R32(c->r[30]+0x00000000u); // 800B4620
  goto L_800B462C; // 800B4624
L_800B4628:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 800B4628
L_800B462C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B462C
  if (crb(c,2)) { goto L_800B4644; } // 800B4630
  c->r[3]=R32(c->r[5]+0x000002D0u); // 800B4634
  c->r[0]=R32(c->r[4]+0x000002D0u); // 800B4638
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800B463C
  if (!crb(c,1)) { IRQCHK(c); goto L_800B4628; } // 800B4640
L_800B4644:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B4644
  if (!crb(c,2)) { goto L_800B4678; } // 800B4648
  c->r[3]=R32(c->r[30]+0x00000004u); // 800B464C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4650
  if (!crb(c,2)) { goto L_800B4660; } // 800B4654
  W32(c->r[30]+0x00000000u,c->r[4]); // 800B4658
  goto L_800B4664; // 800B465C
L_800B4660:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 800B4660
L_800B4664:;
  W32(c->r[4]+0x000002E4u,c->r[3]); // 800B4664
  c->r[0]=0u+0x00000000u; // 800B4668
  W32(c->r[4]+0x000002E0u,c->r[0]); // 800B466C
  W32(c->r[30]+0x00000004u,c->r[4]); // 800B4670
  goto L_800B469C; // 800B4674
L_800B4678:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 800B4678
  c->r[3]=R32(c->r[5]+0x000002E4u); // 800B467C
  W32(c->r[5]+0x000002E4u,c->r[4]); // 800B4680
  cmps(c,0,(int32_t)c->r[3],0); // 800B4684
  W32(c->r[4]+0x000002E4u,c->r[3]); // 800B4688
  if (!crb(c,2)) { goto L_800B4698; } // 800B468C
  W32(c->r[30]+0x00000000u,c->r[4]); // 800B4690
  goto L_800B469C; // 800B4694
L_800B4698:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 800B4698
L_800B469C:;
  c->r[0]=0u+0x00000001u; // 800B469C
  W32(c->r[13]+0xFFFF8D0Cu,c->r[0]); // 800B46A0
  c->r[0]=R32(c->r[13]+0xFFFF8D0Cu); // 800B46A4
  cmps(c,0,(int32_t)c->r[0],0); // 800B46A8
  if (crb(c,2)) { goto L_800B46B8; } // 800B46AC
  c->r[3]=0u+0x00000000u; // 800B46B0
  c->lr=0x800B46B8u; f_800B38D4(c); // 800B46B4
L_800B46B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800B46B8
  c->lr=0x800B46C0u; f_800B08A4(c); // 800B46BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B46C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B46C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B46C8
  c->lr=c->r[0]; // 800B46CC
  c->r[1]=c->r[1]+0x00000010u; // 800B46D0
  return; // 800B46D4
}

// OSWakeupThread
void f_800B46D8(Ctx* __restrict c) {
  trace_call(0x800B46D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B46D8
  c->r[0]=c->lr; // 800B46DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B46E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B46E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B46E8
  c->r[30]=c->r[3]|c->r[3]; // 800B46EC
  c->lr=0x800B46F4u; f_800B087C(c); // 800B46F0
  c->r[5]=0u+0x802B0000u; // 800B46F4
  c->r[31]=c->r[3]|c->r[3]; // 800B46F8
  c->r[5]=c->r[5]+0x000040B0u; // 800B46FC
  c->r[6]=0u+0x00000000u; // 800B4700
  c->r[3]=0u+0x00000001u; // 800B4704
  goto L_800B478C; // 800B4708
L_800B470C:;
  c->r[4]=R32(c->r[8]+0x000002E0u); // 800B470C
  cmps(c,0,(int32_t)c->r[4],0); // 800B4710
  if (!crb(c,2)) { goto L_800B4720; } // 800B4714
  W32(c->r[30]+0x00000004u,c->r[6]); // 800B4718
  goto L_800B4724; // 800B471C
L_800B4720:;
  W32(c->r[4]+0x000002E4u,c->r[6]); // 800B4720
L_800B4724:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 800B4724
  W16(c->r[8]+0x000002C8u,c->r[3]); // 800B4728
  c->r[0]=R32(c->r[8]+0x000002CCu); // 800B472C
  cmps(c,0,(int32_t)c->r[0],0); // 800B4730
  if (crb(c,1)) { goto L_800B478C; } // 800B4734
  c->r[0]=R32(c->r[8]+0x000002D0u); // 800B4738
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B473C
  c->r[4]=c->r[5]+c->r[0]; // 800B4740
  W32(c->r[8]+0x000002DCu,c->r[4]); // 800B4744
  c->r[7]=R32(c->r[4]+0x00000004u); // 800B4748
  cmps(c,0,(int32_t)c->r[7],0); // 800B474C
  if (!crb(c,2)) { goto L_800B475C; } // 800B4750
  W32(c->r[4]+0x00000000u,c->r[8]); // 800B4754
  goto L_800B4760; // 800B4758
L_800B475C:;
  W32(c->r[7]+0x000002E0u,c->r[8]); // 800B475C
L_800B4760:;
  W32(c->r[8]+0x000002E4u,c->r[7]); // 800B4760
  W32(c->r[8]+0x000002E0u,c->r[6]); // 800B4764
  c->r[4]=R32(c->r[8]+0x000002DCu); // 800B4768
  W32(c->r[4]+0x00000004u,c->r[8]); // 800B476C
  c->r[0]=R32(c->r[8]+0x000002D0u); // 800B4770
  c->r[4]=R32(c->r[13]+0xFFFF8D10u); // 800B4774
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800B4778
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800B477C
  c->r[0]=c->r[4]|c->r[0]; // 800B4780
  W32(c->r[13]+0xFFFF8D10u,c->r[0]); // 800B4784
  W32(c->r[13]+0xFFFF8D0Cu,c->r[3]); // 800B4788
L_800B478C:;
  c->r[8]=R32(c->r[30]+0x00000000u); // 800B478C
  cmps(c,0,(int32_t)c->r[8],0); // 800B4790
  if (!crb(c,2)) { IRQCHK(c); goto L_800B470C; } // 800B4794
  c->r[0]=R32(c->r[13]+0xFFFF8D0Cu); // 800B4798
  cmps(c,0,(int32_t)c->r[0],0); // 800B479C
  if (crb(c,2)) { goto L_800B47AC; } // 800B47A0
  c->r[3]=0u+0x00000000u; // 800B47A4
  c->lr=0x800B47ACu; f_800B38D4(c); // 800B47A8
L_800B47AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800B47AC
  c->lr=0x800B47B4u; f_800B08A4(c); // 800B47B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B47B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B47B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B47BC
  c->lr=c->r[0]; // 800B47C0
  c->r[1]=c->r[1]+0x00000010u; // 800B47C4
  return; // 800B47C8
}

// SleepAlarmHandler
void f_800B47CC(Ctx* __restrict c) {
  trace_call(0x800B47CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B47CC
  c->r[0]=c->lr; // 800B47D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B47D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B47D8
  c->r[31]=c->r[3]|c->r[3]; // 800B47DC
  c->lr=0x800B47E4u; f_800AB3DC(c); // 800B47E0
  c->r[0]=R16(c->r[3]+0x000002C8u); // 800B47E4
  cmps(c,0,(int32_t)c->r[0],0); // 800B47E8
  if (!crb(c,2)) { goto L_800B47F8; } // 800B47EC
  c->r[0]=0u+0x00000000u; // 800B47F0
  goto L_800B4824; // 800B47F4
L_800B47F8:;
  c->r[4]=0u+0x80000000u; // 800B47F8
  c->r[4]=R32(c->r[4]+0x000000DCu); // 800B47FC
  goto L_800B4818; // 800B4800
L_800B4804:;
  cmpu(c,0,c->r[3],c->r[4]); // 800B4804
  if (!crb(c,2)) { goto L_800B4814; } // 800B4808
  c->r[0]=0u+0x00000001u; // 800B480C
  goto L_800B4824; // 800B4810
L_800B4814:;
  c->r[4]=R32(c->r[4]+0x000002FCu); // 800B4814
L_800B4818:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B4818
  if (!crb(c,2)) { IRQCHK(c); goto L_800B4804; } // 800B481C
  c->r[0]=0u+0x00000000u; // 800B4820
L_800B4824:;
  cmps(c,0,(int32_t)c->r[0],0); // 800B4824
  if (crb(c,2)) { goto L_800B4838; } // 800B4828
  c->r[3]=c->r[31]|c->r[31]; // 800B482C
  c->lr=0x800B4834u; f_800AB3DC(c); // 800B4830
  c->lr=0x800B4838u; f_800B41C0(c); // 800B4834
L_800B4838:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B483C
  c->lr=c->r[0]; // 800B4840
  c->r[1]=c->r[1]+0x00000010u; // 800B4844
  return; // 800B4848
}

// OSSleepTicks
void f_800B484C(Ctx* __restrict c) {
  trace_call(0x800B484Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B484C
  c->r[0]=c->lr; // 800B4850
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B4854
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800B4858
  W32(c->r[1]+0x00000048u,c->r[30]); // 800B485C
  W32(c->r[1]+0x00000044u,c->r[29]); // 800B4860
  c->r[29]=c->r[3]|c->r[3]; // 800B4864
  W32(c->r[1]+0x00000040u,c->r[28]); // 800B4868
  c->r[28]=c->r[4]|c->r[4]; // 800B486C
  c->lr=0x800B4874u; f_800B087C(c); // 800B4870
  c->r[4]=0u+0x80000000u; // 800B4874
  c->r[30]=c->r[3]|c->r[3]; // 800B4878
  c->r[31]=R32(c->r[4]+0x000000E4u); // 800B487C
  cmps(c,0,(int32_t)c->r[31],0); // 800B4880
  if (!crb(c,2)) { goto L_800B4890; } // 800B4884
  c->lr=0x800B488Cu; f_800B08A4(c); // 800B4888
  goto L_800B48D4; // 800B488C
L_800B4890:;
  c->r[3]=c->r[1]+0x00000008u; // 800B4890
  c->lr=0x800B4898u; f_800AAC60(c); // 800B4894
  c->r[4]=c->r[31]|c->r[31]; // 800B4898
  c->r[3]=c->r[1]+0x00000008u; // 800B489C
  c->lr=0x800B48A4u; f_800AB3E4(c); // 800B48A0
  c->r[7]=0u+0x800B0000u; // 800B48A4
  c->r[6]=c->r[28]|c->r[28]; // 800B48A8
  c->r[5]=c->r[29]|c->r[29]; // 800B48AC
  c->r[3]=c->r[1]+0x00000008u; // 800B48B0
  c->r[7]=c->r[7]+0x000047CCu; // 800B48B4
  c->lr=0x800B48BCu; f_800AAEC0(c); // 800B48B8
  c->r[3]=c->r[31]|c->r[31]; // 800B48BC
  c->lr=0x800B48C4u; f_800B4458(c); // 800B48C0
  c->r[3]=c->r[1]+0x00000008u; // 800B48C4
  c->lr=0x800B48CCu; f_800AAFB4(c); // 800B48C8
  c->r[3]=c->r[30]|c->r[30]; // 800B48CC
  c->lr=0x800B48D4u; f_800B08A4(c); // 800B48D0
L_800B48D4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B48D4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800B48D8
  c->r[30]=R32(c->r[1]+0x00000048u); // 800B48DC
  c->r[29]=R32(c->r[1]+0x00000044u); // 800B48E0
  c->r[28]=R32(c->r[1]+0x00000040u); // 800B48E4
  c->lr=c->r[0]; // 800B48E8
  c->r[1]=c->r[1]+0x00000050u; // 800B48EC
  return; // 800B48F0
}

// OSGetTime
void f_800B48F4(Ctx* __restrict c) {
  trace_call(0x800B48F4u);
L_800B48F4:;
  c->r[3]=mftb(c,269); // 800B48F4
  c->r[4]=mftb(c,268); // 800B48F8
  c->r[5]=mftb(c,269); // 800B48FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 800B4900
  if (!crb(c,2)) { IRQCHK(c); goto L_800B48F4; } // 800B4904
  return; // 800B4908
}

// OSGetTick
void f_800B490C(Ctx* __restrict c) {
  trace_call(0x800B490Cu);
  c->r[3]=mftb(c,268); // 800B490C
  return; // 800B4910
}

// __OSGetSystemTime
void f_800B4914(Ctx* __restrict c) {
  trace_call(0x800B4914u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4914
  c->r[0]=c->lr; // 800B4918
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B491C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4920
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4924
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B4928
  c->lr=0x800B4930u; f_800B087C(c); // 800B492C
  c->r[31]=c->r[3]|c->r[3]; // 800B4930
  c->lr=0x800B4938u; f_800B48F4(c); // 800B4934
  c->r[6]=0u+0x80000000u; // 800B4938
  c->r[5]=R32(c->r[6]+0x000030DCu); // 800B493C
  c->r[0]=R32(c->r[6]+0x000030D8u); // 800B4940
  c->r[29]=addc(c,c->r[5],c->r[4],0); // 800B4944
  c->r[30]=addc(c,c->r[0],c->r[3],c->xer_ca); // 800B4948
  c->r[3]=c->r[31]|c->r[31]; // 800B494C
  c->lr=0x800B4954u; f_800B08A4(c); // 800B4950
  c->r[4]=c->r[29]|c->r[29]; // 800B4954
  c->r[3]=c->r[30]|c->r[30]; // 800B4958
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B495C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4960
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B4964
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4968
  c->lr=c->r[0]; // 800B496C
  c->r[1]=c->r[1]+0x00000020u; // 800B4970
  return; // 800B4974
}

// __OSTimeToSystemTime
void f_800B4978(Ctx* __restrict c) {
  trace_call(0x800B4978u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4978
  c->r[0]=c->lr; // 800B497C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4984
  c->r[31]=c->r[3]|c->r[3]; // 800B4988
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B498C
  c->r[30]=c->r[4]|c->r[4]; // 800B4990
  c->lr=0x800B4998u; f_800B087C(c); // 800B4994
  c->r[5]=0u+0x80000000u; // 800B4998
  c->r[4]=R32(c->r[5]+0x000030DCu); // 800B499C
  c->r[0]=R32(c->r[5]+0x000030D8u); // 800B49A0
  c->r[30]=addc(c,c->r[4],c->r[30],0); // 800B49A4
  c->r[31]=addc(c,c->r[0],c->r[31],c->xer_ca); // 800B49A8
  c->lr=0x800B49B0u; f_800B08A4(c); // 800B49AC
  c->r[3]=c->r[31]|c->r[31]; // 800B49B0
  c->r[4]=c->r[30]|c->r[30]; // 800B49B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B49B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B49BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B49C0
  c->lr=c->r[0]; // 800B49C4
  c->r[1]=c->r[1]+0x00000010u; // 800B49C8
  return; // 800B49CC
}

// GetDates
void f_800B49D0(Ctx* __restrict c) {
  trace_call(0x800B49D0u);
  c->r[7]=0u+0x92490000u; // 800B49D0
  c->r[6]=0u+0xB38D0000u; // 800B49D4
  c->r[8]=c->r[3]+0x00000006u; // 800B49D8
  c->r[5]=0u+0x51EC0000u; // 800B49DC
  c->r[0]=c->r[6]+0xFFFFF9B1u; // 800B49E0
  c->r[7]=c->r[7]+0x00002493u; // 800B49E4
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[8])>>32); // 800B49E8
  c->r[10]=c->r[5]+0xFFFF851Fu; // 800B49EC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800B49F0
  c->r[5]=c->r[6]+c->r[8]; // 800B49F4
  c->r[5]=sraw(c,c->r[5],2); // 800B49F8
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 800B49FC
  c->r[5]=c->r[5]+c->r[6]; // 800B4A00
  c->r[0]=c->r[0]+c->r[3]; // 800B4A04
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)7); // 800B4A08
  c->r[0]=sraw(c,c->r[0],8); // 800B4A0C
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800B4A10
  c->r[5]=c->r[0]+c->r[5]; // 800B4A14
  c->r[0]=c->r[8]-c->r[6]; // 800B4A18
  c->r[11]=(uint32_t)((int32_t)c->r[5]*(int32_t)365); // 800B4A1C
  W32(c->r[4]+0x00000018u,c->r[0]); // 800B4A20
  goto L_800B4A30; // 800B4A24
L_800B4A28:;
  c->r[11]=c->r[11]+0xFFFFFE93u; // 800B4A28
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800B4A2C
L_800B4A30:;
  cmps(c,0,(int32_t)c->r[5],1); // 800B4A30
  if (crb(c,0)) { goto L_800B4A70; } // 800B4A34
  c->r[6]=c->r[5]+0xFFFFFFFFu; // 800B4A38
  c->r[0]=c->r[5]+0x00000003u; // 800B4A3C
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 800B4A40
  c->r[8]=sraw(c,c->r[6],7); // 800B4A44
  c->r[6]=sraw(c,c->r[6],5); // 800B4A48
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 800B4A4C
  c->r[0]=sraw(c,c->r[0],2); // 800B4A50
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 800B4A54
  c->r[6]=c->r[6]+c->r[7]; // 800B4A58
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800B4A5C
  c->r[7]=c->r[8]+c->r[9]; // 800B4A60
  c->r[0]=c->r[0]-c->r[6]; // 800B4A64
  c->r[0]=c->r[7]+c->r[0]; // 800B4A68
  goto L_800B4A74; // 800B4A6C
L_800B4A70:;
  c->r[0]=0u+0x00000000u; // 800B4A70
L_800B4A74:;
  c->r[8]=c->r[11]+c->r[0]; // 800B4A74
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 800B4A78
  if (crb(c,0)) { IRQCHK(c); goto L_800B4A28; } // 800B4A7C
  c->r[0]=rotl(c->r[5],30)&0xC0000000u; // 800B4A80
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 800B4A84
  c->r[6]=c->r[0]-c->r[7]; // 800B4A88
  W32(c->r[4]+0x00000014u,c->r[5]); // 800B4A8C
  c->r[0]=c->r[3]-c->r[8]; // 800B4A90
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFFu; // 800B4A94
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800B4A98
  c->r[3]=c->r[3]+c->r[7]; cr0(c,c->r[3]); // 800B4A9C
  c->r[7]=0u+0x00000000u; // 800B4AA0
  if (!crb(c,2)) { goto L_800B4ACC; } // 800B4AA4
  c->r[3]=0u+0x51EC0000u; // 800B4AA8
  c->r[3]=c->r[3]+0xFFFF851Fu; // 800B4AAC
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[5])>>32); // 800B4AB0
  c->r[3]=sraw(c,c->r[3],5); // 800B4AB4
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 800B4AB8
  c->r[3]=c->r[3]+c->r[6]; // 800B4ABC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 800B4AC0
  c->r[3]=c->r[5]-c->r[3]; cr0(c,c->r[3]); // 800B4AC4
  if (!crb(c,2)) { goto L_800B4AF0; } // 800B4AC8
L_800B4ACC:;
  c->r[3]=0u+0x51EC0000u; // 800B4ACC
  c->r[3]=c->r[3]+0xFFFF851Fu; // 800B4AD0
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[5])>>32); // 800B4AD4
  c->r[3]=sraw(c,c->r[3],7); // 800B4AD8
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 800B4ADC
  c->r[3]=c->r[3]+c->r[6]; // 800B4AE0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)400); // 800B4AE4
  c->r[3]=c->r[5]-c->r[3]; cr0(c,c->r[3]); // 800B4AE8
  if (!crb(c,2)) { goto L_800B4AF4; } // 800B4AEC
L_800B4AF0:;
  c->r[7]=0u+0x00000001u; // 800B4AF0
L_800B4AF4:;
  cmps(c,0,(int32_t)c->r[7],0); // 800B4AF4
  c->r[6]=0u+0x80260000u; // 800B4AF8
  c->r[6]=c->r[6]+0x000077F0u; // 800B4AFC
  if (crb(c,2)) { goto L_800B4B0C; } // 800B4B00
  c->r[6]=0u+0x80260000u; // 800B4B04
  c->r[6]=c->r[6]+0x00007820u; // 800B4B08
L_800B4B0C:;
  c->r[7]=0u+0x0000000Cu; // 800B4B0C
  c->r[3]=0u+0x00000030u; // 800B4B10
L_800B4B14:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800B4B14
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800B4B18
  c->r[5]=R32(c->r[6]+c->r[3]); // 800B4B1C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800B4B20
  if (crb(c,0)) { IRQCHK(c); goto L_800B4B14; } // 800B4B24
  W32(c->r[4]+0x00000010u,c->r[7]); // 800B4B28
  c->r[3]=R32(c->r[6]+c->r[3]); // 800B4B2C
  c->r[3]=c->r[0]-c->r[3]; // 800B4B30
  c->r[0]=c->r[3]+0x00000001u; // 800B4B34
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800B4B38
  return; // 800B4B3C
}

// OSTicksToCalendarTime
void f_800B4B40(Ctx* __restrict c) {
  trace_call(0x800B4B40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4B40
  c->r[0]=c->lr; // 800B4B44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4B48
  c->r[11]=c->r[1]+0x00000020u; // 800B4B4C
  c->lr=0x800B4B54u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B4B50
  c->r[6]=0u+0x80000000u; // 800B4B54
  c->r[29]=c->r[5]|c->r[5]; // 800B4B58
  c->r[0]=R32(c->r[6]+0x000000F8u); // 800B4B5C
  c->r[28]=c->r[3]|c->r[3]; // 800B4B60
  c->r[27]=c->r[4]|c->r[4]; // 800B4B64
  c->r[5]=0u+0x00000000u; // 800B4B68
  c->r[26]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800B4B6C
  c->r[6]=c->r[26]|c->r[26]; // 800B4B70
  c->lr=0x800B4B78u; f_800D4D80(c); // 800B4B74
  c->r[7]=0u+0x00000000u; // 800B4B78
  c->r[0]=c->r[3]^0x80000000u; // 800B4B7C
  c->r[6]=c->r[7]^0x80000000u; // 800B4B80
  c->r[30]=c->r[4]|c->r[4]; // 800B4B84
  c->r[5]=addc(c,~c->r[7],c->r[4],1); // 800B4B88
  c->r[31]=c->r[3]|c->r[3]; // 800B4B8C
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 800B4B90
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800B4B94
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800B4B98
  if (crb(c,2)) { goto L_800B4BA8; } // 800B4B9C
  c->r[30]=addc(c,c->r[4],c->r[26],0); // 800B4BA0
  c->r[31]=addc(c,c->r[3],c->r[7],c->xer_ca); // 800B4BA4
L_800B4BA8:;
  c->r[4]=0u+0x431C0000u; // 800B4BA8
  c->r[3]=rotl(c->r[31],3)&0xFFFFFFF8u; // 800B4BAC
  c->r[0]=c->r[4]+0xFFFFDE83u; // 800B4BB0
  c->r[5]=0u+0x00000000u; // 800B4BB4
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 800B4BB8
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 800B4BBC
  c->r[3]=(rotl(c->r[30],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 800B4BC0
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 800B4BC4
  c->lr=0x800B4BCCu; f_800D4B64(c); // 800B4BC8
  c->r[6]=0u+0x000003E8u; // 800B4BCC
  c->r[5]=0u+0x00000000u; // 800B4BD0
  c->lr=0x800B4BD8u; f_800D4D80(c); // 800B4BD4
  W32(c->r[29]+0x00000024u,c->r[4]); // 800B4BD8
  c->r[26]=0u+0x80000000u; // 800B4BDC
  c->r[4]=0u+0x10620000u; // 800B4BE0
  c->r[3]=c->r[31]|c->r[31]; // 800B4BE4
  c->r[0]=R32(c->r[26]+0x000000F8u); // 800B4BE8
  c->r[6]=c->r[4]+0x00004DD3u; // 800B4BEC
  c->r[4]=c->r[30]|c->r[30]; // 800B4BF0
  c->r[5]=0u+0x00000000u; // 800B4BF4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800B4BF8
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 800B4BFC
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 800B4C00
  c->lr=0x800B4C08u; f_800D4B64(c); // 800B4C04
  c->r[6]=0u+0x000003E8u; // 800B4C08
  c->r[5]=0u+0x00000000u; // 800B4C0C
  c->lr=0x800B4C14u; f_800D4D80(c); // 800B4C10
  W32(c->r[29]+0x00000020u,c->r[4]); // 800B4C14
  c->r[4]=addc(c,~c->r[30],c->r[27],1); // 800B4C18
  c->r[3]=addc(c,~c->r[31],c->r[28],c->xer_ca); // 800B4C1C
  c->r[5]=0u+0x00000000u; // 800B4C20
  c->r[0]=R32(c->r[26]+0x000000F8u); // 800B4C24
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800B4C28
  c->lr=0x800B4C30u; f_800D4B64(c); // 800B4C2C
  c->r[27]=0u+0x00010000u; // 800B4C30
  c->r[28]=c->r[4]|c->r[4]; // 800B4C34
  c->r[26]=c->r[3]|c->r[3]; // 800B4C38
  c->r[5]=0u+0x00000000u; // 800B4C3C
  c->r[6]=c->r[27]+0x00005180u; // 800B4C40
  c->lr=0x800B4C48u; f_800D4B64(c); // 800B4C44
  c->r[3]=0u+0x000B0000u; // 800B4C48
  c->r[6]=c->r[27]+0x00005180u; // 800B4C4C
  c->r[0]=c->r[3]+0x00002575u; // 800B4C50
  c->r[5]=0u+0x00000000u; // 800B4C54
  c->r[3]=c->r[26]|c->r[26]; // 800B4C58
  c->r[26]=addc(c,c->r[4],c->r[0],0); // 800B4C5C
  c->r[4]=c->r[28]|c->r[28]; // 800B4C60
  c->lr=0x800B4C68u; f_800D4D80(c); // 800B4C64
  cmps(c,0,(int32_t)c->r[4],0); // 800B4C68
  c->r[31]=c->r[4]|c->r[4]; // 800B4C6C
  if (!crb(c,0)) { goto L_800B4C80; } // 800B4C70
  c->r[31]=c->r[4]+0x00010000u; // 800B4C74
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 800B4C78
  c->r[31]=c->r[31]+0x00005180u; // 800B4C7C
L_800B4C80:;
  c->r[3]=c->r[26]|c->r[26]; // 800B4C80
  c->r[4]=c->r[29]|c->r[29]; // 800B4C84
  c->lr=0x800B4C8Cu; f_800B49D0(c); // 800B4C88
  c->r[3]=0u+0x88890000u; // 800B4C8C
  c->r[11]=c->r[1]+0x00000020u; // 800B4C90
  c->r[5]=c->r[3]+0xFFFF8889u; // 800B4C94
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[31])>>32); // 800B4C98
  c->r[3]=c->r[0]+c->r[31]; // 800B4C9C
  c->r[0]=sraw(c,c->r[3],5); // 800B4CA0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800B4CA4
  c->r[8]=c->r[0]+c->r[4]; // 800B4CA8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[8])>>32); // 800B4CAC
  c->r[0]=c->r[0]+c->r[8]; // 800B4CB0
  c->r[6]=sraw(c,c->r[0],5); // 800B4CB4
  c->r[4]=sraw(c,c->r[0],5); // 800B4CB8
  c->r[0]=sraw(c,c->r[3],5); // 800B4CBC
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 800B4CC0
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 800B4CC4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B4CC8
  c->r[6]=c->r[6]+c->r[7]; // 800B4CCC
  c->r[0]=c->r[0]+c->r[3]; // 800B4CD0
  c->r[4]=c->r[4]+c->r[5]; // 800B4CD4
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)60); // 800B4CD8
  W32(c->r[29]+0x00000008u,c->r[6]); // 800B4CDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800B4CE0
  c->r[3]=c->r[8]-c->r[3]; // 800B4CE4
  W32(c->r[29]+0x00000004u,c->r[3]); // 800B4CE8
  c->r[0]=c->r[31]-c->r[0]; // 800B4CEC
  W32(c->r[29]+0x00000000u,c->r[0]); // 800B4CF0
  c->lr=0x800B4CF8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B4CF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4CF8
  c->lr=c->r[0]; // 800B4CFC
  c->r[1]=c->r[1]+0x00000020u; // 800B4D00
  return; // 800B4D04
}

// OSUTF8to32
void f_800B4D08(Ctx* __restrict c) {
  trace_call(0x800B4D08u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 800B4D08
  cmps(c,0,(int32_t)c->r[6],0); // 800B4D0C
  if (crb(c,2)) { goto L_800B4D18; } // 800B4D10
  c->r[3]=c->r[3]+0x00000001u; // 800B4D14
L_800B4D18:;
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 800B4D18
  if (!crb(c,2)) { goto L_800B4D28; } // 800B4D1C
  c->r[7]=0u+0x00000000u; // 800B4D20
  goto L_800B4D78; // 800B4D24
L_800B4D28:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 800B4D28
  cmpu(c,0,c->r[0],0x000000C0u); // 800B4D2C
  if (!crb(c,2)) { goto L_800B4D40; } // 800B4D30
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 800B4D34
  c->r[7]=0u+0x00000001u; // 800B4D38
  goto L_800B4D78; // 800B4D3C
L_800B4D40:;
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 800B4D40
  cmpu(c,0,c->r[0],0x000000E0u); // 800B4D44
  if (!crb(c,2)) { goto L_800B4D58; } // 800B4D48
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 800B4D4C
  c->r[7]=0u+0x00000002u; // 800B4D50
  goto L_800B4D78; // 800B4D54
L_800B4D58:;
  c->r[0]=rotl(c->r[6],0)&0x000000F8u; // 800B4D58
  cmpu(c,0,c->r[0],0x000000F0u); // 800B4D5C
  if (!crb(c,2)) { goto L_800B4D70; } // 800B4D60
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 800B4D64
  c->r[7]=0u+0x00000003u; // 800B4D68
  goto L_800B4D78; // 800B4D6C
L_800B4D70:;
  c->r[3]=0u+0x00000000u; // 800B4D70
  return; // 800B4D74
L_800B4D78:;
  c->ctr=c->r[7]; // 800B4D78
  cmpu(c,0,c->r[7],0x00000000u); // 800B4D7C
  if (!crb(c,1)) { goto L_800B4DB0; } // 800B4D80
L_800B4D84:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 800B4D84
  c->r[6]=rotl(c->r[6],6)&0xFFFFFFC0u; // 800B4D88
  c->r[3]=c->r[3]+0x00000001u; // 800B4D8C
  c->r[0]=rotl(c->r[5],0)&0x000000C0u; // 800B4D90
  cmpu(c,0,c->r[0],0x00000080u); // 800B4D94
  if (crb(c,2)) { goto L_800B4DA4; } // 800B4D98
  c->r[3]=0u+0x00000000u; // 800B4D9C
  return; // 800B4DA0
L_800B4DA4:;
  c->r[0]=rotl(c->r[5],0)&0x0000003Fu; // 800B4DA4
  c->r[6]=c->r[6]|c->r[0]; // 800B4DA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B4D84; } // 800B4DAC
L_800B4DB0:;
  cmpu(c,0,c->r[6],0x0000007Fu); // 800B4DB0
  if (crb(c,1)) { goto L_800B4DC8; } // 800B4DB4
  cmps(c,0,(int32_t)c->r[7],0); // 800B4DB8
  if (crb(c,2)) { goto L_800B4DF8; } // 800B4DBC
  c->r[3]=0u+0x00000000u; // 800B4DC0
  return; // 800B4DC4
L_800B4DC8:;
  cmpu(c,0,c->r[6],0x000007FFu); // 800B4DC8
  if (crb(c,1)) { goto L_800B4DE0; } // 800B4DCC
  cmpu(c,0,c->r[7],0x00000001u); // 800B4DD0
  if (crb(c,2)) { goto L_800B4DF8; } // 800B4DD4
  c->r[3]=0u+0x00000000u; // 800B4DD8
  return; // 800B4DDC
L_800B4DE0:;
  cmpu(c,0,c->r[6],0x0000FFFFu); // 800B4DE0
  if (crb(c,1)) { goto L_800B4DF8; } // 800B4DE4
  cmpu(c,0,c->r[7],0x00000002u); // 800B4DE8
  if (crb(c,2)) { goto L_800B4DF8; } // 800B4DEC
  c->r[3]=0u+0x00000000u; // 800B4DF0
  return; // 800B4DF4
L_800B4DF8:;
  cmpu(c,0,c->r[6],0x0000D800u); // 800B4DF8
  if (crb(c,0)) { goto L_800B4E10; } // 800B4DFC
  cmpu(c,0,c->r[6],0x0000DFFFu); // 800B4E00
  if (crb(c,1)) { goto L_800B4E10; } // 800B4E04
  c->r[3]=0u+0x00000000u; // 800B4E08
  return; // 800B4E0C
L_800B4E10:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 800B4E10
  return; // 800B4E14
}

// OSUTF16to32
void f_800B4E18(Ctx* __restrict c) {
  trace_call(0x800B4E18u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 800B4E18
  cmps(c,0,(int32_t)c->r[5],0); // 800B4E1C
  if (crb(c,2)) { goto L_800B4E28; } // 800B4E20
  c->r[3]=c->r[3]+0x00000002u; // 800B4E24
L_800B4E28:;
  cmpu(c,0,c->r[5],0x0000D800u); // 800B4E28
  if (crb(c,0)) { goto L_800B4E38; } // 800B4E2C
  cmpu(c,0,c->r[5],0x0000DFFFu); // 800B4E30
  if (!crb(c,1)) { goto L_800B4E40; } // 800B4E34
L_800B4E38:;
  c->r[6]=c->r[5]|c->r[5]; // 800B4E38
  goto L_800B4E80; // 800B4E3C
L_800B4E40:;
  cmpu(c,0,c->r[5],0x0000DBFFu); // 800B4E40
  if (crb(c,1)) { goto L_800B4E78; } // 800B4E44
  c->r[0]=R16(c->r[3]+0x00000000u); // 800B4E48
  c->r[3]=c->r[3]+0x00000002u; // 800B4E4C
  cmpu(c,0,c->r[0],0x0000DC00u); // 800B4E50
  if (crb(c,0)) { goto L_800B4E70; } // 800B4E54
  cmpu(c,0,c->r[0],0x0000DFFFu); // 800B4E58
  if (crb(c,1)) { goto L_800B4E70; } // 800B4E5C
  c->r[6]=rotl(c->r[0],0)&0x000003FFu; // 800B4E60
  c->r[6]=(rotl(c->r[5],10)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 800B4E64
  c->r[6]=c->r[6]+0x00010000u; // 800B4E68
  goto L_800B4E80; // 800B4E6C
L_800B4E70:;
  c->r[3]=0u+0x00000000u; // 800B4E70
  return; // 800B4E74
L_800B4E78:;
  c->r[3]=0u+0x00000000u; // 800B4E78
  return; // 800B4E7C
L_800B4E80:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 800B4E80
  return; // 800B4E84
}

// OSUTF32toANSI
void f_800B4E88(Ctx* __restrict c) {
  trace_call(0x800B4E88u);
  cmpu(c,0,c->r[3],0x000000FFu); // 800B4E88
  if (!crb(c,1)) { goto L_800B4E98; } // 800B4E8C
  c->r[3]=0u+0x00000000u; // 800B4E90
  return; // 800B4E94
L_800B4E98:;
  cmpu(c,0,c->r[3],0x00000080u); // 800B4E98
  if (crb(c,0)) { goto L_800B4EA8; } // 800B4E9C
  cmpu(c,0,c->r[3],0x0000009Fu); // 800B4EA0
  if (!crb(c,1)) { goto L_800B4EB0; } // 800B4EA4
L_800B4EA8:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800B4EA8
  return; // 800B4EAC
L_800B4EB0:;
  cmpu(c,0,c->r[3],0x00000152u); // 800B4EB0
  if (crb(c,0)) { goto L_800B4EF8; } // 800B4EB4
  cmpu(c,0,c->r[3],0x00002122u); // 800B4EB8
  if (crb(c,1)) { goto L_800B4EF8; } // 800B4EBC
  c->r[4]=0u+0x80260000u; // 800B4EC0
  c->r[0]=0u+0x00000020u; // 800B4EC4
  c->r[4]=c->r[4]+0x00007850u; // 800B4EC8
  c->r[5]=0u+0x00000000u; // 800B4ECC
  c->ctr=c->r[0]; // 800B4ED0
L_800B4ED4:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 800B4ED4
  cmpu(c,0,c->r[3],c->r[0]); // 800B4ED8
  if (!crb(c,2)) { goto L_800B4EEC; } // 800B4EDC
  c->r[0]=c->r[5]+0x00000080u; // 800B4EE0
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800B4EE4
  return; // 800B4EE8
L_800B4EEC:;
  c->r[4]=c->r[4]+0x00000002u; // 800B4EEC
  c->r[5]=c->r[5]+0x00000001u; // 800B4EF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B4ED4; } // 800B4EF4
L_800B4EF8:;
  c->r[3]=0u+0x00000000u; // 800B4EF8
  return; // 800B4EFC
}

// OSUTF32toSJIS
void f_800B4F00(Ctx* __restrict c) {
  trace_call(0x800B4F00u);
  c->r[0]=0u+0x00010000u; // 800B4F00
  cmpu(c,0,c->r[3],c->r[0]); // 800B4F04
  if (crb(c,0)) { goto L_800B4F14; } // 800B4F08
  c->r[3]=0u+0x00000000u; // 800B4F0C
  return; // 800B4F10
L_800B4F14:;
  c->r[4]=0u+0x80270000u; // 800B4F14
  c->r[0]=rotl(c->r[3],26)&0x000003FCu; // 800B4F18
  c->r[4]=c->r[4]+0x00003290u; // 800B4F1C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800B4F20
  cmps(c,0,(int32_t)c->r[4],0); // 800B4F24
  if (crb(c,2)) { goto L_800B4F38; } // 800B4F28
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 800B4F2C
  c->r[3]=R16(c->r[4]+c->r[0]); // 800B4F30
  return; // 800B4F34
L_800B4F38:;
  c->r[3]=0u+0x00000000u; // 800B4F38
  return; // 800B4F3C
}

// __OSGetIPCBufferHi
void f_800B4F40(Ctx* __restrict c) {
  trace_call(0x800B4F40u);
  c->r[3]=R32(c->r[13]+0xFFFF8D18u); // 800B4F40
  return; // 800B4F44
}

// __OSGetIPCBufferLo
void f_800B4F48(Ctx* __restrict c) {
  trace_call(0x800B4F48u);
  c->r[3]=R32(c->r[13]+0xFFFF8108u); // 800B4F48
  return; // 800B4F4C
}

// __OSInitIPCBuffer
void f_800B4F50(Ctx* __restrict c) {
  trace_call(0x800B4F50u);
  c->r[3]=0u+0x80000000u; // 800B4F50
  c->r[0]=R32(c->r[3]+0x00003130u); // 800B4F54
  W32(c->r[13]+0xFFFF8108u,c->r[0]); // 800B4F58
  c->r[0]=R32(c->r[3]+0x00003134u); // 800B4F5C
  W32(c->r[13]+0xFFFF8D18u,c->r[0]); // 800B4F60
  return; // 800B4F64
}

