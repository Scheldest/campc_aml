// ADDR: 0x8ba6c
// SYMBOL: sub_8BA6C
int __fastcall sub_8BA6C(_DWORD *a1, int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r5
  int v5; // lr
  int v6; // r2
  int v7; // r12
  int v8; // r4
  int v9; // r5
  int result; // r0

  v2 = a1[91];
  v3 = a1[89] + 1;
  a1[89] = v3;
  v4 = dword_1ACF68;
  v5 = v2 & 5;
  if ( (v2 & 5) == 0 )
    ++a1[90];
  v6 = v4 + 6608;
  v7 = *(_DWORD *)(v4 + 6608);
  if ( v7 == a2 && *(_BYTE *)(v4 + 7128) && (*(_BYTE *)(v4 + 6634) & 2) == 0 && !*(_DWORD *)(v4 + 7108) )
  {
    v8 = 0;
    v9 = *(unsigned __int8 *)(v4 + 249);
    *(_DWORD *)(v6 + 500) = a1;
    if ( !v5 )
      v8 = -1;
    if ( !v9 )
      v8 = 1;
    *(_DWORD *)(v6 + 516) = v8 + a1[90];
  }
  if ( *(_DWORD **)(v6 + 496) != a1 )
    return 0;
  if ( v3 == *(_DWORD *)(v6 + 504) )
    return 1;
  if ( !v5 && a1[90] == *(_DWORD *)(v6 + 508) )
  {
    *(_DWORD *)(v6 + 252) = a2;
    return 1;
  }
  if ( v7 != a2 )
    return 0;
  *(_BYTE *)(v6 + 12) = a2 != 0;
  if ( a2 )
  {
    *(_WORD *)(v6 + 14) = 0;
    *(_DWORD *)(v6 + 8) = 0;
  }
  result = 0;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 36) = 0;
  *(_BYTE *)(v6 + 13) = 0;
  *(_BYTE *)(v6 + 16) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x8bb40
// SYMBOL: sub_8BB40
int __fastcall sub_8BB40(int result)
{
  __int64 v1; // kr00_8

  v1 = *(_QWORD *)(result + 356);
  *(_DWORD *)(result + 356) = v1 - 1;
  *(_DWORD *)(result + 360) = HIDWORD(v1) - 1;
  return result;
}


// ======================================================================
// ADDR: 0xa8554
// SYMBOL: sub_A8554
const char *__fastcall sub_A8554(const char *a1)
{
  int v1; // r1
  const char *v2; // r4
  int v3; // r0
  bool v4; // zf
  const char *v5; // r0
  int v6; // t1
  const char *v7; // r1
  int v8; // r3
  const char *v9; // r2
  const char *v10; // r3
  int v11; // r0
  bool v12; // zf
  bool v13; // zf
  int v14; // r3
  const char *v16; // [sp+0h] [bp-10h]
  const char *v17; // [sp+4h] [bp-Ch]

  v1 = *(unsigned __int8 *)a1;
  v2 = a1;
  if ( *a1 )
  {
    if ( v1 != 37 )
      goto LABEL_6;
    v3 = *((unsigned __int8 *)a1 + 1);
    v4 = v3 == 46;
    if ( v3 == 46 )
      v4 = v2[2] == 48;
    if ( !v4 )
      goto LABEL_6;
    v11 = *((unsigned __int8 *)v2 + 3);
    v12 = v11 == 102;
    if ( v11 == 102 )
      v12 = v2[4] == 0;
    if ( v12 )
    {
      return "%d";
    }
    else
    {
LABEL_6:
      v5 = v2;
      while ( v1 != 37 || v5[1] == 37 )
      {
        if ( v1 == 37 )
          ++v5;
        v6 = *(unsigned __int8 *)++v5;
        v1 = v6;
        if ( !v6 )
          return v2;
      }
      if ( *v5 == 37 )
      {
        v7 = v5 + 1;
        v8 = 37;
        do
        {
          v9 = v7;
          if ( (unsigned int)(v8 - 65) <= 0x19 )
          {
            if ( ((1 << (v8 - 65)) & 0x900) == 0 )
              goto LABEL_19;
          }
          else if ( (unsigned int)(v8 - 97) <= 0x19 && ((1 << (v8 - 97)) & 0x2480A80) == 0 )
          {
LABEL_19:
            v10 = v7;
            if ( v7 <= v5 )
              return v2;
            goto LABEL_27;
          }
          ++v7;
          v8 = *(unsigned __int8 *)v9;
        }
        while ( *v9 );
        v10 = v9;
        if ( v9 <= v5 )
          return v2;
LABEL_27:
        if ( *(v9 - 1) == 102 )
        {
          v13 = v5 == v2;
          if ( v5 == v2 )
            v13 = *v10 == 0;
          if ( v13 )
          {
            return "%d";
          }
          else
          {
            v16 = v2;
            v17 = v10;
            v14 = v5 - v2;
            v2 = (const char *)(dword_1ACF68 + 12096);
            sub_886C0((char *)(dword_1ACF68 + 12096), 3073, "%.*s%%d%s", v14, v16, v17);
          }
        }
      }
    }
  }
  return v2;
}


// ======================================================================
// ADDR: 0xa864c
// SYMBOL: sub_A864C
int __fastcall sub_A864C(int a1, int a2, int a3, int a4, int *a5, const char *a6)
{
  const char *v10; // r4
  int v11; // r8
  int v12; // r9
  int v13; // r0
  int *v14; // r3
  const char *v15; // r1
  int v16; // t1
  int v17; // r4
  int v18; // r0
  int v19; // r2
  double *v20; // r5
  int v21; // r2
  float v22; // s2
  int v23; // r0
  int v24; // r4
  int v26; // [sp+10h] [bp-70h]
  int v27; // [sp+14h] [bp-6Ch]
  float v28[2]; // [sp+18h] [bp-68h] BYREF
  char v29[32]; // [sp+20h] [bp-60h] BYREF
  char v30[32]; // [sp+40h] [bp-40h] BYREF

  v10 = a6;
  v11 = dword_1ACF68;
  v12 = *(_DWORD *)(dword_1ACF68 + 11432);
  v27 = dword_1ACF68 + 6572;
  if ( v12 != a2 )
    sub_8B080();
  v13 = *(unsigned __int8 *)a6;
  v14 = a5;
  v26 = a3;
  if ( !*a6 )
    goto LABEL_21;
  v15 = a6;
  while ( v13 != 37 || v15[1] == 37 )
  {
    if ( v13 == 37 )
      ++v15;
    v16 = *(unsigned __int8 *)++v15;
    v13 = v16;
    if ( !v16 )
      goto LABEL_21;
  }
  v17 = 37;
  v18 = 1;
  while ( 1 )
  {
    if ( (unsigned int)(v17 - 65) <= 0x19 )
    {
      if ( ((1 << (v17 - 65)) & 0x900) == 0 )
        break;
      goto LABEL_12;
    }
    if ( (unsigned int)(v17 - 97) <= 0x19 && ((1 << (v17 - 97)) & 0x2480A80) == 0 )
      break;
LABEL_12:
    v17 = (unsigned __int8)v15[v18++];
    if ( !v17 )
      goto LABEL_20;
  }
  if ( !v15[v18] )
  {
LABEL_20:
    v10 = v15;
    goto LABEL_21;
  }
  v10 = v30;
  v19 = v18 + 1;
  if ( (unsigned int)(v18 + 1) >= 0x20 )
    v19 = 32;
  sub_885C0(v30, v15, v19);
  v14 = a5;
LABEL_21:
  v20 = (double *)v14;
  sub_A819C(v29, 32, a4, v14, v10);
  sub_8865A((int)v29);
  *(_QWORD *)(*(_DWORD *)v27 + 200) = *(_QWORD *)a1;
  v21 = 2097169;
  if ( (a4 & 0xFFFFFFFE) == 8 )
    v21 = 2228240;
  v22 = *(float *)(a1 + 12) - *(float *)(a1 + 4);
  v28[0] = *(float *)(a1 + 8) - *(float *)a1;
  v28[1] = v22;
  v23 = sub_AB8BC(v26, 0, v29, 32, v28, v21, 0, 0);
  if ( v12 != a2 )
    *(_DWORD *)(v11 + 11432) = *(_DWORD *)(v27 + 36);
  v24 = 0;
  if ( v23 && sub_A8214(v29, *(const char **)(v27 + 1116), a4, v20, 0) )
  {
    sub_8B0DC();
    return 1;
  }
  return v24;
}


// ======================================================================
// ADDR: 0xa87d4
// SYMBOL: sub_A87D4
int __fastcall sub_A87D4(int a1, int a2, int a3, _BYTE *a4, int *a5, int *a6, int a7, float a8, int a9, int a10)
{
  int v11; // r2
  int result; // r0
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // [sp+20h] [bp-18h] BYREF

  switch ( a3 )
  {
    case 0:
      v11 = *(char *)a5;
      v16 = (char)*a4;
      result = sub_A8978(a1, a2, 4, (int)&v16, v11, *(char *)a6, a7, a8, a9, a10);
      goto LABEL_5;
    case 1:
      v13 = *(unsigned __int8 *)a5;
      v16 = (unsigned __int8)*a4;
      result = sub_A902C(a1, a2, 5, (int)&v16, v13, *(unsigned __int8 *)a6, a7, a8, a9, a10);
LABEL_5:
      if ( result )
        *a4 = v16;
      return result;
    case 2:
      v14 = *(__int16 *)a5;
      v16 = *(__int16 *)a4;
      result = sub_A8978(a1, a2, 4, (int)&v16, v14, *(__int16 *)a6, a7, a8, a9, a10);
      goto LABEL_10;
    case 3:
      v15 = *(unsigned __int16 *)a5;
      v16 = *(unsigned __int16 *)a4;
      result = sub_A902C(a1, a2, 5, (int)&v16, v15, *(unsigned __int16 *)a6, a7, a8, a9, a10);
LABEL_10:
      if ( result )
        *(_WORD *)a4 = v16;
      break;
    case 4:
      result = sub_A8978(a1, a2, 4, (int)a4, *a5, *a6, a7, a8, a9, a10);
      break;
    case 5:
      result = sub_A902C(a1, a2, 5, (int)a4, *a5, *a6, a7, a8, a9, a10);
      break;
    case 6:
      result = sub_A95B0(a1, a2, 6, (int)a4, *a5, a5[1], *a6, a6[1], a7, a8, a9, a10);
      break;
    case 7:
      result = sub_A9EE0(a1, a2, 7, (int)a4, *a5, a5[1], *a6, a6[1], a7, a8, a9, a10);
      break;
    case 8:
      result = sub_AA5A8(a1, a2, 8, (int)a4, *(float *)a5, *(float *)a6, a7, a8, a9, a10);
      break;
    case 9:
      result = sub_AAC70(a1, a2, 9, (int)a4, *(double *)a5, *(double *)a6, a7, a8, a9, a10);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ======================================================================
