// ADDR: 0x17fe9e
// SYMBOL: sub_17FE9E
int __fastcall sub_17FE9E(int a1, _DWORD *a2, __int64 *a3, int a4, int a5)
{
  int result; // r0
  int v10; // r0
  bool v11; // zf
  __int64 *v12; // r6
  __int64 v13; // d16
  __int64 v14; // d17
  __int64 v15; // d18
  __int64 v16; // d19
  bool v17; // zf

  result = *(unsigned __int8 *)(a1 + 4);
  if ( result )
  {
    v10 = sub_17E2E4();
    sub_186FF8(v10);
    sub_17FF4A(a1);
    *(_BYTE *)(a1 + 2413) = 1;
    if ( a3 || a2 )
      goto LABEL_10;
    v11 = a4 == 0;
    if ( !a4 )
      v11 = a5 == 0;
    if ( !v11 )
    {
LABEL_10:
      if ( a2 && a3 )
      {
        *(_DWORD *)(a1 + 2376) = *a2;
        v13 = *a3;
        v14 = a3[1];
        v12 = a3 + 2;
        v15 = *v12;
        v16 = v12[1];
        *(_QWORD *)(a1 + 2380) = v13;
        *(_QWORD *)(a1 + 2388) = v14;
        *(_QWORD *)(a1 + 2396) = v15;
        *(_QWORD *)(a1 + 2404) = v16;
      }
      v17 = a4 == 0;
      if ( a4 )
        v17 = a5 == 0;
      if ( !v17 )
        sub_17FFBE(a1 + 2068);
      result = 0;
      *(_BYTE *)(a1 + 2412) = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 2412) = 1;
      return sub_17FF90(a1 + 2068);
    }
  }
  return result;
}


// ======================================================================
