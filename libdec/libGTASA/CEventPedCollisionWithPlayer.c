
// Address: 0x4c2744
// Original: _ZN28CEventPedCollisionWithPlayerD0Ev
// Demangled: CEventPedCollisionWithPlayer::~CEventPedCollisionWithPlayer()
void __fastcall CEventPedCollisionWithPlayer::~CEventPedCollisionWithPlayer(CEventPedCollisionWithPlayer *this)
{
  void *v1; // r0

  CEventPedCollisionWithPed::~CEventPedCollisionWithPed(this);
  sub_197900(v1);
}


// ============================================================

// Address: 0x4c2754
// Original: _ZNK28CEventPedCollisionWithPlayer12GetEventTypeEv
// Demangled: CEventPedCollisionWithPlayer::GetEventType(void)
int __fastcall CEventPedCollisionWithPlayer::GetEventType(CEventPedCollisionWithPlayer *this)
{
  return 3;
}


// ============================================================

// Address: 0x4c2758
// Original: _ZNK28CEventPedCollisionWithPlayer5CloneEv
// Demangled: CEventPedCollisionWithPlayer::Clone(void)
_DWORD *__fastcall CEventPedCollisionWithPlayer::Clone(CEventPedCollisionWithPlayer *this, unsigned int a2)
{
  CEventPedCollisionWithPed *v3; // r0
  _DWORD *result; // r0

  v3 = (CEventPedCollisionWithPed *)CEvent::operator new((CEvent *)&word_30, a2);
  CEventPedCollisionWithPed::CEventPedCollisionWithPed(
    v3,
    *((_WORD *)this + 5),
    *((float *)this + 3),
    *((const CPed **)this + 4),
    (CEventPedCollisionWithPlayer *)((char *)this + 20),
    (CEventPedCollisionWithPlayer *)((char *)this + 32),
    *((__int16 *)this + 22),
    *((__int16 *)this + 23));
  *result = &off_669224;
  return result;
}


// ============================================================
