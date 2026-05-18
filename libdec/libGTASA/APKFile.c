
// Address: 0x27d328
// Original: _ZN7APKFile4FindEPKc
// Demangled: APKFile::Find(char const*)
int __fastcall APKFile::Find(APKFile *this, const char *a2)
{
  const char *v3; // r9
  const char *v4; // r4
  bool v5; // zf
  size_t v6; // r0
  size_t v7; // r2
  int v8; // r3
  char *v9; // r3
  int v10; // r6
  int v11; // r11
  int v12; // r5
  int v13; // r4
  int v14; // r0
  bool v15; // zf
  size_t v16; // r0
  size_t v17; // r1
  int v18; // r2
  char *v19; // r2
  int v20; // r6
  int v21; // r0
  char v23[264]; // [sp+0h] [bp-1A8h] BYREF
  char v24[128]; // [sp+108h] [bp-A0h] BYREF

  v3 = v23;
  strcpy(v23, "assets/");
  strcat(v23, a2);
  v4 = v23;
  if ( v23[0] == 46 )
  {
    v4 = v23;
    v5 = v23[1] == 92;
    if ( v23[1] != 92 )
      v5 = v23[1] == 47;
    if ( v5 )
      v4 = &v23[2];
  }
  v6 = strlen(v4);
  v7 = 0;
  do
  {
    v8 = (unsigned __int8)v4[v7];
    if ( v8 == 92 )
      LOBYTE(v8) = 47;
    v24[v7++] = v8;
  }
  while ( v7 <= v6 );
  for ( ; v6; *(v9 - 1) = 0 )
  {
    v9 = &v24[v6];
    if ( v24[v6 - 1] != 32 )
      break;
    --v6;
  }
  v10 = 0;
  v11 = *((_DWORD *)this + 2) - 1;
  v12 = v11;
  while ( v12 >= v10 )
  {
    v13 = v10 + (v12 - v10) / 2;
    v14 = strcasecmp(v24, *(const char **)(*((_DWORD *)this + 3) + 12 * v13 + 8));
    if ( v14 >= 1 )
    {
      v10 = v13 + 1;
    }
    else
    {
      v12 = v13 - 1;
      if ( !v14 )
      {
        if ( v13 != -1 )
          return v13;
        break;
      }
    }
  }
  strcat(v23, ".mp3");
  if ( v23[0] == 46 )
  {
    v3 = v23;
    v15 = v23[1] == 92;
    if ( v23[1] != 92 )
      v15 = v23[1] == 47;
    if ( v15 )
      v3 = &v23[2];
  }
  v16 = strlen(v3);
  v17 = 0;
  do
  {
    v18 = (unsigned __int8)v3[v17];
    if ( v18 == 92 )
      LOBYTE(v18) = 47;
    v24[v17++] = v18;
  }
  while ( v17 <= v16 );
  for ( ; v16; *(v19 - 1) = 0 )
  {
    v19 = &v24[v16];
    if ( v24[v16 - 1] != 32 )
      break;
    --v16;
  }
  v20 = 0;
  while ( v11 >= v20 )
  {
    v13 = v20 + (v11 - v20) / 2;
    v21 = strcasecmp(v24, *(const char **)(*((_DWORD *)this + 3) + 12 * v13 + 8));
    if ( v21 >= 1 )
    {
      v20 = v13 + 1;
    }
    else
    {
      v11 = v13 - 1;
      if ( !v21 )
        return v13;
    }
  }
  return -1;
}


// ============================================================
