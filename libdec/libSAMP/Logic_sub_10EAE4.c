// ADDR: 0x10ee00
// SYMBOL: sub_10EE00
void __fastcall sub_10EE00(int a1, int a2, void (__fastcall *a3)(int), unsigned __int8 *a4)
{
  int v6; // r5
  float *v8; // r6
  float v9; // r10
  int v10; // r5
  float *v11; // r0
  float v12; // s4
  char v13; // r0
  float v14; // r4
  int v15; // r0
  double v16; // d16
  int v17; // r0
  void *v18; // r5
  char v19; // r4
  char v20; // r12
  __int16 v21; // r1
  int v22; // r2
  int v23; // r10
  int v24; // r0
  double v25; // d16
  char *v26; // r1
  int v27; // r2
  int v28; // r0
  double v29; // d16
  int v30; // r0
  double v31; // d16
  char *v32; // r1
  int v33; // r2
  unsigned int v34; // r0
  unsigned int v35; // r1
  int v36; // r0
  double v37; // d16
  int v38; // r0
  double v39; // d16
  char *v40; // r1
  int v41; // r2
  int v42; // r0
  double v43; // d16
  _BYTE *v44; // r1
  int v45; // r2
  int v46; // r0
  double v47; // d16
  int v48; // r0
  double v49; // d16
  _BYTE *v50; // r1
  int v51; // r2
  int v52; // r0
  double v53; // d16
  int v54; // r0
  double v55; // d16
  char *v56; // r1
  int v57; // r2
  char *v58; // r1
  int v59; // r2
  double v60; // d16
  void *v61; // r2
  int v62; // r2
  __int64 v63; // r0
  int *v64; // r1
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r5
  char v71; // [sp+8h] [bp-B8h]
  double v73; // [sp+10h] [bp-B0h] BYREF
  void *v74; // [sp+18h] [bp-A8h]
  int v75; // [sp+1Ch] [bp-A4h]
  int v76; // [sp+20h] [bp-A0h]
  unsigned __int8 v77; // [sp+24h] [bp-9Ch] BYREF
  _BYTE v78[7]; // [sp+25h] [bp-9Bh] BYREF
  void *v79; // [sp+2Ch] [bp-94h]
  unsigned __int8 v80; // [sp+30h] [bp-90h] BYREF
  _BYTE v81[7]; // [sp+31h] [bp-8Fh] BYREF
  void *v82; // [sp+38h] [bp-88h]
  _BYTE v83[8]; // [sp+3Ch] [bp-84h] BYREF
  void *v84; // [sp+44h] [bp-7Ch]
  double v85; // [sp+48h] [bp-78h] BYREF
  void *v86; // [sp+50h] [bp-70h]
  double v87; // [sp+58h] [bp-68h] BYREF
  void *v88; // [sp+60h] [bp-60h]
  double v89; // [sp+68h] [bp-58h] BYREF
  void *v90; // [sp+70h] [bp-50h]
  double v91; // [sp+78h] [bp-48h] BYREF
  void *v92; // [sp+80h] [bp-40h]
  double v93; // [sp+88h] [bp-38h] BYREF
  void *v94; // [sp+90h] [bp-30h]
  _DWORD v95[10]; // [sp+98h] [bp-28h] BYREF

  if ( *(_BYTE *)a1 )
  {
    v6 = *(_DWORD *)(a2 + 20);
    if ( v6 )
    {
      v8 = (float *)(v6 + 48);
      v9 = atan2f(COERCE_FLOAT(*(_DWORD *)(v6 + 16) ^ 0x80000000), *(float *)(v6 + 20));
    }
    else
    {
      v9 = *(float *)(a2 + 16);
      v8 = (float *)(a2 + 4);
    }
    v10 = sub_1082E4();
    if ( *(unsigned __int8 *)(sub_1082E4() + 1157) << 31 )
      v10 = *(_DWORD *)(sub_1082E4() + 1424);
    v11 = *(float **)(v10 + 20);
    v12 = v11[14] - v8[2];
    if ( *(float *)(a1 + 4) * *(float *)(a1 + 4) >= (float)((float)((float)((float)(v11[13] - v8[1])
                                                                          * (float)(v11[13] - v8[1]))
                                                                  + (float)((float)(v11[12] - *v8)
                                                                          * (float)(v11[12] - *v8)))
                                                          + (float)(v12 * v12)) )
    {
      ((void (__fastcall *)(float *, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(dword_23DF24 + 6051737))(
        v8,
        v95,
        0,
        0,
        0,
        0);
      if ( *(float *)&v95[2] >= 1.0 )
      {
        v13 = *(_BYTE *)(a2 + 58);
        v93 = 0.0;
        v94 = 0;
        v14 = v9;
        switch ( v13 & 7 )
        {
          case 1:
            std::string::assign((int)&v93, "Map: ");
            goto LABEL_20;
          case 2:
            std::string::assign((int)&v93, "Vehicle: ");
            LOWORD(v23) = -1;
            if ( !dword_23DEF4 )
              goto LABEL_21;
            v62 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
            if ( !v62 )
              goto LABEL_21;
            v63 = *(_QWORD *)(v62 + 60000);
            if ( (_DWORD)v63 == HIDWORD(v63) )
              goto LABEL_88;
            while ( *(_DWORD *)(v62 + 4 * *(_DWORD *)v63 + 8000) != a2 )
            {
              LODWORD(v63) = v63 + 4;
              if ( (_DWORD)v63 == HIDWORD(v63) )
                goto LABEL_21;
            }
LABEL_88:
            if ( (_DWORD)v63 != HIDWORD(v63) )
              v23 = *(_DWORD *)v63;
            goto LABEL_21;
          case 3:
            std::string::assign((int)&v93, "Ped: ");
            LOWORD(v23) = -1;
            if ( !dword_23DEF4 )
              goto LABEL_21;
            v64 = *(int **)(dword_23DEF4 + 944);
            v65 = *v64;
            if ( !*v64 )
              goto LABEL_95;
            if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v65 + 5052) + 28) + 92) == a2 )
              v66 = *(unsigned __int16 *)(v65 + 5024);
            else
              v66 = sub_148F74(v65, a2, 1);
            if ( v66 != 0xFFFF )
            {
              LOWORD(v23) = v66;
              std::string::assign((int)&v93, "Player");
              goto LABEL_21;
            }
            v64 = *(int **)(dword_23DEF4 + 944);
LABEL_95:
            v68 = v64[7];
            if ( !v68 )
              goto LABEL_21;
            v69 = v68 + 5000;
            v70 = 0;
            break;
          case 4:
            std::string::assign((int)&v93, "Object: ");
            LOWORD(v23) = -1;
            if ( dword_23DEF4 )
            {
              v67 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 16);
              if ( v67 )
                LOWORD(v23) = sub_148684(v67, a2);
            }
            goto LABEL_21;
          default:
            std::to_string((std::__ndk1 *)&v91, v13 & 7);
            v15 = std::string::insert((int)&v91, 0, "Type ");
            v16 = *(double *)v15;
            v74 = *(void **)(v15 + 8);
            v73 = v16;
            *(_DWORD *)v15 = 0;
            *(_DWORD *)(v15 + 4) = 0;
            *(_DWORD *)(v15 + 8) = 0;
            v17 = std::string::append((int)&v73, ": ");
            v18 = *(void **)(v17 + 8);
            v19 = *(_BYTE *)v17;
            v20 = *(_BYTE *)(v17 + 1);
            v21 = *(_WORD *)(v17 + 6);
            v22 = *(_DWORD *)(v17 + 2);
            *(_DWORD *)v17 = 0;
            *(_DWORD *)(v17 + 4) = 0;
            *(_DWORD *)(v17 + 8) = 0;
            LODWORD(v89) = v22;
            WORD2(v89) = v21;
            if ( LOBYTE(v93) << 31 )
            {
              v71 = v20;
              operator delete(v94);
              v20 = v71;
            }
            BYTE1(v93) = v20;
            LOBYTE(v93) = v19;
            *(_DWORD *)((char *)&v93 + 2) = LODWORD(v89);
            HIWORD(v93) = WORD2(v89);
            v94 = v18;
            if ( LOBYTE(v73) << 31 )
              operator delete(v74);
            v14 = v9;
            if ( LOBYTE(v91) << 31 )
              operator delete(v92);
LABEL_20:
            LOWORD(v23) = -1;
            goto LABEL_21;
        }
        while ( *(_DWORD *)(v69 + 4 * v70) != a2 )
        {
          if ( ++v70 == 1000 )
            goto LABEL_21;
        }
        if ( (unsigned __int16)v70 != 0xFFFF )
        {
          std::string::assign((int)&v93, "Actor");
          LOWORD(v23) = v70;
        }
LABEL_21:
        std::to_string((std::__ndk1 *)&v87, *(unsigned __int16 *)(a2 + 38));
        v24 = std::string::append((int)&v87, ", samp id: ");
        v25 = *(double *)v24;
        v90 = *(void **)(v24 + 8);
        v89 = v25;
        *(_DWORD *)v24 = 0;
        *(_DWORD *)(v24 + 4) = 0;
        *(_DWORD *)(v24 + 8) = 0;
        std::to_string((std::__ndk1 *)&v85, (__int16)v23);
        v27 = HIDWORD(v85);
        v26 = (char *)v86;
        if ( (LOBYTE(v85) & 1) == 0 )
        {
          v26 = (char *)&v85 + 1;
          v27 = LOBYTE(v85) >> 1;
        }
        v28 = std::string::append(&v89, v26, v27, LOBYTE(v85) & 1);
        v29 = *(double *)v28;
        v92 = *(void **)(v28 + 8);
        v91 = v29;
        *(_DWORD *)v28 = 0;
        *(_DWORD *)(v28 + 4) = 0;
        *(_DWORD *)(v28 + 8) = 0;
        v30 = std::string::append((int)&v91, "\n");
        v31 = *(double *)v30;
        v74 = *(void **)(v30 + 8);
        v73 = v31;
        *(_DWORD *)v30 = 0;
        *(_DWORD *)(v30 + 4) = 0;
        *(_DWORD *)(v30 + 8) = 0;
        v33 = HIDWORD(v73);
        v32 = (char *)v74;
        if ( (LOBYTE(v73) & 1) == 0 )
        {
          v32 = (char *)&v73 + 1;
          v33 = LOBYTE(v73) >> 1;
        }
        std::string::append(&v93, v32, v33, LOBYTE(v73) & 1);
        if ( LOBYTE(v73) << 31 )
          operator delete(v74);
        if ( LOBYTE(v91) << 31 )
          operator delete(v92);
        if ( LOBYTE(v85) << 31 )
          operator delete(v86);
        if ( LOBYTE(v89) << 31 )
          operator delete(v90);
        if ( LOBYTE(v87) << 31 )
          operator delete(v88);
        v34 = *a4;
        v35 = *((_DWORD *)a4 + 1);
        if ( !(v34 << 31) )
          v35 = v34 >> 1;
        if ( v35 )
        {
          v36 = std::string::insert((int)a4, 0, "VTable (caller): ");
          v37 = *(double *)v36;
          v92 = *(void **)(v36 + 8);
          v91 = v37;
          *(_DWORD *)v36 = 0;
          *(_DWORD *)(v36 + 4) = 0;
          *(_DWORD *)(v36 + 8) = 0;
          v38 = std::string::append((int)&v91, "\n");
          v39 = *(double *)v38;
          v74 = *(void **)(v38 + 8);
          v73 = v39;
          *(_DWORD *)v38 = 0;
          *(_DWORD *)(v38 + 4) = 0;
          *(_DWORD *)(v38 + 8) = 0;
          v41 = HIDWORD(v73);
          v40 = (char *)v74;
          if ( (LOBYTE(v73) & 1) == 0 )
          {
            v40 = (char *)&v73 + 1;
            v41 = LOBYTE(v73) >> 1;
          }
          std::string::append(&v93, v40, v41, LOBYTE(v73) & 1);
          if ( LOBYTE(v73) << 31 )
            operator delete(v74);
          if ( LOBYTE(v91) << 31 )
            operator delete(v92);
        }
        std::to_string((std::__ndk1 *)v83, *v8);
        v42 = std::string::append((int)v83, ", ");
        v43 = *(double *)v42;
        v86 = *(void **)(v42 + 8);
        v85 = v43;
        *(_DWORD *)v42 = 0;
        *(_DWORD *)(v42 + 4) = 0;
        *(_DWORD *)(v42 + 8) = 0;
        std::to_string((std::__ndk1 *)&v80, v8[1]);
        v45 = *(_DWORD *)&v81[3];
        v44 = v82;
        if ( (v80 & 1) == 0 )
        {
          v44 = v81;
          v45 = v80 >> 1;
        }
        v46 = std::string::append(&v85, v44, v45, v80 & 1);
        v47 = *(double *)v46;
        v88 = *(void **)(v46 + 8);
        v87 = v47;
        *(_DWORD *)v46 = 0;
        *(_DWORD *)(v46 + 4) = 0;
        *(_DWORD *)(v46 + 8) = 0;
        v48 = std::string::append((int)&v87, ", ");
        v49 = *(double *)v48;
        v90 = *(void **)(v48 + 8);
        v89 = v49;
        *(_DWORD *)v48 = 0;
        *(_DWORD *)(v48 + 4) = 0;
        *(_DWORD *)(v48 + 8) = 0;
        std::to_string((std::__ndk1 *)&v77, v8[2]);
        v51 = *(_DWORD *)&v78[3];
        v50 = v79;
        if ( (v77 & 1) == 0 )
        {
          v50 = v78;
          v51 = v77 >> 1;
        }
        v52 = std::string::append(&v89, v50, v51, v77 & 1);
        v53 = *(double *)v52;
        v92 = *(void **)(v52 + 8);
        v91 = v53;
        *(_DWORD *)v52 = 0;
        *(_DWORD *)(v52 + 4) = 0;
        *(_DWORD *)(v52 + 8) = 0;
        v54 = std::string::append((int)&v91, "\n");
        v55 = *(double *)v54;
        v74 = *(void **)(v54 + 8);
        v73 = v55;
        *(_DWORD *)v54 = 0;
        *(_DWORD *)(v54 + 4) = 0;
        *(_DWORD *)(v54 + 8) = 0;
        v57 = HIDWORD(v73);
        v56 = (char *)v74;
        if ( (LOBYTE(v73) & 1) == 0 )
        {
          v56 = (char *)&v73 + 1;
          v57 = LOBYTE(v73) >> 1;
        }
        std::string::append(&v93, v56, v57, LOBYTE(v73) & 1);
        if ( LOBYTE(v73) << 31 )
          operator delete(v74);
        if ( LOBYTE(v91) << 31 )
          operator delete(v92);
        if ( v77 << 31 )
          operator delete(v79);
        if ( LOBYTE(v89) << 31 )
          operator delete(v90);
        if ( LOBYTE(v87) << 31 )
          operator delete(v88);
        if ( v80 << 31 )
          operator delete(v82);
        if ( LOBYTE(v85) << 31 )
          operator delete(v86);
        if ( v83[0] << 31 )
          operator delete(v84);
        std::to_string((std::__ndk1 *)&v73, v14);
        v59 = HIDWORD(v73);
        v58 = (char *)v74;
        if ( (LOBYTE(v73) & 1) == 0 )
        {
          v58 = (char *)&v73 + 1;
          v59 = LOBYTE(v73) >> 1;
        }
        std::string::append(&v93, v58, v59, LOBYTE(v73) & 1);
        if ( LOBYTE(v73) << 31 )
          operator delete(v74);
        v60 = v93;
        v61 = v94;
        v93 = 0.0;
        v94 = 0;
        v74 = v61;
        v73 = v60;
        v75 = v95[0];
        v76 = v95[1];
        sub_10F574(a1 + 8, &v73);
        if ( LOBYTE(v73) << 31 )
          operator delete(v74);
        a3(a2);
        if ( LOBYTE(v93) << 31 )
          operator delete(v94);
      }
      else
      {
        a3(a2);
      }
    }
    else
    {
      a3(a2);
    }
  }
  else
  {
    a3(a2);
  }
}


// ======================================================================
