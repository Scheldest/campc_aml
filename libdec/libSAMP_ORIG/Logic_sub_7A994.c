// ADDR: 0x685f8
// SYMBOL: sub_685F8
int __fastcall sub_685F8(const char *a1, const char *a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r6

  v4 = ((int (__fastcall *)(const char *))(dword_1A4404 + 2010253))(a1);
  if ( v4 )
  {
    v5 = v4;
    ((void (__fastcall *)(int))(dword_1A4404 + 2005961))(v4);
    v6 = ((int (__fastcall *)(const char *))(dword_1A4404 + 2006245))(a2);
    if ( v6 )
      ++*(_DWORD *)(v6 + 7392);
    else
      _android_log_print(4, "SAMP_ORIG", "Texture (%s) not found in database (%s)", a2, a1);
    ((void (__fastcall *)(int))(dword_1A4404 + 2006145))(v5);
  }
  else
  {
    _android_log_print(4, "SAMP_ORIG", "TextureDatabase %s not found!", a1);
    return 0;
  }
  return v6;
}


// ======================================================================
