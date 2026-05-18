
// Address: 0x18e4d8
// Original: j__ZN18CTaskComplexWander14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWander::ControlSubTask(CPed *)
// attributes: thunk
int __fastcall CTaskComplexWander::ControlSubTask(CTaskComplexWander *this, CPed *a2)
{
  return _ZN18CTaskComplexWander14ControlSubTaskEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18e8c8
// Original: j__ZNK18CTaskComplexWander18ScanForBlockedNodeEP4CPedRK12CNodeAddress
// Demangled: CTaskComplexWander::ScanForBlockedNode(CPed *,CNodeAddress const&)
// attributes: thunk
int CTaskComplexWander::ScanForBlockedNode()
{
  return _ZNK18CTaskComplexWander18ScanForBlockedNodeEP4CPedRK12CNodeAddress();
}


// ============================================================

// Address: 0x190358
// Original: j__ZN18CTaskComplexWander22GetWanderTaskByPedTypeERK4CPed
// Demangled: CTaskComplexWander::GetWanderTaskByPedType(CPed const&)
// attributes: thunk
int __fastcall CTaskComplexWander::GetWanderTaskByPedType(CTaskComplexWander *this, const CPed *a2)
{
  return _ZN18CTaskComplexWander22GetWanderTaskByPedTypeERK4CPed(this, a2);
}


// ============================================================

// Address: 0x191c24
// Original: j__ZN18CTaskComplexWanderD2Ev
// Demangled: CTaskComplexWander::~CTaskComplexWander()
// attributes: thunk
void __fastcall CTaskComplexWander::~CTaskComplexWander(CTaskComplexWander *this)
{
  _ZN18CTaskComplexWanderD2Ev(this);
}


// ============================================================

// Address: 0x195360
// Original: j__ZN18CTaskComplexWander12ContinueFromERKS_
// Demangled: CTaskComplexWander::ContinueFrom(CTaskComplexWander const&)
// attributes: thunk
int __fastcall CTaskComplexWander::ContinueFrom(CTaskComplexWander *this, const CTaskComplexWander *a2)
{
  return _ZN18CTaskComplexWander12ContinueFromERKS_(this, a2);
}


// ============================================================

// Address: 0x19aba4
// Original: j__ZN18CTaskComplexWander19ScanForBlockedNodesEP4CPed
// Demangled: CTaskComplexWander::ScanForBlockedNodes(CPed *)
// attributes: thunk
int __fastcall CTaskComplexWander::ScanForBlockedNodes(CTaskComplexWander *this, CPed *a2)
{
  return _ZN18CTaskComplexWander19ScanForBlockedNodesEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19b098
// Original: j__ZN18CTaskComplexWander6SetDirEi
// Demangled: CTaskComplexWander::SetDir(int)
// attributes: thunk
int __fastcall CTaskComplexWander::SetDir(CTaskComplexWander *this, int a2)
{
  return _ZN18CTaskComplexWander6SetDirEi(this, a2);
}


// ============================================================

// Address: 0x19d364
// Original: j__ZN18CTaskComplexWanderC2Eihbf
// Demangled: CTaskComplexWander::CTaskComplexWander(int,uchar,bool,float)
// attributes: thunk
void __fastcall CTaskComplexWander::CTaskComplexWander(
        CTaskComplexWander *this,
        int a2,
        unsigned __int8 a3,
        bool a4,
        float a5)
{
  _ZN18CTaskComplexWanderC2Eihbf(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x51287c
// Original: _ZNK18CTaskComplexWander11GetTaskTypeEv
// Demangled: CTaskComplexWander::GetTaskType(void)
int __fastcall CTaskComplexWander::GetTaskType(CTaskComplexWander *this)
{
  return 912;
}


// ============================================================

// Address: 0x520830
// Original: _ZN18CTaskComplexWander22GetWanderTaskByPedTypeERK4CPed
// Demangled: CTaskComplexWander::GetWanderTaskByPedType(CPed const&)
int __fastcall CTaskComplexWander::GetWanderTaskByPedType(CTaskComplexWander *this, const CPed *a2)
{
  int v2; // r4
  unsigned __int16 v3; // r5
  char v4; // r0
  char v5; // r0
  float v6; // s0
  unsigned __int16 v7; // r5
  float v8; // s0
  int *v9; // r0
  unsigned __int16 v10; // r5
  char v11; // r2
  unsigned __int16 v12; // r5
  int v13; // r0
  unsigned __int16 v14; // r5

  switch ( __ROR4__(*((_DWORD *)this + 359) - 6, 1) )
  {
    case 0:
      v2 = CTask::operator new((CTask *)&dword_50, (unsigned int)a2);
      v3 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      *(_QWORD *)(v2 + 56) = 0LL;
      *(_QWORD *)(v2 + 64) = 0LL;
      *(_DWORD *)(v2 + 12) = 4;
      *(_DWORD *)(v2 + 20) = 1056964608;
      *(_WORD *)(v2 + 24) = -1;
      *(_WORD *)(v2 + 28) = -1;
      *(_DWORD *)(v2 + 32) = 0;
      *(_DWORD *)v2 = &off_66C5E8;
      v4 = *(_BYTE *)(v2 + 36);
      *(_DWORD *)(v2 + 50) = 0;
      *(_DWORD *)(v2 + 46) = 0;
      v5 = v4 & 0xF0;
      *(_DWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v2 + 44) = 0;
      v6 = (float)((float)v3 * 0.000015259) * 8.0;
      *(_DWORD *)(v2 + 74) = 0;
      *(_DWORD *)(v2 + 70) = 0;
      goto LABEL_10;
    case 6:
      v2 = CTask::operator new((CTask *)&word_28, (unsigned int)a2);
      v10 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      *(_DWORD *)(v2 + 12) = 4;
      *(_DWORD *)(v2 + 20) = 1056964608;
      *(_WORD *)(v2 + 24) = -1;
      *(_WORD *)(v2 + 28) = -1;
      v11 = *(_BYTE *)(v2 + 36);
      *(_DWORD *)(v2 + 32) = 0;
      *(_DWORD *)v2 = &off_66BB7C;
      v6 = (float)((float)v10 * 0.000015259) * 8.0;
      goto LABEL_9;
    case 7:
      v2 = CTask::operator new((CTask *)&dword_38, (unsigned int)a2);
      v12 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      v8 = (float)v12;
      v9 = (int *)&`vtable for'CTaskComplexWanderCriminal;
      goto LABEL_6;
    case 8:
      v2 = CTask::operator new((CTask *)&off_3C, (unsigned int)a2);
      v14 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      *(_DWORD *)(v2 + 12) = 4;
      *(_DWORD *)(v2 + 20) = 1056964608;
      *(_WORD *)(v2 + 24) = -1;
      *(_WORD *)(v2 + 28) = -1;
      *(_DWORD *)(v2 + 32) = 0;
      *(_WORD *)(v2 + 48) = 0;
      v11 = *(_BYTE *)(v2 + 36);
      *(_DWORD *)v2 = &off_66C378;
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 56) = 0;
      v6 = (float)((float)v14 * 0.000015259) * 8.0;
      goto LABEL_8;
    default:
      v2 = CTask::operator new((CTask *)&dword_38, (unsigned int)a2);
      v7 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      v8 = (float)v7;
      v9 = (int *)&`vtable for'CTaskComplexWanderStandard;
LABEL_6:
      v13 = *v9;
      *(_DWORD *)(v2 + 12) = 4;
      *(_DWORD *)(v2 + 20) = 1056964608;
      *(_WORD *)(v2 + 24) = -1;
      *(_WORD *)(v2 + 28) = -1;
      *(_DWORD *)(v2 + 32) = 0;
      v11 = *(_BYTE *)(v2 + 36);
      v6 = (float)(v8 * 0.000015259) * 8.0;
      *(_DWORD *)v2 = v13 + 8;
      *(_WORD *)(v2 + 48) = 0;
      *(_DWORD *)(v2 + 52) = 0;
LABEL_8:
      *(_DWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v2 + 44) = 0;
LABEL_9:
      v5 = v11 & 0xF0;
LABEL_10:
      *(_BYTE *)(v2 + 36) = v5 | 1;
      *(_BYTE *)(v2 + 16) = (int)v6;
      return v2;
  }
}


// ============================================================

// Address: 0x520a24
// Original: _ZN18CTaskComplexWander22GetWanderTaskByPedTypeEi
// Demangled: CTaskComplexWander::GetWanderTaskByPedType(int)
int __fastcall CTaskComplexWander::GetWanderTaskByPedType(CTaskComplexWander *this, unsigned int a2)
{
  int v2; // r4
  unsigned __int16 v3; // r5
  char v4; // r0
  char v5; // r0
  float v6; // s0
  unsigned __int16 v7; // r5
  float v8; // s0
  int *v9; // r0
  unsigned __int16 v10; // r5
  char v11; // r2
  unsigned __int16 v12; // r5
  int v13; // r0
  unsigned __int16 v14; // r5

  switch ( __ROR4__((char *)this - 6, 1) )
  {
    case 0:
      v2 = CTask::operator new((CTask *)&dword_50, a2);
      v3 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      *(_QWORD *)(v2 + 56) = 0LL;
      *(_QWORD *)(v2 + 64) = 0LL;
      *(_DWORD *)(v2 + 12) = 4;
      *(_DWORD *)(v2 + 20) = 1056964608;
      *(_WORD *)(v2 + 24) = -1;
      *(_WORD *)(v2 + 28) = -1;
      *(_DWORD *)(v2 + 32) = 0;
      *(_DWORD *)v2 = &off_66C5E8;
      v4 = *(_BYTE *)(v2 + 36);
      *(_DWORD *)(v2 + 50) = 0;
      *(_DWORD *)(v2 + 46) = 0;
      v5 = v4 & 0xF0;
      *(_DWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v2 + 44) = 0;
      v6 = (float)((float)v3 * 0.000015259) * 8.0;
      *(_DWORD *)(v2 + 74) = 0;
      *(_DWORD *)(v2 + 70) = 0;
      goto LABEL_10;
    case 6:
      v2 = CTask::operator new((CTask *)&word_28, a2);
      v10 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      *(_DWORD *)(v2 + 12) = 4;
      *(_DWORD *)(v2 + 20) = 1056964608;
      *(_WORD *)(v2 + 24) = -1;
      *(_WORD *)(v2 + 28) = -1;
      v11 = *(_BYTE *)(v2 + 36);
      *(_DWORD *)(v2 + 32) = 0;
      *(_DWORD *)v2 = &off_66BB7C;
      v6 = (float)((float)v10 * 0.000015259) * 8.0;
      goto LABEL_9;
    case 7:
      v2 = CTask::operator new((CTask *)&dword_38, a2);
      v12 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      v8 = (float)v12;
      v9 = (int *)&`vtable for'CTaskComplexWanderCriminal;
      goto LABEL_6;
    case 8:
      v2 = CTask::operator new((CTask *)&off_3C, a2);
      v14 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      *(_DWORD *)(v2 + 12) = 4;
      *(_DWORD *)(v2 + 20) = 1056964608;
      *(_WORD *)(v2 + 24) = -1;
      *(_WORD *)(v2 + 28) = -1;
      *(_DWORD *)(v2 + 32) = 0;
      *(_WORD *)(v2 + 48) = 0;
      v11 = *(_BYTE *)(v2 + 36);
      *(_DWORD *)v2 = &off_66C378;
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 56) = 0;
      v6 = (float)((float)v14 * 0.000015259) * 8.0;
      goto LABEL_8;
    default:
      v2 = CTask::operator new((CTask *)&dword_38, a2);
      v7 = rand();
      CTaskComplex::CTaskComplex((CTaskComplex *)v2);
      v8 = (float)v7;
      v9 = (int *)&`vtable for'CTaskComplexWanderStandard;
LABEL_6:
      v13 = *v9;
      *(_DWORD *)(v2 + 12) = 4;
      *(_DWORD *)(v2 + 20) = 1056964608;
      *(_WORD *)(v2 + 24) = -1;
      *(_WORD *)(v2 + 28) = -1;
      *(_DWORD *)(v2 + 32) = 0;
      v11 = *(_BYTE *)(v2 + 36);
      v6 = (float)(v8 * 0.000015259) * 8.0;
      *(_DWORD *)v2 = v13 + 8;
      *(_WORD *)(v2 + 48) = 0;
      *(_DWORD *)(v2 + 52) = 0;
LABEL_8:
      *(_DWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v2 + 44) = 0;
LABEL_9:
      v5 = v11 & 0xF0;
LABEL_10:
      *(_BYTE *)(v2 + 36) = v5 | 1;
      *(_BYTE *)(v2 + 16) = (int)v6;
      return v2;
  }
}


// ============================================================

// Address: 0x520c14
// Original: _ZN18CTaskComplexWanderC2Eihbf
// Demangled: CTaskComplexWander::CTaskComplexWander(int,uchar,bool,float)
void __fastcall CTaskComplexWander::CTaskComplexWander(
        CTaskComplexWander *this,
        int a2,
        unsigned __int8 a3,
        bool a4,
        float a5)
{
  int v8; // r0
  char v9; // r2

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v8 + 12) = a2;
  *(_BYTE *)(v8 + 16) = a3;
  *(float *)(v8 + 20) = a5;
  *(_WORD *)(v8 + 24) = -1;
  *(_WORD *)(v8 + 28) = -1;
  v9 = *(_BYTE *)(v8 + 36) & 0xF0;
  *(_DWORD *)(v8 + 32) = 0;
  *(_BYTE *)(v8 + 36) = v9 | a4;
  *(_DWORD *)v8 = &off_66C2B4;
}


// ============================================================

// Address: 0x520c60
// Original: _ZN18CTaskComplexWanderD0Ev
// Demangled: CTaskComplexWander::~CTaskComplexWander()
void __fastcall __noreturn CTaskComplexWander::~CTaskComplexWander(CTaskComplexWander *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x520c62
// Original: _ZN18CTaskComplexWander6SetDirEi
// Demangled: CTaskComplexWander::SetDir(int)
int __fastcall CTaskComplexWander::SetDir(int this, int a2)
{
  char v2; // r2

  if ( *(unsigned __int8 *)(this + 16) != a2 )
  {
    v2 = *(_BYTE *)(this + 36);
    *(_BYTE *)(this + 16) = a2;
    *(_BYTE *)(this + 36) = v2 | 2;
  }
  return this;
}


// ============================================================

// Address: 0x520c78
// Original: _ZN18CTaskComplexWander12ContinueFromERKS_
// Demangled: CTaskComplexWander::ContinueFrom(CTaskComplexWander const&)
int __fastcall CTaskComplexWander::ContinueFrom(int this, const CTaskComplexWander *a2)
{
  char v2; // r3

  if ( *(unsigned __int16 *)(this + 24) != *((unsigned __int16 *)a2 + 12)
    || *(unsigned __int16 *)(this + 26) != *((unsigned __int16 *)a2 + 13)
    || *(unsigned __int16 *)(this + 28) != *((unsigned __int16 *)a2 + 14)
    || *(unsigned __int16 *)(this + 30) != *((unsigned __int16 *)a2 + 15) )
  {
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    v2 = *(_BYTE *)(this + 36);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *(_BYTE *)(this + 16) = *((_BYTE *)a2 + 16);
    *(_BYTE *)(this + 36) = v2 | 4;
  }
  return this;
}


// ============================================================

// Address: 0x520cb4
// Original: _ZN18CTaskComplexWander18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWander::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexWander::CreateFirstSubTask(CTaskComplexWander *this, CPed *a2)
{
  int v4; // r2

  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v4 = 704;
  }
  else
  {
    (*(void (__fastcall **)(CTaskComplexWander *, CPed *))(*(_DWORD *)this + 60))(this, a2);
    (*(void (__fastcall **)(CTaskComplexWander *, CPed *, _DWORD, char *, char *, char *))(*(_DWORD *)this + 64))(
      this,
      a2,
      *((unsigned __int8 *)this + 16),
      (char *)this + 24,
      (char *)this + 28,
      (char *)this + 16);
    v4 = 900;
  }
  return CTaskComplexWander::CreateSubTask(this, a2, v4);
}


// ============================================================

// Address: 0x520d10
// Original: _ZN18CTaskComplexWander13CreateSubTaskEPK4CPedi
// Demangled: CTaskComplexWander::CreateSubTask(CPed const*,int)
int __fastcall CTaskComplexWander::CreateSubTask(CTaskComplexWander *this, CVehicle **a2, int a3)
{
  int v5; // r4
  _DWORD *v6; // r0
  CVehicle *v7; // r0
  float *v8; // r1
  CGeneral *RadianAngleBetweenPoints; // r0
  float v10; // r1
  int v11; // r0
  CVehicle *v12; // r0
  float *v13; // r1
  CGeneral *v14; // r0
  float v15; // r1
  int v16; // r0
  unsigned int v17; // r1
  CTaskSimple *v18; // r0
  int v19; // r5
  int v20; // r6
  char v21; // r1
  char v22; // r2
  float v24; // [sp+0h] [bp-40h]
  float v25; // [sp+10h] [bp-30h]
  float v26; // [sp+14h] [bp-2Ch]
  float v27; // [sp+18h] [bp-28h]

  v5 = 0;
  if ( a3 >= 704 )
  {
    switch ( a3 )
    {
      case 900:
        CPathFind::TakeWidthIntoAccountForWandering();
        v18 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, v17);
        v19 = *((_DWORD *)this + 3);
        v5 = (int)v18;
        v20 = *((_DWORD *)this + 5);
        CTaskSimple::CTaskSimple(v18);
        v21 = *(_BYTE *)(v5 + 28);
        v22 = *(_BYTE *)(v5 + 29);
        *(_DWORD *)(v5 + 8) = v19;
        *(float *)(v5 + 12) = v25;
        *(float *)(v5 + 16) = v26;
        *(_DWORD *)(v5 + 24) = v20;
        *(_DWORD *)v5 = &off_66C0E4;
        *(float *)(v5 + 20) = v27 + 1.0;
        *(_BYTE *)(v5 + 28) = v21 & 0xC0;
        *(_BYTE *)(v5 + 29) = v22 & 0xE0;
        break;
      case 719:
        v5 = CTask::operator new((CTask *)&dword_70, (unsigned int)a2);
        CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v5, a2[356], 0, 0);
        *(_DWORD *)(v5 + 96) = 2000;
        v6 = &`vtable for'CTaskSimpleCarDriveTimed;
        *(_WORD *)(v5 + 108) = 0;
        *(_DWORD *)(v5 + 100) = 0;
        *(_DWORD *)(v5 + 104) = 0;
        goto LABEL_18;
      case 704:
        v5 = CTask::operator new((CTask *)&dword_34, (unsigned int)a2);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, a2[356], 0, 0, 1, 0);
        break;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 225:
        v5 = CTask::operator new((CTask *)&dword_14, (unsigned int)a2);
        CPathFind::TakeWidthIntoAccountForWandering();
        v7 = a2[5];
        v8 = (float *)((char *)v7 + 48);
        if ( !v7 )
          v8 = (float *)(a2 + 1);
        RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                 COERCE_CGENERAL_(v25 - *v8),
                                                 v26 - v8[1],
                                                 0.0,
                                                 0.0,
                                                 v24);
        v11 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v10);
        CTaskComplexObserveTrafficLightsAndAchieveHeading::CTaskComplexObserveTrafficLightsAndAchieveHeading(
          (CTaskComplexObserveTrafficLightsAndAchieveHeading *)v5,
          2000,
          *(float *)&v11);
        break;
      case 227:
        v5 = CTask::operator new((CTask *)&dword_14, (unsigned int)a2);
        CPathFind::TakeWidthIntoAccountForWandering();
        v12 = a2[5];
        v13 = (float *)((char *)v12 + 48);
        if ( !v12 )
          v13 = (float *)(a2 + 1);
        v14 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                            COERCE_CGENERAL_(v25 - *v13),
                            v26 - v13[1],
                            0.0,
                            0.0,
                            v24);
        v16 = CGeneral::LimitRadianAngle(v14, v15);
        CTaskComplexCrossRoadLookAndAchieveHeading::CTaskComplexCrossRoadLookAndAchieveHeading(
          (CTaskComplexCrossRoadLookAndAchieveHeading *)v5,
          2000,
          *(float *)&v16);
        break;
      case 421:
        v5 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
        v6 = &`vtable for'CTaskSimpleScratchHead;
LABEL_18:
        *(_DWORD *)v5 = *v6 + 8;
        break;
    }
  }
  return v5;
}


// ============================================================

// Address: 0x520f0c
// Original: _ZN18CTaskComplexWander17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWander::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexWander::CreateNextSubTask(CTaskComplexWander *this, CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r6
  _DWORD *v7; // r0
  unsigned int v8; // r5
  int v9; // r0
  unsigned int v10; // r1
  bool v11; // zf
  int v12; // r1
  int v13; // r2
  _DWORD *v15; // r0
  unsigned __int8 v16; // r2
  unsigned int v17; // r1
  int v18; // r0
  bool v19; // zf
  unsigned int v20; // r1
  CTaskSimple *v21; // r0
  int v22; // r5
  int v23; // r4
  char v24; // r1
  char v25; // r2
  unsigned int v26; // r1
  CTaskSimpleStandStill *v27; // r8
  unsigned int v28; // r1
  CTask *v29; // r8
  unsigned int v30; // r1
  CTask *v31; // r8
  unsigned int v32; // r1
  CTaskSimple *v33; // r0
  int v34; // r10
  CTaskSimple *v35; // r5
  int v36; // r4
  char v37; // r1
  char v38; // r2
  int v39; // r0
  int v40; // [sp+10h] [bp-38h]
  int v41; // [sp+14h] [bp-34h]
  float v42; // [sp+18h] [bp-30h]

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = 0;
  if ( v4 <= 420 )
  {
    if ( v4 == 225 || v4 == 227 )
      goto LABEL_29;
    if ( v4 != 244 )
      return v6;
    goto LABEL_13;
  }
  if ( v4 <= 718 )
  {
    if ( v4 != 421 )
    {
      if ( v4 == 704 )
      {
        if ( *((unsigned __int8 *)a2 + 1157) << 31 )
        {
          v6 = CTask::operator new((CTask *)&dword_70, 0x1A5u);
          CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v6, *((CVehicle **)a2 + 356), 0, 0);
          *(_DWORD *)(v6 + 96) = 2000;
          v7 = &`vtable for'CTaskSimpleCarDriveTimed;
          *(_WORD *)(v6 + 108) = 0;
          *(_DWORD *)(v6 + 100) = 0;
          *(_DWORD *)(v6 + 104) = 0;
LABEL_31:
          *(_DWORD *)v6 = *v7 + 8;
          return v6;
        }
        return (*(int (__fastcall **)(CTaskComplexWander *, CPed *))(*(_DWORD *)this + 44))(this, a2);
      }
      return v6;
    }
    v15 = *(_DWORD **)this;
    v16 = *((_BYTE *)this + 16) + 1;
    *((_BYTE *)this + 16) = v16;
    ((void (__fastcall *)(CTaskComplexWander *, CPed *, _DWORD, char *, char *, char *))v15[16])(
      this,
      a2,
      v16,
      (char *)this + 24,
      (char *)this + 28,
      (char *)this + 16);
    v18 = *((unsigned __int16 *)this + 14);
    v19 = v18 == 0xFFFF;
    if ( v18 != 0xFFFF )
    {
      v17 = *((unsigned __int16 *)this + 12);
      v19 = v17 == 0xFFFF;
    }
    if ( v19 || v18 == v17 && (v17 = *((unsigned __int16 *)this + 15), v17 == *((unsigned __int16 *)this + 13)) )
    {
      v6 = CTask::operator new((CTask *)&dword_20, v17);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v6, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
      v7 = &`vtable for'CTaskSimpleScratchHead;
      goto LABEL_31;
    }
LABEL_29:
    CPathFind::TakeWidthIntoAccountForWandering();
    v21 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, v20);
    v22 = *((_DWORD *)this + 3);
    v6 = (int)v21;
    v23 = *((_DWORD *)this + 5);
    CTaskSimple::CTaskSimple(v21);
    v24 = *(_BYTE *)(v6 + 28);
    v25 = *(_BYTE *)(v6 + 29);
    *(_DWORD *)(v6 + 8) = v22;
    *(_DWORD *)(v6 + 12) = v40;
    *(_DWORD *)(v6 + 16) = v41;
    *(_DWORD *)(v6 + 24) = v23;
    *(_DWORD *)v6 = &off_66C0E4;
    *(float *)(v6 + 20) = v42 + 1.0;
    *(_BYTE *)(v6 + 28) = v24 & 0xC0;
    *(_BYTE *)(v6 + 29) = v25 & 0xE0;
    return v6;
  }
  v5 = 719;
  if ( v4 == 719 )
    return (*(int (__fastcall **)(CTaskComplexWander *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  if ( v4 == 900 )
  {
LABEL_13:
    if ( (*((_BYTE *)this + 36) & 8) != 0 )
    {
      *((_BYTE *)this + 36) &= ~8u;
      v6 = CTask::operator new((CTask *)&dword_20, v5);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v6, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
      v7 = &`vtable for'CTaskSimpleScratchHead;
      goto LABEL_31;
    }
    (*(void (__fastcall **)(CTaskComplexWander *, CPed *))(*(_DWORD *)this + 60))(this, a2);
    v8 = *((_DWORD *)this + 6);
    (*(void (__fastcall **)(CTaskComplexWander *, CPed *, _DWORD, char *, char *, char *))(*(_DWORD *)this + 64))(
      this,
      a2,
      *((unsigned __int8 *)this + 16),
      (char *)this + 24,
      (char *)this + 28,
      (char *)this + 16);
    v9 = *((unsigned __int16 *)this + 14);
    v10 = (unsigned __int16)v8;
    v11 = v9 == (unsigned __int16)v8;
    if ( v9 == (unsigned __int16)v8 )
    {
      v10 = *((unsigned __int16 *)this + 15);
      v11 = v10 == HIWORD(v8);
    }
    if ( v11 )
    {
      v6 = CTask::operator new((CTask *)&dword_40, v10);
      CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v6);
      v27 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v26);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v27, 500, 0, 0, 8.0);
      CTaskComplexSequence::AddTask((CTaskComplexSequence *)v6, v27);
      v29 = (CTask *)CTask::operator new((CTask *)&dword_20, v28);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v29, *((_DWORD *)a2 + 312), 4, 1082130432, 0);
      CTaskComplexSequence::AddTask((CTaskComplexSequence *)v6, v29);
      v31 = (CTask *)CTask::operator new((CTask *)&dword_20, v30);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v31, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
      *(_DWORD *)v31 = &off_665870;
      CTaskComplexSequence::AddTask((CTaskComplexSequence *)v6, v31);
      CPathFind::TakeWidthIntoAccountForWandering();
      v33 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, v32);
      v34 = *((_DWORD *)this + 3);
      v35 = v33;
      v36 = *((_DWORD *)this + 5);
      CTaskSimple::CTaskSimple(v33);
      v37 = *((_BYTE *)v35 + 28);
      v38 = *((_BYTE *)v35 + 29);
      *((_DWORD *)v35 + 2) = v34;
      *((_DWORD *)v35 + 3) = v40;
      *((_DWORD *)v35 + 4) = v41;
      *((_DWORD *)v35 + 6) = v36;
      *(_DWORD *)v35 = &off_66C0E4;
      *((float *)v35 + 5) = v42 + 1.0;
      *((_BYTE *)v35 + 28) = v37 & 0xC0;
      *((_BYTE *)v35 + 29) = v38 & 0xE0;
      CTaskComplexSequence::AddTask((CTaskComplexSequence *)v6, v35);
      return v6;
    }
    if ( v9 == 0xFFFF
      || (v12 = *((unsigned __int16 *)this + 12), v12 == 0xFFFF)
      || v9 == v12 && *((unsigned __int16 *)this + 15) == *((unsigned __int16 *)this + 13) )
    {
      v13 = 421;
      return CTaskComplexWander::CreateSubTask(this, (CVehicle **)a2, v13);
    }
    v39 = *((unsigned __int8 *)this + 36);
    if ( (v39 & 1) != 0 )
    {
      if ( CPathFind::TestForPedTrafficLight() )
      {
        v13 = 225;
        return CTaskComplexWander::CreateSubTask(this, (CVehicle **)a2, v13);
      }
      v39 = *((unsigned __int8 *)this + 36);
    }
    if ( v39 << 31 && CPathFind::TestCrossesRoad() )
      v13 = 227;
    else
      v13 = 900;
    return CTaskComplexWander::CreateSubTask(this, (CVehicle **)a2, v13);
  }
  return v6;
}


// ============================================================

// Address: 0x521334
// Original: _ZNK18CTaskComplexWander16ComputeTargetPosEPK4CPedR7CVectorRK12CNodeAddress
// Demangled: CTaskComplexWander::ComputeTargetPos(CPed const*,CVector &,CNodeAddress const&)
int __fastcall CTaskComplexWander::ComputeTargetPos(int a1, int a2, int a3)
{
  int result; // r0
  __int64 v5; // [sp+0h] [bp-18h]
  int v6; // [sp+8h] [bp-10h]

  CPathFind::TakeWidthIntoAccountForWandering();
  result = v6;
  *(_DWORD *)(a3 + 8) = v6;
  *(_QWORD *)a3 = v5;
  *(float *)(a3 + 8) = *(float *)(a3 + 8) + 1.0;
  return result;
}


// ============================================================

// Address: 0x521374
// Original: _ZNK18CTaskComplexWander10ValidNodesEv
// Demangled: CTaskComplexWander::ValidNodes(void)
bool __fastcall CTaskComplexWander::ValidNodes(CTaskComplexWander *this, int a2, int a3, int a4)
{
  int v4; // r1
  bool v5; // zf

  v4 = *((unsigned __int16 *)this + 14);
  v5 = v4 == 0xFFFF;
  if ( v4 != 0xFFFF )
  {
    a4 = *((unsigned __int16 *)this + 12);
    v5 = a4 == 0xFFFF;
  }
  if ( v5 )
    return 0;
  if ( v4 == a4 )
    return *((unsigned __int16 *)this + 15) != *((unsigned __int16 *)this + 13);
  return 1;
}


// ============================================================

// Address: 0x5213a0
// Original: _ZNK18CTaskComplexWander20ComputeTargetHeadingEPK4CPed
// Demangled: CTaskComplexWander::ComputeTargetHeading(CPed const*)
int __fastcall CTaskComplexWander::ComputeTargetHeading(CTaskComplexWander *this, const CPed *a2)
{
  int v3; // r0
  float *v4; // r1
  CGeneral *RadianAngleBetweenPoints; // r0
  float v6; // r1
  float v8; // [sp+0h] [bp-18h]
  float v9; // [sp+4h] [bp-14h]
  float v10; // [sp+8h] [bp-10h]

  CPathFind::TakeWidthIntoAccountForWandering();
  v3 = *((_DWORD *)a2 + 5);
  v4 = (float *)(v3 + 48);
  if ( !v3 )
    v4 = (float *)((char *)a2 + 4);
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                           COERCE_CGENERAL_(v9 - *v4),
                                           v10 - v4[1],
                                           0.0,
                                           0.0,
                                           v8);
  return CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v6);
}


// ============================================================

// Address: 0x5213f8
// Original: _ZN18CTaskComplexWander14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWander::ControlSubTask(CPed *)
int __fastcall CTaskComplexWander::ControlSubTask(CTaskComplexWander *this, CPed *a2)
{
  int v4; // r6
  char v6; // r1
  int v7; // r0
  int v8; // r2
  int v9; // r0
  char v10; // r1
  unsigned int v11; // r1
  float v12; // [sp+Ch] [bp-1Ch]
  float v13; // [sp+10h] [bp-18h]
  float v14; // [sp+14h] [bp-14h]

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 704
    || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 719 )
  {
    return *((_DWORD *)this + 2);
  }
  v6 = *((_BYTE *)this + 36);
  v4 = *((_DWORD *)this + 2);
  if ( (v6 & 2) == 0
    || (v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 20))(*((_DWORD *)this + 2)),
        v6 = *((_BYTE *)this + 36),
        v7 != 900) )
  {
    if ( (v6 & 4) != 0 && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 900 )
    {
      *((_BYTE *)this + 36) &= ~4u;
      CPathFind::TakeWidthIntoAccountForWandering();
      v9 = *((_DWORD *)this + 2);
      if ( *(float *)(v9 + 12) == v12 && *(float *)(v9 + 16) == v13 && *(float *)(v9 + 24) == 0.5 )
      {
        v4 = *((_DWORD *)this + 2);
      }
      else
      {
        v10 = *(_BYTE *)(v9 + 28);
        *(_DWORD *)(v9 + 24) = 1056964608;
        *(float *)(v9 + 12) = v12;
        *(float *)(v9 + 16) = v13;
        *(float *)(v9 + 20) = v14 + 1.0;
        *(_BYTE *)(v9 + 28) = v10 & 0xD0 | 0x20;
        v9 = *((_DWORD *)this + 2);
        v4 = v9;
      }
    }
    else
    {
      CTaskComplexWander::ScanForBlockedNodes(this, a2);
      (*(void (__fastcall **)(CTaskComplexWander *, CPed *))(*(_DWORD *)this + 56))(this, a2);
      v9 = *((_DWORD *)this + 2);
    }
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9) == 900 )
    {
      *(_DWORD *)(*((_DWORD *)this + 2) + 8) = *((_DWORD *)this + 3);
      if ( *((int *)this + 3) <= 4 )
        CPed::Say(a2, 0x2Du, 0, 0.1, 0, 0, 0);
    }
    if ( *(int *)(*((_DWORD *)a2 + 272) + 632) > 30
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      v4 = CTask::operator new((CTask *)&dword_20, v11);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v4, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
      *(_DWORD *)v4 = &off_665870;
    }
    return v4;
  }
  *((_WORD *)this + 14) = -1;
  v8 = *(_DWORD *)this;
  *((_BYTE *)this + 36) = v6 & 0xFD;
  *((_WORD *)this + 12) = -1;
  return (*(int (__fastcall **)(CTaskComplexWander *, CPed *))(v8 + 44))(this, a2);
}


// ============================================================

// Address: 0x5215d0
// Original: _ZN18CTaskComplexWander19ScanForBlockedNodesEP4CPed
// Demangled: CTaskComplexWander::ScanForBlockedNodes(CPed *)
int __fastcall CTaskComplexWander::ScanForBlockedNodes(CTaskComplexWander *this, CPed *a2)
{
  int result; // r0
  int v5; // [sp+10h] [bp-18h]

  result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( result == 900 )
  {
    result = *((unsigned __int16 *)this + 14);
    if ( result != 0xFFFF )
    {
      result = CTaskComplexWander::ScanForBlockedNode();
      if ( result == 1 )
      {
        (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
          *((_DWORD *)this + 2),
          a2,
          0,
          0);
        v5 = *((_DWORD *)this + 7);
        (*(void (__fastcall **)(CTaskComplexWander *, CPed *))(*(_DWORD *)this + 64))(this, a2);
        if ( CTaskComplexWander::ScanForBlockedNode()
          || (result = (unsigned __int16)v5, (unsigned __int16)v5 == *((unsigned __int16 *)this + 12))
          && (result = HIWORD(v5), HIWORD(v5) == *((unsigned __int16 *)this + 13)) )
        {
          result = *((unsigned __int8 *)this + 36) | 8;
          *((_BYTE *)this + 36) = result;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x521670
// Original: _ZNK18CTaskComplexWander18ScanForBlockedNodeEP4CPedRK12CNodeAddress
// Demangled: CTaskComplexWander::ScanForBlockedNode(CPed *,CNodeAddress const&)
bool __fastcall CTaskComplexWander::ScanForBlockedNode(int a1, int a2)
{
  int v3; // r0
  float *v4; // r1
  int ClosestPedInRange; // r0
  int v6; // r1
  float *v7; // r2
  float v8; // s4
  int ClosestVehicleInRange; // r0
  int v10; // r1
  float *v11; // r2
  float v12; // s4
  float v14; // [sp+4h] [bp-2Ch]
  float v15; // [sp+8h] [bp-28h]

  CPathFind::TakeWidthIntoAccountForWandering();
  v3 = *(_DWORD *)(a2 + 20);
  v4 = (float *)(v3 + 48);
  if ( !v3 )
    v4 = (float *)(a2 + 4);
  if ( (float)((float)((float)((float)(v14 - *v4) * (float)(v14 - *v4))
                     + (float)((float)(v15 - v4[1]) * (float)(v15 - v4[1])))
             + 0.0) > 9.0 )
    return 0;
  ClosestPedInRange = CPedScanner::GetClosestPedInRange((CPedScanner *)(*(_DWORD *)(a2 + 1088) + 292));
  if ( ClosestPedInRange )
  {
    v6 = *(_DWORD *)(ClosestPedInRange + 20);
    v7 = (float *)(v6 + 48);
    if ( !v6 )
      v7 = (float *)(ClosestPedInRange + 4);
    v8 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(ClosestPedInRange + 38)]) + 44) + 36)
       + 1.0;
    if ( (float)((float)((float)((float)(v14 - *v7) * (float)(v14 - *v7))
                       + (float)((float)(v15 - v7[1]) * (float)(v15 - v7[1])))
               + 0.0) < (float)(v8 * v8) )
      return 1;
  }
  ClosestVehicleInRange = CVehicleScanner::GetClosestVehicleInRange((CVehicleScanner *)(*(_DWORD *)(a2 + 1088) + 212));
  if ( !ClosestVehicleInRange )
    return 0;
  v10 = *(_DWORD *)(ClosestVehicleInRange + 20);
  v11 = (float *)(v10 + 48);
  if ( !v10 )
    v11 = (float *)(ClosestVehicleInRange + 4);
  v12 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(ClosestVehicleInRange + 38)]) + 44) + 36)
      + 1.0;
  return (float)((float)((float)((float)(v14 - *v11) * (float)(v14 - *v11))
                       + (float)((float)(v15 - v11[1]) * (float)(v15 - v11[1])))
               + 0.0) < (float)(v12 * v12);
}


// ============================================================

// Address: 0x5217b8
// Original: _ZNK18CTaskComplexWander18ScanForBlockedNodeERK7CVectorPK7CEntity
// Demangled: CTaskComplexWander::ScanForBlockedNode(CVector const&,CEntity const*)
int __fastcall CTaskComplexWander::ScanForBlockedNode(CTaskComplexWander *this, const CVector *a2, const CEntity *a3)
{
  int result; // r0
  float32x2_t *v4; // r3
  float32x2_t v5; // d16
  float32x2_t *v6; // r1
  float32x2_t v7; // d16
  int v8; // r1
  unsigned __int64 v9; // d1

  result = 0;
  if ( a3 )
  {
    v4 = (float32x2_t *)*((_DWORD *)a3 + 5);
    v5.n64_u64[0] = *(unsigned __int64 *)a2;
    v6 = v4 + 6;
    if ( !v4 )
      v6 = (float32x2_t *)((char *)a3 + 4);
    v7.n64_u64[0] = vsub_f32(v5, (float32x2_t)v6->n64_u64[0]).n64_u64[0];
    v8 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)a3 + 19)]) + 44);
    v9 = vmul_f32(v7, v7).n64_u64[0];
    if ( (float)((float)(*(float *)&v9 + *((float *)&v9 + 1)) + 0.0) < (float)((float)(*(float *)(v8 + 36) + 1.0)
                                                                             * (float)(*(float *)(v8 + 36) + 1.0)) )
      return 1;
  }
  return result;
}


// ============================================================

// Address: 0x52182c
// Original: _ZN18CTaskComplexWander9UpdateDirEPK4CPed
// Demangled: CTaskComplexWander::UpdateDir(CPed const*)
unsigned int __fastcall CTaskComplexWander::UpdateDir(CTaskComplexWander *this, const CPed *a2)
{
  unsigned int result; // r0
  int v4; // r2
  int v5; // r3
  int v6; // r2
  bool v7; // zf
  unsigned int v8; // r2
  int v9; // r2
  int v10; // r5
  unsigned int v11; // r0
  unsigned int v12; // r2
  int v13; // [sp+Ch] [bp-14h] BYREF
  int v14; // [sp+10h] [bp-10h] BYREF
  _BYTE v15[9]; // [sp+17h] [bp-9h] BYREF

  result = *((unsigned __int16 *)this + 14);
  if ( result != 0xFFFF )
  {
    result = *((_DWORD *)this + 7);
    v4 = ThePaths[(unsigned __int16)result + 513];
    if ( v4 )
    {
      result = *(_WORD *)(v4 + 28 * HIWORD(result) + 24) & 0xF;
      if ( result >= 3 )
      {
        v5 = *((_DWORD *)this + 8);
        result = (unsigned int)&CTimer::m_FrameCounter;
        v6 = CTimer::m_FrameCounter;
        v7 = CTimer::m_FrameCounter == v5;
        if ( CTimer::m_FrameCounter != v5 )
        {
          result = *((unsigned __int8 *)this + 36) << 31;
          v7 = result == 0;
        }
        if ( !v7 )
        {
          result = *((unsigned __int8 *)this + 16);
          *((_DWORD *)this + 8) = CTimer::m_FrameCounter;
          v8 = (3 * v6 + (unsigned int)*((unsigned __int16 *)a2 + 18)) % 0x64;
          if ( v8 <= 0x5A )
          {
            if ( v8 < 0x51 )
              return result;
            v9 = 2;
          }
          else
          {
            v9 = 6;
          }
          v10 = (v9 + result) & 7;
          if ( v10 != result )
          {
            v14 = *((_DWORD *)this + 6);
            v13 = *((_DWORD *)this + 7);
            (*(void (__fastcall **)(CTaskComplexWander *, const CPed *, _DWORD, int *, int *, _BYTE *))(*(_DWORD *)this + 64))(
              this,
              a2,
              (unsigned __int8)v10,
              &v14,
              &v13,
              v15);
            v11 = *((unsigned __int8 *)this + 16);
            v12 = v11;
            if ( v15[0] <= v11 )
              v11 = v15[0];
            else
              v12 = v15[0];
            result = ((int)(8 - v11 + v12) % 8) & 0xFC;
            if ( result <= 3 )
              *((_BYTE *)this + 16) = v10;
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x521918
// Original: _ZN18CTaskComplexWander15UpdatePathNodesEPK4CPedhR12CNodeAddressS4_Rh
// Demangled: CTaskComplexWander::UpdatePathNodes(CPed const*,uchar,CNodeAddress &,CNodeAddress &,uchar &)
int __fastcall CTaskComplexWander::UpdatePathNodes(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v6; // r0
  int *v7; // r6

  *a4 = *a5;
  *(_WORD *)a5 = -1;
  v6 = *(_DWORD *)(a2 + 20);
  v7 = (int *)(v6 + 48);
  if ( !v6 )
    v7 = (int *)(a2 + 4);
  return CPathFind::FindNextNodeWandering((int)ThePaths, 1, *v7, v7[1], v7[2], (int)a4, (int)a5, a3, a6);
}


// ============================================================

// Address: 0x526aac
// Original: _ZN18CTaskComplexWanderD2Ev
// Demangled: CTaskComplexWander::~CTaskComplexWander()
// attributes: thunk
void __fastcall CTaskComplexWander::~CTaskComplexWander(CTaskComplexWander *this)
{
  sub_18EDE8(this);
}


// ============================================================
