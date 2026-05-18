
// Address: 0x18e384
// Original: j__ZN15TextureDatabase9LoadEntryEPcb
// Demangled: TextureDatabase::LoadEntry(char *,bool)
// attributes: thunk
int __fastcall TextureDatabase::LoadEntry(TextureDatabase *this, char *s, bool a3)
{
  return _ZN15TextureDatabase9LoadEntryEPcb(this, s, a3);
}


// ============================================================

// Address: 0x1910fc
// Original: j__ZN15TextureDatabase10LoadThumbsE21TextureDatabaseFormatb
// Demangled: TextureDatabase::LoadThumbs(TextureDatabaseFormat,bool)
// attributes: thunk
int TextureDatabase::LoadThumbs()
{
  return _ZN15TextureDatabase10LoadThumbsE21TextureDatabaseFormatb();
}


// ============================================================

// Address: 0x192360
// Original: j__ZN15TextureDatabase12LoadDataFileEPKcR8TDBArrayI23TextureListingContainerE
// Demangled: TextureDatabase::LoadDataFile(char const*,TDBArray<TextureListingContainer> &)
// attributes: thunk
int TextureDatabase::LoadDataFile()
{
  return _ZN15TextureDatabase12LoadDataFileEPKcR8TDBArrayI23TextureListingContainerE();
}


// ============================================================

// Address: 0x198fbc
// Original: j__ZN15TextureDatabase15LoadDataOffsetsE21TextureDatabaseFormatR8TDBArrayIjERPvb
// Demangled: TextureDatabase::LoadDataOffsets(TextureDatabaseFormat,TDBArray<uint> &,void *&,bool)
// attributes: thunk
int __fastcall TextureDatabase::LoadDataOffsets(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN15TextureDatabase15LoadDataOffsetsE21TextureDatabaseFormatR8TDBArrayIjERPvb(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19df74
// Original: j__ZN15TextureDatabase14GetPNGFilenameEPcPKc
// Demangled: TextureDatabase::GetPNGFilename(char *,char const*)
// attributes: thunk
int __fastcall TextureDatabase::GetPNGFilename(TextureDatabase *this, char *a2, const char *a3)
{
  return _ZN15TextureDatabase14GetPNGFilenameEPcPKc(this, a2, a3);
}


// ============================================================

// Address: 0x19ef54
// Original: j__ZN15TextureDatabaseD2Ev
// Demangled: TextureDatabase::~TextureDatabase()
// attributes: thunk
void __fastcall TextureDatabase::~TextureDatabase(TextureDatabase *this)
{
  _ZN15TextureDatabaseD2Ev(this);
}


// ============================================================

// Address: 0x1a03cc
// Original: j__ZN15TextureDatabase11LoadEntriesEbb
// Demangled: TextureDatabase::LoadEntries(bool,bool)
// attributes: thunk
int __fastcall TextureDatabase::LoadEntries(TextureDatabase *this, bool a2, bool a3)
{
  return _ZN15TextureDatabase11LoadEntriesEbb(this, a2, a3);
}


// ============================================================

// Address: 0x1e78fc
// Original: _ZN15TextureDatabaseD2Ev
// Demangled: TextureDatabase::~TextureDatabase()
void __fastcall TextureDatabase::~TextureDatabase(TextureDatabase *this)
{
  int v2; // r1
  int v3; // r4
  unsigned int v4; // r5
  int v5; // r0
  int v6; // r4
  unsigned int v7; // r5
  unsigned int v8; // r4
  void *v9; // r0
  char *v10; // r6
  TextureDatabase *v11; // r10
  int v12; // r4
  unsigned int v13; // r5
  int v14; // r8
  void *v15; // r0
  void *v16; // r0
  void *v17; // r0

  v2 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &off_660934;
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      free(*(void **)(*((_DWORD *)this + 7) + v3));
      v5 = *((_DWORD *)this + 7) + v3;
      if ( (*(_BYTE *)(v5 + 10) & 4) != 0 )
        free(*(void **)(v5 + 19));
      ++v4;
      v3 += 23;
    }
    while ( v4 < *((_DWORD *)this + 6) );
  }
  if ( *((_DWORD *)this + 3) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      free(*(void **)(*((_DWORD *)this + 4) + v6));
      ++v7;
      v6 += 20;
    }
    while ( v7 < *((_DWORD *)this + 3) );
  }
  if ( *((_DWORD *)this + 27) )
  {
    v8 = 0;
    do
      free(*(void **)(*((_DWORD *)this + 28) + 4 * v8++));
    while ( v8 < *((_DWORD *)this + 27) );
  }
  free(*((void **)this + 1));
  v9 = (void *)*((_DWORD *)this + 28);
  *((_DWORD *)this + 27) = 0;
  if ( v9 )
  {
    free(v9);
    *((_DWORD *)this + 28) = 0;
  }
  *((_DWORD *)this + 26) = 0;
  v10 = (char *)this + 104;
  do
  {
    v11 = (TextureDatabase *)(v10 - 12);
    if ( *((_DWORD *)v10 - 2) )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = *((_DWORD *)v10 - 1) + v12;
        if ( *(_BYTE *)(v14 + 16) )
          free(*(void **)(v14 + 8));
        *(_DWORD *)(v14 + 8) = 0;
        v12 += 17;
        *(_DWORD *)(v14 + 12) = 0;
        ++v13;
      }
      while ( v13 < *((_DWORD *)v10 - 2) );
    }
    v15 = (void *)*((_DWORD *)v10 - 1);
    *((_DWORD *)v10 - 2) = 0;
    if ( v15 )
    {
      free(v15);
      *((_DWORD *)v10 - 1) = 0;
    }
    *(_DWORD *)v11 = 0;
    v10 -= 12;
  }
  while ( v11 != (TextureDatabase *)((char *)this + 32) );
  v16 = (void *)*((_DWORD *)this + 7);
  *((_DWORD *)this + 6) = 0;
  if ( v16 )
  {
    free(v16);
    *((_DWORD *)this + 7) = 0;
  }
  v17 = (void *)*((_DWORD *)this + 4);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  if ( v17 )
  {
    free(v17);
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 2) = 0;
}


// ============================================================

// Address: 0x1e7a50
// Original: _ZN15TextureDatabaseD0Ev
// Demangled: TextureDatabase::~TextureDatabase()
void __fastcall TextureDatabase::~TextureDatabase(TextureDatabase *this)
{
  void *v1; // r0

  TextureDatabase::~TextureDatabase(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x1e7a60
// Original: _ZN15TextureDatabase9LoadEntryEPcb
// Demangled: TextureDatabase::LoadEntry(char *,bool)
int __fastcall TextureDatabase::LoadEntry(TextureDatabase *this, char *s, bool a3)
{
  int v4; // r6
  char *v5; // r4
  int v6; // r5
  int v7; // r0
  __int16 v8; // r1
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r1
  char *v12; // r8
  char *v13; // r9
  size_t v14; // r0
  unsigned int i; // r1
  int v16; // t1
  int v17; // r0
  int v18; // r0
  char *v19; // r8
  int v20; // r4
  __int16 v21; // r6
  int v22; // r0
  __int16 v23; // r1
  int *v24; // r4
  int v25; // r8
  unsigned int v26; // r0
  unsigned int v27; // r10
  void *v28; // r0
  void *v29; // r9
  void *v30; // r5
  int v31; // r0
  int v32; // r0
  int v33; // r0
  TextureDatabase *v34; // r3
  char *v35; // r11
  __int16 v36; // lr
  __int16 v37; // r12
  char v38; // r8
  int v39; // r5
  __int16 v40; // r6
  unsigned int v41; // r0
  unsigned int v42; // r10
  void *v43; // r1
  void *v44; // r9
  size_t v45; // r2
  void *v46; // r5
  int v47; // r0
  int result; // r0
  char *v49; // [sp+0h] [bp-60h]
  __int16 v50; // [sp+4h] [bp-5Ch]
  int v51; // [sp+8h] [bp-58h]
  int v52; // [sp+Ch] [bp-54h]
  char v53; // [sp+10h] [bp-50h]
  __int16 v54; // [sp+14h] [bp-4Ch]
  __int16 v55; // [sp+18h] [bp-48h]
  __int16 v57; // [sp+20h] [bp-40h]
  int v58; // [sp+24h] [bp-3Ch]
  int v59; // [sp+28h] [bp-38h]
  int v60; // [sp+2Ch] [bp-34h]
  int v61; // [sp+30h] [bp-30h]
  unsigned int v62; // [sp+34h] [bp-2Ch]
  char *v63; // [sp+38h] [bp-28h]
  unsigned int v64; // [sp+3Ch] [bp-24h]
  __int16 v65; // [sp+40h] [bp-20h]

  v52 = 80;
  v65 = 1;
  v57 = 2;
  v55 = 0;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v62 = 2;
  v53 = 0;
  v54 = 0;
  v50 = 0;
  v49 = 0;
  v64 = 0;
  v60 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v51 = 0;
  do
  {
    if ( *s == 34 )
    {
      v12 = strchr(++s, 34);
      v13 = strchr(v12, 32);
      *v12 = 0;
    }
    else
    {
      v13 = strchr(s, 32);
    }
    if ( v13 )
      *v13 = 0;
    if ( v6 << 31 )
    {
      if ( !strncmp(s, "name=", 5u) )
      {
        v63 = j_strdup(s + 5);
        v6 = 1;
      }
      else if ( !strncmp(s, "onfoot=", 7u) )
      {
        v61 = atoi(s + 7);
        v6 = 1;
      }
      else if ( !strncmp(s, "slow=", 5u) )
      {
        v59 = atoi(s + 5);
        v6 = 1;
      }
      else if ( !strncmp(s, "fast=", 5u) )
      {
        v58 = atoi(s + 5);
        v6 = 1;
      }
      else if ( !strncmp(s, "defaultformat=", 0xEu) )
      {
        v57 = atoi(s + 14);
        v6 = 1;
      }
      else
      {
        if ( !strncmp(s, "defaultstream=", 0xEu) )
          v55 = atoi(s + 14);
        v6 = 1;
      }
    }
    else
    {
      if ( !strchr(s, 61) )
      {
        v5 = j_strdup(s);
        v14 = strlen(s);
        for ( i = 0; v14; i = 33 * i + v16 )
        {
          v16 = (unsigned __int8)*s++;
          --v14;
        }
        v64 = i + (i >> 5);
        goto LABEL_61;
      }
      if ( !strncmp(s, "cat=", 4u) )
      {
        v17 = atoi(s + 4);
        v6 = 0;
        if ( v5 )
          v4 = v17;
        else
          v6 = 1;
        goto LABEL_74;
      }
      if ( !strncmp(s, "format=", 7u) )
      {
        v18 = atoi(s + 7) & 0xF;
        v60 = 1;
        v11 = v62 & 0xFFFFFFF0 | v18;
        if ( v18 == 7 )
          v11 = v62 & 0xFFFFF0F0 | 0x107;
LABEL_60:
        v62 = v11;
        goto LABEL_61;
      }
      if ( !strncmp(s, "mipmode=", 8u) )
      {
        v19 = v5;
        v20 = v4;
        v21 = v65 & 0xFFFE;
        v22 = atoi(s + 8);
        v23 = v65 | 1;
      }
      else if ( !strncmp(s, "hassibling=", 0xBu) )
      {
        v19 = v5;
        v20 = v4;
        v21 = v65 & 0xFFFD;
        v22 = atoi(s + 11);
        v23 = v65 | 2;
      }
      else if ( !strncmp(s, "hasbias=", 8u) )
      {
        v19 = v5;
        v20 = v4;
        v21 = v65 & 0xFFF7;
        v22 = atoi(s + 8);
        v23 = v65 | 8;
      }
      else if ( !strncmp(s, "camnorm=", 8u) )
      {
        v19 = v5;
        v20 = v4;
        v21 = v65 & 0xFFBF;
        v22 = atoi(s + 8);
        v23 = v65 | 0x40;
      }
      else if ( !strncmp(s, "forcez=", 7u) )
      {
        v19 = v5;
        v20 = v4;
        v21 = v65 & 0xFF7F;
        v22 = atoi(s + 7);
        v23 = v65 | 0x80;
      }
      else if ( !strncmp(s, "decalz=", 7u) )
      {
        v19 = v5;
        v20 = v4;
        v21 = v65 & 0xFEFF;
        v22 = atoi(s + 7);
        v23 = v65 | 0x100;
      }
      else
      {
        if ( strncmp(s, "noalphatest=", 0xCu) )
        {
          if ( !strncmp(s, "hasdetail=", 0xAu) )
          {
            v7 = atoi(s + 10);
            if ( !v7 )
            {
              v65 &= ~0x20u;
              goto LABEL_61;
            }
            v8 = v65 | 0x20;
          }
          else
          {
            if ( strncmp(s, "isdetail=", 9u) )
            {
              if ( !strncmp(s, "detailtile=", 0xBu) )
              {
                v9 = atoi(s + 11);
                v10 = v52;
                if ( v9 )
                  v10 = v9;
                v52 = v10;
              }
              else
              {
                if ( !strncmp(s, "alphamode=", 0xAu) )
                {
                  v11 = v62 & 0xFFFFFF0F | (16 * (atoi(s + 10) & 0xF));
                  goto LABEL_60;
                }
                if ( !strncmp(s, "streammode=", 0xBu) )
                {
                  v6 = 0;
                  v62 = v62 & 0xFFFFF0FF | ((atoi(s + 11) & 0xF) << 8);
                  v51 = 1;
                  goto LABEL_74;
                }
                if ( !strncmp(s, "width=", 6u) )
                {
                  v54 = atoi(s + 6);
                }
                else if ( !strncmp(s, "height=", 7u) )
                {
                  v50 = atoi(s + 7);
                }
                else if ( !strncmp(s, "affiliate=", 0xAu) )
                {
                  v65 |= 4u;
                  v49 = j_strdup(s + 10);
                }
              }
LABEL_61:
              v6 = 0;
              goto LABEL_74;
            }
            v7 = atoi(s + 9);
            if ( !v7 )
            {
              v65 &= ~0x10u;
              goto LABEL_61;
            }
            v8 = v65 | 0x10;
          }
          v65 = v8;
          v6 = 0;
          v53 = v7;
          goto LABEL_74;
        }
        v19 = v5;
        v20 = v4;
        v21 = v65 & 0xFDFF;
        v22 = atoi(s + 12);
        v23 = v65 | 0x200;
      }
      v6 = 0;
      if ( v22 )
        v21 = v23;
      v65 = v21;
      v4 = v20;
      v5 = v19;
    }
LABEL_74:
    s = v13 + 1;
  }
  while ( v13 );
  if ( v6 == 1 )
  {
    v24 = (int *)((char *)this + 12);
    v25 = *((_DWORD *)this + 3);
    v26 = *((_DWORD *)this + 2);
    if ( v26 < v25 + 1 )
    {
      v27 = ((unsigned int)(3 * (v25 + 1)) >> 1) + 3;
      if ( v27 != v26 )
      {
        v28 = malloc(20 * v27);
        v29 = (void *)*((_DWORD *)this + 4);
        v30 = v28;
        if ( v29 )
        {
          memmove_0(v28, *((const void **)this + 4), 20 * v25);
          free(v29);
          v25 = *v24;
        }
        *((_DWORD *)this + 4) = v30;
        *((_DWORD *)this + 2) = v27;
      }
    }
    v31 = *((_DWORD *)this + 4);
    *(_DWORD *)(v31 + 20 * v25) = v63;
    v32 = v31 + 20 * v25;
    *(_DWORD *)(v32 + 4) = v61;
    *(_DWORD *)(v32 + 8) = v59;
    *(_DWORD *)(v32 + 12) = v58;
    *(_WORD *)(v32 + 16) = v57;
    *(_WORD *)(v32 + 18) = v55;
  }
  else
  {
    if ( v60 << 31 )
    {
      LOWORD(v33) = v62;
      v34 = this;
    }
    else
    {
      v34 = this;
      v33 = *(_WORD *)(*((_DWORD *)this + 4) + 20 * (unsigned __int8)v4 + 16) & 0xF | (16 * (v62 >> 4));
    }
    v35 = v5;
    v36 = v54;
    v37 = v65;
    v38 = v4;
    if ( !(v51 << 31) )
      LOWORD(v33) = v33 & 0xF0FF | ((*(_WORD *)(*((_DWORD *)v34 + 4) + 20 * (unsigned __int8)v4 + 18) & 0xF) << 8);
    v24 = (int *)((char *)v34 + 24);
    v39 = *((_DWORD *)v34 + 6);
    v40 = v33 & 0xF0FF | 0x100;
    if ( (v65 & 0x10) == 0 )
      v40 = v33;
    v41 = *((_DWORD *)v34 + 5);
    if ( v41 < v39 + 1 )
    {
      v42 = ((unsigned int)(3 * (v39 + 1)) >> 1) + 3;
      if ( v42 == v41 )
      {
        v34 = this;
      }
      else
      {
        v43 = malloc(23 * v42);
        v44 = (void *)*((_DWORD *)this + 7);
        if ( v44 )
        {
          v45 = 23 * v39;
          v46 = v43;
          memmove_0(v43, *((const void **)this + 7), v45);
          free(v44);
          v43 = v46;
          v39 = *v24;
        }
        v36 = v54;
        v34 = this;
        *((_DWORD *)this + 7) = v43;
        *((_DWORD *)this + 5) = v42;
      }
      v37 = v65;
    }
    v47 = *((_DWORD *)v34 + 7) + 23 * v39;
    *(_DWORD *)v47 = v35;
    *(_DWORD *)(v47 + 4) = v64;
    *(_WORD *)(v47 + 8) = v40;
    *(_WORD *)(v47 + 10) = v37;
    *(_BYTE *)(v47 + 12) = v38;
    *(_BYTE *)(v47 + 13) = v53;
    *(_BYTE *)(v47 + 14) = v52;
    *(_WORD *)(v47 + 15) = v36;
    *(_WORD *)(v47 + 17) = v50;
    *(_DWORD *)(v47 + 19) = v49;
  }
  result = *v24 + 1;
  *v24 = result;
  return result;
}


// ============================================================

// Address: 0x1e8164
// Original: _ZN15TextureDatabase11LoadEntriesEbb
// Demangled: TextureDatabase::LoadEntries(bool,bool)
int __fastcall TextureDatabase::LoadEntries(const void **this, char *a2, int a3)
{
  int v5; // r5
  size_t v6; // r5
  char *v7; // r8
  char *v8; // r10
  unsigned int v9; // r6
  size_t v10; // r4
  int v11; // r0
  char *v12; // r10
  unsigned int v13; // r0
  const void *v14; // r5
  unsigned int v15; // r6
  void *v16; // r0
  void *v17; // r8
  const void *v18; // r9
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  unsigned int v21; // r8
  unsigned int i; // r6
  char *v23; // r4
  const char *v24; // r5
  char *v25; // r8
  unsigned int v26; // r4
  char *v27; // r5
  size_t v28; // r0
  char *v29; // r1
  int v30; // t1
  char *v31; // r10
  unsigned int v32; // r0
  const void *v33; // r9
  unsigned int v34; // r8
  unsigned int v35; // r4
  void *v36; // r0
  const void *v37; // r1
  size_t v38; // r2
  void *v39; // r9
  int v40; // r2
  char *dest; // [sp+8h] [bp-330h]
  void *desta; // [sp+8h] [bp-330h]
  AndroidFile *v44; // [sp+14h] [bp-324h] BYREF
  char s[512]; // [sp+18h] [bp-320h] BYREF
  _BYTE v46[256]; // [sp+218h] [bp-120h] BYREF

  if ( a3 )
    sub_5E6B74(v46, 256, "texdb/%s/%s.txt.bak");
  else
    sub_5E6B74(v46, 256, "texdb/%s/%s.txt");
  v5 = 0;
  if ( OS_FileOpen(0, &v44, v46) )
    return v5;
  v6 = OS_FileSize(v44);
  v7 = (char *)malloc(v6);
  if ( OS_FileRead(v44, v7, v6) )
  {
    free(v7);
    return 0;
  }
  OS_FileClose(v44);
  if ( !v6 )
    goto LABEL_20;
  v8 = v7;
  v9 = 0;
  dest = a2;
  do
  {
    ++v8;
    v10 = 1 - v6;
    while ( 1 )
    {
      v11 = (unsigned __int8)*(v8 - 1);
      if ( v11 == 10 )
        break;
      if ( v11 != 13 )
      {
        s[v9++] = v11;
        goto LABEL_17;
      }
LABEL_14:
      ++v10;
      ++v8;
      if ( v10 == 1 )
        goto LABEL_18;
    }
    s[v9] = 0;
    if ( v9 < 2 )
      goto LABEL_14;
    v9 = 0;
    TextureDatabase::LoadEntry((TextureDatabase *)this, s, 0);
LABEL_17:
    v6 = -v10;
  }
  while ( v10 );
LABEL_18:
  a2 = dest;
  if ( v9 >= 2 )
  {
    s[v9] = 0;
    TextureDatabase::LoadEntry((TextureDatabase *)this, s, 0);
  }
LABEL_20:
  free(v7);
  if ( !this[3] )
  {
    v12 = j_strdup("Default");
    v14 = this[3];
    v13 = (unsigned int)this[2];
    if ( v13 < (unsigned int)v14 + 1 )
    {
      v15 = ((unsigned int)(3 * ((_DWORD)v14 + 1)) >> 1) + 3;
      if ( v15 != v13 )
      {
        v16 = malloc(20 * v15);
        v17 = (void *)this[4];
        v18 = v16;
        if ( v17 )
        {
          memmove_0(v16, this[4], 20 * (_DWORD)v14);
          free(v17);
          v14 = this[3];
        }
        this[4] = v18;
        this[2] = (const void *)v15;
      }
    }
    v19 = this[4];
    v19[5 * (_DWORD)v14] = v12;
    v20 = &v19[5 * (_DWORD)v14];
    v20[1] = 5;
    v20[2] = 5;
    v20[3] = 5;
    this[3] = (char *)this[3] + 1;
  }
  if ( a2 == (_BYTE *)&stderr + 1 )
  {
    v21 = (unsigned int)this[6];
    if ( v21 )
    {
      for ( i = 0; i < v21; ++i )
      {
        v23 = (char *)this[7];
        v24 = *(const char **)&v23[23 * i];
        if ( strlen(v24) >= 0x20 )
        {
          v25 = &v23[23 * i];
          v26 = 0;
          v27 = j_strdup(v24);
          v27[31] = 0;
          v28 = strlen(v27);
          if ( v28 )
          {
            v26 = 0;
            v29 = v27;
            do
            {
              v30 = (unsigned __int8)*v29++;
              --v28;
              v26 = 33 * v26 + v30;
            }
            while ( v28 );
          }
          if ( (*((_WORD *)v25 + 5) & 4) != 0 )
            v25 += 19;
          v31 = j_strdup(*(const char **)v25);
          v33 = this[6];
          v32 = (unsigned int)this[5];
          v34 = v26 + (v26 >> 5);
          if ( v32 < (unsigned int)v33 + 1 )
          {
            v35 = ((unsigned int)(3 * ((_DWORD)v33 + 1)) >> 1) + 3;
            if ( v35 != v32 )
            {
              v36 = malloc(23 * v35);
              v37 = this[7];
              if ( v37 )
              {
                desta = v36;
                v38 = 23 * (_DWORD)v33;
                v39 = (void *)this[7];
                memmove_0(v36, v37, v38);
                free(v39);
                v36 = desta;
                v33 = this[6];
              }
              this[7] = v36;
              this[5] = (const void *)v35;
            }
          }
          v40 = (int)this[7] + 23 * (_DWORD)v33;
          *(_DWORD *)v40 = v27;
          *(_DWORD *)(v40 + 4) = v34;
          *(_DWORD *)(v40 + 8) = 0x40000;
          *(_BYTE *)(v40 + 18) = 0;
          *(_WORD *)(v40 + 16) = 0;
          *(_DWORD *)(v40 + 19) = v31;
          *(_DWORD *)(v40 + 12) = 0;
          v21 = (unsigned int)this[6] + 1;
          this[6] = (const void *)v21;
        }
      }
    }
  }
  return 1;
}


// ============================================================

// Address: 0x1e8424
// Original: _ZN15TextureDatabase12LoadDataFileEPKcR8TDBArrayI23TextureListingContainerE
// Demangled: TextureDatabase::LoadDataFile(char const*,TDBArray<TextureListingContainer> &)
int __fastcall TextureDatabase::LoadDataFile(int a1, int a2, int a3)
{
  int v5; // r4
  size_t v6; // r8
  unsigned __int8 *v7; // r10
  unsigned int v8; // r5
  size_t v9; // r6
  int v10; // r5
  unsigned int v11; // r4
  void *v12; // r0
  void *v13; // r6
  void *v14; // r9
  int v15; // r0
  _BYTE *v16; // r0
  int v17; // r1
  unsigned int v18; // r5
  char *v19; // r6
  int v20; // r0
  int TotalSize; // r0
  int *v22; // r5
  _DWORD *v23; // r3
  int v24; // r10
  int v25; // r1
  unsigned int v26; // r2
  _WORD *v27; // r8
  char *v28; // r11
  unsigned int v29; // r1
  int v30; // r0
  unsigned __int8 *v31; // r5
  char *v32; // r4
  __int16 v33; // r9
  int v34; // r10
  char *v35; // r8
  int v36; // r0
  int v37; // r6
  __int64 v38; // kr10_8
  unsigned int v39; // r4
  void *v40; // r0
  void *v41; // r8
  void *v42; // r9
  int v43; // r5
  unsigned int v44; // r6
  void **v45; // r4
  int v46; // r5
  unsigned int v47; // r6
  int v48; // r4
  void *p; // [sp+4h] [bp-5Ch]
  int v51; // [sp+8h] [bp-58h]
  int v52; // [sp+Ch] [bp-54h]
  unsigned int v53; // [sp+10h] [bp-50h]
  size_t v54; // [sp+14h] [bp-4Ch]
  unsigned __int8 *v55; // [sp+18h] [bp-48h]
  char *v56; // [sp+1Ch] [bp-44h]
  int v57; // [sp+20h] [bp-40h]
  unsigned int v58; // [sp+24h] [bp-3Ch]
  AndroidFile *v59; // [sp+2Ch] [bp-34h] BYREF

  v5 = 0;
  if ( OS_FileOpen(0, &v59, a2) )
    return v5;
  v6 = OS_FileSize(v59);
  p = malloc(v6);
  OS_FileRead(v59, p, v6);
  OS_FileClose(v59);
  v52 = a1;
  if ( !*(_DWORD *)(a1 + 24) )
  {
LABEL_49:
    v38 = *(_QWORD *)(a1 + 104);
    v37 = *(_DWORD *)(a1 + 108);
    if ( (unsigned int)v38 < v37 + 1 )
    {
      v39 = ((unsigned int)(3 * (v37 + 1)) >> 1) + 3;
      if ( v39 != (_DWORD)v38 )
      {
        v40 = malloc(4 * v39);
        v41 = v40;
        v42 = *(void **)(v52 + 112);
        if ( v42 )
        {
          memmove_1(v40, *(const void **)(v52 + 112), 4 * v37);
          free(v42);
          v37 = *(_DWORD *)(v52 + 108);
        }
        *(_DWORD *)(v52 + 112) = v41;
        *(_DWORD *)(v52 + 104) = v39;
      }
    }
    v5 = 1;
    *(_DWORD *)(*(_DWORD *)(v52 + 112) + 4 * v37) = p;
    ++*(_DWORD *)(v52 + 108);
    return v5;
  }
  v7 = (unsigned __int8 *)p;
  v8 = 0;
  v51 = a3;
  while ( 1 )
  {
    v58 = v8;
    v10 = *(_DWORD *)(a3 + 4);
    if ( *(_DWORD *)a3 < (unsigned int)(v10 + 1) )
    {
      v11 = ((unsigned int)(3 * (v10 + 1)) >> 1) + 3;
      if ( v11 != *(_DWORD *)a3 )
      {
        v12 = malloc(17 * v11);
        v13 = *(void **)(a3 + 8);
        v14 = v12;
        if ( v13 )
        {
          memmove_0(v12, *(const void **)(a3 + 8), 17 * v10);
          free(v13);
          v10 = *(_DWORD *)(a3 + 4);
        }
        a1 = v52;
        *(_DWORD *)(a3 + 8) = v14;
        *(_DWORD *)a3 = v11;
      }
    }
    v15 = *(_DWORD *)(a3 + 8) + 17 * v10;
    *(_QWORD *)v15 = 0LL;
    *(_QWORD *)(v15 + 8) = 0LL;
    *(_BYTE *)(v15 + 16) = 0;
    v16 = *(_BYTE **)(a3 + 8);
    v17 = *(_DWORD *)(a3 + 4);
    *(_DWORD *)(a3 + 4) = v17 + 1;
    v18 = v58;
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 28) + 23 * v58 + 10) & 4) != 0 )
      goto LABEL_48;
    if ( v6 <= 7 )
      break;
    v19 = &v16[17 * v17];
    v20 = *(_DWORD *)v7;
    *((_DWORD *)v19 + 1) = *((_DWORD *)v7 + 1);
    *(_DWORD *)v19 = v20;
    TotalSize = TextureListing::GetTotalSize((TextureListing *)v19);
    *((_DWORD *)v19 + 3) = TotalSize;
    v22 = (int *)(v19 + 12);
    v53 = *((_DWORD *)v7 + 2) - 4;
    v54 = v6 - 16;
    if ( v6 - 16 < v53 )
    {
      if ( *(_DWORD *)(a3 + 4) )
      {
        v46 = 0;
        v47 = 0;
        do
        {
          v48 = *(_DWORD *)(a3 + 8) + v46;
          if ( *(_BYTE *)(v48 + 16) )
            free(*(void **)(v48 + 8));
          *(_DWORD *)(v48 + 8) = 0;
          v46 += 17;
          *(_DWORD *)(v48 + 12) = 0;
          ++v47;
        }
        while ( v47 < *(_DWORD *)(a3 + 4) );
      }
      v16 = *(_BYTE **)(a3 + 8);
      goto LABEL_67;
    }
    v23 = v7 + 16;
    v55 = v7 + 16;
    v24 = *((_DWORD *)v7 + 3);
    if ( !v24 )
    {
      *((_DWORD *)v19 + 2) = v23;
      goto LABEL_47;
    }
    v25 = 8;
    v27 = v19 + 2;
    v26 = *((unsigned __int16 *)v19 + 1);
    if ( v26 < 0x8C00 )
    {
      if ( v26 - 33776 >= 2 )
      {
        if ( v26 - 33778 >= 2 )
          v25 = 4;
        else
LABEL_25:
          v25 = 16;
      }
    }
    else
    {
      switch ( *((_WORD *)v19 + 1) )
      {
        case 0x8C00:
        case 0x8C02:
          goto LABEL_25;
        case 0x8C01:
        case 0x8C03:
          v25 = 32;
          break;
        default:
          if ( v26 != 36196 )
            v25 = 4;
          break;
      }
    }
    v28 = (char *)malloc(((TotalSize + v25 - 1) & -v25) + 64);
    *((_DWORD *)v19 + 2) = v28;
    v19[16] = 1;
    v9 = 8;
    v29 = (unsigned __int16)*v27;
    v30 = *v22;
    if ( v29 >= 0x8C00 )
    {
      switch ( *v27 )
      {
        case 0x8C00:
        case 0x8C02:
          goto LABEL_36;
        case 0x8C01:
        case 0x8C03:
          v9 = 32;
          if ( v30 >= 1 )
            goto LABEL_38;
          break;
        default:
          if ( v29 != 36196 )
            v9 = 4;
          if ( v30 >= 1 )
            goto LABEL_38;
          break;
      }
      goto LABEL_47;
    }
    if ( v29 - 33776 >= 2 )
    {
      if ( v29 - 33778 >= 2 )
      {
        v9 = 4;
        if ( v30 >= 1 )
          goto LABEL_38;
        goto LABEL_47;
      }
LABEL_36:
      v9 = 16;
    }
    if ( v30 >= 1 )
    {
LABEL_38:
      v31 = v55;
      v32 = &v28[v30];
      v56 = &v28[v30];
      v57 = v24;
      do
      {
        if ( v24 == *v31 )
        {
          v33 = v31[1];
          if ( v31[1] )
          {
            v34 = v31[1];
            v35 = v28;
            do
            {
              memcpy_1(v35, v31 + 2, v9);
              v35 += v9;
              --v34;
            }
            while ( v34 );
            v28 += (__int16)v9 * v33;
            v36 = v9 | 2;
            v32 = v56;
            v24 = v57;
          }
          else
          {
            v36 = v9 | 2;
          }
        }
        else
        {
          memcpy_1(v28, v31, v9);
          v28 += v9;
          v36 = v9;
        }
        v31 += v36;
      }
      while ( v28 < v32 );
    }
LABEL_47:
    v6 = v54 - v53;
    a3 = v51;
    a1 = v52;
    v18 = v58;
    v7 = &v55[v53];
LABEL_48:
    v8 = v18 + 1;
    if ( v8 >= *(_DWORD *)(a1 + 24) )
      goto LABEL_49;
  }
  if ( v17 != -1 )
  {
    v43 = 0;
    v44 = 0;
    do
    {
      v45 = (void **)&v16[v43];
      if ( v16[v43 + 16] )
        free(v45[2]);
      v45[2] = 0;
      v43 += 17;
      v45[3] = 0;
      ++v44;
      v16 = *(_BYTE **)(a3 + 8);
    }
    while ( v44 < *(_DWORD *)(a3 + 4) );
  }
LABEL_67:
  v5 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  if ( v16 )
  {
    free(v16);
    *(_DWORD *)(a3 + 8) = 0;
  }
  *(_DWORD *)a3 = 0;
  free(p);
  return v5;
}


// ============================================================

// Address: 0x1e8778
// Original: _ZN15TextureDatabase10LoadThumbsE21TextureDatabaseFormatb
// Demangled: TextureDatabase::LoadThumbs(TextureDatabaseFormat,bool)
int __fastcall TextureDatabase::LoadThumbs(int a1, int a2)
{
  _BYTE v3[256]; // [sp+4h] [bp-10Ch] BYREF

  switch ( a2 )
  {
    case 0:
      sub_5E6B74(v3, 256, "texdb/%s/%s.unc.tmb");
      break;
    case 1:
      sub_5E6B74(v3, 256, "texdb/%s/%s.dxt.tmb");
      break;
    case 2:
      sub_5E6B74(v3, 256, "texdb/%s/%s.360.tmb");
      break;
    case 3:
      sub_5E6B74(v3, 256, "texdb/%s/%s.ps3.tmb");
      break;
    case 4:
      sub_5E6B74(v3, 256, "texdb/%s/%s.pvr.tmb");
      break;
    case 5:
      sub_5E6B74(v3, 256, "texdb/%s/%s.etc.tmb");
      break;
    default:
      return TextureDatabase::LoadDataFile();
  }
  return TextureDatabase::LoadDataFile();
}


// ============================================================

// Address: 0x1e8888
// Original: _ZN15TextureDatabase14GetPNGFilenameEPcPKc
// Demangled: TextureDatabase::GetPNGFilename(char *,char const*)
int __fastcall TextureDatabase::GetPNGFilename(const char **this, char *a2, const char *a3)
{
  return sub_5E6B74(a2, 256, "modloader/%s/%s.png", this[1], a3);
}


// ============================================================

// Address: 0x1e88b8
// Original: _ZN15TextureDatabase15LoadDataOffsetsE21TextureDatabaseFormatR8TDBArrayIjERPvb
// Demangled: TextureDatabase::LoadDataOffsets(TextureDatabaseFormat,TDBArray<uint> &,void *&,bool)
int __fastcall TextureDatabase::LoadDataOffsets(int a1, int a2, unsigned int *a3, AndroidFile **a4, int a5)
{
  int v9; // r5
  unsigned int v10; // r6
  int v11; // r5
  unsigned int v12; // r4
  void *v13; // r0
  void *v14; // r9
  int v15; // r8
  __int64 v16; // r0
  AndroidFile *v17; // r0
  unsigned int v18; // r8
  int v19; // r11
  off_t v20; // r5
  unsigned int v21; // r0
  unsigned int v22; // r9
  unsigned int v23; // r1
  unsigned int v24; // r4
  void *v25; // r0
  void *v26; // r6
  size_t v27; // r2
  void *v28; // r9
  int v29; // r0
  unsigned int v30; // r4
  void *v31; // r0
  void *v32; // r6
  size_t v33; // r2
  void *v34; // r9
  AndroidFile *v35; // r5
  int v36; // r0
  AndroidFile *v37; // r5
  unsigned int v38; // r6
  int v39; // r4
  void *v40; // r0
  unsigned int v41; // r4
  void *v42; // r0
  void *v43; // r5
  int v44; // r8
  int v46; // [sp+4h] [bp-344h]
  int v47; // [sp+Ch] [bp-33Ch]
  AndroidFile **v48; // [sp+10h] [bp-338h]
  AndroidFile *v49; // [sp+14h] [bp-334h] BYREF
  AndroidFile *v50[2]; // [sp+18h] [bp-330h] BYREF
  unsigned int v51; // [sp+20h] [bp-328h] BYREF
  int ptr; // [sp+24h] [bp-324h] BYREF
  _BYTE v53[256]; // [sp+28h] [bp-320h] BYREF
  _BYTE v54[256]; // [sp+128h] [bp-220h] BYREF
  char v55[256]; // [sp+228h] [bp-120h] BYREF

  v9 = 1;
  switch ( a2 )
  {
    case 0:
      return v9;
    case 1:
      sub_5E6B74(v55, 256, "texdb/%s/%s.dxt");
      goto LABEL_7;
    case 2:
      sub_5E6B74(v55, 256, "texdb/%s/%s.360");
      goto LABEL_7;
    case 3:
      sub_5E6B74(v55, 256, "texdb/%s/%s.ps3");
      goto LABEL_7;
    case 4:
      sub_5E6B74(v55, 256, "texdb/%s/%s.pvr");
      goto LABEL_7;
    case 5:
      sub_5E6B74(v55, 256, "texdb/%s/%s.etc");
      goto LABEL_7;
    default:
LABEL_7:
      v48 = a4;
      sub_5E6B74(v54, 256, "%s.dat", v55);
      sub_5E6B74(v53, 256, "%s.toc", v55);
      v9 = 0;
      if ( OS_FileOpen(0, a4, v54) )
        return v9;
      ptr = OS_FileSize(*a4);
      a3[1] = 0;
      v47 = a1;
      if ( a5 || OS_FileOpen(0, v50, v53) )
        goto LABEL_19;
      OS_FileRead(v50[0], &v51, 4u);
      if ( v51 == ptr )
      {
        v10 = a3[1];
        v11 = *(_DWORD *)(a1 + 24);
        if ( *a3 < v10 + v11 )
        {
          v12 = ((3 * (v10 + v11)) >> 1) + 3;
          if ( v12 != *a3 )
          {
            v13 = malloc(4 * v12);
            v14 = (void *)a3[2];
            v15 = (int)v13;
            if ( v14 )
            {
              memmove_1(v13, (const void *)a3[2], 4 * v10);
              free(v14);
              v10 = a3[1];
            }
            a3[2] = v15;
            *a3 = v12;
          }
          a1 = v47;
        }
        memset((void *)(a3[2] + 4 * v10), 0, 4 * v11);
        v16 = *(_QWORD *)(a3 + 1);
        a3[1] = v16 + v11;
        OS_FileRead(v50[0], (void *)HIDWORD(v16), 4 * *(_DWORD *)(a1 + 24));
        v17 = v50[0];
        goto LABEL_52;
      }
      OS_FileClose(v50[0]);
LABEL_19:
      v46 = a2;
      v51 = 0;
      if ( !*(_DWORD *)(a1 + 24) )
      {
LABEL_41:
        if ( a5 != 1 )
        {
LABEL_53:
          v41 = a3[1];
          if ( v41 != *a3 )
          {
            v42 = malloc(4 * v41);
            v43 = (void *)a3[2];
            v44 = (int)v42;
            if ( v43 )
            {
              memmove_1(v42, (const void *)a3[2], 4 * v41);
              free(v43);
            }
            a3[2] = v44;
            *a3 = v41;
          }
          return 1;
        }
        OS_FileOpen(0, &v49, v53);
        v35 = v49;
        if ( (v46 | 1) == 3 )
        {
          OS_FileWrite(v49, (char *)&ptr + 3, 1);
          OS_FileWrite(v35, (char *)&ptr + 2, 1);
          OS_FileWrite(v35, (char *)&ptr + 1, 1);
          OS_FileWrite(v35, &ptr, 1);
          v36 = *(_DWORD *)(a1 + 24);
          if ( 4 * v36 )
          {
            v37 = v49;
            v38 = a3[2];
            v39 = -4 * v36;
            do
            {
              OS_FileWrite(v37, (const void *)(v38 + 3), 1);
              OS_FileWrite(v37, (const void *)(v38 + 2), 1);
              OS_FileWrite(v37, (const void *)(v38 + 1), 1);
              OS_FileWrite(v37, (const void *)v38, 1);
              v39 += 4;
              v38 += 4;
            }
            while ( v39 );
          }
        }
        else
        {
          OS_FileWrite(v49, &ptr, 4);
          OS_FileWrite(v49, (const void *)a3[2], 4 * *(_DWORD *)(a1 + 24));
        }
        v17 = v49;
LABEL_52:
        OS_FileClose(v17);
        goto LABEL_53;
      }
      v18 = 0;
      v19 = 10;
      v20 = 0;
      break;
  }
  while ( 1 )
  {
    v22 = a3[1];
    v21 = *a3;
    v23 = v22 + 1;
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 28) + v19) & 4) != 0 )
    {
      if ( v21 < v23 )
      {
        v30 = ((3 * v23) >> 1) + 3;
        if ( v30 != v21 )
        {
          v31 = malloc(4 * v30);
          v32 = (void *)a3[2];
          if ( v32 )
          {
            v33 = 4 * v22;
            v34 = v31;
            memmove_1(v31, (const void *)a3[2], v33);
            free(v32);
            v31 = v34;
            v22 = a3[1];
          }
          a4 = v48;
          a3[2] = (unsigned int)v31;
          *a3 = v30;
        }
        a1 = v47;
      }
      *(_DWORD *)(a3[2] + 4 * v22) = -1;
      ++a3[1];
      goto LABEL_40;
    }
    if ( v21 < v23 )
    {
      v24 = ((3 * v23) >> 1) + 3;
      if ( v24 != v21 )
      {
        v25 = malloc(4 * v24);
        v26 = (void *)a3[2];
        if ( v26 )
        {
          v27 = 4 * v22;
          v28 = v25;
          memmove_1(v25, (const void *)a3[2], v27);
          free(v26);
          v25 = v28;
          v22 = a3[1];
        }
        a4 = v48;
        a3[2] = (unsigned int)v25;
        *a3 = v24;
      }
      a1 = v47;
    }
    *(_DWORD *)(a3[2] + 4 * v22) = v20;
    ++a3[1];
    OS_FileSetPosition(*a4, v20);
    if ( OS_FileRead(*a4, v50, 8u) )
      break;
    v29 = OS_FileRead(*a4, &v51, 4u);
    if ( (v46 | 1) == 3 )
      v51 = bswap32(v51);
    if ( v29 )
      break;
    v20 += v51 + 12;
LABEL_40:
    ++v18;
    v19 += 23;
    if ( v18 >= *(_DWORD *)(a1 + 24) )
      goto LABEL_41;
  }
  v40 = (void *)a3[2];
  v9 = 0;
  a3[1] = 0;
  if ( v40 )
  {
    free(v40);
    a3[2] = 0;
  }
  *a3 = 0;
  OS_FileClose(*a4);
  return v9;
}


// ============================================================
