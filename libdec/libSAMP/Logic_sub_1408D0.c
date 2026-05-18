// ADDR: 0x106128
// SYMBOL: sub_106128
bool __fastcall sub_106128(int a1)
{
  int v1; // r0
  _DWORD *v2; // r0

  v1 = *(_DWORD *)(a1 + 92);
  return v1
      && (*(_BYTE *)(v1 + 1157) & 0x10) == 0
      && (v2 = *(_DWORD **)(*(_DWORD *)(v1 + 1088) + 16)) != 0
      && *v2 - dword_23DF24 == 6736952;
}


// ======================================================================
// ADDR: 0x106a90
// SYMBOL: sub_106A90
int __fastcall sub_106A90(int a1)
{
  int v2; // r0

  if ( sub_1082F4(*(_DWORD *)(a1 + 8)) && (v2 = *(_DWORD *)(a1 + 92)) != 0 )
    return (*(unsigned __int8 *)(v2 + 1159) >> 2) & 1;
  else
    return 0;
}


// ======================================================================
