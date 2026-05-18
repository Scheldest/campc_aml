// ADDR: 0xfc834
// SYMBOL: sub_FC834
int __fastcall sub_FC834(_BYTE *a1, unsigned int a2)
{
  if ( a2 <= 0x63 )
    return sub_FC6E8(a1, a2);
  if ( a2 >> 3 > 0x7C )
    return sub_FC6F8((int)a1, a2);
  return sub_FC860(a1);
}


// ======================================================================
