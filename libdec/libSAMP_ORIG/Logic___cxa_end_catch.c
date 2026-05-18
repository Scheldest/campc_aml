// ADDR: 0x10aa60
// SYMBOL: sub_10AA60
int __fastcall sub_10AA60(int result)
{
  int (__fastcall *v1)(int, int); // r2

  v1 = *(int (__fastcall **)(int, int))(result + 8);
  if ( v1 )
    return v1(1, result);
  return result;
}


// ======================================================================
