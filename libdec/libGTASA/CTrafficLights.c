
// Address: 0x18bfc8
// Original: j__ZN14CTrafficLights20FindTrafficLightTypeEP7CEntity
// Demangled: CTrafficLights::FindTrafficLightType(CEntity *)
// attributes: thunk
int __fastcall CTrafficLights::FindTrafficLightType(CTrafficLights *this, CEntity *a2)
{
  return _ZN14CTrafficLights20FindTrafficLightTypeEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x18d894
// Original: j__ZN14CTrafficLights18DisplayActualLightEP7CEntity
// Demangled: CTrafficLights::DisplayActualLight(CEntity *)
// attributes: thunk
int __fastcall CTrafficLights::DisplayActualLight(CTrafficLights *this, CEntity *a2)
{
  return _ZN14CTrafficLights18DisplayActualLightEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x190108
// Original: j__ZN14CTrafficLights21ShouldCarStopForLightEP8CVehicleb
// Demangled: CTrafficLights::ShouldCarStopForLight(CVehicle *,bool)
// attributes: thunk
int __fastcall CTrafficLights::ShouldCarStopForLight(CTrafficLights *this, CVehicle *a2, bool a3)
{
  return _ZN14CTrafficLights21ShouldCarStopForLightEP8CVehicleb(this, a2, a3);
}


// ============================================================

// Address: 0x19d810
// Original: j__ZN14CTrafficLights22ShouldCarStopForBridgeEP8CVehicle
// Demangled: CTrafficLights::ShouldCarStopForBridge(CVehicle *)
// attributes: thunk
int __fastcall CTrafficLights::ShouldCarStopForBridge(CTrafficLights *this, CVehicle *a2)
{
  return _ZN14CTrafficLights22ShouldCarStopForBridgeEP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x1a0824
// Original: j__ZN14CTrafficLights16IsMITrafficLightEi
// Demangled: CTrafficLights::IsMITrafficLight(int)
// attributes: thunk
int __fastcall CTrafficLights::IsMITrafficLight(CTrafficLights *this, int a2)
{
  return _ZN14CTrafficLights16IsMITrafficLightEi(this, a2);
}


// ============================================================

// Address: 0x1a097c
// Original: j__ZN14CTrafficLights12LightForPedsEv
// Demangled: CTrafficLights::LightForPeds(void)
// attributes: thunk
int __fastcall CTrafficLights::LightForPeds(CTrafficLights *this)
{
  return _ZN14CTrafficLights12LightForPedsEv(this);
}


// ============================================================

// Address: 0x362410
// Original: _ZN14CTrafficLights21ShouldCarStopForLightEP8CVehicleb
// Demangled: CTrafficLights::ShouldCarStopForLight(CVehicle *,bool)
bool __fastcall CTrafficLights::ShouldCarStopForLight(CTrafficLights *this, CVehicle *a2, bool a3)
{
  unsigned int v5; // r0
  int v6; // r10
  int v7; // r9
  int v8; // r11
  int v9; // r1
  int v10; // r3
  int v11; // r1
  float *v12; // r2
  float v13; // s0
  int active; // r0
  bool v15; // zf
  int v16; // r1
  _BOOL4 result; // r0
  bool v18; // zf
  unsigned int v19; // r0
  int v20; // r10
  int v21; // r9
  int v22; // r11
  int v23; // r1
  int v24; // r3
  int v25; // r1
  float *v26; // r2
  float v27; // s0
  int v28; // r0
  bool v29; // zf
  int v30; // r1
  bool v31; // zf
  unsigned int v32; // r0
  int v33; // r9
  int v34; // r8
  int v35; // r10
  int v36; // r1
  int v37; // r2
  int v38; // r1
  float *v39; // r2
  float v40; // s0
  int v41; // r0
  bool v42; // zf
  int v43; // r1
  bool v44; // zf

  if ( CVehicle::GetVehicleAppearance(this) == 3 || CVehicle::GetVehicleAppearance(this) == 5 )
    return 0;
  v5 = *((unsigned __int16 *)this + 468);
  if ( v5 == 0xFFFF )
    goto LABEL_34;
  if ( !ThePaths[(v5 >> 10) + 513] )
    goto LABEL_34;
  v6 = 7 * (v5 & 0x3FF);
  v7 = ThePaths[(v5 >> 10) + 585];
  v8 = v7 + 14 * (v5 & 0x3FF);
  if ( (*(_WORD *)(v8 + 11) & 0x300) == 0 )
    goto LABEL_34;
  v9 = *((unsigned __int16 *)this + 458);
  v10 = *(unsigned __int16 *)(v8 + 4);
  if ( (*(_WORD *)(v8 + 11) & 0x40) != 0 )
  {
    if ( v10 != v9 || *(unsigned __int16 *)(v8 + 6) != *((unsigned __int16 *)this + 459) )
      goto LABEL_34;
  }
  else if ( v10 == v9 && *(unsigned __int16 *)(v8 + 6) == *((unsigned __int16 *)this + 459) )
  {
    goto LABEL_34;
  }
  if ( a2 )
    goto LABEL_13;
  if ( (*(_WORD *)(v8 + 11) & 0x300) == 0x100 )
  {
    active = CGameLogic::LaRiotsActiveHere((CGameLogic *)CCheat::m_aCheatsActive);
    v15 = byte_796819 == 0;
    if ( !byte_796819 )
      v15 = active == 0;
    if ( v15 && (CTimer::m_snTimeInMilliseconds & 0x7FF0u) > 0x270F )
    {
LABEL_13:
      v11 = *((_DWORD *)this + 5);
      v12 = (float *)(v11 + 48);
      if ( !v11 )
        v12 = (float *)((char *)this + 4);
      v13 = (float)((float)(*v12 - (float)((float)*(__int16 *)(v7 + 2 * v6) * 0.125))
                  * (float)((float)*(char *)(v8 + 8) * 0.01))
          + (float)((float)(v12[1] - (float)((float)*(__int16 *)(v8 + 2) * 0.125))
                  * (float)((float)*(char *)(v8 + 9) * 0.01));
      if ( *((unsigned __int8 *)this + 953) == 255 )
      {
        if ( v13 > 0.0 && v13 < 12.0 )
          return 1;
      }
      else if ( v13 < 0.0 && v13 > -12.0 )
      {
        return 1;
      }
LABEL_34:
      v19 = *((unsigned __int16 *)this + 469);
      if ( v19 == 0xFFFF )
        goto LABEL_65;
      if ( !ThePaths[(v19 >> 10) + 513] )
        goto LABEL_65;
      v20 = 7 * (v19 & 0x3FF);
      v21 = ThePaths[(v19 >> 10) + 585];
      v22 = v21 + 14 * (v19 & 0x3FF);
      if ( (*(_WORD *)(v22 + 11) & 0x300) == 0 )
        goto LABEL_65;
      v23 = *((unsigned __int16 *)this + 460);
      v24 = *(unsigned __int16 *)(v22 + 4);
      if ( (*(_WORD *)(v22 + 11) & 0x40) != 0 )
      {
        if ( v24 != v23 || *(unsigned __int16 *)(v22 + 6) != *((unsigned __int16 *)this + 461) )
          goto LABEL_65;
      }
      else if ( v24 == v23 && *(unsigned __int16 *)(v22 + 6) == *((unsigned __int16 *)this + 461) )
      {
        goto LABEL_65;
      }
      if ( !a2 )
      {
        if ( (*(_WORD *)(v22 + 11) & 0x300) != 0x100 )
          goto LABEL_56;
        v28 = CGameLogic::LaRiotsActiveHere((CGameLogic *)CCheat::m_aCheatsActive);
        v29 = byte_796819 == 0;
        if ( !byte_796819 )
          v29 = v28 == 0;
        if ( !v29 || (CTimer::m_snTimeInMilliseconds & 0x7FF0u) <= 0x270F )
        {
LABEL_56:
          if ( (*(_WORD *)(v22 + 11) & 0x300) != 0x200 )
            return 0;
          v30 = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
          result = 0;
          v31 = byte_796819 == 0;
          if ( !byte_796819 )
            v31 = v30 == 0;
          if ( !v31 )
            return result;
          if ( (((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF) - 6000 < 0x1388 )
            return 0;
        }
      }
      v25 = *((_DWORD *)this + 5);
      v26 = (float *)(v25 + 48);
      if ( !v25 )
        v26 = (float *)((char *)this + 4);
      v27 = (float)((float)(*v26 - (float)((float)*(__int16 *)(v21 + 2 * v20) * 0.125))
                  * (float)((float)*(char *)(v22 + 8) * 0.01))
          + (float)((float)(v26[1] - (float)((float)*(__int16 *)(v22 + 2) * 0.125))
                  * (float)((float)*(char *)(v22 + 9) * 0.01));
      if ( *((unsigned __int8 *)this + 954) == 255 )
      {
        if ( v27 > 0.0 && v27 < 12.0 )
          return 1;
      }
      else if ( v27 < 0.0 && v27 > -12.0 )
      {
        return 1;
      }
LABEL_65:
      v32 = *((unsigned __int16 *)this + 470);
      if ( v32 == 0xFFFF )
        return 0;
      if ( !ThePaths[(v32 >> 10) + 513] )
        return 0;
      if ( (*((_BYTE *)this + 58) & 0xF8) != 0x18 )
        return 0;
      v33 = 7 * (v32 & 0x3FF);
      v34 = ThePaths[(v32 >> 10) + 585];
      v35 = v34 + 14 * (v32 & 0x3FF);
      if ( (*(_WORD *)(v35 + 11) & 0x300) == 0 )
        return 0;
      v36 = *((unsigned __int16 *)this + 462);
      v37 = *(unsigned __int16 *)(v35 + 4);
      if ( (*(_WORD *)(v35 + 11) & 0x40) != 0 )
      {
        if ( v37 != v36 || *(unsigned __int16 *)(v35 + 6) != *((unsigned __int16 *)this + 463) )
          return 0;
      }
      else if ( v37 == v36 && *(unsigned __int16 *)(v35 + 6) == *((unsigned __int16 *)this + 463) )
      {
        return 0;
      }
      if ( !a2 )
      {
        if ( (*(_WORD *)(v35 + 11) & 0x300) != 0x100 )
          goto LABEL_88;
        v41 = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
        v42 = byte_796819 == 0;
        if ( !byte_796819 )
          v42 = v41 == 0;
        if ( !v42 || (CTimer::m_snTimeInMilliseconds & 0x7FF0u) <= 0x270F )
        {
LABEL_88:
          if ( (*(_WORD *)(v35 + 11) & 0x300) != 0x200 )
            return 0;
          v43 = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
          result = 0;
          v44 = byte_796819 == 0;
          if ( !byte_796819 )
            v44 = v43 == 0;
          if ( !v44 )
            return result;
          if ( (((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF) - 6000 < 0x1388 )
            return 0;
        }
      }
      v38 = *((_DWORD *)this + 5);
      v39 = (float *)(v38 + 48);
      if ( !v38 )
        v39 = (float *)((char *)this + 4);
      v40 = (float)((float)(*v39 - (float)((float)*(__int16 *)(v34 + 2 * v33) * 0.125))
                  * (float)((float)*(char *)(v35 + 8) * 0.01))
          + (float)((float)(v39[1] - (float)((float)*(__int16 *)(v35 + 2) * 0.125))
                  * (float)((float)*(char *)(v35 + 9) * 0.01));
      if ( *((unsigned __int8 *)this + 952) == 255 )
      {
        result = 0;
        if ( v40 > 0.0 )
          return v40 < 6.0;
        return result;
      }
      result = 0;
      if ( v40 >= 0.0 || v40 <= -6.0 )
        return result;
      return 1;
    }
  }
  if ( (*(_WORD *)(v8 + 11) & 0x300) != 0x200 )
    return 0;
  v16 = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
  result = 0;
  v18 = byte_796819 == 0;
  if ( !byte_796819 )
    v18 = v16 == 0;
  if ( v18 )
  {
    if ( (((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF) - 6000 < 0x1388 )
      return 0;
    goto LABEL_13;
  }
  return result;
}


// ============================================================

// Address: 0x3629a4
// Original: _ZN14CTrafficLights13LightForCars1Ev
// Demangled: CTrafficLights::LightForCars1(void)
int __fastcall CTrafficLights::LightForCars1(CTrafficLights *this)
{
  int active; // r0
  unsigned __int8 v2; // r1
  bool v3; // zf
  unsigned int v4; // r0

  active = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
  v2 = 0;
  v3 = byte_796819 == 0;
  if ( !byte_796819 )
    v3 = active == 0;
  if ( v3 )
  {
    v4 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF;
    if ( v4 < 0x1388 )
      return 0;
    v2 = 2;
    if ( v4 < 0x1770 )
      return 1;
  }
  return v2;
}


// ============================================================

// Address: 0x3629f4
// Original: _ZN14CTrafficLights13LightForCars2Ev
// Demangled: CTrafficLights::LightForCars2(void)
int __fastcall CTrafficLights::LightForCars2(CTrafficLights *this)
{
  int active; // r0
  unsigned __int8 v2; // r1
  bool v3; // zf
  unsigned int v4; // r0

  active = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
  v2 = 0;
  v3 = byte_796819 == 0;
  if ( !byte_796819 )
    v3 = active == 0;
  if ( v3 )
  {
    v4 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF;
    if ( v4 < 0x1770 )
      return 2;
    if ( v4 < 0x2AF8 )
      return 0;
    v2 = 2;
    if ( v4 < 0x2EE0 )
      return 1;
  }
  return v2;
}


// ============================================================

// Address: 0x362a50
// Original: _ZN14CTrafficLights20LightForCars1_VisualEv
// Demangled: CTrafficLights::LightForCars1_Visual(void)
int __fastcall CTrafficLights::LightForCars1_Visual(CTrafficLights *this)
{
  unsigned __int8 v1; // r1
  int active; // r0
  unsigned __int8 v4; // r1
  bool v5; // zf
  unsigned int v6; // r0

  if ( CGameLogic::LaRiotsActiveHere(this) == 1 )
  {
    v1 = 3;
    if ( (CTimer::m_snTimeInMilliseconds & 0x400) == 0 )
      return 1;
    return v1;
  }
  else
  {
    active = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
    v4 = 0;
    v5 = byte_796819 == 0;
    if ( !byte_796819 )
      v5 = active == 0;
    if ( v5 )
    {
      v6 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF;
      if ( v6 < 0x1388 )
        return 0;
      v4 = 2;
      if ( v6 < 0x1770 )
        return 1;
    }
    return v4;
  }
}


// ============================================================

// Address: 0x362ac0
// Original: _ZN14CTrafficLights20LightForCars2_VisualEv
// Demangled: CTrafficLights::LightForCars2_Visual(void)
int __fastcall CTrafficLights::LightForCars2_Visual(CTrafficLights *this)
{
  unsigned __int8 v1; // r1
  int active; // r0
  unsigned __int8 v4; // r1
  bool v5; // zf
  unsigned int v6; // r0

  if ( CGameLogic::LaRiotsActiveHere(this) == 1 )
  {
    v1 = 3;
    if ( (CTimer::m_snTimeInMilliseconds & 0x400) == 0 )
      return 1;
    return v1;
  }
  else
  {
    active = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
    v4 = 0;
    v5 = byte_796819 == 0;
    if ( !byte_796819 )
      v5 = active == 0;
    if ( v5 )
    {
      v6 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF;
      if ( v6 < 0x1770 )
        return 2;
      if ( v6 < 0x2AF8 )
        return 0;
      v4 = 2;
      if ( v6 < 0x2EE0 )
        return 1;
    }
    return v4;
  }
}


// ============================================================

// Address: 0x362b3c
// Original: _ZN14CTrafficLights12LightForPedsEv
// Demangled: CTrafficLights::LightForPeds(void)
int __fastcall CTrafficLights::LightForPeds(CTrafficLights *this)
{
  unsigned int v1; // r1
  int result; // r0

  v1 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF;
  result = v1 > 0x3C17;
  if ( v1 < 0x2EE0 )
    return 2;
  return result;
}


// ============================================================

// Address: 0x362b64
// Original: _ZN14CTrafficLights18DisplayActualLightEP7CEntity
// Demangled: CTrafficLights::DisplayActualLight(CEntity *)
int __fastcall CTrafficLights::DisplayActualLight(CTrafficLights *this, CEntity *a2)
{
  int result; // r0
  int v4; // r0
  CEntity *v5; // r1
  CGameLogic *TrafficLightType; // r4
  int active; // r0
  int v8; // r0
  bool v9; // zf
  unsigned int v10; // r0
  int v11; // r2
  unsigned int v12; // r1
  int v13; // r0
  bool v14; // zf
  float *v15; // r0
  CBaseModelInfo *v16; // r8
  float v17; // s0
  float v18; // s4
  float v19; // s2
  unsigned int v20; // r5
  int v21; // r6
  float v22; // s18
  int v23; // r4
  int v24; // r0
  bool v25; // zf
  int v26; // r0
  float v27; // s0
  float v28; // s0
  float v29; // s24
  float v30; // s22
  float v31; // s20
  float v32; // s18
  float v33; // s26
  char v34; // r0
  char v35; // r0
  int *v36; // r0
  int *v37; // r1
  char v38; // r0
  char v39; // r0
  unsigned int v40; // r2
  int v41; // r1
  bool v42; // [sp+44h] [bp-12Ch]
  unsigned int v43; // [sp+74h] [bp-FCh]
  unsigned __int8 *v44; // [sp+78h] [bp-F8h]
  CSimpleTransform *v45; // [sp+7Ch] [bp-F4h]
  unsigned int v46; // [sp+80h] [bp-F0h]
  float v47; // [sp+108h] [bp-68h] BYREF
  float v48; // [sp+10Ch] [bp-64h]
  float v49; // [sp+110h] [bp-60h]
  float v50; // [sp+114h] [bp-5Ch] BYREF
  float v51; // [sp+118h] [bp-58h]
  float v52; // [sp+11Ch] [bp-54h]

  result = *((_DWORD *)this + 5);
  if ( !result )
  {
    CPlaceable::AllocateMatrix(this);
    CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
    result = *((_DWORD *)this + 5);
  }
  if ( *(float *)(result + 40) >= 0.96 )
  {
    result = *((unsigned __int8 *)this + 29) << 30;
    if ( (*((_BYTE *)this + 29) & 2) == 0 )
    {
      v4 = *((__int16 *)this + 19);
      v5 = (CEntity *)(unsigned __int16)MI_TRAFFICLIGHTS_3;
      if ( v4 != (unsigned __int16)MI_TRAFFICLIGHTS_3 )
      {
        v5 = (CEntity *)(unsigned __int16)MI_TRAFFICLIGHTS_4;
        if ( v4 != (unsigned __int16)MI_TRAFFICLIGHTS_4 )
        {
          v5 = (CEntity *)(unsigned __int16)MI_TRAFFICLIGHTS_5;
          if ( v4 != (unsigned __int16)MI_TRAFFICLIGHTS_5 )
          {
            v5 = (CEntity *)(unsigned __int16)MI_TRAFFICLIGHTS_GAY;
            if ( v4 != (unsigned __int16)MI_TRAFFICLIGHTS_GAY )
              v5 = (CEntity *)(unsigned __int16)MI_TRAFFICLIGHTS_MIAMI;
          }
        }
      }
      TrafficLightType = (CGameLogic *)CTrafficLights::FindTrafficLightType(this, v5);
      active = CGameLogic::LaRiotsActiveHere(TrafficLightType);
      if ( TrafficLightType == (CGameLogic *)((char *)&stderr + 1) )
      {
        if ( active == 1 )
          goto LABEL_14;
        v8 = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
        v46 = 0;
        v9 = byte_796819 == 0;
        if ( !byte_796819 )
          v9 = v8 == 0;
        if ( !v9 )
          goto LABEL_33;
        v10 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF;
        if ( v10 >= 0x1388 )
        {
          v11 = 2;
          v12 = 6000;
LABEL_30:
          if ( v10 < v12 )
            v11 = 1;
          v46 = v11;
          goto LABEL_33;
        }
      }
      else
      {
        if ( active == 1 )
        {
LABEL_14:
          v46 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 9) & 2 | 1;
          goto LABEL_33;
        }
        v13 = CGameLogic::LaRiotsActiveHere((CGameLogic *)&CCheat::m_aCheatsActive);
        v46 = 0;
        v14 = byte_796819 == 0;
        if ( !byte_796819 )
          v14 = v13 == 0;
        if ( !v14 )
        {
LABEL_33:
          v15 = (float *)*((_DWORD *)this + 5);
          v16 = (CBaseModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]);
          if ( !v15 )
          {
            CPlaceable::AllocateMatrix(this);
            CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
            v15 = (float *)*((_DWORD *)this + 5);
          }
          v17 = v15[4];
          v18 = v15[5];
          v19 = v15[6];
          v20 = *((unsigned __int8 *)v16 + 35);
          v50 = 0.0;
          v51 = 0.0;
          v52 = 0.0;
          if ( v20 )
          {
            v45 = (CTrafficLights *)((char *)this + 4);
            v21 = 0;
            v22 = (float)((float)(*(float *)&dword_9528B4 * v17) + (float)(*(float *)&dword_9528B8 * v18))
                + (float)(*(float *)&dword_9528BC * v19);
            v44 = (unsigned __int8 *)v16;
            v43 = v20;
            do
            {
              v23 = CBaseModelInfo::Get2dEffect(v16, v21);
              if ( !*(_BYTE *)(v23 + 12) && dword_6E03FC >= 2 )
              {
                if ( !*((_DWORD *)this + 5) )
                {
                  CPlaceable::AllocateMatrix(this);
                  CSimpleTransform::UpdateMatrix(v45, *((CMatrix **)this + 5));
                }
                operator*();
                v50 = v47 + v50;
                v51 = v48 + v51;
                v52 = v49 + v52;
                if ( *(unsigned __int8 *)(v23 + 16) < 0xC9u )
                {
                  v24 = 0;
                }
                else
                {
                  v24 = 2;
                  if ( *(unsigned __int8 *)(v23 + 17) > 0x64u )
                    v24 = 1;
                }
                v25 = v24 == v46;
                if ( v24 == v46 )
                  v25 = ((v22 > 0.0) ^ (*(float *)(v23 + 4) > 0.0)) == 1;
                if ( v25 )
                {
                  CCoronas::RegisterCorona(
                    (CTrafficLights *)((char *)this + v21),
                    0,
                    (CEntity *)(float)((float)((float)(unk_966590 / 10.0) * 0.7) * (float)aTrafficLightColoursR[v46]),
                    (unsigned int)(float)((float)((float)(unk_966590 / 10.0) * 0.7) * (float)aTrafficLightColoursG[v46]),
                    (unsigned int)(float)((float)((float)(unk_966590 / 10.0) * 0.7) * (float)aTrafficLightColoursB[v46]),
                    0xFFu,
                    (unsigned __int8)&v47,
                    COERCE_CONST_CVECTOR_((float)(unk_96658C / 10.0) * 1.75),
                    50.0,
                    0.0,
                    0,
                    1u,
                    0,
                    0,
                    0.0,
                    0.0,
                    1.5,
                    0.0,
                    15.0,
                    0.0,
                    0,
                    v42);
                  v26 = *((_DWORD *)this + 5);
                  if ( !v26 )
                  {
                    CPlaceable::AllocateMatrix(this);
                    CSimpleTransform::UpdateMatrix(v45, *((CMatrix **)this + 5));
                    v26 = *((_DWORD *)this + 5);
                  }
                  if ( !v26 )
                  {
                    CPlaceable::AllocateMatrix(this);
                    CSimpleTransform::UpdateMatrix(v45, *((CMatrix **)this + 5));
                  }
                  CBrightLights::RegisterOne();
                  v16 = (CBaseModelInfo *)v44;
                  v20 = v43;
                }
              }
              ++v21;
            }
            while ( v20 != v21 );
            v27 = 1.0 / (float)v20;
            v50 = v27 * v50;
            v51 = v27 * v51;
            v52 = v27 * v52;
            if ( v46 <= 2 )
            {
              v28 = CWeather::TrafficLightsBrightness;
              if ( CWeather::TrafficLightsBrightness > 0.5 )
              {
                CPointLights::AddLight();
                v28 = CWeather::TrafficLightsBrightness;
              }
              if ( v28 > 0.05 )
                CShadows::StoreStaticShadow(
                  (int)this,
                  2,
                  gpShadowExplosionTex,
                  (int)&v50,
                  8.0,
                  0.0,
                  0.0,
                  -8.0,
                  128,
                  (unsigned int)(float)((float)((float)(v28 * (float)aTrafficLightColoursR[v46])
                                              * (float)(*(float *)&dword_9665A4 / 10.0))
                                      * 0.125),
                  (unsigned int)(float)((float)((float)(*(float *)&dword_9665A4 / 10.0)
                                              * (float)(v28 * (float)aTrafficLightColoursG[v46]))
                                      * 0.125),
                  (unsigned int)(float)((float)((float)(*(float *)&dword_9665A4 / 10.0)
                                              * (float)(v28 * (float)aTrafficLightColoursB[v46]))
                                      * 0.125),
                  12.0,
                  1.0,
                  40.0,
                  0,
                  0.0);
            }
          }
          v29 = -0.141;
          v30 = 1.848;
          result = *((__int16 *)this + 19);
          v31 = -0.157;
          v32 = 0.189;
          if ( result == (unsigned __int16)MI_TRAFFICLIGHTS_4 )
          {
            v33 = -0.157;
          }
          else
          {
            v33 = -0.157;
            if ( result != (unsigned __int16)MI_TRAFFICLIGHTS_GAY )
            {
              if ( result == (unsigned __int16)MI_TRAFFICLIGHTS_5 )
              {
                v34 = byte_8204EC;
                __dmb(0xBu);
                if ( (v34 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_8204EC) )
                {
                  dword_8204E0 = -1120650920;
                  *(_DWORD *)algn_8204E4 = -1098538549;
                  dword_8204E8 = 1070059225;
                  j___cxa_guard_release((__guard *)&byte_8204EC);
                }
                v35 = byte_8204FC;
                __dmb(0xBu);
                if ( (v35 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_8204FC) )
                {
                  dword_8204F0 = 1046696952;
                  *(_DWORD *)algn_8204F4 = -1098538549;
                  dword_8204F8 = 1072626139;
                  j___cxa_guard_release((__guard *)&byte_8204FC);
                }
                v36 = &dword_8204F0;
                v37 = &dword_8204E0;
              }
              else
              {
                if ( result != (unsigned __int16)MI_TRAFFICLIGHTS )
                  return result;
                v38 = byte_82050C;
                __dmb(0xBu);
                if ( (v38 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_82050C) )
                {
                  dword_820500 = 1076564591;
                  *(_DWORD *)algn_820504 = 1067551031;
                  dword_820508 = -1089864729;
                  j___cxa_guard_release((__guard *)&byte_82050C);
                }
                v39 = byte_82051C;
                __dmb(0xBu);
                if ( (v39 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_82051C) )
                {
                  dword_820510 = 1076564591;
                  *(_DWORD *)algn_820514 = 1060538155;
                  dword_820518 = -1107162038;
                  j___cxa_guard_release((__guard *)&byte_82051C);
                }
                v36 = &dword_820510;
                v37 = &dword_820500;
              }
              v32 = *(float *)v36;
              v31 = *((float *)v36 + 1);
              v30 = *((float *)v36 + 2);
              v29 = *(float *)v37;
              v33 = *((float *)v37 + 1);
            }
          }
          v40 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF;
          v41 = v40 > 0x3C17;
          if ( v40 < 0x2EE0 )
            v41 = 2;
          if ( v41 )
          {
            if ( v41 == 2 )
            {
              if ( !*((_DWORD *)this + 5) )
              {
                CPlaceable::AllocateMatrix(this);
                CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
              }
              v48 = v33;
              v47 = v29;
              v49 = v30;
              operator*();
              if ( !*((_DWORD *)this + 5) )
              {
                CPlaceable::AllocateMatrix(this);
                CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
              }
              operator*();
              if ( !*((_DWORD *)this + 5) )
              {
                CPlaceable::AllocateMatrix(this);
                CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
              }
              operator*();
              if ( !*((_DWORD *)this + 5) )
              {
                CPlaceable::AllocateMatrix(this);
                CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
              }
LABEL_103:
              operator*();
              return CShinyTexts::RegisterOne();
            }
            result = CTimer::m_snTimeInMilliseconds << 23;
            if ( (CTimer::m_snTimeInMilliseconds & 0x100) == 0 )
              return result;
          }
          if ( !*((_DWORD *)this + 5) )
          {
            CPlaceable::AllocateMatrix(this);
            CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
          }
          v49 = v30;
          v48 = (float)(v31 + v33) * 0.5;
          v47 = (float)(v32 + v29) * 0.5;
          operator*();
          if ( !*((_DWORD *)this + 5) )
          {
            CPlaceable::AllocateMatrix(this);
            CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
          }
          operator*();
          if ( !*((_DWORD *)this + 5) )
          {
            CPlaceable::AllocateMatrix(this);
            CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
          }
          operator*();
          if ( !*((_DWORD *)this + 5) )
          {
            CPlaceable::AllocateMatrix(this);
            CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
          }
          goto LABEL_103;
        }
        v10 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 1) & 0x3FFF;
        if ( v10 < 0x1770 )
        {
          v46 = 2;
          goto LABEL_33;
        }
        if ( v10 >= 0x2AF8 )
        {
          v11 = 2;
          v12 = 12000;
          goto LABEL_30;
        }
      }
      v46 = 0;
      goto LABEL_33;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3636e8
// Original: _ZN14CTrafficLights20FindTrafficLightTypeEP7CEntity
// Demangled: CTrafficLights::FindTrafficLightType(CEntity *)
int __fastcall CTrafficLights::FindTrafficLightType(CTrafficLights *this, CEntity *a2, float a3)
{
  int v4; // r1
  CGeneral *v5; // s16
  float v6; // s0
  int result; // r0

  v4 = *((_DWORD *)this + 5);
  if ( v4 )
  {
    v5 = *(CGeneral **)(v4 + 16);
  }
  else
  {
    CPlaceable::AllocateMatrix(this);
    CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
    v4 = *((_DWORD *)this + 5);
    v5 = *(CGeneral **)(v4 + 16);
    if ( !v4 )
    {
      CPlaceable::AllocateMatrix(this);
      CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
      v4 = *((_DWORD *)this + 5);
    }
  }
  v6 = COERCE_FLOAT(CGeneral::GetATanOfXY(v5, *(float *)(v4 + 20), a3)) * 57.296;
  if ( v6 > 60.0 && v6 < 150.0 )
    return 1;
  result = 2;
  if ( v6 < 330.0 )
    result = 1;
  if ( v6 <= 240.0 )
    return 2;
  return result;
}


// ============================================================

// Address: 0x3637a0
// Original: _ZN14CTrafficLights22ShouldCarStopForBridgeEP8CVehicle
// Demangled: CTrafficLights::ShouldCarStopForBridge(CVehicle *)
bool __fastcall CTrafficLights::ShouldCarStopForBridge(CTrafficLights *this, CVehicle *a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r1
  bool v5; // zf

  if ( CVehicle::GetVehicleAppearance(this) == 3 )
    return 0;
  if ( CVehicle::GetVehicleAppearance(this) == 5 )
    return 0;
  v3 = *((unsigned __int16 *)this + 469);
  if ( v3 == 0xFFFF )
    return 0;
  v4 = ThePaths[(v3 >> 10) + 513];
  v5 = v4 == 0;
  if ( v4 )
  {
    v4 = *((unsigned __int16 *)this + 468);
    v5 = v4 == 0xFFFF;
  }
  return !v5
      && ThePaths[(v4 >> 10) + 513]
      && (*(_BYTE *)(ThePaths[(v3 >> 10) + 585] + 14 * (v3 & 0x3FF) + 12) & 4) != 0
      && (*(_BYTE *)(ThePaths[(v4 >> 10) + 585] + 14 * (v4 & 0x3FF) + 12) & 4) == 0;
}


// ============================================================

// Address: 0x36384c
// Original: _ZN14CTrafficLights35FindTrafficLightTypeFromOrientationEf
// Demangled: CTrafficLights::FindTrafficLightTypeFromOrientation(float)
int __fastcall CTrafficLights::FindTrafficLightTypeFromOrientation(CTrafficLights *this, float a2)
{
  int result; // r0

  if ( *(float *)&this > 60.0 && *(float *)&this < 150.0 )
    return 1;
  result = 2;
  if ( *(float *)&this < 330.0 )
    result = 1;
  if ( *(float *)&this <= 240.0 )
    return 2;
  return result;
}


// ============================================================

// Address: 0x3638a8
// Original: _ZN14CTrafficLights34FindOrientationForTrafficLightTypeEP7CEntity
// Demangled: CTrafficLights::FindOrientationForTrafficLightType(CEntity *)
float __fastcall CTrafficLights::FindOrientationForTrafficLightType(CTrafficLights *this, CEntity *a2, float a3)
{
  int v4; // r1
  CGeneral *v5; // s16

  v4 = *((_DWORD *)this + 5);
  if ( v4 )
  {
    v5 = *(CGeneral **)(v4 + 16);
  }
  else
  {
    CPlaceable::AllocateMatrix(this);
    CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
    v4 = *((_DWORD *)this + 5);
    v5 = *(CGeneral **)(v4 + 16);
    if ( !v4 )
    {
      CPlaceable::AllocateMatrix(this);
      CSimpleTransform::UpdateMatrix((CTrafficLights *)((char *)this + 4), *((CMatrix **)this + 5));
      v4 = *((_DWORD *)this + 5);
    }
  }
  return COERCE_FLOAT(CGeneral::GetATanOfXY(v5, *(float *)(v4 + 20), a3)) * 57.296;
}


// ============================================================

// Address: 0x36390c
// Original: _ZN14CTrafficLights16IsMITrafficLightEi
// Demangled: CTrafficLights::IsMITrafficLight(int)
bool __fastcall CTrafficLights::IsMITrafficLight(CTrafficLights *this, int a2)
{
  return (CTrafficLights *)(unsigned __int16)MI_TRAFFICLIGHTS == this
      || (CTrafficLights *)(unsigned __int16)MI_TRAFFICLIGHTS_VERTICAL == this
      || (CTrafficLights *)(unsigned __int16)MI_TRAFFICLIGHTS_MIAMI == this
      || (CTrafficLights *)(unsigned __int16)MI_TRAFFICLIGHTS_VEGAS == this
      || (CTrafficLights *)(unsigned __int16)MI_TRAFFICLIGHTS_TWOVERTICAL == this
      || (CTrafficLights *)(unsigned __int16)MI_TRAFFICLIGHTS_3 == this
      || (CTrafficLights *)(unsigned __int16)MI_TRAFFICLIGHTS_4 == this
      || (CTrafficLights *)(unsigned __int16)MI_TRAFFICLIGHTS_GAY == this
      || (unsigned __int16)MI_TRAFFICLIGHTS_5 == (_DWORD)this;
}


// ============================================================
