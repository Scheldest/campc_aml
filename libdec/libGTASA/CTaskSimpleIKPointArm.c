
// Address: 0x18ae44
// Original: j__ZN21CTaskSimpleIKPointArmC2EPciP7CEntityi5RwV3dfi
// Demangled: CTaskSimpleIKPointArm::CTaskSimpleIKPointArm(char *,int,CEntity *,int,RwV3d,float,int)
// attributes: thunk
int __fastcall CTaskSimpleIKPointArm::CTaskSimpleIKPointArm(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10)
{
  return _ZN21CTaskSimpleIKPointArmC2EPciP7CEntityi5RwV3dfi(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x193b1c
// Original: j__ZN21CTaskSimpleIKPointArm18UpdatePointArmInfoEPcP7CEntityi5RwV3dfi
// Demangled: CTaskSimpleIKPointArm::UpdatePointArmInfo(char *,CEntity *,int,RwV3d,float,int)
// attributes: thunk
int __fastcall CTaskSimpleIKPointArm::UpdatePointArmInfo(
        CEntity **a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9)
{
  return _ZN21CTaskSimpleIKPointArm18UpdatePointArmInfoEPcP7CEntityi5RwV3dfi(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x4efe58
// Original: _ZN21CTaskSimpleIKPointArmD2Ev
// Demangled: CTaskSimpleIKPointArm::~CTaskSimpleIKPointArm()
void __fastcall CTaskSimpleIKPointArm::~CTaskSimpleIKPointArm(CTaskSimpleIKPointArm *this)
{
  IKChain_c *v2; // r1
  CEntity *v3; // r0

  v2 = (IKChain_c *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66A4A0;
  if ( v2 )
    IKChainManager_c::RemoveIKChain((IKChainManager_c *)&g_ikChainMan, v2);
  v3 = (CEntity *)*((_DWORD *)this + 10);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 10);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4f04bc
// Original: _ZN21CTaskSimpleIKPointArmC2EPciP7CEntityi5RwV3dfi
// Demangled: CTaskSimpleIKPointArm::CTaskSimpleIKPointArm(char *,int,CEntity *,int,RwV3d,float,int)
int __fastcall CTaskSimpleIKPointArm::CTaskSimpleIKPointArm(
        int a1,
        int a2,
        int a3,
        CEntity *a4,
        __int64 a5,
        int a6,
        int a7,
        float a8,
        int a9)
{
  char v12; // r0
  __int16 v13; // r3

  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  v12 = 0;
  *(_DWORD *)(a1 + 88) = a3;
  *(_DWORD *)(a1 + 12) = a9;
  *(_DWORD *)(a1 + 16) = 0;
  v13 = 34;
  if ( !a3 )
    v13 = 24;
  *(_WORD *)(a1 + 24) = v13;
  *(_DWORD *)a1 = &off_66A510;
  *(_DWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 28) = unk_61E5F8;
  *(_QWORD *)(a1 + 44) = a5;
  *(_DWORD *)(a1 + 52) = a6;
  *(_DWORD *)(a1 + 56) = a7;
  *(_DWORD *)(a1 + 68) = 0;
  *(float *)(a1 + 60) = a8;
  *(_DWORD *)(a1 + 8) = "gledCollisionBoxSectorListER8CPtrListRK4CBoxRK7CMatrixRK7CVectorPssPP7CEntity";
  *(_DWORD *)(a1 + 84) = 0;
  if ( a4 )
  {
    CEntity::RegisterReference(a4, (CEntity **)(a1 + 40));
    v12 = 1;
  }
  *(_BYTE *)(a1 + 64) = v12;
  return a1;
}


// ============================================================

// Address: 0x4f0550
// Original: _ZN21CTaskSimpleIKPointArmD0Ev
// Demangled: CTaskSimpleIKPointArm::~CTaskSimpleIKPointArm()
void __fastcall CTaskSimpleIKPointArm::~CTaskSimpleIKPointArm(CTaskSimpleIKPointArm *this)
{
  IKChain_c *v2; // r1
  CEntity *v3; // r0
  void *v4; // r0

  v2 = (IKChain_c *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66A4A0;
  if ( v2 )
    IKChainManager_c::RemoveIKChain((IKChainManager_c *)&g_ikChainMan, v2);
  v3 = (CEntity *)*((_DWORD *)this + 10);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 10);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f0598
// Original: _ZNK21CTaskSimpleIKPointArm5CloneEv
// Demangled: CTaskSimpleIKPointArm::Clone(void)
int __fastcall CTaskSimpleIKPointArm::Clone(CTaskSimpleIKPointArm *this, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // d8
  __int64 v5; // d9
  int v6; // r8
  CEntity *v7; // r10
  int v8; // r9
  int v9; // r6
  __int16 v10; // r1
  char v11; // r0

  v3 = CTask::operator new((CTask *)&dword_5C, a2);
  v4 = *(_QWORD *)((char *)this + 44);
  v5 = *(_QWORD *)((char *)this + 52);
  v6 = *((_DWORD *)this + 3);
  v7 = (CEntity *)*((_DWORD *)this + 10);
  v8 = *((_DWORD *)this + 15);
  v9 = *((_DWORD *)this + 22);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  v10 = 34;
  if ( !v9 )
    v10 = 24;
  *(_DWORD *)(v3 + 88) = v9;
  *(_WORD *)(v3 + 24) = v10;
  v11 = 0;
  *(_DWORD *)(v3 + 12) = v6;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_66A510;
  *(_QWORD *)(v3 + 44) = v4;
  *(_QWORD *)(v3 + 52) = v5;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 60) = v8;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 8) = 999999;
  *(_DWORD *)(v3 + 84) = 0;
  *(_QWORD *)(v3 + 28) = unk_61E5F8;
  *(_DWORD *)(v3 + 40) = v7;
  if ( v7 )
  {
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 40));
    v11 = 1;
  }
  *(_BYTE *)(v3 + 64) = v11;
  if ( *((_DWORD *)this + 4) )
  {
    *(_DWORD *)(v3 + 68) = *((_DWORD *)this + 17);
    *(_DWORD *)(v3 + 72) = *((_DWORD *)this + 18);
    *(_DWORD *)(v3 + 76) = *((_DWORD *)this + 19);
    *(_DWORD *)(v3 + 80) = *((_DWORD *)this + 20);
  }
  return v3;
}


// ============================================================

// Address: 0x4f0654
// Original: _ZN21CTaskSimpleIKPointArm13CreateIKChainEP4CPed
// Demangled: CTaskSimpleIKPointArm::CreateIKChain(CPed *)
bool __fastcall CTaskSimpleIKPointArm::CreateIKChain(CTaskSimpleIKPointArm *this, CPed *a2)
{
  int v3; // lr
  int v4; // r8
  __int64 v5; // kr00_8
  int v6; // r1
  int v7; // r5
  int v8; // r6
  __int64 v9; // r2
  int v10; // r0
  float v11; // s0
  int v12; // r2
  int v13; // r0
  __int64 v15; // [sp+1Ch] [bp-34h]

  v3 = *((_DWORD *)this + 22);
  v4 = *((__int16 *)this + 12);
  v5 = *(_QWORD *)((char *)this + 28);
  v6 = *((_DWORD *)this + 9);
  v7 = *((_DWORD *)this + 10);
  v8 = *((_DWORD *)this + 11);
  v9 = *((_QWORD *)this + 6);
  v10 = *((_DWORD *)this + 14);
  v11 = *((float *)this + 15);
  *((_WORD *)this + 11) = 4;
  v15 = v9;
  v12 = 2;
  if ( !v3 )
    v12 = 1;
  v13 = IKChainManager_c::AddIKChain(
          (int)&g_ikChainMan,
          (int)&byte_61CD7E,
          v12,
          (int)a2,
          v4,
          v5,
          SHIDWORD(v5),
          v6,
          4,
          v7,
          v8,
          v15,
          SHIDWORD(v15),
          v10,
          v11,
          3);
  *((_DWORD *)this + 4) = v13;
  return v13 != 0;
}


// ============================================================

// Address: 0x4f06d8
// Original: _ZN21CTaskSimpleIKPointArm18UpdatePointArmInfoEPcP7CEntityi5RwV3dfi
// Demangled: CTaskSimpleIKPointArm::UpdatePointArmInfo(char *,CEntity *,int,RwV3d,float,int)
IKChain_c *__fastcall CTaskSimpleIKPointArm::UpdatePointArmInfo(
        CEntity **a1,
        int a2,
        CEntity *a3,
        CEntity *a4,
        __int64 a5,
        CEntity *a6,
        float a7,
        CEntity *a8)
{
  CEntity *v10; // r0
  CEntity **v11; // r5
  char v13; // r0
  IKChain_c *result; // r0
  CEntity *v15; // r1

  v11 = a1 + 10;
  v10 = a1[10];
  if ( v10 )
    CEntity::CleanUpOldReference(v10, v11);
  *v11 = a3;
  if ( a3 )
  {
    CEntity::RegisterReference(a3, v11);
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  *((_BYTE *)a1 + 64) = v13;
  a1[11] = a4;
  *((_QWORD *)a1 + 6) = a5;
  a1[14] = a6;
  a1[3] = a8;
  *((float *)a1 + 15) = a7;
  result = a1[4];
  v15 = (CEntity *)((char *)a8 + CTimer::m_snTimeInMilliseconds);
  a1[18] = (CEntity *)&aZn6cworld51fin[CTimer::m_snTimeInMilliseconds + 37];
  a1[19] = (CEntity *)1065353216;
  a1[20] = v15;
  a1[21] = 0;
  if ( result )
  {
    IKChain_c::UpdateEntity(result, a1[10]);
    IKChain_c::UpdateOffset((int)a1[4], (int)a1[11], (int)a1[12], (int)a1[13], (int)a1[14]);
    return (IKChain_c *)sub_197C00(a1[4], 1u);
  }
  return result;
}


// ============================================================

// Address: 0x4f07a4
// Original: _ZN21CTaskSimpleIKPointArm16GetPointAtEntityEv
// Demangled: CTaskSimpleIKPointArm::GetPointAtEntity(void)
int __fastcall CTaskSimpleIKPointArm::GetPointAtEntity(CTaskSimpleIKPointArm *this)
{
  return *((_DWORD *)this + 10);
}


// ============================================================

// Address: 0x4f3c74
// Original: _ZNK21CTaskSimpleIKPointArm11GetTaskTypeEv
// Demangled: CTaskSimpleIKPointArm::GetTaskType(void)
int __fastcall CTaskSimpleIKPointArm::GetTaskType(CTaskSimpleIKPointArm *this)
{
  return 272;
}


// ============================================================
