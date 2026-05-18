
// Address: 0x4ca788
// Original: _ZN32CEventPlayerCommandToGroupGatherD0Ev
// Demangled: CEventPlayerCommandToGroupGather::~CEventPlayerCommandToGroupGather()
void __fastcall CEventPlayerCommandToGroupGather::~CEventPlayerCommandToGroupGather(
        CEventPlayerCommandToGroupGather *this)
{
  void *v1; // r0

  CEventPlayerCommandToGroup::~CEventPlayerCommandToGroup(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x4ca798
// Original: _ZNK32CEventPlayerCommandToGroupGather12GetEventTypeEv
// Demangled: CEventPlayerCommandToGroupGather::GetEventType(void)
int __fastcall CEventPlayerCommandToGroupGather::GetEventType(CEventPlayerCommandToGroupGather *this)
{
  return 76;
}


// ============================================================

// Address: 0x4ca79c
// Original: _ZNK32CEventPlayerCommandToGroupGather16GetEventPriorityEv
// Demangled: CEventPlayerCommandToGroupGather::GetEventPriority(void)
int __fastcall CEventPlayerCommandToGroupGather::GetEventPriority(CEventPlayerCommandToGroupGather *this)
{
  return 45;
}


// ============================================================

// Address: 0x4ca7a0
// Original: _ZNK32CEventPlayerCommandToGroupGather13CloneEditableEv
// Demangled: CEventPlayerCommandToGroupGather::CloneEditable(void)
_DWORD *__fastcall CEventPlayerCommandToGroupGather::CloneEditable(CPed **this, unsigned int a2)
{
  CEventPlayerCommandToGroup *v3; // r0
  _DWORD *result; // r0

  v3 = (CEventPlayerCommandToGroup *)CEvent::operator new((CEvent *)&off_18, a2);
  CEventPlayerCommandToGroup::CEventPlayerCommandToGroup(v3, 2, this[5]);
  *result = &off_669394;
  return result;
}


// ============================================================
