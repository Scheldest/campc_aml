
// Address: 0x19b428
// Original: j__ZN12CCivilianPedC2E8ePedTypej
// Demangled: CCivilianPed::CCivilianPed(ePedType,uint)
// attributes: thunk
int CCivilianPed::CCivilianPed()
{
  return _ZN12CCivilianPedC2E8ePedTypej();
}


// ============================================================

// Address: 0x49e53c
// Original: _ZN12CCivilianPedC2E8ePedTypej
// Demangled: CCivilianPed::CCivilianPed(ePedType,uint)
int __fastcall CCivilianPed::CCivilianPed(int a1, unsigned int a2, unsigned int a3)
{
  CPed::CPed((CPed *)a1, a2);
  *(_DWORD *)a1 = &off_668AA4;
  CPed::SetModelIndex((CPed *)a1, a3);
  CAEPedSpeechAudioEntity::Initialise((CAEPedSpeechAudioEntity *)(a1 + 664), (CEntity *)a1);
  return a1;
}


// ============================================================

// Address: 0x49e56c
// Original: _ZN12CCivilianPedD2Ev
// Demangled: CCivilianPed::~CCivilianPed()
// attributes: thunk
void __fastcall CCivilianPed::~CCivilianPed(CCivilianPed *this)
{
  j_CPed::~CPed(this);
}


// ============================================================

// Address: 0x49e570
// Original: _ZN12CCivilianPedD0Ev
// Demangled: CCivilianPed::~CCivilianPed()
void __fastcall CCivilianPed::~CCivilianPed(CCivilianPed *this)
{
  void *v1; // r0

  CPed::~CPed(this);
  sub_19B910(v1);
}


// ============================================================

// Address: 0x49e580
// Original: _ZN12CCivilianPed14ProcessControlEv
// Demangled: CCivilianPed::ProcessControl(void)
int __fastcall CCivilianPed::ProcessControl(CCivilianPed *this)
{
  int result; // r0

  result = *((unsigned __int8 *)this + 1096);
  if ( result != 3 )
  {
    CPed::ProcessControl(this);
    result = *((unsigned __int8 *)this + 28) << 25;
    if ( (*((_BYTE *)this + 28) & 0x40) == 0 )
    {
      result = *((_DWORD *)this + 275);
      if ( result != 55 )
        return sub_18FD4C((CCivilianPed *)((char *)this + 28 * *((char *)this + 1820) + 1444), this);
    }
  }
  return result;
}


// ============================================================
