// ADDR: 0xfe160
// SYMBOL: sub_FE160
int __fastcall sub_FE160(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int result; // r0

  v2 = ((int (*)(void))((char *)&loc_1DB9B0 + dword_23DF24 + 180))();
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = dword_23DF24;
  while ( 1 )
  {
    result = ((int (__fastcall *)(int, int))((char *)&loc_1DB9B0 + v4))(v3, a1);
    if ( result )
      break;
    v4 = dword_23DF24;
    v3 = *(_DWORD *)(*(_DWORD *)(dword_23DF24 + 11026268) + v3);
    if ( !v3 )
      return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1639ec
// SYMBOL: sub_1639EC
int __fastcall sub_1639EC(int a1)
{
  int result; // r0
  int (__fastcall *v3)(int); // r2

  result = 0;
  if ( dword_23DF24 && dword_23DF24 != -6768392 )
  {
    v3 = *(int (__fastcall **)(int))(dword_23DF24 + 6768392);
    if ( v3 )
      return v3(a1);
    else
      return 0;
  }
  return result;
}


// ======================================================================
