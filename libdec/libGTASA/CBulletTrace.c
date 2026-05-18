
// Address: 0x5c22ac
// Original: _ZN12CBulletTrace6UpdateEv
// Demangled: CBulletTrace::Update(void)
int __fastcall CBulletTrace::Update(int this)
{
  if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - *(_DWORD *)(this + 28)) >= *(_DWORD *)(this + 32) )
    *(_BYTE *)(this + 24) = 0;
  return this;
}


// ============================================================
