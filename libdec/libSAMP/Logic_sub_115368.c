// ADDR: 0x1148c0
// SYMBOL: sub_1148C0
int __fastcall sub_1148C0(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r5
  int v5; // r1
  int v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r6
  int v11; // r0
  int v12; // r1
  int v13; // r1
  int v14; // r6
  int v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r0
  int v19; // r10
  int v20; // r0
  int v21; // r1
  int v22; // r1
  int v23; // r1
  int v24; // r11
  int v25; // r0
  int v26; // r6
  int v27; // r0
  int v28; // r1
  int v29; // r1
  int v30; // r1
  int v32; // [sp+0h] [bp-D0h]
  _BYTE v33[16]; // [sp+8h] [bp-C8h] BYREF
  _BYTE *v34; // [sp+18h] [bp-B8h]
  _BYTE v35[16]; // [sp+20h] [bp-B0h] BYREF
  _BYTE *v36; // [sp+30h] [bp-A0h]
  _DWORD v37[4]; // [sp+38h] [bp-98h] BYREF
  _DWORD *v38; // [sp+48h] [bp-88h]
  _DWORD v39[4]; // [sp+50h] [bp-80h] BYREF
  _DWORD *v40; // [sp+60h] [bp-70h]
  _DWORD v41[4]; // [sp+68h] [bp-68h] BYREF
  _DWORD *v42; // [sp+78h] [bp-58h]
  _BYTE v43[16]; // [sp+80h] [bp-50h] BYREF
  _BYTE *v44; // [sp+90h] [bp-40h]
  _UNKNOWN **v45; // [sp+98h] [bp-38h] BYREF
  int v46; // [sp+9Ch] [bp-34h]
  _DWORD *v47; // [sp+A8h] [bp-28h]

  sub_114E18();
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_QWORD *)(a1 + 16) = 0x3F800000BF800000LL;
  *(_QWORD *)(a1 + 24) = 0x3F8000003F800000LL;
  *(_QWORD *)(a1 + 32) = 0xBF8000003F800000LL;
  *(_QWORD *)(a1 + 40) = 0xBF800000BF800000LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 70) = 0LL;
  *(_QWORD *)(a1 + 78) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  sub_114E60(a1, 0);
  v47 = &v45;
  v45 = &off_22BA10;
  v46 = a1;
  v2 = sub_1642EC(dword_23DF24 + 4153344, &v45);
  if ( &v45 == v47 )
  {
    v3 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_6;
    v3 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v3))();
LABEL_6:
  if ( v2 )
  {
    _android_log_print(6, "AXL", "Can't remap page 0x3F6000 to patch address of radar mask");
    return a1;
  }
  v47 = &v45;
  v46 = a1;
  v45 = &off_22BA50;
  v4 = sub_1642EC(dword_23DF24 + 4448256, &v45);
  if ( &v45 == v47 )
  {
    v5 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_13;
    v5 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v5))();
LABEL_13:
  if ( v4 )
  {
    _android_log_print(6, "AXL", "Can't remap page 0x43E000 to complete deinline LimitRadarPoint");
    return a1;
  }
  v42 = v41;
  v41[1] = a1;
  v41[0] = &off_22BA90;
  ((void (*)(void))sub_11568C)();
  v6 = dword_263488;
  if ( !dword_263488 )
  {
    v7 = sub_1156E4(&v45, v41);
    sub_11568C(v7);
    sub_115710(&unk_263478, &v45);
    if ( &v45 == v47 )
    {
      v8 = 4;
    }
    else
    {
      if ( !v47 )
        goto LABEL_21;
      v8 = 5;
    }
    (*(void (**)(void))(*v47 + 4 * v8))();
  }
LABEL_21:
  if ( v41 == v42 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v42 )
      goto LABEL_26;
    v9 = 5;
  }
  (*(void (**)(void))(*v42 + 4 * v9))();
LABEL_26:
  if ( v6 )
    _android_log_print(6, "AXL", "Can't install hook on limit_radar_point. Callback already used");
  else
    sub_164196(dword_23DF24 + 6773292, sub_114EF0, a1 + 60);
  v40 = v39;
  v39[1] = a1;
  v39[0] = &off_22BAD8;
  ((void (*)(void))sub_1157C8)();
  v10 = dword_2634A8;
  if ( !dword_2634A8 )
  {
    v11 = sub_115820(&v45, v39);
    sub_1157C8(v11);
    sub_11584C(&unk_263498, &v45);
    if ( &v45 == v47 )
    {
      v12 = 4;
    }
    else
    {
      if ( !v47 )
        goto LABEL_35;
      v12 = 5;
    }
    (*(void (**)(void))(*v47 + 4 * v12))();
  }
LABEL_35:
  if ( v39 == v40 )
  {
    v13 = 4;
  }
  else
  {
    if ( !v40 )
      goto LABEL_40;
    v13 = 5;
  }
  (*(void (**)(void))(*v40 + 4 * v13))();
LABEL_40:
  if ( v10 )
    _android_log_print(6, "AXL", "Can't install hook on sprite2d_draw. Callback already used");
  else
    sub_164196(dword_23DF24 + 6768964, sub_114F1C, a1 + 64);
  v38 = v37;
  v37[1] = a1;
  v37[0] = &off_22BB20;
  ((void (*)(void))sub_115930)();
  v14 = dword_2634C8;
  if ( !dword_2634C8 )
  {
    v15 = sub_115988(&v45, v37);
    sub_115930(v15);
    sub_1159B4(&unk_2634B8, &v45);
    if ( &v45 == v47 )
    {
      v16 = 4;
    }
    else
    {
      if ( !v47 )
        goto LABEL_49;
      v16 = 5;
    }
    (*(void (**)(void))(*v47 + 4 * v16))();
  }
LABEL_49:
  if ( v37 == v38 )
  {
    v17 = 4;
  }
  else
  {
    if ( !v38 )
      goto LABEL_54;
    v17 = 5;
  }
  (*(void (**)(void))(*v38 + 4 * v17))();
LABEL_54:
  if ( v14 )
    _android_log_print(6, "AXL", "Can't install hook on wgt_radar_ctor. Callback already used");
  else
    sub_164196(dword_23DF24 + 6745716, sub_114F48, a1 + 68);
  v32 = dword_23DF24;
  sub_114F7E(v35, (char *)&loc_114F74 + 1, 0, a1);
  v18 = sub_115B1C(v43);
  sub_115AC4(v18);
  v19 = dword_2634E8;
  if ( !dword_2634E8 )
  {
    v20 = sub_115B1C(&v45);
    sub_115AC4(v20);
    sub_115B48(&unk_2634D8, &v45);
    if ( &v45 == v47 )
    {
      v21 = 4;
    }
    else
    {
      if ( !v47 )
        goto LABEL_63;
      v21 = 5;
    }
    (*(void (**)(void))(*v47 + 4 * v21))();
  }
LABEL_63:
  if ( v43 == v44 )
  {
    v22 = 4;
  }
  else
  {
    if ( !v44 )
      goto LABEL_68;
    v22 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v44 + 4 * v22))();
LABEL_68:
  if ( !v19 )
    sub_164196(v32 + 6701912, sub_115A98, a1 + 72);
  if ( v35 == v36 )
  {
    v23 = 4;
  }
  else
  {
    if ( !v36 )
      goto LABEL_75;
    v23 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v36 + 4 * v23))();
LABEL_75:
  if ( v19 )
    _android_log_print(6, "AXL", "Can't install hook on wgt_radar_dtor. Callback already used");
  v24 = dword_23DF24;
  sub_114F7E(v33, (char *)&loc_114FB8 + 1, 0, a1);
  v25 = sub_115B1C(v43);
  sub_115D3C(v25);
  v26 = dword_263508;
  if ( !dword_263508 )
  {
    v27 = sub_115B1C(&v45);
    sub_115D3C(v27);
    sub_115B48(&unk_2634F8, &v45);
    if ( &v45 == v47 )
    {
      v28 = 4;
    }
    else
    {
      if ( !v47 )
        goto LABEL_83;
      v28 = 5;
    }
    (*(void (**)(void))(*v47 + 4 * v28))();
  }
LABEL_83:
  if ( v43 == v44 )
  {
    v29 = 4;
  }
  else
  {
    if ( !v44 )
      goto LABEL_88;
    v29 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v44 + 4 * v29))();
LABEL_88:
  if ( !v26 )
    sub_164196(v24 + 6701916, sub_115D10, a1 + 76);
  if ( v33 == v34 )
  {
    v30 = 4;
  }
  else
  {
    if ( !v34 )
      goto LABEL_95;
    v30 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v34 + 4 * v30))();
LABEL_95:
  if ( v26 )
    _android_log_print(6, "AXL", "Can't install hook on wgt_radar_dtor2. Callback already used");
  return a1;
}


// ======================================================================
