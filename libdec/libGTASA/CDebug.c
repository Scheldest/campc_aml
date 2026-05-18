
// Address: 0x1977ec
// Original: j__ZN6CDebug8DebugLogEPKcz
// Demangled: CDebug::DebugLog(char const*,...)
// attributes: thunk
int CDebug::DebugLog(CDebug *this, const char *a2, ...)
{
  return _ZN6CDebug8DebugLogEPKcz(this, a2);
}


// ============================================================

// Address: 0x1993b4
// Original: j__ZN6CDebug12DebugAddTextEPKc
// Demangled: CDebug::DebugAddText(char const*)
// attributes: thunk
int __fastcall CDebug::DebugAddText(CDebug *this, const char *a2)
{
  return _ZN6CDebug12DebugAddTextEPKc(this, a2);
}


// ============================================================

// Address: 0x19bd14
// Original: j__ZN6CDebug22DebugDisplayTextBufferEv
// Demangled: CDebug::DebugDisplayTextBuffer(void)
// attributes: thunk
int __fastcall CDebug::DebugDisplayTextBuffer(CDebug *this)
{
  return _ZN6CDebug22DebugDisplayTextBufferEv(this);
}


// ============================================================

// Address: 0x19f04c
// Original: j__ZN6CDebug19DebugInitTextBufferEv
// Demangled: CDebug::DebugInitTextBuffer(void)
// attributes: thunk
int __fastcall CDebug::DebugInitTextBuffer(CDebug *this)
{
  return _ZN6CDebug19DebugInitTextBufferEv(this);
}


// ============================================================

// Address: 0x2fc2ec
// Original: _ZN6CDebug8DebugLogEPKcz
// Demangled: CDebug::DebugLog(char const*,...)
void __fastcall CDebug::DebugLog(CDebug *this, const char *a2)
{
  ;
}


// ============================================================

// Address: 0x3eab08
// Original: _ZN6CDebug19DebugInitTextBufferEv
// Demangled: CDebug::DebugInitTextBuffer(void)
__int16 *__fastcall CDebug::DebugInitTextBuffer(CDebug *this)
{
  __int16 *result; // r0

  result = &CDebug::ms_nCurrentTextLine;
  CDebug::ms_nCurrentTextLine = 0;
  return result;
}


// ============================================================

// Address: 0x3eab18
// Original: _ZN6CDebug12DebugAddTextEPKc
// Demangled: CDebug::DebugAddText(char const*)
void __fastcall CDebug::DebugAddText(CDebug *this, const char *a2)
{
  ;
}


// ============================================================

// Address: 0x3eab1a
// Original: _ZN6CDebug22DebugDisplayTextBufferEv
// Demangled: CDebug::DebugDisplayTextBuffer(void)
void __fastcall CDebug::DebugDisplayTextBuffer(CDebug *this)
{
  ;
}


// ============================================================
