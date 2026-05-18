
// Address: 0x18c968
// Original: j__ZN26CTaskComplexOpenDriverDoorC2EP8CVehicle
// Demangled: CTaskComplexOpenDriverDoor::CTaskComplexOpenDriverDoor(CVehicle *)
// attributes: thunk
void __fastcall CTaskComplexOpenDriverDoor::CTaskComplexOpenDriverDoor(CTaskComplexOpenDriverDoor *this, CVehicle *a2)
{
  _ZN26CTaskComplexOpenDriverDoorC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x4f7088
// Original: _ZN26CTaskComplexOpenDriverDoorC2EP8CVehicle
// Demangled: CTaskComplexOpenDriverDoor::CTaskComplexOpenDriverDoor(CVehicle *)
void __fastcall CTaskComplexOpenDriverDoor::CTaskComplexOpenDriverDoor(CTaskComplexOpenDriverDoor *this, CVehicle *a2)
{
  char v4; // r1

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 9) = 6;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 68) = 0;
  v4 = *((_BYTE *)this + 16);
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 18) = -1082130432;
  *((_BYTE *)this + 16) = v4 & 0xF0 | 3;
  *(_DWORD *)this = &off_66A904;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  *((_DWORD *)this + 7) = 10;
  *(_DWORD *)this = &off_66A9C4;
}


// ============================================================

// Address: 0x4f7100
// Original: _ZN26CTaskComplexOpenDriverDoorD0Ev
// Demangled: CTaskComplexOpenDriverDoor::~CTaskComplexOpenDriverDoor()
void __fastcall CTaskComplexOpenDriverDoor::~CTaskComplexOpenDriverDoor(CEntity **this)
{
  void *v1; // r0

  CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4fd760
// Original: _ZNK26CTaskComplexOpenDriverDoor5CloneEv
// Demangled: CTaskComplexOpenDriverDoor::Clone(void)
int __fastcall CTaskComplexOpenDriverDoor::Clone(CTaskComplexOpenDriverDoor *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  char v5; // r2

  v3 = CTask::operator new((CTask *)&dword_50, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 20) = 0LL;
  *(_QWORD *)(v3 + 28) = 0LL;
  *(_DWORD *)(v3 + 36) = 6;
  *(_WORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_BYTE *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_BYTE *)(v3 + 68) = 0;
  v5 = *(_BYTE *)(v3 + 16);
  *(_DWORD *)(v3 + 72) = -1082130432;
  *(_DWORD *)v3 = &off_66A904;
  *(_BYTE *)(v3 + 16) = v5 & 0xF0 | 3;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  *(_DWORD *)(v3 + 28) = 10;
  *(_DWORD *)v3 = &off_66A9C4;
  *(_DWORD *)(v3 + 36) = *((_DWORD *)this + 9);
  return v3;
}


// ============================================================

// Address: 0x4fd7f0
// Original: _ZNK26CTaskComplexOpenDriverDoor11GetTaskTypeEv
// Demangled: CTaskComplexOpenDriverDoor::GetTaskType(void)
int __fastcall CTaskComplexOpenDriverDoor::GetTaskType(CTaskComplexOpenDriverDoor *this)
{
  return 722;
}


// ============================================================

// Address: 0x4fd7f8
// Original: _ZN26CTaskComplexOpenDriverDoor9SerializeEv
// Demangled: CTaskComplexOpenDriverDoor::Serialize(void)
void __fastcall CTaskComplexOpenDriverDoor::Serialize(CTaskComplexOpenDriverDoor *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r4
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexOpenDriverDoor *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexOpenDriverDoor *))(*(_DWORD *)this + 20))(this) == 722 )
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
    j_free(v9);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexOpenDriverDoor *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(722, v10);
  }
}


// ============================================================
