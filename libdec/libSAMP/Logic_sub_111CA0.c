// ADDR: 0x111d6e
// SYMBOL: sub_111D6E
int __fastcall sub_111D6E(int a1, unsigned int *a2)
{
  __int64 v4; // kr00_8
  unsigned int v5; // r0
  unsigned int v6; // r2
  int result; // r0
  int v8; // r2
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r2
  _QWORD *v12; // r0
  _BYTE v13[8]; // [sp+4h] [bp-24h] BYREF
  _QWORD *v14; // [sp+Ch] [bp-1Ch]

  v4 = *(_QWORD *)(a1 + 4);
  if ( (unsigned int)v4 >= HIDWORD(v4) )
  {
    v8 = v4 - *(_DWORD *)a1;
    v9 = (v8 >> 3) + 1;
    if ( v9 >= 0x20000000 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    v10 = HIDWORD(v4) - *(_DWORD *)a1;
    if ( (unsigned int)v4 <= v10 >> 2 )
      v9 = v10 >> 2;
    v11 = v8 >> 3;
    if ( (unsigned int)v10 >= 0x7FFFFFF8 )
      v9 = 0x1FFFFFFF;
    sub_111F74(v13, v9, v11, a1 + 8);
    v12 = v14;
    *v14 = *(_QWORD *)a2;
    *a2 = 0;
    a2[1] = 0;
    v14 = v12 + 1;
    sub_111FBC(a1, v13);
    return sub_11200C(v13);
  }
  else
  {
    v6 = a2[1];
    v5 = *a2;
    *(_DWORD *)(a1 + 4) = v4 + 8;
    *(_QWORD *)v4 = __PAIR64__(v6, v5);
    result = 0;
    *a2 = 0;
    a2[1] = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x111e0c
// SYMBOL: sub_111E0C
int __fastcall sub_111E0C(int **a1)
{
  int v2; // r0
  int *v3; // r1
  int *v5; // [sp+0h] [bp-18h] BYREF
  int *v6; // [sp+4h] [bp-14h] BYREF

  v2 = **a1;
  __dmb(0xBu);
  if ( v2 != 1 )
  {
    sub_111E56(&v5, *a1 + 1, 0);
    v3 = *a1;
    *a1 = v5;
    v5 = 0;
    v6 = v3;
    sub_111E8A(&v6);
    sub_111E8A(&v5);
  }
  return (int)(*a1 + 1);
}


// ======================================================================
