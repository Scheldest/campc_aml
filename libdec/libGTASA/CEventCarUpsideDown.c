
// Address: 0x1914c0
// Original: j__ZN19CEventCarUpsideDownD2Ev
// Demangled: CEventCarUpsideDown::~CEventCarUpsideDown()
// attributes: thunk
void __fastcall CEventCarUpsideDown::~CEventCarUpsideDown(CEventCarUpsideDown *this)
{
  _ZN19CEventCarUpsideDownD2Ev(this);
}


// ============================================================

// Address: 0x199604
// Original: j__ZN19CEventCarUpsideDownC2EP8CVehicle
// Demangled: CEventCarUpsideDown::CEventCarUpsideDown(CVehicle *)
// attributes: thunk
void __fastcall CEventCarUpsideDown::CEventCarUpsideDown(CEventCarUpsideDown *this, CVehicle *a2)
{
  _ZN19CEventCarUpsideDownC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x3772f0
// Original: _ZN19CEventCarUpsideDownC2EP8CVehicle
// Demangled: CEventCarUpsideDown::CEventCarUpsideDown(CVehicle *)
void __fastcall CEventCarUpsideDown::CEventCarUpsideDown(CEventCarUpsideDown *this, CVehicle *a2)
{
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_666A00;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x377324
// Original: _ZN19CEventCarUpsideDownD2Ev
// Demangled: CEventCarUpsideDown::~CEventCarUpsideDown()
void __fastcall CEventCarUpsideDown::~CEventCarUpsideDown(CEventCarUpsideDown *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666A00;
  if ( v2 )
    CEntity::RegisterReference(v2, v3);
}


// ============================================================

// Address: 0x37734c
// Original: _ZN19CEventCarUpsideDownD0Ev
// Demangled: CEventCarUpsideDown::~CEventCarUpsideDown()
void __fastcall CEventCarUpsideDown::~CEventCarUpsideDown(CEventCarUpsideDown *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666A00;
  if ( v2 )
    CEntity::RegisterReference(v2, v3);
  v4 = CPools::ms_pEventPool;
  v5 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v5) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x3773a0
// Original: _ZNK19CEventCarUpsideDown10AffectsPedEP4CPed
// Demangled: CEventCarUpsideDown::AffectsPed(CPed *)
int __fastcall CEventCarUpsideDown::AffectsPed(CEventCarUpsideDown *this, CPed *a2)
{
  int v3; // r0
  bool v4; // zf
  bool v5; // zf

  if ( !CPed::IsPlayer(a2) && !(~*((_DWORD *)a2 + 289) & 0x100 | ~*((_DWORD *)a2 + 292) & 0x20000) )
  {
    v3 = *((_DWORD *)a2 + 356);
    if ( *((_BYTE *)a2 + 1096) == 2 )
    {
      v4 = v3 == 0;
      if ( v3 )
      {
        v3 = *(_DWORD *)(v3 + 1440);
        v4 = v3 == 5;
      }
      if ( v4 )
        return 0;
    }
    else
    {
      v3 = *(_DWORD *)(v3 + 1440);
    }
    v5 = v3 == 2;
    if ( v3 != 2 )
      v5 = v3 == 9;
    if ( !v5 )
      return sub_196874(a2);
  }
  return 0;
}


// ============================================================

// Address: 0x37ac90
// Original: _ZNK19CEventCarUpsideDown12GetEventTypeEv
// Demangled: CEventCarUpsideDown::GetEventType(void)
int __fastcall CEventCarUpsideDown::GetEventType(CEventCarUpsideDown *this)
{
  return 45;
}


// ============================================================

// Address: 0x37ac94
// Original: _ZNK19CEventCarUpsideDown16GetEventPriorityEv
// Demangled: CEventCarUpsideDown::GetEventPriority(void)
int __fastcall CEventCarUpsideDown::GetEventPriority(CEventCarUpsideDown *this)
{
  return 18;
}


// ============================================================

// Address: 0x37ac98
// Original: _ZNK19CEventCarUpsideDown11GetLifeTimeEv
// Demangled: CEventCarUpsideDown::GetLifeTime(void)
int __fastcall CEventCarUpsideDown::GetLifeTime(CEventCarUpsideDown *this)
{
  return 0;
}


// ============================================================

// Address: 0x37ac9c
// Original: _ZNK19CEventCarUpsideDown5CloneEv
// Demangled: CEventCarUpsideDown::Clone(void)
int __fastcall CEventCarUpsideDown::Clone(CEventCarUpsideDown *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  CEntity *v7; // r0

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
  v7 = (CEntity *)*((_DWORD *)this + 3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)v3 = &off_666A00;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================
