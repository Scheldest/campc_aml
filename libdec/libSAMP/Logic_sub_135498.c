// ADDR: 0x13d3dc
// SYMBOL: sub_13D3DC
int __fastcall sub_13D3DC(int a1, int a2, _QWORD *a3, char a4, float a5)
{
  __int64 v8; // d17
  int result; // r0

  sub_12BC78(a1);
  *(_DWORD *)a1 = &off_22EFC0;
  *(_QWORD *)(a1 + 84) = 0LL;
  *(_QWORD *)(a1 + 92) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  std::string::operator=(a1 + 84);
  v8 = a3[1];
  *(_QWORD *)(a1 + 96) = *a3;
  *(_QWORD *)(a1 + 104) = v8;
  *(_BYTE *)(a1 + 112) = a4;
  result = a1;
  *(float *)(a1 + 116) = a5;
  return result;
}


// ======================================================================
