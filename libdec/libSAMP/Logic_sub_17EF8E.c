// ADDR: 0x181934
// SYMBOL: sub_181934
int __fastcall sub_181934(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r3

  v3 = sub_181978(a1, a2, a3, 0, 0);
  if ( !v3 )
    return -1;
  v4 = v3 + 1740;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(unsigned __int16 *)(v4 + 8 * v6);
    if ( v7 == 0xFFFF )
      break;
    ++v6;
    v5 += v7;
    if ( v6 == 5 )
    {
      v6 = 5;
      return sub_220A6C(v5, v6);
    }
  }
  if ( !v6 )
    return -1;
  return sub_220A6C(v5, v6);
}


// ======================================================================
