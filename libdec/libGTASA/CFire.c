
// Address: 0x193644
// Original: j__ZN5CFire11ProcessFireEv
// Demangled: CFire::ProcessFire(void)
// attributes: thunk
int __fastcall CFire::ProcessFire(CEntity **this)
{
  return _ZN5CFire11ProcessFireEv(this);
}


// ============================================================

// Address: 0x19c110
// Original: j__ZN5CFire10ExtinguishEv
// Demangled: CFire::Extinguish(void)
// attributes: thunk
int __fastcall CFire::Extinguish(CFire *this)
{
  return _ZN5CFire10ExtinguishEv(this);
}


// ============================================================

// Address: 0x3f1060
// Original: _ZN5CFireC2Ev
// Demangled: CFire::CFire(void)
void __fastcall CFire::CFire(CFire *this)
{
  char v1; // r1

  *((_WORD *)this + 1) = 1;
  v1 = *(_BYTE *)this;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 1065353216;
  *((_DWORD *)this + 9) = 0;
  *((_WORD *)this + 16) = 15460;
  *(_BYTE *)this = v1 & 0xE0 | 0x14;
}


// ============================================================

// Address: 0x3f1090
// Original: _ZN5CFire10InitialiseEv
// Demangled: CFire::Initialise(void)
char *__fastcall CFire::Initialise(char *this)
{
  char v1; // r1

  *((_WORD *)this + 1) = 1;
  v1 = *this;
  *(_QWORD *)(this + 4) = 0LL;
  *(_QWORD *)(this + 12) = 0LL;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 1065353216;
  *((_DWORD *)this + 9) = 0;
  *((_WORD *)this + 16) = 15460;
  *this = v1 & 0xE0 | 0x14;
  return this;
}


// ============================================================

// Address: 0x3f10c0
// Original: _ZN5CFireD2Ev
// Demangled: CFire::~CFire()
void __fastcall CFire::~CFire(CFire *this)
{
  ;
}


// ============================================================

// Address: 0x3f1234
// Original: _ZN5CFire10ExtinguishEv
// Demangled: CFire::Extinguish(void)
CEntity *__fastcall CFire::Extinguish(CEntity *this)
{
  CEntity *v1; // r4
  char v2; // r1
  FxSystem_c *v3; // r0
  CEntity **v4; // r4
  CEntity *v5; // t1
  int v6; // r1
  _DWORD *v7; // r0

  v1 = this;
  v2 = *(_BYTE *)this;
  if ( (*(_BYTE *)this & 1) != 0 )
  {
    *((_DWORD *)this + 6) = 0;
    v3 = (FxSystem_c *)*((_DWORD *)this + 9);
    *(_BYTE *)v1 = v2 & 0xE6 | 0x10;
    if ( v3 )
    {
      FxSystem_c::Kill(v3);
      *((_DWORD *)v1 + 9) = 0;
    }
    v5 = (CEntity *)*((_DWORD *)v1 + 4);
    v4 = (CEntity **)((char *)v1 + 16);
    this = v5;
    if ( v5 )
    {
      v6 = *((_BYTE *)this + 58) & 7;
      if ( v6 == 2 )
      {
        v7 = (_DWORD *)((char *)this + 1172);
      }
      else
      {
        if ( v6 != 3 )
          goto LABEL_10;
        v7 = (_DWORD *)((char *)this + 1848);
      }
      *v7 = 0;
      this = *v4;
      if ( !*v4 )
      {
LABEL_11:
        this = 0;
        *v4 = 0;
        return this;
      }
LABEL_10:
      CEntity::CleanUpOldReference(this, v4);
      goto LABEL_11;
    }
  }
  return this;
}


// ============================================================

// Address: 0x3f1ab8
// Original: _ZN5CFire11ProcessFireEv
// Demangled: CFire::ProcessFire(void)
CEntity *__fastcall CFire::ProcessFire(CEntity **this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d8
  CEntity **v5; // r4
  CEntity *v6; // r6
  float v7; // s4
  float v8; // s0
  float32x2_t v9; // d1
  int v10; // r0
  char *v11; // r1
  __int64 v12; // d16
  int v13; // r0
  CEntity *result; // r0
  int v15; // r1
  FxSystem_c *v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  bool v19; // zf
  int v20; // r0
  int v21; // r0
  float *v22; // r1
  float v23; // s4
  float v24; // s0
  int PlayerPed; // r0
  int v26; // r1
  int v27; // r2
  float32x2_t v28; // d16
  CPlayerPed *v29; // r0
  CEntity *v30; // r0
  _DWORD *v31; // r4
  int v32; // r0
  int v33; // r8
  float32x2_t *v34; // r12
  int v35; // r6
  int v36; // r10
  int v37; // r1
  int v38; // r2
  float32x2_t v39; // d16
  CVehicle *v40; // r5
  CPlayerPed *v41; // r0
  CEntity *v42; // r0
  float v43; // r3
  void (__fastcall *v44)(CVehicle *, _DWORD, _DWORD); // r10
  char TyreNearestPoint; // r0
  _DWORD *v46; // r4
  int v47; // r0
  int v48; // r5
  int v49; // r6
  CObject *v50; // r0
  int v51; // r1
  _DWORD *v52; // r2
  float32x2_t v53; // d16
  int v54; // r0
  int v55; // r2
  char v56; // r3
  float v57; // s16
  int v58; // r0
  int v59; // r0
  float v60; // s14
  float v61; // s0
  float v62; // s6
  FxSystem_c *v63; // r0
  float32x2_t *v64; // r3
  float32x2_t v65; // d16
  unsigned __int64 v66; // d0
  int v67; // r1
  float v68; // s0
  FxSystem_c *v69; // r0
  float v70; // s0
  char *v71; // r1
  FxSystem_c *v72; // r0
  int v73; // r1
  _DWORD *v74; // r0
  int v75; // r1
  int v76; // r6
  char *v77; // r4
  char *v78; // r9
  float v79; // s4
  float v80; // s2
  float *v81; // r0
  float v82; // s6
  float v83; // s10
  float v84; // s8
  CEntity *v85; // r1
  FxSystem_c *v86; // r0
  char *v87; // r1
  CEntity *FxSystem; // r0
  char v89; // r0
  char *v90; // r4
  FxSystem_c *v91; // r0
  _DWORD *v92; // r4
  FxSystem_c *v93; // t1
  char *v94; // r6
  CEntity *v95; // r0
  CEntity **v96; // r6
  CEntity *v97; // t1
  int v98; // r1
  _DWORD *v99; // r0
  CEntity **v100; // [sp+34h] [bp-54h]
  __int64 v101; // [sp+38h] [bp-50h]
  CEntity *v102; // [sp+40h] [bp-48h]
  double v103; // [sp+48h] [bp-40h] BYREF
  float v104; // [sp+50h] [bp-38h]

  v5 = this + 4;
  v6 = this[4];
  v3.n64_u32[0] = 3.0;
  v7 = *((float *)this + 7);
  v8 = *(float *)&CTimer::ms_fTimeStep;
  v2.n64_f32[0] = v7 + (float)(*(float *)&CTimer::ms_fTimeStep * 0.002);
  v9.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
  if ( SLODWORD(v7) == v9.n64_i32[0] )
    v7 = v9.n64_f32[0];
  *((float *)this + 7) = v7;
  if ( !v6 )
    goto LABEL_148;
  v10 = *((_DWORD *)v6 + 5);
  v11 = (char *)(v10 + 48);
  if ( !v10 )
    v11 = (char *)v6 + 4;
  v12 = *(_QWORD *)v11;
  this[3] = (CEntity *)*((_DWORD *)v11 + 2);
  *(_QWORD *)(this + 1) = v12;
  v13 = *((_BYTE *)v6 + 58) & 7;
  if ( v13 == 2 )
  {
    v15 = *(unsigned __int8 *)this;
    if ( *((CEntity ***)v6 + 293) != this )
    {
      result = (CEntity *)(v15 << 31);
      if ( !(v15 << 31) )
        return result;
      goto LABEL_13;
    }
    if ( (v15 & 2) == 0 )
    {
      CVehicle::InflictDamage((int)v6, (int)this[5], 37, COERCE_INT(v8 * 1.2), 0, 0, 0);
      v6 = this[4];
    }
    if ( !*((_DWORD *)v6 + 360) )
    {
      v21 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)v6 + 19)]) + 116);
      v104 = *(float *)(v21 + 8);
      v103 = *(double *)v21;
      v104 = v104 + 0.15;
      if ( !*((_DWORD *)v6 + 5) )
      {
        CPlaceable::AllocateMatrix(v6);
        CSimpleTransform::UpdateMatrix((CEntity *)((char *)v6 + 4), *((CMatrix **)v6 + 5));
      }
      operator*();
      this[3] = v102;
      *(_QWORD *)(this + 1) = v101;
    }
  }
  else if ( v13 == 3 )
  {
    result = (CEntity *)*((_DWORD *)v6 + 462);
    if ( result != (CEntity *)this )
    {
      LOBYTE(v15) = *(_BYTE *)this;
      if ( (*(_BYTE *)this & 1) == 0 )
        return result;
LABEL_13:
      this[6] = 0;
      v16 = this[9];
      *(_BYTE *)this = v15 & 0xE6 | 0x10;
      if ( !v16 || (result = (CEntity *)FxSystem_c::Kill(v16), v6 = this[4], this[9] = 0, v6) )
      {
        v17 = *((_BYTE *)v6 + 58) & 7;
        if ( v17 == 2 )
        {
          v18 = (_DWORD *)((char *)v6 + 1172);
        }
        else
        {
          if ( v17 != 3 )
            goto LABEL_36;
          v18 = (_DWORD *)((char *)v6 + 1848);
        }
        *v18 = 0;
        v6 = *v5;
        if ( !*v5 )
        {
LABEL_37:
          result = 0;
          *v5 = 0;
          return result;
        }
LABEL_36:
        CEntity::CleanUpOldReference(v6, v5);
        goto LABEL_37;
      }
      return result;
    }
    if ( (*((_DWORD *)v6 + 275) & 0xFFFFFFFE) == 0x36 )
      *((float *)this + 3) = *((float *)this + 3) + -1.0;
    v20 = *((unsigned __int8 *)v6 + 1157) << 31;
    v19 = v20 == 0;
    if ( v20 )
    {
      v20 = *((_DWORD *)v6 + 356);
      v19 = v20 == 0;
    }
    if ( v19 )
    {
      if ( !CPed::IsPlayer(v6) && !CPed::IsAlive(v6) )
        *((_DWORD *)v6 + 17) |= 0x20000000u;
    }
    else if ( *(_WORD *)(v20 + 38) != 407 && !*(_DWORD *)(v20 + 1440) )
    {
      *(_DWORD *)(v20 + 1228) = 1117126656;
    }
  }
  if ( this[9] )
  {
    v22 = (float *)this[4];
    v23 = (float)((float)(*(float *)&CTimer::ms_fTimeStep + *(float *)&CTimer::ms_fTimeStep) * v22[19])
        + *((float *)this + 2);
    v24 = (float)((float)(*(float *)&CTimer::ms_fTimeStep + *(float *)&CTimer::ms_fTimeStep) * v22[20])
        + *((float *)this + 3);
    *(float *)&v103 = (float)(v22[18] * (float)(*(float *)&CTimer::ms_fTimeStep + *(float *)&CTimer::ms_fTimeStep))
                    + *((float *)this + 1);
    *((float *)&v103 + 1) = v23;
    v104 = v24;
    FxSystem_c::SetOffsetPos();
  }
  if ( !*v5 || (*((_BYTE *)*v5 + 58) & 7) != 2 )
  {
LABEL_148:
    if ( !FindPlayerVehicle(-1, 0)
      && !*(_DWORD *)(FindPlayerPed(-1) + 1848)
      && (*(_BYTE *)(FindPlayerPed(-1) + 70) & 8) == 0
      && !*(_DWORD *)(FindPlayerPed(-1) + 256) )
    {
      PlayerPed = FindPlayerPed(-1);
      v26 = *(_DWORD *)(PlayerPed + 20);
      v27 = v26 + 48;
      if ( !v26 )
        v27 = PlayerPed + 4;
      v28.n64_u64[0] = vsub_f32(*(float32x2_t *)(v27 + 4), *((float32x2_t *)this + 1)).n64_u64[0];
      v9.n64_u64[0] = vmul_f32(v28, v28).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v27 - *((float *)this + 1))
                                 * (float)(*(float *)v27 - *((float *)this + 1)))
                         + v9.n64_f32[0])
                 + v9.n64_f32[1]) < 1.2 )
      {
        v29 = (CPlayerPed *)FindPlayerPed(-1);
        CPlayerPed::DoStuffToGoOnFire(v29);
        v30 = (CEntity *)FindPlayerPed(-1);
        CFireManager::StartFire((CFireManager *)gFireManager, v30, this[5], COERCE_FLOAT(100), 0, 0x1B58u, 100);
      }
    }
  }
  v100 = v5;
  if ( (rand() & 0x1F) == 0 )
  {
    v31 = (_DWORD *)CPools::ms_pVehiclePool;
    v32 = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
    if ( v32 )
    {
      v33 = v32 - 1;
      v34 = (float32x2_t *)(this + 2);
      v35 = 2604 * v32 - 1160;
      do
      {
        if ( *(char *)(v31[1] + v33) >= 0 )
        {
          v36 = *v31 + v35;
          if ( v36 != 1444 && !*(_DWORD *)(v36 - 272) && *(_WORD *)(v36 - 1406) != 407 )
          {
            v37 = *(_DWORD *)(v36 - 1424);
            v38 = v37 + 48;
            if ( !v37 )
              v38 = v36 - 1440;
            v39.n64_u64[0] = vsub_f32(*(float32x2_t *)(v38 + 4), (float32x2_t)v34->n64_u64[0]).n64_u64[0];
            v9.n64_u64[0] = vmul_f32(v39, v39).n64_u64[0];
            if ( sqrtf(
                   (float)((float)((float)(*(float *)v38 - *((float *)this + 1))
                                 * (float)(*(float *)v38 - *((float *)this + 1)))
                         + v9.n64_f32[0])
                 + v9.n64_f32[1]) < 2.0 )
            {
              v40 = (CVehicle *)(v36 - 1444);
              if ( *(_DWORD *)(*v31 + v35) == 10 )
              {
                v41 = (CPlayerPed *)FindPlayerPed(-1);
                CPlayerPed::DoStuffToGoOnFire(v41);
                v42 = (CEntity *)FindPlayerPed(-1);
                CFireManager::StartFire((CFireManager *)gFireManager, v42, this[5], v43, 0, 0x1B58u, 100);
                v44 = *(void (__fastcall **)(CVehicle *, _DWORD, _DWORD))(*(_DWORD *)(v36 - 1444) + 180);
                TyreNearestPoint = CVehicle::FindTyreNearestPoint(v40, *((float *)this + 1), *((float *)this + 2));
                v44(v40, (unsigned __int8)(TyreNearestPoint + 13), 0);
              }
              else
              {
                CFireManager::StartFire(
                  (CFireManager *)gFireManager,
                  (CEntity *)(v36 - 1444),
                  this[5],
                  COERCE_FLOAT(407),
                  0,
                  0x1B58u,
                  0);
              }
              v34 = (float32x2_t *)(this + 2);
            }
          }
        }
        --v33;
        v35 -= 2604;
      }
      while ( v33 != -1 );
    }
  }
  if ( (rand() & 3) == 0 )
  {
    v46 = (_DWORD *)CPools::ms_pObjectPool;
    v47 = *(_DWORD *)(CPools::ms_pObjectPool + 8);
    if ( v47 )
    {
      v48 = v47 - 1;
      v49 = 420 * v47 - 420;
      do
      {
        if ( *(char *)(v46[1] + v48) >= 0 )
        {
          v50 = (CObject *)(*v46 + v49);
          if ( v50 )
          {
            v51 = *((_DWORD *)v50 + 5);
            v52 = (_DWORD *)(v51 + 48);
            if ( !v51 )
              v52 = (_DWORD *)((char *)v50 + 4);
            v53.n64_u64[0] = vsub_f32(*(float32x2_t *)(v52 + 1), *((float32x2_t *)this + 1)).n64_u64[0];
            v9.n64_u64[0] = vmul_f32(v53, v53).n64_u64[0];
            if ( sqrtf(
                   (float)((float)((float)(*(float *)v52 - *((float *)this + 1))
                                 * (float)(*(float *)v52 - *((float *)this + 1)))
                         + v9.n64_f32[0])
                 + v9.n64_f32[1]) < 3.0 )
              CObject::ObjectFireDamage(v50, *(float *)&CTimer::ms_fTimeStep * 24.0, this[5]);
          }
        }
        --v48;
        v49 -= 420;
      }
      while ( v48 != -1 );
    }
  }
  if ( *((char *)this + 32) >= 1 && (rand() & 0x7F) == 0 )
  {
    v54 = 0;
    v55 = 0;
    do
    {
      v56 = gFireManager[v54];
      v54 += 40;
      v55 += v56 & 1;
    }
    while ( v54 != 2400 );
    if ( v55 < 25 )
    {
      v57 = (float)rand();
      v58 = rand();
      v104 = 0.0;
      *(float *)&v103 = (float)((float)(v57 * 4.6566e-10) + (float)(v57 * 4.6566e-10)) + -1.0;
      *((float *)&v103 + 1) = (float)((float)((float)v58 * 4.6566e-10) + (float)((float)v58 * 4.6566e-10)) + -1.0;
      CVector::Normalise((CVector *)&v103);
      v59 = rand();
      v60 = *((float *)this + 3);
      v61 = (float)((float)v59 * 4.6566e-10) + 2.0;
      v62 = *((float *)this + 2) + (float)(*((float *)&v103 + 1) * v61);
      *(float *)&v103 = *((float *)this + 1) + (float)(*(float *)&v103 * v61);
      *((float *)&v103 + 1) = v62;
      v104 = (float)(v60 + (float)(v61 * v104)) + 2.0;
      CCreepingFire::TryToStartFireAtCoors();
    }
  }
  if ( *((float *)this + 7) <= 2.0 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      if ( (rand() & 0xF) == 0 )
      {
        v75 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 60.0);
        v76 = 5 * v75;
        v77 = &gFireManager[40 * v75];
        if ( v77 != (char *)this )
        {
          v78 = &gFireManager[40 * v75];
          if ( (*v77 & 3) == 1 && *(float *)&gFireManager[40 * v75 + 28] <= 1.0 )
          {
            v1.n64_u32[0] = (unsigned __int32)this[1];
            v79 = *((float *)this + 2);
            v80 = *((float *)this + 3);
            v81 = (float *)&gFireManager[40 * v75];
            v82 = v81[1];
            v83 = v81[2];
            v84 = v81[3];
            v1.n64_f32[1] = (float)(v80 - v84) * (float)(v80 - v84);
            if ( sqrtf(
                   (float)((float)((float)(v1.n64_f32[0] - v82) * (float)(v1.n64_f32[0] - v82))
                         + (float)((float)(v79 - v83) * (float)(v79 - v83)))
                 + v1.n64_f32[1]) < 3.5 )
            {
              v1.n64_f32[1] = v1.n64_f32[0] * 0.7;
              v1.n64_f32[0] = *((float *)this + 7) + 1.0;
              this[7] = (CEntity *)v1.n64_u32[0];
              *((float *)this + 1) = v1.n64_f32[1] + (float)(v82 * 0.3);
              *((float *)this + 2) = (float)(v79 * 0.7) + (float)(v83 * 0.3);
              *((float *)this + 3) = (float)(v80 * 0.7) + (float)(v84 * 0.3);
              v85 = (CEntity *)(CTimer::m_snTimeInMilliseconds + 7000);
              v86 = this[9];
              if ( (unsigned int)this[6] > CTimer::m_snTimeInMilliseconds + 7000 )
                v85 = this[6];
              this[6] = v85;
              if ( v86 )
              {
                FxSystem_c::Kill(v86);
                v1.n64_u32[0] = (unsigned __int32)this[7];
                this[9] = 0;
              }
              v87 = "fire_med";
              if ( v1.n64_f32[0] > 2.0 )
                v87 = "fire_large";
              if ( v1.n64_f32[0] <= 1.0 )
                v87 = "fire";
              FxSystem = (CEntity *)FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)v87, (int)(this + 1), 0, 1);
              this[9] = FxSystem;
              if ( FxSystem )
                FxSystem_c::Play(FxSystem);
              if ( *((char *)this + 32) < gFireManager[8 * v76 + 32] )
                v77 = (char *)this;
              *((_BYTE *)this + 32) = v77[32];
              v89 = *v78;
              if ( (*v78 & 1) != 0 )
              {
                v90 = &gFireManager[8 * v76];
                *((_DWORD *)v90 + 6) = 0;
                *v78 = v89 & 0xE6 | 0x10;
                v93 = (FxSystem_c *)*((_DWORD *)v90 + 9);
                v92 = v90 + 36;
                v91 = v93;
                if ( v93 )
                {
                  FxSystem_c::Kill(v91);
                  *v92 = 0;
                }
                v94 = &gFireManager[8 * v76];
                v97 = (CEntity *)*((_DWORD *)v94 + 4);
                v96 = (CEntity **)(v94 + 16);
                v95 = v97;
                if ( v97 )
                {
                  v98 = *((_BYTE *)v95 + 58) & 7;
                  if ( v98 == 2 )
                  {
                    v99 = (_DWORD *)((char *)v95 + 1172);
                  }
                  else
                  {
                    if ( v98 != 3 )
                      goto LABEL_144;
                    v99 = (_DWORD *)((char *)v95 + 1848);
                  }
                  *v99 = 0;
                  v95 = *v96;
                  if ( !*v96 )
                  {
LABEL_145:
                    *v96 = 0;
                    goto LABEL_87;
                  }
LABEL_144:
                  CEntity::CleanUpOldReference(v95, v96);
                  goto LABEL_145;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_87:
  v63 = this[9];
  if ( v63 )
  {
    v1.n64_f32[0] = (float)((unsigned int)this[6] - CTimer::m_snTimeInMilliseconds) / 3500.0;
    v9.n64_f32[0] = *((float *)this + 7) - (float)(int)*((float *)this + 7);
    FxSystem_c::SetConstTime(v63, 1u, vmin_f32(v9, v1).n64_f32[0]);
  }
  if ( CTimer::m_snTimeInMilliseconds >= (unsigned int)this[6] )
  {
    v67 = *(unsigned __int8 *)this;
    if ( (v67 & 2) != 0 )
    {
LABEL_106:
      rand();
      return (CEntity *)CPointLights::AddLight();
    }
  }
  else
  {
    v64 = (float32x2_t *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v64 = (float32x2_t *)&qword_951FAC;
    v65.n64_u64[0] = vsub_f32((float32x2_t)v64->n64_u64[0], *(float32x2_t *)(this + 1)).n64_u64[0];
    v66 = vmul_f32(v65, v65).n64_u64[0];
    if ( sqrtf(*(float *)&v66 + *((float *)&v66 + 1)) < (float)*((unsigned __int8 *)this + 33) )
      goto LABEL_106;
    v67 = *(unsigned __int8 *)this;
    if ( (v67 & 2) != 0 )
      goto LABEL_106;
  }
  v68 = *((float *)this + 7);
  if ( v68 > 1.0 )
  {
    this[6] = (CEntity *)(CTimer::m_snTimeInMilliseconds + 7000);
    v69 = this[9];
    v70 = v68 + -1.0;
    *((float *)this + 7) = v70;
    if ( v69 )
    {
      FxSystem_c::Kill(v69);
      v70 = *((float *)this + 7);
      this[9] = 0;
    }
    v71 = "fire_med";
    if ( v70 > 2.0 )
      v71 = "fire_large";
    if ( v70 <= 1.0 )
      v71 = "fire";
    result = (CEntity *)FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)v71, (int)(this + 1), 0, 1);
    this[9] = result;
    if ( result )
      return (CEntity *)FxSystem_c::Play(result);
    return result;
  }
  result = (CEntity *)(v67 << 31);
  if ( v67 << 31 )
  {
    this[6] = 0;
    v72 = this[9];
    *(_BYTE *)this = v67 & 0xE6 | 0x10;
    if ( v72 )
    {
      FxSystem_c::Kill(v72);
      this[9] = 0;
    }
    result = *v100;
    if ( *v100 )
    {
      v73 = *((_BYTE *)result + 58) & 7;
      if ( v73 == 2 )
      {
        v74 = (_DWORD *)((char *)result + 1172);
      }
      else
      {
        if ( v73 != 3 )
          goto LABEL_140;
        v74 = (_DWORD *)((char *)result + 1848);
      }
      *v74 = 0;
      result = *v100;
      if ( !*v100 )
      {
LABEL_141:
        result = 0;
        *v100 = 0;
        return result;
      }
LABEL_140:
      CEntity::CleanUpOldReference(result, v100);
      goto LABEL_141;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3f2818
// Original: _ZN5CFire22CreateFxSysForStrengthEP5RwV3dP11RwMatrixTag
// Demangled: CFire::CreateFxSysForStrength(RwV3d *,RwMatrixTag *)
FxSystem_c *__fastcall CFire::CreateFxSysForStrength(int a1, int a2, int a3)
{
  FxSystem_c *v5; // r0
  float v7; // s4
  char *v8; // r1
  FxSystem_c *result; // r0

  v5 = *(FxSystem_c **)(a1 + 36);
  if ( v5 )
  {
    FxSystem_c::Kill(v5);
    *(_DWORD *)(a1 + 36) = 0;
  }
  v7 = *(float *)(a1 + 28);
  v8 = "fire_med";
  if ( v7 > 2.0 )
    v8 = "fire_large";
  if ( v7 <= 1.0 )
    v8 = "fire";
  result = (FxSystem_c *)FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)v8, a2, a3, 1);
  *(_DWORD *)(a1 + 36) = result;
  if ( result )
    return (FxSystem_c *)sub_18C114(result);
  return result;
}


// ============================================================
