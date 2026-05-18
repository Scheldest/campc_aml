// ADDR: 0x16586c
// SYMBOL: sub_16586C
int __fastcall sub_16586C(int a1, float a2)
{
  __int64 *v2; // r0
  __int64 v3; // d17
  float v4; // s0
  __int64 v6; // [sp+0h] [bp-18h] BYREF
  int v7; // [sp+8h] [bp-10h]
  float v8; // [sp+Ch] [bp-Ch]

  v2 = (__int64 *)(dword_381B58 + 5400 + 16 * a1 + 172);
  v3 = v2[1];
  v4 = *(float *)(dword_381B58 + 5400) * a2;
  v6 = *v2;
  v7 = v3;
  v8 = *((float *)&v3 + 1) * v4;
  return sub_165778((float *)&v6);
}


// ======================================================================
// ADDR: 0x17457c
// SYMBOL: sub_17457C
int __fastcall sub_17457C(int result, int a2, float a3, unsigned int a4, int a5)
{
  int v5; // r4

  if ( a4 >= 0x1000000 )
  {
    v5 = result;
    result = a5;
    if ( a5 >= 3 )
    {
      sub_173B2C((_DWORD *)v5, a2, a3, 0.0, (float)((float)((float)a5 + -1.0) * 6.2832) / (float)a5, a5 - 1);
      result = sub_173720(v5, *(__int64 **)(v5 + 96), *(_DWORD *)(v5 + 88), a4);
      *(_DWORD *)(v5 + 88) = 0;
    }
  }
  return result;
}


// ======================================================================
