// ADDR: 0x155bc4
// SYMBOL: sub_155BC4
unsigned __int8 *__fastcall sub_155BC4(int a1, int a2)
{
  int v3; // r0
  unsigned __int8 v4; // r2
  int v5; // r4
  __int64 v6; // kr00_8
  unsigned __int8 v8[8]; // [sp+0h] [bp-18h] BYREF
  __int64 v9; // [sp+8h] [bp-10h]

  *(_BYTE *)(a1 + 124) = a2;
  v9 = 0LL;
  v8[0] = 0;
  sub_EA862(v8, a2);
  v3 = sub_E4710((unsigned __int8 *)(a1 + 96), "recorderEnabled");
  v4 = *(_BYTE *)v3;
  *(_BYTE *)v3 = v8[0];
  v5 = HIDWORD(v9);
  v6 = *(_QWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = v9;
  *(_DWORD *)(v3 + 12) = v5;
  v8[0] = v4;
  v9 = v6;
  return sub_E3F7A(v8);
}


// ======================================================================
