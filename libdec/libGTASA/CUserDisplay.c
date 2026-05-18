
// Address: 0x19756c
// Original: j__ZN12CUserDisplay4InitEv
// Demangled: CUserDisplay::Init(void)
// attributes: thunk
int __fastcall CUserDisplay::Init(CUserDisplay *this)
{
  return _ZN12CUserDisplay4InitEv(this);
}


// ============================================================

// Address: 0x19dbec
// Original: j__ZN12CUserDisplay7ProcessEv
// Demangled: CUserDisplay::Process(void)
// attributes: thunk
int __fastcall CUserDisplay::Process(CUserDisplay *this)
{
  return _ZN12CUserDisplay7ProcessEv(this);
}


// ============================================================

// Address: 0x42137c
// Original: _ZN12CUserDisplay4InitEv
// Demangled: CUserDisplay::Init(void)
int *__fastcall CUserDisplay::Init(CUserDisplay *this)
{
  int *result; // r0

  word_96B53C = 0;
  CUserDisplay::PlaceName = 0;
  COnscreenTimer::Init((COnscreenTimer *)&CUserDisplay::OnscnTimer);
  result = &CUserDisplay::CurrentVehicle;
  CUserDisplay::CurrentVehicle = 0;
  return result;
}


// ============================================================

// Address: 0x4213ac
// Original: _ZN12CUserDisplay7ProcessEv
// Demangled: CUserDisplay::Process(void)
int __fastcall CUserDisplay::Process(CUserDisplay *this)
{
  int v1; // r0
  unsigned __int16 *v2; // r1
  int v3; // r0
  CHud *v4; // r0

  COnscreenTimer::Process((COnscreenTimer *)&CUserDisplay::OnscnTimer);
  v1 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  if ( !(*(unsigned __int8 *)(v1 + 1157) << 31) )
  {
    v2 = 0;
    CUserDisplay::CurrentVehicle = 0;
LABEL_6:
    v4 = 0;
    return sub_18E4AC(v4, v2);
  }
  v3 = *(_DWORD *)(v1 + 1424);
  v2 = (unsigned __int16 *)&CUserDisplay::CurrentVehicle;
  CUserDisplay::CurrentVehicle = v3;
  if ( !v3 )
    goto LABEL_6;
  v4 = (CHud *)CText::Get(
                 (CText *)TheText,
                 (CKeyGen *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v3 + 38)]) + 74));
  return sub_18E4AC(v4, v2);
}


// ============================================================
