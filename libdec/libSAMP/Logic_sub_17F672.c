// ADDR: 0x17e85c
// SYMBOL: sub_17E85C
_DWORD *__fastcall sub_17E85C(_DWORD *a1)
{
  int i; // r6
  int j; // r1
  _DWORD *v4; // r2

  sub_17F6B8();
  a1[628] = &off_22FDC0;
  *a1 = &off_22FC30;
  sub_17D4A8((int)(a1 + 629));
  for ( i = 0; i != 2336; i += 73 )
    sub_17D4A8((int)&a1[i + 701]);
  for ( j = 0; j != 2336; j += 73 )
  {
    v4 = &a1[j];
    *((_BYTE *)v4 + 3080) = 0;
  }
  a1[3036] = 0;
  return a1;
}


// ======================================================================
