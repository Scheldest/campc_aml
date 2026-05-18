
// Address: 0x190d68
// Original: j__ZN9CBuilding19ReplaceWithNewModelEi
// Demangled: CBuilding::ReplaceWithNewModel(int)
// attributes: thunk
int __fastcall CBuilding::ReplaceWithNewModel(CBuilding *this, int a2)
{
  return _ZN9CBuilding19ReplaceWithNewModelEi(this, a2);
}


// ============================================================

// Address: 0x191108
// Original: j__ZN9CBuildingnwEj
// Demangled: CBuilding::operator new(uint)
// attributes: thunk
int __fastcall CBuilding::operator new(CBuilding *this, unsigned int a2)
{
  return _ZN9CBuildingnwEj(this, a2);
}


// ============================================================

// Address: 0x19711c
// Original: j__ZN9CBuildingC2Ev
// Demangled: CBuilding::CBuilding(void)
// attributes: thunk
void __fastcall CBuilding::CBuilding(CBuilding *this)
{
  _ZN9CBuildingC2Ev(this);
}


// ============================================================

// Address: 0x19a400
// Original: j__ZN9CBuildingC2Ev_0
// Demangled: CBuilding::CBuilding(void)
// attributes: thunk
void __fastcall CBuilding::CBuilding(CBuilding *this)
{
  _ZN9CBuildingC2Ev(this);
}


// ============================================================

// Address: 0x280064
// Original: _ZN9CBuildingC2Ev
// Demangled: CBuilding::CBuilding(void)
void __fastcall CBuilding::CBuilding(CBuilding *this)
{
  int v1; // r0
  char v2; // r3

  CEntity::CEntity(this);
  v2 = *(_BYTE *)(v1 + 58);
  *(_DWORD *)(v1 + 28) |= 1u;
  *(_BYTE *)(v1 + 58) = v2 & 0xF8 | 1;
  *(_DWORD *)v1 = &off_661FC8;
}


// ============================================================

// Address: 0x280094
// Original: _ZN9CBuildingnwEj
// Demangled: CBuilding::operator new(uint)
int __fastcall CBuilding::operator new(CBuilding *this, unsigned int a2)
{
  int v2; // lr
  _DWORD *v3; // r1
  int result; // r0
  int v5; // r12
  int v6; // r2
  int v7; // r3

  v2 = 0;
  v3 = (_DWORD *)CPools::ms_pBuildingPool;
  result = *(_DWORD *)(CPools::ms_pBuildingPool + 12);
  v5 = *(_DWORD *)(CPools::ms_pBuildingPool + 8);
  do
  {
    v3[3] = ++result;
    if ( result == v5 )
    {
      result = 0;
      v3[3] = 0;
      if ( v2 << 31 )
        return result;
      v2 = 1;
    }
    v6 = v3[1];
    v7 = *(char *)(v6 + result);
  }
  while ( v7 > -1 );
  *(_BYTE *)(v6 + result) = v7 & 0x7F;
  *(_BYTE *)(v3[1] + v3[3]) = (*(_BYTE *)(v3[1] + v3[3]) + 1) & 0x7F | *(_BYTE *)(v3[1] + v3[3]) & 0x80;
  return *v3 + 60 * v3[3];
}


// ============================================================

// Address: 0x2800f8
// Original: _ZN9CBuildingdlEPv
// Demangled: CBuilding::operator delete(void *)
void __fastcall CBuilding::operator delete(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pBuildingPool;
  v2 = -286331153 * ((a1 - *(_DWORD *)CPools::ms_pBuildingPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pBuildingPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x280128
// Original: _ZN9CBuilding19ReplaceWithNewModelEi
// Demangled: CBuilding::ReplaceWithNewModel(int)
int __fastcall CBuilding::ReplaceWithNewModel(CBuilding *this, __int16 a2)
{
  int result; // r0

  (*(void (__fastcall **)(CBuilding *))(*(_DWORD *)this + 36))(this);
  result = *((__int16 *)this + 19);
  if ( !*(_WORD *)(CModelInfo::ms_modelInfoPtrs[result] + 30) )
    result = CStreaming::RemoveModel(
               (CStreaming *)result,
               *(unsigned __int16 *)(CModelInfo::ms_modelInfoPtrs[result] + 30));
  *((_WORD *)this + 19) = a2;
  return result;
}


// ============================================================

// Address: 0x28021c
// Original: _ZN9CBuildingD0Ev
// Demangled: CBuilding::~CBuilding()
void __fastcall CBuilding::~CBuilding(CBuilding *this)
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
