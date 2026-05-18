// ADDR: 0x1606ca
// SYMBOL: sub_1606CA
std::__shared_weak_count *__fastcall sub_1606CA(std::__shared_weak_count *result)
{
  int v1; // r5
  int v2; // r6
  std::__shared_weak_count *v3; // r4

  v2 = *((_DWORD *)result + 1);
  v1 = *(_DWORD *)result;
  v3 = result;
  while ( v2 != v1 )
  {
    result = *(std::__shared_weak_count **)(v2 - 4);
    if ( result )
      result = (std::__shared_weak_count *)std::__shared_weak_count::__release_weak(result);
    v2 -= 8;
  }
  *((_DWORD *)v3 + 1) = v1;
  return result;
}


// ======================================================================
