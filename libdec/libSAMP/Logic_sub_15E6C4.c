// ADDR: 0x182be8
// SYMBOL: sub_182BE8
int __fastcall sub_182BE8(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r3
  int v5; // r1
  int v6; // lr
  int v7; // r4
  int v8; // r2

  v3 = sub_181978(a1, a2, a3, 1, 1);
  if ( !v3 )
    return 0;
  v4 = 0;
  v5 = 0xFFFF;
  v6 = 0;
  do
  {
    v7 = v3 + v4;
    v8 = *(unsigned __int16 *)(v3 + v4 + 1740);
    if ( v8 == 0xFFFF )
      break;
    v4 += 8;
    if ( v5 > v8 )
    {
      v6 = *(_DWORD *)(v7 + 1744);
      v5 = v8;
    }
  }
  while ( v4 != 40 );
  return v6;
}


// ======================================================================
