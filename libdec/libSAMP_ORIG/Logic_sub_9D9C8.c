// ADDR: 0xa37f4
// SYMBOL: sub_A37F4
unsigned __int8 *__fastcall sub_A37F4(_DWORD *a1, float a2, unsigned __int8 *a3, unsigned int a4, float a5)
{
  float v6; // s16
  int v8; // r11
  unsigned __int8 *v9; // r10
  float v10; // s26
  float v11; // s22
  float v12; // s24
  int v13; // r0
  unsigned __int8 *v14; // r6
  unsigned int v15; // r1
  int v16; // r0
  float *v17; // r0
  float v18; // s0
  bool v19; // zf
  float v20; // s2
  unsigned int v21; // r11
  float v22; // s0
  unsigned __int8 *v24; // [sp+4h] [bp-5Ch]
  unsigned int v25; // [sp+8h] [bp-58h] BYREF

  if ( (unsigned int)a3 >= a4 )
    return a3;
  v6 = a5 / a2;
  v8 = 1;
  v9 = a3;
  v24 = 0;
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  while ( 1 )
  {
    v13 = (char)*a3;
    v14 = a3;
    v15 = (unsigned __int8)v13;
    v25 = (unsigned __int8)v13;
    if ( v13 < 0 )
    {
      v16 = sub_88448((int *)&v25, a3, a4);
      v15 = v25;
      a3 = &v14[v16];
      if ( !v25 )
        return v14;
    }
    else
    {
      ++a3;
      if ( !(_BYTE)v13 )
        return v14;
    }
    if ( v15 > 0x1F )
      break;
    if ( v15 == 10 )
    {
      v12 = 0.0;
      v8 = 1;
      v11 = 0.0;
      v10 = 0.0;
    }
    else if ( v15 != 13 )
    {
      break;
    }
LABEL_4:
    if ( (unsigned int)a3 >= a4 )
      return a3;
  }
  v17 = (float *)(a1 + 3);
  if ( (signed int)v15 < *a1 )
    v17 = (float *)(a1[2] + 4 * v15);
  v18 = *v17;
  v19 = v15 == 9;
  if ( v15 != 9 )
    v19 = v15 == 12288;
  if ( v19 || v15 == 32 )
  {
    v20 = -0.0;
    if ( (v8 & 1) != 0 )
    {
      v20 = v10;
      v10 = 0.0;
    }
    v12 = v12 + v20;
    v10 = v10 + v18;
    if ( (v8 & 1) != 0 )
      v9 = v14;
    v21 = 0;
  }
  else
  {
    v11 = v11 + v18;
    if ( v8 << 31 )
    {
      v9 = a3;
    }
    else
    {
      v22 = v10 + v11;
      v24 = v9;
      v11 = 0.0;
      v10 = 0.0;
      v12 = v12 + v22;
    }
    v21 = (0x3BFFD7FCu >> (v15 - 33)) & 1 | (v15 - 33 > 0x1E);
  }
  v8 = v21 != 0;
  if ( (float)(v12 + v11) < v6 )
    goto LABEL_4;
  if ( v24 )
    v9 = v24;
  if ( v11 < v6 )
    return v9;
  return v14;
}


// ======================================================================
