// ADDR: 0x12b368
// SYMBOL: sub_12B368
int __fastcall sub_12B368(int a1)
{
  int v2; // r1
  int v3; // r5
  int v4; // r0

  v2 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)a1 = &off_22D908;
  if ( v2 )
  {
    v3 = sub_167F4C();
    off_2636C8(*(_DWORD *)(a1 + 28));
    v4 = *(_DWORD *)(v3 + 140);
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(v4 + 8) = 0;
  }
  if ( *(unsigned __int8 *)(a1 + 12) << 31 )
    operator delete(*(void **)(a1 + 20));
  return a1;
}


// ======================================================================
