// ADDR: 0xf8f1c
// SYMBOL: sub_F8F1C
_DWORD *__fastcall sub_F8F1C(int a1, int a2)
{
  _DWORD *result; // r0
  int v3; // r2

  result = *(_DWORD **)(a1 + 4);
  if ( result && *result != dword_23DF24 + 6716708 )
  {
    v3 = result[7] & 0x7FFFFFFD;
    if ( !a2 )
      v3 -= 2147483646;
    result[7] = v3;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf9000
// SYMBOL: sub_F9000
int __fastcall sub_F9000(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int result; // r0

  v2 = *(_DWORD *)(a1 + 4);
  if ( !v2 )
    return sub_2242C8(6, "AXL", "CEntity: Can't render entity - m_pEntity is nullptr");
  v3 = *(_DWORD *)(v2 + 24);
  v4 = sub_1084DC(*(unsigned __int16 *)(v2 + 38));
  if ( v3 && v4 )
    ((void (__fastcall *)(int))(dword_23DF24 + 6114113))(v3);
  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 72))(*(_DWORD *)(a1 + 4));
  if ( v3 )
    return ((int (__fastcall *)(_DWORD))(dword_23DF24 + 4260541))(*(_DWORD *)(a1 + 4));
  return result;
}


// ======================================================================
// ADDR: 0x105a24
// SYMBOL: sub_105A24
int __fastcall sub_105A24(int result, int a2, int a3)
{
  if ( *(_DWORD *)(result + 92) )
  {
    result = sub_F8E0E(result);
    if ( result )
      return ((int (__fastcall *)(int, int, int))(dword_23DF24 + 3718913))(result, a2, a3);
  }
  return result;
}


// ======================================================================
