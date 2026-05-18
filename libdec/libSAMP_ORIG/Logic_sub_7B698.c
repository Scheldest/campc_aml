// ADDR: 0x71c4c
// SYMBOL: sub_71C4C
int __fastcall sub_71C4C(int a1, _QWORD *a2, int a3)
{
  int v4; // r0

  *(_DWORD *)a1 = &off_1105C4;
  v4 = a1 + 4;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(a1 + 4) = *a2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  std::string::operator=(a1 + 12, a3);
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 10000;
  return a1;
}


// ======================================================================
// ADDR: 0x7c0f8
// SYMBOL: sub_7C0F8
int *__fastcall sub_7C0F8(float *a1)
{
  float v1; // s2
  float v2; // s10
  float v3; // s12
  int *result; // r0

  v1 = *a1 / unk_116D48;
  unk_116D54 = a1[1] / unk_116D4C;
  unk_116D50 = LODWORD(v1);
  unk_116D68 = v1 * unk_116D68;
  unk_116D6C = unk_116D54 * unk_116D6C;
  v2 = (float)(a1[1] * 0.5) - (float)(unk_116D6C * 0.5);
  v3 = (float)(*a1 * 0.5) - (float)(unk_116D68 * 0.5);
  *(float *)&dword_116D58 = unk_116D54 * flt_116D0C;
  unk_1A45EC = LODWORD(v2);
  unk_1A45E8 = LODWORD(v3);
  unk_116D70 = v1 * unk_116D70;
  unk_116D74 = unk_116D54 * unk_116D74;
  unk_116D78 = v1 * unk_116D78;
  unk_116D7C = unk_116D54 * unk_116D7C;
  *(float *)&dword_116D80 = v1 * *(float *)&dword_116D80;
  unk_116D84 = unk_116D54 * unk_116D84;
  *(float *)&dword_116D88 = v1 * *(float *)&dword_116D88;
  unk_116D8C = unk_116D54 * unk_116D8C;
  unk_116D90 = v1 * unk_116D90;
  unk_116D94 = unk_116D54 * unk_116D94;
  unk_116D98 = v1 * unk_116D98;
  unk_116D9C = unk_116D54 * unk_116D9C;
  *(float *)&dword_116DC0 = v1 * *(float *)&dword_116DC0;
  unk_116DC4 = unk_116D54 * unk_116DC4;
  *(float *)&dword_116DC8 = v1 * *(float *)&dword_116DC8;
  unk_116DCC = unk_116D54 * unk_116DCC;
  *(float *)&dword_116DD0 = v1 * *(float *)&dword_116DD0;
  unk_116DD4 = unk_116D54 * unk_116DD4;
  *(float *)&dword_116DD8 = v1 * *(float *)&dword_116DD8;
  unk_116DDC = unk_116D54 * unk_116DDC;
  *(float *)&dword_116DE0 = v1 * *(float *)&dword_116DE0;
  unk_116DE4 = unk_116D54 * unk_116DE4;
  *(float *)&dword_116DE8 = v1 * *(float *)&dword_116DE8;
  unk_116DEC = unk_116D54 * unk_116DEC;
  result = &dword_116DF8;
  *(float *)&dword_116DF0 = v1 * *(float *)&dword_116DF0;
  unk_116DF4 = unk_116D54 * unk_116DF4;
  *(float *)&dword_116DF8 = v1 * *(float *)&dword_116DF8;
  unk_116DFC = unk_116D54 * unk_116DFC;
  return result;
}


// ======================================================================
// ADDR: 0x7c360
// SYMBOL: sub_7C360
int __fastcall sub_7C360(int result)
{
  *(_DWORD *)result = &off_11101C;
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 56) = 0LL;
  *(_QWORD *)(result + 64) = 0LL;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 76) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_BYTE *)(result + 8) = 1;
  *(_QWORD *)(result + 12) = 0LL;
  *(_QWORD *)(result + 20) = 0LL;
  *(_QWORD *)(result + 28) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(result + 36) = 0LL;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_WORD *)(result + 52) = 0;
  return result;
}


// ======================================================================
