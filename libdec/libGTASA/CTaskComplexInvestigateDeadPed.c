
// Address: 0x19567c
// Original: j__ZN30CTaskComplexInvestigateDeadPedC2EP4CPed
// Demangled: CTaskComplexInvestigateDeadPed::CTaskComplexInvestigateDeadPed(CPed *)
// attributes: thunk
void __fastcall CTaskComplexInvestigateDeadPed::CTaskComplexInvestigateDeadPed(
        CTaskComplexInvestigateDeadPed *this,
        CPed *a2)
{
  _ZN30CTaskComplexInvestigateDeadPedC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x546744
// Original: _ZN30CTaskComplexInvestigateDeadPedC2EP4CPed
// Demangled: CTaskComplexInvestigateDeadPed::CTaskComplexInvestigateDeadPed(CPed *)
void __fastcall CTaskComplexInvestigateDeadPed::CTaskComplexInvestigateDeadPed(
        CTaskComplexInvestigateDeadPed *this,
        CPed *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 12) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 5) = 0;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_66D454;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x546790
// Original: _ZN30CTaskComplexInvestigateDeadPedD2Ev
// Demangled: CTaskComplexInvestigateDeadPed::~CTaskComplexInvestigateDeadPed()
void __fastcall CTaskComplexInvestigateDeadPed::~CTaskComplexInvestigateDeadPed(CTaskComplexInvestigateDeadPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D454;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5467bc
// Original: _ZN30CTaskComplexInvestigateDeadPedD0Ev
// Demangled: CTaskComplexInvestigateDeadPed::~CTaskComplexInvestigateDeadPed()
void __fastcall CTaskComplexInvestigateDeadPed::~CTaskComplexInvestigateDeadPed(CTaskComplexInvestigateDeadPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D454;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x5467ec
// Original: _ZN30CTaskComplexInvestigateDeadPed16ComputeTargetPosEP4CPedR7CVector
// Demangled: CTaskComplexInvestigateDeadPed::ComputeTargetPos(CPed *,CVector &)
int __fastcall CTaskComplexInvestigateDeadPed::ComputeTargetPos(
        CTaskComplexInvestigateDeadPed *this,
        CPed *a2,
        CVector *a3)
{
  int v5; // r0
  int v6; // r2
  int v7; // r3
  float *v8; // r4
  float *v9; // r1
  float v10; // s2
  float v11; // s6
  float v12; // s0
  int result; // r0
  int v14; // r1
  float *v15; // r2
  float v16; // s2
  float v17; // s4
  float v18; // [sp+4h] [bp-1Ch] BYREF
  float v19; // [sp+8h] [bp-18h]
  float v20; // [sp+Ch] [bp-14h]

  v5 = *((_DWORD *)this + 3);
  v6 = *((_DWORD *)a2 + 5);
  v7 = *(_DWORD *)(v5 + 20);
  v8 = (float *)(v6 + 48);
  if ( !v6 )
    v8 = (float *)((char *)a2 + 4);
  v9 = (float *)(v7 + 48);
  v10 = v8[1];
  if ( !v7 )
    v9 = (float *)(v5 + 4);
  v11 = v9[1];
  v12 = *v8 - *v9;
  v20 = 0.0;
  v19 = v10 - v11;
  v18 = v12;
  CVector::Normalise((CVector *)&v18);
  result = *((_DWORD *)this + 3);
  v14 = *(_DWORD *)(result + 20);
  v15 = (float *)(v14 + 48);
  if ( !v14 )
    v15 = (float *)(result + 4);
  v16 = (float)(v19 + v19) + v15[1];
  v17 = (float)(v20 + v20) + v15[2];
  *(float *)a3 = (float)(v18 + v18) + *v15;
  *((float *)a3 + 1) = v16;
  *((float *)a3 + 2) = v17;
  return result;
}


// ============================================================

// Address: 0x546890
// Original: _ZN30CTaskComplexInvestigateDeadPed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexInvestigateDeadPed::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexInvestigateDeadPed::CreateNextSubTask(CTaskComplexInvestigateDeadPed *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r12
  int v7; // r1
  int v8; // r0
  __int64 *v9; // r3
  int v10; // r1
  __int64 v11; // r2
  int v13; // [sp+0h] [bp-38h]

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 > 901 )
  {
    switch ( v4 )
    {
      case 902:
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"TaskInvDeadPed",
          a2,
          *((_DWORD *)this + 3),
          *((_DWORD *)this + 14),
          5,
          0,
          0,
          0.25,
          500,
          3,
          0);
        v5 = 1210;
        return CTaskComplexInvestigateDeadPed::CreateSubTask(this, v5, a2);
      case 903:
        v6 = *((_DWORD *)this + 3);
        v7 = *((_DWORD *)a2 + 5);
        v8 = *(_DWORD *)(v6 + 20);
        v9 = (__int64 *)(v7 + 48);
        if ( !v7 )
          v9 = (__int64 *)((char *)a2 + 4);
        v10 = v8 + 48;
        v11 = *v9;
        if ( !v8 )
          v10 = v6 + 4;
        *((_DWORD *)this + 10) = CGeneral::GetRadianAngleBetweenPoints(
                                   *(CGeneral **)v10,
                                   *(float *)(v10 + 4),
                                   *(float *)&v11,
                                   *((float *)&v11 + 1),
                                   *(float *)&v13);
        v5 = 902;
        return CTaskComplexInvestigateDeadPed::CreateSubTask(this, v5, a2);
      case 1210:
        v5 = 400;
        return CTaskComplexInvestigateDeadPed::CreateSubTask(this, v5, a2);
    }
  }
  else
  {
    switch ( v4 )
    {
      case 203:
        v5 = 903;
        return CTaskComplexInvestigateDeadPed::CreateSubTask(this, v5, a2);
      case 400:
        v5 = 900;
        return CTaskComplexInvestigateDeadPed::CreateSubTask(this, v5, a2);
      case 900:
        v5 = 1302;
        return CTaskComplexInvestigateDeadPed::CreateSubTask(this, v5, a2);
    }
  }
  return 0;
}


// ============================================================

// Address: 0x546980
// Original: _ZN30CTaskComplexInvestigateDeadPed13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexInvestigateDeadPed::CreateSubTask(int,CPed *)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexInvestigateDeadPed::CreateSubTask(
        CTaskComplexInvestigateDeadPed *this,
        int a2,
        CPed *a3)
{
  CTaskSimpleAchieveHeading *v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r2
  float *v9; // r3
  float *v10; // r1
  float v11; // s2
  float v12; // s6
  float v13; // s0
  int v14; // r0
  unsigned int v15; // r1
  float *v16; // r2
  float v17; // s2
  float v18; // s4
  float v20; // [sp+24h] [bp-24h] BYREF
  float v21; // [sp+28h] [bp-20h]
  float v22; // [sp+2Ch] [bp-1Ch]

  v5 = 0;
  if ( a2 > 901 )
  {
    switch ( a2 )
    {
      case 902:
        v5 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, 0x386u);
        CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v5, *((float *)this + 10), 0.5, 0.2);
        break;
      case 903:
        v6 = *((_DWORD *)this + 3);
        v7 = *((_DWORD *)a3 + 5);
        v8 = *(_DWORD *)(v6 + 20);
        v9 = (float *)(v7 + 48);
        if ( !v7 )
          v9 = (float *)((char *)a3 + 4);
        v10 = (float *)(v8 + 48);
        v11 = v9[1];
        if ( !v8 )
          v10 = (float *)(v6 + 4);
        v12 = v10[1];
        v13 = *v9 - *v10;
        v22 = 0.0;
        v21 = v11 - v12;
        v20 = v13;
        CVector::Normalise((CVector *)&v20);
        v14 = *((_DWORD *)this + 3);
        v15 = *(_DWORD *)(v14 + 20);
        v16 = (float *)(v15 + 48);
        if ( !v15 )
          v16 = (float *)(v14 + 4);
        v17 = (float)(v21 + v21) + v16[1];
        v18 = (float)(v22 + v22) + v16[2];
        *((float *)this + 7) = (float)(v20 + v20) + *v16;
        *((float *)this + 8) = v17;
        *((float *)this + 9) = v18;
        v5 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&word_28, v15);
        CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
          v5,
          6,
          (CTaskComplexInvestigateDeadPed *)((char *)this + 28),
          0.5,
          2.0,
          0,
          0);
        break;
      case 1210:
        v5 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, 0x4BAu);
        CTaskComplexSignalAtPed::CTaskComplexSignalAtPed(v5, *((CPed **)this + 3), -1, 0);
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 203:
        v5 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&dword_20, 0xCBu);
        CTaskSimpleStandStill::CTaskSimpleStandStill(v5, 1000, 0, 0, 8.0);
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"TaskInvDeadPed",
          a3,
          *((_DWORD *)this + 3),
          1000,
          5,
          0,
          0,
          0.25,
          500,
          3,
          0);
        break;
      case 400:
        v5 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&dword_20, 0x190u);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v5, *((_DWORD *)a3 + 312), 4, 1082130432, 0);
        break;
      case 900:
        v5 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&word_2C, 0x384u);
        CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
          v5,
          4,
          (CTaskComplexInvestigateDeadPed *)((char *)this + 44),
          0.5,
          0,
          0);
        break;
    }
  }
  return v5;
}


// ============================================================

// Address: 0x546b68
// Original: _ZN30CTaskComplexInvestigateDeadPed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexInvestigateDeadPed::CreateFirstSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexInvestigateDeadPed::CreateFirstSubTask(
        CTaskComplexInvestigateDeadPed *this,
        CPed *a2)
{
  int v4; // r0
  char *v5; // r1
  __int64 v6; // d16
  CTaskSimpleStandStill *v7; // r6

  v4 = *((_DWORD *)a2 + 5);
  v5 = (char *)(v4 + 48);
  if ( !v4 )
    v5 = (char *)a2 + 4;
  v6 = *(_QWORD *)v5;
  *((_DWORD *)this + 13) = *((_DWORD *)v5 + 2);
  *(_QWORD *)((char *)this + 44) = v6;
  *((_DWORD *)this + 14) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 2000.0) + 5000;
  v7 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0x1388u);
  CTaskSimpleStandStill::CTaskSimpleStandStill(v7, 1000, 0, 0, 8.0);
  IKChainManager_c::LookAt(
    (int)&g_ikChainMan,
    (int)"TaskInvDeadPed",
    a2,
    *((_DWORD *)this + 3),
    1000,
    5,
    0,
    0,
    0.25,
    500,
    3,
    0);
  return v7;
}


// ============================================================

// Address: 0x546c2c
// Original: _ZN30CTaskComplexInvestigateDeadPed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexInvestigateDeadPed::ControlSubTask(CPed *)
int __fastcall CTaskComplexInvestigateDeadPed::ControlSubTask(CTaskComplexInvestigateDeadPed *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  __int64 v6; // kr00_8
  int v7; // r1
  int v8; // r2
  float *v9; // r3
  bool v10; // zf
  float32x2_t v11; // d8
  float *v12; // r1
  float v13; // s18
  float v14; // s0
  int v15; // r0
  int v16; // r1
  int v17; // r2
  float v18; // s4
  float32x2_t v19; // d0
  float32x2_t v20; // d16
  unsigned __int64 v21; // d3
  char v22; // r2
  __int64 v23; // d16
  __int64 v24; // r0
  float v26; // [sp+Ch] [bp-2Ch] BYREF
  float32x2_t v27; // [sp+10h] [bp-28h]

  if ( *((_DWORD *)this + 3) )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 903 )
    {
      if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 400 )
        CPed::Say(a2, 0xB5u, 0, 1.0, 0, 0, 0);
      return *((_DWORD *)this + 2);
    }
    if ( !*((_BYTE *)this + 24)
      || (!*((_BYTE *)this + 25)
        ? (v5 = *((_DWORD *)this + 4), v4 = CTimer::m_snTimeInMilliseconds)
        : (v4 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 25) = 0, *((_DWORD *)this + 4) = v4, v5 = v4),
          v5 + *((_DWORD *)this + 5) > v4) )
    {
      v6 = *((_QWORD *)this + 1);
      v7 = *((_DWORD *)a2 + 5);
      v8 = *(_DWORD *)(HIDWORD(v6) + 20);
      v9 = (float *)(v7 + 48);
      v10 = v7 == 0;
      v11.n64_u64[0] = *(_QWORD *)((unsigned __int64)this + 32);
      v12 = (float *)(v8 + 48);
      v13 = *((float *)this + 7);
      if ( v10 )
        v9 = (float *)((char *)a2 + 4);
      if ( !v8 )
        v12 = (float *)(HIDWORD(v6) + 4);
      v14 = *v9 - *v12;
      v27.n64_u64[0] = COERCE_UNSIGNED_INT(v9[1] - v12[1]);
      v26 = v14;
      CVector::Normalise((CVector *)&v26);
      v15 = *((_DWORD *)this + 3);
      v16 = *(_DWORD *)(v15 + 20);
      v17 = v16 + 48;
      if ( !v16 )
        v17 = v15 + 4;
      v18 = (float)(v26 + v26) + *(float *)v17;
      v19.n64_u64[0] = vadd_f32(vadd_f32(v27, v27), *(float32x2_t *)(v17 + 4)).n64_u64[0];
      v20.n64_u64[0] = vsub_f32(v19, v11).n64_u64[0];
      v21 = vmul_f32(v20, v20).n64_u64[0];
      if ( (float)((float)((float)((float)(v18 - v13) * (float)(v18 - v13)) + *(float *)&v21) + *((float *)&v21 + 1)) > 1.0 )
      {
        *((_DWORD *)this + 8) = v19.n64_u32[0];
        *((float *)this + 7) = v18;
        *((_DWORD *)this + 9) = v19.n64_u32[1];
        if ( *(float *)(v6 + 16) != v18 || *(float *)(v6 + 20) != v19.n64_f32[0] || *(float *)(v6 + 32) != 2.0 )
        {
          v22 = *(_BYTE *)(v6 + 36);
          v23 = *(_QWORD *)((char *)this + 28);
          LODWORD(v24) = *((_DWORD *)this + 9);
          HIDWORD(v24) = 1056964608;
          *(_QWORD *)(v6 + 24) = v24;
          *(_DWORD *)(v6 + 32) = 0x40000000;
          *(_BYTE *)(v6 + 36) = v22 | 4;
          *(_QWORD *)(v6 + 16) = v23;
        }
      }
      return *((_DWORD *)this + 2);
    }
  }
  return 0;
}


// ============================================================

// Address: 0x547d24
// Original: _ZNK30CTaskComplexInvestigateDeadPed5CloneEv
// Demangled: CTaskComplexInvestigateDeadPed::Clone(void)
int __fastcall CTaskComplexInvestigateDeadPed::Clone(CTaskComplexInvestigateDeadPed *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&off_3C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 44) = 0LL;
  *(_QWORD *)(v3 + 52) = 0LL;
  *(_QWORD *)(v3 + 28) = 0LL;
  *(_QWORD *)(v3 + 36) = 0LL;
  *(_WORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)v3 = &off_66D454;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x547d7c
// Original: _ZNK30CTaskComplexInvestigateDeadPed11GetTaskTypeEv
// Demangled: CTaskComplexInvestigateDeadPed::GetTaskType(void)
int __fastcall CTaskComplexInvestigateDeadPed::GetTaskType(CTaskComplexInvestigateDeadPed *this)
{
  return 600;
}


// ============================================================

// Address: 0x547d84
// Original: _ZN30CTaskComplexInvestigateDeadPed9SerializeEv
// Demangled: CTaskComplexInvestigateDeadPed::Serialize(void)
void __fastcall CTaskComplexInvestigateDeadPed::Serialize(CTaskComplexInvestigateDeadPed *this)
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

  v2 = (*(int (__fastcall **)(CTaskComplexInvestigateDeadPed *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexInvestigateDeadPed *))(*(_DWORD *)this + 20))(this) == 600 )
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
    v10 = (*(int (__fastcall **)(CTaskComplexInvestigateDeadPed *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(600, v10);
  }
}


// ============================================================
