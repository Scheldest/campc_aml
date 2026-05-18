
// Address: 0x192354
// Original: j__ZN5CZone17GetTranslatedNameEv
// Demangled: CZone::GetTranslatedName(void)
// attributes: thunk
int __fastcall CZone::GetTranslatedName(CZone *this)
{
  return _ZN5CZone17GetTranslatedNameEv(this);
}


// ============================================================

// Address: 0x42cd00
// Original: _ZN5CZone17GetTranslatedNameEv
// Demangled: CZone::GetTranslatedName(void)
int __fastcall CZone::GetTranslatedName(CZone *this)
{
  return j_CText::Get((CText *)TheText, (CZone *)((char *)this + 8));
}


// ============================================================
