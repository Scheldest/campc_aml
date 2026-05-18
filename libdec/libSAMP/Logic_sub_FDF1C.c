// ADDR: 0xf8390
// SYMBOL: sub_F8390
int sub_F8390()
{
  int result; // r0
  __int64 v1; // d17
  int v2; // r3
  __int64 v3; // d17
  __int64 v4; // kr00_8

  result = dword_2402E0;
  v1 = unk_245608;
  v2 = dword_2402E0 + 276;
  *(_QWORD *)(dword_2402E0 + 276) = unk_245600;
  *(_QWORD *)(v2 + 8) = v1;
  v2 += 16;
  v3 = unk_245618;
  *(_QWORD *)v2 = unk_245610;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = *(_QWORD *)&qword_245624;
  *(_DWORD *)(v2 + 16) = dword_245620;
  *(_QWORD *)(result + 312) = v4;
  return result;
}


// ======================================================================
// ADDR: 0xf8400
// SYMBOL: sub_F8400
int __fastcall sub_F8400(int result)
{
  _DWORD *v1; // r1
  _DWORD *v2; // r3
  int v3; // r1

  v1 = &dword_2431E4[11 * (__int16)result];
  v2 = (_DWORD *)dword_2402E0;
  *(_DWORD *)(dword_2402E0 + 276) = dword_2431E4[11 * result];
  v2[70] = v1[1];
  v2[71] = v1[2];
  v2[72] = v1[3];
  v2[73] = v1[4];
  v2[74] = v1[5];
  v2[75] = v1[6];
  v2[76] = v1[7];
  v2[77] = v1[8];
  v2[78] = v1[9];
  v3 = v1[10];
  byte_24562C = result;
  v2[79] = v3;
  return result;
}


// ======================================================================
