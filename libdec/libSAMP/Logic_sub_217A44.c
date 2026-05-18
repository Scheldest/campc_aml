// ADDR: 0x217b0a
// SYMBOL: sub_217B0A
int __fastcall sub_217B0A(unsigned __int8 *a1)
{
  int v1; // r2

  v1 = a1[7];
  if ( v1 == 2 )
    return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 8))(a1);
  else
    return v1 == 0;
}


// ======================================================================
