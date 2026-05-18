
// Address: 0x192638
// Original: j__ZN13CEmergencyPedC2Ejj
// Demangled: CEmergencyPed::CEmergencyPed(uint,uint)
// attributes: thunk
void __fastcall CEmergencyPed::CEmergencyPed(CEmergencyPed *this, unsigned int a2, unsigned int a3)
{
  _ZN13CEmergencyPedC2Ejj(this, a2, a3);
}


// ============================================================

// Address: 0x49ed58
// Original: _ZN13CEmergencyPedC2Ejj
// Demangled: CEmergencyPed::CEmergencyPed(uint,uint)
void __fastcall CEmergencyPed::CEmergencyPed(CEmergencyPed *this, unsigned int a2, unsigned int a3)
{
  CPed::CPed(this, a2);
  *(_DWORD *)this = &off_668BF0;
  CPed::SetModelIndex(this, a3);
  CAEPedSpeechAudioEntity::Initialise((CEmergencyPed *)((char *)this + 664), this);
}


// ============================================================

// Address: 0x49ed88
// Original: _ZN13CEmergencyPed14ProcessControlEv
// Demangled: CEmergencyPed::ProcessControl(void)
int __fastcall CEmergencyPed::ProcessControl(CEmergencyPed *this)
{
  int result; // r0

  CPed::ProcessControl(this);
  result = *((unsigned __int8 *)this + 28) << 25;
  if ( (*((_BYTE *)this + 28) & 0x40) == 0 )
  {
    result = *((_DWORD *)this + 275);
    if ( result != 55 )
    {
      CWeapon::Update((CEmergencyPed *)((char *)this + 28 * *((char *)this + 1820) + 1444), 0);
      result = *((_DWORD *)this + 275);
      if ( result != 54 )
        return sub_18FD4C((CEmergencyPed *)((char *)this + 28 * *((char *)this + 1820) + 1444), 0);
    }
  }
  return result;
}


// ============================================================

// Address: 0x49eddc
// Original: _ZN13CEmergencyPed7InRangeEP4CPed
// Demangled: CEmergencyPed::InRange(CPed *)
bool __fastcall CEmergencyPed::InRange(CEmergencyPed *this, CPed *a2)
{
  int v2; // r0
  int v3; // r2
  int v4; // r12
  char *v5; // r3
  int v6; // r1
  float32x2_t v7; // d16
  unsigned __int64 v8; // d1

  v2 = *((_DWORD *)this + 356);
  if ( !v2 )
    return 1;
  v3 = *((_DWORD *)a2 + 5);
  v4 = *(_DWORD *)(v2 + 20);
  v5 = (char *)(v3 + 48);
  if ( !v3 )
    v5 = (char *)a2 + 4;
  v6 = v4 + 48;
  if ( !v4 )
    v6 = v2 + 4;
  v7.n64_u64[0] = vsub_f32(*(float32x2_t *)(v6 + 4), *(float32x2_t *)(v5 + 4)).n64_u64[0];
  v8 = vmul_f32(v7, v7).n64_u64[0];
  return sqrtf(
           (float)((float)((float)(*(float *)v6 - *(float *)v5) * (float)(*(float *)v6 - *(float *)v5)) + *(float *)&v8)
         + *((float *)&v8 + 1)) <= 30.0;
}


// ============================================================

// Address: 0x49ee40
// Original: _ZN13CEmergencyPedD0Ev
// Demangled: CEmergencyPed::~CEmergencyPed()
void __fastcall CEmergencyPed::~CEmergencyPed(CEmergencyPed *this)
{
  void *v1; // r0

  CPed::~CPed(this);
  sub_19B910(v1);
}


// ============================================================
