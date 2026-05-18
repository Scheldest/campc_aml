
// Address: 0x190558
// Original: j__ZN29CTaskComplexReactToGunAimedAtC2EP4CPed
// Demangled: CTaskComplexReactToGunAimedAt::CTaskComplexReactToGunAimedAt(CPed *)
// attributes: thunk
void __fastcall CTaskComplexReactToGunAimedAt::CTaskComplexReactToGunAimedAt(
        CTaskComplexReactToGunAimedAt *this,
        CPed *a2)
{
  _ZN29CTaskComplexReactToGunAimedAtC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x546df0
// Original: _ZN29CTaskComplexReactToGunAimedAtC2EP4CPed
// Demangled: CTaskComplexReactToGunAimedAt::CTaskComplexReactToGunAimedAt(CPed *)
void __fastcall CTaskComplexReactToGunAimedAt::CTaskComplexReactToGunAimedAt(
        CTaskComplexReactToGunAimedAt *this,
        CPed *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 12) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &off_66D490;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x546e28
// Original: _ZN29CTaskComplexReactToGunAimedAtD2Ev
// Demangled: CTaskComplexReactToGunAimedAt::~CTaskComplexReactToGunAimedAt()
void __fastcall CTaskComplexReactToGunAimedAt::~CTaskComplexReactToGunAimedAt(CTaskComplexReactToGunAimedAt *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D490;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x546e54
// Original: _ZN29CTaskComplexReactToGunAimedAtD0Ev
// Demangled: CTaskComplexReactToGunAimedAt::~CTaskComplexReactToGunAimedAt()
void __fastcall CTaskComplexReactToGunAimedAt::~CTaskComplexReactToGunAimedAt(CTaskComplexReactToGunAimedAt *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D490;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x546e84
// Original: _ZN29CTaskComplexReactToGunAimedAt17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexReactToGunAimedAt::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexReactToGunAimedAt::CreateNextSubTask(CTaskComplexReactToGunAimedAt *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  bool v6; // zf

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 < 704 )
  {
    switch ( v4 )
    {
      case 202:
        if ( *((_DWORD *)a2 + 356) )
        {
          v5 = 704;
          if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
            v5 = 902;
        }
        else
        {
          v5 = 902;
        }
        return CTaskComplexReactToGunAimedAt::CreateSubTask(this, v5, a2);
      case 412:
        CPed::Say(a2, 0x73u, 0, 1.0, 0, 0, 0);
        v5 = 911;
        break;
      case 413:
        v5 = 912;
        break;
      default:
        return 0;
    }
  }
  else if ( v4 > 910 )
  {
    v6 = v4 == 911;
    if ( v4 != 911 )
      v6 = v4 == 912;
    if ( !v6 )
      return 0;
    v5 = 1302;
  }
  else
  {
    v5 = 902;
    if ( v4 != 704 )
    {
      if ( v4 == 902 )
      {
        if ( *(unsigned __int8 *)(*((_DWORD *)a2 + 360) + 48) >> 7 )
        {
          v5 = 412;
        }
        else
        {
          CPed::Say(a2, 0x72u, 0, 1.0, 0, 0, 0);
          v5 = 413;
        }
        return CTaskComplexReactToGunAimedAt::CreateSubTask(this, v5, a2);
      }
      return 0;
    }
  }
  return CTaskComplexReactToGunAimedAt::CreateSubTask(this, v5, a2);
}


// ============================================================

// Address: 0x546f58
// Original: _ZN29CTaskComplexReactToGunAimedAt13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexReactToGunAimedAt::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexReactToGunAimedAt::CreateSubTask(CEntity **this, int a2, CPed *a3)
{
  int v5; // r4
  CEntity *v6; // r0
  int v7; // r1
  int v8; // r2
  float *v9; // r3
  float *v10; // r1
  CGeneral *RadianAngleBetweenPoints; // r0
  float v12; // r1
  int v13; // r5
  unsigned int v14; // r1
  unsigned __int16 v15; // r0
  _DWORD *v16; // r0
  CEntity *v17; // r0
  int v18; // r1
  float v19; // r2
  float *v20; // r3
  float *v21; // r1
  unsigned __int8 NodeHeadingFromVector; // r6
  unsigned int v23; // r1
  __int64 v24; // r0
  int v25; // r6
  float v27; // [sp+0h] [bp-28h]

  v5 = 0;
  if ( a2 < 704 )
  {
    switch ( a2 )
    {
      case 202:
        if ( *((_DWORD *)a3 + 356) && *((unsigned __int8 *)a3 + 1157) << 31 )
          v25 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) + 1000;
        else
          v25 = 0;
        v5 = CTask::operator new((CTask *)&off_18, a2);
        CTaskSimple::CTaskSimple((CTaskSimple *)v5);
        *(_WORD *)(v5 + 16) = 0;
        v16 = &`vtable for'CTaskSimplePause;
        *(_DWORD *)(v5 + 20) = v25;
        *(_DWORD *)(v5 + 8) = 0;
        *(_DWORD *)(v5 + 12) = 0;
        break;
      case 412:
        v5 = CTask::operator new((CTask *)&dword_20, 0x19Cu);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 143, 1082130432, 412, (int)"Cower", 0);
        v16 = &`vtable for'CTaskSimpleCower;
        break;
      case 413:
        v5 = CTask::operator new((CTask *)&dword_34, 0x19Du);
        v15 = rand();
        CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
          v5,
          0,
          142,
          1082130432,
          -4.0,
          (int)(float)((float)((float)v15 * 0.000015259) * 2000.0) + 3000,
          413,
          (int)"HandsUp",
          0);
        v16 = &`vtable for'CTaskSimpleHandsUp;
        break;
      default:
        return v5;
    }
    *(_DWORD *)v5 = *v16 + 8;
    return v5;
  }
  if ( a2 > 910 )
  {
    if ( a2 == 911 )
    {
      v5 = CTask::operator new((CTask *)&dword_40, 0x38Fu);
      CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(
        (CTaskComplexSmartFleeEntity *)v5,
        this[3],
        0,
        60.0,
        1000000,
        1000,
        1.0);
    }
    else if ( a2 == 912 )
    {
      v17 = this[3];
      v18 = *((_DWORD *)a3 + 5);
      v19 = *((float *)v17 + 5);
      v20 = (float *)(v18 + 48);
      if ( !v18 )
        v20 = (float *)((char *)a3 + 4);
      v21 = (float *)(LODWORD(v19) + 48);
      if ( v19 == 0.0 )
        v21 = (float *)((char *)v17 + 4);
      NodeHeadingFromVector = CGeneral::GetNodeHeadingFromVector(COERCE_CGENERAL_(*v20 - *v21), v20[1] - v21[1], v19);
      v5 = CTask::operator new((CTask *)&dword_38, v23);
      CTaskComplexWander::CTaskComplexWander((CTaskComplexWander *)v5, 4, NodeHeadingFromVector, 1, 0.5);
      *(_WORD *)(v5 + 48) = 0;
      *(_DWORD *)(v5 + 52) = 0;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)(v5 + 44) = 0;
      *(_DWORD *)v5 = &off_66C59C;
      v24 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x271000000000LL;
      *((_BYTE *)this + 24) = 1;
      *((_QWORD *)this + 2) = v24;
    }
  }
  else if ( a2 == 704 )
  {
    v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
    CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, *((CVehicle **)a3 + 356), 0, 0, 1, 0);
  }
  else if ( a2 == 902 )
  {
    v6 = this[3];
    v7 = *((_DWORD *)a3 + 5);
    v8 = *((_DWORD *)v6 + 5);
    v9 = (float *)(v7 + 48);
    if ( !v7 )
      v9 = (float *)((char *)a3 + 4);
    v10 = (float *)(v8 + 48);
    if ( !v8 )
      v10 = (float *)((char *)v6 + 4);
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                             COERCE_CGENERAL_(*v10 - *v9),
                                             v10[1] - v9[1],
                                             0.0,
                                             0.0,
                                             v27);
    v13 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v12);
    *((_DWORD *)a3 + 344) = v13;
    v5 = CTask::operator new((CTask *)&off_18, v14);
    CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading((CTaskSimpleAchieveHeading *)v5, *(float *)&v13, 0.5, 0.2);
  }
  return v5;
}


// ============================================================

// Address: 0x547240
// Original: _ZN29CTaskComplexReactToGunAimedAt18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexReactToGunAimedAt::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexReactToGunAimedAt::CreateFirstSubTask(CTaskComplexReactToGunAimedAt *this, CPed *a2)
{
  int v2; // r5
  CTaskSimple *v3; // r0
  int result; // r0

  if ( *((_DWORD *)a2 + 356) && *((unsigned __int8 *)a2 + 1157) << 31 )
    v2 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) + 1000;
  else
    v2 = 0;
  v3 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, (unsigned int)a2);
  CTaskSimple::CTaskSimple(v3);
  *(_WORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = v2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_665760;
  return result;
}


// ============================================================

// Address: 0x5472ac
// Original: _ZN29CTaskComplexReactToGunAimedAt14ControlSubTaskEP4CPed
// Demangled: CTaskComplexReactToGunAimedAt::ControlSubTask(CPed *)
int __fastcall CTaskComplexReactToGunAimedAt::ControlSubTask(CTaskComplexReactToGunAimedAt *this, CPed *a2)
{
  int v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r1

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v4 = *((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 912 && *((_BYTE *)this + 24) )
  {
    if ( *((_BYTE *)this + 25) )
    {
      v5 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 25) = 0;
      *((_DWORD *)this + 4) = v5;
      v6 = v5;
    }
    else
    {
      v6 = *((_DWORD *)this + 4);
      v5 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v6 + *((_DWORD *)this + 5) <= v5
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) )
    {
      return 0;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x547e54
// Original: _ZNK29CTaskComplexReactToGunAimedAt5CloneEv
// Demangled: CTaskComplexReactToGunAimedAt::Clone(void)
int __fastcall CTaskComplexReactToGunAimedAt::Clone(CTaskComplexReactToGunAimedAt *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_WORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)v3 = &off_66D490;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x547e94
// Original: _ZNK29CTaskComplexReactToGunAimedAt11GetTaskTypeEv
// Demangled: CTaskComplexReactToGunAimedAt::GetTaskType(void)
int __fastcall CTaskComplexReactToGunAimedAt::GetTaskType(CTaskComplexReactToGunAimedAt *this)
{
  return 601;
}


// ============================================================

// Address: 0x547e9c
// Original: _ZN29CTaskComplexReactToGunAimedAt9SerializeEv
// Demangled: CTaskComplexReactToGunAimedAt::Serialize(void)
void __fastcall CTaskComplexReactToGunAimedAt::Serialize(CTaskComplexReactToGunAimedAt *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r4
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexReactToGunAimedAt *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexReactToGunAimedAt *))(*(_DWORD *)this + 20))(this) == 601 )
  {
    v5 = (CPed *)*((_DWORD *)this + 3);
    if ( v5 )
    {
      v6 = GettPoolPedRef(v5);
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      v9 = v7;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      v9 = v11;
    }
    j_free(v9);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexReactToGunAimedAt *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(601, v10);
  }
}


// ============================================================
