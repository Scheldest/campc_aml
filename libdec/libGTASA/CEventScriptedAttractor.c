
// Address: 0x4c24e8
// Original: _ZN23CEventScriptedAttractorD0Ev
// Demangled: CEventScriptedAttractor::~CEventScriptedAttractor()
void __fastcall CEventScriptedAttractor::~CEventScriptedAttractor(CEventScriptedAttractor *this)
{
  void *v1; // r0

  CEventAttractor::~CEventAttractor(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x4c24f8
// Original: _ZNK23CEventScriptedAttractor12GetEventTypeEv
// Demangled: CEventScriptedAttractor::GetEventType(void)
int __fastcall CEventScriptedAttractor::GetEventType(CEventScriptedAttractor *this)
{
  return 48;
}


// ============================================================

// Address: 0x4c24fc
// Original: _ZNK23CEventScriptedAttractor13CloneEditableEv
// Demangled: CEventScriptedAttractor::CloneEditable(void)
_DWORD *__fastcall CEventScriptedAttractor::CloneEditable(CEventScriptedAttractor *this, unsigned int a2)
{
  int v3; // r0
  _DWORD *result; // r0

  v3 = CEvent::operator new((CEvent *)&dword_1C, a2);
  result = (_DWORD *)CEventAttractor::CEventAttractor(v3, *((_DWORD *)this + 4), *((CEntity **)this + 5));
  *result = &off_66908C;
  return result;
}


// ============================================================
