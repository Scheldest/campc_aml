
// Address: 0x198e00
// Original: j__ZN29CTaskComplexGoToPointShooting10CreateTaskEv
// Demangled: CTaskComplexGoToPointShooting::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexGoToPointShooting::CreateTask(CTaskComplexGoToPointShooting *this)
{
  return _ZN29CTaskComplexGoToPointShooting10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19f71c
// Original: j__ZN29CTaskComplexGoToPointShootingC2EiRK7CVectorP7CEntityS0_ff
// Demangled: CTaskComplexGoToPointShooting::CTaskComplexGoToPointShooting(int,CVector const&,CEntity *,CVector,float,float)
// attributes: thunk
int CTaskComplexGoToPointShooting::CTaskComplexGoToPointShooting()
{
  return _ZN29CTaskComplexGoToPointShootingC2EiRK7CVectorP7CEntityS0_ff();
}


// ============================================================

// Address: 0x494384
// Original: _ZN29CTaskComplexGoToPointShooting10CreateTaskEv
// Demangled: CTaskComplexGoToPointShooting::CreateTask(void)
int __fastcall CTaskComplexGoToPointShooting::CreateTask(CTaskComplexGoToPointShooting *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  char v10; // r4
  char v11; // r4
  char v12; // r5
  int v13; // r2
  char v14; // r5
  int v15; // r2
  char v16; // r5
  unsigned int v17; // r1
  float v19; // [sp+18h] [bp-38h] BYREF
  float v20; // [sp+1Ch] [bp-34h] BYREF
  CPools *v21[3]; // [sp+20h] [bp-30h] BYREF
  int v22; // [sp+2Ch] [bp-24h] BYREF
  _BYTE v23[12]; // [sp+30h] [bp-20h] BYREF
  _DWORD v24[5]; // [sp+3Ch] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, &byte_9[3], v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, byte_4, v6);
  switch ( v22 )
  {
    case 2:
      v10 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, (char *)&stderr + 2, v8);
        UseDataFence = v10;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, byte_4, v8);
      if ( v21[0] != (CPools *)-1 )
        CPools::GetVehicle(v21[0], (int)v21[0] + 1);
      break;
    case 4:
      v11 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, (char *)&stderr + 2, v8);
        UseDataFence = v11;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, byte_4, v8);
      if ( v21[0] != (CPools *)-1 )
        CPools::GetObject(v21[0], (int)v21[0] + 1);
      break;
    case 3:
      v9 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, (char *)&stderr + 2, v8);
        UseDataFence = v9;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, byte_4, v8);
      if ( v21[0] != (CPools *)-1 )
        CPools::GetPed(v21[0], (int)v21[0] + 1);
      break;
  }
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, (char *)&stderr + 2, v8);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, &byte_9[3], v8);
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
  CTask::operator new((CTask *)&dword_38, v17);
  return CTaskComplexGoToPointShooting::CTaskComplexGoToPointShooting();
}


// ============================================================

// Address: 0x51dffc
// Original: _ZN29CTaskComplexGoToPointShootingC2EiRK7CVectorP7CEntityS0_ff
// Demangled: CTaskComplexGoToPointShooting::CTaskComplexGoToPointShooting(int,CVector const&,CEntity *,CVector,float,float)
int __fastcall CTaskComplexGoToPointShooting::CTaskComplexGoToPointShooting(
        int a1,
        int a2,
        __int64 *a3,
        CEntity *a4,
        __int64 a5,
        int a6,
        float a7,
        float a8)
{
  __int64 v12; // d16
  char v13; // r1

  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)a1 = &off_66C1C4;
  *(_DWORD *)(a1 + 16) = a4;
  if ( a4 )
    CEntity::RegisterReference(a4, (CEntity **)(a1 + 16));
  if ( *(float *)(a1 + 32) != *(float *)a3
    || *(float *)(a1 + 36) != *((float *)a3 + 1)
    || *(float *)(a1 + 40) != *((float *)a3 + 2)
    || *(float *)(a1 + 44) != a7
    || *(float *)(a1 + 48) != a8 )
  {
    v12 = *a3;
    v13 = *(_BYTE *)(a1 + 52);
    *(_DWORD *)(a1 + 40) = *((_DWORD *)a3 + 2);
    *(float *)(a1 + 44) = a7;
    *(float *)(a1 + 48) = a8;
    *(_BYTE *)(a1 + 52) = v13 | 1;
    *(_QWORD *)(a1 + 32) = v12;
  }
  *(_DWORD *)a1 = &off_66C6F8;
  return a1;
}


// ============================================================

// Address: 0x528834
// Original: _ZN29CTaskComplexGoToPointShootingD0Ev
// Demangled: CTaskComplexGoToPointShooting::~CTaskComplexGoToPointShooting()
void __fastcall CTaskComplexGoToPointShooting::~CTaskComplexGoToPointShooting(CTaskComplexGoToPointShooting *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66C1C4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x528864
// Original: _ZNK29CTaskComplexGoToPointShooting5CloneEv
// Demangled: CTaskComplexGoToPointShooting::Clone(void)
CTaskComplex *__fastcall CTaskComplexGoToPointShooting::Clone(CTaskComplexGoToPointShooting *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  float v4; // s16
  float v5; // s18
  CTaskComplex *v6; // r4
  __int64 v7; // kr00_8
  int v8; // r9
  int v9; // r10
  int v10; // r11
  float *v11; // r8
  __int64 v12; // d16
  char v13; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, a2);
  v4 = *((float *)this + 11);
  v5 = *((float *)this + 12);
  v6 = v3;
  v7 = *(_QWORD *)((char *)this + 12);
  v8 = *((_DWORD *)this + 5);
  v9 = *((_DWORD *)this + 6);
  v10 = *((_DWORD *)this + 7);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v6 + 3) = v7;
  *((_DWORD *)v6 + 5) = v8;
  *((_DWORD *)v6 + 6) = v9;
  *((_DWORD *)v6 + 7) = v10;
  v11 = (float *)((char *)this + 32);
  *(_DWORD *)v6 = &off_66C1C4;
  *((_DWORD *)v6 + 4) = HIDWORD(v7);
  if ( HIDWORD(v7) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v7), (CEntity **)v6 + 4);
  if ( *((float *)v6 + 8) != *v11
    || *((float *)v6 + 9) != *((float *)this + 9)
    || *((float *)v6 + 10) != *((float *)this + 10)
    || *((float *)v6 + 11) != v4
    || *((float *)v6 + 12) != v5 )
  {
    v12 = *(_QWORD *)v11;
    *((_DWORD *)v6 + 10) = *((_DWORD *)this + 10);
    *((_QWORD *)v6 + 4) = v12;
    v13 = *((_BYTE *)v6 + 52);
    *((float *)v6 + 11) = v4;
    *((float *)v6 + 12) = v5;
    *((_BYTE *)v6 + 52) = v13 | 1;
  }
  *(_DWORD *)v6 = &off_66C6F8;
  return v6;
}


// ============================================================

// Address: 0x528958
// Original: _ZNK29CTaskComplexGoToPointShooting11GetTaskTypeEv
// Demangled: CTaskComplexGoToPointShooting::GetTaskType(void)
int __fastcall CTaskComplexGoToPointShooting::GetTaskType(CTaskComplexGoToPointShooting *this)
{
  return 901;
}


// ============================================================

// Address: 0x528960
// Original: _ZN29CTaskComplexGoToPointShooting9SerializeEv
// Demangled: CTaskComplexGoToPointShooting::Serialize(void)
void __fastcall CTaskComplexGoToPointShooting::Serialize(CTaskComplexGoToPointShooting *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  __int64 v8; // d16
  int v9; // r2
  int v10; // r0
  int v11; // r6
  CGenericGameStorage *v12; // r5
  int v13; // r2
  CVehicle *v14; // r0
  int v15; // r1
  int v16; // r5
  int v17; // r0
  CGenericGameStorage *v18; // r5
  int v19; // r2
  CGenericGameStorage *v20; // r0
  CGenericGameStorage *v21; // r6
  int v22; // r2
  CGenericGameStorage *v23; // r5
  __int64 v24; // d16
  int v25; // r2
  CGenericGameStorage *v26; // r5
  int v27; // r2
  CGenericGameStorage *v28; // r5
  int v29; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexGoToPointShooting *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexGoToPointShooting *))(*(_DWORD *)this + 20))(this) != 901 )
  {
    v17 = (*(int (__fastcall **)(CTaskComplexGoToPointShooting *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(901, v17);
    return;
  }
  if ( UseDataFence )
    AddDataFence();
  v5 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v5 = *((_DWORD *)this + 3);
  CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
  free(v5);
  if ( UseDataFence )
    AddDataFence();
  v7 = (CGenericGameStorage *)malloc(0xCu);
  v8 = *((_QWORD *)this + 4);
  *((_DWORD *)v7 + 2) = *((_DWORD *)this + 10);
  *(_QWORD *)v7 = v8;
  CGenericGameStorage::_SaveDataToWorkBuffer(v7, &byte_9[3], v9);
  free(v7);
  v10 = *((_DWORD *)this + 4);
  if ( !v10 )
  {
    if ( UseDataFence )
      AddDataFence();
    v18 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v18 = 0;
    CGenericGameStorage::_SaveDataToWorkBuffer(v18, byte_4, v19);
    v20 = v18;
    goto LABEL_24;
  }
  v11 = *(_BYTE *)(v10 + 58) & 7;
  if ( UseDataFence )
    AddDataFence();
  v12 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v12 = v11;
  CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
  free(v12);
  v14 = (CVehicle *)*((_DWORD *)this + 4);
  v15 = *((_BYTE *)v14 + 58) & 7;
  switch ( v15 )
  {
    case 2:
      v16 = GettPoolVehicleRef(v14);
      goto LABEL_21;
    case 4:
      v16 = GettPoolObjRef(v14);
      goto LABEL_21;
    case 3:
      v16 = GettPoolPedRef(v14);
LABEL_21:
      if ( UseDataFence )
        AddDataFence();
      v21 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v21 = v16;
      CGenericGameStorage::_SaveDataToWorkBuffer(v21, byte_4, v22);
      v20 = v21;
LABEL_24:
      free(v20);
      break;
  }
  if ( UseDataFence )
    AddDataFence();
  v23 = (CGenericGameStorage *)malloc(0xCu);
  v24 = *(_QWORD *)((char *)this + 20);
  *((_DWORD *)v23 + 2) = *((_DWORD *)this + 7);
  *(_QWORD *)v23 = v24;
  CGenericGameStorage::_SaveDataToWorkBuffer(v23, &byte_9[3], v25);
  free(v23);
  if ( UseDataFence )
    AddDataFence();
  v26 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v26 = *((_DWORD *)this + 11);
  CGenericGameStorage::_SaveDataToWorkBuffer(v26, byte_4, v27);
  free(v26);
  if ( UseDataFence )
    AddDataFence();
  v28 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v28 = *((_DWORD *)this + 12);
  CGenericGameStorage::_SaveDataToWorkBuffer(v28, byte_4, v29);
  j_free(v28);
}


// ============================================================
