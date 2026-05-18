// ADDR: 0x1eed24
// SYMBOL: sub_1EED24
int __fastcall sub_1EED24(unsigned __int8 *a1, unsigned int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2

  v2 = *a1;
  v3 = *((_DWORD *)a1 + 1);
  if ( !(v2 << 31) )
    v3 = v2 >> 1;
  if ( v3 >= a2 )
    return sub_1EEDB2();
  else
    return sub_1EED48();
}


// ======================================================================
