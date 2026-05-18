// ADDR: 0x16de44
// SYMBOL: sub_16DE44
int sub_16DE44()
{
  int v0; // r4
  int v1; // r0
  __int64 v2; // d17
  int result; // r0

  v0 = *(_DWORD *)(dword_381B58 + 6572);
  v1 = *(_DWORD *)(v0 + 636);
  *(_BYTE *)(v0 + 124) = 1;
  sub_172D44(v1);
  v2 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v0 + 636) + 72) + 16 * *(_DWORD *)(*(_DWORD *)(v0 + 636) + 64) - 8);
  result = v0 + 464;
  *(_QWORD *)(v0 + 464) = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v0 + 636) + 72)
                                    + 16 * *(_DWORD *)(*(_DWORD *)(v0 + 636) + 64)
                                    - 16);
  *(_QWORD *)(v0 + 472) = v2;
  return result;
}


// ======================================================================
// ADDR: 0x16f984
// SYMBOL: sub_16F984
int sub_16F984()
{
  int v0; // r6
  int v1; // r4
  int v2; // r0
  float *v3; // r8
  _DWORD *v4; // r0
  int v5; // r1
  float v6; // s0
  int result; // r0
  bool v8; // r1
  float v9; // s18
  float v10; // s20
  int v11; // r3
  int v12; // r1
  int v13; // r6
  int v14; // r10
  int v15; // r11
  float v16; // r1
  float *v17; // r5
  int v18; // r8
  int v19; // r9
  int v20; // r0
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float v24; // s0
  float v25; // s2
  int v26; // r4
  float v27; // s26
  int v28; // r1
  int v29; // r0
  int v30; // r2
  _BOOL4 v31; // r0
  int v32; // r1
  __int64 *v33; // r1
  float v34; // s0
  __int64 v35; // d17
  int v36; // r3
  int v37; // r0
  int v38; // r1
  _DWORD *v39; // r2
  int v40; // r1
  int v41; // r2
  float v42; // s0
  float v43; // s2
  float *v44; // r3
  int v45; // r1
  int v46; // r6
  int v47; // r2
  float v48; // s2
  float v49; // s0
  float v50; // s4
  float v51; // s6
  float v52; // s0
  float v53; // s0
  float v54; // s2
  int v55; // [sp+8h] [bp-90h]
  int v56; // [sp+Ch] [bp-8Ch]
  int v57; // [sp+10h] [bp-88h]
  int v58; // [sp+18h] [bp-80h]
  float v59[2]; // [sp+1Ch] [bp-7Ch] BYREF
  unsigned __int8 v60; // [sp+26h] [bp-72h] BYREF
  unsigned __int8 v61; // [sp+27h] [bp-71h] BYREF
  float v62[4]; // [sp+28h] [bp-70h] BYREF
  __int64 v63; // [sp+38h] [bp-60h] BYREF
  int v64; // [sp+40h] [bp-58h]
  float v65; // [sp+44h] [bp-54h]

  v0 = dword_381B58;
  v1 = *(_DWORD *)(dword_381B58 + 6572);
  v2 = *(_DWORD *)(v1 + 388);
  v3 = *(float **)(v1 + 448);
  *(_BYTE *)(v1 + 124) = 1;
  *(_DWORD *)(v1 + 388) = v2 - 1;
  if ( v2 == 1 )
    v4 = (_DWORD *)(v1 + 564);
  else
    v4 = (_DWORD *)(*(_DWORD *)(v1 + 396) + 4 * v2 - 8);
  v5 = *((_DWORD *)v3 + 4);
  *(_DWORD *)(v1 + 368) = *v4;
  if ( v5 >= 2 )
  {
    sub_16DE44();
    sub_174C68(*(_DWORD *)(v1 + 636) + 100);
  }
  v6 = *(float *)(v1 + 204);
  if ( v3[8] >= v6 )
    v6 = v3[8];
  result = *((_DWORD *)v3 + 1);
  v3[8] = v6;
  *(float *)(v1 + 204) = v6;
  if ( (result & 0x10) == 0 )
    *(float *)(v1 + 224) = v3[10];
  v8 = 0;
  if ( !(result << 31) )
  {
    if ( *(_BYTE *)(v1 + 127) )
    {
      v8 = 0;
      goto LABEL_59;
    }
    v9 = *(float *)(v1 + 468);
    v8 = 0;
    v10 = *(float *)(v1 + 476);
    if ( v3[9] >= v9 )
      v9 = v3[9];
    if ( v6 < v10 )
      v10 = v6;
    v11 = *((_DWORD *)v3 + 4);
    if ( v11 >= 2 )
    {
      v57 = result & 2;
      v56 = -1;
      v12 = v0 + 6572;
      v13 = 0;
      v14 = 1;
      v55 = v12;
      v15 = dword_381B58;
      v58 = v1;
      while ( 1 )
      {
        v16 = *v3;
        v17 = v3;
        v18 = *((_DWORD *)v3 + 17);
        v19 = v11;
        v20 = *(_DWORD *)(*(_DWORD *)(v15 + 6572) + 448);
        v21 = *(float *)(v20 + 20);
        v22 = *(float *)(v20 + 24);
        v23 = *(float *)(*(_DWORD *)(v20 + 68) + v13 + 28);
        v62[1] = v9;
        v24 = v21 + (float)((float)(v22 - v21) * v23);
        v25 = *(float *)(v1 + 12);
        v62[3] = v10;
        v26 = v14 + LODWORD(v16);
        v27 = v25 + v24;
        v62[2] = (float)(v25 + v24) + 4.0;
        v62[0] = (float)(v25 + v24) + -4.0;
        if ( v14 + LODWORD(v16) == *(_DWORD *)(v15 + 6608) )
          *(_DWORD *)(v15 + 6612) = v26;
        if ( v26 == *(_DWORD *)(v15 + 6652) )
          *(_BYTE *)(v15 + 6656) = 1;
        if ( !sub_167448(v62, v26, 0) )
          break;
        v3 = v17;
        v11 = v19;
LABEL_40:
        v1 = v58;
        ++v14;
        v13 += 28;
        if ( v14 >= v11 )
        {
          result = v56 + 1;
          if ( v56 == -1 )
          {
            v8 = 0;
          }
          else
          {
            if ( !*((_BYTE *)v3 + 9) && v11 >= 0 )
            {
              v38 = v11 + 1;
              v39 = (_DWORD *)(*((_DWORD *)v3 + 17) + 4);
              do
              {
                --v38;
                *v39 = *(v39 - 1);
                v39 += 7;
              }
              while ( v38 );
            }
            v40 = dword_381B58;
            v41 = *(_DWORD *)(dword_381B58 + 6572);
            v42 = *(float *)(dword_381B58 + 224) - *(float *)(dword_381B58 + 6636);
            v43 = *(float *)(v41 + 12);
            *((_BYTE *)v3 + 9) = 1;
            v44 = (float *)(v40 + 5500);
            v45 = *(_DWORD *)(v41 + 448);
            if ( v56 > 0 )
              v46 = v56 - 1;
            else
              v46 = *(_DWORD *)(v45 + 12);
            v47 = *(_DWORD *)(v45 + 68);
            v48 = (float)(v42 + 4.0) - v43;
            v49 = *(float *)(v45 + 20);
            v50 = *(float *)(v45 + 24) - v49;
            v51 = *v44 + (float)(v49 + (float)(v50 * *(float *)(v47 + 28 * v46)));
            if ( v48 >= v51 )
              v51 = v48;
            if ( ((_BYTE)v3[1] & 4) != 0 )
            {
              if ( v56 <= -2 )
                result = *(_DWORD *)(v45 + 12);
              v52 = (float)(v49 + (float)(v50 * *(float *)(v47 + 28 * result))) - *v44;
              if ( v51 < v52 )
                v52 = v51;
            }
            else
            {
              v52 = v51;
            }
            result = sub_1709D0(v56, LODWORD(v52));
            v8 = v56 != -1;
          }
          goto LABEL_59;
        }
      }
      v61 = 0;
      v60 = 0;
      if ( v57 )
      {
        v31 = 1;
        v3 = v17;
      }
      else
      {
        sub_17AD64(v62, v26, &v61, &v60, 0);
        v28 = v61;
        v29 = v60;
        if ( v61 || v60 )
          *(_DWORD *)(v55 + 872) = 4;
        if ( v29 )
        {
          v30 = v56;
          if ( (*(_BYTE *)(v18 + v13 + 36) & 2) == 0 )
            v30 = v14;
          v56 = v30;
        }
        v3 = v17;
        v31 = v29 == 0;
        if ( v28 )
        {
          v32 = 28;
LABEL_37:
          if ( !v31 )
            v32 = 29;
          v33 = (__int64 *)(dword_381B58 + 5400 + 16 * v32 + 172);
          v34 = *(float *)(dword_381B58 + 5400);
          v35 = v33[1];
          v63 = *v33;
          v64 = v35;
          v65 = v34 * *((float *)&v35 + 1);
          v36 = sub_165778((float *)&v63);
          *((float *)&v63 + 1) = v9 + 1.0;
          v59[1] = v10;
          v37 = *(_DWORD *)(v58 + 636);
          *(float *)&v63 = (float)(int)v27;
          v59[0] = *(float *)&v63;
          sub_173FCC(v37, (int)&v63, (int)v59, v36);
          v15 = dword_381B58;
          v11 = *((_DWORD *)v3 + 4);
          goto LABEL_40;
        }
      }
      v32 = 27;
      goto LABEL_37;
    }
  }
LABEL_59:
  v53 = *(float *)(v1 + 12);
  v54 = *(float *)(v1 + 436);
  *(_DWORD *)(v1 + 448) = 0;
  *((_BYTE *)v3 + 9) = v8;
  *(_DWORD *)(v1 + 444) = 0;
  *(float *)(v1 + 200) = (float)(int)(float)((float)(v53 + v54) + 0.0);
  return result;
}


// ======================================================================
// ADDR: 0x16fd24
// SYMBOL: sub_16FD24
int sub_16FD24()
{
  int result; // r0
  int v1; // r4
  int v2; // r5
  int v3; // r0
  void (__fastcall *v4)(_DWORD, void *); // r2
  void *v5; // r1

  result = 11552;
  v1 = dword_381B58;
  if ( *(_BYTE *)(dword_381B58 + 11552) )
  {
    v2 = dword_381B58 + 11552;
    sub_170B40("\n");
    v3 = *(_DWORD *)(v2 + 4);
    switch ( v3 )
    {
      case 4:
        if ( *(int *)(v2 + 12) >= 2 )
        {
          v4 = *(void (__fastcall **)(_DWORD, void *))(dword_381B58 + 204);
          if ( v4 )
          {
            v5 = &unk_381B5C;
            if ( *(_DWORD *)(v2 + 20) )
              v5 = *(void **)(v2 + 20);
            v4(*(_DWORD *)(dword_381B58 + 208), v5);
          }
        }
        break;
      case 2:
        fclose(*(FILE **)(v2 + 8));
        break;
      case 1:
        fflush(*(FILE **)(v2 + 8));
        break;
    }
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 0;
    *(_BYTE *)v2 = 0;
    return sub_16DC80((_DWORD *)(v1 + 11564));
  }
  return result;
}


// ======================================================================
