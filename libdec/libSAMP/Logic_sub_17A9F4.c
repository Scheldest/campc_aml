// ADDR: 0x165bf0
// SYMBOL: sub_165BF0
size_t __fastcall sub_165BF0(int a1, int a2, char *s, unsigned int a4, int a5)
{
  unsigned int v5; // r5
  size_t result; // r0
  char *v8; // r1
  _BYTE *v9; // r11
  __int64 v10; // kr00_8
  int v11; // r6
  float v12; // s0
  __int64 v13; // d17
  int v14; // r0
  _DWORD v15[2]; // [sp+18h] [bp-38h] BYREF
  __int64 v16; // [sp+20h] [bp-30h] BYREF
  int v17; // [sp+28h] [bp-28h]
  float v18; // [sp+2Ch] [bp-24h]

  v5 = a4;
  v15[0] = a1;
  result = 6572;
  v15[1] = a2;
  if ( a5 )
  {
    if ( !a4 )
      v5 = -1;
    if ( v5 > (unsigned int)s )
    {
      result = v5 - (_DWORD)s;
      v8 = s;
      while ( 1 )
      {
        if ( *v8 == 35 )
        {
          if ( v8[1] == 35 )
          {
LABEL_14:
            v5 = (unsigned int)v8;
            goto LABEL_15;
          }
        }
        else if ( !*v8 )
        {
          goto LABEL_14;
        }
        --result;
        ++v8;
        if ( !result )
          goto LABEL_15;
      }
    }
  }
  else
  {
    if ( !a4 )
    {
      result = strlen(s);
      v5 = (unsigned int)&s[result];
    }
LABEL_15:
    if ( (char *)v5 != s )
    {
      v9 = (_BYTE *)(dword_381B58 + 11552);
      v10 = *(_QWORD *)(dword_381B58 + 6340);
      v11 = *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 636);
      v12 = *(float *)(dword_381B58 + 5400);
      v13 = *(_QWORD *)(dword_381B58 + 5580);
      v16 = *(_QWORD *)(dword_381B58 + 5572);
      v17 = v13;
      v18 = v12 * *((float *)&v13 + 1);
      v14 = sub_165778((float *)&v16);
      sub_1745E0(v11, v10, SHIDWORD(v10), (int)v15, v14, (int)s, v5, 0.0, 0);
      result = (unsigned __int8)*v9;
      if ( *v9 )
        return sub_165CCC((int)v15, s);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x165e10
// SYMBOL: sub_165E10
size_t __fastcall sub_165E10(int a1, int a2, char *s, char *a4, float a5)
{
  char *v5; // r5
  size_t result; // r0
  int v8; // r11
  _BYTE *v9; // r4
  __int64 v10; // kr00_8
  float v11; // s0
  __int64 v12; // d17
  int v13; // r6
  int v14; // r0
  _DWORD v15[2]; // [sp+18h] [bp-40h] BYREF
  __int64 v16; // [sp+20h] [bp-38h] BYREF
  __int64 v17; // [sp+28h] [bp-30h]

  v5 = a4;
  v15[0] = a1;
  result = 6572;
  v15[1] = a2;
  v8 = *(_DWORD *)(dword_381B58 + 6572);
  if ( !a4 )
  {
    result = strlen(s);
    v5 = &s[result];
  }
  if ( v5 != s )
  {
    v9 = (_BYTE *)(dword_381B58 + 11552);
    v10 = *(_QWORD *)(dword_381B58 + 6340);
    v11 = *(float *)(dword_381B58 + 5400);
    v12 = *(_QWORD *)(dword_381B58 + 5580);
    v16 = *(_QWORD *)(dword_381B58 + 5572);
    v17 = v12;
    v13 = *(_DWORD *)(v8 + 636);
    *((float *)&v17 + 1) = v11 * *((float *)&v12 + 1);
    v14 = sub_165778((float *)&v16);
    sub_1745E0(v13, v10, SHIDWORD(v10), (int)v15, v14, (int)s, (int)v5, a5, 0);
    result = (unsigned __int8)*v9;
    if ( *v9 )
      return (size_t)sub_165CCC((int)v15, s, (int)v5);
  }
  return result;
}


// ======================================================================
// ADDR: 0x167054
// SYMBOL: sub_167054
int __fastcall sub_167054(__int64 a1)
{
  int v1; // r2
  float v2; // s6
  float v3; // s0
  float *v4; // r1
  float v5; // s2
  float v6; // s1
  float v7; // s4
  float v8; // s14
  float v9; // s8
  float v10; // s10
  float v11; // s1
  float v12; // s6

  v1 = *(_DWORD *)(dword_381B58 + 6572);
  if ( !*(_BYTE *)(v1 + 127) )
  {
    v2 = *(float *)(a1 + 4);
    v3 = *((float *)&a1 + 1);
    v4 = (float *)(dword_381B58 + 5472);
    if ( *(float *)(v1 + 236) >= v2 )
      v2 = *(float *)(v1 + 236);
    v5 = *(float *)(v1 + 204);
    v6 = *(float *)(dword_381B58 + 5476);
    v7 = *(float *)(v1 + 200) + *(float *)a1;
    v8 = (float)(int)(float)((float)(v2 + v5) + v6);
    v9 = (float)(int)(float)((float)(*(float *)(v1 + 12) + *(float *)(v1 + 436)) + *(float *)(v1 + 444));
    v10 = v8 - v6;
    v11 = v7;
    if ( *(float *)(v1 + 224) >= v7 )
      v11 = *(float *)(v1 + 224);
    if ( *(float *)(v1 + 248) >= v3 )
      v3 = *(float *)(v1 + 248);
    if ( *(float *)(v1 + 228) >= v10 )
      v10 = *(float *)(v1 + 228);
    *(_DWORD *)(v1 + 248) = 0;
    *(_DWORD *)(v1 + 236) = 0;
    LODWORD(a1) = *(_DWORD *)(v1 + 348);
    *(float *)(v1 + 200) = v9;
    *(float *)(v1 + 204) = v8;
    *(float *)(v1 + 208) = v7;
    *(float *)(v1 + 212) = v5;
    *(float *)(v1 + 244) = v2;
    *(float *)(v1 + 252) = v3;
    *(float *)(v1 + 224) = v11;
    *(float *)(v1 + 228) = v10;
    if ( !(_DWORD)a1 )
    {
      v12 = *v4;
      a1 = *(_QWORD *)(v1 + 240);
      *(_BYTE *)(v1 + 124) = 1;
      *(float *)(v1 + 248) = v3;
      *(_QWORD *)(v1 + 232) = a1;
      *(float *)(v1 + 204) = v5;
      *(float *)(v1 + 200) = v7 + v12;
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x167164
// SYMBOL: sub_167164
int __fastcall sub_167164(_QWORD *a1, int a2, _QWORD *a3)
{
  int v5; // r11
  int v6; // r4
  int v7; // r6
  int v8; // r1
  _QWORD *v9; // r9
  int v10; // r0
  __int64 v11; // d17
  int v12; // r5
  float v14; // s0
  float v15; // s2
  float v16; // s22
  float v17; // s20
  float v18; // s18
  float v19; // s16
  int v20; // r12
  char v21; // r2
  int *v22; // r3
  int v23; // r8
  int v24; // r0
  int v25; // r0
  int v26; // s0
  float v27; // s10
  float v28; // s2
  float v29; // s8
  int v30; // s4
  int v31; // s6
  float v32; // s12
  float v33; // s14
  int *v34; // r9
  int v35; // r0
  __int64 v36; // r0

  v5 = dword_381B58;
  v6 = dword_381B58 + 6572;
  v7 = *(_DWORD *)(dword_381B58 + 6572);
  if ( !a2 )
    goto LABEL_5;
  v8 = *(_DWORD *)(dword_381B58 + 6840);
  v9 = a3;
  *(_DWORD *)(v7 + 316) |= *(_DWORD *)(v7 + 308);
  if ( v8 != a2 && !*(_BYTE *)(v6 + 364) )
    goto LABEL_5;
  v10 = *(_DWORD *)(v6 + 264);
  if ( *(_DWORD *)(v10 + 772) != *(_DWORD *)(v7 + 772)
    || v7 != v10 && ((*(_DWORD *)(v7 + 8) | *(_DWORD *)(v10 + 8)) & 0x800000) == 0 )
  {
    goto LABEL_5;
  }
  v14 = *(float *)(v7 + 12);
  v15 = *(float *)(v7 + 16);
  if ( !a3 )
    v9 = a1;
  v16 = *(float *)v9 - v14;
  v17 = *((float *)v9 + 1) - v15;
  v18 = *((float *)v9 + 2) - v14;
  v19 = *((float *)v9 + 3) - v15;
  v20 = *(_DWORD *)(v7 + 364);
  if ( *(_BYTE *)(v6 + 365) && *(_DWORD *)(v6 + 352) == *(_DWORD *)(v7 + 304) )
  {
    if ( (v20 & 0x10) != 0 )
    {
      if ( !*(_DWORD *)(v6 + 368) )
      {
        *(float *)(v6 + 372) = v16;
        *(float *)(v6 + 376) = v17;
        *(float *)(v6 + 380) = v18;
        *(float *)(v6 + 384) = v19;
        *(_DWORD *)(v6 + 368) = a2;
      }
    }
    else
    {
      v21 = *(_BYTE *)(v6 + 389);
      *(float *)(v6 + 372) = v16;
      *(float *)(v6 + 376) = v17;
      *(float *)(v6 + 380) = v18;
      *(float *)(v6 + 384) = v19;
      *(_DWORD *)(v6 + 368) = a2;
      *(_BYTE *)(v6 + 365) = 0;
      *(_BYTE *)(v6 + 364) = v21;
    }
  }
  if ( v8 != a2 )
  {
    if ( (v20 & 0xC) != 0 )
      goto LABEL_45;
LABEL_24:
    v22 = (int *)(v5 + 11488);
    v23 = v5 + 7064;
    if ( v7 == v10 )
      v23 = v5 + 6984;
    if ( *(_BYTE *)(v6 + 389) )
    {
      v24 = sub_171B60(v23, *(_DWORD *)v9, *((_DWORD *)v9 + 1), *((_DWORD *)v9 + 2), *((float *)v9 + 3));
      v22 = (int *)(v5 + 11488);
      if ( v24 )
      {
        v25 = *(_DWORD *)(v5 + 11488);
        *(_DWORD *)v23 = a2;
        *(_DWORD *)(v23 + 8) = v7;
        *(float *)(v23 + 24) = v16;
        *(float *)(v23 + 28) = v17;
        *(float *)(v23 + 32) = v18;
        *(float *)(v23 + 36) = v19;
        *(_DWORD *)(v23 + 4) = v25;
      }
    }
    if ( (*(_BYTE *)(v6 + 392) & 0x20) != 0 )
    {
      v26 = *((int *)v9 + 1);
      v27 = *(float *)(v7 + 476);
      if ( *(float *)&v26 < v27 )
      {
        v28 = *((float *)v9 + 3);
        v29 = *(float *)(v7 + 468);
        if ( v28 > v29 )
        {
          v30 = *(_DWORD *)v9;
          if ( *(float *)v9 < *(float *)(v7 + 472) )
          {
            v31 = *((int *)v9 + 2);
            if ( *(float *)&v31 > *(float *)(v7 + 464) )
            {
              v32 = *((float *)v9 + 1);
              if ( *(float *)&v26 > v27 )
                v32 = *(float *)(v7 + 476);
              v33 = *((float *)v9 + 3);
              if ( v28 > v27 )
                v33 = *(float *)(v7 + 476);
              if ( *(float *)&v26 < v29 )
                v32 = *(float *)(v7 + 468);
              if ( v28 < v29 )
                v33 = *(float *)(v7 + 468);
              if ( (float)(v33 - v32) >= (float)((float)(v28 - *(float *)&v26) * 0.7) )
              {
                v34 = v22;
                if ( sub_171B60(v5 + 7024, v30, v26, v31, v28) )
                {
                  v35 = *v34;
                  *(float *)(v5 + 7048) = v16;
                  *(float *)(v5 + 7052) = v17;
                  *(float *)(v5 + 7056) = v18;
                  *(float *)(v5 + 7060) = v19;
                  *(_DWORD *)(v5 + 7024) = a2;
                  *(_DWORD *)(v5 + 7028) = v35;
                  *(_DWORD *)(v5 + 7032) = v7;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_45;
  }
  if ( (*(_BYTE *)(v6 + 392) & 0x10) != 0 && (v20 & 0xC) == 0 )
    goto LABEL_24;
LABEL_45:
  if ( *(_DWORD *)(v6 + 268) == a2 )
  {
    LODWORD(v36) = *(_DWORD *)(v7 + 304);
    HIDWORD(v36) = *(_DWORD *)(v7 + 360);
    *(_DWORD *)(v6 + 264) = v7;
    *(_BYTE *)(v6 + 360) = 1;
    *(_QWORD *)(v6 + 352) = v36;
    LODWORD(v36) = v7 + 16 * v36;
    *(float *)(v36 + 788) = v16;
    *(float *)(v36 + 792) = v17;
    *(float *)(v36 + 796) = v18;
    *(float *)(v36 + 800) = v19;
  }
LABEL_5:
  *(_DWORD *)(v7 + 264) = a2;
  v11 = a1[1];
  *(_QWORD *)(v7 + 272) = *a1;
  *(_QWORD *)(v7 + 280) = v11;
  *(_DWORD *)(v7 + 268) = 0;
  *(_DWORD *)(v6 + 188) = 0;
  v12 = sub_167448(a1, a2, 0);
  if ( !v12 && sub_1674C8(a1, a1 + 1, 1) )
    *(_DWORD *)(v7 + 268) |= 1u;
  return v12 ^ 1;
}


// ======================================================================
// ADDR: 0x167718
// SYMBOL: sub_167718
int __fastcall sub_167718(float *a1, float a2)
{
  float v2; // s0
  float v3; // s2
  float v5; // s0
  float v7[4]; // [sp+0h] [bp-10h] BYREF

  v2 = a2;
  if ( a2 >= 0.0 )
  {
    if ( a2 == 0.0 )
    {
      sub_16779C(v7);
      v2 = v7[0];
    }
    else if ( a2 > 0.0 )
    {
      v2 = (float)(*(float *)(*(_DWORD *)(dword_381B58 + 6572) + 12) - *(float *)(*(_DWORD *)(dword_381B58 + 6572) + 88))
         + a2;
    }
    v3 = 1.0;
    v5 = v2 - *a1;
    if ( v5 >= 1.0 )
      v3 = v5;
  }
  else
  {
    v3 = 0.0;
  }
  return LODWORD(v3);
}


// ======================================================================
// ADDR: 0x16ff28
// SYMBOL: sub_16FF28
int sub_16FF28()
{
  return *(_DWORD *)(dword_381B58 + 6344);
}


// ======================================================================
