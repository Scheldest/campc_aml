// ADDR: 0x8fc24
// SYMBOL: sub_8FC24
int __fastcall sub_8FC24(int a1, int a2)
{
  int v2; // lr
  int v3; // r3
  int v4; // r2
  int v5; // r4
  int v6; // r2
  bool v7; // zf
  int v8; // r4
  int v9; // r0
  int result; // r0

  v2 = dword_1ACF68 + 6520;
  v3 = *(_DWORD *)(dword_1ACF68 + 6520);
  if ( a1 )
  {
    v4 = v3 - 1;
    while ( v4 + 1 >= 1 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6528) + 4 * v4--);
      if ( v5 == a1 )
      {
        v3 = v4 + 1;
        break;
      }
    }
  }
  if ( v3 < 1 )
  {
LABEL_17:
    if ( *(_DWORD *)(dword_1ACF68 + 6836) )
    {
      *(_BYTE *)(dword_1ACF68 + 6937) = 0;
      *(_BYTE *)(v2 + 412) = 0;
      *(_DWORD *)(v2 + 316) = 0;
      *(_DWORD *)(v2 + 320) = 0;
      *(_DWORD *)(v2 + 404) = 0;
    }
    result = *(_DWORD *)(v2 + 292);
    if ( result >= 1 )
      return sub_98854(0);
  }
  else
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6528) - 4 + 4 * v3);
      v7 = v6 == a2;
      if ( v6 != a2 )
        v7 = *(_BYTE *)(v6 + 123) == 0;
      if ( !v7 )
      {
        v8 = *(_DWORD *)(v6 + 8);
        if ( (v8 & 0x1000000) == 0 && (_UNKNOWN *)(v8 & (unsigned int)&unk_40200) != &unk_40200 )
          break;
      }
      if ( (unsigned int)v3-- <= 1 )
        goto LABEL_17;
    }
    v9 = *(_DWORD *)(v6 + 776);
    if ( !v9 )
      v9 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6528) - 4 + 4 * v3);
    return sub_8C628(v9);
  }
  return result;
}


// ======================================================================
