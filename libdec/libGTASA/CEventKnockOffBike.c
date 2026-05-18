
// Address: 0x18a684
// Original: j__ZN18CEventKnockOffBike12SetPedOutCarEP4CPed
// Demangled: CEventKnockOffBike::SetPedOutCar(CPed *)
// attributes: thunk
int __fastcall CEventKnockOffBike::SetPedOutCar(CEventKnockOffBike *this, CPed *a2)
{
  return _ZN18CEventKnockOffBike12SetPedOutCarEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1920e4
// Original: j__ZN18CEventKnockOffBike18SetPedSafePositionEP4CPed
// Demangled: CEventKnockOffBike::SetPedSafePosition(CPed *)
// attributes: thunk
int __fastcall CEventKnockOffBike::SetPedSafePosition(CEventKnockOffBike *this, CPed *a2)
{
  return _ZN18CEventKnockOffBike18SetPedSafePositionEP4CPed(this, a2);
}


// ============================================================

// Address: 0x193030
// Original: j__ZN18CEventKnockOffBike18CalcForcesAndAnimsEP4CPed
// Demangled: CEventKnockOffBike::CalcForcesAndAnims(CPed *)
// attributes: thunk
int __fastcall CEventKnockOffBike::CalcForcesAndAnims(CEventKnockOffBike *this, CPed *a2)
{
  return _ZN18CEventKnockOffBike18CalcForcesAndAnimsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19365c
// Original: j__ZN18CEventKnockOffBikeD2Ev
// Demangled: CEventKnockOffBike::~CEventKnockOffBike()
// attributes: thunk
void __fastcall CEventKnockOffBike::~CEventKnockOffBike(CEventKnockOffBike *this)
{
  _ZN18CEventKnockOffBikeD2Ev(this);
}


// ============================================================

// Address: 0x1937e8
// Original: j__ZN18CEventKnockOffBikeC2EP8CVehicleRK7CVectorS4_ff11eWeaponTypeaiP4CPedbb
// Demangled: CEventKnockOffBike::CEventKnockOffBike(CVehicle *,CVector const&,CVector const&,float,float,eWeaponType,signed char,int,CPed *,bool,bool)
// attributes: thunk
int __fastcall CEventKnockOffBike::CEventKnockOffBike(
        int a1,
        CEntity *this,
        int a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return _ZN18CEventKnockOffBikeC2EP8CVehicleRK7CVectorS4_ff11eWeaponTypeaiP4CPedbb(
           a1,
           this,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}


// ============================================================

// Address: 0x198868
// Original: j__ZN18CEventKnockOffBikeC2Ev
// Demangled: CEventKnockOffBike::CEventKnockOffBike(void)
// attributes: thunk
void __fastcall CEventKnockOffBike::CEventKnockOffBike(CEventKnockOffBike *this)
{
  _ZN18CEventKnockOffBikeC2Ev(this);
}


// ============================================================

// Address: 0x1a0f4c
// Original: j__ZN18CEventKnockOffBikeaSERKS_
// Demangled: CEventKnockOffBike::operator=(CEventKnockOffBike const&)
// attributes: thunk
int CEventKnockOffBike::operator=()
{
  return _ZN18CEventKnockOffBikeaSERKS_();
}


// ============================================================

// Address: 0x3753b4
// Original: _ZN18CEventKnockOffBikeC2Ev
// Demangled: CEventKnockOffBike::CEventKnockOffBike(void)
void __fastcall CEventKnockOffBike::CEventKnockOffBike(CEventKnockOffBike *this)
{
  char v1; // r2

  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 52) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_WORD *)this + 27) = 0;
  v1 = *((_BYTE *)this + 53);
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_BYTE *)this + 53) = v1 & 0xFE;
  *(_DWORD *)this = &off_66660C;
}


// ============================================================

// Address: 0x3753ec
// Original: _ZN18CEventKnockOffBikeC2EP8CVehicleRK7CVectorS4_ff11eWeaponTypeaiP4CPedbb
// Demangled: CEventKnockOffBike::CEventKnockOffBike(CVehicle *,CVector const&,CVector const&,float,float,eWeaponType,signed char,int,CPed *,bool,bool)
int __fastcall CEventKnockOffBike::CEventKnockOffBike(
        int a1,
        CEntity *this,
        __int64 *a3,
        __int64 *a4,
        float a5,
        float a6,
        unsigned __int8 a7,
        char a8,
        int a9,
        CEntity *a10,
        char a11,
        char a12)
{
  __int64 v13; // d16
  CEntity *v14; // r0
  __int64 v15; // d16
  int v16; // r2
  char v17; // r3

  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_66660C;
  *(_DWORD *)(a1 + 4) = 0;
  v13 = *a3;
  *(_DWORD *)(a1 + 20) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(a1 + 12) = v13;
  v14 = a10;
  v15 = *a4;
  v16 = *((_DWORD *)a4 + 2);
  *(_DWORD *)(a1 + 48) = a10;
  *(_DWORD *)(a1 + 32) = v16;
  *(_DWORD *)(a1 + 44) = a9;
  v17 = *(_BYTE *)(a1 + 53) & 0xFC;
  *(float *)(a1 + 36) = a5;
  *(float *)(a1 + 40) = a6;
  *(_BYTE *)(a1 + 52) = a8;
  *(_WORD *)(a1 + 54) = a7;
  *(_QWORD *)(a1 + 24) = v15;
  *(_BYTE *)(a1 + 53) = a11 | (2 * a12) | v17;
  *(_DWORD *)(a1 + 56) = this;
  if ( this )
  {
    CEntity::RegisterReference(this, (CEntity **)(a1 + 56));
    v14 = *(CEntity **)(a1 + 48);
  }
  if ( v14 )
    CEntity::RegisterReference(v14, (CEntity **)(a1 + 48));
  return a1;
}


// ============================================================

// Address: 0x375494
// Original: _ZN18CEventKnockOffBikeC2ERKS_
// Demangled: CEventKnockOffBike::CEventKnockOffBike(CEventKnockOffBike const&)
void __fastcall CEventKnockOffBike::CEventKnockOffBike(CEventKnockOffBike *this, const CEventKnockOffBike *a2)
{
  CEntity *v3; // r0
  __int64 v4; // d16
  __int64 v5; // d16
  CEntity *v6; // r2

  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_66660C;
  *((_DWORD *)this + 1) = 0;
  v3 = (CEntity *)*((_DWORD *)a2 + 14);
  *((_DWORD *)this + 14) = v3;
  v4 = *(_QWORD *)((char *)a2 + 12);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *(_QWORD *)((char *)this + 12) = v4;
  v5 = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_QWORD *)this + 3) = v5;
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_BYTE *)this + 54) = *((_BYTE *)a2 + 54);
  *((_BYTE *)this + 52) = *((_BYTE *)a2 + 52);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  v6 = (CEntity *)*((_DWORD *)a2 + 12);
  *((_DWORD *)this + 12) = v6;
  *((_BYTE *)this + 53) = *((_BYTE *)a2 + 53) & 1 | *((_BYTE *)this + 53) & 0xFE;
  *((_BYTE *)this + 55) = *((_BYTE *)a2 + 55);
  if ( v3 )
  {
    CEntity::RegisterReference(v3, (CEntity **)this + 14);
    v6 = (CEntity *)*((_DWORD *)this + 12);
  }
  if ( v6 )
    CEntity::RegisterReference(v6, (CEntity **)this + 12);
}


// ============================================================

// Address: 0x37552c
// Original: _ZN18CEventKnockOffBike4FromERKS_
// Demangled: CEventKnockOffBike::From(CEventKnockOffBike const&)
CEntity *__fastcall CEventKnockOffBike::From(CEventKnockOffBike *this, const CEventKnockOffBike *a2)
{
  CEntity *result; // r0
  CEntity **v4; // r3
  __int64 v5; // d16
  __int64 v6; // d16
  CEntity *v7; // r2
  CEntity **v8; // r4

  result = (CEntity *)*((_DWORD *)a2 + 14);
  *((_DWORD *)this + 14) = result;
  v4 = (CEntity **)((char *)this + 56);
  v5 = *(_QWORD *)((char *)a2 + 12);
  *(v4 - 9) = (CEntity *)*((_DWORD *)a2 + 5);
  *(_QWORD *)(v4 - 11) = v5;
  v6 = *((_QWORD *)a2 + 3);
  *(v4 - 6) = (CEntity *)*((_DWORD *)a2 + 8);
  *((_QWORD *)v4 - 4) = v6;
  *(v4 - 5) = (CEntity *)*((_DWORD *)a2 + 9);
  *(v4 - 4) = (CEntity *)*((_DWORD *)a2 + 10);
  *((_BYTE *)v4 - 2) = *((_BYTE *)a2 + 54);
  *((_BYTE *)v4 - 4) = *((_BYTE *)a2 + 52);
  *(v4 - 3) = (CEntity *)*((_DWORD *)a2 + 11);
  v7 = (CEntity *)*((_DWORD *)a2 + 12);
  *(v4 - 2) = v7;
  *((_BYTE *)v4 - 3) = *((_BYTE *)a2 + 53) & 1 | *((_BYTE *)v4 - 3) & 0xFE;
  v8 = v4 - 2;
  *((_BYTE *)v4 - 1) = *((_BYTE *)a2 + 55);
  if ( result )
  {
    result = (CEntity *)CEntity::RegisterReference(result, v4);
    v7 = *v8;
  }
  if ( v7 )
    return (CEntity *)j_CEntity::RegisterReference(v7, v8);
  return result;
}


// ============================================================

// Address: 0x3755be
// Original: _ZN18CEventKnockOffBikeaSERKS_
// Demangled: CEventKnockOffBike::operator=(CEventKnockOffBike const&)
int __fastcall CEventKnockOffBike::operator=(int a1, int a2)
{
  CEntity *v3; // r0
  __int64 v4; // d16
  __int64 v5; // d16
  CEntity *v6; // r2

  v3 = *(CEntity **)(a2 + 56);
  *(_DWORD *)(a1 + 56) = v3;
  v4 = *(_QWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(a1 + 12) = v4;
  v5 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 24) = v5;
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 54) = *(_BYTE *)(a2 + 54);
  *(_BYTE *)(a1 + 52) = *(_BYTE *)(a2 + 52);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  v6 = *(CEntity **)(a2 + 48);
  *(_DWORD *)(a1 + 48) = v6;
  *(_BYTE *)(a1 + 53) = *(_BYTE *)(a1 + 53) & 0xFE | *(_BYTE *)(a2 + 53) & 1;
  *(_BYTE *)(a1 + 55) = *(_BYTE *)(a2 + 55);
  if ( v3 )
  {
    CEntity::RegisterReference(v3, (CEntity **)(a1 + 56));
    v6 = *(CEntity **)(a1 + 48);
  }
  if ( v6 )
    CEntity::RegisterReference(v6, (CEntity **)(a1 + 48));
  return a1;
}


// ============================================================

// Address: 0x375658
// Original: _ZN18CEventKnockOffBikeD2Ev
// Demangled: CEventKnockOffBike::~CEventKnockOffBike()
void __fastcall CEventKnockOffBike::~CEventKnockOffBike(CEventKnockOffBike *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 56);
  v2 = (CEntity *)*((_DWORD *)this + 14);
  *(_DWORD *)this = &off_66660C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 12);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 12);
}


// ============================================================

// Address: 0x37568c
// Original: _ZN18CEventKnockOffBikeD0Ev
// Demangled: CEventKnockOffBike::~CEventKnockOffBike()
void __fastcall CEventKnockOffBike::~CEventKnockOffBike(CEventKnockOffBike *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  int v5; // r0
  int v6; // r1

  v3 = (CEntity **)((char *)this + 56);
  v2 = (CEntity *)*((_DWORD *)this + 14);
  *(_DWORD *)this = &off_66660C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 12);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 12);
  v5 = CPools::ms_pEventPool;
  v6 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v6) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v6 < *(_DWORD *)(v5 + 12) )
    *(_DWORD *)(v5 + 12) = v6;
}


// ============================================================

// Address: 0x3756ec
// Original: _ZNK18CEventKnockOffBike10AffectsPedEP4CPed
// Demangled: CEventKnockOffBike::AffectsPed(CPed *)
int __fastcall CEventKnockOffBike::AffectsPed(CEventKnockOffBike *this, CPed *a2)
{
  int v4; // r1
  int result; // r0
  CPed *v6; // r0
  bool v7; // zf

  if ( CPed::IsAlive(a2) != 1 )
    return 0;
  v4 = *((_DWORD *)this + 14);
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 58) & 0xF8) == 0x60 )
      return 0;
  }
  if ( (*((_DWORD *)a2 + 291) & 0x18000000) != 0x8000000 )
  {
    if ( !v4 )
      return 0;
  }
  else
  {
    result = 0;
    if ( (*((_BYTE *)this + 53) & 2) == 0 || !v4 )
      return result;
  }
  if ( *(CPed **)(v4 + 1124) == a2 )
  {
    *((_BYTE *)this + 53) |= 1u;
  }
  else if ( *(CPed **)(v4 + 1128) != a2 )
  {
    v6 = *(CPed **)(v4 + 1132);
    v7 = v6 == a2;
    if ( v6 != a2 )
      v7 = *(_DWORD *)(v4 + 1136) == (_DWORD)a2;
    if ( !v7 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x37576e
// Original: _ZN18CEventKnockOffBike12SetPedOutCarEP4CPed
// Demangled: CEventKnockOffBike::SetPedOutCar(CPed *)
void __fastcall CEventKnockOffBike::SetPedOutCar(CEventKnockOffBike *this, CPed *a2)
{
  int v3; // r1
  int v4; // r2
  const CPed *v5; // r1
  _BYTE v6[40]; // [sp+0h] [bp-28h] BYREF

  v3 = *((_DWORD *)this + 14);
  v4 = 10;
  *((_BYTE *)this + 55) = 10;
  if ( *(CPed **)(v3 + 1124) == a2 )
    goto LABEL_10;
  if ( *(_DWORD *)(v3 + 1440) == 9 )
    goto LABEL_3;
  if ( *(CPed **)(v3 + 1128) == a2 )
  {
    v4 = 8;
    goto LABEL_10;
  }
  if ( *(CPed **)(v3 + 1132) == a2 )
  {
LABEL_3:
    v4 = 11;
LABEL_10:
    *((_BYTE *)this + 55) = v4;
    goto LABEL_11;
  }
  if ( *(CPed **)(v3 + 1136) == a2 )
  {
    v4 = 9;
    goto LABEL_10;
  }
  v4 = 10;
LABEL_11:
  CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v6, (CVehicle *)v3, v4, 1);
  v6[16] = 0;
  v6[19] = 1;
  CTaskSimpleCarSetPedOut::ProcessPed((CTaskSimpleCarSetPedOut *)v6, a2);
  CCarEnterExit::RemoveCarSitAnim(a2, v5);
  CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v6);
}


// ============================================================

// Address: 0x3757f0
// Original: _ZN18CEventKnockOffBike18CalcForcesAndAnimsEP4CPed
// Demangled: CEventKnockOffBike::CalcForcesAndAnims(CPed *)
int __fastcall CEventKnockOffBike::CalcForcesAndAnims(CEventKnockOffBike *this, CPed *a2)
{
  int v4; // r0
  float v5; // s0
  int v6; // r1
  unsigned __int8 *v7; // r1
  int v8; // r6
  float v9; // s16
  __int64 v10; // d16
  int *v11; // r1
  float v12; // s0
  int v13; // r6
  int v14; // r0
  float v15; // s0
  unsigned int v16; // r0
  int v17; // r5
  __int64 v18; // d16
  int v19; // r0
  int v20; // r1
  float *v21; // r0
  float v22; // s2
  float v23; // s4
  int v24; // r0
  __int64 v25; // d16
  float v26; // s18
  float v27; // s20
  float v28; // s22
  int v29; // r0
  unsigned int v30; // r0
  float v31; // s0
  float v32; // s2
  float v33; // s4
  float *v34; // r0
  float v35; // s0
  float v36; // s2
  float v37; // s4
  float *v38; // r0
  __int64 *v39; // r0
  __int64 v40; // d16
  float *v41; // r0
  __int64 *v42; // r0
  __int64 v43; // d16
  float *v44; // r0

  v4 = *((_DWORD *)this + 14);
  v5 = *((float *)a2 + 36);
  v6 = *(_DWORD *)(v4 + 1440);
  if ( v6 )
  {
    if ( v6 != 9 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v7 = (unsigned __int8 *)(v4 + 2072);
  }
  else
  {
    v7 = (unsigned __int8 *)(v4 + 2420);
  }
  v8 = *v7;
LABEL_7:
  v9 = v5 / *(float *)(v4 + 144);
  switch ( *((_BYTE *)this + 54) )
  {
    case '1':
      v10 = *(_QWORD *)((char *)this + 12);
      v11 = dword_375CBC;
      *((_DWORD *)a2 + 20) = *((_DWORD *)this + 5);
      *((_QWORD *)a2 + 9) = v10;
      if ( *(_DWORD *)(*((_DWORD *)this + 14) + 1444) == 10 )
        v11 = &dword_375CBC[1];
      v12 = *((float *)this + 9) * (float)(v9 * *(float *)v11);
      CPhysical::ApplyMoveForce(a2, *((float *)this + 6) * v12, *((float *)this + 7) * v12, 0);
      v13 = *(_DWORD *)(*((_DWORD *)this + 14) + 1444);
      v14 = rand();
      v15 = 2.0;
      if ( v13 == 10 )
        v15 = 3.0;
      *((float *)a2 + 20) = *((float *)a2 + 20)
                          + (float)((float)((float)(v15 * (float)((float)v14 * 4.6566e-10)) + 3.0) / 70.0);
      *((_DWORD *)a2 + 75) = *((_DWORD *)this + 14);
      v16 = *((char *)this + 52);
      if ( v16 > 3 )
        v17 = 15;
      else
        v17 = dword_375CC8[v16];
      *((_DWORD *)a2 + 290) |= 0x80000000;
      CPed::IsPlayer(a2);
      return v17;
    case '2':
    case '3':
    case '4':
      goto LABEL_18;
    case '5':
      v22 = *(float *)(v4 + 72);
      v23 = *(float *)(v4 + 76) * 0.2;
      *((_DWORD *)a2 + 20) = 0;
      *((float *)a2 + 18) = v22 * 0.2;
      *((float *)a2 + 19) = v23;
      v24 = *((_DWORD *)this + 14);
      v17 = 120;
      *((_DWORD *)a2 + 75) = v24;
      return v17;
    case '6':
      v25 = *(_QWORD *)((char *)this + 12);
      *((_DWORD *)a2 + 20) = *((_DWORD *)this + 5);
      *((_QWORD *)a2 + 9) = v25;
      v26 = *((float *)this + 6);
      v27 = *((float *)this + 7);
      v28 = *((float *)this + 9);
      v29 = rand();
      CPhysical::ApplyMoveForce(
        a2,
        (float)((float)(v9 * -0.3) * v28) * v26,
        (float)((float)(v9 * -0.3) * v28) * v27,
        (float)((float)((float)v29 * 4.6566e-10) + (float)((float)v29 * 4.6566e-10)) + 3.0);
      *((_DWORD *)a2 + 75) = *((_DWORD *)this + 14);
      v30 = *((char *)this + 52);
      if ( v30 > 3 )
        v17 = 15;
      else
        v17 = dword_375CDC[v30];
      if ( !v8 )
        *((_DWORD *)a2 + 290) |= 0x80000000;
      return v17;
    case '7':
      goto LABEL_17;
    default:
      if ( *((_BYTE *)this + 54) )
      {
LABEL_18:
        v20 = *((char *)this + 52);
        if ( (unsigned int)(v20 - 1) < 2 )
        {
          v31 = *(float *)(v4 + 72);
          v32 = *(float *)(v4 + 76);
          v33 = *(float *)(v4 + 80);
          if ( (float)((float)((float)(v31 * v31) + (float)(v32 * v32)) + (float)(v33 * v33)) <= 0.09 )
          {
            v39 = (__int64 *)(v4 + 72);
            v40 = *v39;
            *((_DWORD *)a2 + 20) = *((_DWORD *)v39 + 2);
            *((_QWORD *)a2 + 9) = v40;
            v41 = *(float **)(*((_DWORD *)this + 14) + 20);
            CPhysical::ApplyMoveForce(
              a2,
              (float)(*v41 * 8.0) + (float)(v41[8] * 4.0),
              (float)(v41[1] * 8.0) + (float)(v41[9] * 4.0),
              (float)(v41[2] * 8.0) + (float)(v41[10] * 4.0));
            return 22;
          }
          else
          {
            *((float *)a2 + 18) = v31 * 0.3;
            *((float *)a2 + 19) = v32 * 0.3;
            *((float *)a2 + 20) = v33 * 0.3;
            v34 = *(float **)(*((_DWORD *)this + 14) + 20);
            CPhysical::ApplyMoveForce(
              a2,
              (float)(*v34 * 6.0) + (float)(v34[8] * 5.0),
              (float)(v34[1] * 6.0) + (float)(v34[9] * 5.0),
              (float)(v34[2] * 6.0) + (float)(v34[10] * 5.0));
            return 25;
          }
        }
        else if ( v20 == 3 )
        {
          v35 = *(float *)(v4 + 72);
          v36 = *(float *)(v4 + 76);
          v37 = *(float *)(v4 + 80);
          if ( (float)((float)((float)(v35 * v35) + (float)(v36 * v36)) + (float)(v37 * v37)) <= 0.09 )
          {
            v42 = (__int64 *)(v4 + 72);
            v43 = *v42;
            *((_DWORD *)a2 + 20) = *((_DWORD *)v42 + 2);
            *((_QWORD *)a2 + 9) = v43;
            v44 = *(float **)(*((_DWORD *)this + 14) + 20);
            CPhysical::ApplyMoveForce(
              a2,
              (float)(v44[8] * 4.0) - (float)(*v44 * 8.0),
              (float)(v44[9] * 4.0) - (float)(v44[1] * 8.0),
              (float)(v44[10] * 4.0) - (float)(v44[2] * 8.0));
            return 23;
          }
          else
          {
            *((float *)a2 + 18) = v35 * 0.3;
            *((float *)a2 + 19) = v36 * 0.3;
            *((float *)a2 + 20) = v37 * 0.3;
            v38 = *(float **)(*((_DWORD *)this + 14) + 20);
            CPhysical::ApplyMoveForce(
              a2,
              (float)(v38[8] * 5.0) - (float)(*v38 * 6.0),
              (float)(v38[9] * 5.0) - (float)(v38[1] * 6.0),
              (float)(v38[10] * 5.0) - (float)(v38[2] * 6.0));
            return 27;
          }
        }
        else if ( *((_BYTE *)this + 52) )
        {
          return 15;
        }
        else
        {
          if ( (float)((float)((float)(*(float *)(v4 + 72) * *(float *)(v4 + 72))
                             + (float)(*(float *)(v4 + 76) * *(float *)(v4 + 76)))
                     + (float)(*(float *)(v4 + 80) * *(float *)(v4 + 80))) < 0.09 )
          {
            v21 = *(float **)(v4 + 20);
            CPhysical::ApplyMoveForce(
              a2,
              (float)(v21[8] * 5.0) - (float)(v21[4] * 6.0),
              (float)(v21[9] * 5.0) - (float)(v21[5] * 6.0),
              (float)(v21[10] * 5.0) - (float)(v21[6] * 6.0));
            v4 = *((_DWORD *)this + 14);
          }
          *((_DWORD *)a2 + 75) = v4;
          return 106;
        }
      }
      else
      {
LABEL_17:
        v18 = *(_QWORD *)((char *)this + 12);
        *((_DWORD *)a2 + 20) = *((_DWORD *)this + 5);
        *((_QWORD *)a2 + 9) = v18;
        v19 = *((_DWORD *)this + 14);
        v17 = 191;
        *((_DWORD *)a2 + 75) = v19;
      }
      return v17;
  }
}


// ============================================================

// Address: 0x375cf4
// Original: _ZN18CEventKnockOffBike18SetPedSafePositionEP4CPed
// Demangled: CEventKnockOffBike::SetPedSafePosition(CPed *)
int __fastcall CEventKnockOffBike::SetPedSafePosition(CEventKnockOffBike *this, CPed *a2)
{
  int v4; // r0
  float v5; // r1
  float v6; // s16
  float v7; // s0
  CMatrix *v8; // r0
  int v9; // r1
  int v10; // r0
  bool v11; // zf
  float *v12; // r0
  float *v13; // r1
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float *v17; // r2
  float v18; // s6
  float v19; // s2
  float v20; // s4
  float v21; // s6
  float v22; // s2
  float v23; // s0
  float v24; // s4
  float *v25; // r0
  bool v26; // r6
  const CVector *v27; // r9
  int v28; // r0
  int v29; // r2
  int (__fastcall *v30)(CPed *, _DWORD); // r3
  char *v31; // r0
  __int64 v32; // kr00_8
  int v33; // r2
  int v34; // r0
  int v35; // r3
  const CVector *v36; // r1
  CWorld *v37; // r0
  int v38; // r1
  int v39; // r0
  int v40; // r2
  CWorld *v41; // r0
  int v42; // r0
  _DWORD *v43; // r0
  int v44; // r2
  int v45; // r0
  int v46; // r3
  const CVector *v47; // r1
  CWorld *v48; // r0
  int v49; // r0
  _DWORD *v50; // r0
  int v51; // r1
  int v52; // r0
  int v53; // r2
  CWorld *v54; // r0
  char *v55; // r5
  CEntity *v56; // r0
  int v57; // r1
  unsigned int v58; // r6
  __int64 v59; // r2
  CEntity **v60; // r4
  int result; // r0
  bool v62[4]; // [sp+14h] [bp-2Ch]

  v4 = *((_DWORD *)this + 14);
  if ( *(_DWORD *)(v4 + 1440) == 9 )
  {
    *(_DWORD *)(v4 + 1628) = 0;
    *(_BYTE *)(*((_DWORD *)this + 14) + 1500) = 0;
    CPed::SetPedPositionInCar(a2);
    v4 = *((_DWORD *)this + 14);
  }
  v5 = *(float *)(v4 + 20);
  v6 = *(float *)(LODWORD(v5) + 40);
  if ( v5 == 0.0 )
    v7 = *(float *)(v4 + 16);
  else
    v7 = atan2f(COERCE_FLOAT(*(_DWORD *)(LODWORD(v5) + 16) ^ 0x80000000), *(float *)(LODWORD(v5) + 20));
  if ( v6 < 0.0 )
    v7 = COERCE_FLOAT(CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v7 + 3.1416), v5));
  v8 = (CMatrix *)*((_DWORD *)a2 + 5);
  *((float *)a2 + 343) = v7;
  *((float *)a2 + 344) = v7;
  if ( v8 )
    CMatrix::SetRotateZOnly(v8, v7);
  else
    *((float *)a2 + 4) = v7;
  v9 = *((_DWORD *)this + 14);
  v10 = *(_DWORD *)(v9 + 1440);
  v11 = v10 == 9;
  if ( v10 == 9 )
    v11 = *((unsigned __int8 *)this + 53) << 31 == 0;
  if ( v11 )
  {
    v12 = (float *)*((_DWORD *)a2 + 5);
    v13 = *(float **)(v9 + 20);
    v14 = v12[4];
    v15 = v12[5];
    v16 = v12[6];
    v17 = v12 + 12;
    if ( !v12 )
      v17 = (float *)((char *)a2 + 4);
    v18 = (float)(1.0 - fabsf((float)((float)(v13[4] * v14) + (float)(v13[5] * v15)) + (float)(v13[6] * v16))) * 0.8;
    v19 = v15 * v18;
    v20 = v16 * v18;
    v21 = v14 * v18;
    v22 = v17[1] - v19;
    v23 = v17[2] - v20;
    v24 = *v17 - v21;
    if ( v12 )
    {
      v12[12] = v24;
      *(float *)(*((_DWORD *)a2 + 5) + 52) = v22;
      v25 = (float *)(*((_DWORD *)a2 + 5) + 56);
    }
    else
    {
      v25 = (float *)((char *)a2 + 12);
      *((float *)a2 + 1) = v24;
      *((float *)a2 + 2) = v22;
    }
    *v25 = v23;
  }
  v26 = *((float *)a2 + 337) <= 0.0 || *((_DWORD *)this + 12);
  v27 = (CPed *)((char *)a2 + 4);
  CWorld::pIgnoreEntity = *((_DWORD *)this + 14);
  v28 = *(_DWORD *)a2;
  v29 = *((_DWORD *)a2 + 5);
  *((_DWORD *)a2 + 75) = CWorld::pIgnoreEntity;
  v30 = *(int (__fastcall **)(CPed *, _DWORD))(v28 + 56);
  v31 = (char *)a2 + 4;
  if ( v29 )
    v31 = (char *)(v29 + 48);
  v32 = *(_QWORD *)v31;
  *(_DWORD *)v62 = *((_DWORD *)v31 + 2);
  if ( v30(a2, 0) )
    goto LABEL_41;
  v33 = *((_DWORD *)this + 14);
  v34 = *((_DWORD *)a2 + 5);
  v35 = *(_DWORD *)(v33 + 20);
  v36 = (CPed *)((char *)a2 + 4);
  if ( v34 )
    v36 = (const CVector *)(v34 + 48);
  v37 = (CWorld *)(v35 + 48);
  if ( !v35 )
    v37 = (CWorld *)(v33 + 4);
  if ( !CWorld::GetIsLineOfSightClear(v37, v36, (const CVector *)((char *)&stderr + 1), 0, 0, 1, 0, 0, 0, v62[0]) )
  {
LABEL_41:
    *(float *)(*((_DWORD *)a2 + 5) + 56) = *(float *)(*((_DWORD *)a2 + 5) + 56) + 0.6;
    if ( (*(int (__fastcall **)(CPed *, _DWORD))(*(_DWORD *)a2 + 56))(a2, 0) )
      goto LABEL_56;
    v44 = *((_DWORD *)this + 14);
    v45 = *((_DWORD *)a2 + 5);
    v46 = *(_DWORD *)(v44 + 20);
    v47 = (CPed *)((char *)a2 + 4);
    if ( v45 )
      v47 = (const CVector *)(v45 + 48);
    v48 = (CWorld *)(v46 + 48);
    if ( !v46 )
      v48 = (CWorld *)(v44 + 4);
    if ( !CWorld::GetIsLineOfSightClear(v48, v47, (const CVector *)((char *)&stderr + 1), 0, 0, 1, 0, 0, 0, v62[0]) )
    {
LABEL_56:
      v49 = *((_DWORD *)a2 + 5);
      if ( v49 )
      {
        *(_DWORD *)(v49 + 48) = v32;
        *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v32);
        v50 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
      }
      else
      {
        v50 = (_DWORD *)((char *)a2 + 12);
        *(_QWORD *)((char *)a2 + 4) = v32;
      }
      *v50 = *(_DWORD *)v62;
      *(float *)(*((_DWORD *)a2 + 5) + 56) = *(float *)(*((_DWORD *)a2 + 5) + 56) + -0.6;
      if ( (*(int (__fastcall **)(CPed *, _DWORD))(*(_DWORD *)a2 + 56))(a2, 0) )
        goto LABEL_68;
      v51 = *((_DWORD *)this + 14);
      v52 = *((_DWORD *)a2 + 5);
      v53 = *(_DWORD *)(v51 + 20);
      if ( v52 )
        v27 = (const CVector *)(v52 + 48);
      v54 = (CWorld *)(v53 + 48);
      if ( !v53 )
        v54 = (CWorld *)(v51 + 4);
      if ( !CWorld::GetIsLineOfSightClear(v54, v27, (const CVector *)((char *)&stderr + 1), 0, 0, 1, 0, 0, 0, v62[0]) )
      {
LABEL_68:
        if ( CPed::PositionPedOutOfCollision(a2, *((char *)this + 55), *((CVehicle **)this + 14), v26) != 1 )
        {
          result = 0;
          goto LABEL_62;
        }
      }
    }
    *((_DWORD *)a2 + 75) = *((_DWORD *)this + 14);
  }
  else if ( *((_BYTE *)this + 54) == 49 )
  {
    *(float *)(*((_DWORD *)a2 + 5) + 56) = *(float *)(*((_DWORD *)a2 + 5) + 56) + 0.5;
    if ( (*(int (__fastcall **)(CPed *, _DWORD))(*(_DWORD *)a2 + 56))(a2, 0) )
      goto LABEL_39;
    v38 = *((_DWORD *)this + 14);
    v39 = *((_DWORD *)a2 + 5);
    v40 = *(_DWORD *)(v38 + 20);
    if ( v39 )
      v27 = (const CVector *)(v39 + 48);
    v41 = (CWorld *)(v40 + 48);
    if ( !v40 )
      v41 = (CWorld *)(v38 + 4);
    if ( !CWorld::GetIsLineOfSightClear(v41, v27, (const CVector *)((char *)&stderr + 1), 0, 0, 1, 0, 0, 0, v62[0]) )
    {
LABEL_39:
      v42 = *((_DWORD *)a2 + 5);
      if ( v42 )
      {
        *(_DWORD *)(v42 + 48) = v32;
        *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v32);
        v43 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
      }
      else
      {
        v43 = (_DWORD *)((char *)a2 + 12);
        *(_QWORD *)((char *)a2 + 4) = v32;
      }
      *v43 = *(_DWORD *)v62;
    }
  }
  v55 = (char *)a2 + 1156;
  v56 = (CEntity *)*((_DWORD *)a2 + 347);
  v57 = *((_DWORD *)a2 + 289);
  v58 = *((_DWORD *)a2 + 290) | 0x80000000;
  v59 = *(_QWORD *)((char *)a2 + 1164);
  *((_DWORD *)a2 + 290) = v58;
  if ( v56 )
  {
    v60 = (CEntity **)((char *)a2 + 1388);
    CEntity::CleanUpOldReference(v56, v60);
    *v60 = 0;
    v58 = *((_DWORD *)v55 + 1);
    v57 = *(_DWORD *)v55;
    v59 = *((_QWORD *)v55 + 1);
  }
  *(_DWORD *)v55 = v57 & 0xFFFFFFFC;
  *((_DWORD *)v55 + 1) = v58;
  result = 1;
  *((_QWORD *)v55 + 1) = v59;
LABEL_62:
  CWorld::pIgnoreEntity = 0;
  return result;
}


// ============================================================

// Address: 0x3760a4
// Original: _ZNK18CEventKnockOffBike15IsCriminalEventEv
// Demangled: CEventKnockOffBike::IsCriminalEvent(void)
int __fastcall CEventKnockOffBike::IsCriminalEvent(CEventKnockOffBike *this)
{
  return 1;
}


// ============================================================

// Address: 0x3760a8
// Original: _ZNK18CEventKnockOffBike19ReportCriminalEventEP4CPed
// Demangled: CEventKnockOffBike::ReportCriminalEvent(CPed *)
CPed *__fastcall CEventKnockOffBike::ReportCriminalEvent(CPed **this, CPed *a2)
{
  CPed *result; // r0
  bool v5; // zf

  result = (CPed *)(*((int (__fastcall **)(CPed **))*this + 8))(this);
  v5 = result == (CPed *)((char *)&stderr + 1);
  if ( result == (CPed *)((char *)&stderr + 1) )
  {
    result = (CPed *)*((_DWORD *)a2 + 359);
    v5 = result == (CPed *)byte_6;
  }
  if ( v5 )
  {
    result = this[12];
    if ( result )
    {
      result = (CPed *)CPed::IsPlayer(result);
      if ( result == (CPed *)((char *)&stderr + 1) )
      {
        FindPlayerWanted(-1);
        return (CPed *)CWanted::RegisterCrime();
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x37a554
// Original: _ZNK18CEventKnockOffBike12GetEventTypeEv
// Demangled: CEventKnockOffBike::GetEventType(void)
int __fastcall CEventKnockOffBike::GetEventType(CEventKnockOffBike *this)
{
  return 8;
}


// ============================================================

// Address: 0x37a558
// Original: _ZNK18CEventKnockOffBike16GetEventPriorityEv
// Demangled: CEventKnockOffBike::GetEventPriority(void)
int __fastcall CEventKnockOffBike::GetEventPriority(CEventKnockOffBike *this)
{
  return 70;
}


// ============================================================

// Address: 0x37a55c
// Original: _ZNK18CEventKnockOffBike11GetLifeTimeEv
// Demangled: CEventKnockOffBike::GetLifeTime(void)
int __fastcall CEventKnockOffBike::GetLifeTime(CEventKnockOffBike *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a560
// Original: _ZNK18CEventKnockOffBike5CloneEv
// Demangled: CEventKnockOffBike::Clone(void)
int __fastcall CEventKnockOffBike::Clone(CEventKnockOffBike *this)
{
  int v1; // r3
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r5
  int v6; // r2
  __int64 v7; // kr08_8
  CEntity *v8; // r3
  int v9; // r9
  CEntity *v10; // r2
  char v11; // r8
  char v12; // r10
  char v13; // r6
  __int64 v14; // d16
  int v15; // r0

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v3;
    if ( v3 == v4 )
    {
      v3 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v3);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v3) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v3 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = *(_QWORD *)((char *)this + 36);
  v8 = (CEntity *)*((_DWORD *)this + 12);
  v9 = *((_DWORD *)this + 11);
  v10 = (CEntity *)*((_DWORD *)this + 14);
  v11 = *((_BYTE *)this + 53);
  v12 = *((_BYTE *)this + 54);
  v13 = *((_BYTE *)this + 52);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)v3 = &off_66660C;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 20) = *((_DWORD *)this + 5);
  *(_QWORD *)(v3 + 12) = *(_QWORD *)((char *)this + 12);
  v14 = *((_QWORD *)this + 3);
  v15 = *((_DWORD *)this + 8);
  *(_DWORD *)(v3 + 48) = v8;
  *(_BYTE *)(v3 + 52) = v13;
  *(_DWORD *)(v3 + 32) = v15;
  *(_QWORD *)(v3 + 36) = v7;
  *(_DWORD *)(v3 + 44) = v9;
  *(_QWORD *)(v3 + 24) = v14;
  LOBYTE(v15) = *(_BYTE *)(v3 + 53);
  *(_BYTE *)(v3 + 54) = v12;
  *(_BYTE *)(v3 + 55) = 0;
  *(_BYTE *)(v3 + 53) = v15 & 0xFC | v11 & 3;
  *(_DWORD *)(v3 + 56) = v10;
  if ( v10 )
  {
    CEntity::RegisterReference(v10, (CEntity **)(v3 + 56));
    v8 = *(CEntity **)(v3 + 48);
  }
  if ( v8 )
    CEntity::RegisterReference(v8, (CEntity **)(v3 + 48));
  return v3;
}


// ============================================================

// Address: 0x37a658
// Original: _ZNK18CEventKnockOffBike18GetLocalSoundLevelEv
// Demangled: CEventKnockOffBike::GetLocalSoundLevel(void)
int __fastcall CEventKnockOffBike::GetLocalSoundLevel(CEventKnockOffBike *this)
{
  return 1114636288;
}


// ============================================================
