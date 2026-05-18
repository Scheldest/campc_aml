// ADDR: 0x15bec4
// SYMBOL: sub_15BEC4
void __fastcall sub_15BEC4(int a1, int *a2)
{
  int v3; // r1
  unsigned int *v5; // r4
  unsigned int *v6; // r0
  unsigned int v7; // r1
  void *v8; // r8
  int v9; // r4
  std::__shared_weak_count *v10; // r6
  unsigned int *v11; // r0
  unsigned int v12; // r1
  _BYTE v13[8]; // [sp+4h] [bp-1Ch] BYREF
  void *v14; // [sp+Ch] [bp-14h]

  v3 = *a2;
  if ( *(_BYTE *)(v3 + 18) )
  {
    v5 = (unsigned int *)a2[1];
    *a2 = 0;
    a2[1] = 0;
    if ( v5 )
    {
      v6 = v5 + 1;
      __dmb(0xBu);
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      __dmb(0xBu);
      if ( !v7 )
      {
        (*(void (__fastcall **)(unsigned int *))(*v5 + 8))(v5);
        sub_2242E0(v5);
      }
    }
  }
  else
  {
    sub_15BDD8((int)v13, v3);
    v8 = v14;
    v9 = v13[0];
    sub_15C942(a1 + 4, *a2 + 12);
    v10 = (std::__shared_weak_count *)a2[1];
    *a2 = 0;
    a2[1] = 0;
    if ( v10 )
    {
      v11 = (unsigned int *)((char *)v10 + 4);
      __dmb(0xBu);
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      __dmb(0xBu);
      if ( !v12 )
      {
        (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v10 + 8))(v10);
        std::__shared_weak_count::__release_weak(v10);
      }
    }
    if ( v9 << 31 )
      operator delete(v8);
  }
}


// ======================================================================
// ADDR: 0x15dea4
// SYMBOL: sub_15DEA4
int __fastcall sub_15DEA4(int a1)
{
  int result; // r0
  int v3; // r1
  int i; // r2

  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    sub_15C8E2(a1, *(_DWORD **)(a1 + 8));
    v3 = *(_DWORD *)(a1 + 4);
    result = 0;
    *(_DWORD *)(a1 + 8) = 0;
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
        *(_DWORD *)(*(_DWORD *)a1 + 4 * i) = 0;
    }
    *(_DWORD *)(a1 + 12) = 0;
  }
  return result;
}


// ======================================================================
