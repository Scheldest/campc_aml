
// Address: 0x196e2c
// Original: j__ZN27CTaskComplexGotoDoorAndOpenC2EP7CObject
// Demangled: CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(CObject *)
// attributes: thunk
void __fastcall CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(
        CTaskComplexGotoDoorAndOpen *this,
        CObject *a2)
{
  _ZN27CTaskComplexGotoDoorAndOpenC2EP7CObject(this, a2);
}


// ============================================================

// Address: 0x19a120
// Original: j__ZN27CTaskComplexGotoDoorAndOpenC2ERK7CVectorS2_
// Demangled: CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(CVector const&,CVector const&)
// attributes: thunk
void __fastcall CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(
        CTaskComplexGotoDoorAndOpen *this,
        const CVector *a2,
        const CVector *a3)
{
  _ZN27CTaskComplexGotoDoorAndOpenC2ERK7CVectorS2_(this, a2, a3);
}


// ============================================================

// Address: 0x525988
// Original: _ZN27CTaskComplexGotoDoorAndOpenC2EP7CObject
// Demangled: CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(CObject *)
void __fastcall CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(
        CTaskComplexGotoDoorAndOpen *this,
        CObject *a2)
{
  char v4; // r1

  CTaskComplex::CTaskComplex(this);
  v4 = *((_BYTE *)this + 52);
  *((_WORD *)this + 24) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 52) = v4 & 0xF0 | 1;
  *(_DWORD *)this = &off_66C4B4;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x5259d0
// Original: _ZN27CTaskComplexGotoDoorAndOpenC2ERK7CVectorS2_
// Demangled: CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(CVector const&,CVector const&)
void __fastcall CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(
        CTaskComplexGotoDoorAndOpen *this,
        const CVector *a2,
        const CVector *a3)
{
  int v5; // r0
  __int64 v6; // d16
  __int64 v7; // d16
  char v8; // r1

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v5 + 12) = 0;
  *(_DWORD *)v5 = &off_66C4B4;
  v6 = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 24) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(v5 + 16) = v6;
  v7 = *(_QWORD *)a3;
  *(_DWORD *)(v5 + 36) = *((_DWORD *)a3 + 2);
  *(_WORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 28) = v7;
  v8 = *(_BYTE *)(v5 + 52);
  *(_DWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 44) = 0;
  *(_BYTE *)(v5 + 52) = v8 & 0xF4;
}


// ============================================================

// Address: 0x525a1c
// Original: _ZN27CTaskComplexGotoDoorAndOpenD2Ev
// Demangled: CTaskComplexGotoDoorAndOpen::~CTaskComplexGotoDoorAndOpen()
void __fastcall CTaskComplexGotoDoorAndOpen::~CTaskComplexGotoDoorAndOpen(CTaskComplexGotoDoorAndOpen *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C4B4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x525a48
// Original: _ZN27CTaskComplexGotoDoorAndOpenD0Ev
// Demangled: CTaskComplexGotoDoorAndOpen::~CTaskComplexGotoDoorAndOpen()
void __fastcall CTaskComplexGotoDoorAndOpen::~CTaskComplexGotoDoorAndOpen(CTaskComplexGotoDoorAndOpen *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C4B4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x525a78
// Original: _ZN27CTaskComplexGotoDoorAndOpen13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexGotoDoorAndOpen::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexGotoDoorAndOpen::MakeAbortable(
        CTaskComplexGotoDoorAndOpen *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( a3 == 2 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             2,
             a4);
  else
    return 0;
}


// ============================================================

// Address: 0x525a8c
// Original: _ZNK27CTaskComplexGotoDoorAndOpen5CloneEv
// Demangled: CTaskComplexGotoDoorAndOpen::Clone(void)
CTaskComplex *__fastcall CTaskComplexGotoDoorAndOpen::Clone(CTaskComplexGotoDoorAndOpen *this, unsigned int a2)
{
  char v3; // r6
  CTaskComplex *v4; // r0
  CTaskComplex *v5; // r4
  __int64 v6; // d16
  __int64 v7; // d16
  char v8; // r0
  CEntity *v9; // r5
  char v10; // r2

  v3 = *((_BYTE *)this + 52);
  v4 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, a2);
  v5 = v4;
  if ( (v3 & 1) != 0 )
  {
    v9 = (CEntity *)*((_DWORD *)this + 3);
    CTaskComplex::CTaskComplex(v4);
    *((_WORD *)v5 + 24) = 0;
    v10 = *((_BYTE *)v5 + 52);
    *((_DWORD *)v5 + 10) = 0;
    *((_DWORD *)v5 + 11) = 0;
    *(_DWORD *)v5 = &off_66C4B4;
    *((_BYTE *)v5 + 52) = v10 & 0xF0 | 1;
    *((_DWORD *)v5 + 3) = v9;
    if ( v9 )
      CEntity::RegisterReference(v9, (CEntity **)v5 + 3);
  }
  else
  {
    CTaskComplex::CTaskComplex(v4);
    *((_DWORD *)v5 + 3) = 0;
    *(_DWORD *)v5 = &off_66C4B4;
    v6 = *((_QWORD *)this + 2);
    *((_DWORD *)v5 + 6) = *((_DWORD *)this + 6);
    *((_QWORD *)v5 + 2) = v6;
    v7 = *(_QWORD *)((char *)this + 28);
    *((_DWORD *)v5 + 9) = *((_DWORD *)this + 9);
    *((_WORD *)v5 + 24) = 0;
    *(_QWORD *)((char *)v5 + 28) = v7;
    v8 = *((_BYTE *)v5 + 52);
    *((_DWORD *)v5 + 10) = 0;
    *((_DWORD *)v5 + 11) = 0;
    *((_BYTE *)v5 + 52) = v8 & 0xF4;
  }
  return v5;
}


// ============================================================

// Address: 0x525b34
// Original: _ZN27CTaskComplexGotoDoorAndOpen18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGotoDoorAndOpen::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexGotoDoorAndOpen::CreateFirstSubTask(CTaskComplexGotoDoorAndOpen *this, CPed *a2)
{
  int v4; // r1
  int Pad; // r0
  CEventGroup *EventGlobalGroup; // r0
  int v7; // r0
  int v8; // r1
  float *v9; // r2
  float *v10; // r3
  float *v11; // r1
  float v12; // s8
  float v13; // s12
  float v14; // s14
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s6
  float v19; // s10
  float v20; // s3
  float v21; // s1
  float v22; // s12
  float v23; // s8
  float v24; // s4
  float v25; // s5
  float v26; // s9
  float v27; // s14
  float v28; // s6
  float v29; // s2
  float v30; // s6
  float v31; // s0
  float v32; // s4
  float v33; // s8
  float v34; // s10
  int v35; // r5
  float v36; // s0
  int v37; // r0
  __int64 v38; // d16
  unsigned int v39; // r1
  char v40; // r1
  _BYTE v42[32]; // [sp+0h] [bp-20h] BYREF

  if ( CPed::IsPlayer(a2) == 1 )
  {
    Pad = CPad::GetPad(0, v4);
    *(_WORD *)(Pad + 272) |= 8u;
    *((_BYTE *)this + 52) |= 8u;
  }
  CEventAreaCodes::CEventAreaCodes((CEventAreaCodes *)v42, a2);
  EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
  CEventGroup::Add(EventGlobalGroup, (CEvent *)v42, 0);
  v7 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 10) = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)this + 11) = 1000;
  *((_BYTE *)this + 48) = 1;
  if ( v7 )
  {
    v8 = *((_DWORD *)a2 + 5);
    v9 = *(float **)(v7 + 20);
    v10 = (float *)(v8 + 48);
    if ( !v8 )
      v10 = (float *)((char *)a2 + 4);
    v11 = v9 + 12;
    if ( !v9 )
      v11 = (float *)(v7 + 4);
    v12 = v11[1];
    v13 = v11[2];
    v14 = v12 - v10[1];
    v15 = v9[4];
    v16 = v9[5];
    v17 = v9[6];
    v18 = v17 * (float)(v13 - v10[2]);
    v19 = *v11 + (float)(*v9 * 0.75);
    v20 = v16 + v16;
    v21 = v17 * -0.5;
    v22 = v13 + (float)(v9[2] * 0.75);
    v23 = v12 + (float)(v9[1] * 0.75);
    v24 = v17 + v17;
    v25 = v15 + v15;
    v26 = (float)((float)(v15 * (float)(*v11 - *v10)) + (float)(v16 * v14)) + v18;
    v27 = v16 * -0.5;
    v28 = v15 * -0.5;
    if ( v26 <= 0.0 )
    {
      v29 = v23 - v27;
      v30 = v19 - v28;
      v31 = v22 - v21;
      v32 = v22 - v24;
      v33 = v23 - v20;
      v34 = v19 - v25;
    }
    else
    {
      v29 = v23 + v27;
      v30 = v19 + v28;
      v31 = v22 + v21;
      v32 = v22 + v24;
      v33 = v23 + v20;
      v34 = v19 + v25;
    }
    *((float *)this + 4) = v30;
    *((float *)this + 5) = v29;
    *((float *)this + 6) = v31;
    *((float *)this + 7) = v34;
    *((float *)this + 8) = v33;
    *((float *)this + 9) = v32;
    if ( (*(_BYTE *)(v7 + 68) & 8) != 0 )
    {
      *((_BYTE *)this + 52) |= 4u;
      *(_DWORD *)(v7 + 68) &= ~8u;
      *(_DWORD *)(*((_DWORD *)this + 3) + 68) &= ~4u;
    }
    if ( RpAnimBlendClumpGetAssociation() )
      CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 0);
    v35 = CTask::operator new((CTask *)&word_2C, v39);
    CTaskSimple::CTaskSimple((CTaskSimple *)v35);
    *(_DWORD *)(v35 + 8) = 4;
    v36 = 0.35;
    *(_DWORD *)v35 = &off_66C0B0;
    v38 = *((_QWORD *)this + 2);
    v37 = *((_DWORD *)this + 6);
  }
  else
  {
    if ( (*((_BYTE *)this + 52) & 1) != 0 )
    {
      v35 = 0;
      goto LABEL_20;
    }
    *((_BYTE *)this + 52) |= 2u;
    v35 = CTask::operator new((CTask *)&word_2C, 1u);
    CTaskSimple::CTaskSimple((CTaskSimple *)v35);
    v36 = 0.5;
    *(_DWORD *)(v35 + 8) = 4;
    *(_DWORD *)v35 = &off_66C0B0;
    v37 = *((_DWORD *)this + 9);
    v38 = *(_QWORD *)((char *)this + 28);
  }
  *(_DWORD *)(v35 + 20) = v37;
  *(_QWORD *)(v35 + 12) = v38;
  v40 = *(_BYTE *)(v35 + 28);
  *(float *)(v35 + 24) = v36;
  *(_BYTE *)(v35 + 28) = v40 & 0xC0;
  *(_DWORD *)v35 = &off_66C0E4;
  *(_BYTE *)(v35 + 29) &= 0xE0u;
LABEL_20:
  CEventAreaCodes::~CEventAreaCodes((CEventAreaCodes *)v42);
  return v35;
}


// ============================================================

// Address: 0x525d7c
// Original: _ZN27CTaskComplexGotoDoorAndOpen17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGotoDoorAndOpen::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGotoDoorAndOpen::CreateNextSubTask(CTaskComplexGotoDoorAndOpen *this, CPed *a2)
{
  unsigned int v4; // r1
  int v5; // r6
  CTask *v6; // r5
  int v7; // r5
  __int64 v8; // d16
  char v9; // r0
  char v10; // r2
  int IsPlayer; // r0
  int v13; // r1
  int Pad; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 900 )
    return 0;
  if ( (*((_BYTE *)this + 52) & 2) != 0 )
  {
    IsPlayer = CPed::IsPlayer(a2);
    v7 = 0;
    if ( IsPlayer == 1 )
    {
      Pad = CPad::GetPad(0, v13);
      *(_WORD *)(Pad + 272) |= 8u;
    }
  }
  else
  {
    if ( !CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4) )
    {
      v5 = *((_DWORD *)a2 + 272);
      v6 = (CTask *)CTask::operator new((CTask *)&dword_20, v4);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v6, 0, 153, 1090519040, 0);
      CTaskManager::SetTaskSecondary((CTaskManager *)(v5 + 4), v6, 4);
    }
    v7 = CTask::operator new((CTask *)&word_2C, v4);
    CTaskSimple::CTaskSimple((CTaskSimple *)v7);
    *(_DWORD *)(v7 + 8) = 4;
    *(_DWORD *)v7 = &off_66C0B0;
    v8 = *(_QWORD *)((char *)this + 28);
    v9 = *(_BYTE *)(v7 + 28) & 0xC0;
    v10 = *(_BYTE *)(v7 + 29);
    *(_DWORD *)(v7 + 20) = *((_DWORD *)this + 9);
    *(_DWORD *)v7 = &off_66C0E4;
    *(_DWORD *)(v7 + 24) = 1045220557;
    *(_BYTE *)(v7 + 28) = v9;
    *(_BYTE *)(v7 + 29) = v10 & 0xE0;
    *(_QWORD *)(v7 + 12) = v8;
    *((_BYTE *)this + 52) |= 2u;
  }
  return v7;
}


// ============================================================

// Address: 0x525e68
// Original: _ZN27CTaskComplexGotoDoorAndOpen14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGotoDoorAndOpen::ControlSubTask(CPed *)
int __fastcall CTaskComplexGotoDoorAndOpen::ControlSubTask(CTaskComplexGotoDoorAndOpen *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r1
  int v7; // r4
  int Pad; // r0

  if ( !*((_BYTE *)this + 48)
    || (!*((_BYTE *)this + 49)
      ? (v5 = *((_DWORD *)this + 10), v4 = CTimer::m_snTimeInMilliseconds)
      : (v4 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 49) = 0, *((_DWORD *)this + 10) = v4, v5 = v4),
        v5 + *((_DWORD *)this + 11) > v4) )
  {
    if ( *((_DWORD *)this + 3) || !(*((unsigned __int8 *)this + 52) << 31) )
      return *((_DWORD *)this + 2);
  }
  if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) != 1 )
    return *((_DWORD *)this + 2);
  v7 = 0;
  if ( CPed::IsPlayer(a2) == 1 )
  {
    Pad = CPad::GetPad(0, v6);
    *(_WORD *)(Pad + 272) |= 8u;
  }
  return v7;
}


// ============================================================

// Address: 0x52870c
// Original: _ZNK27CTaskComplexGotoDoorAndOpen11GetTaskTypeEv
// Demangled: CTaskComplexGotoDoorAndOpen::GetTaskType(void)
int __fastcall CTaskComplexGotoDoorAndOpen::GetTaskType(CTaskComplexGotoDoorAndOpen *this)
{
  return 932;
}


// ============================================================
