
// Address: 0x1913b0
// Original: j__ZN8CClothes19GetDependentTextureEi
// Demangled: CClothes::GetDependentTexture(int)
// attributes: thunk
int __fastcall CClothes::GetDependentTexture(CClothes *this, int a2)
{
  return _ZN8CClothes19GetDependentTextureEi(this, a2);
}


// ============================================================

// Address: 0x191848
// Original: j__ZN8CClothes21RebuildCutscenePlayerEP10CPlayerPedi
// Demangled: CClothes::RebuildCutscenePlayer(CPlayerPed *,int)
// attributes: thunk
int __fastcall CClothes::RebuildCutscenePlayer(CClothes *this, CPlayerPed *a2, int a3)
{
  return _ZN8CClothes21RebuildCutscenePlayerEP10CPlayerPedi(this, a2, a3);
}


// ============================================================

// Address: 0x195304
// Original: j__ZN8CClothes4InitEv
// Demangled: CClothes::Init(void)
// attributes: thunk
int __fastcall CClothes::Init(CClothes *this)
{
  return _ZN8CClothes4InitEv(this);
}


// ============================================================

// Address: 0x1984a4
// Original: j__ZN8CClothes20GetTextureDependencyEi
// Demangled: CClothes::GetTextureDependency(int)
// attributes: thunk
int __fastcall CClothes::GetTextureDependency(CClothes *this, int a2)
{
  return _ZN8CClothes20GetTextureDependencyEi(this, a2);
}


// ============================================================

// Address: 0x1995c8
// Original: j__ZN8CClothes23RequestMotionGroupAnimsEv
// Demangled: CClothes::RequestMotionGroupAnims(void)
// attributes: thunk
int __fastcall CClothes::RequestMotionGroupAnims(CClothes *this)
{
  return _ZN8CClothes23RequestMotionGroupAnimsEv(this);
}


// ============================================================

// Address: 0x19a2b4
// Original: j__ZN8CClothes17ConstructPedModelEjR15CPedClothesDescPKS0_b
// Demangled: CClothes::ConstructPedModel(uint,CPedClothesDesc &,CPedClothesDesc const*,bool)
// attributes: thunk
int __fastcall CClothes::ConstructPedModel(
        CClothes *this,
        unsigned int a2,
        CPedClothesDesc *a3,
        const CPedClothesDesc *a4,
        bool a5)
{
  return _ZN8CClothes17ConstructPedModelEjR15CPedClothesDescPKS0_b(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19b628
// Original: j__ZN8CClothes27GetDefaultPlayerMotionGroupEv
// Demangled: CClothes::GetDefaultPlayerMotionGroup(void)
// attributes: thunk
int __fastcall CClothes::GetDefaultPlayerMotionGroup(CClothes *this)
{
  return _ZN8CClothes27GetDefaultPlayerMotionGroupEv(this);
}


// ============================================================

// Address: 0x19c6cc
// Original: j__ZN8CClothes21RebuildPlayerIfNeededEP10CPlayerPed
// Demangled: CClothes::RebuildPlayerIfNeeded(CPlayerPed *)
// attributes: thunk
int __fastcall CClothes::RebuildPlayerIfNeeded(CClothes *this, CPlayerPed *a2)
{
  return _ZN8CClothes21RebuildPlayerIfNeededEP10CPlayerPed(this, a2);
}


// ============================================================

// Address: 0x19da50
// Original: j__ZN8CClothes13RebuildPlayerEP10CPlayerPedb
// Demangled: CClothes::RebuildPlayer(CPlayerPed *,bool)
// attributes: thunk
int __fastcall CClothes::RebuildPlayer(CClothes *this, CPlayerPed *a2, bool a3)
{
  return _ZN8CClothes13RebuildPlayerEP10CPlayerPedb(this, a2, a3);
}


// ============================================================

// Address: 0x4573a0
// Original: _ZN8CClothes20GetTextureDependencyEi
// Demangled: CClothes::GetTextureDependency(int)
int __fastcall CClothes::GetTextureDependency(unsigned int this, int a2)
{
  if ( this <= 0x11 )
    return dword_619040[this];
  else
    return 10;
}


// ============================================================

// Address: 0x45751c
// Original: _ZN8CClothes13RebuildPlayerEP10CPlayerPedb
// Demangled: CClothes::RebuildPlayer(CPlayerPed *,bool)
void *__fastcall CClothes::RebuildPlayer(CClothes *this, CPlayerPed *a2, bool a3)
{
  int TaskSecondary; // r0
  CEntity *v6; // r1
  unsigned __int16 v7; // r1
  int v8; // r5
  int v9; // r5
  unsigned __int16 v10; // r1
  bool v12; // [sp+0h] [bp-10h]

  RpAnimBlendClumpExtractAssociations();
  TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)this + 272) + 4), 5);
  if ( TaskSecondary )
    (*(void (__fastcall **)(int, CClothes *, int, _DWORD))(*(_DWORD *)TaskSecondary + 28))(TaskSecondary, this, 2, 0);
  (*(void (__fastcall **)(CClothes *))(*(_DWORD *)this + 36))(this);
  CWorld::Remove(this, v6);
  if ( !a2 )
  {
    v8 = *(_DWORD *)(*((_DWORD *)this + 273) + 4);
    *(_DWORD *)(v8 + 112) = CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), v7);
    v9 = *(_DWORD *)(*((_DWORD *)this + 273) + 4);
    *(_DWORD *)(v9 + 116) = CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), v10);
  }
  CClothes::ConstructPedModel(
    (CClothes *)*((__int16 *)this + 19),
    *(_DWORD *)(*((_DWORD *)this + 273) + 4),
    (CPedClothesDesc *)&unk_9A74B8,
    0,
    v12);
  CPed::Dress(this);
  RpAnimBlendClumpGiveAssociations();
  return memcpy_0(&unk_9A74B8, *(const void **)(*((_DWORD *)this + 273) + 4), 0x78u);
}


// ============================================================

// Address: 0x4579c4
// Original: _ZN8CClothes4InitEv
// Demangled: CClothes::Init(void)
int __fastcall CClothes::Init(CClothes *this)
{
  unsigned int v1; // r2
  int *v2; // r0
  int *v3; // r1
  int *v4; // r4
  int v5; // r4

  v1 = -18;
  v2 = dword_619090;
  v3 = &dword_9A74E0;
  do
  {
    v4 = v3;
    if ( v1 + 18 < v1 )
    {
      v4 = v3;
      if ( ((unsigned int)&stru_3E008.st_value + 3) >> (v1 + 18) << 31 )
      {
        v5 = *v2;
        *v3 = -1;
        v4 = (int *)((char *)&unk_9A74B8 + 4 * v5);
      }
    }
    ++v3;
    ++v2;
    ++v1;
    *v4 = -1;
  }
  while ( v1 );
  CClothes::ms_numRuleTags = 0;
  CClothes::ms_clothesImageId = CStreaming::AddImageToList((CStreaming *)"TEXDB\\PLAYER.IMG", 0, 0);
  return CClothes::LoadClothesFile((CClothes *)CClothes::ms_clothesImageId);
}


// ============================================================

// Address: 0x457a60
// Original: _ZN8CClothes15LoadClothesFileEv
// Demangled: CClothes::LoadClothesFile(void)
int __fastcall CClothes::LoadClothesFile(CClothes *this, int a2, const char *a3)
{
  _BOOL4 v3; // r8
  CFileLoader *v4; // r4
  unsigned int v5; // r1
  const char *v6; // r1
  char *Line; // r11
  const char *v8; // r10
  int v9; // r0
  char *v10; // r11
  char *v11; // r5
  CKeyGen *v12; // r0
  const char *v13; // r1
  int v14; // r0
  int v15; // r11
  int ClothesModelFromName; // r0
  int v17; // r5
  const char *v18; // r1
  int v19; // r2
  const char *v20; // r10
  int UppercaseKey; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r0
  bool v26; // zf
  char *v27; // r0
  const char *v28; // r5
  char *v30; // [sp+0h] [bp-68h]
  int v31; // [sp+4h] [bp-64h]
  char *v32; // [sp+8h] [bp-60h]
  char *v33; // [sp+48h] [bp-20h]

  v3 = 0;
  CClothes::ms_numRuleTags = 0;
  v4 = (CFileLoader *)CFileMgr::OpenFile((CFileMgr *)"DATA\\CLOTHES.DAT", "r", a3);
  Line = (char *)CFileLoader::LoadLine(v4, v5);
  if ( Line )
  {
    v6 = (const char *)&CClothes::ms_clothesRules;
    v33 = (char *)CClothes::ms_clothesRules;
    do
    {
      v25 = (unsigned __int8)*Line;
      v26 = v25 == 0;
      if ( *Line )
        v26 = v25 == 35;
      if ( !v26 )
      {
        if ( v3 )
        {
          if ( !strncmp("end", Line, 3u) )
          {
            v3 = 0;
          }
          else
          {
            v27 = strtok(Line, " \t,");
            v28 = v27;
            if ( v27 )
            {
              if ( !strcasecmp(v27, "cuts") )
              {
                v8 = 0;
              }
              else if ( !strcasecmp(v28, "setc") )
              {
                v8 = (_BYTE *)(&stderr + 1);
              }
              else if ( !strcasecmp(v28, "tex") )
              {
                v8 = (_BYTE *)(&stderr + 2);
              }
              else if ( !strcasecmp(v28, "hide") )
              {
                v8 = (_BYTE *)(&stderr + 3);
              }
              else if ( !strcasecmp(v28, "ignore") )
              {
                v8 = &byte_5;
              }
              else if ( !strcasecmp(v28, "endignore") )
              {
                v8 = byte_4;
              }
              else if ( !strcasecmp(v28, "exclusive") )
              {
                v8 = &byte_7;
              }
              else
              {
                v8 = v33;
                if ( !strcasecmp(v28, "endexclusive") )
                  v8 = byte_6;
              }
              v9 = CClothes::ms_numRuleTags++;
              CClothes::ms_clothesRules[v9] = v8;
              v10 = strtok(0, " \t,");
              v11 = strtok(0, " \t,");
              v33 = (char *)v8;
              v6 = v8;
              switch ( (unsigned int)v8 )
              {
                case 0u:
                case 2u:
                  UppercaseKey = CKeyGen::GetUppercaseKey((CKeyGen *)v10, v8);
                  v6 = (const char *)CClothes::ms_numRuleTags++;
                  CClothes::ms_clothesRules[(_DWORD)v6] = UppercaseKey;
                  v12 = (CKeyGen *)v11;
                  goto LABEL_31;
                case 1u:
                  v32 = strtok(0, " \t,");
                  v30 = strtok(0, " \t,");
                  v14 = CKeyGen::GetUppercaseKey((CKeyGen *)v10, v13);
                  v15 = CClothes::ms_numRuleTags++;
                  v31 = CClothes::ms_numRuleTags;
                  CClothes::ms_clothesRules[v15] = v14;
                  ClothesModelFromName = GetClothesModelFromName(v11);
                  v17 = v15 + 2;
                  CClothes::ms_numRuleTags = v15 + 2;
                  CClothes::ms_clothesRules[v31] = ClothesModelFromName;
                  if ( !strcmp((const char *)&dword_457DC8, v32) )
                  {
                    v20 = v30;
                    v19 = 0;
                  }
                  else
                  {
                    v19 = CKeyGen::GetUppercaseKey((CKeyGen *)v32, v18);
                    v20 = v30;
                    v17 = CClothes::ms_numRuleTags;
                  }
                  CClothes::ms_numRuleTags = v17 + 1;
                  CClothes::ms_clothesRules[v17] = v19;
                  if ( !strcmp((const char *)&dword_457DC8, v20) )
                  {
                    v24 = 0;
                  }
                  else
                  {
                    v12 = (CKeyGen *)v20;
LABEL_31:
                    v24 = CKeyGen::GetUppercaseKey(v12, v6);
                  }
LABEL_32:
                  v6 = (const char *)CClothes::ms_numRuleTags++;
                  CClothes::ms_clothesRules[(_DWORD)v6] = v24;
                  break;
                case 3u:
                  v22 = CKeyGen::GetUppercaseKey((CKeyGen *)v10, v8);
                  v23 = CClothes::ms_numRuleTags++;
                  CClothes::ms_clothesRules[v23] = v22;
                  v24 = GetClothesModelFromName(v11);
                  goto LABEL_32;
                case 4u:
                case 5u:
                case 6u:
                case 7u:
                  v12 = (CKeyGen *)v10;
                  goto LABEL_31;
                default:
                  break;
              }
            }
          }
        }
        else
        {
          v3 = strncmp("rule", Line, 4u) == 0;
        }
      }
      Line = (char *)CFileLoader::LoadLine(v4, (unsigned int)v6);
    }
    while ( Line );
  }
  return j_CFileMgr::CloseFile(v4, (unsigned int)v6);
}


// ============================================================

// Address: 0x457df8
// Original: _ZN8CClothes21RebuildCutscenePlayerEP10CPlayerPedi
// Demangled: CClothes::RebuildCutscenePlayer(CPlayerPed *,int)
int __fastcall CClothes::RebuildCutscenePlayer(CClothes *this, CPlayerPed *a2, int a3, int a4, bool a5)
{
  int v7; // r6
  int v8; // r6
  unsigned __int16 v9; // r1

  v7 = *(_DWORD *)(*((_DWORD *)this + 273) + 4);
  *(_DWORD *)(v7 + 112) = CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), (unsigned __int16)a2);
  v8 = *(_DWORD *)(*((_DWORD *)this + 273) + 4);
  *(_DWORD *)(v8 + 116) = CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), v9);
  return CClothes::ConstructPedModel(
           a2,
           *(_DWORD *)(*((_DWORD *)this + 273) + 4),
           0,
           (const CPedClothesDesc *)((char *)&stderr + 1),
           a5);
}


// ============================================================

// Address: 0x457e38
// Original: _ZN8CClothes17ConstructPedModelEjR15CPedClothesDescPKS0_b
// Demangled: CClothes::ConstructPedModel(uint,CPedClothesDesc &,CPedClothesDesc const*,bool)
int __fastcall CClothes::ConstructPedModel(
        CClothes *this,
        int a2,
        CPedClothesDesc *a3,
        const CPedClothesDesc *a4,
        bool a5)
{
  float v9; // r4
  int v10; // r6
  int v11; // r1
  CClothes *SkinnedClump; // r0
  CClothes *v13; // r5
  bool v14; // r1

  CTimer::Suspend(this);
  v9 = CModelInfo::ms_modelInfoPtrs[(_DWORD)this];
  v10 = *(_DWORD *)(LODWORD(v9) + 52);
  v11 = *(_DWORD *)(*(_DWORD *)CTxdStore::ms_pTxdPool + 56 * *(__int16 *)(LODWORD(v9) + 32));
  if ( !v11 )
  {
    v11 = RwTexDictionaryCreate();
    *(_DWORD *)(*(_DWORD *)CTxdStore::ms_pTxdPool + 56 * *(__int16 *)(LODWORD(v9) + 32)) = v11;
  }
  SkinnedClump = (CClothes *)CClothesBuilder::CreateSkinnedClump(v10, v11, a2, (int)a3, (int)a4);
  v13 = SkinnedClump;
  if ( SkinnedClump )
  {
    CClothes::RequestMotionGroupAnims(SkinnedClump);
    CBaseModelInfo::AddTexDictionaryRef((CBaseModelInfo *)LODWORD(v9));
    (*(void (__fastcall **)(float))(*(_DWORD *)LODWORD(v9) + 36))(COERCE_FLOAT(LODWORD(v9)));
    (*(void (__fastcall **)(float, CClothes *))(*(_DWORD *)LODWORD(v9) + 68))(COERCE_FLOAT(LODWORD(v9)), v13);
    CBaseModelInfo::RemoveTexDictionaryRef((CBaseModelInfo *)LODWORD(v9));
    SkinnedClump = (CClothes *)CStreaming::LoadAllRequestedModels((CStreaming *)((char *)&stderr + 1), v14);
  }
  return sub_19F7CC(SkinnedClump);
}


// ============================================================

// Address: 0x457ee4
// Original: _ZN8CClothes21RebuildPlayerIfNeededEP10CPlayerPed
// Demangled: CClothes::RebuildPlayerIfNeeded(CPlayerPed *)
float __fastcall CClothes::RebuildPlayerIfNeeded(CClothes *this, CPlayerPed *a2)
{
  float v3; // s16
  unsigned __int16 v4; // r1
  bool v5; // r2
  float v6; // s16
  float result; // r0

  v3 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 273) + 4) + 112);
  if ( v3 != COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), (unsigned __int16)a2)) )
    return COERCE_FLOAT(CClothes::RebuildPlayer(this, 0, v5));
  v6 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 273) + 4) + 116);
  result = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), v4));
  if ( v6 != result )
    return COERCE_FLOAT(CClothes::RebuildPlayer(this, 0, v5));
  return result;
}


// ============================================================

// Address: 0x457f40
// Original: _ZN8CClothes23RequestMotionGroupAnimsEv
// Demangled: CClothes::RequestMotionGroupAnims(void)
int __fastcall CClothes::RequestMotionGroupAnims(CClothes *this, unsigned __int16 a2)
{
  const char *v2; // r1
  float v3; // s18
  unsigned __int16 v4; // r1
  int v5; // r4
  const char *v6; // r1
  int v7; // r5
  int v8; // r2
  int v9; // r1
  CStreaming *v10; // r0
  float v11; // s18
  const char *v12; // r1
  int AnimationBlockIndex; // r4
  const char *v14; // r1
  CStreaming *v15; // r0
  int v16; // r1
  int v17; // r2

  if ( COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), a2)) <= 500.0
    || (v3 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), (unsigned __int16)v2)),
        v3 >= COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), v4))) )
  {
    v11 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), (unsigned __int16)v2));
    AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)&dword_457FEC, v12);
    v15 = (CStreaming *)(CAnimManager::GetAnimationBlockIndex((CAnimManager *)"muscular", v14) + 25575);
    if ( v11 <= 500.0 )
      CStreaming::SetModelIsDeletable(v15, v16);
    else
      CStreaming::RequestModel(v15, 18, v17);
    v10 = (CStreaming *)(AnimationBlockIndex + 25575);
  }
  else
  {
    v5 = CAnimManager::GetAnimationBlockIndex((CAnimManager *)&dword_457FEC, v2);
    v7 = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"muscular", v6);
    CStreaming::RequestModel((CStreaming *)(v5 + 25575), 18, v8);
    v10 = (CStreaming *)(v7 + 25575);
  }
  return j_CStreaming::SetModelIsDeletable(v10, v9);
}


// ============================================================

// Address: 0x457ffc
// Original: _ZN8CClothes26GetPlayerMotionGroupToLoadEv
// Demangled: CClothes::GetPlayerMotionGroupToLoad(void)
int __fastcall CClothes::GetPlayerMotionGroupToLoad(CClothes *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // r1
  float v3; // s18
  unsigned __int16 v4; // r1
  int result; // r0
  float v6; // s0

  if ( COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), a2)) > 500.0 )
  {
    v3 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), v2));
    if ( v3 < COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), v4)) )
      return 55;
  }
  v6 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), v2));
  result = 54;
  if ( v6 > 500.0 )
    return 56;
  return result;
}


// ============================================================

// Address: 0x458064
// Original: _ZN8CClothes19GetDependentTextureEi
// Demangled: CClothes::GetDependentTexture(int)
int __fastcall CClothes::GetDependentTexture(unsigned int this, int a2)
{
  if ( this <= 9 )
    return dword_458074[this];
  else
    return 18;
}


// ============================================================

// Address: 0x45809c
// Original: _ZN8CClothes27GetDefaultPlayerMotionGroupEv
// Demangled: CClothes::GetDefaultPlayerMotionGroup(void)
int __fastcall CClothes::GetDefaultPlayerMotionGroup(CClothes *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // r1
  float v3; // s18
  unsigned __int16 v4; // r1
  int result; // r0
  int v6; // r1
  bool v7; // zf

  if ( COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), a2)) <= 500.0
    || (v3 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), v2)),
        v3 >= COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), v4))) )
  {
    if ( COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), v2)) <= 500.0 )
      return 54;
    result = 56;
  }
  else
  {
    result = 55;
  }
  v6 = *(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * result);
  v7 = v6 == 0;
  if ( v6 )
    v7 = *(_BYTE *)(v6 + 16) == 0;
  if ( v7 )
    return 54;
  return result;
}


// ============================================================
