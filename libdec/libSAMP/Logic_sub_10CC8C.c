// ADDR: 0x10c8a8
// SYMBOL: sub_10C8A8
_DWORD *__fastcall sub_10C8A8(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r1
  _DWORD v8[4]; // [sp+0h] [bp-40h] BYREF
  _DWORD *v9; // [sp+10h] [bp-30h]
  _BYTE v10[16]; // [sp+18h] [bp-28h] BYREF
  _BYTE *v11; // [sp+28h] [bp-18h]

  *a1 = 0;
  v9 = v8;
  v8[1] = a1;
  v8[0] = &off_22B344;
  sub_10CD1C(&off_22B344, 0);
  v2 = dword_263218;
  if ( !dword_263218 )
  {
    v3 = sub_10CD74(v10, v8);
    sub_10CD1C(v3, v4);
    sub_10CDA0(&unk_263208, v10);
    if ( v10 == v11 )
    {
      v5 = 4;
    }
    else
    {
      if ( !v11 )
        goto LABEL_7;
      v5 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v11 + 4 * v5))();
  }
LABEL_7:
  if ( v8 == v9 )
  {
    v6 = 4;
  }
  else
  {
    if ( !v9 )
      goto LABEL_12;
    v6 = 5;
  }
  (*(void (**)(void))(*v9 + 4 * v6))();
LABEL_12:
  if ( !v2 )
    sub_164196(dword_23DF24 + 6759196, sub_10C974, a1);
  return a1;
}


// ======================================================================
