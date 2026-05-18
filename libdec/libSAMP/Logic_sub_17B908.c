// ADDR: 0x166dec
// SYMBOL: sub_166DEC
int __fastcall sub_166DEC(int result)
{
  int v1; // r1

  v1 = dword_381B58 + 6608;
  if ( *(_DWORD *)(dword_381B58 + 6608) == result )
    *(_DWORD *)(dword_381B58 + 6612) = result;
  if ( *(_DWORD *)(v1 + 44) == result )
  {
    result = 1;
    *(_BYTE *)(v1 + 48) = 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x166e8c
// SYMBOL: sub_166E8C
int __fastcall sub_166E8C(int a1, _BYTE *a2, int a3)
{
  int v3; // r3

  v3 = a3;
  if ( a3 )
    v3 = a3 - (_DWORD)a2;
  return sub_16560C(a2, v3, *(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * *(_DWORD *)(a1 + 452) - 4));
}


// ======================================================================
// ADDR: 0x17b4c8
// SYMBOL: sub_17B4C8
int __fastcall sub_17B4C8(float *a1, int a2, int a3, float *a4, float a5, float a6, int a7)
{
  int v8; // r11
  int v9; // r6
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
  int v49; // r10
  int v50; // r0
  float v51; // s2
  bool v52; // fnf
  float v53; // s2
  float v54; // s4
  int *v55; // r4
  unsigned int v56; // r0
  int v57; // r0
  unsigned int v58; // r0
  float v59; // s0
  float v60; // s4
  float v61; // s2
  float v62; // s6
  float *v63; // [sp+Ch] [bp-8Ch]
  int v64; // [sp+10h] [bp-88h]
  int v65[2]; // [sp+14h] [bp-84h] BYREF
  float v66[2]; // [sp+1Ch] [bp-7Ch] BYREF
  char v67; // [sp+26h] [bp-72h] BYREF
  unsigned __int8 v68; // [sp+27h] [bp-71h] BYREF
  __int64 v69; // [sp+28h] [bp-70h] BYREF
  __int64 v70; // [sp+30h] [bp-68h]

  v8 = dword_381B58;
  v9 = *(_DWORD *)(dword_381B58 + 6572);
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
    v17 = *(float *)(dword_381B58 + 6344);
    v18 = *(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460);
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
      v20 = (float *)&v69;
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
      v69 = *(_QWORD *)a1;
      v70 = v25;
      v26 = v23 + *((float *)&v69 + 1);
      v27 = v24 + *(float *)&v69;
      v28 = *(float *)&v25 - v24;
      v29 = *(float *)(dword_381B58 + 5512);
      v30 = *((float *)&v25 + 1) - v23;
      v64 = dword_381B58 + 5460;
      v68 = 0;
      v67 = 0;
      *((float *)&v69 + 1) = v23 + *((float *)&v69 + 1);
      *(float *)&v69 = v24 + *(float *)&v69;
      *(float *)&v70 = *(float *)&v25 - v24;
      *((float *)&v70 + 1) = *((float *)&v25 + 1) - v23;
      sub_17AD64((float *)&v69, a2, &v67, (char *)&v68, 0x2000);
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
      if ( !v68 || v16 < 1.0 || (v41 = v36 / v35, (float)(v36 / v35) >= 1.0) )
      {
        v49 = a7;
LABEL_65:
        v55 = *(int **)(v9 + 636);
        v56 = sub_16586C(14, 1.0);
        sub_174194(v55, (int *)a1, a1 + 2, v56, *(float *)(v9 + 68), v49);
        v57 = 16;
        if ( !v67 )
          v57 = 15;
        if ( v68 )
          v57 = 17;
        v58 = sub_16586C(v57, v16);
        v59 = *(float *)&v69;
        if ( a3 )
        {
          v60 = *(float *)&v70;
          v61 = *((float *)&v69 + 1) + (float)((float)(*((float *)&v70 + 1) - *((float *)&v69 + 1)) * v40);
          v62 = v36 + v61;
        }
        else
        {
          v61 = *((float *)&v69 + 1);
          v62 = *((float *)&v70 + 1);
          v59 = *(float *)&v69 + (float)((float)(*(float *)&v70 - *(float *)&v69) * v40);
          v60 = v36 + v59;
        }
        v66[1] = v62;
        v66[0] = v60;
        *(float *)&v65[1] = v61;
        *(float *)v65 = v59;
        sub_174194(*(int **)(v9 + 636), v65, v66, v58, *(float *)(v64 + 48), 15);
        result = v68;
        if ( v68 )
          return 1;
        return result;
      }
      v63 = (float *)(v8 + 11468);
      v42 = 228;
      if ( !a3 )
        v42 = 224;
      v43 = *(float *)(v42 + v8);
      if ( a3 )
        v20 = (float *)&v69 + 1;
      v44 = *v20;
      sub_167004(a2);
      v45 = (float)(v43 - v44) / v35;
      v46 = v45 < 0.0;
      if ( v45 > 1.0 )
        v45 = 1.0;
      if ( v46 )
        v45 = 0.0;
      if ( *(_BYTE *)(v64 + 1160) )
      {
        v47 = (float *)(v8 + 11468);
        if ( v45 < v40 || v45 > (float)(v41 + v40) )
        {
          v48 = 0.0;
          *v63 = 0.0;
          v50 = 1;
          goto LABEL_55;
        }
        v48 = (float)(v45 - v40) + (float)(v41 * -0.5);
        *v63 = v48;
      }
      else
      {
        v47 = (float *)(v8 + 11468);
        v48 = *v63;
      }
      v50 = 0;
LABEL_55:
      v49 = a7;
      v51 = (float)((float)(v45 - v48) - (float)(v41 * 0.5)) / (float)(1.0 - v41);
      v52 = v51 < 0.0;
      if ( v51 > 1.0 )
        v51 = 1.0;
      if ( v52 )
        v51 = 0.0;
      v53 = (float)(int)(float)((float)(v51 * v34) + 0.5);
      v54 = v53 / v34;
      if ( (float)(v53 / v34) > 1.0 )
        v54 = 1.0;
      if ( (float)(v53 / v34) < 0.0 )
        v54 = 0.0;
      *a4 = v53;
      v40 = (float)(v38 * v54) / v35;
      if ( v50 )
        *v47 = (float)(v45 - v40) + (float)((float)-v41 * 0.5);
      goto LABEL_65;
    }
  }
  return result;
}


// ======================================================================
