
// Address: 0x190148
// Original: j__ZN14CStreamingInfo16SetCdPosnAndSizeEjj
// Demangled: CStreamingInfo::SetCdPosnAndSize(uint,uint)
// attributes: thunk
int __fastcall CStreamingInfo::SetCdPosnAndSize(CStreamingInfo *this, unsigned int a2, unsigned int a3)
{
  return _ZN14CStreamingInfo16SetCdPosnAndSizeEjj(this, a2, a3);
}


// ============================================================

// Address: 0x19dc70
// Original: j__ZN14CStreamingInfo4InitEv
// Demangled: CStreamingInfo::Init(void)
// attributes: thunk
int __fastcall CStreamingInfo::Init(CStreamingInfo *this)
{
  return _ZN14CStreamingInfo4InitEv(this);
}


// ============================================================

// Address: 0x19f334
// Original: j__ZN14CStreamingInfo16GetCdPosnAndSizeERjS0_
// Demangled: CStreamingInfo::GetCdPosnAndSize(uint &,uint &)
// attributes: thunk
int __fastcall CStreamingInfo::GetCdPosnAndSize(CStreamingInfo *this, unsigned int *a2, unsigned int *a3)
{
  return _ZN14CStreamingInfo16GetCdPosnAndSizeERjS0_(this, a2, a3);
}


// ============================================================

// Address: 0x2cf3b4
// Original: _ZN14CStreamingInfo4InitEv
// Demangled: CStreamingInfo::Init(void)
int __fastcall CStreamingInfo::Init(int this)
{
  *(_BYTE *)(this + 16) = 0;
  *(_DWORD *)this = -1;
  *(_WORD *)(this + 4) = -1;
  *(_BYTE *)(this + 7) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  return this;
}


// ============================================================

// Address: 0x2cf3cc
// Original: _ZN14CStreamingInfo9AddToListEPS_
// Demangled: CStreamingInfo::AddToList(CStreamingInfo*)
int __fastcall CStreamingInfo::AddToList(CStreamingInfo *this, CStreamingInfo *a2)
{
  unsigned int v2; // r3
  __int16 v3; // r4
  int result; // r0

  v2 = ((unsigned int)this - CStreamingInfo::ms_pArrayBase) >> 2;
  v3 = -13107 * (((unsigned int)a2 - CStreamingInfo::ms_pArrayBase) >> 2);
  *(_WORD *)this = *(_WORD *)a2;
  LOWORD(v2) = -13107 * v2;
  *((_WORD *)this + 1) = v3;
  *(_WORD *)a2 = v2;
  result = CStreamingInfo::ms_pArrayBase + 20 * *(__int16 *)this;
  *(_WORD *)(result + 2) = v2;
  return result;
}


// ============================================================

// Address: 0x2cf414
// Original: _ZN14CStreamingInfo14RemoveFromListEv
// Demangled: CStreamingInfo::RemoveFromList(void)
__int16 *__fastcall CStreamingInfo::RemoveFromList(__int16 *this)
{
  *(_WORD *)(CStreamingInfo::ms_pArrayBase + 20 * *this + 2) = this[1];
  *(_WORD *)(CStreamingInfo::ms_pArrayBase + 20 * this[1]) = *this;
  *(_DWORD *)this = -1;
  return this;
}


// ============================================================

// Address: 0x2cf450
// Original: _ZN14CStreamingInfo7GetNextEv
// Demangled: CStreamingInfo::GetNext(void)
int __fastcall CStreamingInfo::GetNext(CStreamingInfo *this)
{
  int v1; // r0

  v1 = *(__int16 *)this;
  if ( v1 == -1 )
    return 0;
  else
    return CStreamingInfo::ms_pArrayBase + 20 * v1;
}


// ============================================================

// Address: 0x2cf474
// Original: _ZN14CStreamingInfo7GetPrevEv
// Demangled: CStreamingInfo::GetPrev(void)
int __fastcall CStreamingInfo::GetPrev(CStreamingInfo *this)
{
  int v1; // r0

  v1 = *((__int16 *)this + 1);
  if ( v1 == -1 )
    return 0;
  else
    return CStreamingInfo::ms_pArrayBase + 20 * v1;
}


// ============================================================

// Address: 0x2cf498
// Original: _ZN14CStreamingInfo7SetNextEPS_
// Demangled: CStreamingInfo::SetNext(CStreamingInfo*)
_WORD *__fastcall CStreamingInfo::SetNext(_WORD *this, CStreamingInfo *a2)
{
  if ( a2 )
    *this = -13107 * (((int)a2 - CStreamingInfo::ms_pArrayBase) >> 2);
  else
    *this = -1;
  return this;
}


// ============================================================

// Address: 0x2cf4c4
// Original: _ZN14CStreamingInfo7SetPrevEPS_
// Demangled: CStreamingInfo::SetPrev(CStreamingInfo*)
int __fastcall CStreamingInfo::SetPrev(int this, CStreamingInfo *a2)
{
  if ( a2 )
    *(_WORD *)(this + 2) = -13107 * (((int)a2 - CStreamingInfo::ms_pArrayBase) >> 2);
  else
    *(_WORD *)(this + 2) = -1;
  return this;
}


// ============================================================

// Address: 0x2cf4f0
// Original: _ZN14CStreamingInfo6InListEv
// Demangled: CStreamingInfo::InList(void)
bool __fastcall CStreamingInfo::InList(CStreamingInfo *this)
{
  return *(unsigned __int16 *)this != 0xFFFF;
}


// ============================================================

// Address: 0x2cf500
// Original: _ZN14CStreamingInfo9GetCdPosnEv
// Demangled: CStreamingInfo::GetCdPosn(void)
int __fastcall CStreamingInfo::GetCdPosn(CStreamingInfo *this)
{
  return *((_DWORD *)this + 2) + *(_DWORD *)&CStreaming::ms_files[48 * *((unsigned __int8 *)this + 7) + 44];
}


// ============================================================

// Address: 0x2cf51c
// Original: _ZN14CStreamingInfo9GetCdSizeEv
// Demangled: CStreamingInfo::GetCdSize(void)
int __fastcall CStreamingInfo::GetCdSize(CStreamingInfo *this)
{
  return *((_DWORD *)this + 3);
}


// ============================================================

// Address: 0x2cf520
// Original: _ZN14CStreamingInfo16GetCdPosnAndSizeERjS0_
// Demangled: CStreamingInfo::GetCdPosnAndSize(uint &,uint &)
int __fastcall CStreamingInfo::GetCdPosnAndSize(CStreamingInfo *this, unsigned int *a2, unsigned int *a3)
{
  if ( !*((_DWORD *)this + 3) )
    return 0;
  *a2 = *(_DWORD *)&CStreaming::ms_files[48 * *((unsigned __int8 *)this + 7) + 44] + *((_DWORD *)this + 2);
  *a3 = *((_DWORD *)this + 3);
  return 1;
}


// ============================================================

// Address: 0x2cf558
// Original: _ZN14CStreamingInfo16SetCdPosnAndSizeEjj
// Demangled: CStreamingInfo::SetCdPosnAndSize(uint,uint)
int __fastcall CStreamingInfo::SetCdPosnAndSize(int this, unsigned int a2, unsigned int a3)
{
  *(_DWORD *)(this + 8) = a2;
  *(_DWORD *)(this + 12) = a3;
  return this;
}


// ============================================================
