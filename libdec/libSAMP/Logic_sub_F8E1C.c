// ADDR: 0xf8828
// SYMBOL: sub_F8828
int __fastcall sub_F8828(int a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  int result; // r0

  v2 = *(_DWORD **)(a1 + 8);
  *a2 = *v2;
  a2[1] = v2[1];
  a2[2] = v2[2];
  a2[4] = v2[4];
  a2[5] = v2[5];
  a2[6] = v2[6];
  a2[8] = v2[8];
  a2[9] = v2[9];
  a2[10] = v2[10];
  a2[12] = v2[12];
  a2[13] = v2[13];
  result = v2[14];
  a2[14] = result;
  return result;
}


// ======================================================================
