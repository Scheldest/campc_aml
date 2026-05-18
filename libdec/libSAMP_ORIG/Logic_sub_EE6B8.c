// ADDR: 0xec8cc
// SYMBOL: sub_EC8CC
int __fastcall sub_EC8CC(int a1, int a2)
{
  __int64 v3; // r0

  HIDWORD(v3) = a2 - 1;
  LODWORD(v3) = &off_111BE4;
  *(_QWORD *)a1 = v3;
  sub_ECC3C(a1 + 8, 28);
  sub_5FBF8((_DWORD *)(a1 + 144), "C");
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
  dword_1AF450 = (int)&off_1123BC;
  dword_1AF454 = 0;
  sub_ECC70(a1);
  dword_1AF458 = (int)&off_1123DC;
  dword_1AF45C = 0;
  sub_ECC94(a1);
  dword_1AF558 = (int)&off_111C38;
  byte_1AF564 = 0;
  dword_1AF55C = 0;
  unk_1AF560 = &dword_5CFB8;
  sub_ECCB8(a1);
  dword_1AF460 = (int)&off_111DD4;
  dword_1AF464 = 0;
  sub_ECCDC(a1);
  dword_1AF468 = (int)&off_111E40;
  dword_1AF46C = 0;
  sub_ECD00(a1);
  std::codecvt<wchar_t,char,mbstate_t>::codecvt(&unk_1AF568, 1);
  sub_ECD24(a1, &unk_1AF568);
  dword_1AF470 = (int)&off_111E98;
  dword_1AF474 = 0;
  sub_ECD48(a1);
  dword_1AF478 = (int)&off_111EE8;
  dword_1AF47C = 0;
  sub_ECD6C(a1);
  std::numpunct<char>::numpunct(&unk_1AF5E8, 1);
  sub_ECD90(a1, &unk_1AF5E8);
  std::numpunct<wchar_t>::numpunct(&unk_1AF600, 1);
  sub_ECDB4(a1, &unk_1AF600);
  dword_1AF480 = (int)&off_1123FC;
  dword_1AF484 = 0;
  sub_ECDD8(a1);
  dword_1AF488 = (int)&off_11247C;
  dword_1AF48C = 0;
  sub_ECDFC(a1);
  dword_1AF490 = (int)&off_1124F4;
  dword_1AF494 = 0;
  sub_ECE20(a1);
  dword_1AF498 = (int)&off_112568;
  dword_1AF49C = 0;
  sub_ECE44(a1);
  dword_1AF4A0 = (int)&off_1128E4;
  dword_1AF4A4 = 0;
  sub_ECE68(a1);
  dword_1AF4A8 = (int)&off_112944;
  dword_1AF4AC = 0;
  sub_ECE8C(a1);
  dword_1AF4B0 = (int)&off_11299C;
  dword_1AF4B4 = 0;
  sub_ECEB0(a1);
  dword_1AF4B8 = (int)&off_1129F4;
  *(_DWORD *)algn_1AF4BC = 0;
  sub_ECED4(a1, &dword_1AF4B8);
  dword_1AF4C0 = (int)&off_112B5C;
  dword_1AF4C4 = 0;
  sub_ECEF8(a1);
  dword_1AF4C8 = (int)&off_112BA0;
  dword_1AF4CC = 0;
  sub_ECF1C(a1);
  dword_1AF4D0 = (int)&off_112BE4;
  dword_1AF4D4 = 0;
  sub_ECF40(a1);
  dword_1AF4D8 = (int)&off_112C28;
  dword_1AF4DC = 0;
  sub_ECF64(a1);
  dword_1AF578 = (int)&off_1125D4;
  dword_1AF57C = 0;
  unk_1AF580 = &off_112604;
  sub_ECF88(a1);
  dword_1AF588 = (int)&off_112660;
  dword_1AF58C = 0;
  unk_1AF590 = &off_112690;
  sub_ECFAC(a1);
  sub_F635C(&unk_1AF598, 1);
  sub_ECFD0(a1, &unk_1AF598);
  sub_F6398(&unk_1AF5A8, 1);
  sub_ECFF4(a1, &unk_1AF5A8);
  dword_1AF4E0 = (int)&off_112C6C;
  dword_1AF4E4 = 0;
  sub_ED018(a1);
  dword_1AF4E8 = (int)&off_112CB4;
  dword_1AF4EC = 0;
  sub_ED03C(a1, &dword_1AF4E8);
  return a1;
}


// ======================================================================
