// ADDR: 0xf582c
// SYMBOL: sub_F582C
int __fastcall sub_F582C(int a1)
{
  int v2; // r1
  void (__fastcall *v3)(int, int (__fastcall *)(int, int, int), int); // r5
  int v4; // r0

  _android_log_print(3, "AXL", "%s:REMOVE", "~FPSLimiter");
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 )
    sub_164196(dword_23DF24 + 6752180, v2, 0);
  v3 = *(void (__fastcall **)(int, int (__fastcall *)(int, int, int), int))(a1 + 12);
  if ( v3 )
  {
    v4 = (*(int (**)(void))(a1 + 4))();
    v3(v4, sub_F57EC, a1);
  }
  if ( *(_DWORD *)a1 )
    CloseLib_0(*(void **)a1);
  return a1;
}


// ======================================================================
