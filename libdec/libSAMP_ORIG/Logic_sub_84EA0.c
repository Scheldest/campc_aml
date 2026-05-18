// ADDR: 0x8396c
// SYMBOL: sub_8396C
int __fastcall sub_8396C(int a1, int a2, float a3, float a4, unsigned int a5)
{
  sub_8004C((_DWORD *)a1, a2);
  *(_DWORD *)a1 = &off_111514;
  *(float *)(a1 + 8) = (float)(a4 - a3) / (float)a5;
  *(_QWORD *)(a1 + 16) = sub_86B00() + a5;
  *(float *)(a1 + 24) = a4;
  return a1;
}


// ======================================================================
