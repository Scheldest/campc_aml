// ADDR: 0xfab24
// SYMBOL: sub_FAB24
int __fastcall sub_FAB24(int a1)
{
  std::__shared_weak_count *v2; // r0
  std::__shared_weak_count *v3; // r0
  std::__shared_weak_count *v4; // r4
  unsigned __int8 *v5; // r0
  int v6; // r5
  unsigned __int8 *v7; // r1
  int v8; // r2
  unsigned int *v9; // r0
  unsigned int v10; // r1

  v2 = *(std::__shared_weak_count **)(a1 + 8);
  if ( !v2 )
    return 0;
  v3 = (std::__shared_weak_count *)std::__shared_weak_count::lock(v2);
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = *(unsigned __int8 **)(a1 + 4);
  v6 = 0;
  if ( v5 )
  {
    v7 = v5 + 8;
    __dmb(0xBu);
    do
      v8 = __ldrex(v7);
    while ( __strex(0, v7) );
    __dmb(0xBu);
    if ( v8 << 31 )
    {
      (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v5 + 12))(v5);
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
  }
  v9 = (unsigned int *)((char *)v4 + 4);
  __dmb(0xBu);
  do
    v10 = __ldrex(v9);
  while ( __strex(v10 - 1, v9) );
  __dmb(0xBu);
  if ( !v10 )
  {
    (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v4 + 8))(v4);
    std::__shared_weak_count::__release_weak(v4);
  }
  return v6;
}


// ======================================================================
