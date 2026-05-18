
// Address: 0x18c024
// Original: j__ZN11CWeaponInfo19GetWeaponReloadTimeEv
// Demangled: CWeaponInfo::GetWeaponReloadTime(void)
// attributes: thunk
int __fastcall CWeaponInfo::GetWeaponReloadTime(CWeaponInfo *this)
{
  return _ZN11CWeaponInfo19GetWeaponReloadTimeEv(this);
}


// ============================================================

// Address: 0x18c084
// Original: j__ZN11CWeaponInfo18GetTargetHeadRangeEv
// Demangled: CWeaponInfo::GetTargetHeadRange(void)
// attributes: thunk
int __fastcall CWeaponInfo::GetTargetHeadRange(CWeaponInfo *this)
{
  return _ZN11CWeaponInfo18GetTargetHeadRangeEv(this);
}


// ============================================================

// Address: 0x18ee1c
// Original: j__ZN11CWeaponInfo8ShutdownEv
// Demangled: CWeaponInfo::Shutdown(void)
// attributes: thunk
int __fastcall CWeaponInfo::Shutdown(CWeaponInfo *this)
{
  return _ZN11CWeaponInfo8ShutdownEv(this);
}


// ============================================================

// Address: 0x18f4b8
// Original: j__ZN11CWeaponInfo13GetWeaponInfoE11eWeaponTypea
// Demangled: CWeaponInfo::GetWeaponInfo(eWeaponType,signed char)
// attributes: thunk
int CWeaponInfo::GetWeaponInfo()
{
  return _ZN11CWeaponInfo13GetWeaponInfoE11eWeaponTypea();
}


// ============================================================

// Address: 0x192410
// Original: j__ZN11CWeaponInfo14FindWeaponTypeEPKc
// Demangled: CWeaponInfo::FindWeaponType(char const*)
// attributes: thunk
int __fastcall CWeaponInfo::FindWeaponType(CWeaponInfo *this, const char *a2)
{
  return _ZN11CWeaponInfo14FindWeaponTypeEPKc(this, a2);
}


// ============================================================

// Address: 0x197448
// Original: j__ZN11CWeaponInfo18FindWeaponFireTypeEPKc
// Demangled: CWeaponInfo::FindWeaponFireType(char const*)
// attributes: thunk
int __fastcall CWeaponInfo::FindWeaponFireType(CWeaponInfo *this, const char *a2)
{
  return _ZN11CWeaponInfo18FindWeaponFireTypeEPKc(this, a2);
}


// ============================================================

// Address: 0x199d64
// Original: j__ZN11CWeaponInfo10InitialiseEv
// Demangled: CWeaponInfo::Initialise(void)
// attributes: thunk
int __fastcall CWeaponInfo::Initialise(CWeaponInfo *this)
{
  return _ZN11CWeaponInfo10InitialiseEv(this);
}


// ============================================================

// Address: 0x19c934
// Original: j__ZN11CWeaponInfo17GetSkillStatIndexE11eWeaponType
// Demangled: CWeaponInfo::GetSkillStatIndex(eWeaponType)
// attributes: thunk
int CWeaponInfo::GetSkillStatIndex()
{
  return _ZN11CWeaponInfo17GetSkillStatIndexE11eWeaponType();
}


// ============================================================

// Address: 0x474648
// Original: _ZN11CWeaponInfo10InitialiseEv
// Demangled: CWeaponInfo::Initialise(void)
int __fastcall CWeaponInfo::Initialise(CWeaponInfo *this)
{
  int v1; // r4
  char *v2; // r5
  _QWORD *v3; // r6
  _QWORD *v4; // r6
  CWeaponInfo *v5; // r0

  v1 = 0;
  do
  {
    v2 = (char *)&aWeaponInfo + v1;
    *(_DWORD *)((char *)&aWeaponInfo + v1) = 0;
    v3 = (_QWORD *)((char *)&aWeaponInfo + v1 + 28);
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = 0;
    v1 += 112;
    *((_DWORD *)v2 + 3) = -1;
    *((_DWORD *)v2 + 4) = -1;
    *((_DWORD *)v2 + 5) = -1;
    *((_DWORD *)v2 + 6) = 0;
    *((_DWORD *)v2 + 11) = 0;
    *((_DWORD *)v2 + 12) = 1;
    *((_DWORD *)v2 + 13) = 0;
    *((_DWORD *)v2 + 14) = 1065353216;
    *((_DWORD *)v2 + 15) = 1065353216;
    *((_WORD *)v2 + 55) = 260;
    *v3 = 0LL;
    v3[1] = 0LL;
    *(_QWORD *)(v2 + 94) = 0LL;
    *(_QWORD *)(v2 + 102) = 0LL;
    v4 = v2 + 80;
    v2 += 64;
    *v4 = 0LL;
    v4[1] = 0LL;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
  }
  while ( v1 != 8960 );
  memset(&CWeaponInfo::ms_aWeaponAimOffsets, 0, 0x1F8u);
  return CWeaponInfo::LoadWeaponData(v5);
}


// ============================================================

// Address: 0x4746e0
// Original: _ZN11CWeaponInfo14LoadWeaponDataEv
// Demangled: CWeaponInfo::LoadWeaponData(void)
int __fastcall CWeaponInfo::LoadWeaponData(CWeaponInfo *this, int a2, const char *a3)
{
  int v3; // r8
  CFileLoader *v4; // r4
  unsigned int v5; // r1
  const char *Line; // r0
  unsigned int v7; // r1
  float32x4_t v8; // q4
  bool v9; // zf
  int v10; // r1
  int v11; // r8
  const char *AnimGroupName; // r0
  const char *v13; // r1
  int WeaponType; // r6
  const char *v15; // r1
  int WeaponFireType; // r0
  int v17; // r8
  int v18; // r11
  int v19; // r12
  int v20; // r1
  char *v21; // r6
  char *v22; // r1
  unsigned __int64 v23; // r2
  int v24; // r0
  int v25; // r0
  float *v26; // r1
  int v27; // r6
  const char *v28; // r0
  const char *v29; // r1
  int v30; // r0
  int v31; // r6
  int v32; // r0
  int v33; // r11
  double v34; // d16
  int v35; // r1
  char *v36; // r8
  int v37; // r0
  int v38; // s0
  int32x4_t v39; // q8
  int v40; // r0
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r0
  float *v45; // r1
  float *v46; // r8
  int v47; // r6
  const char *v48; // r0
  int v49; // r2
  int v50; // r0
  float v51; // s28
  float v52; // r0
  int v53; // r6
  float v54; // s28
  float v55; // r0
  float *v57; // [sp+70h] [bp-1B0h]
  float *v58; // [sp+74h] [bp-1ACh]
  float *v59; // [sp+78h] [bp-1A8h]
  int v60; // [sp+7Ch] [bp-1A4h]
  int v61; // [sp+BCh] [bp-164h]
  int v62; // [sp+BCh] [bp-164h]
  int v63; // [sp+C0h] [bp-160h] BYREF
  int v64; // [sp+C4h] [bp-15Ch] BYREF
  int v65; // [sp+C8h] [bp-158h] BYREF
  int v66; // [sp+CCh] [bp-154h] BYREF
  int v67; // [sp+D0h] [bp-150h] BYREF
  int v68; // [sp+D4h] [bp-14Ch] BYREF
  int v69; // [sp+D8h] [bp-148h] BYREF
  int v70; // [sp+DCh] [bp-144h] BYREF
  unsigned int v71; // [sp+E0h] [bp-140h] BYREF
  unsigned int v72; // [sp+E4h] [bp-13Ch] BYREF
  unsigned int v73; // [sp+E8h] [bp-138h] BYREF
  unsigned int v74; // [sp+ECh] [bp-134h] BYREF
  int v75; // [sp+F0h] [bp-130h] BYREF
  int v76; // [sp+F4h] [bp-12Ch] BYREF
  int v77; // [sp+F8h] [bp-128h] BYREF
  int v78; // [sp+FCh] [bp-124h] BYREF
  double v79; // [sp+100h] [bp-120h] BYREF
  int v80; // [sp+108h] [bp-118h] BYREF
  int v81; // [sp+10Ch] [bp-114h] BYREF
  int v82; // [sp+110h] [bp-110h] BYREF
  int v83; // [sp+114h] [bp-10Ch] BYREF
  int v84; // [sp+118h] [bp-108h] BYREF
  int v85; // [sp+11Ch] [bp-104h] BYREF
  int v86; // [sp+120h] [bp-100h] BYREF
  int v87; // [sp+124h] [bp-FCh] BYREF
  int v88; // [sp+128h] [bp-F8h] BYREF
  unsigned int v89; // [sp+12Ch] [bp-F4h] BYREF
  int v90; // [sp+130h] [bp-F0h] BYREF
  char *v91; // [sp+134h] [bp-ECh] BYREF
  int v92; // [sp+138h] [bp-E8h] BYREF
  char v93[32]; // [sp+13Ch] [bp-E4h] BYREF
  char v94[32]; // [sp+15Ch] [bp-C4h] BYREF
  _BYTE v95[32]; // [sp+17Ch] [bp-A4h] BYREF
  char v96[32]; // [sp+19Ch] [bp-84h] BYREF
  char v97; // [sp+1BCh] [bp-64h] BYREF
  int v98; // [sp+1C4h] [bp-5Ch]

  v4 = (CFileLoader *)CFileMgr::OpenFile((CFileMgr *)"DATA\\WEAPON.DAT", "rb", a3);
  Line = (const char *)CFileLoader::LoadLine(v4, v5);
  if ( !Line )
    goto LABEL_51;
  v8.n128_u64[0] = loc_474C80;
  v8.n128_u64[1] = loc_474C88;
  do
  {
    v61 = v3;
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)Line;
      v9 = v7 == 35;
      if ( v7 != 35 )
        v9 = v7 == 0;
      if ( v9 )
        goto LABEL_8;
      v96[0] = 0;
      v95[0] = 0;
      v94[0] = 0;
      v93[0] = 0;
      v10 = *(unsigned __int8 *)Line;
      if ( v10 == 37 )
      {
        sscanf(Line, "%s %s %f %f %f %f %d %d %d %d", &v97, v93, &v79, &v80, &v92, &v91, &v88, &v87, &v86, &v85);
        v11 = 0;
        if ( CAnimManager::ms_numAnimAssocDefinitions >= 1 )
        {
          do
          {
            AnimGroupName = (const char *)CAnimManager::GetAnimGroupName();
            if ( !strcmp(v93, AnimGroupName) )
              break;
            ++v11;
          }
          while ( v11 < CAnimManager::ms_numAnimAssocDefinitions );
        }
        v7 = (unsigned int)&CWeaponInfo::ms_aWeaponAimOffsets + 24 * v11;
        v3 = v61;
        *(_DWORD *)(v7 - 264) = LODWORD(v79);
        *(_DWORD *)(v7 - 260) = v80;
        *(_DWORD *)(v7 - 256) = v92;
        *(_DWORD *)(v7 - 252) = v91;
        *(_WORD *)(v7 - 248) = v88;
        *(_WORD *)(v7 - 246) = v87;
        *(_WORD *)(v7 - 244) = v86;
        *(_WORD *)(v7 - 242) = v85;
        goto LABEL_8;
      }
      if ( v10 == 36 )
        break;
      if ( v10 == 163 )
      {
        sscanf(
          Line,
          "%s %s %s %f %f %d %d %d %s %d %x %s",
          &v97,
          v96,
          v95,
          &v92,
          &v91,
          &v90,
          &v89,
          &v84,
          v94,
          &v83,
          &v67,
          v93);
        WeaponType = CWeaponInfo::FindWeaponType((CWeaponInfo *)v96, v13);
        WeaponFireType = CWeaponInfo::FindWeaponFireType((CWeaponInfo *)v95, v15);
        v17 = 7 * WeaponType;
        v18 = WeaponType;
        v19 = v92;
        v20 = 112 * WeaponType;
        v21 = (char *)&aWeaponInfo + 112 * WeaponType;
        *(_DWORD *)((char *)&aWeaponInfo + v20) = WeaponFireType;
        v22 = v91;
        v23 = __PAIR64__(v89, v90);
        v24 = v84;
        *((_DWORD *)v21 + 1) = v19;
        *((_DWORD *)v21 + 2) = v22;
        *(_QWORD *)(v21 + 12) = v23;
        *((_DWORD *)v21 + 5) = v24;
        v21[111] = v83;
        v21[110] = CTaskSimpleFight::GetComboType((CTaskSimpleFight *)v94, v22);
        *((_DWORD *)v21 + 6) = v67;
        v25 = strncmp(v93, "null", 4u);
        v26 = (float *)(&stderr + 1);
        if ( v25 && CAnimManager::ms_numAnimAssocDefinitions >= 1 )
        {
          v27 = 0;
          while ( 1 )
          {
            v28 = (const char *)CAnimManager::GetAnimGroupName();
            if ( !strcmp(v93, v28) )
              break;
            if ( ++v27 >= CAnimManager::ms_numAnimAssocDefinitions )
            {
              v26 = (float *)(&stderr + 1);
              goto LABEL_40;
            }
          }
          v26 = (float *)(&stderr + 1);
          *((_DWORD *)&aWeaponInfo + 4 * v17 + 7) = v27;
        }
LABEL_40:
        v3 = v61;
        v49 = v18;
        goto LABEL_47;
      }
      sscanf(Line, (const char *)&dword_474D2C, v96);
      if ( !strncmp(v96, "ENDWEAPONDATA", 0xDu) )
        goto LABEL_51;
LABEL_8:
      Line = (const char *)CFileLoader::LoadLine(v4, v7);
      if ( !Line )
        goto LABEL_51;
    }
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    sscanf(
      Line,
      "%s %s %s %f %f %d %d %d %s %d %d %f %f %f %d %d %f %f %d %d %d %d %d %d %d %x %f %f %f %f",
      &v97,
      v96,
      v95,
      &v92,
      &v91,
      &v90,
      &v89,
      &v84,
      v93,
      &v82,
      &v81,
      &v79,
      (char *)&v79 + 4,
      &v80,
      &v78,
      &v77,
      &v76,
      &v75,
      &v74,
      &v73,
      &v72,
      &v71,
      &v70,
      &v69,
      &v68,
      &v67,
      &v66,
      &v65,
      &v64,
      &v63);
    v30 = CWeaponInfo::FindWeaponType((CWeaponInfo *)v96, v29);
    v60 = v30;
    if ( (unsigned int)(v30 - 22) > 0xA )
    {
      v31 = 1;
      v78 = 1;
LABEL_32:
      v3 = v30;
    }
    else
    {
      v31 = v78;
      switch ( v78 )
      {
        case 0:
          v3 = v30 + 25;
          v31 = 0;
          break;
        case 1:
          v31 = 1;
          goto LABEL_32;
        case 2:
          v3 = v30 + 36;
          v31 = 2;
          break;
        case 3:
          v3 = v30 + 47;
          v31 = 3;
          break;
        default:
          break;
      }
    }
    v32 = CWeaponInfo::FindWeaponFireType((CWeaponInfo *)v95, (const char *)(v30 - 22));
    v33 = 7 * (__int16)v3;
    v62 = v3;
    v34 = v79;
    v35 = 112 * (__int16)v3;
    v36 = (char *)&aWeaponInfo + v35;
    *(_DWORD *)((char *)&aWeaponInfo + v35) = v32;
    *((_DWORD *)v36 + 1) = v92;
    *((_DWORD *)v36 + 2) = v91;
    *((_DWORD *)v36 + 3) = v90;
    *((_DWORD *)v36 + 4) = v89;
    *((_DWORD *)v36 + 5) = v84;
    *((_WORD *)v36 + 16) = v82;
    *((_WORD *)v36 + 17) = v81;
    *((_DWORD *)v36 + 11) = v80;
    *((_DWORD *)v36 + 12) = v31;
    v37 = v77;
    *(double *)(v36 + 36) = v34;
    *((_DWORD *)v36 + 13) = v37;
    *((_DWORD *)v36 + 14) = v76;
    *((_DWORD *)v36 + 15) = v75;
    v38 = v70;
    v39.n128_u64[1] = __PAIR64__(v71, v72);
    v39.n128_u64[0] = __PAIR64__(v73, v74);
    v58 = (float *)((char *)&aWeaponInfo + v35 + 64);
    *((float32x4_t *)v36 + 4) = vmulq_f32(vcvtq_f32_s32(v39), v8);
    *((float *)v36 + 20) = (float)v38 * 0.033333;
    *((float *)v36 + 21) = (float)v69 * 0.033333;
    v40 = v67;
    *((float *)v36 + 22) = (float)v68 * 0.033333;
    *((_DWORD *)v36 + 6) = v40;
    v41 = v65;
    v43 = v63;
    v42 = v64;
    *((_DWORD *)v36 + 23) = v66;
    *((_DWORD *)v36 + 24) = v41;
    *((_DWORD *)v36 + 25) = v42;
    *((_DWORD *)v36 + 26) = v43;
    v44 = strncmp(v93, "null", 4u);
    v59 = (float *)(v36 + 80);
    v45 = (float *)(v36 + 76);
    v46 = (float *)(v36 + 68);
    v57 = v45;
    if ( v44 && CAnimManager::ms_numAnimAssocDefinitions >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        v48 = (const char *)CAnimManager::GetAnimGroupName();
        if ( !strcmp(v93, v48) )
          break;
        if ( ++v47 >= CAnimManager::ms_numAnimAssocDefinitions )
          goto LABEL_42;
      }
      *((_DWORD *)&aWeaponInfo + 4 * v33 + 7) = v47;
    }
LABEL_42:
    v50 = *((_DWORD *)&aWeaponInfo + 4 * v33 + 7);
    if ( (unsigned int)(v50 - 11) <= 0x14 )
      *((_WORD *)&aWeaponInfo + 8 * v33 + 54) = v50 - 11;
    v51 = *v58;
    v52 = floorf((float)((float)(*v46 - *v58) / 0.02) + 0.1);
    v53 = v78;
    *v46 = v51 + (float)((float)(v52 * 0.02) + -0.006);
    v54 = *v57;
    v55 = floorf((float)((float)(*v59 - *v57) / 0.02) + 0.1);
    v49 = v60;
    *v59 = v54 + (float)((float)(v55 * 0.02) + -0.006);
    if ( v53 != 1 )
      LOBYTE(v53) = 0;
    v3 = v62;
    v26 = (float *)((v60 != 40) & (unsigned __int8)v53);
LABEL_47:
    if ( v26 == (float *)((char *)&stderr + 1) && v90 >= 1 )
    {
      v26 = CModelInfo::ms_modelInfoPtrs;
      *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v90]) + 60) = v49;
    }
    Line = (const char *)CFileLoader::LoadLine(v4, (unsigned int)v26);
  }
  while ( Line );
LABEL_51:
  CFileMgr::CloseFile(v4, v7);
  return _stack_chk_guard - v98;
}


// ============================================================

// Address: 0x474d48
// Original: _ZN11CWeaponInfo18FindWeaponFireTypeEPKc
// Demangled: CWeaponInfo::FindWeaponFireType(char const*)
int __fastcall CWeaponInfo::FindWeaponFireType(CWeaponInfo *this, const char *a2)
{
  int v3; // r1
  int result; // r0

  if ( !strcmp((const char *)this, "MELEE") )
    return 0;
  if ( !strcmp((const char *)this, "INSTANT_HIT") )
    return 1;
  if ( !strcmp((const char *)this, "PROJECTILE") )
    return 2;
  if ( !strcmp((const char *)this, "AREA_EFFECT") )
    return 3;
  if ( !strcmp((const char *)this, "CAMERA") )
    return 4;
  v3 = strcmp((const char *)this, "USE");
  result = 1;
  if ( !v3 )
    return 5;
  return result;
}


// ============================================================

// Address: 0x5e4294
// Original: _ZN11CWeaponInfo8ShutdownEv
// Demangled: CWeaponInfo::Shutdown(void)
void __fastcall CWeaponInfo::Shutdown(CWeaponInfo *this)
{
  ;
}


// ============================================================

// Address: 0x5e4298
// Original: _ZN11CWeaponInfo13GetWeaponInfoE11eWeaponTypea
// Demangled: CWeaponInfo::GetWeaponInfo(eWeaponType,signed char)
char *__fastcall CWeaponInfo::GetWeaponInfo(__int16 a1, int a2)
{
  switch ( a2 )
  {
    case 0:
      a1 += 25;
      break;
    case 1:
      return (char *)&aWeaponInfo + 112 * a1;
    case 2:
      a1 += 36;
      break;
    case 3:
      a1 += 47;
      break;
    default:
      a1 = 47;
      break;
  }
  return (char *)&aWeaponInfo + 112 * a1;
}


// ============================================================

// Address: 0x5e42c8
// Original: _ZN11CWeaponInfo17GetSkillStatIndexE11eWeaponType
// Demangled: CWeaponInfo::GetSkillStatIndex(eWeaponType)
int __fastcall CWeaponInfo::GetSkillStatIndex(int a1)
{
  int v2; // r1

  if ( (unsigned int)(a1 - 22) > 0xA )
    return -1;
  v2 = a1 + 47;
  if ( a1 > 31 )
    return 75;
  return v2;
}


// ============================================================

// Address: 0x5e42e4
// Original: _ZN11CWeaponInfo14FindWeaponTypeEPKc
// Demangled: CWeaponInfo::FindWeaponType(char const*)
int __fastcall CWeaponInfo::FindWeaponType(CWeaponInfo *this, const char *a2)
{
  int v3; // r4

  v3 = 0;
  while ( strcasecmp((const char *)this, CWeaponInfo::ms_aWeaponNames[v3]) )
  {
    if ( v3++ >= 48 )
      return 0;
  }
  return v3;
}


// ============================================================

// Address: 0x5e4318
// Original: _ZN11CWeaponInfo18GetTargetHeadRangeEv
// Demangled: CWeaponInfo::GetTargetHeadRange(void)
float __fastcall CWeaponInfo::GetTargetHeadRange(CWeaponInfo *this)
{
  return (float)(*((float *)this + 2) * 0.04) * (float)(*((_DWORD *)this + 12) + 2);
}


// ============================================================

// Address: 0x5e4340
// Original: _ZN11CWeaponInfo19GetWeaponReloadTimeEv
// Demangled: CWeaponInfo::GetWeaponReloadTime(void)
unsigned int __fastcall CWeaponInfo::GetWeaponReloadTime(CWeaponInfo *this)
{
  int v1; // r1
  unsigned int result; // r0
  int v3; // r1

  v1 = *((_DWORD *)this + 6);
  if ( (v1 & 0x1000) != 0 )
  {
    result = 1000;
    if ( (v1 & 0x800) != 0 )
      return 2000;
  }
  else if ( (v1 & 0x8000) != 0 )
  {
    return 1000;
  }
  else
  {
    v3 = 3 * *((__int16 *)this + 54);
    result = CWeaponInfo::ms_aWeaponAimOffsets[12 * *((__int16 *)this + 54) + 8] + 100;
    if ( result <= 0x190 )
    {
      result = CWeaponInfo::ms_aWeaponAimOffsets[4 * v3 + 10] + 100;
      if ( result <= 0x190 )
      {
        result = CWeaponInfo::ms_aWeaponAimOffsets[4 * v3 + 9] + 100;
        if ( result <= 0x190 )
        {
          result = CWeaponInfo::ms_aWeaponAimOffsets[4 * v3 + 11] + 100;
          if ( result <= 0x190 )
            return 400;
        }
      }
    }
  }
  return result;
}


// ============================================================
