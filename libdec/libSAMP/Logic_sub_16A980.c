// ADDR: 0x1654dc
// SYMBOL: sub_1654DC
char *__fastcall sub_1654DC(char *s, size_t *a2, char *a3)
{
  char *v5; // r6
  size_t v6; // r5
  size_t v7; // r4

  v5 = s;
  if ( a2 )
    v6 = *a2;
  else
    v6 = strlen(s) + 1;
  v7 = strlen(a3) + 1;
  if ( v6 < v7 )
  {
    if ( v5 && dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v5, dword_381B60);
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v5 = (char *)off_2390AC(v7, dword_381B60);
    if ( a2 )
      *a2 = v7;
  }
  j_memcpy(v5, a3, v7);
  return v5;
}


// ======================================================================
// ADDR: 0x1658b8
// SYMBOL: sub_1658B8
int __fastcall sub_1658B8(unsigned int *a1, unsigned int a2)
{
  _DWORD *v2; // lr
  unsigned int v3; // r12
  bool v4; // zf
  _DWORD *v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r2
  unsigned int *v8; // r4
  _DWORD *v9; // r4
  unsigned int v10; // t1

  v2 = (_DWORD *)a1[2];
  v3 = *a1;
  v4 = *a1 == 0;
  v5 = v2;
  if ( !v4 )
  {
    v5 = v2;
    v6 = v3;
    do
    {
      v7 = v6 >> 1;
      v8 = &v5[2 * (v6 >> 1)];
      v10 = *v8;
      v9 = v8 + 2;
      if ( v10 < a2 )
      {
        v7 = v6 + ~(v6 >> 1);
        v5 = v9;
      }
      v6 = v7;
    }
    while ( v7 );
  }
  if ( v5 == &v2[2 * v3] || *v5 != a2 )
    return 0;
  else
    return v5[1];
}


// ======================================================================
// ADDR: 0x1659ec
// SYMBOL: sub_1659EC
int *__fastcall sub_1659EC(int *result, unsigned int a2, unsigned int a3)
{
  _DWORD *v3; // r3
  unsigned int v4; // r4
  unsigned int v5; // r5
  unsigned int *v6; // r6
  _DWORD *v7; // r6
  unsigned int v8; // t1
  unsigned __int64 v9; // [sp+0h] [bp-20h] BYREF

  v3 = (_DWORD *)result[2];
  if ( *result )
  {
    v3 = (_DWORD *)result[2];
    v4 = *result;
    do
    {
      v5 = v4 >> 1;
      v6 = &v3[2 * (v4 >> 1)];
      v8 = *v6;
      v7 = v6 + 2;
      if ( v8 < a2 )
      {
        v5 = v4 + ~(v4 >> 1);
        v3 = v7;
      }
      v4 = v5;
    }
    while ( v5 );
  }
  if ( v3 == (_DWORD *)(result[2] + 8 * *result) || *v3 != a2 )
  {
    v9 = __PAIR64__(a3, a2);
    return (int *)sub_16590C(result, (int)v3, &v9);
  }
  else
  {
    v3[1] = a3;
  }
  return result;
}


// ======================================================================
// ADDR: 0x166154
// SYMBOL: sub_166154
char *__fastcall sub_166154(char *result, float *a2, char *a3, unsigned int a4, __int64 *a5, float *a6, float *a7)
{
  float *v7; // r10
  char *v9; // r6
  int v10; // r5

  if ( !a4 )
    a4 = -1;
  if ( a4 > (unsigned int)a3 )
  {
    v7 = (float *)result;
    result = 0;
    v9 = a3;
    do
    {
      if ( result[(_DWORD)a3] == 35 )
      {
        if ( result[(_DWORD)a3 + 1] == 35 )
          goto LABEL_11;
      }
      else if ( !result[(_DWORD)a3] )
      {
        v9 = &result[(_DWORD)a3];
        goto LABEL_11;
      }
      ++result;
      ++v9;
    }
    while ( (char *)(a4 - (_DWORD)a3) != result );
    v9 = (char *)a4;
LABEL_11:
    if ( v9 != a3 )
    {
      v10 = dword_381B58;
      sub_165EC8(*(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 636), v7, a2, (int)a3, (int)v9, a5, a6, a7);
      result = (char *)*(unsigned __int8 *)(v10 + 11552);
      if ( *(_BYTE *)(v10 + 11552) )
        return sub_165CCC((int)v7, a3, (int)v9);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1661ec
// SYMBOL: sub_1661EC
int __fastcall sub_1661EC(float a1, float a2, float a3, float a4, int a5, int a6, float a7)
{
  int v7; // r4
  int v8; // r5
  int result; // r0
  float v10; // s18
  int v11; // r8
  __int64 v12; // d16
  __int64 v13; // d17
  float v14; // s0
  int v15; // r0
  int v16; // r5
  __int64 v17; // d17
  float v18; // s0
  int v19; // r0
  float v20[2]; // [sp+10h] [bp-60h] BYREF
  float v21[2]; // [sp+18h] [bp-58h] BYREF
  float v22; // [sp+20h] [bp-50h] BYREF
  float v23; // [sp+24h] [bp-4Ch]
  float v24; // [sp+28h] [bp-48h] BYREF
  float v25; // [sp+2Ch] [bp-44h]
  __int64 v26; // [sp+30h] [bp-40h] BYREF
  int v27; // [sp+38h] [bp-38h]
  float v28; // [sp+3Ch] [bp-34h]

  v24 = a1;
  v25 = a2;
  v22 = a3;
  v23 = a4;
  v7 = dword_381B58;
  v8 = *(_DWORD *)(dword_381B58 + 6572);
  sub_174194(*(_DWORD *)(v8 + 636), (int)&v24, (int)&v22, a5, a7, 15);
  result = a6;
  if ( a6 )
  {
    result = v7 + 5468;
    v10 = *(float *)(v7 + 5468);
    if ( v10 > 0.0 )
    {
      v11 = *(_DWORD *)(v8 + 636);
      v12 = *(_QWORD *)(dword_381B58 + 5668);
      v13 = *(_QWORD *)(dword_381B58 + 5676);
      v21[1] = v25 + 1.0;
      v21[0] = v24 + 1.0;
      v20[1] = v23 + 1.0;
      v20[0] = v22 + 1.0;
      v14 = *(float *)(dword_381B58 + 5400);
      v26 = v12;
      v27 = v13;
      v28 = v14 * *((float *)&v13 + 1);
      v15 = sub_165778((float *)&v26);
      sub_1740F8(v11, v21, v20, v15, LODWORD(a7), 15, LODWORD(v10));
      v16 = *(_DWORD *)(v8 + 636);
      v17 = *(_QWORD *)(dword_381B58 + 5660);
      v18 = *(float *)(dword_381B58 + 5400);
      v26 = *(_QWORD *)(dword_381B58 + 5652);
      v27 = v17;
      v28 = v18 * *((float *)&v17 + 1);
      v19 = sub_165778((float *)&v26);
      return sub_1740F8(v16, &v24, &v22, v19, LODWORD(a7), 15, LODWORD(v10));
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1666c8
// SYMBOL: sub_1666C8
void **__fastcall sub_1666C8(void **a1, int a2, char *a3)
{
  _QWORD *v4; // r5
  _QWORD *v7; // r11
  int *v8; // r0
  int v9; // r0
  int v10; // r1
  void *v11; // r2
  int v12; // r9
  int v13; // r0
  void *v14; // r0
  const void *v15; // r1
  void *v16; // r0
  char *v17; // r1
  _QWORD *v18; // r11
  void *v19; // r0
  __int64 v20; // d17
  void **result; // r0
  void *v22; // [sp+0h] [bp-50h]

  a1[16] = 0;
  v4 = a1 + 22;
  *(_QWORD *)(a1 + 3) = 0LL;
  *(_QWORD *)(a1 + 5) = 0LL;
  *(_QWORD *)(a1 + 7) = 0LL;
  *(_QWORD *)(a1 + 9) = 0LL;
  v7 = a1 + 11;
  v8 = (int *)(a1 + 11);
  *v4 = 0LL;
  v4[1] = 0LL;
  v4 += 2;
  *(_QWORD *)v8 = 0LL;
  *((_QWORD *)v8 + 1) = 0LL;
  v8[4] = 0;
  *v4 = 0LL;
  v4[1] = 0LL;
  v4 += 10;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_166998(v4 + 2);
  *((_QWORD *)a1 + 58) = 0x7F7FFFFF7F7FFFFFLL;
  *((_QWORD *)a1 + 59) = 0xFF7FFFFFFF7FFFFFLL;
  *((_QWORD *)a1 + 60) = 0x7F7FFFFF7F7FFFFFLL;
  *((_QWORD *)a1 + 61) = 0xFF7FFFFFFF7FFFFFLL;
  *((_QWORD *)a1 + 62) = 0x7F7FFFFF7F7FFFFFLL;
  *((_QWORD *)a1 + 63) = 0xFF7FFFFFFF7FFFFFLL;
  *((_QWORD *)a1 + 64) = 0x7F7FFFFF7F7FFFFFLL;
  *((_QWORD *)a1 + 65) = 0xFF7FFFFFFF7FFFFFLL;
  *((_QWORD *)a1 + 66) = 0x7F7FFFFF7F7FFFFFLL;
  *((_QWORD *)a1 + 67) = 0xFF7FFFFFFF7FFFFFLL;
  *((_QWORD *)a1 + 68) = 0x7F7FFFFF7F7FFFFFLL;
  *((_QWORD *)a1 + 69) = 0xFF7FFFFFFF7FFFFFLL;
  a1[113] = 0;
  a1[114] = 0;
  a1[115] = 0;
  sub_17BDA0();
  *(_QWORD *)(a1 + 151) = 0LL;
  *(_QWORD *)(a1 + 153) = 0LL;
  a1[155] = 0;
  a1[156] = 0;
  sub_166A58(a1 + 160, a2 + 6352);
  *(_QWORD *)(a1 + 197) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 199) = 0xFF7FFFFFFF7FFFFFLL;
  *(_QWORD *)(a1 + 201) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 203) = 0xFF7FFFFFFF7FFFFFLL;
  *a1 = sub_165460(a3);
  v9 = sub_16560C(a3, 0, 0);
  v11 = a1[114];
  v10 = (int)a1[113];
  a1[1] = (void *)v9;
  if ( (void *)v10 == v11 )
  {
    v12 = v10 + 1;
    if ( v10 )
      v13 = v10 + v10 / 2;
    else
      v13 = 8;
    if ( v13 > v12 )
      v12 = v13;
    if ( v10 < v12 )
    {
      if ( dword_381B58 )
        ++*(_DWORD *)(dword_381B58 + 880);
      v14 = (void *)off_2390AC(4 * v12, dword_381B60);
      v15 = a1[115];
      if ( v15 )
      {
        v22 = v14;
        j_memcpy(v14, v15, 4 * (_DWORD)a1[113]);
        v16 = a1[115];
        if ( v16 && dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
        off_2390B0(v16, dword_381B60);
        v14 = v22;
      }
      v10 = (int)a1[113];
      a1[114] = (void *)v12;
      a1[115] = v14;
    }
  }
  *((_DWORD *)a1[115] + v10) = a1[1];
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_QWORD *)(a1 + 5) = 0LL;
  *(_QWORD *)(a1 + 7) = 0LL;
  v17 = (char *)a1[113];
  *v7 = 0LL;
  v7[1] = 0LL;
  v18 = v7 + 2;
  *v18 = 0LL;
  v18[1] = 0LL;
  a1[113] = v17 + 1;
  a1[19] = (void *)(_strlen_chk(a3, 0xFFFFFFFF) + 1);
  a1[20] = (void *)sub_166AD4(a1, "#MOVE", 0);
  *(_QWORD *)(a1 + 25) = 0x3F0000007F7FFFFFLL;
  a1[27] = (void *)1056964608;
  a1[48] = (void *)2139095039;
  a1[49] = (void *)2139095039;
  a1[33] = (void *)-65536;
  *((_BYTE *)a1 + 131) = -1;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_QWORD *)a1 + 15) = 0LL;
  *(void **)((char *)a1 + 127) = 0;
  *(_QWORD *)(a1 + 21) = 0LL;
  *(_QWORD *)(a1 + 23) = 0x7F7FFFFF00000000LL;
  a1[47] = (void *)2139095039;
  v19 = *a1;
  *(_QWORD *)(a1 + 39) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 41) = 0LL;
  a1[171] = v19;
  *(_QWORD *)(a1 + 43) = 0xF0000000FLL;
  *(_QWORD *)(a1 + 45) = 0x7F7FFFFF0000000FLL;
  *((_QWORD *)a1 + 95) = 0LL;
  *((_QWORD *)a1 + 96) = 0LL;
  a1[157] = (void *)1065353216;
  a1[158] = (void *)-1;
  *(_QWORD *)(a1 + 201) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 203) = 0xFF7FFFFFFF7FFFFFLL;
  a1[194] = 0;
  v20 = *(_QWORD *)(a1 + 203);
  *(_QWORD *)(a1 + 197) = *(_QWORD *)(a1 + 201);
  *(_QWORD *)(a1 + 199) = v20;
  result = a1;
  *((_WORD *)a1 + 68) = -1;
  *((_BYTE *)a1 + 152) = 0;
  a1[35] = 0;
  a1[36] = (void *)-1;
  a1[37] = (void *)-1;
  a1[159] = a1 + 160;
  a1[140] = (void *)-1;
  a1[141] = 0;
  a1[195] = 0;
  a1[196] = 0;
  return result;
}


// ======================================================================
// ADDR: 0x166e14
// SYMBOL: sub_166E14
int __fastcall sub_166E14(int a1, char a2)
{
  int v2; // r12
  unsigned int v3; // r0
  unsigned __int8 v4; // r3
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r3
  int result; // r0
  int v9; // r1

  v3 = ~*(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * *(_DWORD *)(a1 + 452) - 4);
  v4 = v3 ^ a2;
  v5 = 1;
  v6 = dword_BAF58[v4] ^ (v3 >> 8);
  do
  {
    v7 = *(unsigned __int8 *)(v2 + v5++);
    v6 = dword_BAF58[(unsigned __int8)v6 ^ v7] ^ (v6 >> 8);
  }
  while ( v5 != 4 );
  result = ~v6;
  v9 = dword_381B58 + 6608;
  if ( *(_DWORD *)(dword_381B58 + 6608) == result )
    *(_DWORD *)(dword_381B58 + 6612) = result;
  if ( *(_DWORD *)(v9 + 44) == result )
    *(_BYTE *)(v9 + 48) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x16ddf0
// SYMBOL: sub_16DDF0
int __fastcall sub_16DDF0(int *a1, int a2, int a3)
{
  int v3; // r5
  __int64 v4; // d17
  int result; // r0

  v3 = *(_DWORD *)(dword_381B58 + 6572);
  *(_BYTE *)(v3 + 124) = 1;
  sub_172C12(*(_DWORD *)(v3 + 636), *a1, a1[1], *(_DWORD *)a2, *(float *)(a2 + 4), a3);
  v4 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 636) + 72) + 16 * *(_DWORD *)(*(_DWORD *)(v3 + 636) + 64) - 8);
  result = v3 + 464;
  *(_QWORD *)(v3 + 464) = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 636) + 72)
                                    + 16 * *(_DWORD *)(*(_DWORD *)(v3 + 636) + 64)
                                    - 16);
  *(_QWORD *)(v3 + 472) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x16eebc
// SYMBOL: sub_16EEBC
float *__fastcall sub_16EEBC(float *result, int a2)
{
  float v2; // s0
  float v3; // s2
  float v4; // s0
  float v5; // s6
  int v6; // r2
  int v7; // r1

  if ( *(_BYTE *)(a2 + 125) && *(int *)(a2 + 144) <= 0 && *(int *)(a2 + 148) <= 0
    || *(_BYTE *)(a2 + 129) && !*(_DWORD *)(a2 + 168) && *(int *)(a2 + 164) >= 1 )
  {
    v6 = *(_DWORD *)(a2 + 44);
    v7 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)result = v6;
    *((_DWORD *)result + 1) = v7;
  }
  else
  {
    v2 = *(float *)(a2 + 52);
    if ( v2 == 0.0 )
      v2 = (float)(*(float *)(a2 + 224) - *(float *)(a2 + 12)) + *(float *)(a2 + 88);
    v3 = *(float *)(a2 + 56);
    v4 = (float)(int)v2;
    if ( v3 == 0.0 )
      v3 = (float)(*(float *)(a2 + 228) - *(float *)(a2 + 16)) + *(float *)(a2 + 92);
    v5 = *(float *)(a2 + 64);
    *result = *(float *)(a2 + 60) + v4;
    result[1] = v5 + (float)(int)v3;
  }
  return result;
}


// ======================================================================
// ADDR: 0x16ef60
// SYMBOL: sub_16EF60
int __fastcall sub_16EF60(_QWORD *a1, int a2, __int64 a3)
{
  int v5; // r9
  float v6; // s6
  float v7; // s2
  float v8; // s0
  float v9; // s6
  void (__fastcall *v10)(_DWORD *); // r1
  __int64 v11; // r2
  __int64 v12; // kr00_8
  int v13; // r1
  int result; // r0
  float v15; // s2
  float v16; // s0
  float v17; // s6
  float v18; // s8
  float v19; // s6
  float v20; // s2
  float v21; // s2
  _DWORD v22[3]; // [sp+4h] [bp-34h] BYREF
  __int64 v23; // [sp+10h] [bp-28h]
  float v24; // [sp+18h] [bp-20h]
  float v25; // [sp+1Ch] [bp-1Ch]

  v5 = dword_381B58;
  if ( (*(_BYTE *)(dword_381B58 + 6672) & 0x10) != 0 )
  {
    v6 = *(float *)(dword_381B58 + 6724);
    v7 = *(float *)(dword_381B58 + 6728);
    if ( v6 >= 0.0 )
    {
      v8 = *(float *)&a3;
      if ( *(float *)(dword_381B58 + 6732) < *(float *)&a3 )
        v8 = *(float *)(dword_381B58 + 6732);
      if ( v6 > *(float *)&a3 )
        v8 = *(float *)(dword_381B58 + 6724);
    }
    else
    {
      v8 = *(float *)(a2 + 28);
    }
    if ( v7 >= 0.0 )
    {
      v9 = *((float *)&a3 + 1);
      if ( *(float *)(dword_381B58 + 6736) < *((float *)&a3 + 1) )
        v9 = *(float *)(dword_381B58 + 6736);
      if ( v7 > *((float *)&a3 + 1) )
        v9 = *(float *)(dword_381B58 + 6728);
    }
    else
    {
      v9 = *(float *)(a2 + 32);
    }
    v10 = *(void (__fastcall **)(_DWORD *))(dword_381B58 + 6740);
    if ( v10 )
    {
      v22[0] = *(_DWORD *)(dword_381B58 + 6744);
      v11 = *(_QWORD *)(a2 + 12);
      v12 = *(_QWORD *)(a2 + 28);
      v22[1] = *(_DWORD *)(a2 + 12);
      v22[2] = HIDWORD(v11);
      v23 = v12;
      v25 = v9;
      v24 = v8;
      v10(v22);
      v8 = v24;
      v9 = v25;
    }
    *((float *)&a3 + 1) = (float)(int)v9;
    *(float *)&a3 = (float)(int)v8;
  }
  v13 = *(_DWORD *)(a2 + 8);
  result = 16777280;
  if ( (v13 & 0x1000040) == 0 )
  {
    result = v5 + 5412;
    v15 = *(float *)(v5 + 5420);
    v16 = *(float *)(v5 + 5424);
    if ( v15 <= *(float *)&a3 )
      v15 = *(float *)&a3;
    if ( v16 <= *((float *)&a3 + 1) )
      v16 = *((float *)&a3 + 1);
    v17 = 0.0;
    if ( !(v13 << 31) )
      v17 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
          + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(a2 + 628));
    v18 = 0.0;
    if ( (v13 & 0x400) != 0 )
      v18 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
          + (float)(*(float *)(a2 + 328) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(a2 + 628)));
    *(float *)&a3 = v15;
    v19 = v17 + v18;
    v20 = *(float *)result + -1.0;
    if ( v20 <= 0.0 )
      v20 = 0.0;
    v21 = v19 + v20;
    if ( v16 >= v21 )
      v21 = v16;
    *((float *)&a3 + 1) = v21;
  }
  *a1 = a3;
  return result;
}


// ======================================================================
// ADDR: 0x16f134
// SYMBOL: sub_16F134
int __fastcall sub_16F134(int a1, int a2, float *a3)
{
  int v3; // r3
  int v7; // r8
  float v8; // r1
  float v9; // r2
  float v10; // s0
  float v11; // s6
  float v12; // s0
  float v13; // s2
  float v14; // s10
  float v15; // s16
  float v16; // s18
  __int64 v17; // r0
  __int64 v19; // [sp+0h] [bp-28h] BYREF

  v3 = *(_DWORD *)(a2 + 8);
  if ( (v3 & 0x2000000) != 0 )
  {
    v17 = *(_QWORD *)a3;
    *(_QWORD *)a1 = *(_QWORD *)a3;
  }
  else
  {
    v7 = dword_381B58 + 5420;
    v9 = *(float *)(dword_381B58 + 5424);
    v8 = *(float *)(dword_381B58 + 5420);
    if ( (v3 & 0x14000000) != 0 )
    {
      v10 = 4.0;
      v11 = 4.0;
      if ( v9 < 4.0 )
        v11 = *(float *)(dword_381B58 + 5424);
      if ( v8 < 4.0 )
        v10 = *(float *)(dword_381B58 + 5420);
      v9 = v11;
      v8 = v10;
    }
    v12 = *(float *)(dword_381B58 + 16) - (float)(*(float *)(dword_381B58 + 5552) + *(float *)(dword_381B58 + 5552));
    v13 = *(float *)(dword_381B58 + 20) - (float)(*(float *)(dword_381B58 + 5556) + *(float *)(dword_381B58 + 5556));
    if ( v12 <= v8 )
      v12 = v8;
    if ( v13 <= v9 )
      v13 = v9;
    v14 = a3[1];
    v15 = *a3;
    if ( *a3 > v12 )
      v15 = v12;
    v16 = a3[1];
    if ( v14 > v13 )
      v16 = v13;
    if ( *a3 < v8 )
      v15 = v8;
    if ( v14 < v9 )
      v16 = v9;
    *(float *)a1 = v15;
    *(float *)(a1 + 4) = v16;
    LODWORD(v17) = sub_16EF60(&v19, a2, __SPAIR64__(LODWORD(v16), LODWORD(v15)));
    if ( *(float *)&v19 < *a3 )
    {
      LODWORD(v17) = *(_DWORD *)(a2 + 8) & 0x808;
      if ( (_DWORD)v17 == 2048 )
        *(float *)(a1 + 4) = v16 + *(float *)(v7 + 84);
    }
    if ( *((float *)&v19 + 1) < a3[1] )
    {
      LODWORD(v17) = *(unsigned __int8 *)(a2 + 8) << 28;
      if ( (*(_BYTE *)(a2 + 8) & 8) == 0 )
        *(float *)a1 = v15 + *(float *)(v7 + 84);
    }
  }
  return v17;
}


// ======================================================================
// ADDR: 0x16f2ac
// SYMBOL: sub_16F2AC
int __fastcall sub_16F2AC(int result, int a2, int a3)
{
  bool v3; // zf

  *(_DWORD *)(result + 760) = a3;
  *(_DWORD *)(result + 764) = result;
  *(_DWORD *)(result + 768) = result;
  *(_DWORD *)(result + 772) = result;
  if ( (a2 & 0x3000000) == 0x1000000 && a3 )
    *(_DWORD *)(result + 764) = *(_DWORD *)(a3 + 764);
  v3 = (a2 & 0x5000000) == 0;
  if ( (a2 & 0x5000000) != 0 )
    v3 = a3 == 0;
  if ( !v3 && (a2 & 0x8000000) == 0 )
    *(_DWORD *)(result + 768) = *(_DWORD *)(a3 + 768);
  if ( (*(_BYTE *)(result + 10) & 0x80) != 0 )
  {
    while ( (*(_BYTE *)(a3 + 10) & 0x80) != 0 )
      a3 = *(_DWORD *)(a3 + 760);
    *(_DWORD *)(result + 772) = a3;
  }
  return result;
}


// ======================================================================
// ADDR: 0x16f2fa
// SYMBOL: sub_16F2FA
int __fastcall sub_16F2FA(int result, float *a2, int a3)
{
  int v3; // r3
  float v4; // s0
  int v5; // r2
  float v6; // s0

  v3 = *(_DWORD *)(result + 176);
  if ( !a3 || (a3 & v3) != 0 )
  {
    v4 = *a2;
    *(_DWORD *)(result + 176) = v3 & 0xFFFFFFF1;
    if ( v4 <= 0.0 )
    {
      *(_BYTE *)(result + 152) = 0;
      v5 = 2;
    }
    else
    {
      v5 = 0;
      *(float *)(result + 28) = (float)(int)v4;
    }
    *(_DWORD *)(result + 144) = v5;
    v6 = a2[1];
    if ( v6 <= 0.0 )
    {
      *(_BYTE *)(result + 152) = 0;
      *(_DWORD *)(result + 148) = 2;
    }
    else
    {
      *(_DWORD *)(result + 148) = 0;
      *(float *)(result + 32) = (float)(int)v6;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x16f368
// SYMBOL: sub_16F368
int __fastcall sub_16F368(float *a1, int a2)
{
  float v4; // s0
  int v5; // r6
  float v6; // s12
  float v7; // s2
  float v8; // s10
  float v9; // s4
  float v10; // s6
  float v11; // s2
  int v12; // r4
  float v13; // s8
  float v14; // s4
  bool v15; // fzf
  bool v16; // fnf
  float v17; // s6
  float v18; // s2
  int v19; // r0
  __int64 v20; // r0
  int v21; // r0
  float v22; // s4
  int v23; // r1
  float v24; // s2
  float v25; // s6
  float v26; // s4
  float v27; // s0
  float v28; // s6
  float v29; // s4
  float v30; // s2
  float v31; // s0
  float v32; // s4
  float v33; // s16
  float v34; // s18
  float v35; // s2
  float v36; // s16
  float v37; // s0
  float v38; // s2
  float v40; // [sp+10h] [bp-48h] BYREF
  float v41; // [sp+14h] [bp-44h]
  float v42; // [sp+18h] [bp-40h] BYREF
  float v43; // [sp+1Ch] [bp-3Ch]
  float v44; // [sp+20h] [bp-38h]
  float v45; // [sp+24h] [bp-34h]
  float v46[12]; // [sp+28h] [bp-30h] BYREF

  v4 = 0.0;
  v5 = dword_381B58;
  v6 = *(float *)(dword_381B58 + 20);
  v7 = *(float *)(dword_381B58 + 5556);
  v8 = *(float *)(dword_381B58 + 16);
  v9 = *(float *)(dword_381B58 + 5552);
  v10 = v7 + v7;
  v11 = -v7;
  v12 = dword_381B58 + 5460;
  v13 = v9 + v9;
  v14 = -v9;
  v15 = v6 == v10;
  v16 = v6 < v10;
  v17 = 0.0;
  if ( !v16 && !v15 )
    v17 = v11;
  v18 = 0.0;
  if ( v8 > v13 )
    v18 = v14;
  v19 = *(_DWORD *)(a2 + 8);
  v46[3] = v6 + v17;
  v46[2] = v8 + v18;
  v46[1] = 0.0 - v17;
  v46[0] = 0.0 - v18;
  if ( (v19 & 0x10000000) != 0 )
  {
    v21 = *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6552) + 4 * *(_DWORD *)(dword_381B58 + 6544) - 8);
    if ( *(_BYTE *)(v21 + 322) )
    {
      v22 = 0.0;
      v23 = *(_DWORD *)(v21 + 8);
      if ( !(v23 << 31) )
        v22 = (float)(*(float *)v12 + *(float *)v12) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v21 + 628));
      v24 = *(float *)(v21 + 16) + v22;
      if ( (v23 & 0x400) != 0 )
        v4 = (float)(*(float *)v12 + *(float *)v12)
           + (float)(*(float *)(v21 + 328) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v21 + 628)));
      v25 = v24 + v4;
      v26 = 3.4028e38;
      v27 = -3.4028e38;
    }
    else
    {
      v30 = *(float *)(v21 + 12);
      v31 = *(float *)(dword_381B58 + 5480);
      v32 = (float)(v30 + *(float *)(v21 + 20)) - v31;
      v27 = v31 + v30;
      v24 = -3.4028e38;
      v26 = v32 - *(float *)(v21 + 112);
      v25 = 3.4028e38;
    }
    v45 = v25;
    v44 = v26;
    v43 = v24;
    v42 = v27;
    goto LABEL_18;
  }
  if ( (v19 & 0x4000000) != 0 )
  {
    v28 = *(float *)(a2 + 16);
    v29 = *(float *)(a2 + 12);
    v45 = v28 + 1.0;
    v43 = v28 + -1.0;
    v44 = v29 + 1.0;
    v42 = v29 + -1.0;
LABEL_18:
    LODWORD(v20) = sub_170454(a1, a2 + 12, a2 + 20, a2 + 160, v46, &v42, 0);
    return v20;
  }
  if ( (v19 & 0x2000000) != 0 )
  {
    v33 = *(float *)(dword_381B58 + 5560);
    sub_170190(&v40);
    if ( *(_BYTE *)(v12 + 1474) || !*(_BYTE *)(v12 + 1475) || (*(_BYTE *)(v5 + 8) & 4) != 0 )
    {
      v34 = v41;
      v35 = v33 * 24.0;
      v36 = v40;
      v37 = v35 + v41;
      v38 = v35 + v40;
    }
    else
    {
      v34 = v41;
      v36 = v40;
      v37 = v41 + 8.0;
      v38 = v40 + 16.0;
    }
    v45 = v37;
    v44 = v38;
    v43 = v34 + -8.0;
    v42 = v36 + -16.0;
    sub_170454(a1, &v40, a2 + 20, a2 + 160, v46, &v42, 0);
    LODWORD(v20) = *(_DWORD *)(a2 + 160) + 1;
    if ( *(_DWORD *)(a2 + 160) == -1 )
    {
      a1[1] = v34 + 2.0;
      *a1 = v36 + 2.0;
    }
  }
  else
  {
    v20 = *(_QWORD *)(a2 + 12);
    *(_QWORD *)a1 = v20;
  }
  return v20;
}


// ======================================================================
// ADDR: 0x16f5d0
// SYMBOL: sub_16F5D0
int __fastcall sub_16F5D0(int result, float *a2, float *a3)
{
  float v3; // s0
  float v4; // s3
  float v5; // s4
  float v6; // s14
  float v7; // s2
  float v8; // s6
  float v9; // s0
  float v10; // s2

  if ( !*(_BYTE *)(dword_381B58 + 176) || *(unsigned __int8 *)(result + 8) << 31 )
    v3 = *(float *)(result + 24);
  else
    v3 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
       + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(result + 628));
  v4 = a3[1];
  v5 = v4 + a2[1];
  v6 = *(float *)(result + 20);
  v7 = *a3 + *a2;
  if ( (float)(v3 + *(float *)(result + 16)) >= v5 )
    v5 = v3 + *(float *)(result + 16);
  v9 = v5 - v3;
  v8 = a2[2];
  if ( (float)(v6 + *(float *)(result + 12)) >= v7 )
    v7 = v6 + *(float *)(result + 12);
  v10 = v7 - v6;
  if ( (float)(a2[3] - v4) < v9 )
    v9 = a2[3] - v4;
  if ( (float)(v8 - *a3) < v10 )
    v10 = v8 - *a3;
  *(float *)(result + 12) = v10;
  *(float *)(result + 16) = v9;
  return result;
}


// ======================================================================
// ADDR: 0x16f848
// SYMBOL: sub_16F848
float *__fastcall sub_16F848(float *result, float *a2)
{
  float v2; // s10
  float v3; // s1
  float v4; // s12
  float v5; // s14
  float v6; // s6
  float v7; // s8
  float v8; // s6

  v2 = result[1];
  v3 = v2;
  v4 = result[2];
  v5 = result[3];
  if ( v2 > a2[3] )
    v3 = a2[3];
  v6 = *result;
  if ( *result > a2[2] )
    v6 = a2[2];
  if ( v2 < a2[1] )
    v3 = a2[1];
  if ( *result < *a2 )
    v6 = *a2;
  *result = v6;
  result[1] = v3;
  v7 = v5;
  if ( v5 > a2[3] )
    v7 = a2[3];
  v8 = v4;
  if ( v4 > a2[2] )
    v8 = a2[2];
  if ( v5 < a2[1] )
    v7 = a2[1];
  if ( v4 < *a2 )
    v8 = *a2;
  result[2] = v8;
  result[3] = v7;
  return result;
}


// ======================================================================
// ADDR: 0x16ff3c
// SYMBOL: sub_16FF3C
int __fastcall sub_16FF3C(_BYTE *a1)
{
  int v1; // r11
  int v2; // r5
  int v3; // r6
  __int64 v4; // r8
  int v5; // r0
  int (__fastcall *v6)(_DWORD, int); // r3
  int v7; // r1
  void *v8; // r0
  const void *v9; // r1
  int v10; // r0
  int result; // r0
  int v12; // [sp+4h] [bp-1Ch]

  v1 = dword_381B58;
  v2 = *(_DWORD *)(dword_381B58 + 6572);
  v3 = *(_DWORD *)(v2 + 452);
  HIDWORD(v4) = *(_DWORD *)(v2 + 460);
  v12 = sub_16560C(a1, 0, *(_DWORD *)(HIDWORD(v4) + 4 * v3 - 4));
  if ( v3 == *(_DWORD *)(v2 + 456) )
  {
    LODWORD(v4) = v3 + 1;
    if ( v3 )
      v5 = v3 + v3 / 2;
    else
      v5 = 8;
    if ( v5 > (int)v4 )
      LODWORD(v4) = v5;
    if ( v3 < (int)v4 )
    {
      v6 = off_2390AC;
      v7 = dword_381B60;
      ++*(_DWORD *)(v1 + 880);
      v8 = (void *)v6(4 * v4, v7);
      v9 = *(const void **)(v2 + 460);
      HIDWORD(v4) = v8;
      if ( v9 )
      {
        j_memcpy(v8, v9, 4 * *(_DWORD *)(v2 + 452));
        v10 = *(_DWORD *)(v2 + 460);
        if ( v10 && dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
        off_2390B0(v10, dword_381B60);
      }
      v3 = *(_DWORD *)(v2 + 452);
      *(_QWORD *)(v2 + 456) = v4;
    }
  }
  *(_DWORD *)(HIDWORD(v4) + 4 * v3) = v12;
  result = *(_DWORD *)(v2 + 452) + 1;
  *(_DWORD *)(v2 + 452) = result;
  return result;
}


// ======================================================================
// ADDR: 0x1717cc
// SYMBOL: sub_1717CC
int __fastcall sub_1717CC(int *a1, _DWORD *a2)
{
  int result; // r0
  _DWORD *v5; // r6
  int v6; // r0
  _DWORD *v7; // r0
  const void *v8; // r1
  int v9; // r0

  if ( *a1 )
    return sub_171874(a1, a1[2], a2);
  if ( a1[1] )
  {
    v5 = (_DWORD *)a1[2];
    v6 = 0;
  }
  else
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v7 = (_DWORD *)off_2390AC(32, dword_381B60);
    v8 = (const void *)a1[2];
    v5 = v7;
    if ( v8 )
    {
      j_memcpy(v7, v8, 4 * *a1);
      v9 = a1[2];
      if ( v9 )
      {
        if ( dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
      }
      off_2390B0(v9, dword_381B60);
    }
    v6 = *a1;
    a1[1] = 8;
    a1[2] = (int)v5;
  }
  v5[v6] = *a2;
  result = *a1 + 1;
  *a1 = result;
  return result;
}


// ======================================================================
// ADDR: 0x17194c
// SYMBOL: sub_17194C
_DWORD *__fastcall sub_17194C(float *a1, float *a2, float *a3, float *a4, _DWORD *a5)
{
  float v5; // s0
  float v8; // s2
  float v9; // s6
  float v10; // s16
  float v11; // s14
  float v12; // s10
  float v13; // s18
  float v14; // s16
  float v15; // s22
  __int64 v16; // r2
  _DWORD *result; // r0
  int v18; // r2
  __int64 v19; // [sp+0h] [bp-38h] BYREF

  v5 = a1[3];
  v8 = a1[4];
  v9 = v8 + a1[6];
  v10 = a2[1];
  v11 = a3[1];
  v12 = v10 - v9;
  v13 = *a2 + (float)((float)(v5 - *a2) * *a3);
  v14 = v10 + (float)((float)(v8 - v10) * v11);
  v15 = (float)((float)(v5 + a1[5]) + (float)((float)(*a2 - (float)(v5 + a1[5])) * *a3)) - v13;
  *(float *)&v16 = v15;
  *((float *)&v16 + 1) = (float)(v9 + (float)(v12 * v11)) - v14;
  sub_16EF60(&v19, (int)a1, v16);
  *a4 = v13;
  a4[1] = v14;
  result = a5;
  if ( *a3 == 0.0 )
    *a4 = v13 - (float)(*(float *)&v19 - v15);
  if ( a3[1] == 0.0 )
    a4[1] = v14 - (float)(*((float *)&v19 + 1) - (float)((float)(v9 + (float)(v12 * v11)) - v14));
  v18 = HIDWORD(v19);
  *a5 = v19;
  a5[1] = v18;
  return result;
}


// ======================================================================
// ADDR: 0x171a1c
// SYMBOL: sub_171A1C
float *__fastcall sub_171A1C(float *result, float *a2, int a3)
{
  float v3; // s0
  float v4; // s1
  float v5; // s8
  float v6; // s6
  float v7; // s10
  float v8; // s12
  float v9; // s4
  float v10; // s2
  float v11; // s6
  float v12; // s0

  v5 = a2[3];
  v6 = a2[4];
  v7 = v5 + a2[5];
  v8 = v6 + a2[6];
  if ( v4 == 0.0 )
  {
    v8 = v8 + -1.0;
    v7 = v7 + -1.0;
  }
  switch ( a3 )
  {
    case 0:
      v9 = v6 + v4;
      v10 = v7 - v3;
      v11 = v6 - v4;
      goto LABEL_8;
    case 1:
      v9 = v8 - v3;
      v11 = v6 + v3;
      v10 = v7 + v4;
      v12 = v7 - v4;
      break;
    case 2:
      v10 = v7 - v3;
      v9 = v8 + v4;
      v11 = v8 - v4;
LABEL_8:
      v12 = v5 + v3;
      break;
    case 3:
      v9 = v8 - v3;
      v11 = v6 + v3;
      v10 = v5 + v4;
      v12 = v5 - v4;
      break;
    default:
      v10 = -3.4028e38;
      v12 = 3.4028e38;
      v9 = -3.4028e38;
      v11 = 3.4028e38;
      break;
  }
  *result = v12;
  result[1] = v11;
  result[2] = v10;
  result[3] = v9;
  return result;
}


// ======================================================================
// ADDR: 0x171ad0
// SYMBOL: sub_171AD0
float *__fastcall sub_171AD0(float *result, int a2)
{
  float v2; // s0
  int v3; // r3
  float v4; // s4
  float v5; // s2
  float v6; // s4
  float v7; // s6

  v2 = 0.0;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = 0.0;
  if ( !(v3 << 31) )
    v4 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
       + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(a2 + 628));
  v5 = *(float *)(a2 + 16) + v4;
  v6 = *(float *)(a2 + 12);
  v7 = *(float *)(a2 + 28);
  if ( (v3 & 0x400) != 0 )
    v2 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
       + (float)(*(float *)(a2 + 328) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(a2 + 628)));
  *result = v6;
  result[1] = v5;
  result[3] = v5 + v2;
  result[2] = v6 + v7;
  return result;
}


// ======================================================================
// ADDR: 0x172fda
// SYMBOL: sub_172FDA
float *__fastcall sub_172FDA(float *result, float *a2, int a3, int a4, int a5, float a6)
{
  int v6; // r10
  int *v7; // r0
  int v9; // r1
  int v11; // r9
  int v12; // r3
  int v13; // r11
  int v14; // r2
  float *v15; // r11
  float v16; // s0
  int v17; // r12
  float v18; // s4
  int v19; // r2
  float v20; // s6
  float *v21; // r2
  float v22; // s8
  float v23; // s10
  float v24; // s12
  float v25; // s12
  float v26; // s10
  int v27; // r5
  float v28; // s8
  int v29; // r1
  float v30; // s6
  int v31; // r5
  float v32; // s4
  float v33; // s6
  int v34; // r3
  float v35; // s4
  int v36; // r2
  float v37; // s6
  float v38; // s4
  int v39; // r3
  int v40; // r5
  _WORD *v41; // r6
  int v42; // r1
  int v43; // r0
  int v44; // r2
  int v45; // r0
  int v46; // lr
  float *v47; // r6
  float *v48; // r12
  int v49; // r5
  float *v50; // r0
  int v51; // r3
  float *v52; // r1
  int v53; // r2
  int v54; // r3
  float *v55; // r3
  float v56; // s0
  float v57; // s2
  float v58; // s4
  float v59; // s4
  float v60; // s0
  float v61; // s2
  float *v62; // r3
  int v63; // r2
  __int64 v64; // r0
  float v65; // s4
  float *v66; // r0
  float v67; // s12
  float v68; // s8
  float v69; // s10
  float v70; // s6
  float v71; // s9
  float v72; // s5
  float v73; // s14
  float v74; // s7
  float v75; // s1
  float v76; // s5
  float *v77; // r0
  float v78; // s14
  float v79; // s9
  float v80; // s11
  float v81; // s1
  float v82; // s4
  float v83; // s5
  float *v84; // r0
  float v85; // s6
  float v86; // s3
  float v87; // s12
  int v88; // r2
  int v89; // r1
  int v90; // r0
  int v91; // lr
  int v92; // r6
  __int16 v93; // r5
  float *v94; // r3
  float v95; // s12
  float v96; // s10
  __int16 v97; // r3
  float v98; // s8
  float v99; // s6
  float v100; // s10
  float v101; // s10
  float *v102; // r5
  float *v103; // r3
  float *v104; // r3
  float v105; // s8
  float v106; // s14
  float v107; // s6
  float v108; // s1
  float v109; // s12
  float v110; // s10
  float v111; // s6
  float v112; // s8
  int v113; // r4
  int v114; // r12
  _QWORD *v115; // r1
  _QWORD *v116; // r0
  int v117; // r5
  int v118; // r6
  int v119; // r1
  _DWORD *v120; // r1
  int v121; // r2
  int v122; // r1
  int v123; // r2
  int v124; // r1
  __int64 v125; // r2
  float *v126; // r1
  float v127; // s1
  float *v128; // r0
  float v129; // s2
  float v130; // s8
  float v131; // s10
  float v132; // s14
  float v133; // s2
  float v134; // s8
  float v135; // s0
  float v136; // s6
  float v137; // s14
  float v138; // s1
  float v139; // s4
  int v140; // r2
  int v141; // r1
  int v142; // r0
  int v143; // r6
  int v144; // r3
  float *v145; // r5
  float v146; // s4
  float v147; // s2
  float v148; // s6
  float v149; // s6
  float *v150; // r5
  float v151; // s2
  float v152; // s8
  float v153; // s4
  float v154; // s6
  float *v155; // r3
  int v156; // r6
  int v157; // r5
  _QWORD *v158; // r1
  __int64 *v159; // r0
  __int64 v160; // t1
  int v161; // r1
  __int64 v162; // r2
  int v163; // r1
  int v164; // r1
  __int64 v165; // t1
  int v166; // [sp+0h] [bp-50h] BYREF
  int v167; // [sp+4h] [bp-4Ch]
  float *v168; // [sp+8h] [bp-48h]
  float *v169; // [sp+Ch] [bp-44h]
  int v170; // [sp+10h] [bp-40h]
  int v171; // [sp+14h] [bp-3Ch]
  int v172; // [sp+18h] [bp-38h]

  if ( a3 < 2 )
    return result;
  v6 = (int)result;
  v7 = (int *)*((_DWORD *)result + 10);
  v9 = *(unsigned __int8 *)(v6 + 36);
  v11 = v7[1];
  v12 = a3 - 1;
  v13 = a3;
  v170 = *v7;
  v172 = a3 - 1;
  if ( a5 )
    v12 = a3;
  v171 = v12;
  if ( v9 << 31 )
  {
    v43 = 12;
    v44 = 3 * a3;
    if ( a6 > 1.0 )
    {
      v43 = 18;
      v44 = 4 * v13;
    }
    v167 = v44;
    sub_172DC0(v6, v43 * v12, v44);
    v45 = 3;
    v46 = v171;
    if ( a6 > 1.0 )
      v45 = 5;
    v47 = (float *)((char *)&v166 - 8 * v13 * v45);
    v48 = v47 + 1;
    v169 = &v47[2 * v13];
    v49 = v172;
    v50 = a2 + 1;
    v166 = a4 & 0xFFFFFF;
    v51 = 0;
    v52 = v47 + 1;
    do
    {
      v53 = v51 + 1;
      v54 = v49 - v51;
      if ( v54 )
        v54 = v53;
      v55 = &a2[2 * v54];
      v56 = v55[1] - *v50;
      v57 = *v55 - *(v50 - 1);
      v58 = (float)(v56 * v56) + (float)(v57 * v57);
      if ( v58 > 0.0 )
      {
        v59 = 1.0 / sqrtf(v58);
        v56 = v56 * v59;
        v57 = v57 * v59;
      }
      *(v52 - 1) = v56;
      v50 += 2;
      v51 = v53;
      *v52 = -v57;
      v52 += 2;
    }
    while ( v46 != v53 );
    v168 = v47;
    if ( a5 )
    {
      if ( a6 > 1.0 )
      {
        v60 = (float)(a6 + -1.0) * 0.5;
        v61 = v60 + 1.0;
        goto LABEL_27;
      }
    }
    else
    {
      v62 = v169;
      v63 = v172;
      v64 = *((_QWORD *)v169 - 2);
      LODWORD(v47[2 * v172]) = v64;
      v65 = *(float *)&v64;
      v66 = &v47[2 * v63];
      v66[1] = *((float *)&v64 + 1);
      if ( a6 > 1.0 )
      {
        v67 = a2[1];
        v68 = v47[1];
        v69 = *a2;
        v70 = *v47;
        v71 = *a2;
        v72 = *a2;
        v60 = (float)(a6 + -1.0) * 0.5;
        v73 = *a2 + (float)(v60 * *v47);
        v74 = v60 * v65;
        v62[3] = v67 + (float)(v60 * v68);
        v61 = v60 + 1.0;
        v62[2] = v73;
        v75 = v66[1];
        v76 = v72 - (float)(v60 * *v47);
        v77 = &a2[2 * v63];
        v78 = v60 * v75;
        v79 = v71 + (float)(v70 * (float)(v60 + 1.0));
        v80 = v77[1];
        v81 = (float)(v60 + 1.0) * v75;
        v82 = (float)(v60 + 1.0) * v65;
        v62[5] = v67 - (float)(v60 * v47[1]);
        v62[4] = v76;
        v83 = *v77;
        v84 = &v62[8 * v63];
        v85 = v67 + (float)((float)(v60 + 1.0) * v68);
        v86 = *v47;
        v87 = v67 - (float)((float)(v60 + 1.0) * v47[1]);
        *v62 = v79;
        v62[1] = v85;
        v62[7] = v87;
        v62[6] = v69 - (float)((float)(v60 + 1.0) * v86);
        v84[5] = v80 - v78;
        v84[4] = v83 - v74;
        v84[2] = v74 + v83;
        v84[7] = v80 - v81;
        v84[6] = v83 - v82;
        v84[3] = v78 + v80;
        *v84 = v82 + v83;
        v84[1] = v81 + v80;
LABEL_27:
        v88 = *(_DWORD *)(v6 + 52);
        v89 = 1;
        v90 = *(_DWORD *)(v6 + 60) + 36;
        v91 = v88;
        while ( 1 )
        {
          v92 = v13 - v89;
          if ( v13 != v89 )
            v92 = v89;
          v93 = v91 + 1;
          v94 = &v168[2 * v92];
          v95 = v94[1];
          v96 = *v94;
          v97 = v91 + 3;
          v98 = (float)(*v48 + v95) * 0.5;
          v99 = (float)(*(v48 - 1) + v96) * 0.5;
          v100 = (float)(v98 * v98) + (float)(v99 * v99);
          if ( v100 < 0.5 )
            v100 = 0.5;
          v101 = 1.0 / v100;
          *(_WORD *)(v90 - 6) = v97;
          *(_WORD *)(v90 - 8) = v97;
          *(_WORD *)(v90 - 10) = v91 + 2;
          *(_WORD *)(v90 - 18) = v91;
          *(_WORD *)(v90 - 20) = v91;
          *(_WORD *)(v90 - 22) = v93;
          *(_WORD *)(v90 - 30) = v91 + 2;
          *(_WORD *)(v90 - 32) = v91 + 2;
          *(_WORD *)(v90 - 34) = v93;
          if ( v13 != v89 )
            v88 = v91 + 4;
          *(_WORD *)(v90 - 4) = v88 + 3;
          v102 = &a2[2 * v92];
          *(_WORD *)(v90 - 2) = v88 + 2;
          *(_WORD *)(v90 - 12) = v88 + 2;
          *(_WORD *)(v90 - 28) = v88 + 2;
          v103 = v169;
          *(_WORD *)(v90 - 16) = v88;
          v104 = &v103[8 * v92];
          v105 = v98 * v101;
          v106 = *v102;
          v107 = v99 * v101;
          v108 = v102[1];
          *(_WORD *)(v90 - 14) = v88 + 1;
          *(_WORD *)(v90 - 24) = v88 + 1;
          *(_WORD *)(v90 - 26) = v88 + 1;
          *(_WORD *)(v90 - 36) = v88 + 1;
          v109 = v61 * v105;
          v110 = v61 * v107;
          v111 = v60 * v107;
          v112 = v60 * v105;
          v104[7] = v108 - v109;
          *v104 = v106 + v110;
          v104[4] = v106 - v111;
          v104[5] = v108 - v112;
          v104[6] = v106 - v110;
          v104[3] = v108 + v112;
          v104[2] = v106 + v111;
          v104[1] = v108 + v109;
          if ( v171 == v89 )
            break;
          v91 = v88;
          v90 += 36;
          v48 += 2;
          v88 = *(_DWORD *)(v6 + 52);
          ++v89;
        }
        v113 = v170;
        v114 = v166;
        *(_DWORD *)(v6 + 60) = v90;
        v115 = *(_QWORD **)(v6 + 56);
        v116 = v169 + 4;
        do
        {
          v117 = *((_DWORD *)v116 - 1);
          --v13;
          v118 = *((_DWORD *)v116 - 2);
          *v115 = *(v116 - 2);
          v119 = *(_DWORD *)(v6 + 56);
          *(_DWORD *)(v119 + 8) = v113;
          *(_DWORD *)(v119 + 12) = v11;
          v120 = *(_DWORD **)(v6 + 56);
          v120[5] = v118;
          v120[6] = v117;
          v121 = *(_DWORD *)(v6 + 56);
          v120[4] = v114;
          *(_DWORD *)(v121 + 28) = v113;
          *(_DWORD *)(v121 + 32) = v11;
          v122 = *(_DWORD *)(v6 + 56);
          *(_QWORD *)(v122 + 40) = *v116;
          v123 = *(_DWORD *)(v6 + 56);
          *(_DWORD *)(v122 + 36) = a4;
          *(_DWORD *)(v123 + 48) = v113;
          *(_DWORD *)(v123 + 52) = v11;
          v124 = *(_DWORD *)(v6 + 56);
          v125 = v116[1];
          v116 += 4;
          *(_QWORD *)(v124 + 60) = v125;
          LODWORD(v125) = *(_DWORD *)(v6 + 56);
          *(_DWORD *)(v124 + 56) = a4;
          *(_DWORD *)(v125 + 68) = v113;
          *(_DWORD *)(v125 + 72) = v11;
          LODWORD(v125) = *(_DWORD *)(v6 + 56);
          v115 = (_QWORD *)(v125 + 80);
          *(_DWORD *)(v6 + 56) = v125 + 80;
          *(_DWORD *)(v125 + 76) = v114;
        }
        while ( v13 );
LABEL_51:
        result = (float *)(*(_DWORD *)(v6 + 52) + (unsigned __int16)v167);
        *(_DWORD *)(v6 + 52) = result;
        return result;
      }
      v126 = &a2[2 * v63];
      v127 = v66[1];
      v128 = &v62[4 * v63];
      v129 = a2[1];
      v130 = v47[1];
      v131 = v130 + v129;
      v132 = v126[1];
      v133 = v129 - v130;
      v134 = *a2 - *v47;
      v135 = *v47 + *a2;
      v136 = v132 - v127;
      v137 = v127 + v132;
      v138 = *v126 + v65;
      v139 = *v126 - v65;
      v62[1] = v131;
      v62[3] = v133;
      v62[2] = v134;
      *v62 = v135;
      v128[3] = v136;
      v128[1] = v137;
      *v128 = v138;
      v128[2] = v139;
    }
    v140 = *(_DWORD *)(v6 + 52);
    v141 = 1;
    v142 = *(_DWORD *)(v6 + 60) + 24;
    v143 = v140;
    while ( 1 )
    {
      v144 = v13 - v141;
      if ( v13 != v141 )
        v144 = v141;
      v145 = &v168[2 * v144];
      v146 = (float)(*v48 + v145[1]) * 0.5;
      v147 = (float)(*(v48 - 1) + *v145) * 0.5;
      v148 = (float)(v146 * v146) + (float)(v147 * v147);
      if ( v148 < 0.5 )
        v148 = 0.5;
      v149 = 1.0 / v148;
      *(_WORD *)(v142 - 10) = v143 + 1;
      *(_WORD *)(v142 - 18) = v143 + 2;
      *(_WORD *)(v142 - 20) = v143 + 2;
      v150 = &a2[2 * v144];
      *(_WORD *)(v142 - 6) = v143;
      *(_WORD *)(v142 - 8) = v143;
      *(_WORD *)(v142 - 22) = v143;
      v151 = v147 * v149;
      v152 = v150[1];
      v153 = v146 * v149;
      v154 = *v150;
      if ( v13 != v141 )
        v140 = v143 + 3;
      v155 = &v169[4 * v144];
      *(_WORD *)(v142 - 4) = v140;
      *(_WORD *)(v142 - 14) = v140;
      *(_WORD *)(v142 - 24) = v140;
      *(_WORD *)(v142 - 2) = v140 + 1;
      *(_WORD *)(v142 - 12) = v140 + 1;
      *(_WORD *)(v142 - 16) = v140 + 2;
      *v155 = v154 + v151;
      v155[3] = v152 - v153;
      v155[2] = v154 - v151;
      v155[1] = v152 + v153;
      if ( v46 == v141 )
        break;
      v143 = v140;
      v142 += 24;
      v48 += 2;
      v140 = *(_DWORD *)(v6 + 52);
      ++v141;
    }
    v156 = v170;
    v157 = v166;
    *(_DWORD *)(v6 + 60) = v142;
    v158 = *(_QWORD **)(v6 + 56);
    v159 = (__int64 *)(v169 + 2);
    do
    {
      v160 = *(_QWORD *)a2;
      a2 += 2;
      --v13;
      *v158 = v160;
      v161 = *(_DWORD *)(v6 + 56);
      v162 = *(v159 - 1);
      *(_DWORD *)(v161 + 8) = v156;
      *(_DWORD *)(v161 + 12) = v11;
      v163 = *(_DWORD *)(v6 + 56);
      *(_QWORD *)(v163 + 20) = v162;
      LODWORD(v162) = *(_DWORD *)(v6 + 56);
      *(_DWORD *)(v163 + 16) = a4;
      *(_DWORD *)(v162 + 28) = v156;
      *(_DWORD *)(v162 + 32) = v11;
      v164 = *(_DWORD *)(v6 + 56);
      v165 = *v159;
      v159 += 2;
      *(_QWORD *)(v164 + 40) = v165;
      LODWORD(v162) = *(_DWORD *)(v6 + 56);
      *(_DWORD *)(v164 + 36) = v157;
      *(_DWORD *)(v162 + 48) = v156;
      *(_DWORD *)(v162 + 52) = v11;
      LODWORD(v162) = *(_DWORD *)(v6 + 56);
      v158 = (_QWORD *)(v162 + 60);
      *(_DWORD *)(v6 + 56) = v162 + 60;
      *(_DWORD *)(v162 + 56) = v157;
    }
    while ( v13 );
    goto LABEL_51;
  }
  sub_172DC0(v6, 6 * v12, 4 * v12);
  result = a2 + 1;
  v14 = 0;
  v15 = a2;
  v16 = a6 * 0.5;
  do
  {
    v17 = v14 + 1;
    v18 = *(result - 1);
    v19 = v172 - v14;
    v20 = *result;
    if ( v19 )
      v19 = v17;
    v21 = &a2[2 * v19];
    v22 = v21[1] - v20;
    v23 = *v21 - v18;
    v24 = (float)(v22 * v22) + (float)(v23 * v23);
    if ( v24 > 0.0 )
    {
      v25 = 1.0 / sqrtf(v24);
      v22 = v22 * v25;
      v23 = v23 * v25;
    }
    v26 = v16 * v23;
    v27 = *(_DWORD *)(v6 + 56);
    v28 = v16 * v22;
    v29 = v170;
    *(_DWORD *)(v27 + 8) = v170;
    *(_DWORD *)(v27 + 12) = v11;
    *(float *)(v27 + 4) = v20 - v26;
    *(float *)v27 = v18 + v28;
    v30 = v21[1] - v26;
    v31 = *(_DWORD *)(v6 + 56);
    v32 = v28 + *v21;
    *(_DWORD *)(v31 + 28) = v29;
    *(_DWORD *)(v31 + 32) = v11;
    *(_DWORD *)(v31 + 16) = a4;
    *(float *)(v31 + 24) = v30;
    *(float *)(v31 + 20) = v32;
    v33 = v26 + v21[1];
    v34 = *(_DWORD *)(v6 + 56);
    v35 = *v21 - v28;
    *(_DWORD *)(v34 + 48) = v29;
    *(_DWORD *)(v34 + 52) = v11;
    v36 = *(_DWORD *)(v6 + 56);
    *(_DWORD *)(v34 + 36) = a4;
    *(float *)(v34 + 44) = v33;
    *(float *)(v34 + 40) = v35;
    v37 = *result;
    v38 = *(result - 1);
    result += 2;
    *(_DWORD *)(v36 + 68) = v29;
    *(_DWORD *)(v36 + 72) = v11;
    v39 = *(_DWORD *)(v6 + 52);
    v40 = *(_DWORD *)(v6 + 56);
    v41 = *(_WORD **)(v6 + 60);
    *(_DWORD *)(v6 + 52) = v39 + 4;
    v41[1] = v39 + 1;
    v41[2] = v39 + 2;
    v41[4] = v39 + 2;
    v41[5] = v39 + 3;
    v42 = v171;
    *(_DWORD *)(v36 + 56) = a4;
    *(_DWORD *)(v6 + 56) = v40 + 80;
    *(float *)(v36 + 60) = v38 - v28;
    a2 = v15;
    *(float *)(v36 + 64) = v26 + v37;
    v14 = v17;
    *(_DWORD *)(v6 + 60) = v41 + 6;
    *(_DWORD *)(v40 + 76) = a4;
    *v41 = v39;
    v41[3] = v39;
  }
  while ( v42 != v17 );
  return result;
}


// ======================================================================
// ADDR: 0x1739bc
// SYMBOL: sub_1739BC
int __fastcall sub_1739BC(_DWORD *a1, int a2, float a3, int a4, int a5)
{
  int v7; // r1
  int v9; // r6
  int v10; // r0
  int v11; // r5
  void *v12; // r0
  const void *v13; // r1
  void *v14; // r10
  int v15; // r1
  int v16; // r2
  int v17; // r5
  int v18; // r1
  void *v19; // r0
  const void *v20; // r1
  void *v21; // r11
  int v22; // r0
  int result; // r0
  int v24; // r6
  int v25; // r0
  void *v26; // r0
  const void *v27; // r1
  void *v28; // r5
  float v29; // [sp+0h] [bp-30h]
  float v30; // [sp+4h] [bp-2Ch]

  v7 = a1[22];
  if ( a3 == 0.0 || (v9 = a4, a5 < a4) )
  {
    if ( v7 == a1[23] )
    {
      v24 = v7 + 1;
      if ( v7 )
        v25 = v7 + v7 / 2;
      else
        v25 = 8;
      if ( v25 > v24 )
        v24 = v25;
      if ( v7 < v24 )
      {
        v26 = (void *)sub_1654B0(8 * v24);
        v27 = (const void *)a1[24];
        v28 = v26;
        if ( v27 )
        {
          j_memcpy(v26, v27, 8 * a1[22]);
          sub_165578(a1[24]);
        }
        v7 = a1[22];
        a1[23] = v24;
        a1[24] = v28;
      }
    }
    *(_QWORD *)(a1[24] + 8 * v7) = *(_QWORD *)a2;
    result = a1[22] + 1;
    a1[22] = result;
  }
  else
  {
    v10 = a1[23];
    v11 = v7 + a5 - a4 + 1;
    if ( v10 < v11 )
    {
      v12 = (void *)sub_1654B0(8 * v11);
      v13 = (const void *)a1[24];
      v14 = v12;
      if ( v13 )
      {
        j_memcpy(v12, v13, 8 * a1[22]);
        sub_165578(a1[24]);
      }
      v10 = v11;
      a1[23] = v11;
      a1[24] = v14;
    }
    v15 = a1[22];
    while ( 1 )
    {
      v16 = a1[10] + 8 * (v9 % 12);
      v29 = *(float *)a2 + (float)(*(float *)(v16 + 40) * a3);
      v30 = *(float *)(a2 + 4) + (float)(*(float *)(v16 + 44) * a3);
      if ( v15 == v10 )
      {
        v17 = v10 + 1;
        if ( v10 )
          v18 = v10 + v10 / 2;
        else
          v18 = 8;
        if ( v18 > v17 )
          v17 = v18;
        v15 = v10;
        if ( v10 < v17 )
        {
          v19 = (void *)sub_1654B0(8 * v17);
          v20 = (const void *)a1[24];
          v21 = v19;
          if ( v20 )
          {
            j_memcpy(v19, v20, 8 * a1[22]);
            sub_165578(a1[24]);
          }
          v15 = a1[22];
          a1[23] = v17;
          a1[24] = v21;
        }
      }
      v22 = a1[24];
      *(float *)(v22 + 8 * v15) = v29;
      *(float *)(v22 + 8 * v15 + 4) = v30;
      result = a1[22];
      v15 = result + 1;
      a1[22] = result + 1;
      if ( a5 == v9 )
        break;
      v10 = a1[23];
      ++v9;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x173b2c
// SYMBOL: sub_173B2C
int __fastcall sub_173B2C(_DWORD *a1, int a2, float a3, float a4, float a5, int a6)
{
  int v8; // r0
  int v10; // r5
  int v11; // r1
  void *v12; // r0
  const void *v13; // r1
  void *v14; // r6
  int result; // r0
  int v17; // r10
  int v18; // r6
  void *v19; // r0
  const void *v20; // r1
  void *v21; // r8
  float v22; // s18
  int v23; // r5
  int v24; // r6
  float v25; // s4
  int v26; // r8
  int v27; // r0
  void *v28; // r0
  const void *v29; // r1
  void *v30; // r10
  int v31; // r0
  float v32; // r2
  float v33; // [sp+0h] [bp-50h] BYREF
  float v34; // [sp+4h] [bp-4Ch] BYREF
  float v35; // [sp+8h] [bp-48h]
  float v36; // [sp+Ch] [bp-44h]

  v8 = a1[22];
  if ( a3 == 0.0 )
  {
    if ( v8 == a1[23] )
    {
      v10 = v8 + 1;
      if ( v8 )
        v11 = v8 + v8 / 2;
      else
        v11 = 8;
      if ( v11 > v10 )
        v10 = v11;
      if ( v8 < v10 )
      {
        v12 = (void *)sub_1654B0(8 * v10);
        v13 = (const void *)a1[24];
        v14 = v12;
        if ( v13 )
        {
          j_memcpy(v12, v13, 8 * a1[22]);
          sub_165578(a1[24]);
        }
        v8 = a1[22];
        a1[23] = v10;
        a1[24] = v14;
      }
    }
    *(_QWORD *)(a1[24] + 8 * v8) = *(_QWORD *)a2;
    result = a1[22] + 1;
    a1[22] = result;
  }
  else
  {
    v17 = a1[23];
    v18 = v8 + a6 + 1;
    if ( v17 < v18 )
    {
      v19 = (void *)sub_1654B0(8 * v18);
      v20 = (const void *)a1[24];
      v21 = v19;
      if ( v20 )
      {
        j_memcpy(v19, v20, 8 * a1[22]);
        sub_165578(a1[24]);
      }
      v17 = v18;
      a1[23] = v18;
      a1[24] = v21;
    }
    result = a6;
    if ( a6 >= 0 )
    {
      v22 = a4;
      v23 = 0;
      v24 = a1[22];
      while ( 1 )
      {
        sincosf(v22 + (float)((float)((float)v23 / (float)a6) * (float)(a5 - v22)), &v34, &v33);
        v25 = *(float *)(a2 + 4) + (float)(v34 * a3);
        v35 = *(float *)a2 + (float)(v33 * a3);
        v36 = v25;
        if ( v24 == v17 )
        {
          v26 = v17 + 1;
          if ( v17 )
            v27 = v17 + v17 / 2;
          else
            v27 = 8;
          if ( v27 > v26 )
            v26 = v27;
          v24 = v17;
          if ( v17 < v26 )
          {
            v28 = (void *)sub_1654B0(8 * v26);
            v29 = (const void *)a1[24];
            v30 = v28;
            if ( v29 )
            {
              j_memcpy(v28, v29, 8 * a1[22]);
              sub_165578(a1[24]);
            }
            v24 = a1[22];
            a1[23] = v26;
            a1[24] = v30;
          }
        }
        v31 = a1[24];
        v32 = v36;
        *(float *)(v31 + 8 * v24) = v35;
        *(float *)(v31 + 8 * v24 + 4) = v32;
        v24 = a1[22] + 1;
        result = a6;
        a1[22] = v24;
        if ( a6 == v23 )
          break;
        v17 = a1[23];
        ++v23;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x17ad64
// SYMBOL: sub_17AD64
int __fastcall sub_17AD64(float *a1, int a2, _BYTE *a3, char *a4, int a5)
{
  int v7; // r8
  int v10; // r9
  int v11; // r5
  int v12; // r0
  int v13; // r1
  int v14; // r10
  int v15; // r2
  int v16; // r4
  int v17; // r0
  _BYTE *v18; // r3
  int v19; // r6
  bool v20; // zf
  _BYTE *v21; // r5
  int v22; // r10
  int v23; // r5
  int v24; // r10
  int v25; // r10
  _BOOL4 v26; // r0
  int v27; // r0
  bool v28; // zf
  int v29; // r1
  int v30; // r10
  int v31; // r4
  int v32; // r4
  int v33; // r0
  float v34; // s2
  char v35; // r6
  int v36; // r11
  int v37; // r4
  _BYTE *v38; // r6
  int v40; // r0
  bool v41; // zf
  _BYTE *v42; // r4
  int v43; // r0
  _BOOL4 v44; // r1
  float *v45; // [sp+4h] [bp-34h]
  int v46; // [sp+8h] [bp-30h]
  _BYTE *v47; // [sp+8h] [bp-30h]
  float *v48; // [sp+Ch] [bp-2Ch]
  char *v49; // [sp+10h] [bp-28h]
  int v50; // [sp+18h] [bp-20h]

  v7 = a5;
  v50 = dword_381B58;
  v10 = dword_381B58 + 6572;
  v11 = *(_DWORD *)(dword_381B58 + 6572);
  *(_BYTE *)(v11 + 124) = 1;
  if ( (a5 & 0x100) == 0 )
  {
    v46 = *(_DWORD *)(v10 + 4);
    if ( (a5 & 0x1E) == 0 )
      v7 = a5 | 2;
    if ( (v7 & 0x20) != 0 && *(_DWORD *)(v10 + 8) == v11 )
      *(_DWORD *)(v10 + 4) = v11;
    v12 = sub_167664(a1, a2);
    v13 = *(unsigned __int8 *)(v10 + 876);
    v45 = a1;
    v49 = a4;
    if ( v12 )
    {
      if ( !*(_BYTE *)(v10 + 876) )
      {
        v15 = 0;
        v14 = 1;
        v16 = v50;
        goto LABEL_28;
      }
      v13 = 1;
      if ( *(_DWORD *)(v10 + 900) == a2 )
        v14 = (*(unsigned __int8 *)(v10 + 880) >> 1) & 1;
      else
        v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    v16 = v50;
    v15 = 0;
    if ( (v7 & 0x1000) != 0 && v13 )
    {
      if ( (*(_BYTE *)(v10 + 880) & 4) != 0 || !sub_1675A8(32) )
      {
        v15 = 0;
      }
      else
      {
        sub_167004(a2);
        if ( sub_16E950(
               *(float *)(v10 + 28) + 0.0001,
               (float)(*(float *)(v10 + 28) + 0.0001) - *(float *)(v50 + 24),
               0.01,
               0.7) )
        {
          sub_168010(v11);
          v14 = 1;
          v15 = 1;
        }
        else
        {
          v15 = 0;
          v14 = 1;
        }
      }
    }
LABEL_28:
    v48 = (float *)(v16 + 1032);
    if ( (v7 & 0x20) != 0 && *(_DWORD *)(v10 + 8) == v11 )
      *(_DWORD *)(v10 + 4) = v46;
    if ( ((unsigned __int8)(v7 & 0x40) >> 6) ^ 1 | v14 ^ 1 )
    {
      v18 = a3;
      v19 = v11;
      if ( !v14 )
      {
LABEL_49:
        v23 = 0;
        goto LABEL_70;
      }
    }
    else
    {
      v17 = *(_DWORD *)(v10 + 24);
      v18 = a3;
      v19 = v11;
      v20 = v17 == a2;
      if ( v17 != a2 )
        v20 = v17 == 0;
      if ( !v20 )
        goto LABEL_49;
    }
    if ( (v7 & 0x400) != 0 && (*(_BYTE *)(v16 + 248) || *(_BYTE *)(v16 + 249) || *(_BYTE *)(v16 + 250)) )
      goto LABEL_68;
    v21 = v18;
    if ( (v7 & 2) != 0 && *(_BYTE *)(v16 + 984) )
    {
      v22 = v15;
      sub_166ECC(a2, v19);
      if ( (v7 & 0x2000) == 0 )
        sub_166F3C(a2, v19);
      sub_168010(v19);
      v15 = v22;
      v18 = v21;
    }
    if ( (v7 & 4) != 0 && *(_BYTE *)(v16 + 984) || (v7 & 0x10) != 0 && *(_BYTE *)(v16 + 989) )
    {
      if ( (v7 & 0x800) != 0 )
        sub_166FD0();
      else
        sub_166ECC(a2, v19);
      sub_168010(v19);
      v15 = 1;
      v18 = v21;
    }
    if ( (v7 & 8) != 0 && *(_BYTE *)(v16 + 994) )
    {
      if ( v7 << 31 )
      {
        if ( *v48 < *(float *)(v16 + 136) )
          v15 = 1;
      }
      else
      {
        v15 = 1;
      }
      v24 = v15;
      sub_166FD0();
      v15 = v24;
      v18 = v21;
    }
    if ( !(v7 << 31) || *(_DWORD *)(v10 + 36) != a2 || *(float *)(v16 + 1012) <= 0.0 )
    {
LABEL_68:
      if ( !v15 )
        goto LABEL_67;
    }
    else
    {
      v25 = v15;
      v26 = sub_16EA84(0, 1);
      v18 = v21;
      if ( !(v26 | v25) )
      {
LABEL_67:
        v15 = 0;
        v23 = 1;
        goto LABEL_70;
      }
    }
    v23 = 1;
    v15 = 1;
    *(_BYTE *)(v10 + 362) = 1;
LABEL_70:
    v27 = *(_DWORD *)(v10 + 268);
    v28 = v27 == a2;
    if ( v27 == a2 )
      v28 = *(_BYTE *)(v10 + 362) == 0;
    if ( v28 && *(_BYTE *)(v10 + 363) )
    {
      v40 = *(_DWORD *)(v10 + 36);
      if ( !v40 || v40 == a2 )
      {
        if ( (v7 & 0x4000) == 0 )
          v23 = 1;
      }
      else if ( (v7 & 0x4000) == 0 && v40 == *(_DWORD *)(v19 + 80) )
      {
        v23 = 1;
      }
    }
    if ( *(_DWORD *)(v10 + 276) == a2 )
    {
      v29 = 3;
      v47 = v18;
      if ( !(v7 << 31) )
        v29 = 1;
      v30 = v15;
      v31 = *(_DWORD *)(v10 + 272);
      v32 = (v31 == a2) | (COERCE_FLOAT(sub_1706F8(0, v29)) > 0.0);
      if ( v32 || *(_DWORD *)(v10 + 36) == a2 )
      {
        v30 |= v32;
        *(_DWORD *)(v10 + 272) = a2;
        sub_166ECC(a2, v19);
        if ( !(v32 ^ 1 | ((unsigned __int16)(v7 & 0x2000) >> 13)) )
          sub_166F3C(a2, v19);
        *(_DWORD *)(v10 + 56) = 15;
      }
      v18 = v47;
      v15 = v30;
      v16 = v50;
    }
    if ( *(_DWORD *)(v10 + 36) == a2 )
    {
      if ( v15 )
        *(_BYTE *)(v10 + 50) = 1;
      v33 = *(_DWORD *)(v10 + 76);
      if ( v33 == 2 )
      {
        if ( *(_DWORD *)(v10 + 276) != a2 )
        {
          v37 = v15;
          v38 = v18;
          sub_166FD0();
          v18 = v38;
          v15 = v37;
        }
      }
      else if ( v33 == 1 )
      {
        if ( *(_BYTE *)(v10 + 48) )
        {
          v34 = *(float *)(v16 + 228) - v45[1];
          *(float *)(v10 + 64) = *(float *)(v16 + 224) - *v45;
          *(float *)(v10 + 68) = v34;
        }
        v35 = *(_BYTE *)(v16 + 232);
        if ( v35 )
        {
          v35 = 1;
          v36 = v15;
        }
        else
        {
          v41 = (((unsigned __int8)(v7 & 2) >> 1) ^ 1 | v23 ^ 1) == 0;
          if ( !(((unsigned __int8)(v7 & 2) >> 1) ^ 1 | v23 ^ 1) )
            v41 = *(_BYTE *)(v10 + 876) == 0;
          if ( v41 )
          {
            v36 = v15;
            if ( (v7 & 0x10) != 0 )
            {
              v43 = *(unsigned __int8 *)(v16 + 1004);
              if ( *(_BYTE *)(v16 + 1004) )
                v43 = 1;
            }
            else
            {
              v43 = 0;
            }
            if ( v7 << 31 )
              v44 = *v48 < *(float *)(v16 + 136);
            else
              v44 = 1;
            v42 = v18;
            if ( !v43 )
              v36 = v44 | v15;
          }
          else
          {
            v42 = v18;
            v36 = v15;
          }
          sub_166FD0();
          v18 = v42;
        }
        if ( (v7 & 0x2000) == 0 )
          *(_BYTE *)(v10 + 362) = 1;
        v15 = v36;
        goto LABEL_95;
      }
    }
    v35 = 0;
LABEL_95:
    if ( v18 )
      *v18 = v23;
    if ( v49 )
      *v49 = v35;
    return v15;
  }
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( *(_DWORD *)(v10 + 36) == a2 )
    sub_166FD0();
  return 0;
}


// ======================================================================
// ADDR: 0x17b1a4
// SYMBOL: sub_17B1A4
int __fastcall sub_17B1A4(int a1, float *a2)
{
  float v3; // s8
  int v4; // r9
  int v5; // r8
  float v6; // s4
  float v7; // s0
  float v8; // s2
  int v9; // r6
  int v10; // r4
  int v11; // r0
  unsigned int v12; // r3
  float v13; // s0
  float v14; // s18
  unsigned int v15; // r5
  float *v16; // r0
  float v17; // s16
  float v18; // s4
  float *v19; // r0
  float v21; // [sp+4h] [bp-54h] BYREF
  float v22; // [sp+8h] [bp-50h]
  float v23; // [sp+Ch] [bp-4Ch] BYREF
  float v24; // [sp+10h] [bp-48h]
  float v25; // [sp+14h] [bp-44h] BYREF
  float v26; // [sp+18h] [bp-40h]
  char v27; // [sp+1Eh] [bp-3Ah] BYREF
  char v28; // [sp+1Fh] [bp-39h] BYREF
  __int64 v29; // [sp+20h] [bp-38h] BYREF
  float v30; // [sp+28h] [bp-30h]
  float v31; // [sp+2Ch] [bp-2Ch]

  v3 = a2[1];
  v4 = dword_381B58 + 5456;
  v5 = *(_DWORD *)(dword_381B58 + 6572);
  v6 = *(float *)(dword_381B58 + 6344);
  v7 = *(float *)(dword_381B58 + 5456) + *(float *)(dword_381B58 + 5456);
  v8 = *(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460);
  v29 = *(_QWORD *)a2;
  v31 = (float)(v6 + v3) + v8;
  v30 = (float)(v6 + *(float *)&v29) + v7;
  v9 = sub_167164(&v29, a1, 0);
  v10 = sub_17AD64((float *)&v29, a1, &v28, &v27, 0);
  if ( v9 )
  {
    v11 = 23;
    if ( !v27 )
      v11 = 22;
    v12 = sub_16586C(v11, 1.0);
    v25 = (float)(*(float *)&v29 + v30) * 0.5;
    v26 = (float)(*((float *)&v29 + 1) + v31) * 0.5;
    if ( v28 )
    {
      v13 = (float)(*(float *)(v4 + 888) * 0.5) + 1.0;
      if ( v13 <= 2.0 )
        v13 = 2.0;
      sub_17457C(*(_DWORD *)(v5 + 636), (int)&v25, v13, v12, 12);
    }
    v14 = *(float *)(v4 + 888);
    v15 = sub_16586C(0, 1.0);
    v16 = *(float **)(v5 + 636);
    v17 = (float)((float)(v14 * 0.5) * 0.7071) + -1.0;
    v26 = v26 + -0.5;
    v18 = v17 + (float)(v25 + -0.5);
    v25 = v25 + -0.5;
    v24 = v17 + v26;
    v22 = v26 - v17;
    v23 = v18;
    v21 = v25 - v17;
    sub_173FCC(v16, &v23, &v21, v15, 1.0);
    v19 = *(float **)(v5 + 636);
    v23 = v17 + v25;
    v24 = v26 - v17;
    v22 = v17 + v26;
    v21 = v25 - v17;
    sub_173FCC(v19, &v23, &v21, v15, 1.0);
  }
  return v10;
}


// ======================================================================
// ADDR: 0x17b36c
// SYMBOL: sub_17B36C
int __fastcall sub_17B36C(int a1, float *a2)
{
  float v3; // s8
  float *v4; // r4
  int v5; // r8
  float v6; // s4
  float v7; // s0
  float v8; // s2
  int v9; // r5
  int v10; // r1
  int v11; // r0
  unsigned int v12; // r0
  float v13; // s0
  float v14; // s2
  int v15; // r2
  float v16; // s0
  float v17; // s2
  float v19[2]; // [sp+4h] [bp-34h] BYREF
  unsigned __int8 v20; // [sp+Eh] [bp-2Ah] BYREF
  unsigned __int8 v21; // [sp+Fh] [bp-29h] BYREF
  __int64 v22; // [sp+10h] [bp-28h] BYREF
  float v23; // [sp+18h] [bp-20h]
  float v24; // [sp+1Ch] [bp-1Ch]

  v3 = a2[1];
  v4 = (float *)(dword_381B58 + 5456);
  v5 = *(_DWORD *)(dword_381B58 + 6572);
  v6 = *(float *)(dword_381B58 + 6344);
  v7 = *(float *)(dword_381B58 + 5456) + *(float *)(dword_381B58 + 5456);
  v8 = *(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460);
  v22 = *(_QWORD *)a2;
  v24 = (float)(v6 + v3) + v8;
  v23 = (float)(v6 + *(float *)&v22) + v7;
  sub_167164(&v22, a1, 0);
  v9 = sub_17AD64((float *)&v22, a1, &v21, (char *)&v20, 0);
  v10 = 22;
  if ( !v21 )
    v10 = 21;
  v11 = v10;
  if ( v21 )
    v11 = 23;
  if ( !v20 )
    v11 = v10;
  v12 = sub_16586C(v11, 1.0);
  v14 = *((float *)&v22 + 1);
  v13 = *(float *)&v22;
  v19[0] = (float)(*(float *)&v22 + v23) * 0.5;
  v19[1] = (float)(*((float *)&v22 + 1) + v24) * 0.5;
  if ( v20 | v21 )
  {
    sub_17457C(*(_DWORD *)(v5 + 636), (int)v19, (float)(v4[222] * 0.5) + 1.0, v12, 12);
    v14 = *((float *)&v22 + 1);
    v13 = *(float *)&v22;
  }
  v15 = 1;
  v16 = v13 + *v4;
  v17 = v14 + v4[1];
  if ( !*(_BYTE *)(v5 + 125) )
    v15 = 3;
  sub_166320(v16, v17, v15, 1.0);
  if ( sub_16EB58() && sub_16EB10(0, -1.0) )
    sub_167F9C(v5);
  return v9;
}


// ======================================================================
// ADDR: 0x17b908
// SYMBOL: sub_17B908
int __fastcall sub_17B908(int a1)
{
  int v2; // r5
  int v3; // r6
  char *v4; // r1
  int v5; // r8
  float *v6; // r0
  float v7; // s0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  float v11; // s2
  float v12; // s4
  unsigned int v13; // r6
  __int64 v14; // r2
  float v15; // s2
  float v16; // s4
  int v18; // [sp+10h] [bp-20h] BYREF
  int v19; // [sp+14h] [bp-1Ch]
  float v20; // [sp+18h] [bp-18h]
  float v21; // [sp+1Ch] [bp-14h]

  v2 = 0;
  v3 = *(_DWORD *)(dword_381B58 + 6572);
  v4 = "#SCROLLX";
  if ( a1 )
    v4 = "#SCROLLY";
  v5 = sub_166E8C(*(_DWORD *)(dword_381B58 + 6572), v4, 0);
  sub_166DEC(v5);
  v6 = (float *)(v3 + 4 * a1);
  v7 = v6[28];
  if ( v7 <= 0.0 )
    v2 = 1;
  v8 = 8 * v2;
  if ( a1 )
  {
    v9 = *(_DWORD *)(v3 + 500);
    v10 = *(_DWORD *)(v3 + 504);
    v11 = *(float *)(v3 + 12) + *(float *)(v3 + 20);
    v12 = *(float *)(v3 + 72);
    v21 = *(float *)(v3 + 508);
    v18 = v10;
    v19 = v9;
    v20 = v11 - v12;
    v13 = *(_DWORD *)(v3 + 8);
    if ( v13 << 31 )
      v8 |= ~(v13 >> 9) & 2;
  }
  else
  {
    v8 |= 4u;
    v14 = *(_QWORD *)(v3 + 504);
    v15 = *(float *)(v3 + 16) + *(float *)(v3 + 24);
    v16 = *(float *)(v3 + 72);
    v18 = *(_DWORD *)(v3 + 496);
    v19 = HIDWORD(v14);
    v20 = *(float *)&v14;
    v21 = v15 - v16;
  }
  return sub_17B4C8((float *)&v18, v5, a1, v6 + 22, v6[7] - v7, v6[11], v8);
}


// ======================================================================
// ADDR: 0x17bdb8
// SYMBOL: sub_17BDB8
int __fastcall sub_17BDB8(int result, int a2, float a3, int a4)
{
  float v5; // s0
  int i; // r2
  float v7; // s4
  int v8; // s6
  int v9; // r3

  *(float *)result = a3;
  *(_DWORD *)(result + 8) = 0;
  if ( a4 )
  {
    *(_DWORD *)(result + 24) = 0;
    *(_DWORD *)(result + 28) = 0;
    *(_DWORD *)(result + 32) = 0;
  }
  v5 = 0.0;
  for ( i = 0; i != 12; i += 4 )
  {
    if ( i )
    {
      v7 = *(float *)(result + i + 24);
      if ( v7 > 0.0 )
        v5 = v5 + a3;
    }
    else
    {
      v7 = *(float *)(result + 24);
    }
    v8 = (int)v5;
    v9 = result + i;
    v5 = v5 + v7;
    *(_DWORD *)(v9 + 24) = 0;
    *(float *)(v9 + 12) = (float)v8;
  }
  *(float *)(result + 4) = v5;
  return result;
}


// ======================================================================
