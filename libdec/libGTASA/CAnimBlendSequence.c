
// Address: 0x18a238
// Original: j__ZN18CAnimBlendSequence10SetBoneTagEi
// Demangled: CAnimBlendSequence::SetBoneTag(int)
// attributes: thunk
int __fastcall CAnimBlendSequence::SetBoneTag(CAnimBlendSequence *this, int a2)
{
  return _ZN18CAnimBlendSequence10SetBoneTagEi(this, a2);
}


// ============================================================

// Address: 0x18dbec
// Original: j__ZN18CAnimBlendSequence12SetNumFramesEibbPh
// Demangled: CAnimBlendSequence::SetNumFrames(int,bool,bool,uchar *)
// attributes: thunk
int __fastcall CAnimBlendSequence::SetNumFrames(
        CAnimBlendSequence *this,
        int a2,
        bool a3,
        bool a4,
        unsigned __int8 *a5)
{
  return _ZN18CAnimBlendSequence12SetNumFramesEibbPh(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x195ed4
// Original: j__ZN18CAnimBlendSequenceD2Ev
// Demangled: CAnimBlendSequence::~CAnimBlendSequence()
// attributes: thunk
void __fastcall CAnimBlendSequence::~CAnimBlendSequence(CAnimBlendSequence *this)
{
  _ZN18CAnimBlendSequenceD2Ev(this);
}


// ============================================================

// Address: 0x196e68
// Original: j__ZN18CAnimBlendSequence21RemoveQuaternionFlipsEv
// Demangled: CAnimBlendSequence::RemoveQuaternionFlips(void)
// attributes: thunk
int __fastcall CAnimBlendSequence::RemoveQuaternionFlips(CAnimBlendSequence *this)
{
  return _ZN18CAnimBlendSequence21RemoveQuaternionFlipsEv(this);
}


// ============================================================

// Address: 0x198378
// Original: j__ZN18CAnimBlendSequence17CompressKeyframesEPh
// Demangled: CAnimBlendSequence::CompressKeyframes(uchar *)
// attributes: thunk
int __fastcall CAnimBlendSequence::CompressKeyframes(CAnimBlendSequence *this, unsigned __int8 *a2)
{
  return _ZN18CAnimBlendSequence17CompressKeyframesEPh(this, a2);
}


// ============================================================

// Address: 0x1991b8
// Original: j__ZN18CAnimBlendSequence22RemoveUncompressedDataEPh
// Demangled: CAnimBlendSequence::RemoveUncompressedData(uchar *)
// attributes: thunk
int __fastcall CAnimBlendSequence::RemoveUncompressedData(CAnimBlendSequence *this, unsigned __int8 *a2)
{
  return _ZN18CAnimBlendSequence22RemoveUncompressedDataEPh(this, a2);
}


// ============================================================

// Address: 0x1994a0
// Original: j__ZN18CAnimBlendSequenceC2Ev
// Demangled: CAnimBlendSequence::CAnimBlendSequence(void)
// attributes: thunk
void __fastcall CAnimBlendSequence::CAnimBlendSequence(CAnimBlendSequence *this)
{
  _ZN18CAnimBlendSequenceC2Ev(this);
}


// ============================================================

// Address: 0x19abbc
// Original: j__ZN18CAnimBlendSequence11GetDataSizeEb
// Demangled: CAnimBlendSequence::GetDataSize(bool)
// attributes: thunk
int __fastcall CAnimBlendSequence::GetDataSize(CAnimBlendSequence *this, bool a2)
{
  return _ZN18CAnimBlendSequence11GetDataSizeEb(this, a2);
}


// ============================================================

// Address: 0x19af4c
// Original: j__ZN18CAnimBlendSequence10UncompressEPh
// Demangled: CAnimBlendSequence::Uncompress(uchar *)
// attributes: thunk
int __fastcall CAnimBlendSequence::Uncompress(CAnimBlendSequence *this, unsigned __int8 *a2)
{
  return _ZN18CAnimBlendSequence10UncompressEPh(this, a2);
}


// ============================================================

// Address: 0x19b740
// Original: j__ZN18CAnimBlendSequence10MoveMemoryEv
// Demangled: CAnimBlendSequence::MoveMemory(void)
// attributes: thunk
int __fastcall CAnimBlendSequence::MoveMemory(CAnimBlendSequence *this)
{
  return _ZN18CAnimBlendSequence10MoveMemoryEv(this);
}


// ============================================================

// Address: 0x19db1c
// Original: j__ZN18CAnimBlendSequence7SetNameEPKc
// Demangled: CAnimBlendSequence::SetName(char const*)
// attributes: thunk
int __fastcall CAnimBlendSequence::SetName(CAnimBlendSequence *this, CKeyGen *a2)
{
  return _ZN18CAnimBlendSequence7SetNameEPKc(this, a2);
}


// ============================================================

// Address: 0x1a1688
// Original: j__ZN18CAnimBlendSequence5PrintEv
// Demangled: CAnimBlendSequence::Print(void)
// attributes: thunk
int __fastcall CAnimBlendSequence::Print(CAnimBlendSequence *this)
{
  return _ZN18CAnimBlendSequence5PrintEv(this);
}


// ============================================================

// Address: 0x38b828
// Original: _ZN18CAnimBlendSequenceC2Ev
// Demangled: CAnimBlendSequence::CAnimBlendSequence(void)
void __fastcall CAnimBlendSequence::CAnimBlendSequence(CAnimBlendSequence *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_WORD *)this = -1;
}


// ============================================================

// Address: 0x38b836
// Original: _ZN18CAnimBlendSequenceD2Ev
// Demangled: CAnimBlendSequence::~CAnimBlendSequence()
void __fastcall CAnimBlendSequence::~CAnimBlendSequence(CAnimBlendSequence *this, void *a2)
{
  void *v2; // r0

  if ( (*((_BYTE *)this + 4) & 8) == 0 )
  {
    v2 = (void *)*((_DWORD *)this + 2);
    if ( v2 )
      CMemoryMgr::Free(v2, a2);
  }
}


// ============================================================

// Address: 0x38b850
// Original: _ZN18CAnimBlendSequence7SetNameEPKc
// Demangled: CAnimBlendSequence::SetName(char const*)
int __fastcall CAnimBlendSequence::SetName(CAnimBlendSequence *this, CKeyGen *a2)
{
  int result; // r0

  result = CKeyGen::GetUppercaseKey(a2, (const char *)a2);
  *(_DWORD *)this = result;
  return result;
}


// ============================================================

// Address: 0x38b860
// Original: _ZN18CAnimBlendSequence10SetBoneTagEi
// Demangled: CAnimBlendSequence::SetBoneTag(int)
_WORD *__fastcall CAnimBlendSequence::SetBoneTag(_WORD *this, int a2)
{
  __int16 v2; // r2

  if ( a2 != -1 )
  {
    v2 = this[2];
    *this = a2;
    this[2] = v2 | 0x10;
  }
  return this;
}


// ============================================================

// Address: 0x38b870
// Original: _ZN18CAnimBlendSequence11GetDataSizeEb
// Demangled: CAnimBlendSequence::GetDataSize(bool)
int __fastcall CAnimBlendSequence::GetDataSize(CAnimBlendSequence *this, int a2)
{
  __int16 v2; // r2
  int v3; // r0
  int v4; // r2

  v2 = *((_WORD *)this + 2);
  v3 = *((__int16 *)this + 3);
  v4 = v2 & 2;
  if ( a2 == 1 )
  {
    if ( v4 )
      return 16 * v3;
    else
      return 10 * v3;
  }
  else if ( v4 )
  {
    return 32 * v3;
  }
  else
  {
    return 20 * v3;
  }
}


// ============================================================

// Address: 0x38b89c
// Original: _ZN18CAnimBlendSequence12SetNumFramesEibbPh
// Demangled: CAnimBlendSequence::SetNumFrames(int,bool,bool,uchar *)
unsigned __int8 *__fastcall CAnimBlendSequence::SetNumFrames(
        CAnimBlendSequence *this,
        int a2,
        int a3,
        int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *result; // r0
  int v9; // r1
  unsigned int v10; // r1
  int v11; // r0

  result = a5;
  v9 = *((unsigned __int16 *)this + 2);
  if ( a3 == 1 )
  {
    v10 = v9 | 3;
    *((_WORD *)this + 2) = v10;
    if ( a5 )
      goto LABEL_10;
    v11 = 32;
    if ( a4 )
      v11 = 16;
  }
  else
  {
    v10 = v9 | 1;
    *((_WORD *)this + 2) = v10;
    if ( a5 )
      goto LABEL_10;
    v11 = 20;
    if ( a4 )
      v11 = 10;
  }
  result = (unsigned __int8 *)CMemoryMgr::Malloc(v11 * a2, v10);
LABEL_10:
  *((_WORD *)this + 3) = a2;
  *((_DWORD *)this + 2) = result;
  if ( a4 == 1 )
  {
    result = (unsigned __int8 *)(*((unsigned __int16 *)this + 2) | 4);
    *((_WORD *)this + 2) = (_WORD)result;
  }
  return result;
}


// ============================================================

// Address: 0x38b8f4
// Original: _ZN18CAnimBlendSequence21RemoveQuaternionFlipsEv
// Demangled: CAnimBlendSequence::RemoveQuaternionFlips(void)
int __fastcall CAnimBlendSequence::RemoveQuaternionFlips(int this)
{
  int v1; // r12
  float *v2; // r1
  int v3; // lr
  int v4; // r2
  int v5; // r3
  float v6; // s0
  float v7; // s2
  float v8; // s4
  float v9; // s6
  int v10; // r4
  float *v11; // r1
  float v12; // s12
  float v13; // s14
  float v14; // s10
  float v15; // s8

  v1 = *(__int16 *)(this + 6);
  if ( v1 >= 2 )
  {
    v2 = *(float **)(this + 8);
    v3 = 2;
    v4 = 32;
    v5 = 20;
    v6 = *v2;
    v7 = v2[1];
    v8 = v2[2];
    v9 = v2[3];
    while ( 1 )
    {
      v10 = v5;
      if ( (*(_BYTE *)(this + 4) & 2) != 0 )
        v10 = v4;
      v11 = (float *)((char *)v2 + v10);
      v12 = *v11;
      v13 = v11[1];
      v14 = v11[2];
      v15 = v11[3];
      if ( (float)((float)((float)((float)(v6 * *v11) + (float)(v7 * v13)) + (float)(v8 * v14)) + (float)(v9 * v15)) >= 0.0 )
      {
        v6 = *v11;
        v7 = v11[1];
        v8 = v11[2];
        v9 = v11[3];
      }
      else
      {
        v6 = -v12;
        v7 = -v13;
        v8 = -v14;
        v9 = -v15;
        *v11 = -v12;
        v11[1] = -v13;
        v11[2] = -v14;
        v11[3] = -v15;
        LOWORD(v1) = *(_WORD *)(this + 6);
      }
      if ( v3 >= (__int16)v1 )
        break;
      v5 += 20;
      v4 += 32;
      v2 = *(float **)(this + 8);
      ++v3;
    }
  }
  return this;
}


// ============================================================

// Address: 0x38b9b0
// Original: _ZN18CAnimBlendSequence10UncompressEPh
// Demangled: CAnimBlendSequence::Uncompress(uchar *)
unsigned int __fastcall CAnimBlendSequence::Uncompress(CAnimBlendSequence *this, unsigned __int8 *a2)
{
  unsigned int v4; // r1
  unsigned int result; // r0
  unsigned __int8 *v6; // r6
  float *v7; // r0
  int v8; // r2
  int v9; // r3
  float *v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r1

  v4 = *((__int16 *)this + 3);
  result = (unsigned __int16)v4;
  if ( (_WORD)v4 )
  {
    if ( (*((_BYTE *)this + 4) & 2) != 0 )
    {
      v6 = a2;
      if ( !a2 )
      {
        v6 = (unsigned __int8 *)CMemoryMgr::Malloc(32 * v4, v4);
        LOWORD(result) = *((_WORD *)this + 3);
      }
      if ( (__int16)result >= 1 )
      {
        v10 = (float *)(v6 + 16);
        v11 = 0;
        v4 = *((_DWORD *)this + 2) + 8;
        do
        {
          ++v11;
          *(v10 - 4) = (float)*(__int16 *)(v4 - 8) * 0.00024414;
          *(v10 - 3) = (float)*(__int16 *)(v4 - 6) * 0.00024414;
          *(v10 - 2) = (float)*(__int16 *)(v4 - 4) * 0.00024414;
          *(v10 - 1) = (float)*(__int16 *)(v4 - 2) * 0.00024414;
          *v10 = (float)*(__int16 *)v4 * 0.016667;
          v10[1] = (float)*(__int16 *)(v4 + 2) * 0.00097656;
          v10[2] = (float)*(__int16 *)(v4 + 4) * 0.00097656;
          v12 = *(__int16 *)(v4 + 6);
          v4 += 16;
          v10[3] = (float)v12 * 0.00097656;
          v10 += 8;
        }
        while ( v11 < *((__int16 *)this + 3) );
      }
    }
    else
    {
      v6 = a2;
      if ( !a2 )
      {
        v6 = (unsigned __int8 *)CMemoryMgr::Malloc(20 * v4, v4);
        LOWORD(result) = *((_WORD *)this + 3);
      }
      if ( (__int16)result >= 1 )
      {
        v7 = (float *)(v6 + 8);
        v8 = 0;
        v4 = *((_DWORD *)this + 2) + 8;
        do
        {
          ++v8;
          *(v7 - 2) = (float)*(__int16 *)(v4 - 8) * 0.00024414;
          *(v7 - 1) = (float)*(__int16 *)(v4 - 6) * 0.00024414;
          *v7 = (float)*(__int16 *)(v4 - 4) * 0.00024414;
          v7[1] = (float)*(__int16 *)(v4 - 2) * 0.00024414;
          v9 = *(__int16 *)v4;
          v4 += 10;
          v7[2] = (float)v9 * 0.016667;
          v7 += 5;
        }
        while ( v8 < *((__int16 *)this + 3) );
      }
    }
    if ( (*((_BYTE *)this + 4) & 8) == 0 )
      CMemoryMgr::Free(*((void **)this + 2), (void *)v4);
    *((_DWORD *)this + 2) = v6;
    v13 = *((unsigned __int16 *)this + 2);
    v14 = v13 | 8;
    if ( !a2 )
      v14 = v13 & 0xFFF3;
    result = v14 & 0xFFFFFFFB;
    *((_WORD *)this + 2) = v14 & 0xFFFB;
  }
  return result;
}


// ============================================================

// Address: 0x38bb80
// Original: _ZN18CAnimBlendSequence22RemoveUncompressedDataEPh
// Demangled: CAnimBlendSequence::RemoveUncompressedData(uchar *)
CAnimBlendSequence *__fastcall CAnimBlendSequence::RemoveUncompressedData(
        CAnimBlendSequence *this,
        unsigned __int8 *a2)
{
  if ( *((_WORD *)this + 3) )
    return (CAnimBlendSequence *)CAnimBlendSequence::CompressKeyframes(this, a2);
  return this;
}


// ============================================================

// Address: 0x38bb8c
// Original: _ZN18CAnimBlendSequence17CompressKeyframesEPh
// Demangled: CAnimBlendSequence::CompressKeyframes(uchar *)
int __fastcall CAnimBlendSequence::CompressKeyframes(CAnimBlendSequence *this, unsigned __int8 *a2)
{
  float *v4; // r1
  int result; // r0
  unsigned __int8 *v6; // r6
  _WORD *v7; // r0
  int v8; // r2
  float v9; // s6
  _WORD *v10; // r0
  int v11; // r2
  float v12; // s8
  int v13; // r0
  int v14; // r1

  v4 = (float *)*((__int16 *)this + 3);
  result = (unsigned __int16)v4;
  if ( (_WORD)v4 )
  {
    if ( (*((_BYTE *)this + 4) & 2) != 0 )
    {
      v6 = a2;
      if ( !a2 )
      {
        v6 = (unsigned __int8 *)CMemoryMgr::Malloc(16 * (_DWORD)v4, (unsigned int)v4);
        LOWORD(result) = *((_WORD *)this + 3);
      }
      if ( (__int16)result >= 1 )
      {
        v10 = v6 + 8;
        v4 = (float *)(*((_DWORD *)this + 2) + 16);
        v11 = 0;
        do
        {
          ++v11;
          *(v10 - 4) = (int)(float)(*(v4 - 4) * 4096.0);
          *(v10 - 3) = (int)(float)(*(v4 - 3) * 4096.0);
          *(v10 - 2) = (int)(float)(*(v4 - 2) * 4096.0);
          *(v10 - 1) = (int)(float)(*(v4 - 1) * 4096.0);
          *v10 = (int)(float)((float)(*v4 * 60.0) + 0.5);
          v10[1] = (int)(float)(v4[1] * 1024.0);
          v10[2] = (int)(float)(v4[2] * 1024.0);
          v12 = v4[3];
          v4 += 8;
          v10[3] = (int)(float)(v12 * 1024.0);
          v10 += 8;
        }
        while ( v11 < *((__int16 *)this + 3) );
      }
    }
    else
    {
      v6 = a2;
      if ( !a2 )
      {
        v6 = (unsigned __int8 *)CMemoryMgr::Malloc(10 * (_DWORD)v4, (unsigned int)v4);
        LOWORD(result) = *((_WORD *)this + 3);
      }
      if ( (__int16)result >= 1 )
      {
        v7 = v6 + 4;
        v4 = (float *)(*((_DWORD *)this + 2) + 16);
        v8 = 0;
        do
        {
          ++v8;
          *(v7 - 2) = (int)(float)(*(v4 - 4) * 4096.0);
          *(v7 - 1) = (int)(float)(*(v4 - 3) * 4096.0);
          *v7 = (int)(float)(*(v4 - 2) * 4096.0);
          v7[1] = (int)(float)(*(v4 - 1) * 4096.0);
          v9 = *v4;
          v4 += 5;
          v7[2] = (int)(float)((float)(v9 * 60.0) + 0.5);
          v7 += 5;
        }
        while ( v8 < *((__int16 *)this + 3) );
      }
    }
    if ( (*((_BYTE *)this + 4) & 8) == 0 )
      CMemoryMgr::Free(*((void **)this + 2), v4);
    *((_DWORD *)this + 2) = v6;
    v13 = *((unsigned __int16 *)this + 2);
    v14 = v13 | 8;
    if ( !a2 )
      v14 = v13 & 0xFFF3;
    result = v14 | 4;
    *((_WORD *)this + 2) = v14 | 4;
  }
  return result;
}


// ============================================================

// Address: 0x38bd5c
// Original: _ZN18CAnimBlendSequence10MoveMemoryEv
// Demangled: CAnimBlendSequence::MoveMemory(void)
int __fastcall CAnimBlendSequence::MoveMemory(CAnimBlendSequence *this, void *a2)
{
  CMemoryMgr *v3; // r0
  int v4; // r0

  if ( (*((_BYTE *)this + 4) & 8) != 0 )
    return 0;
  v3 = (CMemoryMgr *)*((_DWORD *)this + 2);
  if ( !v3 )
    return 0;
  v4 = CMemoryMgr::MoveMemory(v3, a2);
  if ( v4 == *((_DWORD *)this + 2) )
    return 0;
  *((_DWORD *)this + 2) = v4;
  return 1;
}


// ============================================================

// Address: 0x38bd80
// Original: _ZN18CAnimBlendSequence5PrintEv
// Demangled: CAnimBlendSequence::Print(void)
void __fastcall CAnimBlendSequence::Print(CAnimBlendSequence *this)
{
  ;
}


// ============================================================
