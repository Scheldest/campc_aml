// ADDR: 0x1660a4
// SYMBOL: sub_1660A4
float __fastcall sub_1660A4(float *a1, unsigned int a2, unsigned int a3, int a4, float a5)
{
  unsigned int v6; // r4
  _BYTE *v7; // r3
  int v8; // s0
  float result; // r0
  float v10[6]; // [sp+10h] [bp-18h] BYREF

  if ( a4 )
  {
    if ( !a3 )
      a3 = -1;
    if ( a3 <= a2 )
    {
      v8 = *(_DWORD *)(dword_381B58 + 6344);
      goto LABEL_15;
    }
    v6 = a3 - a2;
    v7 = (_BYTE *)a2;
    do
    {
      if ( *v7 == 35 )
      {
        if ( v7[1] == 35 )
          goto LABEL_12;
      }
      else if ( !*v7 )
      {
        goto LABEL_12;
      }
      --v6;
      ++v7;
    }
    while ( v6 );
  }
  v7 = (_BYTE *)a3;
LABEL_12:
  v8 = *(_DWORD *)(dword_381B58 + 6344);
  if ( v7 != (_BYTE *)a2 )
  {
    sub_178B18(
      (int)v10,
      *(_DWORD *)(dword_381B58 + 6340),
      *(_DWORD *)(dword_381B58 + 6344),
      2139095039,
      a5,
      a2,
      (int)v7,
      0);
    result = v10[1];
    v10[0] = (float)(int)(float)(v10[0] + 0.95);
    *a1 = v10[0];
    a1[1] = result;
    return result;
  }
LABEL_15:
  result = 0.0;
  *((_DWORD *)a1 + 1) = v8;
  *a1 = 0.0;
  return result;
}


// ======================================================================
