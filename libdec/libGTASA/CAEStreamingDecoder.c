
// Address: 0x19d914
// Original: j__ZN19CAEStreamingDecoderD2Ev
// Demangled: CAEStreamingDecoder::~CAEStreamingDecoder()
// attributes: thunk
void __fastcall CAEStreamingDecoder::~CAEStreamingDecoder(CAEStreamingDecoder *this)
{
  _ZN19CAEStreamingDecoderD2Ev(this);
}


// ============================================================

// Address: 0x1a0544
// Original: j__ZN19CAEStreamingDecoderC2EP13CAEDataStream
// Demangled: CAEStreamingDecoder::CAEStreamingDecoder(CAEDataStream *)
// attributes: thunk
void __fastcall CAEStreamingDecoder::CAEStreamingDecoder(CAEStreamingDecoder *this, CAEDataStream *a2)
{
  _ZN19CAEStreamingDecoderC2EP13CAEDataStream(this, a2);
}


// ============================================================

// Address: 0x27f0ae
// Original: _ZN19CAEStreamingDecoder9GetHeaderEv
// Demangled: CAEStreamingDecoder::GetHeader(void)
int __fastcall CAEStreamingDecoder::GetHeader(CAEStreamingDecoder *this)
{
  int v1; // r0

  v1 = *((_DWORD *)this + 1);
  if ( v1 )
    return *(_DWORD *)v1;
  else
    return 0;
}


// ============================================================

// Address: 0x3aa2b8
// Original: _ZN19CAEStreamingDecoderC2EP13CAEDataStream
// Demangled: CAEStreamingDecoder::CAEStreamingDecoder(CAEDataStream *)
// local variable allocation has failed, the output may be wrong!
void __fastcall CAEStreamingDecoder::CAEStreamingDecoder(CAEStreamingDecoder *this, CAEDataStream *a2)
{
  __int64 v3; // r0
  CAEDataStream *v4; // r1

  LODWORD(v3) = &off_6678D0;
  *(_QWORD *)this = v3;
  if ( HIDWORD(v3) )
    CAEDataStream::Initialise(v4);
}


// ============================================================

// Address: 0x3aa2e0
// Original: _ZN19CAEStreamingDecoderD2Ev
// Demangled: CAEStreamingDecoder::~CAEStreamingDecoder()
void __fastcall CAEStreamingDecoder::~CAEStreamingDecoder(CAEStreamingDecoder *this)
{
  CAEDataStream *v2; // r0
  void *v3; // r0

  v2 = (CAEDataStream *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_6678D0;
  if ( v2 )
  {
    CAEDataStream::~CAEDataStream(v2);
    operator delete(v3);
    *((_DWORD *)this + 1) = 0;
  }
}


// ============================================================

// Address: 0x3aa308
// Original: _ZN19CAEStreamingDecoderD0Ev
// Demangled: CAEStreamingDecoder::~CAEStreamingDecoder()
void __fastcall __noreturn CAEStreamingDecoder::~CAEStreamingDecoder(CAEStreamingDecoder *this)
{
  __debugbreak();
}


// ============================================================
