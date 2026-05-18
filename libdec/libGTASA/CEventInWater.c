
// Address: 0x1a0f70
// Original: j__ZN13CEventInWaterC2Ef
// Demangled: CEventInWater::CEventInWater(float)
// attributes: thunk
void __fastcall CEventInWater::CEventInWater(CEventInWater *this, float a2)
{
  _ZN13CEventInWaterC2Ef(this, a2);
}


// ============================================================

// Address: 0x376c18
// Original: _ZN13CEventInWaterC2Ef
// Demangled: CEventInWater::CEventInWater(float)
void __fastcall CEventInWater::CEventInWater(CEventInWater *this, float a2)
{
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((float *)this + 3) = a2;
  *(_DWORD *)this = &off_66682C;
}


// ============================================================

// Address: 0x376c34
// Original: _ZN13CEventInWaterD0Ev
// Demangled: CEventInWater::~CEventInWater()
void __fastcall CEventInWater::~CEventInWater(CEventInWater *this)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pEventPool;
  v2 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x376c64
// Original: _ZNK13CEventInWater10AffectsPedEP4CPed
// Demangled: CEventInWater::AffectsPed(CPed *)
int __fastcall CEventInWater::AffectsPed(CEventInWater *this, CPed *a2)
{
  int ActiveTask; // r5
  int IsPlayer; // r0

  ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  IsPlayer = CPed::IsPlayer(a2);
  if ( ActiveTask && !IsPlayer && (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 268 )
    return 0;
  else
    return sub_196874(a2);
}


// ============================================================

// Address: 0x376c9c
// Original: _ZNK13CEventInWater17TakesPriorityOverERK6CEvent
// Demangled: CEventInWater::TakesPriorityOver(CEvent const&)
bool __fastcall CEventInWater::TakesPriorityOver(CEventInWater *this, const CEvent *a2)
{
  int v5; // r5

  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 8
    || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 9
    || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 93 && *((float *)this + 3) > 1.0 )
  {
    return 1;
  }
  v5 = (*(int (__fastcall **)(CEventInWater *))(*(_DWORD *)this + 12))(this);
  return v5 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
}


// ============================================================

// Address: 0x37a978
// Original: _ZNK13CEventInWater12GetEventTypeEv
// Demangled: CEventInWater::GetEventType(void)
int __fastcall CEventInWater::GetEventType(CEventInWater *this)
{
  return 66;
}


// ============================================================

// Address: 0x37a97c
// Original: _ZNK13CEventInWater16GetEventPriorityEv
// Demangled: CEventInWater::GetEventPriority(void)
int __fastcall CEventInWater::GetEventPriority(CEventInWater *this)
{
  return 62;
}


// ============================================================

// Address: 0x37a980
// Original: _ZNK13CEventInWater11GetLifeTimeEv
// Demangled: CEventInWater::GetLifeTime(void)
int __fastcall CEventInWater::GetLifeTime(CEventInWater *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a984
// Original: _ZNK13CEventInWater5CloneEv
// Demangled: CEventInWater::Clone(void)
int __fastcall CEventInWater::Clone(CEventInWater *this)
{
  int v1; // lr
  _DWORD *v2; // r2
  int v3; // r1
  int v4; // r12
  int v5; // r3
  int v6; // r4
  int v7; // r0

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
  v7 = *((_DWORD *)this + 3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  *(_DWORD *)v3 = &off_66682C;
  *(_DWORD *)(v3 + 4) = 0;
  return v3;
}


// ============================================================
