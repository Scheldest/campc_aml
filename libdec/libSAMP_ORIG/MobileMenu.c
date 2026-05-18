// ADDR: 0x6aa5c
// SYMBOL: Java_com_sampmobilerp_game_ui_widgets_MobileMenu_setFpsLimitNative
int __fastcall Java_com_sampmobilerp_game_ui_widgets_MobileMenu_setFpsLimitNative(int a1, int a2, int a3)
{
  dword_116D04 = a3;
  return ((int (__fastcall *)(int, int, int))((char *)&loc_F57EC + dword_1A4408))(
           dword_1A3A68,
           dword_1A3A6C,
           dword_1A3A70);
}


// ======================================================================
// ADDR: 0x6aab0
// SYMBOL: Java_com_sampmobilerp_game_ui_widgets_MobileMenu_setAspectRatioNative
int __fastcall Java_com_sampmobilerp_game_ui_widgets_MobileMenu_setAspectRatioNative(int a1, int a2, int a3)
{
  int result; // r0

  result = dword_1A41D8;
  dword_1A4488 = a3;
  if ( dword_1A41D8 )
    return sub_69984();
  return result;
}


// ======================================================================
// ADDR: 0x6aad4
// SYMBOL: Java_com_sampmobilerp_game_ui_widgets_MobileMenu_setSensitivityNative
int __fastcall Java_com_sampmobilerp_game_ui_widgets_MobileMenu_setSensitivityNative(int a1, int a2, float a3)
{
  int v3; // r0

  dword_1A44FC = LODWORD(a3);
  v3 = dword_1A4404 + 6987568;
  *(float *)(dword_1A4404 + 6987568) = (float)(a3 / 3000.0) + 0.001;
  return sub_76564(v3);
}


// ======================================================================
// ADDR: 0x6ab1c
// SYMBOL: Java_com_sampmobilerp_game_ui_widgets_MobileMenu_getSensitivityNative
int Java_com_sampmobilerp_game_ui_widgets_MobileMenu_getSensitivityNative()
{
  if ( !byte_1A41E4 )
  {
    sub_767F0();
    byte_1A41E4 = 1;
  }
  _android_log_print(4, "SAMP_ORIG", "Sensitivity value: %.3f", *(float *)&dword_1A44FC);
  return dword_1A44FC;
}


// ======================================================================
// ADDR: 0x6ab68
// SYMBOL: Java_com_sampmobilerp_game_ui_widgets_MobileMenu_getFpsLimitNative
int Java_com_sampmobilerp_game_ui_widgets_MobileMenu_getFpsLimitNative()
{
  return dword_116D04;
}


// ======================================================================
// ADDR: 0x6ab78
// SYMBOL: Java_com_sampmobilerp_game_ui_widgets_MobileMenu_setDrawDistanceNative
int __fastcall Java_com_sampmobilerp_game_ui_widgets_MobileMenu_setDrawDistanceNative(int a1, int a2, int a3)
{
  dword_1A44F8 = a3;
  return sub_76564(&dword_1A44F8);
}


// ======================================================================
// ADDR: 0x6ab88
// SYMBOL: Java_com_sampmobilerp_game_ui_widgets_MobileMenu_getDrawDistanceNative
int Java_com_sampmobilerp_game_ui_widgets_MobileMenu_getDrawDistanceNative()
{
  if ( !byte_1A41E4 )
  {
    sub_767F0();
    byte_1A41E4 = 1;
  }
  _android_log_print(4, "SAMP_ORIG", "Distance value: %.0f", *(float *)&dword_1A44F8);
  return dword_1A44F8;
}


// ======================================================================
