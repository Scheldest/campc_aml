// ADDR: 0x13ccec
// SYMBOL: sub_13CCEC
void __fastcall sub_13CCEC(int *a1, _QWORD *a2)
{
  int v4; // r0
  int v5; // r2
  unsigned int v6; // r1
  int v7; // r2
  int v8; // r0
  void *v9; // [sp+4h] [bp-24h] BYREF
  char *v10; // [sp+8h] [bp-20h]
  char *v11; // [sp+Ch] [bp-1Ch]

  v4 = *a1;
  v5 = a1[1] - v4;
  v6 = (v5 >> 3) + 1;
  if ( v6 >= 0x20000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v7 = v5 >> 3;
  v8 = a1[2] - v4;
  if ( v6 <= v8 >> 2 )
    v6 = v8 >> 2;
  if ( (unsigned int)v8 >= 0x7FFFFFF8 )
    v6 = 0x1FFFFFFF;
  sub_13CD88(&v9, v6, v7, a1 + 2);
  *(_QWORD *)v11 = *a2;
  v11 += 8;
  sub_13CDD0(a1, &v9);
  if ( v11 != v10 )
    v11 += 8 * ~((unsigned int)(v11 - v10 - 8) >> 3);
  if ( v9 )
    operator delete(v9);
}


// ======================================================================
