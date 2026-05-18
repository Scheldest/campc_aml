// ADDR: 0x148f20
// SYMBOL: sub_148F20
int __fastcall sub_148F20(int result, unsigned int a2, int a3)
{
  if ( *(unsigned __int16 *)(result + 5024) == a2 )
  {
    result += 5060;
LABEL_6:
    *(_DWORD *)result = a3;
    return result;
  }
  if ( a2 >> 2 <= 0xFA )
  {
    result = *(_DWORD *)(result + 4 * a2 + 4);
    if ( result )
    {
      result += 32;
      goto LABEL_6;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x148f4a
// SYMBOL: sub_148F4A
int __fastcall sub_148F4A(int result, unsigned int a2, int a3)
{
  if ( *(unsigned __int16 *)(result + 5024) == a2 )
  {
    result += 5056;
LABEL_6:
    *(_DWORD *)result = a3;
    return result;
  }
  if ( a2 >> 2 <= 0xFA )
  {
    result = *(_DWORD *)(result + 4 * a2 + 4);
    if ( result )
    {
      result += 36;
      goto LABEL_6;
    }
  }
  return result;
}


// ======================================================================
