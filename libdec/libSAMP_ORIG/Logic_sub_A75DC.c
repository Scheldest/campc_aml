// ADDR: 0x99784
// SYMBOL: sub_99784
int sub_99784()
{
  int v0; // r0
  int v1; // r6
  int v2; // r4
  int v3; // r0
  __int64 v4; // d17
  int result; // r0

  v0 = *(_DWORD *)(dword_1ACF68 + 6572);
  v1 = *(_DWORD *)(v0 + 448);
  sub_9E5DE(*(_DWORD *)(v0 + 636) + 100, *(_DWORD *)(v0 + 636), 0);
  v2 = *(_DWORD *)(dword_1ACF68 + 6572);
  v3 = *(_DWORD *)(v2 + 636);
  *(_BYTE *)(v2 + 124) = 1;
  sub_9BFD8(v3, *(_DWORD *)(v1 + 44), *(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), *(float *)(v1 + 56), 0);
  v4 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 636) + 72) + 16 * *(_DWORD *)(*(_DWORD *)(v2 + 636) + 64) - 8);
  result = v2 + 528;
  *(_QWORD *)(v2 + 528) = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 636) + 72)
                                    + 16 * *(_DWORD *)(*(_DWORD *)(v2 + 636) + 64)
                                    - 16);
  *(_QWORD *)(v2 + 536) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x997f0
// SYMBOL: sub_997F0
int sub_997F0()
{
  int v0; // r4
  int v1; // r0
  __int64 v2; // d17
  int result; // r0

  sub_9E5DE(
    *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 636) + 100,
    *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 636),
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 448) + 12) + 1);
  v0 = *(_DWORD *)(dword_1ACF68 + 6572);
  v1 = *(_DWORD *)(v0 + 636);
  *(_BYTE *)(v0 + 124) = 1;
  sub_9C12E(v1);
  v2 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v0 + 636) + 72) + 16 * *(_DWORD *)(*(_DWORD *)(v0 + 636) + 64) - 8);
  result = v0 + 528;
  *(_QWORD *)(v0 + 528) = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v0 + 636) + 72)
                                    + 16 * *(_DWORD *)(*(_DWORD *)(v0 + 636) + 64)
                                    - 16);
  *(_QWORD *)(v0 + 536) = v2;
  return result;
}


// ======================================================================
