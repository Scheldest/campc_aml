
// Address: 0x18e040
// Original: j__ZN13CAEMP3Decoder16DecodeEntireFileEPhjPjS1_S1_S1_
// Demangled: CAEMP3Decoder::DecodeEntireFile(uchar *,uint,uint *,uint *,uint *,uint *)
// attributes: thunk
int __fastcall CAEMP3Decoder::DecodeEntireFile(
        CAEMP3Decoder *this,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  return _ZN13CAEMP3Decoder16DecodeEntireFileEPhjPjS1_S1_S1_(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x194678
// Original: j__ZN13CAEMP3DecoderC2EP13CAEDataStreamb
// Demangled: CAEMP3Decoder::CAEMP3Decoder(CAEDataStream *,bool)
// attributes: thunk
void __fastcall CAEMP3Decoder::CAEMP3Decoder(CAEMP3Decoder *this, CAEDataStream *a2, bool a3)
{
  _ZN13CAEMP3DecoderC2EP13CAEDataStreamb(this, a2, a3);
}


// ============================================================

// Address: 0x27ec80
// Original: _ZN13CAEMP3DecoderC2EP13CAEDataStreamb
// Demangled: CAEMP3Decoder::CAEMP3Decoder(CAEDataStream *,bool)
void __fastcall CAEMP3Decoder::CAEMP3Decoder(CAEMP3Decoder *this, CAEDataStream *a2, bool a3)
{
  CAEStreamingDecoder::CAEStreamingDecoder(this, a2);
  *(_QWORD *)((char *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 9) = a3;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_661F68;
  *((_DWORD *)this + 22) = malloc(0x4000u);
}


// ============================================================

// Address: 0x27ecd0
// Original: _ZN13CAEMP3DecoderD2Ev
// Demangled: CAEMP3Decoder::~CAEMP3Decoder()
void __fastcall CAEMP3Decoder::~CAEMP3Decoder(CAEMP3Decoder *this)
{
  int v2; // r0
  void *v3; // r0
  _DWORD *v4; // r0
  bool v5; // zf

  v2 = *((_DWORD *)this + 10);
  *(_DWORD *)this = &off_661F68;
  if ( v2 )
  {
    j_mpg123_delete();
    *((_DWORD *)this + 10) = 0;
  }
  v3 = (void *)*((_DWORD *)this + 22);
  if ( v3 )
  {
    free(v3);
    *((_DWORD *)this + 22) = 0;
  }
  v4 = (_DWORD *)*((_DWORD *)this + 3);
  v5 = v4 == 0;
  if ( v4 )
  {
    v4 = (_DWORD *)*v4;
    v5 = v4 == 0;
  }
  if ( !v5 )
  {
    operator delete(v4);
    **((_DWORD **)this + 3) = 0;
  }
  j_CAEStreamingDecoder::~CAEStreamingDecoder(this);
}


// ============================================================

// Address: 0x27ed1c
// Original: _ZN13CAEMP3DecoderD0Ev
// Demangled: CAEMP3Decoder::~CAEMP3Decoder()
void __fastcall CAEMP3Decoder::~CAEMP3Decoder(CAEMP3Decoder *this)
{
  int v2; // r0
  void *v3; // r0
  _DWORD *v4; // r0
  bool v5; // zf
  void *v6; // r0

  v2 = *((_DWORD *)this + 10);
  *(_DWORD *)this = &off_661F68;
  if ( v2 )
  {
    j_mpg123_delete();
    *((_DWORD *)this + 10) = 0;
  }
  v3 = (void *)*((_DWORD *)this + 22);
  if ( v3 )
  {
    free(v3);
    *((_DWORD *)this + 22) = 0;
  }
  v4 = (_DWORD *)*((_DWORD *)this + 3);
  v5 = v4 == 0;
  if ( v4 )
  {
    v4 = (_DWORD *)*v4;
    v5 = v4 == 0;
  }
  if ( !v5 )
  {
    operator delete(v4);
    **((_DWORD **)this + 3) = 0;
  }
  CAEStreamingDecoder::~CAEStreamingDecoder(this);
  operator delete(v6);
}


// ============================================================

// Address: 0x27ed6c
// Original: _ZN13CAEMP3Decoder16DecodeEntireFileEPhjPjS1_S1_S1_
// Demangled: CAEMP3Decoder::DecodeEntireFile(uchar *,uint,uint *,uint *,uint *,uint *)
char *__fastcall CAEMP3Decoder::DecodeEntireFile(
        CAEMP3Decoder *this,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  char *v8; // r5
  int v9; // r11
  int v10; // r3
  size_t v11; // r4
  size_t i; // r8
  int v13; // r6
  char *v14; // r11
  size_t v16; // [sp+10h] [bp-4030h]
  char v17[16388]; // [sp+18h] [bp-4028h] BYREF

  v8 = 0;
  v9 = j_mpg123_new();
  j_mpg123_param(v9, 2, 32, v10, 0.0);
  j_mpg123_format_all();
  if ( !j_mpg123_open_feed() )
  {
    j_mpg123_feed();
    if ( j_mpg123_getformat() )
    {
      return 0;
    }
    else
    {
      v11 = 6 * (_DWORD)a2;
      v8 = (char *)malloc(6 * (_DWORD)a2);
      for ( i = 0; ; i += v16 )
      {
        j_mpg123_read();
        if ( !v16 )
          break;
        if ( v16 + i > v11 )
        {
          v11 = (3 * (v16 + i)) >> 1;
          v13 = v9;
          v14 = (char *)malloc(v11);
          memcpy_1(v14, v8, i);
          free(v8);
          v8 = v14;
          v9 = v13;
        }
        memcpy_1(&v8[i], v17, v16);
      }
      j_mpg123_delete();
      stderr = i;
      *a6 = 500 * i / *a5;
    }
  }
  return v8;
}


// ============================================================

// Address: 0x27ee94
// Original: _ZN13CAEMP3Decoder10FillBufferEPvmPi
// Demangled: CAEMP3Decoder::FillBuffer(void *,ulong,int *)
unsigned int __fastcall CAEMP3Decoder::FillBuffer(CAEMP3Decoder *this, char *a2, unsigned int a3, int *a4)
{
  unsigned int v8; // r5
  int v10; // [sp+4h] [bp-1Ch]

  OS_TimeMS();
  v8 = 0;
  *a4 = 0;
  if ( a3 )
  {
    v8 = 0;
    do
    {
      if ( j_mpg123_read() == -10 )
      {
        if ( !CAEDataStream::FillBuffer(*((CAEDataStream **)this + 3), *((void **)this + 22), 0x4000u) )
          goto LABEL_10;
        j_mpg123_feed();
      }
      else
      {
        if ( !v10 )
        {
LABEL_10:
          *a4 = 1;
          break;
        }
        a2 += v10;
        v8 += v10;
      }
    }
    while ( v8 < a3 );
  }
  *((_DWORD *)this + 8) += 1000 * (v8 >> 1) / (*((_DWORD *)this + 5) * *((_DWORD *)this + 13));
  return v8;
}


// ============================================================

// Address: 0x27ef22
// Original: _ZN13CAEMP3Decoder4FeedEj
// Demangled: CAEMP3Decoder::Feed(uint)
int __fastcall CAEMP3Decoder::Feed(CAEMP3Decoder *this, size_t n)
{
  int v2; // r5

  v2 = CAEDataStream::FillBuffer(*((CAEDataStream **)this + 3), *((void **)this + 22), n);
  if ( v2 )
    j_mpg123_feed();
  return v2;
}


// ============================================================

// Address: 0x27ef48
// Original: _ZN13CAEMP3Decoder10InitialiseEv
// Demangled: CAEMP3Decoder::Initialise(void)
int __fastcall CAEMP3Decoder::Initialise(CAEMP3Decoder *this)
{
  int v2; // r5
  int v3; // r0
  int v4; // r3
  int v6; // r0
  bool v7; // zf
  double v8; // d16

  v2 = 0;
  if ( *((_DWORD *)this + 3) )
  {
    v3 = j_mpg123_new();
    *((_DWORD *)this + 10) = v3;
    j_mpg123_param(v3, 2, 32, v4, 0.0);
    j_mpg123_format_all();
    if ( !j_mpg123_open_feed() )
    {
      if ( CAEDataStream::FillBuffer(*((CAEDataStream **)this + 3), *((void **)this + 22), 0x1400u) )
        j_mpg123_feed();
      if ( j_mpg123_getformat() || j_mpg123_info() )
        return 0;
      v6 = *((_DWORD *)this + 13);
      v7 = v6 == 44100;
      if ( v6 == 44100 )
        v7 = *((_DWORD *)this + 19) == 32;
      if ( v7 )
      {
        return 0;
      }
      else
      {
        j_mpg123_set_filesize();
        v8 = (double)j_mpg123_length() / (double)*((int *)this + 13) * 1000.0 + -500.0;
        if ( v8 <= 200.0 )
          v8 = 200.0;
        *((_DWORD *)this + 7) = (int)v8;
        v2 = 1;
        *((_DWORD *)this + 9) = j_mpg123_outblock();
        *((_BYTE *)this + 8) = 1;
      }
    }
  }
  return v2;
}


// ============================================================

// Address: 0x27f040
// Original: _ZN13CAEMP3Decoder13GetSampleRateEv
// Demangled: CAEMP3Decoder::GetSampleRate(void)
int __fastcall CAEMP3Decoder::GetSampleRate(CAEMP3Decoder *this)
{
  if ( *((_BYTE *)this + 8) )
    return *((_DWORD *)this + 4);
  else
    return -1;
}


// ============================================================

// Address: 0x27f04e
// Original: _ZN13CAEMP3Decoder17GetStreamLengthMsEv
// Demangled: CAEMP3Decoder::GetStreamLengthMs(void)
int __fastcall CAEMP3Decoder::GetStreamLengthMs(CAEMP3Decoder *this)
{
  if ( *((_BYTE *)this + 8) )
    return *((_DWORD *)this + 7);
  else
    return -1;
}


// ============================================================

// Address: 0x27f05c
// Original: _ZN13CAEMP3Decoder19GetStreamPlayTimeMsEv
// Demangled: CAEMP3Decoder::GetStreamPlayTimeMs(void)
int __fastcall CAEMP3Decoder::GetStreamPlayTimeMs(CAEMP3Decoder *this)
{
  if ( *((_BYTE *)this + 8) )
    return *((_DWORD *)this + 8);
  else
    return -1;
}


// ============================================================

// Address: 0x27f06a
// Original: _ZN13CAEMP3Decoder9SetCursorEm
// Demangled: CAEMP3Decoder::SetCursor(ulong)
int __fastcall CAEMP3Decoder::SetCursor(CAEDataStream **this, unsigned int a2)
{
  int result; // r0

  result = *((unsigned __int8 *)this + 8);
  if ( result )
  {
    result = j_mpg123_feedseek();
    if ( result >= 0 )
      return CAEDataStream::Seek(this[3], 0, 0);
  }
  return result;
}


// ============================================================

// Address: 0x27f0a8
// Original: _ZN13CAEMP3Decoder11GetStreamIDEv
// Demangled: CAEMP3Decoder::GetStreamID(void)
int __fastcall CAEMP3Decoder::GetStreamID(CAEMP3Decoder *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 3) + 28);
}


// ============================================================
