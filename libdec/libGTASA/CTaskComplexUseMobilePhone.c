
// Address: 0x19e15c
// Original: j__ZN26CTaskComplexUseMobilePhoneC2Ei
// Demangled: CTaskComplexUseMobilePhone::CTaskComplexUseMobilePhone(int)
// attributes: thunk
void __fastcall CTaskComplexUseMobilePhone::CTaskComplexUseMobilePhone(CTaskComplexUseMobilePhone *this, int a2)
{
  _ZN26CTaskComplexUseMobilePhoneC2Ei(this, a2);
}


// ============================================================

// Address: 0x1a0c44
// Original: j__ZN26CTaskComplexUseMobilePhone4StopEP4CPed
// Demangled: CTaskComplexUseMobilePhone::Stop(CPed *)
// attributes: thunk
int __fastcall CTaskComplexUseMobilePhone::Stop(CTaskComplexUseMobilePhone *this, CPed *a2)
{
  return _ZN26CTaskComplexUseMobilePhone4StopEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4f0cb4
// Original: _ZN26CTaskComplexUseMobilePhoneC2Ei
// Demangled: CTaskComplexUseMobilePhone::CTaskComplexUseMobilePhone(int)
void __fastcall CTaskComplexUseMobilePhone::CTaskComplexUseMobilePhone(CTaskComplexUseMobilePhone *this, int a2)
{
  int v3; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v3 + 12) = a2;
  *(_WORD *)(v3 + 24) = 0;
  *(_WORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)v3 = &off_66A5EC;
}


// ============================================================

// Address: 0x4f0cdc
// Original: _ZN26CTaskComplexUseMobilePhoneD2Ev
// Demangled: CTaskComplexUseMobilePhone::~CTaskComplexUseMobilePhone()
// attributes: thunk
void __fastcall CTaskComplexUseMobilePhone::~CTaskComplexUseMobilePhone(CTaskComplexUseMobilePhone *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f0ce0
// Original: _ZN26CTaskComplexUseMobilePhoneD0Ev
// Demangled: CTaskComplexUseMobilePhone::~CTaskComplexUseMobilePhone()
void __fastcall CTaskComplexUseMobilePhone::~CTaskComplexUseMobilePhone(CTaskComplexUseMobilePhone *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f0cf0
// Original: _ZN26CTaskComplexUseMobilePhone16RemovePhoneModelEP4CPed
// Demangled: CTaskComplexUseMobilePhone::RemovePhoneModel(CPed *)
int __fastcall CTaskComplexUseMobilePhone::RemovePhoneModel(CTaskComplexUseMobilePhone *this, CPed *a2)
{
  int result; // r0

  CPed::RemoveWeaponModel(a2, 330);
  CPed::SetCurrentWeapon(a2, *((_DWORD *)a2 + 452));
  result = *((_DWORD *)a2 + 273);
  *((_DWORD *)a2 + 452) = 55;
  if ( result )
    *(_BYTE *)(result + 133) = 0;
  return result;
}


// ============================================================

// Address: 0x4f0d20
// Original: _ZN26CTaskComplexUseMobilePhone13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexUseMobilePhone::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexUseMobilePhone::MakeAbortable(
        CTaskComplexUseMobilePhone *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v6; // r0
  int v9; // r6
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r0
  int result; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r1
  __int64 v18; // kr00_8
  int v19; // r1

  v6 = *((_DWORD *)this + 2);
  if ( a3 != 2 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 202 )
    {
      v15 = *((_DWORD *)a2 + 291);
      v16 = *((_DWORD *)a2 + 292);
      v17 = *((_DWORD *)a2 + 290);
      *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
      *((_DWORD *)a2 + 290) = v17;
      *((_DWORD *)a2 + 291) = v15 & 0xFFBFFFFF;
      result = 1;
      *((_DWORD *)a2 + 292) = v16 & 0xFFFFFFFD;
      return result;
    }
    if ( a4 )
    {
      if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 58 && CPed::IsPlayer(a2) )
        return 1;
      *((_BYTE *)this + 28) = 1;
    }
    v18 = *((_QWORD *)this + 1);
    v19 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 24) = 1;
    *((_DWORD *)this + 4) = v19;
    *((_DWORD *)this + 5) = HIDWORD(v18);
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v18 + 20))(v18) == 1603 )
      (*(void (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
        *((_DWORD *)this + 2),
        a2,
        a3,
        a4);
    return 0;
  }
  if ( (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v6 + 28))(v6, a2, 2, a4) != 1 )
    return 0;
  v9 = *((_DWORD *)a2 + 452);
  v10 = *((_DWORD *)a2 + 291);
  v11 = *((_DWORD *)a2 + 292);
  v12 = *((_DWORD *)a2 + 290);
  *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
  *((_DWORD *)a2 + 290) = v12;
  *((_DWORD *)a2 + 291) = v10 & 0xFFBFFFFF;
  *((_DWORD *)a2 + 292) = v11 & 0xFFFFFFFD;
  if ( v9 == 55 )
    return 1;
  CPed::RemoveWeaponModel(a2, 330);
  CPed::SetCurrentWeapon(a2, *((_DWORD *)a2 + 452));
  *((_DWORD *)a2 + 452) = 55;
  v13 = *((_DWORD *)a2 + 273);
  if ( v13 )
    *(_BYTE *)(v13 + 133) = 0;
  return 1;
}


// ============================================================

// Address: 0x4f0e58
// Original: _ZN26CTaskComplexUseMobilePhone4StopEP4CPed
// Demangled: CTaskComplexUseMobilePhone::Stop(CPed *)
int __fastcall CTaskComplexUseMobilePhone::Stop(int this, CPed *a2)
{
  int v2; // r2

  if ( !*(_BYTE *)(this + 29) )
  {
    v2 = *(_DWORD *)this;
    *(_BYTE *)(this + 29) = 1;
    return (*(int (__fastcall **)(int, CPed *, _DWORD, _DWORD))(v2 + 28))(this, a2, 0, 0);
  }
  return this;
}


// ============================================================

// Address: 0x4f0e7c
// Original: _ZN26CTaskComplexUseMobilePhone17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseMobilePhone::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexUseMobilePhone::CreateNextSubTask(CTaskComplexUseMobilePhone *this, CPed *a2)
{
  signed int v4; // r1
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r1
  CTaskSimple *v12; // r0
  int v13; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 <= 1601 )
  {
    if ( v4 != 202 )
    {
      if ( v4 == 1601 )
      {
        v5 = CTask::operator new((CTask *)&dword_20, 0x641u);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 146, 1082130432, 1603, (int)"PhoneOut", 0);
      }
      return;
    }
    v8 = *((unsigned __int8 *)this + 29);
    *((_BYTE *)this + 24) = 0;
    *((_BYTE *)this + 28) = 0;
    if ( !v8 )
    {
      (*(void (__fastcall **)(CTaskComplexUseMobilePhone *, CPed *))(*(_DWORD *)this + 44))(this, a2);
      return;
    }
LABEL_13:
    v9 = *((_DWORD *)a2 + 291);
    v10 = *((_DWORD *)a2 + 292);
    v11 = *((_DWORD *)a2 + 290);
    *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
    *((_DWORD *)a2 + 290) = v11;
    *((_DWORD *)a2 + 291) = v9 & 0xFFBFFFFF;
    *((_DWORD *)a2 + 292) = v10 & 0xFFFFFFFD;
    return;
  }
  if ( v4 == 1603 )
  {
    if ( !*((_BYTE *)this + 29) && *((_BYTE *)this + 28) )
    {
      v12 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, 0x643u);
      CTaskSimple::CTaskSimple(v12);
      *(_WORD *)(v13 + 16) = 0;
      *(_DWORD *)(v13 + 20) = 1000;
      *(_DWORD *)(v13 + 8) = 0;
      *(_DWORD *)(v13 + 12) = 0;
      *(_DWORD *)v13 = &off_665760;
      return;
    }
    goto LABEL_13;
  }
  if ( v4 == 1602 )
  {
    v6 = *((_DWORD *)this + 3);
    if ( v6 >= 0 )
    {
      v4 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 24) = 1;
      *((_DWORD *)this + 4) = v4;
      *((_DWORD *)this + 5) = v6;
    }
    v7 = CTask::operator new((CTask *)&dword_20, v4);
    CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 0, 147, 1082130432, 1601, (int)"PhoneChat", 0);
  }
}


// ============================================================

// Address: 0x4f0fb0
// Original: _ZN26CTaskComplexUseMobilePhone18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseMobilePhone::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexUseMobilePhone::CreateFirstSubTask(CTaskComplexUseMobilePhone *this, CPed *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r4
  _DWORD v9[4]; // [sp+10h] [bp-30h] BYREF
  __int16 v10; // [sp+20h] [bp-20h]
  int v11; // [sp+22h] [bp-1Eh]
  __int16 v12; // [sp+28h] [bp-18h]
  int v13; // [sp+2Ch] [bp-14h]

  v3 = *((_DWORD *)a2 + 291);
  v4 = *((_DWORD *)a2 + 292);
  *((_DWORD *)a2 + 291) = v3 | 0x400000;
  *((_DWORD *)a2 + 292) = v4 | 2;
  if ( CPed::IsPlayer(a2) == 1 )
    CPlayerPed::ClearWeaponTarget(a2);
  if ( *((_DWORD *)a2 + 452) == 55 )
  {
    *((_DWORD *)a2 + 452) = *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361);
    CPed::SetCurrentWeapon(a2, 0);
  }
  v5 = *((_DWORD *)a2 + 273);
  if ( v5 )
    *(_BYTE *)(v5 + 133) = 1;
  if ( CPed::IsPlayer(a2) == 1 )
    CCamera::ClearPlayerWeaponMode((CCamera *)&TheCamera);
  CTaskSimple::CTaskSimple((CTaskSimple *)v9);
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v13 = 1090519040;
  v9[2] = 0;
  v9[3] = 0;
  v9[0] = &off_669C0C;
  CTaskSimpleStandStill::ProcessPed((CTaskSimpleStandStill *)v9, a2);
  v7 = CTask::operator new((CTask *)&dword_20, v6);
  CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 0, 145, 1082130432, 1602, (int)"PhoneIn", 0);
  CTask::~CTask((CTask *)v9);
  return v7;
}


// ============================================================

// Address: 0x4f10a0
// Original: _ZN26CTaskComplexUseMobilePhone14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseMobilePhone::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseMobilePhone::ControlSubTask(CTaskComplexUseMobilePhone *this, CPed *a2)
{
  int v4; // r1
  int v5; // r8
  int v6; // r0
  int Association; // r4
  int v8; // r0
  float v9; // s0
  int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r0
  CTaskSimplePlayerOnFoot *TaskByType; // r0

  v4 = *((_DWORD *)a2 + 273);
  v5 = *((_DWORD *)this + 2);
  v6 = v5;
  if ( v4 )
  {
    *(_BYTE *)(v4 + 133) = 1;
    v6 = *((_DWORD *)this + 2);
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) != 202 )
  {
    Association = RpAnimBlendClumpGetAssociation();
    v8 = RpAnimBlendClumpGetAssociation();
    if ( Association )
    {
      if ( *(float *)(Association + 32) >= 0.85 )
        CPed::AddWeaponModel(a2, 330);
    }
    else if ( v8 )
    {
      v9 = *(float *)(v8 + 32);
      if ( v9 >= 1.566 && (float)(v9 - *(float *)(v8 + 40)) < 1.566 )
      {
        CPed::RemoveWeaponModel(a2, 330);
        CPed::SetCurrentWeapon(a2, *((_DWORD *)a2 + 452));
        v10 = *((_DWORD *)a2 + 273);
        *((_DWORD *)a2 + 452) = 55;
        if ( !v10 )
          return v5;
        *(_BYTE *)(v10 + 133) = 0;
      }
    }
    else if ( *((_BYTE *)this + 24) )
    {
      if ( *((_BYTE *)this + 25) )
      {
        v11 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 25) = 0;
        *((_DWORD *)this + 4) = v11;
        v12 = v11;
      }
      else
      {
        v12 = *((_DWORD *)this + 4);
        v11 = CTimer::m_snTimeInMilliseconds;
      }
      v13 = v12 + *((_DWORD *)this + 5);
      if ( v13 <= v11 )
      {
        v5 = CTask::operator new((CTask *)&dword_20, v13);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 146, 1082130432, 1603, (int)"PhoneOut", 0);
      }
    }
  }
  v14 = *((_DWORD *)a2 + 273);
  if ( v14 )
  {
    *(_BYTE *)(v14 + 132) = 1;
    v15 = *((_DWORD *)a2 + 273);
    if ( *(float *)(v15 + 24) < 0.0 )
      *(_DWORD *)(v15 + 24) = 0;
    TaskByType = (CTaskSimplePlayerOnFoot *)CPedIntelligence::FindTaskByType(*((CPedIntelligence **)a2 + 272), 0);
    if ( TaskByType )
      CTaskSimplePlayerOnFoot::PlayerControlZelda(TaskByType, a2, 1);
    *(_BYTE *)(*((_DWORD *)a2 + 273) + 132) = 0;
  }
  return v5;
}


// ============================================================

// Address: 0x4f3fac
// Original: _ZNK26CTaskComplexUseMobilePhone5CloneEv
// Demangled: CTaskComplexUseMobilePhone::Clone(void)
int __fastcall CTaskComplexUseMobilePhone::Clone(CTaskComplexUseMobilePhone *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v4;
  *(_WORD *)(result + 24) = 0;
  *(_WORD *)(result + 28) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)result = &off_66A5EC;
  return result;
}


// ============================================================

// Address: 0x4f3fdc
// Original: _ZNK26CTaskComplexUseMobilePhone11GetTaskTypeEv
// Demangled: CTaskComplexUseMobilePhone::GetTaskType(void)
int __fastcall CTaskComplexUseMobilePhone::GetTaskType(CTaskComplexUseMobilePhone *this)
{
  return 1600;
}


// ============================================================

// Address: 0x4f3fe4
// Original: _ZN26CTaskComplexUseMobilePhone9SerializeEv
// Demangled: CTaskComplexUseMobilePhone::Serialize(void)
void __fastcall CTaskComplexUseMobilePhone::Serialize(CTaskComplexUseMobilePhone *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexUseMobilePhone *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexUseMobilePhone *))(*(_DWORD *)this + 20))(this) == 1600 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskComplexUseMobilePhone *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(1600, v7);
  }
}


// ============================================================
