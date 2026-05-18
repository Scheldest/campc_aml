// ADDR: 0x108590
// SYMBOL: sub_108590
int __fastcall sub_108590(unsigned int *a1)
{
  unsigned int v1; // r0
  unsigned __int16 *v2; // r0

  v1 = *a1;
  if ( v1 <= 0x4E20 )
    v2 = (unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * v1) + 64);
  else
    v2 = (unsigned __int16 *)&dword_40;
  return *v2;
}


// ======================================================================
