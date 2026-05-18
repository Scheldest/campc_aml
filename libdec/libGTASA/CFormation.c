
// Address: 0x18bc70
// Original: j__ZN10CFormation23ReturnDestinationForPedEP4CPedR7CVector
// Demangled: CFormation::ReturnDestinationForPed(CPed *,CVector &)
// attributes: thunk
int __fastcall CFormation::ReturnDestinationForPed(CFormation *this, CPed *a2, CVector *a3)
{
  return _ZN10CFormation23ReturnDestinationForPedEP4CPedR7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x18cc08
// Original: j__ZN10CFormation15FindCoverPointsE7CVectorf
// Demangled: CFormation::FindCoverPoints(CVector,float)
// attributes: thunk
int CFormation::FindCoverPoints()
{
  return _ZN10CFormation15FindCoverPointsE7CVectorf();
}


// ============================================================

// Address: 0x18f420
// Original: j__ZN10CFormation36GenerateGatherDestinations_AroundCarEP8CPedListP8CVehicle
// Demangled: CFormation::GenerateGatherDestinations_AroundCar(CPedList *,CVehicle *)
// attributes: thunk
int __fastcall CFormation::GenerateGatherDestinations_AroundCar(CFormation *this, CPedList *a2, CVehicle *a3)
{
  return _ZN10CFormation36GenerateGatherDestinations_AroundCarEP8CPedListP8CVehicle(this, a2, a3);
}


// ============================================================

// Address: 0x19137c
// Original: j__ZN10CFormation24FindCoverPointsBehindBoxEP10CPointList7CVectorP7CMatrixPKS2_S6_S6_f
// Demangled: CFormation::FindCoverPointsBehindBox(CPointList *,CVector,CMatrix *,CVector const*,CVector const*,CVector const*,float)
// attributes: thunk
int CFormation::FindCoverPointsBehindBox()
{
  return _ZN10CFormation24FindCoverPointsBehindBoxEP10CPointList7CVectorP7CMatrixPKS2_S6_S6_f();
}


// ============================================================

// Address: 0x191f54
// Original: j__ZN10CFormation22DistributeDestinationsEP8CPedList
// Demangled: CFormation::DistributeDestinations(CPedList *)
// attributes: thunk
int __fastcall CFormation::DistributeDestinations(CFormation *this, CPedList *a2)
{
  return _ZN10CFormation22DistributeDestinationsEP8CPedList(this, a2);
}


// ============================================================

// Address: 0x194a98
// Original: j__ZN10CFormation34DistributeDestinations_CoverPointsEP8CPedList7CVector
// Demangled: CFormation::DistributeDestinations_CoverPoints(CPedList *,CVector)
// attributes: thunk
int CFormation::DistributeDestinations_CoverPoints()
{
  return _ZN10CFormation34DistributeDestinations_CoverPointsEP8CPedList7CVector();
}


// ============================================================

// Address: 0x197e28
// Original: j__ZN10CFormation26GenerateGatherDestinationsEP8CPedListP4CPed
// Demangled: CFormation::GenerateGatherDestinations(CPedList *,CPed *)
// attributes: thunk
int __fastcall CFormation::GenerateGatherDestinations(CFormation *this, CPedList *a2, CPed *a3)
{
  return _ZN10CFormation26GenerateGatherDestinationsEP8CPedListP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x19c6fc
// Original: j__ZN10CFormation35DistributeDestinations_PedsToAttackEP8CPedList
// Demangled: CFormation::DistributeDestinations_PedsToAttack(CPedList *)
// attributes: thunk
int __fastcall CFormation::DistributeDestinations_PedsToAttack(CFormation *this, CPedList *a2)
{
  return _ZN10CFormation35DistributeDestinations_PedsToAttackEP8CPedList(this, a2);
}


// ============================================================

// Address: 0x19fa2c
// Original: j__ZN10CFormation21ReturnTargetPedForPedEP4CPedPS1_
// Demangled: CFormation::ReturnTargetPedForPed(CPed *,CPed **)
// attributes: thunk
int __fastcall CFormation::ReturnTargetPedForPed(CFormation *this, CPed *a2, CPed **a3)
{
  return _ZN10CFormation21ReturnTargetPedForPedEP4CPedPS1_(this, a2, a3);
}


// ============================================================

// Address: 0x548774
// Original: _ZN10CFormation26GenerateGatherDestinationsEP8CPedListP4CPed
// Demangled: CFormation::GenerateGatherDestinations(CPedList *,CPed *)
int __fastcall CFormation::GenerateGatherDestinations(CFormation *this, CPedList *a2, CPed *a3)
{
  int result; // r0
  float v5; // s16
  float v6; // s18
  int v7; // r11
  int v8; // r4
  float v9; // s0
  int v10; // r1
  float *v11; // r8
  float v12; // r5
  float v13; // r0
  float v14; // s4
  float v15; // s0
  float v16; // s6
  float v17; // s8
  float *v18; // r0

  dword_9FFA48 = 0;
  unk_9FFA4C = 0;
  CFormation::m_Destinations[0] = 0;
  unk_9FFA38 = 0LL;
  unk_9FFA40 = 0LL;
  result = *(_DWORD *)this;
  v5 = *((float *)a2 + 343);
  if ( (unsigned int)(result - 1) >= 4 )
  {
    if ( result <= 0 )
      return result;
    v6 = 2.5;
  }
  else
  {
    v6 = *(float *)&dword_5488A0[result - 1];
  }
  v7 = 0;
  v8 = 0;
  do
  {
    v9 = v5 + 1.5708;
    if ( result >= 2 )
      v9 = (float)(3.1416 / (float)result) + (float)((float)((float)((float)v8 / (float)result) * 6.2832) - v5);
    v10 = *((_DWORD *)a2 + 5);
    v11 = (float *)(v10 + 48);
    if ( !v10 )
      v11 = (float *)((char *)a2 + 4);
    if ( v7 <= 23 )
    {
      v12 = sinf(v9);
      v13 = cosf(v9);
      v14 = *v11;
      v15 = v6 * v13;
      v16 = v11[1];
      v17 = v11[2] + 0.0;
      v18 = (float *)&CFormation::m_Destinations[3 * v7];
      CFormation::m_Destinations[0] = ++v7;
      v18[1] = v14 + (float)(v6 * v12);
      v18[2] = v16 + v15;
      v18[3] = v17;
      result = *(_DWORD *)this;
    }
    ++v8;
  }
  while ( v8 < result );
  return result;
}


// ============================================================

// Address: 0x5488c4
// Original: _ZN10CFormation36GenerateGatherDestinations_AroundCarEP8CPedListP8CVehicle
// Demangled: CFormation::GenerateGatherDestinations_AroundCar(CPedList *,CVehicle *)
int __fastcall CFormation::GenerateGatherDestinations_AroundCar(CFormation *this, CPedList *a2, CVehicle *a3)
{
  float *v5; // r0
  float v6; // s16
  float v7; // s18
  float v8; // s20
  int v9; // r0
  double v10; // d16
  int v11; // r0
  double v12; // d16
  float v13; // s2
  int v14; // r1
  float v15; // s0
  int result; // r0
  int v17; // r12
  int v18; // lr
  unsigned int v19; // r3
  float v20; // s12
  float v21; // s6
  float v22; // s8
  float v23; // s10
  float v24; // s14
  int v25; // r2
  float *v26; // r6
  float v27; // s7
  float v28; // s5
  float v29; // s3
  float v30; // s9
  int v31; // r2
  float *v32; // r1
  float v33; // s12
  float v34; // s6
  float v35; // s8
  float v36; // s2
  float v37; // s10
  int v38; // r6
  float *v39; // r3
  float v40; // s1
  float v41; // s9
  float v42; // s5
  float v43; // s7
  int v44; // r3
  float v45; // s13
  float *v46; // r1
  float v47; // s11
  float v48; // s1
  double v49; // [sp+0h] [bp-48h] BYREF
  float v50; // [sp+8h] [bp-40h]
  double v51; // [sp+10h] [bp-38h] BYREF
  float v52; // [sp+18h] [bp-30h]

  v5 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)a2 + 19)]) + 44);
  v6 = v5[1];
  v7 = v5[3];
  v8 = v5[4];
  v9 = *((_DWORD *)a2 + 5);
  v10 = *(double *)v9;
  v52 = *(float *)(v9 + 8);
  v51 = v10;
  CVector::Normalise((CVector *)&v51);
  v11 = *((_DWORD *)a2 + 5);
  v12 = *(double *)(v11 + 16);
  v50 = *(float *)(v11 + 24);
  v49 = v12;
  CVector::Normalise((CVector *)&v49);
  v13 = v7 + 1.5;
  unk_9FFA38 = 0LL;
  unk_9FFA40 = 0LL;
  v14 = 0;
  v15 = v8 - v6;
  dword_9FFA48 = 0;
  unk_9FFA4C = 0;
  CFormation::m_Destinations[0] = 0;
  result = *(_DWORD *)this;
  v17 = *(_DWORD *)this - *(_DWORD *)this / 2;
  if ( *(int *)this >= 2 )
  {
    v18 = *(_DWORD *)this / 2;
    v19 = result + 1;
    v20 = v13 * *((float *)&v51 + 1);
    v21 = v13 * v52;
    v22 = v15 * *((float *)&v49 + 1);
    v14 = 0;
    v23 = v15 * *(float *)&v49;
    v24 = v13 * *(float *)&v51;
    result = 0;
    do
    {
      v25 = *((_DWORD *)a2 + 5);
      v26 = (float *)(v25 + 48);
      if ( !v25 )
        v26 = (float *)((char *)a2 + 4);
      v27 = *v26 - v24;
      v28 = v26[1] - v20;
      v29 = v26[2] - v21;
      if ( v19 >= 3 )
      {
        v30 = 0.5 - (float)((float)result / (float)v18);
        v29 = v29 + (float)(v30 * (float)(v15 * v50));
        v28 = v28 + (float)(v30 * v22);
        v27 = v27 + (float)(v30 * v23);
      }
      if ( v14 <= 23 )
      {
        v31 = v14 + 1;
        CFormation::m_Destinations[0] = v14 + 1;
        v32 = (float *)&CFormation::m_Destinations[3 * v14];
        v32[1] = v27;
        v32[2] = v28;
        v32[3] = v29;
        v14 = v31;
      }
      ++result;
    }
    while ( v18 != result );
  }
  if ( v17 >= 1 )
  {
    result = 0;
    v33 = v13 * *((float *)&v51 + 1);
    v34 = v13 * v52;
    v35 = v15 * *((float *)&v49 + 1);
    v36 = v13 * *(float *)&v51;
    v37 = v15 * *(float *)&v49;
    do
    {
      v38 = *((_DWORD *)a2 + 5);
      v39 = (float *)(v38 + 48);
      if ( !v38 )
        v39 = (float *)((char *)a2 + 4);
      if ( v14 <= 23 )
      {
        v40 = 0.5 - (float)((float)result / (float)v17);
        v41 = v39[2];
        v42 = *v39 + v36;
        v43 = v39[1] + v33;
        v44 = v14 + 1;
        CFormation::m_Destinations[0] = v14 + 1;
        v45 = v40 * v37;
        v46 = (float *)&CFormation::m_Destinations[3 * v14];
        v47 = v40 * v35;
        v48 = v40 * (float)(v15 * v50);
        v46[1] = v42 + v45;
        v46[2] = v43 + v47;
        v46[3] = (float)(v41 + v34) + v48;
        v14 = v44;
      }
      ++result;
    }
    while ( v17 != result );
  }
  return result;
}


// ============================================================

// Address: 0x548ae4
// Original: _ZN10CFormation31FindNearestAvailableDestinationE7CVectorRf
// Demangled: CFormation::FindNearestAvailableDestination(CVector,float &)
int __fastcall CFormation::FindNearestAvailableDestination(float a1, float a2, float a3, float *a4)
{
  float v6; // s0
  int result; // r0
  int v8; // r1
  int v9; // r4
  float v10; // s8

  if ( CFormation::m_Destinations[0] < 1 )
  {
    v6 = 10000000.0;
    result = -1;
  }
  else
  {
    v6 = 10000000.0;
    result = -1;
    v8 = 0;
    v9 = 0;
    do
    {
      if ( !*((_BYTE *)&CFormation::m_Destinations[73] + v9) )
      {
        v10 = sqrtf(
                (float)((float)((float)(*(float *)&CFormation::m_Destinations[v8 + 1] - a1)
                              * (float)(*(float *)&CFormation::m_Destinations[v8 + 1] - a1))
                      + (float)((float)(*(float *)&CFormation::m_Destinations[v8 + 2] - a2)
                              * (float)(*(float *)&CFormation::m_Destinations[v8 + 2] - a2)))
              + (float)((float)(*(float *)&CFormation::m_Destinations[v8 + 3] - a3)
                      * (float)(*(float *)&CFormation::m_Destinations[v8 + 3] - a3)));
        if ( v10 < v6 )
        {
          result = v9;
          v6 = v10;
        }
      }
      ++v9;
      v8 += 3;
    }
    while ( v9 < CFormation::m_Destinations[0] );
  }
  *a4 = v6 + *a4;
  return result;
}


// ============================================================

// Address: 0x548b9c
// Original: _ZN10CFormation22DistributeDestinationsEP8CPedList
// Demangled: CFormation::DistributeDestinations(CPedList *)
int __fastcall CFormation::DistributeDestinations(CFormation *this, CPedList *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d4
  int v5; // lr
  float32x2_t v6; // d16
  float v7; // s2
  float32x2_t v8; // d17
  float v9; // s4
  int v10; // r6
  int v11; // r1
  char *v12; // r0
  float v13; // s0
  float32x2_t v14; // d18
  float v15; // s10
  float v16; // s6
  int *v17; // r1
  int v18; // lr
  int v19; // r3
  int v20; // r2
  int v21; // r0
  int v22; // r5
  int v23; // r0
  __int64 v24; // kr00_8
  _DWORD *v25; // r0
  int v26; // r5
  float v27; // s12
  float32x2_t v28; // d18
  float v29; // s4
  float v30; // s12
  float32x2_t v31; // d3
  int v32; // r1
  char *v33; // r0
  float v34; // s14
  float32x2_t v35; // d17
  float32x2_t v36; // d17
  unsigned __int64 v37; // d8
  int *v38; // r0
  int v39; // r1
  float v40; // s10
  float32x2_t v41; // d7
  float v42; // s5
  float32x2_t v43; // d16
  float32x2_t v44; // d16
  unsigned __int64 v45; // d8
  float *v46; // r0
  int v47; // r1
  float v48; // s0
  float v49; // s8
  float v50; // s12
  float v51; // s0
  int v52; // r0
  float v53; // s24
  int v54; // r0
  float v55; // s4
  char *v56; // r2
  float32x2_t *v57; // r3
  int v58; // r1
  float v59; // s2
  float32x2_t v60; // d16
  int i; // r3
  float32x2_t v62; // d17
  unsigned __int64 v63; // d4
  float v64; // s6
  int v66; // [sp+Ch] [bp-19Ch]
  int v67; // [sp+18h] [bp-190h]
  int v68; // [sp+1Ch] [bp-18Ch]
  _DWORD v69[75]; // [sp+20h] [bp-188h] BYREF
  int v70; // [sp+24h] [bp-184h] BYREF
  _BYTE v71[292]; // [sp+28h] [bp-180h] BYREF
  __int64 v72; // [sp+14Ch] [bp-5Ch]
  int v73; // [sp+154h] [bp-54h]
  int v74; // [sp+158h] [bp-50h]
  int v75; // [sp+15Ch] [bp-4Ch]

  *(_QWORD *)&v71[284] = 0LL;
  v72 = 0LL;
  v73 = 0;
  v74 = 0;
  v69[0] = 0;
  memcpy_0(CFormation::m_Peds, this, 0x7Cu);
  v5 = CFormation::m_Peds[0];
  if ( CFormation::m_Peds[0] )
  {
    v6.n64_u64[0] = 0LL;
    v7 = 0.0;
    v8.n64_u64[0] = 0LL;
    v9 = 0.0;
    v10 = CFormation::m_Destinations[0];
    if ( CFormation::m_Destinations[0] >= 1 )
    {
      v8.n64_u64[0] = 0LL;
      v9 = 0.0;
      v11 = 0;
      v12 = (char *)&unk_9FF918;
      do
      {
        v13 = *(float *)v12;
        ++v11;
        v14.n64_u64[0] = *(unsigned __int64 *)(v12 + 4);
        v12 += 12;
        v9 = v9 + v13;
        v8.n64_u64[0] = vadd_f32(v8, v14).n64_u64[0];
      }
      while ( v11 < CFormation::m_Destinations[0] );
    }
    v2.n64_u32[0] = 1.0;
    v68 = CFormation::m_Peds[0];
    v15 = 0.0;
    v16 = 1.0 / (float)CFormation::m_Destinations[0];
    if ( CFormation::m_Peds[0] >= 1 )
    {
      v6.n64_u64[0] = 0LL;
      v17 = &v70;
      v15 = 0.0;
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = CFormation::m_Peds[v19 + 1];
        v21 = *(_DWORD *)(v20 + 20);
        v22 = v21 + 48;
        if ( !v21 )
          v22 = v20 + 4;
        if ( v18 <= 23 )
        {
          v23 = 3 * v18++;
          v24 = *(_QWORD *)v22;
          v25 = &v69[v23];
          v26 = *(_DWORD *)(v22 + 8);
          *(_QWORD *)(v25 + 1) = v24;
          v25[3] = v26;
        }
        v27 = *(float *)v17;
        ++v19;
        v28.n64_u64[0] = *(unsigned __int64 *)(v17 + 1);
        v17 += 3;
        v15 = v15 + v27;
        v6.n64_u64[0] = vadd_f32(v6, v28).n64_u64[0];
      }
      while ( v19 < v68 );
      v69[0] = v18;
      v5 = v68;
    }
    v29 = v9 * v16;
    v30 = (float)v5;
    v31.n64_u64[0] = vmul_n_f32(v8, v16).n64_u64[0];
    if ( v10 >= 1 )
    {
      v32 = 0;
      v7 = 0.0;
      v33 = (char *)&unk_9FF918;
      do
      {
        v34 = *(float *)v33;
        ++v32;
        v35.n64_u64[0] = *(unsigned __int64 *)(v33 + 4);
        v33 += 12;
        v36.n64_u64[0] = vsub_f32(v35, v31).n64_u64[0];
        v37 = vmul_f32(v36, v36).n64_u64[0];
        v7 = v7
           + sqrtf((float)((float)((float)(v34 - v29) * (float)(v34 - v29)) + *(float *)&v37) + *((float *)&v37 + 1));
      }
      while ( v32 < v10 );
    }
    if ( v5 >= 1 )
    {
      v38 = &v70;
      v39 = 0;
      v3.n64_f32[0] = v7 / (float)v10;
      v40 = v15 * (float)(1.0 / v30);
      v4.n64_u32[0] = 0;
      v41.n64_u64[0] = vmul_n_f32(v6, 1.0 / v30).n64_u64[0];
      do
      {
        v42 = *(float *)v38;
        ++v39;
        v43.n64_u64[0] = *(unsigned __int64 *)(v38 + 1);
        v38 += 3;
        v44.n64_u64[0] = vsub_f32(v43, v41).n64_u64[0];
        v45 = vmul_f32(v44, v44).n64_u64[0];
        v4.n64_f32[0] = v4.n64_f32[0]
                      + sqrtf(
                          (float)((float)((float)(v42 - v40) * (float)(v42 - v40)) + *(float *)&v45)
                        + *((float *)&v45 + 1));
      }
      while ( v39 < v5 );
      v4.n64_f32[0] = v4.n64_f32[0] / v30;
      v46 = (float *)v71;
      v47 = 0;
      v48 = vmax_f32(v3, v2).n64_f32[0] / vmax_f32(v4, v2).n64_f32[0];
      do
      {
        ++v47;
        v49 = v31.n64_f32[0] + (float)(v48 * (float)(*v46 - v41.n64_f32[0]));
        v50 = v31.n64_f32[1] + (float)(v48 * (float)(v46[1] - v41.n64_f32[1]));
        *(v46 - 1) = v29 + (float)(v48 * (float)(*(v46 - 1) - v40));
        *v46 = v49;
        v46[1] = v50;
        v46 += 3;
      }
      while ( v47 < v5 );
      v66 = 4 * v5;
      v51 = 1000000.0;
      v52 = 0;
      do
      {
        v67 = v52;
        v53 = 0.0;
        CFormation::m_aPedLinkToDestinations[0] = -1;
        CFormation::m_aPedLinkToDestinations[1] = -1;
        CFormation::m_aPedLinkToDestinations[2] = -1;
        CFormation::m_aPedLinkToDestinations[3] = -1;
        CFormation::m_aPedLinkToDestinations[4] = -1;
        CFormation::m_aPedLinkToDestinations[5] = -1;
        CFormation::m_aPedLinkToDestinations[6] = -1;
        dword_9FFA48 = 0;
        unk_9FFA4C = 0;
        unk_9FFA38 = 0LL;
        unk_9FFA40 = 0LL;
        v54 = 0;
        do
        {
          if ( v10 < 1 )
          {
            v58 = -1;
            v55 = 10000000.0;
          }
          else
          {
            v55 = 10000000.0;
            v56 = (char *)&unk_9FF918;
            v57 = (float32x2_t *)&v69[3 * v54];
            v58 = -1;
            v59 = v57->n64_f32[1];
            v60.n64_u64[0] = v57[1].n64_u64[0];
            for ( i = 0; i != v10; ++i )
            {
              if ( !*((_BYTE *)&CFormation::m_Destinations[73] + i) )
              {
                v62.n64_u64[0] = vsub_f32(*(float32x2_t *)(v56 + 4), v60).n64_u64[0];
                v63 = vmul_f32(v62, v62).n64_u64[0];
                v64 = sqrtf(
                        (float)((float)((float)(*(float *)v56 - v59) * (float)(*(float *)v56 - v59)) + *(float *)&v63)
                      + *((float *)&v63 + 1));
                if ( v64 < v55 )
                {
                  v58 = i;
                  v55 = v64;
                }
              }
              v56 += 12;
            }
          }
          v53 = v53 + v55;
          CFormation::m_aPedLinkToDestinations[v54++] = v58;
          *((_BYTE *)&CFormation::m_Destinations[73] + v58) = 1;
        }
        while ( v54 != v5 );
        if ( v53 < v51 )
        {
          memcpy_0(&CFormation::m_aFinalPedLinkToDestinations, CFormation::m_aPedLinkToDestinations, v66);
          v51 = v53;
          v5 = v68;
        }
        v52 = v67 + 1;
      }
      while ( v67 + 1 < v5 );
    }
  }
  return _stack_chk_guard - v75;
}


// ============================================================

// Address: 0x548f70
// Original: _ZN10CFormation34DistributeDestinations_CoverPointsEP8CPedList7CVector
// Demangled: CFormation::DistributeDestinations_CoverPoints(CPedList *,CVector)
int __fastcall CFormation::DistributeDestinations_CoverPoints(const void *a1, float a2, float a3)
{
  unsigned __int64 v3; // d2
  float32x2_t v4; // d8
  int result; // r0
  int v8; // r8
  float v9; // s0
  float v10; // s2
  int v11; // r10
  int v12; // r4
  int *v13; // r3
  float v14; // s8
  float v15; // s10
  int v16; // r3
  float32x2_t v17; // d7
  float v18; // s12
  int v19; // r1
  int v20; // r5
  int v21; // r2
  float v22; // s3
  bool v23; // cc

  memcpy_0(CFormation::m_Peds, a1, 0x7Cu);
  result = CFormation::m_Peds[0];
  if ( CFormation::m_Peds[0] )
  {
    v8 = CFormation::m_Destinations[0];
    CFormation::m_aFinalPedLinkToDestinations[0] = -1;
    *(_DWORD *)algn_9FFB6C = -1;
    dword_9FFB70 = -1;
    unk_9FFB74 = -1;
    dword_9FFB78 = -1;
    unk_9FFB7C = -1;
    dword_9FFB80 = -1;
    unk_9FFB84 = -1;
    if ( CFormation::m_Destinations[0] >= 1 )
    {
      v9 = a3;
      LODWORD(v3) = 1053609165;
      v10 = a2;
      v11 = 0;
      do
      {
        if ( result >= 1 )
        {
          v12 = -1;
          v13 = &CFormation::m_Destinations[3 * v11];
          v14 = *((float *)v13 + 1);
          v15 = *((float *)v13 + 2);
          v16 = 0;
          v17.n64_u64[0] = v3;
          v18 = sqrtf((float)((float)(v14 - v10) * (float)(v14 - v10)) + (float)((float)(v15 - v9) * (float)(v15 - v9)));
          do
          {
            if ( CFormation::m_aFinalPedLinkToDestinations[v16] <= -1 )
            {
              v19 = CFormation::m_Peds[v16 + 1];
              v20 = *(_DWORD *)(v19 + 20);
              v21 = v20 + 48;
              if ( !v20 )
                v21 = v19 + 4;
              HIDWORD(v3) = *(_DWORD *)(v21 + 4);
              v22 = sqrtf(
                      (float)((float)(*(float *)v21 - v10) * (float)(*(float *)v21 - v10))
                    + (float)((float)(*((float *)&v3 + 1) - v9) * (float)(*((float *)&v3 + 1) - v9)));
              if ( v18 <= (float)(v22 + 1.0) )
              {
                *((float *)&v3 + 1) = (float)(*((float *)&v3 + 1) - v15) * (float)(*((float *)&v3 + 1) - v15);
                v4.n64_f32[0] = 1.0
                              - (float)((float)((float)(v18
                                                      + sqrtf(
                                                          (float)((float)(*(float *)v21 - v14)
                                                                * (float)(*(float *)v21 - v14))
                                                        + *((float *)&v3 + 1)))
                                              - v22)
                                      / v22);
                v23 = v4.n64_f32[0] <= v17.n64_f32[0];
                v17.n64_u64[0] = vmax_f32(v4, v17).n64_u64[0];
                if ( !v23 )
                  v12 = v16;
              }
            }
            ++v16;
          }
          while ( result != v16 );
          if ( v12 > -1 )
            CFormation::m_aFinalPedLinkToDestinations[v12] = v11;
        }
        ++v11;
      }
      while ( v11 < v8 );
    }
  }
  return result;
}


// ============================================================

// Address: 0x5490f4
// Original: _ZN10CFormation35DistributeDestinations_PedsToAttackEP8CPedList
// Demangled: CFormation::DistributeDestinations_PedsToAttack(CPedList *)
CFormation *__fastcall CFormation::DistributeDestinations_PedsToAttack(CFormation *this, CPedList *a2)
{
  int v2; // r6
  int v3; // r8
  unsigned __int64 v4; // d0
  CFormation *result; // r0
  int v6; // r10
  int v7; // r4
  int v8; // r1
  int32x4_t v9; // q8
  int32x4_t *v10; // r2
  unsigned int v11; // r3
  int v12; // r2
  float32x2_t v13; // d1
  int v14; // r1
  int v15; // lr
  char *v16; // r11
  int v17; // r5
  float32x2_t *v18; // r0
  float32x2_t *v19; // r4
  float32x2_t *v20; // r2
  float32x2_t *v21; // r0
  float32x2_t v22; // d16
  float32x2_t v23; // d2
  bool v24; // nf
  int v25; // [sp+8h] [bp-A8h]
  int v27; // [sp+18h] [bp-98h]
  _DWORD v28[37]; // [sp+1Ch] [bp-94h] BYREF

  memcpy_0(CFormation::m_Peds, this, 0x7Cu);
  result = (CFormation *)CFormation::m_Peds[0];
  if ( !CFormation::m_Peds[0] )
    return result;
  CFormation::m_aFinalPedLinkToDestinations[0] = -1;
  *(_DWORD *)algn_9FFB6C = -1;
  dword_9FFB70 = -1;
  unk_9FFB74 = -1;
  dword_9FFB78 = -1;
  unk_9FFB7C = -1;
  dword_9FFB80 = -1;
  unk_9FFB84 = -1;
  v6 = CFormation::m_DestinationPeds[0];
  v7 = *(_DWORD *)this;
  result = (CFormation *)(int)ceilf((float)*(int *)this / (float)CFormation::m_DestinationPeds[0]);
  if ( (int)result <= 2 )
    result = (CFormation *)(&stderr + 2);
  if ( v6 >= 1 )
  {
    if ( (unsigned int)v6 > 3 && (v8 = v6 & 0x7FFFFFFC, (v6 & 0xFFFFFFFC) != 0) )
    {
      v9 = vdupq_n_s32((unsigned int)result);
      v10 = (int32x4_t *)v28;
      v11 = v6 & 0xFFFFFFFC;
      do
      {
        *v10++ = v9;
        v11 -= 4;
      }
      while ( v11 );
      if ( v6 == v8 )
        goto LABEL_13;
    }
    else
    {
      v8 = 0;
    }
    do
      v28[v8++] = result;
    while ( v8 < v6 );
  }
LABEL_13:
  if ( v7 >= 1 )
  {
    v12 = 0;
    LODWORD(v4) = 1232348158;
    do
    {
      v25 = v12;
      if ( v7 >= 1 )
      {
        v13.n64_u64[0] = v4;
        v14 = 0;
        v27 = v7;
        do
        {
          if ( CFormation::m_aFinalPedLinkToDestinations[v14] <= -1 && v6 >= 1 )
          {
            v15 = 0;
            v16 = (char *)this + 4 * v14 + 4;
            do
            {
              if ( (int)v28[v15] >= 1 )
              {
                v17 = CFormation::m_DestinationPeds[v15 + 1];
                v18 = *(float32x2_t **)(*(_DWORD *)v16 + 20);
                v19 = *(float32x2_t **)(v17 + 20);
                v20 = v18 + 6;
                if ( !v18 )
                  v20 = (float32x2_t *)(*(_DWORD *)v16 + 4);
                v21 = v19 + 6;
                if ( !v19 )
                  v21 = (float32x2_t *)(v17 + 4);
                v22.n64_u64[0] = vsub_f32((float32x2_t)v20->n64_u64[0], (float32x2_t)v21->n64_u64[0]).n64_u64[0];
                v23.n64_u64[0] = vmul_f32(v22, v22).n64_u64[0];
                v23.n64_f32[0] = sqrtf(v23.n64_f32[0] + v23.n64_f32[1]);
                v24 = v23.n64_f32[0] < v13.n64_f32[0];
                v13.n64_u64[0] = vmin_f32(v23, v13).n64_u64[0];
                if ( v24 )
                {
                  v3 = v15;
                  v2 = v14;
                }
              }
              ++v15;
            }
            while ( v6 != v15 );
          }
          ++v14;
        }
        while ( v14 < v27 );
      }
      CFormation::m_aFinalPedLinkToDestinations[v2] = v3;
      v12 = v25 + 1;
      --v28[v3];
      result = this;
      v7 = *(_DWORD *)this;
    }
    while ( v25 + 1 < *(_DWORD *)this );
  }
  return result;
}


// ============================================================

// Address: 0x5492c4
// Original: _ZN10CFormation21ReturnTargetPedForPedEP4CPedPS1_
// Demangled: CFormation::ReturnTargetPedForPed(CPed *,CPed **)
int __fastcall CFormation::ReturnTargetPedForPed(int this, CPed *a2, CPed **a3)
{
  int v3; // r3
  int v4; // r4

  if ( CFormation::m_Peds[0] >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      if ( CFormation::m_Peds[v3 + 1] == this )
      {
        v4 = CFormation::m_aFinalPedLinkToDestinations[v3];
        if ( v4 >= 0 )
          break;
      }
      if ( ++v3 >= CFormation::m_Peds[0] )
        return this;
    }
    this = CFormation::m_DestinationPeds[v4 + 1];
    *(_DWORD *)a2 = this;
  }
  return this;
}


// ============================================================

// Address: 0x549324
// Original: _ZN10CFormation23ReturnDestinationForPedEP4CPedR7CVector
// Demangled: CFormation::ReturnDestinationForPed(CPed *,CVector &)
int __fastcall CFormation::ReturnDestinationForPed(CFormation *this, CPed *a2, CVector *a3)
{
  int v3; // r2
  int v4; // r3
  int result; // r0
  int *v7; // r0
  __int64 v8; // d16

  v3 = 0;
  while ( 1 )
  {
    if ( (CFormation *)CFormation::m_Peds[v3 + 1] == this )
    {
      v4 = CFormation::m_aFinalPedLinkToDestinations[v3];
      if ( v4 > -1 )
        break;
    }
    if ( v3++ >= 23 )
      return 0;
  }
  v7 = &CFormation::m_Destinations[3 * v4];
  v8 = *(_QWORD *)(v7 + 1);
  *((_DWORD *)a2 + 2) = v7[3];
  result = 1;
  *(_QWORD *)a2 = v8;
  return result;
}


// ============================================================

// Address: 0x549384
// Original: _ZN10CFormation15FindCoverPointsE7CVectorf
// Demangled: CFormation::FindCoverPoints(CVector,float)
int __fastcall CFormation::FindCoverPoints(float a1, float a2, float a3, float a4)
{
  float v4; // r5
  float v5; // lr
  _DWORD *v8; // r10
  int v9; // r6
  int v10; // r0
  float v11; // r8
  _DWORD *v12; // r9
  int v13; // r0
  int v14; // r6
  float v15; // s18
  float v16; // s22
  int v17; // r4
  int v18; // r5
  int v19; // r1
  float *v20; // r0
  float v21; // s26
  float v22; // s28
  float v23; // s0
  float v24; // s30
  float v25; // s2
  float *v26; // r0
  float v27; // s4
  float v31; // [sp+30h] [bp-1A0h] BYREF
  float v32; // [sp+34h] [bp-19Ch]
  float v33; // [sp+38h] [bp-198h]
  __int64 v34; // [sp+154h] [bp-7Ch]
  __int64 v35; // [sp+15Ch] [bp-74h]
  int v36; // [sp+164h] [bp-6Ch]
  int v37; // [sp+168h] [bp-68h]
  int v38; // [sp+16Ch] [bp-64h]

  v4 = a1;
  v5 = a2;
  dword_9FFA48 = 0;
  unk_9FFA4C = 0;
  CFormation::m_Destinations[0] = 0;
  v8 = (_DWORD *)CPools::ms_pVehiclePool;
  unk_9FFA38 = 0LL;
  unk_9FFA40 = 0LL;
  v9 = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
  while ( v9 )
  {
    --v9;
    if ( *(char *)(v8[1] + v9) >= 0 )
    {
      v10 = *v8 + 2604 * v9;
      if ( v10 )
      {
        if ( !*(_DWORD *)(v10 + 1440)
          && sqrtf(
               (float)((float)(*(float *)(v10 + 72) * *(float *)(v10 + 72))
                     + (float)(*(float *)(v10 + 76) * *(float *)(v10 + 76)))
             + (float)(*(float *)(v10 + 80) * *(float *)(v10 + 80))) < 0.005
          && *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v10 + 38)]) + 44) + 20) < 1.5 )
        {
          v31 = 0.0;
          v11 = a3;
          v37 = 0;
          v34 = 0LL;
          v35 = 0LL;
          v36 = 0;
          CFormation::FindCoverPointsBehindBox();
          v5 = a2;
          v4 = a1;
          a3 = v11;
        }
      }
    }
  }
  v12 = (_DWORD *)CPools::ms_pObjectPool;
  v13 = *(_DWORD *)(CPools::ms_pObjectPool + 8);
  if ( v13 )
  {
    v14 = v13 - 1;
    v15 = a3;
    v16 = v4;
    v17 = 420 * v13 - 420;
    do
    {
      if ( *(char *)(v12[1] + v14) >= 0 )
      {
        v18 = *v12 + v17;
        if ( v18 )
        {
          if ( *(float *)(*(_DWORD *)(v18 + 20) + 40) > 0.95
            && CObject::CanBeUsedToTakeCoverBehind((CObject *)(*v12 + v17)) )
          {
            v19 = *(_DWORD *)(v18 + 20);
            v20 = (float *)(v19 + 48);
            if ( !v19 )
              v20 = (float *)(v18 + 4);
            v21 = *v20;
            v22 = v20[1];
            v23 = *v20 - v16;
            if ( sqrtf((float)(v23 * v23) + (float)((float)(v22 - v5) * (float)(v22 - v5))) < a4 )
            {
              v24 = v20[2];
              v32 = v22 - v5;
              v31 = v23;
              v33 = v24 - v15;
              CVector::Normalise((CVector *)&v31);
              if ( CFormation::m_Destinations[0] <= 23 )
              {
                v25 = v22 + v32;
                v26 = (float *)&CFormation::m_Destinations[3 * CFormation::m_Destinations[0]];
                v27 = v24 + v33;
                ++CFormation::m_Destinations[0];
                v26[1] = v21 + v31;
                v26[2] = v25;
                v26[3] = v27;
              }
            }
          }
        }
      }
      --v14;
      v17 -= 420;
    }
    while ( v14 != -1 );
  }
  return _stack_chk_guard - v38;
}


// ============================================================

// Address: 0x54963c
// Original: _ZN10CFormation24FindCoverPointsBehindBoxEP10CPointList7CVectorP7CMatrixPKS2_S6_S6_f
// Demangled: CFormation::FindCoverPointsBehindBox(CPointList *,CVector,CMatrix *,CVector const*,CVector const*,CVector const*,float)
int __fastcall CFormation::FindCoverPointsBehindBox(
        int result,
        float a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  unsigned __int64 v9; // d0
  float32x2_t v10; // d1
  int *v13; // r4
  int v14; // r1
  int v15; // r1
  float v16; // s18
  int v17; // r5
  float *v18; // r6
  float v19; // s2
  float v20; // s6
  float v21; // s8
  float v22; // s12
  float *v23; // r8
  int v24; // r10
  float v25; // s2
  float v26; // s4
  float32x2_t v27; // d4
  float v28; // s6
  float v29; // s10
  float v30; // s26
  float v31; // s28
  unsigned int v32; // s0
  float v33; // s24
  float v34; // s26
  float v35; // s30
  float v36; // s28
  float v37; // s0
  float v38; // s2
  float v39; // s4
  float *v40; // [sp+8h] [bp-B0h]
  unsigned __int64 v41; // [sp+Ch] [bp-ACh] BYREF
  float v42; // [sp+14h] [bp-A4h]
  double v43; // [sp+18h] [bp-A0h] BYREF
  unsigned __int32 v44; // [sp+20h] [bp-98h]
  float v45; // [sp+24h] [bp-94h]
  double v46; // [sp+28h] [bp-90h] BYREF
  unsigned __int32 v47; // [sp+30h] [bp-88h]
  double v48; // [sp+34h] [bp-84h]
  unsigned __int32 v49; // [sp+3Ch] [bp-7Ch]
  double v50; // [sp+40h] [bp-78h]
  unsigned __int32 v51; // [sp+48h] [bp-70h]
  double v52; // [sp+4Ch] [bp-6Ch]
  unsigned __int32 v53; // [sp+54h] [bp-64h]

  v13 = (int *)result;
  if ( fabsf(a4 - *(float *)(a5 + 56)) < 7.0 )
  {
    v41 = *(_QWORD *)a7;
    v42 = 0.0;
    operator*();
    v47 = v44;
    v46 = v43;
    v14 = *(_DWORD *)(a8 + 4);
    LODWORD(v41) = *(_DWORD *)a7;
    HIDWORD(v41) = v14;
    v42 = 0.0;
    operator*();
    v49 = v44;
    v48 = v43;
    v41 = *(_QWORD *)a8;
    v42 = 0.0;
    operator*();
    v51 = v44;
    v50 = v43;
    v15 = *(_DWORD *)(a7 + 4);
    LODWORD(v41) = *(_DWORD *)a8;
    HIDWORD(v41) = v15;
    v42 = 0.0;
    operator*();
    v16 = a3;
    v53 = v44;
    v17 = 0;
    v52 = v43;
    v18 = (float *)&v46 + 1;
    v19 = *((float *)&v43 + 1) - a3;
    v20 = *((float *)&v43 + 1) - a3;
    v21 = *((float *)&v43 + 1) - a3;
    v22 = *((float *)&v43 + 1) - a3;
    v23 = (float *)&v43;
    v24 = 0;
    *(float *)&v9 = (float)((float)(*(float *)&v46 - a2) * (float)(*(float *)&v46 - a2)) + (float)(v19 * v19);
    v25 = (float)((float)(*(float *)&v50 - a2) * (float)(*(float *)&v50 - a2)) + (float)(v21 * v21);
    *(float *)&v9 = sqrtf(*(float *)&v9);
    v26 = sqrtf((float)((float)(*(float *)&v48 - a2) * (float)(*(float *)&v48 - a2)) + (float)(v20 * v20));
    v27.n64_u64[0] = v9;
    v10.n64_f32[0] = sqrtf(v25);
    if ( v26 < *(float *)&v9 )
      v27.n64_f32[0] = v26;
    v28 = sqrtf((float)((float)(*(float *)&v43 - a2) * (float)(*(float *)&v43 - a2)) + (float)(v22 * v22));
    *(_QWORD *)&v43 = __PAIR64__(LODWORD(v26), v9);
    LODWORD(v29) = vmin_f32(v10, v27).n64_u32[0];
    v44 = v10.n64_u32[0];
    v45 = v28;
    if ( v26 < *(float *)&v9 )
      v17 = 1;
    if ( v10.n64_f32[0] < v27.n64_f32[0] )
      v17 = 2;
    if ( v28 < v29 )
      v17 = 3;
    v40 = (float *)&v46 + 3 * (((_BYTE)v17 + 2) & 3);
    result = (int)(v40 + 1);
    do
    {
      if ( v17 != v24 )
      {
        result = ((_BYTE)v24 + 2) & 3;
        if ( result != v17 )
        {
          result = *v13;
          if ( *v13 <= 23 && *v23 < a9 )
          {
            v30 = *(v18 - 1);
            v31 = *v18;
            *(float *)&v32 = v40[1] - *v18;
            v42 = 0.0;
            v33 = v18[1];
            v41 = __PAIR64__(v32, *v40 - v30);
            CVector::Normalise((CVector *)&v41);
            v34 = v30 + *(float *)&v41;
            v35 = v42;
            v36 = v31 + *((float *)&v41 + 1);
            v42 = 0.0;
            *(float *)&v41 = v34 - a2;
            *((float *)&v41 + 1) = v36 - v16;
            CVector::Normalise((CVector *)&v41);
            result = *v13;
            if ( *v13 <= 23 )
            {
              v37 = *(float *)&v41 * 0.75;
              v38 = *((float *)&v41 + 1) * 0.75;
              v39 = v42 * 0.75;
              *v13 = result + 1;
              result = (int)&v13[3 * result];
              *(float *)(result + 4) = v34 + v37;
              *(float *)(result + 8) = v36 + v38;
              *(float *)(result + 12) = (float)(v33 + v35) + v39;
            }
          }
        }
      }
      ++v24;
      v18 += 3;
      ++v23;
    }
    while ( v24 != 4 );
  }
  return result;
}


// ============================================================
