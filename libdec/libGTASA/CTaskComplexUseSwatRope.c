
// Address: 0x199a58
// Original: j__ZN23CTaskComplexUseSwatRopeC2EiP5CHeli
// Demangled: CTaskComplexUseSwatRope::CTaskComplexUseSwatRope(int,CHeli *)
// attributes: thunk
void __fastcall CTaskComplexUseSwatRope::CTaskComplexUseSwatRope(CTaskComplexUseSwatRope *this, int a2, CHeli *a3)
{
  _ZN23CTaskComplexUseSwatRopeC2EiP5CHeli(this, a2, a3);
}


// ============================================================

// Address: 0x19d8f8
// Original: j__ZN23CTaskComplexUseSwatRopeC2Ei
// Demangled: CTaskComplexUseSwatRope::CTaskComplexUseSwatRope(int)
// attributes: thunk
void __fastcall CTaskComplexUseSwatRope::CTaskComplexUseSwatRope(CTaskComplexUseSwatRope *this, int a2)
{
  _ZN23CTaskComplexUseSwatRopeC2Ei(this, a2);
}


// ============================================================

// Address: 0x511aec
// Original: _ZN23CTaskComplexUseSwatRopeC2Ei
// Demangled: CTaskComplexUseSwatRope::CTaskComplexUseSwatRope(int)
void __fastcall CTaskComplexUseSwatRope::CTaskComplexUseSwatRope(CTaskComplexUseSwatRope *this, int a2)
{
  int v3; // r0
  char v4; // r2

  CTaskComplex::CTaskComplex(this);
  v4 = *(_BYTE *)(v3 + 20);
  *(_DWORD *)(v3 + 12) = a2;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_BYTE *)(v3 + 20) = v4 & 0xFE;
  *(_DWORD *)v3 = &off_66BAC0;
}


// ============================================================

// Address: 0x511b18
// Original: _ZN23CTaskComplexUseSwatRopeC2EiP5CHeli
// Demangled: CTaskComplexUseSwatRope::CTaskComplexUseSwatRope(int,CHeli *)
void __fastcall CTaskComplexUseSwatRope::CTaskComplexUseSwatRope(CTaskComplexUseSwatRope *this, int a2, CHeli *a3)
{
  char v6; // r1

  CTaskComplex::CTaskComplex(this);
  v6 = *((_BYTE *)this + 20);
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = v6 | 1;
  *(_DWORD *)this = &off_66BAC0;
  *((_DWORD *)this + 6) = a3;
  CEntity::RegisterReference(a3, (CEntity **)this + 6);
}


// ============================================================

// Address: 0x511b5c
// Original: _ZN23CTaskComplexUseSwatRopeD2Ev
// Demangled: CTaskComplexUseSwatRope::~CTaskComplexUseSwatRope()
void __fastcall CTaskComplexUseSwatRope::~CTaskComplexUseSwatRope(CTaskComplexUseSwatRope *this)
{
  int v2; // r1
  CEntity *v3; // r0

  v2 = *((unsigned __int8 *)this + 20);
  *(_DWORD *)this = &off_66BAC0;
  if ( v2 << 31 )
  {
    v3 = (CEntity *)*((_DWORD *)this + 6);
    if ( v3 )
      CEntity::CleanUpOldReference(v3, (CEntity **)this + 6);
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x511b90
// Original: _ZN23CTaskComplexUseSwatRopeD0Ev
// Demangled: CTaskComplexUseSwatRope::~CTaskComplexUseSwatRope()
void __fastcall CTaskComplexUseSwatRope::~CTaskComplexUseSwatRope(CTaskComplexUseSwatRope *this)
{
  int v2; // r1
  CEntity *v3; // r0
  void *v4; // r0

  v2 = *((unsigned __int8 *)this + 20);
  *(_DWORD *)this = &off_66BAC0;
  if ( v2 << 31 )
  {
    v3 = (CEntity *)*((_DWORD *)this + 6);
    if ( v3 )
      CEntity::CleanUpOldReference(v3, (CEntity **)this + 6);
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x511bc8
// Original: _ZN23CTaskComplexUseSwatRope13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexUseSwatRope::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexUseSwatRope::MakeAbortable(
        CTaskComplexUseSwatRope *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v8; // r1
  int result; // r0
  int v10; // r1
  int v11; // r2

  if ( a3 != 2
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 10
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 52
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 58
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 66
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 64
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 73
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 41
    && *((float *)a2 + 337) >= 20.0 )
  {
    return 0;
  }
  v8 = (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         a3,
         a4);
  result = 0;
  if ( v8 == 1 )
  {
    v10 = *((_DWORD *)a2 + 289);
    v11 = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 18) = 0;
    *((_DWORD *)a2 + 19) = 0;
    *((_DWORD *)a2 + 20) = 0;
    *((_DWORD *)a2 + 289) = v10 & 0xFFFFFFFE;
    *((_DWORD *)a2 + 7) = v11 | 1;
    return 1;
  }
  return result;
}


// ============================================================

// Address: 0x511c8a
// Original: _ZN23CTaskComplexUseSwatRope17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseSwatRope::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseSwatRope::CreateNextSubTask(CTaskComplexUseSwatRope *this, CPed *a2)
{
  CTaskComplexUseSwatRope *v3; // r0
  bool v4; // zf
  int v5; // r1

  v3 = (CTaskComplexUseSwatRope *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v4 = v3 == (CTaskComplexUseSwatRope *)&dword_C8;
  v5 = 1302;
  if ( v3 != (CTaskComplexUseSwatRope *)&dword_C8 )
    v4 = v3 == (CTaskComplexUseSwatRope *)((char *)&dword_C8 + 2);
  if ( !v4 )
  {
    if ( v3 != (CTaskComplexUseSwatRope *)((char *)&elf_hash_bucket[42] + 3) )
      return 0;
    v5 = 202;
  }
  return CTaskComplexUseSwatRope::CreateSubTask(v3, v5, a2);
}


// ============================================================

// Address: 0x511cbc
// Original: _ZNK23CTaskComplexUseSwatRope13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexUseSwatRope::CreateSubTask(int,CPed *)
void __fastcall CTaskComplexUseSwatRope::CreateSubTask(CTaskComplexUseSwatRope *this, int a2, CPed *a3)
{
  CTaskSimple *v3; // r0
  int v4; // r0
  char *v5; // r1
  int v6; // r0
  void **v7; // r1
  CTaskSimple *v8; // r0
  int v9; // r1

  if ( a2 <= 422 )
  {
    if ( a2 != 200 )
    {
      if ( a2 != 202 )
        return;
      v3 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, 0xCAu);
      CTaskSimple::CTaskSimple(v3);
      *(_WORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 20) = &elf_hash_chain[8526];
      v5 = (char *)&`vtable for'CTaskSimplePause;
      *(_DWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 12) = 0;
      goto LABEL_10;
    }
    v8 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, 0xC8u);
    CTaskSimple::CTaskSimple(v8);
    v7 = (void **)&`vtable for'CTaskSimpleNone;
LABEL_9:
    v5 = (char *)*v7;
LABEL_10:
    *(_DWORD *)v4 = v5 + 8;
    return;
  }
  if ( a2 != 1302 )
  {
    if ( a2 != 423 )
      return;
    v6 = CTask::operator new((CTask *)&dword_20, 0x1A7u);
    v4 = CTaskSimpleRunAnim::CTaskSimpleRunAnim(v6, 0, 152, 1082130432, 423, (int)"Abseil", 0);
    v7 = (void **)&`vtable for'CTaskSimpleAbseil;
    goto LABEL_9;
  }
  v9 = *((_DWORD *)a3 + 7);
  *((_DWORD *)a3 + 18) = 0;
  *((_DWORD *)a3 + 19) = 0;
  *((_DWORD *)a3 + 20) = 0;
  *((_DWORD *)a3 + 7) = v9 | 1;
}


// ============================================================

// Address: 0x511d68
// Original: _ZN23CTaskComplexUseSwatRope18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseSwatRope::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexUseSwatRope::CreateFirstSubTask(CTaskComplexUseSwatRope *this, CPed *a2)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v2, 0, 152, 1082130432, 423, (int)"Abseil", 0);
  *result = &off_6688F8;
  return result;
}


// ============================================================

// Address: 0x511da8
// Original: _ZN23CTaskComplexUseSwatRope14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseSwatRope::ControlSubTask(CPed *)
CTaskSimple *__fastcall CTaskComplexUseSwatRope::ControlSubTask(CTaskComplexUseSwatRope *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  CTaskSimple *v6; // r8
  int v7; // r0
  int v8; // r1
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  float *v12; // r4
  float *v13; // r1
  double v14; // d16
  int v15; // r0
  unsigned int v16; // r1
  unsigned int v17; // r1
  int v18; // r1
  int v19; // r3
  int v20; // r0
  _DWORD *v21; // r1
  unsigned int v22; // r1
  float v23; // s0
  float v24; // s2
  CVector *v26; // [sp+0h] [bp-38h]
  _DWORD v27[3]; // [sp+Ch] [bp-2Ch] BYREF
  double v28; // [sp+18h] [bp-20h] BYREF
  float v29; // [sp+20h] [bp-18h]

  if ( *((unsigned __int8 *)this + 20) << 31 )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = v4 == 0;
    if ( v4 )
      v5 = *(_BYTE *)(v4 + 958) == 58;
    if ( v5 || *(float *)(v4 + 1228) <= 0.0 )
    {
      v6 = 0;
      if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0) == 1 )
      {
        v7 = *((_DWORD *)a2 + 289);
        *((_DWORD *)a2 + 18) = 0;
        *((_DWORD *)a2 + 19) = 0;
        *((_DWORD *)a2 + 20) = 0;
        v8 = *((_DWORD *)a2 + 7);
        *((_DWORD *)a2 + 289) = v7 & 0xFFFFFFFE;
        *((_DWORD *)a2 + 7) = v8 | 1;
        return v6;
      }
    }
  }
  v6 = (CTaskSimple *)*((_DWORD *)this + 2);
  v9 = (*(int (__fastcall **)(CTaskSimple *))(*(_DWORD *)v6 + 20))(v6);
  v10 = v9 == 423;
  if ( v9 != 423 )
    v10 = v9 == 202;
  if ( v10 )
  {
    v11 = *((_DWORD *)a2 + 5);
    v12 = (float *)((char *)a2 + 4);
    v13 = (float *)((char *)a2 + 4);
    if ( v11 )
      v13 = (float *)(v11 + 48);
    v14 = *(double *)v13;
    v29 = v13[2];
    v28 = v14;
    CPedPlacement::FindZCoorForPed((CPedPlacement *)&v28, (CVector *)v13);
    v15 = *((_DWORD *)a2 + 5);
    if ( v15 )
      v12 = (float *)(v15 + 48);
    if ( (float)(v12[2] + -2.0) >= v29 )
    {
      *(float *)&v17 = *((float *)this + 4) + (float)(*(float *)&CTimer::ms_fTimeStep * 0.003);
      *((float *)this + 4) = *(float *)&v17;
      if ( CRopes::FindCoorsAlongRope(*((CRopes **)this + 3), v17, COERCE_FLOAT(v27), 0, v26) == 1 )
      {
        v18 = v27[1];
        v19 = *((_DWORD *)a2 + 5);
        v20 = v27[2];
        if ( v19 )
        {
          *(_DWORD *)(v19 + 48) = v27[0];
          *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = v18;
          v21 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
        }
        else
        {
          *((_DWORD *)a2 + 1) = v27[0];
          *((_DWORD *)a2 + 2) = v18;
          v21 = (_DWORD *)((char *)a2 + 12);
        }
        *v21 = v20;
        v23 = *(float *)&CTimer::ms_fTimeStep * -0.05;
        v24 = *((float *)a2 + 343);
        *((_DWORD *)a2 + 20) = -1124744561;
        *((float *)a2 + 344) = v24 + v23;
        CPed::Say(a2, 0xB1u, 0, 1.0, 0, 0, 0);
        return v6;
      }
      if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0) != 1 )
        return v6;
      v6 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, v22);
      CTaskSimple::CTaskSimple(v6);
    }
    else
    {
      if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0) != 1 )
        return v6;
      v6 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, v16);
      CTaskSimple::CTaskSimple(v6);
    }
    *(_DWORD *)v6 = &off_669000;
  }
  return v6;
}


// ============================================================

// Address: 0x5126a0
// Original: _ZNK23CTaskComplexUseSwatRope5CloneEv
// Demangled: CTaskComplexUseSwatRope::Clone(void)
CTaskComplex *__fastcall CTaskComplexUseSwatRope::Clone(CTaskComplexUseSwatRope *this, unsigned int a2)
{
  char v3; // r6
  CTaskComplex *v4; // r0
  int v5; // r8
  CTaskComplex *v6; // r4
  char v7; // r1
  CEntity *v8; // r5
  char v9; // r1

  v3 = *((_BYTE *)this + 20);
  v4 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, a2);
  v5 = *((_DWORD *)this + 3);
  v6 = v4;
  if ( (v3 & 1) != 0 )
  {
    v8 = (CEntity *)*((_DWORD *)this + 6);
    CTaskComplex::CTaskComplex(v4);
    *((_DWORD *)v6 + 3) = v5;
    *((_DWORD *)v6 + 4) = 0;
    v9 = *((_BYTE *)v6 + 20);
    *(_DWORD *)v6 = &off_66BAC0;
    *((_BYTE *)v6 + 20) = v9 | 1;
    *((_DWORD *)v6 + 6) = v8;
    CEntity::RegisterReference(v8, (CEntity **)v6 + 6);
  }
  else
  {
    CTaskComplex::CTaskComplex(v4);
    v7 = *((_BYTE *)v6 + 20);
    *((_DWORD *)v6 + 3) = v5;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 6) = 0;
    *((_BYTE *)v6 + 20) = v7 & 0xFE;
    *(_DWORD *)v6 = &off_66BAC0;
  }
  return v6;
}


// ============================================================

// Address: 0x512720
// Original: _ZNK23CTaskComplexUseSwatRope11GetTaskTypeEv
// Demangled: CTaskComplexUseSwatRope::GetTaskType(void)
int __fastcall CTaskComplexUseSwatRope::GetTaskType(CTaskComplexUseSwatRope *this)
{
  return 108;
}


// ============================================================

// Address: 0x512724
// Original: _ZNK23CTaskComplexUseSwatRope15IsInterruptableEPK4CPed
// Demangled: CTaskComplexUseSwatRope::IsInterruptable(CPed const*)
int __fastcall CTaskComplexUseSwatRope::IsInterruptable(CTaskComplexUseSwatRope *this, const CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x512728
// Original: _ZN23CTaskComplexUseSwatRope13AbortUrgentlyEP4CPed
// Demangled: CTaskComplexUseSwatRope::AbortUrgently(CPed *)
int __fastcall CTaskComplexUseSwatRope::AbortUrgently(CTaskComplexUseSwatRope *this, CPed *a2)
{
  return 0;
}


// ============================================================
