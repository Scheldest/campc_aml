// ADDR: 0xf2a5c
// SYMBOL: sub_F2A5C
int __fastcall sub_F2A5C(int a1)
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
// ADDR: 0xf2a92
// SYMBOL: sub_F2A92
void **__fastcall sub_F2A92(void **a1)
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
        v3 = sub_F2A5C(v3 - 8);
      while ( (void *)v3 != v1 );
      v4 = *a1;
    }
    a1[1] = v1;
    operator delete(v4);
  }
  return a1;
}


// ======================================================================
