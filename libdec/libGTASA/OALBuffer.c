
// Address: 0x19d8d4
// Original: j__ZN9OALBufferC2EPvjS0_jjj
// Demangled: OALBuffer::OALBuffer(void *,uint,void *,uint,uint,uint)
// attributes: thunk
void __fastcall OALBuffer::OALBuffer(
        OALBuffer *this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  _ZN9OALBufferC2EPvjS0_jjj(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19fac8
// Original: j__ZN9OALBufferC2EPvjjj
// Demangled: OALBuffer::OALBuffer(void *,uint,uint,uint)
// attributes: thunk
void __fastcall OALBuffer::OALBuffer(OALBuffer *this, void *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  _ZN9OALBufferC2EPvjjj(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x27f6d8
// Original: _ZN9OALBufferC2EPvjjj
// Demangled: OALBuffer::OALBuffer(void *,uint,uint,uint)
void __fastcall OALBuffer::OALBuffer(OALBuffer *this, int a2, int a3, int a4, unsigned int a5)
{
  int v9; // r1

  *(_DWORD *)this = &off_661FB8;
  *((_DWORD *)this + 1) = 1;
  ++OALBase::livingCount;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_661F98;
  j_alGenBuffers();
  v9 = 4355;
  if ( a5 == 1 )
    v9 = 4353;
  j_alBufferData(*((_DWORD *)this + 2), v9, a2, a3, a4);
  *((_DWORD *)this + 4) = a3;
}


// ============================================================

// Address: 0x27f750
// Original: _ZN9OALBufferC2EPvjS0_jjj
// Demangled: OALBuffer::OALBuffer(void *,uint,void *,uint,uint,uint)
void __fastcall OALBuffer::OALBuffer(
        OALBuffer *this,
        int a2,
        int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int *v11; // r10
  int v12; // r6
  char *v13; // r8

  v11 = (int *)((char *)this + 8);
  *(_DWORD *)this = &off_661FB8;
  *((_DWORD *)this + 1) = 1;
  ++OALBase::livingCount;
  *(_DWORD *)this = &off_661F98;
  j_alGenBuffers();
  v12 = 4355;
  if ( a7 == 1 )
    v12 = 4353;
  j_alBufferData(*((_DWORD *)this + 3), v12, a2, a3, a6);
  if ( a5 >> 4 > 0x18 )
  {
    j_alBufferData(*v11, v12, (int)a4, a5, a6);
  }
  else
  {
    v13 = (char *)malloc(4 * a5);
    memcpy_1(v13, a4, a5);
    memcpy_1(&v13[a5], a4, a5);
    memcpy_1(&v13[2 * a5], a4, a5);
    memcpy_1(&v13[3 * a5], a4, a5);
    j_alBufferData(*v11, v12, (int)v13, 4 * a5, a6);
    free(v13);
  }
  *((_DWORD *)this + 4) = a5 + a3;
}


// ============================================================

// Address: 0x27f840
// Original: _ZN9OALBufferD2Ev
// Demangled: OALBuffer::~OALBuffer()
void __fastcall OALBuffer::~OALBuffer(OALBuffer *this)
{
  _DWORD *v2; // r6
  int v3; // r0

  *(_DWORD *)this = &off_661F98;
  v2 = (_DWORD *)((char *)this + 8);
  j_alDeleteBuffers();
  v3 = *((_DWORD *)this + 3);
  *v2 = 0;
  if ( v3 )
  {
    j_alDeleteBuffers();
    *((_DWORD *)this + 3) = 0;
  }
  *(_DWORD *)this = &off_661FB8;
  --OALBase::livingCount;
}


// ============================================================

// Address: 0x27f8a8
// Original: _ZN9OALBufferD0Ev
// Demangled: OALBuffer::~OALBuffer()
void __fastcall OALBuffer::~OALBuffer(OALBuffer *this)
{
  _DWORD *v2; // r6
  int v3; // r0

  *(_DWORD *)this = &off_661F98;
  v2 = (_DWORD *)((char *)this + 8);
  j_alDeleteBuffers();
  v3 = *((_DWORD *)this + 3);
  *v2 = 0;
  if ( v3 )
  {
    j_alDeleteBuffers();
    *((_DWORD *)this + 3) = 0;
  }
  *(_DWORD *)this = &off_661FB8;
  --OALBase::livingCount;
  operator delete(this);
}


// ============================================================
