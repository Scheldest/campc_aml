// ADDR: 0x85418
// SYMBOL: sub_85418
_DWORD *__fastcall sub_85418(int a1, int a2)
{
  _DWORD *v3; // r1
  _DWORD *v4; // r5
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // t1
  __int64 v8; // kr00_8
  _DWORD *v9; // r0
  _DWORD *v10; // r0

  v3 = *(_DWORD **)(a2 + 4);
  if ( v3 )
  {
    do
    {
      v4 = v3;
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
  }
  else
  {
    v5 = a2 + 8;
    v4 = *(_DWORD **)(a2 + 8);
    if ( *v4 != a2 )
    {
      do
      {
        v6 = *(_DWORD *)v5;
        v7 = *(_DWORD **)(*(_DWORD *)v5 + 8);
        v5 = *(_DWORD *)v5 + 8;
        v4 = v7;
      }
      while ( *v7 != v6 );
    }
  }
  if ( *(_DWORD *)a1 == a2 )
    *(_DWORD *)a1 = v4;
  v8 = *(_QWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 8) = HIDWORD(v8) - 1;
  sub_8231C(v8, (__int64 *)a2);
  v9 = *(_DWORD **)(a2 + 20);
  *(_DWORD *)(a2 + 20) = 0;
  if ( v9 )
  {
    v10 = sub_7DE3C(v9);
    operator delete(v10);
  }
  operator delete((void *)a2);
  return v4;
}


// ======================================================================
