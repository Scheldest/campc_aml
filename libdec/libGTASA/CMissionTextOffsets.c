
// Address: 0x54d5d8
// Original: _ZN19CMissionTextOffsets4LoadEjjPji
// Demangled: CMissionTextOffsets::Load(uint,uint,uint *,int)
int __fastcall CMissionTextOffsets::Load(CMissionTextOffsets *this, unsigned int a2, CFileMgr *a3, char *a4, int a5)
{
  unsigned int v7; // r6
  int result; // r0

  v7 = a2 / 0xC;
  CFileMgr::Read_old(a3, (unsigned int)this, (char *)(12 * v7), 12 * v7);
  *(_DWORD *)a4 += 12 * v7;
  result = 0;
  while ( v7 > (unsigned __int16)result++ )
    ;
  *((_WORD *)this + 1200) = v7;
  return result;
}


// ============================================================
