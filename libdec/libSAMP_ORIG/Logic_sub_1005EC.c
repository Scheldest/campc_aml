// ADDR: 0x1006b2
// SYMBOL: sub_1006B2
int __fastcall sub_1006B2(unsigned __int8 *a1)
{
  int v1; // r2

  v1 = a1[7];
  if ( v1 == 2 )
    return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 8))(a1);
  else
    return v1 == 0;
}


// ======================================================================
