// ADDR: 0x138138
// SYMBOL: sub_138138
void __fastcall sub_138138(int a1, int a2)
{
  _DWORD *i; // r1
  int v4; // r2
  int v5; // r5
  _BYTE v6[8]; // [sp+4h] [bp-1Ch] BYREF
  void *v7; // [sp+Ch] [bp-14h]

  for ( i = (_DWORD *)dword_3141D0; i; i = (_DWORD *)*i )
  {
    v4 = i[3];
    if ( *(_DWORD *)(v4 + 172) == a1 )
    {
      v5 = dword_381A0C;
      std::string::basic_string(v6, v4 + 124);
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))sub_1381B4)(v5, v6, (float)a2);
      if ( v6[0] << 31 )
        operator delete(v7);
      return;
    }
  }
}


// ======================================================================
// ADDR: 0x155c20
// SYMBOL: sub_155C20
unsigned __int8 *__fastcall sub_155C20(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r0
  unsigned __int8 v6; // r2
  int v7; // r4
  __int64 v8; // kr00_8
  unsigned __int8 v10[8]; // [sp+0h] [bp-18h] BYREF
  __int64 v11; // [sp+8h] [bp-10h]

  v3 = 100 * a2;
  v4 = *(unsigned __int8 *)(a1 + 125);
  *(_DWORD *)(a1 + 112) = 100 * a2;
  if ( v4 )
    sub_154698(100 * a2);
  v11 = 0LL;
  v10[0] = 0;
  sub_EAC24(v10, a2, v3, v3 >> 31);
  v5 = sub_E4710((unsigned __int8 *)(a1 + 96), "globalVolume");
  v6 = *(_BYTE *)v5;
  *(_BYTE *)v5 = v10[0];
  v7 = HIDWORD(v11);
  v8 = *(_QWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v11;
  *(_DWORD *)(v5 + 12) = v7;
  v10[0] = v6;
  v11 = v8;
  return sub_E3F7A(v10);
}


// ======================================================================
// ADDR: 0x155ca8
// SYMBOL: sub_155CA8
unsigned __int8 *__fastcall sub_155CA8(int a1, int a2)
{
  _DWORD *v3; // r0
  float v4; // s16
  int v5; // r0
  unsigned __int8 v6; // r2
  int v7; // r4
  __int64 v8; // kr00_8
  unsigned __int8 v10[8]; // [sp+0h] [bp-20h] BYREF
  __int64 v11; // [sp+8h] [bp-18h]

  v3 = *(_DWORD **)(a1 + 92);
  v4 = (float)a2 / 100.0;
  if ( v3 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*v3 + 20))(*v3, (float)a2 / 100.0);
  v11 = 0LL;
  v10[0] = 0;
  sub_EA660(v10, a2, COERCE_UNSIGNED_INT64(v4), HIDWORD(COERCE_UNSIGNED_INT64(v4)));
  v5 = sub_E4710((unsigned __int8 *)(a1 + 96), "recorderVolume");
  v6 = *(_BYTE *)v5;
  *(_BYTE *)v5 = v10[0];
  v7 = HIDWORD(v11);
  v8 = *(_QWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v11;
  *(_DWORD *)(v5 + 12) = v7;
  v10[0] = v6;
  v11 = v8;
  return sub_E3F7A(v10);
}


// ======================================================================
// ADDR: 0x155d58
// SYMBOL: sub_155D58
unsigned __int8 *__fastcall sub_155D58(int a1, int a2)
{
  float v3; // s0
  int v4; // r0
  unsigned __int8 v5; // r2
  int v6; // r4
  __int64 v7; // kr00_8
  unsigned __int8 v9[8]; // [sp+0h] [bp-18h] BYREF
  __int64 v10; // [sp+8h] [bp-10h]

  v3 = (float)a2 / 100.0;
  *(float *)(a1 + 116) = v3;
  v10 = 0LL;
  v9[0] = 0;
  sub_EA660(v9, a2, COERCE_UNSIGNED_INT64(v3), HIDWORD(COERCE_UNSIGNED_INT64(v3)));
  v4 = sub_E4710((unsigned __int8 *)(a1 + 96), "vehicleVolume");
  v5 = *(_BYTE *)v4;
  *(_BYTE *)v4 = v9[0];
  v6 = HIDWORD(v10);
  v7 = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = v10;
  *(_DWORD *)(v4 + 12) = v6;
  v9[0] = v5;
  v10 = v7;
  return sub_E3F7A(v9);
}


// ======================================================================
// ADDR: 0x155dec
// SYMBOL: sub_155DEC
unsigned __int8 *__fastcall sub_155DEC(int a1, int a2)
{
  float v3; // s0
  int v4; // r0
  unsigned __int8 v5; // r2
  int v6; // r4
  __int64 v7; // kr00_8
  unsigned __int8 v9[8]; // [sp+0h] [bp-18h] BYREF
  __int64 v10; // [sp+8h] [bp-10h]

  v3 = (float)a2 / 100.0;
  *(float *)(a1 + 120) = v3;
  v10 = 0LL;
  v9[0] = 0;
  sub_EA660(v9, a2, COERCE_UNSIGNED_INT64(v3), HIDWORD(COERCE_UNSIGNED_INT64(v3)));
  v4 = sub_E4710((unsigned __int8 *)(a1 + 96), "3DVolume");
  v5 = *(_BYTE *)v4;
  *(_BYTE *)v4 = v9[0];
  v6 = HIDWORD(v10);
  v7 = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = v10;
  *(_DWORD *)(v4 + 12) = v6;
  v9[0] = v5;
  v10 = v7;
  return sub_E3F7A(v9);
}


// ======================================================================
// ADDR: 0x155e80
// SYMBOL: sub_155E80
unsigned __int8 *__fastcall sub_155E80(int a1, int a2, int a3)
{
  unsigned __int8 *result; // r0
  unsigned __int8 *v7; // r8
  float v8; // s16
  __int64 v9; // r0
  char *v10; // r9
  unsigned __int8 *v11; // r10
  unsigned __int8 *v12; // r0
  unsigned __int8 *v13; // r0
  int v14; // r0
  unsigned __int8 v15; // r2
  int v16; // r6
  __int64 v17; // kr00_8
  unsigned __int8 *v18; // r0
  unsigned __int8 *v19; // r0
  int v20; // r0
  unsigned __int8 v21; // r2
  int v22; // r5
  __int64 v23; // kr08_8
  unsigned __int8 v24[8]; // [sp+0h] [bp-48h] BYREF
  __int64 v25; // [sp+8h] [bp-40h]
  unsigned __int8 v26[8]; // [sp+10h] [bp-38h] BYREF
  __int64 v27; // [sp+18h] [bp-30h]

  result = (unsigned __int8 *)sub_152694(*(_DWORD *)(a1 + 88), a2);
  if ( result )
  {
    v7 = result;
    v8 = (float)a3 / 100.0;
    v9 = sub_15E670(a2);
    v10 = (char *)v9;
    *((float *)v7 + 8) = v8;
    v27 = 0LL;
    v26[0] = 0;
    sub_EA660(v26, SHIDWORD(v9), COERCE_UNSIGNED_INT64(v8), HIDWORD(COERCE_UNSIGNED_INT64(v8)));
    v11 = (unsigned __int8 *)(a1 + 96);
    v12 = (unsigned __int8 *)sub_E4710((unsigned __int8 *)(a1 + 96), "playerConfig");
    v13 = (unsigned __int8 *)sub_E4710(v12, v10);
    v14 = sub_E4710(v13, "volume");
    v15 = *(_BYTE *)v14;
    *(_BYTE *)v14 = v26[0];
    v16 = HIDWORD(v27);
    v17 = *(_QWORD *)(v14 + 8);
    *(_DWORD *)(v14 + 8) = v27;
    *(_DWORD *)(v14 + 12) = v16;
    v26[0] = v15;
    v27 = v17;
    sub_E3F7A(v26);
    v7[30] = v8 < 0.1;
    v25 = 0LL;
    v24[0] = 0;
    sub_EA862(v24, v8 < 0.1);
    v18 = (unsigned __int8 *)sub_E4710(v11, "playerConfig");
    v19 = (unsigned __int8 *)sub_E4710(v18, v10);
    v20 = sub_E4710(v19, "muted");
    v21 = *(_BYTE *)v20;
    *(_BYTE *)v20 = v24[0];
    v22 = HIDWORD(v25);
    v23 = *(_QWORD *)(v20 + 8);
    *(_DWORD *)(v20 + 8) = v25;
    *(_DWORD *)(v20 + 12) = v22;
    v24[0] = v21;
    v25 = v23;
    return sub_E3F7A(v24);
  }
  return result;
}


// ======================================================================
