// ADDR: 0x11ef14
// SYMBOL: sub_11EF14
void __fastcall sub_11EF14(int a1, int a2, int a3)
{
  int v5; // r1
  _DWORD *v6; // r4
  int *v7; // r5
  int v8; // r0
  int v9; // r0
  const std::nothrow_t *v10; // r1

  v5 = dword_23DF24;
  v6 = (_DWORD *)(dword_23DF24 + a1);
  v7 = *(int **)(dword_23DF24 + a2);
  if ( v7[136] <= *(_DWORD *)(dword_23DF24 + a1 + 544) )
  {
    v8 = *v7;
    v6[1] = v7[1];
    *v6 = v8;
    v5 = dword_23DF24;
    v6[136] = v7[136];
  }
  if ( *(int **)(v5 + 6791440) == v7 )
    *(_DWORD *)(v5 + 6791440) = v6;
  sub_1641C4(v5 + a3);
  v9 = dword_23DF24;
  *(_DWORD *)(dword_23DF24 + a3) = v6;
  sub_1641C4(v9 + a2);
  *(_DWORD *)(dword_23DF24 + a2) = v6;
  operator delete(v7, v10);
}


// ======================================================================
