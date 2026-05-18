// ADDR: 0x111564
// SYMBOL: sub_111564
int __fastcall sub_111564(int a1)
{
  _QWORD *v2; // r0
  int v3; // r0
  std::__shared_weak_count *v4; // r1
  std::__shared_weak_count *v5; // r0
  int v6; // r8
  int v7; // r0
  int v8; // r10
  int v9; // r0
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r5
  int v14; // r1
  _BYTE v16[16]; // [sp+8h] [bp-70h] BYREF
  _BYTE *v17; // [sp+18h] [bp-60h]
  int v18; // [sp+24h] [bp-54h] BYREF
  _DWORD v19[4]; // [sp+28h] [bp-50h] BYREF
  _DWORD *v20; // [sp+38h] [bp-40h]
  _UNKNOWN **v21; // [sp+40h] [bp-38h] BYREF
  int v22; // [sp+44h] [bp-34h]
  std::__shared_weak_count *v23; // [sp+48h] [bp-30h]
  _DWORD *v24; // [sp+50h] [bp-28h]

  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  v2 = (_QWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 1127481344;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *(_DWORD *)a1 = &off_22AE84;
  *(_DWORD *)v2 = 0;
  v3 = sub_115004(v2, 1127481344);
  v19[1] = 0;
  v18 = a1;
  v19[0] = sub_1118C0;
  sub_1117B4(&v21, v3, v19, &v18);
  v4 = v23;
  *(_DWORD *)(a1 + 4) = v22;
  v5 = *(std::__shared_weak_count **)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v4;
  v22 = 0;
  v23 = 0;
  if ( v5 )
  {
    std::__shared_weak_count::__release_weak(v5);
    v21 = &off_22AE84;
    if ( v23 )
      std::__shared_weak_count::__release_weak(v23);
  }
  v6 = dword_23DF24;
  sub_1119A4(v16, sub_11194C, 0, a1);
  v7 = sub_10CD74((int)v19, (int)v16);
  sub_112128(v7);
  v8 = dword_263450;
  if ( !dword_263450 )
  {
    v9 = sub_10CD74((int)&v21, (int)v19);
    sub_112128(v9);
    sub_10CDA0(dword_263440, (int)&v21);
    if ( &v21 == v24 )
    {
      v10 = 4;
    }
    else
    {
      if ( !v24 )
        goto LABEL_10;
      v10 = 5;
    }
    (*(void (**)(void))(*v24 + 4 * v10))();
  }
LABEL_10:
  if ( v19 == v20 )
  {
    v11 = 4;
  }
  else
  {
    if ( !v20 )
      goto LABEL_15;
    v11 = 5;
  }
  (*(void (**)(void))(*v20 + 4 * v11))();
LABEL_15:
  if ( !v8 )
    sub_164196(v6 + 6747672, sub_112104, a1 + 12);
  if ( v16 == v17 )
  {
    v12 = 4;
  }
  else
  {
    if ( !v17 )
      goto LABEL_22;
    v12 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v17 + 4 * v12))();
LABEL_22:
  if ( v8 )
    _android_log_print(6, "AXL", "Can't install hook on draw_radar. Callback already used");
  v24 = &v21;
  v21 = &off_22B6FC;
  v22 = a1;
  v13 = sub_1642EC(dword_23DF24 + 4153344, &v21);
  if ( &v21 == v24 )
  {
    v14 = 4;
  }
  else
  {
    if ( !v24 )
      goto LABEL_29;
    v14 = 5;
  }
  (*(void (**)(void))(*v24 + 4 * v14))();
LABEL_29:
  if ( v13 )
    _android_log_print(6, "AXL", "Can't remap page 0x3F6000 to restore code of radar scale");
  return a1;
}


// ======================================================================
