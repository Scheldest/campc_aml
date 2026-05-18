// ADDR: 0x105ef4
// SYMBOL: sub_105EF4
int __fastcall sub_105EF4(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 92);
  if ( result )
    *(_DWORD *)(result + 1156) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x105efe
// SYMBOL: sub_105EFE
int __fastcall sub_105EFE(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 92);
  if ( v1 )
    return *(_DWORD *)(v1 + 1156);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x105f0c
// SYMBOL: sub_105F0C
bool __fastcall sub_105F0C(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 92);
  return v1 && *(unsigned __int8 *)(v1 + 1156) << 30;
}


// ======================================================================
