// ADDR: 0xf9104
// SYMBOL: sub_F9104
int __fastcall sub_F9104(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  if ( result )
    return ((int (*)(void))(dword_23DF24 + 4112375))();
  return result;
}


// ======================================================================
// ADDR: 0xf9124
// SYMBOL: sub_F9124
int __fastcall sub_F9124(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return ((int (__fastcall *)(_DWORD))(dword_23DF24 + 6098977))(*(_DWORD *)(v1 + 24));
  _android_log_print(6, "AXL", "CEntity: Can't call `GetAnimHierarchyFromSkinClump` - m_pEntity is nullptr");
  return 0;
}


// ======================================================================
