// ADDR: 0x1519f0
// SYMBOL: sub_1519F0
bool __fastcall sub_1519F0(int a1)
{
  unsigned int v2; // r0

  if ( *(unsigned __int8 *)(a1 + 16) | *(unsigned __int8 *)(a1 + 19) )
    return 1;
  v2 = sub_17E2E4() - *(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 32);
  return v2 < 0x3E8 || *(double *)(a1 + 24) * 1000.0 > (double)v2;
}


// ======================================================================
// ADDR: 0x15df34
// SYMBOL: sub_15DF34
__int64 __fastcall sub_15DF34(int a1)
{
  __int64 v2; // r0

  v2 = sub_164C70(*(_DWORD *)(a1 + 8), 0);
  if ( ((unsigned int)v2 & HIDWORD(v2)) == 0xFFFFFFFF )
    return 0LL;
  else
    return sub_164B90(*(_DWORD *)(a1 + 8), HIDWORD(v2), v2, HIDWORD(v2));
}


// ======================================================================
