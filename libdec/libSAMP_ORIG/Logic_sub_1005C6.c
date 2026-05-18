// ADDR: 0x10069e
// SYMBOL: sub_10069E
int __fastcall sub_10069E(unsigned __int8 *a1)
{
  int v1; // r2

  v1 = a1[6];
  if ( v1 == 2 )
    return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 4))(a1);
  else
    return v1 == 0;
}


// ======================================================================
