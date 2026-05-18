
// Address: 0x18d388
// Original: j__ZN16CPlayerCrossHair6UpdateEiP4CPad
// Demangled: CPlayerCrossHair::Update(int,CPad *)
// attributes: thunk
int __fastcall CPlayerCrossHair::Update(CPlayerCrossHair *this, int a2, CPad *a3)
{
  return _ZN16CPlayerCrossHair6UpdateEiP4CPad(this, a2, a3);
}


// ============================================================

// Address: 0x19cf40
// Original: j__ZN16CPlayerCrossHair6RenderEi
// Demangled: CPlayerCrossHair::Render(int)
// attributes: thunk
int __fastcall CPlayerCrossHair::Render(CPlayerCrossHair *this, int a2)
{
  return _ZN16CPlayerCrossHair6RenderEi(this, a2);
}


// ============================================================

// Address: 0x40b644
// Original: _ZN16CPlayerCrossHair6UpdateEiP4CPad
// Demangled: CPlayerCrossHair::Update(int,CPad *)
int __fastcall CPlayerCrossHair::Update(CPlayerCrossHair *this, int a2, CPad *a3)
{
  int result; // r0
  float v7; // s16
  int v8; // r6
  float v9; // s18
  int SteeringUpDown; // r0
  float v11; // s2
  float v12; // s4
  float v13; // s0
  float v14; // s16
  float v15; // s20
  float v16; // s18
  float v17; // s22
  float v18; // r0
  float v19; // r4
  float v20; // s19
  float v21; // s30
  float v22; // s28
  float v23; // s17
  float v24; // r0
  float v25; // s0
  CWeapon *v26; // r0
  int v27; // r10
  int v28; // r1
  double v29; // d16
  _DWORD *v30; // r1
  unsigned int v31; // r8
  int v32; // r3
  int v33; // r6
  int v34; // r3
  unsigned int v35; // r2
  int v36; // r6
  double v37; // [sp+18h] [bp-90h] BYREF
  int v38; // [sp+20h] [bp-88h]
  float v39[25]; // [sp+44h] [bp-64h] BYREF

  result = *(unsigned __int8 *)this;
  if ( result )
  {
    v7 = *(float *)&CTimer::ms_fTimeStep;
    *((float *)this + 1) = *((float *)this + 1) + (float)((float)(v7 * (float)CPad::GetSteeringLeftRight(a3)) / 3000.0);
    v8 = dword_6E05DC;
    v9 = *(float *)&CTimer::ms_fTimeStep;
    SteeringUpDown = CPad::GetSteeringUpDown(a3);
    v11 = -(float)((float)(v9 * (float)SteeringUpDown) / 3000.0);
    if ( v8 )
      v11 = (float)(v9 * (float)SteeringUpDown) / 3000.0;
    v12 = *((float *)this + 1);
    v13 = *((float *)this + 2) + v11;
    *((float *)this + 2) = v13;
    if ( v12 <= 0.9 )
    {
      if ( v12 < -0.9 )
        *((_DWORD *)this + 1) = -1083808154;
    }
    else
    {
      *((_DWORD *)this + 1) = 1063675494;
    }
    if ( v13 <= 0.9 )
    {
      if ( v13 < -0.9 )
        *((_DWORD *)this + 2) = -1083808154;
    }
    else
    {
      *((_DWORD *)this + 2) = 1063675494;
    }
    result = CPad::GetCarGunFired(a3, 0, 0);
    if ( result )
    {
      CamShakeNoPos((CCamera *)&TheCamera, 0.2);
      v14 = *((float *)this + 1);
      v15 = unk_9528A4;
      v16 = flt_9528AC;
      v17 = unk_9528A8;
      v18 = COERCE_FLOAT(CCamera::FindCamFOV((CCamera *)&TheCamera));
      v19 = tanf((float)(v18 * 0.017453) * 0.5);
      v20 = *((float *)this + 2);
      v21 = *(float *)&dword_9528B4;
      v22 = *(float *)&dword_9528BC;
      v23 = *(float *)&dword_9528B8;
      v24 = COERCE_FLOAT(CCamera::FindCamFOV((CCamera *)&TheCamera));
      v25 = (float)(v20 * tanf((float)(v24 * 0.017453) * 0.5)) / *(float *)&CDraw::ms_fAspectRatio;
      v39[0] = (float)((float)((float)(v21 - (float)((float)(v14 * v15) * v19)) - (float)(flt_9528C4 * v25)) * 200.0)
             + *(float *)&dword_9528D4;
      v39[1] = *(float *)&dword_9528D8
             + (float)((float)((float)(v23 - (float)((float)(v14 * v17) * v19)) - (float)(v25 * unk_9528C8)) * 200.0);
      v39[2] = *(float *)&dword_9528DC
             + (float)((float)((float)(v22 - (float)((float)(v14 * v16) * v19)) - (float)(v25 * unk_9528CC)) * 200.0);
      v26 = (CWeapon *)CWeapon::CWeapon();
      v27 = 101 * a2;
      v28 = dword_951FBC + 48;
      if ( !dword_951FBC )
        v28 = (int)&qword_951FAC;
      v29 = *(double *)v28;
      v38 = *(_DWORD *)&byte_8[v28];
      v30 = (_DWORD *)CWorld::Players[101 * a2];
      v37 = v29;
      v31 = v30[290];
      v32 = v30[291];
      v33 = v30[292];
      v30[289] = v30[289];
      v30[290] = v31 & 0xFDFFFFFF;
      v30[291] = v32;
      v30[292] = v33;
      CWeapon::FireInstantHit(
        v26,
        (CEntity *)CWorld::Players[v27],
        (CVector *)&v37,
        (CVector *)&v37,
        0,
        (CVector *)v39,
        0,
        1,
        1);
      result = CWorld::Players[v27];
      v34 = *(_DWORD *)(result + 1164);
      v35 = *(_DWORD *)(result + 1160) & 0xFDFFFFFF | (((v31 >> 25) & 1) << 25);
      v36 = *(_DWORD *)(result + 1168);
      *(_DWORD *)(result + 1156) = *(_DWORD *)(result + 1156);
      *(_DWORD *)(result + 1160) = v35;
      *(_DWORD *)(result + 1164) = v34;
      *(_DWORD *)(result + 1168) = v36;
    }
  }
  return result;
}


// ============================================================

// Address: 0x40c2c8
// Original: _ZN16CPlayerCrossHair6RenderEi
// Demangled: CPlayerCrossHair::Render(int)
int __fastcall CPlayerCrossHair::Render(CPlayerCrossHair *this, int a2)
{
  int result; // r0
  int *v5; // r2
  __int64 *v6; // r0
  __int64 v7; // d16
  __int64 v8; // d17
  int v9; // r8
  __int64 *v10; // r0
  _QWORD *v11; // r6
  __int64 v12; // d16
  __int64 v13; // d17
  int v14; // r6
  int v15; // r2
  unsigned int v16; // r5
  int v17; // r0
  int v18; // r2
  int v19; // r6
  int v20; // r10
  float v21; // s23
  float v22; // s25
  float v23; // r8
  unsigned __int8 v24; // [sp+20h] [bp-90h]
  unsigned __int8 v25; // [sp+20h] [bp-90h]
  unsigned __int8 v26; // [sp+20h] [bp-90h]
  unsigned __int8 v27; // [sp+20h] [bp-90h]
  int *v28; // [sp+24h] [bp-8Ch]
  int v29; // [sp+28h] [bp-88h]
  int v30; // [sp+2Ch] [bp-84h]
  float *v31; // [sp+30h] [bp-80h]
  float *v32; // [sp+34h] [bp-7Ch]
  unsigned int v33; // [sp+38h] [bp-78h]
  unsigned int v34; // [sp+3Ch] [bp-74h]

  result = *(unsigned __int8 *)this;
  if ( result )
  {
    RwRenderStateSet(8, 0);
    RwRenderStateSet(6, 0);
    RwRenderStateSet(12, 1);
    RwRenderStateSet(10, 5);
    RwRenderStateSet(11, 8);
    RwRenderStateSet(1, *(_DWORD *)dword_A25B28);
    v5 = &dword_95AC10[5 * a2];
    v5[4] = CPools::ms_pPedPool;
    v5[3] = CPools::ms_pEntryInfoNodePool;
    v5[2] = CPools::ms_pPtrNodeDoubleLinkPool;
    v6 = (__int64 *)&dword_95ABC0[5 * a2];
    v7 = *v6;
    v8 = v6[1];
    v6 = (__int64 *)((char *)v6 + 4);
    v9 = 0;
    *v6 = v7;
    v6[1] = v8;
    v10 = (__int64 *)&dword_95ABE8[5 * a2];
    v11 = (__int64 *)((char *)v10 + 4);
    v12 = *v10;
    v13 = v10[1];
    v17 = CPools::ms_pPtrNodeSingleLinkPool;
    *v11 = v12;
    v11[1] = v13;
    v14 = 0;
    v28 = v5;
    v5[1] = v17;
    dword_95ABC0[5 * a2] = *((_DWORD *)this + 1);
    v15 = *((_DWORD *)this + 2);
    v16 = 255;
    dword_95ABE8[5 * a2] = v15;
    LOWORD(v17) = CTimer::m_snTimeInMilliseconds;
    v29 = 5 * a2;
    dword_95AC10[5 * a2] = CTimer::m_snTimeInMilliseconds;
    if ( a2 )
    {
      a2 = 50;
    }
    else
    {
      v16 = 50;
      v14 = 255;
    }
    v18 = v14;
    v19 = a2;
    while ( 1 )
    {
      v34 = v18;
      v20 = 0;
      v32 = (float *)&dword_95ABE8[v29 + v9];
      v30 = v9;
      v21 = (float)(sinf((float)(v17 & 0x3FF) * 0.0061359) * 0.2) + 1.0;
      v31 = (float *)&dword_95ABC0[v29 + v9];
      v33 = v19;
      do
      {
        v22 = v21 * (float)((float)((float)v20 * 10.0) + 20.0);
        CSprite::RenderOneXLUSprite_Rotate_Aspect(
          COERCE_CSPRITE_((float)(v22 * 0.70711) + (float)((float)((float)(*v31 + 1.0) * (float)dword_9FC900) * 0.5)),
          (float)(v22 * 0.70711) + (float)((float)((float)(*v32 + 1.0) * (float)dword_9FC904) * 0.5),
          10.0,
          15.0,
          15.0,
          COERCE_FLOAT((unsigned __int8)v19),
          v34,
          v16,
          0xFFu,
          55050,
          0.0,
          COERCE_FLOAT(255),
          v24);
        LODWORD(v23) = (unsigned __int8)v19;
        CSprite::RenderOneXLUSprite_Rotate_Aspect(
          COERCE_CSPRITE_((float)(v22 * 0.70711) + (float)((float)((float)(*v31 + 1.0) * (float)dword_9FC900) * 0.5)),
          (float)(v22 * -0.70711) + (float)((float)((float)(*v32 + 1.0) * (float)dword_9FC904) * 0.5),
          10.0,
          15.0,
          15.0,
          COERCE_FLOAT((unsigned __int8)v19),
          v34,
          v16,
          0xFFu,
          55050,
          0.0,
          COERCE_FLOAT(255),
          v25);
        CSprite::RenderOneXLUSprite_Rotate_Aspect(
          COERCE_CSPRITE_((float)(v22 * -0.70711) + (float)((float)((float)(*v31 + 1.0) * (float)dword_9FC900) * 0.5)),
          (float)(v22 * -0.70711) + (float)((float)((float)(*v32 + 1.0) * (float)dword_9FC904) * 0.5),
          10.0,
          15.0,
          15.0,
          COERCE_FLOAT((unsigned __int8)v19),
          v34,
          v16,
          0xFFu,
          55050,
          0.0,
          COERCE_FLOAT(255),
          v26);
        LOBYTE(v19) = v33;
        CSprite::RenderOneXLUSprite_Rotate_Aspect(
          COERCE_CSPRITE_((float)(v22 * -0.70711) + (float)((float)((float)(*v31 + 1.0) * (float)dword_9FC900) * 0.5)),
          (float)(v22 * 0.70711) + (float)((float)((float)(*v32 + 1.0) * (float)dword_9FC904) * 0.5),
          10.0,
          15.0,
          15.0,
          v23,
          v34,
          v16,
          0xFFu,
          55050,
          0.0,
          COERCE_FLOAT(255),
          v27);
        ++v20;
      }
      while ( v20 != 3 );
      v9 = v30 + 1;
      if ( v30 == 4 )
        break;
      v19 = v33 >> 1;
      v18 = v34 >> 1;
      v16 >>= 1;
      v17 = *v28;
    }
    RwRenderStateSet(8, 1);
    return sub_192888();
  }
  return result;
}


// ============================================================
