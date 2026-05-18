// ADDR: 0xfd2a8
// SYMBOL: sub_FD2A8
int __fastcall sub_FD2A8(_DWORD *a1, _QWORD *a2)
{
  int v4; // r0
  _BYTE v6[8]; // [sp+0h] [bp-28h] BYREF
  _QWORD *v7; // [sp+8h] [bp-20h]
  int v8; // [sp+14h] [bp-14h]

  v4 = sub_FD334(a1, ((a1[1] - *a1) >> 3) + 1);
  sub_FD364(v6, v4, (a1[1] - *a1) >> 3, a1 + 2);
  *v7++ = *a2;
  sub_FD398(a1, v6);
  sub_FD3C8(v6);
  return v8;
}


// ======================================================================
