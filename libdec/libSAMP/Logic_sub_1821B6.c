// ADDR: 0x1821d6
// SYMBOL: sub_1821D6
void __fastcall sub_1821D6(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r8
  unsigned int v6; // r0
  unsigned int v7; // r9
  int v8; // r0
  int v9; // r1
  int v10; // r5
  int v11; // r3
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  int v15; // r1
  unsigned int v16; // r0
  int v17; // r0
  int v18; // r4
  _DWORD *v19; // r5
  int v20; // r6
  int i; // r10
  int v22; // r1
  _DWORD *v23; // r0
  int v24; // r1

  v3 = a1[3];
  if ( v3 )
  {
    v6 = a1[1];
    if ( !v6 )
      v6 = v3;
    v7 = v6 - 1;
    a1[1] = v6 - 1;
    if ( a3 )
    {
      v8 = 4 * v6;
      v9 = a3;
      do
      {
        --v9;
        v10 = *(_DWORD *)(*a1 + v8);
        v11 = *a1 + v8;
        v8 += 4;
        *(_DWORD *)(v11 - 4) = v10;
      }
      while ( v9 );
    }
    v12 = a1[2];
    *(_DWORD *)(*a1 + 4 * (a3 + v7)) = *a2;
    if ( v12 == v7 )
    {
      v13 = (2 * v3) & 0x3FFFFFFE;
      v15 = v13 - 2 * v3;
      v14 = v13 == 2 * v3;
      v16 = 8 * v3;
      if ( !v14 )
        v15 = 1;
      if ( v15 )
        v16 = -1;
      v17 = operator new[](v16);
      v18 = v3;
      if ( v3 <= 1 )
        v18 = 1;
      v19 = (_DWORD *)*a1;
      v20 = v17;
      for ( i = 0; i != v18; ++i )
      {
        sub_221798(v7 + i, v3);
        *(_DWORD *)(v20 + 4 * i) = v19[v22];
      }
      a1[1] = 0;
      a1[2] = v3;
      a1[3] = 2 * v3;
      operator delete[](v19);
      *a1 = v20;
    }
  }
  else
  {
    v23 = (_DWORD *)operator new[](0x40u);
    *a1 = v23;
    a1[2] = 1;
    a1[1] = 0;
    v24 = *a2;
    a1[3] = 16;
    *v23 = v24;
  }
}


// ======================================================================
