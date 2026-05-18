// ADDR: 0x60820
// SYMBOL: sub_60820
int sub_60820()
{
  int v0; // r0
  int v1; // r4
  int v2; // r4
  int v3; // r4
  const char *v4; // r3
  const char *v5; // r6
  __int64 v7; // [sp+10h] [bp-28h] BYREF
  __int64 v8; // [sp+18h] [bp-20h]
  int v9; // [sp+24h] [bp-14h]

  v0 = (unsigned __int8)byte_117514;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_117514) )
  {
    *(_QWORD *)byte_117500 = 0x333B322929352819LL;
    *(_QWORD *)&byte_117500[8] = 0x3135351222331C28LL;
    dword_117510 = 1517515305;
    _cxa_atexit((void (*)(void *))sub_60BE6, byte_117500, &off_110560);
    j___cxa_guard_release((__guard *)&byte_117514);
  }
  sub_60BF6(byte_117500);
  _android_log_print(4, "SAMP_ORIG", byte_117500);
  v1 = dword_1A4404 + 9776304;
  if ( sub_AF9C0(dword_1A4404 + 9776304, 4096, 7) )
    sub_AF9C0(v1, 4096, 3);
  else
    _android_log_print(4, "Memory", "protectAddr (_PROT_RWX_) failed: 0x%X -> using _PROT_RW_", v1);
  v2 = dword_1A4404 + 9776304;
  dword_1174B4 = dword_1A4404 + 9776304;
  if ( sub_AF9C0(dword_1A4404 + 9776304, 4096, 7) )
    sub_AF9C0(v2, 4096, 3);
  else
    _android_log_print(4, "Memory", "protectAddr (_PROT_RWX_) failed: 0x%X -> using _PROT_RW_", v2);
  dword_1174BC = dword_1A4404 + 10644112;
  dword_1174B0 = dword_1A4404 + 9876736;
  dword_1174D4 = dword_1A4404 + 6785108;
  dword_1174C0 = dword_1A4404 + 9776880;
  dword_1174B8 = dword_1A4404 + 9776308;
  sub_60B0C(dword_1A4404 + 6760576, sub_603B4, &off_1174C4);
  sub_60B0C(dword_1A4404 + 6748624, sub_604C8, &off_1174C8);
  sub_60B0C(dword_1A4404 + 6756284, sub_60534, &off_1174D0);
  sub_60B0C(dword_1A4404 + 6755656, sub_60594, &off_1174EC);
  sub_60B0C(dword_1A4404 + 6771936, sub_6071C, &off_1174F0);
  sub_60B0C(dword_1A4404 + 6750784, sub_607E0, &off_1174F4);
  v3 = dword_1A4404 + 5603270;
  v7 = 0LL;
  v8 = 0LL;
  if ( dladdr(dword_1A4404 + 5603270, &v7) )
  {
    v4 = "unknown symbol";
    v5 = "unknown file";
    if ( (_DWORD)v7 )
      v5 = (const char *)v7;
    if ( (_DWORD)v8 )
      v4 = (const char *)v8;
    _android_log_print(4, "Memory", "Hooking %s (0x%X) from %s (0x%X)", v4, HIDWORD(v8), v5, HIDWORD(v7));
  }
  DobbyHook(v3 + 1, sub_604FC, &off_1174CC);
  return v9;
}


// ======================================================================
