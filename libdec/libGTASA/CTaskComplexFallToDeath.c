
// Address: 0x18c3e4
// Original: j__ZN23CTaskComplexFallToDeath10CreateTaskEv
// Demangled: CTaskComplexFallToDeath::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexFallToDeath::CreateTask(CTaskComplexFallToDeath *this)
{
  return _ZN23CTaskComplexFallToDeath10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19c498
// Original: j__ZN23CTaskComplexFallToDeathC2EiRK7CVectorbb
// Demangled: CTaskComplexFallToDeath::CTaskComplexFallToDeath(int,CVector const&,bool,bool)
// attributes: thunk
void __fastcall CTaskComplexFallToDeath::CTaskComplexFallToDeath(
        CTaskComplexFallToDeath *this,
        int a2,
        const CVector *a3,
        bool a4,
        bool a5)
{
  _ZN23CTaskComplexFallToDeathC2EiRK7CVectorbb(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19df8c
// Original: j__ZN23CTaskComplexFallToDeath8CalcFallEP4CPedRiRb
// Demangled: CTaskComplexFallToDeath::CalcFall(CPed *,int &,bool &)
// attributes: thunk
int __fastcall CTaskComplexFallToDeath::CalcFall(CTaskComplexFallToDeath *this, CPed *a2, int *a3, bool *a4)
{
  return _ZN23CTaskComplexFallToDeath8CalcFallEP4CPedRiRb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x491bf4
// Original: _ZN23CTaskComplexFallToDeath10CreateTaskEv
// Demangled: CTaskComplexFallToDeath::CreateTask(void)
void __fastcall CTaskComplexFallToDeath::CreateTask(CTaskComplexFallToDeath *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  unsigned int v10; // r1
  CTaskComplexFallToDeath *v11; // r0
  char v12; // r2
  char v13; // [sp+7h] [bp-19h] BYREF
  _BYTE v14[13]; // [sp+8h] [bp-18h] BYREF
  unsigned __int8 v15; // [sp+15h] [bp-Bh] BYREF
  _BYTE v16[10]; // [sp+16h] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 1, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, &byte_9[3], v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, (char *)&stderr + 1, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 1, v8);
  v11 = (CTaskComplexFallToDeath *)CTask::operator new((CTask *)&dword_24, v10);
  v12 = v16[0];
  if ( v16[0] )
    v12 = 1;
  CTaskComplexFallToDeath::CTaskComplexFallToDeath(v11, v15, (const CVector *)v14, v13 != 0, v12);
}


// ============================================================

// Address: 0x52ceb0
// Original: _ZN23CTaskComplexFallToDeathC2EiRK7CVectorbb
// Demangled: CTaskComplexFallToDeath::CTaskComplexFallToDeath(int,CVector const&,bool,bool)
void __fastcall CTaskComplexFallToDeath::CTaskComplexFallToDeath(
        CTaskComplexFallToDeath *this,
        char a2,
        const CVector *a3,
        bool a4,
        bool a5)
{
  int v8; // r0
  __int64 v9; // d16
  char v10; // r1

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)v8 = &off_66CB58;
  v9 = *(_QWORD *)a3;
  v10 = *(_BYTE *)(v8 + 33) & 0xE0 | (16 * a5) | (8 * a4);
  *(_DWORD *)(v8 + 20) = *((_DWORD *)a3 + 2);
  *(_DWORD *)(v8 + 24) = -1;
  *(_DWORD *)(v8 + 28) = -1;
  *(_BYTE *)(v8 + 32) = a2;
  *(_BYTE *)(v8 + 33) = v10;
  *(_QWORD *)(v8 + 12) = v9;
}


// ============================================================

// Address: 0x52cf04
// Original: _ZN23CTaskComplexFallToDeathD2Ev
// Demangled: CTaskComplexFallToDeath::~CTaskComplexFallToDeath()
// attributes: thunk
void __fastcall CTaskComplexFallToDeath::~CTaskComplexFallToDeath(CTaskComplexFallToDeath *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x52cf08
// Original: _ZN23CTaskComplexFallToDeathD0Ev
// Demangled: CTaskComplexFallToDeath::~CTaskComplexFallToDeath()
void __fastcall CTaskComplexFallToDeath::~CTaskComplexFallToDeath(CTaskComplexFallToDeath *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x52cf18
// Original: _ZN23CTaskComplexFallToDeath13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFallToDeath::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFallToDeath::MakeAbortable(
        CTaskComplexFallToDeath *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int Association; // r0
  int v7; // r0

  if ( a3 != 2 )
    return 0;
  if ( *((_DWORD *)this + 6) != -1 )
  {
    Association = RpAnimBlendClumpGetAssociation();
    if ( Association )
      *(_DWORD *)(Association + 28) = -998637568;
  }
  if ( *((_DWORD *)this + 7) != -1 )
  {
    v7 = RpAnimBlendClumpGetAssociation();
    if ( v7 )
      *(_DWORD *)(v7 + 28) = -998637568;
  }
  return 1;
}


// ============================================================

// Address: 0x52cf5c
// Original: _ZN23CTaskComplexFallToDeath18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFallToDeath::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFallToDeath::CreateFirstSubTask(CTaskComplexFallToDeath *this, CPed *a2)
{
  int *v4; // r0
  float v5; // s0
  float v6; // s2
  int v7; // lr
  int v8; // r6
  int v9; // r8
  int v10; // r3
  int *v11; // r1
  unsigned int v12; // r0
  unsigned int v13; // r2
  CTaskSimple *v14; // r0
  int result; // r0
  char v16; // r3

  v4 = (int *)&CTaskComplexFallToDeath::ms_NoRailingVerticalForce;
  v5 = *((float *)this + 3) * CTaskComplexFallToDeath::ms_LateralForceMagnitude;
  v6 = *((float *)this + 4) * CTaskComplexFallToDeath::ms_LateralForceMagnitude;
  v7 = *((_DWORD *)a2 + 290);
  v8 = *((_DWORD *)a2 + 291);
  v9 = *((_DWORD *)a2 + 292);
  if ( (*((_BYTE *)this + 33) & 8) != 0 )
    v4 = &CTaskComplexFallToDeath::ms_OverRailingVerticalForce;
  v10 = *v4;
  *((_DWORD *)a2 + 289) &= ~1u;
  *((_DWORD *)a2 + 290) = v7;
  *((_DWORD *)a2 + 291) = v8;
  *((_DWORD *)a2 + 292) = v9;
  CPhysical::ApplyMoveForce(a2, LODWORD(v5), LODWORD(v6), v10);
  v12 = *((char *)this + 32);
  if ( v12 > 3 )
  {
    v13 = *((_DWORD *)this + 6);
    if ( v13 <= 3 )
      CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v13);
  }
  else
  {
    v11 = dword_52D054;
    *((_DWORD *)this + 6) = dword_52D054[v12];
  }
  v14 = (CTaskSimple *)CTask::operator new((CTask *)&off_3C, (unsigned int)v11);
  CTaskSimple::CTaskSimple(v14);
  *(_DWORD *)(result + 50) = 0;
  *(_DWORD *)(result + 46) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  v16 = *(_BYTE *)(result + 36);
  *(_DWORD *)result = &off_66CAF0;
  *(_BYTE *)(result + 36) = v16 & 0xF8 | 2;
  *(_DWORD *)(result + 44) = CTimer::m_snTimeInMilliseconds;
  *(_DWORD *)(result + 48) = 500;
  *(_BYTE *)(result + 52) = 1;
  return result;
}


// ============================================================

// Address: 0x52d06c
// Original: _ZN23CTaskComplexFallToDeath17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFallToDeath::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexFallToDeath::CreateNextSubTask(CTaskComplexFallToDeath *this, CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  float v6; // s16
  CTaskSimple *v7; // r0
  int v8; // r0
  char v9; // r1
  char v10; // r1
  unsigned int v11; // r1
  bool v12; // zf
  CTaskSimple *v13; // r0
  int v14; // r0
  char v15; // r5
  int Association; // r0
  unsigned int v17; // r1
  CTaskSimpleDead *v18; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 == 242 )
  {
    if ( (*((_BYTE *)this + 33) & 1) != 0 || fabsf(*((float *)a2 + 20)) < 0.01 )
      goto LABEL_13;
    v11 = *((_DWORD *)a2 + 354);
    v12 = v11 == 0;
    if ( v11 )
    {
      v11 = *(_BYTE *)(v11 + 58) & 7;
      v12 = v11 == 1;
    }
    if ( v12 )
    {
      *((_BYTE *)this + 33) |= 1u;
      v13 = (CTaskSimple *)CTask::operator new((CTask *)&off_3C, v11);
      CTaskSimple::CTaskSimple(v13);
      *(_DWORD *)(v14 + 50) = 0;
      *(_DWORD *)(v14 + 46) = 0;
      *(_DWORD *)(v14 + 40) = 0;
      *(_DWORD *)(v14 + 44) = 0;
      *(_DWORD *)(v14 + 56) = 0;
      v15 = *(_BYTE *)(v14 + 36);
      *(_DWORD *)v14 = &off_66CAF0;
      *(_DWORD *)(v14 + 28) = 0;
      *(_DWORD *)(v14 + 32) = 0;
      *(_BYTE *)(v14 + 36) = v15 & 0xF8 | 2;
      *(_DWORD *)(v14 + 44) = CTimer::m_snTimeInMilliseconds;
      *(_DWORD *)(v14 + 48) = 500;
      *(_BYTE *)(v14 + 52) = 1;
    }
    else
    {
LABEL_13:
      if ( (*((_BYTE *)this + 33) & 4) == 0 )
      {
        if ( *((_DWORD *)this + 6) != -1 )
        {
          Association = RpAnimBlendClumpGetAssociation();
          if ( Association )
            *(_DWORD *)(Association + 28) = -998637568;
        }
        *((_DWORD *)this + 7) = 24;
        CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x18u);
      }
      CPedIntelligence::ClearTasks(*((CPedIntelligence **)a2 + 272), 0, 1);
      v18 = (CTaskSimpleDead *)CTask::operator new((CTask *)&word_10, v17);
      CTaskSimpleDead::CTaskSimpleDead(v18, CTimer::m_snTimeInMilliseconds, 0);
    }
  }
  else if ( v4 == 241 )
  {
    v6 = *((float *)a2 + 20);
    v7 = (CTaskSimple *)CTask::operator new((CTask *)&dword_14, v5);
    CTaskSimple::CTaskSimple(v7);
    *(_DWORD *)(v8 + 8) = 0;
    *(_DWORD *)v8 = &off_66CB24;
    v9 = *(_BYTE *)(v8 + 16);
    if ( fabsf(v6) >= 0.1 )
    {
      *(_DWORD *)(v8 + 12) = 24;
      *(_BYTE *)(v8 + 16) = v9 & 0xF8 | 4;
      v10 = *((_BYTE *)this + 33) | 4;
    }
    else
    {
      *(_DWORD *)(v8 + 12) = -1;
      *(_BYTE *)(v8 + 16) = v9 & 0xF8 | 6;
      v10 = *((_BYTE *)this + 33) & 0xFB;
    }
    *((_BYTE *)this + 33) = v10;
  }
}


// ============================================================

// Address: 0x52d1fc
// Original: _ZN23CTaskComplexFallToDeath14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFallToDeath::ControlSubTask(CPed *)
int __fastcall CTaskComplexFallToDeath::ControlSubTask(CTaskComplexFallToDeath *this, CPed *a2)
{
  char v4; // r0
  int v5; // r4
  int v6; // r1
  int Association; // r0
  unsigned int v8; // r1
  int v9; // r0
  char v10; // r2

  v4 = *((_BYTE *)this + 33);
  v5 = *((_DWORD *)this + 2);
  if ( (*((_DWORD *)a2 + 17) & 0x100) == 0 || (v4 & 2) != 0 )
  {
    if ( (v4 & 3) == 1
      && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 20))(*((_DWORD *)this + 2)) != 218
      && fabsf(*((float *)a2 + 20)) < 0.01 )
    {
      v6 = *((_DWORD *)this + 6);
      *((_BYTE *)this + 33) |= 6u;
      if ( v6 != -1 )
      {
        Association = RpAnimBlendClumpGetAssociation();
        if ( Association )
          *(_DWORD *)(Association + 28) = -998637568;
      }
      v8 = *((_DWORD *)this + 7);
      if ( v8 != -1 )
      {
        v9 = RpAnimBlendClumpGetAssociation();
        if ( v9 )
        {
          v8 = -998637568;
          *(_DWORD *)(v9 + 28) = -998637568;
        }
      }
      v5 = CTask::operator new((CTask *)&dword_14, v8);
      CTaskSimple::CTaskSimple((CTaskSimple *)v5);
      *(_DWORD *)(v5 + 8) = 0;
      v10 = *(_BYTE *)(v5 + 16);
      *(_DWORD *)(v5 + 12) = 24;
      *(_DWORD *)v5 = &off_66CB24;
      *(_BYTE *)(v5 + 16) = v10 & 0xF8 | 4;
    }
  }
  else
  {
    *((_BYTE *)this + 33) = v4 | 2;
    *((_DWORD *)a2 + 290) |= 0x80000u;
    v5 = CTask::operator new((CTask *)&word_28, 0);
    CTaskComplexDie::CTaskComplexDie(v5, 53, 0, 140, 4.0, 1.0, 0, 0, 0, 0);
  }
  return v5;
}


// ============================================================

// Address: 0x52d300
// Original: _ZN23CTaskComplexFallToDeath8CalcFallEP4CPedRiRb
// Demangled: CTaskComplexFallToDeath::CalcFall(CPed *,int &,bool &)
int __fastcall CTaskComplexFallToDeath::CalcFall(CTaskComplexFallToDeath *this, CPed *a2, int *a3, bool *a4)
{
  float v4; // s20
  float v5; // s22
  float v6; // s24
  int v8; // r5
  float *v9; // r8
  int v10; // r9
  int v11; // r0
  int v12; // r1
  int v13; // r9
  int v14; // r0
  int v15; // r1
  int v16; // r9
  int v17; // r0
  int v18; // r1
  int v19; // r9
  int v20; // r0
  int v21; // r1
  int v22; // r9
  int v23; // r0
  int v24; // r1
  int v25; // r9
  int v26; // r0
  int v27; // r1
  int v28; // r9
  int v29; // r0
  int v30; // r1
  int v31; // r9
  int v32; // r0
  int v33; // r1
  int v34; // r10
  float *v35; // r9
  int v36; // r0
  float v37; // s0
  float v38; // s2
  float v39; // s4
  int v40; // r0
  float *v41; // r1
  float v42; // s2
  float v43; // s4
  float *v44; // r1
  int v45; // r0
  float v46; // s4
  float v47; // s2
  int v50; // r1
  float v51; // s0
  float v52; // s4
  char IsLineOfSightClear; // r0
  char v54; // [sp+14h] [bp-BCh]
  _BYTE *v55; // [sp+14h] [bp-BCh]
  float v57[3]; // [sp+24h] [bp-ACh] BYREF
  __int64 v58; // [sp+30h] [bp-A0h] BYREF
  float v59; // [sp+38h] [bp-98h]
  float v60[3]; // [sp+3Ch] [bp-94h] BYREF
  float v61; // [sp+48h] [bp-88h] BYREF
  float v62; // [sp+4Ch] [bp-84h]
  float v63; // [sp+50h] [bp-80h]
  float v64; // [sp+54h] [bp-7Ch] BYREF
  float v65; // [sp+58h] [bp-78h]
  float v66; // [sp+5Ch] [bp-74h]
  _QWORD v67[14]; // [sp+60h] [bp-70h]

  if ( *((unsigned __int8 *)this + 1157) << 31 )
    return 0;
  v8 = 0;
  if ( !(*((unsigned __int8 *)this + 69) << 31) )
  {
    v54 = (char)a3;
    v9 = (float *)*((_DWORD *)this + 5);
    v67[0] = unk_61E938;
    v67[1] = unk_61E940;
    v10 = rand() & 3;
    v11 = rand() & 3;
    v12 = *((_DWORD *)v67 + v10);
    *((_DWORD *)v67 + v10) = *((_DWORD *)v67 + v11);
    *((_DWORD *)v67 + v11) = v12;
    v13 = rand() & 3;
    v14 = rand() & 3;
    v15 = *((_DWORD *)v67 + v13);
    *((_DWORD *)v67 + v13) = *((_DWORD *)v67 + v14);
    *((_DWORD *)v67 + v14) = v15;
    v16 = rand() & 3;
    v17 = rand() & 3;
    v18 = *((_DWORD *)v67 + v16);
    *((_DWORD *)v67 + v16) = *((_DWORD *)v67 + v17);
    *((_DWORD *)v67 + v17) = v18;
    v19 = rand() & 3;
    v20 = rand() & 3;
    v21 = *((_DWORD *)v67 + v19);
    *((_DWORD *)v67 + v19) = *((_DWORD *)v67 + v20);
    *((_DWORD *)v67 + v20) = v21;
    v22 = rand() & 3;
    v23 = rand() & 3;
    v24 = *((_DWORD *)v67 + v22);
    *((_DWORD *)v67 + v22) = *((_DWORD *)v67 + v23);
    *((_DWORD *)v67 + v23) = v24;
    v25 = rand() & 3;
    v26 = rand() & 3;
    v27 = *((_DWORD *)v67 + v25);
    *((_DWORD *)v67 + v25) = *((_DWORD *)v67 + v26);
    *((_DWORD *)v67 + v26) = v27;
    v28 = rand() & 3;
    v29 = rand() & 3;
    v30 = *((_DWORD *)v67 + v28);
    *((_DWORD *)v67 + v28) = *((_DWORD *)v67 + v29);
    *((_DWORD *)v67 + v29) = v30;
    v31 = rand() & 3;
    v32 = rand() & 3;
    v33 = *((_DWORD *)v67 + v31);
    v34 = 0;
    *((_DWORD *)v67 + v31) = *((_DWORD *)v67 + v32);
    v35 = (float *)((char *)this + 4);
    *((_DWORD *)v67 + v32) = v33;
    while ( 1 )
    {
      v36 = *((_DWORD *)v67 + v34);
      *(_DWORD *)a2 = v36;
      switch ( v36 )
      {
        case 0:
          v6 = v9[4];
          v5 = v9[5];
          v4 = v9[6];
          break;
        case 1:
          v37 = *v9;
          v38 = v9[1];
          v39 = v9[2];
          goto LABEL_8;
        case 2:
          v37 = v9[4];
          v38 = v9[5];
          v39 = v9[6];
LABEL_8:
          v4 = -v39;
          v5 = -v38;
          v6 = -v37;
          break;
        case 3:
          v6 = *v9;
          v5 = v9[1];
          v4 = v9[2];
          break;
        default:
          break;
      }
      v40 = *((_DWORD *)this + 5);
      v41 = (float *)((char *)this + 4);
      if ( v40 )
        v41 = (float *)(v40 + 48);
      v42 = v41[1] + 0.0;
      v43 = (float)(CTaskComplexFallToDeath::ms_PedChestHeightOffset + v41[2])
          + (float)(v4 * CTaskComplexFallToDeath::ms_NearEdgeDist);
      v64 = (float)(*v41 + 0.0) + (float)(v6 * CTaskComplexFallToDeath::ms_NearEdgeDist);
      v65 = v42 + (float)(v5 * CTaskComplexFallToDeath::ms_NearEdgeDist);
      v61 = v64;
      v66 = v43;
      v62 = v65;
      v63 = v43 - CTaskComplexFallToDeath::ms_FallVerticalDistance;
      if ( CWorld::GetIsLineOfSightClear(
             (CWorld *)&v64,
             (const CVector *)&v61,
             (const CVector *)((char *)&stderr + 1),
             1,
             0,
             1,
             0,
             0,
             0,
             v54) == 1 )
      {
        v44 = (float *)((char *)this + 4);
        v61 = (float)(v6 * 0.7) + v64;
        v62 = (float)(v5 * 0.7) + v65;
        v63 = (float)(v4 * 0.7) + v66;
        v45 = *((_DWORD *)this + 5);
        if ( v45 )
          v44 = (float *)(v45 + 48);
        v46 = v44[2];
        v47 = v44[1] + 0.0;
        v60[0] = *v44 + 0.0;
        v60[1] = v47;
        v60[2] = CTaskComplexFallToDeath::ms_PedChestHeightOffset + v46;
        if ( CWorld::GetIsLineOfSightClear(
               (CWorld *)&v61,
               (const CVector *)v60,
               (const CVector *)((char *)&stderr + 1),
               1,
               0,
               1,
               0,
               0,
               0,
               v54) )
        {
          break;
        }
      }
      if ( v34++ >= 1 )
        return 0;
    }
    v8 = 1;
    v50 = *((_DWORD *)this + 5);
    if ( v50 )
      v35 = (float *)(v50 + 48);
    v51 = v35[2] - CTaskComplexFallToDeath::ms_PedShinHeightOffset;
    v58 = *(_QWORD *)v35;
    v59 = v51;
    v52 = (float)(v5 * 0.7) + (float)(v35[1] + (float)(v5 * CTaskComplexFallToDeath::ms_NearEdgeDist));
    v57[0] = (float)(v6 * 0.7) + (float)((float)(v6 * CTaskComplexFallToDeath::ms_NearEdgeDist) + *(float *)&v58);
    v57[1] = v52;
    v57[2] = (float)(v4 * 0.7) + (float)(v51 + (float)(v4 * CTaskComplexFallToDeath::ms_NearEdgeDist));
    IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                           (CWorld *)&v58,
                           (const CVector *)v57,
                           (const CVector *)((char *)&stderr + 1),
                           1,
                           0,
                           1,
                           0,
                           0,
                           0,
                           v54);
    *v55 = IsLineOfSightClear ^ 1;
  }
  return v8;
}


// ============================================================

// Address: 0x532f80
// Original: _ZNK23CTaskComplexFallToDeath5CloneEv
// Demangled: CTaskComplexFallToDeath::Clone(void)
int __fastcall CTaskComplexFallToDeath::Clone(CTaskComplexFallToDeath *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  char v4; // r5
  char v5; // r6
  int result; // r0
  __int64 v7; // r2
  __int64 v8; // d16
  char v9; // r1

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *((_BYTE *)this + 32);
  v5 = *((_BYTE *)this + 33);
  CTaskComplex::CTaskComplex(v3);
  HIDWORD(v7) = -1;
  *(_DWORD *)result = &off_66CB58;
  v8 = *(_QWORD *)((char *)this + 12);
  LODWORD(v7) = *((_DWORD *)this + 5);
  v9 = *(_BYTE *)(result + 33) & 0xE0;
  *(_QWORD *)(result + 20) = v7;
  *(_DWORD *)(result + 28) = -1;
  *(_BYTE *)(result + 32) = v4;
  *(_BYTE *)(result + 33) = v9 | v5 & 0x18;
  *(_QWORD *)(result + 12) = v8;
  return result;
}


// ============================================================

// Address: 0x532fdc
// Original: _ZNK23CTaskComplexFallToDeath11GetTaskTypeEv
// Demangled: CTaskComplexFallToDeath::GetTaskType(void)
int __fastcall CTaskComplexFallToDeath::GetTaskType(CTaskComplexFallToDeath *this)
{
  return 277;
}


// ============================================================

// Address: 0x532fe4
// Original: _ZN23CTaskComplexFallToDeath9SerializeEv
// Demangled: CTaskComplexFallToDeath::Serialize(void)
int __fastcall CTaskComplexFallToDeath::Serialize(CTaskComplexFallToDeath *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  CGenericGameStorage *v6; // r5
  __int64 v7; // d16
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v12; // r0
  bool v13; // [sp+6h] [bp-12h] BYREF
  bool v14[17]; // [sp+7h] [bp-11h] BYREF

  v2 = (*(int (__fastcall **)(CTaskComplexFallToDeath *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexFallToDeath *))(*(_DWORD *)this + 20))(this) == 277 )
  {
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CTaskComplexFallToDeath *)((char *)this + 32), (char *)&stderr + 1, v5);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(0xCu);
    v7 = *(_QWORD *)((char *)this + 12);
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 5);
    *(_QWORD *)v6 = v7;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, &byte_9[3], v8);
    free(v6);
    v14[0] = (*((_BYTE *)this + 33) & 8) != 0;
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 1, v9);
    v13 = (*((_BYTE *)this + 33) & 0x10) != 0;
    if ( UseDataFence )
      AddDataFence();
    return CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)&v13, (char *)&stderr + 1, v10);
  }
  else
  {
    v12 = (*(int (__fastcall **)(CTaskComplexFallToDeath *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(277, v12);
  }
}


// ============================================================
