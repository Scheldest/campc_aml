
// Address: 0x4c2524
// Original: _ZN28CEventAcquaintancePedRespectD0Ev
// Demangled: CEventAcquaintancePedRespect::~CEventAcquaintancePedRespect()
void __fastcall CEventAcquaintancePedRespect::~CEventAcquaintancePedRespect(CEventAcquaintancePedRespect *this)
{
  void *v1; // r0

  CEventAcquaintancePed::~CEventAcquaintancePed(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x4c2534
// Original: _ZNK28CEventAcquaintancePedRespect12GetEventTypeEv
// Demangled: CEventAcquaintancePedRespect::GetEventType(void)
int __fastcall CEventAcquaintancePedRespect::GetEventType(CEventAcquaintancePedRespect *this)
{
  return 39;
}


// ============================================================

// Address: 0x4c2538
// Original: _ZNK28CEventAcquaintancePedRespect16GetEventPriorityEv
// Demangled: CEventAcquaintancePedRespect::GetEventPriority(void)
int __fastcall CEventAcquaintancePedRespect::GetEventPriority(CEventAcquaintancePedRespect *this)
{
  return 23;
}


// ============================================================

// Address: 0x4c253c
// Original: _ZNK28CEventAcquaintancePedRespect13CloneEditableEv
// Demangled: CEventAcquaintancePedRespect::CloneEditable(void)
_DWORD *__fastcall CEventAcquaintancePedRespect::CloneEditable(CPed **this, unsigned int a2)
{
  CEventAcquaintancePed *v3; // r0
  _DWORD *result; // r0

  v3 = (CEventAcquaintancePed *)CEvent::operator new((CEvent *)&dword_14, a2);
  CEventAcquaintancePed::CEventAcquaintancePed(v3, this[4]);
  *result = &off_6690E8;
  return result;
}


// ============================================================
