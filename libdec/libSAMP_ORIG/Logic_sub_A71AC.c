// ADDR: 0x8ae84
// SYMBOL: sub_8AE84
int __fastcall sub_8AE84(int result)
{
  int v1; // r1

  v1 = dword_1ACF68 + 6608;
  if ( *(_DWORD *)(dword_1ACF68 + 6608) == result )
    *(_DWORD *)(dword_1ACF68 + 6612) = result;
  if ( *(_DWORD *)(v1 + 44) == result )
  {
    result = 1;
    *(_BYTE *)(v1 + 48) = 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x8aeac
// SYMBOL: sub_8AEAC
int __fastcall sub_8AEAC(int a1, unsigned int a2, unsigned int a3)
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

  v3 = a3 == 0;
  v4 = ~*(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * *(_DWORD *)(a1 + 452) - 4);
  if ( a3 )
    v3 = a3 == a2;
  if ( !v3 )
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
    return ~v11;
  }
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
    return ~v11;
  }
  return *(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * *(_DWORD *)(a1 + 452) - 4);
}


// ======================================================================
// ADDR: 0xa6d44
// SYMBOL: sub_A6D44
int __fastcall sub_A6D44(float *a1, int a2, int a3, float *a4, float a5, float a6, int a7)
{
  int v8; // r11
  int v9; // r8
  int result; // r0
  float v11; // s0
  float v12; // s2
  float v16; // s16
  float v17; // s4
  float v18; // s6
  bool v19; // fnf
  float *v20; // r4
  int v21; // r0
  int v22; // r1
  float v23; // s2
  float v24; // s0
  __int64 v25; // d17
  float v26; // s30
  float v27; // s17
  float v28; // s19
  float v29; // s23
  float v30; // s21
  float v31; // s0
  float v32; // s2
  float v33; // s0
  float v34; // s26
  float v35; // s24
  float v36; // s20
  float v37; // s2
  float v38; // s30
  bool v39; // fnf
  float v40; // s28
  float v41; // s17
  int v42; // r0
  float v43; // s21
  float v44; // s23
  float v45; // s0
  bool v46; // fnf
  float *v47; // r1
  float v48; // s2
  int v49; // r0
  float v50; // s2
  bool v51; // fnf
  float v52; // s2
  float v53; // s4
  int v54; // r4
  unsigned int v55; // r0
  int v56; // r0
  unsigned int v57; // r0
  float v58; // s0
  float v59; // s4
  float v60; // s2
  float v61; // s6
  float *v62; // [sp+Ch] [bp-94h]
  int v63; // [sp+10h] [bp-90h]
  float v64[2]; // [sp+14h] [bp-8Ch] BYREF
  float v65[2]; // [sp+1Ch] [bp-84h] BYREF
  char v66; // [sp+26h] [bp-7Ah] BYREF
  unsigned __int8 v67; // [sp+27h] [bp-79h] BYREF
  __int64 v68; // [sp+28h] [bp-78h] BYREF
  __int64 v69; // [sp+30h] [bp-70h]

  v8 = dword_1ACF68;
  v9 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( *(_BYTE *)(v9 + 127) )
    return 0;
  result = 0;
  v11 = a1[2] - *a1;
  if ( v11 > 0.0 )
  {
    v12 = a1[3] - a1[1];
    v16 = 1.0;
    if ( a3 != 1 )
      goto LABEL_12;
    v16 = 1.0;
    v17 = *(float *)(dword_1ACF68 + 6344);
    v18 = *(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460);
    if ( v12 >= (float)(v18 + v17) )
      goto LABEL_12;
    result = 0;
    v16 = (float)(v12 - v17) / v18;
    v19 = v16 < 0.0;
    if ( v16 > 1.0 )
      v16 = 1.0;
    if ( !v19 && v16 > 0.0 )
    {
LABEL_12:
      v20 = (float *)&v68;
      v21 = (int)(float)((float)(v12 + -2.0) * 0.5);
      v22 = (int)(float)((float)(v11 + -2.0) * 0.5);
      v23 = (float)v21;
      v24 = (float)v22;
      if ( (float)v21 > 3.0 )
        v23 = 3.0;
      if ( (float)v22 > 3.0 )
        v24 = 3.0;
      if ( v21 < 0 )
        v23 = 0.0;
      v25 = *((_QWORD *)a1 + 1);
      if ( v22 < 0 )
        v24 = 0.0;
      v68 = *(_QWORD *)a1;
      v69 = v25;
      v26 = v23 + *((float *)&v68 + 1);
      v27 = v24 + *(float *)&v68;
      v28 = *(float *)&v25 - v24;
      v29 = *(float *)(dword_1ACF68 + 5512);
      v30 = *((float *)&v25 + 1) - v23;
      v63 = dword_1ACF68 + 5460;
      v67 = 0;
      v66 = 0;
      *((float *)&v68 + 1) = v23 + *((float *)&v68 + 1);
      *(float *)&v68 = v24 + *(float *)&v68;
      *(float *)&v69 = *(float *)&v25 - v24;
      *((float *)&v69 + 1) = *((float *)&v25 + 1) - v23;
      sub_A634C((float *)&v68, a2, &v66, (char *)&v67, 0x2000);
      v31 = a5;
      if ( a6 >= a5 )
        v31 = a6;
      v32 = 1.0;
      if ( v31 >= 1.0 )
        v32 = v31;
      v33 = a5 / v32;
      v34 = a6 - a5;
      v35 = v30 - v26;
      if ( (float)(a6 - a5) <= 1.0 )
        v34 = 1.0;
      if ( !a3 )
        v35 = v28 - v27;
      v36 = v33 * v35;
      v37 = *a4 / v34;
      if ( (float)(v33 * v35) > v35 )
        v36 = v35;
      if ( (float)(v33 * v35) < v29 )
        v36 = v29;
      v38 = v35 - v36;
      v39 = v37 < 0.0;
      if ( v37 > 1.0 )
        v37 = 1.0;
      if ( v39 )
        v37 = 0.0;
      v40 = (float)(v38 * v37) / v35;
      if ( !v67 )
        goto LABEL_64;
      if ( v16 < 1.0 )
        goto LABEL_64;
      v41 = v36 / v35;
      if ( (float)(v36 / v35) >= 1.0 )
        goto LABEL_64;
      v62 = (float *)(v8 + 11468);
      v42 = 228;
      if ( !a3 )
        v42 = 224;
      v43 = *(float *)(v42 + v8);
      if ( a3 )
        v20 = (float *)&v68 + 1;
      v44 = *v20;
      sub_8B0B4(a2);
      v45 = (float)(v43 - v44) / v35;
      v46 = v45 < 0.0;
      if ( v45 > 1.0 )
        v45 = 1.0;
      if ( v46 )
        v45 = 0.0;
      if ( *(_BYTE *)(v63 + 1160) )
      {
        v47 = (float *)(v8 + 11468);
        if ( v45 < v40 || v45 > (float)(v41 + v40) )
        {
          v48 = 0.0;
          *v62 = 0.0;
          v49 = 1;
          goto LABEL_54;
        }
        v48 = (float)(v45 - v40) + (float)(v41 * -0.5);
        *v62 = v48;
      }
      else
      {
        v47 = (float *)(v8 + 11468);
        v48 = *v62;
      }
      v49 = 0;
LABEL_54:
      v50 = (float)((float)(v45 - v48) - (float)(v41 * 0.5)) / (float)(1.0 - v41);
      v51 = v50 < 0.0;
      if ( v50 > 1.0 )
        v50 = 1.0;
      if ( v51 )
        v50 = 0.0;
      v52 = (float)(int)(float)((float)(v50 * v34) + 0.5);
      v53 = v52 / v34;
      if ( (float)(v52 / v34) > 1.0 )
        v53 = 1.0;
      if ( (float)(v52 / v34) < 0.0 )
        v53 = 0.0;
      *a4 = v52;
      v40 = (float)(v38 * v53) / v35;
      if ( v49 )
        *v47 = (float)(v45 - v40) + (float)((float)-v41 * 0.5);
LABEL_64:
      v54 = *(_DWORD *)(v9 + 636);
      v55 = sub_88C10(14, 1.0);
      sub_9D624(v54, (int)a1, a1 + 2, v55, *(float *)(v9 + 60), a7);
      v56 = 16;
      if ( !v66 )
        v56 = 15;
      if ( v67 )
        v56 = 17;
      v57 = sub_88C10(v56, v16);
      v58 = *(float *)&v68;
      if ( a3 )
      {
        v59 = *(float *)&v69;
        v60 = *((float *)&v68 + 1) + (float)((float)(*((float *)&v69 + 1) - *((float *)&v68 + 1)) * v40);
        v61 = v36 + v60;
      }
      else
      {
        v60 = *((float *)&v68 + 1);
        v61 = *((float *)&v69 + 1);
        v58 = *(float *)&v68 + (float)((float)(*(float *)&v69 - *(float *)&v68) * v40);
        v59 = v36 + v58;
      }
      v65[1] = v61;
      v65[0] = v59;
      v64[1] = v60;
      v64[0] = v58;
      sub_9D624(*(_DWORD *)(v9 + 636), (int)v64, v65, v57, *(float *)(v63 + 48), 15);
      result = v67;
      if ( v67 )
        return 1;
    }
  }
  return result;
}


// ======================================================================
