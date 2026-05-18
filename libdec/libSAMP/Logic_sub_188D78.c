// ADDR: 0x1892d4
// SYMBOL: sub_1892D4
int __fastcall sub_1892D4(int a1, int *a2, int a3, _BYTE *a4, __int64 a5, int a6, int a7, _DWORD **a8)
{
  int v11; // r0
  int v12; // r1
  int v13; // r5
  int v14; // r9
  int v15; // r6
  int v16; // r8
  int v17; // r0
  int v18; // r2
  int v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r12
  _DWORD *v23; // r10
  int v24; // r6
  int v25; // r5
  int v26; // r0
  int *v27; // r5
  int v28; // t1
  unsigned int v29; // r2
  unsigned int v30; // r1
  unsigned int *v31; // r8
  int v32; // r3
  bool v33; // cf
  unsigned int v34; // r2
  _DWORD *v35; // r2
  unsigned int v36; // r1
  int v37; // r3
  int v38; // r2
  int v39; // r1
  int v40; // r11
  int v41; // r12
  __int64 v42; // kr08_8
  void *v43; // r0
  int v44; // r3
  int v45; // r2
  int v46; // r8
  _DWORD *v47; // r1
  int v48; // r3
  int v49; // r4
  unsigned int v50; // r9
  int v51; // r0
  int v52; // r0
  _DWORD *v53; // r1
  int v54; // r2
  int v55; // r3
  __int64 v56; // r2
  bool v57; // zf
  void *v58; // r0
  int v59; // r3
  int v61; // r9
  int v62; // r3
  int v63; // r1
  __int64 v64; // kr20_8
  unsigned int v65; // r2
  unsigned int v66; // r0
  void *v67; // r0
  unsigned int v68; // r1
  int v69; // r3
  unsigned int v70; // r1
  unsigned int v71; // r2
  _DWORD *v72; // r3
  unsigned int v73; // r1
  int v74; // r1
  int v75; // r4
  _DWORD *v76; // r2
  unsigned int v77; // r6
  int v78; // r11
  __int64 v79; // kr38_8
  int v80; // r0
  int v81; // r0
  int v82; // r6
  int v83; // r3
  __int64 v84; // kr40_8
  int v85; // r0
  __int64 v86; // r4
  int v87; // r6
  int v88; // r1
  int v89; // r3
  int v90; // r2
  int v91; // [sp+10h] [bp-78h]
  __int64 *v92; // [sp+14h] [bp-74h]
  _BYTE *v93; // [sp+18h] [bp-70h]
  int *v94; // [sp+1Ch] [bp-6Ch]
  int v95; // [sp+20h] [bp-68h]
  int v96; // [sp+24h] [bp-64h]
  unsigned int *v97; // [sp+28h] [bp-60h]
  _DWORD *v98; // [sp+2Ch] [bp-5Ch]
  int *v99; // [sp+30h] [bp-58h]
  _DWORD *v100; // [sp+34h] [bp-54h]
  int v101; // [sp+38h] [bp-50h]
  _DWORD *v102; // [sp+3Ch] [bp-4Ch]
  int v103; // [sp+40h] [bp-48h]
  int v104; // [sp+44h] [bp-44h]
  int v105; // [sp+48h] [bp-40h]
  int *v107; // [sp+58h] [bp-30h]
  unsigned int *v108; // [sp+5Ch] [bp-2Ch]
  int v109; // [sp+60h] [bp-28h] BYREF
  int v110; // [sp+64h] [bp-24h] BYREF
  int v111[8]; // [sp+68h] [bp-20h] BYREF

  v11 = sub_17E0BA(a1 + 1044);
  v12 = a3 + 0x20000000;
  v13 = a3 - 28;
  v14 = 0;
  v93 = a4;
  *a4 = 0;
  v15 = v13;
  if ( v11 )
    v15 = v12 - 44;
  v96 = a1;
  if ( *(_QWORD *)(a1 + 40) >= a5 )
  {
    v103 = 1;
    v105 = 0;
    goto LABEL_10;
  }
  v16 = *(_DWORD *)(a1 + 32);
  if ( v16 )
  {
    sub_17D84A(a2);
    v105 = 1;
    v17 = sub_189914(a1 + 28, a2, 8 * v13 - 1, 1);
    v18 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 820) += v17;
    if ( v18 )
    {
      v103 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v105 = 0;
  }
  v103 = v16 == 0;
  *(_QWORD *)(a1 + 40) = a5;
LABEL_10:
  v95 = 8 * v15;
  v19 = sub_221404(a5, HIDWORD(a5), 1000, 0);
  v20 = *(_DWORD *)(a1 + 96);
  v21 = *(_DWORD *)(a1 + 92);
  v22 = *(_DWORD *)(a1 + 100);
  if ( v20 < v21 )
    v14 = -v22;
  v92 = (__int64 *)(a1 + 1656);
  v102 = (_DWORD *)(a1 + 1696);
  v94 = (int *)(a1 + 88);
  v101 = v19;
  if ( v20 - v21 != v14 )
  {
    v61 = a1;
    while ( 1 )
    {
      v62 = *v94;
      v63 = *(_DWORD *)(*v94 + 4 * v21);
      v64 = *(_QWORD *)(v63 + 40);
      v109 = v63;
      if ( v64 )
      {
        if ( *(_QWORD *)(*(_DWORD *)(v62 + 4 * v21) + 40) >= a5 )
          goto LABEL_15;
        v70 = v21 + 1;
        v71 = v21 + 1 - v22;
        if ( v71 )
          v71 = v70;
        *(_DWORD *)(v96 + 92) = v71;
        if ( !v71 )
          v71 = v22;
        v72 = *(_DWORD **)(v62 + 4 * v71 - 4);
        v109 = (int)v72;
        v73 = v72[3] - 7;
        if ( v73 > 3 )
          v74 = 37;
        else
          v74 = dword_91DE0[v73];
        v75 = v72[12];
        if ( v72[7] )
          v74 += 80;
        if ( v74 + v75 + *a2 + 16 > v95 )
        {
          sub_189A44(v94, &v109, 0);
          goto LABEL_61;
        }
        v76 = a8;
        if ( a8[1] )
        {
          v77 = 0;
          v78 = v19;
          do
          {
            (*(void (__fastcall **)(_DWORD, _DWORD *, _DWORD, int, int, int, int))(**(_DWORD **)(*v76 + 4 * v77) + 36))(
              *(_DWORD *)(*v76 + 4 * v77),
              v72,
              *(_DWORD *)(v96 + 1648),
              a6,
              a7,
              v78,
              1);
            v76 = a8;
            ++v77;
            v72 = (_DWORD *)v109;
          }
          while ( v77 < (unsigned int)a8[1] );
          v75 = *(_DWORD *)(v109 + 48);
        }
        v79 = *(_QWORD *)(v96 + 828);
        *(_DWORD *)(v96 + 828) = v79 + 1;
        *(_DWORD *)(v96 + 832) = HIDWORD(v79) + v75;
        v80 = v103 << 31;
        if ( v103 << 31 )
        {
          v80 = sub_17D828(a2);
          v72 = (_DWORD *)v109;
        }
        v81 = sub_189B34(v80, a2, v72);
        v82 = *(_DWORD *)(v96 + 836);
        *v93 = 1;
        v83 = *(_DWORD *)(v96 + 824);
        *(_DWORD *)(v96 + 836) = v81 + v82;
        v84 = *v92;
        *(_DWORD *)(v96 + 824) = v83 + 1;
        v85 = v109;
        v86 = *(_QWORD *)(v96 + 984);
        v87 = *(_DWORD *)(v96 + 1648);
        *(_QWORD *)(v109 + 40) = v84 + a5;
        *(_DWORD *)(v85 + 4) = v87;
        if ( a5 >= v86 )
        {
          v88 = *(_DWORD *)(v96 + 992);
          v90 = *(_DWORD *)(v85 + 56);
          v89 = v105;
          if ( v90 == v88 )
          {
            ++*(_DWORD *)(v96 + 1000);
            v88 = v90;
          }
        }
        else
        {
          v88 = *(_DWORD *)(v96 + 992);
          v89 = v105;
        }
        *(_DWORD *)(v85 + 56) = v88;
        v110 = v85;
        v105 = v89 + 1;
        sub_17E430(v94, &v110);
        v68 = *(_DWORD *)(v96 + 96);
        v21 = *(_DWORD *)(v96 + 92);
        v22 = *(_DWORD *)(v96 + 100);
        v103 = 0;
      }
      else
      {
        v65 = v21 + 1;
        v66 = v65 - v22;
        if ( v65 != v22 )
          v66 = v65;
        *(_DWORD *)(v96 + 92) = v66;
        v67 = *(void **)(v63 + 52);
        if ( v67 )
        {
          operator delete[](v67);
          v63 = v109;
        }
        sub_17E56C(v102, v63);
        v68 = *(_DWORD *)(v96 + 96);
        v21 = *(_DWORD *)(v96 + 92);
        v22 = *(_DWORD *)(v96 + 100);
      }
      v69 = 0;
      if ( v68 < v21 )
        v69 = -v22;
      v19 = v101;
      if ( v68 - v21 == v69 )
        goto LABEL_15;
    }
  }
  v61 = a1;
LABEL_15:
  v23 = v102;
  v24 = 0;
  v91 = v61 + 64;
  do
  {
    v25 = v61 + 16 * v24;
    v28 = *(_DWORD *)(v25 + 116);
    v27 = (int *)(v25 + 116);
    v26 = v28;
    v29 = *(v27 - 1);
    v31 = (unsigned int *)(v27 - 2);
    v30 = *(v27 - 2);
    v108 = (unsigned int *)(v27 - 1);
    v32 = 0;
    v33 = v29 >= v30;
    v34 = v29 - v30;
    if ( !v33 )
      v32 = -v26;
    if ( v34 != v32 )
    {
      v35 = (_DWORD *)(v61 + 4 * v24);
      v104 = v24;
      v100 = v35 + 198;
      v98 = v35 + 190;
      v99 = v35 + 194;
      v107 = v27 - 3;
      v97 = (unsigned int *)(v27 - 2);
      while ( 1 )
      {
        while ( 1 )
        {
          v36 = v30 + 1;
          v37 = v36 - v26;
          v38 = *v107;
          if ( v36 != v26 )
            v37 = v36;
          *v31 = v37;
          if ( !v37 )
            v37 = v26;
          v39 = *(_DWORD *)(v38 + 4 * v37 - 4);
          v109 = v39;
          v40 = *(_DWORD *)(v39 + 12);
          v41 = (unsigned int)(v40 - 7) > 3 ? 37 : dword_91DE0[v40 - 7];
          v42 = *(_QWORD *)(v61 + 56);
          if ( !v42 || (v40 & 0xFFFFFFFE) != 6 || *(_QWORD *)(v39 + 32) + v42 >= a5 )
            break;
          v43 = *(void **)(v39 + 52);
          if ( v43 )
          {
            operator delete[](v43);
            v39 = v109;
          }
          sub_17E56C(v23, v39);
          v44 = 0;
          v30 = *v31;
          v26 = *v27;
          if ( *v108 < *v31 )
            v44 = -v26;
          if ( *v108 - *v31 == v44 )
            goto LABEL_59;
        }
        if ( *(_DWORD *)(v39 + 28) )
          v41 += 80;
        if ( *a2 + *(_DWORD *)(v39 + 48) + v41 + 16 > v95 )
          break;
        v45 = *v99;
        ++*v98;
        *v99 = *(_DWORD *)(v39 + 48) + v45;
        if ( a8[1] )
        {
          v46 = v61;
          (*(void (__fastcall **)(_DWORD, int, _DWORD, int, int, int, int))(*(_DWORD *)**a8 + 36))(
            **a8,
            v39,
            *(_DWORD *)(v61 + 1648),
            a6,
            a7,
            v101,
            1);
          v47 = a8;
          v49 = a7;
          v48 = a6;
          if ( (unsigned int)a8[1] >= 2 )
          {
            v50 = 1;
            do
            {
              (*(void (__fastcall **)(_DWORD, int, _DWORD, int, int, int, int))(**(_DWORD **)(*v47 + 4 * v50) + 36))(
                *(_DWORD *)(*v47 + 4 * v50),
                v109,
                *(_DWORD *)(v46 + 1648),
                v48,
                v49,
                v101,
                1);
              v47 = a8;
              ++v50;
              v49 = a7;
              v48 = a6;
            }
            while ( v50 < (unsigned int)a8[1] );
          }
        }
        v23 = v102;
        v51 = v103 << 31;
        if ( v103 << 31 )
          v51 = sub_17D828(a2);
        v52 = sub_189B34(v51, a2, v109);
        v61 = v96;
        v53 = (_DWORD *)v109;
        v31 = (unsigned int *)(v27 - 2);
        *v100 += v52;
        v53[1] = *(_DWORD *)(v96 + 1648);
        if ( (unsigned int)(v40 - 8) > 2 )
        {
          v58 = (void *)v53[13];
          if ( v58 )
          {
            operator delete[](v58);
            v53 = (_DWORD *)v109;
          }
          sub_17E56C(v102, (int)v53);
        }
        else
        {
          v53[14] = *(_DWORD *)(v96 + 992);
          v54 = *(unsigned __int16 *)v53;
          v55 = (unsigned __int64)(*v92 + a5) >> 32;
          v53[10] = *(_DWORD *)v92 + a5;
          v53[11] = v55;
          sub_189C10(v91, v54, &v109);
          v56 = *(_QWORD *)(v96 + 184);
          v111[0] = v109;
          v57 = v56 == 0;
          if ( v56 )
            v57 = *(_DWORD *)(v96 + 80) == 0;
          if ( v57 )
            *(_QWORD *)(v96 + 184) = a5;
          sub_17E430(v94, v111);
          *v93 = 1;
        }
        v24 = v104;
        ++v105;
        v26 = *v27;
        v30 = *v97;
        v103 = 0;
        v59 = 0;
        if ( *v108 < *v97 )
          v59 = -v26;
        if ( *v108 - *v97 == v59 )
          goto LABEL_60;
      }
      sub_189A44(v107, &v109, 0);
LABEL_59:
      v24 = v104;
    }
LABEL_60:
    ++v24;
  }
  while ( v24 != 4 );
LABEL_61:
  if ( *a2 >= 1 )
    ++*(_DWORD *)(v61 + 1648);
  return v105;
}


// ======================================================================
// ADDR: 0x1897da
// SYMBOL: sub_1897DA
int __fastcall sub_1897DA(int a1, int a2)
{
  int v3; // r5
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  _DWORD *v8; // r0
  void *v9; // r9
  _DWORD *v10; // r6
  int result; // r0

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == *(_DWORD *)(a1 + 8) )
  {
    v5 = 2 * v3;
    if ( !v3 )
      v5 = 16;
    *(_DWORD *)(a1 + 8) = v5;
    v6 = v5 - (v5 & 0x3FFFFFFE);
    v7 = 4 * v5;
    if ( v6 )
      v7 = -1;
    v8 = (_DWORD *)operator new[](v7);
    v9 = *(void **)a1;
    v10 = v8;
    j_memcpy(v8, *(const void **)a1, 4 * v3);
    if ( v9 )
    {
      operator delete[](v9);
      v3 = *(_DWORD *)(a1 + 4);
    }
    *(_DWORD *)a1 = v10;
  }
  else
  {
    v10 = *(_DWORD **)a1;
  }
  result = v3 + 1;
  v10[v3] = a2;
  *(_DWORD *)(a1 + 4) = v3 + 1;
  return result;
}


// ======================================================================
// ADDR: 0x189848
// SYMBOL: sub_189848
float __fastcall sub_189848(int a1, int a2, int a3, unsigned __int16 a4, int a5)
{
  double v8; // d16
  float v10; // s16
  float result; // r0
  int v12; // r0
  int v13; // r1
  size_t v14; // r5
  int v15; // r3
  int v16; // r6
  int v17; // r2
  int v18[11]; // [sp+Ch] [bp-2Ch] BYREF

  v8 = *(double *)(a1 + 1680);
  if ( v8 <= 0.0 || (v10 = *(double *)(a1 + 1024) / v8, result = COERCE_FLOAT(sub_1871A0()), result >= v10) )
  {
    v12 = sub_17E0BA(a1 + 1044);
    v13 = *(_DWORD *)a5 + 7;
    v14 = v13 >> 3;
    v18[0] = v13 >> 3;
    if ( v12 )
    {
      sub_17E100(a1 + 1044, *(unsigned __int8 **)(a5 + 12), v14, *(unsigned __int8 **)(a5 + 12), v18);
      v15 = v18[0];
      *(_DWORD *)(a1 + 860) = 8 * (v18[0] - v14);
    }
    else
    {
      v15 = v13 >> 3;
    }
    v16 = *(_DWORD *)(a1 + 864);
    ++*(_DWORD *)(a1 + 856);
    v17 = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(a1 + 864) = v16 + 8 * v15;
    return COERCE_FLOAT(sub_18CCDC(&unk_382751, a2, v17, v15, a3, a4));
  }
  return result;
}


// ======================================================================
// ADDR: 0x220c98
// SYMBOL: sub_220C98
double __fastcall sub_220C98(double a1)
{
  int v1; // s0

  v1 = HIDWORD(a1);
  WORD2(a1) = 0;
  HIWORD(a1) = 17200;
  return (double)v1 * 4294967300.0 + -4.50359963e15 + a1;
}


// ======================================================================
