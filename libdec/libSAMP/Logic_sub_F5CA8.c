// ADDR: 0xf5e6c
// SYMBOL: sub_F5E6C
int *sub_F5E6C()
{
  int *result; // r0
  int v1; // r2
  int v2; // r1
  int v3; // s0
  char v4; // r2

  result = &dword_237984;
  v1 = *(_DWORD *)(dword_23DF24 + 9773164);
  v2 = *(_DWORD *)(dword_23DF24 + 9773144);
  v3 = *(_DWORD *)(dword_23DF24 + 9773148);
  if ( v1 == dword_237984 && *(float *)(dword_23DF24 + 9773168) == flt_237988 || v1 >= dword_237978 || v1 < dword_237974 )
    goto LABEL_10;
  flt_237988 = *(float *)(dword_23DF24 + 9773168);
  dword_237984 = v1;
  if ( v1 == dword_237974 )
  {
    if ( byte_2400C8 == 1 )
      goto LABEL_10;
    v4 = 1;
  }
  else
  {
    if ( !byte_2400C8 )
      goto LABEL_10;
    v4 = 0;
  }
  byte_2400C8 = v4;
LABEL_10:
  if ( v2 != dword_23798C )
    return (int *)sub_F5F14(1, v2, v3);
  return result;
}


// ======================================================================
