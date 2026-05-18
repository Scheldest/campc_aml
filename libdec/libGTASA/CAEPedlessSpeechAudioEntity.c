
// Address: 0x196800
// Original: j__ZN27CAEPedlessSpeechAudioEntity11AddSayEventEisP7CEntityjfhhh
// Demangled: CAEPedlessSpeechAudioEntity::AddSayEvent(int,short,CEntity *,uint,float,uchar,uchar,uchar)
// attributes: thunk
int __fastcall CAEPedlessSpeechAudioEntity::AddSayEvent(
        CAEPedlessSpeechAudioEntity *this,
        int a2,
        __int16 a3,
        CEntity *a4,
        unsigned int a5,
        float a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  return _ZN27CAEPedlessSpeechAudioEntity11AddSayEventEisP7CEntityjfhhh(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x19ca5c
// Original: j__ZN27CAEPedlessSpeechAudioEntity10InitialiseEv
// Demangled: CAEPedlessSpeechAudioEntity::Initialise(void)
// attributes: thunk
int __fastcall CAEPedlessSpeechAudioEntity::Initialise(CAEPedlessSpeechAudioEntity *this)
{
  return _ZN27CAEPedlessSpeechAudioEntity10InitialiseEv(this);
}


// ============================================================

// Address: 0x1a106c
// Original: j__ZN27CAEPedlessSpeechAudioEntityC2Ev
// Demangled: CAEPedlessSpeechAudioEntity::CAEPedlessSpeechAudioEntity(void)
// attributes: thunk
void __fastcall CAEPedlessSpeechAudioEntity::CAEPedlessSpeechAudioEntity(CAEPedlessSpeechAudioEntity *this)
{
  _ZN27CAEPedlessSpeechAudioEntityC2Ev(this);
}


// ============================================================

// Address: 0x39d73c
// Original: _ZN27CAEPedlessSpeechAudioEntityC2Ev
// Demangled: CAEPedlessSpeechAudioEntity::CAEPedlessSpeechAudioEntity(void)
void __fastcall CAEPedlessSpeechAudioEntity::CAEPedlessSpeechAudioEntity(CAEPedlessSpeechAudioEntity *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 43) = -1027080192;
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 73) = 0;
  *((_BYTE *)this + 144) = 0;
  *((_BYTE *)this + 152) = 0;
  *((_BYTE *)this + 153) = 0;
  *((_BYTE *)this + 154) = 0;
  *((_WORD *)this + 82) = -1;
  *((_WORD *)this + 83) = -1;
  *((_WORD *)this + 84) = -1;
  *((_WORD *)this + 88) = -1;
  *(_DWORD *)this = &off_667830;
}


// ============================================================

// Address: 0x39d788
// Original: _ZN27CAEPedlessSpeechAudioEntity11AddSayEventEisP7CEntityjfhhh
// Demangled: CAEPedlessSpeechAudioEntity::AddSayEvent(int,short,CEntity *,uint,float,uchar,uchar,uchar)
int __fastcall CAEPedlessSpeechAudioEntity::AddSayEvent(
        CAEPedlessSpeechAudioEntity *this,
        float a2,
        int a3,
        CEntity *a4,
        unsigned int a5,
        CAEAudioUtility *a6,
        int a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  bool v11; // zf
  __int16 v14; // r9
  bool v15; // zf
  int v16; // r0
  bool v17; // zf
  bool v18; // zf
  int v19; // r0
  int v20; // r1
  char *v21; // r2
  __int64 *v22; // r1
  float32x2_t v23; // d16
  unsigned __int64 v24; // d1
  unsigned __int16 CanWePlayGlobalSpeechContext; // r8
  int SoundAndBankIDs; // r10
  CEntity *v27; // r0
  _DWORD *v28; // r5
  __int16 v29; // r1
  int v30; // r0
  int v31; // r3
  bool v32; // zf
  unsigned __int16 v33; // r5
  int v34; // r0
  int *v35; // r1
  float v36; // s0
  __int16 v38[15]; // [sp+2h] [bp-1Eh] BYREF

  v11 = a4 == 0;
  if ( a4 )
    v11 = *((_BYTE *)this + 144) == 0;
  v14 = -1;
  if ( !v11 )
  {
    v15 = CAEPedSpeechAudioEntity::s_bAllSpeechDisabled == 0;
    if ( !CAEPedSpeechAudioEntity::s_bAllSpeechDisabled )
      v15 = *((_BYTE *)this + 154) == 0;
    if ( v15 )
    {
      if ( !byte_951FE3 )
        goto LABEL_24;
      v16 = *((unsigned __int16 *)this + 73);
      v17 = v16 == 2;
      if ( v16 != 2 )
        v17 = v16 == 4;
      if ( v17 )
        goto LABEL_24;
      v18 = a3 == 13;
      if ( a3 != 13 )
        v18 = a3 == 116;
      if ( v18 || a3 == 15 )
      {
LABEL_24:
        if ( CGameLogic::GameState != 2 )
        {
          v19 = CAEAudioUtility::ResolveProbability(a6, a2);
          if ( LODWORD(a2) == 52
            && v19
            && (a7 || !*((_BYTE *)this + 153))
            && !*((_BYTE *)this + 152)
            && (unsigned int)(a3 - 173) <= 2 )
          {
            *(_DWORD *)((char *)this + 146) = 655364;
            if ( CStreaming::ms_numModelsRequested < 16 || !CAEVehicleAudioEntity::s_pPlayerAttachedForRadio )
            {
              v20 = *((_DWORD *)a4 + 5);
              v21 = (char *)(v20 + 48);
              if ( !v20 )
                v21 = (char *)a4 + 4;
              v22 = (__int64 *)(dword_951FBC + 48);
              if ( !dword_951FBC )
                v22 = &qword_951FAC;
              v23.n64_u64[0] = vsub_f32(*(float32x2_t *)(v21 + 4), *(float32x2_t *)((char *)v22 + 4)).n64_u64[0];
              v24 = vmul_f32(v23, v23).n64_u64[0];
              if ( (float)((float)((float)((float)(*(float *)v21 - *(float *)v22)
                                         * (float)(*(float *)v21 - *(float *)v22))
                                 + *(float *)&v24)
                         + *((float *)&v24 + 1)) <= 3600.0 )
              {
                CanWePlayGlobalSpeechContext = CAEPedSpeechAudioEntity::CanWePlayGlobalSpeechContext(this, a3);
                if ( CanWePlayGlobalSpeechContext <= 4u )
                {
                  SoundAndBankIDs = CAEPedSpeechAudioEntity::GetSoundAndBankIDs(this, a3, v38);
                  if ( SoundAndBankIDs >= 0 )
                  {
                    v27 = (CEntity *)*((_DWORD *)this + 69);
                    v28 = (_DWORD *)((char *)this + 276);
                    if ( v27 )
                    {
                      CEntity::CleanUpOldReference(v27, (CEntity **)this + 69);
                      *v28 = 0;
                    }
                    *v28 = a4;
                    CEntity::RegisterReference(a4, (CEntity **)this + 69);
                    if ( (unsigned __int16)((unsigned __int16)a3 >> 3) <= 0x2Cu )
                    {
                      v29 = 0;
                      do
                      {
                        v30 = v29;
                        v31 = gSpeechContextLookup[8 * v29];
                        v32 = v31 == 0xFFFF;
                        if ( v31 != 0xFFFF )
                        {
                          ++v29;
                          v32 = v31 == (unsigned __int16)a3;
                        }
                      }
                      while ( !v32 );
                      if ( v31 != 0xFFFF )
                      {
                        v33 = gSpeechContextLookup[8 * v30 + 6];
                        v34 = CTimer::m_snTimeInMilliseconds
                            + (__int16)(CAEAudioUtility::GetRandomNumberInRange(
                                          (CAEAudioUtility *)((char *)&stderr + 1),
                                          1000,
                                          (int)gSpeechContextLookup)
                                      + v33);
                        if ( (unsigned __int16)(a3 - 340) > 0x12u )
                          v35 = &gGlobalSpeechContextNextPlayTime[a3];
                        else
                          v35 = (int *)((char *)this + (((a3 << 16) - 22282240) >> 14) + 180);
                        *v35 = v34;
                      }
                    }
                    v36 = (float)*(char *)(CAEAudioEntity::m_pAudioEventVolumes + 52);
                    *((_BYTE *)this + 155) = a9;
                    *((_BYTE *)this + 156) = a8;
                    *((_WORD *)this + 84) = CanWePlayGlobalSpeechContext;
                    *((_BYTE *)this + 152) = 1;
                    *((_WORD *)this + 88) = a3;
                    *((float *)this + 43) = v36;
                    CAEPedSpeechAudioEntity::LoadAndPlaySpeech(this, a5);
                    return (__int16)SoundAndBankIDs;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v14;
}


// ============================================================

// Address: 0x39d9e8
// Original: _ZN27CAEPedlessSpeechAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEPedlessSpeechAudioEntity::UpdateParameters(CAESound *,short)
void __fastcall CAEPedlessSpeechAudioEntity::UpdateParameters(CAEPedlessSpeechAudioEntity *this, CAESound *a2, int a3)
{
  int v3; // lr
  __int16 *v4; // r1
  bool v5; // zf
  int v6; // r0
  int v7; // r2
  _DWORD *v8; // r3
  _DWORD v9[20]; // [sp+0h] [bp-50h] BYREF

  v9[16] = 0;
  v9[17] = 0;
  if ( a3 == -1 )
  {
    v3 = *((__int16 *)this + 84);
    *((_BYTE *)this + 152) = 0;
    CAEPedSpeechAudioEntity::s_PedSpeechSlots[14 * v3] = 0;
    v4 = &CAEPedSpeechAudioEntity::s_PedSpeechSlots[14 * v3];
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 2) = 0;
    v4[6] = -1;
    v4[7] = -1;
    *((_DWORD *)v4 + 4) = 0;
    v4[10] = -1;
    v4[11] = -1;
    *((_BYTE *)v4 + 26) = 0;
    v4[12] = 0;
    *((_WORD *)this + 82) = -1;
    *((_DWORD *)this + 40) = 0;
    *((_WORD *)this + 83) = -1;
    *((_WORD *)this + 84) = -1;
    *((_BYTE *)this + 156) = 0;
  }
  else
  {
    CAEPedSpeechAudioEntity::s_PedSpeechSlots[14 * *((__int16 *)this + 84)] = 5;
    v5 = *((_BYTE *)this + 155) == 0;
    if ( !*((_BYTE *)this + 155) )
      v5 = *((_DWORD *)a2 + 3) == 52;
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 69);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 20);
        v8 = (_DWORD *)(v7 + 48);
        if ( !v7 )
          v8 = (_DWORD *)(v6 + 4);
        CAESound::SetPosition(a2, *v8, v8[1], v8[2]);
      }
    }
  }
  CMatrix::~CMatrix((CMatrix *)v9);
}


// ============================================================

// Address: 0x39da9c
// Original: _ZN27CAEPedlessSpeechAudioEntity10InitialiseEv
// Demangled: CAEPedlessSpeechAudioEntity::Initialise(void)
_QWORD *__fastcall CAEPedlessSpeechAudioEntity::Initialise(CAEPedlessSpeechAudioEntity *this)
{
  _QWORD *v1; // r1
  _QWORD *result; // r0

  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 43) = -1027080192;
  *((_WORD *)this + 88) = -1;
  *((_DWORD *)this + 38) = 0;
  *((_BYTE *)this + 156) = 0;
  *((_WORD *)this + 75) = 0;
  *((_WORD *)this + 73) = 4;
  *((_BYTE *)this + 144) = 1;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *(_QWORD *)((char *)this + 228) = 0LL;
  *(_QWORD *)((char *)this + 236) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *(_QWORD *)((char *)this + 220) = 0LL;
  v1 = (_QWORD *)((char *)this + 196);
  result = (_QWORD *)((char *)this + 180);
  *v1 = 0LL;
  v1[1] = 0LL;
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x39db00
// Original: _ZN27CAEPedlessSpeechAudioEntity9TerminateEv
// Demangled: CAEPedlessSpeechAudioEntity::Terminate(void)
CEntity *__fastcall CAEPedlessSpeechAudioEntity::Terminate(CAEPedlessSpeechAudioEntity *this)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r1
  CAESound *v5; // r0
  int v6; // r1
  __int16 *v7; // r0
  CEntity *result; // r0
  CEntity **v9; // r4

  v2 = *((unsigned __int8 *)this + 144);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *((_BYTE *)this + 152) == 0;
  if ( !v3 )
  {
    v4 = *((__int16 *)this + 84);
    if ( CAEPedSpeechAudioEntity::s_PedSpeechSlots[14 * v4] == 5 )
    {
      v5 = (CAESound *)*((_DWORD *)this + 40);
      if ( v5 )
      {
        CAESound::StopSoundAndForget(v5);
        LOWORD(v4) = *((_WORD *)this + 84);
      }
      *((_DWORD *)this + 40) = 0;
    }
    v6 = 7 * (__int16)v4;
    CAEPedSpeechAudioEntity::s_PedSpeechSlots[2 * v6] = 0;
    v7 = &CAEPedSpeechAudioEntity::s_PedSpeechSlots[2 * v6];
    *((_DWORD *)v7 + 1) = 0;
    *((_DWORD *)v7 + 2) = 0;
    v7[6] = -1;
    v7[7] = -1;
    *((_DWORD *)v7 + 4) = 0;
    v7[10] = -1;
    v7[11] = -1;
    *((_BYTE *)v7 + 26) = 0;
    v7[12] = 0;
    *((_WORD *)this + 84) = -1;
    *((_BYTE *)this + 152) = 0;
  }
  *((_BYTE *)this + 144) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_WORD *)this + 73) = -1;
  *((_WORD *)this + 74) = -1;
  *((_BYTE *)this + 152) = 0;
  *((_BYTE *)this + 153) = 0;
  *((_BYTE *)this + 154) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_WORD *)this + 82) = -1;
  *((_WORD *)this + 83) = -1;
  *((_WORD *)this + 84) = -1;
  *((_DWORD *)this + 43) = -1027080192;
  result = (CEntity *)*((_DWORD *)this + 69);
  if ( result )
  {
    v9 = (CEntity **)((char *)this + 276);
    result = (CEntity *)CEntity::CleanUpOldReference(result, v9);
    *v9 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x39dbd0
// Original: _ZN27CAEPedlessSpeechAudioEntity17StopCurrentSpeechEv
// Demangled: CAEPedlessSpeechAudioEntity::StopCurrentSpeech(void)
__int16 *__fastcall CAEPedlessSpeechAudioEntity::StopCurrentSpeech(CAEPedlessSpeechAudioEntity *this)
{
  __int16 *result; // r0
  bool v3; // zf
  __int16 v4; // r1
  CAESound *v5; // r0
  int v6; // r1

  result = (__int16 *)*((unsigned __int8 *)this + 144);
  v3 = result == 0;
  if ( result )
  {
    result = (__int16 *)*((unsigned __int8 *)this + 152);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    v4 = *((_WORD *)this + 84);
    if ( CAEPedSpeechAudioEntity::s_PedSpeechSlots[14 * v4] == 5 )
    {
      v5 = (CAESound *)*((_DWORD *)this + 40);
      if ( v5 )
      {
        CAESound::StopSoundAndForget(v5);
        v4 = *((_WORD *)this + 84);
      }
      *((_DWORD *)this + 40) = 0;
    }
    v6 = 7 * v4;
    CAEPedSpeechAudioEntity::s_PedSpeechSlots[2 * v6] = 0;
    result = &CAEPedSpeechAudioEntity::s_PedSpeechSlots[2 * v6];
    *((_DWORD *)result + 1) = 0;
    *((_DWORD *)result + 2) = 0;
    result[6] = -1;
    result[7] = -1;
    *((_DWORD *)result + 4) = 0;
    result[10] = -1;
    result[11] = -1;
    *((_BYTE *)result + 26) = 0;
    result[12] = 0;
    *((_WORD *)this + 84) = -1;
    *((_BYTE *)this + 152) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x39dc50
// Original: _ZN27CAEPedlessSpeechAudioEntity15PlayLoadedSoundEv
// Demangled: CAEPedlessSpeechAudioEntity::PlayLoadedSound(void)
int __fastcall CAEPedlessSpeechAudioEntity::PlayLoadedSound(CAEPedlessSpeechAudioEntity *this)
{
  CEntity **v3; // r6
  __int16 v4; // r0
  int result; // r0
  bool v6; // zf
  int v7; // r1
  CAESound *v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r0
  int v12; // r1
  int v13; // r1
  __int16 *v14; // r1
  int v15; // r1

  if ( *((_DWORD *)this + 69) )
  {
    v3 = (CEntity **)((char *)this + 276);
    if ( *((_BYTE *)this + 155) )
    {
      CAESound::Initialise();
      v4 = 903;
    }
    else
    {
      CAESound::Initialise();
      *((_DWORD *)this + 8) = 1080033280;
      v4 = 134;
    }
    v10 = *((unsigned __int8 *)this + 156);
    *((_WORD *)this + 47) = v4;
    if ( v10 )
      *((_DWORD *)this + 7) = 1077936128;
    if ( *v3 )
    {
      CAESound::RegisterWithPhysicalEntity((CEntity **)this + 2, *v3);
      CEntity::CleanUpOldReference(*v3, (CEntity **)this + 69);
      *v3 = 0;
    }
    v11 = CAESoundManager::RequestNewSound(
            (CAESoundManager *)&AESoundManager,
            (CAEPedlessSpeechAudioEntity *)((char *)this + 8));
    v12 = *((__int16 *)this + 84);
    *((_DWORD *)this + 40) = v11;
    if ( v11 )
    {
      *(_DWORD *)&CAEPedSpeechAudioEntity::s_PedSpeechSlots[14 * v12 + 4] = v11;
      result = 7 * *((__int16 *)this + 84);
      CAEPedSpeechAudioEntity::s_PedSpeechSlots[14 * *((__int16 *)this + 84)] = 5;
    }
    else
    {
      v13 = 7 * v12;
      result = 0;
      CAEPedSpeechAudioEntity::s_PedSpeechSlots[2 * v13] = 0;
      v14 = &CAEPedSpeechAudioEntity::s_PedSpeechSlots[2 * v13];
      *((_DWORD *)v14 + 1) = 0;
      *((_DWORD *)v14 + 2) = 0;
      v14[6] = -1;
      v14[7] = -1;
      *((_DWORD *)v14 + 4) = 0;
      v14[10] = -1;
      v14[11] = -1;
      *((_BYTE *)v14 + 26) = 0;
      v14[12] = 0;
      v15 = *((unsigned __int16 *)this + 73);
      *((_BYTE *)this + 152) = 0;
      if ( v15 == 2 )
        CAEPedSpeechAudioEntity::s_bAPlayerSpeaking = 0;
      *((_WORD *)this + 84) = -1;
    }
  }
  else
  {
    result = *((unsigned __int8 *)this + 144);
    v6 = result == 0;
    if ( *((_BYTE *)this + 144) )
    {
      result = *((unsigned __int8 *)this + 152);
      v6 = result == 0;
    }
    if ( !v6 )
    {
      v7 = *((__int16 *)this + 84);
      if ( CAEPedSpeechAudioEntity::s_PedSpeechSlots[14 * v7] == 5 )
      {
        v8 = (CAESound *)*((_DWORD *)this + 40);
        if ( v8 )
        {
          CAESound::StopSoundAndForget(v8);
          LOWORD(v7) = *((_WORD *)this + 84);
        }
        *((_DWORD *)this + 40) = 0;
      }
      v9 = 7 * (__int16)v7;
      CAEPedSpeechAudioEntity::s_PedSpeechSlots[2 * v9] = 0;
      result = (int)&CAEPedSpeechAudioEntity::s_PedSpeechSlots[2 * v9];
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 8) = 0;
      *(_WORD *)(result + 12) = -1;
      *(_WORD *)(result + 14) = -1;
      *(_DWORD *)(result + 16) = 0;
      *(_WORD *)(result + 20) = -1;
      *(_WORD *)(result + 22) = -1;
      *(_BYTE *)(result + 26) = 0;
      *(_WORD *)(result + 24) = 0;
      *((_WORD *)this + 84) = -1;
      *((_BYTE *)this + 152) = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x39de48
// Original: _ZN27CAEPedlessSpeechAudioEntity17AddScriptSayEventEiihhh
// Demangled: CAEPedlessSpeechAudioEntity::AddScriptSayEvent(int,int,uchar,uchar,uchar)
void __fastcall CAEPedlessSpeechAudioEntity::AddScriptSayEvent(
        CAEPedlessSpeechAudioEntity *this,
        int a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  ;
}


// ============================================================

// Address: 0x39de4a
// Original: _ZN27CAEPedlessSpeechAudioEntity17GetAllocatedVoiceEv
// Demangled: CAEPedlessSpeechAudioEntity::GetAllocatedVoice(void)
int __fastcall CAEPedlessSpeechAudioEntity::GetAllocatedVoice(CAEPedlessSpeechAudioEntity *this)
{
  return -1;
}


// ============================================================

// Address: 0x39de50
// Original: _ZN27CAEPedlessSpeechAudioEntity21WillPedChatAboutTopicEs
// Demangled: CAEPedlessSpeechAudioEntity::WillPedChatAboutTopic(short)
int __fastcall CAEPedlessSpeechAudioEntity::WillPedChatAboutTopic(CAEPedlessSpeechAudioEntity *this, __int16 a2)
{
  return 0;
}


// ============================================================

// Address: 0x39de54
// Original: _ZN27CAEPedlessSpeechAudioEntity10GetPedTypeEv
// Demangled: CAEPedlessSpeechAudioEntity::GetPedType(void)
int __fastcall CAEPedlessSpeechAudioEntity::GetPedType(CAEPedlessSpeechAudioEntity *this)
{
  return -1;
}


// ============================================================

// Address: 0x39de5a
// Original: _ZN27CAEPedlessSpeechAudioEntity19IsPedFemaleForAudioEv
// Demangled: CAEPedlessSpeechAudioEntity::IsPedFemaleForAudio(void)
int __fastcall CAEPedlessSpeechAudioEntity::IsPedFemaleForAudio(CAEPedlessSpeechAudioEntity *this)
{
  return 0;
}


// ============================================================
