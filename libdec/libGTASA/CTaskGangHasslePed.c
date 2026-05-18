
// Address: 0x18c7b4
// Original: j__ZN18CTaskGangHasslePedD2Ev
// Demangled: CTaskGangHasslePed::~CTaskGangHasslePed()
// attributes: thunk
void __fastcall CTaskGangHasslePed::~CTaskGangHasslePed(CTaskGangHasslePed *this)
{
  _ZN18CTaskGangHasslePedD2Ev(this);
}


// ============================================================

// Address: 0x198aac
// Original: j__ZN18CTaskGangHasslePedC2EP4CPediii
// Demangled: CTaskGangHasslePed::CTaskGangHasslePed(CPed *,int,int,int)
// attributes: thunk
void __fastcall CTaskGangHasslePed::CTaskGangHasslePed(CTaskGangHasslePed *this, CPed *a2, int a3, int a4, int a5)
{
  _ZN18CTaskGangHasslePedC2EP4CPediii(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x5192dc
// Original: _ZN18CTaskGangHasslePedC2EP4CPediii
// Demangled: CTaskGangHasslePed::CTaskGangHasslePed(CPed *,int,int,int)
void __fastcall CTaskGangHasslePed::CTaskGangHasslePed(CTaskGangHasslePed *this, CPed *a2, int a3, int a4, int a5)
{
  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = a5;
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)this = &off_66BEA4;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x51932c
// Original: _ZN18CTaskGangHasslePedD2Ev
// Demangled: CTaskGangHasslePed::~CTaskGangHasslePed()
void __fastcall CTaskGangHasslePed::~CTaskGangHasslePed(CTaskGangHasslePed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BEA4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  if ( *((_BYTE *)this + 28) )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v3);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v5);
    *((_BYTE *)this + 28) = 0;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x519370
// Original: _ZN18CTaskGangHasslePedD0Ev
// Demangled: CTaskGangHasslePed::~CTaskGangHasslePed()
void __fastcall CTaskGangHasslePed::~CTaskGangHasslePed(CTaskGangHasslePed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v5; // r1
  void *v6; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BEA4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  if ( *((_BYTE *)this + 28) )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v3);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v5);
    *((_BYTE *)this + 28) = 0;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x5193b8
// Original: _ZN18CTaskGangHasslePed17CreateNextSubTaskEP4CPed
// Demangled: CTaskGangHasslePed::CreateNextSubTask(CPed *)
int __fastcall CTaskGangHasslePed::CreateNextSubTask(CTaskGangHasslePed *this, CPed *a2)
{
  int v3; // r8
  unsigned int v4; // r1
  int v5; // r4
  CEntity *v6; // r5
  __int64 v7; // r2

  v3 = rand();
  v5 = 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 1000 )
  {
    v5 = CTask::operator new((CTask *)&dword_4C, v4);
    v6 = (CEntity *)*((_DWORD *)this + 3);
    CTaskComplex::CTaskComplex((CTaskComplex *)v5);
    LODWORD(v7) = "gledCollisionBoxSectorListER8CPtrListRK4CBoxRK7CMatrixRK7CVectorPssPP7CEntity";
    HIDWORD(v7) = 1000;
    *(_QWORD *)(v5 + 16) = v7;
    *(_DWORD *)(v5 + 28) = 0x40000000;
    *(_DWORD *)(v5 + 32) = 0;
    *(_DWORD *)(v5 + 36) = 0x40000000;
    *(_WORD *)(v5 + 48) = 0;
    *(_WORD *)(v5 + 60) = 0;
    *(_DWORD *)(v5 + 40) = 0;
    *(_DWORD *)(v5 + 44) = 0;
    *(_DWORD *)(v5 + 52) = 0;
    *(_DWORD *)(v5 + 56) = 0;
    BYTE4(v7) = *(_BYTE *)(v5 + 72);
    *(_DWORD *)v5 = &off_6656E4;
    *(_DWORD *)(v5 + 64) = &off_665720;
    *(_DWORD *)(v5 + 68) = 6;
    *(_BYTE *)(v5 + 72) = BYTE4(v7) & 0xF0 | 2;
    *(float *)(v5 + 24) = (float)((float)((float)v3 * 4.6566e-10) + (float)((float)v3 * 4.6566e-10)) + 3.0;
    *(_DWORD *)(v5 + 12) = v6;
    if ( v6 )
      CEntity::RegisterReference(v6, (CEntity **)(v5 + 12));
  }
  return v5;
}


// ============================================================

// Address: 0x519484
// Original: _ZN18CTaskGangHasslePed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskGangHasslePed::CreateFirstSubTask(CPed *)
int __fastcall CTaskGangHasslePed::CreateFirstSubTask(CTaskGangHasslePed *this, CPed *a2)
{
  int v3; // r0
  __int64 v4; // kr00_8
  int v5; // r8
  int v6; // r4
  unsigned __int16 v7; // r0
  unsigned int v8; // r1
  int v9; // r4
  CEntity *v10; // r5
  char v11; // r1

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v3 = rand();
  v4 = *(_QWORD *)((char *)this + 20);
  v5 = v3;
  v6 = CTimer::m_snTimeInMilliseconds;
  v7 = rand();
  *((_DWORD *)this + 8) = v6;
  *((_BYTE *)this + 40) = 1;
  *((_DWORD *)this + 9) = (int)(float)((float)((float)v7 * 0.000015259) * (float)(HIDWORD(v4) - v4)) + v4;
  v9 = CTask::operator new((CTask *)&dword_4C, v8);
  v10 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v9);
  *(_DWORD *)v9 = &off_6656E4;
  *(_DWORD *)(v9 + 16) = "gledCollisionBoxSectorListER8CPtrListRK4CBoxRK7CMatrixRK7CVectorPssPP7CEntity";
  *(_DWORD *)(v9 + 20) = 1000;
  *(float *)(v9 + 24) = (float)((float)((float)v5 * 4.6566e-10) + (float)((float)v5 * 4.6566e-10)) + 3.0;
  *(_DWORD *)(v9 + 28) = 0x40000000;
  *(_DWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 36) = 0x40000000;
  *(_WORD *)(v9 + 48) = 0;
  *(_WORD *)(v9 + 60) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_DWORD *)(v9 + 44) = 0;
  *(_DWORD *)(v9 + 52) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  v11 = *(_BYTE *)(v9 + 72);
  *(_DWORD *)(v9 + 64) = &off_665720;
  *(_DWORD *)(v9 + 68) = 6;
  *(_BYTE *)(v9 + 72) = v11 & 0xF0 | 2;
  *(_DWORD *)(v9 + 12) = v10;
  if ( v10 )
    CEntity::RegisterReference(v10, (CEntity **)(v9 + 12));
  return v9;
}


// ============================================================

// Address: 0x51959c
// Original: _ZN18CTaskGangHasslePed14ControlSubTaskEP4CPed
// Demangled: CTaskGangHasslePed::ControlSubTask(CPed *)
void __fastcall CTaskGangHasslePed::ControlSubTask(CTaskGangHasslePed *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r0
  unsigned int v7; // r1
  CPed *v8; // r2
  int v9; // r6
  int v10; // r1
  float *v11; // r0
  bool v12; // zf
  int v13; // r0
  int AnimationBlockIndex; // r0
  int v15; // r2
  CAnimManager *v16; // r0
  int v17; // r1
  int v18; // r0
  unsigned int v19; // r1
  int v20; // r8
  CTask *v21; // r6
  unsigned __int16 v22; // r0
  CTaskComplexKillPedOnFoot *v23; // r0
  int v24; // r0

  if ( *((_DWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 40) )
    {
      if ( *((_BYTE *)this + 41) )
      {
        v4 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 41) = 0;
        *((_DWORD *)this + 8) = v4;
        v5 = v4;
      }
      else
      {
        v5 = *((_DWORD *)this + 8);
        v4 = CTimer::m_snTimeInMilliseconds;
      }
      if ( v5 + *((_DWORD *)this + 9) <= v4 )
      {
        v6 = *((_DWORD *)this + 4);
        if ( v6 != 1 )
        {
          if ( v6 != 2 )
            return;
          if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 1000 )
          {
            v23 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v7);
            CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v23, *((CPed **)this + 3), -1, 0, 0, 0, 1);
            return;
          }
        }
      }
    }
    v8 = (CPed *)(elf_hash_bucket + 152);
    v9 = *((unsigned __int8 *)this + 28);
    v10 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
    v11 = *(float **)(v10 + 1424);
    v12 = v11 == 0;
    if ( v11 )
    {
      v10 = *(_DWORD *)(v10 + 1156) & 0x100;
      v12 = v10 == 0;
    }
    if ( v12
      || (float)((float)((float)(v11[18] * v11[18]) + (float)(v11[19] * v11[19])) + (float)(v11[20] * v11[20])) <= 0.04 )
    {
      v13 = CStreaming::IsVeryBusy((CStreaming *)v11) ^ 1;
      if ( !v9 )
      {
LABEL_15:
        if ( v13 == 1 )
        {
          AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v10);
          if ( CAnimManager::ms_aAnimBlocks[32 * AnimationBlockIndex + 16] == 1 )
          {
            CAnimManager::AddAnimBlockRef((CAnimManager *)AnimationBlockIndex, 1);
            *((_BYTE *)this + 28) = 1;
            goto LABEL_24;
          }
          CStreaming::RequestModel((CStreaming *)(AnimationBlockIndex + 25575), 8, v15);
        }
LABEL_23:
        if ( !*((_BYTE *)this + 28) )
          goto LABEL_32;
LABEL_24:
        if ( CPed::IsPlayingHandSignal(a2)
          || CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4) )
        {
          goto LABEL_32;
        }
        v18 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 200.0);
        v19 = v18 - 51;
        if ( (unsigned int)(v18 - 51) > 4 )
        {
          if ( v18 != 100 )
            goto LABEL_32;
          v20 = *((_DWORD *)a2 + 272);
          v21 = (CTask *)CTask::operator new((CTask *)&off_18, v19);
          CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim();
        }
        else
        {
          v20 = *((_DWORD *)a2 + 272);
          v21 = (CTask *)CTask::operator new((CTask *)&dword_20, v19);
          v22 = rand();
          CTaskSimpleRunAnim::CTaskSimpleRunAnim(
            (int)v21,
            52,
            (int)(float)((float)((float)v22 * 0.000015259) * 8.0) + 279,
            1082130432,
            0);
        }
        CTaskManager::SetTaskSecondary((CTaskManager *)(v20 + 4), v21, 4);
LABEL_32:
        v24 = *((_DWORD *)this + 4);
        if ( (unsigned int)(v24 - 1) >= 2 )
        {
          if ( !v24 )
            CPed::Say(a2, 0x56u, 0, 1.0, 0, 0, 0);
        }
        else
        {
          CTaskComplexGangLeader::DoGangAbuseSpeech(a2, *((CPed **)this + 3), v8);
        }
        return;
      }
    }
    else
    {
      v13 = 0;
      if ( !*((_BYTE *)this + 28) )
        goto LABEL_15;
    }
    if ( !v13 )
    {
      v16 = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v10);
      CAnimManager::RemoveAnimBlockRef(v16, v17);
      *((_BYTE *)this + 28) = 0;
      goto LABEL_32;
    }
    goto LABEL_23;
  }
}


// ============================================================

// Address: 0x51c448
// Original: _ZNK18CTaskGangHasslePed5CloneEv
// Demangled: CTaskGangHasslePed::Clone(void)
int __fastcall CTaskGangHasslePed::Clone(CTaskGangHasslePed *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // r8
  int v6; // r6

  v3 = CTask::operator new((CTask *)&word_2C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_QWORD *)this + 2);
  v6 = *((_DWORD *)this + 6);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_WORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 16) = v5;
  *(_DWORD *)(v3 + 24) = v6;
  *(_BYTE *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)v3 = &off_66BEA4;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x51c4a0
// Original: _ZNK18CTaskGangHasslePed11GetTaskTypeEv
// Demangled: CTaskGangHasslePed::GetTaskType(void)
int __fastcall CTaskGangHasslePed::GetTaskType(CTaskGangHasslePed *this)
{
  return 1212;
}


// ============================================================
