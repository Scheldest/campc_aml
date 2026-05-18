
// Address: 0x18a578
// Original: j__ZN5CText3GetEPKc
// Demangled: CText::Get(char const*)
// attributes: thunk
int __fastcall CText::Get(CText *this, CKeyGen *a2)
{
  return _ZN5CText3GetEPKc(this, a2);
}


// ============================================================

// Address: 0x194f60
// Original: j__ZN5CText26GetNameOfLoadedMissionTextEPc
// Demangled: CText::GetNameOfLoadedMissionText(char *)
// attributes: thunk
int __fastcall CText::GetNameOfLoadedMissionText(CText *this, char *a2)
{
  return _ZN5CText26GetNameOfLoadedMissionTextEPc(this, a2);
}


// ============================================================

// Address: 0x198064
// Original: j__ZN5CText19LoadMissionPackTextEv
// Demangled: CText::LoadMissionPackText(void)
// attributes: thunk
int __fastcall CText::LoadMissionPackText(CText *this)
{
  return _ZN5CText19LoadMissionPackTextEv(this);
}


// ============================================================

// Address: 0x199dc8
// Original: j__ZN5CText6UnloadEh
// Demangled: CText::Unload(uchar)
// attributes: thunk
int __fastcall CText::Unload(CText *this, unsigned __int8 a2)
{
  return _ZN5CText6UnloadEh(this, a2);
}


// ============================================================

// Address: 0x19a910
// Original: j__ZN5CText15LoadMissionTextEPc
// Demangled: CText::LoadMissionText(char *)
// attributes: thunk
int __fastcall CText::LoadMissionText(CText *this, char *a2)
{
  return _ZN5CText15LoadMissionTextEPc(this, a2);
}


// ============================================================

// Address: 0x19fb6c
// Original: j__ZN5CText4LoadEh
// Demangled: CText::Load(uchar)
// attributes: thunk
int __fastcall CText::Load(CText *this, unsigned __int8 a2)
{
  return _ZN5CText4LoadEh(this, a2);
}


// ============================================================

// Address: 0x54d620
// Original: _ZN5CText12GetUpperCaseEt
// Demangled: CText::GetUpperCase(ushort)
int __fastcall CText::GetUpperCase(CText *this, int a2)
{
  _UNKNOWN **v2; // r0

  switch ( *((_BYTE *)this + 32) )
  {
    case 'e':
      if ( (unsigned __int16)(a2 - 97) <= 0x19u )
        return (unsigned __int16)(a2 - 32);
      return (unsigned __int16)a2;
    case 'f':
      if ( (unsigned __int16)(a2 - 97) <= 0x19u )
        return (unsigned __int16)(a2 - 32);
      if ( (a2 & 0xFFFFFF80) != 0x80 )
        return (unsigned __int16)a2;
      v2 = &off_61EA14;
      goto LABEL_11;
    case 'g':
    case 'i':
    case 's':
      if ( (unsigned __int16)(a2 - 97) <= 0x19u )
        return (unsigned __int16)(a2 - 32);
      if ( (a2 & 0xFFFFFF80) == 0x80 )
      {
        v2 = &off_61EB14;
LABEL_11:
        LOWORD(a2) = *((_WORD *)v2 + a2 - 128);
      }
      return (unsigned __int16)a2;
    default:
      return (unsigned __int16)a2;
  }
}


// ============================================================

// Address: 0x54d7ac
// Original: _ZN5CText15ReadChunkHeaderEP11ChunkHeaderjPjh
// Demangled: CText::ReadChunkHeader(ChunkHeader *,uint,uint *,uchar)
int __fastcall CText::ReadChunkHeader(int a1, unsigned int a2, CFileMgr *this, _DWORD *a4)
{
  CFileMgr::ReadBytes(this, a2, byte_8, (int)a4);
  *a4 += 8;
  return 1;
}


// ============================================================

// Address: 0x54d7c4
// Original: _ZN5CText4LoadEh
// Demangled: CText::Load(uchar)
int __fastcall CText::Load(CText *this, int a2)
{
  const char *v3; // r1
  char *v4; // r2
  const char *v5; // r0
  const char *v6; // r0
  __int64 v7; // d16
  const char *v8; // r0
  AndroidFile *v9; // r6
  int v10; // r3
  CText *v11; // r10
  int v12; // r0
  unsigned int v13; // r8
  int v14; // r3
  int v15; // r5
  unsigned int v16; // r5
  int v17; // r0
  unsigned int v19; // r0
  int v20; // r3
  unsigned int v21; // r1
  unsigned int v22; // r0
  int v23; // r3
  int v24; // r0
  unsigned int v25; // r2
  int v26; // r1
  int v27; // r5
  int v28; // r3
  unsigned int v29; // r4
  CTimer *v30; // r0
  const char *v31; // r1
  CTimer *v32; // r0
  int v35; // [sp+8h] [bp-50h]
  int v36; // [sp+Ch] [bp-4Ch]
  char *v37; // [sp+10h] [bp-48h]
  _BYTE ptr[3]; // [sp+14h] [bp-44h] BYREF
  char v39; // [sp+17h] [bp-41h] BYREF
  char v40[4]; // [sp+18h] [bp-40h] BYREF
  unsigned int v41; // [sp+1Ch] [bp-3Ch]
  char v42[8]; // [sp+20h] [bp-38h] BYREF
  _DWORD v43[12]; // [sp+28h] [bp-30h] BYREF

  *((_BYTE *)this + 33) = 0;
  CText::Unload(this, a2);
  CFileMgr::SetDir((CFileMgr *)"TEXT", v3);
  switch ( byte_98F140 )
  {
    case 0:
      v5 = "AMERICAN.GXT";
      goto LABEL_11;
    case 1:
      v6 = "FRENCH.GXT";
      goto LABEL_5;
    case 2:
      v6 = "GERMAN.GXT";
LABEL_5:
      v7 = *(_QWORD *)v6;
      strcpy((char *)v43, "XT");
      goto LABEL_12;
    case 3:
      v8 = "ITALIAN.GXT";
      goto LABEL_9;
    case 4:
      v8 = "SPANISH.GXT";
      goto LABEL_9;
    case 5:
      v8 = "RUSSIAN.GXT";
LABEL_9:
      v7 = *(_QWORD *)v8;
      v43[0] = 5527623;
      goto LABEL_12;
    case 6:
      v5 = "JAPANESE.GXT";
LABEL_11:
      v4 = v42;
      v7 = *(_QWORD *)v5;
      *(_QWORD *)((unsigned int)v42 | 5) = *(_QWORD *)(v5 + 5);
LABEL_12:
      *(_QWORD *)v42 = v7;
      break;
    default:
      break;
  }
  v9 = (AndroidFile *)CFileMgr::OpenFile((CFileMgr *)v42, (const char *)&dword_54DAE0, v4);
  OS_FileRead(v9, ptr, 2u);
  OS_FileRead(v9, ptr, 2u);
  v11 = this;
  v37 = (char *)this + 300;
  v35 = 1;
  while ( 2 )
  {
    v12 = 0;
LABEL_15:
    v36 = v12;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          CFileMgr::ReadBytes(v9, (unsigned int)v40, byte_8, v10);
          v13 = v41;
        }
        while ( !v41 );
        if ( strncmp(v40, "TABL", 4u) )
          break;
        v16 = v13 / 0xC;
        CFileMgr::Read_old(v9, (unsigned int)v37, (char *)(12 * (v13 / 0xC)), v14);
        v17 = 0;
        while ( v16 > (unsigned __int16)v17++ )
          ;
        *((_BYTE *)v11 + 33) = 1;
        *((_WORD *)v11 + 1350) = v16;
      }
      if ( !strncmp(v40, "TKEY", 4u) )
      {
        *((_DWORD *)v11 + 1) = v13 >> 3;
        v19 = operator new[](v13 & 0xFFFFFFF8);
        *(_DWORD *)v11 = v19;
        CFileMgr::Read_old(v9, v19, (char *)v13, v20);
        v12 = 1;
        if ( v35 << 31 )
          goto LABEL_15;
        goto LABEL_29;
      }
      if ( !strncmp(v40, "TDAT", 4u) )
        break;
      v15 = 0;
      do
      {
        CFileMgr::ReadBytes(v9, (unsigned int)&v39, (char *)&stderr + 1, v10);
        ++v15;
      }
      while ( v41 > (unsigned __int16)v15 );
    }
    *((_DWORD *)v11 + 3) = v13 >> 1;
    v22 = operator new[](v13 & 0xFFFFFFFE);
    *((_DWORD *)v11 + 2) = v22;
    CFileMgr::Read_old(v9, v22, (char *)v13, v23);
    v35 = 0;
    if ( !(v36 << 24) )
      continue;
    break;
  }
LABEL_29:
  if ( *((_DWORD *)v11 + 1) )
  {
    v24 = *(_DWORD *)v11;
    v25 = 0;
    v21 = *((_DWORD *)v11 + 2);
    do
      *(_DWORD *)(v24 + 8 * v25++) += v21;
    while ( v25 < *((_DWORD *)v11 + 1) );
  }
  CFileMgr::CloseFile(v9, v21);
  v26 = CText::Get((CText *)TheText, (CKeyGen *)"CDERROR");
  v27 = 0;
  if ( v26 )
  {
    do
    {
      v28 = v27;
      v29 = *(unsigned __int16 *)(v26 + 2 * v27);
      if ( !*(_WORD *)(v26 + 2 * v27) )
        break;
      if ( v29 >= 0x80 )
      {
        if ( v29 > 0x83 )
        {
          if ( v29 > 0x8D )
          {
            if ( v29 > 0x91 )
            {
              if ( v29 > 0x95 )
              {
                if ( v29 > 0x9A )
                {
                  if ( v29 > 0xA4 )
                  {
                    if ( v29 > 0xA8 )
                    {
                      if ( v29 > 0xCC )
                      {
                        if ( (unsigned __int16)(v29 - 205) >= 3u )
                          LOBYTE(v29) = 35;
                        else
                          v29 = 0xBFF1D1u >> (8 * (v29 + 51));
                      }
                      else
                      {
                        LOBYTE(v29) = v29 + 80;
                      }
                    }
                    else
                    {
                      LOBYTE(v29) = v29 + 77;
                    }
                  }
                  else
                  {
                    LOBYTE(v29) = v29 + 75;
                  }
                }
                else
                {
                  LOBYTE(v29) = v29 + 73;
                }
              }
              else
              {
                LOBYTE(v29) = v29 + 71;
              }
            }
            else
            {
              LOBYTE(v29) = v29 + 68;
            }
          }
          else
          {
            LOBYTE(v29) = v29 + 66;
          }
        }
        else
        {
          LOBYTE(v29) = v29 + 64;
        }
      }
      ++v27;
      byte_A01AC2[v28] = v29;
    }
    while ( v28 < 254 );
  }
  byte_A01AC2[v27] = 0;
  strcpy((char *)v11 + 44, byte_A01AC2);
  *((_BYTE *)v11 + 34) = (unsigned __int8)&stderr + 1;
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, (const char *)&stderr + 1);
  if ( !a2 && CGame::bMissionPackGame && !*((_BYTE *)v11 + 35) )
  {
    do
    {
      v30 = (CTimer *)CMenuManager::CheckMissionPackValidMenu((CMenuManager *)&FrontEndMenuManager);
      if ( v30 )
      {
        CTimer::Suspend(v30);
        CText::LoadMissionPackText(v11);
        v32 = (CTimer *)CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v31);
        CTimer::Resume(v32);
      }
    }
    while ( !*((_BYTE *)v11 + 35) && CGame::bMissionPackGame );
  }
  return _stack_chk_guard - v43[4];
}


// ============================================================

// Address: 0x54db20
// Original: _ZN5CText6UnloadEh
// Demangled: CText::Unload(uchar)
void __fastcall CText::Unload(CText *this, int a2)
{
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0

  CMessages::ClearAllMessagesDisplayedByGame(0, a2);
  if ( *(_DWORD *)this )
  {
    operator delete[](*(void **)this);
    *(_DWORD *)this = 0;
  }
  v4 = (void *)*((_DWORD *)this + 2);
  *((_DWORD *)this + 1) = 0;
  if ( v4 )
  {
    operator delete[](v4);
    *((_DWORD *)this + 2) = 0;
  }
  *((_BYTE *)this + 34) = 0;
  *((_DWORD *)this + 3) = 0;
  if ( !a2 )
  {
    v5 = (void *)*((_DWORD *)this + 4);
    if ( v5 )
    {
      operator delete[](v5);
      *((_DWORD *)this + 4) = 0;
    }
    v6 = (void *)*((_DWORD *)this + 6);
    *((_DWORD *)this + 5) = 0;
    if ( v6 )
    {
      operator delete[](v6);
      *((_DWORD *)this + 6) = 0;
    }
    *(_DWORD *)((char *)this + 39) = 0;
    *(_DWORD *)((char *)this + 35) = 0;
    *((_DWORD *)this + 7) = 0;
    *((_BYTE *)this + 43) = 0;
  }
}


// ============================================================

// Address: 0x54db8c
// Original: _ZN5CText3GetEPKc
// Demangled: CText::Get(char const*)
_QWORD *__fastcall CText::Get(CText *this, CKeyGen *a2)
{
  unsigned int UppercaseKey; // r0
  const char *v5; // r1
  int v6; // r2
  int v7; // r4
  int v8; // r6
  _DWORD *v9; // r5
  _QWORD *result; // r0
  bool v11; // zf
  bool v12; // zf
  unsigned int v13; // r0
  int v14; // r2
  int v15; // r6
  int v16; // r5
  _DWORD *v17; // r4
  unsigned int v18; // r1

  if ( (*(unsigned __int8 *)a2 | 0x20) == 0x20 )
    goto LABEL_29;
  UppercaseKey = CKeyGen::GetUppercaseKey(a2, (const char *)a2);
  v6 = *((_DWORD *)this + 1) + 0xFFFF;
  if ( (__int16)(*((_WORD *)this + 2) - 1) >= 0 )
  {
    LOWORD(v7) = 0;
    while ( 1 )
    {
      v8 = ((__int16)v7 + (__int16)v6) / 2;
      v9 = (_DWORD *)(*(_DWORD *)this + 8 * (unsigned __int16)v8);
      v5 = (const char *)v9[1];
      if ( v5 == (const char *)UppercaseKey )
        break;
      if ( (unsigned int)v5 < UppercaseKey )
      {
        v7 = (__int16)(v8 + 1);
        v5 = (const char *)(__int16)v6;
        if ( (__int16)v6 < v7 )
          goto LABEL_12;
      }
      else
      {
        v5 = (const char *)(v8 + 0xFFFF);
        v6 = (__int16)(v8 - 1);
        if ( (__int16)v7 > v6 )
          goto LABEL_12;
      }
    }
    if ( v9 )
      return (_QWORD *)*v9;
  }
LABEL_12:
  v11 = CGame::bMissionPackGame == 0;
  if ( CGame::bMissionPackGame )
    v11 = *((_BYTE *)this + 35) == 0;
  if ( !v11 )
    goto LABEL_32;
  v12 = *((_BYTE *)this + 33) == 0;
  if ( *((_BYTE *)this + 33) )
    v12 = *((_BYTE *)this + 35) == 0;
  if ( !v12 )
  {
LABEL_32:
    v13 = CKeyGen::GetUppercaseKey(a2, v5);
    v14 = *((_DWORD *)this + 5) + 0xFFFF;
    if ( (__int16)(*((_WORD *)this + 10) - 1) >= 0 )
    {
      LOWORD(v15) = 0;
      while ( 1 )
      {
        v16 = ((__int16)v15 + (__int16)v14) / 2;
        v17 = (_DWORD *)(*((_DWORD *)this + 4) + 8 * (unsigned __int16)v16);
        v18 = v17[1];
        if ( v18 == v13 )
          break;
        if ( v18 < v13 )
        {
          v15 = (__int16)(v16 + 1);
          if ( (__int16)v14 < v15 )
            goto LABEL_29;
        }
        else
        {
          v14 = (__int16)(v16 - 1);
          if ( (__int16)v15 > v14 )
            goto LABEL_29;
        }
      }
      if ( v17 )
        return (_QWORD *)*v17;
    }
  }
LABEL_29:
  result = &GxtErrorString;
  word_A01AC0 = 0;
  unk_A01AB0 = 0LL;
  unk_A01AB8 = 0LL;
  GxtErrorString = 0LL;
  unk_A01A98 = 0LL;
  unk_A01AA0 = 0LL;
  unk_A01AA8 = 0LL;
  return result;
}


// ============================================================

// Address: 0x54dcb4
// Original: _ZN5CText19LoadMissionPackTextEv
// Demangled: CText::LoadMissionPackText(void)
int __fastcall CText::LoadMissionPackText(CText *this, unsigned __int8 a2)
{
  const char *v3; // r1
  void *v4; // r0
  void *v5; // r0
  char v6; // r6
  const char *v7; // r2
  AndroidFile *v8; // r0
  CFileMgr *v9; // r5
  int v10; // r3
  unsigned int v11; // r0
  int v12; // r3
  unsigned int v13; // r11
  int v14; // r6
  unsigned int v15; // r0
  int v16; // r3
  int v17; // r0
  unsigned int v18; // r2
  int v19; // r1
  int v21; // [sp+8h] [bp-68h]
  int i; // [sp+Ch] [bp-64h]
  _BYTE ptr[3]; // [sp+10h] [bp-60h] BYREF
  char v24; // [sp+13h] [bp-5Dh] BYREF
  char v25[4]; // [sp+14h] [bp-5Ch] BYREF
  unsigned int v26; // [sp+18h] [bp-58h]
  _BYTE v27[50]; // [sp+1Eh] [bp-52h] BYREF
  int v28; // [sp+50h] [bp-20h]

  CMessages::ClearAllMessagesDisplayedByGame((CMessages *)((char *)&stderr + 1), a2);
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v3);
  v4 = (void *)*((_DWORD *)this + 4);
  if ( v4 )
  {
    operator delete[](v4);
    *((_DWORD *)this + 4) = 0;
  }
  v5 = (void *)*((_DWORD *)this + 6);
  v6 = 0;
  *((_DWORD *)this + 5) = 0;
  if ( v5 )
  {
    operator delete[](v5);
    *((_DWORD *)this + 6) = 0;
  }
  *(_DWORD *)((char *)this + 35) = 0;
  *(_DWORD *)((char *)this + 39) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 43) = 0;
  CFileMgr::SetDirMyDocuments((CFileMgr *)v5);
  sub_5E6BC0(v27, "MPACK//MPACK%d//TEXT.GXT", (unsigned __int8)CGame::bMissionPackGame);
  v8 = (AndroidFile *)CFileMgr::OpenFile((CFileMgr *)v27, "rb", v7);
  v9 = v8;
  if ( v8 )
  {
    if ( !OS_FileRead(v8, ptr, 2u) && !OS_FileRead(v9, ptr, 2u) )
    {
      v21 = 1;
      while ( 2 )
      {
        for ( i = 0; ; i = 1 )
        {
          do
          {
LABEL_12:
            CFileMgr::ReadBytes(v9, (unsigned int)v25, byte_8, v10);
            v13 = v26;
          }
          while ( !v26 );
          if ( strncmp(v25, "TKEY", 4u) )
            break;
          *((_DWORD *)this + 5) = v13 >> 3;
          v11 = operator new[](v13 & 0xFFFFFFF8);
          *((_DWORD *)this + 4) = v11;
          CFileMgr::Read_old(v9, v11, (char *)v13, v12);
          if ( !(v21 << 31) )
            goto LABEL_20;
        }
        if ( !strncmp(v25, "TDAT", 4u) )
        {
          *((_DWORD *)this + 7) = v13 >> 1;
          v15 = operator new[](v13 & 0xFFFFFFFE);
          *((_DWORD *)this + 6) = v15;
          CFileMgr::Read_old(v9, v15, (char *)v13, v16);
          v21 = 0;
          if ( !(i << 24) )
            continue;
LABEL_20:
          if ( *((_DWORD *)this + 5) )
          {
            v17 = *((_DWORD *)this + 4);
            v18 = 0;
            v19 = *((_DWORD *)this + 6);
            do
              *(_DWORD *)(v17 + 8 * v18++) += v19;
            while ( v18 < *((_DWORD *)this + 5) );
          }
          v6 = 1;
          strcpy((char *)this + 36, "MPNAME");
          goto LABEL_25;
        }
        break;
      }
      v14 = 0;
      while ( CFileMgr::ReadBytes(v9, (unsigned int)&v24, (char *)&stderr + 1, v10) == 1 )
      {
        if ( v26 <= (unsigned __int16)++v14 )
          goto LABEL_12;
      }
    }
    v6 = 0;
  }
LABEL_25:
  *((_BYTE *)this + 35) = v6;
  return _stack_chk_guard - v28;
}


// ============================================================

// Address: 0x54de9c
// Original: _ZN5CText26GetNameOfLoadedMissionTextEPc
// Demangled: CText::GetNameOfLoadedMissionText(char *)
char *__fastcall CText::GetNameOfLoadedMissionText(CText *this, char *a2)
{
  return j_strcpy(a2, (const char *)this + 36);
}


// ============================================================

// Address: 0x54dea8
// Original: _ZN5CText15LoadMissionTextEPc
// Demangled: CText::LoadMissionText(char *)
int __fastcall CText::LoadMissionText(CText *this, char *a2)
{
  void *v4; // r0
  void *v5; // r0
  unsigned __int16 v6; // r8
  unsigned int v7; // r9
  size_t v8; // r4
  const char *v9; // r1
  const char *v10; // r5
  int v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  double v14; // d16
  const char *v15; // r0
  unsigned int v16; // r4
  const char *v17; // r2
  CFileMgr *v18; // r6
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r3
  unsigned int v29; // r9
  int v30; // r5
  unsigned int v31; // r0
  int v32; // r3
  unsigned int v33; // r1
  unsigned int v34; // r0
  int v35; // r3
  int v36; // r0
  unsigned int v37; // r2
  CTimer *v38; // r0
  const char *v39; // r1
  int v41; // [sp+Ch] [bp-5Ch]
  int v42; // [sp+14h] [bp-54h]
  char v43; // [sp+1Bh] [bp-4Dh] BYREF
  char v44[4]; // [sp+1Ch] [bp-4Ch] BYREF
  unsigned int v45; // [sp+20h] [bp-48h]
  char v46; // [sp+26h] [bp-42h] BYREF
  char v47; // [sp+27h] [bp-41h] BYREF
  int v48; // [sp+28h] [bp-40h] BYREF
  int v49; // [sp+2Ch] [bp-3Ch] BYREF
  double v50; // [sp+30h] [bp-38h] BYREF
  _DWORD v51[12]; // [sp+38h] [bp-30h] BYREF

  if ( !CGame::bMissionPackGame )
  {
    CMessages::ClearAllMessagesDisplayedByGame((CMessages *)((char *)&stderr + 1), _stack_chk_guard);
    v4 = (void *)*((_DWORD *)this + 4);
    if ( v4 )
    {
      operator delete[](v4);
      *((_DWORD *)this + 4) = 0;
    }
    v5 = (void *)*((_DWORD *)this + 6);
    v6 = 0;
    *((_DWORD *)this + 5) = 0;
    if ( v5 )
    {
      operator delete[](v5);
      *((_DWORD *)this + 6) = 0;
    }
    *(_DWORD *)((char *)this + 35) = 0;
    *(_DWORD *)((char *)this + 39) = 0;
    *((_DWORD *)this + 7) = 0;
    *((_BYTE *)this + 43) = 0;
    v7 = *((unsigned __int16 *)this + 1350);
    v8 = (unsigned __int16)strlen(a2);
LABEL_8:
    v9 = (char *)&stderr + 1;
    v10 = (char *)this + 12 * v6 + 300;
    while ( (_DWORD)v9 << 31 && v6 < v7 )
    {
      if ( v8 == (unsigned __int16)strlen(v10) )
      {
        v11 = strncmp(v10, a2, v8);
        v9 = 0;
        if ( !v11 )
          continue;
      }
      ++v6;
      goto LABEL_8;
    }
    if ( !((_DWORD)v9 << 31) )
    {
      CFileMgr::SetDir((CFileMgr *)"TEXT", v9);
      switch ( byte_98F140 )
      {
        case 0:
          v12 = "AMERICAN.GXT";
          goto LABEL_25;
        case 1:
          v13 = "FRENCH.GXT";
          goto LABEL_19;
        case 2:
          v13 = "GERMAN.GXT";
LABEL_19:
          v14 = *(double *)v13;
          strcpy((char *)v51, "XT");
          goto LABEL_26;
        case 3:
          v15 = "ITALIAN.GXT";
          goto LABEL_23;
        case 4:
          v15 = "SPANISH.GXT";
          goto LABEL_23;
        case 5:
          v15 = "RUSSIAN.GXT";
LABEL_23:
          v14 = *(double *)v15;
          v51[0] = 5527623;
          goto LABEL_26;
        case 6:
          v12 = "JAPANESE.GXT";
LABEL_25:
          v14 = *(double *)v12;
          *(_QWORD *)((unsigned int)&v50 | 5) = *(_QWORD *)(v12 + 5);
LABEL_26:
          v50 = v14;
          break;
        default:
          break;
      }
      CTimer::Suspend((CTimer *)(3 * (__int16)v6));
      v16 = *((_DWORD *)this + 3 * (__int16)v6 + 77);
      v18 = (CFileMgr *)CFileMgr::OpenFile((CFileMgr *)&v50, (const char *)&dword_54E1A8, v17);
      CFileMgr::Seek(v18, v16, 0, v19);
      v41 = 1;
      CFileMgr::ReadBytes(v18, (unsigned int)&v46, (char *)&stderr + 1, v20);
      CFileMgr::ReadBytes(v18, (unsigned int)&v47, (char *)&stderr + 1, v21);
      CFileMgr::ReadBytes(v18, (unsigned int)&v48, (char *)&stderr + 1, v22);
      CFileMgr::ReadBytes(v18, (unsigned int)&v48 + 1, (char *)&stderr + 1, v23);
      CFileMgr::ReadBytes(v18, (unsigned int)&v48 + 2, (char *)&stderr + 1, v24);
      CFileMgr::ReadBytes(v18, (unsigned int)&v48 + 3, (char *)&stderr + 1, v25);
      CFileMgr::ReadBytes(v18, (unsigned int)&v49, (char *)&stderr + 1, v26);
      CFileMgr::ReadBytes(v18, (unsigned int)&v49 + 1, (char *)&stderr + 1, v27);
      do
      {
        v42 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
              CFileMgr::ReadBytes(v18, (unsigned int)v44, byte_8, v28);
              v29 = v45;
            }
            while ( !v45 );
            if ( strncmp(v44, "TKEY", 4u) )
              break;
            *((_DWORD *)this + 5) = v29 >> 3;
            v31 = operator new[](v29 & 0xFFFFFFF8);
            *((_DWORD *)this + 4) = v31;
            CFileMgr::Read_old(v18, v31, (char *)v29, v32);
            if ( !(v41 << 31) )
              goto LABEL_39;
            v42 = 1;
          }
          if ( !strncmp(v44, "TDAT", 4u) )
            break;
          v30 = 0;
          do
          {
            CFileMgr::ReadBytes(v18, (unsigned int)&v43, (char *)&stderr + 1, v28);
            ++v30;
          }
          while ( v45 > (unsigned __int16)v30 );
        }
        *((_DWORD *)this + 7) = v29 >> 1;
        v34 = operator new[](v29 & 0xFFFFFFFE);
        *((_DWORD *)this + 6) = v34;
        CFileMgr::Read_old(v18, v34, (char *)v29, v35);
        v41 = 0;
      }
      while ( !(v42 << 24) );
LABEL_39:
      if ( *((_DWORD *)this + 5) )
      {
        v36 = *((_DWORD *)this + 4);
        v37 = 0;
        v33 = *((_DWORD *)this + 6);
        do
          *(_DWORD *)(v36 + 8 * v37++) += v33;
        while ( v37 < *((_DWORD *)this + 5) );
      }
      v38 = (CTimer *)CFileMgr::CloseFile(v18, v33);
      CTimer::Resume(v38);
      CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v39);
      strcpy((char *)this + 36, a2);
      anytimeMissionScript[0] = 0;
      *((_BYTE *)this + 35) = 1;
    }
  }
  return _stack_chk_guard - v51[4];
}


// ============================================================

// Address: 0x54e1c0
// Original: _ZN5CTextC2Ev
// Demangled: CText::CText(void)
void __fastcall CText::CText(CText *this)
{
  *((_WORD *)this + 1350) = 0;
  *((_BYTE *)this + 43) = 0;
  *(_DWORD *)((char *)this + 39) = 0;
  *(_DWORD *)((char *)this + 35) = 0;
  *((_WORD *)this + 16) = 101;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  word_A01AC0 = 0;
  unk_A01AB0 = 0LL;
  unk_A01AB8 = 0LL;
  GxtErrorString = 0LL;
  unk_A01A98 = 0LL;
  unk_A01AA0 = 0LL;
  unk_A01AA8 = 0LL;
}


// ============================================================

// Address: 0x54e204
// Original: _ZN5CTextD2Ev
// Demangled: CText::~CText()
void __fastcall CText::~CText(CText *this)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  v2 = (void *)*((_DWORD *)this + 6);
  if ( v2 )
  {
    operator delete[](v2);
    *((_DWORD *)this + 6) = 0;
  }
  v3 = (void *)*((_DWORD *)this + 4);
  *((_DWORD *)this + 7) = 0;
  if ( v3 )
  {
    operator delete[](v3);
    *((_DWORD *)this + 4) = 0;
  }
  v4 = (void *)*((_DWORD *)this + 2);
  *((_DWORD *)this + 5) = 0;
  if ( v4 )
  {
    operator delete[](v4);
    *((_DWORD *)this + 2) = 0;
  }
  v5 = *(void **)this;
  *((_DWORD *)this + 3) = 0;
  if ( v5 )
  {
    operator delete[](v5);
    *(_DWORD *)this = 0;
  }
  *((_DWORD *)this + 1) = 0;
}


// ============================================================
