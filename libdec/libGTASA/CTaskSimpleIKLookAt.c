
// Address: 0x192690
// Original: j__ZN19CTaskSimpleIKLookAt15GetLookAtEntityEv
// Demangled: CTaskSimpleIKLookAt::GetLookAtEntity(void)
// attributes: thunk
int __fastcall CTaskSimpleIKLookAt::GetLookAtEntity(CTaskSimpleIKLookAt *this)
{
  return _ZN19CTaskSimpleIKLookAt15GetLookAtEntityEv(this);
}


// ============================================================

// Address: 0x19c474
// Original: j__ZN19CTaskSimpleIKLookAtC2EPcP7CEntityii5RwV3dhfii
// Demangled: CTaskSimpleIKLookAt::CTaskSimpleIKLookAt(char *,CEntity *,int,int,RwV3d,uchar,float,int,int)
// attributes: thunk
int __fastcall CTaskSimpleIKLookAt::CTaskSimpleIKLookAt(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12)
{
  return _ZN19CTaskSimpleIKLookAtC2EPcP7CEntityii5RwV3dhfii(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}


// ============================================================

// Address: 0x1a0220
// Original: j__ZN19CTaskSimpleIKLookAt16UpdateLookAtInfoEPcP4CPedP7CEntityii5RwV3dhfii
// Demangled: CTaskSimpleIKLookAt::UpdateLookAtInfo(char *,CPed *,CEntity *,int,int,RwV3d,uchar,float,int,int)
// attributes: thunk
int __fastcall CTaskSimpleIKLookAt::UpdateLookAtInfo(
        CEntity **a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11,
        int a12)
{
  return _ZN19CTaskSimpleIKLookAt16UpdateLookAtInfoEPcP4CPedP7CEntityii5RwV3dhfii(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}


// ============================================================

// Address: 0x1a1330
// Original: j__ZN19CTaskSimpleIKLookAt15GetLookAtOffsetEv
// Demangled: CTaskSimpleIKLookAt::GetLookAtOffset(void)
// attributes: thunk
int __fastcall CTaskSimpleIKLookAt::GetLookAtOffset(CTaskSimpleIKLookAt *this)
{
  return _ZN19CTaskSimpleIKLookAt15GetLookAtOffsetEv(this);
}


// ============================================================

// Address: 0x4f01a8
// Original: _ZN19CTaskSimpleIKLookAtC2EPcP7CEntityii5RwV3dhfii
// Demangled: CTaskSimpleIKLookAt::CTaskSimpleIKLookAt(char *,CEntity *,int,int,RwV3d,uchar,float,int,int)
int __fastcall CTaskSimpleIKLookAt::CTaskSimpleIKLookAt(
        int a1,
        int a2,
        CEntity *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        float a10,
        int a11,
        char a12)
{
  char v15; // r0

  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  v15 = 0;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 12) = a11;
  *(_DWORD *)(a1 + 16) = 0;
  *(_WORD *)(a1 + 24) = 5;
  *(_DWORD *)a1 = &off_66A4D8;
  *(_DWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 44) = a5;
  *(_QWORD *)(a1 + 28) = unk_61E5E8;
  *(_DWORD *)(a1 + 56) = a8;
  *(_DWORD *)(a1 + 48) = a6;
  *(_DWORD *)(a1 + 52) = a7;
  *(_BYTE *)(a1 + 88) = a9;
  *(float *)(a1 + 60) = a10;
  *(_DWORD *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 89) = a12;
  *(_DWORD *)(a1 + 84) = 0;
  if ( a3 )
  {
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 40));
    v15 = 1;
  }
  *(_BYTE *)(a1 + 64) = v15;
  return a1;
}


// ============================================================

// Address: 0x4f023c
// Original: _ZN19CTaskSimpleIKLookAtD0Ev
// Demangled: CTaskSimpleIKLookAt::~CTaskSimpleIKLookAt()
void __fastcall CTaskSimpleIKLookAt::~CTaskSimpleIKLookAt(CTaskSimpleIKLookAt *this)
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

// Address: 0x4f0284
// Original: _ZNK19CTaskSimpleIKLookAt5CloneEv
// Demangled: CTaskSimpleIKLookAt::Clone(void)
int __fastcall CTaskSimpleIKLookAt::Clone(CTaskSimpleIKLookAt *this, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // r8
  __int64 v5; // d8
  __int64 v6; // d9
  CEntity *v7; // r6
  int v8; // r10
  __int16 v9; // r11
  char v10; // r0

  v3 = CTask::operator new((CTask *)&dword_5C, a2);
  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)((char *)this + 44);
  v6 = *(_QWORD *)((char *)this + 52);
  v7 = (CEntity *)*((_DWORD *)this + 10);
  v8 = *((_DWORD *)this + 15);
  v9 = *((_WORD *)this + 44);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_WORD *)(v3 + 24) = 5;
  *(_DWORD *)v3 = &off_66A4D8;
  v10 = 0;
  *(_QWORD *)(v3 + 8) = v4;
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 44) = v5;
  *(_QWORD *)(v3 + 52) = v6;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 60) = v8;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 84) = 0;
  *(_WORD *)(v3 + 88) = v9;
  *(_QWORD *)(v3 + 28) = unk_61E5E8;
  *(_DWORD *)(v3 + 40) = v7;
  if ( v7 )
  {
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 40));
    v10 = 1;
  }
  *(_BYTE *)(v3 + 64) = v10;
  if ( *((_DWORD *)this + 4) )
  {
    *(_DWORD *)(v3 + 68) = *((_DWORD *)this + 17);
    *(_DWORD *)(v3 + 72) = *((_DWORD *)this + 18);
    *(_DWORD *)(v3 + 76) = *((_DWORD *)this + 19);
    *(_DWORD *)(v3 + 80) = *((_DWORD *)this + 20);
    *(_WORD *)(v3 + 22) = *((_WORD *)this + 11);
  }
  return v3;
}


// ============================================================

// Address: 0x4f033c
// Original: _ZN19CTaskSimpleIKLookAt13CreateIKChainEP4CPed
// Demangled: CTaskSimpleIKLookAt::CreateIKChain(CPed *)
int __fastcall CTaskSimpleIKLookAt::CreateIKChain(CTaskSimpleIKLookAt *this, CPed *a2)
{
  int v3; // lr
  int v4; // r8
  int v5; // r9
  int v6; // r10
  __int64 v7; // kr00_8
  __int64 v8; // kr08_8
  int v9; // r5
  int v10; // r3
  float v11; // s0
  int v12; // r5
  IKChain_c *v13; // r0
  int v15; // [sp+24h] [bp-2Ch]

  v3 = *((__int16 *)this + 12);
  v4 = *((_DWORD *)this + 7);
  v5 = *((_DWORD *)this + 8);
  v6 = *((_DWORD *)this + 9);
  v7 = *((_QWORD *)this + 5);
  v8 = *((_QWORD *)this + 6);
  v9 = *((_DWORD *)this + 14);
  v10 = *((char *)this + 89);
  v11 = *((float *)this + 15);
  *((_WORD *)this + 11) = 4;
  v15 = v9;
  v12 = 0;
  v13 = (IKChain_c *)IKChainManager_c::AddIKChain(
                       (int)&g_ikChainMan,
                       (int)&byte_61CD7E,
                       0,
                       (int)a2,
                       v3,
                       v4,
                       v5,
                       v6,
                       4,
                       v7,
                       SHIDWORD(v7),
                       v8,
                       SHIDWORD(v8),
                       v15,
                       v11,
                       v10);
  *((_DWORD *)this + 4) = v13;
  if ( v13 )
  {
    IKChain_c::ClampLimits(v13, 5, 0, 1u, 0, 1);
    return 1;
  }
  return v12;
}


// ============================================================

// Address: 0x4f03cc
// Original: _ZN19CTaskSimpleIKLookAt16UpdateLookAtInfoEPcP4CPedP7CEntityii5RwV3dhfii
// Demangled: CTaskSimpleIKLookAt::UpdateLookAtInfo(char *,CPed *,CEntity *,int,int,RwV3d,uchar,float,int,int)
IKChain_c *__fastcall CTaskSimpleIKLookAt::UpdateLookAtInfo(
        CEntity **a1,
        int a2,
        int a3,
        CEntity *a4,
        CEntity *a5,
        CEntity *a6,
        CEntity *a7,
        CEntity *a8,
        CEntity *a9,
        char a10,
        float a11,
        CEntity *a12)
{
  CEntity *v14; // r0
  CEntity **v15; // r6
  char v16; // r0
  IKChain_c *result; // r0
  CEntity *v18; // r1

  v15 = a1 + 10;
  v14 = a1[10];
  if ( v14 )
    CEntity::CleanUpOldReference(v14, v15);
  *v15 = a4;
  if ( a4 )
  {
    CEntity::RegisterReference(a4, v15);
    v16 = 1;
  }
  else
  {
    v16 = 0;
  }
  *((_BYTE *)a1 + 64) = v16;
  a1[11] = a6;
  a1[12] = a7;
  a1[13] = a8;
  a1[14] = a9;
  *((_BYTE *)a1 + 88) = a10;
  *((float *)a1 + 15) = a11;
  a1[2] = a5;
  a1[3] = a12;
  result = a1[4];
  v18 = (CEntity *)((char *)a12 + CTimer::m_snTimeInMilliseconds);
  a1[18] = (CEntity *)((char *)a5 + CTimer::m_snTimeInMilliseconds);
  a1[19] = (CEntity *)1065353216;
  a1[20] = v18;
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

// Address: 0x4f04a8
// Original: _ZN19CTaskSimpleIKLookAt15GetLookAtEntityEv
// Demangled: CTaskSimpleIKLookAt::GetLookAtEntity(void)
int __fastcall CTaskSimpleIKLookAt::GetLookAtEntity(CTaskSimpleIKLookAt *this)
{
  return *((_DWORD *)this + 10);
}


// ============================================================

// Address: 0x4f04ac
// Original: _ZN19CTaskSimpleIKLookAt15GetLookAtOffsetEv
// Demangled: CTaskSimpleIKLookAt::GetLookAtOffset(void)
int __fastcall CTaskSimpleIKLookAt::GetLookAtOffset(int this, int a2)
{
  __int64 v2; // d16

  v2 = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 56);
  *(_QWORD *)this = v2;
  return this;
}


// ============================================================

// Address: 0x4f3c6e
// Original: _ZNK19CTaskSimpleIKLookAt11GetTaskTypeEv
// Demangled: CTaskSimpleIKLookAt::GetTaskType(void)
int __fastcall CTaskSimpleIKLookAt::GetTaskType(CTaskSimpleIKLookAt *this)
{
  return 266;
}


// ============================================================
