
// Address: 0x189e30
// Original: j__ZN15CClumpModelInfo8SetClumpEP7RpClump
// Demangled: CClumpModelInfo::SetClump(RpClump *)
// attributes: thunk
int CClumpModelInfo::SetClump()
{
  return _ZN15CClumpModelInfo8SetClumpEP7RpClump();
}


// ============================================================

// Address: 0x18ab18
// Original: j__ZN15CClumpModelInfo14FillFrameArrayEP7RpClumpPP7RwFrame
// Demangled: CClumpModelInfo::FillFrameArray(RpClump *,RwFrame **)
// attributes: thunk
int CClumpModelInfo::FillFrameArray(void)
{
  return _ZN15CClumpModelInfo14FillFrameArrayEP7RpClumpPP7RwFrame();
}


// ============================================================

// Address: 0x18dd14
// Original: j__ZN15CClumpModelInfo14GetFrameFromIdEP7RpClumpi
// Demangled: CClumpModelInfo::GetFrameFromId(RpClump *,int)
// attributes: thunk
int CClumpModelInfo::GetFrameFromId()
{
  return _ZN15CClumpModelInfo14GetFrameFromIdEP7RpClumpi();
}


// ============================================================

// Address: 0x18e620
// Original: j__ZN15CClumpModelInfo16GetFrameFromNameEP7RpClumpPKc
// Demangled: CClumpModelInfo::GetFrameFromName(RpClump *,char const*)
// attributes: thunk
int CClumpModelInfo::GetFrameFromName()
{
  return _ZN15CClumpModelInfo16GetFrameFromNameEP7RpClumpPKc();
}


// ============================================================

// Address: 0x19323c
// Original: j__ZN15CClumpModelInfo11SetFrameIdsEP24RwObjectNameIdAssocation
// Demangled: CClumpModelInfo::SetFrameIds(RwObjectNameIdAssocation *)
// attributes: thunk
int CClumpModelInfo::SetFrameIds()
{
  return _ZN15CClumpModelInfo11SetFrameIdsEP24RwObjectNameIdAssocation();
}


// ============================================================

// Address: 0x193d80
// Original: j__ZN15CClumpModelInfo4InitEv
// Demangled: CClumpModelInfo::Init(void)
// attributes: thunk
int __fastcall CClumpModelInfo::Init(CClumpModelInfo *this)
{
  return _ZN15CClumpModelInfo4InitEv(this);
}


// ============================================================

// Address: 0x194840
// Original: j__ZN15CClumpModelInfo14CreateInstanceEv
// Demangled: CClumpModelInfo::CreateInstance(void)
// attributes: thunk
int __fastcall CClumpModelInfo::CreateInstance(CClumpModelInfo *this)
{
  return _ZN15CClumpModelInfo14CreateInstanceEv(this);
}


// ============================================================

// Address: 0x19cb88
// Original: j__ZN15CClumpModelInfo14DeleteRwObjectEv
// Demangled: CClumpModelInfo::DeleteRwObject(void)
// attributes: thunk
int __fastcall CClumpModelInfo::DeleteRwObject(CClumpModelInfo *this)
{
  return _ZN15CClumpModelInfo14DeleteRwObjectEv(this);
}


// ============================================================

// Address: 0x3851ba
// Original: _ZN15CClumpModelInfo4InitEv
// Demangled: CClumpModelInfo::Init(void)
int __fastcall CClumpModelInfo::Init(CClumpModelInfo *this)
{
  int result; // r0

  CBaseModelInfo::Init(this);
  result = -1;
  *((_DWORD *)this + 14) = -1;
  return result;
}


// ============================================================

// Address: 0x3851cc
// Original: _ZN15CClumpModelInfo8ShutdownEv
// Demangled: CClumpModelInfo::Shutdown(void)
// attributes: thunk
int __fastcall CClumpModelInfo::Shutdown(CBaseModelInfo *this)
{
  return sub_18AC60(this);
}


// ============================================================

// Address: 0x3851d0
// Original: _ZN15CClumpModelInfo14DeleteRwObjectEv
// Demangled: CClumpModelInfo::DeleteRwObject(void)
int __fastcall CClumpModelInfo::DeleteRwObject(CClumpModelInfo *this)
{
  int result; // r0
  int v3; // r0
  int *v4; // r0
  int v5; // r0
  __int64 v6; // r0

  result = *((_DWORD *)this + 13);
  if ( result )
  {
    v3 = Get2DEffectAtomic();
    if ( v3 )
    {
      v4 = *(int **)(*(_DWORD *)(v3 + 24) + g2dEffectPluginOffset);
      if ( v4 )
        v5 = *v4;
      else
        LOBYTE(v5) = 0;
      *((_BYTE *)this + 35) -= v5;
    }
    RpClumpDestroy();
    *((_DWORD *)this + 13) = 0;
    CBaseModelInfo::RemoveTexDictionaryRef(this);
    if ( (*(int (__fastcall **)(CClumpModelInfo *))(*(_DWORD *)this + 60))(this) != -1 )
    {
      v6 = ((__int64 (__fastcall *)(CClumpModelInfo *))*(_DWORD *)(*(_DWORD *)this + 60))(this);
      CAnimManager::RemoveAnimBlockRef((CAnimManager *)v6, SHIDWORD(v6));
    }
    result = *((unsigned __int8 *)this + 41) << 28;
    if ( (*((_BYTE *)this + 41) & 8) != 0 )
      return sub_19DCD4(this);
  }
  return result;
}


// ============================================================

// Address: 0x385244
// Original: _ZN15CClumpModelInfo8SetClumpEP7RpClump
// Demangled: CClumpModelInfo::SetClump(RpClump *)
int __fastcall CClumpModelInfo::SetClump(int a1, int a2)
{
  int v4; // r0
  int *v5; // r0
  int v6; // r0
  int v7; // r0
  int *v8; // r0
  int v9; // r0
  __int64 v10; // r0
  int result; // r0
  int FirstAtomic; // r0
  _DWORD *AnimHierarchyFromClump; // r8
  int v14; // r6
  int v15; // r9
  int v16; // r5
  int v17; // r6
  float *v18; // r0
  float v19; // s0
  float v20; // s2
  float v21; // s6
  float v22; // s8
  float v23; // s4

  if ( *(_DWORD *)(a1 + 52) )
  {
    v4 = Get2DEffectAtomic();
    if ( v4 )
    {
      v5 = *(int **)(*(_DWORD *)(v4 + 24) + g2dEffectPluginOffset);
      if ( v5 )
        v6 = *v5;
      else
        LOBYTE(v6) = 0;
      *(_BYTE *)(a1 + 35) -= v6;
    }
  }
  *(_DWORD *)(a1 + 52) = a2;
  if ( a2 )
  {
    v7 = Get2DEffectAtomic();
    if ( v7 )
    {
      v8 = *(int **)(*(_DWORD *)(v7 + 24) + g2dEffectPluginOffset);
      if ( v8 )
        v9 = *v8;
      else
        LOBYTE(v9) = 0;
      *(_BYTE *)(a1 + 35) += v9;
    }
  }
  CVisibilityPlugins::SetClumpModelInfo();
  CBaseModelInfo::AddTexDictionaryRef((CBaseModelInfo *)a1);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 60))(a1) != -1 )
  {
    v10 = ((__int64 (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 60))(a1);
    CAnimManager::AddAnimBlockRef((CAnimManager *)v10, SHIDWORD(v10));
  }
  RpClumpForAllAtomics(a2, sub_3853D0, a1);
  result = GetFirstAtomic();
  if ( result )
  {
    result = j_RpSkinGeometryGetSkin();
    if ( result )
    {
      if ( (*(_BYTE *)(a1 + 41) & 2) != 0 )
      {
        return sub_18E45C();
      }
      else
      {
        FirstAtomic = GetFirstAtomic();
        *(float *)(*(_DWORD *)(*(_DWORD *)(FirstAtomic + 24) + 96) + 16) = *(float *)(*(_DWORD *)(*(_DWORD *)(FirstAtomic + 24)
                                                                                                + 96)
                                                                                    + 16)
                                                                         * 1.2;
        AnimHierarchyFromClump = (_DWORD *)GetAnimHierarchyFromClump(a2);
        RpClumpForAllAtomics(a2, sub_3853FA, AnimHierarchyFromClump);
        v14 = GetFirstAtomic();
        j_RpSkinGeometryGetSkin();
        v15 = *(_DWORD *)(v14 + 24);
        if ( j_RpSkinGetVertexBoneWeights() && *(int *)(v15 + 20) >= 1 )
        {
          v16 = 0;
          v17 = 8;
          do
          {
            v18 = (float *)(j_RpSkinGetVertexBoneWeights() + v17);
            v17 += 16;
            ++v16;
            v19 = *(v18 - 2);
            v20 = *(v18 - 1);
            v21 = v18[1];
            v22 = (float)((float)(v19 + v20) + *v18) + v21;
            v23 = *v18 / v22;
            *(v18 - 2) = v19 / v22;
            *(v18 - 1) = v20 / v22;
            *v18 = v23;
            v18[1] = v21 / v22;
          }
          while ( v16 < *(_DWORD *)(v15 + 20) );
        }
        result = 12288;
        *AnimHierarchyFromClump = 12288;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x385420
// Original: _ZN15CClumpModelInfo14CreateInstanceEP11RwMatrixTag
// Demangled: CClumpModelInfo::CreateInstance(RwMatrixTag *)
int __fastcall CClumpModelInfo::CreateInstance(_DWORD *a1, __int64 *a2)
{
  int result; // r0
  __int64 v4; // d19
  _QWORD *v5; // r2
  __int64 v6; // d16
  __int64 v7; // d17
  __int64 v8; // d22
  __int64 v9; // d23
  __int64 v10; // d20
  __int64 v11; // d21

  if ( !a1[13] )
    return 0;
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  v4 = a2[7];
  v5 = *(_QWORD **)(result + 4);
  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  v10 = a2[4];
  v11 = a2[5];
  v5[8] = a2[6];
  v5[9] = v4;
  v5[6] = v10;
  v5[7] = v11;
  v5[4] = v8;
  v5[5] = v9;
  v5[2] = v6;
  v5[3] = v7;
  return result;
}


// ============================================================

// Address: 0x385474
// Original: _ZN15CClumpModelInfo14CreateInstanceEv
// Demangled: CClumpModelInfo::CreateInstance(void)
int __fastcall CClumpModelInfo::CreateInstance(CClumpModelInfo *this)
{
  int v2; // r5
  _DWORD *AnimHierarchyFromClump; // r6

  if ( !*((_DWORD *)this + 13) )
    return 0;
  CBaseModelInfo::AddRef(this);
  v2 = RpClumpClone();
  if ( GetFirstAtomic() && j_RpSkinGeometryGetSkin() && (*((_BYTE *)this + 41) & 2) == 0 )
  {
    AnimHierarchyFromClump = (_DWORD *)GetAnimHierarchyFromClump(v2);
    RpClumpForAllAtomics(v2, sub_3853FA, AnimHierarchyFromClump);
    RpAnimBlendCreateAnimationForHierarchy();
    RtAnimInterpolatorSetCurrentAnim();
    *AnimHierarchyFromClump = 12288;
  }
  if ( *((unsigned __int8 *)this + 41) << 31 )
  {
    RpAnimBlendClumpInit();
    if ( CAnimManager::GetAnimation() )
      CAnimManager::BlendAnimation();
  }
  CBaseModelInfo::RemoveRef(this);
  return v2;
}


// ============================================================

// Address: 0x38551c
// Original: _ZN15CClumpModelInfo11SetAnimFileEPKc
// Demangled: CClumpModelInfo::SetAnimFile(char const*)
char *__fastcall CClumpModelInfo::SetAnimFile(CClumpModelInfo *this, const char *a2)
{
  char *result; // r0
  size_t v5; // r0
  char *v6; // r0

  result = (char *)strcasecmp(a2, "null");
  if ( result )
  {
    v5 = strlen(a2);
    v6 = (char *)operator new[](v5 + 1);
    *((_DWORD *)this + 14) = v6;
    return j_strcpy(v6, a2);
  }
  return result;
}


// ============================================================

// Address: 0x385554
// Original: _ZN15CClumpModelInfo20ConvertAnimFileIndexEv
// Demangled: CClumpModelInfo::ConvertAnimFileIndex(void)
void __fastcall CClumpModelInfo::ConvertAnimFileIndex(CClumpModelInfo *this)
{
  char *v2; // r0
  int AnimationBlockIndex; // r5
  void *v4; // r0

  v2 = (char *)*((_DWORD *)this + 14);
  if ( v2 != (char *)-1 )
  {
    AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)v2, v2 + 1);
    v4 = (void *)*((_DWORD *)this + 14);
    if ( v4 )
      operator delete[](v4);
    *((_DWORD *)this + 14) = AnimationBlockIndex;
  }
}


// ============================================================

// Address: 0x385576
// Original: _ZN15CClumpModelInfo19SetAtomicRendererCBEP8RpAtomicPv
// Demangled: CClumpModelInfo::SetAtomicRendererCB(RpAtomic *,void *)
int __fastcall CClumpModelInfo::SetAtomicRendererCB(int a1)
{
  CVisibilityPlugins::SetAtomicRenderCallback();
  return a1;
}


// ============================================================

// Address: 0x385584
// Original: _ZN15CClumpModelInfo19FindFrameFromNameCBEP7RwFramePv
// Demangled: CClumpModelInfo::FindFrameFromNameCB(RwFrame *,void *)
int __fastcall CClumpModelInfo::FindFrameFromNameCB(int a1, int a2)
{
  const char *v4; // r6
  const char *FrameNodeName; // r0

  v4 = *(const char **)a2;
  FrameNodeName = (const char *)GetFrameNodeName();
  if ( !strcasecmp(v4, FrameNodeName) )
  {
    *(_DWORD *)(a2 + 4) = a1;
    return 0;
  }
  else
  {
    RwFrameForAllChildren(a1, CClumpModelInfo::FindFrameFromNameCB, a2);
    if ( *(_DWORD *)(a2 + 4) )
      return 0;
  }
  return a1;
}


// ============================================================

// Address: 0x3855c8
// Original: _ZN15CClumpModelInfo28FindFrameFromNameWithoutIdCBEP7RwFramePv
// Demangled: CClumpModelInfo::FindFrameFromNameWithoutIdCB(RwFrame *,void *)
int __fastcall CClumpModelInfo::FindFrameFromNameWithoutIdCB(int a1, int a2)
{
  const char *v4; // r6
  const char *FrameNodeName; // r0

  if ( !CVisibilityPlugins::GetFrameHierarchyId()
    && (v4 = *(const char **)a2, FrameNodeName = (const char *)GetFrameNodeName(a1), !strcasecmp(v4, FrameNodeName)) )
  {
    *(_DWORD *)(a2 + 4) = a1;
    return 0;
  }
  else
  {
    RwFrameForAllChildren(a1, CClumpModelInfo::FindFrameFromNameWithoutIdCB, a2);
    if ( *(_DWORD *)(a2 + 4) )
      return 0;
  }
  return a1;
}


// ============================================================

// Address: 0x385614
// Original: _ZN15CClumpModelInfo17FindFrameFromIdCBEP7RwFramePv
// Demangled: CClumpModelInfo::FindFrameFromIdCB(RwFrame *,void *)
int __fastcall CClumpModelInfo::FindFrameFromIdCB(int a1, int *a2)
{
  int v4; // r6

  v4 = *a2;
  if ( v4 == CVisibilityPlugins::GetFrameHierarchyId() )
  {
    a2[1] = a1;
    return 0;
  }
  else
  {
    RwFrameForAllChildren(a1, CClumpModelInfo::FindFrameFromIdCB, a2);
    if ( a2[1] )
      return 0;
  }
  return a1;
}


// ============================================================

// Address: 0x385654
// Original: _ZN15CClumpModelInfo16FillFrameArrayCBEP7RwFramePv
// Demangled: CClumpModelInfo::FillFrameArrayCB(RwFrame *,void *)
int __fastcall CClumpModelInfo::FillFrameArrayCB(int a1, int a2)
{
  int FrameHierarchyId; // r0

  FrameHierarchyId = CVisibilityPlugins::GetFrameHierarchyId();
  if ( FrameHierarchyId >= 1 )
    *(_DWORD *)(a2 + 4 * FrameHierarchyId) = a1;
  RwFrameForAllChildren(a1, CClumpModelInfo::FillFrameArrayCB, a2);
  return a1;
}


// ============================================================

// Address: 0x385680
// Original: _ZN15CClumpModelInfo14GetFrameFromIdEP7RpClumpi
// Demangled: CClumpModelInfo::GetFrameFromId(RpClump *,int)
int __fastcall CClumpModelInfo::GetFrameFromId(int a1, int a2)
{
  int v3; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+4h] [bp-Ch]

  v3 = a2;
  v4 = 0;
  RwFrameForAllChildren(*(_DWORD *)(a1 + 4), CClumpModelInfo::FindFrameFromIdCB, &v3);
  return v4;
}


// ============================================================

// Address: 0x3856a4
// Original: _ZN15CClumpModelInfo16GetFrameFromNameEP7RpClumpPKc
// Demangled: CClumpModelInfo::GetFrameFromName(RpClump *,char const*)
int __fastcall CClumpModelInfo::GetFrameFromName(int a1, int a2)
{
  int v3; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+4h] [bp-Ch]

  v3 = a2;
  v4 = 0;
  RwFrameForAllChildren(*(_DWORD *)(a1 + 4), CClumpModelInfo::FindFrameFromNameCB, &v3);
  return v4;
}


// ============================================================

// Address: 0x3856c8
// Original: _ZN15CClumpModelInfo14FillFrameArrayEP7RpClumpPP7RwFrame
// Demangled: CClumpModelInfo::FillFrameArray(RpClump *,RwFrame **)
int CClumpModelInfo::FillFrameArray()
{
  return sub_19707C();
}


// ============================================================

// Address: 0x3856dc
// Original: _ZN15CClumpModelInfo11SetFrameIdsEP24RwObjectNameIdAssocation
// Demangled: CClumpModelInfo::SetFrameIds(RwObjectNameIdAssocation *)
int __fastcall CClumpModelInfo::SetFrameIds(int a1, _DWORD *a2)
{
  int result; // r0
  unsigned __int8 *v4; // r6
  int v5; // [sp+0h] [bp-20h] BYREF
  int v6; // [sp+4h] [bp-1Ch]

  result = *a2;
  if ( *a2 )
  {
    v4 = (unsigned __int8 *)(a2 + 2);
    do
    {
      if ( !(*v4 << 31) )
      {
        v6 = 0;
        v5 = *((_DWORD *)v4 - 2);
        RwFrameForAllChildren(*(_DWORD *)(*(_DWORD *)(a1 + 52) + 4), CClumpModelInfo::FindFrameFromNameWithoutIdCB, &v5);
        if ( v6 )
          CVisibilityPlugins::SetFrameHierarchyId();
      }
      result = *((_DWORD *)v4 + 1);
      v4 += 12;
    }
    while ( result );
  }
  return result;
}


// ============================================================

// Address: 0x38573c
// Original: _ZN15CClumpModelInfoD0Ev
// Demangled: CClumpModelInfo::~CClumpModelInfo()
// attributes: thunk
void __fastcall CClumpModelInfo::~CClumpModelInfo(CClumpModelInfo *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x385740
// Original: _ZN15CClumpModelInfo12GetModelTypeEv
// Demangled: CClumpModelInfo::GetModelType(void)
int __fastcall CClumpModelInfo::GetModelType(CClumpModelInfo *this)
{
  return 5;
}


// ============================================================

// Address: 0x385744
// Original: _ZN15CClumpModelInfo14GetRwModelTypeEv
// Demangled: CClumpModelInfo::GetRwModelType(void)
int __fastcall CClumpModelInfo::GetRwModelType(CClumpModelInfo *this)
{
  return 2;
}


// ============================================================

// Address: 0x385748
// Original: _ZN15CClumpModelInfo16GetAnimFileIndexEv
// Demangled: CClumpModelInfo::GetAnimFileIndex(void)
int __fastcall CClumpModelInfo::GetAnimFileIndex(CClumpModelInfo *this)
{
  return *((_DWORD *)this + 14);
}


// ============================================================

// Address: 0x38574c
// Original: _ZN15CClumpModelInfo14GetBoundingBoxEv
// Demangled: CClumpModelInfo::GetBoundingBox(void)
int __fastcall CClumpModelInfo::GetBoundingBox(CClumpModelInfo *this)
{
  return *((_DWORD *)this + 11);
}


// ============================================================
