
// Address: 0x18e410
// Original: j__ZN7CRemote22TakeRemoteControlOfCarEP8CVehicle
// Demangled: CRemote::TakeRemoteControlOfCar(CVehicle *)
// attributes: thunk
int __fastcall CRemote::TakeRemoteControlOfCar(CRemote *this, CVehicle *a2)
{
  return _ZN7CRemote22TakeRemoteControlOfCarEP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x1961e8
// Original: j__ZN7CRemote29GivePlayerRemoteControlledCarEfffft
// Demangled: CRemote::GivePlayerRemoteControlledCar(float,float,float,float,ushort)
// attributes: thunk
int __fastcall CRemote::GivePlayerRemoteControlledCar(
        CRemote *this,
        float a2,
        float a3,
        float a4,
        CModelInfo *a5,
        unsigned __int16 a6)
{
  return _ZN7CRemote29GivePlayerRemoteControlledCarEfffft(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x1a0cf0
// Original: j__ZN7CRemote33TakeRemoteControlledCarFromPlayerEb
// Demangled: CRemote::TakeRemoteControlledCarFromPlayer(bool)
// attributes: thunk
int __fastcall CRemote::TakeRemoteControlledCarFromPlayer(CRemote *this, bool a2)
{
  return _ZN7CRemote33TakeRemoteControlledCarFromPlayerEb(this, a2);
}


// ============================================================

// Address: 0x32445c
// Original: _ZN7CRemote29GivePlayerRemoteControlledCarEfffft
// Demangled: CRemote::GivePlayerRemoteControlledCar(float,float,float,float,ushort)
int __fastcall CRemote::GivePlayerRemoteControlledCar(
        CRemote *this,
        float a2,
        float a3,
        float a4,
        CModelInfo *a5,
        unsigned __int16 a6)
{
  unsigned int v12; // r1
  int v13; // r4
  unsigned int v14; // r1
  float v15; // r5
  float v16; // r6
  int v17; // r0
  float *v18; // r0
  char v19; // r1
  CVehicle *v20; // r1
  int v21; // r2
  CEntity *v22; // r1
  unsigned int v23; // r0
  int PlayerVehicle; // r0
  int *v25; // r1
  CEntity **v27; // [sp+4h] [bp-34h] BYREF

  if ( CModelInfo::IsHeliModel(a5, SLODWORD(a2)) )
  {
    v13 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[588], v12);
    CHeli::CHeli((CHeli *)v13, (int)a5, 2u);
  }
  else if ( CModelInfo::IsPlaneModel(a5, v12) )
  {
    v13 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[583], v14);
    CPlane::CPlane((CPlane *)v13, (int)a5, 2u);
  }
  else
  {
    v13 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[552], v14);
    CAutomobile::CAutomobile((CAutomobile *)v13, (int)a5, 2u, 1u);
  }
  v15 = COERCE_FLOAT(CWorld::FindGroundZFor3DCoord(this, a2, a3 + 2.0, COERCE_FLOAT((CEntity ***)((char *)&v27 + 3)), 0, v27));
  v16 = COERCE_FLOAT(CEntity::GetDistanceFromCentreOfMassToBaseOfModel((CEntity *)v13));
  CMatrix::SetRotateZOnly(*(CMatrix **)(v13 + 20), a4);
  v17 = *(_DWORD *)(v13 + 20);
  if ( v17 )
  {
    *(_DWORD *)(v17 + 48) = this;
    *(float *)(*(_DWORD *)(v13 + 20) + 52) = a2;
    v18 = (float *)(*(_DWORD *)(v13 + 20) + 56);
  }
  else
  {
    v18 = (float *)(v13 + 12);
    *(_DWORD *)(v13 + 4) = this;
    *(float *)(v13 + 8) = a2;
  }
  *v18 = v15 + v16;
  v19 = *(_BYTE *)(v13 + 58);
  *(_DWORD *)(v13 + 1068) |= 8u;
  v20 = (CVehicle *)(v19 & 7 | 0x40);
  *(_BYTE *)(v13 + 58) = (_BYTE)v20;
  CCarCtrl::JoinCarWithRoadSystem((CCarCtrl *)v13, v20);
  v21 = *(_DWORD *)(v13 + 1072);
  v22 = *(CEntity **)(v13 + 1068);
  *(_BYTE *)(v13 + 959) = 0;
  *(_DWORD *)(v13 + 972) = 1091567616;
  *(_BYTE *)(v13 + 980) = 9;
  *(_DWORD *)(v13 + 955) = 0;
  v23 = (unsigned int)v22 & 0xFFFFFFEF;
  if ( (v21 & 0x200) == 0 )
    v23 = (unsigned int)v22 | 0x10;
  *(_DWORD *)(v13 + 1068) = v23;
  CWorld::Add((CWorld *)v13, v22);
  if ( FindPlayerVehicle(-1, 0) )
  {
    PlayerVehicle = FindPlayerVehicle(-1, 0);
    *(_BYTE *)(PlayerVehicle + 58) = *(_BYTE *)(PlayerVehicle + 58) & 7 | 0x48;
  }
  v25 = &CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v25[44] = v13;
  CEntity::RegisterReference((CEntity *)v13, (CEntity **)v25 + 44);
  CCamera::TakeControl((CCamera *)&TheCamera, (CEntity *)v13, 18, 1, 1);
  return CCamera::SetZoomValueCamStringScript((CCamera *)&TheCamera, 1);
}


// ============================================================

// Address: 0x324600
// Original: _ZN7CRemote33TakeRemoteControlledCarFromPlayerEb
// Demangled: CRemote::TakeRemoteControlledCarFromPlayer(bool)
int __fastcall CRemote::TakeRemoteControlledCarFromPlayer(CRemote *this, bool a2)
{
  char v2; // r8
  __int16 v3; // r1
  int v4; // r0
  int v5; // r2
  int *v6; // r1
  int result; // r0

  v2 = (char)this;
  v3 = *(_WORD *)&CWorld::PlayerInFocus;
  v4 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 44];
  if ( *(_BYTE *)(v4 + 1192) == 2 )
  {
    CVehicle::SetVehicleCreatedBy((CVehicle *)v4, 1, 0);
    v5 = -1075391197
       * ((CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 44] - *(_DWORD *)CPools::ms_pVehiclePool) >> 2);
    CMissionCleanup::RemoveEntityFromList(
      (CMissionCleanup *)CTheScripts::MissionCleanUp,
      *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4) + v5) | (v5 << 8),
      1u);
    v3 = *(_WORD *)&CWorld::PlayerInFocus;
    v4 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 44];
  }
  v6 = &CWorld::Players[101 * v3];
  *(_DWORD *)(v4 + 1068) &= ~8u;
  result = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)v6 + 221) = 1;
  v6[56] = result;
  *((_BYTE *)v6 + 222) = v2;
  *((_BYTE *)v6 + 223) = 1;
  return result;
}


// ============================================================

// Address: 0x3246d8
// Original: _ZN7CRemote22TakeRemoteControlOfCarEP8CVehicle
// Demangled: CRemote::TakeRemoteControlOfCar(CVehicle *)
int __fastcall CRemote::TakeRemoteControlOfCar(CRemote *this, CVehicle *a2)
{
  int *v3; // r1
  _DWORD *v4; // r1
  int v5; // r2
  int v6; // t1
  _BOOL4 v7; // r5
  int v8; // r2
  int v9; // r3
  unsigned int v10; // r1
  int PlayerVehicle; // r0
  __int16 v12; // r2
  int *v13; // r1
  CEntity *v14; // r0
  CEntity **v15; // r1
  CEntity *v16; // t1
  int *v17; // r1

  v3 = &CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v6 = v3[44];
  v4 = v3 + 44;
  v5 = v6;
  if ( v6 )
  {
    *(_BYTE *)(v5 + 58) = *(_BYTE *)(v5 + 58) & 7 | 0x18;
    v7 = *v4 != (_DWORD)this;
  }
  else
  {
    v7 = 0;
  }
  *((_BYTE *)this + 959) = 0;
  *((_DWORD *)this + 243) = 1091567616;
  *((_BYTE *)this + 980) = 9;
  *(_DWORD *)((char *)this + 955) = 0;
  v8 = *((_DWORD *)this + 267);
  v9 = *((_DWORD *)this + 268);
  *((_BYTE *)this + 58) = *((_BYTE *)this + 58) & 7 | 0x40;
  v10 = v8 & 0xFFFFFFE7 | 8;
  if ( (v9 & 0x200) == 0 )
    v10 = v8 | 0x18;
  *((_DWORD *)this + 267) = v10;
  if ( FindPlayerVehicle(-1, 0) )
  {
    PlayerVehicle = FindPlayerVehicle(-1, 0);
    *(_BYTE *)(PlayerVehicle + 58) = *(_BYTE *)(PlayerVehicle + 58) & 7 | 0x48;
  }
  v12 = *(_WORD *)&CWorld::PlayerInFocus;
  v13 = &CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v16 = (CEntity *)v13[44];
  v15 = (CEntity **)(v13 + 44);
  v14 = v16;
  if ( v16 )
  {
    CEntity::CleanUpOldReference(v14, v15);
    v12 = *(_WORD *)&CWorld::PlayerInFocus;
  }
  v17 = &CWorld::Players[101 * v12];
  v17[44] = (int)this;
  CEntity::RegisterReference(this, (CEntity **)v17 + 44);
  if ( v7 )
    CCamera::TakeControl((CCamera *)&TheCamera, this, 18, 2, 1);
  else
    CCamera::TakeControl((CCamera *)&TheCamera, this, 18, 1, 1);
  return j_CCamera::SetZoomValueCamStringScript((CCamera *)&TheCamera, 1);
}


// ============================================================
