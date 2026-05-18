// ADDR: 0x181d36
// SYMBOL: sub_181D36
int __fastcall sub_181D36(_DWORD *a1, int a2)
{
  int v4; // r0

  v4 = (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  if ( !v4 )
  {
    if ( a2 >= 560 )
      a2 = 560;
    if ( a2 <= 512 )
      a2 = 512;
    a1[504] = a2;
  }
  return v4 ^ 1;
}


// ======================================================================
