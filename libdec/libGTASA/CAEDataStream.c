
// Address: 0x18b2d4
// Original: j__ZN13CAEDataStream18GetCurrentPositionEv
// Demangled: CAEDataStream::GetCurrentPosition(void)
// attributes: thunk
int __fastcall CAEDataStream::GetCurrentPosition(CAEDataStream *this)
{
  return _ZN13CAEDataStream18GetCurrentPositionEv(this);
}


// ============================================================

// Address: 0x18bfd4
// Original: j__ZN13CAEDataStreamD2Ev
// Demangled: CAEDataStream::~CAEDataStream()
// attributes: thunk
void __fastcall CAEDataStream::~CAEDataStream(CAEDataStream *this)
{
  _ZN13CAEDataStreamD2Ev(this);
}


// ============================================================

// Address: 0x18f28c
// Original: j__ZN13CAEDataStream10InitialiseEv
// Demangled: CAEDataStream::Initialise(void)
// attributes: thunk
int __fastcall CAEDataStream::Initialise(CAEDataStream *this)
{
  return _ZN13CAEDataStream10InitialiseEv(this);
}


// ============================================================

// Address: 0x191d08
// Original: j__ZN13CAEDataStreamC2EiPciib
// Demangled: CAEDataStream::CAEDataStream(int,char *,int,int,bool)
// attributes: thunk
void __fastcall CAEDataStream::CAEDataStream(CAEDataStream *this, int a2, char *a3, int a4, int a5, bool a6)
{
  _ZN13CAEDataStreamC2EiPciib(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19ac78
// Original: j__ZN13CAEDataStream4SeekEli
// Demangled: CAEDataStream::Seek(long,int)
// attributes: thunk
int __fastcall CAEDataStream::Seek(CAEDataStream *this, int a2, int a3)
{
  return _ZN13CAEDataStream4SeekEli(this, a2, a3);
}


// ============================================================

// Address: 0x1a0ce4
// Original: j__ZN13CAEDataStream10FillBufferEPvj
// Demangled: CAEDataStream::FillBuffer(void *,uint)
// attributes: thunk
int __fastcall CAEDataStream::FillBuffer(CAEDataStream *this, void *ptr, size_t n)
{
  return _ZN13CAEDataStream10FillBufferEPvj(this, ptr, n);
}


// ============================================================

// Address: 0x39530c
// Original: _ZN13CAEDataStreamC2EiPciib
// Demangled: CAEDataStream::CAEDataStream(int,char *,int,int,bool)
void __fastcall CAEDataStream::CAEDataStream(CAEDataStream *this, int a2, char *a3, int a4, int a5, bool a6)
{
  *((_DWORD *)this + 2) = a3;
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 12) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = a5;
  *((_DWORD *)this + 7) = a2;
  *((_BYTE *)this + 32) = a6;
  *((_DWORD *)this + 9) = 1;
}


// ============================================================

// Address: 0x395330
// Original: _ZN13CAEDataStreamD2Ev
// Demangled: CAEDataStream::~CAEDataStream()
void __fastcall CAEDataStream::~CAEDataStream(CAEDataStream *this)
{
  AndroidFile *v2; // r0
  void *v3; // r0

  if ( *((_BYTE *)this + 12) )
  {
    v2 = (AndroidFile *)*((_DWORD *)this + 1);
    *((_BYTE *)this + 12) = 0;
    OS_FileClose(v2);
  }
  v3 = (void *)*((_DWORD *)this + 2);
  if ( v3 )
  {
    operator delete[](v3);
    *((_DWORD *)this + 2) = 0;
  }
}


// ============================================================

// Address: 0x395354
// Original: _ZN13CAEDataStream5CloseEv
// Demangled: CAEDataStream::Close(void)
int __fastcall CAEDataStream::Close(CAEDataStream *this)
{
  AndroidFile *v1; // r1

  v1 = (AndroidFile *)*((_DWORD *)this + 1);
  *((_BYTE *)this + 12) = 0;
  OS_FileClose(v1);
  return 0;
}


// ============================================================

// Address: 0x395368
// Original: _ZN13CAEDataStream10FillBufferEPvj
// Demangled: CAEDataStream::FillBuffer(void *,uint)
size_t __fastcall CAEDataStream::FillBuffer(CAEDataStream *this, void *ptr, size_t n)
{
  int v5; // r1
  int v6; // r3
  AndroidFile *v7; // r0
  size_t v8; // r5

  v5 = *((_DWORD *)this + 4);
  v6 = *((_DWORD *)this + 6);
  v7 = (AndroidFile *)*((_DWORD *)this + 1);
  v8 = v6 - v5;
  if ( v6 - v5 > n )
    v8 = n;
  OS_FileRead(v7, ptr, v8);
  if ( *((_BYTE *)this + 32) )
    CAEStreamTransformer::TransformBuffer((CAEStreamTransformer *)&AEStreamTransformer, ptr, v8, *((_DWORD *)this + 4));
  *((_DWORD *)this + 4) += v8;
  return v8;
}


// ============================================================

// Address: 0x3953b4
// Original: _ZN13CAEDataStream18GetCurrentPositionEv
// Demangled: CAEDataStream::GetCurrentPosition(void)
int __fastcall CAEDataStream::GetCurrentPosition(void **this)
{
  return OS_FileGetPosition(this[1]) - (_DWORD)this[5];
}


// ============================================================

// Address: 0x3953c6
// Original: _ZN13CAEDataStream4SeekEli
// Demangled: CAEDataStream::Seek(long,int)
int __fastcall CAEDataStream::Seek(CAEDataStream *this, off_t a2, int a3)
{
  off_t v3; // r5
  int result; // r0

  v3 = a2;
  switch ( a3 )
  {
    case 2:
      v3 = *((_DWORD *)this + 6) - a2 + *((_DWORD *)this + 5);
      break;
    case 1:
      v3 = a2 + OS_FileGetPosition(*((void **)this + 1));
      break;
    case 0:
      v3 = a2 + *((_DWORD *)this + 5);
      break;
  }
  OS_FileSetPosition(*((AndroidFile **)this + 1), v3);
  result = v3 - *((_DWORD *)this + 5);
  *((_DWORD *)this + 4) = result;
  return result;
}


// ============================================================

// Address: 0x395402
// Original: _ZN13CAEDataStream10InitialiseEv
// Demangled: CAEDataStream::Initialise(void)
int __fastcall CAEDataStream::Initialise(CAEDataStream *this)
{
  int v2; // r5
  off_t v3; // r6
  __int64 v4; // r0

  if ( *((_BYTE *)this + 12) )
    return 1;
  v2 = 0;
  *((_DWORD *)this + 1) = 0;
  if ( !OS_FileOpen(0, (char *)this + 4, *((_DWORD *)this + 2)) )
  {
    v3 = *((_DWORD *)this + 5);
    OS_FileSetPosition(*((AndroidFile **)this + 1), v3);
    v4 = *(_QWORD *)((char *)this + 20);
    v2 = 1;
    *((_BYTE *)this + 12) = 1;
    *((_DWORD *)this + 4) = v3 - v4;
    if ( !HIDWORD(v4) )
    {
      *((_DWORD *)this + 6) = OS_FileSize(*((AndroidFile **)this + 1));
      return 1;
    }
  }
  return v2;
}


// ============================================================
