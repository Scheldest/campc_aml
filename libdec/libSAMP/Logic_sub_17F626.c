// ADDR: 0x1822dc
// SYMBOL: sub_1822DC
int __fastcall sub_1822DC(int a1, __int64 a2, int a3, int a4)
{
  int v6; // r0
  int v8; // r10
  int v9; // r11
  int v10; // r1
  unsigned int v11; // r5
  int v12; // r6
  int result; // r0

  v6 = *(_DWORD *)(a1 + 832);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 8) )
    {
      v8 = HIDWORD(a2);
      v9 = a2;
      sub_189D3C(v6 + 24, *(unsigned __int16 *)(a1 + 8), a2, HIDWORD(a2), a3, a4);
      if ( *(unsigned __int16 *)(a1 + 8) >= 2u )
      {
        v11 = 1;
        v12 = 2136;
        do
        {
          sub_189D3C(*(_DWORD *)(a1 + 832) + v12, v10, v9, v8, a3, a4);
          ++v11;
          v12 += 2112;
        }
        while ( v11 < *(unsigned __int16 *)(a1 + 8) );
      }
    }
  }
  result = a1 + 2056;
  *(_WORD *)(a1 + 2066) = a4;
  *(_WORD *)(a1 + 2064) = a3;
  *(_QWORD *)(a1 + 2056) = a2;
  return result;
}


// ======================================================================
