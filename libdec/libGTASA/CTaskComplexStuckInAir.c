
// Address: 0x193388
// Original: j__ZN22CTaskComplexStuckInAirC2Ev
// Demangled: CTaskComplexStuckInAir::CTaskComplexStuckInAir(void)
// attributes: thunk
void __fastcall CTaskComplexStuckInAir::CTaskComplexStuckInAir(CTaskComplexStuckInAir *this)
{
  _ZN22CTaskComplexStuckInAirC2Ev(this);
}


// ============================================================

// Address: 0x5323b4
// Original: _ZN22CTaskComplexStuckInAirC2Ev
// Demangled: CTaskComplexStuckInAir::CTaskComplexStuckInAir(void)
void __fastcall CTaskComplexStuckInAir::CTaskComplexStuckInAir(CTaskComplexStuckInAir *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  *v1 = &off_66CC6C;
}


// ============================================================

// Address: 0x5323cc
// Original: _ZN22CTaskComplexStuckInAirD2Ev
// Demangled: CTaskComplexStuckInAir::~CTaskComplexStuckInAir()
// attributes: thunk
void __fastcall CTaskComplexStuckInAir::~CTaskComplexStuckInAir(CTaskComplexStuckInAir *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5323d0
// Original: _ZN22CTaskComplexStuckInAirD0Ev
// Demangled: CTaskComplexStuckInAir::~CTaskComplexStuckInAir()
void __fastcall CTaskComplexStuckInAir::~CTaskComplexStuckInAir(CTaskComplexStuckInAir *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5323e0
// Original: _ZN22CTaskComplexStuckInAir13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexStuckInAir::CreateSubTask(int,CPed *)
void __fastcall CTaskComplexStuckInAir::CreateSubTask(CTaskComplexStuckInAir *this, int a2, CPed *a3)
{
  CTaskComplex *v4; // r0
  _DWORD *v5; // r0
  float *v6; // r0
  float *v7; // r1
  float v8; // s18
  float v9; // s20
  float v10; // s16
  char v11; // r0
  float *v12; // r1
  float v13; // s2
  float v14; // s4
  float v15; // s0
  float v16; // s4
  float v17; // s2
  float v18; // s0
  CTaskSimpleStandStill *v19; // r0
  int v20; // r0
  unsigned int v21; // r1
  CTaskComplex *v22; // r0
  int v23; // r0
  CTaskComplexFleePoint *v24; // r0
  float v25; // [sp+4h] [bp-34h] BYREF
  float v26; // [sp+8h] [bp-30h]
  float v27; // [sp+Ch] [bp-2Ch]

  if ( a2 > 210 )
  {
    if ( a2 == 211 )
    {
      v20 = *((_DWORD *)a3 + 272);
      v21 = *((_DWORD *)a3 + 289) | 1;
      *((_DWORD *)a3 + 289) = v21;
      *(_DWORD *)(v20 + 628) = 0;
      v22 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, v21);
      CTaskComplex::CTaskComplex(v22);
      *(_DWORD *)(v23 + 12) = -1;
      *(_DWORD *)v23 = &off_66CBC8;
      *(_BYTE *)(v23 + 16) = 0;
    }
    else if ( a2 == 908 )
    {
      *((_DWORD *)a3 + 289) |= 1u;
      v6 = (float *)*((_DWORD *)a3 + 5);
      v7 = v6 + 12;
      if ( !v6 )
        v7 = (float *)((char *)a3 + 4);
      v8 = *v7 - (float)(v6[4] * 0.5);
      v9 = v7[1] - (float)(v6[5] * 0.5);
      v10 = v7[2] - (float)(v6[6] * 0.5);
      v26 = v9;
      v25 = v8;
      v27 = v10;
      v11 = rand();
      v12 = (float *)*((_DWORD *)a3 + 5);
      v13 = *v12 * 0.5;
      v14 = v12[1] * 0.5;
      v15 = v12[2] * 0.5;
      if ( (v11 & 1) != 0 )
      {
        v16 = v14 + v9;
        v17 = v13 + v8;
        v18 = v15 + v10;
      }
      else
      {
        v16 = v9 - v14;
        v17 = v8 - v13;
        v18 = v10 - v15;
      }
      v26 = v16;
      v25 = v17;
      v27 = v18;
      v24 = (CTaskComplexFleePoint *)CTask::operator new((CTask *)&off_3C, (unsigned int)v12);
      CTaskComplexFleePoint::CTaskComplexFleePoint(v24, (const CVector *)&v25, 0, 5.0, 10000);
    }
  }
  else if ( a2 == 203 )
  {
    *((_DWORD *)a3 + 289) |= 1u;
    v19 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0xCBu);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v19, 5000, 0, 0, 8.0);
  }
  else if ( a2 == 208 )
  {
    *(_DWORD *)(*((_DWORD *)a3 + 272) + 628) = 0;
    v4 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, 0xD0u);
    CTaskComplex::CTaskComplex(v4);
    *v5 = &off_66CA3C;
    v5[3] = 26;
    v5[4] = 0;
    v5[5] = 1000;
  }
}


// ============================================================

// Address: 0x53255c
// Original: _ZN22CTaskComplexStuckInAir17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexStuckInAir::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexStuckInAir::CreateNextSubTask(CTaskComplexStuckInAir *this, CPed *a2)
{
  int v3; // r0
  int v4; // r1
  CTaskComplexStuckInAir *v5; // r0

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v3 <= 210 )
  {
    if ( v3 == 203 )
    {
      v5 = (CTaskComplexStuckInAir *)*(unsigned __int16 *)(*((_DWORD *)a2 + 272) + 630);
      if ( *(_WORD *)(*((_DWORD *)a2 + 272) + 630) )
      {
        v5 = (CTaskComplexStuckInAir *)*((_DWORD *)a2 + 273);
        v4 = 203;
        if ( !v5 )
          v4 = 211;
      }
      else
      {
        v4 = 1302;
      }
      goto LABEL_19;
    }
    if ( v3 != 208 )
      return;
LABEL_7:
    v4 = 203;
    v5 = (CTaskComplexStuckInAir *)*(unsigned __int16 *)(*((_DWORD *)a2 + 272) + 630);
    if ( !*(_WORD *)(*((_DWORD *)a2 + 272) + 630) )
      v4 = 1302;
LABEL_19:
    CTaskComplexStuckInAir::CreateSubTask(v5, v4, a2);
    return;
  }
  if ( v3 == 211 )
  {
    v5 = (CTaskComplexStuckInAir *)*(unsigned __int16 *)(*((_DWORD *)a2 + 272) + 630);
    if ( *(_WORD *)(*((_DWORD *)a2 + 272) + 630) )
    {
      v4 = 203;
    }
    else
    {
      v5 = (CTaskComplexStuckInAir *)*((_DWORD *)a2 + 273);
      v4 = 1302;
      if ( !v5 )
        v4 = 908;
    }
    goto LABEL_19;
  }
  if ( v3 == 908 )
    goto LABEL_7;
}


// ============================================================

// Address: 0x5325dc
// Original: _ZN22CTaskComplexStuckInAir18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexStuckInAir::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexStuckInAir::CreateFirstSubTask(CTaskComplexStuckInAir *this, CPed *a2)
{
  int v3; // r2
  int v4; // r1

  v3 = *(unsigned __int16 *)(*((_DWORD *)a2 + 272) + 630);
  v4 = 203;
  if ( v3 == 2 )
    v4 = 208;
  CTaskComplexStuckInAir::CreateSubTask(a2, v4, a2);
}


// ============================================================

// Address: 0x5325f4
// Original: _ZN22CTaskComplexStuckInAir14ControlSubTaskEP4CPed
// Demangled: CTaskComplexStuckInAir::ControlSubTask(CPed *)
int __fastcall CTaskComplexStuckInAir::ControlSubTask(CTaskComplexStuckInAir *this, CPed *a2)
{
  int v4; // r6
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r0
  CPad *PadFromPlayer; // r8
  int PedWalkLeftRight; // r9
  int PedWalkUpDown; // r0
  float v11; // r0
  int v12; // r0
  unsigned int v13; // r1
  int Association; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  float v26; // [sp+0h] [bp-20h]

  v4 = *((_DWORD *)this + 2);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
  if ( v5 > 210 )
  {
    if ( v5 == 211 )
    {
      if ( !*(_WORD *)(*((_DWORD *)a2 + 272) + 630) )
        goto LABEL_52;
      if ( !(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 12))(*((_DWORD *)this + 2)) )
        goto LABEL_52;
      v20 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 12))(*((_DWORD *)this + 2));
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 20))(v20) != 241 )
      {
        v21 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 12))(*((_DWORD *)this + 2));
        if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21) )
          goto LABEL_52;
        v22 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 12))(*((_DWORD *)this + 2));
        v23 = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v23 + 20))(v23) != 241 )
          goto LABEL_52;
      }
    }
    else if ( v5 != 908 || !*(_WORD *)(*((_DWORD *)a2 + 272) + 630) )
    {
      goto LABEL_52;
    }
    *((_DWORD *)a2 + 289) |= 1u;
    v4 = CTask::operator new((CTask *)&dword_20, v6);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v4, 5000, 0, 0, 8.0);
    goto LABEL_52;
  }
  if ( v5 == 203 )
  {
    if ( *(_WORD *)(*((_DWORD *)a2 + 272) + 630) )
    {
      if ( *((_DWORD *)a2 + 273) )
      {
        PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
        PedWalkLeftRight = CPad::GetPedWalkLeftRight(PadFromPlayer);
        PedWalkUpDown = CPad::GetPedWalkUpDown(PadFromPlayer);
        if ( PedWalkUpDown | PedWalkLeftRight )
        {
          v11 = COERCE_FLOAT(CGeneral::GetRadianAngleBetweenPoints(0, 0.0, -(float)PedWalkLeftRight, (float)PedWalkUpDown, v26));
          *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(
                                    COERCE_CGENERAL_(v11 - unk_9520F4),
                                    COERCE_FLOAT(&TheCamera));
        }
        if ( CPad::JumpJustDown(PadFromPlayer) == 1 )
        {
          v12 = *((_DWORD *)a2 + 272);
          v13 = *((_DWORD *)a2 + 289) | 1;
          *((_DWORD *)a2 + 289) = v13;
          *(_DWORD *)(v12 + 628) = 0;
          v4 = CTask::operator new((CTask *)&dword_14, v13);
          CTaskComplex::CTaskComplex((CTaskComplex *)v4);
          *(_DWORD *)(v4 + 12) = -1;
          *(_DWORD *)v4 = &off_66CBC8;
          *(_BYTE *)(v4 + 16) = 0;
        }
      }
      *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289) & 0xFFFFFDFE | 1;
      Association = RpAnimBlendClumpGetAssociation();
      if ( Association && *(float *)(Association + 24) > 0.0 && *(float *)(Association + 28) >= 0.0 )
        *(_DWORD *)(Association + 28) = -1056964608;
      v15 = RpAnimBlendClumpGetAssociation();
      if ( v15 && *(float *)(v15 + 24) > 0.0 && *(float *)(v15 + 28) >= 0.0 )
        *(_DWORD *)(v15 + 28) = -1056964608;
      v16 = RpAnimBlendClumpGetAssociation();
      if ( v16 && *(float *)(v16 + 24) > 0.0 && *(float *)(v16 + 28) >= 0.0 )
        *(_DWORD *)(v16 + 28) = -1056964608;
      v17 = RpAnimBlendClumpGetAssociation();
      if ( v17 && *(float *)(v17 + 24) > 0.0 && *(float *)(v17 + 28) >= 0.0 )
        *(_DWORD *)(v17 + 28) = -1056964608;
      v18 = RpAnimBlendClumpGetAssociation();
      if ( v18 && *(float *)(v18 + 24) > 0.0 && *(float *)(v18 + 28) >= 0.0 )
        *(_DWORD *)(v18 + 28) = -1056964608;
      v19 = RpAnimBlendClumpGetAssociation();
      if ( v19 && *(float *)(v19 + 24) > 0.0 && *(float *)(v19 + 28) >= 0.0 )
        *(_DWORD *)(v19 + 28) = -1056964608;
    }
    else
    {
      v4 = 0;
    }
  }
  else if ( v5 == 208 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 12))(*((_DWORD *)this + 2)) )
    {
      v7 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 12))(*((_DWORD *)this + 2));
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == 207
        && *(_BYTE *)((*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 12))(*((_DWORD *)this + 2)) + 8)
        && *(_WORD *)(*((_DWORD *)a2 + 272) + 630) )
      {
        *((_DWORD *)a2 + 289) |= 1u;
      }
    }
  }
LABEL_52:
  v24 = *((_DWORD *)this + 2);
  if ( v4 != v24 )
    (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v24 + 28))(v24, a2, 1, 0);
  return v4;
}


// ============================================================

// Address: 0x5337a8
// Original: _ZNK22CTaskComplexStuckInAir5CloneEv
// Demangled: CTaskComplexStuckInAir::Clone(void)
_DWORD *__fastcall CTaskComplexStuckInAir::Clone(CTaskComplexStuckInAir *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskComplex::CTaskComplex(v2);
  *result = &off_66CC6C;
  return result;
}


// ============================================================

// Address: 0x5337c8
// Original: _ZNK22CTaskComplexStuckInAir11GetTaskTypeEv
// Demangled: CTaskComplexStuckInAir::GetTaskType(void)
int __fastcall CTaskComplexStuckInAir::GetTaskType(CTaskComplexStuckInAir *this)
{
  return 515;
}


// ============================================================

// Address: 0x5337d0
// Original: _ZN22CTaskComplexStuckInAir9SerializeEv
// Demangled: CTaskComplexStuckInAir::Serialize(void)
int __fastcall CTaskComplexStuckInAir::Serialize(CTaskComplexStuckInAir *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexStuckInAir *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexStuckInAir *))(*(_DWORD *)this + 20))(this);
  if ( result != 515 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexStuckInAir *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(515, v6);
  }
  return result;
}


// ============================================================
