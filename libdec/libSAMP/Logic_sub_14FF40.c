// ADDR: 0xf9f1c
// SYMBOL: sub_F9F1C
int __fastcall sub_F9F1C(int a1, int a2, int a3, int a4, float a5, float a6, int a7)
{
  int v10; // r5

  v10 = operator new(0x50u);
  sub_109470(v10, a2, a3, a4, a5, a6, 0);
  if ( !*(_DWORD *)(v10 + 12) )
  {
    _android_log_print(6, "AXL", "Create vehicle %d without game ptr", a2);
    return 0;
  }
  return v10;
}


// ======================================================================
