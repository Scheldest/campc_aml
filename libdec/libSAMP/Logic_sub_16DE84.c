// ADDR: 0x168290
// SYMBOL: sub_168290
int sub_168290()
{
  int v0; // r5
  int result; // r0
  unsigned int *v2; // r4
  int v3; // r0
  float v4; // s4
  float v5; // s6
  float v6; // s2
  float v7; // s0
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  int v11; // r6

  v0 = dword_381B58;
  result = *(_DWORD *)(dword_381B58 + 6608);
  if ( !result )
  {
    v2 = (unsigned int *)(dword_381B58 + 6508);
    result = *(_DWORD *)(dword_381B58 + 6588);
    if ( !result )
    {
      result = *(_DWORD *)(dword_381B58 + 6836);
      if ( !result || !*(_BYTE *)(result + 128) )
      {
        if ( *(_BYTE *)(dword_381B58 + 984) )
        {
          if ( *(_DWORD *)(dword_381B58 + 6580) )
          {
            sub_167F9C(*(_DWORD *)(dword_381B58 + 6576));
            if ( *(_BYTE *)(v0 + 176) )
            {
              v3 = *(_DWORD *)(v0 + 6580);
              if ( !(*(unsigned __int8 *)(v3 + 8) << 31) )
              {
                v4 = *(float *)(v0 + 900);
                v5 = *(float *)(v3 + 12);
                if ( v4 < v5
                  || (v6 = *(float *)(v3 + 16), v7 = *(float *)(v0 + 904), v7 < v6)
                  || v4 >= (float)(v5 + *(float *)(v3 + 28))
                  || v7 >= (float)(v6
                                 + (float)((float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
                                         + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v3 + 628)))) )
                {
                  *(_DWORD *)(v0 + 6584) = 0;
                }
              }
            }
          }
          else if ( result && !sub_1683BC() )
          {
            sub_168010(0);
          }
        }
        result = *(unsigned __int8 *)(v0 + 985);
        if ( *(_BYTE *)(v0 + 985) )
        {
          v8 = sub_1683BC();
          v9 = v8 == 0;
          if ( v8 )
          {
            v10 = *v2;
            if ( (int)*v2 >= 1 )
            {
              v9 = 0;
              do
              {
                v11 = *(_DWORD *)(*(_DWORD *)(v0 + 6516) - 4 + 4 * v10);
                if ( v11 == v8 )
                  break;
                v9 |= v11 == *(_DWORD *)(v0 + 6576);
                if ( v10 < 2 )
                  break;
                --v10;
              }
              while ( !(v9 << 31) );
            }
          }
          if ( v9 << 31 )
            v8 = *(_DWORD *)(v0 + 6576);
          return sub_1683F8(v8, 1);
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x16e36c
// SYMBOL: sub_16E36C
int sub_16E36C()
{
  int result; // r0
  int *v1; // r5
  int v2; // r6
  int v3; // r1
  int v4; // r0
  int v5; // r2
  int v6; // r1
  float *v7; // r1
  float v8; // s0

  result = dword_381B58;
  if ( *(int *)(dword_381B58 + 6544) > 1 || !*(_BYTE *)(dword_381B58 + 2) )
  {
    v1 = (int *)(dword_381B58 + 6544);
    v2 = *(_DWORD *)(dword_381B58 + 6572);
    if ( *(_DWORD *)(v2 + 448) )
      sub_16F984();
    sub_16DE44();
    v3 = *(_DWORD *)(v2 + 8);
    if ( (v3 & 0x1000000) == 0 )
    {
      sub_16FD24(v3 << 7);
      v3 = *(_DWORD *)(v2 + 8);
    }
    v4 = *v1;
    v5 = *v1 - 1;
    *v1 = v5;
    if ( (v3 & 0x4000000) != 0 )
      --v1[70];
    if ( v5 )
    {
      v6 = dword_381B58;
      result = *(_DWORD *)(v1[2] + 4 * v4 - 8);
      *(_DWORD *)(dword_381B58 + 6572) = result;
      if ( result )
      {
        v7 = (float *)(v6 + 6344);
        v8 = v7[1] * *(float *)(result + 628);
        v7[5] = v8;
        *v7 = v8;
      }
    }
    else
    {
      result = dword_381B58;
      *(_DWORD *)(dword_381B58 + 6572) = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x16e404
// SYMBOL: sub_16E404
int sub_16E404()
{
  int v0; // r2
  int v1; // r5
  int result; // r0
  int v3; // r12
  int (__fastcall *v4)(int, int); // lr
  int v5; // r1

  v0 = dword_381B58;
  v1 = dword_381B58 + 7448;
  *(_BYTE *)(dword_381B58 + 7448) = 0;
  *(_DWORD *)(v1 + 32) = -1;
  *(_DWORD *)(v1 + 108) = -1;
  *(_DWORD *)(v1 + 92) = 0;
  *(_DWORD *)(v1 + 96) = 2139095039;
  *(_QWORD *)(v0 + 7464) = 0LL;
  *(_QWORD *)(v0 + 7472) = 0LL;
  *(_QWORD *)(v0 + 7484) = 0LL;
  *(_QWORD *)(v0 + 7492) = 0LL;
  result = *(_DWORD *)(v1 + 120);
  *(_QWORD *)(v0 + 7500) = 0LL;
  *(_QWORD *)(v0 + 7508) = 0LL;
  *(_WORD *)(v1 + 69) = 0;
  *(_DWORD *)(v1 + 100) = 0;
  *(_DWORD *)(v1 + 104) = 0;
  *(_BYTE *)(v0 + 7516) = 0;
  if ( result )
  {
    v3 = *(_DWORD *)(v0 + 880);
    *(_DWORD *)(v1 + 112) = 0;
    *(_DWORD *)(v1 + 116) = 0;
    v4 = off_2390B0;
    v5 = dword_381B60;
    *(_DWORD *)(v0 + 880) = v3 - 1;
    result = v4(result, v5);
    *(_DWORD *)(v1 + 120) = 0;
  }
  *(_DWORD *)(v1 + 128) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x16e490
// SYMBOL: sub_16E490
int __fastcall sub_16E490(int a1)
{
  return sub_170158(a1);
}


// ======================================================================
// ADDR: 0x16e4b4
// SYMBOL: sub_16E4B4
int __fastcall sub_16E4B4(int *a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r1
  void *v7; // r0
  const void *v8; // r1
  int v9; // r8
  int v10; // r0
  int v11; // r1
  int result; // r0
  int v13; // r6
  int i; // r5
  int v15; // r1

  v4 = *a1;
  if ( v4 == a1[1] )
  {
    v5 = v4 + 1;
    if ( v4 )
      v6 = v4 + v4 / 2;
    else
      v6 = 8;
    if ( v6 > v5 )
      v5 = v6;
    if ( v4 < v5 )
    {
      if ( dword_381B58 )
        ++*(_DWORD *)(dword_381B58 + 880);
      v7 = (void *)off_2390AC(4 * v5, dword_381B60);
      v8 = (const void *)a1[2];
      v9 = (int)v7;
      if ( v8 )
      {
        j_memcpy(v7, v8, 4 * *a1);
        v10 = a1[2];
        if ( v10 && dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
        off_2390B0(v10, dword_381B60);
      }
      v4 = *a1;
      a1[1] = v5;
      a1[2] = v9;
    }
  }
  *(_DWORD *)(a1[2] + 4 * v4) = a2;
  v11 = *(unsigned __int8 *)(a2 + 122);
  result = *a1 + 1;
  *a1 = result;
  if ( v11 )
  {
    v13 = *(_DWORD *)(a2 + 332);
    if ( v13 < 2 )
    {
      if ( v13 != 1 )
        return result;
    }
    else
    {
      qsort(*(void **)(a2 + 340), *(_DWORD *)(a2 + 332), 4u, (__compar_fn_t)sub_171730);
    }
    for ( i = 0; i != v13; ++i )
    {
      v15 = *(_DWORD *)(*(_DWORD *)(a2 + 340) + 4 * i);
      result = *(unsigned __int8 *)(v15 + 122);
      if ( *(_BYTE *)(v15 + 122) )
        result = sub_16E4B4(a1);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x16eca8
// SYMBOL: sub_16ECA8
int __fastcall sub_16ECA8(__int64 a1)
{
  __int64 *v1; // r9
  int *v2; // r11
  int v3; // r1
  _DWORD *v4; // r10
  int v5; // r4
  int v6; // r0
  int (__fastcall *v7)(int, int); // r6
  void *v8; // r0
  const void *v9; // r1
  int v10; // r8
  int v11; // r0
  int v12; // r1
  __int64 v14; // [sp+8h] [bp-28h]
  int v15; // [sp+10h] [bp-20h]

  v1 = (__int64 *)HIDWORD(a1);
  if ( 0x606432u >> a1 << 31 )
  {
    v2 = (int *)(dword_381B58 + 6788);
    v3 = *(_DWORD *)(dword_381B58 + 6788);
    v4 = (_DWORD *)(dword_BB85C[3 * (_DWORD)a1 + 2] + dword_381B58 + 5400);
    v15 = *(_DWORD *)(dword_BB85C[3 * (_DWORD)a1 + 2] + dword_381B58 + 5404);
    LODWORD(v14) = a1;
    HIDWORD(v14) = *v4;
    if ( v3 == *(_DWORD *)(dword_381B58 + 6792) )
    {
      v5 = v3 + 1;
      if ( v3 )
        v6 = v3 + v3 / 2;
      else
        v6 = 8;
      if ( v6 > v5 )
        v5 = v6;
      if ( v3 < v5 )
      {
        v7 = off_2390AC;
        ++*(_DWORD *)(dword_381B58 + 880);
        v8 = (void *)v7(12 * v5, dword_381B60);
        v9 = (const void *)v2[2];
        v10 = (int)v8;
        if ( v9 )
        {
          j_memcpy(v8, v9, 12 * *v2);
          v11 = v2[2];
          if ( v11 && dword_381B58 )
            --*(_DWORD *)(dword_381B58 + 880);
          off_2390B0(v11, dword_381B60);
        }
        v3 = *v2;
        v2[1] = v5;
        v2[2] = v10;
      }
    }
    v12 = v2[2] + 12 * v3;
    *(_QWORD *)v12 = v14;
    *(_DWORD *)(v12 + 8) = v15;
    ++*v2;
    a1 = *v1;
    *(_QWORD *)v4 = *v1;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x16edc4
// SYMBOL: sub_16EDC4
int __fastcall sub_16EDC4(int result)
{
  int v1; // lr
  _DWORD *v2; // r10
  int v3; // r3
  int v4; // r12
  int v5; // r1
  _DWORD *i; // r4
  _DWORD *v7; // r6
  _DWORD *v8; // r2

  if ( result >= 1 )
  {
    ++result;
    v1 = dword_381B58 + 5400;
    v2 = (_DWORD *)(dword_381B58 + 6788);
    v3 = *(_DWORD *)(dword_381B58 + 6788);
    v4 = *(_DWORD *)(dword_381B58 + 6796);
    v5 = v3 - 1;
    for ( i = (_DWORD *)(v4 + 12 * (v3 - 1)); ; i -= 3 )
    {
      --v3;
      v7 = (_DWORD *)(dword_BB85C[3 * *i + 2] + v1);
      if ( (unsigned int)&loc_1F9BCC >> *i << 31 )
        break;
      if ( 0x606432u >> *i << 31 )
      {
        *v7++ = i[1];
        v8 = (_DWORD *)(v4 + 12 * v3 + 8);
LABEL_7:
        *v7 = *v8;
      }
      *v2 = v5;
      --result;
      --v5;
      if ( result <= 1 )
        return result;
    }
    v8 = i + 1;
    goto LABEL_7;
  }
  return result;
}


// ======================================================================
// ADDR: 0x17b9ec
// SYMBOL: sub_17B9EC
int __fastcall sub_17B9EC(char *a1, int a2, unsigned int a3, float *a4)
{
  int v5; // r8
  int v6; // r4
  bool v7; // zf
  int v8; // r10
  int v11; // r11
  float v12; // s8
  float v13; // s10
  float v14; // s18
  float v15; // s0
  float v16; // s2
  float v17; // s20
  float v18; // s22
  float v19; // s16
  float v20; // s4
  float v21; // s12
  float v22; // s14
  int v23; // r1
  float v24; // s0
  unsigned int v25; // r0
  float v26; // s0
  float v27; // s6
  float v28; // s2
  int v29; // r0
  int v30; // r6
  int v31; // r0
  unsigned int v32; // r11
  int v33; // r6
  int v34; // r1
  int v35; // r1
  int v36; // r2
  int v37; // r0
  int v38; // r0
  bool v39; // zf
  int v41; // [sp+14h] [bp-8Ch]
  unsigned int v43; // [sp+1Ch] [bp-84h]
  float v44[2]; // [sp+24h] [bp-7Ch] BYREF
  char v45; // [sp+2Eh] [bp-72h] BYREF
  unsigned __int8 v46; // [sp+2Fh] [bp-71h] BYREF
  unsigned __int64 v47; // [sp+30h] [bp-70h] BYREF
  float v48; // [sp+38h] [bp-68h]
  float v49; // [sp+3Ch] [bp-64h]
  float v50[2]; // [sp+40h] [bp-60h] BYREF
  float v51[2]; // [sp+48h] [bp-58h] BYREF
  float v52; // [sp+50h] [bp-50h] BYREF
  float v53; // [sp+54h] [bp-4Ch]
  __int64 v54[9]; // [sp+58h] [bp-48h] BYREF

  v5 = dword_381B58;
  v6 = *(_DWORD *)(dword_381B58 + 6572);
  *(_BYTE *)(v6 + 124) = 1;
  if ( *(_BYTE *)(v6 + 127) )
    return 0;
  v8 = a3 & 2;
  v7 = v8 == 0;
  if ( (a3 & 2) != 0 )
    v7 = *(_DWORD *)(v6 + 448) == 0;
  if ( !v7 )
    sub_170AD8();
  v11 = sub_166AD4(v6, a1, 0);
  sub_1660A4((float *)v54, (unsigned int)a1, 0, 1, -1.0);
  v12 = *(float *)(v6 + 204);
  v13 = *(float *)(v6 + 248);
  v14 = v12 + v13;
  v16 = *((float *)v54 + 1);
  v15 = *(float *)v54;
  if ( a4[1] != 0.0 )
    v16 = a4[1];
  if ( *a4 != 0.0 )
    v15 = *a4;
  v50[0] = *(float *)(v6 + 200);
  v53 = v16;
  v17 = v50[0];
  v52 = v15;
  v50[1] = v12 + v13;
  v51[1] = v16 + v14;
  v51[0] = v15 + v50[0];
  sub_167054((unsigned int)&v52);
  v18 = *(float *)(v6 + 60);
  if ( v8 )
    sub_16FEF4((float *)&v47);
  else
    sub_16FE88((float *)&v47);
  v19 = *(float *)&v47;
  v20 = v53;
  v21 = *(float *)(v5 + 5472);
  v22 = *(float *)(v5 + 5476);
  v23 = 0;
  v24 = (float)((float)(*(float *)&v47 + *(float *)(v6 + 12)) - v18) - v17;
  if ( *(float *)v54 >= v24 )
    v24 = *(float *)v54;
  if ( *a4 != 0.0 )
    v23 = 1;
  v25 = (((a3 & 0x800000) >> 23) ^ 1) & v23;
  if ( v25 )
    v24 = *a4;
  v26 = v24 + v17;
  if ( a4[1] != 0.0 )
    v20 = a4[1];
  if ( v25 )
    v18 = -0.0;
  v43 = a3 & 8;
  v27 = (float)(int)(float)(v22 * 0.5);
  v28 = (float)(int)(float)(v21 * 0.5);
  *((float *)&v47 + 1) = v14 - v27;
  *(float *)&v47 = v17 - v28;
  v49 = (float)(v22 - v27) + (float)(v14 + v20);
  v48 = (float)(v21 - v28) + (float)(v26 + v18);
  if ( (a3 & 8) != 0 )
  {
    v30 = *(_DWORD *)(v6 + 364);
    *(_DWORD *)(v6 + 364) = v30 | 0x14;
    v29 = sub_167164(&v47, v11, 0);
    *(_DWORD *)(v6 + 364) = v30;
  }
  else
  {
    v29 = sub_167164(&v47, v11, 0);
  }
  if ( !v29 )
  {
    v39 = v8 == 0;
    if ( v8 )
      v39 = *(_DWORD *)(v6 + 448) == 0;
    if ( !v39 )
      sub_170B10();
    return 0;
  }
  v41 = v11;
  v31 = sub_17AD64(
          (float *)&v47,
          v11,
          &v46,
          &v45,
          (((a3 >> 9) & 0x800) + ((a3 >> 19) & 4) + ((a3 >> 19) & 8)) & 0xFFFFFFED | (32 * v43) | (2 * ((a3 & 4) != 0)) & 0xEF | (16 * ((a3 & 4) != 0)) | ((a3 & 0x1000000) >> 18));
  v32 = __clz(v43);
  v33 = v31;
  if ( (v31 || v46) && !*(_BYTE *)(v5 + 6935) && *(_DWORD *)(v5 + 6836) == v6 )
  {
    v34 = *(_DWORD *)(v5 + 6924);
    if ( v34 == *(_DWORD *)(v6 + 304) )
    {
      *(_BYTE *)(v5 + 6934) = 1;
      sub_166EAC(v41, v34);
    }
  }
  if ( v33 )
    sub_16702C();
  if ( (a3 & 0x1000000) != 0 )
    sub_16EB84();
  v35 = v46;
  if ( v46 )
    v35 = 1;
  if ( (v35 | (v32 >> 5) & a2) == 1 )
  {
    v36 = 25;
    if ( !v46 )
      v36 = 24;
    v37 = v36;
    if ( v46 )
      v37 = 26;
    if ( !v45 )
      v37 = v36;
    v38 = sub_16586C(v37, 1.0);
    sub_1661EC(*(float *)&v47, *((float *)&v47 + 1), v48, v49, v38, 0, 0.0);
    sub_166474(&v47, v41, 10);
  }
  if ( v8 && *(_DWORD *)(v6 + 448) )
  {
    sub_170B10();
    sub_16FE88(v44);
    v48 = v48 - (float)(v44[0] - v19);
  }
  if ( (a3 & 8) != 0 )
  {
    sub_16EBB4(0, (_QWORD *)(v5 + 5588));
    sub_166154((char *)v50, v51, a1, 0, v54, (float *)(v5 + 5536), (float *)&v47);
    sub_16EE68(1);
  }
  else
  {
    sub_166154((char *)v50, v51, a1, 0, v54, (float *)(v5 + 5536), (float *)&v47);
  }
  if ( v33 && !(a3 << 31) && (*(_DWORD *)(v6 + 8) & 0x4000000) != 0 && (*(_BYTE *)(v6 + 364) & 0x20) == 0 )
    sub_1703DC();
  return v33;
}


// ======================================================================
