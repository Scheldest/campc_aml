// ADDR: 0x106750
// SYMBOL: sub_106750
int sub_106750()
{
  int globals; // r0
  int v1; // r2
  int v2; // r3

  globals = j___cxa_get_globals();
  v1 = *(_DWORD *)(globals + 8);
  if ( !v1 )
    std::terminate();
  if ( *(_QWORD *)(v1 + 40) >> 8 == 0x434C4E47432B2BLL )
  {
    v2 = *(_DWORD *)(v1 + 36) - 1;
    *(_DWORD *)(v1 + 36) = v2;
    if ( !v2 )
    {
      *(_DWORD *)(globals + 8) = *(_DWORD *)(v1 + 32);
      *(_DWORD *)(v1 + 32) = 0;
    }
  }
  else
  {
    *(_DWORD *)(globals + 8) = 0;
  }
  return v1 + 40;
}


// ======================================================================
// ADDR: 0x10a878
// SYMBOL: sub_10A878
void __fastcall __noreturn sub_10A878(_DWORD *a1)
{
  _BYTE v2[392]; // [sp+8h] [bp-2E0h] BYREF
  _BYTE v3[344]; // [sp+190h] [bp-158h] BYREF

  sub_10C110(v3);
  if ( a1[3] )
    sub_10A914(v3, v2, a1);
  else
    sub_10A718((int)v3, (int)v2, a1, 1);
  fprintf((FILE *)((char *)&_sF + 168), "libunwind: %s - %s\n", "_Unwind_Resume", "_Unwind_Resume() can't return");
  fflush((FILE *)((char *)&_sF + 168));
  abort();
}


// ======================================================================
