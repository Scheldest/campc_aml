
// Address: 0x18dfec
// Original: j__ZN16CTaskComplexJumpD2Ev
// Demangled: CTaskComplexJump::~CTaskComplexJump()
// attributes: thunk
void __fastcall CTaskComplexJump::~CTaskComplexJump(CTaskComplexJump *this)
{
  _ZN16CTaskComplexJumpD2Ev(this);
}


// ============================================================

// Address: 0x196dbc
// Original: j__ZN16CTaskComplexJumpC2Ei
// Demangled: CTaskComplexJump::CTaskComplexJump(int)
// attributes: thunk
void __fastcall CTaskComplexJump::CTaskComplexJump(CTaskComplexJump *this, int a2)
{
  _ZN16CTaskComplexJumpC2Ei(this, a2);
}


// ============================================================

// Address: 0x197ecc
// Original: j__ZN16CTaskComplexJumpC2Ei_0
// Demangled: CTaskComplexJump::CTaskComplexJump(int)
// attributes: thunk
void __fastcall CTaskComplexJump::CTaskComplexJump(CTaskComplexJump *this, int a2)
{
  _ZN16CTaskComplexJumpC2Ei(this, a2);
}


// ============================================================

// Address: 0x52df84
// Original: _ZN16CTaskComplexJumpC2Ei
// Demangled: CTaskComplexJump::CTaskComplexJump(int)
void __fastcall CTaskComplexJump::CTaskComplexJump(CTaskComplexJump *this, int a2)
{
  int v3; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v3 + 12) = a2;
  *(_BYTE *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_66CBC8;
}


// ============================================================

// Address: 0x52dfa4
// Original: _ZN16CTaskComplexJumpD2Ev
// Demangled: CTaskComplexJump::~CTaskComplexJump()
// attributes: thunk
void __fastcall CTaskComplexJump::~CTaskComplexJump(CTaskComplexJump *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x52dfa8
// Original: _ZN16CTaskComplexJumpD0Ev
// Demangled: CTaskComplexJump::~CTaskComplexJump()
void __fastcall CTaskComplexJump::~CTaskComplexJump(CTaskComplexJump *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x52dfb8
// Original: _ZN16CTaskComplexJump13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexJump::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexJump::MakeAbortable(CTaskComplexJump *this, CPed *a2, int a3, const CEvent *a4)
{
  bool v8; // zf

  if ( a3 == 1 && a4 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
    {
      if ( *((_DWORD *)a4 + 6) == 54 )
      {
        v8 = *((_BYTE *)a4 + 60) == 0;
        if ( *((_BYTE *)a4 + 60) )
          v8 = *((_BYTE *)a4 + 9) == 0;
        if ( !v8 )
          goto LABEL_12;
      }
    }
    else if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 10 )
    {
LABEL_12:
      *((_DWORD *)a2 + 289) &= 0xFFFFF9FF;
      return 1;
    }
  }
  if ( (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         a3,
         a4) == 1 )
    goto LABEL_12;
  return 0;
}


// ============================================================

// Address: 0x52e02c
// Original: _ZN16CTaskComplexJump17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexJump::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexJump::CreateNextSubTask(CTaskComplexJump *this, CPed *a2)
{
  int v4; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r0
  bool v9; // zf

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 > 253 )
  {
    if ( v4 == 254 )
    {
      v7 = 240;
      if ( (*((_BYTE *)a2 + 1157) & 2) == 0 )
        v7 = 1302;
      return CTaskComplexJump::CreateSubTask(this, v7, a2);
    }
    if ( v4 != 500 )
      return 0;
  }
  else if ( v4 == 210 )
  {
    v6 = *((_DWORD *)this + 2);
    if ( *(_BYTE *)(v6 + 35) )
    {
      if ( *(_BYTE *)(v6 + 33) )
      {
        v7 = 500;
        *((_DWORD *)a2 + 289) |= 0x400u;
      }
      else
      {
        v8 = *(_DWORD *)(v6 + 28);
        v9 = v8 == 0;
        if ( v8 )
          v9 = *((_DWORD *)this + 3) == -1;
        if ( v9 )
          v7 = 240;
        else
          v7 = 254;
        *((_DWORD *)a2 + 289) |= 0x200u;
      }
      return CTaskComplexJump::CreateSubTask(this, v7, a2);
    }
  }
  else if ( v4 != 240 )
  {
    return 0;
  }
  v7 = 1302;
  *((_DWORD *)a2 + 289) &= ~0x400u;
  return CTaskComplexJump::CreateSubTask(this, v7, a2);
}


// ============================================================

// Address: 0x52e0c8
// Original: _ZN16CTaskComplexJump13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexJump::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexJump::CreateSubTask(CTaskComplexJump *this, int a2, CPed *a3)
{
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r8
  int v9; // r11
  unsigned int v10; // r1
  float *v11; // r2
  float v12; // s16
  float v13; // s20
  float v14; // s18
  int v15; // r6
  CEntity **v16; // r5
  unsigned int v17; // r1
  char v18; // r9
  __int64 v19; // d16
  int v20; // r6
  char v22; // [sp+0h] [bp-40h]
  int v23; // [sp+4h] [bp-3Ch]

  v5 = 0;
  if ( a2 <= 253 )
  {
    if ( a2 == 210 )
    {
      v5 = CTask::operator new((CTask *)&word_2C, 0xD2u);
      v20 = *((_DWORD *)this + 3);
      CTaskSimple::CTaskSimple((CTaskSimple *)v5);
      *(_DWORD *)(v5 + 28) = 0;
      *(_DWORD *)(v5 + 32) = 0;
      if ( v20 != 1 )
        LOBYTE(v20) = 0;
      *(_BYTE *)(v5 + 36) = v20;
      *(_BYTE *)(v5 + 37) = 0;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)v5 = &off_66CB94;
      if ( *((_BYTE *)this + 16) || CPedGroups::IsInPlayersGroup(a3, 0) == 1 )
        *(_BYTE *)(v5 + 37) = 1;
    }
    else if ( a2 == 240 )
    {
      v5 = CTask::operator new((CTask *)&word_10, 0xF0u);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_WORD *)(v5 + 12) = 1;
      *(_BYTE *)(v5 + 14) = 0;
      *(_DWORD *)v5 = &off_66CAB4;
      v6 = *((_DWORD *)this + 2);
      if ( v6 )
      {
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 254 && *(_BYTE *)(*((_DWORD *)this + 2) + 12) )
          *(_BYTE *)(v5 + 14) = 1;
      }
    }
  }
  else
  {
    switch ( a2 )
    {
      case 254:
        v7 = *((_DWORD *)this + 2);
        if ( v7 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == 210 )
        {
          v8 = *((_DWORD *)this + 3);
          v9 = *((_DWORD *)this + 2);
          v10 = *((_DWORD *)a3 + 5);
          v11 = (float *)(v10 + 48);
          v12 = *(float *)(v9 + 16);
          if ( !v10 )
            v11 = (float *)((char *)a3 + 4);
          v13 = CTaskSimpleClimb::ms_fMinForStretchGrab;
          v14 = v11[2];
          v5 = CTask::operator new((CTask *)&word_30, v10);
          v22 = *(_BYTE *)(v9 + 24);
          v23 = *(_DWORD *)(v9 + 20);
          v15 = *(_DWORD *)(v9 + 28);
          CTaskSimple::CTaskSimple((CTaskSimple *)v5);
          *(_DWORD *)v5 = &off_66CC04;
          *(_WORD *)(v5 + 8) = 0;
          *(_BYTE *)(v5 + 10) = 0;
          *(_BYTE *)(v5 + 12) = 0;
          *(_DWORD *)(v5 + 44) = 0;
          *(_DWORD *)(v5 + 36) = v15;
          v16 = (CEntity **)(v5 + 36);
          CWidgetHelpText::ConditionSatisfied((CWidgetHelpText *)&elf_hash_bucket[193], v17);
          v18 = 1;
          if ( (float)(v12 - v14) < v13 )
            v18 = 2;
          if ( v8 != 1 )
            LOBYTE(v8) = 0;
          if ( *v16 )
            CEntity::RegisterReference(*v16, (CEntity **)(v5 + 36));
          v19 = *(_QWORD *)(v9 + 8);
          *(_DWORD *)(v5 + 32) = *(_DWORD *)(v9 + 16);
          *(_QWORD *)(v5 + 24) = v19;
          *(_BYTE *)(v5 + 15) = v22;
          *(_DWORD *)(v5 + 20) = v23;
          *(_BYTE *)(v5 + 13) = v18;
          *(_BYTE *)(v5 + 11) = v8;
          *(_BYTE *)(v5 + 14) = 0;
          *(_BYTE *)(v5 + 16) = -1;
          *(_WORD *)(v5 + 40) = 0;
        }
        else
        {
          v5 = CTask::operator new((CTask *)&word_10, a2);
          CTaskComplex::CTaskComplex((CTaskComplex *)v5);
          *(_WORD *)(v5 + 12) = 1;
          *(_BYTE *)(v5 + 14) = 0;
          *(_DWORD *)v5 = &off_66CAB4;
        }
        break;
      case 500:
        v5 = CTask::operator new((CTask *)&word_10, 0x1F4u);
        CTaskSimpleHitHead::CTaskSimpleHitHead((CTaskSimpleHitHead *)v5);
        break;
      case 1302:
        *((_DWORD *)a3 + 289) &= ~0x200u;
        return 0;
    }
  }
  return v5;
}


// ============================================================

// Address: 0x52e2cc
// Original: _ZN16CTaskComplexJump18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexJump::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexJump::CreateFirstSubTask(CTaskComplexJump *this, CPed *a2)
{
  int v4; // r4
  int v5; // r5

  v4 = CTask::operator new((CTask *)&word_2C, (unsigned int)a2);
  v5 = *((_DWORD *)this + 3);
  CTaskSimple::CTaskSimple((CTaskSimple *)v4);
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 32) = 0;
  if ( v5 != 1 )
    LOBYTE(v5) = 0;
  *(_BYTE *)(v4 + 36) = v5;
  *(_BYTE *)(v4 + 37) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)v4 = &off_66CB94;
  if ( *((_BYTE *)this + 16) || CPedGroups::IsInPlayersGroup(a2, 0) == 1 )
    *(_BYTE *)(v4 + 37) = 1;
  return v4;
}


// ============================================================

// Address: 0x52e328
// Original: _ZN16CTaskComplexJump14ControlSubTaskEP4CPed
// Demangled: CTaskComplexJump::ControlSubTask(CPed *)
int __fastcall CTaskComplexJump::ControlSubTask(CTaskComplexJump *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x5331cc
// Original: _ZNK16CTaskComplexJump5CloneEv
// Demangled: CTaskComplexJump::Clone(void)
int __fastcall CTaskComplexJump::Clone(CTaskComplexJump *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v4;
  *(_BYTE *)(result + 16) = 0;
  *(_DWORD *)result = &off_66CBC8;
  *(_BYTE *)(result + 16) = *((_BYTE *)this + 16);
  return result;
}


// ============================================================

// Address: 0x5331f8
// Original: _ZNK16CTaskComplexJump11GetTaskTypeEv
// Demangled: CTaskComplexJump::GetTaskType(void)
int __fastcall CTaskComplexJump::GetTaskType(CTaskComplexJump *this)
{
  return 211;
}


// ============================================================

// Address: 0x5331fc
// Original: _ZN16CTaskComplexJump9SerializeEv
// Demangled: CTaskComplexJump::Serialize(void)
void __fastcall CTaskComplexJump::Serialize(CTaskComplexJump *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexJump *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexJump *))(*(_DWORD *)this + 20))(this) == 211 )
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
    v7 = (*(int (__fastcall **)(CTaskComplexJump *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(211, v7);
  }
}


// ============================================================
