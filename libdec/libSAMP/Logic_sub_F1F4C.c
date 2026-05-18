// ADDR: 0xf1fc0
// SYMBOL: sub_F1FC0
void __fastcall sub_F1FC0(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  float v10; // s18
  int v11; // r9
  int v12; // r10
  float v13; // s16
  int v14; // r5
  float v15; // s22
  float v16; // s20
  int v17; // r1
  float v18; // s20
  float v19; // s18
  int v20; // r1
  float v21; // s20
  float v22; // s18
  int v23; // r1
  float v24; // s18
  void *v25[2]; // [sp+1Ch] [bp-1D4h] BYREF
  void *v26; // [sp+24h] [bp-1CCh]
  float v27; // [sp+28h] [bp-1C8h] BYREF
  float v28; // [sp+2Ch] [bp-1C4h]
  _QWORD v29[2]; // [sp+30h] [bp-1C0h] BYREF
  float v30; // [sp+44h] [bp-1ACh] BYREF
  float v31; // [sp+48h] [bp-1A8h]
  char s[256]; // [sp+4Ch] [bp-1A4h] BYREF
  float v33; // [sp+14Ch] [bp-A4h] BYREF
  float v34; // [sp+150h] [bp-A0h]
  float v35; // [sp+154h] [bp-9Ch]
  double v36; // [sp+158h] [bp-98h] BYREF
  float v37; // [sp+160h] [bp-90h]
  _BYTE v38[48]; // [sp+168h] [bp-88h] BYREF
  double v39; // [sp+198h] [bp-58h]
  float v40; // [sp+1A0h] [bp-50h]

  sub_E35A0(dword_23DEF0);
  v10 = COERCE_FLOAT(sub_F8E1C(a4));
  if ( v10 <= 20.0 )
  {
    sub_F8910(a4, v38);
    v37 = v40;
    v36 = v39;
    ((void (__fastcall *)(double *, float *, _DWORD, _DWORD, _DWORD, _DWORD))(dword_23DF24 + 6051737))(
      &v36,
      &v33,
      0,
      0,
      0,
      0);
    if ( v35 >= 1.0 )
    {
      v11 = sub_F8A2C(a4);
      v12 = sub_109864(a4);
      v13 = COERCE_FLOAT(sub_109AB4(a4));
      v14 = sub_10A484(a4);
      v30 = v33;
      v31 = v34;
      v29[0] = 0x3F0B8B8C3E54D4D6LL;
      v29[1] = 0x3F8000003F54D4D6LL;
      sub_F236C(s, LODWORD(v34), "[id: %d, type: %d subtype: %d Health: %.1f preloaded: %u]", a3, v11, v12, v13, 0);
      sub_DC6DC(v25, s);
      sub_12B090(&v27, a2, v25, *(float *)&dword_238EC0 * 0.5);
      v15 = v27;
      v16 = v28;
      if ( LOBYTE(v25[0]) << 31 )
        operator delete(v26);
      v30 = v33 - (float)(v15 * 0.5);
      sub_DC6DC(v25, s);
      sub_12AE34(a2, (int)&v30, (int)v29, (int)v25, 1, *(float *)&dword_238EC0 * 0.5);
      if ( LOBYTE(v25[0]) << 31 )
        operator delete(v26);
      v31 = v16 + v31;
      sub_F236C(s, v17, "Distance: %.2fm PassengerSeats: %u", v10, v14);
      sub_DC6DC(v25, s);
      sub_12B090(&v27, a2, v25, *(float *)&dword_238EC0 * 0.5);
      v18 = v27;
      v19 = v28;
      if ( LOBYTE(v25[0]) << 31 )
        operator delete(v26);
      v30 = v33 - (float)(v18 * 0.5);
      sub_DC6DC(v25, s);
      sub_12AE34(a2, (int)&v30, (int)v29, (int)v25, 1, *(float *)&dword_238EC0 * 0.5);
      if ( LOBYTE(v25[0]) << 31 )
        operator delete(v26);
      v31 = v19 + v31;
      sub_F236C(s, v20, "cPos: %.3f,%.3f,%.3f", *(float *)&v36, *((float *)&v36 + 1), v37);
      sub_DC6DC(v25, s);
      sub_12B090(&v27, a2, v25, *(float *)&dword_238EC0 * 0.5);
      v21 = v27;
      v22 = v28;
      if ( LOBYTE(v25[0]) << 31 )
        operator delete(v26);
      v30 = v33 - (float)(v21 * 0.5);
      sub_DC6DC(v25, s);
      sub_12AE34(a2, (int)&v30, (int)v29, (int)v25, 1, *(float *)&dword_238EC0 * 0.5);
      if ( LOBYTE(v25[0]) << 31 )
        operator delete(v26);
      v31 = v22 + v31;
      sub_F236C(s, v23, "sPos: %.3f,%.3f,%.3f", a5, a6, a7);
      sub_DC6DC(v25, s);
      sub_12B090(&v27, a2, v25, *(float *)&dword_238EC0 * 0.5);
      v24 = v27;
      if ( LOBYTE(v25[0]) << 31 )
        operator delete(v26);
      v30 = v33 - (float)(v24 * 0.5);
      sub_DC6DC(v25, s);
      sub_12AE34(a2, (int)&v30, (int)v29, (int)v25, 1, *(float *)&dword_238EC0 * 0.5);
      if ( LOBYTE(v25[0]) << 31 )
        operator delete(v26);
    }
  }
}


// ======================================================================
// ADDR: 0xf2396
// SYMBOL: sub_F2396
bool __fastcall sub_F2396(int a1, unsigned int a2)
{
  _BOOL4 result; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r2

  result = 0;
  if ( a2 >> 4 <= 0x7C && *(_BYTE *)(a1 + a2 + 40000) )
  {
    v5 = *(_DWORD **)(a1 + 60004);
    v4 = *(_DWORD **)(a1 + 60000);
    if ( v4 != v5 )
    {
      while ( *v4 != a2 )
      {
        if ( ++v4 == v5 )
          return 0;
      }
    }
    return v4 != v5 && *v4 != 0;
  }
  return result;
}


// ======================================================================
