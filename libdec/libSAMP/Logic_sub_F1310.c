// ADDR: 0x10b928
// SYMBOL: sub_10B928
int __fastcall sub_10B928(int a1)
{
  int v2; // r0
  int v3; // r8
  int v4; // r0
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v9; // [sp+4h] [bp-6Ch]
  _BYTE v10[16]; // [sp+8h] [bp-68h] BYREF
  _BYTE *v11; // [sp+18h] [bp-58h]
  _BYTE v12[16]; // [sp+20h] [bp-50h] BYREF
  _BYTE *v13; // [sp+30h] [bp-40h]
  _BYTE v14[16]; // [sp+38h] [bp-38h] BYREF
  _BYTE *v15; // [sp+48h] [bp-28h]

  *(_QWORD *)(a1 + 8) = 0x3A8000003A800000LL;
  *(_QWORD *)(a1 + 16) = 0x3F0000003F000000LL;
  *(_QWORD *)(a1 + 24) = 0x3A8000003F000000LL;
  *(_QWORD *)(a1 + 32) = 0x3F0000003F800000LL;
  *(_QWORD *)(a1 + 40) = 0x3F0000003A800000LL;
  *(_QWORD *)(a1 + 48) = 0x3F8000003F000000LL;
  *(_QWORD *)(a1 + 56) = 0x3F0000003F000000LL;
  *(_QWORD *)(a1 + 64) = 0x3F8000003F800000LL;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 1065353216;
  *(_DWORD *)(a1 + 96) = 0;
  sub_10BE0C(a1 + 72);
  v9 = dword_23DF24;
  *(_BYTE *)(a1 + 92) = 0;
  sub_10BB58(v10, sub_10BAE4, 0, a1);
  v2 = sub_10BEC4(v12, v10);
  sub_10BE6C(v2);
  v3 = dword_2631C8;
  if ( !dword_2631C8 )
  {
    v4 = sub_10BEC4(v14, v12);
    sub_10BE6C(v4);
    sub_10BEF0(&unk_2631B8, v14);
    if ( v14 == v15 )
    {
      v5 = 4;
    }
    else
    {
      if ( !v15 )
        goto LABEL_7;
      v5 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v15 + 4 * v5))();
  }
LABEL_7:
  if ( v12 == v13 )
  {
    v6 = 4;
  }
  else
  {
    if ( !v13 )
      goto LABEL_12;
    v6 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v13 + 4 * v6))();
LABEL_12:
  if ( !v3 )
    sub_164196(v9 + 6747388, sub_10BE40, a1 + 96);
  if ( v10 == v11 )
  {
    v7 = 4;
    goto LABEL_18;
  }
  if ( v11 )
  {
    v7 = 5;
LABEL_18:
    (*(void (**)(void))(*(_DWORD *)v11 + 4 * v7))();
  }
  return a1;
}


// ======================================================================
