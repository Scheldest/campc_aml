// ADDR: 0x14f47c
// SYMBOL: sub_14F47C
int __fastcall sub_14F47C(int a1, int a2, unsigned int a3)
{
  __int64 *v3; // r6
  __int64 i; // r0
  int v6; // r2

  v3 = (__int64 *)(a1 + 9216);
  if ( a2 )
  {
    LODWORD(i) = bswap32(a3);
    *((_DWORD *)v3 + 3) = i;
  }
  else
  {
    *(_DWORD *)(a1 + 9228) = 0;
    sub_14F4C0();
    for ( i = *v3; (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 2 )
    {
      v6 = *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)i);
      if ( v6 )
      {
        *(_DWORD *)(v6 + 2524) = 0;
        *(_BYTE *)(v6 + 2520) = 0;
      }
    }
  }
  return i;
}


// ======================================================================
