// ADDR: 0xe33a4
// SYMBOL: sub_E33A4
int __fastcall sub_E33A4(char *a1, signed int a2, int a3)
{
  signed int v6; // r4
  int v7; // r6
  int v8; // r0
  signed int v9; // r5
  int v10; // r2
  signed int v11; // r1
  int v12; // r3
  char *v13; // r0
  char *v14; // r1
  int v15; // t1
  char src[544]; // [sp+8h] [bp-220h] BYREF

  v6 = strlen(a1);
  sub_22178C((int)src, 0x200u);
  if ( strlen(a1) > 0x200 )
    return -1;
  if ( v6 <= a2 )
    return 1;
  v8 = 0;
  v7 = 1;
  v9 = a2;
  do
  {
    v10 = v8 + a2;
    v11 = a2;
    if ( a1[v8 + a2] != 32 )
    {
      v11 = a2;
      while ( v11 )
      {
        v12 = (unsigned __int8)a1[v8 - 1 + v11--];
        if ( v12 == 32 )
          goto LABEL_11;
      }
      v11 = 0;
LABEL_11:
      v10 = v11 + v8;
    }
    if ( v9 - v10 <= a3 )
    {
      a1[v10] = 10;
      v8 = v10;
    }
    else
    {
      v13 = &a1[v9];
      v14 = src;
      do
      {
        v15 = (unsigned __int8)*v13++;
        *v14++ = v15;
      }
      while ( v15 );
      *(_WORD *)&a1[v9] = 10;
      strcat(a1, src);
      v8 = v9 + 1;
      v11 = a2;
    }
    v6 -= v11;
    v9 = v8 + a2;
    ++v7;
  }
  while ( v6 > a2 );
  return v7;
}


// ======================================================================
// ADDR: 0xf0b30
// SYMBOL: sub_F0B30
int sub_F0B30()
{
  struct timeval v1; // [sp+0h] [bp-10h] BYREF

  gettimeofday(&v1, 0);
  return v1.tv_usec / 1000 + 1000 * v1.tv_sec;
}


// ======================================================================
// ADDR: 0x164d04
// SYMBOL: sub_164D04
_DWORD *__fastcall sub_164D04(_DWORD *result, unsigned __int8 *a2, int a3)
{
  int v3; // r5
  int v5; // r8
  __int16 v6; // [sp+2h] [bp-1Eh] BYREF
  char v7[28]; // [sp+4h] [bp-1Ch] BYREF

  *result = 0;
  result[1] = 0;
  result[2] = 0;
  if ( a3 )
  {
    v3 = a3;
    v5 = (int)result;
    do
    {
      v6 = *a2;
      *(_DWORD *)v7 = 0;
      sub_164D6C(v7, &v6);
      result = (_DWORD *)std::string::append(v5, v7);
      --v3;
      ++a2;
    }
    while ( v3 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x165778
// SYMBOL: sub_165778
int __fastcall sub_165778(float *a1)
{
  float v1; // s4
  float v2; // s8
  float v3; // s2
  float v4; // s10
  float v5; // s6
  float v6; // s12
  float v7; // s14
  float v8; // s1

  v1 = a1[1];
  v2 = a1[3];
  v3 = *a1;
  v4 = v1;
  v5 = a1[2];
  v6 = v2;
  v7 = *a1;
  v8 = v5;
  if ( v1 > 1.0 )
    v4 = 1.0;
  if ( v2 > 1.0 )
    v6 = 1.0;
  if ( v3 > 1.0 )
    v7 = 1.0;
  if ( v5 > 1.0 )
    v8 = 1.0;
  if ( v1 < 0.0 )
    v4 = 0.0;
  if ( v2 < 0.0 )
    v6 = 0.0;
  if ( v3 < 0.0 )
    v7 = 0.0;
  if ( v5 < 0.0 )
    v8 = 0.0;
  return (int)(float)((float)(v7 * 255.0) + 0.5) | ((int)(float)((float)(v4 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v8 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v6 * 255.0) + 0.5) << 24);
}


// ======================================================================
