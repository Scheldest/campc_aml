// ADDR: 0x222b70
// SYMBOL: sub_222B70
int __fastcall sub_222B70(int result)
{
  int (__fastcall *v1)(int, int); // r2

  v1 = *(int (__fastcall **)(int, int))(result + 8);
  if ( v1 )
    return v1(1, result);
  return result;
}


// ======================================================================
