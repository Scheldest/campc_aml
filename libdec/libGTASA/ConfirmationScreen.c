
// Address: 0x2a87b4
// Original: _ZN18ConfirmationScreen9GetStartYEv
// Demangled: ConfirmationScreen::GetStartY(void)
int __fastcall ConfirmationScreen::GetStartY(ConfirmationScreen *this)
{
  return 1124859904;
}


// ============================================================

// Address: 0x2a87bc
// Original: _ZN18ConfirmationScreen6RenderEi
// Demangled: ConfirmationScreen::Render(int)
int __fastcall ConfirmationScreen::Render(ConfirmationScreen *this, int a2)
{
  CKeyGen *v3; // r6
  int v4; // r5
  float v5; // s16
  int v6; // r0
  _BYTE v8[8]; // [sp+28h] [bp-28h] BYREF
  int v9; // [sp+30h] [bp-20h] BYREF
  _DWORD v10[7]; // [sp+34h] [bp-1Ch] BYREF

  CharSelectScreen::Render(this, a2);
  v3 = (CKeyGen *)*((_DWORD *)this + 17);
  CRGBA::CRGBA((CRGBA *)&v9, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
  v4 = (*(int (__fastcall **)(ConfirmationScreen *))(*(_DWORD *)this + 48))(this);
  v5 = COERCE_FLOAT((*(int (__fastcall **)(ConfirmationScreen *))(*(_DWORD *)this + 48))(this));
  v6 = CText::Get((CText *)TheText, v3);
  v10[0] = v9;
  return MenuScreen::DrawTextDirect(
           (int)v8,
           (int)this,
           v6,
           0,
           1,
           (int)v10,
           1,
           v4,
           1116471296,
           COERCE_INT(630.0 - v5),
           1099956224,
           1,
           0);
}


// ============================================================
