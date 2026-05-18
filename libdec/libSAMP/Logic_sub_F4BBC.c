// ADDR: 0xf4c90
// SYMBOL: sub_F4C90
int __fastcall sub_F4C90(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x15555556 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(12 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 12 * a2;
  v5 = a1 + 12 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0xf4ce8
// SYMBOL: sub_F4CE8
void **__fastcall sub_F4CE8(void **a1)
{
  sub_F4D00();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
