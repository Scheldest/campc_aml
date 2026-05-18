
// Address: 0x18a4c0
// Original: j__ZN6CDummynwEj
// Demangled: CDummy::operator new(uint)
// attributes: thunk
int __fastcall CDummy::operator new(CDummy *this, unsigned int a2)
{
  return _ZN6CDummynwEj(this, a2);
}


// ============================================================

// Address: 0x18c6b8
// Original: j__ZN6CDummydlEPv
// Demangled: CDummy::operator delete(void *)
// attributes: thunk
void __fastcall CDummy::operator delete(void *a1)
{
  _ZN6CDummydlEPv(a1);
}


// ============================================================

// Address: 0x191b90
// Original: j__ZN6CDummyC2Ev
// Demangled: CDummy::CDummy(void)
// attributes: thunk
void __fastcall CDummy::CDummy(CDummy *this)
{
  _ZN6CDummyC2Ev(this);
}


// ============================================================

// Address: 0x19bbf0
// Original: j__ZN6CDummyD2Ev
// Demangled: CDummy::~CDummy()
// attributes: thunk
void __fastcall CDummy::~CDummy(CDummy *this)
{
  _ZN6CDummyD2Ev(this);
}


// ============================================================

// Address: 0x3ead84
// Original: _ZN6CDummyC2Ev
// Demangled: CDummy::CDummy(void)
void __fastcall CDummy::CDummy(CDummy *this)
{
  int v1; // r0

  CEntity::CEntity(this);
  *(_BYTE *)(v1 + 58) = *(_BYTE *)(v1 + 58) & 0xF8 | 5;
  *(_DWORD *)v1 = &off_667BE4;
}


// ============================================================

// Address: 0x3eadac
// Original: _ZN6CDummyD2Ev
// Demangled: CDummy::~CDummy()
// attributes: thunk
void __fastcall CDummy::~CDummy(CDummy *this)
{
  sub_19CC14(this);
}


// ============================================================

// Address: 0x3eadb0
// Original: _ZN6CDummyD0Ev
// Demangled: CDummy::~CDummy()
void __fastcall CDummy::~CDummy(CDummy *this)
{
  int v1; // r1
  int v2; // r0
  int v3; // r0

  CEntity::~CEntity(this);
  v1 = CPools::ms_pDummyPool;
  v3 = -286331153 * ((v2 - *(_DWORD *)CPools::ms_pDummyPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pDummyPool + 4) + v3) |= 0x80u;
  if ( v3 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v3;
}


// ============================================================

// Address: 0x3eade8
// Original: _ZN6CDummydlEPv
// Demangled: CDummy::operator delete(void *)
void __fastcall CDummy::operator delete(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pDummyPool;
  v2 = -286331153 * ((a1 - *(_DWORD *)CPools::ms_pDummyPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pDummyPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x3eae18
// Original: _ZN6CDummynwEj
// Demangled: CDummy::operator new(uint)
int __fastcall CDummy::operator new(CDummy *this, unsigned int a2)
{
  int v2; // lr
  _DWORD *v3; // r1
  int result; // r0
  int v5; // r12
  int v6; // r2
  int v7; // r3

  v2 = 0;
  v3 = (_DWORD *)CPools::ms_pDummyPool;
  result = *(_DWORD *)(CPools::ms_pDummyPool + 12);
  v5 = *(_DWORD *)(CPools::ms_pDummyPool + 8);
  do
  {
    v3[3] = ++result;
    if ( result == v5 )
    {
      result = 0;
      v3[3] = 0;
      if ( v2 << 31 )
        return result;
      v2 = 1;
    }
    v6 = v3[1];
    v7 = *(char *)(v6 + result);
  }
  while ( v7 > -1 );
  *(_BYTE *)(v6 + result) = v7 & 0x7F;
  *(_BYTE *)(v3[1] + v3[3]) = (*(_BYTE *)(v3[1] + v3[3]) + 1) & 0x7F | *(_BYTE *)(v3[1] + v3[3]) & 0x80;
  return *v3 + 60 * v3[3];
}


// ============================================================
