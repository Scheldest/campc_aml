// ADDR: 0x128478
// SYMBOL: sub_128478
_DWORD *__fastcall sub_128478(_DWORD *a1)
{
  _DWORD *v2; // r6
  int v3; // r11
  int v4; // r0
  int v5; // r8
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r1
  _BYTE v11[16]; // [sp+0h] [bp-68h] BYREF
  _BYTE *v12; // [sp+10h] [bp-58h]
  _BYTE v13[16]; // [sp+18h] [bp-50h] BYREF
  _BYTE *v14; // [sp+28h] [bp-40h]
  _BYTE v15[16]; // [sp+30h] [bp-38h] BYREF
  _BYTE *v16; // [sp+40h] [bp-28h]

  a1[6] = 0;
  v2 = a1 + 6;
  a1[2] = 0;
  v3 = dword_23DF24;
  *a1 = 0;
  a1[1] = 0;
  sub_1285D4(v11, sub_1285C0, 0, a1);
  v4 = sub_128984(v13, v11);
  sub_12892C(v4);
  v5 = dword_314128;
  if ( !dword_314128 )
  {
    v6 = sub_128984(v15, v13);
    sub_12892C(v6);
    sub_1289B0(&unk_314118, v15);
    if ( v15 == v16 )
    {
      v7 = 4;
    }
    else
    {
      if ( !v16 )
        goto LABEL_7;
      v7 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v16 + 4 * v7))();
  }
LABEL_7:
  if ( v13 == v14 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v14 )
      goto LABEL_12;
    v8 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v14 + 4 * v8))();
LABEL_12:
  if ( !v5 )
    sub_164196(v3 + 6762576, sub_128900, v2);
  if ( v11 == v12 )
  {
    v9 = 4;
    goto LABEL_18;
  }
  if ( v12 )
  {
    v9 = 5;
LABEL_18:
    (*(void (**)(void))(*(_DWORD *)v12 + 4 * v9))();
  }
  return a1;
}


// ======================================================================
