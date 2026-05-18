// ADDR: 0x1ee59c
// SYMBOL: sub_1EE59C
int __fastcall sub_1EE59C(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r4
  __int64 v3; // r2

  v2 = *a2;
  v3 = *(_QWORD *)(a2 + 4);
  if ( (v2 & 1) == 0 )
  {
    HIDWORD(v3) = a2 + 1;
    LODWORD(v3) = v2 >> 1;
  }
  return sub_2245F8(a1, HIDWORD(v3), v3);
}


// ======================================================================
