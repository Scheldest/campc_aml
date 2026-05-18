// ADDR: 0x107e64
// SYMBOL: sub_107E64
int __fastcall sub_107E64(int a1, int a2)
{
  sub_108C68(*(_DWORD *)(a1 + 2472), a2);
  return a1;
}


// ======================================================================
// ADDR: 0x14f404
// SYMBOL: sub_14F404
int __fastcall sub_14F404(int a1, int a2)
{
  int v2; // r6
  unsigned __int16 *v3; // r4
  unsigned __int16 *v4; // r0
  size_t v5; // r5

  v2 = a1 + 9216;
  v3 = *(unsigned __int16 **)(a1 + 9216);
  v4 = *(unsigned __int16 **)(a1 + 9220);
  if ( v3 != v4 )
  {
    while ( *v3 != a2 )
    {
      if ( ++v3 == v4 )
        return 0;
    }
  }
  if ( v3 == v4 )
    return 0;
  v5 = (char *)v4 - (char *)(v3 + 1);
  if ( v4 != v3 + 1 )
    j_memmove(v3, v3 + 1, v5);
  *(_DWORD *)(v2 + 4) = (char *)v3 + v5;
  return 1;
}


// ======================================================================
