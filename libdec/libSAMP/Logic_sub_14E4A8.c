// ADDR: 0xf7f98
// SYMBOL: sub_F7F98
int __fastcall sub_F7F98(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
    return ((int (__fastcall *)(_DWORD, int))(dword_23DF24 + 4983365))(*(_DWORD *)(result + 1088), 1);
  return result;
}


// ======================================================================
