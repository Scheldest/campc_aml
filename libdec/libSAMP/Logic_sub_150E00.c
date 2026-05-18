// ADDR: 0x150e66
// SYMBOL: sub_150E66
_DWORD *__fastcall sub_150E66(_DWORD *a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r6
  int v4; // r0
  int v5; // t1
  _DWORD *v6; // r0

  v1 = (_DWORD *)*a1;
  if ( *a1 )
  {
    v3 = (_DWORD *)a1[1];
    if ( v3 == v1 )
    {
      v6 = (_DWORD *)*a1;
    }
    else
    {
      do
      {
        v5 = *--v3;
        v4 = v5;
        *v3 = 0;
        if ( v5 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
      }
      while ( v3 != v1 );
      v6 = (_DWORD *)*a1;
    }
    a1[1] = v1;
    operator delete(v6);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x150ea8
// SYMBOL: sub_150EA8
int __fastcall sub_150EA8(int a1)
{
  void *v2; // r0

  sub_150EC4(a1, *(void **)(a1 + 8));
  v2 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
