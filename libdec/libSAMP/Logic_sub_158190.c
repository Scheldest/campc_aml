// ADDR: 0x1582d0
// SYMBOL: sub_1582D0
unsigned int **__fastcall sub_1582D0(unsigned int **a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // r5
  std::__ndk1 *v4; // r0
  int v5; // r0
  unsigned int *v6; // r0
  unsigned int *v7; // r1
  unsigned int v8; // r2
  _BYTE v10[16]; // [sp+0h] [bp-28h] BYREF
  char v11[4]; // [sp+10h] [bp-18h] BYREF
  int v12[5]; // [sp+14h] [bp-14h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    if ( !(*((unsigned __int8 *)v2 + 20) << 31) )
    {
      v3 = v2[2];
      v12[0] = 0;
      std::exception_ptr::~exception_ptr((std::exception_ptr *)v12);
      if ( !v3 )
      {
        v4 = (std::__ndk1 *)(*a1)[1];
        if ( (int)v4 >= 1 )
        {
          v5 = std::future_category(v4);
          std::future_error::future_error(v10, 4, v5);
          sub_158400(v11, v10);
        }
      }
    }
    v6 = *a1;
    __dmb(0xBu);
    v7 = v6 + 1;
    do
      v8 = __ldrex(v7);
    while ( __strex(v8 - 1, v7) );
    __dmb(0xBu);
    if ( !v8 )
      (*(void (__fastcall **)(unsigned int *))(*v6 + 8))(v6);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x158ac8
// SYMBOL: sub_158AC8
int *__fastcall sub_158AC8(int *a1)
{
  int v1; // r5

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
  {
    if ( *(unsigned __int8 *)(v1 + 20) << 31 )
      operator delete(*(void **)(v1 + 28));
    if ( *(unsigned __int8 *)(v1 + 8) << 31 )
      operator delete(*(void **)(v1 + 16));
    sub_1582D0((unsigned int **)(v1 + 4));
    sub_100A1C((std::__thread_struct **)v1, 0);
    operator delete((void *)v1);
  }
  return a1;
}


// ======================================================================
