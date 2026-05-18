// ADDR: 0xf68d4
// SYMBOL: sub_F68D4
void __fastcall sub_F68D4(int a1, int a2)
{
  _BYTE v3[8]; // [sp+0h] [bp-20h] BYREF
  void *v4; // [sp+8h] [bp-18h]
  int v5; // [sp+Ch] [bp-14h]
  _BYTE v6[16]; // [sp+10h] [bp-10h] BYREF

  std::string::basic_string(v3, a1);
  v5 = a2;
  sub_F77BE(v6, &dword_2402B4, v3, v3);
  if ( v3[0] << 31 )
    operator delete(v4);
}


// ======================================================================
