// ADDR: 0x117858
// SYMBOL: sub_117858
int __fastcall sub_117858(int a1)
{
  int v2; // r8
  int v3; // r4
  int v4; // r9
  int v5; // r0
  __int64 v6; // r0
  int v7; // r0
  __int64 v8; // r0
  int v9; // r0
  __int64 v10; // r0
  int v11; // r0
  __int64 v12; // r0
  int v13; // r0
  __int64 v14; // r0
  int v15; // r0
  __int64 v16; // r0
  int v17; // r0
  __int64 v18; // r0
  int v19; // r0
  __int64 v20; // r0
  int v21; // r0
  __int64 v22; // r0
  int v23; // r0
  __int64 v24; // r0
  int v25; // r0
  __int64 v26; // r0
  int v27; // r0
  __int64 v28; // r0
  int v29; // r0
  __int64 v30; // r0
  int v31; // r0
  int v33; // [sp+0h] [bp-38h]
  int v34; // [sp+4h] [bp-34h]
  int v35; // [sp+8h] [bp-30h]
  int v36; // [sp+Ch] [bp-2Ch]
  int v37; // [sp+10h] [bp-28h]
  int v38; // [sp+14h] [bp-24h]
  int v39; // [sp+18h] [bp-20h]

  v39 = a1 + 76;
  *(_QWORD *)(a1 + 76) = 0LL;
  *(_QWORD *)(a1 + 84) = 0LL;
  v2 = a1 + 92;
  *(_QWORD *)(a1 + 92) = 0LL;
  *(_QWORD *)(a1 + 100) = 0LL;
  v3 = a1 + 108;
  *(_DWORD *)a1 = &off_22BDFC;
  *(_DWORD *)(a1 + 4) = 1065353216;
  *(_DWORD *)(a1 + 64) = -1;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  v4 = a1 + 112;
  *(_DWORD *)(a1 + 32) = &off_22BE7C;
  *(_DWORD *)(a1 + 16) = &off_22BE54;
  v35 = a1 + 104;
  v33 = a1 + 100;
  v34 = a1 + 96;
  v36 = a1 + 88;
  v37 = a1 + 84;
  *(_DWORD *)(a1 + 24) = &off_22BE6C;
  *(_DWORD *)(a1 + 8) = 1142947840;
  *(_DWORD *)(a1 + 12) = 1138753536;
  v38 = a1 + 80;
  v5 = ((int (*)(void))sub_117AA8)();
  v6 = sub_163144(a1 + 20, v5, "arzhud_spd_bg");
  v7 = sub_117AA8(v6, HIDWORD(v6));
  v8 = sub_163144(a1 + 28, v7, "arzhud_spd_arrow");
  v9 = sub_117AA8(v8, HIDWORD(v8));
  v10 = sub_163144(v39, v9, "arzhud_spd_door");
  v11 = sub_117AA8(v10, HIDWORD(v10));
  v12 = sub_163144(v38, v11, "arzhud_spd_engine");
  v13 = sub_117AA8(v12, HIDWORD(v12));
  v14 = sub_163144(v37, v13, "arzhud_spd_light");
  v15 = sub_117AA8(v14, HIDWORD(v14));
  v16 = sub_163144(v36, v15, "arzhud_spd_park");
  v17 = sub_117AA8(v16, HIDWORD(v16));
  v18 = sub_163144(v2, v17, "arzhud_spd_indbg");
  v19 = sub_117AA8(v18, HIDWORD(v18));
  v20 = sub_163144(v34, v19, "arzhud_spd_square");
  v21 = sub_117AA8(v20, HIDWORD(v20));
  v22 = sub_163144(v33, v21, "arzhud_spd_hp");
  v23 = sub_117AA8(v22, HIDWORD(v22));
  v24 = sub_163144(v35, v23, "arzhud_spd_gas");
  v25 = sub_117AA8(v24, HIDWORD(v24));
  v26 = sub_163144(a1 + 36, v25, "arzhud_spd_menu_bg");
  v27 = sub_117AA8(v26, HIDWORD(v26));
  v28 = sub_163144(a1 + 40, v27, "arzhud_spd_menu_select");
  v29 = sub_117AA8(v28, HIDWORD(v28));
  v30 = sub_163144(v3, v29, "arzhud_spd_radio");
  v31 = sub_117AA8(v30, HIDWORD(v30));
  sub_163144(v4, v31, "arzhud_spd_menu");
  return a1;
}


// ======================================================================
