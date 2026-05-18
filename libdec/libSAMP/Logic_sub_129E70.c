// ADDR: 0x12b30c
// SYMBOL: sub_12B30C
int __fastcall sub_12B30C(int a1, _QWORD *a2)
{
  int v3; // r0

  *(_DWORD *)a1 = &off_22D908;
  v3 = a1 + 4;
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(a1 + 4) = *a2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  std::string::operator=(a1 + 12);
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 10000;
  return a1;
}


// ======================================================================
// ADDR: 0x12b830
// SYMBOL: sub_12B830
float *__fastcall sub_12B830(float *a1)
{
  float v1; // s0
  __int64 v2; // kr00_8
  float *result; // r0

  v1 = a1[1] / unk_238EB4;
  unk_238EB8 = *a1 / *(float *)&dword_238EB0;
  unk_238EBC = LODWORD(v1);
  *(float *)&dword_238EC0 = v1 * *(float *)&dword_238EC0;
  *(float *)&dword_238ED8 = unk_238EB8 * *(float *)&dword_238ED8;
  unk_238EDC = v1 * unk_238EDC;
  *(float *)&dword_238ED0 = unk_238EB8 * *(float *)&dword_238ED0;
  unk_238ED4 = v1 * unk_238ED4;
  v2 = *(_QWORD *)a1;
  *(float *)&dword_238EE0 = v1 * *(float *)&dword_238EE0;
  qword_314190 = v2;
  *(float *)&dword_238EF0 = unk_238EB8 * *(float *)&dword_238EF0;
  unk_238EF4 = v1 * unk_238EF4;
  *(float *)&dword_238EF8 = unk_238EB8 * *(float *)&dword_238EF8;
  unk_238EFC = v1 * unk_238EFC;
  *(float *)&dword_238F08 = unk_238EB8 * *(float *)&dword_238F08;
  unk_238F0C = v1 * unk_238F0C;
  *(float *)&dword_238F10 = unk_238EB8 * *(float *)&dword_238F10;
  *(float *)algn_238F14 = v1 * (float)(unk_238F1C * (float)unk_238F00);
  *(float *)&dword_238F18 = unk_238EB8 * *(float *)&dword_238F18;
  unk_238F1C = v1 * unk_238F1C;
  unk_238F24 = v1 * unk_238F24;
  *(float *)&dword_238F20 = unk_238EB8 * *(float *)&dword_238F20;
  unk_238F2C = v1 * unk_238F2C;
  *(float *)&dword_238F28 = unk_238EB8 * *(float *)&dword_238F28;
  unk_238F34 = v1 * unk_238F34;
  unk_238F30 = unk_238EB8 * unk_238F30;
  unk_238F3C = v1 * unk_238F3C;
  *(float *)&dword_238F38 = unk_238EB8 * *(float *)&dword_238F38;
  unk_238F44 = v1 * unk_238F44;
  *(float *)&dword_238F40 = unk_238EB8 * *(float *)&dword_238F40;
  unk_238F4C = v1 * unk_238F4C;
  *(float *)&dword_238F48 = unk_238EB8 * *(float *)&dword_238F48;
  *(float *)&dword_238F50 = v1 * *(float *)&dword_238F50;
  *(float *)&dword_238F54 = v1 * *(float *)&dword_238F54;
  unk_238F5C = v1 * unk_238F5C;
  *(float *)&dword_238F58 = unk_238EB8 * *(float *)&dword_238F58;
  unk_238F64 = v1 * unk_238F64;
  *(float *)&dword_238F60 = unk_238EB8 * *(float *)&dword_238F60;
  unk_238F6C = v1 * unk_238F6C;
  *(float *)&dword_238F68 = unk_238EB8 * *(float *)&dword_238F68;
  unk_238F74 = v1 * unk_238F74;
  *(float *)&dword_238F70 = unk_238EB8 * *(float *)&dword_238F70;
  unk_238F84 = v1 * unk_238F84;
  unk_238F80 = unk_238EB8 * unk_238F80;
  unk_238F7C = v1 * unk_238F7C;
  unk_238F78 = unk_238EB8 * unk_238F78;
  unk_238F94 = v1 * unk_238F94;
  unk_238F90 = unk_238EB8 * unk_238F90;
  unk_238F8C = v1 * unk_238F8C;
  unk_238F88 = unk_238EB8 * unk_238F88;
  unk_238F9C = v1 * unk_238F9C;
  *(float *)&dword_238F98 = unk_238EB8 * *(float *)&dword_238F98;
  unk_238FA4 = v1 * unk_238FA4;
  *(float *)&dword_238FA0 = unk_238EB8 * *(float *)&dword_238FA0;
  unk_238FAC = v1 * unk_238FAC;
  *(float *)&dword_238FA8 = unk_238EB8 * *(float *)&dword_238FA8;
  unk_238FB4 = v1 * unk_238FB4;
  *(float *)&dword_238FB0 = unk_238EB8 * *(float *)&dword_238FB0;
  unk_238FBC = v1 * unk_238FBC;
  *(float *)&dword_238FB8 = unk_238EB8 * *(float *)&dword_238FB8;
  unk_238FC4 = v1 * unk_238FC4;
  *(float *)&dword_238FC0 = unk_238EB8 * *(float *)&dword_238FC0;
  result = flt_238FD0;
  unk_238FCC = v1 * unk_238FCC;
  unk_238FC8 = unk_238EB8 * unk_238FC8;
  flt_238FD0[1] = v1 * flt_238FD0[1];
  flt_238FD0[0] = unk_238EB8 * flt_238FD0[0];
  return result;
}


// ======================================================================
// ADDR: 0x12bc78
// SYMBOL: sub_12BC78
int __fastcall sub_12BC78(int a1)
{
  *(_DWORD *)a1 = &off_22D930;
  *(_QWORD *)(a1 + 4) = pthread_self();
  *(_WORD *)(a1 + 81) = 0;
  *(_QWORD *)(a1 + 44) = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_BYTE *)(a1 + 80) = 1;
  return a1;
}


// ======================================================================
