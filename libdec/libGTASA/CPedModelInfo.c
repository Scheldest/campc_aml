
// Address: 0x18e8a4
// Original: j__ZN13CPedModelInfo30AnimatePedColModelSkinnedWorldEP7RpClump
// Demangled: CPedModelInfo::AnimatePedColModelSkinnedWorld(RpClump *)
// attributes: thunk
int CPedModelInfo::AnimatePedColModelSkinnedWorld()
{
  return _ZN13CPedModelInfo30AnimatePedColModelSkinnedWorldEP7RpClump();
}


// ============================================================

// Address: 0x19b610
// Original: j__ZN13CPedModelInfo14IncrementVoiceEv
// Demangled: CPedModelInfo::IncrementVoice(void)
// attributes: thunk
int __fastcall CPedModelInfo::IncrementVoice(CPedModelInfo *this)
{
  return _ZN13CPedModelInfo14IncrementVoiceEv(this);
}


// ============================================================

// Address: 0x19c864
// Original: j__ZN13CPedModelInfo24CreateHitColModelSkinnedEP7RpClump
// Demangled: CPedModelInfo::CreateHitColModelSkinned(RpClump *)
// attributes: thunk
int CPedModelInfo::CreateHitColModelSkinned()
{
  return _ZN13CPedModelInfo24CreateHitColModelSkinnedEP7RpClump();
}


// ============================================================

// Address: 0x19e320
// Original: j__ZN13CPedModelInfo25AnimatePedColModelSkinnedEP7RpClump
// Demangled: CPedModelInfo::AnimatePedColModelSkinned(RpClump *)
// attributes: thunk
int CPedModelInfo::AnimatePedColModelSkinned()
{
  return _ZN13CPedModelInfo25AnimatePedColModelSkinnedEP7RpClump();
}


// ============================================================

// Address: 0x386674
// Original: _ZN13CPedModelInfo8SetClumpEP7RpClump
// Demangled: CPedModelInfo::SetClump(RpClump *)
int __fastcall CPedModelInfo::SetClump(int a1)
{
  CClumpModelInfo::SetClump();
  CClumpModelInfo::SetFrameIds();
  if ( !*(_DWORD *)(a1 + 76) )
    CPedModelInfo::CreateHitColModelSkinned();
  RpClumpForAllAtomics(*(_DWORD *)(a1 + 52), CClumpModelInfo::SetAtomicRendererCB, CVisibilityPlugins::RenderPedCB);
  return j_GetAnimHierarchyFromClump();
}


// ============================================================

// Address: 0x3866c0
// Original: _ZN13CPedModelInfo24CreateHitColModelSkinnedEP7RpClump
// Demangled: CPedModelInfo::CreateHitColModelSkinned(RpClump *)
int __fastcall CPedModelInfo::CreateHitColModelSkinned(int a1)
{
  unsigned int v1; // r1
  int v2; // r6
  int v3; // r8
  _QWORD *v4; // r4
  __int64 *v5; // r5
  int v6; // r9
  char *v7; // r10
  int v8; // r1
  int v9; // r2
  __int64 v10; // d16
  __int64 v11; // d17
  __int64 v12; // d19
  __int64 v13; // d22
  __int64 v14; // d23
  __int64 v15; // d20
  __int64 v16; // d21
  double v17; // d16
  int result; // r0
  _DWORD v20[3]; // [sp+18h] [bp-40h] BYREF
  int v21; // [sp+24h] [bp-34h] BYREF
  int v22; // [sp+28h] [bp-30h]
  int v23; // [sp+2Ch] [bp-2Ch]
  double v24; // [sp+30h] [bp-28h] BYREF
  int v25; // [sp+38h] [bp-20h]

  GetAnimHierarchyFromSkinClump();
  v2 = CColModel::operator new((CColModel *)&word_30, v1);
  CColModel::CColModel((CColModel *)v2);
  v3 = 0;
  v4 = (_QWORD *)CGame::m_pWorkingMatrix2;
  v5 = (__int64 *)CGame::m_pWorkingMatrix1;
  CColModel::AllocateData((CColModel *)v2, 12, 0, 0, 0, 0, 0);
  RwMatrixInvert();
  v6 = *(_DWORD *)(*(_DWORD *)(v2 + 44) + 8);
  do
  {
    v7 = (char *)&CPedModelInfo::m_pColNodeInfos + v3;
    v8 = *(_DWORD *)((char *)&CPedModelInfo::m_pColNodeInfos + v3 + 16);
    v9 = *(_DWORD *)((char *)&CPedModelInfo::m_pColNodeInfos + v3 + 20);
    LODWORD(v24) = *(_DWORD *)((char *)&CPedModelInfo::m_pColNodeInfos + v3 + 12);
    HIDWORD(v24) = v8;
    v25 = v9;
    v10 = *v5;
    v11 = v5[1];
    v12 = v5[7];
    v13 = v5[2];
    v14 = v5[3];
    v15 = v5[4];
    v16 = v5[5];
    v4[6] = v5[6];
    v4[7] = v12;
    v4[4] = v15;
    v4[5] = v16;
    *v4 = v10;
    v4[1] = v11;
    v4[2] = v13;
    v4[3] = v14;
    RpHAnimHierarchyGetMatrixArray();
    RpHAnimIDGetIndex();
    RwMatrixTransform();
    RwV3dTransformPoints(&v24, &v24, 1, v4);
    v17 = v24;
    v3 += 28;
    *(_DWORD *)(v6 + 8) = v25;
    *(double *)v6 = v17;
    *(_DWORD *)(v6 + 12) = *((_DWORD *)v7 + 6);
    *(_BYTE *)(v6 + 16) = 62;
    *(_BYTE *)(v6 + 17) = *((_DWORD *)v7 + 2);
    v6 += 20;
  }
  while ( v3 != 336 );
  v21 = 0;
  v22 = 0;
  v23 = 0;
  CSphere::Set((CSphere *)(v2 + 24), 1.5, (const CVector *)&v21);
  v21 = -1090519040;
  v22 = -1090519040;
  v23 = -1080452710;
  v20[0] = 1056964608;
  v20[1] = 1056964608;
  v20[2] = 1067030938;
  CBox::Set((CBox *)v2, (const CVector *)&v21, (const CVector *)v20);
  *(_BYTE *)(v2 + 40) = 0;
  result = a1;
  *(_DWORD *)(a1 + 76) = v2;
  return result;
}


// ============================================================

// Address: 0x38682c
// Original: _ZN13CPedModelInfo14DeleteRwObjectEv
// Demangled: CPedModelInfo::DeleteRwObject(void)
int __fastcall CPedModelInfo::DeleteRwObject(CColModel **this)
{
  CColModel *v2; // r0
  void *v3; // r0
  int result; // r0

  CClumpModelInfo::DeleteRwObject((CClumpModelInfo *)this);
  v2 = this[19];
  if ( v2 )
  {
    CColModel::~CColModel(v2);
    CColModel::operator delete(v3);
  }
  result = 0;
  this[19] = 0;
  return result;
}


// ============================================================

// Address: 0x3868e4
// Original: _ZN13CPedModelInfo14AddXtraAtomicsEP7RpClump
// Demangled: CPedModelInfo::AddXtraAtomics(RpClump *)
void CPedModelInfo::AddXtraAtomics()
{
  ;
}


// ============================================================

// Address: 0x3868e6
// Original: _ZN13CPedModelInfo14SetFaceTextureEP9RwTexture
// Demangled: CPedModelInfo::SetFaceTexture(RwTexture *)
void CPedModelInfo::SetFaceTexture()
{
  ;
}


// ============================================================

// Address: 0x386908
// Original: _ZN13CPedModelInfo25AnimatePedColModelSkinnedEP7RpClump
// Demangled: CPedModelInfo::AnimatePedColModelSkinned(RpClump *)
int __fastcall CPedModelInfo::AnimatePedColModelSkinned(int a1)
{
  int v2; // r0
  int v3; // r11
  int *v4; // r8
  __int64 v5; // d16
  __int64 v6; // d17
  __int64 v7; // d19
  __int64 v8; // d20
  __int64 v9; // d21
  __int64 v10; // d22
  __int64 v11; // d23
  double v12; // d16
  int v13; // r0
  __int64 v14; // d19
  __int64 v15; // d20
  __int64 v16; // d21
  __int64 v17; // d16
  __int64 v18; // d17
  __int64 v19; // d22
  __int64 v20; // d23
  CBox *v21; // r0
  int v23; // [sp+10h] [bp-50h]
  __int64 *v24; // [sp+14h] [bp-4Ch]
  _QWORD *v25; // [sp+1Ch] [bp-44h]
  float v26[3]; // [sp+20h] [bp-40h] BYREF
  float v27[3]; // [sp+2Ch] [bp-34h] BYREF
  double v28; // [sp+38h] [bp-28h] BYREF
  float v29; // [sp+40h] [bp-20h]

  v2 = *(_DWORD *)(a1 + 76);
  if ( v2 )
  {
    v23 = *(_DWORD *)(v2 + 44);
    GetAnimHierarchyFromSkinClump();
    v25 = (_QWORD *)CGame::m_pWorkingMatrix2;
    v24 = (__int64 *)CGame::m_pWorkingMatrix1;
    RwMatrixInvert();
    v3 = 0;
    v4 = &dword_68685C;
    do
    {
      v28 = *(double *)v4;
      v29 = *((float *)v4 + 2);
      v5 = *v24;
      v6 = v24[1];
      v7 = v24[7];
      v8 = v24[4];
      v9 = v24[5];
      v10 = v24[2];
      v11 = v24[3];
      v25[6] = v24[6];
      v25[7] = v7;
      v25[4] = v8;
      v25[5] = v9;
      *v25 = v5;
      v25[1] = v6;
      v25[2] = v10;
      v25[3] = v11;
      RpHAnimHierarchyGetMatrixArray();
      RpHAnimIDGetIndex();
      RwMatrixTransform();
      RwV3dTransformPoints(&v28, &v28, 1, v25);
      v4 += 7;
      v12 = v28;
      v13 = *(_DWORD *)(v23 + 8) + v3;
      v3 += 20;
      *(float *)(v13 + 8) = v29;
      *(double *)v13 = v12;
    }
    while ( v3 != 240 );
    v28 = 0.0;
    v29 = 0.0;
    v14 = v24[7];
    v15 = v24[4];
    v16 = v24[5];
    v17 = *v24;
    v18 = v24[1];
    v19 = v24[2];
    v20 = v24[3];
    v25[6] = v24[6];
    v25[7] = v14;
    v25[4] = v15;
    v25[5] = v16;
    *v25 = v17;
    v25[1] = v18;
    v25[2] = v19;
    v25[3] = v20;
    RpHAnimIDGetIndex();
    RpHAnimHierarchyGetMatrixArray();
    RwMatrixTransform();
    RwV3dTransformPoints(&v28, &v28, 1, v25);
    CSphere::Set((CSphere *)(*(_DWORD *)(a1 + 76) + 24), 1.5, (const CVector *)&v28);
    v21 = *(CBox **)(a1 + 76);
    v27[0] = *(float *)&v28 + -1.2;
    v27[1] = *((float *)&v28 + 1) + -1.2;
    v27[2] = v29 + -1.2;
    v26[1] = *((float *)&v28 + 1) + 1.2;
    v26[0] = *(float *)&v28 + 1.2;
    v26[2] = v29 + 1.2;
    CBox::Set(v21, (const CVector *)v27, (const CVector *)v26);
  }
  else
  {
    CPedModelInfo::CreateHitColModelSkinned();
  }
  return *(_DWORD *)(a1 + 76);
}


// ============================================================

// Address: 0x386ad4
// Original: _ZN13CPedModelInfo30AnimatePedColModelSkinnedWorldEP7RpClump
// Demangled: CPedModelInfo::AnimatePedColModelSkinnedWorld(RpClump *)
int __fastcall CPedModelInfo::AnimatePedColModelSkinnedWorld(int a1)
{
  int v2; // r0
  int v3; // r9
  int v4; // r5
  int *v5; // r6
  int MatrixArray; // r4
  int v7; // r0
  double v8; // d16
  int v9; // r0
  int v10; // r6
  int v11; // r0
  CBox *v12; // r0
  float v14[3]; // [sp+0h] [bp-40h] BYREF
  float v15[3]; // [sp+Ch] [bp-34h] BYREF
  double v16; // [sp+18h] [bp-28h] BYREF
  float v17; // [sp+20h] [bp-20h]

  v2 = *(_DWORD *)(a1 + 76);
  if ( !v2 )
  {
    CPedModelInfo::CreateHitColModelSkinned();
    v2 = *(_DWORD *)(a1 + 76);
  }
  v3 = *(_DWORD *)(v2 + 44);
  GetAnimHierarchyFromSkinClump();
  v4 = 0;
  v5 = &dword_68685C;
  do
  {
    v16 = *(double *)v5;
    v17 = *((float *)v5 + 2);
    MatrixArray = RpHAnimHierarchyGetMatrixArray();
    v7 = RpHAnimIDGetIndex();
    RwV3dTransformPoints(&v16, &v16, 1, MatrixArray + (v7 << 6));
    v5 += 7;
    v8 = v16;
    v9 = *(_DWORD *)(v3 + 8) + v4;
    v4 += 20;
    *(float *)(v9 + 8) = v17;
    *(double *)v9 = v8;
  }
  while ( v4 != 240 );
  v16 = 0.0;
  v17 = 0.0;
  v10 = RpHAnimIDGetIndex();
  v11 = RpHAnimHierarchyGetMatrixArray();
  RwV3dTransformPoints(&v16, &v16, 1, v11 + (v10 << 6));
  CSphere::Set((CSphere *)(*(_DWORD *)(a1 + 76) + 24), 1.5, (const CVector *)&v16);
  v12 = *(CBox **)(a1 + 76);
  v15[0] = *(float *)&v16 + -1.2;
  v15[1] = *((float *)&v16 + 1) + -1.2;
  v15[2] = v17 + -1.2;
  v14[1] = *((float *)&v16 + 1) + 1.2;
  v14[0] = *(float *)&v16 + 1.2;
  v14[2] = v17 + 1.2;
  CBox::Set(v12, (const CVector *)v15, (const CVector *)v14);
  return *(_DWORD *)(a1 + 76);
}


// ============================================================

// Address: 0x386bf8
// Original: _ZN13CPedModelInfo14IncrementVoiceEv
// Demangled: CPedModelInfo::IncrementVoice(void)
__int16 *__fastcall CPedModelInfo::IncrementVoice(__int16 *this, int a2, int a3, int a4)
{
  int v4; // r1
  __int16 v5; // r2
  bool v6; // nf
  __int16 v7; // r2

  v4 = this[43];
  v5 = -1;
  v6 = v4 < 0;
  if ( v4 >= 0 )
  {
    a4 = this[44];
    v6 = a4 < 0;
  }
  if ( v6 )
    goto LABEL_9;
  v7 = this[45] + 1;
  this[45] = v7;
  if ( v7 > a4 )
  {
    v5 = v4;
LABEL_9:
    this[45] = v5;
    return this;
  }
  if ( v7 < v4 )
    this[45] = v4;
  return this;
}


// ============================================================

// Address: 0x386c30
// Original: _ZN13CPedModelInfoD2Ev
// Demangled: CPedModelInfo::~CPedModelInfo()
void __fastcall CPedModelInfo::~CPedModelInfo(CPedModelInfo *this)
{
  CColModel *v2; // r0
  void *v3; // r0

  v2 = (CColModel *)*((_DWORD *)this + 19);
  *(_DWORD *)this = &off_667668;
  if ( v2 )
  {
    CColModel::~CColModel(v2);
    CColModel::operator delete(v3);
  }
}


// ============================================================

// Address: 0x386c54
// Original: _ZN13CPedModelInfoD0Ev
// Demangled: CPedModelInfo::~CPedModelInfo()
void __fastcall CPedModelInfo::~CPedModelInfo(CPedModelInfo *this)
{
  CColModel *v2; // r0
  void *v3; // r0

  v2 = (CColModel *)*((_DWORD *)this + 19);
  *(_DWORD *)this = &off_667668;
  if ( v2 )
  {
    CColModel::~CColModel(v2);
    CColModel::operator delete(v3);
  }
  operator delete(this);
}


// ============================================================

// Address: 0x386c80
// Original: _ZN13CPedModelInfo12GetModelTypeEv
// Demangled: CPedModelInfo::GetModelType(void)
int __fastcall CPedModelInfo::GetModelType(CPedModelInfo *this)
{
  return 7;
}


// ============================================================
