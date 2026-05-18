// ADDR: 0xde2cc
// SYMBOL: sub_DE2CC
int __fastcall sub_DE2CC(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // r3
  bool v7; // zf
  int v8; // lr
  int v9; // r3
  const char *v10; // r6
  const char *v11; // r2
  int v12; // r2
  _DWORD v14[2]; // [sp+8h] [bp-28h] BYREF
  _DWORD v15[2]; // [sp+10h] [bp-20h] BYREF
  __int64 v16; // [sp+18h] [bp-18h]

  v15[1] = a4;
  v16 = a5;
  v6 = *(_DWORD *)(a6 + 4);
  v7 = (HIDWORD(a5) & 0xFF000000) == 0x1000000;
  v15[0] = a3;
  if ( (HIDWORD(a5) & 0xFF000000) == 0x1000000 )
    v7 = (a5 & 0xFF000000) == 805306368;
  if ( v7 )
    BYTE3(v16) = 32;
  v8 = v6 & 0x10000;
  v9 = BYTE1(v6);
  v10 = "nan";
  v14[0] = v9;
  v11 = "inf";
  if ( v8 )
  {
    v10 = "NAN";
    v11 = "INF";
  }
  if ( a2 )
    v11 = v10;
  v14[1] = v11;
  v12 = 4;
  if ( !v9 )
    v12 = 3;
  return ((int (__fastcall *)(int, _DWORD *, int, int, _DWORD *))sub_DE358)(a1, v15, v12, v12, v14);
}


// ======================================================================
// ADDR: 0xde3f0
// SYMBOL: sub_DE3F0
int __fastcall sub_DE3F0(int a1, int *a2, _DWORD *a3, int a4, unsigned int a5, std::locale *a6)
{
  unsigned int v7; // r8
  unsigned int v10; // r2
  int v11; // r5
  int v12; // r11
  int v13; // r0
  _DWORD *v14; // r4
  int v15; // r2
  int v16; // r4
  int v17; // r3
  int v18; // r0
  int v19; // r8
  int v20; // r2
  int v21; // r3
  char v22; // r1
  int v23; // r1
  bool v24; // zf
  int v25; // r0
  int v26; // r1
  int v28; // r6
  _DWORD *v29; // r8
  unsigned __int8 *v30; // r0
  int v31; // r0
  int v32; // r0
  unsigned __int8 *v33; // r0
  int v34; // r0
  int v35; // r4
  int v36; // r0
  int v37; // r1
  _DWORD *v39; // [sp+4h] [bp-7Ch]
  int *v40; // [sp+8h] [bp-78h] BYREF
  char *v41; // [sp+Ch] [bp-74h]
  int *v42; // [sp+10h] [bp-70h]
  int *v43; // [sp+14h] [bp-6Ch]
  char *v44; // [sp+18h] [bp-68h]
  int *v45; // [sp+1Ch] [bp-64h]
  int *v46; // [sp+20h] [bp-60h]
  char *v47; // [sp+24h] [bp-5Ch]
  char *v48; // [sp+28h] [bp-58h]
  _DWORD v49[4]; // [sp+2Ch] [bp-54h] BYREF
  int v50; // [sp+3Ch] [bp-44h] BYREF
  int v51; // [sp+40h] [bp-40h] BYREF
  char v52; // [sp+47h] [bp-39h] BYREF
  int v53; // [sp+48h] [bp-38h] BYREF
  char v54; // [sp+4Fh] [bp-31h] BYREF
  int v55; // [sp+50h] [bp-30h] BYREF
  char *v56; // [sp+54h] [bp-2Ch] BYREF
  int v57; // [sp+58h] [bp-28h] BYREF
  unsigned int v58; // [sp+5Ch] [bp-24h]

  v7 = *a2;
  v57 = a4;
  v58 = a5;
  v10 = __clz(v7 | 1) ^ 0x1F;
  v53 = BYTE1(a5);
  v11 = __CFADD__(dword_91AF8[2 * v10], v7) + dword_91AF8[2 * v10 + 1];
  v12 = v11 + 1;
  v55 = v11;
  v56 = (char *)v7;
  v54 = 48;
  if ( !BYTE1(a5) )
    v12 = v11;
  if ( (a5 & 0x20000) != 0 )
  {
    v14 = a3;
    v13 = fmt::v8::detail::decimal_point_impl<char>(a6);
    a3 = v14;
  }
  else
  {
    v13 = 46;
  }
  v15 = a2[1];
  v16 = v15 + v11;
  v52 = v13;
  if ( (unsigned __int8)v58 == 1 )
    goto LABEL_17;
  if ( !(_BYTE)v58 )
  {
    v17 = v57;
    if ( v57 <= 0 )
      v17 = 16;
    if ( v16 < -3 || v16 > v17 )
    {
LABEL_17:
      v20 = v16 - 1;
      if ( (v58 & 0x80000) != 0 )
      {
        v21 = (v57 - v11) & ~((v57 - v11) >> 31);
        v12 += v21;
      }
      else
      {
        v21 = 0;
        if ( v11 == 1 )
        {
          v52 = 0;
          v13 = 0;
        }
      }
      v46 = (int *)(v16 - 1);
      v22 = 69;
      if ( (v58 & 0x10000) == 0 )
        v22 = 101;
      BYTE1(v45) = v22;
      LOBYTE(v45) = 48;
      v23 = *a3;
      v44 = (char *)v21;
      LOBYTE(v43) = v13;
      v42 = (int *)v11;
      v40 = (int *)BYTE1(a5);
      v41 = (char *)v7;
      if ( v16 <= 0 )
        v20 = 1 - v16;
      if ( v23 < 1 )
        return sub_DE69C(&v40, a1, v20);
      v24 = v13 == 0;
      v25 = 3;
      v26 = 3;
      if ( v24 )
        v25 = 2;
      if ( v20 >= 1000 )
        v26 = 4;
      if ( v20 <= 99 )
        v26 = 2;
      return ((int (__fastcall *)(int, _DWORD *, int, int, int **))sub_DE7D4)(
               a1,
               a3,
               v26 + v12 + v25,
               v26 + v12 + v25,
               &v40);
    }
  }
  v51 = v15 + v11;
  if ( v15 < 0 )
  {
    if ( v16 >= 1 )
    {
      v28 = (v57 - v11) & ((int)(v58 << 12) >> 31);
      v29 = a3;
      v50 = v28;
      v30 = sub_DD758((unsigned __int8 *)v49, (int)a6, (v58 >> 17) & 1);
      v31 = sub_DD86C(v30, v11);
      v47 = &v54;
      v45 = v49;
      v46 = &v50;
      v44 = &v52;
      v43 = &v51;
      v42 = &v55;
      v41 = (char *)&v56;
      v40 = &v53;
      if ( v28 > 0 )
        v12 += v28;
      v32 = ((int (__fastcall *)(int, _DWORD *, int, int, int **))sub_DEB84)(
              a1,
              v29,
              v31 + v12 + 1,
              v31 + v12 + 1,
              &v40);
      goto LABEL_42;
    }
    v36 = -v16;
    if ( v57 < -v16 )
      v36 = v57;
    if ( v57 <= -1 )
      v36 = -v16;
    if ( v11 )
      v36 = -v16;
    v49[0] = v36;
    if ( v36 | v11 )
    {
      LOBYTE(v50) = 1;
    }
    else
    {
      LOBYTE(v50) = (v58 & 0x80000) != 0;
      if ( (v58 & 0x80000) == 0 )
      {
        v37 = 1;
LABEL_55:
        v46 = &v55;
        v45 = (int *)&v56;
        v44 = (char *)v49;
        v43 = (int *)&v52;
        v42 = &v50;
        v41 = &v54;
        v40 = &v53;
        return ((int (__fastcall *)(int, _DWORD *, int, int, int **))sub_DEE14)(
                 a1,
                 a3,
                 v36 + v12 + v37,
                 v36 + v12 + v37,
                 &v40);
      }
    }
    v37 = 2;
    goto LABEL_55;
  }
  v18 = v57 - v16;
  v19 = v15 + v12;
  v39 = a3;
  v50 = v57 - v16;
  if ( (v58 & 0x80000) != 0 )
  {
    ++v19;
    if ( v18 > 0 || (unsigned __int8)v58 == 2 )
    {
      if ( v18 >= 1 )
        v19 += v18;
    }
    else
    {
      ++v19;
      v50 = 1;
    }
  }
  v33 = sub_DD758((unsigned __int8 *)v49, (int)a6, (v58 >> 17) & 1);
  v34 = sub_DD86C(v33, v16);
  v48 = &v54;
  v47 = (char *)&v50;
  v46 = (int *)&v52;
  v45 = &v57;
  v42 = &v55;
  v41 = (char *)&v56;
  v43 = a2;
  v44 = (char *)v49;
  v40 = &v53;
  v32 = sub_DE980(a1, v39, v34 + v19, v34 + v19, &v40);
LABEL_42:
  v35 = v32;
  if ( LOBYTE(v49[0]) << 31 )
    operator delete((void *)v49[2]);
  return v35;
}


// ======================================================================
