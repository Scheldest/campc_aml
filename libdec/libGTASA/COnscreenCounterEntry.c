
// Address: 0x314c1c
// Original: _ZN21COnscreenCounterEntry24ProcessForDisplayCounterEt
// Demangled: COnscreenCounterEntry::ProcessForDisplayCounter(ushort)
_DWORD *__fastcall COnscreenCounterEntry::ProcessForDisplayCounter(_DWORD *this, unsigned int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)((char *)&CTheScripts::ScriptSpace + *this);
  if ( v2 <= 0 )
    v2 = 0;
  if ( a2 < 2 )
    return (_DWORD *)sub_5E6BC0(this + 5, (const char *)&dword_314C58, v2);
  if ( a2 == 2 )
    return (_DWORD *)sub_5E6BC0(this + 5, "%d / %d", v2);
  return this;
}


// ============================================================

// Address: 0x314c64
// Original: _ZN21COnscreenCounterEntry11SetColourIDEh
// Demangled: COnscreenCounterEntry::SetColourID(uchar)
int __fastcall COnscreenCounterEntry::SetColourID(int this, unsigned __int8 a2)
{
  *(_BYTE *)(this + 64) = a2;
  return this;
}


// ============================================================
