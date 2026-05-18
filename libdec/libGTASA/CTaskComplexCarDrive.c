
// Address: 0x19b4cc
// Original: j__ZN20CTaskComplexCarDriveC2EP8CVehiclefii
// Demangled: CTaskComplexCarDrive::CTaskComplexCarDrive(CVehicle *,float,int,int)
// attributes: thunk
void __fastcall CTaskComplexCarDrive::CTaskComplexCarDrive(
        CTaskComplexCarDrive *this,
        CVehicle *a2,
        float a3,
        int a4,
        int a5)
{
  _ZN20CTaskComplexCarDriveC2EP8CVehiclefii(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19c7f4
// Original: j__ZN20CTaskComplexCarDrive10CreateTaskEv
// Demangled: CTaskComplexCarDrive::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexCarDrive::CreateTask(CTaskComplexCarDrive *this)
{
  return _ZN20CTaskComplexCarDrive10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1a03c0
// Original: j__ZNK20CTaskComplexCarDrive13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexCarDrive::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexCarDrive::CreateSubTask(CTaskComplexCarDrive *this, int a2, CPed *a3)
{
  return _ZNK20CTaskComplexCarDrive13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x1a0664
// Original: j__ZN20CTaskComplexCarDriveC2EP8CVehicle
// Demangled: CTaskComplexCarDrive::CTaskComplexCarDrive(CVehicle *)
// attributes: thunk
void __fastcall CTaskComplexCarDrive::CTaskComplexCarDrive(CTaskComplexCarDrive *this, CVehicle *a2)
{
  _ZN20CTaskComplexCarDriveC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x493e80
// Original: _ZN20CTaskComplexCarDrive10CreateTaskEv
// Demangled: CTaskComplexCarDrive::CreateTask(void)
void __fastcall CTaskComplexCarDrive::CreateTask(CTaskComplexCarDrive *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int v9; // r2
  char v10; // r5
  unsigned int v11; // r1
  CTaskComplexCarDrive *v12; // r0
  int v13; // [sp+8h] [bp-20h] BYREF
  int v14; // [sp+Ch] [bp-1Ch] BYREF
  float v15; // [sp+10h] [bp-18h] BYREF
  CPools *v16[5]; // [sp+14h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, byte_4, a3);
  if ( v16[0] == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v16[0], (int)v16[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, byte_4, v9);
  v12 = (CTaskComplexCarDrive *)CTask::operator new((CTask *)&dword_24, v11);
  CTaskComplexCarDrive::CTaskComplexCarDrive(v12, Vehicle, v15, v14, v13);
}


// ============================================================

// Address: 0x4fb618
// Original: _ZN20CTaskComplexCarDriveC2EP8CVehiclefii
// Demangled: CTaskComplexCarDrive::CTaskComplexCarDrive(CVehicle *,float,int,int)
void __fastcall CTaskComplexCarDrive::CTaskComplexCarDrive(
        CTaskComplexCarDrive *this,
        CVehicle *a2,
        float a3,
        int a4,
        int a5)
{
  CTaskComplex::CTaskComplex(this);
  *((float *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = a5;
  *((_BYTE *)this + 28) = 1;
  *((_BYTE *)this + 32) = 0;
  *(_DWORD *)this = &off_66AD4C;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4fb66c
// Original: _ZN20CTaskComplexCarDriveC2EP8CVehicle
// Demangled: CTaskComplexCarDrive::CTaskComplexCarDrive(CVehicle *)
void __fastcall CTaskComplexCarDrive::CTaskComplexCarDrive(CTaskComplexCarDrive *this, CVehicle *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 28) = 1;
  *((_BYTE *)this + 32) = 0;
  *(_DWORD *)this = &off_66AD4C;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4fb708
// Original: _ZN20CTaskComplexCarDriveD0Ev
// Demangled: CTaskComplexCarDrive::~CTaskComplexCarDrive()
void __fastcall CTaskComplexCarDrive::~CTaskComplexCarDrive(CTaskComplexCarDrive *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AD4C;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      *((_BYTE *)v2 + 957) = *((_BYTE *)this + 29);
      *(_BYTE *)(*((_DWORD *)this + 3) + 958) = *((_BYTE *)this + 30);
      *(_BYTE *)(*((_DWORD *)this + 3) + 980) = *((_BYTE *)this + 31);
      v4 = (CEntity *)*((_DWORD *)this + 3);
      if ( v4 )
        CEntity::CleanUpOldReference(v4, v3);
    }
    else
    {
      CEntity::CleanUpOldReference(v2, v3);
    }
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4fb760
// Original: _ZN20CTaskComplexCarDrive17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexCarDrive::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexCarDrive::CreateNextSubTask(CTaskComplexCarDrive *this, CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r4
  unsigned int v7; // r1
  CEntity *v8; // r5
  char v9; // r0
  char v10; // r0
  CEntity *v11; // r0
  bool v12; // zf
  bool v13; // zf
  int (__fastcall *v14)(CTaskComplexCarDrive *, CPed *); // r2
  int v15; // r6
  CEntity *v16; // r5
  char v17; // r2
  CEntity **v18; // r1
  char v19; // r0
  _DWORD *v20; // r0
  bool v21; // zf
  int v22; // r0
  const CVector *v23; // r1
  unsigned int v25; // r1
  CEntity *v26; // r5
  unsigned int v27; // r1
  char v28; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = v4 - 700;
  v6 = 0;
  switch ( v4 )
  {
    case 700:
      if ( !(*((unsigned __int8 *)a2 + 1157) << 31) || !*((_DWORD *)a2 + 356) )
        return 0;
      (*(void (__fastcall **)(CTaskComplexCarDrive *))(*(_DWORD *)this + 52))(this);
      v6 = CTask::operator new((CTask *)&dword_60, v7);
      v8 = (CEntity *)*((_DWORD *)this + 3);
      CTaskSimple::CTaskSimple((CTaskSimple *)v6);
      *(_QWORD *)(v6 + 12) = 0LL;
      *(_QWORD *)(v6 + 20) = 0LL;
      *(_DWORD *)v6 = &off_66AD18;
      *(_WORD *)(v6 + 28) = 0;
      *(_DWORD *)(v6 + 86) = 0;
      *(_DWORD *)(v6 + 82) = 0;
      v9 = *(_BYTE *)(v6 + 92);
      *(_DWORD *)(v6 + 76) = 0;
      *(_DWORD *)(v6 + 80) = 0;
      v10 = v9 & 0xC3 | 8;
      *(_BYTE *)(v6 + 92) = v10;
      *(_DWORD *)(v6 + 8) = v8;
      if ( v8 )
      {
        CEntity::RegisterReference(v8, (CEntity **)(v6 + 8));
        v10 = *(_BYTE *)(v6 + 92);
      }
      goto LABEL_6;
    case 701:
      v13 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
        v13 = *((_DWORD *)a2 + 356) == 0;
      if ( v13 )
        goto LABEL_34;
      (*(void (__fastcall **)(CTaskComplexCarDrive *))(*(_DWORD *)this + 52))(this);
      v6 = CTask::operator new((CTask *)&dword_60, v25);
      v26 = (CEntity *)*((_DWORD *)this + 3);
      CTaskSimple::CTaskSimple((CTaskSimple *)v6);
      goto LABEL_39;
    case 702:
    case 703:
    case 704:
    case 705:
    case 706:
    case 707:
    case 708:
    case 710:
    case 711:
    case 712:
    case 713:
    case 715:
    case 716:
      return v6;
    case 709:
      v14 = *(int (__fastcall **)(CTaskComplexCarDrive *, CPed *))(*(_DWORD *)this + 44);
      return v14(this, a2);
    case 714:
      v15 = *((unsigned __int8 *)this + 28);
      if ( *((_DWORD *)this + 3) )
      {
        v6 = CTask::operator new((CTask *)&dword_50, v5);
        v16 = (CEntity *)*((_DWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v6);
        v17 = *(_BYTE *)(v6 + 16);
        *(_DWORD *)v6 = &off_66A904;
        *(_DWORD *)(v6 + 12) = v16;
        v18 = (CEntity **)(v6 + 12);
        v19 = v17 & 0xF0;
        if ( v15 )
        {
          *(_BYTE *)(v6 + 16) = v19 | 1;
          *(_DWORD *)(v6 + 36) = 6;
          *(_WORD *)(v6 + 40) = 0;
          *(_DWORD *)(v6 + 56) = 0;
          *(_BYTE *)(v6 + 60) = 0;
          *(_DWORD *)(v6 + 64) = 0;
          *(_BYTE *)(v6 + 68) = 0;
          *(_DWORD *)(v6 + 72) = -1082130432;
          *(_QWORD *)(v6 + 20) = 0LL;
          *(_QWORD *)(v6 + 28) = 0LL;
          if ( v16 )
            CEntity::RegisterReference(v16, v18);
          v20 = &`vtable for'CTaskComplexEnterCarAsDriver;
        }
        else
        {
          *(_BYTE *)(v6 + 16) = v19;
          *(_DWORD *)(v6 + 36) = 6;
          *(_WORD *)(v6 + 40) = 0;
          *(_DWORD *)(v6 + 56) = 0;
          *(_BYTE *)(v6 + 60) = 0;
          *(_DWORD *)(v6 + 64) = 0;
          *(_BYTE *)(v6 + 68) = 0;
          *(_DWORD *)(v6 + 72) = -1082130432;
          *(_QWORD *)(v6 + 20) = 0LL;
          *(_QWORD *)(v6 + 28) = 0LL;
          if ( v16 )
            CEntity::RegisterReference(v16, v18);
          *(_DWORD *)(v6 + 28) = 0;
          v20 = &`vtable for'CTaskComplexEnterCarAsPassenger;
        }
      }
      else
      {
        if ( !*((_BYTE *)this + 28) )
          return 0;
LABEL_34:
        v6 = CTask::operator new((CTask *)&byte_9[3], v5);
        CTaskComplex::CTaskComplex((CTaskComplex *)v6);
        v20 = &`vtable for'CTaskComplexEnterAnyCarAsDriver;
      }
      *(_DWORD *)v6 = *v20 + 8;
      return v6;
    case 717:
      v11 = (CEntity *)(*((unsigned __int8 *)a2 + 1157) << 31);
      v21 = v11 == 0;
      if ( v11 )
      {
        v11 = (CEntity *)*((_DWORD *)a2 + 356);
        v21 = v11 == 0;
      }
      if ( !v21 )
      {
        if ( *((_DWORD *)this + 3) )
        {
          CEntity::CleanUpOldReference(*((CEntity **)this + 3), (CEntity **)this + 3);
          v11 = (CEntity *)*((_DWORD *)a2 + 356);
        }
LABEL_38:
        *((_DWORD *)this + 3) = v11;
        CEntity::RegisterReference(v11, (CEntity **)this + 3);
        (*(void (__fastcall **)(CTaskComplexCarDrive *))(*(_DWORD *)this + 52))(this);
        v6 = CTask::operator new((CTask *)&dword_60, v27);
        v26 = (CEntity *)*((_DWORD *)this + 3);
        CTaskSimple::CTaskSimple((CTaskSimple *)v6);
LABEL_39:
        *(_QWORD *)(v6 + 12) = 0LL;
        *(_QWORD *)(v6 + 20) = 0LL;
        *(_DWORD *)v6 = &off_66AD18;
        *(_WORD *)(v6 + 28) = 0;
        *(_DWORD *)(v6 + 86) = 0;
        *(_DWORD *)(v6 + 82) = 0;
        v28 = *(_BYTE *)(v6 + 92);
        *(_DWORD *)(v6 + 76) = 0;
        v10 = v28 & 0xC3 | 8;
        *(_DWORD *)(v6 + 80) = 0;
        *(_BYTE *)(v6 + 92) = v10;
        *(_DWORD *)(v6 + 8) = v26;
        if ( v26 )
        {
          CEntity::RegisterReference(v26, (CEntity **)(v6 + 8));
          v10 = *(_BYTE *)(v6 + 92);
        }
LABEL_6:
        *(_DWORD *)(v6 + 32) = -1;
        *(_BYTE *)(v6 + 92) = v10 & 0xFC;
        *(_DWORD *)(v6 + 60) = 0;
        *(_DWORD *)(v6 + 64) = 0;
        *(_DWORD *)(v6 + 68) = 0;
        return v6;
      }
      if ( *((int *)this + 5) >= 0 )
      {
        v6 = CTask::operator new((CTask *)&dword_34, v5);
        v22 = *((_DWORD *)a2 + 5);
        v23 = (const CVector *)(v22 + 48);
        if ( !v22 )
          v23 = (CPed *)((char *)a2 + 4);
        CTaskSimpleCreateCarAndGetIn::CTaskSimpleCreateCarAndGetIn(
          (CTaskSimpleCreateCarAndGetIn *)v6,
          v23,
          *((_DWORD *)this + 5));
        return v6;
      }
LABEL_31:
      v14 = *(int (__fastcall **)(CTaskComplexCarDrive *, CPed *))(*(_DWORD *)this + 56);
      return v14(this, a2);
    default:
      if ( v4 != 832 )
        return v6;
      v11 = (CEntity *)*((_DWORD *)a2 + 356);
      v12 = v11 == 0;
      if ( v11 )
        v12 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( !v12 )
        goto LABEL_38;
      goto LABEL_31;
  }
}


// ============================================================

// Address: 0x4fba88
// Original: _ZNK20CTaskComplexCarDrive13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexCarDrive::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexCarDrive::CreateSubTask(CTaskComplexCarDrive *this, unsigned int a2, CPed *a3)
{
  int WanderTaskByPedType; // r4
  CEntity *v6; // r5
  char v7; // r1
  _DWORD *v8; // r0
  CEntity *v9; // r5
  char v10; // r2
  unsigned int v11; // r1
  CEntity *v12; // r5
  char v13; // r0
  char v14; // r0
  int v16; // r0
  const CVector *v17; // r1

  WanderTaskByPedType = 0;
  switch ( a2 )
  {
    case 0x2BCu:
      WanderTaskByPedType = CTask::operator new((CTask *)&dword_50, a2);
      v6 = (CEntity *)*((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex((CTaskComplex *)WanderTaskByPedType);
      *(_QWORD *)(WanderTaskByPedType + 20) = 0LL;
      *(_QWORD *)(WanderTaskByPedType + 28) = 0LL;
      *(_DWORD *)(WanderTaskByPedType + 36) = 6;
      *(_WORD *)(WanderTaskByPedType + 40) = 0;
      *(_DWORD *)(WanderTaskByPedType + 56) = 0;
      *(_BYTE *)(WanderTaskByPedType + 60) = 0;
      *(_DWORD *)(WanderTaskByPedType + 64) = 0;
      *(_BYTE *)(WanderTaskByPedType + 68) = 0;
      *(_DWORD *)(WanderTaskByPedType + 72) = -1082130432;
      v7 = *(_BYTE *)(WanderTaskByPedType + 16);
      *(_DWORD *)WanderTaskByPedType = &off_66A904;
      *(_BYTE *)(WanderTaskByPedType + 16) = v7 & 0xF0;
      *(_DWORD *)(WanderTaskByPedType + 12) = v6;
      if ( v6 )
        CEntity::RegisterReference(v6, (CEntity **)(WanderTaskByPedType + 12));
      *(_DWORD *)(WanderTaskByPedType + 28) = 0;
      v8 = &`vtable for'CTaskComplexEnterCarAsPassenger;
      goto LABEL_16;
    case 0x2BDu:
      WanderTaskByPedType = CTask::operator new((CTask *)&dword_50, a2);
      v9 = (CEntity *)*((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex((CTaskComplex *)WanderTaskByPedType);
      *(_QWORD *)(WanderTaskByPedType + 20) = 0LL;
      *(_QWORD *)(WanderTaskByPedType + 28) = 0LL;
      *(_DWORD *)(WanderTaskByPedType + 36) = 6;
      *(_WORD *)(WanderTaskByPedType + 40) = 0;
      *(_DWORD *)(WanderTaskByPedType + 56) = 0;
      *(_BYTE *)(WanderTaskByPedType + 60) = 0;
      *(_DWORD *)(WanderTaskByPedType + 64) = 0;
      *(_BYTE *)(WanderTaskByPedType + 68) = 0;
      v10 = *(_BYTE *)(WanderTaskByPedType + 16);
      *(_DWORD *)(WanderTaskByPedType + 72) = -1082130432;
      *(_DWORD *)WanderTaskByPedType = &off_66A904;
      *(_BYTE *)(WanderTaskByPedType + 16) = v10 & 0xF0 | 1;
      *(_DWORD *)(WanderTaskByPedType + 12) = v9;
      if ( v9 )
        CEntity::RegisterReference(v9, (CEntity **)(WanderTaskByPedType + 12));
      v8 = &`vtable for'CTaskComplexEnterCarAsDriver;
      goto LABEL_16;
    case 0x2BEu:
    case 0x2BFu:
    case 0x2C0u:
    case 0x2C1u:
    case 0x2C2u:
    case 0x2C3u:
    case 0x2C4u:
    case 0x2C6u:
    case 0x2C7u:
    case 0x2C8u:
    case 0x2C9u:
    case 0x2CBu:
    case 0x2CCu:
      return WanderTaskByPedType;
    case 0x2C5u:
      (*(void (__fastcall **)(CTaskComplexCarDrive *))(*(_DWORD *)this + 52))(this);
      WanderTaskByPedType = CTask::operator new((CTask *)&dword_60, v11);
      v12 = (CEntity *)*((_DWORD *)this + 3);
      CTaskSimple::CTaskSimple((CTaskSimple *)WanderTaskByPedType);
      *(_QWORD *)(WanderTaskByPedType + 12) = 0LL;
      *(_QWORD *)(WanderTaskByPedType + 20) = 0LL;
      *(_DWORD *)WanderTaskByPedType = &off_66AD18;
      *(_WORD *)(WanderTaskByPedType + 28) = 0;
      *(_DWORD *)(WanderTaskByPedType + 86) = 0;
      *(_DWORD *)(WanderTaskByPedType + 82) = 0;
      v13 = *(_BYTE *)(WanderTaskByPedType + 92);
      *(_DWORD *)(WanderTaskByPedType + 76) = 0;
      *(_DWORD *)(WanderTaskByPedType + 80) = 0;
      v14 = v13 & 0xC3 | 8;
      *(_BYTE *)(WanderTaskByPedType + 92) = v14;
      *(_DWORD *)(WanderTaskByPedType + 8) = v12;
      if ( v12 )
      {
        CEntity::RegisterReference(v12, (CEntity **)(WanderTaskByPedType + 8));
        v14 = *(_BYTE *)(WanderTaskByPedType + 92);
      }
      *(_DWORD *)(WanderTaskByPedType + 32) = -1;
      *(_BYTE *)(WanderTaskByPedType + 92) = v14 & 0xFC;
      *(_DWORD *)(WanderTaskByPedType + 60) = 0;
      *(_DWORD *)(WanderTaskByPedType + 64) = 0;
      *(_DWORD *)(WanderTaskByPedType + 68) = 0;
      return WanderTaskByPedType;
    case 0x2CAu:
      WanderTaskByPedType = CTask::operator new((CTask *)&dword_14, a2);
      CTaskComplex::CTaskComplex((CTaskComplex *)WanderTaskByPedType);
      *(_DWORD *)(WanderTaskByPedType + 12) = 0;
      v8 = &`vtable for'CTaskComplexLeaveAnyCar;
      *(_WORD *)(WanderTaskByPedType + 16) = 1;
      goto LABEL_16;
    case 0x2CDu:
      WanderTaskByPedType = CTask::operator new((CTask *)&byte_9[3], a2);
      CTaskComplex::CTaskComplex((CTaskComplex *)WanderTaskByPedType);
      v8 = &`vtable for'CTaskComplexEnterAnyCarAsDriver;
LABEL_16:
      *(_DWORD *)WanderTaskByPedType = *v8 + 8;
      break;
    default:
      if ( a2 == 832 )
      {
        WanderTaskByPedType = CTask::operator new((CTask *)&dword_34, 0x340u);
        v16 = *((_DWORD *)a3 + 5);
        v17 = (const CVector *)(v16 + 48);
        if ( !v16 )
          v17 = (CPed *)((char *)a3 + 4);
        CTaskSimpleCreateCarAndGetIn::CTaskSimpleCreateCarAndGetIn(
          (CTaskSimpleCreateCarAndGetIn *)WanderTaskByPedType,
          v17,
          *((_DWORD *)this + 5));
      }
      else if ( a2 == 912 )
      {
        WanderTaskByPedType = CTaskComplexWander::GetWanderTaskByPedType(a3, (const CPed *)&elf_hash_bucket[165]);
      }
      break;
  }
  return WanderTaskByPedType;
}


// ============================================================

// Address: 0x4fbc88
// Original: _ZN20CTaskComplexCarDrive18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexCarDrive::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexCarDrive::CreateFirstSubTask(CEntity **this, CPed *a2)
{
  CEntity *v5; // r0
  const CVehicle *v6; // r1
  CEntity **v7; // r2
  CEntity *v8; // t1
  bool v9; // zf
  int v10; // r6
  int v11; // r4
  CEntity *v12; // r5
  char v13; // r2
  CEntity **v14; // r1
  char v15; // r0
  _DWORD *v16; // r0
  bool v17; // zf
  int v18; // r1
  unsigned int v19; // r1
  CEntity *v20; // r5
  unsigned int v21; // r1
  char v22; // r0
  char v23; // r0
  int v25; // [sp+0h] [bp-40h] BYREF

  v5 = (CEntity *)*((_DWORD *)a2 + 356);
  v8 = this[3];
  v7 = this + 3;
  v6 = v8;
  if ( v8 )
  {
    v9 = v5 == 0;
    if ( v5 )
      v9 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
    if ( !v9 )
    {
      if ( v5 != v6 )
      {
        v11 = CTask::operator new((CTask *)&dword_14, (unsigned int)v6);
        CTaskComplex::CTaskComplex((CTaskComplex *)v11);
        *(_DWORD *)(v11 + 12) = 0;
        v16 = &`vtable for'CTaskComplexLeaveAnyCar;
        *(_WORD *)(v11 + 16) = 1;
        goto LABEL_30;
      }
      (*((void (__fastcall **)(CEntity **))*this + 13))(this);
      v11 = CTask::operator new((CTask *)&dword_60, v21);
      v20 = this[3];
      CTaskSimple::CTaskSimple((CTaskSimple *)v11);
      goto LABEL_24;
    }
    if ( *((_DWORD *)v6 + 360) == 9 )
    {
      v10 = *((unsigned __int8 *)this + 28);
      v11 = CTask::operator new((CTask *)&dword_50, (unsigned int)v6);
      v12 = this[3];
      CTaskComplex::CTaskComplex((CTaskComplex *)v11);
      v13 = *(_BYTE *)(v11 + 16);
      *(_DWORD *)v11 = &off_66A904;
      *(_DWORD *)(v11 + 12) = v12;
      v14 = (CEntity **)(v11 + 12);
      v15 = v13 & 0xF0;
      if ( v10 )
      {
        *(_BYTE *)(v11 + 16) = v15 | 1;
        *(_DWORD *)(v11 + 36) = 6;
        *(_WORD *)(v11 + 40) = 0;
        *(_DWORD *)(v11 + 56) = 0;
        *(_BYTE *)(v11 + 60) = 0;
        *(_DWORD *)(v11 + 64) = 0;
        *(_BYTE *)(v11 + 68) = 0;
        *(_DWORD *)(v11 + 72) = -1082130432;
        *(_QWORD *)(v11 + 20) = 0LL;
        *(_QWORD *)(v11 + 28) = 0LL;
        if ( v12 )
          CEntity::RegisterReference(v12, v14);
        v16 = &`vtable for'CTaskComplexEnterCarAsDriver;
      }
      else
      {
        *(_BYTE *)(v11 + 16) = v15;
        *(_DWORD *)(v11 + 36) = 6;
        *(_WORD *)(v11 + 40) = 0;
        *(_DWORD *)(v11 + 56) = 0;
        *(_BYTE *)(v11 + 60) = 0;
        *(_DWORD *)(v11 + 64) = 0;
        *(_BYTE *)(v11 + 68) = 0;
        *(_DWORD *)(v11 + 72) = -1082130432;
        *(_QWORD *)(v11 + 20) = 0LL;
        *(_QWORD *)(v11 + 28) = 0LL;
        if ( v12 )
          CEntity::RegisterReference(v12, v14);
        *(_DWORD *)(v11 + 28) = 0;
        v16 = &`vtable for'CTaskComplexEnterCarAsPassenger;
      }
      goto LABEL_30;
    }
    if ( !CUpsideDownCarCheck::IsCarUpsideDown((CUpsideDownCarCheck *)&v25, v6) )
    {
      v18 = 700;
      if ( *((_BYTE *)this + 28) )
        v18 = 701;
      return CTaskComplexCarDrive::CreateSubTask((CTaskComplexCarDrive *)this, v18, a2);
    }
    if ( *((_BYTE *)this + 28) )
    {
      v18 = 717;
      return CTaskComplexCarDrive::CreateSubTask((CTaskComplexCarDrive *)this, v18, a2);
    }
    return 0;
  }
  v17 = v5 == 0;
  if ( v5 )
  {
    v6 = (const CVehicle *)(*((unsigned __int8 *)a2 + 1157) << 31);
    v17 = v6 == 0;
  }
  if ( v17 )
  {
    if ( *((_BYTE *)this + 28) )
    {
      v11 = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplex::CTaskComplex((CTaskComplex *)v11);
      v16 = &`vtable for'CTaskComplexEnterAnyCarAsDriver;
LABEL_30:
      *(_DWORD *)v11 = *v16 + 8;
      return v11;
    }
    return 0;
  }
  this[3] = v5;
  CEntity::RegisterReference(v5, v7);
  (*((void (__fastcall **)(CEntity **))*this + 13))(this);
  v11 = CTask::operator new((CTask *)&dword_60, v19);
  v20 = this[3];
  CTaskSimple::CTaskSimple((CTaskSimple *)v11);
LABEL_24:
  *(_QWORD *)(v11 + 12) = 0LL;
  *(_QWORD *)(v11 + 20) = 0LL;
  *(_DWORD *)v11 = &off_66AD18;
  *(_WORD *)(v11 + 28) = 0;
  *(_DWORD *)(v11 + 86) = 0;
  *(_DWORD *)(v11 + 82) = 0;
  v22 = *(_BYTE *)(v11 + 92);
  *(_DWORD *)(v11 + 76) = 0;
  v23 = v22 & 0xC3 | 8;
  *(_DWORD *)(v11 + 80) = 0;
  *(_BYTE *)(v11 + 92) = v23;
  *(_DWORD *)(v11 + 8) = v20;
  if ( v20 )
  {
    CEntity::RegisterReference(v20, (CEntity **)(v11 + 8));
    v23 = *(_BYTE *)(v11 + 92);
  }
  *(_DWORD *)(v11 + 32) = -1;
  *(_BYTE *)(v11 + 92) = v23 & 0xFC;
  *(_DWORD *)(v11 + 60) = 0;
  *(_DWORD *)(v11 + 64) = 0;
  *(_DWORD *)(v11 + 68) = 0;
  return v11;
}


// ============================================================

// Address: 0x4fbe98
// Original: _ZN20CTaskComplexCarDrive14ControlSubTaskEP4CPed
// Demangled: CTaskComplexCarDrive::ControlSubTask(CPed *)
int __fastcall CTaskComplexCarDrive::ControlSubTask(CTaskComplexCarDrive *this, CPed *a2)
{
  int v4; // r0
  int v5; // r4
  bool v6; // zf
  int v7; // r0
  CEntity *v9; // r0
  bool v10; // zf
  unsigned int v11; // r1
  CEntity *v12; // r5
  char v13; // r0
  char v14; // r0

  v4 = *((_DWORD *)a2 + 356);
  v5 = *((_DWORD *)this + 2);
  v6 = v4 == 0;
  if ( v4 )
    v6 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( !v6 )
  {
    v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 20))(*((_DWORD *)this + 2));
    if ( v7 == 918 )
    {
      v9 = (CEntity *)*((_DWORD *)a2 + 356);
      v10 = v9 == 0;
      if ( v9 )
        v10 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( !v10 )
      {
        *((_DWORD *)this + 3) = v9;
        CEntity::RegisterReference(v9, (CEntity **)this + 3);
        (*(void (__fastcall **)(CTaskComplexCarDrive *))(*(_DWORD *)this + 52))(this);
        v5 = CTask::operator new((CTask *)&dword_60, v11);
        v12 = (CEntity *)*((_DWORD *)this + 3);
        CTaskSimple::CTaskSimple((CTaskSimple *)v5);
        *(_QWORD *)(v5 + 12) = 0LL;
        *(_QWORD *)(v5 + 20) = 0LL;
        *(_DWORD *)v5 = &off_66AD18;
        *(_WORD *)(v5 + 28) = 0;
        *(_DWORD *)(v5 + 86) = 0;
        *(_DWORD *)(v5 + 82) = 0;
        v13 = *(_BYTE *)(v5 + 92);
        *(_DWORD *)(v5 + 76) = 0;
        *(_DWORD *)(v5 + 80) = 0;
        v14 = v13 & 0xC3 | 8;
        *(_BYTE *)(v5 + 92) = v14;
        *(_DWORD *)(v5 + 8) = v12;
        if ( v12 )
        {
          CEntity::RegisterReference(v12, (CEntity **)(v5 + 8));
          v14 = *(_BYTE *)(v5 + 92);
        }
        *(_DWORD *)(v5 + 32) = -1;
        *(_BYTE *)(v5 + 92) = v14 & 0xFC;
        *(_DWORD *)(v5 + 60) = 0;
        *(_DWORD *)(v5 + 64) = 0;
        *(_DWORD *)(v5 + 68) = 0;
      }
    }
    else if ( v7 == 709 )
    {
      return (*(int (__fastcall **)(CTaskComplexCarDrive *, CPed *))(*(_DWORD *)this + 60))(this, a2);
    }
  }
  return v5;
}


// ============================================================

// Address: 0x4fbf84
// Original: _ZNK20CTaskComplexCarDrive27CreateSubTaskCannotGetInCarEP4CPed
// Demangled: CTaskComplexCarDrive::CreateSubTaskCannotGetInCar(CPed *)
int __fastcall CTaskComplexCarDrive::CreateSubTaskCannotGetInCar(CTaskComplexCarDrive *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4fbf88
// Original: _ZN20CTaskComplexCarDrive5DriveEP4CPed
// Demangled: CTaskComplexCarDrive::Drive(CPed *)
int __fastcall CTaskComplexCarDrive::Drive(CTaskComplexCarDrive *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4fbf8c
// Original: _ZNK20CTaskComplexCarDrive8SetUpCarEv
// Demangled: CTaskComplexCarDrive::SetUpCar(void)
int __fastcall CTaskComplexCarDrive::SetUpCar(int this)
{
  _BYTE *v1; // r1

  v1 = *(_BYTE **)(this + 12);
  *(_BYTE *)(this + 29) = v1[957];
  *(_BYTE *)(this + 30) = v1[958];
  LOBYTE(v1) = v1[980];
  *(_BYTE *)(this + 32) = 1;
  *(_BYTE *)(this + 31) = (_BYTE)v1;
  return this;
}


// ============================================================

// Address: 0x4fec68
// Original: _ZNK20CTaskComplexCarDrive5CloneEv
// Demangled: CTaskComplexCarDrive::Clone(void)
int __fastcall CTaskComplexCarDrive::Clone(CTaskComplexCarDrive *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  int v5; // r8
  int v6; // r9
  int v7; // r10

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 4);
  v6 = *((_DWORD *)this + 5);
  v7 = *((_DWORD *)this + 6);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = v5;
  *(_DWORD *)(v3 + 20) = v6;
  *(_DWORD *)(v3 + 24) = v7;
  *(_BYTE *)(v3 + 28) = 1;
  *(_BYTE *)(v3 + 32) = 0;
  *(_DWORD *)v3 = &off_66AD4C;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  *(_BYTE *)(v3 + 28) = *((_BYTE *)this + 28);
  return v3;
}


// ============================================================

// Address: 0x4fecc4
// Original: _ZNK20CTaskComplexCarDrive11GetTaskTypeEv
// Demangled: CTaskComplexCarDrive::GetTaskType(void)
int __fastcall CTaskComplexCarDrive::GetTaskType(CTaskComplexCarDrive *this)
{
  return 725;
}


// ============================================================

// Address: 0x4feccc
// Original: _ZN20CTaskComplexCarDrive9SerializeEv
// Demangled: CTaskComplexCarDrive::Serialize(void)
void __fastcall CTaskComplexCarDrive::Serialize(CTaskComplexCarDrive *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r5
  CGenericGameStorage *v7; // r6
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CGenericGameStorage *v13; // r5
  int v14; // r2
  CGenericGameStorage *v15; // r5
  int v16; // r2
  CGenericGameStorage *v17; // r5
  int v18; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexCarDrive *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexCarDrive *))(*(_DWORD *)this + 20))(this) == 725 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 3);
    if ( v5 )
    {
      v6 = GettPoolVehicleRef(v5);
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      v9 = v7;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      v9 = v11;
    }
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    free(v13);
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v15 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
    free(v15);
    if ( UseDataFence )
      AddDataFence();
    v17 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v17 = *((_DWORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v17, byte_4, v18);
    j_free(v17);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexCarDrive *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(725, v10);
  }
}


// ============================================================
