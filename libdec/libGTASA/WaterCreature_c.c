
// Address: 0x18dbb0
// Original: j__ZN15WaterCreature_c4InitEiP7CVectorPS_ff
// Demangled: WaterCreature_c::Init(int,CVector *,WaterCreature_c*,float,float)
// attributes: thunk
int __fastcall WaterCreature_c::Init(
        WaterCreature_c *this,
        int a2,
        CVector *a3,
        WaterCreature_c *a4,
        float a5,
        float a6)
{
  return _ZN15WaterCreature_c4InitEiP7CVectorPS_ff(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x1a0b98
// Original: j__ZN15WaterCreature_c6UpdateEf
// Demangled: WaterCreature_c::Update(float)
// attributes: thunk
int __fastcall WaterCreature_c::Update(WaterCreature_c *this, float a2)
{
  return _ZN15WaterCreature_c6UpdateEf(this, a2);
}


// ============================================================

// Address: 0x591f1c
// Original: _ZN15WaterCreature_cC2Ev
// Demangled: WaterCreature_c::WaterCreature_c(void)
void __fastcall WaterCreature_c::WaterCreature_c(WaterCreature_c *this)
{
  int v1; // r0

  ListItem_c::ListItem_c(this);
  *(_DWORD *)(v1 + 8) = 0;
}


// ============================================================

// Address: 0x591f2a
// Original: _ZN15WaterCreature_cD2Ev
// Demangled: WaterCreature_c::~WaterCreature_c()
// attributes: thunk
void __fastcall WaterCreature_c::~WaterCreature_c(WaterCreature_c *this)
{
  j_ListItem_c::~ListItem_c(this);
}


// ============================================================

// Address: 0x591f30
// Original: _ZN15WaterCreature_c4InitEiP7CVectorPS_ff
// Demangled: WaterCreature_c::Init(int,CVector *,WaterCreature_c*,float,float)
int __fastcall WaterCreature_c::Init(
        WaterCreature_c *this,
        int a2,
        CVector *a3,
        WaterCreature_c *a4,
        float a5,
        float a6)
{
  float32x2_t v6; // d0
  float32x2_t v7; // d1
  int v12; // r5
  __int16 **v13; // r3
  __int16 *v14; // r5
  float v15; // s20
  float v16; // s22
  float v17; // s16
  float v18; // s18
  float v19; // s24
  float v20; // s26
  CObject *v21; // r0
  int v22; // r1
  int v23; // r0
  int v24; // r0
  int v25; // r0
  __int64 v26; // kr00_8
  int v27; // r0
  __int64 v28; // kr08_8
  int v29; // r10
  int v30; // r6
  int v31; // r5
  float v32; // s0
  int v33; // r0
  float v34; // s10
  float v35; // s12
  float v36; // s0
  float v37; // s2
  float v38; // s4
  float v39; // s0
  float v40; // s2
  float v41; // s4
  int v42; // r1
  float *v43; // r0
  int v44; // r1
  __int64 v45; // kr10_8
  int v46; // r6
  int v47; // r0
  _DWORD *v48; // r1
  int v49; // r0
  int v50; // r1
  float v51; // s0
  int v52; // r0
  int v53; // r1
  float v54; // s0
  CMatrix *v55; // r0
  int v56; // r2
  CEntity *v57; // r1

  if ( (unsigned __int16)CObject::nNoTempObjects > 0x95u )
    return 0;
  v13 = &(&WaterCreatureManager_c::ms_waterCreatureInfos)[11 * a2];
  v14 = *v13;
  v15 = *((float *)v13 + 4);
  v16 = *((float *)v13 + 5);
  v17 = *((float *)v13 + 6);
  v18 = *((float *)v13 + 7);
  if ( !a4 )
  {
    v19 = a5 - *(float *)&(&WaterCreatureManager_c::ms_waterCreatureInfos)[11 * a2 + 1];
    v7.n64_f32[0] = a5 + -50.0;
    v6.n64_f32[0] = (float)(a5 - a6) + 2.0;
    v20 = vmax_f32(v6, v7).n64_f32[0];
    if ( v19 < v20 )
      return 0;
    *((float *)a3 + 2) = v20 + (float)((float)(v19 - v20) * (float)((float)rand() * 4.6566e-10));
  }
  *(_BYTE *)(CPools::ms_pObjectPool + 17) = 1;
  v21 = (CObject *)CObject::operator new((CObject *)&elf_hash_bucket[34], 1u);
  v22 = (unsigned __int16)*v14;
  v12 = 0;
  CObject::CObject(v21, v22, 0);
  *((_DWORD *)this + 2) = v23;
  *(_BYTE *)(CPools::ms_pObjectPool + 17) = 0;
  v24 = *((_DWORD *)this + 2);
  if ( v24 )
  {
    *(_BYTE *)(v24 + 51) = CGame::currArea;
    (*(void (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2), 1);
    v25 = *((_DWORD *)this + 2);
    v26 = *(_QWORD *)(v25 + 28);
    *(_DWORD *)(v25 + 28) = v26 | 0x100000;
    *(_DWORD *)(v25 + 32) = HIDWORD(v26);
    *(_DWORD *)(*((_DWORD *)this + 2) + 68) &= ~2u;
    *(_DWORD *)(*((_DWORD *)this + 2) + 28) &= ~1u;
    *(_BYTE *)(*((_DWORD *)this + 2) + 320) = 5;
    if ( (unsigned int)(a2 - 3) <= 1 )
    {
      v27 = *((_DWORD *)this + 2);
      v28 = *(_QWORD *)(v27 + 28);
      *(_DWORD *)(v27 + 28) = v28 | 0x4000;
      *(_DWORD *)(v27 + 32) = HIDWORD(v28);
    }
    *((_DWORD *)this + 7) = a4;
    *((_BYTE *)this + 12) = a2;
    *((_BYTE *)this + 13) = 0;
    if ( a4 )
    {
      v29 = rand();
      v30 = rand();
      v31 = rand();
      v32 = (float)rand();
      v33 = *((_DWORD *)this + 2);
      v34 = *((float *)a3 + 1);
      v35 = *((float *)a3 + 2);
      v36 = v15 + (float)((float)(v16 - v15) * (float)(v32 * 4.6566e-10));
      v37 = (float)((float)((float)((float)v30 * 4.6566e-10) + (float)((float)v30 * 4.6566e-10)) + -1.0) * v36;
      v38 = (float)((float)((float)((float)v29 * 4.6566e-10) + (float)((float)v29 * 4.6566e-10)) + -1.0) * v36;
      v39 = v35 + (float)((float)((float)((float)v31 * 4.6566e-10) + -0.5) * v36);
      v40 = v34 + v37;
      v41 = *(float *)a3 + v38;
      *((float *)this + 8) = *(float *)a3 - v41;
      *((float *)this + 9) = v34 - v40;
      *((float *)this + 10) = v35 - v39;
      v42 = *(_DWORD *)(v33 + 20);
      if ( v42 )
      {
        *(float *)(v42 + 48) = v41;
        *(float *)(*(_DWORD *)(v33 + 20) + 52) = v40;
        v43 = (float *)(*(_DWORD *)(v33 + 20) + 56);
      }
      else
      {
        *(float *)(v33 + 4) = v41;
        *(float *)(v33 + 8) = v40;
        v43 = (float *)(v33 + 12);
      }
      *v43 = v39;
      v49 = *((_DWORD *)a4 + 2);
      v50 = *(_DWORD *)(v49 + 20);
      if ( v50 )
        v51 = atan2f(COERCE_FLOAT(*(_DWORD *)(v50 + 16) ^ 0x80000000), *(float *)(v50 + 20));
      else
        v51 = *(float *)(v49 + 16);
      *((float *)this + 11) = v51;
      v18 = *((float *)a4 + 5);
    }
    else
    {
      v44 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 8) = 0;
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 10) = 0;
      v45 = *(_QWORD *)a3;
      v46 = *(_DWORD *)(v44 + 20);
      v47 = *((_DWORD *)a3 + 2);
      if ( v46 )
      {
        *(_DWORD *)(v46 + 48) = v45;
        *(_DWORD *)(*(_DWORD *)(v44 + 20) + 52) = HIDWORD(v45);
        v48 = (_DWORD *)(*(_DWORD *)(v44 + 20) + 56);
      }
      else
      {
        *(_QWORD *)(v44 + 4) = v45;
        v48 = (_DWORD *)(v44 + 12);
      }
      *v48 = v47;
      *((float *)this + 11) = (float)((float)((float)rand() * 4.6566e-10) * 6.2832) + -3.1416;
    }
    v52 = rand();
    *((_BYTE *)this + 14) = 0;
    v53 = *((_DWORD *)this + 2);
    v54 = *((float *)this + 11);
    *((_BYTE *)this + 48) = 1;
    *((float *)this + 5) = v17 + (float)((float)(v18 - v17) * (float)((float)v52 * 4.6566e-10));
    v55 = *(CMatrix **)(v53 + 20);
    if ( v55 )
      CMatrix::SetRotateZOnly(v55, v54);
    else
      *(float *)(v53 + 16) = v54;
    v56 = *((_DWORD *)this + 2);
    if ( *(_DWORD *)(v56 + 24) )
    {
      if ( *(_DWORD *)(v56 + 20) )
        CMatrix::UpdateRwMatrix();
      else
        CSimpleTransform::UpdateRwMatrix();
    }
    CEntity::UpdateRwFrame(*((CEntity **)this + 2));
    CWorld::Add(*((CWorld **)this + 2), v57);
    v12 = 1;
    ++CObject::nNoTempObjects;
  }
  return v12;
}


// ============================================================

// Address: 0x59226c
// Original: _ZN15WaterCreature_c4ExitEv
// Demangled: WaterCreature_c::Exit(void)
__int16 *__fastcall WaterCreature_c::Exit(CWorld **this)
{
  CEntity *v2; // r1
  CWorld *v3; // r0
  __int16 *result; // r0

  List_c::RemoveItem((List_c *)dword_A15D5C, (ListItem_c *)this);
  List_c::AddItem((List_c *)&unk_A15D50, (ListItem_c *)this);
  CWorld::Remove(this[2], v2);
  v3 = this[2];
  if ( v3 )
    (*(void (__fastcall **)(CWorld *))(*(_DWORD *)v3 + 4))(v3);
  this[2] = 0;
  result = &CObject::nNoTempObjects;
  --CObject::nNoTempObjects;
  return result;
}


// ============================================================

// Address: 0x5922bc
// Original: _ZN15WaterCreature_c6UpdateEf
// Demangled: WaterCreature_c::Update(float)
float *__fastcall WaterCreature_c::Update(WaterCreature_c *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d3
  float32x2_t v5; // d11
  float *v8; // r0
  int v9; // r2
  float v10; // s18
  float v11; // s22
  int v12; // r0
  int v13; // r1
  float *v14; // r2
  int v15; // r0
  float v16; // s0
  float v17; // s2
  int v18; // r1
  float v19; // s4
  float *v20; // r2
  float v21; // s0
  float v22; // s4
  float v23; // s20
  CGeneral *RadianAngleBetweenPoints; // r0
  float v25; // r1
  int v26; // r0
  int v27; // r2
  float v28; // r1
  int v29; // s0
  CMatrix *v30; // r0
  float v31; // s18
  float v32; // s20
  float v33; // s24
  int v34; // r4
  int v35; // r0
  int v36; // r1
  int v37; // r2
  unsigned __int64 v38; // d16
  unsigned __int16 v39; // r0
  int v40; // r1
  float *v41; // r0
  float *v42; // r4
  float v43; // s24
  int v44; // r1
  float *v45; // r0
  float v46; // s0
  int v47; // r4
  float *v48; // r0
  float *v49; // r1
  float32x2_t v50; // d16
  float v51; // s26
  float v52; // s28
  float v53; // s16
  float v54; // s24
  float v55; // s4
  float v56; // s2
  float v57; // s0
  float *v58; // r0
  float v59; // r5
  float v60; // r6
  float v61; // s0
  float v62; // s4
  float v63; // r5
  float v64; // r6
  float v65; // s4
  float v66; // s0
  float v67; // s2
  float v68; // s8
  float v69; // s6
  float v70; // s10
  char v71; // r4
  CGeneral *v72; // r0
  float v73; // r1
  int v74; // r4
  int v75; // r0
  float v76; // s0
  float v77; // s2
  float v78; // s4
  float v79; // s2
  CMatrix *v80; // r0
  int v81; // r0
  _BYTE *v82; // r5
  unsigned __int16 v83; // r0
  int PlayerPed; // r0
  int v85; // r1
  float *v86; // r2
  float v87; // s0
  float v88; // s2
  CGeneral *v89; // r0
  float v90; // r1
  int v91; // r1
  unsigned int v92; // r0
  int v93; // r2
  CMatrix *v94; // r0
  float v95; // s18
  unsigned int v96; // r2
  unsigned int v97; // r1
  float *v98; // r4
  float *v99; // r6
  float v100; // s4
  float v101; // s2
  float v102; // s0
  float v103; // r5
  float v104; // r9
  float v105; // s4
  float v106; // s2
  float v107; // s0
  float *v108; // r0
  int v109; // r0
  CEntity **v110; // r4
  int v111; // r1
  float *v112; // r2
  __int64 v113; // kr00_8
  CEntity *v114; // r0
  float v115; // s0
  int v116; // r1
  float *v117; // r0
  CEntity *v118; // r1
  CEntity *v119; // r1
  int v120; // r3
  float *v121; // r6
  float *result; // r0
  float v123; // s0
  float v124; // s2
  float v125; // s4
  WaterCreature_c *v126; // r2
  int v127; // r6
  WaterCreature_c *v128; // r3
  bool v129; // zf
  int v130; // r2
  int v131; // r3
  int v132; // r6
  float *v133; // r5
  float *i; // r2
  int v135; // r6
  float *v136; // [sp+0h] [bp-110h]
  CVector *v137; // [sp+8h] [bp-108h]
  _BYTE v138[4]; // [sp+20h] [bp-F0h] BYREF
  float v139[3]; // [sp+24h] [bp-ECh] BYREF
  unsigned __int64 v140; // [sp+30h] [bp-E0h] BYREF
  float v141; // [sp+38h] [bp-D8h]
  float v142; // [sp+40h] [bp-D0h] BYREF
  float v143; // [sp+44h] [bp-CCh]
  float v144; // [sp+48h] [bp-C8h]
  CGeneral *v145; // [sp+50h] [bp-C0h]
  float v146; // [sp+54h] [bp-BCh]

  v8 = (float *)&(&WaterCreatureManager_c::ms_waterCreatureInfos)[11 * *((unsigned __int8 *)this + 12)];
  v9 = *((_DWORD *)this + 7);
  if ( v9 )
  {
    v10 = v8[5];
    v11 = v8[6];
    v12 = *(_DWORD *)(v9 + 8);
    v13 = *(_DWORD *)(v12 + 20);
    v14 = (float *)(v13 + 48);
    if ( !v13 )
      v14 = (float *)(v12 + 4);
    v15 = *((_DWORD *)this + 2);
    v16 = *v14 + *((float *)this + 8);
    v17 = v14[1] + *((float *)this + 9);
    v18 = *(_DWORD *)(v15 + 20);
    v19 = v14[2] + *((float *)this + 10);
    v20 = (float *)(v18 + 48);
    if ( !v18 )
      v20 = (float *)(v15 + 4);
    v21 = v16 - *v20;
    v22 = v19 - v20[2];
    v143 = v17 - v20[1];
    v142 = v21;
    v144 = v22;
    v23 = COERCE_FLOAT(CVector::NormaliseAndMag((CVector *)&v142));
    if ( v23 > 0.0 )
    {
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                               (CGeneral *)LODWORD(v142),
                                               v143,
                                               0.0,
                                               0.0,
                                               *(float *)&v136);
      v26 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v25);
      v27 = *((_DWORD *)this + 2);
      v28 = *(float *)&v26;
      v29 = v26;
      v30 = *(CMatrix **)(v27 + 20);
      if ( v30 )
        CMatrix::SetRotateZOnly(v30, v28);
      else
        *(_DWORD *)(v27 + 16) = v29;
    }
    if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) < 5 )
    {
      v43 = *(float *)(*((_DWORD *)this + 7) + 20);
      *((float *)this + 5) = v11 + (float)((float)(v43 - v11) * (float)((float)rand() * 4.6566e-10));
    }
    v44 = *((_DWORD *)this + 7);
    v45 = (float *)((char *)this + 20);
    if ( *(char *)(v44 + 14) > 0 )
      v45 = (float *)(v44 + 24);
    v46 = *v45;
    if ( v23 > 2.0 )
      v46 = (float)((float)(v23 + -2.0) * 1.1) * v46;
    v2.n64_f32[0] = v46 * a2;
    v5.n64_u32[0] = 0;
    v3.n64_f32[0] = v23 + -0.01;
    v47 = *((_DWORD *)this + 2);
    v48 = *(float **)(v47 + 20);
    v49 = v48 + 12;
    v50.n64_u64[0] = vmax_f32(v3, v5).n64_u64[0];
    if ( !v48 )
      v49 = (float *)(v47 + 4);
    v51 = *v49;
    v52 = v49[1];
    v53 = v49[2];
    LODWORD(v54) = vmin_f32(v2, v50).n64_u32[0];
    if ( v48 )
    {
      v55 = v48[6];
      v56 = v52 + (float)(v54 * v48[5]);
      v48[12] = v51 + (float)(v54 * v48[4]);
      v57 = v54 * v55;
      *(float *)(*(_DWORD *)(v47 + 20) + 52) = v56;
      v58 = (float *)(*(_DWORD *)(v47 + 20) + 56);
    }
    else
    {
      v59 = *(float *)(v47 + 16);
      v60 = sinf(v59);
      v61 = cosf(v59);
      v58 = (float *)(v47 + 12);
      v62 = v52 + (float)(v54 * v61);
      v57 = v54 * 0.0;
      *(float *)(v47 + 4) = v51 - (float)(v60 * v54);
      *(float *)(v47 + 8) = v62;
    }
    *v58 = v53 + v57;
    if ( v23 > (float)(v10 * 5.0) )
      *((_DWORD *)this + 7) = 0;
    goto LABEL_79;
  }
  v31 = v8[8];
  v32 = v8[10];
  if ( *((_BYTE *)this + 48)
    || *((_BYTE *)this + 14)
    || (v33 = v8[9], (float)((float)((float)rand() * 4.6566e-10) + 0.0) >= v33) )
  {
    v34 = 0;
  }
  else
  {
    v34 = 1;
    *((float *)this + 11) = (float)((float)((float)rand() * 4.6566e-10) * 6.2832) + -3.1416;
  }
  v35 = *((_DWORD *)this + 2);
  v36 = *(_DWORD *)(v35 + 20);
  v37 = v36 + 48;
  if ( !v36 )
    v37 = v35 + 4;
  v38 = *(_QWORD *)v37;
  v141 = *(float *)(v37 + 8);
  v140 = v38;
  v39 = rand();
  if ( v32 > 0.0 && (v34 || (int)(float)((float)((float)v39 * 0.000015259) * 100.0) < 10 || *((_BYTE *)this + 48)) )
  {
    v40 = *((_DWORD *)this + 2);
    v41 = *(float **)(v40 + 20);
    v42 = v41 + 12;
    if ( v41 )
    {
      v67 = v41[4];
      v65 = v41[5];
      v66 = v41[6];
    }
    else
    {
      v42 = (float *)(v40 + 4);
      v63 = *(float *)(v40 + 16);
      v64 = sinf(v63);
      v65 = cosf(v63);
      v66 = 0.0;
      LODWORD(v67) = LODWORD(v64) ^ 0x80000000;
    }
    v68 = v42[1];
    v69 = *v42;
    v70 = v42[2];
    v71 = 0;
    v139[1] = (float)(v32 * v65) + v68;
    v139[0] = (float)(v32 * v67) + v69;
    v139[2] = (float)(v32 * v66) + v70;
    if ( CWorld::ProcessLineOfSight((int)&v140, (int)v139, (int)&v142, (int)v138, 1, 0, 0, 0, 0, 0, 0, 0) == 1 )
    {
      v72 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(v145, v146, 0.0, 0.0, *(float *)&v136);
      v71 = 1;
      *((_DWORD *)this + 11) = CGeneral::LimitRadianAngle(v72, v73);
    }
    *((_BYTE *)this + 48) = v71;
  }
  v74 = *((_DWORD *)this + 2);
  v75 = *(_DWORD *)(v74 + 20);
  if ( v75 )
    v76 = atan2f(COERCE_FLOAT(*(_DWORD *)(v75 + 16) ^ 0x80000000), *(float *)(v75 + 20));
  else
    v76 = *(float *)(v74 + 16);
  v77 = *((float *)this + 11);
  if ( (float)(v76 + 3.1416) >= v77 )
  {
    if ( (float)(v76 + -3.1416) <= v77 )
      goto LABEL_49;
    v78 = 6.2832;
  }
  else
  {
    v78 = -6.2832;
  }
  v77 = v77 + v78;
  *((float *)this + 11) = v77;
LABEL_49:
  v79 = v77 - v76;
  if ( fabsf(v79) > v31 )
  {
    if ( v79 >= 0.0 )
      v76 = v31 + v76;
    else
      v76 = v76 - v31;
  }
  v80 = *(CMatrix **)(v74 + 20);
  if ( v80 )
    CMatrix::SetRotateZOnly(v80, v76);
  else
    *(float *)(v74 + 16) = v76;
  if ( !*((_BYTE *)this + 48) )
  {
    PlayerPed = FindPlayerPed(0);
    v85 = *(_DWORD *)(PlayerPed + 20);
    v86 = (float *)(v85 + 48);
    if ( !v85 )
      v86 = (float *)(PlayerPed + 4);
    v87 = *(float *)&v140 - *v86;
    v88 = *((float *)&v140 + 1) - v86[1];
    v144 = v141 - v86[2];
    v143 = v88;
    v142 = v87;
    if ( COERCE_FLOAT(CVector::NormaliseAndMag((CVector *)&v142)) >= 5.0 )
    {
      v82 = (char *)this + 14;
    }
    else
    {
      *((_BYTE *)this + 14) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 15.0) + 35;
      v82 = (char *)this + 14;
      *((_WORD *)this + 8) = 0;
      *((_WORD *)this + 9) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 2500.0) + 2000;
      v89 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                          (CGeneral *)LODWORD(v142),
                          v143,
                          0.0,
                          0.0,
                          *(float *)&v136);
      v91 = CGeneral::LimitRadianAngle(v89, v90);
      v92 = *((unsigned __int8 *)this + 12);
      *((_DWORD *)this + 11) = v91;
      if ( v92 <= 2 )
      {
        v93 = *((_DWORD *)this + 2);
        v94 = *(CMatrix **)(v93 + 20);
        if ( v94 )
          CMatrix::SetRotateZOnly(v94, *(float *)&v91);
        else
          *(_DWORD *)(v93 + 16) = v91;
      }
    }
    goto LABEL_67;
  }
  v82 = (char *)this + 14;
  LOBYTE(v81) = *((_BYTE *)this + 14);
  if ( !(_BYTE)v81 )
  {
    if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) <= 7 )
    {
      v83 = rand();
      *((_WORD *)this + 8) = 0;
      *((_BYTE *)this + 14) = (int)(float)((float)((float)v83 * 0.000015259) * 10.0) + 5;
      *((_WORD *)this + 9) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1500.0) + 1000;
    }
LABEL_67:
    LOBYTE(v81) = *v82;
  }
  v95 = *((float *)this + 5);
  v81 = (char)v81;
  if ( (char)v81 >= 1 )
  {
    v96 = *((unsigned __int16 *)this + 9);
    v97 = *((unsigned __int16 *)this + 8) + (unsigned int)(float)(a2 * 1000.0);
    *((_WORD *)this + 8) = v97;
    if ( (unsigned __int16)v97 >= v96 )
      *v82 = 0;
    v4.n64_u32[0] = 0;
    v2.n64_f32[0] = 1.0 - (float)((float)(unsigned __int16)v97 / (float)v96);
    v95 = v95 + (float)(v95 * (float)((float)((float)v81 * 0.1) * vmax_f32(v2, v4).n64_f32[0]));
    *((float *)this + 6) = v95;
  }
  v98 = (float *)*((_DWORD *)this + 2);
  v99 = (float *)*((_DWORD *)v98 + 5);
  if ( v99 )
  {
    v100 = v99[4];
    v101 = v99[5];
    v102 = v99[6];
  }
  else
  {
    v103 = v98[4];
    v104 = sinf(v103);
    v101 = cosf(v103);
    v102 = 0.0;
    LODWORD(v100) = LODWORD(v104) ^ 0x80000000;
  }
  v105 = *(float *)&v140 + (float)(v95 * (float)(v100 * a2));
  v106 = (float)(v95 * (float)(v101 * a2)) + *((float *)&v140 + 1);
  v107 = (float)(v95 * (float)(v102 * a2)) + v141;
  v140 = __PAIR64__(LODWORD(v106), LODWORD(v105));
  v141 = v107;
  if ( v99 )
  {
    v99[12] = v105;
    *(float *)(*((_DWORD *)v98 + 5) + 52) = v106;
    v108 = (float *)(*((_DWORD *)v98 + 5) + 56);
  }
  else
  {
    v108 = v98 + 3;
    v98[1] = v105;
    v98[2] = v106;
  }
  *v108 = v107;
LABEL_79:
  if ( (unsigned __int8)(*((_BYTE *)this + 12) - 3) >= 2u )
  {
    v110 = (CEntity **)((char *)this + 8);
  }
  else
  {
    v110 = (CEntity **)((char *)this + 8);
    v109 = *((_DWORD *)this + 2);
    v111 = *(_DWORD *)(v109 + 20);
    v112 = (float *)(v111 + 48);
    if ( !v111 )
      v112 = (float *)(v109 + 4);
    v113 = *(_QWORD *)v112;
    if ( CWaterLevel::GetWaterLevel(
           (CWaterLevel *)v113,
           *((float *)&v113 + 1),
           v112[2],
           COERCE_FLOAT(&v142),
           (float *)((char *)&stderr + 1),
           0,
           v137) == 1 )
    {
      v114 = *v110;
      v115 = v142 + -0.2;
      v116 = *((_DWORD *)*v110 + 5);
      if ( v116 )
      {
        *(_DWORD *)(v116 + 48) = v113;
        *(_DWORD *)(*((_DWORD *)v114 + 5) + 52) = HIDWORD(v113);
        v117 = (float *)(*((_DWORD *)v114 + 5) + 56);
      }
      else
      {
        *(_QWORD *)((char *)v114 + 4) = v113;
        v117 = (float *)((char *)v114 + 12);
      }
      *v117 = v115;
    }
  }
  if ( *((_DWORD *)*v110 + 6) )
  {
    if ( *((_DWORD *)*v110 + 5) )
      CMatrix::UpdateRwMatrix();
    else
      CSimpleTransform::UpdateRwMatrix();
  }
  CEntity::UpdateRwFrame(*v110);
  CWorld::Remove(*v110, v118);
  CWorld::Add(*v110, v119);
  v120 = *((_DWORD *)*v110 + 5);
  v121 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v121 = (float *)&qword_951FAC;
  result = (float *)(v120 + 48);
  v123 = *v121;
  v124 = v121[1];
  v125 = v121[2];
  if ( !v120 )
    result = (float *)((char *)*v110 + 4);
  if ( (float)((float)((float)((float)(*result - v123) * (float)(*result - v123))
                     + (float)((float)(result[1] - v124) * (float)(result[1] - v124)))
             + (float)((float)(result[2] - v125) * (float)(result[2] - v125))) > 3600.0 )
  {
    v126 = (WaterCreature_c *)*((_DWORD *)this + 7);
    if ( !v126 )
      v126 = this;
    v127 = dword_A15D5C[0];
    result = 0;
    while ( 1 )
    {
      v128 = (WaterCreature_c *)v127;
      if ( !v127 )
        break;
      v127 = *(_DWORD *)(v127 + 4);
      v129 = v126 == v128;
      if ( v126 != v128 )
        v129 = *((_DWORD *)v128 + 7) == (_DWORD)v126;
      if ( v129 )
      {
        *((_DWORD *)&v142 + (_DWORD)result) = v128;
        result = (float *)((char *)result + 1);
      }
    }
    if ( (int)result >= 1 )
    {
      v130 = 0;
      while ( 1 )
      {
        v131 = *(_DWORD *)(*((_DWORD *)&v142 + v130) + 8);
        v132 = *(_DWORD *)(v131 + 20);
        v133 = (float *)(v132 + 48);
        if ( !v132 )
          v133 = (float *)(v131 + 4);
        if ( (float)((float)((float)((float)(*v133 - v123) * (float)(*v133 - v123))
                           + (float)((float)(v133[1] - v124) * (float)(v133[1] - v124)))
                   + (float)((float)(v133[2] - v125) * (float)(v133[2] - v125))) <= 3600.0 )
          break;
        if ( ++v130 >= (int)result )
        {
          for ( i = 0; i != result; i = (float *)((char *)i + 1) )
          {
            v135 = *((_DWORD *)&v142 + (_DWORD)i);
            *(_BYTE *)(v135 + 13) = 1;
          }
          return result;
        }
      }
    }
  }
  return result;
}


// ============================================================
