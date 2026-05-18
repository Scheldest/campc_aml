// ADDR: 0xf3aa4
// SYMBOL: sub_F3AA4
_QWORD *__fastcall sub_F3AA4(_QWORD *a1)
{
  char *v2; // r6
  int v3; // r11
  int v4; // r0
  int v5; // r8
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r1
  __int64 v10; // kr00_8
  __int64 v11; // d17
  _BYTE v13[16]; // [sp+0h] [bp-68h] BYREF
  _BYTE *v14; // [sp+10h] [bp-58h]
  _BYTE v15[16]; // [sp+18h] [bp-50h] BYREF
  _BYTE *v16; // [sp+28h] [bp-40h]
  __int64 v17; // [sp+30h] [bp-38h] BYREF
  __int64 v18; // [sp+38h] [bp-30h]
  __int64 *v19; // [sp+40h] [bp-28h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (char *)a1 + 12;
  v3 = dword_23DF24;
  sub_F3CAC(v13, sub_F3C08, 0, a1);
  v4 = sub_F3E10(v15, v13);
  sub_F3DB8(v4);
  v5 = dword_240028;
  if ( !dword_240028 )
  {
    v6 = sub_F3E10(&v17, v15);
    sub_F3DB8(v6);
    sub_F3E3C(&unk_240018, &v17);
    if ( &v17 == v19 )
    {
      v7 = 4;
    }
    else
    {
      if ( !v19 )
        goto LABEL_7;
      v7 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v19 + 4 * v7))();
  }
LABEL_7:
  if ( v15 == v16 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v16 )
      goto LABEL_12;
    v8 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v16 + 4 * v8))();
LABEL_12:
  if ( !v5 )
    sub_164196(v3 + 6774292, sub_F3D8C, v2);
  if ( v13 == v14 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v14 )
      goto LABEL_19;
    v9 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v14 + 4 * v9))();
LABEL_19:
  v10 = *(_QWORD *)((char *)a1 + 4);
  v18 = 0x447A0000000000C2LL;
  v17 = 0x900003E0BLL;
  if ( (unsigned int)v10 >= HIDWORD(v10) )
  {
    sub_F4040(a1, &v17);
  }
  else
  {
    v11 = v18;
    *(_QWORD *)v10 = v17;
    *(_QWORD *)(v10 + 8) = v11;
    *((_DWORD *)a1 + 1) = v10 + 16;
  }
  return a1;
}


// ======================================================================
