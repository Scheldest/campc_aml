
// Address: 0x3890e4
// Original: _ZN16CWeaponModelInfo4InitEv
// Demangled: CWeaponModelInfo::Init(void)
int __fastcall CWeaponModelInfo::Init(CWeaponModelInfo *this)
{
  int result; // r0

  CClumpModelInfo::Init(this);
  result = 0;
  *((_DWORD *)this + 15) = 0;
  return result;
}


// ============================================================

// Address: 0x3890f4
// Original: _ZN16CWeaponModelInfo8SetClumpEP7RpClump
// Demangled: CWeaponModelInfo::SetClump(RpClump *)
int __fastcall CWeaponModelInfo::SetClump(int a1, int a2)
{
  int result; // r0
  int v4; // r4
  int v5; // r0

  CClumpModelInfo::SetClump();
  RpClumpForAllAtomics(a2, CClumpModelInfo::SetAtomicRendererCB, CVisibilityPlugins::RenderWeaponCB);
  result = CClumpModelInfo::GetFrameFromName();
  if ( result )
  {
    result = GetFirstObject();
    v4 = result;
    if ( result )
    {
      CVehicle::SetComponentAtomicAlpha(result, 0);
      v5 = *(_DWORD *)(v4 + 24);
      *(_BYTE *)(v4 + 2) = 0;
      result = **(_DWORD **)(v5 + 32);
      *(_DWORD *)(result + 12) = 1098907648;
    }
  }
  return result;
}


// ============================================================

// Address: 0x389154
// Original: _ZN16CWeaponModelInfoD0Ev
// Demangled: CWeaponModelInfo::~CWeaponModelInfo()
// attributes: thunk
void __fastcall CWeaponModelInfo::~CWeaponModelInfo(CWeaponModelInfo *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x389158
// Original: _ZN16CWeaponModelInfo12GetModelTypeEv
// Demangled: CWeaponModelInfo::GetModelType(void)
int __fastcall CWeaponModelInfo::GetModelType(CWeaponModelInfo *this)
{
  return 4;
}


// ============================================================
