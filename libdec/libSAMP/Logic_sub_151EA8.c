// ADDR: 0x15bdb6
// SYMBOL: sub_15BDB6
int __fastcall sub_15BDB6(int a1)
{
  int v2; // r0
  char v3; // r0

  if ( *(_BYTE *)(a1 + 18) )
    return 1;
  if ( *(_BYTE *)(a1 + 17) )
    return 0;
  v2 = *(_DWORD *)(a1 + 4);
  if ( !v2 )
    return 1;
  v3 = *(_BYTE *)(v2 + 4);
  __dmb(0xBu);
  return v3 & 1;
}


// ======================================================================
// ADDR: 0x15bdd8
// SYMBOL: sub_15BDD8
void __fastcall sub_15BDD8(int a1, int a2)
{
  _BYTE v4[8]; // [sp+0h] [bp-28h] BYREF
  void *v5; // [sp+8h] [bp-20h]
  _BYTE v6[8]; // [sp+Ch] [bp-1Ch] BYREF
  void *v7; // [sp+14h] [bp-14h]

  std::to_string((std::__ndk1 *)v4, *(std::__itoa **)(a2 + 12));
  sub_15A2FC((int)v6, (int)v4, *(unsigned __int8 *)(a2 + 16));
  std::string::basic_string(a1, v6);
  if ( v6[0] << 31 )
    operator delete(v7);
  if ( v4[0] << 31 )
    operator delete(v5);
}


// ======================================================================
// ADDR: 0x15ded0
// SYMBOL: sub_15DED0
int __fastcall sub_15DED0(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // r2

  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 2);
  if ( !(*a1 << 31) )
    v2 = a1 + 1;
  return sub_164AA4(0, v2, 0, 0, 0, 0, a2);
}


// ======================================================================
