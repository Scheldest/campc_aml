// ADDR: 0x182a98
// SYMBOL: sub_182A98
int __fastcall sub_182A98(int a1, int a2, int a3, int a4)
{
  __int16 v5; // r11
  int v8; // r0
  int v9; // r8
  int v10; // r9
  int v11; // r4
  int v12; // r10
  _DWORD *v13; // r0
  int v14; // r1
  int v16; // [sp+0h] [bp-38h]
  int v17; // [sp+4h] [bp-34h]
  int v18; // [sp+8h] [bp-30h] BYREF
  __int16 v19; // [sp+Ch] [bp-2Ch]
  int v20; // [sp+10h] [bp-28h]
  int v21; // [sp+14h] [bp-24h] BYREF
  int v22; // [sp+18h] [bp-20h]

  v5 = a3;
  v21 = a2;
  v22 = a3;
  v8 = sub_17E2E4();
  if ( !*(_WORD *)(a1 + 8) )
    return 0;
  v9 = *(_DWORD *)(a1 + 832);
  v10 = 0;
  v11 = 0;
  while ( *(_BYTE *)(v9 + v10) )
  {
    v10 += 2112;
    ++v11;
    if ( 2112 * *(unsigned __int16 *)(a1 + 8) == v10 )
      return 0;
  }
  v16 = a4;
  v17 = v8;
  v12 = v9 + v10;
  sub_17E5FE((_DWORD *)(v9 + v10 + 2096));
  *(_WORD *)(v12 + 8) = v5;
  *(_BYTE *)(v9 + v10) = 1;
  *(_DWORD *)(v12 + 4) = a2;
  sub_189D64(v9 + v10 + 24);
  sub_189D68(v9 + v10 + 24);
  sub_1876C8(v9 + v10 + 24, 0);
  v13 = (_DWORD *)(v9 + v10 + 1744);
  v14 = 5;
  do
  {
    *v13 = 0;
    --v14;
    *((_WORD *)v13 - 2) = -1;
    v13 += 2;
  }
  while ( v14 );
  *(_DWORD *)(v12 + 2108) = v16;
  *(_DWORD *)(v12 + 1788) = 0;
  *(_WORD *)(v12 + 1784) = -1;
  *(_DWORD *)(v12 + 1780) = 0;
  *(_BYTE *)(v12 + 1736) = 0;
  sub_17D55E((_DWORD *)(v12 + 1796));
  *(_DWORD *)(v12 + 12) = -1;
  *(_DWORD *)(v12 + 2072) = v17;
  *(_DWORD *)(v12 + 1792) = v17;
  *(_BYTE *)(v12 + 2092) = 0;
  *(_WORD *)(v12 + 16) = -1;
  sub_1876AE(v12 + 24, 1);
  v18 = v21;
  v19 = v22;
  v20 = v11;
  sub_182B9C(a1 + 836, &v21, &v18);
  return v12;
}


// ======================================================================
// ADDR: 0x182de8
// SYMBOL: sub_182DE8
int __fastcall sub_182DE8(int a1, int a2)
{
  int v4; // r0
  int v5; // r1

  EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
  *(_DWORD *)sub_184892(a1 + 2472) = a2;
  v4 = *(_DWORD *)(a1 + 2484);
  v5 = *(_DWORD *)(a1 + 2492);
  *(_BYTE *)(v4 + 4) = 1;
  *(_DWORD *)(a1 + 2484) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(a1 + 2492) = v5 + 1;
  return sub_2243C4(&unk_381C10);
}


// ======================================================================
// ADDR: 0x187a22
// SYMBOL: sub_187A22
int __fastcall sub_187A22(int a1, char *a2, size_t a3, int a4, __int64 a5)
{
  int v5; // r5
  int v8; // r10
  int v9; // r0
  int v10; // r1
  __int64 v11; // r0
  char v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r5
  unsigned int v16; // r6
  int v17; // r1
  int v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r3
  int v22; // r1
  unsigned __int16 *v23; // r5
  __int64 v24; // r8
  int v25; // r10
  unsigned int v26; // r6
  int v27; // r1
  __int16 v28; // r2
  int v29; // r1
  unsigned __int16 v30; // r0
  unsigned int v31; // r5
  void *v32; // r0
  unsigned int v33; // r3
  unsigned int v34; // r8
  int v35; // r6
  int v36; // r1
  unsigned int v37; // r6
  unsigned int v38; // r6
  unsigned int v39; // r4
  unsigned int v40; // r5
  bool v41; // cf
  unsigned int v42; // r6
  int v43; // r4
  int v44; // r5
  _DWORD *v45; // r6
  unsigned int v46; // r0
  unsigned int v47; // r1
  unsigned int v48; // r0
  int v49; // r5
  int v50; // r6
  unsigned int v51; // r0
  bool v52; // cc
  int v53; // r0
  bool v54; // zf
  unsigned int v55; // r0
  void *v56; // r0
  int v57; // r0
  unsigned int v58; // r8
  void *v59; // r0
  int v60; // r0
  unsigned int v61; // r2
  int v62; // r6
  unsigned int v63; // r3
  int v64; // r6
  int v65; // r0
  void *v66; // r0
  void *v67; // r0
  int v68; // r5
  unsigned __int16 *v69; // r5
  unsigned int v70; // r1
  unsigned __int16 v71; // r0
  unsigned __int16 v72; // r0
  int *v73; // r10
  int v74; // r8
  int v75; // r1
  int v76; // r1
  _DWORD *v77; // r2
  int v78; // r6
  int v79; // r2
  _DWORD *v82; // [sp+18h] [bp-168h]
  _DWORD *v83; // [sp+1Ch] [bp-164h]
  int *v84; // [sp+20h] [bp-160h]
  unsigned int v85; // [sp+24h] [bp-15Ch]
  unsigned int v86; // [sp+28h] [bp-158h]
  int v87; // [sp+2Ch] [bp-154h]
  unsigned __int64 v88; // [sp+30h] [bp-150h] BYREF
  unsigned __int16 *v89; // [sp+3Ch] [bp-144h] BYREF
  int v90; // [sp+40h] [bp-140h] BYREF
  unsigned int v91; // [sp+44h] [bp-13Ch]
  unsigned int v92; // [sp+48h] [bp-138h]
  _DWORD v93[2]; // [sp+4Ch] [bp-134h] BYREF
  int v94; // [sp+54h] [bp-12Ch]
  int v95; // [sp+58h] [bp-128h]
  size_t v96[8]; // [sp+160h] [bp-20h] BYREF

  v5 = a3;
  v96[0] = a3;
  sub_17E2E4();
  v8 = 1;
  if ( !a2 || v5 < 2 )
    return v8;
  if ( *(_BYTE *)(a1 + 1664) )
    *(_BYTE *)(a1 + 1664) = 0;
  if ( sub_17E0BA(a1 + 1044) )
  {
    v9 = sub_17E1FC(a1 + 1044, a2, v5, a2, v96);
    v5 = v96[0];
    if ( !v9 )
    {
      v8 = 0;
      v22 = *(_DWORD *)(a1 + 896);
      ++*(_DWORD *)(a1 + 888);
      *(_DWORD *)(a1 + 896) = v22 + 8 * v5;
      return v8;
    }
  }
  v10 = *(_DWORD *)(a1 + 892);
  ++*(_DWORD *)(a1 + 884);
  *(_DWORD *)(a1 + 892) = v10 + 8 * v5;
  v8 = 0;
  sub_17D4F2((int)v93, a2, v5, 0);
  v11 = sub_17E348();
  v85 = HIDWORD(v11);
  v86 = v11;
  v12 = v94;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  if ( v94 < v93[0] )
  {
    v13 = *(unsigned __int8 *)(v95 + (v94++ >> 3));
    if ( ((v13 << (v12 & 7)) & 0x80) != 0 )
    {
      if ( !sub_188098(&v90, v93) )
        goto LABEL_27;
      if ( v91 )
      {
        v14 = v90;
        v15 = 0;
        while ( 1 )
        {
          v16 = *(unsigned __int16 *)(v14 + 4 * v15);
          if ( v16 > *(unsigned __int16 *)(v14 + 4 * v15 + 2) )
            break;
          do
          {
            if ( sub_189D76(a1 + 64, (unsigned __int16)v16, &v88) )
            {
              v17 = v88;
              v18 = *(_DWORD *)(v88 + 56);
              *(_DWORD *)(v88 + 40) = 0;
              *(_DWORD *)(v17 + 44) = 0;
            }
            else
            {
              ++*(_DWORD *)(a1 + 904);
              v18 = -1;
            }
            if ( v18 != -1 && __SPAIR64__(v85, v86) >= *(_QWORD *)(a1 + 984) && v18 == *(_DWORD *)(a1 + 992) )
              ++*(_DWORD *)(a1 + 1004);
            v14 = v90;
            LOWORD(v16) = v16 + 1;
            v19 = *(_DWORD *)(a1 + 80);
            v20 = *(unsigned __int16 *)(v90 + 4 * v15);
            v21 = v19;
            if ( v19 )
            {
              v21 = v85;
              v19 = v86;
            }
            *(_DWORD *)(a1 + 184) = v19;
            *(_DWORD *)(a1 + 188) = v21;
          }
          while ( (unsigned __int16)v16 >= v20
               && (unsigned __int16)v16 <= (unsigned int)*(unsigned __int16 *)(v14 + 4 * v15 + 2) );
          if ( ++v15 >= v91 )
            goto LABEL_25;
        }
LABEL_27:
        v8 = 0;
        goto LABEL_139;
      }
LABEL_25:
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
  }
  v23 = (unsigned __int16 *)sub_188150(a1, v93, v86, v85);
  v89 = v23;
  if ( !v23 )
    goto LABEL_139;
  v24 = a5;
  v87 = sub_221404(v86, v85, 1000, 0);
  v25 = a4;
  v83 = (_DWORD *)(a1 + 12);
  v82 = (_DWORD *)(a1 + 1696);
  v84 = (int *)(a1 + 944);
  do
  {
    if ( *(_DWORD *)(HIDWORD(v24) + 4) )
    {
      v26 = 0;
      do
      {
        (*(void (__fastcall **)(_DWORD, unsigned __int16 *, _DWORD, int, _DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)HIDWORD(v24) + 4 * v26)
                                                                                             + 36))(
          *(_DWORD *)(*(_DWORD *)HIDWORD(v24) + 4 * v26),
          v23,
          *(_DWORD *)(a1 + 1652),
          v25,
          v24,
          v87,
          0);
        v23 = v89;
        ++v26;
      }
      while ( v26 < *(_DWORD *)(HIDWORD(v24) + 4) );
    }
    if ( (unsigned int)(*((_DWORD *)v23 + 3) - 8) <= 2 )
    {
      v27 = *v23;
      ++*(_DWORD *)(a1 + 812);
      sub_189E52(a1 + 28, v27);
    }
    if ( *(_BYTE *)(a1 + 962) )
    {
      sub_18829C(v84, 512);
      v28 = 0;
      *(_BYTE *)(a1 + 962) = 0;
      *(_WORD *)(a1 + 960) = 0;
    }
    else
    {
      v28 = *(_WORD *)(a1 + 960);
    }
    v29 = (int)v89;
    v30 = *v89 - v28;
    v31 = v30;
    if ( v30 )
    {
      if ( v30 > 0x8000u )
      {
        v32 = (void *)*((_DWORD *)v89 + 13);
        ++*(_DWORD *)(a1 + 916);
        if ( v32 )
        {
          operator delete[](v32);
          v29 = (int)v89;
        }
LABEL_114:
        sub_17E56C(v82, v29);
        goto LABEL_136;
      }
      v34 = *(_DWORD *)(a1 + 952);
      v33 = *(_DWORD *)(a1 + 948);
      v38 = *(_DWORD *)(a1 + 956);
      v39 = v34 - v33;
      if ( v34 < v33 )
        v39 += v38;
      if ( v39 <= v30 )
      {
        if ( v39 < v30 )
        {
          do
          {
            v88 = 1000LL * *(unsigned int *)(a1 + 736) + __PAIR64__(v85, v86);
            sub_1882D2(v84, &v88);
            v46 = *(_DWORD *)(a1 + 948);
            v47 = *(_DWORD *)(a1 + 952);
            v41 = v47 >= v46;
            v48 = v47 - v46;
            if ( !v41 )
              v48 += *(_DWORD *)(a1 + 956);
          }
          while ( v48 < v31 );
        }
        v88 = 0LL;
        sub_1882D2(v84, &v88);
        v34 = *(_DWORD *)(a1 + 952);
        v33 = *(_DWORD *)(a1 + 948);
        v28 = *(_WORD *)(a1 + 960);
      }
      else
      {
        v40 = v30 + v33;
        v41 = v40 >= v38;
        v42 = v40 - v38;
        v43 = *v84;
        if ( !v41 )
          v42 = v30 + v33;
        v44 = *(_DWORD *)(v43 + 8 * v42);
        v45 = (_DWORD *)(v43 + 8 * v42);
        if ( !(v44 | v45[1]) )
        {
          v67 = (void *)*((_DWORD *)v89 + 13);
          ++*(_DWORD *)(a1 + 916);
          if ( v67 )
          {
            operator delete[](v67);
            v29 = (int)v89;
          }
          sub_17E56C(v82, v29);
          LODWORD(v24) = a5;
          goto LABEL_136;
        }
        *v45 = 0;
        v45[1] = 0;
      }
    }
    else
    {
      v34 = *(_DWORD *)(a1 + 952);
      v33 = *(_DWORD *)(a1 + 948);
      v35 = 0;
      v36 = *(_DWORD *)(a1 + 956);
      if ( v34 < v33 )
        v35 = -v36;
      if ( v34 - v33 != v35 )
      {
        v37 = v33 + 1;
        v33 = v33 + 1 - v36;
        if ( v33 )
          v33 = v37;
        *(_DWORD *)(a1 + 948) = v33;
      }
      *(_WORD *)(a1 + 960) = ++v28;
    }
    HIDWORD(v24) = *(_DWORD *)(a1 + 956);
    v49 = v34 - v33;
    if ( v34 < v33 )
      v49 += HIDWORD(v24);
    if ( v49 )
    {
      v50 = *(_DWORD *)(a1 + 944);
      if ( *(_QWORD *)(v50 + 8 * v33) < __SPAIR64__(v85, v86) )
      {
        while ( 1 )
        {
          v51 = v33 + 1;
          ++v28;
          v33 = v33 + 1 - HIDWORD(v24);
          if ( v33 )
            v33 = v51;
          v49 = v34 - v33;
          *(_DWORD *)(a1 + 948) = v33;
          if ( v34 < v33 )
            v49 += HIDWORD(v24);
          if ( !v49 )
            break;
          if ( *(_QWORD *)(v50 + 8 * v33) >= __SPAIR64__(v85, v86) )
            goto LABEL_76;
        }
        v49 = 0;
LABEL_76:
        *(_WORD *)(a1 + 960) = v28;
      }
    }
    else
    {
      v49 = 0;
    }
    v52 = HIDWORD(v24) > 0x200;
    LODWORD(v24) = a5;
    ++*(_DWORD *)(a1 + 908);
    if ( HIDWORD(v24) > 0x200 )
      v52 = HIDWORD(v24) > 3 * v49;
    if ( v52 )
      sub_1883A0(v84);
    v29 = (int)v89;
    if ( *((_DWORD *)v89 + 7) )
    {
      sub_188454(a1, v89, v86, v85);
      v29 = (int)v89;
    }
    v53 = *(_DWORD *)(v29 + 12);
    v54 = v53 == 10;
    if ( v53 != 10 )
      v54 = v53 == 7;
    if ( v54 )
    {
      v55 = *(unsigned __int8 *)(v29 + 16);
      if ( v55 >= 0x20 )
      {
        v56 = *(void **)(v29 + 52);
        if ( v56 )
        {
          operator delete[](v56);
          v29 = (int)v89;
        }
        goto LABEL_114;
      }
      v60 = a1 + 2 * v55;
      v61 = *(unsigned __int16 *)(v29 + 18);
      v62 = *(__int16 *)(v60 + 660);
      if ( v62 > -1 )
      {
        if ( v61 < (unsigned __int16)v62 )
          goto LABEL_112;
        v63 = *(_WORD *)(v60 + 660) ^ 0x8000;
        goto LABEL_108;
      }
      if ( v61 < (unsigned __int16)v62 )
      {
        v63 = (unsigned __int16)v62 - 32766;
LABEL_108:
        if ( v63 <= v61 )
        {
LABEL_112:
          v66 = *(void **)(v29 + 52);
          ++*(_DWORD *)(a1 + 868);
          if ( v66 )
          {
            operator delete[](v66);
            v29 = (int)v89;
          }
          goto LABEL_114;
        }
      }
      v64 = *(_DWORD *)(v29 + 28);
      ++*(_DWORD *)(a1 + 872);
      if ( v64 )
      {
        sub_188520(a1, v29, v86, v85);
        v65 = sub_18863A(a1, v89[10], v86, v85);
        v89 = (unsigned __int16 *)v65;
        if ( !v65 )
          goto LABEL_136;
        *(_WORD *)(a1 + 2 * *(unsigned __int8 *)(v65 + 16) + 660) = *(_WORD *)(v65 + 18) + 1;
        sub_17E430(v83, (int *)&v89);
      }
      else
      {
        *(_WORD *)(v60 + 660) = v61 + 1;
        sub_17E430(v83, (int *)&v89);
      }
LABEL_135:
      v89 = 0;
      goto LABEL_136;
    }
    if ( *(_DWORD *)(v29 + 28) )
    {
      if ( v53 != 9 )
        *(_BYTE *)(v29 + 16) = -1;
      sub_188520(a1, v29, v86, v85);
      v57 = sub_18863A(a1, v89[10], v86, v85);
      v29 = v57;
      v89 = (unsigned __int16 *)v57;
      if ( !v57 )
        goto LABEL_136;
      v53 = *(_DWORD *)(v57 + 12);
    }
    if ( v53 != 9 )
    {
      sub_17E430(v83, (int *)&v89);
      goto LABEL_135;
    }
    v58 = *(unsigned __int8 *)(v29 + 16);
    if ( v58 >= 0x20 )
    {
      v59 = *(void **)(v29 + 52);
      LODWORD(v24) = a5;
      if ( v59 )
      {
        operator delete[](v59);
        v29 = (int)v89;
      }
      goto LABEL_114;
    }
    v68 = a1 + 2 * v58;
    if ( *(unsigned __int16 *)(v68 + 596) == *(unsigned __int16 *)(v29 + 18) )
    {
      ++*(_DWORD *)(a1 + 880);
      sub_17E430(v83, (int *)&v89);
      v69 = (unsigned __int16 *)(v68 + 596);
      v70 = *(_DWORD *)(a1 + 4);
      v71 = *v69;
      v89 = 0;
      v72 = v71 + 1;
      *v69 = v72;
      if ( v70 > v58 )
      {
        v73 = *(int **)(*(_DWORD *)a1 + 4 * v58);
        if ( v73 )
        {
          do
          {
            v74 = *v73;
            if ( !*v73 )
              break;
            v75 = v73[1];
            if ( v75 )
              v73[2] = v75;
            if ( v74 < 1 )
              break;
            v76 = 0;
            do
            {
              v77 = (_DWORD *)v73[2];
              v78 = *v77;
              if ( *(unsigned __int16 *)(*v77 + 18) == v72 )
              {
                sub_18A29A(v73, v76);
                LODWORD(v88) = v78;
                sub_17E430(v83, (int *)&v88);
                v76 = 1;
                v72 = *v69 + 1;
                *v69 = v72;
              }
              else if ( *v73 )
              {
                v79 = v77[2];
                if ( v79 != v73[1] )
                  v73[2] = v79;
              }
              --v74;
            }
            while ( v74 );
          }
          while ( v76 << 31 );
        }
      }
      v25 = a4;
      v89 = 0;
      LODWORD(v24) = a5;
    }
    else
    {
      ++*(_DWORD *)(a1 + 876);
      sub_188780(a1);
      LODWORD(v24) = a5;
    }
LABEL_136:
    HIDWORD(v24) = HIDWORD(a5);
    v23 = (unsigned __int16 *)sub_188150(a1, v93, v86, v85);
    v89 = v23;
  }
  while ( v23 );
  v8 = 1;
  ++*(_DWORD *)(a1 + 1652);
LABEL_139:
  if ( v92 )
  {
    if ( v92 > 0x200 )
    {
      if ( v90 )
        operator delete[]((void *)(v90 - 8));
      v90 = 0;
      v92 = 0;
    }
    v91 = 0;
  }
  sub_18A16A(&v90);
  sub_17D542((int)v93);
  return v8;
}


// ======================================================================
// ADDR: 0x18ccdc
// SYMBOL: sub_18CCDC
int __fastcall sub_18CCDC(int a1, int a2, int a3, signed int a4, int a5, unsigned int a6)
{
  int v9; // r0
  ssize_t v10; // r0
  struct sockaddr addr; // [sp+8h] [bp-30h] BYREF

  if ( a2 == -1 )
    return -1;
  if ( *(_BYTE *)a3 && byte_314318 )
  {
    *(_WORD *)(a3 + 1) = 26985;
    byte_314318 = 0;
  }
  *(_DWORD *)&addr.sa_data[2] = a5;
  *(_WORD *)addr.sa_data = __rev16(a6);
  addr.sa_family = 2;
  sub_DA454((unsigned __int8 *)a3, a4, a6, 0);
  do
  {
    v9 = dword_23DF1C;
    if ( dword_23DF1C != 4 )
      v9 = 1;
    v10 = sendto(a2, &byte_23CAD5, v9 + a4, 0, &addr, 16);
  }
  while ( !v10 );
  return v10 == -1;
}


// ======================================================================
