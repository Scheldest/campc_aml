
// Address: 0x56039c
// Original: _ZN28CEventVehicleDamageCollisionD0Ev
// Demangled: CEventVehicleDamageCollision::~CEventVehicleDamageCollision()
void __fastcall CEventVehicleDamageCollision::~CEventVehicleDamageCollision(CEventVehicleDamageCollision *this)
{
  void *v1; // r0

  CEventVehicleDamage::~CEventVehicleDamage(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x5603ac
// Original: _ZNK28CEventVehicleDamageCollision12GetEventTypeEv
// Demangled: CEventVehicleDamageCollision::GetEventType(void)
int __fastcall CEventVehicleDamageCollision::GetEventType(CEventVehicleDamageCollision *this)
{
  return 73;
}


// ============================================================

// Address: 0x5603b0
// Original: _ZNK28CEventVehicleDamageCollision13CloneEditableEv
// Demangled: CEventVehicleDamageCollision::CloneEditable(void)
_DWORD *__fastcall CEventVehicleDamageCollision::CloneEditable(CEntity **this, unsigned int a2)
{
  int v3; // r0
  _DWORD *result; // r0

  v3 = CEvent::operator new((CEvent *)&dword_1C, a2);
  result = (_DWORD *)CEventVehicleDamage::CEventVehicleDamage(v3, this[4], this[5]);
  *result = &off_66D7B0;
  return result;
}


// ============================================================
