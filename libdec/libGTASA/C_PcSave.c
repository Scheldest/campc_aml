
// Address: 0x192500
// Original: j__ZN8C_PcSave16PopulateSlotInfoEv
// Demangled: C_PcSave::PopulateSlotInfo(void)
// attributes: thunk
int __fastcall C_PcSave::PopulateSlotInfo(C_PcSave *this)
{
  return _ZN8C_PcSave16PopulateSlotInfoEv(this);
}


// ============================================================

// Address: 0x197370
// Original: j__ZN8C_PcSave20GenerateGameFilenameEiPc
// Demangled: C_PcSave::GenerateGameFilename(int,char *)
// attributes: thunk
int __fastcall C_PcSave::GenerateGameFilename(C_PcSave *this, int a2, char *a3)
{
  return _ZN8C_PcSave20GenerateGameFilenameEiPc(this, a2, a3);
}


// ============================================================

// Address: 0x19cadc
// Original: j__ZN8C_PcSave8SaveSlotEab
// Demangled: C_PcSave::SaveSlot(signed char,bool)
// attributes: thunk
int __fastcall C_PcSave::SaveSlot(C_PcSave *this, CGenericGameStorage *a2, bool a3)
{
  return _ZN8C_PcSave8SaveSlotEab(this, a2, a3);
}


// ============================================================

// Address: 0x19f1a4
// Original: j__ZN8C_PcSave10DeleteSlotEa
// Demangled: C_PcSave::DeleteSlot(signed char)
// attributes: thunk
int __fastcall C_PcSave::DeleteSlot(C_PcSave *this, signed __int8 a2)
{
  return _ZN8C_PcSave10DeleteSlotEa(this, a2);
}


// ============================================================

// Address: 0x4d3d2c
// Original: _ZN8C_PcSave16SetSaveDirectoryEPKc
// Demangled: C_PcSave::SetSaveDirectory(char const*)
__int64 __fastcall C_PcSave::SetSaveDirectory(C_PcSave *this, const char *a2)
{
  sub_5E6BC0(DefaultPCSaveFileName, "%s\\%s", (const char *)this, "GTASAmf");
  return sub_5E6BC0(DefaultPCSaveFileName, "%s\\%s", (const char *)this, "GTASAsf");
}


// ============================================================

// Address: 0x4d3d7c
// Original: _ZN8C_PcSave8SaveSlotEab
// Demangled: C_PcSave::SaveSlot(signed char,bool)
int __fastcall C_PcSave::SaveSlot(C_PcSave *this, CGenericGameStorage *a2, int a3)
{
  CGenericGameStorage *v5; // r0
  int v6; // r1
  int v7; // r5
  const char *v8; // r1
  int v9; // r0
  bool v10; // zf
  int v11; // r1
  int result; // r0
  int v13; // r8
  void *v14; // r5
  AndroidFile *v15; // [sp+4h] [bp-14h] BYREF

  g_bSaving = 1;
  CGenericGameStorage::MakeValidSaveName(a2, 1);
  PcSaveHelper = 0;
  v5 = (CGenericGameStorage *)CFileMgr::SetDirMyDocuments((CFileMgr *)&PcSaveHelper);
  if ( !a3 )
    CGenericGameStorage::DoGameSpecificStuffBeforeSave(v5);
  v7 = CGenericGameStorage::GenericSave(0, v6);
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v8);
  if ( v7 == 1 )
  {
    v9 = IsSCCloudAvailable();
    v10 = ((unsigned int)a2 & 0xFFFFFFFE) == 6;
    v11 = v9;
    result = 0;
    if ( ((unsigned int)a2 & 0xFFFFFFFE) == 6 )
      v10 = v11 == 1;
    if ( v10 )
    {
      if ( !OS_FileOpen(1, &v15, CGenericGameStorage::ms_ValidSaveName) )
      {
        v13 = OS_FileSize(v15);
        v14 = malloc(v13);
        OS_FileRead(v15, v14, v13);
        OS_FileClose(v15);
        SaveGameToSCCloud((int)a2 - 6, (const char *)v14, v13);
        free(v14);
      }
      result = 0;
    }
  }
  else
  {
    result = 2;
  }
  g_bSaving = 0;
  return result;
}


// ============================================================

// Address: 0x4d3e48
// Original: _ZN8C_PcSave20GenerateGameFilenameEiPc
// Demangled: C_PcSave::GenerateGameFilename(int,char *)
__int64 __fastcall C_PcSave::GenerateGameFilename(C_PcSave *this, int a2, char *a3)
{
  char **v5; // r0
  int RockstarID; // [sp+0h] [bp-10h]

  if ( byte_98F1AC )
  {
    v5 = &MarketingPCSaveFileName_ptr;
  }
  else
  {
    if ( IsCloudSlot(a2) == 1 )
    {
      RockstarID = GetRockstarID();
      return sub_5E6BC0(a3, "%s%i_%s%s", DefaultPCSaveFileName, a2 + 1, RockstarID, &dword_4D3EA8);
    }
    v5 = &DefaultPCSaveFileName_ptr;
  }
  return sub_5E6BC0(a3, "%s%i%s", *v5, a2 + 1, &dword_4D3EA8);
}


// ============================================================

// Address: 0x4d3ec0
// Original: _ZN8C_PcSave16PopulateSlotInfoEv
// Demangled: C_PcSave::PopulateSlotInfo(void)
int __fastcall C_PcSave::PopulateSlotInfo(C_PcSave *this)
{
  int v1; // r9
  __int16 *v2; // r8
  C_PcSave *inserted; // r0
  CFileMgr *GameFilename; // r0
  const char *v5; // r2
  CFileMgr *v6; // r0
  const char *v7; // r1
  char *v8; // r2
  int v9; // r3
  AndroidFile *v10; // r10
  unsigned int v11; // r1
  __int64 *v12; // r1
  CKeyGen *v13; // r0
  __int64 *v14; // r0
  __int64 v15; // d16
  __int64 v16; // d17
  __int64 v17; // d18
  __int64 v18; // d19
  __int64 v19; // d20
  __int64 v20; // d21
  CMessages *v21; // r0
  CText *v23; // [sp+10h] [bp-318h]
  CGenericGameStorage *v24; // [sp+24h] [bp-304h] BYREF
  _QWORD v25[53]; // [sp+28h] [bp-300h] BYREF
  _QWORD v26[6]; // [sp+1D0h] [bp-158h] BYREF
  char v27[260]; // [sp+204h] [bp-124h] BYREF
  int v28; // [sp+308h] [bp-20h]

  v1 = 0;
  *(_QWORD *)CGenericGameStorage::ms_Slots = 0x100000001LL;
  *(_QWORD *)&CGenericGameStorage::ms_Slots[2] = 0x100000001LL;
  v2 = CGenericGameStorage::ms_SlotFileName;
  *(_QWORD *)&CGenericGameStorage::ms_Slots[4] = 0x100000001LL;
  *(_QWORD *)&dword_9FAA94 = 0x100000001LL;
  dword_9FAA9C = 1;
  CGenericGameStorage::ms_SlotFileName[0] = 0;
  word_9FACA8 = 0;
  word_9FAEB0 = 0;
  word_9FB0B8 = 0;
  word_9FB2C0 = 0;
  word_9FB4C8 = 0;
  word_9FB6D0 = 0;
  word_9FB8D8 = 0;
  word_9FBAE0 = 0;
  CGenericGameStorage::ms_SlotSaveDate[0] = 0;
  word_9FBF80 = 0;
  word_9FC00C = 0;
  word_9FC098 = 0;
  word_9FC124 = 0;
  word_9FC1B0 = 0;
  v23 = (CText *)TheText;
  word_9FC23C = 0;
  word_9FC2C8 = 0;
  PcSaveHelper = 0;
  word_9FC354 = 0;
  inserted = (C_PcSave *)TheText;
  do
  {
    GameFilename = (CFileMgr *)C_PcSave::GenerateGameFilename(inserted, v1, v27);
    CFileMgr::SetDirMyDocuments(GameFilename);
    v6 = (CFileMgr *)CFileMgr::OpenFile((CFileMgr *)v27, (const char *)&dword_4D40B4, v5);
    v10 = v6;
    if ( v6 )
    {
      CFileMgr::Seek(v6, 5u, 0, v9);
      OS_FileRead(v10, &v24, 0x1ACu);
      if ( CGenericGameStorage::GetSavedVersionNumber(v24, v11) >= 2
        && strncmp((const char *)v25, TopLineEmptyFile, 0x1Au) )
      {
        CGenericGameStorage::ms_Slots[v1] = 0;
        v26[4] = v25[4];
        v26[5] = v25[5];
        v26[0] = v25[0];
        v26[1] = v25[1];
        v26[2] = v25[2];
        v26[3] = v25[3];
        v13 = (CKeyGen *)GxtCharToAscii((unsigned __int16 *)v26, 0);
        v14 = (__int64 *)CText::Get((CText *)TheText, v13);
        v12 = v14 + 4;
        v15 = *v14;
        v16 = v14[1];
        v14 += 2;
        v17 = *v14;
        v18 = v14[1];
        v19 = *v12;
        v20 = v12[1];
        v2[24] = 0;
        *((_QWORD *)v2 + 4) = v19;
        *((_QWORD *)v2 + 5) = v20;
        *(_QWORD *)v2 = v15;
        *((_QWORD *)v2 + 1) = v16;
        *((_QWORD *)v2 + 2) = v17;
        *((_QWORD *)v2 + 3) = v18;
      }
      CFileMgr::CloseFile(v10, (unsigned int)v12);
    }
    inserted = (C_PcSave *)CGenericGameStorage::ms_Slots[v1];
    if ( !inserted )
    {
      inserted = (C_PcSave *)CGenericGameStorage::CheckDataNotCorrupt(
                               (CGenericGameStorage *)v1,
                               (CGenericGameStorage *)v27,
                               v8);
      if ( !inserted )
      {
        v21 = (CMessages *)CText::Get(v23, (CKeyGen *)"FEC_SLC");
        inserted = (C_PcSave *)CMessages::InsertNumberInString(
                                 v21,
                                 (unsigned __int16 *)(v1 + 1),
                                 -1,
                                 -1,
                                 -1,
                                 -1,
                                 -1,
                                 (int)v2,
                                 (unsigned __int16 *)v23);
      }
    }
    ++v1;
    v2 += 260;
  }
  while ( v1 != 9 );
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v7);
  return _stack_chk_guard - v28;
}


// ============================================================

// Address: 0x4d40dc
// Original: _ZN8C_PcSave10DeleteSlotEa
// Demangled: C_PcSave::DeleteSlot(signed char)
int __fastcall C_PcSave::DeleteSlot(C_PcSave *this, int a2)
{
  char **v3; // r1
  int v4; // r4
  const char *v5; // r2
  CFileMgr *v6; // r0
  unsigned int v7; // r1
  int RockstarID; // [sp+0h] [bp-118h]
  _BYTE v10[260]; // [sp+8h] [bp-110h] BYREF

  PcSaveHelper = 0;
  if ( byte_98F1AC )
  {
    v3 = &MarketingPCSaveFileName_ptr;
  }
  else
  {
    if ( IsCloudSlot(a2) == 1 )
    {
      RockstarID = GetRockstarID();
      sub_5E6BC0(v10, "%s%i_%s%s", DefaultPCSaveFileName, a2 + 1, RockstarID, &dword_4D4198);
      goto LABEL_7;
    }
    v3 = &DefaultPCSaveFileName_ptr;
  }
  sub_5E6BC0(v10, "%s%i.b", *v3, a2 + 1);
LABEL_7:
  v4 = 1;
  OS_FileDelete();
  v6 = (CFileMgr *)CFileMgr::OpenFile((CFileMgr *)v10, (const char *)&dword_4D419C, v5);
  if ( v6 )
  {
    CFileMgr::CloseFile(v6, v7);
    return 0;
  }
  return v4;
}


// ============================================================
