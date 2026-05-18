
// Address: 0x18f5fc
// Original: j__ZN10CEscalator10AddThisOneERK7CVectorS2_S2_S2_bP7CEntity
// Demangled: CEscalator::AddThisOne(CVector const&,CVector const&,CVector const&,CVector const&,bool,CEntity *)
// attributes: thunk
int __fastcall CEscalator::AddThisOne(
        CEscalator *this,
        const CVector *a2,
        const CVector *a3,
        const CVector *a4,
        const CVector *a5,
        bool a6,
        CEntity *a7)
{
  return _ZN10CEscalator10AddThisOneERK7CVectorS2_S2_S2_bP7CEntity(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19c410
// Original: j__ZN10CEscalator6UpdateEv
// Demangled: CEscalator::Update(void)
// attributes: thunk
int __fastcall CEscalator::Update(CEscalator *this)
{
  return _ZN10CEscalator6UpdateEv(this);
}


// ============================================================

// Address: 0x5a6e74
// Original: _ZN10CEscalator9SwitchOffEv
// Demangled: CEscalator::SwitchOff(void)
int __fastcall CEscalator::SwitchOff(CEscalator *this)
{
  int result; // r0
  CEntity *v3; // r1
  int v4; // r2
  int v5; // r3
  char *v6; // r5
  int v7; // r6
  CWorld *v8; // r0
  int v9; // r0

  result = *((unsigned __int8 *)this + 121);
  if ( result )
  {
    v3 = (CEntity *)*((_DWORD *)this + 31);
    v4 = *((_DWORD *)this + 32);
    v5 = *((_DWORD *)this + 33);
    if ( (int)v3 + v4 + v5 >= 1 )
    {
      v6 = (char *)this + 168;
      v7 = 0;
      do
      {
        v8 = *(CWorld **)&v6[4 * v7];
        if ( v8 )
        {
          CWorld::Remove(v8, v3);
          deletingEscalator = 1;
          v9 = *(_DWORD *)&v6[4 * v7];
          if ( v9 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
          deletingEscalator = 0;
          *(_DWORD *)&v6[4 * v7] = 0;
          v3 = (CEntity *)*((_DWORD *)this + 31);
          v4 = *((_DWORD *)this + 32);
          v5 = *((_DWORD *)this + 33);
        }
        ++v7;
      }
      while ( v7 < (int)v3 + v4 + v5 );
    }
    result = 0;
    *((_BYTE *)this + 121) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5a7020
// Original: _ZN10CEscalator6UpdateEv
// Demangled: CEscalator::Update(void)
void *__fastcall CEscalator::Update(CEscalator *this)
{
  unsigned __int64 v1; // d19
  __int64 *v3; // r2
  float32x2_t v4; // d16
  unsigned __int64 v5; // d1
  int v6; // r0
  int v7; // r6
  int8x16_t v8; // q8
  unsigned int v9; // r2
  int64x2_t v10; // q10
  int *v11; // r1
  int v12; // t1
  int32x4_t v13; // q8
  unsigned __int32 v14; // r3
  unsigned __int8 *v15; // r1
  int v16; // r2
  unsigned int v17; // t1
  __int64 v18; // r0
  int v19; // r6
  int v20; // r2
  char *v21; // r10
  int v22; // r6
  CObject *v23; // r0
  __int64 v24; // kr08_8
  int v25; // r5
  int v26; // r5
  CObject *v27; // r0
  char *v28; // r6
  int v29; // r0
  int v30; // r1
  __int64 v31; // kr18_8
  int v32; // r0
  int v33; // r12
  CEntity *v34; // r1
  void *result; // r0
  float v36; // s0
  float v37; // s2
  float v38; // s2
  float v39; // s0
  int v40; // r6
  char *v41; // r10
  int i; // r5
  float v43; // s0
  float v44; // s4
  float v45; // s30
  float v46; // s17
  float v47; // s26
  float v48; // s28
  float v49; // s24
  float v50; // s22
  float v51; // s19
  float v52; // s21
  float v53; // s23
  float v54; // s25
  float v55; // s0
  float *v56; // r0
  int v57; // r2
  int v58; // r5
  int v59; // r11
  int j; // r10
  float v61; // s0
  float v62; // s4
  float v63; // s28
  float v64; // s30
  float v65; // s24
  float v66; // s26
  float v67; // s22
  float v68; // s20
  char *v69; // r5
  CEntity **v70; // r5
  int v71; // t1
  float v72; // s17
  float v73; // s19
  float v74; // s21
  float v75; // s23
  float v76; // s0
  float *v77; // r0
  CEntity *v78; // r1
  int v79; // r11
  int k; // r10
  float v81; // s0
  int v82; // r6
  float v83; // s4
  float v84; // s28
  float v85; // s30
  float v86; // s24
  float v87; // s26
  float v88; // s22
  float v89; // s20
  char *v90; // r5
  CEntity **v91; // r5
  int v92; // t1
  float v93; // s17
  float v94; // s19
  float v95; // s21
  float v96; // s23
  float v97; // s0
  float *v98; // r0
  __int64 *v99; // r3
  float32x2_t v100; // d16
  unsigned __int64 v101; // d1
  __int64 v102; // r2
  char *v103; // r5
  int v104; // r6
  CWorld *v105; // r0
  int v106; // r0
  float v107; // [sp+4h] [bp-6Ch] BYREF
  float v108; // [sp+8h] [bp-68h]
  float v109; // [sp+Ch] [bp-64h]

  if ( !*((_BYTE *)this + 121) )
  {
    v3 = (__int64 *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v3 = &qword_951FAC;
    v4.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)v3 + 4), *(float32x2_t *)((char *)this + 148)).n64_u64[0];
    v5 = vmul_f32(v4, v4).n64_u64[0];
    if ( sqrtf(
           (float)((float)((float)(*(float *)v3 - *((float *)this + 36)) * (float)(*(float *)v3 - *((float *)this + 36)))
                 + *(float *)&v5)
         + *((float *)&v5 + 1)) >= (float)(*((float *)this + 39) + 20.0) )
    {
LABEL_35:
      result = (void *)*((unsigned __int8 *)this + 121);
      if ( !*((_BYTE *)this + 121) )
        return result;
      goto LABEL_36;
    }
    v6 = *(_DWORD *)(CPools::ms_pObjectPool + 8);
    if ( v6 < 1 )
    {
      v14 = 0;
      goto LABEL_17;
    }
    if ( (unsigned int)v6 >= 4 && (v7 = v6 & 0x7FFFFFFC, (v6 & 0xFFFFFFFC) != 0) )
    {
      v8 = 0uLL;
      v9 = v6 & 0xFFFFFFFC;
      v10.n128_u64[0] = 0xFF000000FFLL;
      v10.n128_u64[1] = 0xFF000000FFLL;
      v11 = *(int **)(CPools::ms_pObjectPool + 4);
      do
      {
        v12 = *v11++;
        v9 -= 4;
        LODWORD(v1) = v12;
        v1 = vshr_n_u16((uint16x4_t)vmovl_u8((uint8x8_t)v1).n128_u64[0], 7u).n64_u64[0] ^ 0x1000100010001LL;
        v8 = vaddq_s32(v8, vandq_s64(vmovl_u16((uint16x4_t)v1), v10));
      }
      while ( v9 );
      v13 = vaddq_s32(v8, vextq_s8(v8, v8, 8u));
      v14 = vaddq_s32(v13, vdupq_lane_s32((int32x2_t)v13.n128_u64[0], 1)).n128_u32[0];
      if ( v6 == v7 )
      {
LABEL_17:
        HIDWORD(v18) = *((_DWORD *)this + 32);
        v19 = *((_DWORD *)this + 31);
        v20 = *((_DWORD *)this + 33);
        if ( (int)(v6 - v14) > v19 + HIDWORD(v18) + v20 + 10 )
        {
          *((_DWORD *)this + 40) = 0;
          *((_BYTE *)this + 121) = 1;
          if ( v19 >= 1 )
          {
            v21 = (char *)this + 168;
            v22 = 0;
            do
            {
              v23 = (CObject *)CObject::operator new((CObject *)&elf_hash_bucket[34], HIDWORD(v18));
              CObject::CObject(v23, (unsigned __int16)MI_ESCALATORSTEP, 1);
              *(_DWORD *)&v21[4 * v22] = v18;
              if ( (_DWORD)v18 )
              {
                v24 = *(_QWORD *)((char *)this + 12);
                v25 = *(_DWORD *)(v18 + 20);
                HIDWORD(v18) = *((_DWORD *)this + 5);
                if ( v25 )
                {
                  *(_DWORD *)(v25 + 48) = v24;
                  *(_DWORD *)(*(_DWORD *)(v18 + 20) + 52) = HIDWORD(v24);
                  LODWORD(v18) = *(_DWORD *)(v18 + 20) + 56;
                }
                else
                {
                  *(_QWORD *)(v18 + 4) = v24;
                  LODWORD(v18) = v18 + 12;
                }
                *(_DWORD *)v18 = HIDWORD(v18);
                CWorld::Add(*(CWorld **)&v21[4 * v22], (CEntity *)HIDWORD(v18));
                *(_BYTE *)(*(_DWORD *)&v21[4 * v22] + 320) = 5;
              }
              ++v22;
            }
            while ( v22 < *((_DWORD *)this + 31) );
            v20 = *((_DWORD *)this + 33);
            HIDWORD(v18) = *((_DWORD *)this + 32);
          }
          if ( v20 + HIDWORD(v18) >= 1 )
          {
            v26 = 0;
            do
            {
              v27 = (CObject *)CObject::operator new((CObject *)&elf_hash_bucket[34], HIDWORD(v18));
              CObject::CObject(v27, (unsigned __int16)MI_ESCALATORSTEP8, 1);
              v28 = (char *)this + 168;
              *((_DWORD *)this + *((_DWORD *)this + 31) + v26 + 42) = v29;
              v30 = *((_DWORD *)this + *((_DWORD *)this + 31) + v26 + 42);
              if ( v30 )
              {
                v31 = *(_QWORD *)((char *)this + 12);
                v32 = *(_DWORD *)(v30 + 20);
                v33 = *((_DWORD *)this + 5);
                if ( v32 )
                {
                  *(_DWORD *)(v32 + 48) = v31;
                  *(_DWORD *)(*(_DWORD *)(v30 + 20) + 52) = HIDWORD(v31);
                  v34 = (CEntity *)(*(_DWORD *)(v30 + 20) + 56);
                }
                else
                {
                  *(_QWORD *)(v30 + 4) = v31;
                  v34 = (CEntity *)(v30 + 12);
                }
                *(_DWORD *)v34 = v33;
                CWorld::Add(*(CWorld **)&v28[4 * *((_DWORD *)this + 31) + 4 * v26], v34);
                *(_BYTE *)(*(_DWORD *)&v28[4 * *((_DWORD *)this + 31) + 4 * v26] + 320) = 5;
              }
              v18 = *((_QWORD *)this + 16);
              ++v26;
            }
            while ( v26 < (int)v18 + HIDWORD(v18) );
          }
        }
        goto LABEL_35;
      }
    }
    else
    {
      v7 = 0;
      v14 = 0;
    }
    v15 = (unsigned __int8 *)(*(_DWORD *)(CPools::ms_pObjectPool + 4) + v7);
    v16 = v6 - v7;
    do
    {
      v17 = *v15++;
      --v16;
      v14 += (v17 >> 7) ^ 1;
    }
    while ( v16 );
    goto LABEL_17;
  }
LABEL_36:
  v36 = *(float *)&CTimer::ms_fTimeStep * 0.04;
  v37 = *((float *)this + 40);
  if ( *((_BYTE *)this + 122) )
  {
    v38 = v37 - v36;
    *((float *)this + 40) = v38;
    v39 = v38 + 1.0;
  }
  else
  {
    v39 = v36 + v37;
  }
  v40 = *((_DWORD *)this + 31);
  *((float *)this + 40) = v39 - (float)(int)v39;
  if ( v40 >= 1 )
  {
    v41 = (char *)this + 168;
    for ( i = 0; i < v40; ++i )
    {
      v43 = *((float *)this + 6) - *((float *)this + 3);
      v44 = *((float *)this + 8) - *((float *)this + 5);
      v108 = *((float *)this + 7) - *((float *)this + 4);
      v107 = v43;
      v109 = v44;
      CVector::Normalise((CVector *)&v107);
      v45 = v107;
      v46 = v108;
      v47 = v107 * 0.016;
      v48 = v109;
      v49 = v108 * 0.016;
      v50 = v109 * 0.016;
      if ( *((_BYTE *)this + 122) )
      {
        v50 = -v50;
        v49 = -v49;
        v47 = -v47;
      }
      if ( *(_DWORD *)&v41[4 * i] )
      {
        v51 = *((float *)this + 6);
        v52 = *((float *)this + 7);
        v53 = *((float *)this + 8);
        v54 = *((float *)this + 40);
        CMatrix::operator=();
        v55 = (float)((float)((float)i - v54) + 1.0) * 0.4;
        *(float *)(*(_DWORD *)(*(_DWORD *)&v41[4 * i] + 20) + 48) = v51 - (float)(v45 * v55);
        *(float *)(*(_DWORD *)(*(_DWORD *)&v41[4 * i] + 20) + 52) = v52 - (float)(v46 * v55);
        *(float *)(*(_DWORD *)(*(_DWORD *)&v41[4 * i] + 20) + 56) = v53 - (float)(v48 * v55);
        v56 = *(float **)&v41[4 * i];
        v56[18] = v47;
        v56[19] = v49;
        v56[20] = v50;
        v57 = *(_DWORD *)&v41[4 * i];
        if ( *(_DWORD *)(v57 + 24) )
        {
          if ( *(_DWORD *)(v57 + 20) )
            CMatrix::UpdateRwMatrix();
          else
            CSimpleTransform::UpdateRwMatrix();
        }
        CEntity::UpdateRwFrame(*(CEntity **)&v41[4 * i]);
        CPhysical::RemoveAndAdd(*(CPhysical **)&v41[4 * i]);
      }
      v40 = *((_DWORD *)this + 31);
    }
  }
  v58 = *((_DWORD *)this + 32);
  if ( v58 >= 1 )
  {
    v59 = 1;
    for ( j = 4; ; j += 8 )
    {
      v61 = *((float *)this + 3) - *(float *)this;
      v62 = *((float *)this + 5) - *((float *)this + 2);
      v108 = *((float *)this + 4) - *((float *)this + 1);
      v107 = v61;
      v109 = v62;
      CVector::Normalise((CVector *)&v107);
      v63 = v107;
      v64 = v108;
      v65 = v107 * 0.016;
      v66 = v109;
      v67 = v108 * 0.016;
      v68 = v109 * 0.016;
      v69 = (char *)this + 4 * v40 + 4 * v59 - 4;
      if ( *((_BYTE *)this + 122) )
      {
        v68 = -v68;
        v67 = -v67;
        v65 = -v65;
      }
      v71 = *((_DWORD *)v69 + 42);
      v70 = (CEntity **)(v69 + 168);
      if ( v71 )
      {
        v72 = *(float *)this;
        v73 = *((float *)this + 1);
        v74 = *((float *)this + 2);
        v75 = *((float *)this + 40);
        CMatrix::operator=();
        v76 = (float)((float)j * 0.4) + (float)(v75 * 0.4);
        *(float *)(*((_DWORD *)*v70 + 5) + 48) = (float)(v63 * v76) + v72;
        *(float *)(*((_DWORD *)*v70 + 5) + 52) = (float)(v64 * v76) + v73;
        *(float *)(*((_DWORD *)*v70 + 5) + 56) = (float)(v76 * v66) + v74;
        v77 = (float *)*v70;
        v77[18] = v65;
        v77[19] = v67;
        v77[20] = v68;
        if ( *((_DWORD *)*v70 + 6) )
        {
          if ( *((_DWORD *)*v70 + 5) )
            CMatrix::UpdateRwMatrix();
          else
            CSimpleTransform::UpdateRwMatrix();
        }
        CEntity::UpdateRwFrame(*v70);
        CPhysical::RemoveAndAdd(*v70);
      }
      v58 = *((_DWORD *)this + 32);
      if ( v59 >= v58 )
        break;
      v40 = *((_DWORD *)this + 31);
      ++v59;
    }
  }
  v78 = (CEntity *)*((_DWORD *)this + 33);
  if ( (int)v78 >= 1 )
  {
    v79 = 1;
    for ( k = 4; ; k += 8 )
    {
      v81 = *((float *)this + 9) - *((float *)this + 6);
      v82 = *((_DWORD *)this + 31);
      v83 = *((float *)this + 11) - *((float *)this + 8);
      v108 = *((float *)this + 10) - *((float *)this + 7);
      v107 = v81;
      v109 = v83;
      CVector::Normalise((CVector *)&v107);
      v84 = v107;
      v85 = v108;
      v86 = v107 * 0.016;
      v87 = v109;
      v88 = v108 * 0.016;
      v89 = v109 * 0.016;
      v90 = (char *)this + 4 * v58 + 4 * v82 + 4 * v79 - 4;
      if ( *((_BYTE *)this + 122) )
      {
        v89 = -v89;
        v88 = -v88;
        v86 = -v86;
      }
      v92 = *((_DWORD *)v90 + 42);
      v91 = (CEntity **)(v90 + 168);
      if ( v92 )
      {
        v93 = *((float *)this + 6);
        v94 = *((float *)this + 7);
        v95 = *((float *)this + 8);
        v96 = *((float *)this + 40);
        CMatrix::operator=();
        v97 = (float)((float)k * 0.4) + (float)(v96 * 0.4);
        *(float *)(*((_DWORD *)*v91 + 5) + 48) = (float)(v84 * v97) + v93;
        *(float *)(*((_DWORD *)*v91 + 5) + 52) = (float)(v85 * v97) + v94;
        *(float *)(*((_DWORD *)*v91 + 5) + 56) = (float)(v97 * v87) + v95;
        v98 = (float *)*v91;
        v98[18] = v86;
        v98[19] = v88;
        v98[20] = v89;
        if ( *((_DWORD *)*v91 + 6) )
        {
          if ( *((_DWORD *)*v91 + 5) )
            CMatrix::UpdateRwMatrix();
          else
            CSimpleTransform::UpdateRwMatrix();
        }
        CEntity::UpdateRwFrame(*v91);
        CPhysical::RemoveAndAdd(*v91);
      }
      v78 = (CEntity *)*((_DWORD *)this + 33);
      if ( v79 >= (int)v78 )
        break;
      v58 = *((_DWORD *)this + 32);
      ++v79;
    }
  }
  result = &TheCamera;
  v99 = (__int64 *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v99 = &qword_951FAC;
  v100.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)v99 + 4), *(float32x2_t *)((char *)this + 148)).n64_u64[0];
  v101 = vmul_f32(v100, v100).n64_u64[0];
  if ( sqrtf(
         (float)((float)((float)(*(float *)v99 - *((float *)this + 36)) * (float)(*(float *)v99 - *((float *)this + 36)))
               + *(float *)&v101)
       + *((float *)&v101 + 1)) > (float)(*((float *)this + 39) + 23.0) )
  {
    result = (void *)*((unsigned __int8 *)this + 121);
    if ( *((_BYTE *)this + 121) )
    {
      v102 = *(_QWORD *)((char *)this + 124);
      if ( (int)((int)v78 + v102 + HIDWORD(v102)) >= 1 )
      {
        v103 = (char *)this + 168;
        v104 = 0;
        do
        {
          v105 = *(CWorld **)&v103[4 * v104];
          if ( v105 )
          {
            CWorld::Remove(v105, v78);
            deletingEscalator = 1;
            v106 = *(_DWORD *)&v103[4 * v104];
            if ( v106 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v106 + 4))(v106);
            deletingEscalator = 0;
            *(_DWORD *)&v103[4 * v104] = 0;
            v102 = *(_QWORD *)((char *)this + 124);
            v78 = (CEntity *)*((_DWORD *)this + 33);
          }
          ++v104;
        }
        while ( v104 < (int)((int)v78 + HIDWORD(v102) + v102) );
      }
      result = 0;
      *((_BYTE *)this + 121) = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5a7784
// Original: _ZN10CEscalator10AddThisOneERK7CVectorS2_S2_S2_bP7CEntity
// Demangled: CEscalator::AddThisOne(CVector const&,CVector const&,CVector const&,CVector const&,bool,CEntity *)
int __fastcall CEscalator::AddThisOne(
        CEscalator *this,
        const CVector *a2,
        const CVector *a3,
        const CVector *a4,
        const CVector *a5,
        bool a6,
        CEntity *a7)
{
  __int64 v8; // d16
  __int64 v9; // d16
  __int64 v10; // d16
  __int64 v11; // d16
  float v12; // s2
  float v13; // s0
  float v14; // s4
  float v15; // s6
  float v16; // s8
  float v17; // s2
  float v18; // s3
  float v19; // s1
  float v20; // s14
  float v21; // s5
  int v22; // r3
  float v23; // s2
  float v24; // s6
  float v25; // s0
  float v26; // s0
  float v27; // s2
  float v28; // s6
  float v29; // s4
  float v30; // s8
  float v31; // s10
  float v32; // r1
  float v33; // s6
  float v34; // r2
  float v35; // s8
  float v36; // s10
  float v38; // [sp+4h] [bp-14h] BYREF
  float v39; // [sp+8h] [bp-10h]
  int v40; // [sp+Ch] [bp-Ch]

  *((_BYTE *)this + 120) = 1;
  v8 = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *(_QWORD *)this = v8;
  v9 = *(_QWORD *)a3;
  *((_DWORD *)this + 5) = *((_DWORD *)a3 + 2);
  *(_QWORD *)((char *)this + 12) = v9;
  v10 = *(_QWORD *)a4;
  *((_DWORD *)this + 8) = *((_DWORD *)a4 + 2);
  *((_QWORD *)this + 3) = v10;
  v11 = *(_QWORD *)a5;
  *((_DWORD *)this + 11) = *((_DWORD *)a5 + 2);
  *(_QWORD *)((char *)this + 36) = v11;
  v12 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[(unsigned __int16)MI_ESCALATORSTEP]) + 44) + 20);
  v13 = *((float *)this + 2) - v12;
  *((float *)this + 2) = v13;
  v14 = *((float *)this + 5) - v12;
  *((float *)this + 5) = v14;
  v15 = *((float *)this + 8) - v12;
  *((float *)this + 8) = v15;
  v16 = *((float *)this + 10);
  v17 = *((float *)this + 11) - v12;
  *((float *)this + 11) = v17;
  v18 = *((float *)this + 7);
  v19 = *((float *)this + 4);
  v20 = *((float *)this + 3);
  v21 = *((float *)this + 6);
  v22 = (int)(float)(sqrtf(
                       (float)((float)((float)(v21 - *((float *)this + 9)) * (float)(v21 - *((float *)this + 9)))
                             + (float)((float)(v18 - v16) * (float)(v18 - v16)))
                     + (float)((float)(v15 - v17) * (float)(v15 - v17)))
                   / 3.2)
      + 1;
  *((_DWORD *)this + 32) = (int)(float)(sqrtf(
                                          (float)((float)((float)(*(float *)this - v20) * (float)(*(float *)this - v20))
                                                + (float)((float)(*((float *)this + 1) - v19)
                                                        * (float)(*((float *)this + 1) - v19)))
                                        + (float)((float)(v13 - v14) * (float)(v13 - v14)))
                                      / 3.2)
                         + 1;
  *((_DWORD *)this + 33) = v22;
  *((_DWORD *)this + 31) = (int)(float)((float)(sqrtf(
                                                  (float)((float)((float)(v20 - v21) * (float)(v20 - v21))
                                                        + (float)((float)(v19 - v18) * (float)(v19 - v18)))
                                                + (float)((float)(v14 - v15) * (float)(v14 - v15)))
                                              / 0.4)
                                      + 1.0);
  v23 = *((float *)a3 + 1);
  v24 = *((float *)a2 + 1);
  v25 = *(float *)a2 - *(float *)a3;
  v40 = 0;
  v39 = v24 - v23;
  v38 = v25;
  CVector::Normalise((CVector *)&v38);
  v26 = *(float *)this;
  v27 = *((float *)this + 1);
  v28 = *(float *)this + *((float *)this + 9);
  v29 = *((float *)this + 2);
  v30 = v27 + *((float *)this + 10);
  v31 = *((float *)this + 11);
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 1065353216;
  v32 = v38;
  *((float *)this + 16) = v38;
  v33 = v28 * 0.5;
  v34 = v39;
  v35 = v30 * 0.5;
  *((float *)this + 17) = v39;
  *((_DWORD *)this + 18) = 0;
  *((float *)this + 12) = v34;
  *((_DWORD *)this + 13) = LODWORD(v32) ^ 0x80000000;
  v36 = (float)(v29 + v31) * 0.5;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 122) = a6;
  *((float *)this + 36) = v33;
  *((float *)this + 37) = v35;
  *((float *)this + 38) = v36;
  *((_DWORD *)this + 41) = a7;
  *((float *)this + 39) = sqrtf(
                            (float)((float)((float)(v26 - v33) * (float)(v26 - v33))
                                  + (float)((float)(v27 - v35) * (float)(v27 - v35)))
                          + (float)((float)(v29 - v36) * (float)(v29 - v36)));
  return CEntity::RegisterReference(a7, (CEntity **)this + 41);
}


// ============================================================
