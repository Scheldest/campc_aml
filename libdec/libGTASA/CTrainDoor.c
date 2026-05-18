
// Address: 0x56f2e8
// Original: _ZNK10CTrainDoor8IsClosedEv
// Demangled: CTrainDoor::IsClosed(void)
int __fastcall CTrainDoor::IsClosed(CTrainDoor *this)
{
  float v1; // s0
  float v2; // s2
  float v3; // s6
  float v4; // s4
  int result; // r0

  v1 = *(float *)this;
  v2 = *((float *)this + 1);
  v3 = fabsf(*(float *)this);
  v4 = *((float *)this + 3);
  result = 0;
  if ( fabsf(v2) > v3 )
    v2 = v1;
  if ( v4 == v2 )
    return 1;
  return result;
}


// ============================================================

// Address: 0x56f31a
// Original: _ZNK10CTrainDoor24RetTranslationWhenClosedEv
// Demangled: CTrainDoor::RetTranslationWhenClosed(void)
int __fastcall CTrainDoor::RetTranslationWhenClosed(CTrainDoor *this)
{
  float v1; // s2

  v1 = *((float *)this + 1);
  if ( fabsf(v1) > fabsf(*(float *)this) )
    v1 = *(float *)this;
  return LODWORD(v1);
}


// ============================================================

// Address: 0x56f33e
// Original: _ZNK10CTrainDoor11IsFullyOpenEv
// Demangled: CTrainDoor::IsFullyOpen(void)
int __fastcall CTrainDoor::IsFullyOpen(CTrainDoor *this)
{
  float v1; // s0
  float v2; // s2
  float v3; // s6
  float v4; // s4
  int result; // r0

  v1 = *(float *)this;
  v2 = *((float *)this + 1);
  v3 = fabsf(*(float *)this);
  v4 = *((float *)this + 3);
  result = 0;
  if ( fabsf(v2) > v3 )
    v1 = v2;
  if ( fabsf(v1) + -0.5 <= fabsf(v4) )
    return 1;
  return result;
}


// ============================================================

// Address: 0x56f388
// Original: _ZNK10CTrainDoor22RetTranslationWhenOpenEv
// Demangled: CTrainDoor::RetTranslationWhenOpen(void)
int __fastcall CTrainDoor::RetTranslationWhenOpen(CTrainDoor *this)
{
  int v1; // s0

  v1 = *(_DWORD *)this;
  if ( fabsf(*((float *)this + 1)) > fabsf(*(float *)this) )
    return *((_DWORD *)this + 1);
  return v1;
}


// ============================================================

// Address: 0x56f3ac
// Original: _ZN10CTrainDoor7IsInUseEv
// Demangled: CTrainDoor::IsInUse(void)
bool __fastcall CTrainDoor::IsInUse(CTrainDoor *this)
{
  float v1; // s0
  float v2; // s2

  v1 = *((float *)this + 3);
  v2 = *((float *)this + 4) - v1;
  *((float *)this + 4) = v1;
  return fabsf(v2) > 0.002;
}


// ============================================================

// Address: 0x56f3d8
// Original: _ZN10CTrainDoor4OpenEf
// Demangled: CTrainDoor::Open(float)
int __fastcall CTrainDoor::Open(int this, float a2)
{
  float v2; // s0

  v2 = *(float *)this;
  if ( fabsf(*(float *)(this + 4)) > fabsf(*(float *)this) )
    v2 = *(float *)(this + 4);
  *(_DWORD *)(this + 16) = *(_DWORD *)(this + 12);
  if ( a2 >= 1.0 )
    *(_BYTE *)(this + 9) = 1;
  else
    v2 = v2 * a2;
  *(float *)(this + 12) = v2;
  return this;
}


// ============================================================
