// ADDR: 0x60194
// SYMBOL: sub_60194
bool __fastcall sub_60194(_BYTE *a1, const char *a2, int a3, int a4, float a5, float a6, char a7)
{
  int v11; // r4
  int (**v12)(void); // r1
  int v13; // r0
  pthread_t v15; // [sp+0h] [bp-48h] BYREF

  _android_log_print(4, "SAMP_ORIG", "Play: %s", a2);
  v11 = (unsigned __int8)*a1;
  if ( *a1 )
  {
    _android_log_print(4, "SAMP_ORIG", "Stop: %s", byte_117398);
    if ( *a1 && byte_1174AE )
    {
      byte_1174AF = 0;
      byte_1174AD = 1;
      do
        usleep(0xC8u);
      while ( byte_1174AE );
      v12 = (int (**)(void))&off_1ABF08;
      v13 = dword_117394;
    }
    else
    {
      v13 = dword_117394;
      if ( !dword_117394 )
      {
LABEL_10:
        sub_10967C((int)byte_117398, 0x101u);
        strncpy(byte_117398, a2, 0x100u);
        unk_1174A0 = a4;
        byte_1174AD = 0;
        unk_11749C = a3;
        unk_1174A4 = LODWORD(a5);
        byte_1174AF = 1;
        unk_1174A8 = LODWORD(a6);
        byte_1174AC = a7;
        pthread_create(&v15, 0, (void *(*)(void *))sub_60018, 0);
        return v11 != 0;
      }
      v12 = &off_1ABEE8;
    }
    ((void (__fastcall *)(int))*v12)(v13);
    dword_117394 = 0;
    goto LABEL_10;
  }
  return v11 != 0;
}


// ======================================================================
