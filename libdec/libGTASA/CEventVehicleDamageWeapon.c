
// Address: 0x4ea782
// Original: _ZN25CEventVehicleDamageWeaponD0Ev
// Demangled: CEventVehicleDamageWeapon::~CEventVehicleDamageWeapon()
void __fastcall CEventVehicleDamageWeapon::~CEventVehicleDamageWeapon(CEventVehicleDamageWeapon *this)
{
  void *v1; // r0

  CEventVehicleDamage::~CEventVehicleDamage(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x4ea792
// Original: _ZNK25CEventVehicleDamageWeapon12GetEventTypeEv
// Demangled: CEventVehicleDamageWeapon::GetEventType(void)
int __fastcall CEventVehicleDamageWeapon::GetEventType(CEventVehicleDamageWeapon *this)
{
  return 41;
}


// ============================================================

// Address: 0x4ea798
// Original: _ZNK25CEventVehicleDamageWeapon13CloneEditableEv
// Demangled: CEventVehicleDamageWeapon::CloneEditable(void)
_DWORD *__fastcall CEventVehicleDamageWeapon::CloneEditable(CEntity **this, unsigned int a2)
{
  int v3; // r0
  _DWORD *result; // r0

  v3 = CEvent::operator new((CEvent *)&dword_1C, a2);
  result = (_DWORD *)CEventVehicleDamage::CEventVehicleDamage(v3, this[4], this[5]);
  *result = &off_669BBC;
  return result;
}


// ============================================================
