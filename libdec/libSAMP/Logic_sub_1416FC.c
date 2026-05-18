// ADDR: 0x17d84a
// SYMBOL: sub_17D84A
int __fastcall sub_17D84A(int *a1)
{
  int v2; // r0
  int v3; // r1
  int result; // r0

  sub_17D5BA((int)a1, 1);
  v2 = *a1;
  v3 = *a1 & 7;
  if ( v3 )
    *(_BYTE *)(a1[3] + (v2 >> 3)) |= 0x80u >> v3;
  else
    *(_BYTE *)(a1[3] + (v2 >> 3)) = 0x80;
  result = *a1 + 1;
  *a1 = result;
  return result;
}


// ======================================================================
