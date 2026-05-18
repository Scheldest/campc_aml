// ADDR: 0xe5d44
// SYMBOL: sub_E5D44
int __fastcall sub_E5D44(int *a1, unsigned int a2)
{
  int result; // r0
  _BYTE v4[28]; // [sp+4h] [bp-1Ch] BYREF

  result = *a1;
  if ( a2 > (a1[2] - result) >> 4 )
  {
    sub_E5D88(v4, a2, (a1[1] - result) >> 4, a1 + 2);
    sub_E5DD0(a1, v4);
    return sub_E5E26(v4);
  }
  return result;
}


// ======================================================================
// ADDR: 0xe5d88
// SYMBOL: sub_E5D88
int __fastcall sub_E5D88(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x10000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(16 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 16 * a2;
  v5 = a1 + 16 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0xe5e26
// SYMBOL: sub_E5E26
int __fastcall sub_E5E26(int a1)
{
  int i; // r0
  __int64 v3; // kr00_8
  unsigned __int8 *v4; // r0

  v3 = *(_QWORD *)(a1 + 4);
  for ( i = *(_DWORD *)(a1 + 8); i != (_DWORD)v3; i = *(_DWORD *)(a1 + 8) )
  {
    v4 = (unsigned __int8 *)(i - 16);
    *(_DWORD *)(a1 + 8) = v4;
    sub_E3F7A(v4);
  }
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0xe5e74
// SYMBOL: sub_E5E74
void __fastcall sub_E5E74(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_E5E74(a1, *(_DWORD *)a2);
    sub_E5E74(a1, *((_DWORD *)a2 + 1));
    sub_E3F7A(a2 + 32);
    if ( a2[16] << 31 )
      operator delete(*((void **)a2 + 6));
    operator delete(a2, v4);
  }
}


// ======================================================================
// ADDR: 0xe5ecc
// SYMBOL: sub_E5ECC
void **__fastcall sub_E5ECC(void **a1)
{
  unsigned __int8 *v1; // r5
  unsigned __int8 *v3; // r0
  void *v4; // r1

  v1 = (unsigned __int8 *)*a1;
  if ( *a1 )
  {
    v3 = (unsigned __int8 *)a1[1];
    v4 = v1;
    if ( v3 != v1 )
    {
      do
        v3 = sub_E3F7A(v3 - 16);
      while ( v3 != v1 );
      v4 = *a1;
    }
    a1[1] = v1;
    operator delete(v4);
  }
  return a1;
}


// ======================================================================
