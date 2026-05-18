// ADDR: 0x155bba
// SYMBOL: sub_155BBA
int __fastcall sub_155BBA(int a1, char a2)
{
  int result; // r0

  result = dword_23DEEC;
  if ( dword_23DEEC )
  {
    result = *(_DWORD *)(dword_23DEEC + 132);
    if ( result )
      return sub_137F94(result, a2);
  }
  return result;
}


// ======================================================================
