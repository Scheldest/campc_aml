// ADDR: 0x106f5c
// SYMBOL: sub_106F5C
_DWORD *__fastcall sub_106F5C(int a1)
{
  int v2; // r4

  v2 = *(_DWORD *)(a1 + 4);
  sub_F83C8();
  sub_F8400(*(unsigned __int8 *)(v2 + 96));
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, int))(dword_23DF24 + 4846873))(
    *(_DWORD *)(v2 + 92),
    **(_DWORD **)(a1 + 8),
    **(_DWORD **)(a1 + 12),
    1);
  sub_F8390();
  return sub_10479C(v2, **(_BYTE **)(a1 + 8), 0);
}


// ======================================================================
// ADDR: 0x108d64
// SYMBOL: sub_108D64
int __fastcall sub_108D64(int a1)
{
  unsigned int v1; // r0

  v1 = a1 - 1;
  if ( v1 <= 0x2D )
    return dword_B3BE4[v1];
  else
    return -1;
}


// ======================================================================
