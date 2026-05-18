// ADDR: 0x186af0
// SYMBOL: sub_186AF0
int __fastcall sub_186AF0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, int a6)
{
  __int64 v6; // d17
  int v11; // r0
  unsigned int v12; // r1
  bool v13; // zf
  __int64 v14; // d17
  __int64 v15; // d17
  int v16; // r0
  unsigned int v17; // r1
  __int64 v18; // d17
  int v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r2
  _QWORD v23[4]; // [sp+0h] [bp-170h] BYREF
  __int64 v24[2]; // [sp+20h] [bp-150h] BYREF
  _QWORD v25[2]; // [sp+30h] [bp-140h] BYREF
  _QWORD v26[4]; // [sp+40h] [bp-130h] BYREF
  __int64 v27[4]; // [sp+60h] [bp-110h] BYREF
  __int64 v28[2]; // [sp+80h] [bp-F0h] BYREF
  __int64 v29; // [sp+90h] [bp-E0h] BYREF
  __int64 v30; // [sp+98h] [bp-D8h]
  __int64 v31; // [sp+A0h] [bp-D0h]
  __int64 v32; // [sp+A8h] [bp-C8h]
  __int64 v33[2]; // [sp+B0h] [bp-C0h] BYREF
  _QWORD v34[2]; // [sp+C0h] [bp-B0h] BYREF
  _QWORD v35[4]; // [sp+D0h] [bp-A0h] BYREF
  __int64 v36[4]; // [sp+F0h] [bp-80h] BYREF
  __int64 v37[2]; // [sp+110h] [bp-60h] BYREF
  __int64 v38; // [sp+120h] [bp-50h] BYREF
  __int64 v39; // [sp+128h] [bp-48h]
  __int64 v40; // [sp+130h] [bp-40h]
  __int64 v41; // [sp+138h] [bp-38h]

  v6 = a4[1];
  v38 = *a4;
  v39 = v6;
  v40 = 0LL;
  v41 = 0LL;
  v11 = 0;
  do
  {
    v12 = *((_DWORD *)&v38 + v11);
    *((_DWORD *)&v38 + v11) = v12 - 1;
    if ( v12 - 1 < v12 )
      break;
    v13 = v11++ == 7;
  }
  while ( !v13 );
  sub_184D9C(a3, &v38, (int)&v38);
  v37[0] = v38;
  v37[1] = v39;
  v14 = a4[1];
  v36[0] = *a4;
  v36[1] = v14;
  memset(&v36[2], 0, 16);
  sub_184D9C(a2, v36, (int)v35);
  v33[0] = v35[0];
  v33[1] = v35[1];
  sub_184C5E(v33, v37, a4, v34);
  v15 = a5[1];
  v29 = *a5;
  v30 = v15;
  v31 = 0LL;
  v32 = 0LL;
  v16 = 0;
  do
  {
    v17 = *((_DWORD *)&v29 + v16);
    *((_DWORD *)&v29 + v16) = v17 - 1;
    if ( v17 - 1 < v17 )
      break;
    v13 = v16++ == 7;
  }
  while ( !v13 );
  sub_184D9C(a3, &v29, (int)&v29);
  v28[0] = v29;
  v28[1] = v30;
  v18 = a5[1];
  v27[0] = *a5;
  v27[1] = v18;
  memset(&v27[2], 0, 16);
  sub_184D9C(a2, v27, (int)v26);
  v24[0] = v26[0];
  v24[1] = v26[1];
  sub_184C5E(v24, v28, a5, v25);
  v19 = 12;
  while ( 1 )
  {
    v20 = *(_DWORD *)((char *)v34 + v19);
    v21 = *(_DWORD *)((char *)v25 + v19);
    if ( v21 > v20 )
      break;
    if ( v21 >= v20 )
    {
      v13 = v19 == 0;
      v19 -= 4;
      if ( !v13 )
        continue;
    }
    sub_184F9C((int)v25, (int)v34);
    sub_18621A((int)v25, (int)a5);
    goto LABEL_16;
  }
  sub_184F9C((int)v25, (int)v34);
LABEL_16:
  sub_184D2E(v25, a6, a1);
  sub_184D9C(a1, v27, (int)a1);
  sub_186D6A(a1, v36);
  v23[0] = v34[0];
  v23[1] = v34[1];
  memset(&v23[2], 0, 16);
  return sub_185136((int)a1, (int)v23);
}


// ======================================================================
// ADDR: 0x186c66
// SYMBOL: sub_186C66
_QWORD *__fastcall sub_186C66(__int64 *a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 *v4; // r0
  __int64 v5; // d22
  __int64 v6; // d23
  __int64 v7; // d28
  __int64 v8; // d29
  __int64 *v9; // r1
  __int64 v10; // d18
  __int64 v11; // d19
  __int64 v12; // d24
  __int64 v13; // d25
  __int64 *v14; // r2
  __int64 v15; // d20
  __int64 v16; // d21
  __int64 v17; // d26
  __int64 v18; // d27
  int v19; // r10
  int v20; // r4
  int v21; // r8
  unsigned int i; // r9
  __int64 v23; // d17
  __int64 v24; // d18
  __int64 v25; // d19
  _QWORD *result; // r0
  _QWORD v28[8]; // [sp+8h] [bp-120h] BYREF
  _QWORD v29[8]; // [sp+48h] [bp-E0h] BYREF
  _QWORD v30[8]; // [sp+88h] [bp-A0h] BYREF
  _QWORD v31[12]; // [sp+C8h] [bp-60h] BYREF

  v5 = *a1;
  v6 = a1[1];
  v4 = a1 + 2;
  v7 = *v4;
  v8 = v4[1];
  v31[0] = v5;
  v31[1] = v6;
  v31[2] = v7;
  v31[3] = v8;
  memset(&v31[4], 0, 32);
  v10 = *a2;
  v11 = a2[1];
  v9 = a2 + 2;
  v12 = *v9;
  v13 = v9[1];
  v30[0] = v10;
  v30[1] = v11;
  v30[2] = v12;
  v30[3] = v13;
  memset(&v30[4], 0, 32);
  v15 = *a3;
  v16 = a3[1];
  v14 = a3 + 2;
  v17 = *v14;
  v18 = v14[1];
  v29[0] = v15;
  v29[1] = v16;
  v29[2] = v17;
  v29[3] = v18;
  memset(&v29[4], 0, 32);
  LODWORD(v28[0]) = 1;
  memset((char *)v28 + 4, 0, 44);
  memset(&v28[6], 0, 16);
  sub_185CB0((int *)v31, (int *)v29, v31);
  v19 = 0;
  v20 = 0;
  do
  {
    v21 = 32;
    for ( i = *((_DWORD *)v30 + v19); i; i >>= 1 )
    {
      if ( i << 31 )
      {
        for ( ; v20; --v20 )
        {
          sub_186DDA(v31);
          sub_185CB0((int *)v31, (int *)v29, v31);
        }
        sub_186E6E(v28, v31, v28);
        sub_185CB0((int *)v28, (int *)v29, v28);
        v20 = 0;
      }
      --v21;
      ++v20;
    }
    ++v19;
    v20 += v21;
  }
  while ( v19 != 8 );
  v23 = v28[1];
  v24 = v28[2];
  v25 = v28[3];
  *a4 = v28[0];
  a4[1] = v23;
  result = a4 + 2;
  a4[2] = v24;
  a4[3] = v25;
  return result;
}


// ======================================================================
