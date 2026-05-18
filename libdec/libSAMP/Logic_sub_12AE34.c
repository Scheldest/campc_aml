// ADDR: 0x12aca8
// SYMBOL: sub_12ACA8
int __fastcall sub_12ACA8(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // s16
  int v10; // r6
  float *v11; // r9
  float v12; // s0
  __int64 v13; // kr00_8
  float v14; // s18
  int v15; // r0
  __int64 v16; // r4
  int v17; // r1
  int v18; // r0
  __int64 v19; // r4
  int v20; // r1
  int v21; // r0
  __int64 v22; // r4
  int v23; // r1
  int v24; // r0
  __int64 v25; // r4
  int v26; // r0
  int v28; // [sp+18h] [bp-60h]
  __int64 v29; // [sp+20h] [bp-58h] BYREF
  __int64 v30; // [sp+28h] [bp-50h]
  float v31; // [sp+30h] [bp-48h] BYREF
  float v32; // [sp+34h] [bp-44h]

  v7 = a7;
  v10 = a5;
  v11 = (float *)a2;
  if ( *(float *)&a7 == 0.0 )
  {
    a2 = *(_DWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a2 + 16);
  }
  if ( a6 )
  {
    v12 = *v11;
    v13 = *(_QWORD *)(a1 + 4);
    v29 = 0LL;
    v30 = 0x3F80000000000000LL;
    v14 = *(float *)&dword_238EC4;
    v32 = v11[1];
    v28 = a3;
    v31 = *(float *)&dword_238EC4 + v12;
    v15 = sub_165778(&v29, dword_12AE20);
    sub_1745E0(v13, SHIDWORD(v13), v7, (int)&v31, v15, a4, a5, 0.0, 0);
    v16 = *(_QWORD *)(a1 + 4);
    v29 = 0LL;
    v30 = 0x3F80000000000000LL;
    v31 = (float)(v31 - v14) - v14;
    v18 = sub_165778(&v29, v17);
    sub_1745E0(v16, SHIDWORD(v16), v7, (int)&v31, v18, a4, a5, 0.0, 0);
    v19 = *(_QWORD *)(a1 + 4);
    v29 = 0LL;
    v30 = 0x3F80000000000000LL;
    v31 = v14 + v31;
    v32 = v14 + v32;
    v21 = sub_165778(&v29, v20);
    sub_1745E0(v19, SHIDWORD(v19), v7, (int)&v31, v21, a4, a5, 0.0, 0);
    v22 = *(_QWORD *)(a1 + 4);
    v29 = 0LL;
    v30 = 0x3F80000000000000LL;
    v10 = a5;
    v32 = (float)(v32 - v14) - v14;
    v24 = sub_165778(&v29, v23);
    sub_1745E0(v22, SHIDWORD(v22), v7, (int)&v31, v24, a4, a5, 0.0, 0);
    a3 = v28;
  }
  v25 = *(_QWORD *)(a1 + 4);
  v26 = sub_165778(a3, a2);
  return sub_1745E0(v25, SHIDWORD(v25), v7, (int)v11, v26, a4, v10, 0.0, 0);
}


// ======================================================================
// ADDR: 0x12b008
// SYMBOL: sub_12B008
int __fastcall sub_12B008(int a1, const char *a2, int a3, int a4)
{
  int v4; // r5
  char *v6; // r0
  unsigned int v7; // s4
  unsigned int v8; // s6
  float v9; // s0
  int v11; // [sp+4h] [bp-14h] BYREF
  char dest[15]; // [sp+9h] [bp-Fh] BYREF

  v4 = 0;
  if ( a3 - (_DWORD)a2 == 6 )
  {
    v6 = strncpy(dest, a2, 6u);
    dest[6] = 0;
    v11 = 0;
    if ( sscanf(v6, "%x", &v11) < 1 )
    {
      return 0;
    }
    else
    {
      v4 = 1;
      v7 = BYTE1(v11);
      v8 = BYTE2(v11);
      v9 = (float)(unsigned __int8)v11;
      *(_DWORD *)(a4 + 12) = 1065353216;
      *(float *)a4 = (float)v8 / 255.0;
      *(float *)(a4 + 4) = (float)v7 / 255.0;
      *(float *)(a4 + 8) = v9 / 255.0;
    }
  }
  return v4;
}


// ======================================================================
// ADDR: 0x178b18
// SYMBOL: sub_178B18
// local variable allocation has failed, the output may be wrong!
unsigned __int8 *__fastcall sub_178B18(
        float *a1,
        int a2,
        float a3,
        float a4,
        float a5,
        const char *a6,
        unsigned int a7,
        unsigned __int8 **a8)
{
  unsigned int v8; // r4
  unsigned __int8 *v9; // r5
  unsigned __int8 **v14; // r1
  float v15; // s16
  float v16; // s0
  unsigned __int8 *result; // r0
  float v18; // s24
  unsigned __int8 *v19; // r6
  float v20; // s18
  float v21; // s28
  float v22; // s30
  int v23; // r0
  unsigned int v24; // r1
  int v25; // r0
  unsigned __int8 *v26; // r2
  float *v27; // r2
  float v28; // s2
  unsigned __int8 *v29; // r1
  int v30; // r2
  int v31; // t1
  bool v32; // zf
  unsigned int v33[25]; // [sp+4h] [bp-64h] BYREF

  v8 = a7;
  v9 = (unsigned __int8 *)a6;
  if ( !a7 )
    v8 = (unsigned int)&a6[strlen(a6)];
  v14 = a8;
  v15 = a3;
  v16 = *(float *)(a2 + 16);
  result = 0;
  *a1 = 0.0;
  a1[1] = 0.0;
  if ( v8 <= (unsigned int)a6 )
  {
    v20 = 0.0;
    goto LABEL_46;
  }
  v18 = a3 / v16;
  v19 = 0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  while ( 1 )
  {
    if ( a5 > 0.0 )
    {
      if ( !v19 )
      {
        result = sub_1789B4((_DWORD *)a2, v15 / v16, v9, v8, a5 - v22);
        v19 = result;
        if ( result == v9 )
          v19 = result + 1;
      }
      if ( v9 >= v19 )
      {
        v20 = v20 + v15;
        if ( v21 < v22 )
        {
          *a1 = v22;
          v21 = v22;
        }
        a1[1] = v20;
        if ( (unsigned int)v9 < v8 )
        {
          result = (unsigned __int8 *)(v8 - (_DWORD)v9);
          v29 = v9;
          while ( 1 )
          {
            v31 = *v29++;
            v30 = v31;
            v32 = v31 == 32;
            if ( v31 != 32 )
              v32 = v30 == 9;
            if ( !v32 )
              break;
            --result;
            v9 = v29;
            if ( !result )
            {
              v19 = 0;
              v9 = (unsigned __int8 *)v8;
              goto LABEL_37;
            }
          }
          if ( v30 == 10 )
            ++v9;
        }
        v19 = 0;
LABEL_37:
        v22 = 0.0;
        goto LABEL_38;
      }
    }
    v23 = (char)*v9;
    v24 = (unsigned __int8)v23;
    v33[0] = (unsigned __int8)v23;
    if ( v23 < 0 )
    {
      v25 = sub_165308((int *)v33, v9, v8);
      v24 = v33[0];
      result = &v9[v25];
      v26 = result;
      if ( !v33[0] )
        goto LABEL_41;
    }
    else
    {
      result = v9 + 1;
    }
    if ( v24 > 0x1F )
      break;
    if ( v24 != 13 )
    {
      if ( v24 == 10 )
      {
        v20 = v20 + v15;
        if ( v21 >= v22 )
          v22 = v21;
        *a1 = v22;
        v21 = v22;
        v22 = 0.0;
        a1[1] = v20;
        goto LABEL_23;
      }
      break;
    }
LABEL_23:
    v9 = result;
LABEL_38:
    if ( (unsigned int)v9 >= v8 )
      goto LABEL_42;
  }
  v27 = (float *)(a2 + 12);
  if ( (signed int)v24 < *(_DWORD *)a2 )
    v27 = (float *)(*(_DWORD *)(a2 + 8) + 4 * v24);
  v28 = *v27;
  v26 = v9;
  if ( (float)(v22 + (float)(v18 * v28)) < a4 )
  {
    v22 = v22 + (float)(v18 * v28);
    goto LABEL_23;
  }
LABEL_41:
  v9 = v26;
LABEL_42:
  v14 = a8;
  if ( v21 < v22 )
    *a1 = v22;
  if ( v22 > 0.0 || v20 == 0.0 )
LABEL_46:
    a1[1] = v20 + v15;
  if ( v14 )
    *v14 = v9;
  return result;
}


// ======================================================================
