// ADDR: 0x181a90
// SYMBOL: sub_181A90
int __fastcall sub_181A90(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // [sp+8h] [bp-10h] BYREF
  int v6; // [sp+Ch] [bp-Ch]

  v5 = a2;
  v6 = a3;
  if ( sub_17E580((int)&v5, a1 + 564) )
    return a1 + 12;
  result = sub_181978(a1, v5, v6, 0, 0);
  if ( result )
    result += 1796;
  return result;
}


// ======================================================================
