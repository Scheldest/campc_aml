
// Address: 0x18a280
// Original: j__ZN25CPedToPlayerConversations6UpdateEv
// Demangled: CPedToPlayerConversations::Update(void)
// attributes: thunk
int __fastcall CPedToPlayerConversations::Update(CPedToPlayerConversations *this)
{
  return _ZN25CPedToPlayerConversations6UpdateEv(this);
}


// ============================================================

// Address: 0x18fe1c
// Original: j__ZN25CPedToPlayerConversations5ClearEv
// Demangled: CPedToPlayerConversations::Clear(void)
// attributes: thunk
int __fastcall CPedToPlayerConversations::Clear(CPedToPlayerConversations *this)
{
  return _ZN25CPedToPlayerConversations5ClearEv(this);
}


// ============================================================

// Address: 0x1945cc
// Original: j__ZN25CPedToPlayerConversations15EndConversationEv
// Demangled: CPedToPlayerConversations::EndConversation(void)
// attributes: thunk
int __fastcall CPedToPlayerConversations::EndConversation(CPedToPlayerConversations *this)
{
  return _ZN25CPedToPlayerConversations15EndConversationEv(this);
}


// ============================================================

// Address: 0x301ab4
// Original: _ZN25CPedToPlayerConversations5ClearEv
// Demangled: CPedToPlayerConversations::Clear(void)
void __fastcall CPedToPlayerConversations::Clear(CPedToPlayerConversations *this)
{
  if ( CPedToPlayerConversations::m_State )
  {
    CAEPedSpeechAudioEntity::ReleasePlayerConversation((CAEPedSpeechAudioEntity *)CPedToPlayerConversations::m_State);
    CPedToPlayerConversations::m_State = 0;
  }
  CPedToPlayerConversations::m_TimeOfLastPlayerConversation = 0;
  CPedToPlayerConversations::m_pPed = 0;
}


// ============================================================

// Address: 0x301af8
// Original: _ZN25CPedToPlayerConversations6UpdateEv
// Demangled: CPedToPlayerConversations::Update(void)
unsigned int __fastcall CPedToPlayerConversations::Update(CPedToPlayerConversations *this)
{
  float *PlayerPed; // r4
  unsigned int result; // r0
  int v3; // r8
  _DWORD *v4; // r6
  int v5; // r10
  bool v6; // zf
  float *v7; // r9
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float v11; // r11
  float v12; // r5
  float *v13; // r11
  float *v14; // r1
  float v15; // s25
  float v16; // s29
  float v17; // s27
  float v18; // s31
  float v19; // s24
  float v20; // s22
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float32x2_t v24; // d16
  unsigned __int64 v25; // d1
  unsigned int v26; // r0
  unsigned __int16 v27; // r0
  int v28; // r1
  CPed *v29; // r1
  float32x2_t *v30; // r2
  float32x2_t *v31; // r3
  float32x2_t *v32; // r1
  float32x2_t v33; // d16
  unsigned __int64 v34; // d0
  unsigned int v35; // r1
  CPed *v36; // r1
  float v37; // r0
  CPed *v38; // r1
  int v39; // r0
  float v40; // s0
  int v41; // r0
  int v42; // s22
  CPed *v43; // r1
  float v44; // r11
  float v45; // s22
  unsigned __int16 v46; // r1
  float v47; // s0
  int v48; // r0
  CPed *v49; // r1
  float v50; // r0
  CPed *v51; // r1
  int v52; // r0
  float v53; // r0
  CPed *v54; // r1
  int v55; // r0
  int v56; // r0
  int v57; // r0
  CPed *v58; // r1
  CPad *Pad; // r0
  int v60; // r1
  CPad *v61; // r0
  int v62; // r0
  bool v63; // zf
  int v64; // r0
  bool v65; // zf
  int v66; // r0
  bool v67; // zf
  unsigned int v68; // r1
  CTaskComplexSequence *v69; // r5
  unsigned int v70; // r1
  CTaskSimpleStandStill *v71; // r6
  unsigned int v72; // r1
  CTaskComplexKillPedOnFoot *v73; // r6
  int v74; // r3
  int v75; // r0
  unsigned int v76; // r1
  CTaskComplexSequence *v77; // r5
  unsigned int v78; // r1
  CTaskSimpleStandStill *v79; // r6
  unsigned int v80; // r1
  CTaskComplexKillPedOnFoot *v81; // r6
  unsigned __int16 v82; // r1
  float x; // [sp+20h] [bp-A0h]
  float v84; // [sp+24h] [bp-9Ch]
  float32x2_t **v85; // [sp+2Ch] [bp-94h]
  float v86; // [sp+48h] [bp-78h] BYREF
  float32x2_t v87; // [sp+4Ch] [bp-74h] BYREF

  PlayerPed = (float *)FindPlayerPed(-1);
  if ( FindPlayerVehicle(-1, 0) )
  {
    dword_7A1130 = FindPlayerVehicle(-1, 0);
    CEntity::RegisterReference((CEntity *)dword_7A1130, (CEntity **)&dword_7A1130);
  }
  result = CPedToPlayerConversations::m_State;
  switch ( CPedToPlayerConversations::m_State )
  {
    case 0:
      result = CPedToPlayerConversations::m_TimeOfLastPlayerConversation + 30000;
      if ( CTimer::m_snTimeInMilliseconds <= (unsigned int)(CPedToPlayerConversations::m_TimeOfLastPlayerConversation
                                                          + 30000) )
        return result;
      result = FindPlayerVehicle(-1, 0);
      if ( result )
        return result;
      result = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
      if ( result )
        return result;
      result = dword_7A1058 | dword_7A0F94 | dword_7A0FB0 | dword_7A0FCC | dword_7A0FE8 | dword_7A1004 | dword_7A1020 | dword_7A103C | dword_7A1074 | dword_7A1090 | dword_7A10AC | dword_7A10C8 | dword_7A10E4 | dword_7A1100;
      if ( result )
        return result;
      result = CPed::PedIsReadyForConversation((CPed *)PlayerPed, 1);
      if ( result != 1 )
        return result;
      result = (unsigned __int8)CGangWars::bGangWarsActive;
      if ( CGangWars::bGangWarsActive )
        return result;
      v3 = -1;
      v4 = (_DWORD *)CPools::ms_pPedPool;
      while ( 2 )
      {
        result = dword_7A1134 + 1;
        if ( dword_7A1134 + 1 >= v4[2] )
          result = 0;
        dword_7A1134 = result;
        if ( *(char *)(v4[1] + result) < 0 )
          goto LABEL_106;
        v5 = *v4 + 1996 * result;
        if ( !v5 )
          goto LABEL_106;
        result = *(unsigned __int8 *)(v5 + 1096);
        if ( result != 1 )
          goto LABEL_106;
        result = CPed::PedIsReadyForConversation((CPed *)v5, 1);
        v6 = result == 1;
        if ( result == 1 )
        {
          result = *(unsigned __int8 *)(v5 + 1166);
          v6 = result >> 7 == 0;
        }
        if ( !v6 )
          goto LABEL_106;
        result = CEntity::GetIsOnScreen((CEntity *)v5);
        if ( result != 1 )
          goto LABEL_106;
        v7 = *(float **)(v5 + 20);
        v85 = (float32x2_t **)(v5 + 20);
        if ( v7 )
        {
          v8 = v7[4];
          v9 = v7[5];
          v10 = v7[6];
        }
        else
        {
          v11 = *(float *)(v5 + 16);
          v12 = sinf(v11);
          v10 = 0.0;
          v9 = cosf(v11);
          LODWORD(v8) = LODWORD(v12) ^ 0x80000000;
        }
        result = *((_DWORD *)PlayerPed + 5);
        v13 = (float *)(v5 + 4);
        v14 = (float *)(result + 48);
        if ( !result )
          v14 = PlayerPed + 1;
        v15 = *v14;
        v16 = v14[1];
        v17 = v14[2];
        if ( v7 )
          v13 = v7 + 12;
        v18 = *v13;
        v19 = v13[1];
        v20 = v13[2];
        if ( (float)((float)((float)(v8 * (float)(v15 - *v13)) + (float)(v9 * (float)(v16 - v19)))
                   + (float)(v10 * (float)(v17 - v20))) <= 0.0 )
          goto LABEL_106;
        if ( result )
        {
          v21 = *(float *)(result + 16);
          v22 = *(float *)(result + 20);
          v23 = *(float *)(result + 24);
        }
        else
        {
          x = PlayerPed[4];
          v84 = sinf(x);
          v23 = 0.0;
          v22 = cosf(x);
          result = LODWORD(v84) ^ 0x80000000;
          LODWORD(v21) = LODWORD(v84) ^ 0x80000000;
        }
        if ( (float)((float)((float)(v21 * (float)(v18 - v15)) + (float)(v22 * (float)(v19 - v16)))
                   + (float)(v23 * (float)(v20 - v17))) <= 0.0 )
          goto LABEL_106;
        FindPlayerCoors((int)&v86);
        result = (unsigned int)&v87;
        v24.n64_u64[0] = vsub_f32(*(float32x2_t *)(v13 + 1), v87).n64_u64[0];
        v25 = vmul_f32(v24, v24).n64_u64[0];
        if ( sqrtf((float)((float)((float)(*v13 - v86) * (float)(*v13 - v86)) + *(float *)&v25) + *((float *)&v25 + 1)) >= 7.0 )
          goto LABEL_106;
        v26 = *(_DWORD *)(v5 + 1436);
        if ( v26 <= 0x10 && ((1 << v26) & 0x1FE80) != 0 )
        {
          v27 = rand();
          v28 = (int)(float)((float)((float)v27 * 0.000015259) + (float)((float)v27 * 0.000015259)) + 8;
        }
        else
        {
          v28 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 7.0);
        }
        CPedToPlayerConversations::m_Topic = v28;
        result = CAEPedSpeechAudioEntity::WillPedChatAboutTopic((CAEPedSpeechAudioEntity *)(v5 + 664), v28);
        if ( !result )
          goto LABEL_106;
        switch ( CPedToPlayerConversations::m_Topic )
        {
          case 0:
            if ( !dword_7A1130 )
              goto LABEL_105;
            v30 = *(float32x2_t **)(dword_7A1130 + 20);
            v31 = (float32x2_t *)(v5 + 4);
            if ( *v85 )
              v31 = *v85 + 6;
            v32 = v30 + 6;
            if ( !v30 )
              v32 = (float32x2_t *)(dword_7A1130 + 4);
            v33.n64_u64[0] = vsub_f32((float32x2_t)v32->n64_u64[0], (float32x2_t)v31->n64_u64[0]).n64_u64[0];
            v34 = vmul_f32(v33, v33).n64_u64[0];
            if ( sqrtf(*(float *)&v34 + *((float *)&v34 + 1)) >= 20.0 )
              goto LABEL_105;
            v35 = *(char *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(dword_7A1130 + 38)]) + 101);
            if ( v35 > 9 )
              goto LABEL_105;
            v36 = (CPed *)(1 << v35);
            if ( ((unsigned __int8)v36 & 0x72) != 0 )
            {
              if ( !CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v36) )
                goto LABEL_105;
              CPedToPlayerConversations::m_bPositiveOpening = 0;
              CPed::Say((CPed *)v5, 0x30u, 0, 1.0, 1u, 0, 0);
              goto LABEL_175;
            }
            if ( ((unsigned __int16)v36 & 0x20C) != 0
              && *(float *)(dword_7A1130 + 1228) > 800.0
              && CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v36) )
            {
              CPedToPlayerConversations::m_bPositiveOpening = 1;
              v82 = 57;
              goto LABEL_174;
            }
            goto LABEL_105;
          case 1:
            v37 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_40 + 2), (unsigned __int16)v29));
            v38 = (CPed *)(*(_WORD *)(v5 + 36) & 0x1FF);
            v39 = (int)(float)((float)(v37 + (float)(unsigned int)v38) + -256.0);
            if ( v39 > 500 )
            {
              if ( !CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v38) )
                goto LABEL_105;
              CPedToPlayerConversations::m_bPositiveOpening = 1;
              v82 = 58;
              goto LABEL_174;
            }
            if ( v39 <= 149 && CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v38) )
            {
              CPedToPlayerConversations::m_bPositiveOpening = 0;
              CPed::Say((CPed *)v5, 0x31u, 0, 1.0, 1u, 0, 0);
              goto LABEL_175;
            }
            goto LABEL_105;
          case 2:
            v40 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_40 + 2), (unsigned __int16)v29))
                + (float)(*(_WORD *)(v5 + 36) & 0x1FF);
            v41 = FindPlayerPed(-1);
            v42 = (int)(float)(v40 + -256.0);
            if ( CPedClothesDesc::HasVisibleNewHairCut(*(CPedClothesDesc **)(*(_DWORD *)(v41 + 1092) + 4), 0) != 1 )
              goto LABEL_105;
            if ( v42 > 500 )
            {
              if ( !CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v43) )
                goto LABEL_105;
              CPedToPlayerConversations::m_bPositiveOpening = 1;
              v82 = 59;
              goto LABEL_174;
            }
            if ( (v42 < 150
               || COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_1C + 3), (unsigned __int16)v43)) < 5.0)
              && CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v43) )
            {
              CPedToPlayerConversations::m_bPositiveOpening = 0;
              CPed::Say((CPed *)v5, 0x32u, 0, 1.0, 1u, 0, 0);
              goto LABEL_175;
            }
            goto LABEL_105;
          case 3:
            v44 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), (unsigned __int16)v29));
            v45 = (float)*(unsigned __int8 *)(v5 + 36);
            v47 = (float)(COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 1), v46)) + v45) + -128.0;
            v48 = (int)(float)((float)(v44 + v45) + -128.0);
            v49 = (CPed *)(int)v47;
            if ( v48 > 400 && (int)v49 <= 249 )
            {
              if ( !CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v49) )
                goto LABEL_105;
              CPedToPlayerConversations::m_bPositiveOpening = 1;
              v82 = 60;
              goto LABEL_174;
            }
            if ( (int)v49 > 500
              && v48 - (int)v49 <= 199
              && CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v49) )
            {
              CPedToPlayerConversations::m_bPositiveOpening = 0;
              CPed::Say((CPed *)v5, 0x33u, 0, 1.0, 1u, 0, 0);
              goto LABEL_175;
            }
            goto LABEL_105;
          case 4:
            v50 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_40 + 2), (unsigned __int16)v29));
            v51 = (CPed *)(*(_WORD *)(v5 + 36) & 0x3FF);
            v52 = (int)(float)((float)(v50 + (float)(unsigned int)v51) + -512.0);
            if ( v52 > 700 )
            {
              if ( !CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v51) )
                goto LABEL_105;
              CPedToPlayerConversations::m_bPositiveOpening = 1;
              v82 = 61;
              goto LABEL_174;
            }
            if ( v52 < 300 && CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v51) )
            {
              CPedToPlayerConversations::m_bPositiveOpening = 0;
              CPed::Say((CPed *)v5, 0x34u, 0, 1.0, 1u, 0, 0);
              goto LABEL_175;
            }
            goto LABEL_105;
          case 5:
            v53 = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&off_18 + 1), (unsigned __int16)v29));
            v54 = (CPed *)(*(_WORD *)(v5 + 36) & 0x1FF);
            v55 = (int)(float)((float)(v53 + (float)(unsigned int)v54) + -256.0);
            if ( v55 > 700 )
            {
              if ( !CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v54) )
                goto LABEL_105;
              CPedToPlayerConversations::m_bPositiveOpening = 1;
              v82 = 62;
              goto LABEL_174;
            }
            if ( v55 < 300 && CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v54) )
            {
              CPedToPlayerConversations::m_bPositiveOpening = 0;
              CPed::Say((CPed *)v5, 0x35u, 0, 1.0, 1u, 0, 0);
              goto LABEL_175;
            }
            goto LABEL_105;
          case 6:
            v56 = FindPlayerPed(-1);
            if ( CPedClothesDesc::HasVisibleTattoo(*(CPedClothesDesc **)(*(_DWORD *)(v56 + 1092) + 4)) != 1 )
              goto LABEL_105;
            v57 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0);
            if ( v57 > 700 )
            {
              if ( !CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v58) )
                goto LABEL_105;
              CPedToPlayerConversations::m_bPositiveOpening = 1;
              v82 = 63;
              goto LABEL_174;
            }
            if ( v57 < 300 && CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v58) )
            {
              CPedToPlayerConversations::m_bPositiveOpening = 0;
              CPed::Say((CPed *)v5, 0x36u, 0, 1.0, 1u, 0, 0);
              goto LABEL_175;
            }
            goto LABEL_105;
          case 7:
            if ( *(float *)&CWeather::Wind >= 0.1 )
            {
              if ( *(float *)&CWeather::Wind > 0.5
                && CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v29) )
              {
                CPedToPlayerConversations::m_bPositiveOpening = 0;
                CPed::Say((CPed *)v5, 0x37u, 0, 1.0, 1u, 0, 0);
LABEL_175:
                CPedToPlayerConversations::m_pPed = v5;
                CPedToPlayerConversations::m_State = 1;
                CEntity::RegisterReference((CEntity *)v5, (CEntity **)&CPedToPlayerConversations::m_pPed);
                CPedToPlayerConversations::m_TimeOfLastPlayerConversation = CTimer::m_snTimeInMilliseconds;
                CPedToPlayerConversations::m_StartTime = CTimer::m_snTimeInMilliseconds;
                CPed::DisablePedSpeech((CPed *)v5, 0);
                IKChainManager_c::LookAt(
                  (int)&g_ikChainMan,
                  (int)"Ped2Pl_Conversation",
                  (CPed *)v5,
                  (int)PlayerPed,
                  (int)&elf_hash_chain[8526],
                  5,
                  0,
                  0,
                  0.25,
                  500,
                  8,
                  0);
                return IKChainManager_c::LookAt(
                         (int)&g_ikChainMan,
                         (int)"Ped2Pl_ConversationP",
                         (CPed *)PlayerPed,
                         v5,
                         (int)&elf_hash_chain[8526],
                         5,
                         0,
                         0,
                         0.25,
                         500,
                         8,
                         0);
              }
            }
            else if ( (unsigned __int8)(CClock::ms_nGameClockHours - 7) <= 0xCu
                   && CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v29) )
            {
              CPedToPlayerConversations::m_bPositiveOpening = 1;
              v82 = 64;
LABEL_174:
              CPed::Say((CPed *)v5, v82, 0, 1.0, 1u, 0, 0);
              goto LABEL_175;
            }
LABEL_105:
            result = rand() & 0xFFF;
            if ( result != 3 )
            {
LABEL_106:
              if ( ++v3 >= 7 )
                return result;
              continue;
            }
            result = CPed::Say((CPed *)v5, 0x58u, 0, 1.0, 0, 0, 0);
            break;
          case 8:
            if ( !CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v29) )
              goto LABEL_105;
            CPed::Say((CPed *)v5, 0xFBu, 0, 1.0, 1u, 0, 0);
            goto LABEL_172;
          case 9:
            if ( !CAEPedSpeechAudioEntity::RequestPlayerConversation((CAEPedSpeechAudioEntity *)v5, v29) )
              goto LABEL_105;
            CPed::Say((CPed *)v5, 0xFCu, 0, 1.0, 1u, 0, 0);
LABEL_172:
            CPedToPlayerConversations::m_bPositiveOpening = 1;
            goto LABEL_175;
          default:
            goto LABEL_105;
        }
        return result;
      }
    case 1:
      if ( CPedToPlayerConversations::m_pPed )
      {
        if ( CTimer::m_snTimeInMilliseconds > (unsigned int)(CPedToPlayerConversations::m_StartTime + 4000) )
        {
          CPedToPlayerConversations::m_State = 0;
          CAEPedSpeechAudioEntity::ReleasePlayerConversation((CAEPedSpeechAudioEntity *)&CPedToPlayerConversations::m_State);
          CPed::EnablePedSpeech((CPed *)CPedToPlayerConversations::m_pPed);
          if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)PlayerPed) )
            IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, (CPed *)PlayerPed, 250);
          result = IKChainManager_c::IsLooking(
                     (IKChainManager_c *)&g_ikChainMan,
                     (CPed *)CPedToPlayerConversations::m_pPed);
          if ( result )
          {
            IKChainManager_c::AbortLookAt(
              (IKChainManager_c *)&g_ikChainMan,
              (CPed *)CPedToPlayerConversations::m_pPed,
              250);
            result = (unsigned __int8)CPedToPlayerConversations::m_bPositiveOpening;
            if ( CPedToPlayerConversations::m_bPositiveOpening )
              return CPed::Say((CPed *)CPedToPlayerConversations::m_pPed, 0x38u, 0, 1.0, 0, 0, 0);
          }
          return result;
        }
        Pad = (CPad *)CPad::GetPad(0, CTimer::m_snTimeInMilliseconds);
        if ( CPad::ConversationYesJustDown(Pad) == 1 )
        {
          if ( CPedToPlayerConversations::m_bPositiveOpening )
          {
            switch ( CPedToPlayerConversations::m_Topic )
            {
              case 0:
                CPed::Say((CPed *)PlayerPed, 0x81u, 0, 1.0, 1u, 0, 0);
                goto LABEL_162;
              case 1:
                CPed::Say((CPed *)PlayerPed, 0x82u, 0, 1.0, 1u, 0, 0);
                goto LABEL_162;
              case 2:
                CPed::Say((CPed *)PlayerPed, 0x86u, 0, 1.0, 1u, 0, 0);
                goto LABEL_162;
              case 3:
                CPed::Say((CPed *)PlayerPed, 0x89u, 0, 1.0, 1u, 0, 0);
                goto LABEL_162;
              case 4:
                CPed::Say((CPed *)PlayerPed, 0x8Au, 0, 1.0, 1u, 0, 0);
                goto LABEL_162;
              case 5:
                CPed::Say((CPed *)PlayerPed, 0x8Bu, 0, 1.0, 1u, 0, 0);
                goto LABEL_162;
              case 6:
                CPed::Say((CPed *)PlayerPed, 0x8Cu, 0, 1.0, 1u, 0, 0);
                goto LABEL_162;
              case 7:
                CPed::Say((CPed *)PlayerPed, 0xEAu, 0, 1.0, 1u, 0, 0);
                goto LABEL_162;
              case 8:
                CPed::Say((CPed *)PlayerPed, 0xECu, 0, 1.0, 1u, 0, 0);
                v75 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
                if ( v75 <= 74 )
                  goto LABEL_168;
                goto LABEL_169;
              case 9:
                CPed::Say((CPed *)PlayerPed, 0x6Bu, 0, 1.0, 1u, 0, 0);
                v75 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
                if ( v75 <= 74 )
                {
LABEL_168:
                  v77 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v76);
                  CTaskComplexSequence::CTaskComplexSequence(v77);
                  v79 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v78);
                  CTaskSimpleStandStill::CTaskSimpleStandStill(v79, 2000, 0, 0, 8.0);
                  CTaskComplexSequence::AddTask(v77, v79);
                  v81 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v80);
                  CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v81, (CPed *)PlayerPed, -1, 0, 0, 0, 0);
                  CTaskComplexSequence::AddTask(v77, v81);
                  CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)&v86, 3, v77, 0);
                  CEventGroup::Add(
                    (CEventGroup *)(*(_DWORD *)(CPedToPlayerConversations::m_pPed + 1088) + 104),
                    (CEvent *)&v86,
                    0);
                  CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)&v86);
                }
LABEL_169:
                result = CPedToPlayerConversations::EndConversation((CPedToPlayerConversations *)v75);
                break;
              default:
                goto LABEL_162;
            }
            return result;
          }
          v62 = *(_DWORD *)(CPedToPlayerConversations::m_pPed + 1436);
          v63 = v62 == 22;
          if ( v62 != 22 )
            v63 = v62 == 5;
          if ( v63 )
            CPed::Say((CPed *)PlayerPed, 0x83u, 0, 1.0, 1u, 0, 0);
          else
            CPed::Say((CPed *)PlayerPed, 0x84u, 0, 1.0, 1u, 0, 0);
        }
        else
        {
          v61 = (CPad *)CPad::GetPad(0, v60);
          result = CPad::ConversationNoJustDown(v61);
          if ( result != 1 )
            return result;
          if ( CPedToPlayerConversations::m_bPositiveOpening )
          {
            if ( CPedToPlayerConversations::m_Topic == 9 )
            {
              result = CPed::Say((CPed *)PlayerPed, 0x6Au, 0, 1.0, 1u, 0, 0);
            }
            else
            {
              if ( CPedToPlayerConversations::m_Topic != 8 )
              {
                v66 = *(_DWORD *)(CPedToPlayerConversations::m_pPed + 1436);
                v67 = v66 == 22;
                if ( v66 != 22 )
                  v67 = v66 == 5;
                if ( v67 )
                  CPed::Say((CPed *)PlayerPed, 0x83u, 0, 1.0, 1u, 0, 0);
                else
                  CPed::Say((CPed *)PlayerPed, 0x84u, 0, 1.0, 1u, 0, 0);
                v74 = 2;
                goto LABEL_163;
              }
              result = CPed::Say((CPed *)PlayerPed, 0xEBu, 0, 1.0, 1u, 0, 0);
            }
            return CPedToPlayerConversations::EndConversation((CPedToPlayerConversations *)result);
          }
          v64 = *(_DWORD *)(CPedToPlayerConversations::m_pPed + 1436);
          v65 = v64 == 22;
          if ( v64 != 22 )
            v65 = v64 == 5;
          if ( v65 )
            CPed::Say((CPed *)PlayerPed, 0x87u, 0, 1.0, 1u, 0, 0);
          else
            CPed::Say((CPed *)PlayerPed, 0x88u, 0, 1.0, 1u, 0, 0);
          if ( *(_DWORD *)(CPedToPlayerConversations::m_pPed + 1436) != 8
            && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 39 )
          {
            v69 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v68);
            CTaskComplexSequence::CTaskComplexSequence(v69);
            v71 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v70);
            CTaskSimpleStandStill::CTaskSimpleStandStill(v71, 2000, 0, 0, 8.0);
            CTaskComplexSequence::AddTask(v69, v71);
            v73 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v72);
            CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v73, (CPed *)PlayerPed, -1, 0, 0, 0, 0);
            CTaskComplexSequence::AddTask(v69, v73);
            CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)&v86, 3, v69, 0);
            CEventGroup::Add(
              (CEventGroup *)(*(_DWORD *)(CPedToPlayerConversations::m_pPed + 1088) + 104),
              (CEvent *)&v86,
              0);
            CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)&v86);
          }
        }
LABEL_162:
        v74 = 3;
LABEL_163:
        result = CTimer::m_snTimeInMilliseconds;
        CPedToPlayerConversations::m_State = v74;
        CPedToPlayerConversations::m_StartTime = CTimer::m_snTimeInMilliseconds;
        return result;
      }
      CPedToPlayerConversations::m_State = 0;
      CAEPedSpeechAudioEntity::ReleasePlayerConversation((CAEPedSpeechAudioEntity *)&CPedToPlayerConversations::m_State);
      result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)PlayerPed);
      if ( result )
        return sub_1A0F0C((IKChainManager_c *)&g_ikChainMan, (CPed *)PlayerPed, 250);
      return result;
    case 2:
      result = CPedToPlayerConversations::m_pPed;
      if ( CPedToPlayerConversations::m_pPed )
      {
        if ( CTimer::m_snTimeInMilliseconds > (unsigned int)(CPedToPlayerConversations::m_StartTime + 3000) )
        {
          result = CPed::GetPedTalking((CPed *)CPedToPlayerConversations::m_pPed);
          if ( !result )
          {
            CPed::Say((CPed *)CPedToPlayerConversations::m_pPed, 0x85u, 0, 1.0, 1u, 0, 0);
            goto LABEL_162;
          }
        }
        return result;
      }
      CPedToPlayerConversations::m_State = 0;
      CAEPedSpeechAudioEntity::ReleasePlayerConversation((CAEPedSpeechAudioEntity *)&CPedToPlayerConversations::m_State);
      result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)PlayerPed);
      if ( !result )
        return result;
      return sub_1A0F0C((IKChainManager_c *)&g_ikChainMan, (CPed *)PlayerPed, 250);
    case 3:
      result = CPedToPlayerConversations::m_StartTime + 2500;
      if ( CTimer::m_snTimeInMilliseconds > (unsigned int)(CPedToPlayerConversations::m_StartTime + 2500) )
        return CPedToPlayerConversations::EndConversation((CPedToPlayerConversations *)result);
      result = CPedToPlayerConversations::m_pPed;
      if ( !CPedToPlayerConversations::m_pPed )
        return CPedToPlayerConversations::EndConversation((CPedToPlayerConversations *)result);
      return result;
    default:
      return result;
  }
}


// ============================================================

// Address: 0x302d94
// Original: _ZN25CPedToPlayerConversations15EndConversationEv
// Demangled: CPedToPlayerConversations::EndConversation(void)
int *__fastcall CPedToPlayerConversations::EndConversation(CPedToPlayerConversations *this)
{
  CPed *PlayerPed; // r4
  int *result; // r0

  PlayerPed = (CPed *)FindPlayerPed(-1);
  CPedToPlayerConversations::m_State = 0;
  CAEPedSpeechAudioEntity::ReleasePlayerConversation((CAEPedSpeechAudioEntity *)&CPedToPlayerConversations::m_State);
  if ( CPedToPlayerConversations::m_pPed )
    CPed::EnablePedSpeech((CPed *)CPedToPlayerConversations::m_pPed);
  if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, PlayerPed) )
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, PlayerPed, 250);
  result = &CPedToPlayerConversations::m_pPed;
  if ( CPedToPlayerConversations::m_pPed )
  {
    result = (int *)IKChainManager_c::IsLooking(
                      (IKChainManager_c *)&g_ikChainMan,
                      (CPed *)CPedToPlayerConversations::m_pPed);
    if ( result )
      return (int *)sub_1A0F0C((IKChainManager_c *)&g_ikChainMan, (CPed *)CPedToPlayerConversations::m_pPed, 250);
  }
  return result;
}


// ============================================================
