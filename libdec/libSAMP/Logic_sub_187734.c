// ADDR: 0x17e56c
// SYMBOL: sub_17E56C
void __fastcall sub_17E56C(_DWORD *a1, int a2)
{
  int v2; // [sp+4h] [bp-Ch] BYREF

  v2 = a2;
  if ( a2 )
    sub_17E430(a1, &v2);
}


// ======================================================================
// ADDR: 0x1879d6
// SYMBOL: sub_1879D6
unsigned int __fastcall sub_1879D6(int a1, int a2)
{
  unsigned int result; // r0

  result = *(_DWORD *)(a1 + 8);
  if ( result )
  {
    if ( result > 0x200 && !a2 )
    {
      if ( *(_DWORD *)a1 )
        operator delete[](*(void **)a1);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1879fc
// SYMBOL: sub_1879FC
unsigned int __fastcall sub_1879FC(int a1, int a2)
{
  unsigned int result; // r0

  result = *(_DWORD *)(a1 + 8);
  if ( result )
  {
    if ( result > 0x200 && !a2 )
    {
      if ( *(_DWORD *)a1 )
        operator delete[](*(void **)a1);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x18a128
// SYMBOL: sub_18A128
int __fastcall sub_18A128(int a1)
{
  sub_18A144(a1, 0);
  if ( *(_DWORD *)(a1 + 8) && *(_DWORD *)a1 )
    operator delete[](*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x18a29a
// SYMBOL: sub_18A29A
int __fastcall sub_18A29A(_DWORD *a1)
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
// ADDR: 0x18a2da
// SYMBOL: sub_18A2DA
int __fastcall sub_18A2DA(int *a1)
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
