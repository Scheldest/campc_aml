
// Address: 0x18b03c
// Original: j__ZN15CAEAudioUtility22GetRandomNumberInRangeEii
// Demangled: CAEAudioUtility::GetRandomNumberInRange(int,int)
// attributes: thunk
int __fastcall CAEAudioUtility::GetRandomNumberInRange(CAEAudioUtility *this, int a2, int a3)
{
  return _ZN15CAEAudioUtility22GetRandomNumberInRangeEii(this, a2, a3);
}


// ============================================================

// Address: 0x191664
// Original: j__ZN15CAEAudioUtility18GetPiecewiseLinearEfsPA2_f
// Demangled: CAEAudioUtility::GetPiecewiseLinear(float,short,float (*)[2])
// attributes: thunk
int __fastcall CAEAudioUtility::GetPiecewiseLinear(CAEAudioUtility *this, float a2, __int16 a3, float (*a4)[2])
{
  return _ZN15CAEAudioUtility18GetPiecewiseLinearEfsPA2_f(this, a2, a3, a4);
}


// ============================================================

// Address: 0x191818
// Original: j__ZN15CAEAudioUtility28GetCurrentTimeInMillisecondsEv
// Demangled: CAEAudioUtility::GetCurrentTimeInMilliseconds(void)
// attributes: thunk
int __fastcall CAEAudioUtility::GetCurrentTimeInMilliseconds(CAEAudioUtility *this)
{
  return _ZN15CAEAudioUtility28GetCurrentTimeInMillisecondsEv(this);
}


// ============================================================

// Address: 0x1956e0
// Original: j__ZN15CAEAudioUtility20ConvertFromMSToBytesEjjt
// Demangled: CAEAudioUtility::ConvertFromMSToBytes(uint,uint,ushort)
// attributes: thunk
int __fastcall CAEAudioUtility::ConvertFromMSToBytes(
        CAEAudioUtility *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  return _ZN15CAEAudioUtility20ConvertFromMSToBytesEjjt(this, a2, a3, a4);
}


// ============================================================

// Address: 0x199be4
// Original: j__ZN15CAEAudioUtility22GetRandomNumberInRangeEff
// Demangled: CAEAudioUtility::GetRandomNumberInRange(float,float)
// attributes: thunk
int __fastcall CAEAudioUtility::GetRandomNumberInRange(CAEAudioUtility *this, float a2, float a3)
{
  return _ZN15CAEAudioUtility22GetRandomNumberInRangeEff(this, a2, a3);
}


// ============================================================

// Address: 0x19bd8c
// Original: j__ZN15CAEAudioUtility39GetBankAndSoundFromScriptSlotAudioEventEPiS0_S0_i
// Demangled: CAEAudioUtility::GetBankAndSoundFromScriptSlotAudioEvent(int *,int *,int *,int)
// attributes: thunk
int __fastcall CAEAudioUtility::GetBankAndSoundFromScriptSlotAudioEvent(
        CAEAudioUtility *this,
        int *a2,
        int *a3,
        int *a4,
        int a5)
{
  return _ZN15CAEAudioUtility39GetBankAndSoundFromScriptSlotAudioEventEPiS0_S0_i(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1a01a8
// Original: j__ZN15CAEAudioUtility18ResolveProbabilityEf
// Demangled: CAEAudioUtility::ResolveProbability(float)
// attributes: thunk
int __fastcall CAEAudioUtility::ResolveProbability(CAEAudioUtility *this, float a2)
{
  return _ZN15CAEAudioUtility18ResolveProbabilityEf(this, a2);
}


// ============================================================

// Address: 0x1a0b8c
// Original: j__ZN15CAEAudioUtility10AudioLog10Ef
// Demangled: CAEAudioUtility::AudioLog10(float)
// attributes: thunk
int __fastcall CAEAudioUtility::AudioLog10(CAEAudioUtility *this, float a2)
{
  return _ZN15CAEAudioUtility10AudioLog10Ef(this, a2);
}


// ============================================================

// Address: 0x1a0e90
// Original: j__ZN15CAEAudioUtility20ConvertFromBytesToMSEjjt
// Demangled: CAEAudioUtility::ConvertFromBytesToMS(uint,uint,ushort)
// attributes: thunk
int __fastcall CAEAudioUtility::ConvertFromBytesToMS(
        CAEAudioUtility *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  return _ZN15CAEAudioUtility20ConvertFromBytesToMSEjjt(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1a1240
// Original: j__ZN15CAEAudioUtility19FindVehicleOfPlayerEv
// Demangled: CAEAudioUtility::FindVehicleOfPlayer(void)
// attributes: thunk
int __fastcall CAEAudioUtility::FindVehicleOfPlayer(CAEAudioUtility *this)
{
  return _ZN15CAEAudioUtility19FindVehicleOfPlayerEv(this);
}


// ============================================================

// Address: 0x393324
// Original: _ZN15CAEAudioUtility22GetRandomNumberInRangeEii
// Demangled: CAEAudioUtility::GetRandomNumberInRange(int,int)
char *__fastcall CAEAudioUtility::GetRandomNumberInRange(CAEAudioUtility *this, int a2, int a3)
{
  return (char *)this
       + (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)(1 - (int)this + a2));
}


// ============================================================

// Address: 0x393364
// Original: _ZN15CAEAudioUtility22GetRandomNumberInRangeEff
// Demangled: CAEAudioUtility::GetRandomNumberInRange(float,float)
float __fastcall CAEAudioUtility::GetRandomNumberInRange(CAEAudioUtility *this, float a2, float a3)
{
  return (float)((float)(a2 - *(float *)&this) * (float)((float)rand() * 4.6566e-10)) + *(float *)&this;
}


// ============================================================

// Address: 0x3933a0
// Original: _ZN15CAEAudioUtility18ResolveProbabilityEf
// Demangled: CAEAudioUtility::ResolveProbability(float)
bool __fastcall CAEAudioUtility::ResolveProbability(CAEAudioUtility *this, float a2)
{
  return *(float *)&this >= 1.0 || (float)((float)((float)rand() * 4.6566e-10) + 0.0) < *(float *)&this;
}


// ============================================================

// Address: 0x3933fc
// Original: _ZN15CAEAudioUtility39GetBankAndSoundFromScriptSlotAudioEventEPiS0_S0_i
// Demangled: CAEAudioUtility::GetBankAndSoundFromScriptSlotAudioEvent(int *,int *,int *,int)
int __fastcall CAEAudioUtility::GetBankAndSoundFromScriptSlotAudioEvent(
        CAEAudioUtility *this,
        int *a2,
        int *a3,
        unsigned int a4,
        int a5)
{
  int v7; // r0
  int v9; // r0

  v7 = *(_DWORD *)this;
  if ( v7 < 1800 )
    return 0;
  if ( v7 >= 2000 )
  {
    if ( v7 == 0xFFFF )
    {
      *a2 = 291;
      if ( a4 > 3 )
        v9 = 0;
      else
        v9 = (2 * a4) & 2;
    }
    else
    {
      *a2 = (int)floorf((float)(v7 - 2000) / 200.0) + 147;
      v9 = (*(_DWORD *)this - 2000) % 200;
    }
  }
  else
  {
    *a2 = gScriptBanksLookup[v7 - 1800];
    v9 = -1;
  }
  *a3 = v9;
  return 1;
}


// ============================================================

// Address: 0x3934b8
// Original: _ZN15CAEAudioUtility18GetPiecewiseLinearEfsPA2_f
// Demangled: CAEAudioUtility::GetPiecewiseLinear(float,short,float (*)[2])
float __fastcall CAEAudioUtility::GetPiecewiseLinear(CAEAudioUtility *this, int a2, float *a3, float (*a4)[2])
{
  float *v5; // r0
  float v7; // s2
  int v8; // r12
  float *v9; // r3
  int i; // r0
  float *v11; // r0

  v5 = &a3[2 * a2 - 2];
  if ( *v5 < *(float *)&this )
    return v5[1];
  v7 = *a3;
  if ( *a3 >= *(float *)&this )
    return a3[1];
  v8 = 0;
  if ( a2 >= 1 && v7 < *(float *)&this )
  {
    v9 = a3 + 2;
    for ( i = 1; ; ++i )
    {
      v7 = *v9;
      v8 = i;
      if ( i >= a2 )
        break;
      v9 += 2;
    }
  }
  v11 = &a3[2 * v8];
  return *(v11 - 1)
       + (float)((float)((float)(*(float *)&this - *(v11 - 2)) / (float)(v7 - *(v11 - 2))) * (float)(v11[1] - *(v11 - 1)));
}


// ============================================================

// Address: 0x393554
// Original: _ZN15CAEAudioUtility19FindVehicleOfPlayerEv
// Demangled: CAEAudioUtility::FindVehicleOfPlayer(void)
int __fastcall CAEAudioUtility::FindVehicleOfPlayer(CAEAudioUtility *this)
{
  int PlayerVehicle; // r4
  int PlayerPed; // r0
  bool v3; // zf

  PlayerVehicle = FindPlayerVehicle(*(int *)&CWorld::PlayerInFocus, 1);
  PlayerPed = FindPlayerPed(-1);
  if ( !PlayerVehicle )
  {
    v3 = PlayerPed == 0;
    if ( PlayerPed )
    {
      PlayerPed = *(_DWORD *)(PlayerPed + 256);
      PlayerVehicle = 0;
      v3 = PlayerPed == 0;
    }
    if ( !v3 && (*(_BYTE *)(PlayerPed + 58) & 7) == 2 )
      return PlayerPed;
  }
  return PlayerVehicle;
}


// ============================================================

// Address: 0x393598
// Original: _ZN15CAEAudioUtility10AudioLog10Ef
// Demangled: CAEAudioUtility::AudioLog10(float)
float __fastcall CAEAudioUtility::AudioLog10(CAEAudioUtility *this, float a2)
{
  if ( *(float *)&this < 0.00001 )
    return -5.0;
  else
    return j_log10f(*(float *)&this);
}


// ============================================================

// Address: 0x3935bc
// Original: _ZN15CAEAudioUtility28GetCurrentTimeInMillisecondsEv
// Demangled: CAEAudioUtility::GetCurrentTimeInMilliseconds(void)
__int64 __fastcall CAEAudioUtility::GetCurrentTimeInMilliseconds(CAEAudioUtility *this)
{
  return (unsigned int)OS_TimeMS();
}


// ============================================================

// Address: 0x3935c8
// Original: _ZN15CAEAudioUtility20ConvertFromBytesToMSEjjt
// Demangled: CAEAudioUtility::ConvertFromBytesToMS(uint,uint,ushort)
int __fastcall CAEAudioUtility::ConvertFromBytesToMS(
        CAEAudioUtility *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  return (int)floorf((float)(unsigned int)this / (float)((float)(a2 * a3) * 0.002));
}


// ============================================================

// Address: 0x393604
// Original: _ZN15CAEAudioUtility20ConvertFromMSToBytesEjjt
// Demangled: CAEAudioUtility::ConvertFromMSToBytes(uint,uint,ushort)
int __fastcall CAEAudioUtility::ConvertFromMSToBytes(
        CAEAudioUtility *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  int v5; // r5

  v5 = (int)floorf((float)((float)(a2 * a3) * 0.002) * (float)(unsigned int)this);
  return v5 % (int)(2 * a3) + v5;
}


// ============================================================

// Address: 0x46d4a0
// Original: _ZN15CAEAudioUtility16StaticInitialiseEv
// Demangled: CAEAudioUtility::StaticInitialise(void)
float __fastcall CAEAudioUtility::StaticInitialise(CAEAudioUtility *this)
{
  int v1; // r6
  float *v2; // r5
  float v3; // r0
  float result; // r0

  v1 = 47;
  CAEAudioUtility::m_sfLogLookup = 0xC2C8000000000000LL;
  unk_9443E4 = 0xC2C800003727C5ACLL;
  v2 = (float *)&unk_9443EC;
  do
  {
    v3 = powf(1.2, (float)v1--);
    *v2 = 10.0 / v3;
    v2 += 2;
  }
  while ( v1 != -1 );
  result = log10f(10.0 / v3);
  dword_9443E8 = LODWORD(result);
  return result;
}


// ============================================================
