// ADDR: 0xf8050
// SYMBOL: sub_F8050
int __fastcall sub_F8050(float *a1, float *a2)
{
  float v2; // s16
  float v5; // s0
  int result; // r0
  float v7; // s0
  float v8; // s2
  float v9; // s4
  float v10; // s6
  float v11; // s0
  float v12; // s4
  float v13; // s0
  float v14; // s2
  float v15; // [sp+0h] [bp-18h] BYREF
  float v16[5]; // [sp+4h] [bp-14h] BYREF

  v2 = a1[1];
  v5 = atan2f(*a1, v2) + -1.57079637;
  result = sincosf(LODWORD(v5), v16, &v15);
  v7 = a1[2];
  v8 = v15;
  v9 = v7 * v15;
  v10 = v16[0];
  v11 = v7 * v16[0];
  v12 = v2 * 0.0 - v9;
  *a2 = v12;
  v13 = v11 - *a1 * 0.0;
  v14 = v8 * *a1;
  a2[1] = v13;
  a2[2] = v14 - (float)(a1[1] * v10);
  return result;
}


// ======================================================================
// ADDR: 0x105110
// SYMBOL: sub_105110
int __fastcall sub_105110(int a1, int a2)
{
  return sub_2242EC((char *)&unk_240318 + 48 * *(unsigned __int8 *)(a1 + 96), a2, 48);
}


// ======================================================================
// ADDR: 0x10514c
// SYMBOL: sub_10514C
int __fastcall sub_10514C(int result, float a2)
{
  if ( a2 >= -100.0 && a2 <= 100.0 )
  {
    result = *(_DWORD *)(result + 92);
    if ( result )
    {
      result = *(_DWORD *)(result + 1092);
      *(float *)(result + 84) = a2;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1051ac
// SYMBOL: sub_1051AC
int __fastcall sub_1051AC(int a1, int a2)
{
  int v3; // r1
  int result; // r0

  v3 = *(unsigned __int8 *)(a1 + 96);
  result = a2;
  byte_242A78[v3] = a2;
  return result;
}


// ======================================================================
// ADDR: 0x1051b8
// SYMBOL: sub_1051B8
int __fastcall sub_1051B8(int a1, int a2, int a3)
{
  return sub_F8204(*(unsigned __int8 *)(a1 + 96), a2, a3);
}


// ======================================================================
