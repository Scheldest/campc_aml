
// Address: 0x19748c
// Original: j__ZN12CEventSource22ComputeEventSourceTypeERK6CEventRK4CPed
// Demangled: CEventSource::ComputeEventSourceType(CEvent const&,CPed const&)
// attributes: thunk
int __fastcall CEventSource::ComputeEventSourceType(CEventSource *this, const CEvent *a2, const CPed *a3)
{
  return _ZN12CEventSource22ComputeEventSourceTypeERK6CEventRK4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x37b170
// Original: _ZN12CEventSource22ComputeEventSourceTypeERK6CEventRK4CPed
// Demangled: CEventSource::ComputeEventSourceType(CEvent const&,CPed const&)
int __fastcall CEventSource::ComputeEventSourceType(CEventSource *this, const CEvent *a2, const CPed *a3)
{
  const CPed *v4; // r0
  const CPed *v5; // r4
  CPedIntelligence *v6; // r5

  v4 = (const CPed *)(*(int (__fastcall **)(CEventSource *))(*(_DWORD *)this + 44))(this);
  v5 = v4;
  if ( !v4 || (*((_BYTE *)v4 + 58) & 7) != 3 )
    return 0;
  v6 = (CPedIntelligence *)*((_DWORD *)a2 + 272);
  if ( CPedIntelligence::IsThreatenedBy(v6, v4) )
    return 3;
  if ( CPedIntelligence::IsFriendlyWith(v6, v5) )
    return 2;
  return CPed::IsPlayer(v5);
}


// ============================================================
