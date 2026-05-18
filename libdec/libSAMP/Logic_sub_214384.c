// ADDR: 0x21451c
// SYMBOL: sub_21451C
int __fastcall sub_21451C(_BYTE *a1, unsigned int a2)
{
  if ( a2 <= 0x63 )
    return sub_2143D0(a1, a2);
  if ( a2 >> 3 > 0x7C )
    return sub_2143E0((int)a1, a2);
  return sub_214548(a1);
}


// ======================================================================
