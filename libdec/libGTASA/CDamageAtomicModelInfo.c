
// Address: 0x18ed38
// Original: j__ZN22CDamageAtomicModelInfo16SetDamagedAtomicEP8RpAtomic
// Demangled: CDamageAtomicModelInfo::SetDamagedAtomic(RpAtomic *)
// attributes: thunk
int CDamageAtomicModelInfo::SetDamagedAtomic()
{
  return _ZN22CDamageAtomicModelInfo16SetDamagedAtomicEP8RpAtomic();
}


// ============================================================

// Address: 0x384dc0
// Original: _ZN22CDamageAtomicModelInfo4InitEv
// Demangled: CDamageAtomicModelInfo::Init(void)
int __fastcall CDamageAtomicModelInfo::Init(CDamageAtomicModelInfo *this)
{
  int result; // r0

  CBaseModelInfo::Init(this);
  result = 0;
  *((_DWORD *)this + 14) = 0;
  return result;
}


// ============================================================

// Address: 0x384dd0
// Original: _ZN22CDamageAtomicModelInfo16SetDamagedAtomicEP8RpAtomic
// Demangled: CDamageAtomicModelInfo::SetDamagedAtomic(RpAtomic *)
int __fastcall CDamageAtomicModelInfo::SetDamagedAtomic(int a1, int a2)
{
  int result; // r0

  *(_DWORD *)(a1 + 56) = a2;
  if ( CCustomBuildingRenderer::IsCBPCPipelineAttached() )
    return j_CCustomBuildingRenderer::AtomicSetup();
  result = CCarFXRenderer::IsCCPCPipelineAttached();
  if ( result )
    return j_CCarFXRenderer::SetCustomFXAtomicRenderPipelinesVMICB();
  return result;
}


// ============================================================

// Address: 0x384e04
// Original: _ZN22CDamageAtomicModelInfo14CreateInstanceEP11RwMatrixTag
// Demangled: CDamageAtomicModelInfo::CreateInstance(RwMatrixTag *)
int __fastcall CDamageAtomicModelInfo::CreateInstance(CBaseModelInfo *this, __int64 *a2)
{
  int v4; // r4
  _QWORD *v5; // r1
  __int64 v6; // d16
  __int64 v7; // d17
  __int64 v8; // d19
  __int64 v9; // d22
  __int64 v10; // d23
  __int64 v11; // d20
  __int64 v12; // d21
  _QWORD *v13; // r1
  __int64 v14; // d16
  __int64 v15; // d17
  __int64 v16; // d19
  __int64 v17; // d22
  __int64 v18; // d23
  __int64 v19; // d20
  __int64 v20; // d21

  if ( !CDamageAtomicModelInfo::m_bCreateDamagedVersion )
  {
    if ( *((_DWORD *)this + 13) )
    {
      CBaseModelInfo::AddRef(this);
      v4 = RpAtomicClone();
      v13 = (_QWORD *)RwFrameCreate();
      v14 = *a2;
      v15 = a2[1];
      v16 = a2[7];
      v17 = a2[2];
      v18 = a2[3];
      v19 = a2[4];
      v20 = a2[5];
      v13[8] = a2[6];
      v13[9] = v16;
      v13[6] = v19;
      v13[7] = v20;
      v13[2] = v14;
      v13[3] = v15;
      v13[4] = v17;
      v13[5] = v18;
      RpAtomicSetFrame();
      CBaseModelInfo::RemoveRef(this);
      return v4;
    }
    return 0;
  }
  if ( !*((_DWORD *)this + 14) )
    return 0;
  v4 = RpAtomicClone();
  v5 = (_QWORD *)RwFrameCreate();
  v6 = *a2;
  v7 = a2[1];
  v8 = a2[7];
  v9 = a2[2];
  v10 = a2[3];
  v11 = a2[4];
  v12 = a2[5];
  v5[8] = a2[6];
  v5[9] = v8;
  v5[6] = v11;
  v5[7] = v12;
  v5[2] = v6;
  v5[3] = v7;
  v5[4] = v9;
  v5[5] = v10;
  RpAtomicSetFrame();
  return v4;
}


// ============================================================

// Address: 0x384edc
// Original: _ZN22CDamageAtomicModelInfo14CreateInstanceEv
// Demangled: CDamageAtomicModelInfo::CreateInstance(void)
int __fastcall CDamageAtomicModelInfo::CreateInstance(CDamageAtomicModelInfo *this)
{
  int v2; // r4
  int v4; // r4

  if ( CDamageAtomicModelInfo::m_bCreateDamagedVersion )
  {
    if ( *((_DWORD *)this + 14) )
    {
      v2 = RpAtomicClone();
      RwFrameCreate();
      RpAtomicSetFrame();
      return v2;
    }
  }
  else if ( *((_DWORD *)this + 13) )
  {
    CBaseModelInfo::AddRef(this);
    v4 = RpAtomicClone();
    RwFrameCreate();
    RpAtomicSetFrame();
    CBaseModelInfo::RemoveRef(this);
    return v4;
  }
  return 0;
}


// ============================================================

// Address: 0x384f38
// Original: _ZN22CDamageAtomicModelInfo14DeleteRwObjectEv
// Demangled: CDamageAtomicModelInfo::DeleteRwObject(void)
int __fastcall CDamageAtomicModelInfo::DeleteRwObject(CDamageAtomicModelInfo *this)
{
  if ( *((_DWORD *)this + 14) )
  {
    RpAtomicDestroy();
    RwFrameDestroy();
    *((_DWORD *)this + 14) = 0;
  }
  return CAtomicModelInfo::DeleteRwObject(this);
}


// ============================================================

// Address: 0x384f80
// Original: _ZN22CDamageAtomicModelInfoD0Ev
// Demangled: CDamageAtomicModelInfo::~CDamageAtomicModelInfo()
// attributes: thunk
void __fastcall CDamageAtomicModelInfo::~CDamageAtomicModelInfo(CDamageAtomicModelInfo *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x384f84
// Original: _ZN22CDamageAtomicModelInfo26AsDamageAtomicModelInfoPtrEv
// Demangled: CDamageAtomicModelInfo::AsDamageAtomicModelInfoPtr(void)
void __fastcall CDamageAtomicModelInfo::AsDamageAtomicModelInfoPtr(CDamageAtomicModelInfo *this)
{
  ;
}


// ============================================================
