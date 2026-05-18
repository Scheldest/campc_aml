// ADDR: 0x103e90
// SYMBOL: sub_103E90
int __fastcall sub_103E90(int a1, int a2)
{
  int v2; // r5
  int result; // r0

  v2 = a2;
  _android_log_print(4, "AXL", "SetModelIndex %d", a2);
  result = sub_1082F4(*(_DWORD *)(a1 + 8));
  if ( result )
  {
    result = sub_108480(v2);
    if ( *(_DWORD *)(a1 + 92) )
    {
      if ( !result )
        v2 = 0;
      sub_F8A54(a1, v2);
      return ((int (__fastcall *)(int))(dword_23DF24 + 3788393))(*(_DWORD *)(a1 + 92) + 664);
    }
  }
  return result;
}


// ======================================================================
