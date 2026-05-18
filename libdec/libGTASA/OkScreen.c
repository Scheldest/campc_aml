
// Address: 0x2a8b4c
// Original: _ZN8OkScreen6OkFuncEP12SelectScreeni
// Demangled: OkScreen::OkFunc(SelectScreen *,int)
int __fastcall OkScreen::OkFunc(OkScreen *this, SelectScreen *a2, int a3)
{
  __int64 v3; // kr00_8

  v3 = *((_QWORD *)this + 9);
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
  return ((int (__fastcall *)(_DWORD))v3)(HIDWORD(v3));
}


// ============================================================

// Address: 0x2a8b9c
// Original: _ZN8OkScreenD0Ev
// Demangled: OkScreen::~OkScreen()
void __fastcall OkScreen::~OkScreen(OkScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================
