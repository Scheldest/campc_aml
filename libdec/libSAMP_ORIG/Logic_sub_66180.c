// ADDR: 0x6be64
// SYMBOL: sub_6BE64
int sub_6BE64()
{
  char *v0; // r6
  const char *v1; // r0
  const char *v2; // r3
  const char *v3; // r11
  char *v4; // r6
  const char *v5; // r0
  const char *v6; // r3
  int v7; // r6
  const char *v8; // r0
  const char *v9; // r3
  char *v10; // r6
  const char *v11; // r0
  const char *v12; // r3
  char *v13; // r6
  const char *v14; // r3
  __int64 v16; // [sp+10h] [bp-48h] BYREF
  __int64 v17; // [sp+18h] [bp-40h]
  int v18; // [sp+24h] [bp-34h]

  _android_log_print(4, "SAMP_ORIG", "initializeRPC_hooks()");
  v16 = 0LL;
  v17 = 0LL;
  v0 = (char *)&unk_144C9C + dword_1A4408;
  if ( dladdr((char *)&unk_144C9C + dword_1A4408, &v16) )
  {
    v1 = (const char *)v16;
    v2 = (const char *)v17;
    if ( !(_DWORD)v16 )
      v1 = "unknown file";
    if ( !(_DWORD)v17 )
      v2 = "unknown symbol";
    _android_log_print(4, "Memory", "Hooking %s (0x%X) from %s (0x%X)", v2, HIDWORD(v17), v1, HIDWORD(v16));
  }
  v3 = "unknown file";
  DobbyHook(v0 + 1, sub_6B3AC, &off_1A4418);
  v16 = 0LL;
  v17 = 0LL;
  v4 = (char *)&unk_145AF4 + dword_1A4408;
  if ( dladdr((char *)&unk_145AF4 + dword_1A4408, &v16) )
  {
    v5 = (const char *)v16;
    v6 = (const char *)v17;
    if ( !(_DWORD)v16 )
      v5 = "unknown file";
    if ( !(_DWORD)v17 )
      v6 = "unknown symbol";
    _android_log_print(4, "Memory", "Hooking %s (0x%X) from %s (0x%X)", v6, HIDWORD(v17), v5, HIDWORD(v16));
  }
  DobbyHook(v4 + 1, sub_6B4E8, &off_1A441C);
  v7 = dword_1A4408 + 1336408;
  v16 = 0LL;
  v17 = 0LL;
  if ( dladdr(dword_1A4408 + 1336408, &v16) )
  {
    v8 = (const char *)v16;
    v9 = (const char *)v17;
    if ( !(_DWORD)v16 )
      v8 = "unknown file";
    if ( !(_DWORD)v17 )
      v9 = "unknown symbol";
    _android_log_print(4, "Memory", "Hooking %s (0x%X) from %s (0x%X)", v9, HIDWORD(v17), v8, HIDWORD(v16));
  }
  DobbyHook(v7 + 1, sub_6B78C, &unk_1A4420);
  v16 = 0LL;
  v17 = 0LL;
  v10 = (char *)&unk_14780C + dword_1A4408;
  if ( dladdr((char *)&unk_14780C + dword_1A4408, &v16) )
  {
    v11 = (const char *)v16;
    v12 = (const char *)v17;
    if ( !(_DWORD)v16 )
      v11 = "unknown file";
    if ( !(_DWORD)v17 )
      v12 = "unknown symbol";
    _android_log_print(4, "Memory", "Hooking %s (0x%X) from %s (0x%X)", v12, HIDWORD(v17), v11, HIDWORD(v16));
  }
  DobbyHook(v10 + 1, sub_6BDCC, &off_1A4428);
  v13 = (char *)&unk_14D4E8 + dword_1A4408;
  v16 = 0LL;
  v17 = 0LL;
  if ( dladdr((char *)&unk_14D4E8 + dword_1A4408, &v16) )
  {
    v14 = "unknown symbol";
    if ( (_DWORD)v16 )
      v3 = (const char *)v16;
    if ( (_DWORD)v17 )
      v14 = (const char *)v17;
    _android_log_print(4, "Memory", "Hooking %s (0x%X) from %s (0x%X)", v14, HIDWORD(v17), v3, HIDWORD(v16));
  }
  DobbyHook(v13 + 1, sub_6B888, &off_1A4424);
  return v18;
}


// ======================================================================
// ADDR: 0x79388
// SYMBOL: sub_79388
int sub_79388()
{
  char *v0; // r4
  const char *v1; // r5
  const char *v2; // r0
  const char *v3; // r3
  char *v4; // r6
  const char *v5; // r3
  __int64 v7; // [sp+10h] [bp-48h] BYREF
  __int64 v8; // [sp+18h] [bp-40h]
  int v9; // [sp+24h] [bp-34h]

  v0 = (char *)&unk_147668 + dword_1A4408;
  v7 = 0LL;
  v8 = 0LL;
  v1 = "unknown file";
  if ( dladdr((char *)&unk_147668 + dword_1A4408 + 104, &v7) )
  {
    v2 = (const char *)v7;
    v3 = (const char *)v8;
    if ( !(_DWORD)v7 )
      v2 = "unknown file";
    if ( !(_DWORD)v8 )
      v3 = "unknown symbol";
    _android_log_print(4, "Memory", "Hooking %s (0x%X) from %s (0x%X)", v3, HIDWORD(v8), v2, HIDWORD(v7));
  }
  DobbyHook(v0 + 105, sub_791A0, &unk_1A4550);
  v7 = 0LL;
  v8 = 0LL;
  v4 = (char *)&unk_147668 + dword_1A4408;
  if ( dladdr((char *)&unk_147668 + dword_1A4408, &v7) )
  {
    if ( (_DWORD)v7 )
      v1 = (const char *)v7;
    v5 = "unknown symbol";
    if ( (_DWORD)v8 )
      v5 = (const char *)v8;
    _android_log_print(4, "Memory", "Hooking %s (0x%X) from %s (0x%X)", v5, HIDWORD(v8), v1, HIDWORD(v7));
  }
  DobbyHook(v4 + 1, sub_792C4, &unk_1A4554);
  return v9;
}


// ======================================================================
