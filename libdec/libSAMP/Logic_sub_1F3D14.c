// ADDR: 0x1f3f4c
// SYMBOL: sub_1F3F4C
std::__shared_count *__fastcall sub_1F3F4C(std::__shared_count **a1, std::__shared_count *a2)
{
  std::__shared_count *result; // r0

  result = *a1;
  *a1 = a2;
  if ( result )
    return (std::__shared_count *)std::__shared_count::__release_shared(result);
  return result;
}


// ======================================================================
