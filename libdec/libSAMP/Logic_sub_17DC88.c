// ADDR: 0x17d55e
// SYMBOL: sub_17D55E
_DWORD *__fastcall sub_17D55E(_DWORD *result)
{
  result[2] = 0;
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x17da6a
// SYMBOL: sub_17DA6A
int __fastcall sub_17DA6A(int *a1, _DWORD *a2)
{
  int v2; // r6
  unsigned int v5; // r4
  void *v6; // r0

  v2 = *a1;
  v5 = (*a1 + 7) >> 3;
  v6 = (void *)operator new[](v5);
  *a2 = v6;
  j_memcpy(v6, (const void *)a1[3], v5);
  return v2;
}


// ======================================================================
// ADDR: 0x17ddce
// SYMBOL: sub_17DDCE
int __fastcall sub_17DDCE(int a1, int a2, int *a3)
{
  int v3; // r0
  _DWORD *v4; // r12
  _DWORD *v5; // lr
  unsigned int v6; // r1
  _DWORD *v7; // r3
  _DWORD v9[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = *a3;
  v9[0] = a2;
  if ( v3 )
  {
    v4 = (_DWORD *)a3[1];
    if ( v4 )
    {
      a3[2] = (int)v4;
      v5 = v4;
    }
    else
    {
      v5 = (_DWORD *)a3[2];
    }
    v6 = *(_DWORD *)(a2 + 4);
    while ( *(_DWORD *)(*v5 + 4) < v6 )
    {
      v7 = (_DWORD *)v5[2];
      if ( v7 != v4 )
      {
        a3[2] = (int)v7;
        v5 = v7;
      }
      if ( !--v3 )
      {
        if ( v4 )
          a3[2] = v4[1];
        return sub_17DFD4(a3, v9);
      }
    }
  }
  return sub_17DF64(a3, v9);
}


// ======================================================================
// ADDR: 0x17e03e
// SYMBOL: sub_17E03E
int __fastcall sub_17E03E(int *a1)
{
  int result; // r0
  void *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r5

  result = *a1;
  if ( result )
  {
    if ( result == 1 )
    {
      v3 = (void *)a1[1];
      if ( v3 )
        operator delete(v3);
    }
    else
    {
      v4 = (_DWORD *)a1[1];
      do
      {
        v5 = (_DWORD *)v4[2];
        operator delete(v4);
        v4 = v5;
      }
      while ( v5 != (_DWORD *)a1[1] );
    }
    result = 0;
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x17e070
// SYMBOL: sub_17E070
int __fastcall sub_17E070(_DWORD *a1)
{
  int result; // r0
  void *v3; // r0
  __int64 v4; // kr00_8
  __int64 v5; // r2
  int v6; // r5
  int v7; // r0

  result = *a1;
  if ( result )
  {
    if ( result == 1 )
    {
      v3 = (void *)a1[1];
      if ( v3 )
        operator delete(v3);
      result = 0;
      a1[1] = 0;
      a1[2] = 0;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 1);
      v5 = *(_QWORD *)(HIDWORD(v4) + 4);
      *(_DWORD *)(v5 + 8) = HIDWORD(v5);
      v6 = *(_DWORD *)(HIDWORD(v4) + 8);
      *(_DWORD *)(v6 + 4) = v5;
      if ( HIDWORD(v4) == (_DWORD)v4 )
        a1[1] = v6;
      operator delete((void *)HIDWORD(v4));
      v7 = *a1;
      a1[2] = v6;
      result = v7 - 1;
    }
    *a1 = result;
  }
  return result;
}


// ======================================================================
