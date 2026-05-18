// ADDR: 0x155fb0
// SYMBOL: sub_155FB0
int __fastcall sub_155FB0(int a1, __int16 a2)
{
  int v2; // r0

  v2 = sub_152694(*(_DWORD *)(a1 + 88), a2);
  if ( !v2 )
    return -1;
  if ( *(_BYTE *)(v2 + 30) )
    return 0;
  return (int)(float)(*(float *)(v2 + 32) * 100.0);
}


// ======================================================================
// ADDR: 0x17c814
// SYMBOL: sub_17C814
int sub_17C814()
{
  int v0; // r0
  int v1; // r4
  int result; // r0

  v0 = sub_17C080();
  if ( !v0 )
    return sub_2242C8(4, "AXL", "Env not loaded (removeAllSlidersFormPlayersVoiceSettings)");
  v1 = v0;
  sub_17C1B8(v0);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 912))(v1);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 64))(v1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 68))(v1);
  }
  return result;
}


// ======================================================================
// ADDR: 0x17c868
// SYMBOL: sub_17C868
int __fastcall sub_17C868(int a1, int a2, int a3, int a4, unsigned __int8 *a5)
{
  int v5; // r0
  int v6; // r4
  int result; // r0
  int v8[8]; // [sp+10h] [bp-20h] BYREF

  v5 = sub_17C080();
  if ( !v5 )
    return sub_2242C8(4, "AXL", "Env not loaded (addSliderToAzVoicePlayersSettings)");
  v6 = v5;
  sub_17C5B0(v5, a5, v8);
  sub_17C1B8(v6);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 912))(v6);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 64))(v6);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 68))(v6);
  }
  return result;
}


// ======================================================================
