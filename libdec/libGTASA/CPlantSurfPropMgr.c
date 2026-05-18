
// Address: 0x195a48
// Original: j__ZN17CPlantSurfPropMgr10InitialiseEv
// Demangled: CPlantSurfPropMgr::Initialise(void)
// attributes: thunk
int __fastcall CPlantSurfPropMgr::Initialise(CPlantSurfPropMgr *this)
{
  return _ZN17CPlantSurfPropMgr10InitialiseEv(this);
}


// ============================================================

// Address: 0x19e7b0
// Original: j__ZN17CPlantSurfPropMgr17GetSurfPropertiesEt
// Demangled: CPlantSurfPropMgr::GetSurfProperties(ushort)
// attributes: thunk
int __fastcall CPlantSurfPropMgr::GetSurfProperties(CPlantSurfPropMgr *this, unsigned __int16 a2)
{
  return _ZN17CPlantSurfPropMgr17GetSurfPropertiesEt(this, a2);
}


// ============================================================

// Address: 0x2cf1d8
// Original: _ZN17CPlantSurfPropMgr10InitialiseEv
// Demangled: CPlantSurfPropMgr::Initialise(void)
int __fastcall CPlantSurfPropMgr::Initialise(CPlantSurfPropMgr *this)
{
  int v1; // r5
  _WORD *v2; // r6
  CRGBA *v3; // r0
  _QWORD *v4; // r1
  CRGBA *v5; // r0
  _QWORD *v6; // r1
  CRGBA *v7; // r0
  int v9; // [sp+4h] [bp-2Ch] BYREF

  CPlantSurfPropMgr::m_countSurfPropsAllocated = 0;
  memset(&CPlantSurfPropMgr::m_SurfPropPtrTab, 0, 0x2C8u);
  v1 = 57;
  v2 = &unk_A1DFE0;
  v3 = (CRGBA *)&v9;
  do
  {
    *(v2 - 50) = -1;
    *(v2 - 52) = 0;
    *(v2 - 49) = 0;
    CRGBA::CRGBA(v3, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    *((_DWORD *)v2 - 24) = v9;
    v4 = v2 - 40;
    *v4 = 0LL;
    v4[1] = 0LL;
    *(v2 - 46) = 255;
    *((_DWORD *)v2 - 22) = 1065353216;
    *((_DWORD *)v2 - 21) = 1065353216;
    *((_DWORD *)v2 - 16) = 0;
    *(v2 - 30) = -1;
    *(v2 - 29) = 0;
    CRGBA::CRGBA(v5, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    *((_DWORD *)v2 - 14) = v9;
    v6 = v2 - 20;
    *v6 = 0LL;
    v6[1] = 0LL;
    *(v2 - 26) = 255;
    *((_DWORD *)v2 - 12) = 1065353216;
    *((_DWORD *)v2 - 11) = 1065353216;
    *((_DWORD *)v2 - 6) = 0;
    *(v2 - 10) = -1;
    *(v2 - 9) = 0;
    CRGBA::CRGBA(v7, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    --v1;
    *((_DWORD *)v2 - 4) = v9;
    *(v2 - 6) = 255;
    *((_DWORD *)v2 - 2) = 1065353216;
    *((_DWORD *)v2 - 1) = 1065353216;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 4) = 0;
    v2 += 62;
  }
  while ( v1 );
  return 1;
}


// ============================================================

// Address: 0x2cf2d4
// Original: _ZN17CPlantSurfPropMgr19AllocSurfPropertiesEth
// Demangled: CPlantSurfPropMgr::AllocSurfProperties(ushort,uchar)
__int16 *__fastcall CPlantSurfPropMgr::AllocSurfProperties(CPlantSurfPropMgr *this, int a2, unsigned __int8 a3)
{
  int v4; // r1
  __int16 *v5; // r1

  if ( a2 )
  {
    CPlantSurfPropMgr::m_countSurfPropsAllocated = 0;
    return 0;
  }
  else
  {
    v4 = CPlantSurfPropMgr::m_countSurfPropsAllocated;
    if ( (unsigned int)CPlantSurfPropMgr::m_countSurfPropsAllocated <= 0x38 )
    {
      ++CPlantSurfPropMgr::m_countSurfPropsAllocated;
      v5 = &CPlantSurfPropMgr::m_SurfPropTab[62 * v4];
      CPlantSurfPropMgr::m_SurfPropPtrTab[(_DWORD)this] = v5;
      return v5;
    }
    else
    {
      return 0;
    }
  }
}


// ============================================================

// Address: 0x2cf340
// Original: _ZN17CPlantSurfPropMgr13LoadPlantsDatEPKc
// Demangled: CPlantSurfPropMgr::LoadPlantsDat(char const*)
int __fastcall CPlantSurfPropMgr::LoadPlantsDat(CPlantSurfPropMgr *this, const char *a2)
{
  return 1;
}


// ============================================================

// Address: 0x59c4f8
// Original: _ZN17CPlantSurfPropMgrC2Ev
// Demangled: CPlantSurfPropMgr::CPlantSurfPropMgr(void)
void __fastcall CPlantSurfPropMgr::CPlantSurfPropMgr(CPlantSurfPropMgr *this)
{
  ;
}


// ============================================================

// Address: 0x59c4fa
// Original: _ZN17CPlantSurfPropMgrD2Ev
// Demangled: CPlantSurfPropMgr::~CPlantSurfPropMgr()
void __fastcall CPlantSurfPropMgr::~CPlantSurfPropMgr(CPlantSurfPropMgr *this)
{
  ;
}


// ============================================================

// Address: 0x59c4fc
// Original: _ZN17CPlantSurfPropMgr8ShutdownEv
// Demangled: CPlantSurfPropMgr::Shutdown(void)
void __fastcall CPlantSurfPropMgr::Shutdown(CPlantSurfPropMgr *this)
{
  ;
}


// ============================================================

// Address: 0x59c500
// Original: _ZN17CPlantSurfPropMgr17GetSurfPropertiesEt
// Demangled: CPlantSurfPropMgr::GetSurfProperties(ushort)
int __fastcall CPlantSurfPropMgr::GetSurfProperties(unsigned int this, unsigned __int16 a2)
{
  if ( this <= 0xB1 )
    return CPlantSurfPropMgr::m_SurfPropPtrTab[this];
  else
    return 0;
}


// ============================================================
