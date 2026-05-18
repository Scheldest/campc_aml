
// Address: 0x18d8a0
// Original: j__ZN24CTaskSimpleTriggerLookAt10CreateTaskEv
// Demangled: CTaskSimpleTriggerLookAt::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleTriggerLookAt::CreateTask(CTaskSimpleTriggerLookAt *this)
{
  return _ZN24CTaskSimpleTriggerLookAt10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19ff2c
// Original: j__ZN24CTaskSimpleTriggerLookAtC2EP7CEntityii5RwV3dhfii
// Demangled: CTaskSimpleTriggerLookAt::CTaskSimpleTriggerLookAt(CEntity *,int,int,RwV3d,uchar,float,int,int)
// attributes: thunk
int __fastcall CTaskSimpleTriggerLookAt::CTaskSimpleTriggerLookAt(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        int a11)
{
  return _ZN24CTaskSimpleTriggerLookAtC2EP7CEntityii5RwV3dhfii(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


// ============================================================

// Address: 0x49194c
// Original: _ZN24CTaskSimpleTriggerLookAt10CreateTaskEv
// Demangled: CTaskSimpleTriggerLookAt::CreateTask(void)
int __fastcall CTaskSimpleTriggerLookAt::CreateTask(CTaskSimpleTriggerLookAt *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  int Ped; // r8
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int v9; // r2
  char v10; // r5
  int v11; // r2
  char v12; // r5
  int v13; // r2
  char v14; // r5
  int v15; // r2
  char v16; // r5
  int v17; // r2
  char v18; // r5
  int v19; // r2
  char v20; // r5
  unsigned int v21; // r1
  int v22; // r0
  char v24; // [sp+1Fh] [bp-39h] BYREF
  int v25; // [sp+20h] [bp-38h] BYREF
  float v26; // [sp+24h] [bp-34h] BYREF
  unsigned __int8 v27; // [sp+2Bh] [bp-2Dh] BYREF
  int v28[3]; // [sp+2Ch] [bp-2Ch] BYREF
  int v29; // [sp+38h] [bp-20h] BYREF
  int v30; // [sp+3Ch] [bp-1Ch] BYREF
  CPools *v31; // [sp+40h] [bp-18h] BYREF
  _BYTE v32[18]; // [sp+46h] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v28, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v31, byte_4, a3);
  if ( v31 == (CPools *)-1 )
    Ped = 0;
  else
    Ped = CPools::GetPed(v31, (int)v31 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v28, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v30, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v28, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v29, byte_4, v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v28, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v28, &byte_9[3], v9);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v26, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v27, (char *)&stderr + 1, v11);
  v14 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v26, (char *)&stderr + 2, v13);
    UseDataFence = v14;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v26, byte_4, v13);
  v16 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v25, (char *)&stderr + 2, v15);
    UseDataFence = v16;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v25, byte_4, v15);
  v18 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v32, (char *)&stderr + 2, v17);
    UseDataFence = v18;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v24, (char *)&stderr + 1, v17);
  v20 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v32, (char *)&stderr + 2, v19);
    UseDataFence = v20;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v32, (char *)&stderr + 1, v19);
  v22 = CTask::operator new((CTask *)&word_30, v21);
  return CTaskSimpleTriggerLookAt::CTaskSimpleTriggerLookAt(
           v22,
           Ped,
           v30,
           v29,
           v28[0],
           v28[1],
           v28[2],
           v27,
           v26,
           v25,
           v32[0]);
}


// ============================================================

// Address: 0x4f07a8
// Original: _ZN24CTaskSimpleTriggerLookAtC2EP7CEntityii5RwV3dhfii
// Demangled: CTaskSimpleTriggerLookAt::CTaskSimpleTriggerLookAt(CEntity *,int,int,RwV3d,uchar,float,int,int)
int __fastcall CTaskSimpleTriggerLookAt::CTaskSimpleTriggerLookAt(
        int a1,
        CEntity *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        float a8,
        int a9,
        char a10)
{
  char v14; // r0

  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 28) = a6;
  *(float *)(a1 + 36) = a8;
  *(_BYTE *)(a1 + 32) = a7;
  *(_DWORD *)(a1 + 40) = a9;
  *(_BYTE *)(a1 + 45) = a10;
  *(_DWORD *)a1 = &off_66A548;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)(a1 + 8));
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  *(_BYTE *)(a1 + 44) = v14;
  return a1;
}


// ============================================================

// Address: 0x4f0820
// Original: _ZN24CTaskSimpleTriggerLookAtD2Ev
// Demangled: CTaskSimpleTriggerLookAt::~CTaskSimpleTriggerLookAt()
void __fastcall CTaskSimpleTriggerLookAt::~CTaskSimpleTriggerLookAt(CTaskSimpleTriggerLookAt *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66A548;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4f084c
// Original: _ZN24CTaskSimpleTriggerLookAtD0Ev
// Demangled: CTaskSimpleTriggerLookAt::~CTaskSimpleTriggerLookAt()
void __fastcall CTaskSimpleTriggerLookAt::~CTaskSimpleTriggerLookAt(CTaskSimpleTriggerLookAt *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66A548;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f087c
// Original: _ZNK24CTaskSimpleTriggerLookAt5CloneEv
// Demangled: CTaskSimpleTriggerLookAt::Clone(void)
int __fastcall CTaskSimpleTriggerLookAt::Clone(CTaskSimpleTriggerLookAt *this)
{
  unsigned int v2; // r1
  int v3; // r9
  int v4; // r4
  char v5; // r10
  CEntity *v6; // r6
  __int64 v7; // kr08_8
  int v8; // r5
  char v9; // r0
  int v11; // [sp+4h] [bp-2Ch]
  int v12; // [sp+8h] [bp-28h]
  char v13; // [sp+Ch] [bp-24h]
  unsigned int v14; // [sp+10h] [bp-20h]

  v3 = *((_DWORD *)this + 4);
  v2 = *((_DWORD *)this + 3);
  if ( v3 >= 0 && !*((_DWORD *)this + 2) )
  {
    v3 = -1;
    v2 = 100;
  }
  v14 = v2;
  v4 = CTask::operator new((CTask *)&word_30, v2);
  v13 = *((_BYTE *)this + 45);
  v11 = *((_DWORD *)this + 9);
  v12 = *((_DWORD *)this + 10);
  v5 = *((_BYTE *)this + 32);
  v6 = (CEntity *)*((_DWORD *)this + 2);
  v7 = *(_QWORD *)((char *)this + 20);
  v8 = *((_DWORD *)this + 7);
  CTaskSimple::CTaskSimple((CTaskSimple *)v4);
  *(_DWORD *)(v4 + 12) = v14;
  *(_DWORD *)(v4 + 16) = v3;
  *(_QWORD *)(v4 + 20) = v7;
  *(_DWORD *)(v4 + 28) = v8;
  *(_BYTE *)(v4 + 32) = v5;
  *(_DWORD *)(v4 + 36) = v11;
  *(_DWORD *)(v4 + 40) = v12;
  *(_BYTE *)(v4 + 45) = v13;
  *(_DWORD *)v4 = &off_66A548;
  *(_DWORD *)(v4 + 8) = v6;
  if ( v6 )
  {
    CEntity::RegisterReference(v6, (CEntity **)(v4 + 8));
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  *(_BYTE *)(v4 + 44) = v9;
  return v4;
}


// ============================================================

// Address: 0x4f091c
// Original: _ZN24CTaskSimpleTriggerLookAt13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleTriggerLookAt::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleTriggerLookAt::MakeAbortable(
        CTaskSimpleTriggerLookAt *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x4f0920
// Original: _ZN24CTaskSimpleTriggerLookAt10ProcessPedEP4CPed
// Demangled: CTaskSimpleTriggerLookAt::ProcessPed(CPed *)
int __fastcall CTaskSimpleTriggerLookAt::ProcessPed(CTaskSimpleTriggerLookAt *this, CPed *a2)
{
  int v2; // r3

  v2 = *((_DWORD *)this + 2);
  if ( *((_BYTE *)this + 44) && !v2 )
    return 1;
  IKChainManager_c::LookAt(
    (int)&g_ikChainMan,
    (int)"TaskTriggerLookAt",
    a2,
    v2,
    *((_DWORD *)this + 3),
    *((_DWORD *)this + 4),
    (int)this + 20,
    *((unsigned __int8 *)this + 32),
    *((float *)this + 9),
    *((_DWORD *)this + 10),
    *((char *)this + 45),
    0);
  return 1;
}


// ============================================================

// Address: 0x4f3c7a
// Original: _ZNK24CTaskSimpleTriggerLookAt11GetTaskTypeEv
// Demangled: CTaskSimpleTriggerLookAt::GetTaskType(void)
int __fastcall CTaskSimpleTriggerLookAt::GetTaskType(CTaskSimpleTriggerLookAt *this)
{
  return 269;
}


// ============================================================

// Address: 0x4f3c80
// Original: _ZN24CTaskSimpleTriggerLookAt9SerializeEv
// Demangled: CTaskSimpleTriggerLookAt::Serialize(void)
int __fastcall CTaskSimpleTriggerLookAt::Serialize(CTaskSimpleTriggerLookAt *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r5
  int v7; // r0
  CGenericGameStorage *v9; // r6
  int v10; // r2
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CGenericGameStorage *v13; // r5
  int v14; // r2
  CGenericGameStorage *v15; // r5
  __int64 v16; // d16
  int v17; // r2
  int v18; // r2
  int v19; // r6
  CGenericGameStorage *v20; // r5
  int v21; // r2
  CGenericGameStorage *v22; // r5
  int v23; // r2
  int v24; // r2
  int v25; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleTriggerLookAt *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleTriggerLookAt *))(*(_DWORD *)this + 20))(this) == 269 )
  {
    v5 = (CPed *)*((_DWORD *)this + 2);
    if ( v5 && (*((_BYTE *)v5 + 58) & 7) == 3 )
      v6 = GettPoolPedRef(v5);
    else
      v6 = -1;
    if ( UseDataFence )
      AddDataFence();
    v9 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v9 = v6;
    CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v11 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v11 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
    free(v11);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    free(v13);
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(0xCu);
    v16 = *(_QWORD *)((char *)this + 20);
    *((_DWORD *)v15 + 2) = *((_DWORD *)this + 7);
    *(_QWORD *)v15 = v16;
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, &byte_9[3], v17);
    free(v15);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer(
      (CTaskSimpleTriggerLookAt *)((char *)this + 32),
      (char *)&stderr + 1,
      v18);
    v19 = *((_DWORD *)this + 9);
    if ( UseDataFence )
      AddDataFence();
    v20 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v20 = v19;
    CGenericGameStorage::_SaveDataToWorkBuffer(v20, byte_4, v21);
    free(v20);
    if ( UseDataFence )
      AddDataFence();
    v22 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v22 = *((_DWORD *)this + 10);
    CGenericGameStorage::_SaveDataToWorkBuffer(v22, byte_4, v23);
    free(v22);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer(
      (CTaskSimpleTriggerLookAt *)((char *)this + 44),
      (char *)&stderr + 1,
      v24);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskSimpleTriggerLookAt *)((char *)this + 45), (char *)&stderr + 1, v25);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleTriggerLookAt *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(269, v7);
  }
}


// ============================================================
