// ADDR: 0x15ff90
// SYMBOL: sub_15FF90
int __fastcall sub_15FF90(int a1, int *a2)
{
  int *i; // r2
  int v3; // r3
  _DWORD *v4; // r0
  int v5; // r0
  int result; // r0
  _DWORD *v7; // r4
  _QWORD *v9; // r0
  __int64 v10; // kr00_8
  unsigned int *v11; // r1
  unsigned int v12; // r2
  int v13; // r0
  unsigned int v14; // r1
  _QWORD *v15; // r0
  __int64 v16; // kr08_8
  unsigned int *v17; // r0
  unsigned int v18; // r1
  _BYTE v19[8]; // [sp+4h] [bp-24h] BYREF
  _QWORD *v20; // [sp+Ch] [bp-1Ch]

  for ( i = *(int **)(a1 + 2052); i != *(int **)(a1 + 2056); i += 2 )
  {
    v3 = i[1];
    if ( !v3 || *(_DWORD *)(v3 + 4) == -1 )
    {
      v5 = *i;
      *i = *a2;
      *a2 = v5;
      result = i[1];
      i[1] = a2[1];
      a2[1] = result;
      return result;
    }
  }
  v4 = (_DWORD *)(a1 + 2052);
  v7 = v4;
  v9 = (_QWORD *)v4[1];
  if ( v9 == (_QWORD *)v7[2] )
  {
    v13 = (int)v9 - *v7;
    v14 = (v13 >> 3) + 1;
    if ( v14 >= 0x20000000 )
      std::__vector_base_common<true>::__throw_length_error(v7);
    if ( v14 <= v13 >> 2 )
      v14 = v13 >> 2;
    if ( (unsigned int)v13 >= 0x7FFFFFF8 )
      v14 = 0x1FFFFFFF;
    sub_160898(v19, v14, v13 >> 3, v7 + 2);
    v15 = v20;
    v16 = *(_QWORD *)a2;
    *v20 = *(_QWORD *)a2;
    if ( HIDWORD(v16) )
    {
      v17 = (unsigned int *)(HIDWORD(v16) + 8);
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      v15 = v20;
    }
    v20 = v15 + 1;
    sub_1608E0(v7, v19);
    return sub_160930(v19);
  }
  else
  {
    v10 = *(_QWORD *)a2;
    *v9 = *(_QWORD *)a2;
    if ( HIDWORD(v10) )
    {
      v11 = (unsigned int *)(HIDWORD(v10) + 8);
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    }
    result = (int)(v9 + 1);
    v7[1] = result;
  }
  return result;
}


// ======================================================================
