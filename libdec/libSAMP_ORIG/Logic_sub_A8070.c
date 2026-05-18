// ADDR: 0x97918
// SYMBOL: sub_97918
int sub_97918()
{
  int result; // r0
  int v1; // r12
  int v2; // r2
  bool v3; // zf
  float v4; // s0
  float *v5; // r1
  float v6; // s2
  float v7; // s8
  float v8; // s4
  float v9; // s6
  float v10; // s10
  int v11; // r2
  char v12; // r3
  float v13; // s0
  float v14; // s10
  float v15; // s4
  float v16; // s6

  result = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( *(_BYTE *)(result + 128) )
  {
    v1 = dword_1ACF68 + 5476;
    v2 = *(_DWORD *)(dword_1ACF68 + 6836);
    if ( v2 == *(_DWORD *)(result + 772) )
    {
      v3 = *(_BYTE *)(dword_1ACF68 + 6937) == 0;
      if ( !*(_BYTE *)(dword_1ACF68 + 6937) )
        v3 = *(_DWORD *)(dword_1ACF68 + 6940) == 0;
      if ( !v3 && *(_DWORD *)(dword_1ACF68 + 6924) == *(_DWORD *)(v2 + 304) )
      {
        v4 = *(float *)(v2 + 12);
        v5 = (float *)(dword_1ACF68 + 6944);
        v6 = *(float *)(v2 + 16);
        v7 = *(float *)(v2 + 280) - v4;
        v8 = *(float *)(v2 + 272);
        v9 = *(float *)(v2 + 276);
        v10 = *(float *)(v2 + 284) - v6;
        v11 = *(_DWORD *)(v2 + 264);
        v12 = *(_BYTE *)(dword_1ACF68 + 6961);
        *(_BYTE *)(dword_1ACF68 + 6937) = 0;
        *(_DWORD *)(v1 + 1464) = v11;
        v5[2] = v7;
        *(_BYTE *)(v1 + 1460) = v12;
        v5[3] = v10;
        *v5 = v8 - v4;
        v5[1] = v9 - v6;
        if ( *(float *)(result + 276) >= *(float *)(result + 540)
          || *(float *)(result + 284) <= *(float *)(result + 532)
          || *(float *)(result + 272) >= *(float *)(result + 536)
          || *(float *)(result + 280) <= *(float *)(result + 528) )
        {
          v13 = *(float *)v1 * 0.0;
          v14 = *(float *)(result + 244);
          v15 = *(float *)(result + 212) - *(float *)(result + 16);
          v16 = *(float *)(result + 84);
          *(_BYTE *)(result + 124) = 1;
          *(_DWORD *)(result + 108) = 1056964608;
          *(float *)(result + 100) = (float)(int)(float)(v16
                                                       + (float)(v15 + (float)((float)(v13 + v13) + (float)(v14 * 0.5))));
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xa77e0
// SYMBOL: sub_A77E0
int __fastcall sub_A77E0(char *a1, char *a2, int a3)
{
  int v5; // r11
  int v6; // r9
  int v7; // r6
  int v8; // r4
  float v9; // s18
  float v10; // r0
  float v11; // s16
  float v12; // s0
  float v13; // s8
  unsigned __int64 v14; // kr00_8
  float v15; // s4
  float v16; // s6
  float v17; // s8
  __int64 v18; // r0
  _BOOL4 v19; // r5
  int v20; // r0
  float v21; // s22
  float v22; // s20
  float v23; // s20
  int v24; // r1
  int v25; // r0
  int v26; // r0
  int v27; // r1
  int v28; // r0
  int v29; // r10
  float v30; // s0
  float v31; // s2
  float *v32; // r4
  unsigned int v33; // r0
  float v34; // s0
  float v35; // s0
  char *v36; // r4
  int v37; // r0
  bool v38; // zf
  int v39; // r1
  unsigned int v41; // [sp+Ch] [bp-D4h]
  unsigned int v42; // [sp+10h] [bp-D0h]
  int v43; // [sp+10h] [bp-D0h]
  int v44; // [sp+14h] [bp-CCh]
  int v45; // [sp+18h] [bp-C8h]
  int v46; // [sp+20h] [bp-C0h]
  int v48; // [sp+28h] [bp-B8h]
  int v49; // [sp+2Ch] [bp-B4h]
  float *v50; // [sp+30h] [bp-B0h]
  unsigned __int64 v51; // [sp+34h] [bp-ACh] BYREF
  __int64 v52; // [sp+3Ch] [bp-A4h] BYREF
  __int64 v53[2]; // [sp+44h] [bp-9Ch] BYREF
  float v54[2]; // [sp+54h] [bp-8Ch] BYREF
  char v55; // [sp+5Eh] [bp-82h] BYREF
  unsigned __int8 v56; // [sp+5Fh] [bp-81h] BYREF
  unsigned __int64 v57; // [sp+60h] [bp-80h] BYREF
  float v58; // [sp+68h] [bp-78h]
  float v59; // [sp+6Ch] [bp-74h]
  unsigned __int64 v60; // [sp+70h] [bp-70h] BYREF
  float v61; // [sp+78h] [bp-68h] BYREF
  float v62; // [sp+7Ch] [bp-64h]
  float v63[2]; // [sp+84h] [bp-5Ch] BYREF
  char s[16]; // [sp+8Ch] [bp-54h] BYREF

  v5 = dword_1ACF68;
  v6 = *(_DWORD *)(dword_1ACF68 + 6672);
  v7 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_DWORD *)(dword_1ACF68 + 6672) = v6 & 0xFFFFFFEF;
  *(_BYTE *)(v7 + 124) = 1;
  if ( *(_BYTE *)(v7 + 127) )
    return 0;
  v50 = (float *)(v5 + 5456);
  v49 = sub_8AAD4(v7, (unsigned int)a1, 0);
  v9 = 0.0;
  v46 = a3 & 0x20;
  if ( (a3 & 0x20) == 0 )
    v9 = sub_978A8();
  sub_899BC(v63, (unsigned int)a1, 0, 1, -1.0);
  v10 = sub_97224();
  v11 = v9;
  v12 = *(float *)(v5 + 5460);
  v48 = a3 & 0x40;
  if ( (a3 & 0x40) == 0 )
    v11 = v10;
  v13 = *(float *)(v7 + 204);
  v14 = *(_QWORD *)(v7 + 200);
  v60 = v14;
  v15 = v11 + *(float *)(v7 + 200);
  v16 = (float)((float)(v12 + v12) + v63[1]) + v13;
  v17 = 0.0;
  v61 = v15;
  v62 = v16;
  if ( v63[0] > 0.0 )
    v17 = v63[0] + *(float *)(v5 + 5480);
  *((float *)&v18 + 1) = v12;
  v57 = v14;
  LODWORD(v18) = &v57;
  v59 = v16 + 0.0;
  v58 = v17 + v15;
  sub_8B2C0(v18);
  v8 = 0;
  if ( sub_8B314((float *)&v57, v49, (float *)&v60) )
  {
    v45 = a3;
    v44 = sub_A634C((float *)&v60, v49, &v56, &v55, 0);
    v19 = sub_98474(v49);
    v20 = 8;
    if ( !v56 )
      v20 = 7;
    v42 = sub_88C10(v20, 1.0);
    v21 = *(float *)&v60;
    v22 = v61;
    sub_8A1F8(&v60, v49, 1);
    v23 = v22 - v9;
    if ( v21 >= v23 )
      v23 = v21;
    if ( !v48 )
    {
      *(float *)&s[4] = v62;
      v24 = 15;
      *(float *)s = v23;
      if ( !v46 )
        v24 = 5;
      sub_9D624(*(_DWORD *)(v7 + 636), (int)&v60, (float *)s, v42, *(float *)(v5 + 5464), v24);
    }
    if ( !v46 )
    {
      v25 = 21;
      if ( v56 << 31 )
        v25 = 22;
      if ( v19 )
        v25 = 22;
      v41 = sub_88C10(v25, 1.0);
      v26 = sub_88C10(0, 1.0);
      *(_DWORD *)&s[4] = HIDWORD(v60);
      v27 = 10;
      v43 = v26;
      v28 = *(_DWORD *)(v7 + 636);
      *(float *)s = v23;
      if ( v11 <= v9 )
        v27 = 15;
      sub_9D624(v28, (int)s, &v61, v41, *(float *)(v5 + 5464), v27);
      sub_8A0BC(
        *(_DWORD *)(v7 + 636),
        v23 + *(float *)(v5 + 5460),
        *(float *)(v5 + 5460) + *((float *)&v60 + 1),
        v43,
        3,
        1.0);
    }
    sub_89E08(*(float *)&v60, *((float *)&v60 + 1), v61, v62, *(float *)(v5 + 5464));
    v29 = v45;
    if ( a2 && !v48 )
    {
      v30 = *(float *)&v60 + *v50;
      v31 = *((float *)&v60 + 1) + *(float *)(v5 + 5460);
      v53[0] = __PAIR64__(LODWORD(v62), LODWORD(v23));
      v54[0] = 0.0;
      v54[1] = 0.0;
      *(float *)s = v30;
      *(float *)&s[4] = v31;
      sub_89A94(s, (float *)v53, a2, 0, 0, v54, 0);
    }
    v32 = (float *)(v5 + 6724);
    if ( v63[0] > 0.0 )
      sub_89110(
        COERCE_INT(v61 + *(float *)(v5 + 5480)),
        COERCE_INT(*((float *)&v60 + 1) + *(float *)(v5 + 5460)),
        a1,
        0,
        1);
    if ( v44 )
    {
      v33 = v49;
      if ( v19 )
        goto LABEL_40;
    }
    else
    {
      v33 = v49;
      if ( *(_DWORD *)(v5 + 6844) != v49 || v19 )
      {
        if ( !v19 )
          return 0;
LABEL_40:
        if ( (v6 & 0x10) != 0 )
        {
          if ( *v32 >= v11 )
            v11 = *v32;
          *v32 = v11;
          *(_DWORD *)(v5 + 6672) |= 0x10u;
          goto LABEL_55;
        }
        if ( (v45 & 0x1E) == 0 )
          v29 = v45 | 4;
        if ( (v29 & 4) != 0 )
        {
          v35 = 8.0;
        }
        else if ( (v29 & 2) != 0 )
        {
          v35 = 4.0;
        }
        else
        {
          if ( (v29 & 8) == 0 )
          {
            v34 = 3.4028e38;
            *(_DWORD *)&s[4] = 0;
            *(float *)s = v11;
LABEL_54:
            v53[0] = __PAIR64__(LODWORD(v34), 2139095039);
            sub_97734((__int64 *)s, v53, 0, 0);
LABEL_55:
            v36 = s;
            sub_886C0(s, 16, "##Combo_%02d", *(_DWORD *)(v5 + 6824));
            v37 = sub_96288(s);
            v38 = v37 == 0;
            if ( v37 )
            {
              v36 = (char *)v37;
              v38 = *(_BYTE *)(v37 + 123) == 0;
            }
            if ( !v38 )
            {
              sub_96334((int)v54, (int)v36);
              if ( v29 << 31 )
                *((_DWORD *)v36 + 40) = 0;
              sub_99094((float *)v53);
              v51 = __PAIR64__(LODWORD(v62), v60);
              sub_98C8C((float *)&v52, (float *)&v51, v54, (int *)v36 + 40, (float *)v53, (float *)&v60, 1);
              v51 = 0LL;
              sub_976E0(&v52, 0, &v51);
            }
            v39 = *(_DWORD *)(v5 + 5408);
            *(float *)v53 = *v50;
            HIDWORD(v53[0]) = v39;
            sub_96058(1, v53);
            v8 = sub_8FD20(s, 0, (float *)0x4000143);
            sub_9618C(1);
            if ( !v8 )
              sub_989E8();
            return v8;
          }
          v35 = 20.0;
        }
        *(_DWORD *)&s[4] = 0;
        *(float *)s = v11;
        v34 = (float)(*(float *)(dword_1ACF68 + 5408) + *(float *)(dword_1ACF68 + 5408))
            + (float)((float)((float)(*(float *)(dword_1ACF68 + 6344) + *(float *)(dword_1ACF68 + 5476)) * v35)
                    - *(float *)(dword_1ACF68 + 5476));
        goto LABEL_54;
      }
    }
    if ( !*(_DWORD *)(v7 + 304) )
      *(_DWORD *)(v7 + 780) = v33;
    sub_984A4(v33);
    goto LABEL_40;
  }
  return v8;
}


// ======================================================================
