// ADDR: 0x1740f8
// SYMBOL: sub_1740F8
int __fastcall sub_1740F8(int result, float *a2, float *a3, unsigned int a4, float a5, int a6, float a7)
{
  __int64 v7; // d8
  int v8; // r4
  float v10; // s2
  float v11; // s4
  float v12; // s0
  float v13; // s2
  float v14[2]; // [sp+8h] [bp-28h] BYREF
  float v15[2]; // [sp+10h] [bp-20h] BYREF
  __int64 v16; // [sp+18h] [bp-18h]

  if ( a4 >= 0x1000000 )
  {
    v16 = v7;
    v8 = result;
    v10 = *a2 + 0.5;
    if ( *(unsigned __int8 *)(result + 36) << 31 )
      v11 = -0.5;
    else
      v11 = -0.49;
    v12 = *a3 + v11;
    v15[1] = a2[1] + 0.5;
    v15[0] = v10;
    v13 = a3[1];
    v14[0] = v12;
    v14[1] = v13 + v11;
    sub_173CBC(result, v15, v14, a5, a6);
    sub_172FDA((float *)v8, *(float **)(v8 + 96), *(_DWORD *)(v8 + 88), a4, 1, a7);
    result = 0;
    *(_DWORD *)(v8 + 88) = 0;
  }
  return result;
}


// ======================================================================
