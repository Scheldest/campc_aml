// ADDR: 0x151c60
// SYMBOL: sub_151C60
int __fastcall sub_151C60(int a1, unsigned int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r3
  double v7; // r0
  double v8; // d17
  double v9; // d16
  double v10; // r2
  int v11; // r5

  result = *(unsigned __int8 *)(a1 + 17);
  if ( result )
  {
    *(_BYTE *)(a1 + 17) = 0;
    v5 = sub_17E2E4(0);
    v6 = *(unsigned __int8 *)(a1 + 18);
    *(_DWORD *)(a1 + 40) += v5 - *(_DWORD *)(a1 + 44);
    if ( v6 )
    {
      if ( a2 < 0x3E8 || *(_BYTE *)(a1 + 19) )
        return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 8))(*(_DWORD *)(a1 + 4));
      v7 = sub_15DF12(*(_DWORD *)(a1 + 4));
      v8 = *(double *)(a1 + 24);
      v9 = (double)a2 / 1000.0 + v7;
      if ( v9 < v8 )
      {
        v10 = (double)a2 / 1000.0 + v7;
        LODWORD(v7) = *(_DWORD *)(a1 + 4);
LABEL_11:
        sub_15DF60(LODWORD(v7), HIDWORD(v7), LODWORD(v10), HIDWORD(v10));
        return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 8))(*(_DWORD *)(a1 + 4));
      }
      v11 = *(_DWORD *)(a1 + 4);
      if ( *(_BYTE *)(a1 + 16) )
      {
        v7 = fmod(v9, v8);
        v10 = v7;
        LODWORD(v7) = v11;
        goto LABEL_11;
      }
      return sub_15DF2E(*(_DWORD *)(a1 + 4));
    }
    else
    {
      result = *(_DWORD *)(a1 + 32) + a2;
      *(_DWORD *)(a1 + 32) = result;
    }
  }
  return result;
}


// ======================================================================
