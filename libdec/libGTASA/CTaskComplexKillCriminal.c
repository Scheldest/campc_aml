
// Address: 0x18bac0
// Original: j__ZN24CTaskComplexKillCriminalC2EP4CPedb
// Demangled: CTaskComplexKillCriminal::CTaskComplexKillCriminal(CPed *,bool)
// attributes: thunk
void __fastcall CTaskComplexKillCriminal::CTaskComplexKillCriminal(CTaskComplexKillCriminal *this, CPed *a2, bool a3)
{
  _ZN24CTaskComplexKillCriminalC2EP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x1930fc
// Original: j__ZN24CTaskComplexKillCriminalD2Ev
// Demangled: CTaskComplexKillCriminal::~CTaskComplexKillCriminal()
// attributes: thunk
void __fastcall CTaskComplexKillCriminal::~CTaskComplexKillCriminal(CTaskComplexKillCriminal *this)
{
  _ZN24CTaskComplexKillCriminalD2Ev(this);
}


// ============================================================

// Address: 0x193298
// Original: j__ZN24CTaskComplexKillCriminal12ChangeTargetEP4CPed
// Demangled: CTaskComplexKillCriminal::ChangeTarget(CPed *)
// attributes: thunk
int __fastcall CTaskComplexKillCriminal::ChangeTarget(CEntity **this, CPed *a2)
{
  return _ZN24CTaskComplexKillCriminal12ChangeTargetEP4CPed(this, a2);
}


// ============================================================

// Address: 0x199ff4
// Original: j__ZNK24CTaskComplexKillCriminal13CreateSubTaskEiP4CPedb
// Demangled: CTaskComplexKillCriminal::CreateSubTask(int,CPed *,bool)
// attributes: thunk
int __fastcall CTaskComplexKillCriminal::CreateSubTask(CTaskComplexKillCriminal *this, int a2, CPed *a3, bool a4)
{
  return _ZNK24CTaskComplexKillCriminal13CreateSubTaskEiP4CPedb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19d794
// Original: j__ZN24CTaskComplexKillCriminal22FindNextCriminalToKillEP4CPedb
// Demangled: CTaskComplexKillCriminal::FindNextCriminalToKill(CPed *,bool)
// attributes: thunk
int __fastcall CTaskComplexKillCriminal::FindNextCriminalToKill(CTaskComplexKillCriminal *this, CPed *a2, bool a3)
{
  return _ZN24CTaskComplexKillCriminal22FindNextCriminalToKillEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x53de4c
// Original: _ZN24CTaskComplexKillCriminalC2EP4CPedb
// Demangled: CTaskComplexKillCriminal::CTaskComplexKillCriminal(CPed *,bool)
void __fastcall CTaskComplexKillCriminal::CTaskComplexKillCriminal(CTaskComplexKillCriminal *this, CPed *a2, bool a3)
{
  char *v6; // r5
  CEntity *v7; // r0
  int v8; // r1

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 1077936128;
  *((_BYTE *)this + 24) = a3;
  *(_WORD *)((char *)this + 25) = 0;
  *((_BYTE *)this + 30) = 0;
  *(_DWORD *)this = &off_66D04C;
  *((_DWORD *)this + 3) = a2;
  v6 = (char *)this + 12;
  if ( a2 )
  {
    if ( CPed::IsPlayer(a2)
      || (v7 = *(CEntity **)v6, v8 = *(_DWORD *)(*(_DWORD *)v6 + 1436), (unsigned int)v8 <= 0x13)
      && ((1 << v8) & (unsigned int)"v") != 0
      || v8 > 23
      || *((_BYTE *)v7 + 1096) == 2 )
    {
      *(_DWORD *)v6 = 0;
    }
    else
    {
      CEntity::RegisterReference(v7, (CEntity **)this + 3);
    }
  }
}


// ============================================================

// Address: 0x53decc
// Original: _ZN24CTaskComplexKillCriminalD2Ev
// Demangled: CTaskComplexKillCriminal::~CTaskComplexKillCriminal()
void __fastcall CTaskComplexKillCriminal::~CTaskComplexKillCriminal(CTaskComplexKillCriminal *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  char *v5; // r5
  _DWORD *v6; // r0
  int v7; // r3
  unsigned int v8; // r2
  int v9; // r4
  CEntity *v10; // r0
  int v11; // r1
  int v12; // r1
  int v13; // r0
  CVehicle *v14; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D04C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v5 = (char *)this + 16;
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 1360) = CTimer::m_snTimeInMilliseconds;
    v6 = *(_DWORD **)v5;
    v7 = *(_DWORD *)(*(_DWORD *)v5 + 1164);
    v8 = *(_DWORD *)(*(_DWORD *)v5 + 1160) & 0xFFFFFFBF;
    v9 = *(_DWORD *)(*(_DWORD *)v5 + 1168);
    v6[289] = *(_DWORD *)(*(_DWORD *)v5 + 1156);
    v6[290] = v8;
    v6[291] = v7;
    v6[292] = v9;
    *(_DWORD *)(*(_DWORD *)v5 + 1944) = 1065353216;
    v10 = *(CEntity **)v5;
    v11 = *(_DWORD *)(*(_DWORD *)v5 + 1424);
    if ( v11 )
    {
      *(_WORD *)(v11 + 1200) = 0;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v5 + 1424) + 1072) &= ~0x40u;
      v10 = *(CEntity **)v5;
      v12 = *(_DWORD *)(*(_DWORD *)v5 + 1424);
      if ( *(_DWORD *)(v12 + 1124) == *(_DWORD *)v5 )
      {
        *(_BYTE *)(v12 + 957) = 2;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v5 + 1424) + 958) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v5 + 1424) + 980) = 10;
        v13 = *(_DWORD *)(*(_DWORD *)v5 + 1424);
        v14 = (CVehicle *)(*(_BYTE *)(v13 + 58) & 0xF8);
        if ( v14 != (CVehicle *)&word_10 )
        {
          CCarCtrl::JoinCarWithRoadSystem((CCarCtrl *)v13, v14);
          v13 = *(_DWORD *)(*(_DWORD *)v5 + 1424);
        }
        *(_DWORD *)(v13 + 1072) &= ~0x8000u;
        v10 = *(CEntity **)v5;
      }
    }
    if ( v10 )
      CEntity::CleanUpOldReference(v10, (CEntity **)this + 4);
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x53dfcc
// Original: _ZN24CTaskComplexKillCriminalD0Ev
// Demangled: CTaskComplexKillCriminal::~CTaskComplexKillCriminal()
void __fastcall CTaskComplexKillCriminal::~CTaskComplexKillCriminal(CTaskComplexKillCriminal *this)
{
  void *v1; // r0

  CTaskComplexKillCriminal::~CTaskComplexKillCriminal(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x53dfdc
// Original: _ZN24CTaskComplexKillCriminal13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexKillCriminal::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexKillCriminal::MakeAbortable(
        CTaskComplexKillCriminal *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v8; // r6
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  CPed *v12; // r0
  CCopPed *v13; // r5
  CPed *v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r2
  char *v19; // r3
  int v20; // r1
  float32x2_t v21; // d16
  unsigned __int64 v22; // d1
  CPed *v23; // r0

  if ( !a4 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  v8 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4);
  v9 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 44))(a4);
  v10 = *((_DWORD *)this + 3);
  if ( v10 && v9 == v10 )
  {
    switch ( v8 )
    {
      case 9:
      case 15:
      case 31:
      case 36:
      case 41:
        goto LABEL_23;
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 32:
      case 33:
      case 34:
      case 35:
      case 37:
      case 38:
      case 39:
      case 40:
        return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
                 *((_DWORD *)this + 2),
                 a2,
                 a3,
                 a4);
      default:
        if ( v8 == 73 )
          goto LABEL_23;
        return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
                 *((_DWORD *)this + 2),
                 a2,
                 a3,
                 a4);
    }
  }
  v11 = v8 == 73;
  if ( v8 != 73 )
    v11 = v8 == 36;
  if ( !v11 )
  {
    switch ( v8 )
    {
      case 9:
      case 15:
      case 31:
      case 41:
        if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 44))(a4) )
        {
          if ( (*(_BYTE *)((*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 44))(a4) + 58) & 7) == 3 )
          {
            v12 = (CPed *)(*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 44))(a4);
            if ( !CPed::IsPlayer(v12) )
            {
              v13 = (CCopPed *)*((_DWORD *)this + 4);
              if ( v13 )
              {
                v14 = (CPed *)(*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 44))(a4);
                v15 = CCopPed::AddCriminalToKill(v13, v14);
                if ( (v8 | 0x20) == 0x29 )
                {
                  if ( v15 )
                  {
                    v16 = *((_DWORD *)this + 3);
                    if ( !v16 )
                      goto LABEL_21;
                    v17 = *((_DWORD *)a2 + 5);
                    v18 = *(_DWORD *)(v16 + 20);
                    v19 = (char *)(v17 + 48);
                    if ( !v17 )
                      v19 = (char *)a2 + 4;
                    v20 = v18 + 48;
                    if ( !v18 )
                      v20 = v16 + 4;
                    v21.n64_u64[0] = vsub_f32(*(float32x2_t *)(v20 + 4), *(float32x2_t *)(v19 + 4)).n64_u64[0];
                    v22 = vmul_f32(v21, v21).n64_u64[0];
                    if ( (float)((float)((float)((float)(*(float *)v20 - *(float *)v19)
                                               * (float)(*(float *)v20 - *(float *)v19))
                                       + *(float *)&v22)
                               + *((float *)&v22 + 1)) < 625.0 )
                    {
LABEL_21:
                      v23 = (CPed *)(*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 44))(a4);
                      CTaskComplexKillCriminal::ChangeTarget((CEntity **)this, v23);
                    }
                  }
                }
              }
            }
          }
        }
        break;
      default:
        return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
                 *((_DWORD *)this + 2),
                 a2,
                 a3,
                 a4);
    }
  }
LABEL_23:
  ++*((_DWORD *)a4 + 1);
  return 0;
}


// ============================================================

// Address: 0x53e168
// Original: _ZN24CTaskComplexKillCriminal12ChangeTargetEP4CPed
// Demangled: CTaskComplexKillCriminal::ChangeTarget(CPed *)
int __fastcall CTaskComplexKillCriminal::ChangeTarget(CEntity **this, CPed *a2)
{
  unsigned __int8 *v4; // r0
  CEntity **v5; // r6
  float *v6; // r9
  bool v7; // zf
  CEntity *v8; // r0
  int v9; // r4
  CPed **v10; // r0
  int v11; // r0
  bool v12; // zf
  CEntity **TaskByType; // r0

  v5 = this + 3;
  v4 = (unsigned __int8 *)this[3];
  if ( v4 == (unsigned __int8 *)a2 )
    return 1;
  if ( !a2 )
    return 0;
  v6 = (float *)((char *)a2 + 1348);
  if ( *((float *)a2 + 337) <= 0.0 )
    return 0;
  v7 = v4 == 0;
  if ( v4 )
    v7 = v4[1157] << 31 == 0;
  if ( !v7 )
    return 0;
  v8 = this[2];
  if ( !v8
    || (*(int (__fastcall **)(CEntity *))(*(_DWORD *)v8 + 20))(v8) != 1000
    || (v9 = 0, (*(int (__fastcall **)(CEntity *, CPed *, int, _DWORD))(*(_DWORD *)this[2] + 28))(this[2], a2, 1, 0) == 1) )
  {
    v10 = (CPed **)this[4];
    if ( (v10[493] != a2 || *v6 <= 0.0)
      && (v10[494] != a2 || *v6 <= 0.0)
      && (v10[495] != a2 || *v6 <= 0.0)
      && (v10[496] != a2 || *v6 <= 0.0)
      && (v10[497] != a2 || *v6 <= 0.0) )
    {
      return 0;
    }
    if ( *v5 )
      CEntity::CleanUpOldReference(*v5, v5);
    this[3] = a2;
    CEntity::RegisterReference(a2, v5);
    v11 = *((_DWORD *)this[4] + 492);
    v12 = v11 == 0;
    if ( v11 )
      v12 = *(unsigned __int8 *)(v11 + 1157) << 31 == 0;
    if ( !v12 )
    {
      TaskByType = (CEntity **)CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v11 + 1088), 1105);
      if ( TaskByType )
        CTaskComplexKillCriminal::ChangeTarget(TaskByType, a2);
    }
    *((_BYTE *)this + 25) = 0;
    return 1;
  }
  return v9;
}


// ============================================================

// Address: 0x53e29c
// Original: _ZN24CTaskComplexKillCriminal18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexKillCriminal::CreateFirstSubTask(CPed *)
CTaskComplexLeaveCar *__fastcall CTaskComplexKillCriminal::CreateFirstSubTask(
        CTaskComplexKillCriminal *this,
        CVehicle **a2)
{
  CPed *v4; // r0
  CTaskComplexLeaveCar *SubTask; // r6
  int v7; // r1
  int v8; // r2
  CPed *v9; // r0
  int v10; // r4
  CPed *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  bool v17; // zf
  int v18; // r1
  int v19; // r1
  CVehicle **v20; // r1
  unsigned int v21; // r1
  int TaskByType; // r0
  CPed *v23; // r1
  _DWORD *v24; // r0
  int v25; // r2
  int v26; // r3
  int v27; // r6
  CCopPed *v28; // r0
  int v29; // r0
  bool v30; // zf
  int v31; // r1
  CVehicle *v32; // r0
  bool v33; // zf
  char v34; // r0
  int v35; // r0
  int v36; // r1
  int v37; // r0
  int v38; // r1
  int v39; // r5
  int v40; // r1
  CPed *v41; // r4
  CVehicle *v42; // r0
  int v43; // r1
  CVehicle *v44; // r0
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r6
  CCopPed *v50; // r1
  _DWORD v51[2]; // [sp+Ch] [bp-2Ch] BYREF
  __int16 v52; // [sp+16h] [bp-22h]

  v4 = (CPed *)*((_DWORD *)this + 3);
  if ( !v4 || CPed::IsPlayer(v4) )
    return 0;
  SubTask = 0;
  if ( !*(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44) && byte_959608 )
  {
    if ( a2[359] == (CVehicle *)byte_6 )
    {
      v7 = *((_DWORD *)this + 3);
      v8 = *(_DWORD *)(v7 + 1424);
      if ( v8 )
      {
        v9 = *(CPed **)(v8 + 1124);
        if ( v9 )
        {
          if ( CPed::IsPlayer(v9) )
            return 0;
          v7 = *((_DWORD *)this + 3);
          v8 = *(_DWORD *)(v7 + 1424);
        }
        if ( *(_BYTE *)(v8 + 1164) )
        {
          v10 = 0;
          do
          {
            v11 = *(CPed **)(v8 + 4 * v10 + 1128);
            if ( v11 )
            {
              if ( CPed::IsPlayer(v11) )
                return 0;
              v7 = *((_DWORD *)this + 3);
            }
            v8 = *(_DWORD *)(v7 + 1424);
            ++v10;
          }
          while ( v10 < *(unsigned __int8 *)(v8 + 1164) );
        }
      }
      *((_DWORD *)this + 4) = a2;
      v12 = (char *)this + 16;
      CEntity::RegisterReference((CEntity *)a2, (CEntity **)this + 4);
      if ( !*((_BYTE *)this + 24)
        || (v13 = (_DWORD *)*((_DWORD *)this + 3), (v13[292] & 0x800) != 0)
        || (v13[289] & 0x100) != 0
        && (v14 = v13[356]) != 0
        && (*(_BYTE *)(v14 + 1074) & 8) != 0
        && !(int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0) )
      {
        CCopPed::AddCriminalToKill(*((CCopPed **)this + 4), *((CPed **)this + 3));
        v15 = *((_DWORD *)this + 3);
        if ( *(unsigned __int8 *)(v15 + 1157) << 31 )
          CPedIntelligence::SetPedDecisionMakerType(*(CPedIntelligence **)(v15 + 1088), 6);
        v16 = *(_DWORD *)v12;
        v18 = *(unsigned __int8 *)(*(_DWORD *)v12 + 1157) << 31;
        v17 = v18 == 0;
        if ( v18 )
        {
          v18 = *(_DWORD *)(v16 + 1424);
          v17 = v18 == 0;
        }
        if ( v17 )
        {
          v19 = *(_DWORD *)(v16 + 1968);
          if ( !v19 || *(float *)(v19 + 1348) <= 0.0 )
            *(_BYTE *)(v16 + 1992) = 1;
          goto LABEL_48;
        }
        v20 = *(CVehicle ***)(v18 + 1124);
        if ( v20 == a2 )
        {
          *(_BYTE *)(v16 + 1992) = 1;
          v28 = *(CCopPed **)v12;
          if ( *(_DWORD *)(*(_DWORD *)v12 + 1968) )
            goto LABEL_43;
          v46 = *((_DWORD *)v28 + 356);
          v47 = *(unsigned __int8 *)(v46 + 1164);
          if ( *(_BYTE *)(v46 + 1164) )
          {
            v48 = v46 + 1128;
            v49 = 0;
            while ( 1 )
            {
              v50 = *(CCopPed **)(v48 + 4 * v49);
              if ( v50 )
              {
                if ( *((_DWORD *)v50 + 359) == 6 )
                  break;
              }
              if ( ++v49 >= v47 )
                goto LABEL_44;
            }
            CCopPed::SetPartner(v28, v50);
            if ( *(_DWORD *)(*(_DWORD *)v12 + 1968) )
            {
LABEL_43:
              CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v51, *((CPed **)this + 3));
              v52 = 1105;
              v51[0] = &off_6653A4;
              CEventGroup::Add(
                (CEventGroup *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1968) + 1088) + 104),
                (CEvent *)v51,
                0);
              CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)v51);
            }
          }
        }
        else
        {
          if ( v20 && v20[359] == (CVehicle *)byte_6 )
          {
            CCopPed::SetPartner((CCopPed *)v16, (CCopPed *)v20);
            *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v12 + 1424) + 1124) + 1992) = 1;
            v16 = *(_DWORD *)v12;
          }
          v21 = *(_DWORD *)(v16 + 1968);
          if ( v21 )
          {
            if ( !*(_BYTE *)(v21 + 1992) )
              goto LABEL_44;
            TaskByType = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v21 + 1088), 1105);
            if ( TaskByType )
            {
              v23 = (CPed *)*((_DWORD *)this + 3);
              if ( *(CPed **)(TaskByType + 12) == v23 )
              {
                *(_BYTE *)(*(_DWORD *)v12 + 1992) = 0;
                v24 = *(_DWORD **)v12;
                v25 = *(_DWORD *)(*(_DWORD *)v12 + 1160);
                v26 = *(_DWORD *)(*(_DWORD *)v12 + 1164);
                v27 = *(_DWORD *)(*(_DWORD *)v12 + 1168);
                v24[289] = *(_DWORD *)(*(_DWORD *)v12 + 1156) | 0x20000000;
                v24[290] = v25;
                v24[291] = v26;
                v24[292] = v27;
                goto LABEL_44;
              }
            }
            else
            {
              v23 = (CPed *)*((_DWORD *)this + 3);
            }
            CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v51, v23);
            v52 = 1105;
            SubTask = 0;
            v51[0] = &off_6653A4;
            CEventGroup::Add(
              (CEventGroup *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v12 + 1968) + 1088) + 104),
              (CEvent *)v51,
              0);
            CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)v51);
            return SubTask;
          }
          *(_BYTE *)(v16 + 1992) = 1;
          v45 = *((_DWORD *)this + 2);
          if ( v45 && (*(int (__fastcall **)(int))(*(_DWORD *)v45 + 20))(v45) == 704 )
          {
            SubTask = (CTaskComplexLeaveCar *)*((_DWORD *)this + 2);
            if ( SubTask )
              goto LABEL_50;
          }
          else
          {
            SubTask = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v21);
            CTaskComplexLeaveCar::CTaskComplexLeaveCar(SubTask, a2[356], 0, 0, 1, 0);
            if ( SubTask )
              goto LABEL_50;
          }
        }
LABEL_44:
        v29 = *((_DWORD *)this + 3);
        v30 = *(unsigned __int8 *)(v29 + 1157) << 31 == 0;
        if ( *(unsigned __int8 *)(v29 + 1157) << 31 )
          v30 = *(_DWORD *)(v29 + 1424) == 0;
        if ( !v30 )
        {
          v31 = 709;
          if ( *(_BYTE *)(*(_DWORD *)v12 + 1992) )
            v31 = 724;
          goto LABEL_49;
        }
LABEL_48:
        v31 = 1000;
LABEL_49:
        SubTask = (CTaskComplexLeaveCar *)CTaskComplexKillCriminal::CreateSubTask(this, v31, (CPed *)a2, 0);
LABEL_50:
        v32 = a2[356];
        v33 = v32 == 0;
        if ( v32 )
          v33 = *(_BYTE *)(*(_DWORD *)v12 + 1992) == 0;
        if ( !v33 )
        {
          *((_BYTE *)this + 27) = *((_BYTE *)v32 + 957);
          *((_BYTE *)this + 28) = *((_BYTE *)a2[356] + 958);
          v34 = *((_BYTE *)a2[356] + 980);
          *((_BYTE *)this + 30) = 1;
          *((_BYTE *)this + 29) = v34;
        }
        v35 = *((_DWORD *)this + 3);
        v36 = *(_DWORD *)(v35 + 1424);
        if ( v36 )
        {
          if ( (*(_BYTE *)(v36 + 1074) & 8) != 0 )
          {
            if ( *(_BYTE *)(v36 + 1160) )
            {
              CPed::GiveWeapon(v35, 22, 1000, 1);
              CPed::SetCurrentWeapon(*((_DWORD *)this + 3), 22);
              v37 = *((_DWORD *)this + 3);
              v38 = *(_DWORD *)(v37 + 1424);
              if ( *(_BYTE *)(v38 + 1164) )
              {
                v39 = 0;
                do
                {
                  v40 = v38 + 4 * v39;
                  v41 = *(CPed **)(v40 + 1128);
                  if ( v41 )
                  {
                    CPed::GiveWeapon(*(_DWORD *)(v40 + 1128), 22, 1000, 1);
                    CPed::SetCurrentWeapon(v41, 22);
                    CCopPed::AddCriminalToKill(*((CCopPed **)this + 4), v41);
                    v37 = *((_DWORD *)this + 3);
                  }
                  v38 = *(_DWORD *)(v37 + 1424);
                  ++v39;
                }
                while ( v39 < *(unsigned __int8 *)(v38 + 1164) );
              }
            }
            else if ( (rand() & 1) != 0 )
            {
              CPed::GiveWeapon(*((_DWORD *)this + 3), 22, 1000, 1);
              CPed::SetCurrentWeapon(*((_DWORD *)this + 3), 22);
            }
          }
        }
        else if ( (rand() & 1) != 0 )
        {
          CPed::GiveWeapon(*((_DWORD *)this + 3), 22, 1000, 1);
          CPed::SetCurrentWeapon(*((_DWORD *)this + 3), 22);
          CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v51, (CPed *)a2);
          v52 = 1000;
          v51[0] = &off_6653A4;
          CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)this + 3) + 1088) + 104), (CEvent *)v51, 0);
          CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)v51);
        }
        v42 = a2[356];
        v43 = CTimer::m_snTimeInMilliseconds;
        a2[290] = (CVehicle *)((unsigned int)a2[290] | 0x40);
        a2[486] = (CVehicle *)1050253722;
        a2[340] = (CVehicle *)(v43 + 300000);
        if ( v42 )
        {
          *((_WORD *)v42 + 600) = 255;
          *((_DWORD *)a2[356] + 268) |= 0x40u;
          v44 = a2[356];
          if ( v44 )
          {
            if ( *((unsigned __int8 *)a2 + 1157) << 31 )
              *((_DWORD *)v44 + 268) |= 0x8000u;
          }
        }
        CInterestingEvents::Add();
        return SubTask;
      }
    }
    return 0;
  }
  return SubTask;
}


// ============================================================

// Address: 0x53e79c
// Original: _ZNK24CTaskComplexKillCriminal13CreateSubTaskEiP4CPedb
// Demangled: CTaskComplexKillCriminal::CreateSubTask(int,CPed *,bool)
CTaskComplexEnterCarAsPassenger *__fastcall CTaskComplexKillCriminal::CreateSubTask(
        CTaskComplexKillCriminal *this,
        int a2,
        CVehicle **a3,
        int a4)
{
  int v7; // r0
  CTaskComplexEnterCarAsPassenger *v8; // r4
  CPed *v9; // r0
  CVehicle *v10; // r0
  unsigned int v11; // r1
  bool v12; // zf
  int v14; // r5
  CTaskComplexCarDriveMission *v15; // r0
  int v16; // r3

  if ( !a4 )
  {
    v7 = *((_DWORD *)this + 2);
    if ( v7 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == a2 )
        return (CTaskComplexEnterCarAsPassenger *)*((_DWORD *)this + 2);
    }
  }
  v8 = 0;
  if ( a2 < 1000 )
  {
    switch ( a2 )
    {
      case 700:
        v8 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_50, a2);
        CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v8, a3[356], 0, 0);
        break;
      case 701:
        v8 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_50, a2);
        CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(v8, a3[356]);
        break;
      case 704:
        v8 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_34, a2);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar(v8, a3[356], 0, 0, 1, 0);
        break;
      case 709:
        v8 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_60, a2);
        CTaskSimpleCarDrive::CTaskSimpleCarDrive(v8, a3[356], 0, 0);
        break;
      case 724:
        v10 = a3[356];
        if ( v10 )
        {
          v11 = *((_DWORD *)this + 3);
          v12 = *(unsigned __int8 *)(v11 + 1157) << 31 == 0;
          if ( *(unsigned __int8 *)(v11 + 1157) << 31 )
          {
            v11 = *(_DWORD *)(v11 + 1424);
            v12 = v11 == 0;
          }
          if ( v12 )
          {
            v8 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&word_2C, v11);
            CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v8, a3[356], *((CEntity **)this + 3), 55, 2, 20.0);
          }
          else
          {
            v14 = *((_DWORD *)v10 + 360);
            v15 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v11);
            v8 = v15;
            if ( v14 == 9 )
              v16 = 53;
            else
              v16 = 18;
            CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
              v15,
              a3[356],
              *(CEntity **)(*((_DWORD *)this + 3) + 1424),
              v16,
              2,
              (float)*(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 3) + 1424) + 980) + 10.0);
          }
        }
        else
        {
          v8 = 0;
        }
        break;
      default:
        return v8;
    }
    return v8;
  }
  switch ( a2 )
  {
    case 1000:
      v8 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_38, a2);
      CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v8, *((CPed **)this + 3), -1, 0, 0, 0, 1);
LABEL_25:
      CPed::SetCurrentWeapon(a3, 22);
      return v8;
    case 1022:
      v8 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_44, a2);
      CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(v8, *((CEntity **)this + 3), 0, 70.0, 70, 8, 0);
      goto LABEL_25;
    case 1302:
      v9 = (CPed *)*((_DWORD *)this + 3);
      if ( v9 )
        CPed::SetPedDefaultDecisionMaker(v9);
      return 0;
  }
  return v8;
}


// ============================================================

// Address: 0x53e94c
// Original: _ZN24CTaskComplexKillCriminal17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexKillCriminal::CreateNextSubTask(CPed *)
CTaskComplexEnterCarAsPassenger *__fastcall CTaskComplexKillCriminal::CreateNextSubTask(
        CTaskComplexKillCriminal *this,
        CPed *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r1
  CTaskSimpleCarDrive *v7; // r6
  CTaskComplexEnterCarAsPassenger *result; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r0
  float *v13; // r0
  float *v14; // r1
  int v15; // r0
  int v16; // r0
  CPed *v17; // r0
  _DWORD *v18; // r1
  float *v19; // r2
  float *v20; // r3
  float *v21; // r3
  float *v22; // r3
  int v23; // r1
  int v24; // r0
  int v25; // r0
  int v26; // r0
  _DWORD *v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r3
  int v31; // r3
  bool v32; // zf
  int v33; // r0
  int v34; // r2
  int v35; // r3
  int v36; // r4
  float32x2_t v37; // d16
  unsigned __int64 v38; // d1
  int v39; // r0
  int v40; // r0
  int v41; // r0
  bool v42; // zf
  int v43; // r2
  int v44; // r3
  char *v45; // r0
  float32x2_t v46; // d16
  unsigned __int64 v47; // d1

  v4 = *(_DWORD *)(*((_DWORD *)this + 4) + 1968);
  v5 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v7 = 0;
  if ( v5 < 704 )
  {
    if ( v5 == 700 )
    {
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
        goto LABEL_105;
    }
    else
    {
      if ( v5 != 701 )
        return v7;
      v9 = *((_DWORD *)a2 + 289);
      if ( (v9 & 0x100) != 0 )
      {
        if ( v4 )
        {
          if ( *(float *)(v4 + 1348) <= 0.0 )
            v10 = 1;
          else
            v10 = *(_BYTE *)(v4 + 1157) & 1;
        }
        else
        {
          v10 = 1;
        }
        if ( !*((_BYTE *)this + 25) )
        {
          v6 = *((_DWORD *)this + 3);
          if ( v6 )
          {
            if ( *(float *)(v6 + 1348) > 0.0 )
            {
              v32 = *(unsigned __int8 *)(v6 + 1157) << 31 == 0;
              if ( *(unsigned __int8 *)(v6 + 1157) << 31 )
                v32 = *(_DWORD *)(v6 + 1424) == 0;
              if ( !v32 )
                goto LABEL_104;
              v33 = *((_DWORD *)a2 + 356);
              if ( v33 )
              {
                v34 = *(_DWORD *)(v6 + 20);
                v35 = *(_DWORD *)(v33 + 20);
                v36 = v34 + 48;
                if ( !v34 )
                  v36 = v6 + 4;
                v6 = v35 + 48;
                if ( !v35 )
                  v6 = v33 + 4;
                v37.n64_u64[0] = vsub_f32(*(float32x2_t *)(v6 + 4), *(float32x2_t *)(v36 + 4)).n64_u64[0];
                v38 = vmul_f32(v37, v37).n64_u64[0];
                if ( (float)((float)((float)((float)(*(float *)v6 - *(float *)v36)
                                           * (float)(*(float *)v6 - *(float *)v36))
                                   + *(float *)&v38)
                           + *((float *)&v38 + 1)) > 625.0 )
                {
LABEL_104:
                  if ( v10 == 1 )
                    return CTaskComplexKillCriminal::CreateSubTask(this, 724, (CVehicle **)a2, 0);
                  goto LABEL_105;
                }
              }
              goto LABEL_57;
            }
          }
        }
        v27 = (_DWORD *)*((_DWORD *)this + 4);
        v28 = v27[493];
        if ( v28 && *(float *)(v28 + 1348) > 0.0 )
        {
          if ( v28 == *((_DWORD *)this + 3) )
            v28 = 0;
        }
        else
        {
          v28 = 0;
        }
        v29 = v27[494];
        if ( v29 && *(float *)(v29 + 1348) > 0.0 && v29 != *((_DWORD *)this + 3) )
          v28 = v27[494];
        v30 = v27[495];
        if ( v30 && *(float *)(v30 + 1348) > 0.0 && v30 != *((_DWORD *)this + 3) )
          v28 = v27[495];
        v31 = v27[496];
        if ( v31 && *(float *)(v31 + 1348) > 0.0 && v31 != *((_DWORD *)this + 3) )
          v28 = v27[496];
        v6 = v27[497];
        if ( v6 && *(float *)(v6 + 1348) > 0.0 && v6 != *((_DWORD *)this + 3) || (v6 = v28) != 0 )
        {
          if ( CTaskComplexKillCriminal::ChangeTarget((CEntity **)this, (CPed *)v6) )
            goto LABEL_91;
          v9 = *((_DWORD *)a2 + 289);
        }
        if ( (v9 & 0x100) != 0 )
        {
          v40 = *((_DWORD *)a2 + 356);
          if ( v40 )
          {
            v6 = *(_DWORD *)(v40 + 1072) & 0xFFFF7FFF;
            *(_DWORD *)(v40 + 1072) = v6;
          }
        }
        v16 = *((_DWORD *)this + 2);
        if ( v10 != 1 )
        {
          if ( !v16 )
            goto LABEL_116;
LABEL_106:
          v39 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 20))(v16);
          v6 = 709;
          if ( v39 == 709 )
            return (CTaskComplexEnterCarAsPassenger *)*((_DWORD *)this + 2);
LABEL_116:
          v7 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_60, v6);
          CTaskSimpleCarDrive::CTaskSimpleCarDrive(v7, *((CVehicle **)a2 + 356), 0, 0);
          return v7;
        }
        if ( !v16 )
          goto LABEL_27;
        goto LABEL_26;
      }
    }
    v15 = *((unsigned __int8 *)this + 25);
    v6 = 1;
    *((_BYTE *)this + 26) = 1;
    if ( !v15 )
    {
      v24 = *((_DWORD *)this + 3);
      if ( v24 )
      {
        if ( *(float *)(v24 + 1348) > 0.0 )
        {
LABEL_57:
          v25 = *((_DWORD *)this + 2);
          if ( v25 && (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 20))(v25) == 1000 )
            return (CTaskComplexEnterCarAsPassenger *)*((_DWORD *)this + 2);
          goto LABEL_91;
        }
      }
    }
    v16 = *((_DWORD *)this + 2);
    if ( !v16 )
    {
LABEL_27:
      v17 = (CPed *)*((_DWORD *)this + 3);
      if ( v17 )
        CPed::SetPedDefaultDecisionMaker(v17);
      return 0;
    }
LABEL_26:
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 20))(v16) == 1302 )
      return (CTaskComplexEnterCarAsPassenger *)*((_DWORD *)this + 2);
    goto LABEL_27;
  }
  if ( v5 == 704 )
  {
    if ( *((_DWORD *)a2 + 356) && !*((_BYTE *)this + 26) )
    {
      if ( *((_BYTE *)this + 25) )
        goto LABEL_17;
      v41 = *((_DWORD *)this + 3);
      if ( !v41 )
        goto LABEL_17;
      v6 = v41 + 1348;
      if ( *(float *)(v41 + 1348) <= 0.0 )
        goto LABEL_17;
      v6 = *(unsigned __int8 *)(v41 + 1157) << 31;
      v42 = v6 == 0;
      if ( v6 )
      {
        v6 = *(_DWORD *)(v41 + 1424);
        v42 = v6 == 0;
      }
      if ( !v42 )
        goto LABEL_17;
      v6 = *(_DWORD *)(v41 + 20);
      v43 = *((_DWORD *)a2 + 5);
      v44 = v6 + 48;
      if ( !v6 )
        v44 = v41 + 4;
      v45 = (char *)(v43 + 48);
      if ( !v43 )
        v45 = (char *)a2 + 4;
      v46.n64_u64[0] = vsub_f32(*(float32x2_t *)(v45 + 4), *(float32x2_t *)(v44 + 4)).n64_u64[0];
      v47 = vmul_f32(v46, v46).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v45 - *(float *)v44) * (float)(*(float *)v45 - *(float *)v44))
                         + *(float *)&v47)
                 + *((float *)&v47 + 1)) > 625.0 )
      {
LABEL_17:
        v11 = *((_DWORD *)this + 2);
        if ( v11 )
        {
          v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
          v6 = 701;
          if ( v12 == 701 )
            return (CTaskComplexEnterCarAsPassenger *)*((_DWORD *)this + 2);
        }
        v7 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_50, v6);
        CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(v7, *((CVehicle **)a2 + 356));
        return v7;
      }
    }
    goto LABEL_57;
  }
  if ( v5 != 1000 )
  {
    v6 = 1022;
    if ( v5 == 1022 )
    {
      if ( *(_BYTE *)(*((_DWORD *)this + 4) + 1992) )
        return CTaskComplexKillCriminal::CreateSubTask(this, 724, (CVehicle **)a2, 0);
LABEL_105:
      v16 = *((_DWORD *)this + 2);
      if ( !v16 )
        goto LABEL_116;
      goto LABEL_106;
    }
    return v7;
  }
  v13 = (float *)*((_DWORD *)this + 3);
  if ( v13 && v13[337] > 0.0 )
  {
    v14 = (float *)*((_DWORD *)this + 3);
    goto LABEL_52;
  }
  v18 = (_DWORD *)*((_DWORD *)this + 4);
  v19 = (float *)v18[493];
  if ( v19 && v19[337] > 0.0 )
  {
    if ( v19 == v13 )
      v19 = 0;
  }
  else
  {
    v19 = 0;
  }
  v20 = (float *)v18[494];
  if ( v20 && v20[337] > 0.0 && v20 != v13 )
    v19 = (float *)v18[494];
  v21 = (float *)v18[495];
  if ( v21 && v21[337] > 0.0 && v21 != v13 )
    v19 = (float *)v18[495];
  v22 = (float *)v18[496];
  if ( v22 && v22[337] > 0.0 && v22 != v13 )
    v19 = (float *)v18[496];
  v14 = (float *)v18[497];
  if ( v14 && v14[337] > 0.0 && v14 != v13 || (v14 = v19) != 0 )
  {
LABEL_52:
    if ( CTaskComplexKillCriminal::ChangeTarget((CEntity **)this, (CPed *)v14) != 1 )
      goto LABEL_53;
LABEL_91:
    v7 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_38, v6);
    CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v7, *((CPed **)this + 3), -1, 0, 0, 0, 1);
    CPed::SetCurrentWeapon(a2, 22);
    return v7;
  }
LABEL_53:
  if ( !*((_BYTE *)this + 26) && *((_DWORD *)a2 + 356) )
  {
    v26 = *((_DWORD *)this + 4);
    if ( !*(_BYTE *)(v26 + 1992) )
    {
      if ( v4 && *(float *)(v4 + 1348) > 0.0 )
      {
        v23 = 700;
        goto LABEL_132;
      }
      *(_BYTE *)(v26 + 1992) = 1;
      CCopPed::SetPartner(*((CCopPed **)this + 4), 0);
    }
    v23 = 701;
    goto LABEL_132;
  }
  v23 = 1302;
LABEL_132:
  result = (CTaskComplexEnterCarAsPassenger *)CTaskComplexKillCriminal::CreateSubTask(this, v23, a2, 0);
  *((_BYTE *)this + 25) = 1;
  return result;
}


// ============================================================

// Address: 0x53ee14
// Original: _ZN24CTaskComplexKillCriminal22FindNextCriminalToKillEP4CPedb
// Demangled: CTaskComplexKillCriminal::FindNextCriminalToKill(CPed *,bool)
int __fastcall CTaskComplexKillCriminal::FindNextCriminalToKill(CTaskComplexKillCriminal *this, CPed *a2, int a3)
{
  float v3; // s0
  int v4; // r2
  int v5; // lr
  int v6; // r12
  float *v7; // r3
  float *v8; // lr
  int v9; // r12
  int v10; // lr
  int i; // r2
  int v12; // r3
  int v13; // r4
  int v14; // r5
  char *v15; // r6
  int v16; // r4
  float32x2_t v17; // d16
  unsigned __int64 v18; // d2

  v3 = 0.0;
  if ( !a3 )
  {
    v4 = *((_DWORD *)this + 3);
    if ( v4 )
    {
      if ( *(float *)(v4 + 1348) > 0.0 )
      {
        v5 = *((_DWORD *)a2 + 5);
        v6 = *(_DWORD *)(v4 + 20);
        v7 = (float *)(v5 + 48);
        if ( !v5 )
          v7 = (float *)((char *)a2 + 4);
        v8 = (float *)(v6 + 48);
        if ( !v6 )
          v8 = (float *)(v4 + 4);
        v3 = (float)((float)((float)(*v8 - *v7) * (float)(*v8 - *v7))
                   + (float)((float)(v8[1] - v7[1]) * (float)(v8[1] - v7[1])))
           + (float)((float)(v8[2] - v7[2]) * (float)(v8[2] - v7[2]));
      }
    }
  }
  v9 = 0;
  v10 = *((_DWORD *)this + 4) + 1972;
  for ( i = 0; i != 5; ++i )
  {
    v12 = *(_DWORD *)(v10 + 4 * i);
    if ( v12 && *(float *)(v12 + 1348) > 0.0 && v12 != *((_DWORD *)this + 3) )
    {
      v13 = *((_DWORD *)a2 + 5);
      v14 = *(_DWORD *)(v12 + 20);
      v15 = (char *)(v13 + 48);
      if ( !v13 )
        v15 = (char *)a2 + 4;
      v16 = v14 + 48;
      if ( !v14 )
        v16 = v12 + 4;
      v17.n64_u64[0] = vsub_f32(*(float32x2_t *)(v16 + 4), *(float32x2_t *)(v15 + 4)).n64_u64[0];
      v18 = vmul_f32(v17, v17).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v16 - *(float *)v15) * (float)(*(float *)v16 - *(float *)v15))
                         + *(float *)&v18)
                 + *((float *)&v18 + 1)) < v3 )
        v9 = *(_DWORD *)(v10 + 4 * i);
      if ( v3 == 0.0 )
        v9 = *(_DWORD *)(v10 + 4 * i);
    }
  }
  return v9;
}


// ============================================================

// Address: 0x53ef28
// Original: _ZN24CTaskComplexKillCriminal14ControlSubTaskEP4CPed
// Demangled: CTaskComplexKillCriminal::ControlSubTask(CPed *)
int __fastcall CTaskComplexKillCriminal::ControlSubTask(CTaskComplexKillCriminal *this, CPed *a2)
{
  CPed *v3; // r0
  CPed **v4; // r10
  int v5; // r4
  int v6; // r1
  CWanted *PlayerWanted; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r9
  CPed *v13; // r0
  char *v14; // r8
  int v15; // r1
  bool v16; // zf
  float *v17; // r1
  bool v18; // zf
  int v19; // r1
  int v20; // r1
  int v21; // r3
  int v22; // r2
  float *v23; // r6
  float *v24; // r2
  float v25; // s0
  float v26; // s4
  float v27; // s2
  int v28; // r0
  float *v29; // r2
  CPed *v30; // r1
  _DWORD *v32; // r1
  float *v33; // r0
  float *v34; // r2
  float *v35; // r2
  float *v36; // r2
  float *v37; // r1
  int v38; // r0
  bool v39; // zf
  CPed *v40; // r0
  int v41; // r4
  bool v42; // zf
  int v43; // r0
  bool v44; // zf
  int v45; // r2
  int v46; // r1
  char *v47; // r3
  int v48; // r1
  float32x2_t v49; // d16
  unsigned __int64 v50; // d1
  int v51; // r8
  int v52; // r9
  bool v53; // zf
  unsigned int v54; // r1
  CTaskSimpleGangDriveBy *v55; // r6
  int v56; // r0
  float v57; // s16
  bool v58; // zf
  int v59; // r2
  int v60; // r1
  float *v61; // r3
  float *v62; // r1
  float v63; // s0
  float v64; // s4
  float v65; // s2
  int v66; // r0
  float *v67; // r1
  int v68; // r2
  int v69; // r12
  int v70; // r3
  float *v71; // r4
  float *v72; // r2
  float v73; // s0
  int v74; // r0
  CPed *v75; // r0
  float *v76; // r1
  float v77; // s0
  int v78; // r0
  int v79; // r2
  int v80; // r3
  int v81; // r6
  int v82; // r1
  float32x2_t v83; // d16
  unsigned __int64 v84; // d1
  CPed *NextCriminalToKill; // r1
  int v86; // r0
  int v87; // r2
  int v88; // r6
  int v89; // r3
  int v90; // r1
  float32x2_t v91; // d16
  unsigned __int64 v92; // d1
  float v93; // s2
  int v94; // r2
  int v95; // r3
  int v96; // r6
  int v97; // r0
  float32x2_t v98; // d16
  unsigned __int64 v99; // d1
  CPed *v100; // r0
  __int16 v101; // r1
  CPed *v102; // r0
  bool v103; // zf
  CPed *v104; // r0
  int v105; // r1
  int v106; // r8
  int v107; // r1
  CPed *v108; // r6
  bool v109; // zf
  int v110; // r0
  int v111; // r2
  int v112; // r3
  int v113; // r6
  int v114; // r0
  float32x2_t v115; // d16
  unsigned __int64 v116; // d1
  bool v117; // zf
  CPed **v118; // r1
  _DWORD v120[2]; // [sp+14h] [bp-44h] BYREF
  __int16 v121; // [sp+1Eh] [bp-3Ah]

  v4 = (CPed **)((char *)this + 12);
  v3 = (CPed *)*((_DWORD *)this + 3);
  v5 = (int)*(v4 - 1);
  if ( v3 )
  {
    if ( CPed::IsPlayer(v3) )
      return 0;
    v6 = *((_DWORD *)*v4 + 359);
    if ( (unsigned int)v6 <= 0x13 && ((1 << v6) & (unsigned int)"v") != 0 )
      return 0;
    if ( v6 > 23 || *((_BYTE *)*v4 + 1096) == 2 )
      return 0;
  }
  if ( !*(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44)
    || (PlayerWanted = (CWanted *)FindPlayerWanted(-1), CWanted::CanCopJoinPursuit(PlayerWanted, a2) != 1) )
  {
    if ( byte_959608 )
      goto LABEL_13;
    return 0;
  }
  v8 = 0;
  v9 = (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0);
  if ( !byte_959608 || v9 )
    return v8;
LABEL_13:
  v10 = *((_DWORD *)this + 4);
  v11 = *(_DWORD *)(v10 + 1968);
  if ( *(_BYTE *)(v10 + 1992)
    || v11 && *(float *)(v11 + 1348) > 0.0
    || (*(_BYTE *)(v10 + 1992) = 1,
        CCopPed::SetPartner(*((CCopPed **)this + 4), 0),
        !(*((unsigned __int8 *)a2 + 1157) << 31)) )
  {
    v12 = 200;
  }
  else
  {
    v12 = 704;
    if ( !*((_DWORD *)a2 + 356) )
      v12 = 200;
  }
  if ( *((float *)a2 + 337) <= 0.0 )
  {
LABEL_88:
    v12 = 1302;
    goto LABEL_89;
  }
  v13 = *v4;
  if ( !*v4 || *((float *)v13 + 337) <= 0.0 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1000 )
      goto LABEL_89;
    v32 = (_DWORD *)*((_DWORD *)this + 4);
    v33 = (float *)v32[493];
    if ( v33 && v33[337] > 0.0 )
    {
      if ( v33 == (float *)*v4 )
        v33 = 0;
    }
    else
    {
      v33 = 0;
    }
    v34 = (float *)v32[494];
    if ( v34 && v34[337] > 0.0 && v34 != (float *)*v4 )
      v33 = (float *)v32[494];
    v35 = (float *)v32[495];
    if ( v35 && v35[337] > 0.0 && v35 != (float *)*v4 )
      v33 = (float *)v32[495];
    v36 = (float *)v32[496];
    if ( v36 && v36[337] > 0.0 && v36 != (float *)*v4 )
      v33 = (float *)v32[496];
    if ( (v37 = (float *)v32[497]) != 0 && v37[337] > 0.0 && v37 != (float *)*v4 || (v37 = v33) != 0 )
    {
      if ( CTaskComplexKillCriminal::ChangeTarget((CEntity **)this, (CPed *)v37) )
        goto LABEL_89;
    }
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 700
      || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 701 )
    {
      goto LABEL_89;
    }
    v38 = *((_DWORD *)a2 + 289);
    if ( *((_DWORD *)a2 + 356) )
    {
      v39 = (*((_DWORD *)a2 + 289) & 0x100) == 0;
      if ( (v38 & 0x100) == 0 )
        v39 = *((_BYTE *)this + 26) == 0;
      if ( v39 )
      {
        v12 = 700;
        if ( *(_BYTE *)(*((_DWORD *)this + 4) + 1992) )
          v12 = 701;
        goto LABEL_89;
      }
    }
    if ( (v38 & 0x100) != 0
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 709
      && v11
      && *(float *)(v11 + 1348) > 0.0 )
    {
      if ( *(unsigned __int8 *)(v11 + 1157) << 31 )
        v12 = 1302;
      goto LABEL_89;
    }
    goto LABEL_88;
  }
  if ( *(_BYTE *)(*((_DWORD *)this + 4) + 1992) )
  {
    v14 = (char *)a2 + 1424;
    v15 = *((_DWORD *)a2 + 356);
    if ( v15 && *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      *(_DWORD *)(v15 + 1072) |= 0x8000u;
      v13 = *v4;
    }
    v17 = (float *)(*((unsigned __int8 *)v13 + 1157) << 31);
    v16 = v17 == 0;
    if ( v17 )
    {
      v17 = (float *)*((_DWORD *)v13 + 356);
      v16 = v17 == 0;
    }
    if ( !v16 )
    {
      v57 = v17[307];
      v58 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
        v58 = *(_DWORD *)v14 == 0;
      if ( v58 )
      {
        if ( sqrtf((float)((float)(v17[18] * v17[18]) + (float)(v17[19] * v17[19])) + (float)(v17[20] * v17[20])) >= 0.2 )
        {
          if ( *(_DWORD *)v14
            && !*((_BYTE *)this + 26)
            && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 701
            && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 700 )
          {
            v86 = *((_DWORD *)*v4 + 356);
            v87 = *(_DWORD *)(*(_DWORD *)v14 + 20);
            v88 = *(_DWORD *)(v86 + 20);
            v89 = v87 + 48;
            if ( !v87 )
              v89 = *(_DWORD *)v14 + 4;
            v90 = v88 + 48;
            if ( !v88 )
              v90 = v86 + 4;
            v91.n64_u64[0] = vsub_f32(*(float32x2_t *)(v90 + 4), *(float32x2_t *)(v89 + 4)).n64_u64[0];
            v92 = vmul_f32(v91, v91).n64_u64[0];
            if ( (float)((float)((float)((float)(*(float *)v90 - *(float *)v89) * (float)(*(float *)v90 - *(float *)v89))
                               + *(float *)&v92)
                       + *((float *)&v92 + 1)) > 400.0
              || sqrtf(
                   (float)((float)(*(float *)(v86 + 72) * *(float *)(v86 + 72))
                         + (float)(*(float *)(v86 + 76) * *(float *)(v86 + 76)))
                 + (float)(*(float *)(v86 + 80) * *(float *)(v86 + 80))) >= 0.2 )
            {
              v12 = 700;
              if ( *(_BYTE *)(*((_DWORD *)this + 4) + 1992) )
                v12 = 701;
            }
          }
        }
        else
        {
          v59 = *((_DWORD *)v13 + 5);
          v60 = *((_DWORD *)a2 + 5);
          v61 = (float *)(v60 + 48);
          if ( !v60 )
            v61 = (float *)((char *)a2 + 4);
          v62 = (float *)(v59 + 48);
          if ( !v59 )
            v62 = (float *)((char *)v13 + 4);
          v63 = *v62;
          v64 = v62[1];
          v65 = v62[2];
          if ( (float)((float)((float)((float)(*v62 - *v61) * (float)(*v62 - *v61))
                             + (float)((float)(v64 - v61[1]) * (float)(v64 - v61[1])))
                     + (float)((float)(v65 - v61[2]) * (float)(v65 - v61[2]))) < 36.0 )
            goto LABEL_200;
          if ( v11 && !(*(unsigned __int8 *)(v11 + 1157) << 31) )
          {
            v66 = *(_DWORD *)(v11 + 20);
            v67 = (float *)(v66 + 48);
            if ( !v66 )
              v67 = (float *)(v11 + 4);
            if ( (float)((float)((float)((float)(v63 - *v67) * (float)(v63 - *v67))
                               + (float)((float)(v64 - v67[1]) * (float)(v64 - v67[1])))
                       + (float)((float)(v65 - v67[2]) * (float)(v65 - v67[2]))) < 36.0 )
            {
LABEL_200:
              CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v120, a2);
              v120[0] = &off_6653A4;
              v100 = *v4;
              v101 = 1030;
              if ( *(float *)(*((_DWORD *)*v4 + 356) + 1228) < 250.0 )
                v101 = 704;
              v121 = v101;
              CEventGroup::Add((CEventGroup *)(*((_DWORD *)v100 + 272) + 104), (CEvent *)v120, 0);
              CPed::SetPedDefaultDecisionMaker(*v4);
              v102 = *(CPed **)(*((_DWORD *)*v4 + 356) + 1124);
              v103 = *v4 == v102;
              if ( *v4 != v102 )
                v103 = v102 == 0;
              if ( !v103 && !CPed::IsPlayer(v102) )
                CEventGroup::Add(
                  (CEventGroup *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)*v4 + 356) + 1124) + 1088) + 104),
                  (CEvent *)v120,
                  0);
              v104 = *v4;
              v105 = *((_DWORD *)*v4 + 356);
              if ( *(_BYTE *)(v105 + 1164) )
              {
                v106 = 0;
                do
                {
                  v107 = v105 + 4 * v106;
                  v108 = *(CPed **)(v107 + 1128);
                  v109 = v108 == 0;
                  if ( v108 )
                    v109 = v108 == v104;
                  if ( !v109 && !CPed::IsPlayer(*(CPed **)(v107 + 1128)) )
                  {
                    CEventGroup::Add((CEventGroup *)(*((_DWORD *)v108 + 272) + 104), (CEvent *)v120, 0);
                    CPed::SetPedDefaultDecisionMaker(v108);
                  }
                  v104 = *v4;
                  ++v106;
                  v105 = *((_DWORD *)*v4 + 356);
                }
                while ( v106 < *(unsigned __int8 *)(v105 + 1164) );
              }
              CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)v120);
              v14 = (char *)a2 + 1424;
              goto LABEL_216;
            }
          }
        }
      }
      else if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 724
             || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1022 )
      {
        v75 = *v4;
        v76 = (float *)*((_DWORD *)*v4 + 356);
        if ( sqrtf((float)((float)(v76[18] * v76[18]) + (float)(v76[19] * v76[19])) + (float)(v76[20] * v76[20])) >= 0.12 )
        {
          *((_DWORD *)this + 5) = 1065353216;
        }
        else
        {
          v77 = *((float *)this + 5) + (float)(*(float *)&CTimer::ms_fTimeStep / -50.0);
          *((float *)this + 5) = v77;
          if ( v77 <= 0.0 && CEventHandler::GetCurrentEventType((CEventHandler *)(*((_DWORD *)v75 + 272) + 52)) != 36 )
          {
            v78 = *((_DWORD *)*v4 + 356);
            v79 = *(_DWORD *)(*(_DWORD *)v14 + 20);
            v80 = *(_DWORD *)(v78 + 20);
            v81 = v79 + 48;
            if ( !v79 )
              v81 = *(_DWORD *)v14 + 4;
            v82 = v80 + 48;
            if ( !v80 )
              v82 = v78 + 4;
            v83.n64_u64[0] = vsub_f32(*(float32x2_t *)(v82 + 4), *(float32x2_t *)(v81 + 4)).n64_u64[0];
            v84 = vmul_f32(v83, v83).n64_u64[0];
            if ( (float)((float)((float)((float)(*(float *)v82 - *(float *)v81) * (float)(*(float *)v82 - *(float *)v81))
                               + *(float *)&v84)
                       + *((float *)&v84 + 1)) < 225.0 )
            {
              NextCriminalToKill = (CPed *)CTaskComplexKillCriminal::FindNextCriminalToKill(this, a2, 0);
              if ( NextCriminalToKill )
                CTaskComplexKillCriminal::ChangeTarget((CEntity **)this, NextCriminalToKill);
              v12 = 1000;
            }
          }
        }
      }
      else if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 709
             && (!v11 || *(float *)(v11 + 1348) <= 0.0 || *(unsigned __int8 *)(v11 + 1157) << 31) )
      {
        v12 = 724;
      }
      if ( v57 >= 250.0 )
        goto LABEL_216;
      goto LABEL_200;
    }
    v19 = *((unsigned __int8 *)a2 + 1157) << 31;
    v18 = v19 == 0;
    if ( v19 )
    {
      v19 = *(_DWORD *)v14;
      v18 = *(_DWORD *)v14 == 0;
    }
    if ( !v18 )
    {
      v68 = *(_DWORD *)(v19 + 20);
      v69 = v5;
      v70 = *((_DWORD *)v13 + 5);
      v71 = (float *)(v68 + 48);
      if ( !v68 )
        v71 = (float *)(v19 + 4);
      v72 = (float *)(v70 + 48);
      if ( !v70 )
        v72 = (float *)((char *)v13 + 4);
      v73 = (float)((float)((float)(*v72 - *v71) * (float)(*v72 - *v71))
                  + (float)((float)(v72[1] - v71[1]) * (float)(v72[1] - v71[1])))
          + (float)((float)(v72[2] - v71[2]) * (float)(v72[2] - v71[2]));
      if ( v11 && *(float *)(v11 + 1348) > 0.0 )
        v74 = *(_BYTE *)(v11 + 1157) & 1;
      else
        v74 = 1;
      v5 = v69;
      if ( v73 <= 225.0 )
      {
        v93 = 16.0;
        if ( *(_DWORD *)(v19 + 1440) == 9 )
          v93 = 5.0;
        if ( v73 < v93 )
          v12 = 1000;
        if ( (*(_BYTE *)(v19 + 958) & 0xFE) != 0x36 )
          v12 = 1000;
      }
      else if ( v74 )
      {
        v12 = 724;
      }
      goto LABEL_216;
    }
    if ( !*((_BYTE *)this + 26) )
    {
      v20 = *(_DWORD *)v14;
      if ( !*(_DWORD *)v14 )
        goto LABEL_89;
      v21 = *((_DWORD *)v13 + 5);
      v22 = *((_DWORD *)a2 + 5);
      v23 = (float *)(v22 + 48);
      if ( !v22 )
        v23 = (float *)((char *)a2 + 4);
      v24 = (float *)(v21 + 48);
      v25 = *v23;
      v26 = v23[1];
      v27 = v23[2];
      if ( !v21 )
        v24 = (float *)((char *)v13 + 4);
      if ( (float)((float)((float)((float)(*v24 - v25) * (float)(*v24 - v25))
                         + (float)((float)(v24[1] - v26) * (float)(v24[1] - v26)))
                 + (float)((float)(v24[2] - v27) * (float)(v24[2] - v27))) > 625.0 )
        goto LABEL_40;
      v28 = *(_DWORD *)(v20 + 20);
      v29 = (float *)(v28 + 48);
      if ( !v28 )
        v29 = (float *)(v20 + 4);
      if ( (float)((float)((float)((float)(*v29 - v25) * (float)(*v29 - v25))
                         + (float)((float)(v29[1] - v26) * (float)(v29[1] - v26)))
                 + (float)((float)(v29[2] - v27) * (float)(v29[2] - v27))) > 250.0 )
      {
LABEL_40:
        v30 = (CPed *)CTaskComplexKillCriminal::FindNextCriminalToKill(this, a2, 0);
        if ( !v30 || !CTaskComplexKillCriminal::ChangeTarget((CEntity **)this, v30) )
        {
          v12 = 701;
          goto LABEL_216;
        }
LABEL_115:
        v12 = 1000;
      }
    }
  }
  else
  {
    if ( !(*(unsigned __int8 *)(v11 + 1157) << 31)
      && !CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v11 + 1088), 701) )
    {
      v12 = 1000;
      v14 = (char *)a2 + 1424;
      goto LABEL_216;
    }
    v56 = *((_DWORD *)a2 + 356);
    if ( !v56 )
    {
      v12 = 1000;
      goto LABEL_89;
    }
    v14 = (char *)a2 + 1424;
    if ( *((_BYTE *)this + 26) )
      goto LABEL_115;
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      v12 = 709;
      if ( *(unsigned __int8 *)(v11 + 1157) << 31 )
      {
        v94 = *(_DWORD *)(v56 + 20);
        v95 = *((_DWORD *)*v4 + 5);
        v96 = v94 + 48;
        if ( !v94 )
          v96 = v56 + 4;
        v97 = v95 + 48;
        if ( !v95 )
          v97 = (int)*v4 + 4;
        v98.n64_u64[0] = vsub_f32(*(float32x2_t *)(v97 + 4), *(float32x2_t *)(v96 + 4)).n64_u64[0];
        v99 = vmul_f32(v98, v98).n64_u64[0];
        if ( sqrtf(
               (float)((float)((float)(*(float *)v97 - *(float *)v96) * (float)(*(float *)v97 - *(float *)v96))
                     + *(float *)&v99)
             + *((float *)&v99 + 1)) < 60.0 )
          v12 = 1022;
      }
    }
    else
    {
      v12 = 700;
    }
  }
LABEL_216:
  if ( *(_DWORD *)v14 && *(_DWORD *)(*(_DWORD *)v14 + 1440) == 9 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 724 )
    {
      if ( v12 == 200 )
        goto LABEL_222;
      v110 = 1022;
      if ( v12 == 1022 )
      {
LABEL_231:
        v117 = *((unsigned __int8 *)*v4 + 1157) << 31 == 0;
        if ( *((unsigned __int8 *)*v4 + 1157) << 31 )
          v117 = *((_DWORD *)*v4 + 356) == 0;
        *(_BYTE *)(*(_DWORD *)v14 + 58) = *(_BYTE *)(*(_DWORD *)v14 + 58) & 7 | 0x18;
        if ( v117 )
        {
          *(_BYTE *)(*(_DWORD *)v14 + 958) = 55;
          *(_BYTE *)(*(_DWORD *)v14 + 980) = 20;
          *(float *)(*(_DWORD *)v14 + 972) = (float)*(unsigned __int8 *)(*(_DWORD *)v14 + 980);
          *(_BYTE *)(*(_DWORD *)v14 + 957) = 2;
          v118 = v4;
        }
        else
        {
          *(_BYTE *)(*(_DWORD *)v14 + 958) = 53;
          *(_BYTE *)(*(_DWORD *)v14 + 980) = *(_BYTE *)(*((_DWORD *)*v4 + 356) + 980) + 10;
          *(float *)(*(_DWORD *)v14 + 972) = (float)*(unsigned __int8 *)(*(_DWORD *)v14 + 980);
          *(_BYTE *)(*(_DWORD *)v14 + 957) = 2;
          v118 = (CPed **)((char *)*v4 + 1424);
        }
        v12 = v110;
        *(_DWORD *)(*(_DWORD *)v14 + 1056) = *v118;
        goto LABEL_89;
      }
      if ( v12 == 724 )
      {
LABEL_222:
        v111 = *(_DWORD *)(*(_DWORD *)v14 + 20);
        v112 = *((_DWORD *)*v4 + 5);
        v113 = v111 + 48;
        if ( !v111 )
          v113 = *(_DWORD *)v14 + 4;
        v114 = v112 + 48;
        if ( !v112 )
          v114 = (int)*v4 + 4;
        v115.n64_u64[0] = vsub_f32(*(float32x2_t *)(v114 + 4), *(float32x2_t *)(v113 + 4)).n64_u64[0];
        v116 = vmul_f32(v115, v115).n64_u64[0];
        if ( sqrtf(
               (float)((float)((float)(*(float *)v114 - *(float *)v113) * (float)(*(float *)v114 - *(float *)v113))
                     + *(float *)&v116)
             + *((float *)&v116 + 1)) < 60.0 )
        {
          v110 = 1022;
          goto LABEL_231;
        }
      }
    }
    else
    {
      v110 = 1022;
      if ( v12 == 1022 )
        goto LABEL_231;
    }
    v16 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1022;
    v110 = v12;
    if ( v16 )
      goto LABEL_231;
  }
LABEL_89:
  v40 = *v4;
  v8 = v5;
  v41 = v12;
  v42 = *v4 == 0;
  if ( *v4 )
    v42 = *((unsigned __int8 *)v40 + 1157) << 31 == 0;
  if ( !v42 )
  {
    v43 = *((_DWORD *)v40 + 356);
    v44 = v43 == 0;
    if ( v43 )
      v44 = *(_BYTE *)(v43 + 1160) == 0;
    if ( !v44 )
    {
      v45 = *(_DWORD *)(v43 + 20);
      v46 = *((_DWORD *)a2 + 5);
      v47 = (char *)(v46 + 48);
      if ( !v46 )
        v47 = (char *)a2 + 4;
      v48 = v45 + 48;
      if ( !v45 )
        v48 = v43 + 4;
      v49.n64_u64[0] = vsub_f32(*(float32x2_t *)(v48 + 4), *(float32x2_t *)(v47 + 4)).n64_u64[0];
      v50 = vmul_f32(v49, v49).n64_u64[0];
      if ( sqrtf(
             (float)((float)((float)(*(float *)v48 - *(float *)v47) * (float)(*(float *)v48 - *(float *)v47))
                   + *(float *)&v50)
           + *((float *)&v50 + 1)) < 60.0
        && *(_BYTE *)(v43 + 1164) )
      {
        v51 = 0;
        do
        {
          v52 = *(_DWORD *)(v43 + 4 * v51 + 1128);
          v53 = v52 == 0;
          if ( v52 )
            v53 = *(unsigned __int8 *)(v52 + 1157) << 31 == 0;
          if ( !v53 && !CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v52 + 1088), 1022) )
          {
            v55 = (CTaskSimpleGangDriveBy *)CTask::operator new((CTask *)&dword_44, v54);
            CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(v55, a2, 0, 70.0, 70, 8, 0);
            CTaskManager::SetTask((CTaskManager *)(*(_DWORD *)(v52 + 1088) + 4), v55, 3, 0);
          }
          ++v51;
          v43 = *((_DWORD *)*v4 + 356);
        }
        while ( v51 < *(unsigned __int8 *)(v43 + 1164) );
      }
    }
  }
  if ( v41 != 200
    && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) == 1 )
  {
    return CTaskComplexKillCriminal::CreateSubTask(this, v41, a2, 0);
  }
  return v8;
}


// ============================================================

// Address: 0x5409d4
// Original: _ZNK24CTaskComplexKillCriminal5CloneEv
// Demangled: CTaskComplexKillCriminal::Clone(void)
int __fastcall CTaskComplexKillCriminal::Clone(CTaskComplexKillCriminal *this, unsigned int a2)
{
  int v3; // r4
  CPed *v4; // r6
  int v5; // r5
  CEntity *v6; // r0
  int v7; // r1

  v3 = CTask::operator new((CTask *)&dword_20, a2);
  v4 = (CPed *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 1077936128;
  *(_WORD *)(v3 + 24) = 0;
  *(_BYTE *)(v3 + 26) = 0;
  *(_BYTE *)(v3 + 30) = 0;
  *(_DWORD *)v3 = &off_66D04C;
  *(_DWORD *)(v3 + 12) = v4;
  v5 = v3 + 12;
  if ( v4 )
  {
    if ( CPed::IsPlayer(v4)
      || (v6 = *(CEntity **)v5, v7 = *(_DWORD *)(*(_DWORD *)v5 + 1436), (unsigned int)v7 <= 0x13)
      && ((1 << v7) & (unsigned int)"v") != 0
      || v7 > 23
      || *((_BYTE *)v6 + 1096) == 2 )
    {
      *(_DWORD *)v5 = 0;
    }
    else
    {
      CEntity::RegisterReference(v6, (CEntity **)(v3 + 12));
    }
  }
  return v3;
}


// ============================================================

// Address: 0x540a58
// Original: _ZNK24CTaskComplexKillCriminal11GetTaskTypeEv
// Demangled: CTaskComplexKillCriminal::GetTaskType(void)
int __fastcall CTaskComplexKillCriminal::GetTaskType(CTaskComplexKillCriminal *this)
{
  return 1105;
}


// ============================================================
