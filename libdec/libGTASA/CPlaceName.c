
// Address: 0x195d24
// Original: j__ZN10CPlaceName7ProcessEv
// Demangled: CPlaceName::Process(void)
// attributes: thunk
int __fastcall CPlaceName::Process(CPlaceName *this)
{
  return _ZN10CPlaceName7ProcessEv(this);
}


// ============================================================

// Address: 0x1a0854
// Original: j__ZN10CPlaceName9GetForMapEff
// Demangled: CPlaceName::GetForMap(float,float)
// attributes: thunk
int __fastcall CPlaceName::GetForMap(CPlaceName *this, float a2, float a3)
{
  return _ZN10CPlaceName9GetForMapEff(this, a2, a3);
}


// ============================================================

// Address: 0x4210e8
// Original: _ZN10CPlaceNameC2Ev
// Demangled: CPlaceName::CPlaceName(void)
void __fastcall CPlaceName::CPlaceName(CPlaceName *this)
{
  *((_WORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
}


// ============================================================

// Address: 0x4210f0
// Original: _ZN10CPlaceName4InitEv
// Demangled: CPlaceName::Init(void)
int __fastcall CPlaceName::Init(int this)
{
  *(_WORD *)(this + 4) = 0;
  *(_DWORD *)this = 0;
  return this;
}


// ============================================================

// Address: 0x4210f8
// Original: _ZN10CPlaceName9GetForMapEff
// Demangled: CPlaceName::GetForMap(float,float)
int __fastcall CPlaceName::GetForMap(CPlaceName *this, float a2, float *a3)
{
  float v3; // s16
  int v5; // r0
  CVector *v6; // r1
  float *v7; // r2
  double v8; // d16
  int v9; // r0
  int v10; // r1
  double v11; // d16
  CZone *SmallestZoneForPosition; // r0
  float v14[3]; // [sp+4h] [bp-34h] BYREF
  double v15; // [sp+10h] [bp-28h] BYREF
  float v16; // [sp+18h] [bp-20h]

  v3 = *(float *)&a3;
  v15 = 0.0;
  v16 = 0.0;
  v5 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  if ( v5 )
  {
    if ( *(unsigned __int8 *)(v5 + 1157) << 31 )
    {
      v9 = *(_DWORD *)(v5 + 1424);
      v10 = *(_DWORD *)(v9 + 20);
      a3 = (float *)(v10 + 48);
      if ( !v10 )
        a3 = (float *)(v9 + 4);
      v11 = *(double *)a3;
      v16 = a3[2];
      v15 = v11;
    }
    else
    {
      v6 = *(CVector **)(v5 + 20);
      v7 = (float *)((char *)v6 + 48);
      if ( !v6 )
        v7 = (float *)(v5 + 4);
      v8 = *(double *)v7;
      v16 = v7[2];
      v15 = v8;
      CEntryExitManager::GetPositionRelativeToOutsideWorld((CEntryExitManager *)&v15, v6);
    }
  }
  v14[0] = a2;
  v14[1] = v3;
  v14[2] = v16;
  SmallestZoneForPosition = (CZone *)CTheZones::FindSmallestZoneForPosition((CTheZones *)v14, 0, (unsigned __int8)a3);
  return CZone::GetTranslatedName(SmallestZoneForPosition);
}


// ============================================================

// Address: 0x4211a0
// Original: _ZN10CPlaceName7ProcessEv
// Demangled: CPlaceName::Process(void)
int __fastcall CPlaceName::Process(CPlaceName *this)
{
  return 0;
}


// ============================================================

// Address: 0x421288
// Original: _ZN10CPlaceName7DisplayEv
// Demangled: CPlaceName::Display(void)
int __fastcall CPlaceName::Display(CZone **this, int a2, unsigned __int8 a3)
{
  CZone *v3; // r0
  CHud *TranslatedName; // r0

  v3 = *this;
  if ( v3 )
    TranslatedName = (CHud *)CZone::GetTranslatedName(v3);
  else
    TranslatedName = 0;
  return sub_18A8B8(TranslatedName, 0, a3);
}


// ============================================================

// Address: 0x4212a8
// Original: _ZN10CPlaceName28ProcessAfterFrontEndShutDownEv
// Demangled: CPlaceName::ProcessAfterFrontEndShutDown(void)
int __fastcall CPlaceName::ProcessAfterFrontEndShutDown(int this)
{
  CHud::m_pLastZoneName = 0;
  CHud::m_ZoneState = 0;
  *(_WORD *)(this + 4) = 250;
  return this;
}


// ============================================================
