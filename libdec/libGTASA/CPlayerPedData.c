
// Address: 0x192f08
// Original: j__ZN14CPlayerPedData12AllocateDataEv
// Demangled: CPlayerPedData::AllocateData(void)
// attributes: thunk
int __fastcall CPlayerPedData::AllocateData(CPlayerPedData *this)
{
  return _ZN14CPlayerPedData12AllocateDataEv(this);
}


// ============================================================

// Address: 0x1950e8
// Original: j__ZN14CPlayerPedData15SetInitialStateEv
// Demangled: CPlayerPedData::SetInitialState(void)
// attributes: thunk
int __fastcall CPlayerPedData::SetInitialState(CPlayerPedData *this)
{
  return _ZN14CPlayerPedData15SetInitialStateEv(this);
}


// ============================================================

// Address: 0x1972a4
// Original: j__ZN14CPlayerPedData14DeAllocateDataEv
// Demangled: CPlayerPedData::DeAllocateData(void)
// attributes: thunk
int __fastcall CPlayerPedData::DeAllocateData(CPlayerPedData *this)
{
  return _ZN14CPlayerPedData14DeAllocateDataEv(this);
}


// ============================================================

// Address: 0x1a0ec4
// Original: j__ZN14CPlayerPedDataD2Ev
// Demangled: CPlayerPedData::~CPlayerPedData()
// attributes: thunk
void __fastcall CPlayerPedData::~CPlayerPedData(CPlayerPedData *this)
{
  _ZN14CPlayerPedDataD2Ev(this);
}


// ============================================================

// Address: 0x40c6c0
// Original: _ZN14CPlayerPedDataC2Ev
// Demangled: CPlayerPedData::CPlayerPedData(void)
void __fastcall CPlayerPedData::CPlayerPedData(CPlayerPedData *this)
{
  __int16 v3; // r0
  __int16 v4; // r1

  v3 = *((_WORD *)this + 26);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_WORD *)this + 16) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_BYTE *)this + 66) = 0;
  *((_WORD *)this + 32) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_BYTE *)this + 67) = 99;
  *((_WORD *)this + 68) = 0;
  *((_WORD *)this + 69) = 0;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_BYTE *)this + 134) = 0;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *((_WORD *)this + 66) = 0;
  *((_WORD *)this + 26) = v3 & 0xE7A0 | 0x1010;
  *((_BYTE *)this + 141) = 1;
  *((_BYTE *)this + 140) = 0;
  *((_DWORD *)this + 6) = CStats::GetFatAndMuscleModifier();
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 17) = CStats::GetFatAndMuscleModifier();
  *((_DWORD *)this + 24) = 0;
  v4 = *((_WORD *)this + 26);
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = -1;
  *((_DWORD *)this + 40) = 0x80000000;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_WORD *)this + 26) = v4 & 0xFF7F;
}


// ============================================================

// Address: 0x40c76a
// Original: _ZN14CPlayerPedData15SetInitialStateEv
// Demangled: CPlayerPedData::SetInitialState(void)
unsigned int __fastcall CPlayerPedData::SetInitialState(CPlayerPedData *this)
{
  __int16 v2; // r0
  int v3; // r1
  unsigned int result; // r0

  *((_WORD *)this + 16) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_BYTE *)this + 66) = 0;
  *((_WORD *)this + 32) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_BYTE *)this + 67) = 99;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_WORD *)this + 66) = 0;
  *((_BYTE *)this + 134) = 0;
  *((_DWORD *)this + 34) = 0;
  v2 = *((_WORD *)this + 26);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *((_WORD *)this + 26) = v2 & 0xE7A0 | 0x1010;
  *((_BYTE *)this + 141) = 1;
  *((_BYTE *)this + 140) = 0;
  *((_DWORD *)this + 6) = CStats::GetFatAndMuscleModifier();
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 17) = CStats::GetFatAndMuscleModifier();
  v3 = *((unsigned __int16 *)this + 26);
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = -1;
  *((_DWORD *)this + 40) = 0x80000000;
  result = v3 & 0xFFFFFF7F;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_WORD *)this + 26) = v3 & 0xFF7F;
  return result;
}


// ============================================================

// Address: 0x40c804
// Original: _ZN14CPlayerPedDataD2Ev
// Demangled: CPlayerPedData::~CPlayerPedData()
void __fastcall CPlayerPedData::~CPlayerPedData(CPlayerPedData *this)
{
  int v2; // r5
  void *v3; // r0

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    CAEPoliceScannerAudioEntity::~CAEPoliceScannerAudioEntity((CAEPoliceScannerAudioEntity *)(v2 + 540));
    operator delete((void *)v2);
    *(_DWORD *)this = 0;
  }
  v3 = (void *)*((_DWORD *)this + 1);
  if ( v3 )
  {
    operator delete(v3);
    *((_DWORD *)this + 1) = 0;
  }
}


// ============================================================

// Address: 0x40c830
// Original: _ZN14CPlayerPedData12AllocateDataEv
// Demangled: CPlayerPedData::AllocateData(void)
int __fastcall CPlayerPedData::AllocateData(CPlayerPedData *this)
{
  _DWORD *v2; // r5
  CPedClothesDesc *v3; // r0
  CPedClothesDesc *v4; // r0

  v2 = *(_DWORD **)this;
  if ( !*(_DWORD *)this )
  {
    v2 = (_DWORD *)operator new(0x29Cu);
    memset(v2, 0, 0x29Cu);
    v2[135] = &off_667858;
    *(_DWORD *)this = v2;
  }
  CWanted::Initialise((CWanted *)v2);
  v3 = (CPedClothesDesc *)*((_DWORD *)this + 1);
  if ( !v3 )
  {
    v4 = (CPedClothesDesc *)operator new(0x78u);
    CPedClothesDesc::CPedClothesDesc(v4);
    *((_DWORD *)this + 1) = v3;
  }
  return sub_19B9F0(v3);
}


// ============================================================

// Address: 0x40c884
// Original: _ZN14CPlayerPedData14DeAllocateDataEv
// Demangled: CPlayerPedData::DeAllocateData(void)
void __fastcall CPlayerPedData::DeAllocateData(CPlayerPedData *this)
{
  int v2; // r5
  void *v3; // r0

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    CAEPoliceScannerAudioEntity::~CAEPoliceScannerAudioEntity((CAEPoliceScannerAudioEntity *)(v2 + 540));
    operator delete((void *)v2);
  }
  v3 = (void *)*((_DWORD *)this + 1);
  *(_DWORD *)this = 0;
  if ( v3 )
    operator delete(v3);
  *((_DWORD *)this + 1) = 0;
}


// ============================================================
