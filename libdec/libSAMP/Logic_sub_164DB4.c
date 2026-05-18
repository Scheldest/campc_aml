// ADDR: 0x164e4c
// SYMBOL: sub_164E4C
int __fastcall sub_164E4C(int a1, int a2, int a3)
{
  int v3; // r9
  int v4; // lr
  int v5; // r5
  int v6; // r4
  int v7; // r6
  int result; // r0

  if ( a3 < 1 )
  {
    v4 = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    do
    {
      LOBYTE(v5) = *(_BYTE *)(a1 + v3);
      if ( !(_BYTE)v5 )
        break;
      if ( (*(_BYTE *)(a1 + v3) & 0x80) != 0 )
      {
        if ( (*(_BYTE *)(a1 + v3) & 0x20) != 0 )
          return 0;
        ++v3;
        v5 = *(_BYTE *)(a1 + v3) & 0x3F | ((v5 & 0x1F) << 6);
        v6 = v5;
        if ( v5 == 235 )
          v5 = 1105;
        if ( v6 == 203 )
          v5 = 1025;
        if ( (unsigned int)(v5 - 1040) > 0x3F )
        {
          if ( (v5 & 0xFFFFFF80) != 0x80 )
          {
            if ( (v5 & 0xFFFFFFFE) == 0x402 )
            {
              LOBYTE(v5) = v5 + 126;
            }
            else
            {
              v7 = 0;
              while ( v5 != *((_DWORD *)&unk_BAB70 + 2 * v7 + 1) )
              {
                if ( ++v7 == 61 )
                  return 0;
              }
              LOBYTE(v5) = *((_BYTE *)&unk_BAB70 + 8 * v7);
            }
          }
        }
        else
        {
          LOBYTE(v5) = v5 - 80;
        }
      }
      *(_BYTE *)(a2 + v4) = v5;
      ++v3;
      ++v4;
    }
    while ( v3 < a3 );
  }
  result = 1;
  *(_BYTE *)(a2 + v4) = 0;
  return result;
}


// ======================================================================
