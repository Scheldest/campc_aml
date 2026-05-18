
// Address: 0x194c34
// Original: j__ZN15CTaskSimpleFall11ProcessFallEP4CPed
// Demangled: CTaskSimpleFall::ProcessFall(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleFall::ProcessFall(CTaskSimpleFall *this, CPed *a2)
{
  return _ZN15CTaskSimpleFall11ProcessFallEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19affc
// Original: j__ZN15CTaskSimpleFall9StartAnimEP4CPed
// Demangled: CTaskSimpleFall::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleFall::StartAnim(CTaskSimpleFall *this, CPed *a2)
{
  return _ZN15CTaskSimpleFall9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x52b53c
// Original: _ZN15CTaskSimpleFallC2E11AnimationId12AssocGroupIdj
// Demangled: CTaskSimpleFall::CTaskSimpleFall(AnimationId,AssocGroupId,uint)
int __fastcall CTaskSimpleFall::CTaskSimpleFall(CTaskSimple *a1, int a2, int a3, int a4)
{
  int result; // r0

  CTaskSimple::CTaskSimple(a1);
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a3;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = a4;
  *(_DWORD *)(result + 28) = a4;
  *(_DWORD *)result = &off_66CA08;
  return result;
}


// ============================================================

// Address: 0x52b570
// Original: _ZN15CTaskSimpleFallD2Ev
// Demangled: CTaskSimpleFall::~CTaskSimpleFall()
void __fastcall CTaskSimpleFall::~CTaskSimpleFall(CTaskSimpleFall *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66CA08;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x52b5a4
// Original: _ZN15CTaskSimpleFallD0Ev
// Demangled: CTaskSimpleFall::~CTaskSimpleFall()
void __fastcall CTaskSimpleFall::~CTaskSimpleFall(CTaskSimpleFall *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66CA08;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x52b5dc
// Original: _ZN15CTaskSimpleFall13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleFall::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleFall::MakeAbortable(CTaskSimpleFall *this, CPed *a2, int a3, const CEvent *a4)
{
  int Association; // r9
  int v9; // r0
  int result; // r0
  float v11; // s0
  int v12; // r0

  Association = RpAnimBlendClumpGetAssociation();
  if ( Association )
  {
    if ( a3 == 2 )
    {
LABEL_3:
      v9 = RpAnimBlendClumpGetAssociation();
      if ( v9 )
        *(_DWORD *)(v9 + 28) = -998637568;
      if ( Association )
        *(_DWORD *)(Association + 28) = -998637568;
      *((_DWORD *)this + 7) = 0;
      result = 1;
      *((_BYTE *)this + 8) = 1;
      return result;
    }
  }
  else
  {
    Association = RpAnimBlendClumpGetAssociation();
    if ( a3 == 2 )
      goto LABEL_3;
  }
  result = 0;
  if ( a3 == 1 && a4 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 && *((float *)a2 + 337) < 1.0
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 66
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4) == 71
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 93 )
    {
      if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 66
        || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 93 )
      {
        v11 = -8.0;
      }
      else
      {
        v11 = -2.0;
      }
      if ( Association )
        *(float *)(Association + 28) = v11;
      v12 = *((_DWORD *)this + 5);
      if ( v12 )
      {
        *(float *)(v12 + 28) = v11;
        CAnimBlendAssociation::SetFinishCallback(
          *((CAnimBlendAssociation **)this + 5),
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
      }
      result = 1;
      *((_BYTE *)this + 8) = 1;
      *((_DWORD *)this + 5) = 0;
      *((_DWORD *)this + 7) = 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x52b700
// Original: _ZN15CTaskSimpleFall10ProcessPedEP4CPed
// Demangled: CTaskSimpleFall::ProcessPed(CPed *)
int __fastcall CTaskSimpleFall::ProcessPed(CTaskSimpleFall *this, CPed *a2)
{
  int v4; // r2
  bool v5; // zf
  int started; // r0
  unsigned int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r0

  v4 = *((_DWORD *)a2 + 291) | 0x100000;
  v5 = (*((_DWORD *)a2 + 289) & 1 | *((_DWORD *)a2 + 290) & 0x80000) == 0;
  *((_DWORD *)a2 + 333) |= 8u;
  *((_DWORD *)a2 + 291) = v4;
  started = *((unsigned __int8 *)this + 8);
  if ( !v5 )
    v5 = started == 0;
  if ( v5 )
  {
    if ( !*((_DWORD *)this + 5) && !started )
      started = CTaskSimpleFall::StartAnim(this, a2);
    CTaskSimpleFall::ProcessFall((CTaskSimpleFall *)started, a2);
    return 0;
  }
  v7 = *((_DWORD *)this + 7);
  v8 = (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
  if ( v7 > v8 )
  {
    v9 = v7 - v8;
    *((_DWORD *)this + 7) = v9;
    if ( v9 > 0x1F4
      && CPed::IsPlayer(a2) == 1
      && (*((_BYTE *)a2 + 1164) & 0x40) == 0
      && *((_DWORD *)a2 + 275) != 63
      && CPlayerPed::GetPadFromPlayer(a2)
      && !*(_WORD *)(CPlayerPed::GetPadFromPlayer(a2) + 272) )
    {
      *((_DWORD *)this + 7) = 500 - (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    }
    return 0;
  }
  *((_DWORD *)this + 7) = 0;
  return 1;
}


// ============================================================

// Address: 0x52b7fc
// Original: _ZN15CTaskSimpleFall9StartAnimEP4CPed
// Demangled: CTaskSimpleFall::StartAnim(CPed *)
int __fastcall CTaskSimpleFall::StartAnim(CTaskSimpleFall *this, CPed *a2)
{
  CAnimBlendAssociation *Association; // r0
  CAnimBlendAssociation *v6; // r0
  int v7; // r0

  if ( *((_DWORD *)a2 + 64) )
    return 0;
  if ( *((_DWORD *)this + 3) == 191 )
  {
    Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
    *((_DWORD *)this + 5) = Association;
    if ( Association )
      goto LABEL_9;
    Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
    *((_DWORD *)this + 5) = Association;
    if ( Association )
      goto LABEL_9;
  }
  else
  {
    v6 = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
    *((_DWORD *)this + 5) = v6;
    if ( v6 )
    {
      CAnimBlendAssociation::SetCurrentTime(v6, 0.0);
      *(_DWORD *)(*((_DWORD *)this + 5) + 24) = 0;
      *(_DWORD *)(*((_DWORD *)this + 5) + 28) = 1090519040;
      *(_WORD *)(*((_DWORD *)this + 5) + 46) |= 5u;
      *(_WORD *)(*((_DWORD *)this + 5) + 46) &= ~8u;
      Association = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
LABEL_9:
      CAnimBlendAssociation::SetFinishCallback(
        Association,
        (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleFall::FinishAnimFallCB,
        this);
      return 1;
    }
    v7 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)this + 4), *((_DWORD *)this + 3));
    *((_DWORD *)this + 5) = v7;
    *(_WORD *)(v7 + 46) |= 4u;
    *(_WORD *)(*((_DWORD *)this + 5) + 46) &= ~8u;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 5),
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleFall::FinishAnimFallCB,
      this);
    if ( *((_DWORD *)this + 3) == 106 )
      CAnimBlendAssociation::SetCurrentTime(*((CAnimBlendAssociation **)this + 5), 0.4);
  }
  return 1;
}


// ============================================================

// Address: 0x52b8d0
// Original: _ZN15CTaskSimpleFall11ProcessFallEP4CPed
// Demangled: CTaskSimpleFall::ProcessFall(CPed *)
int __fastcall CTaskSimpleFall::ProcessFall(CTaskSimpleFall *this, CPed *a2)
{
  int IsPlayer; // r0
  int v4; // r1
  bool v5; // zf
  int FirstAssociation; // r0
  int v7; // r6
  int result; // r0
  int v9; // r5
  unsigned int v10; // r2
  float v11; // s2

  IsPlayer = CPed::IsPlayer(a2);
  v4 = *((_DWORD *)a2 + 290);
  v5 = IsPlayer == 0;
  if ( IsPlayer )
    v5 = (v4 & 0x80000010) == 0;
  if ( !v5 && (*((_DWORD *)a2 + 289) & 1) == 0 )
  {
    FirstAssociation = RpAnimBlendClumpGetFirstAssociation();
    v7 = FirstAssociation;
    if ( FirstAssociation )
    {
      result = *(__int16 *)(FirstAssociation + 44) & 0xFFFFFFFE;
      if ( result == 124 )
      {
        v9 = v7;
LABEL_29:
        if ( *(float *)(v9 + 24) > 0.3 && *(float *)(v9 + 28) >= 0.0 )
        {
          v11 = *(float *)(v9 + 32);
          if ( v11 > 0.667 && (float)(v11 - *(float *)(v9 + 40)) <= 0.667 )
          {
            CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)v9, 0.0);
            result = *(unsigned __int16 *)(v9 + 46) | 1;
            *(_WORD *)(v9 + 46) = result;
          }
        }
        return result;
      }
    }
    result = RpAnimBlendClumpGetAssociation();
    v9 = result;
    if ( result )
      goto LABEL_29;
    result = RpAnimBlendClumpGetAssociation();
    if ( !v7 )
    {
      v9 = result;
      if ( !result )
        return result;
      goto LABEL_29;
    }
    v9 = result;
    if ( !result )
    {
      if ( *(float *)(v7 + 32) > (float)(*(float *)(*(_DWORD *)(v7 + 20) + 16) * 0.8) )
      {
        if ( (*(_BYTE *)(v7 + 47) & 8) != 0 )
          v10 = 125;
        else
          v10 = 124;
        return sub_197F88(*((_DWORD *)a2 + 6), 0, v10);
      }
      v9 = 0;
    }
    if ( !result )
      return result;
    goto LABEL_29;
  }
  result = *((_DWORD *)a2 + 289) & 3;
  if ( result == 1 )
  {
    result = v4 & 0x80000010;
    if ( (v4 & 0x80000010) != 0 )
    {
      result = RpAnimBlendClumpGetAssociation();
      if ( result || (result = RpAnimBlendClumpGetAssociation()) != 0 )
      {
        *((_DWORD *)a2 + 290) &= ~0x10u;
        *(_DWORD *)(result + 36) = 1077936128;
      }
      else
      {
        result = RpAnimBlendClumpGetFirstAssociation();
        if ( result )
        {
          result = *(unsigned __int8 *)(result + 46) << 31;
          if ( !result )
          {
            result = *((_DWORD *)a2 + 290) & 0xFFFFFFEF;
            *((_DWORD *)a2 + 290) = result;
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x52ba48
// Original: _ZN15CTaskSimpleFall16FinishAnimFallCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleFall::FinishAnimFallCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleFall::FinishAnimFallCB(CTaskSimpleFall *this, CAnimBlendAssociation *a2, void *a3)
{
  int result; // r0

  *((_BYTE *)a2 + 8) = 1;
  result = 0;
  *((_DWORD *)a2 + 5) = 0;
  return result;
}


// ============================================================

// Address: 0x532a10
// Original: _ZNK15CTaskSimpleFall5CloneEv
// Demangled: CTaskSimpleFall::Clone(void)
int __fastcall CTaskSimpleFall::Clone(CTaskSimpleFall *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int v5; // r4
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = *((_DWORD *)this + 6);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = 0;
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = v5;
  *(_DWORD *)(result + 28) = v5;
  *(_DWORD *)result = &off_66CA08;
  return result;
}


// ============================================================

// Address: 0x532a4c
// Original: _ZNK15CTaskSimpleFall11GetTaskTypeEv
// Demangled: CTaskSimpleFall::GetTaskType(void)
int __fastcall CTaskSimpleFall::GetTaskType(CTaskSimpleFall *this)
{
  return 207;
}


// ============================================================
