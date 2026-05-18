
// Address: 0x190984
// Original: j__ZN33CTaskSimpleDuckWhileShotsWhizzingC2Et
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::CTaskSimpleDuckWhileShotsWhizzing(ushort)
// attributes: thunk
void __fastcall CTaskSimpleDuckWhileShotsWhizzing::CTaskSimpleDuckWhileShotsWhizzing(
        CTaskSimpleDuckWhileShotsWhizzing *this,
        unsigned __int16 a2)
{
  _ZN33CTaskSimpleDuckWhileShotsWhizzingC2Et(this, a2);
}


// ============================================================

// Address: 0x1a1598
// Original: j__ZN33CTaskSimpleDuckWhileShotsWhizzingD2Ev
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::~CTaskSimpleDuckWhileShotsWhizzing()
// attributes: thunk
void __fastcall CTaskSimpleDuckWhileShotsWhizzing::~CTaskSimpleDuckWhileShotsWhizzing(
        CTaskSimpleDuckWhileShotsWhizzing *this)
{
  _ZN33CTaskSimpleDuckWhileShotsWhizzingD2Ev(this);
}


// ============================================================

// Address: 0x542e20
// Original: _ZN33CTaskSimpleDuckWhileShotsWhizzingD2Ev
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::~CTaskSimpleDuckWhileShotsWhizzing()
void __fastcall CTaskSimpleDuckWhileShotsWhizzing::~CTaskSimpleDuckWhileShotsWhizzing(
        CTaskSimpleDuckWhileShotsWhizzing *this)
{
  CAnimBlendAssociation *v2; // r0
  int v3; // r0
  CAnimBlendAssociation *v4; // r0
  int v5; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D20C;
  if ( v2 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    v3 = *((_DWORD *)this + 4);
    if ( *(float *)(v3 + 24) > 0.0 && *(float *)(v3 + 28) >= 0.0 && (*(_BYTE *)(v3 + 46) & 0x10) != 0 )
      *(_DWORD *)(v3 + 28) = -1056964608;
  }
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  if ( v4 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    v5 = *((_DWORD *)this + 5);
    if ( *(float *)(v5 + 24) > 0.0 && *(float *)(v5 + 28) >= 0.0 )
      *(_DWORD *)(v5 + 28) = -1056964608;
  }
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x543778
// Original: _ZN33CTaskSimpleDuckWhileShotsWhizzingC2Et
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::CTaskSimpleDuckWhileShotsWhizzing(ushort)
void __fastcall CTaskSimpleDuckWhileShotsWhizzing::CTaskSimpleDuckWhileShotsWhizzing(
        CTaskSimpleDuckWhileShotsWhizzing *this,
        unsigned __int16 a2)
{
  int v3; // r0
  int v4; // r1

  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)(v3 + 24) = 16842752;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_WORD *)(v3 + 36) = -256;
  *(_DWORD *)v3 = &off_66D20C;
  v4 = CTimer::m_snTimeInMilliseconds;
  *(_WORD *)(v3 + 12) = a2;
  *(_DWORD *)(v3 + 8) = v4;
  *(_WORD *)(v3 + 14) = -1;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)v3 = &off_66D240;
}


// ============================================================

// Address: 0x5437d4
// Original: _ZN33CTaskSimpleDuckWhileShotsWhizzingD0Ev
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::~CTaskSimpleDuckWhileShotsWhizzing()
void __fastcall CTaskSimpleDuckWhileShotsWhizzing::~CTaskSimpleDuckWhileShotsWhizzing(
        CTaskSimpleDuckWhileShotsWhizzing *this)
{
  void *v1; // r0

  CTaskSimpleDuckWhileShotsWhizzing::~CTaskSimpleDuckWhileShotsWhizzing(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5437e4
// Original: _ZN33CTaskSimpleDuckWhileShotsWhizzing13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleDuckWhileShotsWhizzing::MakeAbortable(
        CTaskSimpleDuckWhileShotsWhizzing *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  CPed *v6; // r8
  CTaskSimpleDuckWhileShotsWhizzing *v7; // r5
  int v8; // r2
  CAnimBlendAssociation *v9; // r0
  int v10; // r4
  CAnimBlendAssociation *v11; // r0

  v6 = a2;
  v7 = this;
  if ( a3 == 2 )
  {
    v8 = 2;
    return CTaskSimpleDuck::MakeAbortable(this, a2, v8, a4);
  }
  if ( !a4 || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 49 )
  {
    this = v7;
    a2 = v6;
    v8 = a3;
    return CTaskSimpleDuck::MakeAbortable(this, a2, v8, a4);
  }
  v9 = (CAnimBlendAssociation *)*((_DWORD *)v7 + 4);
  v10 = 0;
  if ( v9 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v9,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    v11 = (CAnimBlendAssociation *)*((_DWORD *)v7 + 5);
    *((_DWORD *)v7 + 4) = 0;
    if ( v11 )
    {
      CAnimBlendAssociation::SetFinishCallback(
        v11,
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)v7 + 5) = 0;
    }
    v10 = 1;
    *((_DWORD *)v6 + 289) &= ~0x4000000u;
  }
  return v10;
}


// ============================================================

// Address: 0x543868
// Original: _ZN33CTaskSimpleDuckWhileShotsWhizzing10ProcessPedEP4CPed
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::ProcessPed(CPed *)
int __fastcall CTaskSimpleDuckWhileShotsWhizzing::ProcessPed(CTaskSimpleDuckWhileShotsWhizzing *this, CPed *a2)
{
  CAnimBlendAssociation *v4; // r0

  if ( !*((_DWORD *)this + 4) )
  {
    v4 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x8Du);
    *((_DWORD *)this + 4) = v4;
    CAnimBlendAssociation::SetDeleteCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleDuck::DeleteDuckAnimCB,
      this);
  }
  return CTaskSimpleDuck::ProcessPed(this, a2);
}


// ============================================================

// Address: 0x544050
// Original: _ZNK33CTaskSimpleDuckWhileShotsWhizzing5CloneEv
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::Clone(void)
int __fastcall CTaskSimpleDuckWhileShotsWhizzing::Clone(CTaskSimpleDuckWhileShotsWhizzing *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int16 v4; // r5
  int result; // r0
  int v6; // r1

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, a2);
  v4 = *((_WORD *)this + 6);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 24) = 16842752;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_WORD *)(result + 36) = -256;
  *(_DWORD *)result = &off_66D20C;
  v6 = CTimer::m_snTimeInMilliseconds;
  *(_WORD *)(result + 12) = v4;
  *(_DWORD *)(result + 8) = v6;
  *(_WORD *)(result + 14) = -1;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)result = &off_66D240;
  return result;
}


// ============================================================

// Address: 0x5440b4
// Original: _ZNK33CTaskSimpleDuckWhileShotsWhizzing11GetTaskTypeEv
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::GetTaskType(void)
int __fastcall CTaskSimpleDuckWhileShotsWhizzing::GetTaskType(CTaskSimpleDuckWhileShotsWhizzing *this)
{
  return 311;
}


// ============================================================

// Address: 0x5440bc
// Original: _ZN33CTaskSimpleDuckWhileShotsWhizzing9SerializeEv
// Demangled: CTaskSimpleDuckWhileShotsWhizzing::Serialize(void)
void __fastcall CTaskSimpleDuckWhileShotsWhizzing::Serialize(CTaskSimpleDuckWhileShotsWhizzing *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleDuckWhileShotsWhizzing *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleDuckWhileShotsWhizzing *))(*(_DWORD *)this + 20))(this) == 311 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(2u);
    *(_WORD *)v5 = *((_WORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, (char *)&stderr + 2, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleDuckWhileShotsWhizzing *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(311, v7);
  }
}


// ============================================================
