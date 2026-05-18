
// Address: 0x1939c0
// Original: j__ZN15CTaskSimpleDeadC2Eib
// Demangled: CTaskSimpleDead::CTaskSimpleDead(int,bool)
// attributes: thunk
void __fastcall CTaskSimpleDead::CTaskSimpleDead(CTaskSimpleDead *this, int a2, bool a3)
{
  _ZN15CTaskSimpleDeadC2Eib(this, a2, a3);
}


// ============================================================

// Address: 0x19931c
// Original: j__ZN15CTaskSimpleDead10CreateTaskEv
// Demangled: CTaskSimpleDead::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleDead::CreateTask(CTaskSimpleDead *this)
{
  return _ZN15CTaskSimpleDead10CreateTaskEv(this);
}


// ============================================================

// Address: 0x49120c
// Original: _ZN15CTaskSimpleDead10CreateTaskEv
// Demangled: CTaskSimpleDead::CreateTask(void)
void __fastcall CTaskSimpleDead::CreateTask(CTaskSimpleDead *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  CTaskSimpleDead *v7; // r0
  bool v8; // r2
  bool v9; // [sp+7h] [bp-11h] BYREF
  int v10; // [sp+8h] [bp-10h] BYREF
  _BYTE v11[2]; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v12[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, (char *)&stderr + 1, v4);
  v7 = (CTaskSimpleDead *)CTask::operator new((CTask *)&word_10, v6);
  v8 = v9;
  if ( v9 )
    v8 = 1;
  CTaskSimpleDead::CTaskSimpleDead(v7, v10, v8);
}


// ============================================================

// Address: 0x4eb89c
// Original: _ZN15CTaskSimpleDeadC2Eib
// Demangled: CTaskSimpleDead::CTaskSimpleDead(int,bool)
void __fastcall CTaskSimpleDead::CTaskSimpleDead(CTaskSimpleDead *this, int a2, bool a3)
{
  int v5; // r0
  char v6; // r2

  CTaskSimple::CTaskSimple(this);
  v6 = *(_BYTE *)(v5 + 12);
  *(_DWORD *)(v5 + 8) = a2;
  *(_DWORD *)v5 = &off_669E24;
  *(_BYTE *)(v5 + 12) = v6 & 0xF8 | (2 * a3) | 1;
}


// ============================================================

// Address: 0x4eb8cc
// Original: _ZN15CTaskSimpleDeadD2Ev
// Demangled: CTaskSimpleDead::~CTaskSimpleDead()
// attributes: thunk
void __fastcall CTaskSimpleDead::~CTaskSimpleDead(CTaskSimpleDead *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4eb8d0
// Original: _ZN15CTaskSimpleDeadD0Ev
// Demangled: CTaskSimpleDead::~CTaskSimpleDead()
void __fastcall CTaskSimpleDead::~CTaskSimpleDead(CTaskSimpleDead *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4eb8e0
// Original: _ZN15CTaskSimpleDead10ProcessPedEP4CPed
// Demangled: CTaskSimpleDead::ProcessPed(CPed *)
int __fastcall CTaskSimpleDead::ProcessPed(CTaskSimpleDead *this, CPed *a2, const CPed *a3)
{
  float32x2_t v3; // d1
  float32x2_t v4; // d8
  float32x2_t v5; // d9
  float32x2_t v6; // d10
  char v9; // r0
  _BOOL4 v10; // r5
  _BOOL4 v11; // r9
  unsigned int v12; // r2
  _BOOL4 v13; // r5
  int WeaponInfo; // r0
  CEventGroup *EventGlobalGroup; // r0
  CAccidentManager *AccidentManager; // r0
  int v17; // r0
  float *v18; // r1
  float v19; // s0
  float v20; // s10
  float v21; // s12
  CLocalisation *v22; // r0
  int v23; // r12
  unsigned int v24; // lr
  float v25; // s0
  float v26; // s0
  float *v27; // r4
  int v28; // r3
  int v29; // r2
  _DWORD *v30; // r0
  int v31; // r1
  char *v32; // r5
  int v33; // r6
  _DWORD *v34; // r1
  float32x2_t v35; // d16
  unsigned __int64 v36; // d2
  int v37; // r1
  int v38; // r0
  char *v39; // r2
  int v40; // r3
  unsigned int v41; // r6
  double v42; // d16
  int v43; // r0
  CLocalisation *v44; // r0
  int v45; // r0
  float *v47; // [sp+8h] [bp-80h]
  float v48; // [sp+34h] [bp-54h] BYREF
  double v49; // [sp+38h] [bp-50h] BYREF
  int v50; // [sp+40h] [bp-48h]

  v9 = *((_BYTE *)this + 12);
  if ( (v9 & 1) != 0 )
  {
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      if ( (CCarEnterExit::ComputeTargetDoorToExit(*((CCarEnterExit **)a2 + 356), a2, a3) | 1) == 0xB )
        v12 = 187;
      else
        v12 = 188;
      CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v12);
    }
    CPed::SetPedState(a2);
    *((_BYTE *)this + 12) &= ~1u;
    v11 = (*((_DWORD *)a2 + 289) & 3) != 0;
    v13 = *(CPed **)(FindPlayerPed(0) + 1824) == a2 || FindPlayerPed(1) && *(CPed **)(FindPlayerPed(1) + 1824) == a2;
    if ( (*((_BYTE *)this + 12) & 2) == 0 && !v13 && !*((_DWORD *)a2 + 347) )
      *((_DWORD *)a2 + 7) &= ~1u;
    *((_DWORD *)a2 + 337) = 0;
    WeaponInfo = CWeaponInfo::GetWeaponInfo();
    CPed::RemoveWeaponModel(a2, *(_DWORD *)(WeaponInfo + 12));
    *((_BYTE *)a2 + 1820) = 0;
    if ( !CPed::IsPlayer(a2) )
    {
      CPed::RemoveWeaponAnims(a2, 0, -1000.0);
      CPed::CreateDeadPedWeaponPickups(a2);
      CPed::CreateDeadPedMoney(a2);
    }
    CEventDeadPed::CEventDeadPed((CEventDeadPed *)&v49, a2, (*((_BYTE *)this + 12) & 2) != 0, *((_DWORD *)this + 2));
    EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
    CEventGroup::Add(EventGlobalGroup, (CEvent *)&v49, 0);
    AccidentManager = (CAccidentManager *)GetAccidentManager();
    CAccidentManager::ReportAccident(AccidentManager, a2);
    CEventDeadPed::~CEventDeadPed((CEventDeadPed *)&v49);
    v9 = *((_BYTE *)this + 12);
    v10 = v13;
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( (v9 & 3) != 2 || !(*((unsigned __int8 *)a2 + 1156) << 31) )
  {
    if ( (*((_DWORD *)a2 + 7) & 1) != 0
      && (v9 & 2) == 0
      && *((unsigned __int8 *)a2 + 1156) << 31
      && !*((_DWORD *)a2 + 347)
      && *(CPed **)(FindPlayerPed(0) + 1824) != a2 )
    {
      if ( FindPlayerPed(1) )
      {
        if ( !(v10 | (*(_DWORD *)(FindPlayerPed(1) + 1824) == (_DWORD)a2)) )
          goto LABEL_66;
      }
      else if ( !v10 )
      {
LABEL_66:
        *((_DWORD *)a2 + 7) &= ~1u;
        goto LABEL_29;
      }
    }
    if ( !v11 )
      goto LABEL_30;
    goto LABEL_29;
  }
  *((_DWORD *)a2 + 7) &= ~1u;
  *((_BYTE *)this + 12) &= ~2u;
  v17 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x27u);
  *(_WORD *)(v17 + 46) &= ~8u;
LABEL_29:
  v18 = (float *)*((_DWORD *)a2 + 5);
  v4.n64_u32[0] = -1.0;
  v19 = *((float *)a2 + 352);
  v5.n64_u32[0] = 1.0;
  v20 = *((float *)a2 + 351);
  v21 = *((float *)a2 + 353);
  v3.n64_f32[0] = (float)((float)(v20 * *v18) + (float)(v19 * v18[1])) + (float)(v21 * v18[2]);
  v6.n64_f32[0] = (float)((float)(v20 * v18[4]) + (float)(v19 * v18[5])) + (float)(v21 * v18[6]);
  *((float *)a2 + 331) = asinf(vmin_f32(vmax_f32(v3, v4), v5).n64_f32[0]);
  *((float *)a2 + 329) = asinf(vmin_f32(vmax_f32(v6, v4), v5).n64_f32[0]);
LABEL_30:
  v22 = (CLocalisation *)CPed::DeadPedMakesTyresBloody(a2);
  if ( CLocalisation::Blood(v22) && (*((_BYTE *)this + 12) & 2) == 0 )
  {
    v23 = CTimer::m_snTimeInMilliseconds;
    v24 = CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 2);
    if ( v24 >= 0x7D0 )
    {
      if ( v24 <= 0x1B58 )
        v25 = (float)(v24 - 2000) * 0.00015;
      else
        v25 = 0.75;
    }
    else
    {
      v25 = 0.0;
    }
    v26 = v25 * v25;
    v27 = (float *)((char *)a2 + 4);
    v28 = 0;
    v29 = *((_DWORD *)a2 + 272) + 304;
    do
    {
      v30 = *(_DWORD **)(v29 + 4 * v28);
      if ( v30 )
      {
        v31 = *((_DWORD *)a2 + 5);
        v32 = (char *)a2 + 4;
        v33 = v30[5];
        if ( v31 )
          v32 = (char *)(v31 + 48);
        v34 = (_DWORD *)(v33 + 48);
        if ( !v33 )
          v34 = v30 + 1;
        v35.n64_u64[0] = vsub_f32(*(float32x2_t *)(v34 + 1), *(float32x2_t *)(v32 + 4)).n64_u64[0];
        v36 = vmul_f32(v35, v35).n64_u64[0];
        if ( (float)((float)((float)((float)(*(float *)v34 - *(float *)v32) * (float)(*(float *)v34 - *(float *)v32))
                           + *(float *)&v36)
                   + *((float *)&v36 + 1)) < v26 )
        {
          v37 = v30[289];
          v30[470] = 200;
          v30[289] = v37 | 0x10000000;
        }
      }
      ++v28;
    }
    while ( v28 != 16 );
    if ( v24 > 0x7D0 )
    {
      v38 = *((unsigned __int8 *)this + 12);
      if ( (v38 & 4) == 0 )
      {
        v39 = (char *)a2 + 4;
        v40 = *((_DWORD *)a2 + 5);
        v41 = v24 - 2000;
        if ( v40 )
          v39 = (char *)(v40 + 48);
        v42 = *(double *)v39;
        v50 = *((_DWORD *)v39 + 2);
        v49 = v42;
        if ( v41 <= v23 - CTimer::m_snPreviousTimeInMilliseconds )
        {
          if ( CWaterLevel::GetWaterLevelNoWaves(
                 *(CWaterLevel **)v39,
                 *((float *)v39 + 1),
                 *((float *)v39 + 2),
                 COERCE_FLOAT(&v48),
                 0,
                 0,
                 v47) == 1 )
          {
            v43 = *((_DWORD *)a2 + 5);
            if ( v43 )
              v27 = (float *)(v43 + 48);
            if ( v27[2] <= v48 )
              *((_BYTE *)this + 12) |= 4u;
          }
          v38 = *((unsigned __int8 *)this + 12);
        }
        v44 = (CLocalisation *)(v38 << 29);
        if ( (int)v44 >= 0 && CLocalisation::Blood(v44) )
        {
          if ( v41 > 0x1387 )
          {
            CShadows::AddPermanentShadow(
              1,
              gpBloodPoolTex,
              (int)&v49,
              1061158913,
              0.0,
              0.0,
              -0.75,
              255,
              200,
              0,
              0,
              4.0,
              40000,
              1.0);
            *((_BYTE *)this + 12) |= 4u;
          }
          else
          {
            CShadows::StoreStaticShadow(
              (int)this + 17,
              1,
              gpBloodPoolTex,
              (int)&v49,
              (float)v41 * 0.00015,
              0.0,
              0.0,
              (float)v41 * -0.00015,
              255,
              200,
              0,
              0,
              4.0,
              1.0,
              40.0,
              0,
              0.0);
          }
        }
      }
    }
  }
  if ( (*((_BYTE *)this + 12) & 2) != 0 )
  {
    *((_DWORD *)a2 + 289) &= 0xFFFFFFFC;
  }
  else
  {
    v45 = *((_DWORD *)a2 + 333);
    *((_DWORD *)a2 + 18) = 0;
    *((_DWORD *)a2 + 19) = 0;
    *((_DWORD *)a2 + 20) = 0;
    *((_DWORD *)a2 + 333) = v45 | 8;
  }
  return 0;
}


// ============================================================

// Address: 0x4f2b60
// Original: _ZNK15CTaskSimpleDead5CloneEv
// Demangled: CTaskSimpleDead::Clone(void)
int __fastcall CTaskSimpleDead::Clone(CTaskSimpleDead *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  char v4; // r5
  int v5; // r4
  int result; // r0
  char v7; // r2

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_BYTE *)this + 12);
  v5 = *((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 8) = v5;
  v7 = *(_BYTE *)(result + 12) & 0xF8;
  *(_DWORD *)result = &off_669E24;
  *(_BYTE *)(result + 12) = v4 & 2 | v7 | 1;
  return result;
}


// ============================================================

// Address: 0x4f2b98
// Original: _ZNK15CTaskSimpleDead11GetTaskTypeEv
// Demangled: CTaskSimpleDead::GetTaskType(void)
int __fastcall CTaskSimpleDead::GetTaskType(CTaskSimpleDead *this)
{
  return 218;
}


// ============================================================

// Address: 0x4f2b9c
// Original: _ZN15CTaskSimpleDead13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleDead::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleDead::MakeAbortable(CTaskSimpleDead *this, CPed *a2, int a3, const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x4f2ba0
// Original: _ZN15CTaskSimpleDead9SerializeEv
// Demangled: CTaskSimpleDead::Serialize(void)
int __fastcall CTaskSimpleDead::Serialize(CTaskSimpleDead *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r2
  int v9; // r0
  bool v10[17]; // [sp+7h] [bp-11h] BYREF

  v2 = (*(int (__fastcall **)(CTaskSimpleDead *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleDead *))(*(_DWORD *)this + 20))(this) == 218 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 2);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    v10[0] = (*((_BYTE *)this + 12) & 2) != 0;
    if ( UseDataFence )
      AddDataFence();
    return CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v10, (char *)&stderr + 1, v7);
  }
  else
  {
    v9 = (*(int (__fastcall **)(CTaskSimpleDead *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(218, v9);
  }
}


// ============================================================
