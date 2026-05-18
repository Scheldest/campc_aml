// ADDR: 0x151b38
// SYMBOL: sub_151B38
int __fastcall sub_151B38(int a1, unsigned int a2)
{
  int result; // r0
  int v4; // r0
  int v6; // r6
  double v7; // r0
  double v8; // d8
  double v9; // d16
  double v10; // d8
  int v11; // r0
  double v12; // r2

  result = *(unsigned __int8 *)(a1 + 17);
  if ( !result )
  {
    v4 = *(unsigned __int8 *)(a1 + 18);
    *(_BYTE *)(a1 + 17) = 1;
    if ( !v4 )
    {
      v11 = *(_DWORD *)(a1 + 32) - a2;
      *(_DWORD *)(a1 + 32) = v11;
LABEL_16:
      result = sub_17E2E4(v11);
      *(_DWORD *)(a1 + 44) = result;
      return result;
    }
    if ( a2 >= 0x3E8 && !*(_BYTE *)(a1 + 19) )
    {
      v6 = *(unsigned __int8 *)(a1 + 16);
      v7 = COERCE_DOUBLE(sub_15DF12(*(_DWORD *)(a1 + 4)));
      v8 = v7;
      if ( v6 )
      {
        v9 = v7 + (double)a2 / -1000.0;
        if ( v9 < 0.0 )
        {
          v10 = *(double *)(a1 + 24);
          v7 = fmod(v9, v10);
          v9 = v10 + v7;
        }
      }
      else
      {
        LODWORD(v7) = sub_15DF00(*(_DWORD *)(a1 + 4));
        if ( LODWORD(v7) || v8 >= *(double *)(a1 + 24) )
        {
          v12 = (double)(unsigned int)(sub_17E2E4(LODWORD(v7)) - *(_DWORD *)(a1 + 40)) / 1000.0 - (double)a2 / 1000.0;
          sub_15DF60(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 4), LODWORD(v12), HIDWORD(v12));
          (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 8))(*(_DWORD *)(a1 + 4));
          goto LABEL_15;
        }
        v9 = v8 + (double)a2 / -1000.0;
        if ( v9 > 0.0 )
          v9 = 0.0;
      }
      sub_15DF60(*(_DWORD *)(a1 + 4), HIDWORD(v7), LODWORD(v9), HIDWORD(v9));
    }
LABEL_15:
    v11 = sub_15DEFA(*(_DWORD *)(a1 + 4));
    goto LABEL_16;
  }
  return result;
}


// ======================================================================
