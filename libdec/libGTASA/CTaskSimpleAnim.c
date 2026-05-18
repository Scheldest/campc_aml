
// Address: 0x18d444
// Original: j__ZN15CTaskSimpleAnim13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleAnim::MakeAbortable(CPed *,int,CEvent const*)
// attributes: thunk
int __fastcall CTaskSimpleAnim::MakeAbortable(CTaskSimpleAnim *this, CPed *a2, int a3, const CEvent *a4)
{
  return _ZN15CTaskSimpleAnim13MakeAbortableEP4CPediPK6CEvent(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19164c
// Original: j__ZN15CTaskSimpleAnimD2Ev
// Demangled: CTaskSimpleAnim::~CTaskSimpleAnim()
// attributes: thunk
void __fastcall CTaskSimpleAnim::~CTaskSimpleAnim(CTaskSimpleAnim *this)
{
  _ZN15CTaskSimpleAnimD2Ev(this);
}


// ============================================================

// Address: 0x196600
// Original: j__ZN15CTaskSimpleAnimC2Eb
// Demangled: CTaskSimpleAnim::CTaskSimpleAnim(bool)
// attributes: thunk
void __fastcall CTaskSimpleAnim::CTaskSimpleAnim(CTaskSimpleAnim *this, bool a2)
{
  _ZN15CTaskSimpleAnimC2Eb(this, a2);
}


// ============================================================

// Address: 0x4d6b08
// Original: _ZN15CTaskSimpleAnimC2Eb
// Demangled: CTaskSimpleAnim::CTaskSimpleAnim(bool)
void __fastcall CTaskSimpleAnim::CTaskSimpleAnim(CTaskSimpleAnim *this, bool a2)
{
  int v3; // r0
  char v4; // r2

  CTaskSimple::CTaskSimple(this);
  v4 = *(_BYTE *)(v3 + 12);
  *(_DWORD *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 12) = v4 & 0xF8 | (4 * a2);
  *(_DWORD *)v3 = &off_669498;
}


// ============================================================

// Address: 0x4d6b34
// Original: _ZN15CTaskSimpleAnimD0Ev
// Demangled: CTaskSimpleAnim::~CTaskSimpleAnim()
void __fastcall __noreturn CTaskSimpleAnim::~CTaskSimpleAnim(CTaskSimpleAnim *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x4d6b38
// Original: _ZN15CTaskSimpleAnim13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleAnim::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleAnim::MakeAbortable(CTaskSimpleAnim *this, CPed *a2, int a3, const CEvent *a4)
{
  char v6; // r0
  float v9; // s16
  bool v10; // zf
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  CAnimBlendAssociation *v16; // r0
  char v17; // r0

  v6 = *((_BYTE *)this + 12);
  if ( a3 == 2 )
  {
    v9 = -1000.0;
    *((_BYTE *)this + 12) = v6 & 0xFB;
    goto LABEL_8;
  }
  v9 = -4.0;
  v10 = a4 == 0;
  if ( a4 )
    v10 = (v6 & 2) == 0;
  if ( v10 )
  {
LABEL_8:
    if ( !a4 )
      goto LABEL_15;
    goto LABEL_9;
  }
  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 32 )
    return 0;
  v9 = -4.0;
LABEL_9:
  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 32 )
  {
    v11 = *((_DWORD *)a4 + 4);
    if ( v11 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11) == 401 )
      {
        v12 = *((_DWORD *)this + 2);
        if ( v12 )
          *(_WORD *)(v12 + 46) |= 4u;
        goto LABEL_20;
      }
    }
  }
LABEL_15:
  v13 = *((_DWORD *)this + 2);
  if ( v13 )
  {
    *(_WORD *)(v13 + 46) |= 4u;
    if ( (*((_BYTE *)this + 12) & 4) == 0 )
    {
      v14 = *((_DWORD *)this + 2);
      if ( (*(_BYTE *)(v14 + 46) & 0x10) != 0 )
        *(float *)(v14 + 28) = v9;
      else
        CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 3u);
    }
  }
LABEL_20:
  if ( (unsigned int)(a3 - 1) >= 2 && (*((_BYTE *)this + 12) & 4) == 0 )
    return 0;
  v16 = (CAnimBlendAssociation *)*((_DWORD *)this + 2);
  if ( v16 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v16,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    v17 = *((_BYTE *)this + 12);
    *((_DWORD *)this + 2) = 0;
    *((_BYTE *)this + 12) = v17 | 1;
  }
  return 1;
}


// ============================================================

// Address: 0x4d6c28
// Original: _ZN15CTaskSimpleAnim15FinishRunAnimCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleAnim::FinishRunAnimCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleAnim::FinishRunAnimCB(CTaskSimpleAnim *this, CAnimBlendAssociation *a2, void *a3)
{
  int v3; // r0
  int result; // r0

  v3 = *((unsigned __int8 *)a2 + 12);
  *((_DWORD *)a2 + 2) = 0;
  result = v3 | 1;
  *((_BYTE *)a2 + 12) = result;
  return result;
}


// ============================================================

// Address: 0x4d7d9c
// Original: _ZN15CTaskSimpleAnimD2Ev
// Demangled: CTaskSimpleAnim::~CTaskSimpleAnim()
void __fastcall CTaskSimpleAnim::~CTaskSimpleAnim(CTaskSimpleAnim *this)
{
  CAnimBlendAssociation *v2; // r0
  int v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_669498;
  if ( v2 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *(_WORD *)(*((_DWORD *)this + 2) + 46) |= 4u;
    if ( (*((_BYTE *)this + 12) & 4) == 0 )
    {
      v3 = *((_DWORD *)this + 2);
      if ( *(float *)(v3 + 24) > 0.0 && *(float *)(v3 + 28) >= 0.0 )
        *(_DWORD *)(v3 + 28) = -1065353216;
    }
    *((_DWORD *)this + 2) = 0;
  }
  j_CTask::~CTask(this);
}


// ============================================================
