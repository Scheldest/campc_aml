
// Address: 0x190dc0
// Original: j__ZN12CDummyObjectC2Ev
// Demangled: CDummyObject::CDummyObject(void)
// attributes: thunk
void __fastcall CDummyObject::CDummyObject(CDummyObject *this)
{
  _ZN12CDummyObjectC2Ev(this);
}


// ============================================================

// Address: 0x198300
// Original: j__ZN12CDummyObject12CreateObjectEv
// Demangled: CDummyObject::CreateObject(void)
// attributes: thunk
int __fastcall CDummyObject::CreateObject(CDummyObject *this)
{
  return _ZN12CDummyObject12CreateObjectEv(this);
}


// ============================================================

// Address: 0x19e924
// Original: j__ZN12CDummyObject16UpdateFromObjectEP7CObject
// Demangled: CDummyObject::UpdateFromObject(CObject *)
// attributes: thunk
int __fastcall CDummyObject::UpdateFromObject(CDummyObject *this, CObject *a2)
{
  return _ZN12CDummyObject16UpdateFromObjectEP7CObject(this, a2);
}


// ============================================================

// Address: 0x45278c
// Original: _ZN12CDummyObjectC2Ev
// Demangled: CDummyObject::CDummyObject(void)
void __fastcall CDummyObject::CDummyObject(CDummyObject *this)
{
  _DWORD *v1; // r0

  CDummy::CDummy(this);
  *v1 = &off_667DDC;
}


// ============================================================

// Address: 0x4527a4
// Original: _ZN12CDummyObjectC2EP7CObject
// Demangled: CDummyObject::CDummyObject(CObject *)
void __fastcall CDummyObject::CDummyObject(CDummyObject *this, CObject *a2)
{
  CIplStore *v4; // r0
  CEntity *v5; // r2

  CDummy::CDummy(this);
  *(_DWORD *)this = &off_667DDC;
  CEntity::SetModelIndexNoCreate(this, *((__int16 *)a2 + 19));
  if ( *((_DWORD *)a2 + 6) )
    CEntity::AttachToRwObject();
  CEntity::DetachFromRwObject(a2);
  v4 = (CIplStore *)*((unsigned __int16 *)a2 + 28);
  *((_WORD *)this + 28) = (_WORD)v4;
  *((_BYTE *)this + 51) = *((_BYTE *)a2 + 51);
  CIplStore::IncludeEntity(v4, (int)this, v5);
}


// ============================================================

// Address: 0x4527f8
// Original: _ZN12CDummyObjectD2Ev
// Demangled: CDummyObject::~CDummyObject()
// attributes: thunk
void __fastcall CDummyObject::~CDummyObject(CDummyObject *this)
{
  sub_19BBEC(this);
}


// ============================================================

// Address: 0x4527fc
// Original: _ZN12CDummyObjectD0Ev
// Demangled: CDummyObject::~CDummyObject()
void __fastcall CDummyObject::~CDummyObject(CDummyObject *this)
{
  void *v1; // r0

  CDummy::~CDummy(this);
  sub_18C6B4(v1);
}


// ============================================================

// Address: 0x45280c
// Original: _ZN12CDummyObject12CreateObjectEv
// Demangled: CDummyObject::CreateObject(void)
int __fastcall CDummyObject::CreateObject(CDummyObject *this, CDummyObject *a2)
{
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r8

  v3 = (_DWORD *)((char *)this + 28);
  *((_DWORD *)this + 7) |= 0x2000u;
  v4 = CObject::Create(this, a2);
  v5 = 0;
  *v3 &= ~0x2000u;
  if ( v4 )
  {
    CScriptsForBrains::CheckIfNewEntityNeedsScript();
    *v3 &= 0xFFFFFF7E;
    *(_DWORD *)(v4 + 52) = *((_DWORD *)this + 13);
    *((_DWORD *)this + 13) = 0;
    return v4;
  }
  return v5;
}


// ============================================================

// Address: 0x452868
// Original: _ZN12CDummyObject16UpdateFromObjectEP7CObject
// Demangled: CDummyObject::UpdateFromObject(CObject *)
int __fastcall CDummyObject::UpdateFromObject(CDummyObject *this, CObject *a2)
{
  char *v4; // r6
  _DWORD *v5; // r4
  __int64 v6; // kr00_8
  unsigned int v7; // r1
  unsigned int v8; // r1
  int result; // r0

  v4 = (char *)this + 28;
  *((_DWORD *)this + 7) |= 0x81u;
  v5 = (_DWORD *)((char *)a2 + 28);
  *((_DWORD *)a2 + 7) |= 0x2000u;
  CEntity::AttachToRwObject();
  *v5 &= ~0x2000u;
  if ( *((_DWORD *)this + 6) )
  {
    if ( *((_DWORD *)this + 5) )
      CMatrix::UpdateRwMatrix();
    else
      CSimpleTransform::UpdateRwMatrix();
  }
  CEntity::DetachFromRwObject(a2);
  if ( *((_WORD *)a2 + 28) && *(_BYTE *)(52 * *((__int16 *)a2 + 28) + *(_DWORD *)CIplStore::ms_pPool + 47) )
  {
    v6 = *(_QWORD *)v4;
    v7 = *(_DWORD *)v4 & 0xFFFFFDFF | (((*v5 >> 9) & 1) << 9);
    *(_DWORD *)v4 = v7;
    *((_DWORD *)v4 + 1) = HIDWORD(v6);
    v8 = v7 & 0xFFFFFF7F | (((*v5 >> 7) & 1) << 7);
    *(_DWORD *)v4 = v8;
    *((_DWORD *)v4 + 1) = HIDWORD(v6);
    *(_DWORD *)v4 = v8 & 0xFFFFFFFE | *v5 & 1;
    *((_DWORD *)v4 + 1) = HIDWORD(v6);
  }
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  result = 0;
  *((_DWORD *)a2 + 13) = 0;
  return result;
}


// ============================================================
