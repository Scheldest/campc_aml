// ADDR: 0x123af0
// SYMBOL: sub_123AF0
int __fastcall sub_123AF0(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r5
  int v5; // r0
  int v6; // r1

  v2 = sub_163768(a1);
  v3 = *(unsigned __int16 *)(a1 + 4);
  v4 = v2;
  v5 = sub_163768(v2);
  v6 = *(_DWORD *)(v4 + 4 * v3);
  *(_DWORD *)(v4 + 4 * v3) = *(_DWORD *)(v5 + 1908);
  *(_DWORD *)(v5 + 1908) = v6;
  **(_WORD **)a1 = *(_WORD *)(a1 + 4);
  return a1;
}


// ======================================================================
