
// Address: 0x18c1a0
// Original: j__ZN8LoadTask4LoadEv
// Demangled: LoadTask::Load(void)
// attributes: thunk
void __fastcall LoadTask::Load(Load *this)
{
  _ZN8LoadTask4LoadEv(this);
}


// ============================================================

// Address: 0x192bdc
// Original: j__ZN8LoadTask12TryLoadSoundEiR9SoundData
// Demangled: LoadTask::TryLoadSound(int,SoundData &)
// attributes: thunk
int LoadTask::TryLoadSound()
{
  return _ZN8LoadTask12TryLoadSoundEiR9SoundData();
}


// ============================================================

// Address: 0x27e708
// Original: _ZN8LoadTask4LoadEv
// Demangled: LoadTask::Load(void)
void __fastcall LoadTask::Load(Load *this)
{
  int v2; // r5
  unsigned int v3; // r10
  char *v4; // r0
  void *v5; // r9
  char *v6; // r6
  int v7; // r5
  char *v8; // r9
  int v9; // r11
  char *v10; // r6
  unsigned int v11; // r10
  char *v12; // r0
  void *v13; // r9
  char *v14; // r8
  char *v15; // r0
  char *v16; // r0
  __int64 v17; // [sp+0h] [bp-38h]
  _BYTE v18[12]; // [sp+8h] [bp-30h]
  __int64 v19; // [sp+14h] [bp-24h]

  if ( *((_DWORD *)this + 5) == -1 )
  {
    v7 = 0;
    v8 = &killLoaderThread;
    do
    {
      if ( LoadTask::TryLoadSound() != 1 )
        break;
      v9 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)this >= (unsigned int)(v9 + 1) )
      {
        v14 = (char *)*((_DWORD *)this + 2);
      }
      else
      {
        v10 = v8;
        v11 = 4 * (v9 + 1) / 3u + 3;
        v12 = (char *)malloc(28 * v11);
        v13 = (void *)*((_DWORD *)this + 2);
        v14 = v12;
        if ( v13 )
        {
          memcpy_0(v12, *((const void **)this + 2), 28 * v9);
          free(v13);
          v9 = *((_DWORD *)this + 1);
        }
        v8 = v10;
        *((_DWORD *)this + 2) = v14;
        *(_DWORD *)this = v11;
      }
      ++v7;
      v15 = &v14[28 * v9];
      *(_QWORD *)v15 = v17;
      *((_QWORD *)v15 + 1) = *(_QWORD *)v18;
      v15 += 12;
      *(_QWORD *)v15 = *(_QWORD *)&v18[4];
      *((_QWORD *)v15 + 1) = v19;
      ++*((_DWORD *)this + 1);
    }
    while ( !*v8 );
  }
  else
  {
    LoadTask::TryLoadSound();
    v2 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)this >= (unsigned int)(v2 + 1) )
    {
      v6 = (char *)*((_DWORD *)this + 2);
    }
    else
    {
      v3 = 4 * (v2 + 1) / 3u + 3;
      v4 = (char *)malloc(28 * v3);
      v5 = (void *)*((_DWORD *)this + 2);
      v6 = v4;
      if ( v5 )
      {
        memcpy_0(v4, *((const void **)this + 2), 28 * v2);
        free(v5);
        v2 = *((_DWORD *)this + 1);
      }
      *((_DWORD *)this + 2) = v6;
      *(_DWORD *)this = v3;
    }
    v16 = &v6[28 * v2];
    *(_QWORD *)v16 = v17;
    *((_QWORD *)v16 + 1) = *(_QWORD *)v18;
    v16 += 12;
    *(_QWORD *)v16 = *(_QWORD *)&v18[4];
    *((_QWORD *)v16 + 1) = v19;
    ++*((_DWORD *)this + 1);
  }
}


// ============================================================

// Address: 0x27e854
// Original: _ZN8LoadTask12TryLoadSoundEiR9SoundData
// Demangled: LoadTask::TryLoadSound(int,SoundData &)
bool __fastcall LoadTask::TryLoadSound(int a1, int a2, _DWORD *a3)
{
  unsigned int *v4; // r9
  unsigned int *v5; // r6
  int v6; // r8
  int v7; // r0
  int v8; // r4
  int v9; // r11
  int v10; // r10
  int v11; // r4
  int v12; // r0
  ZIPFile *v13; // r10
  int v14; // r0
  _DWORD *v15; // r6
  unsigned __int8 *v16; // r8
  _DWORD *v17; // r0
  int v18; // r2
  _DWORD *v19; // r4
  int v20; // r3
  unsigned int *v21; // r10
  int v22; // r0
  _DWORD *v23; // r8
  unsigned int v24; // r1
  unsigned int v25; // r6
  int v26; // r8
  unsigned int v27; // r5
  __int16 *v28; // r4
  __int64 v29; // kr00_8
  unsigned int v30; // r6
  OALBuffer *v31; // r0
  __int16 *v32; // r3
  unsigned int v33; // r2
  int v34; // r0
  int v35; // r0
  int v36; // t1
  __int16 v37; // t1
  int v38; // r2
  __int16 *v39; // r0
  __int16 *v40; // r0
  __int16 v41; // t1
  OALBuffer *v42; // r0
  unsigned int *v44; // [sp+0h] [bp-148h]
  unsigned int *v45; // [sp+8h] [bp-140h]
  void *v46; // [sp+Ch] [bp-13Ch]
  __int16 *p; // [sp+10h] [bp-138h]
  unsigned int *v49; // [sp+18h] [bp-130h]
  unsigned int *v50; // [sp+1Ch] [bp-12Ch]
  unsigned int v52; // [sp+24h] [bp-124h] BYREF
  _BYTE v53[256]; // [sp+28h] [bp-120h] BYREF

  *a3 = 0;
  v4 = a3 + 3;
  a3[3] = 0;
  a3[1] = 0;
  v5 = a3 + 1;
  a3[2] = 1;
  if ( !*(_DWORD *)(a1 + 12) )
    return *(_DWORD *)(dword_6DFD20 + 8 * *(_DWORD *)(a1 + 16)) > a2;
  v6 = -690;
  v7 = *(_DWORD *)(a1 + 16);
  v8 = -690;
  v50 = a3 + 2;
  if ( v7 > 689 )
    goto LABEL_16;
  if ( v7 > 637 )
  {
    v8 = -638;
LABEL_16:
    v7 += v8;
    goto LABEL_17;
  }
  if ( v7 > 428 )
  {
    v8 = -429;
    goto LABEL_16;
  }
  if ( v7 > 410 )
  {
    v8 = -411;
    goto LABEL_16;
  }
  if ( v7 > 364 )
  {
    v8 = -365;
    goto LABEL_16;
  }
  if ( v7 > 146 )
  {
    v8 = -147;
    goto LABEL_16;
  }
  if ( v7 > 143 )
  {
    v8 = -144;
    goto LABEL_16;
  }
  if ( v7 > 6 )
    v7 -= 7;
LABEL_17:
  v10 = a2 + 1;
  sub_5E6B74(v53, 256, "Bank_%03d/sound_%03d.mp3", v7 + 1, a2 + 1);
  v11 = (***(int (__fastcall ****)(_DWORD, _BYTE *))(a1 + 12))(*(_DWORD *)(a1 + 12), v53);
  v49 = v5;
  if ( v11 != -1 )
  {
    v9 = 1;
    goto LABEL_37;
  }
  v12 = *(_DWORD *)(a1 + 16);
  if ( v12 > 689 )
    goto LABEL_35;
  if ( v12 > 637 )
  {
    v6 = -638;
LABEL_35:
    v12 += v6;
    goto LABEL_36;
  }
  if ( v12 > 428 )
  {
    v6 = -429;
    goto LABEL_35;
  }
  if ( v12 > 410 )
  {
    v6 = -411;
    goto LABEL_35;
  }
  if ( v12 > 364 )
  {
    v6 = -365;
    goto LABEL_35;
  }
  if ( v12 > 146 )
  {
    v6 = -147;
    goto LABEL_35;
  }
  if ( v12 > 143 )
  {
    v6 = -144;
    goto LABEL_35;
  }
  if ( v12 > 6 )
    v12 -= 7;
LABEL_36:
  sub_5E6B74(v53, 256, "Bank_%03d/sound_%03d.wav", v12 + 1, v10);
  v11 = (***(int (__fastcall ****)(_DWORD, _BYTE *))(a1 + 12))(*(_DWORD *)(a1 + 12), v53);
  v9 = 0;
  if ( v11 != -1 )
  {
LABEL_37:
    v13 = *(ZIPFile **)(a1 + 12);
    v14 = LoadTask::lastZIP;
    if ( (ZIPFile *)LoadTask::lastZIP == v13 )
    {
      v15 = a3;
    }
    else
    {
      v15 = a3;
      if ( LoadTask::lastHandle )
      {
        OS_FileClose((AndroidFile *)LoadTask::lastHandle);
        v13 = *(ZIPFile **)(a1 + 12);
      }
      OS_FileOpen(0, &LoadTask::lastHandle, (char *)v13 + 16);
      v13 = *(ZIPFile **)(a1 + 12);
      LoadTask::lastZIP = (int)v13;
      v14 = (int)v13;
    }
    v16 = *(unsigned __int8 **)(*(_DWORD *)(v14 + 12) + 12 * v11 + 4);
    if ( !v16 )
      return 1;
    LoadTask::lastZIP = (int)v13;
    v17 = malloc((size_t)v16);
    v18 = v11;
    v19 = v17;
    ZIPFile::ReadExisting(v13, (AndroidFile *)LoadTask::lastHandle, v18, v17, (unsigned int)v16);
    v52 = 0;
    v46 = v19;
    if ( v9 == 1 )
    {
      v21 = v49;
      v22 = CAEMP3Decoder::DecodeEntireFile((CAEMP3Decoder *)v19, v16, (unsigned int)&v52, v50, v49, v4, v45);
    }
    else
    {
      v23 = v15;
      *v50 = 1;
      v21 = v49;
      v24 = v19[6];
      *v49 = v24;
      v25 = v19[10];
      *v4 = 500 * v25 / v24;
      v22 = (int)(v19 + 11);
      v52 = v25;
      v15 = v23;
    }
    p = (__int16 *)v22;
    CFileMgr::Seek(
      (CFileMgr *)soundInfoFile,
      *(_DWORD *)(dword_6DFD20 + 8 * *(_DWORD *)(a1 + 16) + 4) + 12 * a2,
      0,
      v20);
    OS_FileRead((AndroidFile *)soundInfoFile, v15 + 4, 0xCu);
    v26 = v15[5];
    v27 = v52;
    if ( v9 == 1 )
    {
      if ( v26 <= -1 && *v4 >> 3 > 0x7C )
      {
        v28 = p;
        goto LABEL_65;
      }
      v35 = *p;
      v28 = p;
      if ( v35 >= -2047 )
      {
        do
        {
          if ( v27 <= 0x400 )
            break;
          if ( (__int16)v35 >= 2048 )
            break;
          v36 = v28[1];
          ++v28;
          LOWORD(v35) = v36;
          v27 -= 2;
        }
        while ( v36 > -2048 );
      }
      if ( v28[1] * (__int16)v35 >= 1 )
      {
        do
        {
          v37 = *--v28;
          v27 += 2;
          v38 = (__int16)v35 * v37;
          LOWORD(v35) = v37;
        }
        while ( v38 > 0 );
      }
      if ( v27 > 0x400 )
      {
        v39 = &v28[v27 >> 1];
        if ( (unsigned __int16)(*(v39 - 1) + 2047) <= 0xFFEu )
        {
          v40 = v39 - 2;
          do
          {
            v27 -= 2;
            if ( v27 <= 0x400 )
              break;
            v41 = *v40--;
          }
          while ( (unsigned __int16)(v41 + 2047) < 0xFFFu );
        }
      }
      *v4 = 500 * v27 / *v21;
      if ( v26 < 1 )
        goto LABEL_65;
    }
    else
    {
      v28 = p;
      if ( v26 < 1 )
      {
LABEL_65:
        v42 = (OALBuffer *)operator new(0x14u);
        OALBuffer::OALBuffer(v42, v28, v27, *v21, *v50);
        goto LABEL_66;
      }
    }
    v29 = *(_QWORD *)(v15 + 1);
    v30 = HIDWORD(v29) * ((int)v29 * v26 / (unsigned int)*((unsigned __int16 *)v15 + 12));
    v31 = (OALBuffer *)operator new(0x14u);
    v32 = &v28[v30];
    v44 = (unsigned int *)(v27 - 2 * v30);
    v33 = 2 * v30;
    v15 = a3;
    OALBuffer::OALBuffer(v31, v28, v33, v32, (unsigned int)v44, v29, HIDWORD(v29));
LABEL_66:
    *v15 = v34;
    if ( v9 == 1 )
      free(p);
    free(v46);
    return 1;
  }
  return v9;
}


// ============================================================
