
// Address: 0x18b588
// Original: j__ZN18CCustomCarPlateMgr17GeneratePlateTextEPci
// Demangled: CCustomCarPlateMgr::GeneratePlateText(char *,int)
// attributes: thunk
int __fastcall CCustomCarPlateMgr::GeneratePlateText(CCustomCarPlateMgr *this, char *a2, int a3)
{
  return _ZN18CCustomCarPlateMgr17GeneratePlateTextEPci(this, a2, a3);
}


// ============================================================

// Address: 0x1911e8
// Original: j__ZN18CCustomCarPlateMgr29SetupClumpAfterVehicleUpgradeEP7RpClumpP10RpMaterialh
// Demangled: CCustomCarPlateMgr::SetupClumpAfterVehicleUpgrade(RpClump *,RpMaterial *,uchar)
// attributes: thunk
int CCustomCarPlateMgr::SetupClumpAfterVehicleUpgrade()
{
  return _ZN18CCustomCarPlateMgr29SetupClumpAfterVehicleUpgradeEP7RpClumpP10RpMaterialh();
}


// ============================================================

// Address: 0x193090
// Original: j__ZN18CCustomCarPlateMgr18CreatePlateTextureEPch
// Demangled: CCustomCarPlateMgr::CreatePlateTexture(char *,uchar)
// attributes: thunk
int __fastcall CCustomCarPlateMgr::CreatePlateTexture(CCustomCarPlateMgr *this, char *a2, unsigned __int8 a3)
{
  return _ZN18CCustomCarPlateMgr18CreatePlateTextureEPch(this, a2, a3);
}


// ============================================================

// Address: 0x198174
// Original: j__ZN18CCustomCarPlateMgr10SetupClumpEP7RpClumpPch
// Demangled: CCustomCarPlateMgr::SetupClump(RpClump *,char *,uchar)
// attributes: thunk
int CCustomCarPlateMgr::SetupClump()
{
  return _ZN18CCustomCarPlateMgr10SetupClumpEP7RpClumpPch();
}


// ============================================================

// Address: 0x19f340
// Original: j__ZN18CCustomCarPlateMgr10InitialiseEv
// Demangled: CCustomCarPlateMgr::Initialise(void)
// attributes: thunk
int __fastcall CCustomCarPlateMgr::Initialise(CCustomCarPlateMgr *this)
{
  return _ZN18CCustomCarPlateMgr10InitialiseEv(this);
}


// ============================================================

// Address: 0x1a0a24
// Original: j__ZN18CCustomCarPlateMgr8ShutdownEv
// Demangled: CCustomCarPlateMgr::Shutdown(void)
// attributes: thunk
int __fastcall CCustomCarPlateMgr::Shutdown(CCustomCarPlateMgr *this)
{
  return _ZN18CCustomCarPlateMgr8ShutdownEv(this);
}


// ============================================================

// Address: 0x5a4ecc
// Original: _ZN18CCustomCarPlateMgr10InitialiseEv
// Demangled: CCustomCarPlateMgr::Initialise(void)
bool __fastcall CCustomCarPlateMgr::Initialise(CCustomCarPlateMgr *this, const char *a2)
{
  CTxdStore *TxdSlot; // r4
  const char *v3; // r2
  int v4; // r0
  int v5; // r0
  int v6; // r0
  CTxdStore *v7; // r0

  TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"vehicle", a2);
  CTxdStore::PushCurrentTxd(TxdSlot);
  CTxdStore::SetCurrentTxd(TxdSlot, 0, v3);
  v4 = RwTextureRead("platecharset", 0);
  *(_WORD *)(v4 + 80) = 13057;
  CCustomCarPlateMgr::pCharsetTex = v4;
  v5 = RwTextureRead("plateback1", 0);
  *(_WORD *)(v5 + 80) = 13058;
  CCustomCarPlateMgr::pPlatebackTexTab = v5;
  v6 = RwTextureRead("plateback2", 0);
  *(_WORD *)(v6 + 80) = 13058;
  dword_A26A58 = v6;
  v7 = (CTxdStore *)RwTextureRead("plateback3", 0);
  *((_WORD *)v7 + 40) = 13058;
  dword_A26A5C = (int)v7;
  CTxdStore::PopCurrentTxd(v7);
  dword_A26A6C = RwRasterLock();
  return dword_A26A6C != 0;
}


// ============================================================

// Address: 0x5a4f9c
// Original: _ZN18CCustomCarPlateMgr17GeneratePlateTextEPci
// Demangled: CCustomCarPlateMgr::GeneratePlateText(char *,int)
int __fastcall CCustomCarPlateMgr::GeneratePlateText(CCustomCarPlateMgr *this, char *a2, int a3)
{
  int v6; // r6
  char *v7; // r4
  int v8; // r0

  if ( (int)a2 < 4 )
    return 0;
  *(_BYTE *)this = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 23.0) + 65;
  *((_BYTE *)this + 1) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 23.0) + 65;
  *((_BYTE *)this + 2) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 9.0) + 48;
  *((_BYTE *)this + 3) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 9.0) + 48;
  if ( a2 != byte_4 )
  {
    v6 = 0;
    do
    {
      v7 = (char *)this + v6;
      *((_BYTE *)this + v6 + 4) = 32;
      v7[5] = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 9.0) + 48;
      v7[6] = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 23.0) + 65;
      v7[7] = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 23.0) + 65;
      v8 = v6 + 8;
      v6 += 4;
    }
    while ( v8 < (int)a2 );
  }
  return 1;
}


// ============================================================

// Address: 0x5a50e0
// Original: _ZN18CCustomCarPlateMgr8ShutdownEv
// Demangled: CCustomCarPlateMgr::Shutdown(void)
CTxdStore *__fastcall CCustomCarPlateMgr::Shutdown(CCustomCarPlateMgr *this, const char *a2)
{
  CTxdStore *result; // r0

  if ( CCustomCarPlateMgr::pCharsetTex )
  {
    RwRasterUnlock(*(_DWORD *)CCustomCarPlateMgr::pCharsetTex);
    dword_A26A6C = 0;
    RwTextureDestroy(CCustomCarPlateMgr::pCharsetTex);
    CCustomCarPlateMgr::pCharsetTex = 0;
  }
  if ( CCustomCarPlateMgr::pPlatebackTexTab )
  {
    RwTextureDestroy(CCustomCarPlateMgr::pPlatebackTexTab);
    a2 = 0;
    CCustomCarPlateMgr::pPlatebackTexTab = 0;
  }
  if ( dword_A26A58 )
  {
    RwTextureDestroy(dword_A26A58);
    a2 = 0;
    dword_A26A58 = 0;
  }
  if ( dword_A26A5C )
  {
    RwTextureDestroy(dword_A26A5C);
    a2 = 0;
    dword_A26A5C = 0;
  }
  result = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"vehicle", a2);
  if ( result != (CTxdStore *)-1 )
    return (CTxdStore *)sub_1A0A60(result, (int)result + 1);
  return result;
}


// ============================================================

// Address: 0x5a5190
// Original: _ZN18CCustomCarPlateMgr10SetupClumpEP7RpClumpPch
// Demangled: CCustomCarPlateMgr::SetupClump(RpClump *,char *,uchar)
int __fastcall CCustomCarPlateMgr::SetupClump(int a1, int a2, char a3)
{
  byte_A26A70 = a3;
  dword_A26A74 = 0;
  RpClumpForAllAtomics(a1, sub_5A51C4, a2);
  return dword_A26A74;
}


// ============================================================

// Address: 0x5a51e0
// Original: _ZN18CCustomCarPlateMgr29SetupClumpAfterVehicleUpgradeEP7RpClumpP10RpMaterialh
// Demangled: CCustomCarPlateMgr::SetupClumpAfterVehicleUpgrade(RpClump *,RpMaterial *,uchar)
int __fastcall CCustomCarPlateMgr::SetupClumpAfterVehicleUpgrade(int a1, int a2, char a3)
{
  if ( !a2 )
    return 0;
  dword_A26A74 = a2;
  byte_A26A70 = a3;
  RpClumpForAllAtomics(a1, sub_5A521C, 0);
  return 1;
}


// ============================================================

// Address: 0x5a5238
// Original: _ZN18CCustomCarPlateMgr29SetupMaterialPlatebackTextureEP10RpMaterialh
// Demangled: CCustomCarPlateMgr::SetupMaterialPlatebackTexture(RpMaterial *,uchar)
int __fastcall CCustomCarPlateMgr::SetupMaterialPlatebackTexture(int a1, unsigned int a2)
{
  unsigned int v3; // r0

  if ( a2 == 255 )
  {
    v3 = CWeather::WeatherRegion - 1;
    if ( v3 > 3 )
      LOBYTE(a2) = 0;
    else
      a2 = 0x1010002u >> (8 * v3);
  }
  RpMaterialSetTexture(a1, CCustomCarPlateMgr::pPlatebackTexTab[(unsigned __int8)a2]);
  return a1;
}


// ============================================================

// Address: 0x5a5280
// Original: _ZN18CCustomCarPlateMgr23GetMapRegionPlateDesignEv
// Demangled: CCustomCarPlateMgr::GetMapRegionPlateDesign(void)
int __fastcall CCustomCarPlateMgr::GetMapRegionPlateDesign(CCustomCarPlateMgr *this)
{
  unsigned int v1; // r0

  v1 = CWeather::WeatherRegion - 1;
  if ( v1 <= 3 )
    return (unsigned __int8)(0x1010002u >> (8 * v1));
  else
    return 0;
}


// ============================================================

// Address: 0x5a52a8
// Original: _ZN18CCustomCarPlateMgr25SetupMaterialPlateTextureEP10RpMaterialPch
// Demangled: CCustomCarPlateMgr::SetupMaterialPlateTexture(RpMaterial *,char *,uchar)
int __fastcall CCustomCarPlateMgr::SetupMaterialPlateTexture(int a1, CCustomCarPlateMgr *this, char *a3)
{
  int PlateTexture; // r5

  if ( !a1 )
    return 0;
  PlateTexture = CCustomCarPlateMgr::CreatePlateTexture(this, a3, (unsigned __int8)a3);
  if ( !PlateTexture )
    return 0;
  RpMaterialSetTexture(a1, PlateTexture);
  RwTextureDestroy(PlateTexture);
  return a1;
}


// ============================================================

// Address: 0x5a52d4
// Original: _ZN18CCustomCarPlateMgr18CreatePlateTextureEPch
// Demangled: CCustomCarPlateMgr::CreatePlateTexture(char *,uchar)
int __fastcall CCustomCarPlateMgr::CreatePlateTexture(CCustomCarPlateMgr *this, char *a2, unsigned __int8 a3)
{
  int v4; // r10
  int v5; // r4
  int v6; // r0
  int v7; // r2
  int v8; // r1
  bool v9; // zf
  int v10; // r12
  _BYTE *v11; // r11
  int i; // r3
  unsigned __int8 v13; // r0
  int v14; // r4
  int v15; // r0
  int v16; // r4
  int v17; // r0
  int v18; // r4
  char *v19; // r6
  _BYTE *v20; // r0
  char v21; // r5
  int v22; // r5

  v4 = RwRasterCreate(64, 16, 32, 5380);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)CCustomCarPlateMgr::pCharsetTex;
  if ( !*(_DWORD *)CCustomCarPlateMgr::pCharsetTex )
    goto LABEL_17;
  v6 = RwRasterLock();
  if ( !v6 || !dword_A26A6C )
    goto LABEL_17;
  v8 = *(_DWORD *)(v5 + 24);
  v9 = v8 == 0;
  if ( v8 )
  {
    v7 = *(_DWORD *)(v4 + 24);
    v9 = v7 == 0;
  }
  if ( v9 )
  {
LABEL_17:
    RwRasterDestroy();
    return 0;
  }
  v10 = dword_A26A6C + 31;
  v11 = (_BYTE *)(v6 + 31);
  for ( i = 0; i != 8; ++i )
  {
    v13 = *((_BYTE *)this + i) - 32;
    if ( v13 > 0x5Au )
    {
      v15 = 18432;
      v16 = 0;
    }
    else
    {
      v14 = (char)v13;
      v15 = dword_61F6E0[(char)v13];
      v16 = dword_61F570[v14];
    }
    v17 = v15 + v16;
    v18 = 16;
    v19 = (char *)(v10 + v17);
    v20 = v11;
    do
    {
      --v18;
      *(v20 - 31) = *(v19 - 31);
      *(v20 - 30) = *(v19 - 30);
      *(v20 - 29) = *(v19 - 29);
      *(v20 - 28) = *(v19 - 28);
      *(v20 - 27) = *(v19 - 27);
      *(v20 - 26) = *(v19 - 26);
      *(v20 - 25) = *(v19 - 25);
      *(v20 - 24) = *(v19 - 24);
      *(v20 - 23) = *(v19 - 23);
      *(v20 - 22) = *(v19 - 22);
      *(v20 - 21) = *(v19 - 21);
      *(v20 - 20) = *(v19 - 20);
      *(v20 - 19) = *(v19 - 19);
      *(v20 - 18) = *(v19 - 18);
      *(v20 - 17) = *(v19 - 17);
      *(v20 - 16) = *(v19 - 16);
      *(v20 - 15) = *(v19 - 15);
      *(v20 - 14) = *(v19 - 14);
      *(v20 - 13) = *(v19 - 13);
      *(v20 - 12) = *(v19 - 12);
      *(v20 - 11) = *(v19 - 11);
      *(v20 - 10) = *(v19 - 10);
      *(v20 - 9) = *(v19 - 9);
      *(v20 - 8) = *(v19 - 8);
      *(v20 - 7) = *(v19 - 7);
      *(v20 - 6) = *(v19 - 6);
      *(v20 - 5) = *(v19 - 5);
      *(v20 - 4) = *(v19 - 4);
      *(v20 - 3) = *(v19 - 3);
      *(v20 - 2) = *(v19 - 2);
      *(v20 - 1) = *(v19 - 1);
      v21 = *v19;
      v19 += v8;
      *v20 = v21;
      v20 += v7;
    }
    while ( v18 );
    v11 += 32;
  }
  RwRasterUnlock(v4);
  *(_WORD *)(v4 + 48) |= 0x200u;
  v22 = RwTextureCreate();
  if ( !v22 )
    return 0;
  RwTextureSetName();
  *(_BYTE *)(v22 + 80) = 1;
  return v22;
}


// ============================================================

// Address: 0x5a54d4
// Original: _ZN18CCustomCarPlateMgr19LoadPlatecharsetDatEPKcPhii
// Demangled: CCustomCarPlateMgr::LoadPlatecharsetDat(char const*,uchar *,int,int)
int __fastcall CCustomCarPlateMgr::LoadPlatecharsetDat(
        CCustomCarPlateMgr *this,
        const char *a2,
        unsigned __int8 *a3,
        int a4,
        int a5)
{
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r10
  unsigned __int8 v7; // r11
  const char *v9; // r9
  const char *v10; // r2
  CFileLoader *v11; // r5
  const char *v12; // r1
  unsigned int v13; // r1
  const char *Line; // r0
  char *v15; // r6
  unsigned int v16; // r9
  char *v17; // r0
  unsigned __int16 v18; // r0
  unsigned __int16 v19; // r0
  unsigned __int16 v20; // r0
  const char *v22; // [sp+0h] [bp-28h]
  int i; // [sp+4h] [bp-24h]
  char v24[32]; // [sp+8h] [bp-20h] BYREF

  v9 = a2;
  CFileMgr::SetDir((CFileMgr *)"DATA", a2);
  v11 = (CFileLoader *)CFileMgr::OpenFile(this, "r", v10);
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v12);
  for ( i = 0; ; ++i )
  {
    do
    {
      Line = (const char *)CFileLoader::LoadLine(v11, v13);
      v15 = (char *)Line;
      if ( !Line || !strcmp(Line, ";the end") )
      {
        CFileMgr::CloseFile(v11, v13);
        return 1;
      }
    }
    while ( *v15 == 59 );
    v22 = v9;
    v16 = 0;
    strcpy(v24, " \t");
    v17 = strtok(v15, v24);
    do
    {
      switch ( v16 )
      {
        case 2u:
          v19 = atoi(v17);
          v5 = v19;
          if ( v19 >= 0xFFu )
            v5 = -1;
          break;
        case 1u:
          v20 = atoi(v17);
          v6 = v20;
          if ( v20 >= 0xFFu )
            v6 = -1;
          break;
        case 0u:
          v18 = atoi(v17);
          v7 = v18;
          if ( v18 >= 0xFFu )
            v7 = -1;
          break;
      }
      v17 = strtok(0, v24);
      ++v16;
    }
    while ( v17 );
    if ( v16 < 3 )
      break;
    v9 = v22;
    *(_DWORD *)&v22[4 * i] = (v5 << 16) | (v6 << 8) | v7 | 0x80000000;
    v13 = i + 1;
  }
  return 0;
}


// ============================================================
