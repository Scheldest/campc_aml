
// Address: 0x4c26f2
// Original: _ZN28CEventPlayerCollisionWithPedD0Ev
// Demangled: CEventPlayerCollisionWithPed::~CEventPlayerCollisionWithPed()
void __fastcall CEventPlayerCollisionWithPed::~CEventPlayerCollisionWithPed(CEventPlayerCollisionWithPed *this)
{
  void *v1; // r0

  CEventPedCollisionWithPed::~CEventPedCollisionWithPed(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x4c2702
// Original: _ZNK28CEventPlayerCollisionWithPed12GetEventTypeEv
// Demangled: CEventPlayerCollisionWithPed::GetEventType(void)
int __fastcall CEventPlayerCollisionWithPed::GetEventType(CEventPlayerCollisionWithPed *this)
{
  return 4;
}


// ============================================================

// Address: 0x4c2708
// Original: _ZNK28CEventPlayerCollisionWithPed5CloneEv
// Demangled: CEventPlayerCollisionWithPed::Clone(void)
_DWORD *__fastcall CEventPlayerCollisionWithPed::Clone(CEventPlayerCollisionWithPed *this, unsigned int a2)
{
  CEventPedCollisionWithPed *v3; // r0
  _DWORD *result; // r0

  v3 = (CEventPedCollisionWithPed *)CEvent::operator new((CEvent *)&word_30, a2);
  CEventPedCollisionWithPed::CEventPedCollisionWithPed(
    v3,
    *((_WORD *)this + 5),
    *((float *)this + 3),
    *((const CPed **)this + 4),
    (CEventPlayerCollisionWithPed *)((char *)this + 20),
    (CEventPlayerCollisionWithPed *)((char *)this + 32),
    *((__int16 *)this + 22),
    *((__int16 *)this + 23));
  *result = &off_6691D8;
  return result;
}


// ============================================================
