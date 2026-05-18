// ADDR: 0x103cfc
// SYMBOL: sub_103CFC
bool __fastcall sub_103CFC(__int64 *a1, int a2)
{
  unsigned __int8 *v2; // r2
  int v3; // r4
  __int64 v4; // r0

  v2 = *(unsigned __int8 **)a2;
  v3 = *(_DWORD *)(a2 + 4) - *(_DWORD *)a2;
  v4 = *a1;
  return HIDWORD(v4) - (_DWORD)v4 == v3 && sub_FF296((unsigned __int8 *)v4, (unsigned __int8 *)HIDWORD(v4), v2);
}


// ======================================================================
