// ADDR: 0x1212a0
// SYMBOL: sub_1212A0
_DWORD *__fastcall sub_1212A0(_DWORD *a1)
{
  _DWORD *v2; // r8
  int v3; // r0
  int v4; // r9
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r9
  int v10; // r0
  int v11; // r11
  int v12; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v17; // [sp+4h] [bp-84h]
  _BYTE v18[16]; // [sp+8h] [bp-80h] BYREF
  _BYTE *v19; // [sp+18h] [bp-70h]
  _BYTE v20[16]; // [sp+20h] [bp-68h] BYREF
  _BYTE *v21; // [sp+30h] [bp-58h]
  _BYTE v22[16]; // [sp+38h] [bp-50h] BYREF
  _BYTE *v23; // [sp+48h] [bp-40h]
  _BYTE v24[16]; // [sp+50h] [bp-38h] BYREF
  _BYTE *v25; // [sp+60h] [bp-28h]

  a1[1] = 0;
  v2 = a1 + 1;
  v17 = dword_23DF24;
  *a1 = 0;
  sub_121608(v20, sub_1214B4, 0, a1);
  v3 = sub_1217F8(v22, v20);
  sub_1217A0(v3);
  v4 = dword_263980;
  if ( !dword_263980 )
  {
    v5 = sub_1217F8(v24, v22);
    sub_1217A0(v5);
    sub_121824(&unk_263970, v24);
    if ( v24 == v25 )
    {
      v6 = 4;
    }
    else
    {
      if ( !v25 )
        goto LABEL_7;
      v6 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v25 + 4 * v6))();
  }
LABEL_7:
  if ( v22 == v23 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v23 )
      goto LABEL_12;
    v7 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v23 + 4 * v7))();
LABEL_12:
  if ( !v4 )
    sub_164196(v17 + 6768392, sub_121774, a1);
  if ( v20 == v21 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v21 )
      goto LABEL_19;
    v8 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v21 + 4 * v8))();
LABEL_19:
  if ( v4 )
    _android_log_print(5, "AXL", "fix_crash_get_texture: Can't hook get_texture, because wrapper already used!");
  v9 = dword_23DF24;
  sub_12167C(v18, sub_121644, 0, a1);
  v10 = sub_11C010((int)v22, (int)v18);
  sub_121A0C(v10);
  v11 = dword_2639A0;
  if ( !dword_2639A0 )
  {
    v12 = sub_11C010((int)v24, (int)v22);
    sub_121A0C(v12);
    sub_11C03C(dword_263990, (int)v24);
    if ( v24 == v25 )
    {
      v13 = 4;
    }
    else
    {
      if ( !v25 )
        goto LABEL_27;
      v13 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v25 + 4 * v13))();
  }
LABEL_27:
  if ( v22 == v23 )
  {
    v14 = 4;
  }
  else
  {
    if ( !v23 )
      goto LABEL_32;
    v14 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v23 + 4 * v14))();
LABEL_32:
  if ( !v11 )
    sub_164196(v9 + 6755024, sub_1219EC, v2);
  if ( v18 == v19 )
  {
    v15 = 4;
    goto LABEL_38;
  }
  if ( v19 )
  {
    v15 = 5;
LABEL_38:
    (*(void (**)(void))(*(_DWORD *)v19 + 4 * v15))();
  }
  return a1;
}


// ======================================================================
