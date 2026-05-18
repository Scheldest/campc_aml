// ADDR: 0x5fe2c
// SYMBOL: sub_5FE2C
int sub_5FE2C()
{
  DIR *v0; // r0
  DIR *v1; // r4
  struct dirent *v2; // r0
  const char *v3; // r6
  int v4; // r5

  v0 = opendir("/data/data/com.sampmobilerp.game/lib");
  if ( v0 )
  {
    v1 = v0;
    v2 = readdir(v0);
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = &v2->d_name[8];
        if ( strcmp(&v2->d_name[8], ".") )
        {
          if ( strcmp(v3, "..")
            && strstr(v3, ".so")
            && strcmp(v3, "libGTASA.so")
            && strcmp(v3, "libAML.so")
            && strcmp(v3, "libBASS.so")
            && strcmp(v3, "libCLEO.so")
            && strcmp(v3, "libdobby.so")
            && strcmp(v3, "libImmEmulatorJ.so")
            && strcmp(v3, "libluajit-5.1.so")
            && strcmp(v3, "libmonetloader.so")
            && strcmp(v3, "libsamp.so")
            && strcmp(v3, "libSAMP_ORIG.so")
            && strcmp(v3, "libSCAnd.so")
            && strcmp(v3, "libpluginCleoExtender.so")
            && strcmp(v3, "libFastman92pluginLoader.so")
            && strcmp(v3, "libplugin_fastman92limitAdjuster.so")
            && strcmp(v3, "libOpenAL32.so") )
          {
            break;
          }
        }
        v2 = readdir(v1);
        if ( !v2 )
          goto LABEL_24;
      }
      _android_log_print(6, "SAMP_ORIG", "New .so file detected: %s", v3);
      v4 = 1;
    }
    else
    {
LABEL_24:
      v4 = 0;
    }
    closedir(v1);
  }
  else
  {
    _android_log_print(6, "SAMP_ORIG", "Failed to open the lib directory.");
    return 0;
  }
  return v4;
}


// ======================================================================
// ADDR: 0x6b030
// SYMBOL: sub_6B030
int __fastcall sub_6B030(const char *a1)
{
  size_t v2; // r0
  size_t v3; // r5
  char *v4; // r6
  unsigned int v5; // r4
  int v6; // r5
  bool v7; // zf
  _DWORD v9[2]; // [sp+Ch] [bp-BCh] BYREF
  void *v10; // [sp+14h] [bp-B4h]
  _QWORD v11[5]; // [sp+18h] [bp-B0h] BYREF
  __int64 v12; // [sp+40h] [bp-88h]
  __int64 v13; // [sp+48h] [bp-80h]
  __int64 v14; // [sp+50h] [bp-78h]
  void *v15; // [sp+58h] [bp-70h]
  __int64 v16; // [sp+60h] [bp-68h]
  __int64 v17; // [sp+68h] [bp-60h]
  __int64 v18; // [sp+70h] [bp-58h]
  __int64 v19; // [sp+78h] [bp-50h]
  __int64 v20; // [sp+80h] [bp-48h]
  __int64 v21; // [sp+88h] [bp-40h]
  __int64 v22; // [sp+90h] [bp-38h]
  __int64 v23; // [sp+98h] [bp-30h]
  void *v24; // [sp+A0h] [bp-28h]

  _android_log_print(4, "Memory", "getLibraryAddress: %s", a1);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v2 = strlen(a1);
  if ( v2 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v9);
  v3 = v2;
  if ( v2 >= 0xB )
  {
    v5 = (v2 + 16) & 0xFFFFFFF0;
    v4 = (char *)operator new(v5);
    v9[1] = v3;
    v9[0] = v5 | 1;
    v10 = v4;
    goto LABEL_6;
  }
  LOBYTE(v9[0]) = 2 * v2;
  v4 = (char *)v9 + 1;
  if ( v2 )
LABEL_6:
    j_memcpy(v4, a1, v3);
  v4[v3] = 0;
  sub_B04BC(v11, v9);
  v16 = v11[0];
  v17 = v11[1];
  v18 = v11[2];
  v19 = v11[3];
  v20 = v11[4];
  if ( (unsigned __int8)v21 << 31 )
    operator delete((void *)v22);
  v22 = v13;
  v21 = v12;
  LOWORD(v12) = 0;
  if ( (unsigned __int8)v23 << 31 )
  {
    operator delete(v24);
    v24 = v15;
    v23 = v14;
    LOWORD(v14) = 0;
    if ( (unsigned __int8)v12 << 31 )
      operator delete((void *)v13);
  }
  else
  {
    v24 = v15;
    v23 = v14;
    LOWORD(v14) = 0;
  }
  if ( LOBYTE(v9[0]) << 31 )
    operator delete(v10);
  v6 = v16;
  if ( !v16 )
    goto LABEL_21;
  v7 = v17 == 0;
  if ( v17 )
    v7 = (unsigned __int8)v19 == 0;
  if ( !v7 && (unsigned int)v18 >= 5 && *(_DWORD *)v16 == 1179403647 )
  {
    _android_log_print(4, "Memory", "%s address: 0x%X ", a1, (_DWORD)v16);
  }
  else
  {
LABEL_21:
    _android_log_print(4, "Memory", "No map for lib: ", a1);
    v6 = 0;
  }
  if ( (unsigned __int8)v23 << 31 )
    operator delete(v24);
  if ( (unsigned __int8)v21 << 31 )
    operator delete((void *)v22);
  return v6;
}


// ======================================================================
// ADDR: 0x6c0e4
// SYMBOL: sub_6C0E4
int sub_6C0E4()
{
  int v0; // r0

  _android_log_print(4, "SAMP_ORIG", "SAMP::initialize()");
  v0 = sub_60F7C();
  sub_87B8C(v0);
  sub_61AD0();
  sub_616D0();
  sub_67AC0();
  return sub_66180();
}


// ======================================================================
