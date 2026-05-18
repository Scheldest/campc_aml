// ADDR: 0x11b5ec
// SYMBOL: sub_11B5EC
int __fastcall sub_11B5EC(int a1)
{
  int v2; // r0
  int v3; // r8
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r11
  int v11; // r0
  int v12; // r6
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r1
  _BYTE v18[16]; // [sp+0h] [bp-80h] BYREF
  _BYTE *v19; // [sp+10h] [bp-70h]
  _BYTE v20[16]; // [sp+18h] [bp-68h] BYREF
  _BYTE *v21; // [sp+28h] [bp-58h]
  _BYTE v22[16]; // [sp+30h] [bp-50h] BYREF
  _BYTE *v23; // [sp+40h] [bp-40h]
  _BYTE v24[16]; // [sp+48h] [bp-38h] BYREF
  _BYTE *v25; // [sp+58h] [bp-28h]

  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v2 = dword_238E8C;
  *(_DWORD *)(a1 + 20) = a1 + 24;
  if ( !v2 )
    return a1;
  _android_log_print(3, "AXL", "Enable modloader for textures");
  v3 = dword_23DF24;
  sub_11B8D4(v20, sub_11B850, 0, a1);
  v4 = sub_11C010(v22, v20);
  sub_11BFB8(v4);
  v5 = dword_263688;
  if ( !dword_263688 )
  {
    v6 = sub_11C010(v24, v22);
    sub_11BFB8(v6);
    sub_11C03C(&unk_263678, v24);
    if ( v24 == v25 )
    {
      v7 = 4;
    }
    else
    {
      if ( !v25 )
        goto LABEL_8;
      v7 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v25 + 4 * v7))();
  }
LABEL_8:
  if ( v22 == v23 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v23 )
      goto LABEL_13;
    v8 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v23 + 4 * v8))();
LABEL_13:
  if ( !v5 )
    sub_164196(v3 + 6755024, sub_11BF98, a1);
  if ( v20 == v21 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v21 )
      goto LABEL_20;
    v9 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v21 + 4 * v9))();
LABEL_20:
  if ( v5 )
    _android_log_print(5, "AXL", "modloader: Can't hook load_full_texture, because wrapper already used!");
  v10 = dword_23DF24;
  sub_11B9AC(v18, sub_11B910, 0, a1);
  v11 = sub_11C2A4(v22, v18);
  sub_11C24C(v11);
  v12 = dword_2636A8;
  if ( !dword_2636A8 )
  {
    v13 = sub_11C2A4(v24, v22);
    sub_11C24C(v13);
    sub_11C2D0(&unk_263698, v24);
    if ( v24 == v25 )
    {
      v14 = 4;
    }
    else
    {
      if ( !v25 )
        goto LABEL_28;
      v14 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v25 + 4 * v14))();
  }
LABEL_28:
  if ( v22 == v23 )
  {
    v15 = 4;
  }
  else
  {
    if ( !v23 )
      goto LABEL_33;
    v15 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v23 + 4 * v15))();
LABEL_33:
  if ( !v12 )
    sub_164196(v10 + 6743336, sub_11C22C, a1 + 4);
  if ( v18 == v19 )
  {
    v16 = 4;
  }
  else
  {
    if ( !v19 )
      goto LABEL_40;
    v16 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v19 + 4 * v16))();
LABEL_40:
  if ( v12 )
    _android_log_print(5, "AXL", "modloader: Can't hook rw_texture_read, because wrapper already used!");
  return a1;
}


// ======================================================================
