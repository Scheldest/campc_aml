// ADDR: 0x1389e4
// SYMBOL: sub_1389E4
unsigned int __fastcall sub_1389E4(int a1)
{
  unsigned int result; // r0
  int v3; // r1
  int v4; // r1

  result = sub_F0B30() - dword_3141F8;
  if ( result <= 0x1F4 )
  {
    if ( dword_239028 == *(_DWORD *)(a1 + 116) )
    {
      result = dword_381BF4;
      if ( !*(_BYTE *)(dword_381BF4 + 107) )
      {
        result = *(unsigned __int8 *)(dword_381BF4 + 106);
        if ( !*(_BYTE *)(dword_381BF4 + 106) )
          return sub_12DBAC(*(_DWORD *)(dword_23DEEC + 96), "/azvoice", 8u);
      }
    }
    else
    {
      result = (unsigned int)&word_3141DC;
      if ( HIBYTE(word_3141DC) )
      {
        dword_3141E0 = *(_DWORD *)(a1 + 116);
        return sub_138038(0);
      }
      else
      {
        v3 = (unsigned __int8)byte_3141E4;
        byte_3141E4 ^= 1u;
        if ( v3 )
          LOBYTE(v4) = 0;
        else
          v4 = *(unsigned __int8 *)(a1 + 112);
        LOBYTE(word_3141DC) = v4;
      }
    }
  }
  return result;
}


// ======================================================================
