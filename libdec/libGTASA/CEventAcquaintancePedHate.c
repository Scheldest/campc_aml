
// Address: 0x2fcdd8
// Original: _ZN25CEventAcquaintancePedHateD0Ev
// Demangled: CEventAcquaintancePedHate::~CEventAcquaintancePedHate()
void __fastcall CEventAcquaintancePedHate::~CEventAcquaintancePedHate(CEventAcquaintancePedHate *this)
{
  void *v1; // r0

  CEventAcquaintancePed::~CEventAcquaintancePed(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x2fcde8
// Original: _ZNK25CEventAcquaintancePedHate12GetEventTypeEv
// Demangled: CEventAcquaintancePedHate::GetEventType(void)
int __fastcall CEventAcquaintancePedHate::GetEventType(CEventAcquaintancePedHate *this)
{
  return 36;
}


// ============================================================

// Address: 0x2fcdec
// Original: _ZNK25CEventAcquaintancePedHate16GetEventPriorityEv
// Demangled: CEventAcquaintancePedHate::GetEventPriority(void)
int __fastcall CEventAcquaintancePedHate::GetEventPriority(CEventAcquaintancePedHate *this)
{
  return 26;
}


// ============================================================

// Address: 0x2fce2c
// Original: _ZNK25CEventAcquaintancePedHate13CloneEditableEv
// Demangled: CEventAcquaintancePedHate::CloneEditable(void)
_DWORD *__fastcall CEventAcquaintancePedHate::CloneEditable(CPed **this, unsigned int a2)
{
  CEventAcquaintancePed *v3; // r0
  _DWORD *result; // r0

  v3 = (CEventAcquaintancePed *)CEvent::operator new((CEvent *)&dword_14, a2);
  CEventAcquaintancePed::CEventAcquaintancePed(v3, this[4]);
  *result = &off_6653A4;
  return result;
}


// ============================================================
