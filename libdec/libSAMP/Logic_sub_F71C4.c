// ADDR: 0xf7ac2
// SYMBOL: sub_F7AC2
int __fastcall sub_F7AC2(int a1, int a2, int a3)
{
  int result; // r0

  std::string::basic_string(a2, a3);
  std::string::basic_string(a2 + 12, a3 + 12);
  result = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}


// ======================================================================
// ADDR: 0xf7af4
// SYMBOL: sub_F7AF4
int __fastcall sub_F7AF4(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x924924A )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(28 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 28 * a2;
  v5 = a1 + 28 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0xf7b4c
// SYMBOL: sub_F7B4C
int __fastcall sub_F7B4C(int *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r12
  int v4; // r3
  __int64 v5; // d16
  __int64 v6; // d16
  int v7; // r4
  int v8; // r4
  int v9; // r3
  int v10; // r3
  int result; // r0

  v2 = a1[1];
  v3 = *a1;
  v4 = a2[1];
  if ( v2 != *a1 )
  {
    do
    {
      v5 = *(_QWORD *)(v2 - 28);
      *(_DWORD *)(v4 - 20) = *(_DWORD *)(v2 - 20);
      *(_QWORD *)(v4 - 28) = v5;
      v6 = *(_QWORD *)(v2 - 16);
      v7 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 28) = 0;
      *(_DWORD *)(v2 - 24) = 0;
      *(_DWORD *)(v2 - 20) = 0;
      *(_DWORD *)(v4 - 8) = v7;
      *(_QWORD *)(v4 - 16) = v6;
      v8 = *(_DWORD *)(v2 - 4);
      *(_DWORD *)(v2 - 16) = 0;
      *(_DWORD *)(v2 - 12) = 0;
      *(_DWORD *)(v2 - 8) = 0;
      v2 -= 28;
      *(_DWORD *)(v4 - 4) = v8;
      v4 = a2[1] - 28;
      a2[1] = v4;
    }
    while ( v2 != v3 );
    v3 = *a1;
  }
  *a1 = v4;
  a2[1] = v3;
  v9 = a1[1];
  a1[1] = a2[2];
  a2[2] = v9;
  v10 = a1[2];
  a1[2] = a2[3];
  result = a2[1];
  a2[3] = v10;
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0xf7bc4
// SYMBOL: sub_F7BC4
void **__fastcall sub_F7BC4(void **a1)
{
  sub_F7BDA();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
