// ADDR: 0x21a990
// SYMBOL: sub_21A990
_DWORD *__fastcall sub_21A990(int *a1, int a2)
{
  int v3; // r6
  int v4; // r0
  int v5; // r5
  _DWORD *v6; // r4
  _DWORD *v8; // [sp+0h] [bp-18h] BYREF

  v3 = *a1;
  v4 = *a1 + 4 * a2;
  v5 = *(_DWORD *)(v4 + 396);
  *(_DWORD *)(v4 + 396) = v5 + 1;
  v6 = sub_216EF0(v3 + 408, 16);
  v6[2] = a2;
  v6[3] = v5;
  v8 = v6;
  *v6 = &off_233124;
  v6[1] = 16843035;
  sub_21AA10(*(_DWORD *)(*(_DWORD *)(v3 + 336) - 4), &v8);
  return v6;
}


// ======================================================================
