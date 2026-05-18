// ADDR: 0xe5eac
// SYMBOL: sub_E5EAC
void __fastcall sub_E5EAC(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v3; // r1

  sub_E3F7A(a2 + 16);
  if ( *a2 << 31 )
    operator delete(*((void **)a2 + 2), v3);
}


// ======================================================================
// ADDR: 0xe9e46
// SYMBOL: sub_E9E46
_DWORD *__fastcall sub_E9E46(int a1, int a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r4
  int v4; // r2
  int v5; // r12
  _DWORD *v6; // t1
  __int64 v7; // r2

  v2 = *(_DWORD **)(a2 + 4);
  if ( v2 )
  {
    do
    {
      v3 = v2;
      v2 = (_DWORD *)*v2;
    }
    while ( v2 );
  }
  else
  {
    v4 = a2 + 8;
    v3 = *(_DWORD **)(a2 + 8);
    if ( *v3 != a2 )
    {
      do
      {
        v5 = *(_DWORD *)v4;
        v6 = *(_DWORD **)(*(_DWORD *)v4 + 8);
        v4 = *(_DWORD *)v4 + 8;
        v3 = v6;
      }
      while ( *v6 != v5 );
    }
  }
  if ( *(_DWORD *)a1 == a2 )
    *(_DWORD *)a1 = v3;
  v7 = *(_QWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 8) = HIDWORD(v7) - 1;
  sub_E9E8E(v7);
  return v3;
}


// ======================================================================
