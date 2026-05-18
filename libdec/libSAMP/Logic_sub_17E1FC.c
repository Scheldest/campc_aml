// ADDR: 0x18e136
// SYMBOL: sub_18E136
int __fastcall sub_18E136(unsigned __int8 *a1, _BYTE *a2, _DWORD *a3, int a4, int *a5)
{
  bool v6; // zf
  int result; // r0
  int v8; // r0
  int *v10; // r4
  _DWORD *v11; // r6
  int v12; // r11
  unsigned int v13; // r4
  unsigned int v14; // r2
  unsigned int v15; // r5
  int v16; // r3
  unsigned int v17; // r12
  int v18; // r9
  int v19; // r10
  unsigned int v20; // r8
  int v21; // r0
  int v22; // lr
  int v23; // r6
  int v24; // r5
  int v25; // r3
  int v26; // r2
  int v27; // r9
  unsigned int v28; // r0
  unsigned __int8 v29; // lr
  unsigned int v30; // r6
  int v31; // r11
  int v32; // r1
  int v33; // r4
  int v34; // r11
  char v35; // r1
  unsigned int v36; // r2
  char v37; // r3
  char v38; // r0
  unsigned int v39; // r3
  int v40; // r0
  int v41; // r1
  int v42; // r9
  unsigned int v43; // r2
  int v44; // r10
  int v45; // r0
  unsigned int v46; // r2
  unsigned int v47; // r0
  unsigned int v48; // r1
  int v49; // r8
  int v50; // r5
  int v51; // r9
  int v52; // r1
  int v53; // r2
  unsigned int v54; // r3
  int *v55; // r5
  int v56; // r10
  int v57; // r1
  int v58; // r2
  unsigned int v59; // r3
  int v60; // r0
  int v61; // [sp+4h] [bp-74h]
  int v62; // [sp+8h] [bp-70h]
  _DWORD *v63; // [sp+Ch] [bp-6Ch]
  _DWORD *v64; // [sp+10h] [bp-68h]
  int v65; // [sp+18h] [bp-60h]
  int v66; // [sp+20h] [bp-58h]
  int v67; // [sp+20h] [bp-58h]
  unsigned int v68; // [sp+24h] [bp-54h]
  int v69; // [sp+24h] [bp-54h]
  int v70; // [sp+28h] [bp-50h]
  int v71; // [sp+2Ch] [bp-4Ch]
  int v72; // [sp+2Ch] [bp-4Ch]
  int v73; // [sp+30h] [bp-48h]
  int v74; // [sp+30h] [bp-48h]
  int v75; // [sp+34h] [bp-44h]
  unsigned int v76; // [sp+38h] [bp-40h]
  unsigned int v77; // [sp+3Ch] [bp-3Ch]
  unsigned __int8 v78; // [sp+3Ch] [bp-3Ch]
  unsigned int v79; // [sp+40h] [bp-38h]
  unsigned int v80; // [sp+40h] [bp-38h]
  int v81; // [sp+40h] [bp-38h]
  int v82; // [sp+44h] [bp-34h]
  int v83; // [sp+48h] [bp-30h]
  int v84; // [sp+4Ch] [bp-2Ch] BYREF
  int v85; // [sp+50h] [bp-28h]
  int v86; // [sp+54h] [bp-24h]
  unsigned int v87; // [sp+58h] [bp-20h]

  v6 = a1 == 0;
  result = -5;
  if ( !v6 && a2 )
  {
    v8 = *a1;
    v10 = a5;
    v11 = a3;
    if ( v8 == 3 )
    {
      v12 = a4 / 16;
      if ( a4 >= 16 )
      {
        v13 = *(_DWORD *)(a1 + 9);
        v14 = *(_DWORD *)(a1 + 1);
        v15 = *(_DWORD *)(a1 + 5);
        v16 = v13 >> 8;
        v75 = *(_DWORD *)(a1 + 13);
        v64 = v11;
        v63 = a2 + 48;
        v17 = v14 >> 8;
        v79 = HIWORD(v13);
        v18 = HIWORD(v14);
        v19 = HIBYTE(v14);
        v20 = v15 >> 8;
        v21 = HIWORD(v15);
        v22 = HIBYTE(v15);
        v23 = v12;
        v82 = v14;
        v77 = HIBYTE(v13);
        v61 = v12;
        do
        {
          v83 = v15;
          v24 = v16;
          v62 = v23;
          v25 = v18;
          v26 = v21;
          v27 = v22;
          v29 = v77;
          v28 = v79;
          v30 = v75;
          v31 = v13;
          v76 = 0;
          v32 = v24;
          v33 = v19;
          do
          {
            v80 = v28;
            v71 = v32;
            v73 = v31;
            v86 = (((unsigned __int8)v28 << 16) | (v29 << 24) | ((unsigned __int8)v32 << 8)) + (unsigned __int8)v31;
            v34 = v26;
            v66 = v25;
            v68 = v17;
            v85 = (((unsigned __int8)v26 << 16) | (v27 << 24) | ((unsigned __int8)v20 << 8)) + (unsigned __int8)v83;
            v78 = v29;
            v87 = v30;
            v84 = (((unsigned __int8)v25 << 16) | (v33 << 24) | ((unsigned __int8)v17 << 8)) + (unsigned __int8)v82;
            sub_18D6E0(&v84, &v84, v63);
            v35 = v76 & 7;
            v36 = v76 >> 3;
            v37 = *((_BYTE *)a5 + (v76++ >> 3));
            v38 = ((unsigned __int8)(v84 & 0x80) >> v35) ^ v37;
            v39 = *((unsigned __int8 *)v64 + v36);
            *((_BYTE *)a5 + v36) = v38;
            v75 = (v30 >> 15) & 1 | (2 * (v30 & 0x7F)) | ((((v30 >> 7) & 0xFE) + ((v30 >> 23) & 1)) << 8) | (((v30 >> 15) & 0xFE | (v30 >> 31)) << 16) | ((((v39 >> (v35 ^ 7)) & 1) + ((v30 >> 23) & 0xFE)) << 24);
            v40 = (unsigned __int8)v30 >> 7;
            v30 = v75;
            v29 = v40 | (2 * v29);
            v77 = (2 * v80) | (v78 >> 7);
            v81 = (2 * v71) | ((unsigned __int8)v80 >> 7);
            v41 = (2 * v73) | ((unsigned __int8)v71 >> 7);
            v74 = (2 * v27) | ((unsigned __int8)v73 >> 7);
            v72 = (2 * v34) | ((unsigned __int8)v27 >> 7);
            v42 = (2 * v20) | ((unsigned __int8)v34 >> 7);
            v31 = v41;
            v43 = v83 << 24;
            v44 = (2 * v83) | ((unsigned __int8)v20 >> 7);
            v83 = v44;
            v20 = v42;
            v70 = (2 * v33) | (v43 >> 31);
            v45 = v66;
            v67 = v42;
            v25 = (2 * v45) | ((unsigned __int8)v33 >> 7);
            v46 = v45 << 24;
            v47 = v68;
            v69 = v41;
            v32 = v81;
            v17 = (2 * v47) | (v46 >> 31);
            v65 = v25;
            v82 = (2 * v82) | ((unsigned __int8)v47 >> 7);
            v28 = v77;
            v26 = v72;
            v27 = v74;
            v33 = v70;
          }
          while ( v76 != 128 );
          v48 = v77;
          v16 = v81;
          v15 = v44;
          v13 = v69;
          LOBYTE(v77) = v29;
          v79 = v48;
          v23 = v62 - 1;
          v20 = v67;
          v22 = v74;
          v18 = v65;
          v19 = v70;
          v21 = v72;
        }
        while ( v62 > 1 );
        v12 = v61;
      }
    }
    else
    {
      if ( !*a2 )
        return -5;
      v12 = a4 / 16;
      if ( v8 == 2 )
      {
        v51 = (int)(a2 + 48);
        sub_18DA3C(a3, &v84, (int)(a2 + 48));
        v52 = v85;
        v53 = v86;
        v54 = v87;
        *a5 = v84 ^ *(_DWORD *)(a1 + 1);
        a5[1] = *(_DWORD *)(a1 + 5) ^ v52;
        a5[2] = *(_DWORD *)(a1 + 9) ^ v53;
        a5[3] = *(_DWORD *)(a1 + 13) ^ v54;
        if ( a4 >= 32 )
        {
          v55 = a5 + 4;
          v56 = v12 + 1;
          do
          {
            sub_18DA3C(v11, &v84, v51);
            --v56;
            v57 = v85;
            v58 = v86;
            v59 = v87;
            *v55 = v84 ^ *(v11 - 4);
            v55[1] = *(v11 - 3) ^ v57;
            v55[2] = *(v11 - 2) ^ v58;
            v60 = *(v11 - 1);
            v11 += 4;
            v55[3] = v60 ^ v59;
            v55 += 4;
          }
          while ( v56 > 2 );
        }
        return v12 << 7;
      }
      if ( v8 != 1 )
        return -5;
      if ( a4 >= 16 )
      {
        v49 = (int)(a2 + 48);
        v50 = v12 + 1;
        do
        {
          sub_18DA3C(v11, v10, v49);
          --v50;
          v10 += 4;
          v11 += 4;
        }
        while ( v50 > 1 );
      }
    }
    return v12 << 7;
  }
  return result;
}


// ======================================================================
