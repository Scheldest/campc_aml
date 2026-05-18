// ADDR: 0x18a0a4
// SYMBOL: sub_18A0A4
int __fastcall sub_18A0A4(int a1)
{
  int result; // r0
  int i; // r1
  _DWORD *v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // lr
  int v7; // r2
  bool v8; // cf
  unsigned int v9; // r3
  int v10; // r3
  int *v11; // r4
  int v12; // lr
  int v13; // r1
  int v14; // t1
  __int64 v15; // kr10_8
  __int64 v16; // d16
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1

  result = a1 + 744;
  for ( i = 0; i != 16; i += 4 )
  {
    v4 = (_DWORD *)(a1 + 4 * i);
    v5 = v4[28];
    v6 = v4[27];
    v7 = v4[29];
    v8 = v5 >= v6;
    v9 = v5 - v6;
    if ( !v8 )
      v9 += v7;
    *(_DWORD *)(result + i) = v9;
  }
  v10 = *(_DWORD *)(a1 + 172);
  v11 = *(int **)(a1 + 168);
  v12 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 920) = 0;
  *(_DWORD *)(a1 + 816) = v12;
  if ( v10 )
  {
    v13 = 0;
    do
    {
      v14 = *v11++;
      --v10;
      v13 += *(_DWORD *)(v14 + 12);
    }
    while ( v10 );
    *(_DWORD *)(a1 + 920) = v13;
  }
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD *)(a1 + 1024);
  v17 = HIDWORD(v15) - v15;
  v18 = *(_DWORD *)(a1 + 84);
  if ( HIDWORD(v15) < (unsigned int)v15 )
    v17 += *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 924) = v17;
  v19 = 0;
  *(_QWORD *)(a1 + 928) = v16;
  while ( v18 )
  {
    v20 = *(_DWORD *)(v18 + 4);
    v18 = *(_DWORD *)(v18 + 200);
    v19 += v20;
  }
  *(_DWORD *)(a1 + 840) = v19;
  return result;
}


// ======================================================================
