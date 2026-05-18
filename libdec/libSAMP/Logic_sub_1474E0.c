// ADDR: 0x13e610
// SYMBOL: sub_13E610
int __fastcall sub_13E610(int a1, unsigned __int16 *a2)
{
  unsigned int v3; // r1
  unsigned __int16 *v4; // r4
  int v6; // r5
  int v7; // r0
  int v8; // r1
  int v9; // r2

  v4 = a2 + 3;
  v3 = *a2;
  if ( *(_DWORD *)(a1 + 4 * v3) )
    sub_13E5CE(a1, v3);
  v6 = operator new(0x14u);
  sub_F7CF4(v6, *(_DWORD *)(a2 + 1), *(float *)v4, *((float *)v4 + 1), *((float *)v4 + 2), *((float *)v4 + 3));
  v7 = *a2;
  v8 = *((_DWORD *)v4 + 4);
  v9 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(a1 + 4 * v7) = v6;
  *(_DWORD *)(a1 + 4 * v7 + 5000) = v9;
  *(_BYTE *)(v7 + a1 + 4000) = 1;
  sub_F7E88(v6, v8);
  return sub_F7EB4(v6, *((_BYTE *)a2 + 26) != 0);
}


// ======================================================================
