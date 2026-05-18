
// Address: 0x18c888
// Original: j__ZN25CTaskComplexPolicePursuit9SetWeaponEP4CPed
// Demangled: CTaskComplexPolicePursuit::SetWeapon(CPed *)
// attributes: thunk
int __fastcall CTaskComplexPolicePursuit::SetWeapon(CTaskComplexPolicePursuit *this, CPed *a2)
{
  return _ZN25CTaskComplexPolicePursuit9SetWeaponEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1952bc
// Original: j__ZN25CTaskComplexPolicePursuit14PersistPursuitEP4CPed
// Demangled: CTaskComplexPolicePursuit::PersistPursuit(CPed *)
// attributes: thunk
int __fastcall CTaskComplexPolicePursuit::PersistPursuit(CTaskComplexPolicePursuit *this, CPed *a2)
{
  return _ZN25CTaskComplexPolicePursuit14PersistPursuitEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1994d0
// Original: j__ZN25CTaskComplexPolicePursuitC2Ev
// Demangled: CTaskComplexPolicePursuit::CTaskComplexPolicePursuit(void)
// attributes: thunk
void __fastcall CTaskComplexPolicePursuit::CTaskComplexPolicePursuit(CTaskComplexPolicePursuit *this)
{
  _ZN25CTaskComplexPolicePursuitC2Ev(this);
}


// ============================================================

// Address: 0x19b0e0
// Original: j__ZN25CTaskComplexPolicePursuit10SetPursuitEP4CPed
// Demangled: CTaskComplexPolicePursuit::SetPursuit(CPed *)
// attributes: thunk
int __fastcall CTaskComplexPolicePursuit::SetPursuit(CEntity **this, CPed *a2)
{
  return _ZN25CTaskComplexPolicePursuit10SetPursuitEP4CPed(this, a2);
}


// ============================================================

// Address: 0x53d71c
// Original: _ZN25CTaskComplexPolicePursuitC2Ev
// Demangled: CTaskComplexPolicePursuit::CTaskComplexPolicePursuit(void)
void __fastcall CTaskComplexPolicePursuit::CTaskComplexPolicePursuit(CTaskComplexPolicePursuit *this)
{
  int v1; // r0
  char v2; // r2

  CTaskComplex::CTaskComplex(this);
  v2 = *(_BYTE *)(v1 + 12);
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  *(_BYTE *)(v1 + 12) = v2 & 0xF8 | 4;
  *(_DWORD *)v1 = &off_66D010;
}


// ============================================================

// Address: 0x53d748
// Original: _ZN25CTaskComplexPolicePursuitD2Ev
// Demangled: CTaskComplexPolicePursuit::~CTaskComplexPolicePursuit()
void __fastcall CTaskComplexPolicePursuit::~CTaskComplexPolicePursuit(CTaskComplexPolicePursuit *this)
{
  CCopPed *v2; // r5
  CWanted *PlayerWanted; // r0
  CEntity *v4; // r0

  v2 = (CCopPed *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D010;
  if ( v2 && FindPlayerPed(-1) )
  {
    PlayerWanted = (CWanted *)FindPlayerWanted(-1);
    CWanted::RemovePursuitCop(PlayerWanted, v2);
  }
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x53d794
// Original: _ZN25CTaskComplexPolicePursuit12ClearPursuitEP4CPed
// Demangled: CTaskComplexPolicePursuit::ClearPursuit(CPed *)
int __fastcall CTaskComplexPolicePursuit::ClearPursuit(CTaskComplexPolicePursuit *this, CPed *a2)
{
  int result; // r0
  CWanted *PlayerWanted; // r0

  result = FindPlayerPed(-1);
  if ( result )
  {
    PlayerWanted = (CWanted *)FindPlayerWanted(-1);
    return sub_18DB1C(PlayerWanted, a2);
  }
  return result;
}


// ============================================================

// Address: 0x53d7bc
// Original: _ZN25CTaskComplexPolicePursuitD0Ev
// Demangled: CTaskComplexPolicePursuit::~CTaskComplexPolicePursuit()
void __fastcall CTaskComplexPolicePursuit::~CTaskComplexPolicePursuit(CTaskComplexPolicePursuit *this)
{
  CCopPed *v2; // r5
  CWanted *PlayerWanted; // r0
  CEntity *v4; // r0
  void *v5; // r0

  v2 = (CCopPed *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D010;
  if ( v2 && FindPlayerPed(-1) )
  {
    PlayerWanted = (CWanted *)FindPlayerWanted(-1);
    CWanted::RemovePursuitCop(PlayerWanted, v2);
  }
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x53d80c
// Original: _ZN25CTaskComplexPolicePursuit13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexPolicePursuit::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexPolicePursuit::MakeAbortable(
        CTaskComplexPolicePursuit *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x53d818
// Original: _ZN25CTaskComplexPolicePursuit17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexPolicePursuit::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexPolicePursuit::CreateNextSubTask(CTaskComplexPolicePursuit *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x53d81c
// Original: _ZN25CTaskComplexPolicePursuit18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexPolicePursuit::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexPolicePursuit::CreateFirstSubTask(CTaskComplexPolicePursuit *this, CPed *a2)
{
  int v4; // r1

  *((_DWORD *)this + 4) = a2;
  if ( CTaskComplexPolicePursuit::SetPursuit((CEntity **)this, a2) )
  {
    v4 = 1101;
  }
  else
  {
    v4 = 1302;
    *((_BYTE *)this + 12) &= ~4u;
  }
  return CTaskComplexPolicePursuit::CreateSubTask(this, v4, a2);
}


// ============================================================

// Address: 0x53d848
// Original: _ZN25CTaskComplexPolicePursuit10SetPursuitEP4CPed
// Demangled: CTaskComplexPolicePursuit::SetPursuit(CPed *)
int __fastcall CTaskComplexPolicePursuit::SetPursuit(CEntity **this, CPed *a2)
{
  char *v4; // r0
  CEntity *v5; // r6
  int v6; // r1
  char *v7; // r3
  int v8; // r2
  int v9; // r1
  float32x2_t v10; // d16
  unsigned __int64 v11; // d1
  float v12; // s0
  float *v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  float32x2_t v17; // d16
  unsigned __int64 v18; // d2
  float v19; // s2
  float *v20; // r0
  CEntity *v21; // r0
  CEntity **v22; // r4
  CEntity *v23; // t1
  CWanted *PlayerWanted; // r0
  int result; // r0

  v4 = (char *)a2 + 4;
  v5 = (CEntity *)CWorld::Players[0];
  if ( CWorld::Players[0] )
  {
    v6 = *((_DWORD *)a2 + 5);
    v7 = (char *)a2 + 4;
    v8 = *(_DWORD *)(CWorld::Players[0] + 20);
    if ( v6 )
      v7 = (char *)(v6 + 48);
    v9 = v8 + 48;
    if ( !v8 )
      v9 = CWorld::Players[0] + 4;
    v10.n64_u64[0] = vsub_f32(*(float32x2_t *)(v9 + 4), *(float32x2_t *)(v7 + 4)).n64_u64[0];
    v11 = vmul_f32(v10, v10).n64_u64[0];
    v12 = (float)((float)((float)(*(float *)v9 - *(float *)v7) * (float)(*(float *)v9 - *(float *)v7)) + *(float *)&v11)
        + *((float *)&v11 + 1);
    if ( v12 >= 3.4028e38
      || *(unsigned __int8 *)(CWorld::Players[0] + 1157) << 31
      && (v13 = *(float **)(CWorld::Players[0] + 1424),
          (float)(v12
                * (float)((float)((float)(v13[18] * v13[18]) + (float)(v13[19] * v13[19])) + (float)(v13[20] * v13[20]))) >= 16.0) )
    {
      v5 = 0;
      v12 = 3.4028e38;
    }
  }
  else
  {
    v12 = 3.4028e38;
    v5 = 0;
  }
  if ( dword_96B830 )
  {
    v14 = *((_DWORD *)a2 + 5);
    v15 = *(_DWORD *)(dword_96B830 + 20);
    if ( v14 )
      v4 = (char *)(v14 + 48);
    v16 = v15 + 48;
    if ( !v15 )
      v16 = dword_96B830 + 4;
    v17.n64_u64[0] = vsub_f32(*(float32x2_t *)(v16 + 4), *(float32x2_t *)(v4 + 4)).n64_u64[0];
    v18 = vmul_f32(v17, v17).n64_u64[0];
    v19 = (float)((float)((float)(*(float *)v16 - *(float *)v4) * (float)(*(float *)v16 - *(float *)v4)) + *(float *)&v18)
        + *((float *)&v18 + 1);
    if ( v19 < v12 )
    {
      if ( *(unsigned __int8 *)(dword_96B830 + 1157) << 31 )
      {
        v20 = *(float **)(dword_96B830 + 1424);
        if ( (float)(v19
                   * (float)((float)((float)(v20[18] * v20[18]) + (float)(v20[19] * v20[19]))
                           + (float)(v20[20] * v20[20]))) < 16.0 )
          v5 = (CEntity *)dword_96B830;
      }
      else
      {
        v5 = (CEntity *)dword_96B830;
      }
    }
  }
  v23 = this[5];
  v22 = this + 5;
  v21 = v23;
  if ( v23 )
    CEntity::CleanUpOldReference(v21, v22);
  PlayerWanted = (CWanted *)FindPlayerWanted(-1);
  if ( v5 && CWanted::SetPursuitCop(PlayerWanted, a2) == 1 )
  {
    *v22 = v5;
    CEntity::RegisterReference(v5, v22);
    return 1;
  }
  else
  {
    result = 0;
    *v22 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x53d9e0
// Original: _ZNK25CTaskComplexPolicePursuit13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexPolicePursuit::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexPolicePursuit::CreateSubTask(CTaskComplexPolicePursuit *this, int a2, CPed *a3)
{
  int v5; // r4
  __int16 *v6; // r5
  CEntity **v7; // r1
  float v8; // s16
  char v9; // r1

  v5 = 0;
  if ( a2 > 906 )
  {
    if ( a2 == 907 )
    {
      v5 = CTask::operator new((CTask *)&dword_4C, 0x38Bu);
      v6 = (__int16 *)*((_DWORD *)a3 + 356);
      v8 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v6[19]]) + 44) + 36);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_DWORD *)v5 = &off_6656E4;
      *(_DWORD *)(v5 + 16) = 50000;
      *(_DWORD *)(v5 + 20) = 1000;
      *(_DWORD *)(v5 + 28) = 0x40000000;
      *(_DWORD *)(v5 + 32) = 0;
      *(_DWORD *)(v5 + 36) = 0x40000000;
      *(_WORD *)(v5 + 48) = 0;
      *(_WORD *)(v5 + 60) = 0;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)(v5 + 44) = 0;
      *(_DWORD *)(v5 + 52) = 0;
      *(_DWORD *)(v5 + 56) = 0;
      v9 = *(_BYTE *)(v5 + 72);
      *(_DWORD *)(v5 + 64) = &off_665720;
      *(_DWORD *)(v5 + 68) = 6;
      *(_BYTE *)(v5 + 72) = v9 & 0xF0 | 3;
      *(float *)(v5 + 24) = v8 + 1.0;
      *(_DWORD *)(v5 + 12) = v6;
      v7 = (CEntity **)(v5 + 12);
      if ( !v6 )
        return v5;
    }
    else
    {
      if ( a2 != 1101 )
        return v5;
      if ( !*((_DWORD *)this + 5) )
        return 0;
      v5 = CTask::operator new((CTask *)&dword_24, 0x44Du);
      v6 = (__int16 *)*((_DWORD *)this + 5);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_DWORD *)(v5 + 32) = 0;
      *(_DWORD *)v5 = &off_66CFD4;
      *(_DWORD *)(v5 + 16) = v6;
      v7 = (CEntity **)(v5 + 16);
      if ( !v6 )
        return v5;
    }
    CEntity::RegisterReference((CEntity *)v6, v7);
    return v5;
  }
  if ( a2 == 203 )
  {
    v5 = CTask::operator new((CTask *)&dword_20, 0xCBu);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 0, 0, 0, 8.0);
  }
  else if ( a2 == 421 )
  {
    v5 = CTask::operator new((CTask *)&dword_20, 0x1A5u);
    CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
    *(_DWORD *)v5 = &off_665870;
  }
  return v5;
}


// ============================================================

// Address: 0x53db4c
// Original: _ZN25CTaskComplexPolicePursuit14ControlSubTaskEP4CPed
// Demangled: CTaskComplexPolicePursuit::ControlSubTask(CPed *)
int __fastcall CTaskComplexPolicePursuit::ControlSubTask(CTaskComplexPolicePursuit *this, CVehicle **a2)
{
  int PlayerWanted; // r4
  CVehicle *v5; // r0
  CVehicle *v6; // r1
  int v7; // r2
  int v8; // r6
  char *v9; // r3
  char *v10; // r1
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1
  CTaskComplexPolicePursuit *v13; // r0
  bool v14; // zf
  int v15; // r4
  unsigned int v16; // r1
  _BYTE v18[40]; // [sp+10h] [bp-28h] BYREF

  PlayerWanted = FindPlayerWanted(-1);
  if ( CTaskComplexPolicePursuit::PersistPursuit(this, (CPed *)a2) )
    goto LABEL_16;
  if ( *((unsigned __int8 *)this + 12) << 31
    && ((*((_BYTE *)a2 + 1158) & 0x20) == 0 || a2[7 * *((char *)a2 + 1820) + 361] != (CVehicle *)((char *)&dword_14 + 2)) )
  {
    CPed::SetCurrentWeapon(a2, 22);
    v8 = 1101;
    a2[289] = (CVehicle *)((unsigned int)a2[289] | 0x200000);
    goto LABEL_21;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 1101 )
  {
LABEL_16:
    v8 = 200;
    goto LABEL_21;
  }
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v8 = 1302;
  }
  else
  {
    v5 = a2[356];
    if ( v5 )
    {
      if ( *(_DWORD *)(PlayerWanted + 44) )
      {
        v6 = a2[5];
        v7 = *((_DWORD *)v5 + 5);
        v8 = 203;
        v9 = (char *)v6 + 48;
        if ( !v6 )
          v9 = (char *)(a2 + 1);
        v10 = (char *)(v7 + 48);
        if ( !v7 )
          v10 = (char *)v5 + 4;
        v11.n64_u64[0] = vsub_f32(*(float32x2_t *)(v10 + 4), *(float32x2_t *)(v9 + 4)).n64_u64[0];
        v12 = vmul_f32(v11, v11).n64_u64[0];
        if ( (float)((float)((float)((float)(*(float *)v10 - *(float *)v9) * (float)(*(float *)v10 - *(float *)v9))
                           + *(float *)&v12)
                   + *((float *)&v12 + 1)) < 25.0 )
          v8 = 907;
      }
      else
      {
        v8 = 701;
      }
    }
    else
    {
      v8 = 203;
    }
  }
LABEL_21:
  v13 = (CTaskComplexPolicePursuit *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v14 = v8 == 1101;
  if ( v8 != 1101 )
    v14 = v13 == (CTaskComplexPolicePursuit *)((char *)&elf_hash_bucket[212] + 1);
  if ( v14 )
    CTaskComplexPolicePursuit::SetWeapon(v13, (CPed *)a2);
  v15 = *((_DWORD *)this + 2);
  if ( v8 == 200
    || (*(int (__fastcall **)(_DWORD, CVehicle **, int, _DWORD))(*(_DWORD *)v15 + 28))(*((_DWORD *)this + 2), a2, 1, 0) != 1 )
  {
    return v15;
  }
  if ( v8 == 701 )
  {
    CEventVehicleToSteal::CEventVehicleToSteal((CEventVehicleToSteal *)v18, a2[356]);
    CEventGroup::Add((CVehicle *)((char *)a2[272] + 104), (CEvent *)v18, 0);
    v15 = CTask::operator new((CTask *)&dword_20, v16);
    CTaskSimpleRunAnim::CTaskSimpleRunAnim(v15, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
    *(_DWORD *)v15 = &off_665870;
    CEventVehicleToSteal::~CEventVehicleToSteal((CEventVehicleToSteal *)v18);
    return v15;
  }
  return CTaskComplexPolicePursuit::CreateSubTask(this, v8, (CPed *)a2);
}


// ============================================================

// Address: 0x53dcf4
// Original: _ZN25CTaskComplexPolicePursuit14PersistPursuitEP4CPed
// Demangled: CTaskComplexPolicePursuit::PersistPursuit(CPed *)
int __fastcall CTaskComplexPolicePursuit::PersistPursuit(CTaskComplexPolicePursuit *this, CPed *a2)
{
  CWanted *PlayerWanted; // r5
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  char v8; // r0
  char v9; // r0
  CWanted *v10; // r0

  PlayerWanted = (CWanted *)FindPlayerWanted(-1);
  if ( *((float *)a2 + 337) > 0.0 )
  {
    v5 = CCullZones::NoPolice((CPed *)((char *)a2 + 1348));
    v6 = *((unsigned __int8 *)this + 12);
    v7 = v5 == 1;
    if ( v5 == 1 )
      v7 = (v6 & 1) == 0;
    if ( v7 )
    {
      if ( (*((_BYTE *)a2 + 1157) & 8) == 0 )
        goto LABEL_18;
      v8 = v6 | 3;
    }
    else
    {
      if ( (v6 & 2) != 0 && !CCullZones::NoPolice((CCullZones *)(v6 << 30)) )
      {
        v9 = *((_BYTE *)this + 12);
      }
      else
      {
        if ( *((_DWORD *)PlayerWanted + 11) )
          goto LABEL_18;
        v9 = *((_BYTE *)this + 12);
        if ( (v9 & 3) != 1 )
          goto LABEL_18;
      }
      v8 = v9 & 0xFC;
    }
    *((_BYTE *)this + 12) = v8;
  }
  if ( FindPlayerPed(-1) )
  {
    v10 = (CWanted *)FindPlayerWanted(-1);
    CWanted::RemovePursuitCop(v10, a2);
  }
LABEL_18:
  CWanted::RemoveExcessPursuitCops(PlayerWanted);
  return sub_18DA70(PlayerWanted, a2);
}


// ============================================================

// Address: 0x53dd8a
// Original: _ZN25CTaskComplexPolicePursuit9SetWeaponEP4CPed
// Demangled: CTaskComplexPolicePursuit::SetWeapon(CPed *)
int __fastcall CTaskComplexPolicePursuit::SetWeapon(CTaskComplexPolicePursuit *this, CPed *a2)
{
  int result; // r0

  result = *(_DWORD *)(FindPlayerWanted(-1) + 44);
  if ( result < 2 )
  {
    if ( result == 1 )
    {
      result = *(_DWORD *)(FindPlayerPed(-1) + 1388);
      if ( !result )
      {
        result = *((_DWORD *)a2 + 275);
        if ( result != 49 )
        {
          if ( CPed::DoWeHaveWeaponAvailable() == 1 )
          {
            FindPlayerPed(-1);
            if ( *(_DWORD *)CWeaponInfo::GetWeaponInfo() != 1 )
            {
              FindPlayerPed(-1);
              if ( *(_DWORD *)CWeaponInfo::GetWeaponInfo() != 2 )
                return j_CPed::SetCurrentWeapon();
            }
          }
          goto LABEL_11;
        }
      }
    }
  }
  else
  {
    result = *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361);
    if ( !result )
    {
LABEL_11:
      CPed::DoWeHaveWeaponAvailable();
      return j_CPed::SetCurrentWeapon();
    }
  }
  return result;
}


// ============================================================

// Address: 0x54099c
// Original: _ZNK25CTaskComplexPolicePursuit5CloneEv
// Demangled: CTaskComplexPolicePursuit::Clone(void)
int __fastcall CTaskComplexPolicePursuit::Clone(CTaskComplexPolicePursuit *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  int result; // r0
  char v4; // r3

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  CTaskComplex::CTaskComplex(v2);
  v4 = *(_BYTE *)(result + 12);
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)result = &off_66D010;
  *(_BYTE *)(result + 12) = v4 & 0xF8 | 4;
  return result;
}


// ============================================================

// Address: 0x5409cc
// Original: _ZNK25CTaskComplexPolicePursuit11GetTaskTypeEv
// Demangled: CTaskComplexPolicePursuit::GetTaskType(void)
int __fastcall CTaskComplexPolicePursuit::GetTaskType(CTaskComplexPolicePursuit *this)
{
  return 1103;
}


// ============================================================
