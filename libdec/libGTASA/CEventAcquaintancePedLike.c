
// Address: 0x4c2560
// Original: _ZN25CEventAcquaintancePedLikeD0Ev
// Demangled: CEventAcquaintancePedLike::~CEventAcquaintancePedLike()
void __fastcall CEventAcquaintancePedLike::~CEventAcquaintancePedLike(CEventAcquaintancePedLike *this)
{
  void *v1; // r0

  CEventAcquaintancePed::~CEventAcquaintancePed(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x4c2570
// Original: _ZNK25CEventAcquaintancePedLike12GetEventTypeEv
// Demangled: CEventAcquaintancePedLike::GetEventType(void)
int __fastcall CEventAcquaintancePedLike::GetEventType(CEventAcquaintancePedLike *this)
{
  return 38;
}


// ============================================================

// Address: 0x4c2574
// Original: _ZNK25CEventAcquaintancePedLike16GetEventPriorityEv
// Demangled: CEventAcquaintancePedLike::GetEventPriority(void)
int __fastcall CEventAcquaintancePedLike::GetEventPriority(CEventAcquaintancePedLike *this)
{
  return 22;
}


// ============================================================

// Address: 0x4c2578
// Original: _ZNK25CEventAcquaintancePedLike13CloneEditableEv
// Demangled: CEventAcquaintancePedLike::CloneEditable(void)
_DWORD *__fastcall CEventAcquaintancePedLike::CloneEditable(CPed **this, unsigned int a2)
{
  CEventAcquaintancePed *v3; // r0
  _DWORD *result; // r0

  v3 = (CEventAcquaintancePed *)CEvent::operator new((CEvent *)&dword_14, a2);
  CEventAcquaintancePed::CEventAcquaintancePed(v3, this[4]);
  *result = &off_669138;
  return result;
}


// ============================================================
