// ADDR: 0x11e8b4
// SYMBOL: sub_11E8B4
_DWORD *__fastcall sub_11E8B4(_DWORD *a1)
{
  _DWORD *v2; // r11
  int v3; // r0
  int v4; // r10
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r0
  int v10; // r10
  int v11; // r0
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r11
  int v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r1
  int v20; // r1
  int v21; // r1
  _DWORD *v23; // [sp+0h] [bp-A0h]
  int v24; // [sp+4h] [bp-9Ch]
  int v25; // [sp+4h] [bp-9Ch]
  _BYTE v26[16]; // [sp+8h] [bp-98h] BYREF
  _BYTE *v27; // [sp+18h] [bp-88h]
  _BYTE v28[16]; // [sp+20h] [bp-80h] BYREF
  _BYTE *v29; // [sp+30h] [bp-70h]
  _BYTE v30[16]; // [sp+38h] [bp-68h] BYREF
  _BYTE *v31; // [sp+48h] [bp-58h]
  _BYTE v32[16]; // [sp+50h] [bp-50h] BYREF
  _BYTE *v33; // [sp+60h] [bp-40h]
  _BYTE v34[16]; // [sp+68h] [bp-38h] BYREF
  _BYTE *v35; // [sp+78h] [bp-28h]

  a1[1] = 0;
  v2 = a1 + 1;
  v24 = dword_23DF24;
  a1[2] = 0;
  *a1 = 0;
  v23 = a1 + 2;
  sub_11EC54(v30, sub_11EBDC, 0, a1);
  v3 = sub_10CD74((int)v32, (int)v30);
  sub_11F054(v3);
  v4 = dword_263858;
  if ( !dword_263858 )
  {
    v5 = sub_10CD74((int)v34, (int)v32);
    sub_11F054(v5);
    sub_10CDA0(dword_263848, (int)v34);
    if ( v34 == v35 )
    {
      v6 = 4;
    }
    else
    {
      if ( !v35 )
        goto LABEL_7;
      v6 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v35 + 4 * v6))();
  }
LABEL_7:
  if ( v32 == v33 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v33 )
      goto LABEL_12;
    v7 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v33 + 4 * v7))();
LABEL_12:
  if ( !v4 )
    sub_164196(v24 + 6762240, sub_11F030, a1);
  if ( v30 == v31 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v31 )
      goto LABEL_19;
    v8 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v31 + 4 * v8))();
LABEL_19:
  v25 = dword_23DF24;
  sub_11ED20(v28, sub_11EC90, 0, a1);
  v9 = sub_11F200(v32, v28);
  sub_11F1A8(v9);
  v10 = dword_263878;
  if ( dword_263878 )
    goto LABEL_25;
  v11 = sub_11F200(v34, v32);
  sub_11F1A8(v11);
  sub_11F22C(&unk_263868, v34);
  if ( v34 == v35 )
  {
    v12 = 4;
  }
  else
  {
    if ( !v35 )
      goto LABEL_25;
    v12 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v35 + 4 * v12))();
LABEL_25:
  if ( v32 == v33 )
  {
    v13 = 4;
  }
  else
  {
    if ( !v33 )
      goto LABEL_30;
    v13 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v33 + 4 * v13))();
LABEL_30:
  if ( !v10 )
    sub_164196(v25 + 6743984, sub_11F17C, v2);
  if ( v28 == v29 )
  {
    v14 = 4;
  }
  else
  {
    if ( !v29 )
      goto LABEL_37;
    v14 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v29 + 4 * v14))();
LABEL_37:
  v15 = dword_23DF24;
  sub_11EC54(v26, sub_11ED5C, 0, a1);
  v16 = sub_10CD74((int)v32, (int)v26);
  sub_11F418(v16);
  v17 = dword_263898;
  if ( dword_263898 )
    goto LABEL_43;
  v18 = sub_10CD74((int)v34, (int)v32);
  sub_11F418(v18);
  sub_10CDA0(dword_263888, (int)v34);
  if ( v34 == v35 )
  {
    v19 = 4;
  }
  else
  {
    if ( !v35 )
      goto LABEL_43;
    v19 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v35 + 4 * v19))();
LABEL_43:
  if ( v32 == v33 )
  {
    v20 = 4;
  }
  else
  {
    if ( !v33 )
      goto LABEL_48;
    v20 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v33 + 4 * v20))();
LABEL_48:
  if ( !v17 )
    sub_164196(v15 + 6770652, sub_11F3F4, v23);
  if ( v26 == v27 )
  {
    v21 = 4;
    goto LABEL_54;
  }
  if ( v27 )
  {
    v21 = 5;
LABEL_54:
    (*(void (**)(void))(*(_DWORD *)v27 + 4 * v21))();
  }
  sub_11EDC8(7026628, 6783124, 6686824);
  sub_11EDC8(7027176, 6785336, 6686836);
  sub_11EDC8(7027724, 6784812, 6686828);
  sub_11EDC8(7028272, 6785280, 6686832);
  return a1;
}


// ======================================================================
