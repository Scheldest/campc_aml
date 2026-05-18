
// Address: 0x1968d0
// Original: j__ZN7OALBase7ReleaseEv
// Demangled: OALBase::Release(void)
// attributes: thunk
int __fastcall OALBase::Release(OALBase *this)
{
  return _ZN7OALBase7ReleaseEv(this);
}


// ============================================================

// Address: 0x27ff4c
// Original: _ZN7OALBase7ReleaseEv
// Demangled: OALBase::Release(void)
int __fastcall OALBase::Release(OALBase *this)
{
  int result; // r0
  int v3; // r5
  unsigned int v4; // r9
  void *v5; // r8
  void *v6; // r6

  result = *((_DWORD *)this + 1) - 1;
  *((_DWORD *)this + 1) = result;
  if ( !result )
  {
    OS_MutexObtain((pthread_mutex_t *)trashMutex);
    v3 = dword_6DFD60;
    if ( OALBase::trashCan >= (unsigned int)(dword_6DFD60 + 1) )
    {
      v5 = (void *)dword_6DFD64;
    }
    else
    {
      v4 = 4 * (dword_6DFD60 + 1) / 3u + 3;
      v5 = malloc(4 * v4);
      v6 = (void *)dword_6DFD64;
      if ( dword_6DFD64 )
      {
        memcpy_0(v5, (const void *)dword_6DFD64, 4 * v3);
        free(v6);
        v3 = dword_6DFD60;
      }
      dword_6DFD64 = (int)v5;
      OALBase::trashCan = v4;
    }
    *((_DWORD *)v5 + v3) = this;
    ++dword_6DFD60;
    return j_OS_MutexRelease((pthread_mutex_t *)trashMutex);
  }
  return result;
}


// ============================================================

// Address: 0x280020
// Original: _ZN7OALBaseD2Ev
// Demangled: OALBase::~OALBase()
void __fastcall OALBase::~OALBase(OALBase *this)
{
  *(_DWORD *)this = &off_661FB8;
  --OALBase::livingCount;
}


// ============================================================

// Address: 0x280040
// Original: _ZN7OALBaseD0Ev
// Demangled: OALBase::~OALBase()
void __fastcall OALBase::~OALBase(OALBase *this)
{
  *(_DWORD *)this = &off_661FB8;
  --OALBase::livingCount;
  operator delete(this);
}


// ============================================================
