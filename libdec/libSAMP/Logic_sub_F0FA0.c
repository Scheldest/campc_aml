// ADDR: 0xf120c
// SYMBOL: sub_F120C
int __fastcall sub_F120C(int a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = (unsigned int)&off_22AA94;
  sub_15474C(a1 + 16);
  return a1;
}


// ======================================================================
// ADDR: 0xf129a
// SYMBOL: sub_F129A
std::__shared_weak_count *__fastcall sub_F129A(std::__shared_weak_count *result, _DWORD *a2, int a3)
{
  std::__shared_weak_count *v3; // r3
  unsigned int *v4; // r5
  unsigned int *v5; // r0
  unsigned int v6; // r3
  unsigned int *v7; // r0
  unsigned int v8; // r3
  unsigned int v9; // r1

  if ( a2 )
  {
    v3 = result;
    result = (std::__shared_weak_count *)a2[1];
    if ( !result || *((_DWORD *)result + 1) == -1 )
    {
      v4 = (unsigned int *)*((_DWORD *)v3 + 1);
      if ( v4 )
      {
        v5 = v4 + 1;
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 + 1, v5) );
        v7 = v4 + 2;
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        result = (std::__shared_weak_count *)a2[1];
      }
      *a2 = a3;
      a2[1] = v4;
      if ( result )
        result = (std::__shared_weak_count *)std::__shared_weak_count::__release_weak(result);
      if ( v4 )
      {
        result = (std::__shared_weak_count *)(v4 + 1);
        __dmb(0xBu);
        do
          v9 = __ldrex((unsigned int *)result);
        while ( __strex(v9 - 1, (unsigned int *)result) );
        __dmb(0xBu);
        if ( !v9 )
        {
          (*(void (__fastcall **)(unsigned int *))(*v4 + 8))(v4);
          return (std::__shared_weak_count *)sub_2242E0(v4);
        }
      }
    }
  }
  return result;
}


// ======================================================================
