// ADDR: 0x1928c4
// SYMBOL: sub_1928C4
int __fastcall sub_1928C4(int a1, int a2, unsigned int a3, unsigned int a4, int a5, int *a6, int a7, int a8)
{
  int v9; // r9
  unsigned int v10; // r4
  _WORD *v11; // r2
  int v12; // r11
  int *v13; // r5
  int v14; // r6
  int v15; // r8
  int v16; // t1
  int v17; // r4
  int v18; // r3
  char *v19; // r10
  int v20; // r3
  int v21; // r8
  int *v22; // r5
  int v23; // r6
  int v24; // r12
  _WORD *v25; // r2
  int v26; // t1
  int v27; // r3
  int v28; // r4
  int v30; // [sp+0h] [bp-30h] BYREF
  unsigned __int64 v31; // [sp+4h] [bp-2Ch]
  int v32; // [sp+Ch] [bp-24h]

  v9 = a7;
  v10 = a4;
  v11 = (_WORD *)((char *)&v30 - ((4 * a7 + 7) & 0xFFFFFFF8));
  if ( a7 <= 0 )
  {
    v19 = (char *)&v11[a7];
  }
  else
  {
    v30 = a2;
    v31 = __PAIR64__(a4, a3);
    v12 = a7;
    v13 = (int *)(a5 + 4 * (a8 - 2) * a7);
    v14 = (__int16)*a6;
    v15 = ((*a6 >> 15) + 1) >> 1;
    do
    {
      v16 = *v13++;
      v17 = (__int16)v14 * SHIWORD(v16) + ((v14 * (unsigned __int16)v16) >> 16) + v15 * v16;
      v18 = -32768;
      if ( v17 >> 8 > -32768 )
        v18 = v17 >> 8;
      if ( v18 >= 0x7FFF )
        LOWORD(v18) = 0x7FFF;
      --v12;
      *v11++ = v18;
    }
    while ( v12 );
    v9 = a7;
    v19 = (char *)&v30 + 2 * a7 - ((4 * a7 + 7) & 0xFFFFFFF8);
    v20 = a6[1];
    v21 = (__int16)v20;
    v22 = (int *)(a5 + 4 * (a8 - 1) * a7);
    v23 = a7;
    v24 = ((v20 >> 15) + 1) >> 1;
    v25 = v19;
    do
    {
      v26 = *v22++;
      v27 = (__int16)v21 * SHIWORD(v26) + ((v21 * (unsigned __int16)v26) >> 16) + v24 * v26;
      v28 = -32768;
      if ( v27 >> 8 > -32768 )
        v28 = v27 >> 8;
      if ( v28 >= 0x7FFF )
        LOWORD(v28) = 0x7FFF;
      --v23;
      *v25++ = v28;
    }
    while ( v23 );
    v10 = HIDWORD(v31);
    a3 = v31;
    v11 = (_WORD *)((char *)&v30 - ((4 * a7 + 7) & 0xFFFFFFF8));
    a2 = v30;
  }
  j_silk_sum_sqr_shift(a1, a2, v11, v9);
  j_silk_sum_sqr_shift(a3, v10, v19, v9);
  return _stack_chk_guard - v32;
}


// ======================================================================
