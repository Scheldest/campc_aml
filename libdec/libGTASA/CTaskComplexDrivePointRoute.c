
// Address: 0x18a314
// Original: j__ZN27CTaskComplexDrivePointRoute10CreateTaskEv
// Demangled: CTaskComplexDrivePointRoute::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexDrivePointRoute::CreateTask(CTaskComplexDrivePointRoute *this)
{
  return _ZN27CTaskComplexDrivePointRoute10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19d4c4
// Original: j__ZN27CTaskComplexDrivePointRouteC2EP8CVehicleRK11CPointRoutefiifi
// Demangled: CTaskComplexDrivePointRoute::CTaskComplexDrivePointRoute(CVehicle *,CPointRoute const&,float,int,int,float,int)
// attributes: thunk
void __fastcall CTaskComplexDrivePointRoute::CTaskComplexDrivePointRoute(
        CTaskComplexDrivePointRoute *this,
        CVehicle *a2,
        const CPointRoute *a3,
        float a4,
        int a5,
        int a6,
        float a7,
        int a8)
{
  _ZN27CTaskComplexDrivePointRouteC2EP8CVehicleRK11CPointRoutefiifi(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x493aac
// Original: _ZN27CTaskComplexDrivePointRoute10CreateTaskEv
// Demangled: CTaskComplexDrivePointRoute::CreateTask(void)
void __fastcall CTaskComplexDrivePointRoute::CreateTask(CTaskComplexDrivePointRoute *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r8
  char v6; // r5
  int v7; // r2
  char v8; // r6
  int v9; // r2
  char v10; // r5
  int v11; // r2
  char v12; // r5
  int v13; // r2
  char v14; // r5
  int v15; // r2
  char v16; // r5
  unsigned int v17; // r1
  CTaskComplexDrivePointRoute *v18; // r0
  int v19; // [sp+14h] [bp-8Ch] BYREF
  float v20; // [sp+18h] [bp-88h] BYREF
  int v21; // [sp+1Ch] [bp-84h] BYREF
  int v22; // [sp+20h] [bp-80h] BYREF
  float v23; // [sp+24h] [bp-7Ch] BYREF
  _DWORD v24[25]; // [sp+28h] [bp-78h] BYREF
  CPools *v25; // [sp+8Ch] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v25, byte_4, a3);
  if ( v25 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v25, (int)v25 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  v24[0] = 0;
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, &dword_64, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, byte_4, v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, byte_4, v9);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, byte_4, v11);
  v14 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v13);
    UseDataFence = v14;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, byte_4, v13);
  v16 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, (char *)&stderr + 2, v15);
    UseDataFence = v16;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, byte_4, v15);
  v18 = (CTaskComplexDrivePointRoute *)CTask::operator new((CTask *)&word_2C, v17);
  CTaskComplexDrivePointRoute::CTaskComplexDrivePointRoute(
    v18,
    Vehicle,
    (const CPointRoute *)v24,
    v23,
    v22,
    v21,
    v20,
    v19);
}


// ============================================================

// Address: 0x4fc720
// Original: _ZN27CTaskComplexDrivePointRouteC2EP8CVehicleRK11CPointRoutefiifi
// Demangled: CTaskComplexDrivePointRoute::CTaskComplexDrivePointRoute(CVehicle *,CPointRoute const&,float,int,int,float,int)
void __fastcall CTaskComplexDrivePointRoute::CTaskComplexDrivePointRoute(
        CTaskComplexDrivePointRoute *this,
        CVehicle *a2,
        const CPointRoute *a3,
        float a4,
        int a5,
        int a6,
        float a7,
        int a8)
{
  float v12; // s18
  unsigned int v13; // r1
  _DWORD *v14; // r0
  int v15; // r1
  char *v16; // r1
  _DWORD *v17; // r2
  int v18; // r3
  __int64 v19; // d16
  int v20; // r6

  CTaskComplex::CTaskComplex(this);
  v12 = a4;
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_66AE6C;
  v14 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v13);
  v15 = *(_DWORD *)a3;
  *v14 = *(_DWORD *)a3;
  if ( v15 >= 1 )
  {
    v16 = (char *)a3 + 4;
    v17 = v14 + 1;
    v18 = 0;
    do
    {
      v19 = *(_QWORD *)v16;
      ++v18;
      v20 = *((_DWORD *)v16 + 2);
      v16 += 12;
      v17[2] = v20;
      *(_QWORD *)v17 = v19;
      v17 += 3;
    }
    while ( v18 < *v14 );
  }
  *((float *)this + 5) = v12;
  *((_DWORD *)this + 4) = v14;
  *((_DWORD *)this + 6) = a5;
  *((_DWORD *)this + 7) = a6;
  *((float *)this + 8) = a7;
  *((_DWORD *)this + 9) = a8;
  *((_DWORD *)this + 10) = 0;
}


// ============================================================

// Address: 0x4fc7ac
// Original: _ZN27CTaskComplexDrivePointRouteD2Ev
// Demangled: CTaskComplexDrivePointRoute::~CTaskComplexDrivePointRoute()
void __fastcall CTaskComplexDrivePointRoute::~CTaskComplexDrivePointRoute(CTaskComplexDrivePointRoute *this)
{
  void *v2; // r0

  v2 = (void *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66AE6C;
  if ( v2 )
    CPointRoute::operator delete(v2);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4fc7d4
// Original: _ZN27CTaskComplexDrivePointRouteD0Ev
// Demangled: CTaskComplexDrivePointRoute::~CTaskComplexDrivePointRoute()
void __fastcall CTaskComplexDrivePointRoute::~CTaskComplexDrivePointRoute(CTaskComplexDrivePointRoute *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66AE6C;
  if ( v2 )
    CPointRoute::operator delete(v2);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x4fc800
// Original: _ZN27CTaskComplexDrivePointRoute17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexDrivePointRoute::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexDrivePointRoute::CreateNextSubTask(CTaskComplexDrivePointRoute *this, CPed *a2)
{
  int v3; // r4
  int v4; // r1
  _DWORD *v5; // r0
  unsigned int v6; // r1
  __int64 v7; // kr00_8
  __int64 v8; // kr08_8
  __int64 v9; // r8
  int v10; // r6
  __int64 v11; // kr18_8
  int v12; // r6
  __int64 v13; // d16
  int v15; // [sp+4h] [bp-24h]
  int v16; // [sp+8h] [bp-20h]

  v3 = 0;
  v4 = *((_DWORD *)this + 10);
  v5 = (_DWORD *)*((_DWORD *)this + 4);
  v6 = v4 + 1;
  *((_DWORD *)this + 10) = v6;
  if ( v6 != *v5 )
  {
    v3 = CTask::operator new((CTask *)&off_3C, v6);
    v7 = *(_QWORD *)((char *)this + 12);
    v8 = *(_QWORD *)((char *)this + 20);
    v16 = *((_DWORD *)this + 6);
    LODWORD(v9) = *((_DWORD *)this + 7);
    v15 = *((_DWORD *)this + 8);
    v11 = *(_QWORD *)((char *)this + 36);
    v10 = *((_DWORD *)this + 10);
    HIDWORD(v9) = v11;
    CTaskComplex::CTaskComplex((CTaskComplex *)v3);
    *(_QWORD *)(v3 + 20) = v9;
    *(_BYTE *)(v3 + 28) = 1;
    *(_BYTE *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 16) = v8;
    *(_DWORD *)v3 = &off_66AD4C;
    *(_DWORD *)(v3 + 12) = v7;
    v12 = HIDWORD(v7) + 12 * v10 + 4;
    if ( (_DWORD)v7 )
      CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 12));
    *(_DWORD *)v3 = &off_66AE24;
    v13 = *(_QWORD *)v12;
    *(_DWORD *)(v3 + 44) = *(_DWORD *)(v12 + 8);
    *(_DWORD *)(v3 + 48) = v16;
    *(_DWORD *)(v3 + 52) = v15;
    *(_BYTE *)(v3 + 56) = 0;
    *(_QWORD *)(v3 + 36) = v13;
  }
  return v3;
}


// ============================================================

// Address: 0x4fc8b0
// Original: _ZN27CTaskComplexDrivePointRoute18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexDrivePointRoute::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexDrivePointRoute::CreateFirstSubTask(CTaskComplexDrivePointRoute *this, CPed *a2)
{
  int v3; // r4
  __int64 v4; // kr00_8
  __int64 v5; // kr08_8
  __int64 v6; // r8
  int v7; // r6
  __int64 v8; // kr18_8
  int v9; // r6
  __int64 v10; // d16
  int result; // r0
  int v12; // [sp+4h] [bp-24h]
  int v13; // [sp+8h] [bp-20h]

  v3 = CTask::operator new((CTask *)&off_3C, (unsigned int)a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = *(_QWORD *)((char *)this + 20);
  v13 = *((_DWORD *)this + 6);
  LODWORD(v6) = *((_DWORD *)this + 7);
  v12 = *((_DWORD *)this + 8);
  v8 = *(_QWORD *)((char *)this + 36);
  v7 = *((_DWORD *)this + 10);
  HIDWORD(v6) = v8;
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 20) = v6;
  *(_BYTE *)(v3 + 28) = 1;
  *(_BYTE *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 16) = v5;
  *(_DWORD *)v3 = &off_66AD4C;
  *(_DWORD *)(v3 + 12) = v4;
  v9 = HIDWORD(v4) + 12 * v7 + 4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  *(_DWORD *)v3 = &off_66AE24;
  v10 = *(_QWORD *)v9;
  *(_DWORD *)(v3 + 44) = *(_DWORD *)(v9 + 8);
  *(_DWORD *)(v3 + 48) = v13;
  *(_DWORD *)(v3 + 52) = v12;
  result = v3;
  *(_BYTE *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 36) = v10;
  return result;
}


// ============================================================

// Address: 0x4fc950
// Original: _ZN27CTaskComplexDrivePointRoute14ControlSubTaskEP4CPed
// Demangled: CTaskComplexDrivePointRoute::ControlSubTask(CPed *)
int __fastcall CTaskComplexDrivePointRoute::ControlSubTask(CTaskComplexDrivePointRoute *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4ff418
// Original: _ZNK27CTaskComplexDrivePointRoute5CloneEv
// Demangled: CTaskComplexDrivePointRoute::Clone(void)
int __fastcall CTaskComplexDrivePointRoute::Clone(CTaskComplexDrivePointRoute *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8
  __int64 v5; // d8
  __int64 v6; // d9
  int v7; // r8
  unsigned int v8; // r1
  _DWORD *v9; // r0
  int v10; // r1
  int v11; // r1
  _DWORD *v12; // r2
  int v13; // r3
  __int64 v14; // d16
  int v15; // r6

  v3 = CTask::operator new((CTask *)&word_2C, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = *(_QWORD *)((char *)this + 20);
  v6 = *(_QWORD *)((char *)this + 28);
  v7 = *((_DWORD *)this + 9);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 12) = v4;
  *(_DWORD *)v3 = &off_66AE6C;
  v9 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v8);
  v10 = *(_DWORD *)HIDWORD(v4);
  *v9 = *(_DWORD *)HIDWORD(v4);
  if ( v10 >= 1 )
  {
    v11 = HIDWORD(v4) + 4;
    v12 = v9 + 1;
    v13 = 0;
    do
    {
      v14 = *(_QWORD *)v11;
      ++v13;
      v15 = *(_DWORD *)(v11 + 8);
      v11 += 12;
      v12[2] = v15;
      *(_QWORD *)v12 = v14;
      v12 += 3;
    }
    while ( v13 < *v9 );
  }
  *(_DWORD *)(v3 + 16) = v9;
  *(_DWORD *)(v3 + 36) = v7;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 20) = v5;
  *(_QWORD *)(v3 + 28) = v6;
  return v3;
}


// ============================================================

// Address: 0x4ff4a0
// Original: _ZNK27CTaskComplexDrivePointRoute11GetTaskTypeEv
// Demangled: CTaskComplexDrivePointRoute::GetTaskType(void)
int __fastcall CTaskComplexDrivePointRoute::GetTaskType(CTaskComplexDrivePointRoute *this)
{
  return 721;
}


// ============================================================

// Address: 0x4ff4a8
// Original: _ZN27CTaskComplexDrivePointRoute9SerializeEv
// Demangled: CTaskComplexDrivePointRoute::Serialize(void)
void __fastcall CTaskComplexDrivePointRoute::Serialize(CTaskComplexDrivePointRoute *this)
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
  const void *v13; // r5
  void *v14; // r6
  int v15; // r2
  CGenericGameStorage *v16; // r5
  int v17; // r2
  CGenericGameStorage *v18; // r5
  int v19; // r2
  CGenericGameStorage *v20; // r5
  int v21; // r2
  CGenericGameStorage *v22; // r5
  int v23; // r2
  CGenericGameStorage *v24; // r5
  int v25; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexDrivePointRoute *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexDrivePointRoute *))(*(_DWORD *)this + 20))(this) == 721 )
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
    v13 = (const void *)*((_DWORD *)this + 4);
    v14 = malloc(0x64u);
    memcpy_1(v14, v13, 0x64u);
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v14, &dword_64, v15);
    free(v14);
    if ( UseDataFence )
      AddDataFence();
    v16 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v16 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
    free(v16);
    if ( UseDataFence )
      AddDataFence();
    v18 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v18 = *((_DWORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v18, byte_4, v19);
    free(v18);
    if ( UseDataFence )
      AddDataFence();
    v20 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v20 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v20, byte_4, v21);
    free(v20);
    if ( UseDataFence )
      AddDataFence();
    v22 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v22 = *((_DWORD *)this + 8);
    CGenericGameStorage::_SaveDataToWorkBuffer(v22, byte_4, v23);
    free(v22);
    if ( UseDataFence )
      AddDataFence();
    v24 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v24 = *((_DWORD *)this + 9);
    CGenericGameStorage::_SaveDataToWorkBuffer(v24, byte_4, v25);
    j_free(v24);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexDrivePointRoute *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(721, v10);
  }
}


// ============================================================
