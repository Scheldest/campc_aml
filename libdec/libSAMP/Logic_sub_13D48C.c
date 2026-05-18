// ADDR: 0x13d66c
// SYMBOL: sub_13D66C
int __fastcall sub_13D66C(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // s0
  int v10; // r1

  v8 = sub_167F4C(a1);
  v9 = *(int *)(a2 + 116);
  v10 = **(_DWORD **)(*(_DWORD *)(v8 + 140) + 60);
  if ( *(float *)&v9 == 0.0 )
    v9 = *(int *)(v10 + 16);
  return sub_178B18(a1, v10, v9, 2139095039, 0.0, a3, a4, 0);
}


// ======================================================================
