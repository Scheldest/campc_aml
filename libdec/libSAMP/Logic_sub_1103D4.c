// ADDR: 0x1101c4
// SYMBOL: sub_1101C4
_DWORD *__fastcall sub_1101C4(_DWORD *a1)
{
  int v2; // r10
  int v3; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r1
  _BYTE v10[16]; // [sp+0h] [bp-68h] BYREF
  _BYTE *v11; // [sp+10h] [bp-58h]
  _BYTE v12[16]; // [sp+18h] [bp-50h] BYREF
  _BYTE *v13; // [sp+28h] [bp-40h]
  _BYTE v14[16]; // [sp+30h] [bp-38h] BYREF
  _BYTE *v15; // [sp+40h] [bp-28h]

  v2 = dword_23DF24;
  *a1 = 0;
  sub_11034C(v10, sub_1102D0, 0, a1);
  v3 = sub_1104F0(v12, v10);
  sub_110498(v3);
  v4 = dword_2633C0;
  if ( !dword_2633C0 )
  {
    v5 = sub_1104F0(v14, v12);
    sub_110498(v5);
    sub_11051C(&unk_2633B0, v14);
    if ( v14 == v15 )
    {
      v6 = 4;
    }
    else
    {
      if ( !v15 )
        goto LABEL_7;
      v6 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v15 + 4 * v6))();
  }
LABEL_7:
  if ( v12 == v13 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v13 )
      goto LABEL_12;
    v7 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v13 + 4 * v7))();
LABEL_12:
  if ( !v4 )
    sub_164196(v2 + 6745368, sub_11045C, a1);
  if ( v10 == v11 )
  {
    v8 = 4;
    goto LABEL_18;
  }
  if ( v11 )
  {
    v8 = 5;
LABEL_18:
    (*(void (**)(void))(*(_DWORD *)v11 + 4 * v8))();
  }
  return a1;
}


// ======================================================================
