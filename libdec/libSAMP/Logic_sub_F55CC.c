// ADDR: 0xf11c4
// SYMBOL: sub_F11C4
int sub_F11C4()
{
  int result; // r0
  void *v1; // r0
  void *v2; // r4
  int (*v3)(void); // r0

  result = dword_23DF34;
  if ( !dword_23DF34 )
  {
    v1 = dlopen("libc.so", 4);
    if ( v1 )
    {
      v2 = v1;
      v3 = (int (*)(void))dlsym(v1, "android_get_device_api_level");
      if ( v3 )
        dword_23DF34 = v3();
      CloseLib_0(v2);
    }
    result = dword_23DF34;
    if ( dword_23DF34 <= 0 )
    {
      result = 19;
      dword_23DF34 = 19;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xf57b0
// SYMBOL: sub_F57B0
int __fastcall sub_F57B0(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_F59D0(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0xf5978
// SYMBOL: sub_F5978
int sub_F5978()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2400B8;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2400B8);
    if ( result )
    {
      dword_2400B0 = 0;
      _cxa_atexit((void (*)(void *))sub_F4B9C, dword_2400A0, &off_22A540);
      return sub_2242B0(&byte_2400B8);
    }
  }
  return result;
}


// ======================================================================
