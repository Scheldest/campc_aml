// ADDR: 0x1082e4
// SYMBOL: sub_1082E4
int sub_1082E4()
{
  return *(_DWORD *)dword_25C9C8;
}


// ======================================================================
// ADDR: 0x148bb0
// SYMBOL: sub_148BB0
int __fastcall sub_148BB0(int result, int a2)
{
  unsigned int v2; // r12
  int v3; // r1
  unsigned int *v4; // r0
  unsigned int v5; // r3
  bool v6; // zf

  v2 = 0;
  while ( *(_DWORD *)(result + 16388 + 4 * v2) != a2 )
  {
    if ( ++v2 == 4096 )
      return result;
  }
  if ( *(_DWORD *)(result + 4 * v2 + 4) )
  {
    v3 = result + 32772;
    if ( !*(_DWORD *)(result + 32772 + 4 * v2) && !*(_BYTE *)(3 * v2 + result + 49156) )
    {
      v4 = (unsigned int *)(result + 143364);
      *(_DWORD *)(v3 + 4 * v2) = 15;
      __dmb(0xBu);
      do
        v5 = __ldrex(v4);
      while ( __strex(v2, v4) );
      result = v5 + 1;
      v6 = v5 == -1;
      __dmb(0xBu);
      if ( v5 != -1 )
        v6 = v5 == v2;
      if ( !v6 )
        return _android_log_print(6, "AXL", "Loss pickedup event for pickup %d - overrided by pickup %d", v5, v2);
    }
  }
  return result;
}


// ======================================================================
