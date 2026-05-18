
// Address: 0x18cad4
// Original: j__ZN9CShotInfo10InitialiseEv
// Demangled: CShotInfo::Initialise(void)
// attributes: thunk
int __fastcall CShotInfo::Initialise(CShotInfo *this)
{
  return _ZN9CShotInfo10InitialiseEv(this);
}


// ============================================================

// Address: 0x191b54
// Original: j__ZN9CShotInfo26GetPositionOfPossibleFlameEhR7CVector
// Demangled: CShotInfo::GetPositionOfPossibleFlame(uchar,CVector &)
// attributes: thunk
int __fastcall CShotInfo::GetPositionOfPossibleFlame(CShotInfo *this, unsigned __int8 a2, CVector *a3)
{
  return _ZN9CShotInfo26GetPositionOfPossibleFlameEhR7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x19a808
// Original: j__ZN9CShotInfo7AddShotEP7CEntity11eWeaponType7CVectorS3_
// Demangled: CShotInfo::AddShot(CEntity *,eWeaponType,CVector,CVector)
// attributes: thunk
int __fastcall CShotInfo::AddShot(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return _ZN9CShotInfo7AddShotEP7CEntity11eWeaponType7CVectorS3_(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x19f3fc
// Original: j__ZN9CShotInfo6UpdateEv
// Demangled: CShotInfo::Update(void)
// attributes: thunk
int __fastcall CShotInfo::Update(CShotInfo *this)
{
  return _ZN9CShotInfo6UpdateEv(this);
}


// ============================================================

// Address: 0x1a00c0
// Original: j__ZN9CShotInfo8ShutdownEv
// Demangled: CShotInfo::Shutdown(void)
// attributes: thunk
int __fastcall CShotInfo::Shutdown(CShotInfo *this)
{
  return _ZN9CShotInfo8ShutdownEv(this);
}


// ============================================================

// Address: 0x5dafe0
// Original: _ZN9CShotInfo10InitialiseEv
// Demangled: CShotInfo::Initialise(void)
_QWORD *__fastcall CShotInfo::Initialise(CShotInfo *this)
{
  int v1; // r1
  char *v2; // r0
  char *v3; // r2
  _QWORD *result; // r0

  v1 = 100;
  v2 = (char *)&word_A85068 + 1;
  do
  {
    *(_DWORD *)(v2 - 41) = 22;
    v3 = v2 - 37;
    *(_WORD *)(v2 - 1) = 0;
    --v1;
    *(_DWORD *)(v2 - 21) = 0;
    *(_DWORD *)(v2 - 17) = 0;
    *(_DWORD *)(v2 - 13) = 1065353216;
    *(_DWORD *)(v2 - 9) = 0;
    *(_DWORD *)(v2 - 5) = 0;
    v2 += 44;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
  }
  while ( v1 );
  CShotInfo::ms_afRandTable = loc_5DB070;
  unk_A86178 = 0xBD0F5C2ABD23D70BLL;
  unk_A86180 = 0xBCCCCCD0BCF5C292LL;
  unk_A86188 = 0xBC75C297BCA3D70ELL;
  unk_A86190 = 0xBBA3D71ABC23D712LL;
  unk_A86198 = 0x3BA3D6FAB2000000LL;
  result = qword_A861B0;
  unk_A861A0 = 0x3C75C2873C23D702LL;
  unk_A861A8 = 0x3CCCCCC83CA3D706LL;
  qword_A861B0[0] = 0x3D0F5C263CF5C28ALL;
  qword_A861B0[1] = 0x3D3851E83D23D707LL;
  return result;
}


// ============================================================

// Address: 0x5db0c8
// Original: _ZN9CShotInfo8ShutdownEv
// Demangled: CShotInfo::Shutdown(void)
void __fastcall CShotInfo::Shutdown(CShotInfo *this)
{
  ;
}


// ============================================================

// Address: 0x5db0cc
// Original: _ZN9CShotInfo7AddShotEP7CEntity11eWeaponType7CVectorS3_
// Demangled: CShotInfo::AddShot(CEntity *,eWeaponType,CVector,CVector)
int __fastcall CShotInfo::AddShot(int a1, int a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  int WeaponInfo; // r9
  char *v13; // r6
  int v14; // r1
  char *v15; // r4
  int v16; // r2
  int v17; // r1
  bool v18; // zf
  int result; // r0
  float v20; // s0
  float v21; // s6
  float v22; // s2
  float v23; // s4

  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  v13 = (char *)&unk_A85014;
  v14 = 0;
  do
  {
    v15 = v13 + 44;
    v16 = v14 + 1;
    if ( v14 > 99 )
      break;
    v17 = (unsigned __int8)v13[84];
    v13 += 44;
    v18 = v17 == 0;
    v14 = v16;
  }
  while ( !v18 );
  if ( v16 == 101 )
    return 0;
  *((_WORD *)v15 + 20) = 1;
  *(_DWORD *)v15 = a2;
  *((float *)v15 + 1) = a3;
  *((float *)v15 + 2) = a4;
  *((float *)v15 + 3) = a5;
  *((float *)v15 + 4) = a6 - a3;
  *((float *)v15 + 5) = a7 - a4;
  *((float *)v15 + 6) = a8 - a5;
  *((_DWORD *)v15 + 7) = *(_DWORD *)(WeaponInfo + 96);
  if ( *(float *)(WeaponInfo + 104) != 0.0 )
  {
    *((float *)v15 + 4) = *((float *)v15 + 4)
                        + (float)(CShotInfo::ms_afRandTable[rand() % 20] * *(float *)(WeaponInfo + 104));
    *((float *)v15 + 5) = *((float *)v15 + 5)
                        + (float)(CShotInfo::ms_afRandTable[rand() % 20] * *(float *)(WeaponInfo + 104));
    *((float *)v15 + 6) = CShotInfo::ms_afRandTable[rand() % 20] + *((float *)v15 + 6);
  }
  CVector::Normalise((CVector *)(v15 + 16));
  if ( (*(_BYTE *)(WeaponInfo + 26) & 2) != 0 )
    v20 = *(float *)(WeaponInfo + 92) + CShotInfo::ms_afRandTable[rand() % 20];
  else
    v20 = *(float *)(WeaponInfo + 92);
  v21 = *((float *)v15 + 6);
  v22 = v20 * *((float *)v15 + 4);
  v23 = v20 * *((float *)v15 + 5);
  *((_DWORD *)v15 + 8) = a1;
  *((float *)v15 + 4) = v22;
  *((float *)v15 + 5) = v23;
  *((float *)v15 + 6) = v20 * v21;
  result = 1;
  *((float *)v15 + 9) = (float)(int)(float)(*(float *)(WeaponInfo + 100)
                                          + (float)(unsigned int)CTimer::m_snTimeInMilliseconds);
  return result;
}


// ============================================================

// Address: 0x5db2b8
// Original: _ZN9CShotInfo6UpdateEv
// Demangled: CShotInfo::Update(void)
int __fastcall CShotInfo::Update(CShotInfo *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d9
  int i; // r11
  int *v4; // r6
  CPed *v5; // r0
  CEntity **v6; // r6
  CPed *v7; // t1
  int *v8; // r5
  int result; // r0
  _BYTE *v10; // r5
  int v11; // t1
  int v12; // r4
  float *v13; // r5
  float v14; // s22
  float v15; // s24
  float v16; // s26
  float v17; // r0
  float v18; // s0
  float *v19; // r8
  float v20; // s12
  float v21; // s10
  float v22; // s4
  float v23; // s6
  CEntity *v24; // r0
  int *v25; // r6
  int v26; // r4
  int *v27; // r1
  int v28; // r0
  float v29; // s22
  int v30; // r9
  int v31; // r10
  int v32; // r1
  float *v33; // r5
  int v34; // r0
  float v35; // s26
  float32x2_t v36; // d15
  float v37; // s24
  float32x2_t v38; // d14
  float32x2_t v39; // d16
  unsigned __int64 v40; // d1
  int v41; // r1
  int v42; // r2
  float v43; // s0
  float *v44; // r1
  float v45; // s4
  char LocalDirection; // r0
  int *v47; // r4
  _BYTE *v48; // r4
  int v49; // t1
  float v50; // s8
  float v51; // s6
  float v52; // s14
  float v53; // s10
  float v54; // s2
  float v55; // s4
  CEntity *v56; // r4
  int *v57; // r4
  _BYTE *v58; // r4
  int v59; // t1
  CEntity *v60; // [sp+0h] [bp-B0h]
  CEntity *v61; // [sp+4h] [bp-ACh]
  _BYTE *v62; // [sp+20h] [bp-90h]
  int WeaponInfo; // [sp+2Ch] [bp-84h]
  float *v64; // [sp+30h] [bp-80h]
  CEntity **v65; // [sp+34h] [bp-7Ch]
  float *v66; // [sp+3Ch] [bp-74h]
  CWorld *v67; // [sp+40h] [bp-70h]
  float v68; // [sp+44h] [bp-6Ch] BYREF
  float v69; // [sp+48h] [bp-68h]
  float v70; // [sp+4Ch] [bp-64h]

  v2.n64_u32[0] = 1.0;
  for ( i = 0; i != 100; ++i )
  {
    v4 = &dword_A85040[11 * i];
    v7 = (CPed *)v4[8];
    v6 = (CEntity **)(v4 + 8);
    v5 = v7;
    if ( v7 && (*((_BYTE *)v5 + 58) & 7) == 3 && !CPed::IsPointerValid(v5) )
      *v6 = 0;
    v8 = &dword_A85040[11 * i];
    v11 = *((unsigned __int8 *)v8 + 40);
    v10 = v8 + 10;
    result = v11;
    if ( v11 )
    {
      WeaponInfo = CWeaponInfo::GetWeaponInfo();
      v12 = *(_DWORD *)(WeaponInfo + 24);
      if ( *(float *)&dword_A85040[11 * i + 9] < (float)(unsigned int)CTimer::m_snTimeInMilliseconds )
        *v10 = 0;
      if ( (v12 & 0x10000) != 0 )
      {
        v13 = (float *)&dword_A85040[11 * i];
        v14 = v13[4];
        v15 = v13[5];
        v16 = v13[6];
        v17 = powf(0.96, *(float *)&CTimer::ms_fTimeStep);
        v13[4] = v17 * v14;
        v13[5] = v17 * v15;
        v13[6] = v17 * v16;
      }
      v18 = *(float *)&CTimer::ms_fTimeStep;
      if ( (v12 & 0x80000) != 0 )
        *(float *)&dword_A85040[11 * i + 7] = *(float *)&dword_A85040[11 * i + 7]
                                            + (float)(*(float *)&CTimer::ms_fTimeStep * 0.075);
      v65 = v6;
      v19 = (float *)&dword_A85040[11 * i];
      v64 = v19 + 3;
      v20 = v19[6];
      v21 = v18 * v19[5];
      v22 = v19[2];
      v23 = v19[3];
      v66 = v19 + 2;
      v67 = (CWorld *)(v19 + 1);
      v19[1] = (float)(v18 * v19[4]) + v19[1];
      v19[2] = v21 + v22;
      v19[3] = (float)(v18 * v20) + v23;
      v24 = *v6;
      v25 = (int *)v19;
      if ( v24 )
      {
        v26 = *((_DWORD *)v24 + 272);
        v27 = &dword_A85040[11 * i];
        v62 = (char *)v27 + 41;
        v1.n64_u32[0] = v27[7];
        v28 = 92;
        LODWORD(v29) = vmax_f32(v1, v2).n64_u32[0];
        do
        {
          v30 = v28;
          v31 = *(_DWORD *)(v26 + 4 * v28);
          if ( v31 && CPed::IsPointerValid(*(CPed **)(v26 + 4 * v28)) && !(*(unsigned __int8 *)(v31 + 1157) << 31) )
          {
            v32 = *(_DWORD *)(v31 + 20);
            v33 = (float *)(v31 + 4);
            v34 = v31 + 4;
            if ( v32 )
              v34 = v32 + 48;
            if ( (*(_BYTE *)(v31 + 70) & 8) == 0 )
            {
              v35 = *(float *)v34;
              v36.n64_u64[0] = *(unsigned __int64 *)(v34 + 4);
              v37 = *(float *)v67;
              v38.n64_u64[0] = *(unsigned __int64 *)v66;
              if ( CPed::IsPedInControl((CPed *)v31) == 1 )
              {
                v39.n64_u64[0] = vsub_f32(v36, v38).n64_u64[0];
                v40 = vmul_f32(v39, v39).n64_u64[0];
                if ( (float)((float)((float)((float)(v35 - v37) * (float)(v35 - v37)) + *(float *)&v40)
                           + *((float *)&v40 + 1)) < v29 )
                {
                  if ( (unsigned int)(*v25 - 41) > 1 )
                  {
                    CFireManager::StartFire(
                      (CFireManager *)gFireManager,
                      (CEntity *)v31,
                      *v65,
                      0.8,
                      1u,
                      (unsigned int)&elf_hash_bucket[1687],
                      100);
                  }
                  else if ( !*v62 )
                  {
                    v41 = *(_DWORD *)(v31 + 20);
                    v42 = *((_DWORD *)*v65 + 5);
                    if ( v41 )
                      v33 = (float *)(v41 + 48);
                    v43 = *v33;
                    v44 = (float *)(v42 + 48);
                    if ( !v42 )
                      v44 = (float *)((char *)*v65 + 4);
                    v45 = *v44;
                    v69 = v44[1] - v33[1];
                    v68 = v45 - v43;
                    LocalDirection = CPed::GetLocalDirection();
                    v25 = &dword_A85040[11 * i];
                    CWeapon::GenerateDamageEvent(v31, (int)*v65, *v25, *(__int16 *)(WeaponInfo + 34), 3, LocalDirection);
                    *v62 = 1;
                  }
                }
              }
            }
          }
          v28 = v30 - 1;
        }
        while ( v30 - 76 > 1 );
      }
      if ( *v25 == 42 )
      {
        v57 = &dword_A85040[11 * i];
        v59 = *((unsigned __int8 *)v57 + 41);
        v58 = (char *)v57 + 41;
        result = v59;
        if ( !v59 )
        {
          v61 = (CEntity *)0x40000000;
          v60 = (CEntity *)dword_A85040[11 * i + 7];
          result = CFireManager::ExtinguishPointWithWater();
          if ( result == 1 )
          {
            result = 1;
            *v58 = 1;
          }
        }
      }
      else if ( *v25 == 41 )
      {
        v47 = &dword_A85040[11 * i];
        v49 = *((unsigned __int8 *)v47 + 41);
        v48 = (char *)v47 + 41;
        result = v49;
        if ( !v49 )
        {
          result = CWorld::SprayPaintWorld(
                     v67,
                     (CVector *)&v68,
                     COERCE_CVECTOR_(*(float *)&dword_A85040[11 * i + 7] * 1.5),
                     COERCE_FLOAT(1),
                     (bool)v60);
          if ( result )
          {
            *v48 = 1;
            v50 = v19[4];
            v51 = v19[5];
            v52 = v19[6];
            v1.n64_f32[1] = v52 * v70;
            v53 = (float)((float)(v50 * v68) + (float)(v51 * v69)) + (float)(v52 * v70);
            v54 = (float)(v51 - (float)(v69 * v53)) + (float)(v51 - (float)(v69 * v53));
            v55 = (float)(v52 - (float)(v70 * v53)) + (float)(v52 - (float)(v70 * v53));
            v19[4] = (float)(v50 - (float)(v68 * v53)) + (float)(v50 - (float)(v68 * v53));
            v19[5] = v54;
            v19[6] = v55;
            if ( result == 2 )
            {
              v56 = *v65;
              result = FindPlayerPed(-1);
              if ( v56 == (CEntity *)result )
                result = CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 43, 0.0, 1.0);
            }
          }
        }
      }
      else
      {
        if ( !((CTimer::m_FrameCounter + i) << 30) )
          CWorld::SetCarsOnFire(*(CWorld **)v67, *v66, *v64, 4.0, *v65, v61);
        result = CWorld::SetWorldOnFire(*(CWorld **)v67, *v66, *v64, 0.1, *(float *)v65, v61);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5db75c
// Original: _ZN9CShotInfo26GetPositionOfPossibleFlameEhR7CVector
// Demangled: CShotInfo::GetPositionOfPossibleFlame(uchar,CVector &)
int __fastcall CShotInfo::GetPositionOfPossibleFlame(CShotInfo *this, _DWORD *a2, CVector *a3)
{
  int v3; // r2
  int *v5; // r0
  __int64 v6; // d16

  v3 = 0;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  if ( LOBYTE(dword_A85040[11 * (__int16)this + 10]) )
  {
    if ( dword_A85040[11 * (__int16)this] != 37 )
      return 0;
    v5 = &dword_A85040[11 * (__int16)this];
    v3 = 1;
    v6 = *(_QWORD *)(v5 + 1);
    a2[2] = v5[3];
    *(_QWORD *)a2 = v6;
  }
  return v3;
}


// ============================================================
