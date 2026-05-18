// ADDR: 0xebecc
// SYMBOL: sub_EBECC
int __fastcall sub_EBECC(int result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r6
  _DWORD *v5; // r4
  int v6; // r5
  bool v7; // zf
  int v8; // r1
  _DWORD *v9; // t1

  if ( a2 != a3 )
  {
    v3 = result + 4;
    v5 = a2;
    v6 = result;
    do
    {
      sub_EBF22(v6, v3, v5 + 4, v5 + 4);
      result = v5[1];
      if ( result )
      {
        do
        {
          v5 = (_DWORD *)result;
          result = *(_DWORD *)result;
        }
        while ( result );
      }
      else
      {
        result = (int)(v5 + 2);
        v7 = *(_DWORD *)v5[2] == (_DWORD)v5;
        v5 = (_DWORD *)v5[2];
        if ( !v7 )
        {
          do
          {
            v8 = *(_DWORD *)result;
            v9 = *(_DWORD **)(*(_DWORD *)result + 8);
            result = *(_DWORD *)result + 8;
            v5 = v9;
          }
          while ( *v9 != v8 );
        }
      }
    }
    while ( v5 != a3 );
  }
  return result;
}


// ======================================================================
