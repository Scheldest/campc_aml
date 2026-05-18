// ADDR: 0x1410cc
// SYMBOL: sub_1410CC
int __fastcall sub_1410CC(int a1)
{
  int v2; // r6
  unsigned int v3; // r5
  int v4; // r6
  int v5; // r1
  int v6; // r0
  int v7; // r4
  int v8; // r0

  v2 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
  v3 = sub_1501BC(v2);
  if ( v3 >> 4 > 0x7C )
    return 0;
  if ( !sub_F2396(v2, v3) )
    return 0;
  v4 = *(_DWORD *)(v2 + 4 * v3);
  if ( !v4 || COERCE_FLOAT(sub_F8E1C(v4)) >= 8.0 )
    return 0;
  if ( sub_104648(*(_DWORD *)(a1 + 28), v5) == 46 )
    sub_10479C(*(_DWORD *)(a1 + 28), 0, 0);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = 1;
  v8 = sub_105378(v6, *(_DWORD *)(v4 + 8), 1);
  sub_141154(v8, v3, 1);
  return v7;
}


// ======================================================================
