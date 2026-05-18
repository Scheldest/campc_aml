
// Address: 0x18ae2c
// Original: j__ZN5CRope6UpdateEv
// Demangled: CRope::Update(void)
// attributes: thunk
int __fastcall CRope::Update(CRope *this)
{
  return _ZN5CRope6UpdateEv(this);
}


// ============================================================

// Address: 0x18ce6c
// Original: j__ZN5CRope6RenderEv
// Demangled: CRope::Render(void)
// attributes: thunk
int __fastcall CRope::Render(CRope *this)
{
  return _ZN5CRope6RenderEv(this);
}


// ============================================================

// Address: 0x194164
// Original: j__ZN5CRope23CreateHookObjectForRopeEv
// Demangled: CRope::CreateHookObjectForRope(void)
// attributes: thunk
int __fastcall CRope::CreateHookObjectForRope(CRope *this)
{
  return _ZN5CRope23CreateHookObjectForRopeEv(this);
}


// ============================================================

// Address: 0x196670
// Original: j__ZN5CRope21ReleasePickedUpObjectEv
// Demangled: CRope::ReleasePickedUpObject(void)
// attributes: thunk
int __fastcall CRope::ReleasePickedUpObject(CRope *this)
{
  return _ZN5CRope21ReleasePickedUpObjectEv(this);
}


// ============================================================

// Address: 0x196d60
// Original: j__ZN5CRope6RemoveEv
// Demangled: CRope::Remove(void)
// attributes: thunk
int __fastcall CRope::Remove(CRope *this)
{
  return _ZN5CRope6RemoveEv(this);
}


// ============================================================

// Address: 0x1971d8
// Original: j__ZN5CRope18UpdateWeightInRopeE7CVectorfPS0_
// Demangled: CRope::UpdateWeightInRope(CVector,float,CVector*)
// attributes: thunk
int CRope::UpdateWeightInRope()
{
  return _ZN5CRope18UpdateWeightInRopeE7CVectorfPS0_();
}


// ============================================================

// Address: 0x198d68
// Original: j__ZN5CRope12PickUpObjectEP7CEntity
// Demangled: CRope::PickUpObject(CEntity *)
// attributes: thunk
int __fastcall CRope::PickUpObject(CRope *this, CEntity *a2)
{
  return _ZN5CRope12PickUpObjectEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x412800
// Original: _ZN5CRope6UpdateEv
// Demangled: CRope::Update(void)
int __fastcall CRope::Update(CRope *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d8
  float32x2_t v4; // d9
  float v6; // s18
  float v7; // s16
  float v8; // s20
  float *v9; // r2
  float v10; // s22
  int result; // r0
  int v12; // r5
  char v13; // r1
  float v14; // s2
  float v15; // s0
  int GroundZFor3DCoord; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r1
  int v21; // r2
  unsigned int v22; // r0
  int v23; // r6
  float *v24; // r5
  float v25; // s20
  float v26; // s28
  float v27; // s30
  char v28; // r0
  float v29; // s4
  float v30; // s0
  float v31; // s10
  float v32; // s6
  float v33; // s4
  float v34; // s8
  float v35; // s6
  float v36; // s10
  float v37; // s0
  float v38; // s12
  float v39; // s2
  float v40; // s4
  float v41; // s6
  int v42; // r1
  unsigned int v43; // r0
  bool v44; // zf
  bool v45; // zf
  bool v46; // zf
  CPad *v47; // r0
  __int16 CarGunUpDown; // r5
  int v49; // r0
  float v50; // s16
  float v51; // s16
  unsigned int v52; // r0
  int IsTouched; // r0
  float v54; // s16
  float v55; // s16
  unsigned int v56; // r0
  char *v57; // r8
  int v58; // r5
  float32x2_t v59; // d0
  float v60; // s20
  float *v61; // r6
  int v62; // r1
  int v63; // r3
  int v64; // r0
  _DWORD *v65; // r1
  float v66; // s24
  float v67; // s26
  float v68; // s22
  float v69; // s28
  float v70; // s23
  float v71; // s30
  int v72; // r0
  float v73; // s0
  float v74; // s4
  float v75; // s6
  float v76; // s8
  float v77; // s10
  float v78; // s12
  float v79; // s12
  float v80; // s14
  float v81; // s1
  float v82; // s8
  float v83; // s6
  float v84; // s10
  int v85; // r0
  float v86; // s6
  CMatrix *v87; // r0
  int v88; // r4
  __int64 v89; // r0
  __int64 v90; // d16
  __int64 v91; // kr00_8
  unsigned __int32 v92; // r1
  int v93; // r3
  float v94; // r0
  float *v95; // r1
  int v96; // r0
  int v97; // r1
  bool v98; // zf
  bool v99; // zf
  bool v100; // zf
  CPad *Pad; // r0
  int v102; // r0
  __int64 v103; // kr08_8
  int v104; // r0
  int v105; // r1
  int v106; // r0
  int v107; // r1
  bool v108; // zf
  int v109; // r0
  __int64 v110; // kr10_8
  int v111; // r4
  float v112; // s18
  float32x2_t v113; // d10
  int v114; // r12
  int v115; // r3
  int v116; // lr
  int v117; // r5
  int *v118; // r10
  int v119; // r0
  int v120; // r4
  int v121; // r5
  int v122; // r6
  int v123; // r9
  bool v124; // zf
  int v125; // r8
  int IsPlayer; // r0
  float32x2_t *v127; // r0
  float32x2_t *v128; // r1
  float32x2_t v129; // d16
  unsigned __int64 v130; // d1
  float v131; // s0
  int *v132; // r10
  int v133; // r0
  int v134; // r8
  int v135; // r9
  int v136; // r0
  int v137; // r6
  unsigned int v138; // r1
  int v139; // r1
  bool v140; // zf
  float v141; // r0
  float32x2_t v142; // d16
  float v143; // s24
  unsigned __int64 v144; // d1
  char v145; // r0
  __int64 v146; // kr18_8
  float v147; // r0
  unsigned __int32 v148; // r1
  int v149; // r3
  float v150; // r0
  float *v151; // r1
  bool v152; // zf
  int *v153; // r2
  int v154; // r8
  int v155; // r9
  int v156; // r6
  int v157; // r10
  int v158; // r1
  int v159; // r5
  int v160; // r2
  int v161; // r0
  int v162; // r1
  float v163; // r0
  float32x2_t v164; // d14
  int v165; // r0
  float v166; // s24
  float v167; // s0
  unsigned __int64 v168; // d13
  float v169; // s28
  float v170; // s0
  float32x2_t v171; // d16
  unsigned __int64 v172; // d1
  int v173; // r1
  __int64 v174; // kr20_8
  _DWORD *v175; // r4
  CWorld *v176; // r0
  int v177; // r4
  float v178; // r0
  unsigned __int32 v179; // r1
  int v180; // r3
  float v181; // r0
  float *v182; // r1
  CEntity *v183; // r0
  int v184; // r0
  int v185; // r1
  float v186; // s0
  __int64 v187; // d16
  float v188; // s2
  float v189; // s4
  float *v190; // r1
  int v191; // r4
  float v192; // r0
  unsigned __int32 v193; // r1
  int v194; // r3
  float v195; // r0
  float *v196; // r1
  CEntity **v197; // [sp+4h] [bp-194h]
  int v198; // [sp+64h] [bp-134h]
  int v199; // [sp+68h] [bp-130h]
  int v200; // [sp+6Ch] [bp-12Ch]
  int v201; // [sp+6Ch] [bp-12Ch]
  int v202; // [sp+70h] [bp-128h]
  CEntity **v203; // [sp+74h] [bp-124h]
  __int16 *v204; // [sp+78h] [bp-120h]
  CEntity *v205; // [sp+7Ch] [bp-11Ch]
  CEntity *v206; // [sp+7Ch] [bp-11Ch]
  double v207; // [sp+80h] [bp-118h] BYREF
  float v208; // [sp+88h] [bp-110h]
  float v209; // [sp+90h] [bp-108h]
  float v210; // [sp+94h] [bp-104h]
  float v211; // [sp+98h] [bp-100h]
  float v212; // [sp+A0h] [bp-F8h]
  float v213; // [sp+A4h] [bp-F4h]
  float v214; // [sp+A8h] [bp-F0h]
  float32x2_t v215; // [sp+C8h] [bp-D0h] BYREF
  float v216; // [sp+D0h] [bp-C8h]
  float v217; // [sp+D8h] [bp-C0h]
  float v218; // [sp+DCh] [bp-BCh]
  float v219; // [sp+E0h] [bp-B8h]
  float v220; // [sp+E8h] [bp-B0h]
  float v221; // [sp+ECh] [bp-ACh]
  float v222; // [sp+F0h] [bp-A8h]
  float v223; // [sp+114h] [bp-84h] BYREF
  float v224; // [sp+118h] [bp-80h]
  float v225; // [sp+11Ch] [bp-7Ch]
  float v226; // [sp+120h] [bp-78h]
  float v227; // [sp+124h] [bp-74h]
  float v228; // [sp+128h] [bp-70h]
  int v229; // [sp+12Ch] [bp-6Ch]
  int v230; // [sp+130h] [bp-68h]
  int v231; // [sp+134h] [bp-64h]

  v6 = *(float *)this;
  v7 = *((float *)this + 1);
  v8 = *(float *)&CTimer::ms_fTimeStep;
  v9 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v9 = (float *)&qword_951FAC;
  v10 = sqrtf((float)((float)(*v9 - v6) * (float)(*v9 - v6)) + (float)((float)(v9[1] - v7) * (float)(v9[1] - v7)));
  *(float *)&result = powf(0.8, *(float *)&CTimer::ms_fTimeStep);
  v12 = result;
  if ( v10 < 200.0 )
  {
    v13 = *((_BYTE *)this + 807);
    if ( (v13 & 1) == 0 && (unsigned int)CTimer::m_snTimeInMilliseconds > *((_DWORD *)this + 200) )
    {
      v14 = *((float *)this + 2);
      v15 = *((float *)this + 98) + (float)(v8 * -0.0015);
      v6 = (float)(v8 * *((float *)this + 96)) + v6;
      v7 = (float)(v8 * *((float *)this + 97)) + v7;
      *((float *)this + 98) = v15;
      *(float *)this = v6;
      *((float *)this + 1) = v7;
      *((float *)this + 2) = (float)(v8 * v15) + v14;
    }
    if ( (v13 & 4) != 0 && (CTimer::m_FrameCounter & 7) == 2 )
    {
      GroundZFor3DCoord = CWorld::FindGroundZFor3DCoord((CWorld *)LODWORD(v6), v7, *((float *)this + 2), 0.0, 0, v197);
      v13 = *((_BYTE *)this + 807);
      *((_DWORD *)this + 193) = GroundZFor3DCoord;
    }
    if ( (v13 & 4) != 0 )
    {
      v17 = *((_DWORD *)this + 198);
      if ( v17 )
      {
        if ( (*(_BYTE *)(v17 + 58) & 7) == 2
          || (v18 = *(__int16 *)(v17 + 38), v18 == (unsigned __int16)MI_OBJECTFORMAGNOCRANE1)
          || v18 == (unsigned __int16)MI_OBJECTFORMAGNOCRANE2
          || v18 == (unsigned __int16)MI_OBJECTFORMAGNOCRANE3
          || v18 == (unsigned __int16)MI_OBJECTFORMAGNOCRANE5 )
        {
          v19 = *((_DWORD *)this + 197);
          v20 = *(_DWORD *)(v19 + 20);
          v21 = v20 + 48;
          if ( !v20 )
            v21 = v19 + 4;
          *((float *)this + 193) = *(float *)(v21 + 8) + -0.5;
        }
      }
    }
    v22 = *((unsigned __int8 *)this + 804);
    if ( v22 <= 0x1E )
    {
      v23 = v22 - 1;
      v3.n64_u32[0] = v12;
      v24 = (float *)((char *)this + 12 * v22);
      v25 = 1.0 - v3.n64_f32[0];
      do
      {
        v26 = v24[3];
        v3.n64_f32[1] = v24[4];
        v27 = v24[5];
        v24[99] = v24[99] + (float)((float)((rand() & 0xF) - 8) * 0.001);
        v28 = rand();
        ++v23;
        v29 = v25 * v24[97];
        v30 = v24[100] + (float)((float)((v28 & 0xF) - 8) * 0.001);
        v31 = v24[5];
        v32 = (float)(v25 * v24[98]) + (float)(v3.n64_f32[0] * v24[101]);
        v24[99] = (float)(v25 * v24[96]) + (float)(v3.n64_f32[0] * v24[99]);
        v24[100] = v29 + (float)(v3.n64_f32[0] * v30);
        v24[101] = v32;
        v1.n64_f32[0] = v31 + (float)(*(float *)&CTimer::ms_fTimeStep * -0.15);
        v24[5] = v1.n64_f32[0];
        if ( (*((_BYTE *)this + 807) & 4) != 0 )
        {
          v2.n64_f32[0] = *((float *)this + 193) + 0.3;
          v1.n64_u32[0] = vmax_f32(v1, v2).n64_u32[0];
          v24[5] = v1.n64_f32[0];
        }
        v33 = v24[1];
        v34 = v24[3] - *v24;
        v35 = v24[2];
        v36 = v24[4] - v33;
        v37 = v1.n64_f32[0] - v35;
        v1.n64_f32[1] = v37 * v37;
        v38 = *((float *)this + 195) / sqrtf((float)((float)(v34 * v34) + (float)(v36 * v36)) + (float)(v37 * v37));
        v1.n64_f32[0] = v35 + (float)(v37 * v38);
        v39 = *v24 + (float)(v34 * v38);
        v40 = v33 + (float)(v36 * v38);
        v24[3] = v39;
        v24[4] = v40;
        v24[5] = v1.n64_f32[0];
        v41 = 1.0 / *(float *)&CTimer::ms_fTimeStep;
        v24[99] = (float)(1.0 / *(float *)&CTimer::ms_fTimeStep) * (float)(v39 - v26);
        v24[100] = v41 * (float)(v40 - v3.n64_f32[1]);
        v24[101] = v41 * (float)(v1.n64_f32[0] - v27);
        v24 += 3;
      }
      while ( v23 < 30 );
    }
    v42 = *((unsigned __int8 *)this + 805);
    v43 = (unsigned __int8)(v42 - 1);
    if ( v43 > 6 )
    {
LABEL_226:
      if ( !(*((unsigned __int8 *)this + 807) << 31) && *((float *)this + 2) < -50.0 )
      {
        v173 = *((_DWORD *)this + 198);
        *((_BYTE *)this + 805) = 0;
        if ( v173 )
        {
          *(_DWORD *)(v173 + 68) &= ~0x2000000u;
          *(_DWORD *)(*((_DWORD *)this + 198) + 68) &= ~0x80000000;
          v173 = *((_DWORD *)this + 197);
          *((_DWORD *)this + 198) = 0;
          v174 = *(_QWORD *)(v173 + 28);
          *(_DWORD *)(v173 + 28) = v174 | 1;
          *(_DWORD *)(v173 + 32) = HIDWORD(v174);
          *((_BYTE *)this + 806) = 60;
        }
        v175 = (_DWORD *)((char *)this + 788);
        v176 = (CWorld *)*((_DWORD *)this + 197);
        if ( v176 )
        {
          CWorld::Remove(v176, (CEntity *)v173);
          if ( *v175 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v175 + 4))(*v175);
          *v175 = 0;
        }
      }
      result = *((_BYTE *)this + 807) & 0xFE;
      *((_BYTE *)this + 807) = result;
      return result;
    }
    v44 = v42 == 4;
    if ( v42 == 4 )
      v44 = CRopes::PlayerControlsCrane == 1;
    if ( !v44 )
    {
      v45 = v42 == 5;
      if ( v42 == 5 )
        v45 = CRopes::PlayerControlsCrane == 2;
      if ( !v45 )
      {
        v46 = v42 == 7;
        if ( v42 == 7 )
          v46 = CRopes::PlayerControlsCrane == 3;
        if ( !v46 )
        {
          v42 = (v42 ^ 6 | CRopes::PlayerControlsCrane ^ 4) == 0;
          if ( v43 >= 3 && v42 != 1 )
          {
LABEL_77:
            v3.n64_u32[0] = 1008981770;
            v57 = (char *)this + 792;
            v1.n64_u32[0] = *((_DWORD *)this + 199);
            v4.n64_u32[0] = 1063675494;
            v58 = *((_DWORD *)this + 198);
            v59.n64_u64[0] = vmin_f32(vmax_f32(v1, v3), v4).n64_u64[0];
            *((_DWORD *)this + 199) = v59.n64_u32[0];
            if ( v58 )
            {
              v59.n64_f32[0] = (float)(*(float *)(v58 + 144) * 0.00010833) + 0.06;
              if ( *(_WORD *)(v58 + 38) == 428 )
                v59.n64_u32[0] = 1041277911;
              v2.n64_u32[0] = 0.5;
              *(_BYTE *)(v58 + 188) = 0;
              LODWORD(v60) = vmin_f32(v59, v2).n64_u32[0];
            }
            else
            {
              v58 = *((_DWORD *)this + 197);
              *(_DWORD *)(v58 + 28) |= 1u;
              if ( !v58 )
                goto LABEL_102;
              v60 = 0.06;
            }
            v61 = (float *)(v58 + 4);
            if ( CRope::UpdateWeightInRope() == 1 )
            {
              v62 = v230;
              v63 = *(_DWORD *)(v58 + 20);
              v64 = v231;
              if ( v63 )
              {
                *(_DWORD *)(v63 + 48) = v229;
                *(_DWORD *)(*(_DWORD *)(v58 + 20) + 52) = v62;
                v65 = (_DWORD *)(*(_DWORD *)(v58 + 20) + 56);
              }
              else
              {
                *(_DWORD *)(v58 + 4) = v229;
                *(_DWORD *)(v58 + 8) = v62;
                v65 = (_DWORD *)(v58 + 12);
              }
              *v65 = v64;
              v66 = *(float *)(v58 + 72);
              v67 = *(float *)(v58 + 76);
              v68 = *(float *)(v58 + 80);
              CPhysical::GetSpeed();
              if ( (*((_BYTE *)this + 805) & 0xFC) == 4 )
              {
                v69 = 0.0;
                v226 = 0.0;
                v227 = 0.0;
                v70 = 0.0;
                v228 = 0.0;
                v71 = 0.0;
              }
              else
              {
                v71 = v226;
                v70 = v227;
                v69 = v228;
              }
              v72 = *(_DWORD *)(v58 + 20);
              if ( v72 )
                v61 = (float *)(v72 + 48);
              v73 = *v61 - *(float *)this;
              v74 = v61[2] - *((float *)this + 2);
              v224 = v61[1] - *((float *)this + 1);
              v223 = v73;
              v225 = v74;
              CVector::Normalise((CVector *)&v223);
              v75 = v67 - v70;
              v76 = v66 - v71;
              v77 = v68 - v69;
              v78 = (float)((float)((float)(v66 - v71) * v223) + (float)((float)(v67 - v70) * v224))
                  + (float)((float)(v68 - v69) * v225);
              if ( v78 > 0.0 )
              {
                v77 = v77 - (float)(v225 * v78);
                v75 = v75 - (float)(v224 * v78);
                v76 = v76 - (float)(v223 * v78);
              }
              v79 = *(float *)(v58 + 72);
              v80 = *(float *)(v58 + 76);
              v81 = *(float *)(v58 + 80);
              v82 = (float)(v76 + v226) - v79;
              v83 = (float)(v75 + v227) - v80;
              v84 = (float)(v77 + v228) - v81;
              *(float *)(v58 + 72) = v79 + (float)((float)(1.0 - v60) * v82);
              *(float *)(v58 + 76) = v80 + (float)((float)(1.0 - v60) * v83);
              *(float *)(v58 + 80) = v81 + (float)((float)(1.0 - v60) * v84);
              v85 = *((_DWORD *)this + 196);
              v59.n64_u32[1] = *(_DWORD *)(v85 + 80);
              v86 = *(float *)(v85 + 76) - (float)(v60 * v83);
              *(float *)(v85 + 72) = *(float *)(v85 + 72) - (float)(v60 * v82);
              *(float *)(v85 + 76) = v86;
              *(float *)(v85 + 80) = v59.n64_f32[1] - (float)(v60 * v84);
              if ( *((_DWORD *)this + 198) )
              {
                CMatrix::CMatrix((CMatrix *)&v215, *(const CMatrix **)(v58 + 20));
                CMatrix::ForceUpVector();
                CMatrix::CMatrix((CMatrix *)&v207, *(const CMatrix **)(v58 + 20));
                **(float **)(v58 + 20) = (float)(*(float *)&v207 * 0.1) + (float)(v215.n64_f32[0] * 0.9);
                *(float *)(*(_DWORD *)(v58 + 20) + 4) = (float)(*((float *)&v207 + 1) * 0.1)
                                                      + (float)(v215.n64_f32[1] * 0.9);
                *(float *)(*(_DWORD *)(v58 + 20) + 8) = (float)(v208 * 0.1) + (float)(v216 * 0.9);
                *(float *)(*(_DWORD *)(v58 + 20) + 16) = (float)(v209 * 0.1) + (float)(v217 * 0.9);
                *(float *)(*(_DWORD *)(v58 + 20) + 20) = (float)(v210 * 0.1) + (float)(v218 * 0.9);
                *(float *)(*(_DWORD *)(v58 + 20) + 24) = (float)(v211 * 0.1) + (float)(v219 * 0.9);
                *(float *)(*(_DWORD *)(v58 + 20) + 32) = (float)(v212 * 0.1) + (float)(v220 * 0.9);
                *(float *)(*(_DWORD *)(v58 + 20) + 36) = (float)(v213 * 0.1) + (float)(v221 * 0.9);
                *(float *)(*(_DWORD *)(v58 + 20) + 40) = (float)(v214 * 0.1) + (float)(v222 * 0.9);
                CMatrix::~CMatrix(v87);
                CMatrix::~CMatrix((CMatrix *)&v215);
              }
              else
              {
                CMatrix::ForceUpVector();
              }
            }
            v88 = 0;
            if ( !*(_DWORD *)v57 )
            {
LABEL_103:
              if ( v88 )
              {
                v96 = *((unsigned __int8 *)this + 805);
                v97 = CRopes::PlayerControlsCrane;
                v98 = v96 == 4;
                if ( v96 == 4 )
                  v98 = CRopes::PlayerControlsCrane == 1;
                if ( v98 )
                  goto LABEL_254;
                v99 = v96 == 5;
                if ( v96 == 5 )
                  v99 = CRopes::PlayerControlsCrane == 2;
                if ( v99 )
                  goto LABEL_254;
                v100 = v96 == 7;
                if ( v96 == 7 )
                  v100 = CRopes::PlayerControlsCrane == 3;
                if ( v100
                  || (v97 = (unsigned __int8)(v96 - 1) < 3u,
                      (v97 | ((CRopes::PlayerControlsCrane ^ 4 | v96 ^ 6) == 0)) == 1) )
                {
LABEL_254:
                  if ( CTheScripts::bEnableCraneRelease )
                  {
                    Pad = (CPad *)CPad::GetPad(0, v97);
                    if ( CPad::CraneReleaseJustDown(Pad) )
                    {
                      if ( *(_DWORD *)v57 )
                      {
                        *(_DWORD *)(*(_DWORD *)v57 + 68) &= ~0x2000000u;
                        *(_DWORD *)(*(_DWORD *)v57 + 68) &= ~0x80000000;
                        *(_DWORD *)v57 = 0;
                      }
                      v102 = *((_DWORD *)this + 197);
                      v103 = *(_QWORD *)(v102 + 28);
                      *(_DWORD *)(v102 + 28) = v103 | 1;
                      *(_DWORD *)(v102 + 32) = HIDWORD(v103);
                      *((_BYTE *)this + 806) = 60;
                    }
                  }
                }
                v104 = *(_DWORD *)v57;
                if ( *(_DWORD *)v57 )
                {
                  v105 = *(_DWORD *)(v104 + 68);
                  if ( (v105 & 0x20000000) == 0
                    || (*(_DWORD *)(v104 + 68) = v105 & 0xFDFFFFFF,
                        *(_DWORD *)(*((_DWORD *)this + 198) + 68) &= ~0x80000000,
                        v106 = *((_DWORD *)this + 197),
                        *((_DWORD *)this + 198) = 0,
                        *(_DWORD *)(v106 + 28) |= 1u,
                        v104 = *((_DWORD *)this + 198),
                        *((_BYTE *)this + 806) = 60,
                        v104) )
                  {
                    v107 = *(_BYTE *)(v104 + 58) & 7;
                    v108 = v107 == 2;
                    if ( v107 == 2 )
                      v108 = *(_DWORD *)(v104 + 1444) == 9;
                    if ( v108 && *(_DWORD *)(v104 + 1124) )
                    {
                      *(_DWORD *)(v104 + 68) &= ~0x2000000u;
                      *(_DWORD *)(*((_DWORD *)this + 198) + 68) &= ~0x80000000;
                      v109 = *((_DWORD *)this + 197);
                      *((_DWORD *)this + 198) = 0;
                      v110 = *(_QWORD *)(v109 + 28);
                      *(_DWORD *)(v109 + 28) = v110 | 1;
                      *(_DWORD *)(v109 + 32) = HIDWORD(v110);
                      *((_BYTE *)this + 806) = 60;
                    }
                  }
                }
                goto LABEL_226;
              }
              if ( *((_BYTE *)this + 806) )
              {
                --*((_BYTE *)this + 806);
                goto LABEL_226;
              }
              v203 = (CEntity **)((char *)this + 792);
              v111 = 0;
              v112 = *((float *)this + 95);
              v113.n64_u64[0] = *(unsigned __int64 *)((char *)this + 372);
              v114 = -2566;
              v115 = 1;
              v116 = 0;
              v117 = 0;
              v205 = 0;
              switch ( *((_BYTE *)this + 805) )
              {
                case 1:
                  goto LABEL_152;
                case 2:
                  if ( *v203 )
                    goto LABEL_144;
                  v118 = (int *)CPools::ms_pPedPool;
                  v119 = *(_DWORD *)(CPools::ms_pPedPool + 8);
                  if ( !v119 )
                    goto LABEL_144;
                  v120 = v119 - 1;
                  v121 = 1996 * v119 - 896;
                  while ( 1 )
                  {
                    if ( *(char *)(v118[1] + v120) >= 0 )
                    {
                      v122 = *v118;
                      v123 = *v118 + v121;
                      v124 = v123 == 1100;
                      if ( v123 != 1100 )
                        v124 = *(_DWORD *)(v122 + v121) == 55;
                      if ( !v124 )
                      {
                        v206 = (CEntity *)(v123 - 1100);
                        v125 = v114;
                        IsPlayer = CPed::IsPlayer((CPed *)(v123 - 1100));
                        v114 = v125;
                        if ( IsPlayer != 1 && !(*(unsigned __int8 *)(v123 + 57) << 31) )
                        {
                          v127 = *(float32x2_t **)(v123 - 1080);
                          v128 = v127 + 6;
                          if ( !v127 )
                            v128 = (float32x2_t *)(v123 - 1096);
                          v129.n64_u64[0] = vsub_f32((float32x2_t)v128->n64_u64[0], v113).n64_u64[0];
                          v130 = vmul_f32(v129, v129).n64_u64[0];
                          v131 = sqrtf(
                                   (float)(*(float *)&v130 + *((float *)&v130 + 1))
                                 + (float)((float)(v128[1].n64_f32[0] - v112) * (float)(v128[1].n64_f32[0] - v112)));
                          if ( v131 < 2.5 )
                            break;
                        }
                      }
                    }
                    --v120;
                    v121 -= 1996;
                    if ( v120 == -1 )
                      goto LABEL_144;
                  }
                  *((_DWORD *)this + 198) = v206;
                  CEntity::RegisterReference(v206, v203);
                  *(_DWORD *)(*((_DWORD *)this + 198) + 68) |= 0x80000000;
                  v191 = *((_DWORD *)this + 197);
                  v192 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v122
                                                                                                + v125
                                                                                                + v121
                                                                                                + 1504)])
                                              + 44)
                                  + 20);
                  v207 = 0.0;
                  v208 = v192;
                  operator*();
                  v193 = v215.n64_u32[1];
                  v194 = *(_DWORD *)(v191 + 20);
                  v195 = v216;
                  if ( v194 )
                  {
                    *(_DWORD *)(v194 + 48) = v215.n64_u32[0];
                    *(_DWORD *)(*(_DWORD *)(v191 + 20) + 52) = v193;
                    v196 = (float *)(*(_DWORD *)(v191 + 20) + 56);
                  }
                  else
                  {
                    *(float32x2_t *)(v191 + 4) = v215;
                    v196 = (float *)(v191 + 12);
                  }
                  v59.n64_f32[0] = v112 - v131;
                  *v196 = v195;
                  *(_DWORD *)(*((_DWORD *)this + 197) + 28) &= ~1u;
                  if ( v59.n64_f32[0] > 0.0 )
                  {
                    v59.n64_f32[0] = (float)(*((float *)this + 199) - (float)(v59.n64_f32[0] / *((float *)this + 194)))
                                   - (float)(*((float *)this + 195) / *((float *)this + 194));
                    v59.n64_u64[0] = vmax_f32(v59, v3).n64_u64[0];
                    *((_DWORD *)this + 199) = v59.n64_u32[0];
                  }
LABEL_144:
                  v111 = 0;
LABEL_145:
                  v116 = 0;
                  v205 = 0;
                  goto LABEL_179;
                case 3:
                  v117 = 1;
                  v111 = 0;
                  v116 = 0;
                  goto LABEL_152;
                case 4:
                  v116 = 1;
                  v111 = 0;
                  goto LABEL_151;
                case 5:
                  goto LABEL_179;
                case 6:
                  v116 = 0;
                  v111 = 1;
LABEL_151:
                  v117 = 0;
LABEL_152:
                  v205 = (CEntity *)v111;
                  v132 = (int *)CPools::ms_pVehiclePool;
                  v133 = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
                  if ( !v133 )
                    goto LABEL_178;
                  v134 = v133 - 1;
                  v135 = 2604 * v133 - 1160;
                  break;
                case 7:
                  goto LABEL_184;
                default:
                  goto LABEL_145;
              }
              while ( 1 )
              {
                if ( *(char *)(v132[1] + v134) >= 0 )
                {
                  v136 = *v132;
                  v137 = *v132 + v135;
                  if ( v137 != 1444 )
                  {
                    v138 = *(_DWORD *)(v136 + v135);
                    if ( v138 < 2 || v138 == 9 && !*(_DWORD *)(v137 - 320) )
                      goto LABEL_166;
                    v139 = *(__int16 *)(v136 - 2566 + v135 + 1160);
                    v140 = v139 == 539;
                    if ( v139 != 539 )
                      v140 = v139 == 473;
                    if ( v140 )
                    {
LABEL_166:
                      if ( (*(_BYTE *)(v137 - 1373) & 0x20) == 0
                        && (*(_BYTE *)(v137 - 371) & 0x10) != 0
                        && (v117 != 1 || *(_WORD *)(v136 - 2566 + v135 + 1160) == 564)
                        && (*(_BYTE *)(v137 - 242) & 0x60) == 0 )
                      {
                        v200 = v136 - 2566 + v135;
                        v141 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v200 + 1160)])
                                                    + 44)
                                        + 20);
                        v207 = 0.0;
                        v208 = v141;
                        operator*();
                        v142.n64_u64[0] = vsub_f32(v215, v113).n64_u64[0];
                        v143 = v216;
                        v144 = vmul_f32(v142, v142).n64_u64[0];
                        if ( sqrtf(
                               (float)(*(float *)&v144 + *((float *)&v144 + 1))
                             + (float)((float)(v216 - v112) * (float)(v216 - v112))) < 2.5 )
                          break;
                      }
                    }
                  }
                }
                --v134;
                v135 -= 2604;
                if ( v134 == -1 )
                {
                  v111 = v117;
                  goto LABEL_179;
                }
              }
              *v203 = (CEntity *)(v137 - 1444);
              CEntity::RegisterReference((CEntity *)(v137 - 1444), v203);
              *((_DWORD *)*v203 + 17) |= 0x80000000;
              v145 = *(_BYTE *)(v200 + 1180);
              if ( (v145 & 0xF8) == 0x10 )
                *(_BYTE *)(v200 + 1180) = v145 & 7 | 0x18;
              v146 = *(_QWORD *)((char *)this + 788);
              v147 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v200 + 1160)]) + 44) + 20);
              v207 = 0.0;
              v208 = v147;
              operator*();
              v148 = v215.n64_u32[1];
              v149 = *(_DWORD *)(v146 + 20);
              v150 = v216;
              if ( v149 )
              {
                *(_DWORD *)(v149 + 48) = v215.n64_u32[0];
                *(_DWORD *)(*(_DWORD *)(v146 + 20) + 52) = v148;
                v151 = (float *)(*(_DWORD *)(v146 + 20) + 56);
              }
              else
              {
                *(float32x2_t *)(v146 + 4) = v215;
                v151 = (float *)(v146 + 12);
              }
              *v151 = v150;
              *(_DWORD *)(*((_DWORD *)this + 197) + 28) &= ~1u;
              if ( (float)(v112 - v143) > 0.0 )
              {
                v59.n64_f32[0] = (float)(*((float *)this + 199) - (float)((float)(v112 - v143) / *((float *)this + 194)))
                               - (float)(*((float *)this + 195) / *((float *)this + 194));
                v59.n64_u64[0] = vmax_f32(v59, v3).n64_u64[0];
                *((_DWORD *)this + 199) = v59.n64_u32[0];
              }
LABEL_178:
              v111 = v117;
LABEL_179:
              v152 = v111 == 0;
              v115 = 0;
              if ( !v111 )
                v152 = v116 == 0;
              if ( !v152 || v205 == (CEntity *)((char *)&stderr + 1) )
              {
LABEL_184:
                if ( *v203 )
                  goto LABEL_226;
                v153 = (int *)CPools::ms_pObjectPool;
                v154 = *(_DWORD *)(CPools::ms_pObjectPool + 8);
                if ( !v154 )
                  goto LABEL_226;
                v155 = v154 - 1;
                v156 = 420 * v154 - 164;
                v201 = CPools::ms_pObjectPool;
                v202 = v116;
                v198 = v111;
                v199 = v115;
                while ( 1 )
                {
                  --v154;
                  if ( *(char *)(v153[1] + v155) < 0 )
                    goto LABEL_225;
                  v158 = *v153;
                  v159 = *v153 + v156;
                  if ( v159 == 256 || (*(_BYTE *)(v159 + 70) & 4) == 0 )
                    goto LABEL_225;
                  if ( v116 != 1
                    || (v160 = *(__int16 *)(v159 - 218),
                        v204 = (__int16 *)(v159 - 218),
                        LOWORD(v161) = *(_WORD *)(v159 - 218),
                        v160 != (unsigned __int16)MI_OBJECTFORMAGNOCRANE1)
                    && v160 != (unsigned __int16)MI_OBJECTFORMAGNOCRANE2
                    && v160 != (unsigned __int16)MI_OBJECTFORMAGNOCRANE3
                    && v160 != MI_OBJECTFORMAGNOCRANE4
                    && (v115 = v199, v160 != (unsigned __int16)MI_OBJECTFORMAGNOCRANE5) )
                  {
                    if ( v115 == 1 && (v161 = *(__int16 *)(v159 - 218), v161 == MI_OBJECTFORBUILDINGSITECRANE1)
                      || v205 == (CEntity *)((char *)&stderr + 1)
                      && ((v161 = *(__int16 *)(v159 - 218), v161 == MI_QUARY_ROCK1)
                       || v161 == MI_QUARY_ROCK2
                       || v161 == MI_QUARY_ROCK3
                       || v161 == MI_DEAD_TIED_COP)
                      && !*(_DWORD *)(v158 + v156) )
                    {
                      v204 = (__int16 *)(v158 + 420 * v154 + 38);
                    }
                    else
                    {
                      v153 = (int *)v201;
                      if ( v111 != 1 )
                        goto LABEL_225;
                      v161 = v158 + 420 * v154;
                      v162 = *(__int16 *)(v159 - 218);
                      v204 = (__int16 *)(v161 + 38);
                      LOWORD(v161) = *(_WORD *)(v159 - 218);
                      if ( v162 != MI_WONG_DISH && v162 != MI_KMB_ROCK && v162 != MI_KMB_PLANK )
                      {
                        v153 = (int *)v201;
                        if ( v162 != MI_KMB_BOMB )
                          goto LABEL_225;
                      }
                    }
                  }
                  v163 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[(__int16)v161]) + 44) + 20);
                  v207 = 0.0;
                  v208 = v163;
                  operator*();
                  v164.n64_u64[0] = v215.n64_u64[0];
                  v165 = *v204;
                  v166 = v216;
                  if ( v165 == (unsigned __int16)MI_OBJECTFORMAGNOCRANE1
                    || v165 == (unsigned __int16)MI_OBJECTFORMAGNOCRANE2
                    || v165 == (unsigned __int16)MI_OBJECTFORMAGNOCRANE3
                    || v165 == (unsigned __int16)MI_OBJECTFORMAGNOCRANE5 )
                  {
                    v167 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v165]) + 44) + 20);
                    v207 = 0.0;
                    v208 = -v167;
                    operator*();
                    v168 = v215.n64_u64[0];
                    v157 = 0;
                    if ( v216 <= v166 )
                    {
                      v168 = v164.n64_u64[0];
                    }
                    else
                    {
                      v166 = v216;
                      v157 = 2;
                    }
                    v226 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*v204]) + 44) + 20);
                    v227 = 0.0;
                    v228 = 0.0;
                    operator*();
                    v169 = v166;
                    v216 = v208;
                    v215.n64_f64[0] = v207;
                    if ( v208 > v166 )
                    {
                      v169 = v208;
                      v157 = 3;
                      v168 = v215.n64_u64[0];
                    }
                    v170 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*v204]) + 44) + 20);
                    v227 = 0.0;
                    v228 = 0.0;
                    v226 = -v170;
                    operator*();
                    v166 = v169;
                    v216 = v208;
                    v215.n64_f64[0] = v207;
                    if ( v208 <= v169 )
                    {
                      v164.n64_u64[0] = v168;
                    }
                    else
                    {
                      v166 = v208;
                      v157 = 1;
                      v164.n64_u64[0] = v215.n64_u64[0];
                    }
                  }
                  else
                  {
                    v157 = 0;
                  }
                  v171.n64_u64[0] = vsub_f32(v164, v113).n64_u64[0];
                  v111 = v198;
                  v115 = v199;
                  v153 = (int *)v201;
                  v116 = v202;
                  v172 = vmul_f32(v171, v171).n64_u64[0];
                  if ( sqrtf(
                         (float)(*(float *)&v172 + *((float *)&v172 + 1))
                       + (float)((float)(v166 - v112) * (float)(v166 - v112))) < 2.5 )
                  {
                    *((_DWORD *)this + 198) = v159 - 256;
                    CEntity::RegisterReference((CEntity *)(v159 - 256), v203);
                    *(_DWORD *)(*((_DWORD *)this + 198) + 68) |= 0x80000000;
                    v177 = *((_DWORD *)this + 197);
                    v178 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*v204]) + 44) + 20);
                    v207 = 0.0;
                    v208 = v178;
                    operator*();
                    v179 = v215.n64_u32[1];
                    v180 = *(_DWORD *)(v177 + 20);
                    v181 = v216;
                    if ( v180 )
                    {
                      *(_DWORD *)(v180 + 48) = v215.n64_u32[0];
                      *(_DWORD *)(*(_DWORD *)(v177 + 20) + 52) = v179;
                      v182 = (float *)(*(_DWORD *)(v177 + 20) + 56);
                    }
                    else
                    {
                      *(float32x2_t *)(v177 + 4) = v215;
                      v182 = (float *)(v177 + 12);
                    }
                    *v182 = v181;
                    *(_DWORD *)(*((_DWORD *)this + 197) + 28) &= ~1u;
                    v183 = (CEntity *)*((_DWORD *)this + 198);
                    if ( (*((_DWORD *)v183 + 7) & 0x40004) != 0 )
                    {
                      (*(void (__fastcall **)(CEntity *, _DWORD))(*(_DWORD *)v183 + 20))(v183, 0);
                      CPhysical::AddToMovingList(*v203);
                      v183 = *v203;
                    }
                    *((_DWORD *)v183 + 17) |= 0x2000000u;
                    if ( (float)(v112 - v166) > 0.0 )
                    {
                      v59.n64_f32[0] = (float)(*((float *)this + 199)
                                             - (float)((float)(v112 - v166) / *((float *)this + 194)))
                                     - (float)(*((float *)this + 195) / *((float *)this + 194));
                      *((_DWORD *)this + 199) = vmax_f32(v59, v3).n64_u32[0];
                    }
                    if ( v157 >= 1 )
                    {
                      v184 = v157 + 1;
                      do
                      {
                        --v184;
                        v185 = *((_DWORD *)*v203 + 5);
                        v186 = -*(float *)v185;
                        v187 = *(_QWORD *)(v185 + 32);
                        v188 = -*(float *)(v185 + 4);
                        v189 = -*(float *)(v185 + 8);
                        *(_DWORD *)(v185 + 8) = *(_DWORD *)(v185 + 40);
                        *(_QWORD *)v185 = v187;
                        v190 = (float *)*((_DWORD *)*v203 + 5);
                        v190[8] = v186;
                        v190[9] = v188;
                        v190[10] = v189;
                      }
                      while ( v184 > 1 );
                    }
                    goto LABEL_226;
                  }
LABEL_225:
                  --v155;
                  v156 -= 420;
                  if ( v155 == -1 )
                    goto LABEL_226;
                }
              }
              goto LABEL_226;
            }
            CMatrix::operator=();
            v89 = *(_QWORD *)((char *)this + 788);
            v90 = *(_QWORD *)(HIDWORD(v89) + 72);
            *(_DWORD *)(v89 + 80) = *(_DWORD *)(HIDWORD(v89) + 80);
            *(_QWORD *)(v89 + 72) = v90;
            v91 = *(_QWORD *)((char *)this + 788);
            LODWORD(v89) = *(_DWORD *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(HIDWORD(v91) + 38)])
                                                 + 44)
                                     + 20);
            v207 = 0.0;
            v208 = *(float *)&v89;
            operator*();
            v92 = v215.n64_u32[1];
            v93 = *(_DWORD *)(v91 + 20);
            v94 = v216;
            if ( v93 )
            {
              *(_DWORD *)(v93 + 48) = v215.n64_u32[0];
              *(_DWORD *)(*(_DWORD *)(v91 + 20) + 52) = v92;
              v95 = (float *)(*(_DWORD *)(v91 + 20) + 56);
            }
            else
            {
              *(float32x2_t *)(v91 + 4) = v215;
              v95 = (float *)(v91 + 12);
            }
            *v95 = v94;
LABEL_102:
            v88 = *(_DWORD *)v57;
            goto LABEL_103;
          }
        }
      }
    }
    if ( v43 <= 2 )
    {
      v47 = (CPad *)CPad::GetPad(0, v42);
      CarGunUpDown = CPad::GetCarGunUpDown(v47, 0, 0, 2500.0, 0);
      if ( FindPlayerVehicle(-1, 0) && *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 3 )
      {
        if ( CTouchInterface::IsTouched(46, 0, 1) )
          CarGunUpDown = -128;
        if ( CTouchInterface::IsTouched(47, 0, 1) )
          CarGunUpDown = 128;
      }
      if ( CarGunUpDown <= -1 && CTheScripts::bEnableCraneRaise || CarGunUpDown >= 1 && CTheScripts::bEnableCraneLower )
      {
        v1.n64_f32[0] = *((float *)this + 199)
                      + (float)((float)(*(float *)&CTimer::ms_fTimeStep * (float)CarGunUpDown) * -0.00001);
        *((_DWORD *)this + 199) = v1.n64_u32[0];
      }
      else
      {
        v1.n64_u32[0] = *((_DWORD *)this + 199);
      }
      v2.n64_u32[0] = 1062668861;
      v1.n64_u64[0] = vmin_f32(v1, v2).n64_u64[0];
      *((_DWORD *)this + 199) = v1.n64_u32[0];
      goto LABEL_77;
    }
    if ( !CTheScripts::bEnableCraneRaise )
    {
LABEL_64:
      if ( !CTheScripts::bEnableCraneLower )
        goto LABEL_77;
      IsTouched = CTouchInterface::IsTouched(45, 0, 1);
      v54 = *(float *)&CTimer::ms_fTimeStep;
      if ( IsTouched == 1 )
        v55 = *(float *)&CTimer::ms_fTimeStep * 0.00255;
      else
        v55 = (float)(v54 * (float)*(__int16 *)(CPad::GetPad(0, (int)&CTimer::ms_fTimeStep) + 32)) * 0.00001;
      v56 = *((unsigned __int8 *)this + 805);
      if ( v56 <= 7 && ((1 << v56) & 0xB0) != 0 )
      {
        if ( v55 <= 0.0 )
        {
LABEL_76:
          *((float *)this + 199) = *((float *)this + 199) - v55;
          goto LABEL_77;
        }
      }
      else if ( v55 <= 0.0 || v56 != 6 )
      {
        goto LABEL_76;
      }
      if ( (float)(*((float *)this + 199) - v55) > 0.01 )
        CAudioEngine::ReportMissionAudioEvent(
          (CAudioEngine *)&AudioEngine,
          0x68u,
          *((CPhysical **)this + 196),
          0.0,
          1.0);
      goto LABEL_76;
    }
    v49 = CTouchInterface::IsTouched(44, 0, 1);
    v50 = *(float *)&CTimer::ms_fTimeStep;
    if ( v49 == 1 )
      v51 = *(float *)&CTimer::ms_fTimeStep * 0.00255;
    else
      v51 = (float)(v50 * (float)*(__int16 *)(CPad::GetPad(0, (int)&CTimer::ms_fTimeStep) + 28)) * 0.00001;
    v52 = *((unsigned __int8 *)this + 805);
    if ( v52 <= 7 && ((1 << v52) & 0xB0) != 0 )
    {
      if ( v51 <= 0.0 )
      {
LABEL_63:
        *((float *)this + 199) = v51 + *((float *)this + 199);
        goto LABEL_64;
      }
    }
    else if ( v51 <= 0.0 || v52 != 6 )
    {
      goto LABEL_63;
    }
    if ( (float)(v51 + *((float *)this + 199)) < 0.9 )
      CAudioEngine::ReportMissionAudioEvent((CAudioEngine *)&AudioEngine, 0x68u, *((CPhysical **)this + 196), 0.0, 1.0);
    goto LABEL_63;
  }
  return result;
}


// ============================================================

// Address: 0x413e7c
// Original: _ZN5CRope6RenderEv
// Demangled: CRope::Render(void)
int __fastcall CRope::Render(float32x2_t *this)
{
  int result; // r0
  float32x2_t *v3; // r2
  float32x2_t v4; // d16
  unsigned __int64 v5; // d0
  unsigned int v6; // r1
  int *v7; // r0
  __int64 v8; // kr00_8
  int *v9; // r2
  int v10; // r2
  int v11; // r3
  int v12; // r6

  result = CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)&this[24], 20.0);
  if ( result == 1 )
  {
    result = (int)&TheCamera;
    v3 = (float32x2_t *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v3 = (float32x2_t *)&qword_951FAC;
    v4.n64_u64[0] = vsub_f32((float32x2_t)v3->n64_u64[0], (float32x2_t)this->n64_u64[0]).n64_u64[0];
    v5 = vmul_f32(v4, v4).n64_u64[0];
    if ( sqrtf(*(float *)&v5 + *((float *)&v5 + 1)) < 120.0 )
    {
      DefinedState();
      v6 = 0;
      v7 = &dword_A5A1F0;
      do
      {
        *v7 = 0x80000000;
        v8 = *(__int64 *)((char *)this->n64_i64 + v6 + 4);
        *(v7 - 6) = this->n64_i32[v6 / 4];
        v9 = &TempVertexBuffer[3 * v6 / 4];
        v6 += 12;
        v7 += 9;
        *(_QWORD *)(v9 + 1) = v8;
      }
      while ( v6 != 384 );
      RwRenderStateSet(8, 1);
      RwRenderStateSet(12, 1);
      RwRenderStateSet(10, 5);
      RwRenderStateSet(11, 6);
      RwRenderStateSet(9, 2);
      RwRenderStateSet(1, 0);
      if ( RwIm3DTransform() )
      {
        RwIm3DRenderIndexedPrimitive();
        RwIm3DEnd();
      }
      result = this[100].n64_u8[5];
      if ( result == 6 )
      {
        dword_A5A1F0 = 0x80000000;
        v10 = this->n64_u32[0];
        v11 = this->n64_i32[1];
        v12 = this[1].n64_i32[0];
        TempVertexBuffer[0] = v10;
        dword_A5A1DC = v11;
        dword_A5A1E0 = v12;
        dword_A5A214 = 0x80000000;
        dword_A5A1FC = 1144083579;
        dword_A5A200 = 1147473101;
        dword_A5A204 = 1112801280;
        result = RwIm3DTransform();
        if ( result )
        {
          RwIm3DRenderIndexedPrimitive();
          return sub_18D7C4();
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4140bc
// Original: _ZN5CRope6RemoveEv
// Demangled: CRope::Remove(void)
CWorld *__fastcall CRope::Remove(CRope *this)
{
  int v1; // r2
  CEntity *v2; // r1
  int v3; // r2
  int v4; // r3
  _DWORD *v5; // r4
  CWorld *result; // r0

  v1 = *((_DWORD *)this + 198);
  v2 = 0;
  *((_BYTE *)this + 805) = 0;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 68) &= ~0x2000000u;
    *(_DWORD *)(*((_DWORD *)this + 198) + 68) &= ~0x80000000;
    v3 = *((_DWORD *)this + 197);
    *((_DWORD *)this + 198) = 0;
    v4 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 28) |= 1u;
    *(_DWORD *)(v3 + 32) = v4;
    v2 = (CEntity *)&off_3C;
    *((_BYTE *)this + 806) = (unsigned __int8)&off_3C;
  }
  v5 = (_DWORD *)((char *)this + 788);
  result = (CWorld *)*((_DWORD *)this + 197);
  if ( result )
  {
    CWorld::Remove(result, v2);
    if ( *v5 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 4))(*v5);
    result = 0;
    *v5 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x41463c
// Original: _ZN5CRope23CreateHookObjectForRopeEv
// Demangled: CRope::CreateHookObjectForRope(void)
int __fastcall CRope::CreateHookObjectForRope(CRope *this)
{
  int result; // r0
  int v3; // r6
  CObject *v4; // r0
  CEntity *v5; // r0
  __int64 v6; // kr00_8
  int v7; // r1
  int v8; // r0
  int v9; // r6
  _DWORD *v10; // r1
  int v11; // r0
  CEntity *v12; // r1

  result = *((_DWORD *)this + 197);
  if ( !result )
  {
    result = *((unsigned __int8 *)this + 805) - 1;
    if ( (unsigned __int8)result <= 6u )
    {
      v3 = (unsigned __int16)*off_667D30[(char)result];
      v4 = (CObject *)CObject::operator new((CObject *)&elf_hash_bucket[34], (unsigned int)off_667D30);
      CObject::CObject(v4, v3, 1);
      *((_DWORD *)this + 197) = v5;
      CEntity::RegisterReference(v5, (CEntity **)this + 197);
      v6 = *(_QWORD *)((char *)this + 372);
      v7 = *((_DWORD *)this + 197);
      v8 = *((_DWORD *)this + 95);
      v9 = *(_DWORD *)(v7 + 20);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 48) = v6;
        *(_DWORD *)(*(_DWORD *)(v7 + 20) + 52) = HIDWORD(v6);
        v10 = (_DWORD *)(*(_DWORD *)(v7 + 20) + 56);
      }
      else
      {
        *(_QWORD *)(v7 + 4) = v6;
        v10 = (_DWORD *)(v7 + 12);
      }
      *v10 = v8;
      *(_BYTE *)(*((_DWORD *)this + 197) + 320) = 5;
      (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 197) + 20))(*((_DWORD *)this + 197), 0);
      v11 = *((_DWORD *)this + 197);
      v12 = (CEntity *)(*(_DWORD *)(v11 + 68) | 0x2000000);
      *(_DWORD *)(v11 + 68) = v12;
      result = CWorld::Add(*((CWorld **)this + 197), v12);
      *((_BYTE *)this + 806) = 0;
      *((_DWORD *)this + 198) = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4146e8
// Original: _ZN5CRope18UpdateWeightInRopeE7CVectorfPS0_
// Demangled: CRope::UpdateWeightInRope(CVector,float,CVector*)
int __fastcall CRope::UpdateWeightInRope(int a1, float a2, float a3, float a4, int a5, float *a6)
{
  int v7; // r5
  float *v8; // r0
  float v9; // s18
  float v10; // s16
  float v11; // s2
  float v12; // s20
  float v13; // s0
  float v14; // s4
  float v15; // s10
  float v16; // s8
  float v17; // s6
  int i; // lr
  int v19; // r0
  float *v20; // r6
  float v21; // s2
  float v22; // s6
  float v23; // s10
  float v24; // s4
  float v25; // s12
  float v26; // s1
  float v27; // s14
  float v28; // s14
  float v29; // s8
  float v30; // s10
  float v31; // s12
  float *v32; // r1
  float v33; // s6
  float v34; // s4
  int v35; // r6
  int v36; // r0
  float *v37; // r5
  float v38; // s6
  float v39; // s8
  float v40; // s4
  float v41; // s10
  float v42; // s12
  float v43; // s1
  float v44; // s14
  float v45; // s14
  int v46; // r0
  float32x2_t v47; // d16
  float v48; // s0
  int v49; // r1
  float32x2_t v50; // d17
  float32x2_t v51; // d18
  unsigned __int64 v52; // d3
  float v53; // s4
  float v54; // s6
  float v55; // s4
  float v56; // s4
  float v58; // s6
  unsigned int v59; // r0
  int v60; // r5
  float *v61; // r6
  float v62; // s6
  int v63; // r0
  float v64; // s6
  float v65; // s2
  float v66; // s4
  float v67; // [sp+4h] [bp-34h] BYREF
  float v68; // [sp+8h] [bp-30h]
  float v69; // [sp+Ch] [bp-2Ch]

  v7 = *(unsigned __int8 *)(a1 + 804);
  v8 = (float *)(a1 + 12 * v7);
  v9 = v8[1];
  v10 = *v8;
  v11 = a3 - v9;
  v12 = v8[2];
  v13 = a2 - *v8;
  v14 = a4 - v12;
  v15 = *(float *)(a1 + 780);
  v69 = a4 - v12;
  v68 = a3 - v9;
  v16 = v15 * (float)(31 - v7);
  v67 = v13;
  *(float *)(a1 + 372) = a2;
  *(float *)(a1 + 376) = a3;
  *(float *)(a1 + 380) = a4;
  v17 = sqrtf((float)((float)(v13 * v13) + (float)(v11 * v11)) + (float)(v14 * v14));
  if ( v17 >= v16 )
  {
    v58 = v16 / v17;
    *a6 = v10 + (float)(v58 * v13);
    a6[1] = v9 + (float)(v58 * v11);
    a6[2] = v12 + (float)(v58 * v14);
    v59 = *(unsigned __int8 *)(a1 + 804);
    if ( v59 <= 0x1E )
    {
      v60 = v59 - 1;
      v61 = (float *)(a1 + 12 * v59 + 12);
      do
      {
        CVector::Normalise((CVector *)&v67);
        v62 = *(float *)(a1 + 780);
        v67 = v62 * v67;
        v68 = v62 * v68;
        v69 = v62 * v69;
        v63 = v60 - *(unsigned __int8 *)(a1 + 804);
        ++v60;
        v64 = (float)(v63 + 2);
        v65 = v9 + (float)(v68 * v64);
        v66 = v12 + (float)(v69 * v64);
        *v61 = v10 + (float)(v67 * v64);
        v61[1] = v65;
        v61[2] = v66;
        v61 += 3;
      }
      while ( v60 < 30 );
    }
    return 1;
  }
  else
  {
    for ( i = 0; i != 6; ++i )
    {
      if ( (unsigned int)(unsigned __int8)v7 + 1 <= 0x1E )
      {
        v19 = 31;
        do
        {
          v20 = (float *)(a1 + 12 * v19);
          v21 = *(v20 - 3);
          v22 = *(v20 - 2);
          v23 = v20[1];
          v24 = *(v20 - 1);
          v25 = v20[2];
          v26 = *(float *)(a1 + 780);
          v27 = sqrtf(
                  (float)((float)((float)(*v20 - v21) * (float)(*v20 - v21))
                        + (float)((float)(v23 - v22) * (float)(v23 - v22)))
                + (float)((float)(v25 - v24) * (float)(v25 - v24)));
          if ( v27 <= v26 )
          {
            v19 = 0;
          }
          else
          {
            v28 = v26 / v27;
            v29 = *v20 + (float)((float)(v21 - *v20) * v28);
            v30 = v23 + (float)((float)(v22 - v23) * v28);
            v31 = v25 + (float)((float)(v24 - v25) * v28);
            *(v20 - 3) = v29;
            *(v20 - 2) = v30;
            *(v20 - 1) = v31;
            v32 = (float *)(a1 + 12 * (v19 - 1));
            v33 = (float)(v30 - v22) * (float)(1.0 / *(float *)&CTimer::ms_fTimeStep);
            v34 = (float)(v31 - v24) * (float)(1.0 / *(float *)&CTimer::ms_fTimeStep);
            v32[96] = (float)(v29 - v21) * (float)(1.0 / *(float *)&CTimer::ms_fTimeStep);
            v32[97] = v33;
            v32[98] = v34;
            LOBYTE(v7) = *(_BYTE *)(a1 + 804);
          }
          v35 = (unsigned __int8)v7 + 1;
          --v19;
        }
        while ( v19 > v35 );
        if ( (unsigned int)v35 <= 0x1E )
        {
          v36 = (unsigned __int8)v7;
          v37 = (float *)(a1 + 12 * (unsigned __int8)v7);
          do
          {
            v38 = v37[1];
            v39 = v37[3] - *v37;
            v40 = v37[2];
            v41 = v37[4] - v38;
            v42 = v37[5] - v40;
            v43 = *(float *)(a1 + 780);
            v44 = sqrtf((float)((float)(v39 * v39) + (float)(v41 * v41)) + (float)(v42 * v42));
            if ( v44 > v43 )
            {
              v45 = v43 / v44;
              v37[3] = *v37 + (float)(v39 * v45);
              v37[4] = v38 + (float)(v41 * v45);
              v37[5] = v40 + (float)(v42 * v45);
            }
            ++v36;
            v37 += 3;
          }
          while ( v36 < 30 );
        }
      }
      v7 = *(unsigned __int8 *)(a1 + 804);
    }
    if ( (unsigned int)(v7 + 1) <= 0x1E )
    {
      v46 = a1 + 360;
      v47.n64_u64[0] = *(unsigned __int64 *)(a1 + 376);
      v48 = *(float *)(a1 + 372);
      v49 = 31;
      do
      {
        v50.n64_u64[0] = *(unsigned __int64 *)(v46 + 4);
        v51.n64_u64[0] = vsub_f32(v47, v50).n64_u64[0];
        v52 = vmul_f32(v51, v51).n64_u64[0];
        v53 = (float)((float)((float)(v48 - *(float *)v46) * (float)(v48 - *(float *)v46)) + *(float *)&v52)
            + *((float *)&v52 + 1);
        v54 = *(float *)(a1 + 780);
        v55 = sqrtf(v53);
        if ( v55 <= v54 )
          break;
        v56 = v54 / v55;
        --v49;
        v47.n64_u64[0] = vadd_f32(v47, vmul_n_f32(vsub_f32(v50, v47), v56)).n64_u64[0];
        v48 = v48 + (float)((float)(*(float *)v46 - v48) * v56);
        *(float32x2_t *)(v46 + 4) = v47;
        *(float *)v46 = v48;
        v46 -= 12;
      }
      while ( v49 > *(unsigned __int8 *)(a1 + 804) + 1 );
    }
    return 0;
  }
}


// ============================================================

// Address: 0x414eac
// Original: _ZN5CRope15DoControlsApplyEv
// Demangled: CRope::DoControlsApply(void)
bool __fastcall CRope::DoControlsApply(CRope *this)
{
  int v1; // r0
  bool v2; // zf
  bool v3; // zf
  bool v4; // zf

  v1 = *((unsigned __int8 *)this + 805);
  v2 = v1 == 4;
  if ( v1 == 4 )
    v2 = CRopes::PlayerControlsCrane == 1;
  if ( v2 )
    return 1;
  v3 = v1 == 5;
  if ( v1 == 5 )
    v3 = CRopes::PlayerControlsCrane == 2;
  if ( v3 )
    return 1;
  v4 = v1 == 7;
  if ( v1 == 7 )
    v4 = CRopes::PlayerControlsCrane == 3;
  return v4 || (unsigned __int8)(v1 - 1) < 3u || (CRopes::PlayerControlsCrane ^ 4 | v1 ^ 6) == 0;
}


// ============================================================

// Address: 0x414f00
// Original: _ZN5CRope21ReleasePickedUpObjectEv
// Demangled: CRope::ReleasePickedUpObject(void)
int __fastcall CRope::ReleasePickedUpObject(int this)
{
  int v1; // r1
  int v2; // r1
  __int64 v3; // r2

  v1 = *(_DWORD *)(this + 792);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 68) &= ~0x2000000u;
    *(_DWORD *)(*(_DWORD *)(this + 792) + 68) &= ~0x80000000;
    *(_DWORD *)(this + 792) = 0;
  }
  v2 = *(_DWORD *)(this + 788);
  v3 = *(_QWORD *)(v2 + 28);
  LODWORD(v3) = v3 | 1;
  *(_QWORD *)(v2 + 28) = v3;
  *(_BYTE *)(this + 806) = 60;
  return this;
}


// ============================================================

// Address: 0x415030
// Original: _ZN5CRope12PickUpObjectEP7CEntity
// Demangled: CRope::PickUpObject(CEntity *)
CEntity *__fastcall CRope::PickUpObject(CEntity *this, CEntity *a2)
{
  CEntity *v3; // r1
  CEntity **v4; // r4
  int v5; // r1
  __int64 v6; // r2
  char *v7; // r8
  _DWORD *v8; // r6
  int v9; // r3
  _DWORD *v10; // r1
  _DWORD *v11; // r0
  int v12; // r2
  char v13; // r1
  int v14; // [sp+Ch] [bp-1Ch]
  int v15; // [sp+10h] [bp-18h]
  int v16; // [sp+14h] [bp-14h]

  v3 = (CEntity *)*((_DWORD *)this + 198);
  if ( v3 != a2 )
  {
    v4 = (CEntity **)((char *)this + 792);
    if ( v3 )
    {
      *((_DWORD *)v3 + 17) &= ~0x2000000u;
      *(_DWORD *)(*((_DWORD *)this + 198) + 68) &= ~0x80000000;
      v5 = *((_DWORD *)this + 197);
      *((_DWORD *)this + 198) = 0;
      v6 = *(_QWORD *)(v5 + 28);
      LODWORD(v6) = v6 | 1;
      *(_QWORD *)(v5 + 28) = v6;
      *((_BYTE *)this + 806) = 60;
    }
    v7 = (char *)this + 788;
    *v4 = a2;
    CEntity::RegisterReference(a2, v4);
    v8 = *(_DWORD **)v7;
    operator*();
    v9 = v8[5];
    if ( v9 )
    {
      *(_DWORD *)(v9 + 48) = v14;
      *(_DWORD *)(v8[5] + 52) = v15;
      v10 = (_DWORD *)(v8[5] + 56);
    }
    else
    {
      v8[1] = v14;
      v8[2] = v15;
      v10 = v8 + 3;
    }
    *v10 = v16;
    v11 = *(_DWORD **)v7;
    v12 = *(_DWORD *)(*(_DWORD *)v7 + 32);
    v11[7] = *(_DWORD *)(*(_DWORD *)v7 + 28) & 0xFFFFFFFE;
    v11[8] = v12;
    *((_DWORD *)*v4 + 17) |= 0x2000000u;
    v13 = *((_BYTE *)a2 + 58);
    this = (CEntity *)(v13 & 7);
    if ( this == (CEntity *)byte_4 )
    {
      this = *v4;
      if ( (*((_DWORD *)*v4 + 7) & 0x40004) != 0 )
      {
        (*(void (__fastcall **)(CEntity *, _DWORD))(*(_DWORD *)this + 20))(this, 0);
        CPhysical::AddToMovingList(*v4);
        this = *v4;
        *((_BYTE *)*v4 + 188) = 0;
      }
    }
    else if ( this == (CEntity *)((char *)&stderr + 2) && (v13 & 0xF8) == 0x10 )
    {
      this = (CEntity *)(&off_18 + 2);
      *((_BYTE *)a2 + 58) = 26;
    }
  }
  return this;
}


// ============================================================
