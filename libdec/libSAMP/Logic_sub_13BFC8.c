// ADDR: 0x13db04
// SYMBOL: sub_13DB04
bool __fastcall sub_13DB04(int a1)
{
  const void *v2; // r0
  int v3; // r4
  _DWORD *v4; // r0

  if ( !*(_BYTE *)(a1 + 88) )
    return 0;
  v2 = *(const void **)(a1 + 8);
  if ( !v2 )
    return 0;
  v3 = 0;
  v4 = j___dynamic_cast(
         v2,
         (const struct __class_type_info *)&`typeinfo for'Widget,
         (const struct __class_type_info *)&`typeinfo for'ListBox::Panel,
         0);
  if ( v4 )
    return v4[23] == *(_DWORD *)(a1 + 84);
  return v3;
}


// ======================================================================
