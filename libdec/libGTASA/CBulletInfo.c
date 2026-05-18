
// Address: 0x18af88
// Original: j__ZN11CBulletInfo9AddBulletEP7CEntity11eWeaponType7CVectorS3_
// Demangled: CBulletInfo::AddBullet(CEntity *,eWeaponType,CVector,CVector)
// attributes: thunk
int __fastcall CBulletInfo::AddBullet(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return _ZN11CBulletInfo9AddBulletEP7CEntity11eWeaponType7CVectorS3_(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x197a84
// Original: j__ZN11CBulletInfo8ShutdownEv
// Demangled: CBulletInfo::Shutdown(void)
// attributes: thunk
int __fastcall CBulletInfo::Shutdown(CBulletInfo *this)
{
  return _ZN11CBulletInfo8ShutdownEv(this);
}


// ============================================================

// Address: 0x198838
// Original: j__ZN11CBulletInfo10InitialiseEv
// Demangled: CBulletInfo::Initialise(void)
// attributes: thunk
int __fastcall CBulletInfo::Initialise(CBulletInfo *this)
{
  return _ZN11CBulletInfo10InitialiseEv(this);
}


// ============================================================

// Address: 0x19ac88
// Original: j__ZN11CBulletInfo6UpdateEv
// Demangled: CBulletInfo::Update(void)
// attributes: thunk
int __fastcall CBulletInfo::Update(CBulletInfo *this)
{
  return _ZN11CBulletInfo6UpdateEv(this);
}


// ============================================================

// Address: 0x5d6f30
// Original: _ZN11CBulletInfo10InitialiseEv
// Demangled: CBulletInfo::Initialise(void)
int *__fastcall CBulletInfo::Initialise(CBulletInfo *this)
{
  int *result; // r0

  result = &dword_A84178;
  byte_A84184 = 0;
  dword_A84178 = 22;
  *(_DWORD *)algn_A8417C = 0;
  dword_A84180 = 0;
  byte_A841B0 = 0;
  dword_A841A4 = 22;
  unk_A841A8 = 0;
  dword_A841AC = 0;
  byte_A841DC = 0;
  dword_A841D0 = 22;
  unk_A841D4 = 0;
  dword_A841D8 = 0;
  byte_A84208 = 0;
  dword_A841FC = 22;
  unk_A84200 = 0;
  dword_A84204 = 0;
  byte_A84234 = 0;
  dword_A84228 = 22;
  unk_A8422C = 0;
  dword_A84230 = 0;
  byte_A84260 = 0;
  dword_A84254 = 22;
  unk_A84258 = 0;
  dword_A8425C = 0;
  byte_A8428C = 0;
  dword_A84280 = 22;
  unk_A84284 = 0;
  dword_A84288 = 0;
  byte_A842B8 = 0;
  dword_A842AC = 22;
  unk_A842B0 = 0;
  dword_A842B4 = 0;
  return result;
}


// ============================================================

// Address: 0x5d6f98
// Original: _ZN11CBulletInfo8ShutdownEv
// Demangled: CBulletInfo::Shutdown(void)
void __fastcall CBulletInfo::Shutdown(CBulletInfo *this)
{
  ;
}


// ============================================================

// Address: 0x5d6f9c
// Original: _ZN11CBulletInfo9AddBulletEP7CEntity11eWeaponType7CVectorS3_
// Demangled: CBulletInfo::AddBullet(CEntity *,eWeaponType,CVector,CVector)
int __fastcall CBulletInfo::AddBullet(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // r2
  int v11; // r4
  int v12; // r6
  bool v13; // zf
  int v14; // r6
  char *v15; // r4
  char *v16; // r9
  char *v17; // r0

  v10 = 0;
  v11 = 0;
  do
  {
    v12 = v10 * 4 + 44;
    if ( v11 > 7 )
      break;
    ++v11;
    v13 = LOBYTE(dword_A84178[v10 + 3]) == 0;
    v10 += 11;
  }
  while ( !v13 );
  if ( v12 == 396 )
    return 0;
  v15 = (char *)dword_A84178 + v12;
  v16 = (char *)dword_A84178 + v12;
  v14 = 1;
  *((_DWORD *)v16 - 11) = a2;
  *((_DWORD *)v16 - 10) = a1;
  *((_WORD *)v16 - 2) = *(_WORD *)(CWeaponInfo::GetWeaponInfo() + 34);
  v17 = v16 - 28;
  *(_DWORD *)v17 = a3;
  *((_DWORD *)v17 + 1) = a4;
  *((_DWORD *)v17 + 2) = a5;
  *((_DWORD *)v16 - 4) = a6;
  *((_DWORD *)v16 - 3) = a7;
  *((_DWORD *)v16 - 2) = a8;
  *((float *)v16 - 9) = (float)(CTimer::m_snTimeInMilliseconds + 1000);
  *(v15 - 32) = 1;
  return v14;
}


// ============================================================

// Address: 0x5d7044
// Original: _ZN11CBulletInfo6UpdateEv
// Demangled: CBulletInfo::Update(void)
CEntity *__fastcall CBulletInfo::Update(CBulletInfo *this)
{
  int v1; // r4
  int *v2; // r5
  CPed *v3; // r0
  int *v4; // r11
  CEntity *result; // r0
  float v6; // s8
  float v7; // s2
  float v8; // s10
  float v9; // s4
  float v10; // s12
  double v11; // d16
  float v12; // s2
  float v13; // s0
  CEntity *v14; // r8
  int v15; // r0
  CEntity *v16; // r0
  bool v17; // zf
  int v18; // r0
  float *v19; // r1
  float v20; // s6
  char LocalDirection; // r0
  int FirstAssociation; // r0
  unsigned int v23; // r2
  CAnimBlendAssociation *v24; // r0
  CAnimBlendAssociation *v25; // r5
  int v26; // r1
  int v27; // r0
  bool v28; // zf
  int v29; // r0
  CEntity *v30; // r8
  int v31; // r1
  int v32; // r1
  int v33; // r2
  int v34; // r0
  int v35; // r1
  int v36; // r0
  int v37; // r1
  float v38; // r0
  double v39; // d16
  char *v40; // [sp+78h] [bp-C8h]
  float v41; // [sp+84h] [bp-BCh] BYREF
  float v42; // [sp+88h] [bp-B8h]
  float v43; // [sp+8Ch] [bp-B4h]
  double v44; // [sp+90h] [bp-B0h] BYREF
  float v45; // [sp+98h] [bp-A8h]
  double v46; // [sp+A0h] [bp-A0h] BYREF
  float v47; // [sp+A8h] [bp-98h]
  CEntity *v48; // [sp+ACh] [bp-94h] BYREF
  double v49; // [sp+B0h] [bp-90h] BYREF
  CLocalisation *v50; // [sp+B8h] [bp-88h]
  float v51; // [sp+C0h] [bp-80h] BYREF
  float v52; // [sp+C4h] [bp-7Ch]
  float v53; // [sp+C8h] [bp-78h]
  unsigned __int8 v54; // [sp+D3h] [bp-6Dh]
  unsigned __int8 v55; // [sp+D4h] [bp-6Ch]
  unsigned __int8 v56; // [sp+D5h] [bp-6Bh]

  v1 = 0;
  v48 = 0;
  do
  {
    v2 = &dword_A84178[v1];
    v3 = (CPed *)dword_A84178[v1 + 1];
    if ( v3 && (*((_BYTE *)v3 + 58) & 7) == 3 && !CPed::IsPointerValid(v3) )
      v2[1] = 0;
    v4 = &dword_A84178[v1];
    result = (CEntity *)LOBYTE(dword_A84178[v1 + 3]);
    if ( LOBYTE(dword_A84178[v1 + 3]) )
    {
      if ( *(float *)&dword_A84178[v1 + 2] < (float)(unsigned int)CTimer::m_snTimeInMilliseconds )
        *((_BYTE *)v4 + 12) = 0;
      result = (CEntity *)&dword_A84178[v1];
      v6 = *(float *)&dword_A84178[v1 + 7] * (float)(*(float *)&CTimer::ms_fTimeStep * 0.5);
      v7 = *(float *)&dword_A84178[v1 + 4];
      v8 = (float)(*(float *)&CTimer::ms_fTimeStep * 0.5) * *(float *)&dword_A84178[v1 + 8];
      v9 = *(float *)&dword_A84178[v1 + 5];
      v10 = (float)(*(float *)&CTimer::ms_fTimeStep * 0.5) * *(float *)&dword_A84178[v1 + 9];
      v11 = *(double *)&dword_A84178[v1 + 4];
      v47 = *(float *)&dword_A84178[v1 + 6];
      v46 = v11;
      v12 = v6 + v7;
      v13 = v8 + v9;
      *(float *)&v44 = v12;
      *((float *)&v44 + 1) = v8 + v9;
      v45 = v10 + v47;
      if ( v12 <= -3000.0 || v12 >= 3000.0 || v13 <= -3000.0 || v13 >= 3000.0 )
      {
        *((_BYTE *)v4 + 12) = 0;
      }
      else
      {
        v40 = (char *)result + 16;
        CWorld::bIncludeCarTyres = 1;
        CWorld::bIncludeDeadPeds = 1;
        CWorld::bIncludeBikers = 1;
        CWorld::pIgnoreEntity = dword_A84178[v1 + 1];
        if ( CWorld::ProcessLineOfSight((int)&v46, (int)&v44, (int)&v49, (int)&v48, 1, 1, 1, 1, 1, 0, 0, 1) == 1 )
        {
          CWeapon::CheckForShootingVehicleOccupant((int)&v48, (int)&v49, dword_A84178[v1], (int)&v46, (int)&v44);
          v14 = v48;
          v15 = *((_BYTE *)v48 + 58) & 7;
          if ( v15 == 2 )
          {
            v26 = v2[1];
            if ( !v26 )
              goto LABEL_34;
            v27 = *(_BYTE *)(v26 + 58) & 7;
            v28 = v27 == 3;
            if ( v27 == 3 )
              v28 = *(_DWORD *)(v26 + 256) == (_DWORD)v48;
            if ( !v28 )
            {
LABEL_34:
              if ( (unsigned __int8)(v55 - 13) > 3u )
              {
                CVehicle::InflictDamage(
                  (int)v48,
                  v26,
                  dword_A84178[v1],
                  COERCE_INT((float)SLOWORD(dword_A84178[v1 + 10])),
                  SLODWORD(v49),
                  SHIDWORD(v49),
                  (int)v50);
                if ( dword_A84178[v1] == 37 )
                {
                  CFireManager::StartFire((CFireManager *)gFireManager, v48, (CEntity *)v2[1], 0.8, 1u, 0x1B58u, 100);
                }
                else if ( CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)&v49, 1.0) == 1 )
                {
                  Fx_c::AddBulletImpact(
                    (Fx_c *)&g_fx,
                    (CVector *)&v49,
                    (CVector *)&v51,
                    v54,
                    8,
                    (float)(*(float *)&CCustomBuildingDNPipeline::m_fDNBalanceParam
                          * (float)((float)((float)(v56 >> 4) * 0.5) / 15.0))
                  + (float)((float)(1.0 - *(float *)&CCustomBuildingDNPipeline::m_fDNBalanceParam)
                          * (float)((float)((float)(v56 & 0xF) * 0.5) / 15.0)));
                }
              }
              else
              {
                (*(void (__fastcall **)(CEntity *, _DWORD, int))(*(_DWORD *)v48 + 180))(v48, v55, 1);
                Fx_c::AddTyreBurst((Fx_c *)&g_fx, (CVector *)&v49, (CVector *)&v51);
              }
            }
          }
          else if ( v15 == 3 )
          {
            v16 = (CEntity *)(*((_DWORD *)v48 + 275) & 0xFFFFFFFE);
            v17 = v16 == (CEntity *)((char *)&dword_34 + 2);
            if ( v16 != (CEntity *)((char *)&dword_34 + 2) )
            {
              v16 = (CEntity *)v2[1];
              v17 = v48 == v16;
            }
            if ( !v17 )
            {
              v18 = *((_DWORD *)v48 + 5);
              v19 = (float *)(v18 + 48);
              if ( !v18 )
                v19 = (float *)((char *)v48 + 4);
              v20 = v19[1];
              v41 = *v19 - *(float *)&v49;
              v42 = v20 - *((float *)&v49 + 1);
              LocalDirection = CPed::GetLocalDirection();
              CWeapon::GenerateDamageEvent(
                (int)v14,
                v2[1],
                dword_A84178[v1],
                SLOWORD(dword_A84178[v1 + 10]),
                v55,
                LocalDirection);
              CCrime::ReportCrime();
              v16 = v50;
              v45 = *(float *)&v50;
              v44 = v49;
            }
            if ( CLocalisation::Blood(v16) )
            {
              Fx_c::AddBlood((Fx_c *)&g_fx, (CVector *)&v49, (CVector *)&v51, 8, *((float *)v14 + 76));
              if ( *((_DWORD *)v14 + 275) == 55 )
              {
                FirstAssociation = RpAnimBlendClumpGetFirstAssociation();
                v23 = 39;
                if ( !FirstAssociation )
                  v23 = 36;
                v24 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)v14 + 6), 0, v23);
                v25 = v24;
                if ( v24 )
                {
                  CAnimBlendAssociation::SetCurrentTime(v24, 0.0);
                  *((_WORD *)v25 + 23) = *((_WORD *)v25 + 23) & 0xFFF6 | 1;
                }
              }
              v45 = *(float *)&v50;
              v44 = v49;
            }
          }
          else
          {
            if ( CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)&v49, 1.0) == 1 )
              Fx_c::AddBulletImpact(
                (Fx_c *)&g_fx,
                (CVector *)&v49,
                (CVector *)&v51,
                v54,
                8,
                (float)(*(float *)&CCustomBuildingDNPipeline::m_fDNBalanceParam
                      * (float)((float)((float)(v56 >> 4) * 0.5) / 15.0))
              + (float)((float)(1.0 - *(float *)&CCustomBuildingDNPipeline::m_fDNBalanceParam)
                      * (float)((float)((float)(v56 & 0xF) * 0.5) / 15.0)));
            v29 = v2[1];
            if ( !v29 || (*(_BYTE *)(v29 + 58) & 7) != 3 || *(CEntity **)(v29 + 256) != v48 )
            {
              v30 = v48;
              v31 = *((_BYTE *)v48 + 58) & 7;
              if ( v31 == 1 )
              {
                if ( v29 )
                {
                  if ( (*(_BYTE *)(v29 + 58) & 7) == 3 )
                  {
                    v34 = *(_DWORD *)(v29 + 1092);
                    if ( v34 )
                      *(_DWORD *)(v34 + 156) = *((__int16 *)v48 + 19);
                  }
                }
              }
              else if ( v31 == 4 )
              {
                if ( *((unsigned __int8 *)v48 + 328) < 0xC8u )
                {
                  if ( (*((_BYTE *)v48 + 68) & 4) == 0 )
                  {
                    v35 = *((_DWORD *)v48 + 89);
                    if ( *(float *)(v35 + 24) < 99.9 )
                    {
                      v36 = *((_DWORD *)v48 + 7);
                      if ( (v36 & 0x40004) != 0 && *(float *)(v35 + 20) <= 0.0 )
                      {
                        (*(void (__fastcall **)(CEntity *, _DWORD))(*(_DWORD *)v48 + 20))(v48, 0);
                        CPhysical::AddToMovingList(v30);
                        v36 = *((_DWORD *)v30 + 7);
                      }
                      if ( (v36 & 0x40004) == 0 )
                        CPhysical::ApplyMoveForce(v30, v51 * -7.5, v52 * -7.5, v53 * -7.5);
                      v29 = v2[1];
                    }
                  }
                  v37 = dword_A84178[v1];
                }
                else
                {
                  v32 = *((_DWORD *)v48 + 89);
                  v33 = *(_DWORD *)(v32 + 72);
                  if ( v33 == 2 )
                  {
                    CObject::ObjectDamage(
                      (int)v48,
                      COERCE_INT(*(float *)(v32 + 52) * 151.0),
                      (int)&v49,
                      (int)&v51,
                      v2[1],
                      dword_A84178[v1]);
                  }
                  else if ( v33 == 1 )
                  {
                    CObject::ObjectDamage((int)v48, 1125580800, (int)&v49, (int)&v51, v2[1], dword_A84178[v1]);
                  }
                  v29 = v2[1];
                  v37 = dword_A84178[v1];
                }
                CObject::ObjectDamage((int)v30, 1112014848, (int)&v49, (int)&v51, v29, v37);
              }
            }
          }
          if ( dword_A84178[v1] == 34 )
          {
            v41 = *(float *)&v44 - *(float *)&v46;
            v42 = *((float *)&v44 + 1) - *((float *)&v46 + 1);
            v43 = v45 - v47;
            CVector::Normalise((CVector *)&v41);
            if ( (float)((float)((float)(v41 * v51) + (float)(v42 * v52)) + (float)(v43 * v53)) < 0.0 )
            {
              v38 = asinf(-(float)((float)((float)(v41 * v51) + (float)(v42 * v52)) + (float)(v43 * v53)));
              CAudioEngine::ReportBulletHit(
                (CAudioEngine *)&AudioEngine,
                v48,
                v54,
                (CVector *)&v49,
                (float)(v38 * 180.0) / 3.1416);
            }
          }
          CGlass::WasGlassHitByBullet();
        }
        CWorld::bIncludeCarTyres = 0;
        CWorld::bIncludeDeadPeds = 0;
        CWorld::bIncludeBikers = 0;
        CWorld::pIgnoreEntity = 0;
        if ( dword_A84178[v1] == 34 )
        {
          v39 = *(double *)v40;
          dword_A842E0 = (CVector *)*((_DWORD *)v40 + 2);
          unk_A842EC = LODWORD(v45);
          PlayerSniperBulletStart = *(_QWORD *)&v39;
          PlayerSniperBulletEnd = *(_QWORD *)&v44;
          CHeli::TestSniperCollision((CHeli *)&PlayerSniperBulletStart, (CVector *)&PlayerSniperBulletEnd, dword_A842E0);
        }
        *((float *)v40 + 2) = v45;
        result = v48;
        v17 = v48 == 0;
        *(double *)v40 = v44;
        if ( !v17 )
          *((_BYTE *)v4 + 12) = 0;
      }
    }
    v1 += 11;
  }
  while ( v1 != 88 );
  return result;
}


// ============================================================
