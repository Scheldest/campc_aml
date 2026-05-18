
// Address: 0x18ad68
// Original: j__ZN23CAEPedWeaponAudioEntity7ServiceEv
// Demangled: CAEPedWeaponAudioEntity::Service(void)
// attributes: thunk
int __fastcall CAEPedWeaponAudioEntity::Service(CAEPedWeaponAudioEntity *this)
{
  return _ZN23CAEPedWeaponAudioEntity7ServiceEv(this);
}


// ============================================================

// Address: 0x194bd0
// Original: j__ZN23CAEPedWeaponAudioEntity13AddAudioEventEi
// Demangled: CAEPedWeaponAudioEntity::AddAudioEvent(int)
// attributes: thunk
int __fastcall CAEPedWeaponAudioEntity::AddAudioEvent(CAEPedWeaponAudioEntity *this, int a2)
{
  return _ZN23CAEPedWeaponAudioEntity13AddAudioEventEi(this, a2);
}


// ============================================================

// Address: 0x196db0
// Original: j__ZN23CAEPedWeaponAudioEntity9TerminateEv
// Demangled: CAEPedWeaponAudioEntity::Terminate(void)
// attributes: thunk
int __fastcall CAEPedWeaponAudioEntity::Terminate(CAEPedWeaponAudioEntity *this)
{
  return _ZN23CAEPedWeaponAudioEntity9TerminateEv(this);
}


// ============================================================

// Address: 0x19ee4c
// Original: j__ZN23CAEPedWeaponAudioEntity10InitialiseEP7CEntity
// Demangled: CAEPedWeaponAudioEntity::Initialise(CEntity *)
// attributes: thunk
int __fastcall CAEPedWeaponAudioEntity::Initialise(CAEPedWeaponAudioEntity *this, CEntity *a2)
{
  return _ZN23CAEPedWeaponAudioEntity10InitialiseEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x39de60
// Original: _ZN23CAEPedWeaponAudioEntity13AddAudioEventEi
// Demangled: CAEPedWeaponAudioEntity::AddAudioEvent(int)
int __fastcall CAEPedWeaponAudioEntity::AddAudioEvent(int this, int a2, char *a3)
{
  bool v3; // zf

  v3 = *(_BYTE *)(this + 160) == 0;
  if ( *(_BYTE *)(this + 160) )
  {
    a3 = *(char **)(this + 164);
    v3 = a3 == 0;
  }
  if ( !v3 )
  {
    if ( (unsigned int)(a2 - 145) <= 0xB )
      JUMPOUT(0x39DE80);
    switch ( a2 )
    {
      case 145:
      case 150:
      case 151:
        this = sub_18B954((CAEWeaponAudioEntity *)this, *(_DWORD *)&a3[28 * a3[1820] + 1444], (CPhysical *)a3, a2);
        break;
      case 146:
      case 147:
        this = sub_19B8F4();
        break;
      case 148:
      case 149:
      case 152:
        return this;
      case 153:
      case 154:
      case 155:
        this = j_CAEWeaponAudioEntity::ReportChainsawEvent((CAEWeaponAudioEntity *)this, (CPhysical *)a3, a2);
        break;
      case 156:
        this = sub_1A04B0();
        break;
    }
  }
  return this;
}


// ============================================================

// Address: 0x39ded8
// Original: _ZN23CAEPedWeaponAudioEntity10InitialiseEP7CEntity
// Demangled: CAEPedWeaponAudioEntity::Initialise(CEntity *)
int __fastcall CAEPedWeaponAudioEntity::Initialise(CAEPedWeaponAudioEntity *this, CEntity *a2)
{
  int result; // r0

  *((_DWORD *)this + 41) = a2;
  CAEWeaponAudioEntity::Initialise(this);
  result = 1;
  *((_BYTE *)this + 160) = 1;
  return result;
}


// ============================================================

// Address: 0x39deee
// Original: _ZN23CAEPedWeaponAudioEntity9TerminateEv
// Demangled: CAEPedWeaponAudioEntity::Terminate(void)
int __fastcall CAEPedWeaponAudioEntity::Terminate(CAEWeaponAudioEntity *this)
{
  *((_DWORD *)this + 41) = 0;
  *((_BYTE *)this + 160) = 0;
  return sub_18F62C(this);
}


// ============================================================

// Address: 0x39defc
// Original: _ZN23CAEPedWeaponAudioEntity7ServiceEv
// Demangled: CAEPedWeaponAudioEntity::Service(void)
int __fastcall CAEPedWeaponAudioEntity::Service(CAEPedWeaponAudioEntity *this)
{
  int v2; // r0
  char *v3; // r1

  v2 = *((_DWORD *)this + 41);
  if ( !v2 )
    return sub_19316C(this);
  if ( *(unsigned __int8 *)(v2 + 1157) << 31 )
    return sub_19316C(this);
  if ( CPedIntelligence::GetTaskSwim(*(CPedIntelligence **)(v2 + 1088)) )
    return sub_19316C(this);
  v3 = (char *)*((_DWORD *)this + 41);
  if ( *(_DWORD *)&v3[28 * v3[1820] + 1444] != 37 )
    return sub_19316C(this);
  else
    return j_CAEWeaponAudioEntity::PlayFlameThrowerIdleGasLoop(this, (CPhysical *)v3);
}


// ============================================================
