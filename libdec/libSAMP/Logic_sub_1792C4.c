// ADDR: 0x179bb4
// SYMBOL: sub_179BB4
int __fastcall sub_179BB4(float *a1)
{
  float v1; // s0
  float v2; // s1
  float v4; // s0
  float v5; // s2

  sub_179C7E(a1);
  v4 = a1[4] + v1;
  v5 = a1[5] + v2;
  a1[2] = v4;
  a1[4] = v4;
  a1[3] = v5;
  a1[5] = v5;
  return sub_179CCC(a1, 1, (int)v4, (int)v5, 0, 0, 0, 0);
}


// ======================================================================
// ADDR: 0x179c16
// SYMBOL: sub_179C16
int __fastcall sub_179C16(int a1)
{
  float v1; // s0
  float v2; // s1
  float v3; // s2
  float v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s8
  float v8; // s0
  float v9; // s2
  float v10; // s4

  v7 = *(float *)(a1 + 20) + v2;
  v8 = *(float *)(a1 + 16) + v1;
  v9 = v8 + v3;
  v10 = v9 + v5;
  *(float *)(a1 + 20) = (float)(v7 + v4) + v6;
  *(float *)(a1 + 16) = v10;
  return sub_179CCC(
           a1,
           4,
           (int)v10,
           (int)(float)((float)(v7 + v4) + v6),
           (int)v8,
           (int)v7,
           (int)v9,
           (int)(float)(v7 + v4));
}


// ======================================================================
// ADDR: 0x179c7e
// SYMBOL: sub_179C7E
float *__fastcall sub_179C7E(float *result)
{
  float v1; // s2
  float v2; // s0

  v1 = result[2];
  v2 = result[3];
  if ( v1 != result[4] || v2 != result[5] )
    return (float *)sub_179CCC(result, 2, (int)v1, (int)v2, 0, 0, 0, 0);
  return result;
}


// ======================================================================
// ADDR: 0x179ccc
// SYMBOL: sub_179CCC
int __fastcall sub_179CCC(int a1, int a2, __int16 a3, __int16 a4, int a5, int a6, int a7, int a8)
{
  __int64 v10; // r0
  int result; // r0

  if ( *(_DWORD *)a1 )
  {
    sub_179D36(a1, a3, a4);
    if ( a2 == 4 )
    {
      sub_179D36(a1, a5, a6);
      sub_179D36(a1, a7, a8);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 40);
    HIDWORD(v10) *= 7;
    *(_WORD *)(v10 + 2 * HIDWORD(v10)) = a3;
    LODWORD(v10) = v10 + 2 * HIDWORD(v10);
    *(_BYTE *)(v10 + 12) = a2;
    *(_WORD *)(v10 + 10) = a8;
    *(_WORD *)(v10 + 8) = a7;
    *(_WORD *)(v10 + 6) = a6;
    *(_WORD *)(v10 + 4) = a5;
    *(_WORD *)(v10 + 2) = a4;
  }
  result = *(_DWORD *)(a1 + 44) + 1;
  *(_DWORD *)(a1 + 44) = result;
  return result;
}


// ======================================================================
