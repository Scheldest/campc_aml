
// Address: 0x18bd2c
// Original: j__ZN18CTaskSimpleIKChain8BlendOutEi
// Demangled: CTaskSimpleIKChain::BlendOut(int)
// attributes: thunk
int __fastcall CTaskSimpleIKChain::BlendOut(CTaskSimpleIKChain *this, int a2)
{
  return _ZN18CTaskSimpleIKChain8BlendOutEi(this, a2);
}


// ============================================================

// Address: 0x19d548
// Original: j__ZN18CTaskSimpleIKChain10GetIKChainEv
// Demangled: CTaskSimpleIKChain::GetIKChain(void)
// attributes: thunk
int __fastcall CTaskSimpleIKChain::GetIKChain(CTaskSimpleIKChain *this)
{
  return _ZN18CTaskSimpleIKChain10GetIKChainEv(this);
}


// ============================================================

// Address: 0x4efd90
// Original: _ZN18CTaskSimpleIKChain8BlendOutEi
// Demangled: CTaskSimpleIKChain::BlendOut(int)
_DWORD *__fastcall CTaskSimpleIKChain::BlendOut(_DWORD *this, int a2)
{
  int v2; // r2

  if ( !this[21] )
  {
    if ( this[2] == -1 )
      this[2] = 0;
    v2 = CTimer::m_snTimeInMilliseconds;
    this[21] = 1;
    this[18] = a2 + v2;
  }
  return this;
}


// ============================================================

// Address: 0x4efdd0
// Original: _ZN18CTaskSimpleIKChainC2EPci5RwV3diP7CEntityiS1_fii
// Demangled: CTaskSimpleIKChain::CTaskSimpleIKChain(char *,int,RwV3d,int,CEntity *,int,RwV3d,float,int,int)
// local variable allocation has failed, the output may be wrong!
int __fastcall CTaskSimpleIKChain::CTaskSimpleIKChain(
        int a1,
        int a2,
        __int16 a3,
        int a4,
        int a5,
        int a6,
        __int16 a7,
        CEntity *a8,
        __int64 a9,
        int a10,
        int a11,
        float a12,
        int a13,
        int a14)
{
  char v17; // r0

  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)&a13;
  *(_WORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a4;
  *(_DWORD *)(a1 + 36) = a6;
  *(_DWORD *)(a1 + 32) = a5;
  *(_WORD *)(a1 + 22) = a7;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 44) = a9;
  *(_DWORD *)(a1 + 52) = a10;
  *(_DWORD *)(a1 + 56) = a11;
  *(_DWORD *)a1 = &off_66A4A0;
  *(_DWORD *)(a1 + 40) = a8;
  *(float *)(a1 + 60) = a12;
  if ( a8 )
  {
    CEntity::RegisterReference(a8, (CEntity **)(a1 + 40));
    v17 = 1;
  }
  else
  {
    v17 = 0;
  }
  *(_DWORD *)(a1 + 84) = 0;
  *(_BYTE *)(a1 + 64) = v17;
  return a1;
}


// ============================================================

// Address: 0x4efe9c
// Original: _ZN18CTaskSimpleIKChainD0Ev
// Demangled: CTaskSimpleIKChain::~CTaskSimpleIKChain()
void __fastcall CTaskSimpleIKChain::~CTaskSimpleIKChain(CTaskSimpleIKChain *this)
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

// Address: 0x4efee4
// Original: _ZNK18CTaskSimpleIKChain5CloneEv
// Demangled: CTaskSimpleIKChain::Clone(void)
int __fastcall CTaskSimpleIKChain::Clone(CTaskSimpleIKChain *this, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // r8
  __int64 v5; // kr00_8
  CEntity *v6; // r6
  __int64 v7; // d8
  __int64 v8; // d9
  char v9; // r0
  int v11; // [sp+4h] [bp-3Ch]
  int v12; // [sp+8h] [bp-38h]
  int v13; // [sp+Ch] [bp-34h]

  v3 = CTask::operator new((CTask *)&dword_58, a2);
  v4 = *((_QWORD *)this + 1);
  v13 = *(_DWORD *)((char *)this + 22);
  v5 = *(_QWORD *)((char *)this + 28);
  v11 = *((_DWORD *)this + 9);
  v6 = (CEntity *)*((_DWORD *)this + 10);
  v12 = *((_DWORD *)this + 15);
  v7 = *(_QWORD *)((char *)this + 44);
  v8 = *(_QWORD *)((char *)this + 52);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_QWORD *)(v3 + 44) = v7;
  *(_QWORD *)(v3 + 52) = v8;
  *(_QWORD *)(v3 + 8) = v4;
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 28) = v5;
  *(_DWORD *)(v3 + 36) = v11;
  *(_DWORD *)(v3 + 22) = v13;
  *(_DWORD *)(v3 + 60) = v12;
  *(_DWORD *)v3 = &off_66A4A0;
  *(_DWORD *)(v3 + 40) = v6;
  if ( v6 )
  {
    CEntity::RegisterReference(v6, (CEntity **)(v3 + 40));
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  *(_DWORD *)(v3 + 84) = 0;
  *(_BYTE *)(v3 + 64) = v9;
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

// Address: 0x4eff9c
// Original: _ZN18CTaskSimpleIKChain13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleIKChain::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleIKChain::MakeAbortable(CTaskSimpleIKChain *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r1

  if ( a3 == 2 )
    return 1;
  if ( *((_DWORD *)this + 21) )
    return 0;
  if ( *((_DWORD *)this + 2) == -1 )
    *((_DWORD *)this + 2) = 0;
  v5 = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)this + 21) = 1;
  *((_DWORD *)this + 18) = v5 + 250;
  return 0;
}


// ============================================================

// Address: 0x4effd0
// Original: _ZN18CTaskSimpleIKChain13CreateIKChainEP4CPed
// Demangled: CTaskSimpleIKChain::CreateIKChain(CPed *)
bool __fastcall CTaskSimpleIKChain::CreateIKChain(CTaskSimpleIKChain *this, CPed *a2)
{
  int v3; // r0

  v3 = IKChainManager_c::AddIKChain(
         (int)&g_ikChainMan,
         (int)&byte_61CD7E,
         3,
         (int)a2,
         *((__int16 *)this + 12),
         *((_DWORD *)this + 7),
         *((_DWORD *)this + 8),
         *((_DWORD *)this + 9),
         *((__int16 *)this + 11),
         *((_DWORD *)this + 10),
         *((_DWORD *)this + 11),
         *((_DWORD *)this + 12),
         *((_DWORD *)this + 13),
         *((_DWORD *)this + 14),
         *((float *)this + 15),
         3);
  *((_DWORD *)this + 4) = v3;
  return v3 != 0;
}


// ============================================================

// Address: 0x4f0044
// Original: _ZN18CTaskSimpleIKChain10GetIKChainEv
// Demangled: CTaskSimpleIKChain::GetIKChain(void)
int __fastcall CTaskSimpleIKChain::GetIKChain(CTaskSimpleIKChain *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x4f0048
// Original: _ZN18CTaskSimpleIKChain10ProcessPedEP4CPed
// Demangled: CTaskSimpleIKChain::ProcessPed(CPed *)
int __fastcall CTaskSimpleIKChain::ProcessPed(CTaskSimpleIKChain *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d3
  IKChain_c *v6; // r1
  int v7; // s16
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r0
  unsigned __int32 v12; // r0
  int v13; // r3
  float v14; // r1
  IKChain_c *v15; // r0
  int v16; // lr
  int v18; // r0

  v6 = (IKChain_c *)*((_DWORD *)this + 4);
  v7 = (int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
  if ( v6 )
  {
    v8 = CTimer::m_snTimeInMilliseconds;
    v9 = *((_DWORD *)this + 2);
    if ( v9 != -1 && CTimer::m_snTimeInMilliseconds > *((_DWORD *)this + 18) )
    {
      IKChainManager_c::RemoveIKChain((IKChainManager_c *)&g_ikChainMan, v6);
      *((_DWORD *)this + 4) = 0;
      return 1;
    }
    if ( !*((_BYTE *)this + 64)
      || *((_DWORD *)this + 10)
      || (*((_BYTE *)this + 64) = 0, IKChain_c::UpdateTarget(v6, 0), v9 = *((_DWORD *)this + 2), *((_DWORD *)this + 21)) )
    {
      if ( v9 == -1 )
      {
LABEL_11:
        v11 = *((_DWORD *)this + 20);
        if ( v11 >= v8 )
        {
          v3.n64_u32[0] = 1.0;
          v2.n64_f32[0] = (float)v7 / (float)(v11 - (v7 + v8));
          v2.n64_f32[0] = *((float *)this + 17)
                        + (float)(vmin_f32(v2, v3).n64_f32[0] * (float)(*((float *)this + 19) - *((float *)this + 17)));
          *((_DWORD *)this + 17) = v2.n64_u32[0];
        }
        else
        {
          v12 = *((_DWORD *)this + 19);
          *((_DWORD *)this + 17) = v12;
          v2.n64_u32[0] = v12;
        }
        v14 = v2.n64_f32[0];
        v15 = (IKChain_c *)*((_DWORD *)this + 4);
        goto LABEL_22;
      }
    }
    else
    {
      if ( v9 == -1 )
        *((_DWORD *)this + 2) = 0;
      v18 = CTimer::m_snTimeInMilliseconds;
      *((_DWORD *)this + 21) = 1;
      *((_DWORD *)this + 18) = v18 + 250;
    }
    v10 = *((_DWORD *)this + 18);
    if ( v8 >= v10 - *((_DWORD *)this + 3) )
    {
      *((_DWORD *)this + 19) = 0;
      *((_DWORD *)this + 20) = v10;
    }
    goto LABEL_11;
  }
  if ( *((_BYTE *)this + 64) && !*((_DWORD *)this + 10)
    || !(*(int (__fastcall **)(CTaskSimpleIKChain *, CPed *))(*(_DWORD *)this + 44))(this, a2) )
  {
    return 1;
  }
  v13 = *((_DWORD *)this + 2);
  v14 = *((float *)this + 17);
  v15 = (IKChain_c *)*((_DWORD *)this + 4);
  v16 = *((_DWORD *)this + 3) + CTimer::m_snTimeInMilliseconds;
  if ( v13 != -1 )
    v13 += CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)this + 18) = v13;
  *((_DWORD *)this + 19) = 1065353216;
  *((_DWORD *)this + 20) = v16;
LABEL_22:
  IKChain_c::SetBlend(v15, v14);
  return 0;
}


// ============================================================

// Address: 0x4f2080
// Original: _ZNK18CTaskSimpleIKChain11GetTaskTypeEv
// Demangled: CTaskSimpleIKChain::GetTaskType(void)
int __fastcall CTaskSimpleIKChain::GetTaskType(CTaskSimpleIKChain *this)
{
  return 264;
}


// ============================================================
