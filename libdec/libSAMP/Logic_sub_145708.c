// ADDR: 0x150144
// SYMBOL: sub_150144
int __fastcall sub_150144(__int64 a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r6

  v3 = a1;
  LODWORD(a1) = HIDWORD(a1) >> 4;
  if ( HIDWORD(a1) >> 4 <= 0x7C )
  {
    v6 = HIDWORD(a1);
    LODWORD(a1) = sub_F2396(v3, HIDWORD(a1));
    if ( (_DWORD)a1 )
    {
      LODWORD(a1) = *(_DWORD *)(v3 + 4 * v6);
      if ( (_DWORD)a1 )
      {
        if ( *(_BYTE *)(v3 + v6 + 40000) )
        {
          if ( a2 )
            *(_WORD *)(a1 + 35) = 1;
          HIDWORD(a1) = a3;
          LODWORD(a1) = sub_109FFC(a1);
        }
      }
    }
  }
  return a1;
}


// ======================================================================
