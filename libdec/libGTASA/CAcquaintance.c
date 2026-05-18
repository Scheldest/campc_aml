
// Address: 0x18ccb8
// Original: j__ZN13CAcquaintance16SetAcquaintancesEij
// Demangled: CAcquaintance::SetAcquaintances(int,uint)
// attributes: thunk
int __fastcall CAcquaintance::SetAcquaintances(CAcquaintance *this, int a2, unsigned int a3)
{
  return _ZN13CAcquaintance16SetAcquaintancesEij(this, a2, a3);
}


// ============================================================

// Address: 0x1944c4
// Original: j__ZNK13CAcquaintance16GetAcquaintancesEi
// Demangled: CAcquaintance::GetAcquaintances(int)
// attributes: thunk
int __fastcall CAcquaintance::GetAcquaintances(CAcquaintance *this, int a2)
{
  return _ZNK13CAcquaintance16GetAcquaintancesEi(this, a2);
}


// ============================================================

// Address: 0x194ed0
// Original: j__ZN13CAcquaintance19ClearAsAcquaintanceEij
// Demangled: CAcquaintance::ClearAsAcquaintance(int,uint)
// attributes: thunk
int __fastcall CAcquaintance::ClearAsAcquaintance(CAcquaintance *this, int a2, unsigned int a3)
{
  return _ZN13CAcquaintance19ClearAsAcquaintanceEij(this, a2, a3);
}


// ============================================================

// Address: 0x19a460
// Original: j__ZN13CAcquaintance18ClearAcquaintancesEi
// Demangled: CAcquaintance::ClearAcquaintances(int)
// attributes: thunk
int __fastcall CAcquaintance::ClearAcquaintances(CAcquaintance *this, int a2)
{
  return _ZN13CAcquaintance18ClearAcquaintancesEi(this, a2);
}


// ============================================================

// Address: 0x1a10a8
// Original: j__ZN13CAcquaintance17SetAsAcquaintanceEij
// Demangled: CAcquaintance::SetAsAcquaintance(int,uint)
// attributes: thunk
int __fastcall CAcquaintance::SetAsAcquaintance(CAcquaintance *this, int a2, unsigned int a3)
{
  return _ZN13CAcquaintance17SetAsAcquaintanceEij(this, a2, a3);
}


// ============================================================

// Address: 0x4c3338
// Original: _ZN13CAcquaintance16SetAcquaintancesEij
// Demangled: CAcquaintance::SetAcquaintances(int,uint)
int __fastcall CAcquaintance::SetAcquaintances(int this, int a2, unsigned int a3)
{
  *(_DWORD *)(this + 4 * a2) = a3;
  return this;
}


// ============================================================

// Address: 0x4c3458
// Original: _ZNK13CAcquaintance16GetAcquaintancesEi
// Demangled: CAcquaintance::GetAcquaintances(int)
int __fastcall CAcquaintance::GetAcquaintances(CAcquaintance *this, int a2)
{
  return *((_DWORD *)this + a2);
}


// ============================================================

// Address: 0x4c345e
// Original: _ZN13CAcquaintance17SetAsAcquaintanceEij
// Demangled: CAcquaintance::SetAsAcquaintance(int,uint)
_DWORD *__fastcall CAcquaintance::SetAsAcquaintance(_DWORD *this, int a2, unsigned int a3)
{
  int v3; // r3
  unsigned int v4; // r12
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r1

  v3 = this[a2];
  if ( (v3 & a3) == 0 )
  {
    v4 = ~a3;
    this[a2] = v3 | a3;
    if ( a2 )
    {
      if ( (*this & a3) != 0 )
        *this &= v4;
      if ( a2 == 1 )
        goto LABEL_11;
    }
    v5 = this[1];
    if ( (v5 & a3) != 0 )
      this[1] = v5 & v4;
    if ( a2 != 2 )
    {
LABEL_11:
      v6 = this[2];
      if ( (v6 & a3) != 0 )
        this[2] = v6 & v4;
      if ( a2 == 3 )
        goto LABEL_15;
    }
    v7 = this[3];
    if ( (v7 & a3) != 0 )
      this[3] = v7 & v4;
    if ( a2 != 4 )
    {
LABEL_15:
      v8 = this[4];
      if ( (v8 & a3) != 0 )
        this[4] = v8 & v4;
    }
  }
  return this;
}


// ============================================================

// Address: 0x4c34c6
// Original: _ZN13CAcquaintance19ClearAsAcquaintanceEij
// Demangled: CAcquaintance::ClearAsAcquaintance(int,uint)
int __fastcall CAcquaintance::ClearAsAcquaintance(int this, int a2, unsigned int a3)
{
  int v3; // r3

  v3 = *(_DWORD *)(this + 4 * a2);
  if ( (v3 & a3) != 0 )
    *(_DWORD *)(this + 4 * a2) = v3 & ~a3;
  return this;
}


// ============================================================

// Address: 0x4c34d8
// Original: _ZN13CAcquaintance18ClearAcquaintancesEi
// Demangled: CAcquaintance::ClearAcquaintances(int)
int __fastcall CAcquaintance::ClearAcquaintances(int this, int a2)
{
  *(_DWORD *)(this + 4 * a2) = 0;
  return this;
}


// ============================================================
