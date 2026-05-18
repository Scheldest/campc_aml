// ADDR: 0x10ad74
// SYMBOL: sub_10AD74
int __fastcall sub_10AD74(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}


// ======================================================================
// ADDR: 0x10ad8c
// SYMBOL: sub_10AD8C
int __fastcall sub_10AD8C(int a1, int a2)
{
  int result; // r0

  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, a2);
  result = 0;
  if ( !*(_DWORD *)(a2 + 4) )
    return -6549;
  return result;
}


// ======================================================================
