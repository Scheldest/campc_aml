// ADDR: 0x129b60
// SYMBOL: sub_129B60
int __fastcall sub_129B60(int a1)
{
  int v2; // r5
  int v3; // r1
  _DWORD v5[4]; // [sp+0h] [bp-28h] BYREF
  _DWORD *v6; // [sp+10h] [bp-18h]

  v6 = v5;
  v5[0] = &off_22D794;
  v2 = sub_1642EC(dword_23DF24 + 6111232, v5);
  if ( v5 == v6 )
  {
    v3 = 4;
  }
  else
  {
    if ( !v6 )
      goto LABEL_6;
    v3 = 5;
  }
  (*(void (**)(void))(*v6 + 4 * v3))();
LABEL_6:
  if ( v2 )
    _android_log_print(6, "AXL", "Can't extend render pools ( CVisibilityPlugins::m_alphaEntityList )");
  return a1;
}


// ======================================================================
