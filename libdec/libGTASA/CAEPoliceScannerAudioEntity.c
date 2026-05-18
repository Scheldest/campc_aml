
// Address: 0x189efc
// Original: j__ZN27CAEPoliceScannerAudioEntityD2Ev
// Demangled: CAEPoliceScannerAudioEntity::~CAEPoliceScannerAudioEntity()
// attributes: thunk
void __fastcall CAEPoliceScannerAudioEntity::~CAEPoliceScannerAudioEntity(CAEPoliceScannerAudioEntity *this)
{
  _ZN27CAEPoliceScannerAudioEntityD2Ev(this);
}


// ============================================================

// Address: 0x18d974
// Original: j__ZN27CAEPoliceScannerAudioEntity25PlayPoliceScannerDialogueEP12tScannerSlotS1_
// Demangled: CAEPoliceScannerAudioEntity::PlayPoliceScannerDialogue(tScannerSlot *,tScannerSlot *)
// attributes: thunk
int CAEPoliceScannerAudioEntity::PlayPoliceScannerDialogue()
{
  return _ZN27CAEPoliceScannerAudioEntity25PlayPoliceScannerDialogueEP12tScannerSlotS1_();
}


// ============================================================

// Address: 0x193710
// Original: j__ZN27CAEPoliceScannerAudioEntity5ResetEv
// Demangled: CAEPoliceScannerAudioEntity::Reset(void)
// attributes: thunk
int __fastcall CAEPoliceScannerAudioEntity::Reset(CAEPoliceScannerAudioEntity *this)
{
  return _ZN27CAEPoliceScannerAudioEntity5ResetEv(this);
}


// ============================================================

// Address: 0x1948fc
// Original: j__ZN27CAEPoliceScannerAudioEntity11StopScannerEh
// Demangled: CAEPoliceScannerAudioEntity::StopScanner(uchar)
// attributes: thunk
int __fastcall CAEPoliceScannerAudioEntity::StopScanner(CAEPoliceScannerAudioEntity *this, unsigned __int8 a2)
{
  return _ZN27CAEPoliceScannerAudioEntity11StopScannerEh(this, a2);
}


// ============================================================

// Address: 0x195a80
// Original: j__ZN27CAEPoliceScannerAudioEntity14DisableScannerEhh
// Demangled: CAEPoliceScannerAudioEntity::DisableScanner(uchar,uchar)
// attributes: thunk
int __fastcall CAEPoliceScannerAudioEntity::DisableScanner(
        CAEPoliceScannerAudioEntity *this,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  return _ZN27CAEPoliceScannerAudioEntity14DisableScannerEhh(this, a2, a3);
}


// ============================================================

// Address: 0x196b60
// Original: j__ZN27CAEPoliceScannerAudioEntity7ServiceEv
// Demangled: CAEPoliceScannerAudioEntity::Service(void)
// attributes: thunk
int __fastcall CAEPoliceScannerAudioEntity::Service(CAEPoliceScannerAudioEntity *this)
{
  return _ZN27CAEPoliceScannerAudioEntity7ServiceEv(this);
}


// ============================================================

// Address: 0x196eb4
// Original: j__ZN27CAEPoliceScannerAudioEntity13EnableScannerEv
// Demangled: CAEPoliceScannerAudioEntity::EnableScanner(void)
// attributes: thunk
int __fastcall CAEPoliceScannerAudioEntity::EnableScanner(CAEPoliceScannerAudioEntity *this)
{
  return _ZN27CAEPoliceScannerAudioEntity13EnableScannerEv(this);
}


// ============================================================

// Address: 0x19ca7c
// Original: j__ZN27CAEPoliceScannerAudioEntity13AddAudioEventEi10eCrimeTypeRK7CVector
// Demangled: CAEPoliceScannerAudioEntity::AddAudioEvent(int,eCrimeType,CVector const&)
// attributes: thunk
int CAEPoliceScannerAudioEntity::AddAudioEvent(void)
{
  return _ZN27CAEPoliceScannerAudioEntity13AddAudioEventEi10eCrimeTypeRK7CVector();
}


// ============================================================

// Address: 0x39df48
// Original: _ZN27CAEPoliceScannerAudioEntityD2Ev
// Demangled: CAEPoliceScannerAudioEntity::~CAEPoliceScannerAudioEntity()
void __fastcall CAEPoliceScannerAudioEntity::~CAEPoliceScannerAudioEntity(CEntity **this)
{
  *this = (CEntity *)&off_667858;
  if ( (CEntity **)CAEPoliceScannerAudioEntity::s_pPSControlling == this
    && CAEPoliceScannerAudioEntity::s_nScannerPlaybackState )
  {
    CAEPoliceScannerAudioEntity::s_bStoppingScanner = 1;
    if ( CAEPoliceScannerAudioEntity::s_pSound )
    {
      CAESound::StopSoundAndForget((CAESound *)CAEPoliceScannerAudioEntity::s_pSound);
      CAEPoliceScannerAudioEntity::s_pSound = 0;
    }
    CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
    dword_944EF0 = -1;
    dword_944EEC = -1;
    dword_944EE8 = -1;
    dword_944EE4 = -1;
    CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
    CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
    dword_944F04 = -1;
    dword_944F00 = -1;
    dword_944EFC = -1;
    dword_944EF8 = -1;
    CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
    CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
    word_944F0A = 1;
    CAEPoliceScannerAudioEntity::s_SlotState = 1;
    word_944F0C = 1;
    word_944F0E = 1;
    CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
    CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
    CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
    word_944F10 = 1;
    CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
  }
  *this = (CEntity *)&off_6677A8;
  CAESound::~CAESound(this + 2);
}


// ============================================================

// Address: 0x39e0ac
// Original: _ZN27CAEPoliceScannerAudioEntity11StopScannerEh
// Demangled: CAEPoliceScannerAudioEntity::StopScanner(uchar)
__int16 *__fastcall CAEPoliceScannerAudioEntity::StopScanner(__int16 *this, unsigned __int8 a2)
{
  if ( CAEPoliceScannerAudioEntity::s_nScannerPlaybackState )
  {
    CAEPoliceScannerAudioEntity::s_bStoppingScanner = 1;
    if ( this )
    {
      if ( CAEPoliceScannerAudioEntity::s_pSound )
      {
        CAESound::StopSoundAndForget((CAESound *)CAEPoliceScannerAudioEntity::s_pSound);
        CAEPoliceScannerAudioEntity::s_pSound = 0;
      }
      CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
      dword_944EF0 = -1;
      dword_944EEC = -1;
      dword_944EE8 = -1;
      dword_944EE4 = -1;
      CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
      CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
      this = &CAEPoliceScannerAudioEntity::s_SlotState;
      dword_944F04 = -1;
      dword_944F00 = -1;
      dword_944EFC = -1;
      dword_944EF8 = -1;
      CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
      CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
      CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
      CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
      CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
      CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
      word_944F0A = 1;
      CAEPoliceScannerAudioEntity::s_SlotState = 1;
      word_944F0C = 1;
      word_944F0E = 1;
      word_944F10 = 1;
    }
  }
  return this;
}


// ============================================================

// Address: 0x39e1c4
// Original: _ZN27CAEPoliceScannerAudioEntity5ResetEv
// Demangled: CAEPoliceScannerAudioEntity::Reset(void)
__int16 *__fastcall CAEPoliceScannerAudioEntity::Reset(CAEPoliceScannerAudioEntity *this)
{
  __int16 *result; // r0

  if ( CAEPoliceScannerAudioEntity::s_nScannerPlaybackState )
  {
    CAEPoliceScannerAudioEntity::s_bStoppingScanner = 1;
    if ( CAEPoliceScannerAudioEntity::s_pSound )
    {
      CAESound::StopSoundAndForget((CAESound *)CAEPoliceScannerAudioEntity::s_pSound);
      CAEPoliceScannerAudioEntity::s_pSound = 0;
    }
    CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
    dword_944EF0 = -1;
    dword_944EEC = -1;
    dword_944EE8 = -1;
    dword_944EE4 = -1;
    CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
    CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
    dword_944F04 = -1;
    dword_944F00 = -1;
    dword_944EFC = -1;
    dword_944EF8 = -1;
    CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
    word_944F0A = 1;
    CAEPoliceScannerAudioEntity::s_SlotState = 1;
    word_944F0C = 1;
    word_944F0E = 1;
    CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
    CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
    CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
    word_944F10 = 1;
    CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
    CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
  }
  CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
  dword_944EF0 = -1;
  dword_944EEC = -1;
  dword_944EE8 = -1;
  dword_944EE4 = -1;
  CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
  result = &CAEPoliceScannerAudioEntity::s_SlotState;
  CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
  dword_944F04 = -1;
  dword_944F00 = -1;
  dword_944EFC = -1;
  dword_944EF8 = -1;
  CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
  CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
  CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
  CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
  CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
  CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
  word_944F0A = 1;
  CAEPoliceScannerAudioEntity::s_SlotState = 1;
  word_944F0C = 1;
  word_944F0E = 1;
  word_944F10 = 1;
  return result;
}


// ============================================================

// Address: 0x39e3a4
// Original: _ZN27CAEPoliceScannerAudioEntity30FinishedPlayingScannerDialogueEv
// Demangled: CAEPoliceScannerAudioEntity::FinishedPlayingScannerDialogue(void)
__int16 *__fastcall CAEPoliceScannerAudioEntity::FinishedPlayingScannerDialogue(CAEPoliceScannerAudioEntity *this)
{
  __int16 *result; // r0

  CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
  dword_944EF0 = -1;
  dword_944EEC = -1;
  dword_944EE8 = -1;
  dword_944EE4 = -1;
  CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
  CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
  result = &CAEPoliceScannerAudioEntity::s_SlotState;
  dword_944F04 = -1;
  dword_944F00 = -1;
  dword_944EFC = -1;
  dword_944EF8 = -1;
  CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
  CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
  CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
  CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
  CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
  CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
  word_944F0A = 1;
  CAEPoliceScannerAudioEntity::s_SlotState = 1;
  word_944F0C = 1;
  word_944F0E = 1;
  word_944F10 = 1;
  return result;
}


// ============================================================

// Address: 0x39e474
// Original: _ZN27CAEPoliceScannerAudioEntity13AddAudioEventEi10eCrimeTypeRK7CVector
// Demangled: CAEPoliceScannerAudioEntity::AddAudioEvent(int,eCrimeType,CVector const&)
int *__fastcall CAEPoliceScannerAudioEntity::AddAudioEvent(int a1, int a2, int a3, float *a4)
{
  int *result; // r0
  int RandomNumberInRange; // r0
  __int16 v9; // r1
  int v10; // r3
  const char *i; // r2
  int v12; // r1
  int v14; // r3
  int v15; // r2
  float v16; // s2
  float v17; // s12
  float v18; // s4
  float v19; // s6
  float v20; // s0
  float v21; // s8
  float v22; // s2
  __int16 v23; // r0
  int v24; // r0
  int v25; // r0
  int PlayerPed; // r5
  int v27; // r0
  char *v28; // r5
  int v29; // r6
  int v30; // [sp+10h] [bp-38h] BYREF
  __int64 v31; // [sp+18h] [bp-30h]
  __int64 v32; // [sp+20h] [bp-28h]
  int v33; // [sp+28h] [bp-20h]

  v31 = unk_613E88;
  v32 = unk_613E90;
  result = &v30;
  v33 = -1;
  v30 = -1;
  if ( a2 == 164 )
  {
    result = (int *)(a3 - 2);
    if ( (unsigned int)(a3 - 2) <= 0x14 )
    {
      LOWORD(v31) = 150;
      RandomNumberInRange = CAEAudioUtility::GetRandomNumberInRange(0, 2, -1);
      v9 = word_613EA2[a3];
      LOWORD(RandomNumberInRange) = word_613E9C[RandomNumberInRange];
      WORD2(v31) = 151;
      WORD1(v31) = RandomNumberInRange;
      HIWORD(v31) = v9;
      result = (int *)CTheZones::FindSmallestZoneForPosition(
                        (CTheZones *)a4,
                        (const CVector *)((char *)&stderr + 1),
                        0x97u);
      if ( result )
      {
        v10 = 0;
        for ( i = "ALDEA"; ; i += 8 )
        {
          if ( *(_QWORD *)i == *((_QWORD *)result + 1) )
          {
            v12 = word_6144E0[v10];
            if ( v12 >= 0 )
              break;
          }
          if ( v10++ >= 193 )
            return result;
        }
        if ( !byte_614664[v10] )
          goto LABEL_23;
        v14 = *((__int16 *)result + 9);
        v15 = *((__int16 *)result + 8);
        v16 = (float)(*((__int16 *)result + 12) - v14);
        v17 = (float)(*((__int16 *)result + 11) - v15);
        v18 = v16 * 0.25;
        v19 = (float)(v16 * 0.5) + (float)v14;
        v20 = v17 * 0.25;
        v21 = a4[1];
        v22 = (float)(v17 * 0.5) + (float)v15;
        if ( v21 <= (float)(v18 + v19) )
        {
          if ( v21 >= (float)(v19 - v18) )
          {
            v24 = 0;
            goto LABEL_16;
          }
          v23 = 3;
        }
        else
        {
          v23 = 2;
        }
        WORD1(v32) = v23;
        LOWORD(v32) = 149;
        v24 = 1;
LABEL_16:
        if ( *a4 <= (float)(v20 + v22) )
        {
          if ( *a4 >= (float)(v22 - v20) )
          {
            if ( v24 )
              goto LABEL_23;
            v25 = 149;
          }
          else
          {
            v25 = 262293;
          }
        }
        else
        {
          v25 = 65685;
        }
        HIDWORD(v32) = v25;
LABEL_23:
        HIWORD(v33) = v12;
        LOWORD(v33) = 147;
        PlayerPed = 0;
        if ( FindPlayerWanted(0) + 540 == a1 )
          PlayerPed = FindPlayerPed(0);
        if ( FindPlayerWanted(1) + 540 == a1 )
          PlayerPed = FindPlayerPed(1);
        if ( !PlayerPed )
          return (int *)CAEPoliceScannerAudioEntity::PlayPoliceScannerDialogue();
        if ( *(unsigned __int8 *)(PlayerPed + 1157) << 31 )
        {
          v28 = *(char **)(PlayerPed + 1424);
          if ( v28 )
          {
            v29 = v28[472];
            if ( (unsigned __int8)v29 <= 0x2Du && (unsigned __int8)v29 != 5 )
            {
              if ( *((_BYTE *)dword_39E728 + v29) )
                CVehicle::GetRemapIndex((CVehicle *)v28);
              LOWORD(v30) = 152;
              HIWORD(v30) = word_614726[v29];
            }
          }
          return (int *)CAEPoliceScannerAudioEntity::PlayPoliceScannerDialogue();
        }
        if ( CPedIntelligence::GetTaskSwim(*(CPedIntelligence **)(PlayerPed + 1088)) )
        {
          v27 = 131222;
        }
        else
        {
          if ( CPedIntelligence::GetTaskJetPack(*(CPedIntelligence **)(PlayerPed + 1088)) )
            return (int *)CAEPoliceScannerAudioEntity::PlayPoliceScannerDialogue();
          v27 = 262294;
        }
        v30 = v27;
        return (int *)CAEPoliceScannerAudioEntity::PlayPoliceScannerDialogue();
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x39e760
// Original: _ZN27CAEPoliceScannerAudioEntity25PlayPoliceScannerDialogueEP12tScannerSlotS1_
// Demangled: CAEPoliceScannerAudioEntity::PlayPoliceScannerDialogue(tScannerSlot *,tScannerSlot *)
int __fastcall CAEPoliceScannerAudioEntity::PlayPoliceScannerDialogue(int result, int *a2, int *a3)
{
  unsigned int v3; // r9
  unsigned int v4; // r8
  unsigned int v5; // lr
  unsigned int v6; // r1
  unsigned int v7; // r4
  unsigned int v8; // r4
  unsigned int v9; // r4
  unsigned int v10; // r4
  unsigned int v11; // r1

  if ( !CAEPoliceScannerAudioEntity::s_nScannerPlaybackState
    && !(((unsigned __int8)CAEPoliceScannerAudioEntity::s_bScannerDisabled | (unsigned __int8)byte_951FE3) << 24)
    && CTimer::m_snTimeInMilliseconds >= (unsigned int)CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime )
  {
    CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = *a2;
    CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = *a3;
    v3 = a2[1];
    dword_944EE4 = v3;
    dword_944EF8 = a3[1];
    v4 = a2[2];
    dword_944EE8 = v4;
    dword_944EFC = a3[2];
    v5 = a2[3];
    dword_944EEC = v5;
    dword_944F00 = a3[3];
    v6 = a2[4];
    dword_944EF0 = v6;
    dword_944F04 = a3[4];
    CAEPoliceScannerAudioEntity::s_nSectionPlaying = 0;
    CAEPoliceScannerAudioEntity::s_pPSControlling = result;
    v7 = (unsigned int)CAEPoliceScannerAudioEntity::s_ScannerSlotFirst >> 31;
    CAEPoliceScannerAudioEntity::s_pCurrentSlots = (int)&CAEPoliceScannerAudioEntity::s_ScannerSlotFirst;
    if ( (CAEPoliceScannerAudioEntity::s_ScannerSlotFirst & 0x8000u) != 0 )
      LOWORD(v7) = 1;
    CAEPoliceScannerAudioEntity::s_SlotState = v7;
    v8 = v3 >> 31;
    if ( (v3 & 0x8000u) != 0 )
      LOWORD(v8) = 1;
    word_944F0A = v8;
    v9 = v4 >> 31;
    if ( (v4 & 0x8000u) != 0 )
      LOWORD(v9) = 1;
    word_944F0C = v9;
    v10 = v5 >> 31;
    if ( (v5 & 0x8000u) != 0 )
      LOWORD(v10) = 1;
    CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 2;
    CAEPoliceScannerAudioEntity::s_nPlaybackStartTime = CTimer::m_snTimeInMilliseconds + 2000;
    CAEPoliceScannerAudioEntity::s_nAbortPlaybackTime = CTimer::m_snTimeInMilliseconds + 5000;
    result = (__int16)v6;
    v11 = v6 >> 31;
    word_944F0E = v10;
    if ( result < 0 )
      LOWORD(v11) = 1;
    word_944F10 = v11;
  }
  return result;
}


// ============================================================

// Address: 0x39e8b0
// Original: _ZN27CAEPoliceScannerAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEPoliceScannerAudioEntity::UpdateParameters(CAESound *,short)
int __fastcall CAEPoliceScannerAudioEntity::UpdateParameters(CAEPoliceScannerAudioEntity *this, CAESound *a2, int a3)
{
  int result; // r0

  if ( a3 == -1 )
  {
    CAEPoliceScannerAudioEntity::s_pSound = 0;
    if ( !CAEPoliceScannerAudioEntity::s_bStoppingScanner )
      return CAEPoliceScannerAudioEntity::PlayLoadedDialogue(this);
    result = (unsigned __int16)CAEPoliceScannerAudioEntity::s_nScannerPlaybackState;
    if ( CAEPoliceScannerAudioEntity::s_nScannerPlaybackState )
    {
      CAEPoliceScannerAudioEntity::s_bStoppingScanner = 1;
      CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
      result = (int)&CAEPoliceScannerAudioEntity::s_SlotState;
      dword_944EF0 = -1;
      dword_944EEC = -1;
      dword_944EE8 = -1;
      dword_944EE4 = -1;
      CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
      CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
      word_944F0A = 1;
      CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
      CAEPoliceScannerAudioEntity::s_SlotState = 1;
      word_944F0C = 1;
      word_944F0E = 1;
      CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
      CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
      word_944F10 = 1;
      CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
      dword_944F04 = -1;
      dword_944F00 = -1;
      dword_944EFC = -1;
      dword_944EF8 = -1;
      CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
      CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
    }
  }
  else
  {
    result = (unsigned __int8)CAEPoliceScannerAudioEntity::s_bStoppingScanner;
    if ( CAEPoliceScannerAudioEntity::s_bStoppingScanner )
    {
      *((float *)a2 + 5) = *((float *)a2 + 5) + -6.0;
      return result;
    }
    result = *((__int16 *)a2 + 56);
    if ( result >= 1 )
    {
      result -= 40;
      if ( result < a3 )
      {
        result = *(unsigned __int16 *)a2;
        if ( result != 37 )
        {
          CAESound::SetIndividualEnvironment(a2, 4u, 0);
          CAEPoliceScannerAudioEntity::s_pSound = 0;
          return CAEPoliceScannerAudioEntity::PlayLoadedDialogue(this);
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x39ea10
// Original: _ZN27CAEPoliceScannerAudioEntity18PlayLoadedDialogueEv
// Demangled: CAEPoliceScannerAudioEntity::PlayLoadedDialogue(void)
void __fastcall CAEPoliceScannerAudioEntity::PlayLoadedDialogue(CAEPoliceScannerAudioEntity *this)
{
  __int16 v1; // r6
  int v2; // r5
  __int16 v3; // r0
  int v4; // r2
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  CEntity *v9[21]; // [sp+2Ch] [bp-8Ch] BYREF
  __int16 v10; // [sp+82h] [bp-36h]

  v1 = 0;
  v9[2] = 0;
  if ( CAEPoliceScannerAudioEntity::s_SlotState[0] != 5 )
  {
    if ( word_944F0A == 5 )
    {
      v1 = 1;
    }
    else if ( word_944F0C == 5 )
    {
      v1 = 2;
    }
    else if ( word_944F0E == 5 )
    {
      v1 = 3;
    }
    else
    {
      v1 = 0;
      if ( word_944F10 == 5 )
        v1 = 4;
    }
  }
  v2 = (unsigned __int16)v1;
  while ( CAEPoliceScannerAudioEntity::s_SlotState[v2] != 3 )
  {
    v2 = ++v1;
    if ( v1 >= 5 )
    {
      CAudioEngine::ReportFrontendAudioEvent(
        (CAudioEngine *)&AudioEngine,
        49,
        *(float *)&CAEPoliceScannerAudioEntity::s_fVolumeOffset + 0.0,
        1.0);
      CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
      if ( CAEPoliceScannerAudioEntity::s_nSectionPlaying )
      {
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
        dword_944EF0 = -1;
        dword_944EEC = -1;
        dword_944EE8 = -1;
        dword_944EE4 = -1;
        CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
        CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
        dword_944F04 = -1;
        dword_944F00 = -1;
        dword_944EFC = -1;
        dword_944EF8 = -1;
        CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
        CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
        CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
        CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
        CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
        CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
        word_944F0A = 1;
        CAEPoliceScannerAudioEntity::s_SlotState[0] = 1;
        word_944F0C = 1;
        word_944F0E = 1;
        word_944F10 = 1;
        goto LABEL_29;
      }
      CAEPoliceScannerAudioEntity::s_nPlaybackStartTime = 0;
      CAEPoliceScannerAudioEntity::s_nSectionPlaying = 1;
      CAEPoliceScannerAudioEntity::s_pCurrentSlots = (int)&CAEPoliceScannerAudioEntity::s_ScannerSlotSecond;
      v4 = HIWORD(dword_944F04) >> 15;
      if ( (dword_944F04 & 0x8000u) != 0 )
        LOWORD(v4) = 1;
      word_944F10 = v4;
      v5 = HIWORD(CAEPoliceScannerAudioEntity::s_ScannerSlotSecond) >> 15;
      if ( (CAEPoliceScannerAudioEntity::s_ScannerSlotSecond & 0x8000u) != 0 )
        LOWORD(v5) = 1;
      CAEPoliceScannerAudioEntity::s_SlotState[0] = v5;
      v6 = HIWORD(dword_944EF8) >> 15;
      if ( (dword_944EF8 & 0x8000u) != 0 )
        LOWORD(v6) = 1;
      word_944F0A = v6;
      v7 = HIWORD(dword_944EFC) >> 15;
      if ( (dword_944EFC & 0x8000u) != 0 )
        LOWORD(v7) = 1;
      word_944F0C = v7;
      v8 = HIWORD(dword_944F00) >> 15;
      if ( (dword_944F00 & 0x8000u) != 0 )
        LOWORD(v8) = 1;
      word_944F0E = v8;
      CAEPoliceScannerAudioEntity::s_nAbortPlaybackTime = CTimer::m_snTimeInMilliseconds + 5000;
      v3 = 2;
      goto LABEL_28;
    }
  }
  CAESound::Initialise();
  v9[3] = (CEntity *)&dword_A4;
  v10 = 263;
  *(float *)&v9[4] = (float)v1;
  CAEPoliceScannerAudioEntity::s_pSound = CAESoundManager::RequestNewSound(
                                            (CAESoundManager *)&AESoundManager,
                                            (CAESound *)v9);
  if ( !CAEPoliceScannerAudioEntity::s_pSound )
    goto LABEL_29;
  CAEPoliceScannerAudioEntity::s_SlotState[v2] = 5;
  v3 = 7;
LABEL_28:
  CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = v3;
LABEL_29:
  CAESound::~CAESound(v9);
}


// ============================================================

// Address: 0x39ed50
// Original: _ZN27CAEPoliceScannerAudioEntity7ServiceEv
// Demangled: CAEPoliceScannerAudioEntity::Service(void)
void __fastcall CAEPoliceScannerAudioEntity::Service(CAEPoliceScannerAudioEntity *this)
{
  bool v1; // zf
  float v2; // s0

  v1 = byte_951FE3 == 0;
  if ( byte_951FE3 )
    v1 = CAEPoliceScannerAudioEntity::s_nScannerPlaybackState == 0;
  if ( !v1 )
    CAEPoliceScannerAudioEntity::s_bStoppingScanner = 1;
  switch ( CAEPoliceScannerAudioEntity::s_nScannerPlaybackState )
  {
    case 5:
      if ( CAEPoliceScannerAudioEntity::s_bStoppingScanner )
        goto LABEL_15;
      if ( CTimer::m_snTimeInMilliseconds >= (unsigned int)CAEPoliceScannerAudioEntity::s_nPlaybackStartTime
        && CAEPoliceScannerAudioEntity::s_pPSControlling )
      {
        CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 7;
        CAEPoliceScannerAudioEntity::PlayLoadedDialogue((CAEPoliceScannerAudioEntity *)CAEPoliceScannerAudioEntity::s_pPSControlling);
      }
      break;
    case 4:
      if ( CAEPoliceScannerAudioEntity::s_bStoppingScanner )
        goto LABEL_15;
      if ( CTimer::m_snTimeInMilliseconds >= (unsigned int)CAEPoliceScannerAudioEntity::s_nPlaybackStartTime )
      {
        v2 = -8.0;
        if ( CAEVehicleAudioEntity::s_pPlayerAttachedForRadio )
          v2 = 0.0;
        CAEPoliceScannerAudioEntity::s_fVolumeOffset = LODWORD(v2);
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 49, v2 + 0.0, 1.0);
        CAudioEngine::ReportFrontendAudioEvent(
          (CAudioEngine *)&AudioEngine,
          47,
          *(float *)&CAEPoliceScannerAudioEntity::s_fVolumeOffset + -6.0,
          1.0);
        CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 5;
        CAEPoliceScannerAudioEntity::s_nPlaybackStartTime = CTimer::m_snTimeInMilliseconds + 300;
      }
      break;
    case 2:
      if ( CTimer::m_snTimeInMilliseconds > (unsigned int)CAEPoliceScannerAudioEntity::s_nAbortPlaybackTime )
      {
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
        dword_944EF0 = -1;
        dword_944EEC = -1;
        dword_944EE8 = -1;
        dword_944EE4 = -1;
        CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
        CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
        dword_944F04 = -1;
        dword_944F00 = -1;
        dword_944EFC = -1;
        dword_944EF8 = -1;
        CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
        CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
        CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
        CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
        CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
        CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
LABEL_16:
        word_944F0A = 1;
        CAEPoliceScannerAudioEntity::s_SlotState[0] = 1;
        word_944F0C = 1;
        word_944F0E = 1;
        word_944F10 = 1;
        return;
      }
      if ( CAEPoliceScannerAudioEntity::s_bStoppingScanner )
      {
LABEL_15:
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
        dword_944EF0 = -1;
        dword_944EEC = -1;
        dword_944EE8 = -1;
        dword_944EE4 = -1;
        CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
        CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
        CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
        CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
        dword_944F04 = -1;
        dword_944F00 = -1;
        CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
        dword_944EFC = -1;
        dword_944EF8 = -1;
        CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
        CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
        CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
        goto LABEL_16;
      }
      CAEPoliceScannerAudioEntity::LoadSlots(0);
      break;
  }
}


// ============================================================

// Address: 0x39f1c0
// Original: _ZN27CAEPoliceScannerAudioEntity9LoadSlotsEv
// Demangled: CAEPoliceScannerAudioEntity::LoadSlots(void)
__int16 *__fastcall CAEPoliceScannerAudioEntity::LoadSlots(CAEPoliceScannerAudioEntity *this)
{
  __int16 *result; // r0
  int v2; // r5
  int v3; // r9
  int v4; // r10
  CStreaming *v5; // r0
  __int16 v6; // r0

  result = (__int16 *)CAEPoliceScannerAudioEntity::s_pCurrentSlots;
  if ( CAEPoliceScannerAudioEntity::s_pCurrentSlots )
  {
    v2 = 0;
    v3 = 2;
    v4 = 1;
    while ( 1 )
    {
      if ( CAEPoliceScannerAudioEntity::s_SlotState[v2] == 2 )
      {
        if ( !CAEAudioHardware::IsSoundLoaded(
                (CAEAudioHardware *)AEAudioHardware,
                *(_WORD *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + v3 - 2),
                *(_WORD *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + v3),
                v2 + 33) )
        {
LABEL_13:
          v4 = 0;
          goto LABEL_14;
        }
        CAEPoliceScannerAudioEntity::s_SlotState[v2] = 3;
      }
      else if ( !CAEPoliceScannerAudioEntity::s_SlotState[v2] )
      {
        if ( *(__int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + v3 - 2) < 0
          || (v5 = (CStreaming *)*(__int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + v3), (int)v5 <= -1) )
        {
          v6 = 1;
        }
        else
        {
          if ( CStreaming::IsVeryBusy(v5) )
            goto LABEL_13;
          CAEAudioHardware::LoadSound(
            (CAEAudioHardware *)AEAudioHardware,
            *(_WORD *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + v3 - 2),
            *(_WORD *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + v3),
            v2 + 33);
          v6 = 2;
          v4 = 0;
        }
        CAEPoliceScannerAudioEntity::s_SlotState[v2] = v6;
      }
LABEL_14:
      v3 += 4;
      ++v2;
      if ( v3 == 22 )
      {
        result = (__int16 *)(v4 << 24);
        if ( v4 << 24 )
        {
          result = &CAEPoliceScannerAudioEntity::s_nScannerPlaybackState;
          CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 4;
        }
        return result;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x39f300
// Original: _ZN27CAEPoliceScannerAudioEntity27CanWePlayNewScannerDialogueEv
// Demangled: CAEPoliceScannerAudioEntity::CanWePlayNewScannerDialogue(void)
bool __fastcall CAEPoliceScannerAudioEntity::CanWePlayNewScannerDialogue(CAEPoliceScannerAudioEntity *this)
{
  _BOOL4 result; // r0

  if ( CAEPoliceScannerAudioEntity::s_nScannerPlaybackState )
    return 0;
  result = 0;
  if ( CTimer::m_snTimeInMilliseconds >= (unsigned int)CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime
    && !byte_951FE3 )
  {
    return CAEPoliceScannerAudioEntity::s_bScannerDisabled == 0;
  }
  return result;
}


// ============================================================

// Address: 0x39f35c
// Original: _ZN27CAEPoliceScannerAudioEntity28PopulateScannerDialogueListsEP12tScannerSlotS1_
// Demangled: CAEPoliceScannerAudioEntity::PopulateScannerDialogueLists(tScannerSlot *,tScannerSlot *)
int *__fastcall CAEPoliceScannerAudioEntity::PopulateScannerDialogueLists(int *result, int *a2)
{
  if ( !CAEPoliceScannerAudioEntity::s_nScannerPlaybackState )
  {
    CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = *result;
    CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = *a2;
    dword_944EE4 = result[1];
    dword_944EF8 = a2[1];
    dword_944EE8 = result[2];
    dword_944EFC = a2[2];
    dword_944EEC = result[3];
    dword_944F00 = a2[3];
    dword_944EF0 = result[4];
    result = (int *)a2[4];
    dword_944F04 = (int)result;
  }
  return result;
}


// ============================================================

// Address: 0x39f3bc
// Original: _ZN27CAEPoliceScannerAudioEntity9PrepSlotsEv
// Demangled: CAEPoliceScannerAudioEntity::PrepSlots(void)
int __fastcall CAEPoliceScannerAudioEntity::PrepSlots(CAEPoliceScannerAudioEntity *this)
{
  int result; // r0
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1

  result = CAEPoliceScannerAudioEntity::s_pCurrentSlots;
  if ( CAEPoliceScannerAudioEntity::s_pCurrentSlots )
  {
    if ( *(__int16 *)CAEPoliceScannerAudioEntity::s_pCurrentSlots < 0 )
      LOWORD(v2) = 1;
    else
      v2 = *(unsigned __int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + 2) >> 15;
    CAEPoliceScannerAudioEntity::s_SlotState[0] = v2;
    if ( *(__int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + 4) < 0 )
      LOWORD(v3) = 1;
    else
      v3 = *(unsigned __int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + 6) >> 15;
    word_944F0A = v3;
    if ( *(__int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + 8) < 0 )
      LOWORD(v4) = 1;
    else
      v4 = *(unsigned __int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + 10) >> 15;
    word_944F0C = v4;
    if ( *(__int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + 12) < 0 )
      LOWORD(v5) = 1;
    else
      v5 = *(unsigned __int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + 14) >> 15;
    word_944F0E = v5;
    if ( *(__int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + 16) < 0 )
      result = 1;
    else
      result = *(unsigned __int16 *)(CAEPoliceScannerAudioEntity::s_pCurrentSlots + 18) >> 15;
    word_944F10 = result;
  }
  return result;
}


// ============================================================

// Address: 0x39f454
// Original: _ZN27CAEPoliceScannerAudioEntity14DisableScannerEhh
// Demangled: CAEPoliceScannerAudioEntity::DisableScanner(uchar,uchar)
__int16 *__fastcall CAEPoliceScannerAudioEntity::DisableScanner(__int16 *this, int a2, unsigned __int8 a3)
{
  CAEPoliceScannerAudioEntity::s_bScannerDisabled = 1;
  if ( this )
  {
    this = (__int16 *)(unsigned __int16)CAEPoliceScannerAudioEntity::s_nScannerPlaybackState;
    if ( CAEPoliceScannerAudioEntity::s_nScannerPlaybackState )
    {
      this = (__int16 *)CAEPoliceScannerAudioEntity::s_pPSControlling;
      if ( CAEPoliceScannerAudioEntity::s_pPSControlling )
      {
        this = (__int16 *)&CAEPoliceScannerAudioEntity::s_bStoppingScanner;
        CAEPoliceScannerAudioEntity::s_bStoppingScanner = 1;
        if ( a2 )
        {
          if ( CAEPoliceScannerAudioEntity::s_pSound )
          {
            CAESound::StopSoundAndForget((CAESound *)CAEPoliceScannerAudioEntity::s_pSound);
            CAEPoliceScannerAudioEntity::s_pSound = 0;
          }
          CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 48, 0.0, 1.0);
          dword_944EF0 = -1;
          dword_944EEC = -1;
          dword_944EE8 = -1;
          dword_944EE4 = -1;
          CAEPoliceScannerAudioEntity::s_ScannerSlotFirst = -1;
          CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
          this = CAEPoliceScannerAudioEntity::s_SlotState;
          dword_944F04 = -1;
          dword_944F00 = -1;
          dword_944EFC = -1;
          dword_944EF8 = -1;
          CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
          CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
          CAEPoliceScannerAudioEntity::s_ScannerSlotSecond = -1;
          CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
          CAEPoliceScannerAudioEntity::s_bStoppingScanner = 0;
          CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = CTimer::m_snTimeInMilliseconds + 10000;
          word_944F0A = 1;
          CAEPoliceScannerAudioEntity::s_SlotState[0] = 1;
          word_944F0C = 1;
          word_944F0E = 1;
          word_944F10 = 1;
        }
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x39f590
// Original: _ZN27CAEPoliceScannerAudioEntity13EnableScannerEv
// Demangled: CAEPoliceScannerAudioEntity::EnableScanner(void)
char *__fastcall CAEPoliceScannerAudioEntity::EnableScanner(CAEPoliceScannerAudioEntity *this)
{
  char *result; // r0

  result = &CAEPoliceScannerAudioEntity::s_bScannerDisabled;
  CAEPoliceScannerAudioEntity::s_bScannerDisabled = 0;
  return result;
}


// ============================================================

// Address: 0x46d828
// Original: _ZN27CAEPoliceScannerAudioEntity16StaticInitialiseEv
// Demangled: CAEPoliceScannerAudioEntity::StaticInitialise(void)
char *__fastcall CAEPoliceScannerAudioEntity::StaticInitialise(CAEPoliceScannerAudioEntity *this)
{
  char *result; // r0

  result = &CAEPoliceScannerAudioEntity::s_bScannerDisabled;
  CAEPoliceScannerAudioEntity::s_bScannerDisabled = 0;
  CAEPoliceScannerAudioEntity::s_NextNewScannerDialogueTime = 0;
  CAEPoliceScannerAudioEntity::s_nScannerPlaybackState = 0;
  CAEPoliceScannerAudioEntity::s_pPSControlling = 0;
  CAEPoliceScannerAudioEntity::s_pCurrentSlots = 0;
  CAEPoliceScannerAudioEntity::s_fVolumeOffset = 0;
  return result;
}


// ============================================================
