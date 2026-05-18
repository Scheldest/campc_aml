// ADDR: 0xfa184
// SYMBOL: sub_FA184
int __fastcall sub_FA184(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v13; // r0
  int v14; // r0

  v13 = (unsigned __int8)byte_247364;
  __dmb(0xBu);
  if ( !(v13 << 31) && j___cxa_guard_acquire((__guard *)&byte_247364) )
  {
    dword_247360 = (int)dlopen("libGTASA.so", 0);
    j___cxa_guard_release((__guard *)&byte_247364);
  }
  if ( dword_247360 )
  {
    v14 = (unsigned __int8)byte_24736C;
    __dmb(0xBu);
    if ( !(v14 << 31) )
    {
      if ( j___cxa_guard_acquire((__guard *)&byte_24736C) )
      {
        off_247368 = dlsym((void *)dword_247360, "_ZN6CWorld21GetIsLineOfSightClearERK7CVectorS2_bbbbbbb");
        j___cxa_guard_release((__guard *)&byte_24736C);
      }
    }
    if ( off_247368 )
      return ((int (__fastcall *)(int, int, int, int, int, int, int, int, int))off_247368)(
               a2,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10);
    _android_log_print(
      3,
      "AXL",
      "%s: game do not contain symbol _ZN6CWorld21GetIsLineOfSightClearERK7CVectorS2_bbbbbbb",
      "bool CGame::GetIsLineOfSightClear(const VECTOR &, const VECTOR &, bool, bool, bool, bool, bool, bool, bool)");
  }
  else
  {
    _android_log_print(
      3,
      "AXL",
      "%s: can't find game library",
      "bool CGame::GetIsLineOfSightClear(const VECTOR &, const VECTOR &, bool, bool, bool, bool, bool, bool, bool)");
  }
  return 0;
}


// ======================================================================
