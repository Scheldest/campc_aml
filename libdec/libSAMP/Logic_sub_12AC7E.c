// ADDR: 0x173720
// SYMBOL: sub_173720
int __fastcall sub_173720(int result, __int64 *a2, int a3, int a4)
{
  _DWORD *v4; // r4
  int v6; // r9
  int v7; // r10
  _QWORD *v10; // r1
  int v11; // r0
  __int64 v12; // t1
  int v13; // r1
  int v14; // r2
  int v15; // r0
  _WORD *v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // lr
  _WORD *v20; // r0
  int v21; // r1
  int v22; // r2
  int *v23; // r1
  float *v24; // r12
  float *v25; // r2
  int v26; // r5
  float *v27; // r3
  int v28; // r6
  float v29; // s6
  float v30; // s8
  int v31; // r2
  float v32; // s4
  float v33; // s2
  float v34; // s8
  float v35; // s6
  float v36; // s10
  float v37; // s10
  float *v38; // r2
  int v39; // r4
  float *v40; // r6
  float *v41; // r3
  int v42; // r2
  int v43; // r0
  _DWORD *v44; // lr
  float v45; // s8
  float v46; // s10
  int v47; // r3
  float v48; // s6
  float v49; // s4
  float v50; // s10
  float v51; // s8
  float v52; // s12
  float v53; // s12
  float v54; // s8
  float v55; // s14
  float v56; // s10
  float v57; // s12
  int v58; // r3
  float v59; // s8
  float v60; // s10
  float v61; // s12
  float v62; // s14
  int v63; // r5
  _WORD *v64; // r10
  __int16 v65; // r1
  __int16 v66; // r1
  __int16 v67; // r1
  int v68; // [sp+0h] [bp-40h] BYREF
  int v69; // [sp+4h] [bp-3Ch]
  int v70; // [sp+8h] [bp-38h]
  int v71; // [sp+Ch] [bp-34h]
  int v72; // [sp+10h] [bp-30h]
  int v73; // [sp+14h] [bp-2Ch]
  _DWORD *v74; // [sp+18h] [bp-28h]
  int v75; // [sp+1Ch] [bp-24h]

  if ( a3 >= 3 )
  {
    v4 = (_DWORD *)result;
    v7 = *(_DWORD *)(*(_DWORD *)(result + 40) + 4);
    v6 = **(_DWORD **)(result + 40);
    if ( (*(_BYTE *)(result + 36) & 2) != 0 )
    {
      sub_172DC0(result, 9 * a3 - 6, 2 * a3);
      v19 = v4[13];
      v20 = (_WORD *)v4[15];
      v74 = v4;
      v21 = v19 + 4;
      v73 = v19 + 1;
      v22 = 2;
      do
      {
        v20[2] = v21;
        v20[1] = v21 - 2;
        ++v22;
        *v20 = v19;
        v20 += 3;
        v21 += 2;
      }
      while ( a3 != v22 );
      v74[15] = v20;
      v23 = &v68 - 2 * a3;
      v24 = (float *)a2 + 1;
      v69 = 2 * a3;
      v25 = (float *)&a2[a3 - 1];
      v26 = 0;
      v27 = (float *)a2 + 1;
      v28 = a3;
      v29 = *v25;
      v30 = v25[1];
      v31 = a3 - 1;
      v72 = a4 & 0xFFFFFF;
      v75 = a3 - 1;
      do
      {
        v32 = *v27;
        v33 = *(v27 - 1);
        v34 = *v27 - v30;
        v35 = v33 - v29;
        v36 = (float)(v34 * v34) + (float)(v35 * v35);
        if ( v36 > 0.0 )
        {
          v37 = 1.0 / sqrtf(v36);
          v34 = v34 * v37;
          v35 = v35 * v37;
        }
        v38 = (float *)&v23[2 * v31];
        v27 += 2;
        *v38 = v34;
        v30 = v32;
        --v28;
        v38[1] = -v35;
        v29 = v33;
        v31 = v26++;
      }
      while ( v28 );
      LOWORD(v39) = v75;
      v40 = (float *)(v23 + 1);
      v70 = v19;
      v71 = v7;
      v41 = (float *)&v23[2 * v75];
      v42 = v74[14];
      v43 = v19;
      v44 = v74;
      v45 = *v41;
      v46 = v41[1];
      v47 = 0;
      do
      {
        v48 = *v40;
        v49 = *(v40 - 1);
        v40 += 2;
        v75 = v47;
        v50 = (float)(v46 + v48) * 0.5;
        v51 = (float)(v45 + v49) * 0.5;
        v52 = (float)(v50 * v50) + (float)(v51 * v51);
        if ( v52 < 0.5 )
          v52 = 0.5;
        v53 = 1.0 / v52;
        v54 = v51 * v53;
        v55 = *v24;
        v56 = v50 * v53;
        v57 = *(v24 - 1);
        *(_DWORD *)(v42 + 8) = v6;
        *(_DWORD *)(v42 + 12) = v7;
        v58 = v44[14];
        *(_DWORD *)(v58 + 16) = a4;
        v59 = v54 * 0.5;
        v60 = v56 * 0.5;
        *(float *)v42 = v57 - v59;
        *(float *)(v42 + 4) = v55 - v60;
        v61 = *(v24 - 1);
        v62 = *v24;
        v24 += 2;
        *(_DWORD *)(v58 + 28) = v6;
        *(_DWORD *)(v58 + 32) = v7;
        v64 = (_WORD *)v44[15];
        v63 = v44[14];
        v42 = v63 + 40;
        *v64 = v43;
        v44[14] = v63 + 40;
        v44[15] = v64 + 6;
        *(_DWORD *)(v63 + 36) = v72;
        v65 = v73;
        *(float *)(v58 + 20) = v61 + v59;
        v45 = v49;
        *(float *)(v58 + 24) = v60 + v62;
        v46 = v48;
        LOWORD(v63) = v65 + 2 * v39;
        v66 = v70;
        v64[2] = v63;
        v67 = v66 + 2 * v39;
        v39 = v75;
        v64[3] = v63;
        v64[5] = v43;
        v47 = v39 + 1;
        v64[4] = v43 + 1;
        v43 += 2;
        v64[1] = v67;
        v7 = v71;
      }
      while ( a3 != v39 + 1 );
      result = (v69 & 0xFFFE) + v74[13];
      v74[13] = result;
    }
    else
    {
      sub_172DC0(result, 3 * a3 - 6, a3);
      v10 = (_QWORD *)v4[14];
      v11 = a3;
      do
      {
        v12 = *a2++;
        --v11;
        *v10 = v12;
        v13 = v4[14];
        *(_DWORD *)(v13 + 8) = v6;
        *(_DWORD *)(v13 + 12) = v7;
        v14 = v4[14];
        v10 = (_QWORD *)(v14 + 20);
        v4[14] = v14 + 20;
        *(_DWORD *)(v14 + 16) = a4;
      }
      while ( v11 );
      v15 = v4[13];
      v16 = (_WORD *)v4[15];
      v17 = v15 + 2;
      v18 = a3 - 2;
      do
      {
        v16[2] = v17;
        v16[1] = v17++ - 1;
        *v16 = v15;
        v16 += 3;
        --v18;
      }
      while ( v18 );
      v4[15] = v16;
      result = v15 + (unsigned __int16)a3;
      v4[13] = result;
    }
  }
  return result;
}


// ======================================================================
