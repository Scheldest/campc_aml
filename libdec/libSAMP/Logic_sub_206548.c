// ADDR: 0x204784
// SYMBOL: sub_204784
int __fastcall sub_204784(int a1, int a2)
{
  __int64 v3; // r0

  HIDWORD(v3) = a2 - 1;
  LODWORD(v3) = &off_2315F4;
  *(_QWORD *)a1 = v3;
  sub_204AF4(a1 + 8, 28);
  sub_DC6DC((_DWORD *)(a1 + 144), "C");
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
  dword_383CD8 = (int)&off_231DCC;
  dword_383CDC = 0;
  sub_204B28(a1);
  dword_383CE0 = (int)&off_231DEC;
  dword_383CE4 = 0;
  sub_204B4C(a1);
  dword_383DE0 = (int)&off_231648;
  byte_383DEC = 0;
  dword_383DE4 = 0;
  unk_383DE8 = &dword_D7CE0;
  sub_204B70(a1);
  dword_383CE8 = (int)&off_2317E4;
  dword_383CEC = 0;
  sub_204B94(a1);
  dword_383CF0 = (int)&off_231850;
  dword_383CF4 = 0;
  sub_204BB8(a1);
  std::codecvt<wchar_t,char,mbstate_t>::codecvt(&algn_383DED[3], 1);
  sub_204BDC(a1, &algn_383DED[3]);
  dword_383CF8 = (int)&off_2318A8;
  dword_383CFC = 0;
  sub_204C00(a1);
  dword_383D00 = (int)&off_2318F8;
  dword_383D04 = 0;
  sub_204C24(a1);
  std::numpunct<char>::numpunct(&unk_383E70, 1);
  sub_204C48(a1, &unk_383E70);
  std::numpunct<wchar_t>::numpunct(&unk_383E88, 1);
  sub_204C6C(a1, &unk_383E88);
  dword_383D08 = (int)&off_231E0C;
  dword_383D0C = 0;
  sub_204C90(a1);
  dword_383D10 = (int)&off_231E8C;
  dword_383D14 = 0;
  sub_204CB4(a1);
  dword_383D18 = (int)&off_231F04;
  dword_383D1C = 0;
  sub_204CD8(a1);
  dword_383D20 = (int)&off_231F78;
  dword_383D24 = 0;
  sub_204CFC(a1);
  dword_383D28 = (int)&off_2322F4;
  dword_383D2C = 0;
  sub_204D20(a1);
  dword_383D30 = (int)&off_232354;
  dword_383D34 = 0;
  sub_204D44(a1);
  dword_383D38 = (int)&off_2323AC;
  dword_383D3C = 0;
  sub_204D68(a1);
  dword_383D40 = (int)&off_232404;
  *(_DWORD *)algn_383D44 = 0;
  sub_204D8C(a1, &dword_383D40);
  dword_383D48 = (int)&off_23256C;
  dword_383D4C = 0;
  sub_204DB0(a1);
  dword_383D50 = (int)&off_2325B0;
  dword_383D54 = 0;
  sub_204DD4(a1);
  dword_383D58 = (int)&off_2325F4;
  dword_383D5C = 0;
  sub_204DF8(a1);
  dword_383D60 = (int)&off_232638;
  dword_383D64 = 0;
  sub_204E1C(a1);
  dword_383E00 = (int)&off_231FE4;
  dword_383E04 = 0;
  unk_383E08 = &off_232014;
  sub_204E40(a1);
  dword_383E10 = (int)&off_232070;
  dword_383E14 = 0;
  unk_383E18 = &off_2320A0;
  sub_204E64(a1);
  sub_20E24C(&unk_383E20, 1);
  sub_204E88(a1, &unk_383E20);
  sub_20E288(&unk_383E30, 1);
  sub_204EAC(a1, &unk_383E30);
  dword_383D68 = (int)&off_23267C;
  dword_383D6C = 0;
  sub_204ED0(a1);
  dword_383D70 = (int)&off_2326C4;
  dword_383D74 = 0;
  sub_204EF4(a1, &dword_383D70);
  return a1;
}


// ======================================================================
