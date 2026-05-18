
// Address: 0x198470
// Original: j__ZN29CEventPotentialWalkIntoObjectD2Ev
// Demangled: CEventPotentialWalkIntoObject::~CEventPotentialWalkIntoObject()
// attributes: thunk
void __fastcall CEventPotentialWalkIntoObject::~CEventPotentialWalkIntoObject(CEventPotentialWalkIntoObject *this)
{
  _ZN29CEventPotentialWalkIntoObjectD2Ev(this);
}


// ============================================================

// Address: 0x1a072c
// Original: j__ZN29CEventPotentialWalkIntoObjectC2EP7CObjecti
// Demangled: CEventPotentialWalkIntoObject::CEventPotentialWalkIntoObject(CObject *,int)
// attributes: thunk
void __fastcall CEventPotentialWalkIntoObject::CEventPotentialWalkIntoObject(
        CEventPotentialWalkIntoObject *this,
        CObject *a2,
        int a3)
{
  _ZN29CEventPotentialWalkIntoObjectC2EP7CObjecti(this, a2, a3);
}


// ============================================================

// Address: 0x374104
// Original: _ZN29CEventPotentialWalkIntoObjectC2EP7CObjecti
// Demangled: CEventPotentialWalkIntoObject::CEventPotentialWalkIntoObject(CObject *,int)
void __fastcall CEventPotentialWalkIntoObject::CEventPotentialWalkIntoObject(
        CEventPotentialWalkIntoObject *this,
        CObject *a2,
        int a3)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *((_DWORD *)this + 5) = a3;
  *(_DWORD *)this = &off_6661C8;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x374148
// Original: _ZN29CEventPotentialWalkIntoObjectD2Ev
// Demangled: CEventPotentialWalkIntoObject::~CEventPotentialWalkIntoObject()
void __fastcall CEventPotentialWalkIntoObject::~CEventPotentialWalkIntoObject(CEventPotentialWalkIntoObject *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6661C8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x374170
// Original: _ZN29CEventPotentialWalkIntoObjectD0Ev
// Demangled: CEventPotentialWalkIntoObject::~CEventPotentialWalkIntoObject()
void __fastcall CEventPotentialWalkIntoObject::~CEventPotentialWalkIntoObject(CEventPotentialWalkIntoObject *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6661C8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pEventPool;
  v5 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v5) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x3741c4
// Original: _ZNK29CEventPotentialWalkIntoObject10AffectsPedEP4CPed
// Demangled: CEventPotentialWalkIntoObject::AffectsPed(CPed *)
bool __fastcall CEventPotentialWalkIntoObject::AffectsPed(CEventPotentialWalkIntoObject *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  float *v7; // r0
  int ActiveTask; // r0
  _DWORD *v9; // r5

  if ( CPed::IsPlayer(a2) || CPed::IsAlive(a2) != 1 )
    return 0;
  v4 = *((_DWORD *)this + 4);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *((_DWORD *)this + 5) == 1;
  if ( v5 )
    return 0;
  if ( *((_DWORD *)a2 + 64) )
    return 0;
  if ( *(CPed **)(v4 + 256) == a2 )
    return 0;
  if ( (*(_BYTE *)(v4 + 68) & 0x20) != 0 )
    return 0;
  v7 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)]) + 44);
  if ( (float)(v7[3] - *v7) < 0.01 || (float)(v7[4] - v7[1]) < 0.01 || (float)(v7[5] - v7[2]) < 0.01 )
    return 0;
  ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  v9 = (_DWORD *)ActiveTask;
  return !ActiveTask
      || ((*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) != 939 || v9[3] != *((_DWORD *)this + 4))
      && ((*(int (__fastcall **)(_DWORD *))(*v9 + 20))(v9) != 510 || v9[7] != *((_DWORD *)this + 4));
}


// ============================================================

// Address: 0x3742a4
// Original: _ZNK29CEventPotentialWalkIntoObject17TakesPriorityOverERK6CEvent
// Demangled: CEventPotentialWalkIntoObject::TakesPriorityOver(CEvent const&)
int __fastcall CEventPotentialWalkIntoObject::TakesPriorityOver(CEventPotentialWalkIntoObject *this, const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x379c9c
// Original: _ZNK29CEventPotentialWalkIntoObject12GetEventTypeEv
// Demangled: CEventPotentialWalkIntoObject::GetEventType(void)
int __fastcall CEventPotentialWalkIntoObject::GetEventType(CEventPotentialWalkIntoObject *this)
{
  return 44;
}


// ============================================================

// Address: 0x379ca0
// Original: _ZNK29CEventPotentialWalkIntoObject16GetEventPriorityEv
// Demangled: CEventPotentialWalkIntoObject::GetEventPriority(void)
int __fastcall CEventPotentialWalkIntoObject::GetEventPriority(CEventPotentialWalkIntoObject *this)
{
  return 27;
}


// ============================================================

// Address: 0x379ca4
// Original: _ZNK29CEventPotentialWalkIntoObject11GetLifeTimeEv
// Demangled: CEventPotentialWalkIntoObject::GetLifeTime(void)
int __fastcall CEventPotentialWalkIntoObject::GetLifeTime(CEventPotentialWalkIntoObject *this)
{
  return 0;
}


// ============================================================

// Address: 0x379ca8
// Original: _ZNK29CEventPotentialWalkIntoObject13CloneEditableEv
// Demangled: CEventPotentialWalkIntoObject::CloneEditable(void)
int __fastcall CEventPotentialWalkIntoObject::CloneEditable(CEventPotentialWalkIntoObject *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  __int64 v7; // kr08_8

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v3;
    if ( v3 == v4 )
    {
      v3 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v3);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v3) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v3 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = *((_QWORD *)this + 2);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)(v3 + 20) = HIDWORD(v7);
  *(_DWORD *)v3 = &off_6661C8;
  *(_DWORD *)(v3 + 16) = v7;
  if ( (_DWORD)v7 )
    CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================
