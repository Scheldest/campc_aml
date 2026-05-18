// ADDR: 0xf1414
// SYMBOL: sub_F1414
_DWORD *__fastcall sub_F1414(_DWORD *a1)
{
  _android_log_print(4, "AXL", "Loading TAGS icon..");
  *a1 = sub_1085C0("*", "afk_icon");
  a1[1] = sub_1085C0("*", "speaker");
  a1[2] = sub_1085C0("*", "chat_icon");
  return a1;
}


// ======================================================================
// ADDR: 0xf1f46
// SYMBOL: sub_F1F46
_BYTE *__fastcall sub_F1F46(_BYTE *result)
{
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0xf421c
// SYMBOL: sub_F421C
int sub_F421C()
{
  sub_164196(dword_23DF24 + 6754904, sub_F41F8, &off_240034);
  byte_240038 = 1;
  return sub_2242C8(4, "AXL", "[CustomHandling]: call install");
}


// ======================================================================
// ADDR: 0xf5398
// SYMBOL: sub_F5398
int sub_F5398()
{
  sub_F5474(&dword_240084, dword_240088);
  dword_240088 = 0;
  dword_24008C = 0;
  dword_240084 = (int)&dword_240088;
  byte_240090 = 1;
  return sub_2242C8(3, "AXL", "[DefaultHandling]: call install");
}


// ======================================================================
// ADDR: 0xf97ec
// SYMBOL: sub_F97EC
int sub_F97EC()
{
  return dword_23DF24 + 7170172;
}


// ======================================================================
// ADDR: 0x10e584
// SYMBOL: sub_10E584
int __fastcall sub_10E584(int a1)
{
  int v2; // r11
  int v3; // r0
  int v4; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r8
  int v10; // r0
  int v11; // r11
  int v12; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r8
  int v17; // r0
  int v18; // r4
  int v19; // r0
  int v20; // r1
  int v21; // r1
  int v22; // r1
  int v23; // r8
  int v24; // r0
  int v25; // r11
  int v26; // r0
  int v27; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r8
  int v31; // r0
  int v32; // r4
  int v33; // r0
  int v34; // r1
  int v35; // r1
  int v36; // r1
  int v37; // r8
  int v38; // r0
  int v39; // r4
  int v40; // r0
  int v41; // r1
  int v42; // r1
  int v43; // r1
  _BYTE v45[16]; // [sp+8h] [bp-E0h] BYREF
  _BYTE *v46; // [sp+18h] [bp-D0h]
  _BYTE v47[16]; // [sp+20h] [bp-C8h] BYREF
  _BYTE *v48; // [sp+30h] [bp-B8h]
  _BYTE v49[16]; // [sp+38h] [bp-B0h] BYREF
  _BYTE *v50; // [sp+48h] [bp-A0h]
  _BYTE v51[16]; // [sp+50h] [bp-98h] BYREF
  _BYTE *v52; // [sp+60h] [bp-88h]
  _BYTE v53[16]; // [sp+68h] [bp-80h] BYREF
  _BYTE *v54; // [sp+78h] [bp-70h]
  _BYTE v55[16]; // [sp+80h] [bp-68h] BYREF
  _BYTE *v56; // [sp+90h] [bp-58h]
  _BYTE v57[16]; // [sp+98h] [bp-50h] BYREF
  _BYTE *v58; // [sp+A8h] [bp-40h]
  _BYTE v59[16]; // [sp+B0h] [bp-38h] BYREF
  _BYTE *v60; // [sp+C0h] [bp-28h]

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 1097859072;
  v2 = dword_23DF24;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)a1 = 0;
  sub_10EB3C(v55, sub_10EAE4, 0, a1);
  v3 = sub_10F778(v57, v55);
  sub_10F720(v3);
  v4 = dword_2632B8;
  if ( !dword_2632B8 )
  {
    v5 = sub_10F778(v59, v57);
    sub_10F720(v5);
    sub_10F7A4(&unk_2632A8, v59);
    if ( v59 == v60 )
    {
      v6 = 4;
    }
    else
    {
      if ( !v60 )
        goto LABEL_7;
      v6 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v60 + 4 * v6))();
  }
LABEL_7:
  if ( v57 == v58 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v58 )
      goto LABEL_12;
    v7 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v58 + 4 * v7))();
LABEL_12:
  if ( !v4 )
    sub_164196(v2 + 6748004, sub_10F6F4, a1 + 20);
  if ( v55 == v56 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v56 )
      goto LABEL_19;
    v8 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v56 + 4 * v8))();
LABEL_19:
  v9 = dword_23DF24;
  sub_10EB3C(v53, sub_10EB78, 0, a1);
  v10 = sub_10F778(v57, v53);
  sub_10F998(v10);
  v11 = dword_2632D8;
  if ( dword_2632D8 )
    goto LABEL_25;
  v12 = sub_10F778(v59, v57);
  sub_10F998(v12);
  sub_10F7A4(&unk_2632C8, v59);
  if ( v59 == v60 )
  {
    v13 = 4;
  }
  else
  {
    if ( !v60 )
      goto LABEL_25;
    v13 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v60 + 4 * v13))();
LABEL_25:
  if ( v57 == v58 )
  {
    v14 = 4;
  }
  else
  {
    if ( !v58 )
      goto LABEL_30;
    v14 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v58 + 4 * v14))();
LABEL_30:
  if ( !v11 )
    sub_164196(v9 + 6692884, sub_10F96C, a1 + 24);
  if ( v53 == v54 )
  {
    v15 = 4;
  }
  else
  {
    if ( !v54 )
      goto LABEL_37;
    v15 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v54 + 4 * v15))();
LABEL_37:
  v16 = dword_23DF24;
  sub_10EB3C(v51, sub_10EBD0, 0, a1);
  v17 = sub_10F778(v57, v51);
  sub_10FA1C(v17);
  v18 = dword_2632F8;
  if ( dword_2632F8 )
    goto LABEL_43;
  v19 = sub_10F778(v59, v57);
  sub_10FA1C(v19);
  sub_10F7A4(&unk_2632E8, v59);
  if ( v59 == v60 )
  {
    v20 = 4;
  }
  else
  {
    if ( !v60 )
      goto LABEL_43;
    v20 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v60 + 4 * v20))();
LABEL_43:
  if ( v57 == v58 )
  {
    v21 = 4;
  }
  else
  {
    if ( !v58 )
      goto LABEL_48;
    v21 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v58 + 4 * v21))();
LABEL_48:
  if ( !v18 )
    sub_164196(v16 + 6692984, sub_10F9F0, a1 + 28);
  if ( v51 == v52 )
  {
    v22 = 4;
  }
  else
  {
    if ( !v52 )
      goto LABEL_55;
    v22 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v52 + 4 * v22))();
LABEL_55:
  v23 = dword_23DF24;
  sub_10EB3C(v49, sub_10EC28, 0, a1);
  v24 = sub_10F778(v57, v49);
  sub_10FAA0(v24);
  v25 = dword_263318;
  if ( dword_263318 )
    goto LABEL_61;
  v26 = sub_10F778(v59, v57);
  sub_10FAA0(v26);
  sub_10F7A4(&unk_263308, v59);
  if ( v59 == v60 )
  {
    v27 = 4;
  }
  else
  {
    if ( !v60 )
      goto LABEL_61;
    v27 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v60 + 4 * v27))();
LABEL_61:
  if ( v57 == v58 )
  {
    v28 = 4;
  }
  else
  {
    if ( !v58 )
      goto LABEL_66;
    v28 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v58 + 4 * v28))();
LABEL_66:
  if ( !v25 )
    sub_164196(v23 + 6716464, sub_10FA74, a1 + 32);
  if ( v49 == v50 )
  {
    v29 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_73;
    v29 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v29))();
LABEL_73:
  v30 = dword_23DF24;
  sub_10EB3C(v47, sub_10EC80, 0, a1);
  v31 = sub_10F778(v57, v47);
  sub_10FB24(v31);
  v32 = dword_263338;
  if ( dword_263338 )
    goto LABEL_79;
  v33 = sub_10F778(v59, v57);
  sub_10FB24(v33);
  sub_10F7A4(&unk_263328, v59);
  if ( v59 == v60 )
  {
    v34 = 4;
  }
  else
  {
    if ( !v60 )
      goto LABEL_79;
    v34 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v60 + 4 * v34))();
LABEL_79:
  if ( v57 == v58 )
  {
    v35 = 4;
  }
  else
  {
    if ( !v58 )
      goto LABEL_84;
    v35 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v58 + 4 * v35))();
LABEL_84:
  if ( !v32 )
    sub_164196(v30 + 6716564, sub_10FAF8, a1 + 36);
  if ( v47 == v48 )
  {
    v36 = 4;
  }
  else
  {
    if ( !v48 )
      goto LABEL_91;
    v36 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v48 + 4 * v36))();
LABEL_91:
  v37 = dword_23DF24;
  sub_10EB3C(v45, sub_10ECD8, 0, a1);
  v38 = sub_10F778(v57, v45);
  sub_10FBA8(v38);
  v39 = dword_263358;
  if ( dword_263358 )
    goto LABEL_97;
  v40 = sub_10F778(v59, v57);
  sub_10FBA8(v40);
  sub_10F7A4(&unk_263348, v59);
  if ( v59 == v60 )
  {
    v41 = 4;
  }
  else
  {
    if ( !v60 )
      goto LABEL_97;
    v41 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v60 + 4 * v41))();
LABEL_97:
  if ( v57 == v58 )
  {
    v42 = 4;
  }
  else
  {
    if ( !v58 )
      goto LABEL_102;
    v42 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v58 + 4 * v42))();
LABEL_102:
  if ( !v39 )
    sub_164196(v37 + 6716680, sub_10FB7C, a1 + 40);
  if ( v45 == v46 )
  {
    v43 = 4;
    goto LABEL_108;
  }
  if ( v46 )
  {
    v43 = 5;
LABEL_108:
    (*(void (**)(void))(*(_DWORD *)v46 + 4 * v43))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x129e70
// SYMBOL: sub_129E70
int __fastcall sub_129E70(int a1, __int64 *a2, int a3)
{
  int v6; // r6
  __int64 v7; // r0
  __int64 v8; // d17

  sub_12BC78();
  *(_DWORD *)a1 = &off_22D814;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v6 = operator new(0x28u);
  sub_12B30C(v6, a2, a3);
  *(_DWORD *)(a1 + 84) = v6;
  sub_12B830(a2);
  v7 = *a2;
  v8 = *a2;
  *(_QWORD *)(a1 + 20) = *a2;
  *(_QWORD *)(a1 + 28) = v8;
  *(_QWORD *)(a1 + 36) = v7;
  return a1;
}


// ======================================================================
// ADDR: 0x17c21c
// SYMBOL: sub_17C21C
int sub_17C21C()
{
  int v0; // r0
  int v1; // r4
  int result; // r0

  v0 = sub_17C080();
  if ( !v0 )
    return sub_2242C8(4, "AXL", "Env not loaded. (SetInputLayout)");
  v1 = v0;
  sub_17C1B8(v0);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 912))(v1);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 64))(v1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 68))(v1);
  }
  return result;
}


// ======================================================================
