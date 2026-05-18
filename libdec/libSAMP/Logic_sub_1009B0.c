// ADDR: 0x100a1c
// SYMBOL: sub_100A1C
void __fastcall sub_100A1C(std::__thread_struct **a1, std::__thread_struct *a2)
{
  std::__thread_struct *v3; // r0
  void *v4; // r0
  const std::nothrow_t *v5; // r1

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
  {
    std::__thread_struct::~__thread_struct(v3);
    operator delete(v4, v5);
  }
}


// ======================================================================
