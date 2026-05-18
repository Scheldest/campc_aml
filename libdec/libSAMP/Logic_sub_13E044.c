// ADDR: 0x13e50c
// SYMBOL: sub_13E50C
int __fastcall sub_13E50C(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x4444445 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(60 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 60 * a2;
  v5 = a1 + 60 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0x13e564
// SYMBOL: sub_13E564
int __fastcall sub_13E564(int a1)
{
  int i; // r0
  __int64 v3; // kr00_8

  v3 = *(_QWORD *)(a1 + 4);
  for ( i = *(_DWORD *)(a1 + 8); i != (_DWORD)v3; i = *(_DWORD *)(a1 + 8) )
  {
    *(_DWORD *)(a1 + 8) = i - 60;
    sub_13E4F0((int *)(i - 4), 0);
  }
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
