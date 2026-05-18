// ADDR: 0x115174
// SYMBOL: sub_115174
int __fastcall sub_115174(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r0
  const char *v10; // r1
  int v11; // r0
  char v12; // r1

  if ( dword_23DF24 + 10030132 != a2 )
    return (*(int (__fastcall **)(int, int, int))(a1 + 64))(a2, a3, a4);
  if ( *(_BYTE *)(a1 + 84) )
  {
    v8 = *(_DWORD *)(a1 + 80);
    if ( v8 )
    {
      v9 = v8 + 8;
      v10 = "hud_ticks";
      if ( *(_BYTE *)(a1 + 85) )
        v10 = "SquareTick";
      sub_163C24(v9, v10, "SquareTick");
      v11 = *(_DWORD *)(a1 + 80);
      v12 = *(_BYTE *)(a1 + 85);
      *(_BYTE *)(a1 + 84) = 0;
      *(_BYTE *)(v11 + 32) = v12;
    }
  }
  if ( *(_BYTE *)(a1 + 85) )
    return sub_115204(a1, a3, a4);
  else
    return (*(int (__fastcall **)(int, int, int))(a1 + 64))(a2, a3, a4);
}


// ======================================================================
