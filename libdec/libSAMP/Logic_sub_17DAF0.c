// ADDR: 0x17dbc4
// SYMBOL: sub_17DBC4
void __fastcall sub_17DBC4(_DWORD *a1, int *a2)
{
  int v2; // r5
  int v5; // r1
  _DWORD *v6; // r0
  int v7; // r2
  int v8; // r9
  int v9; // r0
  bool v10; // zf
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  _DWORD *v14; // r4
  int v15; // r11
  int i; // r6
  int v17; // r1
  _DWORD *v18; // r0
  int v19; // r1

  v2 = a1[3];
  if ( v2 )
  {
    v5 = a1[2];
    v6 = (_DWORD *)*a1;
    v7 = *a2;
    v8 = v5 + 1;
    a1[2] = v5 + 1;
    v6[v5] = v7;
    if ( v5 + 1 == v2 )
    {
      v8 = 0;
      a1[2] = 0;
    }
    if ( v8 == a1[1] )
    {
      v9 = (2 * v2) & 0x3FFFFFFE;
      v11 = v9 - 2 * v2;
      v10 = v9 == 2 * v2;
      v12 = 8 * v2;
      if ( !v10 )
        v11 = 1;
      if ( v11 )
        v12 = -1;
      v13 = operator new[](v12);
      v14 = (_DWORD *)*a1;
      v15 = v13;
      for ( i = 0; i != v2; ++i )
      {
        sub_221798(v8 + i, v2);
        *(_DWORD *)(v15 + 4 * i) = v14[v17];
      }
      a1[1] = 0;
      a1[2] = v2;
      a1[3] = 2 * v2;
      operator delete[](v14);
      *a1 = v15;
    }
  }
  else
  {
    v18 = (_DWORD *)operator new[](0x40u);
    *a1 = v18;
    a1[2] = 1;
    a1[1] = 0;
    v19 = *a2;
    a1[3] = 16;
    *v18 = v19;
  }
}


// ======================================================================
