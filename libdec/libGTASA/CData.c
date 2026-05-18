
// Address: 0x54d58a
// Original: _ZN5CData4LoadEjjPjh
// Demangled: CData::Load(uint,uint,uint *,uchar)
int __fastcall CData::Load(CData *this, char *a2, CFileMgr *a3, unsigned int *a4, unsigned __int8 a5)
{
  unsigned int v9; // r0
  int v10; // r3

  *((_DWORD *)this + 1) = (unsigned int)a2 >> 1;
  v9 = operator new[]((unsigned int)a2 & 0xFFFFFFFE);
  *(_DWORD *)this = v9;
  CFileMgr::Read_old(a3, v9, a2, v10);
  *a4 += (unsigned int)a2;
  return 1;
}


// ============================================================

// Address: 0x54d5c0
// Original: _ZN5CData6UnloadEv
// Demangled: CData::Unload(void)
int __fastcall CData::Unload(CData *this)
{
  void *v2; // r0
  int result; // r0

  v2 = *(void **)this;
  if ( v2 )
  {
    operator delete[](v2);
    *(_DWORD *)this = 0;
  }
  result = 0;
  *((_DWORD *)this + 1) = 0;
  return result;
}


// ============================================================
