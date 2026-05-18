// ADDR: 0x109318
// SYMBOL: sub_109318
unsigned __int64 __fastcall sub_109318(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // r5
  int v4; // r4
  unsigned __int64 v5; // r0
  unsigned __int64 v6; // r2
  __int64 v7; // r0
  __int64 v8; // r2
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  v3 = HIDWORD(a1);
  v4 = HIDWORD(a2);
  v5 = (a1 ^ __PAIR64__(SHIDWORD(a1) >> 31, SHIDWORD(a1) >> 31)) - __PAIR64__(v3 >> 31, v3 >> 31);
  v6 = abs64(a2);
  v7 = sub_109394(v5, HIDWORD(v5), v6, HIDWORD(v6), v10);
  LODWORD(v8) = v10[0] ^ (v3 >> 31);
  HIDWORD(v8) = v10[1] ^ (v3 >> 31);
  *a3 = v8 - __PAIR64__(v3 >> 31, v3 >> 31);
  return __PAIR64__(HIDWORD(v7) ^ (v4 >> 31) ^ (unsigned int)(v3 >> 31), (unsigned int)v7 ^ (v4 >> 31) ^ (v3 >> 31))
       - __PAIR64__((v4 >> 31) ^ (unsigned int)(v3 >> 31), (v4 >> 31) ^ (unsigned int)(v3 >> 31));
}


// ======================================================================
