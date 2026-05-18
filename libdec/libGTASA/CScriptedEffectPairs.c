
// Address: 0x59c640
// Original: _ZN20CScriptedEffectPairs5FlushEv
// Demangled: CScriptedEffectPairs::Flush(void)
int __fastcall CScriptedEffectPairs::Flush(int this)
{
  *(_DWORD *)(this + 32) = -1;
  *(_DWORD *)(this + 20) = -1;
  *(_DWORD *)(this + 24) = -1;
  *(_DWORD *)(this + 12) = -1;
  *(_DWORD *)(this + 16) = -1;
  *(_DWORD *)(this + 4) = -1;
  *(_DWORD *)(this + 8) = -1;
  *(_BYTE *)(this + 36) = 0;
  *(_DWORD *)(this + 68) = -1;
  *(_DWORD *)(this + 40) = -1;
  *(_DWORD *)(this + 44) = -1;
  *(_DWORD *)(this + 48) = -1;
  *(_DWORD *)(this + 52) = -1;
  *(_DWORD *)(this + 56) = -1;
  *(_DWORD *)(this + 60) = -1;
  *(_BYTE *)(this + 72) = 0;
  *(_DWORD *)(this + 104) = -1;
  *(_BYTE *)(this + 108) = 0;
  *(_DWORD *)(this + 76) = -1;
  *(_DWORD *)(this + 80) = -1;
  *(_DWORD *)(this + 84) = -1;
  *(_DWORD *)(this + 88) = -1;
  *(_DWORD *)(this + 92) = -1;
  *(_DWORD *)(this + 96) = -1;
  *(_BYTE *)(this + 144) = 0;
  *(_DWORD *)(this + 140) = -1;
  *(_DWORD *)(this + 112) = -1;
  *(_DWORD *)(this + 116) = -1;
  *(_DWORD *)(this + 120) = -1;
  *(_DWORD *)(this + 124) = -1;
  *(_DWORD *)(this + 128) = -1;
  *(_DWORD *)(this + 132) = -1;
  *(_DWORD *)this = 0;
  return this;
}


// ============================================================

// Address: 0x59c6ca
// Original: _ZN20CScriptedEffectPairsC2Ev
// Demangled: CScriptedEffectPairs::CScriptedEffectPairs(void)
void __fastcall CScriptedEffectPairs::CScriptedEffectPairs(CScriptedEffectPairs *this)
{
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 3) = -1;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 1) = -1;
  *((_DWORD *)this + 2) = -1;
  *((_BYTE *)this + 36) = 0;
  *((_DWORD *)this + 17) = -1;
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 11) = -1;
  *((_DWORD *)this + 12) = -1;
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 14) = -1;
  *((_DWORD *)this + 15) = -1;
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 26) = -1;
  *((_BYTE *)this + 108) = 0;
  *((_DWORD *)this + 19) = -1;
  *((_DWORD *)this + 20) = -1;
  *((_DWORD *)this + 21) = -1;
  *((_DWORD *)this + 22) = -1;
  *((_DWORD *)this + 23) = -1;
  *((_DWORD *)this + 24) = -1;
  *((_BYTE *)this + 144) = 0;
  *((_DWORD *)this + 35) = -1;
  *((_DWORD *)this + 28) = -1;
  *((_DWORD *)this + 29) = -1;
  *((_DWORD *)this + 30) = -1;
  *((_DWORD *)this + 31) = -1;
  *((_DWORD *)this + 32) = -1;
  *((_DWORD *)this + 33) = -1;
  *(_DWORD *)this = 0;
}


// ============================================================

// Address: 0x59c71e
// Original: _ZN20CScriptedEffectPairsD2Ev
// Demangled: CScriptedEffectPairs::~CScriptedEffectPairs()
void __fastcall CScriptedEffectPairs::~CScriptedEffectPairs(CScriptedEffectPairs *this)
{
  ;
}


// ============================================================

// Address: 0x59c84c
// Original: _ZN20CScriptedEffectPairs7AddPairERK19CScriptedEffectPair
// Demangled: CScriptedEffectPairs::AddPair(CScriptedEffectPair const&)
int *__fastcall CScriptedEffectPairs::AddPair(int *this, const CScriptedEffectPair *a2)
{
  __int64 v2; // d16
  __int64 v3; // d17
  int *v4; // r2
  __int64 v5; // d18
  __int64 v6; // d19

  if ( *this <= 3 )
  {
    v2 = *(_QWORD *)a2;
    v3 = *((_QWORD *)a2 + 1);
    v4 = &this[9 * *this];
    v5 = *((_QWORD *)a2 + 2);
    v6 = *((_QWORD *)a2 + 3);
    *((_BYTE *)v4 + 36) = *((_BYTE *)a2 + 32);
    *(_QWORD *)(v4 + 1) = v2;
    *(_QWORD *)(v4 + 3) = v3;
    *(_QWORD *)(v4 + 5) = v5;
    *(_QWORD *)(v4 + 7) = v6;
    ++*this;
  }
  return this;
}


// ============================================================
