// ADDR: 0x1085c0
// SYMBOL: sub_1085C0
int __fastcall sub_1085C0(int a1, const char *a2)
{
  int v2; // r5
  int v4; // r5
  int v5; // r0
  _DWORD v7[5]; // [sp+4h] [bp-14h] BYREF

  v2 = 0;
  if ( a1 && a2 )
  {
    v4 = ((int (*)(void))loc_108644)();
    if ( v4 == -1 )
      v4 = ((int (__fastcall *)(const char *))loc_108644)("*");
    sub_10867C();
    sub_1086A8(v4, 0);
    v7[0] = 0;
    v5 = ((int (__fastcall *)(_DWORD *, const char *))(dword_23DF24 + 6064185))(v7, a2);
    v2 = v7[0];
    if ( !v7[0] )
      v5 = _android_log_print(3, "AXL", "Texture \"%s\" was not found!", a2);
    sub_1086D4(v5);
  }
  return v2;
}


// ======================================================================
