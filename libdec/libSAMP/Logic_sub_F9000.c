// ADDR: 0x1084dc
// SYMBOL: sub_1084DC
bool __fastcall sub_1084DC(unsigned int a1)
{
  _DWORD *v1; // r1

  if ( a1 <= 0x4E20 )
  {
    v1 = *(_DWORD **)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1);
    if ( v1 )
      return *v1 - dword_23DF24 == 6715064;
    _android_log_print(5, "AXL", "Can't get model info for model %d", a1);
  }
  return 0;
}


// ======================================================================
