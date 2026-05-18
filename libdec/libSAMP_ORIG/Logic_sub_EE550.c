// ADDR: 0xee64c
// SYMBOL: sub_EE64C
int __fastcall sub_EE64C(int result, unsigned int a2)
{
  int v2; // r4
  __int64 v3; // r2

  v3 = *(_QWORD *)result;
  v2 = HIDWORD(v3) - v3;
  HIDWORD(v3) = (HIDWORD(v3) - (int)v3) >> 2;
  if ( a2 > v2 >> 2 )
    return sub_F65A4();
  if ( HIDWORD(v3) > a2 )
    *(_DWORD *)(result + 4) = v3 + 4 * a2;
  return result;
}


// ======================================================================
