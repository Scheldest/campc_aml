
// Address: 0x19a85c
// Original: j__ZN11CProjectileC2Ei
// Demangled: CProjectile::CProjectile(int)
// attributes: thunk
void __fastcall CProjectile::CProjectile(CProjectile *this, int a2)
{
  _ZN11CProjectileC2Ei(this, a2);
}


// ============================================================

// Address: 0x457268
// Original: _ZN11CProjectileC2Ei
// Demangled: CProjectile::CProjectile(int)
void __fastcall CProjectile::CProjectile(CProjectile *this, int a2)
{
  int v4; // r3
  int v5; // r0

  CObject::CObject(this);
  *((_DWORD *)this + 36) = 1065353216;
  *((_DWORD *)this + 37) = 1065353216;
  v4 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 39) = 1065353048;
  *((_DWORD *)this + 40) = 1061158912;
  *((_DWORD *)this + 41) = 978433816;
  *((_DWORD *)this + 7) = v4 | 0x80000000;
  *(_DWORD *)this = &off_667F10;
  CObject::SetIsStatic(this, 0);
  v5 = *(_DWORD *)this;
  *((_DWORD *)this + 17) |= 0x800000u;
  (*(void (__fastcall **)(CProjectile *, int))(v5 + 24))(this, a2);
  *((_BYTE *)this + 320) = 5;
}


// ============================================================

// Address: 0x4572d8
// Original: _ZN11CProjectileD2Ev
// Demangled: CProjectile::~CProjectile()
// attributes: thunk
void __fastcall CProjectile::~CProjectile(CProjectile *this)
{
  j_CObject::~CObject(this);
}


// ============================================================

// Address: 0x4572dc
// Original: _ZN11CProjectileD0Ev
// Demangled: CProjectile::~CProjectile()
void __fastcall CProjectile::~CProjectile(CProjectile *this)
{
  void *v1; // r0

  CObject::~CObject(this);
  j_CObject::operator delete(v1);
}


// ============================================================
