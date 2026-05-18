// ADDR: 0x20652c
// SYMBOL: sub_20652C
int __fastcall sub_20652C(int a1, unsigned int a2)
{
  __int64 v2; // kr00_8
  int result; // r0

  v2 = *(_QWORD *)(a1 + 8);
  if ( a2 >= (HIDWORD(v2) - (int)v2) >> 2 || (result = *(_DWORD *)(v2 + 4 * a2)) == 0 )
    sub_E5754();
  return result;
}


// ======================================================================
