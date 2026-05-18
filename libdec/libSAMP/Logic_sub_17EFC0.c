// ADDR: 0x181a3c
// SYMBOL: sub_181A3C
int __fastcall sub_181A3C(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2

  v3 = sub_181978(a1, a2, a3, 0, 0);
  if ( !v3 )
    return -1;
  v4 = *(_DWORD *)(v3 + 1780);
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 4;
  return *(unsigned __int16 *)(v3 + 8 * v5 + 1740);
}


// ======================================================================
