// ADDR: 0x180642
// SYMBOL: sub_180642
int __fastcall sub_180642(int a1, int a2, _WORD *a3)
{
  int v3; // lr
  int v4; // r12
  int result; // r0
  int v6; // r0

  v3 = *(_DWORD *)(a1 + 832);
  if ( !v3 || *(_BYTE *)(a1 + 4) )
    goto LABEL_3;
  v6 = *(unsigned __int16 *)(a1 + 8);
  if ( a2 )
  {
    if ( v6 )
    {
      v4 = 0;
      do
      {
        if ( *(_BYTE *)v3 && *(_DWORD *)(v3 + 2108) == 8 )
        {
          if ( v4 < (unsigned __int16)*a3 )
          {
            *(_DWORD *)(a2 + 8 * v4) = *(_DWORD *)(v3 + 4);
            *(_WORD *)(a2 + 8 * v4 + 4) = *(_WORD *)(v3 + 8);
          }
          ++v4;
        }
        v3 += 2112;
        --v6;
      }
      while ( v6 );
      goto LABEL_4;
    }
LABEL_3:
    LOWORD(v4) = 0;
    goto LABEL_4;
  }
  if ( !v6 )
    goto LABEL_3;
  LOWORD(v4) = 0;
  do
  {
    if ( *(_BYTE *)v3 && *(_DWORD *)(v3 + 2108) == 8 )
      LOWORD(v4) = v4 + 1;
    v3 += 2112;
    --v6;
  }
  while ( v6 );
LABEL_4:
  result = 0;
  *a3 = v4;
  return result;
}


// ======================================================================
