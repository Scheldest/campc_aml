
// Address: 0x18a4e4
// Original: j__ZN15CProjectileInfo20RemoveAllProjectilesEv
// Demangled: CProjectileInfo::RemoveAllProjectiles(void)
// attributes: thunk
int __fastcall CProjectileInfo::RemoveAllProjectiles(CProjectileInfo *this)
{
  return _ZN15CProjectileInfo20RemoveAllProjectilesEv(this);
}


// ============================================================

// Address: 0x18c7cc
// Original: j__ZN15CProjectileInfo19IsProjectileInRangeEffffffb
// Demangled: CProjectileInfo::IsProjectileInRange(float,float,float,float,float,float,bool)
// attributes: thunk
int __fastcall CProjectileInfo::IsProjectileInRange(
        CProjectileInfo *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        bool a8)
{
  return _ZN15CProjectileInfo19IsProjectileInRangeEffffffb(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x18ee68
// Original: j__ZN15CProjectileInfo25RemoveIfThisIsAProjectileEP7CObject
// Demangled: CProjectileInfo::RemoveIfThisIsAProjectile(CObject *)
// attributes: thunk
int __fastcall CProjectileInfo::RemoveIfThisIsAProjectile(CProjectileInfo *this, CObject *a2)
{
  return _ZN15CProjectileInfo25RemoveIfThisIsAProjectileEP7CObject(this, a2);
}


// ============================================================

// Address: 0x18f760
// Original: j__ZN15CProjectileInfo16RemoveProjectileEPS_P11CProjectile
// Demangled: CProjectileInfo::RemoveProjectile(CProjectileInfo*,CProjectile *)
// attributes: thunk
int __fastcall CProjectileInfo::RemoveProjectile(CProjectileInfo *this, CProjectileInfo *a2, CProjectile *a3)
{
  return _ZN15CProjectileInfo16RemoveProjectileEPS_P11CProjectile(this, a2, a3);
}


// ============================================================

// Address: 0x19328c
// Original: j__ZN15CProjectileInfo10InitialiseEv
// Demangled: CProjectileInfo::Initialise(void)
// attributes: thunk
int __fastcall CProjectileInfo::Initialise(CProjectileInfo *this)
{
  return _ZN15CProjectileInfo10InitialiseEv(this);
}


// ============================================================

// Address: 0x1946cc
// Original: j__ZN15CProjectileInfo13AddProjectileEP7CEntity11eWeaponType7CVectorfPS3_S1_
// Demangled: CProjectileInfo::AddProjectile(CEntity *,eWeaponType,CVector,float,CVector*,CEntity *)
// attributes: thunk
int __fastcall CProjectileInfo::AddProjectile(
        CPed *this,
        float a2,
        int a3,
        int a4,
        int a5,
        float a6,
        int a7,
        CEntity *a8)
{
  return _ZN15CProjectileInfo13AddProjectileEP7CEntity11eWeaponType7CVectorfPS3_S1_(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x194ac4
// Original: j__ZN15CProjectileInfo26RemoveDetonatorProjectilesEv
// Demangled: CProjectileInfo::RemoveDetonatorProjectiles(void)
// attributes: thunk
int __fastcall CProjectileInfo::RemoveDetonatorProjectiles(CProjectileInfo *this)
{
  return _ZN15CProjectileInfo26RemoveDetonatorProjectilesEv(this);
}


// ============================================================

// Address: 0x197d88
// Original: j__ZN15CProjectileInfo12RemoveNotAddEP7CEntity11eWeaponType7CVector
// Demangled: CProjectileInfo::RemoveNotAdd(CEntity *,eWeaponType,CVector)
// attributes: thunk
int __fastcall CProjectileInfo::RemoveNotAdd(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN15CProjectileInfo12RemoveNotAddEP7CEntity11eWeaponType7CVector(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1a0bf8
// Original: j__ZN15CProjectileInfo8ShutdownEv
// Demangled: CProjectileInfo::Shutdown(void)
// attributes: thunk
int __fastcall CProjectileInfo::Shutdown(CProjectileInfo *this)
{
  return _ZN15CProjectileInfo8ShutdownEv(this);
}


// ============================================================

// Address: 0x1a0f7c
// Original: j__ZN15CProjectileInfo6UpdateEv
// Demangled: CProjectileInfo::Update(void)
// attributes: thunk
int __fastcall CProjectileInfo::Update(CProjectileInfo *this)
{
  return _ZN15CProjectileInfo6UpdateEv(this);
}


// ============================================================

// Address: 0x5d91b4
// Original: _ZN15CProjectileInfo10InitialiseEv
// Demangled: CProjectileInfo::Initialise(void)
int __fastcall CProjectileInfo::Initialise(CProjectileInfo *this)
{
  int v1; // r3
  int result; // r0
  char *v3; // r2

  v1 = 0;
  unk_A85030 = 0LL;
  unk_A85038 = 0LL;
  unk_A85020 = 0LL;
  unk_A85028 = 0LL;
  unk_A85010 = 0LL;
  unk_A85018 = 0LL;
  unk_A85000 = 0LL;
  unk_A85008 = 0LL;
  unk_A84FF0 = 0LL;
  unk_A84FF8 = 0LL;
  unk_A84FE0 = 0LL;
  unk_A84FE8 = 0LL;
  CProjectileInfo::ms_apProjectile = 0LL;
  unk_A84FC8 = 0LL;
  unk_A84FD0 = 0LL;
  unk_A84FD8 = 0LL;
  result = 0;
  do
  {
    *(_DWORD *)((char *)&gaProjectileInfo + v1) = 16;
    v3 = (char *)&gaProjectileInfo + v1;
    v1 += 36;
    *((_DWORD *)v3 + 1) = 0;
    *((_DWORD *)v3 + 3) = 0;
    v3[16] = 0;
    *((_DWORD *)v3 + 8) = 0;
  }
  while ( v1 != 1152 );
  return result;
}


// ============================================================

// Address: 0x5d9224
// Original: _ZN15CProjectileInfo14RemoveFXSystemEh
// Demangled: CProjectileInfo::RemoveFXSystem(uchar)
int __fastcall CProjectileInfo::RemoveFXSystem(int this, int a2)
{
  int v2; // r4
  FxSystem_c *v4; // r1

  v2 = this;
  v4 = *(FxSystem_c **)(this + 32);
  if ( v4 )
  {
    if ( a2 )
      FxManager_c::DestroyFxSystem((FxManager_c *)&g_fxMan, v4);
    else
      FxSystem_c::Kill(*(FxSystem_c **)(this + 32));
    this = 0;
    *(_DWORD *)(v2 + 32) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x5d9254
// Original: _ZN15CProjectileInfo8ShutdownEv
// Demangled: CProjectileInfo::Shutdown(void)
_UNKNOWN **__fastcall CProjectileInfo::Shutdown(CProjectileInfo *this)
{
  int v1; // r5
  _UNKNOWN **result; // r0
  FxSystem_c *v3; // r1

  v1 = 32;
  result = &gaProjectileInfo_ptr;
  do
  {
    v3 = *(FxSystem_c **)((char *)&gaProjectileInfo + v1);
    if ( v3 )
    {
      result = (_UNKNOWN **)FxManager_c::DestroyFxSystem((FxManager_c *)&g_fxMan, v3);
      *(_DWORD *)((char *)&gaProjectileInfo + v1) = 0;
    }
    v1 += 36;
  }
  while ( v1 != 1184 );
  return result;
}


// ============================================================

// Address: 0x5d92a0
// Original: _ZN15CProjectileInfo17GetProjectileInfoEi
// Demangled: CProjectileInfo::GetProjectileInfo(int)
char *__fastcall CProjectileInfo::GetProjectileInfo(CProjectileInfo *this, int a2)
{
  return (char *)&gaProjectileInfo + 36 * (_DWORD)this;
}


// ============================================================

// Address: 0x5d92b4
// Original: _ZN15CProjectileInfo13AddProjectileEP7CEntity11eWeaponType7CVectorfPS3_S1_
// Demangled: CProjectileInfo::AddProjectile(CEntity *,eWeaponType,CVector,float,CVector*,CEntity *)
int __fastcall CProjectileInfo::AddProjectile(
        CPed *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        int a7,
        CEntity *a8)
{
  float32x2_t v8; // d0
  float32x2_t v9; // d9
  float v10; // s20
  float v11; // s22
  float v12; // s16
  float v13; // r5
  int v14; // r9
  int v15; // r8
  float v16; // r6
  int v19; // r1
  float v20; // r1
  float v22; // r5
  float v23; // s22
  int v24; // r4
  int v25; // r0
  float v26; // s18
  char v27; // r2
  int v28; // r3
  float v29; // s22
  int v30; // r0
  float v31; // s16
  float v33; // r5
  int v34; // r0
  float v35; // s22
  float v36; // s20
  char *v37; // r1
  char v38; // r2
  int v39; // r11
  float v40; // r6
  float v41; // r0
  float v42; // s24
  float v43; // s28
  float v44; // s26
  float v45; // s20
  float v46; // r0
  float v47; // s2
  int v48; // r8
  char *v49; // r0
  int v50; // r12
  double v51; // kr00_8
  unsigned __int32 v52; // r4
  double v53; // d16
  int v54; // r0
  double v55; // d16
  float v56; // s24
  float v57; // s26
  float v58; // s28
  float v59; // r6
  float v60; // r0
  float v61; // s26
  float v62; // s24
  float v63; // s28
  float v64; // r4
  float v65; // r0
  CPlaceable **v66; // r4
  char *v67; // r0
  signed int v68; // r1
  char *v69; // r11
  int v70; // r2
  float v71; // r10
  float v72; // r9
  int v73; // r6
  int WeaponInfo; // r0
  unsigned int v75; // r1
  int v76; // r6
  unsigned __int16 *v77; // r5
  bool v78; // zf
  CColSphere *v79; // r0
  int v80; // r0
  int v81; // r0
  CPlaceable *v82; // r0
  CEntity **v83; // r1
  CPlaceable *v84; // r0
  int v85; // r1
  char *v86; // r2
  __int64 v87; // d16
  int v88; // r0
  FxSystem_c *FxSystem; // r0
  int v90; // r1
  int v91; // r0
  bool v92; // zf
  CRadar *v93; // r6
  int v94; // r2
  unsigned int v95; // r2
  CRadar *v96; // r0
  int v97; // r1
  int v98; // r4
  CEntity *v100; // [sp+10h] [bp-C8h]
  float v101; // [sp+14h] [bp-C4h]
  float v102; // [sp+14h] [bp-C4h]
  int v103; // [sp+14h] [bp-C4h]
  int v104; // [sp+18h] [bp-C0h]
  int v105; // [sp+18h] [bp-C0h]
  int v106; // [sp+18h] [bp-C0h]
  double v107; // [sp+28h] [bp-B0h] BYREF
  unsigned __int32 v108; // [sp+30h] [bp-A8h]
  double v109; // [sp+38h] [bp-A0h] BYREF
  unsigned __int32 v110; // [sp+40h] [bp-98h]
  double v111; // [sp+48h] [bp-90h]
  int v112; // [sp+50h] [bp-88h]
  double v113; // [sp+58h] [bp-80h]
  unsigned __int32 v114; // [sp+60h] [bp-78h]
  float v115; // [sp+68h] [bp-70h]
  float v116; // [sp+6Ch] [bp-6Ch]
  float v117; // [sp+70h] [bp-68h]
  int v118; // [sp+78h] [bp-60h]
  int v119; // [sp+7Ch] [bp-5Ch]

  v12 = 0.75;
  v13 = a2;
  v14 = LODWORD(a2) - 16;
  v15 = 0;
  v16 = a4;
  v19 = 2;
  v118 = 0;
  v119 = 0;
  switch ( v14 )
  {
    case 0:
    case 23:
      v12 = 0.5;
      v20 = v13;
      v22 = a4;
      v23 = (float)(a6 * 0.22) + 0.15;
      if ( a6 == 0.0 )
        v23 = 0.0;
      v101 = v20;
      if ( LODWORD(v20) == 39 )
        v23 = v23 * 0.5;
      v24 = CTimer::m_snTimeInMilliseconds;
      v25 = *((_DWORD *)this + 5);
      if ( v25 )
        v26 = atan2f(COERCE_FLOAT(*(_DWORD *)(v25 + 16) ^ 0x80000000), *(float *)(v25 + 20));
      else
        v26 = *((float *)this + 4);
      if ( (*((_BYTE *)this + 58) & 7) == 2 )
        v26 = COERCE_FLOAT(CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v26 + 3.1416), v20));
      CMatrix::SetTranslate((CMatrix *)&v109, 0.0, 0.0, 0.0);
      v40 = v26;
      CMatrix::RotateZ((CMatrix *)&v109, v26);
      v41 = v26;
      v42 = v115 + a3;
      v43 = v117 + a5;
      v44 = v116 + v22;
      v9.n64_f32[0] = (float)((float)(a6 * 0.4) + 0.4) * v23;
      v45 = cosf(v41);
      v46 = sinf(v40);
      v115 = v42;
      v10 = v23 * v45;
      v116 = v44;
      v117 = v43;
      if ( *((_WORD *)this + 19) == 405 )
      {
        v10 = v10 + *((float *)this + 19);
        v47 = *((float *)this + 18);
        v9.n64_f32[0] = v9.n64_f32[0] + *((float *)this + 20);
      }
      else
      {
        v47 = -0.0;
      }
      v13 = v101;
      LODWORD(a4) = v24 + 2000;
      v11 = v47 - (float)(v23 * v46);
      v19 = 2;
      if ( LODWORD(v101) == 39 )
        v12 = 0.03;
      v15 = 5;
      goto LABEL_54;
    case 1:
      v29 = (float)(a6 * 0.22) + 0.15;
      if ( a6 == 0.0 )
        v29 = 0.0;
      v30 = *((_DWORD *)this + 5);
      v104 = CTimer::m_snTimeInMilliseconds + 20000;
      if ( v30 )
        v31 = atan2f(COERCE_FLOAT(*(_DWORD *)(v30 + 16) ^ 0x80000000), *(float *)(v30 + 20));
      else
        v31 = *((float *)this + 4);
      CMatrix::SetTranslate((CMatrix *)&v109, 0.0, 0.0, 0.0);
      CMatrix::RotateZ((CMatrix *)&v109, v31);
      v56 = v117 + a5;
      v57 = v116 + v16;
      v58 = v115 + a3;
      v59 = sinf(v31);
      v60 = cosf(v31);
      v115 = v58;
      v116 = v57;
      v12 = 0.5;
      v117 = v56;
      v9.n64_f32[0] = (float)((float)(a6 * 0.4) + 0.4) * v29;
      v19 = 2;
      v10 = v29 * v60;
      v15 = 5;
      v11 = -(float)(v29 * v59);
      goto LABEL_53;
    case 2:
      v9.n64_u32[0] = 1045220557;
      v102 = v13;
      v33 = a4;
      v8.n64_f32[0] = (float)(a6 * 0.22) + 0.15;
      v34 = *((_DWORD *)this + 5);
      v105 = CTimer::m_snTimeInMilliseconds + 2000;
      LODWORD(v35) = vmax_f32(v8, v9).n64_u32[0];
      if ( v34 )
        v36 = atan2f(COERCE_FLOAT(*(_DWORD *)(v34 + 16) ^ 0x80000000), *(float *)(v34 + 20));
      else
        v36 = *((float *)this + 4);
      v15 = 0;
      CMatrix::SetTranslate((CMatrix *)&v109, 0.0, 0.0, 0.0);
      CMatrix::RotateZ((CMatrix *)&v109, v36);
      v61 = v116 + v33;
      v62 = v117 + a5;
      v63 = v115 + a3;
      v64 = sinf(v36);
      v65 = cosf(v36);
      v115 = v63;
      v116 = v61;
      v117 = v62;
      v9.n64_f32[0] = (float)((float)(a6 * 0.2) + 0.4) * v35;
      v10 = v35 * v65;
      v19 = 2;
      v11 = -(float)(v35 * v64);
      v13 = v102;
      a4 = *(float *)&v105;
      goto LABEL_54;
    case 3:
    case 4:
      v27 = *((_BYTE *)this + 58);
      v28 = 10000;
      if ( LODWORD(v13) == 19 )
        v28 = 3000;
      v104 = CTimer::m_snTimeInMilliseconds + v28;
      if ( (v27 & 7) == 3 )
      {
        if ( CPed::IsPlayer(this) == 1 )
        {
          *(float *)&v48 = a3;
          v49 = (char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF;
          v50 = *((_DWORD *)v49 + 184);
          v111 = *((double *)v49 + 91);
          v51 = *(double *)(v49 + 764);
          v52 = *((_DWORD *)v49 + 193);
          v112 = v50;
          v113 = v51;
          v114 = v52;
          CrossProduct((const CVector *)&v107, (const CVector *)(v49 + 764));
          v109 = v107;
          v110 = v108;
LABEL_44:
          v115 = *(float *)&v48;
          v116 = v16;
          v117 = a5;
          goto LABEL_52;
        }
      }
      else if ( (v27 & 7) == 2 )
      {
        if ( !*((_DWORD *)this + 5) )
        {
          CPlaceable::AllocateMatrix(this);
          CSimpleTransform::UpdateMatrix((CPed *)((char *)this + 4), *((CMatrix **)this + 5));
        }
        CMatrix::operator=();
        v115 = a3;
        v116 = v16;
        v117 = a5;
        goto LABEL_52;
      }
      if ( a7 )
      {
        v53 = *(double *)a7;
        *(float *)&v48 = a3;
        v112 = *(_DWORD *)(a7 + 8);
        v111 = v53;
        v54 = *((_DWORD *)this + 5);
        if ( !v54 )
        {
          CPlaceable::AllocateMatrix(this);
          CSimpleTransform::UpdateMatrix((CPed *)((char *)this + 4), *((CMatrix **)this + 5));
          v54 = *((_DWORD *)this + 5);
        }
        v55 = *(double *)v54;
        v110 = *(_DWORD *)(v54 + 8);
        v109 = v55;
        CrossProduct((const CVector *)&v107, (const CVector *)&v109);
        v114 = v108;
        v113 = v107;
        goto LABEL_44;
      }
      if ( !*((_DWORD *)this + 5) )
      {
        CPlaceable::AllocateMatrix(this);
        CSimpleTransform::UpdateMatrix((CPed *)((char *)this + 4), *((CMatrix **)this + 5));
      }
      CMatrix::operator=();
LABEL_52:
      v15 = 0;
      Multiply3x3((const CMatrix *)&v107, (const CVector *)&v109);
      v11 = *(float *)&v107;
      v19 = 0;
      v10 = *((float *)&v107 + 1);
      v9.n64_u32[0] = v108;
LABEL_53:
      a4 = *(float *)&v104;
LABEL_54:
      v103 = v19;
      v66 = (CPlaceable **)&unk_A84FBC;
      v67 = (char *)&unk_A84B1C;
      v68 = 0;
      do
      {
        v69 = v67 + 36;
        ++v66;
        v70 = v68 + 1;
        if ( v68 > 31 )
          break;
        ++v68;
        v78 = v67[52] == 0;
        v67 += 36;
      }
      while ( !v78 );
      if ( v70 == 33 )
      {
LABEL_97:
        v98 = 0;
      }
      else
      {
        v100 = this;
        v71 = v13;
        v106 = LODWORD(a4);
        switch ( v14 )
        {
          case 0:
          case 1:
          case 2:
          case 23:
            v72 = v13;
            v73 = CObject::operator new((CObject *)&elf_hash_bucket[34], v68);
            WeaponInfo = CWeaponInfo::GetWeaponInfo();
            CProjectile::CProjectile((CProjectile *)v73, *(_DWORD *)(WeaponInfo + 12));
            *v66 = (CPlaceable *)v73;
            if ( v73 )
            {
              v75 = *(__int16 *)(v73 + 38);
              v76 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v75]) + 44);
              v77 = *(unsigned __int16 **)(v76 + 44);
              if ( v77 )
              {
                v78 = *v77 == 0;
                if ( !*v77 )
                  v78 = *((_DWORD *)v77 + 2) == 0;
                if ( v78 )
                {
                  *v77 = 1;
                  v79 = (CColSphere *)CMemoryMgr::Malloc(0x14u, v75);
                  *((_DWORD *)v77 + 2) = v79;
                  CColSphere::Set(v79, *(float *)(v76 + 36) * 0.75, (const CVector *)(v76 + 24), 0x38u, 0, 0xFFu);
                }
              }
              else
              {
                CColModel::AllocateData(
                  *(CColModel **)(LODWORD(CModelInfo::ms_modelInfoPtrs[v75]) + 44),
                  1,
                  0,
                  0,
                  0,
                  0,
                  0);
                CColSphere::Set(
                  *(CColSphere **)(*(_DWORD *)(v76 + 44) + 8),
                  *(float *)(v76 + 36) * 0.75,
                  (const CVector *)(v76 + 24),
                  0x38u,
                  0,
                  0xFFu);
              }
              goto LABEL_72;
            }
            goto LABEL_74;
          case 3:
          case 4:
            v72 = v13;
            v73 = CObject::operator new((CObject *)&elf_hash_bucket[34], v68);
            v80 = CWeaponInfo::GetWeaponInfo();
            CProjectile::CProjectile((CProjectile *)v73, *(_DWORD *)(v80 + 12));
            *v66 = (CPlaceable *)v73;
            goto LABEL_74;
          case 5:
            v73 = CObject::operator new((CObject *)&elf_hash_bucket[34], v68);
            v81 = CWeaponInfo::GetWeaponInfo();
            CProjectile::CProjectile((CProjectile *)v73, *(_DWORD *)(v81 + 12));
            *v66 = (CPlaceable *)v73;
            goto LABEL_73;
          case 42:
            v73 = CObject::operator new((CObject *)&elf_hash_bucket[34], v68);
            CProjectile::CProjectile((CProjectile *)v73, (unsigned __int16)MI_FLARE);
            *v66 = (CPlaceable *)v73;
            if ( !v73 )
              goto LABEL_73;
            *(_DWORD *)(v73 + 156) = 1063675494;
LABEL_72:
            v73 = (int)*v66;
LABEL_73:
            v72 = v71;
LABEL_74:
            if ( !v73 )
              goto LABEL_97;
            *(float *)v69 = v72;
            *((_DWORD *)v69 + 1) = v100;
            CEntity::RegisterReference(v100, (CEntity **)v69 + 1);
            CPlaceable::SetMatrix(*v66, (const CMatrix *)&v109);
            v82 = *v66;
            *((float *)v82 + 18) = v11;
            *((float *)v82 + 19) = v10;
            *((_DWORD *)v82 + 20) = v9.n64_u32[0];
            *((_DWORD *)*v66 + 17) = *((_DWORD *)*v66 + 17) & 0xFFFFFFFD | v103;
            *((_DWORD *)v69 + 3) = v106;
            *((float *)*v66 + 40) = v12;
            if ( v15 == 5 )
              *((_DWORD *)*v66 + 89) = &unk_99EE7C;
            *((_DWORD *)v69 + 2) = a8;
            v83 = (CEntity **)(v69 + 8);
            if ( a8 )
              CEntity::RegisterReference(a8, v83);
            v69[16] = 1;
            CWorld::Add(*v66, (CEntity *)v83);
            CEntity::RegisterReference(*v66, v66);
            v84 = *v66;
            v85 = *((_DWORD *)*v66 + 5);
            v86 = (char *)(v85 + 48);
            if ( !v85 )
              v86 = (char *)v84 + 4;
            v87 = *(_QWORD *)v86;
            *((_DWORD *)v69 + 7) = *((_DWORD *)v86 + 2);
            *(_QWORD *)(v69 + 20) = v87;
            if ( LODWORD(v72) == 17 )
            {
              v107 = 0.0;
              v108 = 0;
              v88 = *((_DWORD *)v84 + 6);
              if ( v88 )
              {
                FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                           (int)&g_fxMan,
                                           (CKeyGen *)"teargasAD",
                                           (int)&v107,
                                           *(_DWORD *)(v88 + 4) + 16,
                                           0);
                *((_DWORD *)v69 + 8) = FxSystem;
                if ( FxSystem )
                  FxSystem_c::Play(FxSystem);
              }
              v84 = *v66;
            }
            v90 = *((_DWORD *)v84 + 17);
            *((_DWORD *)v84 + 75) = v100;
            *((_DWORD *)v84 + 17) = v90 | 0x10000000;
            if ( v100 )
            {
              v91 = *((_BYTE *)v100 + 58) & 7;
              v92 = v91 == 2;
              if ( v91 != 2 )
                v92 = v91 == 3;
              if ( (v92 || v91 == 4) && !*((_DWORD *)v100 + 75) )
                *((_DWORD *)v100 + 75) = v100;
            }
            if ( LODWORD(v72) == 20 )
            {
              v93 = (CRadar *)CRadar::SetEntityBlip();
              CRadar::ChangeBlipScale(v93, 1, v94);
              if ( (CEntity *)FindPlayerPed(-1) == v100 || (CEntity *)FindPlayerVehicle(-1, 0) == v100 )
              {
                v96 = v93;
                v97 = -1;
              }
              else
              {
                v96 = v93;
                v97 = -16776961;
              }
              CRadar::ChangeBlipColour(v96, v97, v95);
            }
            CAudioEngine::ReportWeaponEvent();
            v98 = 1;
            break;
          default:
            goto LABEL_72;
        }
      }
      CMatrix::~CMatrix((CMatrix *)&v109);
      return v98;
    case 5:
      v37 = (char *)&loc_1E847E + 2;
      v38 = *((_BYTE *)this + 58);
      goto LABEL_23;
    case 42:
      CStreaming::RequestModel((CStreaming *)(unsigned __int16)MI_FLARE, 0, SLODWORD(a3));
      v37 = (_BYTE *)(elf_hash_bucket + 9748);
      v38 = *((_BYTE *)this + 58);
LABEL_23:
      if ( (unsigned __int8)((v38 & 7) - 2) > 2u )
      {
        v11 = 0.0;
        v10 = 0.0;
        v9.n64_u32[0] = 0;
      }
      else
      {
        v11 = *((float *)this + 18);
        v10 = *((float *)this + 19);
        v9.n64_u32[0] = *((_DWORD *)this + 20);
      }
      v39 = (int)&v37[CTimer::m_snTimeInMilliseconds];
      if ( !*((_DWORD *)this + 5) )
      {
        CPlaceable::AllocateMatrix(this);
        CSimpleTransform::UpdateMatrix((CPed *)((char *)this + 4), *((CMatrix **)this + 5));
      }
      CMatrix::operator=();
      v115 = a3;
      v19 = 2;
      v116 = v16;
      a4 = *(float *)&v39;
      v117 = a5;
      v15 = 0;
      goto LABEL_54;
    default:
      goto LABEL_54;
  }
}


// ============================================================

// Address: 0x5d9c04
// Original: _ZN15CProjectileInfo26RemoveDetonatorProjectilesEv
// Demangled: CProjectileInfo::RemoveDetonatorProjectiles(void)
int __fastcall CProjectileInfo::RemoveDetonatorProjectiles(CProjectileInfo *this)
{
  int i; // r10
  int result; // r0
  char *v3; // r8
  int *v4; // r11
  int v5; // r1
  int *v6; // r2
  char *v7; // r9
  FxSystem_c *v8; // r0

  for ( i = 0; i != 128; i += 4 )
  {
    result = 9 * i;
    v3 = (char *)&gaProjectileInfo + 9 * i;
    if ( v3[16] && *(_DWORD *)((char *)&gaProjectileInfo + 9 * i) == 39 )
    {
      v4 = *(int **)((char *)&CProjectileInfo::ms_apProjectile + i);
      v5 = v4[5];
      v6 = (int *)(v5 + 48);
      if ( !v5 )
        v6 = v4 + 1;
      v7 = (char *)&gaProjectileInfo + result;
      CExplosion::AddExplosion(
        0,
        *(_DWORD *)((char *)&gaProjectileInfo + result + 4),
        0,
        *v6,
        v6[1],
        v6[2],
        0,
        1,
        -1.0,
        0);
      v3[16] = 0;
      v8 = (FxSystem_c *)*((_DWORD *)v7 + 8);
      if ( v8 )
      {
        FxSystem_c::Kill(v8);
        *((_DWORD *)v7 + 8) = 0;
      }
      result = v4[7] | 0x800;
      v4[7] = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5d9cc8
// Original: _ZN15CProjectileInfo16RemoveProjectileEPS_P11CProjectile
// Demangled: CProjectileInfo::RemoveProjectile(CProjectileInfo*,CProjectile *)
int __fastcall CProjectileInfo::RemoveProjectile(CProjectileInfo *this, CProjectileInfo *a2, CProjectile *a3)
{
  int v5; // r0
  float v6; // r12
  int *v7; // r2
  int v8; // r0
  float v9; // r12
  int *v10; // r2
  int v11; // r1
  int v12; // r0
  int v13; // r8
  int PlayerPed; // r0
  int v15; // r2
  int v16; // r1
  char *v17; // r6
  __int64 v18; // kr00_8
  int *v19; // r2
  FxSystem_c *v20; // r0
  CEntity *v21; // r1
  int result; // r0

  switch ( *(_DWORD *)this )
  {
    case 0x10:
    case 0x15:
      v5 = *((_DWORD *)a2 + 5);
      LOWORD(v6) = 0;
      v7 = (int *)(v5 + 48);
      if ( !v5 )
        v7 = (int *)((char *)a2 + 4);
      HIWORD(v6) = -16512;
      CExplosion::AddExplosion(0, *((_DWORD *)this + 1), 0, *v7, v7[1], v7[2], 0, 1, v6, 0);
      break;
    case 0x12:
      v8 = *((_DWORD *)a2 + 5);
      LOWORD(v9) = 0;
      v10 = (int *)(v8 + 48);
      if ( !v8 )
        v10 = (int *)((char *)a2 + 4);
      HIWORD(v9) = -16512;
      CExplosion::AddExplosion(0, *((_DWORD *)this + 1), 1, *v10, v10[1], v10[2], 0, 1, v9, 0);
      if ( a2 )
        CAudioEngine::ReportObjectDestruction((CAudioEngine *)&AudioEngine, a2);
      break;
    case 0x13:
      v11 = *((_DWORD *)this + 1);
      if ( v11 && (*(_BYTE *)(v11 + 58) & 7) == 2 )
      {
        v12 = *((_DWORD *)a2 + 5);
        v11 = *(_DWORD *)(v11 + 1124);
      }
      else
      {
        v12 = *((_DWORD *)a2 + 5);
      }
      v19 = (int *)(v12 + 48);
      if ( !v12 )
        v19 = (int *)((char *)a2 + 4);
      CExplosion::AddExplosion(0, v11, 2, *v19, v19[1], v19[2], 0, 1, -1.0, 0);
      break;
    case 0x14:
      v13 = *((_DWORD *)this + 1);
      PlayerPed = FindPlayerPed(-1);
      v15 = *((_DWORD *)a2 + 5);
      v16 = *((_DWORD *)this + 1);
      v17 = (char *)(v15 + 48);
      if ( !v15 )
        v17 = (char *)a2 + 4;
      v18 = *(_QWORD *)v17;
      if ( v13 == PlayerPed )
        CExplosion::AddExplosion(0, v16, 2, v18, SHIDWORD(v18), *((_DWORD *)v17 + 2), 0, 1, -1.0, 0);
      else
        CExplosion::AddExplosion(0, v16, 3, v18, SHIDWORD(v18), *((_DWORD *)v17 + 2), 0, 1, -1.0, 0);
      break;
    default:
      break;
  }
  v20 = (FxSystem_c *)*((_DWORD *)this + 8);
  *((_BYTE *)this + 16) = 0;
  if ( v20 )
  {
    FxSystem_c::Kill(v20);
    *((_DWORD *)this + 8) = 0;
  }
  CRadar::ClearBlipForEntity();
  result = CWorld::Remove(a2, v21);
  if ( a2 )
    return (*(int (__fastcall **)(CProjectileInfo *))(*(_DWORD *)a2 + 4))(a2);
  return result;
}


// ============================================================

// Address: 0x5d9e64
// Original: _ZN15CProjectileInfo12RemoveNotAddEP7CEntity11eWeaponType7CVector
// Demangled: CProjectileInfo::RemoveNotAdd(CEntity *,eWeaponType,CVector)
int __fastcall CProjectileInfo::RemoveNotAdd(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  switch ( a2 )
  {
    case 39:
      return CExplosion::AddExplosion(0, a1, 0, a3, a4, a5, 0, 1, -1.0, 0);
    case 18:
      return CExplosion::AddExplosion(0, a1, 1, a3, a4, a5, 0, 1, -1.0, 0);
    case 16:
      return CExplosion::AddExplosion(0, a1, 0, a3, a4, a5, 0, 1, -1.0, 0);
  }
  result = a2 - 19;
  if ( (unsigned int)(a2 - 19) <= 1 )
    return CExplosion::AddExplosion(0, a1, 2, a3, a4, a5, 0, 1, -1.0, 0);
  return result;
}


// ============================================================

// Address: 0x5d9ee8
// Original: _ZN15CProjectileInfo6UpdateEv
// Demangled: CProjectileInfo::Update(void)
int __fastcall CProjectileInfo::Update(CProjectileInfo *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d6
  float32x2_t v3; // d8
  int v4; // r8
  float v5; // s19
  int v6; // r10
  unsigned __int8 *v7; // r11
  int result; // r0
  int v9; // r9
  char *v10; // r4
  FxSystem_c *v11; // r0
  _DWORD *v12; // r4
  FxSystem_c *v13; // t1
  char *v14; // r1
  CPed *v15; // r0
  int v16; // r0
  unsigned int v17; // r1
  float *v18; // r5
  int v19; // r0
  int v20; // r2
  int v21; // r0
  float v22; // s27
  float v23; // s23
  float v24; // s21
  int v25; // r10
  int i; // r4
  int v27; // r0
  float *v28; // r1
  float v29; // s2
  float v30; // s4
  float v31; // s0
  float v32; // s2
  int v33; // r0
  float v34; // s2
  float v35; // s0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  double v39; // d16
  CProjectile *v40; // r2
  char *v41; // r4
  unsigned int v42; // r1
  _DWORD *v43; // r4
  unsigned int v44; // t1
  float v45; // r6
  int v46; // r0
  float *v47; // r1
  float *v48; // r2
  double v49; // d16
  float v50; // r0
  float v51; // r0
  int v52; // r1
  float32x2_t *v53; // r0
  float32x2_t v54; // d16
  unsigned __int64 v55; // d1
  float *v56; // r0
  float v57; // s4
  float v58; // s0
  float v59; // s2
  float v60; // s6
  float v61; // s6
  const CVector *v62; // r1
  char *v63; // r0
  int v64; // r4
  float v65; // s23
  int v66; // r0
  unsigned int v67; // r4
  double v68; // d16
  float *v69; // r1
  double v70; // d16
  CWeapon *v71; // r0
  float v72; // s21
  CWeapon *v73; // r5
  float32x2_t v74; // d9
  CWeapon *v75; // r6
  bool v76; // nf
  int v77; // r3
  int v78; // r0
  int v79; // r1
  char *v80; // r2
  float *v81; // r0
  float32x2_t v82; // d16
  unsigned __int64 v83; // d1
  float v84; // r4
  int PlayerPed; // r0
  _BOOL4 v86; // r6
  float v87; // r4
  int PlayerVehicle; // r0
  CEntity *v89; // r1
  int v90; // r0
  const CVector *v91; // r1
  int v92; // r0
  int v93; // r3
  int v94; // r2
  __int64 v95; // kr00_8
  int v96; // r0
  int v97; // r1
  float *v98; // r2
  float *v99; // r0
  float v100; // s11
  float v101; // s2
  float v102; // s4
  float v103; // s8
  float v104; // s10
  float v105; // s3
  float32x2_t v106; // d0
  float v107; // s14
  unsigned __int32 v108; // s18
  float v109; // s1
  float v110; // s5
  float v111; // s7
  float v112; // s12
  double v113; // d16
  float v114; // s12
  float v115; // r4
  float v116; // r4
  float v117; // s0
  float v118; // s18
  float v119; // s2
  float v120; // s0
  float v121; // s12
  float v122; // s8
  float v123; // s0
  float v124; // s4
  float v125; // s2
  float v126; // s6
  float v127; // s6
  int v128; // r0
  int IsLineOfSightClear; // r0
  int v130; // r0
  bool v131; // zf
  bool v132; // zf
  int v133; // r0
  __int64 v134; // d16
  char *v135; // r1
  CEntity *v136; // [sp+4h] [bp-16Ch]
  CEntity *v137; // [sp+8h] [bp-168h]
  bool v138; // [sp+14h] [bp-15Ch]
  CWeapon **v139; // [sp+7Ch] [bp-F4h]
  float *v140; // [sp+7Ch] [bp-F4h]
  float *v141; // [sp+9Ch] [bp-D4h]
  float *v142; // [sp+A4h] [bp-CCh]
  float v143[4]; // [sp+A8h] [bp-C8h] BYREF
  float v144[4]; // [sp+B8h] [bp-B8h] BYREF
  double v145; // [sp+C8h] [bp-A8h] BYREF
  float v146; // [sp+D0h] [bp-A0h]
  float v147; // [sp+D4h] [bp-9Ch] BYREF
  float v148; // [sp+D8h] [bp-98h]
  float v149; // [sp+DCh] [bp-94h]
  double v150; // [sp+E0h] [bp-90h] BYREF
  float v151; // [sp+E8h] [bp-88h]
  double v152; // [sp+F0h] [bp-80h] BYREF
  float v153; // [sp+F8h] [bp-78h]
  float v154; // [sp+108h] [bp-68h]

  v3.n64_u32[0] = 1.5;
  v4 = 0;
  v5 = 0.000015259;
  do
  {
    v6 = 9 * v4;
    v7 = (unsigned __int8 *)&gaProjectileInfo + 36 * v4;
    result = v7[16];
    if ( v7[16] )
    {
      v9 = CProjectileInfo::ms_apProjectile[v4];
      if ( *(unsigned __int8 *)(v9 + 69) << 31 )
      {
        v10 = (char *)&gaProjectileInfo + 36 * v4;
        v13 = (FxSystem_c *)*((_DWORD *)v10 + 8);
        v12 = v10 + 32;
        v11 = v13;
        if ( v13 )
        {
          FxSystem_c::Kill(v11);
          *v12 = 0;
        }
      }
      v14 = (char *)&gaProjectileInfo + 36 * v4;
      v15 = (CPed *)*((_DWORD *)v14 + 1);
      v141 = (float *)(v14 + 4);
      if ( v15 && (*((_BYTE *)v15 + 58) & 7) == 3 && !CPed::IsPointerValid(v15) )
        *v141 = 0.0;
      v16 = *(_DWORD *)v7;
      v17 = *(_DWORD *)v7 - 16;
      if ( v17 <= 0x17
        && ((1 << v17) & 0x800003) != 0
        && *(float *)(v9 + 160) > 0.1
        && fabsf(*(float *)(v9 + 72)) < 0.05
        && fabsf(*(float *)(v9 + 76)) < 0.05
        && fabsf(*(float *)(v9 + 80)) < 0.05 )
      {
        *(_DWORD *)(v9 + 160) = 1022739087;
        v16 = *(_DWORD *)v7;
      }
      v18 = (float *)(v9 + 4);
      if ( v16 == 17
        && CTimer::m_snTimeInMilliseconds > (unsigned int)(*((_DWORD *)&gaProjectileInfo + 9 * v4 + 3) - 17500)
        && (int)(float)((float)((float)(unsigned __int16)rand() * v5) * 100.0) <= 9 )
      {
        v19 = *(_DWORD *)(v9 + 20);
        v20 = v9 + 4;
        if ( v19 )
          v20 = v19 + 48;
        CWorld::SetPedsChoking(*(CWorld **)v20, *(float *)(v20 + 4), *(float *)(v20 + 8), 6.0, *v141, v136);
      }
      v21 = *(_DWORD *)v7;
      if ( (unsigned int)(*(_DWORD *)v7 - 19) <= 1 )
      {
        FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)&v152, 0.3, 0.3, 0.3, 0.3, 0.5, 1.0, 0.08);
        v22 = *(float *)&CTimer::ms_fTimeStep * *(float *)(v9 + 76);
        v23 = *(float *)&CTimer::ms_fTimeStep * *(float *)(v9 + 72);
        v24 = *(float *)&CTimer::ms_fTimeStep * *(float *)(v9 + 80);
        v25 = (int)sqrtf((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24));
        if ( v25 <= 1 )
          v25 = 1;
        for ( i = 0; i < v25; ++i )
        {
          v153 = (float)((float)((float)rand() * 4.6566e-10) * 0.25) + 0.25;
          *((float *)&v152 + 1) = v153;
          *(float *)&v152 = v153;
          v27 = rand();
          v28 = (float *)(v9 + 4);
          v29 = 1.0 - (float)((float)i / (float)v25);
          v30 = v22 * v29;
          v154 = (float)((float)((float)v27 * 4.6566e-10) * 0.04) + 0.08;
          v31 = v24 * v29;
          v32 = v23 * v29;
          v33 = *(_DWORD *)(v9 + 20);
          if ( v33 )
            v28 = (float *)(v33 + 48);
          v34 = *v28 - v32;
          v35 = v28[2] - v31;
          *((float *)&v150 + 1) = v28[1] - v30;
          *(float *)&v150 = v34;
          v151 = v35;
          v36 = rand();
          v147 = (float)((float)((float)v36 * 4.6566e-10) + (float)((float)v36 * 4.6566e-10)) + -1.0;
          v37 = rand();
          v148 = (float)((float)((float)v37 * 4.6566e-10) + (float)((float)v37 * 4.6566e-10)) + -1.0;
          v38 = rand();
          v149 = (float)((float)((float)v38 * 4.6566e-10) + (float)((float)v38 * 4.6566e-10)) + -1.0;
          CVector::Normalise((CVector *)&v147);
          v39 = *(double *)(v9 + 72);
          v146 = *(float *)(v9 + 80);
          v145 = v39;
          CVector::Normalise((CVector *)&v145);
          CrossProduct((const CVector *)v143, (const CVector *)&v145);
          v144[0] = v143[0] * 1.5;
          v144[1] = v143[1] * 1.5;
          v144[2] = v143[2] * 1.5;
          FxSystem_c::AddParticle(dword_820540, (int)&v150, (int)v144, 0, (int)&v152, -1.0, 1.2, 0.6, 0);
        }
        v7 = (unsigned __int8 *)&gaProjectileInfo + 36 * v4;
        v21 = *(_DWORD *)v7;
        v6 = 9 * v4;
        v18 = (float *)(v9 + 4);
      }
      v40 = (CProjectile *)CTimer::m_snTimeInMilliseconds;
      v41 = (char *)&gaProjectileInfo + 4 * v6;
      v44 = *((_DWORD *)v41 + 3);
      v43 = v41 + 12;
      v42 = v44;
      if ( CTimer::m_snTimeInMilliseconds <= v44 || !v42 )
      {
        switch ( v21 )
        {
          case 18:
          case 21:
            v46 = *(_DWORD *)(v9 + 20);
            v47 = v18;
            if ( v46 )
              v47 = (float *)(v46 + 48);
            v48 = v141;
            v49 = *(double *)v47;
            v153 = v47[2];
            v50 = *v141;
            v152 = v49;
            CWorld::pIgnoreEntity = LODWORD(v50);
            *(_DWORD *)(v9 + 28) &= ~1u;
            v51 = *v141;
            if ( !*(_DWORD *)v141 )
              goto LABEL_132;
            v52 = *(_DWORD *)(LODWORD(v51) + 20);
            v48 = (float *)(v52 + 48);
            if ( !v52 )
              v48 = (float *)(LODWORD(v51) + 4);
            v53 = (float32x2_t *)((char *)&gaProjectileInfo + 4 * v6);
            v54.n64_u64[0] = vsub_f32(v53[3], *(float32x2_t *)(v48 + 1)).n64_u64[0];
            v55 = vmul_f32(v54, v54).n64_u64[0];
            if ( (float)((float)((float)((float)(v53[2].n64_f32[1] - *v48) * (float)(v53[2].n64_f32[1] - *v48))
                               + *(float *)&v55)
                       + *((float *)&v55 + 1)) >= 2.0 )
            {
LABEL_132:
              if ( (*(_BYTE *)(v9 + 69) & 2) != 0
                || !CWorld::GetIsLineOfSightClear(
                      (CWorld *)((char *)&gaProjectileInfo + 4 * v6 + 20),
                      (const CVector *)&v152,
                      (const CVector *)((char *)&stderr + 1),
                      1,
                      1,
                      1,
                      0,
                      0,
                      0,
                      v138) )
              {
                CProjectileInfo::RemoveProjectile((CProjectileInfo *)v7, (CProjectileInfo *)v9, (CProjectile *)v48);
              }
            }
            CWorld::pIgnoreEntity = 0;
            *(_DWORD *)(v9 + 28) |= 1u;
            goto LABEL_126;
          case 19:
            v56 = *(float **)(v9 + 20);
            v57 = (float)((float)(*(float *)&CTimer::ms_fTimeStep * 0.008) * v56[5]) + *(float *)(v9 + 76);
            v58 = (float)((float)(*(float *)&CTimer::ms_fTimeStep * 0.008) * v56[4]) + *(float *)(v9 + 72);
            v59 = (float)((float)(*(float *)&CTimer::ms_fTimeStep * 0.008) * v56[6]) + *(float *)(v9 + 80);
            *(float *)(v9 + 72) = v58;
            *(float *)(v9 + 76) = v57;
            *(float *)(v9 + 80) = v59;
            v60 = sqrtf((float)(v59 * v59) + (float)((float)(v57 * v57) + (float)(v58 * v58)));
            if ( v60 > 9.9 )
            {
              v61 = 9.9 / v60;
              *(float *)(v9 + 72) = v58 * v61;
              *(float *)(v9 + 76) = v61 * v57;
              *(float *)(v9 + 80) = v61 * v59;
            }
            if ( (*(_BYTE *)(v9 + 69) & 2) != 0 )
              goto LABEL_119;
            CWorld::pIgnoreEntity = *(_DWORD *)v141;
            *(_DWORD *)(v9 + 28) &= ~1u;
            v62 = (const CVector *)v18;
            if ( v56 )
              v62 = (const CVector *)(v56 + 12);
            goto LABEL_118;
          case 20:
            v63 = (char *)&gaProjectileInfo + 4 * v6;
            v64 = *((_DWORD *)v63 + 2);
            v139 = (CWeapon **)(v63 + 8);
            if ( v64 )
            {
              v65 = v5;
              if ( v64 == FindPlayerVehicle(-1, 0) )
                CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 101, 0.0, 1.0);
              v66 = *(_DWORD *)(v9 + 20);
              v67 = 0;
              v68 = *(double *)(v66 + 16);
              v153 = *(float *)(v66 + 24);
              v69 = v18;
              v152 = v68;
              v142 = v18;
              if ( v66 )
                v69 = (float *)(v66 + 48);
              v70 = *(double *)v69;
              v151 = v69[2];
              v150 = v70;
              v71 = *v139;
              v151 = v153 + v151;
              *((float *)&v150 + 1) = *((float *)&v152 + 1) + *((float *)&v70 + 1);
              *(float *)&v150 = *(float *)&v152 + *(float *)&v70;
              v1.n64_u32[0] = 0;
              v72 = COERCE_FLOAT(
                      CWeapon::EvaluateTargetForHeatSeekingMissile(
                        v71,
                        (CEntity *)&v150,
                        (CVector *)&v152,
                        (CVector *)0x3F99999A,
                        COERCE_FLOAT(1),
                        0,
                        v137));
              v73 = 0;
              v74.n64_u64[0] = v1.n64_u64[0];
              do
              {
                if ( *(_DWORD *)((char *)&gaProjectileInfo + 9 * v67) == 58 )
                {
                  if ( *((_BYTE *)&gaProjectileInfo + 9 * v67 + 16) )
                  {
                    v75 = (CWeapon *)CProjectileInfo::ms_apProjectile[v67 / 4];
                    v1.n64_u32[0] = CWeapon::EvaluateTargetForHeatSeekingMissile(
                                      v75,
                                      (CEntity *)&v150,
                                      (CVector *)&v152,
                                      (CVector *)0x3F99999A,
                                      COERCE_FLOAT(1),
                                      0,
                                      v137);
                    v76 = v1.n64_f32[0] < v74.n64_f32[0];
                    v74.n64_u64[0] = vmax_f32(v1, v74).n64_u64[0];
                    if ( !v76 )
                      v73 = v75;
                  }
                }
                v67 += 4;
              }
              while ( v67 != 128 );
              if ( !v73 || v74.n64_f32[0] <= v72 )
                v73 = *v139;
              v77 = v9 + 72;
              v140 = (float *)v73;
              if ( (*((_BYTE *)v73 + 58) & 7) == 2 )
              {
                if ( (CWeapon *)FindPlayerVehicle(-1, 0) == v73 )
                {
                  v78 = *((_DWORD *)v73 + 5);
                  v79 = *(_DWORD *)(v9 + 20);
                  v80 = (char *)(v78 + 48);
                  if ( !v78 )
                    v80 = (char *)v73 + 4;
                  v81 = v142;
                  if ( v79 )
                    v81 = (float *)(v79 + 48);
                  v82.n64_u64[0] = vsub_f32(*(float32x2_t *)(v81 + 1), *(float32x2_t *)(v80 + 4)).n64_u64[0];
                  v83 = vmul_f32(v82, v82).n64_u64[0];
                  if ( sqrtf(
                         (float)((float)((float)(*v81 - *(float *)v80) * (float)(*v81 - *(float *)v80)) + *(float *)&v83)
                       + *((float *)&v83 + 1)) < 42.0 )
                    *((_BYTE *)v73 + 1240) = 1;
                }
                v84 = *v141;
                PlayerPed = FindPlayerPed(-1);
                v77 = v9 + 72;
                if ( LODWORD(v84) == PlayerPed
                  || (v86 = 0,
                      v87 = *v141,
                      PlayerVehicle = FindPlayerVehicle(-1, 0),
                      v77 = v9 + 72,
                      LODWORD(v87) == PlayerVehicle) )
                {
                  v86 = *((_DWORD *)v73 + 361) == 4;
                }
              }
              else
              {
                v86 = 0;
              }
              v96 = *((_DWORD *)v73 + 5);
              v97 = *(_DWORD *)(v9 + 20);
              v98 = (float *)(v96 + 48);
              if ( !v96 )
                v98 = (float *)((char *)v73 + 4);
              v99 = v142;
              v100 = *v98;
              v101 = v98[1];
              v102 = v98[2];
              if ( v97 )
                v99 = (float *)(v97 + 48);
              v103 = v99[1];
              v104 = v99[2];
              v105 = (float)(*(float *)(v9 + 80) * 100.0) + v104;
              v106.n64_u32[1] = *(_DWORD *)(v9 + 76);
              v106.n64_u32[0] = 1112014848;
              v107 = (float)(*(float *)(v9 + 72) * 100.0) + *v99;
              v2.n64_f32[0] = sqrtf(
                                (float)((float)((float)(*v99 - v100) * (float)(*v99 - v100))
                                      + (float)((float)(v103 - v101) * (float)(v103 - v101)))
                              + (float)((float)(v104 - v102) * (float)(v104 - v102)));
              v108 = vmin_f32(v2, v3).n64_u32[0];
              v2.n64_u64[0] = vmin_f32(v2, v106).n64_u64[0];
              if ( v86 )
                v2.n64_u32[0] = v108;
              v109 = (float)(v106.n64_f32[1] * 100.0) + v103;
              v110 = *((float *)v73 + 18) * v2.n64_f32[0];
              v111 = *((float *)v73 + 19) * v2.n64_f32[0];
              v112 = *((float *)v73 + 20) * v2.n64_f32[0];
              if ( v86 )
              {
                v109 = v99[1];
                v107 = *v99;
                v105 = v99[2];
              }
              v148 = (float)(v101 + v111) - v109;
              v147 = (float)(v100 + v110) - v107;
              v149 = (float)(v102 + v112) - v105;
              v113 = *(double *)v77;
              v146 = *(float *)(v77 + 8);
              v145 = v113;
              CVector::Normalise((CVector *)&v145);
              v1.n64_f32[1] = v146 * v149;
              v114 = (float)((float)(*(float *)&v145 * v147) + (float)(*((float *)&v145 + 1) * v148))
                   + (float)(v146 * v149);
              if ( v114 < 0.0 )
              {
                v148 = v148 - (float)(*((float *)&v145 + 1) * v114);
                v147 = v147 - (float)(*(float *)&v145 * v114);
                v149 = v149 - (float)(v146 * v114);
              }
              CVector::Normalise((CVector *)&v147);
              v115 = *v141;
              v5 = v65;
              if ( LODWORD(v115) == FindPlayerPed(-1) )
              {
                v117 = 0.0117;
              }
              else
              {
                v116 = *v141;
                v117 = 0.009;
                if ( LODWORD(v116) == FindPlayerVehicle(-1, 0) )
                  v117 = 0.0117;
              }
              v18 = v142;
              if ( v86 )
              {
                v118 = *(float *)&CTimer::ms_fTimeStep;
                v119 = powf(0.95, *(float *)&CTimer::ms_fTimeStep);
                v117 = 0.15;
              }
              else
              {
                v119 = 1.0;
                if ( sqrtf(
                       (float)((float)(v140[18] * v140[18]) + (float)(v140[19] * v140[19]))
                     + (float)(v140[20] * v140[20])) > 0.8 )
                  v117 = v117 * 1.2;
                v118 = *(float *)&CTimer::ms_fTimeStep;
              }
              v120 = v117 * v118;
              v121 = v120 * v148;
              v122 = v120 * v149;
              v123 = (float)(v147 * v120) + (float)(v119 * *(float *)(v9 + 72));
              v124 = v121 + (float)(v119 * *(float *)(v9 + 76));
              v125 = v122 + (float)(v119 * *(float *)(v9 + 80));
              *(float *)(v9 + 72) = v123;
              *(float *)(v9 + 76) = v124;
              *(float *)(v9 + 80) = v125;
              v126 = sqrtf((float)(v125 * v125) + (float)((float)(v124 * v124) + (float)(v123 * v123)));
              if ( v126 > 9.9 )
              {
                v127 = 9.9 / v126;
                *(float *)(v9 + 72) = v123 * v127;
                *(float *)(v9 + 76) = v127 * v124;
                *(float *)(v9 + 80) = v127 * v125;
              }
              *(double *)(*(_DWORD *)(v9 + 20) + 16) = v145;
              *(float *)(*(_DWORD *)(v9 + 20) + 24) = v146;
            }
            if ( (*(_BYTE *)(v9 + 69) & 2) == 0 )
            {
              CWorld::pIgnoreEntity = *(_DWORD *)v141;
              v128 = *(_DWORD *)(v9 + 20);
              *(_DWORD *)(v9 + 28) &= ~1u;
              v62 = (const CVector *)v18;
              if ( v128 )
                v62 = (const CVector *)(v128 + 48);
LABEL_118:
              IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                                     (CWorld *)((char *)&gaProjectileInfo + 4 * v6 + 20),
                                     v62,
                                     (const CVector *)((char *)&stderr + 1),
                                     1,
                                     1,
                                     1,
                                     0,
                                     0,
                                     0,
                                     v138);
              CWorld::pIgnoreEntity = 0;
              *(_DWORD *)(v9 + 28) |= 1u;
              *(float *)(v9 + 300) = *v141;
              if ( IsLineOfSightClear )
                goto LABEL_126;
            }
LABEL_119:
            v130 = *(unsigned __int8 *)(v9 + 189);
            v131 = v130 == 0;
            if ( *(_BYTE *)(v9 + 189) )
            {
              v130 = *(_DWORD *)(v9 + 192);
              v131 = v130 == 0;
            }
            if ( v131 )
              goto LABEL_125;
            v132 = v130 == *(_DWORD *)v141;
            if ( v130 != *(_DWORD *)v141 )
              v132 = *(unsigned __int16 *)(v130 + 38) == 345;
            if ( !v132 )
              goto LABEL_125;
            goto LABEL_126;
          case 39:
            if ( *(float *)(v9 + 220) > 0.0 )
            {
              v89 = *(CEntity **)(v9 + 224);
              if ( v89 )
              {
                if ( !*(_DWORD *)(v9 + 256) )
                {
                  CPhysical::AttachEntityToEntity(v9, v89);
                  *(_DWORD *)(v9 + 28) &= ~1u;
                }
              }
            }
            goto LABEL_126;
          case 58:
            *(_DWORD *)(v9 + 28) &= ~1u;
            CWorld::pIgnoreEntity = *(_DWORD *)v141;
            v90 = *(_DWORD *)(v9 + 20);
            v91 = (const CVector *)v18;
            if ( v90 )
              v91 = (const CVector *)(v90 + 48);
            v92 = CWorld::GetIsLineOfSightClear(
                    (CWorld *)((char *)&gaProjectileInfo + 4 * v6 + 20),
                    v91,
                    (const CVector *)((char *)&stderr + 1),
                    1,
                    1,
                    1,
                    0,
                    0,
                    0,
                    v138);
            *(_DWORD *)(v9 + 28) |= 1u;
            CWorld::pIgnoreEntity = 0;
            if ( !v92 )
            {
              *(_DWORD *)(v9 + 72) = 0;
              *(_DWORD *)(v9 + 76) = 0;
              *(_DWORD *)(v9 + 80) = 0;
              v93 = *(_DWORD *)(v9 + 20);
              v94 = *((_DWORD *)&gaProjectileInfo + v6 + 5);
              v95 = *(_QWORD *)((char *)&gaProjectileInfo + 4 * v6 + 24);
              if ( v93 )
              {
                *(_DWORD *)(v93 + 48) = v94;
                *(_QWORD *)(*(_DWORD *)(v9 + 20) + 52) = v95;
              }
              else
              {
                *(_DWORD *)(v9 + 4) = v94;
                *(_QWORD *)(v9 + 8) = v95;
              }
            }
            goto LABEL_126;
          default:
            goto LABEL_126;
        }
      }
      if ( v21 == 39 )
      {
        if ( (*(_BYTE *)(*(_DWORD *)v141 + 58) & 7) == 3 && CPed::IsPlayer(*(CPed **)v141) == 1 )
        {
          v45 = *v141;
          if ( *(_DWORD *)(LODWORD(v45) + 28 * CPed::GetWeaponSlot() + 1444) != 40
            || !*(_DWORD *)(LODWORD(v45) + 28 * CPed::GetWeaponSlot() + 1456) )
          {
            *v43 = 0;
          }
        }
      }
      else
      {
LABEL_125:
        CProjectileInfo::RemoveProjectile((CProjectileInfo *)v7, (CProjectileInfo *)v9, v40);
      }
LABEL_126:
      v133 = *(_DWORD *)(v9 + 20);
      if ( v133 )
        v18 = (float *)(v133 + 48);
      v134 = *(_QWORD *)v18;
      v135 = (char *)&gaProjectileInfo + 4 * v6;
      result = *((_DWORD *)v18 + 2);
      *((_DWORD *)v135 + 7) = result;
      *(_QWORD *)(v135 + 20) = v134;
    }
    ++v4;
  }
  while ( v4 != 32 );
  return result;
}


// ============================================================

// Address: 0x5dacf8
// Original: _ZN15CProjectileInfo19IsProjectileInRangeEffffffb
// Demangled: CProjectileInfo::IsProjectileInRange(float,float,float,float,float,float,bool)
int __fastcall CProjectileInfo::IsProjectileInRange(
        CProjectileInfo *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        bool a8)
{
  unsigned int v12; // r11
  char v13; // r12
  int v14; // r1
  char *v15; // r2
  float *v16; // r4
  int v17; // r0
  float *v18; // r3
  float v19; // s0
  float v20; // s0
  char v21; // r3
  int v22; // r0
  char *v23; // r8
  FxSystem_c *v24; // r0
  CEntity *v25; // r1

  v12 = 0;
  v13 = 0;
  do
  {
    v14 = 9 * v12;
    v15 = (char *)&gaProjectileInfo + 9 * v12;
    if ( v15[16] && (unsigned int)(*(_DWORD *)((char *)&gaProjectileInfo + 9 * v12) - 16) <= 4 )
    {
      v16 = (float *)CProjectileInfo::ms_apProjectile[v12 / 4];
      v17 = *((_DWORD *)v16 + 5);
      v18 = (float *)(v17 + 48);
      if ( !v17 )
        v18 = v16 + 1;
      if ( *v18 >= *(float *)&this && *v18 <= a2 )
      {
        v19 = v18[1];
        if ( v19 >= a3 && v19 <= a4 )
        {
          v20 = v18[2];
          if ( v20 >= a5 )
          {
            v21 = 0;
            v22 = 0;
            if ( v20 > a6 )
              v22 = 1;
            else
              v21 = 1;
            if ( v22 | LODWORD(a7) ^ 1 )
            {
              v13 |= v21;
            }
            else
            {
              v15[16] = 0;
              v23 = (char *)&gaProjectileInfo + v14;
              v24 = *(FxSystem_c **)((char *)&gaProjectileInfo + v14 + 32);
              if ( v24 )
              {
                FxSystem_c::Kill(v24);
                *((_DWORD *)v23 + 8) = 0;
              }
              CRadar::ClearBlipForEntity();
              CWorld::Remove((CWorld *)v16, v25);
              (*(void (__fastcall **)(float *))(*(_DWORD *)v16 + 4))(v16);
              v13 = 1;
            }
          }
        }
      }
    }
    v12 += 4;
  }
  while ( v12 != 128 );
  return v13 & 1;
}


// ============================================================

// Address: 0x5dae5c
// Original: _ZN15CProjectileInfo20RemoveAllProjectilesEv
// Demangled: CProjectileInfo::RemoveAllProjectiles(void)
int __fastcall CProjectileInfo::RemoveAllProjectiles(CProjectileInfo *this)
{
  unsigned int i; // r8
  int result; // r0
  char *v3; // r1
  char *v4; // r9
  FxSystem_c *v5; // r1
  CWorld *v6; // r5
  CEntity *v7; // r1

  for ( i = 0; i != 128; i += 4 )
  {
    result = 9 * i;
    v3 = (char *)&gaProjectileInfo + 9 * i;
    if ( v3[16] )
    {
      v4 = (char *)&gaProjectileInfo + result;
      v3[16] = 0;
      v5 = *(FxSystem_c **)((char *)&gaProjectileInfo + result + 32);
      v6 = (CWorld *)CProjectileInfo::ms_apProjectile[i / 4];
      if ( v5 )
      {
        FxManager_c::DestroyFxSystem((FxManager_c *)&g_fxMan, v5);
        *((_DWORD *)v4 + 8) = 0;
      }
      CRadar::ClearBlipForEntity();
      result = CWorld::Remove(v6, v7);
      if ( v6 )
        result = (*(int (__fastcall **)(CWorld *))(*(_DWORD *)v6 + 4))(v6);
    }
  }
  return result;
}


// ============================================================

// Address: 0x5daf18
// Original: _ZN15CProjectileInfo25RemoveIfThisIsAProjectileEP7CObject
// Demangled: CProjectileInfo::RemoveIfThisIsAProjectile(CObject *)
int __fastcall CProjectileInfo::RemoveIfThisIsAProjectile(CProjectileInfo *this, CObject *a2)
{
  int v2; // r4
  char *i; // r5
  FxSystem_c *v6; // r0
  CEntity *v7; // r1
  int v8; // r0

  v2 = 0;
  for ( i = &byte_A84B50; (CProjectileInfo *)CProjectileInfo::ms_apProjectile[v2] != this || !*i; i += 36 )
  {
    if ( v2++ >= 31 )
      return 0;
  }
  *i = 0;
  v6 = (FxSystem_c *)*((_DWORD *)i + 4);
  if ( v6 )
  {
    FxSystem_c::Kill(v6);
    *((_DWORD *)i + 4) = 0;
  }
  CRadar::ClearBlipForEntity();
  CWorld::Remove((CWorld *)CProjectileInfo::ms_apProjectile[v2], v7);
  v8 = CProjectileInfo::ms_apProjectile[v2];
  if ( v8 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  CProjectileInfo::ms_apProjectile[v2] = 0;
  return 1;
}


// ============================================================
