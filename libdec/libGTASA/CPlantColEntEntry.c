
// Address: 0x18fc04
// Original: j__ZN17CPlantColEntEntry12ReleaseEntryEv
// Demangled: CPlantColEntEntry::ReleaseEntry(void)
// attributes: thunk
int __fastcall CPlantColEntEntry::ReleaseEntry(CEntity **this)
{
  return _ZN17CPlantColEntEntry12ReleaseEntryEv(this);
}


// ============================================================

// Address: 0x192c58
// Original: j__ZN17CPlantColEntEntry8AddEntryEP7CEntity
// Demangled: CPlantColEntEntry::AddEntry(CEntity *)
// attributes: thunk
int __fastcall CPlantColEntEntry::AddEntry(CEntity **this, CEntity *a2)
{
  return _ZN17CPlantColEntEntry8AddEntryEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x2cda50
// Original: _ZN17CPlantColEntEntry12ReleaseEntryEv
// Demangled: CPlantColEntEntry::ReleaseEntry(void)
int __fastcall CPlantColEntEntry::ReleaseEntry(CEntity **this)
{
  CEntity *v2; // r0
  void *v3; // r1
  int v4; // r5
  CPlantLocTri *v5; // r0
  CEntity *v6; // r0
  CEntity *v7; // r1
  CEntity *v8; // r1
  int result; // r0

  v2 = this[1];
  if ( v2 )
  {
    v3 = (void *)*((unsigned __int16 *)this + 4);
    if ( *((_WORD *)this + 4) )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = (CPlantLocTri *)*((_DWORD *)v2 + v4);
        if ( v5 )
        {
          CPlantLocTri::Release(v5);
          v3 = (void *)*((unsigned __int16 *)this + 4);
        }
        if ( ++v4 >= (unsigned __int16)v3 )
          break;
        v2 = this[1];
      }
      v2 = this[1];
    }
    CMemoryMgr::Free(v2, v3);
    *((_WORD *)this + 4) = 0;
    this[1] = 0;
  }
  if ( *this )
  {
    CEntity::CleanUpOldReference(*this, this);
    *this = 0;
  }
  v6 = this[4];
  v7 = this[3];
  if ( v6 )
  {
    if ( v7 )
    {
      *((_DWORD *)v7 + 4) = v6;
      v6 = this[4];
      v8 = this[3];
    }
    else
    {
      v8 = 0;
    }
    *((_DWORD *)v6 + 3) = v8;
  }
  else
  {
    CPlantMgr::m_CloseColEntListHead = (int)this[3];
    if ( v7 )
      *((_DWORD *)v7 + 4) = 0;
  }
  result = CPlantMgr::m_UnusedColEntListHead;
  this[3] = (CEntity *)CPlantMgr::m_UnusedColEntListHead;
  this[4] = 0;
  CPlantMgr::m_UnusedColEntListHead = (int)this;
  if ( result )
    *(_DWORD *)(result + 16) = this;
  return result;
}


// ============================================================

// Address: 0x2ce2fc
// Original: _ZN17CPlantColEntEntry8AddEntryEP7CEntity
// Demangled: CPlantColEntEntry::AddEntry(CEntity *)
CEntity **__fastcall CPlantColEntEntry::AddEntry(CEntity **this, CEntity *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r6
  CEntity **v7; // r5
  CEntity *v8; // r0
  int i; // r0
  CEntity *v10; // r0
  CEntity *v11; // r1
  CEntity *v12; // r1
  int v13; // r0

  *this = a2;
  CEntity::RegisterReference(a2, this);
  v4 = *(_DWORD *)(CEntity::GetColModel(a2) + 44);
  if ( !v4 )
    return 0;
  v6 = *(__int16 *)(v4 + 4);
  v7 = 0;
  if ( v6 >= 1 )
  {
    *((_WORD *)this + 4) = v6;
    v8 = (CEntity *)CMemoryMgr::Malloc(4 * v6, v5);
    this[1] = v8;
    *(_DWORD *)v8 = 0;
    if ( v6 != 1 )
    {
      for ( i = 1; i != v6; ++i )
        *((_DWORD *)this[1] + i) = 0;
    }
    v10 = this[4];
    v11 = this[3];
    if ( v10 )
    {
      if ( v11 )
      {
        *((_DWORD *)v11 + 4) = v10;
        v10 = this[4];
        v12 = this[3];
      }
      else
      {
        v12 = 0;
      }
      *((_DWORD *)v10 + 3) = v12;
    }
    else
    {
      CPlantMgr::m_UnusedColEntListHead = (int)this[3];
      if ( v11 )
        *((_DWORD *)v11 + 4) = 0;
    }
    v7 = this;
    v13 = CPlantMgr::m_CloseColEntListHead;
    this[3] = (CEntity *)CPlantMgr::m_CloseColEntListHead;
    this[4] = 0;
    CPlantMgr::m_CloseColEntListHead = (int)this;
    if ( v13 )
      *(_DWORD *)(v13 + 16) = this;
  }
  return v7;
}


// ============================================================
