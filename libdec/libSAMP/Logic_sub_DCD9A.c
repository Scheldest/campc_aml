// ADDR: 0xdd1e8
// SYMBOL: sub_DD1E8
int __fastcall sub_DD1E8(int a1, int a2, int a3)
{
  const char *v5; // r6
  const char *v7; // [sp+8h] [bp-18h] BYREF
  size_t v8; // [sp+Ch] [bp-14h]

  if ( (*(unsigned __int8 *)(a3 + 8) | 0x10) != 0x10 )
    return sub_DD260(a1, a2, *(_DWORD *)((char *)&unk_91DB0 + ((*(unsigned __int16 *)(a3 + 9) >> 2) & 0x1C)), a3, 0);
  v5 = "true";
  if ( !a2 )
    v5 = "false";
  v7 = v5;
  v8 = _strlen_chk(v5, 6u);
  return ((int (__fastcall *)(int, int, size_t, size_t, const char **))sub_DE1CC)(a1, a3, v8, v8, &v7);
}


// ======================================================================
