// ADDR: 0x84058
// SYMBOL: sub_84058
int __fastcall sub_84058(float *a1, float a2)
{
  float v3; // r1
  int v4; // r2
  float v5; // r0
  int v6; // r0
  int v7; // r1
  _DWORD v9[2]; // [sp+Ch] [bp-44h] BYREF
  _DWORD v10[2]; // [sp+14h] [bp-3Ch] BYREF
  float v11[2]; // [sp+1Ch] [bp-34h] BYREF
  float v12[2]; // [sp+24h] [bp-2Ch] BYREF
  float v13; // [sp+2Ch] [bp-24h] BYREF
  float v14; // [sp+30h] [bp-20h]
  float v15; // [sp+34h] [bp-1Ch]
  _DWORD v16[6]; // [sp+38h] [bp-18h] BYREF

  v3 = *a1;
  v4 = *((_DWORD *)a1 + 1);
  v5 = a1[2];
  *(float *)v16 = v3;
  v16[1] = v4;
  v15 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  *(float *)&v16[2] = (float)((float)(a2 * 0.0475) + 0.5) + v5;
  ((void (__fastcall *)(_DWORD *, float *, _DWORD, _DWORD, _DWORD, _DWORD))(dword_1A4404 + 6051737))(
    v16,
    &v13,
    0,
    0,
    0,
    0);
  if ( v15 >= 1.0 )
  {
    v12[0] = v13 + -23.0;
    v12[1] = v14 - *(float *)&dword_116D58;
    v11[0] = (float)(v13 + -23.0) + 46.0;
    v11[1] = (float)(v14 - *(float *)&dword_116D58) + 46.0;
    v6 = sub_8C550();
    v7 = *(_DWORD *)dword_1A6FA8;
    v9[0] = 1065353216;
    v9[1] = 1065353216;
    v10[0] = 0;
    v10[1] = 0;
    sub_9DF08(v6, v7, v12, v11, v10, v9, -1);
  }
  return v16[3];
}


// ======================================================================
// ADDR: 0x84164
// SYMBOL: sub_84164
int sub_84164(int a1, int a2, const char *a3, ...)
{
  int v4; // [sp+8h] [bp-10h]
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  _vsprintf_chk(a1, 0, 64, a3, va, va);
  return v4;
}


// ======================================================================
// ADDR: 0x860ae
// SYMBOL: sub_860AE
int __fastcall sub_860AE(int a1)
{
  return *(_DWORD *)a1;
}


// ======================================================================
// ADDR: 0x860b2
// SYMBOL: sub_860B2
int __fastcall sub_860B2(int a1)
{
  return *(_DWORD *)(a1 + 4);
}


// ======================================================================
// ADDR: 0x860b6
// SYMBOL: sub_860B6
int __fastcall sub_860B6(int a1)
{
  return a1 + 8;
}


// ======================================================================
// ADDR: 0x9df08
// SYMBOL: sub_9DF08
int __fastcall sub_9DF08(int result, int a2, int *a3, __int64 *a4, _DWORD *a5, __int64 *a6, unsigned int a7)
{
  int v7; // r4
  int v8; // r0
  __int16 v11; // r2
  __int64 v12; // r0
  __int64 v13; // kr00_8
  int v14; // lr
  int v15; // r9
  __int64 v16; // kr10_8
  int v17; // r2
  int v18; // r3
  __int16 v19; // r2
  __int64 v20; // r0
  __int64 v21; // kr18_8
  int v22; // r9
  int v23; // r12
  __int64 v24; // kr28_8
  int v25; // r2
  __int64 v26; // [sp+0h] [bp-28h]
  __int64 v27; // [sp+0h] [bp-28h]
  int v28; // [sp+8h] [bp-20h]
  int v29; // [sp+8h] [bp-20h]

  if ( a7 >= 0x1000000 )
  {
    v7 = result;
    v8 = *(_DWORD *)(result + 76);
    if ( v8 && *(_DWORD *)(*(_DWORD *)(v7 + 84) + 4 * v8 - 4) == a2 )
    {
      sub_9C1B4(v7, 6, 4);
      v19 = *(_WORD *)(v7 + 52);
      v20 = *(_QWORD *)(v7 + 56);
      v29 = *a3;
      *(_WORD *)(HIDWORD(v20) + 10) = v19 + 3;
      *(_WORD *)(HIDWORD(v20) + 8) = v19 + 2;
      *(_WORD *)(HIDWORD(v20) + 4) = v19 + 2;
      *(_WORD *)(HIDWORD(v20) + 6) = v19;
      *(_WORD *)HIDWORD(v20) = v19;
      v21 = *a6;
      *(_WORD *)(HIDWORD(v20) + 2) = v19 + 1;
      HIDWORD(v27) = HIDWORD(v21);
      v22 = a3[1];
      LODWORD(v27) = *a5;
      v23 = a5[1];
      v24 = *a4;
      *(_QWORD *)v20 = *(_QWORD *)a3;
      *(_QWORD *)(*(_DWORD *)(v7 + 56) + 8) = *(_QWORD *)a5;
      LODWORD(v20) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v20 + 16) = a7;
      *(_DWORD *)(v20 + 20) = v24;
      *(_DWORD *)(v20 + 24) = v22;
      LODWORD(v20) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v20 + 28) = v21;
      *(_DWORD *)(v20 + 32) = v23;
      LODWORD(v20) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v20 + 36) = a7;
      *(_QWORD *)(v20 + 40) = *a4;
      *(_QWORD *)(*(_DWORD *)(v7 + 56) + 48) = *a6;
      LODWORD(v20) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v20 + 60) = v29;
      *(_DWORD *)(v20 + 64) = HIDWORD(v24);
      HIDWORD(v20) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v20 + 56) = a7;
      *(_QWORD *)(HIDWORD(v20) + 68) = v27;
      HIDWORD(v20) = *(_DWORD *)(v7 + 56);
      v25 = *(_DWORD *)(v7 + 60) + 12;
      result = *(_DWORD *)(v7 + 52) + 4;
      *(_DWORD *)(v7 + 52) = result;
      *(_DWORD *)(v7 + 56) = HIDWORD(v20) + 80;
      *(_DWORD *)(v7 + 60) = v25;
      *(_DWORD *)(HIDWORD(v20) + 76) = a7;
    }
    else
    {
      sub_9C138((int *)v7, a2);
      sub_9C1B4(v7, 6, 4);
      v11 = *(_WORD *)(v7 + 52);
      v12 = *(_QWORD *)(v7 + 56);
      v28 = *a3;
      *(_WORD *)(HIDWORD(v12) + 10) = v11 + 3;
      *(_WORD *)(HIDWORD(v12) + 8) = v11 + 2;
      *(_WORD *)(HIDWORD(v12) + 4) = v11 + 2;
      *(_WORD *)(HIDWORD(v12) + 6) = v11;
      *(_WORD *)HIDWORD(v12) = v11;
      v13 = *a6;
      *(_WORD *)(HIDWORD(v12) + 2) = v11 + 1;
      HIDWORD(v26) = HIDWORD(v13);
      v14 = a3[1];
      LODWORD(v26) = *a5;
      v15 = a5[1];
      v16 = *a4;
      *(_QWORD *)v12 = *(_QWORD *)a3;
      *(_QWORD *)(*(_DWORD *)(v7 + 56) + 8) = *(_QWORD *)a5;
      LODWORD(v12) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v12 + 16) = a7;
      *(_DWORD *)(v12 + 20) = v16;
      *(_DWORD *)(v12 + 24) = v14;
      LODWORD(v12) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v12 + 28) = v13;
      *(_DWORD *)(v12 + 32) = v15;
      LODWORD(v12) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v12 + 36) = a7;
      *(_QWORD *)(v12 + 40) = *a4;
      *(_QWORD *)(*(_DWORD *)(v7 + 56) + 48) = *a6;
      LODWORD(v12) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v12 + 60) = v28;
      *(_DWORD *)(v12 + 64) = HIDWORD(v16);
      HIDWORD(v12) = *(_DWORD *)(v7 + 56);
      *(_DWORD *)(v12 + 56) = a7;
      *(_QWORD *)(HIDWORD(v12) + 68) = v26;
      HIDWORD(v12) = *(_DWORD *)(v7 + 56);
      v17 = *(_DWORD *)(v7 + 60) + 12;
      v18 = *(_DWORD *)(v7 + 76);
      *(_DWORD *)(v7 + 52) += 4;
      *(_DWORD *)(v7 + 56) = HIDWORD(v12) + 80;
      *(_DWORD *)(v7 + 76) = v18 - 1;
      *(_DWORD *)(v7 + 60) = v17;
      *(_DWORD *)(HIDWORD(v12) + 76) = a7;
      return sub_9BF30((int *)v7, SHIDWORD(v12));
    }
  }
  return result;
}


// ======================================================================
