// ADDR: 0x163768
// SYMBOL: sub_163768
int sub_163768()
{
  return *(_DWORD *)(dword_23DF24 + 6788820);
}


// ======================================================================
// ADDR: 0x1637a4
// SYMBOL: sub_1637A4
const char *__fastcall sub_1637A4(int a1)
{
  unsigned int v2; // r0

  if ( *(_DWORD *)a1 - dword_23DF24 == 6714604 )
    return "BASE";
  v2 = (*(int (**)(void))(*(_DWORD *)a1 + 20))();
  if ( v2 > 8 )
    return "INVALID_TYPE";
  else
    return off_22FBFC[v2];
}


// ======================================================================
// ADDR: 0x163840
// SYMBOL: sub_163840
_DWORD *__fastcall sub_163840(_DWORD *a1)
{
  sub_22178C((int)a1, 0x3A8u);
  *a1 = dword_23DF24 + 6715064;
  return a1;
}


// ======================================================================
// ADDR: 0x16386c
// SYMBOL: sub_16386C
int sub_16386C()
{
  return dword_23DF24 + 9328804;
}


// ======================================================================
