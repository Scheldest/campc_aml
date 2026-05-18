// ADDR: 0xed1d0
// SYMBOL: sub_ED1D0
int (__fastcall ***__fastcall sub_ED1D0(int a1))(_DWORD)
{
  int i; // r9
  int (__fastcall ***result)(_DWORD); // r0
  int (__fastcall ****j)(_DWORD); // r9
  int (__fastcall ****v5)(_DWORD); // r10

  for ( i = 0; i != 40; i += 4 )
  {
    result = *(int (__fastcall ****)(_DWORD))(a1 + i);
    if ( result )
      result = (int (__fastcall ***)(_DWORD))(**result)(result);
  }
  v5 = *(int (__fastcall *****)(_DWORD))(a1 + 44);
  for ( j = *(int (__fastcall *****)(_DWORD))(a1 + 40); j != v5; ++j )
  {
    result = *j;
    if ( *j )
      result = (int (__fastcall ***)(_DWORD))(**result)(result);
  }
  return result;
}


// ======================================================================
