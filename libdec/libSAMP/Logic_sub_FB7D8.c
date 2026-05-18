// ADDR: 0x12731c
// SYMBOL: sub_12731C
unsigned int __fastcall sub_12731C(const char *a1, char a2)
{
  unsigned int v4; // r5
  char *i; // r6
  int v6; // r4
  int v7; // r10
  int v8; // r0
  int v9; // r0

  v4 = 0;
  for ( i = byte_313AA8; !v4 || *i; i += 48 )
  {
    if ( ++v4 == 32 )
    {
      _android_log_print(6, "AXL", "Can't load IMG archive \"%s\". No free entries in IMG pool", a1);
      return 0;
    }
  }
  v6 = 0;
  v7 = ((int (__fastcall *)(const char *, _DWORD))(dword_23DF24 + 2923721))(a1, 0);
  v8 = v4;
  if ( v4 <= 1 )
    v8 = 1;
  v9 = 48 * v8;
  while ( !v6 || *(_DWORD *)&byte_313AA8[v6 + 44] != v7 )
  {
    v6 += 48;
    if ( v9 == v6 )
    {
      _strcpy_chk(i, a1, 40);
      *((_DWORD *)i + 11) = v7;
      i[40] = a2;
      _android_log_print(4, "AXL", "Load IMG archive \"%s\"(%08X) at %d", a1, v7, v4);
      return v4;
    }
  }
  _android_log_print(6, "AXL", "Can't load IMG archive \"%s\". Archive with stream %08X already exists", a1, v7);
  return 0;
}


// ======================================================================
