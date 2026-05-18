// ADDR: 0x89110
// SYMBOL: sub_89110
int __fastcall sub_89110(int a1, int a2, char *s, unsigned int a4, int a5)
{
  unsigned int v6; // r5
  unsigned int v7; // r0
  char *v8; // r1
  _BYTE *v9; // r8
  float v10; // s6
  float v11; // s2
  float v12; // s4
  float v13; // s8
  float v14; // s10
  float v15; // s12
  float v16; // s14
  float v17; // s1
  _DWORD v19[9]; // [sp+14h] [bp-24h] BYREF

  v6 = a4;
  v19[0] = a1;
  v19[1] = a2;
  if ( a5 )
  {
    if ( !a4 )
      v6 = -1;
    if ( v6 > (unsigned int)s )
    {
      v7 = v6 - (_DWORD)s;
      v8 = s;
      while ( 1 )
      {
        if ( *v8 == 35 )
        {
          if ( v8[1] == 35 )
            goto LABEL_10;
        }
        else if ( !*v8 )
        {
LABEL_10:
          v6 = (unsigned int)v8;
          goto LABEL_13;
        }
        --v7;
        ++v8;
        if ( !v7 )
          goto LABEL_13;
      }
    }
  }
  else
  {
    if ( !a4 )
      v6 = (unsigned int)&s[strlen(s)];
LABEL_13:
    if ( (char *)v6 != s )
    {
      v9 = (_BYTE *)(dword_1ACF68 + 11552);
      v10 = *(float *)(dword_1ACF68 + 5576);
      v11 = *(float *)(dword_1ACF68 + 5584) * *(float *)(dword_1ACF68 + 5400);
      v12 = *(float *)(dword_1ACF68 + 5572);
      v13 = *(float *)(dword_1ACF68 + 5580);
      v14 = v10;
      if ( v10 > 1.0 )
        v14 = 1.0;
      v15 = *(float *)(dword_1ACF68 + 5572);
      if ( v12 > 1.0 )
        v15 = 1.0;
      v16 = *(float *)(dword_1ACF68 + 5580);
      if ( v13 > 1.0 )
        v16 = 1.0;
      v17 = *(float *)(dword_1ACF68 + 5584) * *(float *)(dword_1ACF68 + 5400);
      if ( v11 > 1.0 )
        v17 = 1.0;
      if ( v10 < 0.0 )
        v14 = 0.0;
      if ( v12 < 0.0 )
        v15 = 0.0;
      if ( v13 < 0.0 )
        v16 = 0.0;
      if ( v11 < 0.0 )
        v17 = 0.0;
      sub_9D89C(
        *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 636),
        *(_DWORD *)(dword_1ACF68 + 6340),
        *(_DWORD *)(dword_1ACF68 + 6344),
        (int)v19,
        (int)(float)((float)(v15 * 255.0) + 0.5) | ((int)(float)((float)(v14 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v16 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v17 * 255.0) + 0.5) << 24),
        (int)s,
        v6,
        0.0,
        0);
      if ( *v9 )
        sub_892E0((int)v19, s);
    }
  }
  return v19[2];
}


// ======================================================================
// ADDR: 0x8942c
// SYMBOL: sub_8942C
int __fastcall sub_8942C(int a1, int a2, char *s, char *a4, float a5)
{
  char *v6; // r5
  int v7; // r4
  size_t v8; // r0
  float v9; // s8
  float v10; // s4
  float v11; // s6
  float v12; // s10
  float v13; // s12
  float v14; // s14
  float v15; // s1
  float v16; // s3
  _DWORD v18[9]; // [sp+14h] [bp-24h] BYREF

  v6 = a4;
  v7 = dword_1ACF68;
  v18[0] = a1;
  v18[1] = a2;
  if ( a4 )
  {
    if ( a4 == s )
      return v18[2];
  }
  else
  {
    v8 = strlen(s);
    v6 = &s[v8];
    if ( &s[v8] == s )
      return v18[2];
  }
  v9 = *(float *)(dword_1ACF68 + 5576);
  v10 = *(float *)(dword_1ACF68 + 5584) * *(float *)(dword_1ACF68 + 5400);
  v11 = *(float *)(dword_1ACF68 + 5572);
  v12 = *(float *)(dword_1ACF68 + 5580);
  v13 = v9;
  if ( v9 > 1.0 )
    v13 = 1.0;
  v14 = *(float *)(dword_1ACF68 + 5572);
  if ( v11 > 1.0 )
    v14 = 1.0;
  v15 = *(float *)(dword_1ACF68 + 5580);
  if ( v12 > 1.0 )
    v15 = 1.0;
  v16 = *(float *)(dword_1ACF68 + 5584) * *(float *)(dword_1ACF68 + 5400);
  if ( v10 > 1.0 )
    v16 = 1.0;
  if ( v9 < 0.0 )
    v13 = 0.0;
  if ( v11 < 0.0 )
    v14 = 0.0;
  if ( v12 < 0.0 )
    v15 = 0.0;
  if ( v10 < 0.0 )
    v16 = 0.0;
  sub_9D89C(
    *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 636),
    *(_DWORD *)(dword_1ACF68 + 6340),
    *(_DWORD *)(dword_1ACF68 + 6344),
    (int)v18,
    (int)(float)((float)(v14 * 255.0) + 0.5) | ((int)(float)((float)(v13 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v15 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v16 * 255.0) + 0.5) << 24),
    (int)s,
    (int)v6,
    a5,
    0);
  if ( *(_BYTE *)(v7 + 11552) )
    sub_892E0((int)v18, s, (int)v6);
  return v18[2];
}


// ======================================================================
// ADDR: 0x8b6f0
// SYMBOL: sub_8B6F0
bool __fastcall sub_8B6F0(float *a1, int a2, int a3)
{
  float *v3; // r3

  v3 = *(float **)(dword_1ACF68 + 6572);
  return (v3[133] >= a1[3] || v3[135] <= a1[1] || v3[132] >= a1[2] || v3[134] <= *a1)
      && (!a2 || *(_DWORD *)(dword_1ACF68 + 6608) != a2)
      && (a3 || !*(_BYTE *)(dword_1ACF68 + 11552));
}


// ======================================================================
// ADDR: 0x8bb50
// SYMBOL: sub_8BB50
int __fastcall sub_8BB50(float *a1, float a2)
{
  float v2; // s0
  float *v4; // r1
  float v5; // s2
  float v6; // s0

  v2 = a2;
  if ( a2 < 0.0 )
    return 0;
  v4 = *(float **)(dword_1ACF68 + 6572);
  if ( v2 == 0.0 )
  {
    v2 = v4[130];
  }
  else if ( v2 > 0.0 )
  {
    v2 = (float)(v4[3] - v4[20]) + v2;
  }
  v5 = 1.0;
  v6 = v2 - *a1;
  if ( v6 >= 1.0 )
    v5 = v6;
  return LODWORD(v5);
}


// ======================================================================
// ADDR: 0x97894
// SYMBOL: sub_97894
int sub_97894()
{
  return *(_DWORD *)(dword_1ACF68 + 6344);
}


// ======================================================================
