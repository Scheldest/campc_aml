// ADDR: 0x18b9ec
// SYMBOL: sub_18B9EC
unsigned int __fastcall sub_18B9EC(_DWORD *a1, unsigned int a2)
{
  unsigned int result; // r0

  result = a1[1];
  if ( result > a2 )
  {
    j_memmove((void *)(*a1 + 4 * a2), (const void *)(*a1 + 4 * a2 + 4), 4 * (result + ~a2));
    result = a1[1] - 1;
    a1[1] = result;
  }
  return result;
}


// ======================================================================
