// ADDR: 0xed150
// SYMBOL: sub_ED150
int __fastcall sub_ED150(int a1)
{
  int result; // r0

  switch ( a1 )
  {
    case 0:
      sub_ECDE8();
      result = sub_ED1D0(qword_23DC48);
      break;
    case 1:
      sub_ECE98();
      result = sub_ED1D0(qword_23DC88);
      break;
    case 2:
      sub_ECF80();
      result = sub_ED1D0(qword_23DD08);
      break;
    case 3:
      sub_ECF0C();
      result = sub_ED1D0(qword_23DCC8);
      break;
    case 4:
      sub_ECFF4();
      result = sub_ED1D0(qword_23DD48);
      break;
    case 5:
      sub_ED068();
      result = sub_ED1D0(qword_23DD88);
      break;
    case 6:
      sub_ED0DC();
      result = sub_ED1D0(qword_23DDC8);
      break;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf93b0
// SYMBOL: sub_F93B0
int sub_F93B0()
{
  int v0; // r0
  int v1; // r0

  _android_log_print(4, "AXL", "Starting game..");
  ((void (*)(void))(dword_23DF24 + 2781697))();
  v0 = sub_F80FC();
  v1 = sub_103978(v0);
  sub_107328(v1);
  return sub_F84E4();
}


// ======================================================================
// ADDR: 0x125a14
// SYMBOL: sub_125A14
int __fastcall sub_125A14(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r0

  if ( dword_263C34 )
  {
    v8 = _android_log_print(
           4,
           "AXL",
           "CHandlingHook: Instance of CHandlingHook is already exists. Calling CHandlingHook::resize");
    sub_1246CC(v8, a1, a2, a3, a4);
  }
  else
  {
    _android_log_print(4, "AXL", "CHandlingHook: Create new instance of CHandlingHook");
    v9 = operator new(1u);
    sub_124358(v9, a1, a2, a3, a4);
  }
  return dword_263C34;
}


// ======================================================================
// ADDR: 0x12665c
// SYMBOL: sub_12665C
int sub_12665C()
{
  if ( byte_263E14 )
    return sub_2242C8(
             3,
             "AXL",
             "CVehicleSoundHook: Double calling CVehicleSoundHook constructor. There can be only one copy of this class");
  _android_log_print(4, "AXL", "CVehicleSoundHook: Create new instance of CVehicleSoundHook");
  byte_263E14 = 1;
  sub_164196(dword_23DF24 + 6767232, sub_1266E4, &off_263E0C);
  return sub_164196(dword_23DF24 + 6758732, sub_126718, &unk_263E10);
}


// ======================================================================
