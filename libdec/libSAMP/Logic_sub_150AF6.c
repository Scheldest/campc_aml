// ADDR: 0x1514d0
// SYMBOL: sub_1514D0
int __fastcall sub_1514D0(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x40000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(4 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 4 * a2;
  v5 = a1 + 4 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0x151518
// SYMBOL: sub_151518
int __fastcall sub_151518(int a1)
{
  int v1; // r1
  int i; // r5
  int v4; // r0

  v1 = *(_DWORD *)(a1 + 8);
  for ( i = *(_DWORD *)(a1 + 4); v1 != i; v1 = *(_DWORD *)(a1 + 8) )
  {
    *(_DWORD *)(a1 + 8) = v1 - 4;
    v4 = *(_DWORD *)(v1 - 4);
    *(_DWORD *)(v1 - 4) = 0;
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
