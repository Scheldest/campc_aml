// ADDR: 0x17a43c
// SYMBOL: sub_17A43C
int __fastcall sub_17A43C(int a1, int a2, int a3, int a4, __int16 a5, __int16 a6, int a7, int a8, int a9, int a10)
{
  __int16 v10; // r3
  int v11; // r4
  int v12; // r2
  int v13; // r2
  _WORD *v14; // r6
  _BYTE *v15; // r3

  if ( a4 )
  {
    v10 = a8;
    if ( a3 )
    {
      v11 = 7 * a2++;
      *(_WORD *)(a1 + 2 * v11) = (unsigned int)(a9 + a7) >> 1;
      v12 = a1 + 2 * v11;
      *(_WORD *)(v12 + 6) = a10;
      *(_WORD *)(v12 + 4) = a9;
      *(_WORD *)(v12 + 2) = (unsigned int)(a10 + a8) >> 1;
      *(_BYTE *)(v12 + 12) = 3;
    }
    *(_WORD *)(a1 + 14 * a2) = a5;
    v13 = a1 + 14 * a2;
    *(_WORD *)(v13 + 4) = a7;
    *(_WORD *)(v13 + 2) = a6;
    *(_BYTE *)(v13 + 12) = 3;
  }
  else
  {
    v14 = (_WORD *)(a1 + 14 * a2);
    v15 = v14 + 6;
    *v14 = a5;
    if ( a3 )
    {
      *v15 = 3;
      v10 = a10;
      v14[2] = a9;
    }
    else
    {
      *v15 = 2;
      v10 = 0;
      v14[2] = 0;
    }
    v14[1] = a6;
  }
  *(_WORD *)(a1 + 14 * a2 + 6) = v10;
  return a2 + 1;
}


// ======================================================================
