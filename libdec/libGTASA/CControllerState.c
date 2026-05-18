
// Address: 0x19f980
// Original: j__ZN16CControllerState13CheckForInputEv
// Demangled: CControllerState::CheckForInput(void)
// attributes: thunk
int __fastcall CControllerState::CheckForInput(CControllerState *this)
{
  return _ZN16CControllerState13CheckForInputEv(this);
}


// ============================================================

// Address: 0x3f8240
// Original: _ZN16CControllerState5ClearEv
// Demangled: CControllerState::Clear(void)
_QWORD *__fastcall CControllerState::Clear(CControllerState *this)
{
  _QWORD *result; // r0

  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  result = (_QWORD *)((char *)this + 16);
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x3f8256
// Original: _ZN16CControllerState13CheckForInputEv
// Demangled: CControllerState::CheckForInput(void)
bool __fastcall CControllerState::CheckForInput(CControllerState *this)
{
  bool v1; // zf
  bool v3; // zf
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  bool v9; // zf
  bool v10; // zf

  if ( *((_WORD *)this + 2) )
    return 1;
  v1 = *((unsigned __int16 *)this + 3) == 0;
  if ( !*((_WORD *)this + 3) )
    v1 = *(unsigned __int16 *)this == 0;
  if ( !v1 )
    return 1;
  v3 = *((unsigned __int16 *)this + 1) == 0;
  if ( !*((_WORD *)this + 1) )
    v3 = *((unsigned __int16 *)this + 8) == 0;
  if ( !v3 )
    return 1;
  v4 = *((unsigned __int16 *)this + 9) == 0;
  if ( !*((_WORD *)this + 9) )
    v4 = *((unsigned __int16 *)this + 10) == 0;
  if ( !v4 )
    return 1;
  v5 = *((unsigned __int16 *)this + 11) == 0;
  if ( !*((_WORD *)this + 11) )
    v5 = *((unsigned __int16 *)this + 15) == 0;
  if ( !v5 )
    return 1;
  v6 = *((unsigned __int16 *)this + 16) == 0;
  if ( !*((_WORD *)this + 16) )
    v6 = *((unsigned __int16 *)this + 17) == 0;
  if ( !v6 )
    return 1;
  v7 = *((unsigned __int16 *)this + 14) == 0;
  if ( !*((_WORD *)this + 14) )
    v7 = *((unsigned __int16 *)this + 12) == 0;
  if ( !v7 )
    return 1;
  v8 = *((unsigned __int16 *)this + 13) == 0;
  if ( !*((_WORD *)this + 13) )
    v8 = *((unsigned __int16 *)this + 4) == 0;
  if ( !v8 )
    return 1;
  v9 = *((unsigned __int16 *)this + 5) == 0;
  if ( !*((_WORD *)this + 5) )
    v9 = *((unsigned __int16 *)this + 6) == 0;
  if ( !v9 )
    return 1;
  v10 = *((unsigned __int16 *)this + 7) == 0;
  if ( !*((_WORD *)this + 7) )
    v10 = *((unsigned __int16 *)this + 18) == 0;
  return !v10 || *((unsigned __int16 *)this + 19) != 0;
}


// ============================================================
