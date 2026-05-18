
// Address: 0x18b0a0
// Original: j__ZN23CTaskInteriorShopKeeperC2EP15InteriorGroup_ch
// Demangled: CTaskInteriorShopKeeper::CTaskInteriorShopKeeper(InteriorGroup_c *,uchar)
// attributes: thunk
void __fastcall CTaskInteriorShopKeeper::CTaskInteriorShopKeeper(
        CTaskInteriorShopKeeper *this,
        InteriorGroup_c *a2,
        unsigned __int8 a3)
{
  _ZN23CTaskInteriorShopKeeperC2EP15InteriorGroup_ch(this, a2, a3);
}


// ============================================================

// Address: 0x529334
// Original: _ZN23CTaskInteriorShopKeeperC2EP15InteriorGroup_ch
// Demangled: CTaskInteriorShopKeeper::CTaskInteriorShopKeeper(InteriorGroup_c *,uchar)
void __fastcall CTaskInteriorShopKeeper::CTaskInteriorShopKeeper(
        CTaskInteriorShopKeeper *this,
        InteriorGroup_c *a2,
        unsigned __int8 a3)
{
  int v5; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v5 + 16) = a2;
  *(_BYTE *)(v5 + 20) = a3;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = 0;
  *(_BYTE *)(v5 + 12) = 0;
  *(_DWORD *)v5 = &off_66C844;
}


// ============================================================

// Address: 0x52935c
// Original: _ZN23CTaskInteriorShopKeeperD2Ev
// Demangled: CTaskInteriorShopKeeper::~CTaskInteriorShopKeeper()
void __fastcall CTaskInteriorShopKeeper::~CTaskInteriorShopKeeper(CTaskInteriorShopKeeper *this)
{
  int v1; // r1

  v1 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66C844;
  if ( v1 )
    *(_BYTE *)(v1 + 1) = 0;
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x529378
// Original: _ZN23CTaskInteriorShopKeeperD0Ev
// Demangled: CTaskInteriorShopKeeper::~CTaskInteriorShopKeeper()
void __fastcall CTaskInteriorShopKeeper::~CTaskInteriorShopKeeper(CTaskInteriorShopKeeper *this)
{
  int v1; // r1
  void *v2; // r0

  v1 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66C844;
  if ( v1 )
    *(_BYTE *)(v1 + 1) = 0;
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v2);
}


// ============================================================

// Address: 0x5293a0
// Original: _ZNK23CTaskInteriorShopKeeper5CloneEv
// Demangled: CTaskInteriorShopKeeper::Clone(void)
int __fastcall CTaskInteriorShopKeeper::Clone(CTaskInteriorShopKeeper *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  char v4; // r5
  int v5; // r6
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *((_BYTE *)this + 20);
  v5 = *((_DWORD *)this + 4);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 16) = v5;
  *(_BYTE *)(result + 20) = v4;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)result = &off_66C844;
  *(_DWORD *)(result + 24) = *((_DWORD *)this + 6);
  *(_DWORD *)(result + 28) = *((_DWORD *)this + 7);
  return result;
}


// ============================================================

// Address: 0x5293e0
// Original: _ZN23CTaskInteriorShopKeeper17CreateNextSubTaskEP4CPed
// Demangled: CTaskInteriorShopKeeper::CreateNextSubTask(CPed *)
int __fastcall CTaskInteriorShopKeeper::CreateNextSubTask(CTaskInteriorShopKeeper *this, CPed *a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, (unsigned int)a2);
  v4 = *((_QWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 24) = 0;
  *(_DWORD *)result = &off_66C8BC;
  return result;
}


// ============================================================

// Address: 0x529410
// Original: _ZN23CTaskInteriorShopKeeper18CreateFirstSubTaskEP4CPed
// Demangled: CTaskInteriorShopKeeper::CreateFirstSubTask(CPed *)
int __fastcall CTaskInteriorShopKeeper::CreateFirstSubTask(CTaskInteriorShopKeeper *this, CPed *a2)
{
  int v3; // r0
  char v4; // r5
  CTaskComplex *v5; // r0
  int v6; // r4
  int v7; // r6
  __int64 v8; // kr00_8
  int result; // r0
  CTaskComplex *v10; // r0
  __int64 v11; // kr08_8

  v3 = *((_DWORD *)this + 6);
  if ( !v3 )
  {
    InteriorGroup_c::FindInteriorInfo();
    v3 = *((_DWORD *)this + 6);
  }
  v4 = 1;
  *(_BYTE *)(v3 + 1) = 1;
  if ( *((_BYTE *)this + 20) )
  {
    v5 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, (unsigned int)a2);
    v8 = *((_QWORD *)this + 3);
    v6 = *((_DWORD *)this + 7);
    v7 = v8;
    CTaskComplex::CTaskComplex(v5);
    v4 = 0;
  }
  else
  {
    *((_BYTE *)this + 20) = 1;
    v10 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, (unsigned int)a2);
    v11 = *((_QWORD *)this + 3);
    v6 = *((_DWORD *)this + 7);
    v7 = v11;
    CTaskComplex::CTaskComplex(v10);
  }
  *(_DWORD *)(result + 12) = v7;
  *(_DWORD *)(result + 16) = v6;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 24) = v4;
  *(_DWORD *)result = &off_66C8BC;
  return result;
}


// ============================================================

// Address: 0x529478
// Original: _ZN23CTaskInteriorShopKeeper14ControlSubTaskEP4CPed
// Demangled: CTaskInteriorShopKeeper::ControlSubTask(CPed *)
int __fastcall CTaskInteriorShopKeeper::ControlSubTask(CTaskInteriorShopKeeper *this, CPed *a2)
{
  unsigned int v2; // r1
  int v4; // r0

  v2 = *((unsigned __int8 *)this + 12);
  if ( !*((_BYTE *)this + 12) )
    return *((_DWORD *)this + 2);
  *((_BYTE *)this + 12) = 0;
  v4 = CTask::operator new((CTask *)&dword_20, v2);
  return CTaskSimpleRunAnim::CTaskSimpleRunAnim(v4, 86, 327, 1082130432, 0);
}


// ============================================================

// Address: 0x52afc2
// Original: _ZNK23CTaskInteriorShopKeeper11GetTaskTypeEv
// Demangled: CTaskInteriorShopKeeper::GetTaskType(void)
int __fastcall CTaskInteriorShopKeeper::GetTaskType(CTaskInteriorShopKeeper *this)
{
  return 1405;
}


// ============================================================
