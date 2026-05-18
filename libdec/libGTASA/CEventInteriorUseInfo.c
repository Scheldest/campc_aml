
// Address: 0x376e36
// Original: _ZNK21CEventInteriorUseInfo7IsValidEP4CPed
// Demangled: CEventInteriorUseInfo::IsValid(CPed *)
int __fastcall CEventInteriorUseInfo::IsValid(CEventInteriorUseInfo *this, CPed *a2)
{
  __int64 v3; // kr00_8

  if ( a2 )
    return sub_196874(a2);
  if ( *((_BYTE *)this + 8) )
    return 1;
  v3 = *(_QWORD *)this;
  return SHIDWORD(v3) <= (*(int (__fastcall **)(CEventInteriorUseInfo *))(*(_DWORD *)this + 16))(this);
}


// ============================================================

// Address: 0x378ad4
// Original: _ZN21CEventInteriorUseInfoD0Ev
// Demangled: CEventInteriorUseInfo::~CEventInteriorUseInfo()
void __fastcall CEventInteriorUseInfo::~CEventInteriorUseInfo(CEventInteriorUseInfo *this)
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

// Address: 0x378b04
// Original: _ZNK21CEventInteriorUseInfo12GetEventTypeEv
// Demangled: CEventInteriorUseInfo::GetEventType(void)
int __fastcall CEventInteriorUseInfo::GetEventType(CEventInteriorUseInfo *this)
{
  return 81;
}


// ============================================================

// Address: 0x378b08
// Original: _ZNK21CEventInteriorUseInfo16GetEventPriorityEv
// Demangled: CEventInteriorUseInfo::GetEventPriority(void)
int __fastcall CEventInteriorUseInfo::GetEventPriority(CEventInteriorUseInfo *this)
{
  return 9;
}


// ============================================================

// Address: 0x378b0c
// Original: _ZNK21CEventInteriorUseInfo11GetLifeTimeEv
// Demangled: CEventInteriorUseInfo::GetLifeTime(void)
int __fastcall CEventInteriorUseInfo::GetLifeTime(CEventInteriorUseInfo *this)
{
  return 0;
}


// ============================================================

// Address: 0x378b10
// Original: _ZNK21CEventInteriorUseInfo5CloneEv
// Demangled: CEventInteriorUseInfo::Clone(void)
int __fastcall CEventInteriorUseInfo::Clone(CEventInteriorUseInfo *this)
{
  int v1; // lr
  _DWORD *v2; // r2
  int v3; // r1
  int v4; // r12
  int v5; // r3
  int v6; // r4
  __int64 v7; // kr08_8
  int v8; // r2
  char v9; // r5

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
  v7 = *(_QWORD *)((char *)this + 12);
  v8 = *((_DWORD *)this + 5);
  v9 = *((_BYTE *)this + 24);
  *(_BYTE *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 12) = v7;
  *(_DWORD *)(v3 + 20) = v8;
  *(_BYTE *)(v3 + 24) = v9;
  *(_DWORD *)v3 = &off_666FDC;
  *(_DWORD *)(v3 + 4) = 0;
  return v3;
}


// ============================================================

// Address: 0x378ba0
// Original: _ZNK21CEventInteriorUseInfo10AffectsPedEP4CPed
// Demangled: CEventInteriorUseInfo::AffectsPed(CPed *)
int __fastcall CEventInteriorUseInfo::AffectsPed(CEventInteriorUseInfo *this, CPed *a2)
{
  return 1;
}


// ============================================================
