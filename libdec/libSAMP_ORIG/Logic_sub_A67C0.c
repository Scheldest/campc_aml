// ADDR: 0x89a94
// SYMBOL: sub_89A94
char *__fastcall sub_89A94(char *result, float *a2, char *a3, unsigned int a4, float *a5, float *a6, float *a7)
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
          goto LABEL_10;
      }
      else if ( !result[(_DWORD)a3] )
      {
        v9 = &result[(_DWORD)a3];
LABEL_10:
        if ( v9 == a3 )
          return result;
        goto LABEL_13;
      }
      ++result;
      ++v9;
    }
    while ( (char *)(a4 - (_DWORD)a3) != result );
    v9 = (char *)a4;
    if ( (char *)a4 == a3 )
      return result;
LABEL_13:
    v10 = dword_1ACF68;
    sub_895D4(*(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 636), v7, a2, (int)a3, (int)v9, a5, a6, a7);
    result = (char *)*(unsigned __int8 *)(v10 + 11552);
    if ( *(_BYTE *)(v10 + 11552) )
      return sub_892E0((int)v7, a3, (int)v9);
  }
  return result;
}


// ======================================================================
// ADDR: 0x8aad4
// SYMBOL: sub_8AAD4
int __fastcall sub_8AAD4(int a1, unsigned int a2, unsigned int a3)
{
  bool v3; // zf
  int v4; // r12
  int v5; // r4
  unsigned __int8 *v6; // r2
  int v7; // r0
  bool v8; // zf
  _BYTE *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r1
  int v12; // r0
  int v13; // r2
  int result; // r0

  v3 = a3 == 0;
  v4 = ~*(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * *(_DWORD *)(a1 + 452) - 4);
  if ( a3 )
    v3 = a3 == a2;
  if ( v3 )
  {
    v5 = *(unsigned __int8 *)a2;
    if ( *(_BYTE *)a2 )
    {
      v6 = (unsigned __int8 *)(a2 + 1);
      v11 = ~*(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * *(_DWORD *)(a1 + 452) - 4);
      do
      {
        v7 = v5;
        v5 = *v6;
        v8 = v7 == 35;
        if ( v7 == 35 )
          v8 = v5 == 35;
        if ( v8 )
        {
          v5 = 35;
          if ( v6[1] == 35 )
            v11 = v4;
        }
        ++v6;
        v11 = dword_52D88[v7 ^ (unsigned __int8)v11] ^ (v11 >> 8);
      }
      while ( v5 );
    }
    else
    {
      v11 = ~*(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * *(_DWORD *)(a1 + 452) - 4);
    }
  }
  else
  {
    v9 = (_BYTE *)(a2 + 1);
    v10 = a3 + ~a2;
    v11 = ~*(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * *(_DWORD *)(a1 + 452) - 4);
    do
    {
      v12 = (unsigned __int8)*(v9 - 1);
      if ( v12 == 35 && v10 >= 2 && *v9 == 35 && v9[1] == 35 )
        v11 = v4;
      ++v9;
      --v10;
      v11 = dword_52D88[v12 ^ (unsigned __int8)v11] ^ (v11 >> 8);
    }
    while ( v10 != -1 );
  }
  v13 = dword_1ACF68 + 6608;
  result = ~v11;
  if ( *(_DWORD *)(dword_1ACF68 + 6608) == ~v11 )
    *(_DWORD *)(dword_1ACF68 + 6612) = result;
  if ( *(_DWORD *)(v13 + 44) == result )
    *(_BYTE *)(v13 + 48) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x8b0dc
// SYMBOL: sub_8B0DC
int sub_8B0DC()
{
  int v0; // r2
  int v1; // r1
  int result; // r0

  v0 = *(_DWORD *)(dword_1ACF68 + 6572);
  v1 = *(_DWORD *)(v0 + 268);
  *(_WORD *)(dword_1ACF68 + 6623) = 257;
  result = v1 | 4;
  *(_DWORD *)(v0 + 268) = v1 | 4;
  return result;
}


// ======================================================================
// ADDR: 0x972c4
// SYMBOL: sub_972C4
float *__fastcall sub_972C4(float *result, float a2, float a3, float a4, float a5)
{
  bool v8; // nf
  int v9; // r1
  int v10; // r3
  int v11; // r4
  float v12; // s6
  float v13; // s8
  int v14; // r3
  float v15; // s8
  float v16; // r2
  float v17; // s6
  float v18; // s2

  v8 = a2 < 0.0;
  v9 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( v8 )
  {
    v10 = *(_DWORD *)(v9 + 448);
    v16 = *(float *)(v9 + 556);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 12);
      v12 = *(float *)(v10 + 20);
      v13 = *(float *)(v10 + 24);
      v14 = *(_DWORD *)(v10 + 68);
      if ( v11 > -2 )
        ++v11;
      v15 = (float)(*(float *)(v9 + 12) + (float)(v12 + (float)((float)(v13 - v12) * *(float *)(v14 + 28 * v11))))
          - *(float *)(v9 + 52);
    }
    else
    {
      v15 = *(float *)(v9 + 552);
    }
  }
  else
  {
    v15 = 0.0;
    v16 = 0.0;
  }
  v17 = a2;
  if ( a2 == 0.0 )
    v17 = a4;
  if ( a2 < 0.0 )
  {
    v17 = (float)(v15 - *(float *)(v9 + 200)) + a2;
    if ( v17 <= 4.0 )
      v17 = 4.0;
  }
  v18 = a3;
  if ( a3 == 0.0 )
    v18 = a5;
  if ( a3 < 0.0 )
  {
    v18 = (float)(v16 - *(float *)(v9 + 204)) + a3;
    if ( v18 <= 4.0 )
      v18 = 4.0;
  }
  *result = v17;
  result[1] = v18;
  return result;
}


// ======================================================================
