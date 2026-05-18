
// Address: 0x195e10
// Original: j__ZN19CTaskComplexPartner19CalcTargetPositionsEP4CPedP7CVectorS3_
// Demangled: CTaskComplexPartner::CalcTargetPositions(CPed *,CVector *,CVector *)
// attributes: thunk
int __fastcall CTaskComplexPartner::CalcTargetPositions(CTaskComplexPartner *this, CPed *a2, CVector *a3, CVector *a4)
{
  return _ZN19CTaskComplexPartner19CalcTargetPositionsEP4CPedP7CVectorS3_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x5342b0
// Original: _ZN19CTaskComplexPartnerC2EPcP4CPedhfhi7CVector
// Demangled: CTaskComplexPartner::CTaskComplexPartner(char *,CPed *,uchar,float,uchar,int,CVector)
int __fastcall CTaskComplexPartner::CTaskComplexPartner(
        int a1,
        int a2,
        CEntity *a3,
        char a4,
        int a5,
        char a6,
        char a7,
        int a8,
        int a9,
        int a10)
{
  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_BYTE *)(a1 + 88) = a4;
  *(_DWORD *)(a1 + 60) = a5;
  *(_BYTE *)(a1 + 93) = a6;
  *(_BYTE *)(a1 + 91) = a7;
  *(_DWORD *)(a1 + 64) = a8;
  *(_DWORD *)(a1 + 68) = a9;
  *(_DWORD *)(a1 + 72) = a10;
  *(_BYTE *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 89) = -255;
  *(_BYTE *)(a1 + 110) = 0;
  *(_BYTE *)(a1 + 94) = 0;
  *(_DWORD *)a1 = &off_66CCE0;
  *(_DWORD *)(a1 + 56) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 56));
  return a1;
}


// ============================================================

// Address: 0x534360
// Original: _ZN19CTaskComplexPartnerD0Ev
// Demangled: CTaskComplexPartner::~CTaskComplexPartner()
void __fastcall __noreturn CTaskComplexPartner::~CTaskComplexPartner(CTaskComplexPartner *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x534364
// Original: _ZN19CTaskComplexPartner17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexPartner::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexPartner::CreateNextSubTask(CTaskComplexPartner *this, CPed *a2)
{
  int v4; // r0
  int ActiveTaskByType; // r0
  unsigned int v6; // r1
  int v7; // r0
  __int64 v8; // d16
  char v9; // r0
  CTaskComplexGoToPointAndStandStill *v10; // r0
  CTaskComplexTurnToFaceEntityOrCoord *v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r0
  __int64 v17; // d16
  int v18; // r0
  int v19; // r6
  float v20; // r2
  int v21; // r0
  float v22; // s0
  float v23; // s2
  float *v24; // r0
  int v25; // r2
  float *v26; // r3
  float *v27; // r6
  float v28; // s0
  float v29; // s2
  float v30; // s6
  float v31; // s10
  float v32; // s8
  float v33; // s14
  float v34; // s12
  CTaskSimpleStandStill *v35; // r0
  float v36; // s12
  float v37; // s10
  float v38; // s2
  float v39; // s0
  float v40; // s8
  float v41; // s6
  float v42; // s6
  float v43; // s4
  float v44; // s0
  float v45; // r6
  float v46; // r8
  unsigned __int8 NodeHeadingFromVector; // r8
  unsigned int v48; // r1
  int v49; // r6

  v4 = *((_DWORD *)this + 14);
  if ( v4 )
  {
    ActiveTaskByType = CTaskManager::FindActiveTaskByType(
                         (CTaskManager *)(*(_DWORD *)(v4 + 1088) + 4),
                         *((_DWORD *)this + 13));
    if ( ActiveTaskByType )
    {
      if ( *(CPed **)(ActiveTaskByType + 56) == a2 )
      {
        switch ( *((_BYTE *)this + 89) )
        {
          case 1:
            if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203 )
            {
              if ( *((_BYTE *)this + 88) )
              {
                CTaskComplexPartner::CalcTargetPositions(
                  this,
                  a2,
                  (CTaskComplexPartner *)((char *)this + 64),
                  (CTaskComplexPartner *)((char *)this + 76));
                v7 = CTaskManager::FindActiveTaskByType(
                       (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 14) + 1088) + 4),
                       *((_DWORD *)this + 13));
                v8 = *(_QWORD *)((char *)this + 76);
                v6 = *((_DWORD *)this + 21);
                *(_DWORD *)(v7 + 72) = v6;
                *(_QWORD *)(v7 + 64) = v8;
              }
              v9 = 2;
              goto LABEL_51;
            }
            return;
          case 2:
            if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203 )
            {
              if ( *((float *)this + 16) == 0.0 )
                goto LABEL_52;
              *((_WORD *)this + 56) = 0;
              *((_BYTE *)this + 89) = 3;
              v10 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v6);
              CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
                v10,
                4,
                (CTaskComplexPartner *)((char *)this + 64),
                0.1,
                0.0,
                0,
                1);
            }
            return;
          case 3:
            if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 903 )
            {
              v11 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, 0x387u);
              CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(
                v11,
                *((CEntity **)this + 14),
                0.5,
                0.2);
            }
            else if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 920 )
            {
              v9 = 4;
              goto LABEL_51;
            }
            return;
          case 4:
            v12 = CTaskManager::FindActiveTaskByType(
                    (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 14) + 1088) + 4),
                    *((_DWORD *)this + 13));
            if ( v12 && (*(char *)(v12 + 89) | 1) == 5 )
            {
              if ( *((unsigned __int8 *)this + 90) == 255 )
                *((_BYTE *)this + 90) = 0;
              v13 = CTaskManager::FindActiveTaskByType(
                      (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 14) + 1088) + 4),
                      *((_DWORD *)this + 13));
              v6 = *(unsigned __int8 *)(v13 + 90);
              if ( v6 == 255 )
              {
                v6 = 1;
                *(_BYTE *)(v13 + 90) = 1;
              }
              v9 = 5;
              goto LABEL_51;
            }
            if ( *((unsigned __int8 *)this + 90) == 255 )
              *((_BYTE *)this + 90) = 1;
            v16 = CTaskManager::FindActiveTaskByType(
                    (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 14) + 1088) + 4),
                    *((_DWORD *)this + 13));
            if ( *(unsigned __int8 *)(v16 + 90) == 255 )
              *(_BYTE *)(v16 + 90) = 0;
            v17 = *(_QWORD *)((char *)this + 76);
            v6 = *((_DWORD *)this + 21);
            *(_DWORD *)(v16 + 72) = v6;
            *(_QWORD *)(v16 + 64) = v17;
            goto LABEL_52;
          case 5:
            if ( *((_BYTE *)this + 93) )
            {
              if ( *((_BYTE *)this + 90) == 1 )
              {
                v14 = CTaskManager::FindActiveTaskByType(
                        (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 14) + 1088) + 4),
                        *((_DWORD *)this + 13));
                if ( !v14 || *(_BYTE *)(v14 + 89) != 6 )
                  goto LABEL_52;
              }
              else
              {
                v6 = *((_DWORD *)this + 14);
                v24 = (float *)*((_DWORD *)a2 + 5);
                v25 = *(_DWORD *)(v6 + 20);
                v26 = v24 + 12;
                if ( !v24 )
                  v26 = (float *)((char *)a2 + 4);
                v27 = (float *)(v25 + 48);
                v28 = *v26;
                v29 = v26[1];
                if ( !v25 )
                  v27 = (float *)(v6 + 4);
                v30 = v27[1];
                v31 = v28 - *v27;
                v32 = v29 - v30;
                v33 = (float)(v31 * v31) + (float)(v32 * v32);
                v34 = sqrtf(v33);
                if ( v34 <= 0.99 || v34 >= 1.01 )
                {
                  if ( v33 <= 0.0 )
                  {
                    v37 = 1.0;
                  }
                  else
                  {
                    v36 = 1.0 / v34;
                    v32 = v32 * v36;
                    v37 = v31 * v36;
                  }
                  v38 = (float)(v30 + v32) - v29;
                  v39 = (float)(*v27 + v37) - v28;
                  v40 = (float)(v39 * v39) + (float)(v38 * v38);
                  v41 = sqrtf(v40);
                  if ( v41 > 0.02 )
                  {
                    if ( v40 <= 0.0 )
                    {
                      v39 = 0.02;
                    }
                    else
                    {
                      v42 = 1.0 / v41;
                      v38 = v38 * v42;
                      v39 = (float)(v39 * v42) * 0.02;
                    }
                    v38 = v38 * 0.02;
                  }
                  v43 = (float)(v39 * v24[4]) + (float)(v38 * v24[5]);
                  v44 = (float)(v39 * *v24) + (float)(v38 * v24[1]);
                  *((float *)a2 + 314) = v43;
                  *((float *)a2 + 313) = v44;
                  goto LABEL_52;
                }
              }
            }
            else
            {
              v18 = CTaskManager::FindActiveTaskByType(
                      (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 14) + 1088) + 4),
                      *((_DWORD *)this + 13));
              if ( !v18 || *(char *)(v18 + 89) < 5 )
                goto LABEL_52;
              v19 = *(_DWORD *)(*((_DWORD *)a2 + 272) + 20);
              if ( v19
                && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v19 + 20))(*(_DWORD *)(*((_DWORD *)a2 + 272) + 20)) == 912
                && !(*(int (__fastcall **)(int))(*(_DWORD *)v19 + 52))(v19) )
              {
                v21 = *((_DWORD *)a2 + 5);
                if ( v21 )
                {
                  v22 = *(float *)(v21 + 20);
                  v23 = -*(float *)(v21 + 16);
                }
                else
                {
                  v45 = *((float *)a2 + 4);
                  v46 = sinf(v45);
                  v22 = cosf(v45);
                  v23 = v46;
                }
                NodeHeadingFromVector = CGeneral::GetNodeHeadingFromVector(
                                          (CGeneral *)LODWORD(v23),
                                          COERCE_FLOAT(LODWORD(v22) ^ 0x80000000),
                                          v20);
                v49 = CTask::operator new((CTask *)&dword_38, v48);
                CTaskComplexWander::CTaskComplexWander((CTaskComplexWander *)v49, 4, NodeHeadingFromVector, 1, 0.5);
                *(_WORD *)(v49 + 48) = 0;
                *(_DWORD *)(v49 + 52) = 0;
                *(_DWORD *)(v49 + 40) = 0;
                *(_DWORD *)(v49 + 44) = 0;
                *(_DWORD *)v49 = &off_66C59C;
                CTaskComplexWanderStandard::SetNextScanTime(
                  (CTaskComplexWanderStandard *)v49,
                  CTimer::m_snTimeInMilliseconds + 100000);
                CTaskManager::SetTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), (CTask *)v49, 4, 0);
              }
            }
            v9 = 6;
LABEL_51:
            *((_BYTE *)this + 89) = v9;
LABEL_52:
            v35 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v6);
            CTaskSimpleStandStill::CTaskSimpleStandStill(v35, 50, 0, 0, 8.0);
            break;
          case 6:
            if ( *((_BYTE *)this + 110) && *((_BYTE *)this + 91) )
            {
              v15 = *(_DWORD *)this;
              --*((_BYTE *)this + 91);
              (*(void (__fastcall **)(CTaskComplexPartner *))(v15 + 60))(this);
            }
            return;
          default:
            return;
        }
      }
    }
  }
}


// ============================================================

// Address: 0x53479c
// Original: _ZN19CTaskComplexPartner19IsPartnerStillValidEP4CPed
// Demangled: CTaskComplexPartner::IsPartnerStillValid(CPed *)
bool __fastcall CTaskComplexPartner::IsPartnerStillValid(CTaskComplexPartner *this, CPed *a2)
{
  int v2; // r2
  int ActiveTaskByType; // r0
  _BOOL4 result; // r0

  v2 = *((_DWORD *)this + 14);
  result = 0;
  if ( v2 )
  {
    ActiveTaskByType = CTaskManager::FindActiveTaskByType(
                         (CTaskManager *)(*(_DWORD *)(v2 + 1088) + 4),
                         *((_DWORD *)this + 13));
    if ( ActiveTaskByType )
    {
      if ( *(CPed **)(ActiveTaskByType + 56) == a2 )
        return 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5347c2
// Original: _ZN19CTaskComplexPartner15GetPartnerStateEv
// Demangled: CTaskComplexPartner::GetPartnerState(void)
int __fastcall CTaskComplexPartner::GetPartnerState(CTaskComplexPartner *this)
{
  int ActiveTaskByType; // r0

  ActiveTaskByType = CTaskManager::FindActiveTaskByType(
                       (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 14) + 1088) + 4),
                       *((_DWORD *)this + 13));
  if ( ActiveTaskByType )
    return *(char *)(ActiveTaskByType + 89);
  else
    return 0;
}


// ============================================================

// Address: 0x5347e0
// Original: _ZN19CTaskComplexPartner20SetFirstToTargetFlagEh
// Demangled: CTaskComplexPartner::SetFirstToTargetFlag(uchar)
int __fastcall CTaskComplexPartner::SetFirstToTargetFlag(int this, unsigned __int8 a2)
{
  if ( *(unsigned __int8 *)(this + 90) == 255 )
    *(_BYTE *)(this + 90) = a2;
  return this;
}


// ============================================================

// Address: 0x5347ee
// Original: _ZN19CTaskComplexPartner12SetTargetPosEP7CVector
// Demangled: CTaskComplexPartner::SetTargetPos(CVector *)
int __fastcall CTaskComplexPartner::SetTargetPos(int this, CVector *a2)
{
  __int64 v2; // d16

  v2 = *(_QWORD *)a2;
  *(_DWORD *)(this + 72) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(this + 64) = v2;
  return this;
}


// ============================================================

// Address: 0x5347fc
// Original: _ZN19CTaskComplexPartner19CalcTargetPositionsEP4CPedP7CVectorS3_
// Demangled: CTaskComplexPartner::CalcTargetPositions(CPed *,CVector *,CVector *)
int __fastcall CTaskComplexPartner::CalcTargetPositions(CTaskComplexPartner *this, CPed *a2, CVector *a3, CVector *a4)
{
  int v6; // r0
  int v8; // r2
  int v9; // r3
  float *v10; // r4
  float *v11; // r1
  float v12; // s16
  float v13; // s18
  float v14; // s22
  float v15; // s20
  float v16; // s24
  float v17; // s28
  float v18; // s30
  float v19; // s17
  float v20; // s26
  float v21; // s28
  float v22; // s22
  int result; // r0
  float v24; // s10
  float v25; // s10
  int v26; // r1
  float v27; // s10
  float v28; // s10
  float v29; // s8
  float v30; // s6
  float v31; // s2
  float v32; // s0
  float v33; // s4
  float v34; // [sp+4h] [bp-5Ch] BYREF
  float v35; // [sp+8h] [bp-58h]
  float v36; // [sp+Ch] [bp-54h]

  v6 = *((_DWORD *)this + 14);
  v8 = *((_DWORD *)a2 + 5);
  v9 = *(_DWORD *)(v6 + 20);
  v10 = (float *)(v8 + 48);
  if ( !v8 )
    v10 = (float *)((char *)a2 + 4);
  v11 = (float *)(v9 + 48);
  v12 = *v10;
  v13 = v10[1];
  v14 = v10[2];
  if ( !v9 )
    v11 = (float *)(v6 + 4);
  v15 = *v11;
  v16 = v11[1];
  v17 = *v11 - v12;
  v18 = v11[2] - v14;
  v35 = v16 - v13;
  v34 = v17;
  v36 = v18;
  v19 = *((float *)this + 15);
  CVector::Normalise((CVector *)&v34);
  v20 = v13 + (float)(v19 * (float)(v16 - v13));
  v21 = v12 + (float)(v19 * v17);
  v22 = v14 + (float)(v18 * v19);
  result = (*(int (__fastcall **)(CTaskComplexPartner *))(*(_DWORD *)this + 20))(this);
  if ( result == 1204 )
  {
LABEL_15:
    v29 = v20 - (float)(v35 * 0.5);
    v30 = v22 - (float)(v36 * 0.5);
    v31 = v20 + (float)(v35 * 0.5);
    v32 = v21 + (float)(v34 * 0.5);
    v33 = v22 + (float)(v36 * 0.5);
    *(float *)a3 = v21 - (float)(v34 * 0.5);
    *((float *)a3 + 1) = v29;
    *((float *)a3 + 2) = v30;
    *(float *)a4 = v32;
    *((float *)a4 + 1) = v31;
    *((float *)a4 + 2) = v33;
  }
  else
  {
    result = -1;
    do
    {
      v24 = sqrtf((float)((float)(v21 - v12) * (float)(v21 - v12)) + (float)((float)(v20 - v13) * (float)(v20 - v13)));
      if ( v24 >= 0.7 )
      {
        v26 = 0;
      }
      else
      {
        v25 = 0.75 - v24;
        v26 = 1;
        v22 = v22 + (float)(v25 * v36);
        v20 = v20 + (float)(v25 * v35);
        v21 = v21 + (float)(v25 * v34);
      }
      v27 = sqrtf((float)((float)(v21 - v15) * (float)(v21 - v15)) + (float)((float)(v20 - v16) * (float)(v20 - v16)));
      if ( v27 >= 0.7 )
      {
        if ( v26 != 1 )
          goto LABEL_15;
      }
      else
      {
        v28 = 0.75 - v27;
        v22 = v22 - (float)(v28 * v36);
        v20 = v20 - (float)(v28 * v35);
        v21 = v21 - (float)(v28 * v34);
      }
      ++result;
    }
    while ( result <= 9 );
    result = 1;
    *((_BYTE *)this + 92) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x53498c
// Original: _ZN19CTaskComplexPartner18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexPartner::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexPartner::CreateFirstSubTask(CTaskComplexPartner *this, CPed *a2, CPed *a3)
{
  unsigned int v5; // r1
  CTaskSimpleStandStill *v6; // r0

  if ( *((_BYTE *)this + 88) && *((_DWORD *)this + 13) == 1204 && *((_BYTE *)this + 114) )
  {
    if ( CAEPedSpeechAudioEntity::RequestPedConversation(a2, *((CPed **)this + 14), a3) )
    {
      *((_BYTE *)this + 116) = 1;
    }
    else
    {
      if ( !*((_BYTE *)this + 115) )
        return;
      *((_BYTE *)this + 114) = 0;
    }
  }
  CPed::StopPlayingHandSignal(a2);
  v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v5);
  CTaskSimpleStandStill::CTaskSimpleStandStill(v6, 50, 0, 0, 8.0);
}


// ============================================================

// Address: 0x5349ec
// Original: _ZN19CTaskComplexPartner14ControlSubTaskEP4CPed
// Demangled: CTaskComplexPartner::ControlSubTask(CPed *)
int __fastcall CTaskComplexPartner::ControlSubTask(CTaskComplexPartner *this, CPed *a2)
{
  int v4; // r1
  int v5; // r0
  int ActiveTaskByType; // r0
  CPed *v7; // r0
  bool v8; // zf
  int v9; // r6
  __int16 v10; // r0

  v4 = *((char *)this + 89);
  v5 = *((_DWORD *)this + 14);
  if ( v4 <= 1 )
  {
    if ( !v5 )
      goto LABEL_10;
    if ( !*((_BYTE *)this + 92) )
      goto LABEL_11;
  }
  else if ( !v5 )
  {
    goto LABEL_10;
  }
  ActiveTaskByType = CTaskManager::FindActiveTaskByType(
                       (CTaskManager *)(*(_DWORD *)(v5 + 1088) + 4),
                       *((_DWORD *)this + 13));
  if ( !ActiveTaskByType )
    goto LABEL_10;
  v7 = *(CPed **)(ActiveTaskByType + 56);
  v8 = v7 == a2;
  if ( v7 == a2 )
    v8 = *((_BYTE *)this + 92) == 0;
  if ( !v8 )
  {
LABEL_10:
    v9 = 0;
    if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) )
    {
      return v9;
    }
  }
LABEL_11:
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 903
    || (v10 = *((_WORD *)this + 56) + 1, *((_WORD *)this + 56) = v10, v10 < 151)
    || (v9 = 0,
        !(*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0)) )
  {
    CPed::DropEntityThatThisPedIsHolding(a2, 1u);
    (*(void (__fastcall **)(CTaskComplexPartner *))(*(_DWORD *)this + 52))(this);
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 500);
    return *((_DWORD *)this + 2);
  }
  return v9;
}


// ============================================================

// Address: 0x534ab0
// Original: _ZN19CTaskComplexPartner19StreamRequiredAnimsEv
// Demangled: CTaskComplexPartner::StreamRequiredAnims(void)
int __fastcall CTaskComplexPartner::StreamRequiredAnims(CTaskComplexPartner *this)
{
  int result; // r0
  int AnimationBlockIndex; // r0
  int v4; // r2

  result = *((unsigned __int8 *)this + 110);
  if ( !result )
  {
    if ( !*((_BYTE *)this + 94) )
    {
LABEL_5:
      result = 1;
      *((_BYTE *)this + 110) = 1;
      return result;
    }
    AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex(
                            (CTaskComplexPartner *)((char *)this + 94),
                            (const char *)*((unsigned __int8 *)this + 94));
    if ( CAnimManager::ms_aAnimBlocks[32 * AnimationBlockIndex + 16] == 1 )
    {
      CAnimManager::AddAnimBlockRef((CAnimManager *)AnimationBlockIndex, 1);
      goto LABEL_5;
    }
    return j_CStreaming::RequestModel((CStreaming *)(AnimationBlockIndex + 25575), 8, v4);
  }
  return result;
}


// ============================================================

// Address: 0x534afc
// Original: _ZN19CTaskComplexPartner19RemoveStreamedAnimsEv
// Demangled: CTaskComplexPartner::RemoveStreamedAnims(void)
int __fastcall CTaskComplexPartner::RemoveStreamedAnims(CTaskComplexPartner *this)
{
  int result; // r0
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1

  result = *((unsigned __int8 *)this + 110);
  if ( result )
  {
    if ( *((_BYTE *)this + 94) )
    {
      AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                              (CTaskComplexPartner *)((char *)this + 94),
                                              (const char *)*((unsigned __int8 *)this + 94));
      CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    }
    result = 0;
    *((_BYTE *)this + 110) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x536f42
// Original: _ZNK19CTaskComplexPartner11GetTaskTypeEv
// Demangled: CTaskComplexPartner::GetTaskType(void)
int __fastcall CTaskComplexPartner::GetTaskType(CTaskComplexPartner *this)
{
  return 256;
}


// ============================================================
