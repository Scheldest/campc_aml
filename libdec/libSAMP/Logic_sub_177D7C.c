// ADDR: 0x17926e
// SYMBOL: sub_17926E
int __fastcall sub_17926E(_DWORD *a1, int a2)
{
  int v2; // r3
  int result; // r0
  int v4; // r12
  int v5; // r2
  int v6; // r0
  int v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r1
  int v10; // r2
  int v11; // r1
  int v12; // r12
  unsigned __int8 *v13; // r1

  if ( a1[3] <= a2 )
    return -1;
  v2 = a1[12];
  if ( v2 > 1 )
    return -1;
  v4 = a1[1];
  v5 = a1[4];
  v6 = a1[6];
  v7 = v5 + v4;
  if ( v2 )
  {
    v8 = *(_DWORD *)(v7 + 4 * a2);
    v9 = *(_DWORD *)(v7 + 4 * a2 + 4);
    v10 = bswap32(v8);
    v11 = bswap32(v9);
  }
  else
  {
    v12 = *(unsigned __int8 *)(v7 + 2 * a2);
    v13 = (unsigned __int8 *)(v7 + 2 * a2);
    v10 = (2 * v13[1]) | (v12 << 9);
    v11 = (2 * v13[3]) | (v13[2] << 9);
  }
  result = v6 + v10;
  if ( v10 == v11 )
    return -1;
  return result;
}


// ======================================================================
// ADDR: 0x1792c4
// SYMBOL: sub_1792C4
int __fastcall sub_1792C4(_DWORD *a1, int a2, int a3)
{
  int v4; // r2
  int v5; // r3
  int v6; // r0
  int v7; // r2
  int v8; // r5
  float *v9; // r11
  int v10; // r10
  int v11; // r1
  unsigned int v12; // r5
  int v13; // r2
  int v14; // r6
  unsigned int v15; // r0
  float *v16; // r4
  float *v17; // r11
  int v18; // r9
  int v19; // r2
  int v20; // r6
  int v21; // r5
  float v22; // s0
  int v23; // r1
  float *v24; // r0
  int v25; // r4
  float *v26; // r5
  float v27; // s0
  float v28; // s2
  float *v29; // r5
  int i; // r4
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r9
  int v36; // r6
  int v37; // r4
  int v38; // r6
  int v39; // r4
  int v40; // r3
  int v41; // lr
  int v42; // r12
  int v43; // r3
  int v44; // r4
  int v45; // r3
  int v46; // r0
  double *v47; // r0
  double v48; // d16
  int v49; // r0
  float *v50; // r4
  int v51; // r5
  int v52; // r0
  float v53; // s0
  float v54; // s2
  float *v55; // r5
  int v56; // r6
  float v57; // s0
  float v58; // s2
  int v59; // r0
  int v60; // r1
  int v61; // r2
  int v62; // r3
  bool v63; // cc
  int v64; // r2
  int v65; // r4
  int v66; // r6
  int v67; // r9
  double v68; // d16
  float v69; // s0
  double *v70; // r1
  int *v71; // r0
  int v72; // r3
  int *v73; // r1
  int v74; // r0
  int v75; // r1
  int v76; // r6
  int v77; // r2
  int v78; // r5
  int v79; // s0
  int v80; // r6
  int v81; // r6
  float v82; // s2
  float v83; // s0
  float v84; // s0
  float v85; // s2
  int v87; // [sp+10h] [bp-1E8h]
  int v88; // [sp+10h] [bp-1E8h]
  int v91; // [sp+20h] [bp-1D8h]
  int v92; // [sp+24h] [bp-1D4h]
  int v93; // [sp+28h] [bp-1D0h]
  _DWORD v94[3]; // [sp+2Ch] [bp-1CCh] BYREF
  double v95; // [sp+38h] [bp-1C0h] BYREF
  int v96; // [sp+40h] [bp-1B8h]
  int v97; // [sp+48h] [bp-1B0h] BYREF
  _DWORD v98[32]; // [sp+4Ch] [bp-1ACh] BYREF
  float v99; // [sp+CCh] [bp-12Ch] BYREF
  float v100; // [sp+D4h] [bp-124h] BYREF
  double v101; // [sp+188h] [bp-70h] BYREF
  int v102; // [sp+190h] [bp-68h]

  v4 = a1[22];
  v5 = a1[18];
  v97 = a1[24];
  v98[0] = v4;
  sub_178F3A(&v95, a1[16], a1[17], v5, a2);
  v7 = HIDWORD(v95);
  v6 = v96;
  v8 = 0;
  if ( SHIDWORD(v95) < v96 )
  {
    v9 = &v99;
    v91 = 1;
    v93 = 0;
    v92 = 0;
    v10 = 0;
    v87 = 0;
    while ( 1 )
    {
      v11 = v7 + 1;
      HIDWORD(v95) = v7 + 1;
      v12 = *(unsigned __int8 *)(LODWORD(v95) + v7);
      switch ( *(_BYTE *)(LODWORD(v95) + v7) )
      {
        case 1:
        case 3:
        case 0x12:
        case 0x17:
          v93 += v10 / 2;
          goto LABEL_104;
        case 2:
        case 9:
        case 0xD:
        case 0xF:
        case 0x10:
        case 0x11:
          goto LABEL_15;
        case 4:
          if ( v10 >= 1 )
            goto LABEL_82;
          return 0;
        case 5:
          if ( v10 < 2 )
            return 0;
          v25 = 1;
          v26 = v9;
          do
          {
            v27 = *(v26 - 1) + *(float *)(a3 + 16);
            v28 = *v26 + *(float *)(a3 + 20);
            *(float *)(a3 + 16) = v27;
            *(float *)(a3 + 20) = v28;
            sub_179CCC(a3, 2, (int)v27, (int)v28, 0, 0, 0, 0);
            v25 += 2;
            v26 += 2;
          }
          while ( v25 < v10 );
          goto LABEL_104;
        case 6:
          v8 = 0;
          if ( v10 < 1 )
            return v8;
          goto LABEL_144;
        case 7:
          v8 = 0;
          if ( v10 < 1 )
            return v8;
          while ( v8 < v10 )
          {
            v84 = *(float *)(a3 + 16) + 0.0;
            v85 = *(float *)&v98[v8 + 31] + *(float *)(a3 + 20);
            *(float *)(a3 + 16) = v84;
            *(float *)(a3 + 20) = v85;
            sub_179CCC(a3, 2, (int)v84, (int)v85, 0, 0, 0, 0);
            ++v8;
LABEL_144:
            if ( v8 >= v10 )
              break;
            v82 = *(float *)(a3 + 20) + 0.0;
            v83 = *(float *)&v98[v8 + 31] + *(float *)(a3 + 16);
            *(float *)(a3 + 20) = v82;
            *(float *)(a3 + 16) = v83;
            sub_179CCC(a3, 2, (int)v83, (int)v82, 0, 0, 0, 0);
            ++v8;
          }
          goto LABEL_104;
        case 8:
          if ( v10 < 6 )
            return 0;
          v29 = &v100;
          for ( i = 5; i < v10; i += 6 )
          {
            sub_179C16(a3);
            v29 += 6;
          }
          goto LABEL_104;
        case 0xA:
          if ( v87 )
            goto LABEL_122;
          v31 = a1[30];
          if ( !v31 )
            goto LABEL_122;
          v32 = a1[28];
          v33 = v31 & (v31 >> 31);
          if ( v31 < 1 || (v34 = *(unsigned __int8 *)(v32 + v33), ++v33, !v34) )
          {
            v62 = a2 + v33;
            v63 = v31 < a2 + v33;
            v64 = a2 + v33;
            if ( v63 )
              v64 = a1[30];
            if ( v62 < 0 )
              v64 = a1[30];
            if ( v64 >= v31 )
              v46 = 0;
            else
              v46 = *(unsigned __int8 *)(v32 + v64);
            goto LABEL_120;
          }
          if ( v34 != 3 )
            goto LABEL_72;
          v35 = 0;
          v36 = 2;
          do
          {
            if ( v33 >= v31 )
              v37 = 0;
            else
              v37 = *(unsigned __int8 *)(v32 + v33++);
            v35 = (v35 << 8) | v37;
            --v36;
          }
          while ( v36 );
          v38 = 0;
          v39 = 2;
          do
          {
            if ( v33 >= v31 )
              v40 = 0;
            else
              v40 = *(unsigned __int8 *)(v32 + v33++);
            --v39;
            v38 = (v38 << 8) | v40;
          }
          while ( v39 );
          if ( v35 < 1 )
          {
LABEL_72:
            v46 = -1;
LABEL_120:
            v88 = v46;
            goto LABEL_121;
          }
          v41 = 0;
          while ( 1 )
          {
            v42 = v38;
            if ( v33 >= v31 )
              v43 = 0;
            else
              v43 = *(unsigned __int8 *)(v32 + v33++);
            v88 = v43;
            v38 = 0;
            v44 = 2;
            do
            {
              if ( v33 >= v31 )
                v45 = 0;
              else
                v45 = *(unsigned __int8 *)(v32 + v33++);
              --v44;
              v38 = (v38 << 8) | v45;
            }
            while ( v44 );
            if ( v42 <= a2 && v38 > a2 )
              break;
            if ( ++v41 == v35 )
              goto LABEL_72;
          }
LABEL_121:
          v65 = a1[13];
          v66 = a1[14];
          v67 = a1[15];
          sub_178F3A(&v101, a1[25], a1[26], a1[27], v88);
          sub_1790EC(v94, v65, v66, v67, *(__int64 *)&v101, v102);
          v97 = v94[2];
          v98[0] = v94[0];
LABEL_122:
          v87 = 1;
LABEL_123:
          if ( v10 < 1 || v92 > 9 )
            return 0;
          --v10;
          v68 = v95;
          v69 = *(float *)&v98[v10 + 31];
          v70 = (double *)&v98[3 * v92 + 1];
          *((_DWORD *)v70 + 2) = v96;
          v71 = &v97;
          *v70 = v68;
          if ( v12 != 10 )
            v71 = a1 + 21;
          v72 = *v71;
          v73 = v98;
          if ( v12 != 10 )
            v73 = a1 + 19;
          v74 = 0;
          v75 = *v73;
          v76 = 2;
          v77 = v72 & (v72 >> 31);
          do
          {
            if ( v77 >= v72 )
              v78 = 0;
            else
              v78 = *(unsigned __int8 *)(v75 + v77++);
            --v76;
            v74 = (v74 << 8) | v78;
          }
          while ( v76 );
          v79 = (int)v69;
          v80 = 107;
          if ( v74 >= 1240 )
            v80 = 1131;
          if ( v74 > 33899 )
            v80 = 0x8000;
          v81 = v80 + v79;
          if ( v81 < 0 || v81 >= v74 )
          {
            v102 = 0;
            v101 = 0.0;
          }
          else
          {
            sub_178F3A(&v101, v75, v77, v72, v81);
          }
          v96 = v102;
          v95 = v101;
          if ( !v102 )
            return 0;
          HIDWORD(v95) = 0;
          ++v92;
LABEL_105:
          v7 = HIDWORD(v95);
          v6 = v96;
          if ( SHIDWORD(v95) >= v96 )
            return 0;
          break;
        case 0xB:
          if ( v92 < 1 )
            return 0;
          --v92;
          v47 = (double *)&v98[3 * v92 + 1];
          v48 = *v47;
          v96 = *((_DWORD *)v47 + 2);
          v95 = v48;
          goto LABEL_105;
        case 0xC:
          if ( v11 >= v6 )
            return 0;
          v49 = *(unsigned __int8 *)(LODWORD(v95) + v11);
          HIDWORD(v95) = v7 + 2;
          switch ( v49 )
          {
            case '"':
              if ( v10 < 7 )
                return 0;
              break;
            case '#':
              if ( v10 < 13 )
                return 0;
              break;
            case '$':
              if ( v10 < 9 )
                return 0;
              break;
            case '%':
              if ( v10 < 11 )
                return 0;
              break;
            default:
              return 0;
          }
          sub_179C16(a3);
          sub_179C16(a3);
          goto LABEL_104;
        case 0xE:
          sub_179C7E(a3);
          return 1;
        case 0x13:
        case 0x14:
          if ( v91 )
            v13 = v93 + v10 / 2;
          else
            v13 = v93;
          v93 = v13;
          v60 = v11 + (v13 + 7) / 8;
          v61 = v60;
          if ( v6 < v60 )
            v61 = v6;
          if ( v60 < 0 )
            v61 = v6;
          HIDWORD(v95) = v61;
          goto LABEL_103;
        case 0x15:
          if ( v10 >= 2 )
            goto LABEL_82;
          return 0;
        case 0x16:
          if ( v10 < 1 )
            return 0;
LABEL_82:
          sub_179BB4(a3);
LABEL_103:
          v91 = 0;
          goto LABEL_104;
        case 0x18:
          if ( v10 < 8 )
            return 0;
          v50 = &v100;
          v51 = 5;
          do
          {
            sub_179C16(a3);
            v51 += 6;
            v50 += 6;
          }
          while ( v51 < v10 - 2 );
          v52 = v51 - 4;
          v8 = 0;
          if ( v52 >= v10 )
            return v8;
          v53 = *(v50 - 3) + *(float *)(a3 + 16);
          v54 = *(v50 - 2) + *(float *)(a3 + 20);
          *(float *)(a3 + 16) = v53;
          *(float *)(a3 + 20) = v54;
          sub_179CCC(a3, 2, (int)v53, (int)v54, 0, 0, 0, 0);
LABEL_104:
          v10 = 0;
          goto LABEL_105;
        case 0x19:
          if ( v10 < 8 )
            return 0;
          v55 = &v100;
          v56 = 5;
          do
          {
            v57 = *(v55 - 3) + *(float *)(a3 + 16);
            v58 = *(v55 - 2) + *(float *)(a3 + 20);
            *(float *)(a3 + 16) = v57;
            *(float *)(a3 + 20) = v58;
            sub_179CCC(a3, 2, (int)v57, (int)v58, 0, 0, 0, 0);
            v59 = v56 - 2;
            v56 += 2;
            v55 += 2;
          }
          while ( v59 < v10 - 6 );
          if ( v56 >= v10 )
            return 0;
          sub_179C16(a3);
          v10 = 0;
          goto LABEL_105;
        case 0x1A:
        case 0x1B:
          if ( v10 < 4 )
            return 0;
          v14 = v10 & 1;
          v15 = 4;
          if ( (v10 & 1) == 0 )
            v15 = 3;
          if ( v15 >= v10 )
            goto LABEL_104;
          v16 = v9;
          v17 = &v9[v14];
          v18 = v14 + 3;
          do
          {
            sub_179C16(a3);
            v18 += 4;
            v17 += 4;
            v14 += 4;
          }
          while ( v18 < v10 );
          v10 = 0;
          v9 = v16;
          goto LABEL_105;
        case 0x1C:
          goto LABEL_23;
        case 0x1D:
          goto LABEL_123;
        case 0x1E:
          v8 = 0;
          if ( v10 < 4 )
            return v8;
          goto LABEL_148;
        case 0x1F:
          v8 = 0;
          if ( v10 < 4 )
            return v8;
          while ( v8 + 3 < v10 )
          {
            sub_179C16(a3);
            v8 += 4;
LABEL_148:
            if ( v8 + 3 >= v10 )
              break;
            sub_179C16(a3);
            v8 += 4;
          }
          goto LABEL_104;
        default:
          if ( v12 == 255 )
            goto LABEL_17;
LABEL_15:
          if ( v12 < 0x20 )
            return 0;
          if ( v12 == 255 )
          {
LABEL_17:
            v19 = 0;
            v20 = 4;
            do
            {
              if ( v11 >= v6 )
                v21 = 0;
              else
                v21 = *(unsigned __int8 *)(LODWORD(v95) + v11++);
              --v20;
              v19 = (v19 << 8) | v21;
            }
            while ( v20 );
            HIDWORD(v95) = v11;
            v22 = (float)v19 * 0.000015259;
          }
          else
          {
LABEL_23:
            v23 = v7;
            if ( v6 < v7 )
              v23 = v6;
            if ( v7 < 0 )
              v23 = v6;
            HIDWORD(v95) = v23;
            v22 = (float)(__int16)sub_1791AA((int *)&v95);
          }
          if ( v10 > 47 )
            return 0;
          v24 = (float *)&v98[v10++ + 31];
          *v24 = v22;
          goto LABEL_105;
      }
    }
  }
  return v8;
}


// ======================================================================
