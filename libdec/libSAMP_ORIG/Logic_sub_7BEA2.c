// ADDR: 0x72d9c
// SYMBOL: sub_72D9C
int __fastcall sub_72D9C(int a1)
{
  int result; // r0
  int v3; // r5

  _android_log_print(4, "SAMP_ORIG", "ImGuiWrapper::shutdown");
  result = *(_DWORD *)(a1 + 32);
  if ( result )
  {
    v3 = sub_8C514(off_114AE4);
    off_11756C(*(_DWORD *)(a1 + 32));
    result = *(_DWORD *)(v3 + 140);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(result + 8) = 0;
  }
  return result;
}


// ======================================================================
