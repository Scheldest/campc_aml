
// Address: 0x1930cc
// Original: j__ZN9COccluder18ProcessOneOccluderEP15CActiveOccluder
// Demangled: COccluder::ProcessOneOccluder(CActiveOccluder *)
// attributes: thunk
int __fastcall COccluder::ProcessOneOccluder(COccluder *this, CActiveOccluder *a2)
{
  return _ZN9COccluder18ProcessOneOccluderEP15CActiveOccluder(this, a2);
}


// ============================================================

// Address: 0x198814
// Original: j__ZN9COccluder18ProcessLineSegmentEiiP15CActiveOccluder
// Demangled: COccluder::ProcessLineSegment(int,int,CActiveOccluder *)
// attributes: thunk
int __fastcall COccluder::ProcessLineSegment(COccluder *this, int a2, int a3, CActiveOccluder *a4)
{
  return _ZN9COccluder18ProcessLineSegmentEiiP15CActiveOccluder(this, a2, a3, a4);
}


// ============================================================

// Address: 0x5aea8c
// Original: _ZN9COccluder10NearCameraEv
// Demangled: COccluder::NearCamera(void)
bool __fastcall COccluder::NearCamera(COccluder *this)
{
  float32x2_t v1; // d3
  int16x4_t v2; // d16
  float32x2_t v3; // d16
  float32x2_t v4; // d17
  __int64 *v5; // r3
  int16x4_t v6; // d16
  unsigned __int64 v7; // d1
  float32x2_t v8; // d2

  v2.n64_u32[0] = *(_DWORD *)((char *)this + 2);
  v3.n64_u64[0] = vcvt_f32_s32((int32x2_t)vmovl_s16(v2).n128_u64[0]).n64_u64[0];
  v4.n64_f32[0] = 0.25;
  v4.n64_f32[1] = 0.25;
  v5 = (__int64 *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v5 = &qword_951FAC;
  v6.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)v5 + 4), vmul_f32(v3, v4)).n64_u64[0];
  v7 = vmul_f32(v6, v6).n64_u64[0];
  v6.n64_u32[0] = *(_DWORD *)((char *)this + 6);
  v8.n64_u64[0] = vmul_f32(vcvt_f32_s32((int32x2_t)vmovl_s16(v6).n128_u64[0]), v4).n64_u64[0];
  v1.n64_u32[0] = v8.n64_u32[1];
  return (float)(sqrtf(
                   (float)((float)((float)(*(float *)v5 + (float)((float)*(__int16 *)this * -0.25))
                                 * (float)(*(float *)v5 + (float)((float)*(__int16 *)this * -0.25)))
                         + *(float *)&v7)
                 + *((float *)&v7 + 1))
               + (float)(vmax_f32(v8, v1).n64_f32[0] * -0.5)) < 250.0;
}


// ============================================================

// Address: 0x5aeb40
// Original: _ZN9COccluder18ProcessOneOccluderEP15CActiveOccluder
// Demangled: COccluder::ProcessOneOccluder(CActiveOccluder *)
int __fastcall COccluder::ProcessOneOccluder(COccluder *this, CActiveOccluder *a2)
{
  int v3; // r5
  int v5; // s2
  float v6; // s4
  float v7; // s2
  float v8; // s4
  float v9; // s6
  float v10; // s0
  float v11; // s20
  float v12; // s0
  float v13; // s0
  char v14; // r0
  char v15; // r0
  char v16; // r0
  COccluder *v17; // r0
  double v18; // d16
  float v19; // s0
  float v20; // s2
  float v21; // s4
  float v22; // s0
  float v23; // s10
  float v24; // s2
  float v25; // s0
  int v26; // r4
  float v27; // s0
  float v28; // s0
  float v29; // s4
  float v30; // s14
  float v31; // s0
  float v32; // s2
  float *v33; // r2
  float v34; // s3
  float v35; // s14
  float v36; // s1
  char *v37; // r5
  float v38; // s7
  float v39; // s20
  float v40; // s5
  float v41; // s9
  float v42; // s8
  float v43; // s18
  float v44; // s13
  float v45; // s14
  float v46; // s11
  float v47; // s12
  float v48; // s3
  float v49; // s8
  float v50; // s1
  double v51; // d16
  float *v52; // r1
  float v53; // s0
  float v54; // s0
  float *v55; // r0
  float v56; // s6
  COccluder *v57; // r0
  COccluder *v58; // r4
  COccluder *v59; // r9
  COccluder *v60; // r8
  COccluder *v62; // r0
  COccluder *v63; // r5
  double *v64; // r10
  int v65; // r5
  double v66; // d16
  float v67; // s16
  float v68; // s18
  double v69; // kr00_8
  float v70; // s24
  float v71; // s26
  double v72; // d16
  char *v73; // r0
  int v74; // r4
  COccluder *v75; // [sp+4h] [bp-264h]
  COccluder *v76; // [sp+8h] [bp-260h]
  CActiveOccluder *v77; // [sp+Ch] [bp-25Ch]
  double v78; // [sp+20h] [bp-248h] BYREF
  float v79; // [sp+28h] [bp-240h]
  _BYTE v80[64]; // [sp+68h] [bp-200h] BYREF
  int v81; // [sp+A8h] [bp-1C0h]
  int v82; // [sp+ACh] [bp-1BCh]
  _BYTE v83[64]; // [sp+B0h] [bp-1B8h] BYREF
  int v84; // [sp+F0h] [bp-178h]
  int v85; // [sp+F4h] [bp-174h]
  _BYTE v86[64]; // [sp+F8h] [bp-170h] BYREF
  int v87; // [sp+138h] [bp-130h]
  int v88; // [sp+13Ch] [bp-12Ch]
  _BYTE v89[64]; // [sp+140h] [bp-128h] BYREF
  int v90; // [sp+180h] [bp-E8h]
  int v91; // [sp+184h] [bp-E4h]
  double v92; // [sp+188h] [bp-E0h] BYREF
  int v93; // [sp+190h] [bp-D8h]
  float v94; // [sp+194h] [bp-D4h]
  float v95; // [sp+198h] [bp-D0h]
  float v96; // [sp+19Ch] [bp-CCh]
  double v97; // [sp+1A0h] [bp-C8h]
  float v98; // [sp+1A8h] [bp-C0h]
  float v99; // [sp+1ACh] [bp-BCh]
  float v100; // [sp+1B0h] [bp-B8h]
  float v101; // [sp+1B4h] [bp-B4h]
  float v102; // [sp+1B8h] [bp-B0h]
  float v103; // [sp+1BCh] [bp-ACh]
  float v104; // [sp+1C0h] [bp-A8h]
  float v105; // [sp+1C4h] [bp-A4h]
  float v106; // [sp+1C8h] [bp-A0h]
  float v107; // [sp+1CCh] [bp-9Ch]
  unsigned __int8 v108; // [sp+1D6h] [bp-92h]
  bool v109; // [sp+1D7h] [bp-91h]
  unsigned __int8 v110; // [sp+1D8h] [bp-90h]
  bool v111; // [sp+1D9h] [bp-8Fh]
  bool v112; // [sp+1DAh] [bp-8Eh]
  bool v113; // [sp+1DBh] [bp-8Dh]
  float v114; // [sp+1DCh] [bp-8Ch]
  float v115; // [sp+1E0h] [bp-88h]
  float v116; // [sp+1E4h] [bp-84h]
  double v117; // [sp+1E8h] [bp-80h]
  float v118; // [sp+1F0h] [bp-78h]
  double v119; // [sp+1F8h] [bp-70h] BYREF
  float v120; // [sp+200h] [bp-68h]

  v3 = 0;
  *((_BYTE *)a2 + 122) = 0;
  v5 = *(__int16 *)this;
  v6 = (float)*((__int16 *)this + 2) * 0.25;
  v115 = (float)*((__int16 *)this + 1) * 0.25;
  v114 = (float)v5 * 0.25;
  v116 = v6;
  operator*();
  dword_A46DB0 = v93;
  *(double *)gCenterOnScreen = v92;
  if ( *(float *)&v93 > 1.0 )
  {
    v3 = 0;
    gCenterOnScreen[0] = gCenterOnScreen[0] * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC900);
    gCenterOnScreen[1] = gCenterOnScreen[1] * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC904);
    if ( *(float *)&v93 >= -150.0 && *(float *)&v93 <= 300.0 )
    {
      v7 = (float)*((__int16 *)this + 4) * 0.25;
      v8 = (float)*((__int16 *)this + 3) * 0.25;
      v9 = (float)*((__int16 *)this + 5) * 0.25;
      v77 = a2;
      *((_WORD *)a2 + 60) = (int)(float)(*(float *)&v93
                                       - sqrtf((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9)));
      v90 = 0;
      v91 = 0;
      v87 = 0;
      v88 = 0;
      v84 = 0;
      v85 = 0;
      v81 = 0;
      v82 = 0;
      CMatrix::SetRotateX((CMatrix *)v89, (float)*((unsigned __int8 *)this + 14) * 0.024544);
      CMatrix::SetRotateY((CMatrix *)v86, (float)*((unsigned __int8 *)this + 13) * 0.024544);
      CMatrix::SetRotateZ((CMatrix *)v83, (float)*((unsigned __int8 *)this + 12) * 0.024544);
      operator*();
      operator*();
      CMatrix::operator=();
      CMatrix::~CMatrix((CMatrix *)&v92);
      CMatrix::~CMatrix((CMatrix *)&v78);
      gMaxYInOccluder = -915135490;
      gMaxXInOccluder = -915135490;
      gMinXInOccluder = 1232348158;
      gMinYInOccluder = 1232348158;
      v10 = (float)*((__int16 *)this + 3) * 0.25;
      if ( v10 == 0.0 )
      {
        v11 = 0.5;
        v12 = (float)*((__int16 *)this + 4);
        HIDWORD(v78) = 0;
        v79 = 0.0;
        *(float *)&v78 = (float)(v12 * 0.25) * 0.5;
        operator*();
        v120 = *(float *)&v93;
        v119 = v92;
        v13 = (float)*((__int16 *)this + 5);
        v78 = 0.0;
      }
      else
      {
        if ( (float)((float)*((__int16 *)this + 4) * 0.25) != 0.0
          && (float)((float)*((__int16 *)this + 5) * 0.25) != 0.0 )
        {
          v26 = 0;
          LODWORD(v78) = 0;
          v79 = 0.0;
          *((float *)&v78 + 1) = v10 * 0.5;
          operator*();
          v120 = *(float *)&v93;
          v119 = v92;
          v27 = (float)*((__int16 *)this + 4);
          HIDWORD(v78) = 0;
          v79 = 0.0;
          *(float *)&v78 = (float)(v27 * 0.25) * 0.5;
          operator*();
          v118 = *(float *)&v93;
          v117 = v92;
          v28 = (float)*((__int16 *)this + 5);
          v78 = 0.0;
          v79 = (float)(v28 * 0.25) * 0.5;
          operator*();
          v29 = *(float *)&v92;
          v30 = -*(float *)&v92;
          v31 = *((float *)&v92 + 1);
          v32 = *(float *)&v93;
          *(float *)&v93 = v120;
          v92 = v119;
          v98 = v118;
          v96 = -v120;
          v95 = -*((float *)&v119 + 1);
          v94 = -*(float *)&v119;
          v97 = v117;
          v101 = -v118;
          v99 = -*(float *)&v117;
          v104 = v32;
          v103 = v31;
          v102 = v29;
          v100 = -*((float *)&v117 + 1);
          v107 = -v32;
          v106 = -v31;
          v105 = v30;
          v33 = (float *)(dword_951FBC + 48);
          if ( !dword_951FBC )
            v33 = (float *)&qword_951FAC;
          v34 = v33[1];
          v35 = *v33;
          v36 = v33[2];
          v37 = &gOccluderCoorsValid;
          v38 = *(float *)&v117 * (float)((float)(v114 + *(float *)&v117) - *v33);
          v39 = v29 * (float)((float)(v114 + v29) - *v33);
          v40 = (float)((float)-(float)(*(float *)&v119 * (float)((float)(v114 - *(float *)&v119) - *v33))
                      - (float)((float)((float)(v115 - *((float *)&v119 + 1)) - v34) * *((float *)&v119 + 1)))
              - (float)((float)((float)(v116 - v120) - v36) * v120);
          v41 = -(float)(*(float *)&v117 * (float)((float)(v114 - *(float *)&v117) - *v33));
          v108 = (float)((float)((float)(*(float *)&v119 * (float)((float)(v114 + *(float *)&v119) - *v33))
                               + (float)(*((float *)&v119 + 1) * (float)((float)(v115 + *((float *)&v119 + 1)) - v34)))
                       + (float)(v120 * (float)((float)(v116 + v120) - v36))) < 0.0;
          v109 = v40 < 0.0;
          v111 = (float)((float)(v41
                               - (float)((float)((float)(v115 - *((float *)&v117 + 1)) - v34) * *((float *)&v117 + 1)))
                       - (float)((float)((float)(v116 - v118) - v36) * v118)) < 0.0;
          v76 = (COccluder *)((float)((float)(v39 + (float)(v31 * (float)((float)(v115 + v31) - v34)))
                                    + (float)(v32 * (float)((float)(v116 + v32) - v36))) < 0.0);
          v112 = (float)((float)(v39 + (float)(v31 * (float)((float)(v115 + v31) - v34)))
                       + (float)(v32 * (float)((float)(v116 + v32) - v36))) < 0.0;
          v110 = (float)((float)(v38
                               + (float)(*((float *)&v97 + 1) * (float)((float)(v115 + *((float *)&v97 + 1)) - v34)))
                       + (float)(v98 * (float)((float)(v116 + v98) - v36))) < 0.0;
          v42 = (float)((float)(v105 * (float)((float)(v114 + v105) - v35))
                      + (float)(v106 * (float)((float)(v115 + v106) - v34)))
              + (float)(v107 * (float)((float)(v116 + v107) - v36));
          v75 = (COccluder *)(v42 < 0.0);
          v113 = v42 < 0.0;
          v43 = (float)(v115 - *((float *)&v119 + 1)) + *((float *)&v117 + 1);
          v44 = (float)(v115 + *((float *)&v119 + 1)) - *((float *)&v117 + 1);
          v45 = (float)(v115 - *((float *)&v119 + 1)) - *((float *)&v117 + 1);
          v46 = (float)(v116 + v120) - v118;
          v47 = (float)(v116 - v120) + v118;
          v48 = (float)(v116 + v120) + v118;
          *(float *)&gOccluderCoors = v29 + (float)((float)(v114 + *(float *)&v119) + *(float *)&v117);
          v49 = (float)(v116 - v120) - v118;
          *(float *)&dbl_A46D54 = v29 + (float)((float)(v114 - *(float *)&v119) + *(float *)&v117);
          v50 = (float)(v115 + *((float *)&v119 + 1)) + *((float *)&v117 + 1);
          *(float *)&dbl_A46D60 = v29 + (float)((float)(v114 + *(float *)&v119) - *(float *)&v117);
          *(float *)&dbl_A46D6C = v29 + (float)((float)(v114 - *(float *)&v119) - *(float *)&v117);
          unk_A46D78 = (float)((float)(v114 + *(float *)&v119) + *(float *)&v117) - v29;
          *((float *)&gOccluderCoors + 1) = v31 + v50;
          *(float *)&dword_A46D50 = v32 + v48;
          *(float *)&dword_A46D5C = v32 + v47;
          *((float *)&dbl_A46D54 + 1) = v31 + v43;
          *(float *)&dword_A46D68 = v32 + v46;
          *((float *)&dbl_A46D60 + 1) = v31 + v44;
          *(float *)&dword_A46D74 = v32 + v49;
          *((float *)&dbl_A46D6C + 1) = v31 + v45;
          unk_A46D80 = v48 - v32;
          unk_A46D7C = v50 - v31;
          unk_A46D84 = (float)((float)(v114 - *(float *)&v119) + *(float *)&v117) - v29;
          unk_A46D88 = v43 - v31;
          unk_A46D8C = v47 - v32;
          unk_A46D90 = (float)((float)(v114 + *(float *)&v119) - *(float *)&v117) - v29;
          unk_A46D94 = v44 - v31;
          unk_A46D98 = v46 - v32;
          unk_A46D9C = (float)((float)(v114 - *(float *)&v119) - *(float *)&v117) - v29;
          unk_A46DA0 = v45 - v31;
          unk_A46DA4 = v49 - v32;
          do
          {
            operator*();
            v51 = v78;
            v52 = &gOccluderCoorsOnScreen[v26];
            v52[2] = v79;
            *(double *)v52 = v51;
            v53 = gOccluderCoorsOnScreen[v26 + 2];
            if ( v53 <= 1.0 )
            {
              v57 = 0;
            }
            else
            {
              v54 = 1.0 / v53;
              v55 = &gOccluderCoorsOnScreen[v26];
              v56 = gOccluderCoorsOnScreen[v26 + 1];
              *v55 = gOccluderCoorsOnScreen[v26] * (float)(v54 * (float)dword_9FC900);
              v55[1] = v56 * (float)(v54 * (float)dword_9FC904);
              v57 = (COccluder *)(&stderr + 1);
            }
            v26 += 3;
            *v37++ = (char)v57;
          }
          while ( v26 != 24 );
          v58 = (COccluder *)v108;
          v59 = (COccluder *)v110;
          if ( v108 != v110 )
          {
            v3 = 0;
            v57 = (COccluder *)COccluder::ProcessLineSegment(v57, 0, 4, v77);
            if ( v57 )
              goto LABEL_46;
          }
          v60 = (COccluder *)v111;
          if ( v58 == (COccluder *)v111 || !COccluder::ProcessLineSegment(v57, 2, 6, v77) )
          {
            if ( v58 != v76 )
            {
              v3 = 0;
              if ( COccluder::ProcessLineSegment(v76, 0, 2, v77) )
                goto LABEL_46;
            }
            v62 = v75;
            if ( v58 == v75 || (v62 = (COccluder *)COccluder::ProcessLineSegment(v75, 4, 6, v77)) == 0 )
            {
              v63 = (COccluder *)v109;
              if ( ((COccluder *)v109 == v59 || (v62 = (COccluder *)COccluder::ProcessLineSegment(v62, 1, 5, v77)) == 0)
                && (v63 == v60 || !COccluder::ProcessLineSegment(v62, 3, 7, v77))
                && (v63 == v76 || !COccluder::ProcessLineSegment(v76, 1, 3, v77))
                && (v63 == v75 || !COccluder::ProcessLineSegment(v75, 5, 7, v77)) )
              {
                if ( v59 != v76 )
                {
                  v3 = 0;
                  if ( COccluder::ProcessLineSegment(v76, 0, 1, v77) )
                    goto LABEL_46;
                }
                if ( (v60 == v76 || !COccluder::ProcessLineSegment(v76, 2, 3, v77))
                  && (v60 == v75 || !COccluder::ProcessLineSegment(v75, 6, 7, v77))
                  && (v59 == v75 || !COccluder::ProcessLineSegment(v75, 4, 5, v77))
                  && (float)(*(float *)&gMaxXInOccluder - *(float *)&gMinXInOccluder) >= (float)((float)dword_9FC900
                                                                                               * 0.15) )
                {
                  v3 = 0;
                  if ( (float)(*(float *)&gMaxYInOccluder - *(float *)&gMinYInOccluder) >= (float)((float)dword_9FC904
                                                                                                 * 0.1) )
                  {
                    v64 = &v92;
                    *((_BYTE *)v77 + 123) = 0;
                    v65 = 1;
                    if ( !((_DWORD)v58 << 24) )
                      goto LABEL_71;
                    while ( 1 )
                    {
                      v66 = *v64;
                      v79 = *((float *)v64 + 2);
                      v67 = v79;
                      v78 = v66;
                      v68 = v116;
                      v69 = v66;
                      v70 = v114;
                      v71 = v115;
                      CVector::Normalise((CVector *)&v78);
                      v72 = v78;
                      v73 = (char *)v77 + 12 * *((char *)v77 + 123);
                      *((float *)v73 + 33) = v79;
                      *(double *)(v73 + 124) = v72;
                      *((float *)v77 + (char)(*((_BYTE *)v77 + 123))++ + 40) = (float)((float)((float)(v70 + *(float *)&v69)
                                                                                             * *(float *)&v78)
                                                                                     + (float)((float)(v71 + *((float *)&v69 + 1))
                                                                                             * *((float *)&v78 + 1)))
                                                                             + (float)((float)(v68 + v67) * v79);
                      if ( v65 == 6 )
                        break;
                      while ( 1 )
                      {
                        v74 = *(&v108 + v65);
                        v64 = (double *)((char *)v64 + 12);
                        ++v65;
                        if ( v74 << 24 )
                          break;
LABEL_71:
                        if ( v65 == 6 )
                          goto LABEL_72;
                      }
                    }
LABEL_72:
                    v3 = 1;
                  }
                  goto LABEL_46;
                }
              }
            }
          }
          goto LABEL_25;
        }
        if ( (float)((float)*((__int16 *)this + 4) * 0.25) != 0.0 )
        {
          if ( (float)((float)*((__int16 *)this + 5) * 0.25) == 0.0 )
          {
            LODWORD(v78) = 0;
            v79 = 0.0;
            *((float *)&v78 + 1) = v10 * 0.5;
            operator*();
            v120 = *(float *)&v93;
            v119 = v92;
            v25 = (float)*((__int16 *)this + 4);
            HIDWORD(v78) = 0;
            v79 = 0.0;
            *(float *)&v78 = (float)(v25 * 0.25) * 0.5;
            operator*();
            v118 = *(float *)&v93;
            v117 = v92;
          }
          goto LABEL_11;
        }
        v11 = 0.5;
        LODWORD(v78) = 0;
        v79 = 0.0;
        *((float *)&v78 + 1) = v10 * 0.5;
        operator*();
        v120 = *(float *)&v93;
        v119 = v92;
        v13 = (float)*((__int16 *)this + 5);
        v78 = 0.0;
      }
      v79 = (float)(v13 * 0.25) * v11;
      operator*();
      v118 = *(float *)&v93;
      v117 = v92;
LABEL_11:
      *(float *)&gOccluderCoors = (float)(v114 + *(float *)&v119) + *(float *)&v117;
      *((float *)&gOccluderCoors + 1) = (float)(v115 + *((float *)&v119 + 1)) + *((float *)&v117 + 1);
      *(float *)&dword_A46D50 = (float)(v116 + v120) + v118;
      *(float *)&dbl_A46D54 = (float)(v114 - *(float *)&v119) + *(float *)&v117;
      *((float *)&dbl_A46D54 + 1) = (float)(v115 - *((float *)&v119 + 1)) + *((float *)&v117 + 1);
      *(float *)&dword_A46D5C = (float)(v116 - v120) + v118;
      *(float *)&dbl_A46D60 = (float)(v114 - *(float *)&v119) - *(float *)&v117;
      *((float *)&dbl_A46D60 + 1) = (float)(v115 - *((float *)&v119 + 1)) - *((float *)&v117 + 1);
      *(float *)&dword_A46D68 = (float)(v116 - v120) - v118;
      *(float *)&dbl_A46D6C = (float)(v114 + *(float *)&v119) - *(float *)&v117;
      *((float *)&dbl_A46D6C + 1) = (float)(v115 + *((float *)&v119 + 1)) - *((float *)&v117 + 1);
      *(float *)&dword_A46D74 = (float)(v116 + v120) - v118;
      v79 = (float)(v116 + v120) + v118;
      v78 = gOccluderCoors;
      operator*();
      dword_A46DBC = v93;
      *(double *)gOccluderCoorsOnScreen = v92;
      if ( *(float *)&v93 <= 1.0 )
      {
        v14 = 0;
      }
      else
      {
        gOccluderCoorsOnScreen[0] = gOccluderCoorsOnScreen[0]
                                  * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC900);
        gOccluderCoorsOnScreen[1] = gOccluderCoorsOnScreen[1]
                                  * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC904);
        v14 = 1;
      }
      gOccluderCoorsValid = v14;
      v79 = *(float *)&dword_A46D5C;
      v78 = dbl_A46D54;
      operator*();
      dword_A46DC8 = v93;
      *(double *)flt_A46DC0 = v92;
      if ( *(float *)&v93 <= 1.0 )
      {
        v15 = 0;
      }
      else
      {
        flt_A46DC0[0] = flt_A46DC0[0] * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC900);
        flt_A46DC0[1] = flt_A46DC0[1] * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC904);
        v15 = 1;
      }
      byte_A46E15 = v15;
      v79 = *(float *)&dword_A46D68;
      v78 = dbl_A46D60;
      operator*();
      dword_A46DD4 = v93;
      *(double *)flt_A46DCC = v92;
      if ( *(float *)&v93 <= 1.0 )
      {
        v16 = 0;
      }
      else
      {
        flt_A46DCC[0] = flt_A46DCC[0] * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC900);
        flt_A46DCC[1] = flt_A46DCC[1] * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC904);
        v16 = 1;
      }
      byte_A46E16 = v16;
      v79 = *(float *)&dword_A46D74;
      v78 = dbl_A46D6C;
      operator*();
      dword_A46DE0 = v93;
      *(double *)algn_A46DD8 = v92;
      if ( *(float *)&v93 <= 1.0 )
      {
        v17 = 0;
      }
      else
      {
        *(float *)algn_A46DD8 = *(float *)algn_A46DD8 * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC900);
        *(float *)&algn_A46DD8[4] = *(float *)&algn_A46DD8[4]
                                  * (float)((float)(1.0 / *(float *)&v93) * (float)dword_9FC904);
        v17 = (COccluder *)(&stderr + 1);
      }
      v3 = 0;
      byte_A46E17 = (char)v17;
      if ( COccluder::ProcessLineSegment(v17, 0, 1, a2) )
        goto LABEL_46;
      if ( !COccluder::ProcessLineSegment(0, 1, 2, a2) )
      {
        v3 = 0;
        if ( COccluder::ProcessLineSegment(0, 2, 3, a2) || COccluder::ProcessLineSegment(0, 3, 0, a2) )
          goto LABEL_46;
        if ( (float)(*(float *)&gMaxXInOccluder - *(float *)&gMinXInOccluder) >= (float)((float)dword_9FC900 * 0.1)
          && (float)(*(float *)&gMaxYInOccluder - *(float *)&gMinYInOccluder) >= (float)((float)dword_9FC904 * 0.07) )
        {
          CrossProduct((const CVector *)&v92, (const CVector *)&v119);
          CVector::Normalise((CVector *)&v92);
          v18 = v92;
          v3 = 1;
          v19 = v114;
          v20 = v115;
          v21 = v116;
          *((float *)a2 + 33) = *(float *)&v93;
          *(double *)((char *)a2 + 124) = v18;
          v22 = v19 * *(float *)&v92;
          v23 = *(float *)&v93;
          v24 = v20 * *((float *)&v92 + 1);
          *((_BYTE *)a2 + 123) = 1;
          *((float *)a2 + 40) = (float)(v22 + v24) + (float)(v21 * v23);
          goto LABEL_46;
        }
      }
LABEL_25:
      v3 = 0;
LABEL_46:
      CMatrix::~CMatrix((CMatrix *)v80);
      CMatrix::~CMatrix((CMatrix *)v83);
      CMatrix::~CMatrix((CMatrix *)v86);
      CMatrix::~CMatrix((CMatrix *)v89);
    }
  }
  return v3;
}


// ============================================================

// Address: 0x5afc28
// Original: _ZN9COccluder18ProcessLineSegmentEiiP15CActiveOccluder
// Demangled: COccluder::ProcessLineSegment(int,int,CActiveOccluder *)
bool __fastcall COccluder::ProcessLineSegment(COccluder *this, int a2, int a3, CActiveOccluder *a4)
{
  float32x2_t v4; // d4
  float32x2_t v5; // d5
  float32x2_t v6; // d6
  float32x2_t v7; // d7
  float32x2_t v10; // d8
  float32x2_t v11; // d0
  float v12; // s2
  float v13; // s4
  float32x2_t v14; // d17
  float32x2_t v15; // d16
  float32x2_t v16; // d19
  float v17; // s0
  float *v19; // r0
  float v20; // s6
  float v21; // s2
  float v22; // s4
  float v23; // s6
  float v24; // s8
  float v25; // s14
  float v26; // s10
  float v27; // s3
  float32x2_t v28; // [sp+18h] [bp-40h]
  float v29; // [sp+20h] [bp-38h]

  if ( gOccluderCoorsValid[a2] )
  {
    v10.n64_u64[0] = *(unsigned __int64 *)&gOccluderCoorsOnScreen[3 * a2];
  }
  else
  {
    if ( !gOccluderCoorsValid[a3] )
      return 1;
    operator*();
    operator*();
    operator*();
    if ( v29 <= 1.0 )
      return 1;
    v10.n64_u64[0] = vmul_f32(v28, vmul_n_f32(vcvt_f32_s32(*(int32x2_t *)&dword_9FC900), 1.0 / v29)).n64_u64[0];
  }
  if ( gOccluderCoorsValid[a3] )
  {
    v11.n64_u64[0] = *(unsigned __int64 *)&gOccluderCoorsOnScreen[3 * a3];
    goto LABEL_10;
  }
  operator*();
  operator*();
  operator*();
  if ( v29 <= 1.0 )
    return 1;
  v11.n64_u64[0] = vmul_f32(v28, vmul_n_f32(vcvt_f32_s32(*(int32x2_t *)&dword_9FC900), 1.0 / v29)).n64_u64[0];
LABEL_10:
  v12 = v11.n64_f32[0] - v10.n64_f32[0];
  v5.n64_u32[0] = v10.n64_u32[1];
  v13 = v11.n64_f32[1] - v10.n64_f32[1];
  v7.n64_u32[0] = gMaxYInOccluder;
  v14.n64_u64[0] = vmax_f32(v7, v5).n64_u64[0];
  v6.n64_u32[0] = gMinYInOccluder;
  v15.n64_u64[0] = vmin_f32(v6, v5).n64_u64[0];
  v5.n64_u32[0] = gMinXInOccluder;
  v4.n64_u32[0] = gMaxXInOccluder;
  v16.n64_u64[0] = vmax_f32(v4, v10).n64_u64[0];
  v4.n64_u32[0] = v11.n64_u32[1];
  gMinXInOccluder = vmin_f32(vmin_f32(v5, v10), v11).n64_u32[0];
  gMaxXInOccluder = vmax_f32(v16, v11).n64_u32[0];
  gMaxYInOccluder = vmax_f32(v14, v4).n64_u32[0];
  gMinYInOccluder = vmin_f32(v15, v4).n64_u32[0];
  if ( (float)((float)((float)(v11.n64_f32[1] - v10.n64_f32[1]) * (float)(gCenterOnScreen[0] - v10.n64_f32[0]))
             - (float)((float)(v11.n64_f32[0] - v10.n64_f32[0]) * (float)(gCenterOnScreen[1] - v10.n64_f32[1]))) < 0.0 )
  {
    v17 = v10.n64_f32[1] + v13;
    v10.n64_f32[0] = v10.n64_f32[0] + v12;
    v13 = -v13;
    v12 = -v12;
  }
  else
  {
    v17 = v10.n64_f32[1];
  }
  *((float *)a4 + 5 * *((char *)a4 + 122) + 4) = sqrtf((float)(v12 * v12) + (float)(v13 * v13));
  v19 = (float *)((char *)a4 + 20 * *((char *)a4 + 122));
  v20 = v19[4];
  *v19 = v10.n64_f32[0];
  v21 = v12 / v20;
  v22 = v13 / v20;
  *((float *)a4 + 5 * *((char *)a4 + 122) + 1) = v17;
  *((float *)a4 + 5 * *((char *)a4 + 122) + 2) = v21;
  *((float *)a4 + 5 * *((char *)a4 + 122) + 3) = v22;
  v23 = (float)dword_9FC900;
  if ( v10.n64_f32[0] <= 0.0 || v10.n64_f32[0] >= v23 || v17 >= (float)dword_9FC904 )
  {
    v24 = v22 * (float)(v23 - v10.n64_f32[0]);
    v25 = (float)(0.0 - v10.n64_f32[0]) * v22;
    v26 = (float)(0.0 - v17) * v21;
    if ( (float)((float)(v25 - v26) * (float)(v24 - v26)) >= 0.0 )
    {
      v27 = v21 * (float)((float)dword_9FC904 - v17);
      if ( (float)((float)(v25 - v26) * (float)(v25 - v27)) >= 0.0
        && (float)((float)(v24 - v26) * (float)(v24 - v27)) >= 0.0 )
      {
        return (float)((float)(v22 * (float)((float)(v23 * 0.5) - v10.n64_f32[0]))
                     - (float)(v21 * (float)((float)((float)dword_9FC904 * 0.5) - v17))) < 0.0;
      }
    }
  }
  ++*((_BYTE *)a4 + 122);
  return 0;
}


// ============================================================
