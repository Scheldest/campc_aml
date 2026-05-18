
// Address: 0x18b7dc
// Original: j__ZN23CTaskComplexSignalAtPedC2EP4CPedih
// Demangled: CTaskComplexSignalAtPed::CTaskComplexSignalAtPed(CPed *,int,uchar)
// attributes: thunk
void __fastcall CTaskComplexSignalAtPed::CTaskComplexSignalAtPed(
        CTaskComplexSignalAtPed *this,
        CPed *a2,
        int a3,
        unsigned __int8 a4)
{
  _ZN23CTaskComplexSignalAtPedC2EP4CPedih(this, a2, a3, a4);
}


// ============================================================

// Address: 0x18e280
// Original: j__ZN23CTaskComplexSignalAtPedD2Ev
// Demangled: CTaskComplexSignalAtPed::~CTaskComplexSignalAtPed()
// attributes: thunk
void __fastcall CTaskComplexSignalAtPed::~CTaskComplexSignalAtPed(CTaskComplexSignalAtPed *this)
{
  _ZN23CTaskComplexSignalAtPedD2Ev(this);
}


// ============================================================

// Address: 0x519e74
// Original: _ZN23CTaskComplexSignalAtPedC2EP4CPedih
// Demangled: CTaskComplexSignalAtPed::CTaskComplexSignalAtPed(CPed *,int,uchar)
void __fastcall CTaskComplexSignalAtPed::CTaskComplexSignalAtPed(
        CTaskComplexSignalAtPed *this,
        CPed *a2,
        int a3,
        unsigned __int8 a4)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = a4;
  *((_BYTE *)this + 21) = 0;
  *(_DWORD *)this = &off_66BF50;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x519eb8
// Original: _ZN23CTaskComplexSignalAtPedD2Ev
// Demangled: CTaskComplexSignalAtPed::~CTaskComplexSignalAtPed()
void __fastcall CTaskComplexSignalAtPed::~CTaskComplexSignalAtPed(CTaskComplexSignalAtPed *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1
  CEntity *v5; // r0

  v2 = (const char *)*((unsigned __int8 *)this + 21);
  *(_DWORD *)this = &off_66BF50;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 21) = 0;
  }
  v5 = (CEntity *)*((_DWORD *)this + 3);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x519f00
// Original: _ZN23CTaskComplexSignalAtPedD0Ev
// Demangled: CTaskComplexSignalAtPed::~CTaskComplexSignalAtPed()
void __fastcall CTaskComplexSignalAtPed::~CTaskComplexSignalAtPed(CTaskComplexSignalAtPed *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1
  CEntity *v5; // r0
  void *v6; // r0

  v2 = (const char *)*((unsigned __int8 *)this + 21);
  *(_DWORD *)this = &off_66BF50;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 21) = 0;
  }
  v5 = (CEntity *)*((_DWORD *)this + 3);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x519f4c
// Original: _ZN23CTaskComplexSignalAtPed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSignalAtPed::CreateNextSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexSignalAtPed::CreateNextSubTask(CTaskComplexSignalAtPed *this, CPed *a2)
{
  unsigned int v3; // r1
  int v4; // r5
  CTaskSimpleStandStill *v5; // r4
  unsigned int v6; // r1
  int v7; // r0
  int v8; // r5
  unsigned __int16 v9; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 920 )
  {
    v4 = *((_DWORD *)this + 4);
    if ( v4 == -1 )
      v4 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 2000.0);
    v5 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v3);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v5, v4, 0, 0, 8.0);
  }
  else if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203 )
  {
    v5 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&byte_9[3], v6);
    CTaskSimple::CTaskSimple(v5);
    *((_BYTE *)v5 + 8) = 0;
    *(_DWORD *)v5 = &off_66BF1C;
  }
  else if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1214
         && *((_BYTE *)this + 21) )
  {
    v7 = *((unsigned __int8 *)this + 20);
    v5 = 0;
    if ( v7 )
    {
      v8 = CTask::operator new((CTask *)&dword_20, 0x4BEu);
      v9 = rand();
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(
        v8,
        52,
        (int)(float)((float)((float)v9 * 0.000015259) * 8.0) + 279,
        1082130432,
        0);
      return (CTaskSimpleStandStill *)v8;
    }
  }
  else
  {
    return 0;
  }
  return v5;
}


// ============================================================

// Address: 0x51a044
// Original: _ZN23CTaskComplexSignalAtPed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSignalAtPed::CreateFirstSubTask(CPed *)
CTaskComplexTurnToFaceEntityOrCoord *__fastcall CTaskComplexSignalAtPed::CreateFirstSubTask(
        CTaskComplexSignalAtPed *this,
        CPed *a2)
{
  int v4; // r1
  float *v5; // r0
  bool v6; // zf
  CTaskComplexTurnToFaceEntityOrCoord *v7; // r6
  unsigned int v8; // r1

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v4 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v5 = *(float **)(v4 + 1424);
  v6 = v5 == 0;
  if ( v5 )
    v6 = (*(_DWORD *)(v4 + 1156) & 0x100) == 0;
  if ( !v6 && (float)((float)((float)(v5[18] * v5[18]) + (float)(v5[19] * v5[19])) + (float)(v5[20] * v5[20])) > 0.04 )
    return 0;
  v7 = 0;
  if ( !CStreaming::IsVeryBusy((CStreaming *)v5) )
  {
    CPed::StopPlayingHandSignal(a2);
    IKChainManager_c::LookAt(
      (int)&g_ikChainMan,
      (int)"TaskSignalAtPed",
      a2,
      *((_DWORD *)this + 3),
      5000,
      5,
      0,
      1,
      0.15,
      500,
      3,
      0);
    v7 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v8);
    CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v7, *((CEntity **)this + 3), 0.5, 0.2);
  }
  return v7;
}


// ============================================================

// Address: 0x51a14c
// Original: _ZN23CTaskComplexSignalAtPed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSignalAtPed::ControlSubTask(CPed *)
int __fastcall CTaskComplexSignalAtPed::ControlSubTask(CTaskComplexSignalAtPed *this, CPed *a2)
{
  int v4; // r6
  int v5; // r1
  float *v6; // r0
  bool v7; // zf
  int v8; // r0
  int v9; // r0
  int v10; // r2
  char v11; // r0
  CAnimManager *AnimationBlockIndex; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r2
  float *v17; // r3
  float *v18; // r1
  CGeneral *RadianAngleBetweenPoints; // r0
  float v20; // r1
  float v22; // [sp+0h] [bp-10h]

  v4 = *((unsigned __int8 *)this + 21);
  v5 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v6 = *(float **)(v5 + 1424);
  v7 = v6 == 0;
  if ( v6 )
  {
    v5 = *(_DWORD *)(v5 + 1156) & 0x100;
    v7 = v5 == 0;
  }
  if ( !v7 && (float)((float)((float)(v6[18] * v6[18]) + (float)(v6[19] * v6[19])) + (float)(v6[20] * v6[20])) > 0.04 )
  {
    v8 = 0;
    if ( !v4 )
      goto LABEL_6;
LABEL_10:
    if ( v8 )
      goto LABEL_14;
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v5);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v13);
    v11 = 0;
    goto LABEL_12;
  }
  v8 = CStreaming::IsVeryBusy((CStreaming *)v6) ^ 1;
  if ( v4 )
    goto LABEL_10;
LABEL_6:
  if ( v8 != 1 )
    goto LABEL_14;
  v9 = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v5);
  if ( CAnimManager::ms_aAnimBlocks[32 * v9 + 16] == 1 )
  {
    CAnimManager::AddAnimBlockRef((CAnimManager *)v9, 1);
    v11 = 1;
LABEL_12:
    *((_BYTE *)this + 21) = v11;
    goto LABEL_14;
  }
  CStreaming::RequestModel((CStreaming *)(v9 + 25575), 8, v10);
LABEL_14:
  v14 = *((_DWORD *)this + 3);
  if ( v14 )
  {
    v15 = *((_DWORD *)a2 + 5);
    v16 = *(_DWORD *)(v14 + 20);
    v17 = (float *)(v15 + 48);
    if ( !v15 )
      v17 = (float *)((char *)a2 + 4);
    v18 = (float *)(v16 + 48);
    if ( !v16 )
      v18 = (float *)(v14 + 4);
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                             COERCE_CGENERAL_(*v18 - *v17),
                                             v18[1] - v17[1],
                                             0.0,
                                             0.0,
                                             v22);
    *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v20);
  }
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x51c4b4
// Original: _ZNK23CTaskComplexSignalAtPed5CloneEv
// Demangled: CTaskComplexSignalAtPed::Clone(void)
CTaskComplex *__fastcall CTaskComplexSignalAtPed::Clone(CTaskComplexSignalAtPed *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r5
  CTaskComplex *v5; // r4

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = v3;
  LOBYTE(this) = *((_BYTE *)this + 20);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 4) = 0;
  *((_BYTE *)v5 + 20) = (_BYTE)this;
  *((_BYTE *)v5 + 21) = 0;
  *(_DWORD *)v5 = &off_66BF50;
  *((_DWORD *)v5 + 3) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v5 + 3);
  return v5;
}


// ============================================================

// Address: 0x51c500
// Original: _ZNK23CTaskComplexSignalAtPed11GetTaskTypeEv
// Demangled: CTaskComplexSignalAtPed::GetTaskType(void)
int __fastcall CTaskComplexSignalAtPed::GetTaskType(CTaskComplexSignalAtPed *this)
{
  return 1210;
}


// ============================================================
