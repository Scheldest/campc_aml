// ADDR: 0x17e8e8
// SYMBOL: sub_17E8E8
int __fastcall sub_17E8E8(_DWORD *a1)
{
  int v2; // r5

  v2 = 2964;
  a1[628] = &off_22FDC0;
  *a1 = &off_22FC30;
  do
  {
    sub_17D542((int)&a1[v2]);
    v2 -= 73;
  }
  while ( v2 != 628 );
  sub_17D542((int)(a1 + 629));
  return sub_17FA34(a1);
}


// ======================================================================
