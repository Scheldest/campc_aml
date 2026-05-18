// ADDR: 0x15a2fc
// SYMBOL: sub_15A2FC
void __fastcall sub_15A2FC(int a1, int a2, int a3)
{
  _BYTE v4[8]; // [sp+0h] [bp-20h] BYREF
  void *v5; // [sp+8h] [bp-18h]
  _BYTE v6[8]; // [sp+Ch] [bp-14h] BYREF
  void *v7; // [sp+14h] [bp-Ch]

  if ( a3 )
    sub_15A150((int)v6);
  else
    sub_15A0B0((int)v6);
  std::__fs::filesystem::path::path<std::string,void>((int)v4);
  sub_F1DD4(a1, (int)v6, (int)v4);
  if ( v4[0] << 31 )
    operator delete(v5);
  if ( v6[0] << 31 )
    operator delete(v7);
}


// ======================================================================
