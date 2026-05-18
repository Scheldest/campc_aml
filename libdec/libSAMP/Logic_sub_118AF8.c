// ADDR: 0x114610
// SYMBOL: sub_114610
int __fastcall sub_114610(int a1, int a2, float a3)
{
  int v5; // t1
  int v6; // r4
  int v7; // r0
  float v8; // s16
  float v9; // s18
  _BYTE v11[4]; // [sp+8h] [bp-70h] BYREF
  float v12; // [sp+Ch] [bp-6Ch]
  _BYTE v13[4]; // [sp+10h] [bp-68h] BYREF
  float v14; // [sp+14h] [bp-64h]
  float v15[2]; // [sp+18h] [bp-60h] BYREF
  _BYTE v16[16]; // [sp+20h] [bp-58h] BYREF
  int v17; // [sp+30h] [bp-48h]
  int v18; // [sp+34h] [bp-44h]
  int v19; // [sp+3Ch] [bp-3Ch] BYREF
  _DWORD v20[14]; // [sp+40h] [bp-38h] BYREF

  memset(v20, 0, 12);
  sub_113E38((int)v20, 12, 12, "%09d", a2);
  v5 = *(_DWORD *)(a1 - 24);
  a1 -= 24;
  v6 = (*(int (__fastcall **)(int, int))(v5 + 24))(a1, 1060320051);
  v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 24))(a1, 1067869798);
  sub_163C58(v6, v7);
  sub_163CA4(0);
  sub_163D1C(0);
  sub_163D80(2);
  v19 = -1;
  sub_163C74(&v19);
  v18 = 0;
  memset(v16, 0, sizeof(v16));
  v17 = 0;
  sub_163C40(v20, v16);
  (*(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 20))(v15, a1);
  v8 = v15[0];
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 20))(v13, a1);
  v9 = v14;
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 76))(v11, a1);
  return sub_163D64(v8 * 0.5, v9 - (float)(v12 * a3), v16);
}


// ======================================================================
