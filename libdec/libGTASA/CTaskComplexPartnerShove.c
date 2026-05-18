
// Address: 0x194158
// Original: j__ZN24CTaskComplexPartnerShoveD2Ev
// Demangled: CTaskComplexPartnerShove::~CTaskComplexPartnerShove()
// attributes: thunk
void __fastcall CTaskComplexPartnerShove::~CTaskComplexPartnerShove(CTaskComplexPartnerShove *this)
{
  _ZN24CTaskComplexPartnerShoveD2Ev(this);
}


// ============================================================

// Address: 0x196938
// Original: j__ZN24CTaskComplexPartnerShoveD2Ev_0
// Demangled: CTaskComplexPartnerShove::~CTaskComplexPartnerShove()
// attributes: thunk
void __fastcall CTaskComplexPartnerShove::~CTaskComplexPartnerShove(CTaskComplexPartnerShove *this)
{
  _ZN24CTaskComplexPartnerShoveD2Ev(this);
}


// ============================================================

// Address: 0x19cc90
// Original: j__ZN24CTaskComplexPartnerShoveC2EPcP4CPedhfi7CVector
// Demangled: CTaskComplexPartnerShove::CTaskComplexPartnerShove(char *,CPed *,uchar,float,int,CVector)
// attributes: thunk
int CTaskComplexPartnerShove::CTaskComplexPartnerShove()
{
  return _ZN24CTaskComplexPartnerShoveC2EPcP4CPedhfi7CVector();
}


// ============================================================

// Address: 0x53432c
// Original: _ZN24CTaskComplexPartnerShoveD2Ev
// Demangled: CTaskComplexPartnerShove::~CTaskComplexPartnerShove()
void __fastcall CTaskComplexPartnerShove::~CTaskComplexPartnerShove(CTaskComplexPartnerShove *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  _UNKNOWN **v4; // r2

  v3 = (CEntity **)((char *)this + 56);
  v2 = (CEntity *)*((_DWORD *)this + 14);
  v4 = &off_66CCE0;
  *(_DWORD *)this = &off_66CCE0;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, v3);
    v4 = *(_UNKNOWN ***)this;
  }
  ((void (__fastcall *)(CTaskComplexPartnerShove *))v4[14])(this);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x535a94
// Original: _ZN24CTaskComplexPartnerShoveC2EPcP4CPedhfi7CVector
// Demangled: CTaskComplexPartnerShove::CTaskComplexPartnerShove(char *,CPed *,uchar,float,int,CVector)
int __fastcall CTaskComplexPartnerShove::CTaskComplexPartnerShove(
        int a1,
        int a2,
        CEntity *a3,
        char a4,
        int a5,
        char a6,
        int a7,
        arg8_535A94 a8)
{
  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_BYTE *)(a1 + 88) = a4;
  *(_DWORD *)(a1 + 60) = a5;
  *(_BYTE *)(a1 + 93) = 0;
  *(_BYTE *)(a1 + 91) = a6;
  *(_DWORD *)(a1 + 64) = a7;
  *(arg8_535A94 *)(a1 + 68) = a8;
  *(_BYTE *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 89) = -255;
  *(_BYTE *)(a1 + 110) = 0;
  *(_BYTE *)(a1 + 94) = 0;
  *(_DWORD *)a1 = &off_66CCE0;
  *(_DWORD *)(a1 + 56) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 56));
  *(_BYTE *)(a1 + 91) = a6;
  *(_DWORD *)(a1 + 52) = 1209;
  *(_DWORD *)a1 = &off_66CE3C;
  return a1;
}


// ============================================================

// Address: 0x535b20
// Original: _ZN24CTaskComplexPartnerShoveD0Ev
// Demangled: CTaskComplexPartnerShove::~CTaskComplexPartnerShove()
void __fastcall CTaskComplexPartnerShove::~CTaskComplexPartnerShove(CTaskComplexPartnerShove *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  _UNKNOWN **v4; // r2
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 56);
  v2 = (CEntity *)*((_DWORD *)this + 14);
  v4 = &off_66CCE0;
  *(_DWORD *)this = &off_66CCE0;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, v3);
    v4 = *(_UNKNOWN ***)this;
  }
  ((void (__fastcall *)(CTaskComplexPartnerShove *))v4[14])(this);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x535b58
// Original: _ZN24CTaskComplexPartnerShove18GetPartnerSequenceEv
// Demangled: CTaskComplexPartnerShove::GetPartnerSequence(void)
CTaskComplexSequence *__fastcall CTaskComplexPartnerShove::GetPartnerSequence(CEntity **this, unsigned int a2)
{
  CTaskComplexSequence *v3; // r4
  unsigned int v4; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v5; // r6
  int v6; // r6
  unsigned int v7; // r1
  CTask *v8; // r5
  int v9; // r2

  v3 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, a2);
  CTaskComplexSequence::CTaskComplexSequence(v3);
  v5 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v4);
  CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v5, this[14], 0.5, 0.001);
  CTaskComplexSequence::AddTask(v3, v5);
  v6 = *((unsigned __int8 *)this + 88);
  v8 = (CTask *)CTask::operator new((CTask *)&dword_20, v7);
  if ( v6 )
    v9 = 164;
  else
    v9 = 142;
  CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v8, 0, v9, 1082130432, 0);
  CTaskComplexSequence::AddTask(v3, v8);
  return v3;
}


// ============================================================

// Address: 0x537328
// Original: _ZNK24CTaskComplexPartnerShove5CloneEv
// Demangled: CTaskComplexPartnerShove::Clone(void)
int __fastcall CTaskComplexPartnerShove::Clone(CTaskComplexPartnerShove *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // d8
  __int64 v5; // d9
  CEntity *v6; // r5
  char v7; // r8

  v3 = CTask::operator new((CTask *)&dword_74, a2);
  v4 = *(_QWORD *)((char *)this + 60);
  v5 = *(_QWORD *)((char *)this + 68);
  v6 = (CEntity *)*((_DWORD *)this + 14);
  v7 = *((_BYTE *)this + 91);
  LOBYTE(this) = *((_BYTE *)this + 88);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 60) = v4;
  *(_QWORD *)(v3 + 68) = v5;
  *(_BYTE *)(v3 + 88) = (_BYTE)this;
  *(_BYTE *)(v3 + 91) = v7;
  *(_WORD *)(v3 + 92) = 0;
  *(_WORD *)(v3 + 89) = -255;
  *(_BYTE *)(v3 + 110) = 0;
  *(_BYTE *)(v3 + 94) = 0;
  *(_DWORD *)v3 = &off_66CCE0;
  *(_DWORD *)(v3 + 56) = v6;
  if ( v6 )
    CEntity::RegisterReference(v6, (CEntity **)(v3 + 56));
  *(_BYTE *)(v3 + 91) = v7;
  *(_DWORD *)(v3 + 52) = 1209;
  *(_DWORD *)v3 = &off_66CE3C;
  return v3;
}


// ============================================================

// Address: 0x5373c4
// Original: _ZNK24CTaskComplexPartnerShove11GetTaskTypeEv
// Demangled: CTaskComplexPartnerShove::GetTaskType(void)
int __fastcall CTaskComplexPartnerShove::GetTaskType(CTaskComplexPartnerShove *this)
{
  return 1209;
}


// ============================================================
