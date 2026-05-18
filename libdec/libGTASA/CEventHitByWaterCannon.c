
// Address: 0x191e60
// Original: j__ZN22CEventHitByWaterCannonC2ERK7CVectorS2_
// Demangled: CEventHitByWaterCannon::CEventHitByWaterCannon(CVector const&,CVector const&)
// attributes: thunk
void __fastcall CEventHitByWaterCannon::CEventHitByWaterCannon(
        CEventHitByWaterCannon *this,
        const CVector *a2,
        const CVector *a3)
{
  _ZN22CEventHitByWaterCannonC2ERK7CVectorS2_(this, a2, a3);
}


// ============================================================

// Address: 0x376b7c
// Original: _ZN22CEventHitByWaterCannonC2ERK7CVectorS2_
// Demangled: CEventHitByWaterCannon::CEventHitByWaterCannon(CVector const&,CVector const&)
int __fastcall CEventHitByWaterCannon::CEventHitByWaterCannon(int result, __int64 *a2, __int64 *a3)
{
  __int64 v3; // d16
  __int64 v4; // d16

  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)result = &off_6667E0;
  *(_DWORD *)(result + 4) = 0;
  v3 = *a2;
  *(_DWORD *)(result + 20) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(result + 12) = v3;
  v4 = *a3;
  *(_DWORD *)(result + 32) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(result + 24) = v4;
  return result;
}


// ============================================================

// Address: 0x376bb8
// Original: _ZN22CEventHitByWaterCannonD0Ev
// Demangled: CEventHitByWaterCannon::~CEventHitByWaterCannon()
void __fastcall CEventHitByWaterCannon::~CEventHitByWaterCannon(CEventHitByWaterCannon *this)
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

// Address: 0x376be8
// Original: _ZNK22CEventHitByWaterCannon10AffectsPedEP4CPed
// Demangled: CEventHitByWaterCannon::AffectsPed(CPed *)
bool __fastcall CEventHitByWaterCannon::AffectsPed(CEventHitByWaterCannon *this, CPed *a2)
{
  int ActiveTask; // r0
  _BOOL4 result; // r0

  result = 0;
  if ( CPed::IsAlive(a2) == 1 )
  {
    ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    if ( !ActiveTask || (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) != 208 )
      return 1;
  }
  return result;
}


// ============================================================

// Address: 0x37a8d4
// Original: _ZNK22CEventHitByWaterCannon12GetEventTypeEv
// Demangled: CEventHitByWaterCannon::GetEventType(void)
int __fastcall CEventHitByWaterCannon::GetEventType(CEventHitByWaterCannon *this)
{
  return 64;
}


// ============================================================

// Address: 0x37a8d8
// Original: _ZNK22CEventHitByWaterCannon16GetEventPriorityEv
// Demangled: CEventHitByWaterCannon::GetEventPriority(void)
int __fastcall CEventHitByWaterCannon::GetEventPriority(CEventHitByWaterCannon *this)
{
  return 64;
}


// ============================================================

// Address: 0x37a8dc
// Original: _ZNK22CEventHitByWaterCannon11GetLifeTimeEv
// Demangled: CEventHitByWaterCannon::GetLifeTime(void)
int __fastcall CEventHitByWaterCannon::GetLifeTime(CEventHitByWaterCannon *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a8e0
// Original: _ZNK22CEventHitByWaterCannon5CloneEv
// Demangled: CEventHitByWaterCannon::Clone(void)
int __fastcall CEventHitByWaterCannon::Clone(CEventHitByWaterCannon *this)
{
  int v1; // lr
  _DWORD *v2; // r2
  int v3; // r1
  int v4; // r12
  int v5; // r3
  int v6; // r4
  __int64 v7; // d16
  __int64 v8; // d16
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
  *(_BYTE *)(v3 + 8) = 0;
  *(_QWORD *)v3 = (unsigned int)&off_6667E0;
  v7 = *(_QWORD *)((char *)this + 12);
  *(_DWORD *)(v3 + 20) = *((_DWORD *)this + 5);
  *(_QWORD *)(v3 + 12) = v7;
  v8 = *((_QWORD *)this + 3);
  *(_DWORD *)(v3 + 32) = *((_DWORD *)this + 8);
  result = v3;
  *(_QWORD *)(v3 + 24) = v8;
  return result;
}


// ============================================================

// Address: 0x37a970
// Original: _ZNK22CEventHitByWaterCannon18GetLocalSoundLevelEv
// Demangled: CEventHitByWaterCannon::GetLocalSoundLevel(void)
int __fastcall CEventHitByWaterCannon::GetLocalSoundLevel(CEventHitByWaterCannon *this)
{
  return 1113325568;
}


// ============================================================
