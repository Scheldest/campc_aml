// ADDR: 0xa41ec
// SYMBOL: sub_A41EC
int __fastcall sub_A41EC(int a1, int a2, float *a3)
{
  int v3; // r11
  int v4; // r8
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int result; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r4
  unsigned int v13; // r10
  int v14; // r2
  int v15; // r6
  unsigned int v16; // r0
  int v17; // r12
  int v18; // r0
  float v19; // s0
  float *v20; // r1
  int v21; // r12
  int i; // r0
  int v23; // r5
  int v24; // r6
  int v25; // r3
  float v26; // s0
  float v27; // s2
  bool v28; // zf
  int v29; // r3
  int v30; // r2
  float *v31; // r5
  int v32; // r6
  int v33; // r4
  int v34; // r0
  int v35; // lr
  int v36; // r6
  int v37; // r2
  int v38; // r3
  double *v39; // r0
  double v40; // d16
  int v41; // r0
  float *v42; // r5
  int v43; // r10
  int v44; // r4
  int v45; // r6
  float v46; // s0
  float v47; // s2
  int v48; // r1
  int v49; // r0
  float *v50; // r0
  int v51; // r12
  int v52; // lr
  int v53; // r2
  __int64 v54; // r4
  int v55; // r1
  int v56; // r3
  bool v57; // cc
  float v58; // s0
  float v59; // s2
  int v60; // r6
  int v61; // r3
  float *v62; // r0
  int v63; // r0
  int v64; // r2
  int v65; // r2
  int v66; // r6
  int v67; // r1
  float *v68; // r0
  unsigned int v69; // r0
  int v70; // r5
  int v71; // r8
  float *v72; // r11
  int v73; // r2
  int v74; // r3
  int v75; // r1
  int v76; // r2
  int v77; // r12
  int v78; // r6
  int v79; // r5
  int v80; // r5
  int v81; // r1
  int v82; // r3
  int v83; // r5
  int v84; // r1
  int v85; // r6
  int v86; // r5
  __int64 v87; // kr18_8
  double v88; // d16
  float v89; // s0
  double *v90; // r1
  int *v91; // r0
  int v92; // r3
  int *v93; // r0
  int v94; // r1
  int v95; // r2
  int v96; // r0
  int v97; // r0
  int v98; // r6
  int v99; // s0
  int v100; // r0
  int v101; // r6
  int v102; // r6
  float v103; // s2
  float v104; // r3
  float v105; // s0
  int v106; // r1
  int v107; // r2
  int v108; // r3
  int v109; // r6
  int v110; // r2
  float v111; // s0
  float v112; // r3
  float v113; // s2
  int v114; // r2
  int v115; // r1
  int v116; // r3
  int v117; // r6
  int v118; // r2
  int v119; // r4
  int v120; // r4
  int v121; // [sp+Ch] [bp-1ECh]
  int v122; // [sp+10h] [bp-1E8h]
  int v123; // [sp+18h] [bp-1E0h]
  int v124; // [sp+18h] [bp-1E0h]
  int v125; // [sp+20h] [bp-1D8h]
  int v126; // [sp+24h] [bp-1D4h]
  int v127; // [sp+28h] [bp-1D0h]
  int v128; // [sp+2Ch] [bp-1CCh] BYREF
  int v129; // [sp+30h] [bp-1C8h] BYREF
  _DWORD v130[3]; // [sp+34h] [bp-1C4h] BYREF
  double v131; // [sp+40h] [bp-1B8h] BYREF
  int v132; // [sp+48h] [bp-1B0h]
  double v133; // [sp+50h] [bp-1A8h] BYREF
  int v134; // [sp+58h] [bp-1A0h]
  _DWORD v135[31]; // [sp+5Ch] [bp-19Ch] BYREF
  float v136; // [sp+D8h] [bp-120h] BYREF
  float v137; // [sp+E0h] [bp-118h] BYREF

  v3 = a1;
  v4 = a2;
  v6 = *(_DWORD *)(a1 + 88);
  v128 = *(_DWORD *)(v3 + 96);
  v129 = v6;
  sub_A3E34(&v131, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 68), *(_DWORD *)(v3 + 72), a2);
  v8 = HIDWORD(v131);
  v7 = v132;
  result = 0;
  if ( SHIDWORD(v131) < v132 )
  {
    v125 = 1;
    v127 = 0;
    v10 = 0;
    v126 = 0;
    v123 = 0;
    while ( 1 )
    {
      v11 = v8 + 1;
      v12 = v10;
      HIDWORD(v131) = v8 + 1;
      v13 = *(unsigned __int8 *)(LODWORD(v131) + v8);
      switch ( *(_BYTE *)(LODWORD(v131) + v8) )
      {
        case 1:
        case 3:
        case 0x12:
        case 0x17:
          v10 = 0;
          v127 += v12 / 2;
          goto LABEL_4;
        case 4:
          if ( v10 >= 1 )
            goto LABEL_71;
          return 0;
        case 5:
          if ( v10 < 2 )
            return 0;
          v20 = &v136;
          v21 = v10;
          for ( i = 1; i < v21; i += 2 )
          {
            v26 = *(v20 - 1) + a3[4];
            v27 = *v20 + a3[5];
            v28 = *(_DWORD *)a3 == 0;
            a3[4] = v26;
            a3[5] = v27;
            v29 = (int)v26;
            v30 = (int)v27;
            if ( v28 )
            {
              v24 = *((_DWORD *)a3 + 11);
              v23 = *((_DWORD *)a3 + 10);
              *(_WORD *)(v23 + 14 * v24) = v29;
              v25 = v23 + 14 * v24;
              *(_DWORD *)(v25 + 8) = 0;
              *(_DWORD *)(v25 + 4) = 0;
              *(_BYTE *)(v25 + 12) = 2;
              *(_WORD *)(v25 + 2) = v30;
            }
            else
            {
              if ( *((_DWORD *)a3 + 7) >= v29 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 7) = v29;
              }
              else
              {
                *((_DWORD *)a3 + 7) = v29;
              }
              if ( *((_DWORD *)a3 + 9) >= v30 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 9) = v30;
              }
              else
              {
                *((_DWORD *)a3 + 9) = v30;
              }
              if ( *((_DWORD *)a3 + 6) <= v29 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 6) = v29;
              }
              else
              {
                *((_DWORD *)a3 + 6) = v29;
              }
              if ( *((_DWORD *)a3 + 8) <= v30 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 8) = v30;
              }
              else
              {
                *((_DWORD *)a3 + 8) = v30;
              }
              v24 = *((_DWORD *)a3 + 11);
              *((_DWORD *)a3 + 1) = 1;
            }
            v20 += 2;
            *((_DWORD *)a3 + 11) = v24 + 1;
          }
          goto LABEL_3;
        case 6:
          result = 0;
          if ( v10 >= 1 )
            goto LABEL_211;
          return result;
        case 7:
          result = 0;
          if ( v10 < 1 )
            return result;
          do
          {
            v111 = a3[4] + 0.0;
            v112 = *a3;
            v113 = *(float *)&v135[result + 30] + a3[5];
            a3[4] = v111;
            a3[5] = v113;
            v114 = (int)v111;
            v115 = (int)v113;
            if ( v112 == 0.0 )
            {
              v116 = *((_DWORD *)a3 + 11);
              v117 = *((_DWORD *)a3 + 10);
              *(_WORD *)(v117 + 14 * v116) = v114;
              v118 = v117 + 14 * v116;
              *(_DWORD *)(v118 + 8) = 0;
              *(_DWORD *)(v118 + 4) = 0;
              *(_BYTE *)(v118 + 12) = 2;
              *(_WORD *)(v118 + 2) = v115;
            }
            else
            {
              if ( *((_DWORD *)a3 + 7) >= v114 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 7) = v114;
              }
              else
              {
                *((_DWORD *)a3 + 7) = v114;
              }
              if ( *((_DWORD *)a3 + 9) >= v115 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 9) = v115;
              }
              else
              {
                *((_DWORD *)a3 + 9) = v115;
              }
              if ( *((_DWORD *)a3 + 6) <= v114 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 6) = v114;
              }
              else
              {
                *((_DWORD *)a3 + 6) = v114;
              }
              if ( *((_DWORD *)a3 + 8) <= v115 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 8) = v115;
              }
              else
              {
                *((_DWORD *)a3 + 8) = v115;
              }
              v116 = *((_DWORD *)a3 + 11);
              *((_DWORD *)a3 + 1) = 1;
            }
            *((_DWORD *)a3 + 11) = v116 + 1;
            if ( ++result >= v10 )
              break;
LABEL_211:
            v103 = a3[5] + 0.0;
            v104 = *a3;
            v105 = *(float *)&v135[result + 30] + a3[4];
            a3[5] = v103;
            a3[4] = v105;
            v106 = (int)v103;
            v107 = (int)v105;
            if ( v104 == 0.0 )
            {
              v108 = *((_DWORD *)a3 + 11);
              v109 = *((_DWORD *)a3 + 10);
              *(_WORD *)(v109 + 14 * v108) = v107;
              v110 = v109 + 14 * v108;
              *(_DWORD *)(v110 + 8) = 0;
              *(_DWORD *)(v110 + 4) = 0;
              *(_BYTE *)(v110 + 12) = 2;
              *(_WORD *)(v110 + 2) = v106;
            }
            else
            {
              if ( *((_DWORD *)a3 + 7) >= v107 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 7) = v107;
              }
              else
              {
                *((_DWORD *)a3 + 7) = v107;
              }
              if ( *((_DWORD *)a3 + 9) >= v106 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 9) = v106;
              }
              else
              {
                *((_DWORD *)a3 + 9) = v106;
              }
              if ( *((_DWORD *)a3 + 6) <= v107 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 6) = v107;
              }
              else
              {
                *((_DWORD *)a3 + 6) = v107;
              }
              if ( *((_DWORD *)a3 + 8) <= v106 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 8) = v106;
              }
              else
              {
                *((_DWORD *)a3 + 8) = v106;
              }
              v108 = *((_DWORD *)a3 + 11);
              *((_DWORD *)a3 + 1) = 1;
            }
            ++result;
            *((_DWORD *)a3 + 11) = v108 + 1;
          }
          while ( result < v10 );
LABEL_3:
          v10 = 0;
          goto LABEL_4;
        case 8:
          if ( v10 < 6 )
            return 0;
          v31 = &v137;
          v32 = v12;
          v33 = 5;
          do
          {
            sub_A50F0(a3);
            v33 += 6;
            v31 += 6;
          }
          while ( v33 < v32 );
          goto LABEL_3;
        case 0xA:
          if ( v123 )
            goto LABEL_189;
          v34 = *(_DWORD *)(v3 + 120);
          if ( !v34 )
            goto LABEL_189;
          v35 = *(_DWORD *)(v3 + 112);
          v36 = v34 & (v34 >> 31);
          if ( v34 < 1 )
            goto LABEL_157;
          v37 = v36 + 1;
          if ( *(_BYTE *)(v35 + v36) )
          {
            if ( *(_BYTE *)(v35 + v36) != 3 )
              goto LABEL_187;
            if ( v37 >= v34 )
            {
              v38 = 0;
            }
            else
            {
              v38 = *(unsigned __int8 *)(v35 + v37) << 8;
              v37 = v36 + 2;
            }
            if ( v37 >= v34 )
              v78 = 0;
            else
              v78 = *(unsigned __int8 *)(v35 + v37++);
            if ( v37 >= v34 )
            {
              v80 = 0;
            }
            else
            {
              v79 = *(unsigned __int8 *)(v35 + v37++);
              v80 = v79 << 8;
            }
            if ( v37 >= v34 )
              v81 = 0;
            else
              v81 = *(unsigned __int8 *)(v35 + v37++);
            v82 = v38 | v78;
            if ( v82 < 1 )
            {
LABEL_187:
              v77 = -1;
              goto LABEL_188;
            }
            v83 = v80 | v81;
            while ( 1 )
            {
              v84 = v83;
              if ( v37 >= v34 )
                break;
              v77 = *(unsigned __int8 *)(v35 + v37++);
              if ( v37 >= v34 )
                goto LABEL_179;
              v85 = *(unsigned __int8 *)(v35 + v37++);
              if ( v37 < v34 )
              {
LABEL_183:
                v86 = *(unsigned __int8 *)(v35 + v37++);
                goto LABEL_184;
              }
LABEL_180:
              v86 = 0;
LABEL_184:
              v83 = v86 | (v85 << 8);
              if ( v84 <= v4 && v83 > v4 )
                goto LABEL_188;
              if ( !--v82 )
                goto LABEL_187;
            }
            v77 = 0;
LABEL_179:
            v85 = 0;
            if ( v37 < v34 )
              goto LABEL_183;
            goto LABEL_180;
          }
          ++v36;
LABEL_157:
          v76 = v36 + v4;
          if ( v34 < v36 + v4 )
            v76 = *(_DWORD *)(v3 + 120);
          if ( v36 + v4 < 0 )
            v76 = *(_DWORD *)(v3 + 120);
          if ( v76 >= v34 )
            v77 = 0;
          else
            v77 = *(unsigned __int8 *)(v35 + v76);
LABEL_188:
          v124 = *(_DWORD *)(v3 + 60);
          v87 = *(_QWORD *)(v3 + 52);
          sub_A3E34(&v133, *(_DWORD *)(v3 + 100), *(_DWORD *)(v3 + 104), *(_DWORD *)(v3 + 108), v77);
          sub_A4014(v130, v87, SHIDWORD(v87), v124, SLODWORD(v133), SHIDWORD(v133), v134);
          v128 = v130[2];
          v129 = v130[0];
LABEL_189:
          v123 = 1;
LABEL_190:
          if ( v12 < 1 || v126 > 9 )
            return 0;
          v88 = v131;
          v10 = v12 - 1;
          v89 = *(float *)&v135[v12 + 29];
          v90 = (double *)&v135[3 * v126];
          *((_DWORD *)v90 + 2) = v132;
          v91 = &v128;
          *v90 = v88;
          if ( v13 != 10 )
            v91 = (int *)(v3 + 84);
          v92 = *v91;
          v93 = &v129;
          if ( v13 != 10 )
            v93 = (int *)(v3 + 76);
          v94 = *v93;
          v95 = v92 & (v92 >> 31);
          if ( v92 < 1 )
          {
            v97 = 0;
            if ( v95 >= v92 )
            {
LABEL_200:
              v98 = 0;
              goto LABEL_201;
            }
          }
          else
          {
            v96 = *(unsigned __int8 *)(v94 + v95++);
            v97 = v96 << 8;
            if ( v95 >= v92 )
              goto LABEL_200;
          }
          v98 = *(unsigned __int8 *)(v94 + v95++);
LABEL_201:
          v99 = (int)v89;
          v100 = v97 | v98;
          v101 = 107;
          if ( v100 >= 1240 )
            v101 = 1131;
          if ( v100 > 33899 )
            v101 = 0x8000;
          v102 = v101 + v99;
          if ( v102 < 0 || v102 >= v100 )
          {
            v134 = 0;
            v133 = 0.0;
          }
          else
          {
            sub_A3E34(&v133, v94, v95, v92, v102);
          }
          v132 = v134;
          v131 = v133;
          if ( !v134 )
            return 0;
          HIDWORD(v131) = 0;
          ++v126;
LABEL_4:
          v8 = HIDWORD(v131);
          v7 = v132;
          if ( SHIDWORD(v131) >= v132 )
            return 0;
          break;
        case 0xB:
          if ( v126 < 1 )
            return 0;
          --v126;
          v39 = (double *)&v135[3 * v126];
          v40 = *v39;
          v132 = *((_DWORD *)v39 + 2);
          v131 = v40;
          goto LABEL_4;
        case 0xC:
          if ( v11 >= v7 )
            return 0;
          v41 = *(unsigned __int8 *)(LODWORD(v131) + v11);
          HIDWORD(v131) = v8 + 2;
          switch ( v41 )
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
          sub_A50F0(a3);
          v62 = a3;
          goto LABEL_108;
        case 0xE:
          sub_A520E(a3);
          return 1;
        case 0x13:
        case 0x14:
          if ( v125 )
            v14 = v127 + v10 / 2;
          else
            v14 = v127;
          v127 = v14;
          v63 = v11 + (v14 + 7) / 8;
          v64 = v63;
          if ( v7 < v63 )
            v64 = v7;
          if ( v63 < 0 )
            v64 = v7;
          HIDWORD(v131) = v64;
          goto LABEL_115;
        case 0x15:
          if ( v10 >= 2 )
            goto LABEL_71;
          return 0;
        case 0x16:
          if ( v10 < 1 )
            return 0;
LABEL_71:
          sub_A5030(a3);
LABEL_115:
          v10 = 0;
          v125 = 0;
          goto LABEL_4;
        case 0x18:
          if ( v10 < 8 )
            return 0;
          v42 = &v137;
          v43 = v12;
          v44 = v12 - 2;
          v45 = 5;
          do
          {
            sub_A50F0(a3);
            v45 += 6;
            v42 += 6;
          }
          while ( v45 < v44 );
          if ( v45 - 4 >= v43 )
            return 0;
          v46 = *(v42 - 3) + a3[4];
          v47 = *(v42 - 2) + a3[5];
          v28 = *(_DWORD *)a3 == 0;
          a3[4] = v46;
          a3[5] = v47;
          v48 = (int)v46;
          v49 = (int)v47;
          if ( v28 )
          {
            v73 = *((_DWORD *)a3 + 11);
            v74 = *((_DWORD *)a3 + 10);
            *(_WORD *)(v74 + 14 * v73) = v48;
            v75 = v74 + 14 * v73;
            *(_DWORD *)(v75 + 8) = 0;
            *(_DWORD *)(v75 + 4) = 0;
            *(_BYTE *)(v75 + 12) = 2;
            *(_WORD *)(v75 + 2) = v49;
          }
          else
          {
            if ( *((_DWORD *)a3 + 7) >= v48 )
            {
              if ( !*((_DWORD *)a3 + 1) )
                *((_DWORD *)a3 + 7) = v48;
            }
            else
            {
              *((_DWORD *)a3 + 7) = v48;
            }
            if ( *((_DWORD *)a3 + 9) >= v49 )
            {
              if ( !*((_DWORD *)a3 + 1) )
                *((_DWORD *)a3 + 9) = v49;
            }
            else
            {
              *((_DWORD *)a3 + 9) = v49;
            }
            if ( *((_DWORD *)a3 + 6) <= v48 )
            {
              if ( !*((_DWORD *)a3 + 1) )
                *((_DWORD *)a3 + 6) = v48;
            }
            else
            {
              *((_DWORD *)a3 + 6) = v48;
            }
            if ( *((_DWORD *)a3 + 8) <= v49 )
            {
              if ( !*((_DWORD *)a3 + 1) )
                *((_DWORD *)a3 + 8) = v49;
            }
            else
            {
              *((_DWORD *)a3 + 8) = v49;
            }
            v73 = *((_DWORD *)a3 + 11);
            *((_DWORD *)a3 + 1) = 1;
          }
          *((_DWORD *)a3 + 11) = v73 + 1;
          v10 = 0;
          goto LABEL_4;
        case 0x19:
          if ( v10 < 8 )
            return 0;
          v50 = &v137;
          v51 = v10 - 6;
          v52 = v10;
          v53 = 5;
          do
          {
            v58 = *(v50 - 3) + a3[4];
            v59 = *(v50 - 2) + a3[5];
            v28 = *(_DWORD *)a3 == 0;
            a3[4] = v58;
            a3[5] = v59;
            v60 = (int)v58;
            v61 = (int)v59;
            if ( v28 )
            {
              v54 = *((_QWORD *)a3 + 5);
              *(_WORD *)(v54 + 14 * HIDWORD(v54)) = v60;
              v55 = v54 + 14 * HIDWORD(v54);
              *(_DWORD *)(v55 + 8) = 0;
              *(_DWORD *)(v55 + 4) = 0;
              *(_BYTE *)(v55 + 12) = 2;
              *(_WORD *)(v55 + 2) = v61;
            }
            else
            {
              if ( *((_DWORD *)a3 + 7) >= v60 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 7) = v60;
              }
              else
              {
                *((_DWORD *)a3 + 7) = v60;
              }
              if ( *((_DWORD *)a3 + 9) >= v61 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 9) = v61;
              }
              else
              {
                *((_DWORD *)a3 + 9) = v61;
              }
              if ( *((_DWORD *)a3 + 6) <= v60 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 6) = v60;
              }
              else
              {
                *((_DWORD *)a3 + 6) = v60;
              }
              if ( *((_DWORD *)a3 + 8) <= v61 )
              {
                if ( !*((_DWORD *)a3 + 1) )
                  *((_DWORD *)a3 + 8) = v61;
              }
              else
              {
                *((_DWORD *)a3 + 8) = v61;
              }
              *((float *)&v54 + 1) = a3[11];
              *((_DWORD *)a3 + 1) = 1;
            }
            v56 = v53 + 2;
            *((_DWORD *)a3 + 11) = HIDWORD(v54) + 1;
            v50 += 2;
            v57 = v53 - 2 < v51;
            v53 += 2;
          }
          while ( v57 );
          if ( v56 >= v52 )
            return 0;
          v62 = a3;
LABEL_108:
          sub_A50F0(v62);
          v10 = 0;
          goto LABEL_4;
        case 0x1A:
        case 0x1B:
          if ( v10 < 4 )
            return 0;
          v15 = v10 & 1;
          v16 = 4;
          if ( (v10 & 1) == 0 )
            v16 = 3;
          if ( v16 >= v10 )
            goto LABEL_3;
          sub_A50F0(a3);
          v69 = 8;
          if ( (v10 & 1) == 0 )
            v69 = 7;
          if ( v69 >= v10 )
            goto LABEL_3;
          v70 = v15 + 4;
          v121 = v4;
          v122 = v3;
          v71 = v15 + 7;
          v72 = &v136 + v15 + 4;
          do
          {
            sub_A50F0(a3);
            v71 += 4;
            v72 += 4;
            v70 += 4;
          }
          while ( v71 < v12 );
          v10 = 0;
          v4 = v121;
          v3 = v122;
          goto LABEL_4;
        case 0x1C:
          goto LABEL_18;
        case 0x1D:
          goto LABEL_190;
        case 0x1E:
          result = 0;
          if ( v10 < 4 )
            return result;
          goto LABEL_252;
        case 0x1F:
          result = 0;
          if ( v10 < 4 )
            return result;
          while ( result + 3 < v10 )
          {
            v120 = result + 4;
            sub_A50F0(a3);
            result = v120;
LABEL_252:
            if ( result + 3 >= v10 )
              break;
            v119 = result + 4;
            sub_A50F0(a3);
            result = v119;
          }
          goto LABEL_3;
        case 0xFF:
          goto LABEL_16;
        default:
          if ( v13 < 0x20 )
            return 0;
          if ( v13 == 255 )
          {
LABEL_16:
            if ( v11 >= v7 )
            {
              v17 = 0;
            }
            else
            {
              v17 = *(unsigned __int8 *)(LODWORD(v131) + v11);
              v11 = v8 + 2;
            }
            if ( v11 >= v7 )
            {
              v65 = 0;
LABEL_119:
              v66 = 0;
              if ( v11 >= v7 )
                goto LABEL_120;
LABEL_123:
              v67 = *(unsigned __int8 *)(LODWORD(v131) + v11++);
            }
            else
            {
              v65 = *(unsigned __int8 *)(LODWORD(v131) + v11++);
              if ( v11 >= v7 )
                goto LABEL_119;
              v66 = *(unsigned __int8 *)(LODWORD(v131) + v11++);
              if ( v11 < v7 )
                goto LABEL_123;
LABEL_120:
              v67 = 0;
            }
            HIDWORD(v131) = v11;
            v19 = (float)(v67 | (((v17 << 16) | (v65 << 8) | v66) << 8)) * 0.000015259;
            goto LABEL_125;
          }
LABEL_18:
          v18 = v8;
          if ( v7 < v8 )
            v18 = v7;
          if ( v8 < 0 )
            v18 = v7;
          HIDWORD(v131) = v18;
          v19 = (float)(__int16)sub_A40F8((int *)&v131);
LABEL_125:
          if ( v10 > 47 )
            return 0;
          v68 = (float *)&v135[v10++ + 30];
          *v68 = v19;
          goto LABEL_4;
      }
    }
  }
  return result;
}


// ======================================================================
