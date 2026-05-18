
// Address: 0x3f8308
// Original: _ZN21CMouseControllerState5ClearEv
// Demangled: CMouseControllerState::Clear(void)
int __fastcall CMouseControllerState::Clear(int this)
{
  *(_BYTE *)(this + 6) = 0;
  *(_WORD *)(this + 4) = 0;
  *(_DWORD *)this = 0;
  return this;
}


// ============================================================

// Address: 0x3f8348
// Original: _ZN21CMouseControllerStateC2Ev
// Demangled: CMouseControllerState::CMouseControllerState(void)
void __fastcall CMouseControllerState::CMouseControllerState(CMouseControllerState *this)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 6) = 0;
  *((_WORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
}


// ============================================================

// Address: 0x3f8358
// Original: _ZN21CMouseControllerState13CheckForInputEv
// Demangled: CMouseControllerState::CheckForInput(void)
bool __fastcall CMouseControllerState::CheckForInput(CMouseControllerState *this)
{
  bool v1; // zf
  bool v3; // zf
  bool v4; // zf

  if ( *(_BYTE *)this )
    return 1;
  v1 = *((_BYTE *)this + 1) == 0;
  if ( !*((_BYTE *)this + 1) )
    v1 = *((_BYTE *)this + 2) == 0;
  if ( !v1 )
    return 1;
  v3 = *((_BYTE *)this + 3) == 0;
  if ( !*((_BYTE *)this + 3) )
    v3 = *((_BYTE *)this + 4) == 0;
  if ( !v3 )
    return 1;
  v4 = *((_BYTE *)this + 5) == 0;
  if ( !*((_BYTE *)this + 5) )
    v4 = *((_BYTE *)this + 6) == 0;
  return !v4 || *((float *)this + 3) != 0.0 || *((float *)this + 4) != 0.0;
}


// ============================================================
