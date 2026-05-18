// ADDR: 0x74070
// SYMBOL: sub_74070
int __fastcall sub_74070(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r4
  int v6; // r0

  byte_1A44E4 = a1;
  v2 = sub_6C844();
  v3 = *(_DWORD **)(v2 + 8);
  v4 = v2;
  if ( !v3 )
  {
    v3 = (_DWORD *)operator new(0x2F0u);
    *v3 = &off_11056C;
    ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v3);
    *(_DWORD *)(v4 + 8) = v3;
  }
  v5 = a1 ^ 1;
  ((void (__fastcall *)(_DWORD *, int))((char *)&loc_10421C + dword_1A4408))(v3, v5);
  v6 = sub_6C808();
  return sub_6C90C(*(_DWORD *)(v6 + 96), v5);
}


// ======================================================================
