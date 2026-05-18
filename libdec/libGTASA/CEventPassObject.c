
// Address: 0x376eba
// Original: _ZNK16CEventPassObject7IsValidEP4CPed
// Demangled: CEventPassObject::IsValid(CPed *)
int __fastcall CEventPassObject::IsValid(CEventPassObject *this, CPed *a2)
{
  __int64 v3; // kr00_8

  if ( a2 )
    return sub_196874(a2);
  if ( *((_BYTE *)this + 8) )
    return 1;
  v3 = *(_QWORD *)this;
  return SHIDWORD(v3) <= (*(int (__fastcall **)(CEventPassObject *))(*(_DWORD *)this + 16))(this);
}


// ============================================================

// Address: 0x378de0
// Original: _ZN16CEventPassObjectD2Ev
// Demangled: CEventPassObject::~CEventPassObject()
void __fastcall CEventPassObject::~CEventPassObject(CEventPassObject *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6670C0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x378e08
// Original: _ZN16CEventPassObjectD0Ev
// Demangled: CEventPassObject::~CEventPassObject()
void __fastcall CEventPassObject::~CEventPassObject(CEventPassObject *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6670C0;
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

// Address: 0x378e5c
// Original: _ZNK16CEventPassObject12GetEventTypeEv
// Demangled: CEventPassObject::GetEventType(void)
int __fastcall CEventPassObject::GetEventType(CEventPassObject *this)
{
  return 89;
}


// ============================================================

// Address: 0x378e60
// Original: _ZNK16CEventPassObject16GetEventPriorityEv
// Demangled: CEventPassObject::GetEventPriority(void)
int __fastcall CEventPassObject::GetEventPriority(CEventPassObject *this)
{
  return 11;
}


// ============================================================

// Address: 0x378e64
// Original: _ZNK16CEventPassObject11GetLifeTimeEv
// Demangled: CEventPassObject::GetLifeTime(void)
int __fastcall CEventPassObject::GetLifeTime(CEventPassObject *this)
{
  return 0;
}


// ============================================================

// Address: 0x378e68
// Original: _ZNK16CEventPassObject5CloneEv
// Demangled: CEventPassObject::Clone(void)
int __fastcall CEventPassObject::Clone(CEventPassObject *this)
{
  int v1; // r3
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r5
  int v6; // r2
  char v7; // r5
  CEntity *v8; // r0
  int result; // r0

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
  v7 = *((_BYTE *)this + 16);
  v8 = (CEntity *)*((_DWORD *)this + 3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)v3 = &off_6670C0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v8;
  if ( v8 )
    CEntity::RegisterReference(v8, (CEntity **)(v3 + 12));
  result = v3;
  *(_BYTE *)(v3 + 16) = v7;
  return result;
}


// ============================================================

// Address: 0x378ef0
// Original: _ZNK16CEventPassObject10AffectsPedEP4CPed
// Demangled: CEventPassObject::AffectsPed(CPed *)
int __fastcall CEventPassObject::AffectsPed(CEventPassObject *this, CPed *a2)
{
  return 1;
}


// ============================================================
