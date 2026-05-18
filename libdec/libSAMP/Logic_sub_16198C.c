// ADDR: 0x161a78
// SYMBOL: sub_161A78
int __fastcall sub_161A78(int a1)
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
