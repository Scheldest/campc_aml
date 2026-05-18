
// Address: 0x18d194
// Original: j__ZN15CTaskSimpleDuck15ControlDuckMoveE9CVector2D
// Demangled: CTaskSimpleDuck::ControlDuckMove(CVector2D)
// attributes: thunk
int CTaskSimpleDuck::ControlDuckMove()
{
  return _ZN15CTaskSimpleDuck15ControlDuckMoveE9CVector2D();
}


// ============================================================

// Address: 0x18e670
// Original: j__ZN15CTaskSimpleDuck11SetMoveAnimEP4CPed
// Demangled: CTaskSimpleDuck::SetMoveAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleDuck::SetMoveAnim(CTaskSimpleDuck *this, CPed *a2)
{
  return _ZN15CTaskSimpleDuck11SetMoveAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x195528
// Original: j__ZN15CTaskSimpleDuck10CanPedDuckEP4CPed
// Demangled: CTaskSimpleDuck::CanPedDuck(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleDuck::CanPedDuck(CTaskSimpleDuck *this, CPed *a2)
{
  return _ZN15CTaskSimpleDuck10CanPedDuckEP4CPed(this, a2);
}


// ============================================================

// Address: 0x195540
// Original: j__ZN15CTaskSimpleDuck14SetControlTypeEh
// Demangled: CTaskSimpleDuck::SetControlType(uchar)
// attributes: thunk
int __fastcall CTaskSimpleDuck::SetControlType(CTaskSimpleDuck *this, unsigned __int8 a2)
{
  return _ZN15CTaskSimpleDuck14SetControlTypeEh(this, a2);
}


// ============================================================

// Address: 0x195568
// Original: j__ZN15CTaskSimpleDuck23AbortBecauseOfOtherDuckEP4CPed
// Demangled: CTaskSimpleDuck::AbortBecauseOfOtherDuck(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleDuck::AbortBecauseOfOtherDuck(CTaskSimpleDuck *this, CPed *a2)
{
  return _ZN15CTaskSimpleDuck23AbortBecauseOfOtherDuckEP4CPed(this, a2);
}


// ============================================================

// Address: 0x196c40
// Original: j__ZN15CTaskSimpleDuck13ForceStopMoveEv
// Demangled: CTaskSimpleDuck::ForceStopMove(void)
// attributes: thunk
int __fastcall CTaskSimpleDuck::ForceStopMove(CTaskSimpleDuck *this)
{
  return _ZN15CTaskSimpleDuck13ForceStopMoveEv(this);
}


// ============================================================

// Address: 0x1978ac
// Original: j__ZN15CTaskSimpleDuckC2Ehts
// Demangled: CTaskSimpleDuck::CTaskSimpleDuck(uchar,ushort,short)
// attributes: thunk
void __fastcall CTaskSimpleDuck::CTaskSimpleDuck(
        CTaskSimpleDuck *this,
        unsigned __int8 a2,
        unsigned __int16 a3,
        __int16 a4)
{
  _ZN15CTaskSimpleDuckC2Ehts(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19abb0
// Original: j__ZN15CTaskSimpleDuck10CreateTaskEv
// Demangled: CTaskSimpleDuck::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleDuck::CreateTask(CTaskSimpleDuck *this)
{
  return _ZN15CTaskSimpleDuck10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19c48c
// Original: j__ZN15CTaskSimpleDuck11RestartTaskEP4CPed
// Demangled: CTaskSimpleDuck::RestartTask(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleDuck::RestartTask(CTaskSimpleDuck *this, CPed *a2)
{
  return _ZN15CTaskSimpleDuck11RestartTaskEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19cf1c
// Original: j__ZN15CTaskSimpleDuck12SetDuckTimerEt
// Demangled: CTaskSimpleDuck::SetDuckTimer(ushort)
// attributes: thunk
int __fastcall CTaskSimpleDuck::SetDuckTimer(CTaskSimpleDuck *this, unsigned __int16 a2)
{
  return _ZN15CTaskSimpleDuck12SetDuckTimerEt(this, a2);
}


// ============================================================

// Address: 0x4920f0
// Original: _ZN15CTaskSimpleDuck10CreateTaskEv
// Demangled: CTaskSimpleDuck::CreateTask(void)
void __fastcall CTaskSimpleDuck::CreateTask(CTaskSimpleDuck *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  CTaskSimpleDuck *v9; // r0
  __int16 v10; // [sp+4h] [bp-14h] BYREF
  unsigned __int16 v11; // [sp+6h] [bp-12h] BYREF
  unsigned __int8 v12; // [sp+9h] [bp-Fh] BYREF
  _BYTE v13[2]; // [sp+Ah] [bp-Eh] BYREF
  _BYTE v14[2]; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v15[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 1, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 2, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, (char *)&stderr + 2, v6);
  v9 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v8);
  CTaskSimpleDuck::CTaskSimpleDuck(v9, v12, v11, v10);
}


// ============================================================

// Address: 0x542dcc
// Original: _ZN15CTaskSimpleDuckC2Ehts
// Demangled: CTaskSimpleDuck::CTaskSimpleDuck(uchar,ushort,short)
void __fastcall CTaskSimpleDuck::CTaskSimpleDuck(
        CTaskSimpleDuck *this,
        unsigned __int8 a2,
        unsigned __int16 a3,
        __int16 a4)
{
  int v7; // r0
  int v8; // r1

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v7 + 36) = a2;
  *(_BYTE *)(v7 + 37) = -1;
  *(_DWORD *)(v7 + 24) = 16842752;
  *(_DWORD *)(v7 + 28) = 0;
  *(_DWORD *)(v7 + 32) = 0;
  *(_DWORD *)v7 = &off_66D20C;
  v8 = CTimer::m_snTimeInMilliseconds;
  *(_WORD *)(v7 + 12) = a3;
  *(_DWORD *)(v7 + 8) = v8;
  *(_WORD *)(v7 + 14) = a4;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 20) = 0;
}


// ============================================================

// Address: 0x542eb8
// Original: _ZN15CTaskSimpleDuckD0Ev
// Demangled: CTaskSimpleDuck::~CTaskSimpleDuck()
void __fastcall CTaskSimpleDuck::~CTaskSimpleDuck(CTaskSimpleDuck *this)
{
  void *v1; // r0

  CTaskSimpleDuckWhileShotsWhizzing::~CTaskSimpleDuckWhileShotsWhizzing(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x542ec8
// Original: _ZN15CTaskSimpleDuck13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleDuck::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleDuck::MakeAbortable(CTaskSimpleDuck *this, CPed *a2, int a3, const CEvent *a4)
{
  int v8; // r0
  int v9; // r0
  float v10; // s16
  int v11; // r0
  int v12; // r0
  CTaskSimpleUseGun *TaskUseGun; // r0
  int result; // r0
  int v15; // r0

  if ( a3 == 2 )
  {
    v8 = *((_DWORD *)this + 4);
    if ( v8 )
    {
      if ( (*(_BYTE *)(v8 + 46) & 0x10) != 0 )
        *(_DWORD *)(v8 + 28) = -998637568;
      else
        CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 3u);
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 4),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 4) = 0;
    }
    v15 = *((_DWORD *)this + 5);
    if ( v15 )
    {
      *(_DWORD *)(v15 + 28) = -998637568;
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 5),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 5) = 0;
    }
    goto LABEL_39;
  }
  if ( a3 == 1
    && a4
    && *((__int16 *)this + 7) >= 0
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 49
    && *((_WORD *)a4 + 5) == 311
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 44))(a4) )
  {
LABEL_39:
    *((_DWORD *)a2 + 289) &= ~0x4000000u;
    result = 1;
    *((_BYTE *)this + 26) = 1;
    return result;
  }
  v9 = *((_DWORD *)this + 5);
  if ( !v9 || (*(__int16 *)(v9 + 44) | 2) != 0x3B )
  {
    v10 = -4.0;
    if ( a3 == 1 )
      v10 = -8.0;
    v11 = *((_DWORD *)this + 4);
    if ( v11 )
    {
      if ( *(float *)(v11 + 24) > 0.0 && *(float *)(v11 + 28) >= 0.0 )
      {
        if ( (*(_BYTE *)(v11 + 46) & 0x10) != 0 )
          *(float *)(v11 + 28) = v10;
        CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 3u);
        *((_DWORD *)a2 + 335) = 1;
      }
      if ( a3 == 1 )
      {
        CAnimBlendAssociation::SetFinishCallback(
          *((CAnimBlendAssociation **)this + 4),
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        *((_DWORD *)this + 4) = 0;
      }
    }
    v12 = *((_DWORD *)this + 5);
    if ( !v12 )
      goto LABEL_31;
    if ( *(float *)(v12 + 24) > 0.0 && *(float *)(v12 + 28) >= 0.0 )
    {
      if ( a3 != 1 && (*(__int16 *)(v12 + 44) | 2) != 0x3A )
      {
LABEL_31:
        if ( CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272)) )
        {
          TaskUseGun = (CTaskSimpleUseGun *)CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272));
          CTaskSimpleUseGun::ClearAnim(TaskUseGun, a2);
        }
        result = 1;
        if ( a3 == 1 )
        {
          *((_BYTE *)this + 24) = 1;
          *((_DWORD *)a2 + 289) &= ~0x4000000u;
          *((_BYTE *)this + 26) = 1;
          return result;
        }
        *((_BYTE *)this + 25) = 1;
        return 0;
      }
      *(float *)(v12 + 28) = v10;
      *(_WORD *)(*((_DWORD *)this + 5) + 46) &= ~1u;
    }
    if ( a3 == 1 )
    {
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 5),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 5) = 0;
    }
    goto LABEL_31;
  }
  return 0;
}


// ============================================================

// Address: 0x5430a8
// Original: _ZN15CTaskSimpleDuck23AbortBecauseOfOtherDuckEP4CPed
// Demangled: CTaskSimpleDuck::AbortBecauseOfOtherDuck(CPed *)
int __fastcall CTaskSimpleDuck::AbortBecauseOfOtherDuck(CTaskSimpleDuck *this, CPed *a2)
{
  CAnimBlendAssociation *v3; // r0
  int v4; // r0

  v3 = (CAnimBlendAssociation *)*((_DWORD *)this + 4);
  if ( v3 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v3,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 4) = 0;
  }
  v4 = *((_DWORD *)this + 5);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 28) = -1056964608;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 5),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 5) = 0;
  }
  *((_BYTE *)this + 24) = 1;
  *((_BYTE *)this + 26) = 1;
  return 1;
}


// ============================================================

// Address: 0x5430f0
// Original: _ZN15CTaskSimpleDuck11RestartTaskEP4CPed
// Demangled: CTaskSimpleDuck::RestartTask(CPed *)
CTaskSimpleDuck *__fastcall CTaskSimpleDuck::RestartTask(CTaskSimpleDuck *this, CPed *a2)
{
  int v3; // r1

  if ( *((_BYTE *)this + 26) )
  {
    *((_DWORD *)a2 + 289) |= 0x4000000u;
    *((_BYTE *)this + 26) = 0;
  }
  v3 = *((__int16 *)this + 7);
  *((_DWORD *)this + 2) = CTimer::m_snTimeInMilliseconds;
  if ( v3 >= 0 )
    *((_WORD *)this + 7) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1500.0) + 1000;
  return this;
}


// ============================================================

// Address: 0x54315c
// Original: _ZN15CTaskSimpleDuck10ProcessPedEP4CPed
// Demangled: CTaskSimpleDuck::ProcessPed(CPed *)
int __fastcall CTaskSimpleDuck::ProcessPed(CTaskSimpleDuck *this, CPed *a2)
{
  int v4; // r6
  int SimplestActiveTask; // r0
  int v6; // r6
  int TaskSecondary; // r0
  CTaskSimpleDuck *v8; // r5
  CAnimBlendAssociation *v9; // r0
  int v10; // r0
  CTaskSimpleUseGun *TaskUseGun; // r0
  int v12; // r0
  int v13; // r0
  unsigned __int8 *v14; // r5
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  int Association; // r0
  unsigned int v20; // r2
  CAnimBlendAssociation *v21; // r0
  int v22; // r0

  if ( *((_BYTE *)this + 24) || *((float *)a2 + 337) < 1.0 )
  {
    if ( !*((_BYTE *)this + 25) )
      (*(void (__fastcall **)(CTaskSimpleDuck *, CPed *, int, _DWORD))(*(_DWORD *)this + 28))(this, a2, 1, 0);
    if ( *((_BYTE *)this + 26) )
      return 1;
LABEL_46:
    v4 = 1;
    *((_DWORD *)a2 + 289) &= ~0x4000000u;
    return v4;
  }
  if ( *((_BYTE *)this + 26) )
  {
    SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    v6 = SimplestActiveTask;
    if ( SimplestActiveTask
      && (*(int (__fastcall **)(int))(*(_DWORD *)SimplestActiveTask + 20))(SimplestActiveTask) != 415 )
    {
      v6 = 0;
    }
    TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 1);
    v8 = (CTaskSimpleDuck *)TaskSecondary;
    if ( TaskSecondary && (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) != 415 )
      v8 = 0;
    if ( v6 && v8 == this )
    {
      v9 = *(CAnimBlendAssociation **)(v6 + 16);
      if ( v9 )
      {
        CAnimBlendAssociation::SetFinishCallback(
          v9,
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        *(_DWORD *)(v6 + 16) = 0;
      }
      v10 = *(_DWORD *)(v6 + 20);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 28) = -1056964608;
        CAnimBlendAssociation::SetFinishCallback(
          *(CAnimBlendAssociation **)(v6 + 20),
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        *(_DWORD *)(v6 + 20) = 0;
      }
      *(_BYTE *)(v6 + 24) = 1;
      *(_BYTE *)(v6 + 26) = 1;
    }
    else if ( (CTaskSimpleDuck *)v6 == this && v8 )
    {
      v4 = 0;
      (*(void (__fastcall **)(CTaskSimpleDuck *, CPed *, int, _DWORD))(*(_DWORD *)this + 28))(this, a2, 1, 0);
      return v4;
    }
    if ( CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272)) )
    {
      TaskUseGun = (CTaskSimpleUseGun *)CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272));
      CTaskSimpleUseGun::ClearAnim(TaskUseGun, a2);
    }
    *((_DWORD *)a2 + 289) |= 0x4000000u;
    *((_BYTE *)this + 26) = 0;
  }
  else if ( (*((_BYTE *)a2 + 1159) & 4) == 0 )
  {
    *((_BYTE *)this + 24) = 1;
  }
  if ( *((_BYTE *)this + 25) )
    return 0;
  if ( !*((_BYTE *)this + 27) )
  {
    v17 = *((unsigned __int8 *)this + 37);
    *((_BYTE *)this + 37) = v17 - 1;
    if ( !v17 )
    {
      v4 = 0;
      if ( (*(int (__fastcall **)(CTaskSimpleDuck *, CPed *, int, _DWORD))(*(_DWORD *)this + 28))(this, a2, 1, 0) != 1 )
        return v4;
      goto LABEL_46;
    }
    return 0;
  }
  v12 = *((unsigned __int16 *)this + 6);
  *((_BYTE *)this + 37) = 4;
  if ( v12 && CTimer::m_snTimeInMilliseconds > (unsigned int)(v12 + *((_DWORD *)this + 2)) )
    (*(void (__fastcall **)(CTaskSimpleDuck *, CPed *, _DWORD, _DWORD))(*(_DWORD *)this + 28))(this, a2, 0, 0);
  if ( *((__int16 *)this + 7) >= 1 )
    *((_WORD *)this + 7) = *((_WORD *)this + 6)
                         - (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
  v13 = *((_DWORD *)this + 4);
  if ( v13 )
  {
    v14 = (unsigned __int8 *)this + 36;
    if ( *(float *)(v13 + 24) > 0.99 )
    {
      v15 = *v14;
      v16 = v15 == 4;
      if ( v15 != 4 )
        v16 = v15 == 2;
      if ( !v16 )
        goto LABEL_59;
      CTaskSimpleDuck::SetMoveAnim(this, a2);
    }
  }
  else
  {
    Association = RpAnimBlendClumpGetAssociation();
    if ( Association )
      *(_DWORD *)(Association + 28) = -1073741824;
    v20 = 55;
    v14 = (unsigned __int8 *)this + 36;
    if ( !*((_BYTE *)this + 36) )
      v20 = 141;
    v21 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v20);
    *((_DWORD *)this + 4) = v21;
    CAnimBlendAssociation::SetDeleteCallback(
      v21,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleDuck::DeleteDuckAnimCB,
      this);
    v22 = RpAnimBlendClumpGetAssociation();
    if ( v22 && *(float *)(v22 + 24) > 0.0 && *(float *)(v22 + 28) >= 0.0 )
    {
      if ( (*(_BYTE *)(v22 + 46) & 0x10) != 0 )
        *(_DWORD *)(v22 + 28) = -1065353216;
      else
        CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 3u);
    }
  }
  v15 = *v14;
LABEL_59:
  v4 = 0;
  if ( v15 == 2 )
    *((_BYTE *)this + 27) = 0;
  return v4;
}


// ============================================================

// Address: 0x543404
// Original: _ZN15CTaskSimpleDuck16DeleteDuckAnimCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleDuck::DeleteDuckAnimCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleDuck::DeleteDuckAnimCB(int this, CAnimBlendAssociation *a2, void *a3)
{
  bool v3; // zf
  int v4; // r2
  int v5; // r0

  v3 = this == 0;
  if ( this )
    v3 = a2 == 0;
  if ( !v3 )
  {
    v4 = *(__int16 *)(this + 44);
    this = v4 - 55;
    switch ( v4 )
    {
      case '7':
        goto LABEL_7;
      case '8':
      case ':':
        this = *((unsigned __int8 *)a2 + 25);
        goto LABEL_11;
      case '9':
      case ';':
        this = *((unsigned __int8 *)a2 + 25);
        *((_DWORD *)a2 + 7) = 0;
LABEL_11:
        *((_DWORD *)a2 + 5) = 0;
        if ( this )
          goto LABEL_12;
        return this;
      default:
        if ( v4 != 141 )
          return this;
LABEL_7:
        v5 = *((_DWORD *)a2 + 5);
        *((_DWORD *)a2 + 4) = 0;
        if ( !v5 || (this = *((unsigned __int8 *)a2 + 25), !*((_BYTE *)a2 + 25)) )
        {
LABEL_12:
          this = 1;
          *((_BYTE *)a2 + 24) = 1;
        }
        break;
    }
  }
  return this;
}


// ============================================================

// Address: 0x543450
// Original: _ZN15CTaskSimpleDuck11SetMoveAnimEP4CPed
// Demangled: CTaskSimpleDuck::SetMoveAnim(CPed *)
int __fastcall CTaskSimpleDuck::SetMoveAnim(CTaskSimpleDuck *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float v6; // s0
  int result; // r0
  unsigned int v8; // r2
  CAnimBlendAssociation *v9; // r0
  CAnimBlendAssociation *v10; // r0
  CAnimBlendAssociation *v11; // r0

  v6 = *((float *)this + 7);
  if ( v6 == 0.0 )
  {
    v2.n64_u32[0] = *((_DWORD *)this + 8);
    if ( v2.n64_f32[0] > 0.0 )
    {
      result = *((_DWORD *)this + 5);
      if ( result )
      {
        if ( *(_WORD *)(result + 44) != 56 )
        {
LABEL_13:
          v3.n64_u32[0] = 1058642330;
LABEL_20:
          *(_DWORD *)(result + 36) = vmax_f32(v2, v3).n64_u32[0];
          return result;
        }
        CAnimBlendAssociation::SetFinishCallback(
          (CAnimBlendAssociation *)result,
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
      }
      v10 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x3Au);
      *((_DWORD *)this + 5) = v10;
      CAnimBlendAssociation::SetDeleteCallback(
        v10,
        (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleDuck::DeleteDuckAnimCB,
        this);
      result = *((_DWORD *)this + 5);
      v2.n64_u32[0] = *((_DWORD *)this + 8);
      goto LABEL_13;
    }
    result = *((_DWORD *)this + 5);
    if ( v2.n64_f32[0] >= 0.0 )
    {
      if ( result && (*(__int16 *)(result + 44) | 2) == 0x3A )
      {
        *(_WORD *)(result + 46) &= ~1u;
        result = *((_DWORD *)this + 5);
        *(_DWORD *)(result + 28) = -1065353216;
      }
      return result;
    }
    if ( result )
    {
      if ( *(_WORD *)(result + 44) != 58 )
      {
LABEL_19:
        v3.n64_u32[0] = 1058642330;
        v2.n64_f32[0] = -v2.n64_f32[0];
        goto LABEL_20;
      }
      CAnimBlendAssociation::SetFinishCallback(
        (CAnimBlendAssociation *)result,
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
    }
    v11 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x38u);
    *((_DWORD *)this + 5) = v11;
    CAnimBlendAssociation::SetDeleteCallback(
      v11,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleDuck::DeleteDuckAnimCB,
      this);
    result = *((_DWORD *)this + 5);
    v2.n64_u32[0] = *((_DWORD *)this + 8);
    goto LABEL_19;
  }
  result = *((_DWORD *)this + 5);
  if ( result )
  {
    if ( (*(__int16 *)(result + 44) | 2) != 0x3A )
      return result;
    CAnimBlendAssociation::SetFinishCallback(
      (CAnimBlendAssociation *)result,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    v6 = *((float *)this + 7);
  }
  v8 = 57;
  if ( v6 > 0.0 )
    v8 = 59;
  v9 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v8);
  *((_DWORD *)this + 5) = v9;
  return sub_18C20C(v9, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleDuck::DeleteDuckAnimCB, this);
}


// ============================================================

// Address: 0x543590
// Original: _ZN15CTaskSimpleDuck15ControlDuckMoveE9CVector2D
// Demangled: CTaskSimpleDuck::ControlDuckMove(CVector2D)
int __fastcall CTaskSimpleDuck::ControlDuckMove(int a1, float a2, float a3)
{
  float v3; // s2
  float v4; // s6
  float v5; // s8

  *(_BYTE *)(a1 + 27) = 1;
  if ( *(float *)(a1 + 28) != 1.0 )
  {
    v3 = -1.0;
    v4 = *(float *)(a1 + 32);
    v5 = *(float *)&CTimer::ms_fTimeStep * 0.07;
    if ( (float)(a3 - v4) <= (float)(*(float *)&CTimer::ms_fTimeStep * 0.07) )
      *(float *)(a1 + 32) = (float)(a3 - v4) < (float)-v5 ? v4 - v5 : a3;
    else
      *(float *)(a1 + 32) = v4 + v5;
    if ( fabsf(a3) < 0.1 && fabsf(a2) > 0.9 )
    {
      if ( a2 > 0.0 )
        v3 = 1.0;
      *(_DWORD *)(a1 + 32) = 0;
      *(float *)(a1 + 28) = v3;
    }
  }
  return 1;
}


// ============================================================

// Address: 0x543650
// Original: _ZN15CTaskSimpleDuck13ForceStopMoveEv
// Demangled: CTaskSimpleDuck::ForceStopMove(void)
int __fastcall CTaskSimpleDuck::ForceStopMove(int this)
{
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 27) = 1;
  return this;
}


// ============================================================

// Address: 0x54365a
// Original: _ZN15CTaskSimpleDuck14StartCountDownEhb
// Demangled: CTaskSimpleDuck::StartCountDown(uchar,bool)
int __fastcall CTaskSimpleDuck::StartCountDown(int this, unsigned int a2, int a3)
{
  if ( a3 == 1 && *(unsigned __int8 *)(this + 37) < a2 )
    LOBYTE(a2) = *(_BYTE *)(this + 37);
  *(_BYTE *)(this + 37) = a2;
  return this;
}


// ============================================================

// Address: 0x543670
// Original: _ZN15CTaskSimpleDuck14SetControlTypeEh
// Demangled: CTaskSimpleDuck::SetControlType(uchar)
int __fastcall CTaskSimpleDuck::SetControlType(CTaskSimpleDuck *this, int a2)
{
  bool v2; // zf
  int v4; // r2

  v2 = *((_BYTE *)this + 24) == 0;
  if ( !*((_BYTE *)this + 24) )
    v2 = *((_BYTE *)this + 25) == 0;
  if ( !v2 )
    return 0;
  if ( a2 == 4 )
    *((_WORD *)this + 6) = 0;
  v4 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 36) = a2;
  *((_DWORD *)this + 2) = v4;
  *((_BYTE *)this + 27) = 1;
  return 1;
}


// ============================================================

// Address: 0x5436a4
// Original: _ZN15CTaskSimpleDuck12SetDuckTimerEt
// Demangled: CTaskSimpleDuck::SetDuckTimer(ushort)
int __fastcall CTaskSimpleDuck::SetDuckTimer(int this, unsigned __int16 a2)
{
  int v2; // r2

  if ( *(_BYTE *)(this + 36) != 4 )
  {
    v2 = CTimer::m_snTimeInMilliseconds;
    *(_WORD *)(this + 12) = a2;
    *(_DWORD *)(this + 8) = v2;
  }
  return this;
}


// ============================================================

// Address: 0x5436c0
// Original: _ZN15CTaskSimpleDuck10CanPedDuckEP4CPed
// Demangled: CTaskSimpleDuck::CanPedDuck(CPed *)
int __fastcall CTaskSimpleDuck::CanPedDuck(CTaskSimpleDuck *this, CPed *a2)
{
  CHID *WeaponInfo; // r5
  bool v4; // zf
  int v6; // r0

  CPed::GetWeaponSkill(this);
  WeaponInfo = (CHID *)CWeaponInfo::GetWeaponInfo();
  if ( CHID::GetInputType(WeaponInfo) )
    goto LABEL_2;
  v6 = *((_DWORD *)this + 7 * *((char *)this + 1820) + 361);
  if ( v6 != 34 )
  {
    if ( v6 == 43 && *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) == 46 )
      return 0;
    goto LABEL_2;
  }
  if ( *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) != 7 )
  {
LABEL_2:
    v4 = *(_DWORD *)WeaponInfo == 0;
    if ( *(_DWORD *)WeaponInfo )
      v4 = *(_DWORD *)WeaponInfo == 5;
    if ( v4
      || (*((_DWORD *)this + 7 * *((char *)this + 1820) + 361) | 2) == 0x2B
      || (*((_BYTE *)WeaponInfo + 25) & 0x20) != 0 )
    {
      return 1;
    }
  }
  return 0;
}


// ============================================================

// Address: 0x543f00
// Original: _ZNK15CTaskSimpleDuck5CloneEv
// Demangled: CTaskSimpleDuck::Clone(void)
int __fastcall CTaskSimpleDuck::Clone(CTaskSimpleDuck *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r6
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, a2);
  v4 = *((_DWORD *)this + 3);
  LOBYTE(this) = *((_BYTE *)this + 36);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 37) = -1;
  *(_BYTE *)(result + 36) = (_BYTE)this;
  *(_DWORD *)result = &off_66D20C;
  *(_DWORD *)(result + 8) = CTimer::m_snTimeInMilliseconds;
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 16842752;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


// ============================================================

// Address: 0x543f5c
// Original: _ZNK15CTaskSimpleDuck11GetTaskTypeEv
// Demangled: CTaskSimpleDuck::GetTaskType(void)
int __fastcall CTaskSimpleDuck::GetTaskType(CTaskSimpleDuck *this)
{
  return 415;
}


// ============================================================

// Address: 0x543f64
// Original: _ZN15CTaskSimpleDuck9SerializeEv
// Demangled: CTaskSimpleDuck::Serialize(void)
void __fastcall CTaskSimpleDuck::Serialize(CTaskSimpleDuck *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  CGenericGameStorage *v6; // r5
  int v7; // r2
  CGenericGameStorage *v8; // r5
  int v9; // r2
  int v10; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleDuck *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleDuck *))(*(_DWORD *)this + 20))(this) == 415 )
  {
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CTaskSimpleDuck *)((char *)this + 36), (char *)&stderr + 1, v5);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(2u);
    *(_WORD *)v6 = *((_WORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, (char *)&stderr + 2, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(2u);
    *(_WORD *)v8 = *((_WORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, (char *)&stderr + 2, v9);
    j_free(v8);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleDuck *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(415, v10);
  }
}


// ============================================================
