
// Address: 0x18d30c
// Original: j__ZN29CTaskComplexGoToPointAnyMeansC2EiRK7CVectorfi
// Demangled: CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(int,CVector const&,float,int)
// attributes: thunk
void __fastcall CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(
        CTaskComplexGoToPointAnyMeans *this,
        int a2,
        const CVector *a3,
        float a4,
        int a5)
{
  _ZN29CTaskComplexGoToPointAnyMeansC2EiRK7CVectorfi(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x195d3c
// Original: j__ZN29CTaskComplexGoToPointAnyMeans10CreateTaskEv
// Demangled: CTaskComplexGoToPointAnyMeans::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexGoToPointAnyMeans::CreateTask(CTaskComplexGoToPointAnyMeans *this)
{
  return _ZN29CTaskComplexGoToPointAnyMeans10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19cb3c
// Original: j__ZN29CTaskComplexGoToPointAnyMeansC2EiRK7CVectorP8CVehiclefi
// Demangled: CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(int,CVector const&,CVehicle *,float,int)
// attributes: thunk
void __fastcall CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(
        CTaskComplexGoToPointAnyMeans *this,
        int a2,
        const CVector *a3,
        CVehicle *a4,
        float a5,
        int a6)
{
  _ZN29CTaskComplexGoToPointAnyMeansC2EiRK7CVectorP8CVehiclefi(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x495a30
// Original: _ZN29CTaskComplexGoToPointAnyMeans10CreateTaskEv
// Demangled: CTaskComplexGoToPointAnyMeans::CreateTask(void)
void __fastcall CTaskComplexGoToPointAnyMeans::CreateTask(CTaskComplexGoToPointAnyMeans *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  int v10; // r2
  CVehicle *Vehicle; // r4
  char v12; // r5
  unsigned int v13; // r1
  CTaskComplexGoToPointAnyMeans *v14; // r0
  int v15; // [sp+Ch] [bp-2Ch] BYREF
  CPools *v16; // [sp+10h] [bp-28h] BYREF
  float v17; // [sp+14h] [bp-24h] BYREF
  int v18; // [sp+18h] [bp-20h] BYREF
  _BYTE v19[28]; // [sp+1Ch] [bp-1Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, &byte_9[3], a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, byte_4, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v17, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v17, byte_4, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v8);
  if ( v16 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v16, (int)v16 + 1);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v10);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v10);
  v14 = (CTaskComplexGoToPointAnyMeans *)CTask::operator new((CTask *)&dword_34, v13);
  if ( Vehicle )
    CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(v14, v18, (const CVector *)v19, Vehicle, v17, v15);
  else
    CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(v14, v18, (const CVector *)v19, v17, v15);
}


// ============================================================

// Address: 0x52477c
// Original: _ZN29CTaskComplexGoToPointAnyMeansC2EiRK7CVectorfi
// Demangled: CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(int,CVector const&,float,int)
void __fastcall CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(
        CTaskComplexGoToPointAnyMeans *this,
        int a2,
        const CVector *a3,
        float a4,
        int a5)
{
  int v8; // r0
  __int64 v9; // d16

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)v8 = &off_66C400;
  v9 = *(_QWORD *)a3;
  *(_DWORD *)(v8 + 20) = *((_DWORD *)a3 + 2);
  *(_DWORD *)(v8 + 24) = a2;
  *(float *)(v8 + 28) = a4;
  *(_DWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 36) = (unsigned int)a5;
  *(_DWORD *)(v8 + 44) = 0;
  *(_WORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 12) = v9;
}


// ============================================================

// Address: 0x5247c0
// Original: _ZN29CTaskComplexGoToPointAnyMeansC2EiRK7CVectorP8CVehiclefi
// Demangled: CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(int,CVector const&,CVehicle *,float,int)
void __fastcall CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(
        CTaskComplexGoToPointAnyMeans *this,
        int a2,
        const CVector *a3,
        CVehicle *a4,
        float a5,
        int a6)
{
  __int64 v10; // d16
  int v11; // r2

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66C400;
  v10 = *(_QWORD *)a3;
  v11 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)this + 5) = v11;
  *((_DWORD *)this + 6) = a2;
  *((float *)this + 7) = a5;
  *((_DWORD *)this + 9) = a6;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *(_QWORD *)((char *)this + 12) = v10;
  *((_WORD *)this + 24) = 0;
  if ( a4 )
    CEntity::RegisterReference(a4, (CEntity **)this + 8);
}


// ============================================================

// Address: 0x524820
// Original: _ZN29CTaskComplexGoToPointAnyMeansD2Ev
// Demangled: CTaskComplexGoToPointAnyMeans::~CTaskComplexGoToPointAnyMeans()
void __fastcall CTaskComplexGoToPointAnyMeans::~CTaskComplexGoToPointAnyMeans(CTaskComplexGoToPointAnyMeans *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 32);
  v2 = (CEntity *)*((_DWORD *)this + 8);
  *(_DWORD *)this = &off_66C400;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x52484c
// Original: _ZN29CTaskComplexGoToPointAnyMeansD0Ev
// Demangled: CTaskComplexGoToPointAnyMeans::~CTaskComplexGoToPointAnyMeans()
void __fastcall CTaskComplexGoToPointAnyMeans::~CTaskComplexGoToPointAnyMeans(CTaskComplexGoToPointAnyMeans *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 32);
  v2 = (CEntity *)*((_DWORD *)this + 8);
  *(_DWORD *)this = &off_66C400;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x52487c
// Original: _ZN29CTaskComplexGoToPointAnyMeans17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAnyMeans::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAnyMeans::CreateNextSubTask(CTaskComplexGoToPointAnyMeans *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  bool v6; // zf

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 >= 832 )
  {
    if ( v4 == 832 )
    {
      v5 = 710;
      if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
        v5 = 906;
      return CTaskComplexGoToPointAnyMeans::CreateSubTask(this, v5, a2);
    }
    if ( v4 == 903 || v4 == 906 )
    {
      v5 = 1302;
      return CTaskComplexGoToPointAnyMeans::CreateSubTask(this, v5, a2);
    }
    return 0;
  }
  if ( v4 == 701 )
  {
    v6 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
      v6 = *((_DWORD *)a2 + 356) == 0;
    if ( v6 )
      v5 = 906;
    else
      v5 = 710;
    return CTaskComplexGoToPointAnyMeans::CreateSubTask(this, v5, a2);
  }
  if ( v4 == 704 )
  {
    v5 = 903;
    return CTaskComplexGoToPointAnyMeans::CreateSubTask(this, v5, a2);
  }
  if ( v4 != 710 )
    return 0;
  v5 = 704;
  return CTaskComplexGoToPointAnyMeans::CreateSubTask(this, v5, a2);
}


// ============================================================

// Address: 0x524908
// Original: _ZNK29CTaskComplexGoToPointAnyMeans13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexGoToPointAnyMeans::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexGoToPointAnyMeans::CreateSubTask(CTaskComplexGoToPointAnyMeans *this, int a2, CPed *a3)
{
  int v5; // r4
  __int64 v6; // kr00_8
  char v7; // r0
  __int64 v8; // d16
  _DWORD *v9; // r0
  unsigned int v10; // r1
  int v11; // r0
  int v12; // r0
  const CVector *v13; // r1
  __int64 v14; // kr08_8
  char v15; // r1
  float v16; // s0
  __int64 v17; // d16

  v5 = 0;
  if ( a2 >= 832 )
  {
    switch ( a2 )
    {
      case 832:
        v5 = CTask::operator new((CTask *)&dword_34, 0x340u);
        v12 = *((_DWORD *)a3 + 5);
        v13 = (const CVector *)(v12 + 48);
        if ( !v12 )
          v13 = (CPed *)((char *)a3 + 4);
        CTaskSimpleCreateCarAndGetIn::CTaskSimpleCreateCarAndGetIn(
          (CTaskSimpleCreateCarAndGetIn *)v5,
          v13,
          *((_DWORD *)this + 9));
        break;
      case 903:
        v5 = CTask::operator new((CTask *)&word_28, 0x387u);
        v14 = *((_QWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v5);
        *(_DWORD *)(v5 + 12) = v14;
        v15 = *(_BYTE *)(v5 + 36);
        v16 = *(float *)(v5 + 16);
        *(_DWORD *)v5 = &off_66C14C;
        *(_BYTE *)(v5 + 36) = v15 & 0xE4;
        if ( v16 != *((float *)this + 3)
          || *(float *)(v5 + 20) != *((float *)this + 4)
          || *(float *)(v5 + 24) != *((float *)this + 5)
          || *(float *)(v5 + 32) != 2.0 )
        {
          v17 = *(_QWORD *)((char *)this + 12);
          *(_DWORD *)(v5 + 24) = *((_DWORD *)this + 5);
          *(_QWORD *)(v5 + 16) = v17;
          *(_DWORD *)(v5 + 28) = HIDWORD(v14);
          *(_DWORD *)(v5 + 32) = 0x40000000;
          *(_BYTE *)(v5 + 36) = v15 & 0xE0 | 4;
        }
        break;
      case 906:
        v5 = CTask::operator new((CTask *)&dword_60, 0x38Au);
        v6 = *((_QWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v5);
        *(_DWORD *)v5 = &off_66C278;
        v7 = *(_BYTE *)(v5 + 76);
        v8 = *(_QWORD *)((char *)this + 12);
        *(_DWORD *)(v5 + 20) = *((_DWORD *)this + 5);
        *(_QWORD *)(v5 + 24) = v6;
        *(_QWORD *)(v5 + 32) = 0x4000000040400000LL;
        *(_DWORD *)(v5 + 56) = 0;
        *(_DWORD *)(v5 + 60) = -1;
        *(_WORD *)(v5 + 40) = -1;
        *(_WORD *)(v5 + 52) = -1;
        *(_WORD *)(v5 + 72) = 0;
        *(_QWORD *)(v5 + 80) = 0LL;
        *(_QWORD *)(v5 + 88) = 0LL;
        *(_DWORD *)(v5 + 64) = 0;
        *(_DWORD *)(v5 + 68) = 0;
        *(_QWORD *)(v5 + 12) = v8;
        *(_BYTE *)(v5 + 76) = v7 & 0x96 | 8;
        v9 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v5 + 80);
        *v9 = 0;
        *(_DWORD *)(v5 + 48) = v9;
        v11 = CNodeRoute::operator new((CNodeRoute *)&dword_24, v10);
        *(_DWORD *)v11 = 0;
        *(_WORD *)(v11 + 4) = -1;
        *(_WORD *)(v11 + 8) = -1;
        *(_WORD *)(v11 + 12) = -1;
        *(_WORD *)(v11 + 16) = -1;
        *(_WORD *)(v11 + 20) = -1;
        *(_WORD *)(v11 + 24) = -1;
        *(_WORD *)(v11 + 28) = -1;
        *(_WORD *)(v11 + 32) = -1;
        *(_WORD *)(v5 + 52) = -1;
        *(_DWORD *)(v5 + 44) = v11;
        *(_DWORD *)(v5 + 40) = EmptyNodeAddress;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 701:
        v5 = CTask::operator new((CTask *)&dword_50, 0x2BDu);
        CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(
          (CTaskComplexEnterCarAsDriver *)v5,
          *((CVehicle **)this + 8));
        break;
      case 704:
        v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, *((CVehicle **)a3 + 356), 0, 0, 1, 0);
        break;
      case 710:
        v5 = CTask::operator new((CTask *)&off_3C, 0x2C6u);
        CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(
          (CTaskComplexDriveToPoint *)v5,
          *((CVehicle **)this + 8),
          (CTaskComplexGoToPointAnyMeans *)((char *)this + 12),
          -1.0,
          0,
          -1,
          -1.0,
          0);
        break;
    }
  }
  return v5;
}


// ============================================================

// Address: 0x524b0c
// Original: _ZN29CTaskComplexGoToPointAnyMeans18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAnyMeans::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAnyMeans::CreateFirstSubTask(CTaskComplexGoToPointAnyMeans *this, CPed *a2)
{
  int v4; // r1
  CVehicle *v5; // r0
  int v6; // r1
  bool v7; // zf

  v4 = *((_DWORD *)this + 8);
  v5 = (CVehicle *)*((_DWORD *)a2 + 356);
  if ( v4 )
  {
    if ( v5 )
    {
      v6 = 710;
      if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
        v6 = 701;
    }
    else
    {
      v6 = 701;
    }
  }
  else
  {
    v7 = v5 == 0;
    if ( v5 )
      v7 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
    if ( v7 || !CVehicle::IsDriver(v5, a2) )
      v6 = 906;
    else
      v6 = 710;
  }
  return CTaskComplexGoToPointAnyMeans::CreateSubTask(this, v6, a2);
}


// ============================================================

// Address: 0x524b60
// Original: _ZN29CTaskComplexGoToPointAnyMeans14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAnyMeans::ControlSubTask(CPed *)
CTaskComplexEnterCarAsDriver *__fastcall CTaskComplexGoToPointAnyMeans::ControlSubTask(
        CTaskComplexEnterCarAsDriver **this,
        CPed *a2)
{
  CTaskComplexGoToPointAnyMeans *v2; // r5
  CTaskComplexEnterCarAsDriver *v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r1
  int v8; // r0
  char *v9; // r1
  float32x2_t v10; // d16
  unsigned __int64 v11; // d1
  const CPed *v12; // r2
  CCarEnterExit *ClosestVehicleInRange; // r8
  bool v14; // zf
  CCarEnterExit *v15; // t1
  unsigned int v16; // r1
  int v17; // r0
  const CVector *v18; // r1

  v2 = (CTaskComplexGoToPointAnyMeans *)this;
  v4 = this[2];
  if ( (*(int (__fastcall **)(CTaskComplexEnterCarAsDriver *))(*(_DWORD *)v4 + 20))(v4) != 906 )
    return v4;
  if ( *((_DWORD *)v2 + 9) == -1 )
  {
    if ( !*((_BYTE *)v2 + 48) )
    {
LABEL_10:
      v8 = *((_DWORD *)a2 + 5);
      v9 = (char *)(v8 + 48);
      if ( !v8 )
        v9 = (char *)a2 + 4;
      v10.n64_u64[0] = vsub_f32(*(float32x2_t *)(v9 + 4), *((float32x2_t *)v2 + 2)).n64_u64[0];
      v11 = vmul_f32(v10, v10).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v9 - *((float *)v2 + 3))
                                 * (float)(*(float *)v9 - *((float *)v2 + 3)))
                         + *(float *)&v11)
                 + *((float *)&v11 + 1)) > 2500.0 )
      {
        ClosestVehicleInRange = (CCarEnterExit *)CVehicleScanner::GetClosestVehicleInRange((CVehicleScanner *)(*((_DWORD *)a2 + 272) + 212));
        v14 = ClosestVehicleInRange == 0;
        if ( ClosestVehicleInRange )
        {
          v15 = (CCarEnterExit *)*((_DWORD *)v2 + 8);
          v2 = (CTaskComplexGoToPointAnyMeans *)((char *)v2 + 32);
          v14 = ClosestVehicleInRange == v15;
        }
        if ( !v14 && CCarEnterExit::IsVehicleStealable(ClosestVehicleInRange, a2, v12) == 1 )
        {
          *(_DWORD *)v2 = ClosestVehicleInRange;
          v4 = (CTaskComplexEnterCarAsDriver *)CTask::operator new((CTask *)&dword_50, v16);
          CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(v4, *(CVehicle **)v2);
          CEntity::RegisterReference(*(CEntity **)v2, (CEntity **)v2);
        }
      }
      return v4;
    }
  }
  else if ( !*((_BYTE *)v2 + 48) )
  {
    *((_QWORD *)v2 + 5) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xBB800000000LL;
    *((_BYTE *)v2 + 48) = 1;
  }
  if ( *((_BYTE *)v2 + 49) )
  {
    v5 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)v2 + 49) = 0;
    *((_DWORD *)v2 + 10) = v5;
    v6 = v5;
  }
  else
  {
    v6 = *((_DWORD *)v2 + 10);
    v5 = CTimer::m_snTimeInMilliseconds;
  }
  v7 = v6 + *((_DWORD *)v2 + 11);
  if ( v7 > v5 )
    goto LABEL_10;
  v4 = (CTaskComplexEnterCarAsDriver *)CTask::operator new((CTask *)&dword_34, v7);
  v17 = *((_DWORD *)a2 + 5);
  v18 = (const CVector *)(v17 + 48);
  if ( !v17 )
    v18 = (CPed *)((char *)a2 + 4);
  CTaskSimpleCreateCarAndGetIn::CTaskSimpleCreateCarAndGetIn(v4, v18, *((_DWORD *)v2 + 9));
  *((_QWORD *)v2 + 5) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xBB800000000LL;
  *((_BYTE *)v2 + 48) = 1;
  return v4;
}


// ============================================================

// Address: 0x528184
// Original: _ZNK29CTaskComplexGoToPointAnyMeans5CloneEv
// Demangled: CTaskComplexGoToPointAnyMeans::Clone(void)
CTaskComplex *__fastcall CTaskComplexGoToPointAnyMeans::Clone(CTaskComplexGoToPointAnyMeans *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // r8
  CTaskComplex *v5; // r4
  __int64 v6; // kr00_8
  __int64 v7; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_34, a2);
  v4 = *((_QWORD *)this + 3);
  v5 = v3;
  v6 = *((_QWORD *)this + 4);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)v5 = &off_66C400;
  v7 = *(_QWORD *)((char *)this + 12);
  *((_DWORD *)v5 + 5) = *((_DWORD *)this + 5);
  *((_QWORD *)v5 + 3) = v4;
  *((_DWORD *)v5 + 9) = HIDWORD(v6);
  *((_DWORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 11) = 0;
  *((_WORD *)v5 + 24) = 0;
  *(_QWORD *)((char *)v5 + 12) = v7;
  *((_DWORD *)v5 + 8) = v6;
  if ( (_DWORD)v6 )
    CEntity::RegisterReference((CEntity *)v6, (CEntity **)v5 + 8);
  return v5;
}


// ============================================================

// Address: 0x5281e8
// Original: _ZNK29CTaskComplexGoToPointAnyMeans11GetTaskTypeEv
// Demangled: CTaskComplexGoToPointAnyMeans::GetTaskType(void)
int __fastcall CTaskComplexGoToPointAnyMeans::GetTaskType(CTaskComplexGoToPointAnyMeans *this)
{
  return 918;
}


// ============================================================

// Address: 0x5281f0
// Original: _ZN29CTaskComplexGoToPointAnyMeans9SerializeEv
// Demangled: CTaskComplexGoToPointAnyMeans::Serialize(void)
void __fastcall CTaskComplexGoToPointAnyMeans::Serialize(CTaskComplexGoToPointAnyMeans *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  __int64 v6; // d16
  int v7; // r2
  CGenericGameStorage *v8; // r5
  int v9; // r2
  CGenericGameStorage *v10; // r5
  int v11; // r2
  int v12; // r5
  CGenericGameStorage *v13; // r6
  int v14; // r2
  CGenericGameStorage *v15; // r5
  int v16; // r2
  int v17; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexGoToPointAnyMeans *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexGoToPointAnyMeans *))(*(_DWORD *)this + 20))(this) == 918 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(0xCu);
    v6 = *(_QWORD *)((char *)this + 12);
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 5);
    *(_QWORD *)v5 = v6;
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, &byte_9[3], v7);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v8 = *((_DWORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    free(v10);
    v12 = GettPoolVehicleRef(*((CVehicle **)this + 8));
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = v12;
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    free(v13);
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v15 = *((_DWORD *)this + 9);
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
    j_free(v15);
  }
  else
  {
    v17 = (*(int (__fastcall **)(CTaskComplexGoToPointAnyMeans *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(918, v17);
  }
}


// ============================================================
