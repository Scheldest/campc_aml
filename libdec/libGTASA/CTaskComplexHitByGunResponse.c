
// Address: 0x18daec
// Original: j__ZN28CTaskComplexHitByGunResponseC2Ei
// Demangled: CTaskComplexHitByGunResponse::CTaskComplexHitByGunResponse(int)
// attributes: thunk
void __fastcall CTaskComplexHitByGunResponse::CTaskComplexHitByGunResponse(CTaskComplexHitByGunResponse *this, int a2)
{
  _ZN28CTaskComplexHitByGunResponseC2Ei(this, a2);
}


// ============================================================

// Address: 0x4ecfd8
// Original: _ZN28CTaskComplexHitByGunResponseC2Ei
// Demangled: CTaskComplexHitByGunResponse::CTaskComplexHitByGunResponse(int)
void __fastcall CTaskComplexHitByGunResponse::CTaskComplexHitByGunResponse(CTaskComplexHitByGunResponse *this, int a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  *v3 = &off_66A088;
}


// ============================================================

// Address: 0x4ecff4
// Original: _ZN28CTaskComplexHitByGunResponseD2Ev
// Demangled: CTaskComplexHitByGunResponse::~CTaskComplexHitByGunResponse()
// attributes: thunk
void __fastcall CTaskComplexHitByGunResponse::~CTaskComplexHitByGunResponse(CTaskComplexHitByGunResponse *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ecff8
// Original: _ZN28CTaskComplexHitByGunResponseD0Ev
// Demangled: CTaskComplexHitByGunResponse::~CTaskComplexHitByGunResponse()
void __fastcall CTaskComplexHitByGunResponse::~CTaskComplexHitByGunResponse(CTaskComplexHitByGunResponse *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ed008
// Original: _ZN28CTaskComplexHitByGunResponse17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexHitByGunResponse::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexHitByGunResponse::CreateNextSubTask(CTaskComplexHitByGunResponse *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4ed00c
// Original: _ZN28CTaskComplexHitByGunResponse18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexHitByGunResponse::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexHitByGunResponse::CreateFirstSubTask(CTaskComplexHitByGunResponse *this, CPed *a2)
{
  _DWORD *result; // r0
  int v3; // r0
  _DWORD *v4; // r1
  int v5; // r0
  int v6; // r0
  int v7; // r0

  switch ( *((_DWORD *)this + 3) )
  {
    case 0:
      v3 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v3, 0, 28, 1082130432, 408, (int)"HitByGunFromFront", 0);
      v4 = &`vtable for'CTaskSimpleHitByGunFromFront;
      goto LABEL_8;
    case 1:
      v7 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 0, 29, 1082130432, 409, (int)"HitByGunFromLeft", 0);
      v4 = &`vtable for'CTaskSimpleHitByGunFromLeft;
      goto LABEL_8;
    case 2:
      v5 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 30, 1082130432, 407, (int)"HitByGunFromRear", 0);
      v4 = &`vtable for'CTaskSimpleHitByGunFromRear;
      goto LABEL_8;
    case 3:
      v6 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v6, 0, 31, 1082130432, 410, (int)"HitByGunFromRight", 0);
      v4 = &`vtable for'CTaskSimpleHitByGunFromRight;
LABEL_8:
      *result = *v4 + 8;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ============================================================

// Address: 0x4ed0ec
// Original: _ZN28CTaskComplexHitByGunResponse14ControlSubTaskEP4CPed
// Demangled: CTaskComplexHitByGunResponse::ControlSubTask(CPed *)
int __fastcall CTaskComplexHitByGunResponse::ControlSubTask(CTaskComplexHitByGunResponse *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f34a0
// Original: _ZNK28CTaskComplexHitByGunResponse5CloneEv
// Demangled: CTaskComplexHitByGunResponse::Clone(void)
_DWORD *__fastcall CTaskComplexHitByGunResponse::Clone(CTaskComplexHitByGunResponse *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  result[3] = v4;
  *result = &off_66A088;
  return result;
}


// ============================================================

// Address: 0x4f34c4
// Original: _ZNK28CTaskComplexHitByGunResponse11GetTaskTypeEv
// Demangled: CTaskComplexHitByGunResponse::GetTaskType(void)
int __fastcall CTaskComplexHitByGunResponse::GetTaskType(CTaskComplexHitByGunResponse *this)
{
  return 231;
}


// ============================================================

// Address: 0x4f34c8
// Original: _ZN28CTaskComplexHitByGunResponse13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexHitByGunResponse::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexHitByGunResponse::MakeAbortable(
        CTaskComplexHitByGunResponse *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( (unsigned int)(a3 - 1) <= 1 )
    return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2);
  else
    return 0;
}


// ============================================================

// Address: 0x4f34e4
// Original: _ZN28CTaskComplexHitByGunResponse9SerializeEv
// Demangled: CTaskComplexHitByGunResponse::Serialize(void)
void __fastcall CTaskComplexHitByGunResponse::Serialize(CTaskComplexHitByGunResponse *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexHitByGunResponse *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexHitByGunResponse *))(*(_DWORD *)this + 20))(this) == 231 )
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
    v7 = (*(int (__fastcall **)(CTaskComplexHitByGunResponse *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(231, v7);
  }
}


// ============================================================
