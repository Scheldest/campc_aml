// ADDR: 0xf4398
// SYMBOL: sub_F4398
int __fastcall sub_F4398(int a1)
{
  int v1; // r9
  int v3; // r6
  int v4; // r1
  int v5; // r11
  int v6; // r0
  int v7; // r8
  int v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r11
  int v13; // r0
  int v14; // r8
  int v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r1
  _BYTE v20[16]; // [sp+0h] [bp-80h] BYREF
  _BYTE *v21; // [sp+10h] [bp-70h]
  _BYTE v22[16]; // [sp+18h] [bp-68h] BYREF
  _BYTE *v23; // [sp+28h] [bp-58h]
  _BYTE v24[16]; // [sp+30h] [bp-50h] BYREF
  _BYTE *v25; // [sp+40h] [bp-40h]
  _DWORD v26[4]; // [sp+48h] [bp-38h] BYREF
  _DWORD *v27; // [sp+58h] [bp-28h]

  v1 = a1 + 1016;
  sub_22178C(a1 + 1016, 0x7FCu);
  if ( !sub_E4FB8() || sub_E4FB8() == 4 )
  {
    v27 = v26;
    v26[0] = &off_22AD1C;
    v3 = sub_1642EC(dword_23DF24 + 4448256, v26);
    if ( v26 == v27 )
    {
      v4 = 4;
    }
    else
    {
      if ( !v27 )
        goto LABEL_8;
      v4 = 5;
    }
    (*(void (**)(void))(*v27 + 4 * v4))();
LABEL_8:
    if ( v3 )
    {
      _android_log_print(6, "AXL", "CustomMapIcon: Can't remap page 0x43E000 to patch address of max icon");
      return a1;
    }
    v5 = dword_23DF24;
    sub_F4960(v22, sub_F468C, 0, a1);
    v6 = sub_F4F08(v24, v22);
    sub_F4EB0(v6);
    v7 = dword_240058;
    if ( !dword_240058 )
    {
      v8 = sub_F4F08(v26, v24);
      sub_F4EB0(v8);
      sub_F4F34(&unk_240048, v26);
      if ( v26 == v27 )
      {
        v9 = 4;
      }
      else
      {
        if ( !v27 )
          goto LABEL_16;
        v9 = 5;
      }
      (*(void (**)(void))(*v27 + 4 * v9))();
    }
LABEL_16:
    if ( v24 == v25 )
    {
      v10 = 4;
    }
    else
    {
      if ( !v25 )
        goto LABEL_21;
      v10 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v25 + 4 * v10))();
LABEL_21:
    if ( !v7 )
      sub_164196(v5 + 6757488, sub_F4E84, a1 + 3052);
    if ( v22 == v23 )
    {
      v11 = 4;
    }
    else
    {
      if ( !v23 )
        goto LABEL_28;
      v11 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v23 + 4 * v11))();
LABEL_28:
    v12 = dword_23DF24;
    sub_F4A20(v20, sub_F499C, 0, a1);
    v13 = sub_F5178(v24, v20);
    sub_F5120(v13);
    v14 = dword_240078;
    if ( dword_240078 )
      goto LABEL_34;
    v15 = sub_F5178(v26, v24);
    sub_F5120(v15);
    sub_F51A4(&unk_240068, v26);
    if ( v26 == v27 )
    {
      v16 = 4;
    }
    else
    {
      if ( !v27 )
        goto LABEL_34;
      v16 = 5;
    }
    (*(void (**)(void))(*v27 + 4 * v16))();
LABEL_34:
    if ( v24 == v25 )
    {
      v17 = 4;
    }
    else
    {
      if ( !v25 )
        goto LABEL_39;
      v17 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v25 + 4 * v17))();
LABEL_39:
    if ( !v14 )
      sub_164196(v12 + 6766800, sub_F50FC, a1 + 3056);
    if ( v20 == v21 )
    {
      v18 = 4;
    }
    else
    {
      if ( !v21 )
      {
LABEL_46:
        sub_22178C(a1, 0x3F8u);
        sub_1641C4(dword_23DF24 + 6774948);
        *(_DWORD *)(dword_23DF24 + 6774948) = a1;
        sub_22178C(v1, 0x1FCu);
        sub_1641C4(dword_23DF24 + 6780664);
        *(_DWORD *)(dword_23DF24 + 6780664) = v1;
        _android_log_print(4, "AXL", "CustomMapIcon: loaded!");
        return a1;
      }
      v18 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v21 + 4 * v18))();
    goto LABEL_46;
  }
  return a1;
}


// ======================================================================
