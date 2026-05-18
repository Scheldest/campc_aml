
// Address: 0x5464e0
// Original: _ZN30CTaskComplexSeekEntityAnyMeansI32CEntitySeekPosCalculatorXYOffsetED2Ev
// Demangled: CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::~CTaskComplexSeekEntityAnyMeans()
void __fastcall CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::~CTaskComplexSeekEntityAnyMeans(
        CEntity **a1)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = a1 + 3;
  v2 = a1[3];
  *a1 = (CEntity *)&off_66D418;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8((CTaskComplex *)a1);
}


// ============================================================

// Address: 0x54650c
// Original: _ZN30CTaskComplexSeekEntityAnyMeansI32CEntitySeekPosCalculatorXYOffsetED0Ev
// Demangled: CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::~CTaskComplexSeekEntityAnyMeans()
void __fastcall CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::~CTaskComplexSeekEntityAnyMeans(
        CEntity **a1)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = a1 + 3;
  v2 = a1[3];
  *a1 = (CEntity *)&off_66D418;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex((CTaskComplex *)a1);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x54653c
// Original: _ZNK30CTaskComplexSeekEntityAnyMeansI32CEntitySeekPosCalculatorXYOffsetE5CloneEv
// Demangled: CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::Clone(void)
int __fastcall CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::Clone(int a1, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  __int64 v5; // d16
  int result; // r0

  v3 = CTask::operator new((CTask *)&dword_34, a2);
  v4 = *(CEntity **)(a1 + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = 1000;
  *(_DWORD *)(v3 + 20) = 1090519040;
  *(_WORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)v3 = &off_66D418;
  *(_DWORD *)(v3 + 36) = &off_66D3DC;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  v5 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(a1 + 48);
  result = v3;
  *(_QWORD *)(v3 + 40) = v5;
  return result;
}


// ============================================================

// Address: 0x5465bc
// Original: _ZNK30CTaskComplexSeekEntityAnyMeansI32CEntitySeekPosCalculatorXYOffsetE11GetTaskTypeEv
// Demangled: CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::GetTaskType(void)
int CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::GetTaskType()
{
  return 922;
}


// ============================================================

// Address: 0x5465c2
// Original: _ZN30CTaskComplexSeekEntityAnyMeansI32CEntitySeekPosCalculatorXYOffsetE17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::CreateNextSubTask(CPed *)
int CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::CreateNextSubTask()
{
  return 0;
}


// ============================================================

// Address: 0x5465c8
// Original: _ZN30CTaskComplexSeekEntityAnyMeansI32CEntitySeekPosCalculatorXYOffsetE18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::CreateFirstSubTask(
        int a1,
        CPedGeometryAnalyser *this)
{
  int v3; // r0
  float v4; // s2
  int v5; // r2
  float v6; // s4
  float *v7; // r3
  __int64 v8; // r0
  float v9; // s16
  CTaskComplexDriveToPoint *v10; // r0
  _BYTE v11[12]; // [sp+10h] [bp-28h] BYREF
  float v12[7]; // [sp+1Ch] [bp-1Ch] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(float *)(a1 + 44);
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(float *)(a1 + 48);
  v7 = (float *)(v5 + 48);
  if ( !v5 )
    v7 = (float *)(v3 + 4);
  v12[0] = *v7 + *(float *)(a1 + 40);
  v12[1] = v7[1] + v4;
  v12[2] = v7[2] + v6;
  CPedGeometryAnalyser::ComputeClearTarget(this, (const CPed *)v12, (const CVector *)v11, (CVector *)v7);
  HIDWORD(v8) = *(_DWORD *)(a1 + 16);
  v9 = *(float *)(a1 + 20);
  LODWORD(v8) = CTimer::m_snTimeInMilliseconds;
  *(_BYTE *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 24) = v8;
  v10 = (CTaskComplexDriveToPoint *)CTask::operator new((CTask *)&off_3C, HIDWORD(v8));
  CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(v10, 0, (const CVector *)v11, 30.0, 0, -1, v9, 0);
}


// ============================================================

// Address: 0x546668
// Original: _ZN30CTaskComplexSeekEntityAnyMeansI32CEntitySeekPosCalculatorXYOffsetE14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::ControlSubTask(CPed *)
void __fastcall CTaskComplexSeekEntityAnyMeans<CEntitySeekPosCalculatorXYOffset>::ControlSubTask(
        int a1,
        CPedGeometryAnalyser *this)
{
  int v3; // r0
  __int64 v4; // r2
  CTaskComplex *v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r2
  float *v9; // r3
  float v10; // s2
  float v11; // s4
  double v12; // d16
  double v13; // [sp+0h] [bp-28h] BYREF
  int v14; // [sp+8h] [bp-20h]
  float v15[7]; // [sp+Ch] [bp-1Ch] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      if ( *(_BYTE *)(a1 + 33) )
      {
        LODWORD(v4) = CTimer::m_snTimeInMilliseconds;
        *(_BYTE *)(a1 + 33) = 0;
        *(_DWORD *)(a1 + 24) = v4;
        HIDWORD(v4) = v4;
      }
      else
      {
        HIDWORD(v4) = *(_DWORD *)(a1 + 24);
        LODWORD(v4) = CTimer::m_snTimeInMilliseconds;
      }
      if ( HIDWORD(v4) + *(_DWORD *)(a1 + 28) <= (unsigned int)v4 )
      {
        HIDWORD(v4) = *(_DWORD *)(a1 + 16);
        v7 = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(a1 + 32) = 1;
        *(_QWORD *)(a1 + 24) = v4;
        v8 = *(_DWORD *)(v3 + 20);
        v9 = (float *)(v8 + 48);
        v10 = *(float *)(a1 + 44);
        v11 = *(float *)(a1 + 48);
        if ( !v8 )
          v9 = (float *)(v3 + 4);
        v15[0] = *v9 + *(float *)(a1 + 40);
        v15[1] = v9[1] + v10;
        v15[2] = v9[2] + v11;
        CPedGeometryAnalyser::ComputeClearTarget(this, (const CPed *)v15, (const CVector *)&v13, (CVector *)v15);
        v12 = v13;
        *(_DWORD *)(v7 + 44) = v14;
        *(double *)(v7 + 36) = v12;
      }
    }
  }
  else
  {
    v5 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, (unsigned int)this);
    CTaskComplex::CTaskComplex(v5);
    *(_DWORD *)(v6 + 12) = 0;
    *(_WORD *)(v6 + 16) = 1;
    *(_DWORD *)v6 = &off_66AF90;
  }
}


// ============================================================
