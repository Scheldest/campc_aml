// ADDR: 0x85278
// SYMBOL: sub_85278
int __fastcall sub_85278(_DWORD *a1, int a2)
{
  int (__fastcall *v4)(int, int, int); // r5
  int v5; // r0
  int result; // r0
  _DWORD *v7; // r5
  bool v8; // zf
  int v9; // r1
  _DWORD *v10; // t1
  _DWORD *v11; // r6
  int v12; // r1
  _DWORD *v13; // t1

  v4 = off_1ABF40;
  v5 = sub_7DB44(a2);
  result = v4(v5, 2, 1090519040);
  v7 = (_DWORD *)a1[16];
  while ( v7 != a1 + 17 )
  {
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v7[5] + 8))(v7[5], a2);
    result = v7[1];
    if ( result )
    {
      do
      {
        v7 = (_DWORD *)result;
        result = *(_DWORD *)result;
      }
      while ( result );
    }
    else
    {
      result = (int)(v7 + 2);
      v8 = *(_DWORD *)v7[2] == (_DWORD)v7;
      v7 = (_DWORD *)v7[2];
      if ( !v8 )
      {
        do
        {
          v9 = *(_DWORD *)result;
          v10 = *(_DWORD **)(*(_DWORD *)result + 8);
          result = *(_DWORD *)result + 8;
          v7 = v10;
        }
        while ( *v10 != v9 );
      }
    }
  }
  v11 = (_DWORD *)a1[19];
  while ( v11 != a1 + 20 )
  {
    sub_7DED0(v11[5], a2);
    result = v11[1];
    if ( result )
    {
      do
      {
        v11 = (_DWORD *)result;
        result = *(_DWORD *)result;
      }
      while ( result );
    }
    else
    {
      result = (int)(v11 + 2);
      v8 = *(_DWORD *)v11[2] == (_DWORD)v11;
      v11 = (_DWORD *)v11[2];
      if ( !v8 )
      {
        do
        {
          v12 = *(_DWORD *)result;
          v13 = *(_DWORD **)(*(_DWORD *)result + 8);
          result = *(_DWORD *)result + 8;
          v11 = v13;
        }
        while ( *v13 != v12 );
      }
    }
  }
  return result;
}


// ======================================================================
