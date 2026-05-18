
// Address: 0x4e801c
// Original: _ZN26CTaskComplexKillAllThreatsC2Ejjj
// Demangled: CTaskComplexKillAllThreats::CTaskComplexKillAllThreats(uint,uint,uint)
void __fastcall CTaskComplexKillAllThreats::CTaskComplexKillAllThreats(
        CTaskComplexKillAllThreats *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  _DWORD *v7; // r0

  CTaskComplex::CTaskComplex(this);
  v7[3] = a2;
  v7[4] = a3;
  v7[5] = a4;
  *v7 = &off_669A64;
}


// ============================================================

// Address: 0x4e8048
// Original: _ZN26CTaskComplexKillAllThreatsD2Ev
// Demangled: CTaskComplexKillAllThreats::~CTaskComplexKillAllThreats()
// attributes: thunk
void __fastcall CTaskComplexKillAllThreats::~CTaskComplexKillAllThreats(CTaskComplexKillAllThreats *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e804c
// Original: _ZN26CTaskComplexKillAllThreatsD0Ev
// Demangled: CTaskComplexKillAllThreats::~CTaskComplexKillAllThreats()
void __fastcall CTaskComplexKillAllThreats::~CTaskComplexKillAllThreats(CTaskComplexKillAllThreats *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4e805c
// Original: _ZN26CTaskComplexKillAllThreats17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexKillAllThreats::CreateNextSubTask(CPed *)
CTaskComplex *__fastcall CTaskComplexKillAllThreats::CreateNextSubTask(CTaskComplexKillAllThreats *this, CPed *a2)
{
  CTaskComplex *v4; // r4
  int v5; // r0
  unsigned int v6; // r1
  CEntity *v7; // r6
  CTaskComplex *v8; // r0
  __int64 v9; // kr00_8
  int v10; // r5
  char v11; // r2
  char v12; // r1
  _DWORD v14[2]; // [sp+10h] [bp-30h] BYREF
  __int16 v15; // [sp+18h] [bp-28h]
  __int16 v16; // [sp+1Ch] [bp-24h]
  char v17; // [sp+1Eh] [bp-22h]
  int v18; // [sp+20h] [bp-20h] BYREF
  CPed *v19; // [sp+24h] [bp-1Ch] BYREF

  v4 = 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1000 )
  {
    v5 = *((_DWORD *)a2 + 272);
    v19 = 0;
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0;
    v16 = 1;
    v17 = 0;
    CPedAcquaintanceScanner::FindClosestAcquaintance(
      (CPedAcquaintanceScanner *)v14,
      a2,
      4,
      (CEntity **)(v5 + 304),
      16,
      &v19,
      &v18);
    v7 = v19;
    if ( v19 )
    {
      v8 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, v6);
      v9 = *(_QWORD *)((char *)this + 12);
      v4 = v8;
      v10 = *((_DWORD *)this + 5);
      CTaskComplex::CTaskComplex(v8);
      *(_QWORD *)((char *)v4 + 20) = v9;
      *((_DWORD *)v4 + 7) = v10;
      *((_BYTE *)v4 + 32) = 1;
      *((_DWORD *)v4 + 10) = -1;
      *((_WORD *)v4 + 26) = 0;
      *((_DWORD *)v4 + 12) = 0;
      v11 = *((_BYTE *)v4 + 12);
      *((_DWORD *)v4 + 11) = 0;
      *(_DWORD *)v4 = &off_669850;
      *((_BYTE *)v4 + 12) = v11 & 0x8B | 4;
      *((_DWORD *)v4 + 4) = v7;
      CEntity::RegisterReference(v7, (CEntity **)v4 + 4);
      v12 = *((_BYTE *)v4 + 12);
      *((_DWORD *)v4 + 9) = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)v4 + 12) = v12 & 0xF7;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4e8124
// Original: _ZNK26CTaskComplexKillAllThreats16GetNextThreatPedER4CPed
// Demangled: CTaskComplexKillAllThreats::GetNextThreatPed(CPed &)
CPed *__fastcall CTaskComplexKillAllThreats::GetNextThreatPed(CTaskComplexKillAllThreats *this, CPed *a2)
{
  int v2; // r0
  _DWORD v4[2]; // [sp+10h] [bp-20h] BYREF
  __int16 v5; // [sp+18h] [bp-18h]
  __int16 v6; // [sp+1Ch] [bp-14h]
  char v7; // [sp+1Eh] [bp-12h]
  int v8; // [sp+20h] [bp-10h] BYREF
  CPed *v9; // [sp+24h] [bp-Ch] BYREF

  v2 = *((_DWORD *)a2 + 272);
  v9 = 0;
  v4[0] = 0;
  v4[1] = 0;
  v5 = 0;
  v6 = 1;
  v7 = 0;
  CPedAcquaintanceScanner::FindClosestAcquaintance(
    (CPedAcquaintanceScanner *)v4,
    a2,
    4,
    (CEntity **)(v2 + 304),
    16,
    &v9,
    &v8);
  return v9;
}


// ============================================================

// Address: 0x4e8164
// Original: _ZN26CTaskComplexKillAllThreats18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexKillAllThreats::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexKillAllThreats::CreateFirstSubTask(CTaskComplexKillAllThreats *this, CPed *a2)
{
  int v3; // r0
  unsigned int v4; // r1
  CEntity *v5; // r6
  CTaskComplex *v6; // r0
  __int64 v7; // r10
  int v8; // r4
  int v9; // r8
  char v10; // r1
  char v11; // r1
  _DWORD v13[2]; // [sp+10h] [bp-38h] BYREF
  __int16 v14; // [sp+18h] [bp-30h]
  __int16 v15; // [sp+1Ch] [bp-2Ch]
  char v16; // [sp+1Eh] [bp-2Ah]
  int v17; // [sp+24h] [bp-24h] BYREF
  CPed *v18; // [sp+28h] [bp-20h] BYREF

  v3 = *((_DWORD *)a2 + 272);
  v18 = 0;
  v13[0] = 0;
  v13[1] = 0;
  v14 = 0;
  v15 = 1;
  v16 = 0;
  CPedAcquaintanceScanner::FindClosestAcquaintance(
    (CPedAcquaintanceScanner *)v13,
    a2,
    4,
    (CEntity **)(v3 + 304),
    16,
    &v18,
    &v17);
  v5 = v18;
  if ( v18 )
  {
    v6 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, v4);
    v7 = *(_QWORD *)((char *)this + 12);
    v8 = (int)v6;
    v9 = *((_DWORD *)this + 5);
    CTaskComplex::CTaskComplex(v6);
    *(_QWORD *)(v8 + 20) = v7;
    *(_DWORD *)(v8 + 28) = v9;
    *(_BYTE *)(v8 + 32) = 1;
    *(_DWORD *)(v8 + 40) = -1;
    *(_WORD *)(v8 + 52) = 0;
    *(_DWORD *)(v8 + 48) = 0;
    v10 = *(_BYTE *)(v8 + 12);
    *(_DWORD *)(v8 + 44) = 0;
    *(_DWORD *)v8 = &off_669850;
    *(_BYTE *)(v8 + 12) = v10 & 0x8B | 4;
    *(_DWORD *)(v8 + 16) = v5;
    CEntity::RegisterReference(v5, (CEntity **)(v8 + 16));
    v11 = *(_BYTE *)(v8 + 12);
    *(_DWORD *)(v8 + 36) = CTimer::m_snTimeInMilliseconds;
    *(_BYTE *)(v8 + 12) = v11 & 0xF7;
  }
  else
  {
    v8 = CTask::operator new((CTask *)&dword_20, v4);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v8, 0, 0, 0, 8.0);
  }
  return v8;
}


// ============================================================

// Address: 0x4e8238
// Original: _ZN26CTaskComplexKillAllThreats14ControlSubTaskEP4CPed
// Demangled: CTaskComplexKillAllThreats::ControlSubTask(CPed *)
int __fastcall CTaskComplexKillAllThreats::ControlSubTask(CTaskComplexKillAllThreats *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4ea5e4
// Original: _ZNK26CTaskComplexKillAllThreats5CloneEv
// Demangled: CTaskComplexKillAllThreats::Clone(void)
int __fastcall CTaskComplexKillAllThreats::Clone(CTaskComplexKillAllThreats *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  int v5; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = *((_DWORD *)this + 5);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 20) = v5;
  *(_DWORD *)result = &off_669A64;
  return result;
}


// ============================================================

// Address: 0x4ea618
// Original: _ZNK26CTaskComplexKillAllThreats11GetTaskTypeEv
// Demangled: CTaskComplexKillAllThreats::GetTaskType(void)
int __fastcall CTaskComplexKillAllThreats::GetTaskType(CTaskComplexKillAllThreats *this)
{
  return 1014;
}


// ============================================================
