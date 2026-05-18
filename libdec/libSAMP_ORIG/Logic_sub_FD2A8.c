// ADDR: 0xfd334
// SYMBOL: sub_FD334
int __fastcall sub_FD334(_DWORD *a1, unsigned int a2)
{
  int v2; // r0

  if ( a2 >= 0x20000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v2 = a1[2] - *a1;
  if ( a2 <= v2 >> 2 )
    a2 = v2 >> 2;
  if ( (unsigned int)v2 >= 0x7FFFFFF8 )
    return 0x1FFFFFFF;
  return a2;
}


// ======================================================================
// ADDR: 0xfd364
// SYMBOL: sub_FD364
int __fastcall sub_FD364(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
    LODWORD(a1) = operator new(8 * HIDWORD(a1));
  HIDWORD(a1) = a1 + 8 * a2;
  v5 = a1 + 8 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0xfd398
// SYMBOL: sub_FD398
int __fastcall sub_FD398(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int result; // r0

  sub_FD3DE(a1 + 2, *a1, a1[1], a2 + 1);
  v4 = *a1;
  *a1 = a2[1];
  a2[1] = v4;
  v5 = a1[1];
  a1[1] = a2[2];
  a2[2] = v5;
  v6 = a1[2];
  a1[2] = a2[3];
  a2[3] = v6;
  result = a2[1];
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0xfd3c8
// SYMBOL: sub_FD3C8
void **__fastcall sub_FD3C8(void **a1)
{
  sub_FD3F0();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
