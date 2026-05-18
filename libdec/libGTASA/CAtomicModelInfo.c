
// Address: 0x199d34
// Original: j__ZN16CAtomicModelInfo24SetupVehicleUpgradeFlagsEPKc
// Demangled: CAtomicModelInfo::SetupVehicleUpgradeFlags(char const*)
// attributes: thunk
int __fastcall CAtomicModelInfo::SetupVehicleUpgradeFlags(CAtomicModelInfo *this, const char *a2)
{
  return _ZN16CAtomicModelInfo24SetupVehicleUpgradeFlagsEPKc(this, a2);
}


// ============================================================

// Address: 0x19fce4
// Original: j__ZN16CAtomicModelInfo4InitEv
// Demangled: CAtomicModelInfo::Init(void)
// attributes: thunk
int __fastcall CAtomicModelInfo::Init(CAtomicModelInfo *this)
{
  return _ZN16CAtomicModelInfo4InitEv(this);
}


// ============================================================

// Address: 0x3848bc
// Original: _ZN16CAtomicModelInfo9SetAtomicEP8RpAtomic
// Demangled: CAtomicModelInfo::SetAtomic(RpAtomic *)
int __fastcall CAtomicModelInfo::SetAtomic(CBaseModelInfo *this, int a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r0
  int *v7; // r1
  int v8; // r1
  int *v9; // r0
  int v10; // r0
  __int64 v11; // r0
  int v12; // r0
  int result; // r0

  v4 = *((_DWORD *)this + 13);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 24);
    v6 = g2dEffectPluginOffset;
    v7 = *(int **)(v5 + g2dEffectPluginOffset);
    if ( v7 )
      v8 = *v7;
    else
      LOBYTE(v8) = 0;
    *((_BYTE *)this + 35) -= v8;
  }
  else
  {
    v6 = g2dEffectPluginOffset;
  }
  *((_DWORD *)this + 13) = a2;
  v9 = *(int **)(*(_DWORD *)(a2 + 24) + v6);
  if ( v9 )
    v10 = *v9;
  else
    LOBYTE(v10) = 0;
  *((_BYTE *)this + 35) += v10;
  CBaseModelInfo::AddTexDictionaryRef(this);
  if ( (*(int (__fastcall **)(CBaseModelInfo *))(*(_DWORD *)this + 60))(this) != -1 )
  {
    v11 = ((__int64 (__fastcall *)(CBaseModelInfo *))*(_DWORD *)(*(_DWORD *)this + 60))(this);
    CAnimManager::AddAnimBlockRef((CAnimManager *)v11, SHIDWORD(v11));
  }
  if ( CCustomBuildingRenderer::IsCBPCPipelineAttached() )
  {
    CCustomBuildingRenderer::AtomicSetup(a2);
  }
  else if ( CCarFXRenderer::IsCCPCPipelineAttached() )
  {
    CCarFXRenderer::SetCustomFXAtomicRenderPipelinesVMICB(a2, 0);
  }
  v12 = *((unsigned __int16 *)this + 20);
  if ( (v12 & 0xF800) == 0x3000 )
  {
    CTagManager::SetupAtomic();
    v12 = *((unsigned __int16 *)this + 20);
  }
  result = v12 | 1;
  *((_WORD *)this + 20) = result;
  return result;
}


// ============================================================

// Address: 0x38496c
// Original: _ZN16CAtomicModelInfo4InitEv
// Demangled: CAtomicModelInfo::Init(void)
// attributes: thunk
int __fastcall CAtomicModelInfo::Init(CBaseModelInfo *this)
{
  return sub_1914E4(this);
}


// ============================================================

// Address: 0x384970
// Original: _ZN16CAtomicModelInfo14DeleteRwObjectEv
// Demangled: CAtomicModelInfo::DeleteRwObject(void)
int __fastcall CAtomicModelInfo::DeleteRwObject(CAtomicModelInfo *this)
{
  int result; // r0
  int *v3; // r1
  int v4; // r1
  __int64 v5; // r0

  result = *((_DWORD *)this + 13);
  if ( result )
  {
    v3 = *(int **)(*(_DWORD *)(result + 24) + g2dEffectPluginOffset);
    if ( v3 )
      v4 = *v3;
    else
      LOBYTE(v4) = 0;
    *((_BYTE *)this + 35) -= v4;
    RpAtomicDestroy();
    RwFrameDestroy();
    *((_DWORD *)this + 13) = 0;
    CBaseModelInfo::RemoveTexDictionaryRef(this);
    result = (*(int (__fastcall **)(CAtomicModelInfo *))(*(_DWORD *)this + 60))(this) + 1;
    if ( result )
    {
      v5 = ((__int64 (__fastcall *)(CAtomicModelInfo *))*(_DWORD *)(*(_DWORD *)this + 60))(this);
      return sub_18ABA4((CAnimManager *)v5, SHIDWORD(v5));
    }
  }
  return result;
}


// ============================================================

// Address: 0x3849dc
// Original: _ZN16CAtomicModelInfo21GetAtomicFromDistanceEf
// Demangled: CAtomicModelInfo::GetAtomicFromDistance(float)
int __fastcall CAtomicModelInfo::GetAtomicFromDistance(CAtomicModelInfo *this, float a2)
{
  if ( (float)(*((float *)this + 12) * unk_952094) <= a2 )
    return 0;
  else
    return *((_DWORD *)this + 13);
}


// ============================================================

// Address: 0x384a08
// Original: _ZN16CAtomicModelInfo14CreateInstanceEP11RwMatrixTag
// Demangled: CAtomicModelInfo::CreateInstance(RwMatrixTag *)
int __fastcall CAtomicModelInfo::CreateInstance(CBaseModelInfo *this, __int64 *a2)
{
  int v4; // r5
  _QWORD *v5; // r1
  __int64 v6; // d16
  __int64 v7; // d17
  __int64 v8; // d19
  __int64 v9; // d22
  __int64 v10; // d23
  __int64 v11; // d20
  __int64 v12; // d21

  if ( !*((_DWORD *)this + 13) )
    return 0;
  CBaseModelInfo::AddRef(this);
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
  CBaseModelInfo::RemoveRef(this);
  return v4;
}


// ============================================================

// Address: 0x384a7e
// Original: _ZN16CAtomicModelInfo14CreateInstanceEv
// Demangled: CAtomicModelInfo::CreateInstance(void)
int __fastcall CAtomicModelInfo::CreateInstance(CAtomicModelInfo *this)
{
  int v2; // r5

  if ( !*((_DWORD *)this + 13) )
    return 0;
  CBaseModelInfo::AddRef(this);
  v2 = RpAtomicClone();
  RwFrameCreate();
  RpAtomicSetFrame();
  CBaseModelInfo::RemoveRef(this);
  return v2;
}


// ============================================================

// Address: 0x384ab4
// Original: _ZN16CAtomicModelInfo24SetupVehicleUpgradeFlagsEPKc
// Demangled: CAtomicModelInfo::SetupVehicleUpgradeFlags(char const*)
int __fastcall CAtomicModelInfo::SetupVehicleUpgradeFlags(int this, const char *a2)
{
  int v2; // r4
  int v4; // r1
  int v5; // r8
  int v6; // r6
  int v7; // r6

  v2 = this;
  v4 = *(__int16 *)(this + 40);
  if ( v4 >= 0 )
  {
    v5 = (unsigned __int8)v4;
    *(_WORD *)(this + 40) = (unsigned __int8)v4;
    if ( !strncmp("bnt_", a2, 4u) )
    {
      v6 = 0;
    }
    else if ( !strncmp("bntl_", a2, 5u) )
    {
      v6 = 1;
    }
    else if ( !strncmp("bntr_", a2, 5u) )
    {
      v6 = 2;
    }
    else if ( !strncmp("spl_", a2, 4u) )
    {
      v6 = 3;
    }
    else if ( !strncmp("wg_l_", a2, 5u) )
    {
      v6 = 4;
    }
    else
    {
      v6 = 5;
      if ( strncmp("wg_r_", a2, 5u) )
      {
        if ( !strncmp("fbb_", a2, 4u) )
        {
          v6 = 6;
        }
        else if ( !strncmp("bbb_", a2, 4u) )
        {
          v6 = 7;
        }
        else if ( !strncmp("lgt_", a2, 4u) )
        {
          v6 = 8;
        }
        else if ( !strncmp("rf_", a2, 3u) )
        {
          v6 = 9;
        }
        else if ( !strncmp("nto_", a2, 4u) )
        {
          v6 = 10;
        }
        else if ( !strncmp("hydralics", a2, 9u) )
        {
          v6 = 11;
        }
        else
        {
          if ( strncmp("stereo", a2, 6u) )
          {
            if ( !strncmp("chss_", a2, 5u) )
            {
              v7 = 0;
            }
            else if ( !strncmp("wheel_", a2, 6u) )
            {
              v7 = 1;
            }
            else if ( !strncmp("exh_", a2, 4u) )
            {
              v7 = 2;
            }
            else if ( !strncmp("fbmp_", a2, 5u) )
            {
              v7 = 3;
            }
            else if ( !strncmp("rbmp_", a2, 5u) )
            {
              v7 = 4;
            }
            else if ( !strncmp("misc_a_", a2, 7u) )
            {
              v7 = 5;
            }
            else if ( !strncmp("misc_b_", a2, 7u) )
            {
              v7 = 6;
            }
            else
            {
              v7 = 7;
              this = strncmp("misc_c_", a2, 7u);
              if ( this )
                return this;
            }
            this = v5 | ((_DWORD)(&off_667404)[2 * v7 + 1] << 10) | 0x8100;
            goto LABEL_37;
          }
          v6 = 12;
        }
      }
    }
    this = v5 | ((_DWORD)(&off_667394)[2 * v6 + 1] << 10) | 0x8000;
LABEL_37:
    *(_WORD *)(v2 + 40) = this;
  }
  return this;
}


// ============================================================

// Address: 0x384f5c
// Original: _ZN16CAtomicModelInfoD0Ev
// Demangled: CAtomicModelInfo::~CAtomicModelInfo()
// attributes: thunk
void __fastcall CAtomicModelInfo::~CAtomicModelInfo(CAtomicModelInfo *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x384f60
// Original: _ZN16CAtomicModelInfo20AsAtomicModelInfoPtrEv
// Demangled: CAtomicModelInfo::AsAtomicModelInfoPtr(void)
void __fastcall CAtomicModelInfo::AsAtomicModelInfoPtr(CAtomicModelInfo *this)
{
  ;
}


// ============================================================

// Address: 0x384f6a
// Original: _ZN16CAtomicModelInfo12GetModelTypeEv
// Demangled: CAtomicModelInfo::GetModelType(void)
int __fastcall CAtomicModelInfo::GetModelType(CAtomicModelInfo *this)
{
  return 1;
}


// ============================================================

// Address: 0x384f72
// Original: _ZN16CAtomicModelInfo14GetRwModelTypeEv
// Demangled: CAtomicModelInfo::GetRwModelType(void)
int __fastcall CAtomicModelInfo::GetRwModelType(CAtomicModelInfo *this)
{
  return 1;
}


// ============================================================
