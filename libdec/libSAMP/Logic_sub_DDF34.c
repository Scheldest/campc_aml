// ADDR: 0xddfc4
// SYMBOL: sub_DDFC4
int __fastcall sub_DDFC4(int a1, unsigned __int8 a2)
{
  int v2; // r4
  int v3; // r0
  int v4; // r1
  int v5; // r2
  bool v6; // zf
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r2

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = v3 + 1;
  if ( *(_DWORD *)(v2 + 12) < (unsigned int)(v3 + 1) )
  {
    (**(void (__fastcall ***)(int))v2)(v2);
    v3 = *(_DWORD *)(v2 + 8);
    v4 = v3 + 1;
  }
  v5 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v2 + 8) = v4;
  *(_BYTE *)(v5 + v3) = 39;
  LOBYTE(v3) = 1;
  if ( a2 >= 0x20u && a2 != 34 )
  {
    v6 = a2 == 92;
    if ( a2 != 92 )
      v6 = a2 == 127;
    if ( !v6 )
      v3 = fmt::v8::detail::is_printable((fmt::v8::detail *)a2, 0x27u) ^ 1;
  }
  if ( ((unsigned __int8)v3 & (a2 != 34)) != 0 || a2 == 39 )
  {
    v2 = sub_DE078(v2);
  }
  else
  {
    v7 = *(_DWORD *)(v2 + 8);
    v8 = v7 + 1;
    if ( *(_DWORD *)(v2 + 12) < (unsigned int)(v7 + 1) )
    {
      (**(void (__fastcall ***)(int))v2)(v2);
      v7 = *(_DWORD *)(v2 + 8);
      v8 = v7 + 1;
    }
    v9 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v2 + 8) = v8;
    *(_BYTE *)(v9 + v7) = a2;
  }
  v10 = *(_DWORD *)(v2 + 8);
  v11 = v10 + 1;
  if ( *(_DWORD *)(v2 + 12) < (unsigned int)(v10 + 1) )
  {
    (**(void (__fastcall ***)(int))v2)(v2);
    v10 = *(_DWORD *)(v2 + 8);
    v11 = v10 + 1;
  }
  v12 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v2 + 8) = v11;
  *(_BYTE *)(v12 + v10) = 39;
  return v2;
}


// ======================================================================
