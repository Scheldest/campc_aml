// ADDR: 0x100aba
// SYMBOL: sub_100ABA
int __fastcall sub_100ABA(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x100af0
// SYMBOL: sub_100AF0
void **__fastcall sub_100AF0(void **a1)
{
  void *v1; // r5
  int v3; // r0
  void *v4; // r0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = (int)a1[1];
    if ( (void *)v3 == v1 )
    {
      v4 = v1;
    }
    else
    {
      do
        v3 = sub_100ABA(v3 - 8);
      while ( (void *)v3 != v1 );
      v4 = *a1;
    }
    a1[1] = v1;
    operator delete(v4);
  }
  return a1;
}


// ======================================================================
