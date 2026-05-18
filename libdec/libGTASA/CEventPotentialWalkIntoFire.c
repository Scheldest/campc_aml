
// Address: 0x19ad30
// Original: j__ZN27CEventPotentialWalkIntoFireC2ERK7CVectorfi
// Demangled: CEventPotentialWalkIntoFire::CEventPotentialWalkIntoFire(CVector const&,float,int)
// attributes: thunk
void __fastcall CEventPotentialWalkIntoFire::CEventPotentialWalkIntoFire(
        CEventPotentialWalkIntoFire *this,
        const CVector *a2,
        float a3,
        int a4)
{
  _ZN27CEventPotentialWalkIntoFireC2ERK7CVectorfi(this, a2, a3, a4);
}


// ============================================================

// Address: 0x377400
// Original: _ZN27CEventPotentialWalkIntoFireC2ERK7CVectorfi
// Demangled: CEventPotentialWalkIntoFire::CEventPotentialWalkIntoFire(CVector const&,float,int)
int __fastcall CEventPotentialWalkIntoFire::CEventPotentialWalkIntoFire(int result, __int64 *a2, float a3, int a4)
{
  int (*v4)(); // lr
  int v5; // s0
  __int64 v6; // d16

  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 13107456;
  v4 = sub_377480;
  if ( a3 < 2.0 )
    v4 = (int (*)())&loc_377484;
  v5 = *(_DWORD *)v4;
  *(_WORD *)(result + 12) = -1;
  *(_DWORD *)result = &off_666A4C;
  if ( a3 < 1.0 )
    v5 = 1065772646;
  v6 = *a2;
  *(_DWORD *)(result + 24) = *((_DWORD *)a2 + 2);
  *(float *)(result + 28) = a3;
  *(_DWORD *)(result + 36) = a4;
  *(_QWORD *)(result + 16) = v6;
  *(_DWORD *)(result + 32) = v5;
  return result;
}


// ============================================================

// Address: 0x377488
// Original: _ZN27CEventPotentialWalkIntoFireD0Ev
// Demangled: CEventPotentialWalkIntoFire::~CEventPotentialWalkIntoFire()
void __fastcall CEventPotentialWalkIntoFire::~CEventPotentialWalkIntoFire(CEventPotentialWalkIntoFire *this)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pEventPool;
  v2 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x3774b8
// Original: _ZNK27CEventPotentialWalkIntoFire10AffectsPedEP4CPed
// Demangled: CEventPotentialWalkIntoFire::AffectsPed(CPed *)
int __fastcall CEventPotentialWalkIntoFire::AffectsPed(CEventPotentialWalkIntoFire *this, CPed *a2)
{
  CTask *SimplestActiveTask; // r0
  const CTask *v5; // r1
  CTask *v6; // r6
  int IsGoToTask; // r1
  int result; // r0
  int v9; // r0
  const CVector *v10; // r1
  _BYTE v11[12]; // [sp+Ch] [bp-3Ch] BYREF
  _BYTE v12[12]; // [sp+18h] [bp-30h] BYREF
  _BYTE v13[36]; // [sp+24h] [bp-24h] BYREF

  if ( CPed::IsAlive(a2) != 1 )
    return 0;
  if ( *((_DWORD *)this + 9) == 1 )
    return 0;
  SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  v6 = SimplestActiveTask;
  if ( !SimplestActiveTask )
    return 0;
  IsGoToTask = CTask::IsGoToTask(SimplestActiveTask, v5);
  result = 0;
  if ( IsGoToTask )
  {
    CColSphere::Set(
      (CColSphere *)v13,
      *((float *)this + 8),
      (CEventPotentialWalkIntoFire *)((char *)this + 16),
      0,
      0,
      0xFFu);
    v9 = *((_DWORD *)a2 + 5);
    v10 = (const CVector *)(v9 + 48);
    if ( !v9 )
      v10 = (CPed *)((char *)a2 + 4);
    return CColSphere::IntersectEdge((CColSphere *)v13, v10, (CTask *)((char *)v6 + 12), (CVector *)v12, (CVector *)v11);
  }
  return result;
}


// ============================================================

// Address: 0x37ad28
// Original: _ZNK27CEventPotentialWalkIntoFire12GetEventTypeEv
// Demangled: CEventPotentialWalkIntoFire::GetEventType(void)
int __fastcall CEventPotentialWalkIntoFire::GetEventType(CEventPotentialWalkIntoFire *this)
{
  return 46;
}


// ============================================================

// Address: 0x37ad2c
// Original: _ZNK27CEventPotentialWalkIntoFire16GetEventPriorityEv
// Demangled: CEventPotentialWalkIntoFire::GetEventPriority(void)
int __fastcall CEventPotentialWalkIntoFire::GetEventPriority(CEventPotentialWalkIntoFire *this)
{
  return 31;
}


// ============================================================

// Address: 0x37ad30
// Original: _ZNK27CEventPotentialWalkIntoFire11GetLifeTimeEv
// Demangled: CEventPotentialWalkIntoFire::GetLifeTime(void)
int __fastcall CEventPotentialWalkIntoFire::GetLifeTime(CEventPotentialWalkIntoFire *this)
{
  return 0;
}


// ============================================================

// Address: 0x37ad34
// Original: _ZNK27CEventPotentialWalkIntoFire13CloneEditableEv
// Demangled: CEventPotentialWalkIntoFire::CloneEditable(void)
int __fastcall CEventPotentialWalkIntoFire::CloneEditable(CEventPotentialWalkIntoFire *this)
{
  int v1; // lr
  _DWORD *v2; // r2
  int v3; // r1
  int v4; // r12
  int v5; // r3
  int v6; // r4
  float v7; // s4
  int v8; // r3
  int (*v9)(); // r4
  int v10; // s0
  __int64 v11; // d16
  int v12; // r2
  int result; // r0

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
  v7 = *((float *)this + 7);
  v8 = *((_DWORD *)this + 9);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  v9 = sub_37AE0C;
  if ( v7 < 2.0 )
    v9 = (int (*)())&loc_37AE10;
  v10 = *(_DWORD *)v9;
  *(_WORD *)(v3 + 12) = -1;
  if ( v7 < 1.0 )
    v10 = 1065772646;
  *(_DWORD *)v3 = &off_666A4C;
  v11 = *((_QWORD *)this + 2);
  v12 = *((_DWORD *)this + 6);
  result = v3;
  *(_DWORD *)(v3 + 24) = v12;
  *(_DWORD *)(v3 + 36) = v8;
  *(_QWORD *)(v3 + 16) = v11;
  *(float *)(v3 + 28) = v7;
  *(_DWORD *)(v3 + 32) = v10;
  return result;
}


// ============================================================
