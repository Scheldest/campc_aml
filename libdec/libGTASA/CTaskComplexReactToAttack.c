
// Address: 0x4dfe10
// Original: _ZN25CTaskComplexReactToAttackC2E11eWeaponTypeP7CEntityfi14ePedPieceTypes
// Demangled: CTaskComplexReactToAttack::CTaskComplexReactToAttack(eWeaponType,CEntity *,float,int,ePedPieceTypes)
int __fastcall CTaskComplexReactToAttack::CTaskComplexReactToAttack(int a1, int a2, CEntity *a3, int a4, __int64 a5)
{
  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_WORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 28) = a5;
  *(_DWORD *)a1 = &off_669814;
  *(_DWORD *)(a1 + 20) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 20));
  return a1;
}


// ============================================================

// Address: 0x4dfe5c
// Original: _ZN25CTaskComplexReactToAttackD2Ev
// Demangled: CTaskComplexReactToAttack::~CTaskComplexReactToAttack()
void __fastcall CTaskComplexReactToAttack::~CTaskComplexReactToAttack(CTaskComplexReactToAttack *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_669814;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4dfe88
// Original: _ZN25CTaskComplexReactToAttackD0Ev
// Demangled: CTaskComplexReactToAttack::~CTaskComplexReactToAttack()
void __fastcall CTaskComplexReactToAttack::~CTaskComplexReactToAttack(CTaskComplexReactToAttack *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_669814;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4dfeb8
// Original: _ZN25CTaskComplexReactToAttack13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexReactToAttack::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexReactToAttack::MakeAbortable(
        CTaskComplexReactToAttack *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int result; // r0

  if ( *((_BYTE *)this + 13) )
    return 1;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 0;
  result = (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2);
  *((_BYTE *)this + 13) = result;
  return result;
}


// ============================================================

// Address: 0x4dfede
// Original: _ZN25CTaskComplexReactToAttack17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexReactToAttack::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexReactToAttack::CreateNextSubTask(CTaskComplexReactToAttack *this, CPed *a2)
{
  if ( !*((_BYTE *)this + 13) )
    (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  return 0;
}


// ============================================================

// Address: 0x4dfefc
// Original: _ZN25CTaskComplexReactToAttack13CreateSubTaskEi
// Demangled: CTaskComplexReactToAttack::CreateSubTask(int)
int __fastcall CTaskComplexReactToAttack::CreateSubTask(CTaskComplexReactToAttack *this, int a2)
{
  int v3; // r4
  int v4; // r0
  CTaskSimple *v5; // r0
  CEntity *v6; // r6
  __int64 v7; // r8
  float v8; // s16
  CTaskSimple *v9; // r0
  __int64 v10; // kr00_8
  float v11; // s16

  switch ( a2 )
  {
    case 200:
      v3 = CTask::operator new((CTask *)byte_8, 0xC8u);
      CTaskSimple::CTaskSimple((CTaskSimple *)v3);
      *(_DWORD *)v3 = &off_669000;
      break;
    case 1008:
      v4 = *((_DWORD *)this + 5);
      if ( v4 && (*(_BYTE *)(v4 + 58) & 7) == 3 )
      {
        v5 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, 0x3F0u);
        v6 = (CEntity *)*((_DWORD *)this + 5);
        v3 = (int)v5;
        v7 = *(_QWORD *)((char *)this + 28);
        v8 = *((float *)this + 6);
        CTaskSimple::CTaskSimple(v5);
        *(_WORD *)(v3 + 12) = 0;
        *(_DWORD *)(v3 + 16) = 191;
        *(_DWORD *)(v3 + 20) = 0;
        *(_DWORD *)(v3 + 24) = HIDWORD(v7);
        *(_QWORD *)(v3 + 32) = (unsigned int)v7;
        *(_DWORD *)v3 = &off_6697E0;
        *(_DWORD *)(v3 + 28) = (int)v8;
        *(_DWORD *)(v3 + 8) = v6;
        if ( v6 )
          CEntity::RegisterReference(v6, (CEntity **)(v3 + 8));
      }
      else
      {
        v9 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, 0x3F0u);
        v10 = *(_QWORD *)((char *)this + 28);
        v3 = (int)v9;
        v11 = *((float *)this + 6);
        CTaskSimple::CTaskSimple(v9);
        *(_DWORD *)(v3 + 8) = 0;
        *(_WORD *)(v3 + 12) = 0;
        *(_DWORD *)(v3 + 16) = 191;
        *(_DWORD *)(v3 + 20) = 0;
        *(_DWORD *)(v3 + 24) = HIDWORD(v10);
        *(_QWORD *)(v3 + 32) = (unsigned int)v10;
        *(_DWORD *)v3 = &off_6697E0;
        *(_DWORD *)(v3 + 28) = (int)v11;
      }
      break;
    case 208:
      v3 = CTask::operator new((CTask *)&off_18, 0xD0u);
      CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp();
      break;
    default:
      return 0;
  }
  return v3;
}


// ============================================================

// Address: 0x4e0004
// Original: _ZN25CTaskComplexReactToAttack18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexReactToAttack::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexReactToAttack::CreateFirstSubTask(CTaskComplexReactToAttack *this, CPed *a2)
{
  unsigned int v4; // r1
  unsigned __int16 *Pad; // r6
  int v6; // r0
  bool v7; // zf
  int v8; // r1
  int v9; // r2
  int v10; // r3
  float *v11; // r6
  float *v12; // r2
  float v13; // s2
  float v14; // s0
  float v15; // s4
  float v16; // s4
  float v17; // r1
  bool v18; // zf
  CTaskSimple *v19; // r0
  _DWORD *v20; // r0
  bool v21; // zf
  bool v22; // zf

  *((_BYTE *)this + 12) = 0;
  if ( CPed::IsPlayer(a2) == 1 && *((int *)this + 4) >= 10 )
  {
    Pad = (unsigned __int16 *)CPad::GetPad(0, v4);
    if ( !Pad[136] )
    {
      if ( CPad::GetTarget((CPad *)Pad, 0) )
        goto LABEL_25;
      v18 = *Pad == 0;
      if ( !*Pad )
        v18 = Pad[1] == 0;
      if ( !v18 )
        goto LABEL_25;
      v21 = Pad[8] == 0;
      if ( !Pad[8] )
        v21 = Pad[9] == 0;
      if ( !v21 )
        goto LABEL_25;
      v22 = Pad[10] == 0;
      if ( !Pad[10] )
        v22 = Pad[11] == 0;
      if ( !v22 )
      {
LABEL_25:
        v19 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, v4);
        CTaskSimple::CTaskSimple(v19);
        *v20 = &off_669000;
        return;
      }
    }
  }
  if ( *((_DWORD *)this + 8) != 3 )
  {
LABEL_20:
    CTaskComplexReactToAttack::CreateSubTask(this, 1008);
    return;
  }
  if ( (*((_BYTE *)a2 + 1163) & 4) != 0 )
  {
    v6 = *((_DWORD *)this + 4);
    v7 = v6 == 27;
    if ( v6 != 27 )
      v7 = v6 == 25;
    if ( v7 )
      goto LABEL_12;
    if ( v6 != 24 )
      goto LABEL_18;
    if ( !CPed::IsPlayer(a2) )
    {
LABEL_12:
      v8 = *((_DWORD *)this + 5);
      v9 = *((_DWORD *)a2 + 5);
      v10 = *(_DWORD *)(v8 + 20);
      v11 = (float *)(v9 + 48);
      if ( !v9 )
        v11 = (float *)((char *)a2 + 4);
      v12 = (float *)(v10 + 48);
      if ( !v10 )
        v12 = (float *)(v8 + 4);
      v13 = *v12 - *v11;
      v14 = v12[1] - v11[1];
      v15 = (float)(v13 * v13) + (float)(v14 * v14);
      if ( v15 <= 0.0 )
      {
        v17 = -5.0;
      }
      else
      {
        v16 = 1.0 / sqrtf(v15);
        v14 = v14 * v16;
        v17 = (float)(v13 * v16) * -5.0;
      }
      *((_DWORD *)a2 + 289) &= ~1u;
      CPhysical::ApplyMoveForce(a2, LODWORD(v17), v14 * -5.0, 1084227584);
      goto LABEL_28;
    }
  }
  v6 = *((_DWORD *)this + 4);
LABEL_18:
  if ( v6 > 8 || *((float *)a2 + 337) >= 30.0 )
    goto LABEL_20;
LABEL_28:
  CTask::operator new((CTask *)&off_18, v4);
  CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp();
}


// ============================================================

// Address: 0x4e018c
// Original: _ZN25CTaskComplexReactToAttack14ControlSubTaskEP4CPed
// Demangled: CTaskComplexReactToAttack::ControlSubTask(CPed *)
int __fastcall CTaskComplexReactToAttack::ControlSubTask(CTaskComplexReactToAttack *this, CPed *a2)
{
  if ( *((_BYTE *)this + 12) )
    return (*(int (__fastcall **)(CTaskComplexReactToAttack *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4e9cec
// Original: _ZNK25CTaskComplexReactToAttack5CloneEv
// Demangled: CTaskComplexReactToAttack::Clone(void)
CTaskComplex *__fastcall CTaskComplexReactToAttack::Clone(CTaskComplexReactToAttack *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4
  __int64 v6; // kr08_8
  int v7; // r6

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = v3;
  v6 = *((_QWORD *)this + 3);
  v7 = *((_DWORD *)this + 8);
  CTaskComplex::CTaskComplex(v3);
  *((_WORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 4) = v4;
  *((_QWORD *)v5 + 3) = v6;
  *((_DWORD *)v5 + 8) = v7;
  *(_DWORD *)v5 = &off_669814;
  *((_DWORD *)v5 + 5) = HIDWORD(v4);
  if ( HIDWORD(v4) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v4), (CEntity **)v5 + 5);
  return v5;
}


// ============================================================

// Address: 0x4e9d44
// Original: _ZNK25CTaskComplexReactToAttack11GetTaskTypeEv
// Demangled: CTaskComplexReactToAttack::GetTaskType(void)
int __fastcall CTaskComplexReactToAttack::GetTaskType(CTaskComplexReactToAttack *this)
{
  return 1006;
}


// ============================================================
