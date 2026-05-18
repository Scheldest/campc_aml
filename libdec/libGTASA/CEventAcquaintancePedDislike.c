
// Address: 0x4c259c
// Original: _ZN28CEventAcquaintancePedDislikeD0Ev
// Demangled: CEventAcquaintancePedDislike::~CEventAcquaintancePedDislike()
void __fastcall CEventAcquaintancePedDislike::~CEventAcquaintancePedDislike(CEventAcquaintancePedDislike *this)
{
  void *v1; // r0

  CEventAcquaintancePed::~CEventAcquaintancePed(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x4c25ac
// Original: _ZNK28CEventAcquaintancePedDislike12GetEventTypeEv
// Demangled: CEventAcquaintancePedDislike::GetEventType(void)
int __fastcall CEventAcquaintancePedDislike::GetEventType(CEventAcquaintancePedDislike *this)
{
  return 37;
}


// ============================================================

// Address: 0x4c25b0
// Original: _ZNK28CEventAcquaintancePedDislike16GetEventPriorityEv
// Demangled: CEventAcquaintancePedDislike::GetEventPriority(void)
int __fastcall CEventAcquaintancePedDislike::GetEventPriority(CEventAcquaintancePedDislike *this)
{
  return 24;
}


// ============================================================

// Address: 0x4c25b4
// Original: _ZNK28CEventAcquaintancePedDislike13CloneEditableEv
// Demangled: CEventAcquaintancePedDislike::CloneEditable(void)
_DWORD *__fastcall CEventAcquaintancePedDislike::CloneEditable(CPed **this, unsigned int a2)
{
  CEventAcquaintancePed *v3; // r0
  _DWORD *result; // r0

  v3 = (CEventAcquaintancePed *)CEvent::operator new((CEvent *)&dword_14, a2);
  CEventAcquaintancePed::CEventAcquaintancePed(v3, this[4]);
  *result = &off_669188;
  return result;
}


// ============================================================
