// ADDR: 0x8874c
// SYMBOL: sub_8874C
void *__fastcall sub_8874C(const char *a1, const char *a2, size_t *a3, signed int a4)
{
  FILE *v6; // r0
  FILE *v7; // r6
  void *v8; // r5
  size_t v10; // r9
  void *v11; // r0

  if ( a3 )
    *a3 = 0;
  v6 = fopen(a1, a2);
  if ( !v6 )
    return 0;
  v7 = v6;
  if ( fseek(v6, 0, 2) )
    goto LABEL_5;
  v10 = ftell(v7);
  if ( v10 == -1 || fseek(v7, 0, 0) )
    goto LABEL_5;
  if ( dword_1ACF68 )
    ++*(_DWORD *)(dword_1ACF68 + 880);
  v11 = (void *)off_117248(v10 + a4, dword_1ACF70);
  if ( !v11 )
  {
LABEL_5:
    fclose(v7);
    return 0;
  }
  v8 = v11;
  if ( fread(v11, 1u, v10, v7) != v10 )
  {
    fclose(v7);
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v8, dword_1ACF70);
    return 0;
  }
  if ( a4 >= 1 )
    sub_10967C((int)v8 + v10, a4);
  fclose(v7);
  if ( a3 )
    *a3 = v10;
  return v8;
}


// ======================================================================
// ADDR: 0x8c7a8
// SYMBOL: sub_8C7A8
int sub_8C7A8()
{
  int v0; // lr
  int v1; // r0
  int v2; // r1
  int v3; // r3
  int v4; // r2
  float v5; // s0
  int result; // r0
  int v7; // r2
  float v8; // s0
  int v9; // r3
  float v10; // s2
  int v11; // r12
  float v12; // s4
  float v13; // s6
  float v14; // s8
  float v15; // s10
  float v16; // s12
  float v17; // s14
  float v18; // s1
  float v19; // s0
  float v20; // s3
  float v21; // s2
  float v22; // s4
  float v23; // s6

  v0 = dword_1ACF68;
  v1 = *(_DWORD *)(dword_1ACF68 + 6584);
  v2 = dword_1ACF68 + 6584;
  if ( v1 )
  {
    v3 = *(_DWORD *)(dword_1ACF68 + 6608);
    v4 = *(_DWORD *)(dword_1ACF68 + 6652);
    *(_DWORD *)(dword_1ACF68 + 6612) = v3;
    if ( v4 == v3 )
      *(_BYTE *)(v2 + 72) = 1;
    if ( *(_BYTE *)(v0 + 232) && (v5 = *(float *)(v0 + 224), v5 >= -256000.0) )
    {
      v8 = v5 - *(float *)(v2 + 52);
      v9 = *(_DWORD *)(v1 + 764);
      v10 = *(float *)(v0 + 228) - *(float *)(v2 + 56);
      if ( *(float *)(v9 + 12) != v8 || *(float *)(v9 + 16) != v10 )
      {
        if ( !(*(unsigned __int8 *)(v9 + 9) << 31) && *(float *)(v0 + 11512) <= 0.0 )
          *(_DWORD *)(v0 + 11512) = *(_DWORD *)(v0 + 28);
        v11 = *(_DWORD *)(v9 + 172);
        if ( v11 << 31 )
        {
          v12 = *(float *)(v9 + 12);
          v13 = *(float *)(v9 + 16);
          v14 = *(float *)(v9 + 200);
          v15 = *(float *)(v9 + 204);
          v16 = *(float *)(v9 + 216);
          v17 = *(float *)(v9 + 220);
          v18 = *(float *)(v9 + 224);
          v19 = (float)(int)v8;
          v20 = *(float *)(v9 + 228);
          v21 = (float)(int)v10;
          *(_DWORD *)(v9 + 184) = 2139095039;
          *(_DWORD *)(v9 + 188) = 2139095039;
          v22 = v19 - v12;
          *(float *)(v9 + 12) = v19;
          v23 = v21 - v13;
          *(float *)(v9 + 16) = v21;
          v1 = *(_DWORD *)v2;
          *(_DWORD *)(v9 + 172) = v11 & 0xFFFFFFF1;
          *(float *)(v9 + 200) = v22 + v14;
          *(float *)(v9 + 204) = v23 + v15;
          *(float *)(v9 + 224) = v22 + v18;
          *(float *)(v9 + 228) = v23 + v20;
          *(float *)(v9 + 216) = v22 + v16;
          *(float *)(v9 + 220) = v23 + v17;
        }
      }
      return sub_8C628(v1);
    }
    else
    {
      *(_BYTE *)(v2 + 36) = v3 != 0;
      if ( v3 )
      {
        *(_WORD *)(v2 + 38) = 0;
        *(_DWORD *)(v2 + 32) = 0;
      }
      result = 0;
      *(_DWORD *)(v2 + 44) = 0;
      *(_DWORD *)(v2 + 48) = 0;
      *(_DWORD *)(v2 + 24) = 0;
      *(_DWORD *)(v2 + 60) = 0;
      *(_BYTE *)(v2 + 37) = 0;
      *(_BYTE *)(v2 + 40) = 0;
      *(_DWORD *)v2 = 0;
    }
  }
  else
  {
    result = *(_DWORD *)(dword_1ACF68 + 6644);
    if ( result )
    {
      result = *(_DWORD *)(result + 72);
      if ( result == *(_DWORD *)(dword_1ACF68 + 6608) )
      {
        v7 = *(_DWORD *)(dword_1ACF68 + 6652);
        *(_DWORD *)(dword_1ACF68 + 6612) = result;
        if ( v7 == result )
          *(_BYTE *)(v2 + 72) = 1;
        if ( !*(_BYTE *)(v0 + 232) )
        {
          *(_BYTE *)(v2 + 36) = result != 0;
          if ( result )
          {
            *(_WORD *)(v2 + 38) = 0;
            *(_DWORD *)(v2 + 32) = 0;
          }
          result = 0;
          *(_DWORD *)(v2 + 44) = 0;
          *(_DWORD *)(v2 + 48) = 0;
          *(_DWORD *)(v2 + 24) = 0;
          *(_DWORD *)(v2 + 60) = 0;
          *(_BYTE *)(v2 + 37) = 0;
          *(_BYTE *)(v2 + 40) = 0;
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x8c960
// SYMBOL: sub_8C960
int __fastcall sub_8C960(int result, float32x2_t *a2, int a3)
{
  int v3; // r3
  float v4; // s4
  float32x2_t v5; // d17
  float v6; // s6
  float32x4_t v7; // q9
  float32x2_t v8; // d16
  float32x4_t v9; // q0

  v3 = *(_DWORD *)(result + 172);
  if ( !a3 || (a3 & v3) != 0 )
  {
    v4 = *(float *)(result + 200);
    *(_DWORD *)(result + 184) = 2139095039;
    *(_DWORD *)(result + 188) = 2139095039;
    v5.n64_u64[0] = *(unsigned __int64 *)(result + 12);
    v6 = *(float *)(result + 204);
    v7 = *(float32x4_t *)(result + 216);
    v8.n64_u64[0] = vcvt_f32_s32(vcvt_s32_f32((float32x2_t)a2->n64_u64[0])).n64_u64[0];
    *(_DWORD *)(result + 172) = v3 & 0xFFFFFFF1;
    v9.n128_u64[0] = vsub_f32(v8, v5).n64_u64[0];
    *(float32x2_t *)(result + 12) = v8;
    v9.n128_u64[1] = v9.n128_u64[0];
    *(float *)(result + 204) = v9.n128_f32[1] + v6;
    *(float *)(result + 200) = v9.n128_f32[0] + v4;
    *(float32x4_t *)(result + 216) = vaddq_f32(v9, v7);
  }
  return result;
}


// ======================================================================
// ADDR: 0x8ccbc
// SYMBOL: sub_8CCBC
int sub_8CCBC()
{
  int v0; // r12
  int result; // r0
  int v2; // r11
  int v3; // r1
  __int64 v4; // kr00_8
  float v5; // r8
  float v6; // r9
  float v7; // s4
  float v8; // s6
  int v9; // r1
  int v10; // r2
  int v11; // r4
  int v12; // r6
  bool v13; // zf
  float v14; // r3
  float v15; // r6
  float v16; // s2
  int v17; // r1
  int v18; // lr
  unsigned int v19; // r4
  int *v20; // r3
  int v21; // r2
  bool v22; // zf
  char v23; // r1
  char v24; // r1
  int v25; // r1
  int v26; // r10
  int v27; // r5
  char v28; // r1
  int v29; // r8
  char v30; // r1
  int v31; // r9
  char v32; // r1
  int v33; // r6
  char v34; // r1
  int v35; // r4
  int v36; // r2
  _DWORD *v37; // r5
  int v38; // r1
  bool v39; // r3
  bool v40; // zf
  int v41; // r1
  char v42; // r1
  int v43; // r6
  int v44; // r2
  char v45; // [sp+0h] [bp-24h]
  int v46; // [sp+4h] [bp-20h]

  v0 = 0;
  result = dword_1ACF68;
  v2 = dword_1ACF68 + 5488;
  v3 = *(_DWORD *)(dword_1ACF68 + 6584);
  if ( v3 && (*(_BYTE *)(v3 + 9) & 2) == 0 )
    v0 = *(_DWORD *)(dword_1ACF68 + 6584);
  v4 = *(_QWORD *)v2;
  v5 = *(float *)(dword_1ACF68 + 5492);
  v6 = *(float *)v2;
  if ( *(_BYTE *)(dword_1ACF68 + 175) )
  {
    v7 = 4.0;
    v8 = 4.0;
    if ( *((float *)&v4 + 1) >= 4.0 )
      v8 = *(float *)(dword_1ACF68 + 5492);
    if ( *(float *)&v4 >= 4.0 )
      v7 = *(float *)v2;
    v5 = v8;
    v6 = v7;
  }
  v9 = *(_DWORD *)(dword_1ACF68 + 6508);
  if ( v9 >= 1 )
  {
    v10 = *(_DWORD *)(dword_1ACF68 + 6516) - 4;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 4 * v9);
      if ( *(_BYTE *)(v11 + 122) )
      {
        if ( !*(_BYTE *)(v11 + 129) )
        {
          v12 = *(_DWORD *)(v11 + 8);
          if ( (v12 & 0x200) == 0 )
          {
            v13 = (v12 & 0x1000042) == 0;
            v15 = *(float *)(dword_1ACF68 + 5492);
            v14 = *(float *)v2;
            if ( v13 )
              v14 = v6;
            v16 = *(float *)(dword_1ACF68 + 224);
            if ( v13 )
              v15 = v5;
            if ( v16 >= (float)(*(float *)(v11 + 464) - v14)
              && *(float *)(dword_1ACF68 + 228) >= (float)(*(float *)(v11 + 468) - v15)
              && v16 < (float)(*(float *)(v11 + 472) + v14) )
            {
              break;
            }
          }
        }
      }
      if ( (unsigned int)v9-- <= 1 )
        goto LABEL_26;
    }
    if ( !v0 )
      v0 = *(_DWORD *)(v10 + 4 * v9);
    *(_DWORD *)(dword_1ACF68 + 6576) = v0;
    goto LABEL_27;
  }
LABEL_26:
  *(_DWORD *)(dword_1ACF68 + 6576) = v0;
  if ( v0 )
  {
LABEL_27:
    v17 = *(_DWORD *)(v0 + 764);
    goto LABEL_29;
  }
  v0 = 0;
  v17 = 0;
LABEL_29:
  v18 = *(_DWORD *)(v2 + 1324);
  *(_DWORD *)(v2 + 1092) = v17;
  if ( v18 < 1 )
  {
LABEL_42:
    v23 = 0;
  }
  else
  {
    v19 = v18 + 1;
    v20 = (int *)(*(_DWORD *)(v2 + 1332) + 36 * v18 - 32);
    while ( 1 )
    {
      v21 = *v20;
      if ( *v20 )
      {
        if ( (*(_BYTE *)(v21 + 11) & 8) != 0 )
          break;
      }
      --v19;
      v20 -= 9;
      if ( v19 <= 1 )
        goto LABEL_42;
    }
    v22 = v17 == 0;
    if ( v17 )
      v22 = *(_DWORD *)(v17 + 764) == v21;
    if ( !v22 )
    {
      while ( v17 != v21 )
      {
        v17 = *(_DWORD *)(v17 + 760);
        if ( !v17 )
        {
          v0 = 0;
          *(_DWORD *)(v2 + 1088) = 0;
          *(_DWORD *)(v2 + 1092) = 0;
          break;
        }
      }
    }
    v23 = 1;
  }
  v45 = v23;
  v46 = *(_DWORD *)(result + 8);
  if ( (v46 & 0x10) != 0 )
  {
    v25 = *(unsigned __int8 *)(result + 984);
    v0 = 0;
    *(_DWORD *)(v2 + 1088) = 0;
    *(_DWORD *)(v2 + 1092) = 0;
    if ( !v25 )
      goto LABEL_51;
    goto LABEL_48;
  }
  if ( !*(_BYTE *)(result + 984) )
    goto LABEL_51;
  if ( !v0 )
  {
LABEL_48:
    v24 = v18;
    v0 = 0;
    if ( v18 )
      v24 = 1;
    goto LABEL_50;
  }
  v24 = 1;
LABEL_50:
  *(_BYTE *)(result + 999) = v24;
LABEL_51:
  v26 = *(unsigned __int8 *)(result + 232);
  v27 = 0;
  if ( !*(_BYTE *)(result + 232) )
    v27 = -1;
  if ( *(_BYTE *)(result + 985) )
  {
    v28 = v0 | v18;
    if ( v0 | v18 )
      v28 = 1;
    *(_BYTE *)(result + 1000) = v28;
  }
  v29 = *(unsigned __int8 *)(result + 233);
  if ( *(_BYTE *)(result + 233) )
  {
    if ( v26 )
    {
      if ( *(double *)(result + 952) < *(double *)(result + 8 * v27 + 944) )
        v27 = 1;
    }
    else
    {
      v27 = 1;
    }
  }
  if ( *(_BYTE *)(result + 986) )
  {
    v30 = v0 | v18;
    if ( v0 | v18 )
      v30 = 1;
    *(_BYTE *)(result + 1001) = v30;
  }
  v31 = *(unsigned __int8 *)(result + 234);
  if ( *(_BYTE *)(result + 234) )
  {
    if ( v27 == -1 )
    {
      v27 = 2;
    }
    else if ( *(double *)(result + 960) < *(double *)(result + 8 * v27 + 944) )
    {
      v27 = 2;
    }
  }
  if ( *(_BYTE *)(result + 987) )
  {
    v32 = v0 | v18;
    if ( v0 | v18 )
      v32 = 1;
    *(_BYTE *)(result + 1002) = v32;
  }
  v33 = *(unsigned __int8 *)(result + 235);
  if ( *(_BYTE *)(result + 235) )
  {
    if ( v27 == -1 )
    {
      v27 = 3;
    }
    else if ( *(double *)(result + 968) < *(double *)(result + 8 * v27 + 944) )
    {
      v27 = 3;
    }
  }
  if ( *(_BYTE *)(result + 988) )
  {
    v34 = v0 | v18;
    if ( v0 | v18 )
      v34 = 1;
    *(_BYTE *)(result + 1003) = v34;
  }
  v35 = *(unsigned __int8 *)(result + 236);
  if ( *(_BYTE *)(result + 236) )
  {
    if ( v27 == -1 )
    {
      v27 = 4;
    }
    else if ( *(double *)(result + 976) < *(double *)(result + 8 * v27 + 944) )
    {
      v27 = 4;
    }
  }
  else if ( v27 == -1 )
  {
    v36 = 1;
    goto LABEL_97;
  }
  v36 = *(unsigned __int8 *)(result + v27 + 999);
  if ( *(_BYTE *)(result + v27 + 999) )
    v36 = 1;
LABEL_97:
  v37 = (_DWORD *)(result + 12084);
  if ( *(_BYTE *)(v2 + 1960) )
    v38 = (*(unsigned __int8 *)(v2 + 1964) >> 4) & 1;
  else
    v38 = 0;
  if ( !(v38 | v36) )
  {
    v0 = 0;
    *(_DWORD *)(v2 + 1088) = 0;
    *(_DWORD *)(v2 + 1092) = 0;
  }
  if ( *v37 == -1 )
  {
    if ( !v36 )
      goto LABEL_109;
    v40 = v0 == 0;
    v39 = 1;
    if ( !v0 )
      v40 = (v29 | v26 | v31 | v33 | v35) == 0;
    if ( v40 )
LABEL_109:
      v39 = v18 != 0;
  }
  else
  {
    v39 = *v37 != 0;
  }
  v41 = *(_DWORD *)(result + 12088);
  *(_BYTE *)(result + 852) = v39;
  if ( v41 == -1 )
    v42 = (*(_DWORD *)(v2 + 1120) != 0) | v45;
  else
    v42 = v41 != 0;
  v43 = *(unsigned __int8 *)(result + 857);
  *(_BYTE *)(result + 854) = (unsigned int)(*(_DWORD *)(result + 12092) - 1) < 0xFFFFFFFE;
  v44 = v46 & 9;
  if ( v44 != 1 )
    LOBYTE(v44) = v42;
  if ( !v43 )
    LOBYTE(v44) = v42;
  *(_BYTE *)(result + 853) = v44;
  return result;
}


// ======================================================================
// ADDR: 0x95484
// SYMBOL: sub_95484
bool __fastcall sub_95484(int a1, int a2)
{
  _BOOL4 result; // r0
  float v4; // s0
  bool v5; // zf
  float v6; // s2

  result = 0;
  if ( a1 >= 0 )
  {
    v4 = *(float *)(dword_1ACF68 + 4 * a1 + 1112);
    v5 = v4 == 0.0;
    if ( v4 == 0.0 )
      result = 1;
    else
      v5 = a2 == 0;
    if ( !v5 )
    {
      v6 = *(float *)(dword_1ACF68 + 136);
      result = 0;
      if ( v4 > v6 )
        return (int)(float)((float)(v4 - v6) / *(float *)(dword_1ACF68 + 140)) > (int)(float)((float)((float)(v4 - *(float *)(dword_1ACF68 + 24)) - v6)
                                                                                            / *(float *)(dword_1ACF68 + 140));
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x98718
// SYMBOL: sub_98718
int __fastcall sub_98718(int result)
{
  int v1; // lr
  float *v2; // r3
  bool v3; // zf
  float *v4; // r2
  float v5; // s8
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float v9; // s0
  float v10; // s2
  float v11; // s8
  float v12; // s6

  if ( *(_BYTE *)(dword_1ACF68 + 6934) )
    goto LABEL_6;
  v2 = (float *)(dword_1ACF68 + 5456);
  v3 = *(_BYTE *)(dword_1ACF68 + 6935) == 0;
  if ( *(_BYTE *)(dword_1ACF68 + 6935) )
  {
    v1 = *(_DWORD *)(dword_1ACF68 + 6836);
    v3 = v1 == 0;
  }
  if ( v3 )
  {
LABEL_6:
    if ( *(float *)(dword_1ACF68 + 224) < -256000.0 )
      *(_QWORD *)result = *(_QWORD *)(dword_1ACF68 + 7636);
    else
      *(_QWORD *)result = *(_QWORD *)(dword_1ACF68 + 224);
  }
  else
  {
    v4 = (float *)(v1 + 16 * *(_DWORD *)(dword_1ACF68 + 6924));
    v5 = v4[200];
    v6 = v4[197];
    v7 = v5 - v4[198];
    v8 = v4[199] - v6;
    if ( *(float *)(dword_1ACF68 + 5460) < v7 )
      v7 = *(float *)(dword_1ACF68 + 5460);
    if ( (float)(*v2 * 4.0) < v8 )
      v8 = *v2 * 4.0;
    v9 = *(float *)(v1 + 16) + (float)(v5 - v7);
    v10 = *(float *)(v1 + 12) + (float)(v6 + v8);
    v11 = v9;
    if ( v9 > *(float *)(dword_1ACF68 + 20) )
      v11 = *(float *)(dword_1ACF68 + 20);
    v12 = v10;
    if ( v10 > *(float *)(dword_1ACF68 + 16) )
      v12 = *(float *)(dword_1ACF68 + 16);
    if ( v9 < 0.0 )
      v11 = 0.0;
    if ( v10 < 0.0 )
      v12 = 0.0;
    *(float *)(result + 4) = (float)(int)v11;
    *(float *)result = (float)(int)v12;
  }
  return result;
}


// ======================================================================
// ADDR: 0x9a200
// SYMBOL: sub_9A200
int __fastcall sub_9A200(char *s, int a2)
{
  int v4; // r1
  unsigned __int8 *v5; // r6
  unsigned int v6; // r8
  int v7; // r5
  int v8; // r9
  unsigned int v9; // r3
  int v10; // r4
  bool v11; // zf
  int v12; // r1
  int i; // r0
  int v14; // r2
  bool v15; // zf
  unsigned __int8 *j; // r10
  bool v17; // zf
  int v18; // r1
  unsigned __int8 *v19; // r6
  const char *v20; // r5
  char *v21; // r0
  _BYTE *v22; // r4
  char *v23; // r0
  char *v24; // r12
  const char *v25; // r1
  int v26; // r3
  unsigned __int8 *v27; // r2
  unsigned int v28; // r1
  int v29; // r6
  bool v30; // zf
  int v31; // r1
  int v32; // r0
  int v33; // r6
  int result; // r0
  unsigned __int8 *v35; // [sp+4h] [bp-2Ch]
  int v36; // [sp+10h] [bp-20h]

  v4 = dword_1ACF68;
  v36 = dword_1ACF68;
  if ( !a2 )
  {
    a2 = strlen(s);
    v4 = dword_1ACF68;
  }
  if ( v4 )
    ++*(_DWORD *)(v4 + 880);
  v5 = (unsigned __int8 *)off_117248(a2 + 1, dword_1ACF70);
  j_memcpy(v5, s, a2);
  v5[a2] = 0;
  if ( a2 < 1 )
    goto LABEL_53;
  v6 = (unsigned int)&v5[a2];
  v7 = 0;
  v8 = (int)&v5[a2 - 1];
  v9 = (unsigned int)v5;
  v10 = 0;
  v35 = v5;
  do
  {
    v12 = v8 - v9;
    for ( i = -v9; ; --i )
    {
      v14 = *(unsigned __int8 *)v9;
      v15 = v14 == 10;
      if ( v14 != 10 )
        v15 = v14 == 13;
      if ( !v15 )
        break;
      --v12;
      ++v9;
    }
    j = (unsigned __int8 *)v9;
    if ( v9 < v6 )
    {
      for ( j = (unsigned __int8 *)v9; ; ++j )
      {
        v17 = (unsigned __int8)v14 == 10;
        if ( (unsigned __int8)v14 != 10 )
          v17 = (unsigned __int8)v14 == 13;
        if ( v17 )
          break;
        if ( !v12 )
        {
          j = (unsigned __int8 *)(v9 + v6 + i);
          break;
        }
        LOBYTE(v14) = j[1];
        --v12;
      }
    }
    *j = 0;
    v18 = *(unsigned __int8 *)v9;
    if ( v18 != 59 )
    {
      if ( v18 == 91 && (unsigned int)j > v9 && (v19 = j - 1, *(j - 1) == 93) )
      {
        *v19 = 0;
        v20 = (const char *)(v9 + 1);
        v21 = (char *)memchr((const void *)(v9 + 1), 93, (size_t)&v19[i - 1]);
        if ( v21 && (v22 = v21, (v23 = (char *)memchr(v21 + 1, 91, v19 - (unsigned __int8 *)(v21 + 1))) != 0) )
        {
          v24 = v23 + 1;
          v25 = v20;
          *v22 = 0;
        }
        else
        {
          v24 = (char *)v20;
          v25 = "Window";
        }
        v26 = *(unsigned __int8 *)v25;
        if ( *v25 )
        {
          v27 = (unsigned __int8 *)(v25 + 1);
          v28 = -1;
          do
          {
            v29 = v26;
            v26 = *v27;
            v30 = v29 == 35;
            if ( v29 == 35 )
              v30 = v26 == 35;
            if ( v30 )
            {
              v26 = 35;
              if ( v27[1] == 35 )
                v28 = -1;
            }
            ++v27;
            v28 = dword_52D88[v29 ^ (unsigned __int8)v28] ^ (v28 >> 8);
          }
          while ( v26 );
          v31 = ~v28;
        }
        else
        {
          v31 = 0;
        }
        v32 = *(_DWORD *)(dword_1ACF68 + 11528);
        if ( v32 < 1 )
        {
          v10 = 0;
          v7 = 0;
        }
        else
        {
          v33 = *(_DWORD *)(dword_1ACF68 + 11536);
          while ( *(_DWORD *)(v33 + 4) != v31 )
          {
            --v32;
            v33 += 24;
            v10 = 0;
            v7 = 0;
            if ( !v32 )
              goto LABEL_11;
          }
          v7 = (*(int (__fastcall **)(int, int, char *))(v33 + 8))(v36, v33, v24);
          v10 = v33;
        }
      }
      else
      {
        v11 = v10 == 0;
        if ( v10 )
          v11 = v7 == 0;
        if ( !v11 )
          (*(void (__fastcall **)(int, int, int))(v10 + 12))(v36, v10, v7);
      }
    }
LABEL_11:
    v9 = (unsigned int)(j + 1);
  }
  while ( (unsigned int)(j + 1) < v6 );
  v5 = v35;
  if ( v35 )
  {
LABEL_53:
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
  }
  off_11724C(v5, dword_1ACF70);
  result = 11508;
  *(_BYTE *)(v36 + 11508) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x9a3f4
// SYMBOL: sub_9A3F4
void *__fastcall sub_9A3F4(size_t *a1)
{
  _DWORD *v2; // r10
  int v3; // r0
  size_t *v4; // r5
  _BYTE *v5; // r4
  size_t v6; // r0
  int (__fastcall *v7)(_DWORD, int); // r3
  int v8; // r1
  void *v9; // r0
  const void *v10; // r1
  void *v11; // r4
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  _BYTE *v15; // r0
  const void *v16; // r1
  int v17; // r1
  int v18; // r0
  bool v19; // zf
  int v20; // r4
  int v21; // r6
  size_t v22; // r0
  void *result; // r0

  v2 = (_DWORD *)dword_1ACF68;
  v3 = *(_DWORD *)(dword_1ACF68 + 11520);
  *(_DWORD *)(dword_1ACF68 + 11512) = 0;
  v4 = v2 + 2879;
  if ( v3 <= -1 )
  {
    v7 = off_117248;
    v8 = dword_1ACF70;
    ++v2[220];
    v9 = (void *)v7(0, v8);
    v10 = (const void *)v2[2881];
    v11 = v9;
    if ( v10 )
    {
      j_memcpy(v9, v10, *v4);
      v13 = v2[2881];
      v14 = v13 == 0;
      if ( v13 )
      {
        v12 = dword_1ACF68;
        v14 = dword_1ACF68 == 0;
      }
      if ( !v14 )
        --*(_DWORD *)(v12 + 880);
      off_11724C(v13, dword_1ACF70);
    }
    *v4 = 0;
    v2[2880] = 0;
    v2[2881] = v11;
  }
  else
  {
    *v4 = 0;
    if ( v3 )
    {
      v5 = (_BYTE *)v2[2881];
      v6 = 0;
      goto LABEL_20;
    }
  }
  if ( dword_1ACF68 )
    ++*(_DWORD *)(dword_1ACF68 + 880);
  v15 = (_BYTE *)off_117248(8, dword_1ACF70);
  v16 = (const void *)v2[2881];
  v5 = v15;
  if ( v16 )
  {
    j_memcpy(v15, v16, *v4);
    v18 = v2[2881];
    v19 = v18 == 0;
    if ( v18 )
    {
      v17 = dword_1ACF68;
      v19 = dword_1ACF68 == 0;
    }
    if ( !v19 )
      --*(_DWORD *)(v17 + 880);
    off_11724C(v18, dword_1ACF70);
  }
  v6 = *v4;
  v2[2880] = 8;
  v2[2881] = v5;
LABEL_20:
  v5[v6] = 0;
  ++*v4;
  if ( (int)v2[2882] >= 1 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      (*(void (__fastcall **)(_DWORD *))(v2[2884] + v20 + 16))(v2);
      ++v21;
      v20 += 24;
    }
    while ( v21 < v2[2882] );
  }
  if ( a1 )
  {
    v22 = *v4;
    if ( *v4 )
      --v22;
    *a1 = v22;
  }
  result = &unk_1ACF6C;
  if ( v2[2881] )
    return (void *)v2[2881];
  return result;
}


// ======================================================================
// ADDR: 0x9b3a4
// SYMBOL: sub_9B3A4
int __fastcall sub_9B3A4(int result, float *a2)
{
  float v2; // s8
  float v3; // s14
  float v4; // s1
  float v5; // s2
  float v6; // s10
  float v7; // s12
  float v8; // s6
  float v9; // s4
  float v10; // s0
  float *v11; // r1
  float v12; // s10
  float v13; // s0
  float v14; // s2

  v2 = 1.0;
  v3 = *a2;
  v4 = *(float *)(result + 480) + -1.0;
  v5 = *(float *)(result + 492) + 1.0;
  v6 = a2[2];
  v7 = *(float *)(result + 488) + 1.0;
  v8 = *(float *)(result + 484) + -1.0;
  v9 = a2[1];
  v10 = a2[3];
  if ( *a2 >= v4 && v6 <= v7 )
    return result;
  v11 = (float *)(dword_1ACF68 + 5472);
  if ( *(_BYTE *)(result + 120) )
  {
    if ( v3 < v4 )
    {
      v12 = (float)((float)(v3 - *(float *)(result + 12)) + *(float *)(result + 80)) - *v11;
      v2 = 0.0;
LABEL_9:
      *(float *)(result + 104) = v2;
      *(float *)(result + 96) = v12;
      goto LABEL_10;
    }
    if ( v6 >= v7 )
    {
      v12 = (float)((float)(v6 - *(float *)(result + 12)) + *(float *)(result + 80)) + *v11;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v9 >= v8 )
  {
    if ( v10 < v5 )
      return result;
    v14 = 1.0;
    v13 = (float)((float)(v10 - *(float *)(result + 16)) + *(float *)(result + 84)) + v11[1];
  }
  else
  {
    v13 = (float)((float)(v9 - *(float *)(result + 16)) + *(float *)(result + 84)) - v11[1];
    v14 = 0.0;
  }
  *(float *)(result + 108) = v14;
  *(float *)(result + 100) = v13;
  return result;
}


// ======================================================================
// ADDR: 0x9b4cc
// SYMBOL: sub_9B4CC
int __fastcall sub_9B4CC(int result)
{
  int v1; // r2
  int v2; // r1
  int v3; // lr
  int v4; // r5
  int v5; // r3
  int v6; // r4
  int v7; // r12
  int v8; // r2
  int v9; // r4

  v1 = *(_DWORD *)(dword_1ACF68 + 6900);
  if ( (*(_BYTE *)(v1 + 11) & 8) == 0 )
  {
    v2 = dword_1ACF68 + 6520;
    v3 = *(_DWORD *)(dword_1ACF68 + 6520);
    v4 = v3 - 1;
    v5 = v3 - 1;
    while ( v5 + 1 >= 1 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6528) + 4 * v5--);
      if ( v6 == v1 )
      {
        v7 = v5 + 1;
        v8 = v5 + 1 + result;
        if ( v8 >= 0 )
          goto LABEL_11;
        goto LABEL_8;
      }
    }
    v7 = -1;
    v8 = result - 1;
    if ( result - 1 >= 0 )
    {
LABEL_11:
      while ( v8 < v3 )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6528) + 4 * v8);
        if ( *(_BYTE *)(v9 + 122) && *(_DWORD *)(v9 + 764) == v9 && (*(_BYTE *)(v9 + 10) & 8) == 0 )
        {
LABEL_24:
          *(_DWORD *)(dword_1ACF68 + 6900) = v9;
          *(_DWORD *)(v2 + 384) = v9;
          goto LABEL_25;
        }
        v8 += result;
        if ( v8 <= -1 )
          break;
      }
    }
LABEL_8:
    if ( result <= -1 )
    {
      if ( v3 >= 1 )
        goto LABEL_19;
    }
    else
    {
      v4 = 0;
LABEL_19:
      while ( v7 != v4 && v4 < v3 )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6528) + 4 * v4);
        if ( *(_BYTE *)(v9 + 122) && *(_DWORD *)(v9 + 764) == v9 && (*(_BYTE *)(v9 + 10) & 8) == 0 )
          goto LABEL_24;
        v4 += result;
        if ( v4 <= -1 )
          break;
      }
    }
LABEL_25:
    result = 0;
    *(_BYTE *)(v2 + 400) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x9c10c
// SYMBOL: sub_9C10C
int __fastcall sub_9C10C(int *a1)
{
  return sub_9BFD8(
           a1,
           *(_DWORD *)(a1[10] + 20),
           *(float *)(a1[10] + 24),
           *(float *)(a1[10] + 28),
           *(float *)(a1[10] + 32),
           0);
}


// ======================================================================
// ADDR: 0x9c138
// SYMBOL: sub_9C138
int __fastcall sub_9C138(int *a1, int a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r1
  void *v6; // r0
  const void *v7; // r1
  int v8; // r5
  int v9; // r1

  v3 = a1[19];
  if ( v3 == a1[20] )
  {
    v4 = v3 + 1;
    if ( v3 )
      v5 = v3 + v3 / 2;
    else
      v5 = 8;
    if ( v5 > v4 )
      v4 = v5;
    if ( v3 < v4 )
    {
      v6 = (void *)sub_885E4(4 * v4);
      v7 = (const void *)a1[21];
      v8 = (int)v6;
      if ( v7 )
      {
        j_memcpy(v6, v7, 4 * a1[19]);
        sub_88614(a1[21]);
      }
      v3 = a1[19];
      a1[20] = v4;
      a1[21] = v8;
    }
  }
  v9 = a1[21];
  *(_DWORD *)(v9 + 4 * v3) = a2;
  ++a1[19];
  return sub_9BF30(a1, v9);
}


// ======================================================================
// ADDR: 0x1090b0
// SYMBOL: sub_1090B0
int __fastcall sub_1090B0(int a1, int a2)
{
  int v3; // [sp+0h] [bp-8h] BYREF

  return sub_1090D0(a1, a2, &v3);
}


// ======================================================================
