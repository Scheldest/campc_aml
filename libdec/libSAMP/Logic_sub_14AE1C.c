// ADDR: 0x109f60
// SYMBOL: sub_109F60
int __fastcall sub_109F60(int a1)
{
  int v2; // r1
  bool v3; // zf
  int result; // r0
  int v5; // r2

  if ( !*(_DWORD *)(a1 + 12) || !sub_108354(*(_DWORD *)(a1 + 8)) )
    return 0;
  v2 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 12) + 38);
  if ( (unsigned int)(v2 - 584) > 0x1B || ((1 << (v2 - 72)) & 0xDC00081) == 0 )
  {
    v3 = v2 == 435;
    if ( v2 != 435 )
      v3 = v2 == 450;
    if ( !v3 )
    {
      v5 = 0;
      while ( *(_DWORD *)((char *)&unk_B3CC4 + v5) != v2 )
      {
        v5 += 4;
        result = 0;
        if ( v5 == 40 )
          return result;
      }
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0x109fc4
// SYMBOL: sub_109FC4
bool __fastcall sub_109FC4(int a1)
{
  return *(_DWORD *)(a1 + 12) && sub_108354(*(_DWORD *)(a1 + 8)) && *(_WORD *)(*(_DWORD *)(a1 + 12) + 38) == 525;
}


// ======================================================================
