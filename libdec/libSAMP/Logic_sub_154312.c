// ADDR: 0x1543d4
// SYMBOL: sub_1543D4
int __fastcall sub_1543D4(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x7F01FD )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(516 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 516 * a2;
  v5 = a1 + 516 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0x15442c
// SYMBOL: sub_15442C
int __fastcall sub_15442C(int a1, _DWORD *a2)
{
  const void *v4; // r1
  signed int v5; // r2
  void *v6; // r0
  const void *v7; // r1
  int v8; // r1
  int v9; // r1
  int result; // r0

  v4 = *(const void **)a1;
  v5 = *(_DWORD *)(a1 + 4) - *(_DWORD *)a1;
  v6 = (void *)(a2[1] - v5);
  a2[1] = v6;
  if ( v5 >= 1 )
  {
    j_memcpy(v6, v4, v5);
    v6 = (void *)a2[1];
  }
  v7 = *(const void **)a1;
  *(_DWORD *)a1 = v6;
  a2[1] = v7;
  v8 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = a2[2];
  a2[2] = v8;
  v9 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = a2[3];
  result = a2[1];
  a2[3] = v9;
  *a2 = result;
  return result;
}


// ======================================================================
