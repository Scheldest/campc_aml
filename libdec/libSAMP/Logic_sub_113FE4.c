// ADDR: 0x11866c
// SYMBOL: sub_11866C
int __fastcall sub_11866C(int a1)
{
  int v2; // r5
  int v3; // r10
  int v4; // r4
  int v5; // r9
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v21; // [sp+Ch] [bp-34h]
  int v22; // [sp+10h] [bp-30h]
  int v23; // [sp+14h] [bp-2Ch]
  int v24; // [sp+18h] [bp-28h]
  int v25; // [sp+1Ch] [bp-24h]
  int v26; // [sp+20h] [bp-20h]

  v2 = a1 + 76;
  v3 = a1 + 104;
  *(_DWORD *)(a1 + 64) = -1;
  *(_DWORD *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 76) = 0LL;
  *(_QWORD *)(a1 + 84) = 0LL;
  v4 = a1 + 92;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)a1 = &off_22BEC8;
  *(_DWORD *)(a1 + 4) = 1065353216;
  *(_DWORD *)(a1 + 8) = 1142947840;
  *(_DWORD *)(a1 + 12) = 1138753536;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v5 = a1 + 108;
  *(_QWORD *)(a1 + 92) = 0LL;
  *(_QWORD *)(a1 + 100) = 0LL;
  *(_DWORD *)(a1 + 32) = &off_22BF48;
  *(_DWORD *)(a1 + 24) = &off_22BF38;
  *(_DWORD *)(a1 + 16) = &off_22BF20;
  v26 = a1 + 116;
  v22 = a1 + 112;
  v21 = a1 + 100;
  v23 = a1 + 88;
  v24 = a1 + 84;
  v25 = a1 + 80;
  v6 = sub_117AA8();
  sub_163144(a1 + 20, v6, "arzhud_spd_bg2");
  v7 = sub_117AA8();
  sub_163144(a1 + 28, v7, "arzhud_spd_arrow");
  v8 = sub_117AA8();
  sub_163144(v2, v8, "arzhud_spd_door");
  v9 = sub_117AA8();
  sub_163144(v25, v9, "arzhud_spd_engine");
  v10 = sub_117AA8();
  sub_163144(v24, v10, "arzhud_spd_light");
  v11 = sub_117AA8();
  sub_163144(v23, v11, "arzhud_spd_park");
  v12 = sub_117AA8();
  sub_163144(v4, v12, "arzhud_spd_turn");
  v13 = sub_117AA8();
  sub_163144(v21, v13, "arzhud_spd_rect");
  v14 = sub_117AA8();
  sub_163144(v3, v14, "arzhud_spd_hp");
  v15 = sub_117AA8();
  sub_163144(v5, v15, "arzhud_spd_gas");
  v16 = sub_117AA8();
  sub_163144(a1 + 36, v16, "arzhud_spd_menu_bg2");
  v17 = sub_117AA8();
  sub_163144(a1 + 40, v17, "arzhud_spd_menu_select");
  v18 = sub_117AA8();
  sub_163144(v22, v18, "arzhud_spd_radio");
  v19 = sub_117AA8();
  sub_163144(v26, v19, "arzhud_spd_menu");
  return a1;
}


// ======================================================================
