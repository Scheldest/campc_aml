// ADDR: 0x214f74
// SYMBOL: sub_214F74
int __fastcall sub_214F74(_DWORD *a1, _QWORD *a2)
{
  int v4; // r0
  _BYTE v6[8]; // [sp+0h] [bp-28h] BYREF
  _QWORD *v7; // [sp+8h] [bp-20h]
  int v8; // [sp+14h] [bp-14h]

  v4 = sub_215000(a1, ((a1[1] - *a1) >> 3) + 1);
  sub_215030(v6, v4, (a1[1] - *a1) >> 3, a1 + 2);
  *v7++ = *a2;
  sub_215064(a1, v6);
  sub_215094(v6);
  return v8;
}


// ======================================================================
