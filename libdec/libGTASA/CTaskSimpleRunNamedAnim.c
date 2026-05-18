
// Address: 0x18ae00
// Original: j__ZN23CTaskSimpleRunNamedAnim10CreateTaskEv
// Demangled: CTaskSimpleRunNamedAnim::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleRunNamedAnim::CreateTask(CTaskSimpleRunNamedAnim *this)
{
  return _ZN23CTaskSimpleRunNamedAnim10CreateTaskEv(this);
}


// ============================================================

// Address: 0x18c9ec
// Original: j__ZN23CTaskSimpleRunNamedAnim9StartAnimEP4CPed
// Demangled: CTaskSimpleRunNamedAnim::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleRunNamedAnim::StartAnim(CTaskSimpleRunNamedAnim *this, CPed *a2)
{
  return _ZN23CTaskSimpleRunNamedAnim9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1959f8
// Original: j__ZN23CTaskSimpleRunNamedAnimC2EPKcS1_ifibbbb
// Demangled: CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(char const*,char const*,int,float,int,bool,bool,bool,bool)
// attributes: thunk
void __fastcall CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(
        CTaskSimpleRunNamedAnim *this,
        const char *a2,
        const char *a3,
        int a4,
        float a5,
        int a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10)
{
  _ZN23CTaskSimpleRunNamedAnimC2EPKcS1_ifibbbb(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x1964a0
// Original: j__ZN23CTaskSimpleRunNamedAnim10ProcessPedEP4CPed
// Demangled: CTaskSimpleRunNamedAnim::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleRunNamedAnim::ProcessPed(CTaskSimpleRunNamedAnim *this, CPed *a2)
{
  return _ZN23CTaskSimpleRunNamedAnim10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1a12d4
// Original: j__ZN23CTaskSimpleRunNamedAnimC2EPKcS1_ifibbbb_0
// Demangled: CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(char const*,char const*,int,float,int,bool,bool,bool,bool)
// attributes: thunk
void __fastcall CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(
        CTaskSimpleRunNamedAnim *this,
        const char *a2,
        const char *a3,
        int a4,
        float a5,
        int a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10)
{
  _ZN23CTaskSimpleRunNamedAnimC2EPKcS1_ifibbbb(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x491f9c
// Original: _ZN23CTaskSimpleRunNamedAnim10CreateTaskEv
// Demangled: CTaskSimpleRunNamedAnim::CreateTask(void)
int __fastcall CTaskSimpleRunNamedAnim::CreateTask(CTaskSimpleRunNamedAnim *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  int v10; // r2
  char v11; // r4
  const char *v12; // r1
  int AnimationBlock; // r0
  unsigned int v14; // r1
  int v15; // r4
  CTaskSimpleRunNamedAnim *v16; // r0
  int v17; // r0
  _BYTE v19[4]; // [sp+18h] [bp-40h] BYREF
  float v20; // [sp+1Ch] [bp-3Ch] BYREF
  int v21; // [sp+20h] [bp-38h] BYREF
  char v22[16]; // [sp+24h] [bp-34h] BYREF
  char v23[24]; // [sp+34h] [bp-24h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, &off_18, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, &word_10, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, byte_4, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, byte_4, v8);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, byte_4, v10);
  AnimationBlock = CAnimManager::GetAnimationBlock((CAnimManager *)v22, v12);
  if ( !AnimationBlock )
    return 0;
  v15 = 0;
  if ( *(_BYTE *)(AnimationBlock + 16) )
  {
    v16 = (CTaskSimpleRunNamedAnim *)CTask::operator new((CTask *)&dword_64, v14);
    CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(v16, v23, v22, v21, v20, -1, 0, 0, 0, 0);
    return v17;
  }
  return v15;
}


// ============================================================

// Address: 0x4d6d34
// Original: _ZN23CTaskSimpleRunNamedAnimC2EPKcS1_ifibbbb
// Demangled: CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(char const*,char const*,int,float,int,bool,bool,bool,bool)
void __fastcall CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(
        CTaskSimpleRunNamedAnim *this,
        const char *a2,
        const char *a3,
        int a4,
        float a5,
        int a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10)
{
  int Animation; // r5
  char v15; // r1
  const char *v16; // r1

  CTaskSimple::CTaskSimple(this);
  Animation = 0;
  *((_DWORD *)this + 16) = a6;
  v15 = *((_BYTE *)this + 12);
  *((_DWORD *)this + 2) = 0;
  *((float *)this + 14) = a5;
  *((_WORD *)this + 38) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = a4;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *(_DWORD *)this = &off_669500;
  *((_BYTE *)this + 12) = (16 * a8) | (2 * a7) | (32 * a9) | v15 & 0x88 | (4 * a10);
  strcpy((char *)this + 13, a2);
  strcpy((char *)this + 37, a3);
  if ( CAnimManager::GetAnimationBlock((CTaskSimpleRunNamedAnim *)((char *)this + 37), v16) )
    Animation = CAnimManager::GetAnimation();
  *((_DWORD *)this + 15) = Animation;
}


// ============================================================

// Address: 0x4d6dcc
// Original: _ZN23CTaskSimpleRunNamedAnim10ProcessPedEP4CPed
// Demangled: CTaskSimpleRunNamedAnim::ProcessPed(CPed *)
int __fastcall CTaskSimpleRunNamedAnim::ProcessPed(CTaskSimpleRunNamedAnim *this, const CVector **a2)
{
  int v4; // r0
  const CVector *v5; // r0
  float *v6; // r1
  float v7; // s4
  float v8; // s6
  int v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r1
  int Association; // r6
  const CVector *v13; // r1
  char *v14; // r2
  float32x2_t v15; // d16
  unsigned __int64 v16; // d1
  CAnimBlendAssociation *v17; // r0
  char v18; // r0
  int v20; // r0
  bool v21; // zf
  float v22; // [sp+4h] [bp-1Ch] BYREF
  float32x2_t v23; // [sp+8h] [bp-18h]

  v4 = *((unsigned __int8 *)this + 12);
  if ( (v4 & 0x40) != 0 )
  {
    CEntity::UpdateRpHAnim((CEntity *)a2);
    a2[7] = (const CVector *)((unsigned int)a2[7] | 0x800000);
    Multiply3x3((const CMatrix *)&v22, a2[5]);
    v5 = a2[5];
    v6 = (float *)((char *)v5 + 48);
    if ( !v5 )
      v6 = (float *)(a2 + 1);
    v7 = v6[1];
    v8 = v6[2];
    *v6 = v22 + *v6;
    v6[1] = v23.n64_f32[0] + v7;
    v6[2] = v23.n64_f32[1] + v8;
    v4 = *((_BYTE *)this + 12) & 0xBF;
    *((_BYTE *)this + 12) = v4;
  }
  if ( v4 << 31 )
  {
    if ( (v4 & 0x20) == 0 )
    {
      Association = RpAnimBlendClumpGetAssociation();
      v22 = 0.0;
      v23.n64_u64[0] = 0LL;
      CPed::GetBonePosition((CEntity *)a2);
      if ( Association )
      {
        if ( *((float *)this + 14) > 100.0 )
        {
          v13 = a2[5];
          v14 = (char *)v13 + 48;
          if ( !v13 )
            v14 = (char *)(a2 + 1);
          v15.n64_u64[0] = vsub_f32(*(float32x2_t *)(v14 + 4), v23).n64_u64[0];
          v16 = vmul_f32(v15, v15).n64_u64[0];
          if ( sqrtf(
                 (float)((float)((float)(*(float *)v14 - v22) * (float)(*(float *)v14 - v22)) + *(float *)&v16)
               + *((float *)&v16 + 1)) > 1.0 )
          {
            *(_WORD *)(Association + 46) |= 4u;
            *(float *)(Association + 28) = -*((float *)this + 14);
          }
        }
      }
    }
    return 1;
  }
  v9 = *((_DWORD *)this + 15);
  if ( !v9 || !*(_DWORD *)(v9 + 4) )
    return 1;
  if ( (v4 & 2) != 0 && (*((_DWORD *)this + 23) & 0xA) != 8 )
  {
    CEventGroup::RemoveInvalidEvents((const CVector *)((char *)a2[272] + 104), 1);
    CEventGroup::Reorganise((const CVector *)((char *)a2[272] + 104));
  }
  if ( !*((_BYTE *)this + 76)
    || (!*((_BYTE *)this + 77)
      ? (v11 = *((_DWORD *)this + 17), v10 = CTimer::m_snTimeInMilliseconds)
      : (v10 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 77) = 0, *((_DWORD *)this + 17) = v10, v11 = v10),
        v11 + *((_DWORD *)this + 18) > v10) )
  {
LABEL_28:
    if ( !*((_DWORD *)this + 2) )
    {
      v20 = RpAnimBlendClumpGetAssociation();
      v21 = v20 == 0;
      if ( v20 )
        v21 = *(_DWORD *)(v20 + 56) == 0;
      if ( !v21 )
        return 1;
      CTaskSimpleRunNamedAnim::StartAnim(this, (CPed *)a2);
    }
    return *((_BYTE *)this + 12) & 1;
  }
  if ( (*((_BYTE *)this + 92) & 8) != 0 )
  {
    (*(void (__fastcall **)(CTaskSimpleRunNamedAnim *, const CVector **, _DWORD, _DWORD))(*(_DWORD *)this + 28))(
      this,
      a2,
      0,
      0);
    goto LABEL_28;
  }
  v17 = (CAnimBlendAssociation *)*((_DWORD *)this + 2);
  if ( v17 )
    CAnimBlendAssociation::SetFinishCallback(
      v17,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v18 = *((_BYTE *)this + 12);
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = v18 | 1;
  return 1;
}


// ============================================================

// Address: 0x4d6fc8
// Original: _ZN23CTaskSimpleRunNamedAnim17OffsetPedPositionEP4CPed
// Demangled: CTaskSimpleRunNamedAnim::OffsetPedPosition(CPed *)
int __fastcall CTaskSimpleRunNamedAnim::OffsetPedPosition(CTaskSimpleRunNamedAnim *this, const CVector **a2)
{
  const CVector *v4; // r0
  float *v5; // r1
  float v6; // s4
  float v7; // s6
  int result; // r0
  float v9[5]; // [sp+4h] [bp-14h] BYREF

  CEntity::UpdateRpHAnim((CEntity *)a2);
  a2[7] = (const CVector *)((unsigned int)a2[7] | 0x800000);
  Multiply3x3((const CMatrix *)v9, a2[5]);
  v4 = a2[5];
  v5 = (float *)((char *)v4 + 48);
  if ( !v4 )
    v5 = (float *)(a2 + 1);
  v6 = v5[1];
  v7 = v5[2];
  *v5 = v9[0] + *v5;
  v5[1] = v9[1] + v6;
  v5[2] = v9[2] + v7;
  result = *((_BYTE *)this + 12) & 0xBF;
  *((_BYTE *)this + 12) = result;
  return result;
}


// ============================================================

// Address: 0x4d7034
// Original: _ZN23CTaskSimpleRunNamedAnim9StartAnimEP4CPed
// Demangled: CTaskSimpleRunNamedAnim::StartAnim(CPed *)
int __fastcall CTaskSimpleRunNamedAnim::StartAnim(CTaskSimpleRunNamedAnim *this, CPed *a2)
{
  int v3; // r0
  int v4; // r2
  int v5; // r2
  CAnimBlendAssociation *v6; // r0
  char v7; // r1
  void (**v8)(CAnimBlendAssociation *, void *); // r1
  int result; // r0

  v3 = *((_DWORD *)this + 16);
  if ( v3 >= 0 )
  {
    v4 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 76) = 1;
    *((_DWORD *)this + 17) = v4;
    *((_DWORD *)this + 18) = v3;
  }
  v5 = *((_DWORD *)this + 23);
  if ( (v5 & 8) == 0 )
    *((_DWORD *)this + 23) = v5 | 4;
  v6 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation();
  v7 = *((_BYTE *)this + 12);
  *((_DWORD *)this + 2) = v6;
  if ( (v7 & 0x20) != 0 )
  {
    v8 = (void (**)(CAnimBlendAssociation *, void *))&CTaskSimpleRunNamedAnim::FinishRunAnimMovePedCB;
LABEL_11:
    CAnimBlendAssociation::SetFinishCallback(v6, *v8, this);
    goto LABEL_12;
  }
  if ( (v7 & 0x10) != 0 || (*((_DWORD *)this + 23) & 8) != 0 )
  {
    v8 = (void (**)(CAnimBlendAssociation *, void *))&CTaskSimpleAnim::FinishRunAnimCB;
    goto LABEL_11;
  }
  CAnimBlendAssociation::SetDeleteCallback(
    v6,
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB,
    this);
LABEL_12:
  result = *(unsigned __int16 *)(*((_DWORD *)this + 2) + 44);
  *((_WORD *)this + 48) = result;
  return result;
}


// ============================================================

// Address: 0x4d70bc
// Original: _ZN23CTaskSimpleRunNamedAnim22FinishRunAnimMovePedCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleRunNamedAnim::FinishRunAnimMovePedCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleRunNamedAnim::FinishRunAnimMovePedCB(
        CTaskSimpleRunNamedAnim *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  CAnimBlendNode *Node; // r0
  __int16 v6; // r0
  int v7; // r0
  int result; // r0

  Node = (CAnimBlendNode *)CAnimBlendAssociation::GetNode(this, 0);
  CAnimBlendNode::GetCurrentTranslation(Node, (CAnimBlendAssociation *)((char *)a2 + 80), 0.0);
  *((_BYTE *)a2 + 12) |= 0x40u;
  v6 = *((_WORD *)this + 23);
  *((_WORD *)this + 23) = v6 | 0x2000;
  if ( (v6 & 8) == 0 && *((_DWORD *)this + 12) != 2 )
    return sub_192A28(this, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB, a2);
  v7 = *((unsigned __int8 *)a2 + 12);
  *((_DWORD *)a2 + 2) = 0;
  result = v7 | 1;
  *((_BYTE *)a2 + 12) = result;
  return result;
}


// ============================================================

// Address: 0x4d7e08
// Original: _ZN23CTaskSimpleRunNamedAnimD0Ev
// Demangled: CTaskSimpleRunNamedAnim::~CTaskSimpleRunNamedAnim()
void __fastcall CTaskSimpleRunNamedAnim::~CTaskSimpleRunNamedAnim(CTaskSimpleRunNamedAnim *this)
{
  CAnimBlendAssociation *v2; // r0
  int v3; // r0
  void *v4; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_669498;
  if ( v2 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *(_WORD *)(*((_DWORD *)this + 2) + 46) |= 4u;
    if ( (*((_BYTE *)this + 12) & 4) == 0 )
    {
      v3 = *((_DWORD *)this + 2);
      if ( *(float *)(v3 + 24) > 0.0 && *(float *)(v3 + 28) >= 0.0 )
        *(_DWORD *)(v3 + 28) = -1065353216;
    }
    *((_DWORD *)this + 2) = 0;
  }
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4d7e78
// Original: _ZNK23CTaskSimpleRunNamedAnim5CloneEv
// Demangled: CTaskSimpleRunNamedAnim::Clone(void)
void __fastcall CTaskSimpleRunNamedAnim::Clone(CTaskSimpleRunNamedAnim *this, unsigned int a2)
{
  CTaskSimpleRunNamedAnim *v3; // r0

  v3 = (CTaskSimpleRunNamedAnim *)CTask::operator new((CTask *)&dword_64, a2);
  CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(
    v3,
    (const char *)this + 13,
    (const char *)this + 37,
    *((_DWORD *)this + 23),
    *((float *)this + 14),
    *((_DWORD *)this + 16),
    (*((_BYTE *)this + 12) & 2) != 0,
    (*((_BYTE *)this + 12) & 0x10) != 0,
    (*((_BYTE *)this + 12) & 0x20) != 0,
    (*((_BYTE *)this + 12) & 4) != 0);
}


// ============================================================

// Address: 0x4d7ec0
// Original: _ZNK23CTaskSimpleRunNamedAnim11GetTaskTypeEv
// Demangled: CTaskSimpleRunNamedAnim::GetTaskType(void)
int __fastcall CTaskSimpleRunNamedAnim::GetTaskType(CTaskSimpleRunNamedAnim *this)
{
  return 401;
}


// ============================================================

// Address: 0x4d7ec8
// Original: _ZN23CTaskSimpleRunNamedAnim9SerializeEv
// Demangled: CTaskSimpleRunNamedAnim::Serialize(void)
void __fastcall CTaskSimpleRunNamedAnim::Serialize(CTaskSimpleRunNamedAnim *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  int v9; // r6
  CGenericGameStorage *v10; // r5
  int v11; // r2
  CGenericGameStorage *v12; // r5
  int v13; // r2
  int v14; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleRunNamedAnim *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleRunNamedAnim *))(*(_DWORD *)this + 20))(this) == 401 )
  {
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CTaskSimpleRunNamedAnim *)((char *)this + 13), &off_18, v5);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CTaskSimpleRunNamedAnim *)((char *)this + 37), &word_10, v6);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v7 = *((_DWORD *)this + 23);
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
    free(v7);
    v9 = *((_DWORD *)this + 14);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = v9;
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    free(v10);
    if ( UseDataFence )
      AddDataFence();
    v12 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v12 = *((_DWORD *)this + 16);
    CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
    j_free(v12);
  }
  else
  {
    v14 = (*(int (__fastcall **)(CTaskSimpleRunNamedAnim *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(401, v14);
  }
}


// ============================================================
