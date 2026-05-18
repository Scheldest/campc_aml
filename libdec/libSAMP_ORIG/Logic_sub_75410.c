// ADDR: 0x7178c
// SYMBOL: sub_7178C
int __fastcall sub_7178C(int a1, __int64 *a2, __int64 *a3, unsigned __int8 *a4, int a5, float a6, int a7)
{
  unsigned int v8; // r6
  unsigned int v9; // r0
  float v10; // s16
  __int64 v12; // d17
  const char *v13; // r11
  unsigned int v14; // r9
  int v15; // r8
  int v16; // r1
  int v17; // s0
  float v18; // s0
  unsigned int v19; // r0
  int v20; // r1
  int v21; // s0
  char *v22; // r0
  __int64 v24; // [sp+10h] [bp-58h] BYREF
  __int64 v25; // [sp+18h] [bp-50h]
  __int64 v26; // [sp+20h] [bp-48h] BYREF
  int v27; // [sp+28h] [bp-40h] BYREF
  char dest[4]; // [sp+2Ch] [bp-3Ch] BYREF
  char v29; // [sp+32h] [bp-36h]
  int v30; // [sp+34h] [bp-34h]

  v8 = *a4;
  v9 = *((_DWORD *)a4 + 1);
  if ( (v8 & 1) == 0 )
    v9 = v8 >> 1;
  if ( v9 )
  {
    v10 = a6;
    if ( a6 == 0.0 )
      v10 = *(float *)(*(_DWORD *)(a1 + 8) + 16);
    v26 = *a2;
    v12 = a3[1];
    v13 = (const char *)*((_DWORD *)a4 + 2);
    v24 = *a3;
    v25 = v12;
    if ( (v8 & 1) == 0 )
      v13 = (const char *)(a4 + 1);
    v14 = (unsigned int)&v13[v9];
    v15 = (int)v13;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = *(unsigned __int8 *)v13;
        if ( v19 > 9 )
          break;
        if ( v19 == 9 )
        {
          if ( v13 == (const char *)v15 )
          {
            v18 = *(float *)&v26;
          }
          else
          {
            sub_715D0(a1, (float *)&v26, (int)&v24, v15, (int)v13, a5, SLODWORD(v10), 0);
            v16 = *(_DWORD *)(a1 + 8);
            v17 = LODWORD(v10);
            if ( v10 == 0.0 )
              v17 = *(_DWORD *)(v16 + 16);
            sub_A3980((int)dest, v16, v17, 2139095039, 0.0, v15, (int)v13, 0);
            v18 = *(float *)dest + *(float *)&v26;
          }
          *(float *)&v26 = v10 + v18;
          goto LABEL_13;
        }
        if ( !*v13 )
        {
          if ( v13 != (const char *)v15 )
            sub_715D0(a1, (float *)&v26, (int)&v24, v15, (int)v13, a5, SLODWORD(v10), a7);
          return v30;
        }
LABEL_14:
        ++v13;
      }
      if ( v19 == 10 )
      {
        if ( v13 != (const char *)v15 )
          sub_715D0(a1, (float *)&v26, (int)&v24, v15, (int)v13, a5, SLODWORD(v10), a7);
        LODWORD(v26) = *(_DWORD *)a2;
        *((float *)&v26 + 1) = v10 + *((float *)&v26 + 1);
LABEL_13:
        v15 = (int)(v13 + 1);
        goto LABEL_14;
      }
      if ( v19 != 123 || (unsigned int)(v13 + 7) >= v14 || v13[7] != 125 )
        goto LABEL_14;
      if ( v13 != (const char *)v15 )
      {
        sub_715D0(a1, (float *)&v26, (int)&v24, v15, (int)v13, a5, SLODWORD(v10), a7);
        v20 = *(_DWORD *)(a1 + 8);
        v21 = LODWORD(v10);
        if ( v10 == 0.0 )
          v21 = *(_DWORD *)(v20 + 16);
        sub_A3980((int)dest, v20, v21, 2139095039, 0.0, v15, (int)v13, 0);
        *(float *)&v26 = *(float *)dest + *(float *)&v26;
      }
      v22 = strncpy(dest, v13 + 1, 6u);
      v29 = 0;
      v27 = 0;
      if ( sscanf(v22, "%x", &v27) > 0 )
      {
        HIDWORD(v25) = 1065353216;
        *(float *)&v25 = (float)(unsigned __int8)v27 / 255.0;
        *((float *)&v24 + 1) = (float)BYTE1(v27) / 255.0;
        *(float *)&v24 = (float)BYTE2(v27) / 255.0;
      }
      v15 = (int)(v13 + 8);
      v13 += 8;
    }
  }
  return v30;
}


// ======================================================================
// ADDR: 0x719ec
// SYMBOL: sub_719EC
int __fastcall sub_719EC(float *a1, int a2, unsigned __int8 *a3, float a4)
{
  unsigned int v6; // r4
  unsigned int v7; // r1
  int v8; // s22
  float v9; // s20
  float v10; // s18
  float v11; // s16
  int v12; // r0
  unsigned int v13; // r11
  unsigned __int8 *i; // r8
  unsigned int v15; // r1
  int v16; // r1
  int v17; // s0
  int v18; // r1
  int v19; // s0
  int v20; // r1
  int v21; // s0
  int v22; // r1
  float v24; // [sp+14h] [bp-54h] BYREF
  float v25; // [sp+18h] [bp-50h]
  int v26; // [sp+1Ch] [bp-4Ch]

  v6 = *a3;
  v7 = *((_DWORD *)a3 + 1);
  *a1 = 0.0;
  a1[1] = 0.0;
  if ( (v6 & 1) == 0 )
    v7 = v6 >> 1;
  if ( v7 )
  {
    *(float *)&v8 = a4;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    if ( a4 == 0.0 )
      v8 = *(int *)(*(_DWORD *)(a2 + 8) + 16);
    v12 = *((_DWORD *)a3 + 2);
    if ( (v6 & 1) == 0 )
      v12 = (int)(a3 + 1);
    v13 = v12 + v7;
    for ( i = (unsigned __int8 *)v12; ; i += 8 )
    {
      while ( 1 )
      {
        v15 = *i;
        if ( v15 > 9 )
          break;
        if ( v15 == 9 )
        {
          if ( i != (unsigned __int8 *)v12 )
          {
            v18 = *(_DWORD *)(a2 + 8);
            v19 = v8;
            if ( *(float *)&v8 == 0.0 )
              v19 = *(_DWORD *)(v18 + 16);
            sub_A3980((int)&v24, v18, v19, 2139095039, 0.0, v12, (int)i, 0);
            v10 = v10 + v24;
            if ( v11 == 0.0 )
              v11 = v25;
          }
          v10 = *(float *)&v8 + v10;
          v12 = (int)(i + 1);
        }
        else if ( !*i )
        {
          if ( i != (unsigned __int8 *)v12 )
          {
            v22 = *(_DWORD *)(a2 + 8);
            if ( *(float *)&v8 == 0.0 )
              v8 = *(int *)(v22 + 16);
            sub_A3980((int)&v24, v22, v8, 2139095039, 0.0, v12, (int)i, 0);
            v10 = v10 + v24;
            if ( v11 == 0.0 )
              v11 = v25;
          }
          if ( v11 <= 0.0 )
            v11 = 0.0;
          if ( v9 >= v10 )
            v10 = v9;
          *a1 = v10;
          a1[1] = v11;
          return v26;
        }
LABEL_10:
        ++i;
      }
      if ( v15 == 10 )
      {
        if ( i != (unsigned __int8 *)v12 )
        {
          v20 = *(_DWORD *)(a2 + 8);
          v21 = v8;
          if ( *(float *)&v8 == 0.0 )
            v21 = *(_DWORD *)(v20 + 16);
          sub_A3980((int)&v24, v20, v21, 2139095039, 0.0, v12, (int)i, 0);
          v10 = v10 + v24;
          if ( v11 == 0.0 )
            v11 = v25;
        }
        v12 = (int)(i + 1);
        if ( v9 >= v10 )
          v10 = v9;
        v11 = *(float *)&v8 + v11;
        *a1 = v10;
        v9 = v10;
        v10 = 0.0;
        goto LABEL_10;
      }
      if ( v15 != 123 || (unsigned int)(i + 7) >= v13 || i[7] != 125 )
        goto LABEL_10;
      if ( i != (unsigned __int8 *)v12 )
      {
        v16 = *(_DWORD *)(a2 + 8);
        v17 = v8;
        if ( *(float *)&v8 == 0.0 )
          v17 = *(_DWORD *)(v16 + 16);
        sub_A3980((int)&v24, v16, v17, 2139095039, 0.0, v12, (int)i, 0);
        v10 = v10 + v24;
        if ( v11 == 0.0 )
          v11 = v25;
      }
      v12 = (int)(i + 8);
    }
  }
  return v26;
}


// ======================================================================
// ADDR: 0x75b68
// SYMBOL: sub_75B68
const char *__fastcall sub_75B68(int a1, unsigned int a2)
{
  if ( a2 > 0x38 )
    return "J";
  else
    return off_110A74[(char)a2];
}


// ======================================================================
// ADDR: 0x87f38
// SYMBOL: sub_87F38
__int16 *__fastcall sub_87F38(int a1)
{
  int v1; // r2
  __int16 *v2; // r1
  int v3; // r4
  char v4; // r3
  int v5; // r3
  unsigned int v6; // r4
  unsigned int v7; // r4

  v1 = 0;
  v2 = &word_1ABF68;
LABEL_2:
  v3 = a1 + 1;
  while ( 1 )
  {
    v4 = *(_BYTE *)(v3 - 1);
    if ( !v4 )
      break;
    a1 = v3;
    if ( (*(_BYTE *)(v3 - 1) & 0x80) == 0 )
    {
      *(_BYTE *)v2 = v4;
      v2 = (__int16 *)((char *)v2 + 1);
      goto LABEL_10;
    }
    v5 = v4 & 0x7F;
    ++v3;
    if ( v5 != 24 )
    {
      v6 = dword_52B88[v5];
      *v2 = v6;
      v7 = HIWORD(v6);
      if ( v7 )
      {
        *((_BYTE *)v2 + 2) = v7;
        v2 = (__int16 *)((char *)v2 + 3);
      }
      else
      {
        ++v2;
      }
LABEL_10:
      if ( ++v1 != 4096 )
        goto LABEL_2;
      break;
    }
  }
  *(_BYTE *)v2 = 0;
  return &word_1ABF68;
}


// ======================================================================
