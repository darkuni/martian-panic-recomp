#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// Bind__Q36nw4hbm3lyt18AnimTransformBasicFPQ36nw4hbm3lyt4Paneb
void f_8023CC70(Ctx* __restrict c) {
  trace_call(0x8023CC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023CC70
  c->r[0]=c->lr; // 8023CC74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023CC78
  c->r[11]=c->r[1]+0x00000020u; // 8023CC7C
  c->lr=0x8023CC84u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023CC80
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 8023CC84
  c->r[27]=c->r[3]|c->r[3]; // 8023CC88
  c->r[28]=c->r[4]|c->r[4]; // 8023CC8C
  c->r[29]=c->r[5]|c->r[5]; // 8023CC90
  c->r[0]=R32(c->r[6]+0x00000010u); // 8023CC94
  c->r[30]=0u+0x00000000u; // 8023CC98
  c->r[31]=c->r[6]+c->r[0]; // 8023CC9C
  goto L_8023CD44; // 8023CCA0
L_8023CCA4:;
  c->r[0]=rotl(c->r[30],2)&0x0003FFFCu; // 8023CCA4
  c->r[0]=R32(c->r[31]+c->r[0]); // 8023CCA8
  c->r[4]=c->r[4]+c->r[0]; // 8023CCAC
  c->r[0]=R8(c->r[4]+0x00000015u); // 8023CCB0
  cmps(c,0,(int32_t)c->r[0],0); // 8023CCB4
  if (!crb(c,2)) { goto L_8023CD00; } // 8023CCB8
  c->r[12]=R32(c->r[28]+0x00000000u); // 8023CCBC
  c->r[3]=c->r[28]|c->r[28]; // 8023CCC0
  c->r[5]=c->r[29]|c->r[29]; // 8023CCC4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8023CCC8
  c->ctr=c->r[12]; // 8023CCCC
  if (true) { c->lr=0x8023CCD4u; dispatch(c,c->ctr); } // 8023CCD0
  cmps(c,0,(int32_t)c->r[3],0); // 8023CCD4
  if (crb(c,2)) { goto L_8023CD40; } // 8023CCD8
  c->r[0]=R32(c->r[27]+0x00000018u); // 8023CCDC
  c->r[5]=rotl(c->r[30],4)&0x000FFFF0u; // 8023CCE0
  c->r[4]=c->r[0]+c->r[5]; // 8023CCE4
  W32(c->r[4]+0x00000008u,c->r[27]); // 8023CCE8
  W16(c->r[4]+0x0000000Cu,c->r[30]); // 8023CCEC
  c->r[0]=R32(c->r[27]+0x00000018u); // 8023CCF0
  c->r[4]=c->r[0]+c->r[5]; // 8023CCF4
  c->lr=0x8023CCFCu; f_802436FC(c); // 8023CCF8
  goto L_8023CD40; // 8023CCFC
L_8023CD00:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8023CD00
  c->r[3]=c->r[28]|c->r[28]; // 8023CD04
  c->r[5]=c->r[29]|c->r[29]; // 8023CD08
  c->r[12]=R32(c->r[12]+0x00000040u); // 8023CD0C
  c->ctr=c->r[12]; // 8023CD10
  if (true) { c->lr=0x8023CD18u; dispatch(c,c->ctr); } // 8023CD14
  cmps(c,0,(int32_t)c->r[3],0); // 8023CD18
  if (crb(c,2)) { goto L_8023CD40; } // 8023CD1C
  c->r[0]=R32(c->r[27]+0x00000018u); // 8023CD20
  c->r[5]=rotl(c->r[30],4)&0x000FFFF0u; // 8023CD24
  c->r[4]=c->r[0]+c->r[5]; // 8023CD28
  W32(c->r[4]+0x00000008u,c->r[27]); // 8023CD2C
  W16(c->r[4]+0x0000000Cu,c->r[30]); // 8023CD30
  c->r[0]=R32(c->r[27]+0x00000018u); // 8023CD34
  c->r[4]=c->r[0]+c->r[5]; // 8023CD38
  c->lr=0x8023CD40u; f_80242974(c); // 8023CD3C
L_8023CD40:;
  c->r[30]=c->r[30]+0x00000001u; // 8023CD40
L_8023CD44:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 8023CD44
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8023CD48
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 8023CD4C
  cmpu(c,0,c->r[3],c->r[0]); // 8023CD50
  if (crb(c,0)) { IRQCHK(c); goto L_8023CCA4; } // 8023CD54
  c->r[11]=c->r[1]+0x00000020u; // 8023CD58
  c->lr=0x8023CD60u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023CD5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023CD60
  c->lr=c->r[0]; // 8023CD64
  c->r[1]=c->r[1]+0x00000020u; // 8023CD68
  return; // 8023CD6C
}

// Bind__Q36nw4hbm3lyt18AnimTransformBasicFPQ36nw4hbm3lyt8Material
void f_8023CD70(Ctx* __restrict c) {
  trace_call(0x8023CD70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023CD70
  c->r[0]=c->lr; // 8023CD74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023CD78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8023CD7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8023CD80
  c->r[30]=0u+0x00000000u; // 8023CD84
  W32(c->r[1]+0x00000014u,c->r[29]); // 8023CD88
  c->r[29]=c->r[4]|c->r[4]; // 8023CD8C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8023CD90
  c->r[28]=c->r[3]|c->r[3]; // 8023CD94
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 8023CD98
  c->r[0]=R32(c->r[5]+0x00000010u); // 8023CD9C
  c->r[31]=c->r[5]+c->r[0]; // 8023CDA0
  goto L_8023CDF8; // 8023CDA4
L_8023CDA8:;
  c->r[0]=rotl(c->r[30],2)&0x0003FFFCu; // 8023CDA8
  c->r[0]=R32(c->r[31]+c->r[0]); // 8023CDAC
  c->r[4]=c->r[4]+c->r[0]; // 8023CDB0
  c->r[0]=R8(c->r[4]+0x00000015u); // 8023CDB4
  cmpu(c,0,c->r[0],0x00000001u); // 8023CDB8
  if (!crb(c,2)) { goto L_8023CDF4; } // 8023CDBC
  c->r[3]=c->r[29]+0x00000004u; // 8023CDC0
  c->lr=0x8023CDC8u; f_8023D85C(c); // 8023CDC4
  cmps(c,0,(int32_t)c->r[3],0); // 8023CDC8
  if (crb(c,2)) { goto L_8023CDF4; } // 8023CDCC
  c->r[0]=R32(c->r[28]+0x00000018u); // 8023CDD0
  c->r[5]=rotl(c->r[30],4)&0x000FFFF0u; // 8023CDD4
  c->r[3]=c->r[29]|c->r[29]; // 8023CDD8
  c->r[4]=c->r[0]+c->r[5]; // 8023CDDC
  W32(c->r[4]+0x00000008u,c->r[28]); // 8023CDE0
  W16(c->r[4]+0x0000000Cu,c->r[30]); // 8023CDE4
  c->r[0]=R32(c->r[28]+0x00000018u); // 8023CDE8
  c->r[4]=c->r[0]+c->r[5]; // 8023CDEC
  c->lr=0x8023CDF4u; f_80242974(c); // 8023CDF0
L_8023CDF4:;
  c->r[30]=c->r[30]+0x00000001u; // 8023CDF4
L_8023CDF8:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 8023CDF8
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8023CDFC
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 8023CE00
  cmpu(c,0,c->r[3],c->r[0]); // 8023CE04
  if (crb(c,0)) { IRQCHK(c); goto L_8023CDA8; } // 8023CE08
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023CE0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8023CE10
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023CE14
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023CE18
  c->r[28]=R32(c->r[1]+0x00000010u); // 8023CE1C
  c->lr=c->r[0]; // 8023CE20
  c->r[1]=c->r[1]+0x00000020u; // 8023CE24
  return; // 8023CE28
}

// Animate__Q36nw4hbm3lyt18AnimTransformBasicFUlPQ36nw4hbm3lyt4Pane
void f_8023CE2C(Ctx* __restrict c) {
  trace_call(0x8023CE2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023CE2C
  c->r[0]=c->lr; // 8023CE30
  W32(c->r[1]+0x00000064u,c->r[0]); // 8023CE34
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8023CE38
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8023CE3C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8023CE40
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8023CE44
  c->r[11]=c->r[1]+0x00000040u; // 8023CE48
  c->lr=0x8023CE50u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023CE4C
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 8023CE50
  c->r[6]=0u+0x80260000u; // 8023CE54
  c->r[31]=0u+0x524C0000u; // 8023CE58
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8023CE5C
  c->r[0]=R32(c->r[7]+0x00000010u); // 8023CE60
  c->r[22]=c->r[3]|c->r[3]; // 8023CE64
  {uint32_t ea=c->r[6]+0x00001A24u; c->f[31]=c->ps1[31]=RF32(ea);} // 8023CE68
  c->r[23]=c->r[5]|c->r[5]; // 8023CE6C
  c->r[0]=c->r[7]+c->r[0]; // 8023CE70
  c->r[30]=c->r[31]+0x00005643u; // 8023CE74
  c->r[0]=R32(c->r[4]+c->r[0]); // 8023CE78
  c->r[24]=0u+0x00000000u; // 8023CE7C
  c->r[28]=c->r[7]+c->r[0]; // 8023CE80
  c->r[26]=c->r[28]+0x00000018u; // 8023CE84
  goto L_8023CFE8; // 8023CE88
L_8023CE8C:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 8023CE8C
  c->r[3]=R32(c->r[28]+c->r[0]); // 8023CE90
  c->r[27]=c->r[28]+c->r[0]; // 8023CE94
  c->r[25]=c->r[27]+0x00000008u; // 8023CE98
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 8023CE9C
  if (crb(c,2)) { goto L_8023CF74; } // 8023CEA0
  if (!crb(c,0)) { goto L_8023CEB8; } // 8023CEA4
  c->r[0]=c->r[31]+0x00005041u; // 8023CEA8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023CEAC
  if (crb(c,2)) { goto L_8023CEC8; } // 8023CEB0
  goto L_8023CFE0; // 8023CEB4
L_8023CEB8:;
  c->r[0]=c->r[31]+0x00005649u; // 8023CEB8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023CEBC
  if (crb(c,2)) { goto L_8023CF18; } // 8023CEC0
  goto L_8023CFE0; // 8023CEC4
L_8023CEC8:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 8023CEC8
  c->r[29]=0u+0x00000000u; // 8023CECC
  goto L_8023CF08; // 8023CED0
L_8023CED4:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8023CED4
  c->f[1]=c->f[30]; // 8023CED8
  c->r[21]=c->r[27]+c->r[0]; // 8023CEDC
  c->r[0]=R32(c->r[21]+0x00000008u); // 8023CEE0
  c->r[4]=R16(c->r[21]+0x00000004u); // 8023CEE4
  c->r[3]=c->r[21]+c->r[0]; // 8023CEE8
  c->lr=0x8023CEF0u; f_8023C894(c); // 8023CEEC
  c->r[0]=R8(c->r[21]+0x00000001u); // 8023CEF0
  c->r[25]=c->r[25]+0x00000004u; // 8023CEF4
  c->r[29]=c->r[29]+0x00000001u; // 8023CEF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8023CEFC
  c->r[3]=c->r[23]+c->r[0]; // 8023CF00
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 8023CF04
L_8023CF08:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8023CF08
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023CF0C
  if (crb(c,0)) { IRQCHK(c); goto L_8023CED4; } // 8023CF10
  goto L_8023CFE0; // 8023CF14
L_8023CF18:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 8023CF18
  c->r[29]=0u+0x00000000u; // 8023CF1C
  goto L_8023CF64; // 8023CF20
L_8023CF24:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8023CF24
  c->f[1]=c->f[30]; // 8023CF28
  c->r[3]=c->r[27]+c->r[0]; // 8023CF2C
  c->r[0]=R32(c->r[3]+0x00000008u); // 8023CF30
  c->r[4]=R16(c->r[3]+0x00000004u); // 8023CF34
  c->r[3]=c->r[3]+c->r[0]; // 8023CF38
  c->lr=0x8023CF40u; f_8023C7A4(c); // 8023CF3C
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 8023CF40
  c->r[0]=R8(c->r[23]+0x000000CFu); // 8023CF44
  c->r[3]=0u-c->r[4]; // 8023CF48
  c->r[25]=c->r[25]+0x00000004u; // 8023CF4C
  c->r[3]=c->r[3]|c->r[4]; // 8023CF50
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8023CF54
  c->r[0]=(rotl(c->r[3],1)&0x00000001u)|(c->r[0]&~0x00000001u); // 8023CF58
  c->r[29]=c->r[29]+0x00000001u; // 8023CF5C
  W8(c->r[23]+0x000000CFu,c->r[0]); // 8023CF60
L_8023CF64:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8023CF64
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023CF68
  if (crb(c,0)) { IRQCHK(c); goto L_8023CF24; } // 8023CF6C
  goto L_8023CFE0; // 8023CF70
L_8023CF74:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8023CF74
  c->r[29]=0u+0x00000000u; // 8023CF78
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 8023CF7C
  cmps(c,0,(int32_t)c->r[0],0); // 8023CF80
  if (!crb(c,1)) { goto L_8023CFE0; } // 8023CF84
  goto L_8023CFD4; // 8023CF88
L_8023CF8C:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8023CF8C
  c->f[1]=c->f[30]; // 8023CF90
  c->r[21]=c->r[27]+c->r[0]; // 8023CF94
  c->r[0]=R32(c->r[21]+0x00000008u); // 8023CF98
  c->r[4]=R16(c->r[21]+0x00000004u); // 8023CF9C
  c->r[3]=c->r[21]+c->r[0]; // 8023CFA0
  c->lr=0x8023CFA8u; f_8023C894(c); // 8023CFA4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 8023CFA8
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,2);} // 8023CFAC
  c->r[3]=c->r[23]|c->r[23]; // 8023CFB0
  c->r[12]=R32(c->r[23]+0x00000000u); // 8023CFB4
  c->r[5]=R8(c->r[1]+0x00000008u); // 8023CFB8
  c->r[12]=R32(c->r[12]+0x00000030u); // 8023CFBC
  c->r[4]=R8(c->r[21]+0x00000001u); // 8023CFC0
  c->ctr=c->r[12]; // 8023CFC4
  if (true) { c->lr=0x8023CFCCu; dispatch(c,c->ctr); } // 8023CFC8
  c->r[25]=c->r[25]+0x00000004u; // 8023CFCC
  c->r[29]=c->r[29]+0x00000001u; // 8023CFD0
L_8023CFD4:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8023CFD4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023CFD8
  if (crb(c,0)) { IRQCHK(c); goto L_8023CF8C; } // 8023CFDC
L_8023CFE0:;
  c->r[26]=c->r[26]+0x00000004u; // 8023CFE0
  c->r[24]=c->r[24]+0x00000001u; // 8023CFE4
L_8023CFE8:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 8023CFE8
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 8023CFEC
  if (crb(c,0)) { IRQCHK(c); goto L_8023CE8C; } // 8023CFF0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8023CFF4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8023CFF8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8023CFFC
  c->r[11]=c->r[1]+0x00000040u; // 8023D000
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8023D004
  c->lr=0x8023D00Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023D008
  c->r[0]=R32(c->r[1]+0x00000064u); // 8023D00C
  c->lr=c->r[0]; // 8023D010
  c->r[1]=c->r[1]+0x00000060u; // 8023D014
  return; // 8023D018
}

// Animate__Q36nw4hbm3lyt18AnimTransformBasicFUlPQ36nw4hbm3lyt8Material
void f_8023D01C(Ctx* __restrict c) {
  trace_call(0x8023D01Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D01C
  c->r[0]=c->lr; // 8023D020
  W32(c->r[1]+0x00000074u,c->r[0]); // 8023D024
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8023D028
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8023D02C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 8023D030
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 8023D034
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 8023D038
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 8023D03C
  c->r[11]=c->r[1]+0x00000040u; // 8023D040
  c->lr=0x8023D048u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023D044
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 8023D048
  c->r[6]=0u+0x80260000u; // 8023D04C
  c->r[31]=0u+0x524C0000u; // 8023D050
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8023D054
  c->r[0]=R32(c->r[7]+0x00000010u); // 8023D058
  c->r[21]=c->r[3]|c->r[3]; // 8023D05C
  {uint32_t ea=c->r[6]+0x00001A24u; c->f[30]=c->ps1[30]=RF32(ea);} // 8023D060
  c->r[22]=c->r[5]|c->r[5]; // 8023D064
  c->r[0]=c->r[7]+c->r[0]; // 8023D068
  c->r[30]=c->r[31]+0x00005450u; // 8023D06C
  c->r[0]=R32(c->r[4]+c->r[0]); // 8023D070
  c->r[23]=0u+0x00000000u; // 8023D074
  c->r[28]=c->r[7]+c->r[0]; // 8023D078
  c->r[26]=c->r[28]+0x00000018u; // 8023D07C
  goto L_8023D2D0; // 8023D080
L_8023D084:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 8023D084
  c->r[3]=R32(c->r[28]+c->r[0]); // 8023D088
  c->r[27]=c->r[28]+c->r[0]; // 8023D08C
  c->r[25]=c->r[27]+0x00000008u; // 8023D090
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 8023D094
  if (crb(c,2)) { goto L_8023D1D4; } // 8023D098
  if (!crb(c,0)) { goto L_8023D0C0; } // 8023D09C
  c->r[0]=c->r[31]+0x00004D43u; // 8023D0A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023D0A4
  if (crb(c,2)) { goto L_8023D0D0; } // 8023D0A8
  if (!crb(c,0)) { goto L_8023D2C8; } // 8023D0AC
  c->r[0]=c->r[31]+0x0000494Du; // 8023D0B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023D0B4
  if (crb(c,2)) { goto L_8023D254; } // 8023D0B8
  goto L_8023D2C8; // 8023D0BC
L_8023D0C0:;
  c->r[0]=c->r[31]+0x00005453u; // 8023D0C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023D0C4
  if (crb(c,2)) { goto L_8023D15C; } // 8023D0C8
  goto L_8023D2C8; // 8023D0CC
L_8023D0D0:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8023D0D0
  c->r[24]=0u+0x00000000u; // 8023D0D4
  {uint32_t ea=c->r[21]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 8023D0D8
  cmps(c,0,(int32_t)c->r[0],0); // 8023D0DC
  if (!crb(c,1)) { goto L_8023D2C8; } // 8023D0E0
  goto L_8023D14C; // 8023D0E4
L_8023D0E8:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8023D0E8
  c->f[1]=c->f[31]; // 8023D0EC
  c->r[20]=c->r[27]+c->r[0]; // 8023D0F0
  c->r[0]=R32(c->r[20]+0x00000008u); // 8023D0F4
  c->r[4]=R16(c->r[20]+0x00000004u); // 8023D0F8
  c->r[3]=c->r[20]+c->r[0]; // 8023D0FC
  c->lr=0x8023D104u; f_8023C894(c); // 8023D100
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[30]); // 8023D104
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 8023D108
  c->r[6]=0u+0xFFFFFC00u; // 8023D10C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 8023D110
  cmps(c,0,(int32_t)c->r[0],-1024); // 8023D114
  if (crb(c,0)) { goto L_8023D120; } // 8023D118
  c->r[6]=c->r[0]|c->r[0]; // 8023D11C
L_8023D120:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 8023D120
  c->r[4]=R8(c->r[20]+0x00000001u); // 8023D124
  cmps(c,0,(int32_t)c->r[0],1023); // 8023D128
  c->r[3]=c->r[22]|c->r[22]; // 8023D12C
  c->r[5]=0u+0x000003FFu; // 8023D130
  if (crb(c,1)) { goto L_8023D13C; } // 8023D134
  c->r[5]=c->r[6]|c->r[6]; // 8023D138
L_8023D13C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 8023D13C
  c->lr=0x8023D144u; f_802417BC(c); // 8023D140
  c->r[25]=c->r[25]+0x00000004u; // 8023D144
  c->r[24]=c->r[24]+0x00000001u; // 8023D148
L_8023D14C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8023D14C
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 8023D150
  if (crb(c,0)) { IRQCHK(c); goto L_8023D0E8; } // 8023D154
  goto L_8023D2C8; // 8023D158
L_8023D15C:;
  {uint32_t ea=c->r[21]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 8023D15C
  c->r[29]=0u+0x00000000u; // 8023D160
  goto L_8023D1C4; // 8023D164
L_8023D168:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 8023D168
  c->r[0]=R32(c->r[22]+0x0000004Cu); // 8023D16C
  c->r[20]=c->r[27]+c->r[3]; // 8023D170
  c->r[3]=R8(c->r[27]+c->r[3]); // 8023D174
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 8023D178
  cmpu(c,0,c->r[3],c->r[0]); // 8023D17C
  if (!crb(c,0)) { goto L_8023D1BC; } // 8023D180
  c->r[0]=R32(c->r[20]+0x00000008u); // 8023D184
  c->f[1]=c->f[29]; // 8023D188
  c->r[4]=R16(c->r[20]+0x00000004u); // 8023D18C
  c->r[3]=c->r[20]+c->r[0]; // 8023D190
  c->lr=0x8023D198u; f_8023C894(c); // 8023D194
  c->f[31]=c->f[1]; // 8023D198
  c->r[24]=R8(c->r[20]+0x00000001u); // 8023D19C
  c->r[20]=R8(c->r[20]+0x00000000u); // 8023D1A0
  c->r[3]=c->r[22]|c->r[22]; // 8023D1A4
  c->lr=0x8023D1ACu; f_80241474(c); // 8023D1A8
  c->r[4]=(uint32_t)((int32_t)c->r[20]*(int32_t)20); // 8023D1AC
  c->r[0]=rotl(c->r[24],2)&0xFFFFFFFCu; // 8023D1B0
  c->r[3]=c->r[3]+c->r[4]; // 8023D1B4
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 8023D1B8
L_8023D1BC:;
  c->r[25]=c->r[25]+0x00000004u; // 8023D1BC
  c->r[29]=c->r[29]+0x00000001u; // 8023D1C0
L_8023D1C4:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8023D1C4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023D1C8
  if (crb(c,0)) { IRQCHK(c); goto L_8023D168; } // 8023D1CC
  goto L_8023D2C8; // 8023D1D0
L_8023D1D4:;
  c->r[24]=R32(c->r[21]+0x00000014u); // 8023D1D4
  cmps(c,0,(int32_t)c->r[24],0); // 8023D1D8
  if (crb(c,2)) { goto L_8023D2C8; } // 8023D1DC
  {uint32_t ea=c->r[21]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 8023D1E0
  c->r[29]=0u+0x00000000u; // 8023D1E4
  goto L_8023D244; // 8023D1E8
L_8023D1EC:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 8023D1EC
  c->r[0]=R32(c->r[22]+0x00000050u); // 8023D1F0
  c->r[20]=c->r[27]+c->r[3]; // 8023D1F4
  c->r[3]=R8(c->r[27]+c->r[3]); // 8023D1F8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8023D1FC
  cmpu(c,0,c->r[3],c->r[0]); // 8023D200
  if (!crb(c,0)) { goto L_8023D23C; } // 8023D204
  c->r[0]=R8(c->r[20]+0x00000001u); // 8023D208
  cmps(c,0,(int32_t)c->r[0],0); // 8023D20C
  if (!crb(c,2)) { goto L_8023D23C; } // 8023D210
  c->r[0]=R32(c->r[20]+0x00000008u); // 8023D214
  c->f[1]=c->f[29]; // 8023D218
  c->r[4]=R16(c->r[20]+0x00000004u); // 8023D21C
  c->r[3]=c->r[20]+c->r[0]; // 8023D220
  c->lr=0x8023D228u; f_8023C7A4(c); // 8023D224
  c->r[0]=rotl(c->r[3],2)&0x0003FFFCu; // 8023D228
  c->r[4]=R8(c->r[20]+0x00000000u); // 8023D22C
  c->r[5]=R32(c->r[24]+c->r[0]); // 8023D230
  c->r[3]=c->r[22]|c->r[22]; // 8023D234
  c->lr=0x8023D23Cu; f_802416E4(c); // 8023D238
L_8023D23C:;
  c->r[25]=c->r[25]+0x00000004u; // 8023D23C
  c->r[29]=c->r[29]+0x00000001u; // 8023D240
L_8023D244:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8023D244
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023D248
  if (crb(c,0)) { IRQCHK(c); goto L_8023D1EC; } // 8023D24C
  goto L_8023D2C8; // 8023D250
L_8023D254:;
  {uint32_t ea=c->r[21]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 8023D254
  c->r[29]=0u+0x00000000u; // 8023D258
  goto L_8023D2BC; // 8023D25C
L_8023D260:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 8023D260
  c->r[0]=R32(c->r[22]+0x0000004Cu); // 8023D264
  c->r[24]=c->r[27]+c->r[3]; // 8023D268
  c->r[3]=R8(c->r[27]+c->r[3]); // 8023D26C
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 8023D270
  cmpu(c,0,c->r[3],c->r[0]); // 8023D274
  if (!crb(c,0)) { goto L_8023D2B4; } // 8023D278
  c->r[0]=R32(c->r[24]+0x00000008u); // 8023D27C
  c->f[1]=c->f[29]; // 8023D280
  c->r[4]=R16(c->r[24]+0x00000004u); // 8023D284
  c->r[3]=c->r[24]+c->r[0]; // 8023D288
  c->lr=0x8023D290u; f_8023C894(c); // 8023D28C
  c->f[31]=c->f[1]; // 8023D290
  c->r[20]=R8(c->r[24]+0x00000001u); // 8023D294
  c->r[24]=R8(c->r[24]+0x00000000u); // 8023D298
  c->r[3]=c->r[22]|c->r[22]; // 8023D29C
  c->lr=0x8023D2A4u; f_802414A8(c); // 8023D2A0
  c->r[4]=(uint32_t)((int32_t)c->r[24]*(int32_t)20); // 8023D2A4
  c->r[0]=rotl(c->r[20],2)&0xFFFFFFFCu; // 8023D2A8
  c->r[3]=c->r[3]+c->r[4]; // 8023D2AC
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 8023D2B0
L_8023D2B4:;
  c->r[25]=c->r[25]+0x00000004u; // 8023D2B4
  c->r[29]=c->r[29]+0x00000001u; // 8023D2B8
L_8023D2BC:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8023D2BC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023D2C0
  if (crb(c,0)) { IRQCHK(c); goto L_8023D260; } // 8023D2C4
L_8023D2C8:;
  c->r[26]=c->r[26]+0x00000004u; // 8023D2C8
  c->r[23]=c->r[23]+0x00000001u; // 8023D2CC
L_8023D2D0:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 8023D2D0
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 8023D2D4
  if (crb(c,0)) { IRQCHK(c); goto L_8023D084; } // 8023D2D8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8023D2DC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8023D2E0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8023D2E4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8023D2E8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 8023D2EC
  c->r[11]=c->r[1]+0x00000040u; // 8023D2F0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 8023D2F4
  c->lr=0x8023D2FCu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023D2F8
  c->r[0]=R32(c->r[1]+0x00000074u); // 8023D2FC
  c->lr=c->r[0]; // 8023D300
  c->r[1]=c->r[1]+0x00000070u; // 8023D304
  return; // 8023D308
}

// FindAnimationLink__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut40LinkList<Q36nw4hbm3lyt13AnimationLink,0>PQ36nw4hbm3lyt13AnimTransform
void f_8023D30C(Ctx* __restrict c) {
  trace_call(0x8023D30Cu);
  c->r[5]=R32(c->r[3]+0x00000004u); // 8023D30C
  c->r[0]=c->r[3]+0x00000004u; // 8023D310
  goto L_8023D330; // 8023D314
L_8023D318:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8023D318
  cmpu(c,0,c->r[4],c->r[3]); // 8023D31C
  if (!crb(c,2)) { goto L_8023D32C; } // 8023D320
  c->r[3]=c->r[5]|c->r[5]; // 8023D324
  return; // 8023D328
L_8023D32C:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 8023D32C
L_8023D330:;
  cmpu(c,0,c->r[5],c->r[0]); // 8023D330
  if (!crb(c,2)) { IRQCHK(c); goto L_8023D318; } // 8023D334
  c->r[3]=0u+0x00000000u; // 8023D338
  return; // 8023D33C
}

// FindNameResource__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCc
void f_8023D340(Ctx* __restrict c) {
  trace_call(0x8023D340u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D340
  c->r[0]=c->lr; // 8023D344
  c->r[6]=0u+0x802A0000u; // 8023D348
  W32(c->r[1]+0x00000044u,c->r[0]); // 8023D34C
  c->r[5]=c->r[1]+0x00000018u; // 8023D350
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8023D354
  W32(c->r[1]+0x00000038u,c->r[30]); // 8023D358
  c->r[30]=0u+0xFFFFFFFFu; // 8023D35C
  W32(c->r[1]+0x00000034u,c->r[29]); // 8023D360
  c->r[29]=c->r[4]|c->r[4]; // 8023D364
  c->r[4]=c->r[6]+0x000005A0u; // 8023D368
  W32(c->r[1]+0x00000030u,c->r[28]); // 8023D36C
  c->r[28]=c->r[3]|c->r[3]; // 8023D370
  c->lr=0x8023D378u; f_800F7520(c); // 8023D374
  c->r[31]=0u+0x802A0000u; // 8023D378
  goto L_8023D3DC; // 8023D37C
L_8023D380:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 8023D380
  cmps(c,0,(int32_t)c->r[0],0); // 8023D384
  if (crb(c,2)) { goto L_8023D3C0; } // 8023D388
  c->r[4]=R32(c->r[1]+0x00000014u); // 8023D38C
  c->r[3]=c->r[28]|c->r[28]; // 8023D390
  c->lr=0x8023D398u; f_800F74C8(c); // 8023D394
  c->r[3]=c->r[28]|c->r[28]; // 8023D398
  c->r[4]=c->r[29]|c->r[29]; // 8023D39C
  c->lr=0x8023D3A4u; f_8023D340(c); // 8023D3A0
  c->r[30]=c->r[3]|c->r[3]; // 8023D3A4
  c->r[3]=c->r[28]|c->r[28]; // 8023D3A8
  c->r[4]=c->r[31]+0x000005A4u; // 8023D3AC
  c->lr=0x8023D3B4u; f_800F74C8(c); // 8023D3B0
  cmps(c,0,(int32_t)c->r[30],-1); // 8023D3B4
  if (!crb(c,2)) { goto L_8023D3F0; } // 8023D3B8
  goto L_8023D3DC; // 8023D3BC
L_8023D3C0:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 8023D3C0
  c->r[3]=c->r[29]|c->r[29]; // 8023D3C4
  c->lr=0x8023D3CCu; f_800E416C(c); // 8023D3C8
  cmps(c,0,(int32_t)c->r[3],0); // 8023D3CC
  if (!crb(c,2)) { goto L_8023D3DC; } // 8023D3D0
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 8023D3D4
  goto L_8023D3F0; // 8023D3D8
L_8023D3DC:;
  c->r[3]=c->r[1]+0x00000018u; // 8023D3DC
  c->r[4]=c->r[1]+0x00000008u; // 8023D3E0
  c->lr=0x8023D3E8u; f_800F759C(c); // 8023D3E4
  cmps(c,0,(int32_t)c->r[3],0); // 8023D3E8
  if (!crb(c,2)) { IRQCHK(c); goto L_8023D380; } // 8023D3EC
L_8023D3F0:;
  c->r[3]=c->r[1]+0x00000018u; // 8023D3F0
  c->lr=0x8023D3F8u; f_800F7654(c); // 8023D3F4
  c->r[3]=c->r[30]|c->r[30]; // 8023D3F8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8023D3FC
  c->r[30]=R32(c->r[1]+0x00000038u); // 8023D400
  c->r[29]=R32(c->r[1]+0x00000034u); // 8023D404
  c->r[28]=R32(c->r[1]+0x00000030u); // 8023D408
  c->r[0]=R32(c->r[1]+0x00000044u); // 8023D40C
  c->lr=c->r[0]; // 8023D410
  c->r[1]=c->r[1]+0x00000040u; // 8023D414
  return; // 8023D418
}

// GetResourceSub__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCcUlPCcPUl
void f_8023D41C(Ctx* __restrict c) {
  trace_call(0x8023D41Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D41C
  c->r[0]=c->lr; // 8023D420
  W32(c->r[1]+0x00000044u,c->r[0]); // 8023D424
  c->r[11]=c->r[1]+0x00000040u; // 8023D428
  c->lr=0x8023D430u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023D42C
  c->r[26]=c->r[3]|c->r[3]; // 8023D430
  c->r[27]=c->r[4]|c->r[4]; // 8023D434
  c->r[28]=c->r[5]|c->r[5]; // 8023D438
  c->r[29]=c->r[6]|c->r[6]; // 8023D43C
  c->r[30]=c->r[7]|c->r[7]; // 8023D440
  c->r[31]=0u+0xFFFFFFFFu; // 8023D444
  c->lr=0x8023D44Cu; f_800F7078(c); // 8023D448
  cmps(c,0,(int32_t)c->r[3],-1); // 8023D44C
  if (crb(c,2)) { goto L_8023D500; } // 8023D450
  c->r[3]=c->r[26]|c->r[26]; // 8023D454
  c->r[4]=c->r[27]|c->r[27]; // 8023D458
  c->lr=0x8023D460u; f_800F74C8(c); // 8023D45C
  cmps(c,0,(int32_t)c->r[3],0); // 8023D460
  if (crb(c,2)) { goto L_8023D500; } // 8023D464
  cmps(c,0,(int32_t)c->r[28],0); // 8023D468
  if (!crb(c,2)) { goto L_8023D484; } // 8023D46C
  c->r[3]=c->r[26]|c->r[26]; // 8023D470
  c->r[4]=c->r[29]|c->r[29]; // 8023D474
  c->lr=0x8023D47Cu; f_8023D340(c); // 8023D478
  c->r[31]=c->r[3]|c->r[3]; // 8023D47C
  goto L_8023D4F0; // 8023D480
L_8023D484:;
  c->r[3]=rotl(c->r[28],8)&0x000000FFu; // 8023D484
  c->r[6]=rotl(c->r[28],16)&0x0000FFFFu; // 8023D488
  c->r[5]=rotl(c->r[28],24)&0x00FFFFFFu; // 8023D48C
  c->r[0]=0u+0x00000000u; // 8023D490
  W8(c->r[1]+0x00000008u,c->r[3]); // 8023D494
  c->r[3]=c->r[26]|c->r[26]; // 8023D498
  c->r[4]=c->r[1]+0x00000008u; // 8023D49C
  W8(c->r[1]+0x00000009u,c->r[6]); // 8023D4A0
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8023D4A4
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 8023D4A8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8023D4AC
  c->lr=0x8023D4B4u; f_800F7078(c); // 8023D4B0
  cmps(c,0,(int32_t)c->r[3],-1); // 8023D4B4
  if (crb(c,2)) { goto L_8023D4F0; } // 8023D4B8
  c->r[3]=c->r[26]|c->r[26]; // 8023D4BC
  c->r[4]=c->r[1]+0x00000008u; // 8023D4C0
  c->lr=0x8023D4C8u; f_800F74C8(c); // 8023D4C4
  cmps(c,0,(int32_t)c->r[3],0); // 8023D4C8
  if (crb(c,2)) { goto L_8023D4F0; } // 8023D4CC
  c->r[3]=c->r[26]|c->r[26]; // 8023D4D0
  c->r[4]=c->r[29]|c->r[29]; // 8023D4D4
  c->lr=0x8023D4DCu; f_800F7078(c); // 8023D4D8
  c->r[4]=0u+0x802A0000u; // 8023D4DC
  c->r[31]=c->r[3]|c->r[3]; // 8023D4E0
  c->r[3]=c->r[26]|c->r[26]; // 8023D4E4
  c->r[4]=c->r[4]+0x000005A4u; // 8023D4E8
  c->lr=0x8023D4F0u; f_800F74C8(c); // 8023D4EC
L_8023D4F0:;
  c->r[4]=0u+0x802A0000u; // 8023D4F0
  c->r[3]=c->r[26]|c->r[26]; // 8023D4F4
  c->r[4]=c->r[4]+0x000005A4u; // 8023D4F8
  c->lr=0x8023D500u; f_800F74C8(c); // 8023D4FC
L_8023D500:;
  cmps(c,0,(int32_t)c->r[31],-1); // 8023D500
  if (crb(c,2)) { goto L_8023D548; } // 8023D504
  c->r[3]=c->r[26]|c->r[26]; // 8023D508
  c->r[4]=c->r[31]|c->r[31]; // 8023D50C
  c->r[5]=c->r[1]+0x00000010u; // 8023D510
  c->lr=0x8023D518u; f_800F7028(c); // 8023D514
  c->r[3]=c->r[1]+0x00000010u; // 8023D518
  c->lr=0x8023D520u; f_800F74A4(c); // 8023D51C
  cmps(c,0,(int32_t)c->r[30],0); // 8023D520
  c->r[31]=c->r[3]|c->r[3]; // 8023D524
  if (crb(c,2)) { goto L_8023D538; } // 8023D528
  c->r[3]=c->r[1]+0x00000010u; // 8023D52C
  c->lr=0x8023D534u; f_800F74B8(c); // 8023D530
  W32(c->r[30]+0x00000000u,c->r[3]); // 8023D534
L_8023D538:;
  c->r[3]=c->r[1]+0x00000010u; // 8023D538
  c->lr=0x8023D540u; f_800F74C0(c); // 8023D53C
  c->r[3]=c->r[31]|c->r[31]; // 8023D540
  goto L_8023D54C; // 8023D544
L_8023D548:;
  c->r[3]=0u+0x00000000u; // 8023D548
L_8023D54C:;
  c->r[11]=c->r[1]+0x00000040u; // 8023D54C
  c->lr=0x8023D554u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023D550
  c->r[0]=R32(c->r[1]+0x00000044u); // 8023D554
  c->lr=c->r[0]; // 8023D558
  c->r[1]=c->r[1]+0x00000040u; // 8023D55C
  return; // 8023D560
}

// __ct__Q36nw4hbm3lyt19ArcResourceAccessorFv
void f_8023D564(Ctx* __restrict c) {
  trace_call(0x8023D564u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D564
  c->r[0]=c->lr; // 8023D568
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023D56C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023D570
  c->r[31]=c->r[3]|c->r[3]; // 8023D574
  c->lr=0x8023D57Cu; f_80243FF8(c); // 8023D578
  c->r[0]=0u+0x00000000u; // 8023D57C
  c->r[4]=0u+0x802A0000u; // 8023D580
  W32(c->r[31]+0x00000028u,c->r[0]); // 8023D584
  c->r[5]=c->r[31]+0x00000028u; // 8023D588
  c->r[4]=c->r[4]+0x000005A8u; // 8023D58C
  c->r[3]=c->r[31]|c->r[31]; // 8023D590
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 8023D594
  W32(c->r[31]+0x00000000u,c->r[4]); // 8023D598
  W32(c->r[31]+0x00000020u,c->r[0]); // 8023D59C
  W32(c->r[31]+0x00000024u,c->r[0]); // 8023D5A0
  W32(c->r[31]+0x00000028u,c->r[5]); // 8023D5A4
  W32(c->r[31]+0x0000002Cu,c->r[5]); // 8023D5A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023D5AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023D5B0
  c->lr=c->r[0]; // 8023D5B4
  c->r[1]=c->r[1]+0x00000010u; // 8023D5B8
  return; // 8023D5BC
}

// Attach__Q36nw4hbm3lyt19ArcResourceAccessorFPvPCc
void f_8023D5C0(Ctx* __restrict c) {
  trace_call(0x8023D5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D5C0
  c->r[0]=c->lr; // 8023D5C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023D5C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8023D5CC
  c->r[31]=c->r[5]|c->r[5]; // 8023D5D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8023D5D4
  c->r[30]=c->r[4]|c->r[4]; // 8023D5D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8023D5DC
  c->r[29]=c->r[3]|c->r[3]; // 8023D5E0
  c->r[3]=c->r[30]|c->r[30]; // 8023D5E4
  c->r[4]=c->r[29]+0x00000004u; // 8023D5E8
  c->lr=0x8023D5F0u; f_800F6CE4(c); // 8023D5EC
  cmps(c,0,(int32_t)c->r[3],0); // 8023D5F0
  if (!crb(c,2)) { goto L_8023D600; } // 8023D5F4
  c->r[3]=0u+0x00000000u; // 8023D5F8
  goto L_8023D620; // 8023D5FC
L_8023D600:;
  W32(c->r[29]+0x00000020u,c->r[30]); // 8023D600
  c->r[4]=c->r[31]|c->r[31]; // 8023D604
  c->r[3]=c->r[29]+0x00000030u; // 8023D608
  c->r[5]=0u+0x0000007Fu; // 8023D60C
  c->lr=0x8023D614u; f_800DBA68(c); // 8023D610
  c->r[0]=0u+0x00000000u; // 8023D614
  c->r[3]=0u+0x00000001u; // 8023D618
  W8(c->r[29]+0x000000AFu,c->r[0]); // 8023D61C
L_8023D620:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023D620
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8023D624
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023D628
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023D62C
  c->lr=c->r[0]; // 8023D630
  c->r[1]=c->r[1]+0x00000020u; // 8023D634
  return; // 8023D638
}

// GetResource__Q36nw4hbm3lyt19ArcResourceAccessorFUlPCcPUl
void f_8023D63C(Ctx* __restrict c) {
  trace_call(0x8023D63Cu);
  c->r[8]=c->r[4]|c->r[4]; // 8023D63C
  c->r[0]=c->r[5]|c->r[5]; // 8023D640
  c->r[7]=c->r[6]|c->r[6]; // 8023D644
  c->r[4]=c->r[3]+0x00000030u; // 8023D648
  c->r[5]=c->r[8]|c->r[8]; // 8023D64C
  c->r[6]=c->r[0]|c->r[0]; // 8023D650
  c->r[3]=c->r[3]+0x00000004u; // 8023D654
  f_8023D41C(c); return; // 8023D658
}

// GetFont__Q36nw4hbm3lyt19ArcResourceAccessorFPCc
void f_8023D65C(Ctx* __restrict c) {
  trace_call(0x8023D65Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D65C
  c->r[0]=c->lr; // 8023D660
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023D664
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8023D668
  W32(c->r[1]+0x00000018u,c->r[30]); // 8023D66C
  c->r[30]=c->r[3]+0x00000028u; // 8023D670
  W32(c->r[1]+0x00000014u,c->r[29]); // 8023D674
  c->r[29]=c->r[4]|c->r[4]; // 8023D678
  c->r[31]=R32(c->r[3]+0x00000028u); // 8023D67C
  goto L_8023D6A4; // 8023D680
L_8023D684:;
  c->r[3]=c->r[29]|c->r[29]; // 8023D684
  c->r[4]=c->r[31]+0x00000008u; // 8023D688
  c->lr=0x8023D690u; f_800DBB24(c); // 8023D68C
  cmps(c,0,(int32_t)c->r[3],0); // 8023D690
  if (!crb(c,2)) { goto L_8023D6A0; } // 8023D694
  c->r[3]=R32(c->r[31]+0x00000088u); // 8023D698
  goto L_8023D6B0; // 8023D69C
L_8023D6A0:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8023D6A0
L_8023D6A4:;
  cmpu(c,0,c->r[31],c->r[30]); // 8023D6A4
  if (!crb(c,2)) { IRQCHK(c); goto L_8023D684; } // 8023D6A8
  c->r[3]=0u+0x00000000u; // 8023D6AC
L_8023D6B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023D6B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8023D6B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023D6B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023D6BC
  c->lr=c->r[0]; // 8023D6C0
  c->r[1]=c->r[1]+0x00000020u; // 8023D6C4
  return; // 8023D6C8
}

// __ct__Q36nw4hbm3lyt8BoundingFPCQ46nw4hbm3lyt3res8BoundingRCQ36nw4hbm3lyt11ResBlockSet
void f_8023D6CC(Ctx* __restrict c) {
  trace_call(0x8023D6CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D6CC
  c->r[0]=c->lr; // 8023D6D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023D6D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023D6D8
  c->r[31]=c->r[3]|c->r[3]; // 8023D6DC
  c->lr=0x8023D6E4u; f_80242B0C(c); // 8023D6E0
  c->r[4]=0u+0x802A0000u; // 8023D6E4
  c->r[3]=c->r[31]|c->r[31]; // 8023D6E8
  c->r[4]=c->r[4]+0x00000620u; // 8023D6EC
  W32(c->r[31]+0x00000000u,c->r[4]); // 8023D6F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023D6F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023D6F8
  c->lr=c->r[0]; // 8023D6FC
  c->r[1]=c->r[1]+0x00000010u; // 8023D700
  return; // 8023D704
}

// __dt__Q36nw4hbm3lyt8BoundingFv
void f_8023D708(Ctx* __restrict c) {
  trace_call(0x8023D708u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D708
  c->r[0]=c->lr; // 8023D70C
  cmps(c,0,(int32_t)c->r[3],0); // 8023D710
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023D714
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023D718
  c->r[31]=c->r[4]|c->r[4]; // 8023D71C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8023D720
  c->r[30]=c->r[3]|c->r[3]; // 8023D724
  if (crb(c,2)) { goto L_8023D744; } // 8023D728
  c->r[4]=0u+0x00000000u; // 8023D72C
  c->lr=0x8023D734u; f_80242C34(c); // 8023D730
  cmps(c,0,(int32_t)c->r[31],0); // 8023D734
  if (!crb(c,1)) { goto L_8023D744; } // 8023D738
  c->r[3]=c->r[30]|c->r[30]; // 8023D73C
  c->lr=0x8023D744u; f_8008DE54(c); // 8023D740
L_8023D744:;
  c->r[3]=c->r[30]|c->r[30]; // 8023D744
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023D748
  c->r[30]=R32(c->r[1]+0x00000008u); // 8023D74C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023D750
  c->lr=c->r[0]; // 8023D754
  c->r[1]=c->r[1]+0x00000010u; // 8023D758
  return; // 8023D75C
}

// DrawSelf__Q36nw4hbm3lyt8BoundingFRCQ36nw4hbm3lyt8DrawInfo
void f_8023D760(Ctx* __restrict c) {
  trace_call(0x8023D760u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D760
  c->r[0]=c->lr; // 8023D764
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023D768
  c->r[0]=R8(c->r[4]+0x00000050u); // 8023D76C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8023D770
  c->r[31]=c->r[3]|c->r[3]; // 8023D774
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 8023D778
  if (crb(c,2)) { goto L_8023D7BC; } // 8023D77C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023D780
  c->r[12]=R32(c->r[12]+0x00000060u); // 8023D784
  c->ctr=c->r[12]; // 8023D788
  if (true) { c->lr=0x8023D790u; dispatch(c,c->ctr); } // 8023D78C
  c->r[4]=0u+0x00FF0000u; // 8023D790
  c->r[3]=c->r[31]|c->r[31]; // 8023D794
  c->r[0]=c->r[4]+0x000000FFu; // 8023D798
  W32(c->r[1]+0x00000008u,c->r[0]); // 8023D79C
  c->lr=0x8023D7A4u; f_80243968(c); // 8023D7A0
  W32(c->r[1]+0x00000014u,c->r[4]); // 8023D7A4
  c->r[4]=c->r[31]+0x0000004Cu; // 8023D7A8
  c->r[5]=c->r[1]+0x00000008u; // 8023D7AC
  W32(c->r[1]+0x00000010u,c->r[3]); // 8023D7B0
  c->r[3]=c->r[1]+0x00000010u; // 8023D7B4
  c->lr=0x8023D7BCu; f_8023E354(c); // 8023D7B8
L_8023D7BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023D7BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8023D7C0
  c->lr=c->r[0]; // 8023D7C4
  c->r[1]=c->r[1]+0x00000020u; // 8023D7C8
  return; // 8023D7CC
}

// __dt__Q36nw4hbm2ut5ColorFv
void f_8023D7D0(Ctx* __restrict c) {
  trace_call(0x8023D7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D7D0
  c->r[0]=c->lr; // 8023D7D4
  cmps(c,0,(int32_t)c->r[3],0); // 8023D7D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023D7DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023D7E0
  c->r[31]=c->r[3]|c->r[3]; // 8023D7E4
  if (crb(c,2)) { goto L_8023D7F8; } // 8023D7E8
  cmps(c,0,(int32_t)c->r[4],0); // 8023D7EC
  if (!crb(c,1)) { goto L_8023D7F8; } // 8023D7F0
  c->lr=0x8023D7F8u; f_8008DE54(c); // 8023D7F4
L_8023D7F8:;
  c->r[3]=c->r[31]|c->r[31]; // 8023D7F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023D7FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023D800
  c->lr=c->r[0]; // 8023D804
  c->r[1]=c->r[1]+0x00000010u; // 8023D808
  return; // 8023D80C
}

// GetRuntimeTypeInfo__Q36nw4hbm3lyt8BoundingCFv
void f_8023D810(Ctx* __restrict c) {
  trace_call(0x8023D810u);
  c->r[3]=0u+0x80360000u; // 8023D810
  c->r[3]=c->r[3]+0xFFFFCDF0u; // 8023D814
  return; // 8023D818
}

// __sinit_\lyt_bounding_cpp
void f_8023D81C(Ctx* __restrict c) {
  trace_call(0x8023D81Cu);
  c->r[4]=0u+0x80360000u; // 8023D81C
  c->r[3]=0u+0x80360000u; // 8023D820
  c->r[4]=c->r[4]+0xFFFFCE28u; // 8023D824
  W32(c->r[3]+0xFFFFCDF0u,c->r[4]); // 8023D828
  return; // 8023D82C
}

// EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc
void f_8023D830(Ctx* __restrict c) {
  trace_call(0x8023D830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D830
  c->r[0]=c->lr; // 8023D834
  c->r[5]=0u+0x00000010u; // 8023D838
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023D83C
  c->lr=0x8023D844u; f_800DBC40(c); // 8023D840
  c->r[0]=cntlz(c->r[3]); // 8023D844
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8023D848
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023D84C
  c->lr=c->r[0]; // 8023D850
  c->r[1]=c->r[1]+0x00000010u; // 8023D854
  return; // 8023D858
}

// EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc
void f_8023D85C(Ctx* __restrict c) {
  trace_call(0x8023D85Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D85C
  c->r[0]=c->lr; // 8023D860
  c->r[5]=0u+0x00000014u; // 8023D864
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023D868
  c->lr=0x8023D870u; f_800DBC40(c); // 8023D86C
  c->r[0]=cntlz(c->r[3]); // 8023D870
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8023D874
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023D878
  c->lr=c->r[0]; // 8023D87C
  c->r[1]=c->r[1]+0x00000010u; // 8023D880
  return; // 8023D884
}

// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader
void f_8023D888(Ctx* __restrict c) {
  trace_call(0x8023D888u);
  c->r[0]=R16(c->r[3]+0x00000004u); // 8023D888
  c->r[4]=0u+0x00000000u; // 8023D88C
  cmpu(c,0,c->r[0],0x0000FEFFu); // 8023D890
  if (!crb(c,2)) { goto L_8023D8A8; } // 8023D894
  c->r[0]=R16(c->r[3]+0x00000006u); // 8023D898
  cmpu(c,0,c->r[0],0x00000008u); // 8023D89C
  if (!crb(c,2)) { goto L_8023D8A8; } // 8023D8A0
  c->r[4]=0u+0x00000001u; // 8023D8A4
L_8023D8A8:;
  c->r[3]=c->r[4]|c->r[4]; // 8023D8A8
  return; // 8023D8AC
}

// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeaderUl
void f_8023D8B0(Ctx* __restrict c) {
  trace_call(0x8023D8B0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8023D8B0
  c->r[5]=0u+0x00000000u; // 8023D8B4
  cmpu(c,0,c->r[4],c->r[0]); // 8023D8B8
  if (!crb(c,2)) { goto L_8023D8DC; } // 8023D8BC
  c->r[0]=R16(c->r[3]+0x00000004u); // 8023D8C0
  cmpu(c,0,c->r[0],0x0000FEFFu); // 8023D8C4
  if (!crb(c,2)) { goto L_8023D8DC; } // 8023D8C8
  c->r[0]=R16(c->r[3]+0x00000006u); // 8023D8CC
  cmpu(c,0,c->r[0],0x00000008u); // 8023D8D0
  if (!crb(c,2)) { goto L_8023D8DC; } // 8023D8D4
  c->r[5]=0u+0x00000001u; // 8023D8D8
L_8023D8DC:;
  c->r[3]=c->r[5]|c->r[5]; // 8023D8DC
  return; // 8023D8E0
}

// __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv
void f_8023D8E4(Ctx* __restrict c) {
  trace_call(0x8023D8E4u);
  c->r[0]=0u+0x00000000u; // 8023D8E4
  W8(c->r[3]+0x00000000u,c->r[0]); // 8023D8E8
  W8(c->r[3]+0x00000001u,c->r[0]); // 8023D8EC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8023D8F0
  return; // 8023D8F4
}

// Free__Q46nw4hbm3lyt6detail11TexCoordAryFv
void f_8023D8F8(Ctx* __restrict c) {
  trace_call(0x8023D8F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D8F8
  c->r[0]=c->lr; // 8023D8FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023D900
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023D904
  c->r[31]=c->r[3]|c->r[3]; // 8023D908
  c->r[4]=R32(c->r[3]+0x00000004u); // 8023D90C
  cmps(c,0,(int32_t)c->r[4],0); // 8023D910
  if (crb(c,2)) { goto L_8023D934; } // 8023D914
  c->r[3]=0u+0x80360000u; // 8023D918
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023D91C
  c->lr=0x8023D924u; f_800EE138(c); // 8023D920
  c->r[0]=0u+0x00000000u; // 8023D924
  W32(c->r[31]+0x00000004u,c->r[0]); // 8023D928
  W8(c->r[31]+0x00000000u,c->r[0]); // 8023D92C
  W8(c->r[31]+0x00000001u,c->r[0]); // 8023D930
L_8023D934:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023D934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023D938
  c->lr=c->r[0]; // 8023D93C
  c->r[1]=c->r[1]+0x00000010u; // 8023D940
  return; // 8023D944
}

// Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc
void f_8023D948(Ctx* __restrict c) {
  trace_call(0x8023D948u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023D948
  c->r[0]=c->lr; // 8023D94C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023D950
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023D954
  c->r[31]=c->r[4]|c->r[4]; // 8023D958
  W32(c->r[1]+0x00000008u,c->r[30]); // 8023D95C
  c->r[30]=c->r[3]|c->r[3]; // 8023D960
  c->r[0]=R8(c->r[3]+0x00000000u); // 8023D964
  cmpu(c,0,c->r[0],c->r[4]); // 8023D968
  if (!crb(c,0)) { goto L_8023D9B8; } // 8023D96C
  c->r[4]=R32(c->r[3]+0x00000004u); // 8023D970
  cmps(c,0,(int32_t)c->r[4],0); // 8023D974
  if (crb(c,2)) { goto L_8023D998; } // 8023D978
  c->r[3]=0u+0x80360000u; // 8023D97C
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023D980
  c->lr=0x8023D988u; f_800EE138(c); // 8023D984
  c->r[0]=0u+0x00000000u; // 8023D988
  W32(c->r[30]+0x00000004u,c->r[0]); // 8023D98C
  W8(c->r[30]+0x00000000u,c->r[0]); // 8023D990
  W8(c->r[30]+0x00000001u,c->r[0]); // 8023D994
L_8023D998:;
  c->r[3]=0u+0x80360000u; // 8023D998
  c->r[4]=rotl(c->r[31],5)&0x00001FE0u; // 8023D99C
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023D9A0
  c->lr=0x8023D9A8u; f_800EE128(c); // 8023D9A4
  cmps(c,0,(int32_t)c->r[3],0); // 8023D9A8
  W32(c->r[30]+0x00000004u,c->r[3]); // 8023D9AC
  if (crb(c,2)) { goto L_8023D9B8; } // 8023D9B0
  W8(c->r[30]+0x00000000u,c->r[31]); // 8023D9B4
L_8023D9B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023D9B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023D9BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8023D9C0
  c->lr=c->r[0]; // 8023D9C4
  c->r[1]=c->r[1]+0x00000010u; // 8023D9C8
  return; // 8023D9CC
}

// SetSize__Q46nw4hbm3lyt6detail11TexCoordAryFUc
void f_8023D9D0(Ctx* __restrict c) {
  trace_call(0x8023D9D0u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023D9D0
  cmps(c,0,(int32_t)c->r[0],0); // 8023D9D4
  if (crb(c,2)) return; // 8023D9D8
  c->r[0]=R8(c->r[3]+0x00000000u); // 8023D9DC
  cmpu(c,0,c->r[4],c->r[0]); // 8023D9E0
  if (crb(c,1)) return; // 8023D9E4
  c->r[8]=0u+0x80360000u; // 8023D9E8
  c->r[0]=R8(c->r[8]+0xFFFFCDF8u); // 8023D9EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8023D9F0
  if (!crb(c,2)) { goto L_8023DA38; } // 8023D9F4
  c->r[6]=0u+0x80260000u; // 8023D9F8
  c->r[5]=0u+0x80260000u; // 8023D9FC
  c->r[7]=0u+0x80360000u; // 8023DA00
  {uint32_t ea=c->r[6]+0x00001A28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DA04
  c->r[6]=c->r[7]+0xFFFFCE00u; // 8023DA08
  {uint32_t ea=c->r[5]+0x00001A2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DA0C
  c->r[0]=0u+0x00000001u; // 8023DA10
  {uint32_t ea=c->r[7]+0xFFFFCE00u; WF32(ea,c->f[1]);} // 8023DA14
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 8023DA18
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 8023DA1C
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[1]);} // 8023DA20
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[1]);} // 8023DA24
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 8023DA28
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[0]);} // 8023DA2C
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[0]);} // 8023DA30
  W8(c->r[8]+0xFFFFCDF8u,c->r[0]); // 8023DA34
L_8023DA38:;
  c->r[7]=R8(c->r[3]+0x00000001u); // 8023DA38
  c->r[6]=0u+0x80360000u; // 8023DA3C
  c->r[5]=c->r[6]+0xFFFFCE00u; // 8023DA40
  {uint32_t ea=c->r[6]+0xFFFFCE00u; c->f[7]=c->ps1[7]=RF32(ea);} // 8023DA44
  c->r[0]=c->r[4]-c->r[7]; // 8023DA48
  c->r[6]=rotl(c->r[7],5)&0xFFFFFFE0u; // 8023DA4C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 8023DA50
  {uint32_t ea=c->r[5]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8023DA54
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8023DA58
  {uint32_t ea=c->r[5]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8023DA5C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023DA60
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DA64
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DA68
  c->ctr=c->r[0]; // 8023DA6C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 8023DA70
  if (!crb(c,0)) { goto L_8023DAC0; } // 8023DA74
L_8023DA78:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023DA78
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[7]);} // 8023DA7C
  c->r[5]=c->r[0]+c->r[6]; // 8023DA80
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 8023DA84
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023DA88
  c->r[5]=c->r[0]+c->r[6]; // 8023DA8C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 8023DA90
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 8023DA94
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023DA98
  c->r[5]=c->r[0]+c->r[6]; // 8023DA9C
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 8023DAA0
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 8023DAA4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023DAA8
  c->r[5]=c->r[0]+c->r[6]; // 8023DAAC
  c->r[6]=c->r[6]+0x00000020u; // 8023DAB0
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 8023DAB4
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 8023DAB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023DA78; } // 8023DABC
L_8023DAC0:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 8023DAC0
  return; // 8023DAC4
}

// Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc
void f_8023DAC8(Ctx* __restrict c) {
  trace_call(0x8023DAC8u);
  c->r[0]=R8(c->r[3]+0x00000001u); // 8023DAC8
  cmpu(c,0,c->r[0],c->r[5]); // 8023DACC
  if (!crb(c,0)) { goto L_8023DAD8; } // 8023DAD0
  c->r[0]=c->r[5]|c->r[5]; // 8023DAD4
L_8023DAD8:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 8023DAD8
  c->r[6]=0u+0x00000000u; // 8023DADC
  c->ctr=c->r[5]; // 8023DAE0
  cmps(c,0,(int32_t)c->r[5],0); // 8023DAE4
  if (!crb(c,1)) return; // 8023DAE8
L_8023DAEC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023DAEC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DAF0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DAF4
  c->r[5]=c->r[0]+c->r[6]; // 8023DAF8
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[1]);} // 8023DAFC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DB00
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 8023DB04
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DB08
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023DB0C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8023DB10
  c->r[5]=c->r[0]+c->r[6]; // 8023DB14
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023DB18
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 8023DB1C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DB20
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 8023DB24
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DB28
  c->r[4]=c->r[4]+0x00000020u; // 8023DB2C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023DB30
  c->r[5]=c->r[0]+c->r[6]; // 8023DB34
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 8023DB38
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 8023DB3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023DB40
  c->r[5]=c->r[0]+c->r[6]; // 8023DB44
  c->r[6]=c->r[6]+0x00000020u; // 8023DB48
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 8023DB4C
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 8023DB50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023DAEC; } // 8023DB54
  return; // 8023DB58
}

// IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
void f_8023DB5C(Ctx* __restrict c) {
  trace_call(0x8023DB5Cu);
  cmpu(c,0,c->r[4],0x000000FFu); // 8023DB5C
  if (crb(c,2)) { goto L_8023DB6C; } // 8023DB60
  c->r[3]=0u+0x00000001u; // 8023DB64
  return; // 8023DB68
L_8023DB6C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023DB6C
  if (crb(c,2)) { goto L_8023DBBC; } // 8023DB70
  c->r[4]=R32(c->r[3]+0x00000000u); // 8023DB74
  c->r[0]=c->r[4]+0x00010000u; // 8023DB78
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8023DB7C
  if (!crb(c,2)) { goto L_8023DBB4; } // 8023DB80
  c->r[4]=R32(c->r[3]+0x00000004u); // 8023DB84
  c->r[0]=c->r[4]+0x00010000u; // 8023DB88
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8023DB8C
  if (!crb(c,2)) { goto L_8023DBB4; } // 8023DB90
  c->r[4]=R32(c->r[3]+0x00000008u); // 8023DB94
  c->r[0]=c->r[4]+0x00010000u; // 8023DB98
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8023DB9C
  if (!crb(c,2)) { goto L_8023DBB4; } // 8023DBA0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8023DBA4
  c->r[0]=c->r[3]+0x00010000u; // 8023DBA8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8023DBAC
  if (crb(c,2)) { goto L_8023DBBC; } // 8023DBB0
L_8023DBB4:;
  c->r[3]=0u+0x00000001u; // 8023DBB4
  return; // 8023DBB8
L_8023DBBC:;
  c->r[3]=0u+0x00000000u; // 8023DBBC
  return; // 8023DBC0
}

// MultipleAlpha__Q36nw4hbm3lyt6detailFQ36nw4hbm2ut5ColorUc
void f_8023DBC4(Ctx* __restrict c) {
  trace_call(0x8023DBC4u);
  c->r[8]=R8(c->r[4]+0x00000000u); // 8023DBC4
  cmpu(c,0,c->r[5],0x000000FFu); // 8023DBC8
  c->r[7]=R8(c->r[4]+0x00000001u); // 8023DBCC
  c->r[6]=R8(c->r[4]+0x00000002u); // 8023DBD0
  c->r[0]=R8(c->r[4]+0x00000003u); // 8023DBD4
  W8(c->r[3]+0x00000000u,c->r[8]); // 8023DBD8
  W8(c->r[3]+0x00000001u,c->r[7]); // 8023DBDC
  W8(c->r[3]+0x00000002u,c->r[6]); // 8023DBE0
  W8(c->r[3]+0x00000003u,c->r[0]); // 8023DBE4
  if (crb(c,2)) return; // 8023DBE8
  c->r[0]=R8(c->r[4]+0x00000003u); // 8023DBEC
  c->r[4]=0u+0x80810000u; // 8023DBF0
  c->r[4]=c->r[4]+0xFFFF8081u; // 8023DBF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8023DBF8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8023DBFC
  c->r[0]=c->r[4]+c->r[0]; // 8023DC00
  c->r[0]=sraw(c,c->r[0],7); // 8023DC04
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8023DC08
  c->r[0]=c->r[0]+c->r[4]; // 8023DC0C
  W8(c->r[3]+0x00000003u,c->r[0]); // 8023DC10
  return; // 8023DC14
}

// SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
void f_8023DC18(Ctx* __restrict c) {
  trace_call(0x8023DC18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023DC18
  c->r[0]=c->lr; // 8023DC1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023DC20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8023DC24
  W32(c->r[1]+0x00000018u,c->r[30]); // 8023DC28
  c->r[30]=c->r[4]|c->r[4]; // 8023DC2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8023DC30
  c->r[29]=c->r[3]|c->r[3]; // 8023DC34
  c->lr=0x8023DC3Cu; f_800CEB28(c); // 8023DC38
  c->r[3]=0u+0x00000009u; // 8023DC3C
  c->r[4]=0u+0x00000001u; // 8023DC40
  c->lr=0x8023DC48u; f_800CE534(c); // 8023DC44
  cmps(c,0,(int32_t)c->r[29],0); // 8023DC48
  if (crb(c,2)) { goto L_8023DC5C; } // 8023DC4C
  c->r[3]=0u+0x0000000Bu; // 8023DC50
  c->r[4]=0u+0x00000001u; // 8023DC54
  c->lr=0x8023DC5Cu; f_800CE534(c); // 8023DC58
L_8023DC5C:;
  c->r[31]=0u+0x00000000u; // 8023DC5C
  goto L_8023DC74; // 8023DC60
L_8023DC64:;
  c->r[3]=c->r[31]+0x0000000Du; // 8023DC64
  c->r[4]=0u+0x00000001u; // 8023DC68
  c->lr=0x8023DC70u; f_800CE534(c); // 8023DC6C
  c->r[31]=c->r[31]+0x00000001u; // 8023DC70
L_8023DC74:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 8023DC74
  if (crb(c,0)) { IRQCHK(c); goto L_8023DC64; } // 8023DC78
  c->r[3]=0u+0x00000000u; // 8023DC7C
  c->r[4]=0u+0x00000009u; // 8023DC80
  c->r[5]=0u+0x00000000u; // 8023DC84
  c->r[6]=0u+0x00000004u; // 8023DC88
  c->r[7]=0u+0x00000000u; // 8023DC8C
  c->lr=0x8023DC94u; f_800CEB5C(c); // 8023DC90
  cmps(c,0,(int32_t)c->r[29],0); // 8023DC94
  if (crb(c,2)) { goto L_8023DCB4; } // 8023DC98
  c->r[3]=0u+0x00000000u; // 8023DC9C
  c->r[4]=0u+0x0000000Bu; // 8023DCA0
  c->r[5]=0u+0x00000001u; // 8023DCA4
  c->r[6]=0u+0x00000005u; // 8023DCA8
  c->r[7]=0u+0x00000000u; // 8023DCAC
  c->lr=0x8023DCB4u; f_800CEB5C(c); // 8023DCB0
L_8023DCB4:;
  c->r[31]=0u+0x00000000u; // 8023DCB4
  goto L_8023DCD8; // 8023DCB8
L_8023DCBC:;
  c->r[4]=c->r[31]+0x0000000Du; // 8023DCBC
  c->r[3]=0u+0x00000000u; // 8023DCC0
  c->r[5]=0u+0x00000001u; // 8023DCC4
  c->r[6]=0u+0x00000004u; // 8023DCC8
  c->r[7]=0u+0x00000000u; // 8023DCCC
  c->lr=0x8023DCD4u; f_800CEB5C(c); // 8023DCD0
  c->r[31]=c->r[31]+0x00000001u; // 8023DCD4
L_8023DCD8:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 8023DCD8
  if (crb(c,0)) { IRQCHK(c); goto L_8023DCBC; } // 8023DCDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023DCE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8023DCE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023DCE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023DCEC
  c->lr=c->r[0]; // 8023DCF0
  c->r[1]=c->r[1]+0x00000020u; // 8023DCF4
  return; // 8023DCF8
}

// DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5Color
void f_8023DCFC(Ctx* __restrict c) {
  trace_call(0x8023DCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023DCFC
  c->r[0]=c->lr; // 8023DD00
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023DD04
  c->r[11]=c->r[1]+0x00000020u; // 8023DD08
  c->lr=0x8023DD10u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023DD0C
  c->r[27]=c->r[3]|c->r[3]; // 8023DD10
  c->r[28]=c->r[4]|c->r[4]; // 8023DD14
  c->r[29]=c->r[5]|c->r[5]; // 8023DD18
  c->r[30]=c->r[6]|c->r[6]; // 8023DD1C
  c->r[31]=c->r[7]|c->r[7]; // 8023DD20
  c->r[3]=0u+0x00000080u; // 8023DD24
  c->r[4]=0u+0x00000000u; // 8023DD28
  c->r[5]=0u+0x00000004u; // 8023DD2C
  c->lr=0x8023DD34u; f_800CFE14(c); // 8023DD30
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DD34
  c->r[3]=0u+0xCC010000u; // 8023DD38
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DD3C
  cmps(c,0,(int32_t)c->r[31],0); // 8023DD40
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DD44
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DD48
  if (crb(c,2)) { goto L_8023DD58; } // 8023DD4C
  c->r[0]=R32(c->r[31]+0x00000000u); // 8023DD50
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8023DD54
L_8023DD58:;
  cmps(c,1,(int32_t)c->r[29],0); // 8023DD58
  c->r[6]=0u+0x00000000u; // 8023DD5C
  if (!crb(c,5)) { goto L_8023DE70; } // 8023DD60
  cmps(c,0,(int32_t)c->r[29],8); // 8023DD64
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8023DD68
  if (!crb(c,1)) { goto L_8023DE3C; } // 8023DD6C
  c->r[5]=0u+0x00000000u; // 8023DD70
  if (crb(c,4)) { goto L_8023DD8C; } // 8023DD74
  c->r[3]=0u+0x80000000u; // 8023DD78
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8023DD7C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023DD80
  if (crb(c,1)) { goto L_8023DD8C; } // 8023DD84
  c->r[5]=0u+0x00000001u; // 8023DD88
L_8023DD8C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8023DD8C
  if (crb(c,2)) { goto L_8023DE3C; } // 8023DD90
  c->r[0]=c->r[4]+0x00000007u; // 8023DD94
  c->r[5]=c->r[30]|c->r[30]; // 8023DD98
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8023DD9C
  c->r[3]=0u+0xCC010000u; // 8023DDA0
  c->ctr=c->r[0]; // 8023DDA4
  cmps(c,0,(int32_t)c->r[4],0); // 8023DDA8
  if (!crb(c,1)) { goto L_8023DE3C; } // 8023DDAC
L_8023DDB0:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DDB0
  c->r[6]=c->r[6]+0x00000008u; // 8023DDB4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DDB8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DDBC
  {uint32_t ea=c->r[5]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023DDC0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DDC4
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DDC8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8023DDCC
  {uint32_t ea=c->r[5]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DDD0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DDD4
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DDD8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DDDC
  {uint32_t ea=c->r[5]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DDE0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DDE4
  {uint32_t ea=c->r[5]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DDE8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DDEC
  {uint32_t ea=c->r[5]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DDF0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DDF4
  {uint32_t ea=c->r[5]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DDF8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DDFC
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DE00
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DE04
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DE08
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DE0C
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DE10
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DE14
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DE18
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DE1C
  {uint32_t ea=c->r[5]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DE20
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DE24
  {uint32_t ea=c->r[5]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DE28
  c->r[5]=c->r[5]+0x00000100u; // 8023DE2C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DE30
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DE34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023DDB0; } // 8023DE38
L_8023DE3C:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8023DE3C
  c->r[0]=c->r[29]-c->r[6]; // 8023DE40
  c->r[4]=c->r[30]+c->r[3]; // 8023DE44
  c->r[3]=0u+0xCC010000u; // 8023DE48
  c->ctr=c->r[0]; // 8023DE4C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8023DE50
  if (!crb(c,0)) { goto L_8023DE70; } // 8023DE54
L_8023DE58:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DE58
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DE5C
  c->r[4]=c->r[4]+0x00000020u; // 8023DE60
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DE64
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DE68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023DE58; } // 8023DE6C
L_8023DE70:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DE70
  c->r[3]=0u+0xCC010000u; // 8023DE74
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DE78
  cmps(c,0,(int32_t)c->r[31],0); // 8023DE7C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023DE80
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8023DE84
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DE88
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8023DE8C
  if (crb(c,2)) { goto L_8023DE9C; } // 8023DE90
  c->r[0]=R32(c->r[31]+0x00000004u); // 8023DE94
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8023DE98
L_8023DE9C:;
  cmps(c,1,(int32_t)c->r[29],0); // 8023DE9C
  c->r[6]=0u+0x00000000u; // 8023DEA0
  if (!crb(c,5)) { goto L_8023DFB4; } // 8023DEA4
  cmps(c,0,(int32_t)c->r[29],8); // 8023DEA8
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8023DEAC
  if (!crb(c,1)) { goto L_8023DF80; } // 8023DEB0
  c->r[5]=0u+0x00000000u; // 8023DEB4
  if (crb(c,4)) { goto L_8023DED0; } // 8023DEB8
  c->r[3]=0u+0x80000000u; // 8023DEBC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8023DEC0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023DEC4
  if (crb(c,1)) { goto L_8023DED0; } // 8023DEC8
  c->r[5]=0u+0x00000001u; // 8023DECC
L_8023DED0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8023DED0
  if (crb(c,2)) { goto L_8023DF80; } // 8023DED4
  c->r[0]=c->r[4]+0x00000007u; // 8023DED8
  c->r[5]=c->r[30]|c->r[30]; // 8023DEDC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8023DEE0
  c->r[3]=0u+0xCC010000u; // 8023DEE4
  c->ctr=c->r[0]; // 8023DEE8
  cmps(c,0,(int32_t)c->r[4],0); // 8023DEEC
  if (!crb(c,1)) { goto L_8023DF80; } // 8023DEF0
L_8023DEF4:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DEF4
  c->r[6]=c->r[6]+0x00000008u; // 8023DEF8
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DEFC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DF00
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023DF04
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DF08
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DF0C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8023DF10
  {uint32_t ea=c->r[5]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DF14
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DF18
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DF1C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DF20
  {uint32_t ea=c->r[5]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DF24
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DF28
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DF2C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DF30
  {uint32_t ea=c->r[5]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DF34
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DF38
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DF3C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DF40
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DF44
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DF48
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DF4C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DF50
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DF54
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DF58
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DF5C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DF60
  {uint32_t ea=c->r[5]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DF64
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DF68
  {uint32_t ea=c->r[5]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DF6C
  c->r[5]=c->r[5]+0x00000100u; // 8023DF70
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DF74
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DF78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023DEF4; } // 8023DF7C
L_8023DF80:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8023DF80
  c->r[0]=c->r[29]-c->r[6]; // 8023DF84
  c->r[4]=c->r[30]+c->r[3]; // 8023DF88
  c->r[3]=0u+0xCC010000u; // 8023DF8C
  c->ctr=c->r[0]; // 8023DF90
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8023DF94
  if (!crb(c,0)) { goto L_8023DFB4; } // 8023DF98
L_8023DF9C:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DF9C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DFA0
  c->r[4]=c->r[4]+0x00000020u; // 8023DFA4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DFA8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DFAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023DF9C; } // 8023DFB0
L_8023DFB4:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023DFB4
  c->r[3]=0u+0xCC010000u; // 8023DFB8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DFBC
  cmps(c,0,(int32_t)c->r[31],0); // 8023DFC0
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023DFC4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8023DFC8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023DFCC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8023DFD0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023DFD4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023DFD8
  if (crb(c,2)) { goto L_8023DFE8; } // 8023DFDC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8023DFE0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8023DFE4
L_8023DFE8:;
  cmps(c,1,(int32_t)c->r[29],0); // 8023DFE8
  c->r[6]=0u+0x00000000u; // 8023DFEC
  if (!crb(c,5)) { goto L_8023E100; } // 8023DFF0
  cmps(c,0,(int32_t)c->r[29],8); // 8023DFF4
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8023DFF8
  if (!crb(c,1)) { goto L_8023E0CC; } // 8023DFFC
  c->r[5]=0u+0x00000000u; // 8023E000
  if (crb(c,4)) { goto L_8023E01C; } // 8023E004
  c->r[3]=0u+0x80000000u; // 8023E008
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8023E00C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023E010
  if (crb(c,1)) { goto L_8023E01C; } // 8023E014
  c->r[5]=0u+0x00000001u; // 8023E018
L_8023E01C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8023E01C
  if (crb(c,2)) { goto L_8023E0CC; } // 8023E020
  c->r[0]=c->r[4]+0x00000007u; // 8023E024
  c->r[5]=c->r[30]|c->r[30]; // 8023E028
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8023E02C
  c->r[3]=0u+0xCC010000u; // 8023E030
  c->ctr=c->r[0]; // 8023E034
  cmps(c,0,(int32_t)c->r[4],0); // 8023E038
  if (!crb(c,1)) { goto L_8023E0CC; } // 8023E03C
L_8023E040:;
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E040
  c->r[6]=c->r[6]+0x00000008u; // 8023E044
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E048
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E04C
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023E050
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E054
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E058
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8023E05C
  {uint32_t ea=c->r[5]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E060
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E064
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E068
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E06C
  {uint32_t ea=c->r[5]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E070
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E074
  {uint32_t ea=c->r[5]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E078
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E07C
  {uint32_t ea=c->r[5]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E080
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E084
  {uint32_t ea=c->r[5]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E088
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E08C
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E090
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E094
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E098
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E09C
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E0A0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E0A4
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E0A8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E0AC
  {uint32_t ea=c->r[5]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E0B0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E0B4
  {uint32_t ea=c->r[5]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E0B8
  c->r[5]=c->r[5]+0x00000100u; // 8023E0BC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E0C0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E0C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023E040; } // 8023E0C8
L_8023E0CC:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8023E0CC
  c->r[0]=c->r[29]-c->r[6]; // 8023E0D0
  c->r[4]=c->r[30]+c->r[3]; // 8023E0D4
  c->r[3]=0u+0xCC010000u; // 8023E0D8
  c->ctr=c->r[0]; // 8023E0DC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8023E0E0
  if (!crb(c,0)) { goto L_8023E100; } // 8023E0E4
L_8023E0E8:;
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E0E8
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E0EC
  c->r[4]=c->r[4]+0x00000020u; // 8023E0F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E0F4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E0F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023E0E8; } // 8023E0FC
L_8023E100:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E100
  c->r[3]=0u+0xCC010000u; // 8023E104
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E108
  cmps(c,0,(int32_t)c->r[31],0); // 8023E10C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023E110
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8023E114
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8023E118
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E11C
  if (crb(c,2)) { goto L_8023E12C; } // 8023E120
  c->r[0]=R32(c->r[31]+0x00000008u); // 8023E124
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8023E128
L_8023E12C:;
  cmps(c,1,(int32_t)c->r[29],0); // 8023E12C
  c->r[6]=0u+0x00000000u; // 8023E130
  if (!crb(c,5)) { goto L_8023E244; } // 8023E134
  cmps(c,0,(int32_t)c->r[29],8); // 8023E138
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8023E13C
  if (!crb(c,1)) { goto L_8023E210; } // 8023E140
  c->r[5]=0u+0x00000000u; // 8023E144
  if (crb(c,4)) { goto L_8023E160; } // 8023E148
  c->r[3]=0u+0x80000000u; // 8023E14C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8023E150
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8023E154
  if (crb(c,1)) { goto L_8023E160; } // 8023E158
  c->r[5]=0u+0x00000001u; // 8023E15C
L_8023E160:;
  cmps(c,0,(int32_t)c->r[5],0); // 8023E160
  if (crb(c,2)) { goto L_8023E210; } // 8023E164
  c->r[0]=c->r[4]+0x00000007u; // 8023E168
  c->r[5]=c->r[30]|c->r[30]; // 8023E16C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8023E170
  c->r[3]=0u+0xCC010000u; // 8023E174
  c->ctr=c->r[0]; // 8023E178
  cmps(c,0,(int32_t)c->r[4],0); // 8023E17C
  if (!crb(c,1)) { goto L_8023E210; } // 8023E180
L_8023E184:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E184
  c->r[6]=c->r[6]+0x00000008u; // 8023E188
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E18C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E190
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023E194
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E198
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E19C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8023E1A0
  {uint32_t ea=c->r[5]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E1A4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E1A8
  {uint32_t ea=c->r[5]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E1AC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E1B0
  {uint32_t ea=c->r[5]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E1B4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E1B8
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E1BC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E1C0
  {uint32_t ea=c->r[5]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E1C4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E1C8
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E1CC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E1D0
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E1D4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E1D8
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E1DC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E1E0
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E1E4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E1E8
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E1EC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E1F0
  {uint32_t ea=c->r[5]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E1F4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E1F8
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E1FC
  c->r[5]=c->r[5]+0x00000100u; // 8023E200
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E204
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E208
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023E184; } // 8023E20C
L_8023E210:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8023E210
  c->r[0]=c->r[29]-c->r[6]; // 8023E214
  c->r[4]=c->r[30]+c->r[3]; // 8023E218
  c->r[3]=0u+0xCC010000u; // 8023E21C
  c->ctr=c->r[0]; // 8023E220
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8023E224
  if (!crb(c,0)) { goto L_8023E244; } // 8023E228
L_8023E22C:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E22C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E230
  c->r[4]=c->r[4]+0x00000020u; // 8023E234
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E238
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E23C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023E22C; } // 8023E240
L_8023E244:;
  c->r[11]=c->r[1]+0x00000020u; // 8023E244
  c->lr=0x8023E24Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023E248
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023E24C
  c->lr=c->r[0]; // 8023E250
  c->r[1]=c->r[1]+0x00000020u; // 8023E254
  return; // 8023E258
}

// DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5ColorUc
void f_8023E25C(Ctx* __restrict c) {
  trace_call(0x8023E25Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E25C
  c->r[0]=c->lr; // 8023E260
  W32(c->r[1]+0x00000054u,c->r[0]); // 8023E264
  c->r[11]=c->r[1]+0x00000050u; // 8023E268
  c->lr=0x8023E270u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023E26C
  c->r[0]=0u+0xFFFFFFFFu; // 8023E270
  cmps(c,0,(int32_t)c->r[7],0); // 8023E274
  W32(c->r[1]+0x00000010u,c->r[0]); // 8023E278
  c->r[26]=c->r[3]|c->r[3]; // 8023E27C
  c->r[27]=c->r[4]|c->r[4]; // 8023E280
  c->r[28]=c->r[5]|c->r[5]; // 8023E284
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023E288
  c->r[29]=c->r[6]|c->r[6]; // 8023E28C
  c->r[30]=c->r[7]|c->r[7]; // 8023E290
  c->r[31]=c->r[8]|c->r[8]; // 8023E294
  W32(c->r[1]+0x00000018u,c->r[0]); // 8023E298
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8023E29C
  if (crb(c,2)) { goto L_8023E314; } // 8023E2A0
  c->r[24]=c->r[30]|c->r[30]; // 8023E2A4
  c->r[23]=c->r[1]+0x00000010u; // 8023E2A8
  c->r[25]=0u+0x00000000u; // 8023E2AC
L_8023E2B0:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 8023E2B0
  c->r[5]=c->r[31]|c->r[31]; // 8023E2B4
  c->r[3]=c->r[1]+0x0000000Cu; // 8023E2B8
  c->r[4]=c->r[1]+0x00000008u; // 8023E2BC
  W8(c->r[1]+0x00000008u,c->r[0]); // 8023E2C0
  c->r[0]=R8(c->r[24]+0x00000001u); // 8023E2C4
  W8(c->r[1]+0x00000009u,c->r[0]); // 8023E2C8
  c->r[0]=R8(c->r[24]+0x00000002u); // 8023E2CC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8023E2D0
  c->r[0]=R8(c->r[24]+0x00000003u); // 8023E2D4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8023E2D8
  c->lr=0x8023E2E0u; f_8023DBC4(c); // 8023E2DC
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 8023E2E0
  c->r[25]=c->r[25]+0x00000001u; // 8023E2E4
  c->r[0]=R8(c->r[1]+0x0000000Du); // 8023E2E8
  cmps(c,0,(int32_t)c->r[25],4); // 8023E2EC
  W8(c->r[23]+0x00000000u,c->r[3]); // 8023E2F0
  c->r[24]=c->r[24]+0x00000004u; // 8023E2F4
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 8023E2F8
  W8(c->r[23]+0x00000001u,c->r[0]); // 8023E2FC
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8023E300
  W8(c->r[23]+0x00000002u,c->r[3]); // 8023E304
  W8(c->r[23]+0x00000003u,c->r[0]); // 8023E308
  c->r[23]=c->r[23]+0x00000004u; // 8023E30C
  if (crb(c,0)) { IRQCHK(c); goto L_8023E2B0; } // 8023E310
L_8023E314:;
  c->r[3]=0u-c->r[30]; // 8023E314
  c->r[0]=c->r[1]+0x00000010u; // 8023E318
  c->r[4]=c->r[3]|c->r[30]; // 8023E31C
  c->r[5]=c->r[28]|c->r[28]; // 8023E320
  c->r[7]=sraw(c,c->r[4],31); // 8023E324
  c->r[3]=c->r[26]|c->r[26]; // 8023E328
  c->r[4]=c->r[27]|c->r[27]; // 8023E32C
  c->r[6]=c->r[29]|c->r[29]; // 8023E330
  c->r[7]=c->r[0]&c->r[7]; // 8023E334
  c->lr=0x8023E33Cu; f_8023DCFC(c); // 8023E338
  c->r[11]=c->r[1]+0x00000050u; // 8023E33C
  c->lr=0x8023E344u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023E340
  c->r[0]=R32(c->r[1]+0x00000054u); // 8023E344
  c->lr=c->r[0]; // 8023E348
  c->r[1]=c->r[1]+0x00000050u; // 8023E34C
  return; // 8023E350
}

// DrawLine__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeQ36nw4hbm2ut5Color
void f_8023E354(Ctx* __restrict c) {
  trace_call(0x8023E354u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E354
  c->r[0]=c->lr; // 8023E358
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023E35C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8023E360
  c->r[31]=c->r[5]|c->r[5]; // 8023E364
  W32(c->r[1]+0x00000018u,c->r[30]); // 8023E368
  c->r[30]=c->r[4]|c->r[4]; // 8023E36C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8023E370
  c->r[29]=c->r[3]|c->r[3]; // 8023E374
  c->lr=0x8023E37Cu; f_800CEB28(c); // 8023E378
  c->r[3]=0u+0x00000009u; // 8023E37C
  c->r[4]=0u+0x00000001u; // 8023E380
  c->lr=0x8023E388u; f_800CE534(c); // 8023E384
  c->r[3]=0u+0x00000000u; // 8023E388
  c->r[4]=0u+0x00000009u; // 8023E38C
  c->r[5]=0u+0x00000000u; // 8023E390
  c->r[6]=0u+0x00000004u; // 8023E394
  c->r[7]=0u+0x00000000u; // 8023E398
  c->lr=0x8023E3A0u; f_800CEB5C(c); // 8023E39C
  c->r[3]=0u+0x00000001u; // 8023E3A0
  c->lr=0x8023E3A8u; f_800D11EC(c); // 8023E3A4
  c->r[3]=0u+0x00000004u; // 8023E3A8
  c->r[4]=0u+0x00000000u; // 8023E3AC
  c->r[5]=0u+0x00000000u; // 8023E3B0
  c->r[6]=0u+0x00000000u; // 8023E3B4
  c->r[7]=0u+0x00000000u; // 8023E3B8
  c->r[8]=0u+0x00000000u; // 8023E3BC
  c->r[9]=0u+0x00000002u; // 8023E3C0
  c->lr=0x8023E3C8u; f_800D1210(c); // 8023E3C4
  c->r[7]=R8(c->r[31]+0x00000000u); // 8023E3C8
  c->r[4]=c->r[1]+0x00000008u; // 8023E3CC
  c->r[6]=R8(c->r[31]+0x00000001u); // 8023E3D0
  c->r[3]=0u+0x00000004u; // 8023E3D4
  c->r[5]=R8(c->r[31]+0x00000002u); // 8023E3D8
  c->r[0]=R8(c->r[31]+0x00000003u); // 8023E3DC
  W8(c->r[1]+0x00000008u,c->r[7]); // 8023E3E0
  W8(c->r[1]+0x00000009u,c->r[6]); // 8023E3E4
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8023E3E8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8023E3EC
  c->lr=0x8023E3F4u; f_800D1114(c); // 8023E3F0
  c->r[3]=0u+0x00000000u; // 8023E3F4
  c->lr=0x8023E3FCu; f_800CF424(c); // 8023E3F8
  c->r[3]=0u+0x00000001u; // 8023E3FC
  c->lr=0x8023E404u; f_800D2C58(c); // 8023E400
  c->r[3]=0u+0x00000000u; // 8023E404
  c->lr=0x8023E40Cu; f_800D253C(c); // 8023E408
  c->r[3]=0u+0x00000000u; // 8023E40C
  c->r[4]=0u+0x000000FFu; // 8023E410
  c->r[5]=0u+0x000000FFu; // 8023E414
  c->r[6]=0u+0x00000004u; // 8023E418
  c->lr=0x8023E420u; f_800D2AFC(c); // 8023E41C
  c->r[3]=0u+0x00000000u; // 8023E420
  c->r[4]=0u+0x00000004u; // 8023E424
  c->lr=0x8023E42Cu; f_800D25FC(c); // 8023E428
  c->r[3]=0u+0x00000000u; // 8023E42C
  c->lr=0x8023E434u; f_800D255C(c); // 8023E430
  c->r[3]=0u+0x00000000u; // 8023E434
  c->r[4]=0u+0x00000000u; // 8023E438
  c->r[5]=0u+0x00000000u; // 8023E43C
  c->lr=0x8023E444u; f_800D2980(c); // 8023E440
  c->r[3]=0u+0x00000000u; // 8023E444
  c->r[4]=0u+0x00000000u; // 8023E448
  c->r[5]=0u+0x00000001u; // 8023E44C
  c->r[6]=0u+0x00000002u; // 8023E450
  c->r[7]=0u+0x00000003u; // 8023E454
  c->lr=0x8023E45Cu; f_800D29BC(c); // 8023E458
  c->r[3]=0u+0x00000007u; // 8023E45C
  c->r[4]=0u+0x00000000u; // 8023E460
  c->r[5]=0u+0x00000000u; // 8023E464
  c->r[6]=0u+0x00000007u; // 8023E468
  c->r[7]=0u+0x00000000u; // 8023E46C
  c->lr=0x8023E474u; f_800D2A38(c); // 8023E470
  c->r[3]=0u+0x00000001u; // 8023E474
  c->r[4]=0u+0x00000004u; // 8023E478
  c->r[5]=0u+0x00000005u; // 8023E47C
  c->r[6]=0u+0x0000000Fu; // 8023E480
  c->lr=0x8023E488u; f_800D312C(c); // 8023E484
  c->r[3]=0u+0x00000006u; // 8023E488
  c->r[4]=0u+0x00000000u; // 8023E48C
  c->lr=0x8023E494u; f_800D0038(c); // 8023E490
  c->r[3]=0u+0x000000B0u; // 8023E494
  c->r[4]=0u+0x00000000u; // 8023E498
  c->r[5]=0u+0x00000005u; // 8023E49C
  c->lr=0x8023E4A4u; f_800CFE14(c); // 8023E4A0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E4A4
  c->r[3]=0u+0xCC010000u; // 8023E4A8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E4AC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E4B0
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023E4B4
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 8023E4B8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E4BC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8023E4C0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8023E4C4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8023E4C8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8023E4CC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8023E4D0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E4D4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E4D8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8023E4DC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8023E4E0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8023E4E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023E4E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8023E4EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023E4F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023E4F4
  c->lr=c->r[0]; // 8023E4F8
  c->r[1]=c->r[1]+0x00000020u; // 8023E4FC
  return; // 8023E500
}

// InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl
void f_8023E504(Ctx* __restrict c) {
  trace_call(0x8023E504u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E504
  c->r[0]=c->lr; // 8023E508
  W32(c->r[1]+0x00000034u,c->r[0]); // 8023E50C
  c->r[0]=0u+0x80000000u; // 8023E510
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8023E514
  c->r[31]=c->r[3]|c->r[3]; // 8023E518
  W32(c->r[1]+0x00000028u,c->r[30]); // 8023E51C
  c->r[30]=c->r[5]|c->r[5]; // 8023E520
  W32(c->r[1]+0x00000024u,c->r[29]); // 8023E524
  c->r[29]=c->r[4]|c->r[4]; // 8023E528
  c->r[6]=R32(c->r[4]+0x00000008u); // 8023E52C
  cmpu(c,0,c->r[6],c->r[0]); // 8023E530
  if (!crb(c,0)) { goto L_8023E540; } // 8023E534
  c->r[3]=c->r[29]|c->r[29]; // 8023E538
  c->lr=0x8023E540u; f_801456A8(c); // 8023E53C
L_8023E540:;
  c->r[3]=c->r[29]|c->r[29]; // 8023E540
  c->r[4]=c->r[30]|c->r[30]; // 8023E544
  c->lr=0x8023E54Cu; f_801457BC(c); // 8023E548
  c->r[9]=R32(c->r[3]+0x00000000u); // 8023E54C
  c->r[30]=c->r[3]|c->r[3]; // 8023E550
  c->r[0]=R32(c->r[3]+0x00000004u); // 8023E554
  c->r[5]=R8(c->r[9]+0x00000021u); // 8023E558
  c->r[4]=R8(c->r[9]+0x00000022u); // 8023E55C
  cmps(c,0,(int32_t)c->r[0],0); // 8023E560
  c->r[3]=c->r[4]-c->r[5]; // 8023E564
  c->r[0]=c->r[5]-c->r[4]; // 8023E568
  c->r[0]=c->r[3]|c->r[0]; // 8023E56C
  c->r[10]=rotl(c->r[0],1)&0x00000001u; // 8023E570
  if (crb(c,2)) { goto L_8023E5B0; } // 8023E574
  c->r[0]=0u+0x00000000u; // 8023E578
  c->r[3]=c->r[31]|c->r[31]; // 8023E57C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8023E580
  c->r[4]=R32(c->r[9]+0x00000008u); // 8023E584
  c->r[5]=R16(c->r[9]+0x00000002u); // 8023E588
  c->r[6]=R16(c->r[9]+0x00000000u); // 8023E58C
  c->r[7]=R32(c->r[9]+0x00000004u); // 8023E590
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 8023E594
  c->r[9]=R32(c->r[9]+0x00000010u); // 8023E598
  c->lr=0x8023E5A0u; f_800D1580(c); // 8023E59C
  c->r[4]=R32(c->r[30]+0x00000004u); // 8023E5A0
  c->r[3]=c->r[31]|c->r[31]; // 8023E5A4
  c->lr=0x8023E5ACu; f_800D16E8(c); // 8023E5A8
  goto L_8023E5D0; // 8023E5AC
L_8023E5B0:;
  c->r[4]=R32(c->r[9]+0x00000008u); // 8023E5B0
  c->r[3]=c->r[31]|c->r[31]; // 8023E5B4
  c->r[5]=R16(c->r[9]+0x00000002u); // 8023E5B8
  c->r[6]=R16(c->r[9]+0x00000000u); // 8023E5BC
  c->r[7]=R32(c->r[9]+0x00000004u); // 8023E5C0
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 8023E5C4
  c->r[9]=R32(c->r[9]+0x00000010u); // 8023E5C8
  c->lr=0x8023E5D0u; f_800D1374(c); // 8023E5CC
L_8023E5D0:;
  c->r[9]=R32(c->r[30]+0x00000000u); // 8023E5D0
  c->r[5]=0u+0x43300000u; // 8023E5D4
  c->r[4]=0u+0x80260000u; // 8023E5D8
  W32(c->r[1]+0x00000010u,c->r[5]); // 8023E5DC
  c->r[7]=R8(c->r[9]+0x00000021u); // 8023E5E0
  c->r[3]=c->r[31]|c->r[31]; // 8023E5E4
  c->r[0]=R8(c->r[9]+0x00000022u); // 8023E5E8
  c->r[6]=0u+0x00000000u; // 8023E5EC
  W32(c->r[1]+0x00000014u,c->r[7]); // 8023E5F0
  c->r[8]=0u+0x00000000u; // 8023E5F4
  {uint32_t ea=c->r[4]+0x00001A30u; c->f[2]=RF64(ea);} // 8023E5F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8023E5FC
  W32(c->r[1]+0x00000018u,c->r[5]); // 8023E600
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8023E604
  c->r[4]=R32(c->r[9]+0x00000014u); // 8023E608
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8023E60C
  c->r[5]=R32(c->r[9]+0x00000018u); // 8023E610
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8023E614
  {uint32_t ea=c->r[9]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8023E618
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 8023E61C
  c->r[7]=R8(c->r[9]+0x00000020u); // 8023E620
  c->lr=0x8023E628u; f_800D15C8(c); // 8023E624
  c->r[0]=R32(c->r[1]+0x00000034u); // 8023E628
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8023E62C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8023E630
  c->r[29]=R32(c->r[1]+0x00000024u); // 8023E634
  c->lr=c->r[0]; // 8023E638
  c->r[1]=c->r[1]+0x00000030u; // 8023E63C
  return; // 8023E640
}

// __ct__Q36nw4hbm3lyt8DrawInfoFv
void f_8023E644(Ctx* __restrict c) {
  trace_call(0x8023E644u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E644
  c->r[0]=c->lr; // 8023E648
  c->r[5]=0u+0x80260000u; // 8023E64C
  c->r[4]=0u+0x80260000u; // 8023E650
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023E654
  {uint32_t ea=c->r[5]+0x00001A38u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023E658
  c->r[5]=0u+0x802A0000u; // 8023E65C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023E660
  c->r[5]=c->r[5]+0x00000708u; // 8023E664
  {uint32_t ea=c->r[4]+0x00001A3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023E668
  c->r[31]=c->r[3]|c->r[3]; // 8023E66C
  W32(c->r[3]+0x00000000u,c->r[5]); // 8023E670
  c->r[4]=0u+0x00000000u; // 8023E674
  c->r[5]=0u+0x00000001u; // 8023E678
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8023E67C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8023E680
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 8023E684
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 8023E688
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8023E68C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8023E690
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 8023E694
  c->r[3]=c->r[3]+0x00000050u; // 8023E698
  c->lr=0x8023E6A0u; f_80004688(c); // 8023E69C
  c->r[3]=c->r[31]+0x00000004u; // 8023E6A0
  c->lr=0x8023E6A8u; f_800B7DE0(c); // 8023E6A4
  c->r[3]=c->r[31]|c->r[31]; // 8023E6A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023E6AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023E6B0
  c->lr=c->r[0]; // 8023E6B4
  c->r[1]=c->r[1]+0x00000010u; // 8023E6B8
  return; // 8023E6BC
}

// __dt__Q36nw4hbm3lyt8DrawInfoFv
void f_8023E6C0(Ctx* __restrict c) {
  trace_call(0x8023E6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E6C0
  c->r[0]=c->lr; // 8023E6C4
  cmps(c,0,(int32_t)c->r[3],0); // 8023E6C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023E6CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023E6D0
  c->r[31]=c->r[3]|c->r[3]; // 8023E6D4
  if (crb(c,2)) { goto L_8023E6E8; } // 8023E6D8
  cmps(c,0,(int32_t)c->r[4],0); // 8023E6DC
  if (!crb(c,1)) { goto L_8023E6E8; } // 8023E6E0
  c->lr=0x8023E6E8u; f_8008DE54(c); // 8023E6E4
L_8023E6E8:;
  c->r[3]=c->r[31]|c->r[31]; // 8023E6E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023E6EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023E6F0
  c->lr=c->r[0]; // 8023E6F4
  c->r[1]=c->r[1]+0x00000010u; // 8023E6F8
  return; // 8023E6FC
}

// __ct__Q36nw4hbm3lyt5GroupFPCQ46nw4hbm3lyt3res5GroupPQ36nw4hbm3lyt4Pane
void f_8023E700(Ctx* __restrict c) {
  trace_call(0x8023E700u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E700
  c->r[0]=c->lr; // 8023E704
  W32(c->r[1]+0x00000044u,c->r[0]); // 8023E708
  c->r[11]=c->r[1]+0x00000040u; // 8023E70C
  c->lr=0x8023E714u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023E710
  c->r[29]=0u+0x00000000u; // 8023E714
  c->r[6]=0u+0x802A0000u; // 8023E718
  W32(c->r[3]+0x00000010u,c->r[29]); // 8023E71C
  c->r[7]=c->r[3]+0x00000010u; // 8023E720
  c->r[6]=c->r[6]+0x00000738u; // 8023E724
  c->r[24]=c->r[4]|c->r[4]; // 8023E728
  W32(c->r[3]+0x00000014u,c->r[29]); // 8023E72C
  c->r[25]=c->r[5]|c->r[5]; // 8023E730
  c->r[23]=c->r[3]|c->r[3]; // 8023E734
  c->r[5]=0u+0x00000010u; // 8023E738
  W32(c->r[3]+0x00000000u,c->r[6]); // 8023E73C
  c->r[4]=c->r[4]+0x00000008u; // 8023E740
  W32(c->r[3]+0x00000004u,c->r[29]); // 8023E744
  W32(c->r[3]+0x00000008u,c->r[29]); // 8023E748
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 8023E74C
  W32(c->r[3]+0x00000010u,c->r[7]); // 8023E750
  W32(c->r[3]+0x00000014u,c->r[7]); // 8023E754
  W8(c->r[3]+0x00000028u,c->r[29]); // 8023E758
  c->r[3]=c->r[3]+0x00000018u; // 8023E75C
  c->lr=0x8023E764u; f_80004338(c); // 8023E760
  c->r[27]=c->r[24]+0x0000001Cu; // 8023E764
  c->r[26]=0u+0x00000000u; // 8023E768
  c->r[28]=0u+0x00000000u; // 8023E76C
  c->r[31]=0u+0x80360000u; // 8023E770
  goto L_8023E7E4; // 8023E774
L_8023E778:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 8023E778
  c->r[3]=c->r[25]|c->r[25]; // 8023E77C
  c->r[4]=c->r[27]+c->r[28]; // 8023E780
  c->r[5]=0u+0x00000001u; // 8023E784
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8023E788
  c->ctr=c->r[12]; // 8023E78C
  if (true) { c->lr=0x8023E794u; dispatch(c,c->ctr); } // 8023E790
  cmps(c,0,(int32_t)c->r[3],0); // 8023E794
  c->r[30]=c->r[3]|c->r[3]; // 8023E798
  if (crb(c,2)) { goto L_8023E7DC; } // 8023E79C
  c->r[3]=R32(c->r[31]+0xFFFFCE20u); // 8023E7A0
  c->r[4]=0u+0x0000000Cu; // 8023E7A4
  c->lr=0x8023E7ACu; f_800EE128(c); // 8023E7A8
  cmps(c,0,(int32_t)c->r[3],0); // 8023E7AC
  if (crb(c,2)) { goto L_8023E7DC; } // 8023E7B0
  c->r[5]=c->r[3]|c->r[3]; // 8023E7B4
  if (crb(c,2)) { goto L_8023E7C4; } // 8023E7B8
  W32(c->r[3]+0x00000000u,c->r[29]); // 8023E7BC
  W32(c->r[3]+0x00000004u,c->r[29]); // 8023E7C0
L_8023E7C4:;
  W32(c->r[3]+0x00000008u,c->r[30]); // 8023E7C4
  c->r[0]=c->r[23]+0x00000010u; // 8023E7C8
  c->r[3]=c->r[23]+0x0000000Cu; // 8023E7CC
  c->r[4]=c->r[1]+0x00000008u; // 8023E7D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8023E7D4
  c->lr=0x8023E7DCu; f_80249BC0(c); // 8023E7D8
L_8023E7DC:;
  c->r[28]=c->r[28]+0x00000010u; // 8023E7DC
  c->r[26]=c->r[26]+0x00000001u; // 8023E7E0
L_8023E7E4:;
  c->r[0]=R16(c->r[24]+0x00000018u); // 8023E7E4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 8023E7E8
  if (crb(c,0)) { IRQCHK(c); goto L_8023E778; } // 8023E7EC
  c->r[11]=c->r[1]+0x00000040u; // 8023E7F0
  c->r[3]=c->r[23]|c->r[23]; // 8023E7F4
  c->lr=0x8023E7FCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023E7F8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8023E7FC
  c->lr=c->r[0]; // 8023E800
  c->r[1]=c->r[1]+0x00000040u; // 8023E804
  return; // 8023E808
}

// __dt__Q36nw4hbm3lyt5GroupFv
void f_8023E80C(Ctx* __restrict c) {
  trace_call(0x8023E80Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E80C
  c->r[0]=c->lr; // 8023E810
  W32(c->r[1]+0x00000034u,c->r[0]); // 8023E814
  c->r[11]=c->r[1]+0x00000030u; // 8023E818
  c->lr=0x8023E820u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023E81C
  cmps(c,0,(int32_t)c->r[3],0); // 8023E820
  c->r[26]=c->r[3]|c->r[3]; // 8023E824
  c->r[27]=c->r[4]|c->r[4]; // 8023E828
  if (crb(c,2)) { goto L_8023E898; } // 8023E82C
  c->r[4]=0u+0x802A0000u; // 8023E830
  c->r[31]=R32(c->r[3]+0x00000010u); // 8023E834
  c->r[4]=c->r[4]+0x00000738u; // 8023E838
  c->r[30]=c->r[3]+0x00000010u; // 8023E83C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8023E840
  c->r[29]=0u+0x80360000u; // 8023E844
  goto L_8023E870; // 8023E848
L_8023E84C:;
  c->r[28]=c->r[31]|c->r[31]; // 8023E84C
  c->r[31]=R32(c->r[31]+0x00000000u); // 8023E850
  c->r[3]=c->r[26]+0x0000000Cu; // 8023E854
  c->r[4]=c->r[1]+0x00000008u; // 8023E858
  W32(c->r[1]+0x00000008u,c->r[28]); // 8023E85C
  c->lr=0x8023E864u; f_80249B78(c); // 8023E860
  c->r[3]=R32(c->r[29]+0xFFFFCE20u); // 8023E864
  c->r[4]=c->r[28]|c->r[28]; // 8023E868
  c->lr=0x8023E870u; f_800EE138(c); // 8023E86C
L_8023E870:;
  cmpu(c,0,c->r[31],c->r[30]); // 8023E870
  if (!crb(c,2)) { IRQCHK(c); goto L_8023E84C; } // 8023E874
  c->r[3]=addc(c,c->r[26],0x0000000Cu,0); cr0(c,c->r[3]); // 8023E878
  if (crb(c,2)) { goto L_8023E888; } // 8023E87C
  c->r[4]=0u+0x00000000u; // 8023E880
  c->lr=0x8023E888u; f_80249AF4(c); // 8023E884
L_8023E888:;
  cmps(c,0,(int32_t)c->r[27],0); // 8023E888
  if (!crb(c,1)) { goto L_8023E898; } // 8023E88C
  c->r[3]=c->r[26]|c->r[26]; // 8023E890
  c->lr=0x8023E898u; f_8008DE54(c); // 8023E894
L_8023E898:;
  c->r[11]=c->r[1]+0x00000030u; // 8023E898
  c->r[3]=c->r[26]|c->r[26]; // 8023E89C
  c->lr=0x8023E8A4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023E8A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8023E8A4
  c->lr=c->r[0]; // 8023E8A8
  c->r[1]=c->r[1]+0x00000030u; // 8023E8AC
  return; // 8023E8B0
}

// __dt__Q36nw4hbm3lyt14GroupContainerFv
void f_8023E8B4(Ctx* __restrict c) {
  trace_call(0x8023E8B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E8B4
  c->r[0]=c->lr; // 8023E8B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8023E8BC
  c->r[11]=c->r[1]+0x00000030u; // 8023E8C0
  c->lr=0x8023E8C8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023E8C4
  cmps(c,0,(int32_t)c->r[3],0); // 8023E8C8
  c->r[26]=c->r[3]|c->r[3]; // 8023E8CC
  c->r[27]=c->r[4]|c->r[4]; // 8023E8D0
  if (crb(c,2)) { goto L_8023E960; } // 8023E8D4
  c->r[31]=R32(c->r[3]+0x00000004u); // 8023E8D8
  c->r[30]=c->r[3]+0x00000004u; // 8023E8DC
  c->r[29]=0u+0x80360000u; // 8023E8E0
  goto L_8023E934; // 8023E8E4
L_8023E8E8:;
  c->r[28]=c->r[31]|c->r[31]; // 8023E8E8
  c->r[31]=R32(c->r[31]+0x00000000u); // 8023E8EC
  c->r[3]=c->r[26]|c->r[26]; // 8023E8F0
  c->r[4]=c->r[1]+0x00000008u; // 8023E8F4
  W32(c->r[1]+0x00000008u,c->r[28]); // 8023E8F8
  c->lr=0x8023E900u; f_80249B78(c); // 8023E8FC
  c->r[0]=R8(c->r[28]+0x00000024u); // 8023E900
  cmps(c,0,(int32_t)c->r[0],0); // 8023E904
  if (!crb(c,2)) { goto L_8023E934; } // 8023E908
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 8023E90C
  c->r[4]=0u+0xFFFFFFFFu; // 8023E910
  c->r[12]=R32(c->r[28]+0x00000000u); // 8023E914
  c->r[3]=c->r[28]|c->r[28]; // 8023E918
  c->r[12]=R32(c->r[12]+0x00000008u); // 8023E91C
  c->ctr=c->r[12]; // 8023E920
  if (true) { c->lr=0x8023E928u; dispatch(c,c->ctr); } // 8023E924
  c->r[3]=R32(c->r[29]+0xFFFFCE20u); // 8023E928
  c->r[4]=c->r[28]|c->r[28]; // 8023E92C
  c->lr=0x8023E934u; f_800EE138(c); // 8023E930
L_8023E934:;
  cmpu(c,0,c->r[31],c->r[30]); // 8023E934
  if (!crb(c,2)) { IRQCHK(c); goto L_8023E8E8; } // 8023E938
  cmps(c,0,(int32_t)c->r[26],0); // 8023E93C
  if (crb(c,2)) { goto L_8023E950; } // 8023E940
  c->r[3]=c->r[26]|c->r[26]; // 8023E944
  c->r[4]=0u+0x00000000u; // 8023E948
  c->lr=0x8023E950u; f_80249AF4(c); // 8023E94C
L_8023E950:;
  cmps(c,0,(int32_t)c->r[27],0); // 8023E950
  if (!crb(c,1)) { goto L_8023E960; } // 8023E954
  c->r[3]=c->r[26]|c->r[26]; // 8023E958
  c->lr=0x8023E960u; f_8008DE54(c); // 8023E95C
L_8023E960:;
  c->r[11]=c->r[1]+0x00000030u; // 8023E960
  c->r[3]=c->r[26]|c->r[26]; // 8023E964
  c->lr=0x8023E96Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023E968
  c->r[0]=R32(c->r[1]+0x00000034u); // 8023E96C
  c->lr=c->r[0]; // 8023E970
  c->r[1]=c->r[1]+0x00000030u; // 8023E974
  return; // 8023E978
}

// AppendGroup__Q36nw4hbm3lyt14GroupContainerFPQ36nw4hbm3lyt5Group
void f_8023E97C(Ctx* __restrict c) {
  trace_call(0x8023E97Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E97C
  c->r[0]=c->lr; // 8023E980
  c->r[5]=c->r[4]|c->r[4]; // 8023E984
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023E988
  c->r[0]=c->r[3]+0x00000004u; // 8023E98C
  c->r[4]=c->r[1]+0x00000008u; // 8023E990
  c->r[5]=c->r[5]+0x00000004u; // 8023E994
  W32(c->r[1]+0x00000008u,c->r[0]); // 8023E998
  c->lr=0x8023E9A0u; f_80249BC0(c); // 8023E99C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023E9A0
  c->lr=c->r[0]; // 8023E9A4
  c->r[1]=c->r[1]+0x00000010u; // 8023E9A8
  return; // 8023E9AC
}

// FindGroupByName__Q36nw4hbm3lyt14GroupContainerFPCc
void f_8023E9B0(Ctx* __restrict c) {
  trace_call(0x8023E9B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023E9B0
  c->r[0]=c->lr; // 8023E9B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023E9B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8023E9BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8023E9C0
  c->r[30]=c->r[3]+0x00000004u; // 8023E9C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8023E9C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8023E9CC
  c->r[28]=c->r[4]|c->r[4]; // 8023E9D0
  c->r[31]=R32(c->r[3]+0x00000004u); // 8023E9D4
  goto L_8023EA00; // 8023E9D8
L_8023E9DC:;
  c->r[29]=c->r[31]+0xFFFFFFFCu; // 8023E9DC
  c->r[4]=c->r[28]|c->r[28]; // 8023E9E0
  c->r[3]=c->r[29]+0x00000018u; // 8023E9E4
  c->lr=0x8023E9ECu; f_8023D830(c); // 8023E9E8
  cmps(c,0,(int32_t)c->r[3],0); // 8023E9EC
  if (crb(c,2)) { goto L_8023E9FC; } // 8023E9F0
  c->r[3]=c->r[29]|c->r[29]; // 8023E9F4
  goto L_8023EA0C; // 8023E9F8
L_8023E9FC:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8023E9FC
L_8023EA00:;
  cmpu(c,0,c->r[31],c->r[30]); // 8023EA00
  if (!crb(c,2)) { IRQCHK(c); goto L_8023E9DC; } // 8023EA04
  c->r[3]=0u+0x00000000u; // 8023EA08
L_8023EA0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023EA0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8023EA10
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023EA14
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023EA18
  c->r[28]=R32(c->r[1]+0x00000010u); // 8023EA1C
  c->lr=c->r[0]; // 8023EA20
  c->r[1]=c->r[1]+0x00000020u; // 8023EA24
  return; // 8023EA28
}

// SetTagProcessorImpl__24@unnamed@lyt_layout_cpp@FPQ36nw4hbm3lyt4PanePQ36nw4hbm2ut19TagProcessorBase<w>
void f_8023EA2C(Ctx* __restrict c) {
  trace_call(0x8023EA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023EA2C
  c->r[0]=c->lr; // 8023EA30
  W32(c->r[1]+0x00000034u,c->r[0]); // 8023EA34
  c->r[11]=c->r[1]+0x00000030u; // 8023EA38
  c->lr=0x8023EA40u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023EA3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023EA40
  c->r[26]=0u+0x80360000u; // 8023EA44
  c->r[27]=c->r[3]|c->r[3]; // 8023EA48
  c->r[24]=c->r[4]|c->r[4]; // 8023EA4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8023EA50
  c->r[26]=c->r[26]+0xFFFFCE38u; // 8023EA54
  c->ctr=c->r[12]; // 8023EA58
  if (true) { c->lr=0x8023EA60u; dispatch(c,c->ctr); } // 8023EA5C
  goto L_8023EA78; // 8023EA60
L_8023EA64:;
  cmpu(c,0,c->r[3],c->r[26]); // 8023EA64
  if (!crb(c,2)) { goto L_8023EA74; } // 8023EA68
  c->r[0]=0u+0x00000001u; // 8023EA6C
  goto L_8023EA84; // 8023EA70
L_8023EA74:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8023EA74
L_8023EA78:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023EA78
  if (!crb(c,2)) { IRQCHK(c); goto L_8023EA64; } // 8023EA7C
  c->r[0]=0u+0x00000000u; // 8023EA80
L_8023EA84:;
  cmps(c,0,(int32_t)c->r[0],0); // 8023EA84
  if (crb(c,2)) { goto L_8023EA94; } // 8023EA88
  c->r[3]=c->r[27]|c->r[27]; // 8023EA8C
  goto L_8023EA98; // 8023EA90
L_8023EA94:;
  c->r[3]=0u+0x00000000u; // 8023EA94
L_8023EA98:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023EA98
  if (crb(c,2)) { goto L_8023EAA4; } // 8023EA9C
  W32(c->r[3]+0x000000F4u,c->r[24]); // 8023EAA0
L_8023EAA4:;
  c->r[25]=0u+0x80360000u; // 8023EAA4
  c->r[31]=R32(c->r[27]+0x00000014u); // 8023EAA8
  c->r[28]=c->r[27]+0x00000014u; // 8023EAAC
  c->r[25]=c->r[25]+0xFFFFCE38u; // 8023EAB0
  goto L_8023EBAC; // 8023EAB4
L_8023EAB8:;
  c->r[26]=c->r[31]+0xFFFFFFFCu; // 8023EAB8
  c->r[12]=R32(c->r[26]+0x00000000u); // 8023EABC
  c->r[3]=c->r[26]|c->r[26]; // 8023EAC0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8023EAC4
  c->ctr=c->r[12]; // 8023EAC8
  if (true) { c->lr=0x8023EAD0u; dispatch(c,c->ctr); } // 8023EACC
  goto L_8023EAE8; // 8023EAD0
L_8023EAD4:;
  cmpu(c,0,c->r[3],c->r[25]); // 8023EAD4
  if (!crb(c,2)) { goto L_8023EAE4; } // 8023EAD8
  c->r[0]=0u+0x00000001u; // 8023EADC
  goto L_8023EAF4; // 8023EAE0
L_8023EAE4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8023EAE4
L_8023EAE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023EAE8
  if (!crb(c,2)) { IRQCHK(c); goto L_8023EAD4; } // 8023EAEC
  c->r[0]=0u+0x00000000u; // 8023EAF0
L_8023EAF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8023EAF4
  if (crb(c,2)) { goto L_8023EB04; } // 8023EAF8
  c->r[3]=c->r[26]|c->r[26]; // 8023EAFC
  goto L_8023EB08; // 8023EB00
L_8023EB04:;
  c->r[3]=0u+0x00000000u; // 8023EB04
L_8023EB08:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023EB08
  if (crb(c,2)) { goto L_8023EB14; } // 8023EB0C
  W32(c->r[3]+0x000000F4u,c->r[24]); // 8023EB10
L_8023EB14:;
  c->r[30]=R32(c->r[26]+0x00000014u); // 8023EB14
  c->r[27]=c->r[26]+0x00000014u; // 8023EB18
  goto L_8023EBA0; // 8023EB1C
L_8023EB20:;
  c->r[26]=c->r[30]+0xFFFFFFFCu; // 8023EB20
  c->r[12]=R32(c->r[26]+0x00000000u); // 8023EB24
  c->r[3]=c->r[26]|c->r[26]; // 8023EB28
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8023EB2C
  c->ctr=c->r[12]; // 8023EB30
  if (true) { c->lr=0x8023EB38u; dispatch(c,c->ctr); } // 8023EB34
  goto L_8023EB50; // 8023EB38
L_8023EB3C:;
  cmpu(c,0,c->r[3],c->r[25]); // 8023EB3C
  if (!crb(c,2)) { goto L_8023EB4C; } // 8023EB40
  c->r[0]=0u+0x00000001u; // 8023EB44
  goto L_8023EB5C; // 8023EB48
L_8023EB4C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8023EB4C
L_8023EB50:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023EB50
  if (!crb(c,2)) { IRQCHK(c); goto L_8023EB3C; } // 8023EB54
  c->r[0]=0u+0x00000000u; // 8023EB58
L_8023EB5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8023EB5C
  if (crb(c,2)) { goto L_8023EB6C; } // 8023EB60
  c->r[3]=c->r[26]|c->r[26]; // 8023EB64
  goto L_8023EB70; // 8023EB68
L_8023EB6C:;
  c->r[3]=0u+0x00000000u; // 8023EB6C
L_8023EB70:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023EB70
  if (crb(c,2)) { goto L_8023EB7C; } // 8023EB74
  W32(c->r[3]+0x000000F4u,c->r[24]); // 8023EB78
L_8023EB7C:;
  {uint32_t ea=c->r[26]+0x00000014u; c->r[29]=R32(ea); c->r[26]=ea;} // 8023EB7C
  goto L_8023EB94; // 8023EB80
L_8023EB84:;
  c->r[4]=c->r[24]|c->r[24]; // 8023EB84
  c->r[3]=c->r[29]+0xFFFFFFFCu; // 8023EB88
  c->lr=0x8023EB90u; f_8023EA2C(c); // 8023EB8C
  c->r[29]=R32(c->r[29]+0x00000000u); // 8023EB90
L_8023EB94:;
  cmpu(c,0,c->r[29],c->r[26]); // 8023EB94
  if (!crb(c,2)) { IRQCHK(c); goto L_8023EB84; } // 8023EB98
  c->r[30]=R32(c->r[30]+0x00000000u); // 8023EB9C
L_8023EBA0:;
  cmpu(c,0,c->r[30],c->r[27]); // 8023EBA0
  if (!crb(c,2)) { IRQCHK(c); goto L_8023EB20; } // 8023EBA4
  c->r[31]=R32(c->r[31]+0x00000000u); // 8023EBA8
L_8023EBAC:;
  cmpu(c,0,c->r[31],c->r[28]); // 8023EBAC
  if (!crb(c,2)) { IRQCHK(c); goto L_8023EAB8; } // 8023EBB0
  c->r[11]=c->r[1]+0x00000030u; // 8023EBB4
  c->lr=0x8023EBBCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023EBB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8023EBBC
  c->lr=c->r[0]; // 8023EBC0
  c->r[1]=c->r[1]+0x00000030u; // 8023EBC4
  return; // 8023EBC8
}

// __ct__Q36nw4hbm3lyt6LayoutFv
void f_8023EBCC(Ctx* __restrict c) {
  trace_call(0x8023EBCCu);
  c->r[0]=0u+0x00000000u; // 8023EBCC
  c->r[4]=0u+0x80260000u; // 8023EBD0
  {uint32_t ea=c->r[4]+0x00001A40u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023EBD4
  c->r[4]=0u+0x802A0000u; // 8023EBD8
  c->r[4]=c->r[4]+0x00000760u; // 8023EBDC
  W32(c->r[3]+0x00000008u,c->r[0]); // 8023EBE0
  c->r[5]=c->r[3]+0x00000008u; // 8023EBE4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8023EBE8
  W32(c->r[3]+0x00000000u,c->r[4]); // 8023EBEC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8023EBF0
  W32(c->r[3]+0x00000008u,c->r[5]); // 8023EBF4
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8023EBF8
  W32(c->r[3]+0x00000010u,c->r[0]); // 8023EBFC
  W32(c->r[3]+0x00000014u,c->r[0]); // 8023EC00
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8023EC04
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8023EC08
  W8(c->r[3]+0x00000020u,c->r[0]); // 8023EC0C
  return; // 8023EC10
}

// __dt__Q36nw4hbm3lyt6LayoutFv
void f_8023EC14(Ctx* __restrict c) {
  trace_call(0x8023EC14u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023EC14
  c->r[0]=c->lr; // 8023EC18
  W32(c->r[1]+0x00000034u,c->r[0]); // 8023EC1C
  c->r[11]=c->r[1]+0x00000030u; // 8023EC20
  c->lr=0x8023EC28u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023EC24
  cmps(c,0,(int32_t)c->r[3],0); // 8023EC28
  c->r[26]=c->r[3]|c->r[3]; // 8023EC2C
  c->r[27]=c->r[4]|c->r[4]; // 8023EC30
  if (crb(c,2)) { goto L_8023ED20; } // 8023EC34
  c->r[0]=R32(c->r[3]+0x00000014u); // 8023EC38
  c->r[4]=0u+0x802A0000u; // 8023EC3C
  c->r[4]=c->r[4]+0x00000760u; // 8023EC40
  cmps(c,0,(int32_t)c->r[0],0); // 8023EC44
  W32(c->r[3]+0x00000000u,c->r[4]); // 8023EC48
  if (crb(c,2)) { goto L_8023EC6C; } // 8023EC4C
  c->r[3]=c->r[0]|c->r[0]; // 8023EC50
  c->r[4]=0u+0xFFFFFFFFu; // 8023EC54
  c->lr=0x8023EC5Cu; f_8023E8B4(c); // 8023EC58
  c->r[3]=0u+0x80360000u; // 8023EC5C
  c->r[4]=R32(c->r[26]+0x00000014u); // 8023EC60
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023EC64
  c->lr=0x8023EC6Cu; f_800EE138(c); // 8023EC68
L_8023EC6C:;
  c->r[3]=R32(c->r[26]+0x00000010u); // 8023EC6C
  cmps(c,0,(int32_t)c->r[3],0); // 8023EC70
  if (crb(c,2)) { goto L_8023ECA8; } // 8023EC74
  c->r[0]=R8(c->r[3]+0x000000D0u); // 8023EC78
  cmps(c,0,(int32_t)c->r[0],0); // 8023EC7C
  if (!crb(c,2)) { goto L_8023ECA8; } // 8023EC80
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023EC84
  c->r[4]=0u+0xFFFFFFFFu; // 8023EC88
  c->r[12]=R32(c->r[12]+0x00000008u); // 8023EC8C
  c->ctr=c->r[12]; // 8023EC90
  if (true) { c->lr=0x8023EC98u; dispatch(c,c->ctr); } // 8023EC94
  c->r[3]=0u+0x80360000u; // 8023EC98
  c->r[4]=R32(c->r[26]+0x00000010u); // 8023EC9C
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023ECA0
  c->lr=0x8023ECA8u; f_800EE138(c); // 8023ECA4
L_8023ECA8:;
  c->r[31]=R32(c->r[26]+0x00000008u); // 8023ECA8
  c->r[30]=c->r[26]+0x00000008u; // 8023ECAC
  c->r[29]=0u+0x80360000u; // 8023ECB0
  goto L_8023ECF8; // 8023ECB4
L_8023ECB8:;
  c->r[28]=c->r[31]|c->r[31]; // 8023ECB8
  c->r[31]=R32(c->r[31]+0x00000000u); // 8023ECBC
  c->r[3]=c->r[26]+0x00000004u; // 8023ECC0
  c->r[4]=c->r[1]+0x00000008u; // 8023ECC4
  W32(c->r[1]+0x00000008u,c->r[28]); // 8023ECC8
  c->lr=0x8023ECD0u; f_80249B78(c); // 8023ECCC
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 8023ECD0
  c->r[4]=0u+0xFFFFFFFFu; // 8023ECD4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8023ECD8
  c->r[3]=c->r[28]|c->r[28]; // 8023ECDC
  c->r[12]=R32(c->r[12]+0x00000008u); // 8023ECE0
  c->ctr=c->r[12]; // 8023ECE4
  if (true) { c->lr=0x8023ECECu; dispatch(c,c->ctr); } // 8023ECE8
  c->r[3]=R32(c->r[29]+0xFFFFCE20u); // 8023ECEC
  c->r[4]=c->r[28]|c->r[28]; // 8023ECF0
  c->lr=0x8023ECF8u; f_800EE138(c); // 8023ECF4
L_8023ECF8:;
  cmpu(c,0,c->r[31],c->r[30]); // 8023ECF8
  if (!crb(c,2)) { IRQCHK(c); goto L_8023ECB8; } // 8023ECFC
  c->r[3]=addc(c,c->r[26],0x00000004u,0); cr0(c,c->r[3]); // 8023ED00
  if (crb(c,2)) { goto L_8023ED10; } // 8023ED04
  c->r[4]=0u+0x00000000u; // 8023ED08
  c->lr=0x8023ED10u; f_80249AF4(c); // 8023ED0C
L_8023ED10:;
  cmps(c,0,(int32_t)c->r[27],0); // 8023ED10
  if (!crb(c,1)) { goto L_8023ED20; } // 8023ED14
  c->r[3]=c->r[26]|c->r[26]; // 8023ED18
  c->lr=0x8023ED20u; f_8008DE54(c); // 8023ED1C
L_8023ED20:;
  c->r[11]=c->r[1]+0x00000030u; // 8023ED20
  c->r[3]=c->r[26]|c->r[26]; // 8023ED24
  c->lr=0x8023ED2Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023ED28
  c->r[0]=R32(c->r[1]+0x00000034u); // 8023ED2C
  c->lr=c->r[0]; // 8023ED30
  c->r[1]=c->r[1]+0x00000030u; // 8023ED34
  return; // 8023ED38
}

// Build__Q36nw4hbm3lyt6LayoutFPCvPQ36nw4hbm3lyt16ResourceAccessor
void f_8023ED3C(Ctx* __restrict c) {
  trace_call(0x8023ED3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023ED3C
  c->r[0]=c->lr; // 8023ED40
  W32(c->r[1]+0x00000064u,c->r[0]); // 8023ED44
  c->r[11]=c->r[1]+0x00000060u; // 8023ED48
  c->lr=0x8023ED50u; f_800D49E0(c); // 8023ED4C
  c->r[31]=c->r[4]|c->r[4]; // 8023ED50
  c->r[4]=0u+0x524C0000u; // 8023ED54
  c->r[30]=c->r[3]|c->r[3]; // 8023ED58
  c->r[14]=c->r[5]|c->r[5]; // 8023ED5C
  c->r[4]=c->r[4]+0x00005954u; // 8023ED60
  c->r[3]=c->r[31]|c->r[31]; // 8023ED64
  c->lr=0x8023ED6Cu; f_8023D8B0(c); // 8023ED68
  cmps(c,0,(int32_t)c->r[3],0); // 8023ED6C
  if (!crb(c,2)) { goto L_8023ED7C; } // 8023ED70
  c->r[3]=0u+0x00000000u; // 8023ED74
  goto L_8023F028; // 8023ED78
L_8023ED7C:;
  c->r[22]=0u+0x00000000u; // 8023ED7C
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 8023ED80
  c->r[27]=0u+0x70610000u; // 8023ED84
  W32(c->r[1]+0x00000014u,c->r[14]); // 8023ED88
  c->r[16]=c->r[31]+c->r[0]; // 8023ED8C
  c->r[20]=0u+0x00000000u; // 8023ED90
  W32(c->r[1]+0x00000008u,c->r[22]); // 8023ED94
  c->r[23]=c->r[27]+0x00006531u; // 8023ED98
  c->r[19]=0u+0x00000000u; // 8023ED9C
  c->r[18]=0u+0x00000000u; // 8023EDA0
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 8023EDA4
  c->r[17]=0u+0x00000000u; // 8023EDA8
  c->r[15]=0u+0x00000000u; // 8023EDAC
  c->r[28]=0u+0x74780000u; // 8023EDB0
  W32(c->r[1]+0x00000010u,c->r[22]); // 8023EDB4
  c->r[25]=0u+0x626E0000u; // 8023EDB8
  c->r[29]=0u+0x80360000u; // 8023EDBC
  c->r[14]=0u+0x6C790000u; // 8023EDC0
  c->r[26]=0u+0x67720000u; // 8023EDC4
  c->r[24]=0u+0x666E0000u; // 8023EDC8
  goto L_8023F018; // 8023EDCC
L_8023EDD0:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 8023EDD0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 8023EDD4
  if (crb(c,2)) { goto L_8023EF48; } // 8023EDD8
  if (!crb(c,0)) { goto L_8023EE54; } // 8023EDDC
  c->r[0]=c->r[26]+0x00007031u; // 8023EDE0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EDE4
  if (crb(c,2)) { goto L_8023EF54; } // 8023EDE8
  if (!crb(c,0)) { goto L_8023EE20; } // 8023EDEC
  c->r[0]=c->r[24]+0x00006C31u; // 8023EDF0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EDF4
  if (crb(c,2)) { goto L_8023EEEC; } // 8023EDF8
  if (!crb(c,0)) { goto L_8023EE10; } // 8023EDFC
  c->r[0]=c->r[25]+0x00006431u; // 8023EE00
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EE04
  if (crb(c,2)) { goto L_8023EEFC; } // 8023EE08
  goto L_8023F00C; // 8023EE0C
L_8023EE10:;
  c->r[0]=c->r[26]+0x00006531u; // 8023EE10
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EE14
  if (crb(c,2)) { goto L_8023F008; } // 8023EE18
  goto L_8023F00C; // 8023EE1C
L_8023EE20:;
  c->r[0]=c->r[14]+0x00007431u; // 8023EE20
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EE24
  if (crb(c,2)) { goto L_8023EEBC; } // 8023EE28
  if (!crb(c,0)) { goto L_8023EE40; } // 8023EE2C
  c->r[0]=c->r[26]+0x00007331u; // 8023EE30
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EE34
  if (crb(c,2)) { goto L_8023F000; } // 8023EE38
  goto L_8023F00C; // 8023EE3C
L_8023EE40:;
  c->r[4]=0u+0x6D610000u; // 8023EE40
  c->r[0]=c->r[4]+0x00007431u; // 8023EE44
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EE48
  if (crb(c,2)) { goto L_8023EEF4; } // 8023EE4C
  goto L_8023F00C; // 8023EE50
L_8023EE54:;
  c->r[0]=c->r[28]+0x00006C31u; // 8023EE54
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EE58
  if (crb(c,2)) { goto L_8023EEE4; } // 8023EE5C
  if (!crb(c,0)) { goto L_8023EE98; } // 8023EE60
  c->r[0]=c->r[27]+0x00007331u; // 8023EE64
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EE68
  if (crb(c,2)) { goto L_8023EF40; } // 8023EE6C
  if (!crb(c,0)) { goto L_8023EE84; } // 8023EE70
  c->r[0]=c->r[27]+0x00006E31u; // 8023EE74
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EE78
  if (crb(c,2)) { goto L_8023EEFC; } // 8023EE7C
  goto L_8023F00C; // 8023EE80
L_8023EE84:;
  c->r[4]=0u+0x70690000u; // 8023EE84
  c->r[0]=c->r[4]+0x00006331u; // 8023EE88
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EE8C
  if (crb(c,2)) { goto L_8023EEFC; } // 8023EE90
  goto L_8023F00C; // 8023EE94
L_8023EE98:;
  c->r[4]=0u+0x776E0000u; // 8023EE98
  c->r[0]=c->r[4]+0x00006431u; // 8023EE9C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EEA0
  if (crb(c,2)) { goto L_8023EEFC; } // 8023EEA4
  if (!crb(c,0)) { goto L_8023F00C; } // 8023EEA8
  c->r[0]=c->r[28]+0x00007431u; // 8023EEAC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023EEB0
  if (crb(c,2)) { goto L_8023EEFC; } // 8023EEB4
  goto L_8023F00C; // 8023EEB8
L_8023EEBC:;
  c->r[3]=R8(c->r[16]+0x00000008u); // 8023EEBC
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8023EEC0
  c->r[0]=0u-c->r[3]; // 8023EEC4
  {uint32_t ea=c->r[16]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023EEC8
  c->r[0]=c->r[0]|c->r[3]; // 8023EECC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 8023EED0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8023EED4
  W8(c->r[30]+0x00000020u,c->r[0]); // 8023EED8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8023EEDC
  goto L_8023F00C; // 8023EEE0
L_8023EEE4:;
  W32(c->r[1]+0x00000008u,c->r[16]); // 8023EEE4
  goto L_8023F00C; // 8023EEE8
L_8023EEEC:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 8023EEEC
  goto L_8023F00C; // 8023EEF0
L_8023EEF4:;
  W32(c->r[1]+0x00000010u,c->r[16]); // 8023EEF4
  goto L_8023F00C; // 8023EEF8
L_8023EEFC:;
  c->r[4]=c->r[16]|c->r[16]; // 8023EEFC
  c->r[5]=c->r[1]+0x00000008u; // 8023EF00
  c->lr=0x8023EF08u; f_8023F4B8(c); // 8023EF04
  cmps(c,0,(int32_t)c->r[3],0); // 8023EF08
  c->r[21]=c->r[3]|c->r[3]; // 8023EF0C
  if (crb(c,2)) { goto L_8023F00C; } // 8023EF10
  c->r[0]=R32(c->r[30]+0x00000010u); // 8023EF14
  cmps(c,0,(int32_t)c->r[0],0); // 8023EF18
  if (!crb(c,2)) { goto L_8023EF24; } // 8023EF1C
  W32(c->r[30]+0x00000010u,c->r[3]); // 8023EF20
L_8023EF24:;
  cmps(c,0,(int32_t)c->r[20],0); // 8023EF24
  if (crb(c,2)) { goto L_8023EF38; } // 8023EF28
  c->r[3]=c->r[20]|c->r[20]; // 8023EF2C
  c->r[4]=c->r[21]|c->r[21]; // 8023EF30
  c->lr=0x8023EF38u; f_80242D68(c); // 8023EF34
L_8023EF38:;
  c->r[19]=c->r[21]|c->r[21]; // 8023EF38
  goto L_8023F00C; // 8023EF3C
L_8023EF40:;
  c->r[20]=c->r[19]|c->r[19]; // 8023EF40
  goto L_8023F00C; // 8023EF44
L_8023EF48:;
  c->r[19]=c->r[20]|c->r[20]; // 8023EF48
  c->r[20]=R32(c->r[20]+0x0000000Cu); // 8023EF4C
  goto L_8023F00C; // 8023EF50
L_8023EF54:;
  cmps(c,0,(int32_t)c->r[18],0); // 8023EF54
  if (!crb(c,2)) { goto L_8023EFA0; } // 8023EF58
  c->r[3]=R32(c->r[29]+0xFFFFCE20u); // 8023EF5C
  c->r[18]=0u+0x00000001u; // 8023EF60
  c->r[4]=0u+0x0000000Cu; // 8023EF64
  c->lr=0x8023EF6Cu; f_800EE128(c); // 8023EF68
  cmps(c,0,(int32_t)c->r[3],0); // 8023EF6C
  if (crb(c,2)) { goto L_8023EF94; } // 8023EF70
  if (crb(c,2)) { goto L_8023EF98; } // 8023EF74
  W32(c->r[3]+0x00000004u,c->r[22]); // 8023EF78
  c->r[4]=c->r[3]+0x00000004u; // 8023EF7C
  W32(c->r[3]+0x00000008u,c->r[22]); // 8023EF80
  W32(c->r[3]+0x00000000u,c->r[22]); // 8023EF84
  W32(c->r[3]+0x00000004u,c->r[4]); // 8023EF88
  W32(c->r[3]+0x00000008u,c->r[4]); // 8023EF8C
  goto L_8023EF98; // 8023EF90
L_8023EF94:;
  c->r[3]=0u+0x00000000u; // 8023EF94
L_8023EF98:;
  W32(c->r[30]+0x00000014u,c->r[3]); // 8023EF98
  goto L_8023F00C; // 8023EF9C
L_8023EFA0:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 8023EFA0
  cmps(c,0,(int32_t)c->r[0],0); // 8023EFA4
  if (crb(c,2)) { goto L_8023F00C; } // 8023EFA8
  cmps(c,0,(int32_t)c->r[17],1); // 8023EFAC
  if (!crb(c,2)) { goto L_8023F00C; } // 8023EFB0
  c->r[21]=R32(c->r[30]+0x00000010u); // 8023EFB4
  c->r[4]=0u+0x0000002Cu; // 8023EFB8
  c->r[3]=R32(c->r[29]+0xFFFFCE20u); // 8023EFBC
  c->lr=0x8023EFC4u; f_800EE128(c); // 8023EFC0
  cmps(c,0,(int32_t)c->r[3],0); // 8023EFC4
  if (crb(c,2)) { goto L_8023EFE8; } // 8023EFC8
  c->r[4]=c->r[3]|c->r[3]; // 8023EFCC
  if (crb(c,2)) { goto L_8023EFEC; } // 8023EFD0
  c->r[4]=c->r[16]|c->r[16]; // 8023EFD4
  c->r[5]=c->r[21]|c->r[21]; // 8023EFD8
  c->lr=0x8023EFE0u; f_8023E700(c); // 8023EFDC
  c->r[4]=c->r[3]|c->r[3]; // 8023EFE0
  goto L_8023EFEC; // 8023EFE4
L_8023EFE8:;
  c->r[4]=0u+0x00000000u; // 8023EFE8
L_8023EFEC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8023EFEC
  if (crb(c,2)) { goto L_8023F00C; } // 8023EFF0
  c->r[3]=R32(c->r[30]+0x00000014u); // 8023EFF4
  c->lr=0x8023EFFCu; f_8023E97C(c); // 8023EFF8
  goto L_8023F00C; // 8023EFFC
L_8023F000:;
  c->r[17]=c->r[17]+0x00000001u; // 8023F000
  goto L_8023F00C; // 8023F004
L_8023F008:;
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 8023F008
L_8023F00C:;
  c->r[0]=R32(c->r[16]+0x00000004u); // 8023F00C
  c->r[15]=c->r[15]+0x00000001u; // 8023F010
  c->r[16]=c->r[16]+c->r[0]; // 8023F014
L_8023F018:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 8023F018
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 8023F01C
  if (crb(c,0)) { IRQCHK(c); goto L_8023EDD0; } // 8023F020
  c->r[3]=0u+0x00000001u; // 8023F024
L_8023F028:;
  c->r[11]=c->r[1]+0x00000060u; // 8023F028
  c->lr=0x8023F030u; f_800D4A2C(c); // 8023F02C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8023F030
  c->lr=c->r[0]; // 8023F034
  c->r[1]=c->r[1]+0x00000060u; // 8023F038
  return; // 8023F03C
}

// CreateAnimTransform__Q36nw4hbm3lyt6LayoutFPCvPQ36nw4hbm3lyt16ResourceAccessor
void f_8023F040(Ctx* __restrict c) {
  trace_call(0x8023F040u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023F040
  c->r[0]=c->lr; // 8023F044
  W32(c->r[1]+0x00000044u,c->r[0]); // 8023F048
  c->r[11]=c->r[1]+0x00000040u; // 8023F04C
  c->lr=0x8023F054u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023F050
  c->r[30]=c->r[4]|c->r[4]; // 8023F054
  c->r[25]=c->r[3]|c->r[3]; // 8023F058
  c->r[26]=c->r[5]|c->r[5]; // 8023F05C
  c->r[3]=c->r[30]|c->r[30]; // 8023F060
  c->lr=0x8023F068u; f_8023D888(c); // 8023F064
  cmps(c,0,(int32_t)c->r[3],0); // 8023F068
  if (!crb(c,2)) { goto L_8023F078; } // 8023F06C
  c->r[3]=0u+0x00000000u; // 8023F070
  goto L_8023F1B0; // 8023F074
L_8023F078:;
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 8023F078
  c->r[3]=0u+0x70610000u; // 8023F07C
  c->r[31]=c->r[3]+0x00006931u; // 8023F080
  c->r[28]=0u+0x00000000u; // 8023F084
  c->r[29]=c->r[30]+c->r[0]; // 8023F088
  c->r[27]=0u+0x00000000u; // 8023F08C
  c->r[23]=0u+0x524C0000u; // 8023F090
  c->r[24]=0u+0x80360000u; // 8023F094
  goto L_8023F1A0; // 8023F098
L_8023F09C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8023F09C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 8023F0A0
  if (crb(c,2)) { goto L_8023F0AC; } // 8023F0A4
  goto L_8023F194; // 8023F0A8
L_8023F0AC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8023F0AC
  c->r[0]=c->r[23]+0x00005450u; // 8023F0B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F0B4
  if (crb(c,2)) { goto L_8023F120; } // 8023F0B8
  if (!crb(c,0)) { goto L_8023F0F0; } // 8023F0BC
  c->r[0]=c->r[23]+0x00004D43u; // 8023F0C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F0C4
  if (crb(c,2)) { goto L_8023F120; } // 8023F0C8
  if (!crb(c,0)) { goto L_8023F0E0; } // 8023F0CC
  c->r[0]=c->r[23]+0x0000414Eu; // 8023F0D0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F0D4
  if (crb(c,2)) { goto L_8023F120; } // 8023F0D8
  goto L_8023F174; // 8023F0DC
L_8023F0E0:;
  c->r[0]=c->r[23]+0x00005041u; // 8023F0E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F0E4
  if (crb(c,2)) { goto L_8023F120; } // 8023F0E8
  goto L_8023F174; // 8023F0EC
L_8023F0F0:;
  c->r[0]=c->r[23]+0x00005643u; // 8023F0F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F0F4
  if (crb(c,2)) { goto L_8023F120; } // 8023F0F8
  if (!crb(c,0)) { goto L_8023F110; } // 8023F0FC
  c->r[0]=c->r[23]+0x00005453u; // 8023F100
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F104
  if (crb(c,2)) { goto L_8023F120; } // 8023F108
  goto L_8023F174; // 8023F10C
L_8023F110:;
  c->r[0]=c->r[23]+0x00005649u; // 8023F110
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F114
  if (crb(c,2)) { goto L_8023F120; } // 8023F118
  goto L_8023F174; // 8023F11C
L_8023F120:;
  c->r[3]=R32(c->r[24]+0xFFFFCE20u); // 8023F120
  c->r[4]=0u+0x00000020u; // 8023F124
  c->lr=0x8023F12Cu; f_800EE128(c); // 8023F128
  cmps(c,0,(int32_t)c->r[3],0); // 8023F12C
  if (crb(c,2)) { goto L_8023F148; } // 8023F130
  c->r[22]=c->r[3]|c->r[3]; // 8023F134
  if (crb(c,2)) { goto L_8023F14C; } // 8023F138
  c->lr=0x8023F140u; f_8023CA64(c); // 8023F13C
  c->r[22]=c->r[3]|c->r[3]; // 8023F140
  goto L_8023F14C; // 8023F144
L_8023F148:;
  c->r[22]=0u+0x00000000u; // 8023F148
L_8023F14C:;
  cmps(c,0,(int32_t)c->r[22],0); // 8023F14C
  if (crb(c,2)) { goto L_8023F174; } // 8023F150
  c->r[12]=R32(c->r[22]+0x00000000u); // 8023F154
  c->r[3]=c->r[22]|c->r[22]; // 8023F158
  c->r[4]=c->r[29]|c->r[29]; // 8023F15C
  c->r[5]=c->r[26]|c->r[26]; // 8023F160
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8023F164
  c->ctr=c->r[12]; // 8023F168
  if (true) { c->lr=0x8023F170u; dispatch(c,c->ctr); } // 8023F16C
  c->r[28]=c->r[22]|c->r[22]; // 8023F170
L_8023F174:;
  cmps(c,0,(int32_t)c->r[28],0); // 8023F174
  if (crb(c,2)) { goto L_8023F194; } // 8023F178
  c->r[0]=c->r[25]+0x00000008u; // 8023F17C
  c->r[3]=c->r[25]+0x00000004u; // 8023F180
  W32(c->r[1]+0x00000008u,c->r[0]); // 8023F184
  c->r[4]=c->r[1]+0x00000008u; // 8023F188
  c->r[5]=c->r[28]+0x00000004u; // 8023F18C
  c->lr=0x8023F194u; f_80249BC0(c); // 8023F190
L_8023F194:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 8023F194
  c->r[27]=c->r[27]+0x00000001u; // 8023F198
  c->r[29]=c->r[29]+c->r[0]; // 8023F19C
L_8023F1A0:;
  c->r[0]=R16(c->r[30]+0x0000000Eu); // 8023F1A0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 8023F1A4
  if (crb(c,0)) { IRQCHK(c); goto L_8023F09C; } // 8023F1A8
  c->r[3]=c->r[28]|c->r[28]; // 8023F1AC
L_8023F1B0:;
  c->r[11]=c->r[1]+0x00000040u; // 8023F1B0
  c->lr=0x8023F1B8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023F1B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8023F1B8
  c->lr=c->r[0]; // 8023F1BC
  c->r[1]=c->r[1]+0x00000040u; // 8023F1C0
  return; // 8023F1C4
}

// BindAnimation__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransform
void f_8023F1C8(Ctx* __restrict c) {
  trace_call(0x8023F1C8u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8023F1C8
  cmps(c,0,(int32_t)c->r[3],0); // 8023F1CC
  if (crb(c,2)) return; // 8023F1D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023F1D4
  c->r[5]=0u+0x00000001u; // 8023F1D8
  c->r[12]=R32(c->r[12]+0x00000044u); // 8023F1DC
  c->ctr=c->r[12]; // 8023F1E0
  if (true) { dispatch(c,c->ctr); return; } // 8023F1E4
  return; // 8023F1E8
}

// UnbindAnimation__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransform
void f_8023F1EC(Ctx* __restrict c) {
  trace_call(0x8023F1ECu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8023F1EC
  cmps(c,0,(int32_t)c->r[3],0); // 8023F1F0
  if (crb(c,2)) return; // 8023F1F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023F1F8
  c->r[5]=0u+0x00000001u; // 8023F1FC
  c->r[12]=R32(c->r[12]+0x00000048u); // 8023F200
  c->ctr=c->r[12]; // 8023F204
  if (true) { dispatch(c,c->ctr); return; } // 8023F208
  return; // 8023F20C
}

// UnbindAllAnimation__Q36nw4hbm3lyt6LayoutFv
void f_8023F210(Ctx* __restrict c) {
  trace_call(0x8023F210u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023F210
  c->r[4]=0u+0x00000000u; // 8023F214
  c->r[12]=R32(c->r[12]+0x00000018u); // 8023F218
  c->ctr=c->r[12]; // 8023F21C
  if (true) { dispatch(c,c->ctr); return; } // 8023F220
}

// SetAnimationEnable__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransformb
void f_8023F224(Ctx* __restrict c) {
  trace_call(0x8023F224u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8023F224
  cmps(c,0,(int32_t)c->r[3],0); // 8023F228
  if (crb(c,2)) return; // 8023F22C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023F230
  c->r[6]=0u+0x00000001u; // 8023F234
  c->r[12]=R32(c->r[12]+0x00000058u); // 8023F238
  c->ctr=c->r[12]; // 8023F23C
  if (true) { dispatch(c,c->ctr); return; } // 8023F240
  return; // 8023F244
}

// CalculateMtx__Q36nw4hbm3lyt6LayoutFRCQ36nw4hbm3lyt8DrawInfo
void f_8023F248(Ctx* __restrict c) {
  trace_call(0x8023F248u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8023F248
  cmps(c,0,(int32_t)c->r[3],0); // 8023F24C
  if (crb(c,2)) return; // 8023F250
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023F254
  c->r[12]=R32(c->r[12]+0x00000010u); // 8023F258
  c->ctr=c->r[12]; // 8023F25C
  if (true) { dispatch(c,c->ctr); return; } // 8023F260
  return; // 8023F264
}

// Draw__Q36nw4hbm3lyt6LayoutFRCQ36nw4hbm3lyt8DrawInfo
void f_8023F268(Ctx* __restrict c) {
  trace_call(0x8023F268u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8023F268
  cmps(c,0,(int32_t)c->r[3],0); // 8023F26C
  if (crb(c,2)) return; // 8023F270
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023F274
  c->r[12]=R32(c->r[12]+0x00000014u); // 8023F278
  c->ctr=c->r[12]; // 8023F27C
  if (true) { dispatch(c,c->ctr); return; } // 8023F280
  return; // 8023F284
}

// Animate__Q36nw4hbm3lyt6LayoutFUl
void f_8023F288(Ctx* __restrict c) {
  trace_call(0x8023F288u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8023F288
  cmps(c,0,(int32_t)c->r[3],0); // 8023F28C
  if (crb(c,2)) return; // 8023F290
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023F294
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8023F298
  c->ctr=c->r[12]; // 8023F29C
  if (true) { dispatch(c,c->ctr); return; } // 8023F2A0
  return; // 8023F2A4
}

// GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv
void f_8023F2A8(Ctx* __restrict c) {
  trace_call(0x8023F2A8u);
  c->r[0]=R8(c->r[4]+0x00000020u); // 8023F2A8
  cmpu(c,0,c->r[0],0x00000001u); // 8023F2AC
  if (!crb(c,2)) { goto L_8023F2F0; } // 8023F2B0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8023F2B4
  c->r[5]=0u+0x80260000u; // 8023F2B8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023F2BC
  c->f[3]=-c->f[4]; // 8023F2C0
  {uint32_t ea=c->r[5]+0x00001A44u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023F2C4
  c->f[0]=-c->f[1]; // 8023F2C8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[2]); // 8023F2CC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 8023F2D0
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 8023F2D4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8023F2D8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 8023F2DC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8023F2E0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8023F2E4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 8023F2E8
  return; // 8023F2EC
L_8023F2F0:;
  c->r[5]=0u+0x80260000u; // 8023F2F0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8023F2F4
  {uint32_t ea=c->r[5]+0x00001A40u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023F2F8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023F2FC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8023F300
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8023F304
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8023F308
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8023F30C
  return; // 8023F310
}

// SetTagProcessor__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm2ut19TagProcessorBase<w>
void f_8023F314(Ctx* __restrict c) {
  trace_call(0x8023F314u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023F314
  c->r[0]=c->lr; // 8023F318
  W32(c->r[1]+0x00000034u,c->r[0]); // 8023F31C
  c->r[11]=c->r[1]+0x00000030u; // 8023F320
  c->lr=0x8023F328u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023F324
  c->r[25]=R32(c->r[3]+0x00000010u); // 8023F328
  c->r[24]=0u+0x80360000u; // 8023F32C
  c->r[31]=c->r[4]|c->r[4]; // 8023F330
  c->r[12]=R32(c->r[25]+0x00000000u); // 8023F334
  c->r[3]=c->r[25]|c->r[25]; // 8023F338
  c->r[24]=c->r[24]+0xFFFFCE38u; // 8023F33C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8023F340
  c->ctr=c->r[12]; // 8023F344
  if (true) { c->lr=0x8023F34Cu; dispatch(c,c->ctr); } // 8023F348
  goto L_8023F364; // 8023F34C
L_8023F350:;
  cmpu(c,0,c->r[3],c->r[24]); // 8023F350
  if (!crb(c,2)) { goto L_8023F360; } // 8023F354
  c->r[0]=0u+0x00000001u; // 8023F358
  goto L_8023F370; // 8023F35C
L_8023F360:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8023F360
L_8023F364:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023F364
  if (!crb(c,2)) { IRQCHK(c); goto L_8023F350; } // 8023F368
  c->r[0]=0u+0x00000000u; // 8023F36C
L_8023F370:;
  cmps(c,0,(int32_t)c->r[0],0); // 8023F370
  if (crb(c,2)) { goto L_8023F380; } // 8023F374
  c->r[3]=c->r[25]|c->r[25]; // 8023F378
  goto L_8023F384; // 8023F37C
L_8023F380:;
  c->r[3]=0u+0x00000000u; // 8023F380
L_8023F384:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023F384
  if (crb(c,2)) { goto L_8023F390; } // 8023F388
  W32(c->r[3]+0x000000F4u,c->r[31]); // 8023F38C
L_8023F390:;
  c->r[24]=0u+0x80360000u; // 8023F390
  c->r[30]=R32(c->r[25]+0x00000014u); // 8023F394
  c->r[27]=c->r[25]+0x00000014u; // 8023F398
  c->r[24]=c->r[24]+0xFFFFCE38u; // 8023F39C
  goto L_8023F498; // 8023F3A0
L_8023F3A4:;
  c->r[25]=c->r[30]+0xFFFFFFFCu; // 8023F3A4
  c->r[12]=R32(c->r[25]+0x00000000u); // 8023F3A8
  c->r[3]=c->r[25]|c->r[25]; // 8023F3AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8023F3B0
  c->ctr=c->r[12]; // 8023F3B4
  if (true) { c->lr=0x8023F3BCu; dispatch(c,c->ctr); } // 8023F3B8
  goto L_8023F3D4; // 8023F3BC
L_8023F3C0:;
  cmpu(c,0,c->r[3],c->r[24]); // 8023F3C0
  if (!crb(c,2)) { goto L_8023F3D0; } // 8023F3C4
  c->r[0]=0u+0x00000001u; // 8023F3C8
  goto L_8023F3E0; // 8023F3CC
L_8023F3D0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8023F3D0
L_8023F3D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023F3D4
  if (!crb(c,2)) { IRQCHK(c); goto L_8023F3C0; } // 8023F3D8
  c->r[0]=0u+0x00000000u; // 8023F3DC
L_8023F3E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8023F3E0
  if (crb(c,2)) { goto L_8023F3F0; } // 8023F3E4
  c->r[3]=c->r[25]|c->r[25]; // 8023F3E8
  goto L_8023F3F4; // 8023F3EC
L_8023F3F0:;
  c->r[3]=0u+0x00000000u; // 8023F3F0
L_8023F3F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023F3F4
  if (crb(c,2)) { goto L_8023F400; } // 8023F3F8
  W32(c->r[3]+0x000000F4u,c->r[31]); // 8023F3FC
L_8023F400:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 8023F400
  c->r[26]=c->r[25]+0x00000014u; // 8023F404
  goto L_8023F48C; // 8023F408
L_8023F40C:;
  c->r[25]=c->r[29]+0xFFFFFFFCu; // 8023F40C
  c->r[12]=R32(c->r[25]+0x00000000u); // 8023F410
  c->r[3]=c->r[25]|c->r[25]; // 8023F414
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8023F418
  c->ctr=c->r[12]; // 8023F41C
  if (true) { c->lr=0x8023F424u; dispatch(c,c->ctr); } // 8023F420
  goto L_8023F43C; // 8023F424
L_8023F428:;
  cmpu(c,0,c->r[3],c->r[24]); // 8023F428
  if (!crb(c,2)) { goto L_8023F438; } // 8023F42C
  c->r[0]=0u+0x00000001u; // 8023F430
  goto L_8023F448; // 8023F434
L_8023F438:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8023F438
L_8023F43C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023F43C
  if (!crb(c,2)) { IRQCHK(c); goto L_8023F428; } // 8023F440
  c->r[0]=0u+0x00000000u; // 8023F444
L_8023F448:;
  cmps(c,0,(int32_t)c->r[0],0); // 8023F448
  if (crb(c,2)) { goto L_8023F458; } // 8023F44C
  c->r[3]=c->r[25]|c->r[25]; // 8023F450
  goto L_8023F45C; // 8023F454
L_8023F458:;
  c->r[3]=0u+0x00000000u; // 8023F458
L_8023F45C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8023F45C
  if (crb(c,2)) { goto L_8023F468; } // 8023F460
  W32(c->r[3]+0x000000F4u,c->r[31]); // 8023F464
L_8023F468:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 8023F468
  goto L_8023F480; // 8023F46C
L_8023F470:;
  c->r[4]=c->r[31]|c->r[31]; // 8023F470
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 8023F474
  c->lr=0x8023F47Cu; f_8023EA2C(c); // 8023F478
  c->r[28]=R32(c->r[28]+0x00000000u); // 8023F47C
L_8023F480:;
  cmpu(c,0,c->r[28],c->r[25]); // 8023F480
  if (!crb(c,2)) { IRQCHK(c); goto L_8023F470; } // 8023F484
  c->r[29]=R32(c->r[29]+0x00000000u); // 8023F488
L_8023F48C:;
  cmpu(c,0,c->r[29],c->r[26]); // 8023F48C
  if (!crb(c,2)) { IRQCHK(c); goto L_8023F40C; } // 8023F490
  c->r[30]=R32(c->r[30]+0x00000000u); // 8023F494
L_8023F498:;
  cmpu(c,0,c->r[30],c->r[27]); // 8023F498
  if (!crb(c,2)) { IRQCHK(c); goto L_8023F3A4; } // 8023F49C
  c->r[11]=c->r[1]+0x00000030u; // 8023F4A0
  c->lr=0x8023F4A8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023F4A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8023F4A8
  c->lr=c->r[0]; // 8023F4AC
  c->r[1]=c->r[1]+0x00000030u; // 8023F4B0
  return; // 8023F4B4
}

// BuildPaneObj__Q36nw4hbm3lyt6LayoutFlPCvRCQ36nw4hbm3lyt11ResBlockSet
void f_8023F4B8(Ctx* __restrict c) {
  trace_call(0x8023F4B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023F4B8
  c->r[0]=c->lr; // 8023F4BC
  c->r[6]=0u+0x70690000u; // 8023F4C0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8023F4C4
  c->r[0]=c->r[6]+0x00006331u; // 8023F4C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F4CC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8023F4D0
  if (crb(c,2)) { goto L_8023F560; } // 8023F4D4
  if (!crb(c,0)) { goto L_8023F504; } // 8023F4D8
  c->r[6]=0u+0x70610000u; // 8023F4DC
  c->r[0]=c->r[6]+0x00006E31u; // 8023F4E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F4E4
  if (crb(c,2)) { goto L_8023F52C; } // 8023F4E8
  if (!crb(c,0)) { goto L_8023F6C0; } // 8023F4EC
  c->r[6]=0u+0x626E0000u; // 8023F4F0
  c->r[0]=c->r[6]+0x00006431u; // 8023F4F4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F4F8
  if (crb(c,2)) { goto L_8023F668; } // 8023F4FC
  goto L_8023F6C0; // 8023F500
L_8023F504:;
  c->r[6]=0u+0x776E0000u; // 8023F504
  c->r[0]=c->r[6]+0x00006431u; // 8023F508
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F50C
  if (crb(c,2)) { goto L_8023F610; } // 8023F510
  if (!crb(c,0)) { goto L_8023F6C0; } // 8023F514
  c->r[6]=0u+0x74780000u; // 8023F518
  c->r[0]=c->r[6]+0x00007431u; // 8023F51C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8023F520
  if (crb(c,2)) { goto L_8023F5B8; } // 8023F524
  goto L_8023F6C0; // 8023F528
L_8023F52C:;
  c->r[3]=0u+0x80360000u; // 8023F52C
  c->r[31]=c->r[4]|c->r[4]; // 8023F530
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023F534
  c->r[4]=0u+0x000000D4u; // 8023F538
  c->lr=0x8023F540u; f_800EE128(c); // 8023F53C
  cmps(c,0,(int32_t)c->r[3],0); // 8023F540
  if (crb(c,2)) { goto L_8023F558; } // 8023F544
  if (crb(c,2)) { goto L_8023F6C4; } // 8023F548
  c->r[4]=c->r[31]|c->r[31]; // 8023F54C
  c->lr=0x8023F554u; f_80242B0C(c); // 8023F550
  goto L_8023F6C4; // 8023F554
L_8023F558:;
  c->r[3]=0u+0x00000000u; // 8023F558
  goto L_8023F6C4; // 8023F55C
L_8023F560:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 8023F560
  c->r[3]=0u+0x80360000u; // 8023F564
  c->r[7]=R32(c->r[5]+0x00000004u); // 8023F568
  c->r[31]=c->r[4]|c->r[4]; // 8023F56C
  c->r[6]=R32(c->r[5]+0x00000008u); // 8023F570
  c->r[4]=0u+0x000000ECu; // 8023F574
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8023F578
  W32(c->r[1]+0x00000038u,c->r[8]); // 8023F57C
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023F580
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 8023F584
  W32(c->r[1]+0x00000040u,c->r[6]); // 8023F588
  W32(c->r[1]+0x00000044u,c->r[0]); // 8023F58C
  c->lr=0x8023F594u; f_800EE128(c); // 8023F590
  cmps(c,0,(int32_t)c->r[3],0); // 8023F594
  if (crb(c,2)) { goto L_8023F5B0; } // 8023F598
  if (crb(c,2)) { goto L_8023F6C4; } // 8023F59C
  c->r[4]=c->r[31]|c->r[31]; // 8023F5A0
  c->r[5]=c->r[1]+0x00000038u; // 8023F5A4
  c->lr=0x8023F5ACu; f_80243A80(c); // 8023F5A8
  goto L_8023F6C4; // 8023F5AC
L_8023F5B0:;
  c->r[3]=0u+0x00000000u; // 8023F5B0
  goto L_8023F6C4; // 8023F5B4
L_8023F5B8:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 8023F5B8
  c->r[3]=0u+0x80360000u; // 8023F5BC
  c->r[7]=R32(c->r[5]+0x00000004u); // 8023F5C0
  c->r[31]=c->r[4]|c->r[4]; // 8023F5C4
  c->r[6]=R32(c->r[5]+0x00000008u); // 8023F5C8
  c->r[4]=0u+0x00000100u; // 8023F5CC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8023F5D0
  W32(c->r[1]+0x00000028u,c->r[8]); // 8023F5D4
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023F5D8
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 8023F5DC
  W32(c->r[1]+0x00000030u,c->r[6]); // 8023F5E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8023F5E4
  c->lr=0x8023F5ECu; f_800EE128(c); // 8023F5E8
  cmps(c,0,(int32_t)c->r[3],0); // 8023F5EC
  if (crb(c,2)) { goto L_8023F608; } // 8023F5F0
  if (crb(c,2)) { goto L_8023F6C4; } // 8023F5F4
  c->r[4]=c->r[31]|c->r[31]; // 8023F5F8
  c->r[5]=c->r[1]+0x00000028u; // 8023F5FC
  c->lr=0x8023F604u; f_802440C4(c); // 8023F600
  goto L_8023F6C4; // 8023F604
L_8023F608:;
  c->r[3]=0u+0x00000000u; // 8023F608
  goto L_8023F6C4; // 8023F60C
L_8023F610:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 8023F610
  c->r[3]=0u+0x80360000u; // 8023F614
  c->r[7]=R32(c->r[5]+0x00000004u); // 8023F618
  c->r[31]=c->r[4]|c->r[4]; // 8023F61C
  c->r[6]=R32(c->r[5]+0x00000008u); // 8023F620
  c->r[4]=0u+0x00000104u; // 8023F624
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8023F628
  W32(c->r[1]+0x00000018u,c->r[8]); // 8023F62C
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023F630
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 8023F634
  W32(c->r[1]+0x00000020u,c->r[6]); // 8023F638
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023F63C
  c->lr=0x8023F644u; f_800EE128(c); // 8023F640
  cmps(c,0,(int32_t)c->r[3],0); // 8023F644
  if (crb(c,2)) { goto L_8023F660; } // 8023F648
  if (crb(c,2)) { goto L_8023F6C4; } // 8023F64C
  c->r[4]=c->r[31]|c->r[31]; // 8023F650
  c->r[5]=c->r[1]+0x00000018u; // 8023F654
  c->lr=0x8023F65Cu; f_802456A4(c); // 8023F658
  goto L_8023F6C4; // 8023F65C
L_8023F660:;
  c->r[3]=0u+0x00000000u; // 8023F660
  goto L_8023F6C4; // 8023F664
L_8023F668:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 8023F668
  c->r[3]=0u+0x80360000u; // 8023F66C
  c->r[7]=R32(c->r[5]+0x00000004u); // 8023F670
  c->r[31]=c->r[4]|c->r[4]; // 8023F674
  c->r[6]=R32(c->r[5]+0x00000008u); // 8023F678
  c->r[4]=0u+0x000000D4u; // 8023F67C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8023F680
  W32(c->r[1]+0x00000008u,c->r[8]); // 8023F684
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8023F688
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8023F68C
  W32(c->r[1]+0x00000010u,c->r[6]); // 8023F690
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023F694
  c->lr=0x8023F69Cu; f_800EE128(c); // 8023F698
  cmps(c,0,(int32_t)c->r[3],0); // 8023F69C
  if (crb(c,2)) { goto L_8023F6B8; } // 8023F6A0
  if (crb(c,2)) { goto L_8023F6C4; } // 8023F6A4
  c->r[4]=c->r[31]|c->r[31]; // 8023F6A8
  c->r[5]=c->r[1]+0x00000008u; // 8023F6AC
  c->lr=0x8023F6B4u; f_8023D6CC(c); // 8023F6B0
  goto L_8023F6C4; // 8023F6B4
L_8023F6B8:;
  c->r[3]=0u+0x00000000u; // 8023F6B8
  goto L_8023F6C4; // 8023F6BC
L_8023F6C0:;
  c->r[3]=0u+0x00000000u; // 8023F6C0
L_8023F6C4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8023F6C4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8023F6C8
  c->lr=c->r[0]; // 8023F6CC
  c->r[1]=c->r[1]+0x00000050u; // 8023F6D0
  return; // 8023F6D4
}

// CalcTextureMtx__26@unnamed@lyt_material_cpp@FPQ36nw4hbm4math5MTX34RCQ36nw4hbm3lyt6TexSRT
void f_8023F6D8(Ctx* __restrict c) {
  trace_call(0x8023F6D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023F6D8
  c->r[0]=c->lr; // 8023F6DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8023F6E0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8023F6E4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8023F6E8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023F6EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8023F6F0
  c->r[31]=0u+0x80260000u; // 8023F6F4
  c->r[31]=c->r[31]+0x00001A48u; // 8023F6F8
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023F6FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8023F700
  c->r[30]=c->r[4]|c->r[4]; // 8023F704
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023F708
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8023F70C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8023F710
  c->r[29]=c->r[3]|c->r[3]; // 8023F714
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8023F718
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8023F71C
  c->lr=0x8023F724u; f_80247BC8(c); // 8023F720
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023F724
  c->f[31]=c->f[1]; // 8023F728
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023F72C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 8023F730
  c->lr=0x8023F738u; f_80247B54(c); // 8023F734
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8023F738
  c->f[5]=-c->f[1]; // 8023F73C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023F740
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[3]); // 8023F744
  {uint32_t ea=c->r[31]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 8023F748
  c->f[11]=c->ps1[11]=S(c->f[31]*c->f[3]); // 8023F74C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023F750
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8023F754
  c->f[4]=-c->f[2]; // 8023F758
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[0]); // 8023F75C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8023F760
  c->f[10]=c->ps1[10]=S(c->f[31]*c->f[0]); // 8023F764
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023F768
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[2]); // 8023F76C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023F770
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[6]); // 8023F774
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[11]);} // 8023F778
  c->f[7]=-c->f[6]; // 8023F77C
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 8023F780
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[12]);} // 8023F784
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[4]); // 8023F788
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[7]); // 8023F78C
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[8]);} // 8023F790
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8023F794
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[3]); // 8023F798
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[9]);} // 8023F79C
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 8023F7A0
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[10]);} // 8023F7A4
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[4]); // 8023F7A8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8023F7AC
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[8]);} // 8023F7B0
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[2]);} // 8023F7B4
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[1]);} // 8023F7B8
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[8]);} // 8023F7BC
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[8]);} // 8023F7C0
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 8023F7C4
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[8]);} // 8023F7C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8023F7CC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8023F7D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8023F7D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023F7D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023F7DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8023F7E0
  c->lr=c->r[0]; // 8023F7E4
  c->r[1]=c->r[1]+0x00000030u; // 8023F7E8
  return; // 8023F7EC
}

// SetIndTexMtx__26@unnamed@lyt_material_cpp@F14_GXIndTexMtxIDPA3_Cf
void f_8023F7F0(Ctx* __restrict c) {
  trace_call(0x8023F7F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023F7F0
  c->r[0]=c->lr; // 8023F7F4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023F7F8
  c->r[5]=0u+0x80260000u; // 8023F7FC
  c->r[5]=c->r[5]+0x00001A48u; // 8023F800
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8023F804
  c->f[8]=std::fabs(c->f[2]); // 8023F808
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023F80C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8023F810
  c->f[9]=std::fabs(c->f[3]); // 8023F814
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8023F818
  c->r[6]=0u+0x00000000u; // 8023F81C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 8023F820
  fcmp(c,0,c->f[8],c->f[0]); // 8023F824
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 8023F828
  c->f[10]=std::fabs(c->f[4]); // 8023F82C
  c->f[11]=std::fabs(c->f[5]); // 8023F830
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023F834
  c->f[12]=std::fabs(c->f[6]); // 8023F838
  c->f[13]=std::fabs(c->f[7]); // 8023F83C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F840
  if (crb(c,2)) { goto L_8023F884; } // 8023F844
  fcmp(c,0,c->f[9],c->f[0]); // 8023F848
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F84C
  if (crb(c,2)) { goto L_8023F884; } // 8023F850
  fcmp(c,0,c->f[10],c->f[0]); // 8023F854
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F858
  if (crb(c,2)) { goto L_8023F884; } // 8023F85C
  fcmp(c,0,c->f[11],c->f[0]); // 8023F860
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F864
  if (crb(c,2)) { goto L_8023F884; } // 8023F868
  fcmp(c,0,c->f[12],c->f[0]); // 8023F86C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F870
  if (crb(c,2)) { goto L_8023F884; } // 8023F874
  fcmp(c,0,c->f[13],c->f[0]); // 8023F878
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F87C
  if (!crb(c,2)) { goto L_8023F918; } // 8023F880
L_8023F884:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023F884
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023F888
L_8023F88C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8023F88C
  cmps(c,0,(int32_t)c->r[0],46); // 8023F890
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F894
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 8023F898
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 8023F89C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 8023F8A0
  fcmp(c,0,c->f[8],c->f[0]); // 8023F8A4
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 8023F8A8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 8023F8AC
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 8023F8B0
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 8023F8B4
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 8023F8B8
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 8023F8BC
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 8023F8C0
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 8023F8C4
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 8023F8C8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F8CC
  c->r[6]=c->r[6]+0x00000001u; // 8023F8D0
  if (crb(c,2)) { IRQCHK(c); goto L_8023F88C; } // 8023F8D4
  fcmp(c,0,c->f[9],c->f[0]); // 8023F8D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F8DC
  if (crb(c,2)) { IRQCHK(c); goto L_8023F88C; } // 8023F8E0
  fcmp(c,0,c->f[10],c->f[0]); // 8023F8E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F8E8
  if (crb(c,2)) { IRQCHK(c); goto L_8023F88C; } // 8023F8EC
  fcmp(c,0,c->f[11],c->f[0]); // 8023F8F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F8F4
  if (crb(c,2)) { IRQCHK(c); goto L_8023F88C; } // 8023F8F8
  fcmp(c,0,c->f[12],c->f[0]); // 8023F8FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F900
  if (crb(c,2)) { IRQCHK(c); goto L_8023F88C; } // 8023F904
  fcmp(c,0,c->f[13],c->f[0]); // 8023F908
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8023F90C
  if (crb(c,2)) { IRQCHK(c); goto L_8023F88C; } // 8023F910
  goto L_8023F9C0; // 8023F914
L_8023F918:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023F918
  fcmp(c,0,c->f[8],c->f[1]); // 8023F91C
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F920
  fcmp(c,0,c->f[9],c->f[1]); // 8023F924
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F928
  fcmp(c,0,c->f[10],c->f[1]); // 8023F92C
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F930
  fcmp(c,0,c->f[11],c->f[1]); // 8023F934
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F938
  fcmp(c,0,c->f[12],c->f[1]); // 8023F93C
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F940
  fcmp(c,0,c->f[13],c->f[1]); // 8023F944
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F948
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023F94C
L_8023F950:;
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 8023F950
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8023F954
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 8023F958
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8023F95C
  fcmp(c,0,c->f[8],c->f[1]); // 8023F960
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 8023F964
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 8023F968
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 8023F96C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 8023F970
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 8023F974
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 8023F978
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 8023F97C
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 8023F980
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 8023F984
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F988
  fcmp(c,0,c->f[9],c->f[1]); // 8023F98C
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F990
  fcmp(c,0,c->f[10],c->f[1]); // 8023F994
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F998
  fcmp(c,0,c->f[11],c->f[1]); // 8023F99C
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F9A0
  fcmp(c,0,c->f[12],c->f[1]); // 8023F9A4
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F9A8
  fcmp(c,0,c->f[13],c->f[1]); // 8023F9AC
  if (!crb(c,0)) { goto L_8023F9C0; } // 8023F9B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8023F9B4
  cmps(c,0,(int32_t)c->r[0],-17); // 8023F9B8
  if (crb(c,1)) { IRQCHK(c); goto L_8023F950; } // 8023F9BC
L_8023F9C0:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8023F9C0
  c->r[4]=c->r[1]+0x00000008u; // 8023F9C4
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8023F9C8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8023F9CC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 8023F9D0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 8023F9D4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 8023F9D8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[7]);} // 8023F9DC
  c->lr=0x8023F9E4u; f_800D2218(c); // 8023F9E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8023F9E4
  c->lr=c->r[0]; // 8023F9E8
  c->r[1]=c->r[1]+0x00000020u; // 8023F9EC
  return; // 8023F9F0
}

// __ct__Q36nw4hbm2ut5ColorFv
void f_8023F9F4(Ctx* __restrict c) {
  trace_call(0x8023F9F4u);
  c->r[0]=0u+0xFFFFFFFFu; // 8023F9F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8023F9F8
  return; // 8023F9FC
}

// __ct__Q36nw4hbm3lyt8MaterialFPCQ46nw4hbm3lyt3res8MaterialRCQ36nw4hbm3lyt11ResBlockSet
void f_8023FA00(Ctx* __restrict c) {
  trace_call(0x8023FA00u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023FA00
  c->r[0]=c->lr; // 8023FA04
  W32(c->r[1]+0x00000084u,c->r[0]); // 8023FA08
  c->r[11]=c->r[1]+0x00000080u; // 8023FA0C
  c->lr=0x8023FA14u; f_800D49E0(c); // 8023FA10
  c->r[14]=0u+0x00000000u; // 8023FA14
  c->r[8]=0u+0x802A0000u; // 8023FA18
  W32(c->r[3]+0x0000001Cu,c->r[14]); // 8023FA1C
  c->r[9]=c->r[3]+0x0000001Cu; // 8023FA20
  c->r[8]=c->r[8]+0x000007F0u; // 8023FA24
  c->r[7]=0u+0x80240000u; // 8023FA28
  W32(c->r[3]+0x00000020u,c->r[14]); // 8023FA2C
  c->r[6]=0u+0x80240000u; // 8023FA30
  c->r[16]=c->r[4]|c->r[4]; // 8023FA34
  c->r[17]=c->r[5]|c->r[5]; // 8023FA38
  c->r[4]=c->r[7]+0xFFFFF9F4u; // 8023FA3C
  c->r[5]=c->r[6]+0xFFFFD7D0u; // 8023FA40
  W32(c->r[3]+0x00000000u,c->r[8]); // 8023FA44
  c->r[15]=c->r[3]|c->r[3]; // 8023FA48
  c->r[6]=0u+0x00000004u; // 8023FA4C
  c->r[7]=0u+0x00000004u; // 8023FA50
  W32(c->r[3]+0x00000018u,c->r[14]); // 8023FA54
  W32(c->r[3]+0x0000001Cu,c->r[9]); // 8023FA58
  W32(c->r[3]+0x00000020u,c->r[9]); // 8023FA5C
  c->r[3]=c->r[3]+0x0000003Cu; // 8023FA60
  c->lr=0x8023FA68u; f_800D4698(c); // 8023FA64
  c->r[4]=0u+0x80260000u; // 8023FA68
  c->r[7]=0u+0x000000FFu; // 8023FA6C
  c->r[5]=c->r[4]+0x00001A48u; // 8023FA70
  c->r[0]=R32(c->r[15]+0x00000050u); // 8023FA74
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00001A48u); // 8023FA78
  c->r[4]=c->r[16]|c->r[16]; // 8023FA7C
  c->r[3]=R32(c->r[15]+0x0000004Cu); // 8023FA80
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8023FA84
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 8023FA88
  c->r[6]=rotl(c->r[3],0)&0x0000001Fu; // 8023FA8C
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 8023FA90
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 8023FA94
  c->r[3]=c->r[15]+0x00000004u; // 8023FA98
  W16(c->r[15]+0x00000024u,c->r[11]); // 8023FA9C
  c->r[5]=0u+0x00000014u; // 8023FAA0
  W16(c->r[15]+0x00000026u,c->r[10]); // 8023FAA4
  W16(c->r[15]+0x00000028u,c->r[9]); // 8023FAA8
  W16(c->r[15]+0x0000002Au,c->r[8]); // 8023FAAC
  W16(c->r[15]+0x0000002Cu,c->r[7]); // 8023FAB0
  W16(c->r[15]+0x0000002Eu,c->r[7]); // 8023FAB4
  W16(c->r[15]+0x00000030u,c->r[7]); // 8023FAB8
  W16(c->r[15]+0x00000032u,c->r[7]); // 8023FABC
  W16(c->r[15]+0x00000034u,c->r[7]); // 8023FAC0
  W16(c->r[15]+0x00000036u,c->r[7]); // 8023FAC4
  W16(c->r[15]+0x00000038u,c->r[7]); // 8023FAC8
  W16(c->r[15]+0x0000003Au,c->r[7]); // 8023FACC
  W32(c->r[15]+0x0000004Cu,c->r[6]); // 8023FAD0
  W32(c->r[15]+0x00000050u,c->r[0]); // 8023FAD4
  W8(c->r[15]+0x00000054u,c->r[14]); // 8023FAD8
  W32(c->r[15]+0x00000058u,c->r[14]); // 8023FADC
  c->lr=0x8023FAE4u; f_800DBA68(c); // 8023FAE0
  c->r[20]=R32(c->r[16]+0x0000003Cu); // 8023FAE4
  c->r[23]=c->r[16]+0x00000040u; // 8023FAE8
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000014u); // 8023FAEC
  c->r[18]=0u+0x00000008u; // 8023FAF0
  c->r[12]=rotl(c->r[20],28)&0x0000000Fu; // 8023FAF4
  c->r[3]=rotl(c->r[20],2)&0x0000003Cu; // 8023FAF8
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)20); // 8023FAFC
  c->r[11]=rotl(c->r[20],0)&0x0000000Fu; // 8023FB00
  c->r[24]=c->r[3]+0x00000040u; // 8023FB04
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000016u); // 8023FB08
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000018u); // 8023FB0C
  c->r[14]=rotl(c->r[20],26)&0x0000003Cu; // 8023FB10
  c->r[22]=c->r[16]+c->r[24]; // 8023FB14
  c->r[24]=c->r[24]+c->r[0]; // 8023FB18
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000001Au); // 8023FB1C
  c->r[21]=c->r[16]+c->r[24]; // 8023FB20
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000001Cu); // 8023FB24
  c->r[24]=c->r[24]+c->r[14]; // 8023FB28
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000001Eu); // 8023FB2C
  cmpu(c,0,c->r[11],0x00000008u); // 8023FB30
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000020u); // 8023FB34
  c->r[19]=rotl(c->r[20],24)&0x0000000Fu; // 8023FB38
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000022u); // 8023FB3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000024u); // 8023FB40
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000026u); // 8023FB44
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000028u); // 8023FB48
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000002Au); // 8023FB4C
  c->r[27]=R32(c->r[16]+0x0000002Cu); // 8023FB50
  c->r[26]=R32(c->r[16]+0x00000030u); // 8023FB54
  c->r[25]=R32(c->r[16]+0x00000034u); // 8023FB58
  c->r[14]=R32(c->r[16]+0x00000038u); // 8023FB5C
  W16(c->r[15]+0x00000024u,c->r[10]); // 8023FB60
  W16(c->r[15]+0x00000026u,c->r[9]); // 8023FB64
  W16(c->r[15]+0x00000028u,c->r[8]); // 8023FB68
  W16(c->r[15]+0x0000002Au,c->r[7]); // 8023FB6C
  W16(c->r[15]+0x0000002Cu,c->r[6]); // 8023FB70
  W16(c->r[15]+0x0000002Eu,c->r[5]); // 8023FB74
  W16(c->r[15]+0x00000030u,c->r[4]); // 8023FB78
  W16(c->r[15]+0x00000032u,c->r[3]); // 8023FB7C
  W16(c->r[15]+0x00000034u,c->r[0]); // 8023FB80
  W16(c->r[15]+0x00000036u,c->r[30]); // 8023FB84
  W16(c->r[15]+0x00000038u,c->r[29]); // 8023FB88
  W16(c->r[15]+0x0000003Au,c->r[28]); // 8023FB8C
  W32(c->r[15]+0x0000003Cu,c->r[27]); // 8023FB90
  W32(c->r[15]+0x00000040u,c->r[26]); // 8023FB94
  W32(c->r[15]+0x00000044u,c->r[25]); // 8023FB98
  W32(c->r[15]+0x00000048u,c->r[14]); // 8023FB9C
  if (crb(c,1)) { goto L_8023FBA8; } // 8023FBA0
  c->r[18]=c->r[11]|c->r[11]; // 8023FBA4
L_8023FBA8:;
  cmpu(c,0,c->r[12],0x0000000Au); // 8023FBA8
  c->r[14]=0u+0x0000000Au; // 8023FBAC
  if (crb(c,1)) { goto L_8023FBB8; } // 8023FBB0
  c->r[14]=c->r[12]|c->r[12]; // 8023FBB4
L_8023FBB8:;
  cmpu(c,0,c->r[19],0x00000008u); // 8023FBB8
  c->r[27]=0u+0x00000008u; // 8023FBBC
  if (crb(c,1)) { goto L_8023FBC8; } // 8023FBC0
  c->r[27]=c->r[19]|c->r[19]; // 8023FBC4
L_8023FBC8:;
  c->r[5]=rotl(c->r[20],7)&0x00000001u; // 8023FBC8
  c->r[0]=rotl(c->r[20],20)&0x00000001u; // 8023FBCC
  c->r[4]=0u-c->r[5]; // 8023FBD0
  c->r[3]=rotl(c->r[20],5)&0x00000001u; // 8023FBD4
  W8(c->r[1]+0x00000034u,c->r[0]); // 8023FBD8
  c->r[0]=0u-c->r[3]; // 8023FBDC
  c->r[3]=c->r[0]|c->r[3]; // 8023FBE0
  c->r[4]=c->r[4]|c->r[5]; // 8023FBE4
  c->r[0]=rotl(c->r[20],9)&0x00000001u; // 8023FBE8
  c->r[6]=rotl(c->r[20],19)&0x00000003u; // 8023FBEC
  W8(c->r[1]+0x00000033u,c->r[0]); // 8023FBF0
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8023FBF4
  cmpu(c,0,c->r[6],0x00000003u); // 8023FBF8
  c->r[28]=0u+0x00000003u; // 8023FBFC
  W8(c->r[1]+0x00000031u,c->r[0]); // 8023FC00
  c->r[0]=rotl(c->r[20],8)&0x00000001u; // 8023FC04
  W8(c->r[1]+0x00000032u,c->r[0]); // 8023FC08
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8023FC0C
  W8(c->r[1]+0x00000030u,c->r[0]); // 8023FC10
  if (crb(c,1)) { goto L_8023FC1C; } // 8023FC14
  c->r[28]=c->r[6]|c->r[6]; // 8023FC18
L_8023FC1C:;
  c->r[0]=rotl(c->r[20],17)&0x00000007u; // 8023FC1C
  c->r[29]=0u+0x00000004u; // 8023FC20
  cmpu(c,0,c->r[0],0x00000004u); // 8023FC24
  if (crb(c,1)) { goto L_8023FC30; } // 8023FC28
  c->r[29]=c->r[0]|c->r[0]; // 8023FC2C
L_8023FC30:;
  c->r[0]=rotl(c->r[20],14)&0x0000001Fu; // 8023FC30
  c->r[30]=0u+0x00000010u; // 8023FC34
  cmpu(c,0,c->r[0],0x00000010u); // 8023FC38
  if (crb(c,1)) { goto L_8023FC44; } // 8023FC3C
  c->r[30]=c->r[0]|c->r[0]; // 8023FC40
L_8023FC44:;
  c->r[0]=R8(c->r[1]+0x00000031u); // 8023FC44
  c->r[3]=c->r[15]|c->r[15]; // 8023FC48
  c->r[8]=R8(c->r[1]+0x00000034u); // 8023FC4C
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 8023FC50
  W32(c->r[1]+0x00000008u,c->r[0]); // 8023FC54
  c->r[5]=rotl(c->r[14],0)&0x000000FFu; // 8023FC58
  c->r[0]=R8(c->r[1]+0x00000030u); // 8023FC5C
  c->r[6]=rotl(c->r[27],0)&0x000000FFu; // 8023FC60
  c->r[7]=rotl(c->r[30],0)&0x000000FFu; // 8023FC64
  c->r[9]=rotl(c->r[29],0)&0x000000FFu; // 8023FC68
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8023FC6C
  c->r[10]=rotl(c->r[28],0)&0x000000FFu; // 8023FC70
  c->r[0]=R8(c->r[1]+0x00000033u); // 8023FC74
  W32(c->r[1]+0x00000010u,c->r[0]); // 8023FC78
  c->r[0]=R8(c->r[1]+0x00000032u); // 8023FC7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023FC80
  c->lr=0x8023FC88u; f_80240CFC(c); // 8023FC84
  c->r[4]=R32(c->r[15]+0x00000058u); // 8023FC88
  cmps(c,0,(int32_t)c->r[4],0); // 8023FC8C
  if (crb(c,2)) { goto L_80240C30; } // 8023FC90
  c->r[19]=rotl(c->r[18],0)&0x000000FFu; cr0(c,c->r[19]); // 8023FC94
  if (crb(c,2)) { goto L_8023FCDC; } // 8023FC98
  c->r[3]=R32(c->r[15]+0x00000050u); // 8023FC9C
  c->r[0]=rotl(c->r[3],9)&0x000001E0u; // 8023FCA0
  c->r[20]=rotl(c->r[3],4)&0x0000000Fu; // 8023FCA4
  c->r[25]=c->r[4]+c->r[0]; // 8023FCA8
  goto L_8023FCC8; // 8023FCAC
L_8023FCB0:;
  c->r[3]=c->r[25]|c->r[25]; // 8023FCB0
  c->r[4]=0u+0x00000000u; // 8023FCB4
  c->r[5]=0u+0x00000020u; // 8023FCB8
  c->lr=0x8023FCC0u; f_80004688(c); // 8023FCBC
  c->r[25]=c->r[25]+0x00000020u; // 8023FCC0
  c->r[20]=c->r[20]+0x00000001u; // 8023FCC4
L_8023FCC8:;
  cmpu(c,0,c->r[20],c->r[19]); // 8023FCC8
  if (crb(c,0)) { IRQCHK(c); goto L_8023FCB0; } // 8023FCCC
  c->r[0]=R32(c->r[15]+0x00000050u); // 8023FCD0
  c->r[0]=(rotl(c->r[18],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 8023FCD4
  W32(c->r[15]+0x00000050u,c->r[0]); // 8023FCD8
L_8023FCDC:;
  c->r[0]=rotl(c->r[18],0)&0x000000FFu; cr0(c,c->r[0]); // 8023FCDC
  if (crb(c,2)) { goto L_8023FD70; } // 8023FCE0
  c->r[3]=R32(c->r[17]+0x00000000u); // 8023FCE4
  c->r[18]=0u+0x00000000u; // 8023FCE8
  c->r[19]=R32(c->r[15]+0x00000058u); // 8023FCEC
  c->r[31]=0u+0x74690000u; // 8023FCF0
  c->r[20]=c->r[3]+0x0000000Cu; // 8023FCF4
  goto L_8023FD5C; // 8023FCF8
L_8023FCFC:;
  c->r[0]=rotl(c->r[18],2)&0x000003FCu; // 8023FCFC
  c->r[3]=R32(c->r[17]+0x0000000Cu); // 8023FD00
  c->r[26]=c->r[23]+c->r[0]; // 8023FD04
  c->r[0]=R16(c->r[23]+c->r[0]); // 8023FD08
  c->r[12]=R32(c->r[3]+0x00000000u); // 8023FD0C
  c->r[4]=c->r[31]+0x00006D67u; // 8023FD10
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8023FD14
  c->r[6]=0u+0x00000000u; // 8023FD18
  c->r[0]=R32(c->r[20]+c->r[0]); // 8023FD1C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8023FD20
  c->r[5]=c->r[20]+c->r[0]; // 8023FD24
  c->ctr=c->r[12]; // 8023FD28
  if (true) { c->lr=0x8023FD30u; dispatch(c,c->ctr); } // 8023FD2C
  c->r[0]=R32(c->r[15]+0x00000058u); // 8023FD30
  c->r[25]=rotl(c->r[18],5)&0x00001FE0u; // 8023FD34
  c->r[4]=c->r[3]|c->r[3]; // 8023FD38
  c->r[5]=0u+0x00000000u; // 8023FD3C
  c->r[3]=c->r[0]+c->r[25]; // 8023FD40
  c->lr=0x8023FD48u; f_8023E504(c); // 8023FD44
  c->r[4]=R8(c->r[26]+0x00000002u); // 8023FD48
  c->r[3]=c->r[19]+c->r[25]; // 8023FD4C
  c->r[5]=R8(c->r[26]+0x00000003u); // 8023FD50
  c->lr=0x8023FD58u; f_800D16CC(c); // 8023FD54
  c->r[18]=c->r[18]+0x00000001u; // 8023FD58
L_8023FD5C:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 8023FD5C
  c->r[3]=rotl(c->r[18],0)&0x000000FFu; // 8023FD60
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8023FD64
  cmpu(c,0,c->r[3],c->r[0]); // 8023FD68
  if (crb(c,0)) { IRQCHK(c); goto L_8023FCFC; } // 8023FD6C
L_8023FD70:;
  c->r[0]=R32(c->r[15]+0x0000004Cu); // 8023FD70
  c->r[3]=rotl(c->r[14],0)&0x000000FFu; cr0(c,c->r[3]); // 8023FD74
  c->r[4]=R32(c->r[15]+0x00000058u); // 8023FD78
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 8023FD7C
  c->r[4]=c->r[4]+c->r[0]; // 8023FD80
  if (!crb(c,1)) { goto L_8023FE80; } // 8023FD84
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8023FD88
  c->ctr=c->r[0]; // 8023FD8C
  if (crb(c,2)) { goto L_8023FE48; } // 8023FD90
L_8023FD94:;
  {uint32_t ea=c->r[22]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023FD94
  {uint32_t ea=c->r[22]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FD98
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 8023FD9C
  {uint32_t ea=c->r[22]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FDA0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 8023FDA4
  {uint32_t ea=c->r[22]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FDA8
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8023FDAC
  {uint32_t ea=c->r[22]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FDB0
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[1]);} // 8023FDB4
  {uint32_t ea=c->r[22]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023FDB8
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 8023FDBC
  {uint32_t ea=c->r[22]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FDC0
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[2]);} // 8023FDC4
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FDC8
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[1]);} // 8023FDCC
  {uint32_t ea=c->r[22]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FDD0
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 8023FDD4
  {uint32_t ea=c->r[22]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FDD8
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[1]);} // 8023FDDC
  {uint32_t ea=c->r[22]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023FDE0
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 8023FDE4
  {uint32_t ea=c->r[22]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FDE8
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[2]);} // 8023FDEC
  {uint32_t ea=c->r[22]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FDF0
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[1]);} // 8023FDF4
  {uint32_t ea=c->r[22]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FDF8
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 8023FDFC
  {uint32_t ea=c->r[22]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FE00
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[1]);} // 8023FE04
  {uint32_t ea=c->r[22]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8023FE08
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 8023FE0C
  {uint32_t ea=c->r[22]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FE10
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[2]);} // 8023FE14
  {uint32_t ea=c->r[22]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FE18
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[1]);} // 8023FE1C
  {uint32_t ea=c->r[22]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FE20
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 8023FE24
  {uint32_t ea=c->r[22]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FE28
  c->r[22]=c->r[22]+0x00000050u; // 8023FE2C
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[1]);} // 8023FE30
  {uint32_t ea=c->r[4]+0x0000004Cu; WF32(ea,c->f[0]);} // 8023FE34
  c->r[4]=c->r[4]+0x00000050u; // 8023FE38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023FD94; } // 8023FE3C
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 8023FE40
  if (crb(c,2)) { goto L_8023FE80; } // 8023FE44
L_8023FE48:;
  c->ctr=c->r[3]; // 8023FE48
L_8023FE4C:;
  {uint32_t ea=c->r[22]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023FE4C
  {uint32_t ea=c->r[22]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FE50
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 8023FE54
  {uint32_t ea=c->r[22]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FE58
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 8023FE5C
  {uint32_t ea=c->r[22]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8023FE60
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8023FE64
  {uint32_t ea=c->r[22]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8023FE68
  c->r[22]=c->r[22]+0x00000014u; // 8023FE6C
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[1]);} // 8023FE70
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 8023FE74
  c->r[4]=c->r[4]+0x00000014u; // 8023FE78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023FE4C; } // 8023FE7C
L_8023FE80:;
  c->r[3]=R32(c->r[15]+0x0000004Cu); // 8023FE80
  c->r[5]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[5]); // 8023FE84
  c->r[4]=R32(c->r[15]+0x00000058u); // 8023FE88
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 8023FE8C
  c->r[3]=rotl(c->r[3],9)&0x000001E0u; // 8023FE90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8023FE94
  c->r[0]=c->r[4]+c->r[0]; // 8023FE98
  c->r[3]=c->r[3]+c->r[0]; // 8023FE9C
  if (crb(c,2)) { goto L_8023FFD4; } // 8023FEA0
  c->r[0]=R32(c->r[15]+0x00000050u); // 8023FEA4
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 8023FEA8
  cmpu(c,1,c->r[4],c->r[5]); // 8023FEAC
  if (!crb(c,4)) { goto L_8023FFC8; } // 8023FEB0
  c->r[0]=c->r[5]-c->r[4]; // 8023FEB4
  c->r[9]=c->r[5]+0xFFFFFFF8u; // 8023FEB8
  cmpu(c,0,c->r[0],0x00000008u); // 8023FEBC
  if (!crb(c,1)) { goto L_8023FF84; } // 8023FEC0
  if (crb(c,5)) { goto L_8023FF84; } // 8023FEC4
  c->r[0]=c->r[9]+0x00000007u; // 8023FEC8
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8023FECC
  c->r[0]=c->r[0]-c->r[4]; // 8023FED0
  c->r[8]=0u+0x00000001u; // 8023FED4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8023FED8
  c->r[10]=c->r[3]+c->r[5]; // 8023FEDC
  c->r[7]=0u+0x00000004u; // 8023FEE0
  c->r[6]=0u+0x0000003Cu; // 8023FEE4
  c->r[5]=0u+0x00000000u; // 8023FEE8
  c->ctr=c->r[0]; // 8023FEEC
  cmpu(c,0,c->r[4],c->r[9]); // 8023FEF0
  if (!crb(c,0)) { goto L_8023FF84; } // 8023FEF4
L_8023FEF8:;
  W8(c->r[10]+0x00000000u,c->r[8]); // 8023FEF8
  c->r[4]=c->r[4]+0x00000008u; // 8023FEFC
  W8(c->r[10]+0x00000001u,c->r[7]); // 8023FF00
  W8(c->r[10]+0x00000002u,c->r[6]); // 8023FF04
  W8(c->r[10]+0x00000003u,c->r[5]); // 8023FF08
  W8(c->r[10]+0x00000004u,c->r[8]); // 8023FF0C
  W8(c->r[10]+0x00000005u,c->r[7]); // 8023FF10
  W8(c->r[10]+0x00000006u,c->r[6]); // 8023FF14
  W8(c->r[10]+0x00000007u,c->r[5]); // 8023FF18
  W8(c->r[10]+0x00000008u,c->r[8]); // 8023FF1C
  W8(c->r[10]+0x00000009u,c->r[7]); // 8023FF20
  W8(c->r[10]+0x0000000Au,c->r[6]); // 8023FF24
  W8(c->r[10]+0x0000000Bu,c->r[5]); // 8023FF28
  W8(c->r[10]+0x0000000Cu,c->r[8]); // 8023FF2C
  W8(c->r[10]+0x0000000Du,c->r[7]); // 8023FF30
  W8(c->r[10]+0x0000000Eu,c->r[6]); // 8023FF34
  W8(c->r[10]+0x0000000Fu,c->r[5]); // 8023FF38
  W8(c->r[10]+0x00000010u,c->r[8]); // 8023FF3C
  W8(c->r[10]+0x00000011u,c->r[7]); // 8023FF40
  W8(c->r[10]+0x00000012u,c->r[6]); // 8023FF44
  W8(c->r[10]+0x00000013u,c->r[5]); // 8023FF48
  W8(c->r[10]+0x00000014u,c->r[8]); // 8023FF4C
  W8(c->r[10]+0x00000015u,c->r[7]); // 8023FF50
  W8(c->r[10]+0x00000016u,c->r[6]); // 8023FF54
  W8(c->r[10]+0x00000017u,c->r[5]); // 8023FF58
  W8(c->r[10]+0x00000018u,c->r[8]); // 8023FF5C
  W8(c->r[10]+0x00000019u,c->r[7]); // 8023FF60
  W8(c->r[10]+0x0000001Au,c->r[6]); // 8023FF64
  W8(c->r[10]+0x0000001Bu,c->r[5]); // 8023FF68
  W8(c->r[10]+0x0000001Cu,c->r[8]); // 8023FF6C
  W8(c->r[10]+0x0000001Du,c->r[7]); // 8023FF70
  W8(c->r[10]+0x0000001Eu,c->r[6]); // 8023FF74
  W8(c->r[10]+0x0000001Fu,c->r[5]); // 8023FF78
  c->r[10]=c->r[10]+0x00000020u; // 8023FF7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023FEF8; } // 8023FF80
L_8023FF84:;
  c->r[5]=rotl(c->r[27],0)&0x000000FFu; // 8023FF84
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8023FF88
  c->r[0]=c->r[5]-c->r[4]; // 8023FF8C
  c->r[9]=0u+0x00000001u; // 8023FF90
  c->r[10]=c->r[3]+c->r[6]; // 8023FF94
  c->r[8]=0u+0x00000004u; // 8023FF98
  c->r[7]=0u+0x0000003Cu; // 8023FF9C
  c->r[6]=0u+0x00000000u; // 8023FFA0
  c->ctr=c->r[0]; // 8023FFA4
  cmpu(c,0,c->r[4],c->r[5]); // 8023FFA8
  if (!crb(c,0)) { goto L_8023FFC8; } // 8023FFAC
L_8023FFB0:;
  W8(c->r[10]+0x00000000u,c->r[9]); // 8023FFB0
  W8(c->r[10]+0x00000001u,c->r[8]); // 8023FFB4
  W8(c->r[10]+0x00000002u,c->r[7]); // 8023FFB8
  W8(c->r[10]+0x00000003u,c->r[6]); // 8023FFBC
  c->r[10]=c->r[10]+0x00000004u; // 8023FFC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8023FFB0; } // 8023FFC4
L_8023FFC8:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 8023FFC8
  c->r[0]=(rotl(c->r[27],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 8023FFCC
  W32(c->r[15]+0x00000050u,c->r[0]); // 8023FFD0
L_8023FFD4:;
  c->r[5]=0u+0x00000000u; // 8023FFD4
  goto L_80240008; // 8023FFD8
L_8023FFDC:;
  c->r[4]=R8(c->r[21]+0x00000000u); // 8023FFDC
  c->r[5]=c->r[5]+0x00000001u; // 8023FFE0
  c->r[0]=R8(c->r[21]+0x00000001u); // 8023FFE4
  W8(c->r[3]+0x00000000u,c->r[4]); // 8023FFE8
  c->r[4]=R8(c->r[21]+0x00000002u); // 8023FFEC
  W8(c->r[3]+0x00000001u,c->r[0]); // 8023FFF0
  c->r[0]=R8(c->r[21]+0x00000003u); // 8023FFF4
  c->r[21]=c->r[21]+0x00000004u; // 8023FFF8
  W8(c->r[3]+0x00000002u,c->r[4]); // 8023FFFC
  W8(c->r[3]+0x00000003u,c->r[0]); // 80240000
  c->r[3]=c->r[3]+0x00000004u; // 80240004
L_80240008:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 80240008
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 8024000C
  cmpu(c,0,c->r[5],c->r[0]); // 80240010
  if (crb(c,0)) { IRQCHK(c); goto L_8023FFDC; } // 80240014
  c->r[0]=R8(c->r[1]+0x00000031u); // 80240018
  cmps(c,0,(int32_t)c->r[0],0); // 8024001C
  if (crb(c,2)) { goto L_80240070; } // 80240020
  c->r[4]=R32(c->r[15]+0x0000004Cu); // 80240024
  c->r[7]=c->r[16]+c->r[24]; // 80240028
  c->r[6]=R32(c->r[15]+0x00000058u); // 8024002C
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 80240030
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 80240034
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80240038
  c->r[4]=rotl(c->r[4],9)&0x000001E0u; // 8024003C
  c->r[0]=R8(c->r[16]+c->r[24]); // 80240040
  c->r[24]=c->r[24]+0x00000004u; // 80240044
  c->r[5]=c->r[5]+c->r[4]; // 80240048
  c->r[4]=R8(c->r[7]+0x00000001u); // 8024004C
  c->r[3]=c->r[6]+c->r[3]; // 80240050
  c->r[5]=c->r[5]+c->r[3]; // 80240054
  c->r[3]=R8(c->r[7]+0x00000002u); // 80240058
  W8(c->r[5]+0x00000000u,c->r[0]); // 8024005C
  c->r[0]=R8(c->r[7]+0x00000003u); // 80240060
  W8(c->r[5]+0x00000001u,c->r[4]); // 80240064
  W8(c->r[5]+0x00000002u,c->r[3]); // 80240068
  W8(c->r[5]+0x00000003u,c->r[0]); // 8024006C
L_80240070:;
  c->r[0]=R8(c->r[1]+0x00000030u); // 80240070
  cmps(c,0,(int32_t)c->r[0],0); // 80240074
  if (crb(c,2)) { goto L_802400D0; } // 80240078
  c->r[6]=R32(c->r[15]+0x0000004Cu); // 8024007C
  c->r[8]=c->r[16]+c->r[24]; // 80240080
  c->r[7]=R32(c->r[15]+0x00000058u); // 80240084
  c->r[0]=rotl(c->r[6],8)&0x0000000Fu; // 80240088
  c->r[4]=rotl(c->r[6],14)&0x0000003Cu; // 8024008C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80240090
  c->r[3]=rotl(c->r[6],9)&0x000001E0u; // 80240094
  c->r[6]=rotl(c->r[6],26)&0x00000004u; // 80240098
  c->r[0]=R8(c->r[16]+c->r[24]); // 8024009C
  c->r[3]=c->r[4]+c->r[3]; // 802400A0
  c->r[4]=R8(c->r[8]+0x00000001u); // 802400A4
  c->r[5]=c->r[6]+c->r[5]; // 802400A8
  c->r[3]=c->r[7]+c->r[3]; // 802400AC
  c->r[5]=c->r[5]+c->r[3]; // 802400B0
  c->r[3]=R8(c->r[8]+0x00000002u); // 802400B4
  W8(c->r[5]+0x00000000u,c->r[0]); // 802400B8
  c->r[24]=c->r[24]+0x00000004u; // 802400BC
  c->r[0]=R8(c->r[8]+0x00000003u); // 802400C0
  W8(c->r[5]+0x00000001u,c->r[4]); // 802400C4
  W8(c->r[5]+0x00000002u,c->r[3]); // 802400C8
  W8(c->r[5]+0x00000003u,c->r[0]); // 802400CC
L_802400D0:;
  c->r[0]=R8(c->r[1]+0x00000034u); // 802400D0
  cmps(c,0,(int32_t)c->r[0],0); // 802400D4
  if (crb(c,2)) { goto L_80240134; } // 802400D8
  c->r[4]=R32(c->r[15]+0x0000004Cu); // 802400DC
  c->r[10]=c->r[16]+c->r[24]; // 802400E0
  c->r[5]=R8(c->r[16]+c->r[24]); // 802400E4
  c->r[24]=c->r[24]+0x00000004u; // 802400E8
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 802400EC
  c->r[3]=rotl(c->r[4],14)&0x0000003Cu; // 802400F0
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802400F4
  c->r[9]=R32(c->r[15]+0x00000058u); // 802400F8
  c->r[0]=rotl(c->r[4],9)&0x000001E0u; // 802400FC
  c->r[8]=rotl(c->r[4],27)&0x00000004u; // 80240100
  c->r[7]=rotl(c->r[4],26)&0x00000004u; // 80240104
  c->r[3]=c->r[3]+c->r[0]; // 80240108
  c->r[0]=c->r[8]+c->r[7]; // 8024010C
  c->r[4]=R8(c->r[10]+0x00000001u); // 80240110
  c->r[7]=c->r[6]+c->r[3]; // 80240114
  c->r[3]=R8(c->r[10]+0x00000002u); // 80240118
  c->r[6]=c->r[9]+c->r[0]; // 8024011C
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 80240120
  c->r[0]=R8(c->r[10]+0x00000003u); // 80240124
  W8(c->r[6]+0x00000001u,c->r[4]); // 80240128
  W8(c->r[6]+0x00000002u,c->r[3]); // 8024012C
  W8(c->r[6]+0x00000003u,c->r[0]); // 80240130
L_80240134:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80240134
  cmps(c,1,(int32_t)c->r[3],0); // 80240138
  if (crb(c,6)) { goto L_80240390; } // 8024013C
  c->r[12]=R32(c->r[15]+0x0000004Cu); // 80240140
  c->r[5]=c->r[16]+c->r[24]; // 80240144
  c->r[17]=R32(c->r[15]+0x00000058u); // 80240148
  c->r[6]=0u+0x00000000u; // 8024014C
  c->r[0]=rotl(c->r[12],8)&0x0000000Fu; // 80240150
  c->r[11]=rotl(c->r[12],28)&0x00000004u; // 80240154
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80240158
  c->r[9]=rotl(c->r[12],26)&0x00000004u; // 8024015C
  c->r[10]=rotl(c->r[12],20)&0x00000004u; // 80240160
  c->r[8]=rotl(c->r[12],27)&0x00000004u; // 80240164
  c->r[7]=rotl(c->r[12],14)&0x0000003Cu; // 80240168
  c->r[0]=rotl(c->r[12],9)&0x000001E0u; // 8024016C
  c->r[0]=c->r[7]+c->r[0]; // 80240170
  c->r[14]=rotl(c->r[12],19)&0x0000001Cu; // 80240174
  c->r[12]=rotl(c->r[12],29)&0x00000004u; // 80240178
  c->r[8]=c->r[10]+c->r[8]; // 8024017C
  c->r[7]=c->r[11]+c->r[9]; // 80240180
  c->r[4]=c->r[4]+c->r[0]; // 80240184
  c->r[7]=c->r[8]+c->r[7]; // 80240188
  c->r[0]=c->r[14]+c->r[12]; // 8024018C
  c->r[4]=c->r[7]+c->r[4]; // 80240190
  c->r[0]=c->r[17]+c->r[0]; // 80240194
  c->r[0]=c->r[4]+c->r[0]; // 80240198
  if (!crb(c,5)) { goto L_80240390; } // 8024019C
  cmps(c,0,(int32_t)c->r[3],8); // 802401A0
  c->r[8]=c->r[3]+0xFFFFFFF8u; // 802401A4
  if (!crb(c,1)) { goto L_8024033C; } // 802401A8
  c->r[7]=0u+0x00000000u; // 802401AC
  if (crb(c,4)) { goto L_802401C8; } // 802401B0
  c->r[4]=0u+0x80000000u; // 802401B4
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 802401B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 802401BC
  if (crb(c,1)) { goto L_802401C8; } // 802401C0
  c->r[7]=0u+0x00000001u; // 802401C4
L_802401C8:;
  cmps(c,0,(int32_t)c->r[7],0); // 802401C8
  if (crb(c,2)) { goto L_8024033C; } // 802401CC
  c->r[7]=c->r[8]+0x00000007u; // 802401D0
  c->r[3]=c->r[5]|c->r[5]; // 802401D4
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 802401D8
  c->r[4]=c->r[0]|c->r[0]; // 802401DC
  c->ctr=c->r[7]; // 802401E0
  cmps(c,0,(int32_t)c->r[8],0); // 802401E4
  if (!crb(c,1)) { goto L_8024033C; } // 802401E8
L_802401EC:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 802401EC
  c->r[6]=c->r[6]+0x00000008u; // 802401F0
  c->r[7]=R32(c->r[3]+0x00000004u); // 802401F4
  W32(c->r[4]+0x00000000u,c->r[8]); // 802401F8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802401FC
  W32(c->r[4]+0x00000004u,c->r[7]); // 80240200
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 80240204
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80240208
  c->r[7]=R32(c->r[3]+0x00000010u); // 8024020C
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 80240210
  c->r[8]=R32(c->r[3]+0x00000014u); // 80240214
  W32(c->r[4]+0x00000010u,c->r[7]); // 80240218
  c->r[7]=R32(c->r[3]+0x00000018u); // 8024021C
  W32(c->r[4]+0x00000014u,c->r[8]); // 80240220
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80240224
  W32(c->r[4]+0x00000018u,c->r[7]); // 80240228
  c->r[8]=R32(c->r[3]+0x00000020u); // 8024022C
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 80240230
  c->r[7]=R32(c->r[3]+0x00000024u); // 80240234
  W32(c->r[4]+0x00000020u,c->r[8]); // 80240238
  c->r[8]=R32(c->r[3]+0x00000028u); // 8024023C
  W32(c->r[4]+0x00000024u,c->r[7]); // 80240240
  c->r[7]=R32(c->r[3]+0x0000002Cu); // 80240244
  W32(c->r[4]+0x00000028u,c->r[8]); // 80240248
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024024C
  W32(c->r[4]+0x0000002Cu,c->r[7]); // 80240250
  c->r[8]=R32(c->r[3]+0x00000034u); // 80240254
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 80240258
  c->r[7]=R32(c->r[3]+0x00000038u); // 8024025C
  W32(c->r[4]+0x00000034u,c->r[8]); // 80240260
  c->r[8]=R32(c->r[3]+0x0000003Cu); // 80240264
  W32(c->r[4]+0x00000038u,c->r[7]); // 80240268
  c->r[7]=R32(c->r[3]+0x00000040u); // 8024026C
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 80240270
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80240274
  W32(c->r[4]+0x00000040u,c->r[7]); // 80240278
  c->r[8]=R32(c->r[3]+0x00000048u); // 8024027C
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 80240280
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 80240284
  W32(c->r[4]+0x00000048u,c->r[8]); // 80240288
  c->r[8]=R32(c->r[3]+0x00000050u); // 8024028C
  W32(c->r[4]+0x0000004Cu,c->r[7]); // 80240290
  c->r[7]=R32(c->r[3]+0x00000054u); // 80240294
  W32(c->r[4]+0x00000050u,c->r[8]); // 80240298
  {uint32_t ea=c->r[3]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024029C
  W32(c->r[4]+0x00000054u,c->r[7]); // 802402A0
  c->r[8]=R32(c->r[3]+0x0000005Cu); // 802402A4
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[0]);} // 802402A8
  c->r[7]=R32(c->r[3]+0x00000060u); // 802402AC
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 802402B0
  c->r[8]=R32(c->r[3]+0x00000064u); // 802402B4
  W32(c->r[4]+0x00000060u,c->r[7]); // 802402B8
  c->r[7]=R32(c->r[3]+0x00000068u); // 802402BC
  W32(c->r[4]+0x00000064u,c->r[8]); // 802402C0
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802402C4
  W32(c->r[4]+0x00000068u,c->r[7]); // 802402C8
  c->r[8]=R32(c->r[3]+0x00000070u); // 802402CC
  {uint32_t ea=c->r[4]+0x0000006Cu; WF32(ea,c->f[0]);} // 802402D0
  c->r[7]=R32(c->r[3]+0x00000074u); // 802402D4
  W32(c->r[4]+0x00000070u,c->r[8]); // 802402D8
  c->r[8]=R32(c->r[3]+0x00000078u); // 802402DC
  W32(c->r[4]+0x00000074u,c->r[7]); // 802402E0
  c->r[7]=R32(c->r[3]+0x0000007Cu); // 802402E4
  W32(c->r[4]+0x00000078u,c->r[8]); // 802402E8
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 802402EC
  W32(c->r[4]+0x0000007Cu,c->r[7]); // 802402F0
  c->r[8]=R32(c->r[3]+0x00000084u); // 802402F4
  {uint32_t ea=c->r[4]+0x00000080u; WF32(ea,c->f[0]);} // 802402F8
  c->r[7]=R32(c->r[3]+0x00000088u); // 802402FC
  W32(c->r[4]+0x00000084u,c->r[8]); // 80240300
  c->r[8]=R32(c->r[3]+0x0000008Cu); // 80240304
  W32(c->r[4]+0x00000088u,c->r[7]); // 80240308
  c->r[7]=R32(c->r[3]+0x00000090u); // 8024030C
  W32(c->r[4]+0x0000008Cu,c->r[8]); // 80240310
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80240314
  W32(c->r[4]+0x00000090u,c->r[7]); // 80240318
  c->r[8]=R32(c->r[3]+0x00000098u); // 8024031C
  {uint32_t ea=c->r[4]+0x00000094u; WF32(ea,c->f[0]);} // 80240320
  c->r[7]=R32(c->r[3]+0x0000009Cu); // 80240324
  c->r[3]=c->r[3]+0x000000A0u; // 80240328
  W32(c->r[4]+0x00000098u,c->r[8]); // 8024032C
  W32(c->r[4]+0x0000009Cu,c->r[7]); // 80240330
  c->r[4]=c->r[4]+0x000000A0u; // 80240334
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802401EC; } // 80240338
L_8024033C:;
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 8024033C
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 80240340
  c->r[3]=c->r[4]-c->r[6]; // 80240344
  c->r[5]=c->r[5]+c->r[7]; // 80240348
  c->r[7]=c->r[0]+c->r[7]; // 8024034C
  c->ctr=c->r[3]; // 80240350
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 80240354
  if (!crb(c,0)) { goto L_80240390; } // 80240358
L_8024035C:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8024035C
  c->r[0]=R32(c->r[5]+0x00000004u); // 80240360
  W32(c->r[7]+0x00000000u,c->r[3]); // 80240364
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80240368
  W32(c->r[7]+0x00000004u,c->r[0]); // 8024036C
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 80240370
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 80240374
  c->r[0]=R32(c->r[5]+0x00000010u); // 80240378
  c->r[5]=c->r[5]+0x00000014u; // 8024037C
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 80240380
  W32(c->r[7]+0x00000010u,c->r[0]); // 80240384
  c->r[7]=c->r[7]+0x00000014u; // 80240388
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024035C; } // 8024038C
L_80240390:;
  c->r[0]=R32(c->r[16]+0x0000003Cu); // 80240390
  c->r[12]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[12]); // 80240394
  c->r[0]=rotl(c->r[0],19)&0x00000003u; // 80240398
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8024039C
  c->r[24]=c->r[24]+c->r[0]; // 802403A0
  if (crb(c,2)) { goto L_80240718; } // 802403A4
  if (crb(c,2)) { goto L_80240510; } // 802403A8
  c->r[10]=R32(c->r[15]+0x0000004Cu); // 802403AC
  c->r[0]=R32(c->r[15]+0x00000050u); // 802403B0
  c->r[3]=rotl(c->r[10],8)&0x0000000Fu; // 802403B4
  c->r[9]=rotl(c->r[10],28)&0x00000004u; // 802403B8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802403BC
  c->r[7]=rotl(c->r[10],26)&0x00000004u; // 802403C0
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 802403C4
  c->r[11]=R32(c->r[15]+0x00000058u); // 802403C8
  c->r[8]=rotl(c->r[10],20)&0x00000004u; // 802403CC
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 802403D0
  c->r[5]=rotl(c->r[10],14)&0x0000003Cu; // 802403D4
  c->r[0]=rotl(c->r[10],9)&0x000001E0u; // 802403D8
  c->r[0]=c->r[5]+c->r[0]; // 802403DC
  c->r[6]=c->r[8]+c->r[6]; // 802403E0
  c->r[5]=c->r[9]+c->r[7]; // 802403E4
  cmpu(c,1,c->r[3],c->r[12]); // 802403E8
  c->r[0]=c->r[4]+c->r[0]; // 802403EC
  c->r[7]=rotl(c->r[10],29)&0x00000004u; // 802403F0
  c->r[4]=c->r[6]+c->r[5]; // 802403F4
  c->r[4]=c->r[7]+c->r[4]; // 802403F8
  c->r[0]=c->r[11]+c->r[0]; // 802403FC
  c->r[7]=c->r[4]+c->r[0]; // 80240400
  if (!crb(c,4)) { goto L_80240504; } // 80240404
  c->r[0]=c->r[12]-c->r[3]; // 80240408
  c->r[6]=c->r[12]+0xFFFFFFF8u; // 8024040C
  cmpu(c,0,c->r[0],0x00000008u); // 80240410
  if (!crb(c,1)) { goto L_802404CC; } // 80240414
  if (crb(c,5)) { goto L_802404CC; } // 80240418
  c->r[0]=c->r[6]+0x00000007u; // 8024041C
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80240420
  c->r[0]=c->r[0]-c->r[3]; // 80240424
  c->r[4]=0u+0x00000000u; // 80240428
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8024042C
  c->r[5]=c->r[7]+c->r[5]; // 80240430
  c->ctr=c->r[0]; // 80240434
  cmpu(c,0,c->r[3],c->r[6]); // 80240438
  if (!crb(c,0)) { goto L_802404CC; } // 8024043C
L_80240440:;
  W8(c->r[5]+0x00000000u,c->r[4]); // 80240440
  c->r[3]=c->r[3]+0x00000008u; // 80240444
  W8(c->r[5]+0x00000001u,c->r[4]); // 80240448
  W8(c->r[5]+0x00000002u,c->r[4]); // 8024044C
  W8(c->r[5]+0x00000003u,c->r[4]); // 80240450
  W8(c->r[5]+0x00000004u,c->r[4]); // 80240454
  W8(c->r[5]+0x00000005u,c->r[4]); // 80240458
  W8(c->r[5]+0x00000006u,c->r[4]); // 8024045C
  W8(c->r[5]+0x00000007u,c->r[4]); // 80240460
  W8(c->r[5]+0x00000008u,c->r[4]); // 80240464
  W8(c->r[5]+0x00000009u,c->r[4]); // 80240468
  W8(c->r[5]+0x0000000Au,c->r[4]); // 8024046C
  W8(c->r[5]+0x0000000Bu,c->r[4]); // 80240470
  W8(c->r[5]+0x0000000Cu,c->r[4]); // 80240474
  W8(c->r[5]+0x0000000Du,c->r[4]); // 80240478
  W8(c->r[5]+0x0000000Eu,c->r[4]); // 8024047C
  W8(c->r[5]+0x0000000Fu,c->r[4]); // 80240480
  W8(c->r[5]+0x00000010u,c->r[4]); // 80240484
  W8(c->r[5]+0x00000011u,c->r[4]); // 80240488
  W8(c->r[5]+0x00000012u,c->r[4]); // 8024048C
  W8(c->r[5]+0x00000013u,c->r[4]); // 80240490
  W8(c->r[5]+0x00000014u,c->r[4]); // 80240494
  W8(c->r[5]+0x00000015u,c->r[4]); // 80240498
  W8(c->r[5]+0x00000016u,c->r[4]); // 8024049C
  W8(c->r[5]+0x00000017u,c->r[4]); // 802404A0
  W8(c->r[5]+0x00000018u,c->r[4]); // 802404A4
  W8(c->r[5]+0x00000019u,c->r[4]); // 802404A8
  W8(c->r[5]+0x0000001Au,c->r[4]); // 802404AC
  W8(c->r[5]+0x0000001Bu,c->r[4]); // 802404B0
  W8(c->r[5]+0x0000001Cu,c->r[4]); // 802404B4
  W8(c->r[5]+0x0000001Du,c->r[4]); // 802404B8
  W8(c->r[5]+0x0000001Eu,c->r[4]); // 802404BC
  W8(c->r[5]+0x0000001Fu,c->r[4]); // 802404C0
  c->r[5]=c->r[5]+0x00000020u; // 802404C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80240440; } // 802404C8
L_802404CC:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 802404CC
  c->r[6]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802404D0
  c->r[0]=c->r[4]-c->r[3]; // 802404D4
  c->r[5]=0u+0x00000000u; // 802404D8
  c->r[6]=c->r[7]+c->r[6]; // 802404DC
  c->ctr=c->r[0]; // 802404E0
  cmpu(c,0,c->r[3],c->r[4]); // 802404E4
  if (!crb(c,0)) { goto L_80240504; } // 802404E8
L_802404EC:;
  W8(c->r[6]+0x00000000u,c->r[5]); // 802404EC
  W8(c->r[6]+0x00000001u,c->r[5]); // 802404F0
  W8(c->r[6]+0x00000002u,c->r[5]); // 802404F4
  W8(c->r[6]+0x00000003u,c->r[5]); // 802404F8
  c->r[6]=c->r[6]+0x00000004u; // 802404FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802404EC; } // 80240500
L_80240504:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 80240504
  c->r[0]=(rotl(c->r[29],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80240508
  W32(c->r[15]+0x00000050u,c->r[0]); // 8024050C
L_80240510:;
  c->r[10]=R32(c->r[15]+0x0000004Cu); // 80240510
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 80240514
  c->r[11]=R32(c->r[15]+0x00000058u); // 80240518
  cmps(c,1,(int32_t)c->r[4],0); // 8024051C
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 80240520
  c->r[9]=rotl(c->r[10],28)&0x00000004u; // 80240524
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80240528
  c->r[7]=rotl(c->r[10],26)&0x00000004u; // 8024052C
  c->r[8]=rotl(c->r[10],20)&0x00000004u; // 80240530
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 80240534
  c->r[3]=rotl(c->r[10],14)&0x0000003Cu; // 80240538
  c->r[0]=rotl(c->r[10],9)&0x000001E0u; // 8024053C
  c->r[0]=c->r[3]+c->r[0]; // 80240540
  c->r[6]=c->r[8]+c->r[6]; // 80240544
  c->r[3]=c->r[9]+c->r[7]; // 80240548
  c->r[7]=rotl(c->r[10],29)&0x00000004u; // 8024054C
  c->r[3]=c->r[6]+c->r[3]; // 80240550
  c->r[0]=c->r[5]+c->r[0]; // 80240554
  c->r[3]=c->r[7]+c->r[3]; // 80240558
  c->r[5]=c->r[16]+c->r[24]; // 8024055C
  c->r[0]=c->r[11]+c->r[0]; // 80240560
  c->r[6]=0u+0x00000000u; // 80240564
  c->r[0]=c->r[3]+c->r[0]; // 80240568
  if (!crb(c,5)) { goto L_80240718; } // 8024056C
  cmps(c,0,(int32_t)c->r[4],8); // 80240570
  c->r[8]=c->r[4]+0xFFFFFFF8u; // 80240574
  if (!crb(c,1)) { goto L_802406CC; } // 80240578
  c->r[7]=0u+0x00000000u; // 8024057C
  if (crb(c,4)) { goto L_80240598; } // 80240580
  c->r[3]=0u+0x80000000u; // 80240584
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 80240588
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 8024058C
  if (crb(c,1)) { goto L_80240598; } // 80240590
  c->r[7]=0u+0x00000001u; // 80240594
L_80240598:;
  cmps(c,0,(int32_t)c->r[7],0); // 80240598
  if (crb(c,2)) { goto L_802406CC; } // 8024059C
  c->r[7]=c->r[8]+0x00000007u; // 802405A0
  c->r[3]=c->r[5]|c->r[5]; // 802405A4
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 802405A8
  c->r[4]=c->r[0]|c->r[0]; // 802405AC
  c->ctr=c->r[7]; // 802405B0
  cmps(c,0,(int32_t)c->r[8],0); // 802405B4
  if (!crb(c,1)) { goto L_802406CC; } // 802405B8
L_802405BC:;
  c->r[8]=R8(c->r[3]+0x00000000u); // 802405BC
  c->r[6]=c->r[6]+0x00000008u; // 802405C0
  c->r[7]=R8(c->r[3]+0x00000001u); // 802405C4
  W8(c->r[4]+0x00000000u,c->r[8]); // 802405C8
  c->r[8]=R8(c->r[3]+0x00000002u); // 802405CC
  W8(c->r[4]+0x00000001u,c->r[7]); // 802405D0
  c->r[7]=R8(c->r[3]+0x00000003u); // 802405D4
  W8(c->r[4]+0x00000002u,c->r[8]); // 802405D8
  c->r[8]=R8(c->r[3]+0x00000004u); // 802405DC
  W8(c->r[4]+0x00000003u,c->r[7]); // 802405E0
  c->r[7]=R8(c->r[3]+0x00000005u); // 802405E4
  W8(c->r[4]+0x00000004u,c->r[8]); // 802405E8
  c->r[8]=R8(c->r[3]+0x00000006u); // 802405EC
  W8(c->r[4]+0x00000005u,c->r[7]); // 802405F0
  c->r[7]=R8(c->r[3]+0x00000007u); // 802405F4
  W8(c->r[4]+0x00000006u,c->r[8]); // 802405F8
  c->r[8]=R8(c->r[3]+0x00000008u); // 802405FC
  W8(c->r[4]+0x00000007u,c->r[7]); // 80240600
  c->r[7]=R8(c->r[3]+0x00000009u); // 80240604
  W8(c->r[4]+0x00000008u,c->r[8]); // 80240608
  c->r[8]=R8(c->r[3]+0x0000000Au); // 8024060C
  W8(c->r[4]+0x00000009u,c->r[7]); // 80240610
  c->r[7]=R8(c->r[3]+0x0000000Bu); // 80240614
  W8(c->r[4]+0x0000000Au,c->r[8]); // 80240618
  c->r[8]=R8(c->r[3]+0x0000000Cu); // 8024061C
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 80240620
  c->r[7]=R8(c->r[3]+0x0000000Du); // 80240624
  W8(c->r[4]+0x0000000Cu,c->r[8]); // 80240628
  c->r[8]=R8(c->r[3]+0x0000000Eu); // 8024062C
  W8(c->r[4]+0x0000000Du,c->r[7]); // 80240630
  c->r[7]=R8(c->r[3]+0x0000000Fu); // 80240634
  W8(c->r[4]+0x0000000Eu,c->r[8]); // 80240638
  c->r[8]=R8(c->r[3]+0x00000010u); // 8024063C
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 80240640
  c->r[7]=R8(c->r[3]+0x00000011u); // 80240644
  W8(c->r[4]+0x00000010u,c->r[8]); // 80240648
  c->r[8]=R8(c->r[3]+0x00000012u); // 8024064C
  W8(c->r[4]+0x00000011u,c->r[7]); // 80240650
  c->r[7]=R8(c->r[3]+0x00000013u); // 80240654
  W8(c->r[4]+0x00000012u,c->r[8]); // 80240658
  c->r[8]=R8(c->r[3]+0x00000014u); // 8024065C
  W8(c->r[4]+0x00000013u,c->r[7]); // 80240660
  c->r[7]=R8(c->r[3]+0x00000015u); // 80240664
  W8(c->r[4]+0x00000014u,c->r[8]); // 80240668
  c->r[8]=R8(c->r[3]+0x00000016u); // 8024066C
  W8(c->r[4]+0x00000015u,c->r[7]); // 80240670
  c->r[7]=R8(c->r[3]+0x00000017u); // 80240674
  W8(c->r[4]+0x00000016u,c->r[8]); // 80240678
  c->r[8]=R8(c->r[3]+0x00000018u); // 8024067C
  W8(c->r[4]+0x00000017u,c->r[7]); // 80240680
  c->r[7]=R8(c->r[3]+0x00000019u); // 80240684
  W8(c->r[4]+0x00000018u,c->r[8]); // 80240688
  c->r[8]=R8(c->r[3]+0x0000001Au); // 8024068C
  W8(c->r[4]+0x00000019u,c->r[7]); // 80240690
  c->r[7]=R8(c->r[3]+0x0000001Bu); // 80240694
  W8(c->r[4]+0x0000001Au,c->r[8]); // 80240698
  c->r[8]=R8(c->r[3]+0x0000001Cu); // 8024069C
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 802406A0
  c->r[7]=R8(c->r[3]+0x0000001Du); // 802406A4
  W8(c->r[4]+0x0000001Cu,c->r[8]); // 802406A8
  c->r[8]=R8(c->r[3]+0x0000001Eu); // 802406AC
  W8(c->r[4]+0x0000001Du,c->r[7]); // 802406B0
  c->r[7]=R8(c->r[3]+0x0000001Fu); // 802406B4
  c->r[3]=c->r[3]+0x00000020u; // 802406B8
  W8(c->r[4]+0x0000001Eu,c->r[8]); // 802406BC
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 802406C0
  c->r[4]=c->r[4]+0x00000020u; // 802406C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802405BC; } // 802406C8
L_802406CC:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 802406CC
  c->r[7]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802406D0
  c->r[3]=c->r[4]-c->r[6]; // 802406D4
  c->r[5]=c->r[5]+c->r[7]; // 802406D8
  c->r[7]=c->r[0]+c->r[7]; // 802406DC
  c->ctr=c->r[3]; // 802406E0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 802406E4
  if (!crb(c,0)) { goto L_80240718; } // 802406E8
L_802406EC:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 802406EC
  c->r[0]=R8(c->r[5]+0x00000001u); // 802406F0
  W8(c->r[7]+0x00000000u,c->r[3]); // 802406F4
  c->r[3]=R8(c->r[5]+0x00000002u); // 802406F8
  W8(c->r[7]+0x00000001u,c->r[0]); // 802406FC
  c->r[0]=R8(c->r[5]+0x00000003u); // 80240700
  c->r[5]=c->r[5]+0x00000004u; // 80240704
  W8(c->r[7]+0x00000002u,c->r[3]); // 80240708
  W8(c->r[7]+0x00000003u,c->r[0]); // 8024070C
  c->r[7]=c->r[7]+0x00000004u; // 80240710
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802406EC; } // 80240714
L_80240718:;
  c->r[3]=R32(c->r[16]+0x0000003Cu); // 80240718
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[0]); // 8024071C
  c->r[3]=rotl(c->r[3],19)&0x0000001Cu; // 80240720
  c->r[24]=c->r[24]+c->r[3]; // 80240724
  if (crb(c,2)) { goto L_80240B48; } // 80240728
  if (crb(c,2)) { goto L_80240930; } // 8024072C
  c->r[11]=R32(c->r[15]+0x0000004Cu); // 80240730
  c->r[3]=R32(c->r[15]+0x00000050u); // 80240734
  c->r[5]=rotl(c->r[11],14)&0x00000003u; // 80240738
  c->r[4]=rotl(c->r[11],8)&0x0000000Fu; // 8024073C
  c->r[4]=c->r[5]+c->r[4]; // 80240740
  c->r[3]=rotl(c->r[3],23)&0x0000001Fu; // 80240744
  c->r[10]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80240748
  c->r[6]=rotl(c->r[11],27)&0x00000004u; // 8024074C
  c->r[4]=rotl(c->r[11],20)&0x00000004u; // 80240750
  c->r[12]=R32(c->r[15]+0x00000058u); // 80240754
  c->r[7]=rotl(c->r[11],26)&0x00000004u; // 80240758
  c->r[4]=c->r[6]+c->r[4]; // 8024075C
  c->r[5]=rotl(c->r[11],28)&0x00000004u; // 80240760
  c->r[6]=c->r[10]+c->r[7]; // 80240764
  c->r[9]=rotl(c->r[11],9)&0x000001E0u; // 80240768
  c->r[8]=rotl(c->r[11],14)&0x0000003Cu; // 8024076C
  c->r[8]=c->r[9]+c->r[8]; // 80240770
  c->r[5]=c->r[5]+c->r[4]; // 80240774
  c->r[4]=c->r[8]+c->r[6]; // 80240778
  c->r[7]=rotl(c->r[11],29)&0x00000004u; // 8024077C
  cmpu(c,0,c->r[3],c->r[0]); // 80240780
  c->r[6]=rotl(c->r[11],19)&0x0000001Cu; // 80240784
  c->r[5]=c->r[7]+c->r[5]; // 80240788
  c->r[4]=c->r[12]+c->r[4]; // 8024078C
  c->r[5]=c->r[6]+c->r[5]; // 80240790
  c->r[10]=c->r[5]+c->r[4]; // 80240794
  if (!crb(c,0)) { goto L_80240924; } // 80240798
  c->r[12]=0u+0x00000000u; // 8024079C
  c->r[17]=0u+0x000000FFu; // 802407A0
  c->r[9]=0u+0x000000AFu; // 802407A4
  c->r[6]=0u+0x00000061u; // 802407A8
  c->r[8]=0u+0x00000077u; // 802407AC
  c->r[7]=0u+0x00000057u; // 802407B0
  c->r[4]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802407B4
  c->r[5]=0u+0x00000081u; // 802407B8
  W8(c->r[1]+0x00000024u,c->r[17]); // 802407BC
  c->r[3]=c->r[0]-c->r[3]; // 802407C0
  c->r[14]=0u+0x00000004u; // 802407C4
  c->r[18]=c->r[10]+c->r[4]; // 802407C8
  W8(c->r[1]+0x00000025u,c->r[9]); // 802407CC
  W8(c->r[1]+0x00000026u,c->r[12]); // 802407D0
  W8(c->r[1]+0x00000027u,c->r[6]); // 802407D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802407D8
  W8(c->r[1]+0x00000028u,c->r[8]); // 802407DC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802407E0
  W8(c->r[1]+0x00000029u,c->r[7]); // 802407E4
  c->r[11]=R8(c->r[1]+0x0000001Cu); // 802407E8
  W8(c->r[1]+0x0000002Au,c->r[12]); // 802407EC
  c->r[10]=R8(c->r[1]+0x0000001Du); // 802407F0
  W8(c->r[1]+0x0000002Bu,c->r[5]); // 802407F4
  c->r[9]=R8(c->r[1]+0x0000001Eu); // 802407F8
  c->r[0]=R32(c->r[1]+0x00000028u); // 802407FC
  W8(c->r[1]+0x00000020u,c->r[17]); // 80240800
  c->r[8]=R8(c->r[1]+0x0000001Fu); // 80240804
  W32(c->r[1]+0x00000018u,c->r[0]); // 80240808
  W8(c->r[1]+0x00000021u,c->r[14]); // 8024080C
  c->r[7]=R8(c->r[1]+0x00000018u); // 80240810
  W8(c->r[1]+0x00000022u,c->r[17]); // 80240814
  c->r[6]=R8(c->r[1]+0x00000019u); // 80240818
  W8(c->r[1]+0x00000023u,c->r[12]); // 8024081C
  c->r[5]=R8(c->r[1]+0x0000001Au); // 80240820
  W8(c->r[1]+0x0000002Cu,c->r[12]); // 80240824
  c->r[4]=R8(c->r[1]+0x0000001Bu); // 80240828
  W8(c->r[1]+0x0000002Du,c->r[12]); // 8024082C
  W8(c->r[1]+0x0000002Eu,c->r[12]); // 80240830
  W8(c->r[1]+0x0000002Fu,c->r[12]); // 80240834
  if (!crb(c,0)) { goto L_80240924; } // 80240838
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 8024083C
  c->ctr=c->r[0]; // 80240840
  if (crb(c,2)) { goto L_802408D8; } // 80240844
L_80240848:;
  W8(c->r[18]+0x00000000u,c->r[17]); // 80240848
  W8(c->r[18]+0x00000001u,c->r[14]); // 8024084C
  W8(c->r[18]+0x00000002u,c->r[17]); // 80240850
  W8(c->r[18]+0x00000003u,c->r[12]); // 80240854
  W8(c->r[18]+0x00000004u,c->r[11]); // 80240858
  W8(c->r[18]+0x00000005u,c->r[10]); // 8024085C
  W8(c->r[18]+0x00000006u,c->r[9]); // 80240860
  W8(c->r[18]+0x00000007u,c->r[8]); // 80240864
  W8(c->r[18]+0x00000008u,c->r[7]); // 80240868
  W8(c->r[18]+0x00000009u,c->r[6]); // 8024086C
  W8(c->r[18]+0x0000000Au,c->r[5]); // 80240870
  W8(c->r[18]+0x0000000Bu,c->r[4]); // 80240874
  W8(c->r[18]+0x0000000Cu,c->r[12]); // 80240878
  W8(c->r[18]+0x0000000Du,c->r[12]); // 8024087C
  W8(c->r[18]+0x0000000Eu,c->r[12]); // 80240880
  W8(c->r[18]+0x0000000Fu,c->r[12]); // 80240884
  W8(c->r[18]+0x00000010u,c->r[17]); // 80240888
  W8(c->r[18]+0x00000011u,c->r[14]); // 8024088C
  W8(c->r[18]+0x00000012u,c->r[17]); // 80240890
  W8(c->r[18]+0x00000013u,c->r[12]); // 80240894
  W8(c->r[18]+0x00000014u,c->r[11]); // 80240898
  W8(c->r[18]+0x00000015u,c->r[10]); // 8024089C
  W8(c->r[18]+0x00000016u,c->r[9]); // 802408A0
  W8(c->r[18]+0x00000017u,c->r[8]); // 802408A4
  W8(c->r[18]+0x00000018u,c->r[7]); // 802408A8
  W8(c->r[18]+0x00000019u,c->r[6]); // 802408AC
  W8(c->r[18]+0x0000001Au,c->r[5]); // 802408B0
  W8(c->r[18]+0x0000001Bu,c->r[4]); // 802408B4
  W8(c->r[18]+0x0000001Cu,c->r[12]); // 802408B8
  W8(c->r[18]+0x0000001Du,c->r[12]); // 802408BC
  W8(c->r[18]+0x0000001Eu,c->r[12]); // 802408C0
  W8(c->r[18]+0x0000001Fu,c->r[12]); // 802408C4
  c->r[18]=c->r[18]+0x00000020u; // 802408C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80240848; } // 802408CC
  c->r[3]=c->r[3]&0x00000001u; cr0(c,c->r[3]); // 802408D0
  if (crb(c,2)) { goto L_80240924; } // 802408D4
L_802408D8:;
  c->ctr=c->r[3]; // 802408D8
L_802408DC:;
  W8(c->r[18]+0x00000000u,c->r[17]); // 802408DC
  W8(c->r[18]+0x00000001u,c->r[14]); // 802408E0
  W8(c->r[18]+0x00000002u,c->r[17]); // 802408E4
  W8(c->r[18]+0x00000003u,c->r[12]); // 802408E8
  W8(c->r[18]+0x00000004u,c->r[11]); // 802408EC
  W8(c->r[18]+0x00000005u,c->r[10]); // 802408F0
  W8(c->r[18]+0x00000006u,c->r[9]); // 802408F4
  W8(c->r[18]+0x00000007u,c->r[8]); // 802408F8
  W8(c->r[18]+0x00000008u,c->r[7]); // 802408FC
  W8(c->r[18]+0x00000009u,c->r[6]); // 80240900
  W8(c->r[18]+0x0000000Au,c->r[5]); // 80240904
  W8(c->r[18]+0x0000000Bu,c->r[4]); // 80240908
  W8(c->r[18]+0x0000000Cu,c->r[12]); // 8024090C
  W8(c->r[18]+0x0000000Du,c->r[12]); // 80240910
  W8(c->r[18]+0x0000000Eu,c->r[12]); // 80240914
  W8(c->r[18]+0x0000000Fu,c->r[12]); // 80240918
  c->r[18]=c->r[18]+0x00000010u; // 8024091C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802408DC; } // 80240920
L_80240924:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 80240924
  c->r[0]=(rotl(c->r[30],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80240928
  W32(c->r[15]+0x00000050u,c->r[0]); // 8024092C
L_80240930:;
  c->r[10]=R32(c->r[15]+0x0000004Cu); // 80240930
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[3]); // 80240934
  c->r[11]=R32(c->r[15]+0x00000058u); // 80240938
  c->r[4]=rotl(c->r[10],14)&0x00000003u; // 8024093C
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 80240940
  c->r[0]=c->r[4]+c->r[0]; // 80240944
  c->r[6]=rotl(c->r[10],26)&0x00000004u; // 80240948
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8024094C
  c->r[4]=rotl(c->r[10],27)&0x00000004u; // 80240950
  c->r[0]=rotl(c->r[10],20)&0x00000004u; // 80240954
  c->r[8]=rotl(c->r[10],9)&0x000001E0u; // 80240958
  c->r[7]=rotl(c->r[10],14)&0x0000003Cu; // 8024095C
  c->r[0]=c->r[4]+c->r[0]; // 80240960
  c->r[5]=rotl(c->r[10],28)&0x00000004u; // 80240964
  c->r[6]=c->r[9]+c->r[6]; // 80240968
  c->r[0]=c->r[5]+c->r[0]; // 8024096C
  c->r[4]=rotl(c->r[10],29)&0x00000004u; // 80240970
  c->r[7]=c->r[8]+c->r[7]; // 80240974
  c->r[5]=rotl(c->r[10],19)&0x0000001Cu; // 80240978
  c->r[4]=c->r[4]+c->r[0]; // 8024097C
  c->r[0]=c->r[7]+c->r[6]; // 80240980
  c->r[4]=c->r[5]+c->r[4]; // 80240984
  c->r[5]=c->r[16]+c->r[24]; // 80240988
  c->r[0]=c->r[11]+c->r[0]; // 8024098C
  c->r[6]=c->r[4]+c->r[0]; // 80240990
  if (!crb(c,1)) { goto L_80240B48; } // 80240994
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 80240998
  c->ctr=c->r[0]; // 8024099C
  if (crb(c,2)) { goto L_80240AB8; } // 802409A0
L_802409A4:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 802409A4
  c->r[0]=R8(c->r[5]+0x00000001u); // 802409A8
  W8(c->r[6]+0x00000000u,c->r[4]); // 802409AC
  c->r[4]=R8(c->r[5]+0x00000002u); // 802409B0
  W8(c->r[6]+0x00000001u,c->r[0]); // 802409B4
  c->r[0]=R8(c->r[5]+0x00000003u); // 802409B8
  W8(c->r[6]+0x00000002u,c->r[4]); // 802409BC
  c->r[4]=R8(c->r[5]+0x00000004u); // 802409C0
  W8(c->r[6]+0x00000003u,c->r[0]); // 802409C4
  c->r[0]=R8(c->r[5]+0x00000005u); // 802409C8
  W8(c->r[6]+0x00000004u,c->r[4]); // 802409CC
  c->r[4]=R8(c->r[5]+0x00000006u); // 802409D0
  W8(c->r[6]+0x00000005u,c->r[0]); // 802409D4
  c->r[0]=R8(c->r[5]+0x00000007u); // 802409D8
  W8(c->r[6]+0x00000006u,c->r[4]); // 802409DC
  c->r[4]=R8(c->r[5]+0x00000008u); // 802409E0
  W8(c->r[6]+0x00000007u,c->r[0]); // 802409E4
  c->r[0]=R8(c->r[5]+0x00000009u); // 802409E8
  W8(c->r[6]+0x00000008u,c->r[4]); // 802409EC
  c->r[4]=R8(c->r[5]+0x0000000Au); // 802409F0
  W8(c->r[6]+0x00000009u,c->r[0]); // 802409F4
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 802409F8
  W8(c->r[6]+0x0000000Au,c->r[4]); // 802409FC
  c->r[4]=R8(c->r[5]+0x0000000Cu); // 80240A00
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 80240A04
  c->r[0]=R8(c->r[5]+0x0000000Du); // 80240A08
  W8(c->r[6]+0x0000000Cu,c->r[4]); // 80240A0C
  c->r[4]=R8(c->r[5]+0x0000000Eu); // 80240A10
  W8(c->r[6]+0x0000000Du,c->r[0]); // 80240A14
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 80240A18
  W8(c->r[6]+0x0000000Eu,c->r[4]); // 80240A1C
  c->r[4]=R8(c->r[5]+0x00000010u); // 80240A20
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 80240A24
  c->r[0]=R8(c->r[5]+0x00000011u); // 80240A28
  W8(c->r[6]+0x00000010u,c->r[4]); // 80240A2C
  c->r[4]=R8(c->r[5]+0x00000012u); // 80240A30
  W8(c->r[6]+0x00000011u,c->r[0]); // 80240A34
  c->r[0]=R8(c->r[5]+0x00000013u); // 80240A38
  W8(c->r[6]+0x00000012u,c->r[4]); // 80240A3C
  c->r[4]=R8(c->r[5]+0x00000014u); // 80240A40
  W8(c->r[6]+0x00000013u,c->r[0]); // 80240A44
  c->r[0]=R8(c->r[5]+0x00000015u); // 80240A48
  W8(c->r[6]+0x00000014u,c->r[4]); // 80240A4C
  c->r[4]=R8(c->r[5]+0x00000016u); // 80240A50
  W8(c->r[6]+0x00000015u,c->r[0]); // 80240A54
  c->r[0]=R8(c->r[5]+0x00000017u); // 80240A58
  W8(c->r[6]+0x00000016u,c->r[4]); // 80240A5C
  c->r[4]=R8(c->r[5]+0x00000018u); // 80240A60
  W8(c->r[6]+0x00000017u,c->r[0]); // 80240A64
  c->r[0]=R8(c->r[5]+0x00000019u); // 80240A68
  W8(c->r[6]+0x00000018u,c->r[4]); // 80240A6C
  c->r[4]=R8(c->r[5]+0x0000001Au); // 80240A70
  W8(c->r[6]+0x00000019u,c->r[0]); // 80240A74
  c->r[0]=R8(c->r[5]+0x0000001Bu); // 80240A78
  W8(c->r[6]+0x0000001Au,c->r[4]); // 80240A7C
  c->r[4]=R8(c->r[5]+0x0000001Cu); // 80240A80
  W8(c->r[6]+0x0000001Bu,c->r[0]); // 80240A84
  c->r[0]=R8(c->r[5]+0x0000001Du); // 80240A88
  W8(c->r[6]+0x0000001Cu,c->r[4]); // 80240A8C
  c->r[4]=R8(c->r[5]+0x0000001Eu); // 80240A90
  W8(c->r[6]+0x0000001Du,c->r[0]); // 80240A94
  c->r[0]=R8(c->r[5]+0x0000001Fu); // 80240A98
  c->r[5]=c->r[5]+0x00000020u; // 80240A9C
  W8(c->r[6]+0x0000001Eu,c->r[4]); // 80240AA0
  W8(c->r[6]+0x0000001Fu,c->r[0]); // 80240AA4
  c->r[6]=c->r[6]+0x00000020u; // 80240AA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802409A4; } // 80240AAC
  c->r[3]=c->r[3]&0x00000001u; cr0(c,c->r[3]); // 80240AB0
  if (crb(c,2)) { goto L_80240B48; } // 80240AB4
L_80240AB8:;
  c->ctr=c->r[3]; // 80240AB8
L_80240ABC:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 80240ABC
  c->r[0]=R8(c->r[5]+0x00000001u); // 80240AC0
  W8(c->r[6]+0x00000000u,c->r[4]); // 80240AC4
  c->r[4]=R8(c->r[5]+0x00000002u); // 80240AC8
  W8(c->r[6]+0x00000001u,c->r[0]); // 80240ACC
  c->r[0]=R8(c->r[5]+0x00000003u); // 80240AD0
  W8(c->r[6]+0x00000002u,c->r[4]); // 80240AD4
  c->r[4]=R8(c->r[5]+0x00000004u); // 80240AD8
  W8(c->r[6]+0x00000003u,c->r[0]); // 80240ADC
  c->r[0]=R8(c->r[5]+0x00000005u); // 80240AE0
  W8(c->r[6]+0x00000004u,c->r[4]); // 80240AE4
  c->r[4]=R8(c->r[5]+0x00000006u); // 80240AE8
  W8(c->r[6]+0x00000005u,c->r[0]); // 80240AEC
  c->r[0]=R8(c->r[5]+0x00000007u); // 80240AF0
  W8(c->r[6]+0x00000006u,c->r[4]); // 80240AF4
  c->r[4]=R8(c->r[5]+0x00000008u); // 80240AF8
  W8(c->r[6]+0x00000007u,c->r[0]); // 80240AFC
  c->r[0]=R8(c->r[5]+0x00000009u); // 80240B00
  W8(c->r[6]+0x00000008u,c->r[4]); // 80240B04
  c->r[4]=R8(c->r[5]+0x0000000Au); // 80240B08
  W8(c->r[6]+0x00000009u,c->r[0]); // 80240B0C
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 80240B10
  W8(c->r[6]+0x0000000Au,c->r[4]); // 80240B14
  c->r[4]=R8(c->r[5]+0x0000000Cu); // 80240B18
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 80240B1C
  c->r[0]=R8(c->r[5]+0x0000000Du); // 80240B20
  W8(c->r[6]+0x0000000Cu,c->r[4]); // 80240B24
  c->r[4]=R8(c->r[5]+0x0000000Eu); // 80240B28
  W8(c->r[6]+0x0000000Du,c->r[0]); // 80240B2C
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 80240B30
  c->r[5]=c->r[5]+0x00000010u; // 80240B34
  W8(c->r[6]+0x0000000Eu,c->r[4]); // 80240B38
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 80240B3C
  c->r[6]=c->r[6]+0x00000010u; // 80240B40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80240ABC; } // 80240B44
L_80240B48:;
  c->r[0]=R8(c->r[1]+0x00000033u); // 80240B48
  c->r[3]=R32(c->r[16]+0x0000003Cu); // 80240B4C
  cmps(c,0,(int32_t)c->r[0],0); // 80240B50
  c->r[0]=rotl(c->r[3],18)&0x000001F0u; // 80240B54
  c->r[24]=c->r[24]+c->r[0]; // 80240B58
  if (crb(c,2)) { goto L_80240BC0; } // 80240B5C
  c->r[6]=R32(c->r[15]+0x0000004Cu); // 80240B60
  c->r[10]=c->r[16]+c->r[24]; // 80240B64
  c->r[9]=R32(c->r[15]+0x00000058u); // 80240B68
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 80240B6C
  c->r[5]=rotl(c->r[6],20)&0x00000004u; // 80240B70
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80240B74
  c->r[0]=rotl(c->r[6],27)&0x00000004u; // 80240B78
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 80240B7C
  c->r[3]=R8(c->r[10]+0x00000002u); // 80240B80
  c->r[0]=c->r[5]+c->r[0]; // 80240B84
  c->r[5]=R8(c->r[16]+c->r[24]); // 80240B88
  c->r[7]=rotl(c->r[6],14)&0x0000003Cu; // 80240B8C
  c->r[6]=rotl(c->r[6],9)&0x000001E0u; // 80240B90
  c->r[7]=c->r[7]+c->r[6]; // 80240B94
  c->r[0]=c->r[4]+c->r[0]; // 80240B98
  c->r[6]=c->r[9]+c->r[0]; // 80240B9C
  c->r[4]=R8(c->r[10]+0x00000001u); // 80240BA0
  c->r[7]=c->r[8]+c->r[7]; // 80240BA4
  c->r[0]=R8(c->r[10]+0x00000003u); // 80240BA8
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 80240BAC
  c->r[24]=c->r[24]+0x00000004u; // 80240BB0
  W8(c->r[6]+0x00000001u,c->r[4]); // 80240BB4
  W8(c->r[6]+0x00000002u,c->r[3]); // 80240BB8
  W8(c->r[6]+0x00000003u,c->r[0]); // 80240BBC
L_80240BC0:;
  c->r[0]=R8(c->r[1]+0x00000032u); // 80240BC0
  cmps(c,0,(int32_t)c->r[0],0); // 80240BC4
  if (crb(c,2)) { goto L_80240C30; } // 80240BC8
  c->r[4]=R32(c->r[15]+0x0000004Cu); // 80240BCC
  c->r[10]=c->r[16]+c->r[24]; // 80240BD0
  c->r[9]=R32(c->r[15]+0x00000058u); // 80240BD4
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 80240BD8
  c->r[8]=rotl(c->r[4],28)&0x00000004u; // 80240BDC
  c->r[0]=rotl(c->r[4],26)&0x00000004u; // 80240BE0
  c->r[7]=rotl(c->r[4],20)&0x00000004u; // 80240BE4
  c->r[5]=rotl(c->r[4],27)&0x00000004u; // 80240BE8
  c->r[6]=rotl(c->r[4],14)&0x0000003Cu; // 80240BEC
  c->r[0]=c->r[8]+c->r[0]; // 80240BF0
  c->r[4]=rotl(c->r[4],9)&0x000001E0u; // 80240BF4
  c->r[7]=c->r[7]+c->r[5]; // 80240BF8
  c->r[5]=R8(c->r[16]+c->r[24]); // 80240BFC
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80240C00
  c->r[3]=R8(c->r[10]+0x00000002u); // 80240C04
  c->r[0]=c->r[7]+c->r[0]; // 80240C08
  c->r[7]=c->r[6]+c->r[4]; // 80240C0C
  c->r[4]=R8(c->r[10]+0x00000001u); // 80240C10
  c->r[6]=c->r[9]+c->r[0]; // 80240C14
  c->r[7]=c->r[8]+c->r[7]; // 80240C18
  c->r[0]=R8(c->r[10]+0x00000003u); // 80240C1C
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 80240C20
  W8(c->r[6]+0x00000001u,c->r[4]); // 80240C24
  W8(c->r[6]+0x00000002u,c->r[3]); // 80240C28
  W8(c->r[6]+0x00000003u,c->r[0]); // 80240C2C
L_80240C30:;
  c->r[11]=c->r[1]+0x00000080u; // 80240C30
  c->r[3]=c->r[15]|c->r[15]; // 80240C34
  c->lr=0x80240C3Cu; f_800D4A2C(c); // 80240C38
  c->r[0]=R32(c->r[1]+0x00000084u); // 80240C3C
  c->lr=c->r[0]; // 80240C40
  c->r[1]=c->r[1]+0x00000080u; // 80240C44
  return; // 80240C48
}

// __dt__Q36nw4hbm3lyt8MaterialFv
void f_80240C4C(Ctx* __restrict c) {
  trace_call(0x80240C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80240C4C
  c->r[0]=c->lr; // 80240C50
  cmps(c,0,(int32_t)c->r[3],0); // 80240C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80240C58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80240C5C
  c->r[31]=c->r[4]|c->r[4]; // 80240C60
  W32(c->r[1]+0x00000008u,c->r[30]); // 80240C64
  c->r[30]=c->r[3]|c->r[3]; // 80240C68
  if (crb(c,2)) { goto L_80240CE0; } // 80240C6C
  c->r[12]=0u+0x802A0000u; // 80240C70
  c->r[12]=c->r[12]+0x000007F0u; // 80240C74
  W32(c->r[3]+0x00000000u,c->r[12]); // 80240C78
  c->r[12]=R32(c->r[12]+0x00000018u); // 80240C7C
  c->ctr=c->r[12]; // 80240C80
  if (true) { c->lr=0x80240C88u; dispatch(c,c->ctr); } // 80240C84
  c->r[4]=R32(c->r[30]+0x00000058u); // 80240C88
  cmps(c,0,(int32_t)c->r[4],0); // 80240C8C
  if (crb(c,2)) { goto L_80240CA8; } // 80240C90
  c->r[3]=0u+0x80360000u; // 80240C94
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 80240C98
  c->lr=0x80240CA0u; f_800EE138(c); // 80240C9C
  c->r[0]=0u+0x00000000u; // 80240CA0
  W32(c->r[30]+0x00000058u,c->r[0]); // 80240CA4
L_80240CA8:;
  c->r[4]=0u+0x80240000u; // 80240CA8
  c->r[3]=c->r[30]+0x0000003Cu; // 80240CAC
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 80240CB0
  c->r[5]=0u+0x00000004u; // 80240CB4
  c->r[6]=0u+0x00000004u; // 80240CB8
  c->lr=0x80240CC0u; f_800D4790(c); // 80240CBC
  c->r[3]=addc(c,c->r[30],0x00000018u,0); cr0(c,c->r[3]); // 80240CC0
  if (crb(c,2)) { goto L_80240CD0; } // 80240CC4
  c->r[4]=0u+0x00000000u; // 80240CC8
  c->lr=0x80240CD0u; f_80249AF4(c); // 80240CCC
L_80240CD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80240CD0
  if (!crb(c,1)) { goto L_80240CE0; } // 80240CD4
  c->r[3]=c->r[30]|c->r[30]; // 80240CD8
  c->lr=0x80240CE0u; f_8008DE54(c); // 80240CDC
L_80240CE0:;
  c->r[3]=c->r[30]|c->r[30]; // 80240CE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80240CE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80240CE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80240CEC
  c->lr=c->r[0]; // 80240CF0
  c->r[1]=c->r[1]+0x00000010u; // 80240CF4
  return; // 80240CF8
}

// ReserveGXMem__Q36nw4hbm3lyt8MaterialFUcUcUcUcbUcUcbbbb
void f_80240CFC(Ctx* __restrict c) {
  trace_call(0x80240CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80240CFC
  c->r[0]=c->lr; // 80240D00
  W32(c->r[1]+0x00000064u,c->r[0]); // 80240D04
  c->r[11]=c->r[1]+0x00000060u; // 80240D08
  c->lr=0x80240D10u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80240D0C
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80240D10
  c->r[20]=c->r[3]|c->r[3]; // 80240D14
  c->r[28]=R8(c->r[1]+0x0000006Bu); // 80240D18
  c->r[21]=c->r[4]|c->r[4]; // 80240D1C
  c->r[11]=rotl(c->r[0],4)&0x0000000Fu; // 80240D20
  c->r[29]=R8(c->r[1]+0x0000006Fu); // 80240D24
  cmpu(c,0,c->r[11],c->r[4]); // 80240D28
  c->r[30]=R8(c->r[1]+0x00000073u); // 80240D2C
  c->r[31]=R8(c->r[1]+0x00000077u); // 80240D30
  c->r[22]=c->r[5]|c->r[5]; // 80240D34
  c->r[23]=c->r[6]|c->r[6]; // 80240D38
  c->r[24]=c->r[7]|c->r[7]; // 80240D3C
  c->r[25]=c->r[8]|c->r[8]; // 80240D40
  c->r[26]=c->r[9]|c->r[9]; // 80240D44
  c->r[27]=c->r[10]|c->r[10]; // 80240D48
  if (crb(c,0)) { goto L_80240DC8; } // 80240D4C
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 80240D50
  cmpu(c,0,c->r[4],c->r[5]); // 80240D54
  if (crb(c,0)) { goto L_80240DC8; } // 80240D58
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 80240D5C
  cmpu(c,0,c->r[4],c->r[6]); // 80240D60
  if (crb(c,0)) { goto L_80240DC8; } // 80240D64
  c->r[4]=rotl(c->r[0],23)&0x0000001Fu; // 80240D68
  cmpu(c,0,c->r[4],c->r[7]); // 80240D6C
  if (crb(c,0)) { goto L_80240DC8; } // 80240D70
  c->r[4]=rotl(c->r[0],18)&0x00000001u; // 80240D74
  cmpu(c,0,c->r[4],c->r[8]); // 80240D78
  if (crb(c,0)) { goto L_80240DC8; } // 80240D7C
  c->r[4]=rotl(c->r[0],17)&0x00000007u; // 80240D80
  cmpu(c,0,c->r[4],c->r[9]); // 80240D84
  if (crb(c,0)) { goto L_80240DC8; } // 80240D88
  c->r[4]=rotl(c->r[0],14)&0x00000003u; // 80240D8C
  cmpu(c,0,c->r[4],c->r[10]); // 80240D90
  if (crb(c,0)) { goto L_80240DC8; } // 80240D94
  c->r[4]=rotl(c->r[0],24)&0x00000001u; // 80240D98
  cmpu(c,0,c->r[4],c->r[28]); // 80240D9C
  if (crb(c,0)) { goto L_80240DC8; } // 80240DA0
  c->r[4]=rotl(c->r[0],25)&0x00000001u; // 80240DA4
  cmpu(c,0,c->r[4],c->r[29]); // 80240DA8
  if (crb(c,0)) { goto L_80240DC8; } // 80240DAC
  c->r[4]=rotl(c->r[0],26)&0x00000001u; // 80240DB0
  cmpu(c,0,c->r[4],c->r[30]); // 80240DB4
  if (crb(c,0)) { goto L_80240DC8; } // 80240DB8
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 80240DBC
  cmpu(c,0,c->r[0],c->r[31]); // 80240DC0
  if (!crb(c,0)) { goto L_8024145C; } // 80240DC4
L_80240DC8:;
  c->r[4]=R32(c->r[3]+0x00000058u); // 80240DC8
  cmps(c,0,(int32_t)c->r[4],0); // 80240DCC
  if (crb(c,2)) { goto L_80240E00; } // 80240DD0
  c->r[3]=0u+0x80360000u; // 80240DD4
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 80240DD8
  c->lr=0x80240DE0u; f_800EE138(c); // 80240DDC
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 80240DE0
  c->r[4]=0u+0x00000000u; // 80240DE4
  c->r[0]=R32(c->r[20]+0x00000050u); // 80240DE8
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 80240DEC
  W32(c->r[20]+0x00000058u,c->r[4]); // 80240DF0
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 80240DF4
  W32(c->r[20]+0x0000004Cu,c->r[3]); // 80240DF8
  W32(c->r[20]+0x00000050u,c->r[0]); // 80240DFC
L_80240E00:;
  c->r[5]=c->r[27]+c->r[22]; // 80240E00
  c->r[0]=c->r[25]+c->r[28]; // 80240E04
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 80240E08
  c->r[4]=c->r[31]+c->r[29]; // 80240E0C
  c->r[3]=c->r[26]+c->r[23]; // 80240E10
  c->r[0]=c->r[30]+c->r[0]; // 80240E14
  c->r[3]=c->r[4]+c->r[3]; // 80240E18
  c->r[7]=0u+0x80360000u; // 80240E1C
  c->r[0]=c->r[3]+c->r[0]; // 80240E20
  c->r[5]=rotl(c->r[21],5)&0x00001FE0u; // 80240E24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80240E28
  c->r[4]=rotl(c->r[24],4)&0x00000FF0u; // 80240E2C
  c->r[0]=c->r[6]+c->r[0]; // 80240E30
  c->r[3]=R32(c->r[7]+0xFFFFCE20u); // 80240E34
  c->r[0]=c->r[5]+c->r[0]; // 80240E38
  c->r[4]=c->r[4]+c->r[0]; // 80240E3C
  c->lr=0x80240E44u; f_800EE128(c); // 80240E40
  cmps(c,0,(int32_t)c->r[3],0); // 80240E44
  W32(c->r[20]+0x00000058u,c->r[3]); // 80240E48
  if (crb(c,2)) { goto L_8024145C; } // 80240E4C
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 80240E50
  c->r[0]=(rotl(c->r[21],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 80240E54
  c->r[0]=(rotl(c->r[22],24)&0x0F000000u)|(c->r[0]&~0x0F000000u); // 80240E58
  c->r[4]=R32(c->r[20]+0x00000050u); // 80240E5C
  c->r[0]=(rotl(c->r[23],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 80240E60
  c->r[7]=0u+0x00000000u; // 80240E64
  c->r[0]=(rotl(c->r[27],18)&0x000C0000u)|(c->r[0]&~0x000C0000u); // 80240E68
  c->r[0]=(rotl(c->r[26],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80240E6C
  c->r[0]=(rotl(c->r[25],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 80240E70
  c->r[0]=(rotl(c->r[24],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80240E74
  c->r[0]=(rotl(c->r[28],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 80240E78
  c->r[0]=(rotl(c->r[29],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 80240E7C
  c->r[0]=(rotl(c->r[30],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 80240E80
  c->r[0]=(rotl(c->r[31],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 80240E84
  c->r[4]=(rotl(c->r[0],0)&0x0F000000u)|(c->r[4]&~0x0F000000u); // 80240E88
  W32(c->r[20]+0x0000004Cu,c->r[0]); // 80240E8C
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 80240E90
  c->r[6]=rotl(c->r[4],8)&0x0000000Fu; cr0(c,c->r[6]); // 80240E94
  W32(c->r[20]+0x00000050u,c->r[4]); // 80240E98
  c->r[8]=c->r[3]+c->r[0]; // 80240E9C
  if (crb(c,2)) { goto L_80241058; } // 80240EA0
  cmpu(c,0,c->r[6],0x00000008u); // 80240EA4
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 80240EA8
  if (!crb(c,1)) { goto L_80241004; } // 80240EAC
  c->r[0]=c->r[5]+0x00000007u; // 80240EB0
  c->r[4]=0u+0x80260000u; // 80240EB4
  c->r[3]=0u+0x80260000u; // 80240EB8
  c->r[9]=c->r[8]|c->r[8]; // 80240EBC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80240EC0
  {uint32_t ea=c->r[4]+0x00001A60u; c->f[1]=c->ps1[1]=RF32(ea);} // 80240EC4
  {uint32_t ea=c->r[3]+0x00001A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 80240EC8
  c->ctr=c->r[0]; // 80240ECC
  cmpu(c,0,c->r[5],0x00000000u); // 80240ED0
  if (!crb(c,1)) { goto L_80241004; } // 80240ED4
L_80240ED8:;
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[1]);} // 80240ED8
  c->r[7]=c->r[7]+0x00000008u; // 80240EDC
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[1]);} // 80240EE0
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[1]);} // 80240EE4
  {uint32_t ea=c->r[9]+0x0000000Cu; WF32(ea,c->f[0]);} // 80240EE8
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[0]);} // 80240EEC
  {uint32_t ea=c->r[9]+0x00000014u; WF32(ea,c->f[1]);} // 80240EF0
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[1]);} // 80240EF4
  {uint32_t ea=c->r[9]+0x0000001Cu; WF32(ea,c->f[1]);} // 80240EF8
  {uint32_t ea=c->r[9]+0x00000020u; WF32(ea,c->f[0]);} // 80240EFC
  {uint32_t ea=c->r[9]+0x00000024u; WF32(ea,c->f[0]);} // 80240F00
  {uint32_t ea=c->r[9]+0x00000028u; WF32(ea,c->f[1]);} // 80240F04
  {uint32_t ea=c->r[9]+0x0000002Cu; WF32(ea,c->f[1]);} // 80240F08
  {uint32_t ea=c->r[9]+0x00000030u; WF32(ea,c->f[1]);} // 80240F0C
  {uint32_t ea=c->r[9]+0x00000034u; WF32(ea,c->f[0]);} // 80240F10
  {uint32_t ea=c->r[9]+0x00000038u; WF32(ea,c->f[0]);} // 80240F14
  {uint32_t ea=c->r[9]+0x0000003Cu; WF32(ea,c->f[1]);} // 80240F18
  {uint32_t ea=c->r[9]+0x00000040u; WF32(ea,c->f[1]);} // 80240F1C
  {uint32_t ea=c->r[9]+0x00000044u; WF32(ea,c->f[1]);} // 80240F20
  {uint32_t ea=c->r[9]+0x00000048u; WF32(ea,c->f[0]);} // 80240F24
  {uint32_t ea=c->r[9]+0x0000004Cu; WF32(ea,c->f[0]);} // 80240F28
  {uint32_t ea=c->r[9]+0x00000050u; WF32(ea,c->f[1]);} // 80240F2C
  {uint32_t ea=c->r[9]+0x00000054u; WF32(ea,c->f[1]);} // 80240F30
  {uint32_t ea=c->r[9]+0x00000058u; WF32(ea,c->f[1]);} // 80240F34
  {uint32_t ea=c->r[9]+0x0000005Cu; WF32(ea,c->f[0]);} // 80240F38
  {uint32_t ea=c->r[9]+0x00000060u; WF32(ea,c->f[0]);} // 80240F3C
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[1]);} // 80240F40
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[1]);} // 80240F44
  {uint32_t ea=c->r[9]+0x0000006Cu; WF32(ea,c->f[1]);} // 80240F48
  {uint32_t ea=c->r[9]+0x00000070u; WF32(ea,c->f[0]);} // 80240F4C
  {uint32_t ea=c->r[9]+0x00000074u; WF32(ea,c->f[0]);} // 80240F50
  {uint32_t ea=c->r[9]+0x00000078u; WF32(ea,c->f[1]);} // 80240F54
  {uint32_t ea=c->r[9]+0x0000007Cu; WF32(ea,c->f[1]);} // 80240F58
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80240F5C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80240F60
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80240F64
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80240F68
  {uint32_t ea=c->r[9]+0x00000080u; WF32(ea,c->f[1]);} // 80240F6C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80240F70
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80240F74
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80240F78
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80240F7C
  {uint32_t ea=c->r[9]+0x00000084u; WF32(ea,c->f[0]);} // 80240F80
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80240F84
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80240F88
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80240F8C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80240F90
  {uint32_t ea=c->r[9]+0x00000088u; WF32(ea,c->f[0]);} // 80240F94
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80240F98
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80240F9C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80240FA0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80240FA4
  {uint32_t ea=c->r[9]+0x0000008Cu; WF32(ea,c->f[1]);} // 80240FA8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80240FAC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80240FB0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80240FB4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80240FB8
  {uint32_t ea=c->r[9]+0x00000090u; WF32(ea,c->f[1]);} // 80240FBC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80240FC0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80240FC4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80240FC8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80240FCC
  {uint32_t ea=c->r[9]+0x00000094u; WF32(ea,c->f[1]);} // 80240FD0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80240FD4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80240FD8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80240FDC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80240FE0
  {uint32_t ea=c->r[9]+0x00000098u; WF32(ea,c->f[0]);} // 80240FE4
  {uint32_t ea=c->r[9]+0x0000009Cu; WF32(ea,c->f[0]);} // 80240FE8
  c->r[9]=c->r[9]+0x000000A0u; // 80240FEC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80240FF0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80240FF4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80240FF8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80240FFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80240ED8; } // 80241000
L_80241004:;
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)20); // 80241004
  c->r[4]=0u+0x80260000u; // 80241008
  c->r[3]=0u+0x80260000u; // 8024100C
  {uint32_t ea=c->r[4]+0x00001A60u; c->f[1]=c->ps1[1]=RF32(ea);} // 80241010
  c->r[0]=c->r[6]-c->r[7]; // 80241014
  {uint32_t ea=c->r[3]+0x00001A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 80241018
  c->r[3]=c->r[8]+c->r[5]; // 8024101C
  c->ctr=c->r[0]; // 80241020
  cmpu(c,0,c->r[7],c->r[6]); // 80241024
  if (!crb(c,0)) { goto L_80241058; } // 80241028
L_8024102C:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8024102C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80241030
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80241034
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80241038
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8024103C
  c->r[3]=c->r[3]+0x00000014u; // 80241040
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80241044
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80241048
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8024104C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80241050
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024102C; } // 80241054
L_80241058:;
  c->r[11]=R32(c->r[20]+0x0000004Cu); // 80241058
  c->r[4]=0u+0x00000000u; // 8024105C
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 80241060
  c->r[0]=rotl(c->r[11],8)&0x0000000Fu; // 80241064
  c->r[3]=R32(c->r[20]+0x00000050u); // 80241068
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8024106C
  c->r[3]=(rotl(c->r[5],0)&0x000C0000u)|(c->r[3]&~0x000C0000u); // 80241070
  c->r[10]=rotl(c->r[11],28)&0x00000004u; // 80241074
  W32(c->r[20]+0x00000050u,c->r[3]); // 80241078
  c->r[6]=rotl(c->r[11],26)&0x00000004u; // 8024107C
  c->r[21]=R32(c->r[20]+0x00000058u); // 80241080
  c->r[9]=rotl(c->r[11],20)&0x00000004u; // 80241084
  c->r[8]=rotl(c->r[11],27)&0x00000004u; // 80241088
  c->r[5]=rotl(c->r[11],14)&0x0000003Cu; // 8024108C
  c->r[0]=rotl(c->r[11],9)&0x000001E0u; // 80241090
  c->r[12]=rotl(c->r[11],19)&0x0000001Cu; // 80241094
  c->r[11]=rotl(c->r[11],29)&0x00000004u; // 80241098
  c->r[5]=c->r[5]+c->r[0]; // 8024109C
  c->r[8]=c->r[9]+c->r[8]; // 802410A0
  c->r[6]=c->r[10]+c->r[6]; // 802410A4
  c->r[0]=c->r[12]+c->r[11]; // 802410A8
  c->r[3]=rotl(c->r[3],14)&0x00000003u; cr0(c,c->r[3]); // 802410AC
  c->r[5]=c->r[7]+c->r[5]; // 802410B0
  c->r[6]=c->r[8]+c->r[6]; // 802410B4
  c->r[0]=c->r[21]+c->r[0]; // 802410B8
  c->r[5]=c->r[6]+c->r[5]; // 802410BC
  c->r[8]=c->r[5]+c->r[0]; // 802410C0
  if (crb(c,2)) { goto L_8024127C; } // 802410C4
  cmpu(c,0,c->r[3],0x00000008u); // 802410C8
  c->r[7]=c->r[3]+0xFFFFFFF8u; // 802410CC
  if (!crb(c,1)) { goto L_80241228; } // 802410D0
  c->r[0]=c->r[7]+0x00000007u; // 802410D4
  c->r[6]=0u+0x80260000u; // 802410D8
  c->r[5]=0u+0x80260000u; // 802410DC
  c->r[9]=c->r[8]|c->r[8]; // 802410E0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802410E4
  {uint32_t ea=c->r[6]+0x00001A60u; c->f[1]=c->ps1[1]=RF32(ea);} // 802410E8
  {uint32_t ea=c->r[5]+0x00001A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802410EC
  c->ctr=c->r[0]; // 802410F0
  cmpu(c,0,c->r[7],0x00000000u); // 802410F4
  if (!crb(c,1)) { goto L_80241228; } // 802410F8
L_802410FC:;
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[1]);} // 802410FC
  c->r[4]=c->r[4]+0x00000008u; // 80241100
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[1]);} // 80241104
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[1]);} // 80241108
  {uint32_t ea=c->r[9]+0x0000000Cu; WF32(ea,c->f[0]);} // 8024110C
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[0]);} // 80241110
  {uint32_t ea=c->r[9]+0x00000014u; WF32(ea,c->f[1]);} // 80241114
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[1]);} // 80241118
  {uint32_t ea=c->r[9]+0x0000001Cu; WF32(ea,c->f[1]);} // 8024111C
  {uint32_t ea=c->r[9]+0x00000020u; WF32(ea,c->f[0]);} // 80241120
  {uint32_t ea=c->r[9]+0x00000024u; WF32(ea,c->f[0]);} // 80241124
  {uint32_t ea=c->r[9]+0x00000028u; WF32(ea,c->f[1]);} // 80241128
  {uint32_t ea=c->r[9]+0x0000002Cu; WF32(ea,c->f[1]);} // 8024112C
  {uint32_t ea=c->r[9]+0x00000030u; WF32(ea,c->f[1]);} // 80241130
  {uint32_t ea=c->r[9]+0x00000034u; WF32(ea,c->f[0]);} // 80241134
  {uint32_t ea=c->r[9]+0x00000038u; WF32(ea,c->f[0]);} // 80241138
  {uint32_t ea=c->r[9]+0x0000003Cu; WF32(ea,c->f[1]);} // 8024113C
  {uint32_t ea=c->r[9]+0x00000040u; WF32(ea,c->f[1]);} // 80241140
  {uint32_t ea=c->r[9]+0x00000044u; WF32(ea,c->f[1]);} // 80241144
  {uint32_t ea=c->r[9]+0x00000048u; WF32(ea,c->f[0]);} // 80241148
  {uint32_t ea=c->r[9]+0x0000004Cu; WF32(ea,c->f[0]);} // 8024114C
  {uint32_t ea=c->r[9]+0x00000050u; WF32(ea,c->f[1]);} // 80241150
  {uint32_t ea=c->r[9]+0x00000054u; WF32(ea,c->f[1]);} // 80241154
  {uint32_t ea=c->r[9]+0x00000058u; WF32(ea,c->f[1]);} // 80241158
  {uint32_t ea=c->r[9]+0x0000005Cu; WF32(ea,c->f[0]);} // 8024115C
  {uint32_t ea=c->r[9]+0x00000060u; WF32(ea,c->f[0]);} // 80241160
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[1]);} // 80241164
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[1]);} // 80241168
  {uint32_t ea=c->r[9]+0x0000006Cu; WF32(ea,c->f[1]);} // 8024116C
  {uint32_t ea=c->r[9]+0x00000070u; WF32(ea,c->f[0]);} // 80241170
  {uint32_t ea=c->r[9]+0x00000074u; WF32(ea,c->f[0]);} // 80241174
  {uint32_t ea=c->r[9]+0x00000078u; WF32(ea,c->f[1]);} // 80241178
  {uint32_t ea=c->r[9]+0x0000007Cu; WF32(ea,c->f[1]);} // 8024117C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80241180
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80241184
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80241188
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8024118C
  {uint32_t ea=c->r[9]+0x00000080u; WF32(ea,c->f[1]);} // 80241190
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80241194
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80241198
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8024119C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802411A0
  {uint32_t ea=c->r[9]+0x00000084u; WF32(ea,c->f[0]);} // 802411A4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802411A8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802411AC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802411B0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802411B4
  {uint32_t ea=c->r[9]+0x00000088u; WF32(ea,c->f[0]);} // 802411B8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802411BC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802411C0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802411C4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802411C8
  {uint32_t ea=c->r[9]+0x0000008Cu; WF32(ea,c->f[1]);} // 802411CC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802411D0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802411D4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802411D8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802411DC
  {uint32_t ea=c->r[9]+0x00000090u; WF32(ea,c->f[1]);} // 802411E0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802411E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802411E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802411EC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802411F0
  {uint32_t ea=c->r[9]+0x00000094u; WF32(ea,c->f[1]);} // 802411F4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802411F8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802411FC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80241200
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80241204
  {uint32_t ea=c->r[9]+0x00000098u; WF32(ea,c->f[0]);} // 80241208
  {uint32_t ea=c->r[9]+0x0000009Cu; WF32(ea,c->f[0]);} // 8024120C
  c->r[9]=c->r[9]+0x000000A0u; // 80241210
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80241214
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80241218
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8024121C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80241220
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802410FC; } // 80241224
L_80241228:;
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80241228
  c->r[6]=0u+0x80260000u; // 8024122C
  c->r[5]=0u+0x80260000u; // 80241230
  {uint32_t ea=c->r[6]+0x00001A60u; c->f[1]=c->ps1[1]=RF32(ea);} // 80241234
  c->r[0]=c->r[3]-c->r[4]; // 80241238
  {uint32_t ea=c->r[5]+0x00001A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024123C
  c->r[5]=c->r[8]+c->r[7]; // 80241240
  c->ctr=c->r[0]; // 80241244
  cmpu(c,0,c->r[4],c->r[3]); // 80241248
  if (!crb(c,0)) { goto L_8024127C; } // 8024124C
L_80241250:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 80241250
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 80241254
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 80241258
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 8024125C
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 80241260
  c->r[5]=c->r[5]+0x00000014u; // 80241264
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80241268
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024126C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80241270
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80241274
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80241250; } // 80241278
L_8024127C:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 8024127C
  c->r[3]=R32(c->r[20]+0x00000050u); // 80241280
  c->r[3]=(rotl(c->r[0],0)&0x00000100u)|(c->r[3]&~0x00000100u); // 80241284
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 80241288
  W32(c->r[20]+0x00000050u,c->r[3]); // 8024128C
  if (crb(c,2)) { goto L_802412CC; } // 80241290
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 80241294
  c->r[3]=0u+0x00000001u; // 80241298
  c->r[7]=R32(c->r[20]+0x00000058u); // 8024129C
  c->r[0]=0u+0x00000000u; // 802412A0
  c->r[4]=rotl(c->r[5],8)&0x0000000Fu; // 802412A4
  c->r[6]=rotl(c->r[5],14)&0x0000003Cu; // 802412A8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 802412AC
  c->r[5]=rotl(c->r[5],9)&0x000001E0u; // 802412B0
  c->r[5]=c->r[6]+c->r[5]; // 802412B4
  c->r[4]=c->r[7]+c->r[4]; // 802412B8
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 802412BC
  W8(c->r[4]+0x00000001u,c->r[3]); // 802412C0
  W8(c->r[4]+0x00000002u,c->r[0]); // 802412C4
  W8(c->r[4]+0x00000003u,c->r[0]); // 802412C8
L_802412CC:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 802412CC
  c->r[3]=R32(c->r[20]+0x00000050u); // 802412D0
  c->r[3]=(rotl(c->r[0],0)&0x00000080u)|(c->r[3]&~0x00000080u); // 802412D4
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 802412D8
  W32(c->r[20]+0x00000050u,c->r[3]); // 802412DC
  if (crb(c,2)) { goto L_80241314; } // 802412E0
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 802412E4
  c->r[7]=0u+0xFFFFFFFFu; // 802412E8
  c->r[6]=R32(c->r[20]+0x00000058u); // 802412EC
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 802412F0
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 802412F4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802412F8
  c->r[0]=rotl(c->r[5],9)&0x000001E0u; // 802412FC
  c->r[5]=rotl(c->r[5],26)&0x00000004u; // 80241300
  c->r[0]=c->r[4]+c->r[0]; // 80241304
  c->r[3]=c->r[5]+c->r[3]; // 80241308
  c->r[0]=c->r[6]+c->r[0]; // 8024130C
  W32(c->r[3]+c->r[0],c->r[7]); // 80241310
L_80241314:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 80241314
  c->r[3]=R32(c->r[20]+0x00000050u); // 80241318
  c->r[3]=(rotl(c->r[0],0)&0x00004000u)|(c->r[3]&~0x00004000u); // 8024131C
  c->r[0]=rotl(c->r[3],18)&0x00000001u; cr0(c,c->r[0]); // 80241320
  W32(c->r[20]+0x00000050u,c->r[3]); // 80241324
  if (crb(c,2)) { goto L_8024137C; } // 80241328
  c->r[9]=R32(c->r[20]+0x0000004Cu); // 8024132C
  c->r[5]=0u+0x000000E4u; // 80241330
  c->r[10]=R32(c->r[20]+0x00000058u); // 80241334
  c->r[4]=0u+0x000000C0u; // 80241338
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 8024133C
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 80241340
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80241344
  c->r[8]=rotl(c->r[9],27)&0x00000004u; // 80241348
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 8024134C
  c->r[7]=rotl(c->r[9],26)&0x00000004u; // 80241350
  c->r[3]=c->r[3]+c->r[0]; // 80241354
  c->r[0]=c->r[8]+c->r[7]; // 80241358
  c->r[7]=c->r[6]+c->r[3]; // 8024135C
  c->r[3]=0u+0x000000D5u; // 80241360
  c->r[6]=c->r[10]+c->r[0]; // 80241364
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 80241368
  c->r[0]=0u+0x000000EAu; // 8024136C
  W8(c->r[6]+0x00000001u,c->r[4]); // 80241370
  W8(c->r[6]+0x00000002u,c->r[3]); // 80241374
  W8(c->r[6]+0x00000003u,c->r[0]); // 80241378
L_8024137C:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 8024137C
  c->r[3]=R32(c->r[20]+0x00000050u); // 80241380
  c->r[3]=(rotl(c->r[0],0)&0x00000040u)|(c->r[3]&~0x00000040u); // 80241384
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 80241388
  W32(c->r[20]+0x00000050u,c->r[3]); // 8024138C
  if (crb(c,2)) { goto L_802413E4; } // 80241390
  c->r[9]=R32(c->r[20]+0x0000004Cu); // 80241394
  c->r[3]=0u+0x00000077u; // 80241398
  c->r[10]=R32(c->r[20]+0x00000058u); // 8024139C
  c->r[0]=0u+0x00000000u; // 802413A0
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 802413A4
  c->r[4]=rotl(c->r[9],27)&0x00000004u; // 802413A8
  c->r[4]=c->r[7]+c->r[4]; // 802413AC
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 802413B0
  c->r[4]=c->r[6]+c->r[4]; // 802413B4
  c->r[5]=rotl(c->r[9],8)&0x0000000Fu; // 802413B8
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 802413BC
  c->r[8]=rotl(c->r[9],14)&0x0000003Cu; // 802413C0
  c->r[7]=rotl(c->r[9],9)&0x000001E0u; // 802413C4
  c->r[4]=c->r[10]+c->r[4]; // 802413C8
  c->r[5]=c->r[8]+c->r[7]; // 802413CC
  c->r[5]=c->r[6]+c->r[5]; // 802413D0
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 802413D4
  W8(c->r[4]+0x00000001u,c->r[0]); // 802413D8
  W8(c->r[4]+0x00000002u,c->r[0]); // 802413DC
  W8(c->r[4]+0x00000003u,c->r[0]); // 802413E0
L_802413E4:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 802413E4
  c->r[3]=R32(c->r[20]+0x00000050u); // 802413E8
  c->r[3]=(rotl(c->r[0],0)&0x00000020u)|(c->r[3]&~0x00000020u); // 802413EC
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 802413F0
  W32(c->r[20]+0x00000050u,c->r[3]); // 802413F4
  if (crb(c,2)) { goto L_8024145C; } // 802413F8
  c->r[7]=R32(c->r[20]+0x0000004Cu); // 802413FC
  c->r[5]=0u+0x00000001u; // 80241400
  c->r[11]=R32(c->r[20]+0x00000058u); // 80241404
  c->r[4]=0u+0x00000004u; // 80241408
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 8024140C
  c->r[6]=rotl(c->r[7],28)&0x00000004u; // 80241410
  c->r[3]=rotl(c->r[7],26)&0x00000004u; // 80241414
  c->r[10]=rotl(c->r[7],20)&0x00000004u; // 80241418
  c->r[9]=rotl(c->r[7],27)&0x00000004u; // 8024141C
  c->r[8]=rotl(c->r[7],14)&0x0000003Cu; // 80241420
  c->r[7]=rotl(c->r[7],9)&0x000001E0u; // 80241424
  c->r[6]=c->r[6]+c->r[3]; // 80241428
  c->r[7]=c->r[8]+c->r[7]; // 8024142C
  c->r[9]=c->r[10]+c->r[9]; // 80241430
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80241434
  c->r[3]=0u+0x00000005u; // 80241438
  c->r[6]=c->r[9]+c->r[6]; // 8024143C
  c->r[0]=0u+0x0000000Fu; // 80241440
  c->r[7]=c->r[8]+c->r[7]; // 80241444
  c->r[6]=c->r[11]+c->r[6]; // 80241448
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 8024144C
  W8(c->r[6]+0x00000001u,c->r[4]); // 80241450
  W8(c->r[6]+0x00000002u,c->r[3]); // 80241454
  W8(c->r[6]+0x00000003u,c->r[0]); // 80241458
L_8024145C:;
  c->r[11]=c->r[1]+0x00000060u; // 8024145C
  c->lr=0x80241464u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80241460
  c->r[0]=R32(c->r[1]+0x00000064u); // 80241464
  c->lr=c->r[0]; // 80241468
  c->r[1]=c->r[1]+0x00000060u; // 8024146C
  return; // 80241470
}

// GetTexSRTAry__Q36nw4hbm3lyt8MaterialFv
void f_80241474(Ctx* __restrict c) {
  trace_call(0x80241474u);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80241474
  c->r[3]=R32(c->r[3]+0x00000058u); // 80241478
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 8024147C
  c->r[3]=c->r[3]+c->r[0]; // 80241480
  return; // 80241484
}

// GetTexCoordGenAry__Q36nw4hbm3lyt8MaterialFv
void f_80241488(Ctx* __restrict c) {
  trace_call(0x80241488u);
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 80241488
  c->r[5]=R32(c->r[3]+0x00000058u); // 8024148C
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 80241490
  c->r[3]=rotl(c->r[4],9)&0x000001E0u; // 80241494
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80241498
  c->r[0]=c->r[5]+c->r[0]; // 8024149C
  c->r[3]=c->r[3]+c->r[0]; // 802414A0
  return; // 802414A4
}

// GetIndTexSRTAry__Q36nw4hbm3lyt8MaterialFv
void f_802414A8(Ctx* __restrict c) {
  trace_call(0x802414A8u);
  c->r[9]=R32(c->r[3]+0x0000004Cu); // 802414A8
  c->r[11]=R32(c->r[3]+0x00000058u); // 802414AC
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 802414B0
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 802414B4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802414B8
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 802414BC
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 802414C0
  c->r[5]=rotl(c->r[9],27)&0x00000004u; // 802414C4
  c->r[4]=rotl(c->r[9],14)&0x0000003Cu; // 802414C8
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 802414CC
  c->r[0]=c->r[4]+c->r[0]; // 802414D0
  c->r[10]=rotl(c->r[9],19)&0x0000001Cu; // 802414D4
  c->r[9]=rotl(c->r[9],29)&0x00000004u; // 802414D8
  c->r[5]=c->r[7]+c->r[5]; // 802414DC
  c->r[4]=c->r[8]+c->r[6]; // 802414E0
  c->r[3]=c->r[3]+c->r[0]; // 802414E4
  c->r[4]=c->r[5]+c->r[4]; // 802414E8
  c->r[0]=c->r[10]+c->r[9]; // 802414EC
  c->r[3]=c->r[4]+c->r[3]; // 802414F0
  c->r[0]=c->r[11]+c->r[0]; // 802414F4
  c->r[3]=c->r[3]+c->r[0]; // 802414F8
  return; // 802414FC
}

// SetTextureNum__Q36nw4hbm3lyt8MaterialFUc
void f_80241500(Ctx* __restrict c) {
  trace_call(0x80241500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80241500
  c->r[0]=c->lr; // 80241504
  cmps(c,0,(int32_t)c->r[4],0); // 80241508
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024150C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80241510
  W32(c->r[1]+0x00000018u,c->r[30]); // 80241514
  W32(c->r[1]+0x00000014u,c->r[29]); // 80241518
  c->r[29]=c->r[4]|c->r[4]; // 8024151C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80241520
  c->r[28]=c->r[3]|c->r[3]; // 80241524
  if (crb(c,2)) { goto L_80241570; } // 80241528
  c->r[4]=R32(c->r[3]+0x00000050u); // 8024152C
  c->r[3]=R32(c->r[3]+0x00000058u); // 80241530
  c->r[0]=rotl(c->r[4],9)&0x000001E0u; // 80241534
  c->r[30]=rotl(c->r[4],4)&0x0000000Fu; // 80241538
  c->r[31]=c->r[3]+c->r[0]; // 8024153C
  goto L_8024155C; // 80241540
L_80241544:;
  c->r[3]=c->r[31]|c->r[31]; // 80241544
  c->r[4]=0u+0x00000000u; // 80241548
  c->r[5]=0u+0x00000020u; // 8024154C
  c->lr=0x80241554u; f_80004688(c); // 80241550
  c->r[31]=c->r[31]+0x00000020u; // 80241554
  c->r[30]=c->r[30]+0x00000001u; // 80241558
L_8024155C:;
  cmpu(c,0,c->r[30],c->r[29]); // 8024155C
  if (crb(c,0)) { IRQCHK(c); goto L_80241544; } // 80241560
  c->r[0]=R32(c->r[28]+0x00000050u); // 80241564
  c->r[0]=(rotl(c->r[29],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 80241568
  W32(c->r[28]+0x00000050u,c->r[0]); // 8024156C
L_80241570:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80241570
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80241574
  c->r[30]=R32(c->r[1]+0x00000018u); // 80241578
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024157C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80241580
  c->lr=c->r[0]; // 80241584
  c->r[1]=c->r[1]+0x00000020u; // 80241588
  return; // 8024158C
}

// SetTexCoordGenNum__Q36nw4hbm3lyt8MaterialFUc
void f_80241590(Ctx* __restrict c) {
  trace_call(0x80241590u);
  cmps(c,0,(int32_t)c->r[4],0); // 80241590
  if (crb(c,2)) return; // 80241594
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 80241598
  c->r[0]=R32(c->r[3]+0x00000050u); // 8024159C
  c->r[5]=rotl(c->r[7],8)&0x0000000Fu; // 802415A0
  c->r[8]=R32(c->r[3]+0x00000058u); // 802415A4
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 802415A8
  c->r[12]=rotl(c->r[0],12)&0x0000000Fu; // 802415AC
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 802415B0
  cmpu(c,1,c->r[12],c->r[4]); // 802415B4
  c->r[0]=c->r[8]+c->r[6]; // 802415B8
  c->r[11]=c->r[5]+c->r[0]; // 802415BC
  if (!crb(c,4)) { goto L_802416D4; } // 802415C0
  c->r[0]=c->r[4]-c->r[12]; // 802415C4
  c->r[9]=c->r[4]+0xFFFFFFF8u; // 802415C8
  cmpu(c,0,c->r[0],0x00000008u); // 802415CC
  if (!crb(c,1)) { goto L_80241694; } // 802415D0
  if (crb(c,5)) { goto L_80241694; } // 802415D4
  c->r[0]=c->r[9]+0x00000007u; // 802415D8
  c->r[5]=rotl(c->r[12],2)&0xFFFFFFFCu; // 802415DC
  c->r[0]=c->r[0]-c->r[12]; // 802415E0
  c->r[8]=0u+0x00000001u; // 802415E4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802415E8
  c->r[10]=c->r[11]+c->r[5]; // 802415EC
  c->r[7]=0u+0x00000004u; // 802415F0
  c->r[6]=0u+0x0000003Cu; // 802415F4
  c->r[5]=0u+0x00000000u; // 802415F8
  c->ctr=c->r[0]; // 802415FC
  cmpu(c,0,c->r[12],c->r[9]); // 80241600
  if (!crb(c,0)) { goto L_80241694; } // 80241604
L_80241608:;
  W8(c->r[10]+0x00000000u,c->r[8]); // 80241608
  c->r[12]=c->r[12]+0x00000008u; // 8024160C
  W8(c->r[10]+0x00000001u,c->r[7]); // 80241610
  W8(c->r[10]+0x00000002u,c->r[6]); // 80241614
  W8(c->r[10]+0x00000003u,c->r[5]); // 80241618
  W8(c->r[10]+0x00000004u,c->r[8]); // 8024161C
  W8(c->r[10]+0x00000005u,c->r[7]); // 80241620
  W8(c->r[10]+0x00000006u,c->r[6]); // 80241624
  W8(c->r[10]+0x00000007u,c->r[5]); // 80241628
  W8(c->r[10]+0x00000008u,c->r[8]); // 8024162C
  W8(c->r[10]+0x00000009u,c->r[7]); // 80241630
  W8(c->r[10]+0x0000000Au,c->r[6]); // 80241634
  W8(c->r[10]+0x0000000Bu,c->r[5]); // 80241638
  W8(c->r[10]+0x0000000Cu,c->r[8]); // 8024163C
  W8(c->r[10]+0x0000000Du,c->r[7]); // 80241640
  W8(c->r[10]+0x0000000Eu,c->r[6]); // 80241644
  W8(c->r[10]+0x0000000Fu,c->r[5]); // 80241648
  W8(c->r[10]+0x00000010u,c->r[8]); // 8024164C
  W8(c->r[10]+0x00000011u,c->r[7]); // 80241650
  W8(c->r[10]+0x00000012u,c->r[6]); // 80241654
  W8(c->r[10]+0x00000013u,c->r[5]); // 80241658
  W8(c->r[10]+0x00000014u,c->r[8]); // 8024165C
  W8(c->r[10]+0x00000015u,c->r[7]); // 80241660
  W8(c->r[10]+0x00000016u,c->r[6]); // 80241664
  W8(c->r[10]+0x00000017u,c->r[5]); // 80241668
  W8(c->r[10]+0x00000018u,c->r[8]); // 8024166C
  W8(c->r[10]+0x00000019u,c->r[7]); // 80241670
  W8(c->r[10]+0x0000001Au,c->r[6]); // 80241674
  W8(c->r[10]+0x0000001Bu,c->r[5]); // 80241678
  W8(c->r[10]+0x0000001Cu,c->r[8]); // 8024167C
  W8(c->r[10]+0x0000001Du,c->r[7]); // 80241680
  W8(c->r[10]+0x0000001Eu,c->r[6]); // 80241684
  W8(c->r[10]+0x0000001Fu,c->r[5]); // 80241688
  c->r[10]=c->r[10]+0x00000020u; // 8024168C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80241608; } // 80241690
L_80241694:;
  c->r[5]=rotl(c->r[12],2)&0xFFFFFFFCu; // 80241694
  c->r[0]=c->r[4]-c->r[12]; // 80241698
  c->r[9]=c->r[11]+c->r[5]; // 8024169C
  c->r[8]=0u+0x00000001u; // 802416A0
  c->r[7]=0u+0x00000004u; // 802416A4
  c->r[6]=0u+0x0000003Cu; // 802416A8
  c->r[5]=0u+0x00000000u; // 802416AC
  c->ctr=c->r[0]; // 802416B0
  cmpu(c,0,c->r[12],c->r[4]); // 802416B4
  if (!crb(c,0)) { goto L_802416D4; } // 802416B8
L_802416BC:;
  W8(c->r[9]+0x00000000u,c->r[8]); // 802416BC
  W8(c->r[9]+0x00000001u,c->r[7]); // 802416C0
  W8(c->r[9]+0x00000002u,c->r[6]); // 802416C4
  W8(c->r[9]+0x00000003u,c->r[5]); // 802416C8
  c->r[9]=c->r[9]+0x00000004u; // 802416CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802416BC; } // 802416D0
L_802416D4:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 802416D4
  c->r[0]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 802416D8
  W32(c->r[3]+0x00000050u,c->r[0]); // 802416DC
  return; // 802416E0
}

// SetTextureNoWrap__Q36nw4hbm3lyt8MaterialFUcP10TPLPalette
void f_802416E4(Ctx* __restrict c) {
  trace_call(0x802416E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802416E4
  c->r[0]=c->lr; // 802416E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802416EC
  c->r[0]=rotl(c->r[4],5)&0x00001FE0u; // 802416F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802416F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802416F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802416FC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80241700
  c->r[28]=c->r[5]|c->r[5]; // 80241704
  c->r[3]=R32(c->r[3]+0x00000058u); // 80241708
  c->r[31]=c->r[3]+c->r[0]; // 8024170C
  c->r[3]=c->r[31]|c->r[31]; // 80241710
  c->lr=0x80241718u; f_800D1728(c); // 80241714
  c->r[30]=c->r[3]|c->r[3]; // 80241718
  c->r[3]=c->r[31]|c->r[31]; // 8024171C
  c->lr=0x80241724u; f_800D1734(c); // 80241720
  c->r[29]=c->r[3]|c->r[3]; // 80241724
  c->r[3]=c->r[31]|c->r[31]; // 80241728
  c->r[4]=c->r[28]|c->r[28]; // 8024172C
  c->r[5]=0u+0x00000000u; // 80241730
  c->lr=0x80241738u; f_8023E504(c); // 80241734
  c->r[3]=c->r[31]|c->r[31]; // 80241738
  c->r[4]=c->r[30]|c->r[30]; // 8024173C
  c->r[5]=c->r[29]|c->r[29]; // 80241740
  c->lr=0x80241748u; f_800D16CC(c); // 80241744
  c->r[0]=R32(c->r[1]+0x00000024u); // 80241748
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024174C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80241750
  c->r[29]=R32(c->r[1]+0x00000014u); // 80241754
  c->r[28]=R32(c->r[1]+0x00000010u); // 80241758
  c->lr=c->r[0]; // 8024175C
  c->r[1]=c->r[1]+0x00000020u; // 80241760
  return; // 80241764
}

// SetTexture__Q36nw4hbm3lyt8MaterialFUcRC9_GXTexObj
void f_80241768(Ctx* __restrict c) {
  trace_call(0x80241768u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 80241768
  c->r[0]=rotl(c->r[4],5)&0x00001FE0u; // 8024176C
  c->r[6]=R32(c->r[5]+0x00000000u); // 80241770
  c->r[4]=0u+0x00000000u; // 80241774
  c->r[3]=c->r[3]+c->r[0]; // 80241778
  c->r[0]=R32(c->r[5]+0x00000004u); // 8024177C
  W32(c->r[3]+0x00000000u,c->r[6]); // 80241780
  c->r[6]=R32(c->r[5]+0x00000008u); // 80241784
  W32(c->r[3]+0x00000004u,c->r[0]); // 80241788
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8024178C
  W32(c->r[3]+0x00000008u,c->r[6]); // 80241790
  c->r[6]=R32(c->r[5]+0x00000010u); // 80241794
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80241798
  c->r[0]=R32(c->r[5]+0x00000014u); // 8024179C
  W32(c->r[3]+0x00000010u,c->r[6]); // 802417A0
  c->r[6]=R32(c->r[5]+0x00000018u); // 802417A4
  W32(c->r[3]+0x00000014u,c->r[0]); // 802417A8
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 802417AC
  W32(c->r[3]+0x00000018u,c->r[6]); // 802417B0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802417B4
  f_800D16E8(c); return; // 802417B8
}

// SetColorElement__Q36nw4hbm3lyt8MaterialFUls
void f_802417BC(Ctx* __restrict c) {
  trace_call(0x802417BCu);
  cmps(c,0,(int32_t)c->r[4],16); // 802417BC
  if (!crb(c,0)) { goto L_802417D8; } // 802417C0
  cmps(c,0,(int32_t)c->r[4],4); // 802417C4
  if (!crb(c,0)) { goto L_8024188C; } // 802417C8
  cmps(c,0,(int32_t)c->r[4],0); // 802417CC
  if (!crb(c,0)) { goto L_802417E4; } // 802417D0
  return; // 802417D4
L_802417D8:;
  cmps(c,0,(int32_t)c->r[4],32); // 802417D8
  if (!crb(c,0)) return; // 802417DC
  goto L_80241900; // 802417E0
L_802417E4:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 802417E4
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 802417E8
  cmpu(c,0,c->r[0],0x00000001u); // 802417EC
  if (crb(c,0)) return; // 802417F0
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 802417F4
  c->r[0]=sraw(c,c->r[5],31); // 802417F8
  c->r[9]=c->r[5]&~c->r[0]; // 802417FC
  c->r[8]=R32(c->r[3]+0x00000058u); // 80241800
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 80241804
  c->r[6]=rotl(c->r[7],14)&0x0000003Cu; // 80241808
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8024180C
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 80241810
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[9]; // 80241814
  c->r[7]=rotl(c->r[7],26)&0x00000004u; // 80241818
  c->r[6]=c->r[6]+c->r[5]; // 8024181C
  cmps(c,0,(int32_t)c->r[0],255); // 80241820
  c->r[5]=c->r[7]+c->r[3]; // 80241824
  c->r[3]=0u+0x000000FFu; // 80241828
  c->r[0]=c->r[8]+c->r[6]; // 8024182C
  c->r[5]=c->r[5]+c->r[0]; // 80241830
  if (crb(c,1)) { goto L_8024183C; } // 80241834
  c->r[3]=c->r[9]|c->r[9]; // 80241838
L_8024183C:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 8024183C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80241840
  cmps(c,0,(int32_t)c->r[0],2); // 80241844
  if (crb(c,2)) { goto L_8024187C; } // 80241848
  if (!crb(c,0)) { goto L_80241860; } // 8024184C
  cmps(c,0,(int32_t)c->r[0],0); // 80241850
  if (crb(c,2)) { goto L_8024186C; } // 80241854
  if (!crb(c,0)) { goto L_80241874; } // 80241858
  return; // 8024185C
L_80241860:;
  cmps(c,0,(int32_t)c->r[0],4); // 80241860
  if (!crb(c,0)) return; // 80241864
  goto L_80241884; // 80241868
L_8024186C:;
  W8(c->r[5]+0x00000000u,c->r[3]); // 8024186C
  return; // 80241870
L_80241874:;
  W8(c->r[5]+0x00000001u,c->r[3]); // 80241874
  return; // 80241878
L_8024187C:;
  W8(c->r[5]+0x00000002u,c->r[3]); // 8024187C
  return; // 80241880
L_80241884:;
  W8(c->r[5]+0x00000003u,c->r[3]); // 80241884
  return; // 80241888
L_8024188C:;
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 8024188C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80241890
  cmps(c,0,(int32_t)c->r[0],2); // 80241894
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 80241898
  if (crb(c,2)) { goto L_802418E0; } // 8024189C
  if (!crb(c,0)) { goto L_802418B4; } // 802418A0
  cmps(c,0,(int32_t)c->r[0],0); // 802418A4
  if (crb(c,2)) { goto L_802418C0; } // 802418A8
  if (!crb(c,0)) { goto L_802418D0; } // 802418AC
  return; // 802418B0
L_802418B4:;
  cmps(c,0,(int32_t)c->r[0],4); // 802418B4
  if (!crb(c,0)) return; // 802418B8
  goto L_802418F0; // 802418BC
L_802418C0:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 802418C0
  c->r[3]=c->r[3]+c->r[0]; // 802418C4
  W16(c->r[3]+0x00000024u,c->r[5]); // 802418C8
  return; // 802418CC
L_802418D0:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 802418D0
  c->r[3]=c->r[3]+c->r[0]; // 802418D4
  W16(c->r[3]+0x00000026u,c->r[5]); // 802418D8
  return; // 802418DC
L_802418E0:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 802418E0
  c->r[3]=c->r[3]+c->r[0]; // 802418E4
  W16(c->r[3]+0x00000028u,c->r[5]); // 802418E8
  return; // 802418EC
L_802418F0:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 802418F0
  c->r[3]=c->r[3]+c->r[0]; // 802418F4
  W16(c->r[3]+0x0000002Au,c->r[5]); // 802418F8
  return; // 802418FC
L_80241900:;
  c->r[0]=sraw(c,c->r[5],31); // 80241900
  c->r[6]=c->r[4]+0xFFFFFFF0u; // 80241904
  c->r[7]=c->r[5]&~c->r[0]; // 80241908
  c->r[5]=0u+0x000000FFu; // 8024190C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 80241910
  c->r[6]=rotl(c->r[6],30)&0x3FFFFFFFu; // 80241914
  cmps(c,0,(int32_t)c->r[0],255); // 80241918
  if (crb(c,1)) { goto L_80241924; } // 8024191C
  c->r[5]=c->r[7]|c->r[7]; // 80241920
L_80241924:;
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 80241924
  c->r[4]=rotl(c->r[5],0)&0x000000FFu; // 80241928
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8024192C
  cmps(c,0,(int32_t)c->r[0],2); // 80241930
  if (crb(c,2)) { goto L_80241978; } // 80241934
  if (!crb(c,0)) { goto L_8024194C; } // 80241938
  cmps(c,0,(int32_t)c->r[0],0); // 8024193C
  if (crb(c,2)) { goto L_80241958; } // 80241940
  if (!crb(c,0)) { goto L_80241968; } // 80241944
  return; // 80241948
L_8024194C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8024194C
  if (!crb(c,0)) return; // 80241950
  goto L_80241988; // 80241954
L_80241958:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80241958
  c->r[3]=c->r[3]+c->r[0]; // 8024195C
  W8(c->r[3]+0x0000003Cu,c->r[4]); // 80241960
  return; // 80241964
L_80241968:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80241968
  c->r[3]=c->r[3]+c->r[0]; // 8024196C
  W8(c->r[3]+0x0000003Du,c->r[4]); // 80241970
  return; // 80241974
L_80241978:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80241978
  c->r[3]=c->r[3]+c->r[0]; // 8024197C
  W8(c->r[3]+0x0000003Eu,c->r[4]); // 80241980
  return; // 80241984
L_80241988:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80241988
  c->r[3]=c->r[3]+c->r[0]; // 8024198C
  W8(c->r[3]+0x0000003Fu,c->r[4]); // 80241990
  return; // 80241994
}

// SetupGX__Q36nw4hbm3lyt8MaterialFbUc
void f_80241998(Ctx* __restrict c) {
  trace_call(0x80241998u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80241998
  c->r[0]=c->lr; // 8024199C
  W32(c->r[1]+0x00000124u,c->r[0]); // 802419A0
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 802419A4
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 802419A8
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 802419AC
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 802419B0
  c->r[11]=c->r[1]+0x00000100u; // 802419B4
  c->lr=0x802419BCu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802419B8
  c->r[26]=c->r[3]|c->r[3]; // 802419BC
  c->r[28]=c->r[4]|c->r[4]; // 802419C0
  c->r[27]=c->r[5]|c->r[5]; // 802419C4
  c->r[30]=0u+0x00000001u; // 802419C8
  c->r[23]=0u+0x00000000u; // 802419CC
  c->r[3]=0u+0x00000001u; // 802419D0
  c->lr=0x802419D8u; f_800D11EC(c); // 802419D4
  c->r[3]=R32(c->r[26]+0x0000004Cu); // 802419D8
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 802419DC
  if (crb(c,2)) { goto L_80241A84; } // 802419E0
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 802419E4
  c->r[7]=R32(c->r[26]+0x00000058u); // 802419E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802419EC
  c->r[5]=rotl(c->r[3],14)&0x0000003Cu; // 802419F0
  c->r[4]=rotl(c->r[3],9)&0x000001E0u; // 802419F4
  c->r[3]=0u+0x00000000u; // 802419F8
  c->r[6]=c->r[5]+c->r[4]; // 802419FC
  c->r[4]=0u+0x00000000u; // 80241A00
  c->r[0]=c->r[7]+c->r[0]; // 80241A04
  c->r[5]=0u+0x00000000u; // 80241A08
  c->r[24]=c->r[6]+c->r[0]; // 80241A0C
  c->r[6]=R8(c->r[6]+c->r[0]); // 80241A10
  c->r[7]=0u+0x00000000u; // 80241A14
  c->r[8]=0u+0x00000000u; // 80241A18
  c->r[9]=0u+0x00000002u; // 80241A1C
  c->lr=0x80241A24u; f_800D1210(c); // 80241A20
  c->r[6]=R8(c->r[24]+0x00000001u); // 80241A24
  c->r[3]=0u+0x00000002u; // 80241A28
  c->r[4]=0u+0x00000000u; // 80241A2C
  c->r[5]=0u+0x00000000u; // 80241A30
  c->r[7]=0u+0x00000000u; // 80241A34
  c->r[8]=0u+0x00000000u; // 80241A38
  c->r[9]=0u+0x00000002u; // 80241A3C
  c->lr=0x80241A44u; f_800D1210(c); // 80241A40
  c->r[3]=R8(c->r[24]+0x00000000u); // 80241A44
  c->r[30]=0u+0x00000001u; // 80241A48
  cmps(c,0,(int32_t)c->r[3],1); // 80241A4C
  if (crb(c,2)) { goto L_80241A64; } // 80241A50
  c->r[0]=R8(c->r[24]+0x00000001u); // 80241A54
  cmps(c,0,(int32_t)c->r[0],1); // 80241A58
  if (crb(c,2)) { goto L_80241A64; } // 80241A5C
  c->r[30]=0u+0x00000000u; // 80241A60
L_80241A64:;
  cmps(c,0,(int32_t)c->r[3],0); // 80241A64
  c->r[23]=0u+0x00000000u; // 80241A68
  if (crb(c,2)) { goto L_80241A7C; } // 80241A6C
  c->r[0]=R8(c->r[24]+0x00000001u); // 80241A70
  cmps(c,0,(int32_t)c->r[0],0); // 80241A74
  if (!crb(c,2)) { goto L_80241AA4; } // 80241A78
L_80241A7C:;
  c->r[23]=0u+0x00000001u; // 80241A7C
  goto L_80241AA4; // 80241A80
L_80241A84:;
  c->r[3]=0u+0x00000004u; // 80241A84
  c->r[4]=0u+0x00000000u; // 80241A88
  c->r[5]=0u+0x00000000u; // 80241A8C
  c->r[6]=0u+0x00000001u; // 80241A90
  c->r[7]=0u+0x00000000u; // 80241A94
  c->r[8]=0u+0x00000000u; // 80241A98
  c->r[9]=0u+0x00000002u; // 80241A9C
  c->lr=0x80241AA4u; f_800D1210(c); // 80241AA0
L_80241AA4:;
  cmps(c,0,(int32_t)c->r[30],0); // 80241AA4
  c->r[29]=0u+0x00000000u; // 80241AA8
  if (crb(c,2)) { goto L_80241AC0; } // 80241AAC
  cmps(c,0,(int32_t)c->r[28],0); // 80241AB0
  c->r[29]=0u+0x00000001u; // 80241AB4
  if (!crb(c,2)) { goto L_80241AC0; } // 80241AB8
  c->r[29]=0u+0x00000000u; // 80241ABC
L_80241AC0:;
  cmps(c,0,(int32_t)c->r[23],0); // 80241AC0
  if (crb(c,2)) { goto L_80241B98; } // 80241AC4
  c->r[5]=R32(c->r[26]+0x0000004Cu); // 80241AC8
  c->r[0]=0u+0xFFFFFFFFu; // 80241ACC
  W32(c->r[1]+0x00000030u,c->r[0]); // 80241AD0
  c->r[0]=rotl(c->r[5],25)&0x00000001u; cr0(c,c->r[0]); // 80241AD4
  if (crb(c,2)) { goto L_80241B24; } // 80241AD8
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 80241ADC
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 80241AE0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80241AE4
  c->r[6]=R32(c->r[26]+0x00000058u); // 80241AE8
  c->r[0]=rotl(c->r[5],9)&0x000001E0u; // 80241AEC
  c->r[5]=rotl(c->r[5],26)&0x00000004u; // 80241AF0
  c->r[0]=c->r[4]+c->r[0]; // 80241AF4
  c->r[3]=c->r[5]+c->r[3]; // 80241AF8
  c->r[0]=c->r[6]+c->r[0]; // 80241AFC
  c->r[6]=c->r[3]+c->r[0]; // 80241B00
  c->r[5]=R8(c->r[3]+c->r[0]); // 80241B04
  c->r[4]=R8(c->r[6]+0x00000001u); // 80241B08
  c->r[3]=R8(c->r[6]+0x00000002u); // 80241B0C
  c->r[0]=R8(c->r[6]+0x00000003u); // 80241B10
  W8(c->r[1]+0x00000030u,c->r[5]); // 80241B14
  W8(c->r[1]+0x00000031u,c->r[4]); // 80241B18
  W8(c->r[1]+0x00000032u,c->r[3]); // 80241B1C
  W8(c->r[1]+0x00000033u,c->r[0]); // 80241B20
L_80241B24:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 80241B24
  c->r[5]=c->r[27]|c->r[27]; // 80241B28
  c->r[3]=c->r[1]+0x00000024u; // 80241B2C
  c->r[4]=c->r[1]+0x00000028u; // 80241B30
  W32(c->r[1]+0x00000028u,c->r[0]); // 80241B34
  c->lr=0x80241B3Cu; f_8023DBC4(c); // 80241B38
  c->r[7]=R8(c->r[1]+0x00000024u); // 80241B3C
  c->r[4]=c->r[1]+0x00000020u; // 80241B40
  c->r[6]=R8(c->r[1]+0x00000025u); // 80241B44
  c->r[3]=0u+0x00000004u; // 80241B48
  c->r[5]=R8(c->r[1]+0x00000026u); // 80241B4C
  c->r[0]=R8(c->r[1]+0x00000027u); // 80241B50
  W8(c->r[1]+0x00000030u,c->r[7]); // 80241B54
  W8(c->r[1]+0x00000031u,c->r[6]); // 80241B58
  W8(c->r[1]+0x00000032u,c->r[5]); // 80241B5C
  W8(c->r[1]+0x00000033u,c->r[0]); // 80241B60
  W8(c->r[1]+0x00000020u,c->r[7]); // 80241B64
  W8(c->r[1]+0x00000021u,c->r[6]); // 80241B68
  W8(c->r[1]+0x00000022u,c->r[5]); // 80241B6C
  W8(c->r[1]+0x00000023u,c->r[0]); // 80241B70
  c->lr=0x80241B78u; f_800D1114(c); // 80241B74
  cmps(c,0,(int32_t)c->r[29],0); // 80241B78
  c->r[29]=0u+0x00000000u; // 80241B7C
  if (!crb(c,2)) { goto L_80241B94; } // 80241B80
  c->r[3]=R32(c->r[1]+0x00000030u); // 80241B84
  c->r[0]=c->r[3]+0x00010000u; // 80241B88
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80241B8C
  if (crb(c,2)) { goto L_80241B98; } // 80241B90
L_80241B94:;
  c->r[29]=0u+0x00000001u; // 80241B94
L_80241B98:;
  c->r[31]=0u+0x00000000u; // 80241B98
  W8(c->r[1]+0x0000005Cu,c->r[31]); // 80241B9C
  W8(c->r[1]+0x0000005Du,c->r[31]); // 80241BA0
  W8(c->r[1]+0x0000005Eu,c->r[31]); // 80241BA4
  W8(c->r[1]+0x0000005Fu,c->r[31]); // 80241BA8
  W8(c->r[1]+0x00000060u,c->r[31]); // 80241BAC
  W8(c->r[1]+0x00000061u,c->r[31]); // 80241BB0
  W8(c->r[1]+0x00000062u,c->r[31]); // 80241BB4
  W8(c->r[1]+0x00000063u,c->r[31]); // 80241BB8
  W8(c->r[1]+0x00000064u,c->r[31]); // 80241BBC
  W8(c->r[1]+0x00000065u,c->r[31]); // 80241BC0
  c->r[0]=R32(c->r[26]+0x00000050u); // 80241BC4
  c->r[3]=rotl(c->r[0],12)&0x0000000Fu; // 80241BC8
  c->lr=0x80241BD0u; f_800CF424(c); // 80241BCC
  c->r[0]=R32(c->r[26]+0x00000050u); // 80241BD0
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; cr0(c,c->r[0]); // 80241BD4
  if (crb(c,2)) { goto L_80241C6C; } // 80241BD8
  c->r[4]=R32(c->r[26]+0x0000004Cu); // 80241BDC
  c->r[3]=0u+0xAAAB0000u; // 80241BE0
  c->r[5]=R32(c->r[26]+0x00000058u); // 80241BE4
  c->r[27]=c->r[1]+0x0000005Cu; // 80241BE8
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 80241BEC
  c->r[4]=rotl(c->r[4],9)&0x000001E0u; // 80241BF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80241BF4
  c->r[25]=c->r[3]+0xFFFFAAABu; // 80241BF8
  c->r[28]=0u+0x00000000u; // 80241BFC
  c->r[24]=0u+0x00000001u; // 80241C00
  c->r[0]=c->r[5]+c->r[0]; // 80241C04
  c->r[23]=c->r[4]+c->r[0]; // 80241C08
  goto L_80241C5C; // 80241C0C
L_80241C10:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 80241C10
  c->r[6]=R8(c->r[23]+0x00000002u); // 80241C14
  cmps(c,0,(int32_t)c->r[0],1); // 80241C18
  if (!crb(c,2)) { goto L_80241C3C; } // 80241C1C
  cmpu(c,0,c->r[6],0x0000003Cu); // 80241C20
  if (crb(c,2)) { goto L_80241C3C; } // 80241C24
  c->r[0]=c->r[6]+0xFFFFFFE2u; // 80241C28
  c->r[31]=0u+0x00000001u; // 80241C2C
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 80241C30
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80241C34
  W8(c->r[27]+c->r[0],c->r[24]); // 80241C38
L_80241C3C:;
  c->r[4]=R8(c->r[23]+0x00000000u); // 80241C3C
  c->r[3]=c->r[28]|c->r[28]; // 80241C40
  c->r[5]=R8(c->r[23]+0x00000001u); // 80241C44
  c->r[7]=0u+0x00000000u; // 80241C48
  c->r[8]=0u+0x0000007Du; // 80241C4C
  c->lr=0x80241C54u; f_800CF1FC(c); // 80241C50
  c->r[23]=c->r[23]+0x00000004u; // 80241C54
  c->r[28]=c->r[28]+0x00000001u; // 80241C58
L_80241C5C:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 80241C5C
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 80241C60
  cmpu(c,0,c->r[28],c->r[0]); // 80241C64
  if (crb(c,0)) { IRQCHK(c); goto L_80241C10; } // 80241C68
L_80241C6C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80241C6C
  if (crb(c,2)) { goto L_80241CE4; } // 80241C70
  c->r[0]=R32(c->r[26]+0x0000004Cu); // 80241C74
  c->r[27]=c->r[1]+0x0000005Cu; // 80241C78
  c->r[3]=R32(c->r[26]+0x00000058u); // 80241C7C
  c->r[28]=0u+0x00000000u; // 80241C80
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 80241C84
  c->r[23]=c->r[3]+c->r[0]; // 80241C88
  goto L_80241CD0; // 80241C8C
L_80241C90:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80241C90
  c->r[0]=R8(c->r[27]+c->r[3]); // 80241C94
  cmps(c,0,(int32_t)c->r[0],0); // 80241C98
  if (crb(c,2)) { goto L_80241CCC; } // 80241C9C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80241CA0
  c->r[3]=c->r[1]+0x000000A0u; // 80241CA4
  c->r[4]=c->r[23]+c->r[0]; // 80241CA8
  c->lr=0x80241CB0u; f_8023F6D8(c); // 80241CAC
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80241CB0
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 80241CB4
  c->r[4]=c->r[0]-c->r[3]; // 80241CB8
  c->r[5]=0u+0x00000001u; // 80241CBC
  c->r[3]=c->r[1]+0x000000A0u; // 80241CC0
  c->r[4]=c->r[4]+0x0000001Eu; // 80241CC4
  c->lr=0x80241CCCu; f_800D3838(c); // 80241CC8
L_80241CCC:;
  c->r[28]=c->r[28]+0x00000001u; // 80241CCC
L_80241CD0:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 80241CD0
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80241CD4
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 80241CD8
  cmpu(c,0,c->r[3],c->r[0]); // 80241CDC
  if (crb(c,0)) { IRQCHK(c); goto L_80241C90; } // 80241CE0
L_80241CE4:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 80241CE4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80241CE8
  if (crb(c,2)) { goto L_80241DBC; } // 80241CEC
  c->r[31]=R32(c->r[26]+0x00000058u); // 80241CF0
  c->r[28]=0u+0x00000000u; // 80241CF4
  c->r[27]=0u+0x00000000u; // 80241CF8
  goto L_80241DAC; // 80241CFC
L_80241D00:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80241D00
  c->r[3]=c->r[1]+0x00000080u; // 80241D04
  c->r[0]=R32(c->r[31]+0x00000004u); // 80241D08
  W32(c->r[1]+0x00000080u,c->r[4]); // 80241D0C
  W32(c->r[1]+0x00000084u,c->r[0]); // 80241D10
  c->r[4]=R32(c->r[31]+0x00000008u); // 80241D14
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80241D18
  W32(c->r[1]+0x00000088u,c->r[4]); // 80241D1C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80241D20
  c->r[4]=R32(c->r[31]+0x00000010u); // 80241D24
  c->r[0]=R32(c->r[31]+0x00000014u); // 80241D28
  W32(c->r[1]+0x00000090u,c->r[4]); // 80241D2C
  W32(c->r[1]+0x00000094u,c->r[0]); // 80241D30
  c->r[4]=R32(c->r[31]+0x00000018u); // 80241D34
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80241D38
  W32(c->r[1]+0x00000098u,c->r[4]); // 80241D3C
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80241D40
  c->lr=0x80241D48u; f_800D1720(c); // 80241D44
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 80241D48
  cmpu(c,0,c->r[0],0x00000001u); // 80241D4C
  if (crb(c,1)) { goto L_80241D98; } // 80241D50
  c->r[3]=c->r[1]+0x00000080u; // 80241D54
  c->lr=0x80241D5Cu; f_800D16F0(c); // 80241D58
  cmps(c,0,(int32_t)c->r[3],0); // 80241D5C
  c->r[6]=c->r[3]|c->r[3]; // 80241D60
  if (crb(c,2)) { goto L_80241D98; } // 80241D64
  c->r[4]=R32(c->r[6]+0x00000008u); // 80241D68
  c->r[3]=c->r[1]+0x00000050u; // 80241D6C
  c->r[5]=R32(c->r[6]+0x00000004u); // 80241D70
  c->r[6]=R16(c->r[6]+0x00000000u); // 80241D74
  c->lr=0x80241D7Cu; f_800D19E8(c); // 80241D78
  c->r[4]=c->r[28]|c->r[28]; // 80241D7C
  c->r[3]=c->r[1]+0x00000050u; // 80241D80
  c->lr=0x80241D88u; f_800D1A10(c); // 80241D84
  c->r[4]=c->r[28]|c->r[28]; // 80241D88
  c->r[3]=c->r[1]+0x00000080u; // 80241D8C
  c->lr=0x80241D94u; f_800D16E0(c); // 80241D90
  c->r[28]=c->r[28]+0x00000001u; // 80241D94
L_80241D98:;
  c->r[4]=c->r[27]|c->r[27]; // 80241D98
  c->r[3]=c->r[1]+0x00000080u; // 80241D9C
  c->lr=0x80241DA4u; f_800D1994(c); // 80241DA0
  c->r[31]=c->r[31]+0x00000020u; // 80241DA4
  c->r[27]=c->r[27]+0x00000001u; // 80241DA8
L_80241DAC:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 80241DAC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80241DB0
  cmpu(c,0,c->r[27],c->r[0]); // 80241DB4
  if (crb(c,0)) { IRQCHK(c); goto L_80241D00; } // 80241DB8
L_80241DBC:;
  c->r[5]=R16(c->r[26]+0x00000024u); // 80241DBC
  c->r[4]=c->r[1]+0x00000048u; // 80241DC0
  c->r[0]=R16(c->r[26]+0x00000026u); // 80241DC4
  c->r[3]=0u+0x00000001u; // 80241DC8
  W16(c->r[1]+0x00000048u,c->r[5]); // 80241DCC
  W16(c->r[1]+0x0000004Au,c->r[0]); // 80241DD0
  c->r[5]=R16(c->r[26]+0x00000028u); // 80241DD4
  c->r[0]=R16(c->r[26]+0x0000002Au); // 80241DD8
  W16(c->r[1]+0x0000004Cu,c->r[5]); // 80241DDC
  W16(c->r[1]+0x0000004Eu,c->r[0]); // 80241DE0
  c->lr=0x80241DE8u; f_800D2820(c); // 80241DE4
  c->r[5]=R16(c->r[26]+0x0000002Cu); // 80241DE8
  c->r[4]=c->r[1]+0x00000040u; // 80241DEC
  c->r[0]=R16(c->r[26]+0x0000002Eu); // 80241DF0
  c->r[3]=0u+0x00000002u; // 80241DF4
  W16(c->r[1]+0x00000040u,c->r[5]); // 80241DF8
  W16(c->r[1]+0x00000042u,c->r[0]); // 80241DFC
  c->r[5]=R16(c->r[26]+0x00000030u); // 80241E00
  c->r[0]=R16(c->r[26]+0x00000032u); // 80241E04
  W16(c->r[1]+0x00000044u,c->r[5]); // 80241E08
  W16(c->r[1]+0x00000046u,c->r[0]); // 80241E0C
  c->lr=0x80241E14u; f_800D2820(c); // 80241E10
  c->r[5]=R16(c->r[26]+0x00000034u); // 80241E14
  c->r[4]=c->r[1]+0x00000038u; // 80241E18
  c->r[0]=R16(c->r[26]+0x00000036u); // 80241E1C
  c->r[3]=0u+0x00000003u; // 80241E20
  W16(c->r[1]+0x00000038u,c->r[5]); // 80241E24
  W16(c->r[1]+0x0000003Au,c->r[0]); // 80241E28
  c->r[5]=R16(c->r[26]+0x00000038u); // 80241E2C
  c->r[0]=R16(c->r[26]+0x0000003Au); // 80241E30
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 80241E34
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 80241E38
  c->lr=0x80241E40u; f_800D2820(c); // 80241E3C
  c->r[0]=R8(c->r[26]+0x0000003Cu); // 80241E40
  c->r[4]=c->r[1]+0x0000001Cu; // 80241E44
  c->r[3]=0u+0x00000000u; // 80241E48
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 80241E4C
  c->r[0]=R8(c->r[26]+0x0000003Du); // 80241E50
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80241E54
  c->r[0]=R8(c->r[26]+0x0000003Eu); // 80241E58
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 80241E5C
  c->r[0]=R8(c->r[26]+0x0000003Fu); // 80241E60
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 80241E64
  c->lr=0x80241E6Cu; f_800D2884(c); // 80241E68
  c->r[0]=R8(c->r[26]+0x00000040u); // 80241E6C
  c->r[4]=c->r[1]+0x00000018u; // 80241E70
  c->r[3]=0u+0x00000001u; // 80241E74
  W8(c->r[1]+0x00000018u,c->r[0]); // 80241E78
  c->r[0]=R8(c->r[26]+0x00000041u); // 80241E7C
  W8(c->r[1]+0x00000019u,c->r[0]); // 80241E80
  c->r[0]=R8(c->r[26]+0x00000042u); // 80241E84
  W8(c->r[1]+0x0000001Au,c->r[0]); // 80241E88
  c->r[0]=R8(c->r[26]+0x00000043u); // 80241E8C
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 80241E90
  c->lr=0x80241E98u; f_800D2884(c); // 80241E94
  c->r[0]=R8(c->r[26]+0x00000044u); // 80241E98
  c->r[4]=c->r[1]+0x00000014u; // 80241E9C
  c->r[3]=0u+0x00000002u; // 80241EA0
  W8(c->r[1]+0x00000014u,c->r[0]); // 80241EA4
  c->r[0]=R8(c->r[26]+0x00000045u); // 80241EA8
  W8(c->r[1]+0x00000015u,c->r[0]); // 80241EAC
  c->r[0]=R8(c->r[26]+0x00000046u); // 80241EB0
  W8(c->r[1]+0x00000016u,c->r[0]); // 80241EB4
  c->r[0]=R8(c->r[26]+0x00000047u); // 80241EB8
  W8(c->r[1]+0x00000017u,c->r[0]); // 80241EBC
  c->lr=0x80241EC4u; f_800D2884(c); // 80241EC0
  c->r[0]=R8(c->r[26]+0x00000048u); // 80241EC4
  c->r[4]=c->r[1]+0x00000010u; // 80241EC8
  c->r[3]=0u+0x00000003u; // 80241ECC
  W8(c->r[1]+0x00000010u,c->r[0]); // 80241ED0
  c->r[0]=R8(c->r[26]+0x00000049u); // 80241ED4
  W8(c->r[1]+0x00000011u,c->r[0]); // 80241ED8
  c->r[0]=R8(c->r[26]+0x0000004Au); // 80241EDC
  W8(c->r[1]+0x00000012u,c->r[0]); // 80241EE0
  c->r[0]=R8(c->r[26]+0x0000004Bu); // 80241EE4
  W8(c->r[1]+0x00000013u,c->r[0]); // 80241EE8
  c->lr=0x80241EF0u; f_800D2884(c); // 80241EEC
  c->r[8]=R32(c->r[26]+0x0000004Cu); // 80241EF0
  c->r[0]=rotl(c->r[8],18)&0x00000001u; cr0(c,c->r[0]); // 80241EF4
  if (crb(c,2)) { goto L_80241F60; } // 80241EF8
  c->r[0]=rotl(c->r[8],8)&0x0000000Fu; // 80241EFC
  c->r[6]=rotl(c->r[8],27)&0x00000004u; // 80241F00
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80241F04
  c->r[5]=rotl(c->r[8],26)&0x00000004u; // 80241F08
  c->r[3]=rotl(c->r[8],14)&0x0000003Cu; // 80241F0C
  c->r[7]=R32(c->r[26]+0x00000058u); // 80241F10
  c->r[0]=rotl(c->r[8],9)&0x000001E0u; // 80241F14
  c->r[3]=c->r[3]+c->r[0]; // 80241F18
  c->r[0]=c->r[6]+c->r[5]; // 80241F1C
  c->r[23]=0u+0x00000000u; // 80241F20
  c->r[3]=c->r[4]+c->r[3]; // 80241F24
  c->r[0]=c->r[7]+c->r[0]; // 80241F28
  c->r[27]=c->r[3]+c->r[0]; // 80241F2C
L_80241F30:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80241F30
  c->r[3]=c->r[23]|c->r[23]; // 80241F34
  c->r[4]=rotl(c->r[0],0)&0x00000003u; // 80241F38
  c->r[5]=rotl(c->r[0],30)&0x00000003u; // 80241F3C
  c->r[6]=rotl(c->r[0],28)&0x00000003u; // 80241F40
  c->r[7]=rotl(c->r[0],26)&0x00000003u; // 80241F44
  c->lr=0x80241F4Cu; f_800D29BC(c); // 80241F48
  c->r[23]=c->r[23]+0x00000001u; // 80241F4C
  c->r[27]=c->r[27]+0x00000001u; // 80241F50
  cmps(c,0,(int32_t)c->r[23],4); // 80241F54
  if (crb(c,0)) { IRQCHK(c); goto L_80241F30; } // 80241F58
  goto L_80241FC0; // 80241F5C
L_80241F60:;
  c->r[3]=0u+0x00000000u; // 80241F60
  c->r[4]=0u+0x00000000u; // 80241F64
  c->r[5]=0u+0x00000001u; // 80241F68
  c->r[6]=0u+0x00000002u; // 80241F6C
  c->r[7]=0u+0x00000003u; // 80241F70
  c->lr=0x80241F78u; f_800D29BC(c); // 80241F74
  c->r[3]=0u+0x00000001u; // 80241F78
  c->r[4]=0u+0x00000000u; // 80241F7C
  c->r[5]=0u+0x00000000u; // 80241F80
  c->r[6]=0u+0x00000000u; // 80241F84
  c->r[7]=0u+0x00000003u; // 80241F88
  c->lr=0x80241F90u; f_800D29BC(c); // 80241F8C
  c->r[3]=0u+0x00000002u; // 80241F90
  c->r[4]=0u+0x00000001u; // 80241F94
  c->r[5]=0u+0x00000001u; // 80241F98
  c->r[6]=0u+0x00000001u; // 80241F9C
  c->r[7]=0u+0x00000003u; // 80241FA0
  c->lr=0x80241FA8u; f_800D29BC(c); // 80241FA4
  c->r[3]=0u+0x00000003u; // 80241FA8
  c->r[4]=0u+0x00000002u; // 80241FAC
  c->r[5]=0u+0x00000002u; // 80241FB0
  c->r[6]=0u+0x00000002u; // 80241FB4
  c->r[7]=0u+0x00000003u; // 80241FB8
  c->lr=0x80241FC0u; f_800D29BC(c); // 80241FBC
L_80241FC0:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 80241FC0
  c->r[27]=0u+0x00000000u; // 80241FC4
  W8(c->r[1]+0x0000002Cu,c->r[27]); // 80241FC8
  c->r[3]=rotl(c->r[0],23)&0x0000001Fu; cr0(c,c->r[3]); // 80241FCC
  W8(c->r[1]+0x0000002Du,c->r[27]); // 80241FD0
  W8(c->r[1]+0x0000002Eu,c->r[27]); // 80241FD4
  if (crb(c,2)) { goto L_802421A4; } // 80241FD8
  c->lr=0x80241FE0u; f_800D2C58(c); // 80241FDC
  c->r[9]=R32(c->r[26]+0x0000004Cu); // 80241FE0
  c->r[29]=c->r[1]+0x0000002Cu; // 80241FE4
  c->r[10]=R32(c->r[26]+0x00000058u); // 80241FE8
  c->r[28]=0u+0x00000000u; // 80241FEC
  c->r[3]=rotl(c->r[9],14)&0x00000003u; // 80241FF0
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 80241FF4
  c->r[0]=c->r[3]+c->r[0]; // 80241FF8
  c->r[5]=rotl(c->r[9],26)&0x00000004u; // 80241FFC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80242000
  c->r[3]=rotl(c->r[9],27)&0x00000004u; // 80242004
  c->r[0]=rotl(c->r[9],20)&0x00000004u; // 80242008
  c->r[7]=rotl(c->r[9],9)&0x000001E0u; // 8024200C
  c->r[6]=rotl(c->r[9],14)&0x0000003Cu; // 80242010
  c->r[0]=c->r[3]+c->r[0]; // 80242014
  c->r[4]=rotl(c->r[9],28)&0x00000004u; // 80242018
  c->r[5]=c->r[8]+c->r[5]; // 8024201C
  c->r[0]=c->r[4]+c->r[0]; // 80242020
  c->r[3]=rotl(c->r[9],29)&0x00000004u; // 80242024
  c->r[6]=c->r[7]+c->r[6]; // 80242028
  c->r[4]=rotl(c->r[9],19)&0x0000001Cu; // 8024202C
  c->r[3]=c->r[3]+c->r[0]; // 80242030
  c->r[31]=0u+0x00000001u; // 80242034
  c->r[0]=c->r[6]+c->r[5]; // 80242038
  c->r[3]=c->r[4]+c->r[3]; // 8024203C
  c->r[0]=c->r[10]+c->r[0]; // 80242040
  c->r[25]=c->r[3]+c->r[0]; // 80242044
  goto L_8024218C; // 80242048
L_8024204C:;
  c->r[0]=R8(c->r[25]+0x00000003u); // 8024204C
  c->r[3]=c->r[28]|c->r[28]; // 80242050
  c->r[5]=R8(c->r[25]+0x00000002u); // 80242054
  c->r[4]=R8(c->r[25]+0x00000000u); // 80242058
  c->r[5]=(rotl(c->r[0],8)&0x00000100u)|(c->r[5]&~0x00000100u); // 8024205C
  c->r[6]=R8(c->r[25]+0x00000001u); // 80242060
  c->lr=0x80242068u; f_800D2AFC(c); // 80242064
  c->r[0]=R8(c->r[25]+0x00000003u); // 80242068
  c->r[3]=c->r[28]|c->r[28]; // 8024206C
  c->r[4]=rotl(c->r[0],31)&0x00000003u; // 80242070
  c->r[5]=rotl(c->r[0],29)&0x00000003u; // 80242074
  c->lr=0x8024207Cu; f_800D2980(c); // 80242078
  c->r[0]=R8(c->r[25]+0x00000005u); // 8024207C
  c->r[3]=c->r[28]|c->r[28]; // 80242080
  c->r[5]=R8(c->r[25]+0x00000004u); // 80242084
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 80242088
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 8024208C
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 80242090
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 80242094
  c->lr=0x8024209Cu; f_800D2690(c); // 80242098
  c->r[6]=R8(c->r[25]+0x00000006u); // 8024209C
  c->r[3]=c->r[28]|c->r[28]; // 802420A0
  c->r[0]=R8(c->r[25]+0x00000007u); // 802420A4
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 802420A8
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 802420AC
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 802420B0
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 802420B4
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 802420B8
  c->lr=0x802420C0u; f_800D2710(c); // 802420BC
  c->r[0]=R8(c->r[25]+0x00000007u); // 802420C0
  c->r[3]=c->r[28]|c->r[28]; // 802420C4
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 802420C8
  c->lr=0x802420D0u; f_800D28E0(c); // 802420CC
  c->r[0]=R8(c->r[25]+0x00000009u); // 802420D0
  c->r[3]=c->r[28]|c->r[28]; // 802420D4
  c->r[5]=R8(c->r[25]+0x00000008u); // 802420D8
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 802420DC
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 802420E0
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 802420E4
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 802420E8
  c->lr=0x802420F0u; f_800D26D0(c); // 802420EC
  c->r[6]=R8(c->r[25]+0x0000000Au); // 802420F0
  c->r[3]=c->r[28]|c->r[28]; // 802420F4
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 802420F8
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 802420FC
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 80242100
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 80242104
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 80242108
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 8024210C
  c->lr=0x80242114u; f_800D2768(c); // 80242110
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 80242114
  c->r[3]=c->r[28]|c->r[28]; // 80242118
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 8024211C
  c->lr=0x80242124u; f_800D2930(c); // 80242120
  c->r[10]=R8(c->r[25]+0x0000000Fu); // 80242124
  c->r[3]=c->r[28]|c->r[28]; // 80242128
  c->r[6]=R8(c->r[25]+0x0000000Du); // 8024212C
  c->r[9]=R8(c->r[25]+0x0000000Eu); // 80242130
  c->r[4]=rotl(c->r[10],29)&0x00000001u; // 80242134
  c->r[24]=rotl(c->r[6],29)&0x0000000Fu; // 80242138
  c->r[0]=rotl(c->r[10],28)&0x00000003u; // 8024213C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80242140
  c->r[5]=rotl(c->r[10],0)&0x00000003u; // 80242144
  c->r[8]=rotl(c->r[9],0)&0x00000007u; // 80242148
  c->r[7]=c->r[24]|c->r[24]; // 8024214C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80242150
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 80242154
  c->r[9]=rotl(c->r[9],29)&0x00000007u; // 80242158
  c->r[10]=rotl(c->r[10],30)&0x00000001u; // 8024215C
  c->r[4]=R8(c->r[25]+0x0000000Cu); // 80242160
  c->lr=0x80242168u; f_800D21B0(c); // 80242164
  cmps(c,0,(int32_t)c->r[24],1); // 80242168
  if (crb(c,0)) { goto L_80242184; } // 8024216C
  cmps(c,0,(int32_t)c->r[24],3); // 80242170
  if (crb(c,1)) { goto L_80242184; } // 80242174
  c->r[3]=c->r[29]+c->r[24]; // 80242178
  c->r[27]=0u+0x00000001u; // 8024217C
  W8(c->r[3]+0xFFFFFFFFu,c->r[31]); // 80242180
L_80242184:;
  c->r[25]=c->r[25]+0x00000010u; // 80242184
  c->r[28]=c->r[28]+0x00000001u; // 80242188
L_8024218C:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8024218C
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 80242190
  cmpu(c,0,c->r[28],c->r[0]); // 80242194
  if (crb(c,0)) { IRQCHK(c); goto L_8024204C; } // 80242198
  c->r[29]=0u+0x00000001u; // 8024219C
  goto L_80242570; // 802421A0
L_802421A4:;
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 802421A4
  c->r[28]=0u+0x00000000u; // 802421A8
  if (!crb(c,2)) { goto L_80242200; } // 802421AC
  c->r[3]=0u+0x00000000u; // 802421B0
  c->r[4]=0u+0x000000FFu; // 802421B4
  c->r[5]=0u+0x000000FFu; // 802421B8
  c->r[6]=0u+0x00000004u; // 802421BC
  c->lr=0x802421C4u; f_800D2AFC(c); // 802421C0
  c->r[3]=0u+0x00000000u; // 802421C4
  c->r[4]=0u+0x0000000Fu; // 802421C8
  c->r[5]=0u+0x00000004u; // 802421CC
  c->r[6]=0u+0x0000000Au; // 802421D0
  c->r[7]=0u+0x0000000Fu; // 802421D4
  c->lr=0x802421DCu; f_800D2690(c); // 802421D8
  c->r[3]=0u+0x00000000u; // 802421DC
  c->r[4]=0u+0x00000007u; // 802421E0
  c->r[5]=0u+0x00000002u; // 802421E4
  c->r[6]=0u+0x00000005u; // 802421E8
  c->r[7]=0u+0x00000007u; // 802421EC
  c->lr=0x802421F4u; f_800D26D0(c); // 802421F0
  c->r[29]=0u+0x00000001u; // 802421F4
  c->r[28]=0u+0x00000001u; // 802421F8
  goto L_802424F8; // 802421FC
L_80242200:;
  cmpu(c,0,c->r[0],0x00000001u); // 80242200
  if (!crb(c,2)) { goto L_80242254; } // 80242204
  c->r[3]=0u+0x00000000u; // 80242208
  c->r[4]=0u+0x00000000u; // 8024220C
  c->r[5]=0u+0x00000000u; // 80242210
  c->r[6]=0u+0x000000FFu; // 80242214
  c->lr=0x8024221Cu; f_800D2AFC(c); // 80242218
  c->r[3]=0u+0x00000000u; // 8024221C
  c->r[4]=0u+0x00000002u; // 80242220
  c->r[5]=0u+0x00000004u; // 80242224
  c->r[6]=0u+0x00000008u; // 80242228
  c->r[7]=0u+0x0000000Fu; // 8024222C
  c->lr=0x80242234u; f_800D2690(c); // 80242230
  c->r[3]=0u+0x00000000u; // 80242234
  c->r[4]=0u+0x00000001u; // 80242238
  c->r[5]=0u+0x00000002u; // 8024223C
  c->r[6]=0u+0x00000004u; // 80242240
  c->r[7]=0u+0x00000007u; // 80242244
  c->lr=0x8024224Cu; f_800D26D0(c); // 80242248
  c->r[28]=0u+0x00000001u; // 8024224C
  goto L_802424A4; // 80242250
L_80242254:;
  cmpu(c,0,c->r[0],0x00000002u); // 80242254
  if (!crb(c,2)) { goto L_8024230C; } // 80242258
  c->r[3]=0u+0x00000000u; // 8024225C
  c->r[4]=0u+0x00000000u; // 80242260
  c->r[5]=0u+0x00000000u; // 80242264
  c->r[6]=0u+0x000000FFu; // 80242268
  c->lr=0x80242270u; f_800D2AFC(c); // 8024226C
  c->r[3]=0u+0x00000000u; // 80242270
  c->r[4]=0u+0x0000000Fu; // 80242274
  c->r[5]=0u+0x0000000Fu; // 80242278
  c->r[6]=0u+0x0000000Fu; // 8024227C
  c->r[7]=0u+0x00000008u; // 80242280
  c->lr=0x80242288u; f_800D2690(c); // 80242284
  c->r[3]=0u+0x00000000u; // 80242288
  c->r[4]=0u+0x00000007u; // 8024228C
  c->r[5]=0u+0x00000007u; // 80242290
  c->r[6]=0u+0x00000007u; // 80242294
  c->r[7]=0u+0x00000004u; // 80242298
  c->lr=0x802422A0u; f_800D26D0(c); // 8024229C
  c->r[3]=0u+0x00000001u; // 802422A0
  c->r[4]=0u+0x00000001u; // 802422A4
  c->r[5]=0u+0x00000001u; // 802422A8
  c->r[6]=0u+0x000000FFu; // 802422AC
  c->lr=0x802422B4u; f_800D2AFC(c); // 802422B0
  c->r[3]=0u+0x00000001u; // 802422B4
  c->r[4]=0u+0x00000008u; // 802422B8
  c->r[5]=0u+0x00000000u; // 802422BC
  c->r[6]=0u+0x0000000Eu; // 802422C0
  c->r[7]=0u+0x0000000Fu; // 802422C4
  c->lr=0x802422CCu; f_800D2690(c); // 802422C8
  c->r[3]=0u+0x00000001u; // 802422CC
  c->r[4]=0u+0x00000004u; // 802422D0
  c->r[5]=0u+0x00000000u; // 802422D4
  c->r[6]=0u+0x00000006u; // 802422D8
  c->r[7]=0u+0x00000007u; // 802422DC
  c->lr=0x802422E4u; f_800D26D0(c); // 802422E0
  c->r[4]=0u+0x802A0000u; // 802422E4
  c->r[3]=0u+0x00000001u; // 802422E8
  c->r[4]=R32(c->r[4]+0x000007B0u); // 802422EC
  c->lr=0x802422F4u; f_800D28E0(c); // 802422F0
  c->r[4]=0u+0x802A0000u; // 802422F4
  c->r[3]=0u+0x00000001u; // 802422F8
  c->r[4]=R32(c->r[4]+0x000007D0u); // 802422FC
  c->lr=0x80242304u; f_800D2930(c); // 80242300
  c->r[28]=0u+0x00000002u; // 80242304
  goto L_802423C0; // 80242308
L_8024230C:;
  c->r[24]=0u+0x802A0000u; // 8024230C
  c->r[25]=0u+0x802A0000u; // 80242310
  c->r[24]=c->r[24]+0x000007B0u; // 80242314
  c->r[23]=0u+0x00000000u; // 80242318
  c->r[25]=c->r[25]+0x000007D0u; // 8024231C
  goto L_802423B0; // 80242320
L_80242324:;
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 80242324
  c->r[4]=c->r[23]|c->r[23]; // 80242328
  c->r[3]=c->r[22]|c->r[22]; // 8024232C
  c->r[5]=c->r[23]|c->r[23]; // 80242330
  c->r[6]=0u+0x000000FFu; // 80242334
  c->lr=0x8024233Cu; f_800D2AFC(c); // 80242338
  cmps(c,0,(int32_t)c->r[23],0); // 8024233C
  c->r[7]=0u+0x00000000u; // 80242340
  if (!crb(c,2)) { goto L_8024234C; } // 80242344
  c->r[7]=0u+0x0000000Fu; // 80242348
L_8024234C:;
  cmps(c,0,(int32_t)c->r[23],0); // 8024234C
  c->r[31]=0u+0x00000000u; // 80242350
  if (!crb(c,2)) { goto L_8024235C; } // 80242354
  c->r[31]=0u+0x00000007u; // 80242358
L_8024235C:;
  c->r[3]=c->r[22]|c->r[22]; // 8024235C
  c->r[4]=0u+0x0000000Fu; // 80242360
  c->r[5]=0u+0x00000008u; // 80242364
  c->r[6]=0u+0x0000000Eu; // 80242368
  c->lr=0x80242370u; f_800D2690(c); // 8024236C
  c->r[3]=c->r[22]|c->r[22]; // 80242370
  c->r[7]=c->r[31]|c->r[31]; // 80242374
  c->r[4]=0u+0x00000007u; // 80242378
  c->r[5]=0u+0x00000004u; // 8024237C
  c->r[6]=0u+0x00000006u; // 80242380
  c->lr=0x80242388u; f_800D26D0(c); // 80242384
  c->r[4]=R32(c->r[24]+0x00000000u); // 80242388
  c->r[3]=c->r[22]|c->r[22]; // 8024238C
  c->lr=0x80242394u; f_800D28E0(c); // 80242390
  c->r[4]=R32(c->r[25]+0x00000000u); // 80242394
  c->r[3]=c->r[22]|c->r[22]; // 80242398
  c->lr=0x802423A0u; f_800D2930(c); // 8024239C
  c->r[28]=c->r[28]+0x00000001u; // 802423A0
  c->r[24]=c->r[24]+0x00000004u; // 802423A4
  c->r[25]=c->r[25]+0x00000004u; // 802423A8
  c->r[23]=c->r[23]+0x00000001u; // 802423AC
L_802423B0:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 802423B0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 802423B4
  cmpu(c,0,c->r[23],c->r[0]); // 802423B8
  if (crb(c,0)) { IRQCHK(c); goto L_80242324; } // 802423BC
L_802423C0:;
  c->r[3]=0u+0x80260000u; // 802423C0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000024u); // 802423C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00001A48u); // 802423C8
  c->r[5]=0u+0x00000000u; // 802423CC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802423D0
  if (!crb(c,2)) { goto L_80242410; } // 802423D4
  c->r[4]=c->r[3]+0x00001A48u; // 802423D8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000026u); // 802423DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 802423E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802423E4
  if (!crb(c,2)) { goto L_80242410; } // 802423E8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000028u); // 802423EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 802423F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802423F4
  if (!crb(c,2)) { goto L_80242410; } // 802423F8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000002Au); // 802423FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80242400
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80242404
  if (!crb(c,2)) { goto L_80242410; } // 80242408
  c->r[5]=0u+0x00000001u; // 8024240C
L_80242410:;
  cmps(c,0,(int32_t)c->r[5],0); // 80242410
  if (crb(c,2)) { goto L_80242458; } // 80242414
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000002Cu); // 80242418
  c->r[3]=0u+0x00000000u; // 8024241C
  cmps(c,0,(int32_t)c->r[0],255); // 80242420
  if (!crb(c,2)) { goto L_80242450; } // 80242424
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000002Eu); // 80242428
  cmps(c,0,(int32_t)c->r[0],255); // 8024242C
  if (!crb(c,2)) { goto L_80242450; } // 80242430
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000030u); // 80242434
  cmps(c,0,(int32_t)c->r[0],255); // 80242438
  if (!crb(c,2)) { goto L_80242450; } // 8024243C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000032u); // 80242440
  cmps(c,0,(int32_t)c->r[0],255); // 80242444
  if (!crb(c,2)) { goto L_80242450; } // 80242448
  c->r[3]=0u+0x00000001u; // 8024244C
L_80242450:;
  cmps(c,0,(int32_t)c->r[3],0); // 80242450
  if (!crb(c,2)) { goto L_802424A4; } // 80242454
L_80242458:;
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 80242458
  c->r[4]=0u+0x000000FFu; // 8024245C
  c->r[3]=c->r[22]|c->r[22]; // 80242460
  c->r[5]=0u+0x000000FFu; // 80242464
  c->r[6]=0u+0x000000FFu; // 80242468
  c->lr=0x80242470u; f_800D2AFC(c); // 8024246C
  c->r[3]=c->r[22]|c->r[22]; // 80242470
  c->r[4]=0u+0x00000002u; // 80242474
  c->r[5]=0u+0x00000004u; // 80242478
  c->r[6]=0u+0x00000000u; // 8024247C
  c->r[7]=0u+0x0000000Fu; // 80242480
  c->lr=0x80242488u; f_800D2690(c); // 80242484
  c->r[3]=c->r[22]|c->r[22]; // 80242488
  c->r[4]=0u+0x00000001u; // 8024248C
  c->r[5]=0u+0x00000002u; // 80242490
  c->r[6]=0u+0x00000000u; // 80242494
  c->r[7]=0u+0x00000007u; // 80242498
  c->lr=0x802424A0u; f_800D26D0(c); // 8024249C
  c->r[28]=c->r[28]+0x00000001u; // 802424A0
L_802424A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802424A4
  if (crb(c,2)) { goto L_802424F8; } // 802424A8
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 802424AC
  c->r[4]=0u+0x000000FFu; // 802424B0
  c->r[3]=c->r[22]|c->r[22]; // 802424B4
  c->r[5]=0u+0x000000FFu; // 802424B8
  c->r[6]=0u+0x00000004u; // 802424BC
  c->lr=0x802424C4u; f_800D2AFC(c); // 802424C0
  c->r[3]=c->r[22]|c->r[22]; // 802424C4
  c->r[4]=0u+0x0000000Fu; // 802424C8
  c->r[5]=0u+0x00000000u; // 802424CC
  c->r[6]=0u+0x0000000Au; // 802424D0
  c->r[7]=0u+0x0000000Fu; // 802424D4
  c->lr=0x802424DCu; f_800D2690(c); // 802424D8
  c->r[3]=c->r[22]|c->r[22]; // 802424DC
  c->r[4]=0u+0x00000007u; // 802424E0
  c->r[5]=0u+0x00000000u; // 802424E4
  c->r[6]=0u+0x00000005u; // 802424E8
  c->r[7]=0u+0x00000007u; // 802424EC
  c->lr=0x802424F4u; f_800D26D0(c); // 802424F0
  c->r[28]=c->r[28]+0x00000001u; // 802424F4
L_802424F8:;
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 802424F8
  c->r[23]=0u+0x00000000u; // 802424FC
  goto L_8024255C; // 80242500
L_80242504:;
  c->r[24]=rotl(c->r[23],0)&0x000000FFu; // 80242504
  c->r[4]=0u+0x00000000u; // 80242508
  c->r[3]=c->r[24]|c->r[24]; // 8024250C
  c->r[5]=0u+0x00000000u; // 80242510
  c->r[6]=0u+0x00000000u; // 80242514
  c->r[7]=0u+0x00000001u; // 80242518
  c->r[8]=0u+0x00000000u; // 8024251C
  c->lr=0x80242524u; f_800D2710(c); // 80242520
  c->r[3]=c->r[24]|c->r[24]; // 80242524
  c->r[4]=0u+0x00000000u; // 80242528
  c->r[5]=0u+0x00000000u; // 8024252C
  c->r[6]=0u+0x00000000u; // 80242530
  c->r[7]=0u+0x00000001u; // 80242534
  c->r[8]=0u+0x00000000u; // 80242538
  c->lr=0x80242540u; f_800D2768(c); // 8024253C
  c->r[3]=c->r[24]|c->r[24]; // 80242540
  c->lr=0x80242548u; f_800D255C(c); // 80242544
  c->r[3]=c->r[24]|c->r[24]; // 80242548
  c->r[4]=0u+0x00000000u; // 8024254C
  c->r[5]=0u+0x00000000u; // 80242550
  c->lr=0x80242558u; f_800D2980(c); // 80242554
  c->r[23]=c->r[23]+0x00000001u; // 80242558
L_8024255C:;
  c->r[0]=rotl(c->r[23],0)&0x000000FFu; // 8024255C
  cmpu(c,0,c->r[0],c->r[22]); // 80242560
  if (crb(c,0)) { IRQCHK(c); goto L_80242504; } // 80242564
  c->r[3]=c->r[22]|c->r[22]; // 80242568
  c->lr=0x80242570u; f_800D2C58(c); // 8024256C
L_80242570:;
  cmps(c,0,(int32_t)c->r[27],0); // 80242570
  if (crb(c,2)) { goto L_80242674; } // 80242574
  c->r[9]=R32(c->r[26]+0x0000004Cu); // 80242578
  c->r[3]=0u+0x80260000u; // 8024257C
  {uint32_t ea=c->r[3]+0x00001A5Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80242580
  c->r[31]=c->r[1]+0x0000002Cu; // 80242584
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 80242588
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 8024258C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80242590
  c->r[4]=rotl(c->r[9],26)&0x00000004u; // 80242594
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 80242598
  c->r[11]=R32(c->r[26]+0x00000058u); // 8024259C
  c->r[6]=rotl(c->r[9],27)&0x00000004u; // 802425A0
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 802425A4
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 802425A8
  c->r[10]=rotl(c->r[9],19)&0x0000001Cu; // 802425AC
  c->r[3]=c->r[3]+c->r[0]; // 802425B0
  c->r[9]=rotl(c->r[9],29)&0x00000004u; // 802425B4
  c->r[0]=c->r[10]+c->r[9]; // 802425B8
  c->r[6]=c->r[7]+c->r[6]; // 802425BC
  c->r[4]=c->r[8]+c->r[4]; // 802425C0
  c->r[3]=c->r[5]+c->r[3]; // 802425C4
  c->r[4]=c->r[6]+c->r[4]; // 802425C8
  c->r[0]=c->r[11]+c->r[0]; // 802425CC
  c->r[3]=c->r[4]+c->r[3]; // 802425D0
  c->r[27]=0u+0x00000000u; // 802425D4
  c->r[24]=c->r[3]+c->r[0]; // 802425D8
  goto L_80242664; // 802425DC
L_802425E0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 802425E0
  cmps(c,0,(int32_t)c->r[0],0); // 802425E4
  if (crb(c,2)) { goto L_80242658; } // 802425E8
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802425EC
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 802425F0
  c->lr=0x802425F8u; f_80247BC8(c); // 802425F4
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802425F8
  c->f[31]=c->f[1]; // 802425FC
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 80242600
  c->lr=0x80242608u; f_80247B54(c); // 80242604
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80242608
  c->f[2]=-c->f[1]; // 8024260C
  c->r[3]=c->r[27]+0x00000001u; // 80242610
  c->r[4]=c->r[1]+0x00000068u; // 80242614
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80242618
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8024261C
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80242620
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80242624
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80242628
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024262C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80242630
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80242634
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80242638
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8024263C
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80242640
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80242644
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80242648
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024264C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80242650
  c->lr=0x80242658u; f_8023F7F0(c); // 80242654
L_80242658:;
  c->r[31]=c->r[31]+0x00000001u; // 80242658
  c->r[24]=c->r[24]+0x00000014u; // 8024265C
  c->r[27]=c->r[27]+0x00000001u; // 80242660
L_80242664:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 80242664
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 80242668
  cmpu(c,0,c->r[27],c->r[0]); // 8024266C
  if (crb(c,0)) { IRQCHK(c); goto L_802425E0; } // 80242670
L_80242674:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 80242674
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 80242678
  c->lr=0x80242680u; f_800D253C(c); // 8024267C
  c->r[0]=R32(c->r[26]+0x00000050u); // 80242680
  c->r[0]=rotl(c->r[0],17)&0x00000007u; cr0(c,c->r[0]); // 80242684
  if (crb(c,2)) { goto L_80242718; } // 80242688
  c->r[9]=R32(c->r[26]+0x0000004Cu); // 8024268C
  c->r[27]=0u+0x00000000u; // 80242690
  c->r[10]=R32(c->r[26]+0x00000058u); // 80242694
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 80242698
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 8024269C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802426A0
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 802426A4
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 802426A8
  c->r[5]=rotl(c->r[9],27)&0x00000004u; // 802426AC
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 802426B0
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 802426B4
  c->r[0]=c->r[3]+c->r[0]; // 802426B8
  c->r[5]=c->r[7]+c->r[5]; // 802426BC
  c->r[3]=c->r[8]+c->r[6]; // 802426C0
  c->r[6]=rotl(c->r[9],29)&0x00000004u; // 802426C4
  c->r[3]=c->r[5]+c->r[3]; // 802426C8
  c->r[0]=c->r[4]+c->r[0]; // 802426CC
  c->r[3]=c->r[6]+c->r[3]; // 802426D0
  c->r[0]=c->r[10]+c->r[0]; // 802426D4
  c->r[24]=c->r[3]+c->r[0]; // 802426D8
  goto L_80242708; // 802426DC
L_802426E0:;
  c->r[4]=R8(c->r[24]+0x00000000u); // 802426E0
  c->r[3]=c->r[27]|c->r[27]; // 802426E4
  c->r[5]=R8(c->r[24]+0x00000001u); // 802426E8
  c->lr=0x802426F0u; f_800D2470(c); // 802426EC
  c->r[4]=R8(c->r[24]+0x00000002u); // 802426F0
  c->r[3]=c->r[27]|c->r[27]; // 802426F4
  c->r[5]=R8(c->r[24]+0x00000003u); // 802426F8
  c->lr=0x80242700u; f_800D236C(c); // 802426FC
  c->r[24]=c->r[24]+0x00000004u; // 80242700
  c->r[27]=c->r[27]+0x00000001u; // 80242704
L_80242708:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 80242708
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 8024270C
  cmpu(c,0,c->r[27],c->r[0]); // 80242710
  if (crb(c,0)) { IRQCHK(c); goto L_802426E0; } // 80242714
L_80242718:;
  c->r[7]=R32(c->r[26]+0x0000004Cu); // 80242718
  c->r[0]=rotl(c->r[7],26)&0x00000001u; cr0(c,c->r[0]); // 8024271C
  if (crb(c,2)) { goto L_8024277C; } // 80242720
  c->r[5]=rotl(c->r[7],20)&0x00000004u; // 80242724
  c->r[0]=rotl(c->r[7],27)&0x00000004u; // 80242728
  c->r[0]=c->r[5]+c->r[0]; // 8024272C
  c->r[4]=rotl(c->r[7],26)&0x00000004u; // 80242730
  c->r[3]=rotl(c->r[7],8)&0x0000000Fu; // 80242734
  c->r[6]=rotl(c->r[7],14)&0x0000003Cu; // 80242738
  c->r[0]=c->r[4]+c->r[0]; // 8024273C
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 80242740
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80242744
  c->r[7]=R32(c->r[26]+0x00000058u); // 80242748
  c->r[3]=c->r[6]+c->r[5]; // 8024274C
  c->r[0]=c->r[7]+c->r[0]; // 80242750
  c->r[3]=c->r[4]+c->r[3]; // 80242754
  c->r[6]=c->r[3]+c->r[0]; // 80242758
  c->r[0]=R8(c->r[3]+c->r[0]); // 8024275C
  c->r[4]=R8(c->r[6]+0x00000002u); // 80242760
  c->r[5]=R8(c->r[6]+0x00000001u); // 80242764
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 80242768
  c->r[7]=R8(c->r[6]+0x00000003u); // 8024276C
  c->r[6]=rotl(c->r[0],28)&0x0000000Fu; // 80242770
  c->lr=0x80242778u; f_800D2A38(c); // 80242774
  goto L_80242794; // 80242778
L_8024277C:;
  c->r[3]=0u+0x00000007u; // 8024277C
  c->r[4]=0u+0x00000000u; // 80242780
  c->r[5]=0u+0x00000000u; // 80242784
  c->r[6]=0u+0x00000007u; // 80242788
  c->r[7]=0u+0x00000000u; // 8024278C
  c->lr=0x80242794u; f_800D2A38(c); // 80242790
L_80242794:;
  c->r[3]=R32(c->r[26]+0x0000004Cu); // 80242794
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 80242798
  if (crb(c,2)) { goto L_802427F8; } // 8024279C
  c->r[4]=rotl(c->r[3],8)&0x0000000Fu; // 802427A0
  c->r[8]=rotl(c->r[3],28)&0x00000004u; // 802427A4
  c->r[0]=rotl(c->r[3],26)&0x00000004u; // 802427A8
  c->r[7]=rotl(c->r[3],20)&0x00000004u; // 802427AC
  c->r[6]=rotl(c->r[3],27)&0x00000004u; // 802427B0
  c->r[5]=rotl(c->r[3],14)&0x0000003Cu; // 802427B4
  c->r[3]=rotl(c->r[3],9)&0x000001E0u; // 802427B8
  c->r[0]=c->r[8]+c->r[0]; // 802427BC
  c->r[6]=c->r[7]+c->r[6]; // 802427C0
  c->r[7]=R32(c->r[26]+0x00000058u); // 802427C4
  c->r[0]=c->r[6]+c->r[0]; // 802427C8
  c->r[3]=c->r[5]+c->r[3]; // 802427CC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 802427D0
  c->r[0]=c->r[7]+c->r[0]; // 802427D4
  c->r[3]=c->r[4]+c->r[3]; // 802427D8
  c->r[6]=c->r[3]+c->r[0]; // 802427DC
  c->r[3]=R8(c->r[3]+c->r[0]); // 802427E0
  c->r[4]=R8(c->r[6]+0x00000001u); // 802427E4
  c->r[5]=R8(c->r[6]+0x00000002u); // 802427E8
  c->r[6]=R8(c->r[6]+0x00000003u); // 802427EC
  c->lr=0x802427F4u; f_800D312C(c); // 802427F0
  goto L_8024280C; // 802427F4
L_802427F8:;
  c->r[3]=0u+0x00000001u; // 802427F8
  c->r[4]=0u+0x00000004u; // 802427FC
  c->r[5]=0u+0x00000005u; // 80242800
  c->r[6]=0u+0x0000000Fu; // 80242804
  c->lr=0x8024280Cu; f_800D312C(c); // 80242808
L_8024280C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8024280C
  c->r[3]=0u+0x00000000u; // 80242810
  if (crb(c,2)) { goto L_80242824; } // 80242814
  cmps(c,0,(int32_t)c->r[30],0); // 80242818
  if (crb(c,2)) { goto L_80242824; } // 8024281C
  c->r[3]=0u+0x00000001u; // 80242820
L_80242824:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 80242824
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 80242828
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 8024282C
  c->r[11]=c->r[1]+0x00000100u; // 80242830
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 80242834
  c->lr=0x8024283Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80242838
  c->r[0]=R32(c->r[1]+0x00000124u); // 8024283C
  c->lr=c->r[0]; // 80242840
  c->r[1]=c->r[1]+0x00000120u; // 80242844
  return; // 80242848
}

// BindAnimation__Q36nw4hbm3lyt8MaterialFPQ36nw4hbm3lyt13AnimTransform
void f_8024284C(Ctx* __restrict c) {
  trace_call(0x8024284Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 8024284C
  c->r[0]=c->r[3]|c->r[3]; // 80242850
  c->r[3]=c->r[4]|c->r[4]; // 80242854
  c->r[12]=R32(c->r[12]+0x00000014u); // 80242858
  c->r[4]=c->r[0]|c->r[0]; // 8024285C
  c->ctr=c->r[12]; // 80242860
  if (true) { dispatch(c,c->ctr); return; } // 80242864
}

// UnbindAnimation__Q36nw4hbm3lyt8MaterialFPQ36nw4hbm3lyt13AnimTransform
void f_80242868(Ctx* __restrict c) {
  trace_call(0x80242868u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80242868
  c->r[0]=c->lr; // 8024286C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80242870
  c->r[11]=c->r[1]+0x00000030u; // 80242874
  c->lr=0x8024287Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80242878
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 8024287C
  c->r[26]=c->r[3]|c->r[3]; // 80242880
  c->r[27]=c->r[4]|c->r[4]; // 80242884
  c->r[30]=c->r[3]+0x0000001Cu; // 80242888
  c->r[29]=0u+0x00000000u; // 8024288C
  goto L_802428C8; // 80242890
L_80242894:;
  cmps(c,0,(int32_t)c->r[27],0); // 80242894
  c->r[28]=c->r[31]|c->r[31]; // 80242898
  c->r[31]=R32(c->r[31]+0x00000000u); // 8024289C
  if (crb(c,2)) { goto L_802428B0; } // 802428A0
  c->r[0]=R32(c->r[28]+0x00000008u); // 802428A4
  cmpu(c,0,c->r[0],c->r[27]); // 802428A8
  if (!crb(c,2)) { goto L_802428C8; } // 802428AC
L_802428B0:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 802428B0
  c->r[3]=c->r[26]+0x00000018u; // 802428B4
  c->r[4]=c->r[1]+0x00000008u; // 802428B8
  c->lr=0x802428C0u; f_80249B78(c); // 802428BC
  W32(c->r[28]+0x00000008u,c->r[29]); // 802428C0
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 802428C4
L_802428C8:;
  cmpu(c,0,c->r[31],c->r[30]); // 802428C8
  if (!crb(c,2)) { IRQCHK(c); goto L_80242894; } // 802428CC
  c->r[11]=c->r[1]+0x00000030u; // 802428D0
  c->lr=0x802428D8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802428D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802428D8
  c->lr=c->r[0]; // 802428DC
  c->r[1]=c->r[1]+0x00000030u; // 802428E0
  return; // 802428E4
}

// UnbindAllAnimation__Q36nw4hbm3lyt8MaterialFv
void f_802428E8(Ctx* __restrict c) {
  trace_call(0x802428E8u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 802428E8
  c->r[4]=0u+0x00000000u; // 802428EC
  c->r[12]=R32(c->r[12]+0x00000014u); // 802428F0
  c->ctr=c->r[12]; // 802428F4
  if (true) { dispatch(c,c->ctr); return; } // 802428F8
}

// Animate__Q36nw4hbm3lyt8MaterialFv
void f_802428FC(Ctx* __restrict c) {
  trace_call(0x802428FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802428FC
  c->r[0]=c->lr; // 80242900
  W32(c->r[1]+0x00000024u,c->r[0]); // 80242904
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80242908
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024290C
  c->r[30]=c->r[3]+0x0000001Cu; // 80242910
  W32(c->r[1]+0x00000014u,c->r[29]); // 80242914
  c->r[29]=c->r[3]|c->r[3]; // 80242918
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 8024291C
  goto L_80242950; // 80242920
L_80242924:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 80242924
  cmps(c,0,(int32_t)c->r[0],0); // 80242928
  if (!crb(c,2)) { goto L_8024294C; } // 8024292C
  c->r[3]=R32(c->r[31]+0x00000008u); // 80242930
  c->r[5]=c->r[29]|c->r[29]; // 80242934
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 80242938
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024293C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80242940
  c->ctr=c->r[12]; // 80242944
  if (true) { c->lr=0x8024294Cu; dispatch(c,c->ctr); } // 80242948
L_8024294C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8024294C
L_80242950:;
  cmpu(c,0,c->r[31],c->r[30]); // 80242950
  if (!crb(c,2)) { IRQCHK(c); goto L_80242924; } // 80242954
  c->r[0]=R32(c->r[1]+0x00000024u); // 80242958
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024295C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80242960
  c->r[29]=R32(c->r[1]+0x00000014u); // 80242964
  c->lr=c->r[0]; // 80242968
  c->r[1]=c->r[1]+0x00000020u; // 8024296C
  return; // 80242970
}

// AddAnimationLink__Q36nw4hbm3lyt8MaterialFPQ36nw4hbm3lyt13AnimationLink
void f_80242974(Ctx* __restrict c) {
  trace_call(0x80242974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80242974
  c->r[0]=c->lr; // 80242978
  c->r[5]=c->r[4]|c->r[4]; // 8024297C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80242980
  c->r[0]=c->r[3]+0x0000001Cu; // 80242984
  c->r[3]=c->r[3]+0x00000018u; // 80242988
  c->r[4]=c->r[1]+0x00000008u; // 8024298C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80242990
  c->lr=0x80242998u; f_80249BC0(c); // 80242994
  c->r[0]=R32(c->r[1]+0x00000014u); // 80242998
  c->lr=c->r[0]; // 8024299C
  c->r[1]=c->r[1]+0x00000010u; // 802429A0
  return; // 802429A4
}

// FindAnimationLink__Q36nw4hbm3lyt8MaterialFPQ36nw4hbm3lyt13AnimTransform
void f_802429A8(Ctx* __restrict c) {
  trace_call(0x802429A8u);
  c->r[3]=c->r[3]+0x00000018u; // 802429A8
  f_8023D30C(c); return; // 802429AC
}

// SetAnimationEnable__Q36nw4hbm3lyt8MaterialFPQ36nw4hbm3lyt13AnimTransformb
void f_802429B0(Ctx* __restrict c) {
  trace_call(0x802429B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802429B0
  c->r[0]=c->lr; // 802429B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802429B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802429BC
  c->r[31]=c->r[5]|c->r[5]; // 802429C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802429C4
  c->r[12]=R32(c->r[12]+0x00000020u); // 802429C8
  c->ctr=c->r[12]; // 802429CC
  if (true) { c->lr=0x802429D4u; dispatch(c,c->ctr); } // 802429D0
  cmps(c,0,(int32_t)c->r[3],0); // 802429D4
  if (crb(c,2)) { goto L_802429E8; } // 802429D8
  c->r[0]=cntlz(c->r[31]); // 802429DC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802429E0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 802429E4
L_802429E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802429E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802429EC
  c->lr=c->r[0]; // 802429F0
  c->r[1]=c->r[1]+0x00000010u; // 802429F4
  return; // 802429F8
}

// GetTextureSize__Q36nw4hbm3lyt6detailFPQ36nw4hbm3lyt8MaterialUc
void f_802429FC(Ctx* __restrict c) {
  trace_call(0x802429FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802429FC
  c->r[0]=c->lr; // 80242A00
  W32(c->r[1]+0x00000064u,c->r[0]); // 80242A04
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80242A08
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80242A0C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80242A10
  c->r[31]=c->r[3]|c->r[3]; // 80242A14
  W32(c->r[1]+0x00000048u,c->r[30]); // 80242A18
  W32(c->r[1]+0x00000044u,c->r[29]); // 80242A1C
  c->r[0]=R32(c->r[4]+0x00000050u); // 80242A20
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80242A24
  cmpu(c,0,c->r[5],c->r[0]); // 80242A28
  if (crb(c,0)) { goto L_80242A44; } // 80242A2C
  c->r[4]=0u+0x80260000u; // 80242A30
  {uint32_t ea=c->r[4]+0x00001A60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80242A34
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80242A38
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80242A3C
  goto L_80242AE8; // 80242A40
L_80242A44:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 80242A44
  c->r[6]=R32(c->r[4]+0x00000058u); // 80242A48
  {uint32_t ea=c->r[6]+c->r[0]; c->r[5]=R32(ea); c->r[6]=ea;} // 80242A4C
  c->r[3]=c->r[1]+0x00000008u; // 80242A50
  c->r[4]=0u+0x00000000u; // 80242A54
  c->r[0]=R32(c->r[6]+0x00000004u); // 80242A58
  W32(c->r[1]+0x00000008u,c->r[5]); // 80242A5C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80242A60
  c->r[5]=R32(c->r[6]+0x00000008u); // 80242A64
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 80242A68
  W32(c->r[1]+0x00000010u,c->r[5]); // 80242A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80242A70
  c->r[5]=R32(c->r[6]+0x00000010u); // 80242A74
  c->r[0]=R32(c->r[6]+0x00000014u); // 80242A78
  W32(c->r[1]+0x00000018u,c->r[5]); // 80242A7C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80242A80
  c->r[5]=R32(c->r[6]+0x00000018u); // 80242A84
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 80242A88
  W32(c->r[1]+0x00000020u,c->r[5]); // 80242A8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80242A90
  c->lr=0x80242A98u; f_800D16E8(c); // 80242A94
  c->r[3]=c->r[1]+0x00000008u; // 80242A98
  c->lr=0x80242AA0u; f_800D170C(c); // 80242A9C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80242AA0
  c->r[30]=0u+0x43300000u; // 80242AA4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80242AA8
  c->r[29]=0u+0x80260000u; // 80242AAC
  {uint32_t ea=c->r[29]+0x00001A70u; c->f[1]=RF64(ea);} // 80242AB0
  c->r[3]=c->r[1]+0x00000008u; // 80242AB4
  W32(c->r[1]+0x00000028u,c->r[30]); // 80242AB8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 80242ABC
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 80242AC0
  c->lr=0x80242AC8u; f_800D16F8(c); // 80242AC4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80242AC8
  W32(c->r[1]+0x00000030u,c->r[30]); // 80242ACC
  {uint32_t ea=c->r[29]+0x00001A70u; c->f[1]=RF64(ea);} // 80242AD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80242AD4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80242AD8
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[31]);} // 80242ADC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80242AE0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80242AE4
L_80242AE8:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80242AE8
  c->r[0]=R32(c->r[1]+0x00000064u); // 80242AEC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80242AF0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80242AF4
  c->r[30]=R32(c->r[1]+0x00000048u); // 80242AF8
  c->r[29]=R32(c->r[1]+0x00000044u); // 80242AFC
  c->lr=c->r[0]; // 80242B00
  c->r[1]=c->r[1]+0x00000060u; // 80242B04
  return; // 80242B08
}

// __ct__Q36nw4hbm3lyt4PaneFPCQ46nw4hbm3lyt3res4Pane
void f_80242B0C(Ctx* __restrict c) {
  trace_call(0x80242B0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80242B0C
  c->r[0]=c->lr; // 80242B10
  c->r[5]=0u+0x80260000u; // 80242B14
  c->r[6]=0u+0x802A0000u; // 80242B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80242B1C
  c->r[7]=0u+0x00000000u; // 80242B20
  {uint32_t ea=c->r[5]+0x00001A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 80242B24
  c->r[8]=c->r[3]+0x00000014u; // 80242B28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80242B2C
  c->r[9]=c->r[3]+0x00000020u; // 80242B30
  c->r[0]=R8(c->r[4]+0x00000009u); // 80242B34
  c->r[31]=c->r[4]|c->r[4]; // 80242B38
  W32(c->r[1]+0x00000008u,c->r[30]); // 80242B3C
  c->r[6]=c->r[6]+0x00000838u; // 80242B40
  c->r[30]=c->r[3]|c->r[3]; // 80242B44
  c->r[5]=0u+0x00000010u; // 80242B48
  W32(c->r[3]+0x00000014u,c->r[7]); // 80242B4C
  c->r[4]=c->r[4]+0x0000000Cu; // 80242B50
  W32(c->r[3]+0x00000018u,c->r[7]); // 80242B54
  W32(c->r[3]+0x00000020u,c->r[7]); // 80242B58
  W32(c->r[3]+0x00000024u,c->r[7]); // 80242B5C
  W32(c->r[3]+0x00000004u,c->r[7]); // 80242B60
  W32(c->r[3]+0x00000008u,c->r[7]); // 80242B64
  W32(c->r[3]+0x00000000u,c->r[6]); // 80242B68
  W32(c->r[3]+0x00000010u,c->r[7]); // 80242B6C
  W32(c->r[3]+0x00000014u,c->r[8]); // 80242B70
  W32(c->r[3]+0x00000018u,c->r[8]); // 80242B74
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 80242B78
  W32(c->r[3]+0x00000020u,c->r[9]); // 80242B7C
  W32(c->r[3]+0x00000024u,c->r[9]); // 80242B80
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80242B84
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80242B88
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 80242B8C
  W32(c->r[3]+0x00000028u,c->r[7]); // 80242B90
  W8(c->r[3]+0x000000D0u,c->r[7]); // 80242B94
  W8(c->r[3]+0x000000CCu,c->r[0]); // 80242B98
  c->r[3]=c->r[3]+0x000000B4u; // 80242B9C
  c->lr=0x80242BA4u; f_800DBA68(c); // 80242BA0
  c->r[3]=c->r[30]+0x000000C4u; // 80242BA4
  c->r[4]=c->r[31]+0x0000001Cu; // 80242BA8
  c->r[5]=0u+0x00000008u; // 80242BAC
  c->lr=0x80242BB4u; f_800DBA68(c); // 80242BB0
  c->r[4]=R8(c->r[31]+0x0000000Au); // 80242BB4
  c->r[3]=c->r[30]|c->r[30]; // 80242BB8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 80242BBC
  {uint32_t ea=c->r[31]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 80242BC0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80242BC4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 80242BC8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 80242BCC
  {uint32_t ea=c->r[31]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 80242BD0
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80242BD4
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80242BD8
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80242BDC
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80242BE0
  c->r[0]=R8(c->r[31]+0x00000008u); // 80242BE4
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[9]);} // 80242BE8
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[8]);} // 80242BEC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[7]);} // 80242BF0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[6]);} // 80242BF4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[5]);} // 80242BF8
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[4]);} // 80242BFC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[3]);} // 80242C00
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 80242C04
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 80242C08
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 80242C0C
  W8(c->r[30]+0x000000CDu,c->r[4]); // 80242C10
  W8(c->r[30]+0x000000CEu,c->r[4]); // 80242C14
  W8(c->r[30]+0x000000CFu,c->r[0]); // 80242C18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80242C1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80242C20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80242C24
  c->lr=c->r[0]; // 80242C28
  c->r[1]=c->r[1]+0x00000010u; // 80242C2C
  return; // 80242C30
}

// __dt__Q36nw4hbm3lyt4PaneFv
void f_80242C34(Ctx* __restrict c) {
  trace_call(0x80242C34u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80242C34
  c->r[0]=c->lr; // 80242C38
  W32(c->r[1]+0x00000034u,c->r[0]); // 80242C3C
  c->r[11]=c->r[1]+0x00000030u; // 80242C40
  c->lr=0x80242C48u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80242C44
  cmps(c,0,(int32_t)c->r[3],0); // 80242C48
  c->r[26]=c->r[3]|c->r[3]; // 80242C4C
  c->r[27]=c->r[4]|c->r[4]; // 80242C50
  if (crb(c,2)) { goto L_80242D4C; } // 80242C54
  c->r[4]=0u+0x802A0000u; // 80242C58
  c->r[31]=R32(c->r[3]+0x00000014u); // 80242C5C
  c->r[4]=c->r[4]+0x00000838u; // 80242C60
  c->r[30]=c->r[3]+0x00000014u; // 80242C64
  W32(c->r[3]+0x00000000u,c->r[4]); // 80242C68
  c->r[29]=0u+0x80360000u; // 80242C6C
  goto L_80242CC0; // 80242C70
L_80242C74:;
  c->r[28]=c->r[31]|c->r[31]; // 80242C74
  c->r[31]=R32(c->r[31]+0x00000000u); // 80242C78
  c->r[3]=c->r[26]+0x00000010u; // 80242C7C
  c->r[4]=c->r[1]+0x00000008u; // 80242C80
  W32(c->r[1]+0x00000008u,c->r[28]); // 80242C84
  c->lr=0x80242C8Cu; f_80249B78(c); // 80242C88
  c->r[0]=R8(c->r[28]+0x000000CCu); // 80242C8C
  cmps(c,0,(int32_t)c->r[0],0); // 80242C90
  if (!crb(c,2)) { goto L_80242CC0; } // 80242C94
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 80242C98
  c->r[4]=0u+0xFFFFFFFFu; // 80242C9C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80242CA0
  c->r[3]=c->r[28]|c->r[28]; // 80242CA4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80242CA8
  c->ctr=c->r[12]; // 80242CAC
  if (true) { c->lr=0x80242CB4u; dispatch(c,c->ctr); } // 80242CB0
  c->r[3]=R32(c->r[29]+0xFFFFCE20u); // 80242CB4
  c->r[4]=c->r[28]|c->r[28]; // 80242CB8
  c->lr=0x80242CC0u; f_800EE138(c); // 80242CBC
L_80242CC0:;
  cmpu(c,0,c->r[31],c->r[30]); // 80242CC0
  if (!crb(c,2)) { IRQCHK(c); goto L_80242C74; } // 80242CC4
  c->r[12]=R32(c->r[26]+0x00000000u); // 80242CC8
  c->r[3]=c->r[26]|c->r[26]; // 80242CCC
  c->r[4]=0u+0x00000000u; // 80242CD0
  c->r[12]=R32(c->r[12]+0x00000050u); // 80242CD4
  c->ctr=c->r[12]; // 80242CD8
  if (true) { c->lr=0x80242CE0u; dispatch(c,c->ctr); } // 80242CDC
  c->r[3]=R32(c->r[26]+0x00000028u); // 80242CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80242CE4
  if (crb(c,2)) { goto L_80242D1C; } // 80242CE8
  c->r[0]=R8(c->r[3]+0x00000054u); // 80242CEC
  cmps(c,0,(int32_t)c->r[0],0); // 80242CF0
  if (!crb(c,2)) { goto L_80242D1C; } // 80242CF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80242CF8
  c->r[4]=0u+0xFFFFFFFFu; // 80242CFC
  c->r[12]=R32(c->r[12]+0x00000008u); // 80242D00
  c->ctr=c->r[12]; // 80242D04
  if (true) { c->lr=0x80242D0Cu; dispatch(c,c->ctr); } // 80242D08
  c->r[3]=0u+0x80360000u; // 80242D0C
  c->r[4]=R32(c->r[26]+0x00000028u); // 80242D10
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 80242D14
  c->lr=0x80242D1Cu; f_800EE138(c); // 80242D18
L_80242D1C:;
  c->r[3]=addc(c,c->r[26],0x0000001Cu,0); cr0(c,c->r[3]); // 80242D1C
  if (crb(c,2)) { goto L_80242D2C; } // 80242D20
  c->r[4]=0u+0x00000000u; // 80242D24
  c->lr=0x80242D2Cu; f_80249AF4(c); // 80242D28
L_80242D2C:;
  c->r[3]=addc(c,c->r[26],0x00000010u,0); cr0(c,c->r[3]); // 80242D2C
  if (crb(c,2)) { goto L_80242D3C; } // 80242D30
  c->r[4]=0u+0x00000000u; // 80242D34
  c->lr=0x80242D3Cu; f_80249AF4(c); // 80242D38
L_80242D3C:;
  cmps(c,0,(int32_t)c->r[27],0); // 80242D3C
  if (!crb(c,1)) { goto L_80242D4C; } // 80242D40
  c->r[3]=c->r[26]|c->r[26]; // 80242D44
  c->lr=0x80242D4Cu; f_8008DE54(c); // 80242D48
L_80242D4C:;
  c->r[11]=c->r[1]+0x00000030u; // 80242D4C
  c->r[3]=c->r[26]|c->r[26]; // 80242D50
  c->lr=0x80242D58u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80242D54
  c->r[0]=R32(c->r[1]+0x00000034u); // 80242D58
  c->lr=c->r[0]; // 80242D5C
  c->r[1]=c->r[1]+0x00000030u; // 80242D60
  return; // 80242D64
}

// AppendChild__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt4Pane
void f_80242D68(Ctx* __restrict c) {
  trace_call(0x80242D68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80242D68
  c->r[0]=c->lr; // 80242D6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80242D70
  c->r[0]=c->r[3]+0x00000014u; // 80242D74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80242D78
  c->r[31]=c->r[4]|c->r[4]; // 80242D7C
  c->r[4]=c->r[1]+0x00000008u; // 80242D80
  W32(c->r[1]+0x00000018u,c->r[30]); // 80242D84
  c->r[30]=c->r[3]|c->r[3]; // 80242D88
  c->r[3]=c->r[3]+0x00000010u; // 80242D8C
  c->r[5]=c->r[31]+0x00000004u; // 80242D90
  W32(c->r[1]+0x00000008u,c->r[0]); // 80242D94
  c->lr=0x80242D9Cu; f_80249BC0(c); // 80242D98
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 80242D9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80242DA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80242DA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80242DA8
  c->lr=c->r[0]; // 80242DAC
  c->r[1]=c->r[1]+0x00000020u; // 80242DB0
  return; // 80242DB4
}

// GetPaneRect__Q36nw4hbm3lyt4PaneCFRCQ36nw4hbm3lyt8DrawInfo
void f_80242DB8(Ctx* __restrict c) {
  trace_call(0x80242DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80242DB8
  c->r[0]=c->lr; // 80242DBC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80242DC0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80242DC4
  c->r[31]=0u+0x80260000u; // 80242DC8
  {uint32_t ea=c->r[31]+0x00001A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 80242DCC
  W32(c->r[1]+0x00000028u,c->r[30]); // 80242DD0
  c->r[30]=c->r[5]|c->r[5]; // 80242DD4
  W32(c->r[1]+0x00000024u,c->r[29]); // 80242DD8
  c->r[29]=c->r[4]|c->r[4]; // 80242DDC
  W32(c->r[1]+0x00000020u,c->r[28]); // 80242DE0
  c->r[28]=c->r[3]|c->r[3]; // 80242DE4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80242DE8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80242DEC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80242DF0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80242DF4
  c->r[3]=c->r[29]|c->r[29]; // 80242DF8
  c->lr=0x80242E00u; f_80243968(c); // 80242DFC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80242E00
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80242E04
  W32(c->r[1]+0x00000010u,c->r[3]); // 80242E08
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80242E0C
  {uint32_t ea=c->r[31]+0x00001A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 80242E10
  W32(c->r[1]+0x00000014u,c->r[4]); // 80242E14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80242E18
  fcmp(c,0,c->f[1],c->f[0]); // 80242E1C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80242E20
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80242E24
  {uint32_t ea=c->r[29]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80242E28
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 80242E2C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80242E30
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80242E34
  W32(c->r[1]+0x00000008u,c->r[3]); // 80242E38
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[3]);} // 80242E3C
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[2]);} // 80242E40
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 80242E44
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 80242E48
  c->r[0]=c->cr; // 80242E4C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80242E50
  if (crb(c,2)) { goto L_80242E68; } // 80242E54
  c->f[1]=-c->f[2]; // 80242E58
  c->f[0]=-c->f[0]; // 80242E5C
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 80242E60
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 80242E64
L_80242E68:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80242E68
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80242E6C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80242E70
  c->r[29]=R32(c->r[1]+0x00000024u); // 80242E74
  c->r[28]=R32(c->r[1]+0x00000020u); // 80242E78
  c->lr=c->r[0]; // 80242E7C
  c->r[1]=c->r[1]+0x00000030u; // 80242E80
  return; // 80242E84
}

// GetVtxColor__Q36nw4hbm3lyt4PaneCFUl
void f_80242E88(Ctx* __restrict c) {
  trace_call(0x80242E88u);
  c->r[0]=0u+0xFFFFFFFFu; // 80242E88
  W32(c->r[3]+0x00000000u,c->r[0]); // 80242E8C
  return; // 80242E90
}

// SetVtxColor__Q36nw4hbm3lyt4PaneFUlQ36nw4hbm2ut5Color
void f_80242E94(Ctx* __restrict c) {
  trace_call(0x80242E94u);
  return; // 80242E94
}

// GetColorElement__Q36nw4hbm3lyt4PaneCFUl
void f_80242E98(Ctx* __restrict c) {
  trace_call(0x80242E98u);
  cmps(c,0,(int32_t)c->r[4],16); // 80242E98
  if (crb(c,2)) { goto L_80242EA4; } // 80242E9C
  goto L_80242EAC; // 80242EA0
L_80242EA4:;
  c->r[3]=R8(c->r[3]+0x000000CDu); // 80242EA4
  return; // 80242EA8
L_80242EAC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80242EAC
  c->r[12]=R32(c->r[12]+0x00000034u); // 80242EB0
  c->ctr=c->r[12]; // 80242EB4
  if (true) { dispatch(c,c->ctr); return; } // 80242EB8
  return; // 80242EBC
}

// fn_80242EBC
void f_80242EBC(Ctx* __restrict c) {
  trace_call(0x80242EBCu);
  return; // 80242EBC
}

// SetColorElement__Q36nw4hbm3lyt4PaneFUlUc
void f_80242EC0(Ctx* __restrict c) {
  trace_call(0x80242EC0u);
  cmps(c,0,(int32_t)c->r[4],16); // 80242EC0
  if (crb(c,2)) { goto L_80242ECC; } // 80242EC4
  goto L_80242ED4; // 80242EC8
L_80242ECC:;
  W8(c->r[3]+0x000000CDu,c->r[5]); // 80242ECC
  return; // 80242ED0
L_80242ED4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80242ED4
  c->r[12]=R32(c->r[12]+0x00000038u); // 80242ED8
  c->ctr=c->r[12]; // 80242EDC
  if (true) { dispatch(c,c->ctr); return; } // 80242EE0
  return; // 80242EE4
}

// fn_80242EE4
void f_80242EE4(Ctx* __restrict c) {
  trace_call(0x80242EE4u);
  return; // 80242EE4
}

// GetVtxColorElement__Q36nw4hbm3lyt4PaneCFUl
void f_80242EE8(Ctx* __restrict c) {
  trace_call(0x80242EE8u);
  c->r[3]=0u+0x000000FFu; // 80242EE8
  return; // 80242EEC
}

// SetVtxColorElement__Q36nw4hbm3lyt4PaneFUlUc
void f_80242EF0(Ctx* __restrict c) {
  trace_call(0x80242EF0u);
  return; // 80242EF0
}

// FindPaneByName__Q36nw4hbm3lyt4PaneFPCcb
void f_80242EF4(Ctx* __restrict c) {
  trace_call(0x80242EF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80242EF4
  c->r[0]=c->lr; // 80242EF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80242EFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80242F00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80242F04
  c->r[30]=c->r[5]|c->r[5]; // 80242F08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80242F0C
  c->r[29]=c->r[4]|c->r[4]; // 80242F10
  W32(c->r[1]+0x00000010u,c->r[28]); // 80242F14
  c->r[28]=c->r[3]|c->r[3]; // 80242F18
  c->r[3]=c->r[3]+0x000000B4u; // 80242F1C
  c->lr=0x80242F24u; f_8023D830(c); // 80242F20
  cmps(c,0,(int32_t)c->r[3],0); // 80242F24
  if (crb(c,2)) { goto L_80242F34; } // 80242F28
  c->r[3]=c->r[28]|c->r[28]; // 80242F2C
  goto L_80242F80; // 80242F30
L_80242F34:;
  cmps(c,0,(int32_t)c->r[30],0); // 80242F34
  if (crb(c,2)) { goto L_80242F7C; } // 80242F38
  c->r[31]=R32(c->r[28]+0x00000014u); // 80242F3C
  c->r[30]=c->r[28]+0x00000014u; // 80242F40
  goto L_80242F74; // 80242F44
L_80242F48:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80242F48
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80242F4C
  c->r[4]=c->r[29]|c->r[29]; // 80242F50
  c->r[5]=0u+0x00000001u; // 80242F54
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80242F58
  c->ctr=c->r[12]; // 80242F5C
  if (true) { c->lr=0x80242F64u; dispatch(c,c->ctr); } // 80242F60
  cmps(c,0,(int32_t)c->r[3],0); // 80242F64
  if (crb(c,2)) { goto L_80242F70; } // 80242F68
  goto L_80242F80; // 80242F6C
L_80242F70:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80242F70
L_80242F74:;
  cmpu(c,0,c->r[31],c->r[30]); // 80242F74
  if (!crb(c,2)) { IRQCHK(c); goto L_80242F48; } // 80242F78
L_80242F7C:;
  c->r[3]=0u+0x00000000u; // 80242F7C
L_80242F80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80242F80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80242F84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80242F88
  c->r[29]=R32(c->r[1]+0x00000014u); // 80242F8C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80242F90
  c->lr=c->r[0]; // 80242F94
  c->r[1]=c->r[1]+0x00000020u; // 80242F98
  return; // 80242F9C
}

// FindMaterialByName__Q36nw4hbm3lyt4PaneFPCcb
void f_80242FA0(Ctx* __restrict c) {
  trace_call(0x80242FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80242FA0
  c->r[0]=c->lr; // 80242FA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80242FA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80242FAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80242FB0
  c->r[30]=c->r[5]|c->r[5]; // 80242FB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80242FB8
  c->r[29]=c->r[4]|c->r[4]; // 80242FBC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80242FC0
  c->r[28]=c->r[3]|c->r[3]; // 80242FC4
  c->r[6]=R32(c->r[3]+0x00000028u); // 80242FC8
  cmps(c,0,(int32_t)c->r[6],0); // 80242FCC
  if (crb(c,2)) { goto L_80242FEC; } // 80242FD0
  c->r[3]=c->r[6]+0x00000004u; // 80242FD4
  c->lr=0x80242FDCu; f_8023D85C(c); // 80242FD8
  cmps(c,0,(int32_t)c->r[3],0); // 80242FDC
  if (crb(c,2)) { goto L_80242FEC; } // 80242FE0
  c->r[3]=R32(c->r[28]+0x00000028u); // 80242FE4
  goto L_80243038; // 80242FE8
L_80242FEC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80242FEC
  if (crb(c,2)) { goto L_80243034; } // 80242FF0
  c->r[31]=R32(c->r[28]+0x00000014u); // 80242FF4
  c->r[30]=c->r[28]+0x00000014u; // 80242FF8
  goto L_8024302C; // 80242FFC
L_80243000:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80243000
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80243004
  c->r[4]=c->r[29]|c->r[29]; // 80243008
  c->r[5]=0u+0x00000001u; // 8024300C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80243010
  c->ctr=c->r[12]; // 80243014
  if (true) { c->lr=0x8024301Cu; dispatch(c,c->ctr); } // 80243018
  cmps(c,0,(int32_t)c->r[3],0); // 8024301C
  if (crb(c,2)) { goto L_80243028; } // 80243020
  goto L_80243038; // 80243024
L_80243028:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80243028
L_8024302C:;
  cmpu(c,0,c->r[31],c->r[30]); // 8024302C
  if (!crb(c,2)) { IRQCHK(c); goto L_80243000; } // 80243030
L_80243034:;
  c->r[3]=0u+0x00000000u; // 80243034
L_80243038:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80243038
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024303C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80243040
  c->r[29]=R32(c->r[1]+0x00000014u); // 80243044
  c->r[28]=R32(c->r[1]+0x00000010u); // 80243048
  c->lr=c->r[0]; // 8024304C
  c->r[1]=c->r[1]+0x00000020u; // 80243050
  return; // 80243054
}

// CalculateMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_80243058(Ctx* __restrict c) {
  trace_call(0x80243058u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243058
  c->r[0]=c->lr; // 8024305C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80243060
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80243064
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80243068
  c->r[11]=c->r[1]+0x000000D0u; // 8024306C
  c->lr=0x80243074u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80243070
  c->r[6]=R8(c->r[3]+0x000000CFu); // 80243074
  c->r[31]=0u+0x80260000u; // 80243078
  c->r[29]=c->r[3]|c->r[3]; // 8024307C
  c->r[30]=c->r[4]|c->r[4]; // 80243080
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 80243084
  c->r[31]=c->r[31]+0x00001A78u; // 80243088
  if (!crb(c,2)) { goto L_8024309C; } // 8024308C
  c->r[0]=R8(c->r[4]+0x00000050u); // 80243090
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 80243094
  if (crb(c,2)) { goto L_80243338; } // 80243098
L_8024309C:;
  c->r[0]=R8(c->r[4]+0x00000050u); // 8024309C
  c->r[5]=R32(c->r[3]+0x00000044u); // 802430A0
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 802430A4
  c->r[0]=R32(c->r[3]+0x00000048u); // 802430A8
  W32(c->r[1]+0x00000008u,c->r[5]); // 802430AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802430B0
  if (crb(c,2)) { goto L_802430E0; } // 802430B4
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 802430B8
  if (crb(c,2)) { goto L_802430E0; } // 802430BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802430C0
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 802430C4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802430C8
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802430CC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802430D0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802430D4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 802430D8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802430DC
L_802430E0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802430E0
  c->r[3]=c->r[1]+0x00000040u; // 802430E4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802430E8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802430EC
  c->lr=0x802430F4u; f_800B84C4(c); // 802430F0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802430F4
  c->r[3]=c->r[1]+0x00000010u; // 802430F8
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802430FC
  c->r[4]=0u+0x00000078u; // 80243100
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80243104
  c->lr=0x8024310Cu; f_800B81EC(c); // 80243108
  c->r[3]=c->r[1]+0x00000010u; // 8024310C
  c->r[4]=c->r[1]+0x00000040u; // 80243110
  c->r[5]=c->r[1]+0x00000070u; // 80243114
  c->lr=0x8024311Cu; f_800B7E40(c); // 80243118
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024311C
  c->r[3]=c->r[1]+0x00000010u; // 80243120
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80243124
  c->r[4]=0u+0x00000079u; // 80243128
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8024312C
  c->lr=0x80243134u; f_800B81EC(c); // 80243130
  c->r[3]=c->r[1]+0x00000010u; // 80243134
  c->r[4]=c->r[1]+0x00000070u; // 80243138
  c->r[5]=c->r[1]+0x00000040u; // 8024313C
  c->lr=0x80243144u; f_800B7E40(c); // 80243140
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80243144
  c->r[3]=c->r[1]+0x00000010u; // 80243148
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024314C
  c->r[4]=0u+0x0000007Au; // 80243150
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80243154
  c->lr=0x8024315Cu; f_800B81EC(c); // 80243158
  c->r[3]=c->r[1]+0x00000010u; // 8024315C
  c->r[4]=c->r[1]+0x00000040u; // 80243160
  c->r[5]=c->r[1]+0x00000070u; // 80243164
  c->lr=0x8024316Cu; f_800B7E40(c); // 80243168
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024316C
  c->r[3]=c->r[1]+0x00000070u; // 80243170
  {uint32_t ea=c->r[29]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80243174
  c->r[4]=c->r[29]+0x00000054u; // 80243178
  {uint32_t ea=c->r[29]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024317C
  c->lr=0x80243184u; f_800B8478(c); // 80243180
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80243184
  cmps(c,0,(int32_t)c->r[3],0); // 80243188
  if (crb(c,2)) { goto L_802431A4; } // 8024318C
  c->r[3]=c->r[3]+0x00000084u; // 80243190
  c->r[4]=c->r[29]+0x00000054u; // 80243194
  c->r[5]=c->r[29]+0x00000084u; // 80243198
  c->lr=0x802431A0u; f_800B7E40(c); // 8024319C
  goto L_80243224; // 802431A0
L_802431A4:;
  c->r[0]=R8(c->r[30]+0x00000050u); // 802431A4
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 802431A8
  if (crb(c,2)) { goto L_80243214; } // 802431AC
  c->r[27]=R32(c->r[29]+0x00000054u); // 802431B0
  c->r[12]=R32(c->r[29]+0x00000058u); // 802431B4
  c->r[11]=R32(c->r[29]+0x0000005Cu); // 802431B8
  c->r[10]=R32(c->r[29]+0x00000060u); // 802431BC
  c->r[9]=R32(c->r[29]+0x00000064u); // 802431C0
  c->r[8]=R32(c->r[29]+0x00000068u); // 802431C4
  c->r[7]=R32(c->r[29]+0x0000006Cu); // 802431C8
  c->r[6]=R32(c->r[29]+0x00000070u); // 802431CC
  c->r[5]=R32(c->r[29]+0x00000074u); // 802431D0
  c->r[4]=R32(c->r[29]+0x00000078u); // 802431D4
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 802431D8
  c->r[0]=R32(c->r[29]+0x00000080u); // 802431DC
  W32(c->r[29]+0x00000084u,c->r[27]); // 802431E0
  W32(c->r[29]+0x00000088u,c->r[12]); // 802431E4
  W32(c->r[29]+0x0000008Cu,c->r[11]); // 802431E8
  W32(c->r[29]+0x00000090u,c->r[10]); // 802431EC
  W32(c->r[29]+0x00000094u,c->r[9]); // 802431F0
  W32(c->r[29]+0x00000098u,c->r[8]); // 802431F4
  W32(c->r[29]+0x0000009Cu,c->r[7]); // 802431F8
  W32(c->r[29]+0x000000A0u,c->r[6]); // 802431FC
  W32(c->r[29]+0x000000A4u,c->r[5]); // 80243200
  W32(c->r[29]+0x000000A8u,c->r[4]); // 80243204
  W32(c->r[29]+0x000000ACu,c->r[3]); // 80243208
  W32(c->r[29]+0x000000B0u,c->r[0]); // 8024320C
  goto L_80243224; // 80243210
L_80243214:;
  c->r[3]=c->r[30]+0x00000004u; // 80243214
  c->r[4]=c->r[29]+0x00000054u; // 80243218
  c->r[5]=c->r[29]+0x00000084u; // 8024321C
  c->lr=0x80243224u; f_800B7E40(c); // 80243220
L_80243224:;
  c->r[0]=R8(c->r[30]+0x00000050u); // 80243224
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 80243228
  if (crb(c,2)) { goto L_80243274; } // 8024322C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80243230
  cmps(c,0,(int32_t)c->r[0],0); // 80243234
  if (crb(c,2)) { goto L_80243274; } // 80243238
  c->r[3]=R8(c->r[29]+0x000000CDu); // 8024323C
  c->r[0]=0u+0x43300000u; // 80243240
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80243244
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=RF64(ea);} // 80243248
  W32(c->r[1]+0x000000A4u,c->r[3]); // 8024324C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80243250
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 80243254
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80243258
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8024325C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80243260
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 80243264
  c->r[0]=R32(c->r[1]+0x000000ACu); // 80243268
  W8(c->r[29]+0x000000CEu,c->r[0]); // 8024326C
  goto L_8024327C; // 80243270
L_80243274:;
  c->r[0]=R8(c->r[29]+0x000000CDu); // 80243274
  W8(c->r[29]+0x000000CEu,c->r[0]); // 80243278
L_8024327C:;
  c->r[0]=R8(c->r[29]+0x000000CFu); // 8024327C
  c->r[28]=0u+0x00000000u; // 80243280
  c->r[3]=R8(c->r[30]+0x00000050u); // 80243284
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80243288
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8024328C
  c->r[3]=rotl(c->r[3],26)&0x00000001u; // 80243290
  c->r[0]=0u-c->r[3]; // 80243294
  c->r[0]=c->r[0]|c->r[3]; // 80243298
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 8024329C
  if (crb(c,2)) { goto L_802432B4; } // 802432A0
  c->r[0]=R8(c->r[29]+0x000000CDu); // 802432A4
  cmpu(c,0,c->r[0],0x000000FFu); // 802432A8
  if (crb(c,2)) { goto L_802432B4; } // 802432AC
  c->r[28]=0u+0x00000001u; // 802432B0
L_802432B4:;
  cmps(c,0,(int32_t)c->r[28],0); // 802432B4
  if (crb(c,2)) { goto L_802432F4; } // 802432B8
  c->r[4]=R8(c->r[29]+0x000000CDu); // 802432BC
  c->r[3]=0u+0x43300000u; // 802432C0
  c->r[0]=R8(c->r[30]+0x00000050u); // 802432C4
  W32(c->r[1]+0x000000ACu,c->r[4]); // 802432C8
  c->r[0]=c->r[0]|0x00000040u; // 802432CC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=RF64(ea);} // 802432D0
  W32(c->r[1]+0x000000A8u,c->r[3]); // 802432D4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802432D8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 802432DC
  W8(c->r[30]+0x00000050u,c->r[0]); // 802432E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802432E4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 802432E8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802432EC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 802432F0
L_802432F4:;
  {uint32_t ea=c->r[29]+0x00000014u; c->r[31]=R32(ea); c->r[29]=ea;} // 802432F4
  goto L_80243318; // 802432F8
L_802432FC:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 802432FC
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80243300
  c->r[4]=c->r[30]|c->r[30]; // 80243304
  c->r[12]=R32(c->r[12]+0x00000010u); // 80243308
  c->ctr=c->r[12]; // 8024330C
  if (true) { c->lr=0x80243314u; dispatch(c,c->ctr); } // 80243310
  c->r[31]=R32(c->r[31]+0x00000000u); // 80243314
L_80243318:;
  cmpu(c,0,c->r[31],c->r[29]); // 80243318
  if (!crb(c,2)) { IRQCHK(c); goto L_802432FC; } // 8024331C
  cmps(c,0,(int32_t)c->r[28],0); // 80243320
  if (crb(c,2)) { goto L_80243338; } // 80243324
  c->r[0]=R8(c->r[30]+0x00000050u); // 80243328
  c->r[0]=(rotl(c->r[27],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 8024332C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[31]);} // 80243330
  W8(c->r[30]+0x00000050u,c->r[0]); // 80243334
L_80243338:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80243338
  c->r[11]=c->r[1]+0x000000D0u; // 8024333C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80243340
  c->lr=0x80243348u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80243344
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80243348
  c->lr=c->r[0]; // 8024334C
  c->r[1]=c->r[1]+0x000000E0u; // 80243350
  return; // 80243354
}

// Draw__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_80243358(Ctx* __restrict c) {
  trace_call(0x80243358u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243358
  c->r[0]=c->lr; // 8024335C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80243360
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80243364
  W32(c->r[1]+0x00000018u,c->r[30]); // 80243368
  c->r[30]=c->r[3]|c->r[3]; // 8024336C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80243370
  c->r[29]=c->r[4]|c->r[4]; // 80243374
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80243378
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8024337C
  if (crb(c,2)) { goto L_802433C0; } // 80243380
  c->r[12]=R32(c->r[3]+0x00000000u); // 80243384
  c->r[12]=R32(c->r[12]+0x00000018u); // 80243388
  c->ctr=c->r[12]; // 8024338C
  if (true) { c->lr=0x80243394u; dispatch(c,c->ctr); } // 80243390
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80243394
  goto L_802433B8; // 80243398
L_8024339C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 8024339C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 802433A0
  c->r[4]=c->r[29]|c->r[29]; // 802433A4
  c->r[12]=R32(c->r[12]+0x00000014u); // 802433A8
  c->ctr=c->r[12]; // 802433AC
  if (true) { c->lr=0x802433B4u; dispatch(c,c->ctr); } // 802433B0
  c->r[31]=R32(c->r[31]+0x00000000u); // 802433B4
L_802433B8:;
  cmpu(c,0,c->r[31],c->r[30]); // 802433B8
  if (!crb(c,2)) { IRQCHK(c); goto L_8024339C; } // 802433BC
L_802433C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802433C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802433C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802433C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802433CC
  c->lr=c->r[0]; // 802433D0
  c->r[1]=c->r[1]+0x00000020u; // 802433D4
  return; // 802433D8
}

// DrawSelf__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_802433DC(Ctx* __restrict c) {
  trace_call(0x802433DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802433DC
  c->r[0]=c->lr; // 802433E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802433E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802433E8
  c->r[31]=c->r[3]|c->r[3]; // 802433EC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802433F0
  cmps(c,0,(int32_t)c->r[0],0); // 802433F4
  if (crb(c,2)) { goto L_80243444; } // 802433F8
  c->r[0]=R8(c->r[4]+0x00000050u); // 802433FC
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 80243400
  if (crb(c,2)) { goto L_80243444; } // 80243404
  c->r[12]=R32(c->r[3]+0x00000000u); // 80243408
  c->r[12]=R32(c->r[12]+0x00000060u); // 8024340C
  c->ctr=c->r[12]; // 80243410
  if (true) { c->lr=0x80243418u; dispatch(c,c->ctr); } // 80243414
  c->r[4]=0u+0x00FF0000u; // 80243418
  c->r[3]=c->r[31]|c->r[31]; // 8024341C
  c->r[0]=c->r[4]+0x000000FFu; // 80243420
  W32(c->r[1]+0x00000008u,c->r[0]); // 80243424
  c->lr=0x8024342Cu; f_80243968(c); // 80243428
  W32(c->r[1]+0x00000014u,c->r[4]); // 8024342C
  c->r[4]=c->r[31]+0x0000004Cu; // 80243430
  c->r[5]=c->r[1]+0x00000008u; // 80243434
  W32(c->r[1]+0x00000010u,c->r[3]); // 80243438
  c->r[3]=c->r[1]+0x00000010u; // 8024343C
  c->lr=0x80243444u; f_8023E354(c); // 80243440
L_80243444:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80243444
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80243448
  c->lr=c->r[0]; // 8024344C
  c->r[1]=c->r[1]+0x00000020u; // 80243450
  return; // 80243454
}

// Animate__Q36nw4hbm3lyt4PaneFUl
void f_80243458(Ctx* __restrict c) {
  trace_call(0x80243458u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243458
  c->r[0]=c->lr; // 8024345C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80243460
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80243464
  W32(c->r[1]+0x00000018u,c->r[30]); // 80243468
  c->r[30]=c->r[3]|c->r[3]; // 8024346C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80243470
  c->r[29]=c->r[4]|c->r[4]; // 80243474
  c->r[12]=R32(c->r[3]+0x00000000u); // 80243478
  c->r[12]=R32(c->r[12]+0x00000020u); // 8024347C
  c->ctr=c->r[12]; // 80243480
  if (true) { c->lr=0x80243488u; dispatch(c,c->ctr); } // 80243484
  c->r[0]=R8(c->r[30]+0x000000CFu); // 80243488
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8024348C
  if (!crb(c,2)) { goto L_8024349C; } // 80243490
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80243494
  if (!crb(c,2)) { goto L_802434C8; } // 80243498
L_8024349C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 8024349C
  goto L_802434C0; // 802434A0
L_802434A4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 802434A4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 802434A8
  c->r[4]=c->r[29]|c->r[29]; // 802434AC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802434B0
  c->ctr=c->r[12]; // 802434B4
  if (true) { c->lr=0x802434BCu; dispatch(c,c->ctr); } // 802434B8
  c->r[31]=R32(c->r[31]+0x00000000u); // 802434BC
L_802434C0:;
  cmpu(c,0,c->r[31],c->r[30]); // 802434C0
  if (!crb(c,2)) { IRQCHK(c); goto L_802434A4; } // 802434C4
L_802434C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802434C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802434CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802434D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802434D4
  c->lr=c->r[0]; // 802434D8
  c->r[1]=c->r[1]+0x00000020u; // 802434DC
  return; // 802434E0
}

// AnimateSelf__Q36nw4hbm3lyt4PaneFUl
void f_802434E4(Ctx* __restrict c) {
  trace_call(0x802434E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802434E4
  c->r[0]=c->lr; // 802434E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802434EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802434F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802434F4
  c->r[30]=c->r[3]+0x00000020u; // 802434F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802434FC
  c->r[29]=c->r[4]|c->r[4]; // 80243500
  W32(c->r[1]+0x00000010u,c->r[28]); // 80243504
  c->r[28]=c->r[3]|c->r[3]; // 80243508
  c->r[31]=R32(c->r[3]+0x00000020u); // 8024350C
  goto L_80243540; // 80243510
L_80243514:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 80243514
  cmps(c,0,(int32_t)c->r[0],0); // 80243518
  if (!crb(c,2)) { goto L_8024353C; } // 8024351C
  c->r[3]=R32(c->r[31]+0x00000008u); // 80243520
  c->r[5]=c->r[28]|c->r[28]; // 80243524
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 80243528
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024352C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80243530
  c->ctr=c->r[12]; // 80243534
  if (true) { c->lr=0x8024353Cu; dispatch(c,c->ctr); } // 80243538
L_8024353C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8024353C
L_80243540:;
  cmpu(c,0,c->r[31],c->r[30]); // 80243540
  if (!crb(c,2)) { IRQCHK(c); goto L_80243514; } // 80243544
  c->r[0]=R8(c->r[28]+0x000000CFu); // 80243548
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8024354C
  if (!crb(c,2)) { goto L_8024355C; } // 80243550
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80243554
  if (!crb(c,2)) { goto L_80243578; } // 80243558
L_8024355C:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 8024355C
  cmps(c,0,(int32_t)c->r[3],0); // 80243560
  if (crb(c,2)) { goto L_80243578; } // 80243564
  c->r[12]=R32(c->r[3]+0x00000000u); // 80243568
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8024356C
  c->ctr=c->r[12]; // 80243570
  if (true) { c->lr=0x80243578u; dispatch(c,c->ctr); } // 80243574
L_80243578:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80243578
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024357C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80243580
  c->r[29]=R32(c->r[1]+0x00000014u); // 80243584
  c->r[28]=R32(c->r[1]+0x00000010u); // 80243588
  c->lr=c->r[0]; // 8024358C
  c->r[1]=c->r[1]+0x00000020u; // 80243590
  return; // 80243594
}

// BindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb
void f_80243598(Ctx* __restrict c) {
  trace_call(0x80243598u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 80243598
  c->r[0]=c->r[3]|c->r[3]; // 8024359C
  c->r[3]=c->r[4]|c->r[4]; // 802435A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 802435A4
  c->r[4]=c->r[0]|c->r[0]; // 802435A8
  c->ctr=c->r[12]; // 802435AC
  if (true) { dispatch(c,c->ctr); return; } // 802435B0
}

// UnbindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb
void f_802435B4(Ctx* __restrict c) {
  trace_call(0x802435B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802435B4
  c->r[0]=c->lr; // 802435B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802435BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802435C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802435C4
  c->r[30]=c->r[3]|c->r[3]; // 802435C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802435CC
  c->r[29]=c->r[5]|c->r[5]; // 802435D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 802435D4
  c->r[28]=c->r[4]|c->r[4]; // 802435D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802435DC
  c->r[12]=R32(c->r[12]+0x00000050u); // 802435E0
  c->ctr=c->r[12]; // 802435E4
  if (true) { c->lr=0x802435ECu; dispatch(c,c->ctr); } // 802435E8
  cmps(c,0,(int32_t)c->r[29],0); // 802435EC
  if (crb(c,2)) { goto L_80243624; } // 802435F0
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 802435F4
  goto L_8024361C; // 802435F8
L_802435FC:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 802435FC
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80243600
  c->r[4]=c->r[28]|c->r[28]; // 80243604
  c->r[5]=c->r[29]|c->r[29]; // 80243608
  c->r[12]=R32(c->r[12]+0x00000048u); // 8024360C
  c->ctr=c->r[12]; // 80243610
  if (true) { c->lr=0x80243618u; dispatch(c,c->ctr); } // 80243614
  c->r[31]=R32(c->r[31]+0x00000000u); // 80243618
L_8024361C:;
  cmpu(c,0,c->r[31],c->r[30]); // 8024361C
  if (!crb(c,2)) { IRQCHK(c); goto L_802435FC; } // 80243620
L_80243624:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80243624
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80243628
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024362C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80243630
  c->r[28]=R32(c->r[1]+0x00000010u); // 80243634
  c->lr=c->r[0]; // 80243638
  c->r[1]=c->r[1]+0x00000020u; // 8024363C
  return; // 80243640
}

// UnbindAllAnimation__Q36nw4hbm3lyt4PaneFb
void f_80243644(Ctx* __restrict c) {
  trace_call(0x80243644u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80243644
  c->r[5]=c->r[4]|c->r[4]; // 80243648
  c->r[4]=0u+0x00000000u; // 8024364C
  c->r[12]=R32(c->r[12]+0x00000048u); // 80243650
  c->ctr=c->r[12]; // 80243654
  if (true) { dispatch(c,c->ctr); return; } // 80243658
}

// UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform
void f_8024365C(Ctx* __restrict c) {
  trace_call(0x8024365Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024365C
  c->r[0]=c->lr; // 80243660
  W32(c->r[1]+0x00000034u,c->r[0]); // 80243664
  c->r[11]=c->r[1]+0x00000030u; // 80243668
  c->lr=0x80243670u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024366C
  c->r[0]=R32(c->r[3]+0x00000028u); // 80243670
  c->r[26]=c->r[3]|c->r[3]; // 80243674
  c->r[27]=c->r[4]|c->r[4]; // 80243678
  cmps(c,0,(int32_t)c->r[0],0); // 8024367C
  if (crb(c,2)) { goto L_80243698; } // 80243680
  c->r[3]=c->r[0]|c->r[0]; // 80243684
  c->r[12]=R32(c->r[3]+0x00000000u); // 80243688
  c->r[12]=R32(c->r[12]+0x00000014u); // 8024368C
  c->ctr=c->r[12]; // 80243690
  if (true) { c->lr=0x80243698u; dispatch(c,c->ctr); } // 80243694
L_80243698:;
  c->r[31]=R32(c->r[26]+0x00000020u); // 80243698
  c->r[30]=c->r[26]+0x00000020u; // 8024369C
  c->r[29]=0u+0x00000000u; // 802436A0
  goto L_802436DC; // 802436A4
L_802436A8:;
  cmps(c,0,(int32_t)c->r[27],0); // 802436A8
  c->r[28]=c->r[31]|c->r[31]; // 802436AC
  c->r[31]=R32(c->r[31]+0x00000000u); // 802436B0
  if (crb(c,2)) { goto L_802436C4; } // 802436B4
  c->r[0]=R32(c->r[28]+0x00000008u); // 802436B8
  cmpu(c,0,c->r[0],c->r[27]); // 802436BC
  if (!crb(c,2)) { goto L_802436DC; } // 802436C0
L_802436C4:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 802436C4
  c->r[3]=c->r[26]+0x0000001Cu; // 802436C8
  c->r[4]=c->r[1]+0x00000008u; // 802436CC
  c->lr=0x802436D4u; f_80249B78(c); // 802436D0
  W32(c->r[28]+0x00000008u,c->r[29]); // 802436D4
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 802436D8
L_802436DC:;
  cmpu(c,0,c->r[31],c->r[30]); // 802436DC
  if (!crb(c,2)) { IRQCHK(c); goto L_802436A8; } // 802436E0
  c->r[11]=c->r[1]+0x00000030u; // 802436E4
  c->lr=0x802436ECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802436E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802436EC
  c->lr=c->r[0]; // 802436F0
  c->r[1]=c->r[1]+0x00000030u; // 802436F4
  return; // 802436F8
}

// AddAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimationLink
void f_802436FC(Ctx* __restrict c) {
  trace_call(0x802436FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802436FC
  c->r[0]=c->lr; // 80243700
  c->r[5]=c->r[4]|c->r[4]; // 80243704
  W32(c->r[1]+0x00000014u,c->r[0]); // 80243708
  c->r[0]=c->r[3]+0x00000020u; // 8024370C
  c->r[3]=c->r[3]+0x0000001Cu; // 80243710
  c->r[4]=c->r[1]+0x00000008u; // 80243714
  W32(c->r[1]+0x00000008u,c->r[0]); // 80243718
  c->lr=0x80243720u; f_80249BC0(c); // 8024371C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80243720
  c->lr=c->r[0]; // 80243724
  c->r[1]=c->r[1]+0x00000010u; // 80243728
  return; // 8024372C
}

// FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform
void f_80243730(Ctx* __restrict c) {
  trace_call(0x80243730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243730
  c->r[0]=c->lr; // 80243734
  W32(c->r[1]+0x00000014u,c->r[0]); // 80243738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024373C
  c->r[31]=c->r[4]|c->r[4]; // 80243740
  W32(c->r[1]+0x00000008u,c->r[30]); // 80243744
  c->r[30]=c->r[3]|c->r[3]; // 80243748
  c->r[3]=c->r[3]+0x0000001Cu; // 8024374C
  c->lr=0x80243754u; f_8023D30C(c); // 80243750
  cmps(c,0,(int32_t)c->r[3],0); // 80243754
  if (crb(c,2)) { goto L_80243760; } // 80243758
  goto L_80243790; // 8024375C
L_80243760:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 80243760
  cmps(c,0,(int32_t)c->r[3],0); // 80243764
  if (crb(c,2)) { goto L_8024378C; } // 80243768
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024376C
  c->r[4]=c->r[31]|c->r[31]; // 80243770
  c->r[12]=R32(c->r[12]+0x00000020u); // 80243774
  c->ctr=c->r[12]; // 80243778
  if (true) { c->lr=0x80243780u; dispatch(c,c->ctr); } // 8024377C
  cmps(c,0,(int32_t)c->r[3],0); // 80243780
  if (crb(c,2)) { goto L_8024378C; } // 80243784
  goto L_80243790; // 80243788
L_8024378C:;
  c->r[3]=0u+0x00000000u; // 8024378C
L_80243790:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80243790
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80243794
  c->r[30]=R32(c->r[1]+0x00000008u); // 80243798
  c->lr=c->r[0]; // 8024379C
  c->r[1]=c->r[1]+0x00000010u; // 802437A0
  return; // 802437A4
}

// SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb
void f_802437A8(Ctx* __restrict c) {
  trace_call(0x802437A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802437A8
  c->r[0]=c->lr; // 802437AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802437B0
  c->r[11]=c->r[1]+0x00000020u; // 802437B4
  c->lr=0x802437BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802437B8
  c->r[30]=c->r[3]|c->r[3]; // 802437BC
  c->r[27]=c->r[4]|c->r[4]; // 802437C0
  c->r[28]=c->r[5]|c->r[5]; // 802437C4
  c->r[29]=c->r[6]|c->r[6]; // 802437C8
  c->r[3]=c->r[3]+0x0000001Cu; // 802437CC
  c->lr=0x802437D4u; f_8023D30C(c); // 802437D0
  cmps(c,0,(int32_t)c->r[3],0); // 802437D4
  if (crb(c,2)) { goto L_802437E8; } // 802437D8
  c->r[0]=cntlz(c->r[28]); // 802437DC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802437E0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 802437E4
L_802437E8:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 802437E8
  cmps(c,0,(int32_t)c->r[3],0); // 802437EC
  if (crb(c,2)) { goto L_8024380C; } // 802437F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802437F4
  c->r[4]=c->r[27]|c->r[27]; // 802437F8
  c->r[5]=c->r[28]|c->r[28]; // 802437FC
  c->r[12]=R32(c->r[12]+0x00000024u); // 80243800
  c->ctr=c->r[12]; // 80243804
  if (true) { c->lr=0x8024380Cu; dispatch(c,c->ctr); } // 80243808
L_8024380C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8024380C
  if (crb(c,2)) { goto L_80243848; } // 80243810
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80243814
  goto L_80243840; // 80243818
L_8024381C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 8024381C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80243820
  c->r[4]=c->r[27]|c->r[27]; // 80243824
  c->r[5]=c->r[28]|c->r[28]; // 80243828
  c->r[12]=R32(c->r[12]+0x00000058u); // 8024382C
  c->r[6]=c->r[29]|c->r[29]; // 80243830
  c->ctr=c->r[12]; // 80243834
  if (true) { c->lr=0x8024383Cu; dispatch(c,c->ctr); } // 80243838
  c->r[31]=R32(c->r[31]+0x00000000u); // 8024383C
L_80243840:;
  cmpu(c,0,c->r[31],c->r[30]); // 80243840
  if (!crb(c,2)) { IRQCHK(c); goto L_8024381C; } // 80243844
L_80243848:;
  c->r[11]=c->r[1]+0x00000020u; // 80243848
  c->lr=0x80243850u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024384C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80243850
  c->lr=c->r[0]; // 80243854
  c->r[1]=c->r[1]+0x00000020u; // 80243858
  return; // 8024385C
}

// LoadMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_80243860(Ctx* __restrict c) {
  trace_call(0x80243860u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243860
  c->r[0]=c->lr; // 80243864
  c->r[5]=c->r[3]|c->r[3]; // 80243868
  W32(c->r[1]+0x00000044u,c->r[0]); // 8024386C
  c->r[0]=R8(c->r[4]+0x00000050u); // 80243870
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80243874
  c->r[31]=c->r[4]|c->r[4]; // 80243878
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8024387C
  if (crb(c,2)) { goto L_802438E4; } // 80243880
  c->r[3]=c->r[4]+0x00000004u; // 80243884
  c->r[4]=c->r[5]+0x00000084u; // 80243888
  c->r[5]=c->r[1]+0x00000008u; // 8024388C
  c->lr=0x80243894u; f_800B7E40(c); // 80243890
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80243894
  c->r[3]=0u+0x80260000u; // 80243898
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024389C
  {uint32_t ea=c->r[3]+0x00001A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802438A0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 802438A4
  fcmp(c,0,c->f[1],c->f[0]); // 802438A8
  c->r[0]=c->cr; // 802438AC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802438B0
  if (crb(c,2)) { goto L_802438DC; } // 802438B4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802438B8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802438BC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802438C0
  c->f[2]=-c->f[2]; // 802438C4
  c->f[1]=-c->f[1]; // 802438C8
  c->f[0]=-c->f[0]; // 802438CC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 802438D0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 802438D4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 802438D8
L_802438DC:;
  c->r[3]=c->r[1]+0x00000008u; // 802438DC
  goto L_80243944; // 802438E0
L_802438E4:;
  {uint32_t ea=c->r[4]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 802438E4
  c->r[5]=0u+0x80260000u; // 802438E8
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802438EC
  {uint32_t ea=c->r[5]+0x00001A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802438F0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 802438F4
  fcmp(c,0,c->f[1],c->f[0]); // 802438F8
  c->r[0]=c->cr; // 802438FC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80243900
  if (crb(c,2)) { goto L_80243940; } // 80243904
  c->r[3]=c->r[3]+0x00000084u; // 80243908
  c->r[4]=c->r[1]+0x00000008u; // 8024390C
  c->lr=0x80243914u; f_800B7E0C(c); // 80243910
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80243914
  c->r[3]=c->r[1]+0x00000008u; // 80243918
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024391C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80243920
  c->f[2]=-c->f[2]; // 80243924
  c->f[1]=-c->f[1]; // 80243928
  c->f[0]=-c->f[0]; // 8024392C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80243930
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80243934
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80243938
  goto L_80243944; // 8024393C
L_80243940:;
  c->r[3]=c->r[3]+0x00000084u; // 80243940
L_80243944:;
  c->r[4]=0u+0x00000000u; // 80243944
  c->lr=0x8024394Cu; f_800D3710(c); // 80243948
  c->r[3]=0u+0x00000000u; // 8024394C
  c->lr=0x80243954u; f_800D3818(c); // 80243950
  c->r[0]=R32(c->r[1]+0x00000044u); // 80243954
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80243958
  c->lr=c->r[0]; // 8024395C
  c->r[1]=c->r[1]+0x00000040u; // 80243960
  return; // 80243964
}

// GetVtxPos__Q36nw4hbm3lyt4PaneCFv
void f_80243968(Ctx* __restrict c) {
  trace_call(0x80243968u);
  c->r[4]=0u+0x55550000u; // 80243968
  c->r[6]=R8(c->r[3]+0x000000CCu); // 8024396C
  c->r[0]=c->r[4]+0x00005556u; // 80243970
  c->r[5]=0u+0x80260000u; // 80243974
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 80243978
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024397C
  {uint32_t ea=c->r[5]+0x00001A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 80243980
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80243984
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80243988
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8024398C
  c->r[0]=c->r[4]+c->r[0]; // 80243990
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80243994
  c->r[0]=c->r[6]-c->r[0]; // 80243998
  cmps(c,0,(int32_t)c->r[0],1); // 8024399C
  if (crb(c,2)) { goto L_802439C8; } // 802439A0
  if (!crb(c,0)) { goto L_802439AC; } // 802439A4
  goto L_802439B8; // 802439A8
L_802439AC:;
  cmps(c,0,(int32_t)c->r[0],3); // 802439AC
  if (!crb(c,0)) { goto L_802439B8; } // 802439B0
  goto L_802439E4; // 802439B4
L_802439B8:;
  c->r[4]=0u+0x80260000u; // 802439B8
  {uint32_t ea=c->r[4]+0x00001A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802439BC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802439C0
  goto L_802439F0; // 802439C4
L_802439C8:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802439C8
  c->r[4]=0u+0x80260000u; // 802439CC
  {uint32_t ea=c->r[4]+0x00001A90u; c->f[0]=c->ps1[0]=RF32(ea);} // 802439D0
  c->f[1]=-c->f[1]; // 802439D4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802439D8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802439DC
  goto L_802439F0; // 802439E0
L_802439E4:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802439E4
  c->f[0]=-c->f[0]; // 802439E8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802439EC
L_802439F0:;
  c->r[4]=0u+0x55550000u; // 802439F0
  c->r[0]=c->r[4]+0x00005556u; // 802439F4
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 802439F8
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 802439FC
  c->r[0]=c->r[4]+c->r[0]; // 80243A00
  cmps(c,0,(int32_t)c->r[0],1); // 80243A04
  if (crb(c,2)) { goto L_80243A30; } // 80243A08
  if (!crb(c,0)) { goto L_80243A14; } // 80243A0C
  goto L_80243A20; // 80243A10
L_80243A14:;
  cmps(c,0,(int32_t)c->r[0],3); // 80243A14
  if (!crb(c,0)) { goto L_80243A20; } // 80243A18
  goto L_80243A4C; // 80243A1C
L_80243A20:;
  c->r[3]=0u+0x80260000u; // 80243A20
  {uint32_t ea=c->r[3]+0x00001A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 80243A24
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80243A28
  goto L_80243A58; // 80243A2C
L_80243A30:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80243A30
  c->r[3]=0u+0x80260000u; // 80243A34
  {uint32_t ea=c->r[3]+0x00001A90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80243A38
  c->f[1]=-c->f[1]; // 80243A3C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80243A40
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80243A44
  goto L_80243A58; // 80243A48
L_80243A4C:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80243A4C
  c->f[0]=-c->f[0]; // 80243A50
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80243A54
L_80243A58:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80243A58
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80243A5C
  c->r[1]=c->r[1]+0x00000010u; // 80243A60
  return; // 80243A64
}

// GetMaterial__Q36nw4hbm3lyt4PaneCFv
void f_80243A68(Ctx* __restrict c) {
  trace_call(0x80243A68u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 80243A68
  return; // 80243A6C
}

// __sinit_\lyt_pane_cpp
void f_80243A70(Ctx* __restrict c) {
  trace_call(0x80243A70u);
  c->r[0]=0u+0x00000000u; // 80243A70
  c->r[3]=0u+0x80360000u; // 80243A74
  W32(c->r[3]+0xFFFFCE28u,c->r[0]); // 80243A78
  return; // 80243A7C
}

// __ct__Q36nw4hbm3lyt7PictureFPCQ46nw4hbm3lyt3res7PictureRCQ36nw4hbm3lyt11ResBlockSet
void f_80243A80(Ctx* __restrict c) {
  trace_call(0x80243A80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243A80
  c->r[0]=c->lr; // 80243A84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80243A88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80243A8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80243A90
  c->r[30]=c->r[5]|c->r[5]; // 80243A94
  W32(c->r[1]+0x00000014u,c->r[29]); // 80243A98
  c->r[29]=c->r[4]|c->r[4]; // 80243A9C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80243AA0
  c->r[28]=c->r[3]|c->r[3]; // 80243AA4
  c->lr=0x80243AACu; f_80242B0C(c); // 80243AA8
  c->r[3]=0u+0x802A0000u; // 80243AAC
  c->r[4]=0u+0x80240000u; // 80243AB0
  c->r[3]=c->r[3]+0x000008A0u; // 80243AB4
  c->r[5]=0u+0x80240000u; // 80243AB8
  W32(c->r[28]+0x00000000u,c->r[3]); // 80243ABC
  c->r[3]=c->r[28]+0x000000D4u; // 80243AC0
  c->r[4]=c->r[4]+0xFFFFF9F4u; // 80243AC4
  c->r[5]=c->r[5]+0xFFFFD7D0u; // 80243AC8
  c->r[6]=0u+0x00000004u; // 80243ACC
  c->r[7]=0u+0x00000004u; // 80243AD0
  c->lr=0x80243AD8u; f_800D4698(c); // 80243AD4
  c->r[3]=c->r[28]+0x000000E4u; // 80243AD8
  c->lr=0x80243AE0u; f_8023D8E4(c); // 80243ADC
  c->r[0]=R8(c->r[29]+0x0000005Eu); // 80243AE0
  c->r[31]=0u+0x00000008u; // 80243AE4
  cmpu(c,0,c->r[0],0x00000008u); // 80243AE8
  if (crb(c,1)) { goto L_80243AF4; } // 80243AEC
  c->r[31]=c->r[0]|c->r[0]; // 80243AF0
L_80243AF4:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[4]); // 80243AF4
  if (crb(c,2)) { goto L_80243B04; } // 80243AF8
  c->r[3]=c->r[28]+0x000000E4u; // 80243AFC
  c->lr=0x80243B04u; f_8023D948(c); // 80243B00
L_80243B04:;
  c->r[6]=R32(c->r[29]+0x0000004Cu); // 80243B04
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[5]); // 80243B08
  c->r[4]=R32(c->r[29]+0x00000050u); // 80243B0C
  c->r[3]=R32(c->r[29]+0x00000054u); // 80243B10
  c->r[0]=R32(c->r[29]+0x00000058u); // 80243B14
  W32(c->r[28]+0x000000D4u,c->r[6]); // 80243B18
  W32(c->r[28]+0x000000D8u,c->r[4]); // 80243B1C
  W32(c->r[28]+0x000000DCu,c->r[3]); // 80243B20
  W32(c->r[28]+0x000000E0u,c->r[0]); // 80243B24
  if (crb(c,2)) { goto L_80243B44; } // 80243B28
  c->r[0]=R8(c->r[28]+0x000000E4u); // 80243B2C
  cmps(c,0,(int32_t)c->r[0],0); // 80243B30
  if (crb(c,2)) { goto L_80243B44; } // 80243B34
  c->r[3]=c->r[28]+0x000000E4u; // 80243B38
  c->r[4]=c->r[29]+0x00000060u; // 80243B3C
  c->lr=0x80243B44u; f_8023DAC8(c); // 80243B40
L_80243B44:;
  c->r[3]=0u+0x80360000u; // 80243B44
  c->r[4]=0u+0x0000005Cu; // 80243B48
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 80243B4C
  c->lr=0x80243B54u; f_800EE128(c); // 80243B50
  cmps(c,0,(int32_t)c->r[3],0); // 80243B54
  if (crb(c,2)) { goto L_80243B84; } // 80243B58
  c->r[0]=R16(c->r[29]+0x0000005Cu); // 80243B5C
  c->r[5]=R32(c->r[30]+0x00000008u); // 80243B60
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80243B64
  c->r[4]=c->r[5]+c->r[0]; // 80243B68
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80243B6C
  c->r[4]=c->r[5]+c->r[0]; // 80243B70
  if (crb(c,2)) { goto L_80243B80; } // 80243B74
  c->r[5]=c->r[30]|c->r[30]; // 80243B78
  c->lr=0x80243B80u; f_8023FA00(c); // 80243B7C
L_80243B80:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 80243B80
L_80243B84:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80243B84
  c->r[3]=c->r[28]|c->r[28]; // 80243B88
  c->r[30]=R32(c->r[1]+0x00000018u); // 80243B8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80243B90
  c->r[28]=R32(c->r[1]+0x00000010u); // 80243B94
  c->r[0]=R32(c->r[1]+0x00000024u); // 80243B98
  c->lr=c->r[0]; // 80243B9C
  c->r[1]=c->r[1]+0x00000020u; // 80243BA0
  return; // 80243BA4
}

// __dt__Q36nw4hbm3lyt7PictureFv
void f_80243BA8(Ctx* __restrict c) {
  trace_call(0x80243BA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243BA8
  c->r[0]=c->lr; // 80243BAC
  cmps(c,0,(int32_t)c->r[3],0); // 80243BB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80243BB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80243BB8
  c->r[31]=c->r[4]|c->r[4]; // 80243BBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80243BC0
  c->r[30]=c->r[3]|c->r[3]; // 80243BC4
  if (crb(c,2)) { goto L_80243C5C; } // 80243BC8
  c->r[5]=R32(c->r[3]+0x00000028u); // 80243BCC
  c->r[4]=0u+0x802A0000u; // 80243BD0
  c->r[4]=c->r[4]+0x000008A0u; // 80243BD4
  cmps(c,0,(int32_t)c->r[5],0); // 80243BD8
  W32(c->r[3]+0x00000000u,c->r[4]); // 80243BDC
  if (crb(c,2)) { goto L_80243C20; } // 80243BE0
  c->r[0]=R8(c->r[5]+0x00000054u); // 80243BE4
  cmps(c,0,(int32_t)c->r[0],0); // 80243BE8
  if (!crb(c,2)) { goto L_80243C20; } // 80243BEC
  c->r[12]=R32(c->r[5]+0x00000000u); // 80243BF0
  c->r[3]=c->r[5]|c->r[5]; // 80243BF4
  c->r[4]=0u+0xFFFFFFFFu; // 80243BF8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80243BFC
  c->ctr=c->r[12]; // 80243C00
  if (true) { c->lr=0x80243C08u; dispatch(c,c->ctr); } // 80243C04
  c->r[3]=0u+0x80360000u; // 80243C08
  c->r[4]=R32(c->r[30]+0x00000028u); // 80243C0C
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 80243C10
  c->lr=0x80243C18u; f_800EE138(c); // 80243C14
  c->r[0]=0u+0x00000000u; // 80243C18
  W32(c->r[30]+0x00000028u,c->r[0]); // 80243C1C
L_80243C20:;
  c->r[3]=c->r[30]+0x000000E4u; // 80243C20
  c->lr=0x80243C28u; f_8023D8F8(c); // 80243C24
  c->r[4]=0u+0x80240000u; // 80243C28
  c->r[3]=c->r[30]+0x000000D4u; // 80243C2C
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 80243C30
  c->r[5]=0u+0x00000004u; // 80243C34
  c->r[6]=0u+0x00000004u; // 80243C38
  c->lr=0x80243C40u; f_800D4790(c); // 80243C3C
  c->r[3]=c->r[30]|c->r[30]; // 80243C40
  c->r[4]=0u+0x00000000u; // 80243C44
  c->lr=0x80243C4Cu; f_80242C34(c); // 80243C48
  cmps(c,0,(int32_t)c->r[31],0); // 80243C4C
  if (!crb(c,1)) { goto L_80243C5C; } // 80243C50
  c->r[3]=c->r[30]|c->r[30]; // 80243C54
  c->lr=0x80243C5Cu; f_8008DE54(c); // 80243C58
L_80243C5C:;
  c->r[3]=c->r[30]|c->r[30]; // 80243C5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80243C60
  c->r[30]=R32(c->r[1]+0x00000008u); // 80243C64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80243C68
  c->lr=c->r[0]; // 80243C6C
  c->r[1]=c->r[1]+0x00000010u; // 80243C70
  return; // 80243C74
}

// Append__Q36nw4hbm3lyt7PictureFP10TPLPalette
void f_80243C78(Ctx* __restrict c) {
  trace_call(0x80243C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243C78
  c->r[0]=c->lr; // 80243C7C
  c->r[5]=0u+0x00000000u; // 80243C80
  W32(c->r[1]+0x00000034u,c->r[0]); // 80243C84
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80243C88
  c->r[31]=c->r[3]|c->r[3]; // 80243C8C
  c->r[3]=c->r[1]+0x00000008u; // 80243C90
  c->lr=0x80243C98u; f_8023E504(c); // 80243C94
  c->r[12]=R32(c->r[31]+0x00000000u); // 80243C98
  c->r[3]=c->r[31]|c->r[31]; // 80243C9C
  c->r[4]=c->r[1]+0x00000008u; // 80243CA0
  c->r[12]=R32(c->r[12]+0x00000068u); // 80243CA4
  c->ctr=c->r[12]; // 80243CA8
  if (true) { c->lr=0x80243CB0u; dispatch(c,c->ctr); } // 80243CAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80243CB0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80243CB4
  c->lr=c->r[0]; // 80243CB8
  c->r[1]=c->r[1]+0x00000030u; // 80243CBC
  return; // 80243CC0
}

// Append__Q36nw4hbm3lyt7PictureFRC9_GXTexObj
void f_80243CC4(Ctx* __restrict c) {
  trace_call(0x80243CC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243CC4
  c->r[0]=c->lr; // 80243CC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 80243CCC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80243CD0
  c->r[31]=c->r[3]|c->r[3]; // 80243CD4
  W32(c->r[1]+0x00000028u,c->r[30]); // 80243CD8
  W32(c->r[1]+0x00000024u,c->r[29]); // 80243CDC
  c->r[29]=c->r[4]|c->r[4]; // 80243CE0
  W32(c->r[1]+0x00000020u,c->r[28]); // 80243CE4
  c->r[5]=R32(c->r[3]+0x00000028u); // 80243CE8
  c->r[0]=R32(c->r[5]+0x00000050u); // 80243CEC
  c->r[3]=R32(c->r[5]+0x0000004Cu); // 80243CF0
  c->r[28]=rotl(c->r[0],4)&0x0000000Fu; // 80243CF4
  c->r[0]=rotl(c->r[3],4)&0x0000000Fu; // 80243CF8
  cmpu(c,0,c->r[28],c->r[0]); // 80243CFC
  if (!crb(c,0)) { goto L_80243E14; } // 80243D00
  c->r[0]=rotl(c->r[3],12)&0x0000000Fu; // 80243D04
  cmpu(c,0,c->r[28],c->r[0]); // 80243D08
  if (crb(c,0)) { goto L_80243D14; } // 80243D0C
  goto L_80243E14; // 80243D10
L_80243D14:;
  c->r[0]=c->r[28]+0x00000001u; // 80243D14
  c->r[3]=c->r[5]|c->r[5]; // 80243D18
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80243D1C
  c->lr=0x80243D24u; f_80241500(c); // 80243D20
  c->r[3]=R32(c->r[31]+0x00000028u); // 80243D24
  c->r[4]=c->r[28]|c->r[28]; // 80243D28
  c->r[5]=c->r[29]|c->r[29]; // 80243D2C
  c->lr=0x80243D34u; f_80241768(c); // 80243D30
  c->r[3]=R32(c->r[31]+0x00000028u); // 80243D34
  c->r[0]=R32(c->r[3]+0x00000050u); // 80243D38
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 80243D3C
  c->lr=0x80243D44u; f_80241590(c); // 80243D40
  c->r[29]=0u+0x00000000u; // 80243D44
  c->r[30]=0u+0x00000001u; // 80243D48
  c->r[4]=0u+0x00000004u; // 80243D4C
  c->r[0]=0u+0x0000003Cu; // 80243D50
  W8(c->r[1]+0x0000000Bu,c->r[29]); // 80243D54
  c->r[3]=R32(c->r[31]+0x00000028u); // 80243D58
  W8(c->r[1]+0x00000008u,c->r[30]); // 80243D5C
  W8(c->r[1]+0x00000009u,c->r[4]); // 80243D60
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80243D64
  c->r[0]=R32(c->r[1]+0x00000008u); // 80243D68
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80243D6C
  c->lr=0x80243D74u; f_80241488(c); // 80243D70
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 80243D74
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 80243D78
  c->r[5]=c->r[3]+c->r[0]; // 80243D7C
  c->r[0]=R8(c->r[1]+0x0000000Du); // 80243D80
  W8(c->r[5]+0x00000000u,c->r[4]); // 80243D84
  c->r[3]=c->r[31]+0x000000E4u; // 80243D88
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 80243D8C
  W8(c->r[5]+0x00000001u,c->r[0]); // 80243D90
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 80243D94
  W8(c->r[5]+0x00000002u,c->r[4]); // 80243D98
  W8(c->r[5]+0x00000003u,c->r[0]); // 80243D9C
  c->r[4]=R32(c->r[31]+0x00000028u); // 80243DA0
  c->r[0]=R32(c->r[4]+0x00000050u); // 80243DA4
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 80243DA8
  c->lr=0x80243DB0u; f_8023D9D0(c); // 80243DAC
  c->r[3]=0u+0x80260000u; // 80243DB0
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80243DB4
  {uint32_t ea=c->r[3]+0x00001A98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80243DB8
  fcmp(c,0,c->f[0],c->f[1]); // 80243DBC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80243DC0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80243DC4
  if (!crb(c,2)) { goto L_80243DDC; } // 80243DC8
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80243DCC
  fcmp(c,0,c->f[0],c->f[1]); // 80243DD0
  if (!crb(c,2)) { goto L_80243DDC; } // 80243DD4
  c->r[29]=c->r[30]|c->r[30]; // 80243DD8
L_80243DDC:;
  cmps(c,0,(int32_t)c->r[29],0); // 80243DDC
  if (crb(c,2)) { goto L_80243E14; } // 80243DE0
  c->r[4]=R32(c->r[31]+0x00000028u); // 80243DE4
  c->r[0]=R32(c->r[4]+0x00000050u); // 80243DE8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80243DEC
  cmpu(c,0,c->r[0],0x00000001u); // 80243DF0
  if (!crb(c,2)) { goto L_80243E14; } // 80243DF4
  c->r[3]=c->r[1]+0x00000010u; // 80243DF8
  c->r[5]=0u+0x00000000u; // 80243DFC
  c->lr=0x80243E04u; f_802429FC(c); // 80243E00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80243E04
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 80243E08
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80243E0C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 80243E10
L_80243E14:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80243E14
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80243E18
  c->r[30]=R32(c->r[1]+0x00000028u); // 80243E1C
  c->r[29]=R32(c->r[1]+0x00000024u); // 80243E20
  c->r[28]=R32(c->r[1]+0x00000020u); // 80243E24
  c->lr=c->r[0]; // 80243E28
  c->r[1]=c->r[1]+0x00000030u; // 80243E2C
  return; // 80243E30
}

// GetVtxColor__Q36nw4hbm3lyt7PictureCFUl
void f_80243E34(Ctx* __restrict c) {
  trace_call(0x80243E34u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80243E34
  c->r[7]=c->r[4]+c->r[0]; // 80243E38
  c->r[6]=R8(c->r[7]+0x000000D4u); // 80243E3C
  c->r[5]=R8(c->r[7]+0x000000D5u); // 80243E40
  c->r[4]=R8(c->r[7]+0x000000D6u); // 80243E44
  c->r[0]=R8(c->r[7]+0x000000D7u); // 80243E48
  W8(c->r[3]+0x00000000u,c->r[6]); // 80243E4C
  W8(c->r[3]+0x00000001u,c->r[5]); // 80243E50
  W8(c->r[3]+0x00000002u,c->r[4]); // 80243E54
  W8(c->r[3]+0x00000003u,c->r[0]); // 80243E58
  return; // 80243E5C
}

// SetVtxColor__Q36nw4hbm3lyt7PictureFUlQ36nw4hbm2ut5Color
void f_80243E60(Ctx* __restrict c) {
  trace_call(0x80243E60u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80243E60
  c->r[6]=R8(c->r[5]+0x00000000u); // 80243E64
  c->r[4]=c->r[3]+c->r[0]; // 80243E68
  c->r[0]=R8(c->r[5]+0x00000001u); // 80243E6C
  W8(c->r[4]+0x000000D4u,c->r[6]); // 80243E70
  c->r[3]=R8(c->r[5]+0x00000002u); // 80243E74
  W8(c->r[4]+0x000000D5u,c->r[0]); // 80243E78
  c->r[0]=R8(c->r[5]+0x00000003u); // 80243E7C
  W8(c->r[4]+0x000000D6u,c->r[3]); // 80243E80
  W8(c->r[4]+0x000000D7u,c->r[0]); // 80243E84
  return; // 80243E88
}

// GetVtxColorElement__Q36nw4hbm3lyt7PictureCFUl
void f_80243E8C(Ctx* __restrict c) {
  trace_call(0x80243E8Cu);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80243E8C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80243E90
  c->r[3]=c->r[3]+c->r[5]; // 80243E94
  c->r[3]=c->r[3]+c->r[0]; // 80243E98
  c->r[3]=R8(c->r[3]+0x000000D4u); // 80243E9C
  return; // 80243EA0
}

// SetVtxColorElement__Q36nw4hbm3lyt7PictureFUlUc
void f_80243EA4(Ctx* __restrict c) {
  trace_call(0x80243EA4u);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80243EA4
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80243EA8
  c->r[3]=c->r[3]+c->r[6]; // 80243EAC
  c->r[3]=c->r[3]+c->r[0]; // 80243EB0
  W8(c->r[3]+0x000000D4u,c->r[5]); // 80243EB4
  return; // 80243EB8
}

// DrawSelf__Q36nw4hbm3lyt7PictureFRCQ36nw4hbm3lyt8DrawInfo
void f_80243EBC(Ctx* __restrict c) {
  trace_call(0x80243EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243EBC
  c->r[0]=c->lr; // 80243EC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80243EC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80243EC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80243ECC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80243ED0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80243ED4
  c->r[28]=c->r[3]|c->r[3]; // 80243ED8
  c->r[0]=R32(c->r[3]+0x00000028u); // 80243EDC
  cmps(c,0,(int32_t)c->r[0],0); // 80243EE0
  if (crb(c,2)) { goto L_80243F78; } // 80243EE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80243EE8
  c->r[12]=R32(c->r[12]+0x00000060u); // 80243EEC
  c->ctr=c->r[12]; // 80243EF0
  if (true) { c->lr=0x80243EF8u; dispatch(c,c->ctr); } // 80243EF4
  c->r[29]=R8(c->r[28]+0x000000CEu); // 80243EF8
  c->r[3]=c->r[28]+0x000000D4u; // 80243EFC
  c->r[4]=c->r[29]|c->r[29]; // 80243F00
  c->lr=0x80243F08u; f_8023DB5C(c); // 80243F04
  c->r[4]=c->r[3]|c->r[3]; // 80243F08
  c->r[3]=R32(c->r[28]+0x00000028u); // 80243F0C
  c->r[5]=c->r[29]|c->r[29]; // 80243F10
  c->r[12]=R32(c->r[3]+0x00000000u); // 80243F14
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80243F18
  c->ctr=c->r[12]; // 80243F1C
  if (true) { c->lr=0x80243F24u; dispatch(c,c->ctr); } // 80243F20
  c->r[4]=R8(c->r[28]+0x000000E5u); // 80243F24
  c->r[29]=c->r[3]|c->r[3]; // 80243F28
  c->lr=0x80243F30u; f_8023DC18(c); // 80243F2C
  cmps(c,0,(int32_t)c->r[29],0); // 80243F30
  if (crb(c,2)) { goto L_80243F40; } // 80243F34
  c->r[30]=c->r[28]+0x000000D4u; // 80243F38
  goto L_80243F44; // 80243F3C
L_80243F40:;
  c->r[30]=0u+0x00000000u; // 80243F40
L_80243F44:;
  c->r[29]=R32(c->r[28]+0x000000E8u); // 80243F44
  c->r[3]=c->r[28]|c->r[28]; // 80243F48
  c->r[31]=R8(c->r[28]+0x000000E5u); // 80243F4C
  c->lr=0x80243F54u; f_80243968(c); // 80243F50
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80243F54
  c->r[5]=c->r[31]|c->r[31]; // 80243F58
  c->r[6]=c->r[29]|c->r[29]; // 80243F5C
  c->r[7]=c->r[30]|c->r[30]; // 80243F60
  W32(c->r[1]+0x00000008u,c->r[3]); // 80243F64
  c->r[3]=c->r[1]+0x00000008u; // 80243F68
  c->r[4]=c->r[28]+0x0000004Cu; // 80243F6C
  c->r[8]=R8(c->r[28]+0x000000CEu); // 80243F70
  c->lr=0x80243F78u; f_8023E25C(c); // 80243F74
L_80243F78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80243F78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80243F7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80243F80
  c->r[29]=R32(c->r[1]+0x00000014u); // 80243F84
  c->r[28]=R32(c->r[1]+0x00000010u); // 80243F88
  c->lr=c->r[0]; // 80243F8C
  c->r[1]=c->r[1]+0x00000020u; // 80243F90
  return; // 80243F94
}

// GetRuntimeTypeInfo__Q36nw4hbm3lyt7PictureCFv
void f_80243F98(Ctx* __restrict c) {
  trace_call(0x80243F98u);
  c->r[3]=0u+0x80360000u; // 80243F98
  c->r[3]=c->r[3]+0xFFFFCE30u; // 80243F9C
  return; // 80243FA0
}

// __sinit_\lyt_picture_cpp
void f_80243FA4(Ctx* __restrict c) {
  trace_call(0x80243FA4u);
  c->r[4]=0u+0x80360000u; // 80243FA4
  c->r[3]=0u+0x80360000u; // 80243FA8
  c->r[4]=c->r[4]+0xFFFFCE28u; // 80243FAC
  W32(c->r[3]+0xFFFFCE30u,c->r[4]); // 80243FB0
  return; // 80243FB4
}

// __dt__Q36nw4hbm3lyt16ResourceAccessorFv
void f_80243FB8(Ctx* __restrict c) {
  trace_call(0x80243FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80243FB8
  c->r[0]=c->lr; // 80243FBC
  cmps(c,0,(int32_t)c->r[3],0); // 80243FC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80243FC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80243FC8
  c->r[31]=c->r[3]|c->r[3]; // 80243FCC
  if (crb(c,2)) { goto L_80243FE0; } // 80243FD0
  cmps(c,0,(int32_t)c->r[4],0); // 80243FD4
  if (!crb(c,1)) { goto L_80243FE0; } // 80243FD8
  c->lr=0x80243FE0u; f_8008DE54(c); // 80243FDC
L_80243FE0:;
  c->r[3]=c->r[31]|c->r[31]; // 80243FE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80243FE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80243FE8
  c->lr=c->r[0]; // 80243FEC
  c->r[1]=c->r[1]+0x00000010u; // 80243FF0
  return; // 80243FF4
}

// __ct__Q36nw4hbm3lyt16ResourceAccessorFv
void f_80243FF8(Ctx* __restrict c) {
  trace_call(0x80243FF8u);
  c->r[4]=0u+0x802A0000u; // 80243FF8
  c->r[4]=c->r[4]+0x00000940u; // 80243FFC
  W32(c->r[3]+0x00000000u,c->r[4]); // 80244000
  return; // 80244004
}

// GetFont__Q36nw4hbm3lyt16ResourceAccessorFPCc
void f_80244008(Ctx* __restrict c) {
  trace_call(0x80244008u);
  c->r[3]=0u+0x00000000u; // 80244008
  return; // 8024400C
}

// GetColor__25@unnamed@lyt_textBox_cpp@FRC11_GXColorS10
void f_80244010(Ctx* __restrict c) {
  trace_call(0x80244010u);
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 80244010
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80244014
  cmps(c,0,(int32_t)c->r[5],0); // 80244018
  if (!crb(c,0)) { goto L_80244028; } // 8024401C
  c->r[0]=0u+0x00000000u; // 80244020
  goto L_80244038; // 80244024
L_80244028:;
  cmps(c,0,(int32_t)c->r[5],255); // 80244028
  c->r[0]=0u+0x000000FFu; // 8024402C
  if (crb(c,1)) { goto L_80244038; } // 80244030
  c->r[0]=c->r[5]|c->r[5]; // 80244034
L_80244038:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80244038
  W8(c->r[1]+0x00000008u,c->r[0]); // 8024403C
  cmps(c,0,(int32_t)c->r[5],0); // 80244040
  if (!crb(c,0)) { goto L_80244050; } // 80244044
  c->r[0]=0u+0x00000000u; // 80244048
  goto L_80244060; // 8024404C
L_80244050:;
  cmps(c,0,(int32_t)c->r[5],255); // 80244050
  c->r[0]=0u+0x000000FFu; // 80244054
  if (crb(c,1)) { goto L_80244060; } // 80244058
  c->r[0]=c->r[5]|c->r[5]; // 8024405C
L_80244060:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 80244060
  W8(c->r[1]+0x00000009u,c->r[0]); // 80244064
  cmps(c,0,(int32_t)c->r[5],0); // 80244068
  if (!crb(c,0)) { goto L_80244078; } // 8024406C
  c->r[0]=0u+0x00000000u; // 80244070
  goto L_80244088; // 80244074
L_80244078:;
  cmps(c,0,(int32_t)c->r[5],255); // 80244078
  c->r[0]=0u+0x000000FFu; // 8024407C
  if (crb(c,1)) { goto L_80244088; } // 80244080
  c->r[0]=c->r[5]|c->r[5]; // 80244084
L_80244088:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80244088
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8024408C
  cmps(c,0,(int32_t)c->r[4],0); // 80244090
  if (!crb(c,0)) { goto L_802440A0; } // 80244094
  c->r[0]=0u+0x00000000u; // 80244098
  goto L_802440B0; // 8024409C
L_802440A0:;
  cmps(c,0,(int32_t)c->r[4],255); // 802440A0
  c->r[0]=0u+0x000000FFu; // 802440A4
  if (crb(c,1)) { goto L_802440B0; } // 802440A8
  c->r[0]=c->r[4]|c->r[4]; // 802440AC
L_802440B0:;
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802440B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 802440B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 802440B8
  c->r[1]=c->r[1]+0x00000010u; // 802440BC
  return; // 802440C0
}

// __ct__Q36nw4hbm3lyt7TextBoxFPCQ46nw4hbm3lyt3res7TextBoxRCQ36nw4hbm3lyt11ResBlockSet
void f_802440C4(Ctx* __restrict c) {
  trace_call(0x802440C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802440C4
  c->r[0]=c->lr; // 802440C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802440CC
  c->r[11]=c->r[1]+0x00000030u; // 802440D0
  c->lr=0x802440D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802440D4
  c->r[28]=c->r[3]|c->r[3]; // 802440D8
  c->r[29]=c->r[4]|c->r[4]; // 802440DC
  c->r[30]=c->r[5]|c->r[5]; // 802440E0
  c->lr=0x802440E8u; f_80242B0C(c); // 802440E4
  c->r[3]=0u+0x802A0000u; // 802440E8
  c->r[4]=0u+0x80240000u; // 802440EC
  c->r[3]=c->r[3]+0x0000095Cu; // 802440F0
  c->r[5]=0u+0x80240000u; // 802440F4
  W32(c->r[28]+0x00000000u,c->r[3]); // 802440F8
  c->r[3]=c->r[28]+0x000000D8u; // 802440FC
  c->r[4]=c->r[4]+0xFFFFF9F4u; // 80244100
  c->r[5]=c->r[5]+0xFFFFD7D0u; // 80244104
  c->r[6]=0u+0x00000004u; // 80244108
  c->r[7]=0u+0x00000002u; // 8024410C
  c->lr=0x80244114u; f_800D4698(c); // 80244110
  c->r[0]=R16(c->r[29]+0x0000004Cu); // 80244114
  c->r[3]=0u+0x80260000u; // 80244118
  {uint32_t ea=c->r[3]+0x00001AA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024411C
  c->r[31]=rotl(c->r[0],31)&0x0000FFFFu; cr0(c,c->r[31]); // 80244120
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 80244124
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 80244128
  if (crb(c,2)) { goto L_80244138; } // 8024412C
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 80244130
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 80244134
L_80244138:;
  c->r[3]=0u+0x55550000u; // 80244138
  c->r[0]=R8(c->r[28]+0x000000FCu); // 8024413C
  c->r[8]=c->r[3]+0x00005556u; // 80244140
  c->r[9]=0u+0x00000000u; // 80244144
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 80244148
  c->r[3]=0u+0x80260000u; // 8024414C
  {uint32_t ea=c->r[3]+0x00001AA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244150
  c->r[4]=0u+0x00000000u; // 80244154
  W32(c->r[28]+0x000000D4u,c->r[9]); // 80244158
  c->r[3]=c->r[28]+0x000000FDu; // 8024415C
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 80244160
  W16(c->r[28]+0x000000F8u,c->r[9]); // 80244164
  c->r[0]=c->r[5]+c->r[0]; // 80244168
  c->r[5]=0u+0x00000001u; // 8024416C
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 80244170
  W16(c->r[28]+0x000000FAu,c->r[9]); // 80244174
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 80244178
  c->r[6]=c->r[0]-c->r[6]; // 8024417C
  W32(c->r[28]+0x000000E0u,c->r[9]); // 80244180
  c->r[0]=c->r[6]+0x00000001u; // 80244184
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80244188
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8024418C
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 80244190
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80244194
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 80244198
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 8024419C
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 802441A0
  c->r[0]=c->r[6]+c->r[0]; // 802441A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802441A8
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 802441AC
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 802441B0
  c->r[0]=c->r[7]-c->r[0]; // 802441B4
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 802441B8
  W32(c->r[28]+0x000000F4u,c->r[9]); // 802441BC
  c->r[0]=c->r[6]+0x00000003u; // 802441C0
  W8(c->r[28]+0x000000FCu,c->r[0]); // 802441C4
  c->lr=0x802441CCu; f_80004688(c); // 802441C8
  cmps(c,0,(int32_t)c->r[31],0); // 802441CC
  if (crb(c,2)) { goto L_802441EC; } // 802441D0
  c->r[12]=R32(c->r[28]+0x00000000u); // 802441D4
  c->r[3]=c->r[28]|c->r[28]; // 802441D8
  c->r[4]=c->r[31]|c->r[31]; // 802441DC
  c->r[12]=R32(c->r[12]+0x00000064u); // 802441E0
  c->ctr=c->r[12]; // 802441E4
  if (true) { c->lr=0x802441ECu; dispatch(c,c->ctr); } // 802441E8
L_802441EC:;
  c->r[4]=R16(c->r[29]+0x0000004Eu); // 802441EC
  cmpu(c,0,c->r[4],0x00000002u); // 802441F0
  if (crb(c,0)) { goto L_80244230; } // 802441F4
  c->r[0]=R32(c->r[28]+0x000000D4u); // 802441F8
  cmps(c,0,(int32_t)c->r[0],0); // 802441FC
  if (crb(c,2)) { goto L_80244230; } // 80244200
  c->r[12]=R32(c->r[28]+0x00000000u); // 80244204
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 80244208
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8024420C
  c->r[4]=R32(c->r[29]+0x00000058u); // 80244210
  c->r[12]=R32(c->r[12]+0x00000070u); // 80244214
  c->r[3]=c->r[28]|c->r[28]; // 80244218
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8024421C
  c->r[5]=0u+0x00000000u; // 80244220
  c->r[4]=c->r[29]+c->r[4]; // 80244224
  c->ctr=c->r[12]; // 80244228
  if (true) { c->lr=0x80244230u; dispatch(c,c->ctr); } // 8024422C
L_80244230:;
  c->r[6]=R32(c->r[29]+0x0000005Cu); // 80244230
  c->r[5]=R32(c->r[29]+0x00000060u); // 80244234
  {uint32_t ea=c->r[29]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 80244238
  {uint32_t ea=c->r[29]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024423C
  c->r[4]=R8(c->r[29]+0x00000054u); // 80244240
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80244244
  {uint32_t ea=c->r[29]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244248
  c->r[0]=R16(c->r[29]+0x00000052u); // 8024424C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80244250
  W32(c->r[28]+0x000000D8u,c->r[6]); // 80244254
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80244258
  c->r[6]=c->r[3]+0x0000000Cu; // 8024425C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80244260
  W32(c->r[28]+0x000000DCu,c->r[5]); // 80244264
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[3]);} // 80244268
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[2]);} // 8024426C
  W8(c->r[28]+0x000000FCu,c->r[4]); // 80244270
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[1]);} // 80244274
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 80244278
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024427C
  c->r[0]=R32(c->r[6]+c->r[0]); // 80244280
  c->r[12]=R32(c->r[12]+0x00000010u); // 80244284
  c->r[31]=c->r[6]+c->r[0]; // 80244288
  c->r[4]=c->r[31]|c->r[31]; // 8024428C
  c->ctr=c->r[12]; // 80244290
  if (true) { c->lr=0x80244298u; dispatch(c,c->ctr); } // 80244294
  cmps(c,0,(int32_t)c->r[3],0); // 80244298
  if (crb(c,2)) { goto L_802442A8; } // 8024429C
  W32(c->r[28]+0x000000E0u,c->r[3]); // 802442A0
  goto L_8024431C; // 802442A4
L_802442A8:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 802442A8
  c->r[4]=0u+0x666F0000u; // 802442AC
  c->r[5]=c->r[31]|c->r[31]; // 802442B0
  c->r[6]=0u+0x00000000u; // 802442B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802442B8
  c->r[4]=c->r[4]+0x00006E74u; // 802442BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802442C0
  c->ctr=c->r[12]; // 802442C4
  if (true) { c->lr=0x802442CCu; dispatch(c,c->ctr); } // 802442C8
  cmps(c,0,(int32_t)c->r[3],0); // 802442CC
  c->r[27]=c->r[3]|c->r[3]; // 802442D0
  if (crb(c,2)) { goto L_8024431C; } // 802442D4
  c->r[3]=0u+0x80360000u; // 802442D8
  c->r[4]=0u+0x00000018u; // 802442DC
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 802442E0
  c->lr=0x802442E8u; f_800EE128(c); // 802442E4
  cmps(c,0,(int32_t)c->r[3],0); // 802442E8
  if (crb(c,2)) { goto L_8024431C; } // 802442EC
  c->r[31]=c->r[3]|c->r[3]; // 802442F0
  if (crb(c,2)) { goto L_80244300; } // 802442F4
  c->lr=0x802442FCu; f_80249D4C(c); // 802442F8
  c->r[31]=c->r[3]|c->r[3]; // 802442FC
L_80244300:;
  c->r[3]=c->r[31]|c->r[31]; // 80244300
  c->r[4]=c->r[27]|c->r[27]; // 80244304
  c->lr=0x8024430Cu; f_80249DE0(c); // 80244308
  c->r[0]=R8(c->r[28]+0x000000FDu); // 8024430C
  W32(c->r[28]+0x000000E0u,c->r[31]); // 80244310
  c->r[0]=c->r[0]|0x00000080u; // 80244314
  W8(c->r[28]+0x000000FDu,c->r[0]); // 80244318
L_8024431C:;
  c->r[3]=0u+0x80360000u; // 8024431C
  c->r[4]=0u+0x0000005Cu; // 80244320
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 80244324
  c->lr=0x8024432Cu; f_800EE128(c); // 80244328
  cmps(c,0,(int32_t)c->r[3],0); // 8024432C
  if (crb(c,2)) { goto L_8024435C; } // 80244330
  c->r[0]=R16(c->r[29]+0x00000050u); // 80244334
  c->r[5]=R32(c->r[30]+0x00000008u); // 80244338
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024433C
  c->r[4]=c->r[5]+c->r[0]; // 80244340
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80244344
  c->r[4]=c->r[5]+c->r[0]; // 80244348
  if (crb(c,2)) { goto L_80244358; } // 8024434C
  c->r[5]=c->r[30]|c->r[30]; // 80244350
  c->lr=0x80244358u; f_8023FA00(c); // 80244354
L_80244358:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 80244358
L_8024435C:;
  c->r[11]=c->r[1]+0x00000030u; // 8024435C
  c->r[3]=c->r[28]|c->r[28]; // 80244360
  c->lr=0x80244368u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80244364
  c->r[0]=R32(c->r[1]+0x00000034u); // 80244368
  c->lr=c->r[0]; // 8024436C
  c->r[1]=c->r[1]+0x00000030u; // 80244370
  return; // 80244374
}

// __dt__Q36nw4hbm3lyt7TextBoxFv
void f_80244378(Ctx* __restrict c) {
  trace_call(0x80244378u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80244378
  c->r[0]=c->lr; // 8024437C
  cmps(c,0,(int32_t)c->r[3],0); // 80244380
  W32(c->r[1]+0x00000034u,c->r[0]); // 80244384
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80244388
  c->r[31]=c->r[4]|c->r[4]; // 8024438C
  W32(c->r[1]+0x00000028u,c->r[30]); // 80244390
  c->r[30]=c->r[3]|c->r[3]; // 80244394
  if (crb(c,2)) { goto L_802444EC; } // 80244398
  c->r[0]=R8(c->r[3]+0x000000FDu); // 8024439C
  c->r[4]=0u+0x802A0000u; // 802443A0
  c->r[4]=c->r[4]+0x0000095Cu; // 802443A4
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 802443A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 802443AC
  if (crb(c,2)) { goto L_802443E8; } // 802443B0
  c->r[3]=R32(c->r[3]+0x000000E0u); // 802443B4
  c->r[4]=0u+0xFFFFFFFFu; // 802443B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802443BC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802443C0
  c->ctr=c->r[12]; // 802443C4
  if (true) { c->lr=0x802443CCu; dispatch(c,c->ctr); } // 802443C8
  c->r[3]=0u+0x80360000u; // 802443CC
  c->r[4]=R32(c->r[30]+0x000000E0u); // 802443D0
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 802443D4
  c->lr=0x802443DCu; f_800EE138(c); // 802443D8
  c->r[0]=R8(c->r[30]+0x000000FDu); // 802443DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 802443E0
  W8(c->r[30]+0x000000FDu,c->r[0]); // 802443E4
L_802443E8:;
  c->r[0]=0u+0x00000000u; // 802443E8
  W32(c->r[30]+0x000000E0u,c->r[0]); // 802443EC
  goto L_80244448; // 802443F0
  if (true) { c->lr=0x802443F8u; dispatch(c,c->ctr); } // 802443F4
  c->r[0]=c->r[3]^0x80000000u; // 802443F8
  c->r[3]=R32(c->r[30]+0x000000E0u); // 802443FC
  c->r[4]=0u+0x43300000u; // 80244400
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80244404
  c->r[12]=R32(c->r[3]+0x00000000u); // 80244408
  W32(c->r[1]+0x00000018u,c->r[4]); // 8024440C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80244410
  c->ctr=c->r[12]; // 80244414
  if (true) { c->lr=0x8024441Cu; dispatch(c,c->ctr); } // 80244418
  c->r[0]=c->r[3]^0x80000000u; // 8024441C
  W32(c->r[1]+0x00000020u,c->r[4]); // 80244420
  {uint32_t ea=c->r[3]+0x00001AA8u; c->f[1]=RF64(ea);} // 80244424
  W32(c->r[1]+0x00000024u,c->r[0]); // 80244428
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8024442C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80244430
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80244434
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[2]);} // 80244438
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8024443C
  {uint32_t ea=c->r[30]+0x000000E4u; WF32(ea,c->f[0]);} // 80244440
  goto L_80244460; // 80244444
L_80244448:;
  c->r[3]=0u+0x80260000u; // 80244448
  {uint32_t ea=c->r[3]+0x00001AA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024444C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80244450
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80244454
  {uint32_t ea=c->r[30]+0x000000E4u; WF32(ea,c->f[0]);} // 80244458
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 8024445C
L_80244460:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 80244460
  cmps(c,0,(int32_t)c->r[3],0); // 80244464
  if (crb(c,2)) { goto L_802444A4; } // 80244468
  c->r[0]=R8(c->r[3]+0x00000054u); // 8024446C
  cmps(c,0,(int32_t)c->r[0],0); // 80244470
  if (!crb(c,2)) { goto L_802444A4; } // 80244474
  c->r[12]=R32(c->r[3]+0x00000000u); // 80244478
  c->r[4]=0u+0xFFFFFFFFu; // 8024447C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80244480
  c->ctr=c->r[12]; // 80244484
  if (true) { c->lr=0x8024448Cu; dispatch(c,c->ctr); } // 80244488
  c->r[3]=0u+0x80360000u; // 8024448C
  c->r[4]=R32(c->r[30]+0x00000028u); // 80244490
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 80244494
  c->lr=0x8024449Cu; f_800EE138(c); // 80244498
  c->r[0]=0u+0x00000000u; // 8024449C
  W32(c->r[30]+0x00000028u,c->r[0]); // 802444A0
L_802444A4:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 802444A4
  c->r[3]=c->r[30]|c->r[30]; // 802444A8
  c->r[12]=R32(c->r[12]+0x00000068u); // 802444AC
  c->ctr=c->r[12]; // 802444B0
  if (true) { c->lr=0x802444B8u; dispatch(c,c->ctr); } // 802444B4
  c->r[4]=0u+0x80240000u; // 802444B8
  c->r[3]=c->r[30]+0x000000D8u; // 802444BC
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 802444C0
  c->r[5]=0u+0x00000004u; // 802444C4
  c->r[6]=0u+0x00000002u; // 802444C8
  c->lr=0x802444D0u; f_800D4790(c); // 802444CC
  c->r[3]=c->r[30]|c->r[30]; // 802444D0
  c->r[4]=0u+0x00000000u; // 802444D4
  c->lr=0x802444DCu; f_80242C34(c); // 802444D8
  cmps(c,0,(int32_t)c->r[31],0); // 802444DC
  if (!crb(c,1)) { goto L_802444EC; } // 802444E0
  c->r[3]=c->r[30]|c->r[30]; // 802444E4
  c->lr=0x802444ECu; f_8008DE54(c); // 802444E8
L_802444EC:;
  c->r[3]=c->r[30]|c->r[30]; // 802444EC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802444F0
  c->r[30]=R32(c->r[1]+0x00000028u); // 802444F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802444F8
  c->lr=c->r[0]; // 802444FC
  c->r[1]=c->r[1]+0x00000030u; // 80244500
  return; // 80244504
}

// GetVtxColor__Q36nw4hbm3lyt7TextBoxCFUl
void f_80244508(Ctx* __restrict c) {
  trace_call(0x80244508u);
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 80244508
  f_80244510(c); return; // 8024450C
}

// GetTextColor__Q36nw4hbm3lyt7TextBoxCFUl
void f_80244510(Ctx* __restrict c) {
  trace_call(0x80244510u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80244510
  c->r[7]=c->r[4]+c->r[0]; // 80244514
  c->r[6]=R8(c->r[7]+0x000000D8u); // 80244518
  c->r[5]=R8(c->r[7]+0x000000D9u); // 8024451C
  c->r[4]=R8(c->r[7]+0x000000DAu); // 80244520
  c->r[0]=R8(c->r[7]+0x000000DBu); // 80244524
  W8(c->r[3]+0x00000000u,c->r[6]); // 80244528
  W8(c->r[3]+0x00000001u,c->r[5]); // 8024452C
  W8(c->r[3]+0x00000002u,c->r[4]); // 80244530
  W8(c->r[3]+0x00000003u,c->r[0]); // 80244534
  return; // 80244538
}

// SetVtxColor__Q36nw4hbm3lyt7TextBoxFUlQ36nw4hbm2ut5Color
void f_8024453C(Ctx* __restrict c) {
  trace_call(0x8024453Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024453C
  c->r[0]=c->lr; // 80244540
  c->r[8]=R8(c->r[5]+0x00000000u); // 80244544
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80244548
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024454C
  c->r[7]=R8(c->r[5]+0x00000001u); // 80244550
  c->r[6]=R8(c->r[5]+0x00000002u); // 80244554
  c->r[0]=R8(c->r[5]+0x00000003u); // 80244558
  c->r[5]=c->r[1]+0x00000008u; // 8024455C
  W8(c->r[1]+0x00000008u,c->r[8]); // 80244560
  W8(c->r[1]+0x00000009u,c->r[7]); // 80244564
  W8(c->r[1]+0x0000000Au,c->r[6]); // 80244568
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8024456C
  c->lr=0x80244574u; f_80244584(c); // 80244570
  c->r[0]=R32(c->r[1]+0x00000014u); // 80244574
  c->lr=c->r[0]; // 80244578
  c->r[1]=c->r[1]+0x00000010u; // 8024457C
  return; // 80244580
}

// SetTextColor__Q36nw4hbm3lyt7TextBoxFUlQ36nw4hbm2ut5Color
void f_80244584(Ctx* __restrict c) {
  trace_call(0x80244584u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80244584
  c->r[6]=R8(c->r[5]+0x00000000u); // 80244588
  c->r[4]=c->r[3]+c->r[0]; // 8024458C
  c->r[0]=R8(c->r[5]+0x00000001u); // 80244590
  W8(c->r[4]+0x000000D8u,c->r[6]); // 80244594
  c->r[3]=R8(c->r[5]+0x00000002u); // 80244598
  W8(c->r[4]+0x000000D9u,c->r[0]); // 8024459C
  c->r[0]=R8(c->r[5]+0x00000003u); // 802445A0
  W8(c->r[4]+0x000000DAu,c->r[3]); // 802445A4
  W8(c->r[4]+0x000000DBu,c->r[0]); // 802445A8
  return; // 802445AC
}

// GetVtxColorElement__Q36nw4hbm3lyt7TextBoxCFUl
void f_802445B0(Ctx* __restrict c) {
  trace_call(0x802445B0u);
  c->r[5]=rotl(c->r[4],31)&0x7FFFFFFCu; // 802445B0
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 802445B4
  c->r[3]=c->r[3]+c->r[5]; // 802445B8
  c->r[3]=c->r[3]+c->r[0]; // 802445BC
  c->r[3]=R8(c->r[3]+0x000000D8u); // 802445C0
  return; // 802445C4
}

// SetVtxColorElement__Q36nw4hbm3lyt7TextBoxFUlUc
void f_802445C8(Ctx* __restrict c) {
  trace_call(0x802445C8u);
  c->r[6]=rotl(c->r[4],31)&0x7FFFFFFCu; // 802445C8
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 802445CC
  c->r[3]=c->r[3]+c->r[6]; // 802445D0
  c->r[3]=c->r[3]+c->r[0]; // 802445D4
  W8(c->r[3]+0x000000D8u,c->r[5]); // 802445D8
  return; // 802445DC
}

// DrawSelf__Q36nw4hbm3lyt7TextBoxFRCQ36nw4hbm3lyt8DrawInfo
void f_802445E0(Ctx* __restrict c) {
  trace_call(0x802445E0u);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 802445E0
  c->r[0]=c->lr; // 802445E4
  W32(c->r[1]+0x00000204u,c->r[0]); // 802445E8
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 802445EC
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 802445F0
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[30]);} // 802445F4
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,30,ea,0,0);} // 802445F8
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[29]);} // 802445FC
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,29,ea,0,0);} // 80244600
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[28]);} // 80244604
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,28,ea,0,0);} // 80244608
  c->r[11]=c->r[1]+0x000001C0u; // 8024460C
  c->lr=0x80244614u; f_800D49E0(c); // 80244610
  c->r[0]=R32(c->r[3]+0x000000D4u); // 80244614
  c->r[14]=0u+0x80260000u; // 80244618
  c->r[29]=c->r[3]|c->r[3]; // 8024461C
  cmps(c,0,(int32_t)c->r[0],0); // 80244620
  c->r[14]=c->r[14]+0x00001AA0u; // 80244624
  if (crb(c,2)) { goto L_80244B10; } // 80244628
  c->r[0]=R32(c->r[3]+0x000000E0u); // 8024462C
  cmps(c,0,(int32_t)c->r[0],0); // 80244630
  if (crb(c,2)) { goto L_80244B10; } // 80244634
  c->r[0]=R32(c->r[3]+0x00000028u); // 80244638
  cmps(c,0,(int32_t)c->r[0],0); // 8024463C
  if (!crb(c,2)) { goto L_80244648; } // 80244640
  goto L_80244B10; // 80244644
L_80244648:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80244648
  c->r[12]=R32(c->r[12]+0x00000060u); // 8024464C
  c->ctr=c->r[12]; // 80244650
  if (true) { c->lr=0x80244658u; dispatch(c,c->ctr); } // 80244654
  c->r[3]=c->r[1]+0x000000C8u; // 80244658
  c->lr=0x80244660u; f_8024AE84(c); // 8024465C
  c->r[4]=R32(c->r[29]+0x000000E0u); // 80244660
  c->r[3]=c->r[1]+0x000000C8u; // 80244664
  c->lr=0x8024466Cu; f_802481C8(c); // 80244668
  {uint32_t ea=c->r[29]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024466C
  c->r[3]=c->r[1]+0x000000C8u; // 80244670
  {uint32_t ea=c->r[29]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80244674
  c->lr=0x8024467Cu; f_802490D4(c); // 80244678
  {uint32_t ea=c->r[29]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024467C
  c->r[3]=c->r[1]+0x000000C8u; // 80244680
  c->lr=0x80244688u; f_8024AFC4(c); // 80244684
  {uint32_t ea=c->r[29]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244688
  c->r[3]=c->r[1]+0x000000C8u; // 8024468C
  c->lr=0x80244694u; f_8024AFCC(c); // 80244690
  c->r[0]=R8(c->r[29]+0x000000D8u); // 80244694
  c->r[3]=c->r[1]+0x00000030u; // 80244698
  c->r[4]=c->r[1]+0x00000020u; // 8024469C
  W8(c->r[1]+0x00000020u,c->r[0]); // 802446A0
  c->r[0]=R8(c->r[29]+0x000000D9u); // 802446A4
  W8(c->r[1]+0x00000021u,c->r[0]); // 802446A8
  c->r[0]=R8(c->r[29]+0x000000DAu); // 802446AC
  W8(c->r[1]+0x00000022u,c->r[0]); // 802446B0
  c->r[0]=R8(c->r[29]+0x000000DBu); // 802446B4
  W8(c->r[1]+0x00000023u,c->r[0]); // 802446B8
  c->r[5]=R8(c->r[29]+0x000000CEu); // 802446BC
  c->lr=0x802446C4u; f_8023DBC4(c); // 802446C0
  c->r[0]=R8(c->r[29]+0x000000DCu); // 802446C4
  c->r[3]=c->r[1]+0x0000002Cu; // 802446C8
  c->r[4]=c->r[1]+0x0000001Cu; // 802446CC
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 802446D0
  c->r[0]=R8(c->r[29]+0x000000DDu); // 802446D4
  W8(c->r[1]+0x0000001Du,c->r[0]); // 802446D8
  c->r[0]=R8(c->r[29]+0x000000DEu); // 802446DC
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 802446E0
  c->r[0]=R8(c->r[29]+0x000000DFu); // 802446E4
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 802446E8
  c->r[5]=R8(c->r[29]+0x000000CEu); // 802446EC
  c->lr=0x802446F4u; f_8023DBC4(c); // 802446F0
  c->r[5]=R32(c->r[1]+0x00000030u); // 802446F4
  c->r[3]=c->r[1]+0x000000C8u; // 802446F8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 802446FC
  c->r[4]=0u+0x00000000u; // 80244700
  cmpu(c,0,c->r[5],c->r[0]); // 80244704
  if (crb(c,2)) { goto L_80244710; } // 80244708
  c->r[4]=0u+0x00000002u; // 8024470C
L_80244710:;
  c->lr=0x80244714u; f_80248C94(c); // 80244710
  c->r[5]=R32(c->r[1]+0x00000030u); // 80244714
  c->r[3]=c->r[1]+0x000000C8u; // 80244718
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8024471C
  c->r[4]=c->r[1]+0x00000018u; // 80244720
  W32(c->r[1]+0x00000018u,c->r[5]); // 80244724
  c->r[5]=c->r[1]+0x00000014u; // 80244728
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024472C
  c->lr=0x80244734u; f_80248F44(c); // 80244730
  c->r[6]=R32(c->r[29]+0x00000028u); // 80244734
  c->r[3]=c->r[1]+0x00000028u; // 80244738
  c->r[4]=c->r[1]+0x00000040u; // 8024473C
  c->r[5]=R16(c->r[6]+0x00000024u); // 80244740
  c->r[0]=R16(c->r[6]+0x00000026u); // 80244744
  W16(c->r[1]+0x00000040u,c->r[5]); // 80244748
  W16(c->r[1]+0x00000042u,c->r[0]); // 8024474C
  c->r[5]=R16(c->r[6]+0x00000028u); // 80244750
  c->r[0]=R16(c->r[6]+0x0000002Au); // 80244754
  W16(c->r[1]+0x00000044u,c->r[5]); // 80244758
  W16(c->r[1]+0x00000046u,c->r[0]); // 8024475C
  c->lr=0x80244764u; f_80244010(c); // 80244760
  c->r[6]=R32(c->r[29]+0x00000028u); // 80244764
  c->r[3]=c->r[1]+0x00000024u; // 80244768
  c->r[4]=c->r[1]+0x00000038u; // 8024476C
  c->r[5]=R16(c->r[6]+0x0000002Cu); // 80244770
  c->r[0]=R16(c->r[6]+0x0000002Eu); // 80244774
  W16(c->r[1]+0x00000038u,c->r[5]); // 80244778
  W16(c->r[1]+0x0000003Au,c->r[0]); // 8024477C
  c->r[5]=R16(c->r[6]+0x00000030u); // 80244780
  c->r[0]=R16(c->r[6]+0x00000032u); // 80244784
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 80244788
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 8024478C
  c->lr=0x80244794u; f_80244010(c); // 80244790
  c->r[5]=R32(c->r[1]+0x00000028u); // 80244794
  c->r[3]=c->r[1]+0x000000C8u; // 80244798
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024479C
  c->r[4]=c->r[1]+0x00000010u; // 802447A0
  W32(c->r[1]+0x00000010u,c->r[5]); // 802447A4
  c->r[5]=c->r[1]+0x0000000Cu; // 802447A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802447AC
  c->lr=0x802447B4u; f_80248C50(c); // 802447B0
  c->r[4]=R32(c->r[29]+0x000000F4u); // 802447B4
  cmps(c,0,(int32_t)c->r[4],0); // 802447B8
  if (crb(c,2)) { goto L_802447C8; } // 802447BC
  c->r[3]=c->r[1]+0x000000C8u; // 802447C0
  c->lr=0x802447C8u; f_8024AFE4(c); // 802447C4
L_802447C8:;
  c->r[3]=c->r[1]+0x000000C8u; // 802447C8
  c->lr=0x802447D0u; f_802481D8(c); // 802447CC
  c->r[4]=c->r[29]|c->r[29]; // 802447D0
  c->r[3]=c->r[1]+0x00000058u; // 802447D4
  c->r[5]=c->r[1]+0x000000C8u; // 802447D8
  c->lr=0x802447E0u; f_802451E4(c); // 802447DC
  c->r[3]=0u+0x55550000u; // 802447E0
  c->r[4]=R8(c->r[29]+0x000000FCu); // 802447E4
  c->r[0]=c->r[3]+0x00005556u; // 802447E8
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 802447EC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802447F0
  c->r[0]=c->r[3]+c->r[0]; // 802447F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802447F8
  c->r[0]=c->r[4]-c->r[0]; // 802447FC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80244800
  cmps(c,0,(int32_t)c->r[0],1); // 80244804
  if (crb(c,2)) { goto L_80244828; } // 80244808
  if (!crb(c,0)) { goto L_80244814; } // 8024480C
  goto L_80244820; // 80244810
L_80244814:;
  cmps(c,0,(int32_t)c->r[0],3); // 80244814
  if (!crb(c,0)) { goto L_80244820; } // 80244818
  goto L_80244830; // 8024481C
L_80244820:;
  {uint32_t ea=c->r[14]+0x00000000u; c->f[28]=c->ps1[28]=RF32(ea);} // 80244820
  goto L_80244834; // 80244824
L_80244828:;
  {uint32_t ea=c->r[14]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 80244828
  goto L_80244834; // 8024482C
L_80244830:;
  {uint32_t ea=c->r[14]+0x00000014u; c->f[28]=c->ps1[28]=RF32(ea);} // 80244830
L_80244834:;
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244834
  c->r[3]=c->r[1]+0x000000C8u; // 80244838
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024483C
  c->r[31]=R32(c->r[29]+0x000000D4u); // 80244840
  c->f[29]=c->ps1[29]=S(c->f[1]-c->f[0]); // 80244844
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244848
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024484C
  c->lr=0x80244854u; f_8024941C(c); // 80244850
  c->r[30]=R16(c->r[29]+0x000000FAu); // 80244854
  cmps(c,0,(int32_t)c->r[30],0); // 80244858
  if (!crb(c,1)) { goto L_80244B04; } // 8024485C
  {uint32_t ea=c->r[14]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80244860
  goto L_80244AFC; // 80244864
L_80244868:;
  c->r[15]=R8(c->r[1]+0x000000E6u); // 80244868
  c->f[1]=c->f[31]; // 8024486C
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80244870
  c->f[2]=c->f[31]; // 80244874
  c->r[0]=R8(c->r[1]+0x000000E4u); // 80244878
  c->r[3]=c->r[1]+0x00000068u; // 8024487C
  W32(c->r[1]+0x00000168u,c->r[15]); // 80244880
  c->r[15]=R8(c->r[1]+0x000000E7u); // 80244884
  W8(c->r[1]+0x00000084u,c->r[0]); // 80244888
  c->r[0]=R32(c->r[1]+0x00000168u); // 8024488C
  W32(c->r[1]+0x00000128u,c->r[15]); // 80244890
  c->r[15]=R32(c->r[1]+0x000000E8u); // 80244894
  W8(c->r[1]+0x00000086u,c->r[0]); // 80244898
  c->r[0]=R32(c->r[1]+0x00000128u); // 8024489C
  W32(c->r[1]+0x0000012Cu,c->r[15]); // 802448A0
  c->r[15]=R32(c->r[1]+0x000000ECu); // 802448A4
  W8(c->r[1]+0x00000087u,c->r[0]); // 802448A8
  c->r[0]=R32(c->r[1]+0x0000012Cu); // 802448AC
  W32(c->r[1]+0x00000130u,c->r[15]); // 802448B0
  c->r[15]=R32(c->r[1]+0x000000F0u); // 802448B4
  W32(c->r[1]+0x00000088u,c->r[0]); // 802448B8
  c->r[0]=R32(c->r[1]+0x00000130u); // 802448BC
  W32(c->r[1]+0x00000134u,c->r[15]); // 802448C0
  c->r[15]=R32(c->r[1]+0x000000F4u); // 802448C4
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 802448C8
  c->r[0]=R32(c->r[1]+0x00000134u); // 802448CC
  W32(c->r[1]+0x00000138u,c->r[15]); // 802448D0
  c->r[15]=R32(c->r[1]+0x000000F8u); // 802448D4
  W32(c->r[1]+0x00000090u,c->r[0]); // 802448D8
  c->r[0]=R32(c->r[1]+0x00000138u); // 802448DC
  W32(c->r[1]+0x0000013Cu,c->r[15]); // 802448E0
  c->r[15]=R32(c->r[1]+0x000000FCu); // 802448E4
  W32(c->r[1]+0x00000094u,c->r[0]); // 802448E8
  c->r[0]=R32(c->r[1]+0x0000013Cu); // 802448EC
  W32(c->r[1]+0x00000140u,c->r[15]); // 802448F0
  c->r[15]=R32(c->r[1]+0x00000100u); // 802448F4
  W32(c->r[1]+0x00000098u,c->r[0]); // 802448F8
  c->r[0]=R32(c->r[1]+0x00000140u); // 802448FC
  W32(c->r[1]+0x00000144u,c->r[15]); // 80244900
  c->r[15]=R32(c->r[1]+0x00000104u); // 80244904
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80244908
  c->r[0]=R32(c->r[1]+0x00000144u); // 8024490C
  W32(c->r[1]+0x00000148u,c->r[15]); // 80244910
  c->r[15]=R16(c->r[1]+0x00000108u); // 80244914
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80244918
  c->r[0]=R32(c->r[1]+0x00000148u); // 8024491C
  W32(c->r[1]+0x0000014Cu,c->r[15]); // 80244920
  c->r[15]=R8(c->r[1]+0x0000010Au); // 80244924
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80244928
  c->r[0]=R32(c->r[1]+0x0000014Cu); // 8024492C
  W32(c->r[1]+0x00000150u,c->r[15]); // 80244930
  c->r[15]=R8(c->r[1]+0x0000010Bu); // 80244934
  W16(c->r[1]+0x000000A8u,c->r[0]); // 80244938
  c->r[0]=R32(c->r[1]+0x00000150u); // 8024493C
  W32(c->r[1]+0x00000154u,c->r[15]); // 80244940
  c->r[15]=R32(c->r[1]+0x00000110u); // 80244944
  W8(c->r[1]+0x000000AAu,c->r[0]); // 80244948
  c->r[0]=R32(c->r[1]+0x00000154u); // 8024494C
  W32(c->r[1]+0x00000158u,c->r[15]); // 80244950
  c->r[15]=R32(c->r[1]+0x0000011Cu); // 80244954
  W8(c->r[1]+0x000000ABu,c->r[0]); // 80244958
  c->r[0]=R32(c->r[1]+0x00000158u); // 8024495C
  W32(c->r[1]+0x0000015Cu,c->r[15]); // 80244960
  c->r[15]=R32(c->r[1]+0x00000120u); // 80244964
  W32(c->r[1]+0x000000B0u,c->r[0]); // 80244968
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 8024496C
  W32(c->r[1]+0x00000160u,c->r[15]); // 80244970
  c->r[15]=R32(c->r[1]+0x00000124u); // 80244974
  W32(c->r[1]+0x000000BCu,c->r[0]); // 80244978
  c->r[0]=R32(c->r[1]+0x00000160u); // 8024497C
  c->r[16]=R32(c->r[1]+0x000000C8u); // 80244980
  c->r[17]=R32(c->r[1]+0x000000CCu); // 80244984
  c->r[18]=R8(c->r[1]+0x000000D0u); // 80244988
  c->r[19]=R8(c->r[1]+0x000000D1u); // 8024498C
  c->r[20]=R8(c->r[1]+0x000000D2u); // 80244990
  c->r[21]=R8(c->r[1]+0x000000D3u); // 80244994
  c->r[22]=R8(c->r[1]+0x000000D4u); // 80244998
  c->r[23]=R8(c->r[1]+0x000000D5u); // 8024499C
  c->r[24]=R8(c->r[1]+0x000000D6u); // 802449A0
  c->r[25]=R8(c->r[1]+0x000000D7u); // 802449A4
  c->r[26]=R8(c->r[1]+0x000000D8u); // 802449A8
  c->r[27]=R8(c->r[1]+0x000000D9u); // 802449AC
  c->r[28]=R8(c->r[1]+0x000000DAu); // 802449B0
  c->r[12]=R8(c->r[1]+0x000000DBu); // 802449B4
  c->r[11]=R8(c->r[1]+0x000000DCu); // 802449B8
  c->r[10]=R8(c->r[1]+0x000000DDu); // 802449BC
  c->r[9]=R8(c->r[1]+0x000000DEu); // 802449C0
  c->r[8]=R8(c->r[1]+0x000000DFu); // 802449C4
  c->r[7]=R8(c->r[1]+0x000000E0u); // 802449C8
  c->r[6]=R8(c->r[1]+0x000000E1u); // 802449CC
  c->r[5]=R8(c->r[1]+0x000000E2u); // 802449D0
  c->r[4]=R8(c->r[1]+0x000000E3u); // 802449D4
  c->r[14]=R8(c->r[1]+0x000000E5u); // 802449D8
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802449DC
  {uint32_t ea=c->r[1]+0x00000114u; c->f[3]=c->ps1[3]=RF32(ea);} // 802449E0
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 802449E4
  W32(c->r[1]+0x000000C0u,c->r[0]); // 802449E8
  c->r[0]=c->r[15]|c->r[15]; // 802449EC
  W32(c->r[1]+0x00000164u,c->r[15]); // 802449F0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 802449F4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[31]);} // 802449F8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[31]);} // 802449FC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[31]);} // 80244A00
  W32(c->r[1]+0x00000068u,c->r[16]); // 80244A04
  W32(c->r[1]+0x0000006Cu,c->r[17]); // 80244A08
  W8(c->r[1]+0x00000070u,c->r[18]); // 80244A0C
  W8(c->r[1]+0x00000071u,c->r[19]); // 80244A10
  W8(c->r[1]+0x00000072u,c->r[20]); // 80244A14
  W8(c->r[1]+0x00000073u,c->r[21]); // 80244A18
  W8(c->r[1]+0x00000074u,c->r[22]); // 80244A1C
  W8(c->r[1]+0x00000075u,c->r[23]); // 80244A20
  W8(c->r[1]+0x00000076u,c->r[24]); // 80244A24
  W8(c->r[1]+0x00000077u,c->r[25]); // 80244A28
  W8(c->r[1]+0x00000078u,c->r[26]); // 80244A2C
  W8(c->r[1]+0x00000079u,c->r[27]); // 80244A30
  W8(c->r[1]+0x0000007Au,c->r[28]); // 80244A34
  W8(c->r[1]+0x0000007Bu,c->r[12]); // 80244A38
  W8(c->r[1]+0x0000007Cu,c->r[11]); // 80244A3C
  W8(c->r[1]+0x0000007Du,c->r[10]); // 80244A40
  W8(c->r[1]+0x0000007Eu,c->r[9]); // 80244A44
  W8(c->r[1]+0x0000007Fu,c->r[8]); // 80244A48
  W8(c->r[1]+0x00000080u,c->r[7]); // 80244A4C
  W8(c->r[1]+0x00000081u,c->r[6]); // 80244A50
  W8(c->r[1]+0x00000082u,c->r[5]); // 80244A54
  W8(c->r[1]+0x00000083u,c->r[4]); // 80244A58
  W8(c->r[1]+0x00000085u,c->r[14]); // 80244A5C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[4]);} // 80244A60
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[3]);} // 80244A64
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 80244A68
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80244A6C
  c->lr=0x80244A74u; f_8024941C(c); // 80244A70
  c->f[1]=c->f[30]; // 80244A74
  c->r[5]=c->r[31]|c->r[31]; // 80244A78
  c->r[6]=c->r[30]|c->r[30]; // 80244A7C
  c->r[3]=c->r[1]+0x00000048u; // 80244A80
  c->r[4]=c->r[1]+0x00000068u; // 80244A84
  c->r[7]=c->r[1]+0x00000008u; // 80244A88
  c->lr=0x80244A90u; f_80244B48(c); // 80244A8C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244A90
  c->r[14]=c->r[3]|c->r[3]; // 80244A94
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244A98
  c->r[3]=c->r[1]+0x00000068u; // 80244A9C
  c->r[4]=0u+0xFFFFFFFFu; // 80244AA0
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 80244AA4
  c->lr=0x80244AACu; f_8024AEE0(c); // 80244AA8
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[30]); // 80244AAC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244AB0
  c->r[3]=c->r[1]+0x000000C8u; // 80244AB4
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 80244AB8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80244ABC
  c->lr=0x80244AC4u; f_80249428(c); // 80244AC0
  c->r[4]=c->r[31]|c->r[31]; // 80244AC4
  c->r[5]=c->r[14]|c->r[14]; // 80244AC8
  c->r[3]=c->r[1]+0x000000C8u; // 80244ACC
  c->lr=0x80244AD4u; f_8024AFF4(c); // 80244AD0
  c->r[0]=R8(c->r[1]+0x00000008u); // 80244AD4
  cmps(c,0,(int32_t)c->r[0],0); // 80244AD8
  if (crb(c,2)) { goto L_80244AF0; } // 80244ADC
  c->r[4]=0u+0x802A0000u; // 80244AE0
  c->r[3]=c->r[1]+0x000000C8u; // 80244AE4
  c->r[4]=c->r[4]+0x00000958u; // 80244AE8
  c->lr=0x80244AF0u; f_8024B210(c); // 80244AEC
L_80244AF0:;
  c->r[0]=rotl(c->r[14],1)&0xFFFFFFFEu; // 80244AF0
  c->r[30]=c->r[30]-c->r[14]; // 80244AF4
  c->r[31]=c->r[31]+c->r[0]; // 80244AF8
L_80244AFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80244AFC
  if (crb(c,1)) { IRQCHK(c); goto L_80244868; } // 80244B00
L_80244B04:;
  c->r[3]=c->r[1]+0x000000C8u; // 80244B04
  c->r[4]=0u+0xFFFFFFFFu; // 80244B08
  c->lr=0x80244B10u; f_8024AEE0(c); // 80244B0C
L_80244B10:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 80244B10
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 80244B14
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,30,ea,0,0);} // 80244B18
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[30]=RF64(ea);} // 80244B1C
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,29,ea,0,0);} // 80244B20
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[29]=RF64(ea);} // 80244B24
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,28,ea,0,0);} // 80244B28
  c->r[11]=c->r[1]+0x000001C0u; // 80244B2C
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[28]=RF64(ea);} // 80244B30
  c->lr=0x80244B38u; f_800D4A2C(c); // 80244B34
  c->r[0]=R32(c->r[1]+0x00000204u); // 80244B38
  c->lr=c->r[0]; // 80244B3C
  c->r[1]=c->r[1]+0x00000200u; // 80244B40
  return; // 80244B44
}

// CalcLineRectImpl<w>__25@unnamed@lyt_textBox_cpp@FPQ36nw4hbm2ut4RectPQ36nw4hbm2ut17TextWriterBase<w>PCwifPb_i
void f_80244B48(Ctx* __restrict c) {
  trace_call(0x80244B48u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80244B48
  c->r[0]=c->lr; // 80244B4C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80244B50
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 80244B54
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 80244B58
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 80244B5C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 80244B60
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 80244B64
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 80244B68
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 80244B6C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 80244B70
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 80244B74
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 80244B78
  c->r[11]=c->r[1]+0x00000080u; // 80244B7C
  c->lr=0x80244B84u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80244B80
  c->r[0]=0u+0x00000000u; // 80244B84
  c->f[30]=c->f[1]; // 80244B88
  c->r[25]=c->r[4]|c->r[4]; // 80244B8C
  W32(c->r[1]+0x00000040u,c->r[0]); // 80244B90
  c->r[24]=c->r[3]|c->r[3]; // 80244B94
  c->r[26]=c->r[5]|c->r[5]; // 80244B98
  W32(c->r[1]+0x00000044u,c->r[0]); // 80244B9C
  c->r[27]=c->r[6]|c->r[6]; // 80244BA0
  c->r[28]=c->r[7]|c->r[7]; // 80244BA4
  W32(c->r[1]+0x00000048u,c->r[0]); // 80244BA8
  c->r[3]=c->r[25]|c->r[25]; // 80244BAC
  W32(c->r[1]+0x00000038u,c->r[4]); // 80244BB0
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 80244BB4
  c->lr=0x80244BBCu; f_802481D0(c); // 80244BB8
  c->r[23]=0u+0x80260000u; // 80244BBC
  c->r[4]=c->r[3]|c->r[3]; // 80244BC0
  {uint32_t ea=c->r[23]+0x00001AA0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80244BC4
  c->r[3]=c->r[1]+0x00000028u; // 80244BC8
  c->r[31]=0u+0x00000000u; // 80244BCC
  c->lr=0x80244BD4u; f_80244F74(c); // 80244BD0
  c->f[0]=c->f[31]; // 80244BD4
  c->r[30]=R32(c->r[1]+0x00000028u); // 80244BD8
  c->r[3]=c->r[25]|c->r[25]; // 80244BDC
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 80244BE0
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[0]);} // 80244BE4
  c->lr=0x80244BECu; f_8024AF38(c); // 80244BE8
  c->f[0]=c->f[31]; // 80244BEC
  fcmp(c,0,c->f[0],c->f[1]); // 80244BF0
  if (!crb(c,1)) { goto L_80244BFC; } // 80244BF4
  goto L_80244C00; // 80244BF8
L_80244BFC:;
  c->f[1]=c->f[0]; // 80244BFC
L_80244C00:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[1]);} // 80244C00
  c->r[3]=c->r[25]|c->r[25]; // 80244C04
  c->lr=0x80244C0Cu; f_8024AF38(c); // 80244C08
  c->r[3]=0u+0x80260000u; // 80244C0C
  {uint32_t ea=c->r[3]+0x00001AA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244C10
  fcmp(c,0,c->f[0],c->f[1]); // 80244C14
  if (!crb(c,0)) { goto L_80244C20; } // 80244C18
  goto L_80244C24; // 80244C1C
L_80244C20:;
  c->f[1]=c->f[0]; // 80244C20
L_80244C24:;
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[1]);} // 80244C24
  c->r[0]=0u+0x00000000u; // 80244C28
  c->r[3]=c->r[1]+0x00000028u; // 80244C2C
  c->r[12]=c->r[1]+0x0000002Cu; // 80244C30
  W8(c->r[28]+0x00000000u,c->r[0]); // 80244C34
  W32(c->r[1]+0x00000028u,c->r[26]); // 80244C38
  {uint32_t ea=c->r[24]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80244C3C
  {uint32_t ea=c->r[24]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80244C40
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244C44
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80244C48
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80244C4C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 80244C50
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80244C54
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80244C58
  c->lr=0x80244C60u; f_800D48C4(c); // 80244C5C
  c->r[0]=c->r[0]|0x00000000u; // 80244C60
  c->r[5]=0u+0x80260000u; // 80244C64
  c->r[4]=0u+0x80260000u; // 80244C68
  {uint32_t ea=c->r[5]+0x00001AA0u; c->f[27]=c->ps1[27]=RF32(ea);} // 80244C6C
  c->r[29]=c->r[3]|c->r[3]; // 80244C70
  {uint32_t ea=c->r[4]+0x00001AA8u; c->f[29]=RF64(ea);} // 80244C74
  c->r[23]=0u+0x43300000u; // 80244C78
  goto L_80244EBC; // 80244C7C
L_80244C80:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 80244C80
  cmps(c,0,(int32_t)c->r[0],32); // 80244C84
  if (!crb(c,0)) { goto L_80244DC0; } // 80244C88
  c->r[0]=cntlz(c->r[31]); // 80244C8C
  c->f[1]=c->f[31]; // 80244C90
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80244C94
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 80244C98
  c->r[3]=c->r[25]|c->r[25]; // 80244C9C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[27]);} // 80244CA0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[27]);} // 80244CA4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[27]);} // 80244CA8
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 80244CAC
  W32(c->r[1]+0x00000048u,c->r[0]); // 80244CB0
  c->lr=0x80244CB8u; f_80249428(c); // 80244CB4
  c->r[3]=c->r[25]|c->r[25]; // 80244CB8
  c->lr=0x80244CC0u; f_8024AFEC(c); // 80244CBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80244CC0
  c->r[4]=c->r[1]+0x00000008u; // 80244CC4
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 80244CC8
  c->r[6]=c->r[1]+0x00000038u; // 80244CCC
  c->r[12]=R32(c->r[12]+0x00000010u); // 80244CD0
  c->ctr=c->r[12]; // 80244CD4
  if (true) { c->lr=0x80244CDCu; dispatch(c,c->ctr); } // 80244CD8
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80244CDC
  c->r[29]=c->r[3]|c->r[3]; // 80244CE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244CE4
  W32(c->r[1]+0x00000028u,c->r[0]); // 80244CE8
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244CEC
  fcmp(c,0,c->f[0],c->f[1]); // 80244CF0
  if (!crb(c,1)) { goto L_80244CFC; } // 80244CF4
  goto L_80244D00; // 80244CF8
L_80244CFC:;
  c->f[1]=c->f[0]; // 80244CFC
L_80244D00:;
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[1]);} // 80244D00
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244D04
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80244D08
  fcmp(c,0,c->f[0],c->f[1]); // 80244D0C
  if (!crb(c,1)) { goto L_80244D18; } // 80244D10
  goto L_80244D1C; // 80244D14
L_80244D18:;
  c->f[1]=c->f[0]; // 80244D18
L_80244D1C:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[1]);} // 80244D1C
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244D20
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244D24
  fcmp(c,0,c->f[0],c->f[1]); // 80244D28
  if (!crb(c,0)) { goto L_80244D34; } // 80244D2C
  goto L_80244D38; // 80244D30
L_80244D34:;
  c->f[1]=c->f[0]; // 80244D34
L_80244D38:;
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[1]);} // 80244D38
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80244D3C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244D40
  fcmp(c,0,c->f[0],c->f[1]); // 80244D44
  if (!crb(c,0)) { goto L_80244D50; } // 80244D48
  goto L_80244D54; // 80244D4C
L_80244D50:;
  c->f[1]=c->f[0]; // 80244D50
L_80244D54:;
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[1]);} // 80244D54
  c->r[3]=c->r[25]|c->r[25]; // 80244D58
  c->lr=0x80244D60u; f_80249458(c); // 80244D5C
  {uint32_t ea=c->r[24]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80244D60
  c->f[31]=c->f[1]; // 80244D64
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244D68
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80244D6C
  fcmp(c,0,c->f[0],c->f[30]); // 80244D70
  if (!crb(c,1)) { goto L_80244D84; } // 80244D74
  c->r[0]=0u+0x00000001u; // 80244D78
  W8(c->r[28]+0x00000000u,c->r[0]); // 80244D7C
  goto L_80244ED8; // 80244D80
L_80244D84:;
  cmps(c,0,(int32_t)c->r[29],4); // 80244D84
  if (!crb(c,2)) { goto L_80244D94; } // 80244D88
  c->r[3]=c->r[27]|c->r[27]; // 80244D8C
  goto L_80244F34; // 80244D90
L_80244D94:;
  cmps(c,0,(int32_t)c->r[29],1); // 80244D94
  if (!crb(c,2)) { goto L_80244DA4; } // 80244D98
  c->r[31]=0u+0x00000000u; // 80244D9C
  goto L_80244E84; // 80244DA0
L_80244DA4:;
  cmps(c,0,(int32_t)c->r[29],2); // 80244DA4
  if (!crb(c,2)) { goto L_80244DB4; } // 80244DA8
  c->r[31]=0u+0x00000001u; // 80244DAC
  goto L_80244E84; // 80244DB0
L_80244DB4:;
  cmps(c,0,(int32_t)c->r[29],3); // 80244DB4
  if (crb(c,2)) { goto L_80244ED8; } // 80244DB8
  goto L_80244E84; // 80244DBC
L_80244DC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80244DC0
  if (crb(c,2)) { goto L_80244DD4; } // 80244DC4
  c->r[3]=c->r[25]|c->r[25]; // 80244DC8
  c->lr=0x80244DD0u; f_8024AFD4(c); // 80244DCC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 80244DD0
L_80244DD4:;
  c->r[3]=c->r[25]|c->r[25]; // 80244DD4
  c->r[31]=0u+0x00000001u; // 80244DD8
  c->lr=0x80244DE0u; f_802492D0(c); // 80244DDC
  cmps(c,0,(int32_t)c->r[3],0); // 80244DE0
  if (crb(c,2)) { goto L_80244DF8; } // 80244DE4
  c->r[3]=c->r[25]|c->r[25]; // 80244DE8
  c->lr=0x80244DF0u; f_802492D8(c); // 80244DEC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 80244DF0
  goto L_80244E3C; // 80244DF4
L_80244DF8:;
  c->r[3]=c->r[25]|c->r[25]; // 80244DF8
  c->lr=0x80244E00u; f_802490C4(c); // 80244DFC
  c->f[28]=c->f[1]; // 80244E00
  c->r[3]=c->r[25]|c->r[25]; // 80244E04
  c->lr=0x80244E0Cu; f_802481D0(c); // 80244E08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80244E0C
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 80244E10
  c->r[12]=R32(c->r[12]+0x00000048u); // 80244E14
  c->ctr=c->r[12]; // 80244E18
  if (true) { c->lr=0x80244E20u; dispatch(c,c->ctr); } // 80244E1C
  c->r[0]=c->r[3]^0x80000000u; // 80244E20
  W32(c->r[1]+0x00000050u,c->r[23]); // 80244E24
  W32(c->r[1]+0x00000054u,c->r[0]); // 80244E28
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 80244E2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 80244E30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 80244E34
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 80244E38
L_80244E3C:;
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244E3C
  fcmp(c,0,c->f[0],c->f[31]); // 80244E40
  if (!crb(c,1)) { goto L_80244E4C; } // 80244E44
  c->f[0]=c->f[31]; // 80244E48
L_80244E4C:;
  {uint32_t ea=c->r[24]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80244E4C
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 80244E50
  fcmp(c,0,c->f[2],c->f[31]); // 80244E54
  if (!crb(c,0)) { goto L_80244E60; } // 80244E58
  c->f[2]=c->f[31]; // 80244E5C
L_80244E60:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80244E60
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244E64
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[2]);} // 80244E68
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80244E6C
  fcmp(c,0,c->f[0],c->f[30]); // 80244E70
  if (!crb(c,1)) { goto L_80244E84; } // 80244E74
  c->r[0]=0u+0x00000001u; // 80244E78
  W8(c->r[28]+0x00000000u,c->r[0]); // 80244E7C
  goto L_80244ED8; // 80244E80
L_80244E84:;
  c->r[30]=R32(c->r[1]+0x00000028u); // 80244E84
  c->r[3]=c->r[1]+0x00000028u; // 80244E88
  c->r[12]=c->r[1]+0x0000002Cu; // 80244E8C
  c->lr=0x80244E94u; f_800D48C4(c); // 80244E90
  c->r[0]=c->r[0]|0x00000000u; // 80244E94
  {uint32_t ea=c->r[24]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80244E98
  c->r[29]=c->r[3]|c->r[3]; // 80244E9C
  {uint32_t ea=c->r[24]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80244EA0
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244EA4
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80244EA8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80244EAC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 80244EB0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80244EB4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80244EB8
L_80244EBC:;
  c->r[4]=R32(c->r[1]+0x00000028u); // 80244EBC
  c->r[3]=c->r[4]-c->r[26]; // 80244EC0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80244EC4
  c->r[0]=c->r[0]+c->r[3]; // 80244EC8
  c->r[0]=sraw(c,c->r[0],1); // 80244ECC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 80244ED0
  if (!crb(c,1)) { IRQCHK(c); goto L_80244C80; } // 80244ED4
L_80244ED8:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80244ED8
  cmps(c,0,(int32_t)c->r[0],0); // 80244EDC
  if (crb(c,2)) { goto L_80244F20; } // 80244EE0
  cmps(c,0,(int32_t)c->r[30],0); // 80244EE4
  if (crb(c,2)) { goto L_80244F20; } // 80244EE8
  c->r[3]=c->r[30]-c->r[26]; // 80244EEC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80244EF0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80244EF4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80244EF8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80244EFC
  c->r[0]=c->r[0]+c->r[3]; // 80244F00
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80244F04
  c->r[3]=sraw(c,c->r[0],1); // 80244F08
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[3]);} // 80244F0C
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[2]);} // 80244F10
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[1]);} // 80244F14
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[0]);} // 80244F18
  goto L_80244F34; // 80244F1C
L_80244F20:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 80244F20
  c->r[3]=c->r[0]-c->r[26]; // 80244F24
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80244F28
  c->r[0]=c->r[0]+c->r[3]; // 80244F2C
  c->r[3]=sraw(c,c->r[0],1); // 80244F30
L_80244F34:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 80244F34
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 80244F38
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 80244F3C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 80244F40
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 80244F44
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 80244F48
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 80244F4C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 80244F50
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 80244F54
  c->r[11]=c->r[1]+0x00000080u; // 80244F58
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 80244F5C
  c->lr=0x80244F64u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80244F60
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80244F64
  c->lr=c->r[0]; // 80244F68
  c->r[1]=c->r[1]+0x000000D0u; // 80244F6C
  return; // 80244F70
}

// GetCharStrmReader__Q36nw4hbm2ut4FontCFv
void f_80244F74(Ctx* __restrict c) {
  trace_call(0x80244F74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80244F74
  c->r[0]=0u+0x00000000u; // 80244F78
  c->r[6]=R32(c->r[4]+0x00000004u); // 80244F7C
  c->r[5]=R32(c->r[4]+0x00000008u); // 80244F80
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 80244F84
  W32(c->r[1]+0x00000008u,c->r[6]); // 80244F88
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80244F8C
  W32(c->r[1]+0x00000010u,c->r[4]); // 80244F90
  W32(c->r[3]+0x00000000u,c->r[0]); // 80244F94
  W32(c->r[3]+0x00000004u,c->r[6]); // 80244F98
  W32(c->r[3]+0x00000008u,c->r[5]); // 80244F9C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80244FA0
  c->r[1]=c->r[1]+0x00000020u; // 80244FA4
  return; // 80244FA8
}

// AllocStringBuffer__Q36nw4hbm3lyt7TextBoxFUs
void f_80244FAC(Ctx* __restrict c) {
  trace_call(0x80244FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80244FAC
  c->r[0]=c->lr; // 80244FB0
  cmps(c,0,(int32_t)c->r[4],0); // 80244FB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80244FB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80244FBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80244FC0
  c->r[30]=c->r[3]|c->r[3]; // 80244FC4
  if (crb(c,2)) { goto L_80245010; } // 80244FC8
  c->r[4]=c->r[4]+0x00000001u; // 80244FCC
  c->r[0]=R16(c->r[3]+0x000000F8u); // 80244FD0
  c->r[31]=rotl(c->r[4],1)&0x0000FFFEu; // 80244FD4
  cmpu(c,0,c->r[31],c->r[0]); // 80244FD8
  if (!crb(c,1)) { goto L_80245010; } // 80244FDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80244FE0
  c->r[12]=R32(c->r[12]+0x00000068u); // 80244FE4
  c->ctr=c->r[12]; // 80244FE8
  if (true) { c->lr=0x80244FF0u; dispatch(c,c->ctr); } // 80244FEC
  c->r[3]=0u+0x80360000u; // 80244FF0
  c->r[4]=c->r[31]|c->r[31]; // 80244FF4
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 80244FF8
  c->lr=0x80245000u; f_800EE128(c); // 80244FFC
  cmps(c,0,(int32_t)c->r[3],0); // 80245000
  W32(c->r[30]+0x000000D4u,c->r[3]); // 80245004
  if (crb(c,2)) { goto L_80245010; } // 80245008
  W16(c->r[30]+0x000000F8u,c->r[31]); // 8024500C
L_80245010:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80245010
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80245014
  c->r[30]=R32(c->r[1]+0x00000008u); // 80245018
  c->lr=c->r[0]; // 8024501C
  c->r[1]=c->r[1]+0x00000010u; // 80245020
  return; // 80245024
}

// FreeStringBuffer__Q36nw4hbm3lyt7TextBoxFv
void f_80245028(Ctx* __restrict c) {
  trace_call(0x80245028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245028
  c->r[0]=c->lr; // 8024502C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80245030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80245034
  c->r[31]=c->r[3]|c->r[3]; // 80245038
  c->r[4]=R32(c->r[3]+0x000000D4u); // 8024503C
  cmps(c,0,(int32_t)c->r[4],0); // 80245040
  if (crb(c,2)) { goto L_80245060; } // 80245044
  c->r[3]=0u+0x80360000u; // 80245048
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8024504C
  c->lr=0x80245054u; f_800EE138(c); // 80245050
  c->r[0]=0u+0x00000000u; // 80245054
  W32(c->r[31]+0x000000D4u,c->r[0]); // 80245058
  W16(c->r[31]+0x000000F8u,c->r[0]); // 8024505C
L_80245060:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80245060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80245064
  c->lr=c->r[0]; // 80245068
  c->r[1]=c->r[1]+0x00000010u; // 8024506C
  return; // 80245070
}

// SetString__Q36nw4hbm3lyt7TextBoxFPCwUs
void f_80245074(Ctx* __restrict c) {
  trace_call(0x80245074u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245074
  c->r[0]=c->lr; // 80245078
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024507C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80245080
  c->r[31]=c->r[5]|c->r[5]; // 80245084
  W32(c->r[1]+0x00000018u,c->r[30]); // 80245088
  c->r[30]=c->r[4]|c->r[4]; // 8024508C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80245090
  c->r[29]=c->r[3]|c->r[3]; // 80245094
  c->r[3]=c->r[30]|c->r[30]; // 80245098
  c->lr=0x802450A0u; f_800DFD90(c); // 8024509C
  c->r[12]=R32(c->r[29]+0x00000000u); // 802450A0
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 802450A4
  c->r[3]=c->r[29]|c->r[29]; // 802450A8
  c->r[4]=c->r[30]|c->r[30]; // 802450AC
  c->r[12]=R32(c->r[12]+0x00000070u); // 802450B0
  c->r[5]=c->r[31]|c->r[31]; // 802450B4
  c->ctr=c->r[12]; // 802450B8
  if (true) { c->lr=0x802450C0u; dispatch(c,c->ctr); } // 802450BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802450C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802450C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802450C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802450CC
  c->lr=c->r[0]; // 802450D0
  c->r[1]=c->r[1]+0x00000020u; // 802450D4
  return; // 802450D8
}

// SetString__Q36nw4hbm3lyt7TextBoxFPCwUsUs
void f_802450DC(Ctx* __restrict c) {
  trace_call(0x802450DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802450DC
  c->r[0]=c->lr; // 802450E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802450E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802450E8
  c->r[31]=c->r[3]|c->r[3]; // 802450EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802450F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802450F4
  c->r[29]=c->r[5]|c->r[5]; // 802450F8
  c->r[8]=R32(c->r[3]+0x000000D4u); // 802450FC
  cmps(c,0,(int32_t)c->r[8],0); // 80245100
  if (!crb(c,2)) { goto L_80245110; } // 80245104
  c->r[3]=0u+0x00000000u; // 80245108
  goto L_80245188; // 8024510C
L_80245110:;
  c->r[3]=R16(c->r[3]+0x000000F8u); // 80245110
  c->r[0]=cntlz(c->r[3]); // 80245114
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80245118
  c->r[7]=rotl(c->r[0],27)&0x00000001u; // 8024511C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80245120
  c->r[3]=0u-c->r[7]; // 80245124
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80245128
  c->r[0]=c->r[0]&~c->r[3]; // 8024512C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80245130
  cmpu(c,0,c->r[5],c->r[0]); // 80245134
  if (crb(c,0)) { goto L_80245144; } // 80245138
  c->r[3]=0u+0x00000000u; // 8024513C
  goto L_80245188; // 80245140
L_80245144:;
  c->r[0]=c->r[0]-c->r[5]; // 80245144
  c->r[30]=c->r[6]|c->r[6]; // 80245148
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8024514C
  cmpu(c,0,c->r[6],c->r[0]); // 80245150
  if (!crb(c,1)) { goto L_8024515C; } // 80245154
  c->r[30]=c->r[0]|c->r[0]; // 80245158
L_8024515C:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 8024515C
  c->r[5]=rotl(c->r[30],1)&0x0001FFFEu; // 80245160
  c->r[3]=c->r[8]+c->r[0]; // 80245164
  c->lr=0x8024516Cu; f_80004338(c); // 80245168
  c->r[0]=c->r[29]+c->r[30]; // 8024516C
  c->r[4]=R32(c->r[31]+0x000000D4u); // 80245170
  W16(c->r[31]+0x000000FAu,c->r[0]); // 80245174
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 80245178
  c->r[5]=0u+0x00000000u; // 8024517C
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 80245180
  W16(c->r[4]+c->r[0],c->r[5]); // 80245184
L_80245188:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80245188
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024518C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80245190
  c->r[29]=R32(c->r[1]+0x00000014u); // 80245194
  c->lr=c->r[0]; // 80245198
  c->r[1]=c->r[1]+0x00000020u; // 8024519C
  return; // 802451A0
}

// __dt__Q36nw4hbm2ut4FontFv
void f_802451A4(Ctx* __restrict c) {
  trace_call(0x802451A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802451A4
  c->r[0]=c->lr; // 802451A8
  cmps(c,0,(int32_t)c->r[3],0); // 802451AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802451B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802451B4
  c->r[31]=c->r[3]|c->r[3]; // 802451B8
  if (crb(c,2)) { goto L_802451CC; } // 802451BC
  cmps(c,0,(int32_t)c->r[4],0); // 802451C0
  if (!crb(c,1)) { goto L_802451CC; } // 802451C4
  c->lr=0x802451CCu; f_8008DE54(c); // 802451C8
L_802451CC:;
  c->r[3]=c->r[31]|c->r[31]; // 802451CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802451D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802451D4
  c->lr=c->r[0]; // 802451D8
  c->r[1]=c->r[1]+0x00000010u; // 802451DC
  return; // 802451E0
}

// GetTextDrawRect__Q36nw4hbm3lyt7TextBoxCFPQ36nw4hbm2ut17TextWriterBase<w>
void f_802451E4(Ctx* __restrict c) {
  trace_call(0x802451E4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802451E4
  c->r[0]=c->lr; // 802451E8
  W32(c->r[1]+0x00000094u,c->r[0]); // 802451EC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 802451F0
  c->r[31]=0u+0x80260000u; // 802451F4
  c->r[31]=c->r[31]+0x00001AA0u; // 802451F8
  W32(c->r[1]+0x00000088u,c->r[30]); // 802451FC
  c->r[30]=c->r[5]|c->r[5]; // 80245200
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80245204
  W32(c->r[1]+0x00000084u,c->r[29]); // 80245208
  c->r[29]=c->r[4]|c->r[4]; // 8024520C
  c->f[2]=c->f[1]; // 80245210
  W32(c->r[1]+0x00000080u,c->r[28]); // 80245214
  c->r[28]=c->r[3]|c->r[3]; // 80245218
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8024521C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80245220
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80245224
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80245228
  c->r[3]=c->r[30]|c->r[30]; // 8024522C
  c->lr=0x80245234u; f_8024941C(c); // 80245230
  c->r[0]=R8(c->r[30]+0x00000000u); // 80245234
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80245238
  W8(c->r[1]+0x00000018u,c->r[0]); // 8024523C
  c->r[6]=R16(c->r[29]+0x000000FAu); // 80245240
  c->r[0]=R8(c->r[30]+0x00000001u); // 80245244
  c->r[5]=R32(c->r[29]+0x000000D4u); // 80245248
  W8(c->r[1]+0x00000019u,c->r[0]); // 8024524C
  c->r[0]=R8(c->r[30]+0x00000002u); // 80245250
  W8(c->r[1]+0x0000001Au,c->r[0]); // 80245254
  c->r[0]=R8(c->r[30]+0x00000003u); // 80245258
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 8024525C
  c->r[0]=R8(c->r[30]+0x00000004u); // 80245260
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 80245264
  c->r[0]=R8(c->r[30]+0x00000005u); // 80245268
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8024526C
  c->r[0]=R8(c->r[30]+0x00000006u); // 80245270
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 80245274
  c->r[0]=R8(c->r[30]+0x00000007u); // 80245278
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 8024527C
  c->r[0]=R8(c->r[30]+0x00000008u); // 80245280
  W8(c->r[1]+0x00000020u,c->r[0]); // 80245284
  c->r[0]=R8(c->r[30]+0x00000009u); // 80245288
  W8(c->r[1]+0x00000021u,c->r[0]); // 8024528C
  c->r[0]=R8(c->r[30]+0x0000000Au); // 80245290
  W8(c->r[1]+0x00000022u,c->r[0]); // 80245294
  c->r[0]=R8(c->r[30]+0x0000000Bu); // 80245298
  W8(c->r[1]+0x00000023u,c->r[0]); // 8024529C
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 802452A0
  W8(c->r[1]+0x00000024u,c->r[0]); // 802452A4
  c->r[0]=R8(c->r[30]+0x0000000Du); // 802452A8
  W8(c->r[1]+0x00000025u,c->r[0]); // 802452AC
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 802452B0
  W8(c->r[1]+0x00000026u,c->r[0]); // 802452B4
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 802452B8
  W8(c->r[1]+0x00000027u,c->r[0]); // 802452BC
  c->r[0]=R8(c->r[30]+0x00000010u); // 802452C0
  W8(c->r[1]+0x00000028u,c->r[0]); // 802452C4
  c->r[0]=R8(c->r[30]+0x00000011u); // 802452C8
  W8(c->r[1]+0x00000029u,c->r[0]); // 802452CC
  c->r[0]=R8(c->r[30]+0x00000012u); // 802452D0
  W8(c->r[1]+0x0000002Au,c->r[0]); // 802452D4
  c->r[0]=R8(c->r[30]+0x00000013u); // 802452D8
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 802452DC
  c->r[0]=R8(c->r[30]+0x00000014u); // 802452E0
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 802452E4
  c->r[0]=R8(c->r[30]+0x00000015u); // 802452E8
  W8(c->r[1]+0x0000002Du,c->r[0]); // 802452EC
  c->r[0]=R8(c->r[30]+0x00000016u); // 802452F0
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 802452F4
  c->r[0]=R8(c->r[30]+0x00000017u); // 802452F8
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 802452FC
  c->r[0]=R8(c->r[30]+0x00000018u); // 80245300
  W8(c->r[1]+0x00000030u,c->r[0]); // 80245304
  c->r[0]=R8(c->r[30]+0x00000019u); // 80245308
  W8(c->r[1]+0x00000031u,c->r[0]); // 8024530C
  c->r[0]=R8(c->r[30]+0x0000001Au); // 80245310
  W8(c->r[1]+0x00000032u,c->r[0]); // 80245314
  c->r[0]=R8(c->r[30]+0x0000001Bu); // 80245318
  W8(c->r[1]+0x00000033u,c->r[0]); // 8024531C
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 80245320
  W8(c->r[1]+0x00000034u,c->r[0]); // 80245324
  c->r[0]=R8(c->r[30]+0x0000001Du); // 80245328
  W8(c->r[1]+0x00000035u,c->r[0]); // 8024532C
  c->r[0]=R8(c->r[30]+0x0000001Eu); // 80245330
  W8(c->r[1]+0x00000036u,c->r[0]); // 80245334
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 80245338
  W8(c->r[1]+0x00000037u,c->r[0]); // 8024533C
  c->r[0]=R32(c->r[30]+0x00000020u); // 80245340
  W32(c->r[1]+0x00000038u,c->r[0]); // 80245344
  c->r[3]=R32(c->r[30]+0x00000024u); // 80245348
  c->r[0]=R32(c->r[30]+0x00000028u); // 8024534C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 80245350
  W32(c->r[1]+0x00000040u,c->r[0]); // 80245354
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 80245358
  c->r[0]=R32(c->r[30]+0x00000030u); // 8024535C
  W32(c->r[1]+0x00000044u,c->r[3]); // 80245360
  W32(c->r[1]+0x00000048u,c->r[0]); // 80245364
  c->r[0]=R32(c->r[30]+0x00000034u); // 80245368
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8024536C
  c->r[3]=R32(c->r[30]+0x00000038u); // 80245370
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 80245374
  W32(c->r[1]+0x00000050u,c->r[3]); // 80245378
  W32(c->r[1]+0x00000054u,c->r[0]); // 8024537C
  c->r[0]=R8(c->r[30]+0x00000040u); // 80245380
  W8(c->r[1]+0x00000058u,c->r[0]); // 80245384
  c->r[0]=R8(c->r[30]+0x00000041u); // 80245388
  W8(c->r[1]+0x00000059u,c->r[0]); // 8024538C
  c->r[0]=R8(c->r[30]+0x00000042u); // 80245390
  W8(c->r[1]+0x0000005Au,c->r[0]); // 80245394
  c->r[0]=R8(c->r[30]+0x00000043u); // 80245398
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 8024539C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802453A0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 802453A4
  c->r[0]=R32(c->r[30]+0x00000048u); // 802453A8
  W32(c->r[1]+0x00000060u,c->r[0]); // 802453AC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802453B0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 802453B4
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802453B8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 802453BC
  c->r[0]=R32(c->r[30]+0x00000054u); // 802453C0
  c->r[3]=c->r[28]|c->r[28]; // 802453C4
  c->r[4]=c->r[1]+0x00000018u; // 802453C8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 802453CC
  c->r[0]=R32(c->r[30]+0x00000058u); // 802453D0
  W32(c->r[1]+0x00000070u,c->r[0]); // 802453D4
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 802453D8
  W32(c->r[1]+0x00000074u,c->r[0]); // 802453DC
  c->lr=0x802453E4u; f_8024551C(c); // 802453E0
  c->r[3]=c->r[1]+0x00000018u; // 802453E4
  c->r[4]=0u+0xFFFFFFFFu; // 802453E8
  c->lr=0x802453F0u; f_8024AEE0(c); // 802453EC
  c->r[3]=c->r[29]|c->r[29]; // 802453F0
  c->lr=0x802453F8u; f_80243968(c); // 802453F4
  c->r[5]=0u+0x55550000u; // 802453F8
  c->r[6]=R8(c->r[29]+0x000000FCu); // 802453FC
  c->r[0]=c->r[5]+0x00005556u; // 80245400
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80245404
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 80245408
  W32(c->r[1]+0x00000008u,c->r[3]); // 8024540C
  W32(c->r[1]+0x00000010u,c->r[3]); // 80245410
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 80245414
  W32(c->r[1]+0x00000014u,c->r[4]); // 80245418
  c->r[0]=c->r[5]+c->r[0]; // 8024541C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80245420
  c->r[0]=c->r[6]-c->r[0]; // 80245424
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80245428
  cmps(c,0,(int32_t)c->r[0],1); // 8024542C
  if (crb(c,2)) { goto L_80245450; } // 80245430
  if (!crb(c,0)) { goto L_8024543C; } // 80245434
  goto L_80245448; // 80245438
L_8024543C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8024543C
  if (!crb(c,0)) { goto L_80245448; } // 80245440
  goto L_80245458; // 80245444
L_80245448:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 80245448
  goto L_8024545C; // 8024544C
L_80245450:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80245450
  goto L_8024545C; // 80245454
L_80245458:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 80245458
L_8024545C:;
  c->r[3]=0u+0x55550000u; // 8024545C
  c->r[0]=c->r[3]+0x00005556u; // 80245460
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 80245464
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80245468
  c->r[0]=c->r[3]+c->r[0]; // 8024546C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80245470
  cmps(c,0,(int32_t)c->r[0],1); // 80245474
  if (crb(c,2)) { goto L_80245498; } // 80245478
  if (!crb(c,0)) { goto L_80245484; } // 8024547C
  goto L_80245490; // 80245480
L_80245484:;
  cmps(c,0,(int32_t)c->r[0],3); // 80245484
  if (!crb(c,0)) { goto L_80245490; } // 80245488
  goto L_802454A0; // 8024548C
L_80245490:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 80245490
  goto L_802454A4; // 80245494
L_80245498:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 80245498
  goto L_802454A4; // 8024549C
L_802454A0:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 802454A0
L_802454A4:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802454A4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802454A8
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802454AC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802454B0
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 802454B4
  {uint32_t ea=c->r[29]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 802454B8
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 802454BC
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802454C0
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[4]); // 802454C4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802454C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802454CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 802454D0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[7]); // 802454D4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 802454D8
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 802454DC
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 802454E0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[4]); // 802454E4
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[3]);} // 802454E8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[5]); // 802454EC
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[2]);} // 802454F0
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 802454F4
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 802454F8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 802454FC
  c->r[30]=R32(c->r[1]+0x00000088u); // 80245500
  c->r[29]=R32(c->r[1]+0x00000084u); // 80245504
  c->r[28]=R32(c->r[1]+0x00000080u); // 80245508
  c->r[0]=R32(c->r[1]+0x00000094u); // 8024550C
  c->lr=c->r[0]; // 80245510
  c->r[1]=c->r[1]+0x00000090u; // 80245514
  return; // 80245518
}

// CalcStringRectImpl<w>__25@unnamed@lyt_textBox_cpp@FPQ36nw4hbm2ut4RectPQ36nw4hbm2ut17TextWriterBase<w>PCwif_v
void f_8024551C(Ctx* __restrict c) {
  trace_call(0x8024551Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024551C
  c->r[0]=c->lr; // 80245520
  W32(c->r[1]+0x00000064u,c->r[0]); // 80245524
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80245528
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8024552C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80245530
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80245534
  c->r[11]=c->r[1]+0x00000040u; // 80245538
  c->lr=0x80245540u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024553C
  c->r[30]=0u+0x80260000u; // 80245540
  c->f[30]=c->f[1]; // 80245544
  {uint32_t ea=c->r[30]+0x00001AA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80245548
  c->r[27]=c->r[4]|c->r[4]; // 8024554C
  c->r[26]=c->r[3]|c->r[3]; // 80245550
  c->r[28]=c->r[5]|c->r[5]; // 80245554
  c->f[2]=c->f[1]; // 80245558
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8024555C
  c->r[29]=c->r[6]|c->r[6]; // 80245560
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80245564
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80245568
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024556C
  c->r[3]=c->r[27]|c->r[27]; // 80245570
  c->lr=0x80245578u; f_8024941C(c); // 80245574
  {uint32_t ea=c->r[30]+0x00001AA0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80245578
  c->r[31]=0u+0x802A0000u; // 8024557C
L_80245580:;
  c->f[1]=c->f[30]; // 80245580
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 80245584
  c->r[4]=c->r[27]|c->r[27]; // 80245588
  c->r[5]=c->r[28]|c->r[28]; // 8024558C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 80245590
  c->r[6]=c->r[29]|c->r[29]; // 80245594
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 80245598
  c->r[3]=c->r[1]+0x00000010u; // 8024559C
  c->r[7]=c->r[1]+0x00000008u; // 802455A0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 802455A4
  c->lr=0x802455ACu; f_80244B48(c); // 802455A8
  c->r[0]=R8(c->r[1]+0x00000008u); // 802455AC
  c->r[30]=c->r[3]|c->r[3]; // 802455B0
  cmps(c,0,(int32_t)c->r[0],0); // 802455B4
  if (crb(c,2)) { goto L_802455D8; } // 802455B8
  c->f[1]=c->f[30]; // 802455BC
  c->r[4]=c->r[27]|c->r[27]; // 802455C0
  c->r[3]=c->r[1]+0x00000010u; // 802455C4
  c->r[5]=c->r[31]+0x00000958u; // 802455C8
  c->r[7]=c->r[1]+0x00000008u; // 802455CC
  c->r[6]=0u+0x00000001u; // 802455D0
  c->lr=0x802455D8u; f_80244B48(c); // 802455D4
L_802455D8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802455D8
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 802455DC
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802455E0
  c->r[28]=c->r[28]+c->r[0]; // 802455E4
  c->r[29]=c->r[29]-c->r[30]; // 802455E8
  fcmp(c,0,c->f[0],c->f[1]); // 802455EC
  if (!crb(c,1)) { goto L_802455F8; } // 802455F0
  goto L_802455FC; // 802455F4
L_802455F8:;
  c->f[1]=c->f[0]; // 802455F8
L_802455FC:;
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[1]);} // 802455FC
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80245600
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80245604
  fcmp(c,0,c->f[0],c->f[1]); // 80245608
  if (!crb(c,1)) { goto L_80245614; } // 8024560C
  goto L_80245618; // 80245610
L_80245614:;
  c->f[1]=c->f[0]; // 80245614
L_80245618:;
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 80245618
  {uint32_t ea=c->r[26]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024561C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80245620
  fcmp(c,0,c->f[0],c->f[1]); // 80245624
  if (!crb(c,0)) { goto L_80245630; } // 80245628
  goto L_80245634; // 8024562C
L_80245630:;
  c->f[1]=c->f[0]; // 80245630
L_80245634:;
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[1]);} // 80245634
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80245638
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024563C
  fcmp(c,0,c->f[0],c->f[1]); // 80245640
  if (!crb(c,0)) { goto L_8024564C; } // 80245644
  goto L_80245650; // 80245648
L_8024564C:;
  c->f[1]=c->f[0]; // 8024564C
L_80245650:;
  cmps(c,0,(int32_t)c->r[29],0); // 80245650
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[1]);} // 80245654
  if (crb(c,1)) { IRQCHK(c); goto L_80245580; } // 80245658
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8024565C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80245660
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80245664
  c->r[11]=c->r[1]+0x00000040u; // 80245668
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8024566C
  c->lr=0x80245674u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80245670
  c->r[0]=R32(c->r[1]+0x00000064u); // 80245674
  c->lr=c->r[0]; // 80245678
  c->r[1]=c->r[1]+0x00000060u; // 8024567C
  return; // 80245680
}

// GetRuntimeTypeInfo__Q36nw4hbm3lyt7TextBoxCFv
void f_80245684(Ctx* __restrict c) {
  trace_call(0x80245684u);
  c->r[3]=0u+0x80360000u; // 80245684
  c->r[3]=c->r[3]+0xFFFFCE38u; // 80245688
  return; // 8024568C
}

// __sinit_\lyt_textBox_cpp
void f_80245690(Ctx* __restrict c) {
  trace_call(0x80245690u);
  c->r[4]=0u+0x80360000u; // 80245690
  c->r[3]=0u+0x80360000u; // 80245694
  c->r[4]=c->r[4]+0xFFFFCE28u; // 80245698
  W32(c->r[3]+0xFFFFCE38u,c->r[4]); // 8024569C
  return; // 802456A0
}

// __ct__Q36nw4hbm3lyt6WindowFPCQ46nw4hbm3lyt3res6WindowRCQ36nw4hbm3lyt11ResBlockSet
void f_802456A4(Ctx* __restrict c) {
  trace_call(0x802456A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802456A4
  c->r[0]=c->lr; // 802456A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802456AC
  c->r[11]=c->r[1]+0x00000030u; // 802456B0
  c->lr=0x802456B8u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802456B4
  c->r[23]=c->r[3]|c->r[3]; // 802456B8
  c->r[24]=c->r[4]|c->r[4]; // 802456BC
  c->r[25]=c->r[5]|c->r[5]; // 802456C0
  c->lr=0x802456C8u; f_80242B0C(c); // 802456C4
  c->r[3]=0u+0x802A0000u; // 802456C8
  c->r[4]=0u+0x80240000u; // 802456CC
  c->r[3]=c->r[3]+0x00000A44u; // 802456D0
  c->r[5]=0u+0x80240000u; // 802456D4
  c->r[26]=c->r[23]+0x000000E4u; // 802456D8
  W32(c->r[23]+0x00000000u,c->r[3]); // 802456DC
  c->r[3]=c->r[26]|c->r[26]; // 802456E0
  c->r[4]=c->r[4]+0xFFFFF9F4u; // 802456E4
  c->r[5]=c->r[5]+0xFFFFD7D0u; // 802456E8
  c->r[6]=0u+0x00000004u; // 802456EC
  c->r[7]=0u+0x00000004u; // 802456F0
  c->lr=0x802456F8u; f_800D4698(c); // 802456F4
  c->r[3]=c->r[26]+0x00000010u; // 802456F8
  c->lr=0x80245700u; f_8023D8E4(c); // 802456FC
  c->r[0]=R32(c->r[24]+0x00000060u); // 80245700
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80245704
  c->r[28]=c->r[24]+c->r[0]; // 80245708
  c->r[5]=R32(c->r[24]+c->r[0]); // 8024570C
  c->r[7]=R8(c->r[28]+0x00000012u); // 80245710
  {uint32_t ea=c->r[24]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 80245714
  {uint32_t ea=c->r[24]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80245718
  cmps(c,0,(int32_t)c->r[7],0); // 8024571C
  {uint32_t ea=c->r[24]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80245720
  c->r[4]=R32(c->r[28]+0x00000004u); // 80245724
  c->r[3]=R32(c->r[28]+0x00000008u); // 80245728
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 8024572C
  c->r[6]=R32(c->r[25]+0x00000008u); // 80245730
  {uint32_t ea=c->r[23]+0x000000D4u; WF32(ea,c->f[3]);} // 80245734
  c->r[27]=c->r[6]+0x0000000Cu; // 80245738
  {uint32_t ea=c->r[23]+0x000000D8u; WF32(ea,c->f[2]);} // 8024573C
  {uint32_t ea=c->r[23]+0x000000DCu; WF32(ea,c->f[1]);} // 80245740
  {uint32_t ea=c->r[23]+0x000000E0u; WF32(ea,c->f[0]);} // 80245744
  W32(c->r[23]+0x000000E4u,c->r[5]); // 80245748
  W32(c->r[23]+0x000000E8u,c->r[4]); // 8024574C
  W32(c->r[23]+0x000000ECu,c->r[3]); // 80245750
  W32(c->r[23]+0x000000F0u,c->r[0]); // 80245754
  if (crb(c,2)) { goto L_80245794; } // 80245758
  cmpu(c,0,c->r[7],0x00000008u); // 8024575C
  c->r[26]=0u+0x00000008u; // 80245760
  if (crb(c,1)) { goto L_8024576C; } // 80245764
  c->r[26]=c->r[7]|c->r[7]; // 80245768
L_8024576C:;
  c->r[3]=c->r[23]+0x000000F4u; // 8024576C
  c->r[4]=rotl(c->r[26],0)&0x000000FFu; // 80245770
  c->lr=0x80245778u; f_8023D948(c); // 80245774
  c->r[0]=R8(c->r[23]+0x000000F4u); // 80245778
  cmps(c,0,(int32_t)c->r[0],0); // 8024577C
  if (crb(c,2)) { goto L_80245794; } // 80245780
  c->r[3]=c->r[23]+0x000000F4u; // 80245784
  c->r[4]=c->r[28]+0x00000014u; // 80245788
  c->r[5]=rotl(c->r[26],0)&0x000000FFu; // 8024578C
  c->lr=0x80245794u; f_8023DAC8(c); // 80245790
L_80245794:;
  c->r[3]=0u+0x80360000u; // 80245794
  c->r[4]=0u+0x0000005Cu; // 80245798
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8024579C
  c->lr=0x802457A4u; f_800EE128(c); // 802457A0
  cmps(c,0,(int32_t)c->r[3],0); // 802457A4
  if (crb(c,2)) { goto L_802457D0; } // 802457A8
  c->r[0]=R16(c->r[28]+0x00000010u); // 802457AC
  c->r[4]=R32(c->r[25]+0x00000008u); // 802457B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802457B4
  c->r[0]=R32(c->r[27]+c->r[0]); // 802457B8
  c->r[4]=c->r[4]+c->r[0]; // 802457BC
  if (crb(c,2)) { goto L_802457CC; } // 802457C0
  c->r[5]=c->r[25]|c->r[25]; // 802457C4
  c->lr=0x802457CCu; f_8023FA00(c); // 802457C8
L_802457CC:;
  W32(c->r[23]+0x00000028u,c->r[3]); // 802457CC
L_802457D0:;
  c->r[0]=R8(c->r[24]+0x0000005Cu); // 802457D0
  c->r[30]=0u+0x00000000u; // 802457D4
  W8(c->r[23]+0x00000100u,c->r[30]); // 802457D8
  cmps(c,0,(int32_t)c->r[0],0); // 802457DC
  W32(c->r[23]+0x000000FCu,c->r[30]); // 802457E0
  if (crb(c,2)) { goto L_80245898; } // 802457E4
  c->r[31]=0u+0x80360000u; // 802457E8
  c->r[4]=rotl(c->r[0],3)&0x000007F8u; // 802457EC
  c->r[3]=R32(c->r[31]+0xFFFFCE20u); // 802457F0
  c->lr=0x802457F8u; f_800EE128(c); // 802457F4
  cmps(c,0,(int32_t)c->r[3],0); // 802457F8
  W32(c->r[23]+0x000000FCu,c->r[3]); // 802457FC
  if (crb(c,2)) { goto L_80245898; } // 80245800
  c->r[3]=R8(c->r[24]+0x0000005Cu); // 80245804
  c->r[26]=0u+0x00000000u; // 80245808
  c->r[0]=R32(c->r[24]+0x00000064u); // 8024580C
  c->r[28]=0u+0x00000000u; // 80245810
  W8(c->r[23]+0x00000100u,c->r[3]); // 80245814
  c->r[29]=c->r[24]+c->r[0]; // 80245818
  goto L_8024588C; // 8024581C
L_80245820:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80245820
  c->r[4]=0u+0x0000005Cu; // 80245824
  c->r[3]=R32(c->r[23]+0x000000FCu); // 80245828
  c->r[22]=c->r[24]+c->r[0]; // 8024582C
  c->r[0]=R8(c->r[22]+0x00000002u); // 80245830
  W8(c->r[3]+c->r[28],c->r[0]); // 80245834
  c->r[0]=R32(c->r[23]+0x000000FCu); // 80245838
  c->r[3]=c->r[0]+c->r[28]; // 8024583C
  W32(c->r[3]+0x00000004u,c->r[30]); // 80245840
  c->r[3]=R32(c->r[31]+0xFFFFCE20u); // 80245844
  c->lr=0x8024584Cu; f_800EE128(c); // 80245848
  cmps(c,0,(int32_t)c->r[3],0); // 8024584C
  if (crb(c,2)) { goto L_80245880; } // 80245850
  c->r[0]=R16(c->r[22]+0x00000000u); // 80245854
  c->r[4]=R32(c->r[25]+0x00000008u); // 80245858
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024585C
  c->r[0]=R32(c->r[27]+c->r[0]); // 80245860
  c->r[4]=c->r[4]+c->r[0]; // 80245864
  if (crb(c,2)) { goto L_80245874; } // 80245868
  c->r[5]=c->r[25]|c->r[25]; // 8024586C
  c->lr=0x80245874u; f_8023FA00(c); // 80245870
L_80245874:;
  c->r[0]=R32(c->r[23]+0x000000FCu); // 80245874
  c->r[4]=c->r[0]+c->r[28]; // 80245878
  W32(c->r[4]+0x00000004u,c->r[3]); // 8024587C
L_80245880:;
  c->r[29]=c->r[29]+0x00000004u; // 80245880
  c->r[28]=c->r[28]+0x00000008u; // 80245884
  c->r[26]=c->r[26]+0x00000001u; // 80245888
L_8024588C:;
  c->r[0]=R8(c->r[23]+0x00000100u); // 8024588C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80245890
  if (crb(c,0)) { IRQCHK(c); goto L_80245820; } // 80245894
L_80245898:;
  c->r[11]=c->r[1]+0x00000030u; // 80245898
  c->r[3]=c->r[23]|c->r[23]; // 8024589C
  c->lr=0x802458A4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802458A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802458A4
  c->lr=c->r[0]; // 802458A8
  c->r[1]=c->r[1]+0x00000030u; // 802458AC
  return; // 802458B0
}

// __dt__Q36nw4hbm3lyt6WindowFv
void f_802458B4(Ctx* __restrict c) {
  trace_call(0x802458B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802458B4
  c->r[0]=c->lr; // 802458B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802458BC
  c->r[11]=c->r[1]+0x00000020u; // 802458C0
  c->lr=0x802458C8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802458C4
  cmps(c,0,(int32_t)c->r[3],0); // 802458C8
  c->r[27]=c->r[3]|c->r[3]; // 802458CC
  c->r[28]=c->r[4]|c->r[4]; // 802458D0
  if (crb(c,2)) { goto L_802459DC; } // 802458D4
  c->r[0]=R32(c->r[3]+0x000000FCu); // 802458D8
  c->r[4]=0u+0x802A0000u; // 802458DC
  c->r[4]=c->r[4]+0x00000A44u; // 802458E0
  cmps(c,0,(int32_t)c->r[0],0); // 802458E4
  W32(c->r[3]+0x00000000u,c->r[4]); // 802458E8
  if (crb(c,2)) { goto L_80245958; } // 802458EC
  c->r[29]=0u+0x00000000u; // 802458F0
  c->r[30]=0u+0x00000000u; // 802458F4
  c->r[31]=0u+0x80360000u; // 802458F8
  goto L_8024593C; // 802458FC
L_80245900:;
  c->r[0]=R32(c->r[27]+0x000000FCu); // 80245900
  c->r[4]=0u+0xFFFFFFFFu; // 80245904
  c->r[3]=c->r[0]+c->r[30]; // 80245908
  c->r[3]=R32(c->r[3]+0x00000004u); // 8024590C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80245910
  c->r[12]=R32(c->r[12]+0x00000008u); // 80245914
  c->ctr=c->r[12]; // 80245918
  if (true) { c->lr=0x80245920u; dispatch(c,c->ctr); } // 8024591C
  c->r[0]=R32(c->r[27]+0x000000FCu); // 80245920
  c->r[3]=R32(c->r[31]+0xFFFFCE20u); // 80245924
  c->r[4]=c->r[0]+c->r[30]; // 80245928
  c->r[4]=R32(c->r[4]+0x00000004u); // 8024592C
  c->lr=0x80245934u; f_800EE138(c); // 80245930
  c->r[30]=c->r[30]+0x00000008u; // 80245934
  c->r[29]=c->r[29]+0x00000001u; // 80245938
L_8024593C:;
  c->r[0]=R8(c->r[27]+0x00000100u); // 8024593C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80245940
  if (crb(c,0)) { IRQCHK(c); goto L_80245900; } // 80245944
  c->r[3]=0u+0x80360000u; // 80245948
  c->r[4]=R32(c->r[27]+0x000000FCu); // 8024594C
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 80245950
  c->lr=0x80245958u; f_800EE138(c); // 80245954
L_80245958:;
  c->r[3]=R32(c->r[27]+0x00000028u); // 80245958
  cmps(c,0,(int32_t)c->r[3],0); // 8024595C
  if (crb(c,2)) { goto L_8024599C; } // 80245960
  c->r[0]=R8(c->r[3]+0x00000054u); // 80245964
  cmps(c,0,(int32_t)c->r[0],0); // 80245968
  if (!crb(c,2)) { goto L_8024599C; } // 8024596C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80245970
  c->r[4]=0u+0xFFFFFFFFu; // 80245974
  c->r[12]=R32(c->r[12]+0x00000008u); // 80245978
  c->ctr=c->r[12]; // 8024597C
  if (true) { c->lr=0x80245984u; dispatch(c,c->ctr); } // 80245980
  c->r[3]=0u+0x80360000u; // 80245984
  c->r[4]=R32(c->r[27]+0x00000028u); // 80245988
  c->r[3]=R32(c->r[3]+0xFFFFCE20u); // 8024598C
  c->lr=0x80245994u; f_800EE138(c); // 80245990
  c->r[0]=0u+0x00000000u; // 80245994
  W32(c->r[27]+0x00000028u,c->r[0]); // 80245998
L_8024599C:;
  c->r[3]=c->r[27]+0x000000F4u; // 8024599C
  c->lr=0x802459A4u; f_8023D8F8(c); // 802459A0
  c->r[3]=addc(c,c->r[27],0x000000E4u,0); cr0(c,c->r[3]); // 802459A4
  if (crb(c,2)) { goto L_802459C0; } // 802459A8
  c->r[4]=0u+0x80240000u; // 802459AC
  c->r[5]=0u+0x00000004u; // 802459B0
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 802459B4
  c->r[6]=0u+0x00000004u; // 802459B8
  c->lr=0x802459C0u; f_800D4790(c); // 802459BC
L_802459C0:;
  c->r[3]=c->r[27]|c->r[27]; // 802459C0
  c->r[4]=0u+0x00000000u; // 802459C4
  c->lr=0x802459CCu; f_80242C34(c); // 802459C8
  cmps(c,0,(int32_t)c->r[28],0); // 802459CC
  if (!crb(c,1)) { goto L_802459DC; } // 802459D0
  c->r[3]=c->r[27]|c->r[27]; // 802459D4
  c->lr=0x802459DCu; f_8008DE54(c); // 802459D8
L_802459DC:;
  c->r[11]=c->r[1]+0x00000020u; // 802459DC
  c->r[3]=c->r[27]|c->r[27]; // 802459E0
  c->lr=0x802459E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802459E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802459E8
  c->lr=c->r[0]; // 802459EC
  c->r[1]=c->r[1]+0x00000020u; // 802459F0
  return; // 802459F4
}

// FindMaterialByName__Q36nw4hbm3lyt6WindowFPCcb
void f_802459F8(Ctx* __restrict c) {
  trace_call(0x802459F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802459F8
  c->r[0]=c->lr; // 802459FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80245A00
  c->r[11]=c->r[1]+0x00000020u; // 80245A04
  c->lr=0x80245A0Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80245A08
  c->r[6]=R32(c->r[3]+0x00000028u); // 80245A0C
  c->r[27]=c->r[3]|c->r[3]; // 80245A10
  c->r[28]=c->r[4]|c->r[4]; // 80245A14
  c->r[29]=c->r[5]|c->r[5]; // 80245A18
  cmps(c,0,(int32_t)c->r[6],0); // 80245A1C
  if (crb(c,2)) { goto L_80245A3C; } // 80245A20
  c->r[3]=c->r[6]+0x00000004u; // 80245A24
  c->lr=0x80245A2Cu; f_8023D85C(c); // 80245A28
  cmps(c,0,(int32_t)c->r[3],0); // 80245A2C
  if (crb(c,2)) { goto L_80245A3C; } // 80245A30
  c->r[3]=R32(c->r[27]+0x00000028u); // 80245A34
  goto L_80245ADC; // 80245A38
L_80245A3C:;
  c->r[31]=0u+0x00000000u; // 80245A3C
  c->r[30]=0u+0x00000000u; // 80245A40
  goto L_80245A84; // 80245A44
L_80245A48:;
  c->r[0]=R32(c->r[27]+0x000000FCu); // 80245A48
  c->r[4]=c->r[28]|c->r[28]; // 80245A4C
  c->r[3]=c->r[0]+c->r[30]; // 80245A50
  c->r[3]=R32(c->r[3]+0x00000004u); // 80245A54
  c->r[3]=c->r[3]+0x00000004u; // 80245A58
  c->lr=0x80245A60u; f_8023D85C(c); // 80245A5C
  cmps(c,0,(int32_t)c->r[3],0); // 80245A60
  if (crb(c,2)) { goto L_80245A7C; } // 80245A64
  c->r[3]=R32(c->r[27]+0x000000FCu); // 80245A68
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80245A6C
  c->r[3]=c->r[3]+c->r[0]; // 80245A70
  c->r[3]=R32(c->r[3]+0x00000004u); // 80245A74
  goto L_80245ADC; // 80245A78
L_80245A7C:;
  c->r[30]=c->r[30]+0x00000008u; // 80245A7C
  c->r[31]=c->r[31]+0x00000001u; // 80245A80
L_80245A84:;
  c->r[0]=R8(c->r[27]+0x00000100u); // 80245A84
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80245A88
  if (crb(c,0)) { IRQCHK(c); goto L_80245A48; } // 80245A8C
  cmps(c,0,(int32_t)c->r[29],0); // 80245A90
  if (crb(c,2)) { goto L_80245AD8; } // 80245A94
  c->r[31]=R32(c->r[27]+0x00000014u); // 80245A98
  c->r[30]=c->r[27]+0x00000014u; // 80245A9C
  goto L_80245AD0; // 80245AA0
L_80245AA4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80245AA4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80245AA8
  c->r[4]=c->r[28]|c->r[28]; // 80245AAC
  c->r[5]=0u+0x00000001u; // 80245AB0
  c->r[12]=R32(c->r[12]+0x00000040u); // 80245AB4
  c->ctr=c->r[12]; // 80245AB8
  if (true) { c->lr=0x80245AC0u; dispatch(c,c->ctr); } // 80245ABC
  cmps(c,0,(int32_t)c->r[3],0); // 80245AC0
  if (crb(c,2)) { goto L_80245ACC; } // 80245AC4
  goto L_80245ADC; // 80245AC8
L_80245ACC:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80245ACC
L_80245AD0:;
  cmpu(c,0,c->r[31],c->r[30]); // 80245AD0
  if (!crb(c,2)) { IRQCHK(c); goto L_80245AA4; } // 80245AD4
L_80245AD8:;
  c->r[3]=0u+0x00000000u; // 80245AD8
L_80245ADC:;
  c->r[11]=c->r[1]+0x00000020u; // 80245ADC
  c->lr=0x80245AE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80245AE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80245AE4
  c->lr=c->r[0]; // 80245AE8
  c->r[1]=c->r[1]+0x00000020u; // 80245AEC
  return; // 80245AF0
}

// FindAnimationLink__Q36nw4hbm3lyt6WindowFPQ36nw4hbm3lyt13AnimTransform
void f_80245AF4(Ctx* __restrict c) {
  trace_call(0x80245AF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245AF4
  c->r[0]=c->lr; // 80245AF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80245AFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80245B00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80245B04
  W32(c->r[1]+0x00000014u,c->r[29]); // 80245B08
  c->r[29]=c->r[4]|c->r[4]; // 80245B0C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80245B10
  c->r[28]=c->r[3]|c->r[3]; // 80245B14
  c->lr=0x80245B1Cu; f_80243730(c); // 80245B18
  cmps(c,0,(int32_t)c->r[3],0); // 80245B1C
  if (crb(c,2)) { goto L_80245B28; } // 80245B20
  goto L_80245B78; // 80245B24
L_80245B28:;
  c->r[30]=0u+0x00000000u; // 80245B28
  c->r[31]=0u+0x00000000u; // 80245B2C
  goto L_80245B68; // 80245B30
L_80245B34:;
  c->r[0]=R32(c->r[28]+0x000000FCu); // 80245B34
  c->r[4]=c->r[29]|c->r[29]; // 80245B38
  c->r[3]=c->r[0]+c->r[31]; // 80245B3C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80245B40
  c->r[12]=R32(c->r[3]+0x00000000u); // 80245B44
  c->r[12]=R32(c->r[12]+0x00000020u); // 80245B48
  c->ctr=c->r[12]; // 80245B4C
  if (true) { c->lr=0x80245B54u; dispatch(c,c->ctr); } // 80245B50
  cmps(c,0,(int32_t)c->r[3],0); // 80245B54
  if (crb(c,2)) { goto L_80245B60; } // 80245B58
  goto L_80245B78; // 80245B5C
L_80245B60:;
  c->r[31]=c->r[31]+0x00000008u; // 80245B60
  c->r[30]=c->r[30]+0x00000001u; // 80245B64
L_80245B68:;
  c->r[0]=R8(c->r[28]+0x00000100u); // 80245B68
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80245B6C
  if (crb(c,0)) { IRQCHK(c); goto L_80245B34; } // 80245B70
  c->r[3]=0u+0x00000000u; // 80245B74
L_80245B78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80245B78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80245B7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80245B80
  c->r[29]=R32(c->r[1]+0x00000014u); // 80245B84
  c->r[28]=R32(c->r[1]+0x00000010u); // 80245B88
  c->lr=c->r[0]; // 80245B8C
  c->r[1]=c->r[1]+0x00000020u; // 80245B90
  return; // 80245B94
}

// SetAnimationEnable__Q36nw4hbm3lyt6WindowFPQ36nw4hbm3lyt13AnimTransformbb
void f_80245B98(Ctx* __restrict c) {
  trace_call(0x80245B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245B98
  c->r[0]=c->lr; // 80245B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80245BA0
  c->r[11]=c->r[1]+0x00000020u; // 80245BA4
  c->lr=0x80245BACu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80245BA8
  c->r[26]=c->r[3]|c->r[3]; // 80245BAC
  c->r[27]=c->r[4]|c->r[4]; // 80245BB0
  c->r[28]=c->r[5]|c->r[5]; // 80245BB4
  c->r[29]=c->r[6]|c->r[6]; // 80245BB8
  c->r[30]=0u+0x00000000u; // 80245BBC
  c->r[31]=0u+0x00000000u; // 80245BC0
  goto L_80245BF4; // 80245BC4
L_80245BC8:;
  c->r[0]=R32(c->r[26]+0x000000FCu); // 80245BC8
  c->r[4]=c->r[27]|c->r[27]; // 80245BCC
  c->r[5]=c->r[28]|c->r[28]; // 80245BD0
  c->r[3]=c->r[0]+c->r[31]; // 80245BD4
  c->r[3]=R32(c->r[3]+0x00000004u); // 80245BD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80245BDC
  c->r[12]=R32(c->r[12]+0x00000024u); // 80245BE0
  c->ctr=c->r[12]; // 80245BE4
  if (true) { c->lr=0x80245BECu; dispatch(c,c->ctr); } // 80245BE8
  c->r[31]=c->r[31]+0x00000008u; // 80245BEC
  c->r[30]=c->r[30]+0x00000001u; // 80245BF0
L_80245BF4:;
  c->r[0]=R8(c->r[26]+0x00000100u); // 80245BF4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80245BF8
  if (crb(c,0)) { IRQCHK(c); goto L_80245BC8; } // 80245BFC
  c->r[3]=c->r[26]|c->r[26]; // 80245C00
  c->r[4]=c->r[27]|c->r[27]; // 80245C04
  c->r[5]=c->r[28]|c->r[28]; // 80245C08
  c->r[6]=c->r[29]|c->r[29]; // 80245C0C
  c->lr=0x80245C14u; f_802437A8(c); // 80245C10
  c->r[11]=c->r[1]+0x00000020u; // 80245C14
  c->lr=0x80245C1Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80245C18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80245C1C
  c->lr=c->r[0]; // 80245C20
  c->r[1]=c->r[1]+0x00000020u; // 80245C24
  return; // 80245C28
}

// GetVtxColor__Q36nw4hbm3lyt6WindowCFUl
void f_80245C2C(Ctx* __restrict c) {
  trace_call(0x80245C2Cu);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80245C2C
  c->r[7]=c->r[4]+c->r[0]; // 80245C30
  c->r[6]=R8(c->r[7]+0x000000E4u); // 80245C34
  c->r[5]=R8(c->r[7]+0x000000E5u); // 80245C38
  c->r[4]=R8(c->r[7]+0x000000E6u); // 80245C3C
  c->r[0]=R8(c->r[7]+0x000000E7u); // 80245C40
  W8(c->r[3]+0x00000000u,c->r[6]); // 80245C44
  W8(c->r[3]+0x00000001u,c->r[5]); // 80245C48
  W8(c->r[3]+0x00000002u,c->r[4]); // 80245C4C
  W8(c->r[3]+0x00000003u,c->r[0]); // 80245C50
  return; // 80245C54
}

// SetVtxColor__Q36nw4hbm3lyt6WindowFUlQ36nw4hbm2ut5Color
void f_80245C58(Ctx* __restrict c) {
  trace_call(0x80245C58u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80245C58
  c->r[6]=R8(c->r[5]+0x00000000u); // 80245C5C
  c->r[4]=c->r[3]+c->r[0]; // 80245C60
  c->r[0]=R8(c->r[5]+0x00000001u); // 80245C64
  W8(c->r[4]+0x000000E4u,c->r[6]); // 80245C68
  c->r[3]=R8(c->r[5]+0x00000002u); // 80245C6C
  W8(c->r[4]+0x000000E5u,c->r[0]); // 80245C70
  c->r[0]=R8(c->r[5]+0x00000003u); // 80245C74
  W8(c->r[4]+0x000000E6u,c->r[3]); // 80245C78
  W8(c->r[4]+0x000000E7u,c->r[0]); // 80245C7C
  return; // 80245C80
}

// GetVtxColorElement__Q36nw4hbm3lyt6WindowCFUl
void f_80245C84(Ctx* __restrict c) {
  trace_call(0x80245C84u);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80245C84
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80245C88
  c->r[3]=c->r[3]+c->r[5]; // 80245C8C
  c->r[3]=c->r[3]+c->r[0]; // 80245C90
  c->r[3]=R8(c->r[3]+0x000000E4u); // 80245C94
  return; // 80245C98
}

// SetVtxColorElement__Q36nw4hbm3lyt6WindowFUlUc
void f_80245C9C(Ctx* __restrict c) {
  trace_call(0x80245C9Cu);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80245C9C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80245CA0
  c->r[3]=c->r[3]+c->r[6]; // 80245CA4
  c->r[3]=c->r[3]+c->r[0]; // 80245CA8
  W8(c->r[3]+0x000000E4u,c->r[5]); // 80245CAC
  return; // 80245CB0
}

// DrawSelf__Q36nw4hbm3lyt6WindowFRCQ36nw4hbm3lyt8DrawInfo
void f_80245CB4(Ctx* __restrict c) {
  trace_call(0x80245CB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245CB4
  c->r[0]=c->lr; // 80245CB8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80245CBC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80245CC0
  c->r[31]=c->r[3]|c->r[3]; // 80245CC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80245CC8
  c->r[12]=R32(c->r[12]+0x00000060u); // 80245CCC
  c->ctr=c->r[12]; // 80245CD0
  if (true) { c->lr=0x80245CD8u; dispatch(c,c->ctr); } // 80245CD4
  c->r[5]=R8(c->r[31]+0x00000100u); // 80245CD8
  c->r[4]=c->r[31]|c->r[31]; // 80245CDC
  c->r[6]=R32(c->r[31]+0x000000FCu); // 80245CE0
  c->r[3]=c->r[1]+0x00000018u; // 80245CE4
  c->lr=0x80245CECu; f_802479FC(c); // 80245CE8
  c->r[6]=R32(c->r[1]+0x00000018u); // 80245CEC
  c->r[3]=c->r[31]|c->r[31]; // 80245CF0
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 80245CF4
  c->r[4]=R32(c->r[1]+0x00000020u); // 80245CF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80245CFC
  W32(c->r[1]+0x00000028u,c->r[6]); // 80245D00
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80245D04
  W32(c->r[1]+0x00000030u,c->r[4]); // 80245D08
  W32(c->r[1]+0x00000034u,c->r[0]); // 80245D0C
  c->lr=0x80245D14u; f_80243968(c); // 80245D10
  W32(c->r[1]+0x00000010u,c->r[3]); // 80245D14
  c->r[5]=c->r[1]+0x00000028u; // 80245D18
  W32(c->r[1]+0x00000014u,c->r[4]); // 80245D1C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80245D20
  W32(c->r[1]+0x00000008u,c->r[3]); // 80245D24
  c->r[3]=c->r[31]|c->r[31]; // 80245D28
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80245D2C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80245D30
  c->r[4]=c->r[1]+0x00000010u; // 80245D34
  c->r[6]=R8(c->r[31]+0x000000CEu); // 80245D38
  c->ctr=c->r[12]; // 80245D3C
  if (true) { c->lr=0x80245D44u; dispatch(c,c->ctr); } // 80245D40
  c->r[0]=R8(c->r[31]+0x00000100u); // 80245D44
  cmps(c,0,(int32_t)c->r[0],4); // 80245D48
  if (crb(c,2)) { goto L_80245D94; } // 80245D4C
  if (!crb(c,0)) { goto L_80245D60; } // 80245D50
  cmps(c,0,(int32_t)c->r[0],1); // 80245D54
  if (crb(c,2)) { goto L_80245D6C; } // 80245D58
  goto L_80245DE0; // 80245D5C
L_80245D60:;
  cmps(c,0,(int32_t)c->r[0],8); // 80245D60
  if (crb(c,2)) { goto L_80245DBC; } // 80245D64
  goto L_80245DE0; // 80245D68
L_80245D6C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80245D6C
  c->r[3]=c->r[31]|c->r[31]; // 80245D70
  c->r[4]=c->r[1]+0x00000010u; // 80245D74
  c->r[6]=c->r[1]+0x00000028u; // 80245D78
  c->r[12]=R32(c->r[12]+0x00000070u); // 80245D7C
  c->r[5]=R32(c->r[31]+0x000000FCu); // 80245D80
  c->r[7]=R8(c->r[31]+0x000000CEu); // 80245D84
  c->ctr=c->r[12]; // 80245D88
  if (true) { c->lr=0x80245D90u; dispatch(c,c->ctr); } // 80245D8C
  goto L_80245DE0; // 80245D90
L_80245D94:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80245D94
  c->r[3]=c->r[31]|c->r[31]; // 80245D98
  c->r[4]=c->r[1]+0x00000010u; // 80245D9C
  c->r[6]=c->r[1]+0x00000028u; // 80245DA0
  c->r[12]=R32(c->r[12]+0x00000074u); // 80245DA4
  c->r[5]=R32(c->r[31]+0x000000FCu); // 80245DA8
  c->r[7]=R8(c->r[31]+0x000000CEu); // 80245DAC
  c->ctr=c->r[12]; // 80245DB0
  if (true) { c->lr=0x80245DB8u; dispatch(c,c->ctr); } // 80245DB4
  goto L_80245DE0; // 80245DB8
L_80245DBC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80245DBC
  c->r[3]=c->r[31]|c->r[31]; // 80245DC0
  c->r[4]=c->r[1]+0x00000010u; // 80245DC4
  c->r[6]=c->r[1]+0x00000028u; // 80245DC8
  c->r[12]=R32(c->r[12]+0x00000078u); // 80245DCC
  c->r[5]=R32(c->r[31]+0x000000FCu); // 80245DD0
  c->r[7]=R8(c->r[31]+0x000000CEu); // 80245DD4
  c->ctr=c->r[12]; // 80245DD8
  if (true) { c->lr=0x80245DE0u; dispatch(c,c->ctr); } // 80245DDC
L_80245DE0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80245DE0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80245DE4
  c->lr=c->r[0]; // 80245DE8
  c->r[1]=c->r[1]+0x00000040u; // 80245DEC
  return; // 80245DF0
}

// AnimateSelf__Q36nw4hbm3lyt6WindowFUl
void f_80245DF4(Ctx* __restrict c) {
  trace_call(0x80245DF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245DF4
  c->r[0]=c->lr; // 80245DF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80245DFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80245E00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80245E04
  c->r[30]=c->r[4]|c->r[4]; // 80245E08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80245E0C
  c->r[29]=c->r[3]|c->r[3]; // 80245E10
  c->lr=0x80245E18u; f_802434E4(c); // 80245E14
  c->r[0]=R8(c->r[29]+0x000000CFu); // 80245E18
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80245E1C
  if (!crb(c,2)) { goto L_80245E2C; } // 80245E20
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80245E24
  if (!crb(c,2)) { goto L_80245E68; } // 80245E28
L_80245E2C:;
  c->r[30]=0u+0x00000000u; // 80245E2C
  c->r[31]=0u+0x00000000u; // 80245E30
  goto L_80245E5C; // 80245E34
L_80245E38:;
  c->r[0]=R32(c->r[29]+0x000000FCu); // 80245E38
  c->r[3]=c->r[0]+c->r[31]; // 80245E3C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80245E40
  c->r[12]=R32(c->r[3]+0x00000000u); // 80245E44
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80245E48
  c->ctr=c->r[12]; // 80245E4C
  if (true) { c->lr=0x80245E54u; dispatch(c,c->ctr); } // 80245E50
  c->r[31]=c->r[31]+0x00000008u; // 80245E54
  c->r[30]=c->r[30]+0x00000001u; // 80245E58
L_80245E5C:;
  c->r[0]=R8(c->r[29]+0x00000100u); // 80245E5C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80245E60
  if (crb(c,0)) { IRQCHK(c); goto L_80245E38; } // 80245E64
L_80245E68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80245E68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80245E6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80245E70
  c->r[29]=R32(c->r[1]+0x00000014u); // 80245E74
  c->lr=c->r[0]; // 80245E78
  c->r[1]=c->r[1]+0x00000020u; // 80245E7C
  return; // 80245E80
}

// UnbindAnimationSelf__Q36nw4hbm3lyt6WindowFPQ36nw4hbm3lyt13AnimTransform
void f_80245E84(Ctx* __restrict c) {
  trace_call(0x80245E84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245E84
  c->r[0]=c->lr; // 80245E88
  W32(c->r[1]+0x00000024u,c->r[0]); // 80245E8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80245E90
  c->r[31]=0u+0x00000000u; // 80245E94
  W32(c->r[1]+0x00000018u,c->r[30]); // 80245E98
  c->r[30]=0u+0x00000000u; // 80245E9C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80245EA0
  c->r[29]=c->r[4]|c->r[4]; // 80245EA4
  W32(c->r[1]+0x00000010u,c->r[28]); // 80245EA8
  c->r[28]=c->r[3]|c->r[3]; // 80245EAC
  goto L_80245EDC; // 80245EB0
L_80245EB4:;
  c->r[0]=R32(c->r[28]+0x000000FCu); // 80245EB4
  c->r[4]=c->r[29]|c->r[29]; // 80245EB8
  c->r[3]=c->r[0]+c->r[31]; // 80245EBC
  c->r[3]=R32(c->r[3]+0x00000004u); // 80245EC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80245EC4
  c->r[12]=R32(c->r[12]+0x00000014u); // 80245EC8
  c->ctr=c->r[12]; // 80245ECC
  if (true) { c->lr=0x80245ED4u; dispatch(c,c->ctr); } // 80245ED0
  c->r[31]=c->r[31]+0x00000008u; // 80245ED4
  c->r[30]=c->r[30]+0x00000001u; // 80245ED8
L_80245EDC:;
  c->r[0]=R8(c->r[28]+0x00000100u); // 80245EDC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80245EE0
  if (crb(c,0)) { IRQCHK(c); goto L_80245EB4; } // 80245EE4
  c->r[3]=c->r[28]|c->r[28]; // 80245EE8
  c->r[4]=c->r[29]|c->r[29]; // 80245EEC
  c->lr=0x80245EF4u; f_8024365C(c); // 80245EF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80245EF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80245EF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80245EFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80245F00
  c->r[28]=R32(c->r[1]+0x00000010u); // 80245F04
  c->lr=c->r[0]; // 80245F08
  c->r[1]=c->r[1]+0x00000020u; // 80245F0C
  return; // 80245F10
}

// DrawContent__Q36nw4hbm3lyt6WindowFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt15WindowFrameSizeUc
void f_80245F14(Ctx* __restrict c) {
  trace_call(0x80245F14u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245F14
  c->r[0]=c->lr; // 80245F18
  W32(c->r[1]+0x00000034u,c->r[0]); // 80245F1C
  c->r[11]=c->r[1]+0x00000030u; // 80245F20
  c->lr=0x80245F28u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80245F24
  c->r[30]=c->r[6]|c->r[6]; // 80245F28
  c->r[27]=c->r[3]|c->r[3]; // 80245F2C
  c->r[28]=c->r[4]|c->r[4]; // 80245F30
  c->r[29]=c->r[5]|c->r[5]; // 80245F34
  c->r[4]=c->r[30]|c->r[30]; // 80245F38
  c->r[3]=c->r[3]+0x000000E4u; // 80245F3C
  c->lr=0x80245F44u; f_8023DB5C(c); // 80245F40
  c->r[4]=c->r[3]|c->r[3]; // 80245F44
  c->r[3]=R32(c->r[27]+0x00000028u); // 80245F48
  c->r[5]=c->r[30]|c->r[30]; // 80245F4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80245F50
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80245F54
  c->ctr=c->r[12]; // 80245F58
  if (true) { c->lr=0x80245F60u; dispatch(c,c->ctr); } // 80245F5C
  c->r[4]=R8(c->r[27]+0x000000F5u); // 80245F60
  c->r[31]=c->r[3]|c->r[3]; // 80245F64
  c->lr=0x80245F6Cu; f_8023DC18(c); // 80245F68
  cmps(c,0,(int32_t)c->r[31],0); // 80245F6C
  if (crb(c,2)) { goto L_80245F7C; } // 80245F70
  c->r[7]=c->r[27]+0x000000E4u; // 80245F74
  goto L_80245F80; // 80245F78
L_80245F7C:;
  c->r[7]=0u+0x00000000u; // 80245F7C
L_80245F80:;
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80245F80
  c->r[8]=c->r[30]|c->r[30]; // 80245F84
  {uint32_t ea=c->r[29]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 80245F88
  c->r[3]=c->r[1]+0x00000010u; // 80245F8C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80245F90
  c->r[4]=c->r[1]+0x00000008u; // 80245F94
  {uint32_t ea=c->r[29]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 80245F98
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 80245F9C
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80245FA0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 80245FA4
  {uint32_t ea=c->r[27]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80245FA8
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[3]); // 80245FAC
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80245FB0
  c->r[6]=R32(c->r[27]+0x000000F8u); // 80245FB4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 80245FB8
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80245FBC
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[3]); // 80245FC0
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80245FC4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80245FC8
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80245FCC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 80245FD0
  c->r[5]=R8(c->r[27]+0x000000F5u); // 80245FD4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 80245FD8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80245FDC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80245FE0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80245FE4
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[6]); // 80245FE8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80245FEC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[4]); // 80245FF0
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80245FF4
  {uint32_t ea=c->r[27]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80245FF8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 80245FFC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80246000
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80246004
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80246008
  c->lr=0x80246010u; f_8023E25C(c); // 8024600C
  c->r[11]=c->r[1]+0x00000030u; // 80246010
  c->lr=0x80246018u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80246014
  c->r[0]=R32(c->r[1]+0x00000034u); // 80246018
  c->lr=c->r[0]; // 8024601C
  c->r[1]=c->r[1]+0x00000030u; // 80246020
  return; // 80246024
}

// DrawFrame__Q36nw4hbm3lyt6WindowFRCQ36nw4hbm4math4VEC2RCQ46nw4hbm3lyt6Window5FrameRCQ36nw4hbm3lyt15WindowFrameSizeUc
void f_80246028(Ctx* __restrict c) {
  trace_call(0x80246028u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80246028
  c->r[0]=c->lr; // 8024602C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80246030
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80246034
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80246038
  c->r[11]=c->r[1]+0x000000D0u; // 8024603C
  c->lr=0x80246044u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80246040
  c->r[0]=0u+0x43300000u; // 80246044
  c->r[19]=c->r[3]|c->r[3]; // 80246048
  c->r[22]=c->r[7]|c->r[7]; // 8024604C
  W32(c->r[1]+0x00000088u,c->r[0]); // 80246050
  c->r[20]=c->r[4]|c->r[4]; // 80246054
  c->r[18]=c->r[5]|c->r[5]; // 80246058
  W32(c->r[1]+0x00000090u,c->r[0]); // 8024605C
  c->r[21]=c->r[6]|c->r[6]; // 80246060
  c->r[4]=c->r[22]|c->r[22]; // 80246064
  c->r[3]=0u+0x00000000u; // 80246068
  c->lr=0x80246070u; f_8023DB5C(c); // 8024606C
  c->r[4]=c->r[3]|c->r[3]; // 80246070
  c->r[3]=R32(c->r[18]+0x00000004u); // 80246074
  c->r[5]=c->r[22]|c->r[22]; // 80246078
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024607C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80246080
  c->ctr=c->r[12]; // 80246084
  if (true) { c->lr=0x8024608Cu; dispatch(c,c->ctr); } // 80246088
  c->r[23]=c->r[3]|c->r[3]; // 8024608C
  c->r[4]=0u+0x00000001u; // 80246090
  c->lr=0x80246098u; f_8023DC18(c); // 80246094
  c->r[4]=R32(c->r[18]+0x00000004u); // 80246098
  c->r[3]=c->r[1]+0x00000050u; // 8024609C
  c->r[5]=0u+0x00000000u; // 802460A0
  c->lr=0x802460A8u; f_802429FC(c); // 802460A4
  c->r[24]=0u+0x802A0000u; // 802460A8
  c->r[0]=0u+0xFFFFFFFFu; // 802460AC
  c->r[24]=c->r[24]+0x00000A08u; // 802460B0
  c->r[29]=0u+0x80260000u; // 802460B4
  c->r[7]=R8(c->r[24]+0x00000009u); // 802460B8
  c->r[25]=0u+0x80260000u; // 802460BC
  c->r[8]=R8(c->r[24]+0x00000008u); // 802460C0
  c->r[3]=0u+0x80260000u; // 802460C4
  c->r[10]=R8(c->r[24]+c->r[7]); // 802460C8
  c->r[4]=c->r[24]+c->r[7]; // 802460CC
  c->r[6]=c->r[24]+c->r[8]; // 802460D0
  {uint32_t ea=c->r[3]+0x00001AB8u; c->f[12]=c->ps1[12]=RF32(ea);} // 802460D4
  W32(c->r[1]+0x00000094u,c->r[10]); // 802460D8
  c->r[3]=0u-c->r[23]; // 802460DC
  c->r[5]=R8(c->r[24]+c->r[8]); // 802460E0
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802460E4
  c->r[6]=R8(c->r[6]+0x00000002u); // 802460E8
  c->r[11]=c->r[1]+0x00000038u; // 802460EC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 802460F0
  c->r[12]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802460F4
  c->r[6]=c->r[6]-c->r[5]; // 802460F8
  c->r[4]=R8(c->r[4]+0x00000004u); // 802460FC
  c->r[6]=c->r[6]^0x80000000u; // 80246100
  {uint32_t ea=c->r[25]+0x00001AC0u; c->f[3]=RF64(ea);} // 80246104
  W32(c->r[1]+0x00000094u,c->r[6]); // 80246108
  c->r[4]=c->r[4]-c->r[10]; // 8024610C
  c->r[4]=c->r[4]^0x80000000u; // 80246110
  {uint32_t ea=c->r[20]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 80246114
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80246118
  c->r[27]=c->r[1]+0x00000068u; // 8024611C
  {uint32_t ea=c->r[29]+0x00001AC8u; c->f[1]=RF64(ea);} // 80246120
  c->r[3]=c->r[3]|c->r[23]; // 80246124
  W32(c->r[1]+0x00000094u,c->r[4]); // 80246128
  c->r[7]=sraw(c,c->r[3],31); // 8024612C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 80246130
  {uint32_t ea=c->r[20]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 80246134
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80246138
  c->r[31]=c->r[1]+0x00000058u; // 8024613C
  W32(c->r[1]+0x0000008Cu,c->r[5]); // 80246140
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[3]); // 80246144
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80246148
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 8024614C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[13]=c->ps1[13]=RF32(ea);} // 80246150
  c->r[26]=c->r[1]+0x00000078u; // 80246154
  W32(c->r[1]+0x0000008Cu,c->r[5]); // 80246158
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[3]); // 8024615C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 80246160
  c->r[28]=c->r[1]+0x00000070u; // 80246164
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 80246168
  c->r[30]=c->r[1]+0x00000080u; // 8024616C
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 80246170
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[3]); // 80246174
  {uint32_t ea=c->r[21]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 80246178
  c->r[6]=c->r[27]|c->r[27]; // 8024617C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 80246180
  c->r[8]=c->r[22]|c->r[22]; // 80246184
  W32(c->r[1]+0x00000058u,c->r[0]); // 80246188
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8024618C
  {uint32_t ea=c->r[21]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 80246190
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80246194
  c->r[3]=c->r[1]+0x00000048u; // 80246198
  c->r[4]=c->r[1]+0x00000040u; // 8024619C
  c->r[7]=c->r[31]&c->r[7]; // 802461A0
  W32(c->r[1]+0x00000060u,c->r[0]); // 802461A4
  c->r[5]=0u+0x00000001u; // 802461A8
  W32(c->r[1]+0x00000064u,c->r[0]); // 802461AC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[12]);} // 802461B0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[12]);} // 802461B4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[11]);} // 802461B8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 802461BC
  {uint32_t ea=c->r[19]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802461C0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 802461C4
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[9]); // 802461C8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[13]);} // 802461CC
  {uint32_t ea=c->r[11]+c->r[9]; c->f[3]=c->ps1[3]=RF32(ea);} // 802461D0
  {uint32_t ea=c->r[11]+c->r[12]; c->f[0]=c->ps1[0]=RF32(ea);} // 802461D4
  {uint32_t ea=c->r[26]+c->r[9]; WF32(ea,c->f[7]);} // 802461D8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 802461DC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802461E0
  {uint32_t ea=c->r[27]+c->r[9]; WF32(ea,c->f[7]);} // 802461E4
  c->f[1]=c->ps1[1]=S(c->f[9]/c->f[3]); // 802461E8
  {uint32_t ea=c->r[28]+c->r[12]; WF32(ea,c->f[6]);} // 802461EC
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[6]);} // 802461F0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 802461F4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 802461F8
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 802461FC
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 80246200
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80246204
  {uint32_t ea=c->r[28]+c->r[9]; WF32(ea,c->f[1]);} // 80246208
  {uint32_t ea=c->r[30]+c->r[9]; WF32(ea,c->f[1]);} // 8024620C
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 80246210
  {uint32_t ea=c->r[30]+c->r[12]; WF32(ea,c->f[0]);} // 80246214
  c->lr=0x8024621Cu; f_8023E25C(c); // 80246218
  c->r[6]=R8(c->r[24]+0x00000013u); // 8024621C
  c->r[8]=c->r[24]+0x0000000Au; // 80246220
  c->r[7]=R8(c->r[24]+0x00000012u); // 80246224
  c->r[0]=0u-c->r[23]; // 80246228
  c->r[4]=c->r[8]+c->r[6]; // 8024622C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 80246230
  c->r[3]=c->r[0]|c->r[23]; // 80246234
  c->r[0]=R8(c->r[4]+0x00000002u); // 80246238
  c->r[5]=c->r[8]+c->r[7]; // 8024623C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 80246240
  c->r[10]=R8(c->r[5]+0x00000002u); // 80246244
  c->r[5]=sraw(c,c->r[3],31); // 80246248
  c->r[3]=R8(c->r[8]+c->r[7]); // 8024624C
  c->r[11]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80246250
  W32(c->r[1]+0x00000094u,c->r[0]); // 80246254
  c->r[12]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80246258
  c->r[3]=c->r[3]-c->r[10]; // 8024625C
  {uint32_t ea=c->r[20]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80246260
  {uint32_t ea=c->r[19]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80246264
  c->r[3]=c->r[3]^0x80000000u; // 80246268
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=RF64(ea);} // 8024626C
  c->r[7]=c->r[31]&c->r[5]; // 80246270
  {uint32_t ea=c->r[21]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 80246274
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80246278
  W32(c->r[1]+0x00000094u,c->r[3]); // 8024627C
  c->r[9]=c->r[1]+0x00000028u; // 80246280
  c->r[3]=R8(c->r[4]+0x00000006u); // 80246284
  c->r[6]=c->r[27]|c->r[27]; // 80246288
  c->f[10]=c->ps1[10]=S(c->f[0]-c->f[8]); // 8024628C
  {uint32_t ea=c->r[20]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 80246290
  c->r[3]=c->r[3]-c->r[0]; // 80246294
  c->r[18]=c->r[3]^0x80000000u; // 80246298
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8024629C
  {uint32_t ea=c->r[29]+0x00001AC8u; c->f[3]=RF64(ea);} // 802462A0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 802462A4
  c->r[8]=c->r[22]|c->r[22]; // 802462A8
  {uint32_t ea=c->r[25]+0x00001AC0u; c->f[6]=RF64(ea);} // 802462AC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 802462B0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 802462B4
  c->r[3]=c->r[1]+0x00000048u; // 802462B8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[6]); // 802462BC
  {uint32_t ea=c->r[21]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 802462C0
  W32(c->r[1]+0x00000094u,c->r[18]); // 802462C4
  {uint32_t ea=c->r[9]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 802462C8
  c->r[4]=c->r[1]+0x00000040u; // 802462CC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 802462D0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 802462D4
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 802462D8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 802462DC
  {uint32_t ea=c->r[9]+c->r[12]; c->f[0]=c->ps1[0]=RF32(ea);} // 802462E0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[5]=RF64(ea);} // 802462E4
  c->r[5]=0u+0x00000001u; // 802462E8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 802462EC
  c->f[2]=c->ps1[2]=S(c->f[8]/c->f[2]); // 802462F0
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 802462F4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 802462F8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 802462FC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 80246300
  {uint32_t ea=c->r[19]+0x00000050u; c->f[8]=c->ps1[8]=RF32(ea);} // 80246304
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 80246308
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8024630C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80246310
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[6]); // 80246314
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 80246318
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 8024631C
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 80246320
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[10]);} // 80246324
  {uint32_t ea=c->r[30]+c->r[11]; WF32(ea,c->f[5]);} // 80246328
  {uint32_t ea=c->r[28]+c->r[11]; WF32(ea,c->f[5]);} // 8024632C
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[4]);} // 80246330
  {uint32_t ea=c->r[28]+c->r[12]; WF32(ea,c->f[4]);} // 80246334
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80246338
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[9]);} // 8024633C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 80246340
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 80246344
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[2]);} // 80246348
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8024634C
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 80246350
  {uint32_t ea=c->r[30]+c->r[12]; WF32(ea,c->f[0]);} // 80246354
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 80246358
  c->lr=0x80246360u; f_8023E25C(c); // 8024635C
  c->r[6]=R8(c->r[24]+0x00000031u); // 80246360
  c->r[4]=c->r[24]+0x00000028u; // 80246364
  {uint32_t ea=c->r[20]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246368
  c->r[0]=0u-c->r[23]; // 8024636C
  {uint32_t ea=c->r[19]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246370
  c->r[7]=c->r[4]+c->r[6]; // 80246374
  c->r[8]=R8(c->r[24]+0x00000030u); // 80246378
  c->r[3]=c->r[0]|c->r[23]; // 8024637C
  c->r[0]=R8(c->r[7]+0x00000006u); // 80246380
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80246384
  c->r[4]=c->r[4]+c->r[8]; // 80246388
  {uint32_t ea=c->r[21]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8024638C
  c->r[5]=sraw(c,c->r[3],31); // 80246390
  W32(c->r[1]+0x00000094u,c->r[0]); // 80246394
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[8]); // 80246398
  c->r[10]=R8(c->r[4]+0x00000006u); // 8024639C
  c->r[11]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802463A0
  c->r[3]=R8(c->r[4]+0x00000004u); // 802463A4
  c->r[12]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802463A8
  {uint32_t ea=c->r[20]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802463AC
  c->r[4]=c->r[3]-c->r[10]; // 802463B0
  c->r[3]=R8(c->r[7]+0x00000002u); // 802463B4
  {uint32_t ea=c->r[21]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 802463B8
  c->r[4]=c->r[4]^0x80000000u; // 802463BC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 802463C0
  c->r[3]=c->r[3]-c->r[0]; // 802463C4
  c->f[10]=c->ps1[10]=S(c->f[0]+c->f[5]); // 802463C8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[11]=c->ps1[11]=RF32(ea);} // 802463CC
  W32(c->r[1]+0x00000094u,c->r[4]); // 802463D0
  c->r[18]=c->r[3]^0x80000000u; // 802463D4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[12]=c->ps1[12]=RF32(ea);} // 802463D8
  c->r[9]=c->r[1]+0x00000018u; // 802463DC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 802463E0
  c->r[7]=c->r[31]&c->r[5]; // 802463E4
  {uint32_t ea=c->r[29]+0x00001AC8u; c->f[1]=RF64(ea);} // 802463E8
  c->r[6]=c->r[27]|c->r[27]; // 802463EC
  {uint32_t ea=c->r[25]+0x00001AC0u; c->f[6]=RF64(ea);} // 802463F0
  c->r[8]=c->r[22]|c->r[22]; // 802463F4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 802463F8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 802463FC
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 80246400
  c->r[3]=c->r[1]+0x00000048u; // 80246404
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 80246408
  c->r[4]=c->r[1]+0x00000040u; // 8024640C
  c->r[5]=0u+0x00000001u; // 80246410
  {uint32_t ea=c->r[19]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80246414
  W32(c->r[1]+0x00000094u,c->r[18]); // 80246418
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[5]); // 8024641C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80246420
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[12]);} // 80246424
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80246428
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[11]);} // 8024642C
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 80246430
  {uint32_t ea=c->r[9]+c->r[11]; c->f[2]=c->ps1[2]=RF32(ea);} // 80246434
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 80246438
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8024643C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[10]);} // 80246440
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 80246444
  {uint32_t ea=c->r[9]+c->r[12]; c->f[0]=c->ps1[0]=RF32(ea);} // 80246448
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 8024644C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80246450
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 80246454
  c->f[2]=c->ps1[2]=S(c->f[7]/c->f[2]); // 80246458
  {uint32_t ea=c->r[28]+c->r[11]; WF32(ea,c->f[5]);} // 8024645C
  {uint32_t ea=c->r[30]+c->r[11]; WF32(ea,c->f[5]);} // 80246460
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80246464
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[4]);} // 80246468
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 8024646C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 80246470
  {uint32_t ea=c->r[30]+c->r[12]; WF32(ea,c->f[4]);} // 80246474
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 80246478
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[9]);} // 8024647C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[7]);} // 80246480
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 80246484
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80246488
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 8024648C
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 80246490
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80246494
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[2]);} // 80246498
  {uint32_t ea=c->r[28]+c->r[12]; WF32(ea,c->f[0]);} // 8024649C
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[0]);} // 802464A0
  c->lr=0x802464A8u; f_8023E25C(c); // 802464A4
  c->r[6]=R8(c->r[24]+0x0000001Du); // 802464A8
  c->r[8]=c->r[24]+0x00000014u; // 802464AC
  {uint32_t ea=c->r[20]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 802464B0
  c->r[0]=0u-c->r[23]; // 802464B4
  c->r[7]=R8(c->r[24]+0x0000001Cu); // 802464B8
  c->r[4]=c->r[8]+c->r[6]; // 802464BC
  c->r[3]=c->r[0]|c->r[23]; // 802464C0
  c->r[0]=R8(c->r[4]+0x00000004u); // 802464C4
  c->r[4]=c->r[8]+c->r[7]; // 802464C8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 802464CC
  c->r[9]=R8(c->r[4]+0x00000004u); // 802464D0
  c->r[5]=sraw(c,c->r[3],31); // 802464D4
  W32(c->r[1]+0x00000094u,c->r[0]); // 802464D8
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802464DC
  c->r[3]=R8(c->r[4]+0x00000006u); // 802464E0
  c->r[7]=c->r[31]&c->r[5]; // 802464E4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 802464E8
  c->r[12]=c->r[1]+0x00000008u; // 802464EC
  c->r[4]=c->r[3]-c->r[9]; // 802464F0
  {uint32_t ea=c->r[20]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802464F4
  c->r[3]=R8(c->r[8]+c->r[6]); // 802464F8
  c->r[4]=c->r[4]^0x80000000u; // 802464FC
  W32(c->r[1]+0x00000094u,c->r[4]); // 80246500
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80246504
  {uint32_t ea=c->r[21]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 80246508
  c->r[3]=c->r[3]-c->r[0]; // 8024650C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[6]=c->ps1[6]=RF32(ea);} // 80246510
  c->r[3]=c->r[3]^0x80000000u; // 80246514
  c->f[8]=c->ps1[8]=S(c->f[1]+c->f[7]); // 80246518
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8024651C
  {uint32_t ea=c->r[29]+0x00001AC8u; c->f[1]=RF64(ea);} // 80246520
  c->r[6]=c->r[27]|c->r[27]; // 80246524
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 80246528
  c->r[8]=c->r[22]|c->r[22]; // 8024652C
  W32(c->r[1]+0x00000094u,c->r[3]); // 80246530
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 80246534
  {uint32_t ea=c->r[21]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80246538
  c->r[3]=c->r[1]+0x00000048u; // 8024653C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80246540
  c->r[4]=c->r[1]+0x00000040u; // 80246544
  {uint32_t ea=c->r[25]+0x00001AC0u; c->f[6]=RF64(ea);} // 80246548
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 8024654C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80246550
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 80246554
  c->r[5]=0u+0x00000001u; // 80246558
  {uint32_t ea=c->r[12]+c->r[10]; c->f[2]=c->ps1[2]=RF32(ea);} // 8024655C
  {uint32_t ea=c->r[12]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 80246560
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80246564
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 80246568
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8024656C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 80246570
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[9]);} // 80246574
  c->f[2]=c->ps1[2]=S(c->f[5]/c->f[2]); // 80246578
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 8024657C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 80246580
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[8]);} // 80246584
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[5]);} // 80246588
  {uint32_t ea=c->r[19]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 8024658C
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 80246590
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80246594
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[6]); // 80246598
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 8024659C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 802465A0
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 802465A4
  {uint32_t ea=c->r[27]+c->r[10]; WF32(ea,c->f[5]);} // 802465A8
  {uint32_t ea=c->r[26]+c->r[10]; WF32(ea,c->f[5]);} // 802465AC
  {uint32_t ea=c->r[30]+c->r[11]; WF32(ea,c->f[4]);} // 802465B0
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[4]);} // 802465B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 802465B8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802465BC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 802465C0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 802465C4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 802465C8
  {uint32_t ea=c->r[30]+c->r[10]; WF32(ea,c->f[2]);} // 802465CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802465D0
  {uint32_t ea=c->r[28]+c->r[10]; WF32(ea,c->f[2]);} // 802465D4
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[0]);} // 802465D8
  {uint32_t ea=c->r[28]+c->r[11]; WF32(ea,c->f[0]);} // 802465DC
  c->lr=0x802465E4u; f_8023E25C(c); // 802465E0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 802465E4
  c->r[11]=c->r[1]+0x000000D0u; // 802465E8
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 802465EC
  c->lr=0x802465F4u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802465F0
  c->r[0]=R32(c->r[1]+0x000000E4u); // 802465F4
  c->lr=c->r[0]; // 802465F8
  c->r[1]=c->r[1]+0x000000E0u; // 802465FC
  return; // 80246600
}

// DrawFrame4__Q36nw4hbm3lyt6WindowFRCQ36nw4hbm4math4VEC2PCQ46nw4hbm3lyt6Window5FrameRCQ36nw4hbm3lyt15WindowFrameSizeUc
void f_80246604(Ctx* __restrict c) {
  trace_call(0x80246604u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80246604
  c->r[0]=c->lr; // 80246608
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8024660C
  c->r[11]=c->r[1]+0x000000F0u; // 80246610
  c->lr=0x80246618u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80246614
  c->r[8]=0u+0x80260000u; // 80246618
  c->r[0]=0u+0xFFFFFFFFu; // 8024661C
  {uint32_t ea=c->r[8]+0x00001AB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246620
  c->r[8]=0u+0x43300000u; // 80246624
  c->r[17]=c->r[3]|c->r[3]; // 80246628
  c->r[21]=c->r[7]|c->r[7]; // 8024662C
  W32(c->r[1]+0x000000A0u,c->r[8]); // 80246630
  c->r[18]=c->r[4]|c->r[4]; // 80246634
  c->r[19]=c->r[5]|c->r[5]; // 80246638
  c->r[20]=c->r[6]|c->r[6]; // 8024663C
  W32(c->r[1]+0x000000A8u,c->r[8]); // 80246640
  c->r[4]=c->r[21]|c->r[21]; // 80246644
  c->r[3]=0u+0x00000000u; // 80246648
  W32(c->r[1]+0x00000070u,c->r[0]); // 8024664C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80246650
  W32(c->r[1]+0x00000078u,c->r[0]); // 80246654
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80246658
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8024665C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80246660
  c->lr=0x80246668u; f_8023DB5C(c); // 80246664
  c->r[23]=c->r[3]|c->r[3]; // 80246668
  c->r[3]=R32(c->r[19]+0x00000004u); // 8024666C
  c->r[4]=c->r[23]|c->r[23]; // 80246670
  c->r[5]=c->r[21]|c->r[21]; // 80246674
  c->r[12]=R32(c->r[3]+0x00000000u); // 80246678
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8024667C
  c->ctr=c->r[12]; // 80246680
  if (true) { c->lr=0x80246688u; dispatch(c,c->ctr); } // 80246684
  {uint32_t ea=c->r[18]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246688
  c->r[22]=c->r[3]|c->r[3]; // 8024668C
  {uint32_t ea=c->r[18]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246690
  c->r[3]=c->r[1]+0x00000058u; // 80246694
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80246698
  c->r[5]=0u+0x00000000u; // 8024669C
  {uint32_t ea=c->r[20]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802466A0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 802466A4
  {uint32_t ea=c->r[20]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802466A8
  {uint32_t ea=c->r[17]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802466AC
  c->r[16]=R8(c->r[19]+0x00000000u); // 802466B0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 802466B4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 802466B8
  c->r[4]=R32(c->r[19]+0x00000004u); // 802466BC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 802466C0
  c->lr=0x802466C8u; f_802429FC(c); // 802466C4
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 802466C8
  c->r[24]=0u+0x802A0000u; // 802466CC
  c->r[25]=0u+0x80260000u; // 802466D0
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802466D4
  c->r[24]=c->r[24]+0x00000A08u; // 802466D8
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 802466DC
  c->r[4]=c->r[24]+c->r[0]; // 802466E0
  c->r[29]=0u+0x80260000u; // 802466E4
  c->r[0]=R8(c->r[4]+0x00000009u); // 802466E8
  c->r[5]=c->r[1]+0x00000038u; // 802466EC
  c->r[3]=R8(c->r[4]+0x00000008u); // 802466F0
  c->r[26]=c->r[1]+0x00000090u; // 802466F4
  c->r[6]=R8(c->r[4]+c->r[0]); // 802466F8
  c->r[10]=c->r[4]+c->r[0]; // 802466FC
  {uint32_t ea=c->r[4]+c->r[3]; c->r[7]=R8(ea); c->r[4]=ea;} // 80246700
  c->r[9]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80246704
  W32(c->r[1]+0x000000ACu,c->r[6]); // 80246708
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8024670C
  c->r[0]=R8(c->r[4]+0x00000002u); // 80246710
  c->r[27]=c->r[1]+0x00000080u; // 80246714
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80246718
  c->r[28]=c->r[1]+0x00000088u; // 8024671C
  c->r[3]=c->r[0]-c->r[7]; // 80246720
  c->r[0]=R8(c->r[10]+0x00000004u); // 80246724
  c->r[3]=c->r[3]^0x80000000u; // 80246728
  {uint32_t ea=c->r[25]+0x00001AC0u; c->f[8]=RF64(ea);} // 8024672C
  W32(c->r[1]+0x000000ACu,c->r[3]); // 80246730
  c->r[0]=c->r[0]-c->r[6]; // 80246734
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80246738
  {uint32_t ea=c->r[29]+0x00001AC8u; c->f[5]=RF64(ea);} // 8024673C
  W32(c->r[1]+0x000000A4u,c->r[7]); // 80246740
  c->r[0]=c->r[0]^0x80000000u; // 80246744
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80246748
  c->r[30]=c->r[1]+0x00000098u; // 8024674C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 80246750
  c->r[3]=c->r[22]|c->r[22]; // 80246754
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 80246758
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8024675C
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 80246760
  c->r[4]=0u+0x00000001u; // 80246764
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 80246768
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024676C
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80246770
  {uint32_t ea=c->r[5]+c->r[8]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246774
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80246778
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8024677C
  {uint32_t ea=c->r[5]+c->r[9]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246780
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246784
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246788
  {uint32_t ea=c->r[26]+c->r[8]; WF32(ea,c->f[7]);} // 8024678C
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80246790
  W32(c->r[1]+0x000000A4u,c->r[7]); // 80246794
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 80246798
  {uint32_t ea=c->r[27]+c->r[8]; WF32(ea,c->f[7]);} // 8024679C
  W32(c->r[1]+0x000000A4u,c->r[6]); // 802467A0
  {uint32_t ea=c->r[28]+c->r[9]; WF32(ea,c->f[6]);} // 802467A4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802467A8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 802467AC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 802467B0
  {uint32_t ea=c->r[27]+c->r[9]; WF32(ea,c->f[6]);} // 802467B4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 802467B8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 802467BC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 802467C0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802467C4
  {uint32_t ea=c->r[28]+c->r[8]; WF32(ea,c->f[1]);} // 802467C8
  {uint32_t ea=c->r[30]+c->r[8]; WF32(ea,c->f[1]);} // 802467CC
  {uint32_t ea=c->r[26]+c->r[9]; WF32(ea,c->f[0]);} // 802467D0
  {uint32_t ea=c->r[30]+c->r[9]; WF32(ea,c->f[0]);} // 802467D4
  c->lr=0x802467DCu; f_8023DC18(c); // 802467D8
  c->r[0]=0u-c->r[22]; // 802467DC
  c->r[31]=c->r[1]+0x00000070u; // 802467E0
  c->r[0]=c->r[0]|c->r[22]; // 802467E4
  c->r[6]=c->r[27]|c->r[27]; // 802467E8
  c->r[0]=sraw(c,c->r[0],31); // 802467EC
  c->r[8]=c->r[21]|c->r[21]; // 802467F0
  c->r[3]=c->r[1]+0x00000068u; // 802467F4
  c->r[4]=c->r[1]+0x00000060u; // 802467F8
  c->r[7]=c->r[31]&c->r[0]; // 802467FC
  c->r[5]=0u+0x00000001u; // 80246800
  c->lr=0x80246808u; f_8023E25C(c); // 80246804
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 80246808
  c->r[4]=c->r[23]|c->r[23]; // 8024680C
  c->r[5]=c->r[21]|c->r[21]; // 80246810
  c->r[12]=R32(c->r[3]+0x00000000u); // 80246814
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80246818
  c->ctr=c->r[12]; // 8024681C
  if (true) { c->lr=0x80246824u; dispatch(c,c->ctr); } // 80246820
  {uint32_t ea=c->r[18]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80246824
  c->r[22]=c->r[3]|c->r[3]; // 80246828
  {uint32_t ea=c->r[17]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024682C
  c->r[3]=c->r[1]+0x00000050u; // 80246830
  {uint32_t ea=c->r[18]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80246834
  c->r[5]=0u+0x00000000u; // 80246838
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8024683C
  {uint32_t ea=c->r[20]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246840
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 80246844
  {uint32_t ea=c->r[20]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80246848
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 8024684C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 80246850
  c->r[16]=R8(c->r[19]+0x00000008u); // 80246854
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 80246858
  c->r[4]=R32(c->r[19]+0x0000000Cu); // 8024685C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 80246860
  {uint32_t ea=c->r[17]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246864
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 80246868
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8024686C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80246870
  c->lr=0x80246878u; f_802429FC(c); // 80246874
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 80246878
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024687C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246880
  c->r[8]=c->r[1]+0x00000028u; // 80246884
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80246888
  c->r[3]=c->r[22]|c->r[22]; // 8024688C
  c->r[9]=c->r[24]+c->r[0]; // 80246890
  {uint32_t ea=c->r[25]+0x00001AC0u; c->f[8]=RF64(ea);} // 80246894
  c->r[6]=R8(c->r[9]+0x00000009u); // 80246898
  c->r[4]=0u+0x00000001u; // 8024689C
  c->r[7]=R8(c->r[9]+0x00000008u); // 802468A0
  c->r[11]=c->r[9]+c->r[6]; // 802468A4
  {uint32_t ea=c->r[29]+0x00001AC8u; c->f[5]=RF64(ea);} // 802468A8
  c->r[10]=R8(c->r[11]+0x00000002u); // 802468AC
  c->r[5]=c->r[9]+c->r[7]; // 802468B0
  c->r[0]=R8(c->r[5]+0x00000002u); // 802468B4
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802468B8
  W32(c->r[1]+0x000000ACu,c->r[10]); // 802468BC
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802468C0
  c->r[7]=R8(c->r[9]+c->r[7]); // 802468C4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 802468C8
  c->r[9]=c->r[7]-c->r[0]; // 802468CC
  c->r[7]=R8(c->r[11]+0x00000006u); // 802468D0
  c->r[9]=c->r[9]^0x80000000u; // 802468D4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 802468D8
  c->r[7]=c->r[7]-c->r[10]; // 802468DC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 802468E0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 802468E4
  c->r[7]=c->r[7]^0x80000000u; // 802468E8
  W32(c->r[1]+0x000000ACu,c->r[9]); // 802468EC
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 802468F0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 802468F4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 802468F8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 802468FC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246900
  W32(c->r[1]+0x000000ACu,c->r[7]); // 80246904
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246908
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8024690C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80246910
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246914
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246918
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024691C
  {uint32_t ea=c->r[30]+c->r[5]; WF32(ea,c->f[7]);} // 80246920
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80246924
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80246928
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 8024692C
  {uint32_t ea=c->r[28]+c->r[5]; WF32(ea,c->f[7]);} // 80246930
  {uint32_t ea=c->r[27]+c->r[6]; WF32(ea,c->f[6]);} // 80246934
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80246938
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8024693C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80246940
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80246944
  {uint32_t ea=c->r[28]+c->r[6]; WF32(ea,c->f[6]);} // 80246948
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 8024694C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80246950
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 80246954
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80246958
  {uint32_t ea=c->r[27]+c->r[5]; WF32(ea,c->f[1]);} // 8024695C
  {uint32_t ea=c->r[26]+c->r[5]; WF32(ea,c->f[1]);} // 80246960
  {uint32_t ea=c->r[30]+c->r[6]; WF32(ea,c->f[0]);} // 80246964
  {uint32_t ea=c->r[26]+c->r[6]; WF32(ea,c->f[0]);} // 80246968
  c->lr=0x80246970u; f_8023DC18(c); // 8024696C
  c->r[0]=0u-c->r[22]; // 80246970
  c->r[6]=c->r[27]|c->r[27]; // 80246974
  c->r[0]=c->r[0]|c->r[22]; // 80246978
  c->r[8]=c->r[21]|c->r[21]; // 8024697C
  c->r[0]=sraw(c,c->r[0],31); // 80246980
  c->r[3]=c->r[1]+0x00000068u; // 80246984
  c->r[4]=c->r[1]+0x00000060u; // 80246988
  c->r[5]=0u+0x00000001u; // 8024698C
  c->r[7]=c->r[31]&c->r[0]; // 80246990
  c->lr=0x80246998u; f_8023E25C(c); // 80246994
  c->r[3]=R32(c->r[19]+0x0000001Cu); // 80246998
  c->r[4]=c->r[23]|c->r[23]; // 8024699C
  c->r[5]=c->r[21]|c->r[21]; // 802469A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802469A4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802469A8
  c->ctr=c->r[12]; // 802469AC
  if (true) { c->lr=0x802469B4u; dispatch(c,c->ctr); } // 802469B0
  {uint32_t ea=c->r[18]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802469B4
  c->r[22]=c->r[3]|c->r[3]; // 802469B8
  {uint32_t ea=c->r[17]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802469BC
  c->r[3]=c->r[1]+0x00000048u; // 802469C0
  {uint32_t ea=c->r[20]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802469C4
  c->r[5]=0u+0x00000000u; // 802469C8
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 802469CC
  {uint32_t ea=c->r[18]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802469D0
  {uint32_t ea=c->r[20]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802469D4
  c->r[16]=R8(c->r[19]+0x00000018u); // 802469D8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 802469DC
  c->r[4]=R32(c->r[19]+0x0000001Cu); // 802469E0
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[1]); // 802469E4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 802469E8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 802469EC
  {uint32_t ea=c->r[17]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802469F0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 802469F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802469F8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 802469FC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80246A00
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 80246A04
  c->lr=0x80246A0Cu; f_802429FC(c); // 80246A08
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 80246A0C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80246A10
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246A14
  c->r[8]=c->r[1]+0x00000018u; // 80246A18
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80246A1C
  c->r[3]=c->r[22]|c->r[22]; // 80246A20
  c->r[7]=c->r[24]+c->r[0]; // 80246A24
  {uint32_t ea=c->r[25]+0x00001AC0u; c->f[8]=RF64(ea);} // 80246A28
  c->r[6]=R8(c->r[7]+0x00000009u); // 80246A2C
  c->r[4]=0u+0x00000001u; // 80246A30
  c->r[5]=R8(c->r[7]+0x00000008u); // 80246A34
  c->r[11]=c->r[7]+c->r[6]; // 80246A38
  {uint32_t ea=c->r[29]+0x00001AC8u; c->f[5]=RF64(ea);} // 80246A3C
  c->r[7]=c->r[7]+c->r[5]; // 80246A40
  c->r[10]=R8(c->r[11]+0x00000006u); // 80246A44
  c->r[0]=R8(c->r[7]+0x00000006u); // 80246A48
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80246A4C
  W32(c->r[1]+0x000000ACu,c->r[10]); // 80246A50
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80246A54
  c->r[7]=R8(c->r[7]+0x00000004u); // 80246A58
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80246A5C
  c->r[9]=c->r[7]-c->r[0]; // 80246A60
  c->r[7]=R8(c->r[11]+0x00000002u); // 80246A64
  c->r[9]=c->r[9]^0x80000000u; // 80246A68
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80246A6C
  c->r[7]=c->r[7]-c->r[10]; // 80246A70
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80246A74
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80246A78
  c->r[7]=c->r[7]^0x80000000u; // 80246A7C
  W32(c->r[1]+0x000000ACu,c->r[9]); // 80246A80
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 80246A84
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 80246A88
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80246A8C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80246A90
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246A94
  W32(c->r[1]+0x000000ACu,c->r[7]); // 80246A98
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246A9C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80246AA0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80246AA4
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246AA8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246AAC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246AB0
  {uint32_t ea=c->r[28]+c->r[5]; WF32(ea,c->f[7]);} // 80246AB4
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80246AB8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80246ABC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 80246AC0
  {uint32_t ea=c->r[30]+c->r[5]; WF32(ea,c->f[7]);} // 80246AC4
  {uint32_t ea=c->r[26]+c->r[6]; WF32(ea,c->f[6]);} // 80246AC8
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80246ACC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80246AD0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80246AD4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80246AD8
  {uint32_t ea=c->r[30]+c->r[6]; WF32(ea,c->f[6]);} // 80246ADC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 80246AE0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80246AE4
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 80246AE8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80246AEC
  {uint32_t ea=c->r[26]+c->r[5]; WF32(ea,c->f[1]);} // 80246AF0
  {uint32_t ea=c->r[27]+c->r[5]; WF32(ea,c->f[1]);} // 80246AF4
  {uint32_t ea=c->r[28]+c->r[6]; WF32(ea,c->f[0]);} // 80246AF8
  {uint32_t ea=c->r[27]+c->r[6]; WF32(ea,c->f[0]);} // 80246AFC
  c->lr=0x80246B04u; f_8023DC18(c); // 80246B00
  c->r[0]=0u-c->r[22]; // 80246B04
  c->r[6]=c->r[27]|c->r[27]; // 80246B08
  c->r[0]=c->r[0]|c->r[22]; // 80246B0C
  c->r[8]=c->r[21]|c->r[21]; // 80246B10
  c->r[0]=sraw(c,c->r[0],31); // 80246B14
  c->r[3]=c->r[1]+0x00000068u; // 80246B18
  c->r[4]=c->r[1]+0x00000060u; // 80246B1C
  c->r[5]=0u+0x00000001u; // 80246B20
  c->r[7]=c->r[31]&c->r[0]; // 80246B24
  c->lr=0x80246B2Cu; f_8023E25C(c); // 80246B28
  c->r[3]=R32(c->r[19]+0x00000014u); // 80246B2C
  c->r[4]=c->r[23]|c->r[23]; // 80246B30
  c->r[5]=c->r[21]|c->r[21]; // 80246B34
  c->r[12]=R32(c->r[3]+0x00000000u); // 80246B38
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80246B3C
  c->ctr=c->r[12]; // 80246B40
  if (true) { c->lr=0x80246B48u; dispatch(c,c->ctr); } // 80246B44
  {uint32_t ea=c->r[18]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246B48
  c->r[22]=c->r[3]|c->r[3]; // 80246B4C
  {uint32_t ea=c->r[20]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246B50
  c->r[3]=c->r[1]+0x00000040u; // 80246B54
  {uint32_t ea=c->r[18]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80246B58
  c->r[5]=0u+0x00000000u; // 80246B5C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 80246B60
  {uint32_t ea=c->r[20]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246B64
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 80246B68
  c->r[18]=R8(c->r[19]+0x00000010u); // 80246B6C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 80246B70
  c->r[4]=R32(c->r[19]+0x00000014u); // 80246B74
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80246B78
  {uint32_t ea=c->r[17]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246B7C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80246B80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80246B84
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80246B88
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80246B8C
  c->lr=0x80246B94u; f_802429FC(c); // 80246B90
  c->r[0]=(uint32_t)((int32_t)c->r[18]*(int32_t)10); // 80246B94
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246B98
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246B9C
  c->r[5]=c->r[1]+0x00000008u; // 80246BA0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80246BA4
  c->r[3]=c->r[22]|c->r[22]; // 80246BA8
  c->r[8]=c->r[24]+c->r[0]; // 80246BAC
  {uint32_t ea=c->r[25]+0x00001AC0u; c->f[8]=RF64(ea);} // 80246BB0
  c->r[9]=R8(c->r[8]+0x00000009u); // 80246BB4
  c->r[4]=0u+0x00000001u; // 80246BB8
  c->r[10]=R8(c->r[8]+0x00000008u); // 80246BBC
  c->r[6]=c->r[8]+c->r[9]; // 80246BC0
  c->r[0]=R8(c->r[8]+c->r[9]); // 80246BC4
  c->r[7]=R8(c->r[6]+0x00000004u); // 80246BC8
  c->r[6]=c->r[8]+c->r[10]; // 80246BCC
  c->r[8]=R8(c->r[6]+0x00000004u); // 80246BD0
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80246BD4
  W32(c->r[1]+0x000000ACu,c->r[7]); // 80246BD8
  c->r[0]=c->r[0]-c->r[7]; // 80246BDC
  c->r[6]=R8(c->r[6]+0x00000006u); // 80246BE0
  c->r[0]=c->r[0]^0x80000000u; // 80246BE4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80246BE8
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80246BEC
  c->r[6]=c->r[6]-c->r[8]; // 80246BF0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80246BF4
  c->r[6]=c->r[6]^0x80000000u; // 80246BF8
  {uint32_t ea=c->r[29]+0x00001AC8u; c->f[5]=RF64(ea);} // 80246BFC
  W32(c->r[1]+0x000000ACu,c->r[6]); // 80246C00
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80246C04
  {uint32_t ea=c->r[5]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246C08
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80246C0C
  W32(c->r[1]+0x000000A4u,c->r[8]); // 80246C10
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246C14
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 80246C18
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80246C1C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 80246C20
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80246C24
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80246C28
  {uint32_t ea=c->r[5]+c->r[9]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246C2C
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80246C30
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246C34
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246C38
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80246C3C
  W32(c->r[1]+0x000000A4u,c->r[8]); // 80246C40
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 80246C44
  {uint32_t ea=c->r[27]+c->r[10]; WF32(ea,c->f[7]);} // 80246C48
  {uint32_t ea=c->r[26]+c->r[10]; WF32(ea,c->f[7]);} // 80246C4C
  {uint32_t ea=c->r[30]+c->r[9]; WF32(ea,c->f[6]);} // 80246C50
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80246C54
  W32(c->r[1]+0x000000A4u,c->r[7]); // 80246C58
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80246C5C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80246C60
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80246C64
  {uint32_t ea=c->r[26]+c->r[9]; WF32(ea,c->f[6]);} // 80246C68
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80246C6C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[8]); // 80246C70
  {uint32_t ea=c->r[30]+c->r[10]; WF32(ea,c->f[3]);} // 80246C74
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80246C78
  {uint32_t ea=c->r[28]+c->r[10]; WF32(ea,c->f[3]);} // 80246C7C
  {uint32_t ea=c->r[27]+c->r[9]; WF32(ea,c->f[0]);} // 80246C80
  {uint32_t ea=c->r[28]+c->r[9]; WF32(ea,c->f[0]);} // 80246C84
  c->lr=0x80246C8Cu; f_8023DC18(c); // 80246C88
  c->r[0]=0u-c->r[22]; // 80246C8C
  c->r[6]=c->r[27]|c->r[27]; // 80246C90
  c->r[0]=c->r[0]|c->r[22]; // 80246C94
  c->r[8]=c->r[21]|c->r[21]; // 80246C98
  c->r[0]=sraw(c,c->r[0],31); // 80246C9C
  c->r[3]=c->r[1]+0x00000068u; // 80246CA0
  c->r[4]=c->r[1]+0x00000060u; // 80246CA4
  c->r[5]=0u+0x00000001u; // 80246CA8
  c->r[7]=c->r[31]&c->r[0]; // 80246CAC
  c->lr=0x80246CB4u; f_8023E25C(c); // 80246CB0
  c->r[11]=c->r[1]+0x000000F0u; // 80246CB4
  c->lr=0x80246CBCu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80246CB8
  c->r[0]=R32(c->r[1]+0x000000F4u); // 80246CBC
  c->lr=c->r[0]; // 80246CC0
  c->r[1]=c->r[1]+0x000000F0u; // 80246CC4
  return; // 80246CC8
}

// DrawFrame8__Q36nw4hbm3lyt6WindowFRCQ36nw4hbm4math4VEC2PCQ46nw4hbm3lyt6Window5FrameRCQ36nw4hbm3lyt15WindowFrameSizeUc
void f_80246CCC(Ctx* __restrict c) {
  trace_call(0x80246CCCu);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80246CCC
  c->r[0]=c->lr; // 80246CD0
  W32(c->r[1]+0x00000194u,c->r[0]); // 80246CD4
  c->r[11]=c->r[1]+0x00000190u; // 80246CD8
  c->lr=0x80246CE0u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80246CDC
  c->r[8]=0u+0x80260000u; // 80246CE0
  c->r[0]=0u+0xFFFFFFFFu; // 80246CE4
  {uint32_t ea=c->r[8]+0x00001AB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246CE8
  c->r[8]=0u+0x43300000u; // 80246CEC
  c->r[27]=c->r[3]|c->r[3]; // 80246CF0
  c->r[31]=c->r[7]|c->r[7]; // 80246CF4
  W32(c->r[1]+0x00000138u,c->r[8]); // 80246CF8
  c->r[28]=c->r[4]|c->r[4]; // 80246CFC
  c->r[29]=c->r[5]|c->r[5]; // 80246D00
  c->r[30]=c->r[6]|c->r[6]; // 80246D04
  W32(c->r[1]+0x00000140u,c->r[8]); // 80246D08
  c->r[4]=c->r[31]|c->r[31]; // 80246D0C
  c->r[3]=0u+0x00000000u; // 80246D10
  W32(c->r[1]+0x00000108u,c->r[0]); // 80246D14
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 80246D18
  W32(c->r[1]+0x00000110u,c->r[0]); // 80246D1C
  W32(c->r[1]+0x00000114u,c->r[0]); // 80246D20
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80246D24
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80246D28
  c->lr=0x80246D30u; f_8023DB5C(c); // 80246D2C
  c->r[18]=c->r[3]|c->r[3]; // 80246D30
  c->r[3]=R32(c->r[29]+0x00000004u); // 80246D34
  c->r[4]=c->r[18]|c->r[18]; // 80246D38
  c->r[5]=c->r[31]|c->r[31]; // 80246D3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80246D40
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80246D44
  c->ctr=c->r[12]; // 80246D48
  if (true) { c->lr=0x80246D50u; dispatch(c,c->ctr); } // 80246D4C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246D50
  c->r[17]=c->r[3]|c->r[3]; // 80246D54
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246D58
  c->r[3]=c->r[1]+0x000000F0u; // 80246D5C
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 80246D60
  c->r[5]=0u+0x00000000u; // 80246D64
  c->r[16]=R8(c->r[29]+0x00000000u); // 80246D68
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 80246D6C
  c->r[4]=R32(c->r[29]+0x00000004u); // 80246D70
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80246D74
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 80246D78
  c->lr=0x80246D80u; f_802429FC(c); // 80246D7C
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 80246D80
  c->r[19]=0u+0x802A0000u; // 80246D84
  c->r[20]=0u+0x80260000u; // 80246D88
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80246D8C
  c->r[19]=c->r[19]+0x00000A08u; // 80246D90
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80246D94
  c->r[4]=c->r[19]+c->r[0]; // 80246D98
  c->r[24]=0u+0x80260000u; // 80246D9C
  c->r[0]=R8(c->r[4]+0x00000009u); // 80246DA0
  c->r[5]=c->r[1]+0x00000040u; // 80246DA4
  c->r[3]=R8(c->r[4]+0x00000008u); // 80246DA8
  c->r[21]=c->r[1]+0x00000128u; // 80246DAC
  c->r[6]=R8(c->r[4]+c->r[0]); // 80246DB0
  c->r[10]=c->r[4]+c->r[0]; // 80246DB4
  {uint32_t ea=c->r[4]+c->r[3]; c->r[7]=R8(ea); c->r[4]=ea;} // 80246DB8
  c->r[9]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80246DBC
  W32(c->r[1]+0x00000144u,c->r[6]); // 80246DC0
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80246DC4
  c->r[0]=R8(c->r[4]+0x00000002u); // 80246DC8
  c->r[22]=c->r[1]+0x00000118u; // 80246DCC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80246DD0
  c->r[23]=c->r[1]+0x00000120u; // 80246DD4
  c->r[3]=c->r[0]-c->r[7]; // 80246DD8
  c->r[0]=R8(c->r[10]+0x00000004u); // 80246DDC
  c->r[3]=c->r[3]^0x80000000u; // 80246DE0
  {uint32_t ea=c->r[20]+0x00001AC0u; c->f[8]=RF64(ea);} // 80246DE4
  W32(c->r[1]+0x00000144u,c->r[3]); // 80246DE8
  c->r[0]=c->r[0]-c->r[6]; // 80246DEC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80246DF0
  {uint32_t ea=c->r[24]+0x00001AC8u; c->f[5]=RF64(ea);} // 80246DF4
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 80246DF8
  c->r[0]=c->r[0]^0x80000000u; // 80246DFC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80246E00
  c->r[25]=c->r[1]+0x00000130u; // 80246E04
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 80246E08
  c->r[3]=c->r[17]|c->r[17]; // 80246E0C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 80246E10
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246E14
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 80246E18
  c->r[4]=0u+0x00000001u; // 80246E1C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 80246E20
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80246E24
  W32(c->r[1]+0x00000144u,c->r[0]); // 80246E28
  {uint32_t ea=c->r[5]+c->r[8]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246E2C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80246E30
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80246E34
  {uint32_t ea=c->r[5]+c->r[9]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246E38
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246E3C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246E40
  {uint32_t ea=c->r[21]+c->r[8]; WF32(ea,c->f[7]);} // 80246E44
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80246E48
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 80246E4C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 80246E50
  {uint32_t ea=c->r[22]+c->r[8]; WF32(ea,c->f[7]);} // 80246E54
  W32(c->r[1]+0x0000013Cu,c->r[6]); // 80246E58
  {uint32_t ea=c->r[23]+c->r[9]; WF32(ea,c->f[6]);} // 80246E5C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80246E60
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 80246E64
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80246E68
  {uint32_t ea=c->r[22]+c->r[9]; WF32(ea,c->f[6]);} // 80246E6C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 80246E70
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80246E74
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 80246E78
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80246E7C
  {uint32_t ea=c->r[23]+c->r[8]; WF32(ea,c->f[1]);} // 80246E80
  {uint32_t ea=c->r[25]+c->r[8]; WF32(ea,c->f[1]);} // 80246E84
  {uint32_t ea=c->r[21]+c->r[9]; WF32(ea,c->f[0]);} // 80246E88
  {uint32_t ea=c->r[25]+c->r[9]; WF32(ea,c->f[0]);} // 80246E8C
  c->lr=0x80246E94u; f_8023DC18(c); // 80246E90
  c->r[0]=0u-c->r[17]; // 80246E94
  c->r[26]=c->r[1]+0x00000108u; // 80246E98
  c->r[0]=c->r[0]|c->r[17]; // 80246E9C
  c->r[3]=c->r[28]|c->r[28]; // 80246EA0
  c->r[0]=sraw(c,c->r[0],31); // 80246EA4
  c->r[6]=c->r[22]|c->r[22]; // 80246EA8
  c->r[8]=c->r[31]|c->r[31]; // 80246EAC
  c->r[4]=c->r[1]+0x00000100u; // 80246EB0
  c->r[7]=c->r[26]&c->r[0]; // 80246EB4
  c->r[5]=0u+0x00000001u; // 80246EB8
  c->lr=0x80246EC0u; f_8023E25C(c); // 80246EBC
  c->r[3]=R32(c->r[29]+0x00000034u); // 80246EC0
  c->r[4]=c->r[18]|c->r[18]; // 80246EC4
  c->r[5]=c->r[31]|c->r[31]; // 80246EC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80246ECC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80246ED0
  c->ctr=c->r[12]; // 80246ED4
  if (true) { c->lr=0x80246EDCu; dispatch(c,c->ctr); } // 80246ED8
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80246EDC
  c->r[17]=c->r[3]|c->r[3]; // 80246EE0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246EE4
  c->r[3]=c->r[1]+0x000000E0u; // 80246EE8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80246EEC
  c->r[5]=0u+0x00000000u; // 80246EF0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80246EF4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246EF8
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[2]);} // 80246EFC
  c->r[16]=R8(c->r[29]+0x00000030u); // 80246F00
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80246F04
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 80246F08
  c->r[4]=R32(c->r[29]+0x00000034u); // 80246F0C
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80246F10
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80246F14
  c->lr=0x80246F1Cu; f_802429FC(c); // 80246F18
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 80246F1C
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246F20
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80246F24
  c->r[9]=c->r[1]+0x00000038u; // 80246F28
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80246F2C
  c->r[3]=c->r[17]|c->r[17]; // 80246F30
  c->r[5]=c->r[19]+c->r[0]; // 80246F34
  {uint32_t ea=c->r[20]+0x00001AC0u; c->f[8]=RF64(ea);} // 80246F38
  c->r[7]=R8(c->r[5]+0x00000009u); // 80246F3C
  c->r[4]=0u+0x00000001u; // 80246F40
  c->r[6]=R8(c->r[5]+0x00000008u); // 80246F44
  c->r[0]=R8(c->r[5]+c->r[7]); // 80246F48
  c->r[8]=c->r[5]+c->r[7]; // 80246F4C
  c->r[10]=c->r[5]+c->r[6]; // 80246F50
  c->r[5]=R8(c->r[5]+c->r[6]); // 80246F54
  W32(c->r[1]+0x00000144u,c->r[0]); // 80246F58
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80246F5C
  c->r[10]=R8(c->r[10]+0x00000002u); // 80246F60
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80246F64
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80246F68
  c->r[10]=c->r[10]-c->r[5]; // 80246F6C
  c->r[8]=R8(c->r[8]+0x00000004u); // 80246F70
  c->r[10]=c->r[10]^0x80000000u; // 80246F74
  W32(c->r[1]+0x0000013Cu,c->r[5]); // 80246F78
  c->r[8]=c->r[8]-c->r[0]; // 80246F7C
  {uint32_t ea=c->r[24]+0x00001AC8u; c->f[5]=RF64(ea);} // 80246F80
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 80246F84
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80246F88
  W32(c->r[1]+0x00000144u,c->r[10]); // 80246F8C
  c->r[8]=c->r[8]^0x80000000u; // 80246F90
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 80246F94
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80246F98
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80246F9C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 80246FA0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246FA4
  W32(c->r[1]+0x00000144u,c->r[8]); // 80246FA8
  {uint32_t ea=c->r[9]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246FAC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80246FB0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80246FB4
  {uint32_t ea=c->r[9]+c->r[7]; c->f[1]=c->ps1[1]=RF32(ea);} // 80246FB8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80246FBC
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80246FC0
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[7]);} // 80246FC4
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80246FC8
  W32(c->r[1]+0x0000013Cu,c->r[5]); // 80246FCC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 80246FD0
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[7]);} // 80246FD4
  {uint32_t ea=c->r[23]+c->r[7]; WF32(ea,c->f[6]);} // 80246FD8
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 80246FDC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80246FE0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 80246FE4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80246FE8
  {uint32_t ea=c->r[22]+c->r[7]; WF32(ea,c->f[6]);} // 80246FEC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 80246FF0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80246FF4
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 80246FF8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80246FFC
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[1]);} // 80247000
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[1]);} // 80247004
  {uint32_t ea=c->r[21]+c->r[7]; WF32(ea,c->f[0]);} // 80247008
  {uint32_t ea=c->r[25]+c->r[7]; WF32(ea,c->f[0]);} // 8024700C
  c->lr=0x80247014u; f_8023DC18(c); // 80247010
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247014
  c->r[0]=0u-c->r[17]; // 80247018
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024701C
  c->r[0]=c->r[0]|c->r[17]; // 80247020
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80247024
  c->r[0]=sraw(c,c->r[0],31); // 80247028
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8024702C
  c->r[6]=c->r[22]|c->r[22]; // 80247030
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[2]);} // 80247034
  c->r[8]=c->r[31]|c->r[31]; // 80247038
  c->r[7]=c->r[26]&c->r[0]; // 8024703C
  c->r[3]=c->r[1]+0x000000D8u; // 80247040
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 80247044
  c->r[4]=c->r[1]+0x00000100u; // 80247048
  c->r[5]=0u+0x00000001u; // 8024704C
  c->lr=0x80247054u; f_8023E25C(c); // 80247050
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80247054
  c->r[4]=c->r[18]|c->r[18]; // 80247058
  c->r[5]=c->r[31]|c->r[31]; // 8024705C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80247060
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80247064
  c->ctr=c->r[12]; // 80247068
  if (true) { c->lr=0x80247070u; dispatch(c,c->ctr); } // 8024706C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247070
  c->r[17]=c->r[3]|c->r[3]; // 80247074
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247078
  c->r[3]=c->r[1]+0x000000C8u; // 8024707C
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 80247080
  c->r[5]=0u+0x00000000u; // 80247084
  c->r[16]=R8(c->r[29]+0x00000008u); // 80247088
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 8024708C
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80247090
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80247094
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 80247098
  c->lr=0x802470A0u; f_802429FC(c); // 8024709C
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 802470A0
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802470A4
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802470A8
  c->r[8]=c->r[1]+0x00000030u; // 802470AC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 802470B0
  c->r[3]=c->r[17]|c->r[17]; // 802470B4
  c->r[9]=c->r[19]+c->r[0]; // 802470B8
  {uint32_t ea=c->r[20]+0x00001AC0u; c->f[8]=RF64(ea);} // 802470BC
  c->r[6]=R8(c->r[9]+0x00000009u); // 802470C0
  c->r[4]=0u+0x00000001u; // 802470C4
  c->r[7]=R8(c->r[9]+0x00000008u); // 802470C8
  c->r[11]=c->r[9]+c->r[6]; // 802470CC
  {uint32_t ea=c->r[24]+0x00001AC8u; c->f[5]=RF64(ea);} // 802470D0
  c->r[10]=R8(c->r[11]+0x00000002u); // 802470D4
  c->r[5]=c->r[9]+c->r[7]; // 802470D8
  c->r[0]=R8(c->r[5]+0x00000002u); // 802470DC
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802470E0
  W32(c->r[1]+0x00000144u,c->r[10]); // 802470E4
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802470E8
  c->r[7]=R8(c->r[9]+c->r[7]); // 802470EC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 802470F0
  c->r[9]=c->r[7]-c->r[0]; // 802470F4
  c->r[7]=R8(c->r[11]+0x00000006u); // 802470F8
  c->r[9]=c->r[9]^0x80000000u; // 802470FC
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 80247100
  c->r[7]=c->r[7]-c->r[10]; // 80247104
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80247108
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 8024710C
  c->r[7]=c->r[7]^0x80000000u; // 80247110
  W32(c->r[1]+0x00000144u,c->r[9]); // 80247114
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 80247118
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024711C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247120
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80247124
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80247128
  W32(c->r[1]+0x00000144u,c->r[7]); // 8024712C
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 80247130
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247134
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80247138
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 8024713C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80247140
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247144
  {uint32_t ea=c->r[25]+c->r[5]; WF32(ea,c->f[7]);} // 80247148
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 8024714C
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 80247150
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 80247154
  {uint32_t ea=c->r[23]+c->r[5]; WF32(ea,c->f[7]);} // 80247158
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[6]);} // 8024715C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80247160
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80247164
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 80247168
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 8024716C
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[6]);} // 80247170
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 80247174
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80247178
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 8024717C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80247180
  {uint32_t ea=c->r[22]+c->r[5]; WF32(ea,c->f[1]);} // 80247184
  {uint32_t ea=c->r[21]+c->r[5]; WF32(ea,c->f[1]);} // 80247188
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[0]);} // 8024718C
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[0]);} // 80247190
  c->lr=0x80247198u; f_8023DC18(c); // 80247194
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247198
  c->r[0]=0u-c->r[17]; // 8024719C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802471A0
  c->r[0]=c->r[0]|c->r[17]; // 802471A4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802471A8
  c->r[0]=sraw(c,c->r[0],31); // 802471AC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 802471B0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802471B4
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 802471B8
  c->r[6]=c->r[22]|c->r[22]; // 802471BC
  c->r[8]=c->r[31]|c->r[31]; // 802471C0
  c->r[7]=c->r[26]&c->r[0]; // 802471C4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802471C8
  c->r[3]=c->r[1]+0x000000C0u; // 802471CC
  c->r[4]=c->r[1]+0x00000100u; // 802471D0
  c->r[5]=0u+0x00000001u; // 802471D4
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 802471D8
  c->lr=0x802471E0u; f_8023E25C(c); // 802471DC
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 802471E0
  c->r[4]=c->r[18]|c->r[18]; // 802471E4
  c->r[5]=c->r[31]|c->r[31]; // 802471E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802471EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802471F0
  c->ctr=c->r[12]; // 802471F4
  if (true) { c->lr=0x802471FCu; dispatch(c,c->ctr); } // 802471F8
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 802471FC
  c->r[17]=c->r[3]|c->r[3]; // 80247200
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247204
  c->r[3]=c->r[1]+0x000000B0u; // 80247208
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024720C
  c->r[5]=0u+0x00000000u; // 80247210
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80247214
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80247218
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 8024721C
  c->r[16]=R8(c->r[29]+0x00000028u); // 80247220
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80247224
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 80247228
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 8024722C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 80247230
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80247234
  c->lr=0x8024723Cu; f_802429FC(c); // 80247238
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 8024723C
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247240
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247244
  c->r[8]=c->r[1]+0x00000028u; // 80247248
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8024724C
  c->r[3]=c->r[17]|c->r[17]; // 80247250
  c->r[9]=c->r[19]+c->r[0]; // 80247254
  {uint32_t ea=c->r[20]+0x00001AC0u; c->f[8]=RF64(ea);} // 80247258
  c->r[6]=R8(c->r[9]+0x00000009u); // 8024725C
  c->r[4]=0u+0x00000001u; // 80247260
  c->r[7]=R8(c->r[9]+0x00000008u); // 80247264
  c->r[11]=c->r[9]+c->r[6]; // 80247268
  {uint32_t ea=c->r[24]+0x00001AC8u; c->f[5]=RF64(ea);} // 8024726C
  c->r[10]=R8(c->r[11]+0x00000002u); // 80247270
  c->r[5]=c->r[9]+c->r[7]; // 80247274
  c->r[0]=R8(c->r[5]+0x00000002u); // 80247278
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8024727C
  W32(c->r[1]+0x00000144u,c->r[10]); // 80247280
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80247284
  c->r[7]=R8(c->r[9]+c->r[7]); // 80247288
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8024728C
  c->r[9]=c->r[7]-c->r[0]; // 80247290
  c->r[7]=R8(c->r[11]+0x00000006u); // 80247294
  c->r[9]=c->r[9]^0x80000000u; // 80247298
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 8024729C
  c->r[7]=c->r[7]-c->r[10]; // 802472A0
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 802472A4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 802472A8
  c->r[7]=c->r[7]^0x80000000u; // 802472AC
  W32(c->r[1]+0x00000144u,c->r[9]); // 802472B0
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 802472B4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 802472B8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 802472BC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 802472C0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 802472C4
  W32(c->r[1]+0x00000144u,c->r[7]); // 802472C8
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 802472CC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 802472D0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 802472D4
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 802472D8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 802472DC
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 802472E0
  {uint32_t ea=c->r[25]+c->r[5]; WF32(ea,c->f[7]);} // 802472E4
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 802472E8
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 802472EC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 802472F0
  {uint32_t ea=c->r[23]+c->r[5]; WF32(ea,c->f[7]);} // 802472F4
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[6]);} // 802472F8
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 802472FC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80247300
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 80247304
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80247308
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[6]);} // 8024730C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 80247310
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80247314
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 80247318
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8024731C
  {uint32_t ea=c->r[22]+c->r[5]; WF32(ea,c->f[1]);} // 80247320
  {uint32_t ea=c->r[21]+c->r[5]; WF32(ea,c->f[1]);} // 80247324
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[0]);} // 80247328
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[0]);} // 8024732C
  c->lr=0x80247334u; f_8023DC18(c); // 80247330
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247334
  c->r[0]=0u-c->r[17]; // 80247338
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024733C
  c->r[0]=c->r[0]|c->r[17]; // 80247340
  c->r[0]=sraw(c,c->r[0],31); // 80247344
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80247348
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8024734C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80247350
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247354
  c->r[6]=c->r[22]|c->r[22]; // 80247358
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8024735C
  c->r[8]=c->r[31]|c->r[31]; // 80247360
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80247364
  c->r[7]=c->r[26]&c->r[0]; // 80247368
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 8024736C
  c->r[3]=c->r[1]+0x000000A8u; // 80247370
  c->r[4]=c->r[1]+0x00000100u; // 80247374
  c->r[5]=0u+0x00000001u; // 80247378
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8024737C
  c->lr=0x80247384u; f_8023E25C(c); // 80247380
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80247384
  c->r[4]=c->r[18]|c->r[18]; // 80247388
  c->r[5]=c->r[31]|c->r[31]; // 8024738C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80247390
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80247394
  c->ctr=c->r[12]; // 80247398
  if (true) { c->lr=0x802473A0u; dispatch(c,c->ctr); } // 8024739C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802473A0
  c->r[17]=c->r[3]|c->r[3]; // 802473A4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802473A8
  c->r[3]=c->r[1]+0x00000098u; // 802473AC
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 802473B0
  c->r[5]=0u+0x00000000u; // 802473B4
  c->r[16]=R8(c->r[29]+0x00000018u); // 802473B8
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 802473BC
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 802473C0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 802473C4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 802473C8
  c->lr=0x802473D0u; f_802429FC(c); // 802473CC
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 802473D0
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802473D4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 802473D8
  c->r[8]=c->r[1]+0x00000020u; // 802473DC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 802473E0
  c->r[3]=c->r[17]|c->r[17]; // 802473E4
  c->r[7]=c->r[19]+c->r[0]; // 802473E8
  {uint32_t ea=c->r[20]+0x00001AC0u; c->f[8]=RF64(ea);} // 802473EC
  c->r[6]=R8(c->r[7]+0x00000009u); // 802473F0
  c->r[4]=0u+0x00000001u; // 802473F4
  c->r[5]=R8(c->r[7]+0x00000008u); // 802473F8
  c->r[11]=c->r[7]+c->r[6]; // 802473FC
  {uint32_t ea=c->r[24]+0x00001AC8u; c->f[5]=RF64(ea);} // 80247400
  c->r[7]=c->r[7]+c->r[5]; // 80247404
  c->r[10]=R8(c->r[11]+0x00000006u); // 80247408
  c->r[0]=R8(c->r[7]+0x00000006u); // 8024740C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80247410
  W32(c->r[1]+0x00000144u,c->r[10]); // 80247414
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80247418
  c->r[7]=R8(c->r[7]+0x00000004u); // 8024741C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247420
  c->r[9]=c->r[7]-c->r[0]; // 80247424
  c->r[7]=R8(c->r[11]+0x00000002u); // 80247428
  c->r[9]=c->r[9]^0x80000000u; // 8024742C
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 80247430
  c->r[7]=c->r[7]-c->r[10]; // 80247434
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80247438
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 8024743C
  c->r[7]=c->r[7]^0x80000000u; // 80247440
  W32(c->r[1]+0x00000144u,c->r[9]); // 80247444
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 80247448
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024744C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247450
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80247454
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80247458
  W32(c->r[1]+0x00000144u,c->r[7]); // 8024745C
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 80247460
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247464
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80247468
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 8024746C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80247470
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247474
  {uint32_t ea=c->r[23]+c->r[5]; WF32(ea,c->f[7]);} // 80247478
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 8024747C
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 80247480
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 80247484
  {uint32_t ea=c->r[25]+c->r[5]; WF32(ea,c->f[7]);} // 80247488
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[6]);} // 8024748C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80247490
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80247494
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 80247498
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 8024749C
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[6]);} // 802474A0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 802474A4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 802474A8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 802474AC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802474B0
  {uint32_t ea=c->r[21]+c->r[5]; WF32(ea,c->f[1]);} // 802474B4
  {uint32_t ea=c->r[22]+c->r[5]; WF32(ea,c->f[1]);} // 802474B8
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[0]);} // 802474BC
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[0]);} // 802474C0
  c->lr=0x802474C8u; f_8023DC18(c); // 802474C4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802474C8
  c->r[0]=0u-c->r[17]; // 802474CC
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 802474D0
  c->r[0]=c->r[0]|c->r[17]; // 802474D4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802474D8
  c->r[0]=sraw(c,c->r[0],31); // 802474DC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802474E0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 802474E4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802474E8
  c->r[6]=c->r[22]|c->r[22]; // 802474EC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 802474F0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802474F4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802474F8
  c->r[8]=c->r[31]|c->r[31]; // 802474FC
  c->r[7]=c->r[26]&c->r[0]; // 80247500
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80247504
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 80247508
  c->r[3]=c->r[1]+0x00000090u; // 8024750C
  c->r[4]=c->r[1]+0x00000100u; // 80247510
  c->r[5]=0u+0x00000001u; // 80247514
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 80247518
  c->lr=0x80247520u; f_8023E25C(c); // 8024751C
  c->r[3]=R32(c->r[29]+0x0000003Cu); // 80247520
  c->r[4]=c->r[18]|c->r[18]; // 80247524
  c->r[5]=c->r[31]|c->r[31]; // 80247528
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024752C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80247530
  c->ctr=c->r[12]; // 80247534
  if (true) { c->lr=0x8024753Cu; dispatch(c,c->ctr); } // 80247538
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024753C
  c->r[17]=c->r[3]|c->r[3]; // 80247540
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247544
  c->r[3]=c->r[1]+0x00000080u; // 80247548
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024754C
  c->r[5]=0u+0x00000000u; // 80247550
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80247554
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247558
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 8024755C
  c->r[16]=R8(c->r[29]+0x00000038u); // 80247560
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80247564
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 80247568
  c->r[4]=R32(c->r[29]+0x0000003Cu); // 8024756C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80247570
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80247574
  c->lr=0x8024757Cu; f_802429FC(c); // 80247578
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 8024757C
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247580
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247584
  c->r[8]=c->r[1]+0x00000018u; // 80247588
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8024758C
  c->r[3]=c->r[17]|c->r[17]; // 80247590
  c->r[7]=c->r[19]+c->r[0]; // 80247594
  {uint32_t ea=c->r[20]+0x00001AC0u; c->f[8]=RF64(ea);} // 80247598
  c->r[6]=R8(c->r[7]+0x00000009u); // 8024759C
  c->r[4]=0u+0x00000001u; // 802475A0
  c->r[5]=R8(c->r[7]+0x00000008u); // 802475A4
  c->r[11]=c->r[7]+c->r[6]; // 802475A8
  {uint32_t ea=c->r[24]+0x00001AC8u; c->f[5]=RF64(ea);} // 802475AC
  c->r[7]=c->r[7]+c->r[5]; // 802475B0
  c->r[10]=R8(c->r[11]+0x00000006u); // 802475B4
  c->r[0]=R8(c->r[7]+0x00000006u); // 802475B8
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802475BC
  W32(c->r[1]+0x00000144u,c->r[10]); // 802475C0
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802475C4
  c->r[7]=R8(c->r[7]+0x00000004u); // 802475C8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 802475CC
  c->r[9]=c->r[7]-c->r[0]; // 802475D0
  c->r[7]=R8(c->r[11]+0x00000002u); // 802475D4
  c->r[9]=c->r[9]^0x80000000u; // 802475D8
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 802475DC
  c->r[7]=c->r[7]-c->r[10]; // 802475E0
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 802475E4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 802475E8
  c->r[7]=c->r[7]^0x80000000u; // 802475EC
  W32(c->r[1]+0x00000144u,c->r[9]); // 802475F0
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 802475F4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 802475F8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 802475FC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80247600
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80247604
  W32(c->r[1]+0x00000144u,c->r[7]); // 80247608
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 8024760C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247610
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80247614
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 80247618
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8024761C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247620
  {uint32_t ea=c->r[23]+c->r[5]; WF32(ea,c->f[7]);} // 80247624
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80247628
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 8024762C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 80247630
  {uint32_t ea=c->r[25]+c->r[5]; WF32(ea,c->f[7]);} // 80247634
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[6]);} // 80247638
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8024763C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80247640
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 80247644
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80247648
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[6]);} // 8024764C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 80247650
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80247654
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 80247658
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8024765C
  {uint32_t ea=c->r[21]+c->r[5]; WF32(ea,c->f[1]);} // 80247660
  {uint32_t ea=c->r[22]+c->r[5]; WF32(ea,c->f[1]);} // 80247664
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[0]);} // 80247668
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[0]);} // 8024766C
  c->lr=0x80247674u; f_8023DC18(c); // 80247670
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247674
  c->r[0]=0u-c->r[17]; // 80247678
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024767C
  c->r[0]=c->r[0]|c->r[17]; // 80247680
  c->r[0]=sraw(c,c->r[0],31); // 80247684
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80247688
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 8024768C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247690
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247694
  c->r[6]=c->r[22]|c->r[22]; // 80247698
  c->r[8]=c->r[31]|c->r[31]; // 8024769C
  c->r[7]=c->r[26]&c->r[0]; // 802476A0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802476A4
  c->r[3]=c->r[1]+0x00000078u; // 802476A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802476AC
  c->r[4]=c->r[1]+0x00000100u; // 802476B0
  c->r[5]=0u+0x00000001u; // 802476B4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 802476B8
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 802476BC
  c->lr=0x802476C4u; f_8023E25C(c); // 802476C0
  c->r[3]=R32(c->r[29]+0x00000014u); // 802476C4
  c->r[4]=c->r[18]|c->r[18]; // 802476C8
  c->r[5]=c->r[31]|c->r[31]; // 802476CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802476D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802476D4
  c->ctr=c->r[12]; // 802476D8
  if (true) { c->lr=0x802476E0u; dispatch(c,c->ctr); } // 802476DC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802476E0
  c->r[17]=c->r[3]|c->r[3]; // 802476E4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802476E8
  c->r[3]=c->r[1]+0x00000068u; // 802476EC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 802476F0
  c->r[5]=0u+0x00000000u; // 802476F4
  c->r[16]=R8(c->r[29]+0x00000010u); // 802476F8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 802476FC
  c->r[4]=R32(c->r[29]+0x00000014u); // 80247700
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80247704
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 80247708
  c->lr=0x80247710u; f_802429FC(c); // 8024770C
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 80247710
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247714
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80247718
  c->r[6]=c->r[1]+0x00000010u; // 8024771C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80247720
  c->r[3]=c->r[17]|c->r[17]; // 80247724
  c->r[9]=c->r[19]+c->r[0]; // 80247728
  {uint32_t ea=c->r[20]+0x00001AC0u; c->f[8]=RF64(ea);} // 8024772C
  c->r[10]=R8(c->r[9]+0x00000009u); // 80247730
  c->r[4]=0u+0x00000001u; // 80247734
  c->r[0]=R8(c->r[9]+0x00000008u); // 80247738
  c->r[7]=c->r[9]+c->r[10]; // 8024773C
  c->r[5]=R8(c->r[9]+c->r[10]); // 80247740
  c->r[8]=R8(c->r[7]+0x00000004u); // 80247744
  c->r[7]=c->r[9]+c->r[0]; // 80247748
  c->r[9]=R8(c->r[7]+0x00000004u); // 8024774C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80247750
  W32(c->r[1]+0x00000144u,c->r[8]); // 80247754
  c->r[5]=c->r[5]-c->r[8]; // 80247758
  c->r[7]=R8(c->r[7]+0x00000006u); // 8024775C
  c->r[5]=c->r[5]^0x80000000u; // 80247760
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247764
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80247768
  c->r[7]=c->r[7]-c->r[9]; // 8024776C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80247770
  c->r[7]=c->r[7]^0x80000000u; // 80247774
  {uint32_t ea=c->r[24]+0x00001AC8u; c->f[5]=RF64(ea);} // 80247778
  W32(c->r[1]+0x00000144u,c->r[7]); // 8024777C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80247780
  {uint32_t ea=c->r[6]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80247784
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247788
  W32(c->r[1]+0x0000013Cu,c->r[9]); // 8024778C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80247790
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80247794
  W32(c->r[1]+0x00000144u,c->r[5]); // 80247798
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 8024779C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 802477A0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 802477A4
  {uint32_t ea=c->r[6]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 802477A8
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 802477AC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 802477B0
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 802477B4
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 802477B8
  W32(c->r[1]+0x0000013Cu,c->r[9]); // 802477BC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 802477C0
  {uint32_t ea=c->r[22]+c->r[0]; WF32(ea,c->f[7]);} // 802477C4
  {uint32_t ea=c->r[21]+c->r[0]; WF32(ea,c->f[7]);} // 802477C8
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[6]);} // 802477CC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802477D0
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 802477D4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 802477D8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 802477DC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 802477E0
  {uint32_t ea=c->r[21]+c->r[10]; WF32(ea,c->f[6]);} // 802477E4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 802477E8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[8]); // 802477EC
  {uint32_t ea=c->r[25]+c->r[0]; WF32(ea,c->f[3]);} // 802477F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802477F4
  {uint32_t ea=c->r[23]+c->r[0]; WF32(ea,c->f[3]);} // 802477F8
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[0]);} // 802477FC
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[0]);} // 80247800
  c->lr=0x80247808u; f_8023DC18(c); // 80247804
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247808
  c->r[0]=0u-c->r[17]; // 8024780C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247810
  c->r[0]=c->r[0]|c->r[17]; // 80247814
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80247818
  c->r[0]=sraw(c,c->r[0],31); // 8024781C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80247820
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80247824
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 80247828
  c->r[6]=c->r[22]|c->r[22]; // 8024782C
  c->r[8]=c->r[31]|c->r[31]; // 80247830
  c->r[7]=c->r[26]&c->r[0]; // 80247834
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80247838
  c->r[3]=c->r[1]+0x00000060u; // 8024783C
  c->r[4]=c->r[1]+0x00000100u; // 80247840
  c->r[5]=0u+0x00000001u; // 80247844
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80247848
  c->lr=0x80247850u; f_8023E25C(c); // 8024784C
  c->r[3]=R32(c->r[29]+0x00000024u); // 80247850
  c->r[4]=c->r[18]|c->r[18]; // 80247854
  c->r[5]=c->r[31]|c->r[31]; // 80247858
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024785C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80247860
  c->ctr=c->r[12]; // 80247864
  if (true) { c->lr=0x8024786Cu; dispatch(c,c->ctr); } // 80247868
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024786C
  c->r[17]=c->r[3]|c->r[3]; // 80247870
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247874
  c->r[3]=c->r[1]+0x00000050u; // 80247878
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024787C
  c->r[5]=0u+0x00000000u; // 80247880
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80247884
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80247888
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 8024788C
  c->r[18]=R8(c->r[29]+0x00000020u); // 80247890
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80247894
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 80247898
  c->r[4]=R32(c->r[29]+0x00000024u); // 8024789C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 802478A0
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 802478A4
  c->lr=0x802478ACu; f_802429FC(c); // 802478A8
  c->r[0]=(uint32_t)((int32_t)c->r[18]*(int32_t)10); // 802478AC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802478B0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 802478B4
  c->r[5]=c->r[1]+0x00000008u; // 802478B8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802478BC
  c->r[3]=c->r[17]|c->r[17]; // 802478C0
  c->r[8]=c->r[19]+c->r[0]; // 802478C4
  {uint32_t ea=c->r[20]+0x00001AC0u; c->f[8]=RF64(ea);} // 802478C8
  c->r[9]=R8(c->r[8]+0x00000009u); // 802478CC
  c->r[4]=0u+0x00000001u; // 802478D0
  c->r[10]=R8(c->r[8]+0x00000008u); // 802478D4
  c->r[6]=c->r[8]+c->r[9]; // 802478D8
  c->r[0]=R8(c->r[8]+c->r[9]); // 802478DC
  c->r[7]=R8(c->r[6]+0x00000004u); // 802478E0
  c->r[6]=c->r[8]+c->r[10]; // 802478E4
  c->r[8]=R8(c->r[6]+0x00000004u); // 802478E8
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 802478EC
  W32(c->r[1]+0x00000144u,c->r[7]); // 802478F0
  c->r[0]=c->r[0]-c->r[7]; // 802478F4
  c->r[6]=R8(c->r[6]+0x00000006u); // 802478F8
  c->r[0]=c->r[0]^0x80000000u; // 802478FC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247900
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80247904
  c->r[6]=c->r[6]-c->r[8]; // 80247908
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024790C
  c->r[6]=c->r[6]^0x80000000u; // 80247910
  {uint32_t ea=c->r[24]+0x00001AC8u; c->f[5]=RF64(ea);} // 80247914
  W32(c->r[1]+0x00000144u,c->r[6]); // 80247918
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8024791C
  {uint32_t ea=c->r[5]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 80247920
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247924
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80247928
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8024792C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80247930
  W32(c->r[1]+0x00000144u,c->r[0]); // 80247934
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80247938
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8024793C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80247940
  {uint32_t ea=c->r[5]+c->r[9]; c->f[1]=c->ps1[1]=RF32(ea);} // 80247944
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80247948
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8024794C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247950
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80247954
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80247958
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 8024795C
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[7]);} // 80247960
  {uint32_t ea=c->r[21]+c->r[10]; WF32(ea,c->f[7]);} // 80247964
  {uint32_t ea=c->r[25]+c->r[9]; WF32(ea,c->f[6]);} // 80247968
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8024796C
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 80247970
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80247974
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 80247978
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8024797C
  {uint32_t ea=c->r[21]+c->r[9]; WF32(ea,c->f[6]);} // 80247980
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80247984
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[8]); // 80247988
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[3]);} // 8024798C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80247990
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[3]);} // 80247994
  {uint32_t ea=c->r[22]+c->r[9]; WF32(ea,c->f[0]);} // 80247998
  {uint32_t ea=c->r[23]+c->r[9]; WF32(ea,c->f[0]);} // 8024799C
  c->lr=0x802479A4u; f_8023DC18(c); // 802479A0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802479A4
  c->r[0]=0u-c->r[17]; // 802479A8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802479AC
  c->r[0]=c->r[0]|c->r[17]; // 802479B0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802479B4
  c->r[0]=sraw(c,c->r[0],31); // 802479B8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802479BC
  c->r[6]=c->r[22]|c->r[22]; // 802479C0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 802479C4
  c->r[8]=c->r[31]|c->r[31]; // 802479C8
  c->r[7]=c->r[26]&c->r[0]; // 802479CC
  c->r[3]=c->r[1]+0x00000048u; // 802479D0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 802479D4
  c->r[4]=c->r[1]+0x00000100u; // 802479D8
  c->r[5]=0u+0x00000001u; // 802479DC
  c->lr=0x802479E4u; f_8023E25C(c); // 802479E0
  c->r[11]=c->r[1]+0x00000190u; // 802479E4
  c->lr=0x802479ECu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802479E8
  c->r[0]=R32(c->r[1]+0x00000194u); // 802479EC
  c->lr=c->r[0]; // 802479F0
  c->r[1]=c->r[1]+0x00000190u; // 802479F4
  return; // 802479F8
}

// GetFrameSize__Q36nw4hbm3lyt6WindowFUcPCQ46nw4hbm3lyt6Window5Frame
void f_802479FC(Ctx* __restrict c) {
  trace_call(0x802479FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802479FC
  c->r[0]=c->lr; // 80247A00
  cmps(c,0,(int32_t)c->r[5],4); // 80247A04
  W32(c->r[1]+0x00000044u,c->r[0]); // 80247A08
  c->r[0]=0u+0x00000000u; // 80247A0C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80247A10
  c->r[31]=c->r[6]|c->r[6]; // 80247A14
  W32(c->r[1]+0x00000038u,c->r[30]); // 80247A18
  c->r[30]=c->r[3]|c->r[3]; // 80247A1C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80247A20
  W32(c->r[1]+0x00000024u,c->r[0]); // 80247A24
  W32(c->r[1]+0x00000028u,c->r[0]); // 80247A28
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80247A2C
  if (crb(c,2)) { goto L_80247A7C; } // 80247A30
  if (!crb(c,0)) { goto L_80247A44; } // 80247A34
  cmps(c,0,(int32_t)c->r[5],1); // 80247A38
  if (crb(c,2)) { goto L_80247A50; } // 80247A3C
  goto L_80247AC4; // 80247A40
L_80247A44:;
  cmps(c,0,(int32_t)c->r[5],8); // 80247A44
  if (crb(c,2)) { goto L_80247A7C; } // 80247A48
  goto L_80247AC4; // 80247A4C
L_80247A50:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 80247A50
  c->r[3]=c->r[1]+0x00000018u; // 80247A54
  c->r[5]=0u+0x00000000u; // 80247A58
  c->lr=0x80247A60u; f_802429FC(c); // 80247A5C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247A60
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80247A64
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80247A68
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80247A6C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80247A70
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80247A74
  goto L_80247AC4; // 80247A78
L_80247A7C:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 80247A7C
  c->r[3]=c->r[1]+0x00000010u; // 80247A80
  c->r[5]=0u+0x00000000u; // 80247A84
  c->lr=0x80247A8Cu; f_802429FC(c); // 80247A88
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247A8C
  c->r[3]=c->r[1]+0x00000008u; // 80247A90
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247A94
  c->r[5]=0u+0x00000000u; // 80247A98
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80247A9C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80247AA0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80247AA4
  c->lr=0x80247AACu; f_802429FC(c); // 80247AA8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247AAC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80247AB0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80247AB4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80247AB8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80247ABC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80247AC0
L_80247AC4:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 80247AC4
  c->r[4]=R32(c->r[1]+0x00000024u); // 80247AC8
  c->r[3]=R32(c->r[1]+0x00000028u); // 80247ACC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80247AD0
  W32(c->r[30]+0x00000000u,c->r[5]); // 80247AD4
  W32(c->r[30]+0x00000004u,c->r[4]); // 80247AD8
  W32(c->r[30]+0x00000008u,c->r[3]); // 80247ADC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80247AE0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80247AE4
  c->r[30]=R32(c->r[1]+0x00000038u); // 80247AE8
  c->r[0]=R32(c->r[1]+0x00000044u); // 80247AEC
  c->lr=c->r[0]; // 80247AF0
  c->r[1]=c->r[1]+0x00000040u; // 80247AF4
  return; // 80247AF8
}

// GetFrameMaterial__Q36nw4hbm3lyt6WindowCFUl
void f_80247AFC(Ctx* __restrict c) {
  trace_call(0x80247AFCu);
  c->r[0]=R8(c->r[3]+0x00000100u); // 80247AFC
  cmpu(c,0,c->r[4],c->r[0]); // 80247B00
  if (crb(c,0)) { goto L_80247B10; } // 80247B04
  c->r[3]=0u+0x00000000u; // 80247B08
  return; // 80247B0C
L_80247B10:;
  c->r[3]=R32(c->r[3]+0x000000FCu); // 80247B10
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80247B14
  c->r[3]=c->r[3]+c->r[0]; // 80247B18
  c->r[3]=R32(c->r[3]+0x00000004u); // 80247B1C
  return; // 80247B20
}

// GetContentMaterial__Q36nw4hbm3lyt6WindowCFv
void f_80247B24(Ctx* __restrict c) {
  trace_call(0x80247B24u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80247B24
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80247B28
  c->ctr=c->r[12]; // 80247B2C
  if (true) { dispatch(c,c->ctr); return; } // 80247B30
}

// GetRuntimeTypeInfo__Q36nw4hbm3lyt6WindowCFv
void f_80247B34(Ctx* __restrict c) {
  trace_call(0x80247B34u);
  c->r[3]=0u+0x80360000u; // 80247B34
  c->r[3]=c->r[3]+0xFFFFCE40u; // 80247B38
  return; // 80247B3C
}

// __sinit_\lyt_window_cpp
void f_80247B40(Ctx* __restrict c) {
  trace_call(0x80247B40u);
  c->r[4]=0u+0x80360000u; // 80247B40
  c->r[3]=0u+0x80360000u; // 80247B44
  c->r[4]=c->r[4]+0xFFFFCE28u; // 80247B48
  W32(c->r[3]+0xFFFFCE40u,c->r[4]); // 80247B4C
  return; // 80247B50
}

// SinFIdx__Q26nw4hbm4mathFf
void f_80247B54(Ctx* __restrict c) {
  trace_call(0x80247B54u);
  c->r[3]=0u+0x80260000u; // 80247B54
  c->f[2]=std::fabs(c->f[1]); // 80247B58
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80247B5C
  {uint32_t ea=c->r[3]+0x00001AD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247B60
  goto L_80247B6C; // 80247B64
L_80247B68:;
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80247B68
L_80247B6C:;
  fcmp(c,0,c->f[2],c->f[0]); // 80247B6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80247B70
  if (crb(c,2)) { IRQCHK(c); goto L_80247B68; } // 80247B74
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,2,ea,1,3);} // 80247B78
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80247B7C
  W16(c->r[1]+0x00000008u,c->r[0]); // 80247B80
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 80247B84
  c->r[5]=0u+0x802A0000u; // 80247B88
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 80247B8C
  c->r[3]=0u+0x80260000u; // 80247B90
  c->r[5]=c->r[5]+0x00000AF0u; // 80247B94
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[0]); // 80247B98
  c->r[4]=c->r[5]+c->r[0]; // 80247B9C
  {uint32_t ea=c->r[3]+0x00001AD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247BA0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80247BA4
  fcmp(c,0,c->f[1],c->f[0]); // 80247BA8
  {uint32_t ea=c->r[5]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80247BAC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[3]); // 80247BB0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 80247BB4
  if (!crb(c,0)) { goto L_80247BC0; } // 80247BB8
  c->f[1]=-c->f[1]; // 80247BBC
L_80247BC0:;
  c->r[1]=c->r[1]+0x00000010u; // 80247BC0
  return; // 80247BC4
}

// CosFIdx__Q26nw4hbm4mathFf
void f_80247BC8(Ctx* __restrict c) {
  trace_call(0x80247BC8u);
  c->r[3]=0u+0x80260000u; // 80247BC8
  c->f[1]=std::fabs(c->f[1]); // 80247BCC
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80247BD0
  {uint32_t ea=c->r[3]+0x00001AD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247BD4
  goto L_80247BE0; // 80247BD8
L_80247BDC:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80247BDC
L_80247BE0:;
  fcmp(c,0,c->f[1],c->f[0]); // 80247BE0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80247BE4
  if (crb(c,2)) { IRQCHK(c); goto L_80247BDC; } // 80247BE8
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 80247BEC
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80247BF0
  W16(c->r[1]+0x00000008u,c->r[0]); // 80247BF4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 80247BF8
  c->r[3]=0u+0x802A0000u; // 80247BFC
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 80247C00
  c->r[3]=c->r[3]+0x00000AF0u; // 80247C04
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80247C08
  c->r[3]=c->r[3]+c->r[0]; // 80247C0C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80247C10
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247C14
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80247C18
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80247C1C
  c->r[1]=c->r[1]+0x00000010u; // 80247C20
  return; // 80247C24
}

// Atan2FIdx__Q26nw4hbm4mathFff
void f_80247C28(Ctx* __restrict c) {
  trace_call(0x80247C28u);
  c->r[3]=0u+0x80260000u; // 80247C28
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80247C2C
  c->r[3]=c->r[3]+0x00001AD0u; // 80247C30
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247C34
  fcmp(c,0,c->f[0],c->f[2]); // 80247C38
  if (!crb(c,2)) { goto L_80247C50; } // 80247C3C
  fcmp(c,0,c->f[0],c->f[1]); // 80247C40
  if (!crb(c,2)) { goto L_80247C50; } // 80247C44
  c->f[1]=c->f[0]; // 80247C48
  goto L_80247DD0; // 80247C4C
L_80247C50:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 80247C50
  fcmp(c,0,c->f[2],c->f[4]); // 80247C54
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80247C58
  if (!crb(c,2)) { goto L_80247CC8; } // 80247C5C
  fcmp(c,0,c->f[1],c->f[4]); // 80247C60
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80247C64
  if (!crb(c,2)) { goto L_80247C98; } // 80247C68
  fcmp(c,0,c->f[2],c->f[1]); // 80247C6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80247C70
  if (!crb(c,2)) { goto L_80247C84; } // 80247C74
  c->f[3]=c->f[2]; // 80247C78
  c->r[0]=0u+0x00000000u; // 80247C7C
  goto L_80247D3C; // 80247C80
L_80247C84:;
  c->f[3]=c->f[1]; // 80247C84
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80247C88
  c->f[1]=c->f[2]; // 80247C8C
  c->r[0]=0u+0x00000001u; // 80247C90
  goto L_80247D3C; // 80247C94
L_80247C98:;
  c->f[1]=-c->f[1]; // 80247C98
  fcmp(c,0,c->f[2],c->f[1]); // 80247C9C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80247CA0
  if (!crb(c,2)) { goto L_80247CB4; } // 80247CA4
  c->f[3]=c->f[2]; // 80247CA8
  c->r[0]=0u+0x00000001u; // 80247CAC
  goto L_80247D3C; // 80247CB0
L_80247CB4:;
  c->f[3]=c->f[1]; // 80247CB4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80247CB8
  c->f[1]=c->f[2]; // 80247CBC
  c->r[0]=0u+0x00000000u; // 80247CC0
  goto L_80247D3C; // 80247CC4
L_80247CC8:;
  fcmp(c,0,c->f[1],c->f[4]); // 80247CC8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80247CCC
  if (!crb(c,2)) { goto L_80247D08; } // 80247CD0
  c->f[0]=-c->f[2]; // 80247CD4
  fcmp(c,0,c->f[0],c->f[1]); // 80247CD8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80247CDC
  if (!crb(c,2)) { goto L_80247CF4; } // 80247CE0
  c->f[3]=c->f[0]; // 80247CE4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80247CE8
  c->r[0]=0u+0x00000001u; // 80247CEC
  goto L_80247D3C; // 80247CF0
L_80247CF4:;
  c->f[3]=c->f[1]; // 80247CF4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80247CF8
  c->f[1]=c->f[0]; // 80247CFC
  c->r[0]=0u+0x00000000u; // 80247D00
  goto L_80247D3C; // 80247D04
L_80247D08:;
  c->f[0]=-c->f[2]; // 80247D08
  c->f[1]=-c->f[1]; // 80247D0C
  fcmp(c,0,c->f[0],c->f[1]); // 80247D10
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80247D14
  if (!crb(c,2)) { goto L_80247D2C; } // 80247D18
  c->f[3]=c->f[0]; // 80247D1C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 80247D20
  c->r[0]=0u+0x00000000u; // 80247D24
  goto L_80247D3C; // 80247D28
L_80247D2C:;
  c->f[3]=c->f[1]; // 80247D2C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80247D30
  c->f[1]=c->f[0]; // 80247D34
  c->r[0]=0u+0x00000001u; // 80247D38
L_80247D3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80247D3C
  if (crb(c,2)) { goto L_80247D8C; } // 80247D40
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 80247D44
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80247D48
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80247D4C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,1,3);} // 80247D50
  c->r[0]=R16(c->r[1]+0x00000010u); // 80247D54
  W16(c->r[1]+0x0000000Au,c->r[0]); // 80247D58
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,0,ea,1,3);} // 80247D5C
  c->r[4]=0u+0x802A0000u; // 80247D60
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80247D64
  c->r[4]=c->r[4]+0x00001B00u; // 80247D68
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80247D6C
  c->r[3]=c->r[4]+c->r[0]; // 80247D70
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80247D74
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247D78
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80247D7C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80247D80
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 80247D84
  goto L_80247DD0; // 80247D88
L_80247D8C:;
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 80247D8C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80247D90
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80247D94
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 80247D98
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80247D9C
  W16(c->r[1]+0x00000008u,c->r[0]); // 80247DA0
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 80247DA4
  c->r[4]=0u+0x802A0000u; // 80247DA8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80247DAC
  c->r[4]=c->r[4]+0x00001B00u; // 80247DB0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80247DB4
  c->r[3]=c->r[4]+c->r[0]; // 80247DB8
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80247DBC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80247DC0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80247DC4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80247DC8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 80247DCC
L_80247DD0:;
  c->r[1]=c->r[1]+0x00000020u; // 80247DD0
  return; // 80247DD4
}

// IsValidBinaryFile__Q26nw4hbm2utFPCQ36nw4hbm2ut16BinaryFileHeaderUlUsUs
void f_80247DD8(Ctx* __restrict c) {
  trace_call(0x80247DD8u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80247DD8
  cmpu(c,0,c->r[0],c->r[4]); // 80247DDC
  if (crb(c,2)) { goto L_80247DEC; } // 80247DE0
  c->r[3]=0u+0x00000000u; // 80247DE4
  return; // 80247DE8
L_80247DEC:;
  c->r[0]=R16(c->r[3]+0x00000004u); // 80247DEC
  cmpu(c,0,c->r[0],0x0000FEFFu); // 80247DF0
  if (crb(c,2)) { goto L_80247E00; } // 80247DF4
  c->r[3]=0u+0x00000000u; // 80247DF8
  return; // 80247DFC
L_80247E00:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 80247E00
  cmpu(c,0,c->r[0],c->r[5]); // 80247E04
  if (crb(c,2)) { goto L_80247E14; } // 80247E08
  c->r[3]=0u+0x00000000u; // 80247E0C
  return; // 80247E10
L_80247E14:;
  c->r[4]=rotl(c->r[6],3)&0x0007FFF8u; // 80247E14
  c->r[5]=R32(c->r[3]+0x00000008u); // 80247E18
  c->r[0]=c->r[4]+0x00000010u; // 80247E1C
  cmpu(c,0,c->r[5],c->r[0]); // 80247E20
  if (!crb(c,0)) { goto L_80247E30; } // 80247E24
  c->r[3]=0u+0x00000000u; // 80247E28
  return; // 80247E2C
L_80247E30:;
  c->r[3]=R16(c->r[3]+0x0000000Eu); // 80247E30
  c->r[0]=c->r[3]-c->r[6]; // 80247E34
  c->r[3]=c->r[3]|~c->r[6]; // 80247E38
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80247E3C
  c->r[0]=c->r[3]-c->r[0]; // 80247E40
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80247E44
  return; // 80247E48
}

// ReadNextCharUTF8__Q36nw4hbm2ut14CharStrmReaderFv
void f_80247E4C(Ctx* __restrict c) {
  trace_call(0x80247E4Cu);
  c->r[7]=R32(c->r[3]+0x00000000u); // 80247E4C
  c->r[6]=R8(c->r[7]+0x00000000u); // 80247E50
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 80247E54
  if (!crb(c,2)) { goto L_80247E6C; } // 80247E58
  c->r[4]=R32(c->r[3]+0x00000000u); // 80247E5C
  c->r[0]=c->r[4]+0x00000001u; // 80247E60
  W32(c->r[3]+0x00000000u,c->r[0]); // 80247E64
  goto L_80247EBC; // 80247E68
L_80247E6C:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 80247E6C
  cmps(c,0,(int32_t)c->r[0],192); // 80247E70
  if (!crb(c,2)) { goto L_80247E98; } // 80247E74
  c->r[4]=R32(c->r[3]+0x00000000u); // 80247E78
  c->r[5]=R8(c->r[7]+0x00000001u); // 80247E7C
  c->r[0]=c->r[4]+0x00000002u; // 80247E80
  c->r[4]=rotl(c->r[5],0)&0x0000003Fu; // 80247E84
  W32(c->r[3]+0x00000000u,c->r[0]); // 80247E88
  c->r[4]=(rotl(c->r[6],6)&0x000007C0u)|(c->r[4]&~0x000007C0u); // 80247E8C
  c->r[6]=c->r[4]|c->r[4]; // 80247E90
  goto L_80247EBC; // 80247E94
L_80247E98:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80247E98
  c->r[5]=rotl(c->r[6],12)&0x0001F000u; // 80247E9C
  c->r[6]=R8(c->r[7]+0x00000001u); // 80247EA0
  c->r[7]=R8(c->r[7]+0x00000002u); // 80247EA4
  c->r[0]=c->r[4]+0x00000003u; // 80247EA8
  c->r[5]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[5]&~0x00000FC0u); // 80247EAC
  c->r[5]=(rotl(c->r[7],0)&0x0000003Fu)|(c->r[5]&~0x0000003Fu); // 80247EB0
  W32(c->r[3]+0x00000000u,c->r[0]); // 80247EB4
  c->r[6]=rotl(c->r[5],0)&0x0000FFFFu; // 80247EB8
L_80247EBC:;
  c->r[3]=c->r[6]|c->r[6]; // 80247EBC
  return; // 80247EC0
}

// ReadNextCharUTF16__Q36nw4hbm2ut14CharStrmReaderFv
void f_80247EC4(Ctx* __restrict c) {
  trace_call(0x80247EC4u);
  c->r[5]=c->r[3]|c->r[3]; // 80247EC4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80247EC8
  c->r[4]=R32(c->r[5]+0x00000000u); // 80247ECC
  c->r[3]=R16(c->r[3]+0x00000000u); // 80247ED0
  c->r[0]=c->r[4]+0x00000002u; // 80247ED4
  W32(c->r[5]+0x00000000u,c->r[0]); // 80247ED8
  return; // 80247EDC
}

// ReadNextCharCP1252__Q36nw4hbm2ut14CharStrmReaderFv
void f_80247EE0(Ctx* __restrict c) {
  trace_call(0x80247EE0u);
  c->r[5]=c->r[3]|c->r[3]; // 80247EE0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80247EE4
  c->r[4]=R32(c->r[5]+0x00000000u); // 80247EE8
  c->r[3]=R8(c->r[3]+0x00000000u); // 80247EEC
  c->r[0]=c->r[4]+0x00000001u; // 80247EF0
  W32(c->r[5]+0x00000000u,c->r[0]); // 80247EF4
  return; // 80247EF8
}

// ReadNextCharSJIS__Q36nw4hbm2ut14CharStrmReaderFv
void f_80247EFC(Ctx* __restrict c) {
  trace_call(0x80247EFCu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 80247EFC
  c->r[0]=0u+0x00000000u; // 80247F00
  c->r[5]=R8(c->r[6]+0x00000000u); // 80247F04
  cmpu(c,0,c->r[5],0x00000081u); // 80247F08
  if (crb(c,0)) { goto L_80247F18; } // 80247F0C
  cmpu(c,0,c->r[5],0x000000A0u); // 80247F10
  if (crb(c,0)) { goto L_80247F20; } // 80247F14
L_80247F18:;
  cmpu(c,0,c->r[5],0x000000E0u); // 80247F18
  if (crb(c,0)) { goto L_80247F24; } // 80247F1C
L_80247F20:;
  c->r[0]=0u+0x00000001u; // 80247F20
L_80247F24:;
  cmps(c,0,(int32_t)c->r[0],0); // 80247F24
  if (crb(c,2)) { goto L_80247F44; } // 80247F28
  c->r[4]=R32(c->r[3]+0x00000000u); // 80247F2C
  c->r[6]=R8(c->r[6]+0x00000001u); // 80247F30
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 80247F34
  c->r[0]=c->r[4]+0x00000002u; // 80247F38
  W32(c->r[3]+0x00000000u,c->r[0]); // 80247F3C
  goto L_80247F54; // 80247F40
L_80247F44:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80247F44
  c->r[6]=c->r[5]|c->r[5]; // 80247F48
  c->r[0]=c->r[4]+0x00000001u; // 80247F4C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80247F50
L_80247F54:;
  c->r[3]=c->r[6]|c->r[6]; // 80247F54
  return; // 80247F58
}

// __ct__Q36nw4hbm2ut10CharWriterFv
void f_80247F5C(Ctx* __restrict c) {
  trace_call(0x80247F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80247F5C
  c->r[0]=c->lr; // 80247F60
  c->r[4]=0u+0x80260000u; // 80247F64
  c->r[7]=0u+0x80360000u; // 80247F68
  W32(c->r[1]+0x00000024u,c->r[0]); // 80247F6C
  c->r[8]=0u+0xFFFFFFFFu; // 80247F70
  {uint32_t ea=c->r[4]+0x00001AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80247F74
  c->r[0]=0u+0x000000FFu; // 80247F78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80247F7C
  c->r[6]=c->r[7]+0xFFFFCE60u; // 80247F80
  c->r[31]=c->r[3]|c->r[3]; // 80247F84
  c->r[4]=c->r[1]+0x00000008u; // 80247F88
  W32(c->r[1]+0x00000018u,c->r[30]); // 80247F8C
  c->r[30]=0u+0x00000000u; // 80247F90
  c->r[5]=c->r[1]+0x0000000Cu; // 80247F94
  W32(c->r[3]+0x00000000u,c->r[8]); // 80247F98
  W32(c->r[3]+0x00000004u,c->r[8]); // 80247F9C
  W32(c->r[3]+0x00000008u,c->r[8]); // 80247FA0
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 80247FA4
  W32(c->r[3]+0x00000010u,c->r[8]); // 80247FA8
  W32(c->r[3]+0x00000014u,c->r[8]); // 80247FAC
  W32(c->r[3]+0x00000018u,c->r[8]); // 80247FB0
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 80247FB4
  W8(c->r[3]+0x00000042u,c->r[0]); // 80247FB8
  W8(c->r[3]+0x00000043u,c->r[30]); // 80247FBC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80247FC0
  W32(c->r[3]+0x00000048u,c->r[30]); // 80247FC4
  W32(c->r[7]+0xFFFFCE60u,c->r[0]); // 80247FC8
  W32(c->r[6]+0x00000004u,c->r[30]); // 80247FCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80247FD0
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 80247FD4
  c->lr=0x80247FDCu; f_80248C50(c); // 80247FD8
  c->r[5]=R8(c->r[31]+0x00000018u); // 80247FDC
  cmps(c,0,(int32_t)c->r[30],1); // 80247FE0
  c->r[4]=R8(c->r[31]+0x00000019u); // 80247FE4
  c->r[3]=R8(c->r[31]+0x0000001Au); // 80247FE8
  c->r[0]=R8(c->r[31]+0x0000001Bu); // 80247FEC
  W32(c->r[31]+0x00000020u,c->r[30]); // 80247FF0
  W8(c->r[31]+0x00000008u,c->r[5]); // 80247FF4
  W8(c->r[31]+0x00000009u,c->r[4]); // 80247FF8
  W8(c->r[31]+0x0000000Au,c->r[3]); // 80247FFC
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 80248000
  if (crb(c,2)) { goto L_80248010; } // 80248004
  c->r[4]=c->r[31]+0x00000018u; // 80248008
  goto L_80248014; // 8024800C
L_80248010:;
  c->r[4]=c->r[31]+0x0000001Cu; // 80248010
L_80248014:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 80248014
  c->r[0]=R32(c->r[31]+0x00000020u); // 80248018
  W8(c->r[31]+0x0000000Cu,c->r[3]); // 8024801C
  cmps(c,0,(int32_t)c->r[0],2); // 80248020
  c->r[0]=R8(c->r[4]+0x00000001u); // 80248024
  W8(c->r[31]+0x0000000Du,c->r[0]); // 80248028
  c->r[0]=R8(c->r[4]+0x00000002u); // 8024802C
  W8(c->r[31]+0x0000000Eu,c->r[0]); // 80248030
  c->r[0]=R8(c->r[4]+0x00000003u); // 80248034
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 80248038
  if (crb(c,2)) { goto L_80248048; } // 8024803C
  c->r[4]=c->r[31]+0x00000018u; // 80248040
  goto L_8024804C; // 80248044
L_80248048:;
  c->r[4]=c->r[31]+0x0000001Cu; // 80248048
L_8024804C:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 8024804C
  c->r[0]=R32(c->r[31]+0x00000020u); // 80248050
  W8(c->r[31]+0x00000010u,c->r[3]); // 80248054
  cmps(c,0,(int32_t)c->r[0],0); // 80248058
  c->r[0]=R8(c->r[4]+0x00000001u); // 8024805C
  W8(c->r[31]+0x00000011u,c->r[0]); // 80248060
  c->r[0]=R8(c->r[4]+0x00000002u); // 80248064
  W8(c->r[31]+0x00000012u,c->r[0]); // 80248068
  c->r[0]=R8(c->r[4]+0x00000003u); // 8024806C
  W8(c->r[31]+0x00000013u,c->r[0]); // 80248070
  if (!crb(c,2)) { goto L_80248080; } // 80248074
  c->r[10]=c->r[31]+0x00000018u; // 80248078
  goto L_80248084; // 8024807C
L_80248080:;
  c->r[10]=c->r[31]+0x0000001Cu; // 80248080
L_80248084:;
  c->r[0]=R8(c->r[10]+0x00000000u); // 80248084
  c->r[3]=0u+0x80810000u; // 80248088
  c->r[12]=c->r[3]+0xFFFF8081u; // 8024808C
  c->r[5]=R8(c->r[31]+0x0000000Bu); // 80248090
  W8(c->r[31]+0x00000014u,c->r[0]); // 80248094
  c->r[0]=0u+0xFFFFFFFFu; // 80248098
  c->r[9]=R8(c->r[31]+0x00000042u); // 8024809C
  c->r[3]=c->r[31]|c->r[31]; // 802480A0
  c->r[7]=R8(c->r[10]+0x00000001u); // 802480A4
  c->r[4]=c->r[1]+0x00000010u; // 802480A8
  c->r[6]=R8(c->r[31]+0x0000000Fu); // 802480AC
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 802480B0
  W8(c->r[31]+0x00000015u,c->r[7]); // 802480B4
  c->r[5]=R8(c->r[31]+0x00000013u); // 802480B8
  c->r[7]=R8(c->r[10]+0x00000002u); // 802480BC
  W8(c->r[31]+0x00000016u,c->r[7]); // 802480C0
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 802480C4
  c->r[10]=R8(c->r[10]+0x00000003u); // 802480C8
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 802480CC
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 802480D0
  c->r[10]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[8])>>32); // 802480D4
  c->r[9]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[6])>>32); // 802480D8
  c->r[8]=c->r[10]+c->r[8]; // 802480DC
  c->r[10]=sraw(c,c->r[8],7); // 802480E0
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[7])>>32); // 802480E4
  c->r[11]=rotl(c->r[10],1)&0x00000001u; // 802480E8
  c->r[6]=c->r[9]+c->r[6]; // 802480EC
  c->r[10]=c->r[10]+c->r[11]; // 802480F0
  c->r[9]=sraw(c,c->r[6],7); // 802480F4
  W8(c->r[31]+0x0000000Bu,c->r[10]); // 802480F8
  c->r[7]=c->r[8]+c->r[7]; // 802480FC
  c->r[8]=rotl(c->r[9],1)&0x00000001u; // 80248100
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[5])>>32); // 80248104
  c->r[9]=c->r[9]+c->r[8]; // 80248108
  c->r[7]=sraw(c,c->r[7],7); // 8024810C
  W8(c->r[31]+0x0000000Fu,c->r[9]); // 80248110
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 80248114
  c->r[5]=c->r[6]+c->r[5]; // 80248118
  c->r[5]=sraw(c,c->r[5],7); // 8024811C
  c->r[7]=c->r[7]+c->r[8]; // 80248120
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80248124
  W8(c->r[31]+0x00000013u,c->r[7]); // 80248128
  c->r[5]=c->r[5]+c->r[6]; // 8024812C
  W8(c->r[31]+0x00000017u,c->r[5]); // 80248130
  W32(c->r[1]+0x00000010u,c->r[0]); // 80248134
  c->lr=0x8024813Cu; f_80248DE4(c); // 80248138
  c->r[4]=0u+0x80260000u; // 8024813C
  c->r[3]=0u+0x80260000u; // 80248140
  {uint32_t ea=c->r[3]+0x00001AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80248144
  c->r[0]=0u+0x00000001u; // 80248148
  {uint32_t ea=c->r[4]+0x00001AFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024814C
  c->r[3]=c->r[31]|c->r[31]; // 80248150
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80248154
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 80248158
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[1]);} // 8024815C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80248160
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80248164
  W32(c->r[31]+0x00000038u,c->r[0]); // 80248168
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8024816C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80248170
  c->r[30]=R32(c->r[1]+0x00000018u); // 80248174
  c->r[0]=R32(c->r[1]+0x00000024u); // 80248178
  c->lr=c->r[0]; // 8024817C
  c->r[1]=c->r[1]+0x00000020u; // 80248180
  return; // 80248184
}

// __dt__Q36nw4hbm2ut10CharWriterFv
void f_80248188(Ctx* __restrict c) {
  trace_call(0x80248188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80248188
  c->r[0]=c->lr; // 8024818C
  cmps(c,0,(int32_t)c->r[3],0); // 80248190
  W32(c->r[1]+0x00000014u,c->r[0]); // 80248194
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80248198
  c->r[31]=c->r[3]|c->r[3]; // 8024819C
  if (crb(c,2)) { goto L_802481B0; } // 802481A0
  cmps(c,0,(int32_t)c->r[4],0); // 802481A4
  if (!crb(c,1)) { goto L_802481B0; } // 802481A8
  c->lr=0x802481B0u; f_8008DE54(c); // 802481AC
L_802481B0:;
  c->r[3]=c->r[31]|c->r[31]; // 802481B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802481B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802481B8
  c->lr=c->r[0]; // 802481BC
  c->r[1]=c->r[1]+0x00000010u; // 802481C0
  return; // 802481C4
}

// SetFont__Q36nw4hbm2ut10CharWriterFRCQ36nw4hbm2ut4Font
void f_802481C8(Ctx* __restrict c) {
  trace_call(0x802481C8u);
  W32(c->r[3]+0x00000048u,c->r[4]); // 802481C8
  return; // 802481CC
}

// GetFont__Q36nw4hbm2ut10CharWriterCFv
void f_802481D0(Ctx* __restrict c) {
  trace_call(0x802481D0u);
  c->r[3]=R32(c->r[3]+0x00000048u); // 802481D0
  return; // 802481D4
}

// SetupGX__Q36nw4hbm2ut10CharWriterFv
void f_802481D8(Ctx* __restrict c) {
  trace_call(0x802481D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802481D8
  c->r[0]=c->lr; // 802481DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802481E0
  c->r[0]=0u+0x000000FFu; // 802481E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802481E8
  c->r[31]=0u+0x80360000u; // 802481EC
  c->r[31]=c->r[31]+0xFFFFCE48u; // 802481F0
  W32(c->r[1]+0x00000028u,c->r[30]); // 802481F4
  c->r[30]=0u+0x00000000u; // 802481F8
  c->r[4]=c->r[31]+0x00000018u; // 802481FC
  W32(c->r[31]+0x00000018u,c->r[0]); // 80248200
  W32(c->r[4]+0x00000004u,c->r[30]); // 80248204
  c->r[0]=R32(c->r[3]+0x00000000u); // 80248208
  cmps(c,0,(int32_t)c->r[0],0); // 8024820C
  if (!crb(c,2)) { goto L_80248224; } // 80248210
  c->r[4]=R32(c->r[3]+0x00000004u); // 80248214
  c->r[0]=c->r[4]+0x00010000u; // 80248218
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8024821C
  if (crb(c,2)) { goto L_80248274; } // 80248220
L_80248224:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80248224
  c->r[4]=c->r[1]+0x0000001Cu; // 80248228
  W8(c->r[1]+0x00000020u,c->r[0]); // 8024822C
  c->r[0]=R8(c->r[3]+0x00000001u); // 80248230
  W8(c->r[1]+0x00000021u,c->r[0]); // 80248234
  c->r[0]=R8(c->r[3]+0x00000002u); // 80248238
  W8(c->r[1]+0x00000022u,c->r[0]); // 8024823C
  c->r[0]=R8(c->r[3]+0x00000003u); // 80248240
  W8(c->r[1]+0x00000023u,c->r[0]); // 80248244
  c->r[0]=R8(c->r[3]+0x00000004u); // 80248248
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8024824C
  c->r[0]=R8(c->r[3]+0x00000005u); // 80248250
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80248254
  c->r[0]=R8(c->r[3]+0x00000006u); // 80248258
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 8024825C
  c->r[0]=R8(c->r[3]+0x00000007u); // 80248260
  c->r[3]=c->r[1]+0x00000020u; // 80248264
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 80248268
  c->lr=0x80248270u; f_802496EC(c); // 8024826C
  goto L_80248C38; // 80248270
L_80248274:;
  c->r[3]=R32(c->r[3]+0x00000048u); // 80248274
  cmps(c,0,(int32_t)c->r[3],0); // 80248278
  if (crb(c,2)) { goto L_80248A68; } // 8024827C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80248280
  c->r[12]=R32(c->r[12]+0x00000030u); // 80248284
  c->ctr=c->r[12]; // 80248288
  if (true) { c->lr=0x80248290u; dispatch(c,c->ctr); } // 8024828C
  cmps(c,0,(int32_t)c->r[3],4); // 80248290
  if (!crb(c,0)) { goto L_802482AC; } // 80248294
  cmps(c,0,(int32_t)c->r[3],2); // 80248298
  if (!crb(c,0)) { goto L_802484E8; } // 8024829C
  cmps(c,0,(int32_t)c->r[3],0); // 802482A0
  if (!crb(c,0)) { goto L_802482B8; } // 802482A4
  goto L_80248890; // 802482A8
L_802482AC:;
  cmps(c,0,(int32_t)c->r[3],7); // 802482AC
  if (!crb(c,0)) { goto L_80248890; } // 802482B0
  goto L_802486BC; // 802482B4
L_802482B8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 802482B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802482BC
  if (!crb(c,2)) { goto L_802482E4; } // 802482C0
  c->r[4]=0u+0x80240000u; // 802482C4
  W32(c->r[31]+0x00000010u,c->r[30]); // 802482C8
  c->r[3]=c->r[31]+0x00000010u; // 802482CC
  c->r[5]=c->r[31]+0x00000004u; // 802482D0
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 802482D4
  c->lr=0x802482DCu; f_800D4478(c); // 802482D8
  c->r[0]=0u+0x00000001u; // 802482DC
  W8(c->r[31]+0x00000000u,c->r[0]); // 802482E0
L_802482E4:;
  c->r[3]=0u+0x80260000u; // 802482E4
  c->r[6]=c->r[31]+0x00000010u; // 802482E8
  {uint32_t ea=c->r[3]+0x00001AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802482EC
  c->r[4]=c->r[1]+0x00000018u; // 802482F0
  c->r[3]=R8(c->r[31]+0x00000010u); // 802482F4
  c->r[7]=R8(c->r[6]+0x00000001u); // 802482F8
  c->f[2]=c->f[1]; // 802482FC
  c->r[5]=R8(c->r[6]+0x00000002u); // 80248300
  c->f[3]=c->f[1]; // 80248304
  c->r[0]=R8(c->r[6]+0x00000003u); // 80248308
  c->f[4]=c->f[1]; // 8024830C
  W8(c->r[1]+0x00000018u,c->r[3]); // 80248310
  c->r[3]=0u+0x00000000u; // 80248314
  W8(c->r[1]+0x00000019u,c->r[7]); // 80248318
  W8(c->r[1]+0x0000001Au,c->r[5]); // 8024831C
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 80248320
  c->lr=0x80248328u; f_800D2C7C(c); // 80248324
  c->r[3]=0u+0x00000000u; // 80248328
  c->r[4]=0u+0x00000000u; // 8024832C
  c->r[5]=0u+0x00000001u; // 80248330
  c->r[6]=0u+0x00000002u; // 80248334
  c->r[7]=0u+0x00000003u; // 80248338
  c->lr=0x80248340u; f_800D29BC(c); // 8024833C
  c->r[3]=0u+0x00000000u; // 80248340
  c->r[4]=0u+0x00000011u; // 80248344
  c->r[5]=0u+0x00000000u; // 80248348
  c->lr=0x80248350u; f_800D2A70(c); // 8024834C
  c->r[3]=0u+0x00000001u; // 80248350
  c->lr=0x80248358u; f_800D11EC(c); // 80248354
  c->r[3]=0u+0x00000004u; // 80248358
  c->r[4]=0u+0x00000000u; // 8024835C
  c->r[5]=0u+0x00000000u; // 80248360
  c->r[6]=0u+0x00000001u; // 80248364
  c->r[7]=0u+0x00000000u; // 80248368
  c->r[8]=0u+0x00000000u; // 8024836C
  c->r[9]=0u+0x00000002u; // 80248370
  c->lr=0x80248378u; f_800D1210(c); // 80248374
  c->r[3]=0u+0x00000005u; // 80248378
  c->r[4]=0u+0x00000000u; // 8024837C
  c->r[5]=0u+0x00000000u; // 80248380
  c->r[6]=0u+0x00000000u; // 80248384
  c->r[7]=0u+0x00000000u; // 80248388
  c->r[8]=0u+0x00000000u; // 8024838C
  c->r[9]=0u+0x00000002u; // 80248390
  c->lr=0x80248398u; f_800D1210(c); // 80248394
  c->r[3]=0u+0x00000001u; // 80248398
  c->lr=0x802483A0u; f_800CF424(c); // 8024839C
  c->r[3]=0u+0x00000000u; // 802483A0
  c->r[4]=0u+0x00000001u; // 802483A4
  c->r[5]=0u+0x00000004u; // 802483A8
  c->r[6]=0u+0x0000003Cu; // 802483AC
  c->r[7]=0u+0x00000000u; // 802483B0
  c->r[8]=0u+0x0000007Du; // 802483B4
  c->lr=0x802483BCu; f_800CF1FC(c); // 802483B8
  c->r[3]=0u+0x00000000u; // 802483BC
  c->lr=0x802483C4u; f_800D253C(c); // 802483C0
  c->r[3]=0u+0x00000001u; // 802483C4
  c->r[4]=0u+0x00000004u; // 802483C8
  c->r[5]=0u+0x00000005u; // 802483CC
  c->r[6]=0u+0x0000000Fu; // 802483D0
  c->lr=0x802483D8u; f_800D312C(c); // 802483D4
  c->r[3]=0u+0x00000001u; // 802483D8
  c->lr=0x802483E0u; f_800D2C58(c); // 802483DC
  c->r[3]=0u+0x00000000u; // 802483E0
  c->lr=0x802483E8u; f_800D255C(c); // 802483E4
  c->r[3]=0u+0x00000000u; // 802483E8
  c->r[4]=0u+0x00000000u; // 802483EC
  c->r[5]=0u+0x00000000u; // 802483F0
  c->lr=0x802483F8u; f_800D2980(c); // 802483F4
  c->r[3]=0u+0x00000000u; // 802483F8
  c->r[4]=0u+0x00000000u; // 802483FC
  c->r[5]=0u+0x00000000u; // 80248400
  c->r[6]=0u+0x00000004u; // 80248404
  c->lr=0x8024840Cu; f_800D2AFC(c); // 80248408
  c->r[3]=0u+0x00000000u; // 8024840C
  c->r[4]=0u+0x0000000Fu; // 80248410
  c->r[5]=0u+0x0000000Fu; // 80248414
  c->r[6]=0u+0x0000000Fu; // 80248418
  c->r[7]=0u+0x0000000Au; // 8024841C
  c->lr=0x80248424u; f_800D2690(c); // 80248420
  c->r[3]=0u+0x00000000u; // 80248424
  c->r[4]=0u+0x00000007u; // 80248428
  c->r[5]=0u+0x00000004u; // 8024842C
  c->r[6]=0u+0x00000005u; // 80248430
  c->r[7]=0u+0x00000007u; // 80248434
  c->lr=0x8024843Cu; f_800D26D0(c); // 80248438
  c->r[3]=0u+0x00000000u; // 8024843C
  c->r[4]=0u+0x00000000u; // 80248440
  c->r[5]=0u+0x00000000u; // 80248444
  c->r[6]=0u+0x00000000u; // 80248448
  c->r[7]=0u+0x00000001u; // 8024844C
  c->r[8]=0u+0x00000000u; // 80248450
  c->lr=0x80248458u; f_800D2710(c); // 80248454
  c->r[3]=0u+0x00000000u; // 80248458
  c->r[4]=0u+0x00000000u; // 8024845C
  c->r[5]=0u+0x00000000u; // 80248460
  c->r[6]=0u+0x00000000u; // 80248464
  c->r[7]=0u+0x00000001u; // 80248468
  c->r[8]=0u+0x00000000u; // 8024846C
  c->lr=0x80248474u; f_800D2768(c); // 80248470
  c->r[3]=0u+0x00000000u; // 80248474
  c->r[4]=0u+0x00000009u; // 80248478
  c->r[5]=0u+0x00000001u; // 8024847C
  c->r[6]=0u+0x00000004u; // 80248480
  c->r[7]=0u+0x00000000u; // 80248484
  c->lr=0x8024848Cu; f_800CEB5C(c); // 80248488
  c->r[3]=0u+0x00000000u; // 8024848C
  c->r[4]=0u+0x0000000Bu; // 80248490
  c->r[5]=0u+0x00000001u; // 80248494
  c->r[6]=0u+0x00000005u; // 80248498
  c->r[7]=0u+0x00000000u; // 8024849C
  c->lr=0x802484A4u; f_800CEB5C(c); // 802484A0
  c->r[3]=0u+0x00000000u; // 802484A4
  c->r[4]=0u+0x0000000Du; // 802484A8
  c->r[5]=0u+0x00000001u; // 802484AC
  c->r[6]=0u+0x00000002u; // 802484B0
  c->r[7]=0u+0x0000000Fu; // 802484B4
  c->lr=0x802484BCu; f_800CEB5C(c); // 802484B8
  c->lr=0x802484C0u; f_800CEB28(c); // 802484BC
  c->r[3]=0u+0x00000009u; // 802484C0
  c->r[4]=0u+0x00000001u; // 802484C4
  c->lr=0x802484CCu; f_800CE534(c); // 802484C8
  c->r[3]=0u+0x0000000Bu; // 802484CC
  c->r[4]=0u+0x00000001u; // 802484D0
  c->lr=0x802484D8u; f_800CE534(c); // 802484D4
  c->r[3]=0u+0x0000000Du; // 802484D8
  c->r[4]=0u+0x00000001u; // 802484DC
  c->lr=0x802484E4u; f_800CE534(c); // 802484E0
  goto L_80248C38; // 802484E4
L_802484E8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 802484E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802484EC
  if (!crb(c,2)) { goto L_80248514; } // 802484F0
  c->r[4]=0u+0x80240000u; // 802484F4
  W32(c->r[31]+0x00000010u,c->r[30]); // 802484F8
  c->r[3]=c->r[31]+0x00000010u; // 802484FC
  c->r[5]=c->r[31]+0x00000004u; // 80248500
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 80248504
  c->lr=0x8024850Cu; f_800D4478(c); // 80248508
  c->r[0]=0u+0x00000001u; // 8024850C
  W8(c->r[31]+0x00000000u,c->r[0]); // 80248510
L_80248514:;
  c->r[3]=0u+0x80260000u; // 80248514
  c->r[6]=c->r[31]+0x00000010u; // 80248518
  {uint32_t ea=c->r[3]+0x00001AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024851C
  c->r[4]=c->r[1]+0x00000014u; // 80248520
  c->r[3]=R8(c->r[31]+0x00000010u); // 80248524
  c->r[7]=R8(c->r[6]+0x00000001u); // 80248528
  c->f[2]=c->f[1]; // 8024852C
  c->r[5]=R8(c->r[6]+0x00000002u); // 80248530
  c->f[3]=c->f[1]; // 80248534
  c->r[0]=R8(c->r[6]+0x00000003u); // 80248538
  c->f[4]=c->f[1]; // 8024853C
  W8(c->r[1]+0x00000014u,c->r[3]); // 80248540
  c->r[3]=0u+0x00000000u; // 80248544
  W8(c->r[1]+0x00000015u,c->r[7]); // 80248548
  W8(c->r[1]+0x00000016u,c->r[5]); // 8024854C
  W8(c->r[1]+0x00000017u,c->r[0]); // 80248550
  c->lr=0x80248558u; f_800D2C7C(c); // 80248554
  c->r[3]=0u+0x00000000u; // 80248558
  c->r[4]=0u+0x00000000u; // 8024855C
  c->r[5]=0u+0x00000001u; // 80248560
  c->r[6]=0u+0x00000002u; // 80248564
  c->r[7]=0u+0x00000003u; // 80248568
  c->lr=0x80248570u; f_800D29BC(c); // 8024856C
  c->r[3]=0u+0x00000000u; // 80248570
  c->r[4]=0u+0x00000011u; // 80248574
  c->r[5]=0u+0x00000000u; // 80248578
  c->lr=0x80248580u; f_800D2A70(c); // 8024857C
  c->r[3]=0u+0x00000001u; // 80248580
  c->lr=0x80248588u; f_800D11EC(c); // 80248584
  c->r[3]=0u+0x00000004u; // 80248588
  c->r[4]=0u+0x00000000u; // 8024858C
  c->r[5]=0u+0x00000000u; // 80248590
  c->r[6]=0u+0x00000001u; // 80248594
  c->r[7]=0u+0x00000000u; // 80248598
  c->r[8]=0u+0x00000000u; // 8024859C
  c->r[9]=0u+0x00000002u; // 802485A0
  c->lr=0x802485A8u; f_800D1210(c); // 802485A4
  c->r[3]=0u+0x00000005u; // 802485A8
  c->r[4]=0u+0x00000000u; // 802485AC
  c->r[5]=0u+0x00000000u; // 802485B0
  c->r[6]=0u+0x00000000u; // 802485B4
  c->r[7]=0u+0x00000000u; // 802485B8
  c->r[8]=0u+0x00000000u; // 802485BC
  c->r[9]=0u+0x00000002u; // 802485C0
  c->lr=0x802485C8u; f_800D1210(c); // 802485C4
  c->r[3]=0u+0x00000001u; // 802485C8
  c->lr=0x802485D0u; f_800CF424(c); // 802485CC
  c->r[3]=0u+0x00000000u; // 802485D0
  c->r[4]=0u+0x00000001u; // 802485D4
  c->r[5]=0u+0x00000004u; // 802485D8
  c->r[6]=0u+0x0000003Cu; // 802485DC
  c->r[7]=0u+0x00000000u; // 802485E0
  c->r[8]=0u+0x0000007Du; // 802485E4
  c->lr=0x802485ECu; f_800CF1FC(c); // 802485E8
  c->r[3]=0u+0x00000000u; // 802485EC
  c->lr=0x802485F4u; f_800D253C(c); // 802485F0
  c->r[3]=0u+0x00000001u; // 802485F4
  c->r[4]=0u+0x00000004u; // 802485F8
  c->r[5]=0u+0x00000005u; // 802485FC
  c->r[6]=0u+0x0000000Fu; // 80248600
  c->lr=0x80248608u; f_800D312C(c); // 80248604
  c->r[3]=0u+0x00000001u; // 80248608
  c->lr=0x80248610u; f_800D2C58(c); // 8024860C
  c->r[3]=0u+0x00000000u; // 80248610
  c->lr=0x80248618u; f_800D255C(c); // 80248614
  c->r[3]=0u+0x00000000u; // 80248618
  c->r[4]=0u+0x00000000u; // 8024861C
  c->r[5]=0u+0x00000000u; // 80248620
  c->lr=0x80248628u; f_800D2980(c); // 80248624
  c->r[3]=0u+0x00000000u; // 80248628
  c->r[4]=0u+0x00000000u; // 8024862C
  c->r[5]=0u+0x00000000u; // 80248630
  c->r[6]=0u+0x00000004u; // 80248634
  c->lr=0x8024863Cu; f_800D2AFC(c); // 80248638
  c->r[3]=0u+0x00000000u; // 8024863C
  c->r[4]=0u+0x00000000u; // 80248640
  c->lr=0x80248648u; f_800D25FC(c); // 80248644
  c->r[3]=0u+0x00000000u; // 80248648
  c->r[4]=0u+0x00000009u; // 8024864C
  c->r[5]=0u+0x00000001u; // 80248650
  c->r[6]=0u+0x00000004u; // 80248654
  c->r[7]=0u+0x00000000u; // 80248658
  c->lr=0x80248660u; f_800CEB5C(c); // 8024865C
  c->r[3]=0u+0x00000000u; // 80248660
  c->r[4]=0u+0x0000000Bu; // 80248664
  c->r[5]=0u+0x00000001u; // 80248668
  c->r[6]=0u+0x00000005u; // 8024866C
  c->r[7]=0u+0x00000000u; // 80248670
  c->lr=0x80248678u; f_800CEB5C(c); // 80248674
  c->r[3]=0u+0x00000000u; // 80248678
  c->r[4]=0u+0x0000000Du; // 8024867C
  c->r[5]=0u+0x00000001u; // 80248680
  c->r[6]=0u+0x00000002u; // 80248684
  c->r[7]=0u+0x0000000Fu; // 80248688
  c->lr=0x80248690u; f_800CEB5C(c); // 8024868C
  c->lr=0x80248694u; f_800CEB28(c); // 80248690
  c->r[3]=0u+0x00000009u; // 80248694
  c->r[4]=0u+0x00000001u; // 80248698
  c->lr=0x802486A0u; f_800CE534(c); // 8024869C
  c->r[3]=0u+0x0000000Bu; // 802486A0
  c->r[4]=0u+0x00000001u; // 802486A4
  c->lr=0x802486ACu; f_800CE534(c); // 802486A8
  c->r[3]=0u+0x0000000Du; // 802486AC
  c->r[4]=0u+0x00000001u; // 802486B0
  c->lr=0x802486B8u; f_800CE534(c); // 802486B4
  goto L_80248C38; // 802486B8
L_802486BC:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 802486BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802486C0
  if (!crb(c,2)) { goto L_802486E8; } // 802486C4
  c->r[4]=0u+0x80240000u; // 802486C8
  W32(c->r[31]+0x00000010u,c->r[30]); // 802486CC
  c->r[3]=c->r[31]+0x00000010u; // 802486D0
  c->r[5]=c->r[31]+0x00000004u; // 802486D4
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 802486D8
  c->lr=0x802486E0u; f_800D4478(c); // 802486DC
  c->r[0]=0u+0x00000001u; // 802486E0
  W8(c->r[31]+0x00000000u,c->r[0]); // 802486E4
L_802486E8:;
  c->r[3]=0u+0x80260000u; // 802486E8
  c->r[6]=c->r[31]+0x00000010u; // 802486EC
  {uint32_t ea=c->r[3]+0x00001AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802486F0
  c->r[4]=c->r[1]+0x00000010u; // 802486F4
  c->r[3]=R8(c->r[31]+0x00000010u); // 802486F8
  c->r[7]=R8(c->r[6]+0x00000001u); // 802486FC
  c->f[2]=c->f[1]; // 80248700
  c->r[5]=R8(c->r[6]+0x00000002u); // 80248704
  c->f[3]=c->f[1]; // 80248708
  c->r[0]=R8(c->r[6]+0x00000003u); // 8024870C
  c->f[4]=c->f[1]; // 80248710
  W8(c->r[1]+0x00000010u,c->r[3]); // 80248714
  c->r[3]=0u+0x00000000u; // 80248718
  W8(c->r[1]+0x00000011u,c->r[7]); // 8024871C
  W8(c->r[1]+0x00000012u,c->r[5]); // 80248720
  W8(c->r[1]+0x00000013u,c->r[0]); // 80248724
  c->lr=0x8024872Cu; f_800D2C7C(c); // 80248728
  c->r[3]=0u+0x00000000u; // 8024872C
  c->r[4]=0u+0x00000000u; // 80248730
  c->r[5]=0u+0x00000001u; // 80248734
  c->r[6]=0u+0x00000002u; // 80248738
  c->r[7]=0u+0x00000003u; // 8024873C
  c->lr=0x80248744u; f_800D29BC(c); // 80248740
  c->r[3]=0u+0x00000000u; // 80248744
  c->r[4]=0u+0x00000011u; // 80248748
  c->r[5]=0u+0x00000000u; // 8024874C
  c->lr=0x80248754u; f_800D2A70(c); // 80248750
  c->r[3]=0u+0x00000001u; // 80248754
  c->lr=0x8024875Cu; f_800D11EC(c); // 80248758
  c->r[3]=0u+0x00000004u; // 8024875C
  c->r[4]=0u+0x00000000u; // 80248760
  c->r[5]=0u+0x00000000u; // 80248764
  c->r[6]=0u+0x00000001u; // 80248768
  c->r[7]=0u+0x00000000u; // 8024876C
  c->r[8]=0u+0x00000000u; // 80248770
  c->r[9]=0u+0x00000002u; // 80248774
  c->lr=0x8024877Cu; f_800D1210(c); // 80248778
  c->r[3]=0u+0x00000005u; // 8024877C
  c->r[4]=0u+0x00000000u; // 80248780
  c->r[5]=0u+0x00000000u; // 80248784
  c->r[6]=0u+0x00000000u; // 80248788
  c->r[7]=0u+0x00000000u; // 8024878C
  c->r[8]=0u+0x00000000u; // 80248790
  c->r[9]=0u+0x00000002u; // 80248794
  c->lr=0x8024879Cu; f_800D1210(c); // 80248798
  c->r[3]=0u+0x00000001u; // 8024879C
  c->lr=0x802487A4u; f_800CF424(c); // 802487A0
  c->r[3]=0u+0x00000000u; // 802487A4
  c->r[4]=0u+0x00000001u; // 802487A8
  c->r[5]=0u+0x00000004u; // 802487AC
  c->r[6]=0u+0x0000003Cu; // 802487B0
  c->r[7]=0u+0x00000000u; // 802487B4
  c->r[8]=0u+0x0000007Du; // 802487B8
  c->lr=0x802487C0u; f_800CF1FC(c); // 802487BC
  c->r[3]=0u+0x00000000u; // 802487C0
  c->lr=0x802487C8u; f_800D253C(c); // 802487C4
  c->r[3]=0u+0x00000001u; // 802487C8
  c->r[4]=0u+0x00000004u; // 802487CC
  c->r[5]=0u+0x00000005u; // 802487D0
  c->r[6]=0u+0x0000000Fu; // 802487D4
  c->lr=0x802487DCu; f_800D312C(c); // 802487D8
  c->r[3]=0u+0x00000001u; // 802487DC
  c->lr=0x802487E4u; f_800D2C58(c); // 802487E0
  c->r[3]=0u+0x00000000u; // 802487E4
  c->lr=0x802487ECu; f_800D255C(c); // 802487E8
  c->r[3]=0u+0x00000000u; // 802487EC
  c->r[4]=0u+0x00000000u; // 802487F0
  c->r[5]=0u+0x00000000u; // 802487F4
  c->lr=0x802487FCu; f_800D2980(c); // 802487F8
  c->r[3]=0u+0x00000000u; // 802487FC
  c->r[4]=0u+0x00000000u; // 80248800
  c->r[5]=0u+0x00000000u; // 80248804
  c->r[6]=0u+0x00000004u; // 80248808
  c->lr=0x80248810u; f_800D2AFC(c); // 8024880C
  c->r[3]=0u+0x00000000u; // 80248810
  c->r[4]=0u+0x00000000u; // 80248814
  c->lr=0x8024881Cu; f_800D25FC(c); // 80248818
  c->r[3]=0u+0x00000000u; // 8024881C
  c->r[4]=0u+0x00000009u; // 80248820
  c->r[5]=0u+0x00000001u; // 80248824
  c->r[6]=0u+0x00000004u; // 80248828
  c->r[7]=0u+0x00000000u; // 8024882C
  c->lr=0x80248834u; f_800CEB5C(c); // 80248830
  c->r[3]=0u+0x00000000u; // 80248834
  c->r[4]=0u+0x0000000Bu; // 80248838
  c->r[5]=0u+0x00000001u; // 8024883C
  c->r[6]=0u+0x00000005u; // 80248840
  c->r[7]=0u+0x00000000u; // 80248844
  c->lr=0x8024884Cu; f_800CEB5C(c); // 80248848
  c->r[3]=0u+0x00000000u; // 8024884C
  c->r[4]=0u+0x0000000Du; // 80248850
  c->r[5]=0u+0x00000001u; // 80248854
  c->r[6]=0u+0x00000002u; // 80248858
  c->r[7]=0u+0x0000000Fu; // 8024885C
  c->lr=0x80248864u; f_800CEB5C(c); // 80248860
  c->lr=0x80248868u; f_800CEB28(c); // 80248864
  c->r[3]=0u+0x00000009u; // 80248868
  c->r[4]=0u+0x00000001u; // 8024886C
  c->lr=0x80248874u; f_800CE534(c); // 80248870
  c->r[3]=0u+0x0000000Bu; // 80248874
  c->r[4]=0u+0x00000001u; // 80248878
  c->lr=0x80248880u; f_800CE534(c); // 8024887C
  c->r[3]=0u+0x0000000Du; // 80248880
  c->r[4]=0u+0x00000001u; // 80248884
  c->lr=0x8024888Cu; f_800CE534(c); // 80248888
  goto L_80248C38; // 8024888C
L_80248890:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80248890
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80248894
  if (!crb(c,2)) { goto L_802488C0; } // 80248898
  c->r[0]=0u+0x00000000u; // 8024889C
  c->r[4]=0u+0x80240000u; // 802488A0
  W32(c->r[31]+0x00000010u,c->r[0]); // 802488A4
  c->r[3]=c->r[31]+0x00000010u; // 802488A8
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 802488AC
  c->r[5]=c->r[31]+0x00000004u; // 802488B0
  c->lr=0x802488B8u; f_800D4478(c); // 802488B4
  c->r[0]=0u+0x00000001u; // 802488B8
  W8(c->r[31]+0x00000000u,c->r[0]); // 802488BC
L_802488C0:;
  c->r[3]=0u+0x80260000u; // 802488C0
  c->r[6]=c->r[31]+0x00000010u; // 802488C4
  {uint32_t ea=c->r[3]+0x00001AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802488C8
  c->r[4]=c->r[1]+0x0000000Cu; // 802488CC
  c->r[3]=R8(c->r[31]+0x00000010u); // 802488D0
  c->r[7]=R8(c->r[6]+0x00000001u); // 802488D4
  c->f[2]=c->f[1]; // 802488D8
  c->r[5]=R8(c->r[6]+0x00000002u); // 802488DC
  c->f[3]=c->f[1]; // 802488E0
  c->r[0]=R8(c->r[6]+0x00000003u); // 802488E4
  c->f[4]=c->f[1]; // 802488E8
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 802488EC
  c->r[3]=0u+0x00000000u; // 802488F0
  W8(c->r[1]+0x0000000Du,c->r[7]); // 802488F4
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 802488F8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 802488FC
  c->lr=0x80248904u; f_800D2C7C(c); // 80248900
  c->r[3]=0u+0x00000000u; // 80248904
  c->r[4]=0u+0x00000000u; // 80248908
  c->r[5]=0u+0x00000001u; // 8024890C
  c->r[6]=0u+0x00000002u; // 80248910
  c->r[7]=0u+0x00000003u; // 80248914
  c->lr=0x8024891Cu; f_800D29BC(c); // 80248918
  c->r[3]=0u+0x00000000u; // 8024891C
  c->r[4]=0u+0x00000011u; // 80248920
  c->r[5]=0u+0x00000000u; // 80248924
  c->lr=0x8024892Cu; f_800D2A70(c); // 80248928
  c->r[3]=0u+0x00000001u; // 8024892C
  c->lr=0x80248934u; f_800D11EC(c); // 80248930
  c->r[3]=0u+0x00000004u; // 80248934
  c->r[4]=0u+0x00000000u; // 80248938
  c->r[5]=0u+0x00000000u; // 8024893C
  c->r[6]=0u+0x00000001u; // 80248940
  c->r[7]=0u+0x00000000u; // 80248944
  c->r[8]=0u+0x00000000u; // 80248948
  c->r[9]=0u+0x00000002u; // 8024894C
  c->lr=0x80248954u; f_800D1210(c); // 80248950
  c->r[3]=0u+0x00000005u; // 80248954
  c->r[4]=0u+0x00000000u; // 80248958
  c->r[5]=0u+0x00000000u; // 8024895C
  c->r[6]=0u+0x00000000u; // 80248960
  c->r[7]=0u+0x00000000u; // 80248964
  c->r[8]=0u+0x00000000u; // 80248968
  c->r[9]=0u+0x00000002u; // 8024896C
  c->lr=0x80248974u; f_800D1210(c); // 80248970
  c->r[3]=0u+0x00000001u; // 80248974
  c->lr=0x8024897Cu; f_800CF424(c); // 80248978
  c->r[3]=0u+0x00000000u; // 8024897C
  c->r[4]=0u+0x00000001u; // 80248980
  c->r[5]=0u+0x00000004u; // 80248984
  c->r[6]=0u+0x0000003Cu; // 80248988
  c->r[7]=0u+0x00000000u; // 8024898C
  c->r[8]=0u+0x0000007Du; // 80248990
  c->lr=0x80248998u; f_800CF1FC(c); // 80248994
  c->r[3]=0u+0x00000000u; // 80248998
  c->lr=0x802489A0u; f_800D253C(c); // 8024899C
  c->r[3]=0u+0x00000001u; // 802489A0
  c->r[4]=0u+0x00000004u; // 802489A4
  c->r[5]=0u+0x00000005u; // 802489A8
  c->r[6]=0u+0x0000000Fu; // 802489AC
  c->lr=0x802489B4u; f_800D312C(c); // 802489B0
  c->r[3]=0u+0x00000001u; // 802489B4
  c->lr=0x802489BCu; f_800D2C58(c); // 802489B8
  c->r[3]=0u+0x00000000u; // 802489BC
  c->lr=0x802489C4u; f_800D255C(c); // 802489C0
  c->r[3]=0u+0x00000000u; // 802489C4
  c->r[4]=0u+0x00000000u; // 802489C8
  c->r[5]=0u+0x00000000u; // 802489CC
  c->lr=0x802489D4u; f_800D2980(c); // 802489D0
  c->r[3]=0u+0x00000000u; // 802489D4
  c->r[4]=0u+0x00000000u; // 802489D8
  c->r[5]=0u+0x00000000u; // 802489DC
  c->r[6]=0u+0x00000004u; // 802489E0
  c->lr=0x802489E8u; f_800D2AFC(c); // 802489E4
  c->r[3]=0u+0x00000000u; // 802489E8
  c->r[4]=0u+0x00000000u; // 802489EC
  c->lr=0x802489F4u; f_800D25FC(c); // 802489F0
  c->r[3]=0u+0x00000000u; // 802489F4
  c->r[4]=0u+0x00000009u; // 802489F8
  c->r[5]=0u+0x00000001u; // 802489FC
  c->r[6]=0u+0x00000004u; // 80248A00
  c->r[7]=0u+0x00000000u; // 80248A04
  c->lr=0x80248A0Cu; f_800CEB5C(c); // 80248A08
  c->r[3]=0u+0x00000000u; // 80248A0C
  c->r[4]=0u+0x0000000Bu; // 80248A10
  c->r[5]=0u+0x00000001u; // 80248A14
  c->r[6]=0u+0x00000005u; // 80248A18
  c->r[7]=0u+0x00000000u; // 80248A1C
  c->lr=0x80248A24u; f_800CEB5C(c); // 80248A20
  c->r[3]=0u+0x00000000u; // 80248A24
  c->r[4]=0u+0x0000000Du; // 80248A28
  c->r[5]=0u+0x00000001u; // 80248A2C
  c->r[6]=0u+0x00000002u; // 80248A30
  c->r[7]=0u+0x0000000Fu; // 80248A34
  c->lr=0x80248A3Cu; f_800CEB5C(c); // 80248A38
  c->lr=0x80248A40u; f_800CEB28(c); // 80248A3C
  c->r[3]=0u+0x00000009u; // 80248A40
  c->r[4]=0u+0x00000001u; // 80248A44
  c->lr=0x80248A4Cu; f_800CE534(c); // 80248A48
  c->r[3]=0u+0x0000000Bu; // 80248A4C
  c->r[4]=0u+0x00000001u; // 80248A50
  c->lr=0x80248A58u; f_800CE534(c); // 80248A54
  c->r[3]=0u+0x0000000Du; // 80248A58
  c->r[4]=0u+0x00000001u; // 80248A5C
  c->lr=0x80248A64u; f_800CE534(c); // 80248A60
  goto L_80248C38; // 80248A64
L_80248A68:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80248A68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80248A6C
  if (!crb(c,2)) { goto L_80248A94; } // 80248A70
  c->r[4]=0u+0x80240000u; // 80248A74
  W32(c->r[31]+0x00000010u,c->r[30]); // 80248A78
  c->r[3]=c->r[31]+0x00000010u; // 80248A7C
  c->r[5]=c->r[31]+0x00000004u; // 80248A80
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 80248A84
  c->lr=0x80248A8Cu; f_800D4478(c); // 80248A88
  c->r[0]=0u+0x00000001u; // 80248A8C
  W8(c->r[31]+0x00000000u,c->r[0]); // 80248A90
L_80248A94:;
  c->r[3]=0u+0x80260000u; // 80248A94
  c->r[6]=c->r[31]+0x00000010u; // 80248A98
  {uint32_t ea=c->r[3]+0x00001AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80248A9C
  c->r[4]=c->r[1]+0x00000008u; // 80248AA0
  c->r[3]=R8(c->r[31]+0x00000010u); // 80248AA4
  c->r[7]=R8(c->r[6]+0x00000001u); // 80248AA8
  c->f[2]=c->f[1]; // 80248AAC
  c->r[5]=R8(c->r[6]+0x00000002u); // 80248AB0
  c->f[3]=c->f[1]; // 80248AB4
  c->r[0]=R8(c->r[6]+0x00000003u); // 80248AB8
  c->f[4]=c->f[1]; // 80248ABC
  W8(c->r[1]+0x00000008u,c->r[3]); // 80248AC0
  c->r[3]=0u+0x00000000u; // 80248AC4
  W8(c->r[1]+0x00000009u,c->r[7]); // 80248AC8
  W8(c->r[1]+0x0000000Au,c->r[5]); // 80248ACC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80248AD0
  c->lr=0x80248AD8u; f_800D2C7C(c); // 80248AD4
  c->r[3]=0u+0x00000000u; // 80248AD8
  c->r[4]=0u+0x00000000u; // 80248ADC
  c->r[5]=0u+0x00000001u; // 80248AE0
  c->r[6]=0u+0x00000002u; // 80248AE4
  c->r[7]=0u+0x00000003u; // 80248AE8
  c->lr=0x80248AF0u; f_800D29BC(c); // 80248AEC
  c->r[3]=0u+0x00000000u; // 80248AF0
  c->r[4]=0u+0x00000011u; // 80248AF4
  c->r[5]=0u+0x00000000u; // 80248AF8
  c->lr=0x80248B00u; f_800D2A70(c); // 80248AFC
  c->r[3]=0u+0x00000001u; // 80248B00
  c->lr=0x80248B08u; f_800D11EC(c); // 80248B04
  c->r[3]=0u+0x00000004u; // 80248B08
  c->r[4]=0u+0x00000000u; // 80248B0C
  c->r[5]=0u+0x00000000u; // 80248B10
  c->r[6]=0u+0x00000001u; // 80248B14
  c->r[7]=0u+0x00000000u; // 80248B18
  c->r[8]=0u+0x00000000u; // 80248B1C
  c->r[9]=0u+0x00000002u; // 80248B20
  c->lr=0x80248B28u; f_800D1210(c); // 80248B24
  c->r[3]=0u+0x00000005u; // 80248B28
  c->r[4]=0u+0x00000000u; // 80248B2C
  c->r[5]=0u+0x00000000u; // 80248B30
  c->r[6]=0u+0x00000000u; // 80248B34
  c->r[7]=0u+0x00000000u; // 80248B38
  c->r[8]=0u+0x00000000u; // 80248B3C
  c->r[9]=0u+0x00000002u; // 80248B40
  c->lr=0x80248B48u; f_800D1210(c); // 80248B44
  c->r[3]=0u+0x00000001u; // 80248B48
  c->lr=0x80248B50u; f_800CF424(c); // 80248B4C
  c->r[3]=0u+0x00000000u; // 80248B50
  c->r[4]=0u+0x00000001u; // 80248B54
  c->r[5]=0u+0x00000004u; // 80248B58
  c->r[6]=0u+0x0000003Cu; // 80248B5C
  c->r[7]=0u+0x00000000u; // 80248B60
  c->r[8]=0u+0x0000007Du; // 80248B64
  c->lr=0x80248B6Cu; f_800CF1FC(c); // 80248B68
  c->r[3]=0u+0x00000000u; // 80248B6C
  c->lr=0x80248B74u; f_800D253C(c); // 80248B70
  c->r[3]=0u+0x00000001u; // 80248B74
  c->r[4]=0u+0x00000004u; // 80248B78
  c->r[5]=0u+0x00000005u; // 80248B7C
  c->r[6]=0u+0x0000000Fu; // 80248B80
  c->lr=0x80248B88u; f_800D312C(c); // 80248B84
  c->r[3]=0u+0x00000001u; // 80248B88
  c->lr=0x80248B90u; f_800D2C58(c); // 80248B8C
  c->r[3]=0u+0x00000000u; // 80248B90
  c->lr=0x80248B98u; f_800D255C(c); // 80248B94
  c->r[3]=0u+0x00000000u; // 80248B98
  c->r[4]=0u+0x00000000u; // 80248B9C
  c->r[5]=0u+0x00000000u; // 80248BA0
  c->lr=0x80248BA8u; f_800D2980(c); // 80248BA4
  c->r[3]=0u+0x00000000u; // 80248BA8
  c->r[4]=0u+0x00000000u; // 80248BAC
  c->r[5]=0u+0x00000000u; // 80248BB0
  c->r[6]=0u+0x00000004u; // 80248BB4
  c->lr=0x80248BBCu; f_800D2AFC(c); // 80248BB8
  c->r[3]=0u+0x00000000u; // 80248BBC
  c->r[4]=0u+0x00000000u; // 80248BC0
  c->lr=0x80248BC8u; f_800D25FC(c); // 80248BC4
  c->r[3]=0u+0x00000000u; // 80248BC8
  c->r[4]=0u+0x00000009u; // 80248BCC
  c->r[5]=0u+0x00000001u; // 80248BD0
  c->r[6]=0u+0x00000004u; // 80248BD4
  c->r[7]=0u+0x00000000u; // 80248BD8
  c->lr=0x80248BE0u; f_800CEB5C(c); // 80248BDC
  c->r[3]=0u+0x00000000u; // 80248BE0
  c->r[4]=0u+0x0000000Bu; // 80248BE4
  c->r[5]=0u+0x00000001u; // 80248BE8
  c->r[6]=0u+0x00000005u; // 80248BEC
  c->r[7]=0u+0x00000000u; // 80248BF0
  c->lr=0x80248BF8u; f_800CEB5C(c); // 80248BF4
  c->r[3]=0u+0x00000000u; // 80248BF8
  c->r[4]=0u+0x0000000Du; // 80248BFC
  c->r[5]=0u+0x00000001u; // 80248C00
  c->r[6]=0u+0x00000002u; // 80248C04
  c->r[7]=0u+0x0000000Fu; // 80248C08
  c->lr=0x80248C10u; f_800CEB5C(c); // 80248C0C
  c->lr=0x80248C14u; f_800CEB28(c); // 80248C10
  c->r[3]=0u+0x00000009u; // 80248C14
  c->r[4]=0u+0x00000001u; // 80248C18
  c->lr=0x80248C20u; f_800CE534(c); // 80248C1C
  c->r[3]=0u+0x0000000Bu; // 80248C20
  c->r[4]=0u+0x00000001u; // 80248C24
  c->lr=0x80248C2Cu; f_800CE534(c); // 80248C28
  c->r[3]=0u+0x0000000Du; // 80248C2C
  c->r[4]=0u+0x00000001u; // 80248C30
  c->lr=0x80248C38u; f_800CE534(c); // 80248C34
L_80248C38:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80248C38
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80248C3C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80248C40
  c->lr=c->r[0]; // 80248C44
  c->r[1]=c->r[1]+0x00000030u; // 80248C48
  return; // 80248C4C
}

// SetColorMapping__Q36nw4hbm2ut10CharWriterFQ36nw4hbm2ut5ColorQ36nw4hbm2ut5Color
void f_80248C50(Ctx* __restrict c) {
  trace_call(0x80248C50u);
  c->r[11]=R8(c->r[4]+0x00000000u); // 80248C50
  c->r[10]=R8(c->r[4]+0x00000001u); // 80248C54
  c->r[9]=R8(c->r[4]+0x00000002u); // 80248C58
  c->r[8]=R8(c->r[4]+0x00000003u); // 80248C5C
  c->r[7]=R8(c->r[5]+0x00000000u); // 80248C60
  c->r[6]=R8(c->r[5]+0x00000001u); // 80248C64
  c->r[4]=R8(c->r[5]+0x00000002u); // 80248C68
  c->r[0]=R8(c->r[5]+0x00000003u); // 80248C6C
  W8(c->r[3]+0x00000000u,c->r[11]); // 80248C70
  W8(c->r[3]+0x00000001u,c->r[10]); // 80248C74
  W8(c->r[3]+0x00000002u,c->r[9]); // 80248C78
  W8(c->r[3]+0x00000003u,c->r[8]); // 80248C7C
  W8(c->r[3]+0x00000004u,c->r[7]); // 80248C80
  W8(c->r[3]+0x00000005u,c->r[6]); // 80248C84
  W8(c->r[3]+0x00000006u,c->r[4]); // 80248C88
  W8(c->r[3]+0x00000007u,c->r[0]); // 80248C8C
  return; // 80248C90
}

// SetGradationMode__Q36nw4hbm2ut10CharWriterFQ46nw4hbm2ut10CharWriter13GradationMode
void f_80248C94(Ctx* __restrict c) {
  trace_call(0x80248C94u);
  c->r[7]=R8(c->r[3]+0x00000018u); // 80248C94
  cmps(c,0,(int32_t)c->r[4],1); // 80248C98
  c->r[6]=R8(c->r[3]+0x00000019u); // 80248C9C
  c->r[5]=R8(c->r[3]+0x0000001Au); // 80248CA0
  c->r[0]=R8(c->r[3]+0x0000001Bu); // 80248CA4
  W32(c->r[3]+0x00000020u,c->r[4]); // 80248CA8
  W8(c->r[3]+0x00000008u,c->r[7]); // 80248CAC
  W8(c->r[3]+0x00000009u,c->r[6]); // 80248CB0
  W8(c->r[3]+0x0000000Au,c->r[5]); // 80248CB4
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 80248CB8
  if (crb(c,2)) { goto L_80248CC8; } // 80248CBC
  c->r[5]=c->r[3]+0x00000018u; // 80248CC0
  goto L_80248CCC; // 80248CC4
L_80248CC8:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80248CC8
L_80248CCC:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 80248CCC
  c->r[0]=R32(c->r[3]+0x00000020u); // 80248CD0
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 80248CD4
  cmps(c,0,(int32_t)c->r[0],2); // 80248CD8
  c->r[0]=R8(c->r[5]+0x00000001u); // 80248CDC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 80248CE0
  c->r[0]=R8(c->r[5]+0x00000002u); // 80248CE4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80248CE8
  c->r[0]=R8(c->r[5]+0x00000003u); // 80248CEC
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80248CF0
  if (crb(c,2)) { goto L_80248D00; } // 80248CF4
  c->r[5]=c->r[3]+0x00000018u; // 80248CF8
  goto L_80248D04; // 80248CFC
L_80248D00:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80248D00
L_80248D04:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 80248D04
  c->r[0]=R32(c->r[3]+0x00000020u); // 80248D08
  W8(c->r[3]+0x00000010u,c->r[4]); // 80248D0C
  cmps(c,0,(int32_t)c->r[0],0); // 80248D10
  c->r[0]=R8(c->r[5]+0x00000001u); // 80248D14
  W8(c->r[3]+0x00000011u,c->r[0]); // 80248D18
  c->r[0]=R8(c->r[5]+0x00000002u); // 80248D1C
  W8(c->r[3]+0x00000012u,c->r[0]); // 80248D20
  c->r[0]=R8(c->r[5]+0x00000003u); // 80248D24
  W8(c->r[3]+0x00000013u,c->r[0]); // 80248D28
  if (!crb(c,2)) { goto L_80248D38; } // 80248D2C
  c->r[8]=c->r[3]+0x00000018u; // 80248D30
  goto L_80248D3C; // 80248D34
L_80248D38:;
  c->r[8]=c->r[3]+0x0000001Cu; // 80248D38
L_80248D3C:;
  c->r[5]=R8(c->r[8]+0x00000000u); // 80248D3C
  c->r[4]=0u+0x80810000u; // 80248D40
  c->r[10]=c->r[4]+0xFFFF8081u; // 80248D44
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 80248D48
  W8(c->r[3]+0x00000014u,c->r[5]); // 80248D4C
  c->r[7]=R8(c->r[3]+0x00000042u); // 80248D50
  c->r[5]=R8(c->r[8]+0x00000001u); // 80248D54
  c->r[4]=R8(c->r[3]+0x0000000Fu); // 80248D58
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80248D5C
  W8(c->r[3]+0x00000015u,c->r[5]); // 80248D60
  c->r[0]=R8(c->r[3]+0x00000013u); // 80248D64
  c->r[5]=R8(c->r[8]+0x00000002u); // 80248D68
  W8(c->r[3]+0x00000016u,c->r[5]); // 80248D6C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[7]); // 80248D70
  c->r[8]=R8(c->r[8]+0x00000003u); // 80248D74
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80248D78
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[7]); // 80248D7C
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 80248D80
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[4])>>32); // 80248D84
  c->r[6]=c->r[8]+c->r[6]; // 80248D88
  c->r[8]=sraw(c,c->r[6],7); // 80248D8C
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[5])>>32); // 80248D90
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 80248D94
  c->r[4]=c->r[7]+c->r[4]; // 80248D98
  c->r[8]=c->r[8]+c->r[9]; // 80248D9C
  c->r[7]=sraw(c,c->r[4],7); // 80248DA0
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 80248DA4
  c->r[5]=c->r[6]+c->r[5]; // 80248DA8
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 80248DAC
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 80248DB0
  c->r[7]=c->r[7]+c->r[6]; // 80248DB4
  c->r[5]=sraw(c,c->r[5],7); // 80248DB8
  W8(c->r[3]+0x0000000Fu,c->r[7]); // 80248DBC
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80248DC0
  c->r[0]=c->r[4]+c->r[0]; // 80248DC4
  c->r[0]=sraw(c,c->r[0],7); // 80248DC8
  c->r[5]=c->r[5]+c->r[6]; // 80248DCC
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80248DD0
  W8(c->r[3]+0x00000013u,c->r[5]); // 80248DD4
  c->r[0]=c->r[0]+c->r[4]; // 80248DD8
  W8(c->r[3]+0x00000017u,c->r[0]); // 80248DDC
  return; // 80248DE0
}

// SetTextColor__Q36nw4hbm2ut10CharWriterFQ36nw4hbm2ut5Color
void f_80248DE4(Ctx* __restrict c) {
  trace_call(0x80248DE4u);
  c->r[0]=R32(c->r[3]+0x00000020u); // 80248DE4
  c->r[7]=R8(c->r[4]+0x00000000u); // 80248DE8
  c->r[6]=R8(c->r[4]+0x00000001u); // 80248DEC
  cmps(c,0,(int32_t)c->r[0],1); // 80248DF0
  c->r[5]=R8(c->r[4]+0x00000002u); // 80248DF4
  c->r[0]=R8(c->r[4]+0x00000003u); // 80248DF8
  W8(c->r[3]+0x00000018u,c->r[7]); // 80248DFC
  W8(c->r[3]+0x00000019u,c->r[6]); // 80248E00
  W8(c->r[3]+0x0000001Au,c->r[5]); // 80248E04
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 80248E08
  W8(c->r[3]+0x00000008u,c->r[7]); // 80248E0C
  W8(c->r[3]+0x00000009u,c->r[6]); // 80248E10
  W8(c->r[3]+0x0000000Au,c->r[5]); // 80248E14
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 80248E18
  if (crb(c,2)) { goto L_80248E28; } // 80248E1C
  c->r[5]=c->r[3]+0x00000018u; // 80248E20
  goto L_80248E2C; // 80248E24
L_80248E28:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80248E28
L_80248E2C:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 80248E2C
  c->r[0]=R32(c->r[3]+0x00000020u); // 80248E30
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 80248E34
  cmps(c,0,(int32_t)c->r[0],2); // 80248E38
  c->r[0]=R8(c->r[5]+0x00000001u); // 80248E3C
  W8(c->r[3]+0x0000000Du,c->r[0]); // 80248E40
  c->r[0]=R8(c->r[5]+0x00000002u); // 80248E44
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80248E48
  c->r[0]=R8(c->r[5]+0x00000003u); // 80248E4C
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80248E50
  if (crb(c,2)) { goto L_80248E60; } // 80248E54
  c->r[5]=c->r[3]+0x00000018u; // 80248E58
  goto L_80248E64; // 80248E5C
L_80248E60:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80248E60
L_80248E64:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 80248E64
  c->r[0]=R32(c->r[3]+0x00000020u); // 80248E68
  W8(c->r[3]+0x00000010u,c->r[4]); // 80248E6C
  cmps(c,0,(int32_t)c->r[0],0); // 80248E70
  c->r[0]=R8(c->r[5]+0x00000001u); // 80248E74
  W8(c->r[3]+0x00000011u,c->r[0]); // 80248E78
  c->r[0]=R8(c->r[5]+0x00000002u); // 80248E7C
  W8(c->r[3]+0x00000012u,c->r[0]); // 80248E80
  c->r[0]=R8(c->r[5]+0x00000003u); // 80248E84
  W8(c->r[3]+0x00000013u,c->r[0]); // 80248E88
  if (!crb(c,2)) { goto L_80248E98; } // 80248E8C
  c->r[8]=c->r[3]+0x00000018u; // 80248E90
  goto L_80248E9C; // 80248E94
L_80248E98:;
  c->r[8]=c->r[3]+0x0000001Cu; // 80248E98
L_80248E9C:;
  c->r[5]=R8(c->r[8]+0x00000000u); // 80248E9C
  c->r[4]=0u+0x80810000u; // 80248EA0
  c->r[10]=c->r[4]+0xFFFF8081u; // 80248EA4
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 80248EA8
  W8(c->r[3]+0x00000014u,c->r[5]); // 80248EAC
  c->r[7]=R8(c->r[3]+0x00000042u); // 80248EB0
  c->r[5]=R8(c->r[8]+0x00000001u); // 80248EB4
  c->r[4]=R8(c->r[3]+0x0000000Fu); // 80248EB8
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80248EBC
  W8(c->r[3]+0x00000015u,c->r[5]); // 80248EC0
  c->r[0]=R8(c->r[3]+0x00000013u); // 80248EC4
  c->r[5]=R8(c->r[8]+0x00000002u); // 80248EC8
  W8(c->r[3]+0x00000016u,c->r[5]); // 80248ECC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[7]); // 80248ED0
  c->r[8]=R8(c->r[8]+0x00000003u); // 80248ED4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80248ED8
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[7]); // 80248EDC
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 80248EE0
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[4])>>32); // 80248EE4
  c->r[6]=c->r[8]+c->r[6]; // 80248EE8
  c->r[8]=sraw(c,c->r[6],7); // 80248EEC
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[5])>>32); // 80248EF0
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 80248EF4
  c->r[4]=c->r[7]+c->r[4]; // 80248EF8
  c->r[8]=c->r[8]+c->r[9]; // 80248EFC
  c->r[7]=sraw(c,c->r[4],7); // 80248F00
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 80248F04
  c->r[5]=c->r[6]+c->r[5]; // 80248F08
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 80248F0C
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 80248F10
  c->r[7]=c->r[7]+c->r[6]; // 80248F14
  c->r[5]=sraw(c,c->r[5],7); // 80248F18
  W8(c->r[3]+0x0000000Fu,c->r[7]); // 80248F1C
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80248F20
  c->r[0]=c->r[4]+c->r[0]; // 80248F24
  c->r[0]=sraw(c,c->r[0],7); // 80248F28
  c->r[5]=c->r[5]+c->r[6]; // 80248F2C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80248F30
  W8(c->r[3]+0x00000013u,c->r[5]); // 80248F34
  c->r[0]=c->r[0]+c->r[4]; // 80248F38
  W8(c->r[3]+0x00000017u,c->r[0]); // 80248F3C
  return; // 80248F40
}

// SetTextColor__Q36nw4hbm2ut10CharWriterFQ36nw4hbm2ut5ColorQ36nw4hbm2ut5Color
void f_80248F44(Ctx* __restrict c) {
  trace_call(0x80248F44u);
  c->r[0]=R32(c->r[3]+0x00000020u); // 80248F44
  c->r[11]=R8(c->r[4]+0x00000000u); // 80248F48
  c->r[10]=R8(c->r[4]+0x00000001u); // 80248F4C
  cmps(c,0,(int32_t)c->r[0],1); // 80248F50
  c->r[9]=R8(c->r[4]+0x00000002u); // 80248F54
  c->r[8]=R8(c->r[4]+0x00000003u); // 80248F58
  c->r[7]=R8(c->r[5]+0x00000000u); // 80248F5C
  c->r[6]=R8(c->r[5]+0x00000001u); // 80248F60
  c->r[4]=R8(c->r[5]+0x00000002u); // 80248F64
  c->r[0]=R8(c->r[5]+0x00000003u); // 80248F68
  W8(c->r[3]+0x00000018u,c->r[11]); // 80248F6C
  W8(c->r[3]+0x00000019u,c->r[10]); // 80248F70
  W8(c->r[3]+0x0000001Au,c->r[9]); // 80248F74
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 80248F78
  W8(c->r[3]+0x0000001Cu,c->r[7]); // 80248F7C
  W8(c->r[3]+0x0000001Du,c->r[6]); // 80248F80
  W8(c->r[3]+0x0000001Eu,c->r[4]); // 80248F84
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 80248F88
  W8(c->r[3]+0x00000008u,c->r[11]); // 80248F8C
  W8(c->r[3]+0x00000009u,c->r[10]); // 80248F90
  W8(c->r[3]+0x0000000Au,c->r[9]); // 80248F94
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 80248F98
  if (crb(c,2)) { goto L_80248FA8; } // 80248F9C
  c->r[5]=c->r[3]+0x00000018u; // 80248FA0
  goto L_80248FAC; // 80248FA4
L_80248FA8:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80248FA8
L_80248FAC:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 80248FAC
  c->r[0]=R32(c->r[3]+0x00000020u); // 80248FB0
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 80248FB4
  cmps(c,0,(int32_t)c->r[0],2); // 80248FB8
  c->r[0]=R8(c->r[5]+0x00000001u); // 80248FBC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 80248FC0
  c->r[0]=R8(c->r[5]+0x00000002u); // 80248FC4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80248FC8
  c->r[0]=R8(c->r[5]+0x00000003u); // 80248FCC
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80248FD0
  if (crb(c,2)) { goto L_80248FE0; } // 80248FD4
  c->r[5]=c->r[3]+0x00000018u; // 80248FD8
  goto L_80248FE4; // 80248FDC
L_80248FE0:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80248FE0
L_80248FE4:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 80248FE4
  c->r[0]=R32(c->r[3]+0x00000020u); // 80248FE8
  W8(c->r[3]+0x00000010u,c->r[4]); // 80248FEC
  cmps(c,0,(int32_t)c->r[0],0); // 80248FF0
  c->r[0]=R8(c->r[5]+0x00000001u); // 80248FF4
  W8(c->r[3]+0x00000011u,c->r[0]); // 80248FF8
  c->r[0]=R8(c->r[5]+0x00000002u); // 80248FFC
  W8(c->r[3]+0x00000012u,c->r[0]); // 80249000
  c->r[0]=R8(c->r[5]+0x00000003u); // 80249004
  W8(c->r[3]+0x00000013u,c->r[0]); // 80249008
  if (!crb(c,2)) { goto L_80249018; } // 8024900C
  c->r[8]=c->r[3]+0x00000018u; // 80249010
  goto L_8024901C; // 80249014
L_80249018:;
  c->r[8]=c->r[3]+0x0000001Cu; // 80249018
L_8024901C:;
  c->r[5]=R8(c->r[8]+0x00000000u); // 8024901C
  c->r[4]=0u+0x80810000u; // 80249020
  c->r[10]=c->r[4]+0xFFFF8081u; // 80249024
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 80249028
  W8(c->r[3]+0x00000014u,c->r[5]); // 8024902C
  c->r[7]=R8(c->r[3]+0x00000042u); // 80249030
  c->r[5]=R8(c->r[8]+0x00000001u); // 80249034
  c->r[4]=R8(c->r[3]+0x0000000Fu); // 80249038
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 8024903C
  W8(c->r[3]+0x00000015u,c->r[5]); // 80249040
  c->r[0]=R8(c->r[3]+0x00000013u); // 80249044
  c->r[5]=R8(c->r[8]+0x00000002u); // 80249048
  W8(c->r[3]+0x00000016u,c->r[5]); // 8024904C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[7]); // 80249050
  c->r[8]=R8(c->r[8]+0x00000003u); // 80249054
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80249058
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[7]); // 8024905C
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 80249060
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[4])>>32); // 80249064
  c->r[6]=c->r[8]+c->r[6]; // 80249068
  c->r[8]=sraw(c,c->r[6],7); // 8024906C
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[5])>>32); // 80249070
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 80249074
  c->r[4]=c->r[7]+c->r[4]; // 80249078
  c->r[8]=c->r[8]+c->r[9]; // 8024907C
  c->r[7]=sraw(c,c->r[4],7); // 80249080
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 80249084
  c->r[5]=c->r[6]+c->r[5]; // 80249088
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 8024908C
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 80249090
  c->r[7]=c->r[7]+c->r[6]; // 80249094
  c->r[5]=sraw(c,c->r[5],7); // 80249098
  W8(c->r[3]+0x0000000Fu,c->r[7]); // 8024909C
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 802490A0
  c->r[0]=c->r[4]+c->r[0]; // 802490A4
  c->r[0]=sraw(c,c->r[0],7); // 802490A8
  c->r[5]=c->r[5]+c->r[6]; // 802490AC
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 802490B0
  W8(c->r[3]+0x00000013u,c->r[5]); // 802490B4
  c->r[0]=c->r[0]+c->r[4]; // 802490B8
  W8(c->r[3]+0x00000017u,c->r[0]); // 802490BC
  return; // 802490C0
}

// GetScaleH__Q36nw4hbm2ut10CharWriterCFv
void f_802490C4(Ctx* __restrict c) {
  trace_call(0x802490C4u);
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802490C4
  return; // 802490C8
}

// GetScaleV__Q36nw4hbm2ut10CharWriterCFv
void f_802490CC(Ctx* __restrict c) {
  trace_call(0x802490CCu);
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802490CC
  return; // 802490D0
}

// SetFontSize__Q36nw4hbm2ut10CharWriterFff
void f_802490D4(Ctx* __restrict c) {
  trace_call(0x802490D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802490D4
  c->r[0]=c->lr; // 802490D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 802490DC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802490E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802490E4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 802490E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 802490EC
  c->f[30]=c->f[1]; // 802490F0
  c->f[31]=c->f[2]; // 802490F4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802490F8
  W32(c->r[1]+0x00000028u,c->r[30]); // 802490FC
  W32(c->r[1]+0x00000024u,c->r[29]); // 80249100
  c->r[29]=c->r[3]|c->r[3]; // 80249104
  c->r[3]=R32(c->r[3]+0x00000048u); // 80249108
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024910C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80249110
  c->ctr=c->r[12]; // 80249114
  if (true) { c->lr=0x8024911Cu; dispatch(c,c->ctr); } // 80249118
  c->r[0]=c->r[3]^0x80000000u; // 8024911C
  c->r[31]=0u+0x43300000u; // 80249120
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80249124
  c->r[30]=0u+0x80260000u; // 80249128
  c->r[3]=R32(c->r[29]+0x00000048u); // 8024912C
  W32(c->r[1]+0x00000008u,c->r[31]); // 80249130
  {uint32_t ea=c->r[30]+0x00001B00u; c->f[1]=RF64(ea);} // 80249134
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80249138
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024913C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80249140
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80249144
  c->f[31]=c->ps1[31]=S(c->f[31]/c->f[0]); // 80249148
  c->ctr=c->r[12]; // 8024914C
  if (true) { c->lr=0x80249154u; dispatch(c,c->ctr); } // 80249150
  c->r[0]=c->r[3]^0x80000000u; // 80249154
  W32(c->r[1]+0x00000010u,c->r[31]); // 80249158
  {uint32_t ea=c->r[30]+0x00001B00u; c->f[1]=RF64(ea);} // 8024915C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80249160
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80249164
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[31]);} // 80249168
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8024916C
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[0]); // 80249170
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 80249174
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80249178
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8024917C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80249180
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80249184
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80249188
  c->r[30]=R32(c->r[1]+0x00000028u); // 8024918C
  c->r[29]=R32(c->r[1]+0x00000024u); // 80249190
  c->r[0]=R32(c->r[1]+0x00000054u); // 80249194
  c->lr=c->r[0]; // 80249198
  c->r[1]=c->r[1]+0x00000050u; // 8024919C
  return; // 802491A0
}

// GetFontWidth__Q36nw4hbm2ut10CharWriterCFv
void f_802491A4(Ctx* __restrict c) {
  trace_call(0x802491A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802491A4
  c->r[0]=c->lr; // 802491A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802491AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802491B0
  c->r[31]=c->r[3]|c->r[3]; // 802491B4
  c->r[3]=R32(c->r[3]+0x00000048u); // 802491B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802491BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802491C0
  c->ctr=c->r[12]; // 802491C4
  if (true) { c->lr=0x802491CCu; dispatch(c,c->ctr); } // 802491C8
  c->r[3]=c->r[3]^0x80000000u; // 802491CC
  c->r[0]=0u+0x43300000u; // 802491D0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802491D4
  c->r[3]=0u+0x80260000u; // 802491D8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802491DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802491E0
  {uint32_t ea=c->r[3]+0x00001B00u; c->f[2]=RF64(ea);} // 802491E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 802491E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802491EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802491F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802491F4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802491F8
  c->lr=c->r[0]; // 802491FC
  c->r[1]=c->r[1]+0x00000020u; // 80249200
  return; // 80249204
}

// GetFontHeight__Q36nw4hbm2ut10CharWriterCFv
void f_80249208(Ctx* __restrict c) {
  trace_call(0x80249208u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249208
  c->r[0]=c->lr; // 8024920C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80249210
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80249214
  c->r[31]=c->r[3]|c->r[3]; // 80249218
  c->r[3]=R32(c->r[3]+0x00000048u); // 8024921C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80249220
  c->r[12]=R32(c->r[12]+0x00000010u); // 80249224
  c->ctr=c->r[12]; // 80249228
  if (true) { c->lr=0x80249230u; dispatch(c,c->ctr); } // 8024922C
  c->r[3]=c->r[3]^0x80000000u; // 80249230
  c->r[0]=0u+0x43300000u; // 80249234
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80249238
  c->r[3]=0u+0x80260000u; // 8024923C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80249240
  W32(c->r[1]+0x00000008u,c->r[0]); // 80249244
  {uint32_t ea=c->r[3]+0x00001B00u; c->f[2]=RF64(ea);} // 80249248
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8024924C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80249250
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80249254
  c->r[0]=R32(c->r[1]+0x00000024u); // 80249258
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8024925C
  c->lr=c->r[0]; // 80249260
  c->r[1]=c->r[1]+0x00000020u; // 80249264
  return; // 80249268
}

// GetFontAscent__Q36nw4hbm2ut10CharWriterCFv
void f_8024926C(Ctx* __restrict c) {
  trace_call(0x8024926Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024926C
  c->r[0]=c->lr; // 80249270
  W32(c->r[1]+0x00000024u,c->r[0]); // 80249274
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80249278
  c->r[31]=c->r[3]|c->r[3]; // 8024927C
  c->r[3]=R32(c->r[3]+0x00000048u); // 80249280
  c->r[12]=R32(c->r[3]+0x00000000u); // 80249284
  c->r[12]=R32(c->r[12]+0x00000014u); // 80249288
  c->ctr=c->r[12]; // 8024928C
  if (true) { c->lr=0x80249294u; dispatch(c,c->ctr); } // 80249290
  c->r[3]=c->r[3]^0x80000000u; // 80249294
  c->r[0]=0u+0x43300000u; // 80249298
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8024929C
  c->r[3]=0u+0x80260000u; // 802492A0
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802492A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802492A8
  {uint32_t ea=c->r[3]+0x00001B00u; c->f[2]=RF64(ea);} // 802492AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 802492B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802492B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802492B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802492BC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802492C0
  c->lr=c->r[0]; // 802492C4
  c->r[1]=c->r[1]+0x00000020u; // 802492C8
  return; // 802492CC
}

// IsWidthFixed__Q36nw4hbm2ut10CharWriterCFv
void f_802492D0(Ctx* __restrict c) {
  trace_call(0x802492D0u);
  c->r[3]=R8(c->r[3]+0x00000043u); // 802492D0
  return; // 802492D4
}

// GetFixedWidth__Q36nw4hbm2ut10CharWriterCFv
void f_802492D8(Ctx* __restrict c) {
  trace_call(0x802492D8u);
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 802492D8
  return; // 802492DC
}

// Print__Q36nw4hbm2ut10CharWriterFUs
void f_802492E0(Ctx* __restrict c) {
  trace_call(0x802492E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802492E0
  c->r[0]=c->lr; // 802492E4
  W32(c->r[1]+0x00000054u,c->r[0]); // 802492E8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802492EC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802492F0
  c->r[0]=0u+0x43300000u; // 802492F4
  c->r[5]=c->r[4]|c->r[4]; // 802492F8
  c->r[4]=c->r[1]+0x00000008u; // 802492FC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80249300
  c->r[31]=c->r[3]|c->r[3]; // 80249304
  c->r[3]=R32(c->r[3]+0x00000048u); // 80249308
  W32(c->r[1]+0x00000020u,c->r[0]); // 8024930C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80249310
  W32(c->r[1]+0x00000028u,c->r[0]); // 80249314
  c->r[12]=R32(c->r[12]+0x00000050u); // 80249318
  c->ctr=c->r[12]; // 8024931C
  if (true) { c->lr=0x80249324u; dispatch(c,c->ctr); } // 80249320
  c->r[0]=R8(c->r[31]+0x00000043u); // 80249324
  cmps(c,0,(int32_t)c->r[0],0); // 80249328
  if (crb(c,2)) { goto L_80249390; } // 8024932C
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 80249330
  c->r[5]=0u+0x80260000u; // 80249334
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80249338
  c->r[3]=0u+0x80260000u; // 8024933C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80249340
  {uint32_t ea=c->r[5]+0x00001B00u; c->f[4]=RF64(ea);} // 80249344
  c->r[4]=c->r[4]^0x80000000u; // 80249348
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8024934C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80249350
  c->r[0]=c->r[0]^0x80000000u; // 80249354
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80249358
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8024935C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80249360
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 80249364
  {uint32_t ea=c->r[31]+0x00000044u; c->f[31]=c->ps1[31]=RF32(ea);} // 80249368
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8024936C
  {uint32_t ea=c->r[3]+0x00001B08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80249370
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 80249374
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 80249378
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[2]); // 8024937C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 80249380
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80249384
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80249388
  goto L_802493D4; // 8024938C
L_80249390:;
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 80249390
  c->r[3]=0u+0x80260000u; // 80249394
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80249398
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8024939C
  {uint32_t ea=c->r[3]+0x00001B00u; c->f[3]=RF64(ea);} // 802493A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802493A4
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802493A8
  c->r[3]=c->r[4]^0x80000000u; // 802493AC
  c->r[0]=c->r[0]^0x80000000u; // 802493B0
  W32(c->r[1]+0x00000024u,c->r[3]); // 802493B4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802493B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 802493BC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 802493C0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802493C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802493C8
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[1]); // 802493CC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802493D0
L_802493D4:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802493D4
  c->r[3]=c->r[31]|c->r[31]; // 802493D8
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802493DC
  c->r[4]=c->r[1]+0x00000008u; // 802493E0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 802493E4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 802493E8
  c->lr=0x802493F0u; f_80249468(c); // 802493EC
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802493F0
  c->f[1]=c->f[31]; // 802493F4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 802493F8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 802493FC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80249400
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80249404
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80249408
  c->r[0]=R32(c->r[1]+0x00000054u); // 8024940C
  c->lr=c->r[0]; // 80249410
  c->r[1]=c->r[1]+0x00000050u; // 80249414
  return; // 80249418
}

// SetCursor__Q36nw4hbm2ut10CharWriterFff
void f_8024941C(Ctx* __restrict c) {
  trace_call(0x8024941Cu);
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 8024941C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 80249420
  return; // 80249424
}

// SetCursorX__Q36nw4hbm2ut10CharWriterFf
void f_80249428(Ctx* __restrict c) {
  trace_call(0x80249428u);
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 80249428
  return; // 8024942C
}

// SetCursorY__Q36nw4hbm2ut10CharWriterFf
void f_80249430(Ctx* __restrict c) {
  trace_call(0x80249430u);
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 80249430
  return; // 80249434
}

// MoveCursorX__Q36nw4hbm2ut10CharWriterFf
void f_80249438(Ctx* __restrict c) {
  trace_call(0x80249438u);
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80249438
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8024943C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80249440
  return; // 80249444
}

// MoveCursorY__Q36nw4hbm2ut10CharWriterFf
void f_80249448(Ctx* __restrict c) {
  trace_call(0x80249448u);
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80249448
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8024944C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80249450
  return; // 80249454
}

// GetCursorX__Q36nw4hbm2ut10CharWriterCFv
void f_80249458(Ctx* __restrict c) {
  trace_call(0x80249458u);
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80249458
  return; // 8024945C
}

// GetCursorY__Q36nw4hbm2ut10CharWriterCFv
void f_80249460(Ctx* __restrict c) {
  trace_call(0x80249460u);
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80249460
  return; // 80249464
}

// PrintGlyph__Q36nw4hbm2ut10CharWriterFfffRCQ36nw4hbm2ut5Glyph
void f_80249468(Ctx* __restrict c) {
  trace_call(0x80249468u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249468
  c->r[0]=c->lr; // 8024946C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80249470
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 80249474
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80249478
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 8024947C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 80249480
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 80249484
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 80249488
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 8024948C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 80249490
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 80249494
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 80249498
  c->r[11]=c->r[1]+0x00000070u; // 8024949C
  c->lr=0x802494A4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802494A0
  c->r[25]=R8(c->r[4]+0x00000005u); // 802494A4
  c->r[31]=0u+0x43300000u; // 802494A8
  c->r[6]=R16(c->r[4]+0x00000010u); // 802494AC
  c->r[11]=0u+0x00000000u; // 802494B0
  c->r[24]=R8(c->r[4]+0x00000007u); // 802494B4
  c->r[26]=0u+0x80260000u; // 802494B8
  c->r[0]=c->r[6]+c->r[25]; // 802494BC
  c->r[8]=R16(c->r[4]+0x00000012u); // 802494C0
  c->r[5]=R16(c->r[4]+0x0000000Cu); // 802494C4
  c->r[6]=rotl(c->r[6],15)&0xFFFF8000u; // 802494C8
  c->r[7]=c->r[8]+c->r[24]; // 802494CC
  c->r[8]=rotl(c->r[8],15)&0xFFFF8000u; // 802494D0
  c->r[30]=divwu(c->r[6],c->r[5]); // 802494D4
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 802494D8
  c->r[27]=rotl(c->r[0],15)&0xFFFF8000u; // 802494DC
  c->r[0]=R32(c->r[4]+0x00000000u); // 802494E0
  c->r[12]=rotl(c->r[7],15)&0xFFFF8000u; // 802494E4
  c->r[10]=R32(c->r[3]+0x00000038u); // 802494E8
  c->r[29]=divwu(c->r[8],c->r[6]); // 802494EC
  c->r[8]=0u+0x80360000u; // 802494F0
  c->r[7]=R32(c->r[8]+0xFFFFCE60u); // 802494F4
  c->f[29]=c->f[3]; // 802494F8
  c->r[9]=R32(c->r[3]+0x0000003Cu); // 802494FC
  c->f[27]=c->f[1]; // 80249500
  c->r[28]=divwu(c->r[27],c->r[5]); // 80249504
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[7]); // 80249508
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 8024950C
  c->f[28]=c->f[2]; // 80249510
  {uint32_t ea=c->r[26]+0x00001B10u; c->f[5]=RF64(ea);} // 80249514
  c->r[27]=c->r[3]|c->r[3]; // 80249518
  W32(c->r[1]+0x00000038u,c->r[31]); // 8024951C
  c->r[7]=divwu(c->r[12],c->r[6]); // 80249520
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80249524
  W32(c->r[1]+0x00000040u,c->r[31]); // 80249528
  c->r[31]=rotl(c->r[30],0)&0x0000FFFFu; // 8024952C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[5]); // 80249530
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80249534
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[0]); // 80249538
  W32(c->r[1]+0x00000044u,c->r[24]); // 8024953C
  c->r[30]=rotl(c->r[29],0)&0x0000FFFFu; // 80249540
  c->r[29]=rotl(c->r[28],0)&0x0000FFFFu; // 80249544
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 80249548
  c->r[28]=rotl(c->r[7],0)&0x0000FFFFu; // 8024954C
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[4]); // 80249550
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80249554
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[5]); // 80249558
  W32(c->r[1]+0x00000008u,c->r[11]); // 8024955C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80249560
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80249564
  W32(c->r[1]+0x00000010u,c->r[10]); // 80249568
  c->f[30]=c->ps1[30]=S(c->f[2]+c->f[0]); // 8024956C
  W32(c->r[1]+0x00000014u,c->r[9]); // 80249570
  if (!crb(c,2)) { goto L_802495A0; } // 80249574
  c->r[7]=c->r[8]+0xFFFFCE60u; // 80249578
  c->r[3]=R32(c->r[7]+0x00000004u); // 8024957C
  cmpu(c,0,c->r[0],c->r[3]); // 80249580
  if (!crb(c,2)) { goto L_802495A0; } // 80249584
  c->r[3]=R32(c->r[7]+0x00000008u); // 80249588
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[3]); // 8024958C
  if (!crb(c,2)) { goto L_802495A0; } // 80249590
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 80249594
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[3]); // 80249598
  if (crb(c,2)) { goto L_802495A4; } // 8024959C
L_802495A0:;
  c->r[11]=0u+0x00000001u; // 802495A0
L_802495A4:;
  cmps(c,0,(int32_t)c->r[11],0); // 802495A4
  if (crb(c,2)) { goto L_80249628; } // 802495A8
  c->r[7]=R32(c->r[4]+0x00000008u); // 802495AC
  c->r[4]=c->r[0]|c->r[0]; // 802495B0
  c->r[3]=c->r[1]+0x00000018u; // 802495B4
  c->r[8]=0u+0x00000000u; // 802495B8
  c->r[9]=0u+0x00000000u; // 802495BC
  c->r[10]=0u+0x00000000u; // 802495C0
  c->lr=0x802495C8u; f_800D1374(c); // 802495C4
  c->r[3]=0u+0x80260000u; // 802495C8
  c->r[4]=R32(c->r[27]+0x00000038u); // 802495CC
  {uint32_t ea=c->r[3]+0x00001AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802495D0
  c->r[3]=c->r[1]+0x00000018u; // 802495D4
  c->r[5]=R32(c->r[27]+0x0000003Cu); // 802495D8
  c->r[6]=0u+0x00000000u; // 802495DC
  c->f[2]=c->f[1]; // 802495E0
  c->r[7]=0u+0x00000000u; // 802495E4
  c->f[3]=c->f[1]; // 802495E8
  c->r[8]=0u+0x00000000u; // 802495EC
  c->lr=0x802495F4u; f_800D15C8(c); // 802495F0
  c->r[3]=c->r[1]+0x00000018u; // 802495F4
  c->r[4]=0u+0x00000000u; // 802495F8
  c->lr=0x80249600u; f_800D1994(c); // 802495FC
  c->r[6]=0u+0x80360000u; // 80249600
  c->r[7]=R32(c->r[1]+0x00000008u); // 80249604
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80249608
  c->r[4]=c->r[6]+0xFFFFCE60u; // 8024960C
  c->r[3]=R32(c->r[1]+0x00000010u); // 80249610
  c->r[0]=R32(c->r[1]+0x00000014u); // 80249614
  W32(c->r[6]+0xFFFFCE60u,c->r[7]); // 80249618
  W32(c->r[4]+0x00000004u,c->r[5]); // 8024961C
  W32(c->r[4]+0x00000008u,c->r[3]); // 80249620
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80249624
L_80249628:;
  c->r[3]=0u+0x00000080u; // 80249628
  c->r[4]=0u+0x00000000u; // 8024962C
  c->r[5]=0u+0x00000004u; // 80249630
  c->lr=0x80249638u; f_800CFE14(c); // 80249634
  c->r[3]=0u+0xCC010000u; // 80249638
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[27]);} // 8024963C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[28]);} // 80249640
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 80249644
  c->r[0]=R32(c->r[27]+0x00000008u); // 80249648
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8024964C
  W16(c->r[3]+0xFFFF8000u,c->r[31]); // 80249650
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 80249654
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 80249658
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[28]);} // 8024965C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 80249660
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 80249664
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80249668
  W16(c->r[3]+0xFFFF8000u,c->r[29]); // 8024966C
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 80249670
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 80249674
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[30]);} // 80249678
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 8024967C
  c->r[0]=R32(c->r[27]+0x00000014u); // 80249680
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80249684
  W16(c->r[3]+0xFFFF8000u,c->r[29]); // 80249688
  W16(c->r[3]+0xFFFF8000u,c->r[28]); // 8024968C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[27]);} // 80249690
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[30]);} // 80249694
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 80249698
  c->r[0]=R32(c->r[27]+0x00000010u); // 8024969C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802496A0
  W16(c->r[3]+0xFFFF8000u,c->r[31]); // 802496A4
  W16(c->r[3]+0xFFFF8000u,c->r[28]); // 802496A8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 802496AC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 802496B0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 802496B4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 802496B8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 802496BC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 802496C0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 802496C4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 802496C8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 802496CC
  c->r[11]=c->r[1]+0x00000070u; // 802496D0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 802496D4
  c->lr=0x802496DCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802496D8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 802496DC
  c->lr=c->r[0]; // 802496E0
  c->r[1]=c->r[1]+0x000000C0u; // 802496E4
  return; // 802496E8
}

// SetupGXWithColorMapping__Q36nw4hbm2ut10CharWriterFQ36nw4hbm2ut5ColorQ36nw4hbm2ut5Color
void f_802496EC(Ctx* __restrict c) {
  trace_call(0x802496ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802496EC
  c->r[0]=c->lr; // 802496F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802496F4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802496F8
  c->r[31]=c->r[4]|c->r[4]; // 802496FC
  W32(c->r[1]+0x00000028u,c->r[30]); // 80249700
  c->r[30]=0u+0x80360000u; // 80249704
  c->r[30]=c->r[30]+0xFFFFCE48u; // 80249708
  W32(c->r[1]+0x00000024u,c->r[29]); // 8024970C
  c->r[29]=c->r[3]|c->r[3]; // 80249710
  c->r[0]=R8(c->r[30]+0x00000000u); // 80249714
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80249718
  if (!crb(c,2)) { goto L_80249744; } // 8024971C
  c->r[0]=0u+0x00000000u; // 80249720
  c->r[4]=0u+0x80240000u; // 80249724
  W32(c->r[30]+0x00000010u,c->r[0]); // 80249728
  c->r[3]=c->r[30]+0x00000010u; // 8024972C
  c->r[4]=c->r[4]+0xFFFFD7D0u; // 80249730
  c->r[5]=c->r[30]+0x00000004u; // 80249734
  c->lr=0x8024973Cu; f_800D4478(c); // 80249738
  c->r[0]=0u+0x00000001u; // 8024973C
  W8(c->r[30]+0x00000000u,c->r[0]); // 80249740
L_80249744:;
  c->r[3]=0u+0x80260000u; // 80249744
  c->r[6]=c->r[30]+0x00000010u; // 80249748
  {uint32_t ea=c->r[3]+0x00001AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024974C
  c->r[4]=c->r[1]+0x00000008u; // 80249750
  c->r[3]=R8(c->r[30]+0x00000010u); // 80249754
  c->r[7]=R8(c->r[6]+0x00000001u); // 80249758
  c->f[2]=c->f[1]; // 8024975C
  c->r[5]=R8(c->r[6]+0x00000002u); // 80249760
  c->f[3]=c->f[1]; // 80249764
  c->r[0]=R8(c->r[6]+0x00000003u); // 80249768
  c->f[4]=c->f[1]; // 8024976C
  W8(c->r[1]+0x00000008u,c->r[3]); // 80249770
  c->r[3]=0u+0x00000000u; // 80249774
  W8(c->r[1]+0x00000009u,c->r[7]); // 80249778
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8024977C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80249780
  c->lr=0x80249788u; f_800D2C7C(c); // 80249784
  c->r[3]=0u+0x00000000u; // 80249788
  c->r[4]=0u+0x00000000u; // 8024978C
  c->r[5]=0u+0x00000001u; // 80249790
  c->r[6]=0u+0x00000002u; // 80249794
  c->r[7]=0u+0x00000003u; // 80249798
  c->lr=0x802497A0u; f_800D29BC(c); // 8024979C
  c->r[3]=0u+0x00000000u; // 802497A0
  c->r[4]=0u+0x00000011u; // 802497A4
  c->r[5]=0u+0x00000000u; // 802497A8
  c->lr=0x802497B0u; f_800D2A70(c); // 802497AC
  c->r[3]=0u+0x00000001u; // 802497B0
  c->lr=0x802497B8u; f_800D11EC(c); // 802497B4
  c->r[3]=0u+0x00000004u; // 802497B8
  c->r[4]=0u+0x00000000u; // 802497BC
  c->r[5]=0u+0x00000000u; // 802497C0
  c->r[6]=0u+0x00000001u; // 802497C4
  c->r[7]=0u+0x00000000u; // 802497C8
  c->r[8]=0u+0x00000000u; // 802497CC
  c->r[9]=0u+0x00000002u; // 802497D0
  c->lr=0x802497D8u; f_800D1210(c); // 802497D4
  c->r[3]=0u+0x00000005u; // 802497D8
  c->r[4]=0u+0x00000000u; // 802497DC
  c->r[5]=0u+0x00000000u; // 802497E0
  c->r[6]=0u+0x00000000u; // 802497E4
  c->r[7]=0u+0x00000000u; // 802497E8
  c->r[8]=0u+0x00000000u; // 802497EC
  c->r[9]=0u+0x00000002u; // 802497F0
  c->lr=0x802497F8u; f_800D1210(c); // 802497F4
  c->r[3]=0u+0x00000001u; // 802497F8
  c->lr=0x80249800u; f_800CF424(c); // 802497FC
  c->r[3]=0u+0x00000000u; // 80249800
  c->r[4]=0u+0x00000001u; // 80249804
  c->r[5]=0u+0x00000004u; // 80249808
  c->r[6]=0u+0x0000003Cu; // 8024980C
  c->r[7]=0u+0x00000000u; // 80249810
  c->r[8]=0u+0x0000007Du; // 80249814
  c->lr=0x8024981Cu; f_800CF1FC(c); // 80249818
  c->r[3]=0u+0x00000000u; // 8024981C
  c->lr=0x80249824u; f_800D253C(c); // 80249820
  c->r[3]=0u+0x00000001u; // 80249824
  c->r[4]=0u+0x00000004u; // 80249828
  c->r[5]=0u+0x00000005u; // 8024982C
  c->r[6]=0u+0x0000000Fu; // 80249830
  c->lr=0x80249838u; f_800D312C(c); // 80249834
  c->r[3]=0u+0x00000002u; // 80249838
  c->lr=0x80249840u; f_800D2C58(c); // 8024983C
  c->r[3]=0u+0x00000000u; // 80249840
  c->lr=0x80249848u; f_800D255C(c); // 80249844
  c->r[3]=0u+0x00000001u; // 80249848
  c->lr=0x80249850u; f_800D255C(c); // 8024984C
  c->r[3]=0u+0x00000000u; // 80249850
  c->r[4]=0u+0x00000000u; // 80249854
  c->r[5]=0u+0x00000000u; // 80249858
  c->lr=0x80249860u; f_800D2980(c); // 8024985C
  c->r[3]=0u+0x00000001u; // 80249860
  c->r[4]=0u+0x00000000u; // 80249864
  c->r[5]=0u+0x00000000u; // 80249868
  c->lr=0x80249870u; f_800D2980(c); // 8024986C
  c->r[3]=0u+0x00000000u; // 80249870
  c->r[4]=0u+0x00000000u; // 80249874
  c->r[5]=0u+0x00000000u; // 80249878
  c->r[6]=0u+0x000000FFu; // 8024987C
  c->lr=0x80249884u; f_800D2AFC(c); // 80249880
  c->r[7]=R8(c->r[29]+0x00000000u); // 80249884
  c->r[4]=c->r[1]+0x00000010u; // 80249888
  c->r[6]=R8(c->r[29]+0x00000001u); // 8024988C
  c->r[3]=0u+0x00000001u; // 80249890
  c->r[5]=R8(c->r[29]+0x00000002u); // 80249894
  c->r[0]=R8(c->r[29]+0x00000003u); // 80249898
  W8(c->r[1]+0x00000010u,c->r[7]); // 8024989C
  W8(c->r[1]+0x00000011u,c->r[6]); // 802498A0
  W8(c->r[1]+0x00000012u,c->r[5]); // 802498A4
  W8(c->r[1]+0x00000013u,c->r[0]); // 802498A8
  c->lr=0x802498B0u; f_800D27C0(c); // 802498AC
  c->r[7]=R8(c->r[31]+0x00000000u); // 802498B0
  c->r[4]=c->r[1]+0x0000000Cu; // 802498B4
  c->r[6]=R8(c->r[31]+0x00000001u); // 802498B8
  c->r[3]=0u+0x00000002u; // 802498BC
  c->r[5]=R8(c->r[31]+0x00000002u); // 802498C0
  c->r[0]=R8(c->r[31]+0x00000003u); // 802498C4
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 802498C8
  W8(c->r[1]+0x0000000Du,c->r[6]); // 802498CC
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 802498D0
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 802498D4
  c->lr=0x802498DCu; f_800D27C0(c); // 802498D8
  c->r[3]=0u+0x00000000u; // 802498DC
  c->r[4]=0u+0x00000002u; // 802498E0
  c->r[5]=0u+0x00000004u; // 802498E4
  c->r[6]=0u+0x00000008u; // 802498E8
  c->r[7]=0u+0x0000000Fu; // 802498EC
  c->lr=0x802498F4u; f_800D2690(c); // 802498F0
  c->r[3]=0u+0x00000000u; // 802498F4
  c->r[4]=0u+0x00000001u; // 802498F8
  c->r[5]=0u+0x00000002u; // 802498FC
  c->r[6]=0u+0x00000004u; // 80249900
  c->r[7]=0u+0x00000007u; // 80249904
  c->lr=0x8024990Cu; f_800D26D0(c); // 80249908
  c->r[3]=0u+0x00000000u; // 8024990C
  c->r[4]=0u+0x00000000u; // 80249910
  c->r[5]=0u+0x00000000u; // 80249914
  c->r[6]=0u+0x00000000u; // 80249918
  c->r[7]=0u+0x00000001u; // 8024991C
  c->r[8]=0u+0x00000000u; // 80249920
  c->lr=0x80249928u; f_800D2710(c); // 80249924
  c->r[3]=0u+0x00000000u; // 80249928
  c->r[4]=0u+0x00000000u; // 8024992C
  c->r[5]=0u+0x00000000u; // 80249930
  c->r[6]=0u+0x00000000u; // 80249934
  c->r[7]=0u+0x00000001u; // 80249938
  c->r[8]=0u+0x00000000u; // 8024993C
  c->lr=0x80249944u; f_800D2768(c); // 80249940
  c->r[3]=0u+0x00000001u; // 80249944
  c->r[4]=0u+0x000000FFu; // 80249948
  c->r[5]=0u+0x000000FFu; // 8024994C
  c->r[6]=0u+0x00000004u; // 80249950
  c->lr=0x80249958u; f_800D2AFC(c); // 80249954
  c->r[3]=0u+0x00000001u; // 80249958
  c->r[4]=0u+0x0000000Fu; // 8024995C
  c->r[5]=0u+0x00000000u; // 80249960
  c->r[6]=0u+0x0000000Au; // 80249964
  c->r[7]=0u+0x0000000Fu; // 80249968
  c->lr=0x80249970u; f_800D2690(c); // 8024996C
  c->r[3]=0u+0x00000001u; // 80249970
  c->r[4]=0u+0x00000007u; // 80249974
  c->r[5]=0u+0x00000000u; // 80249978
  c->r[6]=0u+0x00000005u; // 8024997C
  c->r[7]=0u+0x00000007u; // 80249980
  c->lr=0x80249988u; f_800D26D0(c); // 80249984
  c->r[3]=0u+0x00000001u; // 80249988
  c->r[4]=0u+0x00000000u; // 8024998C
  c->r[5]=0u+0x00000000u; // 80249990
  c->r[6]=0u+0x00000000u; // 80249994
  c->r[7]=0u+0x00000001u; // 80249998
  c->r[8]=0u+0x00000000u; // 8024999C
  c->lr=0x802499A4u; f_800D2710(c); // 802499A0
  c->r[3]=0u+0x00000001u; // 802499A4
  c->r[4]=0u+0x00000000u; // 802499A8
  c->r[5]=0u+0x00000000u; // 802499AC
  c->r[6]=0u+0x00000000u; // 802499B0
  c->r[7]=0u+0x00000001u; // 802499B4
  c->r[8]=0u+0x00000000u; // 802499B8
  c->lr=0x802499C0u; f_800D2768(c); // 802499BC
  c->r[3]=0u+0x00000000u; // 802499C0
  c->r[4]=0u+0x00000009u; // 802499C4
  c->r[5]=0u+0x00000001u; // 802499C8
  c->r[6]=0u+0x00000004u; // 802499CC
  c->r[7]=0u+0x00000000u; // 802499D0
  c->lr=0x802499D8u; f_800CEB5C(c); // 802499D4
  c->r[3]=0u+0x00000000u; // 802499D8
  c->r[4]=0u+0x0000000Bu; // 802499DC
  c->r[5]=0u+0x00000001u; // 802499E0
  c->r[6]=0u+0x00000005u; // 802499E4
  c->r[7]=0u+0x00000000u; // 802499E8
  c->lr=0x802499F0u; f_800CEB5C(c); // 802499EC
  c->r[3]=0u+0x00000000u; // 802499F0
  c->r[4]=0u+0x0000000Du; // 802499F4
  c->r[5]=0u+0x00000001u; // 802499F8
  c->r[6]=0u+0x00000002u; // 802499FC
  c->r[7]=0u+0x0000000Fu; // 80249A00
  c->lr=0x80249A08u; f_800CEB5C(c); // 80249A04
  c->lr=0x80249A0Cu; f_800CEB28(c); // 80249A08
  c->r[3]=0u+0x00000009u; // 80249A0C
  c->r[4]=0u+0x00000001u; // 80249A10
  c->lr=0x80249A18u; f_800CE534(c); // 80249A14
  c->r[3]=0u+0x0000000Bu; // 80249A18
  c->r[4]=0u+0x00000001u; // 80249A1C
  c->lr=0x80249A24u; f_800CE534(c); // 80249A20
  c->r[3]=0u+0x0000000Du; // 80249A24
  c->r[4]=0u+0x00000001u; // 80249A28
  c->lr=0x80249A30u; f_800CE534(c); // 80249A2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80249A30
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80249A34
  c->r[30]=R32(c->r[1]+0x00000028u); // 80249A38
  c->r[29]=R32(c->r[1]+0x00000024u); // 80249A3C
  c->lr=c->r[0]; // 80249A40
  c->r[1]=c->r[1]+0x00000030u; // 80249A44
  return; // 80249A48
}

// InitReaderFunc__Q36nw4hbm2ut4FontFQ36nw4hbm2ut12FontEncoding
void f_80249A4C(Ctx* __restrict c) {
  trace_call(0x80249A4Cu);
  cmps(c,0,(int32_t)c->r[4],2); // 80249A4C
  c->r[5]=0u+0x802A0000u; // 80249A50
  c->r[5]=c->r[5]+0x00001C08u; // 80249A54
  if (crb(c,2)) { goto L_80249AB4; } // 80249A58
  if (!crb(c,0)) { goto L_80249AD4; } // 80249A5C
  cmps(c,0,(int32_t)c->r[4],0); // 80249A60
  if (crb(c,2)) { goto L_80249A74; } // 80249A64
  if (!crb(c,0)) { goto L_80249A94; } // 80249A68
  goto L_80249AD4; // 80249A6C
  goto L_80249AD4; // 80249A70
L_80249A74:;
  c->r[4]=c->r[5]+0x00000000u; // 80249A74
  c->r[5]=R32(c->r[5]+0x00000000u); // 80249A78
  c->r[0]=R32(c->r[4]+0x00000004u); // 80249A7C
  W32(c->r[3]+0x00000004u,c->r[5]); // 80249A80
  W32(c->r[3]+0x00000008u,c->r[0]); // 80249A84
  c->r[0]=R32(c->r[4]+0x00000008u); // 80249A88
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80249A8C
  return; // 80249A90
L_80249A94:;
  c->r[4]=c->r[5]+0x0000000Cu; // 80249A94
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80249A98
  c->r[0]=R32(c->r[4]+0x00000004u); // 80249A9C
  W32(c->r[3]+0x00000004u,c->r[5]); // 80249AA0
  W32(c->r[3]+0x00000008u,c->r[0]); // 80249AA4
  c->r[0]=R32(c->r[4]+0x00000008u); // 80249AA8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80249AAC
  return; // 80249AB0
L_80249AB4:;
  c->r[4]=c->r[5]+0x00000018u; // 80249AB4
  c->r[5]=R32(c->r[5]+0x00000018u); // 80249AB8
  c->r[0]=R32(c->r[4]+0x00000004u); // 80249ABC
  W32(c->r[3]+0x00000004u,c->r[5]); // 80249AC0
  W32(c->r[3]+0x00000008u,c->r[0]); // 80249AC4
  c->r[0]=R32(c->r[4]+0x00000008u); // 80249AC8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80249ACC
  return; // 80249AD0
L_80249AD4:;
  c->r[4]=c->r[5]+0x00000024u; // 80249AD4
  c->r[5]=R32(c->r[5]+0x00000024u); // 80249AD8
  c->r[0]=R32(c->r[4]+0x00000004u); // 80249ADC
  W32(c->r[3]+0x00000004u,c->r[5]); // 80249AE0
  W32(c->r[3]+0x00000008u,c->r[0]); // 80249AE4
  c->r[0]=R32(c->r[4]+0x00000008u); // 80249AE8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80249AEC
  return; // 80249AF0
}

// __dt__Q46nw4hbm2ut6detail12LinkListImplFv
void f_80249AF4(Ctx* __restrict c) {
  trace_call(0x80249AF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249AF4
  c->r[0]=c->lr; // 80249AF8
  cmps(c,0,(int32_t)c->r[3],0); // 80249AFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80249B00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80249B04
  c->r[31]=c->r[3]|c->r[3]; // 80249B08
  if (crb(c,2)) { goto L_80249B60; } // 80249B0C
  c->r[7]=R32(c->r[3]+0x00000004u); // 80249B10
  c->r[6]=c->r[3]+0x00000004u; // 80249B14
  c->r[0]=0u+0x00000000u; // 80249B18
  goto L_80249B48; // 80249B1C
L_80249B20:;
  c->r[8]=R32(c->r[7]+0x00000000u); // 80249B20
  c->r[5]=R32(c->r[7]+0x00000004u); // 80249B24
  W32(c->r[8]+0x00000004u,c->r[5]); // 80249B28
  W32(c->r[5]+0x00000000u,c->r[8]); // 80249B2C
  c->r[5]=R32(c->r[3]+0x00000000u); // 80249B30
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80249B34
  W32(c->r[3]+0x00000000u,c->r[5]); // 80249B38
  W32(c->r[7]+0x00000000u,c->r[0]); // 80249B3C
  W32(c->r[7]+0x00000004u,c->r[0]); // 80249B40
  c->r[7]=c->r[8]|c->r[8]; // 80249B44
L_80249B48:;
  cmpu(c,0,c->r[7],c->r[6]); // 80249B48
  if (!crb(c,2)) { IRQCHK(c); goto L_80249B20; } // 80249B4C
  cmps(c,0,(int32_t)c->r[4],0); // 80249B50
  if (!crb(c,1)) { goto L_80249B60; } // 80249B54
  c->r[3]=c->r[31]|c->r[31]; // 80249B58
  c->lr=0x80249B60u; f_8008DE54(c); // 80249B5C
L_80249B60:;
  c->r[3]=c->r[31]|c->r[31]; // 80249B60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80249B64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80249B68
  c->lr=c->r[0]; // 80249B6C
  c->r[1]=c->r[1]+0x00000010u; // 80249B70
  return; // 80249B74
}

// Erase__Q46nw4hbm2ut6detail12LinkListImplFQ56nw4hbm2ut6detail12LinkListImpl8Iterator
void f_80249B78(Ctx* __restrict c) {
  trace_call(0x80249B78u);
  c->r[6]=R32(c->r[4]+0x00000000u); // 80249B78
  c->r[0]=0u+0x00000000u; // 80249B7C
  c->r[5]=R32(c->r[6]+0x00000000u); // 80249B80
  goto L_80249BB0; // 80249B84
L_80249B88:;
  c->r[7]=R32(c->r[6]+0x00000000u); // 80249B88
  c->r[4]=R32(c->r[6]+0x00000004u); // 80249B8C
  W32(c->r[7]+0x00000004u,c->r[4]); // 80249B90
  W32(c->r[4]+0x00000000u,c->r[7]); // 80249B94
  c->r[4]=R32(c->r[3]+0x00000000u); // 80249B98
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80249B9C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80249BA0
  W32(c->r[6]+0x00000000u,c->r[0]); // 80249BA4
  W32(c->r[6]+0x00000004u,c->r[0]); // 80249BA8
  c->r[6]=c->r[7]|c->r[7]; // 80249BAC
L_80249BB0:;
  cmpu(c,0,c->r[6],c->r[5]); // 80249BB0
  if (!crb(c,2)) { IRQCHK(c); goto L_80249B88; } // 80249BB4
  c->r[3]=c->r[5]|c->r[5]; // 80249BB8
  return; // 80249BBC
}

// Insert__Q46nw4hbm2ut6detail12LinkListImplFQ56nw4hbm2ut6detail12LinkListImpl8IteratorPQ36nw4hbm2ut12LinkListNode
void f_80249BC0(Ctx* __restrict c) {
  trace_call(0x80249BC0u);
  c->r[4]=R32(c->r[4]+0x00000000u); // 80249BC0
  c->r[6]=R32(c->r[4]+0x00000004u); // 80249BC4
  W32(c->r[5]+0x00000000u,c->r[4]); // 80249BC8
  W32(c->r[5]+0x00000004u,c->r[6]); // 80249BCC
  W32(c->r[4]+0x00000004u,c->r[5]); // 80249BD0
  W32(c->r[6]+0x00000000u,c->r[5]); // 80249BD4
  c->r[4]=R32(c->r[3]+0x00000000u); // 80249BD8
  c->r[0]=c->r[4]+0x00000001u; // 80249BDC
  W32(c->r[3]+0x00000000u,c->r[0]); // 80249BE0
  c->r[3]=c->r[5]|c->r[5]; // 80249BE4
  return; // 80249BE8
}

// List_Init__Q26nw4hbm2utFPQ36nw4hbm2ut4ListUs
void f_80249BEC(Ctx* __restrict c) {
  trace_call(0x80249BECu);
  c->r[0]=0u+0x00000000u; // 80249BEC
  W16(c->r[3]+0x0000000Au,c->r[4]); // 80249BF0
  W32(c->r[3]+0x00000000u,c->r[0]); // 80249BF4
  W32(c->r[3]+0x00000004u,c->r[0]); // 80249BF8
  W16(c->r[3]+0x00000008u,c->r[0]); // 80249BFC
  return; // 80249C00
}

// List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
void f_80249C04(Ctx* __restrict c) {
  trace_call(0x80249C04u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80249C04
  cmps(c,0,(int32_t)c->r[0],0); // 80249C08
  if (!crb(c,2)) { goto L_80249C3C; } // 80249C0C
  c->r[5]=R16(c->r[3]+0x0000000Au); // 80249C10
  c->r[0]=0u+0x00000000u; // 80249C14
  c->r[5]=c->r[4]+c->r[5]; // 80249C18
  W32(c->r[5]+0x00000004u,c->r[0]); // 80249C1C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80249C20
  c->r[5]=R16(c->r[3]+0x00000008u); // 80249C24
  W32(c->r[3]+0x00000000u,c->r[4]); // 80249C28
  c->r[0]=c->r[5]+0x00000001u; // 80249C2C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80249C30
  W16(c->r[3]+0x00000008u,c->r[0]); // 80249C34
  return; // 80249C38
L_80249C3C:;
  c->r[6]=R16(c->r[3]+0x0000000Au); // 80249C3C
  c->r[0]=0u+0x00000000u; // 80249C40
  c->r[5]=R32(c->r[3]+0x00000004u); // 80249C44
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[5]); c->r[6]=ea;} // 80249C48
  W32(c->r[6]+0x00000004u,c->r[0]); // 80249C4C
  c->r[5]=R32(c->r[3]+0x00000004u); // 80249C50
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80249C54
  c->r[5]=c->r[5]+c->r[0]; // 80249C58
  W32(c->r[5]+0x00000004u,c->r[4]); // 80249C5C
  c->r[5]=R16(c->r[3]+0x00000008u); // 80249C60
  W32(c->r[3]+0x00000004u,c->r[4]); // 80249C64
  c->r[0]=c->r[5]+0x00000001u; // 80249C68
  W16(c->r[3]+0x00000008u,c->r[0]); // 80249C6C
  return; // 80249C70
}

// List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
void f_80249C74(Ctx* __restrict c) {
  trace_call(0x80249C74u);
  c->r[5]=R16(c->r[3]+0x0000000Au); // 80249C74
  c->r[6]=c->r[4]+c->r[5]; // 80249C78
  c->r[4]=R32(c->r[4]+c->r[5]); // 80249C7C
  cmps(c,0,(int32_t)c->r[4],0); // 80249C80
  if (!crb(c,2)) { goto L_80249C94; } // 80249C84
  c->r[0]=R32(c->r[6]+0x00000004u); // 80249C88
  W32(c->r[3]+0x00000000u,c->r[0]); // 80249C8C
  goto L_80249CA0; // 80249C90
L_80249C94:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 80249C94
  c->r[4]=c->r[4]+c->r[5]; // 80249C98
  W32(c->r[4]+0x00000004u,c->r[0]); // 80249C9C
L_80249CA0:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 80249CA0
  cmps(c,0,(int32_t)c->r[5],0); // 80249CA4
  if (!crb(c,2)) { goto L_80249CB8; } // 80249CA8
  c->r[0]=R32(c->r[6]+0x00000000u); // 80249CAC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80249CB0
  goto L_80249CC4; // 80249CB4
L_80249CB8:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 80249CB8
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80249CBC
  W32(c->r[5]+c->r[0],c->r[4]); // 80249CC0
L_80249CC4:;
  c->r[0]=0u+0x00000000u; // 80249CC4
  W32(c->r[6]+0x00000000u,c->r[0]); // 80249CC8
  W32(c->r[6]+0x00000004u,c->r[0]); // 80249CCC
  c->r[4]=R16(c->r[3]+0x00000008u); // 80249CD0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80249CD4
  W16(c->r[3]+0x00000008u,c->r[0]); // 80249CD8
  return; // 80249CDC
}

// List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
void f_80249CE0(Ctx* __restrict c) {
  trace_call(0x80249CE0u);
  cmps(c,0,(int32_t)c->r[4],0); // 80249CE0
  if (!crb(c,2)) { goto L_80249CF0; } // 80249CE4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80249CE8
  return; // 80249CEC
L_80249CF0:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80249CF0
  c->r[3]=c->r[4]+c->r[0]; // 80249CF4
  c->r[3]=R32(c->r[3]+0x00000004u); // 80249CF8
  return; // 80249CFC
}

// List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
void f_80249D00(Ctx* __restrict c) {
  trace_call(0x80249D00u);
  c->r[6]=0u+0x00000000u; // 80249D00
  c->r[5]=0u+0x00000000u; // 80249D04
  goto L_80249D20; // 80249D08
L_80249D0C:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 80249D0C
  if (!crb(c,2)) { goto L_80249D1C; } // 80249D10
  c->r[3]=c->r[5]|c->r[5]; // 80249D14
  return; // 80249D18
L_80249D1C:;
  c->r[6]=c->r[6]+0x00000001u; // 80249D1C
L_80249D20:;
  cmps(c,0,(int32_t)c->r[5],0); // 80249D20
  if (crb(c,2)) { goto L_80249D38; } // 80249D24
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80249D28
  c->r[5]=c->r[5]+c->r[0]; // 80249D2C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80249D30
  goto L_80249D3C; // 80249D34
L_80249D38:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80249D38
L_80249D3C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80249D3C
  if (!crb(c,2)) { IRQCHK(c); goto L_80249D0C; } // 80249D40
  c->r[3]=0u+0x00000000u; // 80249D44
  return; // 80249D48
}

// __ct__Q36nw4hbm2ut7ResFontFv
void f_80249D4C(Ctx* __restrict c) {
  trace_call(0x80249D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249D4C
  c->r[0]=c->lr; // 80249D50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80249D54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80249D58
  c->r[31]=c->r[3]|c->r[3]; // 80249D5C
  c->lr=0x80249D64u; f_8024A050(c); // 80249D60
  c->r[4]=0u+0x802A0000u; // 80249D64
  c->r[3]=c->r[31]|c->r[31]; // 80249D68
  c->r[4]=c->r[4]+0x00001C38u; // 80249D6C
  W32(c->r[31]+0x00000000u,c->r[4]); // 80249D70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80249D74
  c->r[0]=R32(c->r[1]+0x00000014u); // 80249D78
  c->lr=c->r[0]; // 80249D7C
  c->r[1]=c->r[1]+0x00000010u; // 80249D80
  return; // 80249D84
}

// __dt__Q36nw4hbm2ut7ResFontFv
void f_80249D88(Ctx* __restrict c) {
  trace_call(0x80249D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249D88
  c->r[0]=c->lr; // 80249D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80249D90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80249D94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80249D98
  c->r[31]=c->r[4]|c->r[4]; // 80249D9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80249DA0
  c->r[30]=c->r[3]|c->r[3]; // 80249DA4
  if (crb(c,2)) { goto L_80249DC4; } // 80249DA8
  c->r[4]=0u+0x00000000u; // 80249DAC
  c->lr=0x80249DB4u; f_8024A094(c); // 80249DB0
  cmps(c,0,(int32_t)c->r[31],0); // 80249DB4
  if (!crb(c,1)) { goto L_80249DC4; } // 80249DB8
  c->r[3]=c->r[30]|c->r[30]; // 80249DBC
  c->lr=0x80249DC4u; f_8008DE54(c); // 80249DC0
L_80249DC4:;
  c->r[3]=c->r[30]|c->r[30]; // 80249DC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80249DC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80249DCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80249DD0
  c->lr=c->r[0]; // 80249DD4
  c->r[1]=c->r[1]+0x00000010u; // 80249DD8
  return; // 80249DDC
}

// SetResource__Q36nw4hbm2ut7ResFontFPv
void f_80249DE0(Ctx* __restrict c) {
  trace_call(0x80249DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249DE0
  c->r[0]=c->lr; // 80249DE4
  c->r[5]=0u+0x00000000u; // 80249DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80249DEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80249DF0
  c->r[31]=c->r[4]|c->r[4]; // 80249DF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80249DF8
  c->r[30]=c->r[3]|c->r[3]; // 80249DFC
  c->r[0]=R32(c->r[3]+0x00000010u); // 80249E00
  cmps(c,0,(int32_t)c->r[0],0); // 80249E04
  if (crb(c,2)) { goto L_80249E14; } // 80249E08
  c->r[3]=0u+0x00000000u; // 80249E0C
  goto L_80249F0C; // 80249E10
L_80249E14:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80249E14
  c->r[0]=c->r[3]+0xADBA0000u; // 80249E18
  cmpu(c,0,c->r[0],0x00004E55u); // 80249E1C
  if (!crb(c,2)) { goto L_80249E64; } // 80249E20
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 80249E24
  c->r[3]=R16(c->r[4]+0x0000000Eu); // 80249E28
  c->r[4]=c->r[4]+c->r[0]; // 80249E2C
  c->ctr=c->r[3]; // 80249E30
  cmps(c,0,(int32_t)c->r[3],0); // 80249E34
  if (!crb(c,1)) { goto L_80249ECC; } // 80249E38
L_80249E3C:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80249E3C
  c->r[0]=c->r[3]+0xB9B70000u; // 80249E40
  cmpu(c,0,c->r[0],0x00004E46u); // 80249E44
  if (!crb(c,2)) { goto L_80249E54; } // 80249E48
  c->r[5]=c->r[4]+0x00000008u; // 80249E4C
  goto L_80249ECC; // 80249E50
L_80249E54:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 80249E54
  c->r[4]=c->r[4]+c->r[0]; // 80249E58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80249E3C; } // 80249E5C
  goto L_80249ECC; // 80249E60
L_80249E64:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 80249E64
  cmpu(c,0,c->r[0],0x00000104u); // 80249E68
  if (!crb(c,2)) { goto L_80249E98; } // 80249E6C
  c->r[4]=0u+0x52460000u; // 80249E70
  c->r[3]=c->r[31]|c->r[31]; // 80249E74
  c->r[4]=c->r[4]+0x00004E54u; // 80249E78
  c->r[5]=0u+0x00000104u; // 80249E7C
  c->r[6]=0u+0x00000002u; // 80249E80
  c->lr=0x80249E88u; f_80247DD8(c); // 80249E84
  cmps(c,0,(int32_t)c->r[3],0); // 80249E88
  if (!crb(c,2)) { goto L_80249EC0; } // 80249E8C
  c->r[3]=0u+0x00000000u; // 80249E90
  goto L_80249F0C; // 80249E94
L_80249E98:;
  c->r[4]=0u+0x52460000u; // 80249E98
  c->r[3]=c->r[31]|c->r[31]; // 80249E9C
  c->r[4]=c->r[4]+0x00004E54u; // 80249EA0
  c->r[5]=0u+0x00000102u; // 80249EA4
  c->r[6]=0u+0x00000002u; // 80249EA8
  c->lr=0x80249EB0u; f_80247DD8(c); // 80249EAC
  cmps(c,0,(int32_t)c->r[3],0); // 80249EB0
  if (!crb(c,2)) { goto L_80249EC0; } // 80249EB4
  c->r[3]=0u+0x00000000u; // 80249EB8
  goto L_80249F0C; // 80249EBC
L_80249EC0:;
  c->r[3]=c->r[31]|c->r[31]; // 80249EC0
  c->lr=0x80249EC8u; f_80249F24(c); // 80249EC4
  c->r[5]=c->r[3]|c->r[3]; // 80249EC8
L_80249ECC:;
  cmps(c,0,(int32_t)c->r[5],0); // 80249ECC
  if (!crb(c,2)) { goto L_80249EDC; } // 80249ED0
  c->r[3]=0u+0x00000000u; // 80249ED4
  goto L_80249F0C; // 80249ED8
L_80249EDC:;
  c->r[3]=c->r[30]|c->r[30]; // 80249EDC
  c->r[4]=c->r[31]|c->r[31]; // 80249EE0
  c->lr=0x80249EE8u; f_8024A0D4(c); // 80249EE4
  c->r[12]=R32(c->r[30]+0x00000000u); // 80249EE8
  c->r[3]=c->r[30]|c->r[30]; // 80249EEC
  c->r[12]=R32(c->r[12]+0x00000054u); // 80249EF0
  c->ctr=c->r[12]; // 80249EF4
  if (true) { c->lr=0x80249EFCu; dispatch(c,c->ctr); } // 80249EF8
  c->r[4]=c->r[3]|c->r[3]; // 80249EFC
  c->r[3]=c->r[30]|c->r[30]; // 80249F00
  c->lr=0x80249F08u; f_80249A4C(c); // 80249F04
  c->r[3]=0u+0x00000001u; // 80249F08
L_80249F0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80249F0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80249F10
  c->r[30]=R32(c->r[1]+0x00000008u); // 80249F14
  c->lr=c->r[0]; // 80249F18
  c->r[1]=c->r[1]+0x00000010u; // 80249F1C
  return; // 80249F20
}

// Rebuild__Q36nw4hbm2ut7ResFontFPQ36nw4hbm2ut16BinaryFileHeader
void f_80249F24(Ctx* __restrict c) {
  trace_call(0x80249F24u);
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 80249F24
  c->r[4]=0u+0x46490000u; // 80249F28
  c->r[11]=c->r[4]+0x00004E46u; // 80249F2C
  c->r[5]=0u+0x00000000u; // 80249F30
  c->r[4]=c->r[3]+c->r[0]; // 80249F34
  c->r[6]=0u+0x00000000u; // 80249F38
  c->r[8]=0u+0x54470000u; // 80249F3C
  c->r[10]=0u+0x43570000u; // 80249F40
  c->r[9]=0u+0x434D0000u; // 80249F44
  c->r[7]=0u+0x474C0000u; // 80249F48
  goto L_8024A030; // 80249F4C
L_80249F50:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 80249F50
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[11]); // 80249F54
  if (crb(c,2)) { goto L_80249FA0; } // 80249F58
  if (!crb(c,0)) { goto L_80249F80; } // 80249F5C
  c->r[0]=c->r[10]+0x00004448u; // 80249F60
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 80249F64
  if (crb(c,2)) { goto L_80249FEC; } // 80249F68
  if (!crb(c,0)) { goto L_8024A01C; } // 80249F6C
  c->r[0]=c->r[9]+0x00004150u; // 80249F70
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 80249F74
  if (crb(c,2)) { goto L_8024A004; } // 80249F78
  goto L_8024A01C; // 80249F7C
L_80249F80:;
  c->r[0]=c->r[8]+0x00004C50u; // 80249F80
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 80249F84
  if (crb(c,2)) { goto L_80249FDC; } // 80249F88
  if (!crb(c,0)) { goto L_8024A01C; } // 80249F8C
  c->r[0]=c->r[7]+0x00004752u; // 80249F90
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 80249F94
  if (crb(c,2)) { goto L_8024A024; } // 80249F98
  goto L_8024A01C; // 80249F9C
L_80249FA0:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 80249FA0
  c->r[5]=c->r[4]+0x00000008u; // 80249FA4
  c->r[0]=c->r[3]+c->r[0]; // 80249FA8
  W32(c->r[4]+0x00000010u,c->r[0]); // 80249FAC
  c->r[0]=R32(c->r[4]+0x00000014u); // 80249FB0
  cmps(c,0,(int32_t)c->r[0],0); // 80249FB4
  if (crb(c,2)) { goto L_80249FC4; } // 80249FB8
  c->r[0]=c->r[3]+c->r[0]; // 80249FBC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80249FC0
L_80249FC4:;
  c->r[0]=R32(c->r[5]+0x00000010u); // 80249FC4
  cmps(c,0,(int32_t)c->r[0],0); // 80249FC8
  if (crb(c,2)) { goto L_8024A024; } // 80249FCC
  c->r[0]=c->r[3]+c->r[0]; // 80249FD0
  W32(c->r[5]+0x00000010u,c->r[0]); // 80249FD4
  goto L_8024A024; // 80249FD8
L_80249FDC:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80249FDC
  c->r[0]=c->r[3]+c->r[0]; // 80249FE0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80249FE4
  goto L_8024A024; // 80249FE8
L_80249FEC:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80249FEC
  cmps(c,0,(int32_t)c->r[0],0); // 80249FF0
  if (crb(c,2)) { goto L_8024A024; } // 80249FF4
  c->r[0]=c->r[3]+c->r[0]; // 80249FF8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80249FFC
  goto L_8024A024; // 8024A000
L_8024A004:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 8024A004
  cmps(c,0,(int32_t)c->r[0],0); // 8024A008
  if (crb(c,2)) { goto L_8024A024; } // 8024A00C
  c->r[0]=c->r[3]+c->r[0]; // 8024A010
  W32(c->r[4]+0x00000010u,c->r[0]); // 8024A014
  goto L_8024A024; // 8024A018
L_8024A01C:;
  c->r[3]=0u+0x00000000u; // 8024A01C
  return; // 8024A020
L_8024A024:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8024A024
  c->r[6]=c->r[6]+0x00000001u; // 8024A028
  c->r[4]=c->r[4]+c->r[0]; // 8024A02C
L_8024A030:;
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 8024A030
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8024A034
  if (crb(c,0)) { IRQCHK(c); goto L_80249F50; } // 8024A038
  c->r[4]=0u+0x52460000u; // 8024A03C
  c->r[0]=c->r[4]+0x00004E55u; // 8024A040
  W32(c->r[3]+0x00000000u,c->r[0]); // 8024A044
  c->r[3]=c->r[5]|c->r[5]; // 8024A048
  return; // 8024A04C
}

// __ct__Q46nw4hbm2ut6detail11ResFontBaseFv
void f_8024A050(Ctx* __restrict c) {
  trace_call(0x8024A050u);
  c->r[5]=0u+0x802A0000u; // 8024A050
  c->r[4]=0u+0x802A0000u; // 8024A054
  c->r[5]=c->r[5]+0x00001D80u; // 8024A058
  c->r[7]=0u+0x802A0000u; // 8024A05C
  W32(c->r[3]+0x00000000u,c->r[5]); // 8024A060
  c->r[4]=c->r[4]+0x00001D28u; // 8024A064
  c->r[0]=0u+0x00000000u; // 8024A068
  {uint32_t ea=c->r[7]+0x00001D18u; c->r[6]=R32(ea); c->r[7]=ea;} // 8024A06C
  c->r[5]=R32(c->r[7]+0x00000004u); // 8024A070
  W32(c->r[3]+0x00000004u,c->r[6]); // 8024A074
  W32(c->r[3]+0x00000008u,c->r[5]); // 8024A078
  c->r[5]=R32(c->r[7]+0x00000008u); // 8024A07C
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8024A080
  W32(c->r[3]+0x00000000u,c->r[4]); // 8024A084
  W32(c->r[3]+0x00000010u,c->r[0]); // 8024A088
  W32(c->r[3]+0x00000014u,c->r[0]); // 8024A08C
  return; // 8024A090
}

// __dt__Q46nw4hbm2ut6detail11ResFontBaseFv
void f_8024A094(Ctx* __restrict c) {
  trace_call(0x8024A094u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A094
  c->r[0]=c->lr; // 8024A098
  cmps(c,0,(int32_t)c->r[3],0); // 8024A09C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024A0A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024A0A4
  c->r[31]=c->r[3]|c->r[3]; // 8024A0A8
  if (crb(c,2)) { goto L_8024A0BC; } // 8024A0AC
  cmps(c,0,(int32_t)c->r[4],0); // 8024A0B0
  if (!crb(c,1)) { goto L_8024A0BC; } // 8024A0B4
  c->lr=0x8024A0BCu; f_8008DE54(c); // 8024A0B8
L_8024A0BC:;
  c->r[3]=c->r[31]|c->r[31]; // 8024A0BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024A0C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024A0C4
  c->lr=c->r[0]; // 8024A0C8
  c->r[1]=c->r[1]+0x00000010u; // 8024A0CC
  return; // 8024A0D0
}

// SetResourceBuffer__Q46nw4hbm2ut6detail11ResFontBaseFPvPQ36nw4hbm2ut15FontInformation
void f_8024A0D4(Ctx* __restrict c) {
  trace_call(0x8024A0D4u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 8024A0D4
  W32(c->r[3]+0x00000014u,c->r[5]); // 8024A0D8
  return; // 8024A0DC
}

// GetWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A0E0(Ctx* __restrict c) {
  trace_call(0x8024A0E0u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A0E0
  c->r[3]=R8(c->r[3]+0x00000015u); // 8024A0E4
  return; // 8024A0E8
}

// GetHeight__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A0EC(Ctx* __restrict c) {
  trace_call(0x8024A0ECu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A0EC
  c->r[3]=R8(c->r[3]+0x00000014u); // 8024A0F0
  return; // 8024A0F4
}

// GetAscent__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A0F8(Ctx* __restrict c) {
  trace_call(0x8024A0F8u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A0F8
  c->r[3]=R8(c->r[3]+0x00000016u); // 8024A0FC
  return; // 8024A100
}

// GetDescent__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A104(Ctx* __restrict c) {
  trace_call(0x8024A104u);
  c->r[4]=R32(c->r[3]+0x00000014u); // 8024A104
  c->r[3]=R8(c->r[4]+0x00000016u); // 8024A108
  c->r[0]=R8(c->r[4]+0x00000014u); // 8024A10C
  c->r[3]=c->r[0]-c->r[3]; // 8024A110
  return; // 8024A114
}

// GetBaselinePos__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A118(Ctx* __restrict c) {
  trace_call(0x8024A118u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A118
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024A11C
  c->r[3]=R8(c->r[3]+0x00000002u); // 8024A120
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8024A124
  return; // 8024A128
}

// GetCellHeight__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A12C(Ctx* __restrict c) {
  trace_call(0x8024A12Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A12C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024A130
  c->r[3]=R8(c->r[3]+0x00000001u); // 8024A134
  return; // 8024A138
}

// GetCellWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A13C(Ctx* __restrict c) {
  trace_call(0x8024A13Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A13C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024A140
  c->r[3]=R8(c->r[3]+0x00000000u); // 8024A144
  return; // 8024A148
}

// GetMaxCharWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A14C(Ctx* __restrict c) {
  trace_call(0x8024A14Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A14C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024A150
  c->r[3]=R8(c->r[3]+0x00000003u); // 8024A154
  return; // 8024A158
}

// GetType__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A15C(Ctx* __restrict c) {
  trace_call(0x8024A15Cu);
  c->r[3]=0u+0x00000002u; // 8024A15C
  return; // 8024A160
}

// GetTextureFormat__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A164(Ctx* __restrict c) {
  trace_call(0x8024A164u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A164
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024A168
  c->r[3]=R16(c->r[3]+0x0000000Au); // 8024A16C
  return; // 8024A170
}

// GetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A174(Ctx* __restrict c) {
  trace_call(0x8024A174u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A174
  c->r[3]=R8(c->r[3]+0x00000001u); // 8024A178
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8024A17C
  return; // 8024A180
}

// GetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A184(Ctx* __restrict c) {
  trace_call(0x8024A184u);
  c->r[4]=R32(c->r[3]+0x00000014u); // 8024A184
  c->r[0]=R16(c->r[4]+0x00000004u); // 8024A188
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 8024A18C
  c->r[0]=R8(c->r[4]+0x00000006u); // 8024A190
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 8024A194
  return; // 8024A198
}

// SetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseFRCQ36nw4hbm2ut10CharWidths
void f_8024A19C(Ctx* __restrict c) {
  trace_call(0x8024A19Cu);
  c->r[5]=R32(c->r[3]+0x00000014u); // 8024A19C
  c->r[0]=R8(c->r[4]+0x00000000u); // 8024A1A0
  c->r[3]=R8(c->r[4]+0x00000001u); // 8024A1A4
  W8(c->r[5]+0x00000004u,c->r[0]); // 8024A1A8
  c->r[0]=R8(c->r[4]+0x00000002u); // 8024A1AC
  W8(c->r[5]+0x00000005u,c->r[3]); // 8024A1B0
  W8(c->r[5]+0x00000006u,c->r[0]); // 8024A1B4
  return; // 8024A1B8
}

// SetAlternateChar__Q46nw4hbm2ut6detail11ResFontBaseFUs
void f_8024A1BC(Ctx* __restrict c) {
  trace_call(0x8024A1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A1BC
  c->r[0]=c->lr; // 8024A1C0
  c->r[5]=c->r[4]|c->r[4]; // 8024A1C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024A1C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024A1CC
  c->r[31]=c->r[3]|c->r[3]; // 8024A1D0
  c->r[6]=R32(c->r[3]+0x00000014u); // 8024A1D4
  c->r[6]=R32(c->r[6]+0x00000010u); // 8024A1D8
  goto L_8024A210; // 8024A1DC
L_8024A1E0:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 8024A1E0
  cmpu(c,0,c->r[0],c->r[4]); // 8024A1E4
  if (crb(c,1)) { goto L_8024A20C; } // 8024A1E8
  c->r[0]=R16(c->r[6]+0x00000002u); // 8024A1EC
  cmpu(c,0,c->r[4],c->r[0]); // 8024A1F0
  if (crb(c,1)) { goto L_8024A20C; } // 8024A1F4
  c->r[3]=c->r[31]|c->r[31]; // 8024A1F8
  c->r[4]=c->r[6]|c->r[6]; // 8024A1FC
  c->lr=0x8024A204u; f_8024A448(c); // 8024A200
  c->r[5]=c->r[3]|c->r[3]; // 8024A204
  goto L_8024A220; // 8024A208
L_8024A20C:;
  c->r[6]=R32(c->r[6]+0x00000008u); // 8024A20C
L_8024A210:;
  cmps(c,0,(int32_t)c->r[6],0); // 8024A210
  if (!crb(c,2)) { IRQCHK(c); goto L_8024A1E0; } // 8024A214
  c->r[3]=0u+0x00010000u; // 8024A218
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8024A21C
L_8024A220:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 8024A220
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8024A224
  if (crb(c,2)) { goto L_8024A23C; } // 8024A228
  c->r[4]=R32(c->r[31]+0x00000014u); // 8024A22C
  c->r[3]=0u+0x00000001u; // 8024A230
  W16(c->r[4]+0x00000002u,c->r[5]); // 8024A234
  goto L_8024A240; // 8024A238
L_8024A23C:;
  c->r[3]=0u+0x00000000u; // 8024A23C
L_8024A240:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024A240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024A244
  c->lr=c->r[0]; // 8024A248
  c->r[1]=c->r[1]+0x00000010u; // 8024A24C
  return; // 8024A250
}

// SetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseFi
void f_8024A254(Ctx* __restrict c) {
  trace_call(0x8024A254u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A254
  W8(c->r[3]+0x00000001u,c->r[4]); // 8024A258
  return; // 8024A25C
}

// GetCharWidth__Q46nw4hbm2ut6detail11ResFontBaseCFUs
void f_8024A260(Ctx* __restrict c) {
  trace_call(0x8024A260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A260
  c->r[0]=c->lr; // 8024A264
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024A268
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024A26C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8024A270
  c->ctr=c->r[12]; // 8024A274
  if (true) { c->lr=0x8024A27Cu; dispatch(c,c->ctr); } // 8024A278
  c->r[0]=rotl(c->r[3],8)&0x000000FFu; // 8024A27C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8024A280
  c->r[0]=rotl(c->r[3],16)&0x000000FFu; // 8024A284
  W8(c->r[1]+0x00000009u,c->r[0]); // 8024A288
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 8024A28C
  c->r[3]=c->r[0]|c->r[0]; // 8024A290
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8024A294
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8024A298
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024A29C
  c->lr=c->r[0]; // 8024A2A0
  c->r[1]=c->r[1]+0x00000010u; // 8024A2A4
  return; // 8024A2A8
}

// GetCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFUs
void f_8024A2AC(Ctx* __restrict c) {
  trace_call(0x8024A2ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A2AC
  c->r[0]=c->lr; // 8024A2B0
  c->r[6]=R32(c->r[3]+0x00000014u); // 8024A2B4
  c->r[5]=c->r[4]|c->r[4]; // 8024A2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024A2BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024A2C0
  c->r[31]=c->r[3]|c->r[3]; // 8024A2C4
  c->r[6]=R32(c->r[6]+0x00000010u); // 8024A2C8
  goto L_8024A2FC; // 8024A2CC
L_8024A2D0:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 8024A2D0
  cmpu(c,0,c->r[0],c->r[4]); // 8024A2D4
  if (crb(c,1)) { goto L_8024A2F8; } // 8024A2D8
  c->r[0]=R16(c->r[6]+0x00000002u); // 8024A2DC
  cmpu(c,0,c->r[4],c->r[0]); // 8024A2E0
  if (crb(c,1)) { goto L_8024A2F8; } // 8024A2E4
  c->r[3]=c->r[31]|c->r[31]; // 8024A2E8
  c->r[4]=c->r[6]|c->r[6]; // 8024A2EC
  c->lr=0x8024A2F4u; f_8024A448(c); // 8024A2F0
  goto L_8024A30C; // 8024A2F4
L_8024A2F8:;
  c->r[6]=R32(c->r[6]+0x00000008u); // 8024A2F8
L_8024A2FC:;
  cmps(c,0,(int32_t)c->r[6],0); // 8024A2FC
  if (!crb(c,2)) { IRQCHK(c); goto L_8024A2D0; } // 8024A300
  c->r[3]=0u+0x00010000u; // 8024A304
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8024A308
L_8024A30C:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8024A30C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8024A310
  if (crb(c,2)) { goto L_8024A31C; } // 8024A314
  goto L_8024A324; // 8024A318
L_8024A31C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8024A31C
  c->r[3]=R16(c->r[3]+0x00000002u); // 8024A320
L_8024A324:;
  c->r[6]=R32(c->r[31]+0x00000014u); // 8024A324
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 8024A328
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8024A32C
  goto L_8024A368; // 8024A330
L_8024A334:;
  c->r[5]=R16(c->r[4]+0x00000000u); // 8024A334
  cmpu(c,0,c->r[5],c->r[3]); // 8024A338
  if (crb(c,1)) { goto L_8024A364; } // 8024A33C
  c->r[0]=R16(c->r[4]+0x00000002u); // 8024A340
  cmpu(c,0,c->r[3],c->r[0]); // 8024A344
  if (crb(c,1)) { goto L_8024A364; } // 8024A348
  c->r[3]=c->r[3]-c->r[5]; // 8024A34C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8024A350
  c->r[0]=c->r[0]-c->r[3]; // 8024A354
  c->r[3]=c->r[4]+c->r[0]; // 8024A358
  c->r[4]=c->r[3]+0x00000008u; // 8024A35C
  goto L_8024A374; // 8024A360
L_8024A364:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 8024A364
L_8024A368:;
  cmps(c,0,(int32_t)c->r[4],0); // 8024A368
  if (!crb(c,2)) { IRQCHK(c); goto L_8024A334; } // 8024A36C
  c->r[4]=c->r[6]+0x00000004u; // 8024A370
L_8024A374:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 8024A374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024A378
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 8024A37C
  c->r[0]=R8(c->r[4]+0x00000002u); // 8024A380
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 8024A384
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024A388
  c->lr=c->r[0]; // 8024A38C
  c->r[1]=c->r[1]+0x00000010u; // 8024A390
  return; // 8024A394
}

// GetGlyph__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs
void f_8024A398(Ctx* __restrict c) {
  trace_call(0x8024A398u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A398
  c->r[0]=c->lr; // 8024A39C
  c->r[6]=R32(c->r[3]+0x00000014u); // 8024A3A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024A3A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024A3A8
  c->r[31]=c->r[4]|c->r[4]; // 8024A3AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024A3B0
  c->r[30]=c->r[3]|c->r[3]; // 8024A3B4
  c->r[4]=R32(c->r[6]+0x00000010u); // 8024A3B8
  goto L_8024A3EC; // 8024A3BC
L_8024A3C0:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 8024A3C0
  cmpu(c,0,c->r[0],c->r[5]); // 8024A3C4
  if (crb(c,1)) { goto L_8024A3E8; } // 8024A3C8
  c->r[0]=R16(c->r[4]+0x00000002u); // 8024A3CC
  cmpu(c,0,c->r[5],c->r[0]); // 8024A3D0
  if (crb(c,1)) { goto L_8024A3E8; } // 8024A3D4
  c->r[3]=c->r[30]|c->r[30]; // 8024A3D8
  c->lr=0x8024A3E0u; f_8024A448(c); // 8024A3DC
  c->r[5]=c->r[3]|c->r[3]; // 8024A3E0
  goto L_8024A3FC; // 8024A3E4
L_8024A3E8:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 8024A3E8
L_8024A3EC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8024A3EC
  if (!crb(c,2)) { IRQCHK(c); goto L_8024A3C0; } // 8024A3F0
  c->r[3]=0u+0x00010000u; // 8024A3F4
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8024A3F8
L_8024A3FC:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 8024A3FC
  c->r[3]=c->r[30]|c->r[30]; // 8024A400
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8024A404
  c->r[4]=c->r[31]|c->r[31]; // 8024A408
  if (crb(c,2)) { goto L_8024A414; } // 8024A40C
  goto L_8024A41C; // 8024A410
L_8024A414:;
  c->r[5]=R32(c->r[30]+0x00000014u); // 8024A414
  c->r[5]=R16(c->r[5]+0x00000002u); // 8024A418
L_8024A41C:;
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 8024A41C
  c->lr=0x8024A424u; f_8024A51C(c); // 8024A420
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024A424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024A428
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024A42C
  c->lr=c->r[0]; // 8024A430
  c->r[1]=c->r[1]+0x00000010u; // 8024A434
  return; // 8024A438
}

// GetEncoding__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_8024A43C(Ctx* __restrict c) {
  trace_call(0x8024A43Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8024A43C
  c->r[3]=R8(c->r[3]+0x00000007u); // 8024A440
  return; // 8024A444
}

// FindGlyphIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPCQ36nw4hbm2ut11FontCodeMapUs
void f_8024A448(Ctx* __restrict c) {
  trace_call(0x8024A448u);
  c->r[0]=R16(c->r[4]+0x00000004u); // 8024A448
  c->r[3]=0u+0x00010000u; // 8024A44C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8024A450
  cmps(c,0,(int32_t)c->r[0],1); // 8024A454
  if (crb(c,2)) { goto L_8024A490; } // 8024A458
  if (!crb(c,0)) { goto L_8024A46C; } // 8024A45C
  cmps(c,0,(int32_t)c->r[0],0); // 8024A460
  if (!crb(c,0)) { goto L_8024A478; } // 8024A464
  return; // 8024A468
L_8024A46C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8024A46C
  if (!crb(c,0)) return; // 8024A470
  goto L_8024A4A8; // 8024A474
L_8024A478:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 8024A478
  c->r[3]=R16(c->r[4]+0x0000000Cu); // 8024A47C
  c->r[0]=c->r[5]-c->r[0]; // 8024A480
  c->r[0]=c->r[3]+c->r[0]; // 8024A484
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8024A488
  return; // 8024A48C
L_8024A490:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 8024A490
  c->r[0]=c->r[5]-c->r[0]; // 8024A494
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024A498
  c->r[3]=c->r[4]+c->r[0]; // 8024A49C
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 8024A4A0
  return; // 8024A4A4
L_8024A4A8:;
  c->r[6]=c->r[4]+0x0000000Cu; // 8024A4A8
  c->r[4]=R16(c->r[4]+0x0000000Cu); // 8024A4AC
  c->r[7]=c->r[6]+0x00000002u; // 8024A4B0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8024A4B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024A4B8
  c->r[4]=c->r[6]+c->r[0]; // 8024A4BC
  c->r[6]=c->r[4]+0x00000002u; // 8024A4C0
  goto L_8024A510; // 8024A4C4
L_8024A4C8:;
  c->r[0]=c->r[6]-c->r[7]; // 8024A4C8
  c->r[0]=sraw(c,c->r[0],2); // 8024A4CC
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8024A4D0
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8024A4D4
  c->r[0]=c->r[0]+c->r[4]; // 8024A4D8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 8024A4DC
  c->r[4]=c->r[7]+c->r[0]; // 8024A4E0
  c->r[0]=R16(c->r[7]+c->r[0]); // 8024A4E4
  cmpu(c,0,c->r[0],c->r[5]); // 8024A4E8
  if (!crb(c,0)) { goto L_8024A4F8; } // 8024A4EC
  c->r[7]=c->r[4]+0x00000004u; // 8024A4F0
  goto L_8024A510; // 8024A4F4
L_8024A4F8:;
  cmpu(c,0,c->r[5],c->r[0]); // 8024A4F8
  if (!crb(c,0)) { goto L_8024A508; } // 8024A4FC
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 8024A500
  goto L_8024A510; // 8024A504
L_8024A508:;
  c->r[3]=R16(c->r[4]+0x00000002u); // 8024A508
  return; // 8024A50C
L_8024A510:;
  cmpu(c,0,c->r[7],c->r[6]); // 8024A510
  if (!crb(c,1)) { IRQCHK(c); goto L_8024A4C8; } // 8024A514
  return; // 8024A518
}

// GetGlyphFromIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs
void f_8024A51C(Ctx* __restrict c) {
  trace_call(0x8024A51Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A51C
  c->r[12]=R32(c->r[3]+0x00000014u); // 8024A520
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024A524
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024A528
  c->r[3]=R32(c->r[12]+0x00000008u); // 8024A52C
  c->r[31]=R16(c->r[3]+0x0000000Cu); // 8024A530
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 8024A534
  c->r[6]=R8(c->r[3]+0x00000000u); // 8024A538
  c->r[9]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 8024A53C
  c->r[7]=R8(c->r[3]+0x00000001u); // 8024A540
  c->r[8]=c->r[6]+0x00000001u; // 8024A544
  c->r[0]=R32(c->r[3]+0x00000004u); // 8024A548
  c->r[6]=R32(c->r[3]+0x00000014u); // 8024A54C
  c->r[7]=c->r[7]+0x00000001u; // 8024A550
  c->r[11]=divwu(c->r[5],c->r[9]); // 8024A554
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[9]); // 8024A558
  c->r[30]=c->r[5]-c->r[9]; // 8024A55C
  c->r[10]=divwu(c->r[30],c->r[31]); // 8024A560
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[31]); // 8024A564
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 8024A568
  c->r[9]=c->r[30]-c->r[9]; // 8024A56C
  c->r[0]=c->r[6]+c->r[0]; // 8024A570
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[8]); // 8024A574
  W32(c->r[4]+0x00000000u,c->r[0]); // 8024A578
  c->r[6]=R32(c->r[12]+0x0000000Cu); // 8024A57C
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 8024A580
  goto L_8024A5BC; // 8024A584
L_8024A588:;
  c->r[7]=R16(c->r[6]+0x00000000u); // 8024A588
  cmpu(c,0,c->r[7],c->r[5]); // 8024A58C
  if (crb(c,1)) { goto L_8024A5B8; } // 8024A590
  c->r[0]=R16(c->r[6]+0x00000002u); // 8024A594
  cmpu(c,0,c->r[5],c->r[0]); // 8024A598
  if (crb(c,1)) { goto L_8024A5B8; } // 8024A59C
  c->r[5]=c->r[5]-c->r[7]; // 8024A5A0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8024A5A4
  c->r[0]=c->r[0]-c->r[5]; // 8024A5A8
  c->r[5]=c->r[6]+c->r[0]; // 8024A5AC
  c->r[7]=c->r[5]+0x00000008u; // 8024A5B0
  goto L_8024A5C8; // 8024A5B4
L_8024A5B8:;
  c->r[6]=R32(c->r[6]+0x00000004u); // 8024A5B8
L_8024A5BC:;
  cmps(c,0,(int32_t)c->r[6],0); // 8024A5BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8024A588; } // 8024A5C0
  c->r[7]=c->r[12]+0x00000004u; // 8024A5C4
L_8024A5C8:;
  c->r[6]=R8(c->r[7]+0x00000000u); // 8024A5C8
  c->r[5]=c->r[8]+0x00000001u; // 8024A5CC
  c->r[0]=c->r[9]+0x00000001u; // 8024A5D0
  W8(c->r[4]+0x00000004u,c->r[6]); // 8024A5D4
  c->r[6]=R8(c->r[7]+0x00000001u); // 8024A5D8
  W8(c->r[4]+0x00000005u,c->r[6]); // 8024A5DC
  c->r[6]=R8(c->r[7]+0x00000002u); // 8024A5E0
  W8(c->r[4]+0x00000006u,c->r[6]); // 8024A5E4
  c->r[6]=R8(c->r[3]+0x00000001u); // 8024A5E8
  W8(c->r[4]+0x00000007u,c->r[6]); // 8024A5EC
  c->r[6]=R16(c->r[3]+0x0000000Au); // 8024A5F0
  W32(c->r[4]+0x00000008u,c->r[6]); // 8024A5F4
  c->r[6]=R16(c->r[3]+0x00000010u); // 8024A5F8
  W16(c->r[4]+0x0000000Cu,c->r[6]); // 8024A5FC
  c->r[3]=R16(c->r[3]+0x00000012u); // 8024A600
  W16(c->r[4]+0x0000000Eu,c->r[3]); // 8024A604
  W16(c->r[4]+0x00000010u,c->r[5]); // 8024A608
  W16(c->r[4]+0x00000012u,c->r[0]); // 8024A60C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024A610
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024A614
  c->r[1]=c->r[1]+0x00000010u; // 8024A618
  return; // 8024A61C
}

// __ct__Q36nw4hbm2ut19TagProcessorBase<c>Fv
void f_8024A620(Ctx* __restrict c) {
  trace_call(0x8024A620u);
  c->r[4]=0u+0x802A0000u; // 8024A620
  c->r[4]=c->r[4]+0x00001E20u; // 8024A624
  W32(c->r[3]+0x00000000u,c->r[4]); // 8024A628
  return; // 8024A62C
}

// __dt__Q36nw4hbm2ut19TagProcessorBase<c>Fv
void f_8024A630(Ctx* __restrict c) {
  trace_call(0x8024A630u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A630
  c->r[0]=c->lr; // 8024A634
  cmps(c,0,(int32_t)c->r[3],0); // 8024A638
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024A63C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024A640
  c->r[31]=c->r[3]|c->r[3]; // 8024A644
  if (crb(c,2)) { goto L_8024A658; } // 8024A648
  cmps(c,0,(int32_t)c->r[4],0); // 8024A64C
  if (!crb(c,1)) { goto L_8024A658; } // 8024A650
  c->lr=0x8024A658u; f_8008DE54(c); // 8024A654
L_8024A658:;
  c->r[3]=c->r[31]|c->r[31]; // 8024A658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024A65C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024A660
  c->lr=c->r[0]; // 8024A664
  c->r[1]=c->r[1]+0x00000010u; // 8024A668
  return; // 8024A66C
}

// Process__Q36nw4hbm2ut19TagProcessorBase<c>FUsPQ36nw4hbm2ut15PrintContext<c>
void f_8024A670(Ctx* __restrict c) {
  trace_call(0x8024A670u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A670
  c->r[0]=c->lr; // 8024A674
  W32(c->r[1]+0x00000054u,c->r[0]); // 8024A678
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8024A67C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8024A680
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8024A684
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8024A688
  cmps(c,0,(int32_t)c->r[4],10); // 8024A68C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8024A690
  W32(c->r[1]+0x00000028u,c->r[30]); // 8024A694
  W32(c->r[1]+0x00000024u,c->r[29]); // 8024A698
  c->r[29]=c->r[5]|c->r[5]; // 8024A69C
  if (crb(c,2)) { goto L_8024A6B4; } // 8024A6A0
  if (!crb(c,0)) { goto L_8024A7A0; } // 8024A6A4
  cmps(c,0,(int32_t)c->r[4],9); // 8024A6A8
  if (!crb(c,0)) { goto L_8024A6E8; } // 8024A6AC
  goto L_8024A7A0; // 8024A6B0
L_8024A6B4:;
  c->r[31]=R32(c->r[5]+0x00000000u); // 8024A6B4
  {uint32_t ea=c->r[5]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 8024A6B8
  c->r[3]=c->r[31]|c->r[31]; // 8024A6BC
  c->lr=0x8024A6C4u; f_8024ADF0(c); // 8024A6C0
  c->f[31]=c->f[1]; // 8024A6C4
  c->r[3]=c->r[31]|c->r[31]; // 8024A6C8
  c->lr=0x8024A6D0u; f_80249460(c); // 8024A6CC
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 8024A6D0
  c->r[3]=c->r[31]|c->r[31]; // 8024A6D4
  c->f[1]=c->f[30]; // 8024A6D8
  c->lr=0x8024A6E0u; f_8024941C(c); // 8024A6DC
  c->r[3]=0u+0x00000003u; // 8024A6E0
  goto L_8024A7A4; // 8024A6E4
L_8024A6E8:;
  c->r[30]=R32(c->r[5]+0x00000000u); // 8024A6E8
  c->r[3]=c->r[30]|c->r[30]; // 8024A6EC
  c->lr=0x8024A6F4u; f_8024AE7C(c); // 8024A6F0
  cmps(c,0,(int32_t)c->r[3],0); // 8024A6F4
  c->r[31]=c->r[3]|c->r[3]; // 8024A6F8
  if (!crb(c,1)) { goto L_8024A798; } // 8024A6FC
  c->r[3]=c->r[30]|c->r[30]; // 8024A700
  c->lr=0x8024A708u; f_802492D0(c); // 8024A704
  cmps(c,0,(int32_t)c->r[3],0); // 8024A708
  if (crb(c,2)) { goto L_8024A720; } // 8024A70C
  c->r[3]=c->r[30]|c->r[30]; // 8024A710
  c->lr=0x8024A718u; f_802492D8(c); // 8024A714
  c->f[31]=c->f[1]; // 8024A718
  goto L_8024A72C; // 8024A71C
L_8024A720:;
  c->r[3]=c->r[30]|c->r[30]; // 8024A720
  c->lr=0x8024A728u; f_802491A4(c); // 8024A724
  c->f[31]=c->f[1]; // 8024A728
L_8024A72C:;
  c->r[3]=c->r[30]|c->r[30]; // 8024A72C
  c->lr=0x8024A734u; f_80249458(c); // 8024A730
  c->r[0]=0u+0x43300000u; // 8024A734
  c->r[3]=c->r[31]^0x80000000u; // 8024A738
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8024A73C
  c->r[4]=0u+0x80260000u; // 8024A740
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024A744
  c->r[3]=c->r[30]|c->r[30]; // 8024A748
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024A74C
  {uint32_t ea=c->r[4]+0x00001B18u; c->f[2]=RF64(ea);} // 8024A750
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 8024A754
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8024A758
  W32(c->r[1]+0x00000018u,c->r[0]); // 8024A75C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024A760
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 8024A764
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 8024A768
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8024A76C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8024A770
  c->r[4]=R32(c->r[1]+0x00000014u); // 8024A774
  c->r[0]=c->r[4]+0x00000001u; // 8024A778
  c->r[0]=c->r[0]^0x80000000u; // 8024A77C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8024A780
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8024A784
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024A788
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8024A78C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 8024A790
  c->lr=0x8024A798u; f_80249428(c); // 8024A794
L_8024A798:;
  c->r[3]=0u+0x00000001u; // 8024A798
  goto L_8024A7A4; // 8024A79C
L_8024A7A0:;
  c->r[3]=0u+0x00000000u; // 8024A7A0
L_8024A7A4:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8024A7A4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8024A7A8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8024A7AC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8024A7B0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8024A7B4
  c->r[30]=R32(c->r[1]+0x00000028u); // 8024A7B8
  c->r[0]=R32(c->r[1]+0x00000054u); // 8024A7BC
  c->r[29]=R32(c->r[1]+0x00000024u); // 8024A7C0
  c->lr=c->r[0]; // 8024A7C4
  c->r[1]=c->r[1]+0x00000050u; // 8024A7C8
  return; // 8024A7CC
}

// CalcRect__Q36nw4hbm2ut19TagProcessorBase<c>FPQ36nw4hbm2ut4RectUsPQ36nw4hbm2ut15PrintContext<c>
void f_8024A7D0(Ctx* __restrict c) {
  trace_call(0x8024A7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A7D0
  c->r[0]=c->lr; // 8024A7D4
  W32(c->r[1]+0x00000064u,c->r[0]); // 8024A7D8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8024A7DC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8024A7E0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8024A7E4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8024A7E8
  c->r[11]=c->r[1]+0x00000040u; // 8024A7EC
  c->lr=0x8024A7F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024A7F0
  cmps(c,0,(int32_t)c->r[5],10); // 8024A7F4
  c->r[27]=c->r[4]|c->r[4]; // 8024A7F8
  c->r[28]=c->r[6]|c->r[6]; // 8024A7FC
  if (crb(c,2)) { goto L_8024A814; } // 8024A800
  if (!crb(c,0)) { goto L_8024A9DC; } // 8024A804
  cmps(c,0,(int32_t)c->r[5],9); // 8024A808
  if (!crb(c,0)) { goto L_8024A8BC; } // 8024A80C
  goto L_8024A9DC; // 8024A810
L_8024A814:;
  c->r[30]=R32(c->r[6]+0x00000000u); // 8024A814
  c->r[3]=c->r[30]|c->r[30]; // 8024A818
  c->lr=0x8024A820u; f_80249458(c); // 8024A81C
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 8024A820
  c->r[3]=c->r[30]|c->r[30]; // 8024A824
  c->lr=0x8024A82Cu; f_80249460(c); // 8024A828
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8024A82C
  c->r[31]=R32(c->r[28]+0x00000000u); // 8024A830
  {uint32_t ea=c->r[28]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 8024A834
  c->r[3]=c->r[31]|c->r[31]; // 8024A838
  c->lr=0x8024A840u; f_8024ADF0(c); // 8024A83C
  c->f[31]=c->f[1]; // 8024A840
  c->r[3]=c->r[31]|c->r[31]; // 8024A844
  c->lr=0x8024A84Cu; f_80249460(c); // 8024A848
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 8024A84C
  c->r[3]=c->r[31]|c->r[31]; // 8024A850
  c->f[1]=c->f[30]; // 8024A854
  c->lr=0x8024A85Cu; f_8024941C(c); // 8024A858
  c->r[3]=c->r[30]|c->r[30]; // 8024A85C
  c->lr=0x8024A864u; f_80249458(c); // 8024A860
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 8024A864
  c->r[3]=R32(c->r[28]+0x00000000u); // 8024A868
  c->lr=0x8024A870u; f_80249208(c); // 8024A86C
  c->f[31]=c->f[1]; // 8024A870
  c->r[3]=c->r[30]|c->r[30]; // 8024A874
  c->lr=0x8024A87Cu; f_80249460(c); // 8024A878
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 8024A87C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 8024A880
  {uint32_t ea=c->r[27]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 8024A884
  c->r[3]=0u+0x00000003u; // 8024A888
  {uint32_t ea=c->r[27]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8024A88C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 8024A890
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[7]); // 8024A894
  c->f[1]=(c->f[2]>=0.0)?c->f[6]:c->f[0]; // 8024A898
  c->f[4]=(c->f[3]>=0.0)?c->f[7]:c->f[5]; // 8024A89C
  c->f[3]=(c->f[3]>=0.0)?c->f[5]:c->f[7]; // 8024A8A0
  c->f[0]=(c->f[2]>=0.0)?c->f[0]:c->f[6]; // 8024A8A4
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8024A8A8
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[4]);} // 8024A8AC
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 8024A8B0
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 8024A8B4
  goto L_8024A9E0; // 8024A8B8
L_8024A8BC:;
  c->r[29]=R32(c->r[6]+0x00000000u); // 8024A8BC
  c->r[3]=c->r[29]|c->r[29]; // 8024A8C0
  c->lr=0x8024A8C8u; f_80249458(c); // 8024A8C4
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 8024A8C8
  c->r[30]=R32(c->r[28]+0x00000000u); // 8024A8CC
  c->r[3]=c->r[30]|c->r[30]; // 8024A8D0
  c->lr=0x8024A8D8u; f_8024AE7C(c); // 8024A8D4
  cmps(c,0,(int32_t)c->r[3],0); // 8024A8D8
  c->r[31]=c->r[3]|c->r[3]; // 8024A8DC
  if (!crb(c,1)) { goto L_8024A97C; } // 8024A8E0
  c->r[3]=c->r[30]|c->r[30]; // 8024A8E4
  c->lr=0x8024A8ECu; f_802492D0(c); // 8024A8E8
  cmps(c,0,(int32_t)c->r[3],0); // 8024A8EC
  if (crb(c,2)) { goto L_8024A904; } // 8024A8F0
  c->r[3]=c->r[30]|c->r[30]; // 8024A8F4
  c->lr=0x8024A8FCu; f_802492D8(c); // 8024A8F8
  c->f[31]=c->f[1]; // 8024A8FC
  goto L_8024A910; // 8024A900
L_8024A904:;
  c->r[3]=c->r[30]|c->r[30]; // 8024A904
  c->lr=0x8024A90Cu; f_802491A4(c); // 8024A908
  c->f[31]=c->f[1]; // 8024A90C
L_8024A910:;
  c->r[3]=c->r[30]|c->r[30]; // 8024A910
  c->lr=0x8024A918u; f_80249458(c); // 8024A914
  c->r[0]=0u+0x43300000u; // 8024A918
  c->r[3]=c->r[31]^0x80000000u; // 8024A91C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8024A920
  c->r[4]=0u+0x80260000u; // 8024A924
  {uint32_t ea=c->r[28]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024A928
  c->r[3]=c->r[30]|c->r[30]; // 8024A92C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024A930
  {uint32_t ea=c->r[4]+0x00001B18u; c->f[2]=RF64(ea);} // 8024A934
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 8024A938
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8024A93C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8024A940
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024A944
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 8024A948
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 8024A94C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8024A950
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8024A954
  c->r[4]=R32(c->r[1]+0x00000014u); // 8024A958
  c->r[0]=c->r[4]+0x00000001u; // 8024A95C
  c->r[0]=c->r[0]^0x80000000u; // 8024A960
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8024A964
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8024A968
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024A96C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8024A970
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 8024A974
  c->lr=0x8024A97Cu; f_80249428(c); // 8024A978
L_8024A97C:;
  c->r[3]=c->r[29]|c->r[29]; // 8024A97C
  c->lr=0x8024A984u; f_80249458(c); // 8024A980
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 8024A984
  c->r[3]=c->r[29]|c->r[29]; // 8024A988
  c->lr=0x8024A990u; f_80249460(c); // 8024A98C
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8024A990
  c->r[3]=c->r[29]|c->r[29]; // 8024A994
  c->lr=0x8024A99Cu; f_80249208(c); // 8024A998
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024A99C
  c->r[3]=0u+0x00000001u; // 8024A9A0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 8024A9A4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 8024A9A8
  {uint32_t ea=c->r[27]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8024A9AC
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[6]); // 8024A9B0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[2]); // 8024A9B4
  c->f[5]=(c->f[1]>=0.0)?c->f[6]:c->f[4]; // 8024A9B8
  c->f[4]=(c->f[1]>=0.0)?c->f[4]:c->f[6]; // 8024A9BC
  c->f[1]=(c->f[3]>=0.0)?c->f[2]:c->f[0]; // 8024A9C0
  c->f[0]=(c->f[3]>=0.0)?c->f[0]:c->f[2]; // 8024A9C4
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[5]);} // 8024A9C8
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[4]);} // 8024A9CC
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8024A9D0
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 8024A9D4
  goto L_8024A9E0; // 8024A9D8
L_8024A9DC:;
  c->r[3]=0u+0x00000000u; // 8024A9DC
L_8024A9E0:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8024A9E0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8024A9E4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8024A9E8
  c->r[11]=c->r[1]+0x00000040u; // 8024A9EC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8024A9F0
  c->lr=0x8024A9F8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024A9F4
  c->r[0]=R32(c->r[1]+0x00000064u); // 8024A9F8
  c->lr=c->r[0]; // 8024A9FC
  c->r[1]=c->r[1]+0x00000060u; // 8024AA00
  return; // 8024AA04
}

// __ct__Q36nw4hbm2ut19TagProcessorBase<w>Fv
void f_8024AA08(Ctx* __restrict c) {
  trace_call(0x8024AA08u);
  c->r[4]=0u+0x802A0000u; // 8024AA08
  c->r[4]=c->r[4]+0x00001DD8u; // 8024AA0C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8024AA10
  return; // 8024AA14
}

// __dt__Q36nw4hbm2ut19TagProcessorBase<w>Fv
void f_8024AA18(Ctx* __restrict c) {
  trace_call(0x8024AA18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024AA18
  c->r[0]=c->lr; // 8024AA1C
  cmps(c,0,(int32_t)c->r[3],0); // 8024AA20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024AA24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024AA28
  c->r[31]=c->r[3]|c->r[3]; // 8024AA2C
  if (crb(c,2)) { goto L_8024AA40; } // 8024AA30
  cmps(c,0,(int32_t)c->r[4],0); // 8024AA34
  if (!crb(c,1)) { goto L_8024AA40; } // 8024AA38
  c->lr=0x8024AA40u; f_8008DE54(c); // 8024AA3C
L_8024AA40:;
  c->r[3]=c->r[31]|c->r[31]; // 8024AA40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024AA44
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024AA48
  c->lr=c->r[0]; // 8024AA4C
  c->r[1]=c->r[1]+0x00000010u; // 8024AA50
  return; // 8024AA54
}

// Process__Q36nw4hbm2ut19TagProcessorBase<w>FUsPQ36nw4hbm2ut15PrintContext<w>
void f_8024AA58(Ctx* __restrict c) {
  trace_call(0x8024AA58u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024AA58
  c->r[0]=c->lr; // 8024AA5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8024AA60
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8024AA64
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8024AA68
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8024AA6C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8024AA70
  cmps(c,0,(int32_t)c->r[4],10); // 8024AA74
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8024AA78
  W32(c->r[1]+0x00000028u,c->r[30]); // 8024AA7C
  W32(c->r[1]+0x00000024u,c->r[29]); // 8024AA80
  c->r[29]=c->r[5]|c->r[5]; // 8024AA84
  if (crb(c,2)) { goto L_8024AA9C; } // 8024AA88
  if (!crb(c,0)) { goto L_8024AB88; } // 8024AA8C
  cmps(c,0,(int32_t)c->r[4],9); // 8024AA90
  if (!crb(c,0)) { goto L_8024AAD0; } // 8024AA94
  goto L_8024AB88; // 8024AA98
L_8024AA9C:;
  c->r[31]=R32(c->r[5]+0x00000000u); // 8024AA9C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 8024AAA0
  c->r[3]=c->r[31]|c->r[31]; // 8024AAA4
  c->lr=0x8024AAACu; f_8024AF38(c); // 8024AAA8
  c->f[31]=c->f[1]; // 8024AAAC
  c->r[3]=c->r[31]|c->r[31]; // 8024AAB0
  c->lr=0x8024AAB8u; f_80249460(c); // 8024AAB4
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 8024AAB8
  c->r[3]=c->r[31]|c->r[31]; // 8024AABC
  c->f[1]=c->f[30]; // 8024AAC0
  c->lr=0x8024AAC8u; f_8024941C(c); // 8024AAC4
  c->r[3]=0u+0x00000003u; // 8024AAC8
  goto L_8024AB8C; // 8024AACC
L_8024AAD0:;
  c->r[30]=R32(c->r[5]+0x00000000u); // 8024AAD0
  c->r[3]=c->r[30]|c->r[30]; // 8024AAD4
  c->lr=0x8024AADCu; f_8024AFDC(c); // 8024AAD8
  cmps(c,0,(int32_t)c->r[3],0); // 8024AADC
  c->r[31]=c->r[3]|c->r[3]; // 8024AAE0
  if (!crb(c,1)) { goto L_8024AB80; } // 8024AAE4
  c->r[3]=c->r[30]|c->r[30]; // 8024AAE8
  c->lr=0x8024AAF0u; f_802492D0(c); // 8024AAEC
  cmps(c,0,(int32_t)c->r[3],0); // 8024AAF0
  if (crb(c,2)) { goto L_8024AB08; } // 8024AAF4
  c->r[3]=c->r[30]|c->r[30]; // 8024AAF8
  c->lr=0x8024AB00u; f_802492D8(c); // 8024AAFC
  c->f[31]=c->f[1]; // 8024AB00
  goto L_8024AB14; // 8024AB04
L_8024AB08:;
  c->r[3]=c->r[30]|c->r[30]; // 8024AB08
  c->lr=0x8024AB10u; f_802491A4(c); // 8024AB0C
  c->f[31]=c->f[1]; // 8024AB10
L_8024AB14:;
  c->r[3]=c->r[30]|c->r[30]; // 8024AB14
  c->lr=0x8024AB1Cu; f_80249458(c); // 8024AB18
  c->r[0]=0u+0x43300000u; // 8024AB1C
  c->r[3]=c->r[31]^0x80000000u; // 8024AB20
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8024AB24
  c->r[4]=0u+0x80260000u; // 8024AB28
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024AB2C
  c->r[3]=c->r[30]|c->r[30]; // 8024AB30
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024AB34
  {uint32_t ea=c->r[4]+0x00001B18u; c->f[2]=RF64(ea);} // 8024AB38
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 8024AB3C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8024AB40
  W32(c->r[1]+0x00000018u,c->r[0]); // 8024AB44
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024AB48
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 8024AB4C
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 8024AB50
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8024AB54
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8024AB58
  c->r[4]=R32(c->r[1]+0x00000014u); // 8024AB5C
  c->r[0]=c->r[4]+0x00000001u; // 8024AB60
  c->r[0]=c->r[0]^0x80000000u; // 8024AB64
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8024AB68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8024AB6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024AB70
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8024AB74
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 8024AB78
  c->lr=0x8024AB80u; f_80249428(c); // 8024AB7C
L_8024AB80:;
  c->r[3]=0u+0x00000001u; // 8024AB80
  goto L_8024AB8C; // 8024AB84
L_8024AB88:;
  c->r[3]=0u+0x00000000u; // 8024AB88
L_8024AB8C:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8024AB8C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8024AB90
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8024AB94
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8024AB98
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8024AB9C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8024ABA0
  c->r[0]=R32(c->r[1]+0x00000054u); // 8024ABA4
  c->r[29]=R32(c->r[1]+0x00000024u); // 8024ABA8
  c->lr=c->r[0]; // 8024ABAC
  c->r[1]=c->r[1]+0x00000050u; // 8024ABB0
  return; // 8024ABB4
}

// CalcRect__Q36nw4hbm2ut19TagProcessorBase<w>FPQ36nw4hbm2ut4RectUsPQ36nw4hbm2ut15PrintContext<w>
void f_8024ABB8(Ctx* __restrict c) {
  trace_call(0x8024ABB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024ABB8
  c->r[0]=c->lr; // 8024ABBC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8024ABC0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8024ABC4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8024ABC8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8024ABCC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8024ABD0
  c->r[11]=c->r[1]+0x00000040u; // 8024ABD4
  c->lr=0x8024ABDCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024ABD8
  cmps(c,0,(int32_t)c->r[5],10); // 8024ABDC
  c->r[27]=c->r[4]|c->r[4]; // 8024ABE0
  c->r[28]=c->r[6]|c->r[6]; // 8024ABE4
  if (crb(c,2)) { goto L_8024ABFC; } // 8024ABE8
  if (!crb(c,0)) { goto L_8024ADC4; } // 8024ABEC
  cmps(c,0,(int32_t)c->r[5],9); // 8024ABF0
  if (!crb(c,0)) { goto L_8024ACA4; } // 8024ABF4
  goto L_8024ADC4; // 8024ABF8
L_8024ABFC:;
  c->r[30]=R32(c->r[6]+0x00000000u); // 8024ABFC
  c->r[3]=c->r[30]|c->r[30]; // 8024AC00
  c->lr=0x8024AC08u; f_80249458(c); // 8024AC04
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 8024AC08
  c->r[3]=c->r[30]|c->r[30]; // 8024AC0C
  c->lr=0x8024AC14u; f_80249460(c); // 8024AC10
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8024AC14
  c->r[31]=R32(c->r[28]+0x00000000u); // 8024AC18
  {uint32_t ea=c->r[28]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 8024AC1C
  c->r[3]=c->r[31]|c->r[31]; // 8024AC20
  c->lr=0x8024AC28u; f_8024AF38(c); // 8024AC24
  c->f[31]=c->f[1]; // 8024AC28
  c->r[3]=c->r[31]|c->r[31]; // 8024AC2C
  c->lr=0x8024AC34u; f_80249460(c); // 8024AC30
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 8024AC34
  c->r[3]=c->r[31]|c->r[31]; // 8024AC38
  c->f[1]=c->f[30]; // 8024AC3C
  c->lr=0x8024AC44u; f_8024941C(c); // 8024AC40
  c->r[3]=c->r[30]|c->r[30]; // 8024AC44
  c->lr=0x8024AC4Cu; f_80249458(c); // 8024AC48
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 8024AC4C
  c->r[3]=R32(c->r[28]+0x00000000u); // 8024AC50
  c->lr=0x8024AC58u; f_80249208(c); // 8024AC54
  c->f[31]=c->f[1]; // 8024AC58
  c->r[3]=c->r[30]|c->r[30]; // 8024AC5C
  c->lr=0x8024AC64u; f_80249460(c); // 8024AC60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 8024AC64
  {uint32_t ea=c->r[27]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 8024AC68
  {uint32_t ea=c->r[27]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 8024AC6C
  c->r[3]=0u+0x00000003u; // 8024AC70
  {uint32_t ea=c->r[27]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8024AC74
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 8024AC78
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[7]); // 8024AC7C
  c->f[1]=(c->f[2]>=0.0)?c->f[6]:c->f[0]; // 8024AC80
  c->f[4]=(c->f[3]>=0.0)?c->f[7]:c->f[5]; // 8024AC84
  c->f[3]=(c->f[3]>=0.0)?c->f[5]:c->f[7]; // 8024AC88
  c->f[0]=(c->f[2]>=0.0)?c->f[0]:c->f[6]; // 8024AC8C
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8024AC90
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[4]);} // 8024AC94
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 8024AC98
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 8024AC9C
  goto L_8024ADC8; // 8024ACA0
L_8024ACA4:;
  c->r[29]=R32(c->r[6]+0x00000000u); // 8024ACA4
  c->r[3]=c->r[29]|c->r[29]; // 8024ACA8
  c->lr=0x8024ACB0u; f_80249458(c); // 8024ACAC
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 8024ACB0
  c->r[30]=R32(c->r[28]+0x00000000u); // 8024ACB4
  c->r[3]=c->r[30]|c->r[30]; // 8024ACB8
  c->lr=0x8024ACC0u; f_8024AFDC(c); // 8024ACBC
  cmps(c,0,(int32_t)c->r[3],0); // 8024ACC0
  c->r[31]=c->r[3]|c->r[3]; // 8024ACC4
  if (!crb(c,1)) { goto L_8024AD64; } // 8024ACC8
  c->r[3]=c->r[30]|c->r[30]; // 8024ACCC
  c->lr=0x8024ACD4u; f_802492D0(c); // 8024ACD0
  cmps(c,0,(int32_t)c->r[3],0); // 8024ACD4
  if (crb(c,2)) { goto L_8024ACEC; } // 8024ACD8
  c->r[3]=c->r[30]|c->r[30]; // 8024ACDC
  c->lr=0x8024ACE4u; f_802492D8(c); // 8024ACE0
  c->f[31]=c->f[1]; // 8024ACE4
  goto L_8024ACF8; // 8024ACE8
L_8024ACEC:;
  c->r[3]=c->r[30]|c->r[30]; // 8024ACEC
  c->lr=0x8024ACF4u; f_802491A4(c); // 8024ACF0
  c->f[31]=c->f[1]; // 8024ACF4
L_8024ACF8:;
  c->r[3]=c->r[30]|c->r[30]; // 8024ACF8
  c->lr=0x8024AD00u; f_80249458(c); // 8024ACFC
  c->r[0]=0u+0x43300000u; // 8024AD00
  c->r[3]=c->r[31]^0x80000000u; // 8024AD04
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8024AD08
  c->r[4]=0u+0x80260000u; // 8024AD0C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024AD10
  c->r[3]=c->r[30]|c->r[30]; // 8024AD14
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024AD18
  {uint32_t ea=c->r[4]+0x00001B18u; c->f[2]=RF64(ea);} // 8024AD1C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 8024AD20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8024AD24
  W32(c->r[1]+0x00000018u,c->r[0]); // 8024AD28
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024AD2C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 8024AD30
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 8024AD34
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8024AD38
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8024AD3C
  c->r[4]=R32(c->r[1]+0x00000014u); // 8024AD40
  c->r[0]=c->r[4]+0x00000001u; // 8024AD44
  c->r[0]=c->r[0]^0x80000000u; // 8024AD48
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8024AD4C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8024AD50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024AD54
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8024AD58
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 8024AD5C
  c->lr=0x8024AD64u; f_80249428(c); // 8024AD60
L_8024AD64:;
  c->r[3]=c->r[29]|c->r[29]; // 8024AD64
  c->lr=0x8024AD6Cu; f_80249458(c); // 8024AD68
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 8024AD6C
  c->r[3]=c->r[29]|c->r[29]; // 8024AD70
  c->lr=0x8024AD78u; f_80249460(c); // 8024AD74
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8024AD78
  c->r[3]=c->r[29]|c->r[29]; // 8024AD7C
  c->lr=0x8024AD84u; f_80249208(c); // 8024AD80
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024AD84
  c->r[3]=0u+0x00000001u; // 8024AD88
  {uint32_t ea=c->r[27]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 8024AD8C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 8024AD90
  {uint32_t ea=c->r[27]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8024AD94
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[6]); // 8024AD98
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[2]); // 8024AD9C
  c->f[5]=(c->f[1]>=0.0)?c->f[6]:c->f[4]; // 8024ADA0
  c->f[4]=(c->f[1]>=0.0)?c->f[4]:c->f[6]; // 8024ADA4
  c->f[1]=(c->f[3]>=0.0)?c->f[2]:c->f[0]; // 8024ADA8
  c->f[0]=(c->f[3]>=0.0)?c->f[0]:c->f[2]; // 8024ADAC
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[5]);} // 8024ADB0
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[4]);} // 8024ADB4
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8024ADB8
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 8024ADBC
  goto L_8024ADC8; // 8024ADC0
L_8024ADC4:;
  c->r[3]=0u+0x00000000u; // 8024ADC4
L_8024ADC8:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8024ADC8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8024ADCC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8024ADD0
  c->r[11]=c->r[1]+0x00000040u; // 8024ADD4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8024ADD8
  c->lr=0x8024ADE0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024ADDC
  c->r[0]=R32(c->r[1]+0x00000064u); // 8024ADE0
  c->lr=c->r[0]; // 8024ADE4
  c->r[1]=c->r[1]+0x00000060u; // 8024ADE8
  return; // 8024ADEC
}

// GetLineHeight__Q36nw4hbm2ut17TextWriterBase<c>CFv
void f_8024ADF0(Ctx* __restrict c) {
  trace_call(0x8024ADF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024ADF0
  c->r[0]=c->lr; // 8024ADF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024ADF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024ADFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024AE00
  c->r[30]=c->r[3]|c->r[3]; // 8024AE04
  c->lr=0x8024AE0Cu; f_802481D0(c); // 8024AE08
  cmps(c,0,(int32_t)c->r[3],0); // 8024AE0C
  if (crb(c,2)) { goto L_8024AE2C; } // 8024AE10
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024AE14
  c->r[12]=R32(c->r[12]+0x00000034u); // 8024AE18
  c->ctr=c->r[12]; // 8024AE1C
  if (true) { c->lr=0x8024AE24u; dispatch(c,c->ctr); } // 8024AE20
  c->r[31]=c->r[3]|c->r[3]; // 8024AE24
  goto L_8024AE30; // 8024AE28
L_8024AE2C:;
  c->r[31]=0u+0x00000000u; // 8024AE2C
L_8024AE30:;
  c->r[3]=c->r[30]|c->r[30]; // 8024AE30
  c->lr=0x8024AE38u; f_802490CC(c); // 8024AE34
  c->r[3]=c->r[31]^0x80000000u; // 8024AE38
  c->r[0]=0u+0x43300000u; // 8024AE3C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8024AE40
  c->r[3]=0u+0x80260000u; // 8024AE44
  {uint32_t ea=c->r[3]+0x00001B28u; c->f[3]=RF64(ea);} // 8024AE48
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024AE4C
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024AE50
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8024AE54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024AE58
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8024AE5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024AE60
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024AE64
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8024AE68
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8024AE6C
  c->lr=c->r[0]; // 8024AE70
  c->r[1]=c->r[1]+0x00000020u; // 8024AE74
  return; // 8024AE78
}

// GetTabWidth__Q36nw4hbm2ut17TextWriterBase<c>CFv
void f_8024AE7C(Ctx* __restrict c) {
  trace_call(0x8024AE7Cu);
  c->r[3]=R32(c->r[3]+0x00000054u); // 8024AE7C
  return; // 8024AE80
}

// __ct__Q36nw4hbm2ut17TextWriterBase<w>Fv
void f_8024AE84(Ctx* __restrict c) {
  trace_call(0x8024AE84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024AE84
  c->r[0]=c->lr; // 8024AE88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024AE8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024AE90
  c->r[31]=c->r[3]|c->r[3]; // 8024AE94
  c->lr=0x8024AE9Cu; f_80247F5C(c); // 8024AE98
  c->r[3]=0u+0x80260000u; // 8024AE9C
  c->r[4]=0u+0x80360000u; // 8024AEA0
  {uint32_t ea=c->r[3]+0x00001B20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024AEA4
  c->r[4]=c->r[4]+0xFFFFCE8Cu; // 8024AEA8
  c->r[5]=0u+0x00000004u; // 8024AEAC
  c->r[0]=0u+0x00000000u; // 8024AEB0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 8024AEB4
  c->r[3]=c->r[31]|c->r[31]; // 8024AEB8
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8024AEBC
  W32(c->r[31]+0x00000054u,c->r[5]); // 8024AEC0
  W32(c->r[31]+0x00000058u,c->r[0]); // 8024AEC4
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8024AEC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024AECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024AED0
  c->lr=c->r[0]; // 8024AED4
  c->r[1]=c->r[1]+0x00000010u; // 8024AED8
  return; // 8024AEDC
}

// __dt__Q36nw4hbm2ut17TextWriterBase<w>Fv
void f_8024AEE0(Ctx* __restrict c) {
  trace_call(0x8024AEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024AEE0
  c->r[0]=c->lr; // 8024AEE4
  cmps(c,0,(int32_t)c->r[3],0); // 8024AEE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024AEEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024AEF0
  c->r[31]=c->r[4]|c->r[4]; // 8024AEF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024AEF8
  c->r[30]=c->r[3]|c->r[3]; // 8024AEFC
  if (crb(c,2)) { goto L_8024AF1C; } // 8024AF00
  c->r[4]=0u+0x00000000u; // 8024AF04
  c->lr=0x8024AF0Cu; f_80248188(c); // 8024AF08
  cmps(c,0,(int32_t)c->r[31],0); // 8024AF0C
  if (!crb(c,1)) { goto L_8024AF1C; } // 8024AF10
  c->r[3]=c->r[30]|c->r[30]; // 8024AF14
  c->lr=0x8024AF1Cu; f_8008DE54(c); // 8024AF18
L_8024AF1C:;
  c->r[3]=c->r[30]|c->r[30]; // 8024AF1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024AF20
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024AF24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024AF28
  c->lr=c->r[0]; // 8024AF2C
  c->r[1]=c->r[1]+0x00000010u; // 8024AF30
  return; // 8024AF34
}

// GetLineHeight__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_8024AF38(Ctx* __restrict c) {
  trace_call(0x8024AF38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024AF38
  c->r[0]=c->lr; // 8024AF3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024AF40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024AF44
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024AF48
  c->r[30]=c->r[3]|c->r[3]; // 8024AF4C
  c->lr=0x8024AF54u; f_802481D0(c); // 8024AF50
  cmps(c,0,(int32_t)c->r[3],0); // 8024AF54
  if (crb(c,2)) { goto L_8024AF74; } // 8024AF58
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024AF5C
  c->r[12]=R32(c->r[12]+0x00000034u); // 8024AF60
  c->ctr=c->r[12]; // 8024AF64
  if (true) { c->lr=0x8024AF6Cu; dispatch(c,c->ctr); } // 8024AF68
  c->r[31]=c->r[3]|c->r[3]; // 8024AF6C
  goto L_8024AF78; // 8024AF70
L_8024AF74:;
  c->r[31]=0u+0x00000000u; // 8024AF74
L_8024AF78:;
  c->r[3]=c->r[30]|c->r[30]; // 8024AF78
  c->lr=0x8024AF80u; f_802490CC(c); // 8024AF7C
  c->r[3]=c->r[31]^0x80000000u; // 8024AF80
  c->r[0]=0u+0x43300000u; // 8024AF84
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8024AF88
  c->r[3]=0u+0x80260000u; // 8024AF8C
  {uint32_t ea=c->r[3]+0x00001B28u; c->f[3]=RF64(ea);} // 8024AF90
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024AF94
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024AF98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8024AF9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024AFA0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8024AFA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024AFA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024AFAC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8024AFB0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8024AFB4
  c->lr=c->r[0]; // 8024AFB8
  c->r[1]=c->r[1]+0x00000020u; // 8024AFBC
  return; // 8024AFC0
}

// SetLineSpace__Q36nw4hbm2ut17TextWriterBase<w>Ff
void f_8024AFC4(Ctx* __restrict c) {
  trace_call(0x8024AFC4u);
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 8024AFC4
  return; // 8024AFC8
}

// SetCharSpace__Q36nw4hbm2ut17TextWriterBase<w>Ff
void f_8024AFCC(Ctx* __restrict c) {
  trace_call(0x8024AFCCu);
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 8024AFCC
  return; // 8024AFD0
}

// GetCharSpace__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_8024AFD4(Ctx* __restrict c) {
  trace_call(0x8024AFD4u);
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024AFD4
  return; // 8024AFD8
}

// GetTabWidth__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_8024AFDC(Ctx* __restrict c) {
  trace_call(0x8024AFDCu);
  c->r[3]=R32(c->r[3]+0x00000054u); // 8024AFDC
  return; // 8024AFE0
}

// SetTagProcessor__Q36nw4hbm2ut17TextWriterBase<w>FPQ36nw4hbm2ut19TagProcessorBase<w>
void f_8024AFE4(Ctx* __restrict c) {
  trace_call(0x8024AFE4u);
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8024AFE4
  return; // 8024AFE8
}

// GetTagProcessor__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_8024AFEC(Ctx* __restrict c) {
  trace_call(0x8024AFECu);
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 8024AFEC
  return; // 8024AFF0
}

// Print__Q36nw4hbm2ut17TextWriterBase<w>FPCwi
void f_8024AFF4(Ctx* __restrict c) {
  trace_call(0x8024AFF4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024AFF4
  c->r[0]=c->lr; // 8024AFF8
  W32(c->r[1]+0x00000094u,c->r[0]); // 8024AFFC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8024B000
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8024B004
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8024B008
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8024B00C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8024B010
  c->r[0]=R8(c->r[3]+0x00000000u); // 8024B014
  c->r[31]=c->r[3]|c->r[3]; // 8024B018
  W8(c->r[1]+0x00000008u,c->r[0]); // 8024B01C
  c->r[0]=R8(c->r[3]+0x00000001u); // 8024B020
  W8(c->r[1]+0x00000009u,c->r[0]); // 8024B024
  c->r[0]=R8(c->r[3]+0x00000002u); // 8024B028
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8024B02C
  c->r[0]=R8(c->r[3]+0x00000003u); // 8024B030
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8024B034
  c->r[0]=R8(c->r[3]+0x00000004u); // 8024B038
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8024B03C
  c->r[0]=R8(c->r[3]+0x00000005u); // 8024B040
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8024B044
  c->r[0]=R8(c->r[3]+0x00000006u); // 8024B048
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 8024B04C
  c->r[0]=R8(c->r[3]+0x00000007u); // 8024B050
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8024B054
  c->r[0]=R8(c->r[3]+0x00000008u); // 8024B058
  W8(c->r[1]+0x00000010u,c->r[0]); // 8024B05C
  c->r[0]=R8(c->r[3]+0x00000009u); // 8024B060
  W8(c->r[1]+0x00000011u,c->r[0]); // 8024B064
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8024B068
  W8(c->r[1]+0x00000012u,c->r[0]); // 8024B06C
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 8024B070
  W8(c->r[1]+0x00000013u,c->r[0]); // 8024B074
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8024B078
  W8(c->r[1]+0x00000014u,c->r[0]); // 8024B07C
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8024B080
  W8(c->r[1]+0x00000015u,c->r[0]); // 8024B084
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 8024B088
  W8(c->r[1]+0x00000016u,c->r[0]); // 8024B08C
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 8024B090
  W8(c->r[1]+0x00000017u,c->r[0]); // 8024B094
  c->r[0]=R8(c->r[3]+0x00000010u); // 8024B098
  W8(c->r[1]+0x00000018u,c->r[0]); // 8024B09C
  c->r[0]=R8(c->r[3]+0x00000011u); // 8024B0A0
  W8(c->r[1]+0x00000019u,c->r[0]); // 8024B0A4
  c->r[0]=R8(c->r[3]+0x00000012u); // 8024B0A8
  W8(c->r[1]+0x0000001Au,c->r[0]); // 8024B0AC
  c->r[0]=R8(c->r[3]+0x00000013u); // 8024B0B0
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 8024B0B4
  c->r[0]=R8(c->r[3]+0x00000014u); // 8024B0B8
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8024B0BC
  c->r[0]=R8(c->r[3]+0x00000015u); // 8024B0C0
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8024B0C4
  c->r[0]=R8(c->r[3]+0x00000016u); // 8024B0C8
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 8024B0CC
  c->r[0]=R8(c->r[3]+0x00000017u); // 8024B0D0
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 8024B0D4
  c->r[0]=R8(c->r[3]+0x00000018u); // 8024B0D8
  W8(c->r[1]+0x00000020u,c->r[0]); // 8024B0DC
  c->r[0]=R8(c->r[3]+0x00000019u); // 8024B0E0
  W8(c->r[1]+0x00000021u,c->r[0]); // 8024B0E4
  c->r[0]=R8(c->r[3]+0x0000001Au); // 8024B0E8
  W8(c->r[1]+0x00000022u,c->r[0]); // 8024B0EC
  c->r[0]=R8(c->r[3]+0x0000001Bu); // 8024B0F0
  W8(c->r[1]+0x00000023u,c->r[0]); // 8024B0F4
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 8024B0F8
  W8(c->r[1]+0x00000024u,c->r[0]); // 8024B0FC
  c->r[0]=R8(c->r[3]+0x0000001Du); // 8024B100
  W8(c->r[1]+0x00000025u,c->r[0]); // 8024B104
  c->r[0]=R8(c->r[3]+0x0000001Eu); // 8024B108
  W8(c->r[1]+0x00000026u,c->r[0]); // 8024B10C
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 8024B110
  W8(c->r[1]+0x00000027u,c->r[0]); // 8024B114
  c->r[0]=R32(c->r[3]+0x00000020u); // 8024B118
  W32(c->r[1]+0x00000028u,c->r[0]); // 8024B11C
  c->r[6]=R32(c->r[3]+0x00000024u); // 8024B120
  c->r[0]=R32(c->r[3]+0x00000028u); // 8024B124
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 8024B128
  W32(c->r[1]+0x00000030u,c->r[0]); // 8024B12C
  c->r[6]=R32(c->r[3]+0x0000002Cu); // 8024B130
  c->r[0]=R32(c->r[3]+0x00000030u); // 8024B134
  W32(c->r[1]+0x00000034u,c->r[6]); // 8024B138
  W32(c->r[1]+0x00000038u,c->r[0]); // 8024B13C
  c->r[0]=R32(c->r[3]+0x00000034u); // 8024B140
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8024B144
  c->r[6]=R32(c->r[3]+0x00000038u); // 8024B148
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8024B14C
  W32(c->r[1]+0x00000040u,c->r[6]); // 8024B150
  W32(c->r[1]+0x00000044u,c->r[0]); // 8024B154
  c->r[0]=R8(c->r[3]+0x00000040u); // 8024B158
  W8(c->r[1]+0x00000048u,c->r[0]); // 8024B15C
  c->r[0]=R8(c->r[3]+0x00000041u); // 8024B160
  W8(c->r[1]+0x00000049u,c->r[0]); // 8024B164
  c->r[0]=R8(c->r[3]+0x00000042u); // 8024B168
  W8(c->r[1]+0x0000004Au,c->r[0]); // 8024B16C
  c->r[0]=R8(c->r[3]+0x00000043u); // 8024B170
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 8024B174
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B178
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8024B17C
  c->r[0]=R32(c->r[3]+0x00000048u); // 8024B180
  W32(c->r[1]+0x00000050u,c->r[0]); // 8024B184
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B188
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8024B18C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B190
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8024B194
  c->r[0]=R32(c->r[3]+0x00000054u); // 8024B198
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8024B19C
  c->r[0]=R32(c->r[3]+0x00000058u); // 8024B1A0
  W32(c->r[1]+0x00000060u,c->r[0]); // 8024B1A4
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8024B1A8
  c->r[3]=c->r[1]+0x00000008u; // 8024B1AC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8024B1B0
  c->lr=0x8024B1B8u; f_8024B93C(c); // 8024B1B4
  c->f[30]=c->f[1]; // 8024B1B8
  c->r[3]=c->r[1]+0x00000008u; // 8024B1BC
  c->lr=0x8024B1C4u; f_80249460(c); // 8024B1C0
  c->f[31]=c->f[1]; // 8024B1C4
  c->r[3]=c->r[1]+0x00000008u; // 8024B1C8
  c->lr=0x8024B1D0u; f_80249458(c); // 8024B1CC
  c->f[2]=c->f[31]; // 8024B1D0
  c->r[3]=c->r[31]|c->r[31]; // 8024B1D4
  c->lr=0x8024B1DCu; f_8024941C(c); // 8024B1D8
  c->r[3]=c->r[1]+0x00000008u; // 8024B1DC
  c->r[4]=0u+0x00000000u; // 8024B1E0
  c->lr=0x8024B1E8u; f_80248188(c); // 8024B1E4
  c->f[1]=c->f[30]; // 8024B1E8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8024B1EC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8024B1F0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8024B1F4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8024B1F8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8024B1FC
  c->r[0]=R32(c->r[1]+0x00000094u); // 8024B200
  c->lr=c->r[0]; // 8024B204
  c->r[1]=c->r[1]+0x00000090u; // 8024B208
  return; // 8024B20C
}

// Print__Q36nw4hbm2ut17TextWriterBase<w>FPCw
void f_8024B210(Ctx* __restrict c) {
  trace_call(0x8024B210u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B210
  c->r[0]=c->lr; // 8024B214
  W32(c->r[1]+0x00000094u,c->r[0]); // 8024B218
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8024B21C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8024B220
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8024B224
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8024B228
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8024B22C
  c->r[31]=c->r[4]|c->r[4]; // 8024B230
  W32(c->r[1]+0x00000068u,c->r[30]); // 8024B234
  c->r[30]=c->r[3]|c->r[3]; // 8024B238
  c->r[3]=c->r[31]|c->r[31]; // 8024B23C
  c->lr=0x8024B244u; f_800DFD90(c); // 8024B240
  c->r[0]=R8(c->r[30]+0x00000000u); // 8024B244
  W8(c->r[1]+0x00000008u,c->r[0]); // 8024B248
  c->r[0]=R8(c->r[30]+0x00000001u); // 8024B24C
  W8(c->r[1]+0x00000009u,c->r[0]); // 8024B250
  c->r[0]=R8(c->r[30]+0x00000002u); // 8024B254
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8024B258
  c->r[0]=R8(c->r[30]+0x00000003u); // 8024B25C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8024B260
  c->r[0]=R8(c->r[30]+0x00000004u); // 8024B264
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8024B268
  c->r[0]=R8(c->r[30]+0x00000005u); // 8024B26C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8024B270
  c->r[0]=R8(c->r[30]+0x00000006u); // 8024B274
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 8024B278
  c->r[0]=R8(c->r[30]+0x00000007u); // 8024B27C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8024B280
  c->r[0]=R8(c->r[30]+0x00000008u); // 8024B284
  W8(c->r[1]+0x00000010u,c->r[0]); // 8024B288
  c->r[0]=R8(c->r[30]+0x00000009u); // 8024B28C
  W8(c->r[1]+0x00000011u,c->r[0]); // 8024B290
  c->r[0]=R8(c->r[30]+0x0000000Au); // 8024B294
  W8(c->r[1]+0x00000012u,c->r[0]); // 8024B298
  c->r[0]=R8(c->r[30]+0x0000000Bu); // 8024B29C
  W8(c->r[1]+0x00000013u,c->r[0]); // 8024B2A0
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 8024B2A4
  W8(c->r[1]+0x00000014u,c->r[0]); // 8024B2A8
  c->r[0]=R8(c->r[30]+0x0000000Du); // 8024B2AC
  W8(c->r[1]+0x00000015u,c->r[0]); // 8024B2B0
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 8024B2B4
  W8(c->r[1]+0x00000016u,c->r[0]); // 8024B2B8
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 8024B2BC
  W8(c->r[1]+0x00000017u,c->r[0]); // 8024B2C0
  c->r[0]=R8(c->r[30]+0x00000010u); // 8024B2C4
  W8(c->r[1]+0x00000018u,c->r[0]); // 8024B2C8
  c->r[0]=R8(c->r[30]+0x00000011u); // 8024B2CC
  W8(c->r[1]+0x00000019u,c->r[0]); // 8024B2D0
  c->r[0]=R8(c->r[30]+0x00000012u); // 8024B2D4
  W8(c->r[1]+0x0000001Au,c->r[0]); // 8024B2D8
  c->r[0]=R8(c->r[30]+0x00000013u); // 8024B2DC
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 8024B2E0
  c->r[0]=R8(c->r[30]+0x00000014u); // 8024B2E4
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8024B2E8
  c->r[0]=R8(c->r[30]+0x00000015u); // 8024B2EC
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8024B2F0
  c->r[0]=R8(c->r[30]+0x00000016u); // 8024B2F4
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 8024B2F8
  c->r[0]=R8(c->r[30]+0x00000017u); // 8024B2FC
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 8024B300
  c->r[0]=R8(c->r[30]+0x00000018u); // 8024B304
  W8(c->r[1]+0x00000020u,c->r[0]); // 8024B308
  c->r[0]=R8(c->r[30]+0x00000019u); // 8024B30C
  W8(c->r[1]+0x00000021u,c->r[0]); // 8024B310
  c->r[0]=R8(c->r[30]+0x0000001Au); // 8024B314
  W8(c->r[1]+0x00000022u,c->r[0]); // 8024B318
  c->r[0]=R8(c->r[30]+0x0000001Bu); // 8024B31C
  W8(c->r[1]+0x00000023u,c->r[0]); // 8024B320
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 8024B324
  W8(c->r[1]+0x00000024u,c->r[0]); // 8024B328
  c->r[0]=R8(c->r[30]+0x0000001Du); // 8024B32C
  W8(c->r[1]+0x00000025u,c->r[0]); // 8024B330
  c->r[0]=R8(c->r[30]+0x0000001Eu); // 8024B334
  W8(c->r[1]+0x00000026u,c->r[0]); // 8024B338
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 8024B33C
  W8(c->r[1]+0x00000027u,c->r[0]); // 8024B340
  c->r[0]=R32(c->r[30]+0x00000020u); // 8024B344
  W32(c->r[1]+0x00000028u,c->r[0]); // 8024B348
  c->r[4]=R32(c->r[30]+0x00000024u); // 8024B34C
  c->r[0]=R32(c->r[30]+0x00000028u); // 8024B350
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8024B354
  W32(c->r[1]+0x00000030u,c->r[0]); // 8024B358
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 8024B35C
  c->r[0]=R32(c->r[30]+0x00000030u); // 8024B360
  W32(c->r[1]+0x00000034u,c->r[4]); // 8024B364
  W32(c->r[1]+0x00000038u,c->r[0]); // 8024B368
  c->r[0]=R32(c->r[30]+0x00000034u); // 8024B36C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8024B370
  c->r[4]=R32(c->r[30]+0x00000038u); // 8024B374
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 8024B378
  W32(c->r[1]+0x00000040u,c->r[4]); // 8024B37C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8024B380
  c->r[0]=R8(c->r[30]+0x00000040u); // 8024B384
  W8(c->r[1]+0x00000048u,c->r[0]); // 8024B388
  c->r[0]=R8(c->r[30]+0x00000041u); // 8024B38C
  W8(c->r[1]+0x00000049u,c->r[0]); // 8024B390
  c->r[0]=R8(c->r[30]+0x00000042u); // 8024B394
  W8(c->r[1]+0x0000004Au,c->r[0]); // 8024B398
  c->r[0]=R8(c->r[30]+0x00000043u); // 8024B39C
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 8024B3A0
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B3A4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8024B3A8
  c->r[0]=R32(c->r[30]+0x00000048u); // 8024B3AC
  W32(c->r[1]+0x00000050u,c->r[0]); // 8024B3B0
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B3B4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8024B3B8
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B3BC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8024B3C0
  c->r[0]=R32(c->r[30]+0x00000054u); // 8024B3C4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8024B3C8
  c->r[0]=R32(c->r[30]+0x00000058u); // 8024B3CC
  c->r[5]=c->r[3]|c->r[3]; // 8024B3D0
  c->r[4]=c->r[31]|c->r[31]; // 8024B3D4
  c->r[3]=c->r[1]+0x00000008u; // 8024B3D8
  W32(c->r[1]+0x00000060u,c->r[0]); // 8024B3DC
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 8024B3E0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8024B3E4
  c->lr=0x8024B3ECu; f_8024B93C(c); // 8024B3E8
  c->f[30]=c->f[1]; // 8024B3EC
  c->r[3]=c->r[1]+0x00000008u; // 8024B3F0
  c->lr=0x8024B3F8u; f_80249460(c); // 8024B3F4
  c->f[31]=c->f[1]; // 8024B3F8
  c->r[3]=c->r[1]+0x00000008u; // 8024B3FC
  c->lr=0x8024B404u; f_80249458(c); // 8024B400
  c->f[2]=c->f[31]; // 8024B404
  c->r[3]=c->r[30]|c->r[30]; // 8024B408
  c->lr=0x8024B410u; f_8024941C(c); // 8024B40C
  c->r[3]=c->r[1]+0x00000008u; // 8024B410
  c->r[4]=0u+0x00000000u; // 8024B414
  c->lr=0x8024B41Cu; f_80248188(c); // 8024B418
  c->f[1]=c->f[30]; // 8024B41C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8024B420
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8024B424
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8024B428
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8024B42C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8024B430
  c->r[30]=R32(c->r[1]+0x00000068u); // 8024B434
  c->r[0]=R32(c->r[1]+0x00000094u); // 8024B438
  c->lr=c->r[0]; // 8024B43C
  c->r[1]=c->r[1]+0x00000090u; // 8024B440
  return; // 8024B444
}

// CalcLineRectImpl__Q36nw4hbm2ut17TextWriterBase<w>FPQ36nw4hbm2ut4RectPCwi
void f_8024B448(Ctx* __restrict c) {
  trace_call(0x8024B448u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B448
  c->r[0]=c->lr; // 8024B44C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8024B450
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 8024B454
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 8024B458
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 8024B45C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 8024B460
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 8024B464
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 8024B468
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[28]);} // 8024B46C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,28,ea,0,0);} // 8024B470
  c->r[11]=c->r[1]+0x00000070u; // 8024B474
  c->lr=0x8024B47Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024B478
  c->r[26]=0u+0x00000000u; // 8024B47C
  W32(c->r[1]+0x00000028u,c->r[3]); // 8024B480
  c->r[27]=c->r[3]|c->r[3]; // 8024B484
  c->r[28]=c->r[4]|c->r[4]; // 8024B488
  W32(c->r[1]+0x00000030u,c->r[26]); // 8024B48C
  c->r[29]=c->r[5]|c->r[5]; // 8024B490
  c->r[30]=c->r[6]|c->r[6]; // 8024B494
  W32(c->r[1]+0x00000034u,c->r[26]); // 8024B498
  W32(c->r[1]+0x00000038u,c->r[26]); // 8024B49C
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8024B4A0
  c->lr=0x8024B4A8u; f_802481D0(c); // 8024B4A4
  c->r[25]=0u+0x80260000u; // 8024B4A8
  c->r[4]=c->r[3]|c->r[3]; // 8024B4AC
  {uint32_t ea=c->r[25]+0x00001B20u; c->f[31]=c->ps1[31]=RF32(ea);} // 8024B4B0
  c->r[3]=c->r[1]+0x00000018u; // 8024B4B4
  c->r[31]=0u+0x00000000u; // 8024B4B8
  c->lr=0x8024B4C0u; f_80244F74(c); // 8024B4BC
  c->f[0]=c->f[31]; // 8024B4C0
  c->r[3]=c->r[27]|c->r[27]; // 8024B4C4
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8024B4C8
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 8024B4CC
  c->lr=0x8024B4D4u; f_802481D0(c); // 8024B4D0
  cmps(c,0,(int32_t)c->r[3],0); // 8024B4D4
  if (crb(c,2)) { goto L_8024B4F0; } // 8024B4D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024B4DC
  c->r[12]=R32(c->r[12]+0x00000034u); // 8024B4E0
  c->ctr=c->r[12]; // 8024B4E4
  if (true) { c->lr=0x8024B4ECu; dispatch(c,c->ctr); } // 8024B4E8
  c->r[26]=c->r[3]|c->r[3]; // 8024B4EC
L_8024B4F0:;
  c->r[3]=c->r[27]|c->r[27]; // 8024B4F0
  c->lr=0x8024B4F8u; f_802490CC(c); // 8024B4F4
  c->r[3]=c->r[26]^0x80000000u; // 8024B4F8
  c->r[0]=0u+0x43300000u; // 8024B4FC
  W32(c->r[1]+0x00000044u,c->r[3]); // 8024B500
  c->r[4]=0u+0x80260000u; // 8024B504
  c->r[3]=0u+0x80260000u; // 8024B508
  {uint32_t ea=c->r[4]+0x00001B28u; c->f[4]=RF64(ea);} // 8024B50C
  W32(c->r[1]+0x00000040u,c->r[0]); // 8024B510
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024B514
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 8024B518
  {uint32_t ea=c->r[3]+0x00001B20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B51C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8024B520
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8024B524
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8024B528
  fcmp(c,0,c->f[0],c->f[1]); // 8024B52C
  if (!crb(c,1)) { goto L_8024B538; } // 8024B530
  goto L_8024B53C; // 8024B534
L_8024B538:;
  c->f[1]=c->f[0]; // 8024B538
L_8024B53C:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8024B53C
  c->r[3]=c->r[27]|c->r[27]; // 8024B540
  c->lr=0x8024B548u; f_802481D0(c); // 8024B544
  cmps(c,0,(int32_t)c->r[3],0); // 8024B548
  if (crb(c,2)) { goto L_8024B568; } // 8024B54C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024B550
  c->r[12]=R32(c->r[12]+0x00000034u); // 8024B554
  c->ctr=c->r[12]; // 8024B558
  if (true) { c->lr=0x8024B560u; dispatch(c,c->ctr); } // 8024B55C
  c->r[25]=c->r[3]|c->r[3]; // 8024B560
  goto L_8024B56C; // 8024B564
L_8024B568:;
  c->r[25]=0u+0x00000000u; // 8024B568
L_8024B56C:;
  c->r[3]=c->r[27]|c->r[27]; // 8024B56C
  c->lr=0x8024B574u; f_802490CC(c); // 8024B570
  c->r[3]=c->r[25]^0x80000000u; // 8024B574
  c->r[0]=0u+0x43300000u; // 8024B578
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 8024B57C
  c->r[4]=0u+0x80260000u; // 8024B580
  c->r[3]=0u+0x80260000u; // 8024B584
  {uint32_t ea=c->r[4]+0x00001B28u; c->f[4]=RF64(ea);} // 8024B588
  W32(c->r[1]+0x00000048u,c->r[0]); // 8024B58C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024B590
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=RF64(ea);} // 8024B594
  {uint32_t ea=c->r[3]+0x00001B20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B598
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8024B59C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8024B5A0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8024B5A4
  fcmp(c,0,c->f[0],c->f[1]); // 8024B5A8
  if (!crb(c,0)) { goto L_8024B5B4; } // 8024B5AC
  goto L_8024B5B8; // 8024B5B0
L_8024B5B4:;
  c->f[1]=c->f[0]; // 8024B5B4
L_8024B5B8:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024B5B8
  c->r[3]=c->r[1]+0x00000018u; // 8024B5BC
  c->r[12]=c->r[1]+0x0000001Cu; // 8024B5C0
  W32(c->r[1]+0x00000018u,c->r[29]); // 8024B5C4
  c->lr=0x8024B5CCu; f_800D48C4(c); // 8024B5C8
  c->r[0]=c->r[0]|0x00000000u; // 8024B5CC
  c->r[5]=0u+0x80260000u; // 8024B5D0
  c->r[4]=0u+0x80260000u; // 8024B5D4
  {uint32_t ea=c->r[5]+0x00001B20u; c->f[28]=c->ps1[28]=RF32(ea);} // 8024B5D8
  c->r[25]=c->r[3]|c->r[3]; // 8024B5DC
  {uint32_t ea=c->r[4]+0x00001B28u; c->f[30]=RF64(ea);} // 8024B5E0
  c->r[26]=0u+0x43300000u; // 8024B5E4
  goto L_8024B7BC; // 8024B5E8
L_8024B5EC:;
  c->r[0]=rotl(c->r[25],0)&0x0000FFFFu; // 8024B5EC
  cmps(c,0,(int32_t)c->r[0],32); // 8024B5F0
  if (!crb(c,0)) { goto L_8024B708; } // 8024B5F4
  c->r[0]=cntlz(c->r[31]); // 8024B5F8
  c->f[1]=c->f[31]; // 8024B5FC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024B600
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 8024B604
  c->r[3]=c->r[27]|c->r[27]; // 8024B608
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[28]);} // 8024B60C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[28]);} // 8024B610
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[28]);} // 8024B614
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8024B618
  W32(c->r[1]+0x00000038u,c->r[0]); // 8024B61C
  c->lr=0x8024B624u; f_80249428(c); // 8024B620
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 8024B624
  c->r[4]=c->r[1]+0x00000008u; // 8024B628
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 8024B62C
  c->r[6]=c->r[1]+0x00000028u; // 8024B630
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024B634
  c->r[12]=R32(c->r[12]+0x00000010u); // 8024B638
  c->ctr=c->r[12]; // 8024B63C
  if (true) { c->lr=0x8024B644u; dispatch(c,c->ctr); } // 8024B640
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8024B644
  c->r[25]=c->r[3]|c->r[3]; // 8024B648
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B64C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8024B650
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B654
  fcmp(c,0,c->f[0],c->f[1]); // 8024B658
  if (!crb(c,1)) { goto L_8024B664; } // 8024B65C
  goto L_8024B668; // 8024B660
L_8024B664:;
  c->f[1]=c->f[0]; // 8024B664
L_8024B668:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 8024B668
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B66C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B670
  fcmp(c,0,c->f[0],c->f[1]); // 8024B674
  if (!crb(c,1)) { goto L_8024B680; } // 8024B678
  goto L_8024B684; // 8024B67C
L_8024B680:;
  c->f[1]=c->f[0]; // 8024B680
L_8024B684:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8024B684
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B688
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B68C
  fcmp(c,0,c->f[0],c->f[1]); // 8024B690
  if (!crb(c,0)) { goto L_8024B69C; } // 8024B694
  goto L_8024B6A0; // 8024B698
L_8024B69C:;
  c->f[1]=c->f[0]; // 8024B69C
L_8024B6A0:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8024B6A0
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B6A4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B6A8
  fcmp(c,0,c->f[0],c->f[1]); // 8024B6AC
  if (!crb(c,0)) { goto L_8024B6B8; } // 8024B6B0
  goto L_8024B6BC; // 8024B6B4
L_8024B6B8:;
  c->f[1]=c->f[0]; // 8024B6B8
L_8024B6BC:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024B6BC
  c->r[3]=c->r[27]|c->r[27]; // 8024B6C0
  c->lr=0x8024B6C8u; f_80249458(c); // 8024B6C4
  cmps(c,0,(int32_t)c->r[25],4); // 8024B6C8
  c->f[31]=c->f[1]; // 8024B6CC
  if (!crb(c,2)) { goto L_8024B6DC; } // 8024B6D0
  c->r[3]=c->r[30]|c->r[30]; // 8024B6D4
  goto L_8024B7EC; // 8024B6D8
L_8024B6DC:;
  cmps(c,0,(int32_t)c->r[25],1); // 8024B6DC
  if (!crb(c,2)) { goto L_8024B6EC; } // 8024B6E0
  c->r[31]=0u+0x00000000u; // 8024B6E4
  goto L_8024B7A8; // 8024B6E8
L_8024B6EC:;
  cmps(c,0,(int32_t)c->r[25],2); // 8024B6EC
  if (!crb(c,2)) { goto L_8024B6FC; } // 8024B6F0
  c->r[31]=0u+0x00000001u; // 8024B6F4
  goto L_8024B7A8; // 8024B6F8
L_8024B6FC:;
  cmps(c,0,(int32_t)c->r[25],3); // 8024B6FC
  if (crb(c,2)) { goto L_8024B7D8; } // 8024B700
  goto L_8024B7A8; // 8024B704
L_8024B708:;
  cmps(c,0,(int32_t)c->r[31],0); // 8024B708
  if (crb(c,2)) { goto L_8024B718; } // 8024B70C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B710
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8024B714
L_8024B718:;
  c->r[3]=c->r[27]|c->r[27]; // 8024B718
  c->r[31]=0u+0x00000001u; // 8024B71C
  c->lr=0x8024B724u; f_802492D0(c); // 8024B720
  cmps(c,0,(int32_t)c->r[3],0); // 8024B724
  if (crb(c,2)) { goto L_8024B73C; } // 8024B728
  c->r[3]=c->r[27]|c->r[27]; // 8024B72C
  c->lr=0x8024B734u; f_802492D8(c); // 8024B730
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 8024B734
  goto L_8024B780; // 8024B738
L_8024B73C:;
  c->r[3]=c->r[27]|c->r[27]; // 8024B73C
  c->lr=0x8024B744u; f_802490C4(c); // 8024B740
  c->f[29]=c->f[1]; // 8024B744
  c->r[3]=c->r[27]|c->r[27]; // 8024B748
  c->lr=0x8024B750u; f_802481D0(c); // 8024B74C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024B750
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 8024B754
  c->r[12]=R32(c->r[12]+0x00000048u); // 8024B758
  c->ctr=c->r[12]; // 8024B75C
  if (true) { c->lr=0x8024B764u; dispatch(c,c->ctr); } // 8024B760
  c->r[0]=c->r[3]^0x80000000u; // 8024B764
  W32(c->r[1]+0x00000048u,c->r[26]); // 8024B768
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8024B76C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 8024B770
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8024B774
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 8024B778
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8024B77C
L_8024B780:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B780
  fcmp(c,0,c->f[0],c->f[31]); // 8024B784
  if (!crb(c,1)) { goto L_8024B790; } // 8024B788
  c->f[0]=c->f[31]; // 8024B78C
L_8024B790:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B790
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8024B794
  fcmp(c,0,c->f[1],c->f[31]); // 8024B798
  if (!crb(c,0)) { goto L_8024B7A4; } // 8024B79C
  c->f[1]=c->f[31]; // 8024B7A0
L_8024B7A4:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8024B7A4
L_8024B7A8:;
  c->r[3]=c->r[1]+0x00000018u; // 8024B7A8
  c->r[12]=c->r[1]+0x0000001Cu; // 8024B7AC
  c->lr=0x8024B7B4u; f_800D48C4(c); // 8024B7B0
  c->r[0]=c->r[0]|0x00000000u; // 8024B7B4
  c->r[25]=c->r[3]|c->r[3]; // 8024B7B8
L_8024B7BC:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 8024B7BC
  c->r[3]=c->r[4]-c->r[29]; // 8024B7C0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8024B7C4
  c->r[0]=c->r[0]+c->r[3]; // 8024B7C8
  c->r[0]=sraw(c,c->r[0],1); // 8024B7CC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8024B7D0
  if (!crb(c,1)) { IRQCHK(c); goto L_8024B5EC; } // 8024B7D4
L_8024B7D8:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 8024B7D8
  c->r[3]=c->r[0]-c->r[29]; // 8024B7DC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8024B7E0
  c->r[0]=c->r[0]+c->r[3]; // 8024B7E4
  c->r[3]=sraw(c,c->r[0],1); // 8024B7E8
L_8024B7EC:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 8024B7EC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 8024B7F0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 8024B7F4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 8024B7F8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 8024B7FC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 8024B800
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,28,ea,0,0);} // 8024B804
  c->r[11]=c->r[1]+0x00000070u; // 8024B808
  {uint32_t ea=c->r[1]+0x00000070u; c->f[28]=RF64(ea);} // 8024B80C
  c->lr=0x8024B814u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024B810
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8024B814
  c->lr=c->r[0]; // 8024B818
  c->r[1]=c->r[1]+0x000000B0u; // 8024B81C
  return; // 8024B820
}

// CalcStringRectImpl__Q36nw4hbm2ut17TextWriterBase<w>FPQ36nw4hbm2ut4RectPCwi
void f_8024B824(Ctx* __restrict c) {
  trace_call(0x8024B824u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B824
  c->r[0]=c->lr; // 8024B828
  W32(c->r[1]+0x00000044u,c->r[0]); // 8024B82C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8024B830
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8024B834
  c->r[11]=c->r[1]+0x00000030u; // 8024B838
  c->lr=0x8024B840u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024B83C
  c->r[31]=0u+0x80260000u; // 8024B840
  c->r[27]=c->r[3]|c->r[3]; // 8024B844
  {uint32_t ea=c->r[31]+0x00001B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B848
  c->r[28]=c->r[4]|c->r[4]; // 8024B84C
  c->r[29]=c->r[5]|c->r[5]; // 8024B850
  c->r[30]=c->r[6]|c->r[6]; // 8024B854
  c->f[2]=c->f[1]; // 8024B858
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 8024B85C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 8024B860
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 8024B864
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024B868
  c->lr=0x8024B870u; f_8024941C(c); // 8024B86C
  {uint32_t ea=c->r[31]+0x00001B20u; c->f[31]=c->ps1[31]=RF32(ea);} // 8024B870
L_8024B874:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 8024B874
  c->r[3]=c->r[27]|c->r[27]; // 8024B878
  c->r[5]=c->r[29]|c->r[29]; // 8024B87C
  c->r[6]=c->r[30]|c->r[30]; // 8024B880
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 8024B884
  c->r[4]=c->r[1]+0x00000008u; // 8024B888
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8024B88C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 8024B890
  c->lr=0x8024B898u; f_8024B448(c); // 8024B894
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B898
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8024B89C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B8A0
  c->r[29]=c->r[29]+c->r[0]; // 8024B8A4
  c->r[30]=c->r[30]-c->r[3]; // 8024B8A8
  fcmp(c,0,c->f[0],c->f[1]); // 8024B8AC
  if (!crb(c,1)) { goto L_8024B8B8; } // 8024B8B0
  goto L_8024B8BC; // 8024B8B4
L_8024B8B8:;
  c->f[1]=c->f[0]; // 8024B8B8
L_8024B8BC:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 8024B8BC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B8C0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B8C4
  fcmp(c,0,c->f[0],c->f[1]); // 8024B8C8
  if (!crb(c,1)) { goto L_8024B8D4; } // 8024B8CC
  goto L_8024B8D8; // 8024B8D0
L_8024B8D4:;
  c->f[1]=c->f[0]; // 8024B8D4
L_8024B8D8:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8024B8D8
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B8DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B8E0
  fcmp(c,0,c->f[0],c->f[1]); // 8024B8E4
  if (!crb(c,0)) { goto L_8024B8F0; } // 8024B8E8
  goto L_8024B8F4; // 8024B8EC
L_8024B8F0:;
  c->f[1]=c->f[0]; // 8024B8F0
L_8024B8F4:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8024B8F4
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B8F8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024B8FC
  fcmp(c,0,c->f[0],c->f[1]); // 8024B900
  if (!crb(c,0)) { goto L_8024B90C; } // 8024B904
  goto L_8024B910; // 8024B908
L_8024B90C:;
  c->f[1]=c->f[0]; // 8024B90C
L_8024B910:;
  cmps(c,0,(int32_t)c->r[30],0); // 8024B910
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024B914
  if (crb(c,1)) { IRQCHK(c); goto L_8024B874; } // 8024B918
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8024B91C
  c->r[11]=c->r[1]+0x00000030u; // 8024B920
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8024B924
  c->lr=0x8024B92Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024B928
  c->r[0]=R32(c->r[1]+0x00000044u); // 8024B92C
  c->lr=c->r[0]; // 8024B930
  c->r[1]=c->r[1]+0x00000040u; // 8024B934
  return; // 8024B938
}

// PrintImpl__Q36nw4hbm2ut17TextWriterBase<w>FPCwi
void f_8024B93C(Ctx* __restrict c) {
  trace_call(0x8024B93Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B93C
  c->r[0]=c->lr; // 8024B940
  W32(c->r[1]+0x000001C4u,c->r[0]); // 8024B944
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[31]);} // 8024B948
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,31,ea,0,0);} // 8024B94C
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[30]);} // 8024B950
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,30,ea,0,0);} // 8024B954
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[29]);} // 8024B958
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,29,ea,0,0);} // 8024B95C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[28]);} // 8024B960
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,28,ea,0,0);} // 8024B964
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[27]);} // 8024B968
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,27,ea,0,0);} // 8024B96C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[26]);} // 8024B970
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,26,ea,0,0);} // 8024B974
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[25]);} // 8024B978
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,25,ea,0,0);} // 8024B97C
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[24]);} // 8024B980
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,24,ea,0,0);} // 8024B984
  c->r[11]=c->r[1]+0x00000140u; // 8024B988
  c->lr=0x8024B990u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024B98C
  c->r[28]=c->r[3]|c->r[3]; // 8024B990
  c->r[29]=c->r[4]|c->r[4]; // 8024B994
  c->r[30]=c->r[5]|c->r[5]; // 8024B998
  c->lr=0x8024B9A0u; f_80249458(c); // 8024B99C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024B9A0
  c->r[3]=c->r[28]|c->r[28]; // 8024B9A4
  c->lr=0x8024B9ACu; f_80249460(c); // 8024B9A8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8024B9AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8024B9B0
  c->r[3]=c->r[28]|c->r[28]; // 8024B9B4
  c->r[6]=c->r[29]|c->r[29]; // 8024B9B8
  c->r[7]=c->r[30]|c->r[30]; // 8024B9BC
  c->r[4]=c->r[1]+0x0000000Cu; // 8024B9C0
  c->r[5]=c->r[1]+0x00000008u; // 8024B9C4
  c->r[31]=0u+0x00000000u; // 8024B9C8
  c->lr=0x8024B9D0u; f_8024C08C(c); // 8024B9CC
  c->f[29]=c->f[1]; // 8024B9D0
  c->r[3]=c->r[28]|c->r[28]; // 8024B9D4
  c->lr=0x8024B9DCu; f_80249458(c); // 8024B9D8
  c->r[3]=c->r[28]|c->r[28]; // 8024B9DC
  c->lr=0x8024B9E4u; f_80249460(c); // 8024B9E0
  c->r[0]=0u+0x00000000u; // 8024B9E4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024B9E8
  W32(c->r[1]+0x00000048u,c->r[0]); // 8024B9EC
  c->f[30]=c->ps1[30]=S(c->f[28]-c->f[1]); // 8024B9F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024B9F4
  c->r[3]=c->r[28]|c->r[28]; // 8024B9F8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8024B9FC
  W32(c->r[1]+0x00000050u,c->r[0]); // 8024BA00
  W32(c->r[1]+0x00000040u,c->r[28]); // 8024BA04
  W32(c->r[1]+0x00000044u,c->r[29]); // 8024BA08
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 8024BA0C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8024BA10
  c->lr=0x8024BA18u; f_802481D0(c); // 8024BA14
  c->r[4]=c->r[3]|c->r[3]; // 8024BA18
  c->r[3]=c->r[1]+0x00000030u; // 8024BA1C
  c->lr=0x8024BA24u; f_80244F74(c); // 8024BA20
  W32(c->r[1]+0x00000030u,c->r[29]); // 8024BA24
  c->r[3]=c->r[1]+0x00000030u; // 8024BA28
  c->r[12]=c->r[1]+0x00000034u; // 8024BA2C
  c->lr=0x8024BA34u; f_800D48C4(c); // 8024BA30
  c->r[0]=c->r[0]|0x00000000u; // 8024BA34
  c->r[4]=0u+0x80260000u; // 8024BA38
  c->r[5]=0u+0x80260000u; // 8024BA3C
  {uint32_t ea=c->r[4]+0x00001B20u; c->f[31]=c->ps1[31]=RF32(ea);} // 8024BA40
  c->r[4]=0u+0x80260000u; // 8024BA44
  {uint32_t ea=c->r[5]+0x00001B30u; c->f[25]=c->ps1[25]=RF32(ea);} // 8024BA48
  c->r[26]=c->r[3]|c->r[3]; // 8024BA4C
  {uint32_t ea=c->r[4]+0x00001B28u; c->f[27]=RF64(ea);} // 8024BA50
  c->r[27]=0u+0x43300000u; // 8024BA54
  goto L_8024BFE0; // 8024BA58
L_8024BA5C:;
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 8024BA5C
  cmps(c,0,(int32_t)c->r[4],32); // 8024BA60
  if (!crb(c,0)) { goto L_8024BF40; } // 8024BA64
  c->r[0]=cntlz(c->r[31]); // 8024BA68
  W32(c->r[1]+0x00000044u,c->r[5]); // 8024BA6C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024BA70
  c->r[5]=c->r[1]+0x00000040u; // 8024BA74
  W32(c->r[1]+0x00000050u,c->r[0]); // 8024BA78
  c->r[3]=R32(c->r[28]+0x0000005Cu); // 8024BA7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024BA80
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8024BA84
  c->ctr=c->r[12]; // 8024BA88
  if (true) { c->lr=0x8024BA90u; dispatch(c,c->ctr); } // 8024BA8C
  cmps(c,0,(int32_t)c->r[3],3); // 8024BA90
  if (!crb(c,2)) { goto L_8024BF0C; } // 8024BA94
  c->r[0]=R32(c->r[28]+0x00000058u); // 8024BA98
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8024BA9C
  cmpu(c,0,c->r[0],0x00000001u); // 8024BAA0
  if (!crb(c,2)) { goto L_8024BCBC; } // 8024BAA4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[31]);} // 8024BAA8
  c->r[31]=R32(c->r[1]+0x00000044u); // 8024BAAC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 8024BAB0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 8024BAB4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 8024BAB8
  c->r[0]=R8(c->r[28]+0x00000000u); // 8024BABC
  W8(c->r[1]+0x000000B8u,c->r[0]); // 8024BAC0
  c->r[0]=R8(c->r[28]+0x00000001u); // 8024BAC4
  W8(c->r[1]+0x000000B9u,c->r[0]); // 8024BAC8
  c->r[0]=R8(c->r[28]+0x00000002u); // 8024BACC
  W8(c->r[1]+0x000000BAu,c->r[0]); // 8024BAD0
  c->r[0]=R8(c->r[28]+0x00000003u); // 8024BAD4
  W8(c->r[1]+0x000000BBu,c->r[0]); // 8024BAD8
  c->r[0]=R8(c->r[28]+0x00000004u); // 8024BADC
  W8(c->r[1]+0x000000BCu,c->r[0]); // 8024BAE0
  c->r[0]=R8(c->r[28]+0x00000005u); // 8024BAE4
  W8(c->r[1]+0x000000BDu,c->r[0]); // 8024BAE8
  c->r[0]=R8(c->r[28]+0x00000006u); // 8024BAEC
  W8(c->r[1]+0x000000BEu,c->r[0]); // 8024BAF0
  c->r[0]=R8(c->r[28]+0x00000007u); // 8024BAF4
  W8(c->r[1]+0x000000BFu,c->r[0]); // 8024BAF8
  c->r[0]=R8(c->r[28]+0x00000008u); // 8024BAFC
  W8(c->r[1]+0x000000C0u,c->r[0]); // 8024BB00
  c->r[0]=R8(c->r[28]+0x00000009u); // 8024BB04
  W8(c->r[1]+0x000000C1u,c->r[0]); // 8024BB08
  c->r[0]=R8(c->r[28]+0x0000000Au); // 8024BB0C
  W8(c->r[1]+0x000000C2u,c->r[0]); // 8024BB10
  c->r[0]=R8(c->r[28]+0x0000000Bu); // 8024BB14
  W8(c->r[1]+0x000000C3u,c->r[0]); // 8024BB18
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 8024BB1C
  W8(c->r[1]+0x000000C4u,c->r[0]); // 8024BB20
  c->r[0]=R8(c->r[28]+0x0000000Du); // 8024BB24
  W8(c->r[1]+0x000000C5u,c->r[0]); // 8024BB28
  c->r[0]=R8(c->r[28]+0x0000000Eu); // 8024BB2C
  W8(c->r[1]+0x000000C6u,c->r[0]); // 8024BB30
  c->r[0]=R8(c->r[28]+0x0000000Fu); // 8024BB34
  W8(c->r[1]+0x000000C7u,c->r[0]); // 8024BB38
  c->r[0]=R8(c->r[28]+0x00000010u); // 8024BB3C
  W8(c->r[1]+0x000000C8u,c->r[0]); // 8024BB40
  c->r[0]=R8(c->r[28]+0x00000011u); // 8024BB44
  W8(c->r[1]+0x000000C9u,c->r[0]); // 8024BB48
  c->r[0]=R8(c->r[28]+0x00000012u); // 8024BB4C
  W8(c->r[1]+0x000000CAu,c->r[0]); // 8024BB50
  c->r[0]=R8(c->r[28]+0x00000013u); // 8024BB54
  W8(c->r[1]+0x000000CBu,c->r[0]); // 8024BB58
  c->r[0]=R8(c->r[28]+0x00000014u); // 8024BB5C
  W8(c->r[1]+0x000000CCu,c->r[0]); // 8024BB60
  c->r[0]=R8(c->r[28]+0x00000015u); // 8024BB64
  W8(c->r[1]+0x000000CDu,c->r[0]); // 8024BB68
  c->r[0]=R8(c->r[28]+0x00000016u); // 8024BB6C
  W8(c->r[1]+0x000000CEu,c->r[0]); // 8024BB70
  c->r[0]=R8(c->r[28]+0x00000017u); // 8024BB74
  W8(c->r[1]+0x000000CFu,c->r[0]); // 8024BB78
  c->r[0]=R8(c->r[28]+0x00000018u); // 8024BB7C
  W8(c->r[1]+0x000000D0u,c->r[0]); // 8024BB80
  c->r[0]=R8(c->r[28]+0x00000019u); // 8024BB84
  W8(c->r[1]+0x000000D1u,c->r[0]); // 8024BB88
  c->r[0]=R8(c->r[28]+0x0000001Au); // 8024BB8C
  W8(c->r[1]+0x000000D2u,c->r[0]); // 8024BB90
  c->r[0]=R8(c->r[28]+0x0000001Bu); // 8024BB94
  W8(c->r[1]+0x000000D3u,c->r[0]); // 8024BB98
  c->r[0]=R8(c->r[28]+0x0000001Cu); // 8024BB9C
  W8(c->r[1]+0x000000D4u,c->r[0]); // 8024BBA0
  c->r[0]=R8(c->r[28]+0x0000001Du); // 8024BBA4
  W8(c->r[1]+0x000000D5u,c->r[0]); // 8024BBA8
  c->r[0]=R8(c->r[28]+0x0000001Eu); // 8024BBAC
  W8(c->r[1]+0x000000D6u,c->r[0]); // 8024BBB0
  c->r[0]=R8(c->r[28]+0x0000001Fu); // 8024BBB4
  W8(c->r[1]+0x000000D7u,c->r[0]); // 8024BBB8
  c->r[0]=R32(c->r[28]+0x00000020u); // 8024BBBC
  W32(c->r[1]+0x000000D8u,c->r[0]); // 8024BBC0
  c->r[3]=R32(c->r[28]+0x00000024u); // 8024BBC4
  c->r[0]=R32(c->r[28]+0x00000028u); // 8024BBC8
  W32(c->r[1]+0x000000DCu,c->r[3]); // 8024BBCC
  W32(c->r[1]+0x000000E0u,c->r[0]); // 8024BBD0
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 8024BBD4
  c->r[0]=R32(c->r[28]+0x00000030u); // 8024BBD8
  W32(c->r[1]+0x000000E4u,c->r[3]); // 8024BBDC
  W32(c->r[1]+0x000000E8u,c->r[0]); // 8024BBE0
  c->r[0]=R32(c->r[28]+0x00000034u); // 8024BBE4
  W32(c->r[1]+0x000000ECu,c->r[0]); // 8024BBE8
  c->r[3]=R32(c->r[28]+0x00000038u); // 8024BBEC
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 8024BBF0
  W32(c->r[1]+0x000000F0u,c->r[3]); // 8024BBF4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8024BBF8
  c->r[0]=R8(c->r[28]+0x00000040u); // 8024BBFC
  W8(c->r[1]+0x000000F8u,c->r[0]); // 8024BC00
  c->r[0]=R8(c->r[28]+0x00000041u); // 8024BC04
  W8(c->r[1]+0x000000F9u,c->r[0]); // 8024BC08
  c->r[0]=R8(c->r[28]+0x00000042u); // 8024BC0C
  W8(c->r[1]+0x000000FAu,c->r[0]); // 8024BC10
  c->r[0]=R8(c->r[28]+0x00000043u); // 8024BC14
  c->f[1]=c->f[31]; // 8024BC18
  c->f[2]=c->f[31]; // 8024BC1C
  c->r[3]=c->r[1]+0x000000B8u; // 8024BC20
  W8(c->r[1]+0x000000FBu,c->r[0]); // 8024BC24
  {uint32_t ea=c->r[28]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BC28
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 8024BC2C
  c->r[0]=R32(c->r[28]+0x00000048u); // 8024BC30
  W32(c->r[1]+0x00000100u,c->r[0]); // 8024BC34
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BC38
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8024BC3C
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BC40
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 8024BC44
  c->r[0]=R32(c->r[28]+0x00000054u); // 8024BC48
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 8024BC4C
  c->r[0]=R32(c->r[28]+0x00000058u); // 8024BC50
  W32(c->r[1]+0x00000110u,c->r[0]); // 8024BC54
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 8024BC58
  W32(c->r[1]+0x00000114u,c->r[0]); // 8024BC5C
  c->lr=0x8024BC64u; f_8024941C(c); // 8024BC60
  c->r[4]=c->r[31]-c->r[29]; // 8024BC64
  c->r[5]=c->r[31]|c->r[31]; // 8024BC68
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8024BC6C
  c->r[3]=c->r[1]+0x000000B8u; // 8024BC70
  c->r[0]=c->r[0]+c->r[4]; // 8024BC74
  c->r[4]=c->r[1]+0x00000020u; // 8024BC78
  c->r[0]=sraw(c,c->r[0],1); // 8024BC7C
  c->r[6]=c->r[30]-c->r[0]; // 8024BC80
  c->lr=0x8024BC88u; f_8024B448(c); // 8024BC84
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024BC88
  c->r[3]=c->r[1]+0x000000B8u; // 8024BC8C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BC90
  c->r[4]=0u+0x00000000u; // 8024BC94
  c->f[26]=c->ps1[26]=S(c->f[1]-c->f[0]); // 8024BC98
  c->lr=0x8024BCA0u; f_80248188(c); // 8024BC9C
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[26]); // 8024BCA0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BCA4
  c->r[3]=c->r[28]|c->r[28]; // 8024BCA8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[25]); // 8024BCAC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8024BCB0
  c->lr=0x8024BCB8u; f_80249428(c); // 8024BCB4
  goto L_8024BF04; // 8024BCB8
L_8024BCBC:;
  cmpu(c,0,c->r[0],0x00000002u); // 8024BCBC
  if (!crb(c,2)) { goto L_8024BED4; } // 8024BCC0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8024BCC4
  c->r[31]=R32(c->r[1]+0x00000044u); // 8024BCC8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 8024BCCC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 8024BCD0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 8024BCD4
  c->r[0]=R8(c->r[28]+0x00000000u); // 8024BCD8
  W8(c->r[1]+0x00000058u,c->r[0]); // 8024BCDC
  c->r[0]=R8(c->r[28]+0x00000001u); // 8024BCE0
  W8(c->r[1]+0x00000059u,c->r[0]); // 8024BCE4
  c->r[0]=R8(c->r[28]+0x00000002u); // 8024BCE8
  W8(c->r[1]+0x0000005Au,c->r[0]); // 8024BCEC
  c->r[0]=R8(c->r[28]+0x00000003u); // 8024BCF0
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 8024BCF4
  c->r[0]=R8(c->r[28]+0x00000004u); // 8024BCF8
  W8(c->r[1]+0x0000005Cu,c->r[0]); // 8024BCFC
  c->r[0]=R8(c->r[28]+0x00000005u); // 8024BD00
  W8(c->r[1]+0x0000005Du,c->r[0]); // 8024BD04
  c->r[0]=R8(c->r[28]+0x00000006u); // 8024BD08
  W8(c->r[1]+0x0000005Eu,c->r[0]); // 8024BD0C
  c->r[0]=R8(c->r[28]+0x00000007u); // 8024BD10
  W8(c->r[1]+0x0000005Fu,c->r[0]); // 8024BD14
  c->r[0]=R8(c->r[28]+0x00000008u); // 8024BD18
  W8(c->r[1]+0x00000060u,c->r[0]); // 8024BD1C
  c->r[0]=R8(c->r[28]+0x00000009u); // 8024BD20
  W8(c->r[1]+0x00000061u,c->r[0]); // 8024BD24
  c->r[0]=R8(c->r[28]+0x0000000Au); // 8024BD28
  W8(c->r[1]+0x00000062u,c->r[0]); // 8024BD2C
  c->r[0]=R8(c->r[28]+0x0000000Bu); // 8024BD30
  W8(c->r[1]+0x00000063u,c->r[0]); // 8024BD34
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 8024BD38
  W8(c->r[1]+0x00000064u,c->r[0]); // 8024BD3C
  c->r[0]=R8(c->r[28]+0x0000000Du); // 8024BD40
  W8(c->r[1]+0x00000065u,c->r[0]); // 8024BD44
  c->r[0]=R8(c->r[28]+0x0000000Eu); // 8024BD48
  W8(c->r[1]+0x00000066u,c->r[0]); // 8024BD4C
  c->r[0]=R8(c->r[28]+0x0000000Fu); // 8024BD50
  W8(c->r[1]+0x00000067u,c->r[0]); // 8024BD54
  c->r[0]=R8(c->r[28]+0x00000010u); // 8024BD58
  W8(c->r[1]+0x00000068u,c->r[0]); // 8024BD5C
  c->r[0]=R8(c->r[28]+0x00000011u); // 8024BD60
  W8(c->r[1]+0x00000069u,c->r[0]); // 8024BD64
  c->r[0]=R8(c->r[28]+0x00000012u); // 8024BD68
  W8(c->r[1]+0x0000006Au,c->r[0]); // 8024BD6C
  c->r[0]=R8(c->r[28]+0x00000013u); // 8024BD70
  W8(c->r[1]+0x0000006Bu,c->r[0]); // 8024BD74
  c->r[0]=R8(c->r[28]+0x00000014u); // 8024BD78
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 8024BD7C
  c->r[0]=R8(c->r[28]+0x00000015u); // 8024BD80
  W8(c->r[1]+0x0000006Du,c->r[0]); // 8024BD84
  c->r[0]=R8(c->r[28]+0x00000016u); // 8024BD88
  W8(c->r[1]+0x0000006Eu,c->r[0]); // 8024BD8C
  c->r[0]=R8(c->r[28]+0x00000017u); // 8024BD90
  W8(c->r[1]+0x0000006Fu,c->r[0]); // 8024BD94
  c->r[0]=R8(c->r[28]+0x00000018u); // 8024BD98
  W8(c->r[1]+0x00000070u,c->r[0]); // 8024BD9C
  c->r[0]=R8(c->r[28]+0x00000019u); // 8024BDA0
  W8(c->r[1]+0x00000071u,c->r[0]); // 8024BDA4
  c->r[0]=R8(c->r[28]+0x0000001Au); // 8024BDA8
  W8(c->r[1]+0x00000072u,c->r[0]); // 8024BDAC
  c->r[0]=R8(c->r[28]+0x0000001Bu); // 8024BDB0
  W8(c->r[1]+0x00000073u,c->r[0]); // 8024BDB4
  c->r[0]=R8(c->r[28]+0x0000001Cu); // 8024BDB8
  W8(c->r[1]+0x00000074u,c->r[0]); // 8024BDBC
  c->r[0]=R8(c->r[28]+0x0000001Du); // 8024BDC0
  W8(c->r[1]+0x00000075u,c->r[0]); // 8024BDC4
  c->r[0]=R8(c->r[28]+0x0000001Eu); // 8024BDC8
  W8(c->r[1]+0x00000076u,c->r[0]); // 8024BDCC
  c->r[0]=R8(c->r[28]+0x0000001Fu); // 8024BDD0
  W8(c->r[1]+0x00000077u,c->r[0]); // 8024BDD4
  c->r[0]=R32(c->r[28]+0x00000020u); // 8024BDD8
  W32(c->r[1]+0x00000078u,c->r[0]); // 8024BDDC
  c->r[3]=R32(c->r[28]+0x00000024u); // 8024BDE0
  c->r[0]=R32(c->r[28]+0x00000028u); // 8024BDE4
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 8024BDE8
  W32(c->r[1]+0x00000080u,c->r[0]); // 8024BDEC
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 8024BDF0
  c->r[0]=R32(c->r[28]+0x00000030u); // 8024BDF4
  W32(c->r[1]+0x00000084u,c->r[3]); // 8024BDF8
  W32(c->r[1]+0x00000088u,c->r[0]); // 8024BDFC
  c->r[0]=R32(c->r[28]+0x00000034u); // 8024BE00
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8024BE04
  c->r[3]=R32(c->r[28]+0x00000038u); // 8024BE08
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 8024BE0C
  W32(c->r[1]+0x00000090u,c->r[3]); // 8024BE10
  W32(c->r[1]+0x00000094u,c->r[0]); // 8024BE14
  c->r[0]=R8(c->r[28]+0x00000040u); // 8024BE18
  W8(c->r[1]+0x00000098u,c->r[0]); // 8024BE1C
  c->r[0]=R8(c->r[28]+0x00000041u); // 8024BE20
  W8(c->r[1]+0x00000099u,c->r[0]); // 8024BE24
  c->r[0]=R8(c->r[28]+0x00000042u); // 8024BE28
  W8(c->r[1]+0x0000009Au,c->r[0]); // 8024BE2C
  c->r[0]=R8(c->r[28]+0x00000043u); // 8024BE30
  c->f[1]=c->f[31]; // 8024BE34
  c->f[2]=c->f[31]; // 8024BE38
  c->r[3]=c->r[1]+0x00000058u; // 8024BE3C
  W8(c->r[1]+0x0000009Bu,c->r[0]); // 8024BE40
  {uint32_t ea=c->r[28]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BE44
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8024BE48
  c->r[0]=R32(c->r[28]+0x00000048u); // 8024BE4C
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8024BE50
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BE54
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8024BE58
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BE5C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8024BE60
  c->r[0]=R32(c->r[28]+0x00000054u); // 8024BE64
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8024BE68
  c->r[0]=R32(c->r[28]+0x00000058u); // 8024BE6C
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8024BE70
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 8024BE74
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8024BE78
  c->lr=0x8024BE80u; f_8024941C(c); // 8024BE7C
  c->r[4]=c->r[31]-c->r[29]; // 8024BE80
  c->r[5]=c->r[31]|c->r[31]; // 8024BE84
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8024BE88
  c->r[3]=c->r[1]+0x00000058u; // 8024BE8C
  c->r[0]=c->r[0]+c->r[4]; // 8024BE90
  c->r[4]=c->r[1]+0x00000010u; // 8024BE94
  c->r[0]=sraw(c,c->r[0],1); // 8024BE98
  c->r[6]=c->r[30]-c->r[0]; // 8024BE9C
  c->lr=0x8024BEA4u; f_8024B448(c); // 8024BEA0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024BEA4
  c->r[3]=c->r[1]+0x00000058u; // 8024BEA8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BEAC
  c->r[4]=0u+0x00000000u; // 8024BEB0
  c->f[26]=c->ps1[26]=S(c->f[1]-c->f[0]); // 8024BEB4
  c->lr=0x8024BEBCu; f_80248188(c); // 8024BEB8
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[26]); // 8024BEBC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BEC0
  c->r[3]=c->r[28]|c->r[28]; // 8024BEC4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8024BEC8
  c->lr=0x8024BED0u; f_80249428(c); // 8024BECC
  goto L_8024BF04; // 8024BED0
L_8024BED4:;
  c->r[3]=c->r[28]|c->r[28]; // 8024BED4
  c->lr=0x8024BEDCu; f_80249458(c); // 8024BED8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024BEDC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8024BEE0
  fcmp(c,0,c->f[29],c->f[0]); // 8024BEE4
  if (!crb(c,0)) { goto L_8024BEF0; } // 8024BEE8
  goto L_8024BEF4; // 8024BEEC
L_8024BEF0:;
  c->f[0]=c->f[29]; // 8024BEF0
L_8024BEF4:;
  c->f[29]=c->f[0]; // 8024BEF4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024BEF8
  c->r[3]=c->r[28]|c->r[28]; // 8024BEFC
  c->lr=0x8024BF04u; f_80249428(c); // 8024BF00
L_8024BF04:;
  c->r[31]=0u+0x00000000u; // 8024BF04
  goto L_8024BF34; // 8024BF08
L_8024BF0C:;
  cmps(c,0,(int32_t)c->r[3],1); // 8024BF0C
  if (!crb(c,2)) { goto L_8024BF1C; } // 8024BF10
  c->r[31]=0u+0x00000000u; // 8024BF14
  goto L_8024BF34; // 8024BF18
L_8024BF1C:;
  cmps(c,0,(int32_t)c->r[3],2); // 8024BF1C
  if (!crb(c,2)) { goto L_8024BF2C; } // 8024BF20
  c->r[31]=0u+0x00000001u; // 8024BF24
  goto L_8024BF34; // 8024BF28
L_8024BF2C:;
  cmps(c,0,(int32_t)c->r[3],4); // 8024BF2C
  if (crb(c,2)) { goto L_8024BFFC; } // 8024BF30
L_8024BF34:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8024BF34
  W32(c->r[1]+0x00000030u,c->r[0]); // 8024BF38
  goto L_8024BFCC; // 8024BF3C
L_8024BF40:;
  c->r[3]=c->r[28]|c->r[28]; // 8024BF40
  c->lr=0x8024BF48u; f_80249460(c); // 8024BF44
  cmps(c,0,(int32_t)c->r[31],0); // 8024BF48
  c->f[24]=c->f[1]; // 8024BF4C
  if (crb(c,2)) { goto L_8024BF60; } // 8024BF50
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024BF54
  c->r[3]=c->r[28]|c->r[28]; // 8024BF58
  c->lr=0x8024BF60u; f_80249438(c); // 8024BF5C
L_8024BF60:;
  c->r[3]=c->r[28]|c->r[28]; // 8024BF60
  c->r[31]=0u+0x00000001u; // 8024BF64
  c->lr=0x8024BF6Cu; f_802481D0(c); // 8024BF68
  c->r[25]=c->r[3]|c->r[3]; // 8024BF6C
  c->r[3]=c->r[28]|c->r[28]; // 8024BF70
  c->lr=0x8024BF78u; f_802490CC(c); // 8024BF74
  c->r[12]=R32(c->r[25]+0x00000000u); // 8024BF78
  c->f[26]=c->f[1]; // 8024BF7C
  c->r[3]=c->r[25]|c->r[25]; // 8024BF80
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8024BF84
  c->ctr=c->r[12]; // 8024BF88
  if (true) { c->lr=0x8024BF90u; dispatch(c,c->ctr); } // 8024BF8C
  c->r[0]=0u-c->r[3]; // 8024BF90
  W32(c->r[1]+0x00000118u,c->r[27]); // 8024BF94
  c->r[0]=c->r[0]^0x80000000u; // 8024BF98
  c->r[3]=c->r[28]|c->r[28]; // 8024BF9C
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8024BFA0
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8024BFA4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8024BFA8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[26]); // 8024BFAC
  c->lr=0x8024BFB4u; f_80249448(c); // 8024BFB0
  c->r[3]=c->r[28]|c->r[28]; // 8024BFB4
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 8024BFB8
  c->lr=0x8024BFC0u; f_802492E0(c); // 8024BFBC
  c->f[1]=c->f[24]; // 8024BFC0
  c->r[3]=c->r[28]|c->r[28]; // 8024BFC4
  c->lr=0x8024BFCCu; f_80249430(c); // 8024BFC8
L_8024BFCC:;
  c->r[3]=c->r[1]+0x00000030u; // 8024BFCC
  c->r[12]=c->r[1]+0x00000034u; // 8024BFD0
  c->lr=0x8024BFD8u; f_800D48C4(c); // 8024BFD4
  c->r[0]=c->r[0]|0x00000000u; // 8024BFD8
  c->r[26]=c->r[3]|c->r[3]; // 8024BFDC
L_8024BFE0:;
  c->r[5]=R32(c->r[1]+0x00000030u); // 8024BFE0
  c->r[3]=c->r[5]-c->r[29]; // 8024BFE4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8024BFE8
  c->r[0]=c->r[0]+c->r[3]; // 8024BFEC
  c->r[0]=sraw(c,c->r[0],1); // 8024BFF0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8024BFF4
  if (!crb(c,1)) { IRQCHK(c); goto L_8024BA5C; } // 8024BFF8
L_8024BFFC:;
  c->r[0]=R32(c->r[28]+0x00000058u); // 8024BFFC
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 8024C000
  cmpu(c,0,c->r[0],0x00000100u); // 8024C004
  if (crb(c,2)) { goto L_8024C014; } // 8024C008
  cmpu(c,0,c->r[0],0x00000200u); // 8024C00C
  if (!crb(c,2)) { goto L_8024C024; } // 8024C010
L_8024C014:;
  c->f[1]=c->f[28]; // 8024C014
  c->r[3]=c->r[28]|c->r[28]; // 8024C018
  c->lr=0x8024C020u; f_80249430(c); // 8024C01C
  goto L_8024C030; // 8024C020
L_8024C024:;
  c->f[1]=c->f[30]; // 8024C024
  c->r[3]=c->r[28]|c->r[28]; // 8024C028
  c->lr=0x8024C030u; f_80249448(c); // 8024C02C
L_8024C030:;
  c->f[1]=c->f[29]; // 8024C030
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,31,ea,0,0);} // 8024C034
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[31]=RF64(ea);} // 8024C038
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,30,ea,0,0);} // 8024C03C
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[30]=RF64(ea);} // 8024C040
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,29,ea,0,0);} // 8024C044
  {uint32_t ea=c->r[1]+0x00000190u; c->f[29]=RF64(ea);} // 8024C048
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,28,ea,0,0);} // 8024C04C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[28]=RF64(ea);} // 8024C050
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,27,ea,0,0);} // 8024C054
  {uint32_t ea=c->r[1]+0x00000170u; c->f[27]=RF64(ea);} // 8024C058
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,26,ea,0,0);} // 8024C05C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[26]=RF64(ea);} // 8024C060
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,25,ea,0,0);} // 8024C064
  {uint32_t ea=c->r[1]+0x00000150u; c->f[25]=RF64(ea);} // 8024C068
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,24,ea,0,0);} // 8024C06C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[24]=RF64(ea);} // 8024C070
  c->r[11]=c->r[1]+0x00000140u; // 8024C074
  c->lr=0x8024C07Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024C078
  c->r[0]=R32(c->r[1]+0x000001C4u); // 8024C07C
  c->lr=c->r[0]; // 8024C080
  c->r[1]=c->r[1]+0x000001C0u; // 8024C084
  return; // 8024C088
}

// AdjustCursor__Q36nw4hbm2ut17TextWriterBase<w>FPfPfPCwi
void f_8024C08C(Ctx* __restrict c) {
  trace_call(0x8024C08Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C08C
  c->r[0]=c->lr; // 8024C090
  W32(c->r[1]+0x00000194u,c->r[0]); // 8024C094
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 8024C098
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 8024C09C
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 8024C0A0
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 8024C0A4
  c->r[11]=c->r[1]+0x00000170u; // 8024C0A8
  c->lr=0x8024C0B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024C0AC
  c->r[0]=R32(c->r[3]+0x00000058u); // 8024C0B0
  c->r[8]=0u+0x80260000u; // 8024C0B4
  {uint32_t ea=c->r[8]+0x00001B20u; c->f[31]=c->ps1[31]=RF32(ea);} // 8024C0B8
  c->r[27]=c->r[3]|c->r[3]; // 8024C0BC
  c->r[0]=c->r[0]&0x00000333u; cr0(c,c->r[0]); // 8024C0C0
  c->r[28]=c->r[4]|c->r[4]; // 8024C0C4
  c->f[2]=c->f[31]; // 8024C0C8
  c->r[29]=c->r[5]|c->r[5]; // 8024C0CC
  c->r[30]=c->r[6]|c->r[6]; // 8024C0D0
  c->r[31]=c->r[7]|c->r[7]; // 8024C0D4
  cmpu(c,0,c->r[0],0x00000300u); // 8024C0D8
  if (crb(c,2)) { goto L_8024C2C8; } // 8024C0DC
  cmps(c,0,(int32_t)c->r[0],0); // 8024C0E0
  if (crb(c,2)) { goto L_8024C2C8; } // 8024C0E4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 8024C0E8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 8024C0EC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[31]);} // 8024C0F0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 8024C0F4
  c->r[0]=R8(c->r[3]+0x00000000u); // 8024C0F8
  W8(c->r[1]+0x000000F8u,c->r[0]); // 8024C0FC
  c->r[0]=R8(c->r[3]+0x00000001u); // 8024C100
  W8(c->r[1]+0x000000F9u,c->r[0]); // 8024C104
  c->r[0]=R8(c->r[3]+0x00000002u); // 8024C108
  W8(c->r[1]+0x000000FAu,c->r[0]); // 8024C10C
  c->r[0]=R8(c->r[3]+0x00000003u); // 8024C110
  W8(c->r[1]+0x000000FBu,c->r[0]); // 8024C114
  c->r[0]=R8(c->r[3]+0x00000004u); // 8024C118
  W8(c->r[1]+0x000000FCu,c->r[0]); // 8024C11C
  c->r[0]=R8(c->r[3]+0x00000005u); // 8024C120
  W8(c->r[1]+0x000000FDu,c->r[0]); // 8024C124
  c->r[0]=R8(c->r[3]+0x00000006u); // 8024C128
  W8(c->r[1]+0x000000FEu,c->r[0]); // 8024C12C
  c->r[0]=R8(c->r[3]+0x00000007u); // 8024C130
  W8(c->r[1]+0x000000FFu,c->r[0]); // 8024C134
  c->r[0]=R8(c->r[3]+0x00000008u); // 8024C138
  W8(c->r[1]+0x00000100u,c->r[0]); // 8024C13C
  c->r[0]=R8(c->r[3]+0x00000009u); // 8024C140
  W8(c->r[1]+0x00000101u,c->r[0]); // 8024C144
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8024C148
  W8(c->r[1]+0x00000102u,c->r[0]); // 8024C14C
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 8024C150
  W8(c->r[1]+0x00000103u,c->r[0]); // 8024C154
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8024C158
  W8(c->r[1]+0x00000104u,c->r[0]); // 8024C15C
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8024C160
  W8(c->r[1]+0x00000105u,c->r[0]); // 8024C164
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 8024C168
  W8(c->r[1]+0x00000106u,c->r[0]); // 8024C16C
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 8024C170
  W8(c->r[1]+0x00000107u,c->r[0]); // 8024C174
  c->r[0]=R8(c->r[3]+0x00000010u); // 8024C178
  W8(c->r[1]+0x00000108u,c->r[0]); // 8024C17C
  c->r[0]=R8(c->r[3]+0x00000011u); // 8024C180
  W8(c->r[1]+0x00000109u,c->r[0]); // 8024C184
  c->r[0]=R8(c->r[3]+0x00000012u); // 8024C188
  W8(c->r[1]+0x0000010Au,c->r[0]); // 8024C18C
  c->r[0]=R8(c->r[3]+0x00000013u); // 8024C190
  W8(c->r[1]+0x0000010Bu,c->r[0]); // 8024C194
  c->r[0]=R8(c->r[3]+0x00000014u); // 8024C198
  W8(c->r[1]+0x0000010Cu,c->r[0]); // 8024C19C
  c->r[0]=R8(c->r[3]+0x00000015u); // 8024C1A0
  W8(c->r[1]+0x0000010Du,c->r[0]); // 8024C1A4
  c->r[0]=R8(c->r[3]+0x00000016u); // 8024C1A8
  W8(c->r[1]+0x0000010Eu,c->r[0]); // 8024C1AC
  c->r[0]=R8(c->r[3]+0x00000017u); // 8024C1B0
  W8(c->r[1]+0x0000010Fu,c->r[0]); // 8024C1B4
  c->r[0]=R8(c->r[3]+0x00000018u); // 8024C1B8
  W8(c->r[1]+0x00000110u,c->r[0]); // 8024C1BC
  c->r[0]=R8(c->r[3]+0x00000019u); // 8024C1C0
  W8(c->r[1]+0x00000111u,c->r[0]); // 8024C1C4
  c->r[0]=R8(c->r[3]+0x0000001Au); // 8024C1C8
  W8(c->r[1]+0x00000112u,c->r[0]); // 8024C1CC
  c->r[0]=R8(c->r[3]+0x0000001Bu); // 8024C1D0
  W8(c->r[1]+0x00000113u,c->r[0]); // 8024C1D4
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 8024C1D8
  W8(c->r[1]+0x00000114u,c->r[0]); // 8024C1DC
  c->r[0]=R8(c->r[3]+0x0000001Du); // 8024C1E0
  W8(c->r[1]+0x00000115u,c->r[0]); // 8024C1E4
  c->r[0]=R8(c->r[3]+0x0000001Eu); // 8024C1E8
  W8(c->r[1]+0x00000116u,c->r[0]); // 8024C1EC
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 8024C1F0
  W8(c->r[1]+0x00000117u,c->r[0]); // 8024C1F4
  c->r[0]=R32(c->r[3]+0x00000020u); // 8024C1F8
  W32(c->r[1]+0x00000118u,c->r[0]); // 8024C1FC
  c->r[4]=R32(c->r[3]+0x00000024u); // 8024C200
  c->r[0]=R32(c->r[3]+0x00000028u); // 8024C204
  W32(c->r[1]+0x0000011Cu,c->r[4]); // 8024C208
  W32(c->r[1]+0x00000120u,c->r[0]); // 8024C20C
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 8024C210
  c->r[0]=R32(c->r[3]+0x00000030u); // 8024C214
  W32(c->r[1]+0x00000124u,c->r[4]); // 8024C218
  W32(c->r[1]+0x00000128u,c->r[0]); // 8024C21C
  c->r[0]=R32(c->r[3]+0x00000034u); // 8024C220
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8024C224
  c->r[4]=R32(c->r[3]+0x00000038u); // 8024C228
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8024C22C
  W32(c->r[1]+0x00000130u,c->r[4]); // 8024C230
  W32(c->r[1]+0x00000134u,c->r[0]); // 8024C234
  c->r[0]=R8(c->r[3]+0x00000040u); // 8024C238
  W8(c->r[1]+0x00000138u,c->r[0]); // 8024C23C
  c->r[0]=R8(c->r[3]+0x00000041u); // 8024C240
  W8(c->r[1]+0x00000139u,c->r[0]); // 8024C244
  c->r[0]=R8(c->r[3]+0x00000042u); // 8024C248
  W8(c->r[1]+0x0000013Au,c->r[0]); // 8024C24C
  c->r[0]=R8(c->r[3]+0x00000043u); // 8024C250
  W8(c->r[1]+0x0000013Bu,c->r[0]); // 8024C254
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C258
  c->r[5]=c->r[30]|c->r[30]; // 8024C25C
  c->r[6]=c->r[31]|c->r[31]; // 8024C260
  c->r[4]=c->r[1]+0x00000028u; // 8024C264
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 8024C268
  c->r[0]=R32(c->r[3]+0x00000048u); // 8024C26C
  W32(c->r[1]+0x00000140u,c->r[0]); // 8024C270
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C274
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8024C278
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C27C
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8024C280
  c->r[0]=R32(c->r[3]+0x00000054u); // 8024C284
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 8024C288
  c->r[0]=R32(c->r[3]+0x00000058u); // 8024C28C
  W32(c->r[1]+0x00000150u,c->r[0]); // 8024C290
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8024C294
  c->r[3]=c->r[1]+0x000000F8u; // 8024C298
  W32(c->r[1]+0x00000154u,c->r[0]); // 8024C29C
  c->lr=0x8024C2A4u; f_8024B824(c); // 8024C2A0
  c->r[3]=c->r[1]+0x000000F8u; // 8024C2A4
  c->r[4]=0u+0x00000000u; // 8024C2A8
  c->lr=0x8024C2B0u; f_80248188(c); // 8024C2AC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024C2B0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024C2B4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C2B8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C2BC
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[2]); // 8024C2C0
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 8024C2C4
L_8024C2C8:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8024C2C8
  c->r[0]=rotl(c->r[0],0)&0x00000030u; // 8024C2CC
  cmpu(c,0,c->r[0],0x00000010u); // 8024C2D0
  if (!crb(c,2)) { goto L_8024C2F4; } // 8024C2D4
  c->r[3]=0u+0x80260000u; // 8024C2D8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C2DC
  {uint32_t ea=c->r[3]+0x00001B30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C2E0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8024C2E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8024C2E8
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8024C2EC
  goto L_8024C308; // 8024C2F0
L_8024C2F4:;
  cmpu(c,0,c->r[0],0x00000020u); // 8024C2F4
  if (!crb(c,2)) { goto L_8024C308; } // 8024C2F8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C2FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8024C300
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8024C304
L_8024C308:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8024C308
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 8024C30C
  cmpu(c,0,c->r[0],0x00000100u); // 8024C310
  if (!crb(c,2)) { goto L_8024C334; } // 8024C314
  c->r[3]=0u+0x80260000u; // 8024C318
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C31C
  {uint32_t ea=c->r[3]+0x00001B30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C320
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8024C324
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8024C328
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8024C32C
  goto L_8024C348; // 8024C330
L_8024C334:;
  cmpu(c,0,c->r[0],0x00000200u); // 8024C334
  if (!crb(c,2)) { goto L_8024C348; } // 8024C338
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C33C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024C340
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8024C344
L_8024C348:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8024C348
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8024C34C
  cmpu(c,0,c->r[0],0x00000001u); // 8024C350
  if (!crb(c,2)) { goto L_8024C564; } // 8024C354
  c->r[3]=0u+0x80260000u; // 8024C358
  {uint32_t ea=c->r[3]+0x00001B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C35C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8024C360
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8024C364
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8024C368
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8024C36C
  c->r[0]=R8(c->r[27]+0x00000000u); // 8024C370
  W8(c->r[1]+0x00000098u,c->r[0]); // 8024C374
  c->r[0]=R8(c->r[27]+0x00000001u); // 8024C378
  W8(c->r[1]+0x00000099u,c->r[0]); // 8024C37C
  c->r[0]=R8(c->r[27]+0x00000002u); // 8024C380
  W8(c->r[1]+0x0000009Au,c->r[0]); // 8024C384
  c->r[0]=R8(c->r[27]+0x00000003u); // 8024C388
  W8(c->r[1]+0x0000009Bu,c->r[0]); // 8024C38C
  c->r[0]=R8(c->r[27]+0x00000004u); // 8024C390
  W8(c->r[1]+0x0000009Cu,c->r[0]); // 8024C394
  c->r[0]=R8(c->r[27]+0x00000005u); // 8024C398
  W8(c->r[1]+0x0000009Du,c->r[0]); // 8024C39C
  c->r[0]=R8(c->r[27]+0x00000006u); // 8024C3A0
  W8(c->r[1]+0x0000009Eu,c->r[0]); // 8024C3A4
  c->r[0]=R8(c->r[27]+0x00000007u); // 8024C3A8
  W8(c->r[1]+0x0000009Fu,c->r[0]); // 8024C3AC
  c->r[0]=R8(c->r[27]+0x00000008u); // 8024C3B0
  W8(c->r[1]+0x000000A0u,c->r[0]); // 8024C3B4
  c->r[0]=R8(c->r[27]+0x00000009u); // 8024C3B8
  W8(c->r[1]+0x000000A1u,c->r[0]); // 8024C3BC
  c->r[0]=R8(c->r[27]+0x0000000Au); // 8024C3C0
  W8(c->r[1]+0x000000A2u,c->r[0]); // 8024C3C4
  c->r[0]=R8(c->r[27]+0x0000000Bu); // 8024C3C8
  W8(c->r[1]+0x000000A3u,c->r[0]); // 8024C3CC
  c->r[0]=R8(c->r[27]+0x0000000Cu); // 8024C3D0
  W8(c->r[1]+0x000000A4u,c->r[0]); // 8024C3D4
  c->r[0]=R8(c->r[27]+0x0000000Du); // 8024C3D8
  W8(c->r[1]+0x000000A5u,c->r[0]); // 8024C3DC
  c->r[0]=R8(c->r[27]+0x0000000Eu); // 8024C3E0
  W8(c->r[1]+0x000000A6u,c->r[0]); // 8024C3E4
  c->r[0]=R8(c->r[27]+0x0000000Fu); // 8024C3E8
  W8(c->r[1]+0x000000A7u,c->r[0]); // 8024C3EC
  c->r[0]=R8(c->r[27]+0x00000010u); // 8024C3F0
  W8(c->r[1]+0x000000A8u,c->r[0]); // 8024C3F4
  c->r[0]=R8(c->r[27]+0x00000011u); // 8024C3F8
  W8(c->r[1]+0x000000A9u,c->r[0]); // 8024C3FC
  c->r[0]=R8(c->r[27]+0x00000012u); // 8024C400
  W8(c->r[1]+0x000000AAu,c->r[0]); // 8024C404
  c->r[0]=R8(c->r[27]+0x00000013u); // 8024C408
  W8(c->r[1]+0x000000ABu,c->r[0]); // 8024C40C
  c->r[0]=R8(c->r[27]+0x00000014u); // 8024C410
  W8(c->r[1]+0x000000ACu,c->r[0]); // 8024C414
  c->r[0]=R8(c->r[27]+0x00000015u); // 8024C418
  W8(c->r[1]+0x000000ADu,c->r[0]); // 8024C41C
  c->r[0]=R8(c->r[27]+0x00000016u); // 8024C420
  W8(c->r[1]+0x000000AEu,c->r[0]); // 8024C424
  c->r[0]=R8(c->r[27]+0x00000017u); // 8024C428
  W8(c->r[1]+0x000000AFu,c->r[0]); // 8024C42C
  c->r[0]=R8(c->r[27]+0x00000018u); // 8024C430
  W8(c->r[1]+0x000000B0u,c->r[0]); // 8024C434
  c->r[0]=R8(c->r[27]+0x00000019u); // 8024C438
  W8(c->r[1]+0x000000B1u,c->r[0]); // 8024C43C
  c->r[0]=R8(c->r[27]+0x0000001Au); // 8024C440
  W8(c->r[1]+0x000000B2u,c->r[0]); // 8024C444
  c->r[0]=R8(c->r[27]+0x0000001Bu); // 8024C448
  W8(c->r[1]+0x000000B3u,c->r[0]); // 8024C44C
  c->r[0]=R8(c->r[27]+0x0000001Cu); // 8024C450
  W8(c->r[1]+0x000000B4u,c->r[0]); // 8024C454
  c->r[0]=R8(c->r[27]+0x0000001Du); // 8024C458
  W8(c->r[1]+0x000000B5u,c->r[0]); // 8024C45C
  c->r[0]=R8(c->r[27]+0x0000001Eu); // 8024C460
  W8(c->r[1]+0x000000B6u,c->r[0]); // 8024C464
  c->r[0]=R8(c->r[27]+0x0000001Fu); // 8024C468
  W8(c->r[1]+0x000000B7u,c->r[0]); // 8024C46C
  c->r[0]=R32(c->r[27]+0x00000020u); // 8024C470
  W32(c->r[1]+0x000000B8u,c->r[0]); // 8024C474
  c->r[3]=R32(c->r[27]+0x00000024u); // 8024C478
  c->r[0]=R32(c->r[27]+0x00000028u); // 8024C47C
  W32(c->r[1]+0x000000BCu,c->r[3]); // 8024C480
  W32(c->r[1]+0x000000C0u,c->r[0]); // 8024C484
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 8024C488
  c->r[0]=R32(c->r[27]+0x00000030u); // 8024C48C
  W32(c->r[1]+0x000000C4u,c->r[3]); // 8024C490
  W32(c->r[1]+0x000000C8u,c->r[0]); // 8024C494
  c->r[0]=R32(c->r[27]+0x00000034u); // 8024C498
  W32(c->r[1]+0x000000CCu,c->r[0]); // 8024C49C
  c->r[3]=R32(c->r[27]+0x00000038u); // 8024C4A0
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8024C4A4
  W32(c->r[1]+0x000000D0u,c->r[3]); // 8024C4A8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8024C4AC
  c->r[0]=R8(c->r[27]+0x00000040u); // 8024C4B0
  W8(c->r[1]+0x000000D8u,c->r[0]); // 8024C4B4
  c->r[0]=R8(c->r[27]+0x00000041u); // 8024C4B8
  W8(c->r[1]+0x000000D9u,c->r[0]); // 8024C4BC
  c->r[0]=R8(c->r[27]+0x00000042u); // 8024C4C0
  W8(c->r[1]+0x000000DAu,c->r[0]); // 8024C4C4
  c->r[0]=R8(c->r[27]+0x00000043u); // 8024C4C8
  W8(c->r[1]+0x000000DBu,c->r[0]); // 8024C4CC
  {uint32_t ea=c->r[27]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C4D0
  c->f[2]=c->f[1]; // 8024C4D4
  c->r[3]=c->r[1]+0x00000098u; // 8024C4D8
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 8024C4DC
  c->r[0]=R32(c->r[27]+0x00000048u); // 8024C4E0
  W32(c->r[1]+0x000000E0u,c->r[0]); // 8024C4E4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C4E8
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8024C4EC
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C4F0
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8024C4F4
  c->r[0]=R32(c->r[27]+0x00000054u); // 8024C4F8
  W32(c->r[1]+0x000000ECu,c->r[0]); // 8024C4FC
  c->r[0]=R32(c->r[27]+0x00000058u); // 8024C500
  W32(c->r[1]+0x000000F0u,c->r[0]); // 8024C504
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 8024C508
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8024C50C
  c->lr=0x8024C514u; f_8024941C(c); // 8024C510
  c->r[5]=c->r[30]|c->r[30]; // 8024C514
  c->r[6]=c->r[31]|c->r[31]; // 8024C518
  c->r[3]=c->r[1]+0x00000098u; // 8024C51C
  c->r[4]=c->r[1]+0x00000018u; // 8024C520
  c->lr=0x8024C528u; f_8024B448(c); // 8024C524
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C528
  c->r[3]=c->r[1]+0x00000098u; // 8024C52C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C530
  c->r[4]=0u+0x00000000u; // 8024C534
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 8024C538
  c->lr=0x8024C540u; f_80248188(c); // 8024C53C
  c->r[3]=0u+0x80260000u; // 8024C540
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[30]); // 8024C544
  {uint32_t ea=c->r[3]+0x00001B30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C548
  c->r[3]=c->r[27]|c->r[27]; // 8024C54C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C550
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8024C554
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8024C558
  c->lr=0x8024C560u; f_80249428(c); // 8024C55C
  goto L_8024C778; // 8024C560
L_8024C564:;
  cmpu(c,0,c->r[0],0x00000002u); // 8024C564
  if (!crb(c,2)) { goto L_8024C76C; } // 8024C568
  c->r[3]=0u+0x80260000u; // 8024C56C
  {uint32_t ea=c->r[3]+0x00001B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C570
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8024C574
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024C578
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8024C57C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8024C580
  c->r[0]=R8(c->r[27]+0x00000000u); // 8024C584
  W8(c->r[1]+0x00000038u,c->r[0]); // 8024C588
  c->r[0]=R8(c->r[27]+0x00000001u); // 8024C58C
  W8(c->r[1]+0x00000039u,c->r[0]); // 8024C590
  c->r[0]=R8(c->r[27]+0x00000002u); // 8024C594
  W8(c->r[1]+0x0000003Au,c->r[0]); // 8024C598
  c->r[0]=R8(c->r[27]+0x00000003u); // 8024C59C
  W8(c->r[1]+0x0000003Bu,c->r[0]); // 8024C5A0
  c->r[0]=R8(c->r[27]+0x00000004u); // 8024C5A4
  W8(c->r[1]+0x0000003Cu,c->r[0]); // 8024C5A8
  c->r[0]=R8(c->r[27]+0x00000005u); // 8024C5AC
  W8(c->r[1]+0x0000003Du,c->r[0]); // 8024C5B0
  c->r[0]=R8(c->r[27]+0x00000006u); // 8024C5B4
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 8024C5B8
  c->r[0]=R8(c->r[27]+0x00000007u); // 8024C5BC
  W8(c->r[1]+0x0000003Fu,c->r[0]); // 8024C5C0
  c->r[0]=R8(c->r[27]+0x00000008u); // 8024C5C4
  W8(c->r[1]+0x00000040u,c->r[0]); // 8024C5C8
  c->r[0]=R8(c->r[27]+0x00000009u); // 8024C5CC
  W8(c->r[1]+0x00000041u,c->r[0]); // 8024C5D0
  c->r[0]=R8(c->r[27]+0x0000000Au); // 8024C5D4
  W8(c->r[1]+0x00000042u,c->r[0]); // 8024C5D8
  c->r[0]=R8(c->r[27]+0x0000000Bu); // 8024C5DC
  W8(c->r[1]+0x00000043u,c->r[0]); // 8024C5E0
  c->r[0]=R8(c->r[27]+0x0000000Cu); // 8024C5E4
  W8(c->r[1]+0x00000044u,c->r[0]); // 8024C5E8
  c->r[0]=R8(c->r[27]+0x0000000Du); // 8024C5EC
  W8(c->r[1]+0x00000045u,c->r[0]); // 8024C5F0
  c->r[0]=R8(c->r[27]+0x0000000Eu); // 8024C5F4
  W8(c->r[1]+0x00000046u,c->r[0]); // 8024C5F8
  c->r[0]=R8(c->r[27]+0x0000000Fu); // 8024C5FC
  W8(c->r[1]+0x00000047u,c->r[0]); // 8024C600
  c->r[0]=R8(c->r[27]+0x00000010u); // 8024C604
  W8(c->r[1]+0x00000048u,c->r[0]); // 8024C608
  c->r[0]=R8(c->r[27]+0x00000011u); // 8024C60C
  W8(c->r[1]+0x00000049u,c->r[0]); // 8024C610
  c->r[0]=R8(c->r[27]+0x00000012u); // 8024C614
  W8(c->r[1]+0x0000004Au,c->r[0]); // 8024C618
  c->r[0]=R8(c->r[27]+0x00000013u); // 8024C61C
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 8024C620
  c->r[0]=R8(c->r[27]+0x00000014u); // 8024C624
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 8024C628
  c->r[0]=R8(c->r[27]+0x00000015u); // 8024C62C
  W8(c->r[1]+0x0000004Du,c->r[0]); // 8024C630
  c->r[0]=R8(c->r[27]+0x00000016u); // 8024C634
  W8(c->r[1]+0x0000004Eu,c->r[0]); // 8024C638
  c->r[0]=R8(c->r[27]+0x00000017u); // 8024C63C
  W8(c->r[1]+0x0000004Fu,c->r[0]); // 8024C640
  c->r[0]=R8(c->r[27]+0x00000018u); // 8024C644
  W8(c->r[1]+0x00000050u,c->r[0]); // 8024C648
  c->r[0]=R8(c->r[27]+0x00000019u); // 8024C64C
  W8(c->r[1]+0x00000051u,c->r[0]); // 8024C650
  c->r[0]=R8(c->r[27]+0x0000001Au); // 8024C654
  W8(c->r[1]+0x00000052u,c->r[0]); // 8024C658
  c->r[0]=R8(c->r[27]+0x0000001Bu); // 8024C65C
  W8(c->r[1]+0x00000053u,c->r[0]); // 8024C660
  c->r[0]=R8(c->r[27]+0x0000001Cu); // 8024C664
  W8(c->r[1]+0x00000054u,c->r[0]); // 8024C668
  c->r[0]=R8(c->r[27]+0x0000001Du); // 8024C66C
  W8(c->r[1]+0x00000055u,c->r[0]); // 8024C670
  c->r[0]=R8(c->r[27]+0x0000001Eu); // 8024C674
  W8(c->r[1]+0x00000056u,c->r[0]); // 8024C678
  c->r[0]=R8(c->r[27]+0x0000001Fu); // 8024C67C
  W8(c->r[1]+0x00000057u,c->r[0]); // 8024C680
  c->r[0]=R32(c->r[27]+0x00000020u); // 8024C684
  W32(c->r[1]+0x00000058u,c->r[0]); // 8024C688
  c->r[3]=R32(c->r[27]+0x00000024u); // 8024C68C
  c->r[0]=R32(c->r[27]+0x00000028u); // 8024C690
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 8024C694
  W32(c->r[1]+0x00000060u,c->r[0]); // 8024C698
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 8024C69C
  c->r[0]=R32(c->r[27]+0x00000030u); // 8024C6A0
  W32(c->r[1]+0x00000064u,c->r[3]); // 8024C6A4
  W32(c->r[1]+0x00000068u,c->r[0]); // 8024C6A8
  c->r[0]=R32(c->r[27]+0x00000034u); // 8024C6AC
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8024C6B0
  c->r[3]=R32(c->r[27]+0x00000038u); // 8024C6B4
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8024C6B8
  W32(c->r[1]+0x00000070u,c->r[3]); // 8024C6BC
  W32(c->r[1]+0x00000074u,c->r[0]); // 8024C6C0
  c->r[0]=R8(c->r[27]+0x00000040u); // 8024C6C4
  W8(c->r[1]+0x00000078u,c->r[0]); // 8024C6C8
  c->r[0]=R8(c->r[27]+0x00000041u); // 8024C6CC
  W8(c->r[1]+0x00000079u,c->r[0]); // 8024C6D0
  c->r[0]=R8(c->r[27]+0x00000042u); // 8024C6D4
  W8(c->r[1]+0x0000007Au,c->r[0]); // 8024C6D8
  c->r[0]=R8(c->r[27]+0x00000043u); // 8024C6DC
  W8(c->r[1]+0x0000007Bu,c->r[0]); // 8024C6E0
  {uint32_t ea=c->r[27]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C6E4
  c->f[2]=c->f[1]; // 8024C6E8
  c->r[3]=c->r[1]+0x00000038u; // 8024C6EC
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8024C6F0
  c->r[0]=R32(c->r[27]+0x00000048u); // 8024C6F4
  W32(c->r[1]+0x00000080u,c->r[0]); // 8024C6F8
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C6FC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 8024C700
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C704
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 8024C708
  c->r[0]=R32(c->r[27]+0x00000054u); // 8024C70C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8024C710
  c->r[0]=R32(c->r[27]+0x00000058u); // 8024C714
  W32(c->r[1]+0x00000090u,c->r[0]); // 8024C718
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 8024C71C
  W32(c->r[1]+0x00000094u,c->r[0]); // 8024C720
  c->lr=0x8024C728u; f_8024941C(c); // 8024C724
  c->r[5]=c->r[30]|c->r[30]; // 8024C728
  c->r[6]=c->r[31]|c->r[31]; // 8024C72C
  c->r[3]=c->r[1]+0x00000038u; // 8024C730
  c->r[4]=c->r[1]+0x00000008u; // 8024C734
  c->lr=0x8024C73Cu; f_8024B448(c); // 8024C738
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C73C
  c->r[3]=c->r[1]+0x00000038u; // 8024C740
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C744
  c->r[4]=0u+0x00000000u; // 8024C748
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 8024C74C
  c->lr=0x8024C754u; f_80248188(c); // 8024C750
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 8024C754
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C758
  c->r[3]=c->r[27]|c->r[27]; // 8024C75C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8024C760
  c->lr=0x8024C768u; f_80249428(c); // 8024C764
  goto L_8024C778; // 8024C768
L_8024C76C:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C76C
  c->r[3]=c->r[27]|c->r[27]; // 8024C770
  c->lr=0x8024C778u; f_80249428(c); // 8024C774
L_8024C778:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8024C778
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 8024C77C
  cmpu(c,0,c->r[0],0x00000300u); // 8024C780
  if (!crb(c,2)) { goto L_8024C798; } // 8024C784
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C788
  c->r[3]=c->r[27]|c->r[27]; // 8024C78C
  c->lr=0x8024C794u; f_80249430(c); // 8024C790
  goto L_8024C7B0; // 8024C794
L_8024C798:;
  c->r[3]=c->r[27]|c->r[27]; // 8024C798
  c->lr=0x8024C7A0u; f_8024926C(c); // 8024C79C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C7A0
  c->r[3]=c->r[27]|c->r[27]; // 8024C7A4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8024C7A8
  c->lr=0x8024C7B0u; f_80249430(c); // 8024C7AC
L_8024C7B0:;
  c->f[1]=c->f[31]; // 8024C7B0
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,31,ea,0,0);} // 8024C7B4
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 8024C7B8
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,30,ea,0,0);} // 8024C7BC
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 8024C7C0
  c->r[11]=c->r[1]+0x00000170u; // 8024C7C4
  c->lr=0x8024C7CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024C7C8
  c->r[0]=R32(c->r[1]+0x00000194u); // 8024C7CC
  c->lr=c->r[0]; // 8024C7D0
  c->r[1]=c->r[1]+0x00000190u; // 8024C7D4
  return; // 8024C7D8
}

// __sinit_\ut_TextWriterBase_cpp
void f_8024C7DC(Ctx* __restrict c) {
  trace_call(0x8024C7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C7DC
  c->r[0]=c->lr; // 8024C7E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024C7E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024C7E8
  c->r[31]=0u+0x80360000u; // 8024C7EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024C7F0
  c->r[0]=R8(c->r[31]+0xFFFFCE90u); // 8024C7F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8024C7F8
  if (!crb(c,2)) { goto L_8024C82C; } // 8024C7FC
  c->r[30]=0u+0x80360000u; // 8024C800
  c->r[3]=c->r[30]+0xFFFFCE88u; // 8024C804
  c->lr=0x8024C80Cu; f_8024A620(c); // 8024C808
  c->r[4]=0u+0x80250000u; // 8024C80C
  c->r[5]=0u+0x80360000u; // 8024C810
  c->r[3]=c->r[30]+0xFFFFCE88u; // 8024C814
  c->r[4]=c->r[4]+0xFFFFA630u; // 8024C818
  c->r[5]=c->r[5]+0xFFFFCE70u; // 8024C81C
  c->lr=0x8024C824u; f_800D4478(c); // 8024C820
  c->r[0]=0u+0x00000001u; // 8024C824
  W8(c->r[31]+0xFFFFCE90u,c->r[0]); // 8024C828
L_8024C82C:;
  c->r[30]=0u+0x80360000u; // 8024C82C
  c->r[0]=R8(c->r[30]+0xFFFFCE91u); // 8024C830
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8024C834
  if (!crb(c,2)) { goto L_8024C868; } // 8024C838
  c->r[31]=0u+0x80360000u; // 8024C83C
  c->r[3]=c->r[31]+0xFFFFCE8Cu; // 8024C840
  c->lr=0x8024C848u; f_8024AA08(c); // 8024C844
  c->r[4]=0u+0x80250000u; // 8024C848
  c->r[5]=0u+0x80360000u; // 8024C84C
  c->r[3]=c->r[31]+0xFFFFCE8Cu; // 8024C850
  c->r[4]=c->r[4]+0xFFFFAA18u; // 8024C854
  c->r[5]=c->r[5]+0xFFFFCE7Cu; // 8024C858
  c->lr=0x8024C860u; f_800D4478(c); // 8024C85C
  c->r[0]=0u+0x00000001u; // 8024C860
  W8(c->r[30]+0xFFFFCE91u,c->r[0]); // 8024C864
L_8024C868:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024C868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024C86C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024C870
  c->lr=c->r[0]; // 8024C874
  c->r[1]=c->r[1]+0x00000010u; // 8024C878
  return; // 8024C87C
}

// __HBMMIXSetPan__FP13HBMMIXChannel
void f_8024C880(Ctx* __restrict c) {
  trace_call(0x8024C880u);
  c->r[4]=0u+0x80360000u; // 8024C880
  c->r[7]=0u+0x802A0000u; // 8024C884
  c->r[0]=R32(c->r[4]+0xFFFFCF08u); // 8024C888
  c->r[7]=c->r[7]+0x00001E60u; // 8024C88C
  c->r[5]=R32(c->r[3]+0x00000010u); // 8024C890
  cmpu(c,0,c->r[0],0x00000002u); // 8024C894
  c->r[4]=addc(c,~c->r[5],0x0000007Fu,1); // 8024C898
  if (!crb(c,2)) { goto L_8024C8E4; } // 8024C89C
  c->r[8]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8024C8A0
  c->r[5]=c->r[7]+0x00000990u; // 8024C8A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[8]); // 8024C8A8
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8024C8AC
  c->r[4]=c->r[7]+0x00000A90u; // 8024C8B0
  W32(c->r[3]+0x00000018u,c->r[0]); // 8024C8B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[6]); // 8024C8B8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8024C8BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000990u); // 8024C8C0
  W32(c->r[3]+0x00000020u,c->r[0]); // 8024C8C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x000000FEu); // 8024C8C8
  W32(c->r[3]+0x00000024u,c->r[0]); // 8024C8CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[6]); // 8024C8D0
  W32(c->r[3]+0x00000028u,c->r[0]); // 8024C8D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[8]); // 8024C8D8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8024C8DC
  return; // 8024C8E0
L_8024C8E4:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8024C8E4
  c->r[6]=c->r[7]+0x00000790u; // 8024C8E8
  c->r[5]=R32(c->r[6]+c->r[0]); // 8024C8EC
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8024C8F0
  c->r[0]=0u+0x00000000u; // 8024C8F4
  W32(c->r[3]+0x00000018u,c->r[5]); // 8024C8F8
  c->r[4]=R32(c->r[6]+c->r[4]); // 8024C8FC
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8024C900
  c->r[4]=R32(c->r[7]+0x00000790u); // 8024C904
  W32(c->r[3]+0x00000020u,c->r[4]); // 8024C908
  c->r[4]=R32(c->r[6]+0x000001FCu); // 8024C90C
  W32(c->r[3]+0x00000024u,c->r[4]); // 8024C910
  W32(c->r[3]+0x00000028u,c->r[0]); // 8024C914
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8024C918
  return; // 8024C91C
}

// HBMMIXInit
void f_8024C920(Ctx* __restrict c) {
  trace_call(0x8024C920u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C920
  c->r[0]=c->lr; // 8024C924
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024C928
  c->r[11]=c->r[1]+0x00000030u; // 8024C92C
  c->lr=0x8024C934u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024C930
  c->r[27]=0u+0x80360000u; // 8024C934
  c->r[27]=c->r[27]+0xFFFFCE98u; // 8024C938
  c->lr=0x8024C940u; f_800C7E8C(c); // 8024C93C
  cmps(c,0,(int32_t)c->r[3],0); // 8024C940
  if (crb(c,2)) { goto L_8024CB08; } // 8024C944
  c->r[0]=R32(c->r[27]+0x000006B8u); // 8024C948
  cmps(c,0,(int32_t)c->r[0],0); // 8024C94C
  if (!crb(c,2)) { goto L_8024CB08; } // 8024C950
  c->r[5]=c->r[27]+0x00000000u; // 8024C954
  c->r[3]=0u+0xFFFFFFFFu; // 8024C958
  W8(c->r[5]+0x00000000u,c->r[3]); // 8024C95C
  c->r[0]=0u+0x00000002u; // 8024C960
  c->r[4]=c->r[27]+0x00000010u; // 8024C964
  W8(c->r[5]+0x00000001u,c->r[3]); // 8024C968
  W8(c->r[5]+0x00000002u,c->r[3]); // 8024C96C
  W8(c->r[5]+0x00000003u,c->r[3]); // 8024C970
  W8(c->r[5]+0x00000004u,c->r[3]); // 8024C974
  W8(c->r[5]+0x00000005u,c->r[3]); // 8024C978
  W8(c->r[5]+0x00000006u,c->r[3]); // 8024C97C
  W8(c->r[5]+0x00000007u,c->r[3]); // 8024C980
  W8(c->r[5]+0x00000008u,c->r[3]); // 8024C984
  W8(c->r[5]+0x00000009u,c->r[3]); // 8024C988
  W8(c->r[5]+0x0000000Au,c->r[3]); // 8024C98C
  W8(c->r[5]+0x0000000Bu,c->r[3]); // 8024C990
  W8(c->r[5]+0x0000000Cu,c->r[3]); // 8024C994
  W8(c->r[5]+0x0000000Du,c->r[3]); // 8024C998
  W8(c->r[5]+0x0000000Eu,c->r[3]); // 8024C99C
  W8(c->r[5]+0x0000000Fu,c->r[3]); // 8024C9A0
  c->ctr=c->r[0]; // 8024C9A4
L_8024C9A8:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 8024C9A8
  W8(c->r[4]+0x00000001u,c->r[3]); // 8024C9AC
  W8(c->r[4]+0x00000002u,c->r[3]); // 8024C9B0
  W8(c->r[4]+0x00000003u,c->r[3]); // 8024C9B4
  W8(c->r[4]+0x00000004u,c->r[3]); // 8024C9B8
  W8(c->r[4]+0x00000005u,c->r[3]); // 8024C9BC
  W8(c->r[4]+0x00000006u,c->r[3]); // 8024C9C0
  W8(c->r[4]+0x00000007u,c->r[3]); // 8024C9C4
  W8(c->r[4]+0x00000008u,c->r[3]); // 8024C9C8
  W8(c->r[4]+0x00000009u,c->r[3]); // 8024C9CC
  W8(c->r[4]+0x0000000Au,c->r[3]); // 8024C9D0
  W8(c->r[4]+0x0000000Bu,c->r[3]); // 8024C9D4
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 8024C9D8
  W8(c->r[4]+0x0000000Du,c->r[3]); // 8024C9DC
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 8024C9E0
  W8(c->r[4]+0x0000000Fu,c->r[3]); // 8024C9E4
  W8(c->r[4]+0x00000010u,c->r[3]); // 8024C9E8
  W8(c->r[4]+0x00000011u,c->r[3]); // 8024C9EC
  W8(c->r[4]+0x00000012u,c->r[3]); // 8024C9F0
  W8(c->r[4]+0x00000013u,c->r[3]); // 8024C9F4
  W8(c->r[4]+0x00000014u,c->r[3]); // 8024C9F8
  W8(c->r[4]+0x00000015u,c->r[3]); // 8024C9FC
  W8(c->r[4]+0x00000016u,c->r[3]); // 8024CA00
  W8(c->r[4]+0x00000017u,c->r[3]); // 8024CA04
  W8(c->r[4]+0x00000018u,c->r[3]); // 8024CA08
  W8(c->r[4]+0x00000019u,c->r[3]); // 8024CA0C
  W8(c->r[4]+0x0000001Au,c->r[3]); // 8024CA10
  W8(c->r[4]+0x0000001Bu,c->r[3]); // 8024CA14
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 8024CA18
  W8(c->r[4]+0x0000001Du,c->r[3]); // 8024CA1C
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 8024CA20
  W8(c->r[4]+0x0000001Fu,c->r[3]); // 8024CA24
  W8(c->r[4]+0x00000020u,c->r[3]); // 8024CA28
  W8(c->r[4]+0x00000021u,c->r[3]); // 8024CA2C
  W8(c->r[4]+0x00000022u,c->r[3]); // 8024CA30
  W8(c->r[4]+0x00000023u,c->r[3]); // 8024CA34
  W8(c->r[4]+0x00000024u,c->r[3]); // 8024CA38
  W8(c->r[4]+0x00000025u,c->r[3]); // 8024CA3C
  W8(c->r[4]+0x00000026u,c->r[3]); // 8024CA40
  W8(c->r[4]+0x00000027u,c->r[3]); // 8024CA44
  W8(c->r[4]+0x00000028u,c->r[3]); // 8024CA48
  W8(c->r[4]+0x00000029u,c->r[3]); // 8024CA4C
  W8(c->r[4]+0x0000002Au,c->r[3]); // 8024CA50
  W8(c->r[4]+0x0000002Bu,c->r[3]); // 8024CA54
  W8(c->r[4]+0x0000002Cu,c->r[3]); // 8024CA58
  W8(c->r[4]+0x0000002Du,c->r[3]); // 8024CA5C
  W8(c->r[4]+0x0000002Eu,c->r[3]); // 8024CA60
  W8(c->r[4]+0x0000002Fu,c->r[3]); // 8024CA64
  c->r[4]=c->r[4]+0x00000030u; // 8024CA68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024C9A8; } // 8024CA6C
  c->r[0]=c->r[27]+0x00000078u; // 8024CA70
  c->r[25]=0u+0x00000000u; // 8024CA74
  W32(c->r[27]+0x00000074u,c->r[0]); // 8024CA78
  c->r[26]=0u+0x00000000u; // 8024CA7C
  c->r[28]=0u+0x00000000u; // 8024CA80
  c->r[29]=0u+0x50000000u; // 8024CA84
  c->r[30]=0u+0xFFFFFC40u; // 8024CA88
  c->r[31]=0u+0x00000040u; // 8024CA8C
L_8024CA90:;
  c->r[3]=R32(c->r[27]+0x00000074u); // 8024CA90
  W32(c->r[3]+c->r[26],c->r[28]); // 8024CA94
  c->r[0]=R32(c->r[27]+0x00000074u); // 8024CA98
  c->r[3]=c->r[0]+c->r[26]; // 8024CA9C
  W32(c->r[3]+0x00000004u,c->r[29]); // 8024CAA0
  W32(c->r[3]+0x00000008u,c->r[28]); // 8024CAA4
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 8024CAA8
  W32(c->r[3]+0x00000014u,c->r[28]); // 8024CAAC
  W32(c->r[3]+0x00000010u,c->r[31]); // 8024CAB0
  W16(c->r[3]+0x00000060u,c->r[28]); // 8024CAB4
  W16(c->r[3]+0x0000005Cu,c->r[28]); // 8024CAB8
  W16(c->r[3]+0x00000058u,c->r[28]); // 8024CABC
  W16(c->r[3]+0x00000054u,c->r[28]); // 8024CAC0
  W16(c->r[3]+0x00000050u,c->r[28]); // 8024CAC4
  W16(c->r[3]+0x0000004Cu,c->r[28]); // 8024CAC8
  W16(c->r[3]+0x00000048u,c->r[28]); // 8024CACC
  W16(c->r[3]+0x00000044u,c->r[28]); // 8024CAD0
  W16(c->r[3]+0x00000040u,c->r[28]); // 8024CAD4
  W16(c->r[3]+0x0000003Cu,c->r[28]); // 8024CAD8
  W16(c->r[3]+0x00000038u,c->r[28]); // 8024CADC
  W16(c->r[3]+0x00000034u,c->r[28]); // 8024CAE0
  W16(c->r[3]+0x00000030u,c->r[28]); // 8024CAE4
  c->lr=0x8024CAECu; f_8024C880(c); // 8024CAE8
  c->r[25]=c->r[25]+0x00000001u; // 8024CAEC
  c->r[26]=c->r[26]+0x00000064u; // 8024CAF0
  cmps(c,0,(int32_t)c->r[25],16); // 8024CAF4
  if (crb(c,0)) { IRQCHK(c); goto L_8024CA90; } // 8024CAF8
  c->r[0]=0u+0x00000001u; // 8024CAFC
  W32(c->r[27]+0x00000070u,c->r[0]); // 8024CB00
  W32(c->r[27]+0x000006B8u,c->r[0]); // 8024CB04
L_8024CB08:;
  c->r[11]=c->r[1]+0x00000030u; // 8024CB08
  c->lr=0x8024CB10u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024CB0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024CB10
  c->lr=c->r[0]; // 8024CB14
  c->r[1]=c->r[1]+0x00000030u; // 8024CB18
  return; // 8024CB1C
}

// HBMMIXQuit
void f_8024CB20(Ctx* __restrict c) {
  trace_call(0x8024CB20u);
  c->r[0]=0u+0x00000000u; // 8024CB20
  c->r[4]=0u+0x80360000u; // 8024CB24
  c->r[3]=0u+0x80360000u; // 8024CB28
  W32(c->r[4]+0xFFFFCF0Cu,c->r[0]); // 8024CB2C
  W32(c->r[3]+0xFFFFD550u,c->r[0]); // 8024CB30
  return; // 8024CB34
}

// HBMMIXSetSoundMode
void f_8024CB38(Ctx* __restrict c) {
  trace_call(0x8024CB38u);
  c->r[4]=0u+0x80360000u; // 8024CB38
  W32(c->r[4]+0xFFFFCF08u,c->r[3]); // 8024CB3C
  return; // 8024CB40
}

// HBMMIXInitChannel
void f_8024CB44(Ctx* __restrict c) {
  trace_call(0x8024CB44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CB44
  c->r[0]=c->lr; // 8024CB48
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024CB4C
  c->r[0]=0u+0x00000000u; // 8024CB50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024CB54
  c->r[31]=0u+0x80360000u; // 8024CB58
  c->r[31]=c->r[31]+0xFFFFCE98u; // 8024CB5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024CB60
  c->r[8]=c->r[31]+0x00000010u; // 8024CB64
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024CB68
  c->r[29]=c->r[4]|c->r[4]; // 8024CB6C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8024CB70
  c->r[28]=c->r[3]|c->r[3]; // 8024CB74
  c->r[9]=R32(c->r[3]+0x00000018u); // 8024CB78
  c->r[10]=R32(c->r[31]+0x00000074u); // 8024CB7C
  c->r[8]=R8(c->r[8]+c->r[9]); // 8024CB80
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 8024CB84
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)100); // 8024CB88
  W32(c->r[10]+c->r[8],c->r[3]); // 8024CB8C
  c->r[30]=c->r[10]+c->r[8]; // 8024CB90
  c->r[3]=c->r[30]|c->r[30]; // 8024CB94
  W32(c->r[30]+0x00000004u,c->r[0]); // 8024CB98
  W32(c->r[30]+0x00000008u,c->r[4]); // 8024CB9C
  W32(c->r[30]+0x0000000Cu,c->r[5]); // 8024CBA0
  W32(c->r[30]+0x00000010u,c->r[6]); // 8024CBA4
  W32(c->r[30]+0x00000014u,c->r[7]); // 8024CBA8
  c->lr=0x8024CBB0u; f_8024C880(c); // 8024CBAC
  cmps(c,0,(int32_t)c->r[29],-904); // 8024CBB0
  if (crb(c,1)) { goto L_8024CBC0; } // 8024CBB4
  c->r[0]=0u+0x00000000u; // 8024CBB8
  goto L_8024CBE8; // 8024CBBC
L_8024CBC0:;
  cmps(c,0,(int32_t)c->r[29],60); // 8024CBC0
  if (crb(c,0)) { goto L_8024CBD4; } // 8024CBC4
  c->r[3]=0u+0x00010000u; // 8024CBC8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CBCC
  goto L_8024CBE8; // 8024CBD0
L_8024CBD4:;
  c->r[0]=c->r[29]+0x00000388u; // 8024CBD4
  c->r[3]=0u+0x802A0000u; // 8024CBD8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CBDC
  c->r[3]=c->r[3]+0x00001E60u; // 8024CBE0
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CBE4
L_8024CBE8:;
  W16(c->r[30]+0x00000030u,c->r[0]); // 8024CBE8
  c->r[29]=0u+0x00000000u; // 8024CBEC
  c->r[0]=R32(c->r[31]+0x00000070u); // 8024CBF0
  cmps(c,0,(int32_t)c->r[0],1); // 8024CBF4
  if (crb(c,2)) { goto L_8024CE08; } // 8024CBF8
  if (!crb(c,0)) { goto L_8024CC0C; } // 8024CBFC
  cmps(c,0,(int32_t)c->r[0],0); // 8024CC00
  if (!crb(c,0)) { goto L_8024CC18; } // 8024CC04
  goto L_8024D2D0; // 8024CC08
L_8024CC0C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8024CC0C
  if (!crb(c,0)) { goto L_8024D2D0; } // 8024CC10
  goto L_8024D018; // 8024CC14
L_8024CC18:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 8024CC18
  c->r[0]=R32(c->r[30]+0x00000020u); // 8024CC1C
  c->r[3]=c->r[3]+c->r[0]; // 8024CC20
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CC24
  if (crb(c,1)) { goto L_8024CC34; } // 8024CC28
  c->r[0]=0u+0x00000000u; // 8024CC2C
  goto L_8024CC5C; // 8024CC30
L_8024CC34:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CC34
  if (crb(c,0)) { goto L_8024CC48; } // 8024CC38
  c->r[3]=0u+0x00010000u; // 8024CC3C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CC40
  goto L_8024CC5C; // 8024CC44
L_8024CC48:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CC48
  c->r[3]=0u+0x802A0000u; // 8024CC4C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CC50
  c->r[3]=c->r[3]+0x00001E60u; // 8024CC54
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CC58
L_8024CC5C:;
  W16(c->r[30]+0x00000034u,c->r[0]); // 8024CC5C
  c->r[3]=R32(c->r[30]+0x00000014u); // 8024CC60
  c->r[0]=R32(c->r[30]+0x00000020u); // 8024CC64
  c->r[3]=c->r[3]+c->r[0]; // 8024CC68
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CC6C
  if (crb(c,1)) { goto L_8024CC7C; } // 8024CC70
  c->r[0]=0u+0x00000000u; // 8024CC74
  goto L_8024CCA4; // 8024CC78
L_8024CC7C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CC7C
  if (crb(c,0)) { goto L_8024CC90; } // 8024CC80
  c->r[3]=0u+0x00010000u; // 8024CC84
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CC88
  goto L_8024CCA4; // 8024CC8C
L_8024CC90:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CC90
  c->r[3]=0u+0x802A0000u; // 8024CC94
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CC98
  c->r[3]=c->r[3]+0x00001E60u; // 8024CC9C
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CCA0
L_8024CCA4:;
  W16(c->r[30]+0x00000038u,c->r[0]); // 8024CCA4
  c->r[3]=R32(c->r[30]+0x00000014u); // 8024CCA8
  c->r[0]=R32(c->r[30]+0x00000024u); // 8024CCAC
  c->r[3]=c->r[3]+c->r[0]; // 8024CCB0
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 8024CCB4
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CCB8
  if (crb(c,1)) { goto L_8024CCC8; } // 8024CCBC
  c->r[0]=0u+0x00000000u; // 8024CCC0
  goto L_8024CCF0; // 8024CCC4
L_8024CCC8:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CCC8
  if (crb(c,0)) { goto L_8024CCDC; } // 8024CCCC
  c->r[3]=0u+0x00010000u; // 8024CCD0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CCD4
  goto L_8024CCF0; // 8024CCD8
L_8024CCDC:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CCDC
  c->r[3]=0u+0x802A0000u; // 8024CCE0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CCE4
  c->r[3]=c->r[3]+0x00001E60u; // 8024CCE8
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CCEC
L_8024CCF0:;
  W16(c->r[30]+0x0000003Cu,c->r[0]); // 8024CCF0
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024CCF4
  c->r[0]=R32(c->r[30]+0x00000014u); // 8024CCF8
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8024CCFC
  c->r[0]=c->r[4]+c->r[0]; // 8024CD00
  c->r[3]=c->r[3]+c->r[0]; // 8024CD04
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CD08
  if (crb(c,1)) { goto L_8024CD18; } // 8024CD0C
  c->r[0]=0u+0x00000000u; // 8024CD10
  goto L_8024CD40; // 8024CD14
L_8024CD18:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CD18
  if (crb(c,0)) { goto L_8024CD2C; } // 8024CD1C
  c->r[3]=0u+0x00010000u; // 8024CD20
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CD24
  goto L_8024CD40; // 8024CD28
L_8024CD2C:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CD2C
  c->r[3]=0u+0x802A0000u; // 8024CD30
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CD34
  c->r[3]=c->r[3]+0x00001E60u; // 8024CD38
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CD3C
L_8024CD40:;
  W16(c->r[30]+0x00000040u,c->r[0]); // 8024CD40
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024CD44
  c->r[0]=R32(c->r[30]+0x00000014u); // 8024CD48
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8024CD4C
  c->r[0]=c->r[4]+c->r[0]; // 8024CD50
  c->r[3]=c->r[3]+c->r[0]; // 8024CD54
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CD58
  if (crb(c,1)) { goto L_8024CD68; } // 8024CD5C
  c->r[0]=0u+0x00000000u; // 8024CD60
  goto L_8024CD90; // 8024CD64
L_8024CD68:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CD68
  if (crb(c,0)) { goto L_8024CD7C; } // 8024CD6C
  c->r[3]=0u+0x00010000u; // 8024CD70
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CD74
  goto L_8024CD90; // 8024CD78
L_8024CD7C:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CD7C
  c->r[3]=0u+0x802A0000u; // 8024CD80
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CD84
  c->r[3]=c->r[3]+0x00001E60u; // 8024CD88
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CD8C
L_8024CD90:;
  W16(c->r[30]+0x00000044u,c->r[0]); // 8024CD90
  c->r[4]=R32(c->r[30]+0x00000014u); // 8024CD94
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8024CD98
  c->r[3]=R32(c->r[30]+0x00000024u); // 8024CD9C
  c->r[0]=c->r[4]+c->r[0]; // 8024CDA0
  c->r[3]=c->r[0]+c->r[3]; // 8024CDA4
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 8024CDA8
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CDAC
  if (crb(c,1)) { goto L_8024CDBC; } // 8024CDB0
  c->r[0]=0u+0x00000000u; // 8024CDB4
  goto L_8024CDE4; // 8024CDB8
L_8024CDBC:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CDBC
  if (crb(c,0)) { goto L_8024CDD0; } // 8024CDC0
  c->r[3]=0u+0x00010000u; // 8024CDC4
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CDC8
  goto L_8024CDE4; // 8024CDCC
L_8024CDD0:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CDD0
  c->r[3]=0u+0x802A0000u; // 8024CDD4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CDD8
  c->r[3]=c->r[3]+0x00001E60u; // 8024CDDC
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CDE0
L_8024CDE4:;
  W16(c->r[30]+0x00000048u,c->r[0]); // 8024CDE4
  c->r[0]=0u+0x00000000u; // 8024CDE8
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 8024CDEC
  W16(c->r[30]+0x00000050u,c->r[0]); // 8024CDF0
  W16(c->r[30]+0x00000054u,c->r[0]); // 8024CDF4
  W16(c->r[30]+0x00000058u,c->r[0]); // 8024CDF8
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 8024CDFC
  W16(c->r[30]+0x00000060u,c->r[0]); // 8024CE00
  goto L_8024D2D0; // 8024CE04
L_8024CE08:;
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024CE08
  c->r[0]=R32(c->r[30]+0x00000014u); // 8024CE0C
  c->r[3]=R32(c->r[30]+0x00000018u); // 8024CE10
  c->r[0]=c->r[4]+c->r[0]; // 8024CE14
  c->r[3]=c->r[3]+c->r[0]; // 8024CE18
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CE1C
  if (crb(c,1)) { goto L_8024CE2C; } // 8024CE20
  c->r[0]=0u+0x00000000u; // 8024CE24
  goto L_8024CE54; // 8024CE28
L_8024CE2C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CE2C
  if (crb(c,0)) { goto L_8024CE40; } // 8024CE30
  c->r[3]=0u+0x00010000u; // 8024CE34
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CE38
  goto L_8024CE54; // 8024CE3C
L_8024CE40:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CE40
  c->r[3]=0u+0x802A0000u; // 8024CE44
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CE48
  c->r[3]=c->r[3]+0x00001E60u; // 8024CE4C
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CE50
L_8024CE54:;
  W16(c->r[30]+0x00000034u,c->r[0]); // 8024CE54
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024CE58
  c->r[0]=R32(c->r[30]+0x00000014u); // 8024CE5C
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8024CE60
  c->r[0]=c->r[4]+c->r[0]; // 8024CE64
  c->r[3]=c->r[3]+c->r[0]; // 8024CE68
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CE6C
  if (crb(c,1)) { goto L_8024CE7C; } // 8024CE70
  c->r[0]=0u+0x00000000u; // 8024CE74
  goto L_8024CEA4; // 8024CE78
L_8024CE7C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CE7C
  if (crb(c,0)) { goto L_8024CE90; } // 8024CE80
  c->r[3]=0u+0x00010000u; // 8024CE84
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CE88
  goto L_8024CEA4; // 8024CE8C
L_8024CE90:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CE90
  c->r[3]=0u+0x802A0000u; // 8024CE94
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CE98
  c->r[3]=c->r[3]+0x00001E60u; // 8024CE9C
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CEA0
L_8024CEA4:;
  W16(c->r[30]+0x00000038u,c->r[0]); // 8024CEA4
  c->r[3]=R32(c->r[30]+0x00000014u); // 8024CEA8
  c->r[0]=R32(c->r[30]+0x00000024u); // 8024CEAC
  c->r[3]=c->r[3]+c->r[0]; // 8024CEB0
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 8024CEB4
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CEB8
  if (crb(c,1)) { goto L_8024CEC8; } // 8024CEBC
  c->r[0]=0u+0x00000000u; // 8024CEC0
  goto L_8024CEF0; // 8024CEC4
L_8024CEC8:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CEC8
  if (crb(c,0)) { goto L_8024CEDC; } // 8024CECC
  c->r[3]=0u+0x00010000u; // 8024CED0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CED4
  goto L_8024CEF0; // 8024CED8
L_8024CEDC:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CEDC
  c->r[3]=0u+0x802A0000u; // 8024CEE0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CEE4
  c->r[3]=c->r[3]+0x00001E60u; // 8024CEE8
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CEEC
L_8024CEF0:;
  W16(c->r[30]+0x0000003Cu,c->r[0]); // 8024CEF0
  c->r[5]=R32(c->r[30]+0x00000020u); // 8024CEF4
  c->r[3]=R32(c->r[30]+0x00000018u); // 8024CEF8
  c->r[4]=R32(c->r[30]+0x00000014u); // 8024CEFC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8024CF00
  c->r[3]=c->r[5]+c->r[3]; // 8024CF04
  c->r[0]=c->r[4]+c->r[0]; // 8024CF08
  c->r[3]=c->r[3]+c->r[0]; // 8024CF0C
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CF10
  if (crb(c,1)) { goto L_8024CF20; } // 8024CF14
  c->r[0]=0u+0x00000000u; // 8024CF18
  goto L_8024CF48; // 8024CF1C
L_8024CF20:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CF20
  if (crb(c,0)) { goto L_8024CF34; } // 8024CF24
  c->r[3]=0u+0x00010000u; // 8024CF28
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CF2C
  goto L_8024CF48; // 8024CF30
L_8024CF34:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CF34
  c->r[3]=0u+0x802A0000u; // 8024CF38
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CF3C
  c->r[3]=c->r[3]+0x00001E60u; // 8024CF40
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CF44
L_8024CF48:;
  W16(c->r[30]+0x00000040u,c->r[0]); // 8024CF48
  c->r[5]=R32(c->r[30]+0x00000020u); // 8024CF4C
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8024CF50
  c->r[4]=R32(c->r[30]+0x00000014u); // 8024CF54
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8024CF58
  c->r[3]=c->r[5]+c->r[3]; // 8024CF5C
  c->r[0]=c->r[4]+c->r[0]; // 8024CF60
  c->r[3]=c->r[3]+c->r[0]; // 8024CF64
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CF68
  if (crb(c,1)) { goto L_8024CF78; } // 8024CF6C
  c->r[0]=0u+0x00000000u; // 8024CF70
  goto L_8024CFA0; // 8024CF74
L_8024CF78:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CF78
  if (crb(c,0)) { goto L_8024CF8C; } // 8024CF7C
  c->r[3]=0u+0x00010000u; // 8024CF80
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CF84
  goto L_8024CFA0; // 8024CF88
L_8024CF8C:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CF8C
  c->r[3]=0u+0x802A0000u; // 8024CF90
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CF94
  c->r[3]=c->r[3]+0x00001E60u; // 8024CF98
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CF9C
L_8024CFA0:;
  W16(c->r[30]+0x00000044u,c->r[0]); // 8024CFA0
  c->r[4]=R32(c->r[30]+0x00000014u); // 8024CFA4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8024CFA8
  c->r[3]=R32(c->r[30]+0x00000024u); // 8024CFAC
  c->r[0]=c->r[4]+c->r[0]; // 8024CFB0
  c->r[3]=c->r[0]+c->r[3]; // 8024CFB4
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 8024CFB8
  cmps(c,0,(int32_t)c->r[3],-904); // 8024CFBC
  if (crb(c,1)) { goto L_8024CFCC; } // 8024CFC0
  c->r[0]=0u+0x00000000u; // 8024CFC4
  goto L_8024CFF4; // 8024CFC8
L_8024CFCC:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024CFCC
  if (crb(c,0)) { goto L_8024CFE0; } // 8024CFD0
  c->r[3]=0u+0x00010000u; // 8024CFD4
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024CFD8
  goto L_8024CFF4; // 8024CFDC
L_8024CFE0:;
  c->r[0]=c->r[3]+0x00000388u; // 8024CFE0
  c->r[3]=0u+0x802A0000u; // 8024CFE4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024CFE8
  c->r[3]=c->r[3]+0x00001E60u; // 8024CFEC
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024CFF0
L_8024CFF4:;
  W16(c->r[30]+0x00000048u,c->r[0]); // 8024CFF4
  c->r[0]=0u+0x00000000u; // 8024CFF8
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 8024CFFC
  W16(c->r[30]+0x00000050u,c->r[0]); // 8024D000
  W16(c->r[30]+0x00000054u,c->r[0]); // 8024D004
  W16(c->r[30]+0x00000058u,c->r[0]); // 8024D008
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 8024D00C
  W16(c->r[30]+0x00000060u,c->r[0]); // 8024D010
  goto L_8024D2D0; // 8024D014
L_8024D018:;
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024D018
  c->r[0]=R32(c->r[30]+0x00000014u); // 8024D01C
  c->r[3]=R32(c->r[30]+0x00000018u); // 8024D020
  c->r[0]=c->r[4]+c->r[0]; // 8024D024
  c->r[3]=c->r[3]+c->r[0]; // 8024D028
  cmps(c,0,(int32_t)c->r[3],-904); // 8024D02C
  if (crb(c,1)) { goto L_8024D03C; } // 8024D030
  c->r[0]=0u+0x00000000u; // 8024D034
  goto L_8024D064; // 8024D038
L_8024D03C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024D03C
  if (crb(c,0)) { goto L_8024D050; } // 8024D040
  c->r[3]=0u+0x00010000u; // 8024D044
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024D048
  goto L_8024D064; // 8024D04C
L_8024D050:;
  c->r[0]=c->r[3]+0x00000388u; // 8024D050
  c->r[3]=0u+0x802A0000u; // 8024D054
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024D058
  c->r[3]=c->r[3]+0x00001E60u; // 8024D05C
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024D060
L_8024D064:;
  W16(c->r[30]+0x00000034u,c->r[0]); // 8024D064
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024D068
  c->r[0]=R32(c->r[30]+0x00000014u); // 8024D06C
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8024D070
  c->r[0]=c->r[4]+c->r[0]; // 8024D074
  c->r[3]=c->r[3]+c->r[0]; // 8024D078
  cmps(c,0,(int32_t)c->r[3],-904); // 8024D07C
  if (crb(c,1)) { goto L_8024D08C; } // 8024D080
  c->r[0]=0u+0x00000000u; // 8024D084
  goto L_8024D0B4; // 8024D088
L_8024D08C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024D08C
  if (crb(c,0)) { goto L_8024D0A0; } // 8024D090
  c->r[3]=0u+0x00010000u; // 8024D094
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024D098
  goto L_8024D0B4; // 8024D09C
L_8024D0A0:;
  c->r[0]=c->r[3]+0x00000388u; // 8024D0A0
  c->r[3]=0u+0x802A0000u; // 8024D0A4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024D0A8
  c->r[3]=c->r[3]+0x00001E60u; // 8024D0AC
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024D0B0
L_8024D0B4:;
  W16(c->r[30]+0x00000038u,c->r[0]); // 8024D0B4
  c->r[4]=R32(c->r[30]+0x00000024u); // 8024D0B8
  c->r[0]=R32(c->r[30]+0x00000014u); // 8024D0BC
  c->r[3]=R32(c->r[30]+0x00000028u); // 8024D0C0
  c->r[0]=c->r[4]+c->r[0]; // 8024D0C4
  c->r[3]=c->r[3]+c->r[0]; // 8024D0C8
  cmps(c,0,(int32_t)c->r[3],-904); // 8024D0CC
  if (crb(c,1)) { goto L_8024D0DC; } // 8024D0D0
  c->r[0]=0u+0x00000000u; // 8024D0D4
  goto L_8024D104; // 8024D0D8
L_8024D0DC:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024D0DC
  if (crb(c,0)) { goto L_8024D0F0; } // 8024D0E0
  c->r[3]=0u+0x00010000u; // 8024D0E4
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024D0E8
  goto L_8024D104; // 8024D0EC
L_8024D0F0:;
  c->r[0]=c->r[3]+0x00000388u; // 8024D0F0
  c->r[3]=0u+0x802A0000u; // 8024D0F4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024D0F8
  c->r[3]=c->r[3]+0x00001E60u; // 8024D0FC
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024D100
L_8024D104:;
  W16(c->r[30]+0x0000003Cu,c->r[0]); // 8024D104
  c->r[4]=R32(c->r[30]+0x00000024u); // 8024D108
  c->r[0]=R32(c->r[30]+0x00000014u); // 8024D10C
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 8024D110
  c->r[0]=c->r[4]+c->r[0]; // 8024D114
  c->r[3]=c->r[3]+c->r[0]; // 8024D118
  cmps(c,0,(int32_t)c->r[3],-904); // 8024D11C
  if (crb(c,1)) { goto L_8024D12C; } // 8024D120
  c->r[0]=0u+0x00000000u; // 8024D124
  goto L_8024D154; // 8024D128
L_8024D12C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024D12C
  if (crb(c,0)) { goto L_8024D140; } // 8024D130
  c->r[3]=0u+0x00010000u; // 8024D134
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024D138
  goto L_8024D154; // 8024D13C
L_8024D140:;
  c->r[0]=c->r[3]+0x00000388u; // 8024D140
  c->r[3]=0u+0x802A0000u; // 8024D144
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024D148
  c->r[3]=c->r[3]+0x00001E60u; // 8024D14C
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024D150
L_8024D154:;
  W16(c->r[30]+0x00000058u,c->r[0]); // 8024D154
  c->r[5]=R32(c->r[30]+0x00000020u); // 8024D158
  c->r[3]=R32(c->r[30]+0x00000018u); // 8024D15C
  c->r[4]=R32(c->r[30]+0x00000014u); // 8024D160
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8024D164
  c->r[3]=c->r[5]+c->r[3]; // 8024D168
  c->r[0]=c->r[4]+c->r[0]; // 8024D16C
  c->r[3]=c->r[3]+c->r[0]; // 8024D170
  cmps(c,0,(int32_t)c->r[3],-904); // 8024D174
  if (crb(c,1)) { goto L_8024D184; } // 8024D178
  c->r[0]=0u+0x00000000u; // 8024D17C
  goto L_8024D1AC; // 8024D180
L_8024D184:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024D184
  if (crb(c,0)) { goto L_8024D198; } // 8024D188
  c->r[3]=0u+0x00010000u; // 8024D18C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024D190
  goto L_8024D1AC; // 8024D194
L_8024D198:;
  c->r[0]=c->r[3]+0x00000388u; // 8024D198
  c->r[3]=0u+0x802A0000u; // 8024D19C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024D1A0
  c->r[3]=c->r[3]+0x00001E60u; // 8024D1A4
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024D1A8
L_8024D1AC:;
  W16(c->r[30]+0x00000040u,c->r[0]); // 8024D1AC
  c->r[5]=R32(c->r[30]+0x00000020u); // 8024D1B0
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8024D1B4
  c->r[4]=R32(c->r[30]+0x00000014u); // 8024D1B8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8024D1BC
  c->r[3]=c->r[5]+c->r[3]; // 8024D1C0
  c->r[0]=c->r[4]+c->r[0]; // 8024D1C4
  c->r[3]=c->r[3]+c->r[0]; // 8024D1C8
  cmps(c,0,(int32_t)c->r[3],-904); // 8024D1CC
  if (crb(c,1)) { goto L_8024D1DC; } // 8024D1D0
  c->r[0]=0u+0x00000000u; // 8024D1D4
  goto L_8024D204; // 8024D1D8
L_8024D1DC:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024D1DC
  if (crb(c,0)) { goto L_8024D1F0; } // 8024D1E0
  c->r[3]=0u+0x00010000u; // 8024D1E4
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024D1E8
  goto L_8024D204; // 8024D1EC
L_8024D1F0:;
  c->r[0]=c->r[3]+0x00000388u; // 8024D1F0
  c->r[3]=0u+0x802A0000u; // 8024D1F4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024D1F8
  c->r[3]=c->r[3]+0x00001E60u; // 8024D1FC
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024D200
L_8024D204:;
  W16(c->r[30]+0x00000044u,c->r[0]); // 8024D204
  c->r[5]=R32(c->r[30]+0x00000024u); // 8024D208
  c->r[3]=R32(c->r[30]+0x00000028u); // 8024D20C
  c->r[4]=R32(c->r[30]+0x00000014u); // 8024D210
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8024D214
  c->r[3]=c->r[5]+c->r[3]; // 8024D218
  c->r[0]=c->r[4]+c->r[0]; // 8024D21C
  c->r[3]=c->r[3]+c->r[0]; // 8024D220
  cmps(c,0,(int32_t)c->r[3],-904); // 8024D224
  if (crb(c,1)) { goto L_8024D234; } // 8024D228
  c->r[0]=0u+0x00000000u; // 8024D22C
  goto L_8024D25C; // 8024D230
L_8024D234:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024D234
  if (crb(c,0)) { goto L_8024D248; } // 8024D238
  c->r[3]=0u+0x00010000u; // 8024D23C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024D240
  goto L_8024D25C; // 8024D244
L_8024D248:;
  c->r[0]=c->r[3]+0x00000388u; // 8024D248
  c->r[3]=0u+0x802A0000u; // 8024D24C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024D250
  c->r[3]=c->r[3]+0x00001E60u; // 8024D254
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024D258
L_8024D25C:;
  W16(c->r[30]+0x00000048u,c->r[0]); // 8024D25C
  c->r[5]=R32(c->r[30]+0x00000024u); // 8024D260
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 8024D264
  c->r[4]=R32(c->r[30]+0x00000014u); // 8024D268
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8024D26C
  c->r[3]=c->r[5]+c->r[3]; // 8024D270
  c->r[0]=c->r[4]+c->r[0]; // 8024D274
  c->r[3]=c->r[3]+c->r[0]; // 8024D278
  cmps(c,0,(int32_t)c->r[3],-904); // 8024D27C
  if (crb(c,1)) { goto L_8024D28C; } // 8024D280
  c->r[0]=0u+0x00000000u; // 8024D284
  goto L_8024D2B4; // 8024D288
L_8024D28C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8024D28C
  if (crb(c,0)) { goto L_8024D2A0; } // 8024D290
  c->r[3]=0u+0x00010000u; // 8024D294
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8024D298
  goto L_8024D2B4; // 8024D29C
L_8024D2A0:;
  c->r[0]=c->r[3]+0x00000388u; // 8024D2A0
  c->r[3]=0u+0x802A0000u; // 8024D2A4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8024D2A8
  c->r[3]=c->r[3]+0x00001E60u; // 8024D2AC
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024D2B0
L_8024D2B4:;
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 8024D2B4
  c->r[0]=0u+0x00000000u; // 8024D2B8
  c->r[29]=c->r[29]|0x80000000u; // 8024D2BC
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 8024D2C0
  W16(c->r[30]+0x00000050u,c->r[0]); // 8024D2C4
  W16(c->r[30]+0x00000054u,c->r[0]); // 8024D2C8
  W16(c->r[30]+0x00000060u,c->r[0]); // 8024D2CC
L_8024D2D0:;
  c->lr=0x8024D2D4u; f_800B087C(c); // 8024D2D0
  c->r[4]=R16(c->r[30]+0x00000030u); // 8024D2D4
  c->r[0]=0u+0x00000000u; // 8024D2D8
  c->r[31]=c->r[3]|c->r[3]; // 8024D2DC
  c->r[3]=c->r[28]+0x0000003Eu; // 8024D2E0
  W16(c->r[28]+0x00000092u,c->r[4]); // 8024D2E4
  W16(c->r[28]+0x00000094u,c->r[0]); // 8024D2E8
  c->r[0]=R16(c->r[30]+0x00000034u); // 8024D2EC
  cmps(c,0,(int32_t)c->r[0],0); // 8024D2F0
  W16(c->r[28]+0x0000003Cu,c->r[0]); // 8024D2F4
  if (crb(c,2)) { goto L_8024D300; } // 8024D2F8
  c->r[29]=c->r[29]|0x00000001u; // 8024D2FC
L_8024D300:;
  c->r[0]=0u+0x00000000u; // 8024D300
  W16(c->r[3]+0x00000000u,c->r[0]); // 8024D304
  c->r[0]=R16(c->r[30]+0x00000038u); // 8024D308
  cmps(c,0,(int32_t)c->r[0],0); // 8024D30C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8024D310
  if (crb(c,2)) { goto L_8024D31C; } // 8024D314
  c->r[29]=c->r[29]|0x00000002u; // 8024D318
L_8024D31C:;
  c->r[0]=0u+0x00000000u; // 8024D31C
  W16(c->r[3]+0x00000004u,c->r[0]); // 8024D320
  c->r[0]=R16(c->r[30]+0x00000040u); // 8024D324
  cmps(c,0,(int32_t)c->r[0],0); // 8024D328
  W16(c->r[3]+0x00000006u,c->r[0]); // 8024D32C
  if (crb(c,2)) { goto L_8024D338; } // 8024D330
  c->r[29]=c->r[29]|0x00010000u; // 8024D334
L_8024D338:;
  c->r[0]=0u+0x00000000u; // 8024D338
  W16(c->r[3]+0x00000008u,c->r[0]); // 8024D33C
  c->r[0]=R16(c->r[30]+0x00000044u); // 8024D340
  cmps(c,0,(int32_t)c->r[0],0); // 8024D344
  W16(c->r[3]+0x0000000Au,c->r[0]); // 8024D348
  if (crb(c,2)) { goto L_8024D354; } // 8024D34C
  c->r[29]=c->r[29]|0x00020000u; // 8024D350
L_8024D354:;
  c->r[0]=0u+0x00000000u; // 8024D354
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 8024D358
  c->r[0]=R16(c->r[30]+0x0000004Cu); // 8024D35C
  cmps(c,0,(int32_t)c->r[0],0); // 8024D360
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 8024D364
  if (crb(c,2)) { goto L_8024D370; } // 8024D368
  c->r[29]=c->r[29]|0x00200000u; // 8024D36C
L_8024D370:;
  c->r[0]=0u+0x00000000u; // 8024D370
  W16(c->r[3]+0x00000010u,c->r[0]); // 8024D374
  c->r[0]=R16(c->r[30]+0x00000050u); // 8024D378
  cmps(c,0,(int32_t)c->r[0],0); // 8024D37C
  W16(c->r[3]+0x00000012u,c->r[0]); // 8024D380
  if (crb(c,2)) { goto L_8024D38C; } // 8024D384
  c->r[29]=c->r[29]|0x00400000u; // 8024D388
L_8024D38C:;
  c->r[0]=0u+0x00000000u; // 8024D38C
  W16(c->r[3]+0x00000014u,c->r[0]); // 8024D390
  c->r[0]=R16(c->r[30]+0x00000058u); // 8024D394
  cmps(c,0,(int32_t)c->r[0],0); // 8024D398
  W16(c->r[3]+0x00000016u,c->r[0]); // 8024D39C
  if (crb(c,2)) { goto L_8024D3A8; } // 8024D3A0
  c->r[29]=c->r[29]|0x04000000u; // 8024D3A4
L_8024D3A8:;
  c->r[0]=0u+0x00000000u; // 8024D3A8
  W16(c->r[3]+0x00000018u,c->r[0]); // 8024D3AC
  c->r[0]=R16(c->r[30]+0x0000005Cu); // 8024D3B0
  cmps(c,0,(int32_t)c->r[0],0); // 8024D3B4
  W16(c->r[3]+0x0000001Au,c->r[0]); // 8024D3B8
  if (crb(c,2)) { goto L_8024D3C4; } // 8024D3BC
  c->r[29]=c->r[29]|0x08000000u; // 8024D3C0
L_8024D3C4:;
  c->r[0]=0u+0x00000000u; // 8024D3C4
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 8024D3C8
  c->r[0]=R16(c->r[30]+0x0000003Cu); // 8024D3CC
  cmps(c,0,(int32_t)c->r[0],0); // 8024D3D0
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 8024D3D4
  if (crb(c,2)) { goto L_8024D3E0; } // 8024D3D8
  c->r[29]=c->r[29]|0x00000008u; // 8024D3DC
L_8024D3E0:;
  c->r[0]=0u+0x00000000u; // 8024D3E0
  W16(c->r[3]+0x00000020u,c->r[0]); // 8024D3E4
  c->r[0]=R16(c->r[30]+0x00000048u); // 8024D3E8
  cmps(c,0,(int32_t)c->r[0],0); // 8024D3EC
  W16(c->r[3]+0x00000022u,c->r[0]); // 8024D3F0
  if (crb(c,2)) { goto L_8024D3FC; } // 8024D3F4
  c->r[29]=c->r[29]|0x00080000u; // 8024D3F8
L_8024D3FC:;
  c->r[0]=0u+0x00000000u; // 8024D3FC
  W16(c->r[3]+0x00000024u,c->r[0]); // 8024D400
  c->r[0]=R16(c->r[30]+0x00000054u); // 8024D404
  cmps(c,0,(int32_t)c->r[0],0); // 8024D408
  W16(c->r[3]+0x00000026u,c->r[0]); // 8024D40C
  if (crb(c,2)) { goto L_8024D418; } // 8024D410
  c->r[29]=c->r[29]|0x01000000u; // 8024D414
L_8024D418:;
  c->r[0]=0u+0x00000000u; // 8024D418
  W16(c->r[3]+0x00000028u,c->r[0]); // 8024D41C
  c->r[0]=R16(c->r[30]+0x00000060u); // 8024D420
  cmps(c,0,(int32_t)c->r[0],0); // 8024D424
  W16(c->r[3]+0x0000002Au,c->r[0]); // 8024D428
  if (crb(c,2)) { goto L_8024D434; } // 8024D42C
  c->r[29]=c->r[29]|0x20000000u; // 8024D430
L_8024D434:;
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8024D434
  c->r[30]=0u+0x00000000u; // 8024D438
  W16(c->r[3]+0x0000002Cu,c->r[30]); // 8024D43C
  c->r[3]=c->r[28]+0x00000102u; // 8024D440
  c->r[0]=c->r[0]|0x00000112u; // 8024D444
  c->r[4]=0u+0x00000000u; // 8024D448
  W32(c->r[28]+0x00000034u,c->r[29]); // 8024D44C
  c->r[5]=0u+0x00000020u; // 8024D450
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8024D454
  c->lr=0x8024D45Cu; f_80004688(c); // 8024D458
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8024D45C
  c->r[3]=c->r[31]|c->r[31]; // 8024D460
  W16(c->r[28]+0x00000100u,c->r[30]); // 8024D464
  c->r[0]=c->r[0]|0x03000000u; // 8024D468
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8024D46C
  c->lr=0x8024D474u; f_800B08A4(c); // 8024D470
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024D474
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024D478
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024D47C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024D480
  c->r[28]=R32(c->r[1]+0x00000010u); // 8024D484
  c->lr=c->r[0]; // 8024D488
  c->r[1]=c->r[1]+0x00000020u; // 8024D48C
  return; // 8024D490
}

// HBMMIXReleaseChannel
void f_8024D494(Ctx* __restrict c) {
  trace_call(0x8024D494u);
  c->r[4]=0u+0x80360000u; // 8024D494
  c->r[0]=R32(c->r[3]+0x00000018u); // 8024D498
  c->r[4]=c->r[4]+0xFFFFCEA8u; // 8024D49C
  c->r[3]=0u+0x80360000u; // 8024D4A0
  c->r[0]=R8(c->r[4]+c->r[0]); // 8024D4A4
  c->r[4]=0u+0x00000000u; // 8024D4A8
  c->r[3]=R32(c->r[3]+0xFFFFCF0Cu); // 8024D4AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8024D4B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8024D4B4
  W32(c->r[3]+c->r[0],c->r[4]); // 8024D4B8
  return; // 8024D4BC
}

// HBMMIXSetInput
void f_8024D4C0(Ctx* __restrict c) {
  trace_call(0x8024D4C0u);
  c->r[5]=0u+0x80360000u; // 8024D4C0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8024D4C4
  c->r[5]=c->r[5]+0xFFFFCEA8u; // 8024D4C8
  c->r[3]=0u+0x80360000u; // 8024D4CC
  c->r[0]=R8(c->r[5]+c->r[0]); // 8024D4D0
  c->r[3]=R32(c->r[3]+0xFFFFCF0Cu); // 8024D4D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8024D4D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8024D4DC
  c->r[3]=c->r[3]+c->r[0]; // 8024D4E0
  W32(c->r[3]+0x00000008u,c->r[4]); // 8024D4E4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8024D4E8
  c->r[0]=c->r[0]|0x10000000u; // 8024D4EC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8024D4F0
  return; // 8024D4F4
}

// HBMMIXSetAuxA
void f_8024D4F8(Ctx* __restrict c) {
  trace_call(0x8024D4F8u);
  c->r[5]=0u+0x80360000u; // 8024D4F8
  c->r[0]=R32(c->r[3]+0x00000018u); // 8024D4FC
  c->r[5]=c->r[5]+0xFFFFCEA8u; // 8024D500
  c->r[3]=0u+0x80360000u; // 8024D504
  c->r[0]=R8(c->r[5]+c->r[0]); // 8024D508
  c->r[3]=R32(c->r[3]+0xFFFFCF0Cu); // 8024D50C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8024D510
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8024D514
  c->r[3]=c->r[3]+c->r[0]; // 8024D518
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8024D51C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8024D520
  c->r[0]=c->r[0]|0x40000000u; // 8024D524
  W32(c->r[3]+0x00000004u,c->r[0]); // 8024D528
  return; // 8024D52C
}

// HBMMIXSetPan
void f_8024D530(Ctx* __restrict c) {
  trace_call(0x8024D530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D530
  c->r[0]=c->lr; // 8024D534
  c->r[5]=0u+0x80360000u; // 8024D538
  cmps(c,0,(int32_t)c->r[4],0); // 8024D53C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024D540
  c->r[5]=c->r[5]+0xFFFFCEA8u; // 8024D544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024D548
  c->r[0]=R32(c->r[3]+0x00000018u); // 8024D54C
  c->r[3]=0u+0x80360000u; // 8024D550
  c->r[3]=R32(c->r[3]+0xFFFFCF0Cu); // 8024D554
  c->r[0]=R8(c->r[5]+c->r[0]); // 8024D558
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8024D55C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8024D560
  c->r[31]=c->r[3]+c->r[0]; // 8024D564
  if (!crb(c,0)) { goto L_8024D574; } // 8024D568
  c->r[0]=0u+0x00000000u; // 8024D56C
  goto L_8024D584; // 8024D570
L_8024D574:;
  cmps(c,0,(int32_t)c->r[4],127); // 8024D574
  c->r[0]=0u+0x0000007Fu; // 8024D578
  if (crb(c,1)) { goto L_8024D584; } // 8024D57C
  c->r[0]=c->r[4]|c->r[4]; // 8024D580
L_8024D584:;
  W32(c->r[31]+0x00000010u,c->r[0]); // 8024D584
  c->r[3]=c->r[31]|c->r[31]; // 8024D588
  c->lr=0x8024D590u; f_8024C880(c); // 8024D58C
  c->r[0]=R32(c->r[31]+0x00000004u); // 8024D590
  c->r[0]=c->r[0]|0x40000000u; // 8024D594
  W32(c->r[31]+0x00000004u,c->r[0]); // 8024D598
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024D59C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024D5A0
  c->lr=c->r[0]; // 8024D5A4
  c->r[1]=c->r[1]+0x00000010u; // 8024D5A8
  return; // 8024D5AC
}

// HBMMIXSetFader
void f_8024D5B0(Ctx* __restrict c) {
  trace_call(0x8024D5B0u);
  c->r[5]=0u+0x80360000u; // 8024D5B0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8024D5B4
  c->r[5]=c->r[5]+0xFFFFCEA8u; // 8024D5B8
  c->r[3]=0u+0x80360000u; // 8024D5BC
  c->r[0]=R8(c->r[5]+c->r[0]); // 8024D5C0
  c->r[3]=R32(c->r[3]+0xFFFFCF0Cu); // 8024D5C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8024D5C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8024D5CC
  c->r[3]=c->r[3]+c->r[0]; // 8024D5D0
  W32(c->r[3]+0x00000014u,c->r[4]); // 8024D5D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8024D5D8
  c->r[0]=c->r[0]|0x40000000u; // 8024D5DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8024D5E0
  return; // 8024D5E4
}

// HBMMIXUpdateSettings
void f_8024D5E8(Ctx* __restrict c) {
  trace_call(0x8024D5E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D5E8
  c->r[6]=0u+0x80360000u; // 8024D5EC
  c->r[6]=c->r[6]+0xFFFFCE98u; // 8024D5F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024D5F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024D5F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024D5FC
  c->r[0]=R32(c->r[6]+0x000006B8u); // 8024D600
  cmps(c,0,(int32_t)c->r[0],0); // 8024D604
  if (crb(c,2)) { goto L_8024E0D0; } // 8024D608
  c->r[3]=0u+0x802A0000u; // 8024D60C
  c->r[8]=0u+0x00000010u; // 8024D610
  c->r[4]=c->r[3]+0x00001E60u; // 8024D614
  c->r[7]=0u+0x00000000u; // 8024D618
  c->r[5]=0u+0x00010000u; // 8024D61C
  c->r[0]=0u+0x00000000u; // 8024D620
  c->r[3]=0u+0x2AAB0000u; // 8024D624
  c->ctr=c->r[8]; // 8024D628
L_8024D62C:;
  c->r[10]=R32(c->r[6]+0x00000074u); // 8024D62C
  c->r[9]=0u+0x00000000u; // 8024D630
  {uint32_t ea=c->r[10]+c->r[7]; c->r[11]=R32(ea); c->r[10]=ea;} // 8024D634
  c->r[8]=0u+0x00000000u; // 8024D638
  cmps(c,0,(int32_t)c->r[11],0); // 8024D63C
  if (crb(c,2)) { goto L_8024E0C8; } // 8024D640
  c->r[29]=R32(c->r[10]+0x00000004u); // 8024D644
  c->r[12]=0u+0x00000000u; // 8024D648
  c->r[29]=rotl(c->r[29],0)&0x20000000u; cr0(c,c->r[29]); // 8024D64C
  if (crb(c,2)) { goto L_8024D66C; } // 8024D650
  c->r[29]=R16(c->r[10]+0x00000032u); // 8024D654
  c->r[9]=0u+0x00000001u; // 8024D658
  W16(c->r[10]+0x00000030u,c->r[29]); // 8024D65C
  c->r[29]=R32(c->r[10]+0x00000004u); // 8024D660
  c->r[29]=rotl(c->r[29],0)&0xDFFFFFFFu; // 8024D664
  W32(c->r[10]+0x00000004u,c->r[29]); // 8024D668
L_8024D66C:;
  c->r[29]=R32(c->r[10]+0x00000004u); // 8024D66C
  c->r[29]=rotl(c->r[29],0)&0x10000000u; cr0(c,c->r[29]); // 8024D670
  if (crb(c,2)) { goto L_8024D6C0; } // 8024D674
  c->r[9]=R32(c->r[10]+0x00000008u); // 8024D678
  cmps(c,0,(int32_t)c->r[9],-904); // 8024D67C
  if (crb(c,1)) { goto L_8024D68C; } // 8024D680
  c->r[9]=0u+0x00000000u; // 8024D684
  goto L_8024D6A8; // 8024D688
L_8024D68C:;
  cmps(c,0,(int32_t)c->r[9],60); // 8024D68C
  if (crb(c,0)) { goto L_8024D69C; } // 8024D690
  c->r[9]=c->r[5]+0xFFFFFF64u; // 8024D694
  goto L_8024D6A8; // 8024D698
L_8024D69C:;
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 8024D69C
  c->r[9]=c->r[4]+c->r[9]; // 8024D6A0
  c->r[9]=R16(c->r[9]+0x00000710u); // 8024D6A4
L_8024D6A8:;
  W16(c->r[10]+0x00000032u,c->r[9]); // 8024D6A8
  c->r[9]=0u+0x00000001u; // 8024D6AC
  c->r[29]=R32(c->r[10]+0x00000004u); // 8024D6B0
  c->r[29]=rotl(c->r[29],0)&0xEFFFFFFFu; // 8024D6B4
  c->r[29]=c->r[29]|0x20000000u; // 8024D6B8
  W32(c->r[10]+0x00000004u,c->r[29]); // 8024D6BC
L_8024D6C0:;
  c->r[29]=R32(c->r[10]+0x00000004u); // 8024D6C0
  c->r[29]=rotl(c->r[29],0)&0x80000000u; cr0(c,c->r[29]); // 8024D6C4
  if (crb(c,2)) { goto L_8024D73C; } // 8024D6C8
  c->r[29]=R16(c->r[10]+0x00000036u); // 8024D6CC
  c->r[8]=0u+0x00000001u; // 8024D6D0
  W16(c->r[10]+0x00000034u,c->r[29]); // 8024D6D4
  c->r[29]=R16(c->r[10]+0x0000003Au); // 8024D6D8
  W16(c->r[10]+0x00000038u,c->r[29]); // 8024D6DC
  c->r[29]=R16(c->r[10]+0x0000003Eu); // 8024D6E0
  W16(c->r[10]+0x0000003Cu,c->r[29]); // 8024D6E4
  c->r[29]=R16(c->r[10]+0x00000042u); // 8024D6E8
  W16(c->r[10]+0x00000040u,c->r[29]); // 8024D6EC
  c->r[29]=R16(c->r[10]+0x00000046u); // 8024D6F0
  W16(c->r[10]+0x00000044u,c->r[29]); // 8024D6F4
  c->r[29]=R16(c->r[10]+0x0000004Au); // 8024D6F8
  W16(c->r[10]+0x00000048u,c->r[29]); // 8024D6FC
  c->r[29]=R16(c->r[10]+0x0000004Eu); // 8024D700
  W16(c->r[10]+0x0000004Cu,c->r[29]); // 8024D704
  c->r[29]=R16(c->r[10]+0x00000052u); // 8024D708
  W16(c->r[10]+0x00000050u,c->r[29]); // 8024D70C
  c->r[29]=R16(c->r[10]+0x00000056u); // 8024D710
  W16(c->r[10]+0x00000054u,c->r[29]); // 8024D714
  c->r[29]=R16(c->r[10]+0x0000005Au); // 8024D718
  W16(c->r[10]+0x00000058u,c->r[29]); // 8024D71C
  c->r[29]=R16(c->r[10]+0x0000005Eu); // 8024D720
  W16(c->r[10]+0x0000005Cu,c->r[29]); // 8024D724
  c->r[29]=R16(c->r[10]+0x00000062u); // 8024D728
  W16(c->r[10]+0x00000060u,c->r[29]); // 8024D72C
  c->r[29]=R32(c->r[10]+0x00000004u); // 8024D730
  c->r[29]=rotl(c->r[29],0)&0x7FFFFFFFu; // 8024D734
  W32(c->r[10]+0x00000004u,c->r[29]); // 8024D738
L_8024D73C:;
  c->r[29]=R32(c->r[10]+0x00000004u); // 8024D73C
  c->r[29]=rotl(c->r[29],0)&0x40000000u; cr0(c,c->r[29]); // 8024D740
  if (crb(c,2)) { goto L_8024DD40; } // 8024D744
  c->r[8]=R32(c->r[6]+0x00000070u); // 8024D748
  cmps(c,0,(int32_t)c->r[8],1); // 8024D74C
  if (crb(c,2)) { goto L_8024D914; } // 8024D750
  if (!crb(c,0)) { goto L_8024D764; } // 8024D754
  cmps(c,0,(int32_t)c->r[8],0); // 8024D758
  if (!crb(c,0)) { goto L_8024D770; } // 8024D75C
  goto L_8024DD2C; // 8024D760
L_8024D764:;
  cmps(c,0,(int32_t)c->r[8],3); // 8024D764
  if (!crb(c,0)) { goto L_8024DD2C; } // 8024D768
  goto L_8024DAD8; // 8024D76C
L_8024D770:;
  c->r[29]=R32(c->r[10]+0x00000014u); // 8024D770
  c->r[8]=R32(c->r[10]+0x00000020u); // 8024D774
  c->r[8]=c->r[29]+c->r[8]; // 8024D778
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D77C
  if (crb(c,1)) { goto L_8024D78C; } // 8024D780
  c->r[8]=0u+0x00000000u; // 8024D784
  goto L_8024D7A8; // 8024D788
L_8024D78C:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024D78C
  if (crb(c,0)) { goto L_8024D79C; } // 8024D790
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024D794
  goto L_8024D7A8; // 8024D798
L_8024D79C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024D79C
  c->r[8]=c->r[4]+c->r[8]; // 8024D7A0
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024D7A4
L_8024D7A8:;
  W16(c->r[10]+0x00000036u,c->r[8]); // 8024D7A8
  c->r[29]=R32(c->r[10]+0x00000014u); // 8024D7AC
  c->r[8]=R32(c->r[10]+0x00000020u); // 8024D7B0
  c->r[8]=c->r[29]+c->r[8]; // 8024D7B4
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D7B8
  if (crb(c,1)) { goto L_8024D7C8; } // 8024D7BC
  c->r[8]=0u+0x00000000u; // 8024D7C0
  goto L_8024D7E4; // 8024D7C4
L_8024D7C8:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024D7C8
  if (crb(c,0)) { goto L_8024D7D8; } // 8024D7CC
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024D7D0
  goto L_8024D7E4; // 8024D7D4
L_8024D7D8:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024D7D8
  c->r[8]=c->r[4]+c->r[8]; // 8024D7DC
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024D7E0
L_8024D7E4:;
  W16(c->r[10]+0x0000003Au,c->r[8]); // 8024D7E4
  c->r[29]=R32(c->r[10]+0x00000014u); // 8024D7E8
  c->r[8]=R32(c->r[10]+0x00000024u); // 8024D7EC
  c->r[8]=c->r[29]+c->r[8]; // 8024D7F0
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 8024D7F4
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D7F8
  if (crb(c,1)) { goto L_8024D808; } // 8024D7FC
  c->r[8]=0u+0x00000000u; // 8024D800
  goto L_8024D824; // 8024D804
L_8024D808:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024D808
  if (crb(c,0)) { goto L_8024D818; } // 8024D80C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024D810
  goto L_8024D824; // 8024D814
L_8024D818:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024D818
  c->r[8]=c->r[4]+c->r[8]; // 8024D81C
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024D820
L_8024D824:;
  W16(c->r[10]+0x0000003Eu,c->r[8]); // 8024D824
  c->r[30]=R32(c->r[10]+0x00000020u); // 8024D828
  c->r[8]=R32(c->r[10]+0x00000014u); // 8024D82C
  c->r[29]=R32(c->r[10]+0x0000000Cu); // 8024D830
  c->r[8]=c->r[30]+c->r[8]; // 8024D834
  c->r[8]=c->r[29]+c->r[8]; // 8024D838
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D83C
  if (crb(c,1)) { goto L_8024D84C; } // 8024D840
  c->r[8]=0u+0x00000000u; // 8024D844
  goto L_8024D868; // 8024D848
L_8024D84C:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024D84C
  if (crb(c,0)) { goto L_8024D85C; } // 8024D850
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024D854
  goto L_8024D868; // 8024D858
L_8024D85C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024D85C
  c->r[8]=c->r[4]+c->r[8]; // 8024D860
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024D864
L_8024D868:;
  W16(c->r[10]+0x00000042u,c->r[8]); // 8024D868
  c->r[30]=R32(c->r[10]+0x00000020u); // 8024D86C
  c->r[8]=R32(c->r[10]+0x00000014u); // 8024D870
  c->r[29]=R32(c->r[10]+0x0000000Cu); // 8024D874
  c->r[8]=c->r[30]+c->r[8]; // 8024D878
  c->r[8]=c->r[29]+c->r[8]; // 8024D87C
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D880
  if (crb(c,1)) { goto L_8024D890; } // 8024D884
  c->r[8]=0u+0x00000000u; // 8024D888
  goto L_8024D8AC; // 8024D88C
L_8024D890:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024D890
  if (crb(c,0)) { goto L_8024D8A0; } // 8024D894
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024D898
  goto L_8024D8AC; // 8024D89C
L_8024D8A0:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024D8A0
  c->r[8]=c->r[4]+c->r[8]; // 8024D8A4
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024D8A8
L_8024D8AC:;
  W16(c->r[10]+0x00000046u,c->r[8]); // 8024D8AC
  c->r[30]=R32(c->r[10]+0x00000014u); // 8024D8B0
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8024D8B4
  c->r[29]=R32(c->r[10]+0x00000024u); // 8024D8B8
  c->r[8]=c->r[30]+c->r[8]; // 8024D8BC
  c->r[8]=c->r[8]+c->r[29]; // 8024D8C0
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 8024D8C4
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D8C8
  if (crb(c,1)) { goto L_8024D8D8; } // 8024D8CC
  c->r[8]=0u+0x00000000u; // 8024D8D0
  goto L_8024D8F4; // 8024D8D4
L_8024D8D8:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024D8D8
  if (crb(c,0)) { goto L_8024D8E8; } // 8024D8DC
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024D8E0
  goto L_8024D8F4; // 8024D8E4
L_8024D8E8:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024D8E8
  c->r[8]=c->r[4]+c->r[8]; // 8024D8EC
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024D8F0
L_8024D8F4:;
  W16(c->r[10]+0x0000004Au,c->r[8]); // 8024D8F4
  W16(c->r[10]+0x0000004Eu,c->r[0]); // 8024D8F8
  W16(c->r[10]+0x00000052u,c->r[0]); // 8024D8FC
  W16(c->r[10]+0x00000056u,c->r[0]); // 8024D900
  W16(c->r[10]+0x0000005Au,c->r[0]); // 8024D904
  W16(c->r[10]+0x0000005Eu,c->r[0]); // 8024D908
  W16(c->r[10]+0x00000062u,c->r[0]); // 8024D90C
  goto L_8024DD2C; // 8024D910
L_8024D914:;
  c->r[30]=R32(c->r[10]+0x00000020u); // 8024D914
  c->r[8]=R32(c->r[10]+0x00000014u); // 8024D918
  c->r[29]=R32(c->r[10]+0x00000018u); // 8024D91C
  c->r[8]=c->r[30]+c->r[8]; // 8024D920
  c->r[8]=c->r[29]+c->r[8]; // 8024D924
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D928
  if (crb(c,1)) { goto L_8024D938; } // 8024D92C
  c->r[8]=0u+0x00000000u; // 8024D930
  goto L_8024D954; // 8024D934
L_8024D938:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024D938
  if (crb(c,0)) { goto L_8024D948; } // 8024D93C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024D940
  goto L_8024D954; // 8024D944
L_8024D948:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024D948
  c->r[8]=c->r[4]+c->r[8]; // 8024D94C
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024D950
L_8024D954:;
  W16(c->r[10]+0x00000036u,c->r[8]); // 8024D954
  c->r[30]=R32(c->r[10]+0x00000020u); // 8024D958
  c->r[8]=R32(c->r[10]+0x00000014u); // 8024D95C
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 8024D960
  c->r[8]=c->r[30]+c->r[8]; // 8024D964
  c->r[8]=c->r[29]+c->r[8]; // 8024D968
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D96C
  if (crb(c,1)) { goto L_8024D97C; } // 8024D970
  c->r[8]=0u+0x00000000u; // 8024D974
  goto L_8024D998; // 8024D978
L_8024D97C:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024D97C
  if (crb(c,0)) { goto L_8024D98C; } // 8024D980
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024D984
  goto L_8024D998; // 8024D988
L_8024D98C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024D98C
  c->r[8]=c->r[4]+c->r[8]; // 8024D990
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024D994
L_8024D998:;
  W16(c->r[10]+0x0000003Au,c->r[8]); // 8024D998
  c->r[29]=R32(c->r[10]+0x00000014u); // 8024D99C
  c->r[8]=R32(c->r[10]+0x00000024u); // 8024D9A0
  c->r[8]=c->r[29]+c->r[8]; // 8024D9A4
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 8024D9A8
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D9AC
  if (crb(c,1)) { goto L_8024D9BC; } // 8024D9B0
  c->r[8]=0u+0x00000000u; // 8024D9B4
  goto L_8024D9D8; // 8024D9B8
L_8024D9BC:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024D9BC
  if (crb(c,0)) { goto L_8024D9CC; } // 8024D9C0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024D9C4
  goto L_8024D9D8; // 8024D9C8
L_8024D9CC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024D9CC
  c->r[8]=c->r[4]+c->r[8]; // 8024D9D0
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024D9D4
L_8024D9D8:;
  W16(c->r[10]+0x0000003Eu,c->r[8]); // 8024D9D8
  c->r[31]=R32(c->r[10]+0x00000020u); // 8024D9DC
  c->r[29]=R32(c->r[10]+0x00000018u); // 8024D9E0
  c->r[30]=R32(c->r[10]+0x00000014u); // 8024D9E4
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8024D9E8
  c->r[29]=c->r[31]+c->r[29]; // 8024D9EC
  c->r[8]=c->r[30]+c->r[8]; // 8024D9F0
  c->r[8]=c->r[29]+c->r[8]; // 8024D9F4
  cmps(c,0,(int32_t)c->r[8],-904); // 8024D9F8
  if (crb(c,1)) { goto L_8024DA08; } // 8024D9FC
  c->r[8]=0u+0x00000000u; // 8024DA00
  goto L_8024DA24; // 8024DA04
L_8024DA08:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DA08
  if (crb(c,0)) { goto L_8024DA18; } // 8024DA0C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DA10
  goto L_8024DA24; // 8024DA14
L_8024DA18:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DA18
  c->r[8]=c->r[4]+c->r[8]; // 8024DA1C
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DA20
L_8024DA24:;
  W16(c->r[10]+0x00000042u,c->r[8]); // 8024DA24
  c->r[31]=R32(c->r[10]+0x00000020u); // 8024DA28
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 8024DA2C
  c->r[30]=R32(c->r[10]+0x00000014u); // 8024DA30
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8024DA34
  c->r[29]=c->r[31]+c->r[29]; // 8024DA38
  c->r[8]=c->r[30]+c->r[8]; // 8024DA3C
  c->r[8]=c->r[29]+c->r[8]; // 8024DA40
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DA44
  if (crb(c,1)) { goto L_8024DA54; } // 8024DA48
  c->r[8]=0u+0x00000000u; // 8024DA4C
  goto L_8024DA70; // 8024DA50
L_8024DA54:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DA54
  if (crb(c,0)) { goto L_8024DA64; } // 8024DA58
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DA5C
  goto L_8024DA70; // 8024DA60
L_8024DA64:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DA64
  c->r[8]=c->r[4]+c->r[8]; // 8024DA68
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DA6C
L_8024DA70:;
  W16(c->r[10]+0x00000046u,c->r[8]); // 8024DA70
  c->r[30]=R32(c->r[10]+0x00000014u); // 8024DA74
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8024DA78
  c->r[29]=R32(c->r[10]+0x00000024u); // 8024DA7C
  c->r[8]=c->r[30]+c->r[8]; // 8024DA80
  c->r[8]=c->r[8]+c->r[29]; // 8024DA84
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 8024DA88
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DA8C
  if (crb(c,1)) { goto L_8024DA9C; } // 8024DA90
  c->r[8]=0u+0x00000000u; // 8024DA94
  goto L_8024DAB8; // 8024DA98
L_8024DA9C:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DA9C
  if (crb(c,0)) { goto L_8024DAAC; } // 8024DAA0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DAA4
  goto L_8024DAB8; // 8024DAA8
L_8024DAAC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DAAC
  c->r[8]=c->r[4]+c->r[8]; // 8024DAB0
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DAB4
L_8024DAB8:;
  W16(c->r[10]+0x0000004Au,c->r[8]); // 8024DAB8
  W16(c->r[10]+0x0000004Eu,c->r[0]); // 8024DABC
  W16(c->r[10]+0x00000052u,c->r[0]); // 8024DAC0
  W16(c->r[10]+0x00000056u,c->r[0]); // 8024DAC4
  W16(c->r[10]+0x0000005Au,c->r[0]); // 8024DAC8
  W16(c->r[10]+0x0000005Eu,c->r[0]); // 8024DACC
  W16(c->r[10]+0x00000062u,c->r[0]); // 8024DAD0
  goto L_8024DD2C; // 8024DAD4
L_8024DAD8:;
  c->r[30]=R32(c->r[10]+0x00000020u); // 8024DAD8
  c->r[8]=R32(c->r[10]+0x00000014u); // 8024DADC
  c->r[29]=R32(c->r[10]+0x00000018u); // 8024DAE0
  c->r[8]=c->r[30]+c->r[8]; // 8024DAE4
  c->r[8]=c->r[29]+c->r[8]; // 8024DAE8
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DAEC
  if (crb(c,1)) { goto L_8024DAFC; } // 8024DAF0
  c->r[8]=0u+0x00000000u; // 8024DAF4
  goto L_8024DB18; // 8024DAF8
L_8024DAFC:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DAFC
  if (crb(c,0)) { goto L_8024DB0C; } // 8024DB00
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DB04
  goto L_8024DB18; // 8024DB08
L_8024DB0C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DB0C
  c->r[8]=c->r[4]+c->r[8]; // 8024DB10
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DB14
L_8024DB18:;
  W16(c->r[10]+0x00000036u,c->r[8]); // 8024DB18
  c->r[30]=R32(c->r[10]+0x00000020u); // 8024DB1C
  c->r[8]=R32(c->r[10]+0x00000014u); // 8024DB20
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 8024DB24
  c->r[8]=c->r[30]+c->r[8]; // 8024DB28
  c->r[8]=c->r[29]+c->r[8]; // 8024DB2C
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DB30
  if (crb(c,1)) { goto L_8024DB40; } // 8024DB34
  c->r[8]=0u+0x00000000u; // 8024DB38
  goto L_8024DB5C; // 8024DB3C
L_8024DB40:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DB40
  if (crb(c,0)) { goto L_8024DB50; } // 8024DB44
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DB48
  goto L_8024DB5C; // 8024DB4C
L_8024DB50:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DB50
  c->r[8]=c->r[4]+c->r[8]; // 8024DB54
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DB58
L_8024DB5C:;
  W16(c->r[10]+0x0000003Au,c->r[8]); // 8024DB5C
  c->r[30]=R32(c->r[10]+0x00000024u); // 8024DB60
  c->r[8]=R32(c->r[10]+0x00000014u); // 8024DB64
  c->r[29]=R32(c->r[10]+0x00000028u); // 8024DB68
  c->r[8]=c->r[30]+c->r[8]; // 8024DB6C
  c->r[8]=c->r[29]+c->r[8]; // 8024DB70
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DB74
  if (crb(c,1)) { goto L_8024DB84; } // 8024DB78
  c->r[8]=0u+0x00000000u; // 8024DB7C
  goto L_8024DBA0; // 8024DB80
L_8024DB84:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DB84
  if (crb(c,0)) { goto L_8024DB94; } // 8024DB88
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DB8C
  goto L_8024DBA0; // 8024DB90
L_8024DB94:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DB94
  c->r[8]=c->r[4]+c->r[8]; // 8024DB98
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DB9C
L_8024DBA0:;
  W16(c->r[10]+0x0000003Eu,c->r[8]); // 8024DBA0
  c->r[30]=R32(c->r[10]+0x00000024u); // 8024DBA4
  c->r[8]=R32(c->r[10]+0x00000014u); // 8024DBA8
  c->r[29]=R32(c->r[10]+0x0000002Cu); // 8024DBAC
  c->r[8]=c->r[30]+c->r[8]; // 8024DBB0
  c->r[8]=c->r[29]+c->r[8]; // 8024DBB4
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DBB8
  if (crb(c,1)) { goto L_8024DBC8; } // 8024DBBC
  c->r[8]=0u+0x00000000u; // 8024DBC0
  goto L_8024DBE4; // 8024DBC4
L_8024DBC8:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DBC8
  if (crb(c,0)) { goto L_8024DBD8; } // 8024DBCC
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DBD0
  goto L_8024DBE4; // 8024DBD4
L_8024DBD8:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DBD8
  c->r[8]=c->r[4]+c->r[8]; // 8024DBDC
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DBE0
L_8024DBE4:;
  W16(c->r[10]+0x0000005Au,c->r[8]); // 8024DBE4
  c->r[31]=R32(c->r[10]+0x00000020u); // 8024DBE8
  c->r[29]=R32(c->r[10]+0x00000018u); // 8024DBEC
  c->r[30]=R32(c->r[10]+0x00000014u); // 8024DBF0
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8024DBF4
  c->r[29]=c->r[31]+c->r[29]; // 8024DBF8
  c->r[8]=c->r[30]+c->r[8]; // 8024DBFC
  c->r[8]=c->r[29]+c->r[8]; // 8024DC00
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DC04
  if (crb(c,1)) { goto L_8024DC14; } // 8024DC08
  c->r[8]=0u+0x00000000u; // 8024DC0C
  goto L_8024DC30; // 8024DC10
L_8024DC14:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DC14
  if (crb(c,0)) { goto L_8024DC24; } // 8024DC18
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DC1C
  goto L_8024DC30; // 8024DC20
L_8024DC24:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DC24
  c->r[8]=c->r[4]+c->r[8]; // 8024DC28
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DC2C
L_8024DC30:;
  W16(c->r[10]+0x00000042u,c->r[8]); // 8024DC30
  c->r[31]=R32(c->r[10]+0x00000020u); // 8024DC34
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 8024DC38
  c->r[30]=R32(c->r[10]+0x00000014u); // 8024DC3C
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8024DC40
  c->r[29]=c->r[31]+c->r[29]; // 8024DC44
  c->r[8]=c->r[30]+c->r[8]; // 8024DC48
  c->r[8]=c->r[29]+c->r[8]; // 8024DC4C
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DC50
  if (crb(c,1)) { goto L_8024DC60; } // 8024DC54
  c->r[8]=0u+0x00000000u; // 8024DC58
  goto L_8024DC7C; // 8024DC5C
L_8024DC60:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DC60
  if (crb(c,0)) { goto L_8024DC70; } // 8024DC64
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DC68
  goto L_8024DC7C; // 8024DC6C
L_8024DC70:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DC70
  c->r[8]=c->r[4]+c->r[8]; // 8024DC74
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DC78
L_8024DC7C:;
  W16(c->r[10]+0x00000046u,c->r[8]); // 8024DC7C
  c->r[31]=R32(c->r[10]+0x00000024u); // 8024DC80
  c->r[29]=R32(c->r[10]+0x00000028u); // 8024DC84
  c->r[30]=R32(c->r[10]+0x00000014u); // 8024DC88
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8024DC8C
  c->r[29]=c->r[31]+c->r[29]; // 8024DC90
  c->r[8]=c->r[30]+c->r[8]; // 8024DC94
  c->r[8]=c->r[29]+c->r[8]; // 8024DC98
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DC9C
  if (crb(c,1)) { goto L_8024DCAC; } // 8024DCA0
  c->r[8]=0u+0x00000000u; // 8024DCA4
  goto L_8024DCC8; // 8024DCA8
L_8024DCAC:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DCAC
  if (crb(c,0)) { goto L_8024DCBC; } // 8024DCB0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DCB4
  goto L_8024DCC8; // 8024DCB8
L_8024DCBC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DCBC
  c->r[8]=c->r[4]+c->r[8]; // 8024DCC0
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DCC4
L_8024DCC8:;
  W16(c->r[10]+0x0000004Au,c->r[8]); // 8024DCC8
  c->r[29]=R32(c->r[10]+0x00000024u); // 8024DCCC
  c->r[30]=R32(c->r[10]+0x0000002Cu); // 8024DCD0
  c->r[31]=R32(c->r[10]+0x00000014u); // 8024DCD4
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8024DCD8
  c->r[30]=c->r[29]+c->r[30]; // 8024DCDC
  c->r[8]=c->r[31]+c->r[8]; // 8024DCE0
  c->r[8]=c->r[30]+c->r[8]; // 8024DCE4
  cmps(c,0,(int32_t)c->r[8],-904); // 8024DCE8
  if (crb(c,1)) { goto L_8024DCF8; } // 8024DCEC
  c->r[8]=0u+0x00000000u; // 8024DCF0
  goto L_8024DD14; // 8024DCF4
L_8024DCF8:;
  cmps(c,0,(int32_t)c->r[8],60); // 8024DCF8
  if (crb(c,0)) { goto L_8024DD08; } // 8024DCFC
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8024DD00
  goto L_8024DD14; // 8024DD04
L_8024DD08:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8024DD08
  c->r[8]=c->r[4]+c->r[8]; // 8024DD0C
  c->r[8]=R16(c->r[8]+0x00000710u); // 8024DD10
L_8024DD14:;
  W16(c->r[10]+0x0000005Eu,c->r[8]); // 8024DD14
  c->r[12]=c->r[12]|0x80000000u; // 8024DD18
  W16(c->r[10]+0x0000004Eu,c->r[0]); // 8024DD1C
  W16(c->r[10]+0x00000052u,c->r[0]); // 8024DD20
  W16(c->r[10]+0x00000056u,c->r[0]); // 8024DD24
  W16(c->r[10]+0x00000062u,c->r[0]); // 8024DD28
L_8024DD2C:;
  c->r[30]=R32(c->r[10]+0x00000004u); // 8024DD2C
  c->r[8]=0u+0x00000001u; // 8024DD30
  c->r[30]=rotl(c->r[30],0)&0xBFFFFFFFu; // 8024DD34
  c->r[30]=c->r[30]|0x80000000u; // 8024DD38
  W32(c->r[10]+0x00000004u,c->r[30]); // 8024DD3C
L_8024DD40:;
  cmps(c,0,(int32_t)c->r[9],0); // 8024DD40
  if (crb(c,2)) { goto L_8024DD80; } // 8024DD44
  c->r[9]=R16(c->r[10]+0x00000030u); // 8024DD48
  c->r[30]=c->r[3]+0xFFFFAAABu; // 8024DD4C
  W16(c->r[11]+0x00000092u,c->r[9]); // 8024DD50
  c->r[31]=R16(c->r[10]+0x00000030u); // 8024DD54
  c->r[9]=R16(c->r[10]+0x00000032u); // 8024DD58
  c->r[9]=c->r[9]-c->r[31]; // 8024DD5C
  c->r[9]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[9])>>32); // 8024DD60
  c->r[9]=sraw(c,c->r[9],4); // 8024DD64
  c->r[31]=rotl(c->r[9],1)&0x00000001u; // 8024DD68
  c->r[9]=c->r[9]+c->r[31]; // 8024DD6C
  W16(c->r[11]+0x00000094u,c->r[9]); // 8024DD70
  c->r[9]=R32(c->r[11]+0x0000001Cu); // 8024DD74
  c->r[9]=c->r[9]|0x00000100u; // 8024DD78
  W32(c->r[11]+0x0000001Cu,c->r[9]); // 8024DD7C
L_8024DD80:;
  cmps(c,0,(int32_t)c->r[8],0); // 8024DD80
  if (crb(c,2)) { goto L_8024E0C8; } // 8024DD84
  c->r[8]=R16(c->r[10]+0x00000034u); // 8024DD88
  cmps(c,0,(int32_t)c->r[8],0); // 8024DD8C
  W16(c->r[11]+0x0000003Cu,c->r[8]); // 8024DD90
  if (crb(c,2)) { goto L_8024DD9C; } // 8024DD94
  c->r[12]=c->r[12]|0x00000001u; // 8024DD98
L_8024DD9C:;
  c->r[9]=R16(c->r[10]+0x00000034u); // 8024DD9C
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024DDA0
  c->r[8]=R16(c->r[10]+0x00000036u); // 8024DDA4
  c->r[8]=c->r[8]-c->r[9]; // 8024DDA8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024DDAC
  c->r[8]=sraw(c,c->r[8],4); // 8024DDB0
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024DDB4
  c->r[9]=c->r[8]+c->r[9]; // 8024DDB8
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024DDBC
  W16(c->r[11]+0x0000003Eu,c->r[9]); // 8024DDC0
  if (crb(c,2)) { goto L_8024DDCC; } // 8024DDC4
  c->r[12]=c->r[12]|0x00000004u; // 8024DDC8
L_8024DDCC:;
  c->r[8]=R16(c->r[10]+0x00000038u); // 8024DDCC
  cmps(c,0,(int32_t)c->r[8],0); // 8024DDD0
  W16(c->r[11]+0x00000040u,c->r[8]); // 8024DDD4
  if (crb(c,2)) { goto L_8024DDE0; } // 8024DDD8
  c->r[12]=c->r[12]|0x00000002u; // 8024DDDC
L_8024DDE0:;
  c->r[9]=R16(c->r[10]+0x00000038u); // 8024DDE0
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024DDE4
  c->r[8]=R16(c->r[10]+0x0000003Au); // 8024DDE8
  c->r[8]=c->r[8]-c->r[9]; // 8024DDEC
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024DDF0
  c->r[8]=sraw(c,c->r[8],4); // 8024DDF4
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024DDF8
  c->r[9]=c->r[8]+c->r[9]; // 8024DDFC
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024DE00
  W16(c->r[11]+0x00000042u,c->r[9]); // 8024DE04
  if (crb(c,2)) { goto L_8024DE10; } // 8024DE08
  c->r[12]=c->r[12]|0x00000004u; // 8024DE0C
L_8024DE10:;
  c->r[8]=R16(c->r[10]+0x00000040u); // 8024DE10
  cmps(c,0,(int32_t)c->r[8],0); // 8024DE14
  W16(c->r[11]+0x00000044u,c->r[8]); // 8024DE18
  if (crb(c,2)) { goto L_8024DE24; } // 8024DE1C
  c->r[12]=c->r[12]|0x00010000u; // 8024DE20
L_8024DE24:;
  c->r[9]=R16(c->r[10]+0x00000040u); // 8024DE24
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024DE28
  c->r[8]=R16(c->r[10]+0x00000042u); // 8024DE2C
  c->r[8]=c->r[8]-c->r[9]; // 8024DE30
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024DE34
  c->r[8]=sraw(c,c->r[8],4); // 8024DE38
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024DE3C
  c->r[9]=c->r[8]+c->r[9]; // 8024DE40
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024DE44
  W16(c->r[11]+0x00000046u,c->r[9]); // 8024DE48
  if (crb(c,2)) { goto L_8024DE54; } // 8024DE4C
  c->r[12]=c->r[12]|0x00040000u; // 8024DE50
L_8024DE54:;
  c->r[8]=R16(c->r[10]+0x00000044u); // 8024DE54
  cmps(c,0,(int32_t)c->r[8],0); // 8024DE58
  W16(c->r[11]+0x00000048u,c->r[8]); // 8024DE5C
  if (crb(c,2)) { goto L_8024DE68; } // 8024DE60
  c->r[12]=c->r[12]|0x00020000u; // 8024DE64
L_8024DE68:;
  c->r[9]=R16(c->r[10]+0x00000044u); // 8024DE68
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024DE6C
  c->r[8]=R16(c->r[10]+0x00000046u); // 8024DE70
  c->r[8]=c->r[8]-c->r[9]; // 8024DE74
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024DE78
  c->r[8]=sraw(c,c->r[8],4); // 8024DE7C
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024DE80
  c->r[9]=c->r[8]+c->r[9]; // 8024DE84
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024DE88
  W16(c->r[11]+0x0000004Au,c->r[9]); // 8024DE8C
  if (crb(c,2)) { goto L_8024DE98; } // 8024DE90
  c->r[12]=c->r[12]|0x00040000u; // 8024DE94
L_8024DE98:;
  c->r[8]=R16(c->r[10]+0x0000004Cu); // 8024DE98
  cmps(c,0,(int32_t)c->r[8],0); // 8024DE9C
  W16(c->r[11]+0x0000004Cu,c->r[8]); // 8024DEA0
  if (crb(c,2)) { goto L_8024DEAC; } // 8024DEA4
  c->r[12]=c->r[12]|0x00200000u; // 8024DEA8
L_8024DEAC:;
  c->r[9]=R16(c->r[10]+0x0000004Cu); // 8024DEAC
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024DEB0
  c->r[8]=R16(c->r[10]+0x0000004Eu); // 8024DEB4
  c->r[8]=c->r[8]-c->r[9]; // 8024DEB8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024DEBC
  c->r[8]=sraw(c,c->r[8],4); // 8024DEC0
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024DEC4
  c->r[9]=c->r[8]+c->r[9]; // 8024DEC8
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024DECC
  W16(c->r[11]+0x0000004Eu,c->r[9]); // 8024DED0
  if (crb(c,2)) { goto L_8024DEDC; } // 8024DED4
  c->r[12]=c->r[12]|0x00800000u; // 8024DED8
L_8024DEDC:;
  c->r[8]=R16(c->r[10]+0x00000050u); // 8024DEDC
  cmps(c,0,(int32_t)c->r[8],0); // 8024DEE0
  W16(c->r[11]+0x00000050u,c->r[8]); // 8024DEE4
  if (crb(c,2)) { goto L_8024DEF0; } // 8024DEE8
  c->r[12]=c->r[12]|0x00400000u; // 8024DEEC
L_8024DEF0:;
  c->r[9]=R16(c->r[10]+0x00000050u); // 8024DEF0
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024DEF4
  c->r[8]=R16(c->r[10]+0x00000052u); // 8024DEF8
  c->r[8]=c->r[8]-c->r[9]; // 8024DEFC
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024DF00
  c->r[8]=sraw(c,c->r[8],4); // 8024DF04
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024DF08
  c->r[9]=c->r[8]+c->r[9]; // 8024DF0C
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024DF10
  W16(c->r[11]+0x00000052u,c->r[9]); // 8024DF14
  if (crb(c,2)) { goto L_8024DF20; } // 8024DF18
  c->r[12]=c->r[12]|0x00800000u; // 8024DF1C
L_8024DF20:;
  c->r[8]=R16(c->r[10]+0x00000058u); // 8024DF20
  cmps(c,0,(int32_t)c->r[8],0); // 8024DF24
  W16(c->r[11]+0x00000054u,c->r[8]); // 8024DF28
  if (crb(c,2)) { goto L_8024DF34; } // 8024DF2C
  c->r[12]=c->r[12]|0x04000000u; // 8024DF30
L_8024DF34:;
  c->r[9]=R16(c->r[10]+0x00000058u); // 8024DF34
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024DF38
  c->r[8]=R16(c->r[10]+0x0000005Au); // 8024DF3C
  c->r[8]=c->r[8]-c->r[9]; // 8024DF40
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024DF44
  c->r[8]=sraw(c,c->r[8],4); // 8024DF48
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024DF4C
  c->r[9]=c->r[8]+c->r[9]; // 8024DF50
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024DF54
  W16(c->r[11]+0x00000056u,c->r[9]); // 8024DF58
  if (crb(c,2)) { goto L_8024DF64; } // 8024DF5C
  c->r[12]=c->r[12]|0x10000000u; // 8024DF60
L_8024DF64:;
  c->r[8]=R16(c->r[10]+0x0000005Cu); // 8024DF64
  cmps(c,0,(int32_t)c->r[8],0); // 8024DF68
  W16(c->r[11]+0x00000058u,c->r[8]); // 8024DF6C
  if (crb(c,2)) { goto L_8024DF78; } // 8024DF70
  c->r[12]=c->r[12]|0x08000000u; // 8024DF74
L_8024DF78:;
  c->r[9]=R16(c->r[10]+0x0000005Cu); // 8024DF78
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024DF7C
  c->r[8]=R16(c->r[10]+0x0000005Eu); // 8024DF80
  c->r[8]=c->r[8]-c->r[9]; // 8024DF84
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024DF88
  c->r[8]=sraw(c,c->r[8],4); // 8024DF8C
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024DF90
  c->r[9]=c->r[8]+c->r[9]; // 8024DF94
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024DF98
  W16(c->r[11]+0x0000005Au,c->r[9]); // 8024DF9C
  if (crb(c,2)) { goto L_8024DFA8; } // 8024DFA0
  c->r[12]=c->r[12]|0x10000000u; // 8024DFA4
L_8024DFA8:;
  c->r[8]=R16(c->r[10]+0x0000003Cu); // 8024DFA8
  cmps(c,0,(int32_t)c->r[8],0); // 8024DFAC
  W16(c->r[11]+0x0000005Cu,c->r[8]); // 8024DFB0
  if (crb(c,2)) { goto L_8024DFBC; } // 8024DFB4
  c->r[12]=c->r[12]|0x00000008u; // 8024DFB8
L_8024DFBC:;
  c->r[9]=R16(c->r[10]+0x0000003Cu); // 8024DFBC
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024DFC0
  c->r[8]=R16(c->r[10]+0x0000003Eu); // 8024DFC4
  c->r[8]=c->r[8]-c->r[9]; // 8024DFC8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024DFCC
  c->r[8]=sraw(c,c->r[8],4); // 8024DFD0
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024DFD4
  c->r[9]=c->r[8]+c->r[9]; // 8024DFD8
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024DFDC
  W16(c->r[11]+0x0000005Eu,c->r[9]); // 8024DFE0
  if (crb(c,2)) { goto L_8024DFEC; } // 8024DFE4
  c->r[12]=c->r[12]|0x00000010u; // 8024DFE8
L_8024DFEC:;
  c->r[8]=R16(c->r[10]+0x00000048u); // 8024DFEC
  cmps(c,0,(int32_t)c->r[8],0); // 8024DFF0
  W16(c->r[11]+0x00000060u,c->r[8]); // 8024DFF4
  if (crb(c,2)) { goto L_8024E000; } // 8024DFF8
  c->r[12]=c->r[12]|0x00080000u; // 8024DFFC
L_8024E000:;
  c->r[9]=R16(c->r[10]+0x00000048u); // 8024E000
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024E004
  c->r[8]=R16(c->r[10]+0x0000004Au); // 8024E008
  c->r[8]=c->r[8]-c->r[9]; // 8024E00C
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024E010
  c->r[8]=sraw(c,c->r[8],4); // 8024E014
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024E018
  c->r[9]=c->r[8]+c->r[9]; // 8024E01C
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024E020
  W16(c->r[11]+0x00000062u,c->r[9]); // 8024E024
  if (crb(c,2)) { goto L_8024E030; } // 8024E028
  c->r[12]=c->r[12]|0x00100000u; // 8024E02C
L_8024E030:;
  c->r[8]=R16(c->r[10]+0x00000054u); // 8024E030
  cmps(c,0,(int32_t)c->r[8],0); // 8024E034
  W16(c->r[11]+0x00000064u,c->r[8]); // 8024E038
  if (crb(c,2)) { goto L_8024E044; } // 8024E03C
  c->r[12]=c->r[12]|0x01000000u; // 8024E040
L_8024E044:;
  c->r[9]=R16(c->r[10]+0x00000054u); // 8024E044
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024E048
  c->r[8]=R16(c->r[10]+0x00000056u); // 8024E04C
  c->r[8]=c->r[8]-c->r[9]; // 8024E050
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024E054
  c->r[8]=sraw(c,c->r[8],4); // 8024E058
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024E05C
  c->r[9]=c->r[8]+c->r[9]; // 8024E060
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024E064
  W16(c->r[11]+0x00000066u,c->r[9]); // 8024E068
  if (crb(c,2)) { goto L_8024E074; } // 8024E06C
  c->r[12]=c->r[12]|0x02000000u; // 8024E070
L_8024E074:;
  c->r[8]=R16(c->r[10]+0x00000060u); // 8024E074
  cmps(c,0,(int32_t)c->r[8],0); // 8024E078
  W16(c->r[11]+0x00000068u,c->r[8]); // 8024E07C
  if (crb(c,2)) { goto L_8024E088; } // 8024E080
  c->r[12]=c->r[12]|0x20000000u; // 8024E084
L_8024E088:;
  c->r[9]=R16(c->r[10]+0x00000060u); // 8024E088
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8024E08C
  c->r[8]=R16(c->r[10]+0x00000062u); // 8024E090
  c->r[8]=c->r[8]-c->r[9]; // 8024E094
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8024E098
  c->r[8]=sraw(c,c->r[8],4); // 8024E09C
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8024E0A0
  c->r[9]=c->r[8]+c->r[9]; // 8024E0A4
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8024E0A8
  W16(c->r[11]+0x0000006Au,c->r[9]); // 8024E0AC
  if (crb(c,2)) { goto L_8024E0B8; } // 8024E0B0
  c->r[12]=c->r[12]|0x40000000u; // 8024E0B4
L_8024E0B8:;
  W32(c->r[11]+0x00000034u,c->r[12]); // 8024E0B8
  c->r[8]=R32(c->r[11]+0x0000001Cu); // 8024E0BC
  c->r[8]=c->r[8]|0x00000012u; // 8024E0C0
  W32(c->r[11]+0x0000001Cu,c->r[8]); // 8024E0C4
L_8024E0C8:;
  c->r[7]=c->r[7]+0x00000064u; // 8024E0C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024D62C; } // 8024E0CC
L_8024E0D0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024E0D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024E0D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024E0D8
  c->r[1]=c->r[1]+0x00000020u; // 8024E0DC
  return; // 8024E0E0
}

// HBMAllocIndex
void f_8024E0E4(Ctx* __restrict c) {
  trace_call(0x8024E0E4u);
  c->r[4]=0u+0x80360000u; // 8024E0E4
  c->r[0]=0u+0x00000010u; // 8024E0E8
  c->r[4]=c->r[4]+0xFFFFCE98u; // 8024E0EC
  c->r[6]=0u+0x00000000u; // 8024E0F0
  c->ctr=c->r[0]; // 8024E0F4
L_8024E0F8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8024E0F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8024E0FC
  if (!crb(c,0)) { goto L_8024E124; } // 8024E100
  c->r[5]=0u+0x80360000u; // 8024E104
  c->r[4]=0u+0x80360000u; // 8024E108
  c->r[5]=c->r[5]+0xFFFFCE98u; // 8024E10C
  c->r[4]=c->r[4]+0xFFFFCEA8u; // 8024E110
  W8(c->r[5]+c->r[6],c->r[3]); // 8024E114
  W8(c->r[4]+c->r[3],c->r[6]); // 8024E118
  c->r[3]=c->r[6]|c->r[6]; // 8024E11C
  return; // 8024E120
L_8024E124:;
  c->r[4]=c->r[4]+0x00000001u; // 8024E124
  c->r[6]=c->r[6]+0x00000001u; // 8024E128
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024E0F8; } // 8024E12C
  c->r[3]=0u+0xFFFFFFFFu; // 8024E130
  return; // 8024E134
}

// HBMGetIndex
void f_8024E138(Ctx* __restrict c) {
  trace_call(0x8024E138u);
  c->r[4]=0u+0x80360000u; // 8024E138
  c->r[4]=c->r[4]+0xFFFFCEA8u; // 8024E13C
  c->r[3]=R8(c->r[4]+c->r[3]); // 8024E140
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8024E144
  return; // 8024E148
}

// HBMFreeIndex
void f_8024E14C(Ctx* __restrict c) {
  trace_call(0x8024E14Cu);
  c->r[5]=0u+0x80360000u; // 8024E14C
  c->r[4]=0u+0x80360000u; // 8024E150
  c->r[5]=c->r[5]+0xFFFFCE98u; // 8024E154
  c->r[0]=0u+0xFFFFFFFFu; // 8024E158
  c->r[6]=R8(c->r[5]+c->r[3]); // 8024E15C
  c->r[4]=c->r[4]+0xFFFFCEA8u; // 8024E160
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8024E164
  W8(c->r[5]+c->r[3],c->r[0]); // 8024E168
  W8(c->r[4]+c->r[6],c->r[0]); // 8024E16C
  return; // 8024E170
}

// HBMFreeIndexByKey
void f_8024E174(Ctx* __restrict c) {
  trace_call(0x8024E174u);
  c->r[5]=0u+0x80360000u; // 8024E174
  c->r[5]=c->r[5]+0xFFFFCEA8u; // 8024E178
  c->r[6]=R8(c->r[5]+c->r[3]); // 8024E17C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[6]); // 8024E180
  if (crb(c,0)) return; // 8024E184
  c->r[4]=0u+0x80360000u; // 8024E188
  c->r[0]=0u+0xFFFFFFFFu; // 8024E18C
  c->r[4]=c->r[4]+0xFFFFCE98u; // 8024E190
  W8(c->r[5]+c->r[3],c->r[0]); // 8024E194
  W8(c->r[4]+c->r[6],c->r[0]); // 8024E198
  return; // 8024E19C
}

// __HBMSYNRemoveSynthFromList__FP11HBMSYNSYNTH
void f_8024E1A0(Ctx* __restrict c) {
  trace_call(0x8024E1A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E1A0
  c->r[0]=c->lr; // 8024E1A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024E1A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024E1AC
  c->r[31]=c->r[3]|c->r[3]; // 8024E1B0
  c->lr=0x8024E1B8u; f_800B087C(c); // 8024E1B4
  c->r[4]=0u+0x80360000u; // 8024E1B8
  c->r[5]=0u+0x00000000u; // 8024E1BC
  c->r[6]=R32(c->r[4]+0xFFFFD558u); // 8024E1C0
  c->r[4]=0u+0x00000000u; // 8024E1C4
  goto L_8024E1F4; // 8024E1C8
L_8024E1CC:;
  cmpu(c,0,c->r[6],c->r[31]); // 8024E1CC
  if (crb(c,2)) { goto L_8024E1F0; } // 8024E1D0
  cmps(c,0,(int32_t)c->r[5],0); // 8024E1D4
  if (crb(c,2)) { goto L_8024E1E8; } // 8024E1D8
  W32(c->r[4]+0x00000000u,c->r[6]); // 8024E1DC
  c->r[4]=c->r[6]|c->r[6]; // 8024E1E0
  goto L_8024E1F0; // 8024E1E4
L_8024E1E8:;
  c->r[4]=c->r[6]|c->r[6]; // 8024E1E8
  c->r[5]=c->r[6]|c->r[6]; // 8024E1EC
L_8024E1F0:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 8024E1F0
L_8024E1F4:;
  cmps(c,0,(int32_t)c->r[6],0); // 8024E1F4
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E1CC; } // 8024E1F8
  cmps(c,0,(int32_t)c->r[4],0); // 8024E1FC
  if (crb(c,2)) { goto L_8024E20C; } // 8024E200
  c->r[0]=0u+0x00000000u; // 8024E204
  W32(c->r[4]+0x00000000u,c->r[0]); // 8024E208
L_8024E20C:;
  c->r[4]=0u+0x80360000u; // 8024E20C
  W32(c->r[4]+0xFFFFD558u,c->r[5]); // 8024E210
  c->lr=0x8024E218u; f_800B08A4(c); // 8024E214
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024E218
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024E21C
  c->lr=c->r[0]; // 8024E220
  c->r[1]=c->r[1]+0x00000010u; // 8024E224
  return; // 8024E228
}

// HBMSYNInit
void f_8024E22C(Ctx* __restrict c) {
  trace_call(0x8024E22Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E22C
  c->r[0]=c->lr; // 8024E230
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024E234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024E238
  c->r[31]=0u+0x80360000u; // 8024E23C
  c->r[31]=c->r[31]+0xFFFFD558u; // 8024E240
  c->lr=0x8024E248u; f_800C7E8C(c); // 8024E244
  cmps(c,0,(int32_t)c->r[3],0); // 8024E248
  if (crb(c,2)) { goto L_8024E2F0; } // 8024E24C
  c->r[0]=R32(c->r[31]+0x000004C8u); // 8024E250
  cmps(c,0,(int32_t)c->r[0],0); // 8024E254
  if (!crb(c,2)) { goto L_8024E2F0; } // 8024E258
  c->r[3]=c->r[31]+0x00000008u; // 8024E25C
  c->r[4]=0u+0x00000000u; // 8024E260
  W32(c->r[31]+0x00000004u,c->r[3]); // 8024E264
  c->r[0]=0u+0x00000001u; // 8024E268
  W32(c->r[3]+0x00000008u,c->r[4]); // 8024E26C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E270
  W32(c->r[3]+0x00000054u,c->r[4]); // 8024E274
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E278
  W32(c->r[3]+0x000000A0u,c->r[4]); // 8024E27C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E280
  W32(c->r[3]+0x000000ECu,c->r[4]); // 8024E284
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E288
  W32(c->r[3]+0x00000138u,c->r[4]); // 8024E28C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E290
  W32(c->r[3]+0x00000184u,c->r[4]); // 8024E294
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E298
  W32(c->r[3]+0x000001D0u,c->r[4]); // 8024E29C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E2A0
  W32(c->r[3]+0x0000021Cu,c->r[4]); // 8024E2A4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E2A8
  W32(c->r[3]+0x00000268u,c->r[4]); // 8024E2AC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E2B0
  W32(c->r[3]+0x000002B4u,c->r[4]); // 8024E2B4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E2B8
  W32(c->r[3]+0x00000300u,c->r[4]); // 8024E2BC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E2C0
  W32(c->r[3]+0x0000034Cu,c->r[4]); // 8024E2C4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E2C8
  W32(c->r[3]+0x00000398u,c->r[4]); // 8024E2CC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E2D0
  W32(c->r[3]+0x000003E4u,c->r[4]); // 8024E2D4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E2D8
  W32(c->r[3]+0x00000430u,c->r[4]); // 8024E2DC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024E2E0
  W32(c->r[3]+0x0000047Cu,c->r[4]); // 8024E2E4
  W32(c->r[31]+0x00000000u,c->r[4]); // 8024E2E8
  W32(c->r[31]+0x000004C8u,c->r[0]); // 8024E2EC
L_8024E2F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024E2F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024E2F4
  c->lr=c->r[0]; // 8024E2F8
  c->r[1]=c->r[1]+0x00000010u; // 8024E2FC
  return; // 8024E300
}

// HBMSYNQuit
void f_8024E304(Ctx* __restrict c) {
  trace_call(0x8024E304u);
  c->r[0]=0u+0x00000000u; // 8024E304
  c->r[4]=0u+0x80360000u; // 8024E308
  c->r[3]=0u+0x80360000u; // 8024E30C
  W32(c->r[4]+0xFFFFD55Cu,c->r[0]); // 8024E310
  W32(c->r[3]+0xFFFFDA20u,c->r[0]); // 8024E314
  return; // 8024E318
}

// HBMSYNRunAudioFrame
void f_8024E31C(Ctx* __restrict c) {
  trace_call(0x8024E31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E31C
  c->r[0]=c->lr; // 8024E320
  c->r[3]=0u+0x80360000u; // 8024E324
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024E328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024E32C
  c->r[0]=R32(c->r[3]+0xFFFFDA20u); // 8024E330
  cmps(c,0,(int32_t)c->r[0],0); // 8024E334
  if (crb(c,2)) { goto L_8024E374; } // 8024E338
  c->r[31]=0u+0x00000000u; // 8024E33C
L_8024E340:;
  c->r[3]=c->r[31]|c->r[31]; // 8024E340
  c->lr=0x8024E348u; f_8024F738(c); // 8024E344
  c->r[31]=c->r[31]+0x00000001u; // 8024E348
  cmps(c,0,(int32_t)c->r[31],16); // 8024E34C
  if (crb(c,0)) { IRQCHK(c); goto L_8024E340; } // 8024E350
  c->r[3]=0u+0x80360000u; // 8024E354
  c->r[31]=R32(c->r[3]+0xFFFFD558u); // 8024E358
  goto L_8024E36C; // 8024E35C
L_8024E360:;
  c->r[3]=c->r[31]|c->r[31]; // 8024E360
  c->lr=0x8024E368u; f_8024EA44(c); // 8024E364
  c->r[31]=R32(c->r[31]+0x00000000u); // 8024E368
L_8024E36C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8024E36C
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E360; } // 8024E370
L_8024E374:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024E374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024E378
  c->lr=c->r[0]; // 8024E37C
  c->r[1]=c->r[1]+0x00000010u; // 8024E380
  return; // 8024E384
}

// HBMSYNInitSynth
void f_8024E388(Ctx* __restrict c) {
  trace_call(0x8024E388u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E388
  c->r[0]=c->lr; // 8024E38C
  c->r[7]=c->r[5]+0x80000000u; // 8024E390
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024E394
  c->r[5]=rotl(c->r[7],31)&0x7FFFFFFFu; // 8024E398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024E39C
  c->r[31]=c->r[3]|c->r[3]; // 8024E3A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024E3A4
  c->r[30]=0u+0x00000000u; // 8024E3A8
  c->r[0]=R32(c->r[4]+0x00000000u); // 8024E3AC
  c->r[6]=c->r[4]+c->r[0]; // 8024E3B0
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 8024E3B4
  W32(c->r[3]+0x00000004u,c->r[6]); // 8024E3B8
  c->r[6]=R32(c->r[4]+0x00000004u); // 8024E3BC
  c->r[6]=c->r[4]+c->r[6]; // 8024E3C0
  W32(c->r[3]+0x00000008u,c->r[6]); // 8024E3C4
  c->r[6]=R32(c->r[4]+0x00000008u); // 8024E3C8
  c->r[6]=c->r[4]+c->r[6]; // 8024E3CC
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8024E3D0
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 8024E3D4
  c->r[6]=c->r[4]+c->r[6]; // 8024E3D8
  W32(c->r[3]+0x00000010u,c->r[6]); // 8024E3DC
  c->r[6]=R32(c->r[4]+0x00000010u); // 8024E3E0
  c->r[6]=c->r[4]+c->r[6]; // 8024E3E4
  W32(c->r[3]+0x00000014u,c->r[6]); // 8024E3E8
  c->r[6]=R32(c->r[4]+0x00000014u); // 8024E3EC
  c->r[4]=c->r[4]+c->r[6]; // 8024E3F0
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 8024E3F4
  W32(c->r[3]+0x00000018u,c->r[4]); // 8024E3F8
  W32(c->r[3]+0x00000020u,c->r[7]); // 8024E3FC
  W32(c->r[3]+0x00000024u,c->r[0]); // 8024E400
  W32(c->r[3]+0x00000068u,c->r[30]); // 8024E404
  c->lr=0x8024E40Cu; f_8024E614(c); // 8024E408
  c->r[0]=c->r[31]+0x000000FCu; // 8024E40C
  W32(c->r[31]+0x00000400u,c->r[30]); // 8024E410
  c->r[3]=c->r[31]|c->r[31]; // 8024E414
  c->r[5]=0u+0x00000000u; // 8024E418
  W32(c->r[31]+0x000003FCu,c->r[0]); // 8024E41C
  c->r[0]=0u+0x00000004u; // 8024E420
  W32(c->r[31]+0x00000404u,c->r[30]); // 8024E424
L_8024E428:;
  c->r[4]=c->r[3]|c->r[3]; // 8024E428
  c->ctr=c->r[0]; // 8024E42C
L_8024E430:;
  W32(c->r[4]+0x00000408u,c->r[30]); // 8024E430
  W32(c->r[4]+0x0000040Cu,c->r[30]); // 8024E434
  W32(c->r[4]+0x00000410u,c->r[30]); // 8024E438
  W32(c->r[4]+0x00000414u,c->r[30]); // 8024E43C
  W32(c->r[4]+0x00000418u,c->r[30]); // 8024E440
  W32(c->r[4]+0x0000041Cu,c->r[30]); // 8024E444
  W32(c->r[4]+0x00000420u,c->r[30]); // 8024E448
  W32(c->r[4]+0x00000424u,c->r[30]); // 8024E44C
  W32(c->r[4]+0x00000428u,c->r[30]); // 8024E450
  W32(c->r[4]+0x0000042Cu,c->r[30]); // 8024E454
  W32(c->r[4]+0x00000430u,c->r[30]); // 8024E458
  W32(c->r[4]+0x00000434u,c->r[30]); // 8024E45C
  W32(c->r[4]+0x00000438u,c->r[30]); // 8024E460
  W32(c->r[4]+0x0000043Cu,c->r[30]); // 8024E464
  W32(c->r[4]+0x00000440u,c->r[30]); // 8024E468
  W32(c->r[4]+0x00000444u,c->r[30]); // 8024E46C
  W32(c->r[4]+0x00000448u,c->r[30]); // 8024E470
  W32(c->r[4]+0x0000044Cu,c->r[30]); // 8024E474
  W32(c->r[4]+0x00000450u,c->r[30]); // 8024E478
  W32(c->r[4]+0x00000454u,c->r[30]); // 8024E47C
  W32(c->r[4]+0x00000458u,c->r[30]); // 8024E480
  W32(c->r[4]+0x0000045Cu,c->r[30]); // 8024E484
  W32(c->r[4]+0x00000460u,c->r[30]); // 8024E488
  W32(c->r[4]+0x00000464u,c->r[30]); // 8024E48C
  W32(c->r[4]+0x00000468u,c->r[30]); // 8024E490
  W32(c->r[4]+0x0000046Cu,c->r[30]); // 8024E494
  W32(c->r[4]+0x00000470u,c->r[30]); // 8024E498
  W32(c->r[4]+0x00000474u,c->r[30]); // 8024E49C
  W32(c->r[4]+0x00000478u,c->r[30]); // 8024E4A0
  W32(c->r[4]+0x0000047Cu,c->r[30]); // 8024E4A4
  W32(c->r[4]+0x00000480u,c->r[30]); // 8024E4A8
  W32(c->r[4]+0x00000484u,c->r[30]); // 8024E4AC
  c->r[4]=c->r[4]+0x00000080u; // 8024E4B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024E430; } // 8024E4B4
  c->r[5]=c->r[5]+0x00000001u; // 8024E4B8
  c->r[3]=c->r[3]+0x00000200u; // 8024E4BC
  cmpu(c,0,c->r[5],0x00000010u); // 8024E4C0
  if (crb(c,0)) { IRQCHK(c); goto L_8024E428; } // 8024E4C4
  c->lr=0x8024E4CCu; f_800B087C(c); // 8024E4C8
  c->r[4]=0u+0x80360000u; // 8024E4CC
  c->r[0]=R32(c->r[4]+0xFFFFD558u); // 8024E4D0
  cmps(c,0,(int32_t)c->r[0],0); // 8024E4D4
  if (crb(c,2)) { goto L_8024E4E4; } // 8024E4D8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8024E4DC
  goto L_8024E4EC; // 8024E4E0
L_8024E4E4:;
  c->r[0]=0u+0x00000000u; // 8024E4E4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8024E4E8
L_8024E4EC:;
  c->r[4]=0u+0x80360000u; // 8024E4EC
  W32(c->r[4]+0xFFFFD558u,c->r[31]); // 8024E4F0
  c->lr=0x8024E4F8u; f_800B08A4(c); // 8024E4F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024E4F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024E4FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024E500
  c->lr=c->r[0]; // 8024E504
  c->r[1]=c->r[1]+0x00000010u; // 8024E508
  return; // 8024E50C
}

// HBMSYNQuitSynth
void f_8024E510(Ctx* __restrict c) {
  trace_call(0x8024E510u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E510
  c->r[0]=c->lr; // 8024E514
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024E518
  c->r[11]=c->r[1]+0x00000030u; // 8024E51C
  c->lr=0x8024E524u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024E520
  c->r[25]=c->r[3]|c->r[3]; // 8024E524
  c->lr=0x8024E52Cu; f_800B087C(c); // 8024E528
  c->r[0]=R32(c->r[25]+0x00000404u); // 8024E52C
  c->r[27]=c->r[3]|c->r[3]; // 8024E530
  cmps(c,0,(int32_t)c->r[0],0); // 8024E534
  if (crb(c,2)) { goto L_8024E590; } // 8024E538
  c->r[28]=0u+0x00000000u; // 8024E53C
  c->r[29]=0u+0x00000000u; // 8024E540
  c->r[31]=0u+0x00000000u; // 8024E544
  c->r[30]=0u+0x80360000u; // 8024E548
L_8024E54C:;
  c->r[0]=R32(c->r[30]+0xFFFFD55Cu); // 8024E54C
  c->r[26]=c->r[0]+c->r[29]; // 8024E550
  c->r[0]=R32(c->r[26]+0x00000008u); // 8024E554
  cmpu(c,0,c->r[0],c->r[25]); // 8024E558
  if (!crb(c,2)) { goto L_8024E580; } // 8024E55C
  c->r[3]=R32(c->r[26]+0x00000004u); // 8024E560
  c->lr=0x8024E568u; f_8024D494(c); // 8024E564
  c->r[3]=R32(c->r[26]+0x00000004u); // 8024E568
  c->r[3]=R32(c->r[3]+0x00000018u); // 8024E56C
  c->lr=0x8024E574u; f_8024E174(c); // 8024E570
  c->r[3]=R32(c->r[26]+0x00000004u); // 8024E574
  c->lr=0x8024E57Cu; f_800C80B4(c); // 8024E578
  W32(c->r[26]+0x00000008u,c->r[31]); // 8024E57C
L_8024E580:;
  c->r[28]=c->r[28]+0x00000001u; // 8024E580
  c->r[29]=c->r[29]+0x0000004Cu; // 8024E584
  cmps(c,0,(int32_t)c->r[28],16); // 8024E588
  if (crb(c,0)) { IRQCHK(c); goto L_8024E54C; } // 8024E58C
L_8024E590:;
  c->r[3]=c->r[25]|c->r[25]; // 8024E590
  c->lr=0x8024E598u; f_8024E1A0(c); // 8024E594
  c->r[3]=c->r[27]|c->r[27]; // 8024E598
  c->lr=0x8024E5A0u; f_800B08A4(c); // 8024E59C
  c->r[11]=c->r[1]+0x00000030u; // 8024E5A0
  c->lr=0x8024E5A8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024E5A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024E5A8
  c->lr=c->r[0]; // 8024E5AC
  c->r[1]=c->r[1]+0x00000030u; // 8024E5B0
  return; // 8024E5B4
}

// HBMSYNMidiInput
void f_8024E5B8(Ctx* __restrict c) {
  trace_call(0x8024E5B8u);
  c->r[0]=R8(c->r[4]+0x00000000u); // 8024E5B8
  c->r[5]=R32(c->r[3]+0x000003FCu); // 8024E5BC
  W8(c->r[5]+0x00000000u,c->r[0]); // 8024E5C0
  c->r[5]=R32(c->r[3]+0x000003FCu); // 8024E5C4
  c->r[5]=c->r[5]+0x00000001u; // 8024E5C8
  W32(c->r[3]+0x000003FCu,c->r[5]); // 8024E5CC
  c->r[0]=R8(c->r[4]+0x00000001u); // 8024E5D0
  W8(c->r[5]+0x00000000u,c->r[0]); // 8024E5D4
  c->r[5]=R32(c->r[3]+0x000003FCu); // 8024E5D8
  c->r[5]=c->r[5]+0x00000001u; // 8024E5DC
  W32(c->r[3]+0x000003FCu,c->r[5]); // 8024E5E0
  c->r[0]=R8(c->r[4]+0x00000002u); // 8024E5E4
  W8(c->r[5]+0x00000000u,c->r[0]); // 8024E5E8
  c->r[5]=R32(c->r[3]+0x000003FCu); // 8024E5EC
  c->r[4]=R32(c->r[3]+0x00000400u); // 8024E5F0
  c->r[5]=c->r[5]+0x00000001u; // 8024E5F4
  c->r[0]=c->r[4]+0x00000001u; // 8024E5F8
  W32(c->r[3]+0x000003FCu,c->r[5]); // 8024E5FC
  W32(c->r[3]+0x00000400u,c->r[0]); // 8024E600
  return; // 8024E604
}

// HBMSYNSetMasterVolume
void f_8024E608(Ctx* __restrict c) {
  trace_call(0x8024E608u);
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 8024E608
  W32(c->r[3]+0x00000068u,c->r[0]); // 8024E60C
  return; // 8024E610
}

// __HBMSYNResetAllControllers
void f_8024E614(Ctx* __restrict c) {
  trace_call(0x8024E614u);
  c->r[5]=0u+0x802A0000u; // 8024E614
  c->r[0]=0u+0x00000002u; // 8024E618
  c->r[4]=c->r[5]+0x00002BF0u; // 8024E61C
  c->r[7]=R32(c->r[5]+0x00002BF0u); // 8024E620
  c->r[6]=R32(c->r[4]+0x00000190u); // 8024E624
  c->r[9]=0u+0x00000000u; // 8024E628
  c->r[4]=0u+0x00000040u; // 8024E62C
  c->ctr=c->r[0]; // 8024E630
L_8024E634:;
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 8024E634
  c->r[5]=R32(c->r[3]+0x00000008u); // 8024E638
  c->r[8]=c->r[3]+c->r[0]; // 8024E63C
  W32(c->r[8]+0x00000028u,c->r[5]); // 8024E640
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 8024E644
  c->r[5]=c->r[3]+c->r[0]; // 8024E648
  c->r[9]=c->r[9]+0x00000008u; // 8024E64C
  W32(c->r[8]+0x0000006Cu,c->r[6]); // 8024E650
  W8(c->r[5]+0x000000ECu,c->r[4]); // 8024E654
  W32(c->r[8]+0x000000ACu,c->r[7]); // 8024E658
  c->r[0]=R32(c->r[3]+0x00000008u); // 8024E65C
  W32(c->r[8]+0x0000002Cu,c->r[0]); // 8024E660
  W32(c->r[8]+0x00000070u,c->r[6]); // 8024E664
  W8(c->r[5]+0x000000EDu,c->r[4]); // 8024E668
  W32(c->r[8]+0x000000B0u,c->r[7]); // 8024E66C
  c->r[0]=R32(c->r[3]+0x00000008u); // 8024E670
  W32(c->r[8]+0x00000030u,c->r[0]); // 8024E674
  W32(c->r[8]+0x00000074u,c->r[6]); // 8024E678
  W8(c->r[5]+0x000000EEu,c->r[4]); // 8024E67C
  W32(c->r[8]+0x000000B4u,c->r[7]); // 8024E680
  c->r[0]=R32(c->r[3]+0x00000008u); // 8024E684
  W32(c->r[8]+0x00000034u,c->r[0]); // 8024E688
  W32(c->r[8]+0x00000078u,c->r[6]); // 8024E68C
  W8(c->r[5]+0x000000EFu,c->r[4]); // 8024E690
  W32(c->r[8]+0x000000B8u,c->r[7]); // 8024E694
  c->r[0]=R32(c->r[3]+0x00000008u); // 8024E698
  W32(c->r[8]+0x00000038u,c->r[0]); // 8024E69C
  W32(c->r[8]+0x0000007Cu,c->r[6]); // 8024E6A0
  W8(c->r[5]+0x000000F0u,c->r[4]); // 8024E6A4
  W32(c->r[8]+0x000000BCu,c->r[7]); // 8024E6A8
  c->r[0]=R32(c->r[3]+0x00000008u); // 8024E6AC
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 8024E6B0
  W32(c->r[8]+0x00000080u,c->r[6]); // 8024E6B4
  W8(c->r[5]+0x000000F1u,c->r[4]); // 8024E6B8
  W32(c->r[8]+0x000000C0u,c->r[7]); // 8024E6BC
  c->r[0]=R32(c->r[3]+0x00000008u); // 8024E6C0
  W32(c->r[8]+0x00000040u,c->r[0]); // 8024E6C4
  W32(c->r[8]+0x00000084u,c->r[6]); // 8024E6C8
  W8(c->r[5]+0x000000F2u,c->r[4]); // 8024E6CC
  W32(c->r[8]+0x000000C4u,c->r[7]); // 8024E6D0
  c->r[0]=R32(c->r[3]+0x00000008u); // 8024E6D4
  W32(c->r[8]+0x00000044u,c->r[0]); // 8024E6D8
  W32(c->r[8]+0x00000088u,c->r[6]); // 8024E6DC
  W8(c->r[5]+0x000000F3u,c->r[4]); // 8024E6E0
  W32(c->r[8]+0x000000C8u,c->r[7]); // 8024E6E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024E634; } // 8024E6E8
  return; // 8024E6EC
}

// __HBMSYNNoteOn__FP11HBMSYNSYNTHUcUcUc
void f_8024E6F0(Ctx* __restrict c) {
  trace_call(0x8024E6F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E6F0
  c->r[0]=c->lr; // 8024E6F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024E6F8
  c->r[11]=c->r[1]+0x00000030u; // 8024E6FC
  c->lr=0x8024E704u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024E700
  cmps(c,0,(int32_t)c->r[6],0); // 8024E704
  c->r[23]=c->r[3]|c->r[3]; // 8024E708
  c->r[24]=c->r[4]|c->r[4]; // 8024E70C
  c->r[25]=c->r[5]|c->r[5]; // 8024E710
  c->r[26]=c->r[6]|c->r[6]; // 8024E714
  if (crb(c,2)) { goto L_8024E8DC; } // 8024E718
  c->r[0]=rotl(c->r[4],9)&0x0001FE00u; // 8024E71C
  c->r[31]=rotl(c->r[5],2)&0x000003FCu; // 8024E720
  c->r[3]=c->r[3]+c->r[0]; // 8024E724
  c->r[30]=c->r[3]+0x00000408u; // 8024E728
  c->r[3]=R32(c->r[30]+c->r[31]); // 8024E72C
  cmps(c,0,(int32_t)c->r[3],0); // 8024E730
  if (crb(c,2)) { goto L_8024E744; } // 8024E734
  c->lr=0x8024E73Cu; f_8024F72C(c); // 8024E738
  c->r[0]=0u+0x00000000u; // 8024E73C
  W32(c->r[30]+c->r[31],c->r[0]); // 8024E740
L_8024E744:;
  c->r[4]=0u+0x80250000u; // 8024E744
  c->r[5]=c->r[23]|c->r[23]; // 8024E748
  c->r[4]=c->r[4]+0xFFFFF688u; // 8024E74C
  c->r[3]=0u+0x0000001Fu; // 8024E750
  c->lr=0x8024E758u; f_800C8130(c); // 8024E754
  cmps(c,0,(int32_t)c->r[3],0); // 8024E758
  c->r[29]=c->r[3]|c->r[3]; // 8024E75C
  if (crb(c,2)) { goto L_8024E904; } // 8024E760
  c->r[3]=R32(c->r[3]+0x00000018u); // 8024E764
  c->lr=0x8024E76Cu; f_8024E0E4(c); // 8024E768
  cmps(c,0,(int32_t)c->r[3],0); // 8024E76C
  c->r[28]=c->r[3]|c->r[3]; // 8024E770
  if (crb(c,0)) { goto L_8024E8D0; } // 8024E774
  c->r[5]=0u+0x80360000u; // 8024E778
  c->r[0]=rotl(c->r[24],2)&0x000003FCu; // 8024E77C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 8024E780
  c->r[5]=R32(c->r[5]+0xFFFFD55Cu); // 8024E784
  c->r[3]=c->r[23]+c->r[0]; // 8024E788
  c->r[0]=rotl(c->r[25],1)&0x000001FEu; // 8024E78C
  c->r[27]=c->r[5]+c->r[4]; // 8024E790
  W32(c->r[27]+0x00000004u,c->r[29]); // 8024E794
  W32(c->r[27]+0x00000008u,c->r[23]); // 8024E798
  W8(c->r[27]+0x0000000Cu,c->r[24]); // 8024E79C
  W8(c->r[27]+0x0000000Du,c->r[25]); // 8024E7A0
  W8(c->r[27]+0x0000000Eu,c->r[26]); // 8024E7A4
  c->r[3]=R32(c->r[3]+0x00000028u); // 8024E7A8
  c->r[0]=R16(c->r[3]+c->r[0]); // 8024E7AC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8024E7B0
  if (!crb(c,2)) { goto L_8024E7C0; } // 8024E7B4
  c->r[5]=0u+0x00000000u; // 8024E7B8
  goto L_8024E810; // 8024E7BC
L_8024E7C0:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8024E7C0
  c->r[3]=R32(c->r[23]+0x0000000Cu); // 8024E7C4
  c->r[5]=0u+0x00000001u; // 8024E7C8
  c->r[4]=c->r[3]+c->r[0]; // 8024E7CC
  W32(c->r[27]+0x00000010u,c->r[4]); // 8024E7D0
  c->r[0]=R32(c->r[4]+0x00000010u); // 8024E7D4
  c->r[3]=R32(c->r[23]+0x00000010u); // 8024E7D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 8024E7DC
  c->r[0]=c->r[3]+c->r[0]; // 8024E7E0
  W32(c->r[27]+0x00000014u,c->r[0]); // 8024E7E4
  c->r[0]=R32(c->r[4]+0x00000014u); // 8024E7E8
  c->r[3]=R32(c->r[23]+0x00000014u); // 8024E7EC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8024E7F0
  c->r[3]=c->r[3]+c->r[0]; // 8024E7F4
  W32(c->r[27]+0x00000018u,c->r[3]); // 8024E7F8
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 8024E7FC
  c->r[3]=R32(c->r[23]+0x00000018u); // 8024E800
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)46); // 8024E804
  c->r[0]=c->r[3]+c->r[0]; // 8024E808
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 8024E80C
L_8024E810:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024E810
  if (crb(c,2)) { goto L_8024E8AC; } // 8024E814
  W32(c->r[30]+c->r[31],c->r[27]); // 8024E818
  c->r[3]=c->r[27]|c->r[27]; // 8024E81C
  c->r[4]=R32(c->r[23]+0x00000404u); // 8024E820
  c->r[0]=c->r[4]+0x00000001u; // 8024E824
  W32(c->r[23]+0x00000404u,c->r[0]); // 8024E828
  c->lr=0x8024E830u; f_8024F0B8(c); // 8024E82C
  c->r[3]=c->r[27]|c->r[27]; // 8024E830
  c->lr=0x8024E838u; f_8024EE90(c); // 8024E834
  c->r[3]=c->r[27]|c->r[27]; // 8024E838
  c->lr=0x8024E840u; f_8024EEB8(c); // 8024E83C
  c->r[3]=c->r[27]|c->r[27]; // 8024E840
  c->lr=0x8024E848u; f_8024EAAC(c); // 8024E844
  c->r[3]=c->r[27]|c->r[27]; // 8024E848
  c->lr=0x8024E850u; f_8024EEE4(c); // 8024E84C
  c->r[25]=c->r[3]|c->r[3]; // 8024E850
  c->r[3]=c->r[27]|c->r[27]; // 8024E854
  c->lr=0x8024E85Cu; f_8024EED0(c); // 8024E858
  c->r[0]=rotl(c->r[24],2)&0x000003FCu; // 8024E85C
  c->r[4]=c->r[3]|c->r[3]; // 8024E860
  c->r[6]=c->r[23]+c->r[0]; // 8024E864
  c->r[5]=c->r[23]+c->r[24]; // 8024E868
  c->r[0]=R32(c->r[6]+0x000000ACu); // 8024E86C
  c->r[3]=c->r[29]|c->r[29]; // 8024E870
  c->r[6]=R8(c->r[5]+0x000000ECu); // 8024E874
  c->r[7]=c->r[25]|c->r[25]; // 8024E878
  c->r[5]=sraw(c,c->r[0],16); // 8024E87C
  c->lr=0x8024E884u; f_8024CB44(c); // 8024E880
  c->r[3]=c->r[27]|c->r[27]; // 8024E884
  c->lr=0x8024E88Cu; f_8024F64C(c); // 8024E888
  c->r[3]=c->r[27]|c->r[27]; // 8024E88C
  c->lr=0x8024E894u; f_8024F120(c); // 8024E890
  c->r[0]=0u+0x00000001u; // 8024E894
  W16(c->r[29]+0x00000038u,c->r[0]); // 8024E898
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 8024E89C
  c->r[0]=c->r[0]|0x00000004u; // 8024E8A0
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8024E8A4
  goto L_8024E904; // 8024E8A8
L_8024E8AC:;
  c->r[0]=0u+0x00000000u; // 8024E8AC
  c->r[3]=c->r[29]|c->r[29]; // 8024E8B0
  W32(c->r[27]+0x00000008u,c->r[0]); // 8024E8B4
  c->lr=0x8024E8BCu; f_8024D494(c); // 8024E8B8
  c->r[3]=c->r[28]|c->r[28]; // 8024E8BC
  c->lr=0x8024E8C4u; f_8024E14C(c); // 8024E8C0
  c->r[3]=c->r[29]|c->r[29]; // 8024E8C4
  c->lr=0x8024E8CCu; f_800C80B4(c); // 8024E8C8
  goto L_8024E904; // 8024E8CC
L_8024E8D0:;
  c->r[3]=c->r[29]|c->r[29]; // 8024E8D0
  c->lr=0x8024E8D8u; f_800C80B4(c); // 8024E8D4
  goto L_8024E904; // 8024E8D8
L_8024E8DC:;
  c->r[4]=rotl(c->r[4],9)&0x0001FE00u; // 8024E8DC
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 8024E8E0
  c->r[3]=c->r[3]+c->r[4]; // 8024E8E4
  c->r[23]=c->r[3]+c->r[0]; // 8024E8E8
  c->r[3]=R32(c->r[23]+0x00000408u); // 8024E8EC
  cmps(c,0,(int32_t)c->r[3],0); // 8024E8F0
  if (crb(c,2)) { goto L_8024E904; } // 8024E8F4
  c->lr=0x8024E8FCu; f_8024F72C(c); // 8024E8F8
  c->r[0]=0u+0x00000000u; // 8024E8FC
  W32(c->r[23]+0x00000408u,c->r[0]); // 8024E900
L_8024E904:;
  c->r[11]=c->r[1]+0x00000030u; // 8024E904
  c->lr=0x8024E90Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024E908
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024E90C
  c->lr=c->r[0]; // 8024E910
  c->r[1]=c->r[1]+0x00000030u; // 8024E914
  return; // 8024E918
}

// __HBMSYNMidiIn__FP11HBMSYNSYNTHPUc
void f_8024E91C(Ctx* __restrict c) {
  trace_call(0x8024E91Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E91C
  c->r[0]=c->lr; // 8024E920
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024E924
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024E928
  c->r[6]=R8(c->r[4]+0x00000000u); // 8024E92C
  c->r[5]=R8(c->r[4]+0x00000001u); // 8024E930
  c->r[0]=sraw(c,c->r[6],4); // 8024E934
  c->r[7]=rotl(c->r[6],0)&0x0000000Fu; // 8024E938
  cmps(c,0,(int32_t)c->r[0],10); // 8024E93C
  if (crb(c,2)) { goto L_8024EA30; } // 8024E940
  if (!crb(c,0)) { goto L_8024E958; } // 8024E944
  cmps(c,0,(int32_t)c->r[0],8); // 8024E948
  if (crb(c,2)) { goto L_8024E968; } // 8024E94C
  if (!crb(c,0)) { goto L_8024E994; } // 8024E950
  goto L_8024EA30; // 8024E954
L_8024E958:;
  cmps(c,0,(int32_t)c->r[0],12); // 8024E958
  if (crb(c,2)) { goto L_8024EA18; } // 8024E95C
  if (!crb(c,0)) { goto L_8024EA30; } // 8024E960
  goto L_8024E9A4; // 8024E964
L_8024E968:;
  c->r[4]=rotl(c->r[7],9)&0x0001FE00u; // 8024E968
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 8024E96C
  c->r[3]=c->r[3]+c->r[4]; // 8024E970
  c->r[31]=c->r[3]+c->r[0]; // 8024E974
  c->r[3]=R32(c->r[31]+0x00000408u); // 8024E978
  cmps(c,0,(int32_t)c->r[3],0); // 8024E97C
  if (crb(c,2)) { goto L_8024EA30; } // 8024E980
  c->lr=0x8024E988u; f_8024F72C(c); // 8024E984
  c->r[0]=0u+0x00000000u; // 8024E988
  W32(c->r[31]+0x00000408u,c->r[0]); // 8024E98C
  goto L_8024EA30; // 8024E990
L_8024E994:;
  c->r[6]=R8(c->r[4]+0x00000002u); // 8024E994
  c->r[4]=c->r[7]|c->r[7]; // 8024E998
  c->lr=0x8024E9A0u; f_8024E6F0(c); // 8024E99C
  goto L_8024EA30; // 8024E9A0
L_8024E9A4:;
  cmps(c,0,(int32_t)c->r[5],10); // 8024E9A4
  c->r[6]=R8(c->r[4]+0x00000002u); // 8024E9A8
  if (crb(c,2)) { goto L_8024E9EC; } // 8024E9AC
  if (!crb(c,0)) { goto L_8024E9C0; } // 8024E9B0
  cmps(c,0,(int32_t)c->r[5],7); // 8024E9B4
  if (crb(c,2)) { goto L_8024E9CC; } // 8024E9B8
  goto L_8024EA30; // 8024E9BC
L_8024E9C0:;
  cmps(c,0,(int32_t)c->r[5],91); // 8024E9C0
  if (crb(c,2)) { goto L_8024E9F8; } // 8024E9C4
  goto L_8024EA30; // 8024E9C8
L_8024E9CC:;
  c->r[4]=0u+0x802A0000u; // 8024E9CC
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 8024E9D0
  c->r[5]=rotl(c->r[6],2)&0x000003FCu; // 8024E9D4
  c->r[4]=c->r[4]+0x00002BF0u; // 8024E9D8
  c->r[3]=c->r[3]+c->r[0]; // 8024E9DC
  c->r[0]=R32(c->r[4]+c->r[5]); // 8024E9E0
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 8024E9E4
  goto L_8024EA30; // 8024E9E8
L_8024E9EC:;
  c->r[3]=c->r[3]+c->r[7]; // 8024E9EC
  W8(c->r[3]+0x000000ECu,c->r[6]); // 8024E9F0
  goto L_8024EA30; // 8024E9F4
L_8024E9F8:;
  c->r[4]=0u+0x802A0000u; // 8024E9F8
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 8024E9FC
  c->r[5]=rotl(c->r[6],2)&0x000003FCu; // 8024EA00
  c->r[4]=c->r[4]+0x00002BF0u; // 8024EA04
  c->r[3]=c->r[3]+c->r[0]; // 8024EA08
  c->r[0]=R32(c->r[4]+c->r[5]); // 8024EA0C
  W32(c->r[3]+0x000000ACu,c->r[0]); // 8024EA10
  goto L_8024EA30; // 8024EA14
L_8024EA18:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 8024EA18
  c->r[4]=rotl(c->r[5],8)&0x0000FF00u; // 8024EA1C
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 8024EA20
  c->r[4]=c->r[6]+c->r[4]; // 8024EA24
  c->r[3]=c->r[3]+c->r[0]; // 8024EA28
  W32(c->r[3]+0x00000028u,c->r[4]); // 8024EA2C
L_8024EA30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024EA30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024EA34
  c->lr=c->r[0]; // 8024EA38
  c->r[1]=c->r[1]+0x00000010u; // 8024EA3C
  return; // 8024EA40
}

// __HBMSYNRunInputBufferEvents
void f_8024EA44(Ctx* __restrict c) {
  trace_call(0x8024EA44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EA44
  c->r[0]=c->lr; // 8024EA48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024EA4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024EA50
  c->r[31]=c->r[3]+0x000000FCu; // 8024EA54
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024EA58
  c->r[30]=c->r[3]|c->r[3]; // 8024EA5C
  goto L_8024EA80; // 8024EA60
L_8024EA64:;
  c->r[3]=c->r[30]|c->r[30]; // 8024EA64
  c->r[4]=c->r[31]|c->r[31]; // 8024EA68
  c->lr=0x8024EA70u; f_8024E91C(c); // 8024EA6C
  c->r[3]=R32(c->r[30]+0x00000400u); // 8024EA70
  c->r[31]=c->r[31]+0x00000003u; // 8024EA74
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8024EA78
  W32(c->r[30]+0x00000400u,c->r[0]); // 8024EA7C
L_8024EA80:;
  c->r[0]=R32(c->r[30]+0x00000400u); // 8024EA80
  cmps(c,0,(int32_t)c->r[0],0); // 8024EA84
  if (!crb(c,2)) { IRQCHK(c); goto L_8024EA64; } // 8024EA88
  c->r[0]=c->r[30]+0x000000FCu; // 8024EA8C
  W32(c->r[30]+0x000003FCu,c->r[0]); // 8024EA90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024EA94
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024EA98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024EA9C
  c->lr=c->r[0]; // 8024EAA0
  c->r[1]=c->r[1]+0x00000010u; // 8024EAA4
  return; // 8024EAA8
}

// __HBMSYNSetupVolumeEnvelope
void f_8024EAAC(Ctx* __restrict c) {
  trace_call(0x8024EAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EAAC
  c->r[0]=c->lr; // 8024EAB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024EAB4
  c->r[0]=0u+0x43300000u; // 8024EAB8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8024EABC
  c->r[31]=0u+0x80260000u; // 8024EAC0
  c->r[31]=c->r[31]+0x00001B38u; // 8024EAC4
  W32(c->r[1]+0x00000028u,c->r[30]); // 8024EAC8
  c->r[30]=c->r[3]|c->r[3]; // 8024EACC
  c->r[6]=R32(c->r[3]+0x00000014u); // 8024EAD0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024EAD4
  c->r[4]=R32(c->r[6]+0x00000018u); // 8024EAD8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8024EADC
  c->r[0]=c->r[4]+0x80000000u; // 8024EAE0
  cmpu(c,0,c->r[0],0x00000000u); // 8024EAE4
  if (!crb(c,2)) { goto L_8024EB20; } // 8024EAE8
  c->r[4]=0u+0x00000001u; // 8024EAEC
  c->r[0]=0u+0x00000000u; // 8024EAF0
  W32(c->r[3]+0x00000030u,c->r[4]); // 8024EAF4
  W32(c->r[3]+0x00000034u,c->r[0]); // 8024EAF8
  c->r[4]=R32(c->r[6]+0x0000001Cu); // 8024EAFC
  c->r[0]=c->r[4]+0x80000000u; // 8024EB00
  cmpu(c,0,c->r[0],0x00000000u); // 8024EB04
  if (!crb(c,2)) { goto L_8024EC3C; } // 8024EB08
  c->r[0]=0u+0x00000002u; // 8024EB0C
  W32(c->r[3]+0x00000030u,c->r[0]); // 8024EB10
  c->r[0]=R32(c->r[6]+0x00000020u); // 8024EB14
  W32(c->r[3]+0x00000034u,c->r[0]); // 8024EB18
  goto L_8024EC3C; // 8024EB1C
L_8024EB20:;
  c->r[5]=R8(c->r[3]+0x0000000Eu); // 8024EB20
  c->r[3]=R32(c->r[6]+0x00000028u); // 8024EB24
  if (!crb(c,2)) { goto L_8024EB34; } // 8024EB28
  c->r[4]=0u+0x00000000u; // 8024EB2C
  goto L_8024EBE4; // 8024EB30
L_8024EB34:;
  c->r[0]=c->r[3]+0x80000000u; // 8024EB34
  cmpu(c,0,c->r[0],0x00000000u); // 8024EB38
  if (!crb(c,2)) { goto L_8024EB80; } // 8024EB3C
  c->r[0]=c->r[4]^0x80000000u; // 8024EB40
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=RF64(ea);} // 8024EB44
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024EB48
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EB4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8024EB50
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=RF64(ea);} // 8024EB54
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8024EB58
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 8024EB5C
  c->lr=0x8024EB64u; f_800E3F18(c); // 8024EB60
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8024EB64
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EB68
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8024EB6C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8024EB70
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8024EB74
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8024EB78
  goto L_8024EBE4; // 8024EB7C
L_8024EB80:;
  c->r[0]=c->r[3]^0x80000000u; // 8024EB80
  c->r[4]=c->r[4]^0x80000000u; // 8024EB84
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024EB88
  c->r[3]=0u+0x802A0000u; // 8024EB8C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[4]=RF64(ea);} // 8024EB90
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 8024EB94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8024EB98
  c->r[3]=c->r[3]+0x000029F0u; // 8024EB9C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8024EBA0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8024EBA4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 8024EBA8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8024EBAC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EBB0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 8024EBB4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=RF64(ea);} // 8024EBB8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8024EBBC
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8024EBC0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 8024EBC4
  c->lr=0x8024EBCCu; f_800E3F18(c); // 8024EBC8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8024EBCC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EBD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8024EBD4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8024EBD8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8024EBDC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8024EBE0
L_8024EBE4:;
  c->r[3]=0u+0x55550000u; // 8024EBE4
  c->r[0]=c->r[3]+0x00005556u; // 8024EBE8
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8024EBEC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8024EBF0
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 8024EBF4
  if (crb(c,2)) { goto L_8024EC20; } // 8024EBF8
  c->r[0]=0u+0x00640000u; // 8024EBFC
  c->r[4]=0u+0x00000000u; // 8024EC00
  c->r[3]=divw((int32_t)c->r[0],(int32_t)c->r[3]); // 8024EC04
  W32(c->r[30]+0x00000038u,c->r[4]); // 8024EC08
  c->r[0]=0u+0xFC400000u; // 8024EC0C
  W32(c->r[30]+0x00000034u,c->r[0]); // 8024EC10
  W32(c->r[30]+0x00000030u,c->r[4]); // 8024EC14
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 8024EC18
  goto L_8024EC3C; // 8024EC1C
L_8024EC20:;
  c->r[4]=0u+0x00000000u; // 8024EC20
  c->r[3]=0u+0x00640000u; // 8024EC24
  c->r[0]=0u+0xFC400000u; // 8024EC28
  W32(c->r[30]+0x00000038u,c->r[4]); // 8024EC2C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 8024EC30
  W32(c->r[30]+0x00000034u,c->r[0]); // 8024EC34
  W32(c->r[30]+0x00000030u,c->r[4]); // 8024EC38
L_8024EC3C:;
  c->r[0]=R32(c->r[30]+0x00000030u); // 8024EC3C
  cmpu(c,0,c->r[0],0x00000002u); // 8024EC40
  if (!crb(c,0)) { goto L_8024ED4C; } // 8024EC44
  c->r[4]=R32(c->r[30]+0x00000014u); // 8024EC48
  c->r[5]=R8(c->r[30]+0x0000000Du); // 8024EC4C
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 8024EC50
  c->r[4]=R32(c->r[4]+0x0000002Cu); // 8024EC54
  c->r[0]=c->r[3]+0x80000000u; // 8024EC58
  cmpu(c,0,c->r[0],0x00000000u); // 8024EC5C
  if (!crb(c,2)) { goto L_8024EC6C; } // 8024EC60
  c->r[4]=0u+0x00000000u; // 8024EC64
  goto L_8024ED1C; // 8024EC68
L_8024EC6C:;
  c->r[0]=c->r[4]+0x80000000u; // 8024EC6C
  cmpu(c,0,c->r[0],0x00000000u); // 8024EC70
  if (!crb(c,2)) { goto L_8024ECB8; } // 8024EC74
  c->r[0]=c->r[3]^0x80000000u; // 8024EC78
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=RF64(ea);} // 8024EC7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024EC80
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EC84
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8024EC88
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=RF64(ea);} // 8024EC8C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8024EC90
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 8024EC94
  c->lr=0x8024EC9Cu; f_800E3F18(c); // 8024EC98
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8024EC9C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024ECA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8024ECA4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8024ECA8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8024ECAC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8024ECB0
  goto L_8024ED1C; // 8024ECB4
L_8024ECB8:;
  c->r[0]=c->r[4]^0x80000000u; // 8024ECB8
  c->r[4]=c->r[3]^0x80000000u; // 8024ECBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024ECC0
  c->r[3]=0u+0x802A0000u; // 8024ECC4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[4]=RF64(ea);} // 8024ECC8
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 8024ECCC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8024ECD0
  c->r[3]=c->r[3]+0x000029F0u; // 8024ECD4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8024ECD8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8024ECDC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 8024ECE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8024ECE4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024ECE8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 8024ECEC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=RF64(ea);} // 8024ECF0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8024ECF4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8024ECF8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 8024ECFC
  c->lr=0x8024ED04u; f_800E3F18(c); // 8024ED00
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8024ED04
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024ED08
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8024ED0C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8024ED10
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8024ED14
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8024ED18
L_8024ED1C:;
  c->r[3]=0u+0x55550000u; // 8024ED1C
  c->r[0]=c->r[3]+0x00005556u; // 8024ED20
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8024ED24
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8024ED28
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 8024ED2C
  if (crb(c,2)) { goto L_8024ED44; } // 8024ED30
  c->r[0]=0u+0xFC400000u; // 8024ED34
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[3]); // 8024ED38
  W32(c->r[30]+0x00000040u,c->r[0]); // 8024ED3C
  goto L_8024ED4C; // 8024ED40
L_8024ED44:;
  c->r[0]=0u+0xFC400000u; // 8024ED44
  W32(c->r[30]+0x00000040u,c->r[0]); // 8024ED48
L_8024ED4C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 8024ED4C
  c->r[0]=R32(c->r[3]+0x00000020u); // 8024ED50
  W32(c->r[30]+0x00000044u,c->r[0]); // 8024ED54
  c->r[0]=R32(c->r[3]+0x00000024u); // 8024ED58
  W32(c->r[30]+0x00000048u,c->r[0]); // 8024ED5C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8024ED60
  c->r[30]=R32(c->r[1]+0x00000028u); // 8024ED64
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024ED68
  c->lr=c->r[0]; // 8024ED6C
  c->r[1]=c->r[1]+0x00000030u; // 8024ED70
  return; // 8024ED74
}

// __HBMSYNRunVolumeEnvelope
void f_8024ED78(Ctx* __restrict c) {
  trace_call(0x8024ED78u);
  c->r[0]=R32(c->r[3]+0x00000030u); // 8024ED78
  cmps(c,0,(int32_t)c->r[0],2); // 8024ED7C
  if (crb(c,2)) return; // 8024ED80
  if (!crb(c,0)) { goto L_8024ED98; } // 8024ED84
  cmps(c,0,(int32_t)c->r[0],0); // 8024ED88
  if (crb(c,2)) { goto L_8024EDA4; } // 8024ED8C
  if (!crb(c,0)) { goto L_8024EDFC; } // 8024ED90
  return; // 8024ED94
L_8024ED98:;
  cmps(c,0,(int32_t)c->r[0],4); // 8024ED98
  if (!crb(c,0)) return; // 8024ED9C
  goto L_8024EE64; // 8024EDA0
L_8024EDA4:;
  c->r[5]=R32(c->r[3]+0x00000038u); // 8024EDA4
  c->r[0]=0u+0x00630000u; // 8024EDA8
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 8024EDAC
  c->r[4]=c->r[5]+c->r[4]; // 8024EDB0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8024EDB4
  W32(c->r[3]+0x00000038u,c->r[4]); // 8024EDB8
  if (crb(c,0)) { goto L_8024EDCC; } // 8024EDBC
  c->r[0]=0u+0x00000000u; // 8024EDC0
  W32(c->r[3]+0x00000034u,c->r[0]); // 8024EDC4
  goto L_8024EDE4; // 8024EDC8
L_8024EDCC:;
  c->r[0]=sraw(c,c->r[4],16); // 8024EDCC
  c->r[4]=0u+0x802A0000u; // 8024EDD0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024EDD4
  c->r[4]=c->r[4]+0x00002DF0u; // 8024EDD8
  c->r[0]=R32(c->r[4]+c->r[0]); // 8024EDDC
  W32(c->r[3]+0x00000034u,c->r[0]); // 8024EDE0
L_8024EDE4:;
  c->r[0]=R32(c->r[3]+0x00000034u); // 8024EDE4
  cmps(c,0,(int32_t)c->r[0],0); // 8024EDE8
  if (!crb(c,2)) return; // 8024EDEC
  c->r[0]=0u+0x00000001u; // 8024EDF0
  W32(c->r[3]+0x00000030u,c->r[0]); // 8024EDF4
  return; // 8024EDF8
L_8024EDFC:;
  c->r[4]=R32(c->r[3]+0x00000034u); // 8024EDFC
  c->r[0]=R32(c->r[3]+0x00000040u); // 8024EE00
  c->r[5]=R32(c->r[3]+0x00000044u); // 8024EE04
  c->r[0]=c->r[4]+c->r[0]; // 8024EE08
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8024EE0C
  W32(c->r[3]+0x00000034u,c->r[0]); // 8024EE10
  if (crb(c,1)) { goto L_8024EE24; } // 8024EE14
  c->r[0]=0u+0x00000002u; // 8024EE18
  W32(c->r[3]+0x00000034u,c->r[5]); // 8024EE1C
  W32(c->r[3]+0x00000030u,c->r[0]); // 8024EE20
L_8024EE24:;
  c->r[4]=R32(c->r[3]+0x00000034u); // 8024EE24
  c->r[0]=0u+0xFD300000u; // 8024EE28
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8024EE2C
  if (crb(c,1)) return; // 8024EE30
  c->r[4]=R8(c->r[3]+0x0000000Cu); // 8024EE34
  c->r[7]=0u+0x00000004u; // 8024EE38
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8024EE3C
  c->r[6]=0u+0x00000000u; // 8024EE40
  c->r[5]=R32(c->r[3]+0x00000008u); // 8024EE44
  c->r[4]=rotl(c->r[4],9)&0xFFFFFE00u; // 8024EE48
  W32(c->r[3]+0x00000030u,c->r[7]); // 8024EE4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024EE50
  c->r[3]=c->r[5]+c->r[4]; // 8024EE54
  c->r[3]=c->r[3]+c->r[0]; // 8024EE58
  W32(c->r[3]+0x00000408u,c->r[6]); // 8024EE5C
  return; // 8024EE60
L_8024EE64:;
  c->r[4]=R32(c->r[3]+0x00000034u); // 8024EE64
  c->r[0]=0u+0xFD300000u; // 8024EE68
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8024EE6C
  if (crb(c,1)) { goto L_8024EE80; } // 8024EE70
  c->r[0]=0u+0x00000004u; // 8024EE74
  W32(c->r[3]+0x00000030u,c->r[0]); // 8024EE78
  return; // 8024EE7C
L_8024EE80:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 8024EE80
  c->r[0]=c->r[4]+c->r[0]; // 8024EE84
  W32(c->r[3]+0x00000034u,c->r[0]); // 8024EE88
  return; // 8024EE8C
}

// __HBMSYNSetupVolume
void f_8024EE90(Ctx* __restrict c) {
  trace_call(0x8024EE90u);
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 8024EE90
  c->r[4]=0u+0x802A0000u; // 8024EE94
  c->r[5]=R32(c->r[3]+0x00000010u); // 8024EE98
  c->r[4]=c->r[4]+0x00002BF0u; // 8024EE9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024EEA0
  c->r[5]=R32(c->r[5]+0x00000004u); // 8024EEA4
  c->r[0]=R32(c->r[4]+c->r[0]); // 8024EEA8
  c->r[0]=c->r[5]+c->r[0]; // 8024EEAC
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8024EEB0
  return; // 8024EEB4
}

// __HBMSYNSetupPan
void f_8024EEB8(Ctx* __restrict c) {
  trace_call(0x8024EEB8u);
  c->r[4]=R32(c->r[3]+0x00000008u); // 8024EEB8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8024EEBC
  c->r[4]=c->r[4]+c->r[0]; // 8024EEC0
  c->r[0]=R8(c->r[4]+0x000000ECu); // 8024EEC4
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8024EEC8
  return; // 8024EECC
}

// __HBMSYNGetVoiceInput
void f_8024EED0(Ctx* __restrict c) {
  trace_call(0x8024EED0u);
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 8024EED0
  c->r[0]=R32(c->r[3]+0x00000034u); // 8024EED4
  c->r[0]=c->r[4]+c->r[0]; // 8024EED8
  c->r[3]=sraw(c,c->r[0],16); // 8024EEDC
  return; // 8024EEE0
}

// __HBMSYNGetVoiceFader
void f_8024EEE4(Ctx* __restrict c) {
  trace_call(0x8024EEE4u);
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8024EEE4
  c->r[4]=R32(c->r[3]+0x00000008u); // 8024EEE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024EEEC
  c->r[3]=c->r[4]+c->r[0]; // 8024EEF0
  c->r[4]=R32(c->r[4]+0x00000068u); // 8024EEF4
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 8024EEF8
  c->r[0]=c->r[4]+c->r[0]; // 8024EEFC
  c->r[3]=sraw(c,c->r[0],16); // 8024EF00
  return; // 8024EF04
}

// __HBMSYNUpdateMix
void f_8024EF08(Ctx* __restrict c) {
  trace_call(0x8024EF08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EF08
  c->r[0]=c->lr; // 8024EF0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024EF10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024EF14
  c->r[31]=c->r[3]|c->r[3]; // 8024EF18
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 8024EF1C
  c->r[0]=R32(c->r[31]+0x00000034u); // 8024EF20
  c->r[3]=R32(c->r[3]+0x00000004u); // 8024EF24
  c->r[0]=c->r[4]+c->r[0]; // 8024EF28
  c->r[4]=sraw(c,c->r[0],16); // 8024EF2C
  c->lr=0x8024EF34u; f_8024D4C0(c); // 8024EF30
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 8024EF34
  c->r[4]=R32(c->r[31]+0x00000008u); // 8024EF38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024EF3C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024EF40
  c->r[4]=c->r[4]+c->r[0]; // 8024EF44
  c->r[0]=R32(c->r[4]+0x000000ACu); // 8024EF48
  c->r[4]=sraw(c,c->r[0],16); // 8024EF4C
  c->lr=0x8024EF54u; f_8024D4F8(c); // 8024EF50
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 8024EF54
  c->r[5]=R32(c->r[31]+0x00000008u); // 8024EF58
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024EF5C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024EF60
  c->r[4]=c->r[5]+c->r[0]; // 8024EF64
  c->r[5]=R32(c->r[5]+0x00000068u); // 8024EF68
  c->r[0]=R32(c->r[4]+0x0000006Cu); // 8024EF6C
  c->r[0]=c->r[5]+c->r[0]; // 8024EF70
  c->r[4]=sraw(c,c->r[0],16); // 8024EF74
  c->lr=0x8024EF7Cu; f_8024D5B0(c); // 8024EF78
  c->r[4]=R32(c->r[31]+0x00000008u); // 8024EF7C
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 8024EF80
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024EF84
  c->r[4]=c->r[4]+c->r[0]; // 8024EF88
  c->r[4]=R8(c->r[4]+0x000000ECu); // 8024EF8C
  c->lr=0x8024EF94u; f_8024D530(c); // 8024EF90
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024EF94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024EF98
  c->lr=c->r[0]; // 8024EF9C
  c->r[1]=c->r[1]+0x00000010u; // 8024EFA0
  return; // 8024EFA4
}

// __HBMSYNGetRelativePitch
void f_8024EFA8(Ctx* __restrict c) {
  trace_call(0x8024EFA8u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 8024EFA8
  c->r[7]=0u+0x802A0000u; // 8024EFAC
  c->r[7]=c->r[7]+0x00002F80u; // 8024EFB0
  c->r[0]=sraw(c,c->r[3],16); // 8024EFB4
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); cr0(c,c->r[3]); // 8024EFB8
  if (!crb(c,1)) { goto L_8024F04C; } // 8024EFBC
  c->r[5]=0u+0x1B4F0000u; // 8024EFC0
  c->r[4]=0u+0x51EC0000u; // 8024EFC4
  c->r[0]=c->r[5]+0xFFFF81B5u; // 8024EFC8
  c->r[6]=c->r[7]+0x00000000u; // 8024EFCC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 8024EFD0
  c->r[8]=c->r[4]+0xFFFF851Fu; // 8024EFD4
  c->r[5]=c->r[7]+0x00000190u; // 8024EFD8
  c->r[4]=c->r[7]+0x000001C0u; // 8024EFDC
  c->r[9]=sraw(c,c->r[0],7); // 8024EFE0
  c->r[0]=sraw(c,c->r[0],7); // 8024EFE4
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 8024EFE8
  c->r[10]=rotl(c->r[9],1)&0x00000001u; // 8024EFEC
  c->r[0]=c->r[0]+c->r[7]; // 8024EFF0
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)1200); // 8024EFF4
  c->r[0]=c->r[9]+c->r[10]; // 8024EFF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024EFFC
  c->r[7]=c->r[3]-c->r[7]; // 8024F000
  {uint32_t ea=c->r[5]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8024F004
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 8024F008
  c->r[5]=sraw(c,c->r[0],5); // 8024F00C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[3])>>32); // 8024F010
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 8024F014
  c->r[7]=c->r[5]+c->r[7]; // 8024F018
  c->r[5]=sraw(c,c->r[0],5); // 8024F01C
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8024F020
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F024
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 8024F028
  c->r[0]=c->r[5]+c->r[7]; // 8024F02C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8024F030
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8024F034
  c->r[3]=c->r[3]-c->r[0]; // 8024F038
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8024F03C
  {uint32_t ea=c->r[6]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F040
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8024F044
  return; // 8024F048
L_8024F04C:;
  if (!crb(c,0)) { goto L_8024F0AC; } // 8024F04C
  c->r[4]=0u+0x51EC0000u; // 8024F050
  c->r[0]=c->r[4]+0xFFFF851Fu; // 8024F054
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 8024F058
  c->r[5]=sraw(c,c->r[0],5); // 8024F05C
  c->r[0]=sraw(c,c->r[0],5); // 8024F060
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8024F064
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8024F068
  c->r[0]=c->r[0]+c->r[4]; // 8024F06C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8024F070
  c->r[4]=c->r[5]+c->r[6]; // 8024F074
  c->r[3]=c->r[3]-c->r[0]; cr0(c,c->r[3]); // 8024F078
  if (crb(c,2)) { goto L_8024F088; } // 8024F07C
  c->r[3]=c->r[3]+0x00000064u; // 8024F080
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8024F084
L_8024F088:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8024F088
  c->r[4]=c->r[7]+0x000001F0u; // 8024F08C
  c->r[5]=0u-c->r[0]; // 8024F090
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8024F094
  c->r[3]=c->r[7]+0x00000000u; // 8024F098
  {uint32_t ea=c->r[4]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 8024F09C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F0A0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8024F0A4
  return; // 8024F0A8
L_8024F0AC:;
  c->r[3]=0u+0x80260000u; // 8024F0AC
  {uint32_t ea=c->r[3]+0x00001B58u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024F0B0
  return; // 8024F0B4
}

// __HBMSYNSetupPitch
void f_8024F0B8(Ctx* __restrict c) {
  trace_call(0x8024F0B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F0B8
  c->r[0]=0u+0x43300000u; // 8024F0BC
  c->r[5]=0u+0x80260000u; // 8024F0C0
  c->r[4]=0u+0x80260000u; // 8024F0C4
  c->r[6]=R32(c->r[3]+0x00000018u); // 8024F0C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024F0CC
  c->r[6]=R16(c->r[6]+0x00000002u); // 8024F0D0
  {uint32_t ea=c->r[5]+0x00001B60u; c->f[2]=RF64(ea);} // 8024F0D4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8024F0D8
  {uint32_t ea=c->r[4]+0x00001B5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F0DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8024F0E0
  c->r[5]=R32(c->r[3]+0x00000010u); // 8024F0E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8024F0E8
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8024F0EC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8024F0F0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8024F0F4
  c->r[4]=R8(c->r[5]+0x00000000u); // 8024F0F8
  c->r[0]=c->r[0]-c->r[4]; // 8024F0FC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8024F100
  W32(c->r[3]+0x00000028u,c->r[4]); // 8024F104
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 8024F108
  c->r[0]=c->r[4]+c->r[0]; // 8024F10C
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 8024F110
  W32(c->r[3]+0x00000028u,c->r[0]); // 8024F114
  c->r[1]=c->r[1]+0x00000010u; // 8024F118
  return; // 8024F11C
}

// __HBMSYNSetupSrc
void f_8024F120(Ctx* __restrict c) {
  trace_call(0x8024F120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F120
  c->r[0]=c->lr; // 8024F124
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024F128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024F12C
  c->r[31]=c->r[3]|c->r[3]; // 8024F130
  c->lr=0x8024F138u; f_8024EFA8(c); // 8024F134
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024F138
  c->r[3]=0u+0x80260000u; // 8024F13C
  {uint32_t ea=c->r[3]+0x00001B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F140
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8024F144
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8024F148
  c->lr=0x8024F150u; f_800D48EC(c); // 8024F14C
  c->r[5]=R32(c->r[31]+0x00000004u); // 8024F150
  c->r[6]=0u+0x00000001u; // 8024F154
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 8024F158
  c->r[0]=0u+0x00000000u; // 8024F15C
  W16(c->r[5]+0x00000030u,c->r[6]); // 8024F160
  c->r[5]=R32(c->r[31]+0x00000004u); // 8024F164
  W16(c->r[5]+0x000000CEu,c->r[4]); // 8024F168
  W16(c->r[5]+0x000000D0u,c->r[3]); // 8024F16C
  W16(c->r[5]+0x000000D2u,c->r[0]); // 8024F170
  W16(c->r[5]+0x000000D4u,c->r[0]); // 8024F174
  W16(c->r[5]+0x000000D6u,c->r[0]); // 8024F178
  W16(c->r[5]+0x000000D8u,c->r[0]); // 8024F17C
  W16(c->r[5]+0x000000DAu,c->r[0]); // 8024F180
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024F184
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8024F188
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 8024F18C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8024F190
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024F194
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8024F198
  c->r[0]=c->r[0]|0x00010000u; // 8024F19C
  c->r[0]=c->r[0]|0x00000001u; // 8024F1A0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8024F1A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024F1A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024F1AC
  c->lr=c->r[0]; // 8024F1B0
  c->r[1]=c->r[1]+0x00000010u; // 8024F1B4
  return; // 8024F1B8
}

// __HBMSYNUpdateSrc
void f_8024F1BC(Ctx* __restrict c) {
  trace_call(0x8024F1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F1BC
  c->r[0]=c->lr; // 8024F1C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024F1C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024F1C8
  c->r[31]=c->r[3]|c->r[3]; // 8024F1CC
  c->lr=0x8024F1D4u; f_8024EFA8(c); // 8024F1D0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024F1D4
  c->r[3]=0u+0x80260000u; // 8024F1D8
  {uint32_t ea=c->r[3]+0x00001B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F1DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8024F1E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8024F1E4
  c->lr=0x8024F1ECu; f_800D48EC(c); // 8024F1E8
  c->r[4]=R32(c->r[31]+0x00000004u); // 8024F1EC
  W32(c->r[4]+0x000000CEu,c->r[3]); // 8024F1F0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024F1F4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8024F1F8
  c->r[0]=c->r[0]|0x00020000u; // 8024F1FC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8024F200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024F204
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024F208
  c->lr=c->r[0]; // 8024F20C
  c->r[1]=c->r[1]+0x00000010u; // 8024F210
  return; // 8024F214
}

