// ADDR: 0x75410
// SYMBOL: sub_75410
int __fastcall sub_75410(int a1, int a2)
{
  int v2; // r9
  int v3; // r0
  bool v4; // zf
  int v6; // r11
  float v7; // s0
  float v8; // s2
  float v9; // s16
  unsigned int v10; // r9
  char *v11; // r4
  float v12; // s0
  unsigned __int8 *v13; // r1
  unsigned int v14; // r6
  unsigned int v15; // r4
  unsigned int v16; // r0
  int v17; // r12
  unsigned int v18; // r5
  int v19; // r6
  unsigned int v20; // r4
  unsigned int v21; // r8
  unsigned int v22; // r10
  unsigned __int8 *v23; // r0
  unsigned int v24; // r10
  const char *v25; // r5
  size_t v26; // r0
  size_t v27; // r6
  char *v28; // r9
  unsigned __int8 *v29; // r0
  const char *v30; // r5
  size_t v31; // r0
  size_t v32; // r6
  char *v33; // r4
  unsigned int v34; // r4
  int v35; // r1
  int v36; // r0
  const char *v37; // r5
  size_t v38; // r0
  size_t v39; // r6
  char *v40; // r4
  unsigned int v41; // r9
  float v42; // s0
  int v43; // r0
  __int64 v44; // d16
  __int64 v45; // d17
  const char *v46; // r5
  size_t v47; // r0
  size_t v48; // r6
  char *v49; // r4
  unsigned int v50; // r9
  unsigned __int8 *v51; // r1
  unsigned __int8 *v52; // r0
  const char *v53; // r5
  size_t v54; // r0
  size_t v55; // r6
  unsigned int v56; // r9
  unsigned __int8 *v57; // r1
  unsigned __int8 *v58; // r0
  const char *v59; // r5
  size_t v60; // r0
  size_t v61; // r6
  char *v62; // r4
  unsigned int v63; // r9
  float v64; // s0
  int v65; // r0
  int v66; // r4
  int v67; // r0
  int v68; // r0
  const char *v69; // r5
  size_t v70; // r0
  size_t v71; // r6
  char *v72; // r4
  unsigned int v73; // r9
  int v74; // [sp+14h] [bp-ACh]
  unsigned __int8 v75; // [sp+18h] [bp-A8h]
  int v76; // [sp+24h] [bp-9Ch]
  int v77; // [sp+24h] [bp-9Ch]
  float v79; // [sp+34h] [bp-8Ch] BYREF
  size_t v80; // [sp+38h] [bp-88h]
  void *v81; // [sp+3Ch] [bp-84h]
  __int64 v82; // [sp+40h] [bp-80h] BYREF
  __int64 v83; // [sp+48h] [bp-78h]
  __int64 v84; // [sp+54h] [bp-6Ch] BYREF
  int v85; // [sp+5Ch] [bp-64h]

  v2 = a1;
  v3 = *(unsigned __int8 *)(a1 + 12);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_DWORD *)(v2 + 8) == 0;
  if ( !v4 )
  {
    v6 = *(_DWORD *)(v2 + 4);
    v7 = *(float *)(dword_1A442C + 88);
    v8 = *(float *)(dword_1A442C + 92) * 350.0;
    LODWORD(v84) = 0;
    *((float *)&v84 + 1) = v8 * 0.00092593;
    if ( v6 != v2 )
    {
      v9 = (float)(v7 * 1500.0) * 0.00052083;
      v74 = v2;
      do
      {
        v13 = *(unsigned __int8 **)(v6 + 8);
        if ( !v13 )
          goto LABEL_14;
        v14 = *v13;
        v15 = v13[16];
        v16 = *((_DWORD *)v13 + 1);
        v17 = v14 & 1;
        v18 = *((_DWORD *)v13 + 5);
        if ( (v14 & 1) == 0 )
          v16 = v14 >> 1;
        v19 = v15 & 1;
        if ( (v15 & 1) == 0 )
          v18 = v15 >> 1;
        v20 = *((_DWORD *)v13 + 3);
        v21 = HIWORD(v20);
        v22 = v20 >> 8;
        if ( v18 )
        {
          if ( v16 )
          {
            v75 = BYTE1(*((_DWORD *)v13 + 3));
            v24 = *((_DWORD *)v13 + 7);
            v23 = (unsigned __int8 *)*((_DWORD *)v13 + 6);
            v76 = HIBYTE(v20);
            if ( !v19 )
              v23 = v13 + 17;
            v25 = (const char *)sub_87F38(v23);
            v26 = strlen(v25);
            if ( v26 >= 0xFFFFFFF0 )
              goto LABEL_93;
            v27 = v26;
            if ( v26 >= 0xB )
            {
              v34 = (v26 + 16) & 0xFFFFFFF0;
              v28 = (char *)operator new(v34);
              HIDWORD(v82) = v27;
              LODWORD(v83) = v28;
              LODWORD(v82) = v34 + 1;
            }
            else
            {
              v28 = (char *)&v82 + 1;
              LOBYTE(v82) = 2 * v26;
              if ( !v26 )
              {
LABEL_37:
                v28[v27] = 0;
                sub_719EC(&v79, a2, (unsigned __int8 *)&v82, *(float *)&dword_116D58 * 0.5);
                *(float *)&v84 = (float)(v9 - v79) + -10.0;
                if ( (unsigned __int8)v82 << 31 )
                  operator delete((void *)v83);
                HIDWORD(v83) = 1065353216;
                *(float *)&v83 = (float)HIBYTE(v24) * 0.0039216;
                v35 = *(_DWORD *)(v6 + 8);
                *((float *)&v82 + 1) = (float)BYTE2(v24) * 0.0039216;
                *(float *)&v82 = (float)BYTE1(v24) * 0.0039216;
                v36 = *(_DWORD *)(v35 + 24);
                if ( !(*(unsigned __int8 *)(v35 + 16) << 31) )
                  v36 = v35 + 17;
                v37 = (const char *)sub_87F38(v36);
                v38 = strlen(v37);
                if ( v38 >= 0xFFFFFFF0 )
                  goto LABEL_92;
                v39 = v38;
                if ( v38 >= 0xB )
                {
                  v41 = (v38 + 16) & 0xFFFFFFF0;
                  v40 = (char *)operator new(v41);
                  v80 = v39;
                  v81 = v40;
                  LODWORD(v79) = v41 + 1;
                }
                else
                {
                  v40 = (char *)&v79 + 1;
                  LOBYTE(v79) = 2 * v38;
                  if ( !v38 )
                  {
LABEL_47:
                    v42 = *(float *)&dword_116D58;
                    v40[v39] = 0;
                    sub_7178C(a2, &v84, &v82, (unsigned __int8 *)&v79, 1, v42 * 0.5, 0);
                    if ( LOBYTE(v79) << 31 )
                      operator delete(v81);
                    *(float *)&v84 = v9;
                    v82 = 0LL;
                    v83 = 0x3F80000000000000LL;
                    v43 = *(_DWORD *)(dword_1A442C + 108);
                    BYTE2(v79) = 0;
                    LOWORD(v79) = 18178;
                    sub_7178C(a2, &v84, &v82, (unsigned __int8 *)&v79, 0, *(float *)&dword_116D58 * 0.5, v43);
                    if ( LOBYTE(v79) << 31 )
                      operator delete(v81);
                    *(float *)&v44 = 1.0;
                    *((float *)&v44 + 1) = 1.0;
                    *(float *)&v45 = 1.0;
                    *((float *)&v45 + 1) = 1.0;
                    v82 = v44;
                    v83 = v45;
                    v46 = (const char *)sub_75B68(*(_DWORD *)(v6 + 8), *(unsigned __int8 *)(*(_DWORD *)(v6 + 8) + 32));
                    v47 = strlen(v46);
                    if ( v47 >= 0xFFFFFFF0 )
                      goto LABEL_92;
                    v48 = v47;
                    if ( v47 >= 0xB )
                    {
                      v50 = (v47 + 16) & 0xFFFFFFF0;
                      v49 = (char *)operator new(v50);
                      v80 = v48;
                      v81 = v49;
                      LODWORD(v79) = v50 + 1;
                    }
                    else
                    {
                      v49 = (char *)&v79 + 1;
                      LOBYTE(v79) = 2 * v47;
                      if ( !v47 )
                      {
LABEL_57:
                        v49[v48] = 0;
                        sub_7178C(
                          a2,
                          &v84,
                          &v82,
                          (unsigned __int8 *)&v79,
                          0,
                          *(float *)&dword_116D58 * 0.5,
                          *(_DWORD *)(dword_1A442C + 108));
                        if ( LOBYTE(v79) << 31 )
                          operator delete(v81);
                        HIDWORD(v83) = 1065353216;
                        *(float *)&v84 = (float)(v9 + (float)(*(float *)&dword_116D58 * 0.5)) + 20.0;
                        *(float *)&v83 = (float)v76 * 0.0039216;
                        v51 = *(unsigned __int8 **)(v6 + 8);
                        *((float *)&v82 + 1) = (float)(unsigned __int8)v21 * 0.0039216;
                        v52 = (unsigned __int8 *)*((_DWORD *)v51 + 2);
                        *(float *)&v82 = (float)v75 * 0.0039216;
                        if ( !(*v51 << 31) )
                          v52 = v51 + 1;
                        v53 = (const char *)sub_87F38(v52);
                        v54 = strlen(v53);
                        if ( v54 >= 0xFFFFFFF0 )
                          goto LABEL_92;
                        v55 = v54;
                        if ( v54 >= 0xB )
                        {
                          v10 = (v54 + 16) & 0xFFFFFFF0;
                          v11 = (char *)operator new(v10);
                          v80 = v55;
                          v81 = v11;
                          LODWORD(v79) = v10 + 1;
                          v2 = v74;
                        }
                        else
                        {
                          v11 = (char *)&v79 + 1;
                          v2 = v74;
                          LOBYTE(v79) = 2 * v54;
                          if ( !v54 )
                            goto LABEL_10;
                        }
                        j_memcpy(v11, v53, v55);
LABEL_10:
                        v12 = *(float *)&dword_116D58;
                        v11[v55] = 0;
                        sub_7178C(a2, &v84, &v82, (unsigned __int8 *)&v79, 1, v12 * 0.5, 0);
                        goto LABEL_11;
                      }
                    }
                    j_memcpy(v49, v46, v48);
                    goto LABEL_57;
                  }
                }
                j_memcpy(v40, v37, v39);
                goto LABEL_47;
              }
            }
            j_memcpy(v28, v25, v27);
            goto LABEL_37;
          }
        }
        else if ( v16 )
        {
          v29 = (unsigned __int8 *)*((_DWORD *)v13 + 2);
          v77 = HIBYTE(v20);
          if ( !v17 )
            v29 = v13 + 1;
          v30 = (const char *)sub_87F38(v29);
          v31 = strlen(v30);
          if ( v31 >= 0xFFFFFFF0 )
LABEL_93:
            std::__basic_string_common<true>::__throw_length_error(&v82);
          v32 = v31;
          if ( v31 >= 0xB )
          {
            v56 = (v31 + 16) & 0xFFFFFFF0;
            v33 = (char *)operator new(v56);
            HIDWORD(v82) = v32;
            LODWORD(v83) = v33;
            LODWORD(v82) = v56 + 1;
          }
          else
          {
            v33 = (char *)&v82 + 1;
            LOBYTE(v82) = 2 * v31;
            if ( !v31 )
            {
LABEL_67:
              v33[v32] = 0;
              sub_719EC(&v79, a2, (unsigned __int8 *)&v82, *(float *)&dword_116D58 * 0.5);
              *(float *)&v84 = (float)(v9 - v79) + -10.0;
              if ( (unsigned __int8)v82 << 31 )
                operator delete((void *)v83);
              HIDWORD(v83) = 1065353216;
              *(float *)&v83 = (float)v77 * 0.0039216;
              v57 = *(unsigned __int8 **)(v6 + 8);
              *((float *)&v82 + 1) = (float)(unsigned __int8)v21 * 0.0039216;
              *(float *)&v82 = (float)(unsigned __int8)v22 * 0.0039216;
              v58 = (unsigned __int8 *)*((_DWORD *)v57 + 2);
              if ( !(*v57 << 31) )
                v58 = v57 + 1;
              v59 = (const char *)sub_87F38(v58);
              v60 = strlen(v59);
              if ( v60 >= 0xFFFFFFF0 )
LABEL_92:
                std::__basic_string_common<true>::__throw_length_error(&v79);
              v61 = v60;
              if ( v60 >= 0xB )
              {
                v63 = (v60 + 16) & 0xFFFFFFF0;
                v62 = (char *)operator new(v63);
                v80 = v61;
                v81 = v62;
                LODWORD(v79) = v63 + 1;
              }
              else
              {
                v62 = (char *)&v79 + 1;
                LOBYTE(v79) = 2 * v60;
                if ( !v60 )
                {
LABEL_77:
                  v64 = *(float *)&dword_116D58;
                  v62[v61] = 0;
                  sub_7178C(a2, &v84, &v82, (unsigned __int8 *)&v79, 1, v64 * 0.5, 0);
                  if ( LOBYTE(v79) << 31 )
                    operator delete(v81);
                  v65 = *(_DWORD *)(v6 + 8);
                  v66 = -1;
                  *(float *)&v84 = v9;
                  v67 = *(unsigned __int8 *)(v65 + 32);
                  if ( v67 == 56 )
                  {
                    LOWORD(v66) = 255;
                    BYTE2(v66) = 0;
                  }
                  v82 = 0LL;
                  v83 = 0x3F80000000000000LL;
                  BYTE2(v79) = 0;
                  if ( v67 == 55 )
                  {
                    LOWORD(v66) = 0;
                    BYTE2(v66) = -1;
                  }
                  LOWORD(v79) = 18178;
                  sub_7178C(
                    a2,
                    &v84,
                    &v82,
                    (unsigned __int8 *)&v79,
                    0,
                    *(float *)&dword_116D58 * 0.5,
                    *(_DWORD *)(dword_1A442C + 108));
                  if ( LOBYTE(v79) << 31 )
                    operator delete(v81);
                  HIDWORD(v83) = 1065353216;
                  *(float *)&v83 = (float)BYTE2(v66) * 0.0039216;
                  v68 = *(_DWORD *)(v6 + 8);
                  *(float *)&v82 = (float)(unsigned __int8)v66 * 0.0039216;
                  *((float *)&v82 + 1) = (float)BYTE1(v66) * 0.0039216;
                  v69 = (const char *)sub_75B68(v68, *(unsigned __int8 *)(v68 + 32));
                  v70 = strlen(v69);
                  if ( v70 >= 0xFFFFFFF0 )
                    goto LABEL_92;
                  v71 = v70;
                  if ( v70 >= 0xB )
                  {
                    v73 = (v70 + 16) & 0xFFFFFFF0;
                    v72 = (char *)operator new(v73);
                    v80 = v71;
                    v81 = v72;
                    LODWORD(v79) = v73 + 1;
                    v2 = v74;
                  }
                  else
                  {
                    v72 = (char *)&v79 + 1;
                    v2 = v74;
                    LOBYTE(v79) = 2 * v70;
                    if ( !v70 )
                    {
LABEL_91:
                      v72[v71] = 0;
                      sub_7178C(
                        a2,
                        &v84,
                        &v82,
                        (unsigned __int8 *)&v79,
                        0,
                        *(float *)&dword_116D58 * 0.5,
                        *(_DWORD *)(dword_1A442C + 108));
LABEL_11:
                      if ( LOBYTE(v79) << 31 )
                        operator delete(v81);
                      goto LABEL_13;
                    }
                  }
                  j_memcpy(v72, v69, v71);
                  goto LABEL_91;
                }
              }
              j_memcpy(v62, v59, v61);
              goto LABEL_77;
            }
          }
          j_memcpy(v33, v30, v32);
          goto LABEL_67;
        }
LABEL_13:
        *((float *)&v84 + 1) = *((float *)&v84 + 1) + (float)((float)(*(float *)&dword_116D58 * 0.5) + 5.0);
LABEL_14:
        v6 = *(_DWORD *)(v6 + 4);
      }
      while ( v6 != v2 );
    }
  }
  return v85;
}


// ======================================================================
