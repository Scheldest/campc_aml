
// Address: 0x1a134c
// Original: j__ZN28CTaskSimpleCreateCarAndGetInC2ERK7CVectori
// Demangled: CTaskSimpleCreateCarAndGetIn::CTaskSimpleCreateCarAndGetIn(CVector const&,int)
// attributes: thunk
void __fastcall CTaskSimpleCreateCarAndGetIn::CTaskSimpleCreateCarAndGetIn(
        CTaskSimpleCreateCarAndGetIn *this,
        const CVector *a2,
        int a3)
{
  _ZN28CTaskSimpleCreateCarAndGetInC2ERK7CVectori(this, a2, a3);
}


// ============================================================

// Address: 0x5062e4
// Original: _ZN28CTaskSimpleCreateCarAndGetInC2ERK7CVectori
// Demangled: CTaskSimpleCreateCarAndGetIn::CTaskSimpleCreateCarAndGetIn(CVector const&,int)
void __fastcall CTaskSimpleCreateCarAndGetIn::CTaskSimpleCreateCarAndGetIn(
        CTaskSimpleCreateCarAndGetIn *this,
        const CVector *a2,
        int a3)
{
  int v5; // r0
  __int64 v6; // d16

  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)v5 = &off_66B5A4;
  v6 = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 16) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(v5 + 20) = a3;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 44) = 0;
  *(_WORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 8) = v6;
}


// ============================================================

// Address: 0x506318
// Original: _ZN28CTaskSimpleCreateCarAndGetInD2Ev
// Demangled: CTaskSimpleCreateCarAndGetIn::~CTaskSimpleCreateCarAndGetIn()
void __fastcall CTaskSimpleCreateCarAndGetIn::~CTaskSimpleCreateCarAndGetIn(CTaskSimpleCreateCarAndGetIn *this)
{
  CTheScripts *v2; // r0

  v2 = (CTheScripts *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66B5A4;
  if ( v2 )
  {
    CTheScripts::CleanUpThisVehicle(v2, (CVehicle *)&off_66B5A4);
    CMissionCleanup::RemoveEntityFromList(
      (CMissionCleanup *)CTheScripts::MissionCleanUp,
      *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4)
                         - 1075391197 * ((*((_DWORD *)this + 6) - *(_DWORD *)CPools::ms_pVehiclePool) >> 2)) | (-422239488 * ((*((_DWORD *)this + 6) - *(_DWORD *)CPools::ms_pVehiclePool) >> 2)),
      1u);
  }
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x506374
// Original: _ZN28CTaskSimpleCreateCarAndGetInD0Ev
// Demangled: CTaskSimpleCreateCarAndGetIn::~CTaskSimpleCreateCarAndGetIn()
void __fastcall CTaskSimpleCreateCarAndGetIn::~CTaskSimpleCreateCarAndGetIn(CTaskSimpleCreateCarAndGetIn *this)
{
  CTheScripts *v2; // r0
  void *v3; // r0

  v2 = (CTheScripts *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66B5A4;
  if ( v2 )
  {
    CTheScripts::CleanUpThisVehicle(v2, (CVehicle *)&off_66B5A4);
    CMissionCleanup::RemoveEntityFromList(
      (CMissionCleanup *)CTheScripts::MissionCleanUp,
      *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4)
                         - 1075391197 * ((*((_DWORD *)this + 6) - *(_DWORD *)CPools::ms_pVehiclePool) >> 2)) | (-422239488 * ((*((_DWORD *)this + 6) - *(_DWORD *)CPools::ms_pVehiclePool) >> 2)),
      1u);
  }
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x5063d4
// Original: _ZN28CTaskSimpleCreateCarAndGetIn10ProcessPedEP4CPed
// Demangled: CTaskSimpleCreateCarAndGetIn::ProcessPed(CPed *)
bool __fastcall CTaskSimpleCreateCarAndGetIn::ProcessPed(CTaskSimpleCreateCarAndGetIn *this, CPed *a2)
{
  int v4; // r1
  double v5; // d16
  CTaskSimpleStandStill *v6; // r0
  int v7; // r2
  CTheScripts *v8; // r0
  CEntity *CarForScript; // r6
  int v10; // r0
  CEntity **v11; // r8
  CVehicle *v12; // r1
  char *v13; // r6
  unsigned int v14; // r0
  unsigned int v15; // r1
  CPedPlacement *v17; // r8
  int v18; // r3
  const CVector *v19; // r1
  int v20; // r0
  _DWORD v21[2]; // [sp+1Ch] [bp-64h] BYREF
  char v22; // [sp+24h] [bp-5Ch]
  int v23; // [sp+28h] [bp-58h]
  CEntity *v24; // [sp+2Ch] [bp-54h]
  int v25; // [sp+30h] [bp-50h]
  __int16 v26; // [sp+34h] [bp-4Ch]
  char v27; // [sp+36h] [bp-4Ah]
  _BYTE v28[32]; // [sp+38h] [bp-48h] BYREF
  double v29; // [sp+58h] [bp-28h]
  int v30; // [sp+60h] [bp-20h]
  char v31; // [sp+67h] [bp-19h]

  CPathFind::FindNodeClosestToCoors();
  CPathFind::FindNodeCoorsForScript();
  if ( v31 )
  {
    *((_BYTE *)this + 48) = 0;
    v4 = *((_DWORD *)this + 6);
    v5 = v29;
    *((_DWORD *)this + 9) = v30;
    *(double *)((char *)this + 28) = v5;
    if ( v4 )
      goto LABEL_3;
    if ( CCamera::IsSphereVisible((CCamera *)&TheCamera, (CTaskSimpleCreateCarAndGetIn *)((char *)this + 28), 3.0) )
      return 1;
    v17 = (CPed *)((char *)a2 + 4);
    v18 = *((_DWORD *)a2 + 5);
    v19 = (CPed *)((char *)a2 + 4);
    if ( v18 )
      v19 = (const CVector *)(v18 + 48);
    v13 = (char *)&stderr + 1;
    if ( !CCamera::IsSphereVisible(
            (CCamera *)&TheCamera,
            v19,
            *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)a2 + 19)]) + 44) + 36)) )
    {
      v20 = *((_DWORD *)a2 + 5);
      if ( v20 )
        v17 = (CPedPlacement *)(v20 + 48);
      if ( CPedPlacement::IsPositionClearForPed(
             v17,
             (const CVector *)0x40400000,
             NAN,
             0,
             (CEntity **)((char *)&stderr + 1),
             (unsigned __int8)&stderr + 1,
             (unsigned __int8)&stderr + 1,
             1u) == 1 )
      {
LABEL_3:
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v28, 0, 0, 0, 8.0);
        CTaskSimpleStandStill::ProcessPed(v6, a2);
        if ( LOBYTE(CStreaming::ms_aInfoForModel[10 * *((_DWORD *)this + 5) + 8]) == 1 )
        {
          v8 = (CTheScripts *)*((_DWORD *)this + 6);
          if ( !v8 )
          {
            CarForScript = (CEntity *)CCarCtrl::CreateCarForScript();
            *((_DWORD *)this + 6) = CarForScript;
            CTaskSimple::CTaskSimple((CTaskSimple *)v21);
            v11 = (CEntity **)(v10 + 16);
            v22 = 0;
            v21[0] = &off_66B278;
            v23 = 0;
            v24 = CarForScript;
            v27 = 0;
            v26 = 0;
            v25 = 0;
            if ( CarForScript )
              CEntity::RegisterReference(CarForScript, v11);
            LOBYTE(v26) = 1;
            CTaskSimpleCarSetPedInAsDriver::ProcessPed((CTaskSimpleCarSetPedInAsDriver *)v21, a2);
            v21[0] = &off_66B278;
            if ( v24 )
              CEntity::CleanUpOldReference(v24, v11);
            CTask::~CTask((CTask *)v21);
            v8 = (CTheScripts *)*((_DWORD *)this + 6);
          }
          v12 = (CVehicle *)*((_DWORD *)v8 + 7);
          v13 = 0;
          if ( ((unsigned int)v12 & 0x40004) == 0 )
          {
            CTheScripts::CleanUpThisVehicle(v8, v12);
            CMissionCleanup::RemoveEntityFromList(
              (CMissionCleanup *)CTheScripts::MissionCleanUp,
              *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4)
                                 - 1075391197 * ((*((_DWORD *)this + 6) - *(_DWORD *)CPools::ms_pVehiclePool) >> 2)) | (-422239488 * ((*((_DWORD *)this + 6) - *(_DWORD *)CPools::ms_pVehiclePool) >> 2)),
              1u);
            *((_DWORD *)this + 6) = 0;
            v13 = (_BYTE *)(&stderr + 1);
          }
        }
        else
        {
          CStreaming::RequestModel(*((CStreaming **)this + 5), 12, v7);
          v13 = 0;
        }
        CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v28);
      }
    }
  }
  else
  {
    if ( !*((_BYTE *)this + 48) )
    {
      *((_QWORD *)this + 5) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x7D000000000LL;
      *((_BYTE *)this + 48) = 1;
    }
    if ( *((_BYTE *)this + 49) )
    {
      v14 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 49) = 0;
      *((_DWORD *)this + 10) = v14;
      v15 = v14;
    }
    else
    {
      v15 = *((_DWORD *)this + 10);
      v14 = CTimer::m_snTimeInMilliseconds;
    }
    return v15 + *((_DWORD *)this + 11) <= v14;
  }
  return (bool)v13;
}


// ============================================================

// Address: 0x507404
// Original: _ZNK28CTaskSimpleCreateCarAndGetIn5CloneEv
// Demangled: CTaskSimpleCreateCarAndGetIn::Clone(void)
int __fastcall CTaskSimpleCreateCarAndGetIn::Clone(CTaskSimpleCreateCarAndGetIn *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r5
  int result; // r0
  __int64 v6; // d16

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_34, a2);
  v4 = *((_DWORD *)this + 5);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)result = &off_66B5A4;
  v6 = *((_QWORD *)this + 1);
  *(_DWORD *)(result + 16) = *((_DWORD *)this + 4);
  *(_DWORD *)(result + 20) = v4;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_QWORD *)(result + 8) = v6;
  return result;
}


// ============================================================

// Address: 0x507440
// Original: _ZNK28CTaskSimpleCreateCarAndGetIn11GetTaskTypeEv
// Demangled: CTaskSimpleCreateCarAndGetIn::GetTaskType(void)
int __fastcall CTaskSimpleCreateCarAndGetIn::GetTaskType(CTaskSimpleCreateCarAndGetIn *this)
{
  return 832;
}


// ============================================================

// Address: 0x507446
// Original: _ZN28CTaskSimpleCreateCarAndGetIn13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCreateCarAndGetIn::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCreateCarAndGetIn::MakeAbortable(
        CTaskSimpleCreateCarAndGetIn *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================
