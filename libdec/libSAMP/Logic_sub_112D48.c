// ADDR: 0x11318c
// SYMBOL: sub_11318C
bool __fastcall sub_11318C(int a1)
{
  int v1; // r0
  int v2; // r0

  v1 = *(_DWORD *)(a1 + 2140);
  if ( v1 && *(_DWORD *)(v1 + 4) != -1 && (v2 = sub_1082E4(), *(unsigned __int8 *)(v2 + 1157) << 31) )
    return *(_DWORD *)(*(_DWORD *)(v2 + 1424) + 1124) == v2;
  else
    return 0;
}


// ======================================================================
