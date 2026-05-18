// ADDR: 0x1413c0
// SYMBOL: sub_1413C0
int __fastcall sub_1413C0(int a1, const void *a2)
{
  int result; // r0

  j_memcpy((void *)(a1 + 112), a2, 0x2Eu);
  result = 1;
  *(_BYTE *)(a1 + 36) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x1413d6
// SYMBOL: sub_1413D6
int __fastcall sub_1413D6(int result, int a2)
{
  int v2; // r4
  int v3; // r0

  if ( a2 )
  {
    v2 = result;
    v3 = *(_DWORD *)(result + 28);
    if ( v3 )
    {
      sub_1048BC(v3);
      sub_103E90(*(_DWORD *)(v2 + 28), *(_DWORD *)(v2 + 113));
    }
    result = 1;
    *(_BYTE *)(v2 + 33) = 1;
  }
  return result;
}


// ======================================================================
