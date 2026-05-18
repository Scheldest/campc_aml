// ADDR: 0xe4f58
// SYMBOL: sub_E4F58
int sub_E4F58()
{
  return dword_23751C;
}


// ======================================================================
// ADDR: 0x12d98c
// SYMBOL: sub_12D98C
unsigned int __fastcall sub_12D98C(int a1, int a2, int a3, unsigned int a4, unsigned int a5, float a6)
{
  unsigned int result; // r0
  float v9[2]; // [sp+8h] [bp-28h] BYREF
  _QWORD v10[4]; // [sp+10h] [bp-20h] BYREF

  result = *(_DWORD *)a3;
  v10[0] = __PAIR64__(a5, a4);
  if ( result )
  {
    if ( sub_E4F88() )
    {
      sub_12AE34(a2, v10, (__int64 *)(a3 + 40), (unsigned __int8 *)(a3 + 28), 1, a6);
      sub_12B090(v9, a2, (unsigned __int8 *)(a3 + 28), a6);
      *(float *)v10 = v9[0] + *(float *)v10;
    }
    if ( *(_DWORD *)a3 == 2 )
    {
      sub_12AE34(a2, v10, (__int64 *)(a3 + 56), (unsigned __int8 *)(a3 + 16), 1, a6);
      sub_12B090(v9, a2, (unsigned __int8 *)(a3 + 16), a6);
      *(float *)v10 = v9[0] + *(float *)v10;
    }
    return sub_12AE34(a2, v10, (__int64 *)(a3 + 40), (unsigned __int8 *)(a3 + 4), 1, a6);
  }
  return result;
}


// ======================================================================
