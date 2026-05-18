// ADDR: 0x185b6c
// SYMBOL: sub_185B6C
int __fastcall sub_185B6C(__int64 *a1, int a2, __int64 *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v5; // r0
  __int64 v6; // d16
  __int64 v7; // d17
  __int64 v9; // d18
  __int64 v10; // d19
  __int64 v12; // d17
  __int64 v13; // d18
  __int64 v14; // d19
  __int64 v15; // d16
  __int64 v16; // d17
  __int64 v17; // d22
  __int64 v18; // d23
  int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r3
  bool v22; // zf
  _QWORD v24[4]; // [sp+0h] [bp-C0h] BYREF
  _QWORD v25[8]; // [sp+20h] [bp-A0h] BYREF
  __int64 v26; // [sp+60h] [bp-60h] BYREF
  __int64 v27; // [sp+68h] [bp-58h]
  __int64 v28; // [sp+70h] [bp-50h]
  __int64 v29; // [sp+78h] [bp-48h]
  __int64 v30; // [sp+80h] [bp-40h]
  __int64 v31; // [sp+88h] [bp-38h]
  __int64 v32; // [sp+90h] [bp-30h]
  __int64 v33; // [sp+98h] [bp-28h]

  v6 = *a1;
  v7 = a1[1];
  v5 = a1 + 2;
  v9 = *v5;
  v10 = v5[1];
  v26 = v6;
  v27 = v7;
  v28 = v9;
  v29 = v10;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_185C30(&v26);
  v12 = a4[1];
  v13 = a4[2];
  v14 = a4[3];
  v25[0] = *a4;
  v25[1] = v12;
  v25[2] = v13;
  v25[3] = v14;
  memset(&v25[4], 0, 32);
  sub_185CB0(&v26, v25, &v26);
  v15 = *a3;
  v16 = a3[1];
  v17 = a3[2];
  v18 = a3[3];
  v24[0] = v26;
  v24[1] = v27;
  v24[2] = v28;
  v24[3] = v29;
  *a5 = v15;
  a5[1] = v16;
  a5[2] = v17;
  a5[3] = v18;
  v19 = 28;
  while ( 1 )
  {
    v20 = *(_DWORD *)((char *)a3 + v19);
    v21 = *(_DWORD *)((char *)v24 + v19);
    if ( v20 > v21 )
      break;
    if ( v20 >= v21 )
    {
      v22 = v19 == 0;
      v19 -= 4;
      if ( !v22 )
        continue;
    }
    sub_185174((int)a5, (int)v24);
    return sub_185136((int)a5, (int)a4);
  }
  return sub_185174((int)a5, (int)v24);
}


// ======================================================================
