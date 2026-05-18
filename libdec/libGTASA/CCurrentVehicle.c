
// Address: 0x4212c8
// Original: _ZN15CCurrentVehicleC2Ev
// Demangled: CCurrentVehicle::CCurrentVehicle(void)
void __fastcall CCurrentVehicle::CCurrentVehicle(CCurrentVehicle *this)
{
  *(_DWORD *)this = 0;
}


// ============================================================

// Address: 0x4212ce
// Original: _ZN15CCurrentVehicle4InitEv
// Demangled: CCurrentVehicle::Init(void)
_DWORD *__fastcall CCurrentVehicle::Init(_DWORD *this)
{
  *this = 0;
  return this;
}


// ============================================================

// Address: 0x4212d4
// Original: _ZN15CCurrentVehicle7ProcessEv
// Demangled: CCurrentVehicle::Process(void)
int __fastcall CCurrentVehicle::Process(CCurrentVehicle *this)
{
  int v1; // r1
  int v2; // r1
  CHud *v3; // r0

  v1 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  if ( !(*(unsigned __int8 *)(v1 + 1157) << 31) )
  {
    v2 = 0;
    *(_DWORD *)this = 0;
LABEL_6:
    v3 = 0;
    return sub_18E4AC(v3, (unsigned __int16 *)v2);
  }
  v2 = *(_DWORD *)(v1 + 1424);
  *(_DWORD *)this = v2;
  if ( !v2 )
    goto LABEL_6;
  v3 = (CHud *)CText::Get(
                 (CText *)TheText,
                 (CKeyGen *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v2 + 38)]) + 74));
  return sub_18E4AC(v3, (unsigned __int16 *)v2);
}


// ============================================================

// Address: 0x421340
// Original: _ZN15CCurrentVehicle7DisplayEv
// Demangled: CCurrentVehicle::Display(void)
int __fastcall CCurrentVehicle::Display(CCurrentVehicle *this, unsigned __int16 *a2)
{
  int v2; // r0
  CHud *v3; // r0

  v2 = *(_DWORD *)this;
  if ( v2 )
    v3 = (CHud *)CText::Get(
                   (CText *)TheText,
                   (CKeyGen *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v2 + 38)]) + 74));
  else
    v3 = 0;
  return sub_18E4AC(v3, a2);
}


// ============================================================
