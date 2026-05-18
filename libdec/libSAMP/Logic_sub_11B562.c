// ADDR: 0x11a5e8
// SYMBOL: sub_11A5E8
int __fastcall sub_11A5E8(int a1, unsigned int a2, int a3)
{
  int v3; // r4
  unsigned int v4; // r5

  v3 = a3;
  if ( a2 > 0x201FC || (int)a2 % 5 )
  {
    _android_log_print(6, "AXL", "modoader: invalid model offset %d for streamed texture %s", a2, a3);
  }
  else
  {
    v4 = a2 / 5;
    if ( !*(_BYTE *)(*(_DWORD *)(dword_23DF24 + 6782424) + 20 * (a2 / 5) + 7) )
    {
      v3 = sub_1273FC(*(unsigned __int8 *)(*(_DWORD *)(a1 + 64) + 6 * v4 + 315796));
      _android_log_print(3, "AXL", "modloadeer: load texture for model id %d from cd stream %s", v4, v3);
    }
  }
  return v3;
}


// ======================================================================
