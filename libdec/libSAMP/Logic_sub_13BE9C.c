// ADDR: 0x13c1f6
// SYMBOL: sub_13C1F6
int __fastcall sub_13C1F6(int a1, int *a2)
{
  int v4; // r1
  int v5; // r2
  __int64 v6; // kr00_8
  int v7; // r5
  size_t v8; // r6

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = *a2;
  v5 = a2[1];
  *(_DWORD *)(a1 + 8) = 0;
  if ( v5 != v4 )
  {
    sub_13C248(a1, (v5 - v4) >> 2);
    v6 = *(_QWORD *)a2;
    v7 = *(_DWORD *)(a1 + 4);
    v8 = HIDWORD(v6) - v6;
    if ( HIDWORD(v6) - (int)v6 >= 1 )
    {
      j_memcpy(*(void **)(a1 + 4), (const void *)v6, v8);
      v7 += v8;
    }
    *(_DWORD *)(a1 + 4) = v7;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x13c270
// SYMBOL: sub_13C270
int __fastcall sub_13C270(__int64 a1, int a2, int a3)
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
// ADDR: 0x13c2c8
// SYMBOL: sub_13C2C8
int __fastcall sub_13C2C8(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r12
  int v4; // r3
  int v5; // t1
  int v6; // r5
  int v7; // r3
  int v8; // r3
  int result; // r0

  v2 = (_DWORD *)a1[1];
  v3 = (_DWORD *)*a1;
  v4 = a2[1];
  if ( v2 != (_DWORD *)*a1 )
  {
    do
    {
      *(_DWORD *)(v4 - 12) = 0;
      v5 = *(v2 - 3);
      v2 -= 3;
      *(_DWORD *)(v4 - 8) = 0;
      v6 = v2[1];
      *(_DWORD *)(v4 - 12) = v5;
      *(_DWORD *)(v4 - 8) = v6;
      *(_DWORD *)(v4 - 4) = 0;
      *(_DWORD *)(v4 - 4) = v2[2];
      *v2 = 0;
      v2[1] = 0;
      v2[2] = 0;
      v4 = a2[1] - 12;
      a2[1] = v4;
    }
    while ( v2 != v3 );
    v3 = (_DWORD *)*a1;
  }
  *a1 = v4;
  a2[1] = v3;
  v7 = a1[1];
  a1[1] = a2[2];
  a2[2] = v7;
  v8 = a1[2];
  a1[2] = a2[3];
  result = a2[1];
  a2[3] = v8;
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0x13c326
// SYMBOL: sub_13C326
void **__fastcall sub_13C326(void **a1)
{
  sub_13C33E();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
