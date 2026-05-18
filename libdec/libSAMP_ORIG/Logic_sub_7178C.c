// ADDR: 0x715d0
// SYMBOL: sub_715D0
int __fastcall sub_715D0(int a1, float *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v11; // s16
  int v13; // r1
  int v14; // r8
  int v15; // r2
  int v16; // r6
  float v17; // s0
  float v18; // s18
  int v19; // r0
  int v20; // r5
  int v21; // r1
  int v22; // r2
  int v23; // r0
  int v24; // r5
  int v25; // r1
  int v26; // r2
  int v27; // r0
  int v28; // r8
  int v29; // r1
  int v30; // r2
  int v31; // r0
  int v32; // r4
  int v33; // r0
  int v35; // [sp+0h] [bp-80h]
  int v36; // [sp+14h] [bp-6Ch]
  int v37; // [sp+18h] [bp-68h]
  float *v38; // [sp+1Ch] [bp-64h]
  __int64 v39; // [sp+20h] [bp-60h] BYREF
  __int64 v40; // [sp+28h] [bp-58h]
  float v41; // [sp+30h] [bp-50h] BYREF
  float v42; // [sp+34h] [bp-4Ch]
  int v43; // [sp+3Ch] [bp-44h]

  v11 = a7;
  v13 = a8;
  v14 = a5;
  v15 = _stack_chk_guard;
  v16 = *(_DWORD *)(a1 + 8);
  if ( *(float *)&a7 == 0.0 )
    v11 = *(_DWORD *)(v16 + 16);
  if ( a8 )
    v16 = a8;
  if ( a6 )
  {
    v17 = *a2;
    v37 = a3;
    v18 = *(float *)&dword_116D5C;
    v36 = *(_DWORD *)(a1 + 4);
    v42 = a2[1];
    v39 = 0LL;
    v40 = 0x3F80000000000000LL;
    v41 = *(float *)&dword_116D5C + v17;
    v19 = sub_88A34(&v39, dword_71770, _stack_chk_guard);
    v38 = a2;
    sub_9D89C(v36, v16, v11, (int)&v41, v19, a4, a5, 0.0, 0);
    v20 = *(_DWORD *)(a1 + 4);
    v39 = 0LL;
    v40 = 0x3F80000000000000LL;
    v41 = (float)(v41 - v18) - v18;
    v23 = sub_88A34(&v39, v21, v22);
    sub_9D89C(v20, v16, v11, (int)&v41, v23, a4, a5, 0.0, 0);
    v24 = *(_DWORD *)(a1 + 4);
    v39 = 0LL;
    v40 = 0x3F80000000000000LL;
    v41 = v18 + v41;
    v42 = v18 + v42;
    v27 = sub_88A34(&v39, v25, v26);
    sub_9D89C(v24, v16, v11, (int)&v41, v27, a4, a5, 0.0, 0);
    v28 = *(_DWORD *)(a1 + 4);
    v39 = 0LL;
    v40 = 0x3F80000000000000LL;
    v42 = (float)(v42 - v18) - v18;
    v35 = sub_88A34(&v39, v29, v30);
    v31 = v28;
    a2 = v38;
    v14 = a5;
    sub_9D89C(v31, v16, v11, (int)&v41, v35, a4, a5, 0.0, 0);
    a3 = v37;
  }
  v32 = *(_DWORD *)(a1 + 4);
  v33 = sub_88A34(a3, v13, v15);
  sub_9D89C(v32, v16, v11, (int)a2, v33, a4, v14, 0.0, 0);
  return v43;
}


// ======================================================================
// ADDR: 0xa3980
// SYMBOL: sub_A3980
// local variable allocation has failed, the output may be wrong!
int __fastcall sub_A3980(
        float *a1,
        int a2,
        float a3,
        float a4,
        float a5,
        const char *a6,
        unsigned int a7,
        unsigned __int8 **a8)
{
  unsigned int v9; // r4
  unsigned __int8 *v10; // r5
  unsigned __int8 **v14; // r1
  float v15; // s16
  float v16; // s0
  float v17; // s24
  unsigned __int8 *v18; // r6
  float v19; // s18
  float v20; // s28
  float v21; // s30
  float *v22; // r2
  float v23; // s2
  unsigned __int8 *v24; // r2
  int v25; // r0
  int v26; // r1
  unsigned __int8 *v27; // r0
  int v28; // r0
  unsigned __int8 *v29; // r0
  unsigned int v30; // r0
  unsigned __int8 *v31; // r1
  int v32; // r2
  int v33; // t1
  bool v34; // zf
  int v36[26]; // [sp+8h] [bp-68h] BYREF

  v9 = a7;
  v10 = (unsigned __int8 *)a6;
  if ( !a7 )
    v9 = (unsigned int)&a6[strlen(a6)];
  v14 = a8;
  v15 = a3;
  v16 = *(float *)(a2 + 16);
  *a1 = 0.0;
  a1[1] = 0.0;
  if ( v9 <= (unsigned int)a6 )
  {
    v19 = 0.0;
    goto LABEL_46;
  }
  v17 = a3 / v16;
  v18 = 0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  while ( 1 )
  {
    if ( a5 > 0.0 )
    {
      if ( v18 )
      {
        if ( v10 >= v18 )
          goto LABEL_26;
      }
      else
      {
        v29 = sub_A37F4((_DWORD *)a2, v15 / v16, v10, v9, a5 - v21);
        v18 = v29;
        if ( v29 == v10 )
          v18 = v29 + 1;
        if ( v10 >= v18 )
        {
LABEL_26:
          v19 = v19 + v15;
          if ( v20 < v21 )
          {
            *a1 = v21;
            v20 = v21;
          }
          a1[1] = v19;
          if ( (unsigned int)v10 < v9 )
          {
            v30 = v9 - (_DWORD)v10;
            v31 = v10;
            while ( 1 )
            {
              v33 = *v31++;
              v32 = v33;
              v34 = v33 == 32;
              if ( v33 != 32 )
                v34 = v32 == 9;
              if ( !v34 )
                break;
              --v30;
              v10 = v31;
              if ( !v30 )
              {
                v18 = 0;
                v10 = (unsigned __int8 *)v9;
                goto LABEL_39;
              }
            }
            if ( v32 == 10 )
              ++v10;
          }
          v18 = 0;
LABEL_39:
          v21 = 0.0;
          goto LABEL_10;
        }
      }
    }
    v25 = (char)*v10;
    v26 = (unsigned __int8)v25;
    v36[0] = (unsigned __int8)v25;
    if ( v25 < 0 )
    {
      v28 = sub_88448(v36, v10, v9);
      v26 = v36[0];
      v27 = &v10[v28];
      v24 = v27;
      if ( !v36[0] )
        break;
    }
    else
    {
      v27 = v10 + 1;
    }
    if ( (unsigned int)v26 <= 0x1F )
    {
      if ( v26 == 13 )
        goto LABEL_9;
      if ( v26 == 10 )
      {
        v19 = v19 + v15;
        v10 = v27;
        if ( v20 >= v21 )
          v21 = v20;
        *a1 = v21;
        v20 = v21;
        v21 = 0.0;
        a1[1] = v19;
        goto LABEL_10;
      }
    }
    v22 = (float *)(a2 + 12);
    if ( v26 < *(_DWORD *)a2 )
      v22 = (float *)(*(_DWORD *)(a2 + 8) + 4 * v26);
    v23 = *v22;
    v24 = v10;
    if ( (float)(v21 + (float)(v17 * v23)) >= a4 )
      break;
    v21 = v21 + (float)(v17 * v23);
LABEL_9:
    v10 = v27;
LABEL_10:
    if ( (unsigned int)v10 >= v9 )
      goto LABEL_42;
  }
  v10 = v24;
LABEL_42:
  v14 = a8;
  if ( v20 < v21 )
    *a1 = v21;
  if ( v21 > 0.0 || v19 == 0.0 )
LABEL_46:
    a1[1] = v19 + v15;
  if ( v14 )
    *v14 = v10;
  return v36[1];
}


// ======================================================================
