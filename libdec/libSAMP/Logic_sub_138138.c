// ADDR: 0x1381b4
// SYMBOL: sub_1381B4
unsigned __int8 *__fastcall sub_1381B4(int a1, int a2, float a3)
{
  int v6; // r1
  int v7; // r0
  unsigned __int8 v8; // r2
  int v9; // r5
  __int64 v10; // kr00_8
  unsigned __int8 v12[8]; // [sp+8h] [bp-30h] BYREF
  __int64 v13; // [sp+10h] [bp-28h]
  _BYTE v14[4]; // [sp+18h] [bp-20h] BYREF
  int v15; // [sp+1Ch] [bp-1Ch] BYREF
  _DWORD v16[6]; // [sp+20h] [bp-18h] BYREF

  v15 = a2;
  sub_138B9C(v16, a1 + 136, a2, &unk_B9357, &v15, v14);
  *(float *)(v16[0] + 32) = a3;
  v13 = 0LL;
  v12[0] = 0;
  sub_EA660(v12, v6, COERCE_UNSIGNED_INT64((float)(a3 / 100.0)), HIDWORD(COERCE_UNSIGNED_INT64((float)(a3 / 100.0))));
  v7 = sub_138D5C(a1 + 96, a2);
  v8 = *(_BYTE *)v7;
  *(_BYTE *)v7 = v12[0];
  v9 = HIDWORD(v13);
  v10 = *(_QWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = v13;
  *(_DWORD *)(v7 + 12) = v9;
  v12[0] = v8;
  v13 = v10;
  return sub_E3F7A(v12);
}


// ======================================================================
