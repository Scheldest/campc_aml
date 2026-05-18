
// Address: 0x280194
// Original: _ZN17CAnimatedBuilding9PreRenderEv
// Demangled: CAnimatedBuilding::PreRender(void)
int __fastcall CAnimatedBuilding::PreRender(CAnimatedBuilding *this)
{
  int result; // r0

  result = *((_DWORD *)this + 6);
  if ( result )
  {
    CEntity::PreRender(this);
    CEntity::UpdateRwFrame(this);
    return j_CEntity::UpdateRpHAnim(this);
  }
  return result;
}


// ============================================================

// Address: 0x2801b8
// Original: _ZN17CAnimatedBuildingD0Ev
// Demangled: CAnimatedBuilding::~CAnimatedBuilding()
void __fastcall CAnimatedBuilding::~CAnimatedBuilding(CAnimatedBuilding *this)
{
  int v1; // r1
  int v2; // r0
  int v3; // r0

  CEntity::~CEntity(this);
  v1 = CPools::ms_pBuildingPool;
  v3 = -286331153 * ((v2 - *(_DWORD *)CPools::ms_pBuildingPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pBuildingPool + 4) + v3) |= 0x80u;
  if ( v3 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v3;
}


// ============================================================

// Address: 0x2801fe
// Original: _ZN17CAnimatedBuilding14ProcessControlEv
// Demangled: CAnimatedBuilding::ProcessControl(void)
void __fastcall CAnimatedBuilding::ProcessControl(CAnimatedBuilding *this)
{
  ;
}


// ============================================================

// Address: 0x280200
// Original: _ZN17CAnimatedBuilding16ProcessCollisionEv
// Demangled: CAnimatedBuilding::ProcessCollision(void)
int __fastcall CAnimatedBuilding::ProcessCollision(int this)
{
  *(_DWORD *)(this + 28) |= 0x20u;
  return this;
}


// ============================================================
