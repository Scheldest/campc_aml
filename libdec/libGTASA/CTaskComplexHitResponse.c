
// Address: 0x1a1784
// Original: j__ZN23CTaskComplexHitResponseC2Ei
// Demangled: CTaskComplexHitResponse::CTaskComplexHitResponse(int)
// attributes: thunk
void __fastcall CTaskComplexHitResponse::CTaskComplexHitResponse(CTaskComplexHitResponse *this, int a2)
{
  _ZN23CTaskComplexHitResponseC2Ei(this, a2);
}


// ============================================================

// Address: 0x4ecec0
// Original: _ZN23CTaskComplexHitResponseC2Ei
// Demangled: CTaskComplexHitResponse::CTaskComplexHitResponse(int)
void __fastcall CTaskComplexHitResponse::CTaskComplexHitResponse(CTaskComplexHitResponse *this, int a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  *v3 = &off_66A04C;
}


// ============================================================

// Address: 0x4ecedc
// Original: _ZN23CTaskComplexHitResponseD2Ev
// Demangled: CTaskComplexHitResponse::~CTaskComplexHitResponse()
// attributes: thunk
void __fastcall CTaskComplexHitResponse::~CTaskComplexHitResponse(CTaskComplexHitResponse *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ecee0
// Original: _ZN23CTaskComplexHitResponseD0Ev
// Demangled: CTaskComplexHitResponse::~CTaskComplexHitResponse()
void __fastcall CTaskComplexHitResponse::~CTaskComplexHitResponse(CTaskComplexHitResponse *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ecef0
// Original: _ZN23CTaskComplexHitResponse17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexHitResponse::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexHitResponse::CreateNextSubTask(CTaskComplexHitResponse *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4ecef4
// Original: _ZN23CTaskComplexHitResponse18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexHitResponse::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexHitResponse::CreateFirstSubTask(CTaskComplexHitResponse *this, CPed *a2)
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
      result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v3, 0, 32, 1082130432, 404, (int)"HitFromFront", 0);
      v4 = &`vtable for'CTaskSimpleHitFromFront;
      goto LABEL_8;
    case 1:
      v7 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 0, 33, 1082130432, 405, (int)"HitFromLeft", 0);
      v4 = &`vtable for'CTaskSimpleHitFromLeft;
      goto LABEL_8;
    case 2:
      v5 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 34, 1082130432, 403, (int)"HitFromBack", 0);
      v4 = &`vtable for'CTaskSimpleHitFromBack;
      goto LABEL_8;
    case 3:
      v6 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v6, 0, 35, 1082130432, 406, (int)"HitFromRight", 0);
      v4 = &`vtable for'CTaskSimpleHitFromRight;
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

// Address: 0x4ecfd4
// Original: _ZN23CTaskComplexHitResponse14ControlSubTaskEP4CPed
// Demangled: CTaskComplexHitResponse::ControlSubTask(CPed *)
int __fastcall CTaskComplexHitResponse::ControlSubTask(CTaskComplexHitResponse *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f33e0
// Original: _ZNK23CTaskComplexHitResponse5CloneEv
// Demangled: CTaskComplexHitResponse::Clone(void)
_DWORD *__fastcall CTaskComplexHitResponse::Clone(CTaskComplexHitResponse *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  result[3] = v4;
  *result = &off_66A04C;
  return result;
}


// ============================================================

// Address: 0x4f3404
// Original: _ZNK23CTaskComplexHitResponse11GetTaskTypeEv
// Demangled: CTaskComplexHitResponse::GetTaskType(void)
int __fastcall CTaskComplexHitResponse::GetTaskType(CTaskComplexHitResponse *this)
{
  return 230;
}


// ============================================================

// Address: 0x4f3408
// Original: _ZN23CTaskComplexHitResponse9SerializeEv
// Demangled: CTaskComplexHitResponse::Serialize(void)
void __fastcall CTaskComplexHitResponse::Serialize(CTaskComplexHitResponse *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexHitResponse *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexHitResponse *))(*(_DWORD *)this + 20))(this) == 230 )
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
    v7 = (*(int (__fastcall **)(CTaskComplexHitResponse *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(230, v7);
  }
}


// ============================================================
