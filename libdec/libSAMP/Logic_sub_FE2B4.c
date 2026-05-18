// ADDR: 0x100934
// SYMBOL: sub_100934
pthread_t *__fastcall sub_100934(pthread_t *a1, __int64 *a2, int *a3)
{
  std::__thread_struct *v6; // r5
  char *v7; // r3
  __int64 v8; // r0
  int v9; // r6
  std::__ndk1 *v10; // r0
  const char *v11; // r2

  v6 = (std::__thread_struct *)operator new(4u);
  std::__thread_struct::__thread_struct(v6);
  v7 = (char *)operator new(0x10u);
  v8 = *a2;
  v9 = *a3;
  *(_DWORD *)v7 = v6;
  *(_QWORD *)(v7 + 4) = v8;
  *((_DWORD *)v7 + 3) = v9;
  v10 = (std::__ndk1 *)pthread_create(a1, 0, (void *(*)(void *))sub_1009B0, v7);
  if ( v10 )
    std::__throw_system_error(v10, (int)"thread constructor failed", v11);
  return a1;
}


// ======================================================================
