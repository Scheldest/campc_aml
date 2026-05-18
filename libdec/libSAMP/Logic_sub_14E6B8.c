// ADDR: 0xe3088
// SYMBOL: sub_E3088
bool __fastcall sub_E3088(_BYTE *a1, const char *a2, int a3, int a4, float a5, float a6, char a7)
{
  int v11; // r4
  pthread_t newthread[15]; // [sp+4h] [bp-3Ch] BYREF

  _android_log_print(4, "AXL", "Play: %s", a2);
  v11 = (unsigned __int8)*a1;
  if ( *a1 )
  {
    sub_E317C(a1, 1);
    if ( dword_23DAD8 )
    {
      sub_164BE4(dword_23DAD8);
      dword_23DAD8 = 0;
    }
    sub_22178C((int)byte_23DAE0, 0x101u);
    strncpy(byte_23DAE0, a2, 0x100u);
    unk_23DBE8 = a4;
    byte_23DBF5 = 0;
    unk_23DBE4 = a3;
    unk_23DBEC = LODWORD(a5);
    unk_23DBF0 = LODWORD(a6);
    byte_23DBF4 = a7;
    pthread_create(newthread, 0, (void *(*)(void *))sub_E2FA4, 0);
  }
  return v11 != 0;
}


// ======================================================================
