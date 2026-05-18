// ADDR: 0x113670
// SYMBOL: sub_113670
int __fastcall sub_113670(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x20000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(8 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 8 * a2;
  v5 = a1 + 8 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0x1136b8
// SYMBOL: sub_1136B8
int __fastcall sub_1136B8(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r12
  int v4; // r3
  int v5; // t1
  int v6; // r3
  int v7; // r3
  int result; // r0

  v2 = (_DWORD *)a1[1];
  v3 = (_DWORD *)*a1;
  v4 = a2[1];
  if ( v2 != (_DWORD *)*a1 )
  {
    do
    {
      v5 = *(v2 - 2);
      v2 -= 2;
      *(_DWORD *)(v4 - 8) = v5;
      *(_DWORD *)(v4 - 4) = v2[1];
      *v2 = 0;
      v2[1] = 0;
      v4 = a2[1] - 8;
      a2[1] = v4;
    }
    while ( v2 != v3 );
    v3 = (_DWORD *)*a1;
  }
  *a1 = v4;
  a2[1] = v3;
  v6 = a1[1];
  a1[1] = a2[2];
  a2[2] = v6;
  v7 = a1[2];
  a1[2] = a2[3];
  result = a2[1];
  a2[3] = v7;
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0x113708
// SYMBOL: sub_113708
int __fastcall sub_113708(int a1)
{
  int i; // r0
  __int64 v3; // kr00_8
  int v4; // r0

  v3 = *(_QWORD *)(a1 + 4);
  for ( i = *(_DWORD *)(a1 + 8); i != (_DWORD)v3; i = *(_DWORD *)(a1 + 8) )
  {
    v4 = i - 8;
    *(_DWORD *)(a1 + 8) = v4;
    sub_100B6E(v4);
  }
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
