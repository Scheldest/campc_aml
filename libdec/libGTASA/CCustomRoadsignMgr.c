
// Address: 0x18c3cc
// Original: j__ZN18CCustomRoadsignMgr8ShutdownEv
// Demangled: CCustomRoadsignMgr::Shutdown(void)
// attributes: thunk
int __fastcall CCustomRoadsignMgr::Shutdown(CCustomRoadsignMgr *this)
{
  return _ZN18CCustomRoadsignMgr8ShutdownEv(this);
}


// ============================================================

// Address: 0x18d13c
// Original: j__ZN18CCustomRoadsignMgr20RenderRoadsignAtomicEP8RpAtomicRK7CVector
// Demangled: CCustomRoadsignMgr::RenderRoadsignAtomic(RpAtomic *,CVector const&)
// attributes: thunk
int CCustomRoadsignMgr::RenderRoadsignAtomic()
{
  return _ZN18CCustomRoadsignMgr20RenderRoadsignAtomicEP8RpAtomicRK7CVector();
}


// ============================================================

// Address: 0x18e9e0
// Original: j__ZN18CCustomRoadsignMgr10InitialiseEv
// Demangled: CCustomRoadsignMgr::Initialise(void)
// attributes: thunk
int __fastcall CCustomRoadsignMgr::Initialise(CCustomRoadsignMgr *this)
{
  return _ZN18CCustomRoadsignMgr10InitialiseEv(this);
}


// ============================================================

// Address: 0x191958
// Original: j__ZN18CCustomRoadsignMgr20CreateRoadsignAtomicEffiPcS0_S0_S0_ih
// Demangled: CCustomRoadsignMgr::CreateRoadsignAtomic(float,float,int,char *,char *,char *,char *,int,uchar)
// attributes: thunk
int __fastcall CCustomRoadsignMgr::CreateRoadsignAtomic(
        CCustomRoadsignMgr *this,
        float a2,
        float a3,
        int a4,
        char *a5,
        char *a6,
        char *a7,
        char *a8,
        int a9,
        unsigned __int8 a10)
{
  return _ZN18CCustomRoadsignMgr20CreateRoadsignAtomicEffiPcS0_S0_S0_ih(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x1957b4
// Original: j__ZN18CCustomRoadsignMgr21CreateRoadsignTextureEPci
// Demangled: CCustomRoadsignMgr::CreateRoadsignTexture(char *,int)
// attributes: thunk
int __fastcall CCustomRoadsignMgr::CreateRoadsignTexture(CCustomRoadsignMgr *this, char *a2, int a3)
{
  return _ZN18CCustomRoadsignMgr21CreateRoadsignTextureEPci(this, a2, a3);
}


// ============================================================

// Address: 0x19b67c
// Original: j__ZN18CCustomRoadsignMgr21CreateRoadsignAtomicAEffiPcS0_S0_S0_ih
// Demangled: CCustomRoadsignMgr::CreateRoadsignAtomicA(float,float,int,char *,char *,char *,char *,int,uchar)
// attributes: thunk
int __fastcall CCustomRoadsignMgr::CreateRoadsignAtomicA(
        CCustomRoadsignMgr *this,
        float a2,
        float a3,
        int a4,
        char *a5,
        char *a6,
        char *a7,
        char *a8,
        int a9,
        unsigned __int8 a10)
{
  return _ZN18CCustomRoadsignMgr21CreateRoadsignAtomicAEffiPcS0_S0_S0_ih(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x5a5740
// Original: _ZN18CCustomRoadsignMgr10InitialiseEv
// Demangled: CCustomRoadsignMgr::Initialise(void)
int __fastcall CCustomRoadsignMgr::Initialise(CCustomRoadsignMgr *this, const char *a2)
{
  CTxdStore *TxdSlot; // r4
  const char *v3; // r2
  CTxdStore *v4; // r0

  TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"particle", a2);
  CTxdStore::PushCurrentTxd(TxdSlot);
  CTxdStore::SetCurrentTxd(TxdSlot, 0, v3);
  v4 = (CTxdStore *)RwTextureRead("roadsignfont", 0);
  *((_WORD *)v4 + 40) = 13057;
  CCustomRoadsignMgr::pCharsetTex = (int)v4;
  CTxdStore::PopCurrentTxd(v4);
  dword_A26A7C = RwRasterLock();
  return 1;
}


// ============================================================

// Address: 0x5a57b0
// Original: _ZN18CCustomRoadsignMgr8ShutdownEv
// Demangled: CCustomRoadsignMgr::Shutdown(void)
int *__fastcall CCustomRoadsignMgr::Shutdown(CCustomRoadsignMgr *this)
{
  int *result; // r0
  int v2; // r0

  result = (int *)CCustomRoadsignMgr::pCharsetTex;
  if ( CCustomRoadsignMgr::pCharsetTex )
  {
    if ( dword_A26A7C )
    {
      v2 = *(_DWORD *)CCustomRoadsignMgr::pCharsetTex;
      dword_A26A7C = 0;
      RwRasterUnlock(v2);
      result = (int *)CCustomRoadsignMgr::pCharsetTex;
    }
    RwTextureDestroy(result);
    result = &CCustomRoadsignMgr::pCharsetTex;
    CCustomRoadsignMgr::pCharsetTex = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5a5808
// Original: _ZN18CCustomRoadsignMgr10RenderTestERK7CVector
// Demangled: CCustomRoadsignMgr::RenderTest(CVector const&)
int __fastcall CCustomRoadsignMgr::RenderTest(CCustomRoadsignMgr *this, const CVector *a2)
{
  return 1;
}


// ============================================================

// Address: 0x5a580c
// Original: _ZN18CCustomRoadsignMgr24DebugDrawInternalTextureEv
// Demangled: CCustomRoadsignMgr::DebugDrawInternalTexture(void)
void __fastcall CCustomRoadsignMgr::DebugDrawInternalTexture(CCustomRoadsignMgr *this)
{
  ;
}


// ============================================================

// Address: 0x5a5810
// Original: _ZN18CCustomRoadsignMgr21CreateRoadsignTextureEPci
// Demangled: CCustomRoadsignMgr::CreateRoadsignTexture(char *,int)
int __fastcall CCustomRoadsignMgr::CreateRoadsignTexture(CCustomRoadsignMgr *this, char *a2, int a3)
{
  char *v4; // r11
  int v5; // r10
  int v6; // r4
  int v7; // r0
  int *v8; // r1
  int v9; // r9
  int v10; // r2
  bool v11; // zf
  int *v12; // r3
  CCustomRoadsignMgr *v13; // r8
  unsigned __int8 v14; // r1
  int v15; // r5
  int v16; // r1
  int v17; // r5
  int v18; // r1
  int v19; // r12
  int v20; // r6
  int v21; // r1
  int v22; // r5
  int v23; // r5
  int v24; // r1
  int v25; // r6
  char *v26; // r5
  int v27; // r5
  int v28; // r6
  int v29; // r1
  int v30; // r4
  char *v31; // r6
  int v32; // r6
  int v33; // r5
  int v34; // r1
  int v35; // r4
  char *v36; // r6
  int v37; // r5
  int v38; // r1
  int v39; // r4
  char *v40; // r6
  int v41; // r5
  int v42; // r1
  int v43; // r4
  char *v44; // r6
  int v45; // r5
  int v46; // r1
  int v47; // r4
  char *v48; // r6
  int v49; // r5
  int v50; // r1
  int v51; // r4
  char *v52; // r6
  int v53; // r5
  int v54; // r1
  int v55; // r4
  char *v56; // r6
  int v57; // r5
  int v58; // r1
  int v59; // r4
  char *v60; // r6
  int v61; // r5
  int v62; // r1
  int v63; // r4
  char *v64; // r6
  int v65; // r5
  int v66; // r1
  int v67; // r4
  char *v68; // r6
  int v69; // r5
  int v70; // r1
  int v71; // r4
  char *v72; // r6
  int v73; // r5
  int v74; // r1
  int v75; // r4
  char *v76; // r6
  int v77; // r5
  int v78; // r1
  int v79; // r4
  char *v80; // r6
  int v81; // r5
  int v82; // r1
  int v83; // r4
  char *v84; // r6
  int v85; // r6
  char *v87; // [sp+4h] [bp-34h]
  char v88[4]; // [sp+8h] [bp-30h] BYREF
  int v89; // [sp+Ch] [bp-2Ch]
  __int16 v90; // [sp+10h] [bp-28h]
  char v91; // [sp+12h] [bp-26h]

  v4 = a2;
  v5 = RwRasterCreate(8 * (_DWORD)a2, 16, 32, 5380);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)CCustomRoadsignMgr::pCharsetTex;
  if ( !*(_DWORD *)CCustomRoadsignMgr::pCharsetTex )
    goto LABEL_16;
  v7 = RwRasterLock();
  if ( !v7 )
    goto LABEL_16;
  v8 = &dword_A26A7C;
  v9 = dword_A26A7C;
  if ( !dword_A26A7C )
    goto LABEL_16;
  v10 = *(_DWORD *)(v6 + 24);
  v11 = v10 == 0;
  if ( v10 )
  {
    v8 = *(int **)(v5 + 24);
    v11 = v8 == 0;
  }
  if ( v11 )
    goto LABEL_16;
  v87 = (char *)this;
  if ( (int)v4 >= 1 )
  {
    v12 = v8 - 6;
    v13 = this;
    do
    {
      v14 = *(_BYTE *)v13 - 33;
      if ( v14 > 0x5Du )
      {
        v16 = 53248;
        v17 = 0;
      }
      else
      {
        v15 = (char)v14;
        v16 = dword_61F9E0[(char)v14];
        v17 = dword_61F860[v15];
      }
      v18 = v16 + v9;
      v19 = v7 + 24;
      v13 = (CCustomRoadsignMgr *)((char *)v13 + 1);
      --v4;
      v20 = *(_DWORD *)(v18 + v17);
      v21 = v18 + v17;
      v22 = *(_DWORD *)(v21 + 4);
      *(_DWORD *)v7 = v20;
      *(_DWORD *)(v7 + 4) = v22;
      *(_QWORD *)(v7 + 8) = *(_QWORD *)(v21 + 8);
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v21 + 16);
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(v21 + 24);
      v7 += 32;
      v23 = *(_DWORD *)(v21 + v10);
      v24 = v21 + v10;
      v25 = *(_DWORD *)(v24 + 4);
      *(int *)((char *)v12 + v19) = v23;
      v26 = (char *)v12 + v19;
      *((_DWORD *)v26 + 1) = v25;
      *((_QWORD *)v26 + 1) = *(_QWORD *)(v24 + 8);
      *((_QWORD *)v26 + 2) = *(_QWORD *)(v24 + 16);
      *((_QWORD *)v26 + 3) = *(_QWORD *)(v24 + 24);
      v27 = (int)v12 + v19 + 24;
      v28 = *(_DWORD *)(v24 + v10);
      v29 = v24 + v10;
      v30 = *(_DWORD *)(v29 + 4);
      *(int *)((char *)v12 + v27) = v28;
      v31 = (char *)v12 + v27;
      *((_DWORD *)v31 + 1) = v30;
      *((_QWORD *)v31 + 1) = *(_QWORD *)(v29 + 8);
      *((_QWORD *)v31 + 2) = *(_QWORD *)(v29 + 16);
      *((_QWORD *)v31 + 3) = *(_QWORD *)(v29 + 24);
      v32 = (int)v12 + v27 + 24;
      v33 = *(_DWORD *)(v29 + v10);
      v34 = v29 + v10;
      v35 = *(_DWORD *)(v34 + 4);
      *(int *)((char *)v12 + v32) = v33;
      v36 = (char *)v12 + v32;
      *((_DWORD *)v36 + 1) = v35;
      *((_QWORD *)v36 + 1) = *(_QWORD *)(v34 + 8);
      *((_QWORD *)v36 + 2) = *(_QWORD *)(v34 + 16);
      *((_QWORD *)v36 + 3) = *(_QWORD *)(v34 + 24);
      v36 += 24;
      v37 = *(_DWORD *)(v34 + v10);
      v38 = v34 + v10;
      v39 = *(_DWORD *)(v38 + 4);
      *(int *)((char *)v12 + (_DWORD)v36) = v37;
      v40 = (char *)v12 + (_DWORD)v36;
      *((_DWORD *)v40 + 1) = v39;
      *((_QWORD *)v40 + 1) = *(_QWORD *)(v38 + 8);
      *((_QWORD *)v40 + 2) = *(_QWORD *)(v38 + 16);
      *((_QWORD *)v40 + 3) = *(_QWORD *)(v38 + 24);
      v40 += 24;
      v41 = *(_DWORD *)(v38 + v10);
      v42 = v38 + v10;
      v43 = *(_DWORD *)(v42 + 4);
      *(int *)((char *)v12 + (_DWORD)v40) = v41;
      v44 = (char *)v12 + (_DWORD)v40;
      *((_DWORD *)v44 + 1) = v43;
      *((_QWORD *)v44 + 1) = *(_QWORD *)(v42 + 8);
      *((_QWORD *)v44 + 2) = *(_QWORD *)(v42 + 16);
      *((_QWORD *)v44 + 3) = *(_QWORD *)(v42 + 24);
      v44 += 24;
      v45 = *(_DWORD *)(v42 + v10);
      v46 = v42 + v10;
      v47 = *(_DWORD *)(v46 + 4);
      *(int *)((char *)v12 + (_DWORD)v44) = v45;
      v48 = (char *)v12 + (_DWORD)v44;
      *((_DWORD *)v48 + 1) = v47;
      *((_QWORD *)v48 + 1) = *(_QWORD *)(v46 + 8);
      *((_QWORD *)v48 + 2) = *(_QWORD *)(v46 + 16);
      *((_QWORD *)v48 + 3) = *(_QWORD *)(v46 + 24);
      v48 += 24;
      v49 = *(_DWORD *)(v46 + v10);
      v50 = v46 + v10;
      v51 = *(_DWORD *)(v50 + 4);
      *(int *)((char *)v12 + (_DWORD)v48) = v49;
      v52 = (char *)v12 + (_DWORD)v48;
      *((_DWORD *)v52 + 1) = v51;
      *((_QWORD *)v52 + 1) = *(_QWORD *)(v50 + 8);
      *((_QWORD *)v52 + 2) = *(_QWORD *)(v50 + 16);
      *((_QWORD *)v52 + 3) = *(_QWORD *)(v50 + 24);
      v52 += 24;
      v53 = *(_DWORD *)(v50 + v10);
      v54 = v50 + v10;
      v55 = *(_DWORD *)(v54 + 4);
      *(int *)((char *)v12 + (_DWORD)v52) = v53;
      v56 = (char *)v12 + (_DWORD)v52;
      *((_DWORD *)v56 + 1) = v55;
      *((_QWORD *)v56 + 1) = *(_QWORD *)(v54 + 8);
      *((_QWORD *)v56 + 2) = *(_QWORD *)(v54 + 16);
      *((_QWORD *)v56 + 3) = *(_QWORD *)(v54 + 24);
      v56 += 24;
      v57 = *(_DWORD *)(v54 + v10);
      v58 = v54 + v10;
      v59 = *(_DWORD *)(v58 + 4);
      *(int *)((char *)v12 + (_DWORD)v56) = v57;
      v60 = (char *)v12 + (_DWORD)v56;
      *((_DWORD *)v60 + 1) = v59;
      *((_QWORD *)v60 + 1) = *(_QWORD *)(v58 + 8);
      *((_QWORD *)v60 + 2) = *(_QWORD *)(v58 + 16);
      *((_QWORD *)v60 + 3) = *(_QWORD *)(v58 + 24);
      v60 += 24;
      v61 = *(_DWORD *)(v58 + v10);
      v62 = v58 + v10;
      v63 = *(_DWORD *)(v62 + 4);
      *(int *)((char *)v12 + (_DWORD)v60) = v61;
      v64 = (char *)v12 + (_DWORD)v60;
      *((_DWORD *)v64 + 1) = v63;
      *((_QWORD *)v64 + 1) = *(_QWORD *)(v62 + 8);
      *((_QWORD *)v64 + 2) = *(_QWORD *)(v62 + 16);
      *((_QWORD *)v64 + 3) = *(_QWORD *)(v62 + 24);
      v64 += 24;
      v65 = *(_DWORD *)(v62 + v10);
      v66 = v62 + v10;
      v67 = *(_DWORD *)(v66 + 4);
      *(int *)((char *)v12 + (_DWORD)v64) = v65;
      v68 = (char *)v12 + (_DWORD)v64;
      *((_DWORD *)v68 + 1) = v67;
      *((_QWORD *)v68 + 1) = *(_QWORD *)(v66 + 8);
      *((_QWORD *)v68 + 2) = *(_QWORD *)(v66 + 16);
      *((_QWORD *)v68 + 3) = *(_QWORD *)(v66 + 24);
      v68 += 24;
      v69 = *(_DWORD *)(v66 + v10);
      v70 = v66 + v10;
      v71 = *(_DWORD *)(v70 + 4);
      *(int *)((char *)v12 + (_DWORD)v68) = v69;
      v72 = (char *)v12 + (_DWORD)v68;
      *((_DWORD *)v72 + 1) = v71;
      *((_QWORD *)v72 + 1) = *(_QWORD *)(v70 + 8);
      *((_QWORD *)v72 + 2) = *(_QWORD *)(v70 + 16);
      *((_QWORD *)v72 + 3) = *(_QWORD *)(v70 + 24);
      v72 += 24;
      v73 = *(_DWORD *)(v70 + v10);
      v74 = v70 + v10;
      v75 = *(_DWORD *)(v74 + 4);
      *(int *)((char *)v12 + (_DWORD)v72) = v73;
      v76 = (char *)v12 + (_DWORD)v72;
      *((_DWORD *)v76 + 1) = v75;
      *((_QWORD *)v76 + 1) = *(_QWORD *)(v74 + 8);
      *((_QWORD *)v76 + 2) = *(_QWORD *)(v74 + 16);
      *((_QWORD *)v76 + 3) = *(_QWORD *)(v74 + 24);
      v76 += 24;
      v77 = *(_DWORD *)(v74 + v10);
      v78 = v74 + v10;
      v79 = *(_DWORD *)(v78 + 4);
      *(int *)((char *)v12 + (_DWORD)v76) = v77;
      v80 = (char *)v12 + (_DWORD)v76;
      *((_DWORD *)v80 + 1) = v79;
      *((_QWORD *)v80 + 1) = *(_QWORD *)(v78 + 8);
      *((_QWORD *)v80 + 2) = *(_QWORD *)(v78 + 16);
      *((_QWORD *)v80 + 3) = *(_QWORD *)(v78 + 24);
      v80 += 24;
      v81 = *(_DWORD *)(v78 + v10);
      v82 = v78 + v10;
      v83 = *(_DWORD *)(v82 + 4);
      *(int *)((char *)v12 + (_DWORD)v80) = v81;
      v84 = (char *)v12 + (_DWORD)v80;
      *((_DWORD *)v84 + 1) = v83;
      *((_QWORD *)v84 + 1) = *(_QWORD *)(v82 + 8);
      *((_QWORD *)v84 + 2) = *(_QWORD *)(v82 + 16);
      *((_QWORD *)v84 + 3) = *(_QWORD *)(v82 + 24);
    }
    while ( v4 );
  }
  RwRasterUnlock(v5);
  *(_WORD *)(v5 + 48) |= 0x200u;
  v85 = RwTextureCreate();
  if ( !v85 )
  {
LABEL_16:
    RwRasterDestroy();
    return 0;
  }
  *(_DWORD *)v88 = 0;
  v89 = 0;
  v91 = 0;
  v90 = 0;
  strncpy(v88, v87, 0xAu);
  RwTextureSetName();
  *(_BYTE *)(v85 + 80) = 2;
  return v85;
}


// ============================================================

// Address: 0x5a5bd0
// Original: _ZN18CCustomRoadsignMgr19SetupRoadsignAtomicEP8RpAtomicPci
// Demangled: CCustomRoadsignMgr::SetupRoadsignAtomic(RpAtomic *,char *,int)
int __fastcall CCustomRoadsignMgr::SetupRoadsignAtomic(int a1, CCustomRoadsignMgr *this, char *a3)
{
  int v4; // r5
  int RoadsignTexture; // r2

  v4 = *(_DWORD *)(a1 + 24);
  RoadsignTexture = CCustomRoadsignMgr::CreateRoadsignTexture(this, a3, (int)a3);
  if ( !RoadsignTexture )
    return 0;
  RpGeometryForAllMaterials(v4, sub_5A5BFC, RoadsignTexture);
  return a1;
}


// ============================================================

// Address: 0x5a5c0c
// Original: _ZN18CCustomRoadsignMgr14SetAtomicAlphaEP8RpAtomich
// Demangled: CCustomRoadsignMgr::SetAtomicAlpha(RpAtomic *,uchar)
int __fastcall CCustomRoadsignMgr::SetAtomicAlpha(int a1, int a2)
{
  RpGeometryForAllMaterials(*(_DWORD *)(a1 + 24), sub_5A5C28, a2);
  return a1;
}


// ============================================================

// Address: 0x5a5c30
// Original: _ZN18CCustomRoadsignMgr21CreateRoadsignAtomicAEffiPcS0_S0_S0_ih
// Demangled: CCustomRoadsignMgr::CreateRoadsignAtomicA(float,float,int,char *,char *,char *,char *,int,uchar)
// local variable allocation has failed, the output may be wrong!
int __fastcall CCustomRoadsignMgr::CreateRoadsignAtomicA(
        CCustomRoadsignMgr *this,
        float a2,
        int a3,
        int a4,
        char *a5,
        char *a6,
        char *a7,
        char *a8,
        char a9,
        unsigned __int8 a10)
{
  int v10; // r9
  int v11; // r11
  unsigned int v12; // r10
  _DWORD *v13; // r4
  char v14; // r0
  unsigned int v15; // r1
  int RoadsignTexture; // r6
  int v17; // r11
  float *v18; // r2
  unsigned int v19; // r3
  float v20; // s2
  float v21; // s4
  float v22; // s8
  int v23; // r0
  float v24; // s12
  float v25; // s5
  float v26; // s7
  float v27; // s9
  float v28; // s11
  float v29; // s9
  _QWORD *v30; // r0
  int v31; // r1
  _QWORD *v32; // r2
  _QWORD *v33; // r0
  int v34; // r6
  int v35; // r8
  __int64 v36; // d17
  int v37; // r5
  int v41; // [sp+Ch] [bp-54h]
  int v42; // [sp+Ch] [bp-54h]
  _QWORD v43[2]; // [sp+10h] [bp-50h] BYREF
  __int64 v44; // [sp+20h] [bp-40h]
  __int64 v45; // [sp+28h] [bp-38h]
  _DWORD v46[2]; // [sp+34h] [bp-2Ch]
  __int64 v47; // [sp+3Ch] [bp-24h]

  v10 = a3;
  v46[0] = a4;
  v46[1] = a5;
  v47 = *(_QWORD *)&a6;
  v44 = 0LL;
  v45 = 0LL;
  if ( a3 >= 1 )
  {
    v11 = 0;
    v12 = (unsigned __int8)(a9 - 1);
    v41 = 8 * v12;
    do
    {
      v13 = (_DWORD *)RpMaterialCreate();
      if ( !v13 )
        goto LABEL_33;
      CRGBA::CRGBA((CRGBA *)v43, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
      v14 = -1;
      if ( v12 < 3 )
        v14 = (a9 - 1) << 7;
      LOBYTE(v15) = -1;
      BYTE1(v43[0]) = v14;
      if ( v12 < 3 )
        v15 = 0xFF8000u >> v41;
      LOBYTE(v43[0]) = v15;
      BYTE2(v43[0]) = v14;
      v13[1] = v43[0];
      RoadsignTexture = CCustomRoadsignMgr::CreateRoadsignTexture((CCustomRoadsignMgr *)v46[v11], a8, v41);
      if ( !RoadsignTexture )
      {
        if ( (_DWORD)v44 )
          RpMaterialDestroy();
        if ( HIDWORD(v44) )
          RpMaterialDestroy();
        if ( (_DWORD)v45 )
          RpMaterialDestroy();
        if ( HIDWORD(v45) )
          RpMaterialDestroy();
        return 0;
      }
      RpMaterialSetTexture(v13, RoadsignTexture);
      RwTextureDestroy(RoadsignTexture);
      v13[3] = 1050253722;
      v13[4] = 1050253722;
      v13[5] = 1060320051;
      *((_DWORD *)&v44 + v11++) = v13;
    }
    while ( v11 < v10 );
  }
  v17 = RpGeometryCreate(4 * v10, 2 * v10, 0x4Eu);
  if ( !v17 )
  {
LABEL_33:
    if ( (_DWORD)v44 )
      RpMaterialDestroy();
    if ( HIDWORD(v44) )
      RpMaterialDestroy();
    if ( (_DWORD)v45 )
      RpMaterialDestroy();
    if ( HIDWORD(v45) )
      RpMaterialDestroy();
    return 0;
  }
  v42 = *(_DWORD *)(v17 + 96);
  if ( v10 >= 1 )
  {
    v18 = (float *)dword_5A6048;
    v19 = 0;
    v20 = a2 / (float)v10;
    v21 = v20 * 0.95;
    v22 = *(float *)&this * 0.0;
    v23 = *(_DWORD *)(v42 + 20);
    v24 = (float)(v20 * 0.95) * 0.0;
    v25 = (float)(*(float *)&this * -0.5) + (float)(*(float *)&this * 0.0);
    v26 = (float)(*(float *)&this * -0.5) + *(float *)&this;
    do
    {
      v27 = 0.0;
      *(_DWORD *)(v23 + 20) = 0;
      *(_DWORD *)(v23 + 8) = 0;
      *(_DWORD *)(v23 + 32) = 0;
      *(_DWORD *)(v23 + 44) = 0;
      *(float *)v23 = v22;
      *(float *)(v23 + 4) = v24;
      *(float *)(v23 + 12) = *(float *)&this;
      *(float *)(v23 + 16) = v24;
      *(float *)(v23 + 24) = *(float *)&this;
      *(float *)(v23 + 28) = v21;
      *(float *)(v23 + 36) = v22;
      *(float *)(v23 + 40) = v21;
      switch ( v10 )
      {
        case 1:
          v27 = v20 * -0.5;
          break;
        case 2:
          v27 = -v20;
          if ( v19 != 1 )
          {
            v27 = 0.0;
            if ( !v19 )
              v27 = v20 * 0.0;
          }
          break;
        case 3:
          v27 = 0.0;
          if ( v19 <= 2 )
            v27 = v20 * *v18;
          break;
        case 4:
          v27 = a2 / (float)v10;
          switch ( v19 )
          {
            case 1u:
              v27 = v20 * 0.0;
              break;
            case 2u:
              v27 = -v20;
              break;
            case 3u:
              v27 = v20 * -2.0;
              break;
            default:
              goto LABEL_25;
          }
          break;
        default:
          break;
      }
LABEL_25:
      v28 = v27 + v24;
      *(float *)v23 = v25;
      v29 = v27 + v21;
      *(_DWORD *)(v23 + 8) = 0;
      *(_DWORD *)(v23 + 20) = 0;
      ++v19;
      *(_DWORD *)(v23 + 32) = 0;
      ++v18;
      *(_DWORD *)(v23 + 44) = 0;
      *(float *)(v23 + 4) = v28;
      *(float *)(v23 + 12) = v26;
      *(float *)(v23 + 16) = v28;
      *(float *)(v23 + 24) = v26;
      *(float *)(v23 + 28) = v29;
      *(float *)(v23 + 36) = v25;
      *(float *)(v23 + 40) = v29;
      v23 += 48;
    }
    while ( v10 != v19 );
    v30 = *(_QWORD **)(v17 + 52);
    v31 = v10;
    do
    {
      v32 = v30 + 4;
      *v30 = 0x3F80000000000000LL;
      v30[1] = 0x3F8000003F800000LL;
      v33 = v30 + 2;
      --v31;
      *v33 = 1065353216LL;
      v33[1] = 0LL;
      v30 = v32;
    }
    while ( v31 );
    memset(*(void **)(v17 + 48), 255, 16 * v10);
    v34 = *(_DWORD *)(v17 + 44);
    v35 = 0;
    do
    {
      RpGeometryTriangleSetVertexIndices(
        v17,
        v34,
        (unsigned __int16)v35,
        (unsigned __int16)(v35 + 1),
        (unsigned __int16)(v35 + 2));
      RpGeometryTriangleSetMaterial();
      RpGeometryTriangleSetVertexIndices(
        v17,
        v34 + 8,
        (unsigned __int16)v35,
        (unsigned __int16)(v35 + 2),
        (unsigned __int16)(v35 + 3));
      RpGeometryTriangleSetMaterial();
      RpMaterialDestroy();
      v34 += 16;
      *(_DWORD *)((char *)&v44 + v35) = 0;
      --v10;
      v35 += 4;
    }
    while ( v10 );
  }
  RpMorphTargetCalcBoundingSphere();
  v36 = v43[1];
  *(_QWORD *)(v42 + 4) = v43[0];
  *(_QWORD *)(v42 + 12) = v36;
  RpGeometryUnlock();
  v37 = RpAtomicCreate();
  if ( !v37 )
  {
    if ( (_DWORD)v44 )
      RpMaterialDestroy();
    if ( HIDWORD(v44) )
      RpMaterialDestroy();
    if ( (_DWORD)v45 )
      RpMaterialDestroy();
    if ( HIDWORD(v45) )
      RpMaterialDestroy();
    RpGeometryDestroy();
    return 0;
  }
  if ( !RpAtomicSetGeometry() )
  {
    if ( (_DWORD)v44 )
      RpMaterialDestroy();
    if ( HIDWORD(v44) )
      RpMaterialDestroy();
    if ( (_DWORD)v45 )
      RpMaterialDestroy();
    if ( HIDWORD(v45) )
      RpMaterialDestroy();
    RpGeometryDestroy();
    RpAtomicDestroy();
    return 0;
  }
  RpGeometryDestroy();
  *(_BYTE *)(v37 + 2) = 4;
  RwFrameCreate();
  RwFrameSetIdentity();
  RpAtomicSetFrame();
  return v37;
}


// ============================================================

// Address: 0x5a6054
// Original: _ZN18CCustomRoadsignMgr20CreateRoadsignAtomicEffiPcS0_S0_S0_ih
// Demangled: CCustomRoadsignMgr::CreateRoadsignAtomic(float,float,int,char *,char *,char *,char *,int,uchar)
int __fastcall CCustomRoadsignMgr::CreateRoadsignAtomic(
        CCustomRoadsignMgr *this,
        float a2,
        float a3,
        _QWORD *a4,
        __int64 a5,
        char *a6,
        char *a7,
        int a8,
        unsigned __int8 a9)
{
  char *v9; // r4
  char *v10; // r5
  char *v11; // r6
  unsigned __int8 v13; // [sp+14h] [bp-34h]
  _QWORD v14[2]; // [sp+18h] [bp-30h] BYREF

  v9 = a6;
  v11 = (char *)HIDWORD(a5);
  v10 = (char *)a5;
  v14[0] = unk_61F850;
  v14[1] = unk_61F858;
  if ( !a6 )
    v9 = (char *)v14;
  if ( !HIDWORD(a5) )
    v11 = (char *)v14;
  if ( !(_DWORD)a5 )
    v10 = (char *)v14;
  if ( !a4 )
    a4 = v14;
  return CCustomRoadsignMgr::CreateRoadsignAtomicA(this, a2, a3, (int)a4, v10, v11, v9, a7, a8, v13);
}


// ============================================================

// Address: 0x5a60dc
// Original: _ZN18CCustomRoadsignMgr20RenderRoadsignAtomicEP8RpAtomicRK7CVector
// Demangled: CCustomRoadsignMgr::RenderRoadsignAtomic(RpAtomic *,CVector const&)
int __fastcall CCustomRoadsignMgr::RenderRoadsignAtomic(int a1, int a2)
{
  int v3; // r0
  float32x2_t v4; // d16
  unsigned __int64 v5; // d1
  float v6; // s0
  unsigned int v7; // r2
  int v8; // r0

  v3 = *(_DWORD *)(a1 + 4);
  v4.n64_u64[0] = vsub_f32(*(float32x2_t *)(a2 + 4), *(float32x2_t *)(v3 + 68)).n64_u64[0];
  v5 = vmul_f32(v4, v4).n64_u64[0];
  v6 = (float)((float)((float)(*(float *)a2 - *(float *)(v3 + 64)) * (float)(*(float *)a2 - *(float *)(v3 + 64)))
             + *(float *)&v5)
     + *((float *)&v5 + 1);
  if ( v6 <= 250000.0 )
  {
    if ( v6 >= 1600.0 )
    {
      v8 = *(_DWORD *)(a1 + 24);
      v7 = (unsigned int)(float)((float)((float)(250000.0 - v6) / 248400.0) * 254.0);
    }
    else
    {
      RwRenderStateSet(30, 100);
      v7 = 255;
      v8 = *(_DWORD *)(a1 + 24);
    }
    RpGeometryForAllMaterials(v8, sub_5A5C28, v7);
    (*(void (__fastcall **)(int))(a1 + 72))(a1);
  }
  return a1;
}


// ============================================================
