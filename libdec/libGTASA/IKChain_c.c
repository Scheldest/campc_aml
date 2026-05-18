
// Address: 0x18f7a8
// Original: j__ZN9IKChain_c4InitEPciP4CPedi5RwV3diP7CEntityiS3_fi
// Demangled: IKChain_c::Init(char *,int,CPed *,int,RwV3d,int,CEntity *,int,RwV3d,float,int)
// attributes: thunk
int __fastcall IKChain_c::Init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        float a15,
        int a16)
{
  return _ZN9IKChain_c4InitEPciP4CPedi5RwV3diP7CEntityiS3_fi(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16);
}


// ============================================================

// Address: 0x190f58
// Original: j__ZN9IKChain_c8SetBlendEf
// Demangled: IKChain_c::SetBlend(float)
// attributes: thunk
int __fastcall IKChain_c::SetBlend(IKChain_c *this, float a2)
{
  return _ZN9IKChain_c8SetBlendEf(this, a2);
}


// ============================================================

// Address: 0x193728
// Original: j__ZN9IKChain_c6UpdateEf
// Demangled: IKChain_c::Update(float)
// attributes: thunk
int __fastcall IKChain_c::Update(IKChain_c *this, float a2)
{
  return _ZN9IKChain_c6UpdateEf(this, a2);
}


// ============================================================

// Address: 0x196d48
// Original: j__ZN9IKChain_c10SetupBonesEi5RwV3diP18AnimBlendFrameData
// Demangled: IKChain_c::SetupBones(int,RwV3d,int,AnimBlendFrameData *)
// attributes: thunk
int __fastcall IKChain_c::SetupBones(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return _ZN9IKChain_c10SetupBonesEi5RwV3diP18AnimBlendFrameData(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x197760
// Original: j__ZN9IKChain_c17MoveBonesToTargetEv
// Demangled: IKChain_c::MoveBonesToTarget(void)
// attributes: thunk
int __fastcall IKChain_c::MoveBonesToTarget(IKChain_c *this)
{
  return _ZN9IKChain_c17MoveBonesToTargetEv(this);
}


// ============================================================

// Address: 0x197c04
// Original: j__ZN9IKChain_c12UpdateTargetEh
// Demangled: IKChain_c::UpdateTarget(uchar)
// attributes: thunk
int __fastcall IKChain_c::UpdateTarget(IKChain_c *this, unsigned __int8 a2)
{
  return _ZN9IKChain_c12UpdateTargetEh(this, a2);
}


// ============================================================

// Address: 0x19da34
// Original: j__ZN9IKChain_c11ClampLimitsEihhhi
// Demangled: IKChain_c::ClampLimits(int,uchar,uchar,uchar,int)
// attributes: thunk
int __fastcall IKChain_c::ClampLimits(
        IKChain_c *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        int a6)
{
  return _ZN9IKChain_c11ClampLimitsEihhhi(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19f6cc
// Original: j__ZN9IKChain_c12UpdateEntityEP7CEntity
// Demangled: IKChain_c::UpdateEntity(CEntity *)
// attributes: thunk
int __fastcall IKChain_c::UpdateEntity(IKChain_c *this, CEntity *a2)
{
  return _ZN9IKChain_c12UpdateEntityEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x1a0aec
// Original: j__ZN9IKChain_c12UpdateOffsetEi5RwV3d
// Demangled: IKChain_c::UpdateOffset(int,RwV3d)
// attributes: thunk
int __fastcall IKChain_c::UpdateOffset(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN9IKChain_c12UpdateOffsetEi5RwV3d(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x4d26a8
// Original: _ZN9IKChain_cC2Ev
// Demangled: IKChain_c::IKChain_c(void)
// attributes: thunk
void __fastcall IKChain_c::IKChain_c(IKChain_c *this)
{
  sub_18E20C(this);
}


// ============================================================

// Address: 0x4d26ac
// Original: _ZN9IKChain_cD2Ev
// Demangled: IKChain_c::~IKChain_c()
// attributes: thunk
void __fastcall IKChain_c::~IKChain_c(IKChain_c *this)
{
  j_ListItem_c::~ListItem_c(this);
}


// ============================================================

// Address: 0x4d26b0
// Original: _ZN9IKChain_c4InitEPciP4CPedi5RwV3diP7CEntityiS3_fi
// Demangled: IKChain_c::Init(char *,int,CPed *,int,RwV3d,int,CEntity *,int,RwV3d,float,int)
int __fastcall IKChain_c::Init(
        int a1,
        int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        CEntity *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        float a15,
        char a16)
{
  CEntity **v18; // r6
  _BYTE *v19; // r5
  int v20; // r0
  int result; // r0
  int v22; // r2
  int v23; // r3
  int v24; // [sp+0h] [bp-38h]

  *(_DWORD *)(a1 + 8) = a4;
  v18 = (CEntity **)(a1 + 8);
  v19 = *(_BYTE **)(*(_DWORD *)(*(_DWORD *)(a4 + 24) + ClumpOffset) + 16);
  if ( (*v19 & 0xA0) != 0x80 )
    return 0;
  if ( (*(_BYTE *)(a4 + 1167) & 0x20) == 0 )
    return 0;
  GetAnimHierarchyFromSkinClump();
  v20 = *(_DWORD *)&v19[24 * RpHAnimIDGetIndex() + 16];
  if ( *(float *)(v20 + 16) == 0.0 && *(float *)(v20 + 20) == 0.0 )
    return 0;
  CEntity::RegisterReference(*(CEntity **)(a1 + 8), v18);
  *(_DWORD *)(a1 + 16) = 0;
  IKChain_c::SetupBones(a1, a5, v22, v23, v24, a9, (int)v19);
  *(_DWORD *)(a1 + 48) = a10;
  *(_WORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = a6;
  *(_DWORD *)(a1 + 36) = a7;
  *(_DWORD *)(a1 + 40) = a8;
  if ( a10 )
    CEntity::RegisterReference(a10, (CEntity **)(a1 + 48));
  *(_DWORD *)(a1 + 52) = a11;
  *(_DWORD *)(a1 + 56) = a12;
  *(_DWORD *)(a1 + 60) = a13;
  *(_DWORD *)(a1 + 64) = a14;
  result = 1;
  *(float *)(a1 + 68) = a15;
  *(_BYTE *)(a1 + 85) = a3;
  *(_BYTE *)(a1 + 84) = 1;
  *(_BYTE *)(a1 + 86) = a16;
  return result;
}


// ============================================================

// Address: 0x4d27b4
// Original: _ZN9IKChain_c10SetupBonesEi5RwV3diP18AnimBlendFrameData
// Demangled: IKChain_c::SetupBones(int,RwV3d,int,AnimBlendFrameData *)
int __fastcall IKChain_c::SetupBones(int a1, BoneNode_c *a2, int a3, int a4, int a5, BoneNode_c *a6)
{
  int v8; // r6
  int BoneNode; // r6
  int v10; // r0
  signed int v11; // r5
  __int64 v12; // r0
  int result; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r5
  int v17; // r3
  bool v18; // cc
  int v19; // r2
  int v20; // r6
  BoneNode_c *v21; // r0
  _DWORD v22[39]; // [sp+4h] [bp-9Ch] BYREF

  *(_DWORD *)(a1 + 12) = 0;
  GetAnimHierarchyFromSkinClump();
  v8 = RpHAnimIDGetIndex();
  *(_DWORD *)(a1 + 20) = RpHAnimHierarchyGetMatrixArray() + (v8 << 6);
  for ( *(_WORD *)(a1 + 44) = (_WORD)a6;
        a2 != a6;
        a2 = (BoneNode_c *)BoneNodeManager_c::ms_boneInfos[20 * BoneNode_c::GetIdFromBoneTag(a2, (int)v22) + 1] )
  {
    BoneNode = BoneNodeManager_c::GetBoneNode((BoneNodeManager_c *)&g_boneNodeMan);
    RpHAnimIDGetIndex();
    BoneNode_c::Init();
    v10 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = v10 + 1;
    v22[v10] = BoneNode;
  }
  v11 = *(_DWORD *)(a1 + 12);
  v12 = 4LL * (unsigned int)v11;
  if ( !is_mul_ok(4u, v11) )
    HIDWORD(v12) = 1;
  if ( HIDWORD(v12) )
    LODWORD(v12) = -1;
  result = operator new[](v12);
  *(_DWORD *)(a1 + 16) = result;
  if ( v11 >= 1 )
  {
    v14 = v22[0];
    *(_DWORD *)result = v22[0];
    v15 = *(_DWORD *)(a1 + 12);
    if ( v15 >= 2 )
    {
      v14 = (int)v22;
      for ( result = 1; result < v15; ++result )
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * result) = v22[result];
        v15 = *(_DWORD *)(a1 + 12);
      }
    }
    if ( v15 >= 1 )
    {
      v16 = 0;
      do
      {
        v14 = BoneNodeManager_c::ms_boneInfos[20
                                            * BoneNode_c::GetIdFromBoneTag(
                                                *(BoneNode_c **)(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * v16) + 8),
                                                v14)
                                            + 1];
        v18 = v14 < 0;
        if ( v14 >= 0 )
        {
          v17 = *(_DWORD *)(a1 + 12);
          v18 = v17 < 1;
        }
        if ( !v18 )
        {
          v19 = *(_DWORD *)(a1 + 16);
          v20 = 0;
          while ( 1 )
          {
            v21 = *(BoneNode_c **)(v19 + 4 * v20);
            if ( *((_DWORD *)v21 + 2) == v14 )
              break;
            if ( ++v20 >= v17 )
              goto LABEL_22;
          }
          if ( v21 )
            BoneNode_c::AddChild(v21, *(BoneNode_c **)(v19 + 4 * v16));
        }
LABEL_22:
        result = *(_DWORD *)(a1 + 12);
        ++v16;
      }
      while ( v16 < result );
    }
  }
  return result;
}


// ============================================================

// Address: 0x4d2910
// Original: _ZN9IKChain_c4ExitEv
// Demangled: IKChain_c::Exit(void)
int __fastcall IKChain_c::Exit(IKChain_c *this)
{
  BoneNode_c **v2; // r0
  __int64 v3; // kr00_8
  int v4; // r6
  int result; // r0

  v3 = *(_QWORD *)((char *)this + 12);
  v2 = (BoneNode_c **)*((_DWORD *)this + 4);
  if ( (int)v3 >= 1 )
  {
    v4 = 0;
    do
    {
      BoneNodeManager_c::ReturnBoneNode((BoneNodeManager_c *)&g_boneNodeMan, v2[v4]);
      v2 = (BoneNode_c **)*((_DWORD *)this + 4);
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 3) );
  }
  if ( v2 )
    operator delete[](v2);
  result = 0;
  *((_DWORD *)this + 4) = 0;
  return result;
}


// ============================================================

// Address: 0x4d2954
// Original: _ZN9IKChain_c6UpdateEf
// Demangled: IKChain_c::Update(float)
int __fastcall IKChain_c::Update(IKChain_c *this, float a2)
{
  int MatrixArray; // r6
  int result; // r0
  int i; // r5

  GetAnimHierarchyFromSkinClump();
  MatrixArray = RpHAnimHierarchyGetMatrixArray();
  *((_DWORD *)this + 5) = MatrixArray + (RpHAnimIDGetIndex() << 6);
  BoneNode_c::CalcWldMat();
  IKChain_c::MoveBonesToTarget(this);
  result = *((_DWORD *)this + 3);
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      BoneNode_c::BlendKeyframe(*(BoneNode_c **)(*((_DWORD *)this + 4) + 4 * i), *((float *)this + 6));
      result = *((_DWORD *)this + 3);
    }
  }
  return result;
}


// ============================================================

// Address: 0x4d29b8
// Original: _ZN9IKChain_c17MoveBonesToTargetEv
// Demangled: IKChain_c::MoveBonesToTarget(void)
int __fastcall IKChain_c::MoveBonesToTarget(IKChain_c *this)
{
  float *v2; // r10
  int v3; // r0
  int v4; // r0
  int v5; // r5
  float v6; // s2
  float v7; // s4
  __int64 v8; // d16
  int result; // r0
  float *v10; // r8
  int i; // r9
  float v12; // s30
  float v13; // s17
  float *v14; // r11
  float v15; // s19
  float v16; // s28
  float v17; // s26
  float v18; // s24
  float v19; // s2
  float v20; // s4
  float *v21; // r6
  float v22; // r8
  float v23; // s24
  float v24; // s26
  float v25; // s24
  float v26; // s8
  float v27; // s8
  char v28[12]; // [sp+4h] [bp-BCh] BYREF
  float v29; // [sp+10h] [bp-B0h]
  float v30; // [sp+14h] [bp-ACh]
  float v31; // [sp+18h] [bp-A8h]
  float v32; // [sp+1Ch] [bp-A4h]
  float v33; // [sp+20h] [bp-A0h]
  float v34; // [sp+24h] [bp-9Ch]
  float v35; // [sp+28h] [bp-98h]
  float v36; // [sp+2Ch] [bp-94h]
  float v37; // [sp+30h] [bp-90h]
  float v38; // [sp+34h] [bp-8Ch]
  float v39; // [sp+38h] [bp-88h]
  float v40; // [sp+3Ch] [bp-84h]
  float v41; // [sp+40h] [bp-80h]
  float v42; // [sp+44h] [bp-7Ch]
  float v43; // [sp+48h] [bp-78h]
  float v44; // [sp+4Ch] [bp-74h]
  float v45; // [sp+50h] [bp-70h]
  float v46; // [sp+54h] [bp-6Ch]
  float v47; // [sp+58h] [bp-68h]
  float v48; // [sp+5Ch] [bp-64h]

  v2 = (float *)**((_DWORD **)this + 4);
  if ( *((_BYTE *)this + 84) )
  {
    v3 = *((_DWORD *)this + 12);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 24);
      if ( v4 )
        v5 = *(_DWORD *)(v4 + 4) + 16;
      else
        v5 = 0;
      TestMatrix(v5);
      if ( *((_DWORD *)this + 13) == -1 )
      {
        if ( v5 )
          RwV3dTransformPoint();
      }
      else
      {
        CPed::GetBonePosition(*((CEntity **)this + 12));
        if ( v5 )
        {
          TestMatrix(v5);
          RwV3dTransformVector();
          v6 = *((float *)this + 19) + v34;
          v7 = *((float *)this + 20) + v35;
          *((float *)this + 18) = *((float *)this + 18) + v33;
          *((float *)this + 19) = v6;
          *((float *)this + 20) = v7;
        }
      }
    }
    else
    {
      v8 = *((_QWORD *)this + 7);
      *((_DWORD *)this + 20) = *((_DWORD *)this + 16);
      *((_QWORD *)this + 9) = v8;
    }
  }
  result = *((_DWORD *)this + 3);
  if ( result >= 1 )
  {
    v10 = v2 + 15;
    for ( i = 0; i < result; ++i )
    {
      v12 = v2[27];
      v13 = v2[28];
      v14 = *(float **)(*((_DWORD *)this + 4) + 4 * i);
      v15 = v2[29];
      v16 = v14[27];
      v17 = v14[28];
      v18 = v14[29];
      RwV3dTransformVector();
      v46 = (float)(v12 + v43) - v16;
      v47 = (float)(v13 + v44) - v17;
      v48 = (float)(v15 + v45) - v18;
      if ( COERCE_FLOAT(RwV3dLength()) > 0.00001 )
      {
        RwV3dNormalize();
        v19 = *((float *)this + 19);
        v20 = *((float *)this + 20);
        v40 = *((float *)this + 18) - v16;
        v41 = v19 - v17;
        v42 = v20 - v18;
        if ( COERCE_FLOAT(RwV3dLength()) > 0.00001 )
        {
          RwV3dNormalize();
          if ( (float)((float)((float)(v40 * v46) + (float)(v41 * v47)) + (float)(v42 * v48)) < 0.997 )
          {
            v21 = v10;
            v22 = acosf((float)((float)(v40 * v46) + (float)(v41 * v47)) + (float)(v42 * v48));
            v23 = *((float *)this + 17);
            v24 = COERCE_FLOAT(BoneNode_c::GetSpeed((BoneNode_c *)v14));
            v37 = (float)(v47 * v42) - (float)(v48 * v41);
            v38 = (float)(v48 * v40) - (float)(v46 * v42);
            v39 = (float)(v46 * v41) - (float)(v47 * v40);
            RtQuatConvertFromMatrix();
            v25 = (float)((float)(v22 * 57.296) * v23) * v24;
            v10 = v21;
            v26 = (float)(v36 * v36) + (float)((float)((float)(v33 * v33) + (float)(v34 * v34)) + (float)(v35 * v35));
            if ( v26 > 0.0 )
            {
              v27 = 1.0 / v26;
              v29 = -(float)(v27 * v33);
              v32 = v36 * v27;
              v30 = -(float)(v27 * v34);
              v31 = -(float)(v27 * v35);
            }
            RtQuatTransformVectors();
            RtQuatRotate(v14 + 4, v28, LODWORD(v25), 2);
            BoneNode_c::Limit((BoneNode_c *)v14, *((float *)this + 6));
            BoneNode_c::CalcWldMat();
          }
        }
      }
      result = *((_DWORD *)this + 3);
    }
  }
  return result;
}


// ============================================================

// Address: 0x4d2cc0
// Original: _ZN9IKChain_c8SetBlendEf
// Demangled: IKChain_c::SetBlend(float)
int __fastcall IKChain_c::SetBlend(int this, float a2)
{
  *(float *)(this + 24) = a2;
  return this;
}


// ============================================================

// Address: 0x4d2cc4
// Original: _ZN9IKChain_c16SetOffsetBoneTagEi
// Demangled: IKChain_c::SetOffsetBoneTag(int)
int __fastcall IKChain_c::SetOffsetBoneTag(int this, int a2)
{
  *(_DWORD *)(this + 52) = a2;
  return this;
}


// ============================================================

// Address: 0x4d2cc8
// Original: _ZN9IKChain_c12SetOffsetPosE5RwV3d
// Demangled: IKChain_c::SetOffsetPos(RwV3d)
_DWORD *__fastcall IKChain_c::SetOffsetPos(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)(a1 + 56);
  *v4 = a2;
  v4[1] = a3;
  v4[2] = a4;
  return v4 + 3;
}


// ============================================================

// Address: 0x4d2cce
// Original: _ZN9IKChain_c11ClampLimitsEihhhi
// Demangled: IKChain_c::ClampLimits(int,uchar,uchar,uchar,int)
int __fastcall IKChain_c::ClampLimits(
        IKChain_c *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        int a6)
{
  int v6; // r4
  int v7; // r8
  int v8; // r6
  BoneNode_c *v9; // r0

  v6 = *((_DWORD *)this + 3);
  if ( v6 < 1 )
  {
LABEL_5:
    v9 = 0;
  }
  else
  {
    v7 = *((_DWORD *)this + 4);
    v8 = 0;
    while ( 1 )
    {
      v9 = *(BoneNode_c **)(v7 + 4 * v8);
      if ( *((_DWORD *)v9 + 2) == a2 )
        break;
      if ( ++v8 >= v6 )
        goto LABEL_5;
    }
  }
  if ( a6 )
    return sub_19A79C(v9, a3, a4, a5);
  else
    return sub_18BD80(v9, a3, a4, a5);
}


// ============================================================

// Address: 0x4d2d1c
// Original: _ZN9IKChain_c18GetBoneNodeFromTagEi
// Demangled: IKChain_c::GetBoneNodeFromTag(int)
int __fastcall IKChain_c::GetBoneNodeFromTag(IKChain_c *this, int a2)
{
  int v2; // lr
  int result; // r0
  int v4; // r12
  int v5; // r3

  v2 = *((_DWORD *)this + 3);
  if ( v2 < 1 )
    return 0;
  v4 = *((_DWORD *)this + 4);
  v5 = 0;
  while ( 1 )
  {
    result = *(_DWORD *)(v4 + 4 * v5);
    if ( *(_DWORD *)(result + 8) == a2 )
      break;
    if ( ++v5 >= v2 )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x4d2d4a
// Original: _ZN9IKChain_c9GetLimitsEiiPfS0_
// Demangled: IKChain_c::GetLimits(int,int,float *,float *)
int __fastcall IKChain_c::GetLimits(IKChain_c *this, int a2, int a3, float *a4, float *a5)
{
  int v5; // lr
  int v6; // r4
  int v7; // r5
  BoneNode_c *v8; // r0

  v5 = *((_DWORD *)this + 3);
  if ( v5 < 1 )
  {
LABEL_5:
    v8 = 0;
  }
  else
  {
    v6 = *((_DWORD *)this + 4);
    v7 = 0;
    while ( 1 )
    {
      v8 = *(BoneNode_c **)(v6 + 4 * v7);
      if ( *((_DWORD *)v8 + 2) == a2 )
        break;
      if ( ++v7 >= v5 )
        goto LABEL_5;
    }
  }
  return j_BoneNode_c::GetLimits(v8, a3, a4, a5);
}


// ============================================================

// Address: 0x4d2d88
// Original: _ZN9IKChain_c9SetLimitsEiiff
// Demangled: IKChain_c::SetLimits(int,int,float,float)
int __fastcall IKChain_c::SetLimits(IKChain_c *this, int a2, int a3, float a4, float a5)
{
  int v5; // r12
  int v6; // lr
  int v7; // r4
  BoneNode_c *v8; // r0

  v5 = *((_DWORD *)this + 3);
  if ( v5 < 1 )
  {
LABEL_5:
    v8 = 0;
  }
  else
  {
    v6 = *((_DWORD *)this + 4);
    v7 = 0;
    while ( 1 )
    {
      v8 = *(BoneNode_c **)(v6 + 4 * v7);
      if ( *((_DWORD *)v8 + 2) == a2 )
        break;
      if ( ++v7 >= v5 )
        goto LABEL_5;
    }
  }
  return sub_1A0D8C(v8, a3, a4, a5);
}


// ============================================================

// Address: 0x4d2dc4
// Original: _ZN9IKChain_c12GetBoneSpeedEi
// Demangled: IKChain_c::GetBoneSpeed(int)
int __fastcall IKChain_c::GetBoneSpeed(IKChain_c *this, int a2)
{
  int v2; // lr
  int v3; // r12
  int v4; // r3
  BoneNode_c *v5; // r0

  v2 = *((_DWORD *)this + 3);
  if ( v2 < 1 )
  {
LABEL_5:
    v5 = 0;
  }
  else
  {
    v3 = *((_DWORD *)this + 4);
    v4 = 0;
    while ( 1 )
    {
      v5 = *(BoneNode_c **)(v3 + 4 * v4);
      if ( *((_DWORD *)v5 + 2) == a2 )
        break;
      if ( ++v4 >= v2 )
        goto LABEL_5;
    }
  }
  return sub_18C334(v5);
}


// ============================================================

// Address: 0x4d2dfa
// Original: _ZN9IKChain_c12SetBoneSpeedEif
// Demangled: IKChain_c::SetBoneSpeed(int,float)
int __fastcall IKChain_c::SetBoneSpeed(IKChain_c *this, int a2, float a3)
{
  int v3; // lr
  int v4; // r12
  int v5; // r3
  BoneNode_c *v6; // r0

  v3 = *((_DWORD *)this + 3);
  if ( v3 < 1 )
  {
LABEL_5:
    v6 = 0;
  }
  else
  {
    v4 = *((_DWORD *)this + 4);
    v5 = 0;
    while ( 1 )
    {
      v6 = *(BoneNode_c **)(v4 + 4 * v5);
      if ( *((_DWORD *)v6 + 2) == a2 )
        break;
      if ( ++v5 >= v3 )
        goto LABEL_5;
    }
  }
  return sub_18F7E4(v6, a3);
}


// ============================================================

// Address: 0x4d2e2a
// Original: _ZN9IKChain_c11GetPriorityEv
// Demangled: IKChain_c::GetPriority(void)
int __fastcall IKChain_c::GetPriority(IKChain_c *this)
{
  return *((char *)this + 86);
}


// ============================================================

// Address: 0x4d2e30
// Original: _ZN9IKChain_c12UpdateEntityEP7CEntity
// Demangled: IKChain_c::UpdateEntity(CEntity *)
int __fastcall IKChain_c::UpdateEntity(int this, CEntity *a2)
{
  *(_DWORD *)(this + 48) = a2;
  if ( a2 )
    return j_CEntity::RegisterReference(a2, (CEntity **)(this + 48));
  return this;
}


// ============================================================

// Address: 0x4d2e44
// Original: _ZN9IKChain_c12UpdateOffsetEi5RwV3d
// Demangled: IKChain_c::UpdateOffset(int,RwV3d)
_DWORD *__fastcall IKChain_c::UpdateOffset(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // r0

  result = (_DWORD *)(a1 + 52);
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  return result;
}


// ============================================================

// Address: 0x4d2e50
// Original: _ZN9IKChain_c12UpdateTargetEh
// Demangled: IKChain_c::UpdateTarget(uchar)
int __fastcall IKChain_c::UpdateTarget(int this, unsigned __int8 a2)
{
  *(_BYTE *)(this + 84) = a2;
  return this;
}


// ============================================================

// Address: 0x4d2e58
// Original: _ZN9IKChain_c14IsFacingTargetEv
// Demangled: IKChain_c::IsFacingTarget(void)
bool __fastcall IKChain_c::IsFacingTarget(IKChain_c *this)
{
  float *v2; // r0
  float v3; // s16
  float v4; // s18
  float v5; // s20
  float v7; // [sp+0h] [bp-38h]
  float v8; // [sp+4h] [bp-34h]
  float v9; // [sp+8h] [bp-30h]
  float v10; // [sp+Ch] [bp-2Ch]
  float v11; // [sp+10h] [bp-28h]
  float v12; // [sp+14h] [bp-24h]

  v2 = (float *)**((_DWORD **)this + 4);
  v3 = v2[27];
  v4 = v2[28];
  v5 = v2[29];
  RwV3dTransformVector();
  RwV3dNormalize();
  v7 = *((float *)this + 18) - v3;
  v8 = *((float *)this + 19) - v4;
  v9 = *((float *)this + 20) - v5;
  RwV3dNormalize();
  return (float)((float)((float)(v7 * v10) + (float)(v8 * v11)) + (float)(v9 * v12)) >= 0.95
      && *((float *)this + 6) > 0.98;
}


// ============================================================

// Address: 0x4d2f1c
// Original: _ZN9IKChain_c10IsAtTargetEfPf
// Demangled: IKChain_c::IsAtTarget(float,float *)
bool __fastcall IKChain_c::IsAtTarget(IKChain_c *this, float a2, float *a3)
{
  float v6; // r0

  v6 = COERCE_FLOAT(RwV3dLength());
  if ( a3 )
    *a3 = v6;
  return v6 <= a2 && *((float *)this + 6) > 0.98;
}


// ============================================================
