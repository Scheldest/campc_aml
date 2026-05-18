// ADDR: 0x217af6
// SYMBOL: sub_217AF6
int __fastcall sub_217AF6(unsigned __int8 *a1)
{
  int v1; // r2

  v1 = a1[6];
  if ( v1 == 2 )
    return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 4))(a1);
  else
    return v1 == 0;
}


// ======================================================================
