// ADDR: 0x7de3c
// SYMBOL: sub_7DE3C
_DWORD *__fastcall sub_7DE3C(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r9
  _DWORD *v4; // r6
  _DWORD *v5; // r0
  int v6; // r0
  bool v7; // zf
  int v8; // r1
  _DWORD *v9; // t1
  void *v10; // r0

  v3 = a1 + 5;
  v2 = (_DWORD *)a1[5];
  v4 = a1 + 6;
  while ( v2 != v4 )
  {
    off_1ABF20(v2[4], v2[5]);
    v5 = (_DWORD *)v2[1];
    if ( v5 )
    {
      do
      {
        v2 = v5;
        v5 = (_DWORD *)*v5;
      }
      while ( v5 );
    }
    else
    {
      v6 = (int)(v2 + 2);
      v7 = *(_DWORD *)v2[2] == (_DWORD)v2;
      v2 = (_DWORD *)v2[2];
      if ( !v7 )
      {
        do
        {
          v8 = *(_DWORD *)v6;
          v9 = *(_DWORD **)(*(_DWORD *)v6 + 8);
          v6 = *(_DWORD *)v6 + 8;
          v2 = v9;
        }
        while ( *v9 != v8 );
      }
    }
  }
  sub_7DFFC(v3, a1[6]);
  v10 = (void *)a1[2];
  if ( v10 )
  {
    a1[3] = v10;
    operator delete(v10);
  }
  return a1;
}


// ======================================================================
