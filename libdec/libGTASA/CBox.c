
// Address: 0x190000
// Original: j__ZN4CBox3SetERK7CVectorS2_
// Demangled: CBox::Set(CVector const&,CVector const&)
// attributes: thunk
int __fastcall CBox::Set(CBox *this, const CVector *a2, const CVector *a3)
{
  return _ZN4CBox3SetERK7CVectorS2_(this, a2, a3);
}


// ============================================================

// Address: 0x1a0298
// Original: j__ZN4CBox6RecalcEv
// Demangled: CBox::Recalc(void)
// attributes: thunk
int __fastcall CBox::Recalc(CBox *this)
{
  return _ZN4CBox6RecalcEv(this);
}


// ============================================================

// Address: 0x2d95c8
// Original: _ZN4CBox3SetERK7CVectorS2_
// Demangled: CBox::Set(CVector const&,CVector const&)
int __fastcall CBox::Set(int result, __int64 *a2, __int64 *a3)
{
  __int64 v3; // d16
  __int64 v4; // d16

  v3 = *a2;
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)result = v3;
  v4 = *a3;
  *(_DWORD *)(result + 20) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(result + 12) = v4;
  return result;
}


// ============================================================

// Address: 0x2d95e2
// Original: _ZN4CBox6RecalcEv
// Demangled: CBox::Recalc(void)
int __fastcall CBox::Recalc(int this)
{
  float v1; // s2
  float v2; // s0
  float v3; // s2
  float v4; // s0
  float v5; // s2

  v1 = *(float *)(this + 12);
  if ( *(float *)this > v1 )
  {
    *(_DWORD *)(this + 12) = *(_DWORD *)this;
    *(float *)this = v1;
  }
  v2 = *(float *)(this + 4);
  v3 = *(float *)(this + 16);
  if ( v2 > v3 )
  {
    *(float *)(this + 16) = v2;
    *(float *)(this + 4) = v3;
  }
  v4 = *(float *)(this + 8);
  v5 = *(float *)(this + 20);
  if ( v4 > v5 )
  {
    *(float *)(this + 20) = v4;
    *(float *)(this + 8) = v5;
  }
  return this;
}


// ============================================================
