// ADDR: 0x10d840
// SYMBOL: sub_10D840
int __fastcall sub_10D840(int a1)
{
  _DWORD *v1; // r5

  v1 = *(_DWORD **)(a1 + 4);
  if ( v1 )
  {
    sub_10E2B8(*(_DWORD *)(a1 + 4), v1[1]);
    operator delete(v1);
  }
  return a1;
}


// ======================================================================
