// ADDR: 0x80b40
// SYMBOL: sub_80B40
int sub_80B40()
{
  _DWORD *i; // r0
  void **v1; // r5
  void *v2; // r0
  _DWORD *v3; // r5
  char **j; // r4
  void *v5; // r0
  _DWORD *v6; // r2
  int *v7; // r10
  int *v8; // r4
  unsigned int v9; // r0
  int *v10; // r3
  unsigned int v11; // r6
  _DWORD *v12; // r1
  _DWORD *v13; // r1
  char *v14; // r5
  char *v15; // r4
  char *v16; // r0
  int v17; // r0
  int v18; // r1
  char *v19; // t1
  int v20; // r0
  bool v21; // zf
  int v23; // r0
  int v24; // r1
  bool v25; // zf
  int v26; // r0
  int v27; // r1
  bool v28; // zf
  int v29; // r0
  _DWORD v30[351]; // [sp+4h] [bp-57Ch] BYREF

  if ( sub_86790() )
  {
    sub_7E86C(v30);
    for ( i = (_DWORD *)v30[0]; v30[0]; i = (_DWORD *)v30[0] )
    {
      sub_80DF0(*i);
      v1 = (void **)v30[0];
      v30[0] = 0;
      if ( v1 )
      {
        v2 = *v1;
        if ( *v1 )
        {
          v1[1] = v2;
          operator delete(v2);
        }
        operator delete(v1);
      }
      sub_7E86C(v30);
    }
    sub_7E914(v30);
    v3 = (_DWORD *)v30[0];
    for ( j = (char **)&dword_1A49D8; v30[0]; v3 = (_DWORD *)v30[0] )
    {
      v6 = *(_DWORD **)&byte_4[(_DWORD)j];
      if ( v6 )
      {
        v7 = (int *)j;
        v8 = (int *)(j + 1);
        v9 = *(_DWORD *)(*v3 + 12);
        v10 = v8;
        do
        {
          v11 = v6[4];
          v12 = v6;
          if ( v11 < v9 )
            v12 = v6 + 1;
          v13 = (_DWORD *)*v12;
          if ( v11 >= v9 )
            v10 = v6;
          v6 = v13;
        }
        while ( v13 );
        if ( v10 != v8 && v9 >= v10[4] )
        {
          sub_84C08(v10[5], *v3, 0);
          v3 = (_DWORD *)v30[0];
        }
        j = (char **)v7;
        v30[0] = 0;
        if ( !v3 )
          goto LABEL_15;
      }
      else
      {
        v30[0] = 0;
      }
      v5 = (void *)*v3;
      if ( *v3 )
      {
        v3[1] = v5;
        operator delete(v5);
      }
      operator delete(v3);
LABEL_15:
      sub_7E914(v30);
    }
    v14 = *j;
    if ( *j != &byte_4[(_DWORD)j] )
    {
      v15 = (char *)(j + 1);
      do
      {
        (*(void (__fastcall **)(_DWORD))(**((_DWORD **)v14 + 5) + 8))(*((_DWORD *)v14 + 5));
        v16 = (char *)*((_DWORD *)v14 + 1);
        if ( v16 )
        {
          do
          {
            v14 = v16;
            v16 = *(char **)v16;
          }
          while ( v16 );
        }
        else
        {
          v17 = (int)(v14 + 8);
          v21 = **((_DWORD **)v14 + 2) == (_DWORD)v14;
          v14 = (char *)*((_DWORD *)v14 + 2);
          if ( !v21 )
          {
            do
            {
              v18 = *(_DWORD *)v17;
              v19 = *(char **)(*(_DWORD *)v17 + 8);
              v17 = *(_DWORD *)v17 + 8;
              v14 = v19;
            }
            while ( *(_DWORD *)v19 != v18 );
          }
        }
      }
      while ( v14 != v15 );
    }
    v20 = sub_80290();
    sub_832B0(v20);
    v21 = dword_1A442C == 0;
    if ( dword_1A442C )
      v21 = *(_DWORD *)(dword_1A442C + 128) == 0;
    if ( !v21 )
    {
      if ( sub_7E420() && sub_7EFDC() == 3 && dword_116E04 != -1 && !byte_1A49E4 )
      {
        if ( *(_BYTE *)(*(_DWORD *)(dword_1A442C + 128) + 1) && !byte_1A49E5 )
        {
          v23 = sub_8265C();
          v25 = v23 == 0;
          if ( v23 )
          {
            v24 = dword_116E04;
            v25 = dword_116E04 == -1;
          }
          if ( !v25 )
          {
            sub_80664("[sv:dbg:plugin] : activation key(%hhu) pressed", v24);
            if ( !byte_1A49E6 )
            {
              byte_1A49E5 = 1;
              sub_8345C();
            }
            LOBYTE(v30[0]) = dword_116E04;
            if ( !sub_7E6E0(17, (int)v30, 1) )
              sub_80664("[sv:err:main:HookWndProc] : failed to send PressKey packet");
          }
        }
        if ( !*(_BYTE *)(*(_DWORD *)(dword_1A442C + 128) + 1) && byte_1A49E5 )
        {
          v26 = sub_8265C();
          v28 = v26 == 0;
          if ( v26 )
          {
            v27 = dword_116E04;
            v28 = dword_116E04 == -1;
          }
          if ( !v28 )
          {
            sub_80664("[sv:dbg:plugin] : activation key(%hhu) released", v27);
            if ( !byte_1A49E6 )
              byte_1A49E5 = 0;
            LOBYTE(v30[0]) = dword_116E04;
            if ( !sub_7E6E0(18, (int)v30, 1) )
              sub_80664("[sv:err:main:HookWndProc] : failed to send ReleaseKey packet");
          }
        }
      }
      v29 = sub_83340(v30, 1376);
      if ( v29 )
      {
        if ( !sub_7E7BC(v30, (unsigned __int16)v29) )
          sub_80664("[sv:err:plugin] : failed to send voice packet");
        if ( !byte_1A49E5 )
        {
          sub_83224();
          sub_7E84C();
        }
      }
    }
  }
  return v30[344];
}


// ======================================================================
// ADDR: 0x83b40
// SYMBOL: sub_83B40
int sub_83B40()
{
  int v0; // r9
  bool v1; // zf
  bool v2; // zf
  int v4; // r4
  __int64 v5; // d14
  __int64 v6; // d15
  unsigned __int16 *v7; // r6
  int v8; // r8
  int *v9; // r1
  float v10; // s18
  float v11; // s20
  float v12; // s22
  int **v13; // r0
  bool v14; // zf
  int v15; // r10
  bool v16; // zf
  const char *v17; // r3
  _DWORD *v18; // r5
  _DWORD *v19; // t1
  _DWORD *v20; // r0
  bool v21; // zf
  int v22; // r0
  float v23; // s0
  float *v24; // r1
  float v25; // r2
  float v26; // r3
  float *v27; // r1
  float v28; // s0
  float v29; // s2
  float v30; // s4
  float *v31; // r0
  float v32; // s25
  int v33; // r0
  int v34; // r1
  int v35; // r1
  int v36; // r11
  size_t v37; // r0
  size_t v38; // r5
  char *v39; // r6
  unsigned int v40; // r10
  int v41; // r11
  _DWORD *v42; // r4
  unsigned __int8 *v43; // r0
  const char *v44; // r3
  int v45; // r1
  int v46; // r10
  unsigned int v47; // r0
  size_t v48; // r0
  size_t v49; // r5
  char *v50; // r6
  unsigned int v51; // r4
  int *v52; // [sp+1Ch] [bp-12Ch]
  int v53; // [sp+24h] [bp-124h]
  const char *v54; // [sp+28h] [bp-120h]
  __int64 v55; // [sp+2Ch] [bp-11Ch] BYREF
  unsigned int v56; // [sp+34h] [bp-114h] BYREF
  size_t v57; // [sp+38h] [bp-110h]
  void *v58; // [sp+3Ch] [bp-10Ch]
  __int64 v59; // [sp+40h] [bp-108h] BYREF
  __int64 v60; // [sp+48h] [bp-100h]
  __int64 v61; // [sp+50h] [bp-F8h] BYREF
  float v62; // [sp+58h] [bp-F0h] BYREF
  float v63; // [sp+5Ch] [bp-ECh]
  char v64[64]; // [sp+60h] [bp-E8h] BYREF
  char src[68]; // [sp+A0h] [bp-A8h] BYREF
  int v66; // [sp+E4h] [bp-64h]

  v1 = byte_1A6FA7 == 0;
  if ( byte_1A6FA7 )
    v1 = byte_1A6FAC == 0;
  if ( !v1 )
  {
    v2 = dword_1A4434 == 0;
    if ( dword_1A4434 )
    {
      v0 = **(_DWORD **)(dword_1A4434 + 944);
      v2 = v0 == 0;
    }
    if ( !v2 && dword_1A4510 )
    {
      v4 = 6716708;
      *(float *)&v5 = 1.0;
      *((float *)&v5 + 1) = 1.0;
      *(float *)&v6 = 1.0;
      *((float *)&v6 + 1) = 1.0;
      v7 = (unsigned __int16 *)(v0 + 5024);
      v8 = 0;
      v9 = &dword_116D58;
      v10 = *(float *)&dword_116D58 + 1.0;
      v11 = (float)(*(float *)(dword_1A442C + 88) * 24.0) * 0.00052083;
      v53 = 0;
      v12 = (float)(*(float *)(dword_1A442C + 92) * 560.0) * 0.00092593;
      while ( 1 )
      {
        if ( !*(_BYTE *)(v0 + v8 + 4020) )
          goto LABEL_12;
        v13 = *(int ***)(v0 + 4 * v8 + 4);
        v14 = v13 == 0;
        if ( v13 )
        {
          v9 = *v13;
          v14 = *v13 == 0;
        }
        if ( v14 )
          goto LABEL_12;
        v15 = v9[74];
        v16 = v15 == 0;
        if ( v15 )
        {
          v9 = (int *)*((unsigned __int8 *)v9 + 25);
          v16 = v9 == 0;
        }
        if ( v16 )
          goto LABEL_12;
        v9 = (int *)((char *)&unk_1A6FB0 + 20 * v8);
        v17 = (const char *)(v13 + 1);
        if ( v8 == *v7 )
          v17 = (const char *)(v7 + 1);
        v54 = v17;
        if ( !v9[3] )
          goto LABEL_12;
        v19 = (_DWORD *)v9[2];
        v9 += 2;
        v18 = v19;
        v52 = v9;
        while ( v18 )
        {
          if ( sub_860AE(v18 + 3) == 4 )
          {
            v20 = *(_DWORD **)(v15 + 4);
            if ( v20 )
            {
              v9 = (int *)dword_1A4404;
              v21 = *v20 == dword_1A4404 + v4;
              if ( *v20 != dword_1A4404 + v4 )
                v21 = v20[46] == 0;
              if ( !v21 )
              {
                v22 = *(_DWORD *)(v15 + 92);
                LODWORD(v60) = 0;
                v59 = 0LL;
                if ( v22 )
                  ((void (__fastcall *)(int, __int64 *, int, _DWORD))(dword_1A4404 + 4868765))(v22, &v59, 8, 0);
                if ( ((float (__fastcall *)(int))(dword_1A4408 + 1019421))(v15) < 40.0 )
                {
                  v23 = 100000.0;
                  v24 = *(float **)(v15 + 4);
                  if ( v24 )
                  {
                    v23 = 100000.0;
                    v25 = *v24;
                    LODWORD(v26) = dword_1A4404 + v4;
                    if ( *(_DWORD *)v24 != dword_1A4404 + v4 )
                    {
                      v27 = (float *)*((_DWORD *)v24 + 5);
                      v28 = 0.0;
                      v29 = 0.0;
                      if ( v27 )
                      {
                        v25 = v27[12];
                        v26 = v27[13];
                        v28 = v27[14];
                      }
                      v30 = 0.0;
                      if ( v27 )
                      {
                        v30 = v26;
                        v29 = v25;
                      }
                      v31 = (float *)(dword_1A4404 + 9775316);
                      v23 = sqrtf(
                              (float)((float)((float)(v30 - v31[1]) * (float)(v30 - v31[1]))
                                    + (float)((float)(v29 - *v31) * (float)(v29 - *v31)))
                            + (float)((float)(v28 - v31[2]) * (float)(v28 - v31[2])));
                    }
                  }
                  sub_84058(&v59, LODWORD(v23));
                }
              }
            }
          }
          v18 = (_DWORD *)*v18;
        }
        if ( v53 < 4 && *v54 )
          break;
        v7 = (unsigned __int16 *)(v0 + 5024);
LABEL_12:
        if ( ++v8 == 1004 )
          return v66;
      }
      v63 = v12;
      v62 = v11;
      v32 = *(float *)&dword_116D58 * 0.5;
      v33 = sub_8C550();
      v34 = *(_DWORD *)dword_1A6FA8;
      v56 = 0;
      v57 = 0;
      v61 = 0x3F8000003F800000LL;
      *((float *)&v59 + 1) = v32 + v63;
      *(float *)&v59 = v32 + v62;
      sub_9DF08(v33, v34, &v62, &v59, &v56, &v61, -1);
      sub_84164(src, v35, "%s (%d)", v54, v8);
      *((float *)&v61 + 1) = v63;
      v59 = v5;
      v60 = v6;
      v36 = *(_DWORD *)(dword_1A442C + 112);
      *(float *)&v61 = (float)(v32 + v62) + 4.0;
      v37 = strlen(src);
      if ( v37 >= 0xFFFFFFF0 )
        goto LABEL_67;
      v38 = v37;
      if ( v37 >= 0xB )
      {
        v40 = (v37 + 16) & 0xFFFFFFF0;
        v39 = (char *)operator new(v40);
        v57 = v38;
        v58 = v39;
        v56 = v40 + 1;
      }
      else
      {
        v39 = (char *)&v56 + 1;
        LOBYTE(v56) = 2 * v37;
        if ( !v37 )
        {
LABEL_50:
          v39[v38] = 0;
          sub_7178C(v36, &v61, &v59, (unsigned __int8 *)&v56, 0, *(float *)&dword_116D58 * 0.5, 0);
          v41 = v4;
          if ( (unsigned __int8)v56 << 31 )
            operator delete(v58);
          sub_899BC((int)&v59, (int)src, 0, 0, -1.0);
          v9 = v52;
          HIDWORD(v55) = HIDWORD(v61);
          v42 = (_DWORD *)*v52;
          *(float *)&v55 = (float)(*(float *)&v59 + *(float *)&v61) + 1.0;
          if ( !v42 )
            goto LABEL_66;
          while ( !sub_860B2(v42 + 3) )
          {
            v42 = (_DWORD *)*v42;
            if ( !v42 )
              goto LABEL_66;
          }
          v43 = (unsigned __int8 *)sub_860B6(v42 + 3);
          v44 = (const char *)*((_DWORD *)v43 + 2);
          v45 = *v43 << 31;
          if ( !v45 )
            v44 = (const char *)(v43 + 1);
          sub_84164(v64, v45, "[%s]", v44);
          v46 = *(_DWORD *)(dword_1A442C + 112);
          v47 = sub_860B2(v42 + 3);
          *((float *)&v60 + 1) = (float)HIBYTE(v47) * 0.0039216;
          *(float *)&v60 = (float)BYTE2(v47) * 0.0039216;
          *((float *)&v59 + 1) = (float)BYTE1(v47) * 0.0039216;
          *(float *)&v59 = (float)(unsigned __int8)v47 * 0.0039216;
          v48 = strlen(v64);
          if ( v48 >= 0xFFFFFFF0 )
LABEL_67:
            std::__basic_string_common<true>::__throw_length_error(&v56);
          v49 = v48;
          if ( v48 >= 0xB )
          {
            v51 = (v48 + 16) & 0xFFFFFFF0;
            v50 = (char *)operator new(v51);
            v57 = v49;
            v58 = v50;
            v56 = v51 + 1;
          }
          else
          {
            v50 = (char *)&v56 + 1;
            LOBYTE(v56) = 2 * v48;
            if ( !v48 )
            {
LABEL_64:
              v50[v49] = 0;
              sub_7178C(v46, &v55, &v59, (unsigned __int8 *)&v56, 0, *(float *)&dword_116D58 * 0.5, 0);
              if ( (unsigned __int8)v56 << 31 )
                operator delete(v58);
LABEL_66:
              v12 = v10 + v12;
              v7 = (unsigned __int16 *)(v0 + 5024);
              v4 = v41;
              ++v53;
              goto LABEL_12;
            }
          }
          j_memcpy(v50, v64, v49);
          goto LABEL_64;
        }
      }
      j_memcpy(v39, src, v38);
      goto LABEL_50;
    }
  }
  return v66;
}


// ======================================================================
// ADDR: 0x86aa8
// SYMBOL: sub_86AA8
int sub_86AA8()
{
  unsigned __int64 v0; // r0
  _DWORD v2[6]; // [sp+0h] [bp-18h] BYREF

  std::chrono::system_clock::now((std::chrono::system_clock *)v2);
  LODWORD(v0) = sub_1092F4(v2[0], v2[1], 1000, 0);
  do
    __ldrexd(&qword_1ABEA8);
  while ( __strexd(v0, &qword_1ABEA8) );
  return v2[3];
}


// ======================================================================
