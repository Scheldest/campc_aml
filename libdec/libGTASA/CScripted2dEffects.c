
// Address: 0x190024
// Original: j__ZN18CScripted2dEffects19AddScripted2DEffectEf
// Demangled: CScripted2dEffects::AddScripted2DEffect(float)
// attributes: thunk
int __fastcall CScripted2dEffects::AddScripted2DEffect(CScripted2dEffects *this, float a2)
{
  return _ZN18CScripted2dEffects19AddScripted2DEffectEf(this, a2);
}


// ============================================================

// Address: 0x190d74
// Original: j__ZN18CScripted2dEffects14GetEffectPairsEPK9C2dEffect
// Demangled: CScripted2dEffects::GetEffectPairs(C2dEffect const*)
// attributes: thunk
int __fastcall CScripted2dEffects::GetEffectPairs(CScripted2dEffects *a1, const C2dEffect *a2)
{
  return _ZN18CScripted2dEffects14GetEffectPairsEPK9C2dEffect(a1, a2);
}


// ============================================================

// Address: 0x193800
// Original: j__ZN18CScripted2dEffects8GetIndexEPK9C2dEffect
// Demangled: CScripted2dEffects::GetIndex(C2dEffect const*)
// attributes: thunk
int __fastcall CScripted2dEffects::GetIndex(CScripted2dEffects *a1, const C2dEffect *a2)
{
  return _ZN18CScripted2dEffects8GetIndexEPK9C2dEffect(a1, a2);
}


// ============================================================

// Address: 0x19f8cc
// Original: j__ZN18CScripted2dEffects4InitEv
// Demangled: CScripted2dEffects::Init(void)
// attributes: thunk
int __fastcall CScripted2dEffects::Init(CScripted2dEffects *this)
{
  return _ZN18CScripted2dEffects4InitEv(this);
}


// ============================================================

// Address: 0x48febc
// Original: _ZN18CScripted2dEffects4SaveEv
// Demangled: CScripted2dEffects::Save(void)
void __fastcall CScripted2dEffects::Save(CScripted2dEffects *this)
{
  ;
}


// ============================================================

// Address: 0x48febe
// Original: _ZN18CScripted2dEffects4LoadEv
// Demangled: CScripted2dEffects::Load(void)
void __fastcall CScripted2dEffects::Load(CScripted2dEffects *this)
{
  ;
}


// ============================================================

// Address: 0x59c518
// Original: _ZN18CScripted2dEffects4InitEv
// Demangled: CScripted2dEffects::Init(void)
__int16 *__fastcall CScripted2dEffects::Init(CScripted2dEffects *this)
{
  __int16 *result; // r0
  int *v2; // r1
  float *v3; // r2
  int v4; // r6
  int *v5; // r5

  unk_A1FB4C = 0LL;
  unk_A1FB54 = 0LL;
  unk_A1FB3C = 0LL;
  unk_A1FB44 = 0LL;
  *(_QWORD *)CScripted2dEffects::ms_activated = 0LL;
  unk_A1FB24 = 0LL;
  unk_A1FB2C = 0LL;
  unk_A1FB34 = 0LL;
  memset(CScripted2dEffects::ms_effectSequenceTaskIDs, 255, sizeof(CScripted2dEffects::ms_effectSequenceTaskIDs));
  result = CScripted2dEffects::ScriptReferenceIndex;
  v2 = CScripted2dEffects::ms_userLists;
  v3 = CScripted2dEffects::ms_radii;
  *(_QWORD *)&CScripted2dEffects::ms_useAgainFlags[48] = 0LL;
  *(_QWORD *)&CScripted2dEffects::ms_useAgainFlags[56] = 0LL;
  *(_QWORD *)&CScripted2dEffects::ms_useAgainFlags[32] = 0LL;
  *(_QWORD *)&CScripted2dEffects::ms_useAgainFlags[40] = 0LL;
  *(_QWORD *)CScripted2dEffects::ms_useAgainFlags = 0LL;
  *(_QWORD *)&CScripted2dEffects::ms_useAgainFlags[8] = 0LL;
  *(_QWORD *)&CScripted2dEffects::ms_useAgainFlags[16] = 0LL;
  *(_QWORD *)&CScripted2dEffects::ms_useAgainFlags[24] = 0LL;
  v4 = 0;
  do
  {
    v5 = &CScripted2dEffects::ms_effectPairs[v4];
    *result++ = 1;
    *v2 = -1;
    v2[1] = -1;
    v2[2] = -1;
    v2[3] = -1;
    v2[4] = -1;
    v2[5] = -1;
    v2[6] = -1;
    v2[7] = -1;
    *((_BYTE *)v2 + 32) = 0;
    v2 += 9;
    v5[8] = -1;
    v5[17] = -1;
    v5[1] = -1;
    v5[2] = -1;
    v5[3] = -1;
    v5[4] = -1;
    v5[5] = -1;
    v5[6] = -1;
    *((_BYTE *)v5 + 36) = 0;
    *((_BYTE *)v5 + 72) = 0;
    v5[26] = -1;
    v5[10] = -1;
    v5[11] = -1;
    v5[12] = -1;
    v5[13] = -1;
    v5[14] = -1;
    v5[15] = -1;
    CScripted2dEffects::ms_effectPairs[v4] = 0;
    v4 += 37;
    v5[19] = -1;
    v5[20] = -1;
    v5[21] = -1;
    v5[22] = -1;
    v5[23] = -1;
    v5[24] = -1;
    *((_BYTE *)v5 + 108) = 0;
    v5[35] = -1;
    v5[28] = -1;
    v5[29] = -1;
    v5[30] = -1;
    v5[31] = -1;
    v5[32] = -1;
    v5[33] = -1;
    *v3++ = -1.0;
    *((_BYTE *)v5 + 144) = 0;
  }
  while ( v4 != 2368 );
  return result;
}


// ============================================================

// Address: 0x59c720
// Original: _ZN18CScripted2dEffects19AddScripted2DEffectEf
// Demangled: CScripted2dEffects::AddScripted2DEffect(float)
int __fastcall CScripted2dEffects::AddScripted2DEffect(CScripted2dEffects *this, float a2)
{
  int result; // r0
  int *v4; // r3
  float *v5; // r2
  int *v6; // r1

  result = 0;
  v4 = CScripted2dEffects::ms_userLists;
  v5 = CScripted2dEffects::ms_radii;
  v6 = CScripted2dEffects::ms_effectPairs;
  while ( CScripted2dEffects::ms_activated[result] )
  {
    ++v5;
    v4 += 9;
    v6 += 37;
    if ( result++ >= 63 )
      return -1;
  }
  CScripted2dEffects::ms_activated[result] = 1;
  CScripted2dEffects::ms_effectSequenceTaskIDs[result] = -1;
  *v4 = -1;
  v4[1] = -1;
  v4[2] = -1;
  v4[3] = -1;
  v4[4] = -1;
  v4[5] = -1;
  v4[6] = -1;
  v4[7] = -1;
  v6[8] = -1;
  v6[17] = -1;
  *((_BYTE *)v6 + 36) = 0;
  *((_BYTE *)v6 + 72) = 0;
  *((_BYTE *)v4 + 32) = 0;
  v6[26] = -1;
  v6[10] = -1;
  v6[11] = -1;
  v6[12] = -1;
  v6[13] = -1;
  v6[14] = -1;
  v6[15] = -1;
  v6[19] = -1;
  v6[20] = -1;
  v6[21] = -1;
  v6[22] = -1;
  v6[23] = -1;
  v6[24] = -1;
  *((_BYTE *)v6 + 144) = 0;
  *v6 = 0;
  v6[1] = -1;
  v6[2] = -1;
  v6[3] = -1;
  v6[4] = -1;
  v6[5] = -1;
  v6[6] = -1;
  v6[28] = -1;
  v6[29] = -1;
  v6[30] = -1;
  v6[31] = -1;
  v6[32] = -1;
  v6[33] = -1;
  *((_BYTE *)v6 + 108) = 0;
  v6[35] = -1;
  CScripted2dEffects::ms_useAgainFlags[result] = 0;
  *(_DWORD *)v5 = this;
  return result;
}


// ============================================================

// Address: 0x59c81c
// Original: _ZN18CScripted2dEffects22ReturnScripted2DEffectEi
// Demangled: CScripted2dEffects::ReturnScripted2DEffect(int)
int __fastcall CScripted2dEffects::ReturnScripted2DEffect(CScripted2dEffects *this, int a2)
{
  CScripted2dEffects::ms_activated[(_DWORD)this] = 0;
  GetPedAttractorManager();
  return sub_18F4DC();
}


// ============================================================

// Address: 0x59c880
// Original: _ZN18CScripted2dEffects14GetEffectPairsEPK9C2dEffect
// Demangled: CScripted2dEffects::GetEffectPairs(C2dEffect const*)
int *__fastcall CScripted2dEffects::GetEffectPairs(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = a1 - (_DWORD)CScripted2dEffects::ms_effects + 64;
  v2 = 0;
  while ( 1 )
  {
    v1 -= 64;
    if ( !v1 )
      break;
    if ( v2++ > 62 )
    {
      v2 = -1;
      return &CScripted2dEffects::ms_effectPairs[37 * v2];
    }
  }
  return &CScripted2dEffects::ms_effectPairs[37 * v2];
}


// ============================================================

// Address: 0x59c8b4
// Original: _ZN18CScripted2dEffects8GetIndexEPK9C2dEffect
// Demangled: CScripted2dEffects::GetIndex(C2dEffect const*)
int __fastcall CScripted2dEffects::GetIndex(int a1)
{
  int v1; // r3
  char *v2; // r1
  char *v3; // r2
  int result; // r0

  v1 = 0;
  v2 = (char *)CScripted2dEffects::ms_effects - a1;
  do
  {
    v3 = v2;
    v2 += 64;
    result = v1;
    if ( v2 == (char *)&dword_40 )
      break;
    ++v1;
  }
  while ( result <= 62 );
  if ( v3 )
    return -1;
  return result;
}


// ============================================================
