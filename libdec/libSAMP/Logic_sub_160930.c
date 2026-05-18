// ADDR: 0x160946
// SYMBOL: sub_160946
std::__shared_weak_count *__fastcall sub_160946(std::__shared_weak_count *result)
{
  int v1; // r1
  int v2; // r5
  std::__shared_weak_count *v3; // r4

  v1 = *((_DWORD *)result + 2);
  v2 = *((_DWORD *)result + 1);
  if ( v1 != v2 )
  {
    v3 = result;
    do
    {
      result = *(std::__shared_weak_count **)(v1 - 4);
      v1 -= 8;
      *((_DWORD *)v3 + 2) = v1;
      if ( result )
      {
        result = (std::__shared_weak_count *)std::__shared_weak_count::__release_weak(result);
        v1 = *((_DWORD *)v3 + 2);
      }
    }
    while ( v1 != v2 );
  }
  return result;
}


// ======================================================================
