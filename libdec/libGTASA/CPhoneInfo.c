
// Address: 0x31c652
// Original: _ZN10CPhoneInfoC2Ev
// Demangled: CPhoneInfo::CPhoneInfo(void)
void __fastcall CPhoneInfo::CPhoneInfo(CPhoneInfo *this)
{
  ;
}


// ============================================================

// Address: 0x31c654
// Original: _ZN10CPhoneInfoD2Ev
// Demangled: CPhoneInfo::~CPhoneInfo()
void __fastcall CPhoneInfo::~CPhoneInfo(CPhoneInfo *this)
{
  ;
}


// ============================================================

// Address: 0x31c65c
// Original: _ZN10CPhoneInfo10InitialiseEv
// Demangled: CPhoneInfo::Initialise(void)
int *__fastcall CPhoneInfo::Initialise(int *this)
{
  _DWORD *v1; // r11
  int v2; // r1
  int v3; // r3
  int v4; // r1
  int v5; // r3
  int v6; // r9
  int v7; // r6
  int v8; // r4
  int v9; // r9
  int v10; // r2
  __int64 v11; // d16

  byte_7AF320 = 0;
  v1 = (_DWORD *)CPools::ms_pBuildingPool;
  dword_7AF324 = 0;
  byte_7AF328 = 0;
  dword_7AF32C = 0;
  *this = 0;
  this[1] = 0;
  v2 = v1[2];
  if ( v2 )
  {
    v3 = 15 * v2;
    v4 = v2 - 1;
    v5 = 4 * v3 - 22;
    v6 = 0;
    do
    {
      if ( *(char *)(v1[1] + v4) >= 0 )
      {
        v7 = *v1 + v5;
        if ( v7 != 38 && *(__int16 *)(*v1 + v5) == (unsigned __int16)MI_PHONEBOOTH1 )
        {
          this[13 * v6 + 13] = 0;
          v8 = *(_DWORD *)(v7 - 18);
          v9 = (int)&this[13 * *this + 2];
          v10 = v8 + 48;
          if ( !v8 )
            v10 = v7 - 34;
          v11 = *(_QWORD *)v10;
          *(_DWORD *)(v9 + 8) = *(_DWORD *)(v10 + 8);
          *(_QWORD *)v9 = v11;
          this[13 * *this + 12] = v7 - 38;
          v6 = *this + 1;
          *this = v6;
        }
      }
      --v4;
      v5 -= 60;
    }
    while ( v4 != -1 );
  }
  return this;
}


// ============================================================

// Address: 0x31c74c
// Original: _ZN10CPhoneInfo8ShutdownEv
// Demangled: CPhoneInfo::Shutdown(void)
_DWORD *__fastcall CPhoneInfo::Shutdown(_DWORD *this)
{
  *this = 0;
  this[1] = 0;
  return this;
}


// ============================================================

// Address: 0x31c754
// Original: _ZN10CPhoneInfo20FindNearestFreePhoneEP7CVector
// Demangled: CPhoneInfo::FindNearestFreePhone(CVector *)
int __fastcall CPhoneInfo::FindNearestFreePhone(float32x2_t *a1, float32x2_t *a2)
{
  int v2; // r12
  float32x2_t *v3; // lr
  float v4; // s0
  int result; // r0
  int v6; // r3
  int *v7; // r2
  float32x2_t v8; // d16
  unsigned __int64 v9; // d2
  float v10; // s4

  v2 = a1->n64_u32[0];
  if ( a1->n64_i32[0] < 1 )
    return -1;
  v3 = a1 + 1;
  v4 = 60.0;
  result = -1;
  v6 = 0;
  v7 = &dword_7AF364;
  do
  {
    if ( !*v7 )
    {
      v8.n64_u64[0] = vsub_f32((float32x2_t)v3->n64_u64[0], (float32x2_t)a2->n64_u64[0]).n64_u64[0];
      v9 = vmul_f32(v8, v8).n64_u64[0];
      v10 = sqrtf((float)(*(float *)&v9 + *((float *)&v9 + 1)) + 0.0);
      if ( v10 < v4 )
      {
        result = v6;
        v4 = v10;
      }
    }
    ++v6;
    v3 = (float32x2_t *)((char *)v3 + 52);
    v7 += 13;
  }
  while ( v6 < v2 );
  return result;
}


// ============================================================

// Address: 0x31c7cc
// Original: _ZN10CPhoneInfo6UpdateEv
// Demangled: CPhoneInfo::Update(void)
int __fastcall CPhoneInfo::Update(CPhoneInfo *this)
{
  float *PlayerPed; // r6
  CPlayerInfo *v3; // r5
  int Association; // r0
  int v5; // r1
  CAnimBlendAssociation *v6; // r0
  int Pad; // r0
  int PlayerVehicle; // r0
  int v9; // r1
  float *v10; // r2
  float v11; // s16
  int result; // r0
  int v13; // r9
  int v14; // r0
  float *v15; // r1
  int v16; // r2
  int v17; // r1
  float v18; // s18
  float32x2_t *v19; // r8
  int v20; // r10
  int v21; // r0
  unsigned __int32 v22; // r6
  float v23; // s0
  int v24; // r0
  float v25; // s25
  unsigned __int32 v26; // r0
  int v27; // r1
  float *v28; // r2
  float v29; // r0
  float v30; // s0
  CMatrix *v31; // r0
  int v32; // r1
  int v33; // r0
  CAnimBlendAssociation *v34; // r0
  unsigned __int32 v35; // r0
  float v36; // s21
  unsigned __int32 v37; // r6
  int v38; // r0
  unsigned __int32 v39; // r2
  float32x2_t *v40; // r1
  float32x2_t v41; // d16
  unsigned __int64 v42; // d0
  char v43; // r0
  float v44; // s21
  unsigned __int32 v45; // r6
  int v46; // r0
  unsigned __int32 v47; // r2
  float v48; // s21
  float v49; // s23
  unsigned __int32 v50; // r6
  float32x2_t *v51; // r1
  float32x2_t v52; // d16
  unsigned __int64 v53; // d0
  float *v54; // [sp+8h] [bp-80h]
  float *v55; // [sp+Ch] [bp-7Ch]
  CPed *v56; // [sp+24h] [bp-64h]

  PlayerPed = (float *)FindPlayerPed(-1);
  v3 = (CPlayerInfo *)&CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  if ( byte_7AF320 == 1 && CTimer::m_snTimeInMilliseconds > (unsigned int)dword_7AF31C )
  {
    CPlayerInfo::MakePlayerSafe((CPlayerInfo *)&CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus], 0, 10000.0);
    CCamera::SetWideScreenOff((CCamera *)&TheCamera);
    dword_7AF324 = 0;
    byte_7AF320 = 0;
    Association = RpAnimBlendClumpGetAssociation();
    if ( Association && *(float *)(Association + 24) > 0.5 )
    {
      v6 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)PlayerPed + 6), 0, 0x92u);
      *((_WORD *)v6 + 23) &= ~4u;
      CAnimBlendAssociation::SetFinishCallback(v6, (void (*)(CAnimBlendAssociation *, void *))PhonePutDownCB, PlayerPed);
    }
    else
    {
      Pad = CPad::GetPad(0, v5);
      *(_WORD *)(Pad + 272) &= ~0x40u;
      if ( *((_DWORD *)PlayerPed + 275) == 19 )
        CPed::SetPedState((CPed *)PlayerPed);
    }
  }
  v56 = (CPed *)PlayerPed;
  if ( FindPlayerVehicle(-1, 0) )
  {
    PlayerVehicle = FindPlayerVehicle(-1, 0);
    v9 = *(_DWORD *)(PlayerVehicle + 20);
    v10 = (float *)(v9 + 48);
    if ( !v9 )
      v10 = (float *)(PlayerVehicle + 4);
    v11 = *v10;
    result = FindPlayerVehicle(-1, 0);
    v13 = 1;
  }
  else
  {
    v14 = *((_DWORD *)PlayerPed + 5);
    v13 = 0;
    v15 = (float *)(v14 + 48);
    if ( !v14 )
      v15 = PlayerPed + 1;
    result = (int)PlayerPed;
    v11 = *v15;
  }
  v16 = *(_DWORD *)(result + 20);
  v17 = v16 + 48;
  if ( !v16 )
    v17 = result + 4;
  if ( *((int *)this + 1) >= 1 )
  {
    v18 = *(float *)(v17 + 4);
    v19 = (float32x2_t *)((char *)this + 56);
    v54 = PlayerPed + 343;
    v20 = 0;
    v55 = PlayerPed + 344;
    do
    {
      if ( v19->n64_u8[0] )
      {
        v35 = v19[-1].n64_u32[1];
        if ( v35 - 4 >= 3 )
        {
          if ( v35 == 8 )
          {
            if ( CTimer::m_snTimeInMilliseconds - v19[-2].n64_u32[1] >= 0xEA61 )
              v19[-1].n64_u32[1] = 6;
          }
          else if ( v35 == 9 )
          {
            v44 = 1.0;
            if ( (CTimer::m_snTimeInMilliseconds / 0x758u) << 31 )
              v44 = (float)((float)(rand() & 0x3FF) / 16000.0) + 1.0;
            v45 = v19[-1].n64_u32[0];
            v46 = *(_DWORD *)(v45 + 20);
            if ( !v46 )
            {
              CPlaceable::AllocateMatrix((CPlaceable *)v19[-1].n64_u32[0]);
              CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v45 + 4), *(CMatrix **)(v45 + 20));
              v46 = *(_DWORD *)(v45 + 20);
            }
            *(float *)(v46 + 40) = v44;
            v47 = v19[-1].n64_u32[0];
            if ( *(_DWORD *)(v47 + 24) )
            {
              if ( *(_DWORD *)(v47 + 20) )
                CMatrix::UpdateRwMatrix();
              else
                CSimpleTransform::UpdateRwMatrix();
            }
            CEntity::UpdateRwFrame((CEntity *)v19[-1].n64_u32[0]);
          }
        }
        else
        {
          v36 = 1.0;
          if ( !byte_7AF328 )
          {
            v36 = 1.0;
            if ( (CTimer::m_snTimeInMilliseconds / 0x758u) << 31 )
              v36 = (float)((float)(rand() & 0x3FF) / 16000.0) + 1.0;
          }
          v37 = v19[-1].n64_u32[0];
          v38 = *(_DWORD *)(v37 + 20);
          if ( !v38 )
          {
            CPlaceable::AllocateMatrix((CPlaceable *)v19[-1].n64_u32[0]);
            CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v37 + 4), *(CMatrix **)(v37 + 20));
            v38 = *(_DWORD *)(v37 + 20);
          }
          *(float *)(v38 + 40) = v36;
          v39 = v19[-1].n64_u32[0];
          if ( *(_DWORD *)(v39 + 24) )
          {
            if ( *(_DWORD *)(v39 + 20) )
              CMatrix::UpdateRwMatrix();
            else
              CSimpleTransform::UpdateRwMatrix();
          }
          CEntity::UpdateRwFrame((CEntity *)v19[-1].n64_u32[0]);
          if ( !(((unsigned __int8)byte_7AF328 | v13) << 31) && CPed::IsPedInControl(v56) == 1 )
          {
            v48 = v11 - v19[-6].n64_f32[0];
            if ( fabsf(v48) < 1.0 )
            {
              v49 = v18 - v19[-6].n64_f32[1];
              if ( fabsf(v49) < 1.0 )
              {
                v50 = v19[-1].n64_u32[0];
                v24 = *(_DWORD *)(v50 + 20);
                if ( v24 )
                {
                  v25 = v48 * *(float *)(v24 + 16);
                }
                else
                {
                  CPlaceable::AllocateMatrix((CPlaceable *)v19[-1].n64_u32[0]);
                  CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v50 + 4), *(CMatrix **)(v50 + 20));
                  v21 = *(_DWORD *)(v50 + 20);
                  v22 = v19[-1].n64_u32[0];
                  v23 = *(float *)(v21 + 16);
                  v24 = *(_DWORD *)(v22 + 20);
                  v25 = v48 * v23;
                  if ( !v24 )
                  {
                    CPlaceable::AllocateMatrix((CPlaceable *)v19[-1].n64_u32[0]);
                    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v22 + 4), *(CMatrix **)(v22 + 20));
                    v24 = *(_DWORD *)(v22 + 20);
                  }
                }
                if ( (float)((float)(v25 + (float)(v49 * *(float *)(v24 + 20)))
                           / sqrtf((float)(v48 * v48) + (float)(v49 * v49))) < -0.85 )
                {
                  v26 = v19[-1].n64_u32[0];
                  v27 = *(_DWORD *)(v26 + 20);
                  v28 = (float *)(v27 + 48);
                  if ( !v27 )
                    v28 = (float *)(v26 + 4);
                  v29 = COERCE_FLOAT(CGeneral::GetATanOfXY(COERCE_CGENERAL_(v11 - *v28), v18 - v28[1], *(float *)&v28));
                  v30 = v29 + 1.5708;
                  if ( (float)(v29 + 1.5708) > 6.2832 )
                    v30 = (float)(v29 + 1.5708) + -6.2832;
                  *v54 = v30;
                  *v55 = v30;
                  v31 = (CMatrix *)*((_DWORD *)v56 + 5);
                  if ( v31 )
                    CMatrix::SetRotateZOnly(v31, v30);
                  else
                    *((float *)v56 + 4) = v30;
                  CPed::SetPedState(v56);
                  v33 = CPad::GetPad(0, v32);
                  *(_WORD *)(v33 + 272) |= 0x40u;
                  CCamera::SetWideScreenOn((CCamera *)&TheCamera);
                  CPlayerInfo::MakePlayerSafe(v3, 1, 10000.0);
                  v34 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)v56 + 6), 0, 0x91u);
                  CAnimBlendAssociation::SetFinishCallback(
                    v34,
                    (void (*)(CAnimBlendAssociation *, void *))PhonePickUpCB,
                    &v19[-6]);
                  byte_7AF328 = 1;
                  dword_7AF32C = (int)v56;
                }
              }
            }
          }
        }
        v51 = (float32x2_t *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v51 = (float32x2_t *)&qword_951FAC;
        v52.n64_u64[0] = vsub_f32((float32x2_t)v51->n64_u64[0], v19[-6]).n64_u64[0];
        v53 = vmul_f32(v52, v52).n64_u64[0];
        if ( (float)(*(float *)&v53 + *((float *)&v53 + 1)) <= 10000.0 )
          goto LABEL_71;
        v43 = 0;
      }
      else
      {
        if ( (*(unsigned __int16 *)(v19[-1].n64_u32[0] + 36) + CTimer::m_FrameCounter) << 28 )
          goto LABEL_71;
        v40 = (float32x2_t *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v40 = (float32x2_t *)&qword_951FAC;
        v41.n64_u64[0] = vsub_f32((float32x2_t)v40->n64_u64[0], v19[-6]).n64_u64[0];
        v42 = vmul_f32(v41, v41).n64_u64[0];
        if ( (float)(*(float *)&v42 + *((float *)&v42 + 1)) >= 6400.0 )
          goto LABEL_71;
        v43 = 1;
      }
      v19->n64_u8[0] = v43;
LABEL_71:
      result = *((_DWORD *)this + 1);
      ++v20;
      v19 = (float32x2_t *)((char *)v19 + 52);
    }
    while ( v20 < result );
  }
  return result;
}


// ============================================================

// Address: 0x31cd4c
// Original: _ZN10CPhoneInfo19PhoneAtThisPositionE7CVector
// Demangled: CPhoneInfo::PhoneAtThisPosition(CVector)
int __fastcall CPhoneInfo::PhoneAtThisPosition(_DWORD *a1, float a2)
{
  int v2; // r3
  float *v4; // r0
  int v5; // r1

  v2 = *a1;
  if ( (int)*a1 < 1 )
    return 0;
  v4 = (float *)(a1 + 2);
  v5 = 0;
  while ( *v4 != a2 )
  {
    ++v5;
    v4 += 13;
    if ( v5 >= v2 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x31cd8c
// Original: _ZN10CPhoneInfo9GrabPhoneEff
// Demangled: CPhoneInfo::GrabPhone(float,float)
int __fastcall CPhoneInfo::GrabPhone(CPhoneInfo *this, float a2, float a3)
{
  float32x2_t v3; // d2
  float32x2_t v4; // d3
  int v5; // r3
  float *v8; // r2
  int v9; // r1
  float v10; // s8
  bool v11; // nf
  char *v12; // r5
  char *v13; // r2
  __int64 v14; // d17
  __int64 v15; // d17
  __int64 v16; // d17
  int v17; // r1
  __int64 v19; // [sp+0h] [bp-48h]
  __int64 v20; // [sp+8h] [bp-40h]
  __int64 v21; // [sp+10h] [bp-38h]
  __int64 v22; // [sp+18h] [bp-30h]
  __int64 v23; // [sp+20h] [bp-28h]
  __int64 v24; // [sp+28h] [bp-20h]
  char v25; // [sp+30h] [bp-18h]

  v5 = *((_DWORD *)this + 1);
  if ( v5 >= *(_DWORD *)this )
  {
    v9 = -1;
  }
  else
  {
    v3.n64_u32[0] = 1120403456;
    v8 = (float *)((char *)this + 52 * v5 + 8);
    v9 = -1;
    do
    {
      v4.n64_f32[0] = *v8;
      v10 = v8[1];
      v8 += 13;
      v4.n64_f32[0] = sqrtf(
                        (float)((float)(v4.n64_f32[0] - a2) * (float)(v4.n64_f32[0] - a2))
                      + (float)((float)(v10 - a3) * (float)(v10 - a3)));
      v11 = v4.n64_f32[0] < v3.n64_f32[0];
      v3.n64_u64[0] = vmin_f32(v4, v3).n64_u64[0];
      if ( v11 )
        v9 = v5;
      ++v5;
    }
    while ( v5 < *(_DWORD *)this );
  }
  v12 = (char *)this + 52 * v9 + 8;
  *((_DWORD *)v12 + 11) = 3;
  v13 = (char *)this + 52 * *((_DWORD *)this + 1) + 8;
  v25 = v13[48];
  v19 = *(_QWORD *)v13;
  v20 = *((_QWORD *)v13 + 1);
  v23 = *((_QWORD *)v13 + 4);
  v24 = *((_QWORD *)v13 + 5);
  v21 = *((_QWORD *)v13 + 2);
  v22 = *((_QWORD *)v13 + 3);
  v13[48] = v12[48];
  v14 = *((_QWORD *)v12 + 5);
  *((_QWORD *)v13 + 4) = *((_QWORD *)v12 + 4);
  *((_QWORD *)v13 + 5) = v14;
  v15 = *((_QWORD *)v12 + 1);
  *(_QWORD *)v13 = *(_QWORD *)v12;
  *((_QWORD *)v13 + 1) = v15;
  v16 = *((_QWORD *)v12 + 3);
  *((_QWORD *)v13 + 2) = *((_QWORD *)v12 + 2);
  *((_QWORD *)v13 + 3) = v16;
  v12[48] = v25;
  *((_QWORD *)v12 + 4) = v23;
  *((_QWORD *)v12 + 5) = v24;
  *(_QWORD *)v12 = v19;
  *((_QWORD *)v12 + 1) = v20;
  *((_QWORD *)v12 + 2) = v21;
  *((_QWORD *)v12 + 3) = v22;
  v17 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 1) = v17 + 1;
  return v17;
}


// ============================================================

// Address: 0x31ceb8
// Original: _ZN10CPhoneInfo26SetPhoneMessage_RepeatedlyEiPtS0_S0_S0_S0_S0_
// Demangled: CPhoneInfo::SetPhoneMessage_Repeatedly(int,ushort *,ushort *,ushort *,ushort *,ushort *,ushort *)
int __fastcall CPhoneInfo::SetPhoneMessage_Repeatedly(
        CPhoneInfo *this,
        int a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        __int64 a7)
{
  char *v7; // r6

  if ( a3 )
  {
    v7 = (char *)this + 52 * a2;
    *((_DWORD *)v7 + 5) = a3;
    *((_DWORD *)v7 + 6) = a4;
    *((_DWORD *)v7 + 7) = a5;
    *((_DWORD *)v7 + 8) = a6;
    *(_QWORD *)(v7 + 36) = a7;
  }
  return sub_31CEEE();
}


// ============================================================

// Address: 0x31cef8
// Original: _ZN10CPhoneInfo24SetPhoneMessage_JustOnceEiPtS0_S0_S0_S0_S0_
// Demangled: CPhoneInfo::SetPhoneMessage_JustOnce(int,ushort *,ushort *,ushort *,ushort *,ushort *,ushort *)
int __fastcall CPhoneInfo::SetPhoneMessage_JustOnce(
        CPhoneInfo *this,
        int a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        __int64 a7)
{
  char *v7; // r6

  if ( a3 )
  {
    v7 = (char *)this + 52 * a2;
    *((_DWORD *)v7 + 5) = a3;
    *((_DWORD *)v7 + 6) = a4;
    *((_DWORD *)v7 + 7) = a5;
    *((_DWORD *)v7 + 8) = a6;
    *(_QWORD *)(v7 + 36) = a7;
  }
  return sub_31CF2E();
}


// ============================================================

// Address: 0x31cf38
// Original: _ZN10CPhoneInfo23HasMessageBeenDisplayedEi
// Demangled: CPhoneInfo::HasMessageBeenDisplayed(int)
bool __fastcall CPhoneInfo::HasMessageBeenDisplayed(CPhoneInfo *this, int a2)
{
  return !byte_7AF320 && (unsigned int)(*((_DWORD *)this + 13 * a2 + 13) - 6) < 3;
}


// ============================================================

// Address: 0x31cf60
// Original: _ZN10CPhoneInfo23IsMessageBeingDisplayedEi
// Demangled: CPhoneInfo::IsMessageBeingDisplayed(int)
bool __fastcall CPhoneInfo::IsMessageBeingDisplayed(CPhoneInfo *this, int a2)
{
  return dword_7AF324 == (_DWORD)this + 52 * a2 + 8;
}


// ============================================================
