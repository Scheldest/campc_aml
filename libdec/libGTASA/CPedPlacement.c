
// Address: 0x196cc8
// Original: j__ZN13CPedPlacement21IsPositionClearOfCarsEPK4CPed
// Demangled: CPedPlacement::IsPositionClearOfCars(CPed const*)
// attributes: thunk
int __fastcall CPedPlacement::IsPositionClearOfCars(CPedPlacement *this, const CPed *a2)
{
  return _ZN13CPedPlacement21IsPositionClearOfCarsEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x19e3a8
// Original: j__ZN13CPedPlacement15FindZCoorForPedEP7CVector
// Demangled: CPedPlacement::FindZCoorForPed(CVector *)
// attributes: thunk
int __fastcall CPedPlacement::FindZCoorForPed(CPedPlacement *this, CVector *a2)
{
  return _ZN13CPedPlacement15FindZCoorForPedEP7CVector(this, a2);
}


// ============================================================

// Address: 0x1a02a4
// Original: j__ZN13CPedPlacement21IsPositionClearForPedERK7CVectorfiPP7CEntityhhh
// Demangled: CPedPlacement::IsPositionClearForPed(CVector const&,float,int,CEntity **,uchar,uchar,uchar)
// attributes: thunk
int __fastcall CPedPlacement::IsPositionClearForPed(
        CPedPlacement *this,
        const CVector *a2,
        float a3,
        int a4,
        CEntity **a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  return _ZN13CPedPlacement21IsPositionClearForPedERK7CVectorfiPP7CEntityhhh(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x4c2794
// Original: _ZN13CPedPlacement21IsPositionClearForPedERK7CVectorfiPP7CEntityhhh
// Demangled: CPedPlacement::IsPositionClearForPed(CVector const&,float,int,CEntity **,uchar,uchar,uchar)
int __fastcall CPedPlacement::IsPositionClearForPed(
        CPedPlacement *this,
        const CVector *a2,
        float a3,
        __int16 a4,
        CEntity **a5,
        int a6,
        int a7,
        unsigned __int8 a8)
{
  const CVector *v8; // s2
  int v9; // r8
  bool v11; // [sp+1Ch] [bp-14h]
  __int16 v12; // [sp+1Eh] [bp-12h] BYREF

  v8 = a2;
  v9 = 0;
  if ( *(float *)&a2 == -1.0 )
    v8 = COERCE_CONST_CVECTOR_(0.75);
  if ( a3 == NAN )
    LOWORD(a3) = 2;
  CWorld::FindObjectsKindaColliding(
    this,
    v8,
    COERCE_FLOAT(1),
    (bool)&v12,
    (__int16 *)SLOWORD(a3),
    a4,
    0,
    a5 != 0,
    a6 != 0,
    a7 != 0,
    0,
    v11);
  if ( !v12 )
    return 1;
  return v9;
}


// ============================================================

// Address: 0x4c2810
// Original: _ZN13CPedPlacement21IsPositionClearOfCarsEPK7CVector
// Demangled: CPedPlacement::IsPositionClearOfCars(CVector const*)
int __fastcall CPedPlacement::IsPositionClearOfCars(CPedPlacement *this, const CVector *a2)
{
  return CWorld::TestSphereAgainstWorld();
}


// ============================================================

// Address: 0x4c2840
// Original: _ZN13CPedPlacement21IsPositionClearOfCarsEPK4CPed
// Demangled: CPedPlacement::IsPositionClearOfCars(CPed const*)
int __fastcall CPedPlacement::IsPositionClearOfCars(CPedPlacement *this, const CPed *a2)
{
  int v3; // r6
  int v4; // r0
  int v5; // r4
  CMatrix *v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r0

  v3 = 0;
  v4 = CWorld::TestSphereAgainstWorld();
  v5 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 1444) )
    {
      v6 = *(CMatrix **)(v4 + 20);
      v7 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)]) + 44);
      v8 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44);
      v9 = *((_DWORD *)this + 5);
    }
    else
    {
      if ( (*(_BYTE *)(v4 + 1069) & 4) == 0 )
        return v5;
      v6 = *(CMatrix **)(v4 + 20);
      v7 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)]) + 44);
      v8 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44);
      v9 = *((_DWORD *)this + 5);
    }
    if ( !CCollision::ProcessColModels(v9, v8, v6, v7, (int)&unk_9EFB8C, 0, 0, 0) )
      return 0;
    return v5;
  }
  return v3;
}


// ============================================================

// Address: 0x4c28fc
// Original: _ZN13CPedPlacement15FindZCoorForPedEP7CVector
// Demangled: CPedPlacement::FindZCoorForPed(CVector *)
int __fastcall CPedPlacement::FindZCoorForPed(CPedPlacement *this, CVector *a2)
{
  float32x2_t v2; // d8
  float v4; // s4
  float v5; // s0
  int v6; // r5
  int v7; // r11
  float v8; // s18
  int v9; // r0
  float32x2_t v10; // d1
  float v11; // s0
  float v13; // [sp+1Ch] [bp-6Ch] BYREF
  float v14; // [sp+20h] [bp-68h]
  float v15; // [sp+24h] [bp-64h]
  _BYTE v16[4]; // [sp+28h] [bp-60h] BYREF
  _BYTE v17[8]; // [sp+2Ch] [bp-5Ch] BYREF
  float v18; // [sp+34h] [bp-54h]

  v2.n64_u32[0] = -1027080192;
  v4 = *((float *)this + 2);
  v5 = *(float *)this + 0.0;
  v6 = 0;
  v14 = *((float *)this + 1) + 0.0;
  v13 = v5;
  v15 = v4 + 0.5;
  v7 = CWorld::ProcessVerticalLine((CVector *)&v13, COERCE_INT(v4 + -100.0), (int)v17, (int)v16, 1, 1, 0, 0, 1, 0, 0);
  v8 = v18;
  v13 = v13 + 0.1;
  v14 = v14 + 0.1;
  v9 = CWorld::ProcessVerticalLine(
         (CVector *)&v13,
         COERCE_INT(*((float *)this + 2) + -100.0),
         (int)v17,
         (int)v16,
         1,
         1,
         0,
         0,
         1,
         0,
         0);
  v10.n64_u64[0] = v2.n64_u64[0];
  if ( v7 )
    v10.n64_f32[0] = v8;
  if ( v9 )
    v2.n64_f32[0] = v18;
  v11 = vmax_f32(v10, v2).n64_f32[0];
  if ( v11 > -99.0 )
  {
    *((float *)this + 2) = v11 + 1.0;
    return 1;
  }
  return v6;
}


// ============================================================
