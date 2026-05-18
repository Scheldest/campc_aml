
// Address: 0x1997a4
// Original: j__ZN23CTaskInteriorBeInOfficeC2EP15InteriorGroup_c
// Demangled: CTaskInteriorBeInOffice::CTaskInteriorBeInOffice(InteriorGroup_c *)
// attributes: thunk
void __fastcall CTaskInteriorBeInOffice::CTaskInteriorBeInOffice(CTaskInteriorBeInOffice *this, InteriorGroup_c *a2)
{
  _ZN23CTaskInteriorBeInOfficeC2EP15InteriorGroup_c(this, a2);
}


// ============================================================

// Address: 0x19da1c
// Original: j__ZN23CTaskInteriorBeInOffice18GetInfoForPedToUseEPi
// Demangled: CTaskInteriorBeInOffice::GetInfoForPedToUse(int *)
// attributes: thunk
int __fastcall CTaskInteriorBeInOffice::GetInfoForPedToUse(CTaskInteriorBeInOffice *this, int *a2)
{
  return _ZN23CTaskInteriorBeInOffice18GetInfoForPedToUseEPi(this, a2);
}


// ============================================================

// Address: 0x528e60
// Original: _ZN23CTaskInteriorBeInOfficeC2EP15InteriorGroup_c
// Demangled: CTaskInteriorBeInOffice::CTaskInteriorBeInOffice(InteriorGroup_c *)
void __fastcall CTaskInteriorBeInOffice::CTaskInteriorBeInOffice(CTaskInteriorBeInOffice *this, InteriorGroup_c *a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  v3[4] = 0;
  v3[5] = 0;
  *v3 = &off_66C7BC;
}


// ============================================================

// Address: 0x528e84
// Original: _ZN23CTaskInteriorBeInOfficeD2Ev
// Demangled: CTaskInteriorBeInOffice::~CTaskInteriorBeInOffice()
// attributes: thunk
void __fastcall CTaskInteriorBeInOffice::~CTaskInteriorBeInOffice(CTaskInteriorBeInOffice *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x528e88
// Original: _ZN23CTaskInteriorBeInOfficeD0Ev
// Demangled: CTaskInteriorBeInOffice::~CTaskInteriorBeInOffice()
void __fastcall CTaskInteriorBeInOffice::~CTaskInteriorBeInOffice(CTaskInteriorBeInOffice *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x528e98
// Original: _ZNK23CTaskInteriorBeInOffice5CloneEv
// Demangled: CTaskInteriorBeInOffice::Clone(void)
_DWORD *__fastcall CTaskInteriorBeInOffice::Clone(CTaskInteriorBeInOffice *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  result[3] = v4;
  result[4] = 0;
  result[5] = 0;
  *result = &off_66C7BC;
  return result;
}


// ============================================================

// Address: 0x528ec4
// Original: _ZN23CTaskInteriorBeInOffice17CreateNextSubTaskEP4CPed
// Demangled: CTaskInteriorBeInOffice::CreateNextSubTask(CPed *)
int __fastcall CTaskInteriorBeInOffice::CreateNextSubTask(CTaskInteriorBeInOffice *this, CPed *a2)
{
  unsigned int v3; // r1
  CTaskComplex *v4; // r0
  __int64 v5; // kr00_8
  int v6; // r6
  int result; // r0
  int v8[5]; // [sp+4h] [bp-14h] BYREF

  *((_DWORD *)a2 + 291) |= 0x80u;
  CTaskInteriorBeInOffice::GetInfoForPedToUse(this, v8);
  v4 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, v3);
  v5 = *((_QWORD *)this + 2);
  v6 = v8[0];
  CTaskComplex::CTaskComplex(v4);
  *(_DWORD *)result = &off_66C8BC;
  *(_DWORD *)(result + 12) = HIDWORD(v5);
  *(_DWORD *)(result + 16) = v5;
  *(_DWORD *)(result + 20) = v6;
  *(_BYTE *)(result + 24) = 0;
  return result;
}


// ============================================================

// Address: 0x528f14
// Original: _ZN23CTaskInteriorBeInOffice18GetInfoForPedToUseEPi
// Demangled: CTaskInteriorBeInOffice::GetInfoForPedToUse(int *)
int __fastcall CTaskInteriorBeInOffice::GetInfoForPedToUse(CTaskInteriorBeInOffice *this, int *a2)
{
  _BYTE *v3; // r0
  int *v4; // r6
  float v5; // s16
  int v6; // r0
  int result; // r0
  int v8; // r0

  v4 = (int *)((char *)this + 20);
  v3 = (_BYTE *)*((_DWORD *)this + 5);
  if ( v3 && *v3 == 6 )
  {
    InteriorGroup_c::FindInteriorInfo();
    v5 = 5000.0;
  }
  else
  {
    InteriorGroup_c::FindInteriorInfo();
    if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) > 20 )
    {
      v6 = -1;
      goto LABEL_8;
    }
    v5 = 25000.0;
  }
  v6 = (int)(float)(v5 * (float)((float)(unsigned __int16)rand() * 0.000015259)) + 5000;
LABEL_8:
  *a2 = v6;
  for ( result = *v4; !*v4; result = *v4 )
  {
    InteriorGroup_c::FindInteriorInfo();
    if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 20 )
      v8 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 25000.0) + 5000;
    else
      v8 = -1;
    *a2 = v8;
  }
  return result;
}


// ============================================================

// Address: 0x529040
// Original: _ZN23CTaskInteriorBeInOffice18CreateFirstSubTaskEP4CPed
// Demangled: CTaskInteriorBeInOffice::CreateFirstSubTask(CPed *)
int __fastcall CTaskInteriorBeInOffice::CreateFirstSubTask(CTaskInteriorBeInOffice *this, CPed *a2)
{
  unsigned int v3; // r1
  CTaskComplex *v4; // r0
  __int64 v5; // kr00_8
  int v6; // r6
  int result; // r0
  int v8[5]; // [sp+4h] [bp-14h] BYREF

  CTaskInteriorBeInOffice::GetInfoForPedToUse(this, v8);
  v4 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, v3);
  v5 = *((_QWORD *)this + 2);
  v6 = v8[0];
  CTaskComplex::CTaskComplex(v4);
  *(_DWORD *)result = &off_66C8BC;
  *(_DWORD *)(result + 12) = HIDWORD(v5);
  *(_DWORD *)(result + 16) = v5;
  *(_DWORD *)(result + 20) = v6;
  *(_BYTE *)(result + 24) = 1;
  return result;
}


// ============================================================

// Address: 0x529084
// Original: _ZN23CTaskInteriorBeInOffice14ControlSubTaskEP4CPed
// Demangled: CTaskInteriorBeInOffice::ControlSubTask(CPed *)
int __fastcall CTaskInteriorBeInOffice::ControlSubTask(CTaskInteriorBeInOffice *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x52afb2
// Original: _ZNK23CTaskInteriorBeInOffice11GetTaskTypeEv
// Demangled: CTaskInteriorBeInOffice::GetTaskType(void)
int __fastcall CTaskInteriorBeInOffice::GetTaskType(CTaskInteriorBeInOffice *this)
{
  return 1403;
}


// ============================================================
