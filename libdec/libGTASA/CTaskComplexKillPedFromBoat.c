
// Address: 0x190cf0
// Original: j__ZN27CTaskComplexKillPedFromBoatC2EP4CPed
// Demangled: CTaskComplexKillPedFromBoat::CTaskComplexKillPedFromBoat(CPed *)
// attributes: thunk
void __fastcall CTaskComplexKillPedFromBoat::CTaskComplexKillPedFromBoat(CTaskComplexKillPedFromBoat *this, CPed *a2)
{
  _ZN27CTaskComplexKillPedFromBoatC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x4e8a2c
// Original: _ZN27CTaskComplexKillPedFromBoatC2EP4CPed
// Demangled: CTaskComplexKillPedFromBoat::CTaskComplexKillPedFromBoat(CPed *)
void __fastcall CTaskComplexKillPedFromBoat::CTaskComplexKillPedFromBoat(CTaskComplexKillPedFromBoat *this, CPed *a2)
{
  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_669B10;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4e8a5c
// Original: _ZN27CTaskComplexKillPedFromBoatD2Ev
// Demangled: CTaskComplexKillPedFromBoat::~CTaskComplexKillPedFromBoat()
void __fastcall CTaskComplexKillPedFromBoat::~CTaskComplexKillPedFromBoat(CTaskComplexKillPedFromBoat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669B10;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e8a88
// Original: _ZN27CTaskComplexKillPedFromBoatD0Ev
// Demangled: CTaskComplexKillPedFromBoat::~CTaskComplexKillPedFromBoat()
void __fastcall CTaskComplexKillPedFromBoat::~CTaskComplexKillPedFromBoat(CTaskComplexKillPedFromBoat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669B10;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e8ab8
// Original: _ZN27CTaskComplexKillPedFromBoat17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexKillPedFromBoat::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexKillPedFromBoat::CreateNextSubTask(CTaskComplexKillPedFromBoat *this, CPed *a2)
{
  CTaskSimpleStandStill *v2; // r0

  v2 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  CTaskSimpleStandStill::CTaskSimpleStandStill(v2, 0, 1, 0, 8.0);
}


// ============================================================

// Address: 0x4e8ad8
// Original: _ZN27CTaskComplexKillPedFromBoat18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexKillPedFromBoat::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexKillPedFromBoat::CreateFirstSubTask(CTaskComplexKillPedFromBoat *this, CPed *a2)
{
  CTaskSimpleStandStill *v2; // r0

  *((_DWORD *)a2 + 289) |= 0x200000u;
  v2 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  CTaskSimpleStandStill::CTaskSimpleStandStill(v2, 0, 1, 0, 8.0);
}


// ============================================================

// Address: 0x4e8b04
// Original: _ZN27CTaskComplexKillPedFromBoat14ControlSubTaskEP4CPed
// Demangled: CTaskComplexKillPedFromBoat::ControlSubTask(CPed *)
int __fastcall CTaskComplexKillPedFromBoat::ControlSubTask(CTaskComplexKillPedFromBoat *this, CPed *a2)
{
  int v4; // r4
  int v5; // r0
  bool v6; // zf
  CPed *v7; // r0
  unsigned int v8; // r1
  CEntity *v9; // r5
  char v10; // r1
  char v11; // r0
  int v12; // r1
  CPed *v13; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r1
  CPed *v17; // r0
  unsigned int v18; // r1

  v4 = *((_DWORD *)this + 2);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
  if ( v5 == 1000 )
  {
    if ( *((_DWORD *)a2 + 359) == 6 )
    {
      v13 = (CPed *)*((_DWORD *)this + 3);
      if ( v13 && CPed::IsPlayer(v13) == 1 )
      {
        v14 = *((_DWORD *)this + 3);
        v16 = *(unsigned __int8 *)(v14 + 1157) << 31;
        v15 = v16 == 0;
        if ( v16 )
        {
          v16 = *(_DWORD *)(v14 + 1424);
          v15 = v16 == 0;
        }
        if ( v15 )
        {
          if ( *(unsigned __int8 *)(v14 + 69) << 31 )
            CAudioEngine::SayPedless((CAudioEngine *)&AudioEngine, 52, 175, a2, 0, 1.0, 0, 0, 0);
        }
        else if ( *(_BYTE *)(v16 + 444) == 3 )
        {
          CAudioEngine::SayPedless((CAudioEngine *)&AudioEngine, 52, 173, a2, 0, 1.0, 0, 0, 0);
        }
      }
      if ( *((_DWORD *)a2 + 359) == 6 )
      {
        v17 = (CPed *)*((_DWORD *)this + 3);
        if ( v17 )
        {
          if ( CPed::IsPlayer(v17) == 1
            && !*(_DWORD *)(FindPlayerWanted(-1) + 44)
            && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
                 *((_DWORD *)this + 2),
                 a2,
                 1,
                 0) == 1 )
          {
            v4 = CTask::operator new((CTask *)&dword_20, v18);
            CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v4, 0, 1, 0, 8.0);
          }
        }
      }
    }
  }
  else
  {
    v6 = v5 == 203;
    if ( v5 == 203 )
      v6 = *((_DWORD *)a2 + 359) == 6;
    if ( v6 )
    {
      v7 = (CPed *)*((_DWORD *)this + 3);
      if ( v7 )
      {
        if ( CPed::IsPlayer(v7) == 1
          && *(_DWORD *)(FindPlayerWanted(-1) + 44)
          && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               1,
               0) == 1 )
        {
          v4 = CTask::operator new((CTask *)&dword_38, v8);
          v9 = (CEntity *)*((_DWORD *)this + 3);
          CTaskComplex::CTaskComplex((CTaskComplex *)v4);
          *(_DWORD *)(v4 + 20) = 0;
          *(_DWORD *)(v4 + 24) = 0;
          *(_DWORD *)(v4 + 28) = 0;
          *(_BYTE *)(v4 + 32) = 1;
          *(_DWORD *)(v4 + 40) = -1;
          *(_WORD *)(v4 + 52) = 0;
          *(_DWORD *)(v4 + 48) = 0;
          v10 = *(_BYTE *)(v4 + 12);
          *(_DWORD *)(v4 + 44) = 0;
          *(_DWORD *)v4 = &off_669850;
          v11 = v10 & 0x8B | 4;
          *(_BYTE *)(v4 + 12) = v11;
          *(_DWORD *)(v4 + 16) = v9;
          if ( v9 )
          {
            CEntity::RegisterReference(v9, (CEntity **)(v4 + 16));
            v11 = *(_BYTE *)(v4 + 12);
          }
          v12 = CTimer::m_snTimeInMilliseconds;
          *(_BYTE *)(v4 + 12) = v11 & 0xF7;
          *(_DWORD *)(v4 + 36) = v12;
        }
      }
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4ea6c8
// Original: _ZNK27CTaskComplexKillPedFromBoat5CloneEv
// Demangled: CTaskComplexKillPedFromBoat::Clone(void)
CEntity **__fastcall CTaskComplexKillPedFromBoat::Clone(CTaskComplexKillPedFromBoat *this, unsigned int a2)
{
  CEntity **v3; // r4
  CEntity *v4; // r5

  v3 = (CEntity **)CTask::operator new((CTask *)&word_10, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *v3 = (CEntity *)&off_669B10;
  v3[3] = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, v3 + 3);
  return v3;
}


// ============================================================

// Address: 0x4ea700
// Original: _ZNK27CTaskComplexKillPedFromBoat11GetTaskTypeEv
// Demangled: CTaskComplexKillPedFromBoat::GetTaskType(void)
int __fastcall CTaskComplexKillPedFromBoat::GetTaskType(CTaskComplexKillPedFromBoat *this)
{
  return 1032;
}


// ============================================================
