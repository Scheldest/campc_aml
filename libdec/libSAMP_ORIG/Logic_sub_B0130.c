// ADDR: 0xafe00
// SYMBOL: sub_AFE00
int __fastcall sub_AFE00(_DWORD *a1)
{
  _DWORD *v1; // r8
  FILE *v2; // r0
  FILE *v3; // r9
  int v4; // r0
  int v5; // r2
  int v6; // r3
  __int64 v7; // kr00_8
  __int64 v8; // d17
  __int64 v9; // d18
  __int64 v10; // d19
  __int64 v11; // d20
  int v12; // r2
  int v13; // r3
  _DWORD *v15; // [sp+14h] [bp-3B4h]
  int v16; // [sp+30h] [bp-398h] BYREF
  char v17; // [sp+34h] [bp-394h]
  __int64 v18; // [sp+38h] [bp-390h] BYREF
  __int64 v19; // [sp+40h] [bp-388h] BYREF
  __int64 v20; // [sp+48h] [bp-380h]
  __int64 v21; // [sp+50h] [bp-378h]
  __int64 v22; // [sp+58h] [bp-370h] BYREF
  __int64 v23; // [sp+60h] [bp-368h] BYREF
  __int64 v24; // [sp+68h] [bp-360h] BYREF
  __int64 v25; // [sp+70h] [bp-358h] BYREF
  void *v26; // [sp+78h] [bp-350h]
  char v27[256]; // [sp+80h] [bp-348h] BYREF
  int v28; // [sp+180h] [bp-248h] BYREF
  _DWORD v29[3]; // [sp+184h] [bp-244h]
  char s[516]; // [sp+190h] [bp-238h] BYREF
  int v31; // [sp+394h] [bp-34h]

  v1 = a1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  sub_10967C((int)s, 0x200u);
  v2 = fopen("/proc/self/maps", (const char *)&a6ar[2]);
  v15 = v1;
  if ( v2 )
  {
    v3 = v2;
    while ( fgets(s, 512, v3) )
    {
      v28 = 0;
      v29[0] = 0;
      v18 = 0LL;
      v19 = 0LL;
      v17 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0;
      v16 = 0;
      *(_DWORD *)((char *)v29 + 3) = 0;
      sub_10967C((int)v27, 0x100u);
      sscanf(s, "%llx-%llx %s %llx %s %lu %s", &v18, &v19, &v16, &v22, &v28, (char *)&v24 + 4, v27);
      LODWORD(v20) = v19 - v18;
      std::string::assign((int)&v23, (char *)&v28);
      std::string::assign((int)&v25, v27);
      if ( (unsigned __int8)v16 == 114 )
      {
        LOBYTE(v21) = 1;
        HIDWORD(v20) |= 1u;
      }
      if ( BYTE1(v16) == 119 )
      {
        BYTE1(v21) = 1;
        HIDWORD(v20) |= 2u;
      }
      if ( BYTE2(v16) == 120 )
      {
        BYTE2(v21) = 1;
        HIDWORD(v20) |= 4u;
      }
      BYTE4(v21) = HIBYTE(v16) == 115;
      BYTE3(v21) = HIBYTE(v16) == 112;
      HIBYTE(v21) = memcmp(&v16, "r-x", 3u) == 0;
      BYTE6(v21) = memcmp(&v16, "rw-", 3u) == 0;
      v4 = memcmp(&v16, "r--", 3u);
      v7 = *(_QWORD *)(v1 + 1);
      BYTE5(v21) = v4 == 0;
      if ( (_DWORD)v7 == HIDWORD(v7) )
      {
        sub_B07C0(v1, &v18);
      }
      else
      {
        v8 = v19;
        v9 = v20;
        v10 = v21;
        v11 = v22;
        *(_QWORD *)v7 = v18;
        *(_QWORD *)(v7 + 8) = v8;
        *(_QWORD *)(v7 + 16) = v9;
        *(_QWORD *)(v7 + 24) = v10;
        *(_QWORD *)(v7 + 32) = v11;
        std::string::basic_string(v7 + 40, &v23, v5, v6);
        *(_DWORD *)(v7 + 52) = HIDWORD(v24);
        std::string::basic_string(v7 + 56, &v25, v12, v13);
        v1 = v15;
        v15[1] = v7 + 72;
      }
      if ( (unsigned __int8)v25 << 31 )
        operator delete(v26);
      if ( (unsigned __int8)v23 << 31 )
        operator delete((void *)v24);
    }
    fclose(v3);
    if ( *v1 == v1[1] )
      _android_log_print(6, "KittyMemory", "getAllMaps err couldn't find any map");
  }
  else
  {
    _android_log_print(6, "KittyMemory", "Couldn't open file %s.", "/proc/self/maps");
  }
  return v31;
}


// ======================================================================
