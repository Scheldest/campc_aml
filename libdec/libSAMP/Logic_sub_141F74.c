// ADDR: 0xf977c
// SYMBOL: sub_F977C
int __fastcall sub_F977C(int a1, __int16 a2)
{
  int result; // r0
  int v3; // r0

  *(_BYTE *)(dword_23DF24 + 10998072) = a2;
  result = *(unsigned __int8 *)(a1 + 12);
  if ( !result )
  {
    v3 = dword_23DF24;
    *(_WORD *)(dword_23DF24 + 10998068) = a2;
    result = v3 + 10998068;
    *(_WORD *)(result + 2) = a2;
  }
  return result;
}


// ======================================================================
