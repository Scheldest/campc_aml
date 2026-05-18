// ADDR: 0xdefc8
// SYMBOL: sub_DEFC8
int __fastcall sub_DEFC8(int a1, int *a2, int *a3, int a4, unsigned int a5, std::locale *a6)
{
  int *v6; // r12
  unsigned __int64 v7; // kr00_8
  bool v9; // zf
  unsigned int v11; // r3
  __int64 v12; // r4
  int v13; // r1
  int v14; // r0
  int v16; // r2
  int v17; // r3
  int v18; // r0
  int *v19; // r9
  int v20; // r8
  int v21; // r2
  int v22; // r3
  int v23; // r6
  char v24; // r1
  int v25; // r1
  int v26; // r0
  int v27; // r1
  int v29; // r6
  int *v30; // r8
  unsigned __int8 *v31; // r0
  int v32; // r0
  int v33; // r1
  int v34; // r0
  unsigned __int8 *v35; // r0
  int v36; // r0
  int v37; // r4
  int v38; // r2
  bool v39; // cc
  int v40; // r0
  int v41; // r3
  int v42; // r1
  int v44; // [sp+8h] [bp-88h]
  _DWORD v45[4]; // [sp+10h] [bp-80h] BYREF
  int v46; // [sp+20h] [bp-70h] BYREF
  int v47; // [sp+24h] [bp-6Ch] BYREF
  int *v48; // [sp+28h] [bp-68h] BYREF
  char *v49; // [sp+2Ch] [bp-64h]
  int *v50; // [sp+30h] [bp-60h]
  int *v51; // [sp+34h] [bp-5Ch]
  char *v52; // [sp+38h] [bp-58h]
  int *v53; // [sp+3Ch] [bp-54h]
  int *v54; // [sp+40h] [bp-50h]
  char *v55; // [sp+44h] [bp-4Ch]
  char *v56; // [sp+48h] [bp-48h]
  char v57; // [sp+53h] [bp-3Dh] BYREF
  int v58; // [sp+54h] [bp-3Ch] BYREF
  char v59; // [sp+5Bh] [bp-35h] BYREF
  int v60; // [sp+5Ch] [bp-34h] BYREF
  unsigned __int64 v61; // [sp+60h] [bp-30h] BYREF
  int v62; // [sp+68h] [bp-28h] BYREF
  unsigned int v63; // [sp+6Ch] [bp-24h]

  v6 = a3;
  v7 = *(_QWORD *)a2;
  v9 = a2[1] == 0;
  v62 = a4;
  v63 = a5;
  v11 = __clz(v7 | 1) + 32;
  if ( !v9 )
    v11 = __clz(HIDWORD(v7));
  HIDWORD(v12) = byte_91BF8[v11 ^ 0x3F];
  v61 = v7;
  if ( v7 < qword_91C38[HIDWORD(v12)] )
    --HIDWORD(v12);
  v59 = 48;
  v13 = HIDWORD(v12);
  v60 = HIDWORD(v12);
  v58 = BYTE1(a5);
  if ( BYTE1(a5) )
    v13 = HIDWORD(v12) + 1;
  v44 = v13;
  if ( (a5 & 0x20000) != 0 )
  {
    v14 = fmt::v8::detail::decimal_point_impl<char>(a6);
    v6 = a3;
  }
  else
  {
    v14 = 46;
  }
  v16 = a2[2];
  LODWORD(v12) = HIDWORD(v12) + v16;
  v57 = v14;
  if ( (unsigned __int8)v63 == 1 )
    goto LABEL_21;
  if ( !(_BYTE)v63 )
  {
    v17 = v62;
    if ( v62 <= 0 )
      v17 = 16;
    if ( (int)v12 < -3 || (int)v12 > v17 )
    {
LABEL_21:
      v21 = v12 - 1;
      if ( (v63 & 0x80000) != 0 )
      {
        v22 = (v62 - HIDWORD(v12)) & ~((v62 - HIDWORD(v12)) >> 31);
        v23 = v44 + v22;
      }
      else
      {
        v22 = 0;
        if ( HIDWORD(v12) == 1 )
        {
          v57 = 0;
          v14 = 0;
        }
        v23 = v44;
      }
      v50 = (int *)v7;
      v24 = 69;
      v56 = (char *)(v12 - 1);
      if ( (v63 & 0x10000) == 0 )
        v24 = 101;
      BYTE1(v55) = v24;
      LOBYTE(v55) = 48;
      v25 = *v6;
      v54 = (int *)v22;
      LOBYTE(v53) = v14;
      v52 = (char *)HIDWORD(v12);
      v48 = (int *)BYTE1(a5);
      v51 = (int *)HIDWORD(v7);
      if ( (int)v12 <= 0 )
        v21 = 1 - v12;
      if ( v25 < 1 )
        return sub_DF2B8(&v48, a1, v21);
      v9 = v14 == 0;
      v26 = 3;
      v27 = 3;
      if ( v9 )
        v26 = 2;
      if ( v21 >= 1000 )
        v27 = 4;
      if ( v21 <= 99 )
        v27 = 2;
      return sub_DF400(a1, v6, v27 + v23 + v26, v27 + v23 + v26, &v48);
    }
  }
  v47 = HIDWORD(v12) + v16;
  if ( v16 < 0 )
  {
    if ( (int)v12 >= 1 )
    {
      v29 = (v62 - HIDWORD(v12)) & ((int)(v63 << 12) >> 31);
      v30 = v6;
      v46 = v29;
      v31 = sub_DD758((unsigned __int8 *)v45, (int)a6, (v63 >> 17) & 1);
      v32 = sub_DD86C(v31, SHIDWORD(v12));
      v55 = &v59;
      v53 = v45;
      v54 = &v46;
      v52 = &v57;
      v51 = &v47;
      v50 = &v60;
      v49 = (char *)&v61;
      v48 = &v58;
      v33 = v44;
      if ( v29 > 0 )
        v33 = v44 + v29;
      v34 = sub_DF618(a1, v30, v32 + v33 + 1, v32 + v33 + 1, &v48);
      goto LABEL_46;
    }
    v38 = -(int)v12;
    v39 = v62 < -(int)v12;
    LODWORD(v12) = -(int)v12;
    if ( v39 )
      LODWORD(v12) = v62;
    if ( v62 <= -1 )
      LODWORD(v12) = v38;
    if ( HIDWORD(v12) )
      LODWORD(v12) = v38;
    v45[0] = v12;
    if ( v12 )
    {
      v41 = v44;
      v40 = a1;
      LOBYTE(v46) = 1;
    }
    else
    {
      v41 = v44;
      v40 = a1;
      LOBYTE(v46) = (v63 & 0x80000) != 0;
      if ( (v63 & 0x80000) == 0 )
      {
        v42 = 1;
LABEL_59:
        v54 = &v60;
        v53 = (int *)&v61;
        v52 = (char *)v45;
        v51 = (int *)&v57;
        v50 = &v46;
        v49 = &v59;
        v48 = &v58;
        return sub_DF8D4(v40, v6, v12 + v41 + v42, v12 + v41 + v42, &v48);
      }
    }
    v42 = 2;
    goto LABEL_59;
  }
  v18 = v62 - v12;
  v19 = v6;
  v20 = v16 + v44;
  v46 = v62 - v12;
  if ( (v63 & 0x80000) != 0 )
  {
    ++v20;
    if ( v18 > 0 || (unsigned __int8)v63 == 2 )
    {
      if ( v18 >= 1 )
        v20 += v18;
    }
    else
    {
      ++v20;
      v46 = 1;
    }
  }
  v35 = sub_DD758((unsigned __int8 *)v45, (int)a6, (v63 >> 17) & 1);
  v36 = sub_DD86C(v35, v12);
  v56 = &v59;
  v55 = (char *)&v46;
  v54 = (int *)&v57;
  v53 = &v62;
  v50 = &v60;
  v49 = (char *)&v61;
  v51 = a2;
  v52 = (char *)v45;
  v48 = &v58;
  v34 = sub_DF460(a1, v19, v36 + v20, v36 + v20, &v48);
LABEL_46:
  v37 = v34;
  if ( LOBYTE(v45[0]) << 31 )
    operator delete((void *)v45[2]);
  return v37;
}


// ======================================================================
