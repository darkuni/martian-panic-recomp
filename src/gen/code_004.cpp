#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// Play__16WiiSoundEffect3DFfi
void f_8007BC94(Ctx* __restrict c) {
  trace_call(0x8007BC94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BC94
  c->r[0]=c->lr; // 8007BC98
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007BC9C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8007BCA0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8007BCA4
  c->f[31]=c->f[1]; // 8007BCA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007BCAC
  c->r[31]=c->r[4]|c->r[4]; // 8007BCB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007BCB4
  c->r[30]=c->r[3]|c->r[3]; // 8007BCB8
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007BCBC
  cmps(c,0,(int32_t)c->r[0],0); // 8007BCC0
  if (!crb(c,2)) { goto L_8007BCE0; } // 8007BCC4
  c->r[3]=0u+0x00000308u; // 8007BCC8
  c->lr=0x8007BCD0u; f_8008DC84(c); // 8007BCCC
  cmps(c,0,(int32_t)c->r[3],0); // 8007BCD0
  if (crb(c,2)) { goto L_8007BCDC; } // 8007BCD4
  c->lr=0x8007BCDCu; f_80078EF8(c); // 8007BCD8
L_8007BCDC:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007BCDC
L_8007BCE0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007BCE0
  c->r[5]=c->r[30]|c->r[30]; // 8007BCE4
  c->r[4]=R32(c->r[30]+0x00000004u); // 8007BCE8
  c->r[6]=c->r[31]|c->r[31]; // 8007BCEC
  c->lr=0x8007BCF4u; f_8007A9C8(c); // 8007BCF0
  cmps(c,0,(int32_t)c->r[3],-1); // 8007BCF4
  W32(c->r[30]+0x00000008u,c->r[3]); // 8007BCF8
  if (crb(c,2)) { goto L_8007BD50; } // 8007BCFC
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007BD00
  fcmp(c,0,c->f[0],c->f[31]); // 8007BD04
  if (crb(c,2)) { goto L_8007BD48; } // 8007BD08
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007BD0C
  cmps(c,0,(int32_t)c->r[0],0); // 8007BD10
  if (!crb(c,2)) { goto L_8007BD30; } // 8007BD14
  c->r[3]=0u+0x00000308u; // 8007BD18
  c->lr=0x8007BD20u; f_8008DC84(c); // 8007BD1C
  cmps(c,0,(int32_t)c->r[3],0); // 8007BD20
  if (crb(c,2)) { goto L_8007BD2C; } // 8007BD24
  c->lr=0x8007BD2Cu; f_80078EF8(c); // 8007BD28
L_8007BD2C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007BD2C
L_8007BD30:;
  c->f[1]=c->f[31]; // 8007BD30
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007BD34
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007BD38
  c->r[4]=0u+0x00000005u; // 8007BD3C
  c->r[6]=R32(c->r[30]+0x00000008u); // 8007BD40
  c->lr=0x8007BD48u; f_8007AD3C(c); // 8007BD44
L_8007BD48:;
  c->r[0]=0u+0x00000001u; // 8007BD48
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007BD4C
L_8007BD50:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8007BD50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8007BD54
  c->r[3]=R32(c->r[30]+0x00000008u); // 8007BD58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007BD5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007BD60
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007BD64
  c->lr=c->r[0]; // 8007BD68
  c->r[1]=c->r[1]+0x00000020u; // 8007BD6C
  return; // 8007BD70
}

// Stop__16WiiSoundEffect3DFfi
void f_8007BD74(Ctx* __restrict c) {
  trace_call(0x8007BD74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BD74
  c->r[0]=c->lr; // 8007BD78
  cmps(c,0,(int32_t)c->r[4],-1); // 8007BD7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007BD80
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007BD84
  c->f[31]=c->f[1]; // 8007BD88
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007BD8C
  c->r[31]=c->r[4]|c->r[4]; // 8007BD90
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007BD94
  c->r[30]=c->r[3]|c->r[3]; // 8007BD98
  if (!crb(c,2)) { goto L_8007BDE8; } // 8007BD9C
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007BDA0
  cmps(c,0,(int32_t)c->r[0],0); // 8007BDA4
  if (!crb(c,2)) { goto L_8007BDC4; } // 8007BDA8
  c->r[3]=0u+0x00000308u; // 8007BDAC
  c->lr=0x8007BDB4u; f_8008DC84(c); // 8007BDB0
  cmps(c,0,(int32_t)c->r[3],0); // 8007BDB4
  if (crb(c,2)) { goto L_8007BDC0; } // 8007BDB8
  c->lr=0x8007BDC0u; f_80078EF8(c); // 8007BDBC
L_8007BDC0:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007BDC0
L_8007BDC4:;
  c->f[1]=c->f[31]; // 8007BDC4
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007BDC8
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007BDCC
  c->r[4]=0u+0x00000000u; // 8007BDD0
  c->r[6]=R32(c->r[30]+0x00000008u); // 8007BDD4
  c->lr=0x8007BDDCu; f_8007AD3C(c); // 8007BDD8
  c->r[0]=0u+0xFFFFFFFFu; // 8007BDDC
  W32(c->r[30]+0x00000008u,c->r[0]); // 8007BDE0
  goto L_8007BE24; // 8007BDE4
L_8007BDE8:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007BDE8
  cmps(c,0,(int32_t)c->r[0],0); // 8007BDEC
  if (!crb(c,2)) { goto L_8007BE0C; } // 8007BDF0
  c->r[3]=0u+0x00000308u; // 8007BDF4
  c->lr=0x8007BDFCu; f_8008DC84(c); // 8007BDF8
  cmps(c,0,(int32_t)c->r[3],0); // 8007BDFC
  if (crb(c,2)) { goto L_8007BE08; } // 8007BE00
  c->lr=0x8007BE08u; f_80078EF8(c); // 8007BE04
L_8007BE08:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007BE08
L_8007BE0C:;
  c->f[1]=c->f[31]; // 8007BE0C
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007BE10
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007BE14
  c->r[6]=c->r[31]|c->r[31]; // 8007BE18
  c->r[4]=0u+0x00000000u; // 8007BE1C
  c->lr=0x8007BE24u; f_8007AD3C(c); // 8007BE20
L_8007BE24:;
  c->r[0]=0u+0x00000003u; // 8007BE24
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007BE28
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007BE2C
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007BE30
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007BE34
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007BE38
  c->lr=c->r[0]; // 8007BE3C
  c->r[1]=c->r[1]+0x00000020u; // 8007BE40
  return; // 8007BE44
}

// PausePlay__16WiiSoundEffect3DFi
void f_8007BE48(Ctx* __restrict c) {
  trace_call(0x8007BE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BE48
  c->r[0]=c->lr; // 8007BE4C
  cmps(c,0,(int32_t)c->r[4],-1); // 8007BE50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007BE54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007BE58
  c->r[31]=c->r[4]|c->r[4]; // 8007BE5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007BE60
  c->r[30]=c->r[3]|c->r[3]; // 8007BE64
  if (!crb(c,2)) { goto L_8007BEAC; } // 8007BE68
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007BE6C
  cmps(c,0,(int32_t)c->r[0],0); // 8007BE70
  if (!crb(c,2)) { goto L_8007BE90; } // 8007BE74
  c->r[3]=0u+0x00000308u; // 8007BE78
  c->lr=0x8007BE80u; f_8008DC84(c); // 8007BE7C
  cmps(c,0,(int32_t)c->r[3],0); // 8007BE80
  if (crb(c,2)) { goto L_8007BE8C; } // 8007BE84
  c->lr=0x8007BE8Cu; f_80078EF8(c); // 8007BE88
L_8007BE8C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007BE8C
L_8007BE90:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007BE90
  c->r[4]=0u+0x00000001u; // 8007BE94
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007BE98
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007BE9C
  c->r[6]=R32(c->r[30]+0x00000008u); // 8007BEA0
  c->lr=0x8007BEA8u; f_8007AD3C(c); // 8007BEA4
  goto L_8007BEE8; // 8007BEA8
L_8007BEAC:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007BEAC
  cmps(c,0,(int32_t)c->r[0],0); // 8007BEB0
  if (!crb(c,2)) { goto L_8007BED0; } // 8007BEB4
  c->r[3]=0u+0x00000308u; // 8007BEB8
  c->lr=0x8007BEC0u; f_8008DC84(c); // 8007BEBC
  cmps(c,0,(int32_t)c->r[3],0); // 8007BEC0
  if (crb(c,2)) { goto L_8007BECC; } // 8007BEC4
  c->lr=0x8007BECCu; f_80078EF8(c); // 8007BEC8
L_8007BECC:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007BECC
L_8007BED0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007BED0
  c->r[6]=c->r[31]|c->r[31]; // 8007BED4
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007BED8
  c->r[4]=0u+0x00000001u; // 8007BEDC
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007BEE0
  c->lr=0x8007BEE8u; f_8007AD3C(c); // 8007BEE4
L_8007BEE8:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 8007BEE8
  cmps(c,0,(int32_t)c->r[0],2); // 8007BEEC
  if (!crb(c,2)) { goto L_8007BF00; } // 8007BEF0
  c->r[0]=0u+0x00000001u; // 8007BEF4
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007BEF8
  goto L_8007BF10; // 8007BEFC
L_8007BF00:;
  cmps(c,0,(int32_t)c->r[0],1); // 8007BF00
  if (!crb(c,2)) { goto L_8007BF10; } // 8007BF04
  c->r[0]=0u+0x00000002u; // 8007BF08
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007BF0C
L_8007BF10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007BF10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007BF14
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007BF18
  c->lr=c->r[0]; // 8007BF1C
  c->r[1]=c->r[1]+0x00000010u; // 8007BF20
  return; // 8007BF24
}

// SetLocation__16WiiSoundEffect3DF7Vector3i
void f_8007BF28(Ctx* __restrict c) {
  trace_call(0x8007BF28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BF28
  c->r[0]=c->lr; // 8007BF2C
  cmps(c,0,(int32_t)c->r[5],-1); // 8007BF30
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007BF34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007BF38
  c->r[31]=c->r[5]|c->r[5]; // 8007BF3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007BF40
  c->r[30]=c->r[4]|c->r[4]; // 8007BF44
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007BF48
  c->r[29]=c->r[3]|c->r[3]; // 8007BF4C
  if (!crb(c,2)) { goto L_8007BF58; } // 8007BF50
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007BF54
L_8007BF58:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007BF58
  cmps(c,0,(int32_t)c->r[0],0); // 8007BF5C
  if (!crb(c,2)) { goto L_8007BF7C; } // 8007BF60
  c->r[3]=0u+0x00000308u; // 8007BF64
  c->lr=0x8007BF6Cu; f_8008DC84(c); // 8007BF68
  cmps(c,0,(int32_t)c->r[3],0); // 8007BF6C
  if (crb(c,2)) { goto L_8007BF78; } // 8007BF70
  c->lr=0x8007BF78u; f_80078EF8(c); // 8007BF74
L_8007BF78:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007BF78
L_8007BF7C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007BF7C
  c->r[6]=c->r[31]|c->r[31]; // 8007BF80
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007BF84
  c->r[4]=0u+0x00000006u; // 8007BF88
  c->r[5]=R32(c->r[29]+0x00000004u); // 8007BF8C
  c->lr=0x8007BF94u; f_8007AD3C(c); // 8007BF90
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007BF94
  cmps(c,0,(int32_t)c->r[0],0); // 8007BF98
  if (!crb(c,2)) { goto L_8007BFB8; } // 8007BF9C
  c->r[3]=0u+0x00000308u; // 8007BFA0
  c->lr=0x8007BFA8u; f_8008DC84(c); // 8007BFA4
  cmps(c,0,(int32_t)c->r[3],0); // 8007BFA8
  if (crb(c,2)) { goto L_8007BFB4; } // 8007BFAC
  c->lr=0x8007BFB4u; f_80078EF8(c); // 8007BFB0
L_8007BFB4:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007BFB4
L_8007BFB8:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007BFB8
  c->r[6]=c->r[31]|c->r[31]; // 8007BFBC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007BFC0
  c->r[4]=0u+0x00000007u; // 8007BFC4
  c->r[5]=R32(c->r[29]+0x00000004u); // 8007BFC8
  c->lr=0x8007BFD0u; f_8007AD3C(c); // 8007BFCC
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007BFD0
  cmps(c,0,(int32_t)c->r[0],0); // 8007BFD4
  if (!crb(c,2)) { goto L_8007BFF4; } // 8007BFD8
  c->r[3]=0u+0x00000308u; // 8007BFDC
  c->lr=0x8007BFE4u; f_8008DC84(c); // 8007BFE0
  cmps(c,0,(int32_t)c->r[3],0); // 8007BFE4
  if (crb(c,2)) { goto L_8007BFF0; } // 8007BFE8
  c->lr=0x8007BFF0u; f_80078EF8(c); // 8007BFEC
L_8007BFF0:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007BFF0
L_8007BFF4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007BFF4
  c->r[6]=c->r[31]|c->r[31]; // 8007BFF8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007BFFC
  c->r[4]=0u+0x00000008u; // 8007C000
  c->r[5]=R32(c->r[29]+0x00000004u); // 8007C004
  c->lr=0x8007C00Cu; f_8007AD3C(c); // 8007C008
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C00C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007C010
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007C014
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007C018
  c->lr=c->r[0]; // 8007C01C
  c->r[1]=c->r[1]+0x00000020u; // 8007C020
  return; // 8007C024
}

// GetLocation__16WiiSoundEffect3DFi
void f_8007C028(Ctx* __restrict c) {
  trace_call(0x8007C028u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C028
  c->r[0]=c->lr; // 8007C02C
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007C030
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007C034
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007C038
  c->r[31]=c->r[5]|c->r[5]; // 8007C03C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007C040
  c->r[30]=c->r[4]|c->r[4]; // 8007C044
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007C048
  c->r[29]=c->r[3]|c->r[3]; // 8007C04C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8007C050
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8007C054
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8007C058
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C05C
  cmps(c,0,(int32_t)c->r[0],0); // 8007C060
  if (!crb(c,2)) { goto L_8007C080; } // 8007C064
  c->r[3]=0u+0x00000308u; // 8007C068
  c->lr=0x8007C070u; f_8008DC84(c); // 8007C06C
  cmps(c,0,(int32_t)c->r[3],0); // 8007C070
  if (crb(c,2)) { goto L_8007C07C; } // 8007C074
  c->lr=0x8007C07Cu; f_80078EF8(c); // 8007C078
L_8007C07C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C07C
L_8007C080:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C080
  c->r[6]=c->r[31]|c->r[31]; // 8007C084
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007C088
  c->r[4]=0u+0x00000006u; // 8007C08C
  c->lr=0x8007C094u; f_8007B10C(c); // 8007C090
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 8007C094
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C098
  cmps(c,0,(int32_t)c->r[0],0); // 8007C09C
  if (!crb(c,2)) { goto L_8007C0BC; } // 8007C0A0
  c->r[3]=0u+0x00000308u; // 8007C0A4
  c->lr=0x8007C0ACu; f_8008DC84(c); // 8007C0A8
  cmps(c,0,(int32_t)c->r[3],0); // 8007C0AC
  if (crb(c,2)) { goto L_8007C0B8; } // 8007C0B0
  c->lr=0x8007C0B8u; f_80078EF8(c); // 8007C0B4
L_8007C0B8:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C0B8
L_8007C0BC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C0BC
  c->r[6]=c->r[31]|c->r[31]; // 8007C0C0
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007C0C4
  c->r[4]=0u+0x00000007u; // 8007C0C8
  c->lr=0x8007C0D0u; f_8007B10C(c); // 8007C0CC
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 8007C0D0
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C0D4
  cmps(c,0,(int32_t)c->r[0],0); // 8007C0D8
  if (!crb(c,2)) { goto L_8007C0F8; } // 8007C0DC
  c->r[3]=0u+0x00000308u; // 8007C0E0
  c->lr=0x8007C0E8u; f_8008DC84(c); // 8007C0E4
  cmps(c,0,(int32_t)c->r[3],0); // 8007C0E8
  if (crb(c,2)) { goto L_8007C0F4; } // 8007C0EC
  c->lr=0x8007C0F4u; f_80078EF8(c); // 8007C0F0
L_8007C0F4:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C0F4
L_8007C0F8:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C0F8
  c->r[6]=c->r[31]|c->r[31]; // 8007C0FC
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007C100
  c->r[4]=0u+0x00000008u; // 8007C104
  c->lr=0x8007C10Cu; f_8007B10C(c); // 8007C108
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 8007C10C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007C110
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007C114
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007C118
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C11C
  c->lr=c->r[0]; // 8007C120
  c->r[1]=c->r[1]+0x00000020u; // 8007C124
  return; // 8007C128
}

// CreateSoundEffect3D__8WiiSoundFv
void f_8007C12C(Ctx* __restrict c) {
  trace_call(0x8007C12Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C12C
  c->r[0]=c->lr; // 8007C130
  c->r[3]=0u+0x00000020u; // 8007C134
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C138
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C13C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007C140
  c->lr=0x8007C148u; f_8008DC84(c); // 8007C144
  cmps(c,0,(int32_t)c->r[3],0); // 8007C148
  c->r[31]=c->r[3]|c->r[3]; // 8007C14C
  if (crb(c,2)) { goto L_8007C230; } // 8007C150
  c->r[5]=0u+0x80260000u; // 8007C154
  c->r[4]=0u+0x00000000u; // 8007C158
  c->r[5]=c->r[5]+0x00002828u; // 8007C15C
  W32(c->r[3]+0x00000000u,c->r[5]); // 8007C160
  c->r[0]=0u+0xFFFFFFFFu; // 8007C164
  W32(c->r[3]+0x00000004u,c->r[4]); // 8007C168
  W32(c->r[3]+0x00000008u,c->r[0]); // 8007C16C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8007C170
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C174
  cmps(c,0,(int32_t)c->r[0],0); // 8007C178
  if (!crb(c,2)) { goto L_8007C198; } // 8007C17C
  c->r[3]=0u+0x00000308u; // 8007C180
  c->lr=0x8007C188u; f_8008DC84(c); // 8007C184
  cmps(c,0,(int32_t)c->r[3],0); // 8007C188
  if (crb(c,2)) { goto L_8007C194; } // 8007C18C
  c->lr=0x8007C194u; f_80078EF8(c); // 8007C190
L_8007C194:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C194
L_8007C198:;
  c->r[30]=R32(c->r[13]+0xFFFF8B18u); // 8007C198
  c->r[3]=0u+0x0000000Cu; // 8007C19C
  c->lr=0x8007C1A4u; f_8008DC84(c); // 8007C1A0
  cmps(c,0,(int32_t)c->r[3],0); // 8007C1A4
  if (crb(c,2)) { goto L_8007C1B8; } // 8007C1A8
  c->r[0]=0u+0x00000000u; // 8007C1AC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007C1B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007C1B4
L_8007C1B8:;
  W32(c->r[3]+0x00000008u,c->r[31]); // 8007C1B8
  c->r[4]=R32(c->r[30]+0x00000014u); // 8007C1BC
  cmps(c,0,(int32_t)c->r[4],0); // 8007C1C0
  if (crb(c,2)) { goto L_8007C1CC; } // 8007C1C4
  W32(c->r[4]+0x00000000u,c->r[3]); // 8007C1C8
L_8007C1CC:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 8007C1CC
  c->r[0]=0u+0x00000000u; // 8007C1D0
  W32(c->r[3]+0x00000004u,c->r[4]); // 8007C1D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007C1D8
  W32(c->r[30]+0x00000014u,c->r[3]); // 8007C1DC
  c->r[0]=R32(c->r[30]+0x00000010u); // 8007C1E0
  cmps(c,0,(int32_t)c->r[0],0); // 8007C1E4
  if (!crb(c,2)) { goto L_8007C1F4; } // 8007C1E8
  c->r[0]=R32(c->r[30]+0x00000014u); // 8007C1EC
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007C1F0
L_8007C1F4:;
  c->r[5]=R32(c->r[30]+0x00000018u); // 8007C1F4
  c->r[4]=0u+0x80260000u; // 8007C1F8
  c->r[3]=0u+0x80260000u; // 8007C1FC
  {uint32_t ea=c->r[2]+0xFFFF8B90u; c->f[2]=c->ps1[2]=RF32(ea);} // 8007C200
  c->r[0]=c->r[5]+0x00000001u; // 8007C204
  W32(c->r[30]+0x00000018u,c->r[0]); // 8007C208
  c->r[4]=c->r[4]+0x00002748u; // 8007C20C
  {uint32_t ea=c->r[2]+0xFFFF8B94u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007C210
  W32(c->r[31]+0x00000000u,c->r[4]); // 8007C214
  c->r[3]=c->r[3]+0x00003F60u; // 8007C218
  {uint32_t ea=c->r[2]+0xFFFF8B98u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007C21C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 8007C220
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8007C224
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8007C228
  W32(c->r[31]+0x00000000u,c->r[3]); // 8007C22C
L_8007C230:;
  c->r[3]=c->r[31]|c->r[31]; // 8007C230
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C234
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007C238
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C23C
  c->lr=c->r[0]; // 8007C240
  c->r[1]=c->r[1]+0x00000010u; // 8007C244
  return; // 8007C248
}

// FreeSoundEffect3D__8WiiSoundFP13SoundEffect3D
void f_8007C24C(Ctx* __restrict c) {
  trace_call(0x8007C24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C24C
  c->r[0]=c->lr; // 8007C250
  cmps(c,0,(int32_t)c->r[4],0); // 8007C254
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C25C
  c->r[31]=c->r[4]|c->r[4]; // 8007C260
  if (crb(c,2)) { goto L_8007C2A4; } // 8007C264
  c->r[12]=R32(c->r[31]+0x00000000u); // 8007C268
  c->r[3]=c->r[31]|c->r[31]; // 8007C26C
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007C270
  c->r[4]=0u+0xFFFFFFFFu; // 8007C274
  c->r[12]=R32(c->r[12]+0x00000018u); // 8007C278
  c->ctr=c->r[12]; // 8007C27C
  if (true) { c->lr=0x8007C284u; dispatch(c,c->ctr); } // 8007C280
  cmps(c,0,(int32_t)c->r[31],0); // 8007C284
  if (crb(c,2)) { goto L_8007C2A4; } // 8007C288
  c->r[12]=R32(c->r[31]+0x00000000u); // 8007C28C
  c->r[3]=c->r[31]|c->r[31]; // 8007C290
  c->r[4]=0u+0x00000001u; // 8007C294
  c->r[12]=R32(c->r[12]+0x00000008u); // 8007C298
  c->ctr=c->r[12]; // 8007C29C
  if (true) { c->lr=0x8007C2A4u; dispatch(c,c->ctr); } // 8007C2A0
L_8007C2A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C2A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C2A8
  c->lr=c->r[0]; // 8007C2AC
  c->r[1]=c->r[1]+0x00000010u; // 8007C2B0
  return; // 8007C2B4
}

// CreateFromFile__20WiiSoundEffectStreamFPc
void f_8007C2B8(Ctx* __restrict c) {
  trace_call(0x8007C2B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C2B8
  c->r[0]=c->lr; // 8007C2BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C2C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C2C4
  c->r[31]=c->r[4]|c->r[4]; // 8007C2C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007C2CC
  c->r[30]=c->r[3]|c->r[3]; // 8007C2D0
  c->r[3]=c->r[3]+0x00000014u; // 8007C2D4
  c->lr=0x8007C2DCu; f_800DB9A8(c); // 8007C2D8
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C2DC
  cmps(c,0,(int32_t)c->r[0],0); // 8007C2E0
  if (!crb(c,2)) { goto L_8007C300; } // 8007C2E4
  c->r[3]=0u+0x00000308u; // 8007C2E8
  c->lr=0x8007C2F0u; f_8008DC84(c); // 8007C2EC
  cmps(c,0,(int32_t)c->r[3],0); // 8007C2F0
  if (crb(c,2)) { goto L_8007C2FC; } // 8007C2F4
  c->lr=0x8007C2FCu; f_80078EF8(c); // 8007C2F8
L_8007C2FC:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C2FC
L_8007C300:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C300
  c->r[4]=c->r[31]|c->r[31]; // 8007C304
  c->lr=0x8007C30Cu; f_80079690(c); // 8007C308
  W32(c->r[30]+0x00000004u,c->r[3]); // 8007C30C
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C310
  cmps(c,0,(int32_t)c->r[0],0); // 8007C314
  if (!crb(c,2)) { goto L_8007C334; } // 8007C318
  c->r[3]=0u+0x00000308u; // 8007C31C
  c->lr=0x8007C324u; f_8008DC84(c); // 8007C320
  cmps(c,0,(int32_t)c->r[3],0); // 8007C324
  if (crb(c,2)) { goto L_8007C330; } // 8007C328
  c->lr=0x8007C330u; f_80078EF8(c); // 8007C32C
L_8007C330:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C330
L_8007C334:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8007C334
  c->r[3]=c->r[30]|c->r[30]; // 8007C338
  c->r[12]=R32(c->r[30]+0x00000000u); // 8007C33C
  c->r[4]=0u+0xFFFFFFFFu; // 8007C340
  c->r[5]=R32(c->r[13]+0xFFFF8B18u); // 8007C344
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007C348
  c->r[12]=R32(c->r[12]+0x00000020u); // 8007C34C
  c->r[5]=c->r[5]+c->r[0]; // 8007C350
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8007C354
  c->ctr=c->r[12]; // 8007C358
  if (true) { c->lr=0x8007C360u; dispatch(c,c->ctr); } // 8007C35C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8007C360
  cmps(c,0,(int32_t)c->r[0],0); // 8007C364
  if (crb(c,2)) { goto L_8007C374; } // 8007C368
  c->r[0]=0u+0x00000000u; // 8007C36C
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007C370
L_8007C374:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C378
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007C37C
  c->lr=c->r[0]; // 8007C380
  c->r[1]=c->r[1]+0x00000010u; // 8007C384
  return; // 8007C388
}

// Free__20WiiSoundEffectStreamFv
void f_8007C38C(Ctx* __restrict c) {
  trace_call(0x8007C38Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C38C
  c->r[0]=c->lr; // 8007C390
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007C394
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007C398
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007C39C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007C3A0
  c->r[29]=c->r[3]|c->r[3]; // 8007C3A4
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C3A8
  cmps(c,0,(int32_t)c->r[0],0); // 8007C3AC
  if (!crb(c,2)) { goto L_8007C3CC; } // 8007C3B0
  c->r[3]=0u+0x00000308u; // 8007C3B4
  c->lr=0x8007C3BCu; f_8008DC84(c); // 8007C3B8
  cmps(c,0,(int32_t)c->r[3],0); // 8007C3BC
  if (crb(c,2)) { goto L_8007C3C8; } // 8007C3C0
  c->lr=0x8007C3C8u; f_80078EF8(c); // 8007C3C4
L_8007C3C8:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C3C8
L_8007C3CC:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8007C3CC
  c->r[31]=R32(c->r[13]+0xFFFF8B18u); // 8007C3D0
  cmps(c,0,(int32_t)c->r[3],0); // 8007C3D4
  if (crb(c,2)) { goto L_8007C4EC; } // 8007C3D8
  c->r[0]=0u+0x00000004u; // 8007C3DC
  c->r[6]=c->r[31]|c->r[31]; // 8007C3E0
  c->r[5]=0u+0x00000000u; // 8007C3E4
  c->r[4]=0u+0x00000000u; // 8007C3E8
  c->ctr=c->r[0]; // 8007C3EC
L_8007C3F0:;
  c->r[0]=R32(c->r[6]+0x00000170u); // 8007C3F0
  cmpu(c,0,c->r[0],c->r[29]); // 8007C3F4
  if (!crb(c,2)) { goto L_8007C400; } // 8007C3F8
  W32(c->r[6]+0x00000170u,c->r[4]); // 8007C3FC
L_8007C400:;
  c->r[0]=R32(c->r[6]+0x0000017Cu); // 8007C400
  cmpu(c,0,c->r[0],c->r[29]); // 8007C404
  if (!crb(c,2)) { goto L_8007C410; } // 8007C408
  W32(c->r[6]+0x0000017Cu,c->r[4]); // 8007C40C
L_8007C410:;
  c->r[0]=R32(c->r[6]+0x00000188u); // 8007C410
  cmpu(c,0,c->r[0],c->r[29]); // 8007C414
  if (!crb(c,2)) { goto L_8007C420; } // 8007C418
  W32(c->r[6]+0x00000188u,c->r[4]); // 8007C41C
L_8007C420:;
  c->r[0]=R32(c->r[6]+0x00000194u); // 8007C420
  cmpu(c,0,c->r[0],c->r[29]); // 8007C424
  if (!crb(c,2)) { goto L_8007C430; } // 8007C428
  W32(c->r[6]+0x00000194u,c->r[4]); // 8007C42C
L_8007C430:;
  c->r[0]=R32(c->r[6]+0x000001A0u); // 8007C430
  cmpu(c,0,c->r[0],c->r[29]); // 8007C434
  if (!crb(c,2)) { goto L_8007C440; } // 8007C438
  W32(c->r[6]+0x000001A0u,c->r[4]); // 8007C43C
L_8007C440:;
  c->r[0]=R32(c->r[6]+0x000001ACu); // 8007C440
  cmpu(c,0,c->r[0],c->r[29]); // 8007C444
  if (!crb(c,2)) { goto L_8007C450; } // 8007C448
  W32(c->r[6]+0x000001ACu,c->r[4]); // 8007C44C
L_8007C450:;
  c->r[0]=R32(c->r[6]+0x000001B8u); // 8007C450
  cmpu(c,0,c->r[0],c->r[29]); // 8007C454
  if (!crb(c,2)) { goto L_8007C460; } // 8007C458
  W32(c->r[6]+0x000001B8u,c->r[4]); // 8007C45C
L_8007C460:;
  c->r[0]=R32(c->r[6]+0x000001C4u); // 8007C460
  cmpu(c,0,c->r[0],c->r[29]); // 8007C464
  if (!crb(c,2)) { goto L_8007C470; } // 8007C468
  W32(c->r[6]+0x000001C4u,c->r[4]); // 8007C46C
L_8007C470:;
  c->r[6]=c->r[6]+0x00000060u; // 8007C470
  c->r[5]=c->r[5]+0x00000007u; // 8007C474
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007C3F0; } // 8007C478
  cmps(c,0,(int32_t)c->r[3],0); // 8007C47C
  c->r[30]=R32(c->r[3]+0x0000004Cu); // 8007C480
  if (crb(c,2)) { goto L_8007C49C; } // 8007C484
  c->r[12]=R32(c->r[3]+0x00000000u); // 8007C488
  c->r[4]=0u+0x00000001u; // 8007C48C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8007C490
  c->ctr=c->r[12]; // 8007C494
  if (true) { c->lr=0x8007C49Cu; dispatch(c,c->ctr); } // 8007C498
L_8007C49C:;
  c->r[0]=R32(c->r[30]+0x00000304u); // 8007C49C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8007C4A0
  W32(c->r[30]+0x00000304u,c->r[0]); // 8007C4A4
  if (!crb(c,2)) { goto L_8007C4EC; } // 8007C4A8
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8007C4AC
  cmps(c,0,(int32_t)c->r[0],0); // 8007C4B0
  if (!crb(c,2)) { goto L_8007C4C0; } // 8007C4B4
  c->lr=0x8007C4BCu; f_80080758(c); // 8007C4B8
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8007C4BC
L_8007C4C0:;
  c->r[4]=0u+0x80250000u; // 8007C4C0
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8007C4C4
  c->r[4]=c->r[4]+0x00006B78u; // 8007C4C8
  c->r[4]=c->r[4]+0x00000174u; // 8007C4CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007C4D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8007C4D4
  c->r[12]=R32(c->r[12]+0x00000060u); // 8007C4D8
  c->ctr=c->r[12]; // 8007C4DC
  if (true) { c->lr=0x8007C4E4u; dispatch(c,c->ctr); } // 8007C4E0
  c->r[3]=c->r[31]+0x000000A0u; // 8007C4E4
  c->lr=0x8007C4ECu; f_8021F630(c); // 8007C4E8
L_8007C4EC:;
  c->r[0]=0u+0x00000000u; // 8007C4EC
  W32(c->r[29]+0x00000004u,c->r[0]); // 8007C4F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007C4F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007C4F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007C4FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C500
  c->lr=c->r[0]; // 8007C504
  c->r[1]=c->r[1]+0x00000020u; // 8007C508
  return; // 8007C50C
}

// Play__20WiiSoundEffectStreamFfi
void f_8007C510(Ctx* __restrict c) {
  trace_call(0x8007C510u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C510
  c->r[0]=c->lr; // 8007C514
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007C518
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8007C51C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8007C520
  c->f[31]=c->f[1]; // 8007C524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C528
  c->r[31]=c->r[4]|c->r[4]; // 8007C52C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007C530
  c->r[30]=c->r[3]|c->r[3]; // 8007C534
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C538
  cmps(c,0,(int32_t)c->r[0],0); // 8007C53C
  if (!crb(c,2)) { goto L_8007C55C; } // 8007C540
  c->r[3]=0u+0x00000308u; // 8007C544
  c->lr=0x8007C54Cu; f_8008DC84(c); // 8007C548
  cmps(c,0,(int32_t)c->r[3],0); // 8007C54C
  if (crb(c,2)) { goto L_8007C558; } // 8007C550
  c->lr=0x8007C558u; f_80078EF8(c); // 8007C554
L_8007C558:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C558
L_8007C55C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C55C
  c->r[5]=c->r[30]|c->r[30]; // 8007C560
  c->r[4]=R32(c->r[30]+0x00000004u); // 8007C564
  c->r[6]=c->r[31]|c->r[31]; // 8007C568
  c->lr=0x8007C570u; f_8007A83C(c); // 8007C56C
  cmps(c,0,(int32_t)c->r[3],-1); // 8007C570
  W32(c->r[30]+0x00000008u,c->r[3]); // 8007C574
  if (crb(c,2)) { goto L_8007C5CC; } // 8007C578
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007C57C
  fcmp(c,0,c->f[0],c->f[31]); // 8007C580
  if (crb(c,2)) { goto L_8007C5C4; } // 8007C584
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C588
  cmps(c,0,(int32_t)c->r[0],0); // 8007C58C
  if (!crb(c,2)) { goto L_8007C5AC; } // 8007C590
  c->r[3]=0u+0x00000308u; // 8007C594
  c->lr=0x8007C59Cu; f_8008DC84(c); // 8007C598
  cmps(c,0,(int32_t)c->r[3],0); // 8007C59C
  if (crb(c,2)) { goto L_8007C5A8; } // 8007C5A0
  c->lr=0x8007C5A8u; f_80078EF8(c); // 8007C5A4
L_8007C5A8:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C5A8
L_8007C5AC:;
  c->f[1]=c->f[31]; // 8007C5AC
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C5B0
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007C5B4
  c->r[4]=0u+0x00000005u; // 8007C5B8
  c->r[6]=R32(c->r[30]+0x00000008u); // 8007C5BC
  c->lr=0x8007C5C4u; f_8007AD3C(c); // 8007C5C0
L_8007C5C4:;
  c->r[0]=0u+0x00000001u; // 8007C5C4
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007C5C8
L_8007C5CC:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8007C5CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8007C5D0
  c->r[3]=R32(c->r[30]+0x00000008u); // 8007C5D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C5D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007C5DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C5E0
  c->lr=c->r[0]; // 8007C5E4
  c->r[1]=c->r[1]+0x00000020u; // 8007C5E8
  return; // 8007C5EC
}

// Stop__20WiiSoundEffectStreamFfi
void f_8007C5F0(Ctx* __restrict c) {
  trace_call(0x8007C5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C5F0
  c->r[0]=c->lr; // 8007C5F4
  cmps(c,0,(int32_t)c->r[4],-1); // 8007C5F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007C5FC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007C600
  c->f[31]=c->f[1]; // 8007C604
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007C608
  c->r[31]=c->r[4]|c->r[4]; // 8007C60C
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007C610
  c->r[30]=c->r[3]|c->r[3]; // 8007C614
  if (!crb(c,2)) { goto L_8007C664; } // 8007C618
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C61C
  cmps(c,0,(int32_t)c->r[0],0); // 8007C620
  if (!crb(c,2)) { goto L_8007C640; } // 8007C624
  c->r[3]=0u+0x00000308u; // 8007C628
  c->lr=0x8007C630u; f_8008DC84(c); // 8007C62C
  cmps(c,0,(int32_t)c->r[3],0); // 8007C630
  if (crb(c,2)) { goto L_8007C63C; } // 8007C634
  c->lr=0x8007C63Cu; f_80078EF8(c); // 8007C638
L_8007C63C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C63C
L_8007C640:;
  c->f[1]=c->f[31]; // 8007C640
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C644
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007C648
  c->r[4]=0u+0x00000000u; // 8007C64C
  c->r[6]=R32(c->r[30]+0x00000008u); // 8007C650
  c->lr=0x8007C658u; f_8007AD3C(c); // 8007C654
  c->r[0]=0u+0xFFFFFFFFu; // 8007C658
  W32(c->r[30]+0x00000008u,c->r[0]); // 8007C65C
  goto L_8007C6A0; // 8007C660
L_8007C664:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C664
  cmps(c,0,(int32_t)c->r[0],0); // 8007C668
  if (!crb(c,2)) { goto L_8007C688; } // 8007C66C
  c->r[3]=0u+0x00000308u; // 8007C670
  c->lr=0x8007C678u; f_8008DC84(c); // 8007C674
  cmps(c,0,(int32_t)c->r[3],0); // 8007C678
  if (crb(c,2)) { goto L_8007C684; } // 8007C67C
  c->lr=0x8007C684u; f_80078EF8(c); // 8007C680
L_8007C684:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C684
L_8007C688:;
  c->f[1]=c->f[31]; // 8007C688
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C68C
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007C690
  c->r[6]=c->r[31]|c->r[31]; // 8007C694
  c->r[4]=0u+0x00000000u; // 8007C698
  c->lr=0x8007C6A0u; f_8007AD3C(c); // 8007C69C
L_8007C6A0:;
  c->r[0]=0u+0x00000003u; // 8007C6A0
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007C6A4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007C6A8
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007C6AC
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007C6B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C6B4
  c->lr=c->r[0]; // 8007C6B8
  c->r[1]=c->r[1]+0x00000020u; // 8007C6BC
  return; // 8007C6C0
}

// PausePlay__20WiiSoundEffectStreamFi
void f_8007C6C4(Ctx* __restrict c) {
  trace_call(0x8007C6C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C6C4
  c->r[0]=c->lr; // 8007C6C8
  cmps(c,0,(int32_t)c->r[4],-1); // 8007C6CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C6D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C6D4
  c->r[31]=c->r[4]|c->r[4]; // 8007C6D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007C6DC
  c->r[30]=c->r[3]|c->r[3]; // 8007C6E0
  if (!crb(c,2)) { goto L_8007C728; } // 8007C6E4
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C6E8
  cmps(c,0,(int32_t)c->r[0],0); // 8007C6EC
  if (!crb(c,2)) { goto L_8007C70C; } // 8007C6F0
  c->r[3]=0u+0x00000308u; // 8007C6F4
  c->lr=0x8007C6FCu; f_8008DC84(c); // 8007C6F8
  cmps(c,0,(int32_t)c->r[3],0); // 8007C6FC
  if (crb(c,2)) { goto L_8007C708; } // 8007C700
  c->lr=0x8007C708u; f_80078EF8(c); // 8007C704
L_8007C708:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C708
L_8007C70C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C70C
  c->r[4]=0u+0x00000001u; // 8007C710
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007C714
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007C718
  c->r[6]=R32(c->r[30]+0x00000008u); // 8007C71C
  c->lr=0x8007C724u; f_8007AD3C(c); // 8007C720
  goto L_8007C764; // 8007C724
L_8007C728:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C728
  cmps(c,0,(int32_t)c->r[0],0); // 8007C72C
  if (!crb(c,2)) { goto L_8007C74C; } // 8007C730
  c->r[3]=0u+0x00000308u; // 8007C734
  c->lr=0x8007C73Cu; f_8008DC84(c); // 8007C738
  cmps(c,0,(int32_t)c->r[3],0); // 8007C73C
  if (crb(c,2)) { goto L_8007C748; } // 8007C740
  c->lr=0x8007C748u; f_80078EF8(c); // 8007C744
L_8007C748:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C748
L_8007C74C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007C74C
  c->r[6]=c->r[31]|c->r[31]; // 8007C750
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007C754
  c->r[4]=0u+0x00000001u; // 8007C758
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007C75C
  c->lr=0x8007C764u; f_8007AD3C(c); // 8007C760
L_8007C764:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 8007C764
  cmps(c,0,(int32_t)c->r[0],2); // 8007C768
  if (!crb(c,2)) { goto L_8007C77C; } // 8007C76C
  c->r[0]=0u+0x00000001u; // 8007C770
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007C774
  goto L_8007C78C; // 8007C778
L_8007C77C:;
  cmps(c,0,(int32_t)c->r[0],1); // 8007C77C
  if (!crb(c,2)) { goto L_8007C78C; } // 8007C780
  c->r[0]=0u+0x00000002u; // 8007C784
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007C788
L_8007C78C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C78C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C790
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007C794
  c->lr=c->r[0]; // 8007C798
  c->r[1]=c->r[1]+0x00000010u; // 8007C79C
  return; // 8007C7A0
}

// CreateSoundEffectStream__8WiiSoundFv
void f_8007C7A4(Ctx* __restrict c) {
  trace_call(0x8007C7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C7A4
  c->r[0]=c->lr; // 8007C7A8
  c->r[3]=0u+0x00000054u; // 8007C7AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C7B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C7B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007C7B8
  c->lr=0x8007C7C0u; f_8008DC84(c); // 8007C7BC
  cmps(c,0,(int32_t)c->r[3],0); // 8007C7C0
  c->r[31]=c->r[3]|c->r[3]; // 8007C7C4
  if (crb(c,2)) { goto L_8007C884; } // 8007C7C8
  c->r[5]=0u+0x80260000u; // 8007C7CC
  c->r[4]=0u+0x00000000u; // 8007C7D0
  c->r[5]=c->r[5]+0x00002828u; // 8007C7D4
  W32(c->r[3]+0x00000000u,c->r[5]); // 8007C7D8
  c->r[0]=0u+0xFFFFFFFFu; // 8007C7DC
  W32(c->r[3]+0x00000004u,c->r[4]); // 8007C7E0
  W32(c->r[3]+0x00000008u,c->r[0]); // 8007C7E4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8007C7E8
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007C7EC
  cmps(c,0,(int32_t)c->r[0],0); // 8007C7F0
  if (!crb(c,2)) { goto L_8007C810; } // 8007C7F4
  c->r[3]=0u+0x00000308u; // 8007C7F8
  c->lr=0x8007C800u; f_8008DC84(c); // 8007C7FC
  cmps(c,0,(int32_t)c->r[3],0); // 8007C800
  if (crb(c,2)) { goto L_8007C80C; } // 8007C804
  c->lr=0x8007C80Cu; f_80078EF8(c); // 8007C808
L_8007C80C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007C80C
L_8007C810:;
  c->r[30]=R32(c->r[13]+0xFFFF8B18u); // 8007C810
  c->r[3]=0u+0x0000000Cu; // 8007C814
  c->lr=0x8007C81Cu; f_8008DC84(c); // 8007C818
  cmps(c,0,(int32_t)c->r[3],0); // 8007C81C
  if (crb(c,2)) { goto L_8007C830; } // 8007C820
  c->r[0]=0u+0x00000000u; // 8007C824
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007C828
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007C82C
L_8007C830:;
  W32(c->r[3]+0x00000008u,c->r[31]); // 8007C830
  c->r[4]=R32(c->r[30]+0x00000014u); // 8007C834
  cmps(c,0,(int32_t)c->r[4],0); // 8007C838
  if (crb(c,2)) { goto L_8007C844; } // 8007C83C
  W32(c->r[4]+0x00000000u,c->r[3]); // 8007C840
L_8007C844:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 8007C844
  c->r[0]=0u+0x00000000u; // 8007C848
  W32(c->r[3]+0x00000004u,c->r[4]); // 8007C84C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007C850
  W32(c->r[30]+0x00000014u,c->r[3]); // 8007C854
  c->r[0]=R32(c->r[30]+0x00000010u); // 8007C858
  cmps(c,0,(int32_t)c->r[0],0); // 8007C85C
  if (!crb(c,2)) { goto L_8007C86C; } // 8007C860
  c->r[0]=R32(c->r[30]+0x00000014u); // 8007C864
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007C868
L_8007C86C:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 8007C86C
  c->r[3]=0u+0x80260000u; // 8007C870
  c->r[3]=c->r[3]+0x00003EF0u; // 8007C874
  c->r[0]=c->r[4]+0x00000001u; // 8007C878
  W32(c->r[30]+0x00000018u,c->r[0]); // 8007C87C
  W32(c->r[31]+0x00000000u,c->r[3]); // 8007C880
L_8007C884:;
  c->r[3]=c->r[31]|c->r[31]; // 8007C884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C888
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007C88C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C890
  c->lr=c->r[0]; // 8007C894
  c->r[1]=c->r[1]+0x00000010u; // 8007C898
  return; // 8007C89C
}

// FreeSoundEffectStream__8WiiSoundFP17SoundEffectStream
void f_8007C8A0(Ctx* __restrict c) {
  trace_call(0x8007C8A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C8A0
  c->r[0]=c->lr; // 8007C8A4
  cmps(c,0,(int32_t)c->r[4],0); // 8007C8A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C8B0
  c->r[31]=c->r[4]|c->r[4]; // 8007C8B4
  if (crb(c,2)) { goto L_8007C8F8; } // 8007C8B8
  c->r[12]=R32(c->r[31]+0x00000000u); // 8007C8BC
  c->r[3]=c->r[31]|c->r[31]; // 8007C8C0
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007C8C4
  c->r[4]=0u+0xFFFFFFFFu; // 8007C8C8
  c->r[12]=R32(c->r[12]+0x00000018u); // 8007C8CC
  c->ctr=c->r[12]; // 8007C8D0
  if (true) { c->lr=0x8007C8D8u; dispatch(c,c->ctr); } // 8007C8D4
  cmps(c,0,(int32_t)c->r[31],0); // 8007C8D8
  if (crb(c,2)) { goto L_8007C8F8; } // 8007C8DC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8007C8E0
  c->r[3]=c->r[31]|c->r[31]; // 8007C8E4
  c->r[4]=0u+0x00000001u; // 8007C8E8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8007C8EC
  c->ctr=c->r[12]; // 8007C8F0
  if (true) { c->lr=0x8007C8F8u; dispatch(c,c->ctr); } // 8007C8F4
L_8007C8F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C8F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C8FC
  c->lr=c->r[0]; // 8007C900
  c->r[1]=c->r[1]+0x00000010u; // 8007C904
  return; // 8007C908
}

// DebugPrintLoadedSounds__8WiiSoundFv
void f_8007C90C(Ctx* __restrict c) {
  trace_call(0x8007C90Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C90C
  c->r[0]=c->lr; // 8007C910
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007C914
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007C918
  c->r[26]=c->r[3]|c->r[3]; // 8007C91C
  c->lr=0x8007C924u; f_80078DDC(c); // 8007C920
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8007C924
  cmps(c,0,(int32_t)c->r[0],0); // 8007C928
  if (!crb(c,2)) { goto L_8007C938; } // 8007C92C
  c->lr=0x8007C934u; f_80080758(c); // 8007C930
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8007C934
L_8007C938:;
  c->r[4]=0u+0x80250000u; // 8007C938
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8007C93C
  c->r[30]=c->r[4]+0x00006B78u; // 8007C940
  c->r[4]=c->r[30]+0x00000188u; // 8007C944
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007C948
  c->r[12]=R32(c->r[3]+0x00000000u); // 8007C94C
  c->r[12]=R32(c->r[12]+0x00000060u); // 8007C950
  c->ctr=c->r[12]; // 8007C954
  if (true) { c->lr=0x8007C95Cu; dispatch(c,c->ctr); } // 8007C958
  c->r[28]=R32(c->r[26]+0x00000004u); // 8007C95C
  goto L_8007C9E4; // 8007C960
L_8007C964:;
  c->r[27]=R32(c->r[28]+0x00000008u); // 8007C964
  c->r[3]=c->r[27]+0x00000048u; // 8007C968
  c->lr=0x8007C970u; f_80218F80(c); // 8007C96C
  c->r[31]=c->r[3]|c->r[3]; // 8007C970
  c->r[26]=0u+0x00000000u; // 8007C974
  goto L_8007C9D8; // 8007C978
L_8007C97C:;
  c->r[4]=c->r[26]|c->r[26]; // 8007C97C
  c->r[3]=c->r[27]+0x000001D4u; // 8007C980
  c->lr=0x8007C988u; f_8021EED0(c); // 8007C984
  cmps(c,0,(int32_t)c->r[3],0); // 8007C988
  if (crb(c,2)) { goto L_8007C9D4; } // 8007C98C
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8007C990
  cmps(c,0,(int32_t)c->r[0],0); // 8007C994
  if (!crb(c,2)) { goto L_8007C9A4; } // 8007C998
  c->lr=0x8007C9A0u; f_80080758(c); // 8007C99C
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8007C9A0
L_8007C9A4:;
  c->r[29]=R32(c->r[13]+0xFFFF8B00u); // 8007C9A4
  c->r[4]=c->r[26]|c->r[26]; // 8007C9A8
  c->r[3]=c->r[27]+0x00000048u; // 8007C9AC
  c->lr=0x8007C9B4u; f_80218F90(c); // 8007C9B0
  c->r[5]=c->r[3]|c->r[3]; // 8007C9B4
  c->r[3]=c->r[29]|c->r[29]; // 8007C9B8
  c->r[4]=c->r[30]+0x000001C0u; // 8007C9BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007C9C0
  c->r[12]=R32(c->r[29]+0x00000000u); // 8007C9C4
  c->r[12]=R32(c->r[12]+0x00000060u); // 8007C9C8
  c->ctr=c->r[12]; // 8007C9CC
  if (true) { c->lr=0x8007C9D4u; dispatch(c,c->ctr); } // 8007C9D0
L_8007C9D4:;
  c->r[26]=c->r[26]+0x00000001u; // 8007C9D4
L_8007C9D8:;
  cmpu(c,0,c->r[26],c->r[31]); // 8007C9D8
  if (crb(c,0)) { IRQCHK(c); goto L_8007C97C; } // 8007C9DC
  c->r[28]=R32(c->r[28]+0x00000000u); // 8007C9E0
L_8007C9E4:;
  cmps(c,0,(int32_t)c->r[28],0); // 8007C9E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8007C964; } // 8007C9E8
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8007C9EC
  cmps(c,0,(int32_t)c->r[0],0); // 8007C9F0
  if (!crb(c,2)) { goto L_8007CA00; } // 8007C9F4
  c->lr=0x8007C9FCu; f_80080758(c); // 8007C9F8
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8007C9FC
L_8007CA00:;
  c->r[4]=0u+0x80250000u; // 8007CA00
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8007CA04
  c->r[4]=c->r[4]+0x00006B78u; // 8007CA08
  c->r[4]=c->r[4]+0x000001C4u; // 8007CA0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007CA10
  c->r[12]=R32(c->r[3]+0x00000000u); // 8007CA14
  c->r[12]=R32(c->r[12]+0x00000060u); // 8007CA18
  c->ctr=c->r[12]; // 8007CA1C
  if (true) { c->lr=0x8007CA24u; dispatch(c,c->ctr); } // 8007CA20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007CA24
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007CA28
  c->lr=c->r[0]; // 8007CA2C
  c->r[1]=c->r[1]+0x00000020u; // 8007CA30
  return; // 8007CA34
}

// IsPlaying__20WiiSoundEffectStreamFi
void f_8007CA38(Ctx* __restrict c) {
  trace_call(0x8007CA38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CA38
  c->r[0]=c->lr; // 8007CA3C
  cmps(c,0,(int32_t)c->r[4],-1); // 8007CA40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007CA44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007CA48
  c->r[31]=c->r[4]|c->r[4]; // 8007CA4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007CA50
  c->r[30]=c->r[3]|c->r[3]; // 8007CA54
  if (!crb(c,2)) { goto L_8007CA60; } // 8007CA58
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007CA5C
L_8007CA60:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007CA60
  cmps(c,0,(int32_t)c->r[0],0); // 8007CA64
  if (!crb(c,2)) { goto L_8007CA84; } // 8007CA68
  c->r[3]=0u+0x00000308u; // 8007CA6C
  c->lr=0x8007CA74u; f_8008DC84(c); // 8007CA70
  cmps(c,0,(int32_t)c->r[3],0); // 8007CA74
  if (crb(c,2)) { goto L_8007CA80; } // 8007CA78
  c->lr=0x8007CA80u; f_80078EF8(c); // 8007CA7C
L_8007CA80:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007CA80
L_8007CA84:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007CA84
  c->r[6]=c->r[31]|c->r[31]; // 8007CA88
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007CA8C
  c->r[4]=0u+0x00000000u; // 8007CA90
  c->lr=0x8007CA98u; f_8007B10C(c); // 8007CA94
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007CA98
  fcmp(c,0,c->f[0],c->f[1]); // 8007CA9C
  if (!crb(c,2)) { goto L_8007CAAC; } // 8007CAA0
  c->r[3]=0u+0x00000000u; // 8007CAA4
  goto L_8007CAB0; // 8007CAA8
L_8007CAAC:;
  c->r[3]=0u+0x00000001u; // 8007CAAC
L_8007CAB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007CAB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007CAB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007CAB8
  c->lr=c->r[0]; // 8007CABC
  c->r[1]=c->r[1]+0x00000010u; // 8007CAC0
  return; // 8007CAC4
}

// GetName__20WiiSoundEffectStreamFv
void f_8007CAC8(Ctx* __restrict c) {
  trace_call(0x8007CAC8u);
  c->r[3]=c->r[3]+0x00000014u; // 8007CAC8
  return; // 8007CACC
}

// GetPan__20WiiSoundEffectStreamFi
void f_8007CAD0(Ctx* __restrict c) {
  trace_call(0x8007CAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CAD0
  c->r[0]=c->lr; // 8007CAD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007CAD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007CADC
  c->r[31]=c->r[4]|c->r[4]; // 8007CAE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007CAE4
  c->r[30]=c->r[3]|c->r[3]; // 8007CAE8
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007CAEC
  cmps(c,0,(int32_t)c->r[0],0); // 8007CAF0
  if (!crb(c,2)) { goto L_8007CB10; } // 8007CAF4
  c->r[3]=0u+0x00000308u; // 8007CAF8
  c->lr=0x8007CB00u; f_8008DC84(c); // 8007CAFC
  cmps(c,0,(int32_t)c->r[3],0); // 8007CB00
  if (crb(c,2)) { goto L_8007CB0C; } // 8007CB04
  c->lr=0x8007CB0Cu; f_80078EF8(c); // 8007CB08
L_8007CB0C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007CB0C
L_8007CB10:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007CB10
  c->r[6]=c->r[31]|c->r[31]; // 8007CB14
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007CB18
  c->r[4]=0u+0x00000004u; // 8007CB1C
  c->lr=0x8007CB24u; f_8007B10C(c); // 8007CB20
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007CB24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007CB28
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007CB2C
  c->lr=c->r[0]; // 8007CB30
  c->r[1]=c->r[1]+0x00000010u; // 8007CB34
  return; // 8007CB38
}

// GetPitch__20WiiSoundEffectStreamFi
void f_8007CB3C(Ctx* __restrict c) {
  trace_call(0x8007CB3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CB3C
  c->r[0]=c->lr; // 8007CB40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007CB44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007CB48
  c->r[31]=c->r[4]|c->r[4]; // 8007CB4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007CB50
  c->r[30]=c->r[3]|c->r[3]; // 8007CB54
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007CB58
  cmps(c,0,(int32_t)c->r[0],0); // 8007CB5C
  if (!crb(c,2)) { goto L_8007CB7C; } // 8007CB60
  c->r[3]=0u+0x00000308u; // 8007CB64
  c->lr=0x8007CB6Cu; f_8008DC84(c); // 8007CB68
  cmps(c,0,(int32_t)c->r[3],0); // 8007CB6C
  if (crb(c,2)) { goto L_8007CB78; } // 8007CB70
  c->lr=0x8007CB78u; f_80078EF8(c); // 8007CB74
L_8007CB78:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007CB78
L_8007CB7C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007CB7C
  c->r[6]=c->r[31]|c->r[31]; // 8007CB80
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007CB84
  c->r[4]=0u+0x00000003u; // 8007CB88
  c->lr=0x8007CB90u; f_8007B10C(c); // 8007CB8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007CB90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007CB94
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007CB98
  c->lr=c->r[0]; // 8007CB9C
  c->r[1]=c->r[1]+0x00000010u; // 8007CBA0
  return; // 8007CBA4
}

// GetVolume__20WiiSoundEffectStreamFi
void f_8007CBA8(Ctx* __restrict c) {
  trace_call(0x8007CBA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CBA8
  c->r[0]=c->lr; // 8007CBAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007CBB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007CBB4
  c->r[31]=c->r[4]|c->r[4]; // 8007CBB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007CBBC
  c->r[30]=c->r[3]|c->r[3]; // 8007CBC0
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007CBC4
  cmps(c,0,(int32_t)c->r[0],0); // 8007CBC8
  if (!crb(c,2)) { goto L_8007CBE8; } // 8007CBCC
  c->r[3]=0u+0x00000308u; // 8007CBD0
  c->lr=0x8007CBD8u; f_8008DC84(c); // 8007CBD4
  cmps(c,0,(int32_t)c->r[3],0); // 8007CBD8
  if (crb(c,2)) { goto L_8007CBE4; } // 8007CBDC
  c->lr=0x8007CBE4u; f_80078EF8(c); // 8007CBE0
L_8007CBE4:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007CBE4
L_8007CBE8:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007CBE8
  c->r[6]=c->r[31]|c->r[31]; // 8007CBEC
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007CBF0
  c->r[4]=0u+0x00000002u; // 8007CBF4
  c->lr=0x8007CBFCu; f_8007B10C(c); // 8007CBF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007CBFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007CC00
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007CC04
  c->lr=c->r[0]; // 8007CC08
  c->r[1]=c->r[1]+0x00000010u; // 8007CC0C
  return; // 8007CC10
}

// SetPan__20WiiSoundEffectStreamFfi
void f_8007CC14(Ctx* __restrict c) {
  trace_call(0x8007CC14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CC14
  c->r[0]=c->lr; // 8007CC18
  cmps(c,0,(int32_t)c->r[4],-1); // 8007CC1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007CC20
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007CC24
  c->f[31]=c->f[1]; // 8007CC28
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007CC2C
  c->r[31]=c->r[4]|c->r[4]; // 8007CC30
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007CC34
  c->r[30]=c->r[3]|c->r[3]; // 8007CC38
  if (!crb(c,2)) { goto L_8007CC44; } // 8007CC3C
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007CC40
L_8007CC44:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007CC44
  cmps(c,0,(int32_t)c->r[0],0); // 8007CC48
  if (!crb(c,2)) { goto L_8007CC68; } // 8007CC4C
  c->r[3]=0u+0x00000308u; // 8007CC50
  c->lr=0x8007CC58u; f_8008DC84(c); // 8007CC54
  cmps(c,0,(int32_t)c->r[3],0); // 8007CC58
  if (crb(c,2)) { goto L_8007CC64; } // 8007CC5C
  c->lr=0x8007CC64u; f_80078EF8(c); // 8007CC60
L_8007CC64:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007CC64
L_8007CC68:;
  c->f[1]=c->f[31]; // 8007CC68
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007CC6C
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007CC70
  c->r[6]=c->r[31]|c->r[31]; // 8007CC74
  c->r[4]=0u+0x00000004u; // 8007CC78
  c->lr=0x8007CC80u; f_8007AD3C(c); // 8007CC7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007CC80
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007CC84
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007CC88
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007CC8C
  c->lr=c->r[0]; // 8007CC90
  c->r[1]=c->r[1]+0x00000020u; // 8007CC94
  return; // 8007CC98
}

// SetPitch__20WiiSoundEffectStreamFfi
void f_8007CC9C(Ctx* __restrict c) {
  trace_call(0x8007CC9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CC9C
  c->r[0]=c->lr; // 8007CCA0
  cmps(c,0,(int32_t)c->r[4],-1); // 8007CCA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007CCA8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007CCAC
  c->f[31]=c->f[1]; // 8007CCB0
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007CCB4
  c->r[31]=c->r[4]|c->r[4]; // 8007CCB8
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007CCBC
  c->r[30]=c->r[3]|c->r[3]; // 8007CCC0
  if (!crb(c,2)) { goto L_8007CCCC; } // 8007CCC4
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007CCC8
L_8007CCCC:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007CCCC
  cmps(c,0,(int32_t)c->r[0],0); // 8007CCD0
  if (!crb(c,2)) { goto L_8007CCF0; } // 8007CCD4
  c->r[3]=0u+0x00000308u; // 8007CCD8
  c->lr=0x8007CCE0u; f_8008DC84(c); // 8007CCDC
  cmps(c,0,(int32_t)c->r[3],0); // 8007CCE0
  if (crb(c,2)) { goto L_8007CCEC; } // 8007CCE4
  c->lr=0x8007CCECu; f_80078EF8(c); // 8007CCE8
L_8007CCEC:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007CCEC
L_8007CCF0:;
  c->f[1]=c->f[31]; // 8007CCF0
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007CCF4
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007CCF8
  c->r[6]=c->r[31]|c->r[31]; // 8007CCFC
  c->r[4]=0u+0x00000003u; // 8007CD00
  c->lr=0x8007CD08u; f_8007AD3C(c); // 8007CD04
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007CD08
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007CD0C
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007CD10
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007CD14
  c->lr=c->r[0]; // 8007CD18
  c->r[1]=c->r[1]+0x00000020u; // 8007CD1C
  return; // 8007CD20
}

// SetVolume__20WiiSoundEffectStreamFfi
void f_8007CD24(Ctx* __restrict c) {
  trace_call(0x8007CD24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CD24
  c->r[0]=c->lr; // 8007CD28
  cmps(c,0,(int32_t)c->r[4],-1); // 8007CD2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007CD30
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007CD34
  c->f[31]=c->f[1]; // 8007CD38
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007CD3C
  c->r[31]=c->r[4]|c->r[4]; // 8007CD40
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007CD44
  c->r[30]=c->r[3]|c->r[3]; // 8007CD48
  if (!crb(c,2)) { goto L_8007CD54; } // 8007CD4C
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007CD50
L_8007CD54:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007CD54
  cmps(c,0,(int32_t)c->r[0],0); // 8007CD58
  if (!crb(c,2)) { goto L_8007CD78; } // 8007CD5C
  c->r[3]=0u+0x00000308u; // 8007CD60
  c->lr=0x8007CD68u; f_8008DC84(c); // 8007CD64
  cmps(c,0,(int32_t)c->r[3],0); // 8007CD68
  if (crb(c,2)) { goto L_8007CD74; } // 8007CD6C
  c->lr=0x8007CD74u; f_80078EF8(c); // 8007CD70
L_8007CD74:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007CD74
L_8007CD78:;
  c->f[1]=c->f[31]; // 8007CD78
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007CD7C
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007CD80
  c->r[6]=c->r[31]|c->r[31]; // 8007CD84
  c->r[4]=0u+0x00000002u; // 8007CD88
  c->lr=0x8007CD90u; f_8007AD3C(c); // 8007CD8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007CD90
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007CD94
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007CD98
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007CD9C
  c->lr=c->r[0]; // 8007CDA0
  c->r[1]=c->r[1]+0x00000020u; // 8007CDA4
  return; // 8007CDA8
}

// __dt__20WiiSoundEffectStreamFv
void f_8007CDAC(Ctx* __restrict c) {
  trace_call(0x8007CDACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CDAC
  c->r[0]=c->lr; // 8007CDB0
  cmps(c,0,(int32_t)c->r[3],0); // 8007CDB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007CDB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007CDBC
  c->r[31]=c->r[4]|c->r[4]; // 8007CDC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007CDC4
  c->r[30]=c->r[3]|c->r[3]; // 8007CDC8
  if (crb(c,2)) { goto L_8007CF84; } // 8007CDCC
  c->r[12]=0u+0x80260000u; // 8007CDD0
  c->r[12]=c->r[12]+0x00003EF0u; // 8007CDD4
  W32(c->r[3]+0x00000000u,c->r[12]); // 8007CDD8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007CDDC
  c->ctr=c->r[12]; // 8007CDE0
  if (true) { c->lr=0x8007CDE8u; dispatch(c,c->ctr); } // 8007CDE4
  cmps(c,0,(int32_t)c->r[30],0); // 8007CDE8
  if (crb(c,2)) { goto L_8007CF74; } // 8007CDEC
  c->r[4]=0u+0x80260000u; // 8007CDF0
  c->r[3]=c->r[30]|c->r[30]; // 8007CDF4
  c->r[4]=c->r[4]+0x000026D8u; // 8007CDF8
  W32(c->r[30]+0x00000000u,c->r[4]); // 8007CDFC
  c->r[12]=R32(c->r[30]+0x00000000u); // 8007CE00
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007CE04
  c->ctr=c->r[12]; // 8007CE08
  if (true) { c->lr=0x8007CE10u; dispatch(c,c->ctr); } // 8007CE0C
  cmps(c,0,(int32_t)c->r[30],0); // 8007CE10
  if (crb(c,2)) { goto L_8007CF74; } // 8007CE14
  c->r[4]=0u+0x80260000u; // 8007CE18
  c->r[3]=c->r[30]|c->r[30]; // 8007CE1C
  c->r[4]=c->r[4]+0x000027B8u; // 8007CE20
  W32(c->r[30]+0x00000000u,c->r[4]); // 8007CE24
  c->r[12]=R32(c->r[30]+0x00000000u); // 8007CE28
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007CE2C
  c->ctr=c->r[12]; // 8007CE30
  if (true) { c->lr=0x8007CE38u; dispatch(c,c->ctr); } // 8007CE34
  cmps(c,0,(int32_t)c->r[30],0); // 8007CE38
  if (crb(c,2)) { goto L_8007CF74; } // 8007CE3C
  c->r[4]=0u+0x80260000u; // 8007CE40
  c->r[3]=c->r[30]|c->r[30]; // 8007CE44
  c->r[4]=c->r[4]+0x00002828u; // 8007CE48
  W32(c->r[30]+0x00000000u,c->r[4]); // 8007CE4C
  c->r[12]=R32(c->r[30]+0x00000000u); // 8007CE50
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007CE54
  c->ctr=c->r[12]; // 8007CE58
  if (true) { c->lr=0x8007CE60u; dispatch(c,c->ctr); } // 8007CE5C
  c->r[0]=0u+0x00000000u; // 8007CE60
  W32(c->r[30]+0x00000004u,c->r[0]); // 8007CE64
  W32(c->r[30]+0x00000008u,c->r[0]); // 8007CE68
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007CE6C
  cmps(c,0,(int32_t)c->r[0],0); // 8007CE70
  if (!crb(c,2)) { goto L_8007CE90; } // 8007CE74
  c->r[3]=0u+0x00000308u; // 8007CE78
  c->lr=0x8007CE80u; f_8008DC84(c); // 8007CE7C
  cmps(c,0,(int32_t)c->r[3],0); // 8007CE80
  if (crb(c,2)) { goto L_8007CE8C; } // 8007CE84
  c->lr=0x8007CE8Cu; f_80078EF8(c); // 8007CE88
L_8007CE8C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007CE8C
L_8007CE90:;
  c->r[6]=R32(c->r[13]+0xFFFF8B18u); // 8007CE90
  c->r[3]=R32(c->r[6]+0x00000010u); // 8007CE94
  goto L_8007CEB0; // 8007CE98
L_8007CE9C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8007CE9C
  cmpu(c,0,c->r[0],c->r[30]); // 8007CEA0
  if (!crb(c,2)) { goto L_8007CEAC; } // 8007CEA4
  goto L_8007CEBC; // 8007CEA8
L_8007CEAC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8007CEAC
L_8007CEB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8007CEB0
  if (!crb(c,2)) { IRQCHK(c); goto L_8007CE9C; } // 8007CEB4
  c->r[3]=0u+0x00000000u; // 8007CEB8
L_8007CEBC:;
  cmps(c,1,(int32_t)c->r[3],0); // 8007CEBC
  if (crb(c,6)) { goto L_8007CF74; } // 8007CEC0
  c->r[4]=R32(c->r[6]+0x00000018u); // 8007CEC4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8007CEC8
  W32(c->r[6]+0x00000018u,c->r[0]); // 8007CECC
  c->r[0]=R32(c->r[6]+0x00000010u); // 8007CED0
  cmpu(c,0,c->r[3],c->r[0]); // 8007CED4
  if (!crb(c,2)) { goto L_8007CF1C; } // 8007CED8
  c->r[4]=R32(c->r[3]+0x00000000u); // 8007CEDC
  W32(c->r[6]+0x00000010u,c->r[4]); // 8007CEE0
  cmps(c,0,(int32_t)c->r[4],0); // 8007CEE4
  if (crb(c,2)) { goto L_8007CEF8; } // 8007CEE8
  c->r[0]=0u+0x00000000u; // 8007CEEC
  W32(c->r[4]+0x00000004u,c->r[0]); // 8007CEF0
  goto L_8007CF00; // 8007CEF4
L_8007CEF8:;
  c->r[0]=0u+0x00000000u; // 8007CEF8
  W32(c->r[6]+0x00000014u,c->r[0]); // 8007CEFC
L_8007CF00:;
  c->r[0]=0u+0x00000000u; // 8007CF00
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007CF04
  cmps(c,0,(int32_t)c->r[3],0); // 8007CF08
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007CF0C
  if (crb(c,2)) { goto L_8007CF74; } // 8007CF10
  c->lr=0x8007CF18u; f_8008DE54(c); // 8007CF14
  goto L_8007CF74; // 8007CF18
L_8007CF1C:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8007CF1C
  cmps(c,0,(int32_t)c->r[5],0); // 8007CF20
  if (!crb(c,2)) { goto L_8007CF4C; } // 8007CF24
  c->r[4]=R32(c->r[3]+0x00000004u); // 8007CF28
  c->r[0]=0u+0x00000000u; // 8007CF2C
  W32(c->r[6]+0x00000014u,c->r[4]); // 8007CF30
  W32(c->r[4]+0x00000000u,c->r[0]); // 8007CF34
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007CF38
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007CF3C
  if (crb(c,6)) { goto L_8007CF74; } // 8007CF40
  c->lr=0x8007CF48u; f_8008DE54(c); // 8007CF44
  goto L_8007CF74; // 8007CF48
L_8007CF4C:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8007CF4C
  c->r[0]=0u+0x00000000u; // 8007CF50
  W32(c->r[4]+0x00000000u,c->r[5]); // 8007CF54
  c->r[4]=R32(c->r[3]+0x00000000u); // 8007CF58
  c->r[5]=R32(c->r[3]+0x00000004u); // 8007CF5C
  W32(c->r[4]+0x00000004u,c->r[5]); // 8007CF60
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007CF64
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007CF68
  if (crb(c,6)) { goto L_8007CF74; } // 8007CF6C
  c->lr=0x8007CF74u; f_8008DE54(c); // 8007CF70
L_8007CF74:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007CF74
  if (!crb(c,1)) { goto L_8007CF84; } // 8007CF78
  c->r[3]=c->r[30]|c->r[30]; // 8007CF7C
  c->lr=0x8007CF84u; f_8008DE54(c); // 8007CF80
L_8007CF84:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CF84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007CF88
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007CF8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007CF90
  c->lr=c->r[0]; // 8007CF94
  c->r[1]=c->r[1]+0x00000010u; // 8007CF98
  return; // 8007CF9C
}

// IsPlaying__16WiiSoundEffect3DFi
void f_8007CFA0(Ctx* __restrict c) {
  trace_call(0x8007CFA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CFA0
  c->r[0]=c->lr; // 8007CFA4
  cmps(c,0,(int32_t)c->r[4],-1); // 8007CFA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007CFAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007CFB0
  c->r[31]=c->r[4]|c->r[4]; // 8007CFB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007CFB8
  c->r[30]=c->r[3]|c->r[3]; // 8007CFBC
  if (!crb(c,2)) { goto L_8007CFC8; } // 8007CFC0
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007CFC4
L_8007CFC8:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007CFC8
  cmps(c,0,(int32_t)c->r[0],0); // 8007CFCC
  if (!crb(c,2)) { goto L_8007CFEC; } // 8007CFD0
  c->r[3]=0u+0x00000308u; // 8007CFD4
  c->lr=0x8007CFDCu; f_8008DC84(c); // 8007CFD8
  cmps(c,0,(int32_t)c->r[3],0); // 8007CFDC
  if (crb(c,2)) { goto L_8007CFE8; } // 8007CFE0
  c->lr=0x8007CFE8u; f_80078EF8(c); // 8007CFE4
L_8007CFE8:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007CFE8
L_8007CFEC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007CFEC
  c->r[6]=c->r[31]|c->r[31]; // 8007CFF0
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007CFF4
  c->r[4]=0u+0x00000000u; // 8007CFF8
  c->lr=0x8007D000u; f_8007B10C(c); // 8007CFFC
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007D000
  fcmp(c,0,c->f[0],c->f[1]); // 8007D004
  if (!crb(c,2)) { goto L_8007D014; } // 8007D008
  c->r[3]=0u+0x00000000u; // 8007D00C
  goto L_8007D018; // 8007D010
L_8007D014:;
  c->r[3]=0u+0x00000001u; // 8007D014
L_8007D018:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D018
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D01C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D020
  c->lr=c->r[0]; // 8007D024
  c->r[1]=c->r[1]+0x00000010u; // 8007D028
  return; // 8007D02C
}

// GetName__16WiiSoundEffect3DFv
void f_8007D030(Ctx* __restrict c) {
  trace_call(0x8007D030u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007D030
  cmps(c,0,(int32_t)c->r[3],0); // 8007D034
  if (crb(c,2)) { goto L_8007D044; } // 8007D038
  c->r[3]=c->r[3]+0x00000004u; // 8007D03C
  return; // 8007D040
L_8007D044:;
  c->r[3]=0u+0x80260000u; // 8007D044
  c->r[3]=c->r[3]+0x000040C8u; // 8007D048
  return; // 8007D04C
}

// GetPan__16WiiSoundEffect3DFi
void f_8007D050(Ctx* __restrict c) {
  trace_call(0x8007D050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D050
  c->r[0]=c->lr; // 8007D054
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D05C
  c->r[31]=c->r[4]|c->r[4]; // 8007D060
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D064
  c->r[30]=c->r[3]|c->r[3]; // 8007D068
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D06C
  cmps(c,0,(int32_t)c->r[0],0); // 8007D070
  if (!crb(c,2)) { goto L_8007D090; } // 8007D074
  c->r[3]=0u+0x00000308u; // 8007D078
  c->lr=0x8007D080u; f_8008DC84(c); // 8007D07C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D080
  if (crb(c,2)) { goto L_8007D08C; } // 8007D084
  c->lr=0x8007D08Cu; f_80078EF8(c); // 8007D088
L_8007D08C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D08C
L_8007D090:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D090
  c->r[6]=c->r[31]|c->r[31]; // 8007D094
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D098
  c->r[4]=0u+0x00000004u; // 8007D09C
  c->lr=0x8007D0A4u; f_8007B10C(c); // 8007D0A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D0A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D0A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D0AC
  c->lr=c->r[0]; // 8007D0B0
  c->r[1]=c->r[1]+0x00000010u; // 8007D0B4
  return; // 8007D0B8
}

// GetPitch__16WiiSoundEffect3DFi
void f_8007D0BC(Ctx* __restrict c) {
  trace_call(0x8007D0BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D0BC
  c->r[0]=c->lr; // 8007D0C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D0C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D0C8
  c->r[31]=c->r[4]|c->r[4]; // 8007D0CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D0D0
  c->r[30]=c->r[3]|c->r[3]; // 8007D0D4
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D0D8
  cmps(c,0,(int32_t)c->r[0],0); // 8007D0DC
  if (!crb(c,2)) { goto L_8007D0FC; } // 8007D0E0
  c->r[3]=0u+0x00000308u; // 8007D0E4
  c->lr=0x8007D0ECu; f_8008DC84(c); // 8007D0E8
  cmps(c,0,(int32_t)c->r[3],0); // 8007D0EC
  if (crb(c,2)) { goto L_8007D0F8; } // 8007D0F0
  c->lr=0x8007D0F8u; f_80078EF8(c); // 8007D0F4
L_8007D0F8:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D0F8
L_8007D0FC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D0FC
  c->r[6]=c->r[31]|c->r[31]; // 8007D100
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D104
  c->r[4]=0u+0x00000003u; // 8007D108
  c->lr=0x8007D110u; f_8007B10C(c); // 8007D10C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D110
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D114
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D118
  c->lr=c->r[0]; // 8007D11C
  c->r[1]=c->r[1]+0x00000010u; // 8007D120
  return; // 8007D124
}

// GetVolume__16WiiSoundEffect3DFi
void f_8007D128(Ctx* __restrict c) {
  trace_call(0x8007D128u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D128
  c->r[0]=c->lr; // 8007D12C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D130
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D134
  c->r[31]=c->r[4]|c->r[4]; // 8007D138
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D13C
  c->r[30]=c->r[3]|c->r[3]; // 8007D140
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D144
  cmps(c,0,(int32_t)c->r[0],0); // 8007D148
  if (!crb(c,2)) { goto L_8007D168; } // 8007D14C
  c->r[3]=0u+0x00000308u; // 8007D150
  c->lr=0x8007D158u; f_8008DC84(c); // 8007D154
  cmps(c,0,(int32_t)c->r[3],0); // 8007D158
  if (crb(c,2)) { goto L_8007D164; } // 8007D15C
  c->lr=0x8007D164u; f_80078EF8(c); // 8007D160
L_8007D164:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D164
L_8007D168:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D168
  c->r[6]=c->r[31]|c->r[31]; // 8007D16C
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D170
  c->r[4]=0u+0x00000002u; // 8007D174
  c->lr=0x8007D17Cu; f_8007B10C(c); // 8007D178
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D17C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D180
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D184
  c->lr=c->r[0]; // 8007D188
  c->r[1]=c->r[1]+0x00000010u; // 8007D18C
  return; // 8007D190
}

// SetPan__16WiiSoundEffect3DFfi
void f_8007D194(Ctx* __restrict c) {
  trace_call(0x8007D194u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D194
  c->r[0]=c->lr; // 8007D198
  cmps(c,0,(int32_t)c->r[4],-1); // 8007D19C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D1A0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007D1A4
  c->f[31]=c->f[1]; // 8007D1A8
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007D1AC
  c->r[31]=c->r[4]|c->r[4]; // 8007D1B0
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007D1B4
  c->r[30]=c->r[3]|c->r[3]; // 8007D1B8
  if (!crb(c,2)) { goto L_8007D1C4; } // 8007D1BC
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007D1C0
L_8007D1C4:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D1C4
  cmps(c,0,(int32_t)c->r[0],0); // 8007D1C8
  if (!crb(c,2)) { goto L_8007D1E8; } // 8007D1CC
  c->r[3]=0u+0x00000308u; // 8007D1D0
  c->lr=0x8007D1D8u; f_8008DC84(c); // 8007D1D4
  cmps(c,0,(int32_t)c->r[3],0); // 8007D1D8
  if (crb(c,2)) { goto L_8007D1E4; } // 8007D1DC
  c->lr=0x8007D1E4u; f_80078EF8(c); // 8007D1E0
L_8007D1E4:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D1E4
L_8007D1E8:;
  c->f[1]=c->f[31]; // 8007D1E8
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D1EC
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D1F0
  c->r[6]=c->r[31]|c->r[31]; // 8007D1F4
  c->r[4]=0u+0x00000004u; // 8007D1F8
  c->lr=0x8007D200u; f_8007AD3C(c); // 8007D1FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D200
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007D204
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007D208
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007D20C
  c->lr=c->r[0]; // 8007D210
  c->r[1]=c->r[1]+0x00000020u; // 8007D214
  return; // 8007D218
}

// SetPitch__16WiiSoundEffect3DFfi
void f_8007D21C(Ctx* __restrict c) {
  trace_call(0x8007D21Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D21C
  c->r[0]=c->lr; // 8007D220
  cmps(c,0,(int32_t)c->r[4],-1); // 8007D224
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D228
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007D22C
  c->f[31]=c->f[1]; // 8007D230
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007D234
  c->r[31]=c->r[4]|c->r[4]; // 8007D238
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007D23C
  c->r[30]=c->r[3]|c->r[3]; // 8007D240
  if (!crb(c,2)) { goto L_8007D24C; } // 8007D244
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007D248
L_8007D24C:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D24C
  cmps(c,0,(int32_t)c->r[0],0); // 8007D250
  if (!crb(c,2)) { goto L_8007D270; } // 8007D254
  c->r[3]=0u+0x00000308u; // 8007D258
  c->lr=0x8007D260u; f_8008DC84(c); // 8007D25C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D260
  if (crb(c,2)) { goto L_8007D26C; } // 8007D264
  c->lr=0x8007D26Cu; f_80078EF8(c); // 8007D268
L_8007D26C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D26C
L_8007D270:;
  c->f[1]=c->f[31]; // 8007D270
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D274
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D278
  c->r[6]=c->r[31]|c->r[31]; // 8007D27C
  c->r[4]=0u+0x00000003u; // 8007D280
  c->lr=0x8007D288u; f_8007AD3C(c); // 8007D284
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D288
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007D28C
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007D290
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007D294
  c->lr=c->r[0]; // 8007D298
  c->r[1]=c->r[1]+0x00000020u; // 8007D29C
  return; // 8007D2A0
}

// SetVolume__16WiiSoundEffect3DFfi
void f_8007D2A4(Ctx* __restrict c) {
  trace_call(0x8007D2A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D2A4
  c->r[0]=c->lr; // 8007D2A8
  cmps(c,0,(int32_t)c->r[4],-1); // 8007D2AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D2B0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007D2B4
  c->f[31]=c->f[1]; // 8007D2B8
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007D2BC
  c->r[31]=c->r[4]|c->r[4]; // 8007D2C0
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007D2C4
  c->r[30]=c->r[3]|c->r[3]; // 8007D2C8
  if (!crb(c,2)) { goto L_8007D2D4; } // 8007D2CC
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007D2D0
L_8007D2D4:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D2D4
  cmps(c,0,(int32_t)c->r[0],0); // 8007D2D8
  if (!crb(c,2)) { goto L_8007D2F8; } // 8007D2DC
  c->r[3]=0u+0x00000308u; // 8007D2E0
  c->lr=0x8007D2E8u; f_8008DC84(c); // 8007D2E4
  cmps(c,0,(int32_t)c->r[3],0); // 8007D2E8
  if (crb(c,2)) { goto L_8007D2F4; } // 8007D2EC
  c->lr=0x8007D2F4u; f_80078EF8(c); // 8007D2F0
L_8007D2F4:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D2F4
L_8007D2F8:;
  c->f[1]=c->f[31]; // 8007D2F8
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D2FC
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D300
  c->r[6]=c->r[31]|c->r[31]; // 8007D304
  c->r[4]=0u+0x00000002u; // 8007D308
  c->lr=0x8007D310u; f_8007AD3C(c); // 8007D30C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D310
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007D314
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007D318
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007D31C
  c->lr=c->r[0]; // 8007D320
  c->r[1]=c->r[1]+0x00000020u; // 8007D324
  return; // 8007D328
}

// SetFalloff__16WiiSoundEffect3DFfi
void f_8007D32C(Ctx* __restrict c) {
  trace_call(0x8007D32Cu);
  return; // 8007D32C
}

// SetRange__16WiiSoundEffect3DFffi
void f_8007D330(Ctx* __restrict c) {
  trace_call(0x8007D330u);
  return; // 8007D330
}

// __dt__16WiiSoundEffect3DFv
void f_8007D334(Ctx* __restrict c) {
  trace_call(0x8007D334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D334
  c->r[0]=c->lr; // 8007D338
  cmps(c,0,(int32_t)c->r[3],0); // 8007D33C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D340
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D344
  c->r[31]=c->r[4]|c->r[4]; // 8007D348
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D34C
  c->r[30]=c->r[3]|c->r[3]; // 8007D350
  if (crb(c,2)) { goto L_8007D50C; } // 8007D354
  c->r[12]=0u+0x80260000u; // 8007D358
  c->r[12]=c->r[12]+0x00003F60u; // 8007D35C
  W32(c->r[3]+0x00000000u,c->r[12]); // 8007D360
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007D364
  c->ctr=c->r[12]; // 8007D368
  if (true) { c->lr=0x8007D370u; dispatch(c,c->ctr); } // 8007D36C
  cmps(c,0,(int32_t)c->r[30],0); // 8007D370
  if (crb(c,2)) { goto L_8007D4FC; } // 8007D374
  c->r[4]=0u+0x80260000u; // 8007D378
  c->r[3]=c->r[30]|c->r[30]; // 8007D37C
  c->r[4]=c->r[4]+0x00002748u; // 8007D380
  W32(c->r[30]+0x00000000u,c->r[4]); // 8007D384
  c->r[12]=R32(c->r[30]+0x00000000u); // 8007D388
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007D38C
  c->ctr=c->r[12]; // 8007D390
  if (true) { c->lr=0x8007D398u; dispatch(c,c->ctr); } // 8007D394
  cmps(c,0,(int32_t)c->r[30],0); // 8007D398
  if (crb(c,2)) { goto L_8007D4FC; } // 8007D39C
  c->r[4]=0u+0x80260000u; // 8007D3A0
  c->r[3]=c->r[30]|c->r[30]; // 8007D3A4
  c->r[4]=c->r[4]+0x000027B8u; // 8007D3A8
  W32(c->r[30]+0x00000000u,c->r[4]); // 8007D3AC
  c->r[12]=R32(c->r[30]+0x00000000u); // 8007D3B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007D3B4
  c->ctr=c->r[12]; // 8007D3B8
  if (true) { c->lr=0x8007D3C0u; dispatch(c,c->ctr); } // 8007D3BC
  cmps(c,0,(int32_t)c->r[30],0); // 8007D3C0
  if (crb(c,2)) { goto L_8007D4FC; } // 8007D3C4
  c->r[4]=0u+0x80260000u; // 8007D3C8
  c->r[3]=c->r[30]|c->r[30]; // 8007D3CC
  c->r[4]=c->r[4]+0x00002828u; // 8007D3D0
  W32(c->r[30]+0x00000000u,c->r[4]); // 8007D3D4
  c->r[12]=R32(c->r[30]+0x00000000u); // 8007D3D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007D3DC
  c->ctr=c->r[12]; // 8007D3E0
  if (true) { c->lr=0x8007D3E8u; dispatch(c,c->ctr); } // 8007D3E4
  c->r[0]=0u+0x00000000u; // 8007D3E8
  W32(c->r[30]+0x00000004u,c->r[0]); // 8007D3EC
  W32(c->r[30]+0x00000008u,c->r[0]); // 8007D3F0
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D3F4
  cmps(c,0,(int32_t)c->r[0],0); // 8007D3F8
  if (!crb(c,2)) { goto L_8007D418; } // 8007D3FC
  c->r[3]=0u+0x00000308u; // 8007D400
  c->lr=0x8007D408u; f_8008DC84(c); // 8007D404
  cmps(c,0,(int32_t)c->r[3],0); // 8007D408
  if (crb(c,2)) { goto L_8007D414; } // 8007D40C
  c->lr=0x8007D414u; f_80078EF8(c); // 8007D410
L_8007D414:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D414
L_8007D418:;
  c->r[6]=R32(c->r[13]+0xFFFF8B18u); // 8007D418
  c->r[3]=R32(c->r[6]+0x00000010u); // 8007D41C
  goto L_8007D438; // 8007D420
L_8007D424:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8007D424
  cmpu(c,0,c->r[0],c->r[30]); // 8007D428
  if (!crb(c,2)) { goto L_8007D434; } // 8007D42C
  goto L_8007D444; // 8007D430
L_8007D434:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8007D434
L_8007D438:;
  cmps(c,0,(int32_t)c->r[3],0); // 8007D438
  if (!crb(c,2)) { IRQCHK(c); goto L_8007D424; } // 8007D43C
  c->r[3]=0u+0x00000000u; // 8007D440
L_8007D444:;
  cmps(c,1,(int32_t)c->r[3],0); // 8007D444
  if (crb(c,6)) { goto L_8007D4FC; } // 8007D448
  c->r[4]=R32(c->r[6]+0x00000018u); // 8007D44C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8007D450
  W32(c->r[6]+0x00000018u,c->r[0]); // 8007D454
  c->r[0]=R32(c->r[6]+0x00000010u); // 8007D458
  cmpu(c,0,c->r[3],c->r[0]); // 8007D45C
  if (!crb(c,2)) { goto L_8007D4A4; } // 8007D460
  c->r[4]=R32(c->r[3]+0x00000000u); // 8007D464
  W32(c->r[6]+0x00000010u,c->r[4]); // 8007D468
  cmps(c,0,(int32_t)c->r[4],0); // 8007D46C
  if (crb(c,2)) { goto L_8007D480; } // 8007D470
  c->r[0]=0u+0x00000000u; // 8007D474
  W32(c->r[4]+0x00000004u,c->r[0]); // 8007D478
  goto L_8007D488; // 8007D47C
L_8007D480:;
  c->r[0]=0u+0x00000000u; // 8007D480
  W32(c->r[6]+0x00000014u,c->r[0]); // 8007D484
L_8007D488:;
  c->r[0]=0u+0x00000000u; // 8007D488
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007D48C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D490
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007D494
  if (crb(c,2)) { goto L_8007D4FC; } // 8007D498
  c->lr=0x8007D4A0u; f_8008DE54(c); // 8007D49C
  goto L_8007D4FC; // 8007D4A0
L_8007D4A4:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8007D4A4
  cmps(c,0,(int32_t)c->r[5],0); // 8007D4A8
  if (!crb(c,2)) { goto L_8007D4D4; } // 8007D4AC
  c->r[4]=R32(c->r[3]+0x00000004u); // 8007D4B0
  c->r[0]=0u+0x00000000u; // 8007D4B4
  W32(c->r[6]+0x00000014u,c->r[4]); // 8007D4B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 8007D4BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007D4C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007D4C4
  if (crb(c,6)) { goto L_8007D4FC; } // 8007D4C8
  c->lr=0x8007D4D0u; f_8008DE54(c); // 8007D4CC
  goto L_8007D4FC; // 8007D4D0
L_8007D4D4:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8007D4D4
  c->r[0]=0u+0x00000000u; // 8007D4D8
  W32(c->r[4]+0x00000000u,c->r[5]); // 8007D4DC
  c->r[4]=R32(c->r[3]+0x00000000u); // 8007D4E0
  c->r[5]=R32(c->r[3]+0x00000004u); // 8007D4E4
  W32(c->r[4]+0x00000004u,c->r[5]); // 8007D4E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007D4EC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007D4F0
  if (crb(c,6)) { goto L_8007D4FC; } // 8007D4F4
  c->lr=0x8007D4FCu; f_8008DE54(c); // 8007D4F8
L_8007D4FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007D4FC
  if (!crb(c,1)) { goto L_8007D50C; } // 8007D500
  c->r[3]=c->r[30]|c->r[30]; // 8007D504
  c->lr=0x8007D50Cu; f_8008DE54(c); // 8007D508
L_8007D50C:;
  c->r[3]=c->r[30]|c->r[30]; // 8007D50C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D510
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D514
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D518
  c->lr=c->r[0]; // 8007D51C
  c->r[1]=c->r[1]+0x00000010u; // 8007D520
  return; // 8007D524
}

// IsPlaying__14WiiSoundEffectFi
void f_8007D528(Ctx* __restrict c) {
  trace_call(0x8007D528u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D528
  c->r[0]=c->lr; // 8007D52C
  cmps(c,0,(int32_t)c->r[4],-1); // 8007D530
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D538
  c->r[31]=c->r[4]|c->r[4]; // 8007D53C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D540
  c->r[30]=c->r[3]|c->r[3]; // 8007D544
  if (!crb(c,2)) { goto L_8007D550; } // 8007D548
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007D54C
L_8007D550:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D550
  cmps(c,0,(int32_t)c->r[0],0); // 8007D554
  if (!crb(c,2)) { goto L_8007D574; } // 8007D558
  c->r[3]=0u+0x00000308u; // 8007D55C
  c->lr=0x8007D564u; f_8008DC84(c); // 8007D560
  cmps(c,0,(int32_t)c->r[3],0); // 8007D564
  if (crb(c,2)) { goto L_8007D570; } // 8007D568
  c->lr=0x8007D570u; f_80078EF8(c); // 8007D56C
L_8007D570:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D570
L_8007D574:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D574
  c->r[6]=c->r[31]|c->r[31]; // 8007D578
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D57C
  c->r[4]=0u+0x00000000u; // 8007D580
  c->lr=0x8007D588u; f_8007B10C(c); // 8007D584
  {uint32_t ea=c->r[2]+0xFFFF8B68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007D588
  fcmp(c,0,c->f[0],c->f[1]); // 8007D58C
  if (!crb(c,2)) { goto L_8007D59C; } // 8007D590
  c->r[3]=0u+0x00000000u; // 8007D594
  goto L_8007D5A0; // 8007D598
L_8007D59C:;
  c->r[3]=0u+0x00000001u; // 8007D59C
L_8007D5A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D5A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D5A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D5A8
  c->lr=c->r[0]; // 8007D5AC
  c->r[1]=c->r[1]+0x00000010u; // 8007D5B0
  return; // 8007D5B4
}

// GetName__14WiiSoundEffectFv
void f_8007D5B8(Ctx* __restrict c) {
  trace_call(0x8007D5B8u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007D5B8
  cmps(c,0,(int32_t)c->r[3],0); // 8007D5BC
  if (crb(c,2)) { goto L_8007D5CC; } // 8007D5C0
  c->r[3]=c->r[3]+0x00000004u; // 8007D5C4
  return; // 8007D5C8
L_8007D5CC:;
  c->r[3]=0u+0x80260000u; // 8007D5CC
  c->r[3]=c->r[3]+0x000040D4u; // 8007D5D0
  return; // 8007D5D4
}

// GetPan__14WiiSoundEffectFi
void f_8007D5D8(Ctx* __restrict c) {
  trace_call(0x8007D5D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D5D8
  c->r[0]=c->lr; // 8007D5DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D5E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D5E4
  c->r[31]=c->r[4]|c->r[4]; // 8007D5E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D5EC
  c->r[30]=c->r[3]|c->r[3]; // 8007D5F0
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D5F4
  cmps(c,0,(int32_t)c->r[0],0); // 8007D5F8
  if (!crb(c,2)) { goto L_8007D618; } // 8007D5FC
  c->r[3]=0u+0x00000308u; // 8007D600
  c->lr=0x8007D608u; f_8008DC84(c); // 8007D604
  cmps(c,0,(int32_t)c->r[3],0); // 8007D608
  if (crb(c,2)) { goto L_8007D614; } // 8007D60C
  c->lr=0x8007D614u; f_80078EF8(c); // 8007D610
L_8007D614:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D614
L_8007D618:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D618
  c->r[6]=c->r[31]|c->r[31]; // 8007D61C
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D620
  c->r[4]=0u+0x00000004u; // 8007D624
  c->lr=0x8007D62Cu; f_8007B10C(c); // 8007D628
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D62C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D630
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D634
  c->lr=c->r[0]; // 8007D638
  c->r[1]=c->r[1]+0x00000010u; // 8007D63C
  return; // 8007D640
}

// GetPitch__14WiiSoundEffectFi
void f_8007D644(Ctx* __restrict c) {
  trace_call(0x8007D644u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D644
  c->r[0]=c->lr; // 8007D648
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D64C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D650
  c->r[31]=c->r[4]|c->r[4]; // 8007D654
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D658
  c->r[30]=c->r[3]|c->r[3]; // 8007D65C
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D660
  cmps(c,0,(int32_t)c->r[0],0); // 8007D664
  if (!crb(c,2)) { goto L_8007D684; } // 8007D668
  c->r[3]=0u+0x00000308u; // 8007D66C
  c->lr=0x8007D674u; f_8008DC84(c); // 8007D670
  cmps(c,0,(int32_t)c->r[3],0); // 8007D674
  if (crb(c,2)) { goto L_8007D680; } // 8007D678
  c->lr=0x8007D680u; f_80078EF8(c); // 8007D67C
L_8007D680:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D680
L_8007D684:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D684
  c->r[6]=c->r[31]|c->r[31]; // 8007D688
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D68C
  c->r[4]=0u+0x00000003u; // 8007D690
  c->lr=0x8007D698u; f_8007B10C(c); // 8007D694
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D69C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D6A0
  c->lr=c->r[0]; // 8007D6A4
  c->r[1]=c->r[1]+0x00000010u; // 8007D6A8
  return; // 8007D6AC
}

// GetVolume__14WiiSoundEffectFi
void f_8007D6B0(Ctx* __restrict c) {
  trace_call(0x8007D6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D6B0
  c->r[0]=c->lr; // 8007D6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D6B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D6BC
  c->r[31]=c->r[4]|c->r[4]; // 8007D6C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D6C4
  c->r[30]=c->r[3]|c->r[3]; // 8007D6C8
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D6CC
  cmps(c,0,(int32_t)c->r[0],0); // 8007D6D0
  if (!crb(c,2)) { goto L_8007D6F0; } // 8007D6D4
  c->r[3]=0u+0x00000308u; // 8007D6D8
  c->lr=0x8007D6E0u; f_8008DC84(c); // 8007D6DC
  cmps(c,0,(int32_t)c->r[3],0); // 8007D6E0
  if (crb(c,2)) { goto L_8007D6EC; } // 8007D6E4
  c->lr=0x8007D6ECu; f_80078EF8(c); // 8007D6E8
L_8007D6EC:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D6EC
L_8007D6F0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D6F0
  c->r[6]=c->r[31]|c->r[31]; // 8007D6F4
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D6F8
  c->r[4]=0u+0x00000002u; // 8007D6FC
  c->lr=0x8007D704u; f_8007B10C(c); // 8007D700
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D704
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D708
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D70C
  c->lr=c->r[0]; // 8007D710
  c->r[1]=c->r[1]+0x00000010u; // 8007D714
  return; // 8007D718
}

// SetPan__14WiiSoundEffectFfi
void f_8007D71C(Ctx* __restrict c) {
  trace_call(0x8007D71Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D71C
  c->r[0]=c->lr; // 8007D720
  cmps(c,0,(int32_t)c->r[4],-1); // 8007D724
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D728
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007D72C
  c->f[31]=c->f[1]; // 8007D730
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007D734
  c->r[31]=c->r[4]|c->r[4]; // 8007D738
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007D73C
  c->r[30]=c->r[3]|c->r[3]; // 8007D740
  if (!crb(c,2)) { goto L_8007D74C; } // 8007D744
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007D748
L_8007D74C:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D74C
  cmps(c,0,(int32_t)c->r[0],0); // 8007D750
  if (!crb(c,2)) { goto L_8007D770; } // 8007D754
  c->r[3]=0u+0x00000308u; // 8007D758
  c->lr=0x8007D760u; f_8008DC84(c); // 8007D75C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D760
  if (crb(c,2)) { goto L_8007D76C; } // 8007D764
  c->lr=0x8007D76Cu; f_80078EF8(c); // 8007D768
L_8007D76C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D76C
L_8007D770:;
  c->f[1]=c->f[31]; // 8007D770
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D774
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D778
  c->r[6]=c->r[31]|c->r[31]; // 8007D77C
  c->r[4]=0u+0x00000004u; // 8007D780
  c->lr=0x8007D788u; f_8007AD3C(c); // 8007D784
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D788
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007D78C
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007D790
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007D794
  c->lr=c->r[0]; // 8007D798
  c->r[1]=c->r[1]+0x00000020u; // 8007D79C
  return; // 8007D7A0
}

// SetPitch__14WiiSoundEffectFfi
void f_8007D7A4(Ctx* __restrict c) {
  trace_call(0x8007D7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D7A4
  c->r[0]=c->lr; // 8007D7A8
  cmps(c,0,(int32_t)c->r[4],-1); // 8007D7AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D7B0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007D7B4
  c->f[31]=c->f[1]; // 8007D7B8
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007D7BC
  c->r[31]=c->r[4]|c->r[4]; // 8007D7C0
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007D7C4
  c->r[30]=c->r[3]|c->r[3]; // 8007D7C8
  if (!crb(c,2)) { goto L_8007D7D4; } // 8007D7CC
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007D7D0
L_8007D7D4:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D7D4
  cmps(c,0,(int32_t)c->r[0],0); // 8007D7D8
  if (!crb(c,2)) { goto L_8007D7F8; } // 8007D7DC
  c->r[3]=0u+0x00000308u; // 8007D7E0
  c->lr=0x8007D7E8u; f_8008DC84(c); // 8007D7E4
  cmps(c,0,(int32_t)c->r[3],0); // 8007D7E8
  if (crb(c,2)) { goto L_8007D7F4; } // 8007D7EC
  c->lr=0x8007D7F4u; f_80078EF8(c); // 8007D7F0
L_8007D7F4:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D7F4
L_8007D7F8:;
  c->f[1]=c->f[31]; // 8007D7F8
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D7FC
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D800
  c->r[6]=c->r[31]|c->r[31]; // 8007D804
  c->r[4]=0u+0x00000003u; // 8007D808
  c->lr=0x8007D810u; f_8007AD3C(c); // 8007D80C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D810
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007D814
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007D818
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007D81C
  c->lr=c->r[0]; // 8007D820
  c->r[1]=c->r[1]+0x00000020u; // 8007D824
  return; // 8007D828
}

// SetVolume__14WiiSoundEffectFfi
void f_8007D82C(Ctx* __restrict c) {
  trace_call(0x8007D82Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D82C
  c->r[0]=c->lr; // 8007D830
  cmps(c,0,(int32_t)c->r[4],-1); // 8007D834
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D838
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007D83C
  c->f[31]=c->f[1]; // 8007D840
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007D844
  c->r[31]=c->r[4]|c->r[4]; // 8007D848
  W32(c->r[1]+0x00000010u,c->r[30]); // 8007D84C
  c->r[30]=c->r[3]|c->r[3]; // 8007D850
  if (!crb(c,2)) { goto L_8007D85C; } // 8007D854
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007D858
L_8007D85C:;
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D85C
  cmps(c,0,(int32_t)c->r[0],0); // 8007D860
  if (!crb(c,2)) { goto L_8007D880; } // 8007D864
  c->r[3]=0u+0x00000308u; // 8007D868
  c->lr=0x8007D870u; f_8008DC84(c); // 8007D86C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D870
  if (crb(c,2)) { goto L_8007D87C; } // 8007D874
  c->lr=0x8007D87Cu; f_80078EF8(c); // 8007D878
L_8007D87C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D87C
L_8007D880:;
  c->f[1]=c->f[31]; // 8007D880
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 8007D884
  c->r[5]=R32(c->r[30]+0x00000004u); // 8007D888
  c->r[6]=c->r[31]|c->r[31]; // 8007D88C
  c->r[4]=0u+0x00000002u; // 8007D890
  c->lr=0x8007D898u; f_8007AD3C(c); // 8007D894
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D898
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007D89C
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007D8A0
  c->r[30]=R32(c->r[1]+0x00000010u); // 8007D8A4
  c->lr=c->r[0]; // 8007D8A8
  c->r[1]=c->r[1]+0x00000020u; // 8007D8AC
  return; // 8007D8B0
}

// __dt__14WiiSoundEffectFv
void f_8007D8B4(Ctx* __restrict c) {
  trace_call(0x8007D8B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D8B4
  c->r[0]=c->lr; // 8007D8B8
  cmps(c,0,(int32_t)c->r[3],0); // 8007D8BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D8C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D8C4
  c->r[31]=c->r[4]|c->r[4]; // 8007D8C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D8CC
  c->r[30]=c->r[3]|c->r[3]; // 8007D8D0
  if (crb(c,2)) { goto L_8007DA64; } // 8007D8D4
  c->r[12]=0u+0x80260000u; // 8007D8D8
  c->r[12]=c->r[12]+0x00003FD0u; // 8007D8DC
  W32(c->r[3]+0x00000000u,c->r[12]); // 8007D8E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007D8E4
  c->ctr=c->r[12]; // 8007D8E8
  if (true) { c->lr=0x8007D8F0u; dispatch(c,c->ctr); } // 8007D8EC
  cmps(c,0,(int32_t)c->r[30],0); // 8007D8F0
  if (crb(c,2)) { goto L_8007DA54; } // 8007D8F4
  c->r[4]=0u+0x80260000u; // 8007D8F8
  c->r[3]=c->r[30]|c->r[30]; // 8007D8FC
  c->r[4]=c->r[4]+0x000027B8u; // 8007D900
  W32(c->r[30]+0x00000000u,c->r[4]); // 8007D904
  c->r[12]=R32(c->r[30]+0x00000000u); // 8007D908
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007D90C
  c->ctr=c->r[12]; // 8007D910
  if (true) { c->lr=0x8007D918u; dispatch(c,c->ctr); } // 8007D914
  cmps(c,0,(int32_t)c->r[30],0); // 8007D918
  if (crb(c,2)) { goto L_8007DA54; } // 8007D91C
  c->r[4]=0u+0x80260000u; // 8007D920
  c->r[3]=c->r[30]|c->r[30]; // 8007D924
  c->r[4]=c->r[4]+0x00002828u; // 8007D928
  W32(c->r[30]+0x00000000u,c->r[4]); // 8007D92C
  c->r[12]=R32(c->r[30]+0x00000000u); // 8007D930
  c->r[12]=R32(c->r[12]+0x00000010u); // 8007D934
  c->ctr=c->r[12]; // 8007D938
  if (true) { c->lr=0x8007D940u; dispatch(c,c->ctr); } // 8007D93C
  c->r[0]=0u+0x00000000u; // 8007D940
  W32(c->r[30]+0x00000004u,c->r[0]); // 8007D944
  W32(c->r[30]+0x00000008u,c->r[0]); // 8007D948
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8007D94C
  cmps(c,0,(int32_t)c->r[0],0); // 8007D950
  if (!crb(c,2)) { goto L_8007D970; } // 8007D954
  c->r[3]=0u+0x00000308u; // 8007D958
  c->lr=0x8007D960u; f_8008DC84(c); // 8007D95C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D960
  if (crb(c,2)) { goto L_8007D96C; } // 8007D964
  c->lr=0x8007D96Cu; f_80078EF8(c); // 8007D968
L_8007D96C:;
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8007D96C
L_8007D970:;
  c->r[6]=R32(c->r[13]+0xFFFF8B18u); // 8007D970
  c->r[3]=R32(c->r[6]+0x00000010u); // 8007D974
  goto L_8007D990; // 8007D978
L_8007D97C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8007D97C
  cmpu(c,0,c->r[0],c->r[30]); // 8007D980
  if (!crb(c,2)) { goto L_8007D98C; } // 8007D984
  goto L_8007D99C; // 8007D988
L_8007D98C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8007D98C
L_8007D990:;
  cmps(c,0,(int32_t)c->r[3],0); // 8007D990
  if (!crb(c,2)) { IRQCHK(c); goto L_8007D97C; } // 8007D994
  c->r[3]=0u+0x00000000u; // 8007D998
L_8007D99C:;
  cmps(c,1,(int32_t)c->r[3],0); // 8007D99C
  if (crb(c,6)) { goto L_8007DA54; } // 8007D9A0
  c->r[4]=R32(c->r[6]+0x00000018u); // 8007D9A4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8007D9A8
  W32(c->r[6]+0x00000018u,c->r[0]); // 8007D9AC
  c->r[0]=R32(c->r[6]+0x00000010u); // 8007D9B0
  cmpu(c,0,c->r[3],c->r[0]); // 8007D9B4
  if (!crb(c,2)) { goto L_8007D9FC; } // 8007D9B8
  c->r[4]=R32(c->r[3]+0x00000000u); // 8007D9BC
  W32(c->r[6]+0x00000010u,c->r[4]); // 8007D9C0
  cmps(c,0,(int32_t)c->r[4],0); // 8007D9C4
  if (crb(c,2)) { goto L_8007D9D8; } // 8007D9C8
  c->r[0]=0u+0x00000000u; // 8007D9CC
  W32(c->r[4]+0x00000004u,c->r[0]); // 8007D9D0
  goto L_8007D9E0; // 8007D9D4
L_8007D9D8:;
  c->r[0]=0u+0x00000000u; // 8007D9D8
  W32(c->r[6]+0x00000014u,c->r[0]); // 8007D9DC
L_8007D9E0:;
  c->r[0]=0u+0x00000000u; // 8007D9E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007D9E4
  cmps(c,0,(int32_t)c->r[3],0); // 8007D9E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007D9EC
  if (crb(c,2)) { goto L_8007DA54; } // 8007D9F0
  c->lr=0x8007D9F8u; f_8008DE54(c); // 8007D9F4
  goto L_8007DA54; // 8007D9F8
L_8007D9FC:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8007D9FC
  cmps(c,0,(int32_t)c->r[5],0); // 8007DA00
  if (!crb(c,2)) { goto L_8007DA2C; } // 8007DA04
  c->r[4]=R32(c->r[3]+0x00000004u); // 8007DA08
  c->r[0]=0u+0x00000000u; // 8007DA0C
  W32(c->r[6]+0x00000014u,c->r[4]); // 8007DA10
  W32(c->r[4]+0x00000000u,c->r[0]); // 8007DA14
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007DA18
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007DA1C
  if (crb(c,6)) { goto L_8007DA54; } // 8007DA20
  c->lr=0x8007DA28u; f_8008DE54(c); // 8007DA24
  goto L_8007DA54; // 8007DA28
L_8007DA2C:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8007DA2C
  c->r[0]=0u+0x00000000u; // 8007DA30
  W32(c->r[4]+0x00000000u,c->r[5]); // 8007DA34
  c->r[4]=R32(c->r[3]+0x00000000u); // 8007DA38
  c->r[5]=R32(c->r[3]+0x00000004u); // 8007DA3C
  W32(c->r[4]+0x00000004u,c->r[5]); // 8007DA40
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007DA44
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007DA48
  if (crb(c,6)) { goto L_8007DA54; } // 8007DA4C
  c->lr=0x8007DA54u; f_8008DE54(c); // 8007DA50
L_8007DA54:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007DA54
  if (!crb(c,1)) { goto L_8007DA64; } // 8007DA58
  c->r[3]=c->r[30]|c->r[30]; // 8007DA5C
  c->lr=0x8007DA64u; f_8008DE54(c); // 8007DA60
L_8007DA64:;
  c->r[3]=c->r[30]|c->r[30]; // 8007DA64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007DA68
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007DA6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007DA70
  c->lr=c->r[0]; // 8007DA74
  c->r[1]=c->r[1]+0x00000010u; // 8007DA78
  return; // 8007DA7C
}

// __dt__8WiiSoundFv
void f_8007DA80(Ctx* __restrict c) {
  trace_call(0x8007DA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DA80
  c->r[0]=c->lr; // 8007DA84
  cmps(c,0,(int32_t)c->r[3],0); // 8007DA88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007DA8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007DA90
  c->r[31]=c->r[4]|c->r[4]; // 8007DA94
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007DA98
  c->r[30]=c->r[3]|c->r[3]; // 8007DA9C
  if (crb(c,2)) { goto L_8007DAE4; } // 8007DAA0
  c->r[4]=0u+0x80080000u; // 8007DAA4
  c->r[5]=0u+0x0000000Cu; // 8007DAA8
  c->r[4]=c->r[4]+0xFFFF900Cu; // 8007DAAC
  c->r[6]=0u+0x00000020u; // 8007DAB0
  c->r[3]=c->r[3]+0x00000168u; // 8007DAB4
  c->lr=0x8007DABCu; f_800D4790(c); // 8007DAB8
  c->r[3]=c->r[30]+0x000000A0u; // 8007DABC
  c->r[4]=0u+0xFFFFFFFFu; // 8007DAC0
  c->lr=0x8007DAC8u; f_8021F530(c); // 8007DAC4
  c->r[3]=c->r[30]|c->r[30]; // 8007DAC8
  c->r[4]=0u+0x00000000u; // 8007DACC
  c->lr=0x8007DAD4u; f_80078A78(c); // 8007DAD0
  cmps(c,0,(int32_t)c->r[31],0); // 8007DAD4
  if (!crb(c,1)) { goto L_8007DAE4; } // 8007DAD8
  c->r[3]=c->r[30]|c->r[30]; // 8007DADC
  c->lr=0x8007DAE4u; f_8008DE54(c); // 8007DAE0
L_8007DAE4:;
  c->r[3]=c->r[30]|c->r[30]; // 8007DAE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007DAE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007DAEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007DAF0
  c->lr=c->r[0]; // 8007DAF4
  c->r[1]=c->r[1]+0x00000010u; // 8007DAF8
  return; // 8007DAFC
}

// __dt__13ArchiveHandleFv
void f_8007DB00(Ctx* __restrict c) {
  trace_call(0x8007DB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DB00
  c->r[0]=c->lr; // 8007DB04
  cmps(c,0,(int32_t)c->r[3],0); // 8007DB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007DB0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007DB10
  c->r[31]=c->r[4]|c->r[4]; // 8007DB14
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007DB18
  c->r[30]=c->r[3]|c->r[3]; // 8007DB1C
  if (crb(c,2)) { goto L_8007DB64; } // 8007DB20
  c->r[0]=addc(c,c->r[3],0x000002C0u,0); cr0(c,c->r[0]); // 8007DB24
  if (crb(c,2)) { goto L_8007DB3C; } // 8007DB28
  c->r[3]=addc(c,c->r[0],0x0000000Cu,0); cr0(c,c->r[3]); // 8007DB2C
  if (crb(c,2)) { goto L_8007DB3C; } // 8007DB30
  c->r[4]=0u+0x00000000u; // 8007DB34
  c->lr=0x8007DB3Cu; f_80145E50(c); // 8007DB38
L_8007DB3C:;
  c->r[3]=c->r[30]+0x000001D4u; // 8007DB3C
  c->r[4]=0u+0xFFFFFFFFu; // 8007DB40
  c->lr=0x8007DB48u; f_8021BBF0(c); // 8007DB44
  c->r[3]=c->r[30]+0x00000048u; // 8007DB48
  c->r[4]=0u+0xFFFFFFFFu; // 8007DB4C
  c->lr=0x8007DB54u; f_8020DC80(c); // 8007DB50
  cmps(c,0,(int32_t)c->r[31],0); // 8007DB54
  if (!crb(c,1)) { goto L_8007DB64; } // 8007DB58
  c->r[3]=c->r[30]|c->r[30]; // 8007DB5C
  c->lr=0x8007DB64u; f_8008DE54(c); // 8007DB60
L_8007DB64:;
  c->r[3]=c->r[30]|c->r[30]; // 8007DB64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007DB68
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007DB6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007DB70
  c->lr=c->r[0]; // 8007DB74
  c->r[1]=c->r[1]+0x00000010u; // 8007DB78
  return; // 8007DB7C
}

// CreateAudioDecodeThread
void f_8007DB80(Ctx* __restrict c) {
  trace_call(0x8007DB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DB80
  c->r[0]=c->lr; // 8007DB84
  cmps(c,0,(int32_t)c->r[4],0); // 8007DB88
  c->r[5]=c->r[4]|c->r[4]; // 8007DB8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007DB90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007DB94
  c->r[31]=0u+0x802A0000u; // 8007DB98
  c->r[31]=c->r[31]+0x000077C8u; // 8007DB9C
  if (crb(c,2)) { goto L_8007DBD8; } // 8007DBA0
  c->r[6]=c->r[31]+0x00000318u; // 8007DBA4
  c->r[4]=0u+0x80080000u; // 8007DBA8
  c->r[8]=c->r[3]|c->r[3]; // 8007DBAC
  c->r[3]=c->r[31]+0x00000000u; // 8007DBB0
  c->r[4]=c->r[4]+0xFFFFDCD0u; // 8007DBB4
  c->r[6]=c->r[6]+0x00001000u; // 8007DBB8
  c->r[7]=0u+0x00001000u; // 8007DBBC
  c->r[9]=0u+0x00000001u; // 8007DBC0
  c->lr=0x8007DBC8u; f_800B3B50(c); // 8007DBC4
  cmps(c,0,(int32_t)c->r[3],0); // 8007DBC8
  if (!crb(c,2)) { goto L_8007DC10; } // 8007DBCC
  c->r[3]=0u+0x00000000u; // 8007DBD0
  goto L_8007DC3C; // 8007DBD4
L_8007DBD8:;
  c->r[5]=c->r[31]+0x00000318u; // 8007DBD8
  c->r[4]=0u+0x80080000u; // 8007DBDC
  c->r[8]=c->r[3]|c->r[3]; // 8007DBE0
  c->r[3]=c->r[31]+0x00000000u; // 8007DBE4
  c->r[6]=c->r[5]+0x00001000u; // 8007DBE8
  c->r[4]=c->r[4]+0xFFFFDCA8u; // 8007DBEC
  c->r[5]=0u+0x00000000u; // 8007DBF0
  c->r[7]=0u+0x00001000u; // 8007DBF4
  c->r[9]=0u+0x00000001u; // 8007DBF8
  c->lr=0x8007DC00u; f_800B3B50(c); // 8007DBFC
  cmps(c,0,(int32_t)c->r[3],0); // 8007DC00
  if (!crb(c,2)) { goto L_8007DC10; } // 8007DC04
  c->r[3]=0u+0x00000000u; // 8007DC08
  goto L_8007DC3C; // 8007DC0C
L_8007DC10:;
  c->r[3]=c->r[31]+0x00001318u; // 8007DC10
  c->r[4]=c->r[31]+0x00001358u; // 8007DC14
  c->r[5]=0u+0x00000006u; // 8007DC18
  c->lr=0x8007DC20u; f_800B1018(c); // 8007DC1C
  c->r[3]=c->r[31]+0x00001338u; // 8007DC20
  c->r[4]=c->r[31]+0x00001370u; // 8007DC24
  c->r[5]=0u+0x00000006u; // 8007DC28
  c->lr=0x8007DC30u; f_800B1018(c); // 8007DC2C
  c->r[0]=0u+0x00000001u; // 8007DC30
  W32(c->r[13]+0xFFFF8B38u,c->r[0]); // 8007DC34
  c->r[3]=0u+0x00000001u; // 8007DC38
L_8007DC3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007DC3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007DC40
  c->lr=c->r[0]; // 8007DC44
  c->r[1]=c->r[1]+0x00000010u; // 8007DC48
  return; // 8007DC4C
}

// AudioDecodeThreadStart
void f_8007DC50(Ctx* __restrict c) {
  trace_call(0x8007DC50u);
  c->r[0]=R32(c->r[13]+0xFFFF8B38u); // 8007DC50
  cmps(c,0,(int32_t)c->r[0],0); // 8007DC54
  if (crb(c,2)) return; // 8007DC58
  c->r[3]=0u+0x802A0000u; // 8007DC5C
  c->r[3]=c->r[3]+0x000077C8u; // 8007DC60
  f_800B41C0(c); return; // 8007DC64
  return; // 8007DC68
}

// AudioDecodeThreadCancel
void f_8007DC6C(Ctx* __restrict c) {
  trace_call(0x8007DC6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DC6C
  c->r[0]=c->lr; // 8007DC70
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007DC74
  c->r[0]=R32(c->r[13]+0xFFFF8B38u); // 8007DC78
  cmps(c,0,(int32_t)c->r[0],0); // 8007DC7C
  if (crb(c,2)) { goto L_8007DC98; } // 8007DC80
  c->r[3]=0u+0x802A0000u; // 8007DC84
  c->r[3]=c->r[3]+0x000077C8u; // 8007DC88
  c->lr=0x8007DC90u; f_800B3EA0(c); // 8007DC8C
  c->r[0]=0u+0x00000000u; // 8007DC90
  W32(c->r[13]+0xFFFF8B38u,c->r[0]); // 8007DC94
L_8007DC98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007DC98
  c->lr=c->r[0]; // 8007DC9C
  c->r[1]=c->r[1]+0x00000010u; // 8007DCA0
  return; // 8007DCA4
}

// AudioDecoder__FPv
void f_8007DCA8(Ctx* __restrict c) {
  trace_call(0x8007DCA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DCA8
  c->r[0]=c->lr; // 8007DCAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007DCB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007DCB4
L_8007DCB8:;
  c->lr=0x8007DCBCu; f_80080134(c); // 8007DCB8
  c->r[31]=c->r[3]|c->r[3]; // 8007DCBC
  c->lr=0x8007DCC4u; f_8007DD7C(c); // 8007DCC0
  c->r[3]=c->r[31]|c->r[31]; // 8007DCC4
  c->lr=0x8007DCCCu; f_800801B0(c); // 8007DCC8
  IRQCHK(c); goto L_8007DCB8; // 8007DCCC
}

// AudioDecoderForOnMemory__FPv
void f_8007DCD0(Ctx* __restrict c) {
  trace_call(0x8007DCD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DCD0
  c->r[0]=c->lr; // 8007DCD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007DCD8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8007DCDC
  c->r[31]=0u+0x00000000u; // 8007DCE0
  W32(c->r[1]+0x00000028u,c->r[30]); // 8007DCE4
  c->r[30]=0u+0x802A0000u; // 8007DCE8
  W32(c->r[1]+0x00000024u,c->r[29]); // 8007DCEC
  c->r[29]=0u+0x802B0000u; // 8007DCF0
  c->r[29]=c->r[29]+0xFFFF8B60u; // 8007DCF4
  W32(c->r[1]+0x00000020u,c->r[28]); // 8007DCF8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8007DCFC
  c->r[28]=R32(c->r[29]+0x000000BCu); // 8007DD00
L_8007DD04:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007DD04
  c->r[3]=c->r[1]+0x00000008u; // 8007DD08
  c->lr=0x8007DD10u; f_8007DD7C(c); // 8007DD0C
  c->r[0]=R32(c->r[29]+0x000000C0u); // 8007DD10
  c->r[5]=R32(c->r[29]+0x00000050u); // 8007DD14
  c->r[4]=c->r[31]+c->r[0]; // 8007DD18
  c->r[3]=divwu(c->r[4],c->r[5]); // 8007DD1C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8007DD20
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[5]); // 8007DD24
  c->r[3]=c->r[4]-c->r[3]; // 8007DD28
  cmpu(c,0,c->r[3],c->r[0]); // 8007DD2C
  if (!crb(c,2)) { goto L_8007DD60; } // 8007DD30
  c->r[0]=R8(c->r[29]+0x000000A6u); // 8007DD34
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8007DD38
  if (crb(c,2)) { goto L_8007DD54; } // 8007DD3C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DD40
  c->r[0]=R32(c->r[29]+0x000000B4u); // 8007DD44
  c->r[28]=R32(c->r[3]+0x00000000u); // 8007DD48
  W32(c->r[1]+0x00000008u,c->r[0]); // 8007DD4C
  goto L_8007DD74; // 8007DD50
L_8007DD54:;
  c->r[3]=c->r[30]+0x000077C8u; // 8007DD54
  c->lr=0x8007DD5Cu; f_800B4458(c); // 8007DD58
  goto L_8007DD74; // 8007DD5C
L_8007DD60:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DD60
  c->r[4]=R32(c->r[3]+0x00000000u); // 8007DD64
  c->r[0]=c->r[3]+c->r[28]; // 8007DD68
  W32(c->r[1]+0x00000008u,c->r[0]); // 8007DD6C
  c->r[28]=c->r[4]|c->r[4]; // 8007DD70
L_8007DD74:;
  c->r[31]=c->r[31]+0x00000001u; // 8007DD74
  IRQCHK(c); goto L_8007DD04; // 8007DD78
}

// AudioDecode__FP13THPReadBuffer
void f_8007DD7C(Ctx* __restrict c) {
  trace_call(0x8007DD7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DD7C
  c->r[0]=c->lr; // 8007DD80
  c->r[5]=0u+0x00000001u; // 8007DD84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007DD88
  c->r[4]=c->r[1]+0x00000008u; // 8007DD8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007DD90
  c->r[31]=0u+0x802B0000u; // 8007DD94
  c->r[31]=c->r[31]+0xFFFF8B60u; // 8007DD98
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007DD9C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007DDA0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8007DDA4
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 8007DDA8
  c->r[6]=R32(c->r[3]+0x00000000u); // 8007DDAC
  c->r[3]=0u+0x802B0000u; // 8007DDB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007DDB4
  c->r[28]=c->r[6]+c->r[0]; // 8007DDB8
  c->r[29]=c->r[6]+0x00000008u; // 8007DDBC
  c->r[3]=c->r[3]+0xFFFF8AE0u; // 8007DDC0
  c->r[28]=c->r[28]+0x00000008u; // 8007DDC4
  c->lr=0x8007DDCCu; f_800B1140(c); // 8007DDC8
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 8007DDCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007DDD0
  c->ctr=c->r[0]; // 8007DDD4
  cmpu(c,0,c->r[0],0x00000000u); // 8007DDD8
  if (!crb(c,1)) { goto L_8007DE48; } // 8007DDDC
L_8007DDE0:;
  c->r[0]=R8(c->r[31]+0x00000070u); // 8007DDE0
  cmps(c,0,(int32_t)c->r[0],1); // 8007DDE4
  if (!crb(c,2)) { goto L_8007DE34; } // 8007DDE8
  c->r[4]=0u+0x802B0000u; // 8007DDEC
  c->r[6]=R32(c->r[29]+0x00000000u); // 8007DDF0
  c->r[4]=c->r[4]+0xFFFF8B60u; // 8007DDF4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8007DDF8
  c->r[0]=R32(c->r[4]+0x000000ECu); // 8007DDFC
  c->r[5]=0u+0x00000000u; // 8007DE00
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 8007DE04
  c->r[4]=c->r[28]+c->r[0]; // 8007DE08
  c->lr=0x8007DE10u; f_8023020C(c); // 8007DE0C
  W32(c->r[30]+0x00000008u,c->r[3]); // 8007DE10
  c->r[3]=0u+0x802B0000u; // 8007DE14
  c->r[4]=c->r[30]|c->r[30]; // 8007DE18
  c->r[5]=0u+0x00000001u; // 8007DE1C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8007DE20
  c->r[3]=c->r[3]+0xFFFF8B00u; // 8007DE24
  W32(c->r[30]+0x00000004u,c->r[0]); // 8007DE28
  c->lr=0x8007DE30u; f_800B1078(c); // 8007DE2C
  goto L_8007DE48; // 8007DE30
L_8007DE34:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8007DE34
  c->r[29]=c->r[29]+0x00000004u; // 8007DE38
  c->r[31]=c->r[31]+0x00000001u; // 8007DE3C
  c->r[28]=c->r[28]+c->r[0]; // 8007DE40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007DDE0; } // 8007DE44
L_8007DE48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007DE48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007DE4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007DE50
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007DE54
  c->r[28]=R32(c->r[1]+0x00000010u); // 8007DE58
  c->lr=c->r[0]; // 8007DE5C
  c->r[1]=c->r[1]+0x00000020u; // 8007DE60
  return; // 8007DE64
}

// PushFreeAudioBuffer
void f_8007DE68(Ctx* __restrict c) {
  trace_call(0x8007DE68u);
  c->r[5]=0u+0x802B0000u; // 8007DE68
  c->r[4]=c->r[3]|c->r[3]; // 8007DE6C
  c->r[3]=c->r[5]+0xFFFF8AE0u; // 8007DE70
  c->r[5]=0u+0x00000000u; // 8007DE74
  f_800B1078(c); return; // 8007DE78
}

// PopDecodedAudioBuffer
void f_8007DE7C(Ctx* __restrict c) {
  trace_call(0x8007DE7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DE7C
  c->r[0]=c->lr; // 8007DE80
  c->r[4]=0u+0x802B0000u; // 8007DE84
  c->r[5]=c->r[3]|c->r[3]; // 8007DE88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007DE8C
  c->r[3]=c->r[4]+0xFFFF8B00u; // 8007DE90
  c->r[4]=c->r[1]+0x00000008u; // 8007DE94
  c->lr=0x8007DE9Cu; f_800B1140(c); // 8007DE98
  cmps(c,0,(int32_t)c->r[3],1); // 8007DE9C
  if (!crb(c,2)) { goto L_8007DEAC; } // 8007DEA0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DEA4
  goto L_8007DEB0; // 8007DEA8
L_8007DEAC:;
  c->r[3]=0u+0x00000000u; // 8007DEAC
L_8007DEB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007DEB0
  c->lr=c->r[0]; // 8007DEB4
  c->r[1]=c->r[1]+0x00000010u; // 8007DEB8
  return; // 8007DEBC
}

// THPGXRestore
void f_8007DEC0(Ctx* __restrict c) {
  trace_call(0x8007DEC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DEC0
  c->r[0]=c->lr; // 8007DEC4
  c->r[3]=0u+0x00000001u; // 8007DEC8
  c->r[4]=0u+0x00000007u; // 8007DECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007DED0
  c->r[5]=0u+0x00000000u; // 8007DED4
  c->lr=0x8007DEDCu; f_800D31D4(c); // 8007DED8
  c->r[3]=0u+0x00000000u; // 8007DEDC
  c->r[4]=0u+0x00000001u; // 8007DEE0
  c->r[5]=0u+0x00000000u; // 8007DEE4
  c->r[6]=0u+0x0000000Fu; // 8007DEE8
  c->lr=0x8007DEF0u; f_800D312C(c); // 8007DEEC
  c->r[3]=0u+0x00000001u; // 8007DEF0
  c->lr=0x8007DEF8u; f_800CF424(c); // 8007DEF4
  c->r[3]=0u+0x00000000u; // 8007DEF8
  c->lr=0x8007DF00u; f_800D11EC(c); // 8007DEFC
  c->r[3]=0u+0x00000001u; // 8007DF00
  c->lr=0x8007DF08u; f_800D2C58(c); // 8007DF04
  c->r[3]=0u+0x00000000u; // 8007DF08
  c->r[4]=0u+0x00000000u; // 8007DF0C
  c->r[5]=0u+0x00000000u; // 8007DF10
  c->r[6]=0u+0x000000FFu; // 8007DF14
  c->lr=0x8007DF1Cu; f_800D2AFC(c); // 8007DF18
  c->r[3]=0u+0x00000000u; // 8007DF1C
  c->r[4]=0u+0x00000003u; // 8007DF20
  c->lr=0x8007DF28u; f_800D25FC(c); // 8007DF24
  c->r[3]=0u+0x00000000u; // 8007DF28
  c->r[4]=0u+0x00000000u; // 8007DF2C
  c->r[5]=0u+0x00000000u; // 8007DF30
  c->lr=0x8007DF38u; f_800D2980(c); // 8007DF34
  c->r[3]=0u+0x00000001u; // 8007DF38
  c->r[4]=0u+0x00000000u; // 8007DF3C
  c->r[5]=0u+0x00000000u; // 8007DF40
  c->lr=0x8007DF48u; f_800D2980(c); // 8007DF44
  c->r[3]=0u+0x00000002u; // 8007DF48
  c->r[4]=0u+0x00000000u; // 8007DF4C
  c->r[5]=0u+0x00000000u; // 8007DF50
  c->lr=0x8007DF58u; f_800D2980(c); // 8007DF54
  c->r[3]=0u+0x00000003u; // 8007DF58
  c->r[4]=0u+0x00000000u; // 8007DF5C
  c->r[5]=0u+0x00000000u; // 8007DF60
  c->lr=0x8007DF68u; f_800D2980(c); // 8007DF64
  c->r[3]=0u+0x00000000u; // 8007DF68
  c->r[4]=0u+0x00000000u; // 8007DF6C
  c->r[5]=0u+0x00000001u; // 8007DF70
  c->r[6]=0u+0x00000002u; // 8007DF74
  c->r[7]=0u+0x00000003u; // 8007DF78
  c->lr=0x8007DF80u; f_800D29BC(c); // 8007DF7C
  c->r[3]=0u+0x00000001u; // 8007DF80
  c->r[4]=0u+0x00000000u; // 8007DF84
  c->r[5]=0u+0x00000000u; // 8007DF88
  c->r[6]=0u+0x00000000u; // 8007DF8C
  c->r[7]=0u+0x00000003u; // 8007DF90
  c->lr=0x8007DF98u; f_800D29BC(c); // 8007DF94
  c->r[3]=0u+0x00000002u; // 8007DF98
  c->r[4]=0u+0x00000001u; // 8007DF9C
  c->r[5]=0u+0x00000001u; // 8007DFA0
  c->r[6]=0u+0x00000001u; // 8007DFA4
  c->r[7]=0u+0x00000003u; // 8007DFA8
  c->lr=0x8007DFB0u; f_800D29BC(c); // 8007DFAC
  c->r[3]=0u+0x00000003u; // 8007DFB0
  c->r[4]=0u+0x00000002u; // 8007DFB4
  c->r[5]=0u+0x00000002u; // 8007DFB8
  c->r[6]=0u+0x00000002u; // 8007DFBC
  c->r[7]=0u+0x00000003u; // 8007DFC0
  c->lr=0x8007DFC8u; f_800D29BC(c); // 8007DFC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007DFC8
  c->lr=c->r[0]; // 8007DFCC
  c->r[1]=c->r[1]+0x00000010u; // 8007DFD0
  return; // 8007DFD4
}

// THPGXYuv2RgbSetup
void f_8007DFD8(Ctx* __restrict c) {
  trace_call(0x8007DFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DFD8
  c->r[0]=c->lr; // 8007DFDC
  c->r[4]=0u+0x00000000u; // 8007DFE0
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8007DFE4
  c->r[0]=0u+0x43300000u; // 8007DFE8
  W32(c->r[1]+0x000000ACu,c->r[31]); // 8007DFEC
  W32(c->r[1]+0x000000A8u,c->r[30]); // 8007DFF0
  W32(c->r[1]+0x00000090u,c->r[0]); // 8007DFF4
  c->r[31]=R16(c->r[3]+0x00000004u); // 8007DFF8
  c->r[30]=R16(c->r[3]+0x00000006u); // 8007DFFC
  c->r[3]=0u+0x00000000u; // 8007E000
  W32(c->r[1]+0x00000098u,c->r[0]); // 8007E004
  c->lr=0x8007E00Cu; f_800D3238(c); // 8007E008
  c->r[0]=c->r[30]^0x80000000u; // 8007E00C
  W32(c->r[1]+0x00000094u,c->r[0]); // 8007E010
  c->r[0]=c->r[31]^0x80000000u; // 8007E014
  {uint32_t ea=c->r[2]+0xFFFF8BB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007E018
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8007E01C
  c->r[3]=c->r[1]+0x00000050u; // 8007E020
  {uint32_t ea=c->r[2]+0xFFFF8BC0u; c->f[4]=RF64(ea);} // 8007E024
  c->f[3]=c->f[1]; // 8007E028
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 8007E02C
  c->f[5]=c->f[1]; // 8007E030
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 8007E034
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8007E038
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[6]=c->ps1[6]=RF32(ea);} // 8007E03C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 8007E040
  c->lr=0x8007E048u; f_800B8BB0(c); // 8007E044
  c->r[3]=c->r[1]+0x00000050u; // 8007E048
  c->r[4]=0u+0x00000001u; // 8007E04C
  c->lr=0x8007E054u; f_800D3620(c); // 8007E050
  c->r[0]=c->r[31]^0x80000000u; // 8007E054
  W32(c->r[1]+0x00000094u,c->r[0]); // 8007E058
  c->r[0]=c->r[30]^0x80000000u; // 8007E05C
  {uint32_t ea=c->r[2]+0xFFFF8BB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007E060
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8007E064
  {uint32_t ea=c->r[2]+0xFFFF8BC0u; c->f[4]=RF64(ea);} // 8007E068
  c->f[2]=c->f[1]; // 8007E06C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[3]=RF64(ea);} // 8007E070
  c->f[5]=c->f[1]; // 8007E074
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 8007E078
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8007E07C
  {uint32_t ea=c->r[2]+0xFFFF8BBCu; c->f[6]=c->ps1[6]=RF32(ea);} // 8007E080
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 8007E084
  c->lr=0x8007E08Cu; f_800D39B8(c); // 8007E088
  c->r[5]=c->r[31]|c->r[31]; // 8007E08C
  c->r[6]=c->r[30]|c->r[30]; // 8007E090
  c->r[3]=0u+0x00000000u; // 8007E094
  c->r[4]=0u+0x00000000u; // 8007E098
  c->lr=0x8007E0A0u; f_800D3A04(c); // 8007E09C
  c->r[3]=c->r[1]+0x00000020u; // 8007E0A0
  c->lr=0x8007E0A8u; f_800B7DE0(c); // 8007E0A4
  c->r[3]=c->r[1]+0x00000020u; // 8007E0A8
  c->r[4]=0u+0x00000000u; // 8007E0AC
  c->lr=0x8007E0B4u; f_800D3710(c); // 8007E0B0
  c->r[3]=0u+0x00000000u; // 8007E0B4
  c->lr=0x8007E0BCu; f_800D3818(c); // 8007E0B8
  c->r[3]=0u+0x00000001u; // 8007E0BC
  c->r[4]=0u+0x00000007u; // 8007E0C0
  c->r[5]=0u+0x00000000u; // 8007E0C4
  c->lr=0x8007E0CCu; f_800D31D4(c); // 8007E0C8
  c->r[3]=0u+0x00000000u; // 8007E0CC
  c->r[4]=0u+0x00000001u; // 8007E0D0
  c->r[5]=0u+0x00000000u; // 8007E0D4
  c->r[6]=0u+0x00000000u; // 8007E0D8
  c->lr=0x8007E0E0u; f_800D312C(c); // 8007E0DC
  c->r[3]=0u+0x00000001u; // 8007E0E0
  c->lr=0x8007E0E8u; f_800D317C(c); // 8007E0E4
  c->r[3]=0u+0x00000000u; // 8007E0E8
  c->lr=0x8007E0F0u; f_800D31A8(c); // 8007E0EC
  c->r[3]=0u+0x00000000u; // 8007E0F0
  c->lr=0x8007E0F8u; f_800D08C4(c); // 8007E0F4
  c->r[3]=0u+0x00000000u; // 8007E0F8
  c->lr=0x8007E100u; f_800D11EC(c); // 8007E0FC
  c->r[3]=0u+0x00000002u; // 8007E100
  c->lr=0x8007E108u; f_800CF424(c); // 8007E104
  c->r[3]=0u+0x00000000u; // 8007E108
  c->r[4]=0u+0x00000001u; // 8007E10C
  c->r[5]=0u+0x00000004u; // 8007E110
  c->r[6]=0u+0x0000003Cu; // 8007E114
  c->r[7]=0u+0x00000000u; // 8007E118
  c->r[8]=0u+0x0000007Du; // 8007E11C
  c->lr=0x8007E124u; f_800CF1FC(c); // 8007E120
  c->r[3]=0u+0x00000001u; // 8007E124
  c->r[4]=0u+0x00000001u; // 8007E128
  c->r[5]=0u+0x00000004u; // 8007E12C
  c->r[6]=0u+0x0000003Cu; // 8007E130
  c->r[7]=0u+0x00000000u; // 8007E134
  c->r[8]=0u+0x0000007Du; // 8007E138
  c->lr=0x8007E140u; f_800CF1FC(c); // 8007E13C
  c->lr=0x8007E144u; f_800D1B78(c); // 8007E140
  c->lr=0x8007E148u; f_800CEB28(c); // 8007E144
  c->r[3]=0u+0x00000009u; // 8007E148
  c->r[4]=0u+0x00000001u; // 8007E14C
  c->lr=0x8007E154u; f_800CE534(c); // 8007E150
  c->r[3]=0u+0x0000000Du; // 8007E154
  c->r[4]=0u+0x00000001u; // 8007E158
  c->lr=0x8007E160u; f_800CE534(c); // 8007E15C
  c->r[3]=0u+0x00000007u; // 8007E160
  c->r[4]=0u+0x00000009u; // 8007E164
  c->r[5]=0u+0x00000001u; // 8007E168
  c->r[6]=0u+0x00000003u; // 8007E16C
  c->r[7]=0u+0x00000000u; // 8007E170
  c->lr=0x8007E178u; f_800CEB5C(c); // 8007E174
  c->r[3]=0u+0x00000007u; // 8007E178
  c->r[4]=0u+0x0000000Du; // 8007E17C
  c->r[5]=0u+0x00000001u; // 8007E180
  c->r[6]=0u+0x00000002u; // 8007E184
  c->r[7]=0u+0x00000000u; // 8007E188
  c->lr=0x8007E190u; f_800CEB5C(c); // 8007E18C
  c->r[3]=0u+0x00000004u; // 8007E190
  c->lr=0x8007E198u; f_800D2C58(c); // 8007E194
  c->r[3]=0u+0x00000000u; // 8007E198
  c->r[4]=0u+0x00000001u; // 8007E19C
  c->r[5]=0u+0x00000001u; // 8007E1A0
  c->r[6]=0u+0x000000FFu; // 8007E1A4
  c->lr=0x8007E1ACu; f_800D2AFC(c); // 8007E1A8
  c->r[3]=0u+0x00000000u; // 8007E1AC
  c->r[4]=0u+0x0000000Fu; // 8007E1B0
  c->r[5]=0u+0x00000008u; // 8007E1B4
  c->r[6]=0u+0x0000000Eu; // 8007E1B8
  c->r[7]=0u+0x00000002u; // 8007E1BC
  c->lr=0x8007E1C4u; f_800D2690(c); // 8007E1C0
  c->r[3]=0u+0x00000000u; // 8007E1C4
  c->r[4]=0u+0x00000000u; // 8007E1C8
  c->r[5]=0u+0x00000000u; // 8007E1CC
  c->r[6]=0u+0x00000000u; // 8007E1D0
  c->r[7]=0u+0x00000000u; // 8007E1D4
  c->r[8]=0u+0x00000000u; // 8007E1D8
  c->lr=0x8007E1E0u; f_800D2710(c); // 8007E1DC
  c->r[3]=0u+0x00000000u; // 8007E1E0
  c->r[4]=0u+0x00000007u; // 8007E1E4
  c->r[5]=0u+0x00000004u; // 8007E1E8
  c->r[6]=0u+0x00000006u; // 8007E1EC
  c->r[7]=0u+0x00000001u; // 8007E1F0
  c->lr=0x8007E1F8u; f_800D26D0(c); // 8007E1F4
  c->r[3]=0u+0x00000000u; // 8007E1F8
  c->r[4]=0u+0x00000001u; // 8007E1FC
  c->r[5]=0u+0x00000000u; // 8007E200
  c->r[6]=0u+0x00000000u; // 8007E204
  c->r[7]=0u+0x00000000u; // 8007E208
  c->r[8]=0u+0x00000000u; // 8007E20C
  c->lr=0x8007E214u; f_800D2768(c); // 8007E210
  c->r[3]=0u+0x00000000u; // 8007E214
  c->r[4]=0u+0x0000000Cu; // 8007E218
  c->lr=0x8007E220u; f_800D28E0(c); // 8007E21C
  c->r[3]=0u+0x00000000u; // 8007E220
  c->r[4]=0u+0x0000001Cu; // 8007E224
  c->lr=0x8007E22Cu; f_800D2930(c); // 8007E228
  c->r[3]=0u+0x00000000u; // 8007E22C
  c->r[4]=0u+0x00000000u; // 8007E230
  c->r[5]=0u+0x00000000u; // 8007E234
  c->lr=0x8007E23Cu; f_800D2980(c); // 8007E238
  c->r[3]=0u+0x00000001u; // 8007E23C
  c->r[4]=0u+0x00000001u; // 8007E240
  c->r[5]=0u+0x00000002u; // 8007E244
  c->r[6]=0u+0x000000FFu; // 8007E248
  c->lr=0x8007E250u; f_800D2AFC(c); // 8007E24C
  c->r[3]=0u+0x00000001u; // 8007E250
  c->r[4]=0u+0x0000000Fu; // 8007E254
  c->r[5]=0u+0x00000008u; // 8007E258
  c->r[6]=0u+0x0000000Eu; // 8007E25C
  c->r[7]=0u+0x00000000u; // 8007E260
  c->lr=0x8007E268u; f_800D2690(c); // 8007E264
  c->r[3]=0u+0x00000001u; // 8007E268
  c->r[4]=0u+0x00000000u; // 8007E26C
  c->r[5]=0u+0x00000000u; // 8007E270
  c->r[6]=0u+0x00000001u; // 8007E274
  c->r[7]=0u+0x00000000u; // 8007E278
  c->r[8]=0u+0x00000000u; // 8007E27C
  c->lr=0x8007E284u; f_800D2710(c); // 8007E280
  c->r[3]=0u+0x00000001u; // 8007E284
  c->r[4]=0u+0x00000007u; // 8007E288
  c->r[5]=0u+0x00000004u; // 8007E28C
  c->r[6]=0u+0x00000006u; // 8007E290
  c->r[7]=0u+0x00000000u; // 8007E294
  c->lr=0x8007E29Cu; f_800D26D0(c); // 8007E298
  c->r[3]=0u+0x00000001u; // 8007E29C
  c->r[4]=0u+0x00000001u; // 8007E2A0
  c->r[5]=0u+0x00000000u; // 8007E2A4
  c->r[6]=0u+0x00000000u; // 8007E2A8
  c->r[7]=0u+0x00000000u; // 8007E2AC
  c->r[8]=0u+0x00000000u; // 8007E2B0
  c->lr=0x8007E2B8u; f_800D2768(c); // 8007E2B4
  c->r[3]=0u+0x00000001u; // 8007E2B8
  c->r[4]=0u+0x0000000Du; // 8007E2BC
  c->lr=0x8007E2C4u; f_800D28E0(c); // 8007E2C0
  c->r[3]=0u+0x00000001u; // 8007E2C4
  c->r[4]=0u+0x0000001Du; // 8007E2C8
  c->lr=0x8007E2D0u; f_800D2930(c); // 8007E2CC
  c->r[3]=0u+0x00000001u; // 8007E2D0
  c->r[4]=0u+0x00000000u; // 8007E2D4
  c->r[5]=0u+0x00000000u; // 8007E2D8
  c->lr=0x8007E2E0u; f_800D2980(c); // 8007E2DC
  c->r[3]=0u+0x00000002u; // 8007E2E0
  c->r[4]=0u+0x00000000u; // 8007E2E4
  c->r[5]=0u+0x00000000u; // 8007E2E8
  c->r[6]=0u+0x000000FFu; // 8007E2EC
  c->lr=0x8007E2F4u; f_800D2AFC(c); // 8007E2F0
  c->r[3]=0u+0x00000002u; // 8007E2F4
  c->r[4]=0u+0x0000000Fu; // 8007E2F8
  c->r[5]=0u+0x00000008u; // 8007E2FC
  c->r[6]=0u+0x0000000Cu; // 8007E300
  c->r[7]=0u+0x00000000u; // 8007E304
  c->lr=0x8007E30Cu; f_800D2690(c); // 8007E308
  c->r[3]=0u+0x00000002u; // 8007E30C
  c->r[4]=0u+0x00000000u; // 8007E310
  c->r[5]=0u+0x00000000u; // 8007E314
  c->r[6]=0u+0x00000000u; // 8007E318
  c->r[7]=0u+0x00000001u; // 8007E31C
  c->r[8]=0u+0x00000000u; // 8007E320
  c->lr=0x8007E328u; f_800D2710(c); // 8007E324
  c->r[3]=0u+0x00000002u; // 8007E328
  c->r[4]=0u+0x00000004u; // 8007E32C
  c->r[5]=0u+0x00000007u; // 8007E330
  c->r[6]=0u+0x00000007u; // 8007E334
  c->r[7]=0u+0x00000000u; // 8007E338
  c->lr=0x8007E340u; f_800D26D0(c); // 8007E33C
  c->r[3]=0u+0x00000002u; // 8007E340
  c->r[4]=0u+0x00000000u; // 8007E344
  c->r[5]=0u+0x00000000u; // 8007E348
  c->r[6]=0u+0x00000000u; // 8007E34C
  c->r[7]=0u+0x00000001u; // 8007E350
  c->r[8]=0u+0x00000000u; // 8007E354
  c->lr=0x8007E35Cu; f_800D2768(c); // 8007E358
  c->r[3]=0u+0x00000002u; // 8007E35C
  c->r[4]=0u+0x00000000u; // 8007E360
  c->r[5]=0u+0x00000000u; // 8007E364
  c->lr=0x8007E36Cu; f_800D2980(c); // 8007E368
  c->r[3]=0u+0x00000003u; // 8007E36C
  c->r[4]=0u+0x000000FFu; // 8007E370
  c->r[5]=0u+0x000000FFu; // 8007E374
  c->r[6]=0u+0x000000FFu; // 8007E378
  c->lr=0x8007E380u; f_800D2AFC(c); // 8007E37C
  c->r[3]=0u+0x00000003u; // 8007E380
  c->r[4]=0u+0x00000001u; // 8007E384
  c->r[5]=0u+0x00000000u; // 8007E388
  c->r[6]=0u+0x0000000Eu; // 8007E38C
  c->r[7]=0u+0x0000000Fu; // 8007E390
  c->lr=0x8007E398u; f_800D2690(c); // 8007E394
  c->r[3]=0u+0x00000003u; // 8007E398
  c->r[4]=0u+0x00000000u; // 8007E39C
  c->r[5]=0u+0x00000000u; // 8007E3A0
  c->r[6]=0u+0x00000000u; // 8007E3A4
  c->r[7]=0u+0x00000001u; // 8007E3A8
  c->r[8]=0u+0x00000000u; // 8007E3AC
  c->lr=0x8007E3B4u; f_800D2710(c); // 8007E3B0
  c->r[3]=0u+0x00000003u; // 8007E3B4
  c->r[4]=0u+0x00000007u; // 8007E3B8
  c->r[5]=0u+0x00000007u; // 8007E3BC
  c->r[6]=0u+0x00000007u; // 8007E3C0
  c->r[7]=0u+0x00000007u; // 8007E3C4
  c->lr=0x8007E3CCu; f_800D26D0(c); // 8007E3C8
  c->r[3]=0u+0x00000003u; // 8007E3CC
  c->r[4]=0u+0x00000000u; // 8007E3D0
  c->r[5]=0u+0x00000000u; // 8007E3D4
  c->r[6]=0u+0x00000000u; // 8007E3D8
  c->r[7]=0u+0x00000001u; // 8007E3DC
  c->r[8]=0u+0x00000000u; // 8007E3E0
  c->lr=0x8007E3E8u; f_800D2768(c); // 8007E3E4
  c->r[3]=0u+0x00000003u; // 8007E3E8
  c->r[4]=0u+0x00000000u; // 8007E3EC
  c->r[5]=0u+0x00000000u; // 8007E3F0
  c->lr=0x8007E3F8u; f_800D2980(c); // 8007E3F4
  c->r[3]=0u+0x00000003u; // 8007E3F8
  c->r[4]=0u+0x0000000Eu; // 8007E3FC
  c->lr=0x8007E404u; f_800D28E0(c); // 8007E400
  c->r[5]=R32(c->r[2]+0xFFFF8BA0u); // 8007E404
  c->r[4]=c->r[1]+0x00000018u; // 8007E408
  c->r[0]=R32(c->r[2]+0xFFFF8BA4u); // 8007E40C
  c->r[3]=0u+0x00000001u; // 8007E410
  W32(c->r[1]+0x00000018u,c->r[5]); // 8007E414
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8007E418
  c->lr=0x8007E420u; f_800D2820(c); // 8007E41C
  c->r[0]=R32(c->r[2]+0xFFFF8BA8u); // 8007E420
  c->r[4]=c->r[1]+0x00000010u; // 8007E424
  W32(c->r[1]+0x00000010u,c->r[0]); // 8007E428
  c->r[3]=0u+0x00000000u; // 8007E42C
  c->lr=0x8007E434u; f_800D2884(c); // 8007E430
  c->r[0]=R32(c->r[2]+0xFFFF8BACu); // 8007E434
  c->r[4]=c->r[1]+0x0000000Cu; // 8007E438
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8007E43C
  c->r[3]=0u+0x00000001u; // 8007E440
  c->lr=0x8007E448u; f_800D2884(c); // 8007E444
  c->r[0]=R32(c->r[2]+0xFFFF8BB0u); // 8007E448
  c->r[4]=c->r[1]+0x00000008u; // 8007E44C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8007E450
  c->r[3]=0u+0x00000002u; // 8007E454
  c->lr=0x8007E45Cu; f_800D2884(c); // 8007E458
  c->r[3]=0u+0x00000000u; // 8007E45C
  c->r[4]=0u+0x00000000u; // 8007E460
  c->r[5]=0u+0x00000001u; // 8007E464
  c->r[6]=0u+0x00000002u; // 8007E468
  c->r[7]=0u+0x00000003u; // 8007E46C
  c->lr=0x8007E474u; f_800D29BC(c); // 8007E470
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8007E474
  c->r[31]=R32(c->r[1]+0x000000ACu); // 8007E478
  c->r[30]=R32(c->r[1]+0x000000A8u); // 8007E47C
  c->lr=c->r[0]; // 8007E480
  c->r[1]=c->r[1]+0x000000B0u; // 8007E484
  return; // 8007E488
}

// THPGXYuv2RgbDraw
void f_8007E48C(Ctx* __restrict c) {
  trace_call(0x8007E48Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E48C
  c->r[0]=c->lr; // 8007E490
  W32(c->r[1]+0x00000094u,c->r[0]); // 8007E494
  c->r[11]=c->r[1]+0x00000090u; // 8007E498
  c->lr=0x8007E4A0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007E49C
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000009Au); // 8007E4A0
  c->r[30]=c->r[4]|c->r[4]; // 8007E4A4
  c->r[23]=c->r[5]|c->r[5]; // 8007E4A8
  c->r[24]=c->r[6]|c->r[6]; // 8007E4AC
  c->r[25]=c->r[7]|c->r[7]; // 8007E4B0
  c->r[28]=c->r[10]|c->r[10]; // 8007E4B4
  c->r[4]=c->r[3]|c->r[3]; // 8007E4B8
  c->r[26]=c->r[8]|c->r[8]; // 8007E4BC
  c->r[5]=rotl(c->r[8],0)&0x0000FFFFu; // 8007E4C0
  c->r[27]=c->r[9]|c->r[9]; // 8007E4C4
  c->r[6]=rotl(c->r[9],0)&0x0000FFFFu; // 8007E4C8
  c->r[3]=c->r[1]+0x00000048u; // 8007E4CC
  c->r[7]=0u+0x00000001u; // 8007E4D0
  c->r[8]=0u+0x00000000u; // 8007E4D4
  c->r[9]=0u+0x00000000u; // 8007E4D8
  c->r[10]=0u+0x00000000u; // 8007E4DC
  c->lr=0x8007E4E4u; f_800D1374(c); // 8007E4E0
  {uint32_t ea=c->r[2]+0xFFFF8BB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007E4E4
  c->r[3]=c->r[1]+0x00000048u; // 8007E4E8
  c->r[4]=0u+0x00000000u; // 8007E4EC
  c->r[5]=0u+0x00000000u; // 8007E4F0
  c->f[2]=c->f[1]; // 8007E4F4
  c->r[6]=0u+0x00000000u; // 8007E4F8
  c->f[3]=c->f[1]; // 8007E4FC
  c->r[7]=0u+0x00000000u; // 8007E500
  c->r[8]=0u+0x00000000u; // 8007E504
  c->lr=0x8007E50Cu; f_800D15C8(c); // 8007E508
  c->r[3]=c->r[1]+0x00000048u; // 8007E50C
  c->r[4]=0u+0x00000000u; // 8007E510
  c->lr=0x8007E518u; f_800D1994(c); // 8007E514
  c->r[31]=sraw(c,c->r[27],1); // 8007E518
  c->r[4]=c->r[30]|c->r[30]; // 8007E51C
  c->r[30]=sraw(c,c->r[26],1); // 8007E520
  c->r[3]=c->r[1]+0x00000028u; // 8007E524
  c->r[5]=rotl(c->r[26],31)&0x0000FFFFu; // 8007E528
  c->r[6]=rotl(c->r[27],31)&0x0000FFFFu; // 8007E52C
  c->r[7]=0u+0x00000001u; // 8007E530
  c->r[8]=0u+0x00000000u; // 8007E534
  c->r[9]=0u+0x00000000u; // 8007E538
  c->r[10]=0u+0x00000000u; // 8007E53C
  c->lr=0x8007E544u; f_800D1374(c); // 8007E540
  {uint32_t ea=c->r[2]+0xFFFF8BB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007E544
  c->r[3]=c->r[1]+0x00000028u; // 8007E548
  c->r[4]=0u+0x00000000u; // 8007E54C
  c->r[5]=0u+0x00000000u; // 8007E550
  c->f[2]=c->f[1]; // 8007E554
  c->r[6]=0u+0x00000000u; // 8007E558
  c->f[3]=c->f[1]; // 8007E55C
  c->r[7]=0u+0x00000000u; // 8007E560
  c->r[8]=0u+0x00000000u; // 8007E564
  c->lr=0x8007E56Cu; f_800D15C8(c); // 8007E568
  c->r[3]=c->r[1]+0x00000028u; // 8007E56C
  c->r[4]=0u+0x00000001u; // 8007E570
  c->lr=0x8007E578u; f_800D1994(c); // 8007E574
  c->r[4]=c->r[23]|c->r[23]; // 8007E578
  c->r[3]=c->r[1]+0x00000008u; // 8007E57C
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 8007E580
  c->r[6]=rotl(c->r[31],0)&0x0000FFFFu; // 8007E584
  c->r[7]=0u+0x00000001u; // 8007E588
  c->r[8]=0u+0x00000000u; // 8007E58C
  c->r[9]=0u+0x00000000u; // 8007E590
  c->r[10]=0u+0x00000000u; // 8007E594
  c->lr=0x8007E59Cu; f_800D1374(c); // 8007E598
  {uint32_t ea=c->r[2]+0xFFFF8BB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007E59C
  c->r[3]=c->r[1]+0x00000008u; // 8007E5A0
  c->r[4]=0u+0x00000000u; // 8007E5A4
  c->r[5]=0u+0x00000000u; // 8007E5A8
  c->f[2]=c->f[1]; // 8007E5AC
  c->r[6]=0u+0x00000000u; // 8007E5B0
  c->f[3]=c->f[1]; // 8007E5B4
  c->r[7]=0u+0x00000000u; // 8007E5B8
  c->r[8]=0u+0x00000000u; // 8007E5BC
  c->lr=0x8007E5C4u; f_800D15C8(c); // 8007E5C0
  c->r[3]=c->r[1]+0x00000008u; // 8007E5C4
  c->r[4]=0u+0x00000002u; // 8007E5C8
  c->lr=0x8007E5D0u; f_800D1994(c); // 8007E5CC
  c->r[3]=0u+0x00000080u; // 8007E5D0
  c->r[4]=0u+0x00000007u; // 8007E5D4
  c->r[5]=0u+0x00000004u; // 8007E5D8
  c->lr=0x8007E5E0u; f_800CFE14(c); // 8007E5DC
  c->r[4]=0u+0xCC010000u; // 8007E5E0
  c->r[3]=0u+0x00000000u; // 8007E5E4
  W16(c->r[4]+0xFFFF8000u,c->r[24]); // 8007E5E8
  c->r[5]=c->r[24]+c->r[28]; // 8007E5EC
  c->r[0]=0u+0x00000001u; // 8007E5F0
  c->r[6]=c->r[25]+c->r[29]; // 8007E5F4
  W16(c->r[4]+0xFFFF8000u,c->r[25]); // 8007E5F8
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 8007E5FC
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 8007E600
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 8007E604
  W16(c->r[4]+0xFFFF8000u,c->r[5]); // 8007E608
  W16(c->r[4]+0xFFFF8000u,c->r[25]); // 8007E60C
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 8007E610
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 8007E614
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 8007E618
  W16(c->r[4]+0xFFFF8000u,c->r[5]); // 8007E61C
  W16(c->r[4]+0xFFFF8000u,c->r[6]); // 8007E620
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 8007E624
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 8007E628
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 8007E62C
  W16(c->r[4]+0xFFFF8000u,c->r[24]); // 8007E630
  W16(c->r[4]+0xFFFF8000u,c->r[6]); // 8007E634
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 8007E638
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 8007E63C
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 8007E640
  c->r[11]=c->r[1]+0x00000090u; // 8007E644
  c->lr=0x8007E64Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007E648
  c->r[0]=R32(c->r[1]+0x00000094u); // 8007E64C
  c->lr=c->r[0]; // 8007E650
  c->r[1]=c->r[1]+0x00000090u; // 8007E654
  return; // 8007E658
}

// THPPlayerInit
void f_8007E65C(Ctx* __restrict c) {
  trace_call(0x8007E65Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E65C
  c->r[0]=c->lr; // 8007E660
  c->r[4]=0u+0x00000000u; // 8007E664
  c->r[5]=0u+0x000002F0u; // 8007E668
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E66C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E670
  c->r[31]=0u+0x802B0000u; // 8007E674
  c->r[31]=c->r[31]+0xFFFF8B60u; // 8007E678
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007E67C
  c->r[30]=c->r[3]|c->r[3]; // 8007E680
  c->r[3]=c->r[31]+0x00000000u; // 8007E684
  c->lr=0x8007E68Cu; f_80004688(c); // 8007E688
  c->r[3]=c->r[31]+0x00000360u; // 8007E68C
  c->r[4]=c->r[31]+0x00000380u; // 8007E690
  c->r[5]=0u+0x00000003u; // 8007E694
  c->lr=0x8007E69Cu; f_800B1018(c); // 8007E698
  c->lr=0x8007E6A0u; f_80230170(c); // 8007E69C
  cmps(c,0,(int32_t)c->r[3],0); // 8007E6A0
  if (!crb(c,2)) { goto L_8007E6B0; } // 8007E6A4
  c->r[3]=0u+0x00000000u; // 8007E6A8
  goto L_8007E760; // 8007E6AC
L_8007E6B0:;
  c->lr=0x8007E6B4u; f_800B087C(c); // 8007E6B0
  c->r[0]=0u+0x00000000u; // 8007E6B4
  W32(c->r[13]+0xFFFF8B5Cu,c->r[30]); // 8007E6B8
  c->r[4]=0u+0x80080000u; // 8007E6BC
  c->r[30]=c->r[3]|c->r[3]; // 8007E6C0
  W32(c->r[13]+0xFFFF8B4Cu,c->r[0]); // 8007E6C4
  c->r[3]=c->r[4]+0xFFFFF900u; // 8007E6C8
  W32(c->r[13]+0xFFFF8B54u,c->r[0]); // 8007E6CC
  W32(c->r[13]+0xFFFF8B58u,c->r[0]); // 8007E6D0
  c->lr=0x8007E6D8u; f_800C78C0(c); // 8007E6D4
  cmps(c,0,(int32_t)c->r[3],0); // 8007E6D8
  W32(c->r[13]+0xFFFF8B50u,c->r[3]); // 8007E6DC
  if (!crb(c,2)) { goto L_8007E708; } // 8007E6E0
  c->r[0]=R32(c->r[13]+0xFFFF8B5Cu); // 8007E6E4
  cmps(c,0,(int32_t)c->r[0],0); // 8007E6E8
  if (crb(c,2)) { goto L_8007E708; } // 8007E6EC
  c->r[3]=0u+0x00000000u; // 8007E6F0
  c->lr=0x8007E6F8u; f_800C78C0(c); // 8007E6F4
  c->r[3]=c->r[30]|c->r[30]; // 8007E6F8
  c->lr=0x8007E700u; f_800B08A4(c); // 8007E6FC
  c->r[3]=0u+0x00000000u; // 8007E700
  goto L_8007E760; // 8007E704
L_8007E708:;
  c->r[3]=c->r[30]|c->r[30]; // 8007E708
  c->lr=0x8007E710u; f_800B08A4(c); // 8007E70C
  c->r[0]=R32(c->r[13]+0xFFFF8B5Cu); // 8007E710
  cmps(c,0,(int32_t)c->r[0],0); // 8007E714
  if (!crb(c,2)) { goto L_8007E754; } // 8007E718
  c->r[3]=c->r[31]+0x000003A0u; // 8007E71C
  c->r[4]=0u+0x00000000u; // 8007E720
  c->r[5]=0u+0x00000300u; // 8007E724
  c->lr=0x8007E72Cu; f_80004688(c); // 8007E728
  c->r[3]=c->r[31]+0x000003A0u; // 8007E72C
  c->r[4]=0u+0x00000300u; // 8007E730
  c->lr=0x8007E738u; f_800ABD2C(c); // 8007E734
  c->r[3]=R32(c->r[13]+0xFFFF8B4Cu); // 8007E738
  c->r[0]=c->r[31]+0x000003A0u; // 8007E73C
  c->r[4]=0u+0x00000180u; // 8007E740
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 8007E744
  c->r[3]=c->r[0]+c->r[3]; // 8007E748
  c->lr=0x8007E750u; f_800C7904(c); // 8007E74C
  c->lr=0x8007E754u; f_800C7980(c); // 8007E750
L_8007E754:;
  c->r[0]=0u+0x00000001u; // 8007E754
  W32(c->r[13]+0xFFFF8B40u,c->r[0]); // 8007E758
  c->r[3]=0u+0x00000001u; // 8007E75C
L_8007E760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E764
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007E768
  c->lr=c->r[0]; // 8007E76C
  c->r[1]=c->r[1]+0x00000010u; // 8007E770
  return; // 8007E774
}

// THPPlayerQuit
void f_8007E778(Ctx* __restrict c) {
  trace_call(0x8007E778u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E778
  c->r[0]=c->lr; // 8007E77C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E780
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E784
  c->lr=0x8007E78Cu; f_800ABF6C(c); // 8007E788
  c->lr=0x8007E790u; f_800B087C(c); // 8007E78C
  c->r[0]=R32(c->r[13]+0xFFFF8B50u); // 8007E790
  c->r[31]=c->r[3]|c->r[3]; // 8007E794
  cmps(c,0,(int32_t)c->r[0],0); // 8007E798
  if (crb(c,2)) { goto L_8007E7A8; } // 8007E79C
  c->r[3]=c->r[0]|c->r[0]; // 8007E7A0
  c->lr=0x8007E7A8u; f_800C78C0(c); // 8007E7A4
L_8007E7A8:;
  c->r[3]=c->r[31]|c->r[31]; // 8007E7A8
  c->lr=0x8007E7B0u; f_800B08A4(c); // 8007E7AC
  c->r[0]=0u+0x00000000u; // 8007E7B0
  W32(c->r[13]+0xFFFF8B40u,c->r[0]); // 8007E7B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E7B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E7BC
  c->lr=c->r[0]; // 8007E7C0
  c->r[1]=c->r[1]+0x00000010u; // 8007E7C4
  return; // 8007E7C8
}

// THPPlayerOpen
void f_8007E7CC(Ctx* __restrict c) {
  trace_call(0x8007E7CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E7CC
  c->r[0]=c->lr; // 8007E7D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007E7D4
  c->r[11]=c->r[1]+0x00000020u; // 8007E7D8
  c->lr=0x8007E7E0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007E7DC
  c->r[0]=R32(c->r[13]+0xFFFF8B40u); // 8007E7E0
  c->r[27]=c->r[3]|c->r[3]; // 8007E7E4
  c->r[26]=c->r[4]|c->r[4]; // 8007E7E8
  cmps(c,0,(int32_t)c->r[0],0); // 8007E7EC
  if (!crb(c,2)) { goto L_8007E7FC; } // 8007E7F0
  c->r[3]=0u+0x00000000u; // 8007E7F4
  goto L_8007EA44; // 8007E7F8
L_8007E7FC:;
  c->r[3]=0u+0x802B0000u; // 8007E7FC
  c->r[29]=c->r[3]+0xFFFF8B60u; // 8007E800
  c->r[0]=R32(c->r[29]+0x000000A0u); // 8007E804
  cmps(c,0,(int32_t)c->r[0],0); // 8007E808
  if (crb(c,2)) { goto L_8007E818; } // 8007E80C
  c->r[3]=0u+0x00000000u; // 8007E810
  goto L_8007EA44; // 8007E814
L_8007E818:;
  c->r[3]=c->r[29]+0x00000080u; // 8007E818
  c->r[4]=0u+0x00000000u; // 8007E81C
  c->r[5]=0u+0x0000000Cu; // 8007E820
  c->lr=0x8007E828u; f_80004688(c); // 8007E824
  c->r[3]=c->r[29]+0x0000008Cu; // 8007E828
  c->r[4]=0u+0x00000000u; // 8007E82C
  c->r[5]=0u+0x00000010u; // 8007E830
  c->lr=0x8007E838u; f_80004688(c); // 8007E834
  c->r[3]=c->r[27]|c->r[27]; // 8007E838
  c->r[4]=c->r[29]|c->r[29]; // 8007E83C
  c->lr=0x8007E844u; f_800B9558(c); // 8007E840
  cmps(c,0,(int32_t)c->r[3],0); // 8007E844
  if (!crb(c,2)) { goto L_8007E854; } // 8007E848
  c->r[3]=0u+0x00000000u; // 8007E84C
  goto L_8007EA44; // 8007E850
L_8007E854:;
  c->r[4]=c->r[27]|c->r[27]; // 8007E854
  c->r[3]=c->r[29]+0x000001F0u; // 8007E858
  c->lr=0x8007E860u; f_800DB9A8(c); // 8007E85C
  c->r[30]=0u+0x802B0000u; // 8007E860
  c->r[3]=c->r[29]|c->r[29]; // 8007E864
  c->r[4]=c->r[30]+0xFFFF8E60u; // 8007E868
  c->r[5]=0u+0x00000040u; // 8007E86C
  c->r[6]=0u+0x00000000u; // 8007E870
  c->r[7]=0u+0x00000002u; // 8007E874
  c->lr=0x8007E87Cu; f_800B9AD0(c); // 8007E878
  cmps(c,0,(int32_t)c->r[3],0); // 8007E87C
  if (!crb(c,0)) { goto L_8007E894; } // 8007E880
  c->r[3]=c->r[29]|c->r[29]; // 8007E884
  c->lr=0x8007E88Cu; f_800B9804(c); // 8007E888
  c->r[3]=0u+0x00000000u; // 8007E88C
  goto L_8007EA44; // 8007E890
L_8007E894:;
  c->r[3]=c->r[29]+0x0000003Cu; // 8007E894
  c->r[4]=c->r[30]+0xFFFF8E60u; // 8007E898
  c->r[5]=0u+0x00000030u; // 8007E89C
  c->lr=0x8007E8A4u; f_80004338(c); // 8007E8A0
  c->r[4]=0u+0x80250000u; // 8007E8A4
  c->r[3]=c->r[29]+0x0000003Cu; // 8007E8A8
  c->r[4]=c->r[4]+0x00006D60u; // 8007E8AC
  c->lr=0x8007E8B4u; f_800DBB24(c); // 8007E8B0
  cmps(c,0,(int32_t)c->r[3],0); // 8007E8B4
  if (crb(c,2)) { goto L_8007E8CC; } // 8007E8B8
  c->r[3]=c->r[29]|c->r[29]; // 8007E8BC
  c->lr=0x8007E8C4u; f_800B9804(c); // 8007E8C0
  c->r[3]=0u+0x00000000u; // 8007E8C4
  goto L_8007EA44; // 8007E8C8
L_8007E8CC:;
  c->r[3]=R32(c->r[29]+0x00000040u); // 8007E8CC
  c->r[0]=c->r[3]+0xFFFF0000u; // 8007E8D0
  cmpu(c,0,c->r[0],0x00001000u); // 8007E8D4
  if (crb(c,2)) { goto L_8007E8EC; } // 8007E8D8
  c->r[3]=c->r[29]|c->r[29]; // 8007E8DC
  c->lr=0x8007E8E4u; f_800B9804(c); // 8007E8E0
  c->r[3]=0u+0x00000000u; // 8007E8E4
  goto L_8007EA44; // 8007E8E8
L_8007E8EC:;
  c->r[28]=R32(c->r[29]+0x0000005Cu); // 8007E8EC
  c->r[3]=c->r[29]|c->r[29]; // 8007E8F0
  c->r[4]=c->r[30]+0xFFFF8E60u; // 8007E8F4
  c->r[5]=0u+0x00000020u; // 8007E8F8
  c->r[6]=c->r[28]|c->r[28]; // 8007E8FC
  c->r[7]=0u+0x00000002u; // 8007E900
  c->lr=0x8007E908u; f_800B9AD0(c); // 8007E904
  cmps(c,0,(int32_t)c->r[3],0); // 8007E908
  if (!crb(c,0)) { goto L_8007E920; } // 8007E90C
  c->r[3]=c->r[29]|c->r[29]; // 8007E910
  c->lr=0x8007E918u; f_800B9804(c); // 8007E914
  c->r[3]=0u+0x00000000u; // 8007E918
  goto L_8007EA44; // 8007E91C
L_8007E920:;
  c->r[3]=c->r[29]+0x0000006Cu; // 8007E920
  c->r[4]=c->r[30]+0xFFFF8E60u; // 8007E924
  c->r[5]=0u+0x00000014u; // 8007E928
  c->lr=0x8007E930u; f_80004338(c); // 8007E92C
  c->r[0]=0u+0x00000000u; // 8007E930
  W8(c->r[29]+0x000000A7u,c->r[0]); // 8007E934
  c->r[27]=0u+0x00000000u; // 8007E938
  c->r[31]=0u+0x00000001u; // 8007E93C
  c->r[28]=c->r[28]+0x00000014u; // 8007E940
  goto L_8007EA08; // 8007E944
L_8007E948:;
  c->r[3]=c->r[29]+c->r[27]; // 8007E948
  c->r[0]=R8(c->r[3]+0x00000070u); // 8007E94C
  cmps(c,0,(int32_t)c->r[0],1); // 8007E950
  if (crb(c,2)) { goto L_8007E9B0; } // 8007E954
  if (!crb(c,0)) { goto L_8007E9FC; } // 8007E958
  cmps(c,0,(int32_t)c->r[0],0); // 8007E95C
  if (!crb(c,0)) { goto L_8007E968; } // 8007E960
  goto L_8007E9FC; // 8007E964
L_8007E968:;
  c->r[3]=c->r[29]|c->r[29]; // 8007E968
  c->r[6]=c->r[28]|c->r[28]; // 8007E96C
  c->r[4]=c->r[30]+0xFFFF8E60u; // 8007E970
  c->r[5]=0u+0x00000020u; // 8007E974
  c->r[7]=0u+0x00000002u; // 8007E978
  c->lr=0x8007E980u; f_800B9AD0(c); // 8007E97C
  cmps(c,0,(int32_t)c->r[3],0); // 8007E980
  if (!crb(c,0)) { goto L_8007E998; } // 8007E984
  c->r[3]=c->r[29]|c->r[29]; // 8007E988
  c->lr=0x8007E990u; f_800B9804(c); // 8007E98C
  c->r[3]=0u+0x00000000u; // 8007E990
  goto L_8007EA44; // 8007E994
L_8007E998:;
  c->r[3]=c->r[29]+0x00000080u; // 8007E998
  c->r[4]=c->r[30]+0xFFFF8E60u; // 8007E99C
  c->r[5]=0u+0x0000000Cu; // 8007E9A0
  c->lr=0x8007E9A8u; f_80004338(c); // 8007E9A4
  c->r[28]=c->r[28]+0x0000000Cu; // 8007E9A8
  goto L_8007EA04; // 8007E9AC
L_8007E9B0:;
  c->r[3]=c->r[29]|c->r[29]; // 8007E9B0
  c->r[6]=c->r[28]|c->r[28]; // 8007E9B4
  c->r[4]=c->r[30]+0xFFFF8E60u; // 8007E9B8
  c->r[5]=0u+0x00000020u; // 8007E9BC
  c->r[7]=0u+0x00000002u; // 8007E9C0
  c->lr=0x8007E9C8u; f_800B9AD0(c); // 8007E9C4
  cmps(c,0,(int32_t)c->r[3],0); // 8007E9C8
  if (!crb(c,0)) { goto L_8007E9E0; } // 8007E9CC
  c->r[3]=c->r[29]|c->r[29]; // 8007E9D0
  c->lr=0x8007E9D8u; f_800B9804(c); // 8007E9D4
  c->r[3]=0u+0x00000000u; // 8007E9D8
  goto L_8007EA44; // 8007E9DC
L_8007E9E0:;
  c->r[3]=c->r[29]+0x0000008Cu; // 8007E9E0
  c->r[4]=c->r[30]+0xFFFF8E60u; // 8007E9E4
  c->r[5]=0u+0x00000010u; // 8007E9E8
  c->lr=0x8007E9F0u; f_80004338(c); // 8007E9EC
  W8(c->r[29]+0x000000A7u,c->r[31]); // 8007E9F0
  c->r[28]=c->r[28]+0x00000010u; // 8007E9F4
  goto L_8007EA04; // 8007E9F8
L_8007E9FC:;
  c->r[3]=0u+0x00000000u; // 8007E9FC
  goto L_8007EA44; // 8007EA00
L_8007EA04:;
  c->r[27]=c->r[27]+0x00000001u; // 8007EA04
L_8007EA08:;
  c->r[0]=R32(c->r[29]+0x0000006Cu); // 8007EA08
  cmpu(c,0,c->r[27],c->r[0]); // 8007EA0C
  if (crb(c,0)) { IRQCHK(c); goto L_8007E948; } // 8007EA10
  {uint32_t ea=c->r[2]+0xFFFF8BC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007EA14
  c->r[4]=0u+0x00000000u; // 8007EA18
  c->r[0]=0u+0x00000001u; // 8007EA1C
  W8(c->r[29]+0x000000A5u,c->r[4]); // 8007EA20
  c->r[3]=0u+0x00000001u; // 8007EA24
  W8(c->r[29]+0x000000A4u,c->r[4]); // 8007EA28
  W8(c->r[29]+0x000000A6u,c->r[4]); // 8007EA2C
  W32(c->r[29]+0x000000B0u,c->r[26]); // 8007EA30
  W32(c->r[29]+0x000000A0u,c->r[0]); // 8007EA34
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[0]);} // 8007EA38
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 8007EA3C
  W32(c->r[29]+0x000000E8u,c->r[4]); // 8007EA40
L_8007EA44:;
  c->r[11]=c->r[1]+0x00000020u; // 8007EA44
  c->lr=0x8007EA4Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007EA48
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007EA4C
  c->lr=c->r[0]; // 8007EA50
  c->r[1]=c->r[1]+0x00000020u; // 8007EA54
  return; // 8007EA58
}

// THPPlayerClose
void f_8007EA5C(Ctx* __restrict c) {
  trace_call(0x8007EA5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EA5C
  c->r[0]=c->lr; // 8007EA60
  c->r[3]=0u+0x802B0000u; // 8007EA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007EA68
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007EA6C
  c->r[0]=R32(c->r[3]+0x000000A0u); // 8007EA70
  cmps(c,0,(int32_t)c->r[0],0); // 8007EA74
  if (crb(c,2)) { goto L_8007EA9C; } // 8007EA78
  c->r[0]=R8(c->r[3]+0x000000A4u); // 8007EA7C
  cmps(c,0,(int32_t)c->r[0],0); // 8007EA80
  if (!crb(c,2)) { goto L_8007EA9C; } // 8007EA84
  c->r[0]=0u+0x00000000u; // 8007EA88
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8007EA8C
  c->lr=0x8007EA94u; f_800B9804(c); // 8007EA90
  c->r[3]=0u+0x00000001u; // 8007EA94
  goto L_8007EAA0; // 8007EA98
L_8007EA9C:;
  c->r[3]=0u+0x00000000u; // 8007EA9C
L_8007EAA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007EAA0
  c->lr=c->r[0]; // 8007EAA4
  c->r[1]=c->r[1]+0x00000010u; // 8007EAA8
  return; // 8007EAAC
}

// THPPlayerCalcNeedMemory
void f_8007EAB0(Ctx* __restrict c) {
  trace_call(0x8007EAB0u);
  c->r[3]=0u+0x802B0000u; // 8007EAB0
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007EAB4
  c->r[0]=R32(c->r[3]+0x000000A0u); // 8007EAB8
  cmps(c,0,(int32_t)c->r[0],0); // 8007EABC
  if (crb(c,2)) { goto L_8007EB60; } // 8007EAC0
  c->r[0]=R32(c->r[3]+0x000000B0u); // 8007EAC4
  cmps(c,0,(int32_t)c->r[0],0); // 8007EAC8
  if (crb(c,2)) { goto L_8007EAE0; } // 8007EACC
  c->r[3]=R32(c->r[3]+0x00000058u); // 8007EAD0
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EAD4
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EAD8
  goto L_8007EAF0; // 8007EADC
L_8007EAE0:;
  c->r[3]=R32(c->r[3]+0x00000044u); // 8007EAE0
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EAE4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EAE8
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8007EAEC
L_8007EAF0:;
  c->r[6]=0u+0x802B0000u; // 8007EAF0
  c->r[6]=c->r[6]+0xFFFF8B60u; // 8007EAF4
  c->r[4]=R32(c->r[6]+0x00000080u); // 8007EAF8
  c->r[3]=R32(c->r[6]+0x00000084u); // 8007EAFC
  c->r[0]=R8(c->r[6]+0x000000A7u); // 8007EB00
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[3]); // 8007EB04
  cmps(c,0,(int32_t)c->r[0],0); // 8007EB08
  c->r[5]=c->r[3]+0x0000001Fu; // 8007EB0C
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 8007EB10
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EB14
  c->r[4]=rotl(c->r[5],0)&0xFFFFFFE0u; // 8007EB18
  c->r[3]=rotl(c->r[5],2)&0xFFFFFF80u; // 8007EB1C
  c->r[4]=c->r[3]-c->r[4]; // 8007EB20
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EB24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFF80u; // 8007EB28
  c->r[7]=c->r[7]+c->r[4]; // 8007EB2C
  c->r[0]=c->r[0]-c->r[3]; // 8007EB30
  c->r[7]=c->r[7]+c->r[0]; // 8007EB34
  c->r[7]=c->r[7]+c->r[0]; // 8007EB38
  if (crb(c,2)) { goto L_8007EB58; } // 8007EB3C
  c->r[0]=R32(c->r[6]+0x00000048u); // 8007EB40
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007EB44
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EB48
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EB4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 8007EB50
  c->r[7]=c->r[7]+c->r[0]; // 8007EB54
L_8007EB58:;
  c->r[3]=c->r[7]+0x00001000u; // 8007EB58
  return; // 8007EB5C
L_8007EB60:;
  c->r[3]=0u+0x00000000u; // 8007EB60
  return; // 8007EB64
}

// THPPlayerSetBuffer
void f_8007EB68(Ctx* __restrict c) {
  trace_call(0x8007EB68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EB68
  c->r[0]=c->lr; // 8007EB6C
  c->r[4]=0u+0x802B0000u; // 8007EB70
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007EB74
  c->r[5]=c->r[4]+0xFFFF8B60u; // 8007EB78
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007EB7C
  c->r[0]=R32(c->r[5]+0x000000A0u); // 8007EB80
  cmps(c,0,(int32_t)c->r[0],0); // 8007EB84
  if (crb(c,2)) { goto L_8007ED90; } // 8007EB88
  c->r[0]=R8(c->r[5]+0x000000A4u); // 8007EB8C
  cmps(c,0,(int32_t)c->r[0],0); // 8007EB90
  if (!crb(c,2)) { goto L_8007ED90; } // 8007EB94
  c->r[0]=R32(c->r[5]+0x000000B0u); // 8007EB98
  cmps(c,0,(int32_t)c->r[0],0); // 8007EB9C
  if (crb(c,2)) { goto L_8007EBB4; } // 8007EBA0
  c->r[0]=R32(c->r[5]+0x00000058u); // 8007EBA4
  W32(c->r[5]+0x000000B4u,c->r[3]); // 8007EBA8
  c->r[31]=c->r[3]+c->r[0]; // 8007EBAC
  goto L_8007EC7C; // 8007EBB0
L_8007EBB4:;
  W32(c->r[5]+0x00000100u,c->r[3]); // 8007EBB4
  c->r[4]=R32(c->r[5]+0x00000044u); // 8007EBB8
  c->r[0]=c->r[4]+0x0000001Fu; // 8007EBBC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EBC0
  c->r[31]=c->r[3]+c->r[0]; // 8007EBC4
  W32(c->r[5]+0x0000010Cu,c->r[31]); // 8007EBC8
  c->r[3]=R32(c->r[5]+0x00000044u); // 8007EBCC
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EBD0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EBD4
  c->r[31]=c->r[31]+c->r[0]; // 8007EBD8
  W32(c->r[5]+0x00000118u,c->r[31]); // 8007EBDC
  c->r[3]=R32(c->r[5]+0x00000044u); // 8007EBE0
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EBE4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EBE8
  c->r[31]=c->r[31]+c->r[0]; // 8007EBEC
  W32(c->r[5]+0x00000124u,c->r[31]); // 8007EBF0
  c->r[3]=R32(c->r[5]+0x00000044u); // 8007EBF4
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EBF8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EBFC
  c->r[31]=c->r[31]+c->r[0]; // 8007EC00
  W32(c->r[5]+0x00000130u,c->r[31]); // 8007EC04
  c->r[3]=R32(c->r[5]+0x00000044u); // 8007EC08
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EC0C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EC10
  c->r[31]=c->r[31]+c->r[0]; // 8007EC14
  W32(c->r[5]+0x0000013Cu,c->r[31]); // 8007EC18
  c->r[4]=R32(c->r[5]+0x00000044u); // 8007EC1C
  c->r[0]=c->r[4]+0x0000001Fu; // 8007EC20
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EC24
  c->r[31]=c->r[31]+c->r[0]; // 8007EC28
  W32(c->r[5]+0x00000148u,c->r[31]); // 8007EC2C
  c->r[3]=R32(c->r[5]+0x00000044u); // 8007EC30
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EC34
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EC38
  c->r[31]=c->r[31]+c->r[0]; // 8007EC3C
  W32(c->r[5]+0x00000154u,c->r[31]); // 8007EC40
  c->r[3]=R32(c->r[5]+0x00000044u); // 8007EC44
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EC48
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EC4C
  c->r[31]=c->r[31]+c->r[0]; // 8007EC50
  W32(c->r[5]+0x00000160u,c->r[31]); // 8007EC54
  c->r[3]=R32(c->r[5]+0x00000044u); // 8007EC58
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EC5C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EC60
  c->r[31]=c->r[31]+c->r[0]; // 8007EC64
  W32(c->r[5]+0x0000016Cu,c->r[31]); // 8007EC68
  c->r[3]=R32(c->r[5]+0x00000044u); // 8007EC6C
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EC70
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007EC74
  c->r[31]=c->r[31]+c->r[0]; // 8007EC78
L_8007EC7C:;
  c->r[30]=0u+0x802B0000u; // 8007EC7C
  c->r[29]=0u+0x00000000u; // 8007EC80
  c->r[30]=c->r[30]+0xFFFF8B60u; // 8007EC84
  c->r[3]=R32(c->r[30]+0x00000080u); // 8007EC88
  c->r[0]=R32(c->r[30]+0x00000084u); // 8007EC8C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8007EC90
  c->r[3]=rotl(c->r[4],30)&0x3FFFFFFFu; // 8007EC94
  c->r[4]=c->r[4]+0x0000001Fu; // 8007EC98
  c->r[0]=c->r[3]+0x0000001Fu; // 8007EC9C
  c->r[28]=rotl(c->r[4],0)&0xFFFFFFE0u; // 8007ECA0
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007ECA4
L_8007ECA8:;
  W32(c->r[30]+0x00000178u,c->r[31]); // 8007ECA8
  c->r[3]=c->r[31]|c->r[31]; // 8007ECAC
  c->r[4]=c->r[28]|c->r[28]; // 8007ECB0
  c->lr=0x8007ECB8u; f_800ABD00(c); // 8007ECB4
  c->r[31]=c->r[31]+c->r[28]; // 8007ECB8
  W32(c->r[30]+0x0000017Cu,c->r[31]); // 8007ECBC
  c->r[3]=c->r[31]|c->r[31]; // 8007ECC0
  c->r[4]=c->r[27]|c->r[27]; // 8007ECC4
  c->lr=0x8007ECCCu; f_800ABD00(c); // 8007ECC8
  c->r[31]=c->r[31]+c->r[27]; // 8007ECCC
  W32(c->r[30]+0x00000180u,c->r[31]); // 8007ECD0
  c->r[3]=c->r[31]|c->r[31]; // 8007ECD4
  c->r[4]=c->r[27]|c->r[27]; // 8007ECD8
  c->lr=0x8007ECE0u; f_800ABD00(c); // 8007ECDC
  c->r[29]=c->r[29]+0x00000001u; // 8007ECE0
  c->r[31]=c->r[31]+c->r[27]; // 8007ECE4
  cmpu(c,0,c->r[29],0x00000003u); // 8007ECE8
  c->r[30]=c->r[30]+0x00000010u; // 8007ECEC
  if (crb(c,0)) { IRQCHK(c); goto L_8007ECA8; } // 8007ECF0
  c->r[5]=0u+0x802B0000u; // 8007ECF4
  c->r[5]=c->r[5]+0xFFFF8B60u; // 8007ECF8
  c->r[0]=R8(c->r[5]+0x000000A7u); // 8007ECFC
  cmps(c,0,(int32_t)c->r[0],0); // 8007ED00
  if (crb(c,2)) { goto L_8007ED7C; } // 8007ED04
  c->r[0]=R32(c->r[5]+0x00000048u); // 8007ED08
  c->r[4]=0u+0x00000000u; // 8007ED0C
  W32(c->r[5]+0x000001A8u,c->r[31]); // 8007ED10
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007ED14
  c->r[0]=c->r[3]+0x0000001Fu; // 8007ED18
  W32(c->r[5]+0x000001ACu,c->r[31]); // 8007ED1C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007ED20
  c->r[31]=c->r[31]+c->r[0]; // 8007ED24
  W32(c->r[5]+0x000001B4u,c->r[31]); // 8007ED28
  W32(c->r[5]+0x000001B8u,c->r[31]); // 8007ED2C
  c->r[31]=c->r[31]+c->r[0]; // 8007ED30
  W32(c->r[5]+0x000001C0u,c->r[31]); // 8007ED34
  W32(c->r[5]+0x000001C4u,c->r[31]); // 8007ED38
  c->r[31]=c->r[31]+c->r[0]; // 8007ED3C
  W32(c->r[5]+0x000001CCu,c->r[31]); // 8007ED40
  W32(c->r[5]+0x000001D0u,c->r[31]); // 8007ED44
  c->r[31]=c->r[31]+c->r[0]; // 8007ED48
  W32(c->r[5]+0x000001B0u,c->r[4]); // 8007ED4C
  W32(c->r[5]+0x000001BCu,c->r[4]); // 8007ED50
  W32(c->r[5]+0x000001C8u,c->r[4]); // 8007ED54
  W32(c->r[5]+0x000001D4u,c->r[4]); // 8007ED58
  W32(c->r[5]+0x000001D8u,c->r[31]); // 8007ED5C
  W32(c->r[5]+0x000001DCu,c->r[31]); // 8007ED60
  c->r[31]=c->r[31]+c->r[0]; // 8007ED64
  W32(c->r[5]+0x000001E0u,c->r[4]); // 8007ED68
  W32(c->r[5]+0x000001E4u,c->r[31]); // 8007ED6C
  W32(c->r[5]+0x000001E8u,c->r[31]); // 8007ED70
  c->r[31]=c->r[31]+c->r[0]; // 8007ED74
  W32(c->r[5]+0x000001ECu,c->r[4]); // 8007ED78
L_8007ED7C:;
  c->r[4]=0u+0x802B0000u; // 8007ED7C
  c->r[3]=0u+0x00000001u; // 8007ED80
  c->r[4]=c->r[4]+0xFFFF8B60u; // 8007ED84
  W32(c->r[4]+0x0000009Cu,c->r[31]); // 8007ED88
  goto L_8007ED94; // 8007ED8C
L_8007ED90:;
  c->r[3]=0u+0x00000000u; // 8007ED90
L_8007ED94:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007ED94
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007ED98
  c->lr=c->r[0]; // 8007ED9C
  c->r[1]=c->r[1]+0x00000020u; // 8007EDA0
  return; // 8007EDA4
}

// InitAllMessageQueue__Fv
void f_8007EDA8(Ctx* __restrict c) {
  trace_call(0x8007EDA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EDA8
  c->r[0]=c->lr; // 8007EDAC
  c->r[3]=0u+0x802B0000u; // 8007EDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007EDB4
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007EDB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007EDBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007EDC0
  c->r[0]=R32(c->r[3]+0x000000B0u); // 8007EDC4
  cmps(c,0,(int32_t)c->r[0],0); // 8007EDC8
  if (!crb(c,2)) { goto L_8007EDF0; } // 8007EDCC
  c->r[31]=c->r[3]+0x00000100u; // 8007EDD0
  c->r[30]=0u+0x00000000u; // 8007EDD4
L_8007EDD8:;
  c->r[3]=c->r[31]|c->r[31]; // 8007EDD8
  c->lr=0x8007EDE0u; f_80080168(c); // 8007EDDC
  c->r[30]=c->r[30]+0x00000001u; // 8007EDE0
  c->r[31]=c->r[31]+0x0000000Cu; // 8007EDE4
  cmps(c,0,(int32_t)c->r[30],10); // 8007EDE8
  if (crb(c,0)) { IRQCHK(c); goto L_8007EDD8; } // 8007EDEC
L_8007EDF0:;
  c->r[3]=0u+0x802B0000u; // 8007EDF0
  c->r[30]=0u+0x00000000u; // 8007EDF4
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007EDF8
  c->r[31]=c->r[3]+0x00000178u; // 8007EDFC
L_8007EE00:;
  c->r[3]=c->r[31]|c->r[31]; // 8007EE00
  c->lr=0x8007EE08u; f_80080638(c); // 8007EE04
  c->r[30]=c->r[30]+0x00000001u; // 8007EE08
  c->r[31]=c->r[31]+0x00000010u; // 8007EE0C
  cmps(c,0,(int32_t)c->r[30],3); // 8007EE10
  if (crb(c,0)) { IRQCHK(c); goto L_8007EE00; } // 8007EE14
  c->r[3]=0u+0x802B0000u; // 8007EE18
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007EE1C
  c->r[0]=R8(c->r[3]+0x000000A7u); // 8007EE20
  cmps(c,0,(int32_t)c->r[0],0); // 8007EE24
  if (crb(c,2)) { goto L_8007EE4C; } // 8007EE28
  c->r[31]=c->r[3]+0x000001A8u; // 8007EE2C
  c->r[30]=0u+0x00000000u; // 8007EE30
L_8007EE34:;
  c->r[3]=c->r[31]|c->r[31]; // 8007EE34
  c->lr=0x8007EE3Cu; f_8007DE68(c); // 8007EE38
  c->r[30]=c->r[30]+0x00000001u; // 8007EE3C
  c->r[31]=c->r[31]+0x0000000Cu; // 8007EE40
  cmps(c,0,(int32_t)c->r[30],6); // 8007EE44
  if (crb(c,0)) { IRQCHK(c); goto L_8007EE34; } // 8007EE48
L_8007EE4C:;
  c->r[3]=0u+0x802B0000u; // 8007EE4C
  c->r[4]=c->r[13]+0xFFFF8B44u; // 8007EE50
  c->r[3]=c->r[3]+0xFFFF8EA0u; // 8007EE54
  c->r[5]=0u+0x00000001u; // 8007EE58
  c->lr=0x8007EE60u; f_800B1018(c); // 8007EE5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007EE60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007EE64
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007EE68
  c->lr=c->r[0]; // 8007EE6C
  c->r[1]=c->r[1]+0x00000010u; // 8007EE70
  return; // 8007EE74
}

// PrepareReady__Fi
void f_8007EE78(Ctx* __restrict c) {
  trace_call(0x8007EE78u);
  c->r[5]=0u+0x802B0000u; // 8007EE78
  c->r[4]=c->r[3]|c->r[3]; // 8007EE7C
  c->r[3]=c->r[5]+0xFFFF8EA0u; // 8007EE80
  c->r[5]=0u+0x00000001u; // 8007EE84
  f_800B1078(c); return; // 8007EE88
}

// THPPlayerPrepare
void f_8007EE8C(Ctx* __restrict c) {
  trace_call(0x8007EE8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EE8C
  c->r[0]=c->lr; // 8007EE90
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007EE94
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007EE98
  c->r[30]=0u+0x802B0000u; // 8007EE9C
  c->r[30]=c->r[30]+0xFFFF8B60u; // 8007EEA0
  c->r[27]=c->r[3]|c->r[3]; // 8007EEA4
  c->r[31]=c->r[30]+0x00000000u; // 8007EEA8
  c->r[28]=c->r[4]|c->r[4]; // 8007EEAC
  c->r[29]=c->r[5]|c->r[5]; // 8007EEB0
  c->r[0]=R32(c->r[31]+0x000000A0u); // 8007EEB4
  cmps(c,0,(int32_t)c->r[0],0); // 8007EEB8
  if (crb(c,2)) { goto L_8007F1C0; } // 8007EEBC
  c->r[0]=R8(c->r[31]+0x000000A4u); // 8007EEC0
  cmps(c,0,(int32_t)c->r[0],0); // 8007EEC4
  if (!crb(c,2)) { goto L_8007F1C0; } // 8007EEC8
  cmps(c,0,(int32_t)c->r[3],0); // 8007EECC
  if (!crb(c,1)) { goto L_8007EF54; } // 8007EED0
  c->r[5]=R32(c->r[31]+0x00000060u); // 8007EED4
  cmps(c,0,(int32_t)c->r[5],0); // 8007EED8
  if (!crb(c,2)) { goto L_8007EEE8; } // 8007EEDC
  c->r[3]=0u+0x00000000u; // 8007EEE0
  goto L_8007F1C4; // 8007EEE4
L_8007EEE8:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 8007EEE8
  cmpu(c,0,c->r[0],c->r[3]); // 8007EEEC
  if (!crb(c,1)) { goto L_8007EF4C; } // 8007EEF0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007EEF4
  c->r[3]=c->r[31]|c->r[31]; // 8007EEF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007EEFC
  c->r[4]=c->r[30]+0x00000300u; // 8007EF00
  c->r[6]=c->r[5]+c->r[0]; // 8007EF04
  c->r[5]=0u+0x00000020u; // 8007EF08
  c->r[7]=0u+0x00000002u; // 8007EF0C
  c->lr=0x8007EF14u; f_800B9AD0(c); // 8007EF10
  cmps(c,0,(int32_t)c->r[3],0); // 8007EF14
  if (!crb(c,0)) { goto L_8007EF24; } // 8007EF18
  c->r[3]=0u+0x00000000u; // 8007EF1C
  goto L_8007F1C4; // 8007EF20
L_8007EF24:;
  c->r[3]=c->r[30]+0x00000300u; // 8007EF24
  c->r[5]=R32(c->r[31]+0x00000064u); // 8007EF28
  c->r[4]=R32(c->r[30]+0x00000300u); // 8007EF2C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8007EF30
  c->r[3]=c->r[5]+c->r[4]; // 8007EF34
  W32(c->r[31]+0x000000B8u,c->r[3]); // 8007EF38
  c->r[0]=c->r[0]-c->r[4]; // 8007EF3C
  W32(c->r[31]+0x000000C0u,c->r[27]); // 8007EF40
  W32(c->r[31]+0x000000BCu,c->r[0]); // 8007EF44
  goto L_8007EF68; // 8007EF48
L_8007EF4C:;
  c->r[3]=0u+0x00000000u; // 8007EF4C
  goto L_8007F1C4; // 8007EF50
L_8007EF54:;
  c->r[4]=R32(c->r[31]+0x00000064u); // 8007EF54
  c->r[0]=R32(c->r[31]+0x00000054u); // 8007EF58
  W32(c->r[31]+0x000000B8u,c->r[4]); // 8007EF5C
  W32(c->r[31]+0x000000BCu,c->r[0]); // 8007EF60
  W32(c->r[31]+0x000000C0u,c->r[3]); // 8007EF64
L_8007EF68:;
  c->r[3]=c->r[30]+0x00000000u; // 8007EF68
  c->r[0]=R8(c->r[3]+0x000000A7u); // 8007EF6C
  cmps(c,0,(int32_t)c->r[0],0); // 8007EF70
  if (crb(c,2)) { goto L_8007EF98; } // 8007EF74
  cmps(c,0,(int32_t)c->r[29],0); // 8007EF78
  if (crb(c,0)) { goto L_8007EF8C; } // 8007EF7C
  c->r[0]=R32(c->r[3]+0x00000098u); // 8007EF80
  cmpu(c,0,c->r[29],c->r[0]); // 8007EF84
  if (crb(c,0)) { goto L_8007EF94; } // 8007EF88
L_8007EF8C:;
  c->r[3]=0u+0x00000000u; // 8007EF8C
  goto L_8007F1C4; // 8007EF90
L_8007EF94:;
  W32(c->r[3]+0x000000ECu,c->r[29]); // 8007EF94
L_8007EF98:;
  c->r[29]=c->r[30]+0x00000000u; // 8007EF98
  c->r[28]=rotl(c->r[28],0)&0x00000001u; // 8007EF9C
  c->r[0]=R32(c->r[29]+0x000000B0u); // 8007EFA0
  c->r[3]=0u+0x00000000u; // 8007EFA4
  W8(c->r[29]+0x000000A6u,c->r[28]); // 8007EFA8
  cmps(c,0,(int32_t)c->r[0],0); // 8007EFAC
  W32(c->r[29]+0x000000D8u,c->r[3]); // 8007EFB0
  if (crb(c,2)) { goto L_8007F0E8; } // 8007EFB4
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8007EFB8
  cmps(c,0,(int32_t)c->r[0],0); // 8007EFBC
  if (!crb(c,2)) { goto L_8007EFCC; } // 8007EFC0
  c->lr=0x8007EFC8u; f_80080758(c); // 8007EFC4
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8007EFC8
L_8007EFCC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8007EFCC
  c->r[4]=c->r[30]+0x00000000u; // 8007EFD0
  c->r[4]=c->r[4]+0x000001F0u; // 8007EFD4
  c->r[5]=0u+0x00000000u; // 8007EFD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8007EFDC
  c->r[6]=0u+0x00000001u; // 8007EFE0
  c->r[12]=R32(c->r[12]+0x00000128u); // 8007EFE4
  c->ctr=c->r[12]; // 8007EFE8
  if (true) { c->lr=0x8007EFF0u; dispatch(c,c->ctr); } // 8007EFEC
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8007EFF0
  c->r[28]=c->r[3]|c->r[3]; // 8007EFF4
  cmps(c,0,(int32_t)c->r[0],0); // 8007EFF8
  if (!crb(c,2)) { goto L_8007F008; } // 8007EFFC
  c->lr=0x8007F004u; f_80080758(c); // 8007F000
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8007F004
L_8007F008:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8007F008
  c->r[5]=c->r[30]+0x00000000u; // 8007F00C
  c->r[4]=c->r[28]|c->r[28]; // 8007F010
  c->r[5]=R32(c->r[5]+0x00000064u); // 8007F014
  c->r[12]=R32(c->r[3]+0x00000000u); // 8007F018
  c->r[6]=0u+0x00000000u; // 8007F01C
  c->r[12]=R32(c->r[12]+0x0000013Cu); // 8007F020
  c->ctr=c->r[12]; // 8007F024
  if (true) { c->lr=0x8007F02Cu; dispatch(c,c->ctr); } // 8007F028
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8007F02C
  cmps(c,0,(int32_t)c->r[0],0); // 8007F030
  if (!crb(c,2)) { goto L_8007F040; } // 8007F034
  c->lr=0x8007F03Cu; f_80080758(c); // 8007F038
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8007F03C
L_8007F040:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8007F040
  c->r[5]=c->r[30]+0x00000000u; // 8007F044
  c->r[4]=R32(c->r[5]+0x000000B4u); // 8007F048
  c->r[6]=c->r[28]|c->r[28]; // 8007F04C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8007F050
  c->r[5]=R32(c->r[5]+0x00000058u); // 8007F054
  c->r[12]=R32(c->r[12]+0x0000012Cu); // 8007F058
  c->ctr=c->r[12]; // 8007F05C
  if (true) { c->lr=0x8007F064u; dispatch(c,c->ctr); } // 8007F060
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8007F064
  c->r[29]=c->r[3]|c->r[3]; // 8007F068
  cmps(c,0,(int32_t)c->r[0],0); // 8007F06C
  if (!crb(c,2)) { goto L_8007F07C; } // 8007F070
  c->lr=0x8007F078u; f_80080758(c); // 8007F074
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8007F078
L_8007F07C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8007F07C
  c->r[4]=c->r[28]|c->r[28]; // 8007F080
  c->r[12]=R32(c->r[3]+0x00000000u); // 8007F084
  c->r[12]=R32(c->r[12]+0x00000134u); // 8007F088
  c->ctr=c->r[12]; // 8007F08C
  if (true) { c->lr=0x8007F094u; dispatch(c,c->ctr); } // 8007F090
  c->r[28]=c->r[30]+0x00000000u; // 8007F094
  c->r[0]=R32(c->r[28]+0x00000058u); // 8007F098
  cmpu(c,0,c->r[29],c->r[0]); // 8007F09C
  if (crb(c,2)) { goto L_8007F0AC; } // 8007F0A0
  c->r[3]=0u+0x00000000u; // 8007F0A4
  goto L_8007F1C4; // 8007F0A8
L_8007F0AC:;
  c->r[4]=R32(c->r[28]+0x000000B4u); // 8007F0AC
  c->r[3]=0u+0x00000014u; // 8007F0B0
  c->r[0]=R32(c->r[28]+0x000000B8u); // 8007F0B4
  c->r[5]=R32(c->r[28]+0x00000064u); // 8007F0B8
  c->r[0]=c->r[4]+c->r[0]; // 8007F0BC
  c->r[29]=c->r[0]-c->r[5]; // 8007F0C0
  c->r[4]=c->r[29]|c->r[29]; // 8007F0C4
  c->lr=0x8007F0CCu; f_800801C4(c); // 8007F0C8
  c->r[0]=R8(c->r[28]+0x000000A7u); // 8007F0CC
  cmps(c,0,(int32_t)c->r[0],0); // 8007F0D0
  if (crb(c,2)) { goto L_8007F114; } // 8007F0D4
  c->r[4]=c->r[29]|c->r[29]; // 8007F0D8
  c->r[3]=0u+0x0000000Cu; // 8007F0DC
  c->lr=0x8007F0E4u; f_8007DB80(c); // 8007F0E0
  goto L_8007F114; // 8007F0E4
L_8007F0E8:;
  c->r[3]=0u+0x00000014u; // 8007F0E8
  c->r[4]=0u+0x00000000u; // 8007F0EC
  c->lr=0x8007F0F4u; f_800801C4(c); // 8007F0F0
  c->r[0]=R8(c->r[29]+0x000000A7u); // 8007F0F4
  cmps(c,0,(int32_t)c->r[0],0); // 8007F0F8
  if (crb(c,2)) { goto L_8007F10C; } // 8007F0FC
  c->r[3]=0u+0x0000000Cu; // 8007F100
  c->r[4]=0u+0x00000000u; // 8007F104
  c->lr=0x8007F10Cu; f_8007DB80(c); // 8007F108
L_8007F10C:;
  c->r[3]=0u+0x00000008u; // 8007F10C
  c->lr=0x8007F114u; f_8007FF4C(c); // 8007F110
L_8007F114:;
  c->r[28]=c->r[30]+0x00000000u; // 8007F114
  c->r[3]=0u+0xFFFFFFFFu; // 8007F118
  c->r[0]=0u+0x00000000u; // 8007F11C
  W32(c->r[28]+0x000000F0u,c->r[3]); // 8007F120
  W32(c->r[28]+0x000000F4u,c->r[0]); // 8007F124
  c->lr=0x8007F12Cu; f_8007EDA8(c); // 8007F128
  c->lr=0x8007F130u; f_80080298(c); // 8007F12C
  c->r[0]=R8(c->r[28]+0x000000A7u); // 8007F130
  cmps(c,0,(int32_t)c->r[0],0); // 8007F134
  if (crb(c,2)) { goto L_8007F140; } // 8007F138
  c->lr=0x8007F140u; f_8007DC50(c); // 8007F13C
L_8007F140:;
  c->r[3]=c->r[30]+0x00000000u; // 8007F140
  c->r[0]=R32(c->r[3]+0x000000B0u); // 8007F144
  cmps(c,0,(int32_t)c->r[0],0); // 8007F148
  if (!crb(c,2)) { goto L_8007F154; } // 8007F14C
  c->lr=0x8007F154u; f_8007FFEC(c); // 8007F150
L_8007F154:;
  c->r[3]=c->r[30]+0x00000340u; // 8007F154
  c->r[4]=c->r[1]+0x00000008u; // 8007F158
  c->r[5]=0u+0x00000001u; // 8007F15C
  c->lr=0x8007F164u; f_800B1140(c); // 8007F160
  c->r[0]=R32(c->r[1]+0x00000008u); // 8007F164
  cmps(c,0,(int32_t)c->r[0],0); // 8007F168
  if (crb(c,2)) { goto L_8007F178; } // 8007F16C
  c->r[0]=0u+0x00000001u; // 8007F170
  goto L_8007F17C; // 8007F174
L_8007F178:;
  c->r[0]=0u+0x00000000u; // 8007F178
L_8007F17C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8007F17C
  if (!crb(c,2)) { goto L_8007F18C; } // 8007F180
  c->r[3]=0u+0x00000000u; // 8007F184
  goto L_8007F1C4; // 8007F188
L_8007F18C:;
  c->r[4]=c->r[30]+0x00000000u; // 8007F18C
  c->r[0]=0u+0x00000000u; // 8007F190
  c->r[5]=0u+0x00000001u; // 8007F194
  c->r[3]=0u+0x80080000u; // 8007F198
  W8(c->r[4]+0x000000A4u,c->r[5]); // 8007F19C
  c->r[3]=c->r[3]+0xFFFFF350u; // 8007F1A0
  W8(c->r[4]+0x000000A5u,c->r[0]); // 8007F1A4
  W32(c->r[4]+0x000000F8u,c->r[0]); // 8007F1A8
  W32(c->r[4]+0x000000FCu,c->r[0]); // 8007F1AC
  c->lr=0x8007F1B4u; f_800C27C0(c); // 8007F1B0
  W32(c->r[13]+0xFFFF8B48u,c->r[3]); // 8007F1B4
  c->r[3]=0u+0x00000001u; // 8007F1B8
  goto L_8007F1C4; // 8007F1BC
L_8007F1C0:;
  c->r[3]=0u+0x00000000u; // 8007F1C0
L_8007F1C4:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007F1C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007F1C8
  c->lr=c->r[0]; // 8007F1CC
  c->r[1]=c->r[1]+0x00000030u; // 8007F1D0
  return; // 8007F1D4
}

// THPPlayerPlay
void f_8007F1D8(Ctx* __restrict c) {
  trace_call(0x8007F1D8u);
  c->r[3]=0u+0x802B0000u; // 8007F1D8
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007F1DC
  c->r[0]=R32(c->r[3]+0x000000A0u); // 8007F1E0
  cmps(c,0,(int32_t)c->r[0],0); // 8007F1E4
  if (crb(c,2)) { goto L_8007F230; } // 8007F1E8
  c->r[0]=R8(c->r[3]+0x000000A4u); // 8007F1EC
  cmpu(c,0,c->r[0],0x00000001u); // 8007F1F0
  if (crb(c,2)) { goto L_8007F200; } // 8007F1F4
  cmpu(c,0,c->r[0],0x00000004u); // 8007F1F8
  if (!crb(c,2)) { goto L_8007F230; } // 8007F1FC
L_8007F200:;
  c->r[5]=0u+0x802B0000u; // 8007F200
  c->r[3]=0u+0x00000002u; // 8007F204
  c->r[5]=c->r[5]+0xFFFF8B60u; // 8007F208
  c->r[4]=0u+0x00000000u; // 8007F20C
  c->r[0]=0u+0xFFFFFFFFu; // 8007F210
  W8(c->r[5]+0x000000A4u,c->r[3]); // 8007F214
  c->r[3]=0u+0x00000001u; // 8007F218
  W32(c->r[5]+0x000000D0u,c->r[4]); // 8007F21C
  W32(c->r[5]+0x000000D4u,c->r[4]); // 8007F220
  W32(c->r[5]+0x000000CCu,c->r[0]); // 8007F224
  W32(c->r[5]+0x000000C8u,c->r[0]); // 8007F228
  return; // 8007F22C
L_8007F230:;
  c->r[3]=0u+0x00000000u; // 8007F230
  return; // 8007F234
}

// THPPlayerStop
void f_8007F238(Ctx* __restrict c) {
  trace_call(0x8007F238u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F238
  c->r[0]=c->lr; // 8007F23C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007F240
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007F244
  c->r[31]=0u+0x802B0000u; // 8007F248
  c->r[31]=c->r[31]+0xFFFF8B60u; // 8007F24C
  c->r[0]=R32(c->r[31]+0x000000A0u); // 8007F250
  cmps(c,0,(int32_t)c->r[0],0); // 8007F254
  if (crb(c,2)) { goto L_8007F300; } // 8007F258
  c->r[0]=R8(c->r[31]+0x000000A4u); // 8007F25C
  cmps(c,0,(int32_t)c->r[0],0); // 8007F260
  if (crb(c,2)) { goto L_8007F300; } // 8007F264
  c->r[0]=0u+0x00000000u; // 8007F268
  W8(c->r[31]+0x000000A5u,c->r[0]); // 8007F26C
  c->r[3]=R32(c->r[13]+0xFFFF8B48u); // 8007F270
  W8(c->r[31]+0x000000A4u,c->r[0]); // 8007F274
  c->lr=0x8007F27Cu; f_800C27C0(c); // 8007F278
  c->r[0]=R32(c->r[31]+0x000000B0u); // 8007F27C
  cmps(c,0,(int32_t)c->r[0],0); // 8007F280
  if (!crb(c,2)) { goto L_8007F294; } // 8007F284
  c->r[3]=c->r[31]|c->r[31]; // 8007F288
  c->lr=0x8007F290u; f_800BE24C(c); // 8007F28C
  c->lr=0x8007F294u; f_80080008(c); // 8007F290
L_8007F294:;
  c->lr=0x8007F298u; f_800802B4(c); // 8007F294
  c->r[3]=0u+0x802B0000u; // 8007F298
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007F29C
  c->r[0]=R8(c->r[3]+0x000000A7u); // 8007F2A0
  cmps(c,0,(int32_t)c->r[0],0); // 8007F2A4
  if (crb(c,2)) { goto L_8007F2B0; } // 8007F2A8
  c->lr=0x8007F2B0u; f_8007DC6C(c); // 8007F2AC
L_8007F2B0:;
  c->r[31]=0u+0x802B0000u; // 8007F2B0
L_8007F2B4:;
  c->r[3]=c->r[31]+0xFFFF8EC0u; // 8007F2B4
  c->r[4]=c->r[1]+0x00000008u; // 8007F2B8
  c->r[5]=0u+0x00000000u; // 8007F2BC
  c->lr=0x8007F2C4u; f_800B1140(c); // 8007F2C0
  cmps(c,0,(int32_t)c->r[3],1); // 8007F2C4
  if (!crb(c,2)) { goto L_8007F2D4; } // 8007F2C8
  c->r[0]=R32(c->r[1]+0x00000008u); // 8007F2CC
  goto L_8007F2D8; // 8007F2D0
L_8007F2D4:;
  c->r[0]=0u+0x00000000u; // 8007F2D4
L_8007F2D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8007F2D8
  if (!crb(c,2)) { IRQCHK(c); goto L_8007F2B4; } // 8007F2DC
  c->r[3]=0u+0x802B0000u; // 8007F2E0
  c->r[0]=0u+0x00000000u; // 8007F2E4
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007F2E8
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F2EC
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 8007F2F0
  W32(c->r[3]+0x000000E8u,c->r[0]); // 8007F2F4
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8007F2F8
  W32(c->r[3]+0x000000ACu,c->r[0]); // 8007F2FC
L_8007F300:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007F300
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007F304
  c->lr=c->r[0]; // 8007F308
  c->r[1]=c->r[1]+0x00000020u; // 8007F30C
  return; // 8007F310
}

// THPPlayerPause
void f_8007F314(Ctx* __restrict c) {
  trace_call(0x8007F314u);
  c->r[4]=0u+0x802B0000u; // 8007F314
  c->r[4]=c->r[4]+0xFFFF8B60u; // 8007F318
  c->r[0]=R32(c->r[4]+0x000000A0u); // 8007F31C
  cmps(c,0,(int32_t)c->r[0],0); // 8007F320
  if (crb(c,2)) { goto L_8007F348; } // 8007F324
  c->r[0]=R8(c->r[4]+0x000000A4u); // 8007F328
  cmpu(c,0,c->r[0],0x00000002u); // 8007F32C
  if (!crb(c,2)) { goto L_8007F348; } // 8007F330
  c->r[0]=0u+0x00000004u; // 8007F334
  W8(c->r[4]+0x000000A5u,c->r[0]); // 8007F338
  c->r[3]=0u+0x00000001u; // 8007F33C
  W8(c->r[4]+0x000000A4u,c->r[0]); // 8007F340
  return; // 8007F344
L_8007F348:;
  c->r[3]=0u+0x00000000u; // 8007F348
  return; // 8007F34C
}

// PlayControl__FUl
void f_8007F350(Ctx* __restrict c) {
  trace_call(0x8007F350u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F350
  c->r[0]=c->lr; // 8007F354
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007F358
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007F35C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007F360
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007F364
  c->r[12]=R32(c->r[13]+0xFFFF8B48u); // 8007F368
  cmps(c,0,(int32_t)c->r[12],0); // 8007F36C
  if (crb(c,2)) { goto L_8007F37C; } // 8007F370
  c->ctr=c->r[12]; // 8007F374
  if (true) { c->lr=0x8007F37Cu; dispatch(c,c->ctr); } // 8007F378
L_8007F37C:;
  c->r[6]=0u+0x802B0000u; // 8007F37C
  c->r[30]=0u+0xFFFFFFFFu; // 8007F380
  c->r[6]=c->r[6]+0xFFFF8B60u; // 8007F384
  c->r[0]=R32(c->r[6]+0x000000A0u); // 8007F388
  cmps(c,0,(int32_t)c->r[0],0); // 8007F38C
  if (crb(c,2)) { goto L_8007F710; } // 8007F390
  c->r[0]=R8(c->r[6]+0x000000A4u); // 8007F394
  cmpu(c,0,c->r[0],0x00000002u); // 8007F398
  if (!crb(c,2)) { goto L_8007F710; } // 8007F39C
  c->r[0]=R32(c->r[6]+0x000000A8u); // 8007F3A0
  cmps(c,0,(int32_t)c->r[0],0); // 8007F3A4
  if (!crb(c,2)) { goto L_8007F3B8; } // 8007F3A8
  c->r[0]=R32(c->r[6]+0x000000ACu); // 8007F3AC
  cmps(c,0,(int32_t)c->r[0],0); // 8007F3B0
  if (crb(c,2)) { goto L_8007F3D0; } // 8007F3B4
L_8007F3B8:;
  c->r[3]=0u+0x802B0000u; // 8007F3B8
  c->r[0]=0u+0x00000005u; // 8007F3BC
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007F3C0
  W8(c->r[3]+0x000000A5u,c->r[0]); // 8007F3C4
  W8(c->r[3]+0x000000A4u,c->r[0]); // 8007F3C8
  goto L_8007F710; // 8007F3CC
L_8007F3D0:;
  c->r[4]=R32(c->r[6]+0x000000CCu); // 8007F3D0
  c->r[3]=0u+0x00000001u; // 8007F3D4
  c->r[5]=R32(c->r[6]+0x000000C8u); // 8007F3D8
  c->r[0]=0u+0x00000000u; // 8007F3DC
  c->r[4]=addc(c,c->r[4],c->r[3],0); // 8007F3E0
  W32(c->r[6]+0x000000CCu,c->r[4]); // 8007F3E4
  c->r[3]=addc(c,c->r[5],c->r[0],c->xer_ca); // 8007F3E8
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 8007F3EC
  W32(c->r[6]+0x000000C8u,c->r[3]); // 8007F3F0
  if (!crb(c,2)) { goto L_8007F4C0; } // 8007F3F4
  c->r[3]=R32(c->r[6]+0x00000088u); // 8007F3F8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8007F3FC
  if (crb(c,2)) { goto L_8007F418; } // 8007F400
  c->lr=0x8007F408u; f_800C4234(c); // 8007F404
  cmps(c,0,(int32_t)c->r[3],0); // 8007F408
  if (!crb(c,2)) { goto L_8007F43C; } // 8007F40C
  c->r[0]=0u+0x00000001u; // 8007F410
  goto L_8007F440; // 8007F414
L_8007F418:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8007F418
  if (crb(c,2)) { goto L_8007F434; } // 8007F41C
  c->lr=0x8007F424u; f_800C4234(c); // 8007F420
  cmpu(c,0,c->r[3],0x00000001u); // 8007F424
  if (!crb(c,2)) { goto L_8007F43C; } // 8007F428
  c->r[0]=0u+0x00000001u; // 8007F42C
  goto L_8007F440; // 8007F430
L_8007F434:;
  c->r[0]=0u+0x00000001u; // 8007F434
  goto L_8007F440; // 8007F438
L_8007F43C:;
  c->r[0]=0u+0x00000000u; // 8007F43C
L_8007F440:;
  cmps(c,0,(int32_t)c->r[0],0); // 8007F440
  if (crb(c,2)) { goto L_8007F4A8; } // 8007F444
  c->r[31]=0u+0x802B0000u; // 8007F448
  c->r[31]=c->r[31]+0xFFFF8B60u; // 8007F44C
  c->r[0]=R8(c->r[31]+0x000000A7u); // 8007F450
  cmps(c,0,(int32_t)c->r[0],0); // 8007F454
  if (crb(c,2)) { goto L_8007F498; } // 8007F458
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8007F45C
  c->r[0]=R32(c->r[31]+0x000000F0u); // 8007F460
  c->r[0]=c->r[0]-c->r[3]; // 8007F464
  cmps(c,0,(int32_t)c->r[0],1); // 8007F468
  if (crb(c,1)) { goto L_8007F48C; } // 8007F46C
  c->r[3]=0u+0x00000000u; // 8007F470
  c->lr=0x8007F478u; f_8008064C(c); // 8007F474
  c->r[4]=R32(c->r[31]+0x000000F0u); // 8007F478
  c->r[30]=c->r[3]|c->r[3]; // 8007F47C
  c->r[0]=c->r[4]+0x00000001u; // 8007F480
  W32(c->r[31]+0x000000F0u,c->r[0]); // 8007F484
  goto L_8007F628; // 8007F488
L_8007F48C:;
  c->r[0]=0u+0x00000002u; // 8007F48C
  W8(c->r[31]+0x000000A5u,c->r[0]); // 8007F490
  goto L_8007F628; // 8007F494
L_8007F498:;
  c->r[3]=0u+0x00000000u; // 8007F498
  c->lr=0x8007F4A0u; f_8008064C(c); // 8007F49C
  c->r[30]=c->r[3]|c->r[3]; // 8007F4A0
  goto L_8007F628; // 8007F4A4
L_8007F4A8:;
  c->r[3]=0u+0x802B0000u; // 8007F4A8
  c->r[0]=0u+0xFFFFFFFFu; // 8007F4AC
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007F4B0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8007F4B4
  W32(c->r[3]+0x000000C8u,c->r[0]); // 8007F4B8
  goto L_8007F628; // 8007F4BC
L_8007F4C0:;
  c->r[0]=c->r[4]^0x00000001u; // 8007F4C0
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 8007F4C4
  if (!crb(c,2)) { goto L_8007F4D4; } // 8007F4C8
  c->r[0]=0u+0x00000002u; // 8007F4CC
  W8(c->r[6]+0x000000A5u,c->r[0]); // 8007F4D0
L_8007F4D4:;
  c->r[31]=0u+0x802B0000u; // 8007F4D4
  c->r[31]=c->r[31]+0xFFFF8B60u; // 8007F4D8
  c->r[3]=R32(c->r[31]+0x00000088u); // 8007F4DC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8007F4E0
  if (crb(c,2)) { goto L_8007F4FC; } // 8007F4E4
  c->lr=0x8007F4ECu; f_800C4234(c); // 8007F4E8
  cmps(c,0,(int32_t)c->r[3],0); // 8007F4EC
  if (!crb(c,2)) { goto L_8007F5CC; } // 8007F4F0
  c->r[0]=0u+0x00000001u; // 8007F4F4
  goto L_8007F5D0; // 8007F4F8
L_8007F4FC:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8007F4FC
  if (crb(c,2)) { goto L_8007F518; } // 8007F500
  c->lr=0x8007F508u; f_800C4234(c); // 8007F504
  cmpu(c,0,c->r[3],0x00000001u); // 8007F508
  if (!crb(c,2)) { goto L_8007F5CC; } // 8007F50C
  c->r[0]=0u+0x00000001u; // 8007F510
  goto L_8007F5D0; // 8007F514
L_8007F518:;
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F518
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F51C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8007F520
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8007F524
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8007F528
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 8007F52C
  c->lr=0x8007F534u; f_800C4360(c); // 8007F530
  cmpu(c,0,c->r[3],0x00000001u); // 8007F534
  if (!crb(c,2)) { goto L_8007F574; } // 8007F538
  c->r[7]=R32(c->r[31]+0x000000CCu); // 8007F53C
  c->r[0]=sraw(c,c->r[29],31); // 8007F540
  c->r[4]=R32(c->r[31]+0x000000C8u); // 8007F544
  c->r[6]=0u+0x00001388u; // 8007F548
  c->r[3]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[29])>>32); // 8007F54C
  c->r[5]=0u+0x00000000u; // 8007F550
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[29]); // 8007F554
  c->r[3]=c->r[3]+c->r[4]; // 8007F558
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 8007F55C
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[29]); // 8007F560
  c->r[3]=c->r[3]+c->r[0]; // 8007F564
  c->lr=0x8007F56Cu; f_800D4B64(c); // 8007F568
  W32(c->r[31]+0x000000D4u,c->r[4]); // 8007F56C
  goto L_8007F5A8; // 8007F570
L_8007F574:;
  c->r[7]=R32(c->r[31]+0x000000CCu); // 8007F574
  c->r[0]=sraw(c,c->r[29],31); // 8007F578
  c->r[4]=R32(c->r[31]+0x000000C8u); // 8007F57C
  c->r[6]=0u+0x0000176Au; // 8007F580
  c->r[3]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[29])>>32); // 8007F584
  c->r[5]=0u+0x00000000u; // 8007F588
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[29]); // 8007F58C
  c->r[3]=c->r[3]+c->r[4]; // 8007F590
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 8007F594
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[29]); // 8007F598
  c->r[3]=c->r[3]+c->r[0]; // 8007F59C
  c->lr=0x8007F5A4u; f_800D4B64(c); // 8007F5A0
  W32(c->r[31]+0x000000D4u,c->r[4]); // 8007F5A4
L_8007F5A8:;
  c->r[3]=0u+0x802B0000u; // 8007F5A8
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007F5AC
  c->r[4]=R32(c->r[3]+0x000000D4u); // 8007F5B0
  c->r[0]=R32(c->r[3]+0x000000D0u); // 8007F5B4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8007F5B8
  if (crb(c,2)) { goto L_8007F5CC; } // 8007F5BC
  W32(c->r[3]+0x000000D0u,c->r[4]); // 8007F5C0
  c->r[0]=0u+0x00000001u; // 8007F5C4
  goto L_8007F5D0; // 8007F5C8
L_8007F5CC:;
  c->r[0]=0u+0x00000000u; // 8007F5CC
L_8007F5D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8007F5D0
  if (crb(c,2)) { goto L_8007F628; } // 8007F5D4
  c->r[31]=0u+0x802B0000u; // 8007F5D8
  c->r[31]=c->r[31]+0xFFFF8B60u; // 8007F5DC
  c->r[0]=R8(c->r[31]+0x000000A7u); // 8007F5E0
  cmps(c,0,(int32_t)c->r[0],0); // 8007F5E4
  if (crb(c,2)) { goto L_8007F61C; } // 8007F5E8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8007F5EC
  c->r[0]=R32(c->r[31]+0x000000F0u); // 8007F5F0
  c->r[0]=c->r[0]-c->r[3]; // 8007F5F4
  cmps(c,0,(int32_t)c->r[0],1); // 8007F5F8
  if (crb(c,1)) { goto L_8007F628; } // 8007F5FC
  c->r[3]=0u+0x00000000u; // 8007F600
  c->lr=0x8007F608u; f_8008064C(c); // 8007F604
  c->r[4]=R32(c->r[31]+0x000000F0u); // 8007F608
  c->r[30]=c->r[3]|c->r[3]; // 8007F60C
  c->r[0]=c->r[4]+0x00000001u; // 8007F610
  W32(c->r[31]+0x000000F0u,c->r[0]); // 8007F614
  goto L_8007F628; // 8007F618
L_8007F61C:;
  c->r[3]=0u+0x00000000u; // 8007F61C
  c->lr=0x8007F624u; f_8008064C(c); // 8007F620
  c->r[30]=c->r[3]|c->r[3]; // 8007F624
L_8007F628:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007F628
  if (crb(c,2)) { goto L_8007F66C; } // 8007F62C
  c->r[0]=c->r[30]+0x00010000u; // 8007F630
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8007F634
  if (crb(c,2)) { goto L_8007F66C; } // 8007F638
  c->r[3]=0u+0x802B0000u; // 8007F63C
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007F640
  c->r[4]=R32(c->r[3]+0x000000F8u); // 8007F644
  cmps(c,0,(int32_t)c->r[4],0); // 8007F648
  if (crb(c,2)) { goto L_8007F660; } // 8007F64C
  c->r[3]=0u+0x802B0000u; // 8007F650
  c->r[5]=0u+0x00000000u; // 8007F654
  c->r[3]=c->r[3]+0xFFFF8EC0u; // 8007F658
  c->lr=0x8007F660u; f_800B1078(c); // 8007F65C
L_8007F660:;
  c->r[3]=0u+0x802B0000u; // 8007F660
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007F664
  W32(c->r[3]+0x000000F8u,c->r[30]); // 8007F668
L_8007F66C:;
  c->r[5]=0u+0x802B0000u; // 8007F66C
  c->r[5]=c->r[5]+0xFFFF8B60u; // 8007F670
  c->r[0]=R8(c->r[5]+0x000000A6u); // 8007F674
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8007F678
  if (!crb(c,2)) { goto L_8007F710; } // 8007F67C
  c->r[0]=R8(c->r[5]+0x000000A7u); // 8007F680
  cmps(c,0,(int32_t)c->r[0],0); // 8007F684
  if (crb(c,2)) { goto L_8007F6C0; } // 8007F688
  c->r[4]=R32(c->r[5]+0x000000F4u); // 8007F68C
  c->r[3]=R32(c->r[5]+0x000000C0u); // 8007F690
  c->r[0]=R32(c->r[5]+0x00000050u); // 8007F694
  c->r[3]=c->r[4]+c->r[3]; // 8007F698
  cmpu(c,0,c->r[3],c->r[0]); // 8007F69C
  if (!crb(c,2)) { goto L_8007F710; } // 8007F6A0
  c->r[0]=R32(c->r[5]+0x000000FCu); // 8007F6A4
  cmps(c,0,(int32_t)c->r[0],0); // 8007F6A8
  if (!crb(c,2)) { goto L_8007F710; } // 8007F6AC
  c->r[0]=0u+0x00000003u; // 8007F6B0
  W8(c->r[5]+0x000000A5u,c->r[0]); // 8007F6B4
  W8(c->r[5]+0x000000A4u,c->r[0]); // 8007F6B8
  goto L_8007F710; // 8007F6BC
L_8007F6C0:;
  c->r[3]=R32(c->r[5]+0x000000F8u); // 8007F6C0
  cmps(c,0,(int32_t)c->r[3],0); // 8007F6C4
  if (crb(c,2)) { goto L_8007F6DC; } // 8007F6C8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8007F6CC
  c->r[0]=R32(c->r[5]+0x000000C0u); // 8007F6D0
  c->r[5]=c->r[3]+c->r[0]; // 8007F6D4
  goto L_8007F6E4; // 8007F6D8
L_8007F6DC:;
  c->r[3]=R32(c->r[5]+0x000000C0u); // 8007F6DC
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8007F6E0
L_8007F6E4:;
  c->r[4]=0u+0x802B0000u; // 8007F6E4
  c->r[4]=c->r[4]+0xFFFF8B60u; // 8007F6E8
  c->r[3]=R32(c->r[4]+0x00000050u); // 8007F6EC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007F6F0
  cmpu(c,0,c->r[5],c->r[0]); // 8007F6F4
  if (!crb(c,2)) { goto L_8007F710; } // 8007F6F8
  cmps(c,0,(int32_t)c->r[30],0); // 8007F6FC
  if (!crb(c,2)) { goto L_8007F710; } // 8007F700
  c->r[0]=0u+0x00000003u; // 8007F704
  W8(c->r[4]+0x000000A5u,c->r[0]); // 8007F708
  W8(c->r[4]+0x000000A4u,c->r[0]); // 8007F70C
L_8007F710:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007F710
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007F714
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007F718
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007F71C
  c->lr=c->r[0]; // 8007F720
  c->r[1]=c->r[1]+0x00000020u; // 8007F724
  return; // 8007F728
}

// THPPlayerDrawCurrentFrame
void f_8007F72C(Ctx* __restrict c) {
  trace_call(0x8007F72Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F72C
  c->r[0]=c->lr; // 8007F730
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007F734
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007F738
  c->r[31]=0u+0x802B0000u; // 8007F73C
  c->r[31]=c->r[31]+0xFFFF8B60u; // 8007F740
  c->r[27]=c->r[4]|c->r[4]; // 8007F744
  c->r[28]=c->r[5]|c->r[5]; // 8007F748
  c->r[29]=c->r[6]|c->r[6]; // 8007F74C
  c->r[30]=c->r[7]|c->r[7]; // 8007F750
  c->r[0]=R32(c->r[31]+0x000000A0u); // 8007F754
  cmps(c,0,(int32_t)c->r[0],0); // 8007F758
  if (crb(c,2)) { goto L_8007F7DC; } // 8007F75C
  c->r[0]=R8(c->r[31]+0x000000A4u); // 8007F760
  cmps(c,0,(int32_t)c->r[0],0); // 8007F764
  if (crb(c,2)) { goto L_8007F7DC; } // 8007F768
  c->r[0]=R32(c->r[31]+0x000000F8u); // 8007F76C
  cmps(c,0,(int32_t)c->r[0],0); // 8007F770
  if (crb(c,2)) { goto L_8007F7DC; } // 8007F774
  c->lr=0x8007F77Cu; f_8007DFD8(c); // 8007F778
  c->r[5]=R32(c->r[31]+0x000000F8u); // 8007F77C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007F780
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8007F784
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007F788
  W32(c->r[1]+0x00000008u,c->r[0]); // 8007F78C
  c->r[10]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 8007F790
  c->r[4]=R32(c->r[31]+0x00000080u); // 8007F794
  c->r[0]=R32(c->r[31]+0x00000084u); // 8007F798
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 8007F79C
  c->r[3]=R32(c->r[5]+0x00000000u); // 8007F7A0
  c->r[4]=R32(c->r[5]+0x00000004u); // 8007F7A4
  c->r[9]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8007F7A8
  c->r[5]=R32(c->r[5]+0x00000008u); // 8007F7AC
  c->lr=0x8007F7B4u; f_8007E48C(c); // 8007F7B0
  c->lr=0x8007F7B8u; f_8007DEC0(c); // 8007F7B4
  c->r[3]=R32(c->r[31]+0x000000F8u); // 8007F7B8
  c->r[0]=R32(c->r[31]+0x000000C0u); // 8007F7BC
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 8007F7C0
  c->r[3]=R32(c->r[31]+0x00000050u); // 8007F7C4
  c->r[4]=c->r[4]+c->r[0]; // 8007F7C8
  c->r[0]=divwu(c->r[4],c->r[3]); // 8007F7CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 8007F7D0
  c->r[3]=c->r[4]-c->r[0]; // 8007F7D4
  goto L_8007F7E0; // 8007F7D8
L_8007F7DC:;
  c->r[3]=0u+0xFFFFFFFFu; // 8007F7DC
L_8007F7E0:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007F7E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007F7E4
  c->lr=c->r[0]; // 8007F7E8
  c->r[1]=c->r[1]+0x00000030u; // 8007F7EC
  return; // 8007F7F0
}

// THPPlayerGetVideoInfo
void f_8007F7F4(Ctx* __restrict c) {
  trace_call(0x8007F7F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F7F4
  c->r[0]=c->lr; // 8007F7F8
  c->r[4]=0u+0x802B0000u; // 8007F7FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007F800
  c->r[4]=c->r[4]+0xFFFF8B60u; // 8007F804
  c->r[0]=R32(c->r[4]+0x000000A0u); // 8007F808
  cmps(c,0,(int32_t)c->r[0],0); // 8007F80C
  if (crb(c,2)) { goto L_8007F828; } // 8007F810
  c->r[4]=c->r[4]+0x00000080u; // 8007F814
  c->r[5]=0u+0x0000000Cu; // 8007F818
  c->lr=0x8007F820u; f_80004338(c); // 8007F81C
  c->r[3]=0u+0x00000001u; // 8007F820
  goto L_8007F82C; // 8007F824
L_8007F828:;
  c->r[3]=0u+0x00000000u; // 8007F828
L_8007F82C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007F82C
  c->lr=c->r[0]; // 8007F830
  c->r[1]=c->r[1]+0x00000010u; // 8007F834
  return; // 8007F838
}

// THPPlayerGetAudioInfo
void f_8007F83C(Ctx* __restrict c) {
  trace_call(0x8007F83Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F83C
  c->r[0]=c->lr; // 8007F840
  c->r[4]=0u+0x802B0000u; // 8007F844
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007F848
  c->r[4]=c->r[4]+0xFFFF8B60u; // 8007F84C
  c->r[0]=R32(c->r[4]+0x000000A0u); // 8007F850
  cmps(c,0,(int32_t)c->r[0],0); // 8007F854
  if (crb(c,2)) { goto L_8007F870; } // 8007F858
  c->r[4]=c->r[4]+0x0000008Cu; // 8007F85C
  c->r[5]=0u+0x00000010u; // 8007F860
  c->lr=0x8007F868u; f_80004338(c); // 8007F864
  c->r[3]=0u+0x00000001u; // 8007F868
  goto L_8007F874; // 8007F86C
L_8007F870:;
  c->r[3]=0u+0x00000000u; // 8007F870
L_8007F874:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007F874
  c->lr=c->r[0]; // 8007F878
  c->r[1]=c->r[1]+0x00000010u; // 8007F87C
  return; // 8007F880
}

// THPPlayerGetState
void f_8007F884(Ctx* __restrict c) {
  trace_call(0x8007F884u);
  c->r[3]=0u+0x802B0000u; // 8007F884
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007F888
  c->r[3]=R8(c->r[3]+0x000000A4u); // 8007F88C
  return; // 8007F890
}

// THPPlayerDrawDone
void f_8007F894(Ctx* __restrict c) {
  trace_call(0x8007F894u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F894
  c->r[0]=c->lr; // 8007F898
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007F89C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007F8A0
  c->lr=0x8007F8A8u; f_800CF7EC(c); // 8007F8A4
  c->r[0]=R32(c->r[13]+0xFFFF8B40u); // 8007F8A8
  cmps(c,0,(int32_t)c->r[0],0); // 8007F8AC
  if (crb(c,2)) { goto L_8007F8EC; } // 8007F8B0
  c->r[31]=0u+0x802B0000u; // 8007F8B4
L_8007F8B8:;
  c->r[3]=c->r[31]+0xFFFF8EC0u; // 8007F8B8
  c->r[4]=c->r[1]+0x00000008u; // 8007F8BC
  c->r[5]=0u+0x00000000u; // 8007F8C0
  c->lr=0x8007F8C8u; f_800B1140(c); // 8007F8C4
  cmps(c,0,(int32_t)c->r[3],1); // 8007F8C8
  if (crb(c,2)) { goto L_8007F8D8; } // 8007F8CC
  c->r[3]=0u+0x00000000u; // 8007F8D0
  goto L_8007F8DC; // 8007F8D4
L_8007F8D8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007F8D8
L_8007F8DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8007F8DC
  if (crb(c,2)) { goto L_8007F8EC; } // 8007F8E0
  c->lr=0x8007F8E8u; f_80080638(c); // 8007F8E4
  IRQCHK(c); goto L_8007F8B8; // 8007F8E8
L_8007F8EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007F8EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007F8F0
  c->lr=c->r[0]; // 8007F8F4
  c->r[1]=c->r[1]+0x00000020u; // 8007F8F8
  return; // 8007F8FC
}

// THPAudioMixCallback__Fv
void f_8007F900(Ctx* __restrict c) {
  trace_call(0x8007F900u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F900
  c->r[0]=c->lr; // 8007F904
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007F908
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007F90C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007F910
  c->r[0]=R32(c->r[13]+0xFFFF8B5Cu); // 8007F914
  cmps(c,0,(int32_t)c->r[0],0); // 8007F918
  if (!crb(c,2)) { goto L_8007F984; } // 8007F91C
  c->r[0]=R32(c->r[13]+0xFFFF8B4Cu); // 8007F920
  c->r[31]=0u+0x802B0000u; // 8007F924
  c->r[31]=c->r[31]+0xFFFF8F00u; // 8007F928
  c->r[4]=0u+0x00000180u; // 8007F92C
  c->r[0]=c->r[0]^0x00000001u; // 8007F930
  W32(c->r[13]+0xFFFF8B4Cu,c->r[0]); // 8007F934
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 8007F938
  c->r[3]=c->r[31]+c->r[0]; // 8007F93C
  c->lr=0x8007F944u; f_800C7904(c); // 8007F940
  c->lr=0x8007F948u; f_800B0890(c); // 8007F944
  c->r[0]=R32(c->r[13]+0xFFFF8B4Cu); // 8007F948
  c->r[30]=c->r[3]|c->r[3]; // 8007F94C
  c->r[4]=0u+0x00000000u; // 8007F950
  c->r[5]=0u+0x00000060u; // 8007F954
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 8007F958
  c->r[3]=c->r[31]+c->r[0]; // 8007F95C
  c->lr=0x8007F964u; f_8007FA68(c); // 8007F960
  c->r[0]=R32(c->r[13]+0xFFFF8B4Cu); // 8007F964
  c->r[4]=0u+0x00000180u; // 8007F968
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 8007F96C
  c->r[3]=c->r[31]+c->r[0]; // 8007F970
  c->lr=0x8007F978u; f_800ABD2C(c); // 8007F974
  c->r[3]=c->r[30]|c->r[30]; // 8007F978
  c->lr=0x8007F980u; f_800B08A4(c); // 8007F97C
  goto L_8007FA50; // 8007F980
L_8007F984:;
  cmps(c,0,(int32_t)c->r[0],1); // 8007F984
  if (!crb(c,2)) { goto L_8007F9B8; } // 8007F988
  c->r[0]=R32(c->r[13]+0xFFFF8B54u); // 8007F98C
  cmps(c,0,(int32_t)c->r[0],0); // 8007F990
  if (crb(c,2)) { goto L_8007F99C; } // 8007F994
  W32(c->r[13]+0xFFFF8B58u,c->r[0]); // 8007F998
L_8007F99C:;
  c->r[12]=R32(c->r[13]+0xFFFF8B50u); // 8007F99C
  c->ctr=c->r[12]; // 8007F9A0
  if (true) { c->lr=0x8007F9A8u; dispatch(c,c->ctr); } // 8007F9A4
  c->lr=0x8007F9ACu; f_800C79A4(c); // 8007F9A8
  c->r[0]=c->r[3]+0x80000000u; // 8007F9AC
  W32(c->r[13]+0xFFFF8B54u,c->r[0]); // 8007F9B0
  goto L_8007F9D0; // 8007F9B4
L_8007F9B8:;
  c->r[12]=R32(c->r[13]+0xFFFF8B50u); // 8007F9B8
  c->ctr=c->r[12]; // 8007F9BC
  if (true) { c->lr=0x8007F9C4u; dispatch(c,c->ctr); } // 8007F9C0
  c->lr=0x8007F9C8u; f_800C79A4(c); // 8007F9C4
  c->r[0]=c->r[3]+0x80000000u; // 8007F9C8
  W32(c->r[13]+0xFFFF8B58u,c->r[0]); // 8007F9CC
L_8007F9D0:;
  c->r[0]=R32(c->r[13]+0xFFFF8B4Cu); // 8007F9D0
  c->r[3]=0u+0x802B0000u; // 8007F9D4
  c->r[3]=c->r[3]+0xFFFF8F00u; // 8007F9D8
  c->r[4]=0u+0x00000180u; // 8007F9DC
  c->r[0]=c->r[0]^0x00000001u; // 8007F9E0
  W32(c->r[13]+0xFFFF8B4Cu,c->r[0]); // 8007F9E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 8007F9E8
  c->r[3]=c->r[3]+c->r[0]; // 8007F9EC
  c->lr=0x8007F9F4u; f_800C7904(c); // 8007F9F0
  c->lr=0x8007F9F8u; f_800B0890(c); // 8007F9F4
  c->r[0]=R32(c->r[13]+0xFFFF8B58u); // 8007F9F8
  c->r[30]=c->r[3]|c->r[3]; // 8007F9FC
  cmps(c,0,(int32_t)c->r[0],0); // 8007FA00
  if (crb(c,2)) { goto L_8007FA14; } // 8007FA04
  c->r[3]=c->r[0]|c->r[0]; // 8007FA08
  c->r[4]=0u+0x00000180u; // 8007FA0C
  c->lr=0x8007FA14u; f_800ABD00(c); // 8007FA10
L_8007FA14:;
  c->r[0]=R32(c->r[13]+0xFFFF8B4Cu); // 8007FA14
  c->r[31]=0u+0x802B0000u; // 8007FA18
  c->r[31]=c->r[31]+0xFFFF8F00u; // 8007FA1C
  c->r[4]=R32(c->r[13]+0xFFFF8B58u); // 8007FA20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 8007FA24
  c->r[5]=0u+0x00000060u; // 8007FA28
  c->r[3]=c->r[31]+c->r[0]; // 8007FA2C
  c->lr=0x8007FA34u; f_8007FA68(c); // 8007FA30
  c->r[0]=R32(c->r[13]+0xFFFF8B4Cu); // 8007FA34
  c->r[4]=0u+0x00000180u; // 8007FA38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 8007FA3C
  c->r[3]=c->r[31]+c->r[0]; // 8007FA40
  c->lr=0x8007FA48u; f_800ABD2C(c); // 8007FA44
  c->r[3]=c->r[30]|c->r[30]; // 8007FA48
  c->lr=0x8007FA50u; f_800B08A4(c); // 8007FA4C
L_8007FA50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007FA50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007FA54
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007FA58
  c->lr=c->r[0]; // 8007FA5C
  c->r[1]=c->r[1]+0x00000010u; // 8007FA60
  return; // 8007FA64
}

// MixAudio__FPsPsUl
void f_8007FA68(Ctx* __restrict c) {
  trace_call(0x8007FA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FA68
  c->r[0]=c->lr; // 8007FA6C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007FA70
  c->r[11]=c->r[1]+0x00000030u; // 8007FA74
  c->lr=0x8007FA7Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007FA78
  cmps(c,0,(int32_t)c->r[4],0); // 8007FA7C
  if (crb(c,2)) { goto L_8007FC38; } // 8007FA80
  c->r[6]=0u+0x802B0000u; // 8007FA84
  c->r[30]=c->r[6]+0xFFFF8B60u; // 8007FA88
  c->r[0]=R32(c->r[30]+0x000000A0u); // 8007FA8C
  cmps(c,0,(int32_t)c->r[0],0); // 8007FA90
  if (crb(c,2)) { goto L_8007FC2C; } // 8007FA94
  c->r[0]=R8(c->r[30]+0x000000A5u); // 8007FA98
  cmpu(c,0,c->r[0],0x00000002u); // 8007FA9C
  if (!crb(c,2)) { goto L_8007FC2C; } // 8007FAA0
  c->r[0]=R8(c->r[30]+0x000000A7u); // 8007FAA4
  cmps(c,0,(int32_t)c->r[0],0); // 8007FAA8
  if (crb(c,2)) { goto L_8007FC2C; } // 8007FAAC
  c->r[31]=0u+0x80260000u; // 8007FAB0
  c->r[29]=c->r[5]|c->r[5]; // 8007FAB4
  c->r[28]=c->r[3]|c->r[3]; // 8007FAB8
  c->r[27]=c->r[4]|c->r[4]; // 8007FABC
  c->r[31]=c->r[31]+0x00004110u; // 8007FAC0
  c->r[26]=0u+0x00000000u; // 8007FAC4
L_8007FAC8:;
  c->r[0]=R32(c->r[30]+0x000000FCu); // 8007FAC8
  cmps(c,0,(int32_t)c->r[0],0); // 8007FACC
  if (!crb(c,2)) { goto L_8007FB08; } // 8007FAD0
  c->r[3]=0u+0x00000000u; // 8007FAD4
  c->lr=0x8007FADCu; f_8007DE7C(c); // 8007FAD8
  cmps(c,0,(int32_t)c->r[3],0); // 8007FADC
  W32(c->r[30]+0x000000FCu,c->r[3]); // 8007FAE0
  if (!crb(c,2)) { goto L_8007FAFC; } // 8007FAE4
  c->r[3]=c->r[28]|c->r[28]; // 8007FAE8
  c->r[4]=c->r[27]|c->r[27]; // 8007FAEC
  c->r[5]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8007FAF0
  c->lr=0x8007FAF8u; f_80004338(c); // 8007FAF4
  goto L_8007FDD4; // 8007FAF8
L_8007FAFC:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8007FAFC
  c->r[0]=c->r[3]+0x00000001u; // 8007FB00
  W32(c->r[30]+0x000000F4u,c->r[0]); // 8007FB04
L_8007FB08:;
  c->r[3]=R32(c->r[30]+0x000000FCu); // 8007FB08
  c->r[5]=R32(c->r[3]+0x00000008u); // 8007FB0C
  cmps(c,0,(int32_t)c->r[5],0); // 8007FB10
  if (crb(c,2)) { IRQCHK(c); goto L_8007FAC8; } // 8007FB14
  cmpu(c,0,c->r[5],c->r[29]); // 8007FB18
  if (crb(c,0)) { goto L_8007FB24; } // 8007FB1C
  c->r[5]=c->r[29]|c->r[29]; // 8007FB20
L_8007FB24:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 8007FB24
  c->ctr=c->r[5]; // 8007FB28
  cmpu(c,0,c->r[5],0x00000000u); // 8007FB2C
  if (!crb(c,1)) { goto L_8007FBEC; } // 8007FB30
L_8007FB34:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8007FB34
  cmps(c,0,(int32_t)c->r[3],0); // 8007FB38
  if (crb(c,2)) { goto L_8007FB5C; } // 8007FB3C
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8007FB40
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007FB44
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007FB48
  W32(c->r[30]+0x000000E8u,c->r[0]); // 8007FB4C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8007FB50
  {uint32_t ea=c->r[30]+0x000000DCu; WF32(ea,c->f[0]);} // 8007FB54
  goto L_8007FB64; // 8007FB58
L_8007FB5C:;
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007FB5C
  {uint32_t ea=c->r[30]+0x000000DCu; WF32(ea,c->f[0]);} // 8007FB60
L_8007FB64:;
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8007FB64
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000000u); // 8007FB68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8007FB6C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000000u); // 8007FB70
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8007FB74
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8007FB78
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8007FB7C
  c->r[4]=R16(c->r[31]+c->r[4]); // 8007FB80
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8007FB84
  c->r[0]=sraw(c,c->r[0],15); // 8007FB88
  c->r[0]=c->r[3]+c->r[0]; // 8007FB8C
  cmps(c,0,(int32_t)c->r[0],-32768); // 8007FB90
  if (!crb(c,0)) { goto L_8007FB9C; } // 8007FB94
  c->r[0]=0u+0xFFFF8000u; // 8007FB98
L_8007FB9C:;
  cmps(c,0,(int32_t)c->r[0],32767); // 8007FB9C
  if (!crb(c,1)) { goto L_8007FBA8; } // 8007FBA0
  c->r[0]=0u+0x00007FFFu; // 8007FBA4
L_8007FBA8:;
  W16(c->r[28]+0x00000000u,c->r[0]); // 8007FBA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000002u); // 8007FBAC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000002u); // 8007FBB0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8007FBB4
  c->r[0]=sraw(c,c->r[0],15); // 8007FBB8
  c->r[0]=c->r[3]+c->r[0]; // 8007FBBC
  cmps(c,0,(int32_t)c->r[0],-32768); // 8007FBC0
  if (!crb(c,0)) { goto L_8007FBCC; } // 8007FBC4
  c->r[0]=0u+0xFFFF8000u; // 8007FBC8
L_8007FBCC:;
  cmps(c,0,(int32_t)c->r[0],32767); // 8007FBCC
  if (!crb(c,1)) { goto L_8007FBD8; } // 8007FBD0
  c->r[0]=0u+0x00007FFFu; // 8007FBD4
L_8007FBD8:;
  W16(c->r[28]+0x00000002u,c->r[0]); // 8007FBD8
  c->r[28]=c->r[28]+0x00000004u; // 8007FBDC
  c->r[27]=c->r[27]+0x00000004u; // 8007FBE0
  c->r[6]=c->r[6]+0x00000004u; // 8007FBE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007FB34; } // 8007FBE8
L_8007FBEC:;
  c->r[3]=R32(c->r[30]+0x000000FCu); // 8007FBEC
  c->r[29]=c->r[29]-c->r[5]; // 8007FBF0
  c->r[0]=R32(c->r[3]+0x00000008u); // 8007FBF4
  c->r[0]=c->r[0]-c->r[5]; // 8007FBF8
  W32(c->r[3]+0x00000008u,c->r[0]); // 8007FBFC
  c->r[3]=R32(c->r[30]+0x000000FCu); // 8007FC00
  W32(c->r[3]+0x00000004u,c->r[6]); // 8007FC04
  c->r[3]=R32(c->r[30]+0x000000FCu); // 8007FC08
  c->r[0]=R32(c->r[3]+0x00000008u); // 8007FC0C
  cmps(c,0,(int32_t)c->r[0],0); // 8007FC10
  if (!crb(c,2)) { goto L_8007FC20; } // 8007FC14
  c->lr=0x8007FC1Cu; f_8007DE68(c); // 8007FC18
  W32(c->r[30]+0x000000FCu,c->r[26]); // 8007FC1C
L_8007FC20:;
  cmps(c,0,(int32_t)c->r[29],0); // 8007FC20
  if (crb(c,2)) { goto L_8007FDD4; } // 8007FC24
  IRQCHK(c); goto L_8007FAC8; // 8007FC28
L_8007FC2C:;
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8007FC2C
  c->lr=0x8007FC34u; f_80004338(c); // 8007FC30
  goto L_8007FDD4; // 8007FC34
L_8007FC38:;
  c->r[4]=0u+0x802B0000u; // 8007FC38
  c->r[31]=c->r[4]+0xFFFF8B60u; // 8007FC3C
  c->r[0]=R32(c->r[31]+0x000000A0u); // 8007FC40
  cmps(c,0,(int32_t)c->r[0],0); // 8007FC44
  if (crb(c,2)) { goto L_8007FDC8; } // 8007FC48
  c->r[0]=R8(c->r[31]+0x000000A5u); // 8007FC4C
  cmpu(c,0,c->r[0],0x00000002u); // 8007FC50
  if (!crb(c,2)) { goto L_8007FDC8; } // 8007FC54
  c->r[0]=R8(c->r[31]+0x000000A7u); // 8007FC58
  cmps(c,0,(int32_t)c->r[0],0); // 8007FC5C
  if (crb(c,2)) { goto L_8007FDC8; } // 8007FC60
  c->r[28]=0u+0x80260000u; // 8007FC64
  c->r[30]=c->r[5]|c->r[5]; // 8007FC68
  c->r[29]=c->r[3]|c->r[3]; // 8007FC6C
  c->r[27]=0u+0x00000000u; // 8007FC70
  c->r[28]=c->r[28]+0x00004110u; // 8007FC74
L_8007FC78:;
  c->r[0]=R32(c->r[31]+0x000000FCu); // 8007FC78
  cmps(c,0,(int32_t)c->r[0],0); // 8007FC7C
  if (!crb(c,2)) { goto L_8007FCB8; } // 8007FC80
  c->r[3]=0u+0x00000000u; // 8007FC84
  c->lr=0x8007FC8Cu; f_8007DE7C(c); // 8007FC88
  cmps(c,0,(int32_t)c->r[3],0); // 8007FC8C
  W32(c->r[31]+0x000000FCu,c->r[3]); // 8007FC90
  if (!crb(c,2)) { goto L_8007FCAC; } // 8007FC94
  c->r[3]=c->r[29]|c->r[29]; // 8007FC98
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8007FC9C
  c->r[4]=0u+0x00000000u; // 8007FCA0
  c->lr=0x8007FCA8u; f_80004688(c); // 8007FCA4
  goto L_8007FDD4; // 8007FCA8
L_8007FCAC:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8007FCAC
  c->r[0]=c->r[3]+0x00000001u; // 8007FCB0
  W32(c->r[31]+0x000000F4u,c->r[0]); // 8007FCB4
L_8007FCB8:;
  c->r[3]=R32(c->r[31]+0x000000FCu); // 8007FCB8
  c->r[4]=R32(c->r[3]+0x00000008u); // 8007FCBC
  cmps(c,0,(int32_t)c->r[4],0); // 8007FCC0
  if (crb(c,2)) { IRQCHK(c); goto L_8007FC78; } // 8007FCC4
  cmpu(c,0,c->r[4],c->r[30]); // 8007FCC8
  if (crb(c,0)) { goto L_8007FCD4; } // 8007FCCC
  c->r[4]=c->r[30]|c->r[30]; // 8007FCD0
L_8007FCD4:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 8007FCD4
  c->ctr=c->r[4]; // 8007FCD8
  cmpu(c,0,c->r[4],0x00000000u); // 8007FCDC
  if (!crb(c,1)) { goto L_8007FD88; } // 8007FCE0
L_8007FCE4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8007FCE4
  cmps(c,0,(int32_t)c->r[3],0); // 8007FCE8
  if (crb(c,2)) { goto L_8007FD0C; } // 8007FCEC
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8007FCF0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007FCF4
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007FCF8
  W32(c->r[31]+0x000000E8u,c->r[0]); // 8007FCFC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8007FD00
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 8007FD04
  goto L_8007FD14; // 8007FD08
L_8007FD0C:;
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007FD0C
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 8007FD10
L_8007FD14:;
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8007FD14
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000000u); // 8007FD18
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8007FD1C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8007FD20
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8007FD24
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8007FD28
  c->r[3]=R16(c->r[28]+c->r[3]); // 8007FD2C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8007FD30
  c->r[0]=sraw(c,c->r[0],15); // 8007FD34
  cmps(c,0,(int32_t)c->r[0],-32768); // 8007FD38
  if (!crb(c,0)) { goto L_8007FD44; } // 8007FD3C
  c->r[0]=0u+0xFFFF8000u; // 8007FD40
L_8007FD44:;
  cmps(c,0,(int32_t)c->r[0],32767); // 8007FD44
  if (!crb(c,1)) { goto L_8007FD50; } // 8007FD48
  c->r[0]=0u+0x00007FFFu; // 8007FD4C
L_8007FD50:;
  W16(c->r[29]+0x00000000u,c->r[0]); // 8007FD50
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 8007FD54
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8007FD58
  c->r[0]=sraw(c,c->r[0],15); // 8007FD5C
  cmps(c,0,(int32_t)c->r[0],-32768); // 8007FD60
  if (!crb(c,0)) { goto L_8007FD6C; } // 8007FD64
  c->r[0]=0u+0xFFFF8000u; // 8007FD68
L_8007FD6C:;
  cmps(c,0,(int32_t)c->r[0],32767); // 8007FD6C
  if (!crb(c,1)) { goto L_8007FD78; } // 8007FD70
  c->r[0]=0u+0x00007FFFu; // 8007FD74
L_8007FD78:;
  W16(c->r[29]+0x00000002u,c->r[0]); // 8007FD78
  c->r[29]=c->r[29]+0x00000004u; // 8007FD7C
  c->r[5]=c->r[5]+0x00000004u; // 8007FD80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007FCE4; } // 8007FD84
L_8007FD88:;
  c->r[3]=R32(c->r[31]+0x000000FCu); // 8007FD88
  c->r[30]=c->r[30]-c->r[4]; // 8007FD8C
  c->r[0]=R32(c->r[3]+0x00000008u); // 8007FD90
  c->r[0]=c->r[0]-c->r[4]; // 8007FD94
  W32(c->r[3]+0x00000008u,c->r[0]); // 8007FD98
  c->r[3]=R32(c->r[31]+0x000000FCu); // 8007FD9C
  W32(c->r[3]+0x00000004u,c->r[5]); // 8007FDA0
  c->r[3]=R32(c->r[31]+0x000000FCu); // 8007FDA4
  c->r[0]=R32(c->r[3]+0x00000008u); // 8007FDA8
  cmps(c,0,(int32_t)c->r[0],0); // 8007FDAC
  if (!crb(c,2)) { goto L_8007FDBC; } // 8007FDB0
  c->lr=0x8007FDB8u; f_8007DE68(c); // 8007FDB4
  W32(c->r[31]+0x000000FCu,c->r[27]); // 8007FDB8
L_8007FDBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007FDBC
  if (crb(c,2)) { goto L_8007FDD4; } // 8007FDC0
  IRQCHK(c); goto L_8007FC78; // 8007FDC4
L_8007FDC8:;
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8007FDC8
  c->r[4]=0u+0x00000000u; // 8007FDCC
  c->lr=0x8007FDD4u; f_80004688(c); // 8007FDD0
L_8007FDD4:;
  c->r[11]=c->r[1]+0x00000030u; // 8007FDD4
  c->lr=0x8007FDDCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007FDD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007FDDC
  c->lr=c->r[0]; // 8007FDE0
  c->r[1]=c->r[1]+0x00000030u; // 8007FDE4
  return; // 8007FDE8
}

// THPPlayerSetVolume
void f_8007FDEC(Ctx* __restrict c) {
  trace_call(0x8007FDECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FDEC
  c->r[0]=c->lr; // 8007FDF0
  c->r[5]=0u+0x802B0000u; // 8007FDF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007FDF8
  c->r[5]=c->r[5]+0xFFFF8B60u; // 8007FDFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007FE00
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007FE04
  c->r[30]=c->r[4]|c->r[4]; // 8007FE08
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007FE0C
  c->r[29]=c->r[3]|c->r[3]; // 8007FE10
  c->r[0]=R32(c->r[5]+0x000000A0u); // 8007FE14
  cmps(c,0,(int32_t)c->r[0],0); // 8007FE18
  if (crb(c,2)) { goto L_8007FEF4; } // 8007FE1C
  c->r[0]=R8(c->r[5]+0x000000A7u); // 8007FE20
  cmps(c,0,(int32_t)c->r[0],0); // 8007FE24
  if (crb(c,2)) { goto L_8007FEF4; } // 8007FE28
  c->lr=0x8007FE30u; f_800C79D4(c); // 8007FE2C
  cmps(c,0,(int32_t)c->r[3],0); // 8007FE30
  c->r[31]=0u+0x00000030u; // 8007FE34
  if (!crb(c,2)) { goto L_8007FE40; } // 8007FE38
  c->r[31]=0u+0x00000020u; // 8007FE3C
L_8007FE40:;
  cmps(c,0,(int32_t)c->r[29],127); // 8007FE40
  if (!crb(c,1)) { goto L_8007FE4C; } // 8007FE44
  c->r[29]=0u+0x0000007Fu; // 8007FE48
L_8007FE4C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8007FE4C
  if (!crb(c,0)) { goto L_8007FE58; } // 8007FE50
  c->r[29]=0u+0x00000000u; // 8007FE54
L_8007FE58:;
  c->r[3]=0u+0x00010000u; // 8007FE58
  c->r[0]=c->r[3]+0xFFFFEA60u; // 8007FE5C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8007FE60
  if (!crb(c,1)) { goto L_8007FE6C; } // 8007FE64
  c->r[30]=c->r[0]|c->r[0]; // 8007FE68
L_8007FE6C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007FE6C
  if (!crb(c,0)) { goto L_8007FE78; } // 8007FE70
  c->r[30]=0u+0x00000000u; // 8007FE74
L_8007FE78:;
  c->lr=0x8007FE7Cu; f_800B087C(c); // 8007FE78
  c->r[0]=c->r[29]^0x80000000u; // 8007FE7C
  c->r[5]=0u+0x43300000u; // 8007FE80
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8007FE84
  c->r[4]=0u+0x802B0000u; // 8007FE88
  {uint32_t ea=c->r[2]+0xFFFF8BD0u; c->f[2]=RF64(ea);} // 8007FE8C
  cmps(c,0,(int32_t)c->r[30],0); // 8007FE90
  W32(c->r[1]+0x00000008u,c->r[5]); // 8007FE94
  c->r[4]=c->r[4]+0xFFFF8B60u; // 8007FE98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8007FE9C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8007FEA0
  {uint32_t ea=c->r[4]+0x000000E0u; WF32(ea,c->f[1]);} // 8007FEA4
  if (crb(c,2)) { goto L_8007FEDC; } // 8007FEA8
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[30]); // 8007FEAC
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8007FEB0
  W32(c->r[1]+0x00000008u,c->r[5]); // 8007FEB4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8007FEB8
  W32(c->r[4]+0x000000E8u,c->r[0]); // 8007FEBC
  c->r[0]=c->r[0]^0x80000000u; // 8007FEC0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8007FEC4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8007FEC8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8007FECC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8007FED0
  {uint32_t ea=c->r[4]+0x000000E4u; WF32(ea,c->f[0]);} // 8007FED4
  goto L_8007FEE8; // 8007FED8
L_8007FEDC:;
  c->r[0]=0u+0x00000000u; // 8007FEDC
  W32(c->r[4]+0x000000E8u,c->r[0]); // 8007FEE0
  {uint32_t ea=c->r[4]+0x000000DCu; WF32(ea,c->f[1]);} // 8007FEE4
L_8007FEE8:;
  c->lr=0x8007FEECu; f_800B08A4(c); // 8007FEE8
  c->r[3]=0u+0x00000001u; // 8007FEEC
  goto L_8007FEF8; // 8007FEF0
L_8007FEF4:;
  c->r[3]=0u+0x00000000u; // 8007FEF4
L_8007FEF8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007FEF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007FEFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007FF00
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007FF04
  c->lr=c->r[0]; // 8007FF08
  c->r[1]=c->r[1]+0x00000020u; // 8007FF0C
  return; // 8007FF10
}

// THPPlayerGetVolume
void f_8007FF14(Ctx* __restrict c) {
  trace_call(0x8007FF14u);
  c->r[3]=0u+0x802B0000u; // 8007FF14
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FF18
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8007FF1C
  c->r[0]=R32(c->r[3]+0x000000A0u); // 8007FF20
  cmps(c,0,(int32_t)c->r[0],0); // 8007FF24
  if (crb(c,2)) { goto L_8007FF40; } // 8007FF28
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8007FF2C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8007FF30
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8007FF34
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8007FF38
  goto L_8007FF44; // 8007FF3C
L_8007FF40:;
  c->r[3]=0u+0xFFFFFFFFu; // 8007FF40
L_8007FF44:;
  c->r[1]=c->r[1]+0x00000010u; // 8007FF44
  return; // 8007FF48
}

// CreateReadThread
void f_8007FF4C(Ctx* __restrict c) {
  trace_call(0x8007FF4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FF4C
  c->r[0]=c->lr; // 8007FF50
  c->r[4]=0u+0x80080000u; // 8007FF54
  c->r[8]=c->r[3]|c->r[3]; // 8007FF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007FF5C
  c->r[4]=c->r[4]+0x00000044u; // 8007FF60
  c->r[5]=0u+0x00000000u; // 8007FF64
  c->r[7]=0u+0x00001000u; // 8007FF68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007FF6C
  c->r[31]=0u+0x802B0000u; // 8007FF70
  c->r[31]=c->r[31]+0xFFFF9200u; // 8007FF74
  c->r[9]=0u+0x00000001u; // 8007FF78
  c->r[6]=c->r[31]+0x000003F0u; // 8007FF7C
  c->r[3]=c->r[31]+0x000000D8u; // 8007FF80
  c->r[6]=c->r[6]+0x00001000u; // 8007FF84
  c->lr=0x8007FF8Cu; f_800B3B50(c); // 8007FF88
  cmps(c,0,(int32_t)c->r[3],0); // 8007FF8C
  if (!crb(c,2)) { goto L_8007FF9C; } // 8007FF90
  c->r[3]=0u+0x00000000u; // 8007FF94
  goto L_8007FFD8; // 8007FF98
L_8007FF9C:;
  c->r[3]=c->r[31]+0x00000000u; // 8007FF9C
  c->r[4]=c->r[31]+0x00000060u; // 8007FFA0
  c->r[5]=0u+0x0000000Au; // 8007FFA4
  c->lr=0x8007FFACu; f_800B1018(c); // 8007FFA8
  c->r[3]=c->r[31]+0x00000020u; // 8007FFAC
  c->r[4]=c->r[31]+0x00000088u; // 8007FFB0
  c->r[5]=0u+0x0000000Au; // 8007FFB4
  c->lr=0x8007FFBCu; f_800B1018(c); // 8007FFB8
  c->r[3]=c->r[31]+0x00000040u; // 8007FFBC
  c->r[4]=c->r[31]+0x000000B0u; // 8007FFC0
  c->r[5]=0u+0x0000000Au; // 8007FFC4
  c->lr=0x8007FFCCu; f_800B1018(c); // 8007FFC8
  c->r[0]=0u+0x00000001u; // 8007FFCC
  W32(c->r[13]+0xFFFF8B60u,c->r[0]); // 8007FFD0
  c->r[3]=0u+0x00000001u; // 8007FFD4
L_8007FFD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007FFD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007FFDC
  c->lr=c->r[0]; // 8007FFE0
  c->r[1]=c->r[1]+0x00000010u; // 8007FFE4
  return; // 8007FFE8
}

// ReadThreadStart
void f_8007FFEC(Ctx* __restrict c) {
  trace_call(0x8007FFECu);
  c->r[0]=R32(c->r[13]+0xFFFF8B60u); // 8007FFEC
  cmps(c,0,(int32_t)c->r[0],0); // 8007FFF0
  if (crb(c,2)) return; // 8007FFF4
  c->r[3]=0u+0x802B0000u; // 8007FFF8
  c->r[3]=c->r[3]+0xFFFF92D8u; // 8007FFFC
  f_800B41C0(c); return; // 80080000
  return; // 80080004
}

// ReadThreadCancel
void f_80080008(Ctx* __restrict c) {
  trace_call(0x80080008u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080008
  c->r[0]=c->lr; // 8008000C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080010
  c->r[0]=R32(c->r[13]+0xFFFF8B60u); // 80080014
  cmps(c,0,(int32_t)c->r[0],0); // 80080018
  if (crb(c,2)) { goto L_80080034; } // 8008001C
  c->r[3]=0u+0x802B0000u; // 80080020
  c->r[3]=c->r[3]+0xFFFF92D8u; // 80080024
  c->lr=0x8008002Cu; f_800B3EA0(c); // 80080028
  c->r[0]=0u+0x00000000u; // 8008002C
  W32(c->r[13]+0xFFFF8B60u,c->r[0]); // 80080030
L_80080034:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080034
  c->lr=c->r[0]; // 80080038
  c->r[1]=c->r[1]+0x00000010u; // 8008003C
  return; // 80080040
}

// Reader__FPv
void f_80080044(Ctx* __restrict c) {
  trace_call(0x80080044u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080044
  c->r[0]=c->lr; // 80080048
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008004C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80080050
  c->r[28]=0u+0x802B0000u; // 80080054
  c->r[29]=c->r[28]+0xFFFF8B60u; // 80080058
  c->r[27]=0u+0x802B0000u; // 8008005C
  c->r[31]=0u+0x00000000u; // 80080060
  c->r[30]=0u+0xFFFFFFFFu; // 80080064
  c->r[27]=c->r[27]+0xFFFF9200u; // 80080068
  c->r[25]=R32(c->r[29]+0x000000B8u); // 8008006C
  c->r[24]=R32(c->r[29]+0x000000BCu); // 80080070
L_80080074:;
  c->r[3]=c->r[27]+0x00000000u; // 80080074
  c->r[4]=c->r[1]+0x00000008u; // 80080078
  c->r[5]=0u+0x00000001u; // 8008007C
  c->lr=0x80080084u; f_800B1140(c); // 80080080
  c->r[26]=R32(c->r[1]+0x00000008u); // 80080084
  c->r[5]=c->r[24]|c->r[24]; // 80080088
  c->r[6]=c->r[25]|c->r[25]; // 8008008C
  c->r[3]=c->r[28]+0xFFFF8B60u; // 80080090
  c->r[4]=R32(c->r[26]+0x00000000u); // 80080094
  c->r[7]=0u+0x00000002u; // 80080098
  c->lr=0x800800A0u; f_800B9AD0(c); // 8008009C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[24]); // 800800A0
  if (crb(c,2)) { goto L_800800CC; } // 800800A4
  cmps(c,0,(int32_t)c->r[3],-1); // 800800A8
  if (!crb(c,2)) { goto L_800800B4; } // 800800AC
  W32(c->r[29]+0x000000A8u,c->r[30]); // 800800B0
L_800800B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800800B4
  if (!crb(c,2)) { goto L_800800C4; } // 800800B8
  c->r[3]=0u+0x00000000u; // 800800BC
  c->lr=0x800800C4u; f_8007EE78(c); // 800800C0
L_800800C4:;
  c->r[3]=c->r[27]+0x000000D8u; // 800800C4
  c->lr=0x800800CCu; f_800B4458(c); // 800800C8
L_800800CC:;
  W32(c->r[26]+0x00000004u,c->r[31]); // 800800CC
  c->r[4]=c->r[26]|c->r[26]; // 800800D0
  c->r[3]=c->r[27]+0x00000020u; // 800800D4
  c->r[5]=0u+0x00000001u; // 800800D8
  c->lr=0x800800E0u; f_800B1078(c); // 800800DC
  c->r[0]=R32(c->r[29]+0x000000C0u); // 800800E0
  c->r[25]=c->r[25]+c->r[24]; // 800800E4
  c->r[6]=R32(c->r[29]+0x00000050u); // 800800E8
  c->r[4]=c->r[31]+c->r[0]; // 800800EC
  c->r[5]=R32(c->r[26]+0x00000000u); // 800800F0
  c->r[3]=divwu(c->r[4],c->r[6]); // 800800F4
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800800F8
  c->r[24]=R32(c->r[5]+0x00000000u); // 800800FC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[6]); // 80080100
  c->r[3]=c->r[4]-c->r[3]; // 80080104
  cmpu(c,0,c->r[3],c->r[0]); // 80080108
  if (!crb(c,2)) { goto L_8008012C; } // 8008010C
  c->r[0]=R8(c->r[29]+0x000000A6u); // 80080110
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80080114
  if (crb(c,2)) { goto L_80080124; } // 80080118
  c->r[25]=R32(c->r[29]+0x00000064u); // 8008011C
  goto L_8008012C; // 80080120
L_80080124:;
  c->r[3]=c->r[27]+0x000000D8u; // 80080124
  c->lr=0x8008012Cu; f_800B4458(c); // 80080128
L_8008012C:;
  c->r[31]=c->r[31]+0x00000001u; // 8008012C
  IRQCHK(c); goto L_80080074; // 80080130
}

// PopReadedBuffer
void f_80080134(Ctx* __restrict c) {
  trace_call(0x80080134u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080134
  c->r[0]=c->lr; // 80080138
  c->r[3]=0u+0x802B0000u; // 8008013C
  c->r[5]=0u+0x00000001u; // 80080140
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080144
  c->r[4]=c->r[1]+0x00000008u; // 80080148
  c->r[3]=c->r[3]+0xFFFF9220u; // 8008014C
  c->lr=0x80080154u; f_800B1140(c); // 80080150
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080154
  c->r[3]=R32(c->r[1]+0x00000008u); // 80080158
  c->lr=c->r[0]; // 8008015C
  c->r[1]=c->r[1]+0x00000010u; // 80080160
  return; // 80080164
}

// PushFreeReadBuffer
void f_80080168(Ctx* __restrict c) {
  trace_call(0x80080168u);
  c->r[5]=0u+0x802B0000u; // 80080168
  c->r[4]=c->r[3]|c->r[3]; // 8008016C
  c->r[3]=c->r[5]+0xFFFF9200u; // 80080170
  c->r[5]=0u+0x00000001u; // 80080174
  f_800B1078(c); return; // 80080178
}

// PopReadedBuffer2
void f_8008017C(Ctx* __restrict c) {
  trace_call(0x8008017Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008017C
  c->r[0]=c->lr; // 80080180
  c->r[3]=0u+0x802B0000u; // 80080184
  c->r[5]=0u+0x00000001u; // 80080188
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008018C
  c->r[4]=c->r[1]+0x00000008u; // 80080190
  c->r[3]=c->r[3]+0xFFFF9240u; // 80080194
  c->lr=0x8008019Cu; f_800B1140(c); // 80080198
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008019C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800801A0
  c->lr=c->r[0]; // 800801A4
  c->r[1]=c->r[1]+0x00000010u; // 800801A8
  return; // 800801AC
}

// PushReadedBuffer2
void f_800801B0(Ctx* __restrict c) {
  trace_call(0x800801B0u);
  c->r[5]=0u+0x802B0000u; // 800801B0
  c->r[4]=c->r[3]|c->r[3]; // 800801B4
  c->r[3]=c->r[5]+0xFFFF9240u; // 800801B8
  c->r[5]=0u+0x00000001u; // 800801BC
  f_800B1078(c); return; // 800801C0
}

// CreateVideoDecodeThread
void f_800801C4(Ctx* __restrict c) {
  trace_call(0x800801C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800801C4
  c->r[0]=c->lr; // 800801C8
  cmps(c,0,(int32_t)c->r[4],0); // 800801CC
  c->r[5]=c->r[4]|c->r[4]; // 800801D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800801D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800801D8
  c->r[31]=0u+0x802B0000u; // 800801DC
  c->r[31]=c->r[31]+0xFFFFA5F0u; // 800801E0
  if (crb(c,2)) { goto L_8008021C; } // 800801E4
  c->r[6]=c->r[31]+0x00000318u; // 800801E8
  c->r[4]=0u+0x80080000u; // 800801EC
  c->r[8]=c->r[3]|c->r[3]; // 800801F0
  c->r[3]=c->r[31]+0x00000000u; // 800801F4
  c->r[4]=c->r[4]+0x000003BCu; // 800801F8
  c->r[6]=c->r[6]+0x00001000u; // 800801FC
  c->r[7]=0u+0x00001000u; // 80080200
  c->r[9]=0u+0x00000001u; // 80080204
  c->lr=0x8008020Cu; f_800B3B50(c); // 80080208
  cmps(c,0,(int32_t)c->r[3],0); // 8008020C
  if (!crb(c,2)) { goto L_80080254; } // 80080210
  c->r[3]=0u+0x00000000u; // 80080214
  goto L_80080284; // 80080218
L_8008021C:;
  c->r[5]=c->r[31]+0x00000318u; // 8008021C
  c->r[4]=0u+0x80080000u; // 80080220
  c->r[8]=c->r[3]|c->r[3]; // 80080224
  c->r[3]=c->r[31]+0x00000000u; // 80080228
  c->r[6]=c->r[5]+0x00001000u; // 8008022C
  c->r[4]=c->r[4]+0x000002F0u; // 80080230
  c->r[5]=0u+0x00000000u; // 80080234
  c->r[7]=0u+0x00001000u; // 80080238
  c->r[9]=0u+0x00000001u; // 8008023C
  c->lr=0x80080244u; f_800B3B50(c); // 80080240
  cmps(c,0,(int32_t)c->r[3],0); // 80080244
  if (!crb(c,2)) { goto L_80080254; } // 80080248
  c->r[3]=0u+0x00000000u; // 8008024C
  goto L_80080284; // 80080250
L_80080254:;
  c->r[3]=c->r[31]+0x00001318u; // 80080254
  c->r[4]=c->r[31]+0x00001358u; // 80080258
  c->r[5]=0u+0x00000003u; // 8008025C
  c->lr=0x80080264u; f_800B1018(c); // 80080260
  c->r[3]=c->r[31]+0x00001338u; // 80080264
  c->r[4]=c->r[31]+0x00001364u; // 80080268
  c->r[5]=0u+0x00000003u; // 8008026C
  c->lr=0x80080274u; f_800B1018(c); // 80080270
  c->r[0]=0u+0x00000001u; // 80080274
  W32(c->r[13]+0xFFFF8B68u,c->r[0]); // 80080278
  c->r[3]=0u+0x00000001u; // 8008027C
  W32(c->r[13]+0xFFFF8B6Cu,c->r[0]); // 80080280
L_80080284:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080284
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80080288
  c->lr=c->r[0]; // 8008028C
  c->r[1]=c->r[1]+0x00000010u; // 80080290
  return; // 80080294
}

// VideoDecodeThreadStart
void f_80080298(Ctx* __restrict c) {
  trace_call(0x80080298u);
  c->r[0]=R32(c->r[13]+0xFFFF8B68u); // 80080298
  cmps(c,0,(int32_t)c->r[0],0); // 8008029C
  if (crb(c,2)) return; // 800802A0
  c->r[3]=0u+0x802B0000u; // 800802A4
  c->r[3]=c->r[3]+0xFFFFA5F0u; // 800802A8
  f_800B41C0(c); return; // 800802AC
  return; // 800802B0
}

// VideoDecodeThreadCancel
void f_800802B4(Ctx* __restrict c) {
  trace_call(0x800802B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800802B4
  c->r[0]=c->lr; // 800802B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800802BC
  c->r[0]=R32(c->r[13]+0xFFFF8B68u); // 800802C0
  cmps(c,0,(int32_t)c->r[0],0); // 800802C4
  if (crb(c,2)) { goto L_800802E0; } // 800802C8
  c->r[3]=0u+0x802B0000u; // 800802CC
  c->r[3]=c->r[3]+0xFFFFA5F0u; // 800802D0
  c->lr=0x800802D8u; f_800B3EA0(c); // 800802D4
  c->r[0]=0u+0x00000000u; // 800802D8
  W32(c->r[13]+0xFFFF8B68u,c->r[0]); // 800802DC
L_800802E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800802E0
  c->lr=c->r[0]; // 800802E4
  c->r[1]=c->r[1]+0x00000010u; // 800802E8
  return; // 800802EC
}

// VideoDecoder__FPv
void f_800802F0(Ctx* __restrict c) {
  trace_call(0x800802F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800802F0
  c->r[0]=c->lr; // 800802F4
  c->r[3]=0u+0x802B0000u; // 800802F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800802FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80080300
  W32(c->r[1]+0x00000018u,c->r[30]); // 80080304
  c->r[30]=c->r[3]+0xFFFF8B60u; // 80080308
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008030C
  c->r[29]=0u+0x00000000u; // 80080310
L_80080314:;
  c->r[0]=R8(c->r[30]+0x000000A7u); // 80080314
  cmps(c,0,(int32_t)c->r[0],0); // 80080318
  if (crb(c,2)) { goto L_80080384; } // 8008031C
  goto L_8008037C; // 80080320
L_80080324:;
  c->lr=0x80080328u; f_8008017C(c); // 80080324
  c->r[4]=R32(c->r[3]+0x00000004u); // 80080328
  c->r[31]=c->r[3]|c->r[3]; // 8008032C
  c->r[0]=R32(c->r[30]+0x000000C0u); // 80080330
  c->r[6]=R32(c->r[30]+0x00000050u); // 80080334
  c->r[5]=c->r[4]+c->r[0]; // 80080338
  c->r[4]=divwu(c->r[5],c->r[6]); // 8008033C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 80080340
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 80080344
  c->r[4]=c->r[5]-c->r[4]; // 80080348
  cmpu(c,0,c->r[4],c->r[0]); // 8008034C
  if (!crb(c,2)) { goto L_80080364; } // 80080350
  c->r[0]=R8(c->r[30]+0x000000A6u); // 80080354
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80080358
  if (!crb(c,2)) { goto L_80080364; } // 8008035C
  c->lr=0x80080364u; f_800804EC(c); // 80080360
L_80080364:;
  c->r[3]=c->r[31]|c->r[31]; // 80080364
  c->lr=0x8008036Cu; f_80080168(c); // 80080368
  c->r[3]=R32(c->r[30]+0x000000D8u); // 8008036C
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 80080370
  c->r[0]=c->r[3]+0x00000001u; // 80080374
  W32(c->r[30]+0x000000D8u,c->r[0]); // 80080378
L_8008037C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8008037C
  if (!crb(c,2)) { IRQCHK(c); goto L_80080324; } // 80080380
L_80080384:;
  c->r[0]=R8(c->r[30]+0x000000A7u); // 80080384
  cmps(c,0,(int32_t)c->r[0],0); // 80080388
  if (crb(c,2)) { goto L_8008039C; } // 8008038C
  c->lr=0x80080394u; f_8008017C(c); // 80080390
  c->r[31]=c->r[3]|c->r[3]; // 80080394
  goto L_800803A4; // 80080398
L_8008039C:;
  c->lr=0x800803A0u; f_80080134(c); // 8008039C
  c->r[31]=c->r[3]|c->r[3]; // 800803A0
L_800803A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800803A4
  c->lr=0x800803ACu; f_800804EC(c); // 800803A8
  c->r[29]=c->r[3]|c->r[3]; // 800803AC
  c->r[3]=c->r[31]|c->r[31]; // 800803B0
  c->lr=0x800803B8u; f_80080168(c); // 800803B4
  IRQCHK(c); goto L_80080314; // 800803B8
}

// VideoDecoderForOnMemory__FPv
void f_800803BC(Ctx* __restrict c) {
  trace_call(0x800803BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800803BC
  c->r[0]=c->lr; // 800803C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800803C4
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800803C8
  c->r[31]=0u+0x802B0000u; // 800803CC
  c->r[31]=c->r[31]+0xFFFF8B60u; // 800803D0
  c->r[29]=0u+0x00000000u; // 800803D4
  c->r[28]=0u+0x00000000u; // 800803D8
  c->r[27]=0u+0x802B0000u; // 800803DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800803E0
  c->r[30]=R32(c->r[31]+0x000000BCu); // 800803E4
L_800803E8:;
  c->r[0]=R8(c->r[31]+0x000000A7u); // 800803E8
  cmps(c,0,(int32_t)c->r[0],0); // 800803EC
  if (crb(c,2)) { goto L_80080470; } // 800803F0
  c->ctr=c->r[28]; // 800803F4
  cmps(c,0,(int32_t)c->r[28],0); // 800803F8
  if (crb(c,2)) { goto L_80080470; } // 800803FC
L_80080400:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 80080400
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 80080404
  c->r[6]=R32(c->r[31]+0x00000050u); // 80080408
  c->r[4]=c->r[29]+c->r[0]; // 8008040C
  c->r[5]=R32(c->r[31]+0x000000D8u); // 80080410
  c->r[3]=divwu(c->r[4],c->r[6]); // 80080414
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 80080418
  c->r[5]=c->r[5]+0x00000001u; // 8008041C
  W32(c->r[31]+0x000000D8u,c->r[5]); // 80080420
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[6]); // 80080424
  c->r[3]=c->r[4]-c->r[3]; // 80080428
  cmpu(c,0,c->r[3],c->r[0]); // 8008042C
  if (!crb(c,2)) { goto L_80080454; } // 80080430
  c->r[0]=R8(c->r[31]+0x000000A6u); // 80080434
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80080438
  if (crb(c,2)) { goto L_80080470; } // 8008043C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80080440
  c->r[0]=R32(c->r[31]+0x000000B4u); // 80080444
  c->r[30]=R32(c->r[3]+0x00000000u); // 80080448
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008044C
  goto L_80080468; // 80080450
L_80080454:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80080454
  c->r[4]=R32(c->r[3]+0x00000000u); // 80080458
  c->r[0]=c->r[3]+c->r[30]; // 8008045C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80080460
  c->r[30]=c->r[4]|c->r[4]; // 80080464
L_80080468:;
  c->r[29]=c->r[29]+0x00000001u; // 80080468
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80080400; } // 8008046C
L_80080470:;
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 80080470
  c->r[3]=c->r[1]+0x00000008u; // 80080474
  c->lr=0x8008047Cu; f_800804EC(c); // 80080478
  c->r[0]=R32(c->r[31]+0x000000C0u); // 8008047C
  c->r[28]=c->r[3]|c->r[3]; // 80080480
  c->r[5]=R32(c->r[31]+0x00000050u); // 80080484
  c->r[4]=c->r[29]+c->r[0]; // 80080488
  c->r[3]=divwu(c->r[4],c->r[5]); // 8008048C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80080490
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[5]); // 80080494
  c->r[3]=c->r[4]-c->r[3]; // 80080498
  cmpu(c,0,c->r[3],c->r[0]); // 8008049C
  if (!crb(c,2)) { goto L_800804D0; } // 800804A0
  c->r[0]=R8(c->r[31]+0x000000A6u); // 800804A4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800804A8
  if (crb(c,2)) { goto L_800804C4; } // 800804AC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800804B0
  c->r[0]=R32(c->r[31]+0x000000B4u); // 800804B4
  c->r[30]=R32(c->r[3]+0x00000000u); // 800804B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800804BC
  goto L_800804E4; // 800804C0
L_800804C4:;
  c->r[3]=c->r[27]+0xFFFFA5F0u; // 800804C4
  c->lr=0x800804CCu; f_800B4458(c); // 800804C8
  goto L_800804E4; // 800804CC
L_800804D0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800804D0
  c->r[4]=R32(c->r[3]+0x00000000u); // 800804D4
  c->r[0]=c->r[3]+c->r[30]; // 800804D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800804DC
  c->r[30]=c->r[4]|c->r[4]; // 800804E0
L_800804E4:;
  c->r[29]=c->r[29]+0x00000001u; // 800804E4
  IRQCHK(c); goto L_800803E8; // 800804E8
}

// VideoDecode__FP13THPReadBuffer
void f_800804EC(Ctx* __restrict c) {
  trace_call(0x800804ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800804EC
  c->r[0]=c->lr; // 800804F0
  c->r[4]=0u+0x802B0000u; // 800804F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800804F8
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800804FC
  c->r[30]=c->r[4]+0xFFFF8B60u; // 80080500
  c->r[29]=0u+0x802B0000u; // 80080504
  c->r[23]=c->r[3]|c->r[3]; // 80080508
  c->r[29]=c->r[29]+0xFFFFA5F0u; // 8008050C
  c->r[4]=c->r[1]+0x00000008u; // 80080510
  c->r[22]=0u+0x00000000u; // 80080514
  c->r[0]=R32(c->r[30]+0x0000006Cu); // 80080518
  c->r[5]=R32(c->r[3]+0x00000000u); // 8008051C
  c->r[3]=c->r[29]+0x00001318u; // 80080520
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80080524
  c->r[24]=c->r[5]+c->r[0]; // 80080528
  c->r[25]=c->r[5]+0x00000008u; // 8008052C
  c->r[5]=0u+0x00000001u; // 80080530
  c->r[24]=c->r[24]+0x00000008u; // 80080534
  c->lr=0x8008053Cu; f_800B1140(c); // 80080538
  c->r[27]=R32(c->r[1]+0x00000008u); // 8008053C
  c->r[28]=c->r[30]|c->r[30]; // 80080540
  c->r[26]=0u+0x00000000u; // 80080544
  c->r[31]=0u+0x00000000u; // 80080548
  goto L_800805F8; // 8008054C
L_80080550:;
  c->r[0]=R8(c->r[28]+0x00000070u); // 80080550
  cmps(c,0,(int32_t)c->r[0],0); // 80080554
  if (!crb(c,2)) { goto L_800805E4; } // 80080558
  c->r[4]=R32(c->r[27]+0x00000000u); // 8008055C
  c->r[3]=c->r[24]|c->r[24]; // 80080560
  c->r[5]=R32(c->r[27]+0x00000004u); // 80080564
  c->r[6]=R32(c->r[27]+0x00000008u); // 80080568
  c->r[7]=R32(c->r[30]+0x0000009Cu); // 8008056C
  c->lr=0x80080574u; f_8022CE3C(c); // 80080570
  cmps(c,0,(int32_t)c->r[3],0); // 80080574
  W32(c->r[30]+0x000000ACu,c->r[3]); // 80080578
  if (crb(c,2)) { goto L_800805A0; } // 8008057C
  c->r[0]=R32(c->r[13]+0xFFFF8B6Cu); // 80080580
  cmps(c,0,(int32_t)c->r[0],0); // 80080584
  if (crb(c,2)) { goto L_80080598; } // 80080588
  c->r[3]=0u+0x00000000u; // 8008058C
  c->lr=0x80080594u; f_8007EE78(c); // 80080590
  W32(c->r[13]+0xFFFF8B6Cu,c->r[31]); // 80080594
L_80080598:;
  c->r[3]=c->r[29]+0x00000000u; // 80080598
  c->lr=0x800805A0u; f_800B4458(c); // 8008059C
L_800805A0:;
  c->r[0]=R32(c->r[23]+0x00000004u); // 800805A0
  c->r[4]=c->r[27]|c->r[27]; // 800805A4
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800805A8
  c->r[3]=c->r[29]+0x00001338u; // 800805AC
  c->r[5]=0u+0x00000001u; // 800805B0
  c->lr=0x800805B8u; f_800B1078(c); // 800805B4
  c->r[3]=R32(c->r[30]+0x000000F0u); // 800805B8
  c->r[5]=R32(c->r[30]+0x000000D8u); // 800805BC
  c->r[6]=c->r[3]+0x00000001u; // 800805C0
  c->r[0]=addc(c,~c->r[6],c->r[5],1); // 800805C4
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 800805C8
  c->r[4]=rotl(c->r[6],1)&0x00000001u; // 800805CC
  c->r[0]=c->r[5]+0x00000001u; // 800805D0
  W32(c->r[30]+0x000000D8u,c->r[0]); // 800805D4
  c->r[3]=addc(c,~c->r[3],c->r[4],c->xer_ca); // 800805D8
  c->r[0]=c->r[6]-c->r[5]; // 800805DC
  c->r[22]=c->r[0]&c->r[3]; // 800805E0
L_800805E4:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 800805E4
  c->r[25]=c->r[25]+0x00000004u; // 800805E8
  c->r[28]=c->r[28]+0x00000001u; // 800805EC
  c->r[26]=c->r[26]+0x00000001u; // 800805F0
  c->r[24]=c->r[24]+c->r[0]; // 800805F4
L_800805F8:;
  c->r[0]=R32(c->r[30]+0x0000006Cu); // 800805F8
  cmpu(c,0,c->r[26],c->r[0]); // 800805FC
  if (crb(c,0)) { IRQCHK(c); goto L_80080550; } // 80080600
  c->r[0]=R32(c->r[13]+0xFFFF8B6Cu); // 80080604
  cmps(c,0,(int32_t)c->r[0],0); // 80080608
  if (crb(c,2)) { goto L_80080620; } // 8008060C
  c->r[3]=0u+0x00000001u; // 80080610
  c->lr=0x80080618u; f_8007EE78(c); // 80080614
  c->r[0]=0u+0x00000000u; // 80080618
  W32(c->r[13]+0xFFFF8B6Cu,c->r[0]); // 8008061C
L_80080620:;
  c->r[3]=c->r[22]|c->r[22]; // 80080620
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80080624
  c->r[0]=R32(c->r[1]+0x00000044u); // 80080628
  c->lr=c->r[0]; // 8008062C
  c->r[1]=c->r[1]+0x00000040u; // 80080630
  return; // 80080634
}

// PushFreeTextureSet
void f_80080638(Ctx* __restrict c) {
  trace_call(0x80080638u);
  c->r[5]=0u+0x802B0000u; // 80080638
  c->r[4]=c->r[3]|c->r[3]; // 8008063C
  c->r[3]=c->r[5]+0xFFFFB908u; // 80080640
  c->r[5]=0u+0x00000000u; // 80080644
  f_800B1078(c); return; // 80080648
}

// PopDecodedTextureSet
void f_8008064C(Ctx* __restrict c) {
  trace_call(0x8008064Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008064C
  c->r[0]=c->lr; // 80080650
  c->r[4]=0u+0x802B0000u; // 80080654
  c->r[5]=c->r[3]|c->r[3]; // 80080658
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008065C
  c->r[3]=c->r[4]+0xFFFFB928u; // 80080660
  c->r[4]=c->r[1]+0x00000008u; // 80080664
  c->lr=0x8008066Cu; f_800B1140(c); // 80080668
  cmps(c,0,(int32_t)c->r[3],1); // 8008066C
  if (!crb(c,2)) { goto L_8008067C; } // 80080670
  c->r[3]=R32(c->r[1]+0x00000008u); // 80080674
  goto L_80080680; // 80080678
L_8008067C:;
  c->r[3]=0u+0x00000000u; // 8008067C
L_80080680:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080680
  c->lr=c->r[0]; // 80080684
  c->r[1]=c->r[1]+0x00000010u; // 80080688
  return; // 8008068C
}

// ROMFONT_DrawCell__Fiiii
void f_80080690(Ctx* __restrict c) {
  trace_call(0x80080690u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080690
  c->r[0]=c->lr; // 80080694
  W32(c->r[1]+0x00000034u,c->r[0]); // 80080698
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8008069C
  c->r[31]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800806A0
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800806A4
  c->r[27]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 800806A8
  c->r[25]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 800806AC
  c->r[3]=0u+0x00000080u; // 800806B0
  c->r[7]=R32(c->r[13]+0xFFFF8B70u); // 800806B4
  c->r[0]=R16(c->r[7]+0x00000010u); // 800806B8
  c->r[8]=R16(c->r[7]+0x00000012u); // 800806BC
  c->r[4]=c->r[5]+c->r[0]; // 800806C0
  c->r[7]=c->r[31]+c->r[0]; // 800806C4
  c->r[5]=c->r[29]+c->r[8]; // 800806C8
  c->r[0]=c->r[6]+c->r[8]; // 800806CC
  c->r[26]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800806D0
  c->r[30]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800806D4
  c->r[28]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 800806D8
  c->r[24]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800806DC
  c->r[4]=0u+0x00000000u; // 800806E0
  c->r[5]=0u+0x00000004u; // 800806E4
  c->lr=0x800806ECu; f_800CFE14(c); // 800806E8
  c->r[3]=0u+0xCC010000u; // 800806EC
  c->r[0]=0u+0x00000000u; // 800806F0
  W16(c->r[3]+0xFFFF8000u,c->r[31]); // 800806F4
  W16(c->r[3]+0xFFFF8000u,c->r[29]); // 800806F8
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 800806FC
  W16(c->r[3]+0xFFFF8000u,c->r[27]); // 80080700
  W16(c->r[3]+0xFFFF8000u,c->r[25]); // 80080704
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 80080708
  W16(c->r[3]+0xFFFF8000u,c->r[29]); // 8008070C
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80080710
  W16(c->r[3]+0xFFFF8000u,c->r[26]); // 80080714
  W16(c->r[3]+0xFFFF8000u,c->r[25]); // 80080718
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 8008071C
  W16(c->r[3]+0xFFFF8000u,c->r[28]); // 80080720
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80080724
  W16(c->r[3]+0xFFFF8000u,c->r[26]); // 80080728
  W16(c->r[3]+0xFFFF8000u,c->r[24]); // 8008072C
  W16(c->r[3]+0xFFFF8000u,c->r[31]); // 80080730
  W16(c->r[3]+0xFFFF8000u,c->r[28]); // 80080734
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80080738
  W16(c->r[3]+0xFFFF8000u,c->r[27]); // 8008073C
  W16(c->r[3]+0xFFFF8000u,c->r[24]); // 80080740
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80080744
  c->r[0]=R32(c->r[1]+0x00000034u); // 80080748
  c->lr=c->r[0]; // 8008074C
  c->r[1]=c->r[1]+0x00000030u; // 80080750
  return; // 80080754
}

// CreateInstance__4CoreFv
void f_80080758(Ctx* __restrict c) {
  trace_call(0x80080758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080758
  c->r[0]=c->lr; // 8008075C
  c->r[3]=0u+0x00001564u; // 80080760
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080764
  c->lr=0x8008076Cu; f_8008DC84(c); // 80080768
  cmps(c,0,(int32_t)c->r[3],0); // 8008076C
  if (crb(c,2)) { goto L_80080778; } // 80080770
  c->lr=0x80080778u; f_80080788(c); // 80080774
L_80080778:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080778
  c->lr=c->r[0]; // 8008077C
  c->r[1]=c->r[1]+0x00000010u; // 80080780
  return; // 80080784
}

// __ct__7WiiCoreFv
void f_80080788(Ctx* __restrict c) {
  trace_call(0x80080788u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080788
  c->r[0]=c->lr; // 8008078C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080790
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80080794
  W32(c->r[1]+0x00000008u,c->r[30]); // 80080798
  c->r[30]=c->r[3]|c->r[3]; // 8008079C
  c->lr=0x800807A4u; f_80071D5C(c); // 800807A0
  c->r[3]=0u+0x80260000u; // 800807A4
  c->r[3]=c->r[3]+0x00004238u; // 800807A8
  W32(c->r[30]+0x00000000u,c->r[3]); // 800807AC
  c->lr=0x800807B4u; f_800B357C(c); // 800807B0
  W32(c->r[13]+0xFFFF8B74u,c->r[3]); // 800807B4
  c->r[31]=0u+0x00000000u; // 800807B8
  c->r[3]=c->r[30]+0x00001145u; // 800807BC
  c->r[4]=0u+0x00000000u; // 800807C0
  W32(c->r[30]+0x0000113Cu,c->r[31]); // 800807C4
  c->r[5]=0u+0x00000400u; // 800807C8
  W32(c->r[30]+0x00001140u,c->r[31]); // 800807CC
  c->lr=0x800807D4u; f_80004688(c); // 800807D0
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800807D4
  c->r[0]=0u+0x00000001u; // 800807D8
  {uint32_t ea=c->r[2]+0xFFFF8BDCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800807DC
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800807E0
  {uint32_t ea=c->r[2]+0xFFFF8BE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800807E4
  W32(c->r[30]+0x00001548u,c->r[31]); // 800807E8
  W8(c->r[30]+0x00001144u,c->r[0]); // 800807EC
  W8(c->r[30]+0x0000154Cu,c->r[31]); // 800807F0
  W8(c->r[30]+0x0000154Du,c->r[31]); // 800807F4
  {uint32_t ea=c->r[30]+0x00001550u; WF32(ea,c->f[3]);} // 800807F8
  {uint32_t ea=c->r[30]+0x00001554u; WF32(ea,c->f[2]);} // 800807FC
  {uint32_t ea=c->r[30]+0x00001558u; WF32(ea,c->f[1]);} // 80080800
  {uint32_t ea=c->r[30]+0x0000155Cu; WF32(ea,c->f[0]);} // 80080804
  W8(c->r[30]+0x00001560u,c->r[0]); // 80080808
  W8(c->r[30]+0x00001561u,c->r[0]); // 8008080C
  W8(c->r[30]+0x00001562u,c->r[0]); // 80080810
  W8(c->r[30]+0x00001563u,c->r[0]); // 80080814
  c->lr=0x8008081Cu; f_800AF88C(c); // 80080818
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8008081C
  cmpu(c,0,c->r[0],0x00000001u); // 80080820
  if (!crb(c,2)) { goto L_80080838; } // 80080824
  c->r[3]=0u+0x00120000u; // 80080828
  c->r[3]=c->r[3]+0x00000F00u; // 8008082C
  c->lr=0x80080834u; f_8008DAF8(c); // 80080830
  goto L_80080844; // 80080834
L_80080838:;
  c->r[3]=0u+0x00020000u; // 80080838
  c->r[3]=c->r[3]+0x00000120u; // 8008083C
  c->lr=0x80080844u; f_8008DAF8(c); // 80080840
L_80080844:;
  W32(c->r[13]+0xFFFF8B70u,c->r[3]); // 80080844
  c->lr=0x8008084Cu; f_800B053C(c); // 80080848
  c->r[3]=c->r[30]|c->r[30]; // 8008084C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80080850
  c->r[30]=R32(c->r[1]+0x00000008u); // 80080854
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080858
  c->lr=c->r[0]; // 8008085C
  c->r[1]=c->r[1]+0x00000010u; // 80080860
  return; // 80080864
}

// Init__7WiiCoreFPc
void f_80080868(Ctx* __restrict c) {
  trace_call(0x80080868u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080868
  c->r[0]=c->lr; // 8008086C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080870
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80080874
  c->r[31]=c->r[4]|c->r[4]; // 80080878
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008087C
  c->r[30]=c->r[3]|c->r[3]; // 80080880
  c->lr=0x80080888u; f_800F643C(c); // 80080884
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80080888
  cmpu(c,0,c->r[0],0x00000009u); // 8008088C
  if (crb(c,1)) { goto L_80080924; } // 80080890
  c->r[3]=0u+0x80260000u; // 80080894
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80080898
  c->r[3]=c->r[3]+0x00004210u; // 8008089C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800808A0
  c->ctr=c->r[3]; // 800808A4
  if (true) { switch (c->ctr) { case 0x800808ACu: goto L_800808AC; case 0x800808B8u: goto L_800808B8; case 0x800808C4u: goto L_800808C4; case 0x800808D0u: goto L_800808D0; case 0x800808DCu: goto L_800808DC; case 0x800808E8u: goto L_800808E8; case 0x800808F4u: goto L_800808F4; case 0x80080900u: goto L_80080900; case 0x8008090Cu: goto L_8008090C; case 0x80080918u: goto L_80080918; default: break; } dispatch(c,c->ctr); return; } // 800808A8
L_800808AC:;
  c->r[0]=0u+0xFFFFFFFFu; // 800808AC
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 800808B0
  goto L_8008092C; // 800808B4
L_800808B8:;
  c->r[0]=0u+0x00000000u; // 800808B8
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 800808BC
  goto L_8008092C; // 800808C0
L_800808C4:;
  c->r[0]=0u+0x00000003u; // 800808C4
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 800808C8
  goto L_8008092C; // 800808CC
L_800808D0:;
  c->r[0]=0u+0x00000001u; // 800808D0
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 800808D4
  goto L_8008092C; // 800808D8
L_800808DC:;
  c->r[0]=0u+0x00000002u; // 800808DC
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 800808E0
  goto L_8008092C; // 800808E4
L_800808E8:;
  c->r[0]=0u+0x00000004u; // 800808E8
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 800808EC
  goto L_8008092C; // 800808F0
L_800808F4:;
  c->r[0]=0u+0x00000000u; // 800808F4
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 800808F8
  goto L_8008092C; // 800808FC
L_80080900:;
  c->r[0]=0u+0xFFFFFFFFu; // 80080900
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 80080904
  goto L_8008092C; // 80080908
L_8008090C:;
  c->r[0]=0u+0xFFFFFFFFu; // 8008090C
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 80080910
  goto L_8008092C; // 80080914
L_80080918:;
  c->r[0]=0u+0xFFFFFFFFu; // 80080918
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 8008091C
  goto L_8008092C; // 80080920
L_80080924:;
  c->r[0]=0u+0xFFFFFFFFu; // 80080924
  W32(c->r[30]+0x0000112Cu,c->r[0]); // 80080928
L_8008092C:;
  c->r[0]=R32(c->r[30]+0x0000112Cu); // 8008092C
  cmps(c,0,(int32_t)c->r[0],-1); // 80080930
  if (!crb(c,2)) { goto L_80080950; } // 80080934
  c->r[3]=0u+0x80250000u; // 80080938
  c->r[4]=0u+0x00000105u; // 8008093C
  c->r[3]=c->r[3]+0x00006D68u; // 80080940
  c->r[5]=c->r[3]+0x0000000Cu; // 80080944
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080948
  c->lr=0x80080950u; f_800ACC34(c); // 8008094C
L_80080950:;
  c->r[3]=c->r[30]|c->r[30]; // 80080950
  c->r[4]=c->r[31]|c->r[31]; // 80080954
  c->lr=0x8008095Cu; f_80072034(c); // 80080958
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008095C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80080960
  c->r[30]=R32(c->r[1]+0x00000008u); // 80080964
  c->lr=c->r[0]; // 80080968
  c->r[1]=c->r[1]+0x00000010u; // 8008096C
  return; // 80080970
}

// ShutDown__7WiiCoreFv
void f_80080974(Ctx* __restrict c) {
  trace_call(0x80080974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080974
  c->r[0]=c->lr; // 80080978
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008097C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80080980
  c->r[31]=c->r[3]|c->r[3]; // 80080984
  c->r[3]=R32(c->r[13]+0xFFFF8B70u); // 80080988
  c->lr=0x80080990u; f_8008DB30(c); // 8008098C
  c->r[3]=c->r[31]|c->r[31]; // 80080990
  c->lr=0x80080998u; f_80072604(c); // 80080994
  c->r[3]=R32(c->r[31]+0x0000113Cu); // 80080998
  c->lr=0x800809A0u; f_8008DE94(c); // 8008099C
  c->r[0]=0u+0x00000000u; // 800809A0
  W32(c->r[31]+0x0000113Cu,c->r[0]); // 800809A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800809A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800809AC
  c->lr=c->r[0]; // 800809B0
  c->r[1]=c->r[1]+0x00000010u; // 800809B4
  return; // 800809B8
}

// GetTime__7WiiCoreFv
void f_800809BC(Ctx* __restrict c) {
  trace_call(0x800809BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800809BC
  c->r[0]=c->lr; // 800809C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800809C4
  c->lr=0x800809CCu; f_800B48F4(c); // 800809C8
  c->r[6]=0u+0x80000000u; // 800809CC
  c->r[5]=0u+0x10620000u; // 800809D0
  c->r[0]=R32(c->r[6]+0x000000F8u); // 800809D4
  c->r[6]=c->r[5]+0x00004DD3u; // 800809D8
  c->r[5]=0u+0x00000000u; // 800809DC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800809E0
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 800809E4
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 800809E8
  c->lr=0x800809F0u; f_800D4B64(c); // 800809EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800809F0
  c->r[3]=c->r[4]|c->r[4]; // 800809F4
  c->lr=c->r[0]; // 800809F8
  c->r[1]=c->r[1]+0x00000010u; // 800809FC
  return; // 80080A00
}

// DebugPrintf__7WiiCoreFPce
void f_80080A04(Ctx* __restrict c) {
  trace_call(0x80080A04u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080A04
  if (!crb(c,6)) { goto L_80080A2C; } // 80080A08
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80080A0C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80080A10
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 80080A14
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 80080A18
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 80080A1C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 80080A20
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 80080A24
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 80080A28
L_80080A2C:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 80080A2C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80080A30
  W32(c->r[1]+0x00000010u,c->r[5]); // 80080A34
  W32(c->r[1]+0x00000014u,c->r[6]); // 80080A38
  W32(c->r[1]+0x00000018u,c->r[7]); // 80080A3C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80080A40
  W32(c->r[1]+0x00000020u,c->r[9]); // 80080A44
  W32(c->r[1]+0x00000024u,c->r[10]); // 80080A48
  c->r[1]=c->r[1]+0x00000070u; // 80080A4C
  return; // 80080A50
}

// SuspendThread__7WiiCoreFPv
void f_80080A54(Ctx* __restrict c) {
  trace_call(0x80080A54u);
  cmps(c,0,(int32_t)c->r[4],0); // 80080A54
  if (crb(c,2)) { goto L_80080A64; } // 80080A58
  c->r[3]=c->r[4]+0x00001000u; // 80080A5C
  f_800B4458(c); return; // 80080A60
L_80080A64:;
  c->r[3]=R32(c->r[13]+0xFFFF8B74u); // 80080A64
  f_800B4458(c); return; // 80080A68
}

// ResumeThread__7WiiCoreFPv
void f_80080A6C(Ctx* __restrict c) {
  trace_call(0x80080A6Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 80080A6C
  if (crb(c,2)) { goto L_80080A7C; } // 80080A70
  c->r[3]=c->r[4]+0x00001000u; // 80080A74
  f_800B41C0(c); return; // 80080A78
L_80080A7C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B74u); // 80080A7C
  f_800B41C0(c); return; // 80080A80
}

// GetMainThreadHandle__7WiiCoreFv
void f_80080A84(Ctx* __restrict c) {
  trace_call(0x80080A84u);
  c->r[3]=0u+0x00000000u; // 80080A84
  return; // 80080A88
}

// CreateThread__7WiiCoreFPFPv_PvPvi
void f_80080A8C(Ctx* __restrict c) {
  trace_call(0x80080A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080A8C
  c->r[0]=c->lr; // 80080A90
  c->r[3]=0u+0x00001318u; // 80080A94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80080A98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80080A9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80080AA0
  c->r[30]=c->r[6]|c->r[6]; // 80080AA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80080AA8
  c->r[29]=c->r[5]|c->r[5]; // 80080AAC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80080AB0
  c->r[28]=c->r[4]|c->r[4]; // 80080AB4
  c->lr=0x80080ABCu; f_8008DC84(c); // 80080AB8
  c->r[31]=c->r[3]|c->r[3]; // 80080ABC
  c->r[3]=c->r[3]+0x00001000u; // 80080AC0
  c->r[4]=c->r[28]|c->r[28]; // 80080AC4
  c->r[5]=c->r[29]|c->r[29]; // 80080AC8
  c->r[6]=c->r[3]|c->r[3]; // 80080ACC
  c->r[8]=c->r[30]|c->r[30]; // 80080AD0
  c->r[7]=0u+0x00001000u; // 80080AD4
  c->r[9]=0u+0x00000001u; // 80080AD8
  c->lr=0x80080AE0u; f_800B3B50(c); // 80080ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80080AE0
  if (!crb(c,2)) { goto L_80080B38; } // 80080AE4
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 80080AE8
  cmps(c,0,(int32_t)c->r[0],0); // 80080AEC
  if (!crb(c,2)) { goto L_80080B0C; } // 80080AF0
  c->r[3]=0u+0x00001564u; // 80080AF4
  c->lr=0x80080AFCu; f_8008DC84(c); // 80080AF8
  cmps(c,0,(int32_t)c->r[3],0); // 80080AFC
  if (crb(c,2)) { goto L_80080B08; } // 80080B00
  c->lr=0x80080B08u; f_80080788(c); // 80080B04
L_80080B08:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 80080B08
L_80080B0C:;
  c->r[4]=0u+0x80250000u; // 80080B0C
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 80080B10
  c->r[4]=c->r[4]+0x00006D68u; // 80080B14
  c->r[4]=c->r[4]+0x00000034u; // 80080B18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080B1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80080B20
  c->r[12]=R32(c->r[12]+0x00000060u); // 80080B24
  c->ctr=c->r[12]; // 80080B28
  if (true) { c->lr=0x80080B30u; dispatch(c,c->ctr); } // 80080B2C
  c->r[3]=0u+0x00000000u; // 80080B30
  goto L_80080B44; // 80080B34
L_80080B38:;
  c->r[3]=c->r[31]+0x00001000u; // 80080B38
  c->lr=0x80080B40u; f_800B41C0(c); // 80080B3C
  c->r[3]=c->r[31]|c->r[31]; // 80080B40
L_80080B44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80080B44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80080B48
  c->r[30]=R32(c->r[1]+0x00000018u); // 80080B4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80080B50
  c->r[28]=R32(c->r[1]+0x00000010u); // 80080B54
  c->lr=c->r[0]; // 80080B58
  c->r[1]=c->r[1]+0x00000020u; // 80080B5C
  return; // 80080B60
}

// KillThread__7WiiCoreFPv
void f_80080B64(Ctx* __restrict c) {
  trace_call(0x80080B64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080B64
  c->r[0]=c->lr; // 80080B68
  cmps(c,0,(int32_t)c->r[4],0); // 80080B6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080B70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80080B74
  c->r[31]=c->r[4]|c->r[4]; // 80080B78
  if (crb(c,2)) { goto L_80080BA8; } // 80080B7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80080B80
  c->r[12]=R32(c->r[12]+0x00000044u); // 80080B84
  c->ctr=c->r[12]; // 80080B88
  if (true) { c->lr=0x80080B90u; dispatch(c,c->ctr); } // 80080B8C
  cmps(c,0,(int32_t)c->r[3],0); // 80080B90
  if (!crb(c,2)) { goto L_80080BA0; } // 80080B94
  c->r[3]=c->r[31]+0x00001000u; // 80080B98
  c->lr=0x80080BA0u; f_800B3EA0(c); // 80080B9C
L_80080BA0:;
  c->r[3]=c->r[31]|c->r[31]; // 80080BA0
  c->lr=0x80080BA8u; f_8008DE54(c); // 80080BA4
L_80080BA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080BA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80080BAC
  c->lr=c->r[0]; // 80080BB0
  c->r[1]=c->r[1]+0x00000010u; // 80080BB4
  return; // 80080BB8
}

// IsThreadTerminated__7WiiCoreFPv
void f_80080BBC(Ctx* __restrict c) {
  trace_call(0x80080BBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080BBC
  c->r[0]=c->lr; // 80080BC0
  cmps(c,0,(int32_t)c->r[4],0); // 80080BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080BC8
  if (crb(c,2)) { goto L_80080BE8; } // 80080BCC
  c->r[3]=c->r[4]+0x00001000u; // 80080BD0
  c->lr=0x80080BD8u; f_800B3588(c); // 80080BD4
  c->r[0]=0u-c->r[3]; // 80080BD8
  c->r[0]=c->r[0]|c->r[3]; // 80080BDC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80080BE0
  goto L_80080BEC; // 80080BE4
L_80080BE8:;
  c->r[3]=0u+0x00000000u; // 80080BE8
L_80080BEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080BEC
  c->lr=c->r[0]; // 80080BF0
  c->r[1]=c->r[1]+0x00000010u; // 80080BF4
  return; // 80080BF8
}

// SleepThread__7WiiCoreFi
void f_80080BFC(Ctx* __restrict c) {
  trace_call(0x80080BFCu);
  cmps(c,0,(int32_t)c->r[4],0); // 80080BFC
  if (!crb(c,1)) return; // 80080C00
  c->r[3]=0u+0x80000000u; // 80080C04
  c->r[5]=0u+0x10620000u; // 80080C08
  c->r[6]=R32(c->r[3]+0x000000F8u); // 80080C0C
  c->r[7]=c->r[5]+0x00004DD3u; // 80080C10
  c->r[3]=0u+0x00000000u; // 80080C14
  c->r[0]=sraw(c,c->r[4],31); // 80080C18
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 80080C1C
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 80080C20
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 80080C24
  c->r[6]=rotl(c->r[6],26)&0x03FFFFFFu; // 80080C28
  c->r[3]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[4])>>32); // 80080C2C
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 80080C30
  c->r[3]=c->r[3]+c->r[5]; // 80080C34
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[4]); // 80080C38
  c->r[3]=c->r[3]+c->r[0]; // 80080C3C
  f_800B484C(c); return; // 80080C40
  return; // 80080C44
}

// DVDOpenFunc__FPv
void f_80080C48(Ctx* __restrict c) {
  trace_call(0x80080C48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080C48
  c->r[0]=c->lr; // 80080C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080C50
  c->r[4]=R32(c->r[3]+0x00000000u); // 80080C54
  c->r[3]=c->r[3]+0x00000004u; // 80080C58
  c->lr=0x80080C60u; f_800B9558(c); // 80080C5C
  W32(c->r[13]+0xFFFF8B78u,c->r[3]); // 80080C60
  c->r[3]=0u+0x00000000u; // 80080C64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080C68
  c->lr=c->r[0]; // 80080C6C
  c->r[1]=c->r[1]+0x00000010u; // 80080C70
  return; // 80080C74
}

// DVDReadFunc__FPv
void f_80080C78(Ctx* __restrict c) {
  trace_call(0x80080C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080C78
  c->r[0]=c->lr; // 80080C7C
  c->r[6]=c->r[3]|c->r[3]; // 80080C80
  c->r[7]=0u+0x00000002u; // 80080C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080C88
  c->r[3]=R32(c->r[3]+0x00000000u); // 80080C8C
  c->r[4]=R32(c->r[6]+0x00000104u); // 80080C90
  c->r[5]=R32(c->r[6]+0x00000108u); // 80080C94
  c->r[6]=R32(c->r[6]+0x0000010Cu); // 80080C98
  c->lr=0x80080CA0u; f_800B9AD0(c); // 80080C9C
  W32(c->r[13]+0xFFFF8B7Cu,c->r[3]); // 80080CA0
  c->r[3]=0u+0x00000000u; // 80080CA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080CA8
  c->lr=c->r[0]; // 80080CAC
  c->r[1]=c->r[1]+0x00000010u; // 80080CB0
  return; // 80080CB4
}

// IsSpaceFree__7WiiCoreFii
void f_80080CB8(Ctx* __restrict c) {
  trace_call(0x80080CB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080CB8
  c->r[0]=c->lr; // 80080CBC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80080CC0
  c->r[11]=c->r[1]+0x00000040u; // 80080CC4
  c->lr=0x80080CCCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80080CC8
  c->r[26]=c->r[4]|c->r[4]; // 80080CCC
  c->r[31]=c->r[3]|c->r[3]; // 80080CD0
  c->r[4]=c->r[5]|c->r[5]; // 80080CD4
  c->r[5]=c->r[1]+0x00000008u; // 80080CD8
  c->r[3]=c->r[26]|c->r[26]; // 80080CDC
  c->lr=0x80080CE4u; f_800F42D8(c); // 80080CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80080CE4
  if (crb(c,2)) { goto L_80080CF4; } // 80080CE8
  c->r[3]=0u+0x00000000u; // 80080CEC
  goto L_80080FCC; // 80080CF0
L_80080CF4:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80080CF4
  cmps(c,0,(int32_t)c->r[0],0); // 80080CF8
  if (crb(c,2)) { goto L_80080FC0; } // 80080CFC
  c->r[30]=rotl(c->r[0],0)&0x00000002u; // 80080D00
  c->r[29]=rotl(c->r[0],0)&0x00000008u; // 80080D04
  c->r[28]=rotl(c->r[0],0)&0x00000001u; // 80080D08
  c->r[27]=rotl(c->r[0],0)&0x00000004u; // 80080D0C
  c->lr=0x80080D14u; f_800F643C(c); // 80080D10
  cmps(c,0,(int32_t)c->r[30],0); // 80080D14
  c->r[30]=c->r[3]|c->r[3]; // 80080D18
  if (!crb(c,2)) { goto L_80080D28; } // 80080D1C
  cmps(c,0,(int32_t)c->r[29],0); // 80080D20
  if (crb(c,2)) { goto L_80080E08; } // 80080D24
L_80080D28:;
  cmps(c,0,(int32_t)c->r[28],0); // 80080D28
  if (!crb(c,2)) { goto L_80080E08; } // 80080D2C
  cmps(c,0,(int32_t)c->r[27],0); // 80080D30
  if (!crb(c,2)) { goto L_80080E08; } // 80080D34
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80080D38
  cmps(c,0,(int32_t)c->r[0],1); // 80080D3C
  if (crb(c,2)) { goto L_80080D70; } // 80080D40
  cmps(c,0,(int32_t)c->r[0],3); // 80080D44
  if (crb(c,2)) { goto L_80080D88; } // 80080D48
  cmps(c,0,(int32_t)c->r[0],4); // 80080D4C
  if (crb(c,2)) { goto L_80080DA0; } // 80080D50
  cmps(c,0,(int32_t)c->r[0],2); // 80080D54
  if (crb(c,2)) { goto L_80080DB8; } // 80080D58
  cmps(c,0,(int32_t)c->r[0],5); // 80080D5C
  if (crb(c,2)) { goto L_80080DD0; } // 80080D60
  cmps(c,0,(int32_t)c->r[0],6); // 80080D64
  if (crb(c,2)) { goto L_80080DE8; } // 80080D68
  goto L_80080DFC; // 80080D6C
L_80080D70:;
  c->r[4]=0u+0x80250000u; // 80080D70
  c->r[3]=c->r[31]+0x00001145u; // 80080D74
  c->r[4]=c->r[4]+0x00006D68u; // 80080D78
  c->r[4]=c->r[4]+0x00000054u; // 80080D7C
  c->lr=0x80080D84u; f_800DB9A8(c); // 80080D80
  goto L_80080DFC; // 80080D84
L_80080D88:;
  c->r[4]=0u+0x80250000u; // 80080D88
  c->r[3]=c->r[31]+0x00001145u; // 80080D8C
  c->r[4]=c->r[4]+0x00006D68u; // 80080D90
  c->r[4]=c->r[4]+0x000000EAu; // 80080D94
  c->lr=0x80080D9Cu; f_800DB9A8(c); // 80080D98
  goto L_80080DFC; // 80080D9C
L_80080DA0:;
  c->r[4]=0u+0x80250000u; // 80080DA0
  c->r[3]=c->r[31]+0x00001145u; // 80080DA4
  c->r[4]=c->r[4]+0x00006D68u; // 80080DA8
  c->r[4]=c->r[4]+0x000001B6u; // 80080DAC
  c->lr=0x80080DB4u; f_800DB9A8(c); // 80080DB0
  goto L_80080DFC; // 80080DB4
L_80080DB8:;
  c->r[4]=0u+0x80250000u; // 80080DB8
  c->r[3]=c->r[31]+0x00001145u; // 80080DBC
  c->r[4]=c->r[4]+0x00006D68u; // 80080DC0
  c->r[4]=c->r[4]+0x0000026Du; // 80080DC4
  c->lr=0x80080DCCu; f_800DB9A8(c); // 80080DC8
  goto L_80080DFC; // 80080DCC
L_80080DD0:;
  c->r[4]=0u+0x80250000u; // 80080DD0
  c->r[3]=c->r[31]+0x00001145u; // 80080DD4
  c->r[4]=c->r[4]+0x00006D68u; // 80080DD8
  c->r[4]=c->r[4]+0x0000031Au; // 80080DDC
  c->lr=0x80080DE4u; f_800DB9A8(c); // 80080DE0
  goto L_80080DFC; // 80080DE4
L_80080DE8:;
  c->r[4]=0u+0x80250000u; // 80080DE8
  c->r[3]=c->r[31]+0x00001145u; // 80080DEC
  c->r[4]=c->r[4]+0x00006D68u; // 80080DF0
  c->r[4]=c->r[4]+0x000003C8u; // 80080DF4
  c->lr=0x80080DFCu; f_800DB9A8(c); // 80080DF8
L_80080DFC:;
  c->r[0]=0u+0x00000000u; // 80080DFC
  W32(c->r[31]+0x00001548u,c->r[0]); // 80080E00
  goto L_80080FC0; // 80080E04
L_80080E08:;
  c->r[3]=c->r[26]^0x80000000u; // 80080E08
  c->r[0]=0u+0x43300000u; // 80080E0C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80080E10
  {uint32_t ea=c->r[2]+0xFFFF8BF0u; c->f[2]=RF64(ea);} // 80080E14
  W32(c->r[1]+0x00000018u,c->r[0]); // 80080E18
  {uint32_t ea=c->r[2]+0xFFFF8BE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80080E1C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80080E20
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80080E24
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80080E28
  c->lr=0x80080E30u; f_800E3740(c); // 80080E2C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80080E30
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 80080E34
  cmps(c,0,(int32_t)c->r[0],1); // 80080E38
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80080E3C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80080E40
  c->r[27]=R32(c->r[1]+0x00000024u); // 80080E44
  if (crb(c,2)) { goto L_80080E78; } // 80080E48
  cmps(c,0,(int32_t)c->r[0],3); // 80080E4C
  if (crb(c,2)) { goto L_80080EC4; } // 80080E50
  cmps(c,0,(int32_t)c->r[0],4); // 80080E54
  if (crb(c,2)) { goto L_80080F10; } // 80080E58
  cmps(c,0,(int32_t)c->r[0],2); // 80080E5C
  if (crb(c,2)) { goto L_80080F30; } // 80080E60
  cmps(c,0,(int32_t)c->r[0],5); // 80080E64
  if (crb(c,2)) { goto L_80080F50; } // 80080E68
  cmps(c,0,(int32_t)c->r[0],6); // 80080E6C
  if (crb(c,2)) { goto L_80080F70; } // 80080E70
  goto L_80080FB8; // 80080E74
L_80080E78:;
  c->r[30]=0u+0x80250000u; // 80080E78
  c->r[3]=c->r[1]+0x00000010u; // 80080E7C
  c->r[30]=c->r[30]+0x00006D68u; // 80080E80
  c->r[4]=c->r[30]+0x0000045Au; // 80080E84
  c->lr=0x80080E8Cu; f_800DB9A8(c); // 80080E88
  cmps(c,0,(int32_t)c->r[27],1); // 80080E8C
  if (!crb(c,1)) { goto L_80080EA0; } // 80080E90
  c->r[3]=c->r[1]+0x00000010u; // 80080E94
  c->r[4]=c->r[30]+0x00000460u; // 80080E98
  c->lr=0x80080EA0u; f_800DBAAC(c); // 80080E9C
L_80080EA0:;
  c->r[4]=0u+0x80250000u; // 80080EA0
  c->r[5]=c->r[27]|c->r[27]; // 80080EA4
  c->r[4]=c->r[4]+0x00006D68u; // 80080EA8
  c->r[3]=c->r[31]+0x00001145u; // 80080EAC
  c->r[4]=c->r[4]+0x00000462u; // 80080EB0
  c->r[6]=c->r[1]+0x00000010u; // 80080EB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080EB8
  c->lr=0x80080EC0u; f_800DA3C8(c); // 80080EBC
  goto L_80080FB8; // 80080EC0
L_80080EC4:;
  c->r[30]=0u+0x80250000u; // 80080EC4
  c->r[3]=c->r[1]+0x00000010u; // 80080EC8
  c->r[30]=c->r[30]+0x00006D68u; // 80080ECC
  c->r[4]=c->r[30]+0x0000051Au; // 80080ED0
  c->lr=0x80080ED8u; f_800DB9A8(c); // 80080ED4
  cmps(c,0,(int32_t)c->r[27],1); // 80080ED8
  if (!crb(c,1)) { goto L_80080EEC; } // 80080EDC
  c->r[3]=c->r[1]+0x00000010u; // 80080EE0
  c->r[4]=c->r[30]+0x00000460u; // 80080EE4
  c->lr=0x80080EECu; f_800DBAAC(c); // 80080EE8
L_80080EEC:;
  c->r[4]=0u+0x80250000u; // 80080EEC
  c->r[5]=c->r[27]|c->r[27]; // 80080EF0
  c->r[4]=c->r[4]+0x00006D68u; // 80080EF4
  c->r[3]=c->r[31]+0x00001145u; // 80080EF8
  c->r[4]=c->r[4]+0x0000051Fu; // 80080EFC
  c->r[6]=c->r[1]+0x00000010u; // 80080F00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080F04
  c->lr=0x80080F0Cu; f_800DA3C8(c); // 80080F08
  goto L_80080FB8; // 80080F0C
L_80080F10:;
  c->r[4]=0u+0x80250000u; // 80080F10
  c->r[5]=c->r[27]|c->r[27]; // 80080F14
  c->r[4]=c->r[4]+0x00006D68u; // 80080F18
  c->r[3]=c->r[31]+0x00001145u; // 80080F1C
  c->r[4]=c->r[4]+0x000005F8u; // 80080F20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080F24
  c->lr=0x80080F2Cu; f_800DA3C8(c); // 80080F28
  goto L_80080FB8; // 80080F2C
L_80080F30:;
  c->r[4]=0u+0x80250000u; // 80080F30
  c->r[5]=c->r[27]|c->r[27]; // 80080F34
  c->r[4]=c->r[4]+0x00006D68u; // 80080F38
  c->r[3]=c->r[31]+0x00001145u; // 80080F3C
  c->r[4]=c->r[4]+0x000006CEu; // 80080F40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080F44
  c->lr=0x80080F4Cu; f_800DA3C8(c); // 80080F48
  goto L_80080FB8; // 80080F4C
L_80080F50:;
  c->r[4]=0u+0x80250000u; // 80080F50
  c->r[5]=c->r[27]|c->r[27]; // 80080F54
  c->r[4]=c->r[4]+0x00006D68u; // 80080F58
  c->r[3]=c->r[31]+0x00001145u; // 80080F5C
  c->r[4]=c->r[4]+0x00000796u; // 80080F60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080F64
  c->lr=0x80080F6Cu; f_800DA3C8(c); // 80080F68
  goto L_80080FB8; // 80080F6C
L_80080F70:;
  c->r[30]=0u+0x80250000u; // 80080F70
  c->r[3]=c->r[1]+0x00000010u; // 80080F74
  c->r[30]=c->r[30]+0x00006D68u; // 80080F78
  c->r[4]=c->r[30]+0x00000862u; // 80080F7C
  c->lr=0x80080F84u; f_800DB9A8(c); // 80080F80
  cmps(c,0,(int32_t)c->r[27],1); // 80080F84
  if (!crb(c,1)) { goto L_80080F98; } // 80080F88
  c->r[3]=c->r[1]+0x00000010u; // 80080F8C
  c->r[4]=c->r[30]+0x00000867u; // 80080F90
  c->lr=0x80080F98u; f_800DBAAC(c); // 80080F94
L_80080F98:;
  c->r[4]=0u+0x80250000u; // 80080F98
  c->r[5]=c->r[27]|c->r[27]; // 80080F9C
  c->r[4]=c->r[4]+0x00006D68u; // 80080FA0
  c->r[3]=c->r[31]+0x00001145u; // 80080FA4
  c->r[4]=c->r[4]+0x0000086Bu; // 80080FA8
  c->r[6]=c->r[1]+0x00000010u; // 80080FAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080FB0
  c->lr=0x80080FB8u; f_800DA3C8(c); // 80080FB4
L_80080FB8:;
  c->r[0]=0u+0x00000000u; // 80080FB8
  W32(c->r[31]+0x00001548u,c->r[0]); // 80080FBC
L_80080FC0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80080FC0
  c->r[0]=cntlz(c->r[0]); // 80080FC4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80080FC8
L_80080FCC:;
  c->r[11]=c->r[1]+0x00000040u; // 80080FCC
  c->lr=0x80080FD4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80080FD0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80080FD4
  c->lr=c->r[0]; // 80080FD8
  c->r[1]=c->r[1]+0x00000040u; // 80080FDC
  return; // 80080FE0
}

// OpenFile__7WiiCoreFPc14FileAccessTypeb
void f_80080FE4(Ctx* __restrict c) {
  trace_call(0x80080FE4u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080FE4
  c->r[0]=c->lr; // 80080FE8
  W32(c->r[1]+0x00000184u,c->r[0]); // 80080FEC
  {uint32_t ea=c->r[1]+0x00000160u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80080FF0
  c->r[29]=c->r[3]|c->r[3]; // 80080FF4
  c->r[26]=c->r[4]|c->r[4]; // 80080FF8
  c->r[25]=c->r[5]|c->r[5]; // 80080FFC
  c->r[24]=c->r[6]|c->r[6]; // 80081000
  c->r[3]=0u+0x000000D0u; // 80081004
  c->lr=0x8008100Cu; f_8008DC84(c); // 80081008
  cmps(c,0,(int32_t)c->r[3],0); // 8008100C
  c->r[31]=c->r[3]|c->r[3]; // 80081010
  if (!crb(c,2)) { goto L_80081020; } // 80081014
  c->r[3]=0u+0x00000000u; // 80081018
  goto L_800817A8; // 8008101C
L_80081020:;
  c->r[4]=0u+0x80250000u; // 80081020
  c->r[28]=0u+0x00000000u; // 80081024
  W32(c->r[3]+0x000000C8u,c->r[28]); // 80081028
  c->r[4]=c->r[4]+0x00006D68u; // 8008102C
  c->r[3]=c->r[26]|c->r[26]; // 80081030
  c->r[4]=c->r[4]+0x0000091Au; // 80081034
  c->lr=0x8008103Cu; f_800DBDD4(c); // 80081038
  cmpu(c,0,c->r[3],c->r[26]); // 8008103C
  if (!crb(c,2)) { goto L_800815A8; } // 80081040
  cmps(c,0,(int32_t)c->r[25],1); // 80081044
  W8(c->r[31]+0x000000CCu,c->r[28]); // 80081048
  c->r[27]=0u+0x00000000u; // 8008104C
  if (crb(c,2)) { goto L_80081078; } // 80081050
  if (!crb(c,0)) { goto L_80081064; } // 80081054
  cmps(c,0,(int32_t)c->r[25],0); // 80081058
  if (!crb(c,0)) { goto L_80081070; } // 8008105C
  goto L_80081084; // 80081060
L_80081064:;
  cmps(c,0,(int32_t)c->r[25],3); // 80081064
  if (!crb(c,0)) { goto L_80081084; } // 80081068
  goto L_80081080; // 8008106C
L_80081070:;
  c->r[27]=0u+0x00000001u; // 80081070
  goto L_80081084; // 80081074
L_80081078:;
  c->r[27]=0u+0x00000002u; // 80081078
  goto L_80081084; // 8008107C
L_80081080:;
  c->r[27]=0u+0x00000003u; // 80081080
L_80081084:;
  c->r[3]=c->r[1]+0x00000010u; // 80081084
  c->r[4]=0u+0x00000000u; // 80081088
  c->r[5]=0u+0x00000040u; // 8008108C
  c->lr=0x80081094u; f_80004688(c); // 80081090
  c->r[4]=0u+0x80250000u; // 80081094
  c->r[3]=c->r[26]|c->r[26]; // 80081098
  c->r[4]=c->r[4]+0x00006D68u; // 8008109C
  c->r[4]=c->r[4]+0x00000921u; // 800810A0
  c->lr=0x800810A8u; f_800DBDD4(c); // 800810A4
  cmps(c,0,(int32_t)c->r[3],0); // 800810A8
  if (!crb(c,2)) { goto L_800810C0; } // 800810AC
  c->r[3]=c->r[1]+0x00000010u; // 800810B0
  c->r[4]=c->r[26]+0x00000006u; // 800810B4
  c->lr=0x800810BCu; f_800DB9A8(c); // 800810B8
  goto L_800810CC; // 800810BC
L_800810C0:;
  c->r[3]=c->r[1]+0x00000010u; // 800810C0
  c->r[4]=c->r[26]+0x00000005u; // 800810C4
  c->lr=0x800810CCu; f_800DB9A8(c); // 800810C8
L_800810CC:;
  c->r[6]=0u+0x802B0000u; // 800810CC
  c->r[5]=c->r[27]|c->r[27]; // 800810D0
  c->r[3]=c->r[1]+0x00000010u; // 800810D4
  c->r[4]=c->r[31]+0x0000003Cu; // 800810D8
  c->r[6]=c->r[6]+0xFFFFB960u; // 800810DC
  c->r[7]=0u+0x00004000u; // 800810E0
  c->lr=0x800810E8u; f_800F2E58(c); // 800810E4
  cmps(c,0,(int32_t)c->r[3],-12); // 800810E8
  c->r[30]=c->r[3]|c->r[3]; // 800810EC
  if (!crb(c,2)) { goto L_80081150; } // 800810F0
  cmps(c,0,(int32_t)c->r[25],1); // 800810F4
  if (crb(c,2)) { goto L_80081104; } // 800810F8
  cmps(c,0,(int32_t)c->r[25],2); // 800810FC
  if (!crb(c,2)) { goto L_80081150; } // 80081100
L_80081104:;
  cmps(c,0,(int32_t)c->r[24],0); // 80081104
  if (crb(c,2)) { goto L_80081150; } // 80081108
  c->r[3]=c->r[1]+0x00000010u; // 8008110C
  c->r[4]=0u+0x00000030u; // 80081110
  c->r[5]=0u+0x00000000u; // 80081114
  c->lr=0x8008111Cu; f_800F1D38(c); // 80081118
  cmps(c,0,(int32_t)c->r[3],0); // 8008111C
  c->r[30]=c->r[3]|c->r[3]; // 80081120
  if (!crb(c,2)) { goto L_80081150; } // 80081124
  c->r[6]=0u+0x802B0000u; // 80081128
  c->r[5]=c->r[27]|c->r[27]; // 8008112C
  c->r[3]=c->r[1]+0x00000010u; // 80081130
  c->r[4]=c->r[31]+0x0000003Cu; // 80081134
  c->r[6]=c->r[6]+0xFFFFB960u; // 80081138
  c->r[7]=0u+0x00004000u; // 8008113C
  c->lr=0x80081144u; f_800F2E58(c); // 80081140
  c->r[0]=0u+0x00000001u; // 80081144
  W32(c->r[31]+0x000000C8u,c->r[0]); // 80081148
  c->r[30]=c->r[3]|c->r[3]; // 8008114C
L_80081150:;
  cmps(c,0,(int32_t)c->r[30],0); // 80081150
  if (crb(c,2)) { goto L_800817A4; } // 80081154
  c->lr=0x8008115Cu; f_800F643C(c); // 80081158
  cmps(c,0,(int32_t)c->r[30],-5); // 8008115C
  if (crb(c,2)) { goto L_80081194; } // 80081160
  if (!crb(c,0)) { goto L_80081180; } // 80081164
  cmps(c,0,(int32_t)c->r[30],-15); // 80081168
  if (crb(c,2)) { goto L_80081194; } // 8008116C
  if (!crb(c,0)) { goto L_80081504; } // 80081170
  cmps(c,0,(int32_t)c->r[30],-64); // 80081174
  if (crb(c,2)) { goto L_80081434; } // 80081178
  goto L_80081504; // 8008117C
L_80081180:;
  cmps(c,0,(int32_t)c->r[30],-1); // 80081180
  if (!crb(c,0)) { goto L_80081504; } // 80081184
  cmps(c,0,(int32_t)c->r[30],-3); // 80081188
  if (!crb(c,0)) { goto L_80081364; } // 8008118C
  goto L_80081294; // 80081190
L_80081194:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80081194
  cmps(c,0,(int32_t)c->r[0],4); // 80081198
  if (crb(c,2)) { goto L_8008120C; } // 8008119C
  if (!crb(c,0)) { goto L_800811BC; } // 800811A0
  cmps(c,0,(int32_t)c->r[0],2); // 800811A4
  if (crb(c,2)) { goto L_8008122C; } // 800811A8
  if (!crb(c,0)) { goto L_800811EC; } // 800811AC
  cmps(c,0,(int32_t)c->r[0],1); // 800811B0
  if (!crb(c,0)) { goto L_800811CC; } // 800811B4
  goto L_80081288; // 800811B8
L_800811BC:;
  cmps(c,0,(int32_t)c->r[0],6); // 800811BC
  if (crb(c,2)) { goto L_8008126C; } // 800811C0
  if (!crb(c,0)) { goto L_80081288; } // 800811C4
  goto L_8008124C; // 800811C8
L_800811CC:;
  c->r[4]=0u+0x80250000u; // 800811CC
  c->r[3]=c->r[29]+0x00001145u; // 800811D0
  c->r[4]=c->r[4]+0x00006D68u; // 800811D4
  c->r[5]=c->r[29]+0x00001021u; // 800811D8
  c->r[4]=c->r[4]+0x00000926u; // 800811DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800811E0
  c->lr=0x800811E8u; f_800DA3C8(c); // 800811E4
  goto L_80081288; // 800811E8
L_800811EC:;
  c->r[4]=0u+0x80250000u; // 800811EC
  c->r[3]=c->r[29]+0x00001145u; // 800811F0
  c->r[4]=c->r[4]+0x00006D68u; // 800811F4
  c->r[5]=c->r[29]+0x00001021u; // 800811F8
  c->r[4]=c->r[4]+0x00000960u; // 800811FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081200
  c->lr=0x80081208u; f_800DA3C8(c); // 80081204
  goto L_80081288; // 80081208
L_8008120C:;
  c->r[4]=0u+0x80250000u; // 8008120C
  c->r[3]=c->r[29]+0x00001145u; // 80081210
  c->r[4]=c->r[4]+0x00006D68u; // 80081214
  c->r[5]=c->r[29]+0x00001021u; // 80081218
  c->r[4]=c->r[4]+0x00000998u; // 8008121C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081220
  c->lr=0x80081228u; f_800DA3C8(c); // 80081224
  goto L_80081288; // 80081228
L_8008122C:;
  c->r[4]=0u+0x80250000u; // 8008122C
  c->r[3]=c->r[29]+0x00001145u; // 80081230
  c->r[4]=c->r[4]+0x00006D68u; // 80081234
  c->r[5]=c->r[29]+0x00001021u; // 80081238
  c->r[4]=c->r[4]+0x000009CBu; // 8008123C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081240
  c->lr=0x80081248u; f_800DA3C8(c); // 80081244
  goto L_80081288; // 80081248
L_8008124C:;
  c->r[4]=0u+0x80250000u; // 8008124C
  c->r[3]=c->r[29]+0x00001145u; // 80081250
  c->r[4]=c->r[4]+0x00006D68u; // 80081254
  c->r[5]=c->r[29]+0x00001021u; // 80081258
  c->r[4]=c->r[4]+0x00000A0Eu; // 8008125C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081260
  c->lr=0x80081268u; f_800DA3C8(c); // 80081264
  goto L_80081288; // 80081268
L_8008126C:;
  c->r[4]=0u+0x80250000u; // 8008126C
  c->r[3]=c->r[29]+0x00001145u; // 80081270
  c->r[4]=c->r[4]+0x00006D68u; // 80081274
  c->r[5]=c->r[29]+0x00001021u; // 80081278
  c->r[4]=c->r[4]+0x00000A51u; // 8008127C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081280
  c->lr=0x80081288u; f_800DA3C8(c); // 80081284
L_80081288:;
  c->r[0]=0u+0x00000000u; // 80081288
  W32(c->r[29]+0x00001548u,c->r[0]); // 8008128C
  goto L_80081524; // 80081290
L_80081294:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80081294
  cmps(c,0,(int32_t)c->r[0],4); // 80081298
  if (crb(c,2)) { goto L_800812FC; } // 8008129C
  if (!crb(c,0)) { goto L_800812BC; } // 800812A0
  cmps(c,0,(int32_t)c->r[0],2); // 800812A4
  if (crb(c,2)) { goto L_80081314; } // 800812A8
  if (!crb(c,0)) { goto L_800812E4; } // 800812AC
  cmps(c,0,(int32_t)c->r[0],1); // 800812B0
  if (!crb(c,0)) { goto L_800812CC; } // 800812B4
  goto L_80081358; // 800812B8
L_800812BC:;
  cmps(c,0,(int32_t)c->r[0],6); // 800812BC
  if (crb(c,2)) { goto L_80081344; } // 800812C0
  if (!crb(c,0)) { goto L_80081358; } // 800812C4
  goto L_8008132C; // 800812C8
L_800812CC:;
  c->r[4]=0u+0x80250000u; // 800812CC
  c->r[3]=c->r[29]+0x00001145u; // 800812D0
  c->r[4]=c->r[4]+0x00006D68u; // 800812D4
  c->r[4]=c->r[4]+0x00000AA0u; // 800812D8
  c->lr=0x800812E0u; f_800DB9A8(c); // 800812DC
  goto L_80081358; // 800812E0
L_800812E4:;
  c->r[4]=0u+0x80250000u; // 800812E4
  c->r[3]=c->r[29]+0x00001145u; // 800812E8
  c->r[4]=c->r[4]+0x00006D68u; // 800812EC
  c->r[4]=c->r[4]+0x00000AF9u; // 800812F0
  c->lr=0x800812F8u; f_800DB9A8(c); // 800812F4
  goto L_80081358; // 800812F8
L_800812FC:;
  c->r[4]=0u+0x80250000u; // 800812FC
  c->r[3]=c->r[29]+0x00001145u; // 80081300
  c->r[4]=c->r[4]+0x00006D68u; // 80081304
  c->r[4]=c->r[4]+0x00000B68u; // 80081308
  c->lr=0x80081310u; f_800DB9A8(c); // 8008130C
  goto L_80081358; // 80081310
L_80081314:;
  c->r[4]=0u+0x80250000u; // 80081314
  c->r[3]=c->r[29]+0x00001145u; // 80081318
  c->r[4]=c->r[4]+0x00006D68u; // 8008131C
  c->r[4]=c->r[4]+0x00000BE7u; // 80081320
  c->lr=0x80081328u; f_800DB9A8(c); // 80081324
  goto L_80081358; // 80081328
L_8008132C:;
  c->r[4]=0u+0x80250000u; // 8008132C
  c->r[3]=c->r[29]+0x00001145u; // 80081330
  c->r[4]=c->r[4]+0x00006D68u; // 80081334
  c->r[4]=c->r[4]+0x00000C63u; // 80081338
  c->lr=0x80081340u; f_800DB9A8(c); // 8008133C
  goto L_80081358; // 80081340
L_80081344:;
  c->r[4]=0u+0x80250000u; // 80081344
  c->r[3]=c->r[29]+0x00001145u; // 80081348
  c->r[4]=c->r[4]+0x00006D68u; // 8008134C
  c->r[4]=c->r[4]+0x00000CE0u; // 80081350
  c->lr=0x80081358u; f_800DB9A8(c); // 80081354
L_80081358:;
  c->r[0]=0u+0x00000002u; // 80081358
  W32(c->r[29]+0x00001548u,c->r[0]); // 8008135C
  goto L_80081524; // 80081360
L_80081364:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80081364
  cmps(c,0,(int32_t)c->r[0],4); // 80081368
  if (crb(c,2)) { goto L_800813CC; } // 8008136C
  if (!crb(c,0)) { goto L_8008138C; } // 80081370
  cmps(c,0,(int32_t)c->r[0],2); // 80081374
  if (crb(c,2)) { goto L_800813E4; } // 80081378
  if (!crb(c,0)) { goto L_800813B4; } // 8008137C
  cmps(c,0,(int32_t)c->r[0],1); // 80081380
  if (!crb(c,0)) { goto L_8008139C; } // 80081384
  goto L_80081428; // 80081388
L_8008138C:;
  cmps(c,0,(int32_t)c->r[0],6); // 8008138C
  if (crb(c,2)) { goto L_80081414; } // 80081390
  if (!crb(c,0)) { goto L_80081428; } // 80081394
  goto L_800813FC; // 80081398
L_8008139C:;
  c->r[4]=0u+0x80250000u; // 8008139C
  c->r[3]=c->r[29]+0x00001145u; // 800813A0
  c->r[4]=c->r[4]+0x00006D68u; // 800813A4
  c->r[4]=c->r[4]+0x00000D47u; // 800813A8
  c->lr=0x800813B0u; f_800DB9A8(c); // 800813AC
  goto L_80081428; // 800813B0
L_800813B4:;
  c->r[4]=0u+0x80250000u; // 800813B4
  c->r[3]=c->r[29]+0x00001145u; // 800813B8
  c->r[4]=c->r[4]+0x00006D68u; // 800813BC
  c->r[4]=c->r[4]+0x00000DA7u; // 800813C0
  c->lr=0x800813C8u; f_800DB9A8(c); // 800813C4
  goto L_80081428; // 800813C8
L_800813CC:;
  c->r[4]=0u+0x80250000u; // 800813CC
  c->r[3]=c->r[29]+0x00001145u; // 800813D0
  c->r[4]=c->r[4]+0x00006D68u; // 800813D4
  c->r[4]=c->r[4]+0x00000E1Eu; // 800813D8
  c->lr=0x800813E0u; f_800DB9A8(c); // 800813DC
  goto L_80081428; // 800813E0
L_800813E4:;
  c->r[4]=0u+0x80250000u; // 800813E4
  c->r[3]=c->r[29]+0x00001145u; // 800813E8
  c->r[4]=c->r[4]+0x00006D68u; // 800813EC
  c->r[4]=c->r[4]+0x00000EABu; // 800813F0
  c->lr=0x800813F8u; f_800DB9A8(c); // 800813F4
  goto L_80081428; // 800813F8
L_800813FC:;
  c->r[4]=0u+0x80250000u; // 800813FC
  c->r[3]=c->r[29]+0x00001145u; // 80081400
  c->r[4]=c->r[4]+0x00006D68u; // 80081404
  c->r[4]=c->r[4]+0x00000F3Cu; // 80081408
  c->lr=0x80081410u; f_800DB9A8(c); // 8008140C
  goto L_80081428; // 80081410
L_80081414:;
  c->r[4]=0u+0x80250000u; // 80081414
  c->r[3]=c->r[29]+0x00001145u; // 80081418
  c->r[4]=c->r[4]+0x00006D68u; // 8008141C
  c->r[4]=c->r[4]+0x00000FC2u; // 80081420
  c->lr=0x80081428u; f_800DB9A8(c); // 80081424
L_80081428:;
  c->r[0]=0u+0x00000000u; // 80081428
  W32(c->r[29]+0x00001548u,c->r[0]); // 8008142C
  goto L_80081524; // 80081430
L_80081434:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80081434
  cmps(c,0,(int32_t)c->r[0],4); // 80081438
  if (crb(c,2)) { goto L_8008149C; } // 8008143C
  if (!crb(c,0)) { goto L_8008145C; } // 80081440
  cmps(c,0,(int32_t)c->r[0],2); // 80081444
  if (crb(c,2)) { goto L_800814B4; } // 80081448
  if (!crb(c,0)) { goto L_80081484; } // 8008144C
  cmps(c,0,(int32_t)c->r[0],1); // 80081450
  if (!crb(c,0)) { goto L_8008146C; } // 80081454
  goto L_800814F8; // 80081458
L_8008145C:;
  cmps(c,0,(int32_t)c->r[0],6); // 8008145C
  if (crb(c,2)) { goto L_800814E4; } // 80081460
  if (!crb(c,0)) { goto L_800814F8; } // 80081464
  goto L_800814CC; // 80081468
L_8008146C:;
  c->r[4]=0u+0x80250000u; // 8008146C
  c->r[3]=c->r[29]+0x00001145u; // 80081470
  c->r[4]=c->r[4]+0x00006D68u; // 80081474
  c->r[4]=c->r[4]+0x00001041u; // 80081478
  c->lr=0x80081480u; f_800DB9A8(c); // 8008147C
  goto L_800814F8; // 80081480
L_80081484:;
  c->r[4]=0u+0x80250000u; // 80081484
  c->r[3]=c->r[29]+0x00001145u; // 80081488
  c->r[4]=c->r[4]+0x00006D68u; // 8008148C
  c->r[4]=c->r[4]+0x000010A7u; // 80081490
  c->lr=0x80081498u; f_800DB9A8(c); // 80081494
  goto L_800814F8; // 80081498
L_8008149C:;
  c->r[4]=0u+0x80250000u; // 8008149C
  c->r[3]=c->r[29]+0x00001145u; // 800814A0
  c->r[4]=c->r[4]+0x00006D68u; // 800814A4
  c->r[4]=c->r[4]+0x00001152u; // 800814A8
  c->lr=0x800814B0u; f_800DB9A8(c); // 800814AC
  goto L_800814F8; // 800814B0
L_800814B4:;
  c->r[4]=0u+0x80250000u; // 800814B4
  c->r[3]=c->r[29]+0x00001145u; // 800814B8
  c->r[4]=c->r[4]+0x00006D68u; // 800814BC
  c->r[4]=c->r[4]+0x00001200u; // 800814C0
  c->lr=0x800814C8u; f_800DB9A8(c); // 800814C4
  goto L_800814F8; // 800814C8
L_800814CC:;
  c->r[4]=0u+0x80250000u; // 800814CC
  c->r[3]=c->r[29]+0x00001145u; // 800814D0
  c->r[4]=c->r[4]+0x00006D68u; // 800814D4
  c->r[4]=c->r[4]+0x00001299u; // 800814D8
  c->lr=0x800814E0u; f_800DB9A8(c); // 800814DC
  goto L_800814F8; // 800814E0
L_800814E4:;
  c->r[4]=0u+0x80250000u; // 800814E4
  c->r[3]=c->r[29]+0x00001145u; // 800814E8
  c->r[4]=c->r[4]+0x00006D68u; // 800814EC
  c->r[4]=c->r[4]+0x0000135Bu; // 800814F0
  c->lr=0x800814F8u; f_800DB9A8(c); // 800814F4
L_800814F8:;
  c->r[0]=0u+0x00000002u; // 800814F8
  W32(c->r[29]+0x00001548u,c->r[0]); // 800814FC
  goto L_80081524; // 80081500
L_80081504:;
  c->r[4]=0u+0x80250000u; // 80081504
  c->r[5]=c->r[30]|c->r[30]; // 80081508
  c->r[4]=c->r[4]+0x00006D68u; // 8008150C
  c->r[3]=c->r[29]+0x00001145u; // 80081510
  c->r[4]=c->r[4]+0x000013F3u; // 80081514
  c->r[6]=c->r[1]+0x00000010u; // 80081518
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008151C
  c->lr=0x80081524u; f_800DA3C8(c); // 80081520
L_80081524:;
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 80081524
  cmps(c,0,(int32_t)c->r[0],0); // 80081528
  if (!crb(c,2)) { goto L_80081548; } // 8008152C
  c->r[3]=0u+0x00001564u; // 80081530
  c->lr=0x80081538u; f_8008DC84(c); // 80081534
  cmps(c,0,(int32_t)c->r[3],0); // 80081538
  if (crb(c,2)) { goto L_80081544; } // 8008153C
  c->lr=0x80081544u; f_80080788(c); // 80081540
L_80081544:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 80081544
L_80081548:;
  c->r[4]=0u+0x80250000u; // 80081548
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008154C
  c->r[4]=c->r[4]+0x00006D68u; // 80081550
  c->r[5]=c->r[30]|c->r[30]; // 80081554
  c->r[4]=c->r[4]+0x0000142Cu; // 80081558
  c->r[6]=c->r[1]+0x00000010u; // 8008155C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081560
  c->r[12]=R32(c->r[3]+0x00000000u); // 80081564
  c->r[12]=R32(c->r[12]+0x00000060u); // 80081568
  c->ctr=c->r[12]; // 8008156C
  if (true) { c->lr=0x80081574u; dispatch(c,c->ctr); } // 80081570
  c->r[0]=R32(c->r[29]+0x00001548u); // 80081574
  cmps(c,0,(int32_t)c->r[0],2); // 80081578
  if (!crb(c,2)) { goto L_800815A0; } // 8008157C
  c->r[0]=R32(c->r[2]+0xFFFF8BF8u); // 80081580
  c->r[3]=0u+0x00000000u; // 80081584
  W32(c->r[1]+0x00000008u,c->r[3]); // 80081588
  c->r[4]=c->r[1]+0x00000008u; // 8008158C
  c->r[3]=c->r[1]+0x0000000Cu; // 80081590
  c->r[5]=c->r[29]+0x00001145u; // 80081594
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80081598
  c->lr=0x800815A0u; f_800AED9C(c); // 8008159C
L_800815A0:;
  c->r[3]=0u+0x00000000u; // 800815A0
  goto L_800817A8; // 800815A4
L_800815A8:;
  c->r[0]=0u+0x00000001u; // 800815A8
  W8(c->r[31]+0x000000CCu,c->r[0]); // 800815AC
  c->r[4]=c->r[26]|c->r[26]; // 800815B0
  c->r[3]=c->r[1]+0x00000054u; // 800815B4
  W32(c->r[1]+0x00000050u,c->r[31]); // 800815B8
  c->r[26]=0u+0x00000000u; // 800815BC
  c->lr=0x800815C4u; f_800DB9A8(c); // 800815C0
  W32(c->r[1]+0x00000154u,c->r[28]); // 800815C4
  c->r[4]=0u+0x80080000u; // 800815C8
  c->r[3]=c->r[29]|c->r[29]; // 800815CC
  c->r[5]=c->r[1]+0x00000050u; // 800815D0
  W32(c->r[1]+0x00000158u,c->r[28]); // 800815D4
  c->r[4]=c->r[4]+0x00000C48u; // 800815D8
  c->r[6]=0u+0x00000010u; // 800815DC
  W32(c->r[1]+0x0000015Cu,c->r[28]); // 800815E0
  c->r[12]=R32(c->r[29]+0x00000000u); // 800815E4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800815E8
  c->ctr=c->r[12]; // 800815EC
  if (true) { c->lr=0x800815F4u; dispatch(c,c->ctr); } // 800815F0
  c->r[4]=0u+0x10620000u; // 800815F4
  c->r[25]=c->r[3]|c->r[3]; // 800815F8
  c->r[28]=c->r[4]+0x00004DD3u; // 800815FC
  c->r[30]=0u+0x80000000u; // 80081600
  goto L_80081734; // 80081604
L_80081608:;
  c->lr=0x8008160Cu; f_800BDDEC(c); // 80081608
  c->r[12]=R32(c->r[29]+0x00000000u); // 8008160C
  c->r[24]=c->r[3]|c->r[3]; // 80081610
  c->r[3]=c->r[29]|c->r[29]; // 80081614
  c->r[12]=R32(c->r[12]+0x00000144u); // 80081618
  c->ctr=c->r[12]; // 8008161C
  if (true) { c->lr=0x80081624u; dispatch(c,c->ctr); } // 80081620
  cmps(c,0,(int32_t)c->r[3],0); // 80081624
  if (crb(c,2)) { goto L_80081640; } // 80081628
  cmps(c,0,(int32_t)c->r[24],0); // 8008162C
  if (!crb(c,2)) { goto L_80081640; } // 80081630
  c->r[3]=c->r[29]|c->r[29]; // 80081634
  c->r[4]=0u+0x00000000u; // 80081638
  c->lr=0x80081640u; f_800817BC(c); // 8008163C
L_80081640:;
  cmps(c,0,(int32_t)c->r[24],4); // 80081640
  if (crb(c,2)) { goto L_80081674; } // 80081644
  cmps(c,0,(int32_t)c->r[24],11); // 80081648
  if (crb(c,2)) { goto L_80081674; } // 8008164C
  cmps(c,0,(int32_t)c->r[24],6); // 80081650
  if (crb(c,2)) { goto L_80081674; } // 80081654
  c->r[12]=R32(c->r[29]+0x00000000u); // 80081658
  c->r[3]=c->r[29]|c->r[29]; // 8008165C
  c->r[12]=R32(c->r[12]+0x00000144u); // 80081660
  c->ctr=c->r[12]; // 80081664
  if (true) { c->lr=0x8008166Cu; dispatch(c,c->ctr); } // 80081668
  cmps(c,0,(int32_t)c->r[3],0); // 8008166C
  if (crb(c,2)) { goto L_800816CC; } // 80081670
L_80081674:;
  c->r[3]=c->r[29]|c->r[29]; // 80081674
  c->r[4]=0u+0x00000001u; // 80081678
  c->lr=0x80081680u; f_800817BC(c); // 8008167C
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 80081680
  cmps(c,0,(int32_t)c->r[0],0); // 80081684
  if (!crb(c,2)) { goto L_800816A4; } // 80081688
  c->r[3]=0u+0x00001564u; // 8008168C
  c->lr=0x80081694u; f_8008DC84(c); // 80081690
  cmps(c,0,(int32_t)c->r[3],0); // 80081694
  if (crb(c,2)) { goto L_800816A0; } // 80081698
  c->lr=0x800816A0u; f_80080788(c); // 8008169C
L_800816A0:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800816A0
L_800816A4:;
  c->r[27]=R32(c->r[13]+0xFFFF8B00u); // 800816A4
  c->lr=0x800816ACu; f_8008FFD8(c); // 800816A8
  c->lr=0x800816B0u; f_8008E294(c); // 800816AC
  c->r[3]=c->r[27]|c->r[27]; // 800816B0
  c->r[4]=c->r[24]|c->r[24]; // 800816B4
  c->lr=0x800816BCu; f_80082F60(c); // 800816B8
  c->lr=0x800816C0u; f_80090030(c); // 800816BC
  c->lr=0x800816C4u; f_80090388(c); // 800816C0
  c->r[26]=0u+0x00000001u; // 800816C4
  goto L_8008171C; // 800816C8
L_800816CC:;
  c->r[0]=R8(c->r[13]+0xFFFF8BC9u); // 800816CC
  cmps(c,0,(int32_t)c->r[0],0); // 800816D0
  if (crb(c,2)) { goto L_8008171C; } // 800816D4
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800816D8
  cmps(c,0,(int32_t)c->r[0],0); // 800816DC
  if (!crb(c,2)) { goto L_800816FC; } // 800816E0
  c->r[3]=0u+0x00001564u; // 800816E4
  c->lr=0x800816ECu; f_8008DC84(c); // 800816E8
  cmps(c,0,(int32_t)c->r[3],0); // 800816EC
  if (crb(c,2)) { goto L_800816F8; } // 800816F0
  c->lr=0x800816F8u; f_80080788(c); // 800816F4
L_800816F8:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800816F8
L_800816FC:;
  c->r[27]=R32(c->r[13]+0xFFFF8B00u); // 800816FC
  c->lr=0x80081704u; f_8008FFD8(c); // 80081700
  c->lr=0x80081708u; f_8008E294(c); // 80081704
  c->r[3]=c->r[27]|c->r[27]; // 80081708
  c->r[4]=0u+0xFFFFFFFFu; // 8008170C
  c->lr=0x80081714u; f_80082F60(c); // 80081710
  c->lr=0x80081718u; f_80090030(c); // 80081714
  c->lr=0x8008171Cu; f_80090388(c); // 80081718
L_8008171C:;
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8008171C
  c->r[3]=0u+0x00000000u; // 80081720
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80081724
  c->r[0]=(uint32_t)(((uint64_t)c->r[28]*(uint64_t)c->r[0])>>32); // 80081728
  c->r[4]=rotl(c->r[0],26)&0x03FFFFFFu; // 8008172C
  c->lr=0x80081734u; f_800B484C(c); // 80081730
L_80081734:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80081734
  c->r[3]=c->r[29]|c->r[29]; // 80081738
  c->r[4]=c->r[25]|c->r[25]; // 8008173C
  c->r[12]=R32(c->r[12]+0x00000044u); // 80081740
  c->ctr=c->r[12]; // 80081744
  if (true) { c->lr=0x8008174Cu; dispatch(c,c->ctr); } // 80081748
  cmps(c,0,(int32_t)c->r[3],0); // 8008174C
  if (crb(c,2)) { IRQCHK(c); goto L_80081608; } // 80081750
  c->r[0]=R8(c->r[13]+0xFFFF8BC9u); // 80081754
  cmps(c,0,(int32_t)c->r[0],0); // 80081758
  if (!crb(c,2)) { IRQCHK(c); goto L_80081608; } // 8008175C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80081760
  c->r[3]=c->r[29]|c->r[29]; // 80081764
  c->r[4]=c->r[25]|c->r[25]; // 80081768
  c->r[12]=R32(c->r[12]+0x00000040u); // 8008176C
  c->ctr=c->r[12]; // 80081770
  if (true) { c->lr=0x80081778u; dispatch(c,c->ctr); } // 80081774
  cmps(c,0,(int32_t)c->r[26],0); // 80081778
  if (crb(c,2)) { goto L_80081788; } // 8008177C
  c->lr=0x80081784u; f_8008FFD8(c); // 80081780
  c->lr=0x80081788u; f_80090388(c); // 80081784
L_80081788:;
  c->r[0]=R32(c->r[13]+0xFFFF8B78u); // 80081788
  cmps(c,0,(int32_t)c->r[0],0); // 8008178C
  if (!crb(c,2)) { goto L_800817A4; } // 80081790
  c->r[3]=c->r[31]|c->r[31]; // 80081794
  c->lr=0x8008179Cu; f_8008DE54(c); // 80081798
  c->r[3]=0u+0x00000000u; // 8008179C
  goto L_800817A8; // 800817A0
L_800817A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800817A4
L_800817A8:;
  {uint32_t ea=c->r[1]+0x00000160u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800817A8
  c->r[0]=R32(c->r[1]+0x00000184u); // 800817AC
  c->lr=c->r[0]; // 800817B0
  c->r[1]=c->r[1]+0x00000180u; // 800817B4
  return; // 800817B8
}

// SetDiscErrorMode__7WiiCoreFb
void f_800817BC(Ctx* __restrict c) {
  trace_call(0x800817BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800817BC
  c->r[0]=c->lr; // 800817C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800817C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800817C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800817CC
  c->r[30]=c->r[4]|c->r[4]; // 800817D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800817D4
  c->r[29]=c->r[3]|c->r[3]; // 800817D8
  c->r[0]=R8(c->r[3]+0x0000154Du); // 800817DC
  cmps(c,0,(int32_t)c->r[0],0); // 800817E0
  if (!crb(c,2)) { goto L_80081870; } // 800817E4
  cmpu(c,0,c->r[4],0x00000001u); // 800817E8
  if (!crb(c,2)) { goto L_80081870; } // 800817EC
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800817F0
  cmps(c,0,(int32_t)c->r[0],0); // 800817F4
  if (!crb(c,2)) { goto L_80081804; } // 800817F8
  c->lr=0x80081800u; f_80078EC8(c); // 800817FC
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 80081800
L_80081804:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 80081804
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80081808
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008180C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80081810
  c->ctr=c->r[12]; // 80081814
  if (true) { c->lr=0x8008181Cu; dispatch(c,c->ctr); } // 80081818
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 8008181C
  cmps(c,0,(int32_t)c->r[0],0); // 80081820
  if (!crb(c,2)) { goto L_80081830; } // 80081824
  c->lr=0x8008182Cu; f_80078EC8(c); // 80081828
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 8008182C
L_80081830:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 80081830
  c->r[12]=R32(c->r[3]+0x00000000u); // 80081834
  c->r[12]=R32(c->r[12]+0x00000064u); // 80081838
  c->ctr=c->r[12]; // 8008183C
  if (true) { c->lr=0x80081844u; dispatch(c,c->ctr); } // 80081840
  c->r[31]=0u+0x00000000u; // 80081844
L_80081848:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80081848
  c->r[3]=c->r[29]|c->r[29]; // 8008184C
  c->r[4]=c->r[31]|c->r[31]; // 80081850
  c->r[5]=0u+0x00000000u; // 80081854
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80081858
  c->ctr=c->r[12]; // 8008185C
  if (true) { c->lr=0x80081864u; dispatch(c,c->ctr); } // 80081860
  c->r[31]=c->r[31]+0x00000001u; // 80081864
  cmps(c,0,(int32_t)c->r[31],4); // 80081868
  if (crb(c,0)) { IRQCHK(c); goto L_80081848; } // 8008186C
L_80081870:;
  c->r[0]=R8(c->r[29]+0x0000154Du); // 80081870
  cmpu(c,0,c->r[0],0x00000001u); // 80081874
  if (!crb(c,2)) { goto L_800818E4; } // 80081878
  cmps(c,0,(int32_t)c->r[30],0); // 8008187C
  if (!crb(c,2)) { goto L_800818E4; } // 80081880
  c->r[0]=R8(c->r[13]+0xFFFF8BC9u); // 80081884
  cmps(c,0,(int32_t)c->r[0],0); // 80081888
  if (!crb(c,2)) { goto L_800818E4; } // 8008188C
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 80081890
  cmps(c,0,(int32_t)c->r[0],0); // 80081894
  if (!crb(c,2)) { goto L_800818A4; } // 80081898
  c->lr=0x800818A0u; f_80078EC8(c); // 8008189C
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800818A0
L_800818A4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800818A4
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800818A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800818AC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800818B0
  c->ctr=c->r[12]; // 800818B4
  if (true) { c->lr=0x800818BCu; dispatch(c,c->ctr); } // 800818B8
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 800818BC
  cmps(c,0,(int32_t)c->r[0],0); // 800818C0
  if (!crb(c,2)) { goto L_800818D0; } // 800818C4
  c->lr=0x800818CCu; f_80078EC8(c); // 800818C8
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 800818CC
L_800818D0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B18u); // 800818D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800818D4
  c->r[12]=R32(c->r[12]+0x00000064u); // 800818D8
  c->ctr=c->r[12]; // 800818DC
  if (true) { c->lr=0x800818E4u; dispatch(c,c->ctr); } // 800818E0
L_800818E4:;
  W8(c->r[29]+0x0000154Du,c->r[30]); // 800818E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800818E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800818EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800818F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800818F4
  c->lr=c->r[0]; // 800818F8
  c->r[1]=c->r[1]+0x00000020u; // 800818FC
  return; // 80081900
}

// IsDiscError__7WiiCoreFv
void f_80081904(Ctx* __restrict c) {
  trace_call(0x80081904u);
  c->r[3]=R8(c->r[3]+0x0000154Du); // 80081904
  return; // 80081908
}

// ReadFile__7WiiCoreFPvUiPv
void f_8008190C(Ctx* __restrict c) {
  trace_call(0x8008190Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008190C
  c->r[0]=c->lr; // 80081910
  W32(c->r[1]+0x00000154u,c->r[0]); // 80081914
  {uint32_t ea=c->r[1]+0x00000124u; for(int i=21;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80081918
  c->r[24]=c->r[3]|c->r[3]; // 8008191C
  c->r[25]=c->r[4]|c->r[4]; // 80081920
  c->r[26]=c->r[5]|c->r[5]; // 80081924
  c->r[27]=c->r[6]|c->r[6]; // 80081928
  c->r[0]=R32(c->r[3]+0x0000113Cu); // 8008192C
  cmps(c,0,(int32_t)c->r[0],0); // 80081930
  if (!crb(c,2)) { goto L_80081944; } // 80081934
  c->r[3]=0u+0x00000020u; // 80081938
  c->lr=0x80081940u; f_8008DD6C(c); // 8008193C
  W32(c->r[24]+0x0000113Cu,c->r[3]); // 80081940
L_80081944:;
  c->r[0]=c->r[26]+0x0000001Fu; // 80081944
  c->r[31]=c->r[25]|c->r[25]; // 80081948
  c->r[21]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8008194C
  c->r[30]=0u+0x00000000u; // 80081950
  cmpu(c,0,c->r[26],c->r[21]); // 80081954
  if (crb(c,2)) { goto L_8008197C; } // 80081958
  cmpu(c,0,c->r[26],0x00000020u); // 8008195C
  if (!crb(c,0)) { goto L_8008196C; } // 80081960
  c->r[3]=R32(c->r[24]+0x0000113Cu); // 80081964
  goto L_80081974; // 80081968
L_8008196C:;
  c->r[3]=c->r[21]|c->r[21]; // 8008196C
  c->lr=0x80081974u; f_8008DD6C(c); // 80081970
L_80081974:;
  c->r[31]=c->r[3]|c->r[3]; // 80081974
  c->r[30]=0u+0x00000001u; // 80081978
L_8008197C:;
  c->r[0]=R8(c->r[27]+0x000000CCu); // 8008197C
  cmps(c,0,(int32_t)c->r[0],0); // 80081980
  if (crb(c,2)) { goto L_80081B60; } // 80081984
  W32(c->r[1]+0x00000008u,c->r[27]); // 80081988
  c->r[4]=0u+0x80080000u; // 8008198C
  c->r[3]=c->r[24]|c->r[24]; // 80081990
  c->r[5]=c->r[1]+0x00000008u; // 80081994
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 80081998
  c->r[4]=c->r[4]+0x00000C78u; // 8008199C
  c->r[29]=0u+0x00000000u; // 800819A0
  c->r[6]=0u+0x00000010u; // 800819A4
  W32(c->r[1]+0x00000110u,c->r[21]); // 800819A8
  c->r[0]=R32(c->r[27]+0x000000C8u); // 800819AC
  W32(c->r[1]+0x00000114u,c->r[0]); // 800819B0
  c->r[12]=R32(c->r[24]+0x00000000u); // 800819B4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800819B8
  c->ctr=c->r[12]; // 800819BC
  if (true) { c->lr=0x800819C4u; dispatch(c,c->ctr); } // 800819C0
  c->r[4]=0u+0x10620000u; // 800819C4
  c->r[28]=c->r[3]|c->r[3]; // 800819C8
  c->r[22]=c->r[4]+0x00004DD3u; // 800819CC
  c->r[23]=0u+0x80000000u; // 800819D0
  goto L_80081B04; // 800819D4
L_800819D8:;
  c->lr=0x800819DCu; f_800BDDEC(c); // 800819D8
  c->r[12]=R32(c->r[24]+0x00000000u); // 800819DC
  c->r[21]=c->r[3]|c->r[3]; // 800819E0
  c->r[3]=c->r[24]|c->r[24]; // 800819E4
  c->r[12]=R32(c->r[12]+0x00000144u); // 800819E8
  c->ctr=c->r[12]; // 800819EC
  if (true) { c->lr=0x800819F4u; dispatch(c,c->ctr); } // 800819F0
  cmps(c,0,(int32_t)c->r[3],0); // 800819F4
  if (crb(c,2)) { goto L_80081A10; } // 800819F8
  cmps(c,0,(int32_t)c->r[21],0); // 800819FC
  if (!crb(c,2)) { goto L_80081A10; } // 80081A00
  c->r[3]=c->r[24]|c->r[24]; // 80081A04
  c->r[4]=0u+0x00000000u; // 80081A08
  c->lr=0x80081A10u; f_800817BC(c); // 80081A0C
L_80081A10:;
  cmps(c,0,(int32_t)c->r[21],4); // 80081A10
  if (crb(c,2)) { goto L_80081A44; } // 80081A14
  cmps(c,0,(int32_t)c->r[21],11); // 80081A18
  if (crb(c,2)) { goto L_80081A44; } // 80081A1C
  cmps(c,0,(int32_t)c->r[21],6); // 80081A20
  if (crb(c,2)) { goto L_80081A44; } // 80081A24
  c->r[12]=R32(c->r[24]+0x00000000u); // 80081A28
  c->r[3]=c->r[24]|c->r[24]; // 80081A2C
  c->r[12]=R32(c->r[12]+0x00000144u); // 80081A30
  c->ctr=c->r[12]; // 80081A34
  if (true) { c->lr=0x80081A3Cu; dispatch(c,c->ctr); } // 80081A38
  cmps(c,0,(int32_t)c->r[3],0); // 80081A3C
  if (crb(c,2)) { goto L_80081A9C; } // 80081A40
L_80081A44:;
  c->r[3]=c->r[24]|c->r[24]; // 80081A44
  c->r[4]=0u+0x00000001u; // 80081A48
  c->lr=0x80081A50u; f_800817BC(c); // 80081A4C
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 80081A50
  cmps(c,0,(int32_t)c->r[0],0); // 80081A54
  if (!crb(c,2)) { goto L_80081A74; } // 80081A58
  c->r[3]=0u+0x00001564u; // 80081A5C
  c->lr=0x80081A64u; f_8008DC84(c); // 80081A60
  cmps(c,0,(int32_t)c->r[3],0); // 80081A64
  if (crb(c,2)) { goto L_80081A70; } // 80081A68
  c->lr=0x80081A70u; f_80080788(c); // 80081A6C
L_80081A70:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 80081A70
L_80081A74:;
  c->r[29]=R32(c->r[13]+0xFFFF8B00u); // 80081A74
  c->lr=0x80081A7Cu; f_8008FFD8(c); // 80081A78
  c->lr=0x80081A80u; f_8008E294(c); // 80081A7C
  c->r[3]=c->r[29]|c->r[29]; // 80081A80
  c->r[4]=c->r[21]|c->r[21]; // 80081A84
  c->lr=0x80081A8Cu; f_80082F60(c); // 80081A88
  c->lr=0x80081A90u; f_80090030(c); // 80081A8C
  c->lr=0x80081A94u; f_80090388(c); // 80081A90
  c->r[29]=0u+0x00000001u; // 80081A94
  goto L_80081AEC; // 80081A98
L_80081A9C:;
  c->r[0]=R8(c->r[13]+0xFFFF8BC9u); // 80081A9C
  cmps(c,0,(int32_t)c->r[0],0); // 80081AA0
  if (crb(c,2)) { goto L_80081AEC; } // 80081AA4
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 80081AA8
  cmps(c,0,(int32_t)c->r[0],0); // 80081AAC
  if (!crb(c,2)) { goto L_80081ACC; } // 80081AB0
  c->r[3]=0u+0x00001564u; // 80081AB4
  c->lr=0x80081ABCu; f_8008DC84(c); // 80081AB8
  cmps(c,0,(int32_t)c->r[3],0); // 80081ABC
  if (crb(c,2)) { goto L_80081AC8; } // 80081AC0
  c->lr=0x80081AC8u; f_80080788(c); // 80081AC4
L_80081AC8:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 80081AC8
L_80081ACC:;
  c->r[21]=R32(c->r[13]+0xFFFF8B00u); // 80081ACC
  c->lr=0x80081AD4u; f_8008FFD8(c); // 80081AD0
  c->lr=0x80081AD8u; f_8008E294(c); // 80081AD4
  c->r[3]=c->r[21]|c->r[21]; // 80081AD8
  c->r[4]=0u+0xFFFFFFFFu; // 80081ADC
  c->lr=0x80081AE4u; f_80082F60(c); // 80081AE0
  c->lr=0x80081AE8u; f_80090030(c); // 80081AE4
  c->lr=0x80081AECu; f_80090388(c); // 80081AE8
L_80081AEC:;
  c->r[0]=R32(c->r[23]+0x000000F8u); // 80081AEC
  c->r[3]=0u+0x00000000u; // 80081AF0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80081AF4
  c->r[0]=(uint32_t)(((uint64_t)c->r[22]*(uint64_t)c->r[0])>>32); // 80081AF8
  c->r[4]=rotl(c->r[0],26)&0x03FFFFFFu; // 80081AFC
  c->lr=0x80081B04u; f_800B484C(c); // 80081B00
L_80081B04:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 80081B04
  c->r[3]=c->r[24]|c->r[24]; // 80081B08
  c->r[4]=c->r[28]|c->r[28]; // 80081B0C
  c->r[12]=R32(c->r[12]+0x00000044u); // 80081B10
  c->ctr=c->r[12]; // 80081B14
  if (true) { c->lr=0x80081B1Cu; dispatch(c,c->ctr); } // 80081B18
  cmps(c,0,(int32_t)c->r[3],0); // 80081B1C
  if (crb(c,2)) { IRQCHK(c); goto L_800819D8; } // 80081B20
  c->r[0]=R8(c->r[13]+0xFFFF8BC9u); // 80081B24
  cmps(c,0,(int32_t)c->r[0],0); // 80081B28
  if (!crb(c,2)) { IRQCHK(c); goto L_800819D8; } // 80081B2C
  c->r[12]=R32(c->r[24]+0x00000000u); // 80081B30
  c->r[3]=c->r[24]|c->r[24]; // 80081B34
  c->r[4]=c->r[28]|c->r[28]; // 80081B38
  c->r[12]=R32(c->r[12]+0x00000040u); // 80081B3C
  c->ctr=c->r[12]; // 80081B40
  if (true) { c->lr=0x80081B48u; dispatch(c,c->ctr); } // 80081B44
  cmps(c,0,(int32_t)c->r[29],0); // 80081B48
  if (crb(c,2)) { goto L_80081B58; } // 80081B4C
  c->lr=0x80081B54u; f_8008FFD8(c); // 80081B50
  c->lr=0x80081B58u; f_80090388(c); // 80081B54
L_80081B58:;
  c->r[21]=R32(c->r[13]+0xFFFF8B7Cu); // 80081B58
  goto L_80081B74; // 80081B5C
L_80081B60:;
  c->r[4]=c->r[31]|c->r[31]; // 80081B60
  c->r[5]=c->r[21]|c->r[21]; // 80081B64
  c->r[3]=c->r[27]+0x0000003Cu; // 80081B68
  c->lr=0x80081B70u; f_800F20A0(c); // 80081B6C
  c->r[21]=c->r[3]|c->r[3]; // 80081B70
L_80081B74:;
  cmps(c,0,(int32_t)c->r[30],0); // 80081B74
  if (crb(c,2)) { goto L_80081BA0; } // 80081B78
  c->r[3]=c->r[25]|c->r[25]; // 80081B7C
  c->r[4]=c->r[31]|c->r[31]; // 80081B80
  c->r[5]=c->r[26]|c->r[26]; // 80081B84
  c->lr=0x80081B8Cu; f_80004338(c); // 80081B88
  c->r[0]=R32(c->r[24]+0x0000113Cu); // 80081B8C
  cmpu(c,0,c->r[31],c->r[0]); // 80081B90
  if (crb(c,2)) { goto L_80081BA0; } // 80081B94
  c->r[3]=c->r[31]|c->r[31]; // 80081B98
  c->lr=0x80081BA0u; f_8008DE94(c); // 80081B9C
L_80081BA0:;
  c->r[3]=c->r[25]|c->r[25]; // 80081BA0
  c->r[4]=c->r[26]|c->r[26]; // 80081BA4
  c->lr=0x80081BACu; f_800ABD2C(c); // 80081BA8
  c->r[0]=R32(c->r[27]+0x000000C8u); // 80081BAC
  c->r[3]=c->r[21]|c->r[21]; // 80081BB0
  c->r[0]=c->r[0]+c->r[26]; // 80081BB4
  W32(c->r[27]+0x000000C8u,c->r[0]); // 80081BB8
  {uint32_t ea=c->r[1]+0x00000124u; for(int i=21;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80081BBC
  c->r[0]=R32(c->r[1]+0x00000154u); // 80081BC0
  c->lr=c->r[0]; // 80081BC4
  c->r[1]=c->r[1]+0x00000150u; // 80081BC8
  return; // 80081BCC
}

// WriteFile__7WiiCoreFPvUiPv
void f_80081BD0(Ctx* __restrict c) {
  trace_call(0x80081BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081BD0
  c->r[0]=c->lr; // 80081BD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081BD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80081BDC
  c->r[31]=c->r[5]|c->r[5]; // 80081BE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80081BE4
  c->r[30]=c->r[3]|c->r[3]; // 80081BE8
  c->r[0]=R8(c->r[6]+0x000000CCu); // 80081BEC
  cmps(c,0,(int32_t)c->r[0],0); // 80081BF0
  if (crb(c,2)) { goto L_80081C48; } // 80081BF4
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 80081BF8
  cmps(c,0,(int32_t)c->r[0],0); // 80081BFC
  if (!crb(c,2)) { goto L_80081C1C; } // 80081C00
  c->r[3]=0u+0x00001564u; // 80081C04
  c->lr=0x80081C0Cu; f_8008DC84(c); // 80081C08
  cmps(c,0,(int32_t)c->r[3],0); // 80081C0C
  if (crb(c,2)) { goto L_80081C18; } // 80081C10
  c->lr=0x80081C18u; f_80080788(c); // 80081C14
L_80081C18:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 80081C18
L_80081C1C:;
  c->r[4]=0u+0x80250000u; // 80081C1C
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 80081C20
  c->r[4]=c->r[4]+0x00006D68u; // 80081C24
  c->r[4]=c->r[4]+0x00001464u; // 80081C28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081C2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80081C30
  c->r[12]=R32(c->r[12]+0x00000060u); // 80081C34
  c->ctr=c->r[12]; // 80081C38
  if (true) { c->lr=0x80081C40u; dispatch(c,c->ctr); } // 80081C3C
  c->r[3]=0u+0xFFFFFFFFu; // 80081C40
  goto L_80082098; // 80081C44
L_80081C48:;
  c->r[3]=c->r[6]+0x0000003Cu; // 80081C48
  c->lr=0x80081C50u; f_800F2180(c); // 80081C4C
  cmpu(c,0,c->r[3],c->r[31]); // 80081C50
  c->r[31]=c->r[3]|c->r[3]; // 80081C54
  if (crb(c,2)) { goto L_80082094; } // 80081C58
  c->lr=0x80081C60u; f_800F643C(c); // 80081C5C
  c->r[0]=c->r[31]+0x00000003u; // 80081C60
  cmpu(c,0,c->r[0],0x00000001u); // 80081C64
  if (!crb(c,1)) { goto L_80081E60; } // 80081C68
  cmps(c,0,(int32_t)c->r[31],-15); // 80081C6C
  if (crb(c,2)) { goto L_80081C90; } // 80081C70
  cmps(c,0,(int32_t)c->r[31],-5); // 80081C74
  if (crb(c,2)) { goto L_80081C90; } // 80081C78
  cmps(c,0,(int32_t)c->r[31],-4); // 80081C7C
  if (crb(c,2)) { goto L_80081D90; } // 80081C80
  cmps(c,0,(int32_t)c->r[31],-64); // 80081C84
  if (crb(c,2)) { goto L_80081F30; } // 80081C88
  goto L_80082000; // 80081C8C
L_80081C90:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80081C90
  cmps(c,0,(int32_t)c->r[0],1); // 80081C94
  if (crb(c,2)) { goto L_80081CC8; } // 80081C98
  cmps(c,0,(int32_t)c->r[0],3); // 80081C9C
  if (crb(c,2)) { goto L_80081CE8; } // 80081CA0
  cmps(c,0,(int32_t)c->r[0],4); // 80081CA4
  if (crb(c,2)) { goto L_80081D08; } // 80081CA8
  cmps(c,0,(int32_t)c->r[0],2); // 80081CAC
  if (crb(c,2)) { goto L_80081D28; } // 80081CB0
  cmps(c,0,(int32_t)c->r[0],5); // 80081CB4
  if (crb(c,2)) { goto L_80081D48; } // 80081CB8
  cmps(c,0,(int32_t)c->r[0],6); // 80081CBC
  if (crb(c,2)) { goto L_80081D68; } // 80081CC0
  goto L_80081D84; // 80081CC4
L_80081CC8:;
  c->r[4]=0u+0x80250000u; // 80081CC8
  c->r[3]=c->r[30]+0x00001145u; // 80081CCC
  c->r[4]=c->r[4]+0x00006D68u; // 80081CD0
  c->r[5]=c->r[30]+0x00001021u; // 80081CD4
  c->r[4]=c->r[4]+0x00000926u; // 80081CD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081CDC
  c->lr=0x80081CE4u; f_800DA3C8(c); // 80081CE0
  goto L_80081D84; // 80081CE4
L_80081CE8:;
  c->r[4]=0u+0x80250000u; // 80081CE8
  c->r[3]=c->r[30]+0x00001145u; // 80081CEC
  c->r[4]=c->r[4]+0x00006D68u; // 80081CF0
  c->r[5]=c->r[30]+0x00001021u; // 80081CF4
  c->r[4]=c->r[4]+0x00000960u; // 80081CF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081CFC
  c->lr=0x80081D04u; f_800DA3C8(c); // 80081D00
  goto L_80081D84; // 80081D04
L_80081D08:;
  c->r[4]=0u+0x80250000u; // 80081D08
  c->r[3]=c->r[30]+0x00001145u; // 80081D0C
  c->r[4]=c->r[4]+0x00006D68u; // 80081D10
  c->r[5]=c->r[30]+0x00001021u; // 80081D14
  c->r[4]=c->r[4]+0x00000998u; // 80081D18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081D1C
  c->lr=0x80081D24u; f_800DA3C8(c); // 80081D20
  goto L_80081D84; // 80081D24
L_80081D28:;
  c->r[4]=0u+0x80250000u; // 80081D28
  c->r[3]=c->r[30]+0x00001145u; // 80081D2C
  c->r[4]=c->r[4]+0x00006D68u; // 80081D30
  c->r[5]=c->r[30]+0x00001021u; // 80081D34
  c->r[4]=c->r[4]+0x000009CBu; // 80081D38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081D3C
  c->lr=0x80081D44u; f_800DA3C8(c); // 80081D40
  goto L_80081D84; // 80081D44
L_80081D48:;
  c->r[4]=0u+0x80250000u; // 80081D48
  c->r[3]=c->r[30]+0x00001145u; // 80081D4C
  c->r[4]=c->r[4]+0x00006D68u; // 80081D50
  c->r[5]=c->r[30]+0x00001021u; // 80081D54
  c->r[4]=c->r[4]+0x00000A0Eu; // 80081D58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081D5C
  c->lr=0x80081D64u; f_800DA3C8(c); // 80081D60
  goto L_80081D84; // 80081D64
L_80081D68:;
  c->r[4]=0u+0x80250000u; // 80081D68
  c->r[3]=c->r[30]+0x00001145u; // 80081D6C
  c->r[4]=c->r[4]+0x00006D68u; // 80081D70
  c->r[5]=c->r[30]+0x00001021u; // 80081D74
  c->r[4]=c->r[4]+0x00000A51u; // 80081D78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80081D7C
  c->lr=0x80081D84u; f_800DA3C8(c); // 80081D80
L_80081D84:;
  c->r[0]=0u+0x00000000u; // 80081D84
  W32(c->r[30]+0x00001548u,c->r[0]); // 80081D88
  goto L_8008201C; // 80081D8C
L_80081D90:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80081D90
  cmps(c,0,(int32_t)c->r[0],1); // 80081D94
  if (crb(c,2)) { goto L_80081DC8; } // 80081D98
  cmps(c,0,(int32_t)c->r[0],3); // 80081D9C
  if (crb(c,2)) { goto L_80081DE0; } // 80081DA0
  cmps(c,0,(int32_t)c->r[0],4); // 80081DA4
  if (crb(c,2)) { goto L_80081DF8; } // 80081DA8
  cmps(c,0,(int32_t)c->r[0],2); // 80081DAC
  if (crb(c,2)) { goto L_80081E10; } // 80081DB0
  cmps(c,0,(int32_t)c->r[0],5); // 80081DB4
  if (crb(c,2)) { goto L_80081E28; } // 80081DB8
  cmps(c,0,(int32_t)c->r[0],6); // 80081DBC
  if (crb(c,2)) { goto L_80081E40; } // 80081DC0
  goto L_80081E54; // 80081DC4
L_80081DC8:;
  c->r[4]=0u+0x80250000u; // 80081DC8
  c->r[3]=c->r[30]+0x00001145u; // 80081DCC
  c->r[4]=c->r[4]+0x00006D68u; // 80081DD0
  c->r[4]=c->r[4]+0x00000AA0u; // 80081DD4
  c->lr=0x80081DDCu; f_800DB9A8(c); // 80081DD8
  goto L_80081E54; // 80081DDC
L_80081DE0:;
  c->r[4]=0u+0x80250000u; // 80081DE0
  c->r[3]=c->r[30]+0x00001145u; // 80081DE4
  c->r[4]=c->r[4]+0x00006D68u; // 80081DE8
  c->r[4]=c->r[4]+0x00000AF9u; // 80081DEC
  c->lr=0x80081DF4u; f_800DB9A8(c); // 80081DF0
  goto L_80081E54; // 80081DF4
L_80081DF8:;
  c->r[4]=0u+0x80250000u; // 80081DF8
  c->r[3]=c->r[30]+0x00001145u; // 80081DFC
  c->r[4]=c->r[4]+0x00006D68u; // 80081E00
  c->r[4]=c->r[4]+0x00000B68u; // 80081E04
  c->lr=0x80081E0Cu; f_800DB9A8(c); // 80081E08
  goto L_80081E54; // 80081E0C
L_80081E10:;
  c->r[4]=0u+0x80250000u; // 80081E10
  c->r[3]=c->r[30]+0x00001145u; // 80081E14
  c->r[4]=c->r[4]+0x00006D68u; // 80081E18
  c->r[4]=c->r[4]+0x00000BE7u; // 80081E1C
  c->lr=0x80081E24u; f_800DB9A8(c); // 80081E20
  goto L_80081E54; // 80081E24
L_80081E28:;
  c->r[4]=0u+0x80250000u; // 80081E28
  c->r[3]=c->r[30]+0x00001145u; // 80081E2C
  c->r[4]=c->r[4]+0x00006D68u; // 80081E30
  c->r[4]=c->r[4]+0x00000C63u; // 80081E34
  c->lr=0x80081E3Cu; f_800DB9A8(c); // 80081E38
  goto L_80081E54; // 80081E3C
L_80081E40:;
  c->r[4]=0u+0x80250000u; // 80081E40
  c->r[3]=c->r[30]+0x00001145u; // 80081E44
  c->r[4]=c->r[4]+0x00006D68u; // 80081E48
  c->r[4]=c->r[4]+0x00000CE0u; // 80081E4C
  c->lr=0x80081E54u; f_800DB9A8(c); // 80081E50
L_80081E54:;
  c->r[0]=0u+0x00000002u; // 80081E54
  W32(c->r[30]+0x00001548u,c->r[0]); // 80081E58
  goto L_8008201C; // 80081E5C
L_80081E60:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80081E60
  cmps(c,0,(int32_t)c->r[0],1); // 80081E64
  if (crb(c,2)) { goto L_80081E98; } // 80081E68
  cmps(c,0,(int32_t)c->r[0],3); // 80081E6C
  if (crb(c,2)) { goto L_80081EB0; } // 80081E70
  cmps(c,0,(int32_t)c->r[0],4); // 80081E74
  if (crb(c,2)) { goto L_80081EC8; } // 80081E78
  cmps(c,0,(int32_t)c->r[0],2); // 80081E7C
  if (crb(c,2)) { goto L_80081EE0; } // 80081E80
  cmps(c,0,(int32_t)c->r[0],5); // 80081E84
  if (crb(c,2)) { goto L_80081EF8; } // 80081E88
  cmps(c,0,(int32_t)c->r[0],6); // 80081E8C
  if (crb(c,2)) { goto L_80081F10; } // 80081E90
  goto L_80081F24; // 80081E94
L_80081E98:;
  c->r[4]=0u+0x80250000u; // 80081E98
  c->r[3]=c->r[30]+0x00001145u; // 80081E9C
  c->r[4]=c->r[4]+0x00006D68u; // 80081EA0
  c->r[4]=c->r[4]+0x00000D47u; // 80081EA4
  c->lr=0x80081EACu; f_800DB9A8(c); // 80081EA8
  goto L_80081F24; // 80081EAC
L_80081EB0:;
  c->r[4]=0u+0x80250000u; // 80081EB0
  c->r[3]=c->r[30]+0x00001145u; // 80081EB4
  c->r[4]=c->r[4]+0x00006D68u; // 80081EB8
  c->r[4]=c->r[4]+0x00000DA7u; // 80081EBC
  c->lr=0x80081EC4u; f_800DB9A8(c); // 80081EC0
  goto L_80081F24; // 80081EC4
L_80081EC8:;
  c->r[4]=0u+0x80250000u; // 80081EC8
  c->r[3]=c->r[30]+0x00001145u; // 80081ECC
  c->r[4]=c->r[4]+0x00006D68u; // 80081ED0
  c->r[4]=c->r[4]+0x00000E1Eu; // 80081ED4
  c->lr=0x80081EDCu; f_800DB9A8(c); // 80081ED8
  goto L_80081F24; // 80081EDC
L_80081EE0:;
  c->r[4]=0u+0x80250000u; // 80081EE0
  c->r[3]=c->r[30]+0x00001145u; // 80081EE4
  c->r[4]=c->r[4]+0x00006D68u; // 80081EE8
  c->r[4]=c->r[4]+0x00000EABu; // 80081EEC
  c->lr=0x80081EF4u; f_800DB9A8(c); // 80081EF0
  goto L_80081F24; // 80081EF4
L_80081EF8:;
  c->r[4]=0u+0x80250000u; // 80081EF8
  c->r[3]=c->r[30]+0x00001145u; // 80081EFC
  c->r[4]=c->r[4]+0x00006D68u; // 80081F00
  c->r[4]=c->r[4]+0x00000F3Cu; // 80081F04
  c->lr=0x80081F0Cu; f_800DB9A8(c); // 80081F08
  goto L_80081F24; // 80081F0C
L_80081F10:;
  c->r[4]=0u+0x80250000u; // 80081F10
  c->r[3]=c->r[30]+0x00001145u; // 80081F14
  c->r[4]=c->r[4]+0x00006D68u; // 80081F18
  c->r[4]=c->r[4]+0x00000FC2u; // 80081F1C
  c->lr=0x80081F24u; f_800DB9A8(c); // 80081F20
L_80081F24:;
  c->r[0]=0u+0x00000000u; // 80081F24
  W32(c->r[30]+0x00001548u,c->r[0]); // 80081F28
  goto L_8008201C; // 80081F2C
L_80081F30:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80081F30
  cmps(c,0,(int32_t)c->r[0],1); // 80081F34
  if (crb(c,2)) { goto L_80081F68; } // 80081F38
  cmps(c,0,(int32_t)c->r[0],3); // 80081F3C
  if (crb(c,2)) { goto L_80081F80; } // 80081F40
  cmps(c,0,(int32_t)c->r[0],4); // 80081F44
  if (crb(c,2)) { goto L_80081F98; } // 80081F48
  cmps(c,0,(int32_t)c->r[0],2); // 80081F4C
  if (crb(c,2)) { goto L_80081FB0; } // 80081F50
  cmps(c,0,(int32_t)c->r[0],5); // 80081F54
  if (crb(c,2)) { goto L_80081FC8; } // 80081F58
  cmps(c,0,(int32_t)c->r[0],6); // 80081F5C
  if (crb(c,2)) { goto L_80081FE0; } // 80081F60
  goto L_80081FF4; // 80081F64
L_80081F68:;
  c->r[4]=0u+0x80250000u; // 80081F68
  c->r[3]=c->r[30]+0x00001145u; // 80081F6C
  c->r[4]=c->r[4]+0x00006D68u; // 80081F70
  c->r[4]=c->r[4]+0x00001041u; // 80081F74
  c->lr=0x80081F7Cu; f_800DB9A8(c); // 80081F78
  goto L_80081FF4; // 80081F7C
L_80081F80:;
  c->r[4]=0u+0x80250000u; // 80081F80
  c->r[3]=c->r[30]+0x00001145u; // 80081F84
  c->r[4]=c->r[4]+0x00006D68u; // 80081F88
  c->r[4]=c->r[4]+0x000010A7u; // 80081F8C
  c->lr=0x80081F94u; f_800DB9A8(c); // 80081F90
  goto L_80081FF4; // 80081F94
L_80081F98:;
  c->r[4]=0u+0x80250000u; // 80081F98
  c->r[3]=c->r[30]+0x00001145u; // 80081F9C
  c->r[4]=c->r[4]+0x00006D68u; // 80081FA0
  c->r[4]=c->r[4]+0x00001152u; // 80081FA4
  c->lr=0x80081FACu; f_800DB9A8(c); // 80081FA8
  goto L_80081FF4; // 80081FAC
L_80081FB0:;
  c->r[4]=0u+0x80250000u; // 80081FB0
  c->r[3]=c->r[30]+0x00001145u; // 80081FB4
  c->r[4]=c->r[4]+0x00006D68u; // 80081FB8
  c->r[4]=c->r[4]+0x00001200u; // 80081FBC
  c->lr=0x80081FC4u; f_800DB9A8(c); // 80081FC0
  goto L_80081FF4; // 80081FC4
L_80081FC8:;
  c->r[4]=0u+0x80250000u; // 80081FC8
  c->r[3]=c->r[30]+0x00001145u; // 80081FCC
  c->r[4]=c->r[4]+0x00006D68u; // 80081FD0
  c->r[4]=c->r[4]+0x00001299u; // 80081FD4
  c->lr=0x80081FDCu; f_800DB9A8(c); // 80081FD8
  goto L_80081FF4; // 80081FDC
L_80081FE0:;
  c->r[4]=0u+0x80250000u; // 80081FE0
  c->r[3]=c->r[30]+0x00001145u; // 80081FE4
  c->r[4]=c->r[4]+0x00006D68u; // 80081FE8
  c->r[4]=c->r[4]+0x0000135Bu; // 80081FEC
  c->lr=0x80081FF4u; f_800DB9A8(c); // 80081FF0
L_80081FF4:;
  c->r[0]=0u+0x00000002u; // 80081FF4
  W32(c->r[30]+0x00001548u,c->r[0]); // 80081FF8
  goto L_8008201C; // 80081FFC
L_80082000:;
  c->r[4]=0u+0x80250000u; // 80082000
  c->r[5]=c->r[31]|c->r[31]; // 80082004
  c->r[4]=c->r[4]+0x00006D68u; // 80082008
  c->r[3]=c->r[30]+0x00001145u; // 8008200C
  c->r[4]=c->r[4]+0x00001498u; // 80082010
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80082014
  c->lr=0x8008201Cu; f_800DA3C8(c); // 80082018
L_8008201C:;
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008201C
  cmps(c,0,(int32_t)c->r[0],0); // 80082020
  if (!crb(c,2)) { goto L_80082040; } // 80082024
  c->r[3]=0u+0x00001564u; // 80082028
  c->lr=0x80082030u; f_8008DC84(c); // 8008202C
  cmps(c,0,(int32_t)c->r[3],0); // 80082030
  if (crb(c,2)) { goto L_8008203C; } // 80082034
  c->lr=0x8008203Cu; f_80080788(c); // 80082038
L_8008203C:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008203C
L_80082040:;
  c->r[4]=0u+0x80250000u; // 80082040
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 80082044
  c->r[4]=c->r[4]+0x00006D68u; // 80082048
  c->r[5]=c->r[31]|c->r[31]; // 8008204C
  c->r[4]=c->r[4]+0x00001498u; // 80082050
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80082054
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082058
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008205C
  c->ctr=c->r[12]; // 80082060
  if (true) { c->lr=0x80082068u; dispatch(c,c->ctr); } // 80082064
  c->r[0]=R32(c->r[30]+0x00001548u); // 80082068
  cmps(c,0,(int32_t)c->r[0],2); // 8008206C
  if (!crb(c,2)) { goto L_80082094; } // 80082070
  c->r[0]=R32(c->r[2]+0xFFFF8BFCu); // 80082074
  c->r[3]=0u+0x00000000u; // 80082078
  W32(c->r[1]+0x00000008u,c->r[3]); // 8008207C
  c->r[3]=c->r[1]+0x0000000Cu; // 80082080
  c->r[4]=c->r[1]+0x00000008u; // 80082084
  c->r[5]=c->r[30]+0x00001145u; // 80082088
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8008208C
  c->lr=0x80082094u; f_800AED9C(c); // 80082090
L_80082094:;
  c->r[3]=c->r[31]|c->r[31]; // 80082094
L_80082098:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082098
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008209C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800820A0
  c->lr=c->r[0]; // 800820A4
  c->r[1]=c->r[1]+0x00000020u; // 800820A8
  return; // 800820AC
}

// CloseFile__7WiiCoreFPv
void f_800820B0(Ctx* __restrict c) {
  trace_call(0x800820B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800820B0
  c->r[0]=c->lr; // 800820B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800820B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800820BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800820C0
  c->r[30]=c->r[4]|c->r[4]; // 800820C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800820C8
  c->r[0]=R8(c->r[4]+0x000000CCu); // 800820CC
  cmps(c,0,(int32_t)c->r[0],0); // 800820D0
  if (crb(c,2)) { goto L_800820E4; } // 800820D4
  c->r[3]=c->r[30]|c->r[30]; // 800820D8
  c->lr=0x800820E0u; f_800B9804(c); // 800820DC
  goto L_80082158; // 800820E0
L_800820E4:;
  c->r[3]=c->r[4]+0x0000003Cu; // 800820E4
  c->lr=0x800820ECu; f_800F320C(c); // 800820E8
  cmps(c,0,(int32_t)c->r[3],0); // 800820EC
  c->r[29]=c->r[3]|c->r[3]; // 800820F0
  if (crb(c,2)) { goto L_80082158; } // 800820F4
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800820F8
  cmps(c,0,(int32_t)c->r[0],0); // 800820FC
  if (!crb(c,2)) { goto L_8008211C; } // 80082100
  c->r[3]=0u+0x00001564u; // 80082104
  c->lr=0x8008210Cu; f_8008DC84(c); // 80082108
  cmps(c,0,(int32_t)c->r[3],0); // 8008210C
  if (crb(c,2)) { goto L_80082118; } // 80082110
  c->lr=0x80082118u; f_80080788(c); // 80082114
L_80082118:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 80082118
L_8008211C:;
  c->r[31]=0u+0x80250000u; // 8008211C
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 80082120
  c->r[31]=c->r[31]+0x00006D68u; // 80082124
  c->r[5]=c->r[29]|c->r[29]; // 80082128
  c->r[4]=c->r[31]+0x000014BEu; // 8008212C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80082130
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082134
  c->r[12]=R32(c->r[12]+0x00000060u); // 80082138
  c->ctr=c->r[12]; // 8008213C
  if (true) { c->lr=0x80082144u; dispatch(c,c->ctr); } // 80082140
  c->r[3]=c->r[31]|c->r[31]; // 80082144
  c->r[5]=c->r[31]+0x000014EEu; // 80082148
  c->r[4]=0u+0x00000420u; // 8008214C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80082150
  c->lr=0x80082158u; f_800ACC34(c); // 80082154
L_80082158:;
  c->r[3]=c->r[30]|c->r[30]; // 80082158
  c->lr=0x80082160u; f_8008DE54(c); // 8008215C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082160
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082164
  c->r[30]=R32(c->r[1]+0x00000018u); // 80082168
  c->r[29]=R32(c->r[1]+0x00000014u); // 8008216C
  c->lr=c->r[0]; // 80082170
  c->r[1]=c->r[1]+0x00000020u; // 80082174
  return; // 80082178
}

// GetFileSize__7WiiCoreFPv
void f_8008217C(Ctx* __restrict c) {
  trace_call(0x8008217Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008217C
  c->r[0]=c->lr; // 80082180
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082184
  c->r[0]=R8(c->r[4]+0x000000CCu); // 80082188
  cmps(c,0,(int32_t)c->r[0],0); // 8008218C
  if (crb(c,2)) { goto L_8008219C; } // 80082190
  c->r[3]=R32(c->r[4]+0x00000034u); // 80082194
  goto L_800821BC; // 80082198
L_8008219C:;
  c->r[3]=c->r[4]+0x0000003Cu; // 8008219C
  c->r[4]=c->r[1]+0x00000008u; // 800821A0
  c->lr=0x800821A8u; f_800F2554(c); // 800821A4
  cmps(c,0,(int32_t)c->r[3],0); // 800821A8
  if (!crb(c,2)) { goto L_800821B8; } // 800821AC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800821B0
  goto L_800821BC; // 800821B4
L_800821B8:;
  c->r[3]=0u+0x00000000u; // 800821B8
L_800821BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800821BC
  c->lr=c->r[0]; // 800821C0
  c->r[1]=c->r[1]+0x00000010u; // 800821C4
  return; // 800821C8
}

// SeekFile__7WiiCoreFPvi14FileSeekOrigin
void f_800821CC(Ctx* __restrict c) {
  trace_call(0x800821CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800821CC
  c->r[0]=c->lr; // 800821D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800821D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800821D8
  c->r[31]=c->r[4]|c->r[4]; // 800821DC
  c->r[0]=R8(c->r[4]+0x000000CCu); // 800821E0
  cmps(c,0,(int32_t)c->r[0],0); // 800821E4
  if (crb(c,2)) { goto L_80082230; } // 800821E8
  cmps(c,0,(int32_t)c->r[6],0); // 800821EC
  if (crb(c,2)) { goto L_80082208; } // 800821F0
  cmps(c,0,(int32_t)c->r[6],1); // 800821F4
  if (crb(c,2)) { goto L_80082210; } // 800821F8
  cmps(c,0,(int32_t)c->r[6],2); // 800821FC
  if (crb(c,2)) { goto L_80082220; } // 80082200
  goto L_80082274; // 80082204
L_80082208:;
  W32(c->r[4]+0x000000C8u,c->r[5]); // 80082208
  goto L_80082274; // 8008220C
L_80082210:;
  c->r[0]=R32(c->r[4]+0x000000C8u); // 80082210
  c->r[0]=c->r[0]+c->r[5]; // 80082214
  W32(c->r[4]+0x000000C8u,c->r[0]); // 80082218
  goto L_80082274; // 8008221C
L_80082220:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 80082220
  c->r[0]=c->r[0]+c->r[5]; // 80082224
  W32(c->r[4]+0x000000C8u,c->r[0]); // 80082228
  goto L_80082274; // 8008222C
L_80082230:;
  cmps(c,0,(int32_t)c->r[6],0); // 80082230
  if (crb(c,2)) { goto L_8008224C; } // 80082234
  cmps(c,0,(int32_t)c->r[6],1); // 80082238
  if (crb(c,2)) { goto L_80082254; } // 8008223C
  cmps(c,0,(int32_t)c->r[6],2); // 80082240
  if (crb(c,2)) { goto L_8008225C; } // 80082244
  goto L_80082260; // 80082248
L_8008224C:;
  c->r[0]=0u+0x00000000u; // 8008224C
  goto L_80082260; // 80082250
L_80082254:;
  c->r[0]=0u+0x00000001u; // 80082254
  goto L_80082260; // 80082258
L_8008225C:;
  c->r[0]=0u+0x00000002u; // 8008225C
L_80082260:;
  c->r[3]=c->r[4]+0x0000003Cu; // 80082260
  c->r[4]=c->r[5]|c->r[5]; // 80082264
  c->r[5]=c->r[0]|c->r[0]; // 80082268
  c->lr=0x80082270u; f_800F2260(c); // 8008226C
  W32(c->r[31]+0x000000C8u,c->r[3]); // 80082270
L_80082274:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082278
  c->lr=c->r[0]; // 8008227C
  c->r[1]=c->r[1]+0x00000010u; // 80082280
  return; // 80082284
}

// EraseFile__7WiiCoreFPc
void f_80082288(Ctx* __restrict c) {
  trace_call(0x80082288u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082288
  c->r[0]=c->lr; // 8008228C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80082290
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80082294
  c->r[31]=0u+0x80250000u; // 80082298
  c->r[31]=c->r[31]+0x00006D68u; // 8008229C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800822A0
  c->r[30]=c->r[4]|c->r[4]; // 800822A4
  c->r[3]=c->r[30]|c->r[30]; // 800822A8
  c->r[4]=c->r[31]+0x0000091Au; // 800822AC
  c->lr=0x800822B4u; f_800DBDD4(c); // 800822B0
  cmpu(c,0,c->r[3],c->r[30]); // 800822B4
  if (!crb(c,2)) { goto L_80082360; } // 800822B8
  c->r[3]=c->r[1]+0x00000008u; // 800822BC
  c->r[4]=0u+0x00000000u; // 800822C0
  c->r[5]=0u+0x00000040u; // 800822C4
  c->lr=0x800822CCu; f_80004688(c); // 800822C8
  c->r[3]=c->r[30]|c->r[30]; // 800822CC
  c->r[4]=c->r[31]+0x00000921u; // 800822D0
  c->lr=0x800822D8u; f_800DBDD4(c); // 800822D4
  cmps(c,0,(int32_t)c->r[3],0); // 800822D8
  if (!crb(c,2)) { goto L_800822F0; } // 800822DC
  c->r[3]=c->r[1]+0x00000008u; // 800822E0
  c->r[4]=c->r[30]+0x00000006u; // 800822E4
  c->lr=0x800822ECu; f_800DB9A8(c); // 800822E8
  goto L_800822FC; // 800822EC
L_800822F0:;
  c->r[3]=c->r[1]+0x00000008u; // 800822F0
  c->r[4]=c->r[30]+0x00000005u; // 800822F4
  c->lr=0x800822FCu; f_800DB9A8(c); // 800822F8
L_800822FC:;
  c->r[3]=c->r[1]+0x00000008u; // 800822FC
  c->lr=0x80082304u; f_800F1E98(c); // 80082300
  cmps(c,0,(int32_t)c->r[3],0); // 80082304
  c->r[31]=c->r[3]|c->r[3]; // 80082308
  if (crb(c,2)) { goto L_800823A8; } // 8008230C
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 80082310
  cmps(c,0,(int32_t)c->r[0],0); // 80082314
  if (!crb(c,2)) { goto L_80082334; } // 80082318
  c->r[3]=0u+0x00001564u; // 8008231C
  c->lr=0x80082324u; f_8008DC84(c); // 80082320
  cmps(c,0,(int32_t)c->r[3],0); // 80082324
  if (crb(c,2)) { goto L_80082330; } // 80082328
  c->lr=0x80082330u; f_80080788(c); // 8008232C
L_80082330:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 80082330
L_80082334:;
  c->r[4]=0u+0x80250000u; // 80082334
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 80082338
  c->r[4]=c->r[4]+0x00006D68u; // 8008233C
  c->r[5]=c->r[31]|c->r[31]; // 80082340
  c->r[4]=c->r[4]+0x00001500u; // 80082344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80082348
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008234C
  c->r[12]=R32(c->r[12]+0x00000060u); // 80082350
  c->ctr=c->r[12]; // 80082354
  if (true) { c->lr=0x8008235Cu; dispatch(c,c->ctr); } // 80082358
  goto L_800823A8; // 8008235C
L_80082360:;
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 80082360
  cmps(c,0,(int32_t)c->r[0],0); // 80082364
  if (!crb(c,2)) { goto L_80082384; } // 80082368
  c->r[3]=0u+0x00001564u; // 8008236C
  c->lr=0x80082374u; f_8008DC84(c); // 80082370
  cmps(c,0,(int32_t)c->r[3],0); // 80082374
  if (crb(c,2)) { goto L_80082380; } // 80082378
  c->lr=0x80082380u; f_80080788(c); // 8008237C
L_80082380:;
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 80082380
L_80082384:;
  c->r[4]=0u+0x80250000u; // 80082384
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 80082388
  c->r[4]=c->r[4]+0x00006D68u; // 8008238C
  c->r[4]=c->r[4]+0x00001527u; // 80082390
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80082394
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082398
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008239C
  c->ctr=c->r[12]; // 800823A0
  if (true) { c->lr=0x800823A8u; dispatch(c,c->ctr); } // 800823A4
L_800823A8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800823A8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800823AC
  c->r[30]=R32(c->r[1]+0x00000048u); // 800823B0
  c->lr=c->r[0]; // 800823B4
  c->r[1]=c->r[1]+0x00000050u; // 800823B8
  return; // 800823BC
}

// GetNumActiveControllers__7WiiCoreFv
void f_800823C0(Ctx* __restrict c) {
  trace_call(0x800823C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800823C0
  c->r[0]=c->lr; // 800823C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800823C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800823CC
  c->r[31]=0u+0x00000000u; // 800823D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800823D4
  c->r[30]=0u+0x00000000u; // 800823D8
L_800823DC:;
  c->r[3]=c->r[30]|c->r[30]; // 800823DC
  c->lr=0x800823E4u; f_8008DA90(c); // 800823E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800823E4
  if (crb(c,2)) { goto L_800823F0; } // 800823E8
  c->r[31]=c->r[31]+0x00000001u; // 800823EC
L_800823F0:;
  c->r[30]=c->r[30]+0x00000001u; // 800823F0
  cmps(c,0,(int32_t)c->r[30],4); // 800823F4
  if (crb(c,0)) { IRQCHK(c); goto L_800823DC; } // 800823F8
  c->r[3]=c->r[31]|c->r[31]; // 800823FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082400
  c->r[30]=R32(c->r[1]+0x00000008u); // 80082404
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082408
  c->lr=c->r[0]; // 8008240C
  c->r[1]=c->r[1]+0x00000010u; // 80082410
  return; // 80082414
}

// IsControllerActive__7WiiCoreFi
void f_80082418(Ctx* __restrict c) {
  trace_call(0x80082418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082418
  c->r[0]=c->lr; // 8008241C
  c->r[3]=c->r[4]|c->r[4]; // 80082420
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082424
  c->lr=0x8008242Cu; f_8008DA90(c); // 80082428
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8008242C
  c->r[0]=0u-c->r[3]; // 80082430
  c->r[0]=c->r[0]|c->r[3]; // 80082434
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80082438
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008243C
  c->lr=c->r[0]; // 80082440
  c->r[1]=c->r[1]+0x00000010u; // 80082444
  return; // 80082448
}

// GetKeyState__7WiiCoreFUii
void f_8008244C(Ctx* __restrict c) {
  trace_call(0x8008244Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008244C
  c->r[0]=c->lr; // 80082450
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082454
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80082458
  c->r[31]=c->r[5]|c->r[5]; // 8008245C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80082460
  c->r[30]=c->r[4]|c->r[4]; // 80082464
  c->r[4]=c->r[31]|c->r[31]; // 80082468
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008246C
  c->r[12]=R32(c->r[12]+0x00000108u); // 80082470
  c->ctr=c->r[12]; // 80082474
  if (true) { c->lr=0x8008247Cu; dispatch(c,c->ctr); } // 80082478
  cmps(c,0,(int32_t)c->r[3],0); // 8008247C
  if (!crb(c,2)) { goto L_8008248C; } // 80082480
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082484
  goto L_80082520; // 80082488
L_8008248C:;
  cmpu(c,0,c->r[30],0x00008100u); // 8008248C
  if (!crb(c,2)) { goto L_800824C0; } // 80082490
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)3840); // 80082494
  c->r[3]=0u+0x802B0000u; // 80082498
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 8008249C
  c->r[3]=c->r[3]+c->r[0]; // 800824A0
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 800824A4
  cmpu(c,0,c->r[0],0x00000001u); // 800824A8
  if (!crb(c,2)) { goto L_800824B8; } // 800824AC
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800824B0
  goto L_80082520; // 800824B4
L_800824B8:;
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800824B8
  goto L_80082520; // 800824BC
L_800824C0:;
  cmpu(c,0,c->r[30],0x00008200u); // 800824C0
  if (!crb(c,2)) { goto L_800824F4; } // 800824C4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)3840); // 800824C8
  c->r[3]=0u+0x802B0000u; // 800824CC
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 800824D0
  c->r[3]=c->r[3]+c->r[0]; // 800824D4
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 800824D8
  cmpu(c,0,c->r[0],0x00000001u); // 800824DC
  if (!crb(c,2)) { goto L_800824EC; } // 800824E0
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800824E4
  goto L_80082520; // 800824E8
L_800824EC:;
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800824EC
  goto L_80082520; // 800824F0
L_800824F4:;
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)3840); // 800824F4
  c->r[3]=0u+0x802B0000u; // 800824F8
  c->r[0]=0u+0x43300000u; // 800824FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80082500
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082504
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[1]=RF64(ea);} // 80082508
  c->r[0]=R32(c->r[3]+c->r[4]); // 8008250C
  c->r[0]=c->r[30]&c->r[0]; // 80082510
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80082514
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80082518
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8008251C
L_80082520:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082520
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082524
  c->r[30]=R32(c->r[1]+0x00000018u); // 80082528
  c->lr=c->r[0]; // 8008252C
  c->r[1]=c->r[1]+0x00000020u; // 80082530
  return; // 80082534
}

// ResetKeyHoldTime__7WiiCoreFUii
void f_80082538(Ctx* __restrict c) {
  trace_call(0x80082538u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082538
  c->r[0]=c->lr; // 8008253C
  cmps(c,0,(int32_t)c->r[4],1024); // 80082540
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082548
  c->r[31]=0u+0xFFFFFFFFu; // 8008254C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80082550
  c->r[30]=c->r[5]|c->r[5]; // 80082554
  if (crb(c,2)) { goto L_80082654; } // 80082558
  if (!crb(c,0)) { goto L_800825B8; } // 8008255C
  cmps(c,0,(int32_t)c->r[4],8); // 80082560
  if (crb(c,2)) { goto L_80082634; } // 80082564
  if (!crb(c,0)) { goto L_80082594; } // 80082568
  cmps(c,0,(int32_t)c->r[4],3); // 8008256C
  if (crb(c,2)) { goto L_80082690; } // 80082570
  if (!crb(c,0)) { goto L_80082588; } // 80082574
  cmps(c,0,(int32_t)c->r[4],1); // 80082578
  if (crb(c,2)) { goto L_8008261C; } // 8008257C
  if (!crb(c,0)) { goto L_80082624; } // 80082580
  goto L_80082690; // 80082584
L_80082588:;
  cmps(c,0,(int32_t)c->r[4],5); // 80082588
  if (!crb(c,0)) { goto L_80082690; } // 8008258C
  goto L_8008262C; // 80082590
L_80082594:;
  cmps(c,0,(int32_t)c->r[4],256); // 80082594
  if (crb(c,2)) { goto L_80082644; } // 80082598
  if (!crb(c,0)) { goto L_800825AC; } // 8008259C
  cmps(c,0,(int32_t)c->r[4],16); // 800825A0
  if (crb(c,2)) { goto L_8008263C; } // 800825A4
  goto L_80082690; // 800825A8
L_800825AC:;
  cmps(c,0,(int32_t)c->r[4],512); // 800825AC
  if (crb(c,2)) { goto L_8008264C; } // 800825B0
  goto L_80082690; // 800825B4
L_800825B8:;
  cmps(c,0,(int32_t)c->r[4],16384); // 800825B8
  if (crb(c,2)) { goto L_8008267C; } // 800825BC
  if (!crb(c,0)) { goto L_800825E8; } // 800825C0
  cmps(c,0,(int32_t)c->r[4],4096); // 800825C4
  if (crb(c,2)) { goto L_80082664; } // 800825C8
  if (!crb(c,0)) { goto L_800825DC; } // 800825CC
  cmps(c,0,(int32_t)c->r[4],2048); // 800825D0
  if (crb(c,2)) { goto L_8008265C; } // 800825D4
  goto L_80082690; // 800825D8
L_800825DC:;
  cmps(c,0,(int32_t)c->r[4],8192); // 800825DC
  if (crb(c,2)) { goto L_80082674; } // 800825E0
  goto L_80082690; // 800825E4
L_800825E8:;
  c->r[5]=0u+0x00010000u; // 800825E8
  c->r[0]=c->r[5]+0xFFFF8100u; // 800825EC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800825F0
  if (crb(c,2)) { goto L_80082684; } // 800825F4
  if (!crb(c,0)) { goto L_8008260C; } // 800825F8
  c->r[0]=c->r[5]+0xFFFF8000u; // 800825FC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80082600
  if (crb(c,2)) { goto L_8008266C; } // 80082604
  goto L_80082690; // 80082608
L_8008260C:;
  c->r[0]=c->r[5]+0xFFFF8200u; // 8008260C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80082610
  if (crb(c,2)) { goto L_8008268C; } // 80082614
  goto L_80082690; // 80082618
L_8008261C:;
  c->r[31]=0u+0x00000000u; // 8008261C
  goto L_80082690; // 80082620
L_80082624:;
  c->r[31]=0u+0x00000001u; // 80082624
  goto L_80082690; // 80082628
L_8008262C:;
  c->r[31]=0u+0x00000002u; // 8008262C
  goto L_80082690; // 80082630
L_80082634:;
  c->r[31]=0u+0x00000003u; // 80082634
  goto L_80082690; // 80082638
L_8008263C:;
  c->r[31]=0u+0x00000004u; // 8008263C
  goto L_80082690; // 80082640
L_80082644:;
  c->r[31]=0u+0x00000005u; // 80082644
  goto L_80082690; // 80082648
L_8008264C:;
  c->r[31]=0u+0x00000006u; // 8008264C
  goto L_80082690; // 80082650
L_80082654:;
  c->r[31]=0u+0x00000007u; // 80082654
  goto L_80082690; // 80082658
L_8008265C:;
  c->r[31]=0u+0x00000008u; // 8008265C
  goto L_80082690; // 80082660
L_80082664:;
  c->r[31]=0u+0x00000009u; // 80082664
  goto L_80082690; // 80082668
L_8008266C:;
  c->r[31]=0u+0x0000000Au; // 8008266C
  goto L_80082690; // 80082670
L_80082674:;
  c->r[31]=0u+0x0000000Bu; // 80082674
  goto L_80082690; // 80082678
L_8008267C:;
  c->r[31]=0u+0x0000000Cu; // 8008267C
  goto L_80082690; // 80082680
L_80082684:;
  c->r[31]=0u+0x0000000Du; // 80082684
  goto L_80082690; // 80082688
L_8008268C:;
  c->r[31]=0u+0x0000000Eu; // 8008268C
L_80082690:;
  cmps(c,0,(int32_t)c->r[31],-1); // 80082690
  if (crb(c,2)) { goto L_800826C0; } // 80082694
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082698
  c->r[12]=R32(c->r[12]+0x00000058u); // 8008269C
  c->ctr=c->r[12]; // 800826A0
  if (true) { c->lr=0x800826A8u; dispatch(c,c->ctr); } // 800826A4
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)60); // 800826A8
  c->r[5]=0u+0x802B0000u; // 800826AC
  c->r[4]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800826B0
  c->r[5]=c->r[5]+0x00003710u; // 800826B4
  c->r[0]=c->r[5]+c->r[0]; // 800826B8
  W32(c->r[4]+c->r[0],c->r[3]); // 800826BC
L_800826C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800826C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800826C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800826C8
  c->lr=c->r[0]; // 800826CC
  c->r[1]=c->r[1]+0x00000010u; // 800826D0
  return; // 800826D4
}

// GetKeyHoldTime__7WiiCoreFUii
void f_800826D8(Ctx* __restrict c) {
  trace_call(0x800826D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800826D8
  c->r[0]=c->lr; // 800826DC
  cmps(c,0,(int32_t)c->r[4],1024); // 800826E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800826E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800826E8
  c->r[31]=0u+0xFFFFFFFFu; // 800826EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800826F0
  c->r[30]=c->r[5]|c->r[5]; // 800826F4
  if (crb(c,2)) { goto L_800827F4; } // 800826F8
  if (!crb(c,0)) { goto L_80082758; } // 800826FC
  cmps(c,0,(int32_t)c->r[4],8); // 80082700
  if (crb(c,2)) { goto L_800827D4; } // 80082704
  if (!crb(c,0)) { goto L_80082734; } // 80082708
  cmps(c,0,(int32_t)c->r[4],3); // 8008270C
  if (crb(c,2)) { goto L_80082830; } // 80082710
  if (!crb(c,0)) { goto L_80082728; } // 80082714
  cmps(c,0,(int32_t)c->r[4],1); // 80082718
  if (crb(c,2)) { goto L_800827BC; } // 8008271C
  if (!crb(c,0)) { goto L_800827C4; } // 80082720
  goto L_80082830; // 80082724
L_80082728:;
  cmps(c,0,(int32_t)c->r[4],5); // 80082728
  if (!crb(c,0)) { goto L_80082830; } // 8008272C
  goto L_800827CC; // 80082730
L_80082734:;
  cmps(c,0,(int32_t)c->r[4],256); // 80082734
  if (crb(c,2)) { goto L_800827E4; } // 80082738
  if (!crb(c,0)) { goto L_8008274C; } // 8008273C
  cmps(c,0,(int32_t)c->r[4],16); // 80082740
  if (crb(c,2)) { goto L_800827DC; } // 80082744
  goto L_80082830; // 80082748
L_8008274C:;
  cmps(c,0,(int32_t)c->r[4],512); // 8008274C
  if (crb(c,2)) { goto L_800827EC; } // 80082750
  goto L_80082830; // 80082754
L_80082758:;
  cmps(c,0,(int32_t)c->r[4],16384); // 80082758
  if (crb(c,2)) { goto L_8008281C; } // 8008275C
  if (!crb(c,0)) { goto L_80082788; } // 80082760
  cmps(c,0,(int32_t)c->r[4],4096); // 80082764
  if (crb(c,2)) { goto L_80082804; } // 80082768
  if (!crb(c,0)) { goto L_8008277C; } // 8008276C
  cmps(c,0,(int32_t)c->r[4],2048); // 80082770
  if (crb(c,2)) { goto L_800827FC; } // 80082774
  goto L_80082830; // 80082778
L_8008277C:;
  cmps(c,0,(int32_t)c->r[4],8192); // 8008277C
  if (crb(c,2)) { goto L_80082814; } // 80082780
  goto L_80082830; // 80082784
L_80082788:;
  c->r[5]=0u+0x00010000u; // 80082788
  c->r[0]=c->r[5]+0xFFFF8100u; // 8008278C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80082790
  if (crb(c,2)) { goto L_80082824; } // 80082794
  if (!crb(c,0)) { goto L_800827AC; } // 80082798
  c->r[0]=c->r[5]+0xFFFF8000u; // 8008279C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800827A0
  if (crb(c,2)) { goto L_8008280C; } // 800827A4
  goto L_80082830; // 800827A8
L_800827AC:;
  c->r[0]=c->r[5]+0xFFFF8200u; // 800827AC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800827B0
  if (crb(c,2)) { goto L_8008282C; } // 800827B4
  goto L_80082830; // 800827B8
L_800827BC:;
  c->r[31]=0u+0x00000000u; // 800827BC
  goto L_80082830; // 800827C0
L_800827C4:;
  c->r[31]=0u+0x00000001u; // 800827C4
  goto L_80082830; // 800827C8
L_800827CC:;
  c->r[31]=0u+0x00000002u; // 800827CC
  goto L_80082830; // 800827D0
L_800827D4:;
  c->r[31]=0u+0x00000003u; // 800827D4
  goto L_80082830; // 800827D8
L_800827DC:;
  c->r[31]=0u+0x00000004u; // 800827DC
  goto L_80082830; // 800827E0
L_800827E4:;
  c->r[31]=0u+0x00000005u; // 800827E4
  goto L_80082830; // 800827E8
L_800827EC:;
  c->r[31]=0u+0x00000006u; // 800827EC
  goto L_80082830; // 800827F0
L_800827F4:;
  c->r[31]=0u+0x00000007u; // 800827F4
  goto L_80082830; // 800827F8
L_800827FC:;
  c->r[31]=0u+0x00000008u; // 800827FC
  goto L_80082830; // 80082800
L_80082804:;
  c->r[31]=0u+0x00000009u; // 80082804
  goto L_80082830; // 80082808
L_8008280C:;
  c->r[31]=0u+0x0000000Au; // 8008280C
  goto L_80082830; // 80082810
L_80082814:;
  c->r[31]=0u+0x0000000Bu; // 80082814
  goto L_80082830; // 80082818
L_8008281C:;
  c->r[31]=0u+0x0000000Cu; // 8008281C
  goto L_80082830; // 80082820
L_80082824:;
  c->r[31]=0u+0x0000000Du; // 80082824
  goto L_80082830; // 80082828
L_8008282C:;
  c->r[31]=0u+0x0000000Eu; // 8008282C
L_80082830:;
  cmps(c,0,(int32_t)c->r[31],-1); // 80082830
  if (!crb(c,2)) { goto L_80082840; } // 80082834
  c->r[3]=0u+0xFFFFFFFFu; // 80082838
  goto L_8008286C; // 8008283C
L_80082840:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082840
  c->r[12]=R32(c->r[12]+0x00000058u); // 80082844
  c->ctr=c->r[12]; // 80082848
  if (true) { c->lr=0x80082850u; dispatch(c,c->ctr); } // 8008284C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)60); // 80082850
  c->r[5]=0u+0x802B0000u; // 80082854
  c->r[4]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80082858
  c->r[5]=c->r[5]+0x00003710u; // 8008285C
  c->r[0]=c->r[5]+c->r[0]; // 80082860
  c->r[0]=R32(c->r[4]+c->r[0]); // 80082864
  c->r[3]=c->r[3]-c->r[0]; // 80082868
L_8008286C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008286C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082870
  c->r[30]=R32(c->r[1]+0x00000008u); // 80082874
  c->lr=c->r[0]; // 80082878
  c->r[1]=c->r[1]+0x00000010u; // 8008287C
  return; // 80082880
}

// GetMousePosition__7WiiCoreFRiRii
void f_80082884(Ctx* __restrict c) {
  trace_call(0x80082884u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082884
  c->r[0]=c->lr; // 80082888
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008288C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80082890
  c->r[31]=c->r[6]|c->r[6]; // 80082894
  W32(c->r[1]+0x00000018u,c->r[30]); // 80082898
  c->r[30]=c->r[5]|c->r[5]; // 8008289C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800828A0
  c->r[29]=c->r[4]|c->r[4]; // 800828A4
  c->r[4]=c->r[31]|c->r[31]; // 800828A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800828AC
  c->r[12]=R32(c->r[12]+0x00000108u); // 800828B0
  c->ctr=c->r[12]; // 800828B4
  if (true) { c->lr=0x800828BCu; dispatch(c,c->ctr); } // 800828B8
  cmps(c,0,(int32_t)c->r[3],0); // 800828BC
  if (!crb(c,2)) { goto L_800828D4; } // 800828C0
  c->r[0]=0u+0xFFFFFFFFu; // 800828C4
  W32(c->r[29]+0x00000000u,c->r[0]); // 800828C8
  W32(c->r[30]+0x00000000u,c->r[0]); // 800828CC
  goto L_800828F0; // 800828D0
L_800828D4:;
  c->r[4]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800828D4
  c->r[3]=c->r[13]+0xFFFF8BF0u; // 800828D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[4]); // 800828DC
  c->r[3]=c->r[13]+0xFFFF8BF8u; // 800828E0
  W32(c->r[29]+0x00000000u,c->r[0]); // 800828E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[4]); // 800828E8
  W32(c->r[30]+0x00000000u,c->r[0]); // 800828EC
L_800828F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800828F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800828F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800828F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800828FC
  c->lr=c->r[0]; // 80082900
  c->r[1]=c->r[1]+0x00000020u; // 80082904
  return; // 80082908
}

// GetRawMousePosition__7WiiCoreFRfRfi
void f_8008290C(Ctx* __restrict c) {
  trace_call(0x8008290Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008290C
  c->r[0]=c->lr; // 80082910
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082914
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80082918
  c->r[31]=c->r[6]|c->r[6]; // 8008291C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80082920
  c->r[30]=c->r[5]|c->r[5]; // 80082924
  W32(c->r[1]+0x00000014u,c->r[29]); // 80082928
  c->r[29]=c->r[4]|c->r[4]; // 8008292C
  c->r[4]=c->r[31]|c->r[31]; // 80082930
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082934
  c->r[12]=R32(c->r[12]+0x00000108u); // 80082938
  c->ctr=c->r[12]; // 8008293C
  if (true) { c->lr=0x80082944u; dispatch(c,c->ctr); } // 80082940
  cmps(c,0,(int32_t)c->r[3],0); // 80082944
  if (!crb(c,2)) { goto L_8008295C; } // 80082948
  {uint32_t ea=c->r[2]+0xFFFF8C08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008294C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80082950
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 80082954
  goto L_8008297C; // 80082958
L_8008295C:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)3840); // 8008295C
  c->r[3]=0u+0x802B0000u; // 80082960
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082964
  c->r[3]=c->r[3]+c->r[0]; // 80082968
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008296C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80082970
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80082974
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 80082978
L_8008297C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008297C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082980
  c->r[30]=R32(c->r[1]+0x00000018u); // 80082984
  c->r[29]=R32(c->r[1]+0x00000014u); // 80082988
  c->lr=c->r[0]; // 8008298C
  c->r[1]=c->r[1]+0x00000020u; // 80082990
  return; // 80082994
}

// GetMouseRotation__7WiiCoreFi17MouseRotationAxis
void f_80082998(Ctx* __restrict c) {
  trace_call(0x80082998u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082998
  c->r[0]=c->lr; // 8008299C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800829A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800829A4
  c->r[31]=c->r[5]|c->r[5]; // 800829A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800829AC
  c->r[30]=c->r[4]|c->r[4]; // 800829B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800829B4
  c->r[12]=R32(c->r[12]+0x00000108u); // 800829B8
  c->ctr=c->r[12]; // 800829BC
  if (true) { c->lr=0x800829C4u; dispatch(c,c->ctr); } // 800829C0
  cmps(c,0,(int32_t)c->r[3],0); // 800829C4
  if (!crb(c,2)) { goto L_800829D4; } // 800829C8
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800829CC
  goto L_80082A4C; // 800829D0
L_800829D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800829D4
  if (crb(c,2)) { goto L_800829F0; } // 800829D8
  cmps(c,0,(int32_t)c->r[31],1); // 800829DC
  if (crb(c,2)) { goto L_80082A18; } // 800829E0
  cmps(c,0,(int32_t)c->r[31],2); // 800829E4
  if (crb(c,2)) { goto L_80082A20; } // 800829E8
  goto L_80082A48; // 800829EC
L_800829F0:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)3840); // 800829F0
  c->r[3]=0u+0x802B0000u; // 800829F4
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 800829F8
  c->r[3]=c->r[3]+c->r[0]; // 800829FC
  {uint32_t ea=c->r[3]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80082A00
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082A04
  c->lr=0x80082A0Cu; f_80203170(c); // 80082A08
  {uint32_t ea=c->r[2]+0xFFFF8C0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80082A0C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80082A10
  goto L_80082A4C; // 80082A14
L_80082A18:;
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082A18
  goto L_80082A4C; // 80082A1C
L_80082A20:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)3840); // 80082A20
  c->r[3]=0u+0x802B0000u; // 80082A24
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082A28
  c->r[3]=c->r[3]+c->r[0]; // 80082A2C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80082A30
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082A34
  c->lr=0x80082A3Cu; f_80203170(c); // 80082A38
  {uint32_t ea=c->r[2]+0xFFFF8C0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80082A3C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80082A40
  goto L_80082A4C; // 80082A44
L_80082A48:;
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082A48
L_80082A4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082A4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082A50
  c->r[30]=R32(c->r[1]+0x00000008u); // 80082A54
  c->lr=c->r[0]; // 80082A58
  c->r[1]=c->r[1]+0x00000010u; // 80082A5C
  return; // 80082A60
}

// GetControllerAcceleration__7WiiCoreFib
void f_80082A64(Ctx* __restrict c) {
  trace_call(0x80082A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082A64
  c->r[0]=c->lr; // 80082A68
  W32(c->r[1]+0x00000034u,c->r[0]); // 80082A6C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80082A70
  c->r[31]=c->r[6]|c->r[6]; // 80082A74
  W32(c->r[1]+0x00000028u,c->r[30]); // 80082A78
  c->r[30]=c->r[5]|c->r[5]; // 80082A7C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80082A80
  c->r[29]=c->r[3]|c->r[3]; // 80082A84
  c->r[3]=c->r[4]|c->r[4]; // 80082A88
  c->r[12]=R32(c->r[4]+0x00000000u); // 80082A8C
  c->r[4]=c->r[30]|c->r[30]; // 80082A90
  c->r[12]=R32(c->r[12]+0x00000108u); // 80082A94
  c->ctr=c->r[12]; // 80082A98
  if (true) { c->lr=0x80082AA0u; dispatch(c,c->ctr); } // 80082A9C
  cmps(c,0,(int32_t)c->r[3],0); // 80082AA0
  if (!crb(c,2)) { goto L_80082ABC; } // 80082AA4
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80082AA8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80082AAC
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 80082AB0
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 80082AB4
  goto L_80082B4C; // 80082AB8
L_80082ABC:;
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80082ABC
  cmps(c,0,(int32_t)c->r[31],0); // 80082AC0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80082AC4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80082AC8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80082ACC
  if (!crb(c,2)) { goto L_80082B00; } // 80082AD0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)3840); // 80082AD4
  c->r[3]=0u+0x802B0000u; // 80082AD8
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082ADC
  c->r[3]=c->r[3]+c->r[0]; // 80082AE0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80082AE4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082AE8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80082AEC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80082AF0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80082AF4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80082AF8
  goto L_80082B34; // 80082AFC
L_80082B00:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)3840); // 80082B00
  c->r[3]=0u+0x802B0000u; // 80082B04
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082B08
  c->r[3]=c->r[3]+c->r[0]; // 80082B0C
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 80082B10
  cmpu(c,0,c->r[0],0x00000001u); // 80082B14
  if (!crb(c,2)) { goto L_80082B34; } // 80082B18
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80082B1C
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80082B20
  {uint32_t ea=c->r[3]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80082B24
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80082B28
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80082B2C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80082B30
L_80082B34:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 80082B34
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80082B38
  c->r[0]=R32(c->r[1]+0x00000010u); // 80082B3C
  W32(c->r[29]+0x00000000u,c->r[4]); // 80082B40
  W32(c->r[29]+0x00000004u,c->r[3]); // 80082B44
  W32(c->r[29]+0x00000008u,c->r[0]); // 80082B48
L_80082B4C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80082B4C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80082B50
  c->r[30]=R32(c->r[1]+0x00000028u); // 80082B54
  c->r[29]=R32(c->r[1]+0x00000024u); // 80082B58
  c->lr=c->r[0]; // 80082B5C
  c->r[1]=c->r[1]+0x00000030u; // 80082B60
  return; // 80082B64
}

// GetControllerDistance__7WiiCoreFi
void f_80082B68(Ctx* __restrict c) {
  trace_call(0x80082B68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082B68
  c->r[0]=c->lr; // 80082B6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082B70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082B74
  c->r[31]=c->r[4]|c->r[4]; // 80082B78
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082B7C
  c->r[12]=R32(c->r[12]+0x00000108u); // 80082B80
  c->ctr=c->r[12]; // 80082B84
  if (true) { c->lr=0x80082B8Cu; dispatch(c,c->ctr); } // 80082B88
  cmps(c,0,(int32_t)c->r[3],0); // 80082B8C
  if (crb(c,2)) { goto L_80082BAC; } // 80082B90
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)3840); // 80082B94
  c->r[3]=0u+0x802B0000u; // 80082B98
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082B9C
  c->r[3]=c->r[3]+c->r[0]; // 80082BA0
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082BA4
  goto L_80082BB0; // 80082BA8
L_80082BAC:;
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082BAC
L_80082BB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082BB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082BB4
  c->lr=c->r[0]; // 80082BB8
  c->r[1]=c->r[1]+0x00000010u; // 80082BBC
  return; // 80082BC0
}

// GetControllerAccelerationMagnitude__7WiiCoreFib
void f_80082BC4(Ctx* __restrict c) {
  trace_call(0x80082BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082BC4
  c->r[0]=c->lr; // 80082BC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082BCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082BD0
  c->r[31]=c->r[5]|c->r[5]; // 80082BD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80082BD8
  c->r[30]=c->r[4]|c->r[4]; // 80082BDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082BE0
  c->r[12]=R32(c->r[12]+0x00000108u); // 80082BE4
  c->ctr=c->r[12]; // 80082BE8
  if (true) { c->lr=0x80082BF0u; dispatch(c,c->ctr); } // 80082BEC
  cmps(c,0,(int32_t)c->r[3],0); // 80082BF0
  if (!crb(c,2)) { goto L_80082C00; } // 80082BF4
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082BF8
  goto L_80082C48; // 80082BFC
L_80082C00:;
  cmps(c,0,(int32_t)c->r[31],0); // 80082C00
  if (!crb(c,2)) { goto L_80082C20; } // 80082C04
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)3840); // 80082C08
  c->r[3]=0u+0x802B0000u; // 80082C0C
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082C10
  c->r[3]=c->r[3]+c->r[0]; // 80082C14
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082C18
  goto L_80082C48; // 80082C1C
L_80082C20:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)3840); // 80082C20
  c->r[3]=0u+0x802B0000u; // 80082C24
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082C28
  c->r[3]=c->r[3]+c->r[0]; // 80082C2C
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 80082C30
  cmpu(c,0,c->r[0],0x00000001u); // 80082C34
  if (!crb(c,2)) { goto L_80082C44; } // 80082C38
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082C3C
  goto L_80082C48; // 80082C40
L_80082C44:;
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082C44
L_80082C48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082C4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80082C50
  c->lr=c->r[0]; // 80082C54
  c->r[1]=c->r[1]+0x00000010u; // 80082C58
  return; // 80082C5C
}

// GetControllerAccelerationSpeed__7WiiCoreFib
void f_80082C60(Ctx* __restrict c) {
  trace_call(0x80082C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082C60
  c->r[0]=c->lr; // 80082C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082C6C
  c->r[31]=c->r[5]|c->r[5]; // 80082C70
  W32(c->r[1]+0x00000008u,c->r[30]); // 80082C74
  c->r[30]=c->r[4]|c->r[4]; // 80082C78
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082C7C
  c->r[12]=R32(c->r[12]+0x00000108u); // 80082C80
  c->ctr=c->r[12]; // 80082C84
  if (true) { c->lr=0x80082C8Cu; dispatch(c,c->ctr); } // 80082C88
  cmps(c,0,(int32_t)c->r[3],0); // 80082C8C
  if (!crb(c,2)) { goto L_80082C9C; } // 80082C90
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082C94
  goto L_80082CE4; // 80082C98
L_80082C9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80082C9C
  if (!crb(c,2)) { goto L_80082CBC; } // 80082CA0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)3840); // 80082CA4
  c->r[3]=0u+0x802B0000u; // 80082CA8
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082CAC
  c->r[3]=c->r[3]+c->r[0]; // 80082CB0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80082CB4
  goto L_80082CE4; // 80082CB8
L_80082CBC:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)3840); // 80082CBC
  c->r[3]=0u+0x802B0000u; // 80082CC0
  c->r[3]=c->r[3]+0xFFFFFAB0u; // 80082CC4
  c->r[3]=c->r[3]+c->r[0]; // 80082CC8
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 80082CCC
  cmpu(c,0,c->r[0],0x00000001u); // 80082CD0
  if (!crb(c,2)) { goto L_80082CE0; } // 80082CD4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082CD8
  goto L_80082CE4; // 80082CDC
L_80082CE0:;
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082CE0
L_80082CE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082CE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082CE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80082CEC
  c->lr=c->r[0]; // 80082CF0
  c->r[1]=c->r[1]+0x00000010u; // 80082CF4
  return; // 80082CF8
}

// SetControllerMotor__7WiiCoreFib
void f_80082CFC(Ctx* __restrict c) {
  trace_call(0x80082CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082CFC
  c->r[0]=c->lr; // 80082D00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082D04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082D08
  c->r[31]=c->r[5]|c->r[5]; // 80082D0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80082D10
  c->r[30]=c->r[4]|c->r[4]; // 80082D14
  c->r[12]=R32(c->r[3]+0x00000000u); // 80082D18
  c->r[12]=R32(c->r[12]+0x00000108u); // 80082D1C
  c->ctr=c->r[12]; // 80082D20
  if (true) { c->lr=0x80082D28u; dispatch(c,c->ctr); } // 80082D24
  cmps(c,0,(int32_t)c->r[3],0); // 80082D28
  if (crb(c,2)) { goto L_80082D5C; } // 80082D2C
  cmpu(c,0,c->r[30],0x00000003u); // 80082D30
  if (crb(c,1)) { goto L_80082D5C; } // 80082D34
  cmps(c,0,(int32_t)c->r[31],0); // 80082D38
  if (crb(c,2)) { goto L_80082D50; } // 80082D3C
  c->r[3]=c->r[30]|c->r[30]; // 80082D40
  c->r[4]=0u+0x00000001u; // 80082D44
  c->lr=0x80082D4Cu; f_800FB510(c); // 80082D48
  goto L_80082D5C; // 80082D4C
L_80082D50:;
  c->r[3]=c->r[30]|c->r[30]; // 80082D50
  c->r[4]=0u+0x00000000u; // 80082D54
  c->lr=0x80082D5Cu; f_800FB510(c); // 80082D58
L_80082D5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082D5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082D60
  c->r[30]=R32(c->r[1]+0x00000008u); // 80082D64
  c->lr=c->r[0]; // 80082D68
  c->r[1]=c->r[1]+0x00000010u; // 80082D6C
  return; // 80082D70
}

// CalibrateBalanceBoard__7WiiCoreFv
void f_80082D74(Ctx* __restrict c) {
  trace_call(0x80082D74u);
  return; // 80082D74
}

// InitializeBalanceBoard__7WiiCoreFv
void f_80082D78(Ctx* __restrict c) {
  trace_call(0x80082D78u);
  return; // 80082D78
}

// GetTotalBalanceWeight__7WiiCoreFv
void f_80082D7C(Ctx* __restrict c) {
  trace_call(0x80082D7Cu);
  {uint32_t ea=c->r[2]+0xFFFF8C10u; c->f[1]=RF64(ea);} // 80082D7C
  return; // 80082D80
}

// GetBalanceWeights__7WiiCoreFRdRdRdRd
void f_80082D84(Ctx* __restrict c) {
  trace_call(0x80082D84u);
  return; // 80082D84
}

// IsBalanceBoardConnected__7WiiCoreFv
void f_80082D88(Ctx* __restrict c) {
  trace_call(0x80082D88u);
  c->r[3]=0u+0x00000000u; // 80082D88
  return; // 80082D8C
}

// GetBalanceBoardBatteryLevel__7WiiCoreFv
void f_80082D90(Ctx* __restrict c) {
  trace_call(0x80082D90u);
  c->r[3]=0u+0x00000000u; // 80082D90
  return; // 80082D94
}

// GetMotionPlusRotation__7WiiCoreFiP7Matrix3
void f_80082D98(Ctx* __restrict c) {
  trace_call(0x80082D98u);
  return; // 80082D98
}

// EnableMotionPlus__7WiiCoreFi
void f_80082D9C(Ctx* __restrict c) {
  trace_call(0x80082D9Cu);
  return; // 80082D9C
}

// DisableMotionPlus__7WiiCoreFi
void f_80082DA0(Ctx* __restrict c) {
  trace_call(0x80082DA0u);
  return; // 80082DA0
}

// GetMemFree__7WiiCoreFi
void f_80082DA4(Ctx* __restrict c) {
  trace_call(0x80082DA4u);
  cmps(c,0,(int32_t)c->r[4],0); // 80082DA4
  if (crb(c,2)) { goto L_80082DB8; } // 80082DA8
  cmps(c,0,(int32_t)c->r[4],1); // 80082DAC
  if (crb(c,2)) { goto L_80082DC0; } // 80082DB0
  goto L_80082DC8; // 80082DB4
L_80082DB8:;
  c->r[3]=R32(c->r[13]+0xFFFF8BA0u); // 80082DB8
  f_800EDC80(c); return; // 80082DBC
L_80082DC0:;
  c->r[3]=R32(c->r[13]+0xFFFF8BA4u); // 80082DC0
  f_800EDC80(c); return; // 80082DC4
L_80082DC8:;
  c->r[3]=0u+0x00000000u; // 80082DC8
  return; // 80082DCC
}

// GetMemTotal__7WiiCoreFi
void f_80082DD0(Ctx* __restrict c) {
  trace_call(0x80082DD0u);
  cmps(c,0,(int32_t)c->r[4],0); // 80082DD0
  if (crb(c,2)) { goto L_80082DE4; } // 80082DD4
  cmps(c,0,(int32_t)c->r[4],1); // 80082DD8
  if (crb(c,2)) { goto L_80082DEC; } // 80082DDC
  goto L_80082DF4; // 80082DE0
L_80082DE4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B98u); // 80082DE4
  return; // 80082DE8
L_80082DEC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B9Cu); // 80082DEC
  return; // 80082DF0
L_80082DF4:;
  c->r[3]=0u+0x00000000u; // 80082DF4
  return; // 80082DF8
}

// GetFrameTime__7WiiCoreFb
void f_80082DFC(Ctx* __restrict c) {
  trace_call(0x80082DFCu);
  cmps(c,0,(int32_t)c->r[4],0); // 80082DFC
  c->r[3]=R32(c->r[13]+0xFFFF8C08u); // 80082E00
  if (crb(c,2)) return; // 80082E04
  c->r[3]=R32(c->r[13]+0xFFFF8C0Cu); // 80082E08
  return; // 80082E0C
}

// ResetAllocCounter__7WiiCoreFv
void f_80082E10(Ctx* __restrict c) {
  trace_call(0x80082E10u);
  c->r[0]=0u+0x00000000u; // 80082E10
  W32(c->r[13]+0xFFFF8BACu,c->r[0]); // 80082E14
  return; // 80082E18
}

// GetAllocCounter__7WiiCoreFv
void f_80082E1C(Ctx* __restrict c) {
  trace_call(0x80082E1Cu);
  c->r[3]=R32(c->r[13]+0xFFFF8BACu); // 80082E1C
  return; // 80082E20
}

// ResetDeallocCounter__7WiiCoreFv
void f_80082E24(Ctx* __restrict c) {
  trace_call(0x80082E24u);
  c->r[0]=0u+0x00000000u; // 80082E24
  W32(c->r[13]+0xFFFF8BB0u,c->r[0]); // 80082E28
  return; // 80082E2C
}

// GetDeallocCounter__7WiiCoreFv
void f_80082E30(Ctx* __restrict c) {
  trace_call(0x80082E30u);
  c->r[3]=R32(c->r[13]+0xFFFF8BB0u); // 80082E30
  return; // 80082E34
}

// Terminate__7WiiCoreFPc
void f_80082E38(Ctx* __restrict c) {
  trace_call(0x80082E38u);
  c->r[3]=0u+0x80250000u; // 80082E38
  c->r[5]=c->r[4]|c->r[4]; // 80082E3C
  c->r[3]=c->r[3]+0x00006D68u; // 80082E40
  c->r[4]=0u+0x0000063Eu; // 80082E44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80082E48
  f_800ACC34(c); return; // 80082E4C
}

// GetErrorMessage__7WiiCoreFRiPcUi
void f_80082E50(Ctx* __restrict c) {
  trace_call(0x80082E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082E50
  c->r[0]=c->lr; // 80082E54
  cmps(c,0,(int32_t)c->r[6],0); // 80082E58
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082E5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80082E60
  c->r[31]=c->r[6]|c->r[6]; // 80082E64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80082E68
  c->r[30]=c->r[5]|c->r[5]; // 80082E6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80082E70
  c->r[29]=c->r[4]|c->r[4]; // 80082E74
  W32(c->r[1]+0x00000010u,c->r[28]); // 80082E78
  c->r[28]=c->r[3]|c->r[3]; // 80082E7C
  if (crb(c,2)) { goto L_80082EA4; } // 80082E80
  c->r[3]=c->r[30]|c->r[30]; // 80082E84
  c->r[5]=c->r[31]|c->r[31]; // 80082E88
  c->r[4]=0u+0x00000000u; // 80082E8C
  c->lr=0x80082E94u; f_80004688(c); // 80082E90
  c->r[3]=c->r[30]|c->r[30]; // 80082E94
  c->r[5]=c->r[31]|c->r[31]; // 80082E98
  c->r[4]=c->r[28]+0x00001145u; // 80082E9C
  c->lr=0x80082EA4u; f_800DBA68(c); // 80082EA0
L_80082EA4:;
  c->r[0]=R32(c->r[28]+0x00001548u); // 80082EA4
  W32(c->r[29]+0x00000000u,c->r[0]); // 80082EA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082EAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80082EB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80082EB4
  c->r[28]=R32(c->r[1]+0x00000010u); // 80082EB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082EBC
  c->lr=c->r[0]; // 80082EC0
  c->r[1]=c->r[1]+0x00000020u; // 80082EC4
  return; // 80082EC8
}

// ClearErrorMessage__7WiiCoreFv
void f_80082ECC(Ctx* __restrict c) {
  trace_call(0x80082ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082ECC
  c->r[0]=c->lr; // 80082ED0
  c->r[4]=0u+0x00000000u; // 80082ED4
  c->r[5]=0u+0x00000400u; // 80082ED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082EDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082EE0
  c->r[31]=0u+0x00000000u; // 80082EE4
  W32(c->r[3]+0x00001548u,c->r[31]); // 80082EE8
  c->r[3]=c->r[3]+0x00001145u; // 80082EEC
  c->lr=0x80082EF4u; f_80004688(c); // 80082EF0
  W8(c->r[13]+0xFFFF8BC8u,c->r[31]); // 80082EF4
  W8(c->r[13]+0xFFFF8BC0u,c->r[31]); // 80082EF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082EFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082F00
  c->lr=c->r[0]; // 80082F04
  c->r[1]=c->r[1]+0x00000010u; // 80082F08
  return; // 80082F0C
}

// RenderDiscErrorScreen__7WiiCoreFi
void f_80082F10(Ctx* __restrict c) {
  trace_call(0x80082F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082F10
  c->r[0]=c->lr; // 80082F14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082F18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082F1C
  c->r[31]=c->r[4]|c->r[4]; // 80082F20
  W32(c->r[1]+0x00000008u,c->r[30]); // 80082F24
  c->r[30]=c->r[3]|c->r[3]; // 80082F28
  c->lr=0x80082F30u; f_8008FFD8(c); // 80082F2C
  c->lr=0x80082F34u; f_8008E294(c); // 80082F30
  c->r[3]=c->r[30]|c->r[30]; // 80082F34
  c->r[4]=c->r[31]|c->r[31]; // 80082F38
  c->lr=0x80082F40u; f_80082F60(c); // 80082F3C
  c->lr=0x80082F44u; f_80090030(c); // 80082F40
  c->lr=0x80082F48u; f_80090388(c); // 80082F44
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082F48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082F4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80082F50
  c->lr=c->r[0]; // 80082F54
  c->r[1]=c->r[1]+0x00000010u; // 80082F58
  return; // 80082F5C
}

// PrintDiscError__7WiiCoreFi
void f_80082F60(Ctx* __restrict c) {
  trace_call(0x80082F60u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082F60
  c->r[0]=c->lr; // 80082F64
  W32(c->r[1]+0x00000234u,c->r[0]); // 80082F68
  c->r[11]=c->r[1]+0x00000210u; // 80082F6C
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[31]);} // 80082F70
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,31,ea,0,0);} // 80082F74
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[30]);} // 80082F78
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,30,ea,0,0);} // 80082F7C
  c->lr=0x80082F84u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80082F80
  cmps(c,0,(int32_t)c->r[4],-1); // 80082F84
  c->r[0]=0u+0x43300000u; // 80082F88
  W32(c->r[1]+0x000001E0u,c->r[0]); // 80082F8C
  c->r[29]=c->r[3]|c->r[3]; // 80082F90
  c->r[30]=c->r[4]|c->r[4]; // 80082F94
  W32(c->r[1]+0x000001E8u,c->r[0]); // 80082F98
  if (crb(c,2)) { goto L_800836D4; } // 80082F9C
  c->lr=0x80082FA4u; f_8008E040(c); // 80082FA0
  c->r[5]=R32(c->r[13]+0xFFFF8B80u); // 80082FA4
  c->r[3]=c->r[1]+0x000000A0u; // 80082FA8
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80082FAC
  c->r[4]=R16(c->r[5]+0x00000006u); // 80082FB0
  c->r[0]=R16(c->r[5]+0x00000004u); // 80082FB4
  c->f[3]=c->f[1]; // 80082FB8
  W32(c->r[1]+0x000001E4u,c->r[4]); // 80082FBC
  c->f[5]=c->f[1]; // 80082FC0
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[4]=RF64(ea);} // 80082FC4
  W32(c->r[1]+0x000001ECu,c->r[0]); // 80082FC8
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[2]=RF64(ea);} // 80082FCC
  {uint32_t ea=c->r[1]+0x000001E8u; c->f[0]=RF64(ea);} // 80082FD0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 80082FD4
  {uint32_t ea=c->r[2]+0xFFFF8C1Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80082FD8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 80082FDC
  c->lr=0x80082FE4u; f_800B8BB0(c); // 80082FE0
  c->r[3]=c->r[1]+0x000000A0u; // 80082FE4
  c->r[4]=0u+0x00000001u; // 80082FE8
  c->lr=0x80082FF0u; f_800D3620(c); // 80082FEC
  c->r[3]=c->r[1]+0x00000070u; // 80082FF0
  c->lr=0x80082FF8u; f_800B7DE0(c); // 80082FF4
  c->r[3]=c->r[1]+0x00000070u; // 80082FF8
  c->r[4]=0u+0x00000000u; // 80082FFC
  c->lr=0x80083004u; f_800D3710(c); // 80083000
  c->r[3]=0u+0x00000000u; // 80083004
  c->lr=0x8008300Cu; f_800D3818(c); // 80083008
  c->r[3]=0u+0x00000001u; // 8008300C
  c->r[4]=0u+0x00000007u; // 80083010
  c->r[5]=0u+0x00000001u; // 80083014
  c->lr=0x8008301Cu; f_800D31D4(c); // 80083018
  c->r[3]=0u+0x00000000u; // 8008301C
  c->lr=0x80083024u; f_800D11EC(c); // 80083020
  c->r[3]=0u+0x00000001u; // 80083024
  c->lr=0x8008302Cu; f_800D2C58(c); // 80083028
  c->r[3]=0u+0x00000000u; // 8008302C
  c->r[4]=0u+0x00000003u; // 80083030
  c->lr=0x80083038u; f_800D25FC(c); // 80083034
  c->r[3]=0u+0x00000000u; // 80083038
  c->r[4]=0u+0x00000000u; // 8008303C
  c->r[5]=0u+0x00000000u; // 80083040
  c->r[6]=0u+0x000000FFu; // 80083044
  c->lr=0x8008304Cu; f_800D2AFC(c); // 80083048
  c->r[3]=0u+0x00000001u; // 8008304C
  c->r[4]=0u+0x00000001u; // 80083050
  c->r[5]=0u+0x00000001u; // 80083054
  c->r[6]=0u+0x00000000u; // 80083058
  c->lr=0x80083060u; f_800D312C(c); // 8008305C
  c->lr=0x80083064u; f_800CEB28(c); // 80083060
  c->r[3]=0u+0x00000009u; // 80083064
  c->r[4]=0u+0x00000001u; // 80083068
  c->lr=0x80083070u; f_800CE534(c); // 8008306C
  c->r[3]=0u+0x0000000Du; // 80083070
  c->r[4]=0u+0x00000001u; // 80083074
  c->lr=0x8008307Cu; f_800CE534(c); // 80083078
  c->r[3]=0u+0x00000000u; // 8008307C
  c->r[4]=0u+0x00000009u; // 80083080
  c->r[5]=0u+0x00000001u; // 80083084
  c->r[6]=0u+0x00000003u; // 80083088
  c->r[7]=0u+0x00000000u; // 8008308C
  c->lr=0x80083094u; f_800CEB5C(c); // 80083090
  c->r[3]=0u+0x00000000u; // 80083094
  c->r[4]=0u+0x0000000Du; // 80083098
  c->r[5]=0u+0x00000001u; // 8008309C
  c->r[6]=0u+0x00000003u; // 800830A0
  c->r[7]=0u+0x00000000u; // 800830A4
  c->lr=0x800830ACu; f_800CEB5C(c); // 800830A8
  c->lr=0x800830B0u; f_800F643C(c); // 800830AC
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 800830B0
  c->r[31]=c->r[3]|c->r[3]; // 800830B4
  cmpu(c,0,c->r[0],0x00000001u); // 800830B8
  if (!crb(c,1)) { goto L_800830DC; } // 800830BC
  cmps(c,0,(int32_t)c->r[30],4); // 800830C0
  if (crb(c,2)) { goto L_800831BC; } // 800830C4
  cmps(c,0,(int32_t)c->r[30],11); // 800830C8
  if (crb(c,2)) { goto L_800832B4; } // 800830CC
  cmps(c,0,(int32_t)c->r[30],6); // 800830D0
  if (crb(c,2)) { goto L_80083394; } // 800830D4
  goto L_80083488; // 800830D8
L_800830DC:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800830DC
  cmps(c,0,(int32_t)c->r[0],1); // 800830E0
  if (crb(c,2)) { goto L_80083114; } // 800830E4
  cmps(c,0,(int32_t)c->r[0],3); // 800830E8
  if (crb(c,2)) { goto L_80083130; } // 800830EC
  cmps(c,0,(int32_t)c->r[0],4); // 800830F0
  if (crb(c,2)) { goto L_8008314C; } // 800830F4
  cmps(c,0,(int32_t)c->r[0],2); // 800830F8
  if (crb(c,2)) { goto L_80083168; } // 800830FC
  cmps(c,0,(int32_t)c->r[0],5); // 80083100
  if (crb(c,2)) { goto L_80083184; } // 80083104
  cmps(c,0,(int32_t)c->r[0],6); // 80083108
  if (crb(c,2)) { goto L_800831A0; } // 8008310C
  goto L_80083488; // 80083110
L_80083114:;
  c->r[4]=0u+0x80250000u; // 80083114
  c->r[3]=c->r[1]+0x000000E0u; // 80083118
  c->r[4]=c->r[4]+0x00006D68u; // 8008311C
  c->r[4]=c->r[4]+0x0000155Cu; // 80083120
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083124
  c->lr=0x8008312Cu; f_800DA3C8(c); // 80083128
  goto L_80083488; // 8008312C
L_80083130:;
  c->r[4]=0u+0x80250000u; // 80083130
  c->r[3]=c->r[1]+0x000000E0u; // 80083134
  c->r[4]=c->r[4]+0x00006D68u; // 80083138
  c->r[4]=c->r[4]+0x00001567u; // 8008313C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083140
  c->lr=0x80083148u; f_800DA3C8(c); // 80083144
  goto L_80083488; // 80083148
L_8008314C:;
  c->r[4]=0u+0x80250000u; // 8008314C
  c->r[3]=c->r[1]+0x000000E0u; // 80083150
  c->r[4]=c->r[4]+0x00006D68u; // 80083154
  c->r[4]=c->r[4]+0x00001575u; // 80083158
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008315C
  c->lr=0x80083164u; f_800DA3C8(c); // 80083160
  goto L_80083488; // 80083164
L_80083168:;
  c->r[4]=0u+0x80250000u; // 80083168
  c->r[3]=c->r[1]+0x000000E0u; // 8008316C
  c->r[4]=c->r[4]+0x00006D68u; // 80083170
  c->r[4]=c->r[4]+0x00001581u; // 80083174
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083178
  c->lr=0x80083180u; f_800DA3C8(c); // 8008317C
  goto L_80083488; // 80083180
L_80083184:;
  c->r[4]=0u+0x80250000u; // 80083184
  c->r[3]=c->r[1]+0x000000E0u; // 80083188
  c->r[4]=c->r[4]+0x00006D68u; // 8008318C
  c->r[4]=c->r[4]+0x0000158Au; // 80083190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083194
  c->lr=0x8008319Cu; f_800DA3C8(c); // 80083198
  goto L_80083488; // 8008319C
L_800831A0:;
  c->r[4]=0u+0x80250000u; // 800831A0
  c->r[3]=c->r[1]+0x000000E0u; // 800831A4
  c->r[4]=c->r[4]+0x00006D68u; // 800831A8
  c->r[4]=c->r[4]+0x00001581u; // 800831AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800831B0
  c->lr=0x800831B8u; f_800DA3C8(c); // 800831B4
  goto L_80083488; // 800831B8
L_800831BC:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800831BC
  cmps(c,0,(int32_t)c->r[0],1); // 800831C0
  if (crb(c,2)) { goto L_800831F4; } // 800831C4
  cmps(c,0,(int32_t)c->r[0],3); // 800831C8
  if (crb(c,2)) { goto L_80083214; } // 800831CC
  cmps(c,0,(int32_t)c->r[0],4); // 800831D0
  if (crb(c,2)) { goto L_80083234; } // 800831D4
  cmps(c,0,(int32_t)c->r[0],2); // 800831D8
  if (crb(c,2)) { goto L_80083254; } // 800831DC
  cmps(c,0,(int32_t)c->r[0],5); // 800831E0
  if (crb(c,2)) { goto L_80083274; } // 800831E4
  cmps(c,0,(int32_t)c->r[0],6); // 800831E8
  if (crb(c,2)) { goto L_80083294; } // 800831EC
  goto L_80083488; // 800831F0
L_800831F4:;
  c->r[4]=0u+0x80250000u; // 800831F4
  c->r[3]=c->r[1]+0x000000E0u; // 800831F8
  c->r[4]=c->r[4]+0x00006D68u; // 800831FC
  c->r[5]=c->r[29]+0x00001021u; // 80083200
  c->r[4]=c->r[4]+0x00001599u; // 80083204
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083208
  c->lr=0x80083210u; f_800DA3C8(c); // 8008320C
  goto L_80083488; // 80083210
L_80083214:;
  c->r[4]=0u+0x80250000u; // 80083214
  c->r[3]=c->r[1]+0x000000E0u; // 80083218
  c->r[4]=c->r[4]+0x00006D68u; // 8008321C
  c->r[5]=c->r[29]+0x00001021u; // 80083220
  c->r[4]=c->r[4]+0x000015B4u; // 80083224
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083228
  c->lr=0x80083230u; f_800DA3C8(c); // 8008322C
  goto L_80083488; // 80083230
L_80083234:;
  c->r[4]=0u+0x80250000u; // 80083234
  c->r[3]=c->r[1]+0x000000E0u; // 80083238
  c->r[4]=c->r[4]+0x00006D68u; // 8008323C
  c->r[5]=c->r[29]+0x00001021u; // 80083240
  c->r[4]=c->r[4]+0x000015D3u; // 80083244
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083248
  c->lr=0x80083250u; f_800DA3C8(c); // 8008324C
  goto L_80083488; // 80083250
L_80083254:;
  c->r[4]=0u+0x80250000u; // 80083254
  c->r[3]=c->r[1]+0x000000E0u; // 80083258
  c->r[4]=c->r[4]+0x00006D68u; // 8008325C
  c->r[5]=c->r[29]+0x00001021u; // 80083260
  c->r[4]=c->r[4]+0x000015F3u; // 80083264
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083268
  c->lr=0x80083270u; f_800DA3C8(c); // 8008326C
  goto L_80083488; // 80083270
L_80083274:;
  c->r[4]=0u+0x80250000u; // 80083274
  c->r[3]=c->r[1]+0x000000E0u; // 80083278
  c->r[4]=c->r[4]+0x00006D68u; // 8008327C
  c->r[5]=c->r[29]+0x00001021u; // 80083280
  c->r[4]=c->r[4]+0x00001612u; // 80083284
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083288
  c->lr=0x80083290u; f_800DA3C8(c); // 8008328C
  goto L_80083488; // 80083290
L_80083294:;
  c->r[4]=0u+0x80250000u; // 80083294
  c->r[3]=c->r[1]+0x000000E0u; // 80083298
  c->r[4]=c->r[4]+0x00006D68u; // 8008329C
  c->r[5]=c->r[29]+0x00001021u; // 800832A0
  c->r[4]=c->r[4]+0x0000162Cu; // 800832A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800832A8
  c->lr=0x800832B0u; f_800DA3C8(c); // 800832AC
  goto L_80083488; // 800832B0
L_800832B4:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800832B4
  cmps(c,0,(int32_t)c->r[0],1); // 800832B8
  if (crb(c,2)) { goto L_800832EC; } // 800832BC
  cmps(c,0,(int32_t)c->r[0],3); // 800832C0
  if (crb(c,2)) { goto L_80083308; } // 800832C4
  cmps(c,0,(int32_t)c->r[0],4); // 800832C8
  if (crb(c,2)) { goto L_80083324; } // 800832CC
  cmps(c,0,(int32_t)c->r[0],2); // 800832D0
  if (crb(c,2)) { goto L_80083340; } // 800832D4
  cmps(c,0,(int32_t)c->r[0],5); // 800832D8
  if (crb(c,2)) { goto L_8008335C; } // 800832DC
  cmps(c,0,(int32_t)c->r[0],6); // 800832E0
  if (crb(c,2)) { goto L_80083378; } // 800832E4
  goto L_80083488; // 800832E8
L_800832EC:;
  c->r[4]=0u+0x80250000u; // 800832EC
  c->r[3]=c->r[1]+0x000000E0u; // 800832F0
  c->r[4]=c->r[4]+0x00006D68u; // 800832F4
  c->r[4]=c->r[4]+0x00001644u; // 800832F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800832FC
  c->lr=0x80083304u; f_800DA3C8(c); // 80083300
  goto L_80083488; // 80083304
L_80083308:;
  c->r[4]=0u+0x80250000u; // 80083308
  c->r[3]=c->r[1]+0x000000E0u; // 8008330C
  c->r[4]=c->r[4]+0x00006D68u; // 80083310
  c->r[4]=c->r[4]+0x00001690u; // 80083314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083318
  c->lr=0x80083320u; f_800DA3C8(c); // 8008331C
  goto L_80083488; // 80083320
L_80083324:;
  c->r[4]=0u+0x80250000u; // 80083324
  c->r[3]=c->r[1]+0x000000E0u; // 80083328
  c->r[4]=c->r[4]+0x00006D68u; // 8008332C
  c->r[4]=c->r[4]+0x000016F5u; // 80083330
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083334
  c->lr=0x8008333Cu; f_800DA3C8(c); // 80083338
  goto L_80083488; // 8008333C
L_80083340:;
  c->r[4]=0u+0x80250000u; // 80083340
  c->r[3]=c->r[1]+0x000000E0u; // 80083344
  c->r[4]=c->r[4]+0x00006D68u; // 80083348
  c->r[4]=c->r[4]+0x00001762u; // 8008334C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083350
  c->lr=0x80083358u; f_800DA3C8(c); // 80083354
  goto L_80083488; // 80083358
L_8008335C:;
  c->r[4]=0u+0x80250000u; // 8008335C
  c->r[3]=c->r[1]+0x000000E0u; // 80083360
  c->r[4]=c->r[4]+0x00006D68u; // 80083364
  c->r[4]=c->r[4]+0x000017D6u; // 80083368
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008336C
  c->lr=0x80083374u; f_800DA3C8(c); // 80083370
  goto L_80083488; // 80083374
L_80083378:;
  c->r[4]=0u+0x80250000u; // 80083378
  c->r[3]=c->r[1]+0x000000E0u; // 8008337C
  c->r[4]=c->r[4]+0x00006D68u; // 80083380
  c->r[4]=c->r[4]+0x00001844u; // 80083384
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083388
  c->lr=0x80083390u; f_800DA3C8(c); // 8008338C
  goto L_80083488; // 80083390
L_80083394:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80083394
  cmps(c,0,(int32_t)c->r[0],1); // 80083398
  if (crb(c,2)) { goto L_800833CC; } // 8008339C
  cmps(c,0,(int32_t)c->r[0],3); // 800833A0
  if (crb(c,2)) { goto L_800833EC; } // 800833A4
  cmps(c,0,(int32_t)c->r[0],4); // 800833A8
  if (crb(c,2)) { goto L_8008340C; } // 800833AC
  cmps(c,0,(int32_t)c->r[0],2); // 800833B0
  if (crb(c,2)) { goto L_8008342C; } // 800833B4
  cmps(c,0,(int32_t)c->r[0],5); // 800833B8
  if (crb(c,2)) { goto L_8008344C; } // 800833BC
  cmps(c,0,(int32_t)c->r[0],6); // 800833C0
  if (crb(c,2)) { goto L_8008346C; } // 800833C4
  goto L_80083488; // 800833C8
L_800833CC:;
  c->r[4]=0u+0x80250000u; // 800833CC
  c->r[3]=c->r[1]+0x000000E0u; // 800833D0
  c->r[4]=c->r[4]+0x00006D68u; // 800833D4
  c->r[5]=c->r[29]+0x00001021u; // 800833D8
  c->r[4]=c->r[4]+0x00001599u; // 800833DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800833E0
  c->lr=0x800833E8u; f_800DA3C8(c); // 800833E4
  goto L_80083488; // 800833E8
L_800833EC:;
  c->r[4]=0u+0x80250000u; // 800833EC
  c->r[3]=c->r[1]+0x000000E0u; // 800833F0
  c->r[4]=c->r[4]+0x00006D68u; // 800833F4
  c->r[5]=c->r[29]+0x00001021u; // 800833F8
  c->r[4]=c->r[4]+0x000015B4u; // 800833FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083400
  c->lr=0x80083408u; f_800DA3C8(c); // 80083404
  goto L_80083488; // 80083408
L_8008340C:;
  c->r[4]=0u+0x80250000u; // 8008340C
  c->r[3]=c->r[1]+0x000000E0u; // 80083410
  c->r[4]=c->r[4]+0x00006D68u; // 80083414
  c->r[5]=c->r[29]+0x00001021u; // 80083418
  c->r[4]=c->r[4]+0x000015D3u; // 8008341C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083420
  c->lr=0x80083428u; f_800DA3C8(c); // 80083424
  goto L_80083488; // 80083428
L_8008342C:;
  c->r[4]=0u+0x80250000u; // 8008342C
  c->r[3]=c->r[1]+0x000000E0u; // 80083430
  c->r[4]=c->r[4]+0x00006D68u; // 80083434
  c->r[5]=c->r[29]+0x00001021u; // 80083438
  c->r[4]=c->r[4]+0x000015F3u; // 8008343C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083440
  c->lr=0x80083448u; f_800DA3C8(c); // 80083444
  goto L_80083488; // 80083448
L_8008344C:;
  c->r[4]=0u+0x80250000u; // 8008344C
  c->r[3]=c->r[1]+0x000000E0u; // 80083450
  c->r[4]=c->r[4]+0x00006D68u; // 80083454
  c->r[5]=c->r[29]+0x00001021u; // 80083458
  c->r[4]=c->r[4]+0x00001612u; // 8008345C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083460
  c->lr=0x80083468u; f_800DA3C8(c); // 80083464
  goto L_80083488; // 80083468
L_8008346C:;
  c->r[4]=0u+0x80250000u; // 8008346C
  c->r[3]=c->r[1]+0x000000E0u; // 80083470
  c->r[4]=c->r[4]+0x00006D68u; // 80083474
  c->r[5]=c->r[29]+0x00001021u; // 80083478
  c->r[4]=c->r[4]+0x00001893u; // 8008347C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083480
  c->lr=0x80083488u; f_800DA3C8(c); // 80083484
L_80083488:;
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[30]=RF64(ea);} // 80083488
  c->r[28]=c->r[1]+0x000000E0u; // 8008348C
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[31]=c->ps1[31]=RF32(ea);} // 80083490
  c->r[29]=0u+0x00000028u; // 80083494
  c->r[27]=0u+0x00000000u; // 80083498
  goto L_800835C4; // 8008349C
L_800834A0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800834A0
  cmps(c,0,(int32_t)c->r[0],10); // 800834A4
  if (!crb(c,2)) { goto L_800834C4; } // 800834A8
  c->r[3]=R32(c->r[13]+0xFFFF8B70u); // 800834AC
  c->r[27]=0u+0x00000000u; // 800834B0
  c->r[28]=c->r[28]+0x00000001u; // 800834B4
  c->r[0]=R16(c->r[3]+0x00000012u); // 800834B8
  c->r[29]=c->r[29]+c->r[0]; // 800834BC
  goto L_800835C4; // 800834C0
L_800834C4:;
  c->r[3]=c->r[28]|c->r[28]; // 800834C4
  c->r[4]=c->r[1]+0x00000008u; // 800834C8
  c->r[5]=c->r[1]+0x0000000Cu; // 800834CC
  c->r[6]=c->r[1]+0x00000010u; // 800834D0
  c->r[7]=c->r[1]+0x00000014u; // 800834D4
  c->lr=0x800834DCu; f_800B072C(c); // 800834D8
  c->r[7]=R32(c->r[13]+0xFFFF8B70u); // 800834DC
  c->r[28]=c->r[3]|c->r[3]; // 800834E0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800834E4
  c->r[3]=c->r[1]+0x00000020u; // 800834E8
  c->r[5]=R16(c->r[7]+0x0000001Eu); // 800834EC
  c->r[8]=0u+0x00000000u; // 800834F0
  c->r[6]=R16(c->r[7]+0x00000020u); // 800834F4
  c->r[9]=0u+0x00000000u; // 800834F8
  c->r[7]=R16(c->r[7]+0x00000018u); // 800834FC
  c->r[10]=0u+0x00000000u; // 80083500
  c->lr=0x80083508u; f_800D1374(c); // 80083504
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80083508
  c->r[3]=c->r[1]+0x00000020u; // 8008350C
  c->r[4]=0u+0x00000001u; // 80083510
  c->r[5]=0u+0x00000001u; // 80083514
  c->f[2]=c->f[1]; // 80083518
  c->r[6]=0u+0x00000000u; // 8008351C
  c->f[3]=c->f[1]; // 80083520
  c->r[7]=0u+0x00000000u; // 80083524
  c->r[8]=0u+0x00000000u; // 80083528
  c->lr=0x80083530u; f_800D15C8(c); // 8008352C
  c->r[3]=c->r[1]+0x00000020u; // 80083530
  c->r[4]=0u+0x00000000u; // 80083534
  c->lr=0x8008353Cu; f_800D1994(c); // 80083538
  c->r[5]=R32(c->r[13]+0xFFFF8B70u); // 8008353C
  c->f[3]=c->f[31]; // 80083540
  c->r[3]=c->r[1]+0x00000040u; // 80083544
  c->r[4]=R16(c->r[5]+0x0000001Eu); // 80083548
  c->r[0]=R16(c->r[5]+0x00000020u); // 8008354C
  W32(c->r[1]+0x000001E4u,c->r[4]); // 80083550
  W32(c->r[1]+0x000001ECu,c->r[0]); // 80083554
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[1]=RF64(ea);} // 80083558
  {uint32_t ea=c->r[1]+0x000001E8u; c->f[0]=RF64(ea);} // 8008355C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 80083560
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80083564
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[1]); // 80083568
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[0]); // 8008356C
  c->lr=0x80083574u; f_800B84C4(c); // 80083570
  c->r[3]=c->r[1]+0x00000040u; // 80083574
  c->r[4]=0u+0x0000001Eu; // 80083578
  c->r[5]=0u+0x00000001u; // 8008357C
  c->lr=0x80083584u; f_800D3838(c); // 80083580
  c->r[3]=0u+0x00000001u; // 80083584
  c->lr=0x8008358Cu; f_800CF424(c); // 80083588
  c->r[3]=0u+0x00000000u; // 8008358C
  c->r[4]=0u+0x00000001u; // 80083590
  c->r[5]=0u+0x00000004u; // 80083594
  c->r[6]=0u+0x0000001Eu; // 80083598
  c->r[7]=0u+0x00000000u; // 8008359C
  c->r[8]=0u+0x0000007Du; // 800835A0
  c->lr=0x800835A8u; f_800CF1FC(c); // 800835A4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800835A8
  c->r[4]=c->r[29]|c->r[29]; // 800835AC
  c->r[6]=R32(c->r[1]+0x00000010u); // 800835B0
  c->r[3]=c->r[27]+0x00000032u; // 800835B4
  c->lr=0x800835BCu; f_80080690(c); // 800835B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800835BC
  c->r[27]=c->r[27]+c->r[0]; // 800835C0
L_800835C4:;
  c->r[3]=R8(c->r[28]+0x00000000u); // 800835C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800835C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800834A0; } // 800835CC
  cmps(c,0,(int32_t)c->r[30],-1); // 800835D0
  if (!crb(c,2)) { goto L_800836D4; } // 800835D4
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800835D8
  cmps(c,0,(int32_t)c->r[0],1); // 800835DC
  if (crb(c,2)) { goto L_80083610; } // 800835E0
  cmps(c,0,(int32_t)c->r[0],3); // 800835E4
  if (crb(c,2)) { goto L_8008362C; } // 800835E8
  cmps(c,0,(int32_t)c->r[0],4); // 800835EC
  if (crb(c,2)) { goto L_80083648; } // 800835F0
  cmps(c,0,(int32_t)c->r[0],2); // 800835F4
  if (crb(c,2)) { goto L_80083664; } // 800835F8
  cmps(c,0,(int32_t)c->r[0],5); // 800835FC
  if (crb(c,2)) { goto L_80083680; } // 80083600
  cmps(c,0,(int32_t)c->r[0],6); // 80083604
  if (crb(c,2)) { goto L_8008369C; } // 80083608
  goto L_800836B4; // 8008360C
L_80083610:;
  c->r[4]=0u+0x80250000u; // 80083610
  c->r[3]=c->r[1]+0x000000E0u; // 80083614
  c->r[4]=c->r[4]+0x00006D68u; // 80083618
  c->r[4]=c->r[4]+0x000018ABu; // 8008361C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083620
  c->lr=0x80083628u; f_800DA3C8(c); // 80083624
  goto L_800836B4; // 80083628
L_8008362C:;
  c->r[4]=0u+0x80250000u; // 8008362C
  c->r[3]=c->r[1]+0x000000E0u; // 80083630
  c->r[4]=c->r[4]+0x00006D68u; // 80083634
  c->r[4]=c->r[4]+0x00001958u; // 80083638
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008363C
  c->lr=0x80083644u; f_800DA3C8(c); // 80083640
  goto L_800836B4; // 80083644
L_80083648:;
  c->r[4]=0u+0x80250000u; // 80083648
  c->r[3]=c->r[1]+0x000000E0u; // 8008364C
  c->r[4]=c->r[4]+0x00006D68u; // 80083650
  c->r[4]=c->r[4]+0x000019FAu; // 80083654
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083658
  c->lr=0x80083660u; f_800DA3C8(c); // 8008365C
  goto L_800836B4; // 80083660
L_80083664:;
  c->r[4]=0u+0x80250000u; // 80083664
  c->r[3]=c->r[1]+0x000000E0u; // 80083668
  c->r[4]=c->r[4]+0x00006D68u; // 8008366C
  c->r[4]=c->r[4]+0x00001AA3u; // 80083670
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083674
  c->lr=0x8008367Cu; f_800DA3C8(c); // 80083678
  goto L_800836B4; // 8008367C
L_80083680:;
  c->r[4]=0u+0x80250000u; // 80083680
  c->r[3]=c->r[1]+0x000000E0u; // 80083684
  c->r[4]=c->r[4]+0x00006D68u; // 80083688
  c->r[4]=c->r[4]+0x00001B59u; // 8008368C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083690
  c->lr=0x80083698u; f_800DA3C8(c); // 80083694
  goto L_800836B4; // 80083698
L_8008369C:;
  c->r[4]=0u+0x80250000u; // 8008369C
  c->r[3]=c->r[1]+0x000000E0u; // 800836A0
  c->r[4]=c->r[4]+0x00006D68u; // 800836A4
  c->r[4]=c->r[4]+0x00001C03u; // 800836A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800836AC
  c->lr=0x800836B4u; f_800DA3C8(c); // 800836B0
L_800836B4:;
  c->r[0]=R32(c->r[2]+0xFFFF8C18u); // 800836B4
  c->r[6]=0u+0x00000000u; // 800836B8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800836BC
  c->r[3]=c->r[1]+0x0000001Cu; // 800836C0
  c->r[4]=c->r[1]+0x00000018u; // 800836C4
  c->r[5]=c->r[1]+0x000000E0u; // 800836C8
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800836CC
  c->lr=0x800836D4u; f_800AED9C(c); // 800836D0
L_800836D4:;
  c->r[11]=c->r[1]+0x00000210u; // 800836D4
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,31,ea,0,0);} // 800836D8
  {uint32_t ea=c->r[1]+0x00000220u; c->f[31]=RF64(ea);} // 800836DC
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,30,ea,0,0);} // 800836E0
  {uint32_t ea=c->r[1]+0x00000210u; c->f[30]=RF64(ea);} // 800836E4
  c->lr=0x800836ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800836E8
  c->r[0]=R32(c->r[1]+0x00000234u); // 800836EC
  c->lr=c->r[0]; // 800836F0
  c->r[1]=c->r[1]+0x00000230u; // 800836F4
  return; // 800836F8
}

// EnableController__7WiiCoreFib
void f_800836FC(Ctx* __restrict c) {
  trace_call(0x800836FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800836FC
  c->r[0]=c->lr; // 80083700
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80083708
  c->r[31]=c->r[5]|c->r[5]; // 8008370C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80083710
  c->r[30]=c->r[4]|c->r[4]; // 80083714
  c->lr=0x8008371Cu; f_80073B18(c); // 80083718
  cmps(c,0,(int32_t)c->r[31],0); // 8008371C
  if (!crb(c,2)) { goto L_80083738; } // 80083720
  c->r[3]=c->r[30]|c->r[30]; // 80083724
  c->lr=0x8008372Cu; f_800FAEA0(c); // 80083728
  c->r[3]=c->r[13]+0xFFFF8C00u; // 8008372C
  c->r[0]=0u+0x00000000u; // 80083730
  W8(c->r[3]+c->r[30],c->r[0]); // 80083734
L_80083738:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80083738
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008373C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80083740
  c->lr=c->r[0]; // 80083744
  c->r[1]=c->r[1]+0x00000010u; // 80083748
  return; // 8008374C
}

// SetSystemOption__7WiiCoreFPcf
void f_80083750(Ctx* __restrict c) {
  trace_call(0x80083750u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083750
  c->r[0]=c->lr; // 80083754
  W32(c->r[1]+0x00000024u,c->r[0]); // 80083758
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8008375C
  c->f[31]=c->f[1]; // 80083760
  W32(c->r[1]+0x00000014u,c->r[31]); // 80083764
  c->r[31]=0u+0x80250000u; // 80083768
  c->r[31]=c->r[31]+0x00006D68u; // 8008376C
  W32(c->r[1]+0x00000010u,c->r[30]); // 80083770
  c->r[30]=c->r[4]|c->r[4]; // 80083774
  c->r[4]=c->r[31]+0x00001C92u; // 80083778
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8008377C
  c->r[29]=c->r[3]|c->r[3]; // 80083780
  c->r[3]=c->r[30]|c->r[30]; // 80083784
  c->lr=0x8008378Cu; f_800E416C(c); // 80083788
  cmps(c,0,(int32_t)c->r[3],0); // 8008378C
  if (!crb(c,2)) { goto L_8008379C; } // 80083790
  {uint32_t ea=c->r[29]+0x00001550u; WF32(ea,c->f[31]);} // 80083794
  goto L_800837EC; // 80083798
L_8008379C:;
  c->r[3]=c->r[30]|c->r[30]; // 8008379C
  c->r[4]=c->r[31]+0x00001CA9u; // 800837A0
  c->lr=0x800837A8u; f_800E416C(c); // 800837A4
  cmps(c,0,(int32_t)c->r[3],0); // 800837A8
  if (!crb(c,2)) { goto L_800837B8; } // 800837AC
  {uint32_t ea=c->r[29]+0x00001554u; WF32(ea,c->f[31]);} // 800837B0
  goto L_800837EC; // 800837B4
L_800837B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800837B8
  c->r[4]=c->r[31]+0x00001CC0u; // 800837BC
  c->lr=0x800837C4u; f_800E416C(c); // 800837C0
  cmps(c,0,(int32_t)c->r[3],0); // 800837C4
  if (!crb(c,2)) { goto L_800837D4; } // 800837C8
  {uint32_t ea=c->r[29]+0x00001558u; WF32(ea,c->f[31]);} // 800837CC
  goto L_800837EC; // 800837D0
L_800837D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800837D4
  c->r[4]=c->r[31]+0x00001CD9u; // 800837D8
  c->lr=0x800837E0u; f_800E416C(c); // 800837DC
  cmps(c,0,(int32_t)c->r[3],0); // 800837E0
  if (!crb(c,2)) { goto L_800837EC; } // 800837E4
  {uint32_t ea=c->r[29]+0x0000155Cu; WF32(ea,c->f[31]);} // 800837E8
L_800837EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800837EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800837F0
  c->r[31]=R32(c->r[1]+0x00000014u); // 800837F4
  c->r[30]=R32(c->r[1]+0x00000010u); // 800837F8
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 800837FC
  c->lr=c->r[0]; // 80083800
  c->r[1]=c->r[1]+0x00000020u; // 80083804
  return; // 80083808
}

// IsSystemMenuActive__7WiiCoreFv
void f_8008380C(Ctx* __restrict c) {
  trace_call(0x8008380Cu);
  c->r[3]=R8(c->r[13]+0xFFFF8BC9u); // 8008380C
  return; // 80083810
}

// DisableSystemMenu__7WiiCoreFb
void f_80083814(Ctx* __restrict c) {
  trace_call(0x80083814u);
  c->r[0]=cntlz(c->r[4]); // 80083814
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80083818
  W8(c->r[13]+0xFFFF8BCAu,c->r[0]); // 8008381C
  return; // 80083820
}

// EnableControllerErrors__7WiiCoreFib
void f_80083824(Ctx* __restrict c) {
  trace_call(0x80083824u);
  c->r[3]=c->r[3]+c->r[4]; // 80083824
  W8(c->r[3]+0x00001560u,c->r[5]); // 80083828
  return; // 8008382C
}

// ControllerErrorsEnabled__7WiiCoreFi
void f_80083830(Ctx* __restrict c) {
  trace_call(0x80083830u);
  c->r[3]=c->r[3]+c->r[4]; // 80083830
  c->r[3]=R8(c->r[3]+0x00001560u); // 80083834
  return; // 80083838
}

// EnableControllerPointer__7WiiCoreFib
void f_8008383C(Ctx* __restrict c) {
  trace_call(0x8008383Cu);
  cmps(c,0,(int32_t)c->r[4],-1); // 8008383C
  if (crb(c,2)) return; // 80083840
  cmps(c,0,(int32_t)c->r[5],0); // 80083844
  if (crb(c,2)) { goto L_80083854; } // 80083848
  c->r[3]=c->r[4]|c->r[4]; // 8008384C
  f_80141950(c); return; // 80083850
L_80083854:;
  c->r[3]=c->r[4]|c->r[4]; // 80083854
  f_80141930(c); return; // 80083858
  return; // 8008385C
}

// IsAttachmentRequired__7WiiCoreFv
void f_80083860(Ctx* __restrict c) {
  trace_call(0x80083860u);
  c->r[3]=R8(c->r[3]+0x0000154Cu); // 80083860
  return; // 80083864
}

// SetAttachmentRequired__7WiiCoreFb
void f_80083868(Ctx* __restrict c) {
  trace_call(0x80083868u);
  W8(c->r[3]+0x0000154Cu,c->r[4]); // 80083868
  return; // 8008386C
}

// IsInputEnabled__7WiiCoreFv
void f_80083870(Ctx* __restrict c) {
  trace_call(0x80083870u);
  c->r[3]=R8(c->r[3]+0x00001144u); // 80083870
  return; // 80083874
}

// EnableInput__7WiiCoreFb
void f_80083878(Ctx* __restrict c) {
  trace_call(0x80083878u);
  W8(c->r[3]+0x00001144u,c->r[4]); // 80083878
  return; // 8008387C
}

// SetMousePosition__7WiiCoreFiii
void f_80083880(Ctx* __restrict c) {
  trace_call(0x80083880u);
  return; // 80083880
}

// __dt__7WiiCoreFv
void f_80083884(Ctx* __restrict c) {
  trace_call(0x80083884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083884
  c->r[0]=c->lr; // 80083888
  cmps(c,0,(int32_t)c->r[3],0); // 8008388C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083890
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80083894
  c->r[31]=c->r[4]|c->r[4]; // 80083898
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008389C
  c->r[30]=c->r[3]|c->r[3]; // 800838A0
  if (crb(c,2)) { goto L_800838C0; } // 800838A4
  c->r[4]=0u+0x00000000u; // 800838A8
  c->lr=0x800838B0u; f_80071DF4(c); // 800838AC
  cmps(c,0,(int32_t)c->r[31],0); // 800838B0
  if (!crb(c,1)) { goto L_800838C0; } // 800838B4
  c->r[3]=c->r[30]|c->r[30]; // 800838B8
  c->lr=0x800838C0u; f_8008DE54(c); // 800838BC
L_800838C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800838C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800838C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800838C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800838CC
  c->lr=c->r[0]; // 800838D0
  c->r[1]=c->r[1]+0x00000010u; // 800838D4
  return; // 800838D8
}

// CreateInstance__8GraphicsFv
void f_800838DC(Ctx* __restrict c) {
  trace_call(0x800838DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800838DC
  c->r[0]=c->lr; // 800838E0
  c->r[3]=0u+0x00010000u; // 800838E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800838E8
  c->r[3]=c->r[3]+0xFFFF81E8u; // 800838EC
  c->lr=0x800838F4u; f_8008DC84(c); // 800838F0
  cmps(c,0,(int32_t)c->r[3],0); // 800838F4
  if (crb(c,2)) { goto L_80083900; } // 800838F8
  c->lr=0x80083900u; f_80083910(c); // 800838FC
L_80083900:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80083900
  c->lr=c->r[0]; // 80083904
  c->r[1]=c->r[1]+0x00000010u; // 80083908
  return; // 8008390C
}

// __ct__11WiiGraphicsFv
void f_80083910(Ctx* __restrict c) {
  trace_call(0x80083910u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083910
  c->r[0]=c->lr; // 80083914
  W32(c->r[1]+0x00000044u,c->r[0]); // 80083918
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8008391C
  c->r[31]=c->r[3]|c->r[3]; // 80083920
  c->lr=0x80083928u; f_80075FBC(c); // 80083924
  c->r[3]=0u+0x80260000u; // 80083928
  c->r[7]=0u+0x000000FFu; // 8008392C
  c->r[6]=0u+0x00000000u; // 80083930
  c->r[11]=c->r[31]+0x00010000u; // 80083934
  c->r[3]=c->r[3]+0x00004448u; // 80083938
  W32(c->r[31]+0x00000000u,c->r[3]); // 8008393C
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[5]=c->ps1[5]=RF32(ea);} // 80083940
  c->r[8]=c->r[31]+0x0000016Cu; // 80083944
  W8(c->r[31]+0x00000158u,c->r[7]); // 80083948
  c->r[4]=c->r[11]+0xFFFF816Cu; // 8008394C
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80083950
  c->r[0]=0u+0x00000018u; // 80083954
  W8(c->r[31]+0x00000159u,c->r[7]); // 80083958
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[3]=c->ps1[3]=RF32(ea);} // 8008395C
  W8(c->r[31]+0x0000015Au,c->r[7]); // 80083960
  W8(c->r[31]+0x0000015Bu,c->r[7]); // 80083964
  W32(c->r[31]+0x00000164u,c->r[6]); // 80083968
  W32(c->r[31]+0x00000160u,c->r[6]); // 8008396C
  W32(c->r[31]+0x00000168u,c->r[6]); // 80083970
L_80083974:;
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[5]);} // 80083974
  c->r[5]=c->r[8]+0x00000018u; // 80083978
  c->r[3]=c->r[8]+0x00000048u; // 8008397C
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[5]);} // 80083980
  cmpu(c,0,c->r[5],c->r[3]); // 80083984
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[5]);} // 80083988
  W8(c->r[8]+0x0000000Cu,c->r[7]); // 8008398C
  W8(c->r[8]+0x0000000Du,c->r[7]); // 80083990
  W8(c->r[8]+0x0000000Eu,c->r[7]); // 80083994
  W8(c->r[8]+0x0000000Fu,c->r[7]); // 80083998
  {uint32_t ea=c->r[8]+0x00000010u; WF32(ea,c->f[5]);} // 8008399C
  {uint32_t ea=c->r[8]+0x00000014u; WF32(ea,c->f[5]);} // 800839A0
  if (!crb(c,0)) { goto L_800839E8; } // 800839A4
  c->r[3]=c->r[3]+0x00000017u; // 800839A8
  c->r[3]=c->r[3]-c->r[5]; // 800839AC
  c->r[3]=divwu(c->r[3],c->r[0]); // 800839B0
  c->ctr=c->r[3]; // 800839B4
  if (!crb(c,0)) { goto L_800839E8; } // 800839B8
L_800839BC:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[5]);} // 800839BC
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[5]);} // 800839C0
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 800839C4
  W8(c->r[5]+0x0000000Cu,c->r[7]); // 800839C8
  W8(c->r[5]+0x0000000Du,c->r[7]); // 800839CC
  W8(c->r[5]+0x0000000Eu,c->r[7]); // 800839D0
  W8(c->r[5]+0x0000000Fu,c->r[7]); // 800839D4
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[5]);} // 800839D8
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[5]);} // 800839DC
  c->r[5]=c->r[5]+0x00000018u; // 800839E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800839BC; } // 800839E4
L_800839E8:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 800839E8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800839EC
  W32(c->r[1]+0x00000014u,c->r[3]); // 800839F0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 800839F4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800839F8
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800839FC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80083A00
  W32(c->r[1]+0x00000018u,c->r[5]); // 80083A04
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 80083A08
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80083A0C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083A10
  W8(c->r[8]+0x00000050u,c->r[7]); // 80083A14
  c->r[3]=R32(c->r[1]+0x00000010u); // 80083A18
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80083A1C
  W8(c->r[8]+0x00000051u,c->r[7]); // 80083A20
  W8(c->r[8]+0x00000052u,c->r[7]); // 80083A24
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80083A28
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80083A2C
  W8(c->r[8]+0x00000053u,c->r[7]); // 80083A30
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80083A34
  W32(c->r[8]+0x00000048u,c->r[6]); // 80083A38
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80083A3C
  W32(c->r[8]+0x0000004Cu,c->r[6]); // 80083A40
  W32(c->r[8]+0x0000005Cu,c->r[6]); // 80083A44
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80083A48
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 80083A4C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80083A50
  c->r[5]=R32(c->r[1]+0x00000024u); // 80083A54
  W32(c->r[8]+0x0000006Cu,c->r[6]); // 80083A58
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 80083A5C
  W8(c->r[8]+0x00000050u,c->r[5]); // 80083A60
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80083A64
  W8(c->r[8]+0x00000051u,c->r[3]); // 80083A68
  c->r[3]=R32(c->r[1]+0x00000034u); // 80083A6C
  W8(c->r[8]+0x00000052u,c->r[3]); // 80083A70
  W8(c->r[8]+0x00000053u,c->r[7]); // 80083A74
  W8(c->r[8]+0x00000054u,c->r[6]); // 80083A78
  W8(c->r[8]+0x00000055u,c->r[6]); // 80083A7C
  W8(c->r[8]+0x00000056u,c->r[6]); // 80083A80
  W8(c->r[8]+0x00000057u,c->r[6]); // 80083A84
  W8(c->r[8]+0x00000059u,c->r[6]); // 80083A88
  W32(c->r[8]+0x00000060u,c->r[6]); // 80083A8C
  {uint32_t ea=c->r[8]+0x00000068u; WF32(ea,c->f[5]);} // 80083A90
  {uint32_t ea=c->r[8]+0x00000064u; WF32(ea,c->f[5]);} // 80083A94
  c->r[8]=c->r[8]+0x00000080u; // 80083A98
  cmpu(c,0,c->r[8],c->r[4]); // 80083A9C
  if (crb(c,0)) { IRQCHK(c); goto L_80083974; } // 80083AA0
  {uint32_t ea=c->r[2]+0xFFFF8C34u; c->f[1]=c->ps1[1]=RF32(ea);} // 80083AA4
  c->r[10]=0u+0x00000000u; // 80083AA8
  c->r[0]=0u+0x00000002u; // 80083AAC
  c->r[7]=0u+0x00000001u; // 80083AB0
  c->r[9]=0u+0x00000020u; // 80083AB4
  c->r[5]=0u+0x00000080u; // 80083AB8
  {uint32_t ea=c->r[2]+0xFFFF8C38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083ABC
  c->r[8]=0u+0x000000FEu; // 80083AC0
  c->r[6]=0u+0x00000003u; // 80083AC4
  c->r[4]=0u+0x000000FFu; // 80083AC8
  W32(c->r[31]+0x0000011Cu,c->r[10]); // 80083ACC
  c->r[3]=c->r[31]|c->r[31]; // 80083AD0
  W8(c->r[31]+0x00000120u,c->r[9]); // 80083AD4
  W8(c->r[31]+0x00000121u,c->r[9]); // 80083AD8
  W8(c->r[31]+0x00000122u,c->r[9]); // 80083ADC
  W8(c->r[31]+0x00000123u,c->r[8]); // 80083AE0
  W8(c->r[31]+0x00000124u,c->r[7]); // 80083AE4
  W8(c->r[31]+0x00000125u,c->r[10]); // 80083AE8
  W8(c->r[31]+0x00000127u,c->r[10]); // 80083AEC
  W8(c->r[31]+0x00000126u,c->r[7]); // 80083AF0
  W32(c->r[11]+0xFFFF81B4u,c->r[10]); // 80083AF4
  W32(c->r[11]+0xFFFF81B0u,c->r[10]); // 80083AF8
  W32(c->r[11]+0xFFFF81ACu,c->r[10]); // 80083AFC
  W8(c->r[11]+0xFFFF81B8u,c->r[6]); // 80083B00
  W8(c->r[31]+0x0000014Cu,c->r[10]); // 80083B04
  {uint32_t ea=c->r[31]+0x00000150u; WF32(ea,c->f[1]);} // 80083B08
  {uint32_t ea=c->r[31]+0x00000154u; WF32(ea,c->f[0]);} // 80083B0C
  W8(c->r[31]+0x00000158u,c->r[5]); // 80083B10
  W8(c->r[31]+0x00000159u,c->r[5]); // 80083B14
  W8(c->r[31]+0x0000015Au,c->r[5]); // 80083B18
  W8(c->r[31]+0x0000015Bu,c->r[4]); // 80083B1C
  W8(c->r[31]+0x0000015Cu,c->r[7]); // 80083B20
  W8(c->r[31]+0x0000015Du,c->r[7]); // 80083B24
  W32(c->r[31]+0x00000128u,c->r[10]); // 80083B28
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 80083B2C
  W32(c->r[31]+0x00000130u,c->r[0]); // 80083B30
  W32(c->r[31]+0x00000134u,c->r[0]); // 80083B34
  W32(c->r[31]+0x00000138u,c->r[0]); // 80083B38
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 80083B3C
  W32(c->r[31]+0x00000140u,c->r[0]); // 80083B40
  W32(c->r[31]+0x00000144u,c->r[0]); // 80083B44
  W32(c->r[31]+0x00000148u,c->r[0]); // 80083B48
  {uint32_t ea=c->r[11]+0xFFFF81C0u; WF32(ea,c->f[5]);} // 80083B4C
  W8(c->r[11]+0xFFFF81E4u,c->r[10]); // 80083B50
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80083B54
  c->r[0]=R32(c->r[1]+0x00000044u); // 80083B58
  c->lr=c->r[0]; // 80083B5C
  c->r[1]=c->r[1]+0x00000040u; // 80083B60
  return; // 80083B64
}

// __dt__11WiiGraphicsFv
void f_80083B68(Ctx* __restrict c) {
  trace_call(0x80083B68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083B68
  c->r[0]=c->lr; // 80083B6C
  cmps(c,0,(int32_t)c->r[3],0); // 80083B70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80083B74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80083B78
  W32(c->r[1]+0x00000018u,c->r[30]); // 80083B7C
  c->r[30]=c->r[4]|c->r[4]; // 80083B80
  W32(c->r[1]+0x00000014u,c->r[29]); // 80083B84
  c->r[29]=c->r[3]|c->r[3]; // 80083B88
  if (crb(c,2)) { goto L_80083C94; } // 80083B8C
  c->r[0]=addc(c,c->r[3],0x00000160u,0); cr0(c,c->r[0]); // 80083B90
  if (crb(c,2)) { goto L_80083C78; } // 80083B94
  c->r[31]=0u+0x00000000u; // 80083B98
  goto L_80083C6C; // 80083B9C
L_80083BA0:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 80083BA0
  goto L_80083BBC; // 80083BA4
L_80083BA8:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80083BA8
  cmpu(c,0,c->r[0],c->r[4]); // 80083BAC
  if (!crb(c,2)) { goto L_80083BB8; } // 80083BB0
  goto L_80083BC8; // 80083BB4
L_80083BB8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80083BB8
L_80083BBC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80083BBC
  if (!crb(c,2)) { IRQCHK(c); goto L_80083BA8; } // 80083BC0
  c->r[3]=0u+0x00000000u; // 80083BC4
L_80083BC8:;
  cmps(c,1,(int32_t)c->r[3],0); // 80083BC8
  if (crb(c,6)) { goto L_80083C6C; } // 80083BCC
  c->r[0]=R32(c->r[29]+0x00000160u); // 80083BD0
  c->r[4]=R32(c->r[29]+0x00000168u); // 80083BD4
  cmpu(c,0,c->r[3],c->r[0]); // 80083BD8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80083BDC
  W32(c->r[29]+0x00000168u,c->r[0]); // 80083BE0
  if (!crb(c,2)) { goto L_80083C1C; } // 80083BE4
  c->r[4]=R32(c->r[3]+0x00000000u); // 80083BE8
  W32(c->r[29]+0x00000160u,c->r[4]); // 80083BEC
  cmps(c,0,(int32_t)c->r[4],0); // 80083BF0
  if (crb(c,2)) { goto L_80083C00; } // 80083BF4
  W32(c->r[4]+0x00000004u,c->r[31]); // 80083BF8
  goto L_80083C04; // 80083BFC
L_80083C00:;
  W32(c->r[29]+0x00000164u,c->r[31]); // 80083C00
L_80083C04:;
  W32(c->r[3]+0x00000000u,c->r[31]); // 80083C04
  cmps(c,0,(int32_t)c->r[3],0); // 80083C08
  W32(c->r[3]+0x00000004u,c->r[31]); // 80083C0C
  if (crb(c,2)) { goto L_80083C6C; } // 80083C10
  c->lr=0x80083C18u; f_8008DE54(c); // 80083C14
  goto L_80083C6C; // 80083C18
L_80083C1C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80083C1C
  cmps(c,0,(int32_t)c->r[0],0); // 80083C20
  if (!crb(c,2)) { goto L_80083C48; } // 80083C24
  c->r[4]=R32(c->r[3]+0x00000004u); // 80083C28
  W32(c->r[29]+0x00000164u,c->r[4]); // 80083C2C
  W32(c->r[4]+0x00000000u,c->r[31]); // 80083C30
  W32(c->r[3]+0x00000000u,c->r[31]); // 80083C34
  W32(c->r[3]+0x00000004u,c->r[31]); // 80083C38
  if (crb(c,6)) { goto L_80083C6C; } // 80083C3C
  c->lr=0x80083C44u; f_8008DE54(c); // 80083C40
  goto L_80083C6C; // 80083C44
L_80083C48:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80083C48
  W32(c->r[4]+0x00000000u,c->r[0]); // 80083C4C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80083C50
  c->r[0]=R32(c->r[3]+0x00000004u); // 80083C54
  W32(c->r[4]+0x00000004u,c->r[0]); // 80083C58
  W32(c->r[3]+0x00000000u,c->r[31]); // 80083C5C
  W32(c->r[3]+0x00000004u,c->r[31]); // 80083C60
  if (crb(c,6)) { goto L_80083C6C; } // 80083C64
  c->lr=0x80083C6Cu; f_8008DE54(c); // 80083C68
L_80083C6C:;
  c->r[3]=R32(c->r[29]+0x00000160u); // 80083C6C
  cmps(c,0,(int32_t)c->r[3],0); // 80083C70
  if (!crb(c,2)) { IRQCHK(c); goto L_80083BA0; } // 80083C74
L_80083C78:;
  c->r[3]=c->r[29]|c->r[29]; // 80083C78
  c->r[4]=0u+0x00000000u; // 80083C7C
  c->lr=0x80083C84u; f_800761D4(c); // 80083C80
  cmps(c,0,(int32_t)c->r[30],0); // 80083C84
  if (!crb(c,1)) { goto L_80083C94; } // 80083C88
  c->r[3]=c->r[29]|c->r[29]; // 80083C8C
  c->lr=0x80083C94u; f_8008DE54(c); // 80083C90
L_80083C94:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80083C94
  c->r[3]=c->r[29]|c->r[29]; // 80083C98
  c->r[30]=R32(c->r[1]+0x00000018u); // 80083C9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80083CA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80083CA4
  c->lr=c->r[0]; // 80083CA8
  c->r[1]=c->r[1]+0x00000020u; // 80083CAC
  return; // 80083CB0
}

// Init__11WiiGraphicsFPc
void f_80083CB4(Ctx* __restrict c) {
  trace_call(0x80083CB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083CB4
  c->r[0]=c->lr; // 80083CB8
  W32(c->r[1]+0x00000064u,c->r[0]); // 80083CBC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80083CC0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80083CC4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80083CC8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80083CCC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80083CD0
  c->r[31]=c->r[3]|c->r[3]; // 80083CD4
  c->r[3]=0u+0x00000001u; // 80083CD8
  W32(c->r[1]+0x00000038u,c->r[30]); // 80083CDC
  c->lr=0x80083CE4u; f_80200DD0(c); // 80083CE0
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 80083CE4
  c->lr=0x80083CECu; f_801E9DE0(c); // 80083CE8
  c->r[12]=R32(c->r[31]+0x00000000u); // 80083CEC
  c->r[3]=c->r[31]|c->r[31]; // 80083CF0
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80083CF4
  c->ctr=c->r[12]; // 80083CF8
  if (true) { c->lr=0x80083D00u; dispatch(c,c->ctr); } // 80083CFC
  c->r[4]=c->r[31]+0x00010000u; // 80083D00
  c->r[30]=0u+0x80260000u; // 80083D04
  W32(c->r[4]+0xFFFF81ACu,c->r[3]); // 80083D08
  c->r[4]=c->r[30]+0xFFFF8A80u; // 80083D0C
  c->r[7]=0u+0x00000004u; // 80083D10
  c->r[6]=R32(c->r[13]+0xFFFF8B80u); // 80083D14
  c->r[12]=R32(c->r[3]+0x00000000u); // 80083D18
  c->r[5]=R16(c->r[6]+0x00000004u); // 80083D1C
  c->r[0]=R16(c->r[6]+0x00000006u); // 80083D20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80083D24
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 80083D28
  c->r[6]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80083D2C
  c->ctr=c->r[12]; // 80083D30
  if (true) { c->lr=0x80083D38u; dispatch(c,c->ctr); } // 80083D34
  c->r[12]=R32(c->r[31]+0x00000000u); // 80083D38
  c->r[3]=c->r[31]|c->r[31]; // 80083D3C
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80083D40
  c->ctr=c->r[12]; // 80083D44
  if (true) { c->lr=0x80083D4Cu; dispatch(c,c->ctr); } // 80083D48
  c->r[4]=c->r[31]+0x00010000u; // 80083D4C
  c->r[30]=c->r[30]+0xFFFF8A80u; // 80083D50
  W32(c->r[4]+0xFFFF81B0u,c->r[3]); // 80083D54
  c->r[4]=c->r[30]+0x0000000Du; // 80083D58
  c->r[7]=0u+0x00000004u; // 80083D5C
  c->r[6]=R32(c->r[13]+0xFFFF8B80u); // 80083D60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80083D64
  c->r[5]=R16(c->r[6]+0x00000004u); // 80083D68
  c->r[0]=R16(c->r[6]+0x00000006u); // 80083D6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80083D70
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 80083D74
  c->r[6]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80083D78
  c->ctr=c->r[12]; // 80083D7C
  if (true) { c->lr=0x80083D84u; dispatch(c,c->ctr); } // 80083D80
  c->r[12]=R32(c->r[31]+0x00000000u); // 80083D84
  c->r[3]=c->r[31]|c->r[31]; // 80083D88
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80083D8C
  c->ctr=c->r[12]; // 80083D90
  if (true) { c->lr=0x80083D98u; dispatch(c,c->ctr); } // 80083D94
  c->r[5]=c->r[31]+0x00010000u; // 80083D98
  c->r[4]=c->r[30]+0x0000001Au; // 80083D9C
  W32(c->r[5]+0xFFFF81B4u,c->r[3]); // 80083DA0
  c->r[7]=0u+0x00000004u; // 80083DA4
  c->r[6]=R32(c->r[13]+0xFFFF8B80u); // 80083DA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80083DAC
  c->r[5]=R16(c->r[6]+0x00000004u); // 80083DB0
  c->r[0]=R16(c->r[6]+0x00000006u); // 80083DB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80083DB8
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 80083DBC
  c->r[6]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80083DC0
  c->ctr=c->r[12]; // 80083DC4
  if (true) { c->lr=0x80083DCCu; dispatch(c,c->ctr); } // 80083DC8
  c->r[3]=0u+0x802B0000u; // 80083DCC
  c->r[4]=c->r[1]+0x00000010u; // 80083DD0
  c->r[3]=c->r[3]+0xFFFFF9A0u; // 80083DD4
  c->r[5]=0u+0x00000040u; // 80083DD8
  c->r[6]=0u+0x00000100u; // 80083DDC
  c->r[7]=0u+0x00000008u; // 80083DE0
  c->r[8]=0u+0x00000001u; // 80083DE4
  c->lr=0x80083DECu; f_801F96F0(c); // 80083DE8
  c->r[11]=rotl(c->r[3],0)&0xFF000000u; // 80083DEC
  c->r[4]=c->r[31]+0x00010000u; // 80083DF0
  c->r[0]=c->r[11]+0x80000000u; // 80083DF4
  W32(c->r[4]+0xFFFF81BCu,c->r[3]); // 80083DF8
  cmpu(c,0,c->r[0],0x00000000u); // 80083DFC
  c->r[5]=0u+0x00000001u; // 80083E00
  c->r[6]=0u+0x00000001u; // 80083E04
  c->r[7]=0u+0x00000001u; // 80083E08
  c->r[8]=0u+0x00000001u; // 80083E0C
  c->r[9]=0u+0x00000001u; // 80083E10
  c->r[10]=0u+0x00000001u; // 80083E14
  if (crb(c,2)) { goto L_80083E30; } // 80083E18
  c->r[4]=rotl(c->r[3],0)&0xFF800000u; // 80083E1C
  c->r[0]=c->r[4]+0x7F000000u; // 80083E20
  cmpu(c,0,c->r[0],0x00000000u); // 80083E24
  if (crb(c,2)) { goto L_80083E30; } // 80083E28
  c->r[10]=0u+0x00000000u; // 80083E2C
L_80083E30:;
  cmps(c,0,(int32_t)c->r[10],0); // 80083E30
  if (!crb(c,2)) { goto L_80083E4C; } // 80083E34
  c->r[4]=rotl(c->r[3],0)&0xF8000000u; // 80083E38
  c->r[0]=c->r[4]+0x70000000u; // 80083E3C
  cmpu(c,0,c->r[0],0x00000000u); // 80083E40
  if (crb(c,2)) { goto L_80083E4C; } // 80083E44
  c->r[9]=0u+0x00000000u; // 80083E48
L_80083E4C:;
  cmps(c,0,(int32_t)c->r[9],0); // 80083E4C
  if (!crb(c,2)) { goto L_80083E64; } // 80083E50
  c->r[0]=c->r[11]+0x40000000u; // 80083E54
  cmpu(c,0,c->r[0],0x00000000u); // 80083E58
  if (crb(c,2)) { goto L_80083E64; } // 80083E5C
  c->r[8]=0u+0x00000000u; // 80083E60
L_80083E64:;
  cmps(c,0,(int32_t)c->r[8],0); // 80083E64
  if (!crb(c,2)) { goto L_80083E80; } // 80083E68
  c->r[4]=rotl(c->r[3],0)&0xFF800000u; // 80083E6C
  c->r[0]=c->r[4]+0x3F000000u; // 80083E70
  cmpu(c,0,c->r[0],0x00000000u); // 80083E74
  if (crb(c,2)) { goto L_80083E80; } // 80083E78
  c->r[7]=0u+0x00000000u; // 80083E7C
L_80083E80:;
  cmps(c,0,(int32_t)c->r[7],0); // 80083E80
  if (!crb(c,2)) { goto L_80083E9C; } // 80083E84
  c->r[4]=rotl(c->r[3],0)&0xF8000000u; // 80083E88
  c->r[0]=c->r[4]+0x30000000u; // 80083E8C
  cmpu(c,0,c->r[0],0x00000000u); // 80083E90
  if (crb(c,2)) { goto L_80083E9C; } // 80083E94
  c->r[6]=0u+0x00000000u; // 80083E98
L_80083E9C:;
  cmps(c,0,(int32_t)c->r[6],0); // 80083E9C
  if (!crb(c,2)) { goto L_80083EB8; } // 80083EA0
  c->r[4]=rotl(c->r[3],0)&0xFFFFC000u; // 80083EA4
  c->r[0]=c->r[4]+0x20000000u; // 80083EA8
  cmpu(c,0,c->r[0],0x00000000u); // 80083EAC
  if (crb(c,2)) { goto L_80083EB8; } // 80083EB0
  c->r[5]=0u+0x00000000u; // 80083EB4
L_80083EB8:;
  cmps(c,0,(int32_t)c->r[5],0); // 80083EB8
  if (!crb(c,2)) { goto L_80083EE0; } // 80083EBC
  c->r[5]=0u+0x80260000u; // 80083EC0
  c->r[6]=c->r[3]|c->r[3]; // 80083EC4
  c->r[5]=c->r[5]+0xFFFF8A80u; // 80083EC8
  c->r[4]=0u+0x00000052u; // 80083ECC
  c->r[3]=c->r[5]+0x00000027u; // 80083ED0
  c->r[5]=c->r[5]+0x00000037u; // 80083ED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083ED8
  c->lr=0x80083EE0u; f_8016AB60(c); // 80083EDC
L_80083EE0:;
  c->r[3]=c->r[31]+0x00010000u; // 80083EE0
  c->r[4]=0u+0x00000000u; // 80083EE4
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80083EE8
  c->lr=0x80083EF0u; f_801F9A70(c); // 80083EEC
  c->r[6]=R32(c->r[13]+0xFFFF8B80u); // 80083EF0
  c->r[4]=0u+0x43300000u; // 80083EF4
  c->r[3]=c->r[31]+0x00010000u; // 80083EF8
  W32(c->r[1]+0x00000020u,c->r[4]); // 80083EFC
  c->r[5]=R16(c->r[6]+0x00000006u); // 80083F00
  W32(c->r[1]+0x00000024u,c->r[5]); // 80083F04
  c->r[0]=R16(c->r[6]+0x00000004u); // 80083F08
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[1]=RF64(ea);} // 80083F0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 80083F10
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80083F14
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[1]); // 80083F18
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80083F1C
  W32(c->r[1]+0x00000028u,c->r[4]); // 80083F20
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 80083F24
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 80083F28
  c->lr=0x80083F30u; f_801F9A30(c); // 80083F2C
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80083F30
  c->f[3]=c->f[31]; // 80083F34
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80083F38
  c->f[4]=c->f[30]; // 80083F3C
  c->f[2]=c->f[1]; // 80083F40
  c->r[3]=c->r[1]+0x0000000Cu; // 80083F44
  c->lr=0x80083F4Cu; f_801F3F20(c); // 80083F48
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80083F4C
  c->r[3]=c->r[1]+0x0000000Cu; // 80083F50
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80083F54
  c->lr=0x80083F5Cu; f_801F4060(c); // 80083F58
  c->r[3]=c->r[31]+0x00010000u; // 80083F5C
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80083F60
  c->lr=0x80083F68u; f_801F9A30(c); // 80083F64
  W32(c->r[1]+0x00000008u,c->r[3]); // 80083F68
  c->r[3]=c->r[1]+0x00000008u; // 80083F6C
  c->r[7]=R32(c->r[13]+0xFFFF8B80u); // 80083F70
  c->r[4]=0u+0x00000000u; // 80083F74
  c->r[5]=0u+0x00000000u; // 80083F78
  c->r[6]=R16(c->r[7]+0x00000004u); // 80083F7C
  c->r[7]=R16(c->r[7]+0x00000006u); // 80083F80
  c->lr=0x80083F88u; f_801F3E70(c); // 80083F84
  c->r[3]=c->r[31]+0x00010000u; // 80083F88
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80083F8C
  c->r[3]=c->r[3]+0x00002878u; // 80083F90
  c->r[0]=R16(c->r[3]+0x00000002u); // 80083F94
  cmps(c,0,(int32_t)c->r[0],0); // 80083F98
  if (!crb(c,1)) { goto L_80083FB0; } // 80083F9C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80083FA0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80083FA4
  W32(c->r[1]+0x00000018u,c->r[3]); // 80083FA8
  goto L_80083FBC; // 80083FAC
L_80083FB0:;
  c->r[0]=0u+0x00000000u; // 80083FB0
  W32(c->r[1]+0x00000018u,c->r[3]); // 80083FB4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80083FB8
L_80083FBC:;
  c->r[3]=c->r[1]+0x00000018u; // 80083FBC
  c->r[4]=0u+0x00000000u; // 80083FC0
  c->r[5]=0u+0xFFFFFFFFu; // 80083FC4
  c->lr=0x80083FCCu; f_80201E50(c); // 80083FC8
  c->r[4]=c->r[31]+0x00010000u; // 80083FCC
  c->r[5]=0u+0x00000000u; // 80083FD0
  W32(c->r[4]+0xFFFF81C8u,c->r[5]); // 80083FD4
  W32(c->r[4]+0xFFFF81C4u,c->r[5]); // 80083FD8
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 80083FDC
  c->r[0]=R16(c->r[3]+0x00000004u); // 80083FE0
  W32(c->r[4]+0xFFFF81CCu,c->r[0]); // 80083FE4
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 80083FE8
  c->r[0]=R16(c->r[3]+0x00000006u); // 80083FEC
  W32(c->r[4]+0xFFFF81D0u,c->r[0]); // 80083FF0
  W32(c->r[4]+0xFFFF81D8u,c->r[5]); // 80083FF4
  W32(c->r[4]+0xFFFF81D4u,c->r[5]); // 80083FF8
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 80083FFC
  c->r[0]=R16(c->r[3]+0x00000004u); // 80084000
  W32(c->r[4]+0xFFFF81DCu,c->r[0]); // 80084004
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 80084008
  c->r[0]=R16(c->r[3]+0x00000006u); // 8008400C
  W32(c->r[4]+0xFFFF81E0u,c->r[0]); // 80084010
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80084014
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80084018
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8008401C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80084020
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80084024
  c->r[30]=R32(c->r[1]+0x00000038u); // 80084028
  c->r[0]=R32(c->r[1]+0x00000064u); // 8008402C
  c->lr=c->r[0]; // 80084030
  c->r[1]=c->r[1]+0x00000060u; // 80084034
  return; // 80084038
}

// ShutDown__11WiiGraphicsFv
void f_8008403C(Ctx* __restrict c) {
  trace_call(0x8008403Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008403C
  c->r[0]=c->lr; // 80084040
  c->r[4]=c->r[3]+0x00010000u; // 80084044
  W32(c->r[1]+0x00000014u,c->r[0]); // 80084048
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008404C
  c->r[31]=c->r[3]|c->r[3]; // 80084050
  c->r[12]=R32(c->r[3]+0x00000000u); // 80084054
  c->r[4]=R32(c->r[4]+0xFFFF81ACu); // 80084058
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8008405C
  c->ctr=c->r[12]; // 80084060
  if (true) { c->lr=0x80084068u; dispatch(c,c->ctr); } // 80084064
  c->r[12]=R32(c->r[31]+0x00000000u); // 80084068
  c->r[4]=c->r[31]+0x00010000u; // 8008406C
  c->r[3]=c->r[31]|c->r[31]; // 80084070
  c->r[4]=R32(c->r[4]+0xFFFF81B0u); // 80084074
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80084078
  c->ctr=c->r[12]; // 8008407C
  if (true) { c->lr=0x80084084u; dispatch(c,c->ctr); } // 80084080
  c->r[12]=R32(c->r[31]+0x00000000u); // 80084084
  c->r[4]=c->r[31]+0x00010000u; // 80084088
  c->r[3]=c->r[31]|c->r[31]; // 8008408C
  c->r[4]=R32(c->r[4]+0xFFFF81B4u); // 80084090
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80084094
  c->ctr=c->r[12]; // 80084098
  if (true) { c->lr=0x800840A0u; dispatch(c,c->ctr); } // 8008409C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800840A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800840A4
  c->lr=c->r[0]; // 800840A8
  c->r[1]=c->r[1]+0x00000010u; // 800840AC
  return; // 800840B0
}

// Update__11WiiGraphicsFv
void f_800840B4(Ctx* __restrict c) {
  trace_call(0x800840B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800840B4
  c->r[0]=c->lr; // 800840B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800840BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800840C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800840C4
  c->r[30]=c->r[3]|c->r[3]; // 800840C8
  c->lr=0x800840D0u; f_80200EF0(c); // 800840CC
  c->r[0]=0u+0x00000000u; // 800840D0
  W32(c->r[30]+0x0000011Cu,c->r[0]); // 800840D4
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 800840D8
  cmps(c,0,(int32_t)c->r[0],0); // 800840DC
  if (!crb(c,2)) { goto L_800840EC; } // 800840E0
  c->lr=0x800840E8u; f_80080758(c); // 800840E4
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 800840E8
L_800840EC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 800840EC
  c->r[4]=0u+0x00000001u; // 800840F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800840F4
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 800840F8
  c->ctr=c->r[12]; // 800840FC
  if (true) { c->lr=0x80084104u; dispatch(c,c->ctr); } // 80084100
  c->r[0]=0u+0x43300000u; // 80084104
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80084108
  c->r[3]=c->r[30]+0x00010000u; // 8008410C
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[3]=RF64(ea);} // 80084110
  W32(c->r[1]+0x00000008u,c->r[0]); // 80084114
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[2]=c->ps1[2]=RF32(ea);} // 80084118
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8008411C
  {uint32_t ea=c->r[3]+0xFFFF81C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80084120
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80084124
  {uint32_t ea=c->r[2]+0xFFFF8C4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084128
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 8008412C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80084130
  {uint32_t ea=c->r[3]+0xFFFF81C0u; WF32(ea,c->f[1]);} // 80084134
  fcmp(c,0,c->f[1],c->f[0]); // 80084138
  if (!crb(c,1)) { goto L_80084148; } // 8008413C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80084140
  {uint32_t ea=c->r[3]+0xFFFF81C0u; WF32(ea,c->f[0]);} // 80084144
L_80084148:;
  c->r[3]=c->r[30]+0x00010000u; // 80084148
  c->r[31]=R32(c->r[3]+0xFFFF81BCu); // 8008414C
  goto L_8008416C; // 80084150
L_80084154:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80084154
  c->r[3]=c->r[31]|c->r[31]; // 80084158
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8008415C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80084160
  c->ctr=c->r[12]; // 80084164
  if (true) { c->lr=0x8008416Cu; dispatch(c,c->ctr); } // 80084168
L_8008416C:;
  c->r[4]=R32(c->r[31]+0x000000E4u); // 8008416C
  cmps(c,0,(int32_t)c->r[4],0); // 80084170
  if (!crb(c,2)) { IRQCHK(c); goto L_80084154; } // 80084174
  c->r[3]=0u+0x000007FFu; // 80084178
  c->lr=0x80084180u; f_801E9ED0(c); // 8008417C
  c->r[3]=c->r[30]|c->r[30]; // 80084180
  c->lr=0x80084188u; f_80076314(c); // 80084184
  c->r[0]=R32(c->r[1]+0x00000024u); // 80084188
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008418C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80084190
  c->lr=c->r[0]; // 80084194
  c->r[1]=c->r[1]+0x00000020u; // 80084198
  return; // 8008419C
}

// GetScreenSize__11WiiGraphicsFPiPi
void f_800841A0(Ctx* __restrict c) {
  trace_call(0x800841A0u);
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 800841A0
  c->r[0]=R16(c->r[3]+0x00000004u); // 800841A4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800841A8
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 800841AC
  c->r[0]=R16(c->r[3]+0x00000006u); // 800841B0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800841B4
  return; // 800841B8
}

// IsWidescreen__11WiiGraphicsFv
void f_800841BC(Ctx* __restrict c) {
  trace_call(0x800841BCu);
  c->r[3]=R32(c->r[13]+0xFFFF8BD8u); // 800841BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800841C0
  c->r[0]=cntlz(c->r[0]); // 800841C4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800841C8
  return; // 800841CC
}

// SetupMatrices__11WiiGraphicsFv
void f_800841D0(Ctx* __restrict c) {
  trace_call(0x800841D0u);
  {uint32_t ea=c->r[1]+0xFFFFFE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800841D0
  c->r[0]=c->lr; // 800841D4
  W32(c->r[1]+0x000001C4u,c->r[0]); // 800841D8
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[31]);} // 800841DC
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,31,ea,0,0);} // 800841E0
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[30]);} // 800841E4
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,30,ea,0,0);} // 800841E8
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[29]);} // 800841EC
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,29,ea,0,0);} // 800841F0
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[28]);} // 800841F4
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,28,ea,0,0);} // 800841F8
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[27]);} // 800841FC
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,27,ea,0,0);} // 80084200
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[26]);} // 80084204
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,26,ea,0,0);} // 80084208
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[25]);} // 8008420C
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,25,ea,0,0);} // 80084210
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[24]);} // 80084214
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,24,ea,0,0);} // 80084218
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[23]);} // 8008421C
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,23,ea,0,0);} // 80084220
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 80084224
  W32(c->r[1]+0x00000128u,c->r[30]); // 80084228
  c->r[30]=c->r[3]|c->r[3]; // 8008422C
  W32(c->r[1]+0x00000124u,c->r[29]); // 80084230
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80084234
  cmps(c,0,(int32_t)c->r[0],0); // 80084238
  if (!crb(c,2)) { goto L_8008425C; } // 8008423C
  c->r[3]=0u+0x00010000u; // 80084240
  c->r[3]=c->r[3]+0xFFFF81E8u; // 80084244
  c->lr=0x8008424Cu; f_8008DC84(c); // 80084248
  cmps(c,0,(int32_t)c->r[3],0); // 8008424C
  if (crb(c,2)) { goto L_80084258; } // 80084250
  c->lr=0x80084258u; f_80083910(c); // 80084254
L_80084258:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 80084258
L_8008425C:;
  c->r[29]=R32(c->r[13]+0xFFFF8B08u); // 8008425C
  cmps(c,0,(int32_t)c->r[29],0); // 80084260
  if (!crb(c,2)) { goto L_80084284; } // 80084264
  c->r[3]=0u+0x00010000u; // 80084268
  c->r[3]=c->r[3]+0xFFFF81E8u; // 8008426C
  c->lr=0x80084274u; f_8008DC84(c); // 80084270
  cmps(c,0,(int32_t)c->r[3],0); // 80084274
  if (crb(c,2)) { goto L_80084280; } // 80084278
  c->lr=0x80084280u; f_80083910(c); // 8008427C
L_80084280:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 80084280
L_80084284:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 80084284
  c->r[4]=0u+0x00000001u; // 80084288
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008428C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80084290
  c->ctr=c->r[12]; // 80084294
  if (true) { c->lr=0x8008429Cu; dispatch(c,c->ctr); } // 80084298
  c->r[12]=R32(c->r[29]+0x00000000u); // 8008429C
  c->r[3]=c->r[29]|c->r[29]; // 800842A0
  c->r[4]=0u+0x00000001u; // 800842A4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800842A8
  c->ctr=c->r[12]; // 800842AC
  if (true) { c->lr=0x800842B4u; dispatch(c,c->ctr); } // 800842B0
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800842B4
  c->r[3]=c->r[1]+0x000000D8u; // 800842B8
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800842BC
  c->r[4]=0u+0x00000000u; // 800842C0
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[1]);} // 800842C4
  c->r[5]=0u+0x00000040u; // 800842C8
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[1]);} // 800842CC
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[1]);} // 800842D0
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 800842D4
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[1]);} // 800842D8
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 800842DC
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[1]);} // 800842E0
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 800842E4
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[1]);} // 800842E8
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 800842EC
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 800842F0
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 800842F4
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[1]);} // 800842F8
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[1]);} // 800842FC
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 80084300
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 80084304
  c->lr=0x8008430Cu; f_80004688(c); // 80084308
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008430C
  c->r[3]=c->r[1]+0x00000008u; // 80084310
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80084314
  c->r[4]=0u+0x00000000u; // 80084318
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[1]);} // 8008431C
  c->r[5]=0u+0x00000040u; // 80084320
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 80084324
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 80084328
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 8008432C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80084330
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80084334
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80084338
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8008433C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80084340
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80084344
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80084348
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8008434C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80084350
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80084354
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80084358
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 8008435C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80084360
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80084364
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80084368
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 8008436C
  c->lr=0x80084374u; f_80004688(c); // 80084370
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084374
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80084378
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8008437C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80084380
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80084384
  {uint32_t ea=c->r[30]+0x00000028u; c->f[30]=c->ps1[30]=RF32(ea);} // 80084388
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8008438C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80084390
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 80084394
  {uint32_t ea=c->r[30]+0x00000058u; c->f[26]=c->ps1[26]=RF32(ea);} // 80084398
  {uint32_t ea=c->r[30]+0x00000038u; c->f[13]=c->ps1[13]=RF32(ea);} // 8008439C
  {uint32_t ea=c->r[30]+0x00000060u; c->f[25]=c->ps1[25]=RF32(ea);} // 800843A0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[31],c->f[26],c->f[0])); // 800843A4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[12]=c->ps1[12]=RF32(ea);} // 800843A8
  {uint32_t ea=c->r[30]+0x00000064u; c->f[24]=c->ps1[24]=RF32(ea);} // 800843AC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[13],c->f[25],c->f[0])); // 800843B0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[12],c->f[24],c->f[0])); // 800843B4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800843B8
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 800843BC
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800843C0
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[1]); // 800843C4
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800843C8
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 800843CC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[10],c->f[26],c->f[0])); // 800843D0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[9],c->f[25],c->f[0])); // 800843D4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[8],c->f[24],c->f[0])); // 800843D8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800843DC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[7]=c->ps1[7]=RF32(ea);} // 800843E0
  {uint32_t ea=c->r[30]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800843E4
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[1]); // 800843E8
  {uint32_t ea=c->r[30]+0x00000040u; c->f[5]=c->ps1[5]=RF32(ea);} // 800843EC
  {uint32_t ea=c->r[30]+0x00000050u; c->f[4]=c->ps1[4]=RF32(ea);} // 800843F0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[26],c->f[0])); // 800843F4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[5],c->f[25],c->f[0])); // 800843F8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[24],c->f[0])); // 800843FC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80084400
  {uint32_t ea=c->r[30]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80084404
  {uint32_t ea=c->r[30]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80084408
  c->f[23]=c->ps1[23]=S(c->f[3]*c->f[1]); // 8008440C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80084410
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084414
  c->f[23]=c->ps1[23]=S(std::fma(c->f[2],c->f[26],c->f[23])); // 80084418
  c->f[23]=c->ps1[23]=S(std::fma(c->f[1],c->f[25],c->f[23])); // 8008441C
  c->f[23]=c->ps1[23]=S(std::fma(c->f[0],c->f[24],c->f[23])); // 80084420
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[23]);} // 80084424
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[23]=c->ps1[23]=RF32(ea);} // 80084428
  {uint32_t ea=c->r[30]+0x00000068u; c->f[29]=c->ps1[29]=RF32(ea);} // 8008442C
  c->f[26]=c->ps1[26]=S(c->f[30]*c->f[23]); // 80084430
  {uint32_t ea=c->r[30]+0x00000070u; c->f[28]=c->ps1[28]=RF32(ea);} // 80084434
  c->f[25]=c->ps1[25]=S(c->f[11]*c->f[23]); // 80084438
  {uint32_t ea=c->r[30]+0x00000074u; c->f[27]=c->ps1[27]=RF32(ea);} // 8008443C
  c->f[24]=c->ps1[24]=S(c->f[7]*c->f[23]); // 80084440
  c->f[23]=c->ps1[23]=S(c->f[3]*c->f[23]); // 80084444
  c->f[26]=c->ps1[26]=S(std::fma(c->f[31],c->f[29],c->f[26])); // 80084448
  c->f[25]=c->ps1[25]=S(std::fma(c->f[10],c->f[29],c->f[25])); // 8008444C
  c->f[24]=c->ps1[24]=S(std::fma(c->f[6],c->f[29],c->f[24])); // 80084450
  c->f[23]=c->ps1[23]=S(std::fma(c->f[2],c->f[29],c->f[23])); // 80084454
  c->f[26]=c->ps1[26]=S(std::fma(c->f[13],c->f[28],c->f[26])); // 80084458
  c->f[25]=c->ps1[25]=S(std::fma(c->f[9],c->f[28],c->f[25])); // 8008445C
  c->f[24]=c->ps1[24]=S(std::fma(c->f[5],c->f[28],c->f[24])); // 80084460
  c->f[23]=c->ps1[23]=S(std::fma(c->f[1],c->f[28],c->f[23])); // 80084464
  c->f[26]=c->ps1[26]=S(std::fma(c->f[12],c->f[27],c->f[26])); // 80084468
  c->f[25]=c->ps1[25]=S(std::fma(c->f[8],c->f[27],c->f[25])); // 8008446C
  c->f[24]=c->ps1[24]=S(std::fma(c->f[4],c->f[27],c->f[24])); // 80084470
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[26]);} // 80084474
  c->f[23]=c->ps1[23]=S(std::fma(c->f[0],c->f[27],c->f[23])); // 80084478
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[25]);} // 8008447C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[24]);} // 80084480
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[23]);} // 80084484
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 80084488
  {uint32_t ea=c->r[30]+0x00000078u; c->f[23]=c->ps1[23]=RF32(ea);} // 8008448C
  c->f[29]=c->ps1[29]=S(c->f[30]*c->f[26]); // 80084490
  {uint32_t ea=c->r[30]+0x00000080u; c->f[24]=c->ps1[24]=RF32(ea);} // 80084494
  c->f[28]=c->ps1[28]=S(c->f[11]*c->f[26]); // 80084498
  {uint32_t ea=c->r[30]+0x00000084u; c->f[25]=c->ps1[25]=RF32(ea);} // 8008449C
  c->f[27]=c->ps1[27]=S(c->f[7]*c->f[26]); // 800844A0
  c->f[26]=c->ps1[26]=S(c->f[3]*c->f[26]); // 800844A4
  c->f[29]=c->ps1[29]=S(std::fma(c->f[31],c->f[23],c->f[29])); // 800844A8
  c->f[28]=c->ps1[28]=S(std::fma(c->f[10],c->f[23],c->f[28])); // 800844AC
  c->f[27]=c->ps1[27]=S(std::fma(c->f[6],c->f[23],c->f[27])); // 800844B0
  c->f[26]=c->ps1[26]=S(std::fma(c->f[2],c->f[23],c->f[26])); // 800844B4
  c->f[29]=c->ps1[29]=S(std::fma(c->f[13],c->f[24],c->f[29])); // 800844B8
  c->f[28]=c->ps1[28]=S(std::fma(c->f[9],c->f[24],c->f[28])); // 800844BC
  c->f[27]=c->ps1[27]=S(std::fma(c->f[5],c->f[24],c->f[27])); // 800844C0
  c->f[26]=c->ps1[26]=S(std::fma(c->f[1],c->f[24],c->f[26])); // 800844C4
  c->f[29]=c->ps1[29]=S(std::fma(c->f[12],c->f[25],c->f[29])); // 800844C8
  c->f[28]=c->ps1[28]=S(std::fma(c->f[8],c->f[25],c->f[28])); // 800844CC
  c->f[27]=c->ps1[27]=S(std::fma(c->f[4],c->f[25],c->f[27])); // 800844D0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[29]);} // 800844D4
  c->f[26]=c->ps1[26]=S(std::fma(c->f[0],c->f[25],c->f[26])); // 800844D8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[28]);} // 800844DC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[27]);} // 800844E0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[26]);} // 800844E4
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 800844E8
  {uint32_t ea=c->r[30]+0x00000088u; c->f[28]=c->ps1[28]=RF32(ea);} // 800844EC
  c->f[27]=c->ps1[27]=S(c->f[30]*c->f[26]); // 800844F0
  {uint32_t ea=c->r[30]+0x00000090u; c->f[29]=c->ps1[29]=RF32(ea);} // 800844F4
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[26]); // 800844F8
  {uint32_t ea=c->r[30]+0x00000094u; c->f[30]=c->ps1[30]=RF32(ea);} // 800844FC
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[26]); // 80084500
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[26]); // 80084504
  c->f[31]=c->ps1[31]=S(std::fma(c->f[31],c->f[28],c->f[27])); // 80084508
  c->f[10]=c->ps1[10]=S(std::fma(c->f[10],c->f[28],c->f[11])); // 8008450C
  c->f[6]=c->ps1[6]=S(std::fma(c->f[6],c->f[28],c->f[7])); // 80084510
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[28],c->f[3])); // 80084514
  c->f[11]=c->ps1[11]=S(std::fma(c->f[13],c->f[29],c->f[31])); // 80084518
  c->f[3]=c->ps1[3]=S(std::fma(c->f[5],c->f[29],c->f[6])); // 8008451C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[29],c->f[2])); // 80084520
  c->f[7]=c->ps1[7]=S(std::fma(c->f[9],c->f[29],c->f[10])); // 80084524
  c->f[6]=c->ps1[6]=S(std::fma(c->f[12],c->f[30],c->f[11])); // 80084528
  c->f[2]=c->ps1[2]=S(std::fma(c->f[4],c->f[30],c->f[3])); // 8008452C
  c->f[5]=c->ps1[5]=S(std::fma(c->f[8],c->f[30],c->f[7])); // 80084530
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[6]);} // 80084534
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[1])); // 80084538
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[5]);} // 8008453C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 80084540
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80084544
  c->r[29]=R32(c->r[1]+0x00000008u); // 80084548
  c->r[3]=c->r[1]+0x00000078u; // 8008454C
  W32(c->r[1]+0x000000D8u,c->r[29]); // 80084550
  c->r[4]=0u+0x00000000u; // 80084554
  c->r[12]=R32(c->r[1]+0x0000000Cu); // 80084558
  W32(c->r[1]+0x000000DCu,c->r[12]); // 8008455C
  c->r[8]=R32(c->r[1]+0x00000010u); // 80084560
  W32(c->r[1]+0x000000E0u,c->r[8]); // 80084564
  c->r[0]=R32(c->r[1]+0x00000018u); // 80084568
  W32(c->r[1]+0x000000E8u,c->r[0]); // 8008456C
  c->r[30]=R32(c->r[1]+0x0000001Cu); // 80084570
  c->r[31]=R32(c->r[1]+0x00000020u); // 80084574
  c->r[11]=R32(c->r[1]+0x00000028u); // 80084578
  c->r[10]=R32(c->r[1]+0x0000002Cu); // 8008457C
  c->r[9]=R32(c->r[1]+0x00000030u); // 80084580
  c->r[7]=R32(c->r[1]+0x00000038u); // 80084584
  c->r[6]=R32(c->r[1]+0x0000003Cu); // 80084588
  c->r[5]=R32(c->r[1]+0x00000040u); // 8008458C
  W32(c->r[1]+0x000000ECu,c->r[30]); // 80084590
  c->r[29]=R32(c->r[1]+0x00000014u); // 80084594
  W32(c->r[1]+0x000000F0u,c->r[31]); // 80084598
  c->r[12]=R32(c->r[1]+0x00000024u); // 8008459C
  W32(c->r[1]+0x000000F8u,c->r[11]); // 800845A0
  c->r[8]=R32(c->r[1]+0x00000034u); // 800845A4
  W32(c->r[1]+0x000000FCu,c->r[10]); // 800845A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800845AC
  W32(c->r[1]+0x00000100u,c->r[9]); // 800845B0
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[11]=c->ps1[11]=RF32(ea);} // 800845B4
  W32(c->r[1]+0x00000108u,c->r[7]); // 800845B8
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[10]=c->ps1[10]=RF32(ea);} // 800845BC
  W32(c->r[1]+0x0000010Cu,c->r[6]); // 800845C0
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[9]=c->ps1[9]=RF32(ea);} // 800845C4
  W32(c->r[1]+0x00000110u,c->r[5]); // 800845C8
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[8]=c->ps1[8]=RF32(ea);} // 800845CC
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[7]=c->ps1[7]=RF32(ea);} // 800845D0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 800845D4
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[5]=c->ps1[5]=RF32(ea);} // 800845D8
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 800845DC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 800845E0
  {uint32_t ea=c->r[1]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 800845E4
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800845E8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800845EC
  W32(c->r[1]+0x000000E4u,c->r[29]); // 800845F0
  W32(c->r[1]+0x000000F4u,c->r[12]); // 800845F4
  W32(c->r[1]+0x00000104u,c->r[8]); // 800845F8
  W32(c->r[1]+0x00000114u,c->r[0]); // 800845FC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[11]);} // 80084600
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[10]);} // 80084604
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[9]);} // 80084608
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[8]);} // 8008460C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[7]);} // 80084610
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[6]);} // 80084614
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[5]);} // 80084618
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[4]);} // 8008461C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[3]);} // 80084620
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[2]);} // 80084624
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 80084628
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8008462C
  c->lr=0x80084634u; f_800D3710(c); // 80084630
  c->r[3]=c->r[1]+0x00000078u; // 80084634
  c->r[4]=c->r[1]+0x000000A8u; // 80084638
  c->lr=0x80084640u; f_800B80F4(c); // 8008463C
  c->r[3]=c->r[1]+0x000000A8u; // 80084640
  c->r[4]=c->r[1]+0x00000048u; // 80084644
  c->lr=0x8008464Cu; f_800B80A4(c); // 80084648
  c->r[3]=c->r[1]+0x00000048u; // 8008464C
  c->r[4]=0u+0x00000000u; // 80084650
  c->lr=0x80084658u; f_800D378C(c); // 80084654
  c->r[0]=R32(c->r[1]+0x000001C4u); // 80084658
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,31,ea,0,0);} // 8008465C
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[31]=RF64(ea);} // 80084660
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,30,ea,0,0);} // 80084664
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[30]=RF64(ea);} // 80084668
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,29,ea,0,0);} // 8008466C
  {uint32_t ea=c->r[1]+0x00000190u; c->f[29]=RF64(ea);} // 80084670
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,28,ea,0,0);} // 80084674
  {uint32_t ea=c->r[1]+0x00000180u; c->f[28]=RF64(ea);} // 80084678
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,27,ea,0,0);} // 8008467C
  {uint32_t ea=c->r[1]+0x00000170u; c->f[27]=RF64(ea);} // 80084680
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,26,ea,0,0);} // 80084684
  {uint32_t ea=c->r[1]+0x00000160u; c->f[26]=RF64(ea);} // 80084688
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,25,ea,0,0);} // 8008468C
  {uint32_t ea=c->r[1]+0x00000150u; c->f[25]=RF64(ea);} // 80084690
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,24,ea,0,0);} // 80084694
  {uint32_t ea=c->r[1]+0x00000140u; c->f[24]=RF64(ea);} // 80084698
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,23,ea,0,0);} // 8008469C
  {uint32_t ea=c->r[1]+0x00000130u; c->f[23]=RF64(ea);} // 800846A0
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 800846A4
  c->r[30]=R32(c->r[1]+0x00000128u); // 800846A8
  c->r[29]=R32(c->r[1]+0x00000124u); // 800846AC
  c->lr=c->r[0]; // 800846B0
  c->r[1]=c->r[1]+0x000001C0u; // 800846B4
  return; // 800846B8
}

// SetupTexture__11WiiGraphicsFP7Texturei
void f_800846BC(Ctx* __restrict c) {
  trace_call(0x800846BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800846BC
  c->r[0]=c->lr; // 800846C0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800846C4
  c->r[0]=0u+0x43300000u; // 800846C8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800846CC
  W32(c->r[1]+0x00000048u,c->r[30]); // 800846D0
  c->r[30]=c->r[4]|c->r[4]; // 800846D4
  c->r[3]=c->r[30]|c->r[30]; // 800846D8
  W32(c->r[1]+0x00000044u,c->r[29]); // 800846DC
  c->r[29]=c->r[5]|c->r[5]; // 800846E0
  c->r[12]=R32(c->r[30]+0x00000000u); // 800846E4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800846E8
  c->r[12]=R32(c->r[12]+0x00000040u); // 800846EC
  W32(c->r[1]+0x00000030u,c->r[0]); // 800846F0
  c->ctr=c->r[12]; // 800846F4
  if (true) { c->lr=0x800846FCu; dispatch(c,c->ctr); } // 800846F8
  cmps(c,0,(int32_t)c->r[3],0); // 800846FC
  if (crb(c,2)) { goto L_80084858; } // 80084700
  c->r[12]=R32(c->r[30]+0x00000000u); // 80084704
  c->r[3]=c->r[30]|c->r[30]; // 80084708
  c->r[12]=R32(c->r[12]+0x00000040u); // 8008470C
  c->ctr=c->r[12]; // 80084710
  if (true) { c->lr=0x80084718u; dispatch(c,c->ctr); } // 80084714
  c->r[30]=c->r[3]|c->r[3]; // 80084718
  c->r[3]=R32(c->r[3]+0x00000060u); // 8008471C
  c->r[4]=0u+0x00000000u; // 80084720
  c->lr=0x80084728u; f_801457BC(c); // 80084724
  c->r[0]=R8(c->r[30]+0x00000058u); // 80084728
  c->r[31]=c->r[3]|c->r[3]; // 8008472C
  c->r[10]=0u+0x00000001u; // 80084730
  cmps(c,0,(int32_t)c->r[0],0); // 80084734
  if (!crb(c,2)) { goto L_80084740; } // 80084738
  c->r[10]=0u+0x00000000u; // 8008473C
L_80084740:;
  c->r[9]=R32(c->r[3]+0x00000000u); // 80084740
  c->r[3]=c->r[1]+0x00000008u; // 80084744
  c->r[4]=R32(c->r[9]+0x00000008u); // 80084748
  c->r[5]=R16(c->r[9]+0x00000002u); // 8008474C
  c->r[6]=R16(c->r[9]+0x00000000u); // 80084750
  c->r[7]=R32(c->r[9]+0x00000004u); // 80084754
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 80084758
  c->r[9]=R32(c->r[9]+0x00000010u); // 8008475C
  c->lr=0x80084764u; f_800D1374(c); // 80084760
  c->r[0]=R32(c->r[30]+0x00000068u); // 80084764
  cmps(c,0,(int32_t)c->r[0],1); // 80084768
  if (!crb(c,2)) { goto L_800847BC; } // 8008476C
  c->r[7]=R32(c->r[31]+0x00000000u); // 80084770
  c->r[3]=c->r[1]+0x00000008u; // 80084774
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=RF64(ea);} // 80084778
  c->r[6]=0u+0x00000000u; // 8008477C
  c->r[4]=R8(c->r[7]+0x00000021u); // 80084780
  c->r[8]=0u+0x00000000u; // 80084784
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80084788
  c->r[0]=R8(c->r[7]+0x00000022u); // 8008478C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80084790
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80084794
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80084798
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008479C
  c->r[4]=R32(c->r[7]+0x00000014u); // 800847A0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800847A4
  c->r[5]=R32(c->r[7]+0x00000018u); // 800847A8
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800847AC
  c->r[7]=R8(c->r[7]+0x00000020u); // 800847B0
  c->lr=0x800847B8u; f_800D15C8(c); // 800847B4
  goto L_80084810; // 800847B8
L_800847BC:;
  cmps(c,0,(int32_t)c->r[0],4); // 800847BC
  c->r[8]=0u+0x00000001u; // 800847C0
  if (!crb(c,2)) { goto L_800847CC; } // 800847C4
  c->r[8]=0u+0x00000002u; // 800847C8
L_800847CC:;
  c->r[9]=R32(c->r[31]+0x00000000u); // 800847CC
  c->r[3]=c->r[1]+0x00000008u; // 800847D0
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=RF64(ea);} // 800847D4
  c->r[6]=0u+0x00000001u; // 800847D8
  c->r[4]=R8(c->r[9]+0x00000021u); // 800847DC
  c->r[7]=0u+0x00000001u; // 800847E0
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800847E4
  c->r[0]=R8(c->r[9]+0x00000022u); // 800847E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800847EC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800847F0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800847F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800847F8
  c->r[4]=R32(c->r[9]+0x00000014u); // 800847FC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 80084800
  c->r[5]=R32(c->r[9]+0x00000018u); // 80084804
  {uint32_t ea=c->r[9]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80084808
  c->lr=0x80084810u; f_800D15C8(c); // 8008480C
L_80084810:;
  cmps(c,0,(int32_t)c->r[29],0); // 80084810
  if (crb(c,2)) { goto L_8008482C; } // 80084814
  cmps(c,0,(int32_t)c->r[29],1); // 80084818
  if (crb(c,2)) { goto L_8008483C; } // 8008481C
  cmps(c,0,(int32_t)c->r[29],2); // 80084820
  if (crb(c,2)) { goto L_8008484C; } // 80084824
  goto L_80084858; // 80084828
L_8008482C:;
  c->r[3]=c->r[1]+0x00000008u; // 8008482C
  c->r[4]=0u+0x00000000u; // 80084830
  c->lr=0x80084838u; f_800D1994(c); // 80084834
  goto L_80084858; // 80084838
L_8008483C:;
  c->r[3]=c->r[1]+0x00000008u; // 8008483C
  c->r[4]=0u+0x00000001u; // 80084840
  c->lr=0x80084848u; f_800D1994(c); // 80084844
  goto L_80084858; // 80084848
L_8008484C:;
  c->r[3]=c->r[1]+0x00000008u; // 8008484C
  c->r[4]=0u+0x00000002u; // 80084850
  c->lr=0x80084858u; f_800D1994(c); // 80084854
L_80084858:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80084858
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8008485C
  c->r[30]=R32(c->r[1]+0x00000048u); // 80084860
  c->r[29]=R32(c->r[1]+0x00000044u); // 80084864
  c->lr=c->r[0]; // 80084868
  c->r[1]=c->r[1]+0x00000050u; // 8008486C
  return; // 80084870
}

// SetTextureGenSource__11WiiGraphicsF12TexGenSourcei
void f_80084874(Ctx* __restrict c) {
  trace_call(0x80084874u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80084874
  c->r[3]=c->r[3]+c->r[0]; // 80084878
  W32(c->r[3]+0x0000012Cu,c->r[4]); // 8008487C
  return; // 80084880
}

// SetupTEV__11WiiGraphicsF12VertexFormatR8Material
void f_80084884(Ctx* __restrict c) {
  trace_call(0x80084884u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084884
  c->r[0]=c->lr; // 80084888
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8008488C
  c->r[11]=c->r[1]+0x000000A0u; // 80084890
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 80084894
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80084898
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 8008489C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800848A0
  c->lr=0x800848A8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800848A4
  cmps(c,0,(int32_t)c->r[4],0); // 800848A8
  c->r[21]=c->r[3]|c->r[3]; // 800848AC
  c->r[23]=c->r[4]|c->r[4]; // 800848B0
  c->r[22]=c->r[5]|c->r[5]; // 800848B4
  if (!crb(c,2)) { goto L_80084968; } // 800848B8
  c->r[0]=R32(c->r[5]+0x00000000u); // 800848BC
  cmps(c,0,(int32_t)c->r[0],0); // 800848C0
  if (!crb(c,2)) { goto L_80084968; } // 800848C4
  c->r[3]=0u+0x00000000u; // 800848C8
  c->r[4]=0u+0x0000000Fu; // 800848CC
  c->r[5]=0u+0x0000000Fu; // 800848D0
  c->r[6]=0u+0x0000000Fu; // 800848D4
  c->r[7]=0u+0x00000002u; // 800848D8
  c->lr=0x800848E0u; f_800D2690(c); // 800848DC
  c->r[3]=0u+0x00000000u; // 800848E0
  c->r[4]=0u+0x00000000u; // 800848E4
  c->r[5]=0u+0x00000000u; // 800848E8
  c->r[6]=0u+0x00000000u; // 800848EC
  c->r[7]=0u+0x00000001u; // 800848F0
  c->r[8]=0u+0x00000000u; // 800848F4
  c->lr=0x800848FCu; f_800D2710(c); // 800848F8
  c->r[3]=0u+0x00000000u; // 800848FC
  c->r[4]=0u+0x00000007u; // 80084900
  c->r[5]=0u+0x00000007u; // 80084904
  c->r[6]=0u+0x00000007u; // 80084908
  c->r[7]=0u+0x00000001u; // 8008490C
  c->lr=0x80084914u; f_800D26D0(c); // 80084910
  c->r[3]=0u+0x00000000u; // 80084914
  c->r[4]=0u+0x00000000u; // 80084918
  c->r[5]=0u+0x00000000u; // 8008491C
  c->r[6]=0u+0x00000000u; // 80084920
  c->r[7]=0u+0x00000001u; // 80084924
  c->r[8]=0u+0x00000000u; // 80084928
  c->lr=0x80084930u; f_800D2768(c); // 8008492C
  c->r[0]=R32(c->r[2]+0xFFFF8C50u); // 80084930
  c->r[4]=c->r[1]+0x0000001Cu; // 80084934
  W32(c->r[1]+0x00000030u,c->r[0]); // 80084938
  c->r[3]=0u+0x00000001u; // 8008493C
  c->r[6]=R8(c->r[22]+0x00000008u); // 80084940
  c->r[5]=R8(c->r[22]+0x00000009u); // 80084944
  c->r[0]=R8(c->r[22]+0x0000000Au); // 80084948
  W8(c->r[1]+0x00000030u,c->r[6]); // 8008494C
  W8(c->r[1]+0x00000031u,c->r[5]); // 80084950
  W8(c->r[1]+0x00000032u,c->r[0]); // 80084954
  c->r[0]=R32(c->r[1]+0x00000030u); // 80084958
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8008495C
  c->lr=0x80084964u; f_800D27C0(c); // 80084960
  goto L_800851C4; // 80084964
L_80084968:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 80084968
  c->r[31]=0u+0x00000000u; // 8008496C
  c->r[30]=0u+0x00000001u; // 80084970
  c->r[29]=0u+0x00000004u; // 80084974
  cmps(c,0,(int32_t)c->r[4],0); // 80084978
  c->r[28]=0u+0x000000FFu; // 8008497C
  c->r[27]=0u+0x000000FFu; // 80084980
  c->r[26]=0u+0x00000000u; // 80084984
  c->r[25]=0u+0x000000FFu; // 80084988
  if (crb(c,2)) { goto L_800849B0; } // 8008498C
  c->r[3]=c->r[21]|c->r[21]; // 80084990
  c->r[5]=0u+0x00000000u; // 80084994
  c->lr=0x8008499Cu; f_800846BC(c); // 80084998
  c->r[31]=0u+0x00000001u; // 8008499C
  c->r[28]=0u+0x00000000u; // 800849A0
  c->r[27]=0u+0x00000000u; // 800849A4
  c->r[29]=0u+0x00000000u; // 800849A8
  c->r[25]=0u+0x00000004u; // 800849AC
L_800849B0:;
  c->r[3]=0u+0x00000002u; // 800849B0
  c->lr=0x800849B8u; f_800D00DC(c); // 800849B4
  c->r[0]=R8(c->r[22]+0x0000000Eu); // 800849B8
  cmps(c,0,(int32_t)c->r[0],0); // 800849BC
  if (!crb(c,2)) { goto L_800849D0; } // 800849C0
  c->r[0]=R8(c->r[22]+0x00000011u); // 800849C4
  cmps(c,0,(int32_t)c->r[0],0); // 800849C8
  if (crb(c,2)) { goto L_800849D8; } // 800849CC
L_800849D0:;
  c->r[3]=0u+0x00000000u; // 800849D0
  c->lr=0x800849D8u; f_800D00DC(c); // 800849D4
L_800849D8:;
  c->r[0]=rotl(c->r[23],0)&0x00000002u; cr0(c,c->r[0]); // 800849D8
  c->r[24]=0u+0x00000000u; // 800849DC
  if (crb(c,2)) { goto L_80084A08; } // 800849E0
  c->r[0]=R8(c->r[22]+0x0000000Du); // 800849E4
  cmps(c,0,(int32_t)c->r[0],0); // 800849E8
  if (!crb(c,2)) { goto L_80084A08; } // 800849EC
  c->r[0]=R32(c->r[22]+0x00000000u); // 800849F0
  c->r[24]=0u+0x00000001u; // 800849F4
  c->r[25]=0u+0x00000004u; // 800849F8
  cmps(c,0,(int32_t)c->r[0],0); // 800849FC
  if (crb(c,2)) { goto L_80084A08; } // 80084A00
  c->r[29]=0u+0x00000000u; // 80084A04
L_80084A08:;
  c->r[0]=R8(c->r[22]+0x0000000Du); // 80084A08
  cmps(c,0,(int32_t)c->r[0],0); // 80084A0C
  if (crb(c,2)) { goto L_80084A24; } // 80084A10
  c->r[0]=R32(c->r[22]+0x00000000u); // 80084A14
  cmps(c,0,(int32_t)c->r[0],0); // 80084A18
  if (crb(c,2)) { goto L_80084A24; } // 80084A1C
  c->r[29]=0u+0x00000000u; // 80084A20
L_80084A24:;
  c->r[0]=rotl(c->r[23],0)&0x00000001u; cr0(c,c->r[0]); // 80084A24
  if (crb(c,2)) { goto L_80084A44; } // 80084A28
  c->r[0]=R32(c->r[22]+0x00000000u); // 80084A2C
  c->r[25]=0u+0x00000004u; // 80084A30
  c->r[26]=0u+0x00000001u; // 80084A34
  cmps(c,0,(int32_t)c->r[0],0); // 80084A38
  if (crb(c,2)) { goto L_80084A44; } // 80084A3C
  c->r[29]=0u+0x00000000u; // 80084A40
L_80084A44:;
  c->r[0]=R8(c->r[22]+0x00000010u); // 80084A44
  c->r[20]=R32(c->r[21]+0x0000011Cu); // 80084A48
  cmps(c,0,(int32_t)c->r[0],0); // 80084A4C
  if (crb(c,2)) { goto L_80084A58; } // 80084A50
  c->r[20]=0u+0x00000000u; // 80084A54
L_80084A58:;
  c->r[3]=0u+0x00000001u; // 80084A58
  c->lr=0x80084A60u; f_800D11EC(c); // 80084A5C
  c->r[4]=c->r[24]|c->r[24]; // 80084A60
  c->r[6]=c->r[26]|c->r[26]; // 80084A64
  c->r[7]=c->r[20]|c->r[20]; // 80084A68
  c->r[3]=0u+0x00000004u; // 80084A6C
  c->r[5]=0u+0x00000000u; // 80084A70
  c->r[8]=0u+0x00000002u; // 80084A74
  c->r[9]=0u+0x00000001u; // 80084A78
  c->lr=0x80084A80u; f_800D1210(c); // 80084A7C
  c->r[3]=0u+0x00000005u; // 80084A80
  c->r[4]=0u+0x00000000u; // 80084A84
  c->r[5]=0u+0x00000000u; // 80084A88
  c->r[6]=0u+0x00000000u; // 80084A8C
  c->r[7]=0u+0x00000000u; // 80084A90
  c->r[8]=0u+0x00000000u; // 80084A94
  c->r[9]=0u+0x00000002u; // 80084A98
  c->lr=0x80084AA0u; f_800D1210(c); // 80084A9C
  c->r[0]=R32(c->r[2]+0xFFFF8C54u); // 80084AA0
  c->r[4]=c->r[1]+0x00000018u; // 80084AA4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80084AA8
  c->r[3]=0u+0x00000004u; // 80084AAC
  c->r[6]=R8(c->r[21]+0x00000120u); // 80084AB0
  c->r[5]=R8(c->r[21]+0x00000121u); // 80084AB4
  c->r[0]=R8(c->r[21]+0x00000122u); // 80084AB8
  W8(c->r[1]+0x0000002Cu,c->r[6]); // 80084ABC
  W8(c->r[1]+0x0000002Du,c->r[5]); // 80084AC0
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 80084AC4
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80084AC8
  W32(c->r[1]+0x00000018u,c->r[0]); // 80084ACC
  c->lr=0x80084AD4u; f_800D103C(c); // 80084AD0
  c->r[0]=R32(c->r[2]+0xFFFF8C58u); // 80084AD4
  c->r[4]=c->r[1]+0x00000014u; // 80084AD8
  W32(c->r[1]+0x00000028u,c->r[0]); // 80084ADC
  c->r[3]=0u+0x00000004u; // 80084AE0
  c->r[6]=R8(c->r[22]+0x00000008u); // 80084AE4
  c->r[5]=R8(c->r[22]+0x00000009u); // 80084AE8
  c->r[0]=R8(c->r[22]+0x0000000Au); // 80084AEC
  W8(c->r[1]+0x00000028u,c->r[6]); // 80084AF0
  W8(c->r[1]+0x00000029u,c->r[5]); // 80084AF4
  W8(c->r[1]+0x0000002Au,c->r[0]); // 80084AF8
  c->r[0]=R32(c->r[1]+0x00000028u); // 80084AFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80084B00
  c->lr=0x80084B08u; f_800D1114(c); // 80084B04
  c->r[3]=0u+0x00000001u; // 80084B08
  c->lr=0x80084B10u; f_800D31A8(c); // 80084B0C
  c->r[0]=R8(c->r[21]+0x00000125u); // 80084B10
  cmps(c,0,(int32_t)c->r[0],0); // 80084B14
  if (!crb(c,2)) { goto L_80084C20; } // 80084B18
  c->r[0]=R8(c->r[21]+0x0000015Cu); // 80084B1C
  c->r[5]=0u+0x00000001u; // 80084B20
  cmps(c,0,(int32_t)c->r[0],0); // 80084B24
  if (!crb(c,2)) { goto L_80084B30; } // 80084B28
  c->r[5]=0u+0x00000000u; // 80084B2C
L_80084B30:;
  c->r[0]=R8(c->r[21]+0x0000015Du); // 80084B30
  c->r[20]=0u+0x00000001u; // 80084B34
  cmps(c,0,(int32_t)c->r[0],0); // 80084B38
  if (!crb(c,2)) { goto L_80084B44; } // 80084B3C
  c->r[20]=0u+0x00000000u; // 80084B40
L_80084B44:;
  c->r[3]=c->r[20]|c->r[20]; // 80084B44
  c->r[4]=0u+0x00000003u; // 80084B48
  c->lr=0x80084B50u; f_800D31D4(c); // 80084B4C
  c->r[0]=R8(c->r[21]+0x00000124u); // 80084B50
  cmps(c,0,(int32_t)c->r[0],0); // 80084B54
  if (crb(c,2)) { goto L_80084C0C; } // 80084B58
  c->r[0]=R32(c->r[22]+0x00000018u); // 80084B5C
  cmps(c,0,(int32_t)c->r[0],0); // 80084B60
  if (crb(c,2)) { goto L_80084B7C; } // 80084B64
  cmps(c,0,(int32_t)c->r[0],1); // 80084B68
  if (crb(c,2)) { goto L_80084B94; } // 80084B6C
  cmps(c,0,(int32_t)c->r[0],2); // 80084B70
  if (crb(c,2)) { goto L_80084BC4; } // 80084B74
  goto L_80084BF4; // 80084B78
L_80084B7C:;
  c->r[3]=0u+0x00000001u; // 80084B7C
  c->r[4]=0u+0x00000004u; // 80084B80
  c->r[5]=0u+0x00000005u; // 80084B84
  c->r[6]=0u+0x00000005u; // 80084B88
  c->lr=0x80084B90u; f_800D312C(c); // 80084B8C
  goto L_80084C20; // 80084B90
L_80084B94:;
  c->r[3]=0u+0x00000001u; // 80084B94
  c->r[4]=0u+0x00000000u; // 80084B98
  c->r[5]=0u+0x00000002u; // 80084B9C
  c->r[6]=0u+0x00000005u; // 80084BA0
  c->lr=0x80084BA8u; f_800D312C(c); // 80084BA4
  c->r[3]=0u+0x00000000u; // 80084BA8
  c->lr=0x80084BB0u; f_800D31A8(c); // 80084BAC
  c->r[3]=c->r[20]|c->r[20]; // 80084BB0
  c->r[4]=0u+0x00000003u; // 80084BB4
  c->r[5]=0u+0x00000000u; // 80084BB8
  c->lr=0x80084BC0u; f_800D31D4(c); // 80084BBC
  goto L_80084C20; // 80084BC0
L_80084BC4:;
  c->r[3]=0u+0x00000001u; // 80084BC4
  c->r[4]=0u+0x00000001u; // 80084BC8
  c->r[5]=0u+0x00000001u; // 80084BCC
  c->r[6]=0u+0x00000005u; // 80084BD0
  c->lr=0x80084BD8u; f_800D312C(c); // 80084BD4
  c->r[3]=0u+0x00000000u; // 80084BD8
  c->lr=0x80084BE0u; f_800D31A8(c); // 80084BDC
  c->r[3]=c->r[20]|c->r[20]; // 80084BE0
  c->r[4]=0u+0x00000003u; // 80084BE4
  c->r[5]=0u+0x00000000u; // 80084BE8
  c->lr=0x80084BF0u; f_800D31D4(c); // 80084BEC
  goto L_80084C20; // 80084BF0
L_80084BF4:;
  c->r[3]=0u+0x00000001u; // 80084BF4
  c->r[4]=0u+0x00000004u; // 80084BF8
  c->r[5]=0u+0x00000005u; // 80084BFC
  c->r[6]=0u+0x00000005u; // 80084C00
  c->lr=0x80084C08u; f_800D312C(c); // 80084C04
  goto L_80084C20; // 80084C08
L_80084C0C:;
  c->r[3]=0u+0x00000001u; // 80084C0C
  c->r[4]=0u+0x00000001u; // 80084C10
  c->r[5]=0u+0x00000000u; // 80084C14
  c->r[6]=0u+0x00000000u; // 80084C18
  c->lr=0x80084C20u; f_800D312C(c); // 80084C1C
L_80084C20:;
  c->r[4]=R8(c->r[21]+0x00000123u); // 80084C20
  c->r[3]=0u+0x00000006u; // 80084C24
  c->r[5]=0u+0x00000000u; // 80084C28
  c->r[6]=0u+0x00000007u; // 80084C2C
  c->r[7]=0u+0x00000000u; // 80084C30
  c->lr=0x80084C38u; f_800D2A38(c); // 80084C34
  c->r[0]=R8(c->r[21]+0x00000127u); // 80084C38
  cmps(c,0,(int32_t)c->r[0],0); // 80084C3C
  if (!crb(c,2)) { goto L_80084C50; } // 80084C40
  c->r[4]=c->r[29]|c->r[29]; // 80084C44
  c->r[3]=0u+0x00000000u; // 80084C48
  c->lr=0x80084C50u; f_800D25FC(c); // 80084C4C
L_80084C50:;
  c->r[4]=c->r[28]|c->r[28]; // 80084C50
  c->r[5]=c->r[27]|c->r[27]; // 80084C54
  c->r[6]=c->r[25]|c->r[25]; // 80084C58
  c->r[3]=0u+0x00000000u; // 80084C5C
  c->lr=0x80084C64u; f_800D2AFC(c); // 80084C60
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80084C64
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084C68
  fcmp(c,0,c->f[1],c->f[0]); // 80084C6C
  if (!crb(c,2)) { goto L_80084C80; } // 80084C70
  {uint32_t ea=c->r[22]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084C74
  fcmp(c,0,c->f[1],c->f[0]); // 80084C78
  if (crb(c,2)) { goto L_80084CA4; } // 80084C7C
L_80084C80:;
  c->r[3]=c->r[21]+0x000000D8u; // 80084C80
  c->r[4]=0u+0x00000000u; // 80084C84
  c->r[5]=0u+0x00000040u; // 80084C88
  c->lr=0x80084C90u; f_80004688(c); // 80084C8C
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084C90
  {uint32_t ea=c->r[21]+0x000000D8u; WF32(ea,c->f[0]);} // 80084C94
  {uint32_t ea=c->r[21]+0x000000ECu; WF32(ea,c->f[0]);} // 80084C98
  {uint32_t ea=c->r[21]+0x00000100u; WF32(ea,c->f[0]);} // 80084C9C
  {uint32_t ea=c->r[21]+0x00000114u; WF32(ea,c->f[0]);} // 80084CA0
L_80084CA4:;
  {uint32_t ea=c->r[21]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CA4
  c->r[3]=c->r[1]+0x00000038u; // 80084CA8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80084CAC
  c->r[4]=0u+0x0000001Eu; // 80084CB0
  c->r[5]=0u+0x00000000u; // 80084CB4
  {uint32_t ea=c->r[21]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CB8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80084CBC
  {uint32_t ea=c->r[21]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CC0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80084CC4
  {uint32_t ea=c->r[21]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CC8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80084CCC
  {uint32_t ea=c->r[21]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CD0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80084CD4
  {uint32_t ea=c->r[21]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CD8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80084CDC
  {uint32_t ea=c->r[21]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CE0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80084CE4
  {uint32_t ea=c->r[21]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CE8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80084CEC
  {uint32_t ea=c->r[21]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CF0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80084CF4
  {uint32_t ea=c->r[21]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084CF8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80084CFC
  {uint32_t ea=c->r[21]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084D00
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80084D04
  {uint32_t ea=c->r[21]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084D08
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80084D0C
  c->lr=0x80084D14u; f_800D3838(c); // 80084D10
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80084D14
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084D18
  fcmp(c,0,c->f[1],c->f[0]); // 80084D1C
  if (!crb(c,2)) { goto L_80084D30; } // 80084D20
  {uint32_t ea=c->r[22]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084D24
  fcmp(c,0,c->f[1],c->f[0]); // 80084D28
  if (crb(c,2)) { goto L_80084D54; } // 80084D2C
L_80084D30:;
  c->r[3]=c->r[21]+0x000000D8u; // 80084D30
  c->r[4]=0u+0x00000000u; // 80084D34
  c->r[5]=0u+0x00000040u; // 80084D38
  c->lr=0x80084D40u; f_80004688(c); // 80084D3C
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084D40
  {uint32_t ea=c->r[21]+0x000000D8u; WF32(ea,c->f[0]);} // 80084D44
  {uint32_t ea=c->r[21]+0x000000ECu; WF32(ea,c->f[0]);} // 80084D48
  {uint32_t ea=c->r[21]+0x00000100u; WF32(ea,c->f[0]);} // 80084D4C
  {uint32_t ea=c->r[21]+0x00000114u; WF32(ea,c->f[0]);} // 80084D50
L_80084D54:;
  c->r[0]=R32(c->r[21]+0x0000012Cu); // 80084D54
  cmps(c,0,(int32_t)c->r[0],0); // 80084D58
  if (crb(c,2)) { goto L_80084D74; } // 80084D5C
  cmps(c,0,(int32_t)c->r[0],1); // 80084D60
  if (crb(c,2)) { goto L_80084D7C; } // 80084D64
  cmps(c,0,(int32_t)c->r[0],2); // 80084D68
  if (crb(c,2)) { goto L_80084D84; } // 80084D6C
  goto L_80084D88; // 80084D70
L_80084D74:;
  c->r[23]=0u+0x00000000u; // 80084D74
  goto L_80084D88; // 80084D78
L_80084D7C:;
  c->r[23]=0u+0x00000001u; // 80084D7C
  goto L_80084D88; // 80084D80
L_80084D84:;
  c->r[23]=0u+0x00000004u; // 80084D84
L_80084D88:;
  c->r[5]=c->r[23]|c->r[23]; // 80084D88
  c->r[3]=0u+0x00000000u; // 80084D8C
  c->r[4]=0u+0x00000000u; // 80084D90
  c->r[6]=0u+0x0000001Eu; // 80084D94
  c->r[7]=0u+0x00000000u; // 80084D98
  c->r[8]=0u+0x0000007Du; // 80084D9C
  c->lr=0x80084DA4u; f_800CF1FC(c); // 80084DA0
  c->r[3]=0u+0x00000001u; // 80084DA4
  c->r[4]=0u+0x00000000u; // 80084DA8
  c->r[5]=0u+0x00000005u; // 80084DAC
  c->r[6]=0u+0x0000003Cu; // 80084DB0
  c->r[7]=0u+0x00000000u; // 80084DB4
  c->r[8]=0u+0x0000007Du; // 80084DB8
  c->lr=0x80084DC0u; f_800CF1FC(c); // 80084DBC
  c->r[3]=0u+0x00000002u; // 80084DC0
  c->r[4]=0u+0x00000000u; // 80084DC4
  c->r[5]=0u+0x00000006u; // 80084DC8
  c->r[6]=0u+0x0000003Cu; // 80084DCC
  c->r[7]=0u+0x00000000u; // 80084DD0
  c->r[8]=0u+0x0000007Du; // 80084DD4
  c->lr=0x80084DDCu; f_800CF1FC(c); // 80084DD8
  c->r[4]=c->r[21]+0x00010000u; // 80084DDC
  c->r[3]=0u+0x00000001u; // 80084DE0
  c->r[4]=R8(c->r[4]+0xFFFF81B8u); // 80084DE4
  c->lr=0x80084DECu; f_800D330C(c); // 80084DE8
  c->r[4]=R32(c->r[22]+0x00000004u); // 80084DEC
  cmps(c,0,(int32_t)c->r[4],0); // 80084DF0
  if (crb(c,2)) { goto L_80084E2C; } // 80084DF4
  c->r[3]=c->r[21]|c->r[21]; // 80084DF8
  c->r[5]=0u+0x00000001u; // 80084DFC
  c->lr=0x80084E04u; f_800846BC(c); // 80084E00
  c->r[3]=0u+0x00000001u; // 80084E04
  c->r[4]=0u+0x00000001u; // 80084E08
  c->r[5]=0u+0x00000001u; // 80084E0C
  c->r[6]=0u+0x00000004u; // 80084E10
  c->lr=0x80084E18u; f_800D2AFC(c); // 80084E14
  c->r[3]=0u+0x00000001u; // 80084E18
  c->r[4]=0u+0x00000000u; // 80084E1C
  c->lr=0x80084E24u; f_800D25FC(c); // 80084E20
  c->r[31]=0u+0x00000002u; // 80084E24
  c->r[30]=0u+0x00000002u; // 80084E28
L_80084E2C:;
  c->r[0]=R32(c->r[22]+0x00000014u); // 80084E2C
  cmps(c,0,(int32_t)c->r[0],0); // 80084E30
  if (crb(c,2)) { goto L_80085010; } // 80084E34
  c->r[3]=0u+0x00000000u; // 80084E38
  c->r[4]=0u+0x00000000u; // 80084E3C
  c->lr=0x80084E44u; f_800D330C(c); // 80084E40
  c->r[0]=R8(c->r[22]+0x0000000Eu); // 80084E44
  cmps(c,0,(int32_t)c->r[0],0); // 80084E48
  if (!crb(c,2)) { goto L_80084E80; } // 80084E4C
  c->r[3]=0u+0x00000006u; // 80084E50
  c->r[4]=0u+0x00000000u; // 80084E54
  c->r[5]=0u+0x00000000u; // 80084E58
  c->r[6]=0u+0x00000007u; // 80084E5C
  c->r[7]=0u+0x00000000u; // 80084E60
  c->lr=0x80084E68u; f_800D2A38(c); // 80084E64
  c->r[3]=0u+0x00000001u; // 80084E68
  c->r[4]=0u+0x00000001u; // 80084E6C
  c->r[5]=0u+0x00000000u; // 80084E70
  c->r[6]=0u+0x00000000u; // 80084E74
  c->lr=0x80084E7Cu; f_800D312C(c); // 80084E78
  goto L_80084E98; // 80084E7C
L_80084E80:;
  c->r[3]=0u+0x00000006u; // 80084E80
  c->r[4]=0u+0x00000001u; // 80084E84
  c->r[5]=0u+0x00000000u; // 80084E88
  c->r[6]=0u+0x00000007u; // 80084E8C
  c->r[7]=0u+0x00000000u; // 80084E90
  c->lr=0x80084E98u; f_800D2A38(c); // 80084E94
L_80084E98:;
  c->r[0]=R32(c->r[22]+0x00000004u); // 80084E98
  cmps(c,0,(int32_t)c->r[0],0); // 80084E9C
  if (crb(c,2)) { goto L_80084F5C; } // 80084EA0
  c->r[4]=R32(c->r[22]+0x00000014u); // 80084EA4
  c->r[3]=c->r[21]|c->r[21]; // 80084EA8
  c->r[5]=0u+0x00000002u; // 80084EAC
  c->lr=0x80084EB4u; f_800846BC(c); // 80084EB0
  c->r[3]=0u+0x00000002u; // 80084EB4
  c->r[4]=0u+0x00000002u; // 80084EB8
  c->r[5]=0u+0x00000002u; // 80084EBC
  c->r[6]=0u+0x00000004u; // 80084EC0
  c->lr=0x80084EC8u; f_800D2AFC(c); // 80084EC4
  c->r[5]=R32(c->r[22]+0x00000024u); // 80084EC8
  c->r[3]=0u+0x00000002u; // 80084ECC
  c->r[4]=0u+0x00000001u; // 80084ED0
  c->r[6]=0u+0x0000003Cu; // 80084ED4
  c->r[5]=c->r[5]+0x00000004u; // 80084ED8
  c->r[7]=0u+0x00000000u; // 80084EDC
  c->r[8]=0u+0x0000007Du; // 80084EE0
  c->lr=0x80084EE8u; f_800CF1FC(c); // 80084EE4
  c->r[31]=0u+0x00000003u; // 80084EE8
  c->r[30]=0u+0x00000003u; // 80084EEC
  c->r[3]=0u+0x00000002u; // 80084EF0
  c->r[4]=0u+0x00000000u; // 80084EF4
  c->r[5]=0u+0x0000000Fu; // 80084EF8
  c->r[6]=0u+0x0000000Fu; // 80084EFC
  c->r[7]=0u+0x00000008u; // 80084F00
  c->lr=0x80084F08u; f_800D2690(c); // 80084F04
  c->r[3]=0u+0x00000002u; // 80084F08
  c->r[4]=0u+0x00000000u; // 80084F0C
  c->r[5]=0u+0x00000000u; // 80084F10
  c->r[6]=0u+0x00000000u; // 80084F14
  c->r[7]=0u+0x00000001u; // 80084F18
  c->r[8]=0u+0x00000000u; // 80084F1C
  c->lr=0x80084F24u; f_800D2710(c); // 80084F20
  c->r[3]=0u+0x00000002u; // 80084F24
  c->r[4]=0u+0x00000007u; // 80084F28
  c->r[5]=0u+0x00000007u; // 80084F2C
  c->r[6]=0u+0x00000007u; // 80084F30
  c->r[7]=0u+0x00000004u; // 80084F34
  c->lr=0x80084F3Cu; f_800D26D0(c); // 80084F38
  c->r[3]=0u+0x00000002u; // 80084F3C
  c->r[4]=0u+0x00000000u; // 80084F40
  c->r[5]=0u+0x00000000u; // 80084F44
  c->r[6]=0u+0x00000000u; // 80084F48
  c->r[7]=0u+0x00000001u; // 80084F4C
  c->r[8]=0u+0x00000000u; // 80084F50
  c->lr=0x80084F58u; f_800D2768(c); // 80084F54
  goto L_80085010; // 80084F58
L_80084F5C:;
  c->r[4]=R32(c->r[22]+0x00000014u); // 80084F5C
  c->r[3]=c->r[21]|c->r[21]; // 80084F60
  c->r[5]=0u+0x00000001u; // 80084F64
  c->lr=0x80084F6Cu; f_800846BC(c); // 80084F68
  c->r[3]=0u+0x00000001u; // 80084F6C
  c->r[4]=0u+0x00000001u; // 80084F70
  c->r[5]=0u+0x00000001u; // 80084F74
  c->r[6]=0u+0x00000004u; // 80084F78
  c->lr=0x80084F80u; f_800D2AFC(c); // 80084F7C
  c->r[5]=R32(c->r[22]+0x00000024u); // 80084F80
  c->r[3]=0u+0x00000001u; // 80084F84
  c->r[4]=0u+0x00000001u; // 80084F88
  c->r[6]=0u+0x0000003Cu; // 80084F8C
  c->r[5]=c->r[5]+0x00000004u; // 80084F90
  c->r[7]=0u+0x00000000u; // 80084F94
  c->r[8]=0u+0x0000007Du; // 80084F98
  c->lr=0x80084FA0u; f_800CF1FC(c); // 80084F9C
  c->r[31]=0u+0x00000002u; // 80084FA0
  c->r[30]=0u+0x00000002u; // 80084FA4
  c->r[3]=0u+0x00000001u; // 80084FA8
  c->r[4]=0u+0x00000000u; // 80084FAC
  c->r[5]=0u+0x0000000Fu; // 80084FB0
  c->r[6]=0u+0x0000000Fu; // 80084FB4
  c->r[7]=0u+0x00000008u; // 80084FB8
  c->lr=0x80084FC0u; f_800D2690(c); // 80084FBC
  c->r[3]=0u+0x00000001u; // 80084FC0
  c->r[4]=0u+0x00000000u; // 80084FC4
  c->r[5]=0u+0x00000000u; // 80084FC8
  c->r[6]=0u+0x00000000u; // 80084FCC
  c->r[7]=0u+0x00000001u; // 80084FD0
  c->r[8]=0u+0x00000000u; // 80084FD4
  c->lr=0x80084FDCu; f_800D2710(c); // 80084FD8
  c->r[3]=0u+0x00000001u; // 80084FDC
  c->r[4]=0u+0x00000007u; // 80084FE0
  c->r[5]=0u+0x00000007u; // 80084FE4
  c->r[6]=0u+0x00000007u; // 80084FE8
  c->r[7]=0u+0x00000004u; // 80084FEC
  c->lr=0x80084FF4u; f_800D26D0(c); // 80084FF0
  c->r[3]=0u+0x00000001u; // 80084FF4
  c->r[4]=0u+0x00000000u; // 80084FF8
  c->r[5]=0u+0x00000000u; // 80084FFC
  c->r[6]=0u+0x00000000u; // 80085000
  c->r[7]=0u+0x00000001u; // 80085004
  c->r[8]=0u+0x00000000u; // 80085008
  c->lr=0x80085010u; f_800D2768(c); // 8008500C
L_80085010:;
  c->r[3]=c->r[31]|c->r[31]; // 80085010
  c->lr=0x80085018u; f_800CF424(c); // 80085014
  c->r[3]=c->r[30]|c->r[30]; // 80085018
  c->lr=0x80085020u; f_800D2C58(c); // 8008501C
  c->r[3]=c->r[21]+0x00010000u; // 80085020
  c->r[4]=0u+0x00000000u; // 80085024
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80085028
  c->lr=0x80085030u; f_801F9AF0(c); // 8008502C
  c->r[0]=R8(c->r[21]+0x0000014Cu); // 80085030
  c->r[22]=c->r[3]|c->r[3]; // 80085034
  cmps(c,0,(int32_t)c->r[0],0); // 80085038
  if (crb(c,2)) { goto L_8008514C; } // 8008503C
  c->r[0]=R32(c->r[2]+0xFFFF8C5Cu); // 80085040
  c->r[4]=c->r[1]+0x00000010u; // 80085044
  W32(c->r[1]+0x00000024u,c->r[0]); // 80085048
  c->r[3]=0u+0x00000004u; // 8008504C
  c->r[6]=R8(c->r[21]+0x00000158u); // 80085050
  c->r[5]=R8(c->r[21]+0x00000159u); // 80085054
  c->r[0]=R8(c->r[21]+0x0000015Au); // 80085058
  W8(c->r[1]+0x00000024u,c->r[6]); // 8008505C
  {uint32_t ea=c->r[2]+0xFFFF8C64u; c->f[3]=c->ps1[3]=RF32(ea);} // 80085060
  W8(c->r[1]+0x00000025u,c->r[5]); // 80085064
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[4]=c->ps1[4]=RF32(ea);} // 80085068
  W8(c->r[1]+0x00000026u,c->r[0]); // 8008506C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085070
  W32(c->r[1]+0x00000010u,c->r[0]); // 80085074
  {uint32_t ea=c->r[21]+0x00000150u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085078
  {uint32_t ea=c->r[21]+0x00000154u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008507C
  c->lr=0x80085084u; f_800D2C7C(c); // 80085080
  cmps(c,0,(int32_t)c->r[22],0); // 80085084
  if (!crb(c,2)) { goto L_800850A8; } // 80085088
  c->r[3]=0u+0x80260000u; // 8008508C
  c->r[5]=0u+0x80260000u; // 80085090
  c->r[3]=c->r[3]+0x00004550u; // 80085094
  c->r[4]=0u+0x00000041u; // 80085098
  c->r[5]=c->r[5]+0x00004530u; // 8008509C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800850A0
  c->lr=0x800850A8u; f_8016AB60(c); // 800850A4
L_800850A8:;
  cmps(c,0,(int32_t)c->r[22],0); // 800850A8
  if (crb(c,2)) { goto L_800850B8; } // 800850AC
  c->r[0]=0u+0x00000004u; // 800850B0
  W32(c->r[22]+0x00000000u,c->r[0]); // 800850B4
L_800850B8:;
  cmps(c,0,(int32_t)c->r[22],0); // 800850B8
  {uint32_t ea=c->r[21]+0x00000154u; c->f[30]=c->ps1[30]=RF32(ea);} // 800850BC
  {uint32_t ea=c->r[21]+0x00000150u; c->f[31]=c->ps1[31]=RF32(ea);} // 800850C0
  if (!crb(c,2)) { goto L_800850E4; } // 800850C4
  c->r[3]=0u+0x80260000u; // 800850C8
  c->r[5]=0u+0x80260000u; // 800850CC
  c->r[3]=c->r[3]+0x00004580u; // 800850D0
  c->r[4]=0u+0x0000004Bu; // 800850D4
  c->r[5]=c->r[5]+0x00004560u; // 800850D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800850DC
  c->lr=0x800850E4u; f_8016AB60(c); // 800850E0
L_800850E4:;
  cmps(c,0,(int32_t)c->r[22],0); // 800850E4
  if (crb(c,2)) { goto L_800850F4; } // 800850E8
  {uint32_t ea=c->r[22]+0x00000004u; WF32(ea,c->f[31]);} // 800850EC
  {uint32_t ea=c->r[22]+0x00000008u; WF32(ea,c->f[30]);} // 800850F0
L_800850F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800850F4
  cmps(c,0,(int32_t)c->r[22],0); // 800850F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800850FC
  if (!crb(c,2)) { goto L_80085120; } // 80085100
  c->r[3]=0u+0x80260000u; // 80085104
  c->r[5]=0u+0x80260000u; // 80085108
  c->r[3]=c->r[3]+0x000045B0u; // 8008510C
  c->r[4]=0u+0x00000063u; // 80085110
  c->r[5]=c->r[5]+0x00004590u; // 80085114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80085118
  c->lr=0x80085120u; f_8016AB60(c); // 8008511C
L_80085120:;
  cmps(c,0,(int32_t)c->r[22],0); // 80085120
  if (crb(c,2)) { goto L_800851C4; } // 80085124
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80085128
  W8(c->r[22]+0x00000014u,c->r[0]); // 8008512C
  c->r[0]=R8(c->r[1]+0x0000000Du); // 80085130
  W8(c->r[22]+0x00000015u,c->r[0]); // 80085134
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 80085138
  W8(c->r[22]+0x00000016u,c->r[0]); // 8008513C
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 80085140
  W8(c->r[22]+0x00000017u,c->r[0]); // 80085144
  goto L_800851C4; // 80085148
L_8008514C:;
  c->r[0]=R32(c->r[2]+0xFFFF8C60u); // 8008514C
  c->r[4]=c->r[1]+0x00000008u; // 80085150
  W32(c->r[1]+0x00000020u,c->r[0]); // 80085154
  c->r[3]=0u+0x00000000u; // 80085158
  c->r[6]=R8(c->r[21]+0x00000158u); // 8008515C
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085160
  c->r[5]=R8(c->r[21]+0x00000159u); // 80085164
  c->r[0]=R8(c->r[21]+0x0000015Au); // 80085168
  c->f[2]=c->f[1]; // 8008516C
  W8(c->r[1]+0x00000020u,c->r[6]); // 80085170
  c->f[3]=c->f[1]; // 80085174
  c->f[4]=c->f[1]; // 80085178
  W8(c->r[1]+0x00000021u,c->r[5]); // 8008517C
  W8(c->r[1]+0x00000022u,c->r[0]); // 80085180
  c->r[0]=R32(c->r[1]+0x00000020u); // 80085184
  W32(c->r[1]+0x00000008u,c->r[0]); // 80085188
  c->lr=0x80085190u; f_800D2C7C(c); // 8008518C
  cmps(c,0,(int32_t)c->r[22],0); // 80085190
  if (!crb(c,2)) { goto L_800851B4; } // 80085194
  c->r[3]=0u+0x80260000u; // 80085198
  c->r[5]=0u+0x80260000u; // 8008519C
  c->r[3]=c->r[3]+0x00004550u; // 800851A0
  c->r[4]=0u+0x00000041u; // 800851A4
  c->r[5]=c->r[5]+0x00004530u; // 800851A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800851AC
  c->lr=0x800851B4u; f_8016AB60(c); // 800851B0
L_800851B4:;
  cmps(c,0,(int32_t)c->r[22],0); // 800851B4
  if (crb(c,2)) { goto L_800851C4; } // 800851B8
  c->r[0]=0u+0x00000000u; // 800851BC
  W32(c->r[22]+0x00000000u,c->r[0]); // 800851C0
L_800851C4:;
  c->r[11]=c->r[1]+0x000000A0u; // 800851C4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800851C8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800851CC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800851D0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800851D4
  c->lr=0x800851DCu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800851D8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800851DC
  c->lr=c->r[0]; // 800851E0
  c->r[1]=c->r[1]+0x000000C0u; // 800851E4
  return; // 800851E8
}

// SetupVertexFormat__11WiiGraphicsF12VertexFormatb
void f_800851EC(Ctx* __restrict c) {
  trace_call(0x800851ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800851EC
  c->r[0]=c->lr; // 800851F0
  cmps(c,0,(int32_t)c->r[5],0); // 800851F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800851F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800851FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80085200
  c->r[30]=0u+0x00000003u; // 80085204
  W32(c->r[1]+0x00000014u,c->r[29]); // 80085208
  c->r[29]=c->r[4]|c->r[4]; // 8008520C
  if (crb(c,2)) { goto L_80085218; } // 80085210
  c->r[30]=0u+0x00000001u; // 80085214
L_80085218:;
  c->lr=0x8008521Cu; f_800CEB28(c); // 80085218
  c->r[4]=c->r[30]|c->r[30]; // 8008521C
  c->r[3]=0u+0x00000009u; // 80085220
  c->lr=0x80085228u; f_800CE534(c); // 80085224
  c->r[3]=0u+0x00000000u; // 80085228
  c->r[4]=0u+0x00000009u; // 8008522C
  c->r[5]=0u+0x00000001u; // 80085230
  c->r[6]=0u+0x00000004u; // 80085234
  c->r[7]=0u+0x00000000u; // 80085238
  c->lr=0x80085240u; f_800CEB5C(c); // 8008523C
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 80085240
  c->r[31]=0u+0x0000000Cu; // 80085244
  if (crb(c,2)) { goto L_80085274; } // 80085248
  c->r[4]=c->r[30]|c->r[30]; // 8008524C
  c->r[3]=0u+0x0000000Au; // 80085250
  c->lr=0x80085258u; f_800CE534(c); // 80085254
  c->r[3]=0u+0x00000000u; // 80085258
  c->r[4]=0u+0x0000000Au; // 8008525C
  c->r[5]=0u+0x00000000u; // 80085260
  c->r[6]=0u+0x00000004u; // 80085264
  c->r[7]=0u+0x00000000u; // 80085268
  c->lr=0x80085270u; f_800CEB5C(c); // 8008526C
  c->r[31]=0u+0x00000018u; // 80085270
L_80085274:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80085274
  if (crb(c,2)) { goto L_800852A4; } // 80085278
  c->r[4]=c->r[30]|c->r[30]; // 8008527C
  c->r[3]=0u+0x0000000Bu; // 80085280
  c->lr=0x80085288u; f_800CE534(c); // 80085284
  c->r[3]=0u+0x00000000u; // 80085288
  c->r[4]=0u+0x0000000Bu; // 8008528C
  c->r[5]=0u+0x00000001u; // 80085290
  c->r[6]=0u+0x00000005u; // 80085294
  c->r[7]=0u+0x00000000u; // 80085298
  c->lr=0x800852A0u; f_800CEB5C(c); // 8008529C
  c->r[31]=c->r[31]+0x00000004u; // 800852A0
L_800852A4:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 800852A4
  if (crb(c,2)) { goto L_800852D4; } // 800852A8
  c->r[4]=c->r[30]|c->r[30]; // 800852AC
  c->r[3]=0u+0x0000000Du; // 800852B0
  c->lr=0x800852B8u; f_800CE534(c); // 800852B4
  c->r[3]=0u+0x00000000u; // 800852B8
  c->r[4]=0u+0x0000000Du; // 800852BC
  c->r[5]=0u+0x00000001u; // 800852C0
  c->r[6]=0u+0x00000004u; // 800852C4
  c->r[7]=0u+0x0000000Eu; // 800852C8
  c->lr=0x800852D0u; f_800CEB5C(c); // 800852CC
  c->r[31]=c->r[31]+0x00000008u; // 800852D0
L_800852D4:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 800852D4
  if (crb(c,2)) { goto L_80085304; } // 800852D8
  c->r[4]=c->r[30]|c->r[30]; // 800852DC
  c->r[3]=0u+0x0000000Eu; // 800852E0
  c->lr=0x800852E8u; f_800CE534(c); // 800852E4
  c->r[3]=0u+0x00000000u; // 800852E8
  c->r[4]=0u+0x0000000Eu; // 800852EC
  c->r[5]=0u+0x00000001u; // 800852F0
  c->r[6]=0u+0x00000004u; // 800852F4
  c->r[7]=0u+0x0000000Eu; // 800852F8
  c->lr=0x80085300u; f_800CEB5C(c); // 800852FC
  c->r[31]=c->r[31]+0x00000008u; // 80085300
L_80085304:;
  c->r[3]=c->r[31]|c->r[31]; // 80085304
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80085308
  c->r[30]=R32(c->r[1]+0x00000018u); // 8008530C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80085310
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085314
  c->lr=c->r[0]; // 80085318
  c->r[1]=c->r[1]+0x00000020u; // 8008531C
  return; // 80085320
}

// RenderTriangles__11WiiGraphicsFiPv12VertexFormatR8Material
void f_80085324(Ctx* __restrict c) {
  trace_call(0x80085324u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085324
  c->r[0]=c->lr; // 80085328
  W32(c->r[1]+0x000001A4u,c->r[0]); // 8008532C
  c->r[11]=c->r[1]+0x000001A0u; // 80085330
  c->lr=0x80085338u; f_800D49E0(c); // 80085334
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 80085338
  c->r[25]=c->r[4]|c->r[4]; // 8008533C
  W32(c->r[1]+0x00000018u,c->r[3]); // 80085340
  c->r[26]=c->r[5]|c->r[5]; // 80085344
  cmps(c,0,(int32_t)c->r[0],0); // 80085348
  c->r[16]=c->r[6]|c->r[6]; // 8008534C
  c->r[27]=c->r[7]|c->r[7]; // 80085350
  if (crb(c,2)) { goto L_80085644; } // 80085354
  c->r[0]=R8(c->r[3]+0x00000126u); // 80085358
  cmps(c,0,(int32_t)c->r[0],0); // 8008535C
  if (crb(c,2)) { goto L_80085644; } // 80085360
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80085364
  c->r[3]=0u+0x000000FFu; // 80085368
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008536C
  cmps(c,0,(int32_t)c->r[0],0); // 80085370
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80085374
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 80085378
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 8008537C
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 80085380
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 80085384
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 80085388
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8008538C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80085390
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 80085394
  W8(c->r[1]+0x00000090u,c->r[3]); // 80085398
  W8(c->r[1]+0x00000091u,c->r[3]); // 8008539C
  W8(c->r[1]+0x00000092u,c->r[3]); // 800853A0
  W8(c->r[1]+0x00000093u,c->r[3]); // 800853A4
  W8(c->r[1]+0x00000094u,c->r[3]); // 800853A8
  W8(c->r[1]+0x00000095u,c->r[3]); // 800853AC
  W8(c->r[1]+0x00000096u,c->r[3]); // 800853B0
  W8(c->r[1]+0x00000097u,c->r[3]); // 800853B4
  W8(c->r[1]+0x00000098u,c->r[3]); // 800853B8
  W8(c->r[1]+0x00000099u,c->r[3]); // 800853BC
  W8(c->r[1]+0x0000009Au,c->r[3]); // 800853C0
  W8(c->r[1]+0x0000009Bu,c->r[3]); // 800853C4
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800853C8
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800853CC
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 800853D0
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 800853D4
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 800853D8
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 800853DC
  if (!crb(c,2)) { goto L_80085400; } // 800853E0
  c->r[3]=0u+0x00010000u; // 800853E4
  c->r[3]=c->r[3]+0xFFFF81E8u; // 800853E8
  c->lr=0x800853F0u; f_8008DC84(c); // 800853EC
  cmps(c,0,(int32_t)c->r[3],0); // 800853F0
  if (crb(c,2)) { goto L_800853FC; } // 800853F4
  c->lr=0x800853FCu; f_80083910(c); // 800853F8
L_800853FC:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800853FC
L_80085400:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 80085400
  c->r[4]=c->r[16]|c->r[16]; // 80085404
  c->r[12]=R32(c->r[3]+0x00000000u); // 80085408
  c->r[12]=R32(c->r[12]+0x00000050u); // 8008540C
  c->ctr=c->r[12]; // 80085410
  if (true) { c->lr=0x80085418u; dispatch(c,c->ctr); } // 80085414
  c->r[0]=rotl(c->r[16],0)&0x00000002u; // 80085418
  W32(c->r[1]+0x00000130u,c->r[0]); // 8008541C
  c->r[0]=rotl(c->r[16],0)&0x00000001u; // 80085420
  c->r[29]=0u+0x00000000u; // 80085424
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 80085428
  c->r[0]=rotl(c->r[16],0)&0x00000004u; // 8008542C
  c->r[28]=0u+0x00000000u; // 80085430
  c->r[30]=0u+0x00000000u; // 80085434
  W32(c->r[1]+0x00000134u,c->r[3]); // 80085438
  c->r[31]=0u+0x000000FFu; // 8008543C
  W32(c->r[1]+0x00000128u,c->r[0]); // 80085440
  goto L_80085638; // 80085444
L_80085448:;
  {uint32_t ea=c->r[26]+c->r[30]; c->f[0]=c->ps1[0]=RF32(ea);} // 80085448
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 8008544C
  c->r[5]=c->r[26]+c->r[30]; // 80085450
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80085454
  c->r[0]=R32(c->r[1]+0x00000130u); // 80085458
  c->r[4]=c->r[1]+0x000000E8u; // 8008545C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085460
  cmps(c,0,(int32_t)c->r[0],0); // 80085464
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80085468
  c->r[4]=c->r[4]+c->r[3]; // 8008546C
  c->r[0]=R32(c->r[1]+0x00000084u); // 80085470
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085474
  c->r[6]=c->r[5]+0x0000000Cu; // 80085478
  W32(c->r[4]+0x00000000u,c->r[0]); // 8008547C
  c->r[3]=R32(c->r[1]+0x00000088u); // 80085480
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 80085484
  W32(c->r[4]+0x00000004u,c->r[3]); // 80085488
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 8008548C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80085490
  if (crb(c,2)) { goto L_8008549C; } // 80085494
  c->r[6]=c->r[6]+0x0000000Cu; // 80085498
L_8008549C:;
  c->r[0]=R32(c->r[1]+0x0000012Cu); // 8008549C
  cmps(c,0,(int32_t)c->r[0],0); // 800854A0
  if (crb(c,2)) { goto L_800854DC; } // 800854A4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800854A8
  c->r[3]=c->r[1]+0x00000090u; // 800854AC
  c->r[3]=c->r[3]+c->r[0]; // 800854B0
  c->r[0]=R8(c->r[6]+0x00000000u); // 800854B4
  W8(c->r[3]+0x00000000u,c->r[0]); // 800854B8
  c->r[0]=R8(c->r[6]+0x00000001u); // 800854BC
  W8(c->r[3]+0x00000001u,c->r[0]); // 800854C0
  c->r[0]=R8(c->r[6]+0x00000002u); // 800854C4
  W8(c->r[3]+0x00000002u,c->r[0]); // 800854C8
  c->r[0]=R8(c->r[6]+0x00000003u); // 800854CC
  c->r[6]=c->r[6]+0x00000004u; // 800854D0
  W8(c->r[3]+0x00000003u,c->r[0]); // 800854D4
  goto L_800854F4; // 800854D8
L_800854DC:;
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800854DC
  c->r[3]=c->r[1]+0x00000090u; // 800854E0
  {uint32_t ea=c->r[3]+c->r[0]; W8(ea,c->r[31]); c->r[3]=ea;} // 800854E4
  W8(c->r[3]+0x00000001u,c->r[31]); // 800854E8
  W8(c->r[3]+0x00000002u,c->r[31]); // 800854EC
  W8(c->r[3]+0x00000003u,c->r[31]); // 800854F0
L_800854F4:;
  c->r[0]=R32(c->r[1]+0x00000128u); // 800854F4
  cmps(c,0,(int32_t)c->r[0],0); // 800854F8
  if (crb(c,2)) { goto L_8008552C; } // 800854FC
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085500
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 80085504
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80085508
  c->r[3]=c->r[1]+0x000000A0u; // 8008550C
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085510
  c->r[3]=c->r[3]+c->r[0]; // 80085514
  c->r[0]=R32(c->r[1]+0x00000040u); // 80085518
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8008551C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80085520
  c->r[0]=R32(c->r[1]+0x00000044u); // 80085524
  W32(c->r[3]+0x00000004u,c->r[0]); // 80085528
L_8008552C:;
  c->r[29]=c->r[29]+0x00000001u; // 8008552C
  cmps(c,0,(int32_t)c->r[29],3); // 80085530
  if (!crb(c,2)) { goto L_8008562C; } // 80085534
  c->r[15]=R32(c->r[1]+0x000000A4u); // 80085538
  c->r[4]=c->r[1]+0x00000078u; // 8008553C
  W32(c->r[1]+0x00000148u,c->r[15]); // 80085540
  c->r[5]=c->r[1]+0x00000024u; // 80085544
  c->r[15]=R32(c->r[1]+0x00000090u); // 80085548
  c->r[6]=c->r[1]+0x00000038u; // 8008554C
  c->r[0]=R32(c->r[1]+0x000000FCu); // 80085550
  c->r[7]=c->r[1]+0x0000006Cu; // 80085554
  W32(c->r[1]+0x00000138u,c->r[15]); // 80085558
  c->r[8]=c->r[1]+0x00000020u; // 8008555C
  c->r[15]=R32(c->r[1]+0x000000E8u); // 80085560
  c->r[9]=c->r[1]+0x00000030u; // 80085564
  W32(c->r[1]+0x0000013Cu,c->r[15]); // 80085568
  c->r[10]=c->r[1]+0x00000060u; // 8008556C
  c->r[15]=R32(c->r[1]+0x000000ECu); // 80085570
  c->r[29]=0u+0x00000000u; // 80085574
  W32(c->r[1]+0x00000074u,c->r[0]); // 80085578
  c->r[0]=R32(c->r[1]+0x00000148u); // 8008557C
  W32(c->r[1]+0x00000140u,c->r[15]); // 80085580
  c->r[16]=R32(c->r[1]+0x000000B0u); // 80085584
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80085588
  c->r[0]=R32(c->r[1]+0x00000138u); // 8008558C
  c->r[17]=R32(c->r[1]+0x000000B4u); // 80085590
  c->r[18]=R32(c->r[1]+0x00000098u); // 80085594
  c->r[19]=R32(c->r[1]+0x00000100u); // 80085598
  c->r[20]=R32(c->r[1]+0x00000104u); // 8008559C
  c->r[21]=R32(c->r[1]+0x00000108u); // 800855A0
  c->r[22]=R32(c->r[1]+0x000000A8u); // 800855A4
  c->r[23]=R32(c->r[1]+0x000000ACu); // 800855A8
  c->r[24]=R32(c->r[1]+0x00000094u); // 800855AC
  c->r[12]=R32(c->r[1]+0x000000F4u); // 800855B0
  c->r[11]=R32(c->r[1]+0x000000F8u); // 800855B4
  c->r[14]=R32(c->r[1]+0x000000A0u); // 800855B8
  c->r[15]=R32(c->r[1]+0x000000F0u); // 800855BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800855C0
  c->r[0]=R32(c->r[1]+0x0000013Cu); // 800855C4
  W32(c->r[1]+0x00000078u,c->r[0]); // 800855C8
  c->r[0]=R32(c->r[1]+0x00000140u); // 800855CC
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800855D0
  c->r[0]=c->r[15]|c->r[15]; // 800855D4
  c->r[3]=R32(c->r[1]+0x00000018u); // 800855D8
  W32(c->r[1]+0x00000080u,c->r[0]); // 800855DC
  c->r[0]=c->r[1]+0x0000001Cu; // 800855E0
  W32(c->r[1]+0x00000028u,c->r[16]); // 800855E4
  W32(c->r[1]+0x0000002Cu,c->r[17]); // 800855E8
  W32(c->r[1]+0x0000001Cu,c->r[18]); // 800855EC
  W32(c->r[1]+0x00000060u,c->r[19]); // 800855F0
  W32(c->r[1]+0x00000064u,c->r[20]); // 800855F4
  W32(c->r[1]+0x00000068u,c->r[21]); // 800855F8
  W32(c->r[1]+0x00000030u,c->r[22]); // 800855FC
  W32(c->r[1]+0x00000034u,c->r[23]); // 80085600
  W32(c->r[1]+0x00000020u,c->r[24]); // 80085604
  W32(c->r[1]+0x0000006Cu,c->r[12]); // 80085608
  W32(c->r[1]+0x00000070u,c->r[11]); // 8008560C
  W32(c->r[1]+0x00000038u,c->r[14]); // 80085610
  W32(c->r[1]+0x00000008u,c->r[0]); // 80085614
  c->r[0]=c->r[1]+0x00000028u; // 80085618
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8008561C
  W32(c->r[1]+0x00000144u,c->r[15]); // 80085620
  W32(c->r[1]+0x00000010u,c->r[27]); // 80085624
  c->lr=0x8008562Cu; f_800869E4(c); // 80085628
L_8008562C:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 8008562C
  c->r[28]=c->r[28]+0x00000001u; // 80085630
  c->r[30]=c->r[30]+c->r[0]; // 80085634
L_80085638:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[25]); // 80085638
  if (crb(c,0)) { IRQCHK(c); goto L_80085448; } // 8008563C
  goto L_80085984; // 80085640
L_80085644:;
  c->r[5]=0u+0x55550000u; // 80085644
  c->r[6]=R32(c->r[3]+0x00000008u); // 80085648
  c->r[5]=c->r[5]+0x00005556u; // 8008564C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80085650
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[4])>>32); // 80085654
  c->r[4]=c->r[6]+0x00000001u; // 80085658
  W32(c->r[3]+0x00000008u,c->r[4]); // 8008565C
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 80085660
  c->r[14]=c->r[5]+c->r[4]; // 80085664
  c->r[0]=c->r[0]+c->r[14]; // 80085668
  W32(c->r[3]+0x00000004u,c->r[0]); // 8008566C
  c->r[3]=R32(c->r[1]+0x00000018u); // 80085670
  c->lr=0x80085678u; f_800841D0(c); // 80085674
  c->r[3]=R32(c->r[1]+0x00000018u); // 80085678
  c->r[4]=c->r[16]|c->r[16]; // 8008567C
  c->r[5]=c->r[27]|c->r[27]; // 80085680
  c->lr=0x80085688u; f_80084884(c); // 80085684
  c->r[3]=R32(c->r[1]+0x00000018u); // 80085688
  c->r[4]=c->r[16]|c->r[16]; // 8008568C
  c->r[5]=0u+0x00000001u; // 80085690
  c->lr=0x80085698u; f_800851EC(c); // 80085694
  c->r[0]=R8(c->r[27]+0x0000000Cu); // 80085698
  c->r[15]=rotl(c->r[3],0)&0x000000FFu; // 8008569C
  cmps(c,0,(int32_t)c->r[0],0); // 800856A0
  if (crb(c,2)) { goto L_800858A4; } // 800856A4
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800856A8
  c->r[8]=0u+0x00000000u; // 800856AC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800856B0
  c->r[9]=0u+0x000000FFu; // 800856B4
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800856B8
  c->r[5]=c->r[1]+0x000000B8u; // 800856BC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 800856C0
  c->r[4]=0u+0x00000000u; // 800856C4
  c->r[7]=R32(c->r[1]+0x00000054u); // 800856C8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 800856CC
  c->r[6]=R32(c->r[1]+0x00000058u); // 800856D0
  W32(c->r[1]+0x00000048u,c->r[7]); // 800856D4
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800856D8
  W32(c->r[1]+0x0000004Cu,c->r[6]); // 800856DC
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[4]=c->ps1[4]=RF32(ea);} // 800856E0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800856E4
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800856E8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 800856EC
  W32(c->r[1]+0x00000050u,c->r[0]); // 800856F0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800856F4
  c->r[3]=R32(c->r[1]+0x00000018u); // 800856F8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800856FC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80085700
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 80085704
  W32(c->r[1]+0x000000B8u,c->r[8]); // 80085708
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8008570C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[3]);} // 80085710
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80085714
  {uint32_t ea=c->r[1]+0x00000118u; WF64(ea,c->f[2]);} // 80085718
  c->r[7]=R32(c->r[1]+0x00000114u); // 8008571C
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[1]);} // 80085720
  c->r[6]=R32(c->r[1]+0x0000011Cu); // 80085724
  c->r[0]=R32(c->r[1]+0x00000124u); // 80085728
  W32(c->r[1]+0x000000BCu,c->r[8]); // 8008572C
  W32(c->r[1]+0x000000CCu,c->r[8]); // 80085730
  W32(c->r[1]+0x000000DCu,c->r[8]); // 80085734
  W8(c->r[1]+0x000000C0u,c->r[7]); // 80085738
  W8(c->r[1]+0x000000C1u,c->r[6]); // 8008573C
  W8(c->r[1]+0x000000C2u,c->r[0]); // 80085740
  W8(c->r[1]+0x000000C3u,c->r[9]); // 80085744
  W8(c->r[1]+0x000000C4u,c->r[8]); // 80085748
  W8(c->r[1]+0x000000C5u,c->r[8]); // 8008574C
  W8(c->r[1]+0x000000C6u,c->r[8]); // 80085750
  W8(c->r[1]+0x000000C7u,c->r[8]); // 80085754
  W8(c->r[1]+0x000000C9u,c->r[8]); // 80085758
  W32(c->r[1]+0x000000D0u,c->r[8]); // 8008575C
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 80085760
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 80085764
  c->r[0]=R8(c->r[27]+0x00000008u); // 80085768
  W8(c->r[1]+0x000000C0u,c->r[0]); // 8008576C
  c->r[0]=R8(c->r[27]+0x00000009u); // 80085770
  W8(c->r[1]+0x000000C1u,c->r[0]); // 80085774
  c->r[0]=R8(c->r[27]+0x0000000Au); // 80085778
  W8(c->r[1]+0x000000C2u,c->r[0]); // 8008577C
  c->r[0]=R8(c->r[27]+0x0000000Bu); // 80085780
  W8(c->r[1]+0x000000C3u,c->r[0]); // 80085784
  c->lr=0x8008578Cu; f_80084884(c); // 80085788
  c->lr=0x80085790u; f_800CEB28(c); // 8008578C
  c->r[3]=0u+0x00000009u; // 80085790
  c->r[4]=0u+0x00000001u; // 80085794
  c->lr=0x8008579Cu; f_800CE534(c); // 80085798
  c->r[3]=0u+0x00000000u; // 8008579C
  c->r[4]=0u+0x00000009u; // 800857A0
  c->r[5]=0u+0x00000001u; // 800857A4
  c->r[6]=0u+0x00000004u; // 800857A8
  c->r[7]=0u+0x00000000u; // 800857AC
  c->lr=0x800857B4u; f_800CEB5C(c); // 800857B0
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)6); // 800857B4
  c->r[3]=0u+0x000000A8u; // 800857B8
  c->r[4]=0u+0x00000000u; // 800857BC
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800857C0
  c->lr=0x800857C8u; f_800CFE14(c); // 800857C4
  c->r[3]=c->r[25]+0x00000002u; // 800857C8
  c->r[0]=0u+0x00000003u; // 800857CC
  c->r[3]=divwu(c->r[3],c->r[0]); // 800857D0
  c->r[7]=rotl(c->r[15],1)&0xFFFFFFFEu; // 800857D4
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 800857D8
  c->r[5]=0u+0x00000000u; // 800857DC
  c->r[6]=c->r[0]-c->r[15]; // 800857E0
  c->r[4]=0u+0xCC010000u; // 800857E4
  c->ctr=c->r[3]; // 800857E8
  cmps(c,0,(int32_t)c->r[25],0); // 800857EC
  if (!crb(c,1)) { goto L_80085984; } // 800857F0
L_800857F4:;
  c->r[8]=c->r[26]+c->r[5]; // 800857F4
  c->r[3]=c->r[5]+c->r[15]; // 800857F8
  {uint32_t ea=c->r[8]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800857FC
  c->r[0]=c->r[5]+c->r[7]; // 80085800
  {uint32_t ea=c->r[26]+c->r[5]; c->f[0]=c->ps1[0]=RF32(ea);} // 80085804
  c->r[3]=c->r[26]+c->r[3]; // 80085808
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008580C
  c->r[9]=c->r[26]+c->r[0]; // 80085810
  c->r[5]=c->r[5]+c->r[6]; // 80085814
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085818
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008581C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085820
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80085824
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085828
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008582C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085830
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085834
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085838
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008583C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085840
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085844
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085848
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008584C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085850
  {uint32_t ea=c->r[9]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80085854
  {uint32_t ea=c->r[9]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085858
  {uint32_t ea=c->r[26]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8008585C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085860
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085864
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085868
  {uint32_t ea=c->r[9]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008586C
  {uint32_t ea=c->r[9]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085870
  {uint32_t ea=c->r[26]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80085874
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085878
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008587C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085880
  {uint32_t ea=c->r[8]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80085884
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085888
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008588C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085890
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085894
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085898
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800857F4; } // 8008589C
  goto L_80085984; // 800858A0
L_800858A4:;
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 800858A4
  c->r[3]=0u+0x00000090u; // 800858A8
  c->r[4]=0u+0x00000000u; // 800858AC
  c->lr=0x800858B4u; f_800CFE14(c); // 800858B0
  c->r[8]=rotl(c->r[16],0)&0x00000002u; // 800858B4
  c->r[9]=rotl(c->r[16],0)&0x00000001u; // 800858B8
  c->r[10]=rotl(c->r[16],0)&0x00000004u; // 800858BC
  c->r[11]=rotl(c->r[16],0)&0x00000008u; // 800858C0
  c->r[7]=0u+0x00000000u; // 800858C4
  c->r[3]=0u+0xCC010000u; // 800858C8
  c->ctr=c->r[25]; // 800858CC
  cmps(c,0,(int32_t)c->r[25],0); // 800858D0
  if (!crb(c,1)) { goto L_80085984; } // 800858D4
L_800858D8:;
  c->r[4]=c->r[26]+c->r[7]; // 800858D8
  {uint32_t ea=c->r[26]+c->r[7]; c->f[0]=c->ps1[0]=RF32(ea);} // 800858DC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800858E0
  cmps(c,0,(int32_t)c->r[8],0); // 800858E4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800858E8
  c->r[12]=c->r[4]+0x0000000Cu; // 800858EC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800858F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800858F4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800858F8
  if (crb(c,2)) { goto L_8008591C; } // 800858FC
  {uint32_t ea=c->r[12]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80085900
  {uint32_t ea=c->r[12]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085904
  {uint32_t ea=c->r[12]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085908
  c->r[12]=c->r[12]+0x0000000Cu; // 8008590C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085910
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085914
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085918
L_8008591C:;
  cmps(c,0,(int32_t)c->r[9],0); // 8008591C
  if (crb(c,2)) { goto L_80085948; } // 80085920
  c->r[6]=R8(c->r[12]+0x00000003u); // 80085924
  c->r[5]=R8(c->r[12]+0x00000002u); // 80085928
  c->r[4]=R8(c->r[12]+0x00000001u); // 8008592C
  c->r[0]=R8(c->r[12]+0x00000000u); // 80085930
  c->r[12]=c->r[12]+0x00000004u; // 80085934
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80085938
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8008593C
  W8(c->r[3]+0xFFFF8000u,c->r[5]); // 80085940
  W8(c->r[3]+0xFFFF8000u,c->r[6]); // 80085944
L_80085948:;
  cmps(c,0,(int32_t)c->r[10],0); // 80085948
  if (crb(c,2)) { goto L_80085964; } // 8008594C
  {uint32_t ea=c->r[12]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085950
  {uint32_t ea=c->r[12]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085954
  c->r[12]=c->r[12]+0x00000008u; // 80085958
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008595C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085960
L_80085964:;
  cmps(c,0,(int32_t)c->r[11],0); // 80085964
  if (crb(c,2)) { goto L_8008597C; } // 80085968
  {uint32_t ea=c->r[12]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008596C
  {uint32_t ea=c->r[12]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085970
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085974
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085978
L_8008597C:;
  c->r[7]=c->r[7]+c->r[15]; // 8008597C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800858D8; } // 80085980
L_80085984:;
  c->r[11]=c->r[1]+0x000001A0u; // 80085984
  c->lr=0x8008598Cu; f_800D4A2C(c); // 80085988
  c->r[0]=R32(c->r[1]+0x000001A4u); // 8008598C
  c->lr=c->r[0]; // 80085990
  c->r[1]=c->r[1]+0x000001A0u; // 80085994
  return; // 80085998
}

// RenderIndexedTriangles__11WiiGraphicsFiPUiiPv12VertexFormatR8Material
void f_8008599C(Ctx* __restrict c) {
  trace_call(0x8008599Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008599C
  c->r[0]=c->lr; // 800859A0
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800859A4
  c->r[11]=c->r[1]+0x000000C0u; // 800859A8
  c->lr=0x800859B0u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800859AC
  c->r[6]=0u+0x55550000u; // 800859B0
  c->r[10]=R32(c->r[3]+0x00000008u); // 800859B4
  c->r[6]=c->r[6]+0x00005556u; // 800859B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800859BC
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[4])>>32); // 800859C0
  c->r[23]=c->r[4]|c->r[4]; // 800859C4
  c->r[10]=c->r[10]+0x00000001u; // 800859C8
  W32(c->r[3]+0x00000008u,c->r[10]); // 800859CC
  c->r[22]=c->r[3]|c->r[3]; // 800859D0
  c->r[24]=c->r[5]|c->r[5]; // 800859D4
  c->r[4]=rotl(c->r[6],1)&0x00000001u; // 800859D8
  c->r[25]=c->r[7]|c->r[7]; // 800859DC
  c->r[31]=c->r[6]+c->r[4]; // 800859E0
  c->r[27]=c->r[8]|c->r[8]; // 800859E4
  c->r[0]=c->r[0]+c->r[31]; // 800859E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800859EC
  c->r[26]=c->r[9]|c->r[9]; // 800859F0
  c->lr=0x800859F8u; f_800841D0(c); // 800859F4
  c->r[3]=c->r[22]|c->r[22]; // 800859F8
  c->r[4]=c->r[27]|c->r[27]; // 800859FC
  c->r[5]=c->r[26]|c->r[26]; // 80085A00
  c->lr=0x80085A08u; f_80084884(c); // 80085A04
  c->r[3]=c->r[22]|c->r[22]; // 80085A08
  c->r[4]=c->r[27]|c->r[27]; // 80085A0C
  c->r[5]=0u+0x00000000u; // 80085A10
  c->lr=0x80085A18u; f_800851EC(c); // 80085A14
  c->r[21]=c->r[3]|c->r[3]; // 80085A18
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 80085A1C
  c->r[4]=c->r[25]|c->r[25]; // 80085A20
  c->r[3]=0u+0x00000009u; // 80085A24
  c->lr=0x80085A2Cu; f_800CF1AC(c); // 80085A28
  c->r[30]=rotl(c->r[27],0)&0x00000002u; cr0(c,c->r[30]); // 80085A2C
  c->r[20]=0u+0x0000000Cu; // 80085A30
  if (crb(c,2)) { goto L_80085A4C; } // 80085A34
  c->r[4]=c->r[25]+0x0000000Cu; // 80085A38
  c->r[5]=rotl(c->r[21],0)&0x000000FFu; // 80085A3C
  c->r[3]=0u+0x0000000Au; // 80085A40
  c->lr=0x80085A48u; f_800CF1AC(c); // 80085A44
  c->r[20]=0u+0x00000018u; // 80085A48
L_80085A4C:;
  c->r[29]=rotl(c->r[27],0)&0x00000001u; cr0(c,c->r[29]); // 80085A4C
  if (crb(c,2)) { goto L_80085A68; } // 80085A50
  c->r[4]=c->r[25]+c->r[20]; // 80085A54
  c->r[5]=rotl(c->r[21],0)&0x000000FFu; // 80085A58
  c->r[3]=0u+0x0000000Bu; // 80085A5C
  c->lr=0x80085A64u; f_800CF1AC(c); // 80085A60
  c->r[20]=c->r[20]+0x0000000Cu; // 80085A64
L_80085A68:;
  c->r[28]=rotl(c->r[27],0)&0x00000004u; cr0(c,c->r[28]); // 80085A68
  if (crb(c,2)) { goto L_80085A84; } // 80085A6C
  c->r[4]=c->r[25]+c->r[20]; // 80085A70
  c->r[5]=rotl(c->r[21],0)&0x000000FFu; // 80085A74
  c->r[3]=0u+0x0000000Du; // 80085A78
  c->lr=0x80085A80u; f_800CF1AC(c); // 80085A7C
  c->r[20]=c->r[20]+0x00000008u; // 80085A80
L_80085A84:;
  c->r[27]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[27]); // 80085A84
  if (crb(c,2)) { goto L_80085A9C; } // 80085A88
  c->r[4]=c->r[25]+c->r[20]; // 80085A8C
  c->r[5]=rotl(c->r[21],0)&0x000000FFu; // 80085A90
  c->r[3]=0u+0x0000000Eu; // 80085A94
  c->lr=0x80085A9Cu; f_800CF1AC(c); // 80085A98
L_80085A9C:;
  c->r[0]=R8(c->r[26]+0x0000000Cu); // 80085A9C
  cmps(c,0,(int32_t)c->r[0],0); // 80085AA0
  if (crb(c,2)) { goto L_80085CC8; } // 80085AA4
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80085AA8
  c->r[8]=0u+0x00000000u; // 80085AAC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80085AB0
  c->r[9]=0u+0x000000FFu; // 80085AB4
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085AB8
  c->r[3]=c->r[22]|c->r[22]; // 80085ABC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80085AC0
  c->r[5]=c->r[1]+0x00000048u; // 80085AC4
  c->r[7]=R32(c->r[1]+0x00000014u); // 80085AC8
  c->r[4]=0u+0x00000000u; // 80085ACC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80085AD0
  c->r[6]=R32(c->r[1]+0x00000018u); // 80085AD4
  W32(c->r[1]+0x00000008u,c->r[7]); // 80085AD8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80085ADC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80085AE0
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[4]=c->ps1[4]=RF32(ea);} // 80085AE4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085AE8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80085AEC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 80085AF0
  W32(c->r[1]+0x00000010u,c->r[0]); // 80085AF4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 80085AF8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085AFC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80085B00
  W32(c->r[1]+0x00000048u,c->r[8]); // 80085B04
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 80085B08
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80085B0C
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[3]);} // 80085B10
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80085B14
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[2]);} // 80085B18
  c->r[7]=R32(c->r[1]+0x0000007Cu); // 80085B1C
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[1]);} // 80085B20
  c->r[6]=R32(c->r[1]+0x00000084u); // 80085B24
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 80085B28
  W32(c->r[1]+0x0000004Cu,c->r[8]); // 80085B2C
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 80085B30
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 80085B34
  W8(c->r[1]+0x00000050u,c->r[7]); // 80085B38
  W8(c->r[1]+0x00000051u,c->r[6]); // 80085B3C
  W8(c->r[1]+0x00000052u,c->r[0]); // 80085B40
  W8(c->r[1]+0x00000053u,c->r[9]); // 80085B44
  W8(c->r[1]+0x00000054u,c->r[8]); // 80085B48
  W8(c->r[1]+0x00000055u,c->r[8]); // 80085B4C
  W8(c->r[1]+0x00000056u,c->r[8]); // 80085B50
  W8(c->r[1]+0x00000057u,c->r[8]); // 80085B54
  W8(c->r[1]+0x00000059u,c->r[8]); // 80085B58
  W32(c->r[1]+0x00000060u,c->r[8]); // 80085B5C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80085B60
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80085B64
  c->r[0]=R8(c->r[26]+0x00000008u); // 80085B68
  W8(c->r[1]+0x00000050u,c->r[0]); // 80085B6C
  c->r[0]=R8(c->r[26]+0x00000009u); // 80085B70
  W8(c->r[1]+0x00000051u,c->r[0]); // 80085B74
  c->r[0]=R8(c->r[26]+0x0000000Au); // 80085B78
  W8(c->r[1]+0x00000052u,c->r[0]); // 80085B7C
  c->r[0]=R8(c->r[26]+0x0000000Bu); // 80085B80
  W8(c->r[1]+0x00000053u,c->r[0]); // 80085B84
  c->lr=0x80085B8Cu; f_80084884(c); // 80085B88
  c->lr=0x80085B90u; f_800CEB28(c); // 80085B8C
  c->r[3]=0u+0x00000009u; // 80085B90
  c->r[4]=0u+0x00000001u; // 80085B94
  c->lr=0x80085B9Cu; f_800CE534(c); // 80085B98
  c->r[3]=0u+0x00000000u; // 80085B9C
  c->r[4]=0u+0x00000009u; // 80085BA0
  c->r[5]=0u+0x00000001u; // 80085BA4
  c->r[6]=0u+0x00000004u; // 80085BA8
  c->r[7]=0u+0x00000000u; // 80085BAC
  c->lr=0x80085BB4u; f_800CEB5C(c); // 80085BB0
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)6); // 80085BB4
  c->r[3]=0u+0x000000A8u; // 80085BB8
  c->r[4]=0u+0x00000000u; // 80085BBC
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 80085BC0
  c->lr=0x80085BC8u; f_800CFE14(c); // 80085BC4
  cmps(c,0,(int32_t)c->r[23],0); // 80085BC8
  if (!crb(c,1)) { goto L_80085D38; } // 80085BCC
  c->r[3]=c->r[23]+0x00000002u; // 80085BD0
  c->r[0]=0u+0x00000003u; // 80085BD4
  c->r[3]=divwu(c->r[3],c->r[0]); // 80085BD8
  c->r[4]=0u+0xCC010000u; // 80085BDC
  c->ctr=c->r[3]; // 80085BE0
  if (!crb(c,1)) { goto L_80085D38; } // 80085BE4
L_80085BE8:;
  c->r[5]=R32(c->r[24]+0x00000000u); // 80085BE8
  c->r[0]=R32(c->r[24]+0x00000008u); // 80085BEC
  c->r[3]=R32(c->r[24]+0x00000004u); // 80085BF0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80085BF4
  c->r[24]=c->r[24]+0x0000000Cu; // 80085BF8
  c->r[6]=c->r[25]+c->r[5]; // 80085BFC
  c->r[5]=R32(c->r[25]+c->r[5]); // 80085C00
  W32(c->r[1]+0x00000038u,c->r[5]); // 80085C04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80085C08
  c->r[5]=R32(c->r[6]+0x00000004u); // 80085C0C
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 80085C10
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80085C14
  {uint32_t ea=c->r[3]+c->r[25]; c->r[8]=R32(ea); c->r[3]=ea;} // 80085C18
  c->r[9]=R32(c->r[6]+0x00000008u); // 80085C1C
  c->r[10]=c->r[25]+c->r[0]; // 80085C20
  c->r[5]=R32(c->r[25]+c->r[0]); // 80085C24
  c->r[7]=R32(c->r[3]+0x00000004u); // 80085C28
  c->r[6]=R32(c->r[3]+0x00000008u); // 80085C2C
  c->r[3]=R32(c->r[10]+0x00000004u); // 80085C30
  c->r[0]=R32(c->r[10]+0x00000008u); // 80085C34
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085C38
  W32(c->r[1]+0x00000040u,c->r[9]); // 80085C3C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80085C40
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085C44
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80085C48
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085C4C
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 80085C50
  W32(c->r[1]+0x00000030u,c->r[7]); // 80085C54
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80085C58
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085C5C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 80085C60
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 80085C64
  W32(c->r[1]+0x00000034u,c->r[6]); // 80085C68
  W32(c->r[1]+0x00000020u,c->r[5]); // 80085C6C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 80085C70
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 80085C74
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 80085C78
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[5]);} // 80085C7C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 80085C80
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 80085C84
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[5]);} // 80085C88
  W32(c->r[1]+0x00000024u,c->r[3]); // 80085C8C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80085C90
  {uint32_t ea=c->r[1]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80085C94
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[6]);} // 80085C98
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 80085C9C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 80085CA0
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 80085CA4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[6]);} // 80085CA8
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 80085CAC
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 80085CB0
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085CB4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085CB8
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085CBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80085BE8; } // 80085CC0
  goto L_80085D38; // 80085CC4
L_80085CC8:;
  c->r[5]=rotl(c->r[23],0)&0x0000FFFFu; // 80085CC8
  c->r[3]=0u+0x00000090u; // 80085CCC
  c->r[4]=0u+0x00000000u; // 80085CD0
  c->lr=0x80085CD8u; f_800CFE14(c); // 80085CD4
  c->r[3]=0u+0xCC010000u; // 80085CD8
  c->ctr=c->r[23]; // 80085CDC
  cmps(c,0,(int32_t)c->r[23],0); // 80085CE0
  if (!crb(c,1)) { goto L_80085D38; } // 80085CE4
L_80085CE8:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80085CE8
  cmps(c,0,(int32_t)c->r[30],0); // 80085CEC
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80085CF0
  if (crb(c,2)) { goto L_80085D00; } // 80085CF4
  c->r[0]=R32(c->r[24]+0x00000000u); // 80085CF8
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80085CFC
L_80085D00:;
  cmps(c,0,(int32_t)c->r[29],0); // 80085D00
  if (crb(c,2)) { goto L_80085D10; } // 80085D04
  c->r[0]=R32(c->r[24]+0x00000000u); // 80085D08
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80085D0C
L_80085D10:;
  cmps(c,0,(int32_t)c->r[28],0); // 80085D10
  if (crb(c,2)) { goto L_80085D20; } // 80085D14
  c->r[0]=R32(c->r[24]+0x00000000u); // 80085D18
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80085D1C
L_80085D20:;
  cmps(c,0,(int32_t)c->r[27],0); // 80085D20
  if (crb(c,2)) { goto L_80085D30; } // 80085D24
  c->r[0]=R32(c->r[24]+0x00000000u); // 80085D28
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80085D2C
L_80085D30:;
  c->r[24]=c->r[24]+0x00000004u; // 80085D30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80085CE8; } // 80085D34
L_80085D38:;
  c->r[11]=c->r[1]+0x000000C0u; // 80085D38
  c->lr=0x80085D40u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80085D3C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80085D40
  c->lr=c->r[0]; // 80085D44
  c->r[1]=c->r[1]+0x000000C0u; // 80085D48
  return; // 80085D4C
}

// RenderLine__11WiiGraphicsF7Vector37Vector3R8Material
void f_80085D50(Ctx* __restrict c) {
  trace_call(0x80085D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085D50
  c->r[0]=c->lr; // 80085D54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80085D58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80085D5C
  c->r[31]=c->r[6]|c->r[6]; // 80085D60
  W32(c->r[1]+0x00000018u,c->r[30]); // 80085D64
  c->r[30]=c->r[5]|c->r[5]; // 80085D68
  W32(c->r[1]+0x00000014u,c->r[29]); // 80085D6C
  c->r[29]=c->r[4]|c->r[4]; // 80085D70
  W32(c->r[1]+0x00000010u,c->r[28]); // 80085D74
  c->r[28]=c->r[3]|c->r[3]; // 80085D78
  c->lr=0x80085D80u; f_800841D0(c); // 80085D7C
  c->r[3]=c->r[28]|c->r[28]; // 80085D80
  c->r[5]=c->r[31]|c->r[31]; // 80085D84
  c->r[4]=0u+0x00000000u; // 80085D88
  c->lr=0x80085D90u; f_80084884(c); // 80085D8C
  c->lr=0x80085D94u; f_800CEB28(c); // 80085D90
  c->r[3]=0u+0x00000009u; // 80085D94
  c->r[4]=0u+0x00000001u; // 80085D98
  c->lr=0x80085DA0u; f_800CE534(c); // 80085D9C
  c->r[3]=0u+0x00000000u; // 80085DA0
  c->r[4]=0u+0x00000009u; // 80085DA4
  c->r[5]=0u+0x00000001u; // 80085DA8
  c->r[6]=0u+0x00000004u; // 80085DAC
  c->r[7]=0u+0x00000000u; // 80085DB0
  c->lr=0x80085DB8u; f_800CEB5C(c); // 80085DB4
  c->r[3]=0u+0x000000A8u; // 80085DB8
  c->r[4]=0u+0x00000000u; // 80085DBC
  c->r[5]=0u+0x00000002u; // 80085DC0
  c->lr=0x80085DC8u; f_800CFE14(c); // 80085DC4
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80085DC8
  c->r[3]=0u+0xCC010000u; // 80085DCC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085DD0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085DD4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085DD8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085DDC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085DE0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80085DE4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085DE8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085DEC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80085DF0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80085DF4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80085DF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085DFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80085E00
  c->r[30]=R32(c->r[1]+0x00000018u); // 80085E04
  c->r[29]=R32(c->r[1]+0x00000014u); // 80085E08
  c->r[28]=R32(c->r[1]+0x00000010u); // 80085E0C
  c->lr=c->r[0]; // 80085E10
  c->r[1]=c->r[1]+0x00000020u; // 80085E14
  return; // 80085E18
}

// SetAmbient__11WiiGraphicsF5Color
void f_80085E1C(Ctx* __restrict c) {
  trace_call(0x80085E1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085E1C
  c->r[0]=c->lr; // 80085E20
  c->r[5]=c->r[3]+0x00010000u; // 80085E24
  W32(c->r[1]+0x00000024u,c->r[0]); // 80085E28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80085E2C
  c->r[31]=c->r[3]|c->r[3]; // 80085E30
  c->r[0]=R8(c->r[4]+0x00000000u); // 80085E34
  W8(c->r[3]+0x00000120u,c->r[0]); // 80085E38
  c->r[5]=R32(c->r[5]+0xFFFF81BCu); // 80085E3C
  c->r[0]=R8(c->r[4]+0x00000001u); // 80085E40
  W8(c->r[3]+0x00000121u,c->r[0]); // 80085E44
  c->r[5]=c->r[5]+0x00002878u; // 80085E48
  c->r[0]=R8(c->r[4]+0x00000002u); // 80085E4C
  W8(c->r[3]+0x00000122u,c->r[0]); // 80085E50
  c->r[0]=R16(c->r[5]+0x00000002u); // 80085E54
  cmps(c,0,(int32_t)c->r[0],0); // 80085E58
  if (!crb(c,1)) { goto L_80085E70; } // 80085E5C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80085E60
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80085E64
  W32(c->r[1]+0x00000008u,c->r[5]); // 80085E68
  goto L_80085E7C; // 80085E6C
L_80085E70:;
  c->r[0]=0u+0x00000000u; // 80085E70
  W32(c->r[1]+0x00000008u,c->r[5]); // 80085E74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80085E78
L_80085E7C:;
  c->r[3]=c->r[1]+0x00000008u; // 80085E7C
  c->r[4]=0u+0x00000000u; // 80085E80
  c->lr=0x80085E88u; f_80201F40(c); // 80085E84
  c->r[3]=c->r[31]+0x00010000u; // 80085E88
  c->r[0]=R8(c->r[31]+0x00000120u); // 80085E8C
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80085E90
  c->r[3]=R32(c->r[3]+0x00002880u); // 80085E94
  W8(c->r[3]+0x00000000u,c->r[0]); // 80085E98
  c->r[0]=R8(c->r[31]+0x00000121u); // 80085E9C
  W8(c->r[3]+0x00000001u,c->r[0]); // 80085EA0
  c->r[0]=R8(c->r[31]+0x00000122u); // 80085EA4
  W8(c->r[3]+0x00000002u,c->r[0]); // 80085EA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80085EAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085EB0
  c->lr=c->r[0]; // 80085EB4
  c->r[1]=c->r[1]+0x00000020u; // 80085EB8
  return; // 80085EBC
}

// SetLight__11WiiGraphicsFib9LightType7Vector37Vector35Colorfffff
void f_80085EC0(Ctx* __restrict c) {
  trace_call(0x80085EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085EC0
  c->r[0]=c->lr; // 80085EC4
  W32(c->r[1]+0x00000114u,c->r[0]); // 80085EC8
  c->r[11]=c->r[1]+0x000000D0u; // 80085ECC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 80085ED0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 80085ED4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 80085ED8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 80085EDC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 80085EE0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 80085EE4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[28]);} // 80085EE8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,28,ea,0,0);} // 80085EEC
  c->lr=0x80085EF4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085EF0
  c->f[28]=c->f[2]; // 80085EF4
  cmps(c,0,(int32_t)c->r[4],0); // 80085EF8
  c->f[29]=c->f[3]; // 80085EFC
  c->r[27]=c->r[3]|c->r[3]; // 80085F00
  c->f[30]=c->f[4]; // 80085F04
  c->r[28]=c->r[4]|c->r[4]; // 80085F08
  c->f[31]=c->f[5]; // 80085F0C
  c->r[29]=c->r[5]|c->r[5]; // 80085F10
  c->r[30]=c->r[6]|c->r[6]; // 80085F14
  c->r[31]=c->r[7]|c->r[7]; // 80085F18
  c->r[25]=c->r[8]|c->r[8]; // 80085F1C
  c->r[26]=c->r[9]|c->r[9]; // 80085F20
  if (crb(c,0)) { goto L_800862A0; } // 80085F24
  c->r[12]=R32(c->r[3]+0x00000000u); // 80085F28
  c->r[12]=R32(c->r[12]+0x000000A4u); // 80085F2C
  c->ctr=c->r[12]; // 80085F30
  if (true) { c->lr=0x80085F38u; dispatch(c,c->ctr); } // 80085F34
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 80085F38
  if (crb(c,0)) { goto L_80085F44; } // 80085F3C
  goto L_800862A0; // 80085F40
L_80085F44:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085F44
  cmps(c,0,(int32_t)c->r[29],0); // 80085F48
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80085F4C
  c->r[0]=R32(c->r[2]+0xFFFF8C68u); // 80085F50
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085F54
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80085F58
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085F5C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80085F60
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085F64
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80085F68
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085F6C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80085F70
  {uint32_t ea=c->r[25]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085F74
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80085F78
  W32(c->r[1]+0x00000010u,c->r[0]); // 80085F7C
  c->r[4]=R8(c->r[26]+0x00000000u); // 80085F80
  c->r[3]=R8(c->r[26]+0x00000001u); // 80085F84
  c->r[0]=R8(c->r[26]+0x00000002u); // 80085F88
  W8(c->r[1]+0x00000010u,c->r[4]); // 80085F8C
  W8(c->r[1]+0x00000011u,c->r[3]); // 80085F90
  W8(c->r[1]+0x00000012u,c->r[0]); // 80085F94
  if (crb(c,2)) { goto L_800861A0; } // 80085F98
  {uint32_t ea=c->r[27]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085F9C
  c->r[4]=c->r[1]+0x0000002Cu; // 80085FA0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80085FA4
  c->r[5]=c->r[4]|c->r[4]; // 80085FA8
  c->r[3]=c->r[1]+0x00000078u; // 80085FAC
  {uint32_t ea=c->r[27]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FB0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80085FB4
  {uint32_t ea=c->r[27]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FB8
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 80085FBC
  {uint32_t ea=c->r[27]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FC0
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80085FC4
  {uint32_t ea=c->r[27]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FC8
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 80085FCC
  {uint32_t ea=c->r[27]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FD0
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 80085FD4
  {uint32_t ea=c->r[27]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FD8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80085FDC
  {uint32_t ea=c->r[27]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FE0
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 80085FE4
  {uint32_t ea=c->r[27]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FE8
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 80085FEC
  {uint32_t ea=c->r[27]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FF0
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80085FF4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80085FF8
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 80085FFC
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086000
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 80086004
  c->lr=0x8008600Cu; f_800B8980(c); // 80086008
  c->r[4]=c->r[1]+0x00000020u; // 8008600C
  c->r[3]=c->r[1]+0x00000078u; // 80086010
  c->r[5]=c->r[4]|c->r[4]; // 80086014
  c->lr=0x8008601Cu; f_800B89D4(c); // 80086018
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008601C
  c->r[3]=c->r[1]+0x00000038u; // 80086020
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086024
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80086028
  c->lr=0x80086030u; f_800D0E64(c); // 8008602C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80086030
  c->r[3]=c->r[1]+0x00000038u; // 80086034
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086038
  {uint32_t ea=c->r[1]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 8008603C
  c->lr=0x80086044u; f_800D0E38(c); // 80086040
  c->r[0]=R32(c->r[1]+0x00000010u); // 80086044
  c->r[3]=c->r[1]+0x00000038u; // 80086048
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8008604C
  c->r[4]=c->r[1]+0x0000000Cu; // 80086050
  c->lr=0x80086058u; f_800D0FB4(c); // 80086054
  cmps(c,0,(int32_t)c->r[30],1); // 80086058
  {uint32_t ea=c->r[2]+0xFFFF8C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008605C
  if (!crb(c,2)) { goto L_80086068; } // 80086060
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80086064
L_80086068:;
  c->f[3]=c->ps1[3]=S(c->f[28]*c->f[0]); // 80086068
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8008606C
  c->f[4]=c->ps1[4]=S(c->f[29]*c->f[0]); // 80086070
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086074
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086078
  c->r[3]=c->r[1]+0x00000038u; // 8008607C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 80086080
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 80086084
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[4]); // 80086088
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 8008608C
  c->lr=0x80086094u; f_800D0BD0(c); // 80086090
  cmps(c,0,(int32_t)c->r[30],1); // 80086094
  if (!crb(c,2)) { goto L_800860D0; } // 80086098
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008609C
  fcmp(c,0,c->f[31],c->f[0]); // 800860A0
  if (!crb(c,1)) { goto L_800860BC; } // 800860A4
  c->f[1]=c->f[30]; // 800860A8
  c->r[3]=c->r[1]+0x00000038u; // 800860AC
  c->r[4]=0u+0x00000002u; // 800860B0
  c->lr=0x800860B8u; f_800D0BE0(c); // 800860B4
  goto L_800860E0; // 800860B8
L_800860BC:;
  c->f[1]=c->f[30]; // 800860BC
  c->r[3]=c->r[1]+0x00000038u; // 800860C0
  c->r[4]=0u+0x00000000u; // 800860C4
  c->lr=0x800860CCu; f_800D0BE0(c); // 800860C8
  goto L_800860E0; // 800860CC
L_800860D0:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800860D0
  c->r[3]=c->r[1]+0x00000038u; // 800860D4
  c->r[4]=0u+0x00000000u; // 800860D8
  c->lr=0x800860E0u; f_800D0BE0(c); // 800860DC
L_800860E0:;
  cmps(c,0,(int32_t)c->r[30],2); // 800860E0
  if (!crb(c,2)) { goto L_8008612C; } // 800860E4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800860E8
  c->r[3]=c->r[1]+0x00000038u; // 800860EC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800860F0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800860F4
  c->f[3]=-c->f[2]; // 800860F8
  c->f[0]=-c->f[0]; // 800860FC
  {uint32_t ea=c->r[2]+0xFFFF8C74u; c->f[4]=c->ps1[4]=RF32(ea);} // 80086100
  c->f[2]=-c->f[1]; // 80086104
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[4]); // 80086108
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 8008610C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 80086110
  c->lr=0x80086118u; f_800D0E38(c); // 80086114
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086118
  c->r[3]=c->r[1]+0x00000038u; // 8008611C
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80086120
  c->f[3]=c->f[2]; // 80086124
  c->lr=0x8008612Cu; f_800D0BD0(c); // 80086128
L_8008612C:;
  cmpu(c,0,c->r[28],0x00000007u); // 8008612C
  if (crb(c,1)) { goto L_80086188; } // 80086130
  c->r[3]=0u+0x80260000u; // 80086134
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80086138
  c->r[3]=c->r[3]+0x000043B0u; // 8008613C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80086140
  c->ctr=c->r[3]; // 80086144
  if (true) { switch (c->ctr) { case 0x8008614Cu: goto L_8008614C; case 0x80086154u: goto L_80086154; case 0x8008615Cu: goto L_8008615C; case 0x80086164u: goto L_80086164; case 0x8008616Cu: goto L_8008616C; case 0x80086174u: goto L_80086174; case 0x8008617Cu: goto L_8008617C; case 0x80086184u: goto L_80086184; default: break; } dispatch(c,c->ctr); return; } // 80086148
L_8008614C:;
  c->r[26]=0u+0x00000001u; // 8008614C
  goto L_80086188; // 80086150
L_80086154:;
  c->r[26]=0u+0x00000002u; // 80086154
  goto L_80086188; // 80086158
L_8008615C:;
  c->r[26]=0u+0x00000004u; // 8008615C
  goto L_80086188; // 80086160
L_80086164:;
  c->r[26]=0u+0x00000008u; // 80086164
  goto L_80086188; // 80086168
L_8008616C:;
  c->r[26]=0u+0x00000010u; // 8008616C
  goto L_80086188; // 80086170
L_80086174:;
  c->r[26]=0u+0x00000020u; // 80086174
  goto L_80086188; // 80086178
L_8008617C:;
  c->r[26]=0u+0x00000040u; // 8008617C
  goto L_80086188; // 80086180
L_80086184:;
  c->r[26]=0u+0x00000080u; // 80086184
L_80086188:;
  c->r[4]=c->r[26]|c->r[26]; // 80086188
  c->r[3]=c->r[1]+0x00000038u; // 8008618C
  c->lr=0x80086194u; f_800D0FC0(c); // 80086190
  c->r[0]=R32(c->r[27]+0x0000011Cu); // 80086194
  c->r[0]=c->r[0]|c->r[26]; // 80086198
  W32(c->r[27]+0x0000011Cu,c->r[0]); // 8008619C
L_800861A0:;
  c->r[3]=c->r[27]+0x00010000u; // 800861A0
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 800861A4
  c->r[3]=c->r[3]+0x00002878u; // 800861A8
  c->r[0]=R16(c->r[3]+0x00000002u); // 800861AC
  cmps(c,0,(int32_t)c->r[0],0); // 800861B0
  if (!crb(c,1)) { goto L_800861C8; } // 800861B4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800861B8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800861BC
  W32(c->r[1]+0x00000018u,c->r[3]); // 800861C0
  goto L_800861D4; // 800861C4
L_800861C8:;
  c->r[0]=0u+0x00000000u; // 800861C8
  W32(c->r[1]+0x00000018u,c->r[3]); // 800861CC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800861D0
L_800861D4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800861D4
  if (!crb(c,2)) { goto L_800861F0; } // 800861D8
  c->r[4]=c->r[28]|c->r[28]; // 800861DC
  c->r[3]=c->r[1]+0x00000018u; // 800861E0
  c->r[5]=0u+0xFFFFFFFFu; // 800861E4
  c->lr=0x800861ECu; f_80201E50(c); // 800861E8
  goto L_800862A0; // 800861EC
L_800861F0:;
  c->r[4]=c->r[28]|c->r[28]; // 800861F0
  c->r[5]=c->r[28]|c->r[28]; // 800861F4
  c->r[3]=c->r[1]+0x00000018u; // 800861F8
  c->lr=0x80086200u; f_80201E50(c); // 800861FC
  c->r[3]=c->r[27]+0x00010000u; // 80086200
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086204
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80086208
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)68); // 8008620C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086210
  c->r[0]=R32(c->r[3]+0x0000287Cu); // 80086214
  {uint32_t ea=c->r[31]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80086218
  c->r[27]=c->r[0]+c->r[4]; // 8008621C
  c->r[3]=c->r[27]|c->r[27]; // 80086220
  c->lr=0x80086228u; f_80201230(c); // 80086224
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086228
  c->r[3]=c->r[27]|c->r[27]; // 8008622C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086230
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80086234
  c->lr=0x8008623Cu; f_80201270(c); // 80086238
  c->f[0]=c->ps1[0]=S(c->f[29]-c->f[28]); // 8008623C
  {uint32_t ea=c->r[2]+0xFFFF8C78u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086240
  c->r[3]=c->r[27]|c->r[27]; // 80086244
  c->r[4]=0u+0x00000001u; // 80086248
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[2],c->f[28])); // 8008624C
  c->lr=0x80086254u; f_80201330(c); // 80086250
  cmps(c,0,(int32_t)c->r[30],0); // 80086254
  if (!crb(c,2)) { goto L_80086270; } // 80086258
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008625C
  c->r[3]=c->r[27]|c->r[27]; // 80086260
  c->r[4]=0u+0x00000000u; // 80086264
  c->lr=0x8008626Cu; f_802012B0(c); // 80086268
  goto L_80086280; // 8008626C
L_80086270:;
  c->f[1]=c->f[28]; // 80086270
  c->r[3]=c->r[27]|c->r[27]; // 80086274
  c->r[4]=0u+0x00000002u; // 80086278
  c->lr=0x80086280u; f_802012B0(c); // 8008627C
L_80086280:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80086280
  c->r[3]=c->r[27]|c->r[27]; // 80086284
  W32(c->r[1]+0x00000008u,c->r[0]); // 80086288
  c->r[4]=c->r[1]+0x00000008u; // 8008628C
  c->lr=0x80086294u; f_80201200(c); // 80086290
  c->r[0]=R32(c->r[27]+0x00000000u); // 80086294
  c->r[0]=c->r[0]|0x00000004u; // 80086298
  W32(c->r[27]+0x00000000u,c->r[0]); // 8008629C
L_800862A0:;
  c->r[11]=c->r[1]+0x000000D0u; // 800862A0
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800862A4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800862A8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 800862AC
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 800862B0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 800862B4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 800862B8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,28,ea,0,0);} // 800862BC
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[28]=RF64(ea);} // 800862C0
  c->lr=0x800862C8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800862C4
  c->r[0]=R32(c->r[1]+0x00000114u); // 800862C8
  c->lr=c->r[0]; // 800862CC
  c->r[1]=c->r[1]+0x00000110u; // 800862D0
  return; // 800862D4
}

// FlushTranslucentPrims__11WiiGraphicsFv
void f_800862D8(Ctx* __restrict c) {
  trace_call(0x800862D8u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800862D8
  c->r[0]=c->lr; // 800862DC
  W32(c->r[1]+0x00000144u,c->r[0]); // 800862E0
  c->r[11]=c->r[1]+0x00000140u; // 800862E4
  c->lr=0x800862ECu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800862E8
  c->r[23]=c->r[3]|c->r[3]; // 800862EC
  c->r[3]=0u+0x00000001u; // 800862F0
  c->r[4]=0u+0x00000008u; // 800862F4
  c->lr=0x800862FCu; f_800CF448(c); // 800862F8
  c->r[3]=0u+0x00000000u; // 800862FC
  c->lr=0x80086304u; f_800D31A8(c); // 80086300
  c->r[3]=0u+0x000007FFu; // 80086304
  c->lr=0x8008630Cu; f_801E9ED0(c); // 80086308
  {uint32_t ea=c->r[23]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008630C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80086310
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80086314
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80086318
  {uint32_t ea=c->r[23]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008631C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80086320
  {uint32_t ea=c->r[23]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086324
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80086328
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008632C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80086330
  {uint32_t ea=c->r[23]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086334
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80086338
  {uint32_t ea=c->r[23]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008633C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80086340
  {uint32_t ea=c->r[23]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80086344
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80086348
  {uint32_t ea=c->r[23]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008634C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80086350
  {uint32_t ea=c->r[23]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086354
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80086358
  {uint32_t ea=c->r[23]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008635C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80086360
  {uint32_t ea=c->r[23]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086364
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80086368
  c->lr=0x80086370u; f_8016CCA0(c); // 8008636C
  {uint32_t ea=c->r[23]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086370
  c->r[24]=c->r[3]|c->r[3]; // 80086374
  {uint32_t ea=c->r[2]+0xFFFF8C64u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086378
  c->r[4]=c->r[1]+0x00000008u; // 8008637C
  c->f[0]=-c->f[0]; // 80086380
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086384
  c->r[5]=c->r[1]+0x00000048u; // 80086388
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8008638C
  {uint32_t ea=c->r[23]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80086390
  c->f[0]=-c->f[0]; // 80086394
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80086398
  {uint32_t ea=c->r[23]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008639C
  c->f[0]=-c->f[0]; // 800863A0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800863A4
  c->lr=0x800863ACu; f_8016D780(c); // 800863A8
  c->r[3]=c->r[24]|c->r[24]; // 800863AC
  c->r[4]=0u+0x00000000u; // 800863B0
  c->r[5]=0u+0x00000000u; // 800863B4
  c->lr=0x800863BCu; f_8016D610(c); // 800863B8
  c->r[3]=c->r[1]+0x00000078u; // 800863BC
  c->lr=0x800863C4u; f_800B7DE0(c); // 800863C0
  c->r[3]=c->r[1]+0x000000A8u; // 800863C4
  c->lr=0x800863CCu; f_800B7DE0(c); // 800863C8
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800863CC
  c->r[25]=0u+0x00000000u; // 800863D0
  c->r[27]=0u+0x000000FFu; // 800863D4
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800863D8
  c->r[28]=R32(c->r[1]+0x00000048u); // 800863DC
  c->r[26]=0u+0x00000001u; // 800863E0
  c->r[29]=R32(c->r[1]+0x0000004Cu); // 800863E4
  c->r[3]=c->r[24]|c->r[24]; // 800863E8
  c->r[30]=R32(c->r[1]+0x00000050u); // 800863EC
  c->r[4]=c->r[1]+0x00000078u; // 800863F0
  c->r[31]=R32(c->r[1]+0x00000054u); // 800863F4
  c->r[5]=0u+0x00000000u; // 800863F8
  c->r[12]=R32(c->r[1]+0x00000058u); // 800863FC
  c->r[11]=R32(c->r[1]+0x0000005Cu); // 80086400
  c->r[10]=R32(c->r[1]+0x00000060u); // 80086404
  c->r[9]=R32(c->r[1]+0x00000064u); // 80086408
  c->r[8]=R32(c->r[1]+0x00000068u); // 8008640C
  c->r[7]=R32(c->r[1]+0x0000006Cu); // 80086410
  c->r[6]=R32(c->r[1]+0x00000070u); // 80086414
  c->r[0]=R32(c->r[1]+0x00000074u); // 80086418
  W8(c->r[1]+0x000000D8u,c->r[25]); // 8008641C
  W32(c->r[1]+0x000000DCu,c->r[25]); // 80086420
  W32(c->r[1]+0x000000E0u,c->r[25]); // 80086424
  W8(c->r[1]+0x000000E4u,c->r[26]); // 80086428
  W32(c->r[1]+0x000000E8u,c->r[25]); // 8008642C
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 80086430
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 80086434
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[1]);} // 80086438
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 8008643C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 80086440
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 80086444
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[1]);} // 80086448
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[1]);} // 8008644C
  W8(c->r[1]+0x00000112u,c->r[27]); // 80086450
  W8(c->r[1]+0x00000111u,c->r[27]); // 80086454
  W8(c->r[1]+0x00000110u,c->r[27]); // 80086458
  W8(c->r[1]+0x00000113u,c->r[27]); // 8008645C
  W8(c->r[1]+0x00000116u,c->r[25]); // 80086460
  W8(c->r[1]+0x00000115u,c->r[25]); // 80086464
  W8(c->r[1]+0x00000114u,c->r[25]); // 80086468
  W8(c->r[1]+0x00000117u,c->r[27]); // 8008646C
  W32(c->r[1]+0x00000078u,c->r[28]); // 80086470
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 80086474
  W32(c->r[1]+0x00000080u,c->r[30]); // 80086478
  W32(c->r[1]+0x00000084u,c->r[31]); // 8008647C
  W32(c->r[1]+0x00000088u,c->r[12]); // 80086480
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 80086484
  W32(c->r[1]+0x00000090u,c->r[10]); // 80086488
  W32(c->r[1]+0x00000094u,c->r[9]); // 8008648C
  W32(c->r[1]+0x00000098u,c->r[8]); // 80086490
  W32(c->r[1]+0x0000009Cu,c->r[7]); // 80086494
  W32(c->r[1]+0x000000A0u,c->r[6]); // 80086498
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8008649C
  c->lr=0x800864A4u; f_8016D6F0(c); // 800864A0
  c->r[3]=0u+0x00000001u; // 800864A4
  c->r[4]=0u+0x00000000u; // 800864A8
  c->lr=0x800864B0u; f_800CF448(c); // 800864AC
  c->r[3]=0u+0x00000001u; // 800864B0
  c->lr=0x800864B8u; f_800D31A8(c); // 800864B4
  c->r[3]=R32(c->r[24]+0x00000000u); // 800864B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800864BC
  c->r[12]=R32(c->r[12]+0x00000058u); // 800864C0
  c->ctr=c->r[12]; // 800864C4
  if (true) { c->lr=0x800864CCu; dispatch(c,c->ctr); } // 800864C8
  c->r[12]=R32(c->r[23]+0x00000000u); // 800864CC
  c->r[4]=c->r[3]|c->r[3]; // 800864D0
  c->r[3]=c->r[23]|c->r[23]; // 800864D4
  c->r[12]=R32(c->r[12]+0x000000DCu); // 800864D8
  c->ctr=c->r[12]; // 800864DC
  if (true) { c->lr=0x800864E4u; dispatch(c,c->ctr); } // 800864E0
  c->r[3]=R32(c->r[24]+0x00000000u); // 800864E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800864E8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800864EC
  c->ctr=c->r[12]; // 800864F0
  if (true) { c->lr=0x800864F8u; dispatch(c,c->ctr); } // 800864F4
  c->r[12]=R32(c->r[23]+0x00000000u); // 800864F8
  c->r[4]=c->r[3]|c->r[3]; // 800864FC
  c->r[3]=c->r[23]|c->r[23]; // 80086500
  c->r[12]=R32(c->r[12]+0x000000E0u); // 80086504
  c->ctr=c->r[12]; // 80086508
  if (true) { c->lr=0x80086510u; dispatch(c,c->ctr); } // 8008650C
  c->r[3]=0u+0x00000000u; // 80086510
  c->lr=0x80086518u; f_800D3AA8(c); // 80086514
  c->r[3]=c->r[1]+0x00000018u; // 80086518
  c->lr=0x80086520u; f_800B7DE0(c); // 8008651C
  c->r[3]=c->r[1]+0x00000018u; // 80086520
  c->r[4]=0u+0x0000001Eu; // 80086524
  c->r[5]=0u+0x00000000u; // 80086528
  c->lr=0x80086530u; f_800D3838(c); // 8008652C
  c->r[3]=0u+0x00000000u; // 80086530
  c->r[4]=0u+0x00000000u; // 80086534
  c->r[5]=0u+0x00000001u; // 80086538
  c->r[6]=0u+0x00000001u; // 8008653C
  c->lr=0x80086544u; f_800D1BE8(c); // 80086540
  c->r[3]=0u+0x00000001u; // 80086544
  c->r[4]=0u+0x00000000u; // 80086548
  c->r[5]=0u+0x00000001u; // 8008654C
  c->r[6]=0u+0x00000001u; // 80086550
  c->lr=0x80086558u; f_800D1BE8(c); // 80086554
  c->r[3]=0u+0x00000000u; // 80086558
  c->lr=0x80086560u; f_800D3208(c); // 8008655C
  c->r[3]=0u+0x00000001u; // 80086560
  c->r[4]=0u+0x00000003u; // 80086564
  c->r[5]=0u+0x00000001u; // 80086568
  c->lr=0x80086570u; f_800D31D4(c); // 8008656C
  c->r[3]=0u+0x00000000u; // 80086570
  c->r[4]=0u+0x00000001u; // 80086574
  c->r[5]=0u+0x00000004u; // 80086578
  c->r[6]=0u+0x0000003Cu; // 8008657C
  c->r[7]=0u+0x00000000u; // 80086580
  c->r[8]=0u+0x0000007Du; // 80086584
  c->lr=0x8008658Cu; f_800CF1FC(c); // 80086588
  c->r[3]=c->r[23]|c->r[23]; // 8008658C
  c->lr=0x80086594u; f_8008664C(c); // 80086590
  c->r[11]=c->r[1]+0x00000140u; // 80086594
  c->lr=0x8008659Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80086598
  c->r[0]=R32(c->r[1]+0x00000144u); // 8008659C
  c->lr=c->r[0]; // 800865A0
  c->r[1]=c->r[1]+0x00000140u; // 800865A4
  return; // 800865A8
}

// EmitterSetFlagDisableCalc__FPvUl
void f_800865AC(Ctx* __restrict c) {
  trace_call(0x800865ACu);
  cmps(c,0,(int32_t)c->r[4],0); // 800865AC
  if (crb(c,2)) { goto L_800865C4; } // 800865B0
  c->r[0]=R32(c->r[3]+0x00000020u); // 800865B4
  c->r[0]=c->r[0]|0x00000200u; // 800865B8
  W32(c->r[3]+0x00000020u,c->r[0]); // 800865BC
  return; // 800865C0
L_800865C4:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 800865C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFDFFu; // 800865C8
  W32(c->r[3]+0x00000020u,c->r[0]); // 800865CC
  return; // 800865D0
}

// PauseAllParticleSystems__11WiiGraphicsFv
void f_800865D4(Ctx* __restrict c) {
  trace_call(0x800865D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800865D4
  c->r[0]=c->lr; // 800865D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800865DC
  c->lr=0x800865E4u; f_8016CCA0(c); // 800865E0
  c->r[4]=0u+0x80080000u; // 800865E4
  c->r[5]=0u+0x00000001u; // 800865E8
  c->r[4]=c->r[4]+0x000065ACu; // 800865EC
  c->r[6]=0u+0x00000000u; // 800865F0
  c->r[7]=0u+0x00000000u; // 800865F4
  c->lr=0x800865FCu; f_8016D810(c); // 800865F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800865FC
  c->lr=c->r[0]; // 80086600
  c->r[1]=c->r[1]+0x00000010u; // 80086604
  return; // 80086608
}

// ResumeAllParticleSystems__11WiiGraphicsFv
void f_8008660C(Ctx* __restrict c) {
  trace_call(0x8008660Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008660C
  c->r[0]=c->lr; // 80086610
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086614
  c->lr=0x8008661Cu; f_8016CCA0(c); // 80086618
  c->r[4]=0u+0x80080000u; // 8008661C
  c->r[5]=0u+0x00000000u; // 80086620
  c->r[4]=c->r[4]+0x000065ACu; // 80086624
  c->r[6]=0u+0x00000000u; // 80086628
  c->r[7]=0u+0x00000000u; // 8008662C
  c->lr=0x80086634u; f_8016D810(c); // 80086630
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086634
  c->lr=c->r[0]; // 80086638
  c->r[1]=c->r[1]+0x00000010u; // 8008663C
  return; // 80086640
}

// PreRenderFrame__11WiiGraphicsFv
void f_80086644(Ctx* __restrict c) {
  trace_call(0x80086644u);
  f_8008FFD8(c); return; // 80086644
}

// PostRenderFrame__11WiiGraphicsFv
void f_80086648(Ctx* __restrict c) {
  trace_call(0x80086648u);
  f_80090388(c); return; // 80086648
}

// RenderTransTris__11WiiGraphicsFv
void f_8008664C(Ctx* __restrict c) {
  trace_call(0x8008664Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008664C
  c->r[0]=c->lr; // 80086650
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086654
  c->r[4]=0u+0x00000000u; // 80086658
  W32(c->r[1]+0x00000104u,c->r[0]); // 8008665C
  c->r[5]=0u+0x00000040u; // 80086660
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80086664
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80086668
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 8008666C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 80086670
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 80086674
  W32(c->r[1]+0x000000DCu,c->r[31]); // 80086678
  c->r[31]=c->r[3]|c->r[3]; // 8008667C
  W32(c->r[1]+0x000000D8u,c->r[30]); // 80086680
  W32(c->r[1]+0x000000D4u,c->r[29]); // 80086684
  {uint32_t ea=c->r[3]+0x00000118u; c->f[31]=c->ps1[31]=RF32(ea);} // 80086688
  c->r[3]=c->r[1]+0x00000088u; // 8008668C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 80086690
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 80086694
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 80086698
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 8008669C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 800866A0
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 800866A4
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[1]);} // 800866A8
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800866AC
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 800866B0
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[1]);} // 800866B4
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 800866B8
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 800866BC
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 800866C0
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 800866C4
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 800866C8
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 800866CC
  c->lr=0x800866D4u; f_80004688(c); // 800866D0
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800866D4
  c->r[3]=c->r[1]+0x00000048u; // 800866D8
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800866DC
  c->r[4]=0u+0x00000000u; // 800866E0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 800866E4
  c->r[5]=0u+0x00000040u; // 800866E8
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 800866EC
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 800866F0
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 800866F4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800866F8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800866FC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80086700
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80086704
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80086708
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8008670C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80086710
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80086714
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80086718
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8008671C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80086720
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 80086724
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80086728
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8008672C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80086730
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80086734
  c->lr=0x8008673Cu; f_80004688(c); // 80086738
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008673C
  c->r[3]=c->r[31]|c->r[31]; // 80086740
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80086744
  c->r[4]=c->r[1]+0x00000088u; // 80086748
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8008674C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80086750
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80086754
  c->r[12]=R32(c->r[31]+0x00000000u); // 80086758
  c->r[12]=R32(c->r[12]+0x00000040u); // 8008675C
  c->ctr=c->r[12]; // 80086760
  if (true) { c->lr=0x80086768u; dispatch(c,c->ctr); } // 80086764
  c->r[12]=R32(c->r[31]+0x00000000u); // 80086768
  c->r[3]=c->r[31]|c->r[31]; // 8008676C
  c->r[4]=c->r[1]+0x00000048u; // 80086770
  c->r[12]=R32(c->r[12]+0x00000044u); // 80086774
  c->ctr=c->r[12]; // 80086778
  if (true) { c->lr=0x80086780u; dispatch(c,c->ctr); } // 8008677C
  c->r[30]=0u+0x00000000u; // 80086780
  W8(c->r[31]+0x00000123u,c->r[30]); // 80086784
  c->r[3]=0u+0x00000001u; // 80086788
  c->r[4]=0u+0x00000003u; // 8008678C
  c->r[5]=0u+0x00000000u; // 80086790
  c->lr=0x80086798u; f_800D31D4(c); // 80086794
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086798
  c->r[3]=c->r[1]+0x00000008u; // 8008679C
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800867A0
  c->r[4]=0u+0x00000000u; // 800867A4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800867A8
  c->r[5]=0u+0x00000040u; // 800867AC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800867B0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800867B4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800867B8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800867BC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800867C0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800867C4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800867C8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800867CC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800867D0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800867D4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800867D8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800867DC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800867E0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800867E4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800867E8
  c->lr=0x800867F0u; f_80004688(c); // 800867EC
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800867F0
  c->r[3]=c->r[31]|c->r[31]; // 800867F4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800867F8
  c->r[4]=c->r[1]+0x00000008u; // 800867FC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80086800
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80086804
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80086808
  c->r[12]=R32(c->r[31]+0x00000000u); // 8008680C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80086810
  c->ctr=c->r[12]; // 80086814
  if (true) { c->lr=0x8008681Cu; dispatch(c,c->ctr); } // 80086818
  c->r[12]=R32(c->r[31]+0x00000000u); // 8008681C
  c->r[3]=c->r[31]|c->r[31]; // 80086820
  c->r[4]=c->r[1]+0x00000008u; // 80086824
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80086828
  c->ctr=c->r[12]; // 8008682C
  if (true) { c->lr=0x80086834u; dispatch(c,c->ctr); } // 80086830
  {uint32_t ea=c->r[2]+0xFFFF8C7Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80086834
  goto L_8008694C; // 80086838
L_8008683C:;
  c->r[29]=R32(c->r[3]+0x00000008u); // 8008683C
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80086840
  fcmp(c,0,c->f[30],c->f[1]); // 80086844
  if (crb(c,2)) { goto L_80086858; } // 80086848
  c->r[3]=c->r[31]|c->r[31]; // 8008684C
  c->lr=0x80086854u; f_80087240(c); // 80086850
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80086854
L_80086858:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80086858
  c->r[3]=c->r[31]|c->r[31]; // 8008685C
  c->r[5]=c->r[29]|c->r[29]; // 80086860
  c->r[7]=c->r[29]+0x00000048u; // 80086864
  c->r[12]=R32(c->r[12]+0x00000060u); // 80086868
  c->r[4]=0u+0x00000003u; // 8008686C
  c->r[6]=0u+0x00000005u; // 80086870
  c->ctr=c->r[12]; // 80086874
  if (true) { c->lr=0x8008687Cu; dispatch(c,c->ctr); } // 80086878
  c->r[3]=R32(c->r[31]+0x00000160u); // 8008687C
  c->r[4]=R32(c->r[3]+0x00000008u); // 80086880
  goto L_8008689C; // 80086884
L_80086888:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80086888
  cmpu(c,0,c->r[0],c->r[4]); // 8008688C
  if (!crb(c,2)) { goto L_80086898; } // 80086890
  goto L_800868A8; // 80086894
L_80086898:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80086898
L_8008689C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8008689C
  if (!crb(c,2)) { IRQCHK(c); goto L_80086888; } // 800868A0
  c->r[3]=0u+0x00000000u; // 800868A4
L_800868A8:;
  cmps(c,1,(int32_t)c->r[3],0); // 800868A8
  if (crb(c,6)) { goto L_8008694C; } // 800868AC
  c->r[0]=R32(c->r[31]+0x00000160u); // 800868B0
  c->r[4]=R32(c->r[31]+0x00000168u); // 800868B4
  cmpu(c,0,c->r[3],c->r[0]); // 800868B8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800868BC
  W32(c->r[31]+0x00000168u,c->r[0]); // 800868C0
  if (!crb(c,2)) { goto L_800868FC; } // 800868C4
  c->r[4]=R32(c->r[3]+0x00000000u); // 800868C8
  W32(c->r[31]+0x00000160u,c->r[4]); // 800868CC
  cmps(c,0,(int32_t)c->r[4],0); // 800868D0
  if (crb(c,2)) { goto L_800868E0; } // 800868D4
  W32(c->r[4]+0x00000004u,c->r[30]); // 800868D8
  goto L_800868E4; // 800868DC
L_800868E0:;
  W32(c->r[31]+0x00000164u,c->r[30]); // 800868E0
L_800868E4:;
  W32(c->r[3]+0x00000000u,c->r[30]); // 800868E4
  cmps(c,0,(int32_t)c->r[3],0); // 800868E8
  W32(c->r[3]+0x00000004u,c->r[30]); // 800868EC
  if (crb(c,2)) { goto L_8008694C; } // 800868F0
  c->lr=0x800868F8u; f_8008DE54(c); // 800868F4
  goto L_8008694C; // 800868F8
L_800868FC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800868FC
  cmps(c,0,(int32_t)c->r[0],0); // 80086900
  if (!crb(c,2)) { goto L_80086928; } // 80086904
  c->r[4]=R32(c->r[3]+0x00000004u); // 80086908
  W32(c->r[31]+0x00000164u,c->r[4]); // 8008690C
  W32(c->r[4]+0x00000000u,c->r[30]); // 80086910
  W32(c->r[3]+0x00000000u,c->r[30]); // 80086914
  W32(c->r[3]+0x00000004u,c->r[30]); // 80086918
  if (crb(c,6)) { goto L_8008694C; } // 8008691C
  c->lr=0x80086924u; f_8008DE54(c); // 80086920
  goto L_8008694C; // 80086924
L_80086928:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80086928
  W32(c->r[4]+0x00000000u,c->r[0]); // 8008692C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80086930
  c->r[0]=R32(c->r[3]+0x00000004u); // 80086934
  W32(c->r[4]+0x00000004u,c->r[0]); // 80086938
  W32(c->r[3]+0x00000000u,c->r[30]); // 8008693C
  W32(c->r[3]+0x00000004u,c->r[30]); // 80086940
  if (crb(c,6)) { goto L_8008694C; } // 80086944
  c->lr=0x8008694Cu; f_8008DE54(c); // 80086948
L_8008694C:;
  c->r[3]=R32(c->r[31]+0x00000160u); // 8008694C
  cmps(c,0,(int32_t)c->r[3],0); // 80086950
  if (!crb(c,2)) { IRQCHK(c); goto L_8008683C; } // 80086954
  c->r[3]=c->r[31]+0x00010000u; // 80086958
  c->r[4]=0u+0x00000000u; // 8008695C
  W32(c->r[3]+0xFFFF816Cu,c->r[4]); // 80086960
  c->r[0]=0u+0x000000FEu; // 80086964
  c->r[3]=0u+0x00000001u; // 80086968
  c->r[4]=0u+0x00000003u; // 8008696C
  W8(c->r[31]+0x00000123u,c->r[0]); // 80086970
  c->r[5]=0u+0x00000001u; // 80086974
  c->lr=0x8008697Cu; f_800D31D4(c); // 80086978
  c->f[1]=c->f[31]; // 8008697C
  c->r[3]=c->r[31]|c->r[31]; // 80086980
  c->lr=0x80086988u; f_80087240(c); // 80086984
  c->r[12]=R32(c->r[31]+0x00000000u); // 80086988
  c->r[3]=c->r[31]|c->r[31]; // 8008698C
  c->r[4]=c->r[1]+0x00000088u; // 80086990
  c->r[12]=R32(c->r[12]+0x00000038u); // 80086994
  c->ctr=c->r[12]; // 80086998
  if (true) { c->lr=0x800869A0u; dispatch(c,c->ctr); } // 8008699C
  c->r[12]=R32(c->r[31]+0x00000000u); // 800869A0
  c->r[3]=c->r[31]|c->r[31]; // 800869A4
  c->r[4]=c->r[1]+0x00000048u; // 800869A8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800869AC
  c->ctr=c->r[12]; // 800869B0
  if (true) { c->lr=0x800869B8u; dispatch(c,c->ctr); } // 800869B4
  c->r[0]=R32(c->r[1]+0x00000104u); // 800869B8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 800869BC
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 800869C0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 800869C4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 800869C8
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800869CC
  c->r[30]=R32(c->r[1]+0x000000D8u); // 800869D0
  c->r[29]=R32(c->r[1]+0x000000D4u); // 800869D4
  c->lr=c->r[0]; // 800869D8
  c->r[1]=c->r[1]+0x00000100u; // 800869DC
  return; // 800869E0
}

// AddTransTri__11WiiGraphicsF7Vector35Color7Vector27Vector35Color7Vector27Vector35Color7Vector2R8Material
void f_800869E4(Ctx* __restrict c) {
  trace_call(0x800869E4u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800869E4
  c->r[0]=c->lr; // 800869E8
  W32(c->r[1]+0x00000134u,c->r[0]); // 800869EC
  c->r[11]=c->r[1]+0x000000A0u; // 800869F0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 800869F4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 800869F8
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 800869FC
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 80086A00
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 80086A04
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 80086A08
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[28]);} // 80086A0C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,28,ea,0,0);} // 80086A10
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[27]);} // 80086A14
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,27,ea,0,0);} // 80086A18
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[26]);} // 80086A1C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,26,ea,0,0);} // 80086A20
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[25]);} // 80086A24
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,25,ea,0,0);} // 80086A28
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[24]);} // 80086A2C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,24,ea,0,0);} // 80086A30
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[23]);} // 80086A34
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,23,ea,0,0);} // 80086A38
  c->lr=0x80086A40u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80086A3C
  c->r[11]=c->r[3]+0x00010000u; // 80086A40
  c->r[29]=R32(c->r[1]+0x00000138u); // 80086A44
  c->r[0]=R32(c->r[11]+0xFFFF816Cu); // 80086A48
  c->r[22]=c->r[3]|c->r[3]; // 80086A4C
  c->r[30]=R32(c->r[1]+0x0000013Cu); // 80086A50
  c->r[21]=c->r[4]|c->r[4]; // 80086A54
  cmps(c,0,(int32_t)c->r[0],256); // 80086A58
  c->r[31]=R32(c->r[1]+0x00000140u); // 80086A5C
  c->r[23]=c->r[5]|c->r[5]; // 80086A60
  c->r[24]=c->r[6]|c->r[6]; // 80086A64
  c->r[25]=c->r[7]|c->r[7]; // 80086A68
  c->r[26]=c->r[8]|c->r[8]; // 80086A6C
  c->r[27]=c->r[9]|c->r[9]; // 80086A70
  c->r[28]=c->r[10]|c->r[10]; // 80086A74
  if (crb(c,2)) { goto L_800871E0; } // 80086A78
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086A7C
  c->r[3]=c->r[1]+0x00000030u; // 80086A80
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80086A84
  c->r[4]=0u+0x00000000u; // 80086A88
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80086A8C
  c->r[5]=0u+0x00000040u; // 80086A90
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80086A94
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 80086A98
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80086A9C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 80086AA0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 80086AA4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80086AA8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80086AAC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 80086AB0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80086AB4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 80086AB8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80086ABC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 80086AC0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80086AC4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80086AC8
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80086ACC
  c->lr=0x80086AD4u; f_80004688(c); // 80086AD0
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80086AD4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80086AD8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80086ADC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80086AE0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80086AE4
  {uint32_t ea=c->r[22]+0x00000028u; c->f[30]=c->ps1[30]=RF32(ea);} // 80086AE8
  {uint32_t ea=c->r[22]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80086AEC
  {uint32_t ea=c->r[22]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80086AF0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 80086AF4
  {uint32_t ea=c->r[22]+0x00000058u; c->f[26]=c->ps1[26]=RF32(ea);} // 80086AF8
  {uint32_t ea=c->r[22]+0x00000038u; c->f[13]=c->ps1[13]=RF32(ea);} // 80086AFC
  {uint32_t ea=c->r[22]+0x00000060u; c->f[25]=c->ps1[25]=RF32(ea);} // 80086B00
  c->f[0]=c->ps1[0]=S(std::fma(c->f[31],c->f[26],c->f[0])); // 80086B04
  {uint32_t ea=c->r[22]+0x00000048u; c->f[12]=c->ps1[12]=RF32(ea);} // 80086B08
  {uint32_t ea=c->r[22]+0x00000064u; c->f[24]=c->ps1[24]=RF32(ea);} // 80086B0C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[13],c->f[25],c->f[0])); // 80086B10
  c->f[0]=c->ps1[0]=S(std::fma(c->f[12],c->f[24],c->f[0])); // 80086B14
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80086B18
  {uint32_t ea=c->r[22]+0x0000002Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 80086B1C
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80086B20
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[1]); // 80086B24
  {uint32_t ea=c->r[22]+0x0000003Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80086B28
  {uint32_t ea=c->r[22]+0x0000004Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80086B2C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[10],c->f[26],c->f[0])); // 80086B30
  c->f[0]=c->ps1[0]=S(std::fma(c->f[9],c->f[25],c->f[0])); // 80086B34
  c->f[0]=c->ps1[0]=S(std::fma(c->f[8],c->f[24],c->f[0])); // 80086B38
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80086B3C
  {uint32_t ea=c->r[22]+0x00000030u; c->f[7]=c->ps1[7]=RF32(ea);} // 80086B40
  {uint32_t ea=c->r[22]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 80086B44
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[1]); // 80086B48
  {uint32_t ea=c->r[22]+0x00000040u; c->f[5]=c->ps1[5]=RF32(ea);} // 80086B4C
  {uint32_t ea=c->r[22]+0x00000050u; c->f[4]=c->ps1[4]=RF32(ea);} // 80086B50
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[26],c->f[0])); // 80086B54
  c->f[0]=c->ps1[0]=S(std::fma(c->f[5],c->f[25],c->f[0])); // 80086B58
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[24],c->f[0])); // 80086B5C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80086B60
  {uint32_t ea=c->r[22]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80086B64
  {uint32_t ea=c->r[22]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086B68
  c->f[23]=c->ps1[23]=S(c->f[3]*c->f[1]); // 80086B6C
  {uint32_t ea=c->r[22]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086B70
  {uint32_t ea=c->r[22]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086B74
  c->f[23]=c->ps1[23]=S(std::fma(c->f[2],c->f[26],c->f[23])); // 80086B78
  c->f[23]=c->ps1[23]=S(std::fma(c->f[1],c->f[25],c->f[23])); // 80086B7C
  c->f[23]=c->ps1[23]=S(std::fma(c->f[0],c->f[24],c->f[23])); // 80086B80
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[23]);} // 80086B84
  {uint32_t ea=c->r[22]+0x0000006Cu; c->f[23]=c->ps1[23]=RF32(ea);} // 80086B88
  {uint32_t ea=c->r[22]+0x00000068u; c->f[29]=c->ps1[29]=RF32(ea);} // 80086B8C
  c->f[26]=c->ps1[26]=S(c->f[30]*c->f[23]); // 80086B90
  {uint32_t ea=c->r[22]+0x00000070u; c->f[28]=c->ps1[28]=RF32(ea);} // 80086B94
  c->f[25]=c->ps1[25]=S(c->f[11]*c->f[23]); // 80086B98
  {uint32_t ea=c->r[22]+0x00000074u; c->f[27]=c->ps1[27]=RF32(ea);} // 80086B9C
  c->f[24]=c->ps1[24]=S(c->f[7]*c->f[23]); // 80086BA0
  c->f[23]=c->ps1[23]=S(c->f[3]*c->f[23]); // 80086BA4
  c->f[26]=c->ps1[26]=S(std::fma(c->f[31],c->f[29],c->f[26])); // 80086BA8
  c->f[25]=c->ps1[25]=S(std::fma(c->f[10],c->f[29],c->f[25])); // 80086BAC
  c->f[24]=c->ps1[24]=S(std::fma(c->f[6],c->f[29],c->f[24])); // 80086BB0
  c->f[23]=c->ps1[23]=S(std::fma(c->f[2],c->f[29],c->f[23])); // 80086BB4
  c->f[26]=c->ps1[26]=S(std::fma(c->f[13],c->f[28],c->f[26])); // 80086BB8
  c->f[25]=c->ps1[25]=S(std::fma(c->f[9],c->f[28],c->f[25])); // 80086BBC
  c->f[24]=c->ps1[24]=S(std::fma(c->f[5],c->f[28],c->f[24])); // 80086BC0
  c->f[23]=c->ps1[23]=S(std::fma(c->f[1],c->f[28],c->f[23])); // 80086BC4
  c->f[26]=c->ps1[26]=S(std::fma(c->f[12],c->f[27],c->f[26])); // 80086BC8
  c->f[25]=c->ps1[25]=S(std::fma(c->f[8],c->f[27],c->f[25])); // 80086BCC
  c->f[24]=c->ps1[24]=S(std::fma(c->f[4],c->f[27],c->f[24])); // 80086BD0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[26]);} // 80086BD4
  c->f[23]=c->ps1[23]=S(std::fma(c->f[0],c->f[27],c->f[23])); // 80086BD8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[25]);} // 80086BDC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[24]);} // 80086BE0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[23]);} // 80086BE4
  {uint32_t ea=c->r[22]+0x0000007Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 80086BE8
  {uint32_t ea=c->r[22]+0x00000078u; c->f[23]=c->ps1[23]=RF32(ea);} // 80086BEC
  c->f[29]=c->ps1[29]=S(c->f[30]*c->f[26]); // 80086BF0
  {uint32_t ea=c->r[22]+0x00000080u; c->f[24]=c->ps1[24]=RF32(ea);} // 80086BF4
  c->f[28]=c->ps1[28]=S(c->f[11]*c->f[26]); // 80086BF8
  {uint32_t ea=c->r[22]+0x00000084u; c->f[25]=c->ps1[25]=RF32(ea);} // 80086BFC
  c->f[27]=c->ps1[27]=S(c->f[7]*c->f[26]); // 80086C00
  c->f[26]=c->ps1[26]=S(c->f[3]*c->f[26]); // 80086C04
  c->f[29]=c->ps1[29]=S(std::fma(c->f[31],c->f[23],c->f[29])); // 80086C08
  c->f[28]=c->ps1[28]=S(std::fma(c->f[10],c->f[23],c->f[28])); // 80086C0C
  c->f[27]=c->ps1[27]=S(std::fma(c->f[6],c->f[23],c->f[27])); // 80086C10
  c->f[26]=c->ps1[26]=S(std::fma(c->f[2],c->f[23],c->f[26])); // 80086C14
  c->f[29]=c->ps1[29]=S(std::fma(c->f[13],c->f[24],c->f[29])); // 80086C18
  c->f[28]=c->ps1[28]=S(std::fma(c->f[9],c->f[24],c->f[28])); // 80086C1C
  c->f[27]=c->ps1[27]=S(std::fma(c->f[5],c->f[24],c->f[27])); // 80086C20
  c->f[26]=c->ps1[26]=S(std::fma(c->f[1],c->f[24],c->f[26])); // 80086C24
  c->f[29]=c->ps1[29]=S(std::fma(c->f[12],c->f[25],c->f[29])); // 80086C28
  c->f[28]=c->ps1[28]=S(std::fma(c->f[8],c->f[25],c->f[28])); // 80086C2C
  c->f[27]=c->ps1[27]=S(std::fma(c->f[4],c->f[25],c->f[27])); // 80086C30
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[29]);} // 80086C34
  c->f[26]=c->ps1[26]=S(std::fma(c->f[0],c->f[25],c->f[26])); // 80086C38
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[28]);} // 80086C3C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[27]);} // 80086C40
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[26]);} // 80086C44
  {uint32_t ea=c->r[22]+0x0000008Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 80086C48
  {uint32_t ea=c->r[22]+0x00000088u; c->f[28]=c->ps1[28]=RF32(ea);} // 80086C4C
  c->f[27]=c->ps1[27]=S(c->f[30]*c->f[26]); // 80086C50
  {uint32_t ea=c->r[22]+0x00000090u; c->f[29]=c->ps1[29]=RF32(ea);} // 80086C54
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[26]); // 80086C58
  {uint32_t ea=c->r[22]+0x00000094u; c->f[30]=c->ps1[30]=RF32(ea);} // 80086C5C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[26]); // 80086C60
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[26]); // 80086C64
  c->f[31]=c->ps1[31]=S(std::fma(c->f[31],c->f[28],c->f[27])); // 80086C68
  c->f[10]=c->ps1[10]=S(std::fma(c->f[10],c->f[28],c->f[11])); // 80086C6C
  c->f[6]=c->ps1[6]=S(std::fma(c->f[6],c->f[28],c->f[7])); // 80086C70
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[28],c->f[3])); // 80086C74
  c->f[11]=c->ps1[11]=S(std::fma(c->f[13],c->f[29],c->f[31])); // 80086C78
  c->f[3]=c->ps1[3]=S(std::fma(c->f[5],c->f[29],c->f[6])); // 80086C7C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[29],c->f[2])); // 80086C80
  c->f[7]=c->ps1[7]=S(std::fma(c->f[9],c->f[29],c->f[10])); // 80086C84
  c->f[6]=c->ps1[6]=S(std::fma(c->f[12],c->f[30],c->f[11])); // 80086C88
  c->f[2]=c->ps1[2]=S(std::fma(c->f[4],c->f[30],c->f[3])); // 80086C8C
  c->f[5]=c->ps1[5]=S(std::fma(c->f[8],c->f[30],c->f[7])); // 80086C90
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[6]);} // 80086C94
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[1])); // 80086C98
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[5]);} // 80086C9C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 80086CA0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80086CA4
  c->r[3]=c->r[22]+0x00010000u; // 80086CA8
  {uint32_t ea=c->r[22]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086CAC
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086CB0
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086CB4
  c->r[4]=c->r[22]+c->r[0]; // 80086CB8
  {uint32_t ea=c->r[4]+0x000001E8u; WF32(ea,c->f[0]);} // 80086CBC
  {uint32_t ea=c->r[21]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 80086CC0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086CC4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086CC8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 80086CCC
  {uint32_t ea=c->r[21]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80086CD0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086CD4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[6]); // 80086CD8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[7]=c->ps1[7]=RF32(ea);} // 80086CDC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086CE0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[5],c->f[1])); // 80086CE4
  {uint32_t ea=c->r[21]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80086CE8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086CEC
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[6]); // 80086CF0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 80086CF4
  c->f[3]=c->ps1[3]=S(std::fma(c->f[2],c->f[5],c->f[3])); // 80086CF8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086CFC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[4],c->f[1])); // 80086D00
  c->f[6]=c->ps1[6]=S(std::fma(c->f[6],c->f[5],c->f[7])); // 80086D04
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086D08
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086D0C
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[4],c->f[3])); // 80086D10
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086D14
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[1]); // 80086D18
  {uint32_t ea=c->r[1]+0x00000058u; c->f[5]=c->ps1[5]=RF32(ea);} // 80086D1C
  c->r[5]=c->r[22]+c->r[0]; // 80086D20
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086D24
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 80086D28
  c->f[1]=c->ps1[1]=S(std::fma(c->f[5],c->f[4],c->f[6])); // 80086D2C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 80086D30
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086D34
  c->r[0]=R32(c->r[1]+0x00000020u); // 80086D38
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 80086D3C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80086D40
  W32(c->r[5]+0x0000016Cu,c->r[0]); // 80086D44
  c->r[4]=R32(c->r[1]+0x00000024u); // 80086D48
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80086D4C
  W32(c->r[5]+0x00000170u,c->r[4]); // 80086D50
  c->r[0]=R32(c->r[1]+0x00000028u); // 80086D54
  W32(c->r[5]+0x00000174u,c->r[0]); // 80086D58
  c->r[4]=R32(c->r[3]+0xFFFF816Cu); // 80086D5C
  c->r[0]=R8(c->r[23]+0x00000000u); // 80086D60
  c->r[4]=rotl(c->r[4],7)&0xFFFFFF80u; // 80086D64
  c->r[4]=c->r[22]+c->r[4]; // 80086D68
  W8(c->r[4]+0x00000178u,c->r[0]); // 80086D6C
  c->r[0]=R8(c->r[23]+0x00000001u); // 80086D70
  W8(c->r[4]+0x00000179u,c->r[0]); // 80086D74
  c->r[0]=R8(c->r[23]+0x00000002u); // 80086D78
  W8(c->r[4]+0x0000017Au,c->r[0]); // 80086D7C
  c->r[0]=R8(c->r[23]+0x00000003u); // 80086D80
  W8(c->r[4]+0x0000017Bu,c->r[0]); // 80086D84
  c->r[4]=R32(c->r[3]+0xFFFF816Cu); // 80086D88
  c->r[0]=R32(c->r[24]+0x00000000u); // 80086D8C
  c->r[4]=rotl(c->r[4],7)&0xFFFFFF80u; // 80086D90
  c->r[4]=c->r[22]+c->r[4]; // 80086D94
  W32(c->r[4]+0x0000017Cu,c->r[0]); // 80086D98
  c->r[0]=R32(c->r[24]+0x00000004u); // 80086D9C
  W32(c->r[4]+0x00000180u,c->r[0]); // 80086DA0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 80086DA4
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086DA8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086DAC
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[2]); // 80086DB0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086DB4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[2]); // 80086DB8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 80086DBC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 80086DC0
  {uint32_t ea=c->r[25]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 80086DC4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086DC8
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[7],c->f[5])); // 80086DCC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086DD0
  c->f[3]=c->ps1[3]=S(std::fma(c->f[2],c->f[7],c->f[3])); // 80086DD4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[4]=c->ps1[4]=RF32(ea);} // 80086DD8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[7],c->f[1])); // 80086DDC
  {uint32_t ea=c->r[25]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 80086DE0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086DE4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086DE8
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[6],c->f[5])); // 80086DEC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[4]=c->ps1[4]=RF32(ea);} // 80086DF0
  c->f[3]=c->ps1[3]=S(std::fma(c->f[2],c->f[6],c->f[3])); // 80086DF4
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086DF8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[6],c->f[1])); // 80086DFC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086E00
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 80086E04
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80086E08
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80086E0C
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086E10
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80086E14
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086E18
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 80086E1C
  c->r[5]=c->r[22]+c->r[0]; // 80086E20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086E24
  W32(c->r[5]+0x00000184u,c->r[0]); // 80086E28
  c->r[4]=R32(c->r[1]+0x00000018u); // 80086E2C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 80086E30
  W32(c->r[5]+0x00000188u,c->r[4]); // 80086E34
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80086E38
  W32(c->r[5]+0x0000018Cu,c->r[0]); // 80086E3C
  c->r[4]=R32(c->r[3]+0xFFFF816Cu); // 80086E40
  c->r[0]=R8(c->r[26]+0x00000000u); // 80086E44
  c->r[4]=rotl(c->r[4],7)&0xFFFFFF80u; // 80086E48
  c->r[4]=c->r[22]+c->r[4]; // 80086E4C
  W8(c->r[4]+0x00000190u,c->r[0]); // 80086E50
  c->r[0]=R8(c->r[26]+0x00000001u); // 80086E54
  W8(c->r[4]+0x00000191u,c->r[0]); // 80086E58
  c->r[0]=R8(c->r[26]+0x00000002u); // 80086E5C
  W8(c->r[4]+0x00000192u,c->r[0]); // 80086E60
  c->r[0]=R8(c->r[26]+0x00000003u); // 80086E64
  W8(c->r[4]+0x00000193u,c->r[0]); // 80086E68
  c->r[4]=R32(c->r[3]+0xFFFF816Cu); // 80086E6C
  c->r[0]=R32(c->r[27]+0x00000000u); // 80086E70
  c->r[4]=rotl(c->r[4],7)&0xFFFFFF80u; // 80086E74
  c->r[4]=c->r[22]+c->r[4]; // 80086E78
  W32(c->r[4]+0x00000194u,c->r[0]); // 80086E7C
  c->r[0]=R32(c->r[27]+0x00000004u); // 80086E80
  W32(c->r[4]+0x00000198u,c->r[0]); // 80086E84
  {uint32_t ea=c->r[28]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 80086E88
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086E8C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086E90
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 80086E94
  {uint32_t ea=c->r[1]+0x00000048u; c->f[6]=c->ps1[6]=RF32(ea);} // 80086E98
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[4]); // 80086E9C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80086EA0
  c->f[7]=c->ps1[7]=S(c->f[6]*c->f[4]); // 80086EA4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086EA8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[5],c->f[1])); // 80086EAC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086EB0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 80086EB4
  c->f[3]=c->ps1[3]=S(std::fma(c->f[2],c->f[5],c->f[3])); // 80086EB8
  {uint32_t ea=c->r[28]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80086EBC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086EC0
  c->f[6]=c->ps1[6]=S(std::fma(c->f[6],c->f[5],c->f[7])); // 80086EC4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086EC8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[4],c->f[1])); // 80086ECC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086ED0
  c->f[3]=c->ps1[3]=S(std::fma(c->f[2],c->f[4],c->f[3])); // 80086ED4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[5]=c->ps1[5]=RF32(ea);} // 80086ED8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80086EDC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 80086EE0
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086EE4
  c->f[4]=c->ps1[4]=S(std::fma(c->f[5],c->f[4],c->f[6])); // 80086EE8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80086EEC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[3]); // 80086EF0
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086EF4
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086EF8
  c->r[4]=c->r[22]+c->r[0]; // 80086EFC
  c->r[0]=R32(c->r[1]+0x00000008u); // 80086F00
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 80086F04
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80086F08
  W32(c->r[4]+0x0000019Cu,c->r[0]); // 80086F0C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80086F10
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80086F14
  W32(c->r[4]+0x000001A0u,c->r[0]); // 80086F18
  c->r[0]=R32(c->r[1]+0x00000010u); // 80086F1C
  W32(c->r[4]+0x000001A4u,c->r[0]); // 80086F20
  c->r[4]=R32(c->r[3]+0xFFFF816Cu); // 80086F24
  c->r[0]=R8(c->r[29]+0x00000000u); // 80086F28
  c->r[4]=rotl(c->r[4],7)&0xFFFFFF80u; // 80086F2C
  c->r[4]=c->r[22]+c->r[4]; // 80086F30
  W8(c->r[4]+0x000001A8u,c->r[0]); // 80086F34
  c->r[0]=R8(c->r[29]+0x00000001u); // 80086F38
  W8(c->r[4]+0x000001A9u,c->r[0]); // 80086F3C
  c->r[0]=R8(c->r[29]+0x00000002u); // 80086F40
  W8(c->r[4]+0x000001AAu,c->r[0]); // 80086F44
  c->r[0]=R8(c->r[29]+0x00000003u); // 80086F48
  W8(c->r[4]+0x000001ABu,c->r[0]); // 80086F4C
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086F50
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086F54
  c->r[4]=c->r[22]+c->r[0]; // 80086F58
  c->r[0]=R32(c->r[30]+0x00000000u); // 80086F5C
  c->r[5]=0u+0x00000001u; // 80086F60
  W32(c->r[4]+0x000001ACu,c->r[0]); // 80086F64
  c->r[0]=R32(c->r[30]+0x00000004u); // 80086F68
  W32(c->r[4]+0x000001B0u,c->r[0]); // 80086F6C
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086F70
  c->r[6]=R32(c->r[31]+0x00000000u); // 80086F74
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086F78
  c->r[4]=c->r[22]+c->r[0]; // 80086F7C
  W32(c->r[4]+0x000001B4u,c->r[6]); // 80086F80
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086F84
  c->r[6]=R8(c->r[31]+0x0000000Cu); // 80086F88
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086F8C
  c->r[4]=c->r[22]+c->r[0]; // 80086F90
  W8(c->r[4]+0x000001C0u,c->r[6]); // 80086F94
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086F98
  c->r[6]=R8(c->r[31]+0x0000000Du); // 80086F9C
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086FA0
  c->r[4]=c->r[22]+c->r[0]; // 80086FA4
  W8(c->r[4]+0x000001C1u,c->r[6]); // 80086FA8
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086FAC
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086FB0
  c->r[4]=c->r[22]+c->r[0]; // 80086FB4
  W8(c->r[4]+0x000001C2u,c->r[5]); // 80086FB8
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086FBC
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086FC0
  c->r[4]=c->r[22]+c->r[0]; // 80086FC4
  {uint32_t ea=c->r[4]+0x00000174u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086FC8
  {uint32_t ea=c->r[4]+0x000001E4u; WF32(ea,c->f[0]);} // 80086FCC
  c->r[6]=R32(c->r[22]+0x00000160u); // 80086FD0
  c->r[31]=c->r[6]|c->r[6]; // 80086FD4
  goto L_8008714C; // 80086FD8
L_80086FDC:;
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 80086FDC
  c->r[5]=R32(c->r[31]+0x00000008u); // 80086FE0
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80086FE4
  c->r[4]=c->r[22]+c->r[0]; // 80086FE8
  {uint32_t ea=c->r[5]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086FEC
  {uint32_t ea=c->r[4]+0x000001E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80086FF0
  fcmp(c,0,c->f[1],c->f[0]); // 80086FF4
  if (!crb(c,1)) { goto L_80087148; } // 80086FF8
  cmps(c,0,(int32_t)c->r[31],0); // 80086FFC
  c->r[25]=c->r[6]|c->r[6]; // 80087000
  c->r[23]=c->r[4]+0x0000016Cu; // 80087004
  if (!crb(c,2)) { goto L_80087020; } // 80087008
  c->r[24]=R32(c->r[22]+0x00000164u); // 8008700C
  c->r[25]=0u+0x00000000u; // 80087010
  goto L_80087020; // 80087014
L_80087018:;
  c->r[24]=c->r[25]|c->r[25]; // 80087018
  c->r[25]=R32(c->r[25]+0x00000000u); // 8008701C
L_80087020:;
  cmps(c,0,(int32_t)c->r[25],0); // 80087020
  if (crb(c,2)) { goto L_80087030; } // 80087024
  cmpu(c,0,c->r[25],c->r[31]); // 80087028
  if (!crb(c,2)) { IRQCHK(c); goto L_80087018; } // 8008702C
L_80087030:;
  cmps(c,0,(int32_t)c->r[25],0); // 80087030
  if (!crb(c,2)) { goto L_8008709C; } // 80087034
  c->r[3]=0u+0x0000000Cu; // 80087038
  c->lr=0x80087040u; f_8008DC84(c); // 8008703C
  cmps(c,0,(int32_t)c->r[3],0); // 80087040
  if (crb(c,2)) { goto L_80087054; } // 80087044
  c->r[0]=0u+0x00000000u; // 80087048
  W32(c->r[3]+0x00000004u,c->r[0]); // 8008704C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80087050
L_80087054:;
  W32(c->r[3]+0x00000008u,c->r[23]); // 80087054
  c->r[4]=R32(c->r[22]+0x00000164u); // 80087058
  cmps(c,0,(int32_t)c->r[4],0); // 8008705C
  if (crb(c,2)) { goto L_80087068; } // 80087060
  W32(c->r[4]+0x00000000u,c->r[3]); // 80087064
L_80087068:;
  c->r[4]=R32(c->r[22]+0x00000164u); // 80087068
  c->r[0]=0u+0x00000000u; // 8008706C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80087070
  W32(c->r[3]+0x00000000u,c->r[0]); // 80087074
  c->r[0]=R32(c->r[22]+0x00000160u); // 80087078
  W32(c->r[22]+0x00000164u,c->r[3]); // 8008707C
  cmps(c,0,(int32_t)c->r[0],0); // 80087080
  if (!crb(c,2)) { goto L_8008708C; } // 80087084
  W32(c->r[22]+0x00000160u,c->r[3]); // 80087088
L_8008708C:;
  c->r[3]=R32(c->r[22]+0x00000168u); // 8008708C
  c->r[0]=c->r[3]+0x00000001u; // 80087090
  W32(c->r[22]+0x00000168u,c->r[0]); // 80087094
  goto L_80087154; // 80087098
L_8008709C:;
  cmpu(c,0,c->r[25],c->r[6]); // 8008709C
  if (!crb(c,2)) { goto L_80087100; } // 800870A0
  c->r[3]=0u+0x0000000Cu; // 800870A4
  c->lr=0x800870ACu; f_8008DC84(c); // 800870A8
  cmps(c,0,(int32_t)c->r[3],0); // 800870AC
  if (crb(c,2)) { goto L_800870C0; } // 800870B0
  c->r[0]=0u+0x00000000u; // 800870B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800870B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800870BC
L_800870C0:;
  W32(c->r[3]+0x00000008u,c->r[23]); // 800870C0
  c->r[0]=0u+0x00000000u; // 800870C4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800870C8
  c->r[0]=R32(c->r[22]+0x00000160u); // 800870CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800870D0
  c->r[4]=R32(c->r[22]+0x00000160u); // 800870D4
  cmps(c,0,(int32_t)c->r[4],0); // 800870D8
  if (crb(c,2)) { goto L_800870E8; } // 800870DC
  W32(c->r[4]+0x00000004u,c->r[3]); // 800870E0
  goto L_800870EC; // 800870E4
L_800870E8:;
  W32(c->r[22]+0x00000164u,c->r[3]); // 800870E8
L_800870EC:;
  c->r[4]=R32(c->r[22]+0x00000168u); // 800870EC
  W32(c->r[22]+0x00000160u,c->r[3]); // 800870F0
  c->r[0]=c->r[4]+0x00000001u; // 800870F4
  W32(c->r[22]+0x00000168u,c->r[0]); // 800870F8
  goto L_80087154; // 800870FC
L_80087100:;
  cmpu(c,0,c->r[25],c->r[31]); // 80087100
  if (!crb(c,2)) { goto L_80087154; } // 80087104
  c->r[3]=0u+0x0000000Cu; // 80087108
  c->lr=0x80087110u; f_8008DC84(c); // 8008710C
  cmps(c,0,(int32_t)c->r[3],0); // 80087110
  if (crb(c,2)) { goto L_80087124; } // 80087114
  c->r[0]=0u+0x00000000u; // 80087118
  W32(c->r[3]+0x00000004u,c->r[0]); // 8008711C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80087120
L_80087124:;
  W32(c->r[3]+0x00000008u,c->r[23]); // 80087124
  W32(c->r[24]+0x00000000u,c->r[3]); // 80087128
  W32(c->r[3]+0x00000004u,c->r[24]); // 8008712C
  W32(c->r[3]+0x00000000u,c->r[25]); // 80087130
  W32(c->r[25]+0x00000004u,c->r[3]); // 80087134
  c->r[3]=R32(c->r[22]+0x00000168u); // 80087138
  c->r[0]=c->r[3]+0x00000001u; // 8008713C
  W32(c->r[22]+0x00000168u,c->r[0]); // 80087140
  goto L_80087154; // 80087144
L_80087148:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80087148
L_8008714C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8008714C
  if (!crb(c,2)) { IRQCHK(c); goto L_80086FDC; } // 80087150
L_80087154:;
  cmps(c,0,(int32_t)c->r[31],0); // 80087154
  if (!crb(c,2)) { goto L_800871D0; } // 80087158
  c->r[4]=c->r[22]+0x00010000u; // 8008715C
  c->r[3]=0u+0x0000000Cu; // 80087160
  c->r[0]=R32(c->r[4]+0xFFFF816Cu); // 80087164
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80087168
  c->r[4]=c->r[22]+c->r[0]; // 8008716C
  c->r[23]=c->r[4]+0x0000016Cu; // 80087170
  c->lr=0x80087178u; f_8008DC84(c); // 80087174
  cmps(c,0,(int32_t)c->r[3],0); // 80087178
  if (crb(c,2)) { goto L_8008718C; } // 8008717C
  c->r[0]=0u+0x00000000u; // 80087180
  W32(c->r[3]+0x00000004u,c->r[0]); // 80087184
  W32(c->r[3]+0x00000000u,c->r[0]); // 80087188
L_8008718C:;
  W32(c->r[3]+0x00000008u,c->r[23]); // 8008718C
  c->r[4]=R32(c->r[22]+0x00000164u); // 80087190
  cmps(c,0,(int32_t)c->r[4],0); // 80087194
  if (crb(c,2)) { goto L_800871A0; } // 80087198
  W32(c->r[4]+0x00000000u,c->r[3]); // 8008719C
L_800871A0:;
  c->r[4]=R32(c->r[22]+0x00000164u); // 800871A0
  c->r[0]=0u+0x00000000u; // 800871A4
  W32(c->r[3]+0x00000004u,c->r[4]); // 800871A8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800871AC
  c->r[0]=R32(c->r[22]+0x00000160u); // 800871B0
  W32(c->r[22]+0x00000164u,c->r[3]); // 800871B4
  cmps(c,0,(int32_t)c->r[0],0); // 800871B8
  if (!crb(c,2)) { goto L_800871C4; } // 800871BC
  W32(c->r[22]+0x00000160u,c->r[3]); // 800871C0
L_800871C4:;
  c->r[3]=R32(c->r[22]+0x00000168u); // 800871C4
  c->r[0]=c->r[3]+0x00000001u; // 800871C8
  W32(c->r[22]+0x00000168u,c->r[0]); // 800871CC
L_800871D0:;
  c->r[4]=c->r[22]+0x00010000u; // 800871D0
  c->r[3]=R32(c->r[4]+0xFFFF816Cu); // 800871D4
  c->r[0]=c->r[3]+0x00000001u; // 800871D8
  W32(c->r[4]+0xFFFF816Cu,c->r[0]); // 800871DC
L_800871E0:;
  c->r[11]=c->r[1]+0x000000A0u; // 800871E0
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 800871E4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 800871E8
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 800871EC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 800871F0
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 800871F4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 800871F8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,28,ea,0,0);} // 800871FC
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[28]=RF64(ea);} // 80087200
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,27,ea,0,0);} // 80087204
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[27]=RF64(ea);} // 80087208
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,26,ea,0,0);} // 8008720C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[26]=RF64(ea);} // 80087210
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,25,ea,0,0);} // 80087214
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[25]=RF64(ea);} // 80087218
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,24,ea,0,0);} // 8008721C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[24]=RF64(ea);} // 80087220
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,23,ea,0,0);} // 80087224
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[23]=RF64(ea);} // 80087228
  c->lr=0x80087230u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008722C
  c->r[0]=R32(c->r[1]+0x00000134u); // 80087230
  c->lr=c->r[0]; // 80087234
  c->r[1]=c->r[1]+0x00000130u; // 80087238
  return; // 8008723C
}

// SetFOV__11WiiGraphicsFf
void f_80087240(Ctx* __restrict c) {
  trace_call(0x80087240u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087240
  c->r[0]=c->lr; // 80087244
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80087248
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8008724C
  c->r[0]=0u+0x43300000u; // 80087250
  fcmp(c,1,c->f[1],c->f[0]); // 80087254
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80087258
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 8008725C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 80087260
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 80087264
  W32(c->r[1]+0x000000BCu,c->r[31]); // 80087268
  c->r[31]=c->r[3]|c->r[3]; // 8008726C
  W32(c->r[1]+0x000000B8u,c->r[30]); // 80087270
  W32(c->r[1]+0x000000B4u,c->r[29]); // 80087274
  W32(c->r[1]+0x00000090u,c->r[0]); // 80087278
  W32(c->r[1]+0x00000098u,c->r[0]); // 8008727C
  if (crb(c,4)) { goto L_800874A0; } // 80087280
  {uint32_t ea=c->r[2]+0xFFFF8C84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80087284
  fcmp(c,0,c->f[1],c->f[0]); // 80087288
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8008728C
  if (!crb(c,2)) { goto L_80087298; } // 80087290
  goto L_800874A0; // 80087294
L_80087298:;
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[1]);} // 80087298
  if (!crb(c,5)) { goto L_80087380; } // 8008729C
  c->r[4]=c->r[3]+0x00010000u; // 800872A0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800872A4
  c->r[3]=R32(c->r[4]+0xFFFF81CCu); // 800872A8
  c->r[0]=R32(c->r[4]+0xFFFF81D0u); // 800872AC
  W32(c->r[1]+0x00000094u,c->r[3]); // 800872B0
  {uint32_t ea=c->r[2]+0xFFFF8C80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800872B4
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800872B8
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[1]); // 800872BC
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[4]=RF64(ea);} // 800872C0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 800872C4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=RF64(ea);} // 800872C8
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[4]); // 800872CC
  {uint32_t ea=c->r[2]+0xFFFF8C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800872D0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[4]); // 800872D4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[5]); // 800872D8
  c->f[31]=c->ps1[31]=S(c->f[3]/c->f[2]); // 800872DC
  c->lr=0x800872E4u; f_800E3E8C(c); // 800872E0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800872E4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 800872E8
  c->lr=0x800872F0u; f_800E3510(c); // 800872EC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800872F0
  {uint32_t ea=c->r[2]+0xFFFF8C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800872F4
  c->r[0]=R32(c->r[13]+0xFFFF8BD8u); // 800872F8
  {uint32_t ea=c->r[2]+0xFFFF8C88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800872FC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80087300
  {uint32_t ea=c->r[2]+0xFFFF8C84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80087304
  cmps(c,0,(int32_t)c->r[0],1); // 80087308
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8008730C
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 80087310
  if (!crb(c,2)) { goto L_80087320; } // 80087314
  {uint32_t ea=c->r[2]+0xFFFF8C8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80087318
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8008731C
L_80087320:;
  c->f[1]=c->f[30]; // 80087320
  {uint32_t ea=c->r[2]+0xFFFF8C64u; c->f[3]=c->ps1[3]=RF32(ea);} // 80087324
  c->f[2]=c->f[31]; // 80087328
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[4]=c->ps1[4]=RF32(ea);} // 8008732C
  c->r[3]=c->r[1]+0x00000050u; // 80087330
  c->lr=0x80087338u; f_800B8AC4(c); // 80087334
  c->r[3]=c->r[1]+0x00000050u; // 80087338
  c->r[4]=0u+0x00000000u; // 8008733C
  c->lr=0x80087344u; f_800D3620(c); // 80087340
  c->r[3]=c->r[31]+0x00000098u; // 80087344
  c->r[4]=c->r[1]+0x00000050u; // 80087348
  c->r[5]=0u+0x00000040u; // 8008734C
  c->lr=0x80087354u; f_80004338(c); // 80087350
  c->r[3]=c->r[31]+0x00010000u; // 80087354
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80087358
  c->lr=0x80087360u; f_801F9A30(c); // 8008735C
  c->f[1]=c->f[30]; // 80087360
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80087364
  c->f[2]=c->f[31]; // 80087368
  {uint32_t ea=c->r[2]+0xFFFF8C64u; c->f[3]=c->ps1[3]=RF32(ea);} // 8008736C
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[4]=c->ps1[4]=RF32(ea);} // 80087370
  c->r[3]=c->r[1]+0x0000000Cu; // 80087374
  c->lr=0x8008737Cu; f_801F3CC0(c); // 80087378
  goto L_800874A0; // 8008737C
L_80087380:;
  c->r[3]=c->r[3]+0x00010000u; // 80087380
  c->r[4]=R32(c->r[13]+0xFFFF8B80u); // 80087384
  c->r[0]=R8(c->r[3]+0xFFFF81E4u); // 80087388
  c->r[29]=0u+0x00000000u; // 8008738C
  c->r[3]=R16(c->r[4]+0x00000004u); // 80087390
  cmps(c,0,(int32_t)c->r[0],0); // 80087394
  c->r[5]=c->r[3]|c->r[3]; // 80087398
  if (crb(c,2)) { goto L_800873E4; } // 8008739C
  c->r[0]=R32(c->r[13]+0xFFFF8BD8u); // 800873A0
  cmps(c,0,(int32_t)c->r[0],1); // 800873A4
  if (!crb(c,2)) { goto L_800873E4; } // 800873A8
  W32(c->r[1]+0x00000094u,c->r[3]); // 800873AC
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=RF64(ea);} // 800873B0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=RF64(ea);} // 800873B4
  {uint32_t ea=c->r[2]+0xFFFF8C90u; c->f[0]=c->ps1[0]=RF32(ea);} // 800873B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800873BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800873C0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800873C4
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[0]);} // 800873C8
  c->r[5]=R32(c->r[1]+0x000000A4u); // 800873CC
  c->r[0]=c->r[5]-c->r[3]; // 800873D0
  c->r[3]=0u-c->r[0]; // 800873D4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800873D8
  c->r[0]=c->r[0]+c->r[3]; // 800873DC
  c->r[29]=sraw(c,c->r[0],1); // 800873E0
L_800873E4:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 800873E4
  c->r[4]=c->r[29]^0x80000000u; // 800873E8
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800873EC
  c->r[30]=c->r[5]+c->r[29]; // 800873F0
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800873F4
  c->r[0]=c->r[30]^0x80000000u; // 800873F8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 800873FC
  c->r[3]=c->r[1]+0x00000010u; // 80087400
  W32(c->r[1]+0x00000094u,c->r[4]); // 80087404
  c->f[5]=c->f[1]; // 80087408
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=RF64(ea);} // 8008740C
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80087410
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 80087414
  {uint32_t ea=c->r[2]+0xFFFF8C98u; c->f[4]=RF64(ea);} // 80087418
  {uint32_t ea=c->r[1]+0x00000090u; c->f[3]=RF64(ea);} // 8008741C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 80087420
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80087424
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80087428
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 8008742C
  c->lr=0x80087434u; f_800B8BB0(c); // 80087430
  c->r[3]=c->r[1]+0x00000010u; // 80087434
  c->r[4]=0u+0x00000001u; // 80087438
  c->lr=0x80087440u; f_800D3620(c); // 8008743C
  c->r[3]=c->r[31]+0x00010000u; // 80087440
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80087444
  c->lr=0x8008744Cu; f_801F9A30(c); // 80087448
  W32(c->r[1]+0x00000008u,c->r[3]); // 8008744C
  c->r[3]=c->r[29]^0x80000000u; // 80087450
  c->r[4]=R32(c->r[13]+0xFFFF8B80u); // 80087454
  c->r[0]=c->r[30]^0x80000000u; // 80087458
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 8008745C
  c->r[3]=c->r[1]+0x00000008u; // 80087460
  c->r[4]=R16(c->r[4]+0x00000006u); // 80087464
  W32(c->r[1]+0x00000094u,c->r[4]); // 80087468
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008746C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80087470
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=RF64(ea);} // 80087474
  c->f[5]=c->f[1]; // 80087478
  W32(c->r[1]+0x00000094u,c->r[0]); // 8008747C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 80087480
  {uint32_t ea=c->r[2]+0xFFFF8C98u; c->f[4]=RF64(ea);} // 80087484
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=RF64(ea);} // 80087488
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8008748C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80087490
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80087494
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 80087498
  c->lr=0x800874A0u; f_801F3D90(c); // 8008749C
L_800874A0:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800874A0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800874A4
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800874A8
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 800874AC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 800874B0
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800874B4
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800874B8
  c->r[29]=R32(c->r[1]+0x000000B4u); // 800874BC
  c->lr=c->r[0]; // 800874C0
  c->r[1]=c->r[1]+0x000000E0u; // 800874C4
  return; // 800874C8
}

// SetFloatOption__11WiiGraphicsF13RenderOptionsf
void f_800874CC(Ctx* __restrict c) {
  trace_call(0x800874CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800874CC
  c->r[0]=c->lr; // 800874D0
  cmpu(c,0,c->r[4],0x0000000Eu); // 800874D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800874D8
  if (crb(c,1)) { goto L_80087668; } // 800874DC
  c->r[5]=0u+0x80260000u; // 800874E0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800874E4
  c->r[5]=c->r[5]+0x000043D0u; // 800874E8
  c->r[5]=R32(c->r[5]+c->r[0]); // 800874EC
  c->ctr=c->r[5]; // 800874F0
  if (true) { switch (c->ctr) { case 0x800874F8u: goto L_800874F8; case 0x8008750Cu: goto L_8008750C; case 0x80087514u: goto L_80087514; case 0x80087538u: goto L_80087538; case 0x8008755Cu: goto L_8008755C; case 0x80087580u: goto L_80087580; case 0x80087588u: goto L_80087588; case 0x80087590u: goto L_80087590; case 0x800875A4u: goto L_800875A4; case 0x800875B8u: goto L_800875B8; case 0x800875CCu: goto L_800875CC; case 0x800875E0u: goto L_800875E0; case 0x800875F8u: goto L_800875F8; case 0x8008761Cu: goto L_8008761C; case 0x80087640u: goto L_80087640; default: break; } dispatch(c,c->ctr); return; } // 800874F4
L_800874F8:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800874F8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800874FC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80087500
  W8(c->r[3]+0x00000123u,c->r[0]); // 80087504
  goto L_80087668; // 80087508
L_8008750C:;
  c->lr=0x80087510u; f_80087240(c); // 8008750C
  goto L_80087668; // 80087510
L_80087514:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80087514
  fcmp(c,0,c->f[0],c->f[1]); // 80087518
  if (!crb(c,2)) { goto L_8008752C; } // 8008751C
  c->r[0]=0u+0x00000000u; // 80087520
  W8(c->r[3]+0x00000124u,c->r[0]); // 80087524
  goto L_80087668; // 80087528
L_8008752C:;
  c->r[0]=0u+0x00000001u; // 8008752C
  W8(c->r[3]+0x00000124u,c->r[0]); // 80087530
  goto L_80087668; // 80087534
L_80087538:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80087538
  fcmp(c,0,c->f[0],c->f[1]); // 8008753C
  if (!crb(c,2)) { goto L_80087550; } // 80087540
  c->r[0]=0u+0x00000000u; // 80087544
  W8(c->r[3]+0x00000126u,c->r[0]); // 80087548
  goto L_80087668; // 8008754C
L_80087550:;
  c->r[0]=0u+0x00000001u; // 80087550
  W8(c->r[3]+0x00000126u,c->r[0]); // 80087554
  goto L_80087668; // 80087558
L_8008755C:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008755C
  fcmp(c,0,c->f[0],c->f[1]); // 80087560
  if (!crb(c,2)) { goto L_80087574; } // 80087564
  c->r[0]=0u+0x00000000u; // 80087568
  W8(c->r[3]+0x0000014Cu,c->r[0]); // 8008756C
  goto L_80087668; // 80087570
L_80087574:;
  c->r[0]=0u+0x00000001u; // 80087574
  W8(c->r[3]+0x0000014Cu,c->r[0]); // 80087578
  goto L_80087668; // 8008757C
L_80087580:;
  {uint32_t ea=c->r[3]+0x00000150u; WF32(ea,c->f[1]);} // 80087580
  goto L_80087668; // 80087584
L_80087588:;
  {uint32_t ea=c->r[3]+0x00000154u; WF32(ea,c->f[1]);} // 80087588
  goto L_80087668; // 8008758C
L_80087590:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80087590
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80087594
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80087598
  W8(c->r[3]+0x00000158u,c->r[0]); // 8008759C
  goto L_80087668; // 800875A0
L_800875A4:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800875A4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800875A8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800875AC
  W8(c->r[3]+0x00000159u,c->r[0]); // 800875B0
  goto L_80087668; // 800875B4
L_800875B8:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800875B8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800875BC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800875C0
  W8(c->r[3]+0x0000015Au,c->r[0]); // 800875C4
  goto L_80087668; // 800875C8
L_800875CC:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800875CC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800875D0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800875D4
  W32(c->r[3]+0x00000128u,c->r[0]); // 800875D8
  goto L_80087668; // 800875DC
L_800875E0:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800875E0
  c->r[3]=c->r[3]+0x00010000u; // 800875E4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800875E8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800875EC
  W8(c->r[3]+0xFFFF81B8u,c->r[0]); // 800875F0
  goto L_80087668; // 800875F4
L_800875F8:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800875F8
  fcmp(c,0,c->f[0],c->f[1]); // 800875FC
  if (!crb(c,2)) { goto L_80087610; } // 80087600
  c->r[0]=0u+0x00000000u; // 80087604
  W8(c->r[3]+0x0000015Cu,c->r[0]); // 80087608
  goto L_80087668; // 8008760C
L_80087610:;
  c->r[0]=0u+0x00000001u; // 80087610
  W8(c->r[3]+0x0000015Cu,c->r[0]); // 80087614
  goto L_80087668; // 80087618
L_8008761C:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008761C
  fcmp(c,0,c->f[0],c->f[1]); // 80087620
  if (!crb(c,2)) { goto L_80087634; } // 80087624
  c->r[0]=0u+0x00000000u; // 80087628
  W8(c->r[3]+0x0000015Du,c->r[0]); // 8008762C
  goto L_80087668; // 80087630
L_80087634:;
  c->r[0]=0u+0x00000001u; // 80087634
  W8(c->r[3]+0x0000015Du,c->r[0]); // 80087638
  goto L_80087668; // 8008763C
L_80087640:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80087640
  fcmp(c,0,c->f[0],c->f[1]); // 80087644
  if (!crb(c,2)) { goto L_8008765C; } // 80087648
  c->r[3]=c->r[3]+0x00010000u; // 8008764C
  c->r[0]=0u+0x00000000u; // 80087650
  W8(c->r[3]+0xFFFF81E4u,c->r[0]); // 80087654
  goto L_80087668; // 80087658
L_8008765C:;
  c->r[3]=c->r[3]+0x00010000u; // 8008765C
  c->r[0]=0u+0x00000001u; // 80087660
  W8(c->r[3]+0xFFFF81E4u,c->r[0]); // 80087664
L_80087668:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087668
  c->lr=c->r[0]; // 8008766C
  c->r[1]=c->r[1]+0x00000010u; // 80087670
  return; // 80087674
}

// GetFloatOption__11WiiGraphicsF13RenderOptions
void f_80087678(Ctx* __restrict c) {
  trace_call(0x80087678u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087678
  c->r[0]=0u+0x43300000u; // 8008767C
  cmpu(c,0,c->r[4],0x0000000Eu); // 80087680
  W32(c->r[1]+0x00000008u,c->r[0]); // 80087684
  W32(c->r[1]+0x00000010u,c->r[0]); // 80087688
  if (crb(c,1)) { goto L_80087834; } // 8008768C
  c->r[5]=0u+0x80260000u; // 80087690
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80087694
  c->r[5]=c->r[5]+0x0000440Cu; // 80087698
  c->r[5]=R32(c->r[5]+c->r[0]); // 8008769C
  c->ctr=c->r[5]; // 800876A0
  if (true) { switch (c->ctr) { case 0x800876A8u: goto L_800876A8; case 0x800876C0u: goto L_800876C0; case 0x800876C8u: goto L_800876C8; case 0x800876E4u: goto L_800876E4; case 0x80087700u: goto L_80087700; case 0x8008771Cu: goto L_8008771C; case 0x80087724u: goto L_80087724; case 0x8008772Cu: goto L_8008772C; case 0x80087744u: goto L_80087744; case 0x8008775Cu: goto L_8008775C; case 0x80087774u: goto L_80087774; case 0x80087790u: goto L_80087790; case 0x800877ACu: goto L_800877AC; case 0x800877D8u: goto L_800877D8; case 0x80087804u: goto L_80087804; default: break; } dispatch(c,c->ctr); return; } // 800876A4
L_800876A8:;
  c->r[0]=R8(c->r[3]+0x00000123u); // 800876A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800876AC
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[1]=RF64(ea);} // 800876B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800876B4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800876B8
  goto L_80087838; // 800876BC
L_800876C0:;
  {uint32_t ea=c->r[3]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800876C0
  goto L_80087838; // 800876C4
L_800876C8:;
  c->r[0]=R8(c->r[3]+0x00000124u); // 800876C8
  cmps(c,0,(int32_t)c->r[0],0); // 800876CC
  if (crb(c,2)) { goto L_800876DC; } // 800876D0
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800876D4
  goto L_80087838; // 800876D8
L_800876DC:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800876DC
  goto L_80087838; // 800876E0
L_800876E4:;
  c->r[0]=R8(c->r[3]+0x00000126u); // 800876E4
  cmps(c,0,(int32_t)c->r[0],0); // 800876E8
  if (crb(c,2)) { goto L_800876F8; } // 800876EC
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800876F0
  goto L_80087838; // 800876F4
L_800876F8:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800876F8
  goto L_80087838; // 800876FC
L_80087700:;
  c->r[0]=R8(c->r[3]+0x0000014Cu); // 80087700
  cmps(c,0,(int32_t)c->r[0],0); // 80087704
  if (crb(c,2)) { goto L_80087714; } // 80087708
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8008770C
  goto L_80087838; // 80087710
L_80087714:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80087714
  goto L_80087838; // 80087718
L_8008771C:;
  {uint32_t ea=c->r[3]+0x00000150u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008771C
  goto L_80087838; // 80087720
L_80087724:;
  {uint32_t ea=c->r[3]+0x00000154u; c->f[1]=c->ps1[1]=RF32(ea);} // 80087724
  goto L_80087838; // 80087728
L_8008772C:;
  c->r[0]=R8(c->r[3]+0x00000158u); // 8008772C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087730
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[1]=RF64(ea);} // 80087734
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80087738
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8008773C
  goto L_80087838; // 80087740
L_80087744:;
  c->r[0]=R8(c->r[3]+0x00000159u); // 80087744
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80087748
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[1]=RF64(ea);} // 8008774C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80087750
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80087754
  goto L_80087838; // 80087758
L_8008775C:;
  c->r[0]=R8(c->r[3]+0x0000015Au); // 8008775C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087760
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[1]=RF64(ea);} // 80087764
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80087768
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8008776C
  goto L_80087838; // 80087770
L_80087774:;
  c->r[0]=R32(c->r[3]+0x00000128u); // 80087774
  {uint32_t ea=c->r[2]+0xFFFF8C98u; c->f[1]=RF64(ea);} // 80087778
  c->r[0]=c->r[0]^0x80000000u; // 8008777C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80087780
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80087784
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80087788
  goto L_80087838; // 8008778C
L_80087790:;
  c->r[3]=c->r[3]+0x00010000u; // 80087790
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[1]=RF64(ea);} // 80087794
  c->r[0]=R8(c->r[3]+0xFFFF81B8u); // 80087798
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008779C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800877A0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800877A4
  goto L_80087838; // 800877A8
L_800877AC:;
  c->r[0]=R8(c->r[3]+0x0000015Cu); // 800877AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800877B0
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=RF64(ea);} // 800877B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800877B8
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800877BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800877C0
  fcmp(c,0,c->f[1],c->f[0]); // 800877C4
  if (!crb(c,2)) { goto L_800877D0; } // 800877C8
  goto L_80087838; // 800877CC
L_800877D0:;
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800877D0
  goto L_80087838; // 800877D4
L_800877D8:;
  c->r[0]=R8(c->r[3]+0x0000015Du); // 800877D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800877DC
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=RF64(ea);} // 800877E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800877E4
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800877E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800877EC
  fcmp(c,0,c->f[1],c->f[0]); // 800877F0
  if (!crb(c,2)) { goto L_800877FC; } // 800877F4
  goto L_80087838; // 800877F8
L_800877FC:;
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800877FC
  goto L_80087838; // 80087800
L_80087804:;
  c->r[3]=c->r[3]+0x00010000u; // 80087804
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=RF64(ea);} // 80087808
  c->r[0]=R8(c->r[3]+0xFFFF81E4u); // 8008780C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80087810
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80087814
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80087818
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008781C
  fcmp(c,0,c->f[1],c->f[0]); // 80087820
  if (!crb(c,2)) { goto L_8008782C; } // 80087824
  goto L_80087838; // 80087828
L_8008782C:;
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8008782C
  goto L_80087838; // 80087830
L_80087834:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80087834
L_80087838:;
  c->r[1]=c->r[1]+0x00000020u; // 80087838
  return; // 8008783C
}

// SetVertexArray__11WiiGraphicsFPiiPvi15VertexComponent
void f_80087840(Ctx* __restrict c) {
  trace_call(0x80087840u);
  cmps(c,0,(int32_t)c->r[8],0); // 80087840
  if (crb(c,2)) { goto L_8008786C; } // 80087844
  cmps(c,0,(int32_t)c->r[8],1); // 80087848
  if (crb(c,2)) { goto L_80087888; } // 8008784C
  cmps(c,0,(int32_t)c->r[8],2); // 80087850
  if (crb(c,2)) { goto L_800878A4; } // 80087854
  cmps(c,0,(int32_t)c->r[8],4); // 80087858
  if (crb(c,2)) { goto L_800878C0; } // 8008785C
  cmps(c,0,(int32_t)c->r[8],8); // 80087860
  if (crb(c,2)) { goto L_800878DC; } // 80087864
  return; // 80087868
L_8008786C:;
  c->r[8]=c->r[3]+0x00010000u; // 8008786C
  c->r[3]=0u+0x00000009u; // 80087870
  W32(c->r[8]+0xFFFF8170u,c->r[4]); // 80087874
  c->r[5]=0u+0x0000000Cu; // 80087878
  W32(c->r[8]+0xFFFF8184u,c->r[6]); // 8008787C
  W32(c->r[8]+0xFFFF8198u,c->r[7]); // 80087880
  goto L_800878FC; // 80087884
L_80087888:;
  c->r[8]=c->r[3]+0x00010000u; // 80087888
  c->r[3]=0u+0x0000000Bu; // 8008788C
  W32(c->r[8]+0xFFFF8178u,c->r[4]); // 80087890
  c->r[5]=0u+0x00000004u; // 80087894
  W32(c->r[8]+0xFFFF818Cu,c->r[6]); // 80087898
  W32(c->r[8]+0xFFFF81A0u,c->r[7]); // 8008789C
  goto L_800878FC; // 800878A0
L_800878A4:;
  c->r[8]=c->r[3]+0x00010000u; // 800878A4
  c->r[3]=0u+0x0000000Au; // 800878A8
  W32(c->r[8]+0xFFFF8174u,c->r[4]); // 800878AC
  c->r[5]=0u+0x0000000Cu; // 800878B0
  W32(c->r[8]+0xFFFF8188u,c->r[6]); // 800878B4
  W32(c->r[8]+0xFFFF819Cu,c->r[7]); // 800878B8
  goto L_800878FC; // 800878BC
L_800878C0:;
  c->r[8]=c->r[3]+0x00010000u; // 800878C0
  c->r[3]=0u+0x0000000Du; // 800878C4
  W32(c->r[8]+0xFFFF817Cu,c->r[4]); // 800878C8
  c->r[5]=0u+0x00000008u; // 800878CC
  W32(c->r[8]+0xFFFF8190u,c->r[6]); // 800878D0
  W32(c->r[8]+0xFFFF81A4u,c->r[7]); // 800878D4
  goto L_800878FC; // 800878D8
L_800878DC:;
  c->r[8]=c->r[3]+0x00010000u; // 800878DC
  c->r[3]=0u+0x0000000Eu; // 800878E0
  W32(c->r[8]+0xFFFF8180u,c->r[4]); // 800878E4
  c->r[5]=0u+0x00000008u; // 800878E8
  W32(c->r[8]+0xFFFF8194u,c->r[6]); // 800878EC
  W32(c->r[8]+0xFFFF81A8u,c->r[7]); // 800878F0
  goto L_800878FC; // 800878F4
  return; // 800878F8
L_800878FC:;
  c->r[4]=c->r[6]|c->r[6]; // 800878FC
  f_800CF1AC(c); return; // 80087900
  return; // 80087904
}

// fn_80087904
void f_80087904(Ctx* __restrict c) {
  trace_call(0x80087904u);
  return; // 80087904
}

// RenderArrayTriangles__11WiiGraphicsFi12VertexFormatR8Material
void f_80087908(Ctx* __restrict c) {
  trace_call(0x80087908u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087908
  c->r[0]=c->lr; // 8008790C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80087910
  c->r[11]=c->r[1]+0x000000E0u; // 80087914
  c->lr=0x8008791Cu; f_800D49E0(c); // 80087918
  c->r[0]=R8(c->r[6]+0x0000000Fu); // 8008791C
  c->r[22]=c->r[3]|c->r[3]; // 80087920
  c->r[14]=c->r[4]|c->r[4]; // 80087924
  c->r[15]=c->r[5]|c->r[5]; // 80087928
  cmps(c,0,(int32_t)c->r[0],0); // 8008792C
  c->r[23]=c->r[6]|c->r[6]; // 80087930
  if (crb(c,2)) { goto L_80087BF8; } // 80087934
  c->r[0]=R8(c->r[3]+0x00000126u); // 80087938
  cmps(c,0,(int32_t)c->r[0],0); // 8008793C
  if (crb(c,2)) { goto L_80087BF8; } // 80087940
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80087944
  c->r[29]=c->r[3]+0x00010000u; // 80087948
  c->r[30]=0u+0x000000FFu; // 8008794C
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80087950
  c->r[0]=rotl(c->r[5],0)&0x00000001u; // 80087954
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80087958
  c->r[0]=rotl(c->r[5],0)&0x00000004u; // 8008795C
  c->r[27]=R32(c->r[29]+0xFFFF8184u); // 80087960
  W8(c->r[1]+0x00000064u,c->r[30]); // 80087964
  c->r[14]=c->r[3]-c->r[4]; // 80087968
  c->r[26]=R32(c->r[29]+0xFFFF818Cu); // 8008796C
  c->r[24]=0u+0x00000000u; // 80087970
  W32(c->r[1]+0x00000088u,c->r[0]); // 80087974
  c->r[28]=0u+0x00000000u; // 80087978
  c->r[25]=R32(c->r[29]+0xFFFF8190u); // 8008797C
  W8(c->r[1]+0x00000065u,c->r[30]); // 80087980
  W8(c->r[1]+0x00000066u,c->r[30]); // 80087984
  W8(c->r[1]+0x00000067u,c->r[30]); // 80087988
  W8(c->r[1]+0x00000068u,c->r[30]); // 8008798C
  W8(c->r[1]+0x00000069u,c->r[30]); // 80087990
  W8(c->r[1]+0x0000006Au,c->r[30]); // 80087994
  W8(c->r[1]+0x0000006Bu,c->r[30]); // 80087998
  W8(c->r[1]+0x0000006Cu,c->r[30]); // 8008799C
  W8(c->r[1]+0x0000006Du,c->r[30]); // 800879A0
  W8(c->r[1]+0x0000006Eu,c->r[30]); // 800879A4
  W8(c->r[1]+0x0000006Fu,c->r[30]); // 800879A8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800879AC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800879B0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 800879B4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800879B8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 800879BC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 800879C0
  goto L_80087BEC; // 800879C4
L_800879C8:;
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 800879C8
  cmps(c,0,(int32_t)c->r[0],0); // 800879CC
  if (crb(c,2)) { goto L_80087A60; } // 800879D0
  c->r[3]=c->r[22]+0x00010000u; // 800879D4
  c->r[0]=R32(c->r[3]+0xFFFF8178u); // 800879D8
  c->r[5]=c->r[0]+c->r[28]; // 800879DC
  c->r[4]=R32(c->r[28]+c->r[0]); // 800879E0
  c->r[3]=R32(c->r[5]+0x00000004u); // 800879E4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800879E8
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800879EC
  {uint32_t ea=c->r[4]+c->r[26]; c->r[15]=R8(ea); c->r[4]=ea;} // 800879F0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800879F4
  {uint32_t ea=c->r[3]+c->r[26]; c->r[9]=R8(ea); c->r[3]=ea;} // 800879F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800879FC
  c->r[12]=R8(c->r[4]+0x00000001u); // 80087A00
  c->r[16]=c->r[26]+c->r[0]; // 80087A04
  c->r[5]=R8(c->r[26]+c->r[0]); // 80087A08
  c->r[11]=R8(c->r[4]+0x00000002u); // 80087A0C
  c->r[10]=R8(c->r[4]+0x00000003u); // 80087A10
  c->r[8]=R8(c->r[3]+0x00000001u); // 80087A14
  c->r[7]=R8(c->r[3]+0x00000002u); // 80087A18
  c->r[6]=R8(c->r[3]+0x00000003u); // 80087A1C
  c->r[4]=R8(c->r[16]+0x00000001u); // 80087A20
  c->r[3]=R8(c->r[16]+0x00000002u); // 80087A24
  c->r[0]=R8(c->r[16]+0x00000003u); // 80087A28
  W8(c->r[1]+0x00000064u,c->r[15]); // 80087A2C
  W8(c->r[1]+0x00000065u,c->r[12]); // 80087A30
  W8(c->r[1]+0x00000066u,c->r[11]); // 80087A34
  W8(c->r[1]+0x00000067u,c->r[10]); // 80087A38
  W8(c->r[1]+0x00000068u,c->r[9]); // 80087A3C
  W8(c->r[1]+0x00000069u,c->r[8]); // 80087A40
  W8(c->r[1]+0x0000006Au,c->r[7]); // 80087A44
  W8(c->r[1]+0x0000006Bu,c->r[6]); // 80087A48
  W8(c->r[1]+0x0000006Cu,c->r[5]); // 80087A4C
  W8(c->r[1]+0x0000006Du,c->r[4]); // 80087A50
  W8(c->r[1]+0x0000006Eu,c->r[3]); // 80087A54
  W8(c->r[1]+0x0000006Fu,c->r[0]); // 80087A58
  goto L_80087A90; // 80087A5C
L_80087A60:;
  W8(c->r[1]+0x00000064u,c->r[30]); // 80087A60
  W8(c->r[1]+0x00000065u,c->r[30]); // 80087A64
  W8(c->r[1]+0x00000066u,c->r[30]); // 80087A68
  W8(c->r[1]+0x00000067u,c->r[30]); // 80087A6C
  W8(c->r[1]+0x00000068u,c->r[30]); // 80087A70
  W8(c->r[1]+0x00000069u,c->r[30]); // 80087A74
  W8(c->r[1]+0x0000006Au,c->r[30]); // 80087A78
  W8(c->r[1]+0x0000006Bu,c->r[30]); // 80087A7C
  W8(c->r[1]+0x0000006Cu,c->r[30]); // 80087A80
  W8(c->r[1]+0x0000006Du,c->r[30]); // 80087A84
  W8(c->r[1]+0x0000006Eu,c->r[30]); // 80087A88
  W8(c->r[1]+0x0000006Fu,c->r[30]); // 80087A8C
L_80087A90:;
  c->r[0]=R32(c->r[1]+0x00000088u); // 80087A90
  cmps(c,0,(int32_t)c->r[0],0); // 80087A94
  if (crb(c,2)) { goto L_80087AF4; } // 80087A98
  c->r[3]=c->r[22]+0x00010000u; // 80087A9C
  c->r[0]=R32(c->r[3]+0xFFFF817Cu); // 80087AA0
  c->r[5]=c->r[0]+c->r[28]; // 80087AA4
  c->r[4]=R32(c->r[28]+c->r[0]); // 80087AA8
  c->r[3]=R32(c->r[5]+0x00000004u); // 80087AAC
  c->r[0]=R32(c->r[5]+0x00000008u); // 80087AB0
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80087AB4
  {uint32_t ea=c->r[4]+c->r[25]; c->r[7]=R32(ea); c->r[4]=ea;} // 80087AB8
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80087ABC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80087AC0
  {uint32_t ea=c->r[3]+c->r[25]; c->r[5]=R32(ea); c->r[3]=ea;} // 80087AC4
  c->r[6]=R32(c->r[4]+0x00000004u); // 80087AC8
  c->r[8]=c->r[25]+c->r[0]; // 80087ACC
  c->r[4]=R32(c->r[3]+0x00000004u); // 80087AD0
  c->r[3]=R32(c->r[25]+c->r[0]); // 80087AD4
  c->r[0]=R32(c->r[8]+0x00000004u); // 80087AD8
  W32(c->r[1]+0x00000070u,c->r[7]); // 80087ADC
  W32(c->r[1]+0x00000074u,c->r[6]); // 80087AE0
  W32(c->r[1]+0x00000078u,c->r[5]); // 80087AE4
  W32(c->r[1]+0x0000007Cu,c->r[4]); // 80087AE8
  W32(c->r[1]+0x00000080u,c->r[3]); // 80087AEC
  W32(c->r[1]+0x00000084u,c->r[0]); // 80087AF0
L_80087AF4:;
  c->r[6]=R32(c->r[1]+0x00000080u); // 80087AF4
  c->r[3]=c->r[22]|c->r[22]; // 80087AF8
  c->r[8]=R32(c->r[1]+0x00000084u); // 80087AFC
  c->r[4]=c->r[1]+0x00000058u; // 80087B00
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 80087B04
  c->r[5]=c->r[1]+0x00000020u; // 80087B08
  W32(c->r[1]+0x00000028u,c->r[6]); // 80087B0C
  c->r[6]=c->r[1]+0x00000038u; // 80087B10
  c->r[17]=R32(c->r[1]+0x00000078u); // 80087B14
  c->r[7]=c->r[1]+0x0000004Cu; // 80087B18
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 80087B1C
  c->r[8]=c->r[1]+0x0000001Cu; // 80087B20
  c->r[18]=R32(c->r[1]+0x0000007Cu); // 80087B24
  c->r[9]=c->r[1]+0x00000030u; // 80087B28
  W32(c->r[1]+0x00000018u,c->r[0]); // 80087B2C
  c->r[10]=c->r[1]+0x00000040u; // 80087B30
  c->r[19]=R32(c->r[1]+0x00000068u); // 80087B34
  c->r[31]=R32(c->r[29]+0xFFFF8170u); // 80087B38
  c->r[20]=R32(c->r[1]+0x00000070u); // 80087B3C
  c->r[12]=c->r[31]+c->r[28]; // 80087B40
  c->r[21]=R32(c->r[1]+0x00000074u); // 80087B44
  c->r[11]=R32(c->r[12]+0x00000008u); // 80087B48
  c->r[0]=R32(c->r[1]+0x00000064u); // 80087B4C
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)12); // 80087B50
  {uint32_t ea=c->r[11]+c->r[27]; c->r[15]=R32(ea); c->r[11]=ea;} // 80087B54
  c->r[16]=R32(c->r[11]+0x00000004u); // 80087B58
  W32(c->r[1]+0x00000044u,c->r[16]); // 80087B5C
  W32(c->r[1]+0x00000040u,c->r[15]); // 80087B60
  c->r[11]=R32(c->r[11]+0x00000008u); // 80087B64
  W32(c->r[1]+0x00000048u,c->r[11]); // 80087B68
  W32(c->r[1]+0x00000030u,c->r[17]); // 80087B6C
  W32(c->r[1]+0x00000034u,c->r[18]); // 80087B70
  W32(c->r[1]+0x0000001Cu,c->r[19]); // 80087B74
  c->r[11]=R32(c->r[12]+0x00000004u); // 80087B78
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)12); // 80087B7C
  c->r[15]=c->r[27]+c->r[11]; // 80087B80
  c->r[12]=R32(c->r[27]+c->r[11]); // 80087B84
  c->r[11]=R32(c->r[15]+0x00000004u); // 80087B88
  W32(c->r[1]+0x00000050u,c->r[11]); // 80087B8C
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 80087B90
  c->r[11]=R32(c->r[15]+0x00000008u); // 80087B94
  W32(c->r[1]+0x00000054u,c->r[11]); // 80087B98
  W32(c->r[1]+0x00000038u,c->r[20]); // 80087B9C
  W32(c->r[1]+0x0000003Cu,c->r[21]); // 80087BA0
  W32(c->r[1]+0x00000020u,c->r[0]); // 80087BA4
  c->r[0]=R32(c->r[31]+c->r[28]); // 80087BA8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80087BAC
  c->r[12]=c->r[27]+c->r[0]; // 80087BB0
  c->r[11]=R32(c->r[27]+c->r[0]); // 80087BB4
  c->r[0]=R32(c->r[12]+0x00000004u); // 80087BB8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80087BBC
  W32(c->r[1]+0x00000058u,c->r[11]); // 80087BC0
  c->r[0]=R32(c->r[12]+0x00000008u); // 80087BC4
  W32(c->r[1]+0x00000060u,c->r[0]); // 80087BC8
  c->r[0]=c->r[1]+0x00000018u; // 80087BCC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80087BD0
  c->r[0]=c->r[1]+0x00000028u; // 80087BD4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80087BD8
  W32(c->r[1]+0x00000010u,c->r[23]); // 80087BDC
  c->lr=0x80087BE4u; f_800869E4(c); // 80087BE0
  c->r[28]=c->r[28]+0x0000000Cu; // 80087BE4
  c->r[24]=c->r[24]+0x00000003u; // 80087BE8
L_80087BEC:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[14]); // 80087BEC
  if (crb(c,0)) { IRQCHK(c); goto L_800879C8; } // 80087BF0
  goto L_80087CE8; // 80087BF4
L_80087BF8:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 80087BF8
  c->r[0]=R32(c->r[3]+0x00000004u); // 80087BFC
  c->r[5]=c->r[5]+0x00000001u; // 80087C00
  W32(c->r[3]+0x00000008u,c->r[5]); // 80087C04
  c->r[0]=c->r[0]+c->r[4]; // 80087C08
  W32(c->r[3]+0x00000004u,c->r[0]); // 80087C0C
  c->r[3]=c->r[22]|c->r[22]; // 80087C10
  c->lr=0x80087C18u; f_800841D0(c); // 80087C14
  c->r[3]=c->r[22]|c->r[22]; // 80087C18
  c->r[4]=c->r[15]|c->r[15]; // 80087C1C
  c->r[5]=c->r[23]|c->r[23]; // 80087C20
  c->lr=0x80087C28u; f_80084884(c); // 80087C24
  c->r[3]=c->r[22]|c->r[22]; // 80087C28
  c->r[4]=c->r[15]|c->r[15]; // 80087C2C
  c->r[5]=0u+0x00000000u; // 80087C30
  c->lr=0x80087C38u; f_800851EC(c); // 80087C34
  c->r[0]=rotl(c->r[14],2)&0xFFFFFFFCu; // 80087C38
  c->r[3]=0u+0x00000090u; // 80087C3C
  c->r[14]=c->r[0]-c->r[14]; // 80087C40
  c->r[4]=0u+0x00000000u; // 80087C44
  c->r[5]=rotl(c->r[14],0)&0x0000FFFFu; // 80087C48
  c->lr=0x80087C50u; f_800CFE14(c); // 80087C4C
  c->r[7]=rotl(c->r[15],0)&0x00000002u; // 80087C50
  c->r[8]=rotl(c->r[15],0)&0x00000001u; // 80087C54
  c->r[9]=rotl(c->r[15],0)&0x00000004u; // 80087C58
  c->r[10]=rotl(c->r[15],0)&0x00000008u; // 80087C5C
  c->r[5]=c->r[22]+0x00010000u; // 80087C60
  c->r[6]=0u+0x00000000u; // 80087C64
  c->r[4]=0u+0xCC010000u; // 80087C68
  c->ctr=c->r[14]; // 80087C6C
  cmps(c,0,(int32_t)c->r[14],0); // 80087C70
  if (!crb(c,1)) { goto L_80087CE8; } // 80087C74
L_80087C78:;
  c->r[3]=R32(c->r[5]+0xFFFF8170u); // 80087C78
  cmps(c,0,(int32_t)c->r[7],0); // 80087C7C
  c->r[0]=R32(c->r[3]+c->r[6]); // 80087C80
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80087C84
  if (crb(c,2)) { goto L_80087C98; } // 80087C88
  c->r[3]=R32(c->r[5]+0xFFFF8174u); // 80087C8C
  c->r[0]=R32(c->r[3]+c->r[6]); // 80087C90
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80087C94
L_80087C98:;
  cmps(c,0,(int32_t)c->r[8],0); // 80087C98
  if (crb(c,2)) { goto L_80087CB0; } // 80087C9C
  c->r[3]=c->r[22]+0x00010000u; // 80087CA0
  c->r[3]=R32(c->r[3]+0xFFFF8178u); // 80087CA4
  c->r[0]=R32(c->r[3]+c->r[6]); // 80087CA8
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80087CAC
L_80087CB0:;
  cmps(c,0,(int32_t)c->r[9],0); // 80087CB0
  if (crb(c,2)) { goto L_80087CC8; } // 80087CB4
  c->r[3]=c->r[22]+0x00010000u; // 80087CB8
  c->r[3]=R32(c->r[3]+0xFFFF817Cu); // 80087CBC
  c->r[0]=R32(c->r[3]+c->r[6]); // 80087CC0
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80087CC4
L_80087CC8:;
  cmps(c,0,(int32_t)c->r[10],0); // 80087CC8
  if (crb(c,2)) { goto L_80087CE0; } // 80087CCC
  c->r[3]=c->r[22]+0x00010000u; // 80087CD0
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 80087CD4
  c->r[0]=R32(c->r[3]+c->r[6]); // 80087CD8
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80087CDC
L_80087CE0:;
  c->r[6]=c->r[6]+0x00000004u; // 80087CE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80087C78; } // 80087CE4
L_80087CE8:;
  c->r[11]=c->r[1]+0x000000E0u; // 80087CE8
  c->lr=0x80087CF0u; f_800D4A2C(c); // 80087CEC
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80087CF0
  c->lr=c->r[0]; // 80087CF4
  c->r[1]=c->r[1]+0x000000E0u; // 80087CF8
  return; // 80087CFC
}

// CreateHALPrimitiveArray__11WiiGraphicsFi12VertexFormatR8Material
void f_80087D00(Ctx* __restrict c) {
  trace_call(0x80087D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087D00
  c->r[0]=c->lr; // 80087D04
  W32(c->r[1]+0x00000034u,c->r[0]); // 80087D08
  c->r[11]=c->r[1]+0x00000030u; // 80087D0C
  c->lr=0x80087D14u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80087D10
  c->r[7]=c->r[3]+0x00010000u; // 80087D14
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80087D18
  c->r[8]=R32(c->r[7]+0xFFFF819Cu); // 80087D1C
  c->r[31]=c->r[0]-c->r[4]; // 80087D20
  c->r[7]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80087D24
  c->r[29]=c->r[5]|c->r[5]; // 80087D28
  cmps(c,0,(int32_t)c->r[8],0); // 80087D2C
  c->r[26]=c->r[3]|c->r[3]; // 80087D30
  c->r[27]=c->r[4]|c->r[4]; // 80087D34
  c->r[28]=c->r[6]|c->r[6]; // 80087D38
  c->r[5]=c->r[7]+0x00000003u; // 80087D3C
  if (!crb(c,1)) { goto L_80087D48; } // 80087D40
  c->r[5]=c->r[5]+c->r[7]; // 80087D44
L_80087D48:;
  c->r[4]=c->r[3]+0x00010000u; // 80087D48
  c->r[6]=R32(c->r[4]+0xFFFF81A0u); // 80087D4C
  cmps(c,0,(int32_t)c->r[6],0); // 80087D50
  if (!crb(c,1)) { goto L_80087D5C; } // 80087D54
  c->r[5]=c->r[5]+c->r[7]; // 80087D58
L_80087D5C:;
  c->r[4]=c->r[3]+0x00010000u; // 80087D5C
  c->r[9]=R32(c->r[4]+0xFFFF81A4u); // 80087D60
  cmps(c,0,(int32_t)c->r[9],0); // 80087D64
  if (!crb(c,1)) { goto L_80087D70; } // 80087D68
  c->r[5]=c->r[5]+c->r[7]; // 80087D6C
L_80087D70:;
  c->r[4]=c->r[3]+0x00010000u; // 80087D70
  c->r[10]=R32(c->r[4]+0xFFFF81A8u); // 80087D74
  cmps(c,0,(int32_t)c->r[10],0); // 80087D78
  if (!crb(c,1)) { goto L_80087D84; } // 80087D7C
  c->r[5]=c->r[5]+c->r[7]; // 80087D80
L_80087D84:;
  c->r[3]=c->r[3]+0x00010000u; // 80087D84
  c->r[4]=c->r[5]+0x0000001Fu; // 80087D88
  c->r[0]=R32(c->r[3]+0xFFFF8198u); // 80087D8C
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80087D90
  c->r[4]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80087D94
  c->r[3]=rotl(c->r[9],3)&0xFFFFFFF8u; // 80087D98
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80087D9C
  c->r[25]=c->r[30]+0x00000080u; // 80087DA0
  c->r[0]=rotl(c->r[10],3)&0xFFFFFFF8u; // 80087DA4
  c->r[5]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80087DA8
  c->r[25]=c->r[25]+c->r[6]; // 80087DAC
  c->r[25]=c->r[25]+c->r[5]; // 80087DB0
  c->r[25]=c->r[25]+c->r[4]; // 80087DB4
  c->r[25]=c->r[25]+c->r[3]; // 80087DB8
  c->r[25]=c->r[25]+c->r[0]; // 80087DBC
  c->r[3]=c->r[25]|c->r[25]; // 80087DC0
  c->lr=0x80087DC8u; f_8008DD6C(c); // 80087DC4
  W32(c->r[3]+0x00000000u,c->r[25]); // 80087DC8
  c->r[0]=c->r[3]+0x00000080u; // 80087DCC
  c->r[7]=c->r[26]+0x00010000u; // 80087DD0
  c->r[4]=0u+0x00000000u; // 80087DD4
  W32(c->r[3]+0x00000004u,c->r[29]); // 80087DD8
  c->r[5]=c->r[0]+c->r[30]; // 80087DDC
  c->r[29]=c->r[3]|c->r[3]; // 80087DE0
  c->r[6]=R32(c->r[28]+0x00000000u); // 80087DE4
  W32(c->r[3]+0x00000008u,c->r[6]); // 80087DE8
  c->r[6]=R32(c->r[28]+0x00000004u); // 80087DEC
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 80087DF0
  c->r[6]=R32(c->r[28]+0x00000008u); // 80087DF4
  W32(c->r[3]+0x00000010u,c->r[6]); // 80087DF8
  c->r[6]=R8(c->r[28]+0x0000000Cu); // 80087DFC
  W8(c->r[3]+0x00000014u,c->r[6]); // 80087E00
  c->r[6]=R8(c->r[28]+0x0000000Du); // 80087E04
  W8(c->r[3]+0x00000015u,c->r[6]); // 80087E08
  c->r[6]=R8(c->r[28]+0x0000000Eu); // 80087E0C
  W8(c->r[3]+0x00000016u,c->r[6]); // 80087E10
  c->r[6]=R8(c->r[28]+0x0000000Fu); // 80087E14
  W8(c->r[3]+0x00000017u,c->r[6]); // 80087E18
  c->r[6]=R8(c->r[28]+0x00000010u); // 80087E1C
  W8(c->r[3]+0x00000018u,c->r[6]); // 80087E20
  c->r[6]=R8(c->r[28]+0x00000011u); // 80087E24
  W8(c->r[3]+0x00000019u,c->r[6]); // 80087E28
  c->r[6]=R16(c->r[28]+0x00000012u); // 80087E2C
  W16(c->r[3]+0x0000001Au,c->r[6]); // 80087E30
  c->r[6]=R32(c->r[28]+0x00000014u); // 80087E34
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 80087E38
  c->r[6]=R32(c->r[28]+0x00000018u); // 80087E3C
  W32(c->r[3]+0x00000020u,c->r[6]); // 80087E40
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80087E44
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 80087E48
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80087E4C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80087E50
  c->r[6]=R32(c->r[28]+0x00000024u); // 80087E54
  W32(c->r[3]+0x0000002Cu,c->r[6]); // 80087E58
  c->r[6]=R32(c->r[28]+0x0000002Cu); // 80087E5C
  c->r[8]=R32(c->r[28]+0x00000028u); // 80087E60
  W32(c->r[3]+0x00000030u,c->r[8]); // 80087E64
  W32(c->r[3]+0x00000034u,c->r[6]); // 80087E68
  W32(c->r[3]+0x00000038u,c->r[27]); // 80087E6C
  W32(c->r[3]+0x0000003Cu,c->r[30]); // 80087E70
  c->r[6]=R32(c->r[7]+0xFFFF8198u); // 80087E74
  W32(c->r[3]+0x00000044u,c->r[6]); // 80087E78
  c->r[6]=R32(c->r[7]+0xFFFF819Cu); // 80087E7C
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 80087E80
  c->r[6]=R32(c->r[7]+0xFFFF81A0u); // 80087E84
  W32(c->r[3]+0x00000054u,c->r[6]); // 80087E88
  c->r[6]=R32(c->r[7]+0xFFFF81A4u); // 80087E8C
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 80087E90
  c->r[6]=R32(c->r[7]+0xFFFF81A8u); // 80087E94
  W32(c->r[3]+0x00000064u,c->r[6]); // 80087E98
  W32(c->r[3]+0x00000050u,c->r[4]); // 80087E9C
  W32(c->r[3]+0x00000058u,c->r[4]); // 80087EA0
  W32(c->r[3]+0x00000060u,c->r[4]); // 80087EA4
  W32(c->r[3]+0x00000068u,c->r[4]); // 80087EA8
  W32(c->r[3]+0x00000040u,c->r[0]); // 80087EAC
  W32(c->r[3]+0x00000048u,c->r[5]); // 80087EB0
  c->r[4]=R32(c->r[7]+0xFFFF8198u); // 80087EB4
  c->r[0]=R32(c->r[7]+0xFFFF819Cu); // 80087EB8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80087EBC
  cmps(c,0,(int32_t)c->r[0],0); // 80087EC0
  c->r[5]=c->r[5]+c->r[4]; // 80087EC4
  if (!crb(c,1)) { goto L_80087EDC; } // 80087EC8
  W32(c->r[3]+0x00000050u,c->r[5]); // 80087ECC
  c->r[0]=R32(c->r[7]+0xFFFF819Cu); // 80087ED0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80087ED4
  c->r[5]=c->r[5]+c->r[0]; // 80087ED8
L_80087EDC:;
  c->r[4]=c->r[26]+0x00010000u; // 80087EDC
  c->r[0]=R32(c->r[4]+0xFFFF81A0u); // 80087EE0
  cmps(c,0,(int32_t)c->r[0],0); // 80087EE4
  if (!crb(c,1)) { goto L_80087EFC; } // 80087EE8
  W32(c->r[3]+0x00000058u,c->r[5]); // 80087EEC
  c->r[0]=R32(c->r[4]+0xFFFF81A0u); // 80087EF0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80087EF4
  c->r[5]=c->r[5]+c->r[0]; // 80087EF8
L_80087EFC:;
  c->r[4]=c->r[26]+0x00010000u; // 80087EFC
  c->r[0]=R32(c->r[4]+0xFFFF81A4u); // 80087F00
  cmps(c,0,(int32_t)c->r[0],0); // 80087F04
  if (!crb(c,1)) { goto L_80087F1C; } // 80087F08
  W32(c->r[3]+0x00000060u,c->r[5]); // 80087F0C
  c->r[0]=R32(c->r[4]+0xFFFF81A4u); // 80087F10
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80087F14
  c->r[5]=c->r[5]+c->r[0]; // 80087F18
L_80087F1C:;
  c->r[4]=c->r[26]+0x00010000u; // 80087F1C
  c->r[0]=R32(c->r[4]+0xFFFF81A8u); // 80087F20
  cmps(c,0,(int32_t)c->r[0],0); // 80087F24
  if (!crb(c,1)) { goto L_80087F30; } // 80087F28
  W32(c->r[3]+0x00000068u,c->r[5]); // 80087F2C
L_80087F30:;
  c->r[3]=R32(c->r[3]+0x00000040u); // 80087F30
  c->r[4]=R32(c->r[29]+0x0000003Cu); // 80087F34
  c->lr=0x80087F3Cu; f_800ABD00(c); // 80087F38
  c->r[3]=R32(c->r[29]+0x00000040u); // 80087F3C
  c->r[4]=0u+0x00000000u; // 80087F40
  c->r[5]=R32(c->r[29]+0x0000003Cu); // 80087F44
  c->lr=0x80087F4Cu; f_80004688(c); // 80087F48
  c->r[3]=R32(c->r[29]+0x00000040u); // 80087F4C
  c->r[0]=0u+0x00000090u; // 80087F50
  c->r[4]=c->r[26]+0x00010000u; // 80087F54
  c->r[5]=0u+0x00000000u; // 80087F58
  W8(c->r[3]+0x00000000u,c->r[0]); // 80087F5C
  c->r[3]=R32(c->r[29]+0x00000040u); // 80087F60
  W16(c->r[3]+0x00000001u,c->r[31]); // 80087F64
  c->r[3]=R32(c->r[29]+0x00000040u); // 80087F68
  c->r[6]=c->r[3]+0x00000003u; // 80087F6C
  c->ctr=c->r[31]; // 80087F70
  cmps(c,0,(int32_t)c->r[31],0); // 80087F74
  if (!crb(c,1)) { goto L_80088004; } // 80087F78
L_80087F7C:;
  c->r[3]=R32(c->r[4]+0xFFFF8170u); // 80087F7C
  c->r[0]=R32(c->r[3]+c->r[5]); // 80087F80
  W16(c->r[6]+0x00000000u,c->r[0]); // 80087F84
  c->r[6]=c->r[6]+0x00000002u; // 80087F88
  c->r[0]=R32(c->r[4]+0xFFFF819Cu); // 80087F8C
  cmps(c,0,(int32_t)c->r[0],0); // 80087F90
  if (!crb(c,1)) { goto L_80087FA8; } // 80087F94
  c->r[3]=R32(c->r[4]+0xFFFF8174u); // 80087F98
  c->r[0]=R32(c->r[3]+c->r[5]); // 80087F9C
  W16(c->r[6]+0x00000000u,c->r[0]); // 80087FA0
  c->r[6]=c->r[6]+0x00000002u; // 80087FA4
L_80087FA8:;
  c->r[0]=R32(c->r[4]+0xFFFF81A0u); // 80087FA8
  cmps(c,0,(int32_t)c->r[0],0); // 80087FAC
  if (!crb(c,1)) { goto L_80087FC4; } // 80087FB0
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 80087FB4
  c->r[0]=R32(c->r[3]+c->r[5]); // 80087FB8
  W16(c->r[6]+0x00000000u,c->r[0]); // 80087FBC
  c->r[6]=c->r[6]+0x00000002u; // 80087FC0
L_80087FC4:;
  c->r[0]=R32(c->r[4]+0xFFFF81A4u); // 80087FC4
  cmps(c,0,(int32_t)c->r[0],0); // 80087FC8
  if (!crb(c,1)) { goto L_80087FE0; } // 80087FCC
  c->r[3]=R32(c->r[4]+0xFFFF817Cu); // 80087FD0
  c->r[0]=R32(c->r[3]+c->r[5]); // 80087FD4
  W16(c->r[6]+0x00000000u,c->r[0]); // 80087FD8
  c->r[6]=c->r[6]+0x00000002u; // 80087FDC
L_80087FE0:;
  c->r[0]=R32(c->r[4]+0xFFFF81A8u); // 80087FE0
  cmps(c,0,(int32_t)c->r[0],0); // 80087FE4
  if (!crb(c,1)) { goto L_80087FFC; } // 80087FE8
  c->r[3]=R32(c->r[4]+0xFFFF8180u); // 80087FEC
  c->r[0]=R32(c->r[3]+c->r[5]); // 80087FF0
  W16(c->r[6]+0x00000000u,c->r[0]); // 80087FF4
  c->r[6]=c->r[6]+0x00000002u; // 80087FF8
L_80087FFC:;
  c->r[5]=c->r[5]+0x00000004u; // 80087FFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80087F7C; } // 80088000
L_80088004:;
  c->r[4]=c->r[26]+0x00010000u; // 80088004
  c->r[3]=R32(c->r[29]+0x00000048u); // 80088008
  c->r[0]=R32(c->r[4]+0xFFFF8198u); // 8008800C
  c->r[4]=R32(c->r[4]+0xFFFF8184u); // 80088010
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80088014
  c->lr=0x8008801Cu; f_80004338(c); // 80088018
  c->r[4]=c->r[26]+0x00010000u; // 8008801C
  c->r[0]=R32(c->r[4]+0xFFFF819Cu); // 80088020
  cmps(c,0,(int32_t)c->r[0],0); // 80088024
  if (!crb(c,1)) { goto L_8008803C; } // 80088028
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8008802C
  c->r[3]=R32(c->r[29]+0x00000050u); // 80088030
  c->r[4]=R32(c->r[4]+0xFFFF8188u); // 80088034
  c->lr=0x8008803Cu; f_80004338(c); // 80088038
L_8008803C:;
  c->r[4]=c->r[26]+0x00010000u; // 8008803C
  c->r[0]=R32(c->r[4]+0xFFFF81A0u); // 80088040
  cmps(c,0,(int32_t)c->r[0],0); // 80088044
  if (!crb(c,1)) { goto L_8008805C; } // 80088048
  c->r[3]=R32(c->r[29]+0x00000058u); // 8008804C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80088050
  c->r[4]=R32(c->r[4]+0xFFFF818Cu); // 80088054
  c->lr=0x8008805Cu; f_80004338(c); // 80088058
L_8008805C:;
  c->r[4]=c->r[26]+0x00010000u; // 8008805C
  c->r[0]=R32(c->r[4]+0xFFFF81A4u); // 80088060
  cmps(c,0,(int32_t)c->r[0],0); // 80088064
  if (!crb(c,1)) { goto L_8008807C; } // 80088068
  c->r[3]=R32(c->r[29]+0x00000060u); // 8008806C
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80088070
  c->r[4]=R32(c->r[4]+0xFFFF8190u); // 80088074
  c->lr=0x8008807Cu; f_80004338(c); // 80088078
L_8008807C:;
  c->r[4]=c->r[26]+0x00010000u; // 8008807C
  c->r[0]=R32(c->r[4]+0xFFFF81A8u); // 80088080
  cmps(c,0,(int32_t)c->r[0],0); // 80088084
  if (!crb(c,1)) { goto L_8008809C; } // 80088088
  c->r[3]=R32(c->r[29]+0x00000068u); // 8008808C
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80088090
  c->r[4]=R32(c->r[4]+0xFFFF8194u); // 80088094
  c->lr=0x8008809Cu; f_80004338(c); // 80088098
L_8008809C:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 8008809C
  c->r[3]=c->r[29]|c->r[29]; // 800880A0
  c->lr=0x800880A8u; f_800ABD2C(c); // 800880A4
  c->r[11]=c->r[1]+0x00000030u; // 800880A8
  c->r[3]=c->r[29]|c->r[29]; // 800880AC
  c->lr=0x800880B4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800880B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800880B4
  c->lr=c->r[0]; // 800880B8
  c->r[1]=c->r[1]+0x00000030u; // 800880BC
  return; // 800880C0
}

// FreeHALPrimitive__11WiiGraphicsFP12HALPrimitive
void f_800880C4(Ctx* __restrict c) {
  trace_call(0x800880C4u);
  c->r[3]=c->r[4]|c->r[4]; // 800880C4
  f_8008DE94(c); return; // 800880C8
}

// RenderHALPrimitive__11WiiGraphicsFP12HALPrimitive
void f_800880CC(Ctx* __restrict c) {
  trace_call(0x800880CCu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800880CC
  c->r[0]=c->lr; // 800880D0
  W32(c->r[1]+0x00000114u,c->r[0]); // 800880D4
  c->r[11]=c->r[1]+0x00000110u; // 800880D8
  c->lr=0x800880E0u; f_800D49E0(c); // 800880DC
  c->r[0]=R8(c->r[4]+0x00000017u); // 800880E0
  c->r[25]=c->r[4]|c->r[4]; // 800880E4
  W32(c->r[1]+0x00000018u,c->r[3]); // 800880E8
  cmps(c,0,(int32_t)c->r[0],0); // 800880EC
  if (crb(c,2)) { goto L_80088394; } // 800880F0
  c->r[0]=R8(c->r[3]+0x00000126u); // 800880F4
  cmps(c,0,(int32_t)c->r[0],0); // 800880F8
  if (crb(c,2)) { goto L_80088394; } // 800880FC
  c->r[3]=R32(c->r[4]+0x00000040u); // 80088100
  c->r[31]=0u+0x000000FFu; // 80088104
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088108
  c->r[26]=0u+0x00000000u; // 8008810C
  c->r[0]=R16(c->r[3]+0x00000001u); // 80088110
  c->r[30]=c->r[3]+0x00000003u; // 80088114
  W16(c->r[1]+0x000000ACu,c->r[0]); // 80088118
  c->r[0]=c->r[4]+0x00000008u; // 8008811C
  c->r[29]=R32(c->r[4]+0x00000048u); // 80088120
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80088124
  c->r[28]=R32(c->r[4]+0x00000058u); // 80088128
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 8008812C
  c->r[27]=R32(c->r[4]+0x00000060u); // 80088130
  W32(c->r[1]+0x000000C0u,c->r[0]); // 80088134
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 80088138
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 8008813C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 80088140
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 80088144
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 80088148
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8008814C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 80088150
  W8(c->r[1]+0x00000064u,c->r[31]); // 80088154
  W8(c->r[1]+0x00000065u,c->r[31]); // 80088158
  W8(c->r[1]+0x00000066u,c->r[31]); // 8008815C
  W8(c->r[1]+0x00000067u,c->r[31]); // 80088160
  W8(c->r[1]+0x00000068u,c->r[31]); // 80088164
  W8(c->r[1]+0x00000069u,c->r[31]); // 80088168
  W8(c->r[1]+0x0000006Au,c->r[31]); // 8008816C
  W8(c->r[1]+0x0000006Bu,c->r[31]); // 80088170
  W8(c->r[1]+0x0000006Cu,c->r[31]); // 80088174
  W8(c->r[1]+0x0000006Du,c->r[31]); // 80088178
  W8(c->r[1]+0x0000006Eu,c->r[31]); // 8008817C
  W8(c->r[1]+0x0000006Fu,c->r[31]); // 80088180
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80088184
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80088188
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8008818C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80088190
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80088194
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80088198
  goto L_80088384; // 8008819C
L_800881A0:;
  c->r[8]=R32(c->r[25]+0x00000004u); // 800881A0
  c->r[9]=0u+0x00000003u; // 800881A4
  c->r[3]=c->r[1]+0x00000088u; // 800881A8
  c->r[4]=c->r[1]+0x00000064u; // 800881AC
  c->r[5]=c->r[1]+0x00000070u; // 800881B0
  c->r[0]=rotl(c->r[8],0)&0x00000002u; // 800881B4
  c->r[6]=rotl(c->r[8],0)&0x00000001u; // 800881B8
  c->r[7]=rotl(c->r[8],0)&0x00000004u; // 800881BC
  c->r[8]=rotl(c->r[8],0)&0x00000008u; // 800881C0
  c->ctr=c->r[9]; // 800881C4
L_800881C8:;
  c->r[9]=R16(c->r[30]+0x00000000u); // 800881C8
  cmps(c,0,(int32_t)c->r[0],0); // 800881CC
  c->r[30]=c->r[30]+0x00000002u; // 800881D0
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 800881D4
  c->r[10]=c->r[29]+c->r[9]; // 800881D8
  c->r[9]=R32(c->r[29]+c->r[9]); // 800881DC
  W32(c->r[3]+0x00000000u,c->r[9]); // 800881E0
  c->r[9]=R32(c->r[10]+0x00000004u); // 800881E4
  W32(c->r[3]+0x00000004u,c->r[9]); // 800881E8
  c->r[9]=R32(c->r[10]+0x00000008u); // 800881EC
  W32(c->r[3]+0x00000008u,c->r[9]); // 800881F0
  if (crb(c,2)) { goto L_800881FC; } // 800881F4
  c->r[30]=c->r[30]+0x00000002u; // 800881F8
L_800881FC:;
  cmps(c,0,(int32_t)c->r[6],0); // 800881FC
  if (crb(c,2)) { goto L_80088238; } // 80088200
  c->r[9]=R16(c->r[30]+0x00000000u); // 80088204
  c->r[30]=c->r[30]+0x00000002u; // 80088208
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8008820C
  c->r[10]=c->r[28]+c->r[9]; // 80088210
  c->r[9]=R8(c->r[28]+c->r[9]); // 80088214
  W8(c->r[4]+0x00000000u,c->r[9]); // 80088218
  c->r[9]=R8(c->r[10]+0x00000001u); // 8008821C
  W8(c->r[4]+0x00000001u,c->r[9]); // 80088220
  c->r[9]=R8(c->r[10]+0x00000002u); // 80088224
  W8(c->r[4]+0x00000002u,c->r[9]); // 80088228
  c->r[9]=R8(c->r[10]+0x00000003u); // 8008822C
  W8(c->r[4]+0x00000003u,c->r[9]); // 80088230
  goto L_80088248; // 80088234
L_80088238:;
  W8(c->r[4]+0x00000000u,c->r[31]); // 80088238
  W8(c->r[4]+0x00000001u,c->r[31]); // 8008823C
  W8(c->r[4]+0x00000002u,c->r[31]); // 80088240
  W8(c->r[4]+0x00000003u,c->r[31]); // 80088244
L_80088248:;
  cmps(c,0,(int32_t)c->r[7],0); // 80088248
  if (crb(c,2)) { goto L_80088270; } // 8008824C
  c->r[9]=R16(c->r[30]+0x00000000u); // 80088250
  c->r[30]=c->r[30]+0x00000002u; // 80088254
  c->r[9]=rotl(c->r[9],3)&0xFFFFFFF8u; // 80088258
  c->r[10]=c->r[27]+c->r[9]; // 8008825C
  c->r[9]=R32(c->r[27]+c->r[9]); // 80088260
  W32(c->r[5]+0x00000000u,c->r[9]); // 80088264
  c->r[9]=R32(c->r[10]+0x00000004u); // 80088268
  W32(c->r[5]+0x00000004u,c->r[9]); // 8008826C
L_80088270:;
  cmps(c,0,(int32_t)c->r[8],0); // 80088270
  if (crb(c,2)) { goto L_8008827C; } // 80088274
  c->r[30]=c->r[30]+0x00000002u; // 80088278
L_8008827C:;
  c->r[3]=c->r[3]+0x0000000Cu; // 8008827C
  c->r[4]=c->r[4]+0x00000004u; // 80088280
  c->r[5]=c->r[5]+0x00000008u; // 80088284
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800881C8; } // 80088288
  c->r[15]=R32(c->r[1]+0x00000074u); // 8008828C
  c->r[4]=c->r[1]+0x00000058u; // 80088290
  W32(c->r[1]+0x000000C4u,c->r[15]); // 80088294
  c->r[5]=c->r[1]+0x00000024u; // 80088298
  c->r[15]=R32(c->r[1]+0x00000064u); // 8008829C
  c->r[6]=c->r[1]+0x00000038u; // 800882A0
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 800882A4
  c->r[7]=c->r[1]+0x0000004Cu; // 800882A8
  W32(c->r[1]+0x000000B0u,c->r[15]); // 800882AC
  c->r[8]=c->r[1]+0x00000020u; // 800882B0
  c->r[15]=R32(c->r[1]+0x00000088u); // 800882B4
  c->r[9]=c->r[1]+0x00000030u; // 800882B8
  W32(c->r[1]+0x000000B4u,c->r[15]); // 800882BC
  c->r[10]=c->r[1]+0x00000040u; // 800882C0
  c->r[15]=R32(c->r[1]+0x0000008Cu); // 800882C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800882C8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800882CC
  W32(c->r[1]+0x000000B8u,c->r[15]); // 800882D0
  c->r[16]=R32(c->r[1]+0x00000080u); // 800882D4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800882D8
  c->r[0]=R32(c->r[1]+0x000000B0u); // 800882DC
  c->r[17]=R32(c->r[1]+0x00000084u); // 800882E0
  c->r[18]=R32(c->r[1]+0x0000006Cu); // 800882E4
  c->r[19]=R32(c->r[1]+0x000000A0u); // 800882E8
  c->r[20]=R32(c->r[1]+0x000000A4u); // 800882EC
  c->r[21]=R32(c->r[1]+0x000000A8u); // 800882F0
  c->r[22]=R32(c->r[1]+0x00000078u); // 800882F4
  c->r[23]=R32(c->r[1]+0x0000007Cu); // 800882F8
  c->r[24]=R32(c->r[1]+0x00000068u); // 800882FC
  c->r[12]=R32(c->r[1]+0x00000094u); // 80088300
  c->r[11]=R32(c->r[1]+0x00000098u); // 80088304
  c->r[14]=R32(c->r[1]+0x00000070u); // 80088308
  c->r[15]=R32(c->r[1]+0x00000090u); // 8008830C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80088310
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80088314
  W32(c->r[1]+0x00000058u,c->r[0]); // 80088318
  c->r[0]=R32(c->r[1]+0x000000B8u); // 8008831C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80088320
  c->r[0]=c->r[15]|c->r[15]; // 80088324
  c->r[3]=R32(c->r[1]+0x00000018u); // 80088328
  W32(c->r[1]+0x00000060u,c->r[0]); // 8008832C
  c->r[0]=c->r[1]+0x0000001Cu; // 80088330
  W32(c->r[1]+0x00000028u,c->r[16]); // 80088334
  W32(c->r[1]+0x0000002Cu,c->r[17]); // 80088338
  W32(c->r[1]+0x0000001Cu,c->r[18]); // 8008833C
  W32(c->r[1]+0x00000040u,c->r[19]); // 80088340
  W32(c->r[1]+0x00000044u,c->r[20]); // 80088344
  W32(c->r[1]+0x00000048u,c->r[21]); // 80088348
  W32(c->r[1]+0x00000030u,c->r[22]); // 8008834C
  W32(c->r[1]+0x00000034u,c->r[23]); // 80088350
  W32(c->r[1]+0x00000020u,c->r[24]); // 80088354
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 80088358
  W32(c->r[1]+0x00000050u,c->r[11]); // 8008835C
  W32(c->r[1]+0x00000038u,c->r[14]); // 80088360
  W32(c->r[1]+0x00000008u,c->r[0]); // 80088364
  c->r[0]=c->r[1]+0x00000028u; // 80088368
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8008836C
  c->r[0]=R32(c->r[1]+0x000000C0u); // 80088370
  W32(c->r[1]+0x000000BCu,c->r[15]); // 80088374
  W32(c->r[1]+0x00000010u,c->r[0]); // 80088378
  c->lr=0x80088380u; f_800869E4(c); // 8008837C
  c->r[26]=c->r[26]+0x00000003u; // 80088380
L_80088384:;
  c->r[0]=R16(c->r[1]+0x000000ACu); // 80088384
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80088388
  if (crb(c,0)) { IRQCHK(c); goto L_800881A0; } // 8008838C
  goto L_80088464; // 80088390
L_80088394:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 80088394
  c->r[5]=R32(c->r[3]+0x00000004u); // 80088398
  c->r[0]=c->r[6]+0x00000001u; // 8008839C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800883A0
  c->r[0]=R32(c->r[4]+0x00000038u); // 800883A4
  c->r[0]=c->r[5]+c->r[0]; // 800883A8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800883AC
  c->r[3]=R32(c->r[1]+0x00000018u); // 800883B0
  c->lr=0x800883B8u; f_800841D0(c); // 800883B4
  c->r[4]=R32(c->r[25]+0x00000004u); // 800883B8
  c->r[5]=c->r[25]+0x00000008u; // 800883BC
  c->r[3]=R32(c->r[1]+0x00000018u); // 800883C0
  c->lr=0x800883C8u; f_80084884(c); // 800883C4
  c->r[4]=R32(c->r[25]+0x00000004u); // 800883C8
  c->r[5]=0u+0x00000000u; // 800883CC
  c->r[3]=R32(c->r[1]+0x00000018u); // 800883D0
  c->lr=0x800883D8u; f_800851EC(c); // 800883D4
  c->r[4]=R32(c->r[25]+0x00000048u); // 800883D8
  c->r[3]=0u+0x00000009u; // 800883DC
  c->r[5]=0u+0x0000000Cu; // 800883E0
  c->lr=0x800883E8u; f_800CF1AC(c); // 800883E4
  c->r[0]=R32(c->r[25]+0x0000004Cu); // 800883E8
  cmps(c,0,(int32_t)c->r[0],0); // 800883EC
  if (!crb(c,1)) { goto L_80088404; } // 800883F0
  c->r[4]=R32(c->r[25]+0x00000050u); // 800883F4
  c->r[3]=0u+0x0000000Au; // 800883F8
  c->r[5]=0u+0x0000000Cu; // 800883FC
  c->lr=0x80088404u; f_800CF1AC(c); // 80088400
L_80088404:;
  c->r[0]=R32(c->r[25]+0x00000054u); // 80088404
  cmps(c,0,(int32_t)c->r[0],0); // 80088408
  if (!crb(c,1)) { goto L_80088420; } // 8008840C
  c->r[4]=R32(c->r[25]+0x00000058u); // 80088410
  c->r[3]=0u+0x0000000Bu; // 80088414
  c->r[5]=0u+0x00000004u; // 80088418
  c->lr=0x80088420u; f_800CF1AC(c); // 8008841C
L_80088420:;
  c->r[0]=R32(c->r[25]+0x0000005Cu); // 80088420
  cmps(c,0,(int32_t)c->r[0],0); // 80088424
  if (!crb(c,1)) { goto L_8008843C; } // 80088428
  c->r[4]=R32(c->r[25]+0x00000060u); // 8008842C
  c->r[3]=0u+0x0000000Du; // 80088430
  c->r[5]=0u+0x00000008u; // 80088434
  c->lr=0x8008843Cu; f_800CF1AC(c); // 80088438
L_8008843C:;
  c->r[0]=R32(c->r[25]+0x00000064u); // 8008843C
  cmps(c,0,(int32_t)c->r[0],0); // 80088440
  if (!crb(c,1)) { goto L_80088458; } // 80088444
  c->r[4]=R32(c->r[25]+0x00000068u); // 80088448
  c->r[3]=0u+0x0000000Eu; // 8008844C
  c->r[5]=0u+0x00000008u; // 80088450
  c->lr=0x80088458u; f_800CF1AC(c); // 80088454
L_80088458:;
  c->r[3]=R32(c->r[25]+0x00000040u); // 80088458
  c->r[4]=R32(c->r[25]+0x0000003Cu); // 8008845C
  c->lr=0x80088464u; f_800D33E0(c); // 80088460
L_80088464:;
  c->r[11]=c->r[1]+0x00000110u; // 80088464
  c->lr=0x8008846Cu; f_800D4A2C(c); // 80088468
  c->r[0]=R32(c->r[1]+0x00000114u); // 8008846C
  c->lr=c->r[0]; // 80088470
  c->r[1]=c->r[1]+0x00000110u; // 80088474
  return; // 80088478
}

// RenderCube__11WiiGraphicsF7Vector37Vector3R8Material
void f_8008847C(Ctx* __restrict c) {
  trace_call(0x8008847Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008847C
  c->r[0]=c->lr; // 80088480
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088484
  W32(c->r[1]+0x00000274u,c->r[0]); // 80088488
  W32(c->r[1]+0x0000026Cu,c->r[31]); // 8008848C
  c->r[31]=c->r[6]|c->r[6]; // 80088490
  W32(c->r[1]+0x00000268u,c->r[30]); // 80088494
  c->r[30]=c->r[5]|c->r[5]; // 80088498
  W32(c->r[1]+0x00000264u,c->r[29]); // 8008849C
  c->r[29]=c->r[4]|c->r[4]; // 800884A0
  W32(c->r[1]+0x00000260u,c->r[28]); // 800884A4
  c->r[28]=c->r[3]|c->r[3]; // 800884A8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800884AC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800884B0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800884B4
  c->r[4]=c->r[1]+0x00000224u; // 800884B8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 800884BC
  c->r[5]=c->r[1]+0x00000218u; // 800884C0
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[1]);} // 800884C4
  {uint32_t ea=c->r[1]+0x00000240u; WF32(ea,c->f[2]);} // 800884C8
  c->r[11]=R32(c->r[1]+0x0000023Cu); // 800884CC
  {uint32_t ea=c->r[1]+0x00000244u; WF32(ea,c->f[3]);} // 800884D0
  c->r[10]=R32(c->r[1]+0x00000240u); // 800884D4
  {uint32_t ea=c->r[1]+0x00000230u; WF32(ea,c->f[1]);} // 800884D8
  c->r[9]=R32(c->r[1]+0x00000244u); // 800884DC
  {uint32_t ea=c->r[1]+0x00000234u; WF32(ea,c->f[4]);} // 800884E0
  c->r[8]=R32(c->r[1]+0x00000230u); // 800884E4
  {uint32_t ea=c->r[1]+0x00000238u; WF32(ea,c->f[3]);} // 800884E8
  c->r[7]=R32(c->r[1]+0x00000234u); // 800884EC
  c->r[0]=R32(c->r[1]+0x00000238u); // 800884F0
  {uint32_t ea=c->r[1]+0x00000254u; WF32(ea,c->f[0]);} // 800884F4
  {uint32_t ea=c->r[1]+0x00000258u; WF32(ea,c->f[0]);} // 800884F8
  {uint32_t ea=c->r[1]+0x0000025Cu; WF32(ea,c->f[0]);} // 800884FC
  {uint32_t ea=c->r[1]+0x00000248u; WF32(ea,c->f[0]);} // 80088500
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[0]);} // 80088504
  {uint32_t ea=c->r[1]+0x00000250u; WF32(ea,c->f[0]);} // 80088508
  W32(c->r[1]+0x00000218u,c->r[8]); // 8008850C
  W32(c->r[1]+0x0000021Cu,c->r[7]); // 80088510
  W32(c->r[1]+0x00000220u,c->r[0]); // 80088514
  W32(c->r[1]+0x00000224u,c->r[11]); // 80088518
  W32(c->r[1]+0x00000228u,c->r[10]); // 8008851C
  W32(c->r[1]+0x0000022Cu,c->r[9]); // 80088520
  c->r[12]=R32(c->r[3]+0x00000000u); // 80088524
  W32(c->r[1]+0x00000254u,c->r[11]); // 80088528
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8008852C
  W32(c->r[1]+0x00000258u,c->r[10]); // 80088530
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 80088534
  W32(c->r[1]+0x00000248u,c->r[8]); // 80088538
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 8008853C
  W32(c->r[1]+0x00000250u,c->r[0]); // 80088540
  c->ctr=c->r[12]; // 80088544
  if (true) { c->lr=0x8008854Cu; dispatch(c,c->ctr); } // 80088548
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008854C
  c->r[3]=c->r[28]|c->r[28]; // 80088550
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088554
  c->r[6]=c->r[31]|c->r[31]; // 80088558
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008855C
  c->r[4]=c->r[1]+0x000001F4u; // 80088560
  {uint32_t ea=c->r[30]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80088564
  c->r[5]=c->r[1]+0x000001E8u; // 80088568
  {uint32_t ea=c->r[1]+0x0000020Cu; WF32(ea,c->f[0]);} // 8008856C
  c->r[11]=R32(c->r[1]+0x0000020Cu); // 80088570
  {uint32_t ea=c->r[1]+0x00000210u; WF32(ea,c->f[1]);} // 80088574
  c->r[10]=R32(c->r[1]+0x00000210u); // 80088578
  {uint32_t ea=c->r[1]+0x00000214u; WF32(ea,c->f[2]);} // 8008857C
  c->r[9]=R32(c->r[1]+0x00000214u); // 80088580
  {uint32_t ea=c->r[1]+0x00000200u; WF32(ea,c->f[0]);} // 80088584
  c->r[8]=R32(c->r[1]+0x00000200u); // 80088588
  {uint32_t ea=c->r[1]+0x00000204u; WF32(ea,c->f[3]);} // 8008858C
  c->r[7]=R32(c->r[1]+0x00000204u); // 80088590
  {uint32_t ea=c->r[1]+0x00000208u; WF32(ea,c->f[2]);} // 80088594
  c->r[0]=R32(c->r[1]+0x00000208u); // 80088598
  W32(c->r[1]+0x000001E8u,c->r[8]); // 8008859C
  W32(c->r[1]+0x000001ECu,c->r[7]); // 800885A0
  W32(c->r[1]+0x000001F0u,c->r[0]); // 800885A4
  W32(c->r[1]+0x000001F4u,c->r[11]); // 800885A8
  W32(c->r[1]+0x000001F8u,c->r[10]); // 800885AC
  W32(c->r[1]+0x000001FCu,c->r[9]); // 800885B0
  c->r[12]=R32(c->r[28]+0x00000000u); // 800885B4
  W32(c->r[1]+0x00000254u,c->r[11]); // 800885B8
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 800885BC
  W32(c->r[1]+0x00000258u,c->r[10]); // 800885C0
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 800885C4
  W32(c->r[1]+0x00000248u,c->r[8]); // 800885C8
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 800885CC
  W32(c->r[1]+0x00000250u,c->r[0]); // 800885D0
  c->ctr=c->r[12]; // 800885D4
  if (true) { c->lr=0x800885DCu; dispatch(c,c->ctr); } // 800885D8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800885DC
  c->r[3]=c->r[28]|c->r[28]; // 800885E0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800885E4
  c->r[6]=c->r[31]|c->r[31]; // 800885E8
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800885EC
  c->r[4]=c->r[1]+0x000001C4u; // 800885F0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800885F4
  c->r[5]=c->r[1]+0x000001B8u; // 800885F8
  {uint32_t ea=c->r[1]+0x000001DCu; WF32(ea,c->f[0]);} // 800885FC
  c->r[11]=R32(c->r[1]+0x000001DCu); // 80088600
  {uint32_t ea=c->r[1]+0x000001E0u; WF32(ea,c->f[1]);} // 80088604
  c->r[10]=R32(c->r[1]+0x000001E0u); // 80088608
  {uint32_t ea=c->r[1]+0x000001E4u; WF32(ea,c->f[2]);} // 8008860C
  c->r[9]=R32(c->r[1]+0x000001E4u); // 80088610
  {uint32_t ea=c->r[1]+0x000001D0u; WF32(ea,c->f[0]);} // 80088614
  c->r[8]=R32(c->r[1]+0x000001D0u); // 80088618
  {uint32_t ea=c->r[1]+0x000001D4u; WF32(ea,c->f[3]);} // 8008861C
  c->r[7]=R32(c->r[1]+0x000001D4u); // 80088620
  {uint32_t ea=c->r[1]+0x000001D8u; WF32(ea,c->f[2]);} // 80088624
  c->r[0]=R32(c->r[1]+0x000001D8u); // 80088628
  W32(c->r[1]+0x000001B8u,c->r[8]); // 8008862C
  W32(c->r[1]+0x000001BCu,c->r[7]); // 80088630
  W32(c->r[1]+0x000001C0u,c->r[0]); // 80088634
  W32(c->r[1]+0x000001C4u,c->r[11]); // 80088638
  W32(c->r[1]+0x000001C8u,c->r[10]); // 8008863C
  W32(c->r[1]+0x000001CCu,c->r[9]); // 80088640
  c->r[12]=R32(c->r[28]+0x00000000u); // 80088644
  W32(c->r[1]+0x00000254u,c->r[11]); // 80088648
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8008864C
  W32(c->r[1]+0x00000258u,c->r[10]); // 80088650
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 80088654
  W32(c->r[1]+0x00000248u,c->r[8]); // 80088658
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 8008865C
  W32(c->r[1]+0x00000250u,c->r[0]); // 80088660
  c->ctr=c->r[12]; // 80088664
  if (true) { c->lr=0x8008866Cu; dispatch(c,c->ctr); } // 80088668
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008866C
  c->r[3]=c->r[28]|c->r[28]; // 80088670
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088674
  c->r[6]=c->r[31]|c->r[31]; // 80088678
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008867C
  c->r[4]=c->r[1]+0x00000194u; // 80088680
  {uint32_t ea=c->r[30]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80088684
  c->r[5]=c->r[1]+0x00000188u; // 80088688
  {uint32_t ea=c->r[1]+0x000001ACu; WF32(ea,c->f[0]);} // 8008868C
  c->r[11]=R32(c->r[1]+0x000001ACu); // 80088690
  {uint32_t ea=c->r[1]+0x000001B0u; WF32(ea,c->f[1]);} // 80088694
  c->r[10]=R32(c->r[1]+0x000001B0u); // 80088698
  {uint32_t ea=c->r[1]+0x000001B4u; WF32(ea,c->f[2]);} // 8008869C
  c->r[9]=R32(c->r[1]+0x000001B4u); // 800886A0
  {uint32_t ea=c->r[1]+0x000001A0u; WF32(ea,c->f[0]);} // 800886A4
  c->r[8]=R32(c->r[1]+0x000001A0u); // 800886A8
  {uint32_t ea=c->r[1]+0x000001A4u; WF32(ea,c->f[3]);} // 800886AC
  c->r[7]=R32(c->r[1]+0x000001A4u); // 800886B0
  {uint32_t ea=c->r[1]+0x000001A8u; WF32(ea,c->f[2]);} // 800886B4
  c->r[0]=R32(c->r[1]+0x000001A8u); // 800886B8
  W32(c->r[1]+0x00000188u,c->r[8]); // 800886BC
  W32(c->r[1]+0x0000018Cu,c->r[7]); // 800886C0
  W32(c->r[1]+0x00000190u,c->r[0]); // 800886C4
  W32(c->r[1]+0x00000194u,c->r[11]); // 800886C8
  W32(c->r[1]+0x00000198u,c->r[10]); // 800886CC
  W32(c->r[1]+0x0000019Cu,c->r[9]); // 800886D0
  c->r[12]=R32(c->r[28]+0x00000000u); // 800886D4
  W32(c->r[1]+0x00000254u,c->r[11]); // 800886D8
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 800886DC
  W32(c->r[1]+0x00000258u,c->r[10]); // 800886E0
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 800886E4
  W32(c->r[1]+0x00000248u,c->r[8]); // 800886E8
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 800886EC
  W32(c->r[1]+0x00000250u,c->r[0]); // 800886F0
  c->ctr=c->r[12]; // 800886F4
  if (true) { c->lr=0x800886FCu; dispatch(c,c->ctr); } // 800886F8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800886FC
  c->r[3]=c->r[28]|c->r[28]; // 80088700
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80088704
  c->r[6]=c->r[31]|c->r[31]; // 80088708
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008870C
  c->r[4]=c->r[1]+0x00000164u; // 80088710
  {uint32_t ea=c->r[30]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80088714
  c->r[5]=c->r[1]+0x00000158u; // 80088718
  {uint32_t ea=c->r[1]+0x0000017Cu; WF32(ea,c->f[0]);} // 8008871C
  c->r[11]=R32(c->r[1]+0x0000017Cu); // 80088720
  {uint32_t ea=c->r[1]+0x00000180u; WF32(ea,c->f[1]);} // 80088724
  c->r[10]=R32(c->r[1]+0x00000180u); // 80088728
  {uint32_t ea=c->r[1]+0x00000184u; WF32(ea,c->f[2]);} // 8008872C
  c->r[9]=R32(c->r[1]+0x00000184u); // 80088730
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[3]);} // 80088734
  c->r[8]=R32(c->r[1]+0x00000170u); // 80088738
  {uint32_t ea=c->r[1]+0x00000174u; WF32(ea,c->f[1]);} // 8008873C
  c->r[7]=R32(c->r[1]+0x00000174u); // 80088740
  {uint32_t ea=c->r[1]+0x00000178u; WF32(ea,c->f[2]);} // 80088744
  c->r[0]=R32(c->r[1]+0x00000178u); // 80088748
  W32(c->r[1]+0x00000158u,c->r[8]); // 8008874C
  W32(c->r[1]+0x0000015Cu,c->r[7]); // 80088750
  W32(c->r[1]+0x00000160u,c->r[0]); // 80088754
  W32(c->r[1]+0x00000164u,c->r[11]); // 80088758
  W32(c->r[1]+0x00000168u,c->r[10]); // 8008875C
  W32(c->r[1]+0x0000016Cu,c->r[9]); // 80088760
  c->r[12]=R32(c->r[28]+0x00000000u); // 80088764
  W32(c->r[1]+0x00000254u,c->r[11]); // 80088768
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8008876C
  W32(c->r[1]+0x00000258u,c->r[10]); // 80088770
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 80088774
  W32(c->r[1]+0x00000248u,c->r[8]); // 80088778
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 8008877C
  W32(c->r[1]+0x00000250u,c->r[0]); // 80088780
  c->ctr=c->r[12]; // 80088784
  if (true) { c->lr=0x8008878Cu; dispatch(c,c->ctr); } // 80088788
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008878C
  c->r[3]=c->r[28]|c->r[28]; // 80088790
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80088794
  c->r[6]=c->r[31]|c->r[31]; // 80088798
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008879C
  c->r[4]=c->r[1]+0x00000134u; // 800887A0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800887A4
  c->r[5]=c->r[1]+0x00000128u; // 800887A8
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 800887AC
  c->r[11]=R32(c->r[1]+0x0000014Cu); // 800887B0
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 800887B4
  c->r[10]=R32(c->r[1]+0x00000150u); // 800887B8
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[2]);} // 800887BC
  c->r[9]=R32(c->r[1]+0x00000154u); // 800887C0
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[3]);} // 800887C4
  c->r[8]=R32(c->r[1]+0x00000140u); // 800887C8
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[1]);} // 800887CC
  c->r[7]=R32(c->r[1]+0x00000144u); // 800887D0
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[2]);} // 800887D4
  c->r[0]=R32(c->r[1]+0x00000148u); // 800887D8
  W32(c->r[1]+0x00000128u,c->r[8]); // 800887DC
  W32(c->r[1]+0x0000012Cu,c->r[7]); // 800887E0
  W32(c->r[1]+0x00000130u,c->r[0]); // 800887E4
  W32(c->r[1]+0x00000134u,c->r[11]); // 800887E8
  W32(c->r[1]+0x00000138u,c->r[10]); // 800887EC
  W32(c->r[1]+0x0000013Cu,c->r[9]); // 800887F0
  c->r[12]=R32(c->r[28]+0x00000000u); // 800887F4
  W32(c->r[1]+0x00000254u,c->r[11]); // 800887F8
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 800887FC
  W32(c->r[1]+0x00000258u,c->r[10]); // 80088800
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 80088804
  W32(c->r[1]+0x00000248u,c->r[8]); // 80088808
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 8008880C
  W32(c->r[1]+0x00000250u,c->r[0]); // 80088810
  c->ctr=c->r[12]; // 80088814
  if (true) { c->lr=0x8008881Cu; dispatch(c,c->ctr); } // 80088818
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008881C
  c->r[3]=c->r[28]|c->r[28]; // 80088820
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80088824
  c->r[6]=c->r[31]|c->r[31]; // 80088828
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008882C
  c->r[4]=c->r[1]+0x00000104u; // 80088830
  {uint32_t ea=c->r[30]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80088834
  c->r[5]=c->r[1]+0x000000F8u; // 80088838
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 8008883C
  c->r[11]=R32(c->r[1]+0x0000011Cu); // 80088840
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 80088844
  c->r[10]=R32(c->r[1]+0x00000120u); // 80088848
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[2]);} // 8008884C
  c->r[9]=R32(c->r[1]+0x00000124u); // 80088850
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[3]);} // 80088854
  c->r[8]=R32(c->r[1]+0x00000110u); // 80088858
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 8008885C
  c->r[7]=R32(c->r[1]+0x00000114u); // 80088860
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[2]);} // 80088864
  c->r[0]=R32(c->r[1]+0x00000118u); // 80088868
  W32(c->r[1]+0x000000F8u,c->r[8]); // 8008886C
  W32(c->r[1]+0x000000FCu,c->r[7]); // 80088870
  W32(c->r[1]+0x00000100u,c->r[0]); // 80088874
  W32(c->r[1]+0x00000104u,c->r[11]); // 80088878
  W32(c->r[1]+0x00000108u,c->r[10]); // 8008887C
  W32(c->r[1]+0x0000010Cu,c->r[9]); // 80088880
  c->r[12]=R32(c->r[28]+0x00000000u); // 80088884
  W32(c->r[1]+0x00000254u,c->r[11]); // 80088888
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8008888C
  W32(c->r[1]+0x00000258u,c->r[10]); // 80088890
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 80088894
  W32(c->r[1]+0x00000248u,c->r[8]); // 80088898
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 8008889C
  W32(c->r[1]+0x00000250u,c->r[0]); // 800888A0
  c->ctr=c->r[12]; // 800888A4
  if (true) { c->lr=0x800888ACu; dispatch(c,c->ctr); } // 800888A8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800888AC
  c->r[3]=c->r[28]|c->r[28]; // 800888B0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800888B4
  c->r[6]=c->r[31]|c->r[31]; // 800888B8
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800888BC
  c->r[4]=c->r[1]+0x000000D4u; // 800888C0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800888C4
  c->r[5]=c->r[1]+0x000000C8u; // 800888C8
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 800888CC
  c->r[11]=R32(c->r[1]+0x000000ECu); // 800888D0
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[1]);} // 800888D4
  c->r[10]=R32(c->r[1]+0x000000F0u); // 800888D8
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[2]);} // 800888DC
  c->r[9]=R32(c->r[1]+0x000000F4u); // 800888E0
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[3]);} // 800888E4
  c->r[8]=R32(c->r[1]+0x000000E0u); // 800888E8
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[1]);} // 800888EC
  c->r[7]=R32(c->r[1]+0x000000E4u); // 800888F0
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[2]);} // 800888F4
  c->r[0]=R32(c->r[1]+0x000000E8u); // 800888F8
  W32(c->r[1]+0x000000C8u,c->r[8]); // 800888FC
  W32(c->r[1]+0x000000CCu,c->r[7]); // 80088900
  W32(c->r[1]+0x000000D0u,c->r[0]); // 80088904
  W32(c->r[1]+0x000000D4u,c->r[11]); // 80088908
  W32(c->r[1]+0x000000D8u,c->r[10]); // 8008890C
  W32(c->r[1]+0x000000DCu,c->r[9]); // 80088910
  c->r[12]=R32(c->r[28]+0x00000000u); // 80088914
  W32(c->r[1]+0x00000254u,c->r[11]); // 80088918
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8008891C
  W32(c->r[1]+0x00000258u,c->r[10]); // 80088920
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 80088924
  W32(c->r[1]+0x00000248u,c->r[8]); // 80088928
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 8008892C
  W32(c->r[1]+0x00000250u,c->r[0]); // 80088930
  c->ctr=c->r[12]; // 80088934
  if (true) { c->lr=0x8008893Cu; dispatch(c,c->ctr); } // 80088938
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008893C
  c->r[3]=c->r[28]|c->r[28]; // 80088940
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088944
  c->r[6]=c->r[31]|c->r[31]; // 80088948
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008894C
  c->r[4]=c->r[1]+0x000000A4u; // 80088950
  {uint32_t ea=c->r[30]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80088954
  c->r[5]=c->r[1]+0x00000098u; // 80088958
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8008895C
  c->r[11]=R32(c->r[1]+0x000000BCu); // 80088960
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 80088964
  c->r[10]=R32(c->r[1]+0x000000C0u); // 80088968
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 8008896C
  c->r[9]=R32(c->r[1]+0x000000C4u); // 80088970
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 80088974
  c->r[8]=R32(c->r[1]+0x000000B0u); // 80088978
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 8008897C
  c->r[7]=R32(c->r[1]+0x000000B4u); // 80088980
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[3]);} // 80088984
  c->r[0]=R32(c->r[1]+0x000000B8u); // 80088988
  W32(c->r[1]+0x00000098u,c->r[8]); // 8008898C
  W32(c->r[1]+0x0000009Cu,c->r[7]); // 80088990
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80088994
  W32(c->r[1]+0x000000A4u,c->r[11]); // 80088998
  W32(c->r[1]+0x000000A8u,c->r[10]); // 8008899C
  W32(c->r[1]+0x000000ACu,c->r[9]); // 800889A0
  c->r[12]=R32(c->r[28]+0x00000000u); // 800889A4
  W32(c->r[1]+0x00000254u,c->r[11]); // 800889A8
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 800889AC
  W32(c->r[1]+0x00000258u,c->r[10]); // 800889B0
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 800889B4
  W32(c->r[1]+0x00000248u,c->r[8]); // 800889B8
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 800889BC
  W32(c->r[1]+0x00000250u,c->r[0]); // 800889C0
  c->ctr=c->r[12]; // 800889C4
  if (true) { c->lr=0x800889CCu; dispatch(c,c->ctr); } // 800889C8
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800889CC
  c->r[3]=c->r[28]|c->r[28]; // 800889D0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800889D4
  c->r[6]=c->r[31]|c->r[31]; // 800889D8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800889DC
  c->r[4]=c->r[1]+0x00000074u; // 800889E0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800889E4
  c->r[5]=c->r[1]+0x00000068u; // 800889E8
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800889EC
  c->r[11]=R32(c->r[1]+0x0000008Cu); // 800889F0
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 800889F4
  c->r[10]=R32(c->r[1]+0x00000090u); // 800889F8
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 800889FC
  c->r[9]=R32(c->r[1]+0x00000094u); // 80088A00
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80088A04
  c->r[8]=R32(c->r[1]+0x00000080u); // 80088A08
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80088A0C
  c->r[7]=R32(c->r[1]+0x00000084u); // 80088A10
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[3]);} // 80088A14
  c->r[0]=R32(c->r[1]+0x00000088u); // 80088A18
  W32(c->r[1]+0x00000068u,c->r[8]); // 80088A1C
  W32(c->r[1]+0x0000006Cu,c->r[7]); // 80088A20
  W32(c->r[1]+0x00000070u,c->r[0]); // 80088A24
  W32(c->r[1]+0x00000074u,c->r[11]); // 80088A28
  W32(c->r[1]+0x00000078u,c->r[10]); // 80088A2C
  W32(c->r[1]+0x0000007Cu,c->r[9]); // 80088A30
  c->r[12]=R32(c->r[28]+0x00000000u); // 80088A34
  W32(c->r[1]+0x00000254u,c->r[11]); // 80088A38
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80088A3C
  W32(c->r[1]+0x00000258u,c->r[10]); // 80088A40
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 80088A44
  W32(c->r[1]+0x00000248u,c->r[8]); // 80088A48
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 80088A4C
  W32(c->r[1]+0x00000250u,c->r[0]); // 80088A50
  c->ctr=c->r[12]; // 80088A54
  if (true) { c->lr=0x80088A5Cu; dispatch(c,c->ctr); } // 80088A58
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80088A5C
  c->r[3]=c->r[28]|c->r[28]; // 80088A60
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088A64
  c->r[6]=c->r[31]|c->r[31]; // 80088A68
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80088A6C
  c->r[4]=c->r[1]+0x00000044u; // 80088A70
  {uint32_t ea=c->r[30]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80088A74
  c->r[5]=c->r[1]+0x00000038u; // 80088A78
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80088A7C
  c->r[11]=R32(c->r[1]+0x0000005Cu); // 80088A80
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 80088A84
  c->r[10]=R32(c->r[1]+0x00000060u); // 80088A88
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 80088A8C
  c->r[9]=R32(c->r[1]+0x00000064u); // 80088A90
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80088A94
  c->r[8]=R32(c->r[1]+0x00000050u); // 80088A98
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80088A9C
  c->r[7]=R32(c->r[1]+0x00000054u); // 80088AA0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[3]);} // 80088AA4
  c->r[0]=R32(c->r[1]+0x00000058u); // 80088AA8
  W32(c->r[1]+0x00000038u,c->r[8]); // 80088AAC
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 80088AB0
  W32(c->r[1]+0x00000040u,c->r[0]); // 80088AB4
  W32(c->r[1]+0x00000044u,c->r[11]); // 80088AB8
  W32(c->r[1]+0x00000048u,c->r[10]); // 80088ABC
  W32(c->r[1]+0x0000004Cu,c->r[9]); // 80088AC0
  c->r[12]=R32(c->r[28]+0x00000000u); // 80088AC4
  W32(c->r[1]+0x00000254u,c->r[11]); // 80088AC8
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80088ACC
  W32(c->r[1]+0x00000258u,c->r[10]); // 80088AD0
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 80088AD4
  W32(c->r[1]+0x00000248u,c->r[8]); // 80088AD8
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 80088ADC
  W32(c->r[1]+0x00000250u,c->r[0]); // 80088AE0
  c->ctr=c->r[12]; // 80088AE4
  if (true) { c->lr=0x80088AECu; dispatch(c,c->ctr); } // 80088AE8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80088AEC
  c->r[3]=c->r[28]|c->r[28]; // 80088AF0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088AF4
  c->r[6]=c->r[31]|c->r[31]; // 80088AF8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80088AFC
  c->r[4]=c->r[1]+0x00000014u; // 80088B00
  {uint32_t ea=c->r[30]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80088B04
  c->r[5]=c->r[1]+0x00000008u; // 80088B08
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80088B0C
  c->r[11]=R32(c->r[1]+0x0000002Cu); // 80088B10
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80088B14
  c->r[10]=R32(c->r[1]+0x00000030u); // 80088B18
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 80088B1C
  c->r[9]=R32(c->r[1]+0x00000034u); // 80088B20
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80088B24
  c->r[8]=R32(c->r[1]+0x00000020u); // 80088B28
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80088B2C
  c->r[7]=R32(c->r[1]+0x00000024u); // 80088B30
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 80088B34
  c->r[0]=R32(c->r[1]+0x00000028u); // 80088B38
  W32(c->r[1]+0x00000008u,c->r[8]); // 80088B3C
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 80088B40
  W32(c->r[1]+0x00000010u,c->r[0]); // 80088B44
  W32(c->r[1]+0x00000014u,c->r[11]); // 80088B48
  W32(c->r[1]+0x00000018u,c->r[10]); // 80088B4C
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 80088B50
  c->r[12]=R32(c->r[28]+0x00000000u); // 80088B54
  W32(c->r[1]+0x00000254u,c->r[11]); // 80088B58
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80088B5C
  W32(c->r[1]+0x00000258u,c->r[10]); // 80088B60
  W32(c->r[1]+0x0000025Cu,c->r[9]); // 80088B64
  W32(c->r[1]+0x00000248u,c->r[8]); // 80088B68
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 80088B6C
  W32(c->r[1]+0x00000250u,c->r[0]); // 80088B70
  c->ctr=c->r[12]; // 80088B74
  if (true) { c->lr=0x80088B7Cu; dispatch(c,c->ctr); } // 80088B78
  c->r[0]=R32(c->r[1]+0x00000274u); // 80088B7C
  c->r[31]=R32(c->r[1]+0x0000026Cu); // 80088B80
  c->r[30]=R32(c->r[1]+0x00000268u); // 80088B84
  c->r[29]=R32(c->r[1]+0x00000264u); // 80088B88
  c->r[28]=R32(c->r[1]+0x00000260u); // 80088B8C
  c->lr=c->r[0]; // 80088B90
  c->r[1]=c->r[1]+0x00000270u; // 80088B94
  return; // 80088B98
}

// RenderSphere__11WiiGraphicsF7Vector3fR8Material
void f_80088B9C(Ctx* __restrict c) {
  trace_call(0x80088B9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088B9C
  c->r[0]=c->lr; // 80088BA0
  W32(c->r[1]+0x000001A4u,c->r[0]); // 80088BA4
  c->r[11]=c->r[1]+0x000000F0u; // 80088BA8
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[31]);} // 80088BAC
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,31,ea,0,0);} // 80088BB0
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[30]);} // 80088BB4
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,30,ea,0,0);} // 80088BB8
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[29]);} // 80088BBC
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,29,ea,0,0);} // 80088BC0
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[28]);} // 80088BC4
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,28,ea,0,0);} // 80088BC8
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[27]);} // 80088BCC
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,27,ea,0,0);} // 80088BD0
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[26]);} // 80088BD4
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,26,ea,0,0);} // 80088BD8
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[25]);} // 80088BDC
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,25,ea,0,0);} // 80088BE0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[24]);} // 80088BE4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,24,ea,0,0);} // 80088BE8
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[23]);} // 80088BEC
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,23,ea,0,0);} // 80088BF0
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[22]);} // 80088BF4
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,22,ea,0,0);} // 80088BF8
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[21]);} // 80088BFC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,21,ea,0,0);} // 80088C00
  c->lr=0x80088C08u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80088C04
  c->r[0]=0u+0x0000000Au; // 80088C08
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[30]=c->ps1[30]=RF32(ea);} // 80088C0C
  c->r[0]=c->r[0]^0x80000000u; // 80088C10
  c->r[6]=0u+0x43300000u; // 80088C14
  W32(c->r[1]+0x000000C0u,c->r[6]); // 80088C18
  c->f[21]=c->f[1]; // 80088C1C
  {uint32_t ea=c->r[2]+0xFFFF8C98u; c->f[31]=RF64(ea);} // 80088C20
  c->r[25]=c->r[3]|c->r[3]; // 80088C24
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80088C28
  c->r[26]=c->r[4]|c->r[4]; // 80088C2C
  {uint32_t ea=c->r[2]+0xFFFF8C88u; c->f[2]=c->ps1[2]=RF32(ea);} // 80088C30
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 80088C34
  c->r[27]=c->r[5]|c->r[5]; // 80088C38
  W32(c->r[1]+0x000000C8u,c->r[6]); // 80088C3C
  c->r[30]=0u+0x00000000u; // 80088C40
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 80088C44
  {uint32_t ea=c->r[2]+0xFFFF8CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088C48
  W32(c->r[1]+0x000000CCu,c->r[0]); // 80088C4C
  c->r[29]=0u+0x00000000u; // 80088C50
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=RF64(ea);} // 80088C54
  c->f[25]=c->ps1[25]=S(c->f[2]/c->f[3]); // 80088C58
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[30]);} // 80088C5C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[30]);} // 80088C60
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[30]);} // 80088C64
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[30]);} // 80088C68
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[30]);} // 80088C6C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80088C70
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[30]);} // 80088C74
  c->f[24]=c->ps1[24]=S(c->f[0]/c->f[1]); // 80088C78
L_80088C7C:;
  c->r[0]=c->r[29]^0x80000000u; // 80088C7C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80088C80
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 80088C84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80088C88
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[25]); // 80088C8C
  c->lr=0x80088C94u; f_800E3DC0(c); // 80088C90
  c->r[0]=c->r[29]^0x80000000u; // 80088C94
  W32(c->r[1]+0x000000CCu,c->r[0]); // 80088C98
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80088C9C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=RF64(ea);} // 80088CA0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80088CA4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[25]); // 80088CA8
  c->lr=0x80088CB0u; f_800E38B8(c); // 80088CAC
  c->f[27]=c->ps1[27]=S(c->f[1]); // 80088CB0
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 80088CB4
  c->r[28]=0u+0x00000000u; // 80088CB8
  c->r[31]=c->r[0]^0x80000000u; // 80088CBC
  c->f[29]=c->ps1[29]=S(c->f[27]*c->f[21]); // 80088CC0
L_80088CC4:;
  c->r[0]=c->r[28]^0x80000000u; // 80088CC4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80088CC8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 80088CCC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80088CD0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[24]); // 80088CD4
  c->lr=0x80088CDCu; f_800E3DC0(c); // 80088CD8
  c->r[0]=c->r[28]^0x80000000u; // 80088CDC
  W32(c->r[1]+0x000000CCu,c->r[0]); // 80088CE0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80088CE4
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=RF64(ea);} // 80088CE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80088CEC
  c->f[23]=c->ps1[23]=S(c->f[28]*c->f[1]); // 80088CF0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[24]); // 80088CF4
  c->lr=0x80088CFCu; f_800E38B8(c); // 80088CF8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80088CFC
  {uint32_t ea=c->r[26]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80088D00
  c->f[3]=c->ps1[3]=S(c->f[23]*c->f[21]); // 80088D04
  {uint32_t ea=c->r[26]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80088D08
  c->f[5]=c->ps1[5]=S(c->f[29]+c->f[2]); // 80088D0C
  W32(c->r[1]+0x000000C4u,c->r[31]); // 80088D10
  c->f[22]=c->ps1[22]=S(c->f[28]*c->f[0]); // 80088D14
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 80088D18
  c->f[4]=c->ps1[4]=S(c->f[3]+c->f[1]); // 80088D1C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[5]);} // 80088D20
  {uint32_t ea=c->r[26]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80088D24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80088D28
  c->f[2]=c->ps1[2]=S(c->f[22]*c->f[21]); // 80088D2C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[4]);} // 80088D30
  c->r[3]=R32(c->r[1]+0x00000090u); // 80088D34
  c->r[4]=R32(c->r[1]+0x0000008Cu); // 80088D38
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[1]); // 80088D3C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[23]);} // 80088D40
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[25]); // 80088D44
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[4]);} // 80088D48
  c->r[0]=R32(c->r[1]+0x00000094u); // 80088D4C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[27]);} // 80088D50
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[22]);} // 80088D54
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[3]);} // 80088D58
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[29]);} // 80088D5C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[2]);} // 80088D60
  W32(c->r[1]+0x000000A4u,c->r[4]); // 80088D64
  W32(c->r[1]+0x000000A8u,c->r[3]); // 80088D68
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80088D6C
  c->lr=0x80088D74u; f_800E3DC0(c); // 80088D70
  W32(c->r[1]+0x000000CCu,c->r[31]); // 80088D74
  c->f[26]=c->ps1[26]=S(c->f[1]); // 80088D78
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=RF64(ea);} // 80088D7C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80088D80
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[25]); // 80088D84
  c->lr=0x80088D8Cu; f_800E38B8(c); // 80088D88
  c->r[0]=c->r[28]^0x80000000u; // 80088D8C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80088D90
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80088D94
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 80088D98
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 80088D9C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80088DA0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[24]); // 80088DA4
  c->lr=0x80088DACu; f_800E3DC0(c); // 80088DA8
  c->r[0]=c->r[28]^0x80000000u; // 80088DAC
  W32(c->r[1]+0x000000CCu,c->r[0]); // 80088DB0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80088DB4
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=RF64(ea);} // 80088DB8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80088DBC
  c->f[2]=c->ps1[2]=S(c->f[26]*c->f[1]); // 80088DC0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[24]); // 80088DC4
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[2]);} // 80088DC8
  c->lr=0x80088DD0u; f_800E38B8(c); // 80088DCC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80088DD0
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80088DD4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088DD8
  c->r[3]=c->r[25]|c->r[25]; // 80088DDC
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[21]); // 80088DE0
  {uint32_t ea=c->r[26]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80088DE4
  c->f[3]=c->ps1[3]=S(c->f[26]*c->f[2]); // 80088DE8
  {uint32_t ea=c->r[26]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80088DEC
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[21]); // 80088DF0
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088DF4
  c->f[6]=c->ps1[6]=S(c->f[4]+c->f[1]); // 80088DF8
  c->r[8]=R32(c->r[1]+0x000000A4u); // 80088DFC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[21]); // 80088E00
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[6]);} // 80088E04
  c->f[6]=c->ps1[6]=S(c->f[5]+c->f[0]); // 80088E08
  c->r[7]=R32(c->r[1]+0x000000A8u); // 80088E0C
  c->r[10]=R32(c->r[1]+0x0000006Cu); // 80088E10
  c->r[6]=c->r[27]|c->r[27]; // 80088E14
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 80088E18
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[6]);} // 80088E1C
  c->r[0]=R32(c->r[1]+0x000000ACu); // 80088E20
  c->r[4]=c->r[1]+0x00000050u; // 80088E24
  c->r[11]=R32(c->r[1]+0x00000068u); // 80088E28
  c->r[5]=c->r[1]+0x00000044u; // 80088E2C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80088E30
  c->r[9]=R32(c->r[1]+0x00000070u); // 80088E34
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[3]);} // 80088E38
  W32(c->r[1]+0x00000044u,c->r[11]); // 80088E3C
  W32(c->r[1]+0x00000048u,c->r[10]); // 80088E40
  W32(c->r[1]+0x0000004Cu,c->r[9]); // 80088E44
  W32(c->r[1]+0x00000050u,c->r[8]); // 80088E48
  W32(c->r[1]+0x00000054u,c->r[7]); // 80088E4C
  W32(c->r[1]+0x00000058u,c->r[0]); // 80088E50
  c->r[12]=R32(c->r[25]+0x00000000u); // 80088E54
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[5]);} // 80088E58
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80088E5C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 80088E60
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80088E64
  W32(c->r[1]+0x00000098u,c->r[11]); // 80088E68
  W32(c->r[1]+0x0000009Cu,c->r[10]); // 80088E6C
  W32(c->r[1]+0x000000A0u,c->r[9]); // 80088E70
  c->ctr=c->r[12]; // 80088E74
  if (true) { c->lr=0x80088E7Cu; dispatch(c,c->ctr); } // 80088E78
  cmps(c,0,(int32_t)c->r[30],0); // 80088E7C
  if (!crb(c,2)) { goto L_80088EEC; } // 80088E80
  c->f[3]=c->ps1[3]=S(c->f[22]*c->f[21]); // 80088E84
  {uint32_t ea=c->r[26]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80088E88
  c->f[4]=c->ps1[4]=S(c->f[27]*c->f[21]); // 80088E8C
  {uint32_t ea=c->r[26]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80088E90
  c->f[5]=c->ps1[5]=S(c->f[23]*c->f[21]); // 80088E94
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80088E98
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80088E9C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[23]);} // 80088EA0
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 80088EA4
  c->r[30]=0u+0x00000001u; // 80088EA8
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[0]); // 80088EAC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 80088EB0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80088EB4
  c->r[0]=R32(c->r[1]+0x00000040u); // 80088EB8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80088EBC
  c->r[4]=R32(c->r[1]+0x00000038u); // 80088EC0
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 80088EC4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[27]);} // 80088EC8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[22]);} // 80088ECC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[5]);} // 80088ED0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[4]);} // 80088ED4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 80088ED8
  W32(c->r[1]+0x000000B0u,c->r[4]); // 80088EDC
  W32(c->r[1]+0x000000B4u,c->r[3]); // 80088EE0
  W32(c->r[1]+0x000000B8u,c->r[0]); // 80088EE4
  goto L_80088F54; // 80088EE8
L_80088EEC:;
  c->r[11]=R32(c->r[1]+0x000000A4u); // 80088EEC
  c->r[3]=c->r[25]|c->r[25]; // 80088EF0
  c->r[10]=R32(c->r[1]+0x000000A8u); // 80088EF4
  c->r[6]=c->r[27]|c->r[27]; // 80088EF8
  c->r[9]=R32(c->r[1]+0x000000ACu); // 80088EFC
  c->r[4]=c->r[1]+0x00000014u; // 80088F00
  c->r[8]=R32(c->r[1]+0x000000B0u); // 80088F04
  c->r[5]=c->r[1]+0x00000008u; // 80088F08
  c->r[7]=R32(c->r[1]+0x000000B4u); // 80088F0C
  c->r[0]=R32(c->r[1]+0x000000B8u); // 80088F10
  W32(c->r[1]+0x00000008u,c->r[11]); // 80088F14
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80088F18
  W32(c->r[1]+0x00000010u,c->r[9]); // 80088F1C
  W32(c->r[1]+0x00000014u,c->r[8]); // 80088F20
  W32(c->r[1]+0x00000018u,c->r[7]); // 80088F24
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80088F28
  c->r[12]=R32(c->r[25]+0x00000000u); // 80088F2C
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80088F30
  c->ctr=c->r[12]; // 80088F34
  if (true) { c->lr=0x80088F3Cu; dispatch(c,c->ctr); } // 80088F38
  c->r[4]=R32(c->r[1]+0x000000A4u); // 80088F3C
  c->r[3]=R32(c->r[1]+0x000000A8u); // 80088F40
  c->r[0]=R32(c->r[1]+0x000000ACu); // 80088F44
  W32(c->r[1]+0x000000B0u,c->r[4]); // 80088F48
  W32(c->r[1]+0x000000B4u,c->r[3]); // 80088F4C
  W32(c->r[1]+0x000000B8u,c->r[0]); // 80088F50
L_80088F54:;
  c->r[28]=c->r[28]+0x00000001u; // 80088F54
  cmps(c,0,(int32_t)c->r[28],11); // 80088F58
  if (crb(c,0)) { IRQCHK(c); goto L_80088CC4; } // 80088F5C
  c->r[29]=c->r[29]+0x00000001u; // 80088F60
  cmps(c,0,(int32_t)c->r[29],11); // 80088F64
  if (crb(c,0)) { IRQCHK(c); goto L_80088C7C; } // 80088F68
  c->r[11]=c->r[1]+0x000000F0u; // 80088F6C
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,31,ea,0,0);} // 80088F70
  {uint32_t ea=c->r[1]+0x00000190u; c->f[31]=RF64(ea);} // 80088F74
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,30,ea,0,0);} // 80088F78
  {uint32_t ea=c->r[1]+0x00000180u; c->f[30]=RF64(ea);} // 80088F7C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,29,ea,0,0);} // 80088F80
  {uint32_t ea=c->r[1]+0x00000170u; c->f[29]=RF64(ea);} // 80088F84
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,28,ea,0,0);} // 80088F88
  {uint32_t ea=c->r[1]+0x00000160u; c->f[28]=RF64(ea);} // 80088F8C
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,27,ea,0,0);} // 80088F90
  {uint32_t ea=c->r[1]+0x00000150u; c->f[27]=RF64(ea);} // 80088F94
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,26,ea,0,0);} // 80088F98
  {uint32_t ea=c->r[1]+0x00000140u; c->f[26]=RF64(ea);} // 80088F9C
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,25,ea,0,0);} // 80088FA0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[25]=RF64(ea);} // 80088FA4
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,24,ea,0,0);} // 80088FA8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[24]=RF64(ea);} // 80088FAC
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,23,ea,0,0);} // 80088FB0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[23]=RF64(ea);} // 80088FB4
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,22,ea,0,0);} // 80088FB8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[22]=RF64(ea);} // 80088FBC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,21,ea,0,0);} // 80088FC0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[21]=RF64(ea);} // 80088FC4
  c->lr=0x80088FCCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80088FC8
  c->r[0]=R32(c->r[1]+0x000001A4u); // 80088FCC
  c->lr=c->r[0]; // 80088FD0
  c->r[1]=c->r[1]+0x000001A0u; // 80088FD4
  return; // 80088FD8
}

// GetRenderStat__11WiiGraphicsF15RenderStatistic
void f_80088FDC(Ctx* __restrict c) {
  trace_call(0x80088FDCu);
  cmps(c,0,(int32_t)c->r[4],0); // 80088FDC
  if (crb(c,2)) { goto L_80088FF0; } // 80088FE0
  cmps(c,0,(int32_t)c->r[4],1); // 80088FE4
  if (crb(c,2)) { goto L_80088FF8; } // 80088FE8
  goto L_80089000; // 80088FEC
L_80088FF0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80088FF0
  return; // 80088FF4
L_80088FF8:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80088FF8
  return; // 80088FFC
L_80089000:;
  c->r[3]=0u+0xFFFFFFFFu; // 80089000
  return; // 80089004
}

// GetNumSupportedLights__11WiiGraphicsFv
void f_80089008(Ctx* __restrict c) {
  trace_call(0x80089008u);
  c->r[3]=0u+0x00000008u; // 80089008
  return; // 8008900C
}

// RenderPostProcess__11WiiGraphicsFv
void f_80089010(Ctx* __restrict c) {
  trace_call(0x80089010u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80089010
  c->r[0]=c->lr; // 80089014
  W32(c->r[1]+0x00000144u,c->r[0]); // 80089018
  c->r[11]=c->r[1]+0x000000F0u; // 8008901C
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 80089020
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 80089024
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[30]);} // 80089028
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,30,ea,0,0);} // 8008902C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[29]);} // 80089030
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,29,ea,0,0);} // 80089034
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[28]);} // 80089038
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,28,ea,0,0);} // 8008903C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[27]);} // 80089040
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,27,ea,0,0);} // 80089044
  c->lr=0x8008904Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80089048
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008904C
  c->r[0]=0u+0x43300000u; // 80089050
  c->r[24]=c->r[3]|c->r[3]; // 80089054
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80089058
  c->r[12]=R32(c->r[12]+0x00000034u); // 8008905C
  c->r[4]=c->r[1]+0x0000001Cu; // 80089060
  W32(c->r[1]+0x000000A8u,c->r[0]); // 80089064
  c->r[5]=c->r[1]+0x00000018u; // 80089068
  c->r[6]=c->r[1]+0x00000014u; // 8008906C
  c->r[7]=c->r[1]+0x00000010u; // 80089070
  c->ctr=c->r[12]; // 80089074
  if (true) { c->lr=0x8008907Cu; dispatch(c,c->ctr); } // 80089078
  c->r[12]=R32(c->r[24]+0x00000000u); // 8008907C
  c->r[3]=c->r[24]|c->r[24]; // 80089080
  c->r[7]=R32(c->r[13]+0xFFFF8B80u); // 80089084
  c->r[4]=0u+0x00000000u; // 80089088
  c->r[12]=R32(c->r[12]+0x00000030u); // 8008908C
  c->r[5]=0u+0x00000000u; // 80089090
  c->r[6]=R16(c->r[7]+0x00000004u); // 80089094
  c->r[7]=R16(c->r[7]+0x00000006u); // 80089098
  c->ctr=c->r[12]; // 8008909C
  if (true) { c->lr=0x800890A4u; dispatch(c,c->ctr); } // 800890A0
  c->r[3]=c->r[24]+0x00010000u; // 800890A4
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 800890A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800890AC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800890B0
  c->ctr=c->r[12]; // 800890B4
  if (true) { c->lr=0x800890BCu; dispatch(c,c->ctr); } // 800890B8
  c->r[6]=R32(c->r[13]+0xFFFF8B80u); // 800890BC
  c->r[25]=c->r[3]|c->r[3]; // 800890C0
  c->r[3]=0u+0x00000000u; // 800890C4
  c->r[4]=0u+0x00000000u; // 800890C8
  c->r[5]=R16(c->r[6]+0x00000004u); // 800890CC
  c->r[0]=R16(c->r[6]+0x00000006u); // 800890D0
  c->r[5]=rotl(c->r[5],31)&0x0000FFFFu; // 800890D4
  c->r[6]=rotl(c->r[0],31)&0x0000FFFFu; // 800890D8
  c->lr=0x800890E0u; f_800D01A4(c); // 800890DC
  c->r[3]=c->r[24]+0x00010000u; // 800890E0
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 800890E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800890E8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800890EC
  c->ctr=c->r[12]; // 800890F0
  if (true) { c->lr=0x800890F8u; dispatch(c,c->ctr); } // 800890F4
  c->r[4]=c->r[24]+0x00010000u; // 800890F8
  c->r[23]=rotl(c->r[3],0)&0x0000FFFFu; // 800890FC
  c->r[3]=R32(c->r[4]+0xFFFF81ACu); // 80089100
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089104
  c->r[12]=R32(c->r[12]+0x00000028u); // 80089108
  c->ctr=c->r[12]; // 8008910C
  if (true) { c->lr=0x80089114u; dispatch(c,c->ctr); } // 80089110
  c->r[4]=c->r[23]|c->r[23]; // 80089114
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80089118
  c->r[5]=0u+0x00000006u; // 8008911C
  c->r[6]=0u+0x00000000u; // 80089120
  c->lr=0x80089128u; f_800D0208(c); // 80089124
  c->r[3]=R32(c->r[25]+0x00000060u); // 80089128
  c->r[4]=0u+0x00000000u; // 8008912C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80089130
  c->r[3]=R32(c->r[3]+0x00000000u); // 80089134
  c->r[3]=R32(c->r[3]+0x00000008u); // 80089138
  c->lr=0x80089140u; f_800D0A14(c); // 8008913C
  c->r[3]=c->r[24]+0x00010000u; // 80089140
  c->r[3]=R32(c->r[3]+0xFFFF81B0u); // 80089144
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089148
  c->r[12]=R32(c->r[12]+0x00000040u); // 8008914C
  c->ctr=c->r[12]; // 80089150
  if (true) { c->lr=0x80089158u; dispatch(c,c->ctr); } // 80089154
  c->r[6]=R32(c->r[13]+0xFFFF8B80u); // 80089158
  c->r[25]=c->r[3]|c->r[3]; // 8008915C
  c->r[3]=0u+0x00000000u; // 80089160
  c->r[4]=0u+0x00000000u; // 80089164
  c->r[5]=R16(c->r[6]+0x00000004u); // 80089168
  c->r[6]=R16(c->r[6]+0x00000006u); // 8008916C
  c->lr=0x80089174u; f_800D01A4(c); // 80089170
  c->r[3]=c->r[24]+0x00010000u; // 80089174
  c->r[3]=R32(c->r[3]+0xFFFF81B0u); // 80089178
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008917C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80089180
  c->ctr=c->r[12]; // 80089184
  if (true) { c->lr=0x8008918Cu; dispatch(c,c->ctr); } // 80089188
  c->r[4]=c->r[24]+0x00010000u; // 8008918C
  c->r[23]=rotl(c->r[3],0)&0x0000FFFFu; // 80089190
  c->r[3]=R32(c->r[4]+0xFFFF81B0u); // 80089194
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089198
  c->r[12]=R32(c->r[12]+0x00000028u); // 8008919C
  c->ctr=c->r[12]; // 800891A0
  if (true) { c->lr=0x800891A8u; dispatch(c,c->ctr); } // 800891A4
  c->r[4]=c->r[23]|c->r[23]; // 800891A8
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800891AC
  c->r[5]=0u+0x00000006u; // 800891B0
  c->r[6]=0u+0x00000001u; // 800891B4
  c->lr=0x800891BCu; f_800D0208(c); // 800891B8
  c->r[3]=R32(c->r[25]+0x00000060u); // 800891BC
  c->r[4]=0u+0x00000000u; // 800891C0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800891C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800891C8
  c->r[3]=R32(c->r[3]+0x00000008u); // 800891CC
  c->lr=0x800891D4u; f_800D0A14(c); // 800891D0
  c->r[3]=0u+0x00000000u; // 800891D4
  c->r[4]=0u+0x00000000u; // 800891D8
  c->lr=0x800891E0u; f_800D3238(c); // 800891DC
  c->r[29]=0u+0x00000001u; // 800891E0
  W8(c->r[24]+0x00000125u,c->r[29]); // 800891E4
  c->r[3]=0u+0x00000001u; // 800891E8
  c->r[4]=0u+0x00000004u; // 800891EC
  c->r[5]=0u+0x00000000u; // 800891F0
  c->r[6]=0u+0x00000005u; // 800891F4
  c->lr=0x800891FCu; f_800D312C(c); // 800891F8
  c->r[5]=R32(c->r[13]+0xFFFF8B80u); // 800891FC
  c->r[25]=0u+0x00000000u; // 80089200
  c->r[3]=c->r[24]+0x00010000u; // 80089204
  c->r[4]=R16(c->r[5]+0x00000006u); // 80089208
  c->r[0]=R16(c->r[5]+0x00000004u); // 8008920C
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80089210
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80089214
  W32(c->r[1]+0x00000050u,c->r[25]); // 80089218
  W32(c->r[1]+0x00000054u,c->r[25]); // 8008921C
  W32(c->r[1]+0x00000058u,c->r[0]); // 80089220
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 80089224
  c->r[3]=R32(c->r[3]+0xFFFF81B0u); // 80089228
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008922C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80089230
  c->ctr=c->r[12]; // 80089234
  if (true) { c->lr=0x8008923Cu; dispatch(c,c->ctr); } // 80089238
  c->r[4]=c->r[24]+0x00010000u; // 8008923C
  c->r[23]=c->r[3]|c->r[3]; // 80089240
  c->r[3]=R32(c->r[4]+0xFFFF81B0u); // 80089244
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089248
  c->r[12]=R32(c->r[12]+0x00000028u); // 8008924C
  c->ctr=c->r[12]; // 80089250
  if (true) { c->lr=0x80089258u; dispatch(c,c->ctr); } // 80089254
  W32(c->r[1]+0x00000040u,c->r[25]); // 80089258
  c->r[7]=c->r[24]+0x00010000u; // 8008925C
  c->r[4]=c->r[1]+0x00000050u; // 80089260
  c->r[5]=c->r[1]+0x00000040u; // 80089264
  W32(c->r[1]+0x00000044u,c->r[25]); // 80089268
  c->r[6]=0u+0x00000000u; // 8008926C
  W32(c->r[1]+0x00000048u,c->r[3]); // 80089270
  W32(c->r[1]+0x0000004Cu,c->r[23]); // 80089274
  c->r[3]=R32(c->r[7]+0xFFFF81B0u); // 80089278
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008927C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80089280
  c->ctr=c->r[12]; // 80089284
  if (true) { c->lr=0x8008928Cu; dispatch(c,c->ctr); } // 80089288
  c->r[4]=0u+0x80260000u; // 8008928C
  {uint32_t ea=c->r[4]+0xFFFF8A70u; c->r[9]=R32(ea); c->r[4]=ea;} // 80089290
  c->r[10]=0u+0x80260000u; // 80089294
  {uint32_t ea=c->r[10]+0xFFFF8A60u; c->r[6]=R32(ea); c->r[10]=ea;} // 80089298
  c->r[8]=R32(c->r[4]+0x00000004u); // 8008929C
  c->r[3]=0u+0x00000001u; // 800892A0
  c->r[7]=R32(c->r[4]+0x00000008u); // 800892A4
  c->r[5]=0u+0x00000004u; // 800892A8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800892AC
  c->r[27]=c->r[9]+c->r[8]; // 800892B0
  c->r[12]=R32(c->r[10]+0x00000004u); // 800892B4
  c->r[27]=c->r[27]+c->r[7]; // 800892B8
  c->r[11]=R32(c->r[10]+0x00000008u); // 800892BC
  c->r[4]=0u+0x00000001u; // 800892C0
  c->r[10]=R32(c->r[10]+0x0000000Cu); // 800892C4
  c->r[27]=c->r[27]+c->r[0]; // 800892C8
  W32(c->r[1]+0x00000030u,c->r[6]); // 800892CC
  c->r[6]=0u+0x00000005u; // 800892D0
  {uint32_t ea=c->r[2]+0xFFFF8CA4u; c->f[29]=c->ps1[29]=RF32(ea);} // 800892D4
  W8(c->r[24]+0x00000125u,c->r[29]); // 800892D8
  W32(c->r[1]+0x00000034u,c->r[12]); // 800892DC
  W32(c->r[1]+0x00000038u,c->r[11]); // 800892E0
  W32(c->r[1]+0x0000003Cu,c->r[10]); // 800892E4
  W32(c->r[1]+0x00000020u,c->r[9]); // 800892E8
  W32(c->r[1]+0x00000024u,c->r[8]); // 800892EC
  W32(c->r[1]+0x00000028u,c->r[7]); // 800892F0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800892F4
  c->lr=0x800892FCu; f_800D312C(c); // 800892F8
  W8(c->r[24]+0x00000127u,c->r[29]); // 800892FC
  c->r[3]=0u+0x00000000u; // 80089300
  c->r[4]=0u+0x0000000Fu; // 80089304
  c->r[5]=0u+0x00000002u; // 80089308
  c->r[6]=0u+0x00000008u; // 8008930C
  c->r[7]=0u+0x0000000Fu; // 80089310
  c->lr=0x80089318u; f_800D2690(c); // 80089314
  c->r[3]=0u+0x00000000u; // 80089318
  c->r[4]=0u+0x00000000u; // 8008931C
  c->r[5]=0u+0x00000000u; // 80089320
  c->r[6]=0u+0x00000000u; // 80089324
  c->r[7]=0u+0x00000001u; // 80089328
  c->r[8]=0u+0x00000000u; // 8008932C
  c->lr=0x80089334u; f_800D2710(c); // 80089330
  c->r[3]=0u+0x00000000u; // 80089334
  c->r[4]=0u+0x00000007u; // 80089338
  c->r[5]=0u+0x00000007u; // 8008933C
  c->r[6]=0u+0x00000007u; // 80089340
  c->r[7]=0u+0x00000001u; // 80089344
  c->lr=0x8008934Cu; f_800D26D0(c); // 80089348
  c->r[3]=0u+0x00000000u; // 8008934C
  c->r[4]=0u+0x00000000u; // 80089350
  c->r[5]=0u+0x00000000u; // 80089354
  c->r[6]=0u+0x00000000u; // 80089358
  c->r[7]=0u+0x00000001u; // 8008935C
  c->r[8]=0u+0x00000000u; // 80089360
  c->lr=0x80089368u; f_800D2768(c); // 80089364
  c->r[3]=c->r[24]+0x00010000u; // 80089368
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8008936C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089370
  c->r[12]=R32(c->r[12]+0x00000040u); // 80089374
  c->ctr=c->r[12]; // 80089378
  if (true) { c->lr=0x80089380u; dispatch(c,c->ctr); } // 8008937C
  c->r[6]=R32(c->r[13]+0xFFFF8B80u); // 80089380
  c->r[29]=c->r[3]|c->r[3]; // 80089384
  c->r[3]=0u+0x00000000u; // 80089388
  c->r[4]=0u+0x00000000u; // 8008938C
  c->r[5]=R16(c->r[6]+0x00000004u); // 80089390
  c->r[0]=R16(c->r[6]+0x00000006u); // 80089394
  c->r[5]=rotl(c->r[5],31)&0x0000FFFFu; // 80089398
  c->r[6]=rotl(c->r[0],31)&0x0000FFFFu; // 8008939C
  c->lr=0x800893A4u; f_800D01A4(c); // 800893A0
  c->r[3]=c->r[24]+0x00010000u; // 800893A4
  c->r[3]=R32(c->r[3]+0xFFFF81B0u); // 800893A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800893AC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800893B0
  c->ctr=c->r[12]; // 800893B4
  if (true) { c->lr=0x800893BCu; dispatch(c,c->ctr); } // 800893B8
  c->r[4]=c->r[24]+0x00010000u; // 800893BC
  c->r[23]=rotl(c->r[3],0)&0x0000FFFFu; // 800893C0
  c->r[3]=R32(c->r[4]+0xFFFF81B0u); // 800893C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800893C8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800893CC
  c->ctr=c->r[12]; // 800893D0
  if (true) { c->lr=0x800893D8u; dispatch(c,c->ctr); } // 800893D4
  c->r[4]=c->r[23]|c->r[23]; // 800893D8
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800893DC
  c->r[5]=0u+0x00000006u; // 800893E0
  c->r[6]=0u+0x00000000u; // 800893E4
  c->lr=0x800893ECu; f_800D0208(c); // 800893E8
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800893EC
  c->r[3]=c->r[1]+0x00000060u; // 800893F0
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800893F4
  c->r[4]=0u+0x00000000u; // 800893F8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 800893FC
  c->r[5]=0u+0x00000040u; // 80089400
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80089404
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80089408
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8008940C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 80089410
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 80089414
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 80089418
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8008941C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 80089420
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80089424
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 80089428
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 8008942C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 80089430
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 80089434
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 80089438
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8008943C
  c->lr=0x80089444u; f_80004688(c); // 80089440
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80089444
  c->r[0]=c->r[27]+0x00000005u; // 80089448
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[30]);} // 8008944C
  c->r[30]=c->r[0]^0x80000000u; // 80089450
  {uint32_t ea=c->r[2]+0xFFFF8C98u; c->f[31]=RF64(ea);} // 80089454
  c->r[23]=c->r[24]+0x00010000u; // 80089458
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[30]);} // 8008945C
  c->r[26]=0u+0x00000000u; // 80089460
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[27]=c->ps1[27]=RF32(ea);} // 80089464
  c->r[31]=0u+0x00000005u; // 80089468
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[30]);} // 8008946C
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[28]=c->ps1[28]=RF32(ea);} // 80089470
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[30]);} // 80089474
L_80089478:;
  c->r[3]=R32(c->r[29]+0x00000060u); // 80089478
  c->r[4]=0u+0x00000000u; // 8008947C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80089480
  c->r[3]=R32(c->r[3]+0x00000000u); // 80089484
  c->r[3]=R32(c->r[3]+0x00000008u); // 80089488
  c->lr=0x80089490u; f_800D0A14(c); // 8008948C
  c->r[28]=c->r[1]+0x00000020u; // 80089490
  c->r[27]=c->r[1]+0x00000030u; // 80089494
  c->r[25]=0u+0x00000000u; // 80089498
L_8008949C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 8008949C
  cmps(c,0,(int32_t)c->r[25],0); // 800894A0
  W32(c->r[1]+0x000000ACu,c->r[30]); // 800894A4
  c->r[0]=c->r[0]^0x80000000u; // 800894A8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800894AC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 800894B0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 800894B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800894B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800894BC
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 800894C0
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 800894C4
  if (!crb(c,2)) { goto L_800894D4; } // 800894C8
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800894CC
  goto L_800894F8; // 800894D0
L_800894D4:;
  c->r[0]=c->r[31]^0x80000000u; // 800894D4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800894D8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 800894DC
  W32(c->r[1]+0x000000ACu,c->r[30]); // 800894E0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800894E4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 800894E8
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 800894EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800894F0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800894F4
L_800894F8:;
  fcmp(c,0,c->f[2],c->f[30]); // 800894F8
  if (!crb(c,1)) { goto L_80089504; } // 800894FC
  c->f[2]=c->f[30]; // 80089500
L_80089504:;
  fcmp(c,0,c->f[0],c->f[30]); // 80089504
  if (!crb(c,1)) { goto L_80089510; } // 80089508
  c->f[0]=c->f[30]; // 8008950C
L_80089510:;
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[2]); // 80089510
  c->r[4]=c->r[1]+0x00000008u; // 80089514
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[0]); // 80089518
  c->r[3]=0u+0x00000001u; // 8008951C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80089520
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80089524
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[1]);} // 80089528
  c->r[5]=R32(c->r[1]+0x000000B4u); // 8008952C
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 80089530
  c->r[0]=R32(c->r[1]+0x000000BCu); // 80089534
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 80089538
  W8(c->r[1]+0x0000000Du,c->r[5]); // 8008953C
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 80089540
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80089544
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80089548
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008954C
  c->lr=0x80089554u; f_800D27C0(c); // 80089550
  c->r[3]=c->r[1]+0x00000060u; // 80089554
  c->r[4]=0u+0x00000000u; // 80089558
  c->r[5]=0u+0x00000040u; // 8008955C
  c->lr=0x80089564u; f_80004688(c); // 80089560
  cmps(c,0,(int32_t)c->r[26],0); // 80089564
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[30]);} // 80089568
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[30]);} // 8008956C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[30]);} // 80089570
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[30]);} // 80089574
  if (!crb(c,2)) { goto L_800895E4; } // 80089578
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 8008957C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80089580
  c->r[0]=R16(c->r[3]+0x00000004u); // 80089584
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80089588
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[30]);} // 8008958C
  c->r[0]=c->r[0]^0x80000000u; // 80089590
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80089594
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 80089598
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[28]);} // 8008959C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800895A0
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[28]);} // 800895A4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800895A8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[28]);} // 800895AC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[30]);} // 800895B0
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[28]);} // 800895B4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[28]);} // 800895B8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[28]);} // 800895BC
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800895C0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[28]);} // 800895C4
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[30]);} // 800895C8
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[28]);} // 800895CC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[28]);} // 800895D0
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[28]);} // 800895D4
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[28]);} // 800895D8
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[30]);} // 800895DC
  goto L_80089648; // 800895E0
L_800895E4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 800895E4
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800895E8
  c->r[0]=R16(c->r[3]+0x00000006u); // 800895EC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800895F0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[30]);} // 800895F4
  c->r[0]=c->r[0]^0x80000000u; // 800895F8
  W32(c->r[1]+0x000000ACu,c->r[0]); // 800895FC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 80089600
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[28]);} // 80089604
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80089608
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[28]);} // 8008960C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80089610
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[28]);} // 80089614
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[28]);} // 80089618
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[30]);} // 8008961C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[28]);} // 80089620
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[28]);} // 80089624
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 80089628
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[28]);} // 8008962C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[30]);} // 80089630
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[28]);} // 80089634
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[28]);} // 80089638
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[28]);} // 8008963C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[28]);} // 80089640
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[30]);} // 80089644
L_80089648:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 80089648
  c->r[3]=c->r[24]|c->r[24]; // 8008964C
  c->r[4]=c->r[1]+0x00000060u; // 80089650
  c->r[12]=R32(c->r[12]+0x00000058u); // 80089654
  c->ctr=c->r[12]; // 80089658
  if (true) { c->lr=0x80089660u; dispatch(c,c->ctr); } // 8008965C
  c->r[3]=R32(c->r[23]+0xFFFF81B4u); // 80089660
  c->r[4]=c->r[1]+0x00000050u; // 80089664
  c->r[5]=c->r[1]+0x00000040u; // 80089668
  c->r[6]=0u+0x00000000u; // 8008966C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089670
  c->r[12]=R32(c->r[12]+0x00000020u); // 80089674
  c->ctr=c->r[12]; // 80089678
  if (true) { c->lr=0x80089680u; dispatch(c,c->ctr); } // 8008967C
  c->r[25]=c->r[25]+0x00000001u; // 80089680
  c->r[27]=c->r[27]+0x00000004u; // 80089684
  cmps(c,0,(int32_t)c->r[25],4); // 80089688
  c->r[28]=c->r[28]+0x00000004u; // 8008968C
  if (crb(c,0)) { IRQCHK(c); goto L_8008949C; } // 80089690
  c->r[26]=c->r[26]+0x00000001u; // 80089694
  cmps(c,0,(int32_t)c->r[26],2); // 80089698
  if (crb(c,0)) { IRQCHK(c); goto L_80089478; } // 8008969C
  c->r[3]=c->r[1]+0x00000060u; // 800896A0
  c->r[4]=0u+0x00000000u; // 800896A4
  c->r[5]=0u+0x00000040u; // 800896A8
  c->lr=0x800896B0u; f_80004688(c); // 800896AC
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800896B0
  c->r[3]=c->r[24]|c->r[24]; // 800896B4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800896B8
  c->r[4]=c->r[1]+0x00000060u; // 800896BC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800896C0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 800896C4
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 800896C8
  c->r[12]=R32(c->r[24]+0x00000000u); // 800896CC
  c->r[12]=R32(c->r[12]+0x00000058u); // 800896D0
  c->ctr=c->r[12]; // 800896D4
  if (true) { c->lr=0x800896DCu; dispatch(c,c->ctr); } // 800896D8
  c->r[3]=0u+0x00000000u; // 800896DC
  c->r[4]=0u+0x00000001u; // 800896E0
  c->r[5]=0u+0x00000004u; // 800896E4
  c->r[6]=0u+0x0000003Cu; // 800896E8
  c->r[7]=0u+0x00000000u; // 800896EC
  c->r[8]=0u+0x0000007Du; // 800896F0
  c->lr=0x800896F8u; f_800CF1FC(c); // 800896F4
  c->r[31]=0u+0x00000000u; // 800896F8
  W8(c->r[24]+0x00000125u,c->r[31]); // 800896FC
  c->r[3]=0u+0x00000000u; // 80089700
  c->r[4]=0u+0x00000000u; // 80089704
  W8(c->r[24]+0x00000127u,c->r[31]); // 80089708
  c->r[6]=R32(c->r[13]+0xFFFF8B80u); // 8008970C
  c->r[5]=R16(c->r[6]+0x00000004u); // 80089710
  c->r[0]=R16(c->r[6]+0x00000006u); // 80089714
  c->r[5]=rotl(c->r[5],31)&0x0000FFFFu; // 80089718
  c->r[6]=rotl(c->r[0],31)&0x0000FFFFu; // 8008971C
  c->lr=0x80089724u; f_800D01A4(c); // 80089720
  c->r[3]=c->r[24]+0x00010000u; // 80089724
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 80089728
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008972C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80089730
  c->ctr=c->r[12]; // 80089734
  if (true) { c->lr=0x8008973Cu; dispatch(c,c->ctr); } // 80089738
  c->r[4]=c->r[24]+0x00010000u; // 8008973C
  c->r[25]=rotl(c->r[3],0)&0x0000FFFFu; // 80089740
  c->r[3]=R32(c->r[4]+0xFFFF81B4u); // 80089744
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089748
  c->r[12]=R32(c->r[12]+0x00000028u); // 8008974C
  c->ctr=c->r[12]; // 80089750
  if (true) { c->lr=0x80089758u; dispatch(c,c->ctr); } // 80089754
  c->r[4]=c->r[25]|c->r[25]; // 80089758
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 8008975C
  c->r[5]=0u+0x00000006u; // 80089760
  c->r[6]=0u+0x00000000u; // 80089764
  c->lr=0x8008976Cu; f_800D0208(c); // 80089768
  c->r[3]=R32(c->r[29]+0x00000060u); // 8008976C
  c->r[4]=0u+0x00000000u; // 80089770
  c->r[3]=R32(c->r[3]+0x00000008u); // 80089774
  c->r[3]=R32(c->r[3]+0x00000000u); // 80089778
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008977C
  c->lr=0x80089784u; f_800D0A14(c); // 80089780
  c->r[3]=0u+0x00000001u; // 80089784
  c->r[4]=0u+0x00000000u; // 80089788
  c->lr=0x80089790u; f_800D3238(c); // 8008978C
  c->r[5]=R32(c->r[13]+0xFFFF8B80u); // 80089790
  c->r[3]=c->r[24]+0x00010000u; // 80089794
  c->r[4]=R16(c->r[5]+0x00000006u); // 80089798
  c->r[0]=R16(c->r[5]+0x00000004u); // 8008979C
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800897A0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800897A4
  W32(c->r[1]+0x00000050u,c->r[31]); // 800897A8
  W32(c->r[1]+0x00000054u,c->r[31]); // 800897AC
  W32(c->r[1]+0x00000058u,c->r[0]); // 800897B0
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800897B4
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 800897B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800897BC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800897C0
  c->ctr=c->r[12]; // 800897C4
  if (true) { c->lr=0x800897CCu; dispatch(c,c->ctr); } // 800897C8
  c->r[4]=c->r[24]+0x00010000u; // 800897CC
  c->r[25]=c->r[3]|c->r[3]; // 800897D0
  c->r[3]=R32(c->r[4]+0xFFFF81ACu); // 800897D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800897D8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800897DC
  c->ctr=c->r[12]; // 800897E0
  if (true) { c->lr=0x800897E8u; dispatch(c,c->ctr); } // 800897E4
  W32(c->r[1]+0x00000048u,c->r[3]); // 800897E8
  c->r[3]=c->r[24]|c->r[24]; // 800897EC
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800897F0
  c->r[4]=0u+0x00000002u; // 800897F4
  W32(c->r[1]+0x00000040u,c->r[31]); // 800897F8
  W32(c->r[1]+0x00000044u,c->r[31]); // 800897FC
  W32(c->r[1]+0x0000004Cu,c->r[25]); // 80089800
  c->r[12]=R32(c->r[24]+0x00000000u); // 80089804
  c->r[12]=R32(c->r[12]+0x00000020u); // 80089808
  c->ctr=c->r[12]; // 8008980C
  if (true) { c->lr=0x80089814u; dispatch(c,c->ctr); } // 80089810
  c->r[3]=c->r[24]+0x00010000u; // 80089814
  c->r[4]=c->r[1]+0x00000050u; // 80089818
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 8008981C
  c->r[5]=c->r[1]+0x00000040u; // 80089820
  c->r[6]=0u+0x00000000u; // 80089824
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089828
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008982C
  c->ctr=c->r[12]; // 80089830
  if (true) { c->lr=0x80089838u; dispatch(c,c->ctr); } // 80089834
  c->r[12]=R32(c->r[24]+0x00000000u); // 80089838
  c->r[3]=c->r[24]|c->r[24]; // 8008983C
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80089840
  c->r[4]=0u+0x00000002u; // 80089844
  c->r[12]=R32(c->r[12]+0x00000020u); // 80089848
  c->ctr=c->r[12]; // 8008984C
  if (true) { c->lr=0x80089854u; dispatch(c,c->ctr); } // 80089850
  c->r[5]=R32(c->r[13]+0xFFFF8B80u); // 80089854
  c->r[3]=c->r[24]+0x00010000u; // 80089858
  c->r[4]=R16(c->r[5]+0x00000006u); // 8008985C
  c->r[0]=R16(c->r[5]+0x00000004u); // 80089860
  W32(c->r[1]+0x00000058u,c->r[0]); // 80089864
  W32(c->r[1]+0x00000050u,c->r[31]); // 80089868
  W32(c->r[1]+0x00000054u,c->r[31]); // 8008986C
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 80089870
  c->r[3]=R32(c->r[3]+0xFFFF81B0u); // 80089874
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089878
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8008987C
  c->ctr=c->r[12]; // 80089880
  if (true) { c->lr=0x80089888u; dispatch(c,c->ctr); } // 80089884
  c->r[4]=c->r[24]+0x00010000u; // 80089888
  c->r[25]=c->r[3]|c->r[3]; // 8008988C
  c->r[3]=R32(c->r[4]+0xFFFF81B0u); // 80089890
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089894
  c->r[12]=R32(c->r[12]+0x00000028u); // 80089898
  c->ctr=c->r[12]; // 8008989C
  if (true) { c->lr=0x800898A4u; dispatch(c,c->ctr); } // 800898A0
  W32(c->r[1]+0x00000048u,c->r[3]); // 800898A4
  c->r[3]=c->r[24]|c->r[24]; // 800898A8
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800898AC
  c->r[4]=0u+0x00000002u; // 800898B0
  W32(c->r[1]+0x00000040u,c->r[31]); // 800898B4
  W32(c->r[1]+0x00000044u,c->r[31]); // 800898B8
  W32(c->r[1]+0x0000004Cu,c->r[25]); // 800898BC
  c->r[12]=R32(c->r[24]+0x00000000u); // 800898C0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800898C4
  c->ctr=c->r[12]; // 800898C8
  if (true) { c->lr=0x800898D0u; dispatch(c,c->ctr); } // 800898CC
  c->r[0]=0u+0x00000001u; // 800898D0
  W8(c->r[24]+0x00000125u,c->r[0]); // 800898D4
  c->r[3]=0u+0x00000001u; // 800898D8
  c->r[4]=0u+0x00000001u; // 800898DC
  c->r[5]=0u+0x00000001u; // 800898E0
  c->r[6]=0u+0x00000005u; // 800898E4
  c->lr=0x800898ECu; f_800D312C(c); // 800898E8
  c->r[3]=c->r[24]+0x00010000u; // 800898EC
  c->r[4]=c->r[1]+0x00000050u; // 800898F0
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 800898F4
  c->r[5]=c->r[1]+0x00000040u; // 800898F8
  c->r[6]=0u+0x00000000u; // 800898FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089900
  c->r[12]=R32(c->r[12]+0x00000020u); // 80089904
  c->ctr=c->r[12]; // 80089908
  if (true) { c->lr=0x80089910u; dispatch(c,c->ctr); } // 8008990C
  W8(c->r[24]+0x00000125u,c->r[31]); // 80089910
  c->r[3]=c->r[24]|c->r[24]; // 80089914
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80089918
  c->r[4]=0u+0x00000002u; // 8008991C
  c->r[12]=R32(c->r[24]+0x00000000u); // 80089920
  c->r[12]=R32(c->r[12]+0x00000020u); // 80089924
  c->ctr=c->r[12]; // 80089928
  if (true) { c->lr=0x80089930u; dispatch(c,c->ctr); } // 8008992C
  c->r[12]=R32(c->r[24]+0x00000000u); // 80089930
  c->r[3]=c->r[24]|c->r[24]; // 80089934
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 80089938
  c->r[12]=R32(c->r[12]+0x00000030u); // 8008993C
  c->r[5]=R32(c->r[1]+0x00000018u); // 80089940
  c->r[6]=R32(c->r[1]+0x00000014u); // 80089944
  c->r[7]=R32(c->r[1]+0x00000010u); // 80089948
  c->ctr=c->r[12]; // 8008994C
  if (true) { c->lr=0x80089954u; dispatch(c,c->ctr); } // 80089950
  c->r[11]=c->r[1]+0x000000F0u; // 80089954
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 80089958
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 8008995C
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,30,ea,0,0);} // 80089960
  {uint32_t ea=c->r[1]+0x00000120u; c->f[30]=RF64(ea);} // 80089964
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,29,ea,0,0);} // 80089968
  {uint32_t ea=c->r[1]+0x00000110u; c->f[29]=RF64(ea);} // 8008996C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,28,ea,0,0);} // 80089970
  {uint32_t ea=c->r[1]+0x00000100u; c->f[28]=RF64(ea);} // 80089974
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,27,ea,0,0);} // 80089978
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[27]=RF64(ea);} // 8008997C
  c->lr=0x80089984u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80089980
  c->r[0]=R32(c->r[1]+0x00000144u); // 80089984
  c->lr=c->r[0]; // 80089988
  c->r[1]=c->r[1]+0x00000140u; // 8008998C
  return; // 80089990
}

// TransformPoint__11WiiGraphicsFP7Vector3R7Vector3
void f_80089994(Ctx* __restrict c) {
  trace_call(0x80089994u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80089994
  c->r[0]=c->lr; // 80089998
  W32(c->r[1]+0x000001A4u,c->r[0]); // 8008999C
  c->r[11]=c->r[1]+0x00000110u; // 800899A0
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[31]);} // 800899A4
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,31,ea,0,0);} // 800899A8
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[30]);} // 800899AC
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,30,ea,0,0);} // 800899B0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[29]);} // 800899B4
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,29,ea,0,0);} // 800899B8
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[28]);} // 800899BC
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,28,ea,0,0);} // 800899C0
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[27]);} // 800899C4
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,27,ea,0,0);} // 800899C8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[26]);} // 800899CC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,26,ea,0,0);} // 800899D0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[25]);} // 800899D4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,25,ea,0,0);} // 800899D8
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[24]);} // 800899DC
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,24,ea,0,0);} // 800899E0
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[23]);} // 800899E4
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,23,ea,0,0);} // 800899E8
  c->lr=0x800899F0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800899EC
  c->r[25]=c->r[3]|c->r[3]; // 800899F0
  c->r[29]=c->r[4]|c->r[4]; // 800899F4
  c->r[24]=c->r[5]|c->r[5]; // 800899F8
  c->r[3]=c->r[1]+0x00000020u; // 800899FC
  c->lr=0x80089A04u; f_800D36D0(c); // 80089A00
  c->r[3]=c->r[1]+0x00000008u; // 80089A04
  c->lr=0x80089A0Cu; f_800D39E4(c); // 80089A08
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80089A0C
  c->r[3]=c->r[1]+0x000000B0u; // 80089A10
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80089A14
  c->r[4]=0u+0x00000000u; // 80089A18
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 80089A1C
  c->r[5]=0u+0x00000040u; // 80089A20
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 80089A24
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 80089A28
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 80089A2C
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 80089A30
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 80089A34
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[1]);} // 80089A38
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 80089A3C
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 80089A40
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 80089A44
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[1]);} // 80089A48
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 80089A4C
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[1]);} // 80089A50
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[1]);} // 80089A54
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[1]);} // 80089A58
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 80089A5C
  c->lr=0x80089A64u; f_80004688(c); // 80089A60
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80089A64
  c->r[3]=c->r[1]+0x00000040u; // 80089A68
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80089A6C
  c->r[4]=0u+0x00000000u; // 80089A70
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 80089A74
  c->r[5]=0u+0x00000040u; // 80089A78
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 80089A7C
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[1]);} // 80089A80
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 80089A84
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80089A88
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80089A8C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80089A90
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 80089A94
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80089A98
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80089A9C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80089AA0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 80089AA4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80089AA8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80089AAC
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80089AB0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 80089AB4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80089AB8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80089ABC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80089AC0
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 80089AC4
  c->lr=0x80089ACCu; f_80004688(c); // 80089AC8
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80089ACC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80089AD0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80089AD4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80089AD8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80089ADC
  {uint32_t ea=c->r[25]+0x00000028u; c->f[30]=c->ps1[30]=RF32(ea);} // 80089AE0
  {uint32_t ea=c->r[25]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80089AE4
  {uint32_t ea=c->r[25]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80089AE8
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 80089AEC
  {uint32_t ea=c->r[25]+0x00000058u; c->f[26]=c->ps1[26]=RF32(ea);} // 80089AF0
  {uint32_t ea=c->r[25]+0x00000038u; c->f[13]=c->ps1[13]=RF32(ea);} // 80089AF4
  {uint32_t ea=c->r[25]+0x00000060u; c->f[25]=c->ps1[25]=RF32(ea);} // 80089AF8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[31],c->f[26],c->f[0])); // 80089AFC
  {uint32_t ea=c->r[25]+0x00000048u; c->f[12]=c->ps1[12]=RF32(ea);} // 80089B00
  {uint32_t ea=c->r[25]+0x00000064u; c->f[24]=c->ps1[24]=RF32(ea);} // 80089B04
  c->f[0]=c->ps1[0]=S(std::fma(c->f[13],c->f[25],c->f[0])); // 80089B08
  c->f[0]=c->ps1[0]=S(std::fma(c->f[12],c->f[24],c->f[0])); // 80089B0C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80089B10
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 80089B14
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80089B18
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[1]); // 80089B1C
  {uint32_t ea=c->r[25]+0x0000003Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80089B20
  {uint32_t ea=c->r[25]+0x0000004Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80089B24
  c->f[0]=c->ps1[0]=S(std::fma(c->f[10],c->f[26],c->f[0])); // 80089B28
  c->f[0]=c->ps1[0]=S(std::fma(c->f[9],c->f[25],c->f[0])); // 80089B2C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[8],c->f[24],c->f[0])); // 80089B30
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80089B34
  {uint32_t ea=c->r[25]+0x00000030u; c->f[7]=c->ps1[7]=RF32(ea);} // 80089B38
  {uint32_t ea=c->r[25]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 80089B3C
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[1]); // 80089B40
  {uint32_t ea=c->r[25]+0x00000040u; c->f[5]=c->ps1[5]=RF32(ea);} // 80089B44
  {uint32_t ea=c->r[25]+0x00000050u; c->f[4]=c->ps1[4]=RF32(ea);} // 80089B48
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[26],c->f[0])); // 80089B4C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[5],c->f[25],c->f[0])); // 80089B50
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[24],c->f[0])); // 80089B54
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80089B58
  {uint32_t ea=c->r[25]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80089B5C
  {uint32_t ea=c->r[25]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80089B60
  c->f[23]=c->ps1[23]=S(c->f[3]*c->f[1]); // 80089B64
  {uint32_t ea=c->r[25]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80089B68
  {uint32_t ea=c->r[25]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80089B6C
  c->f[23]=c->ps1[23]=S(std::fma(c->f[2],c->f[26],c->f[23])); // 80089B70
  c->f[23]=c->ps1[23]=S(std::fma(c->f[1],c->f[25],c->f[23])); // 80089B74
  c->f[23]=c->ps1[23]=S(std::fma(c->f[0],c->f[24],c->f[23])); // 80089B78
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[23]);} // 80089B7C
  {uint32_t ea=c->r[25]+0x0000006Cu; c->f[23]=c->ps1[23]=RF32(ea);} // 80089B80
  {uint32_t ea=c->r[25]+0x00000068u; c->f[29]=c->ps1[29]=RF32(ea);} // 80089B84
  c->f[26]=c->ps1[26]=S(c->f[30]*c->f[23]); // 80089B88
  {uint32_t ea=c->r[25]+0x00000070u; c->f[28]=c->ps1[28]=RF32(ea);} // 80089B8C
  c->f[25]=c->ps1[25]=S(c->f[11]*c->f[23]); // 80089B90
  {uint32_t ea=c->r[25]+0x00000074u; c->f[27]=c->ps1[27]=RF32(ea);} // 80089B94
  c->f[24]=c->ps1[24]=S(c->f[7]*c->f[23]); // 80089B98
  c->f[23]=c->ps1[23]=S(c->f[3]*c->f[23]); // 80089B9C
  c->f[26]=c->ps1[26]=S(std::fma(c->f[31],c->f[29],c->f[26])); // 80089BA0
  c->f[25]=c->ps1[25]=S(std::fma(c->f[10],c->f[29],c->f[25])); // 80089BA4
  c->f[24]=c->ps1[24]=S(std::fma(c->f[6],c->f[29],c->f[24])); // 80089BA8
  c->f[23]=c->ps1[23]=S(std::fma(c->f[2],c->f[29],c->f[23])); // 80089BAC
  c->f[26]=c->ps1[26]=S(std::fma(c->f[13],c->f[28],c->f[26])); // 80089BB0
  c->f[25]=c->ps1[25]=S(std::fma(c->f[9],c->f[28],c->f[25])); // 80089BB4
  c->f[24]=c->ps1[24]=S(std::fma(c->f[5],c->f[28],c->f[24])); // 80089BB8
  c->f[23]=c->ps1[23]=S(std::fma(c->f[1],c->f[28],c->f[23])); // 80089BBC
  c->f[26]=c->ps1[26]=S(std::fma(c->f[12],c->f[27],c->f[26])); // 80089BC0
  c->f[25]=c->ps1[25]=S(std::fma(c->f[8],c->f[27],c->f[25])); // 80089BC4
  c->f[24]=c->ps1[24]=S(std::fma(c->f[4],c->f[27],c->f[24])); // 80089BC8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[26]);} // 80089BCC
  c->f[23]=c->ps1[23]=S(std::fma(c->f[0],c->f[27],c->f[23])); // 80089BD0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[25]);} // 80089BD4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[24]);} // 80089BD8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[23]);} // 80089BDC
  {uint32_t ea=c->r[25]+0x0000007Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 80089BE0
  {uint32_t ea=c->r[25]+0x00000078u; c->f[23]=c->ps1[23]=RF32(ea);} // 80089BE4
  c->f[29]=c->ps1[29]=S(c->f[30]*c->f[26]); // 80089BE8
  {uint32_t ea=c->r[25]+0x00000080u; c->f[24]=c->ps1[24]=RF32(ea);} // 80089BEC
  c->f[28]=c->ps1[28]=S(c->f[11]*c->f[26]); // 80089BF0
  {uint32_t ea=c->r[25]+0x00000084u; c->f[25]=c->ps1[25]=RF32(ea);} // 80089BF4
  c->f[27]=c->ps1[27]=S(c->f[7]*c->f[26]); // 80089BF8
  c->f[26]=c->ps1[26]=S(c->f[3]*c->f[26]); // 80089BFC
  c->f[29]=c->ps1[29]=S(std::fma(c->f[31],c->f[23],c->f[29])); // 80089C00
  c->f[28]=c->ps1[28]=S(std::fma(c->f[10],c->f[23],c->f[28])); // 80089C04
  c->f[27]=c->ps1[27]=S(std::fma(c->f[6],c->f[23],c->f[27])); // 80089C08
  c->f[26]=c->ps1[26]=S(std::fma(c->f[2],c->f[23],c->f[26])); // 80089C0C
  c->f[29]=c->ps1[29]=S(std::fma(c->f[13],c->f[24],c->f[29])); // 80089C10
  c->f[28]=c->ps1[28]=S(std::fma(c->f[9],c->f[24],c->f[28])); // 80089C14
  c->f[27]=c->ps1[27]=S(std::fma(c->f[5],c->f[24],c->f[27])); // 80089C18
  c->f[26]=c->ps1[26]=S(std::fma(c->f[1],c->f[24],c->f[26])); // 80089C1C
  c->f[29]=c->ps1[29]=S(std::fma(c->f[12],c->f[25],c->f[29])); // 80089C20
  c->f[28]=c->ps1[28]=S(std::fma(c->f[8],c->f[25],c->f[28])); // 80089C24
  c->f[27]=c->ps1[27]=S(std::fma(c->f[4],c->f[25],c->f[27])); // 80089C28
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[29]);} // 80089C2C
  c->f[26]=c->ps1[26]=S(std::fma(c->f[0],c->f[25],c->f[26])); // 80089C30
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[28]);} // 80089C34
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[27]);} // 80089C38
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[26]);} // 80089C3C
  {uint32_t ea=c->r[25]+0x0000008Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 80089C40
  {uint32_t ea=c->r[25]+0x00000088u; c->f[28]=c->ps1[28]=RF32(ea);} // 80089C44
  c->f[27]=c->ps1[27]=S(c->f[30]*c->f[26]); // 80089C48
  {uint32_t ea=c->r[25]+0x00000090u; c->f[29]=c->ps1[29]=RF32(ea);} // 80089C4C
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[26]); // 80089C50
  {uint32_t ea=c->r[25]+0x00000094u; c->f[30]=c->ps1[30]=RF32(ea);} // 80089C54
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[26]); // 80089C58
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[26]); // 80089C5C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[31],c->f[28],c->f[27])); // 80089C60
  c->f[10]=c->ps1[10]=S(std::fma(c->f[10],c->f[28],c->f[11])); // 80089C64
  c->f[6]=c->ps1[6]=S(std::fma(c->f[6],c->f[28],c->f[7])); // 80089C68
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[28],c->f[3])); // 80089C6C
  c->f[11]=c->ps1[11]=S(std::fma(c->f[13],c->f[29],c->f[31])); // 80089C70
  c->f[3]=c->ps1[3]=S(std::fma(c->f[5],c->f[29],c->f[6])); // 80089C74
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[29],c->f[2])); // 80089C78
  c->f[7]=c->ps1[7]=S(std::fma(c->f[9],c->f[29],c->f[10])); // 80089C7C
  c->f[6]=c->ps1[6]=S(std::fma(c->f[12],c->f[30],c->f[11])); // 80089C80
  c->f[2]=c->ps1[2]=S(std::fma(c->f[4],c->f[30],c->f[3])); // 80089C84
  c->f[5]=c->ps1[5]=S(std::fma(c->f[8],c->f[30],c->f[7])); // 80089C88
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[6]);} // 80089C8C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[1])); // 80089C90
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[5]);} // 80089C94
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 80089C98
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80089C9C
  c->r[25]=R32(c->r[1]+0x00000040u); // 80089CA0
  c->r[6]=c->r[29]|c->r[29]; // 80089CA4
  W32(c->r[1]+0x000000B0u,c->r[25]); // 80089CA8
  c->r[7]=c->r[29]+0x00000004u; // 80089CAC
  c->r[28]=R32(c->r[1]+0x00000044u); // 80089CB0
  c->r[8]=c->r[29]+0x00000008u; // 80089CB4
  W32(c->r[1]+0x000000B4u,c->r[28]); // 80089CB8
  c->r[3]=c->r[1]+0x00000080u; // 80089CBC
  c->r[12]=R32(c->r[1]+0x00000048u); // 80089CC0
  c->r[4]=c->r[1]+0x00000020u; // 80089CC4
  W32(c->r[1]+0x000000B8u,c->r[12]); // 80089CC8
  c->r[5]=c->r[1]+0x00000008u; // 80089CCC
  c->r[0]=R32(c->r[1]+0x00000050u); // 80089CD0
  W32(c->r[1]+0x000000C0u,c->r[0]); // 80089CD4
  c->r[26]=R32(c->r[1]+0x00000054u); // 80089CD8
  c->r[27]=R32(c->r[1]+0x00000058u); // 80089CDC
  c->r[29]=R32(c->r[1]+0x00000060u); // 80089CE0
  c->r[30]=R32(c->r[1]+0x00000064u); // 80089CE4
  c->r[31]=R32(c->r[1]+0x00000068u); // 80089CE8
  c->r[11]=R32(c->r[1]+0x00000070u); // 80089CEC
  c->r[10]=R32(c->r[1]+0x00000074u); // 80089CF0
  c->r[9]=R32(c->r[1]+0x00000078u); // 80089CF4
  W32(c->r[1]+0x000000C4u,c->r[26]); // 80089CF8
  c->r[25]=R32(c->r[1]+0x0000004Cu); // 80089CFC
  W32(c->r[1]+0x000000C8u,c->r[27]); // 80089D00
  c->r[28]=R32(c->r[1]+0x0000005Cu); // 80089D04
  W32(c->r[1]+0x000000D0u,c->r[29]); // 80089D08
  c->r[12]=R32(c->r[1]+0x0000006Cu); // 80089D0C
  W32(c->r[1]+0x000000D4u,c->r[30]); // 80089D10
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 80089D14
  W32(c->r[1]+0x000000D8u,c->r[31]); // 80089D18
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[11]=c->ps1[11]=RF32(ea);} // 80089D1C
  W32(c->r[1]+0x000000E0u,c->r[11]); // 80089D20
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[10]=c->ps1[10]=RF32(ea);} // 80089D24
  W32(c->r[1]+0x000000E4u,c->r[10]); // 80089D28
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[9]=c->ps1[9]=RF32(ea);} // 80089D2C
  W32(c->r[1]+0x000000E8u,c->r[9]); // 80089D30
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[8]=c->ps1[8]=RF32(ea);} // 80089D34
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[7]=c->ps1[7]=RF32(ea);} // 80089D38
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80089D3C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80089D40
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80089D44
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80089D48
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80089D4C
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80089D50
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80089D54
  W32(c->r[1]+0x000000BCu,c->r[25]); // 80089D58
  W32(c->r[1]+0x000000CCu,c->r[28]); // 80089D5C
  W32(c->r[1]+0x000000DCu,c->r[12]); // 80089D60
  W32(c->r[1]+0x000000ECu,c->r[0]); // 80089D64
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[11]);} // 80089D68
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[10]);} // 80089D6C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[9]);} // 80089D70
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[8]);} // 80089D74
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[7]);} // 80089D78
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[6]);} // 80089D7C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[5]);} // 80089D80
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[4]);} // 80089D84
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[3]);} // 80089D88
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 80089D8C
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 80089D90
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 80089D94
  {uint32_t ea=c->r[24]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80089D98
  {uint32_t ea=c->r[24]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80089D9C
  {uint32_t ea=c->r[24]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80089DA0
  c->lr=0x80089DA8u; f_800D3454(c); // 80089DA4
  c->r[11]=c->r[1]+0x00000110u; // 80089DA8
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,31,ea,0,0);} // 80089DAC
  {uint32_t ea=c->r[1]+0x00000190u; c->f[31]=RF64(ea);} // 80089DB0
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,30,ea,0,0);} // 80089DB4
  {uint32_t ea=c->r[1]+0x00000180u; c->f[30]=RF64(ea);} // 80089DB8
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,29,ea,0,0);} // 80089DBC
  {uint32_t ea=c->r[1]+0x00000170u; c->f[29]=RF64(ea);} // 80089DC0
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,28,ea,0,0);} // 80089DC4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[28]=RF64(ea);} // 80089DC8
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,27,ea,0,0);} // 80089DCC
  {uint32_t ea=c->r[1]+0x00000150u; c->f[27]=RF64(ea);} // 80089DD0
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,26,ea,0,0);} // 80089DD4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[26]=RF64(ea);} // 80089DD8
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,25,ea,0,0);} // 80089DDC
  {uint32_t ea=c->r[1]+0x00000130u; c->f[25]=RF64(ea);} // 80089DE0
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,24,ea,0,0);} // 80089DE4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[24]=RF64(ea);} // 80089DE8
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,23,ea,0,0);} // 80089DEC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[23]=RF64(ea);} // 80089DF0
  c->lr=0x80089DF8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80089DF4
  c->r[0]=R32(c->r[1]+0x000001A4u); // 80089DF8
  c->lr=c->r[0]; // 80089DFC
  c->r[1]=c->r[1]+0x000001A0u; // 80089E00
  return; // 80089E04
}

// ClearZBuffer__11WiiGraphicsFv
void f_80089E08(Ctx* __restrict c) {
  trace_call(0x80089E08u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 80089E08
  c->r[0]=c->lr; // 80089E0C
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80089E10
  c->r[4]=0u+0x00000000u; // 80089E14
  W32(c->r[1]+0x00000104u,c->r[0]); // 80089E18
  c->r[0]=0u+0x43300000u; // 80089E1C
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80089E20
  c->r[5]=0u+0x00000040u; // 80089E24
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80089E28
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 80089E2C
  W32(c->r[1]+0x000000ECu,c->r[31]); // 80089E30
  c->r[31]=c->r[3]|c->r[3]; // 80089E34
  c->r[3]=c->r[1]+0x00000090u; // 80089E38
  W32(c->r[1]+0x000000D0u,c->r[0]); // 80089E3C
  W32(c->r[1]+0x000000D8u,c->r[0]); // 80089E40
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 80089E44
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 80089E48
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 80089E4C
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 80089E50
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[1]);} // 80089E54
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 80089E58
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 80089E5C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 80089E60
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 80089E64
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 80089E68
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 80089E6C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 80089E70
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 80089E74
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 80089E78
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[1]);} // 80089E7C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 80089E80
  c->lr=0x80089E88u; f_80004688(c); // 80089E84
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80089E88
  c->r[3]=c->r[1]+0x00000050u; // 80089E8C
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80089E90
  c->r[4]=0u+0x00000000u; // 80089E94
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 80089E98
  c->r[5]=0u+0x00000040u; // 80089E9C
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 80089EA0
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 80089EA4
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 80089EA8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80089EAC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80089EB0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80089EB4
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 80089EB8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80089EBC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80089EC0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80089EC4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 80089EC8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80089ECC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80089ED0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80089ED4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 80089ED8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80089EDC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80089EE0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80089EE4
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 80089EE8
  c->lr=0x80089EF0u; f_80004688(c); // 80089EEC
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80089EF0
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80089EF4
  cmps(c,0,(int32_t)c->r[0],0); // 80089EF8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80089EFC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80089F00
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80089F04
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 80089F08
  if (!crb(c,2)) { goto L_80089F2C; } // 80089F0C
  c->r[3]=0u+0x00010000u; // 80089F10
  c->r[3]=c->r[3]+0xFFFF81E8u; // 80089F14
  c->lr=0x80089F1Cu; f_8008DC84(c); // 80089F18
  cmps(c,0,(int32_t)c->r[3],0); // 80089F1C
  if (crb(c,2)) { goto L_80089F28; } // 80089F20
  c->lr=0x80089F28u; f_80083910(c); // 80089F24
L_80089F28:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 80089F28
L_80089F2C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 80089F2C
  c->r[4]=c->r[1]+0x00000050u; // 80089F30
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089F34
  c->r[12]=R32(c->r[12]+0x00000040u); // 80089F38
  c->ctr=c->r[12]; // 80089F3C
  if (true) { c->lr=0x80089F44u; dispatch(c,c->ctr); } // 80089F40
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80089F44
  cmps(c,0,(int32_t)c->r[0],0); // 80089F48
  if (!crb(c,2)) { goto L_80089F6C; } // 80089F4C
  c->r[3]=0u+0x00010000u; // 80089F50
  c->r[3]=c->r[3]+0xFFFF81E8u; // 80089F54
  c->lr=0x80089F5Cu; f_8008DC84(c); // 80089F58
  cmps(c,0,(int32_t)c->r[3],0); // 80089F5C
  if (crb(c,2)) { goto L_80089F68; } // 80089F60
  c->lr=0x80089F68u; f_80083910(c); // 80089F64
L_80089F68:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 80089F68
L_80089F6C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 80089F6C
  c->r[4]=c->r[1]+0x00000090u; // 80089F70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80089F74
  c->r[12]=R32(c->r[12]+0x00000044u); // 80089F78
  c->ctr=c->r[12]; // 80089F7C
  if (true) { c->lr=0x80089F84u; dispatch(c,c->ctr); } // 80089F80
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80089F84
  c->r[3]=c->r[1]+0x00000010u; // 80089F88
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80089F8C
  c->r[4]=0u+0x00000000u; // 80089F90
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80089F94
  c->r[5]=0u+0x00000040u; // 80089F98
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80089F9C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80089FA0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80089FA4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80089FA8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80089FAC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 80089FB0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80089FB4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80089FB8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80089FBC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 80089FC0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80089FC4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 80089FC8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 80089FCC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80089FD0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80089FD4
  c->lr=0x80089FDCu; f_80004688(c); // 80089FD8
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80089FDC
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80089FE0
  cmps(c,0,(int32_t)c->r[0],0); // 80089FE4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80089FE8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80089FEC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80089FF0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80089FF4
  if (!crb(c,2)) { goto L_8008A018; } // 80089FF8
  c->r[3]=0u+0x00010000u; // 80089FFC
  c->r[3]=c->r[3]+0xFFFF81E8u; // 8008A000
  c->lr=0x8008A008u; f_8008DC84(c); // 8008A004
  cmps(c,0,(int32_t)c->r[3],0); // 8008A008
  if (crb(c,2)) { goto L_8008A014; } // 8008A00C
  c->lr=0x8008A014u; f_80083910(c); // 8008A010
L_8008A014:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008A014
L_8008A018:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008A018
  c->r[4]=c->r[1]+0x00000010u; // 8008A01C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A020
  c->r[12]=R32(c->r[12]+0x00000038u); // 8008A024
  c->ctr=c->r[12]; // 8008A028
  if (true) { c->lr=0x8008A030u; dispatch(c,c->ctr); } // 8008A02C
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008A030
  cmps(c,0,(int32_t)c->r[0],0); // 8008A034
  if (!crb(c,2)) { goto L_8008A058; } // 8008A038
  c->r[3]=0u+0x00010000u; // 8008A03C
  c->r[3]=c->r[3]+0xFFFF81E8u; // 8008A040
  c->lr=0x8008A048u; f_8008DC84(c); // 8008A044
  cmps(c,0,(int32_t)c->r[3],0); // 8008A048
  if (crb(c,2)) { goto L_8008A054; } // 8008A04C
  c->lr=0x8008A054u; f_80083910(c); // 8008A050
L_8008A054:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008A054
L_8008A058:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008A058
  c->r[4]=c->r[1]+0x00000010u; // 8008A05C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A060
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8008A064
  c->ctr=c->r[12]; // 8008A068
  if (true) { c->lr=0x8008A070u; dispatch(c,c->ctr); } // 8008A06C
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008A070
  cmps(c,0,(int32_t)c->r[0],0); // 8008A074
  if (!crb(c,2)) { goto L_8008A098; } // 8008A078
  c->r[3]=0u+0x00010000u; // 8008A07C
  c->r[3]=c->r[3]+0xFFFF81E8u; // 8008A080
  c->lr=0x8008A088u; f_8008DC84(c); // 8008A084
  cmps(c,0,(int32_t)c->r[3],0); // 8008A088
  if (crb(c,2)) { goto L_8008A094; } // 8008A08C
  c->lr=0x8008A094u; f_80083910(c); // 8008A090
L_8008A094:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008A094
L_8008A098:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008A098
  c->r[4]=0u+0x00000001u; // 8008A09C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A0A0
  c->r[12]=R32(c->r[12]+0x00000024u); // 8008A0A4
  c->ctr=c->r[12]; // 8008A0A8
  if (true) { c->lr=0x8008A0B0u; dispatch(c,c->ctr); } // 8008A0AC
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008A0B0
  c->f[31]=c->f[1]; // 8008A0B4
  cmps(c,0,(int32_t)c->r[0],0); // 8008A0B8
  if (!crb(c,2)) { goto L_8008A0DC; } // 8008A0BC
  c->r[3]=0u+0x00010000u; // 8008A0C0
  c->r[3]=c->r[3]+0xFFFF81E8u; // 8008A0C4
  c->lr=0x8008A0CCu; f_8008DC84(c); // 8008A0C8
  cmps(c,0,(int32_t)c->r[3],0); // 8008A0CC
  if (crb(c,2)) { goto L_8008A0D8; } // 8008A0D0
  c->lr=0x8008A0D8u; f_80083910(c); // 8008A0D4
L_8008A0D8:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008A0D8
L_8008A0DC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008A0DC
  c->r[4]=0u+0x00000001u; // 8008A0E0
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008A0E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A0E8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008A0EC
  c->ctr=c->r[12]; // 8008A0F0
  if (true) { c->lr=0x8008A0F8u; dispatch(c,c->ctr); } // 8008A0F4
  c->r[3]=c->r[31]|c->r[31]; // 8008A0F8
  c->r[4]=0u+0x00000000u; // 8008A0FC
  c->r[5]=0u+0x00000001u; // 8008A100
  c->lr=0x8008A108u; f_800851EC(c); // 8008A104
  c->r[3]=0u+0x00000001u; // 8008A108
  c->r[4]=0u+0x00000007u; // 8008A10C
  c->r[5]=0u+0x00000001u; // 8008A110
  c->lr=0x8008A118u; f_800D31D4(c); // 8008A114
  c->r[3]=0u+0x00000000u; // 8008A118
  c->lr=0x8008A120u; f_800D317C(c); // 8008A11C
  c->r[3]=0u+0x00000000u; // 8008A120
  c->lr=0x8008A128u; f_800D31A8(c); // 8008A124
  c->r[12]=R32(c->r[31]+0x00000000u); // 8008A128
  c->r[3]=c->r[31]|c->r[31]; // 8008A12C
  c->r[4]=c->r[1]+0x0000000Cu; // 8008A130
  c->r[5]=c->r[1]+0x00000008u; // 8008A134
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008A138
  c->ctr=c->r[12]; // 8008A13C
  if (true) { c->lr=0x8008A144u; dispatch(c,c->ctr); } // 8008A140
  c->r[3]=0u+0x00000080u; // 8008A144
  c->r[4]=0u+0x00000000u; // 8008A148
  c->r[5]=0u+0x00000004u; // 8008A14C
  c->lr=0x8008A154u; f_800CFE14(c); // 8008A150
  c->r[4]=0u+0xCC010000u; // 8008A154
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008A158
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008A15C
  c->r[3]=0u+0x00000001u; // 8008A160
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008A164
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008A168
  {uint32_t ea=c->r[2]+0xFFFF8CA8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8008A16C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8008A170
  {uint32_t ea=c->r[2]+0xFFFF8C98u; c->f[2]=RF64(ea);} // 8008A174
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8008A178
  c->r[0]=c->r[0]^0x80000000u; // 8008A17C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8008A180
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 8008A184
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008A188
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8008A18C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008A190
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008A194
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008A198
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 8008A19C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8008A1A0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8008A1A4
  c->r[0]=R32(c->r[1]+0x00000008u); // 8008A1A8
  c->r[0]=c->r[0]^0x80000000u; // 8008A1AC
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8008A1B0
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 8008A1B4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008A1B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008A1BC
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8008A1C0
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008A1C4
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=RF64(ea);} // 8008A1C8
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8008A1CC
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008A1D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008A1D4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008A1D8
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008A1DC
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8008A1E0
  c->lr=0x8008A1E8u; f_800D317C(c); // 8008A1E4
  c->r[3]=0u+0x00000001u; // 8008A1E8
  c->lr=0x8008A1F0u; f_800D31A8(c); // 8008A1EC
  c->r[3]=0u+0x00000001u; // 8008A1F0
  c->r[4]=0u+0x00000003u; // 8008A1F4
  c->r[5]=0u+0x00000001u; // 8008A1F8
  c->lr=0x8008A200u; f_800D31D4(c); // 8008A1FC
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008A200
  cmps(c,0,(int32_t)c->r[0],0); // 8008A204
  if (!crb(c,2)) { goto L_8008A228; } // 8008A208
  c->r[3]=0u+0x00010000u; // 8008A20C
  c->r[3]=c->r[3]+0xFFFF81E8u; // 8008A210
  c->lr=0x8008A218u; f_8008DC84(c); // 8008A214
  cmps(c,0,(int32_t)c->r[3],0); // 8008A218
  if (crb(c,2)) { goto L_8008A224; } // 8008A21C
  c->lr=0x8008A224u; f_80083910(c); // 8008A220
L_8008A224:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008A224
L_8008A228:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008A228
  c->f[1]=c->f[31]; // 8008A22C
  c->r[4]=0u+0x00000001u; // 8008A230
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A234
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008A238
  c->ctr=c->r[12]; // 8008A23C
  if (true) { c->lr=0x8008A244u; dispatch(c,c->ctr); } // 8008A240
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008A244
  cmps(c,0,(int32_t)c->r[0],0); // 8008A248
  if (!crb(c,2)) { goto L_8008A26C; } // 8008A24C
  c->r[3]=0u+0x00010000u; // 8008A250
  c->r[3]=c->r[3]+0xFFFF81E8u; // 8008A254
  c->lr=0x8008A25Cu; f_8008DC84(c); // 8008A258
  cmps(c,0,(int32_t)c->r[3],0); // 8008A25C
  if (crb(c,2)) { goto L_8008A268; } // 8008A260
  c->lr=0x8008A268u; f_80083910(c); // 8008A264
L_8008A268:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008A268
L_8008A26C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008A26C
  c->r[4]=c->r[1]+0x00000050u; // 8008A270
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A274
  c->r[12]=R32(c->r[12]+0x00000038u); // 8008A278
  c->ctr=c->r[12]; // 8008A27C
  if (true) { c->lr=0x8008A284u; dispatch(c,c->ctr); } // 8008A280
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008A284
  cmps(c,0,(int32_t)c->r[0],0); // 8008A288
  if (!crb(c,2)) { goto L_8008A2AC; } // 8008A28C
  c->r[3]=0u+0x00010000u; // 8008A290
  c->r[3]=c->r[3]+0xFFFF81E8u; // 8008A294
  c->lr=0x8008A29Cu; f_8008DC84(c); // 8008A298
  cmps(c,0,(int32_t)c->r[3],0); // 8008A29C
  if (crb(c,2)) { goto L_8008A2A8; } // 8008A2A0
  c->lr=0x8008A2A8u; f_80083910(c); // 8008A2A4
L_8008A2A8:;
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008A2A8
L_8008A2AC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008A2AC
  c->r[4]=c->r[1]+0x00000090u; // 8008A2B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A2B4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8008A2B8
  c->ctr=c->r[12]; // 8008A2BC
  if (true) { c->lr=0x8008A2C4u; dispatch(c,c->ctr); } // 8008A2C0
  c->r[0]=R32(c->r[1]+0x00000104u); // 8008A2C4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 8008A2C8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 8008A2CC
  c->r[31]=R32(c->r[1]+0x000000ECu); // 8008A2D0
  c->lr=c->r[0]; // 8008A2D4
  c->r[1]=c->r[1]+0x00000100u; // 8008A2D8
  return; // 8008A2DC
}

// SetScissorRectangle__11WiiGraphicsFiiii
void f_8008A2E0(Ctx* __restrict c) {
  trace_call(0x8008A2E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008A2E0
  c->r[0]=c->lr; // 8008A2E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008A2E8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8008A2EC
  c->r[28]=c->r[4]|c->r[4]; // 8008A2F0
  c->r[29]=c->r[5]|c->r[5]; // 8008A2F4
  c->r[30]=c->r[6]|c->r[6]; // 8008A2F8
  c->r[31]=c->r[7]|c->r[7]; // 8008A2FC
  c->r[27]=c->r[3]|c->r[3]; // 8008A300
  c->r[3]=c->r[28]|c->r[28]; // 8008A304
  c->r[4]=c->r[29]|c->r[29]; // 8008A308
  c->r[5]=c->r[30]|c->r[30]; // 8008A30C
  c->r[6]=c->r[31]|c->r[31]; // 8008A310
  c->lr=0x8008A318u; f_800D3A04(c); // 8008A314
  c->r[3]=c->r[27]+0x00010000u; // 8008A318
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 8008A31C
  c->lr=0x8008A324u; f_801F9A30(c); // 8008A320
  W32(c->r[1]+0x00000008u,c->r[3]); // 8008A324
  c->r[4]=c->r[28]|c->r[28]; // 8008A328
  c->r[5]=c->r[29]|c->r[29]; // 8008A32C
  c->r[6]=c->r[30]|c->r[30]; // 8008A330
  c->r[7]=c->r[30]|c->r[30]; // 8008A334
  c->r[3]=c->r[1]+0x00000008u; // 8008A338
  c->lr=0x8008A340u; f_801F3E70(c); // 8008A33C
  c->r[3]=c->r[27]+0x00010000u; // 8008A340
  W32(c->r[3]+0xFFFF81D4u,c->r[28]); // 8008A344
  W32(c->r[3]+0xFFFF81D8u,c->r[29]); // 8008A348
  W32(c->r[3]+0xFFFF81DCu,c->r[30]); // 8008A34C
  W32(c->r[3]+0xFFFF81E0u,c->r[31]); // 8008A350
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8008A354
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008A358
  c->lr=c->r[0]; // 8008A35C
  c->r[1]=c->r[1]+0x00000030u; // 8008A360
  return; // 8008A364
}

// SetViewport__11WiiGraphicsFiiii
void f_8008A368(Ctx* __restrict c) {
  trace_call(0x8008A368u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008A368
  c->r[0]=c->lr; // 8008A36C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8008A370
  c->r[11]=c->r[1]+0x00000040u; // 8008A374
  c->lr=0x8008A37Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8008A378
  c->r[8]=c->r[3]+0x00010000u; // 8008A37C
  c->r[0]=0u+0x43300000u; // 8008A380
  c->r[27]=c->r[3]|c->r[3]; // 8008A384
  W32(c->r[1]+0x00000010u,c->r[0]); // 8008A388
  c->r[3]=R32(c->r[8]+0xFFFF81BCu); // 8008A38C
  c->r[28]=c->r[4]|c->r[4]; // 8008A390
  W32(c->r[1]+0x00000018u,c->r[0]); // 8008A394
  c->r[29]=c->r[5]|c->r[5]; // 8008A398
  c->r[30]=c->r[6]|c->r[6]; // 8008A39C
  c->r[31]=c->r[7]|c->r[7]; // 8008A3A0
  c->lr=0x8008A3A8u; f_801F9A30(c); // 8008A3A4
  c->r[0]=c->r[28]^0x80000000u; // 8008A3A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008A3AC
  c->r[0]=c->r[29]^0x80000000u; // 8008A3B0
  c->r[4]=c->r[30]^0x80000000u; // 8008A3B4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8008A3B8
  c->r[0]=c->r[31]^0x80000000u; // 8008A3BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8008A3C0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 8008A3C4
  {uint32_t ea=c->r[2]+0xFFFF8C98u; c->f[4]=RF64(ea);} // 8008A3C8
  W32(c->r[1]+0x00000014u,c->r[4]); // 8008A3CC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 8008A3D0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8008A3D4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8008A3D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8008A3DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8008A3E0
  c->r[3]=c->r[1]+0x00000008u; // 8008A3E4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8008A3E8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8008A3EC
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 8008A3F0
  c->lr=0x8008A3F8u; f_801F3F20(c); // 8008A3F4
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008A3F8
  c->r[3]=c->r[1]+0x00000008u; // 8008A3FC
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8008A400
  c->lr=0x8008A408u; f_801F4060(c); // 8008A404
  c->r[0]=c->r[28]^0x80000000u; // 8008A408
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008A40C
  c->r[0]=c->r[29]^0x80000000u; // 8008A410
  c->r[3]=c->r[30]^0x80000000u; // 8008A414
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8008A418
  c->r[0]=c->r[31]^0x80000000u; // 8008A41C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8008A420
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 8008A424
  {uint32_t ea=c->r[2]+0xFFFF8C98u; c->f[4]=RF64(ea);} // 8008A428
  W32(c->r[1]+0x00000014u,c->r[3]); // 8008A42C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 8008A430
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[5]=c->ps1[5]=RF32(ea);} // 8008A434
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8008A438
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8008A43C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8008A440
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8008A444
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8008A448
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8008A44C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 8008A450
  c->lr=0x8008A458u; f_800D39B8(c); // 8008A454
  c->r[4]=c->r[27]+0x00010000u; // 8008A458
  {uint32_t ea=c->r[27]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008A45C
  W32(c->r[4]+0xFFFF81C4u,c->r[28]); // 8008A460
  c->r[3]=c->r[27]|c->r[27]; // 8008A464
  W32(c->r[4]+0xFFFF81C8u,c->r[29]); // 8008A468
  W32(c->r[4]+0xFFFF81CCu,c->r[30]); // 8008A46C
  W32(c->r[4]+0xFFFF81D0u,c->r[31]); // 8008A470
  c->lr=0x8008A478u; f_80087240(c); // 8008A474
  c->r[11]=c->r[1]+0x00000040u; // 8008A478
  c->lr=0x8008A480u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008A47C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8008A480
  c->lr=c->r[0]; // 8008A484
  c->r[1]=c->r[1]+0x00000040u; // 8008A488
  return; // 8008A48C
}

// GetScissorRectangle__11WiiGraphicsFPiPiPiPi
void f_8008A490(Ctx* __restrict c) {
  trace_call(0x8008A490u);
  c->r[3]=c->r[3]+0x00010000u; // 8008A490
  c->r[0]=R32(c->r[3]+0xFFFF81D4u); // 8008A494
  W32(c->r[4]+0x00000000u,c->r[0]); // 8008A498
  c->r[0]=R32(c->r[3]+0xFFFF81D8u); // 8008A49C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8008A4A0
  c->r[0]=R32(c->r[3]+0xFFFF81DCu); // 8008A4A4
  W32(c->r[6]+0x00000000u,c->r[0]); // 8008A4A8
  c->r[0]=R32(c->r[3]+0xFFFF81E0u); // 8008A4AC
  W32(c->r[7]+0x00000000u,c->r[0]); // 8008A4B0
  return; // 8008A4B4
}

// GetViewport__11WiiGraphicsFPiPiPiPi
void f_8008A4B8(Ctx* __restrict c) {
  trace_call(0x8008A4B8u);
  c->r[3]=c->r[3]+0x00010000u; // 8008A4B8
  c->r[0]=R32(c->r[3]+0xFFFF81C4u); // 8008A4BC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8008A4C0
  c->r[0]=R32(c->r[3]+0xFFFF81C8u); // 8008A4C4
  W32(c->r[5]+0x00000000u,c->r[0]); // 8008A4C8
  c->r[0]=R32(c->r[3]+0xFFFF81CCu); // 8008A4CC
  W32(c->r[6]+0x00000000u,c->r[0]); // 8008A4D0
  c->r[0]=R32(c->r[3]+0xFFFF81D0u); // 8008A4D4
  W32(c->r[7]+0x00000000u,c->r[0]); // 8008A4D8
  return; // 8008A4DC
}

// Lock__14WiiImageHandleFv
void f_8008A4E0(Ctx* __restrict c) {
  trace_call(0x8008A4E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008A4E0
  c->r[0]=c->lr; // 8008A4E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008A4E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008A4EC
  c->r[31]=c->r[3]|c->r[3]; // 8008A4F0
  c->r[0]=R8(c->r[3]+0x00000064u); // 8008A4F4
  cmps(c,0,(int32_t)c->r[0],0); // 8008A4F8
  if (crb(c,2)) { goto L_8008A528; } // 8008A4FC
  c->r[4]=R32(c->r[3]+0x00000060u); // 8008A500
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A504
  c->r[7]=R32(c->r[4]+0x00000000u); // 8008A508
  c->r[4]=R32(c->r[7]+0x00000008u); // 8008A50C
  c->r[5]=R32(c->r[7]+0x00000004u); // 8008A510
  c->r[6]=R16(c->r[7]+0x00000002u); // 8008A514
  c->r[7]=R16(c->r[7]+0x00000000u); // 8008A518
  c->lr=0x8008A520u; f_8008B5CC(c); // 8008A51C
  c->r[0]=0u+0x00000000u; // 8008A520
  W8(c->r[31]+0x00000064u,c->r[0]); // 8008A524
L_8008A528:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 8008A528
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008A52C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A530
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008A534
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008A538
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A53C
  c->lr=c->r[0]; // 8008A540
  c->r[1]=c->r[1]+0x00000010u; // 8008A544
  return; // 8008A548
}

// Unlock__14WiiImageHandleFv
void f_8008A54C(Ctx* __restrict c) {
  trace_call(0x8008A54Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008A54C
  c->r[0]=c->lr; // 8008A550
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008A554
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008A558
  c->r[31]=c->r[3]|c->r[3]; // 8008A55C
  c->r[0]=R8(c->r[3]+0x00000064u); // 8008A560
  cmps(c,0,(int32_t)c->r[0],0); // 8008A564
  if (!crb(c,2)) { goto L_8008A594; } // 8008A568
  c->r[4]=R32(c->r[3]+0x00000060u); // 8008A56C
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A570
  c->r[7]=R32(c->r[4]+0x00000000u); // 8008A574
  c->r[4]=R32(c->r[7]+0x00000008u); // 8008A578
  c->r[5]=R32(c->r[7]+0x00000004u); // 8008A57C
  c->r[6]=R16(c->r[7]+0x00000002u); // 8008A580
  c->r[7]=R16(c->r[7]+0x00000000u); // 8008A584
  c->lr=0x8008A58Cu; f_8008B334(c); // 8008A588
  c->r[0]=0u+0x00000001u; // 8008A58C
  W8(c->r[31]+0x00000064u,c->r[0]); // 8008A590
L_8008A594:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008A594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008A598
  c->lr=c->r[0]; // 8008A59C
  c->r[1]=c->r[1]+0x00000010u; // 8008A5A0
  return; // 8008A5A4
}

// SetOption__14WiiImageHandleF13TextureOptionf
void f_8008A5A8(Ctx* __restrict c) {
  trace_call(0x8008A5A8u);
  cmps(c,0,(int32_t)c->r[4],0); // 8008A5A8
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008A5AC
  if (crb(c,2)) { goto L_8008A5C8; } // 8008A5B0
  cmps(c,0,(int32_t)c->r[4],1); // 8008A5B4
  if (crb(c,2)) { goto L_8008A680; } // 8008A5B8
  cmps(c,0,(int32_t)c->r[4],2); // 8008A5BC
  if (crb(c,2)) { goto L_8008A6A0; } // 8008A5C0
  goto L_8008A6BC; // 8008A5C4
L_8008A5C8:;
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008A5C8
  fcmp(c,0,c->f[0],c->f[1]); // 8008A5CC
  if (!crb(c,2)) { goto L_8008A604; } // 8008A5D0
  c->r[4]=R32(c->r[3]+0x00000060u); // 8008A5D4
  c->r[5]=0u+0x00000000u; // 8008A5D8
  c->r[0]=0u+0x00000001u; // 8008A5DC
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A5E0
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008A5E4
  W32(c->r[4]+0x00000014u,c->r[5]); // 8008A5E8
  c->r[4]=R32(c->r[3]+0x00000060u); // 8008A5EC
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A5F0
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008A5F4
  W32(c->r[4]+0x00000018u,c->r[5]); // 8008A5F8
  W32(c->r[3]+0x00000068u,c->r[0]); // 8008A5FC
  goto L_8008A6BC; // 8008A600
L_8008A604:;
  {uint32_t ea=c->r[2]+0xFFFF8CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008A604
  fcmp(c,0,c->f[0],c->f[1]); // 8008A608
  if (!crb(c,2)) { goto L_8008A640; } // 8008A60C
  c->r[4]=R32(c->r[3]+0x00000060u); // 8008A610
  c->r[5]=0u+0x00000003u; // 8008A614
  c->r[0]=0u+0x00000001u; // 8008A618
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A61C
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008A620
  W32(c->r[4]+0x00000014u,c->r[5]); // 8008A624
  c->r[4]=R32(c->r[3]+0x00000060u); // 8008A628
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A62C
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008A630
  W32(c->r[4]+0x00000018u,c->r[0]); // 8008A634
  W32(c->r[3]+0x00000068u,c->r[0]); // 8008A638
  goto L_8008A6BC; // 8008A63C
L_8008A640:;
  {uint32_t ea=c->r[2]+0xFFFF8CB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008A640
  fcmp(c,0,c->f[0],c->f[1]); // 8008A644
  if (!crb(c,2)) { goto L_8008A6BC; } // 8008A648
  c->r[4]=R32(c->r[3]+0x00000060u); // 8008A64C
  c->r[6]=0u+0x00000005u; // 8008A650
  c->r[5]=0u+0x00000001u; // 8008A654
  c->r[0]=0u+0x00000004u; // 8008A658
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A65C
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008A660
  W32(c->r[4]+0x00000014u,c->r[6]); // 8008A664
  c->r[4]=R32(c->r[3]+0x00000060u); // 8008A668
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A66C
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008A670
  W32(c->r[4]+0x00000018u,c->r[5]); // 8008A674
  W32(c->r[3]+0x00000068u,c->r[0]); // 8008A678
  goto L_8008A6BC; // 8008A67C
L_8008A680:;
  c->r[3]=R32(c->r[3]+0x00000060u); // 8008A680
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8008A684
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A688
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8008A68C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008A690
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8008A694
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8008A698
  goto L_8008A6BC; // 8008A69C
L_8008A6A0:;
  c->r[3]=R32(c->r[3]+0x00000060u); // 8008A6A0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8008A6A4
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A6A8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8008A6AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008A6B0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8008A6B4
  W32(c->r[3]+0x00000010u,c->r[0]); // 8008A6B8
L_8008A6BC:;
  c->r[1]=c->r[1]+0x00000010u; // 8008A6BC
  return; // 8008A6C0
}

// GetOption__14WiiImageHandleF13TextureOption
void f_8008A6C4(Ctx* __restrict c) {
  trace_call(0x8008A6C4u);
  cmps(c,0,(int32_t)c->r[4],0); // 8008A6C4
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008A6C8
  if (crb(c,2)) { goto L_8008A6E4; } // 8008A6CC
  cmps(c,0,(int32_t)c->r[4],1); // 8008A6D0
  if (crb(c,2)) { goto L_8008A730; } // 8008A6D4
  cmps(c,0,(int32_t)c->r[4],2); // 8008A6D8
  if (crb(c,2)) { goto L_8008A760; } // 8008A6DC
  goto L_8008A790; // 8008A6E0
L_8008A6E4:;
  c->r[3]=R32(c->r[3]+0x00000060u); // 8008A6E4
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A6E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008A6EC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8008A6F0
  cmps(c,0,(int32_t)c->r[0],0); // 8008A6F4
  if (crb(c,2)) { goto L_8008A710; } // 8008A6F8
  cmps(c,0,(int32_t)c->r[0],3); // 8008A6FC
  if (crb(c,2)) { goto L_8008A718; } // 8008A700
  cmps(c,0,(int32_t)c->r[0],5); // 8008A704
  if (crb(c,2)) { goto L_8008A720; } // 8008A708
  goto L_8008A728; // 8008A70C
L_8008A710:;
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008A710
  goto L_8008A794; // 8008A714
L_8008A718:;
  {uint32_t ea=c->r[2]+0xFFFF8CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008A718
  goto L_8008A794; // 8008A71C
L_8008A720:;
  {uint32_t ea=c->r[2]+0xFFFF8CB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008A720
  goto L_8008A794; // 8008A724
L_8008A728:;
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008A728
  goto L_8008A794; // 8008A72C
L_8008A730:;
  c->r[3]=R32(c->r[3]+0x00000060u); // 8008A730
  c->r[0]=0u+0x43300000u; // 8008A734
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008A738
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A73C
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[1]=RF64(ea);} // 8008A740
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008A744
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8008A748
  c->r[0]=c->r[0]^0x80000000u; // 8008A74C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8008A750
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8008A754
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8008A758
  goto L_8008A794; // 8008A75C
L_8008A760:;
  c->r[3]=R32(c->r[3]+0x00000060u); // 8008A760
  c->r[0]=0u+0x43300000u; // 8008A764
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008A768
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A76C
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[1]=RF64(ea);} // 8008A770
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008A774
  c->r[0]=R32(c->r[3]+0x00000010u); // 8008A778
  c->r[0]=c->r[0]^0x80000000u; // 8008A77C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8008A780
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8008A784
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8008A788
  goto L_8008A794; // 8008A78C
L_8008A790:;
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008A790
L_8008A794:;
  c->r[1]=c->r[1]+0x00000010u; // 8008A794
  return; // 8008A798
}

// CreateBlankImage__11WiiGraphicsFPciii
void f_8008A79C(Ctx* __restrict c) {
  trace_call(0x8008A79Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008A79C
  c->r[0]=c->lr; // 8008A7A0
  W32(c->r[1]+0x00000134u,c->r[0]); // 8008A7A4
  c->r[11]=c->r[1]+0x00000130u; // 8008A7A8
  c->lr=0x8008A7B0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8008A7AC
  c->r[26]=c->r[3]|c->r[3]; // 8008A7B0
  c->r[24]=c->r[4]|c->r[4]; // 8008A7B4
  c->r[27]=c->r[5]|c->r[5]; // 8008A7B8
  c->r[29]=c->r[6]|c->r[6]; // 8008A7BC
  c->r[28]=c->r[7]|c->r[7]; // 8008A7C0
  c->lr=0x8008A7C8u; f_80076328(c); // 8008A7C4
  cmps(c,0,(int32_t)c->r[3],0); // 8008A7C8
  c->r[30]=c->r[3]|c->r[3]; // 8008A7CC
  if (!crb(c,2)) { goto L_8008AAE0; } // 8008A7D0
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[29]); // 8008A7D4
  c->r[4]=0u+0x80260000u; // 8008A7D8
  c->r[5]=c->r[24]|c->r[24]; // 8008A7DC
  c->r[6]=c->r[27]|c->r[27]; // 8008A7E0
  c->r[7]=c->r[29]|c->r[29]; // 8008A7E4
  c->r[3]=c->r[1]+0x00000008u; // 8008A7E8
  c->r[31]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[0]); // 8008A7EC
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008A7F0
  c->r[8]=c->r[31]|c->r[31]; // 8008A7F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008A7F8
  c->lr=0x8008A800u; f_800DA3C8(c); // 8008A7FC
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008A800
  cmps(c,0,(int32_t)c->r[0],0); // 8008A804
  if (!crb(c,2)) { goto L_8008A814; } // 8008A808
  c->lr=0x8008A810u; f_80080758(c); // 8008A80C
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008A810
L_8008A814:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008A814
  c->r[4]=c->r[1]+0x00000008u; // 8008A818
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008A81C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A820
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008A824
  c->ctr=c->r[12]; // 8008A828
  if (true) { c->lr=0x8008A830u; dispatch(c,c->ctr); } // 8008A82C
  c->r[3]=0u+0x0000006Cu; // 8008A830
  c->lr=0x8008A838u; f_8008DC84(c); // 8008A834
  cmps(c,0,(int32_t)c->r[3],0); // 8008A838
  c->r[30]=c->r[3]|c->r[3]; // 8008A83C
  if (crb(c,2)) { goto L_8008A888; } // 8008A840
  c->r[5]=0u+0x00000000u; // 8008A844
  W8(c->r[3]+0x00000004u,c->r[5]); // 8008A848
  c->r[4]=0u+0x80260000u; // 8008A84C
  c->r[0]=0u+0x00000001u; // 8008A850
  W32(c->r[3]+0x00000044u,c->r[5]); // 8008A854
  c->r[4]=c->r[4]+0x00004714u; // 8008A858
  W32(c->r[3]+0x00000054u,c->r[5]); // 8008A85C
  W32(c->r[3]+0x00000050u,c->r[5]); // 8008A860
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 8008A864
  W32(c->r[3]+0x00000048u,c->r[5]); // 8008A868
  W8(c->r[3]+0x00000058u,c->r[0]); // 8008A86C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8008A870
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 8008A874
  W32(c->r[3]+0x00000060u,c->r[5]); // 8008A878
  W8(c->r[3]+0x00000065u,c->r[5]); // 8008A87C
  W8(c->r[3]+0x00000064u,c->r[0]); // 8008A880
  W32(c->r[3]+0x00000068u,c->r[0]); // 8008A884
L_8008A888:;
  W32(c->r[3]+0x00000048u,c->r[27]); // 8008A888
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[28]); // 8008A88C
  c->r[25]=0u+0x00000001u; // 8008A890
  W32(c->r[3]+0x0000004Cu,c->r[29]); // 8008A894
  W32(c->r[3]+0x00000050u,c->r[28]); // 8008A898
  W32(c->r[3]+0x00000054u,c->r[0]); // 8008A89C
  W8(c->r[3]+0x00000064u,c->r[25]); // 8008A8A0
  c->r[3]=c->r[24]|c->r[24]; // 8008A8A4
  c->lr=0x8008A8ACu; f_800D4394(c); // 8008A8A8
  cmpu(c,0,c->r[3],0x00000040u); // 8008A8AC
  if (crb(c,0)) { goto L_8008A934; } // 8008A8B0
  c->r[4]=0u+0x80260000u; // 8008A8B4
  c->r[5]=c->r[24]|c->r[24]; // 8008A8B8
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008A8BC
  c->r[3]=c->r[1]+0x00000008u; // 8008A8C0
  c->r[4]=c->r[4]+0x0000002Au; // 8008A8C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008A8C8
  c->lr=0x8008A8D0u; f_800DA3C8(c); // 8008A8CC
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008A8D0
  cmps(c,0,(int32_t)c->r[0],0); // 8008A8D4
  if (!crb(c,2)) { goto L_8008A8E4; } // 8008A8D8
  c->lr=0x8008A8E0u; f_80080758(c); // 8008A8DC
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008A8E0
L_8008A8E4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008A8E4
  c->r[4]=c->r[1]+0x00000008u; // 8008A8E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008A8EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A8F0
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008A8F4
  c->ctr=c->r[12]; // 8008A8F8
  if (true) { c->lr=0x8008A900u; dispatch(c,c->ctr); } // 8008A8FC
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008A900
  cmps(c,0,(int32_t)c->r[0],0); // 8008A904
  if (!crb(c,2)) { goto L_8008A914; } // 8008A908
  c->lr=0x8008A910u; f_80080758(c); // 8008A90C
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008A910
L_8008A914:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008A914
  c->r[4]=0u+0x00000000u; // 8008A918
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008A91C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8008A920
  c->ctr=c->r[12]; // 8008A924
  if (true) { c->lr=0x8008A92Cu; dispatch(c,c->ctr); } // 8008A928
  c->r[3]=0u+0x00000000u; // 8008A92C
  goto L_8008AAF0; // 8008A930
L_8008A934:;
  c->r[4]=c->r[24]|c->r[24]; // 8008A934
  c->r[3]=c->r[30]+0x00000004u; // 8008A938
  c->lr=0x8008A940u; f_800DB9A8(c); // 8008A93C
  c->r[3]=0u+0x0000000Cu; // 8008A940
  c->lr=0x8008A948u; f_8008DC84(c); // 8008A944
  W32(c->r[30]+0x00000060u,c->r[3]); // 8008A948
  W32(c->r[3]+0x00000004u,c->r[25]); // 8008A94C
  c->r[3]=0u+0x00000008u; // 8008A950
  c->lr=0x8008A958u; f_8008DC84(c); // 8008A954
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008A958
  W32(c->r[4]+0x00000008u,c->r[3]); // 8008A95C
  c->r[3]=0u+0x00000024u; // 8008A960
  c->lr=0x8008A968u; f_8008DC84(c); // 8008A964
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008A968
  cmps(c,0,(int32_t)c->r[28],2); // 8008A96C
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A970
  W32(c->r[4]+0x00000000u,c->r[3]); // 8008A974
  c->r[3]=R32(c->r[30]+0x00000060u); // 8008A978
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A97C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008A980
  W16(c->r[3]+0x00000002u,c->r[27]); // 8008A984
  c->r[3]=R32(c->r[30]+0x00000060u); // 8008A988
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A98C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008A990
  W16(c->r[3]+0x00000000u,c->r[29]); // 8008A994
  if (!crb(c,2)) { goto L_8008A9A0; } // 8008A998
  c->r[29]=0u+0x00000004u; // 8008A99C
L_8008A9A0:;
  cmps(c,0,(int32_t)c->r[28],4); // 8008A9A0
  if (!crb(c,2)) { goto L_8008A9AC; } // 8008A9A4
  c->r[29]=0u+0x00000006u; // 8008A9A8
L_8008A9AC:;
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008A9AC
  c->r[3]=c->r[31]|c->r[31]; // 8008A9B0
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008A9B4
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008A9B8
  W32(c->r[4]+0x00000004u,c->r[29]); // 8008A9BC
  c->lr=0x8008A9C4u; f_8008DB7C(c); // 8008A9C0
  c->r[6]=R32(c->r[30]+0x00000060u); // 8008A9C4
  c->r[5]=c->r[31]|c->r[31]; // 8008A9C8
  c->r[4]=0u+0x00000000u; // 8008A9CC
  c->r[6]=R32(c->r[6]+0x00000008u); // 8008A9D0
  c->r[6]=R32(c->r[6]+0x00000000u); // 8008A9D4
  W32(c->r[6]+0x00000008u,c->r[3]); // 8008A9D8
  c->r[3]=R32(c->r[30]+0x00000060u); // 8008A9DC
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A9E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008A9E4
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008A9E8
  c->lr=0x8008A9F0u; f_80004688(c); // 8008A9EC
  c->r[3]=R32(c->r[30]+0x00000060u); // 8008A9F0
  c->r[5]=0u+0x00000001u; // 8008A9F4
  c->r[0]=0u+0x00000003u; // 8008A9F8
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008A9FC
  c->r[4]=R32(c->r[3]+0x00000008u); // 8008AA00
  c->r[27]=0u+0x00000000u; // 8008AA04
  c->r[3]=0u+0x0000000Cu; // 8008AA08
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008AA0C
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 8008AA10
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008AA14
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008AA18
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008AA1C
  W32(c->r[4]+0x00000010u,c->r[5]); // 8008AA20
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008AA24
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008AA28
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008AA2C
  W32(c->r[4]+0x00000014u,c->r[0]); // 8008AA30
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008AA34
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008AA38
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008AA3C
  W32(c->r[4]+0x00000018u,c->r[5]); // 8008AA40
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008AA44
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008AA48
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008AA4C
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 8008AA50
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008AA54
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008AA58
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008AA5C
  W8(c->r[4]+0x00000020u,c->r[5]); // 8008AA60
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008AA64
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008AA68
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008AA6C
  W8(c->r[4]+0x00000021u,c->r[27]); // 8008AA70
  c->r[4]=R32(c->r[30]+0x00000060u); // 8008AA74
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008AA78
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008AA7C
  W8(c->r[4]+0x00000022u,c->r[27]); // 8008AA80
  c->lr=0x8008AA88u; f_8008DC84(c); // 8008AA84
  cmps(c,0,(int32_t)c->r[3],0); // 8008AA88
  if (crb(c,2)) { goto L_8008AA98; } // 8008AA8C
  W32(c->r[3]+0x00000004u,c->r[27]); // 8008AA90
  W32(c->r[3]+0x00000000u,c->r[27]); // 8008AA94
L_8008AA98:;
  W32(c->r[3]+0x00000008u,c->r[30]); // 8008AA98
  c->r[4]=R32(c->r[26]+0x00000010u); // 8008AA9C
  cmps(c,0,(int32_t)c->r[4],0); // 8008AAA0
  if (crb(c,2)) { goto L_8008AAAC; } // 8008AAA4
  W32(c->r[4]+0x00000000u,c->r[3]); // 8008AAA8
L_8008AAAC:;
  c->r[4]=R32(c->r[26]+0x00000010u); // 8008AAAC
  c->r[0]=0u+0x00000000u; // 8008AAB0
  W32(c->r[3]+0x00000004u,c->r[4]); // 8008AAB4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008AAB8
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 8008AABC
  W32(c->r[26]+0x00000010u,c->r[3]); // 8008AAC0
  cmps(c,0,(int32_t)c->r[0],0); // 8008AAC4
  if (!crb(c,2)) { goto L_8008AAD0; } // 8008AAC8
  W32(c->r[26]+0x0000000Cu,c->r[3]); // 8008AACC
L_8008AAD0:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 8008AAD0
  c->r[0]=c->r[3]+0x00000001u; // 8008AAD4
  W32(c->r[26]+0x00000014u,c->r[0]); // 8008AAD8
  goto L_8008AAEC; // 8008AADC
L_8008AAE0:;
  c->r[4]=R32(c->r[3]+0x0000005Cu); // 8008AAE0
  c->r[0]=c->r[4]+0x00000001u; // 8008AAE4
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 8008AAE8
L_8008AAEC:;
  c->r[3]=c->r[30]|c->r[30]; // 8008AAEC
L_8008AAF0:;
  c->r[11]=c->r[1]+0x00000130u; // 8008AAF0
  c->lr=0x8008AAF8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008AAF4
  c->r[0]=R32(c->r[1]+0x00000134u); // 8008AAF8
  c->lr=c->r[0]; // 8008AAFC
  c->r[1]=c->r[1]+0x00000130u; // 8008AB00
  return; // 8008AB04
}

// LoadImage__11WiiGraphicsFPcb
void f_8008AB08(Ctx* __restrict c) {
  trace_call(0x8008AB08u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008AB08
  c->r[0]=c->lr; // 8008AB0C
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008AB10
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 8008AB14
  W32(c->r[1]+0x00000118u,c->r[30]); // 8008AB18
  c->r[30]=c->r[3]|c->r[3]; // 8008AB1C
  W32(c->r[1]+0x00000114u,c->r[29]); // 8008AB20
  W32(c->r[1]+0x00000110u,c->r[28]); // 8008AB24
  c->r[28]=c->r[4]|c->r[4]; // 8008AB28
  c->lr=0x8008AB30u; f_80076328(c); // 8008AB2C
  cmps(c,0,(int32_t)c->r[3],0); // 8008AB30
  c->r[31]=c->r[3]|c->r[3]; // 8008AB34
  if (!crb(c,2)) { goto L_8008AE58; } // 8008AB38
  c->r[4]=0u+0x80260000u; // 8008AB3C
  c->r[5]=c->r[28]|c->r[28]; // 8008AB40
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008AB44
  c->r[3]=c->r[1]+0x00000008u; // 8008AB48
  c->r[4]=c->r[4]+0x00000060u; // 8008AB4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008AB50
  c->lr=0x8008AB58u; f_800DA3C8(c); // 8008AB54
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008AB58
  cmps(c,0,(int32_t)c->r[0],0); // 8008AB5C
  if (!crb(c,2)) { goto L_8008AB6C; } // 8008AB60
  c->lr=0x8008AB68u; f_80080758(c); // 8008AB64
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008AB68
L_8008AB6C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008AB6C
  c->r[4]=c->r[1]+0x00000008u; // 8008AB70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008AB74
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008AB78
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008AB7C
  c->ctr=c->r[12]; // 8008AB80
  if (true) { c->lr=0x8008AB88u; dispatch(c,c->ctr); } // 8008AB84
  c->r[3]=0u+0x0000006Cu; // 8008AB88
  c->lr=0x8008AB90u; f_8008DC84(c); // 8008AB8C
  cmps(c,0,(int32_t)c->r[3],0); // 8008AB90
  c->r[31]=c->r[3]|c->r[3]; // 8008AB94
  if (crb(c,2)) { goto L_8008ABE0; } // 8008AB98
  c->r[5]=0u+0x00000000u; // 8008AB9C
  W8(c->r[3]+0x00000004u,c->r[5]); // 8008ABA0
  c->r[4]=0u+0x80260000u; // 8008ABA4
  c->r[0]=0u+0x00000001u; // 8008ABA8
  W32(c->r[3]+0x00000044u,c->r[5]); // 8008ABAC
  c->r[4]=c->r[4]+0x00004714u; // 8008ABB0
  W32(c->r[3]+0x00000054u,c->r[5]); // 8008ABB4
  W32(c->r[3]+0x00000050u,c->r[5]); // 8008ABB8
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 8008ABBC
  W32(c->r[3]+0x00000048u,c->r[5]); // 8008ABC0
  W8(c->r[3]+0x00000058u,c->r[0]); // 8008ABC4
  W32(c->r[3]+0x00000000u,c->r[4]); // 8008ABC8
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 8008ABCC
  W32(c->r[3]+0x00000060u,c->r[5]); // 8008ABD0
  W8(c->r[3]+0x00000065u,c->r[5]); // 8008ABD4
  W8(c->r[3]+0x00000064u,c->r[0]); // 8008ABD8
  W32(c->r[3]+0x00000068u,c->r[0]); // 8008ABDC
L_8008ABE0:;
  c->r[3]=c->r[28]|c->r[28]; // 8008ABE0
  c->lr=0x8008ABE8u; f_800D4394(c); // 8008ABE4
  cmpu(c,0,c->r[3],0x00000040u); // 8008ABE8
  if (crb(c,0)) { goto L_8008AC70; } // 8008ABEC
  c->r[4]=0u+0x80260000u; // 8008ABF0
  c->r[5]=c->r[28]|c->r[28]; // 8008ABF4
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008ABF8
  c->r[3]=c->r[1]+0x00000008u; // 8008ABFC
  c->r[4]=c->r[4]+0x0000002Au; // 8008AC00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008AC04
  c->lr=0x8008AC0Cu; f_800DA3C8(c); // 8008AC08
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008AC0C
  cmps(c,0,(int32_t)c->r[0],0); // 8008AC10
  if (!crb(c,2)) { goto L_8008AC20; } // 8008AC14
  c->lr=0x8008AC1Cu; f_80080758(c); // 8008AC18
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008AC1C
L_8008AC20:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008AC20
  c->r[4]=c->r[1]+0x00000008u; // 8008AC24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008AC28
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008AC2C
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008AC30
  c->ctr=c->r[12]; // 8008AC34
  if (true) { c->lr=0x8008AC3Cu; dispatch(c,c->ctr); } // 8008AC38
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008AC3C
  cmps(c,0,(int32_t)c->r[0],0); // 8008AC40
  if (!crb(c,2)) { goto L_8008AC50; } // 8008AC44
  c->lr=0x8008AC4Cu; f_80080758(c); // 8008AC48
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008AC4C
L_8008AC50:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008AC50
  c->r[4]=0u+0x00000000u; // 8008AC54
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008AC58
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8008AC5C
  c->ctr=c->r[12]; // 8008AC60
  if (true) { c->lr=0x8008AC68u; dispatch(c,c->ctr); } // 8008AC64
  c->r[3]=0u+0x00000000u; // 8008AC68
  goto L_8008AE68; // 8008AC6C
L_8008AC70:;
  c->r[4]=c->r[28]|c->r[28]; // 8008AC70
  c->r[3]=c->r[31]+0x00000004u; // 8008AC74
  c->lr=0x8008AC7Cu; f_800DB9A8(c); // 8008AC78
  c->r[0]=0u+0x00000001u; // 8008AC7C
  W8(c->r[31]+0x00000065u,c->r[0]); // 8008AC80
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008AC84
  cmps(c,0,(int32_t)c->r[0],0); // 8008AC88
  if (!crb(c,2)) { goto L_8008AC98; } // 8008AC8C
  c->lr=0x8008AC94u; f_80080758(c); // 8008AC90
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008AC94
L_8008AC98:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008AC98
  c->r[4]=c->r[28]|c->r[28]; // 8008AC9C
  c->r[5]=0u+0x00000000u; // 8008ACA0
  c->r[6]=0u+0x00000001u; // 8008ACA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008ACA8
  c->r[12]=R32(c->r[12]+0x00000128u); // 8008ACAC
  c->ctr=c->r[12]; // 8008ACB0
  if (true) { c->lr=0x8008ACB8u; dispatch(c,c->ctr); } // 8008ACB4
  cmps(c,0,(int32_t)c->r[3],0); // 8008ACB8
  c->r[29]=c->r[3]|c->r[3]; // 8008ACBC
  if (crb(c,2)) { goto L_8008AD70; } // 8008ACC0
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008ACC4
  cmps(c,0,(int32_t)c->r[0],0); // 8008ACC8
  if (!crb(c,2)) { goto L_8008ACD8; } // 8008ACCC
  c->lr=0x8008ACD4u; f_80080758(c); // 8008ACD0
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008ACD4
L_8008ACD8:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008ACD8
  c->r[4]=c->r[29]|c->r[29]; // 8008ACDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008ACE0
  c->r[12]=R32(c->r[12]+0x00000138u); // 8008ACE4
  c->ctr=c->r[12]; // 8008ACE8
  if (true) { c->lr=0x8008ACF0u; dispatch(c,c->ctr); } // 8008ACEC
  c->r[0]=c->r[3]+0x0000001Fu; // 8008ACF0
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8008ACF4
  c->r[3]=c->r[28]|c->r[28]; // 8008ACF8
  c->lr=0x8008AD00u; f_8008DB7C(c); // 8008ACFC
  W32(c->r[31]+0x00000060u,c->r[3]); // 8008AD00
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008AD04
  cmps(c,0,(int32_t)c->r[0],0); // 8008AD08
  if (!crb(c,2)) { goto L_8008AD18; } // 8008AD0C
  c->lr=0x8008AD14u; f_80080758(c); // 8008AD10
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008AD14
L_8008AD18:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008AD18
  c->r[5]=c->r[28]|c->r[28]; // 8008AD1C
  c->r[6]=c->r[29]|c->r[29]; // 8008AD20
  c->r[4]=R32(c->r[31]+0x00000060u); // 8008AD24
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008AD28
  c->r[12]=R32(c->r[12]+0x0000012Cu); // 8008AD2C
  c->ctr=c->r[12]; // 8008AD30
  if (true) { c->lr=0x8008AD38u; dispatch(c,c->ctr); } // 8008AD34
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008AD38
  cmps(c,0,(int32_t)c->r[0],0); // 8008AD3C
  if (!crb(c,2)) { goto L_8008AD4C; } // 8008AD40
  c->lr=0x8008AD48u; f_80080758(c); // 8008AD44
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008AD48
L_8008AD4C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008AD4C
  c->r[4]=c->r[29]|c->r[29]; // 8008AD50
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008AD54
  c->r[12]=R32(c->r[12]+0x00000134u); // 8008AD58
  c->ctr=c->r[12]; // 8008AD5C
  if (true) { c->lr=0x8008AD64u; dispatch(c,c->ctr); } // 8008AD60
  c->r[3]=R32(c->r[31]+0x00000060u); // 8008AD64
  c->lr=0x8008AD6Cu; f_801456A8(c); // 8008AD68
  goto L_8008AD78; // 8008AD6C
L_8008AD70:;
  c->r[0]=0u+0x00000000u; // 8008AD70
  W32(c->r[31]+0x00000060u,c->r[0]); // 8008AD74
L_8008AD78:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 8008AD78
  c->r[4]=0u+0x00000000u; // 8008AD7C
  c->lr=0x8008AD84u; f_801457BC(c); // 8008AD80
  c->r[4]=R32(c->r[3]+0x00000000u); // 8008AD84
  c->r[0]=R16(c->r[4]+0x00000002u); // 8008AD88
  W32(c->r[31]+0x00000048u,c->r[0]); // 8008AD8C
  c->r[4]=R32(c->r[3]+0x00000000u); // 8008AD90
  c->r[0]=R16(c->r[4]+0x00000000u); // 8008AD94
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 8008AD98
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008AD9C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008ADA0
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8008ADA4
  cmpu(c,0,c->r[0],0x00000001u); // 8008ADA8
  if (!crb(c,1)) { goto L_8008ADC4; } // 8008ADAC
  cmpu(c,0,c->r[3],0x00000006u); // 8008ADB0
  if (crb(c,2)) { goto L_8008ADD0; } // 8008ADB4
  cmpu(c,0,c->r[3],0x0000000Eu); // 8008ADB8
  if (crb(c,2)) { goto L_8008ADDC; } // 8008ADBC
  goto L_8008ADE4; // 8008ADC0
L_8008ADC4:;
  c->r[0]=0u+0x00000002u; // 8008ADC4
  W32(c->r[31]+0x00000050u,c->r[0]); // 8008ADC8
  goto L_8008ADE4; // 8008ADCC
L_8008ADD0:;
  c->r[0]=0u+0x00000004u; // 8008ADD0
  W32(c->r[31]+0x00000050u,c->r[0]); // 8008ADD4
  goto L_8008ADE4; // 8008ADD8
L_8008ADDC:;
  c->r[0]=0u+0x00000001u; // 8008ADDC
  W32(c->r[31]+0x00000050u,c->r[0]); // 8008ADE0
L_8008ADE4:;
  c->r[4]=R32(c->r[31]+0x00000048u); // 8008ADE4
  c->r[3]=0u+0x0000000Cu; // 8008ADE8
  c->r[0]=R32(c->r[31]+0x00000050u); // 8008ADEC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8008ADF0
  W32(c->r[31]+0x00000054u,c->r[0]); // 8008ADF4
  c->lr=0x8008ADFCu; f_8008DC84(c); // 8008ADF8
  cmps(c,0,(int32_t)c->r[3],0); // 8008ADFC
  if (crb(c,2)) { goto L_8008AE10; } // 8008AE00
  c->r[0]=0u+0x00000000u; // 8008AE04
  W32(c->r[3]+0x00000004u,c->r[0]); // 8008AE08
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008AE0C
L_8008AE10:;
  W32(c->r[3]+0x00000008u,c->r[31]); // 8008AE10
  c->r[4]=R32(c->r[30]+0x00000010u); // 8008AE14
  cmps(c,0,(int32_t)c->r[4],0); // 8008AE18
  if (crb(c,2)) { goto L_8008AE24; } // 8008AE1C
  W32(c->r[4]+0x00000000u,c->r[3]); // 8008AE20
L_8008AE24:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 8008AE24
  c->r[0]=0u+0x00000000u; // 8008AE28
  W32(c->r[3]+0x00000004u,c->r[4]); // 8008AE2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008AE30
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8008AE34
  W32(c->r[30]+0x00000010u,c->r[3]); // 8008AE38
  cmps(c,0,(int32_t)c->r[0],0); // 8008AE3C
  if (!crb(c,2)) { goto L_8008AE48; } // 8008AE40
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8008AE44
L_8008AE48:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 8008AE48
  c->r[0]=c->r[3]+0x00000001u; // 8008AE4C
  W32(c->r[30]+0x00000014u,c->r[0]); // 8008AE50
  goto L_8008AE64; // 8008AE54
L_8008AE58:;
  c->r[4]=R32(c->r[3]+0x0000005Cu); // 8008AE58
  c->r[0]=c->r[4]+0x00000001u; // 8008AE5C
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 8008AE60
L_8008AE64:;
  c->r[3]=c->r[31]|c->r[31]; // 8008AE64
L_8008AE68:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 8008AE68
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 8008AE6C
  c->r[30]=R32(c->r[1]+0x00000118u); // 8008AE70
  c->r[29]=R32(c->r[1]+0x00000114u); // 8008AE74
  c->r[28]=R32(c->r[1]+0x00000110u); // 8008AE78
  c->lr=c->r[0]; // 8008AE7C
  c->r[1]=c->r[1]+0x00000120u; // 8008AE80
  return; // 8008AE84
}

// FreeImage__11WiiGraphicsFP11ImageHandle
void f_8008AE88(Ctx* __restrict c) {
  trace_call(0x8008AE88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008AE88
  c->r[0]=c->lr; // 8008AE8C
  cmps(c,0,(int32_t)c->r[4],0); // 8008AE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008AE94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008AE98
  c->r[31]=c->r[4]|c->r[4]; // 8008AE9C
  if (crb(c,2)) { goto L_8008B030; } // 8008AEA0
  c->r[0]=R32(c->r[4]+0x0000005Cu); // 8008AEA4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8008AEA8
  W32(c->r[4]+0x0000005Cu,c->r[0]); // 8008AEAC
  if (!crb(c,2)) { goto L_8008B030; } // 8008AEB0
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 8008AEB4
  goto L_8008AED0; // 8008AEB8
L_8008AEBC:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 8008AEBC
  cmpu(c,0,c->r[0],c->r[4]); // 8008AEC0
  if (!crb(c,2)) { goto L_8008AECC; } // 8008AEC4
  goto L_8008AEDC; // 8008AEC8
L_8008AECC:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 8008AECC
L_8008AED0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8008AED0
  if (!crb(c,2)) { IRQCHK(c); goto L_8008AEBC; } // 8008AED4
  c->r[5]=0u+0x00000000u; // 8008AED8
L_8008AEDC:;
  cmps(c,1,(int32_t)c->r[5],0); // 8008AEDC
  if (crb(c,6)) { goto L_8008AFA0; } // 8008AEE0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8008AEE4
  c->r[4]=R32(c->r[3]+0x00000014u); // 8008AEE8
  cmpu(c,0,c->r[5],c->r[0]); // 8008AEEC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8008AEF0
  W32(c->r[3]+0x00000014u,c->r[0]); // 8008AEF4
  if (!crb(c,2)) { goto L_8008AF40; } // 8008AEF8
  c->r[4]=R32(c->r[5]+0x00000000u); // 8008AEFC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8008AF00
  cmps(c,0,(int32_t)c->r[4],0); // 8008AF04
  if (crb(c,2)) { goto L_8008AF18; } // 8008AF08
  c->r[0]=0u+0x00000000u; // 8008AF0C
  W32(c->r[4]+0x00000004u,c->r[0]); // 8008AF10
  goto L_8008AF20; // 8008AF14
L_8008AF18:;
  c->r[0]=0u+0x00000000u; // 8008AF18
  W32(c->r[3]+0x00000010u,c->r[0]); // 8008AF1C
L_8008AF20:;
  c->r[0]=0u+0x00000000u; // 8008AF20
  W32(c->r[5]+0x00000000u,c->r[0]); // 8008AF24
  cmps(c,0,(int32_t)c->r[5],0); // 8008AF28
  W32(c->r[5]+0x00000004u,c->r[0]); // 8008AF2C
  if (crb(c,2)) { goto L_8008AFA0; } // 8008AF30
  c->r[3]=c->r[5]|c->r[5]; // 8008AF34
  c->lr=0x8008AF3Cu; f_8008DE54(c); // 8008AF38
  goto L_8008AFA0; // 8008AF3C
L_8008AF40:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 8008AF40
  cmps(c,0,(int32_t)c->r[4],0); // 8008AF44
  if (!crb(c,2)) { goto L_8008AF74; } // 8008AF48
  c->r[4]=R32(c->r[5]+0x00000004u); // 8008AF4C
  c->r[0]=0u+0x00000000u; // 8008AF50
  W32(c->r[3]+0x00000010u,c->r[4]); // 8008AF54
  W32(c->r[4]+0x00000000u,c->r[0]); // 8008AF58
  W32(c->r[5]+0x00000000u,c->r[0]); // 8008AF5C
  W32(c->r[5]+0x00000004u,c->r[0]); // 8008AF60
  if (crb(c,6)) { goto L_8008AFA0; } // 8008AF64
  c->r[3]=c->r[5]|c->r[5]; // 8008AF68
  c->lr=0x8008AF70u; f_8008DE54(c); // 8008AF6C
  goto L_8008AFA0; // 8008AF70
L_8008AF74:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 8008AF74
  c->r[0]=0u+0x00000000u; // 8008AF78
  W32(c->r[3]+0x00000000u,c->r[4]); // 8008AF7C
  c->r[3]=R32(c->r[5]+0x00000000u); // 8008AF80
  c->r[4]=R32(c->r[5]+0x00000004u); // 8008AF84
  W32(c->r[3]+0x00000004u,c->r[4]); // 8008AF88
  W32(c->r[5]+0x00000000u,c->r[0]); // 8008AF8C
  W32(c->r[5]+0x00000004u,c->r[0]); // 8008AF90
  if (crb(c,6)) { goto L_8008AFA0; } // 8008AF94
  c->r[3]=c->r[5]|c->r[5]; // 8008AF98
  c->lr=0x8008AFA0u; f_8008DE54(c); // 8008AF9C
L_8008AFA0:;
  c->r[0]=R8(c->r[31]+0x00000065u); // 8008AFA0
  cmps(c,0,(int32_t)c->r[0],0); // 8008AFA4
  if (crb(c,2)) { goto L_8008AFC8; } // 8008AFA8
  c->r[0]=addc(c,c->r[31],0x00000060u,0); cr0(c,c->r[0]); // 8008AFAC
  if (crb(c,2)) { goto L_8008B000; } // 8008AFB0
  c->r[3]=R32(c->r[31]+0x00000060u); // 8008AFB4
  c->lr=0x8008AFBCu; f_8008DBB4(c); // 8008AFB8
  c->r[0]=0u+0x00000000u; // 8008AFBC
  W32(c->r[31]+0x00000060u,c->r[0]); // 8008AFC0
  goto L_8008B000; // 8008AFC4
L_8008AFC8:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 8008AFC8
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008AFCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008AFD0
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008AFD4
  c->lr=0x8008AFDCu; f_8008DBB4(c); // 8008AFD8
  c->r[3]=R32(c->r[31]+0x00000060u); // 8008AFDC
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008AFE0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008AFE4
  c->lr=0x8008AFECu; f_8008DE54(c); // 8008AFE8
  c->r[3]=R32(c->r[31]+0x00000060u); // 8008AFEC
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008AFF0
  c->lr=0x8008AFF8u; f_8008DE54(c); // 8008AFF4
  c->r[3]=R32(c->r[31]+0x00000060u); // 8008AFF8
  c->lr=0x8008B000u; f_8008DE54(c); // 8008AFFC
L_8008B000:;
  c->r[3]=R32(c->r[31]+0x00000044u); // 8008B000
  c->lr=0x8008B008u; f_8008DE54(c); // 8008B004
  cmps(c,0,(int32_t)c->r[31],0); // 8008B008
  c->r[0]=0u+0x00000000u; // 8008B00C
  W32(c->r[31]+0x00000044u,c->r[0]); // 8008B010
  if (crb(c,2)) { goto L_8008B030; } // 8008B014
  c->r[12]=R32(c->r[31]+0x00000000u); // 8008B018
  c->r[3]=c->r[31]|c->r[31]; // 8008B01C
  c->r[4]=0u+0x00000001u; // 8008B020
  c->r[12]=R32(c->r[12]+0x00000008u); // 8008B024
  c->ctr=c->r[12]; // 8008B028
  if (true) { c->lr=0x8008B030u; dispatch(c,c->ctr); } // 8008B02C
L_8008B030:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008B030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008B034
  c->lr=c->r[0]; // 8008B038
  c->r[1]=c->r[1]+0x00000010u; // 8008B03C
  return; // 8008B040
}

// Generic_Swizzle__FPUciiiiiiPUc
void f_8008B044(Ctx* __restrict c) {
  trace_call(0x8008B044u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008B044
  c->r[0]=c->lr; // 8008B048
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008B04C
  c->r[0]=0u+0x00000001u; // 8008B050
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8008B054
  c->r[29]=sraw(c,c->r[4],(c->r[6])&63); // 8008B058
  c->r[25]=c->r[3]|c->r[3]; // 8008B05C
  c->r[22]=c->r[8]|c->r[8]; // 8008B060
  c->r[23]=c->r[9]|c->r[9]; // 8008B064
  c->r[24]=c->r[10]|c->r[10]; // 8008B068
  c->r[28]=sraw(c,c->r[5],(c->r[7])&63); // 8008B06C
  c->r[27]=((c->r[7])&0x20)?0u:(c->r[9]<<((c->r[7])&31)); // 8008B070
  c->r[30]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 8008B074
  c->r[26]=0u+0x00000000u; // 8008B078
  c->r[31]=0u+0x80000000u; // 8008B07C
  goto L_8008B1A0; // 8008B080
L_8008B084:;
  c->r[3]=c->r[24]|c->r[24]; // 8008B084
  c->r[4]=c->r[25]|c->r[25]; // 8008B088
  c->r[5]=c->r[27]|c->r[27]; // 8008B08C
  c->lr=0x8008B094u; f_80004338(c); // 8008B090
  c->r[3]=0u+0x00000000u; // 8008B094
  c->r[0]=0u+0x00000000u; // 8008B098
  goto L_8008B194; // 8008B09C
L_8008B0A0:;
  c->r[6]=c->r[24]+c->r[0]; // 8008B0A0
  c->r[4]=0u+0x00000000u; // 8008B0A4
  goto L_8008B184; // 8008B0A8
L_8008B0AC:;
  cmps(c,1,(int32_t)c->r[22],0); // 8008B0AC
  c->r[5]=0u+0x00000000u; // 8008B0B0
  if (!crb(c,5)) { goto L_8008B178; } // 8008B0B4
  cmps(c,0,(int32_t)c->r[22],8); // 8008B0B8
  c->r[8]=c->r[22]+0xFFFFFFF8u; // 8008B0BC
  if (!crb(c,1)) { goto L_8008B148; } // 8008B0C0
  c->r[9]=0u+0x00000000u; // 8008B0C4
  if (crb(c,4)) { goto L_8008B0DC; } // 8008B0C8
  c->r[7]=c->r[31]+0xFFFFFFFEu; // 8008B0CC
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[7]); // 8008B0D0
  if (crb(c,1)) { goto L_8008B0DC; } // 8008B0D4
  c->r[9]=0u+0x00000001u; // 8008B0D8
L_8008B0DC:;
  cmps(c,0,(int32_t)c->r[9],0); // 8008B0DC
  if (crb(c,2)) { goto L_8008B148; } // 8008B0E0
  c->r[7]=c->r[8]+0x00000007u; // 8008B0E4
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 8008B0E8
  c->ctr=c->r[7]; // 8008B0EC
  cmps(c,0,(int32_t)c->r[8],0); // 8008B0F0
  if (!crb(c,1)) { goto L_8008B148; } // 8008B0F4
L_8008B0F8:;
  c->r[7]=R8(c->r[6]+c->r[5]); // 8008B0F8
  c->r[8]=c->r[6]+c->r[5]; // 8008B0FC
  W8(c->r[25]+c->r[5],c->r[7]); // 8008B100
  c->r[9]=c->r[25]+c->r[5]; // 8008B104
  c->r[5]=c->r[5]+0x00000008u; // 8008B108
  c->r[7]=R8(c->r[8]+0x00000001u); // 8008B10C
  W8(c->r[9]+0x00000001u,c->r[7]); // 8008B110
  c->r[7]=R8(c->r[8]+0x00000002u); // 8008B114
  W8(c->r[9]+0x00000002u,c->r[7]); // 8008B118
  c->r[7]=R8(c->r[8]+0x00000003u); // 8008B11C
  W8(c->r[9]+0x00000003u,c->r[7]); // 8008B120
  c->r[7]=R8(c->r[8]+0x00000004u); // 8008B124
  W8(c->r[9]+0x00000004u,c->r[7]); // 8008B128
  c->r[7]=R8(c->r[8]+0x00000005u); // 8008B12C
  W8(c->r[9]+0x00000005u,c->r[7]); // 8008B130
  c->r[7]=R8(c->r[8]+0x00000006u); // 8008B134
  W8(c->r[9]+0x00000006u,c->r[7]); // 8008B138
  c->r[7]=R8(c->r[8]+0x00000007u); // 8008B13C
  W8(c->r[9]+0x00000007u,c->r[7]); // 8008B140
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8008B0F8; } // 8008B144
L_8008B148:;
  c->r[7]=c->r[22]-c->r[5]; // 8008B148
  c->r[9]=c->r[6]+c->r[5]; // 8008B14C
  c->r[8]=c->r[25]+c->r[5]; // 8008B150
  c->ctr=c->r[7]; // 8008B154
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[22]); // 8008B158
  if (!crb(c,0)) { goto L_8008B178; } // 8008B15C
L_8008B160:;
  c->r[7]=R8(c->r[9]+0x00000000u); // 8008B160
  c->r[9]=c->r[9]+0x00000001u; // 8008B164
  W8(c->r[8]+0x00000000u,c->r[7]); // 8008B168
  c->r[8]=c->r[8]+0x00000001u; // 8008B16C
  c->r[5]=c->r[5]+0x00000001u; // 8008B170
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8008B160; } // 8008B174
L_8008B178:;
  c->r[25]=c->r[25]+c->r[22]; // 8008B178
  c->r[6]=c->r[6]+c->r[23]; // 8008B17C
  c->r[4]=c->r[4]+0x00000001u; // 8008B180
L_8008B184:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[30]); // 8008B184
  if (crb(c,0)) { IRQCHK(c); goto L_8008B0AC; } // 8008B188
  c->r[0]=c->r[0]+c->r[22]; // 8008B18C
  c->r[3]=c->r[3]+0x00000001u; // 8008B190
L_8008B194:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[29]); // 8008B194
  if (crb(c,0)) { IRQCHK(c); goto L_8008B0A0; } // 8008B198
  c->r[26]=c->r[26]+0x00000001u; // 8008B19C
L_8008B1A0:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[28]); // 8008B1A0
  if (crb(c,0)) { IRQCHK(c); goto L_8008B084; } // 8008B1A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8008B1A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008B1AC
  c->lr=c->r[0]; // 8008B1B0
  c->r[1]=c->r[1]+0x00000030u; // 8008B1B4
  return; // 8008B1B8
}

// Generic_UnSwizzle__FPUciiiiiiPUc
void f_8008B1BC(Ctx* __restrict c) {
  trace_call(0x8008B1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008B1BC
  c->r[0]=c->lr; // 8008B1C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008B1C4
  c->r[0]=0u+0x00000001u; // 8008B1C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8008B1CC
  c->r[29]=sraw(c,c->r[4],(c->r[6])&63); // 8008B1D0
  c->r[25]=c->r[3]|c->r[3]; // 8008B1D4
  c->r[22]=c->r[8]|c->r[8]; // 8008B1D8
  c->r[23]=c->r[9]|c->r[9]; // 8008B1DC
  c->r[24]=c->r[10]|c->r[10]; // 8008B1E0
  c->r[28]=sraw(c,c->r[5],(c->r[7])&63); // 8008B1E4
  c->r[27]=((c->r[7])&0x20)?0u:(c->r[9]<<((c->r[7])&31)); // 8008B1E8
  c->r[30]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 8008B1EC
  c->r[26]=0u+0x00000000u; // 8008B1F0
  c->r[31]=0u+0x80000000u; // 8008B1F4
  goto L_8008B318; // 8008B1F8
L_8008B1FC:;
  c->r[3]=c->r[25]|c->r[25]; // 8008B1FC
  c->r[4]=0u+0x00000000u; // 8008B200
  c->r[0]=0u+0x00000000u; // 8008B204
  goto L_8008B300; // 8008B208
L_8008B20C:;
  c->r[7]=c->r[24]+c->r[0]; // 8008B20C
  c->r[5]=0u+0x00000000u; // 8008B210
  goto L_8008B2F0; // 8008B214
L_8008B218:;
  cmps(c,1,(int32_t)c->r[22],0); // 8008B218
  c->r[6]=0u+0x00000000u; // 8008B21C
  if (!crb(c,5)) { goto L_8008B2E4; } // 8008B220
  cmps(c,0,(int32_t)c->r[22],8); // 8008B224
  c->r[9]=c->r[22]+0xFFFFFFF8u; // 8008B228
  if (!crb(c,1)) { goto L_8008B2B4; } // 8008B22C
  c->r[10]=0u+0x00000000u; // 8008B230
  if (crb(c,4)) { goto L_8008B248; } // 8008B234
  c->r[8]=c->r[31]+0xFFFFFFFEu; // 8008B238
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[8]); // 8008B23C
  if (crb(c,1)) { goto L_8008B248; } // 8008B240
  c->r[10]=0u+0x00000001u; // 8008B244
L_8008B248:;
  cmps(c,0,(int32_t)c->r[10],0); // 8008B248
  if (crb(c,2)) { goto L_8008B2B4; } // 8008B24C
  c->r[8]=c->r[9]+0x00000007u; // 8008B250
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 8008B254
  c->ctr=c->r[8]; // 8008B258
  cmps(c,0,(int32_t)c->r[9],0); // 8008B25C
  if (!crb(c,1)) { goto L_8008B2B4; } // 8008B260
L_8008B264:;
  c->r[8]=R8(c->r[25]+c->r[6]); // 8008B264
  c->r[9]=c->r[25]+c->r[6]; // 8008B268
  W8(c->r[7]+c->r[6],c->r[8]); // 8008B26C
  c->r[10]=c->r[7]+c->r[6]; // 8008B270
  c->r[6]=c->r[6]+0x00000008u; // 8008B274
  c->r[8]=R8(c->r[9]+0x00000001u); // 8008B278
  W8(c->r[10]+0x00000001u,c->r[8]); // 8008B27C
  c->r[8]=R8(c->r[9]+0x00000002u); // 8008B280
  W8(c->r[10]+0x00000002u,c->r[8]); // 8008B284
  c->r[8]=R8(c->r[9]+0x00000003u); // 8008B288
  W8(c->r[10]+0x00000003u,c->r[8]); // 8008B28C
  c->r[8]=R8(c->r[9]+0x00000004u); // 8008B290
  W8(c->r[10]+0x00000004u,c->r[8]); // 8008B294
  c->r[8]=R8(c->r[9]+0x00000005u); // 8008B298
  W8(c->r[10]+0x00000005u,c->r[8]); // 8008B29C
  c->r[8]=R8(c->r[9]+0x00000006u); // 8008B2A0
  W8(c->r[10]+0x00000006u,c->r[8]); // 8008B2A4
  c->r[8]=R8(c->r[9]+0x00000007u); // 8008B2A8
  W8(c->r[10]+0x00000007u,c->r[8]); // 8008B2AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8008B264; } // 8008B2B0
L_8008B2B4:;
  c->r[8]=c->r[22]-c->r[6]; // 8008B2B4
  c->r[10]=c->r[25]+c->r[6]; // 8008B2B8
  c->r[9]=c->r[7]+c->r[6]; // 8008B2BC
  c->ctr=c->r[8]; // 8008B2C0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[22]); // 8008B2C4
  if (!crb(c,0)) { goto L_8008B2E4; } // 8008B2C8
L_8008B2CC:;
  c->r[8]=R8(c->r[10]+0x00000000u); // 8008B2CC
  c->r[10]=c->r[10]+0x00000001u; // 8008B2D0
  W8(c->r[9]+0x00000000u,c->r[8]); // 8008B2D4
  c->r[9]=c->r[9]+0x00000001u; // 8008B2D8
  c->r[6]=c->r[6]+0x00000001u; // 8008B2DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8008B2CC; } // 8008B2E0
L_8008B2E4:;
  c->r[7]=c->r[7]+c->r[23]; // 8008B2E4
  c->r[25]=c->r[25]+c->r[22]; // 8008B2E8
  c->r[5]=c->r[5]+0x00000001u; // 8008B2EC
L_8008B2F0:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[30]); // 8008B2F0
  if (crb(c,0)) { IRQCHK(c); goto L_8008B218; } // 8008B2F4
  c->r[0]=c->r[0]+c->r[22]; // 8008B2F8
  c->r[4]=c->r[4]+0x00000001u; // 8008B2FC
L_8008B300:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[29]); // 8008B300
  if (crb(c,0)) { IRQCHK(c); goto L_8008B20C; } // 8008B304
  c->r[4]=c->r[24]|c->r[24]; // 8008B308
  c->r[5]=c->r[27]|c->r[27]; // 8008B30C
  c->lr=0x8008B314u; f_80004338(c); // 8008B310
  c->r[26]=c->r[26]+0x00000001u; // 8008B314
L_8008B318:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[28]); // 8008B318
  if (crb(c,0)) { IRQCHK(c); goto L_8008B1FC; } // 8008B31C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8008B320
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008B324
  c->lr=c->r[0]; // 8008B328
  c->r[1]=c->r[1]+0x00000030u; // 8008B32C
  return; // 8008B330
}

// SwizzleTexture__14WiiImageHandleFPUciii
void f_8008B334(Ctx* __restrict c) {
  trace_call(0x8008B334u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008B334
  c->r[0]=c->lr; // 8008B338
  c->r[3]=0u+0x00004000u; // 8008B33C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8008B340
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=21;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8008B344
  c->r[22]=c->r[4]|c->r[4]; // 8008B348
  c->r[21]=c->r[5]|c->r[5]; // 8008B34C
  c->r[23]=c->r[6]|c->r[6]; // 8008B350
  c->r[24]=c->r[7]|c->r[7]; // 8008B354
  c->lr=0x8008B35Cu; f_8008DAF8(c); // 8008B358
  cmpu(c,0,c->r[21],0x00000009u); // 8008B35C
  c->r[31]=c->r[3]|c->r[3]; // 8008B360
  if (crb(c,1)) { goto L_8008B5AC; } // 8008B364
  c->r[3]=0u+0x80260000u; // 8008B368
  c->r[0]=rotl(c->r[21],2)&0xFFFFFFFCu; // 8008B36C
  c->r[3]=c->r[3]+0x000045C0u; // 8008B370
  c->r[3]=R32(c->r[3]+c->r[0]); // 8008B374
  c->ctr=c->r[3]; // 8008B378
  if (true) { switch (c->ctr) { case 0x8008B380u: goto L_8008B380; case 0x8008B3C0u: goto L_8008B3C0; case 0x8008B3F4u: goto L_8008B3F4; case 0x8008B42Cu: goto L_8008B42C; case 0x8008B5ACu: goto L_8008B5AC; default: break; } dispatch(c,c->ctr); return; } // 8008B37C
L_8008B380:;
  c->r[0]=rotl(c->r[23],1)&0x00000001u; // 8008B380
  c->r[3]=c->r[22]|c->r[22]; // 8008B384
  c->r[0]=c->r[0]+c->r[23]; // 8008B388
  c->r[4]=c->r[23]|c->r[23]; // 8008B38C
  c->r[5]=c->r[24]|c->r[24]; // 8008B390
  c->r[10]=c->r[31]|c->r[31]; // 8008B394
  c->r[9]=sraw(c,c->r[0],1); // 8008B398
  c->r[6]=0u+0x00000003u; // 8008B39C
  c->r[7]=0u+0x00000003u; // 8008B3A0
  c->r[8]=0u+0x00000004u; // 8008B3A4
  c->lr=0x8008B3ACu; f_8008B044(c); // 8008B3A8
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[24]); // 8008B3AC
  c->r[3]=c->r[22]|c->r[22]; // 8008B3B0
  c->r[4]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8008B3B4
  c->lr=0x8008B3BCu; f_800ABD2C(c); // 8008B3B8
  goto L_8008B5AC; // 8008B3BC
L_8008B3C0:;
  c->r[3]=c->r[22]|c->r[22]; // 8008B3C0
  c->r[4]=c->r[23]|c->r[23]; // 8008B3C4
  c->r[5]=c->r[24]|c->r[24]; // 8008B3C8
  c->r[9]=c->r[23]|c->r[23]; // 8008B3CC
  c->r[10]=c->r[31]|c->r[31]; // 8008B3D0
  c->r[6]=0u+0x00000003u; // 8008B3D4
  c->r[7]=0u+0x00000002u; // 8008B3D8
  c->r[8]=0u+0x00000008u; // 8008B3DC
  c->lr=0x8008B3E4u; f_8008B044(c); // 8008B3E0
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[24]); // 8008B3E4
  c->r[3]=c->r[22]|c->r[22]; // 8008B3E8
  c->lr=0x8008B3F0u; f_800ABD2C(c); // 8008B3EC
  goto L_8008B5AC; // 8008B3F0
L_8008B3F4:;
  c->r[3]=c->r[22]|c->r[22]; // 8008B3F4
  c->r[4]=c->r[23]|c->r[23]; // 8008B3F8
  c->r[5]=c->r[24]|c->r[24]; // 8008B3FC
  c->r[10]=c->r[31]|c->r[31]; // 8008B400
  c->r[9]=rotl(c->r[23],1)&0xFFFFFFFEu; // 8008B404
  c->r[6]=0u+0x00000002u; // 8008B408
  c->r[7]=0u+0x00000002u; // 8008B40C
  c->r[8]=0u+0x00000008u; // 8008B410
  c->lr=0x8008B418u; f_8008B044(c); // 8008B414
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[24]); // 8008B418
  c->r[3]=c->r[22]|c->r[22]; // 8008B41C
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8008B420
  c->lr=0x8008B428u; f_800ABD2C(c); // 8008B424
  goto L_8008B5AC; // 8008B428
L_8008B42C:;
  c->r[30]=sraw(c,c->r[23],2); // 8008B42C
  c->r[25]=c->r[22]|c->r[22]; // 8008B430
  c->r[26]=rotl(c->r[23],2)&0xFFFFFFFCu; // 8008B434
  c->r[29]=sraw(c,c->r[24],2); // 8008B438
  c->r[27]=rotl(c->r[23],4)&0xFFFFFFF0u; // 8008B43C
  c->r[28]=0u+0x00000000u; // 8008B440
  c->r[21]=0u+0x00000002u; // 8008B444
  goto L_8008B594; // 8008B448
L_8008B44C:;
  c->r[3]=c->r[31]|c->r[31]; // 8008B44C
  c->r[4]=c->r[25]|c->r[25]; // 8008B450
  c->r[5]=c->r[27]|c->r[27]; // 8008B454
  c->lr=0x8008B45Cu; f_80004338(c); // 8008B458
  c->r[4]=0u+0x00000000u; // 8008B45C
  c->r[3]=0u+0x00000000u; // 8008B460
  goto L_8008B588; // 8008B464
L_8008B468:;
  c->r[5]=c->r[31]+c->r[3]; // 8008B468
  c->ctr=c->r[21]; // 8008B46C
L_8008B470:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 8008B470
  W8(c->r[25]+0x00000000u,c->r[0]); // 8008B474
  c->r[0]=R8(c->r[5]+0x00000001u); // 8008B478
  W8(c->r[25]+0x00000001u,c->r[0]); // 8008B47C
  c->r[0]=R8(c->r[5]+0x00000002u); // 8008B480
  W8(c->r[25]+0x00000020u,c->r[0]); // 8008B484
  c->r[0]=R8(c->r[5]+0x00000003u); // 8008B488
  W8(c->r[25]+0x00000021u,c->r[0]); // 8008B48C
  c->r[0]=R8(c->r[5]+0x00000004u); // 8008B490
  W8(c->r[25]+0x00000002u,c->r[0]); // 8008B494
  c->r[0]=R8(c->r[5]+0x00000005u); // 8008B498
  W8(c->r[25]+0x00000003u,c->r[0]); // 8008B49C
  c->r[0]=R8(c->r[5]+0x00000006u); // 8008B4A0
  W8(c->r[25]+0x00000022u,c->r[0]); // 8008B4A4
  c->r[0]=R8(c->r[5]+0x00000007u); // 8008B4A8
  W8(c->r[25]+0x00000023u,c->r[0]); // 8008B4AC
  c->r[0]=R8(c->r[5]+0x00000008u); // 8008B4B0
  W8(c->r[25]+0x00000004u,c->r[0]); // 8008B4B4
  c->r[0]=R8(c->r[5]+0x00000009u); // 8008B4B8
  W8(c->r[25]+0x00000005u,c->r[0]); // 8008B4BC
  c->r[0]=R8(c->r[5]+0x0000000Au); // 8008B4C0
  W8(c->r[25]+0x00000024u,c->r[0]); // 8008B4C4
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 8008B4C8
  W8(c->r[25]+0x00000025u,c->r[0]); // 8008B4CC
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 8008B4D0
  W8(c->r[25]+0x00000006u,c->r[0]); // 8008B4D4
  c->r[0]=R8(c->r[5]+0x0000000Du); // 8008B4D8
  W8(c->r[25]+0x00000007u,c->r[0]); // 8008B4DC
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 8008B4E0
  W8(c->r[25]+0x00000026u,c->r[0]); // 8008B4E4
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 8008B4E8
  W8(c->r[25]+0x00000027u,c->r[0]); // 8008B4EC
  {uint32_t ea=c->r[5]+c->r[26]; c->r[0]=R8(ea); c->r[5]=ea;} // 8008B4F0
  W8(c->r[25]+0x00000008u,c->r[0]); // 8008B4F4
  c->r[0]=R8(c->r[5]+0x00000001u); // 8008B4F8
  W8(c->r[25]+0x00000009u,c->r[0]); // 8008B4FC
  c->r[0]=R8(c->r[5]+0x00000002u); // 8008B500
  W8(c->r[25]+0x00000028u,c->r[0]); // 8008B504
  c->r[0]=R8(c->r[5]+0x00000003u); // 8008B508
  W8(c->r[25]+0x00000029u,c->r[0]); // 8008B50C
  c->r[0]=R8(c->r[5]+0x00000004u); // 8008B510
  W8(c->r[25]+0x0000000Au,c->r[0]); // 8008B514
  c->r[0]=R8(c->r[5]+0x00000005u); // 8008B518
  W8(c->r[25]+0x0000000Bu,c->r[0]); // 8008B51C
  c->r[0]=R8(c->r[5]+0x00000006u); // 8008B520
  W8(c->r[25]+0x0000002Au,c->r[0]); // 8008B524
  c->r[0]=R8(c->r[5]+0x00000007u); // 8008B528
  W8(c->r[25]+0x0000002Bu,c->r[0]); // 8008B52C
  c->r[0]=R8(c->r[5]+0x00000008u); // 8008B530
  W8(c->r[25]+0x0000000Cu,c->r[0]); // 8008B534
  c->r[0]=R8(c->r[5]+0x00000009u); // 8008B538
  W8(c->r[25]+0x0000000Du,c->r[0]); // 8008B53C
  c->r[0]=R8(c->r[5]+0x0000000Au); // 8008B540
  W8(c->r[25]+0x0000002Cu,c->r[0]); // 8008B544
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 8008B548
  W8(c->r[25]+0x0000002Du,c->r[0]); // 8008B54C
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 8008B550
  W8(c->r[25]+0x0000000Eu,c->r[0]); // 8008B554
  c->r[0]=R8(c->r[5]+0x0000000Du); // 8008B558
  W8(c->r[25]+0x0000000Fu,c->r[0]); // 8008B55C
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 8008B560
  W8(c->r[25]+0x0000002Eu,c->r[0]); // 8008B564
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 8008B568
  c->r[5]=c->r[5]+c->r[26]; // 8008B56C
  W8(c->r[25]+0x0000002Fu,c->r[0]); // 8008B570
  c->r[25]=c->r[25]+0x00000010u; // 8008B574
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8008B470; } // 8008B578
  c->r[25]=c->r[25]+0x00000020u; // 8008B57C
  c->r[3]=c->r[3]+0x00000010u; // 8008B580
  c->r[4]=c->r[4]+0x00000001u; // 8008B584
L_8008B588:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[30]); // 8008B588
  if (crb(c,0)) { IRQCHK(c); goto L_8008B468; } // 8008B58C
  c->r[28]=c->r[28]+0x00000001u; // 8008B590
L_8008B594:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[29]); // 8008B594
  if (crb(c,0)) { IRQCHK(c); goto L_8008B44C; } // 8008B598
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[24]); // 8008B59C
  c->r[3]=c->r[22]|c->r[22]; // 8008B5A0
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8008B5A4
  c->lr=0x8008B5ACu; f_800ABD2C(c); // 8008B5A8
L_8008B5AC:;
  c->r[3]=c->r[31]|c->r[31]; // 8008B5AC
  c->lr=0x8008B5B4u; f_8008DB30(c); // 8008B5B0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=21;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8008B5B4
  c->r[3]=0u+0x00000001u; // 8008B5B8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8008B5BC
  c->lr=c->r[0]; // 8008B5C0
  c->r[1]=c->r[1]+0x00000040u; // 8008B5C4
  return; // 8008B5C8
}

// UnSwizzleTexture__14WiiImageHandleFPUciii
void f_8008B5CC(Ctx* __restrict c) {
  trace_call(0x8008B5CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008B5CC
  c->r[0]=c->lr; // 8008B5D0
  c->r[3]=0u+0x00004000u; // 8008B5D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8008B5D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=21;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8008B5DC
  c->r[22]=c->r[4]|c->r[4]; // 8008B5E0
  c->r[21]=c->r[5]|c->r[5]; // 8008B5E4
  c->r[23]=c->r[6]|c->r[6]; // 8008B5E8
  c->r[24]=c->r[7]|c->r[7]; // 8008B5EC
  c->lr=0x8008B5F4u; f_8008DAF8(c); // 8008B5F0
  cmpu(c,0,c->r[21],0x00000009u); // 8008B5F4
  c->r[31]=c->r[3]|c->r[3]; // 8008B5F8
  if (crb(c,1)) { goto L_8008B84C; } // 8008B5FC
  c->r[3]=0u+0x80260000u; // 8008B600
  c->r[0]=rotl(c->r[21],2)&0xFFFFFFFCu; // 8008B604
  c->r[3]=c->r[3]+0x000045E8u; // 8008B608
  c->r[3]=R32(c->r[3]+c->r[0]); // 8008B60C
  c->ctr=c->r[3]; // 8008B610
  if (true) { switch (c->ctr) { case 0x8008B618u: goto L_8008B618; case 0x8008B660u: goto L_8008B660; case 0x8008B694u: goto L_8008B694; case 0x8008B6CCu: goto L_8008B6CC; case 0x8008B84Cu: goto L_8008B84C; default: break; } dispatch(c,c->ctr); return; } // 8008B614
L_8008B618:;
  c->r[0]=rotl(c->r[23],1)&0x00000001u; // 8008B618
  c->r[3]=c->r[22]|c->r[22]; // 8008B61C
  c->r[0]=c->r[0]+c->r[23]; // 8008B620
  c->r[4]=c->r[23]|c->r[23]; // 8008B624
  c->r[5]=c->r[24]|c->r[24]; // 8008B628
  c->r[10]=c->r[31]|c->r[31]; // 8008B62C
  c->r[9]=sraw(c,c->r[0],1); // 8008B630
  c->r[6]=0u+0x00000003u; // 8008B634
  c->r[7]=0u+0x00000003u; // 8008B638
  c->r[8]=0u+0x00000004u; // 8008B63C
  c->lr=0x8008B644u; f_8008B1BC(c); // 8008B640
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[24]); // 8008B644
  c->r[3]=c->r[22]|c->r[22]; // 8008B648
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8008B64C
  c->r[0]=c->r[0]+c->r[4]; // 8008B650
  c->r[4]=sraw(c,c->r[0],1); // 8008B654
  c->lr=0x8008B65Cu; f_800ABD2C(c); // 8008B658
  goto L_8008B84C; // 8008B65C
L_8008B660:;
  c->r[3]=c->r[22]|c->r[22]; // 8008B660
  c->r[4]=c->r[23]|c->r[23]; // 8008B664
  c->r[5]=c->r[24]|c->r[24]; // 8008B668
  c->r[9]=c->r[23]|c->r[23]; // 8008B66C
  c->r[10]=c->r[31]|c->r[31]; // 8008B670
  c->r[6]=0u+0x00000003u; // 8008B674
  c->r[7]=0u+0x00000002u; // 8008B678
  c->r[8]=0u+0x00000008u; // 8008B67C
  c->lr=0x8008B684u; f_8008B1BC(c); // 8008B680
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[24]); // 8008B684
  c->r[3]=c->r[22]|c->r[22]; // 8008B688
  c->lr=0x8008B690u; f_800ABD2C(c); // 8008B68C
  goto L_8008B84C; // 8008B690
L_8008B694:;
  c->r[3]=c->r[22]|c->r[22]; // 8008B694
  c->r[4]=c->r[23]|c->r[23]; // 8008B698
  c->r[5]=c->r[24]|c->r[24]; // 8008B69C
  c->r[10]=c->r[31]|c->r[31]; // 8008B6A0
  c->r[9]=rotl(c->r[23],1)&0xFFFFFFFEu; // 8008B6A4
  c->r[6]=0u+0x00000002u; // 8008B6A8
  c->r[7]=0u+0x00000002u; // 8008B6AC
  c->r[8]=0u+0x00000008u; // 8008B6B0
  c->lr=0x8008B6B8u; f_8008B1BC(c); // 8008B6B4
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[24]); // 8008B6B8
  c->r[3]=c->r[22]|c->r[22]; // 8008B6BC
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8008B6C0
  c->lr=0x8008B6C8u; f_800ABD2C(c); // 8008B6C4
  goto L_8008B84C; // 8008B6C8
L_8008B6CC:;
  c->r[30]=sraw(c,c->r[23],2); // 8008B6CC
  c->r[25]=c->r[22]|c->r[22]; // 8008B6D0
  c->r[26]=rotl(c->r[23],2)&0xFFFFFFFCu; // 8008B6D4
  c->r[29]=sraw(c,c->r[24],2); // 8008B6D8
  c->r[27]=rotl(c->r[23],4)&0xFFFFFFF0u; // 8008B6DC
  c->r[28]=0u+0x00000000u; // 8008B6E0
  c->r[21]=0u+0x00000002u; // 8008B6E4
  goto L_8008B834; // 8008B6E8
L_8008B6EC:;
  c->r[3]=c->r[25]|c->r[25]; // 8008B6EC
  c->r[5]=0u+0x00000000u; // 8008B6F0
  c->r[4]=0u+0x00000000u; // 8008B6F4
  goto L_8008B81C; // 8008B6F8
L_8008B6FC:;
  c->r[6]=c->r[31]+c->r[4]; // 8008B6FC
  c->ctr=c->r[21]; // 8008B700
L_8008B704:;
  c->r[0]=R8(c->r[25]+0x00000000u); // 8008B704
  W8(c->r[6]+0x00000000u,c->r[0]); // 8008B708
  c->r[0]=R8(c->r[25]+0x00000001u); // 8008B70C
  W8(c->r[6]+0x00000001u,c->r[0]); // 8008B710
  c->r[0]=R8(c->r[25]+0x00000020u); // 8008B714
  W8(c->r[6]+0x00000002u,c->r[0]); // 8008B718
  c->r[0]=R8(c->r[25]+0x00000021u); // 8008B71C
  W8(c->r[6]+0x00000003u,c->r[0]); // 8008B720
  c->r[0]=R8(c->r[25]+0x00000002u); // 8008B724
  W8(c->r[6]+0x00000004u,c->r[0]); // 8008B728
  c->r[0]=R8(c->r[25]+0x00000003u); // 8008B72C
  W8(c->r[6]+0x00000005u,c->r[0]); // 8008B730
  c->r[0]=R8(c->r[25]+0x00000022u); // 8008B734
  W8(c->r[6]+0x00000006u,c->r[0]); // 8008B738
  c->r[0]=R8(c->r[25]+0x00000023u); // 8008B73C
  W8(c->r[6]+0x00000007u,c->r[0]); // 8008B740
  c->r[0]=R8(c->r[25]+0x00000004u); // 8008B744
  W8(c->r[6]+0x00000008u,c->r[0]); // 8008B748
  c->r[0]=R8(c->r[25]+0x00000005u); // 8008B74C
  W8(c->r[6]+0x00000009u,c->r[0]); // 8008B750
  c->r[0]=R8(c->r[25]+0x00000024u); // 8008B754
  W8(c->r[6]+0x0000000Au,c->r[0]); // 8008B758
  c->r[0]=R8(c->r[25]+0x00000025u); // 8008B75C
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 8008B760
  c->r[0]=R8(c->r[25]+0x00000006u); // 8008B764
  W8(c->r[6]+0x0000000Cu,c->r[0]); // 8008B768
  c->r[0]=R8(c->r[25]+0x00000007u); // 8008B76C
  W8(c->r[6]+0x0000000Du,c->r[0]); // 8008B770
  c->r[0]=R8(c->r[25]+0x00000026u); // 8008B774
  W8(c->r[6]+0x0000000Eu,c->r[0]); // 8008B778
  c->r[0]=R8(c->r[25]+0x00000027u); // 8008B77C
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 8008B780
  c->r[0]=R8(c->r[25]+0x00000008u); // 8008B784
  {uint32_t ea=c->r[6]+c->r[26]; W8(ea,c->r[0]); c->r[6]=ea;} // 8008B788
  c->r[0]=R8(c->r[25]+0x00000009u); // 8008B78C
  W8(c->r[6]+0x00000001u,c->r[0]); // 8008B790
  c->r[0]=R8(c->r[25]+0x00000028u); // 8008B794
  W8(c->r[6]+0x00000002u,c->r[0]); // 8008B798
  c->r[0]=R8(c->r[25]+0x00000029u); // 8008B79C
  W8(c->r[6]+0x00000003u,c->r[0]); // 8008B7A0
  c->r[0]=R8(c->r[25]+0x0000000Au); // 8008B7A4
  W8(c->r[6]+0x00000004u,c->r[0]); // 8008B7A8
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 8008B7AC
  W8(c->r[6]+0x00000005u,c->r[0]); // 8008B7B0
  c->r[0]=R8(c->r[25]+0x0000002Au); // 8008B7B4
  W8(c->r[6]+0x00000006u,c->r[0]); // 8008B7B8
  c->r[0]=R8(c->r[25]+0x0000002Bu); // 8008B7BC
  W8(c->r[6]+0x00000007u,c->r[0]); // 8008B7C0
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 8008B7C4
  W8(c->r[6]+0x00000008u,c->r[0]); // 8008B7C8
  c->r[0]=R8(c->r[25]+0x0000000Du); // 8008B7CC
  W8(c->r[6]+0x00000009u,c->r[0]); // 8008B7D0
  c->r[0]=R8(c->r[25]+0x0000002Cu); // 8008B7D4
  W8(c->r[6]+0x0000000Au,c->r[0]); // 8008B7D8
  c->r[0]=R8(c->r[25]+0x0000002Du); // 8008B7DC
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 8008B7E0
  c->r[0]=R8(c->r[25]+0x0000000Eu); // 8008B7E4
  W8(c->r[6]+0x0000000Cu,c->r[0]); // 8008B7E8
  c->r[0]=R8(c->r[25]+0x0000000Fu); // 8008B7EC
  W8(c->r[6]+0x0000000Du,c->r[0]); // 8008B7F0
  c->r[0]=R8(c->r[25]+0x0000002Eu); // 8008B7F4
  W8(c->r[6]+0x0000000Eu,c->r[0]); // 8008B7F8
  c->r[0]=R8(c->r[25]+0x0000002Fu); // 8008B7FC
  c->r[25]=c->r[25]+0x00000010u; // 8008B800
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 8008B804
  c->r[6]=c->r[6]+c->r[26]; // 8008B808
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8008B704; } // 8008B80C
  c->r[25]=c->r[25]+0x00000020u; // 8008B810
  c->r[4]=c->r[4]+0x00000010u; // 8008B814
  c->r[5]=c->r[5]+0x00000001u; // 8008B818
L_8008B81C:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[30]); // 8008B81C
  if (crb(c,0)) { IRQCHK(c); goto L_8008B6FC; } // 8008B820
  c->r[4]=c->r[31]|c->r[31]; // 8008B824
  c->r[5]=c->r[27]|c->r[27]; // 8008B828
  c->lr=0x8008B830u; f_80004338(c); // 8008B82C
  c->r[28]=c->r[28]+0x00000001u; // 8008B830
L_8008B834:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[29]); // 8008B834
  if (crb(c,0)) { IRQCHK(c); goto L_8008B6EC; } // 8008B838
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[24]); // 8008B83C
  c->r[3]=c->r[22]|c->r[22]; // 8008B840
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8008B844
  c->lr=0x8008B84Cu; f_800ABD2C(c); // 8008B848
L_8008B84C:;
  c->r[3]=c->r[31]|c->r[31]; // 8008B84C
  c->lr=0x8008B854u; f_8008DB30(c); // 8008B850
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=21;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8008B854
  c->r[3]=0u+0x00000001u; // 8008B858
  c->r[0]=R32(c->r[1]+0x00000044u); // 8008B85C
  c->lr=c->r[0]; // 8008B860
  c->r[1]=c->r[1]+0x00000040u; // 8008B864
  return; // 8008B868
}

// Create__9WiiSpriteFPciii
void f_8008B86C(Ctx* __restrict c) {
  trace_call(0x8008B86Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008B86C
  c->r[0]=c->lr; // 8008B870
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008B874
  c->r[11]=c->r[1]+0x00000020u; // 8008B878
  c->lr=0x8008B880u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8008B87C
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008B880
  c->r[27]=c->r[3]|c->r[3]; // 8008B884
  c->r[28]=c->r[4]|c->r[4]; // 8008B888
  c->r[29]=c->r[5]|c->r[5]; // 8008B88C
  cmps(c,0,(int32_t)c->r[0],0); // 8008B890
  c->r[30]=c->r[6]|c->r[6]; // 8008B894
  c->r[31]=c->r[7]|c->r[7]; // 8008B898
  if (!crb(c,2)) { goto L_8008B8A8; } // 8008B89C
  c->lr=0x8008B8A4u; f_800838DC(c); // 8008B8A0
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008B8A4
L_8008B8A8:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008B8A8
  c->r[4]=c->r[28]|c->r[28]; // 8008B8AC
  c->r[5]=c->r[29]|c->r[29]; // 8008B8B0
  c->r[6]=c->r[30]|c->r[30]; // 8008B8B4
  c->r[7]=c->r[31]|c->r[31]; // 8008B8B8
  c->lr=0x8008B8C0u; f_8008A79C(c); // 8008B8BC
  W32(c->r[27]+0x00000004u,c->r[3]); // 8008B8C0
  c->r[0]=0u+0x00000000u; // 8008B8C4
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008B8C8
  c->r[4]=0u+0x00000001u; // 8008B8CC
  W8(c->r[3]+0x00000058u,c->r[0]); // 8008B8D0
  c->r[3]=R32(c->r[27]+0x00000004u); // 8008B8D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008B8D8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8008B8DC
  c->ctr=c->r[12]; // 8008B8E0
  if (true) { c->lr=0x8008B8E8u; dispatch(c,c->ctr); } // 8008B8E4
  c->r[3]=R32(c->r[27]+0x00000004u); // 8008B8E8
  c->r[4]=0u+0x00000002u; // 8008B8EC
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008B8F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008B8F4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8008B8F8
  c->ctr=c->r[12]; // 8008B8FC
  if (true) { c->lr=0x8008B904u; dispatch(c,c->ctr); } // 8008B900
  c->r[11]=c->r[1]+0x00000020u; // 8008B904
  c->lr=0x8008B90Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008B908
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008B90C
  c->lr=c->r[0]; // 8008B910
  c->r[1]=c->r[1]+0x00000020u; // 8008B914
  return; // 8008B918
}

// CreateFromFile__9WiiSpriteFPc
void f_8008B91C(Ctx* __restrict c) {
  trace_call(0x8008B91Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008B91C
  c->r[0]=c->lr; // 8008B920
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008B924
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008B928
  c->r[31]=c->r[4]|c->r[4]; // 8008B92C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008B930
  c->r[30]=c->r[3]|c->r[3]; // 8008B934
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008B938
  cmps(c,0,(int32_t)c->r[0],0); // 8008B93C
  if (!crb(c,2)) { goto L_8008B94C; } // 8008B940
  c->lr=0x8008B948u; f_800838DC(c); // 8008B944
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008B948
L_8008B94C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008B94C
  c->r[4]=c->r[31]|c->r[31]; // 8008B950
  c->r[5]=0u+0x00000000u; // 8008B954
  c->lr=0x8008B95Cu; f_8008AB08(c); // 8008B958
  W32(c->r[30]+0x00000004u,c->r[3]); // 8008B95C
  c->r[0]=0u+0x00000000u; // 8008B960
  W8(c->r[3]+0x00000058u,c->r[0]); // 8008B964
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008B968
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008B96C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008B970
  c->lr=c->r[0]; // 8008B974
  c->r[1]=c->r[1]+0x00000010u; // 8008B978
  return; // 8008B97C
}

// Free__9WiiSpriteFv
void f_8008B980(Ctx* __restrict c) {
  trace_call(0x8008B980u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008B980
  c->r[0]=c->lr; // 8008B984
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008B988
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008B98C
  c->r[31]=c->r[3]|c->r[3]; // 8008B990
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008B994
  cmps(c,0,(int32_t)c->r[0],0); // 8008B998
  if (!crb(c,2)) { goto L_8008B9A8; } // 8008B99C
  c->lr=0x8008B9A4u; f_800838DC(c); // 8008B9A0
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008B9A4
L_8008B9A8:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008B9A8
  c->r[4]=R32(c->r[31]+0x00000004u); // 8008B9AC
  c->lr=0x8008B9B4u; f_8008AE88(c); // 8008B9B0
  c->r[0]=0u+0x00000000u; // 8008B9B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 8008B9B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008B9BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008B9C0
  c->lr=c->r[0]; // 8008B9C4
  c->r[1]=c->r[1]+0x00000010u; // 8008B9C8
  return; // 8008B9CC
}

// Draw__9WiiSpriteFii6Screen
void f_8008B9D0(Ctx* __restrict c) {
  trace_call(0x8008B9D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008B9D0
  c->r[0]=c->lr; // 8008B9D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8008B9D8
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8008B9DC
  c->r[30]=0u+0x00000000u; // 8008B9E0
  c->r[26]=c->r[3]|c->r[3]; // 8008B9E4
  c->r[27]=c->r[4]|c->r[4]; // 8008B9E8
  c->r[28]=c->r[5]|c->r[5]; // 8008B9EC
  c->r[29]=c->r[6]|c->r[6]; // 8008B9F0
  W32(c->r[1]+0x00000024u,c->r[30]); // 8008B9F4
  W32(c->r[1]+0x00000020u,c->r[30]); // 8008B9F8
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 8008B9FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8008BA00
  W32(c->r[1]+0x00000014u,c->r[30]); // 8008BA04
  W32(c->r[1]+0x00000010u,c->r[30]); // 8008BA08
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8008BA0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008BA10
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BA14
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8008BA18
  c->ctr=c->r[12]; // 8008BA1C
  if (true) { c->lr=0x8008BA24u; dispatch(c,c->ctr); } // 8008BA20
  c->r[12]=R32(c->r[26]+0x00000000u); // 8008BA24
  c->r[31]=c->r[3]|c->r[3]; // 8008BA28
  c->r[3]=c->r[26]|c->r[26]; // 8008BA2C
  c->r[12]=R32(c->r[12]+0x00000028u); // 8008BA30
  c->ctr=c->r[12]; // 8008BA34
  if (true) { c->lr=0x8008BA3Cu; dispatch(c,c->ctr); } // 8008BA38
  W32(c->r[1]+0x00000020u,c->r[3]); // 8008BA3C
  c->r[3]=c->r[26]|c->r[26]; // 8008BA40
  W32(c->r[1]+0x00000018u,c->r[27]); // 8008BA44
  W32(c->r[1]+0x0000001Cu,c->r[28]); // 8008BA48
  W32(c->r[1]+0x00000024u,c->r[31]); // 8008BA4C
  c->r[12]=R32(c->r[26]+0x00000000u); // 8008BA50
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8008BA54
  c->ctr=c->r[12]; // 8008BA58
  if (true) { c->lr=0x8008BA60u; dispatch(c,c->ctr); } // 8008BA5C
  c->r[12]=R32(c->r[26]+0x00000000u); // 8008BA60
  c->r[31]=c->r[3]|c->r[3]; // 8008BA64
  c->r[3]=c->r[26]|c->r[26]; // 8008BA68
  c->r[12]=R32(c->r[12]+0x00000028u); // 8008BA6C
  c->ctr=c->r[12]; // 8008BA70
  if (true) { c->lr=0x8008BA78u; dispatch(c,c->ctr); } // 8008BA74
  W32(c->r[1]+0x00000010u,c->r[3]); // 8008BA78
  c->r[3]=c->r[26]|c->r[26]; // 8008BA7C
  c->r[6]=c->r[29]|c->r[29]; // 8008BA80
  c->r[4]=c->r[1]+0x00000018u; // 8008BA84
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008BA88
  c->r[5]=c->r[1]+0x00000008u; // 8008BA8C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8008BA90
  W32(c->r[1]+0x00000014u,c->r[31]); // 8008BA94
  c->r[12]=R32(c->r[26]+0x00000000u); // 8008BA98
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008BA9C
  c->ctr=c->r[12]; // 8008BAA0
  if (true) { c->lr=0x8008BAA8u; dispatch(c,c->ctr); } // 8008BAA4
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8008BAA8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8008BAAC
  c->lr=c->r[0]; // 8008BAB0
  c->r[1]=c->r[1]+0x00000040u; // 8008BAB4
  return; // 8008BAB8
}

// Draw__9WiiSpriteFR9ImageRect6Screen
void f_8008BABC(Ctx* __restrict c) {
  trace_call(0x8008BABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008BABC
  c->r[0]=c->lr; // 8008BAC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008BAC4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8008BAC8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8008BACC
  c->r[30]=c->r[5]|c->r[5]; // 8008BAD0
  W32(c->r[1]+0x00000024u,c->r[29]); // 8008BAD4
  c->r[29]=c->r[4]|c->r[4]; // 8008BAD8
  W32(c->r[1]+0x00000020u,c->r[28]); // 8008BADC
  c->r[28]=c->r[3]|c->r[3]; // 8008BAE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BAE4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8008BAE8
  c->ctr=c->r[12]; // 8008BAEC
  if (true) { c->lr=0x8008BAF4u; dispatch(c,c->ctr); } // 8008BAF0
  c->r[12]=R32(c->r[28]+0x00000000u); // 8008BAF4
  c->r[31]=c->r[3]|c->r[3]; // 8008BAF8
  c->r[3]=c->r[28]|c->r[28]; // 8008BAFC
  c->r[12]=R32(c->r[12]+0x00000028u); // 8008BB00
  c->ctr=c->r[12]; // 8008BB04
  if (true) { c->lr=0x8008BB0Cu; dispatch(c,c->ctr); } // 8008BB08
  c->r[0]=0u+0x00000000u; // 8008BB0C
  W32(c->r[1]+0x00000010u,c->r[3]); // 8008BB10
  c->r[3]=c->r[28]|c->r[28]; // 8008BB14
  c->r[4]=c->r[29]|c->r[29]; // 8008BB18
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008BB1C
  c->r[6]=c->r[30]|c->r[30]; // 8008BB20
  c->r[5]=c->r[1]+0x00000008u; // 8008BB24
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8008BB28
  W32(c->r[1]+0x00000014u,c->r[31]); // 8008BB2C
  c->r[12]=R32(c->r[28]+0x00000000u); // 8008BB30
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008BB34
  c->ctr=c->r[12]; // 8008BB38
  if (true) { c->lr=0x8008BB40u; dispatch(c,c->ctr); } // 8008BB3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008BB40
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8008BB44
  c->r[30]=R32(c->r[1]+0x00000028u); // 8008BB48
  c->r[29]=R32(c->r[1]+0x00000024u); // 8008BB4C
  c->r[28]=R32(c->r[1]+0x00000020u); // 8008BB50
  c->lr=c->r[0]; // 8008BB54
  c->r[1]=c->r[1]+0x00000030u; // 8008BB58
  return; // 8008BB5C
}

// Draw__9WiiSpriteFR9ImageRectR9ImageRect6Screen
void f_8008BB60(Ctx* __restrict c) {
  trace_call(0x8008BB60u);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008BB60
  c->r[0]=c->lr; // 8008BB64
  W32(c->r[1]+0x000001D4u,c->r[0]); // 8008BB68
  c->r[11]=c->r[1]+0x00000160u; // 8008BB6C
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[31]);} // 8008BB70
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,31,ea,0,0);} // 8008BB74
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[30]);} // 8008BB78
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,30,ea,0,0);} // 8008BB7C
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[29]);} // 8008BB80
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,29,ea,0,0);} // 8008BB84
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[28]);} // 8008BB88
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,28,ea,0,0);} // 8008BB8C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[27]);} // 8008BB90
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,27,ea,0,0);} // 8008BB94
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[26]);} // 8008BB98
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,26,ea,0,0);} // 8008BB9C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[25]);} // 8008BBA0
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,25,ea,0,0);} // 8008BBA4
  c->lr=0x8008BBACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8008BBA8
  {uint32_t ea=c->r[2]+0xFFFF8CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008BBAC
  c->r[10]=0u+0x00000000u; // 8008BBB0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8008BBB4
  c->r[12]=0u+0x43300000u; // 8008BBB8
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008BBBC
  c->r[11]=0u+0x000000FFu; // 8008BBC0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8008BBC4
  c->r[6]=0u+0x80260000u; // 8008BBC8
  c->r[9]=R32(c->r[1]+0x0000001Cu); // 8008BBCC
  c->r[30]=c->r[4]|c->r[4]; // 8008BBD0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8008BBD4
  c->r[31]=c->r[5]|c->r[5]; // 8008BBD8
  c->r[8]=R32(c->r[1]+0x00000020u); // 8008BBDC
  c->r[6]=c->r[6]+0x00004680u; // 8008BBE0
  W32(c->r[1]+0x00000010u,c->r[9]); // 8008BBE4
  c->r[0]=c->r[1]+0x00000008u; // 8008BBE8
  c->r[7]=R32(c->r[1]+0x00000024u); // 8008BBEC
  c->r[29]=c->r[3]|c->r[3]; // 8008BBF0
  W32(c->r[1]+0x00000014u,c->r[8]); // 8008BBF4
  {uint32_t ea=c->r[2]+0xFFFF8CC8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8008BBF8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008BBFC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008BC00
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 8008BC04
  W32(c->r[1]+0x00000018u,c->r[7]); // 8008BC08
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 8008BC0C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008BC10
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8008BC14
  W32(c->r[1]+0x000000E8u,c->r[10]); // 8008BC18
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 8008BC1C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8008BC20
  {uint32_t ea=c->r[1]+0x00000128u; WF64(ea,c->f[3]);} // 8008BC24
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8008BC28
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[2]);} // 8008BC2C
  c->r[7]=R32(c->r[1]+0x0000012Cu); // 8008BC30
  {uint32_t ea=c->r[1]+0x00000138u; WF64(ea,c->f[1]);} // 8008BC34
  c->r[5]=R32(c->r[1]+0x00000134u); // 8008BC38
  c->r[4]=R32(c->r[1]+0x0000013Cu); // 8008BC3C
  W32(c->r[1]+0x000000ECu,c->r[10]); // 8008BC40
  W32(c->r[1]+0x000000FCu,c->r[10]); // 8008BC44
  W32(c->r[1]+0x0000010Cu,c->r[10]); // 8008BC48
  W8(c->r[1]+0x000000F0u,c->r[7]); // 8008BC4C
  W8(c->r[1]+0x000000F1u,c->r[5]); // 8008BC50
  W8(c->r[1]+0x000000F2u,c->r[4]); // 8008BC54
  W8(c->r[1]+0x000000F3u,c->r[11]); // 8008BC58
  W8(c->r[1]+0x000000F4u,c->r[10]); // 8008BC5C
  W8(c->r[1]+0x000000F5u,c->r[10]); // 8008BC60
  W8(c->r[1]+0x000000F6u,c->r[10]); // 8008BC64
  W8(c->r[1]+0x000000F7u,c->r[10]); // 8008BC68
  W8(c->r[1]+0x000000F9u,c->r[10]); // 8008BC6C
  W32(c->r[1]+0x00000100u,c->r[10]); // 8008BC70
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 8008BC74
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8008BC78
  c->r[5]=R32(c->r[3]+0x00000004u); // 8008BC7C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8008BC80
  W32(c->r[1]+0x00000008u,c->r[6]); // 8008BC84
  c->r[4]=R32(c->r[5]+0x0000005Cu); // 8008BC88
  W32(c->r[1]+0x00000118u,c->r[12]); // 8008BC8C
  c->r[4]=c->r[4]+0x00000001u; // 8008BC90
  W32(c->r[5]+0x0000005Cu,c->r[4]); // 8008BC94
  W32(c->r[1]+0x000000E8u,c->r[0]); // 8008BC98
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008BC9C
  W32(c->r[1]+0x00000120u,c->r[12]); // 8008BCA0
  c->r[3]=R32(c->r[3]+0x00000060u); // 8008BCA4
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008BCA8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008BCAC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008BCB0
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 8008BCB4
  cmpu(c,0,c->r[0],0x00000001u); // 8008BCB8
  if (crb(c,1)) { goto L_8008BCCC; } // 8008BCBC
  c->r[0]=0u+0x00000001u; // 8008BCC0
  W8(c->r[1]+0x000000F6u,c->r[0]); // 8008BCC4
  W8(c->r[1]+0x000000F7u,c->r[0]); // 8008BCC8
L_8008BCCC:;
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008BCCC
  c->r[3]=c->r[1]+0x000000A8u; // 8008BCD0
  {uint32_t ea=c->r[2]+0xFFFF8CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008BCD4
  c->r[4]=0u+0x00000000u; // 8008BCD8
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 8008BCDC
  c->r[5]=0u+0x00000040u; // 8008BCE0
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[1]);} // 8008BCE4
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 8008BCE8
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8008BCEC
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 8008BCF0
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 8008BCF4
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8008BCF8
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8008BCFC
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[1]);} // 8008BD00
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 8008BD04
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 8008BD08
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 8008BD0C
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[1]);} // 8008BD10
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[1]);} // 8008BD14
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[1]);} // 8008BD18
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8008BD1C
  c->lr=0x8008BD24u; f_80004688(c); // 8008BD20
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008BD24
  c->r[3]=c->r[1]+0x00000068u; // 8008BD28
  {uint32_t ea=c->r[2]+0xFFFF8CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008BD2C
  c->r[4]=0u+0x00000000u; // 8008BD30
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 8008BD34
  c->r[5]=0u+0x00000040u; // 8008BD38
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 8008BD3C
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 8008BD40
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[1]);} // 8008BD44
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8008BD48
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8008BD4C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8008BD50
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 8008BD54
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8008BD58
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8008BD5C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 8008BD60
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 8008BD64
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 8008BD68
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 8008BD6C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 8008BD70
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 8008BD74
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8008BD78
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8008BD7C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8008BD80
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 8008BD84
  c->lr=0x8008BD8Cu; f_80004688(c); // 8008BD88
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BD8C
  {uint32_t ea=c->r[2]+0xFFFF8CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008BD90
  cmps(c,0,(int32_t)c->r[0],0); // 8008BD94
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8008BD98
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8008BD9C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 8008BDA0
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8008BDA4
  if (!crb(c,2)) { goto L_8008BDB4; } // 8008BDA8
  c->lr=0x8008BDB0u; f_800838DC(c); // 8008BDAC
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BDB0
L_8008BDB4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BDB4
  c->r[4]=c->r[1]+0x00000068u; // 8008BDB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BDBC
  c->r[12]=R32(c->r[12]+0x00000040u); // 8008BDC0
  c->ctr=c->r[12]; // 8008BDC4
  if (true) { c->lr=0x8008BDCCu; dispatch(c,c->ctr); } // 8008BDC8
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BDCC
  cmps(c,0,(int32_t)c->r[0],0); // 8008BDD0
  if (!crb(c,2)) { goto L_8008BDE0; } // 8008BDD4
  c->lr=0x8008BDDCu; f_800838DC(c); // 8008BDD8
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BDDC
L_8008BDE0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BDE0
  c->r[4]=c->r[1]+0x000000A8u; // 8008BDE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BDE8
  c->r[12]=R32(c->r[12]+0x00000044u); // 8008BDEC
  c->ctr=c->r[12]; // 8008BDF0
  if (true) { c->lr=0x8008BDF8u; dispatch(c,c->ctr); } // 8008BDF4
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008BDF8
  c->r[3]=c->r[1]+0x00000028u; // 8008BDFC
  {uint32_t ea=c->r[2]+0xFFFF8CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008BE00
  c->r[4]=0u+0x00000000u; // 8008BE04
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 8008BE08
  c->r[5]=0u+0x00000040u; // 8008BE0C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8008BE10
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8008BE14
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8008BE18
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8008BE1C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 8008BE20
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 8008BE24
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8008BE28
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8008BE2C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 8008BE30
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 8008BE34
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8008BE38
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 8008BE3C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8008BE40
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8008BE44
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8008BE48
  c->lr=0x8008BE50u; f_80004688(c); // 8008BE4C
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BE50
  {uint32_t ea=c->r[2]+0xFFFF8CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008BE54
  cmps(c,0,(int32_t)c->r[0],0); // 8008BE58
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8008BE5C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8008BE60
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8008BE64
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8008BE68
  if (!crb(c,2)) { goto L_8008BE78; } // 8008BE6C
  c->lr=0x8008BE74u; f_800838DC(c); // 8008BE70
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BE74
L_8008BE78:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BE78
  c->r[4]=c->r[1]+0x00000028u; // 8008BE7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BE80
  c->r[12]=R32(c->r[12]+0x00000038u); // 8008BE84
  c->ctr=c->r[12]; // 8008BE88
  if (true) { c->lr=0x8008BE90u; dispatch(c,c->ctr); } // 8008BE8C
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BE90
  cmps(c,0,(int32_t)c->r[0],0); // 8008BE94
  if (!crb(c,2)) { goto L_8008BEA4; } // 8008BE98
  c->lr=0x8008BEA0u; f_800838DC(c); // 8008BE9C
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BEA0
L_8008BEA4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BEA4
  c->r[4]=c->r[1]+0x00000028u; // 8008BEA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BEAC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8008BEB0
  c->ctr=c->r[12]; // 8008BEB4
  if (true) { c->lr=0x8008BEBCu; dispatch(c,c->ctr); } // 8008BEB8
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BEBC
  cmps(c,0,(int32_t)c->r[0],0); // 8008BEC0
  if (!crb(c,2)) { goto L_8008BED0; } // 8008BEC4
  c->lr=0x8008BECCu; f_800838DC(c); // 8008BEC8
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BECC
L_8008BED0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BED0
  c->r[4]=0u+0x00000001u; // 8008BED4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BED8
  c->r[12]=R32(c->r[12]+0x00000024u); // 8008BEDC
  c->ctr=c->r[12]; // 8008BEE0
  if (true) { c->lr=0x8008BEE8u; dispatch(c,c->ctr); } // 8008BEE4
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BEE8
  c->f[30]=c->f[1]; // 8008BEEC
  cmps(c,0,(int32_t)c->r[0],0); // 8008BEF0
  if (!crb(c,2)) { goto L_8008BF00; } // 8008BEF4
  c->lr=0x8008BEFCu; f_800838DC(c); // 8008BEF8
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BEFC
L_8008BF00:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BF00
  c->r[4]=0u+0x00000001u; // 8008BF04
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008BF08
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BF0C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008BF10
  c->ctr=c->r[12]; // 8008BF14
  if (true) { c->lr=0x8008BF1Cu; dispatch(c,c->ctr); } // 8008BF18
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BF1C
  cmps(c,0,(int32_t)c->r[0],0); // 8008BF20
  if (!crb(c,2)) { goto L_8008BF30; } // 8008BF24
  c->lr=0x8008BF2Cu; f_800838DC(c); // 8008BF28
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BF2C
L_8008BF30:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BF30
  c->r[4]=0u+0x00000000u; // 8008BF34
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BF38
  c->r[12]=R32(c->r[12]+0x00000024u); // 8008BF3C
  c->ctr=c->r[12]; // 8008BF40
  if (true) { c->lr=0x8008BF48u; dispatch(c,c->ctr); } // 8008BF44
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BF48
  c->f[29]=c->f[1]; // 8008BF4C
  cmps(c,0,(int32_t)c->r[0],0); // 8008BF50
  if (!crb(c,2)) { goto L_8008BF60; } // 8008BF54
  c->lr=0x8008BF5Cu; f_800838DC(c); // 8008BF58
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BF5C
L_8008BF60:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BF60
  c->r[4]=0u+0x00000000u; // 8008BF64
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008BF68
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BF6C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008BF70
  c->ctr=c->r[12]; // 8008BF74
  if (true) { c->lr=0x8008BF7Cu; dispatch(c,c->ctr); } // 8008BF78
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BF7C
  cmps(c,0,(int32_t)c->r[0],0); // 8008BF80
  if (!crb(c,2)) { goto L_8008BF90; } // 8008BF84
  c->lr=0x8008BF8Cu; f_800838DC(c); // 8008BF88
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BF8C
L_8008BF90:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BF90
  c->r[4]=0u+0x00000003u; // 8008BF94
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BF98
  c->r[12]=R32(c->r[12]+0x00000024u); // 8008BF9C
  c->ctr=c->r[12]; // 8008BFA0
  if (true) { c->lr=0x8008BFA8u; dispatch(c,c->ctr); } // 8008BFA4
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BFA8
  c->f[28]=c->f[1]; // 8008BFAC
  cmps(c,0,(int32_t)c->r[0],0); // 8008BFB0
  if (!crb(c,2)) { goto L_8008BFC0; } // 8008BFB4
  c->lr=0x8008BFBCu; f_800838DC(c); // 8008BFB8
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BFBC
L_8008BFC0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008BFC0
  c->r[4]=0u+0x00000003u; // 8008BFC4
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008BFC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008BFCC
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008BFD0
  c->ctr=c->r[12]; // 8008BFD4
  if (true) { c->lr=0x8008BFDCu; dispatch(c,c->ctr); } // 8008BFD8
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008BFDC
  cmps(c,0,(int32_t)c->r[0],0); // 8008BFE0
  if (!crb(c,2)) { goto L_8008BFF0; } // 8008BFE4
  c->lr=0x8008BFECu; f_800838DC(c); // 8008BFE8
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008BFEC
L_8008BFF0:;
  c->r[27]=R32(c->r[13]+0xFFFF8B08u); // 8008BFF0
  c->r[4]=R32(c->r[27]+0x00000008u); // 8008BFF4
  c->r[3]=c->r[27]|c->r[27]; // 8008BFF8
  c->r[0]=c->r[4]+0x00000001u; // 8008BFFC
  W32(c->r[27]+0x00000008u,c->r[0]); // 8008C000
  c->r[4]=R32(c->r[27]+0x00000004u); // 8008C004
  c->r[0]=c->r[4]+0x00000001u; // 8008C008
  W32(c->r[27]+0x00000004u,c->r[0]); // 8008C00C
  c->lr=0x8008C014u; f_800841D0(c); // 8008C010
  c->r[3]=c->r[27]|c->r[27]; // 8008C014
  c->r[5]=c->r[1]+0x000000E8u; // 8008C018
  c->r[4]=0u+0x00000005u; // 8008C01C
  c->lr=0x8008C024u; f_80084884(c); // 8008C020
  c->r[3]=c->r[27]|c->r[27]; // 8008C024
  c->r[4]=0u+0x00000005u; // 8008C028
  c->r[5]=0u+0x00000001u; // 8008C02C
  c->lr=0x8008C034u; f_800851EC(c); // 8008C030
  c->r[3]=0u+0x00000000u; // 8008C034
  c->r[4]=0u+0x00000007u; // 8008C038
  c->r[5]=0u+0x00000000u; // 8008C03C
  c->lr=0x8008C044u; f_800D31D4(c); // 8008C040
  c->r[3]=0u+0x00000080u; // 8008C044
  c->r[4]=0u+0x00000000u; // 8008C048
  c->r[5]=0u+0x00000004u; // 8008C04C
  c->lr=0x8008C054u; f_800CFE14(c); // 8008C050
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8008C054
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008C058
  fcmp(c,0,c->f[31],c->f[1]); // 8008C05C
  if (crb(c,2)) { goto L_8008C124; } // 8008C060
  c->r[4]=R32(c->r[30]+0x00000008u); // 8008C064
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8008C068
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8008C06C
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[3]=RF64(ea);} // 8008C070
  c->r[4]=c->r[0]+c->r[4]; // 8008C074
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8008C078
  c->r[28]=sraw(c,c->r[4],1); // 8008C07C
  c->r[0]=c->r[0]+c->r[3]; // 8008C080
  c->r[27]=sraw(c,c->r[0],1); // 8008C084
  c->r[3]=0u-c->r[28]; // 8008C088
  c->r[0]=0u-c->r[27]; // 8008C08C
  c->r[3]=c->r[3]^0x80000000u; // 8008C090
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C094
  c->r[0]=c->r[0]^0x80000000u; // 8008C098
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C09C
  {uint32_t ea=c->r[1]+0x00000118u; c->f[2]=RF64(ea);} // 8008C0A0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C0A4
  c->f[25]=c->ps1[25]=S(c->f[2]-c->f[3]); // 8008C0A8
  c->f[26]=c->ps1[26]=S(c->f[0]-c->f[3]); // 8008C0AC
  c->lr=0x8008C0B4u; f_800E3DC0(c); // 8008C0B0
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C0B4
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8008C0B8
  c->f[1]=c->f[0]; // 8008C0BC
  c->lr=0x8008C0C4u; f_800E38B8(c); // 8008C0C0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8008C0C4
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008C0C8
  c->f[0]=c->ps1[0]=S(c->f[26]*c->f[27]); // 8008C0CC
  c->f[31]=c->ps1[31]=S(std::fma(c->f[25],c->f[2],-c->f[0])); // 8008C0D0
  c->lr=0x8008C0D8u; f_800E38B8(c); // 8008C0D4
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C0D8
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8008C0DC
  c->f[1]=c->f[0]; // 8008C0E0
  c->lr=0x8008C0E8u; f_800E3DC0(c); // 8008C0E4
  c->r[0]=c->r[28]^0x80000000u; // 8008C0E8
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C0EC
  c->r[0]=c->r[27]^0x80000000u; // 8008C0F0
  c->f[4]=c->ps1[4]=S(c->f[1]); // 8008C0F4
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C0F8
  c->f[3]=c->ps1[3]=S(c->f[26]*c->f[27]); // 8008C0FC
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C100
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C104
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C108
  c->f[3]=c->ps1[3]=S(std::fma(c->f[25],c->f[4],c->f[3])); // 8008C10C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C110
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C114
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 8008C118
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 8008C11C
  goto L_8008C128; // 8008C120
L_8008C124:;
  c->f[3]=c->f[31]; // 8008C124
L_8008C128:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8008C128
  c->r[28]=0u+0xCC010000u; // 8008C12C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8008C130
  c->r[0]=c->r[0]^0x80000000u; // 8008C134
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C138
  c->r[0]=c->r[3]^0x80000000u; // 8008C13C
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C140
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C144
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C148
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C14C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C150
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C154
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 8008C158
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8008C15C
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C160
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008C164
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C168
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C16C
  c->r[5]=R8(c->r[29]+0x0000000Bu); // 8008C170
  c->r[4]=R8(c->r[29]+0x0000000Au); // 8008C174
  c->r[3]=R8(c->r[29]+0x00000009u); // 8008C178
  c->r[0]=R8(c->r[29]+0x00000008u); // 8008C17C
  W8(c->r[28]+0xFFFF8000u,c->r[0]); // 8008C180
  W8(c->r[28]+0xFFFF8000u,c->r[3]); // 8008C184
  W8(c->r[28]+0xFFFF8000u,c->r[4]); // 8008C188
  W8(c->r[28]+0xFFFF8000u,c->r[5]); // 8008C18C
  c->r[3]=R32(c->r[29]+0x00000004u); // 8008C190
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C194
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008C198
  c->ctr=c->r[12]; // 8008C19C
  if (true) { c->lr=0x8008C1A4u; dispatch(c,c->ctr); } // 8008C1A0
  c->r[0]=R32(c->r[31]+0x00000004u); // 8008C1A4
  c->r[3]=c->r[3]^0x80000000u; // 8008C1A8
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C1AC
  c->r[0]=c->r[0]^0x80000000u; // 8008C1B0
  c->r[3]=R32(c->r[29]+0x00000004u); // 8008C1B4
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C1B8
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C1BC
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C1C0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C1C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C1C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C1CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C1D0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8008C1D4
  c->f[31]=c->ps1[31]=S(c->f[0]/c->f[1]); // 8008C1D8
  c->ctr=c->r[12]; // 8008C1DC
  if (true) { c->lr=0x8008C1E4u; dispatch(c,c->ctr); } // 8008C1E0
  c->r[0]=R32(c->r[31]+0x00000000u); // 8008C1E4
  c->r[3]=c->r[3]^0x80000000u; // 8008C1E8
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C1EC
  c->r[0]=c->r[0]^0x80000000u; // 8008C1F0
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[3]=RF64(ea);} // 8008C1F4
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C1F8
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C1FC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C200
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8008C204
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[4]=c->ps1[4]=RF32(ea);} // 8008C208
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8008C20C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8008C210
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C214
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[31]);} // 8008C218
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008C21C
  fcmp(c,0,c->f[4],c->f[1]); // 8008C220
  if (crb(c,2)) { goto L_8008C2E4; } // 8008C224
  c->r[5]=R32(c->r[30]+0x00000008u); // 8008C228
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8008C22C
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 8008C230
  c->r[4]=c->r[0]+c->r[5]; // 8008C234
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8008C238
  c->r[27]=sraw(c,c->r[4],1); // 8008C23C
  c->r[0]=c->r[0]+c->r[3]; // 8008C240
  c->r[28]=sraw(c,c->r[0],1); // 8008C244
  c->r[3]=c->r[5]-c->r[27]; // 8008C248
  c->r[0]=0u-c->r[28]; // 8008C24C
  c->r[3]=c->r[3]^0x80000000u; // 8008C250
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C254
  c->r[0]=c->r[0]^0x80000000u; // 8008C258
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C25C
  {uint32_t ea=c->r[1]+0x00000118u; c->f[2]=RF64(ea);} // 8008C260
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C264
  c->f[26]=c->ps1[26]=S(c->f[2]-c->f[3]); // 8008C268
  c->f[25]=c->ps1[25]=S(c->f[0]-c->f[3]); // 8008C26C
  c->lr=0x8008C274u; f_800E3DC0(c); // 8008C270
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C274
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8008C278
  c->f[1]=c->f[0]; // 8008C27C
  c->lr=0x8008C284u; f_800E38B8(c); // 8008C280
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8008C284
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008C288
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[27]); // 8008C28C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[26],c->f[2],-c->f[0])); // 8008C290
  c->lr=0x8008C298u; f_800E38B8(c); // 8008C294
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C298
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8008C29C
  c->f[1]=c->f[0]; // 8008C2A0
  c->lr=0x8008C2A8u; f_800E3DC0(c); // 8008C2A4
  c->r[0]=c->r[27]^0x80000000u; // 8008C2A8
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C2AC
  c->r[0]=c->r[28]^0x80000000u; // 8008C2B0
  c->f[4]=c->ps1[4]=S(c->f[1]); // 8008C2B4
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C2B8
  c->f[3]=c->ps1[3]=S(c->f[25]*c->f[27]); // 8008C2BC
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C2C0
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C2C4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C2C8
  c->f[4]=c->ps1[4]=S(std::fma(c->f[26],c->f[4],c->f[3])); // 8008C2CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C2D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C2D4
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 8008C2D8
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 8008C2DC
  goto L_8008C2F8; // 8008C2E0
L_8008C2E4:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8008C2E4
  c->r[0]=c->r[0]^0x80000000u; // 8008C2E8
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C2EC
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8008C2F0
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[3]); // 8008C2F4
L_8008C2F8:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8008C2F8
  c->r[28]=0u+0xCC010000u; // 8008C2FC
  c->r[3]=R32(c->r[30]+0x00000004u); // 8008C300
  c->r[0]=c->r[0]^0x80000000u; // 8008C304
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C308
  c->r[0]=c->r[3]^0x80000000u; // 8008C30C
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C310
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C314
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8008C318
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 8008C31C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C320
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C324
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 8008C328
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 8008C32C
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C330
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008C334
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C338
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C33C
  c->r[5]=R8(c->r[29]+0x0000000Bu); // 8008C340
  c->r[4]=R8(c->r[29]+0x0000000Au); // 8008C344
  c->r[3]=R8(c->r[29]+0x00000009u); // 8008C348
  c->r[0]=R8(c->r[29]+0x00000008u); // 8008C34C
  W8(c->r[28]+0xFFFF8000u,c->r[0]); // 8008C350
  W8(c->r[28]+0xFFFF8000u,c->r[3]); // 8008C354
  W8(c->r[28]+0xFFFF8000u,c->r[4]); // 8008C358
  W8(c->r[28]+0xFFFF8000u,c->r[5]); // 8008C35C
  c->r[3]=R32(c->r[29]+0x00000004u); // 8008C360
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C364
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008C368
  c->ctr=c->r[12]; // 8008C36C
  if (true) { c->lr=0x8008C374u; dispatch(c,c->ctr); } // 8008C370
  c->r[0]=R32(c->r[31]+0x00000004u); // 8008C374
  c->r[3]=c->r[3]^0x80000000u; // 8008C378
  W32(c->r[1]+0x00000124u,c->r[3]); // 8008C37C
  c->r[0]=c->r[0]^0x80000000u; // 8008C380
  c->r[3]=R32(c->r[29]+0x00000004u); // 8008C384
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C388
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C38C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 8008C390
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8008C394
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C398
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C39C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C3A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8008C3A4
  c->f[31]=c->ps1[31]=S(c->f[0]/c->f[1]); // 8008C3A8
  c->ctr=c->r[12]; // 8008C3AC
  if (true) { c->lr=0x8008C3B4u; dispatch(c,c->ctr); } // 8008C3B0
  c->r[0]=R32(c->r[31]+0x00000008u); // 8008C3B4
  c->r[3]=c->r[3]^0x80000000u; // 8008C3B8
  W32(c->r[1]+0x00000124u,c->r[3]); // 8008C3BC
  c->r[3]=c->r[0]^0x80000000u; // 8008C3C0
  c->r[0]=R32(c->r[31]+0x00000000u); // 8008C3C4
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C3C8
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[4]=RF64(ea);} // 8008C3CC
  c->r[0]=c->r[0]^0x80000000u; // 8008C3D0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 8008C3D4
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8008C3D8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 8008C3DC
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C3E0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 8008C3E4
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C3E8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 8008C3EC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[3]); // 8008C3F0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 8008C3F4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8008C3F8
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008C3FC
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[31]);} // 8008C400
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008C404
  fcmp(c,0,c->f[0],c->f[1]); // 8008C408
  if (crb(c,2)) { goto L_8008C4CC; } // 8008C40C
  c->r[4]=R32(c->r[30]+0x00000008u); // 8008C410
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 8008C414
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8008C418
  c->r[3]=c->r[0]+c->r[4]; // 8008C41C
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 8008C420
  c->r[27]=sraw(c,c->r[3],1); // 8008C424
  c->r[0]=c->r[0]+c->r[5]; // 8008C428
  c->r[28]=sraw(c,c->r[0],1); // 8008C42C
  c->r[3]=c->r[4]-c->r[27]; // 8008C430
  c->r[0]=c->r[5]-c->r[28]; // 8008C434
  c->r[3]=c->r[3]^0x80000000u; // 8008C438
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C43C
  c->r[0]=c->r[0]^0x80000000u; // 8008C440
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C444
  {uint32_t ea=c->r[1]+0x00000118u; c->f[2]=RF64(ea);} // 8008C448
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C44C
  c->f[26]=c->ps1[26]=S(c->f[2]-c->f[4]); // 8008C450
  c->f[25]=c->ps1[25]=S(c->f[0]-c->f[4]); // 8008C454
  c->lr=0x8008C45Cu; f_800E3DC0(c); // 8008C458
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C45C
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8008C460
  c->f[1]=c->f[0]; // 8008C464
  c->lr=0x8008C46Cu; f_800E38B8(c); // 8008C468
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8008C46C
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008C470
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[27]); // 8008C474
  c->f[31]=c->ps1[31]=S(std::fma(c->f[26],c->f[2],-c->f[0])); // 8008C478
  c->lr=0x8008C480u; f_800E38B8(c); // 8008C47C
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C480
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8008C484
  c->f[1]=c->f[0]; // 8008C488
  c->lr=0x8008C490u; f_800E3DC0(c); // 8008C48C
  c->r[0]=c->r[27]^0x80000000u; // 8008C490
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C494
  c->r[0]=c->r[28]^0x80000000u; // 8008C498
  c->f[4]=c->ps1[4]=S(c->f[1]); // 8008C49C
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C4A0
  c->f[3]=c->ps1[3]=S(c->f[25]*c->f[27]); // 8008C4A4
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C4A8
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C4AC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C4B0
  c->f[3]=c->ps1[3]=S(std::fma(c->f[26],c->f[4],c->f[3])); // 8008C4B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C4B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C4BC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 8008C4C0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 8008C4C4
  goto L_8008C4F4; // 8008C4C8
L_8008C4CC:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 8008C4CC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8008C4D0
  c->r[3]=c->r[3]^0x80000000u; // 8008C4D4
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C4D8
  c->r[0]=c->r[0]^0x80000000u; // 8008C4DC
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C4E0
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C4E4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C4E8
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[4]); // 8008C4EC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8008C4F0
L_8008C4F4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8008C4F4
  c->r[28]=0u+0xCC010000u; // 8008C4F8
  c->r[3]=R32(c->r[30]+0x00000004u); // 8008C4FC
  c->r[0]=c->r[0]^0x80000000u; // 8008C500
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C504
  c->r[0]=c->r[3]^0x80000000u; // 8008C508
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C50C
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C510
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C514
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C518
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C51C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C520
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 8008C524
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8008C528
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C52C
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008C530
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C534
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C538
  c->r[5]=R8(c->r[29]+0x0000000Bu); // 8008C53C
  c->r[4]=R8(c->r[29]+0x0000000Au); // 8008C540
  c->r[3]=R8(c->r[29]+0x00000009u); // 8008C544
  c->r[0]=R8(c->r[29]+0x00000008u); // 8008C548
  W8(c->r[28]+0xFFFF8000u,c->r[0]); // 8008C54C
  W8(c->r[28]+0xFFFF8000u,c->r[3]); // 8008C550
  W8(c->r[28]+0xFFFF8000u,c->r[4]); // 8008C554
  W8(c->r[28]+0xFFFF8000u,c->r[5]); // 8008C558
  c->r[3]=R32(c->r[29]+0x00000004u); // 8008C55C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C560
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008C564
  c->ctr=c->r[12]; // 8008C568
  if (true) { c->lr=0x8008C570u; dispatch(c,c->ctr); } // 8008C56C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8008C570
  c->r[3]=c->r[3]^0x80000000u; // 8008C574
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C578
  c->r[3]=c->r[0]^0x80000000u; // 8008C57C
  c->r[0]=R32(c->r[31]+0x00000004u); // 8008C580
  W32(c->r[1]+0x00000124u,c->r[3]); // 8008C584
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[3]=RF64(ea);} // 8008C588
  c->r[0]=c->r[0]^0x80000000u; // 8008C58C
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C590
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C594
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 8008C598
  c->r[3]=R32(c->r[29]+0x00000004u); // 8008C59C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8008C5A0
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C5A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C5A8
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8008C5AC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8008C5B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8008C5B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8008C5B8
  c->f[27]=c->ps1[27]=S(c->f[0]+c->f[1]); // 8008C5BC
  c->ctr=c->r[12]; // 8008C5C0
  if (true) { c->lr=0x8008C5C8u; dispatch(c,c->ctr); } // 8008C5C4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8008C5C8
  c->r[3]=c->r[3]^0x80000000u; // 8008C5CC
  W32(c->r[1]+0x00000124u,c->r[3]); // 8008C5D0
  c->r[3]=c->r[0]^0x80000000u; // 8008C5D4
  c->r[0]=R32(c->r[31]+0x00000000u); // 8008C5D8
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C5DC
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[3]=RF64(ea);} // 8008C5E0
  c->r[0]=c->r[0]^0x80000000u; // 8008C5E4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 8008C5E8
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8008C5EC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 8008C5F0
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C5F4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8008C5F8
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8008C5FC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C600
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8008C604
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8008C608
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8008C60C
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C610
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[27]);} // 8008C614
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008C618
  fcmp(c,0,c->f[31],c->f[1]); // 8008C61C
  if (crb(c,2)) { goto L_8008C6E0; } // 8008C620
  c->r[3]=R32(c->r[30]+0x00000008u); // 8008C624
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 8008C628
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8008C62C
  c->r[3]=c->r[0]+c->r[3]; // 8008C630
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8008C634
  c->r[27]=sraw(c,c->r[3],1); // 8008C638
  c->r[0]=c->r[0]+c->r[4]; // 8008C63C
  c->r[28]=sraw(c,c->r[0],1); // 8008C640
  c->r[3]=0u-c->r[27]; // 8008C644
  c->r[0]=c->r[4]-c->r[28]; // 8008C648
  c->r[3]=c->r[3]^0x80000000u; // 8008C64C
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C650
  c->r[0]=c->r[0]^0x80000000u; // 8008C654
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C658
  {uint32_t ea=c->r[1]+0x00000118u; c->f[2]=RF64(ea);} // 8008C65C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C660
  c->f[26]=c->ps1[26]=S(c->f[2]-c->f[3]); // 8008C664
  c->f[25]=c->ps1[25]=S(c->f[0]-c->f[3]); // 8008C668
  c->lr=0x8008C670u; f_800E3DC0(c); // 8008C66C
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C670
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8008C674
  c->f[1]=c->f[0]; // 8008C678
  c->lr=0x8008C680u; f_800E38B8(c); // 8008C67C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8008C680
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008C684
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[27]); // 8008C688
  c->f[31]=c->ps1[31]=S(std::fma(c->f[26],c->f[2],-c->f[0])); // 8008C68C
  c->lr=0x8008C694u; f_800E38B8(c); // 8008C690
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C694
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8008C698
  c->f[1]=c->f[0]; // 8008C69C
  c->lr=0x8008C6A4u; f_800E3DC0(c); // 8008C6A0
  c->r[0]=c->r[27]^0x80000000u; // 8008C6A4
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C6A8
  c->r[0]=c->r[28]^0x80000000u; // 8008C6AC
  c->f[4]=c->ps1[4]=S(c->f[1]); // 8008C6B0
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C6B4
  c->f[3]=c->ps1[3]=S(c->f[25]*c->f[27]); // 8008C6B8
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C6BC
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C6C0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C6C4
  c->f[3]=c->ps1[3]=S(std::fma(c->f[26],c->f[4],c->f[3])); // 8008C6C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C6CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C6D0
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 8008C6D4
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 8008C6D8
  goto L_8008C6F4; // 8008C6DC
L_8008C6E0:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8008C6E0
  c->r[0]=c->r[0]^0x80000000u; // 8008C6E4
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C6E8
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8008C6EC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 8008C6F0
L_8008C6F4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8008C6F4
  c->r[28]=0u+0xCC010000u; // 8008C6F8
  c->r[3]=R32(c->r[30]+0x00000004u); // 8008C6FC
  c->r[0]=c->r[0]^0x80000000u; // 8008C700
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 8008C704
  c->r[0]=c->r[3]^0x80000000u; // 8008C708
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C70C
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C710
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8008C714
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 8008C718
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C71C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C720
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 8008C724
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8008C728
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C72C
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8008C730
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008C734
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C738
  c->r[5]=R8(c->r[29]+0x0000000Bu); // 8008C73C
  c->r[4]=R8(c->r[29]+0x0000000Au); // 8008C740
  c->r[3]=R8(c->r[29]+0x00000009u); // 8008C744
  c->r[0]=R8(c->r[29]+0x00000008u); // 8008C748
  W8(c->r[28]+0xFFFF8000u,c->r[0]); // 8008C74C
  W8(c->r[28]+0xFFFF8000u,c->r[3]); // 8008C750
  W8(c->r[28]+0xFFFF8000u,c->r[4]); // 8008C754
  W8(c->r[28]+0xFFFF8000u,c->r[5]); // 8008C758
  c->r[3]=R32(c->r[29]+0x00000004u); // 8008C75C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C760
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008C764
  c->ctr=c->r[12]; // 8008C768
  if (true) { c->lr=0x8008C770u; dispatch(c,c->ctr); } // 8008C76C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8008C770
  c->r[3]=c->r[3]^0x80000000u; // 8008C774
  W32(c->r[1]+0x00000124u,c->r[3]); // 8008C778
  c->r[3]=c->r[0]^0x80000000u; // 8008C77C
  c->r[0]=R32(c->r[31]+0x00000004u); // 8008C780
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C784
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[3]=RF64(ea);} // 8008C788
  c->r[0]=c->r[0]^0x80000000u; // 8008C78C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 8008C790
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 8008C794
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 8008C798
  c->r[3]=R32(c->r[29]+0x00000004u); // 8008C79C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8008C7A0
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C7A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C7A8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C7AC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8008C7B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8008C7B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8008C7B8
  c->f[27]=c->ps1[27]=S(c->f[0]+c->f[1]); // 8008C7BC
  c->ctr=c->r[12]; // 8008C7C0
  if (true) { c->lr=0x8008C7C8u; dispatch(c,c->ctr); } // 8008C7C4
  c->r[0]=R32(c->r[31]+0x00000000u); // 8008C7C8
  c->r[3]=c->r[3]^0x80000000u; // 8008C7CC
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 8008C7D0
  c->r[3]=0u+0x00000001u; // 8008C7D4
  c->r[0]=c->r[0]^0x80000000u; // 8008C7D8
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[2]=RF64(ea);} // 8008C7DC
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008C7E0
  c->r[4]=0u+0x00000003u; // 8008C7E4
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=RF64(ea);} // 8008C7E8
  c->r[5]=0u+0x00000001u; // 8008C7EC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 8008C7F0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8008C7F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8008C7F8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8008C7FC
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8008C800
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[27]);} // 8008C804
  c->lr=0x8008C80Cu; f_800D31D4(c); // 8008C808
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008C80C
  cmps(c,0,(int32_t)c->r[0],0); // 8008C810
  if (!crb(c,2)) { goto L_8008C820; } // 8008C814
  c->lr=0x8008C81Cu; f_800838DC(c); // 8008C818
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008C81C
L_8008C820:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008C820
  c->f[1]=c->f[30]; // 8008C824
  c->r[4]=0u+0x00000001u; // 8008C828
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C82C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008C830
  c->ctr=c->r[12]; // 8008C834
  if (true) { c->lr=0x8008C83Cu; dispatch(c,c->ctr); } // 8008C838
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008C83C
  cmps(c,0,(int32_t)c->r[0],0); // 8008C840
  if (!crb(c,2)) { goto L_8008C850; } // 8008C844
  c->lr=0x8008C84Cu; f_800838DC(c); // 8008C848
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008C84C
L_8008C850:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008C850
  c->f[1]=c->f[29]; // 8008C854
  c->r[4]=0u+0x00000000u; // 8008C858
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C85C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008C860
  c->ctr=c->r[12]; // 8008C864
  if (true) { c->lr=0x8008C86Cu; dispatch(c,c->ctr); } // 8008C868
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008C86C
  cmps(c,0,(int32_t)c->r[0],0); // 8008C870
  if (!crb(c,2)) { goto L_8008C880; } // 8008C874
  c->lr=0x8008C87Cu; f_800838DC(c); // 8008C878
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008C87C
L_8008C880:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008C880
  c->f[1]=c->f[28]; // 8008C884
  c->r[4]=0u+0x00000003u; // 8008C888
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C88C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008C890
  c->ctr=c->r[12]; // 8008C894
  if (true) { c->lr=0x8008C89Cu; dispatch(c,c->ctr); } // 8008C898
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008C89C
  cmps(c,0,(int32_t)c->r[0],0); // 8008C8A0
  if (!crb(c,2)) { goto L_8008C8B0; } // 8008C8A4
  c->lr=0x8008C8ACu; f_800838DC(c); // 8008C8A8
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008C8AC
L_8008C8B0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008C8B0
  c->r[4]=c->r[1]+0x00000068u; // 8008C8B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C8B8
  c->r[12]=R32(c->r[12]+0x00000038u); // 8008C8BC
  c->ctr=c->r[12]; // 8008C8C0
  if (true) { c->lr=0x8008C8C8u; dispatch(c,c->ctr); } // 8008C8C4
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008C8C8
  cmps(c,0,(int32_t)c->r[0],0); // 8008C8CC
  if (!crb(c,2)) { goto L_8008C8DC; } // 8008C8D0
  c->lr=0x8008C8D8u; f_800838DC(c); // 8008C8D4
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008C8D8
L_8008C8DC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008C8DC
  c->r[4]=c->r[1]+0x000000A8u; // 8008C8E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008C8E4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8008C8E8
  c->ctr=c->r[12]; // 8008C8EC
  if (true) { c->lr=0x8008C8F4u; dispatch(c,c->ctr); } // 8008C8F0
  c->r[3]=0u+0x80260000u; // 8008C8F4
  c->r[28]=c->r[1]+0x00000008u; // 8008C8F8
  c->r[3]=c->r[3]+0x00004680u; // 8008C8FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8008C900
  c->r[3]=c->r[28]|c->r[28]; // 8008C904
  c->r[12]=R32(c->r[28]+0x00000000u); // 8008C908
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008C90C
  c->ctr=c->r[12]; // 8008C910
  if (true) { c->lr=0x8008C918u; dispatch(c,c->ctr); } // 8008C914
  cmps(c,0,(int32_t)c->r[28],0); // 8008C918
  if (crb(c,2)) { goto L_8008C968; } // 8008C91C
  c->r[4]=0u+0x80260000u; // 8008C920
  c->r[3]=c->r[28]|c->r[28]; // 8008C924
  c->r[4]=c->r[4]+0x000025C8u; // 8008C928
  W32(c->r[1]+0x00000008u,c->r[4]); // 8008C92C
  c->r[12]=R32(c->r[28]+0x00000000u); // 8008C930
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008C934
  c->ctr=c->r[12]; // 8008C938
  if (true) { c->lr=0x8008C940u; dispatch(c,c->ctr); } // 8008C93C
  cmps(c,0,(int32_t)c->r[28],0); // 8008C940
  if (crb(c,2)) { goto L_8008C968; } // 8008C944
  c->r[4]=0u+0x80260000u; // 8008C948
  c->r[3]=c->r[28]|c->r[28]; // 8008C94C
  c->r[4]=c->r[4]+0x0000265Cu; // 8008C950
  W32(c->r[1]+0x00000008u,c->r[4]); // 8008C954
  c->r[12]=R32(c->r[28]+0x00000000u); // 8008C958
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008C95C
  c->ctr=c->r[12]; // 8008C960
  if (true) { c->lr=0x8008C968u; dispatch(c,c->ctr); } // 8008C964
L_8008C968:;
  c->r[11]=c->r[1]+0x00000160u; // 8008C968
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,31,ea,0,0);} // 8008C96C
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[31]=RF64(ea);} // 8008C970
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,30,ea,0,0);} // 8008C974
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[30]=RF64(ea);} // 8008C978
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,29,ea,0,0);} // 8008C97C
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[29]=RF64(ea);} // 8008C980
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,28,ea,0,0);} // 8008C984
  {uint32_t ea=c->r[1]+0x00000190u; c->f[28]=RF64(ea);} // 8008C988
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,27,ea,0,0);} // 8008C98C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[27]=RF64(ea);} // 8008C990
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,26,ea,0,0);} // 8008C994
  {uint32_t ea=c->r[1]+0x00000170u; c->f[26]=RF64(ea);} // 8008C998
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,25,ea,0,0);} // 8008C99C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[25]=RF64(ea);} // 8008C9A0
  c->lr=0x8008C9A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008C9A4
  c->r[0]=R32(c->r[1]+0x000001D4u); // 8008C9A8
  c->lr=c->r[0]; // 8008C9AC
  c->r[1]=c->r[1]+0x000001D0u; // 8008C9B0
  return; // 8008C9B4
}

// __dt__10WiiTextureFv
void f_8008C9B8(Ctx* __restrict c) {
  trace_call(0x8008C9B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008C9B8
  c->r[0]=c->lr; // 8008C9BC
  cmps(c,0,(int32_t)c->r[3],0); // 8008C9C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008C9C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008C9C8
  c->r[31]=c->r[4]|c->r[4]; // 8008C9CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008C9D0
  c->r[30]=c->r[3]|c->r[3]; // 8008C9D4
  if (crb(c,2)) { goto L_8008CA54; } // 8008C9D8
  c->r[12]=0u+0x80260000u; // 8008C9DC
  c->r[12]=c->r[12]+0x00004680u; // 8008C9E0
  W32(c->r[3]+0x00000000u,c->r[12]); // 8008C9E4
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008C9E8
  c->ctr=c->r[12]; // 8008C9EC
  if (true) { c->lr=0x8008C9F4u; dispatch(c,c->ctr); } // 8008C9F0
  cmps(c,0,(int32_t)c->r[30],0); // 8008C9F4
  if (crb(c,2)) { goto L_8008CA44; } // 8008C9F8
  c->r[4]=0u+0x80260000u; // 8008C9FC
  c->r[3]=c->r[30]|c->r[30]; // 8008CA00
  c->r[4]=c->r[4]+0x000025C8u; // 8008CA04
  W32(c->r[30]+0x00000000u,c->r[4]); // 8008CA08
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008CA0C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008CA10
  c->ctr=c->r[12]; // 8008CA14
  if (true) { c->lr=0x8008CA1Cu; dispatch(c,c->ctr); } // 8008CA18
  cmps(c,0,(int32_t)c->r[30],0); // 8008CA1C
  if (crb(c,2)) { goto L_8008CA44; } // 8008CA20
  c->r[4]=0u+0x80260000u; // 8008CA24
  c->r[3]=c->r[30]|c->r[30]; // 8008CA28
  c->r[4]=c->r[4]+0x0000265Cu; // 8008CA2C
  W32(c->r[30]+0x00000000u,c->r[4]); // 8008CA30
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008CA34
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008CA38
  c->ctr=c->r[12]; // 8008CA3C
  if (true) { c->lr=0x8008CA44u; dispatch(c,c->ctr); } // 8008CA40
L_8008CA44:;
  cmps(c,0,(int32_t)c->r[31],0); // 8008CA44
  if (!crb(c,1)) { goto L_8008CA54; } // 8008CA48
  c->r[3]=c->r[30]|c->r[30]; // 8008CA4C
  c->lr=0x8008CA54u; f_8008DE54(c); // 8008CA50
L_8008CA54:;
  c->r[3]=c->r[30]|c->r[30]; // 8008CA54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008CA58
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008CA5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008CA60
  c->lr=c->r[0]; // 8008CA64
  c->r[1]=c->r[1]+0x00000010u; // 8008CA68
  return; // 8008CA6C
}

// GetName__9WiiSpriteFv
void f_8008CA70(Ctx* __restrict c) {
  trace_call(0x8008CA70u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CA70
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CA74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8008CA78
  c->ctr=c->r[12]; // 8008CA7C
  if (true) { dispatch(c,c->ctr); return; } // 8008CA80
}

// GetWidth__9WiiSpriteFv
void f_8008CA84(Ctx* __restrict c) {
  trace_call(0x8008CA84u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CA84
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CA88
  c->r[12]=R32(c->r[12]+0x00000010u); // 8008CA8C
  c->ctr=c->r[12]; // 8008CA90
  if (true) { dispatch(c,c->ctr); return; } // 8008CA94
}

// GetHeight__9WiiSpriteFv
void f_8008CA98(Ctx* __restrict c) {
  trace_call(0x8008CA98u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CA98
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CA9C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008CAA0
  c->ctr=c->r[12]; // 8008CAA4
  if (true) { dispatch(c,c->ctr); return; } // 8008CAA8
}

// GetDepth__9WiiSpriteFv
void f_8008CAAC(Ctx* __restrict c) {
  trace_call(0x8008CAACu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CAAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CAB0
  c->r[12]=R32(c->r[12]+0x00000018u); // 8008CAB4
  c->ctr=c->r[12]; // 8008CAB8
  if (true) { dispatch(c,c->ctr); return; } // 8008CABC
}

// GetPitch__9WiiSpriteFv
void f_8008CAC0(Ctx* __restrict c) {
  trace_call(0x8008CAC0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CAC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CAC4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8008CAC8
  c->ctr=c->r[12]; // 8008CACC
  if (true) { dispatch(c,c->ctr); return; } // 8008CAD0
}

// Lock__9WiiSpriteFv
void f_8008CAD4(Ctx* __restrict c) {
  trace_call(0x8008CAD4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CAD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CAD8
  c->r[12]=R32(c->r[12]+0x00000024u); // 8008CADC
  c->ctr=c->r[12]; // 8008CAE0
  if (true) { dispatch(c,c->ctr); return; } // 8008CAE4
}

// Unlock__9WiiSpriteFv
void f_8008CAE8(Ctx* __restrict c) {
  trace_call(0x8008CAE8u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CAE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CAEC
  c->r[12]=R32(c->r[12]+0x00000028u); // 8008CAF0
  c->ctr=c->r[12]; // 8008CAF4
  if (true) { dispatch(c,c->ctr); return; } // 8008CAF8
}

// CreateSprite__11WiiGraphicsFv
void f_8008CAFC(Ctx* __restrict c) {
  trace_call(0x8008CAFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008CAFC
  c->r[0]=c->lr; // 8008CB00
  c->r[3]=0u+0x00000018u; // 8008CB04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008CB08
  c->lr=0x8008CB10u; f_8008DC84(c); // 8008CB0C
  cmps(c,0,(int32_t)c->r[3],0); // 8008CB10
  if (crb(c,2)) { goto L_8008CB5C; } // 8008CB14
  c->r[0]=0u+0x00000000u; // 8008CB18
  W32(c->r[3]+0x00000004u,c->r[0]); // 8008CB1C
  c->r[5]=0u+0x80260000u; // 8008CB20
  c->r[4]=0u+0x80260000u; // 8008CB24
  c->r[5]=c->r[5]+0x00002618u; // 8008CB28
  W32(c->r[3]+0x00000000u,c->r[5]); // 8008CB2C
  c->r[0]=0u+0x000000FFu; // 8008CB30
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008CB34
  W8(c->r[3]+0x00000008u,c->r[0]); // 8008CB38
  c->r[4]=c->r[4]+0x000046D0u; // 8008CB3C
  W8(c->r[3]+0x00000009u,c->r[0]); // 8008CB40
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8008CB44
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8008CB48
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8008CB4C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8008CB50
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8008CB54
  W32(c->r[3]+0x00000000u,c->r[4]); // 8008CB58
L_8008CB5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008CB5C
  c->lr=c->r[0]; // 8008CB60
  c->r[1]=c->r[1]+0x00000010u; // 8008CB64
  return; // 8008CB68
}

// FreeSprite__11WiiGraphicsFP6Sprite
void f_8008CB6C(Ctx* __restrict c) {
  trace_call(0x8008CB6Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 8008CB6C
  if (crb(c,2)) return; // 8008CB70
  c->r[3]=c->r[4]|c->r[4]; // 8008CB74
  c->r[4]=0u+0x00000001u; // 8008CB78
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CB7C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8008CB80
  c->ctr=c->r[12]; // 8008CB84
  if (true) { dispatch(c,c->ctr); return; } // 8008CB88
  return; // 8008CB8C
}

// Create__10WiiTextureFPciii
void f_8008CB90(Ctx* __restrict c) {
  trace_call(0x8008CB90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008CB90
  c->r[0]=c->lr; // 8008CB94
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008CB98
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8008CB9C
  c->r[27]=c->r[3]|c->r[3]; // 8008CBA0
  c->r[28]=c->r[4]|c->r[4]; // 8008CBA4
  c->r[29]=c->r[5]|c->r[5]; // 8008CBA8
  c->r[30]=c->r[6]|c->r[6]; // 8008CBAC
  c->r[31]=c->r[7]|c->r[7]; // 8008CBB0
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008CBB4
  cmps(c,0,(int32_t)c->r[0],0); // 8008CBB8
  if (!crb(c,2)) { goto L_8008CBC8; } // 8008CBBC
  c->lr=0x8008CBC4u; f_800838DC(c); // 8008CBC0
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008CBC4
L_8008CBC8:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008CBC8
  c->r[4]=c->r[28]|c->r[28]; // 8008CBCC
  c->r[5]=c->r[29]|c->r[29]; // 8008CBD0
  c->r[6]=c->r[30]|c->r[30]; // 8008CBD4
  c->r[7]=c->r[31]|c->r[31]; // 8008CBD8
  c->lr=0x8008CBE0u; f_8008A79C(c); // 8008CBDC
  W32(c->r[27]+0x00000004u,c->r[3]); // 8008CBE0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8008CBE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008CBE8
  c->lr=c->r[0]; // 8008CBEC
  c->r[1]=c->r[1]+0x00000020u; // 8008CBF0
  return; // 8008CBF4
}

// CreateFromFile__10WiiTextureFPc
void f_8008CBF8(Ctx* __restrict c) {
  trace_call(0x8008CBF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008CBF8
  c->r[0]=c->lr; // 8008CBFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008CC00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008CC04
  c->r[31]=c->r[4]|c->r[4]; // 8008CC08
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008CC0C
  c->r[30]=c->r[3]|c->r[3]; // 8008CC10
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008CC14
  cmps(c,0,(int32_t)c->r[0],0); // 8008CC18
  if (!crb(c,2)) { goto L_8008CC28; } // 8008CC1C
  c->lr=0x8008CC24u; f_800838DC(c); // 8008CC20
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008CC24
L_8008CC28:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008CC28
  c->r[4]=c->r[31]|c->r[31]; // 8008CC2C
  c->r[5]=0u+0x00000001u; // 8008CC30
  c->lr=0x8008CC38u; f_8008AB08(c); // 8008CC34
  W32(c->r[30]+0x00000004u,c->r[3]); // 8008CC38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008CC3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008CC40
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008CC44
  c->lr=c->r[0]; // 8008CC48
  c->r[1]=c->r[1]+0x00000010u; // 8008CC4C
  return; // 8008CC50
}

// Free__10WiiTextureFv
void f_8008CC54(Ctx* __restrict c) {
  trace_call(0x8008CC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008CC54
  c->r[0]=c->lr; // 8008CC58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008CC5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008CC60
  c->r[31]=c->r[3]|c->r[3]; // 8008CC64
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008CC68
  cmps(c,0,(int32_t)c->r[0],0); // 8008CC6C
  if (!crb(c,2)) { goto L_8008CC7C; } // 8008CC70
  c->lr=0x8008CC78u; f_800838DC(c); // 8008CC74
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008CC78
L_8008CC7C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008CC7C
  c->r[4]=R32(c->r[31]+0x00000004u); // 8008CC80
  c->lr=0x8008CC88u; f_8008AE88(c); // 8008CC84
  c->r[0]=0u+0x00000000u; // 8008CC88
  W32(c->r[31]+0x00000004u,c->r[0]); // 8008CC8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008CC90
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008CC94
  c->lr=c->r[0]; // 8008CC98
  c->r[1]=c->r[1]+0x00000010u; // 8008CC9C
  return; // 8008CCA0
}

// Lock__10WiiTextureFv
void f_8008CCA4(Ctx* __restrict c) {
  trace_call(0x8008CCA4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CCA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CCA8
  c->r[12]=R32(c->r[12]+0x00000024u); // 8008CCAC
  c->ctr=c->r[12]; // 8008CCB0
  if (true) { dispatch(c,c->ctr); return; } // 8008CCB4
}

// Unlock__10WiiTextureFv
void f_8008CCB8(Ctx* __restrict c) {
  trace_call(0x8008CCB8u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CCB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CCBC
  c->r[12]=R32(c->r[12]+0x00000028u); // 8008CCC0
  c->ctr=c->r[12]; // 8008CCC4
  if (true) { dispatch(c,c->ctr); return; } // 8008CCC8
}

// GetName__10WiiTextureFv
void f_8008CCCC(Ctx* __restrict c) {
  trace_call(0x8008CCCCu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CCCC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CCD0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8008CCD4
  c->ctr=c->r[12]; // 8008CCD8
  if (true) { dispatch(c,c->ctr); return; } // 8008CCDC
}

// GetWidth__10WiiTextureFv
void f_8008CCE0(Ctx* __restrict c) {
  trace_call(0x8008CCE0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CCE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CCE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8008CCE8
  c->ctr=c->r[12]; // 8008CCEC
  if (true) { dispatch(c,c->ctr); return; } // 8008CCF0
}

// GetHeight__10WiiTextureFv
void f_8008CCF4(Ctx* __restrict c) {
  trace_call(0x8008CCF4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CCF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CCF8
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008CCFC
  c->ctr=c->r[12]; // 8008CD00
  if (true) { dispatch(c,c->ctr); return; } // 8008CD04
}

// GetDepth__10WiiTextureFv
void f_8008CD08(Ctx* __restrict c) {
  trace_call(0x8008CD08u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CD08
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CD0C
  c->r[12]=R32(c->r[12]+0x00000018u); // 8008CD10
  c->ctr=c->r[12]; // 8008CD14
  if (true) { dispatch(c,c->ctr); return; } // 8008CD18
}

// GetPitch__10WiiTextureFv
void f_8008CD1C(Ctx* __restrict c) {
  trace_call(0x8008CD1Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CD1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CD20
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8008CD24
  c->ctr=c->r[12]; // 8008CD28
  if (true) { dispatch(c,c->ctr); return; } // 8008CD2C
}

// SetFilterMode__10WiiTextureF17TextureFilterMode
void f_8008CD30(Ctx* __restrict c) {
  trace_call(0x8008CD30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008CD30
  c->r[0]=c->lr; // 8008CD34
  c->r[5]=c->r[4]^0x80000000u; // 8008CD38
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[1]=RF64(ea);} // 8008CD3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008CD40
  c->r[0]=0u+0x43300000u; // 8008CD44
  c->r[4]=0u+0x00000000u; // 8008CD48
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CD4C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8008CD50
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CD54
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008CD58
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8008CD5C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8008CD60
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8008CD64
  c->ctr=c->r[12]; // 8008CD68
  if (true) { c->lr=0x8008CD70u; dispatch(c,c->ctr); } // 8008CD6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008CD70
  c->lr=c->r[0]; // 8008CD74
  c->r[1]=c->r[1]+0x00000010u; // 8008CD78
  return; // 8008CD7C
}

// SetWrapModeX__10WiiTextureF15TextureWrapMode
void f_8008CD80(Ctx* __restrict c) {
  trace_call(0x8008CD80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008CD80
  c->r[0]=c->lr; // 8008CD84
  c->r[5]=c->r[4]^0x80000000u; // 8008CD88
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[1]=RF64(ea);} // 8008CD8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008CD90
  c->r[0]=0u+0x43300000u; // 8008CD94
  c->r[4]=0u+0x00000001u; // 8008CD98
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CD9C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8008CDA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CDA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008CDA8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8008CDAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8008CDB0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8008CDB4
  c->ctr=c->r[12]; // 8008CDB8
  if (true) { c->lr=0x8008CDC0u; dispatch(c,c->ctr); } // 8008CDBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008CDC0
  c->lr=c->r[0]; // 8008CDC4
  c->r[1]=c->r[1]+0x00000010u; // 8008CDC8
  return; // 8008CDCC
}

// SetWrapModeY__10WiiTextureF15TextureWrapMode
void f_8008CDD0(Ctx* __restrict c) {
  trace_call(0x8008CDD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008CDD0
  c->r[0]=c->lr; // 8008CDD4
  c->r[5]=c->r[4]^0x80000000u; // 8008CDD8
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[1]=RF64(ea);} // 8008CDDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008CDE0
  c->r[0]=0u+0x43300000u; // 8008CDE4
  c->r[4]=0u+0x00000002u; // 8008CDE8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8008CDEC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8008CDF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CDF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008CDF8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8008CDFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8008CE00
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8008CE04
  c->ctr=c->r[12]; // 8008CE08
  if (true) { c->lr=0x8008CE10u; dispatch(c,c->ctr); } // 8008CE0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008CE10
  c->lr=c->r[0]; // 8008CE14
  c->r[1]=c->r[1]+0x00000010u; // 8008CE18
  return; // 8008CE1C
}

// CreateTexture__11WiiGraphicsFv
void f_8008CE20(Ctx* __restrict c) {
  trace_call(0x8008CE20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008CE20
  c->r[0]=c->lr; // 8008CE24
  c->r[3]=0u+0x00000008u; // 8008CE28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008CE2C
  c->lr=0x8008CE34u; f_8008DC84(c); // 8008CE30
  cmps(c,0,(int32_t)c->r[3],0); // 8008CE34
  if (crb(c,2)) { goto L_8008CE50; } // 8008CE38
  c->r[0]=0u+0x00000000u; // 8008CE3C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8008CE40
  c->r[4]=0u+0x80260000u; // 8008CE44
  c->r[4]=c->r[4]+0x00004680u; // 8008CE48
  W32(c->r[3]+0x00000000u,c->r[4]); // 8008CE4C
L_8008CE50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008CE50
  c->lr=c->r[0]; // 8008CE54
  c->r[1]=c->r[1]+0x00000010u; // 8008CE58
  return; // 8008CE5C
}

// FreeTexture__11WiiGraphicsFP7Texture
void f_8008CE60(Ctx* __restrict c) {
  trace_call(0x8008CE60u);
  cmps(c,0,(int32_t)c->r[4],0); // 8008CE60
  if (crb(c,2)) return; // 8008CE64
  c->r[3]=c->r[4]|c->r[4]; // 8008CE68
  c->r[4]=0u+0x00000001u; // 8008CE6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CE70
  c->r[12]=R32(c->r[12]+0x00000008u); // 8008CE74
  c->ctr=c->r[12]; // 8008CE78
  if (true) { dispatch(c,c->ctr); return; } // 8008CE7C
  return; // 8008CE80
}

// Create__8WiiMovieFPciii
void f_8008CE84(Ctx* __restrict c) {
  trace_call(0x8008CE84u);
  return; // 8008CE84
}

// CreateFromFile__8WiiMovieFPc
void f_8008CE88(Ctx* __restrict c) {
  trace_call(0x8008CE88u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CE88
  c->r[5]=0u+0x00000000u; // 8008CE8C
  c->r[12]=R32(c->r[12]+0x00000044u); // 8008CE90
  c->ctr=c->r[12]; // 8008CE94
  if (true) { dispatch(c,c->ctr); return; } // 8008CE98
}

// CreateFromFile__8WiiMovieFPcb
void f_8008CE9C(Ctx* __restrict c) {
  trace_call(0x8008CE9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008CE9C
  c->r[0]=c->lr; // 8008CEA0
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008CEA4
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 8008CEA8
  c->r[31]=c->r[3]|c->r[3]; // 8008CEAC
  W32(c->r[1]+0x00000118u,c->r[30]); // 8008CEB0
  W32(c->r[1]+0x00000114u,c->r[29]); // 8008CEB4
  W32(c->r[1]+0x00000110u,c->r[28]); // 8008CEB8
  c->r[28]=c->r[4]|c->r[4]; // 8008CEBC
  c->r[4]=c->r[5]|c->r[5]; // 8008CEC0
  c->r[3]=c->r[28]|c->r[28]; // 8008CEC4
  c->lr=0x8008CECCu; f_8007E7CC(c); // 8008CEC8
  cmps(c,0,(int32_t)c->r[3],0); // 8008CECC
  if (!crb(c,2)) { goto L_8008CF14; } // 8008CED0
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008CED4
  cmps(c,0,(int32_t)c->r[0],0); // 8008CED8
  if (!crb(c,2)) { goto L_8008CEE8; } // 8008CEDC
  c->lr=0x8008CEE4u; f_80080758(c); // 8008CEE0
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008CEE4
L_8008CEE8:;
  c->r[4]=0u+0x80260000u; // 8008CEE8
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008CEEC
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008CEF0
  c->r[5]=c->r[28]|c->r[28]; // 8008CEF4
  c->r[4]=c->r[4]+0x00000077u; // 8008CEF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008CEFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CF00
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008CF04
  c->ctr=c->r[12]; // 8008CF08
  if (true) { c->lr=0x8008CF10u; dispatch(c,c->ctr); } // 8008CF0C
  goto L_8008D1D0; // 8008CF10
L_8008CF14:;
  c->r[3]=c->r[31]+0x00000008u; // 8008CF14
  c->r[4]=0u+0x00000000u; // 8008CF18
  c->r[5]=0u+0x00000040u; // 8008CF1C
  c->lr=0x8008CF24u; f_80004688(c); // 8008CF20
  c->r[4]=c->r[28]|c->r[28]; // 8008CF24
  c->r[3]=c->r[31]+0x00000008u; // 8008CF28
  c->lr=0x8008CF30u; f_800DB9A8(c); // 8008CF2C
  c->r[3]=c->r[31]+0x00000058u; // 8008CF30
  c->lr=0x8008CF38u; f_8007F7F4(c); // 8008CF34
  c->r[3]=c->r[31]+0x00000064u; // 8008CF38
  c->lr=0x8008CF40u; f_8007F83C(c); // 8008CF3C
  c->lr=0x8008CF44u; f_8007EAB0(c); // 8008CF40
  W32(c->r[31]+0x00000048u,c->r[3]); // 8008CF44
  c->r[4]=c->r[3]|c->r[3]; // 8008CF48
  c->r[5]=0u+0x00000020u; // 8008CF4C
  c->r[3]=R32(c->r[13]+0xFFFF8BA4u); // 8008CF50
  c->lr=0x8008CF58u; f_800EDB0C(c); // 8008CF54
  cmps(c,0,(int32_t)c->r[3],0); // 8008CF58
  W32(c->r[31]+0x00000054u,c->r[3]); // 8008CF5C
  if (!crb(c,2)) { goto L_8008CFA4; } // 8008CF60
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008CF64
  cmps(c,0,(int32_t)c->r[0],0); // 8008CF68
  if (!crb(c,2)) { goto L_8008CF78; } // 8008CF6C
  c->lr=0x8008CF74u; f_80080758(c); // 8008CF70
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008CF74
L_8008CF78:;
  c->r[4]=0u+0x80260000u; // 8008CF78
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008CF7C
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008CF80
  c->r[5]=c->r[28]|c->r[28]; // 8008CF84
  c->r[4]=c->r[4]+0x00000097u; // 8008CF88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008CF8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008CF90
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008CF94
  c->ctr=c->r[12]; // 8008CF98
  if (true) { c->lr=0x8008CFA0u; dispatch(c,c->ctr); } // 8008CF9C
  goto L_8008D1D0; // 8008CFA0
L_8008CFA4:;
  c->lr=0x8008CFA8u; f_8007EB68(c); // 8008CFA4
  c->r[4]=c->r[28]|c->r[28]; // 8008CFA8
  c->r[3]=c->r[1]+0x00000008u; // 8008CFAC
  c->lr=0x8008CFB4u; f_800DB9A8(c); // 8008CFB0
  c->r[3]=c->r[1]+0x00000008u; // 8008CFB4
  c->lr=0x8008CFBCu; f_800D4394(c); // 8008CFB8
  c->r[4]=c->r[1]+0x00000005u; // 8008CFBC
  c->r[0]=0u+0x00000073u; // 8008CFC0
  W8(c->r[4]+c->r[3],c->r[0]); // 8008CFC4
  c->r[4]=c->r[1]+0x00000006u; // 8008CFC8
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008CFCC
  c->r[5]=0u+0x00000075u; // 8008CFD0
  W8(c->r[4]+c->r[3],c->r[5]); // 8008CFD4
  c->r[4]=c->r[1]+0x00000007u; // 8008CFD8
  cmps(c,0,(int32_t)c->r[0],0); // 8008CFDC
  c->r[0]=0u+0x00000062u; // 8008CFE0
  W8(c->r[4]+c->r[3],c->r[0]); // 8008CFE4
  if (!crb(c,2)) { goto L_8008CFF4; } // 8008CFE8
  c->lr=0x8008CFF0u; f_80080758(c); // 8008CFEC
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008CFF0
L_8008CFF4:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008CFF4
  c->r[4]=c->r[1]+0x00000008u; // 8008CFF8
  c->r[5]=0u+0x00000000u; // 8008CFFC
  c->r[6]=0u+0x00000000u; // 8008D000
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008D004
  c->r[12]=R32(c->r[12]+0x00000128u); // 8008D008
  c->ctr=c->r[12]; // 8008D00C
  if (true) { c->lr=0x8008D014u; dispatch(c,c->ctr); } // 8008D010
  cmps(c,0,(int32_t)c->r[3],0); // 8008D014
  c->r[29]=c->r[3]|c->r[3]; // 8008D018
  if (crb(c,2)) { goto L_8008D1D0; } // 8008D01C
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008D020
  cmps(c,0,(int32_t)c->r[0],0); // 8008D024
  if (!crb(c,2)) { goto L_8008D034; } // 8008D028
  c->lr=0x8008D030u; f_80080758(c); // 8008D02C
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008D030
L_8008D034:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008D034
  c->r[4]=c->r[29]|c->r[29]; // 8008D038
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008D03C
  c->r[12]=R32(c->r[12]+0x00000138u); // 8008D040
  c->ctr=c->r[12]; // 8008D044
  if (true) { c->lr=0x8008D04Cu; dispatch(c,c->ctr); } // 8008D048
  c->r[30]=c->r[3]|c->r[3]; // 8008D04C
  c->lr=0x8008D054u; f_8008DD6C(c); // 8008D050
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008D054
  c->r[28]=c->r[3]|c->r[3]; // 8008D058
  cmps(c,0,(int32_t)c->r[0],0); // 8008D05C
  if (!crb(c,2)) { goto L_8008D06C; } // 8008D060
  c->lr=0x8008D068u; f_80080758(c); // 8008D064
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008D068
L_8008D06C:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008D06C
  c->r[4]=c->r[28]|c->r[28]; // 8008D070
  c->r[5]=c->r[30]|c->r[30]; // 8008D074
  c->r[6]=c->r[29]|c->r[29]; // 8008D078
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008D07C
  c->r[12]=R32(c->r[12]+0x0000012Cu); // 8008D080
  c->ctr=c->r[12]; // 8008D084
  if (true) { c->lr=0x8008D08Cu; dispatch(c,c->ctr); } // 8008D088
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008D08C
  cmps(c,0,(int32_t)c->r[0],0); // 8008D090
  if (!crb(c,2)) { goto L_8008D0A0; } // 8008D094
  c->lr=0x8008D09Cu; f_80080758(c); // 8008D098
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008D09C
L_8008D0A0:;
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008D0A0
  c->r[4]=c->r[29]|c->r[29]; // 8008D0A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008D0A8
  c->r[12]=R32(c->r[12]+0x00000134u); // 8008D0AC
  c->ctr=c->r[12]; // 8008D0B0
  if (true) { c->lr=0x8008D0B8u; dispatch(c,c->ctr); } // 8008D0B4
  c->r[4]=0u+0x80260000u; // 8008D0B8
  c->r[3]=c->r[28]|c->r[28]; // 8008D0BC
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008D0C0
  c->r[4]=c->r[4]+0x000000B9u; // 8008D0C4
  c->lr=0x8008D0CCu; f_800DBCB0(c); // 8008D0C8
  c->r[28]=c->r[3]|c->r[3]; // 8008D0CC
  c->r[3]=0u+0x00001520u; // 8008D0D0
  c->lr=0x8008D0D8u; f_8008DC84(c); // 8008D0D4
  cmps(c,0,(int32_t)c->r[3],0); // 8008D0D8
  if (crb(c,2)) { goto L_8008D0E4; } // 8008D0DC
  c->lr=0x8008D0E4u; f_80074518(c); // 8008D0E0
L_8008D0E4:;
  c->r[4]=0u+0x80260000u; // 8008D0E4
  W32(c->r[31]+0x00000074u,c->r[3]); // 8008D0E8
  c->r[30]=c->r[4]+0xFFFF8AF0u; // 8008D0EC
  c->r[6]=0u+0x00000008u; // 8008D0F0
  c->r[4]=c->r[28]|c->r[28]; // 8008D0F4
  c->r[7]=0u+0x00000006u; // 8008D0F8
  c->r[5]=c->r[30]+0x000000BBu; // 8008D0FC
  c->lr=0x8008D104u; f_800745A8(c); // 8008D100
  c->r[4]=c->r[30]+0x000000B9u; // 8008D104
  c->r[3]=0u+0x00000000u; // 8008D108
  c->lr=0x8008D110u; f_800DBCB0(c); // 8008D10C
  c->lr=0x8008D114u; f_800DDA7C(c); // 8008D110
  W32(c->r[31]+0x00000078u,c->r[3]); // 8008D114
  c->r[4]=c->r[30]+0x000000B9u; // 8008D118
  c->r[3]=0u+0x00000000u; // 8008D11C
  c->lr=0x8008D124u; f_800DBCB0(c); // 8008D120
  c->lr=0x8008D128u; f_800DDA7C(c); // 8008D124
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8008D128
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 8008D12C
  c->r[29]=c->r[3]|c->r[3]; // 8008D130
  c->r[3]=c->r[4]+0x00000010u; // 8008D134
  c->lr=0x8008D13Cu; f_8008DD6C(c); // 8008D138
  c->r[4]=0u+0x80090000u; // 8008D13C
  c->r[5]=0u+0x80090000u; // 8008D140
  c->r[7]=c->r[29]|c->r[29]; // 8008D144
  c->r[6]=0u+0x00000014u; // 8008D148
  c->r[4]=c->r[4]+0xFFFFD1F0u; // 8008D14C
  c->r[5]=c->r[5]+0xFFFFD224u; // 8008D150
  c->lr=0x8008D158u; f_800D44D8(c); // 8008D154
  W32(c->r[31]+0x00000084u,c->r[3]); // 8008D158
  c->r[28]=0u+0x00000000u; // 8008D15C
  c->r[29]=0u+0x00000000u; // 8008D160
  goto L_8008D1C4; // 8008D164
L_8008D168:;
  c->r[4]=c->r[30]+0x00000176u; // 8008D168
  c->r[3]=0u+0x00000000u; // 8008D16C
  c->lr=0x8008D174u; f_800DBCB0(c); // 8008D170
  c->lr=0x8008D178u; f_800DDA7C(c); // 8008D174
  c->r[5]=R32(c->r[31]+0x00000084u); // 8008D178
  c->r[4]=c->r[30]+0x00000176u; // 8008D17C
  W32(c->r[5]+c->r[29],c->r[3]); // 8008D180
  c->r[3]=0u+0x00000000u; // 8008D184
  c->lr=0x8008D18Cu; f_800DBCB0(c); // 8008D188
  c->lr=0x8008D190u; f_800DDA7C(c); // 8008D18C
  c->r[0]=R32(c->r[31]+0x00000084u); // 8008D190
  c->r[4]=c->r[30]+0x000000B9u; // 8008D194
  c->r[5]=c->r[0]+c->r[29]; // 8008D198
  W32(c->r[5]+0x00000004u,c->r[3]); // 8008D19C
  c->r[3]=0u+0x00000000u; // 8008D1A0
  c->lr=0x8008D1A8u; f_800DBCB0(c); // 8008D1A4
  c->r[0]=R32(c->r[31]+0x00000084u); // 8008D1A8
  c->r[4]=c->r[3]|c->r[3]; // 8008D1AC
  c->r[3]=c->r[0]+c->r[29]; // 8008D1B0
  c->r[3]=c->r[3]+0x00000008u; // 8008D1B4
  c->lr=0x8008D1BCu; f_80073C88(c); // 8008D1B8
  c->r[29]=c->r[29]+0x00000014u; // 8008D1BC
  c->r[28]=c->r[28]+0x00000001u; // 8008D1C0
L_8008D1C4:;
  c->r[0]=R32(c->r[31]+0x0000007Cu); // 8008D1C4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 8008D1C8
  if (crb(c,0)) { IRQCHK(c); goto L_8008D168; } // 8008D1CC
L_8008D1D0:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 8008D1D0
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 8008D1D4
  c->r[30]=R32(c->r[1]+0x00000118u); // 8008D1D8
  c->r[29]=R32(c->r[1]+0x00000114u); // 8008D1DC
  c->r[28]=R32(c->r[1]+0x00000110u); // 8008D1E0
  c->lr=c->r[0]; // 8008D1E4
  c->r[1]=c->r[1]+0x00000120u; // 8008D1E8
  return; // 8008D1EC
}

// __ct__Q28WiiMovie8SubtitleFv
void f_8008D1F0(Ctx* __restrict c) {
  trace_call(0x8008D1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D1F0
  c->r[0]=c->lr; // 8008D1F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D1F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008D1FC
  c->r[31]=c->r[3]|c->r[3]; // 8008D200
  c->r[3]=c->r[3]+0x00000008u; // 8008D204
  c->lr=0x8008D20Cu; f_80073B7C(c); // 8008D208
  c->r[3]=c->r[31]|c->r[31]; // 8008D20C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008D210
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D214
  c->lr=c->r[0]; // 8008D218
  c->r[1]=c->r[1]+0x00000010u; // 8008D21C
  return; // 8008D220
}

// __dt__Q28WiiMovie8SubtitleFv
void f_8008D224(Ctx* __restrict c) {
  trace_call(0x8008D224u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D224
  c->r[0]=c->lr; // 8008D228
  cmps(c,0,(int32_t)c->r[3],0); // 8008D22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008D234
  c->r[31]=c->r[4]|c->r[4]; // 8008D238
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008D23C
  c->r[30]=c->r[3]|c->r[3]; // 8008D240
  if (crb(c,2)) { goto L_8008D264; } // 8008D244
  c->r[4]=0u+0xFFFFFFFFu; // 8008D248
  c->r[3]=c->r[3]+0x00000008u; // 8008D24C
  c->lr=0x8008D254u; f_80073BD8(c); // 8008D250
  cmps(c,0,(int32_t)c->r[31],0); // 8008D254
  if (!crb(c,1)) { goto L_8008D264; } // 8008D258
  c->r[3]=c->r[30]|c->r[30]; // 8008D25C
  c->lr=0x8008D264u; f_8008DE54(c); // 8008D260
L_8008D264:;
  c->r[3]=c->r[30]|c->r[30]; // 8008D264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008D268
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008D26C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D270
  c->lr=c->r[0]; // 8008D274
  c->r[1]=c->r[1]+0x00000010u; // 8008D278
  return; // 8008D27C
}

// Free__8WiiMovieFv
void f_8008D280(Ctx* __restrict c) {
  trace_call(0x8008D280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D280
  c->r[0]=c->lr; // 8008D284
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008D28C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008D290
  c->r[30]=c->r[3]|c->r[3]; // 8008D294
  c->lr=0x8008D29Cu; f_8007F238(c); // 8008D298
  c->lr=0x8008D2A0u; f_8007EA5C(c); // 8008D29C
  c->r[3]=R32(c->r[13]+0xFFFF8BA4u); // 8008D2A0
  c->r[4]=R32(c->r[30]+0x00000054u); // 8008D2A4
  c->lr=0x8008D2ACu; f_800EDBBC(c); // 8008D2A8
  c->r[31]=R32(c->r[30]+0x00000074u); // 8008D2AC
  cmps(c,0,(int32_t)c->r[31],0); // 8008D2B0
  if (crb(c,2)) { goto L_8008D2E0; } // 8008D2B4
  c->r[3]=c->r[31]|c->r[31]; // 8008D2B8
  c->lr=0x8008D2C0u; f_800747D8(c); // 8008D2BC
  c->r[4]=0u+0x80030000u; // 8008D2C0
  c->r[3]=c->r[31]+0x00000010u; // 8008D2C4
  c->r[4]=c->r[4]+0x00004658u; // 8008D2C8
  c->r[5]=0u+0x00000014u; // 8008D2CC
  c->r[6]=0u+0x00000100u; // 8008D2D0
  c->lr=0x8008D2D8u; f_800D4790(c); // 8008D2D4
  c->r[3]=c->r[31]|c->r[31]; // 8008D2D8
  c->lr=0x8008D2E0u; f_8008DE54(c); // 8008D2DC
L_8008D2E0:;
  c->r[31]=0u+0x00000000u; // 8008D2E0
  c->r[4]=0u+0x80090000u; // 8008D2E4
  W32(c->r[30]+0x00000074u,c->r[31]); // 8008D2E8
  c->r[4]=c->r[4]+0xFFFFD224u; // 8008D2EC
  c->r[3]=R32(c->r[30]+0x00000084u); // 8008D2F0
  c->lr=0x8008D2F8u; f_800D4808(c); // 8008D2F4
  W32(c->r[30]+0x00000084u,c->r[31]); // 8008D2F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008D2FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008D300
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D304
  c->lr=c->r[0]; // 8008D308
  c->r[1]=c->r[1]+0x00000010u; // 8008D30C
  return; // 8008D310
}

// Draw__8WiiMovieFii6Screen
void f_8008D314(Ctx* __restrict c) {
  trace_call(0x8008D314u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D314
  c->r[0]=c->lr; // 8008D318
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D31C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008D320
  c->r[31]=c->r[3]|c->r[3]; // 8008D324
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 8008D328
  c->r[6]=R32(c->r[31]+0x00000058u); // 8008D32C
  c->r[7]=R32(c->r[31]+0x0000005Cu); // 8008D330
  c->lr=0x8008D338u; f_8007F72C(c); // 8008D334
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 8008D338
  c->r[4]=c->r[3]|c->r[3]; // 8008D33C
  c->r[3]=c->r[31]|c->r[31]; // 8008D340
  c->lr=0x8008D348u; f_8008D464(c); // 8008D344
  c->lr=0x8008D34Cu; f_8007F884(c); // 8008D348
  cmps(c,0,(int32_t)c->r[3],5); // 8008D34C
  if (!crb(c,2)) { goto L_8008D3A0; } // 8008D350
  c->lr=0x8008D358u; f_8007F238(c); // 8008D354
  c->lr=0x8008D35Cu; f_8007EA5C(c); // 8008D358
  c->r[3]=R32(c->r[13]+0xFFFF8BA4u); // 8008D35C
  c->r[4]=R32(c->r[31]+0x00000054u); // 8008D360
  c->lr=0x8008D368u; f_800EDBBC(c); // 8008D364
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008D368
  cmps(c,0,(int32_t)c->r[0],0); // 8008D36C
  if (!crb(c,2)) { goto L_8008D37C; } // 8008D370
  c->lr=0x8008D378u; f_80080758(c); // 8008D374
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008D378
L_8008D37C:;
  c->r[4]=0u+0x80260000u; // 8008D37C
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008D380
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008D384
  c->r[4]=c->r[4]+0x00000178u; // 8008D388
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008D38C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008D390
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008D394
  c->ctr=c->r[12]; // 8008D398
  if (true) { c->lr=0x8008D3A0u; dispatch(c,c->ctr); } // 8008D39C
L_8008D3A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D3A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008D3A4
  c->lr=c->r[0]; // 8008D3A8
  c->r[1]=c->r[1]+0x00000010u; // 8008D3AC
  return; // 8008D3B0
}

// Draw__8WiiMovieFR9ImageRect6Screen
void f_8008D3B4(Ctx* __restrict c) {
  trace_call(0x8008D3B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D3B4
  c->r[0]=c->lr; // 8008D3B8
  c->r[7]=c->r[4]|c->r[4]; // 8008D3BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D3C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008D3C4
  c->r[31]=c->r[3]|c->r[3]; // 8008D3C8
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 8008D3CC
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008D3D0
  c->r[5]=R32(c->r[7]+0x00000004u); // 8008D3D4
  c->r[6]=R32(c->r[7]+0x00000008u); // 8008D3D8
  c->r[7]=R32(c->r[7]+0x0000000Cu); // 8008D3DC
  c->lr=0x8008D3E4u; f_8007F72C(c); // 8008D3E0
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 8008D3E4
  c->r[4]=c->r[3]|c->r[3]; // 8008D3E8
  c->r[3]=c->r[31]|c->r[31]; // 8008D3EC
  c->lr=0x8008D3F4u; f_8008D464(c); // 8008D3F0
  c->lr=0x8008D3F8u; f_8007F884(c); // 8008D3F4
  cmps(c,0,(int32_t)c->r[3],5); // 8008D3F8
  if (!crb(c,2)) { goto L_8008D44C; } // 8008D3FC
  c->lr=0x8008D404u; f_8007F238(c); // 8008D400
  c->lr=0x8008D408u; f_8007EA5C(c); // 8008D404
  c->r[3]=R32(c->r[13]+0xFFFF8BA4u); // 8008D408
  c->r[4]=R32(c->r[31]+0x00000054u); // 8008D40C
  c->lr=0x8008D414u; f_800EDBBC(c); // 8008D410
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008D414
  cmps(c,0,(int32_t)c->r[0],0); // 8008D418
  if (!crb(c,2)) { goto L_8008D428; } // 8008D41C
  c->lr=0x8008D424u; f_80080758(c); // 8008D420
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008D424
L_8008D428:;
  c->r[4]=0u+0x80260000u; // 8008D428
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008D42C
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008D430
  c->r[4]=c->r[4]+0x00000178u; // 8008D434
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008D438
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008D43C
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008D440
  c->ctr=c->r[12]; // 8008D444
  if (true) { c->lr=0x8008D44Cu; dispatch(c,c->ctr); } // 8008D448
L_8008D44C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D44C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008D450
  c->lr=c->r[0]; // 8008D454
  c->r[1]=c->r[1]+0x00000010u; // 8008D458
  return; // 8008D45C
}

// Draw__8WiiMovieFR9ImageRectR9ImageRect6Screen
void f_8008D460(Ctx* __restrict c) {
  trace_call(0x8008D460u);
  return; // 8008D460
}

// DrawSubtitles__8WiiMovieFi
void f_8008D464(Ctx* __restrict c) {
  trace_call(0x8008D464u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D464
  c->r[0]=c->lr; // 8008D468
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008D46C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008D470
  c->r[31]=c->r[3]|c->r[3]; // 8008D474
  W32(c->r[1]+0x00000018u,c->r[30]); // 8008D478
  c->r[0]=R32(c->r[3]+0x00000074u); // 8008D47C
  cmps(c,0,(int32_t)c->r[0],0); // 8008D480
  if (crb(c,2)) { goto L_8008D5D8; } // 8008D484
  c->r[0]=R32(c->r[3]+0x0000007Cu); // 8008D488
  cmps(c,0,(int32_t)c->r[0],0); // 8008D48C
  if (!crb(c,2)) { goto L_8008D498; } // 8008D490
  goto L_8008D5D8; // 8008D494
L_8008D498:;
  c->r[0]=R32(c->r[3]+0x00000080u); // 8008D498
  cmps(c,0,(int32_t)c->r[0],-1); // 8008D49C
  if (crb(c,2)) { goto L_8008D4D0; } // 8008D4A0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8008D4A4
  c->r[6]=R32(c->r[3]+0x00000084u); // 8008D4A8
  c->r[0]=R32(c->r[6]+c->r[5]); // 8008D4AC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8008D4B0
  if (crb(c,0)) { goto L_8008D4C8; } // 8008D4B4
  c->r[5]=c->r[6]+c->r[5]; // 8008D4B8
  c->r[0]=R32(c->r[5]+0x00000004u); // 8008D4BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8008D4C0
  if (!crb(c,1)) { goto L_8008D4D0; } // 8008D4C4
L_8008D4C8:;
  c->r[0]=0u+0xFFFFFFFFu; // 8008D4C8
  W32(c->r[3]+0x00000080u,c->r[0]); // 8008D4CC
L_8008D4D0:;
  c->r[0]=R32(c->r[3]+0x00000080u); // 8008D4D0
  cmps(c,0,(int32_t)c->r[0],-1); // 8008D4D4
  if (!crb(c,2)) { goto L_8008D528; } // 8008D4D8
  c->r[0]=R32(c->r[3]+0x0000007Cu); // 8008D4DC
  c->r[7]=0u+0x00000000u; // 8008D4E0
  c->r[5]=0u+0x00000000u; // 8008D4E4
  c->ctr=c->r[0]; // 8008D4E8
  cmps(c,0,(int32_t)c->r[0],0); // 8008D4EC
  if (!crb(c,1)) { goto L_8008D528; } // 8008D4F0
L_8008D4F4:;
  c->r[0]=R32(c->r[3]+0x00000084u); // 8008D4F4
  c->r[6]=c->r[0]+c->r[5]; // 8008D4F8
  c->r[0]=R32(c->r[5]+c->r[0]); // 8008D4FC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8008D500
  if (crb(c,0)) { goto L_8008D51C; } // 8008D504
  c->r[0]=R32(c->r[6]+0x00000004u); // 8008D508
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8008D50C
  if (crb(c,1)) { goto L_8008D51C; } // 8008D510
  W32(c->r[3]+0x00000080u,c->r[7]); // 8008D514
  goto L_8008D528; // 8008D518
L_8008D51C:;
  c->r[5]=c->r[5]+0x00000014u; // 8008D51C
  c->r[7]=c->r[7]+0x00000001u; // 8008D520
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8008D4F4; } // 8008D524
L_8008D528:;
  c->r[0]=R32(c->r[3]+0x00000080u); // 8008D528
  cmps(c,0,(int32_t)c->r[0],-1); // 8008D52C
  if (crb(c,2)) { goto L_8008D5D8; } // 8008D530
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 8008D534
  cmps(c,0,(int32_t)c->r[0],0); // 8008D538
  if (!crb(c,2)) { goto L_8008D548; } // 8008D53C
  c->lr=0x8008D544u; f_800838DC(c); // 8008D540
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 8008D544
L_8008D548:;
  c->r[3]=R32(c->r[13]+0xFFFF8B08u); // 8008D548
  c->r[4]=c->r[1]+0x0000000Cu; // 8008D54C
  c->r[5]=c->r[1]+0x00000008u; // 8008D550
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008D554
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008D558
  c->ctr=c->r[12]; // 8008D55C
  if (true) { c->lr=0x8008D564u; dispatch(c,c->ctr); } // 8008D560
  c->r[0]=R32(c->r[31]+0x00000080u); // 8008D564
  c->r[3]=R32(c->r[31]+0x00000084u); // 8008D568
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8008D56C
  c->r[3]=c->r[3]+c->r[0]; // 8008D570
  c->r[3]=c->r[3]+0x00000008u; // 8008D574
  c->lr=0x8008D57Cu; f_80074080(c); // 8008D578
  c->r[0]=R32(c->r[31]+0x00000080u); // 8008D57C
  c->r[30]=c->r[3]|c->r[3]; // 8008D580
  c->r[3]=R32(c->r[31]+0x00000084u); // 8008D584
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8008D588
  c->r[3]=c->r[3]+c->r[0]; // 8008D58C
  c->r[3]=c->r[3]+0x00000008u; // 8008D590
  c->lr=0x8008D598u; f_80074080(c); // 8008D594
  c->r[4]=c->r[3]|c->r[3]; // 8008D598
  c->r[3]=R32(c->r[31]+0x00000074u); // 8008D59C
  c->lr=0x8008D5A4u; f_80075EE4(c); // 8008D5A0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8008D5A4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8008D5A8
  c->r[6]=c->r[0]+c->r[3]; // 8008D5AC
  c->r[3]=R32(c->r[31]+0x00000074u); // 8008D5B0
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8008D5B4
  c->r[5]=R32(c->r[31]+0x00000078u); // 8008D5B8
  c->r[7]=sraw(c,c->r[6],1); // 8008D5BC
  c->r[6]=c->r[30]|c->r[30]; // 8008D5C0
  c->r[0]=c->r[0]+c->r[4]; // 8008D5C4
  c->r[0]=sraw(c,c->r[0],1); // 8008D5C8
  c->r[4]=c->r[0]-c->r[7]; // 8008D5CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008D5D0
  c->lr=0x8008D5D8u; f_80075D38(c); // 8008D5D4
L_8008D5D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008D5D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008D5DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8008D5E0
  c->lr=c->r[0]; // 8008D5E4
  c->r[1]=c->r[1]+0x00000020u; // 8008D5E8
  return; // 8008D5EC
}

// GetName__8WiiMovieFv
void f_8008D5F0(Ctx* __restrict c) {
  trace_call(0x8008D5F0u);
  c->r[3]=c->r[3]+0x00000008u; // 8008D5F0
  return; // 8008D5F4
}

// GetWidth__8WiiMovieFv
void f_8008D5F8(Ctx* __restrict c) {
  trace_call(0x8008D5F8u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 8008D5F8
  return; // 8008D5FC
}

// GetHeight__8WiiMovieFv
void f_8008D600(Ctx* __restrict c) {
  trace_call(0x8008D600u);
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 8008D600
  return; // 8008D604
}

// GetDepth__8WiiMovieFv
void f_8008D608(Ctx* __restrict c) {
  trace_call(0x8008D608u);
  c->r[3]=0u+0x00000000u; // 8008D608
  return; // 8008D60C
}

// GetPitch__8WiiMovieFv
void f_8008D610(Ctx* __restrict c) {
  trace_call(0x8008D610u);
  c->r[3]=0u+0x00000000u; // 8008D610
  return; // 8008D614
}

// Lock__8WiiMovieFv
void f_8008D618(Ctx* __restrict c) {
  trace_call(0x8008D618u);
  c->r[3]=0u+0x00000000u; // 8008D618
  return; // 8008D61C
}

// Unlock__8WiiMovieFv
void f_8008D620(Ctx* __restrict c) {
  trace_call(0x8008D620u);
  return; // 8008D620
}

// IsPlaying__8WiiMovieFv
void f_8008D624(Ctx* __restrict c) {
  trace_call(0x8008D624u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D624
  c->r[0]=c->lr; // 8008D628
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D62C
  c->lr=0x8008D634u; f_8007F884(c); // 8008D630
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8008D634
  c->r[0]=cntlz(c->r[0]); // 8008D638
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8008D63C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D640
  c->lr=c->r[0]; // 8008D644
  c->r[1]=c->r[1]+0x00000010u; // 8008D648
  return; // 8008D64C
}

// IsPaused__8WiiMovieFv
void f_8008D650(Ctx* __restrict c) {
  trace_call(0x8008D650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D650
  c->r[0]=c->lr; // 8008D654
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D658
  c->lr=0x8008D660u; f_8007F884(c); // 8008D65C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8008D660
  c->r[0]=cntlz(c->r[0]); // 8008D664
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8008D668
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D66C
  c->lr=c->r[0]; // 8008D670
  c->r[1]=c->r[1]+0x00000010u; // 8008D674
  return; // 8008D678
}

// IsStopped__8WiiMovieFv
void f_8008D67C(Ctx* __restrict c) {
  trace_call(0x8008D67Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D67C
  c->r[0]=c->lr; // 8008D680
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D684
  c->lr=0x8008D68Cu; f_8007F884(c); // 8008D688
  c->r[0]=cntlz(c->r[3]); // 8008D68C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8008D690
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D694
  c->lr=c->r[0]; // 8008D698
  c->r[1]=c->r[1]+0x00000010u; // 8008D69C
  return; // 8008D6A0
}

// IsDone__8WiiMovieFv
void f_8008D6A4(Ctx* __restrict c) {
  trace_call(0x8008D6A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D6A4
  c->r[0]=c->lr; // 8008D6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D6AC
  c->lr=0x8008D6B4u; f_8007F884(c); // 8008D6B0
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8008D6B4
  c->r[0]=cntlz(c->r[0]); // 8008D6B8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8008D6BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D6C0
  c->lr=c->r[0]; // 8008D6C4
  c->r[1]=c->r[1]+0x00000010u; // 8008D6C8
  return; // 8008D6CC
}

// Play__8WiiMovieFb
void f_8008D6D0(Ctx* __restrict c) {
  trace_call(0x8008D6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D6D0
  c->r[0]=c->lr; // 8008D6D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D6D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008D6DC
  c->r[31]=c->r[4]|c->r[4]; // 8008D6E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008D6E4
  c->r[30]=c->r[3]|c->r[3]; // 8008D6E8
  c->r[0]=R32(c->r[3]+0x00000070u); // 8008D6EC
  cmpu(c,0,c->r[0],0x00000001u); // 8008D6F0
  if (crb(c,2)) { goto L_8008D714; } // 8008D6F4
  c->lr=0x8008D6FCu; f_800DA49C(c); // 8008D6F8
  c->r[4]=R32(c->r[30]+0x00000070u); // 8008D6FC
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 8008D700
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8008D704
  c->r[0]=c->r[3]-c->r[0]; // 8008D708
  W32(c->r[30]+0x00000050u,c->r[0]); // 8008D70C
  goto L_8008D71C; // 8008D710
L_8008D714:;
  c->r[0]=0u+0x00000000u; // 8008D714
  W32(c->r[3]+0x00000050u,c->r[0]); // 8008D718
L_8008D71C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8008D71C
  if (crb(c,2)) { goto L_8008D738; } // 8008D720
  c->r[5]=R32(c->r[30]+0x00000050u); // 8008D724
  c->r[3]=0u+0x00000000u; // 8008D728
  c->r[4]=0u+0x00000001u; // 8008D72C
  c->lr=0x8008D734u; f_8007EE8C(c); // 8008D730
  goto L_8008D748; // 8008D734
L_8008D738:;
  c->r[5]=R32(c->r[30]+0x00000050u); // 8008D738
  c->r[3]=0u+0x00000000u; // 8008D73C
  c->r[4]=0u+0x00000000u; // 8008D740
  c->lr=0x8008D748u; f_8007EE8C(c); // 8008D744
L_8008D748:;
  cmps(c,0,(int32_t)c->r[3],0); // 8008D748
  if (!crb(c,2)) { goto L_8008D78C; } // 8008D74C
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 8008D750
  cmps(c,0,(int32_t)c->r[0],0); // 8008D754
  if (!crb(c,2)) { goto L_8008D764; } // 8008D758
  c->lr=0x8008D760u; f_80080758(c); // 8008D75C
  W32(c->r[13]+0xFFFF8B00u,c->r[3]); // 8008D760
L_8008D764:;
  c->r[4]=0u+0x80260000u; // 8008D764
  c->r[3]=R32(c->r[13]+0xFFFF8B00u); // 8008D768
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 8008D76C
  c->r[4]=c->r[4]+0x00000185u; // 8008D770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008D774
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008D778
  c->r[12]=R32(c->r[12]+0x00000060u); // 8008D77C
  c->ctr=c->r[12]; // 8008D780
  if (true) { c->lr=0x8008D788u; dispatch(c,c->ctr); } // 8008D784
  goto L_8008D790; // 8008D788
L_8008D78C:;
  c->lr=0x8008D790u; f_8007F1D8(c); // 8008D78C
L_8008D790:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D790
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008D794
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008D798
  c->lr=c->r[0]; // 8008D79C
  c->r[1]=c->r[1]+0x00000010u; // 8008D7A0
  return; // 8008D7A4
}

// Pause__8WiiMovieFv
void f_8008D7A8(Ctx* __restrict c) {
  trace_call(0x8008D7A8u);
  f_8007F314(c); return; // 8008D7A8
}

// Resume__8WiiMovieFv
void f_8008D7AC(Ctx* __restrict c) {
  trace_call(0x8008D7ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D7AC
  c->r[0]=c->lr; // 8008D7B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D7B4
  c->lr=0x8008D7BCu; f_8007F884(c); // 8008D7B8
  cmps(c,0,(int32_t)c->r[3],4); // 8008D7BC
  if (!crb(c,2)) { goto L_8008D7C8; } // 8008D7C0
  c->lr=0x8008D7C8u; f_8007F1D8(c); // 8008D7C4
L_8008D7C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D7C8
  c->lr=c->r[0]; // 8008D7CC
  c->r[1]=c->r[1]+0x00000010u; // 8008D7D0
  return; // 8008D7D4
}

// Stop__8WiiMovieFv
void f_8008D7D8(Ctx* __restrict c) {
  trace_call(0x8008D7D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D7D8
  c->r[0]=c->lr; // 8008D7DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D7E0
  c->lr=0x8008D7E8u; f_8007F238(c); // 8008D7E4
  c->lr=0x8008D7ECu; f_8007EA5C(c); // 8008D7E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D7EC
  c->lr=c->r[0]; // 8008D7F0
  c->r[1]=c->r[1]+0x00000010u; // 8008D7F4
  return; // 8008D7F8
}

// GetVolume__8WiiMovieFv
void f_8008D7FC(Ctx* __restrict c) {
  trace_call(0x8008D7FCu);
  f_8007FF14(c); return; // 8008D7FC
}

// SetVolume__8WiiMovieFi
void f_8008D800(Ctx* __restrict c) {
  trace_call(0x8008D800u);
  cmps(c,0,(int32_t)c->r[4],0); // 8008D800
  if (!crb(c,0)) { goto L_8008D80C; } // 8008D804
  c->r[4]=0u+0x00000000u; // 8008D808
L_8008D80C:;
  cmps(c,0,(int32_t)c->r[4],127); // 8008D80C
  if (!crb(c,1)) { goto L_8008D818; } // 8008D810
  c->r[4]=0u+0x0000007Fu; // 8008D814
L_8008D818:;
  c->r[3]=c->r[4]|c->r[4]; // 8008D818
  c->r[4]=0u+0x00000000u; // 8008D81C
  f_8007FDEC(c); return; // 8008D820
}

// CreateMovie__11WiiGraphicsFv
void f_8008D824(Ctx* __restrict c) {
  trace_call(0x8008D824u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D824
  c->r[0]=c->lr; // 8008D828
  c->r[3]=0u+0x00000088u; // 8008D82C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D830
  c->lr=0x8008D838u; f_8008DC84(c); // 8008D834
  cmps(c,0,(int32_t)c->r[3],0); // 8008D838
  if (crb(c,2)) { goto L_8008D86C; } // 8008D83C
  c->r[5]=0u+0x00000000u; // 8008D840
  W32(c->r[3]+0x00000004u,c->r[5]); // 8008D844
  c->r[4]=0u+0x80260000u; // 8008D848
  c->r[0]=0u+0xFFFFFFFFu; // 8008D84C
  c->r[4]=c->r[4]+0x00004610u; // 8008D850
  W32(c->r[3]+0x00000000u,c->r[4]); // 8008D854
  W32(c->r[3]+0x00000054u,c->r[5]); // 8008D858
  W32(c->r[3]+0x00000074u,c->r[5]); // 8008D85C
  W32(c->r[3]+0x00000084u,c->r[5]); // 8008D860
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 8008D864
  W32(c->r[3]+0x00000080u,c->r[0]); // 8008D868
L_8008D86C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D86C
  c->lr=c->r[0]; // 8008D870
  c->r[1]=c->r[1]+0x00000010u; // 8008D874
  return; // 8008D878
}

// FreeMovie__11WiiGraphicsFP5Movie
void f_8008D87C(Ctx* __restrict c) {
  trace_call(0x8008D87Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 8008D87C
  if (crb(c,2)) return; // 8008D880
  c->r[3]=c->r[4]|c->r[4]; // 8008D884
  c->r[4]=0u+0x00000001u; // 8008D888
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008D88C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8008D890
  c->ctr=c->r[12]; // 8008D894
  if (true) { dispatch(c,c->ctr); return; } // 8008D898
  return; // 8008D89C
}

// __dt__8WiiMovieFv
void f_8008D8A0(Ctx* __restrict c) {
  trace_call(0x8008D8A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D8A0
  c->r[0]=c->lr; // 8008D8A4
  cmps(c,0,(int32_t)c->r[3],0); // 8008D8A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008D8B0
  c->r[31]=c->r[4]|c->r[4]; // 8008D8B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008D8B8
  c->r[30]=c->r[3]|c->r[3]; // 8008D8BC
  if (crb(c,2)) { goto L_8008D93C; } // 8008D8C0
  c->r[12]=0u+0x80260000u; // 8008D8C4
  c->r[12]=c->r[12]+0x00004610u; // 8008D8C8
  W32(c->r[3]+0x00000000u,c->r[12]); // 8008D8CC
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008D8D0
  c->ctr=c->r[12]; // 8008D8D4
  if (true) { c->lr=0x8008D8DCu; dispatch(c,c->ctr); } // 8008D8D8
  cmps(c,0,(int32_t)c->r[30],0); // 8008D8DC
  if (crb(c,2)) { goto L_8008D92C; } // 8008D8E0
  c->r[4]=0u+0x80260000u; // 8008D8E4
  c->r[3]=c->r[30]|c->r[30]; // 8008D8E8
  c->r[4]=c->r[4]+0x00002558u; // 8008D8EC
  W32(c->r[30]+0x00000000u,c->r[4]); // 8008D8F0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008D8F4
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008D8F8
  c->ctr=c->r[12]; // 8008D8FC
  if (true) { c->lr=0x8008D904u; dispatch(c,c->ctr); } // 8008D900
  cmps(c,0,(int32_t)c->r[30],0); // 8008D904
  if (crb(c,2)) { goto L_8008D92C; } // 8008D908
  c->r[4]=0u+0x80260000u; // 8008D90C
  c->r[3]=c->r[30]|c->r[30]; // 8008D910
  c->r[4]=c->r[4]+0x0000265Cu; // 8008D914
  W32(c->r[30]+0x00000000u,c->r[4]); // 8008D918
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008D91C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008D920
  c->ctr=c->r[12]; // 8008D924
  if (true) { c->lr=0x8008D92Cu; dispatch(c,c->ctr); } // 8008D928
L_8008D92C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8008D92C
  if (!crb(c,1)) { goto L_8008D93C; } // 8008D930
  c->r[3]=c->r[30]|c->r[30]; // 8008D934
  c->lr=0x8008D93Cu; f_8008DE54(c); // 8008D938
L_8008D93C:;
  c->r[3]=c->r[30]|c->r[30]; // 8008D93C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008D940
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008D944
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008D948
  c->lr=c->r[0]; // 8008D94C
  c->r[1]=c->r[1]+0x00000010u; // 8008D950
  return; // 8008D954
}

// Draw__10WiiTextureFii6Screen
void f_8008D958(Ctx* __restrict c) {
  trace_call(0x8008D958u);
  return; // 8008D958
}

// Draw__10WiiTextureFR9ImageRect6Screen
void f_8008D95C(Ctx* __restrict c) {
  trace_call(0x8008D95Cu);
  return; // 8008D95C
}

// Draw__10WiiTextureFR9ImageRectR9ImageRect6Screen
void f_8008D960(Ctx* __restrict c) {
  trace_call(0x8008D960u);
  return; // 8008D960
}

// __dt__9WiiSpriteFv
void f_8008D964(Ctx* __restrict c) {
  trace_call(0x8008D964u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008D964
  c->r[0]=c->lr; // 8008D968
  cmps(c,0,(int32_t)c->r[3],0); // 8008D96C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008D970
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008D974
  c->r[31]=c->r[4]|c->r[4]; // 8008D978
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008D97C
  c->r[30]=c->r[3]|c->r[3]; // 8008D980
  if (crb(c,2)) { goto L_8008DA00; } // 8008D984
  c->r[12]=0u+0x80260000u; // 8008D988
  c->r[12]=c->r[12]+0x000046D0u; // 8008D98C
  W32(c->r[3]+0x00000000u,c->r[12]); // 8008D990
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008D994
  c->ctr=c->r[12]; // 8008D998
  if (true) { c->lr=0x8008D9A0u; dispatch(c,c->ctr); } // 8008D99C
  cmps(c,0,(int32_t)c->r[30],0); // 8008D9A0
  if (crb(c,2)) { goto L_8008D9F0; } // 8008D9A4
  c->r[4]=0u+0x80260000u; // 8008D9A8
  c->r[3]=c->r[30]|c->r[30]; // 8008D9AC
  c->r[4]=c->r[4]+0x00002618u; // 8008D9B0
  W32(c->r[30]+0x00000000u,c->r[4]); // 8008D9B4
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008D9B8
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008D9BC
  c->ctr=c->r[12]; // 8008D9C0
  if (true) { c->lr=0x8008D9C8u; dispatch(c,c->ctr); } // 8008D9C4
  cmps(c,0,(int32_t)c->r[30],0); // 8008D9C8
  if (crb(c,2)) { goto L_8008D9F0; } // 8008D9CC
  c->r[4]=0u+0x80260000u; // 8008D9D0
  c->r[3]=c->r[30]|c->r[30]; // 8008D9D4
  c->r[4]=c->r[4]+0x0000265Cu; // 8008D9D8
  W32(c->r[30]+0x00000000u,c->r[4]); // 8008D9DC
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008D9E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 8008D9E4
  c->ctr=c->r[12]; // 8008D9E8
  if (true) { c->lr=0x8008D9F0u; dispatch(c,c->ctr); } // 8008D9EC
L_8008D9F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8008D9F0
  if (!crb(c,1)) { goto L_8008DA00; } // 8008D9F4
  c->r[3]=c->r[30]|c->r[30]; // 8008D9F8
  c->lr=0x8008DA00u; f_8008DE54(c); // 8008D9FC
L_8008DA00:;
  c->r[3]=c->r[30]|c->r[30]; // 8008DA00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008DA04
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008DA08
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008DA0C
  c->lr=c->r[0]; // 8008DA10
  c->r[1]=c->r[1]+0x00000010u; // 8008DA14
  return; // 8008DA18
}

// __dt__14WiiImageHandleFv
void f_8008DA1C(Ctx* __restrict c) {
  trace_call(0x8008DA1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008DA1C
  c->r[0]=c->lr; // 8008DA20
  cmps(c,0,(int32_t)c->r[3],0); // 8008DA24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008DA28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008DA2C
  c->r[31]=c->r[3]|c->r[3]; // 8008DA30
  if (crb(c,2)) { goto L_8008DA44; } // 8008DA34
  cmps(c,0,(int32_t)c->r[4],0); // 8008DA38
  if (!crb(c,1)) { goto L_8008DA44; } // 8008DA3C
  c->lr=0x8008DA44u; f_8008DE54(c); // 8008DA40
L_8008DA44:;
  c->r[3]=c->r[31]|c->r[31]; // 8008DA44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008DA48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008DA4C
  c->lr=c->r[0]; // 8008DA50
  c->r[1]=c->r[1]+0x00000010u; // 8008DA54
  return; // 8008DA58
}

// BatteryCheckCallback__Fll
void f_8008DA5C(Ctx* __restrict c) {
  trace_call(0x8008DA5Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 8008DA5C
  if (!crb(c,2)) return; // 8008DA60
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 8008DA64
  c->r[4]=0u+0x802B0000u; // 8008DA68
  c->r[4]=c->r[4]+0xFFFFF9D0u; // 8008DA6C
  c->r[4]=c->r[4]+c->r[0]; // 8008DA70
  c->r[0]=R8(c->r[4]+0x00000014u); // 8008DA74
  cmps(c,0,(int32_t)c->r[0],0); // 8008DA78
  if (!crb(c,2)) return; // 8008DA7C
  c->r[4]=c->r[13]+0xFFFF8BBCu; // 8008DA80
  c->r[0]=0u+0x00000001u; // 8008DA84
  W8(c->r[4]+c->r[3],c->r[0]); // 8008DA88
  return; // 8008DA8C
}

// is_controller_active__Fi
void f_8008DA90(Ctx* __restrict c) {
  trace_call(0x8008DA90u);
  cmps(c,0,(int32_t)c->r[3],0); // 8008DA90
  if (crb(c,2)) { goto L_8008DAB4; } // 8008DA94
  cmps(c,0,(int32_t)c->r[3],1); // 8008DA98
  if (crb(c,2)) { goto L_8008DABC; } // 8008DA9C
  cmps(c,0,(int32_t)c->r[3],2); // 8008DAA0
  if (crb(c,2)) { goto L_8008DAC4; } // 8008DAA4
  cmps(c,0,(int32_t)c->r[3],3); // 8008DAA8
  if (crb(c,2)) { goto L_8008DACC; } // 8008DAAC
  goto L_8008DAD4; // 8008DAB0
L_8008DAB4:;
  c->r[3]=0u+0x00000001u; // 8008DAB4
  goto L_8008DAD8; // 8008DAB8
L_8008DABC:;
  c->r[3]=0u+0x00000002u; // 8008DABC
  goto L_8008DAD8; // 8008DAC0
L_8008DAC4:;
  c->r[3]=0u+0x00000004u; // 8008DAC4
  goto L_8008DAD8; // 8008DAC8
L_8008DACC:;
  c->r[3]=0u+0x00000008u; // 8008DACC
  goto L_8008DAD8; // 8008DAD0
L_8008DAD4:;
  c->r[3]=0u+0x00000001u; // 8008DAD4
L_8008DAD8:;
  c->r[0]=R8(c->r[13]+0xFFFF8C04u); // 8008DAD8
  c->r[3]=c->r[0]&c->r[3]; // 8008DADC
  c->r[0]=0u-c->r[3]; // 8008DAE0
  c->r[0]=c->r[0]|c->r[3]; // 8008DAE4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8008DAE8
  return; // 8008DAEC
}

// ConfigureMEMBRRES__Fv
void f_8008DAF0(Ctx* __restrict c) {
  trace_call(0x8008DAF0u);
  return; // 8008DAF0
}

// DestroyBRRESHeap__Fv
void f_8008DAF4(Ctx* __restrict c) {
  trace_call(0x8008DAF4u);
  return; // 8008DAF4
}

// myAlloc__FUl
void f_8008DAF8(Ctx* __restrict c) {
  trace_call(0x8008DAF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008DAF8
  c->r[0]=c->lr; // 8008DAFC
  c->r[5]=0u+0x802B0000u; // 8008DB00
  c->r[4]=c->r[3]|c->r[3]; // 8008DB04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008DB08
  c->r[3]=c->r[5]+0xFFFFF9A0u; // 8008DB0C
  c->lr=0x8008DB14u; f_800EE128(c); // 8008DB10
  c->r[4]=R32(c->r[13]+0xFFFF8BACu); // 8008DB14
  c->r[0]=c->r[4]+0x00000001u; // 8008DB18
  W32(c->r[13]+0xFFFF8BACu,c->r[0]); // 8008DB1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008DB20
  c->lr=c->r[0]; // 8008DB24
  c->r[1]=c->r[1]+0x00000010u; // 8008DB28
  return; // 8008DB2C
}

// myFree__FPv
void f_8008DB30(Ctx* __restrict c) {
  trace_call(0x8008DB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008DB30
  c->r[0]=c->lr; // 8008DB34
  cmps(c,0,(int32_t)c->r[3],0); // 8008DB38
  c->r[4]=c->r[3]|c->r[3]; // 8008DB3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008DB40
  if (!crb(c,2)) { goto L_8008DB50; } // 8008DB44
  c->r[3]=0u+0x00000001u; // 8008DB48
  goto L_8008DB6C; // 8008DB4C
L_8008DB50:;
  c->r[3]=0u+0x802B0000u; // 8008DB50
  c->r[3]=c->r[3]+0xFFFFF9A0u; // 8008DB54
  c->lr=0x8008DB5Cu; f_800EE138(c); // 8008DB58
  c->r[4]=R32(c->r[13]+0xFFFF8BB0u); // 8008DB5C
  c->r[3]=0u+0x00000001u; // 8008DB60
  c->r[0]=c->r[4]+0x00000001u; // 8008DB64
  W32(c->r[13]+0xFFFF8BB0u,c->r[0]); // 8008DB68
L_8008DB6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008DB6C
  c->lr=c->r[0]; // 8008DB70
  c->r[1]=c->r[1]+0x00000010u; // 8008DB74
  return; // 8008DB78
}

// myAllocMEM2__FUl
void f_8008DB7C(Ctx* __restrict c) {
  trace_call(0x8008DB7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008DB7C
  c->r[0]=c->lr; // 8008DB80
  c->r[5]=0u+0x802B0000u; // 8008DB84
  c->r[4]=c->r[3]|c->r[3]; // 8008DB88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008DB8C
  c->r[3]=c->r[5]+0xFFFFF9B0u; // 8008DB90
  c->lr=0x8008DB98u; f_800EE128(c); // 8008DB94
  c->r[4]=R32(c->r[13]+0xFFFF8BACu); // 8008DB98
  c->r[0]=c->r[4]+0x00000001u; // 8008DB9C
  W32(c->r[13]+0xFFFF8BACu,c->r[0]); // 8008DBA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008DBA4
  c->lr=c->r[0]; // 8008DBA8
  c->r[1]=c->r[1]+0x00000010u; // 8008DBAC
  return; // 8008DBB0
}

// myFreeMEM2__FPv
void f_8008DBB4(Ctx* __restrict c) {
  trace_call(0x8008DBB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008DBB4
  c->r[0]=c->lr; // 8008DBB8
  cmps(c,0,(int32_t)c->r[3],0); // 8008DBBC
  c->r[4]=c->r[3]|c->r[3]; // 8008DBC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008DBC4
  if (!crb(c,2)) { goto L_8008DBD4; } // 8008DBC8
  c->r[3]=0u+0x00000001u; // 8008DBCC
  goto L_8008DBF0; // 8008DBD0
L_8008DBD4:;
  c->r[3]=0u+0x802B0000u; // 8008DBD4
  c->r[3]=c->r[3]+0xFFFFF9B0u; // 8008DBD8
  c->lr=0x8008DBE0u; f_800EE138(c); // 8008DBDC
  c->r[4]=R32(c->r[13]+0xFFFF8BB0u); // 8008DBE0
  c->r[3]=0u+0x00000001u; // 8008DBE4
  c->r[0]=c->r[4]+0x00000001u; // 8008DBE8
  W32(c->r[13]+0xFFFF8BB0u,c->r[0]); // 8008DBEC
L_8008DBF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008DBF0
  c->lr=c->r[0]; // 8008DBF4
  c->r[1]=c->r[1]+0x00000010u; // 8008DBF8
  return; // 8008DBFC
}

// myAllocBRRES__FUl
void f_8008DC00(Ctx* __restrict c) {
  trace_call(0x8008DC00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008DC00
  c->r[0]=c->lr; // 8008DC04
  c->r[5]=0u+0x802B0000u; // 8008DC08
  c->r[4]=c->r[3]|c->r[3]; // 8008DC0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008DC10
  c->r[3]=c->r[5]+0xFFFFF9A0u; // 8008DC14
  c->lr=0x8008DC1Cu; f_800EE128(c); // 8008DC18
  c->r[4]=R32(c->r[13]+0xFFFF8BACu); // 8008DC1C
  c->r[0]=c->r[4]+0x00000001u; // 8008DC20
  W32(c->r[13]+0xFFFF8BACu,c->r[0]); // 8008DC24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008DC28
  c->lr=c->r[0]; // 8008DC2C
  c->r[1]=c->r[1]+0x00000010u; // 8008DC30
  return; // 8008DC34
}

