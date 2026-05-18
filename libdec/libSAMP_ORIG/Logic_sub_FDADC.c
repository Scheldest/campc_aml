// ADDR: 0xfdd74
// SYMBOL: sub_FDD74
std::__shared_count *__fastcall sub_FDD74(std::__shared_count **a1, std::__shared_count *a2)
{
  std::__shared_count *result; // r0

  result = *a1;
  *a1 = a2;
  if ( result )
    return (std::__shared_count *)std::__shared_count::__release_shared(result);
  return result;
}


// ======================================================================
