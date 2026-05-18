// ADDR: 0x86fd6
// SYMBOL: sub_86FD6
int __fastcall sub_86FD6(int a1)
{
  int v1; // r1
  int v2; // r2

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 12) + (v1 >> 3));
  *(_DWORD *)(a1 + 8) = v1 + 1;
  return (unsigned __int8)(v2 << (v1 & 7)) >> 7;
}


// ======================================================================
