// ADDR: 0x1117b4
// SYMBOL: sub_1117B4
unsigned int *__fastcall sub_1117B4(_DWORD *a1, int a2, __int64 *a3, int *a4)
{
  std::__shared_weak_count *v8; // r6
  __int64 v9; // r2
  int v10; // r5
  unsigned int *v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r1
  char *v14; // r0
  unsigned int *v15; // r1
  unsigned int v16; // r2
  unsigned int *result; // r0
  std::__shared_weak_count *v18; // r4
  unsigned int v19; // r1
  char *v20; // [sp+0h] [bp-20h] BYREF
  unsigned int *v21; // [sp+4h] [bp-1Ch]

  v8 = (std::__shared_weak_count *)operator new(0x28u);
  v9 = *a3;
  *(_DWORD *)v8 = &off_22B658;
  *((_DWORD *)v8 + 3) = &off_22B680;
  *((_WORD *)v8 + 10) = 1;
  v10 = *a4;
  *((_DWORD *)v8 + 1) = 0;
  v11 = (unsigned int *)((char *)v8 + 4);
  *((_DWORD *)v8 + 2) = 0;
  *((_DWORD *)v8 + 4) = 0;
  *((_DWORD *)v8 + 6) = a2;
  *(_QWORD *)((char *)v8 + 28) = v9;
  *((_DWORD *)v8 + 9) = v10;
  v21 = (unsigned int *)v8;
  v20 = (char *)v8 + 12;
  do
    v12 = __ldrex(v11);
  while ( __strex(v12 + 1, v11) );
  __dmb(0xBu);
  do
    v13 = __ldrex(v11);
  while ( __strex(v13 - 1, v11) );
  __dmb(0xBu);
  if ( !v13 )
  {
    (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v8 + 8))(v8);
    std::__shared_weak_count::__release_weak(v8);
  }
  v14 = v20;
  if ( v21 )
  {
    v15 = v21 + 2;
    do
      v16 = __ldrex(v15);
    while ( __strex(v16 + 1, v15) );
  }
  a1[2] = v21;
  *a1 = &off_22AE84;
  a1[1] = v14;
  result = (unsigned int *)sub_111CA0(a2, &v20);
  v18 = (std::__shared_weak_count *)v21;
  if ( v21 )
  {
    result = v21 + 1;
    __dmb(0xBu);
    do
      v19 = __ldrex(result);
    while ( __strex(v19 - 1, result) );
    __dmb(0xBu);
    if ( !v19 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v18 + 8))(v18);
      return (unsigned int *)std::__shared_weak_count::__release_weak(v18);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1119a4
// SYMBOL: sub_1119A4
int __fastcall sub_1119A4(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_112180(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x112128
// SYMBOL: sub_112128
int sub_112128()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263458;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263458);
    if ( result )
    {
      dword_263450 = 0;
      _cxa_atexit((void (*)(void *))sub_10CC6C, dword_263440, &off_22A540);
      return sub_2242B0(&byte_263458);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x115004
// SYMBOL: sub_115004
int sub_115004()
{
  int result; // r0
  std::runtime_error *exception; // r4

  result = dword_263468;
  if ( !dword_263468 )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "descent_builder: object not created yet");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  return result;
}


// ======================================================================
