// ADDR: 0x10df10
// SYMBOL: sub_10DF10
int *__fastcall sub_10DF10(int a1)
{
  int v2; // r0
  int *result; // r0
  _DWORD *v4; // r1
  int *v5; // r4
  _DWORD *v6; // t1
  int v7; // r3
  _DWORD *v8; // r2
  _DWORD *v9; // r2

  v2 = (unsigned __int8)byte_263280;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_263280) )
  {
    dword_26327C = dword_23DF24 + 9803132;
    j___cxa_guard_release((__guard *)&byte_263280);
  }
  result = (int *)dword_26327C;
  if ( *(_DWORD *)dword_26327C != *(_DWORD *)(a1 + 12) )
  {
    v6 = *(_DWORD **)(a1 + 4);
    v5 = (int *)(a1 + 4);
    v4 = v6;
    v5[2] = *(_DWORD *)dword_26327C;
    if ( v6 )
    {
      v7 = *result;
      result = v5;
      do
      {
        v8 = v4;
        if ( v4[4] < v7 )
          v8 = v4 + 1;
        v9 = (_DWORD *)*v8;
        if ( v4[4] >= v7 )
          result = v4;
        v4 = v9;
      }
      while ( v9 );
      if ( result != v5 )
      {
        result = (int *)result[4];
        if ( v7 >= (int)result )
        {
          _android_log_print(3, "AXL", "Switch water for interior %d", v7);
          sub_10D85C();
          return (int *)((int (*)(void))(dword_23DF24 + 5845689))();
        }
      }
    }
  }
  return result;
}


// ======================================================================
