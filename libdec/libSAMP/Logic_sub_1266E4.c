// ADDR: 0x126764
// SYMBOL: sub_126764
int sub_126764()
{
  FILE *v0; // r0
  FILE *v1; // r10
  const char *v2; // r4
  const char *v3; // r11
  int v4; // r3
  unsigned int v5; // r4
  unsigned int v6; // r6
  char *v7; // r0
  int v8; // r3
  __int64 v9; // r4
  int v10; // r6
  int v12; // [sp+50h] [bp-2D8h] BYREF
  int v13; // [sp+54h] [bp-2D4h] BYREF
  int v14; // [sp+58h] [bp-2D0h] BYREF
  int v15; // [sp+5Ch] [bp-2CCh] BYREF
  int v16; // [sp+60h] [bp-2C8h] BYREF
  __int16 v17; // [sp+66h] [bp-2C2h] BYREF
  _BYTE v18[48]; // [sp+68h] [bp-2C0h] BYREF
  __int16 v19; // [sp+98h] [bp-290h]
  char s1[305]; // [sp+A0h] [bp-288h] BYREF
  char v21[255]; // [sp+1D1h] [bp-157h] BYREF
  __int64 v22; // [sp+2D0h] [bp-58h] BYREF
  __int64 v23; // [sp+2D8h] [bp-50h] BYREF
  __int64 v24; // [sp+2E0h] [bp-48h] BYREF
  __int64 v25; // [sp+2E8h] [bp-40h]
  int v26; // [sp+2F0h] [bp-38h] BYREF

  sub_22178C((int)&unk_263E18, (size_t)&unk_AFC80);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  sub_F97EC();
  sub_12693C(v21);
  v0 = fopen(v21, "r");
  if ( v0 )
  {
    v1 = v0;
    _android_log_print(4, "AXL", "CVehicleSoundHook: vehicleAudioSetting loaded..");
    sub_22178C((int)s1, 0x12Cu);
    memset(v18, 0, sizeof(v18));
    v19 = 0;
    v17 = 0;
    if ( fgets(s1, 300, v1) )
    {
      v2 = ";the end";
      do
      {
        if ( !memcmp(s1, v2, 8u) )
          break;
        if ( s1[0] != 59 )
        {
          sscanf(
            s1,
            "%s %hd %hd %hd %hd %f %f %d %f %d %d %d %d %f",
            v18,
            &v22,
            (char *)&v22 + 2,
            (char *)&v22 + 4,
            (char *)&v22 + 6,
            &v23,
            (char *)&v23 + 4,
            &v16,
            (char *)&v24 + 4,
            &v15,
            &v14,
            &v13,
            &v12,
            &v26);
          v3 = v2;
          LOBYTE(v24) = v16;
          LOBYTE(v25) = v15;
          BYTE2(v25) = v14;
          BYTE3(v25) = v13;
          BYTE4(v25) = v12;
          ((void (__fastcall *)(_BYTE *, __int16 *))(dword_23DF24 + 3693897))(v18, &v17);
          v4 = HIDWORD(v22);
          v6 = HIDWORD(v23);
          v5 = v23;
          v7 = (char *)&unk_263E18 + 36 * v17 - 14400;
          *(_DWORD *)v7 = v22;
          *((_DWORD *)v7 + 1) = v4;
          *((_QWORD *)v7 + 1) = __PAIR64__(v6, v5);
          v7 += 16;
          v8 = HIDWORD(v24);
          v9 = v25;
          v10 = v26;
          *(_DWORD *)v7 = v24;
          *((_DWORD *)v7 + 1) = v8;
          *((_QWORD *)v7 + 1) = v9;
          *((_DWORD *)v7 + 4) = v10;
          v2 = v3;
        }
      }
      while ( fgets(s1, 300, v1) );
    }
    return fclose(v1);
  }
  else
  {
    _android_log_print(4, "AXL", "CVehicleSoundHook: Cannot read vehicleAudioSettings.cfg");
    return sub_126724();
  }
}


// ======================================================================
