
// Address: 0x19e66c
// Original: j__ZN17ProcSurfaceInfo_c10AddObjectsEP12CPlantLocTri
// Demangled: ProcSurfaceInfo_c::AddObjects(CPlantLocTri *)
// attributes: thunk
int __fastcall ProcSurfaceInfo_c::AddObjects(ProcSurfaceInfo_c *this, CPlantLocTri *a2)
{
  return _ZN17ProcSurfaceInfo_c10AddObjectsEP12CPlantLocTri(this, a2);
}


// ============================================================

// Address: 0x19fe9c
// Original: j__ZN17ProcSurfaceInfo_c9AddObjectE7CVectorS0_h
// Demangled: ProcSurfaceInfo_c::AddObject(CVector,CVector,uchar)
// attributes: thunk
int ProcSurfaceInfo_c::AddObject()
{
  return _ZN17ProcSurfaceInfo_c9AddObjectE7CVectorS0_h();
}


// ============================================================

// Address: 0x45615c
// Original: _ZN17ProcSurfaceInfo_cC2Ev
// Demangled: ProcSurfaceInfo_c::ProcSurfaceInfo_c(void)
void __fastcall ProcSurfaceInfo_c::ProcSurfaceInfo_c(ProcSurfaceInfo_c *this)
{
  List_c::List_c((ProcSurfaceInfo_c *)((char *)this + 60));
}


// ============================================================

// Address: 0x45616e
// Original: _ZN17ProcSurfaceInfo_cD2Ev
// Demangled: ProcSurfaceInfo_c::~ProcSurfaceInfo_c()
void __fastcall ProcSurfaceInfo_c::~ProcSurfaceInfo_c(ProcSurfaceInfo_c *this)
{
  List_c::~List_c((ProcSurfaceInfo_c *)((char *)this + 60));
}


// ============================================================

// Address: 0x456180
// Original: _ZN17ProcSurfaceInfo_c4InitEPcS0_ffiiffffffhh
// Demangled: ProcSurfaceInfo_c::Init(char *,char *,float,float,int,int,float,float,float,float,float,float,uchar,uchar)
int __fastcall ProcSurfaceInfo_c::Init(
        ProcSurfaceInfo_c *this,
        char *a2,
        CModelInfo *a3,
        float a4,
        float a5,
        int a6,
        int a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        unsigned __int8 a14,
        unsigned int a15)
{
  float32x2_t v15; // d6
  float32x2_t v16; // d8
  int *v20; // r2
  float v21; // s10
  int result; // r0

  *(_BYTE *)this = SurfaceInfos_c::GetSurfaceIdFromName((SurfaceInfos_c *)&g_surfaceInfos, a2);
  if ( !CModelInfo::GetModelInfo(a3, (const char *)this + 4, v20) )
    return 0;
  v15.n64_f32[0] = a5;
  v16.n64_u32[0] = 1117782016;
  *((float *)this + 2) = a4;
  *((float *)this + 7) = a8;
  v21 = vmin_f32(v15, v16).n64_f32[0];
  *((float *)this + 8) = a9;
  *((float *)this + 9) = a10;
  *((float *)this + 10) = a11;
  *((float *)this + 11) = a12;
  *((float *)this + 12) = a13;
  *((_BYTE *)this + 52) = a14;
  result = 1;
  *((float *)this + 14) = (float)a15;
  *((float *)this + 4) = v21 * v21;
  *((float *)this + 3) = 1.0 / (float)(a4 * a4);
  *((float *)this + 5) = (float)((float)a6 / 180.0) * 3.1416;
  *((float *)this + 6) = (float)((float)a7 / 180.0) * 3.1416;
  return result;
}


// ============================================================

// Address: 0x456270
// Original: _ZN17ProcSurfaceInfo_c4ExitEv
// Demangled: ProcSurfaceInfo_c::Exit(void)
_DWORD *__fastcall ProcSurfaceInfo_c::Exit(_DWORD *this)
{
  int v1; // r5
  List_c *v2; // r9
  int v3; // r4
  CEntity *v4; // r1

  v2 = (List_c *)(this + 15);
  v1 = this[15];
  if ( v1 )
  {
    do
    {
      v3 = *(_DWORD *)(v1 + 4);
      List_c::RemoveItem(v2, (ListItem_c *)v1);
      List_c::AddItem((List_c *)&unk_9A6B44, (ListItem_c *)v1);
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 36))(*(_DWORD *)(v1 + 8));
      CWorld::Remove(*(CWorld **)(v1 + 8), v4);
      this = *(_DWORD **)(v1 + 8);
      if ( this )
        this = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*this + 4))(this);
      *(_DWORD *)(v1 + 8) = 0;
      v1 = v3;
    }
    while ( v3 );
  }
  return this;
}


// ============================================================

// Address: 0x4562e0
// Original: _ZN17ProcSurfaceInfo_c9AddObjectE7CVectorS0_h
// Demangled: ProcSurfaceInfo_c::AddObject(CVector,CVector,uchar)
int __fastcall ProcSurfaceInfo_c::AddObject(unsigned __int8 *a1, float a2, float a3, float a4, __int64 a5, float a6)
{
  const char *v10; // r1
  int v11; // r4
  int v12; // r11
  CBuilding *v14; // r0
  int v15; // r0
  CObject *v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r0
  __int64 v20; // kr00_8
  int v21; // r0
  __int64 v22; // kr08_8
  float v23; // s18
  float v24; // s22
  int v25; // r0
  float v26; // s20
  float v27; // s24
  float v28; // s26
  int v29; // r0
  float v30; // s16
  float v31; // s17
  float v32; // s28
  int v33; // r0
  float v34; // s19
  float v35; // s21
  float v36; // s23
  int v37; // r0
  float v38; // s0
  float v39; // s16
  float v40; // s17
  int v41; // r0
  int v42; // r1
  float *v43; // r0
  int v44; // r6
  float *v45; // r0
  float v46; // s17
  float v47; // s19
  float v48; // s21
  float *v49; // r0
  float v50; // s2
  float v51; // s4
  int v52; // r2
  CEntity *v53; // r1
  float v54; // s18
  float v55; // s20
  CMatrix *v56; // r0
  _DWORD v57[3]; // [sp+0h] [bp-D8h] BYREF
  _DWORD v58[6]; // [sp+Ch] [bp-CCh] BYREF
  float v59; // [sp+24h] [bp-B4h] BYREF
  float v60; // [sp+28h] [bp-B0h]
  float v61; // [sp+2Ch] [bp-ACh]
  float v62; // [sp+34h] [bp-A4h]
  float v63; // [sp+38h] [bp-A0h]
  float v64; // [sp+3Ch] [bp-9Ch]
  __int64 v65; // [sp+44h] [bp-94h]
  float v66; // [sp+4Ch] [bp-8Ch]
  float v67; // [sp+54h] [bp-84h]
  float v68; // [sp+58h] [bp-80h]
  float v69; // [sp+5Ch] [bp-7Ch]
  int v70; // [sp+64h] [bp-74h]
  int v71; // [sp+68h] [bp-70h]
  __int64 v72; // [sp+6Ch] [bp-6Ch] BYREF
  float v73; // [sp+74h] [bp-64h]

  v72 = a5;
  v73 = a6;
  v11 = List_c::RemoveHead((List_c *)&unk_9A6B44);
  if ( !v11 )
    return 0;
  if ( a1[52] && a6 < 0.95 && g_procObjMan[0] >= 200 )
  {
    CDebug::DebugLog((CDebug *)"Cannot create procedural object aligned to surface - no matrices left\n", v10);
    return 0;
  }
  v12 = *(unsigned __int16 *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((_DWORD *)a1 + 1)]) + 38);
  if ( v12 == 0xFFFF )
  {
    *(_BYTE *)(CPools::ms_pBuildingPool + 17) = 1;
    v14 = (CBuilding *)CBuilding::operator new((CBuilding *)&off_3C, 1u);
    CBuilding::CBuilding(v14);
    *(_DWORD *)(v11 + 8) = v15;
    if ( !v15 )
    {
      v11 = 0;
      *(_BYTE *)(CPools::ms_pBuildingPool + 17) = 0;
      return v11;
    }
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v15 + 28))(v15, *((_DWORD *)a1 + 1));
    *(_BYTE *)(CPools::ms_pBuildingPool + 17) = 0;
  }
  else
  {
    if ( (unsigned __int16)CObject::nNoTempObjects > 0x95u )
      return 0;
    *(_BYTE *)(CPools::ms_pObjectPool + 17) = 1;
    v16 = (CObject *)CObject::operator new((CObject *)&elf_hash_bucket[34], 1u);
    CObject::CObject(v16, *((_DWORD *)a1 + 1), 0);
    *(_DWORD *)(v11 + 8) = v17;
    if ( !v17 )
    {
      v11 = 0;
      *(_BYTE *)(CPools::ms_pObjectPool + 17) = 0;
      return v11;
    }
    *(_BYTE *)(v17 + 320) = 5;
    v18 = *(_DWORD **)(v11 + 8);
    v18[18] = 0;
    v18[19] = 0;
    v18[20] = 0;
    *(_BYTE *)(CPools::ms_pObjectPool + 17) = 0;
    ++CObject::nNoTempObjects;
  }
  if ( SurfaceInfos_c::IsWater((SurfaceInfos_c *)&g_surfaceInfos, *a1) )
  {
    v19 = *(_DWORD *)(v11 + 8);
    v20 = *(_QWORD *)(v19 + 28);
    *(_DWORD *)(v19 + 28) = v20 | 0x100000;
    *(_DWORD *)(v19 + 32) = HIDWORD(v20);
  }
  v21 = *(_DWORD *)(v11 + 8);
  v22 = *(_QWORD *)(v21 + 28);
  *(_DWORD *)(v21 + 28) = v22 | 0x4000000;
  *(_DWORD *)(v21 + 32) = HIDWORD(v22);
  v23 = *((float *)a1 + 7);
  v24 = *((float *)a1 + 8);
  v25 = rand();
  v26 = *((float *)a1 + 9);
  v27 = *((float *)a1 + 10);
  v28 = (float)v25;
  v29 = rand();
  v30 = *((float *)a1 + 5);
  v31 = *((float *)a1 + 6);
  v32 = (float)v29;
  v33 = rand();
  v34 = *((float *)a1 + 11);
  v35 = *((float *)a1 + 12);
  v36 = (float)v33;
  v37 = rand();
  v38 = v30 + (float)((float)(v31 - v30) * (float)(v36 * 4.6566e-10));
  v39 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((_DWORD *)a1 + 1)]) + 44) + 8);
  v40 = v34 + (float)((float)(v35 - v34) * (float)((float)v37 * 4.6566e-10));
  if ( a1[52] && v73 < 0.95 )
  {
    v70 = 0;
    v71 = 0;
    v58[5] = 0;
    v58[4] = sinf(v38);
    v58[3] = cosf(v38);
    CrossProduct((const CVector *)v58, (const CVector *)&v72);
    CVector::Normalise((CVector *)v58);
    CrossProduct((const CVector *)v57, (const CVector *)v58);
    CVector::Normalise((CVector *)v57);
    v59 = *(float *)v57;
    v60 = *(float *)&v57[1];
    v61 = *(float *)&v57[2];
    v65 = v72;
    v66 = v73;
    v62 = *(float *)v58;
    v63 = *(float *)&v58[1];
    v64 = *(float *)&v58[2];
    v67 = (float)((float)(v40 - v39) * *(float *)&v72) + a2;
    v68 = (float)((float)(v40 - v39) * *((float *)&v72 + 1)) + a3;
    v69 = (float)((float)(v40 - v39) * v73) + a4;
    CPlaceable::AllocateStaticMatrix(*(CPlaceable **)(v11 + 8));
    CPlaceable::SetMatrix(*(CPlaceable **)(v11 + 8), (const CMatrix *)&v59);
    *(_BYTE *)(v11 + 16) = 1;
    ++g_procObjMan[0];
    CMatrix::~CMatrix((CMatrix *)&v59);
  }
  else
  {
    v41 = *(_DWORD *)(v11 + 8);
    v42 = *(_DWORD *)(v41 + 20);
    if ( v42 )
    {
      *(float *)(v42 + 48) = a2;
      *(float *)(*(_DWORD *)(v41 + 20) + 52) = a3;
      v43 = (float *)(*(_DWORD *)(v41 + 20) + 56);
    }
    else
    {
      *(float *)(v41 + 4) = a2;
      *(float *)(v41 + 8) = a3;
      v43 = (float *)(v41 + 12);
    }
    *v43 = v40 + (float)(a4 - v39);
    v44 = *(_DWORD *)(v11 + 8);
    v45 = *(float **)(v44 + 20);
    if ( v45 )
    {
      v46 = v45[12];
      v47 = v45[13];
      v48 = v45[14];
      CMatrix::SetRotate((CMatrix *)v45, 0.0, 0.0, v38);
      v49 = *(float **)(v44 + 20);
      v50 = v47 + v49[13];
      v51 = v48 + v49[14];
      v49[12] = v46 + v49[12];
      v49[13] = v50;
      v49[14] = v51;
    }
    else
    {
      *(float *)(v44 + 16) = v38;
    }
    *(_BYTE *)(v11 + 16) = 0;
  }
  *(_BYTE *)(*(_DWORD *)(v11 + 8) + 51) = CGame::currArea;
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(v11 + 8) + 20))(*(_DWORD *)(v11 + 8), 1);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v11 + 8) + 32))(*(_DWORD *)(v11 + 8));
  v52 = *(_DWORD *)(v11 + 8);
  if ( *(_DWORD *)(v52 + 24) )
  {
    if ( *(_DWORD *)(v52 + 20) )
      CMatrix::UpdateRwMatrix();
    else
      CSimpleTransform::UpdateRwMatrix();
  }
  CEntity::UpdateRwFrame(*(CEntity **)(v11 + 8));
  CWorld::Add(*(CWorld **)(v11 + 8), v53);
  List_c::AddItem((List_c *)(a1 + 60), (ListItem_c *)v11);
  if ( v12 == 0xFFFF )
  {
    v54 = v23 + (float)((float)(v24 - v23) * (float)(v28 * 4.6566e-10));
    v55 = v26 + (float)((float)(v27 - v26) * (float)(v32 * 4.6566e-10));
    if ( v54 != 1.0 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v11 + 8) + 24) )
      {
        v56 = (CMatrix *)CMatrix::CMatrix();
        v59 = v54 * v59;
        v60 = v54 * v60;
        v61 = v55 * v61;
        v62 = v54 * v62;
        v63 = v54 * v63;
        v64 = v55 * v64;
        *(float *)&v65 = v54 * *(float *)&v65;
        *((float *)&v65 + 1) = v54 * *((float *)&v65 + 1);
        v66 = v55 * v66;
        v67 = v67 + 0.0;
        v68 = v68 + 0.0;
        v69 = v69 - (float)((float)(v55 * v39) - v39);
        CMatrix::UpdateRW(v56);
        CEntity::UpdateRwFrame(*(CEntity **)(v11 + 8));
        CMatrix::~CMatrix((CMatrix *)&v59);
      }
    }
  }
  return v11;
}


// ============================================================

// Address: 0x4567f2
// Original: _ZN17ProcSurfaceInfo_c16IsPtInTriangle2DEff7CVectorS0_S0_S0_Pf
// Demangled: ProcSurfaceInfo_c::IsPtInTriangle2D(float,float,CVector,CVector,CVector,CVector,float *)
int __fastcall ProcSurfaceInfo_c::IsPtInTriangle2D(
        int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        float a10,
        float a11,
        int a12,
        float a13,
        float a14,
        float a15,
        float *a16)
{
  int result; // r0

  result = 0;
  if ( (float)((float)((float)(a10 - a2) * (float)(a5 - a11)) + (float)((float)(a11 - a3) * (float)(a10 - a4))) <= 0.0
    && (float)((float)((float)(a4 - a2) * (float)(a8 - a5)) + (float)((float)(a5 - a3) * (float)(a4 - a7))) <= 0.0
    && (float)((float)((float)(a7 - a2) * (float)(a11 - a8)) + (float)((float)(a8 - a3) * (float)(a7 - a10))) <= 0.0 )
  {
    result = 1;
    *a16 = (float)((float)((float)-(float)(a13 * a2) - (float)(a14 * a3))
                 + (float)((float)(a6 * a15) + (float)((float)(a4 * a13) + (float)(a5 * a14))))
         / a15;
  }
  return result;
}


// ============================================================

// Address: 0x4568d4
// Original: _ZN17ProcSurfaceInfo_c10AddObjectsEP12CPlantLocTri
// Demangled: ProcSurfaceInfo_c::AddObjects(CPlantLocTri *)
int __fastcall ProcSurfaceInfo_c::AddObjects(ProcSurfaceInfo_c *this, CPlantLocTri *a2)
{
  float32x2_t v2; // d8
  float32x2_t v3; // d9
  float32x2_t v4; // d11
  float32x2_t v5; // d12
  float32x2_t v6; // d13
  float32x2_t v7; // d14
  float v10; // s0
  float v11; // s18
  float v12; // s4
  float v13; // s20
  float v14; // s22
  float v15; // s26
  float v16; // s2
  float v17; // s24
  float v18; // s28
  float *v19; // r2
  int v20; // r10
  CPlantLocTri *v21; // r0
  float v22; // s4
  float v23; // s2
  CPlantLocTri *v24; // r1
  float v25; // s6
  CPlantLocTri *v26; // r2
  float v27; // s20
  CPlantLocTri *v28; // r2
  float v29; // s2
  float v30; // s16
  float v31; // s18
  int v32; // s2
  float v33; // s20
  float v34; // s22
  float v35; // s24
  float v36; // s4
  float v37; // s6
  float v38; // s2
  float v39; // s8
  float v40; // s10
  int v41; // r0
  float v42; // s0
  float v43; // s16
  float v44; // s30
  float v45; // s17
  float v46; // s19
  unsigned int v47; // r6
  float v48; // s16
  float v49; // s0
  int v50; // r0
  int seed; // [sp+10h] [bp-88h]
  float v53[3]; // [sp+14h] [bp-84h] BYREF
  float v54[30]; // [sp+20h] [bp-78h] BYREF

  v10 = *(float *)a2;
  v11 = *((float *)a2 + 3);
  v12 = *((float *)a2 + 1);
  v13 = *((float *)a2 + 4);
  v14 = *((float *)a2 + 6);
  v15 = *((float *)a2 + 7);
  v16 = *((float *)a2 + 2);
  v17 = *((float *)a2 + 5);
  v18 = *((float *)a2 + 8);
  v19 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v19 = (float *)&qword_951FAC;
  if ( (float)((float)((float)((float)(*v19 - (float)((float)((float)(*(float *)a2 + v11) + v14) * 0.3333))
                             * (float)(*v19 - (float)((float)((float)(*(float *)a2 + v11) + v14) * 0.3333)))
                     + (float)((float)(v19[1] - (float)((float)((float)(v12 + v13) + v15) * 0.3333))
                             * (float)(v19[1] - (float)((float)((float)(v12 + v13) + v15) * 0.3333))))
             + (float)((float)(v19[2] - (float)((float)((float)(v16 + v17) + v18) * 0.3333))
                     * (float)(v19[2] - (float)((float)((float)(v16 + v17) + v18) * 0.3333)))) < *((float *)this + 4) )
    return 0;
  v54[4] = v13 - v12;
  v54[3] = v11 - v10;
  v54[5] = v17 - v16;
  v54[1] = v15 - v12;
  v54[0] = v14 - v10;
  v54[2] = v18 - v16;
  CrossProduct((const CVector *)v53, (const CVector *)v54);
  if ( *((float *)this + 14) == 0.0 )
  {
    v43 = *((float *)this + 3);
    v44 = v53[0];
    v45 = v53[1];
    v46 = v53[2];
    v47 = (unsigned int)(float)((float)((float)((float)((float)(*(float *)a2 + *((float *)a2 + 1)) + *((float *)a2 + 2))
                                              + (float)((float)(*((float *)a2 + 3) + *((float *)a2 + 4))
                                                      + *((float *)a2 + 5)))
                                      + (float)((float)(*((float *)a2 + 6) + *((float *)a2 + 7)) + *((float *)a2 + 8)))
                              + (float)*((int *)this + 1));
    seed = rand();
    srand(v47);
    v20 = 0;
    v48 = v43 * (float)(sqrtf((float)((float)(v44 * v44) + (float)(v45 * v45)) + (float)(v46 * v46)) * 0.5);
    if ( v48 > 0.0 )
    {
      v20 = 0;
      do
      {
        v49 = 1.0;
        if ( v48 < 1.0 )
          v49 = (float)((float)rand() * 4.6566e-10) + 0.0;
        if ( v49 < v48 )
        {
          rand();
          rand();
          CVector::Normalise((CVector *)v53);
          v50 = ProcSurfaceInfo_c::AddObject();
          if ( v50 )
          {
            *(_DWORD *)(v50 + 12) = a2;
            ++v20;
          }
        }
        v48 = v48 + -1.0;
      }
      while ( v48 > 0.0 );
    }
    srand(seed);
  }
  else
  {
    v21 = (CPlantLocTri *)((char *)a2 + 12);
    v22 = *((float *)a2 + 3);
    v23 = *((float *)a2 + 1);
    v24 = (CPlantLocTri *)((char *)a2 + 12);
    v25 = *((float *)a2 + 4);
    v26 = (CPlantLocTri *)((char *)a2 + 12);
    v2.n64_u32[0] = *((_DWORD *)a2 + 6);
    v4.n64_u32[0] = *((_DWORD *)a2 + 7);
    v27 = *((float *)this + 2);
    if ( *(float *)a2 > v22 )
      v24 = a2;
    if ( v23 > v25 )
      v26 = a2;
    v5.n64_u32[0] = *((_DWORD *)v26 + 1);
    v28 = (CPlantLocTri *)((char *)a2 + 12);
    if ( v23 <= v25 )
      v28 = a2;
    v6.n64_u32[0] = *((_DWORD *)v28 + 1);
    v3.n64_u32[0] = *(_DWORD *)v24;
    if ( *(float *)a2 < v22 )
      v21 = a2;
    v7.n64_u32[0] = *(_DWORD *)v21;
    CVector::Normalise((CVector *)v53);
    v29 = vmax_f32(v3, v2).n64_f32[0];
    v20 = 0;
    v30 = (float)(int)(float)(v27 * (float)(int)(float)(vmin_f32(v7, v2).n64_f32[0] / v27));
    v31 = (float)(int)(float)(v27 * (float)((int)(float)(v29 / v27) + 1));
    if ( v30 < v31 )
    {
      v20 = 0;
      v32 = (int)(float)(v27 * (float)((int)(float)(vmax_f32(v5, v4).n64_f32[0] / v27) + 1));
      v33 = (float)(int)(float)(v27 * (float)(int)(float)(vmin_f32(v6, v4).n64_f32[0] / v27));
      v34 = (float)v32;
      do
      {
        if ( v33 >= v34 )
        {
          v42 = *((float *)this + 2);
        }
        else
        {
          v35 = v33;
          do
          {
            v36 = *((float *)a2 + 6);
            v37 = *((float *)a2 + 7);
            v38 = *((float *)a2 + 1);
            if ( (float)((float)((float)(v36 - v30) * (float)(v38 - v37))
                       + (float)((float)(v36 - *(float *)a2) * (float)(v37 - v35))) <= 0.0 )
            {
              v39 = *((float *)a2 + 3);
              v40 = *((float *)a2 + 4);
              if ( (float)((float)((float)(v38 - v35) * (float)(*(float *)a2 - v39))
                         + (float)((float)(*(float *)a2 - v30) * (float)(v40 - v38))) <= 0.0
                && (float)((float)((float)(v40 - v35) * (float)(v39 - v36))
                         + (float)((float)(v39 - v30) * (float)(v37 - v40))) <= 0.0 )
              {
                v41 = ProcSurfaceInfo_c::AddObject();
                if ( v41 )
                {
                  *(_DWORD *)(v41 + 12) = a2;
                  ++v20;
                }
              }
            }
            v42 = *((float *)this + 2);
            v35 = v35 + v42;
          }
          while ( v35 < v34 );
        }
        v30 = v30 + v42;
      }
      while ( v30 < v31 );
    }
  }
  return v20;
}


// ============================================================
