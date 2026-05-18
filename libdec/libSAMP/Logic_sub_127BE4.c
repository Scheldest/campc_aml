// ADDR: 0x127584
// SYMBOL: sub_127584
_DWORD *__fastcall sub_127584(_DWORD *a1)
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
  int v15; // r8
  int v16; // r0
  int v17; // r6
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
  sub_1278F4(v30, sub_127868, 0, a1);
  v3 = sub_123C34((int)v32, (int)v30);
  sub_127C98(v3);
  v4 = dword_3140C0;
  if ( !dword_3140C0 )
  {
    v5 = sub_123C34((int)v34, (int)v32);
    sub_127C98(v5);
    sub_123C60(dword_3140B0, (int)v34);
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
    sub_164196(v24 + 6741468, sub_127C6C, a1);
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
  sub_1279C0(v28, sub_127930, 0, a1);
  v9 = sub_127E3C(v32, v28);
  sub_127DE4(v9);
  v10 = dword_3140E0;
  if ( dword_3140E0 )
    goto LABEL_25;
  v11 = sub_127E3C(v34, v32);
  sub_127DE4(v11);
  sub_127E68(&unk_3140D0, v34);
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
    sub_164196(v25 + 6752212, sub_127DC4, v2);
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
  sub_127A80(v26, sub_1279FC, 0, a1);
  v16 = sub_1280DC(v32, v26);
  sub_128084(v16);
  v17 = dword_314100;
  if ( dword_314100 )
    goto LABEL_43;
  v18 = sub_1280DC(v34, v32);
  sub_128084(v18);
  sub_128108(&unk_3140F0, v34);
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
    sub_164196(v15 + 6746420, sub_128058, v23);
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
  return a1;
}


// ======================================================================
