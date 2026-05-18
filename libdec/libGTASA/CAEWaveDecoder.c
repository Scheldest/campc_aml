
// Address: 0x3b97f8
// Original: _ZN14CAEWaveDecoderC2EP13CAEDataStream
// Demangled: CAEWaveDecoder::CAEWaveDecoder(CAEDataStream *)
void __fastcall CAEWaveDecoder::CAEWaveDecoder(CAEWaveDecoder *this, CAEDataStream *a2)
{
  int v3; // r0

  CAEStreamingDecoder::CAEStreamingDecoder(this, a2);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = a2;
  *(_DWORD *)v3 = &off_667924;
}


// ============================================================

// Address: 0x3b9818
// Original: _ZN14CAEWaveDecoderD2Ev
// Demangled: CAEWaveDecoder::~CAEWaveDecoder()
// attributes: thunk
void __fastcall CAEWaveDecoder::~CAEWaveDecoder(CAEWaveDecoder *this)
{
  j_CAEStreamingDecoder::~CAEStreamingDecoder(this);
}


// ============================================================

// Address: 0x3b981c
// Original: _ZN14CAEWaveDecoderD0Ev
// Demangled: CAEWaveDecoder::~CAEWaveDecoder()
void __fastcall CAEWaveDecoder::~CAEWaveDecoder(CAEWaveDecoder *this)
{
  void *v1; // r0

  CAEStreamingDecoder::~CAEStreamingDecoder(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x3b982c
// Original: _ZN14CAEWaveDecoder10FillBufferEPvmPi
// Demangled: CAEWaveDecoder::FillBuffer(void *,ulong,int *)
int __fastcall CAEWaveDecoder::FillBuffer(CAEDataStream **this, void *a2, size_t a3, int *a4)
{
  return j_CAEDataStream::FillBuffer(this[3], a2, a3);
}


// ============================================================

// Address: 0x3b9832
// Original: _ZN14CAEWaveDecoder10InitialiseEv
// Demangled: CAEWaveDecoder::Initialise(void)
int __fastcall CAEWaveDecoder::Initialise(CAEWaveDecoder *this)
{
  CAEDataStream *v2; // r0
  int v3; // r0
  bool v4; // zf
  int v6; // r0

  v2 = (CAEDataStream *)*((_DWORD *)this + 3);
  *((_BYTE *)this + 8) = 0;
  if ( CAEDataStream::FillBuffer(v2, (char *)this + 16, 0x2Cu) != 44 )
    return *((unsigned __int8 *)this + 8);
  v3 = *((unsigned __int16 *)this + 25);
  v4 = v3 == 16;
  if ( v3 == 16 )
    v4 = *((unsigned __int16 *)this + 19) == 2;
  if ( !v4 )
    return *((unsigned __int8 *)this + 8);
  v6 = *(_DWORD *)this;
  *((_BYTE *)this + 8) = 1;
  if ( (*(int (__fastcall **)(CAEWaveDecoder *))(v6 + 8))(this) <= 6999 )
    *((_BYTE *)this + 8) = 0;
  return *((unsigned __int8 *)this + 8);
}


// ============================================================

// Address: 0x3b9878
// Original: _ZN14CAEWaveDecoder13GetSampleRateEv
// Demangled: CAEWaveDecoder::GetSampleRate(void)
int __fastcall CAEWaveDecoder::GetSampleRate(CAEWaveDecoder *this)
{
  if ( *((_BYTE *)this + 8) )
    return *((_DWORD *)this + 10);
  else
    return -1;
}


// ============================================================

// Address: 0x3b9888
// Original: _ZN14CAEWaveDecoder17GetStreamLengthMsEv
// Demangled: CAEWaveDecoder::GetStreamLengthMs(void)
int __fastcall CAEWaveDecoder::GetStreamLengthMs(CAEWaveDecoder *this)
{
  if ( *((_BYTE *)this + 8) )
    return (int)(float)((float)((float)*((unsigned int *)this + 14) / (float)(unsigned int)(4 * *((_DWORD *)this + 10)))
                      * 1000.0);
  else
    return -1;
}


// ============================================================

// Address: 0x3b98c4
// Original: _ZN14CAEWaveDecoder19GetStreamPlayTimeMsEv
// Demangled: CAEWaveDecoder::GetStreamPlayTimeMs(void)
int __fastcall CAEWaveDecoder::GetStreamPlayTimeMs(CAEDataStream **this)
{
  if ( *((_BYTE *)this + 8) )
    return (int)(float)((float)((float)(unsigned int)(CAEDataStream::GetCurrentPosition(this[3]) - 44)
                              / (float)(unsigned int)(4 * (_DWORD)this[10]))
                      * 1000.0);
  else
    return -1;
}


// ============================================================

// Address: 0x3b990c
// Original: _ZN14CAEWaveDecoder9SetCursorEm
// Demangled: CAEWaveDecoder::SetCursor(ulong)
int __fastcall CAEWaveDecoder::SetCursor(int this, unsigned int a2)
{
  CAEDataStream *v2; // r2
  int v3; // r0

  if ( *(_BYTE *)(this + 8) )
  {
    v2 = *(CAEDataStream **)(this + 12);
    v3 = (int)(float)((float)((float)((float)a2 / 1000.0) * (float)(unsigned int)(4 * *(_DWORD *)(this + 40))) + 44.0);
    return j_CAEDataStream::Seek(v2, v3 % 2 + v3, 0);
  }
  return this;
}


// ============================================================

// Address: 0x3b9964
// Original: _ZN14CAEWaveDecoder11GetStreamIDEv
// Demangled: CAEWaveDecoder::GetStreamID(void)
int __fastcall CAEWaveDecoder::GetStreamID(CAEWaveDecoder *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 3) + 28);
}


// ============================================================
