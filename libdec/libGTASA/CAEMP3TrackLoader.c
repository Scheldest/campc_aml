
// Address: 0x18abb4
// Original: j__ZN17CAEMP3TrackLoader19LoadStreamPackTableEv
// Demangled: CAEMP3TrackLoader::LoadStreamPackTable(void)
// attributes: thunk
int __fastcall CAEMP3TrackLoader::LoadStreamPackTable(CAEMP3TrackLoader *this)
{
  return _ZN17CAEMP3TrackLoader19LoadStreamPackTableEv(this);
}


// ============================================================

// Address: 0x18d590
// Original: j__ZN17CAEMP3TrackLoader10InitialiseEv
// Demangled: CAEMP3TrackLoader::Initialise(void)
// attributes: thunk
int __fastcall CAEMP3TrackLoader::Initialise(CAEMP3TrackLoader *this)
{
  return _ZN17CAEMP3TrackLoader10InitialiseEv(this);
}


// ============================================================

// Address: 0x18f000
// Original: j__ZN17CAEMP3TrackLoader13GetDataStreamEj
// Demangled: CAEMP3TrackLoader::GetDataStream(uint)
// attributes: thunk
int __fastcall CAEMP3TrackLoader::GetDataStream(CAEMP3TrackLoader *this, unsigned int a2)
{
  return _ZN17CAEMP3TrackLoader13GetDataStreamEj(this, a2);
}


// ============================================================

// Address: 0x190214
// Original: j__ZN17CAEMP3TrackLoaderC2Ev
// Demangled: CAEMP3TrackLoader::CAEMP3TrackLoader(void)
// attributes: thunk
void __fastcall CAEMP3TrackLoader::CAEMP3TrackLoader(CAEMP3TrackLoader *this)
{
  _ZN17CAEMP3TrackLoaderC2Ev(this);
}


// ============================================================

// Address: 0x19f304
// Original: j__ZN17CAEMP3TrackLoaderD2Ev
// Demangled: CAEMP3TrackLoader::~CAEMP3TrackLoader()
// attributes: thunk
void __fastcall CAEMP3TrackLoader::~CAEMP3TrackLoader(CAEMP3TrackLoader *this)
{
  _ZN17CAEMP3TrackLoaderD2Ev(this);
}


// ============================================================

// Address: 0x27f0be
// Original: _ZN17CAEMP3TrackLoaderC2Ev
// Demangled: CAEMP3TrackLoader::CAEMP3TrackLoader(void)
void __fastcall CAEMP3TrackLoader::CAEMP3TrackLoader(CAEMP3TrackLoader *this)
{
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
}


// ============================================================

// Address: 0x27f0ca
// Original: _ZN17CAEMP3TrackLoaderD2Ev
// Demangled: CAEMP3TrackLoader::~CAEMP3TrackLoader()
void __fastcall CAEMP3TrackLoader::~CAEMP3TrackLoader(CAEMP3TrackLoader *this, void *a2)
{
  void *v3; // r1
  unsigned int v4; // r1
  void *v5; // r0

  if ( *(_BYTE *)this )
  {
    CMemoryMgr::Free(*((void **)this + 3), a2);
    CMemoryMgr::Free(*((void **)this + 4), v3);
    CFileMgr::CloseFile(*((CFileMgr **)this + 5), v4);
    *((_DWORD *)this + 5) = 0;
  }
  v5 = (void *)*((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = 0;
  if ( v5 )
  {
    free(v5);
    *((_DWORD *)this + 8) = 0;
  }
  *((_DWORD *)this + 6) = 0;
}


// ============================================================

// Address: 0x27f100
// Original: _ZN17CAEMP3TrackLoader10InitialiseEv
// Demangled: CAEMP3TrackLoader::Initialise(void)
int __fastcall CAEMP3TrackLoader::Initialise(CAEMP3TrackLoader *this)
{
  int StreamPackTable; // r1
  int result; // r0
  size_t v4; // r5
  unsigned int v5; // r1
  void *v6; // r0
  const char *v7; // r2
  int v8; // r0
  AndroidFile *v9; // [sp+4h] [bp-Ch] BYREF

  StreamPackTable = CAEMP3TrackLoader::LoadStreamPackTable(this);
  result = 0;
  if ( StreamPackTable == 1 )
  {
    v9 = 0;
    if ( OS_FileOpen(0, &v9, "AUDIO\\CONFIG\\TRAKLKUP.DAT") )
      return 0;
    v4 = OS_FileSize(v9);
    v6 = CMemoryMgr::Malloc(v4, v5);
    *((_DWORD *)this + 3) = v6;
    OS_FileRead(v9, v6, v4);
    OS_FileClose(v9);
    *((_DWORD *)this + 1) = v4 / 0xC;
    v8 = CFileMgr::OpenFile((CFileMgr *)"AUDIO/CONFIG/TRKHEAD.DAT", "rb", v7);
    *((_DWORD *)this + 5) = v8;
    if ( !v8 )
    {
      return 0;
    }
    else
    {
      result = 1;
      *(_BYTE *)this = 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x27f194
// Original: _ZN17CAEMP3TrackLoader19LoadStreamPackTableEv
// Demangled: CAEMP3TrackLoader::LoadStreamPackTable(void)
int __fastcall CAEMP3TrackLoader::LoadStreamPackTable(CAEMP3TrackLoader *this)
{
  int v2; // r5
  size_t v3; // r5
  unsigned int v4; // r1
  void *v5; // r0
  size_t v6; // r1
  int v7; // r6
  size_t v8; // r0
  size_t v9; // r9
  unsigned int v10; // r10
  char *v11; // r0
  void *v12; // r8
  char *v13; // r5
  __int64 v14; // r0
  size_t v15; // r6
  void *v16; // r0
  void *v17; // r5
  void *v18; // r8
  AndroidFile *v20; // [sp+4h] [bp-1Ch] BYREF

  v2 = 0;
  v20 = 0;
  if ( !OS_FileOpen(0, &v20, "AUDIO\\CONFIG\\STRMPAKS.DAT") )
  {
    v3 = OS_FileSize(v20);
    v5 = CMemoryMgr::Malloc(v3, v4);
    *((_DWORD *)this + 4) = v5;
    OS_FileRead(v20, v5, v3);
    OS_FileClose(v20);
    v7 = *((_DWORD *)this + 7);
    v6 = *((_DWORD *)this + 6);
    v8 = v7 + (v3 >> 4);
    v9 = v3 >> 4;
    *((_DWORD *)this + 2) = v3 >> 4;
    if ( v6 >= v8 )
    {
      v13 = (char *)*((_DWORD *)this + 8);
    }
    else
    {
      v10 = 4 * v8 / 3 + 3;
      v11 = (char *)malloc(4 * v10);
      v12 = (void *)*((_DWORD *)this + 8);
      v13 = v11;
      if ( v12 )
      {
        memcpy_0(v11, *((const void **)this + 8), 4 * v7);
        free(v12);
        v7 = *((_DWORD *)this + 7);
      }
      *((_DWORD *)this + 8) = v13;
      *((_DWORD *)this + 6) = v10;
    }
    memset(&v13[4 * v7], 0, 4 * v9);
    v14 = *((_QWORD *)this + 3);
    v15 = HIDWORD(v14) + v9;
    *((_DWORD *)this + 7) = HIDWORD(v14) + v9;
    if ( (_DWORD)v14 != HIDWORD(v14) + v9 )
    {
      v16 = malloc(4 * v15);
      v17 = (void *)*((_DWORD *)this + 8);
      v18 = v16;
      if ( v17 )
      {
        memcpy_0(v16, *((const void **)this + 8), 4 * v15);
        free(v17);
      }
      *((_DWORD *)this + 8) = v18;
      *((_DWORD *)this + 6) = v15;
    }
    return 1;
  }
  return v2;
}


// ============================================================

// Address: 0x27f294
// Original: _ZN17CAEMP3TrackLoader20LoadTrackLookupTableEv
// Demangled: CAEMP3TrackLoader::LoadTrackLookupTable(void)
int __fastcall CAEMP3TrackLoader::LoadTrackLookupTable(CAEMP3TrackLoader *this)
{
  int v2; // r5
  size_t v3; // r5
  unsigned int v4; // r1
  void *v5; // r0
  __int64 v6; // r0
  AndroidFile *v8; // [sp+4h] [bp-Ch] BYREF

  v2 = 0;
  v8 = 0;
  if ( !OS_FileOpen(0, &v8, "AUDIO\\CONFIG\\TRAKLKUP.DAT") )
  {
    v3 = OS_FileSize(v8);
    v5 = CMemoryMgr::Malloc(v3, v4);
    *((_DWORD *)this + 3) = v5;
    OS_FileRead(v8, v5, v3);
    OS_FileClose(v8);
    v6 = 2863311531LL * v3;
    v2 = 1;
    *((_DWORD *)this + 1) = HIDWORD(v6) >> 3;
  }
  return v2;
}


// ============================================================

// Address: 0x27f2ec
// Original: _ZN17CAEMP3TrackLoader13GetDataStreamEj
// Demangled: CAEMP3TrackLoader::GetDataStream(uint)
CAEDataStream *__fastcall CAEMP3TrackLoader::GetDataStream(CAEMP3TrackLoader *this, unsigned int a2)
{
  __int64 v4; // kr00_8
  CAEDataStream *v5; // r5
  unsigned int v6; // r0
  int v7; // r4
  unsigned __int8 *v8; // r10
  size_t v9; // r0
  char *v10; // r11
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r6
  _DWORD *v15; // r4
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r4
  int v21; // r6
  const char *v22; // r1
  _DWORD *v23; // r10
  int v24; // r3
  unsigned int v25; // r2
  _DWORD *v26; // r3
  int v27; // r1
  __int64 v28; // kr08_8
  _QWORD *v29; // r6
  int v30; // r6
  void *v31; // r0
  int v33; // r2
  unsigned int v34; // r12
  int v35; // r1
  _QWORD *v36; // r6
  unsigned int v37; // r3
  _QWORD *v38; // r4
  _QWORD *v39; // r6
  _QWORD *v40; // r6
  int v41; // [sp+Ch] [bp-1FACh]
  _QWORD v42[1000]; // [sp+10h] [bp-1FA8h] BYREF
  _BYTE v43[64]; // [sp+1F54h] [bp-64h] BYREF

  if ( *((_DWORD *)this + 1) <= a2 )
    return 0;
  v4 = *((_QWORD *)this + 1);
  v5 = 0;
  v6 = *(unsigned __int8 *)(HIDWORD(v4) + 12 * a2);
  if ( (unsigned int)v4 >= v6 )
  {
    v7 = *((_DWORD *)this + 4);
    v8 = (unsigned __int8 *)(HIDWORD(v4) + 12 * a2);
    v9 = strlen((const char *)(v7 + 16 * v6));
    v10 = (char *)operator new[](v9 + 25);
    strcpy(v10, "AUDIO\\STREAMS\\");
    strcat(v10, (const char *)(v7 + 16 * *v8));
    strcat(v10, ".osw");
    v11 = *v8;
    v12 = *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v11);
    if ( !v12 )
    {
      *(_DWORD *)(*((_DWORD *)this + 8) + 4 * *v8) = ZIP_FileCreate(v10);
      v11 = *v8;
      v12 = *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v11);
    }
    v41 = v12;
    v13 = *((_DWORD *)this + 1);
    if ( v13 )
    {
      v14 = 0;
      v15 = (_DWORD *)(*((_DWORD *)this + 3) + 4);
      v16 = 0;
      do
      {
        if ( *((unsigned __int8 *)v15 - 4) == v11 && *v15 <= *((_DWORD *)v8 + 1) )
          ++v16;
        ++v14;
        v15 += 3;
      }
      while ( v14 < v13 );
    }
    else
    {
      v16 = 0;
    }
    sub_5E6B74(v43, 64, "Track_%03d.mp3", v16);
    v17 = (**(int (__fastcall ***)(int, _BYTE *))v41)(v41, v43);
    if ( v17 != -1 )
    {
      v18 = *(_DWORD *)(v41 + 12);
      v19 = 3 * v17;
      v20 = *(_DWORD *)(v18 + 4 * v19);
      v21 = *(_DWORD *)(v18 + 4 * v19 + 4);
      v5 = (CAEDataStream *)operator new(0x28u);
      CAEDataStream::CAEDataStream(v5, a2, v10, v20, v21, 0);
      CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v22);
      if ( CAEDataStream::Initialise(v5) )
      {
        v23 = (_DWORD *)operator new(0x1F84u);
        CFileMgr::Seek(*((CFileMgr **)this + 5), 8068 * a2, 0, v24);
        OS_FileRead(*((AndroidFile **)this + 5), v23, 0x1F84u);
        if ( !v23[1] )
        {
LABEL_35:
          *(_DWORD *)v5 = v23;
          CAEDataStream::Seek(v5, 0, 0);
          return v5;
        }
        v25 = 0;
        v26 = v23;
        v27 = 0;
        while ( v26[1] != 33 )
        {
          if ( !(v25 << 31) )
          {
            v28 = *(_QWORD *)v26;
            LODWORD(v42[v27]) = *v26;
            v29 = &v42[v27++];
            *((_DWORD *)v29 + 1) = HIDWORD(v28);
          }
          ++v25;
          v26 += 2;
          if ( v25 >= 0x3E8 )
          {
            v30 = 0;
            goto LABEL_26;
          }
        }
        v30 = v27 + 1;
        v42[v27] = *(_QWORD *)v26;
        if ( (unsigned int)(v27 + 1) >= 0x3E8 )
          goto LABEL_34;
LABEL_26:
        v33 = 1000 - v30;
        if ( (unsigned int)(1000 - v30) >= 4 && (v34 = v33 & 0xFFFFFFFC, (v33 & 0xFFFFFFFC) != 0) )
        {
          v35 = v30 + v34;
          v36 = &v42[v30];
          v37 = v33 & 0xFFFFFFFC;
          do
          {
            v38 = v36 + 4;
            *v36 = 0xFFFFFFFFLL;
            v36[1] = 0xFFFFFFFFLL;
            v39 = v36 + 2;
            v37 -= 4;
            *v39 = 0xFFFFFFFFLL;
            v39[1] = 0xFFFFFFFFLL;
            v36 = v38;
          }
          while ( v37 );
          if ( v33 == v34 )
            goto LABEL_34;
        }
        else
        {
          v35 = v30;
        }
        do
        {
          LODWORD(v42[v35]) = -1;
          v40 = &v42[v35++];
          *((_DWORD *)v40 + 1) = 0;
        }
        while ( v35 != 1000 );
LABEL_34:
        memcpy_0(v23, v42, 0x1F40u);
        goto LABEL_35;
      }
      CAEDataStream::~CAEDataStream(v5);
      operator delete(v31);
    }
    return 0;
  }
  return v5;
}


// ============================================================
