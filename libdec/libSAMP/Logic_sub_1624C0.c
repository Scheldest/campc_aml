// ADDR: 0x162350
// SYMBOL: sub_162350
_DWORD *__fastcall sub_162350(_DWORD *a1)
{
  _DWORD *v2; // r0
  void *v3; // r0
  unsigned int *v4; // r1
  unsigned int v5; // r2
  __int64 v7; // [sp+8h] [bp-18h] BYREF

  *a1 = 0;
  a1[1] = 0;
  v2 = (_DWORD *)operator new(0x10u);
  v2[2] = 0;
  *v2 = &off_22FB40;
  v2[1] = 0;
  v2[3] = &off_22FB68;
  *a1 = v2 + 3;
  a1[1] = v2;
  v3 = sub_F0ED8(1);
  v7 = *(_QWORD *)a1;
  if ( HIDWORD(v7) )
  {
    v4 = (unsigned int *)(HIDWORD(v7) + 8);
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 + 1, v4) );
  }
  sub_15FF90((int)v3, (int *)&v7);
  if ( HIDWORD(v7) )
    std::__shared_weak_count::__release_weak((std::__shared_weak_count *)HIDWORD(v7));
  return a1;
}


// ======================================================================
