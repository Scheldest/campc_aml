
// Address: 0x1a0d44
// Original: j__ZN20CTaskComplexRoadRageC2EP4CPed
// Demangled: CTaskComplexRoadRage::CTaskComplexRoadRage(CPed *)
// attributes: thunk
void __fastcall CTaskComplexRoadRage::CTaskComplexRoadRage(CTaskComplexRoadRage *this, CPed *a2)
{
  _ZN20CTaskComplexRoadRageC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x4e7944
// Original: _ZN20CTaskComplexRoadRageC2EP4CPed
// Demangled: CTaskComplexRoadRage::CTaskComplexRoadRage(CPed *)
void __fastcall CTaskComplexRoadRage::CTaskComplexRoadRage(CTaskComplexRoadRage *this, CPed *a2)
{
  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_669A28;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4e7974
// Original: _ZN20CTaskComplexRoadRageD2Ev
// Demangled: CTaskComplexRoadRage::~CTaskComplexRoadRage()
void __fastcall CTaskComplexRoadRage::~CTaskComplexRoadRage(CTaskComplexRoadRage *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669A28;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e79a0
// Original: _ZN20CTaskComplexRoadRageD0Ev
// Demangled: CTaskComplexRoadRage::~CTaskComplexRoadRage()
void __fastcall CTaskComplexRoadRage::~CTaskComplexRoadRage(CTaskComplexRoadRage *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669A28;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e79d0
// Original: _ZN20CTaskComplexRoadRage13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexRoadRage::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexRoadRage::MakeAbortable(CTaskComplexRoadRage *this, CPed *a2, int a3, const CEvent *a4)
{
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x4e79dc
// Original: _ZN20CTaskComplexRoadRage18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexRoadRage::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexRoadRage::CreateFirstSubTask(CTaskComplexRoadRage *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  bool v6; // zf
  CPed *v8; // r0
  int v9; // r1
  int v10; // r6
  int v11; // r0
  int v12; // r1

  v4 = *((_DWORD *)this + 3);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *((_DWORD *)a2 + 356) == 0;
  if ( v5 )
    return 0;
  v6 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    v6 = *(_DWORD *)(v4 + 1436) == 6;
  if ( v6 )
    return 0;
  if ( (unsigned int)(*((_DWORD *)a2 + 359) - 7) <= 9 )
  {
    CPed::GiveDelayedWeapon();
    v8 = a2;
    v9 = 22;
LABEL_17:
    CPed::SetCurrentWeapon(v8, v9);
    goto LABEL_18;
  }
  if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 49 )
  {
    v10 = 6;
    v11 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
    if ( v11 < 67 )
      v10 = 2;
    if ( v11 < 34 )
      v10 = 5;
    CPed::GiveDelayedWeapon();
    v8 = a2;
    v9 = v10;
    goto LABEL_17;
  }
LABEL_18:
  CInterestingEvents::Add();
  v12 = 704;
  if ( (*(_DWORD *)(*((_DWORD *)this + 3) + 1156) & 0x100) == 0 )
    v12 = 1000;
  return CTaskComplexRoadRage::CreateSubTask(this, v12, a2);
}


// ============================================================

// Address: 0x4e7adc
// Original: _ZNK20CTaskComplexRoadRage13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexRoadRage::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexRoadRage::CreateSubTask(CTaskComplexRoadRage *this, int a2, CVehicle **a3)
{
  int v5; // r0
  int v6; // r4
  CEntity *v7; // r5
  char v8; // r2
  char v9; // r0
  int v10; // r0
  float v11; // s16
  CEntity *v12; // r5
  char v13; // r1
  CEntity **v14; // r1
  CEntity *v15; // r5
  char v16; // r2
  CEntity *v17; // r5
  char v18; // r2
  int v19; // r1

  v5 = *((_DWORD *)this + 3);
  v6 = 0;
  if ( !v5 )
    return v6;
  if ( a2 > 906 )
  {
    if ( a2 >= 1000 )
    {
      if ( a2 == 1003 )
      {
        if ( *(_DWORD *)(v5 + 1424) )
        {
          v6 = CTask::operator new((CTask *)&dword_20, 0x3EBu);
          v12 = *(CEntity **)(*((_DWORD *)this + 3) + 1424);
          CTaskComplex::CTaskComplex((CTaskComplex *)v6);
          *(_DWORD *)v6 = &off_669974;
          *(_DWORD *)(v6 + 20) = 0;
          *(_DWORD *)(v6 + 24) = 0;
          *(_DWORD *)(v6 + 28) = 0;
          *(_DWORD *)(v6 + 16) = v12;
          v14 = (CEntity **)(v6 + 16);
          if ( !v12 )
            return v6;
LABEL_23:
          CEntity::RegisterReference(v12, v14);
          return v6;
        }
        v6 = CTask::operator new((CTask *)&dword_38, 0x3EBu);
        v17 = (CEntity *)*((_DWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v6);
        *(_DWORD *)(v6 + 20) = 0;
        *(_DWORD *)(v6 + 24) = 0;
        *(_DWORD *)(v6 + 28) = 0;
        *(_BYTE *)(v6 + 32) = 1;
        *(_DWORD *)(v6 + 40) = -1;
        *(_WORD *)(v6 + 52) = 0;
        *(_DWORD *)(v6 + 48) = 0;
        v18 = *(_BYTE *)(v6 + 12);
        *(_DWORD *)(v6 + 44) = 0;
        *(_DWORD *)v6 = &off_669850;
        v9 = v18 & 0x8B | 4;
        *(_BYTE *)(v6 + 12) = v9;
        *(_DWORD *)(v6 + 16) = v17;
        if ( v17 )
        {
          CEntity::RegisterReference(v17, (CEntity **)(v6 + 16));
          v9 = *(_BYTE *)(v6 + 12);
        }
      }
      else
      {
        if ( a2 != 1000 )
          return v6;
        v6 = CTask::operator new((CTask *)&dword_38, 0x3E8u);
        v7 = (CEntity *)*((_DWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v6);
        *(_DWORD *)(v6 + 20) = 0;
        *(_DWORD *)(v6 + 24) = 0;
        *(_DWORD *)(v6 + 28) = 0;
        *(_BYTE *)(v6 + 32) = 1;
        *(_DWORD *)(v6 + 40) = -1;
        *(_WORD *)(v6 + 52) = 0;
        *(_DWORD *)(v6 + 48) = 0;
        v8 = *(_BYTE *)(v6 + 12);
        *(_DWORD *)(v6 + 44) = 0;
        *(_DWORD *)v6 = &off_669850;
        v9 = v8 & 0x8B | 4;
        *(_BYTE *)(v6 + 12) = v9;
        *(_DWORD *)(v6 + 16) = v7;
        if ( v7 )
        {
          CEntity::RegisterReference(v7, (CEntity **)(v6 + 16));
          v9 = *(_BYTE *)(v6 + 12);
        }
      }
    }
    else
    {
      if ( a2 != 907 )
      {
        if ( a2 == 920 )
        {
          v6 = CTask::operator new((CTask *)&word_28, 0x398u);
          CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(
            (CTaskComplexTurnToFaceEntityOrCoord *)v6,
            *((CEntity **)this + 3),
            0.5,
            0.2);
        }
        return v6;
      }
      v10 = *(_DWORD *)(v5 + 1424);
      if ( v10 )
      {
        v11 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v10 + 38)]) + 44) + 36);
        v6 = CTask::operator new((CTask *)&dword_4C, (unsigned int)CModelInfo::ms_modelInfoPtrs);
        v12 = *(CEntity **)(*((_DWORD *)this + 3) + 1424);
        CTaskComplex::CTaskComplex((CTaskComplex *)v6);
        *(_DWORD *)v6 = &off_6656E4;
        *(_DWORD *)(v6 + 16) = 20000;
        *(_DWORD *)(v6 + 20) = 1000;
        *(float *)(v6 + 24) = v11 + 1.0;
        *(_DWORD *)(v6 + 28) = 0x40000000;
        *(_DWORD *)(v6 + 32) = 0;
        *(_DWORD *)(v6 + 36) = 0x40000000;
        *(_WORD *)(v6 + 48) = 0;
        *(_WORD *)(v6 + 60) = 0;
        *(_DWORD *)(v6 + 40) = 0;
        *(_DWORD *)(v6 + 44) = 0;
        *(_DWORD *)(v6 + 52) = 0;
        *(_DWORD *)(v6 + 56) = 0;
        v13 = *(_BYTE *)(v6 + 72);
        *(_DWORD *)(v6 + 64) = &off_665720;
        *(_DWORD *)(v6 + 68) = 6;
        *(_BYTE *)(v6 + 72) = v13 & 0xF0 | 3;
        *(_DWORD *)(v6 + 12) = v12;
        v14 = (CEntity **)(v6 + 12);
        if ( !v12 )
          return v6;
        goto LABEL_23;
      }
      v6 = CTask::operator new((CTask *)&dword_38, 0x38Bu);
      v15 = (CEntity *)*((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex((CTaskComplex *)v6);
      *(_DWORD *)(v6 + 20) = 0;
      *(_DWORD *)(v6 + 24) = 0;
      *(_DWORD *)(v6 + 28) = 0;
      *(_BYTE *)(v6 + 32) = 1;
      *(_DWORD *)(v6 + 40) = -1;
      *(_WORD *)(v6 + 52) = 0;
      *(_DWORD *)(v6 + 48) = 0;
      v16 = *(_BYTE *)(v6 + 12);
      *(_DWORD *)(v6 + 44) = 0;
      *(_DWORD *)v6 = &off_669850;
      v9 = v16 & 0x8B | 4;
      *(_BYTE *)(v6 + 12) = v9;
      *(_DWORD *)(v6 + 16) = v15;
      if ( v15 )
      {
        CEntity::RegisterReference(v15, (CEntity **)(v6 + 16));
        v9 = *(_BYTE *)(v6 + 12);
      }
    }
    v19 = CTimer::m_snTimeInMilliseconds;
    *(_BYTE *)(v6 + 12) = v9 & 0xF7;
    *(_DWORD *)(v6 + 36) = v19;
    return v6;
  }
  switch ( a2 )
  {
    case 302:
      v6 = CTask::operator new((CTask *)&word_10, 0x12Eu);
      CTaskSimpleShakeFist::CTaskSimpleShakeFist((CTaskSimpleShakeFist *)v6);
      break;
    case 701:
      v6 = CTask::operator new((CTask *)&dword_50, 0x2BDu);
      CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver((CTaskComplexEnterCarAsDriver *)v6, a3[356]);
      break;
    case 704:
      v6 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v6, a3[356], 0, 0, 1, 0);
      break;
  }
  return v6;
}


// ============================================================

// Address: 0x4e7dc8
// Original: _ZN20CTaskComplexRoadRage17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexRoadRage::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexRoadRage::CreateNextSubTask(CTaskComplexRoadRage *this, CVehicle **a2)
{
  int v4; // r0
  int v5; // r1
  bool v6; // zf
  int v8; // r0
  bool v9; // zf
  CVehicle *v10; // r0

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 <= 906 )
  {
    if ( v4 == 302 )
    {
      v5 = 907;
      return CTaskComplexRoadRage::CreateSubTask(this, v5, a2);
    }
    if ( v4 != 701 )
    {
      if ( v4 == 704 )
      {
        v5 = 1302;
        if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
          v5 = 920;
        return CTaskComplexRoadRage::CreateSubTask(this, v5, a2);
      }
      return 0;
    }
    v10 = a2[356];
    if ( v10 )
    {
      *((_BYTE *)v10 + 958) = 1;
      *((_BYTE *)a2[356] + 980) = 10;
    }
LABEL_25:
    v5 = 1302;
    return CTaskComplexRoadRage::CreateSubTask(this, v5, a2);
  }
  if ( v4 >= 1000 )
  {
    v6 = v4 == 1003;
    if ( v4 != 1003 )
      v6 = v4 == 1000;
    if ( !v6 )
      return 0;
    goto LABEL_25;
  }
  if ( v4 == 907 )
  {
    v8 = *((_DWORD *)this + 3);
    v9 = *(unsigned __int8 *)(v8 + 1157) << 31 == 0;
    if ( *(unsigned __int8 *)(v8 + 1157) << 31 )
      v9 = *(_DWORD *)(v8 + 1424) == 0;
    if ( v9 || !a2[7 * *((char *)a2 + 1820) + 361] )
      v5 = 1000;
    else
      v5 = 1003;
    return CTaskComplexRoadRage::CreateSubTask(this, v5, a2);
  }
  if ( v4 != 920 )
    return 0;
  v5 = 302;
  return CTaskComplexRoadRage::CreateSubTask(this, v5, a2);
}


// ============================================================

// Address: 0x4e7e98
// Original: _ZN20CTaskComplexRoadRage14ControlSubTaskEP4CPed
// Demangled: CTaskComplexRoadRage::ControlSubTask(CPed *)
int __fastcall CTaskComplexRoadRage::ControlSubTask(CTaskComplexRoadRage *this, CPed *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  char *v9; // r3
  unsigned int v10; // r1
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1
  int v14; // r0
  CEntity *v15; // r6
  char v16; // r1
  char v17; // r0
  int v18; // r1
  int v19; // r1
  int v20; // r2
  char *v21; // r3
  float32x2_t v22; // d16
  unsigned __int64 v23; // d1

  v4 = *((_DWORD *)this + 2);
  if ( *((_DWORD *)this + 3) )
  {
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
    if ( v5 == 1003 )
    {
      v14 = *((_DWORD *)this + 3);
      if ( *(unsigned __int8 *)(v14 + 1157) << 31 )
      {
        if ( *((_DWORD *)a2 + 356) )
        {
          v19 = *((_DWORD *)a2 + 5);
          v20 = *(_DWORD *)(v14 + 20);
          v21 = (char *)(v19 + 48);
          if ( !v19 )
            v21 = (char *)a2 + 4;
          v10 = v20 + 48;
          if ( !v20 )
            v10 = v14 + 4;
          v22.n64_u64[0] = vsub_f32(*(float32x2_t *)(v10 + 4), *(float32x2_t *)(v21 + 4)).n64_u64[0];
          v23 = vmul_f32(v22, v22).n64_u64[0];
          if ( (float)((float)((float)((float)(*(float *)v10 - *(float *)v21) * (float)(*(float *)v10 - *(float *)v21))
                             + *(float *)&v23)
                     + *((float *)&v23 + 1)) > 400.0 )
          {
LABEL_25:
            v4 = CTask::operator new((CTask *)&dword_50, v10);
            CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(
              (CTaskComplexEnterCarAsDriver *)v4,
              *((CVehicle **)a2 + 356));
          }
        }
      }
      else
      {
        if ( !v14 )
          return 0;
        v4 = CTask::operator new((CTask *)&dword_38, 0);
        v15 = (CEntity *)*((_DWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v4);
        *(_DWORD *)(v4 + 20) = 0;
        *(_DWORD *)(v4 + 24) = 0;
        *(_DWORD *)(v4 + 28) = 0;
        *(_BYTE *)(v4 + 32) = 1;
        *(_DWORD *)(v4 + 40) = -1;
        *(_WORD *)(v4 + 52) = 0;
        *(_DWORD *)(v4 + 48) = 0;
        v16 = *(_BYTE *)(v4 + 12);
        *(_DWORD *)(v4 + 44) = 0;
        *(_DWORD *)v4 = &off_669850;
        v17 = v16 & 0x8B | 4;
        *(_BYTE *)(v4 + 12) = v17;
        *(_DWORD *)(v4 + 16) = v15;
        if ( v15 )
        {
          CEntity::RegisterReference(v15, (CEntity **)(v4 + 16));
          v17 = *(_BYTE *)(v4 + 12);
        }
        v18 = CTimer::m_snTimeInMilliseconds;
        *(_BYTE *)(v4 + 12) = v17 & 0xF7;
        *(_DWORD *)(v4 + 36) = v18;
      }
    }
    else if ( v5 == 1000 && *((_DWORD *)a2 + 356) )
    {
      v6 = *((_DWORD *)this + 3);
      v7 = *((_DWORD *)a2 + 5);
      v8 = *(_DWORD *)(v6 + 20);
      v9 = (char *)(v7 + 48);
      if ( !v7 )
        v9 = (char *)a2 + 4;
      v10 = v8 + 48;
      if ( !v8 )
        v10 = v6 + 4;
      v11.n64_u64[0] = vsub_f32(*(float32x2_t *)(v10 + 4), *(float32x2_t *)(v9 + 4)).n64_u64[0];
      v12 = vmul_f32(v11, v11).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v10 - *(float *)v9) * (float)(*(float *)v10 - *(float *)v9))
                         + *(float *)&v12)
                 + *((float *)&v12 + 1)) > 400.0 )
      {
        if ( !v6 )
          return 0;
        goto LABEL_25;
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(int, CPed *, _DWORD, _DWORD))(*(_DWORD *)v4 + 28))(v4, a2, 0, 0);
  }
  return v4;
}


// ============================================================

// Address: 0x4ea5a4
// Original: _ZNK20CTaskComplexRoadRage5CloneEv
// Demangled: CTaskComplexRoadRage::Clone(void)
CEntity **__fastcall CTaskComplexRoadRage::Clone(CTaskComplexRoadRage *this, unsigned int a2)
{
  CEntity **v3; // r4
  CEntity *v4; // r5

  v3 = (CEntity **)CTask::operator new((CTask *)&word_10, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *v3 = (CEntity *)&off_669A28;
  v3[3] = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, v3 + 3);
  return v3;
}


// ============================================================

// Address: 0x4ea5dc
// Original: _ZNK20CTaskComplexRoadRage11GetTaskTypeEv
// Demangled: CTaskComplexRoadRage::GetTaskType(void)
int __fastcall CTaskComplexRoadRage::GetTaskType(CTaskComplexRoadRage *this)
{
  return 1031;
}


// ============================================================
