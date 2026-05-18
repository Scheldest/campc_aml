
// Address: 0x19c81c
// Original: j__ZN20CTaskInteriorUseInfoC2EP14InteriorInfo_tP10Interior_cih
// Demangled: CTaskInteriorUseInfo::CTaskInteriorUseInfo(InteriorInfo_t *,Interior_c *,int,uchar)
// attributes: thunk
int __fastcall CTaskInteriorUseInfo::CTaskInteriorUseInfo(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN20CTaskInteriorUseInfoC2EP14InteriorInfo_tP10Interior_cih(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x5297a8
// Original: _ZN20CTaskInteriorUseInfoC2EP14InteriorInfo_tP10Interior_cih
// Demangled: CTaskInteriorUseInfo::CTaskInteriorUseInfo(InteriorInfo_t *,Interior_c *,int,uchar)
int __fastcall CTaskInteriorUseInfo::CTaskInteriorUseInfo(CTaskComplex *a1, int a2, int a3, int a4, char a5)
{
  int result; // r0

  CTaskComplex::CTaskComplex(a1);
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a3;
  *(_DWORD *)(result + 20) = a4;
  *(_BYTE *)(result + 24) = a5;
  *(_DWORD *)result = &off_66C8BC;
  return result;
}


// ============================================================

// Address: 0x5297d8
// Original: _ZN20CTaskInteriorUseInfoD2Ev
// Demangled: CTaskInteriorUseInfo::~CTaskInteriorUseInfo()
void __fastcall CTaskInteriorUseInfo::~CTaskInteriorUseInfo(CTaskInteriorUseInfo *this)
{
  int v1; // r1

  v1 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C8BC;
  if ( v1 )
    *(_BYTE *)(v1 + 1) = 0;
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5297f4
// Original: _ZN20CTaskInteriorUseInfoD0Ev
// Demangled: CTaskInteriorUseInfo::~CTaskInteriorUseInfo()
void __fastcall CTaskInteriorUseInfo::~CTaskInteriorUseInfo(CTaskInteriorUseInfo *this)
{
  int v1; // r1
  void *v2; // r0

  v1 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C8BC;
  if ( v1 )
    *(_BYTE *)(v1 + 1) = 0;
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v2);
}


// ============================================================

// Address: 0x52981c
// Original: _ZNK20CTaskInteriorUseInfo5CloneEv
// Demangled: CTaskInteriorUseInfo::Clone(void)
int __fastcall CTaskInteriorUseInfo::Clone(CTaskInteriorUseInfo *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r8
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, a2);
  v4 = *((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 4);
  v6 = *((_DWORD *)this + 5);
  LOBYTE(this) = *((_BYTE *)this + 24);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 16) = v5;
  *(_DWORD *)(result + 20) = v6;
  *(_BYTE *)(result + 24) = (_BYTE)this;
  *(_DWORD *)result = &off_66C8BC;
  return result;
}


// ============================================================

// Address: 0x529858
// Original: _ZN20CTaskInteriorUseInfo13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskInteriorUseInfo::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskInteriorUseInfo::MakeAbortable(CTaskInteriorUseInfo *this, CPed *a2, int a3, const CEvent *a4)
{
  if ( *(_DWORD *)(*((_DWORD *)this + 3) + 28) )
    *((_DWORD *)a2 + 75) = 0;
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x52987c
// Original: _ZN20CTaskInteriorUseInfo17CreateNextSubTaskEP4CPed
// Demangled: CTaskInteriorUseInfo::CreateNextSubTask(CPed *)
int __fastcall CTaskInteriorUseInfo::CreateNextSubTask(CTaskInteriorUseInfo *this, CPed *a2)
{
  int v4; // r4
  int v5; // r8
  int v6; // r6
  char v7; // r5
  char *v8; // r0
  CTaskSimpleStandStill *v9; // r0
  void *v10; // r1
  int v11; // r8
  int v12; // r6
  char v13; // r5
  int v14; // r3
  int v15; // r8
  int v16; // r6
  unsigned int v17; // r1
  int v18; // s0
  int v19; // r8
  int v20; // r6
  char v21; // r5
  unsigned int v22; // r1
  bool v23; // r2
  unsigned int v24; // r1
  _BYTE *v25; // r4
  unsigned int v26; // r1
  unsigned int v27; // r1
  CTask *v28; // r5

  if ( !*((_DWORD *)this + 3) )
    return 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1401 )
  {
    switch ( **((_BYTE **)this + 3) )
    {
      case 1:
        v4 = CTask::operator new((CTask *)&word_2C, 0x579u);
        v5 = *((_DWORD *)this + 3);
        v6 = *((_DWORD *)this + 5);
        v7 = *((_BYTE *)this + 24);
        CTaskSimple::CTaskSimple((CTaskSimple *)v4);
        *(_WORD *)(v4 + 36) = 0;
        *(_DWORD *)(v4 + 8) = v6;
        *(_DWORD *)(v4 + 12) = v5;
        *(_BYTE *)(v4 + 16) = v7;
        v8 = (char *)&`vtable for'CTaskInteriorSitInChair;
        goto LABEL_10;
      case 2:
        v9 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0x579u);
        v10 = &unk_98967F;
        v4 = (int)v9;
        goto LABEL_19;
      case 3:
        v4 = CTask::operator new((CTask *)&word_30, 0x579u);
        v11 = *((_DWORD *)this + 3);
        v12 = *((_DWORD *)this + 5);
        v13 = *((_BYTE *)this + 24);
        CTaskSimple::CTaskSimple((CTaskSimple *)v4);
        v14 = 337;
        *(_WORD *)(v4 + 36) = 0;
        *(_DWORD *)(v4 + 8) = v12;
        *(_DWORD *)(v4 + 12) = v11;
        goto LABEL_9;
      case 4:
        v4 = CTask::operator new((CTask *)&word_30, 0x579u);
        v15 = *((_DWORD *)this + 3);
        v16 = *((_DWORD *)this + 5);
        v13 = *((_BYTE *)this + 24);
        CTaskSimple::CTaskSimple((CTaskSimple *)v4);
        *(_WORD *)(v4 + 36) = 0;
        *(_DWORD *)(v4 + 8) = v16;
        *(_DWORD *)(v4 + 12) = v15;
        v14 = 340;
LABEL_9:
        v8 = (char *)&`vtable for'CTaskInteriorLieInBed;
        *(_DWORD *)(v4 + 44) = v14;
        *(_BYTE *)(v4 + 17) = v13;
LABEL_10:
        *(_WORD *)(v4 + 40) = 0;
        *(_BYTE *)(v4 + 42) = 0;
        *(_DWORD *)(v4 + 20) = 0;
        *(_DWORD *)(v4 + 24) = -1;
        *(_DWORD *)(v4 + 28) = 0;
        *(_DWORD *)(v4 + 32) = 0;
        goto LABEL_16;
      case 5:
        if ( !InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 0) )
          goto LABEL_25;
        v18 = 4.0;
        if ( *((_BYTE *)this + 24) )
          v18 = 1148846080;
        v4 = CTask::operator new((CTask *)&dword_34, v17);
        CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(v4, 84, 346, v18, 4.0, *((_DWORD *)this + 5), 0);
        return v4;
      case 6:
        v4 = CTask::operator new((CTask *)&dword_38, 0x579u);
        v19 = *((_DWORD *)this + 3);
        v20 = *((_DWORD *)this + 5);
        v21 = *((_BYTE *)this + 24);
        CTaskSimple::CTaskSimple((CTaskSimple *)v4);
        *(_WORD *)(v4 + 36) = 0;
        *(_WORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 40) = 0;
        *(_DWORD *)(v4 + 44) = 0;
        *(_DWORD *)(v4 + 8) = v20;
        *(_DWORD *)(v4 + 12) = v19;
        *(_BYTE *)(v4 + 16) = v21;
        *(_DWORD *)(v4 + 20) = 0;
        *(_DWORD *)(v4 + 24) = -1;
        *(_DWORD *)(v4 + 28) = 0;
        *(_DWORD *)(v4 + 32) = 0;
        *(_WORD *)(v4 + 52) = 0;
        v8 = (char *)&`vtable for'CTaskInteriorSitAtDesk;
        *(_BYTE *)(v4 + 54) = 0;
LABEL_16:
        *(_DWORD *)v4 = v8 + 8;
        return v4;
      case 7:
        if ( !InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 2) )
          goto LABEL_25;
        v9 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v22);
        v4 = (int)v9;
        v10 = elf_hash_bucket + 4748;
LABEL_19:
        v23 = 0;
        goto LABEL_29;
      case 8:
        if ( !InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 1) )
          goto LABEL_25;
        CPed::Say(a2, 0xBCu, 0, 1.0, 0, 0, 0);
        v4 = CTask::operator new((CTask *)&dword_20, v24);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim(v4, 86, 325, 1082130432, 0);
        return v4;
      case 9:
        if ( !InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 1) )
          goto LABEL_25;
        v25 = *(_BYTE **)(*(_DWORD *)(InteriorGroup_c::GetPed(*(InteriorGroup_c **)(*((_DWORD *)this + 4) + 12), 0)
                                    + 1088)
                        + 20);
        if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v25 + 20))(v25) != 1405 )
          goto LABEL_25;
        v25[12] = 1;
        CPed::Say(a2, 0xBDu, 0, 1.0, 0, 0, 0);
        v4 = CTask::operator new((CTask *)&dword_40, v26);
        CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v4);
        v28 = (CTask *)CTask::operator new((CTask *)&dword_20, v27);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v28, 86, 326, 1082130432, 0);
        CTaskComplexSequence::AddTask((CTaskComplexSequence *)v4, v28);
        return v4;
      case 0xA:
        v9 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0x579u);
        v4 = (int)v9;
        v10 = 0;
        v23 = 1;
LABEL_29:
        CTaskSimpleStandStill::CTaskSimpleStandStill(v9, (int)v10, v23, 0, 8.0);
        break;
      default:
        goto LABEL_25;
    }
  }
  else
  {
LABEL_25:
    v4 = 0;
    if ( *(_DWORD *)(*((_DWORD *)this + 3) + 28) )
      *((_DWORD *)a2 + 75) = 0;
  }
  return v4;
}


// ============================================================

// Address: 0x529b48
// Original: _ZN20CTaskInteriorUseInfo18CreateFirstSubTaskEP4CPed
// Demangled: CTaskInteriorUseInfo::CreateFirstSubTask(CPed *)
void __fastcall CTaskInteriorUseInfo::CreateFirstSubTask(CTaskInteriorUseInfo *this, CPed *a2)
{
  int v3; // r0
  CTaskComplex *v4; // r0
  __int64 v5; // kr00_8
  char v6; // r4
  int v7; // r0

  v3 = *((_DWORD *)this + 3);
  if ( v3 )
  {
    *(_BYTE *)(v3 + 1) = 1;
    v4 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, 1u);
    v5 = *(_QWORD *)((char *)this + 12);
    v6 = *((_BYTE *)this + 24);
    CTaskComplex::CTaskComplex(v4);
    *(_DWORD *)v7 = &off_66C880;
    *(_QWORD *)(v7 + 12) = v5;
    *(_BYTE *)(v7 + 20) = v6;
  }
}


// ============================================================

// Address: 0x529b8c
// Original: _ZN20CTaskInteriorUseInfo14ControlSubTaskEP4CPed
// Demangled: CTaskInteriorUseInfo::ControlSubTask(CPed *)
int __fastcall CTaskInteriorUseInfo::ControlSubTask(CTaskInteriorUseInfo *this, CPed *a2)
{
  int v2; // r2
  int v4; // r2

  v2 = *((_DWORD *)this + 3);
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 28);
  if ( v4 )
    *((_DWORD *)a2 + 75) = v4;
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x52afce
// Original: _ZNK20CTaskInteriorUseInfo11GetTaskTypeEv
// Demangled: CTaskInteriorUseInfo::GetTaskType(void)
int __fastcall CTaskInteriorUseInfo::GetTaskType(CTaskInteriorUseInfo *this)
{
  return 1400;
}


// ============================================================
