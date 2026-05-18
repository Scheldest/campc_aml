// ADDR: 0x7dd90
// SYMBOL: sub_7DD90
int __fastcall sub_7DD90(int a1)
{
  return *(unsigned __int16 *)(a1 + 2) + 4;
}


// ======================================================================
// ADDR: 0x7f3a4
// SYMBOL: sub_7F3A4
pthread_t *__fastcall sub_7F3A4(pthread_t *a1, std::__thread_struct *a2)
{
  std::__thread_struct *v4; // r6
  std::__thread_struct **v5; // r0
  std::__ndk1 *v6; // r0
  const char *v7; // r2

  v4 = (std::__thread_struct *)operator new(4u);
  std::__thread_struct::__thread_struct(v4);
  v5 = (std::__thread_struct **)operator new(8u);
  *v5 = v4;
  v5[1] = a2;
  v6 = (std::__ndk1 *)pthread_create(a1, 0, (void *(*)(void *))sub_7FDA0, v5);
  if ( v6 )
    std::__throw_system_error(v6, (int)"thread constructor failed", v7);
  return a1;
}


// ======================================================================
