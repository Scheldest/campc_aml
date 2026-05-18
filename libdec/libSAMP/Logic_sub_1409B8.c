// ADDR: 0xf89e0
// SYMBOL: sub_F89E0
int __fastcall sub_F89E0(int a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  int result; // r0

  v2 = *(_DWORD **)(a1 + 4);
  if ( !v2 )
    return sub_2242C8(6, "AXL", "CEntity: Can't read turn speed vector - m_pEntity is nullptr");
  *a2 = v2[21];
  a2[1] = v2[22];
  result = v2[23];
  a2[2] = result;
  return result;
}


// ======================================================================
