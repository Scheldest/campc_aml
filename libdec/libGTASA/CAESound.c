
// Address: 0x18ea50
// Original: j__ZN8CAESound9StopSoundEv
// Demangled: CAESound::StopSound(void)
// attributes: thunk
int __fastcall CAESound::StopSound(CAESound *this)
{
  return _ZN8CAESound9StopSoundEv(this);
}


// ============================================================

// Address: 0x1908fc
// Original: j__ZN8CAESoundaSERS_
// Demangled: CAESound::operator=(CAESound&)
// attributes: thunk
int __fastcall CAESound::operator=(CEntity **a1)
{
  return _ZN8CAESoundaSERS_(a1);
}


// ============================================================

// Address: 0x1953dc
// Original: j__ZN8CAESound18StopSoundAndForgetEv
// Demangled: CAESound::StopSoundAndForget(void)
// attributes: thunk
int __fastcall CAESound::StopSoundAndForget(CAESound *this)
{
  return _ZN8CAESound18StopSoundAndForgetEv(this);
}


// ============================================================

// Address: 0x196a08
// Original: j__ZN8CAESound24SetIndividualEnvironmentEtt
// Demangled: CAESound::SetIndividualEnvironment(ushort,ushort)
// attributes: thunk
int __fastcall CAESound::SetIndividualEnvironment(CAESound *this, unsigned __int16 a2, unsigned __int16 a3)
{
  return _ZN8CAESound24SetIndividualEnvironmentEtt(this, a2, a3);
}


// ============================================================

// Address: 0x196d3c
// Original: j__ZN8CAESound11SetPositionE7CVector
// Demangled: CAESound::SetPosition(CVector)
// attributes: thunk
int CAESound::SetPosition(void)
{
  return _ZN8CAESound11SetPositionE7CVector();
}


// ============================================================

// Address: 0x1972e8
// Original: j__ZN8CAESoundD2Ev
// Demangled: CAESound::~CAESound()
// attributes: thunk
void __fastcall CAESound::~CAESound(CEntity **this)
{
  _ZN8CAESoundD2Ev(this);
}


// ============================================================

// Address: 0x19c7a4
// Original: j__ZN8CAESound10InitialiseEssP14CAEAudioEntity7CVectorffffhtfs
// Demangled: CAESound::Initialise(short,short,CAEAudioEntity *,CVector,float,float,float,float,uchar,ushort,float,short)
// attributes: thunk
int CAESound::Initialise()
{
  return _ZN8CAESound10InitialiseEssP14CAEAudioEntity7CVectorffffhtfs();
}


// ============================================================

// Address: 0x19eb88
// Original: j__ZN8CAESound16SoundHasFinishedEv
// Demangled: CAESound::SoundHasFinished(void)
// attributes: thunk
int __fastcall CAESound::SoundHasFinished(CEntity **this)
{
  return _ZN8CAESound16SoundHasFinishedEv(this);
}


// ============================================================

// Address: 0x19ff14
// Original: j__ZN8CAESound26RegisterWithPhysicalEntityEP7CEntity
// Demangled: CAESound::RegisterWithPhysicalEntity(CEntity *)
// attributes: thunk
int __fastcall CAESound::RegisterWithPhysicalEntity(CEntity **this, CEntity *a2)
{
  return _ZN8CAESound26RegisterWithPhysicalEntityEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x3a7708
// Original: _ZN8CAESoundC2EssP14CAEAudioEntity7CVectorffffhtf
// Demangled: CAESound::CAESound(short,short,CAEAudioEntity *,CVector,float,float,float,float,uchar,ushort,float)
int __fastcall CAESound::CAESound(
        int a1,
        __int16 a2,
        __int16 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        __int16 a13,
        int a14)
{
  *(_WORD *)(a1 + 2) = a3;
  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a4;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = -1;
  *(_DWORD *)(a1 + 16) = -1082130432;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  CAESound::SetPosition(a1, a5, a6, a7);
  *(_DWORD *)(a1 + 80) = a11;
  *(_BYTE *)(a1 + 84) = a12;
  *(_WORD *)(a1 + 86) = a13;
  *(_DWORD *)(a1 + 20) = a8;
  *(_DWORD *)(a1 + 24) = a9;
  *(_DWORD *)(a1 + 28) = a10;
  *(_DWORD *)(a1 + 32) = a14;
  *(_WORD *)(a1 + 88) = 1;
  *(_WORD *)(a1 + 94) = 0;
  *(_WORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 96) = 0x3F800000C2C80000LL;
  *(_DWORD *)(a1 + 108) = 0;
  *(_WORD *)(a1 + 112) = -1;
  return a1;
}


// ============================================================

// Address: 0x3a77ac
// Original: _ZN8CAESound11SetPositionE7CVector
// Demangled: CAESound::SetPosition(CVector)
int __fastcall CAESound::SetPosition(int result, float a2, __int64 a3)
{
  int v3; // lr
  int v4; // r12
  float v5; // s0
  float v6; // s0
  float v7; // s0
  int v8; // r1
  __int64 *v9; // lr
  int v10; // t1
  float v11; // s0
  __int64 v12; // d16
  int v13; // r5
  float v14; // s2
  float v15; // s6
  float v16; // s0

  v3 = *(_DWORD *)(result + 60);
  if ( v3 )
  {
    v4 = CTimer::m_FrameCounter;
    if ( CTimer::m_FrameCounter == v3 )
    {
      v5 = *(float *)&a3;
      *(_DWORD *)(result + 44) = HIDWORD(a3);
      *(float *)(result + 36) = a2;
      *(_DWORD *)(result + 40) = a3;
      LODWORD(a3) = dword_951FBC + 48;
      if ( !dword_951FBC )
        LODWORD(a3) = &qword_951FAC;
      *(float *)(result + 72) = sqrtf(
                                  (float)((float)((float)(a2 - *(float *)a3) * (float)(a2 - *(float *)a3))
                                        + (float)((float)(v5 - *(float *)(a3 + 4)) * (float)(v5 - *(float *)(a3 + 4))))
                                + (float)((float)(*((float *)&a3 + 1) - *(float *)(a3 + 8))
                                        * (float)(*((float *)&a3 + 1) - *(float *)(a3 + 8))));
      result += 64;
    }
    else
    {
      v9 = (__int64 *)(result + 36);
      v10 = *(_DWORD *)(result + 64);
      result += 64;
      v11 = *(float *)&a3;
      v12 = *v9;
      *(_DWORD *)(result - 8) = *((_DWORD *)v9 + 2);
      *(_DWORD *)(result - 20) = HIDWORD(a3);
      v13 = *(_DWORD *)(result + 8);
      *(_DWORD *)(result - 24) = a3;
      *(float *)(result - 28) = a2;
      *(_QWORD *)(result - 16) = v12;
      *(_DWORD *)(result + 12) = v13;
      *(_DWORD *)(result + 4) = v10;
      LODWORD(a3) = dword_951FBC + 48;
      if ( !dword_951FBC )
        LODWORD(a3) = &qword_951FAC;
      v14 = a2 - *(float *)a3;
      v15 = *(float *)(a3 + 8);
      v16 = v11 - *(float *)(a3 + 4);
      *(_DWORD *)(result - 4) = v4;
      *(float *)(result + 8) = sqrtf(
                                 (float)((float)(v14 * v14) + (float)(v16 * v16))
                               + (float)((float)(*((float *)&a3 + 1) - v15) * (float)(*((float *)&a3 + 1) - v15)));
    }
    *(_DWORD *)result = CTimer::m_snTimeInMilliseconds;
  }
  else
  {
    *(_QWORD *)(result + 52) = a3;
    v6 = *(float *)&a3;
    *(float *)(result + 48) = a2;
    *(float *)(result + 36) = a2;
    *(_QWORD *)(result + 40) = a3;
    LODWORD(a3) = dword_951FBC + 48;
    if ( !dword_951FBC )
      LODWORD(a3) = &qword_951FAC;
    v7 = sqrtf(
           (float)((float)((float)(a2 - *(float *)a3) * (float)(a2 - *(float *)a3))
                 + (float)((float)(v6 - *(float *)(a3 + 4)) * (float)(v6 - *(float *)(a3 + 4))))
         + (float)((float)(*((float *)&a3 + 1) - *(float *)(a3 + 8)) * (float)(*((float *)&a3 + 1) - *(float *)(a3 + 8))));
    *(float *)(result + 72) = v7;
    *(float *)(result + 76) = v7;
    *(_DWORD *)(result + 60) = CTimer::m_FrameCounter;
    v8 = CTimer::m_snTimeInMilliseconds;
    *(_DWORD *)(result + 64) = CTimer::m_snTimeInMilliseconds;
    *(_DWORD *)(result + 68) = v8;
  }
  return result;
}


// ============================================================

// Address: 0x3a7964
// Original: _ZN8CAESoundC2ERS_
// Demangled: CAESound::CAESound(CAESound&)
void __fastcall CAESound::CAESound(CAESound *this, CAESound *a2)
{
  __int64 v3; // d16
  __int64 v4; // d16
  __int16 v5; // r0
  int v6; // r0

  *(_WORD *)this = *(_WORD *)a2;
  *((_WORD *)this + 1) = *((_WORD *)a2 + 1);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  v3 = *(_QWORD *)((char *)a2 + 36);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *(_QWORD *)((char *)this + 36) = v3;
  v4 = *((_QWORD *)a2 + 6);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_QWORD *)this + 6) = v4;
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_BYTE *)this + 84) = *((_BYTE *)a2 + 84);
  *((_WORD *)this + 43) = *((_WORD *)a2 + 43);
  *((_WORD *)this + 44) = *((_WORD *)a2 + 44);
  *((_WORD *)this + 46) = *((_WORD *)a2 + 46);
  *((_WORD *)this + 47) = *((_WORD *)a2 + 47);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_WORD *)this + 52) = *((_WORD *)a2 + 52);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  v5 = *((_WORD *)a2 + 56);
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 56) = v5;
  v6 = *((_DWORD *)a2 + 2);
  if ( v6 )
  {
    *((_DWORD *)this + 2) = v6;
    CEntity::RegisterReference(*((CEntity **)a2 + 2), (CEntity **)this + 2);
  }
}


// ============================================================

// Address: 0x3a7a1c
// Original: _ZN8CAESoundD2Ev
// Demangled: CAESound::~CAESound()
void __fastcall CAESound::~CAESound(CEntity **this)
{
  CEntity *v1; // r0
  CEntity **v2; // r5

  v2 = this + 2;
  v1 = this[2];
  if ( v1 )
  {
    CEntity::CleanUpOldReference(v1, v2);
    *v2 = 0;
  }
}


// ============================================================

// Address: 0x3a7a38
// Original: _ZN8CAESound28UnregisterWithPhysicalEntityEv
// Demangled: CAESound::UnregisterWithPhysicalEntity(void)
CEntity *__fastcall CAESound::UnregisterWithPhysicalEntity(CAESound *this)
{
  CEntity *result; // r0
  CEntity **v2; // r4

  v2 = (CEntity **)((char *)this + 8);
  result = (CEntity *)*((_DWORD *)this + 2);
  if ( result )
  {
    CEntity::CleanUpOldReference(result, v2);
    result = 0;
    *v2 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x3a7a54
// Original: _ZN8CAESoundaSERS_
// Demangled: CAESound::operator=(CAESound&)
CEntity **__fastcall CAESound::operator=(CEntity **a1, int a2)
{
  CEntity *v4; // r0
  CEntity **v5; // r6
  __int64 v6; // d16
  __int64 v7; // d16
  __int16 v8; // r0
  CEntity *v9; // r0

  if ( a1 != (CEntity **)a2 )
  {
    v5 = a1 + 2;
    v4 = a1[2];
    if ( v4 )
    {
      CEntity::CleanUpOldReference(v4, a1 + 2);
      *v5 = 0;
    }
    *(_WORD *)a1 = *(_WORD *)a2;
    *((_WORD *)a1 + 1) = *(_WORD *)(a2 + 2);
    a1[1] = *(CEntity **)(a2 + 4);
    a1[3] = *(CEntity **)(a2 + 12);
    a1[4] = *(CEntity **)(a2 + 16);
    a1[5] = *(CEntity **)(a2 + 20);
    a1[6] = *(CEntity **)(a2 + 24);
    a1[7] = *(CEntity **)(a2 + 28);
    a1[8] = *(CEntity **)(a2 + 32);
    v6 = *(_QWORD *)(a2 + 36);
    a1[11] = *(CEntity **)(a2 + 44);
    *(_QWORD *)(a1 + 9) = v6;
    v7 = *(_QWORD *)(a2 + 48);
    a1[14] = *(CEntity **)(a2 + 56);
    *((_QWORD *)a1 + 6) = v7;
    a1[15] = *(CEntity **)(a2 + 60);
    a1[16] = *(CEntity **)(a2 + 64);
    a1[17] = *(CEntity **)(a2 + 68);
    a1[18] = *(CEntity **)(a2 + 72);
    a1[19] = *(CEntity **)(a2 + 76);
    a1[20] = *(CEntity **)(a2 + 80);
    *((_BYTE *)a1 + 84) = *(_BYTE *)(a2 + 84);
    *((_WORD *)a1 + 43) = *(_WORD *)(a2 + 86);
    *((_WORD *)a1 + 44) = *(_WORD *)(a2 + 88);
    *((_WORD *)a1 + 46) = *(_WORD *)(a2 + 92);
    *((_WORD *)a1 + 47) = *(_WORD *)(a2 + 94);
    a1[24] = *(CEntity **)(a2 + 96);
    a1[25] = *(CEntity **)(a2 + 100);
    *((_WORD *)a1 + 52) = *(_WORD *)(a2 + 104);
    a1[27] = *(CEntity **)(a2 + 108);
    v8 = *(_WORD *)(a2 + 112);
    a1[2] = 0;
    *((_WORD *)a1 + 56) = v8;
    v9 = *(CEntity **)(a2 + 8);
    if ( v9 )
    {
      *v5 = v9;
      CEntity::RegisterReference(*(CEntity **)(a2 + 8), a1 + 2);
    }
  }
  return a1;
}


// ============================================================

// Address: 0x3a7b28
// Original: _ZN8CAESound10InitialiseEssP14CAEAudioEntity7CVectorffffhtfs
// Demangled: CAESound::Initialise(short,short,CAEAudioEntity *,CVector,float,float,float,float,uchar,ushort,float,short)
int __fastcall CAESound::Initialise(
        int a1,
        __int16 a2,
        __int16 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        __int16 a13,
        int a14,
        __int16 a15)
{
  CEntity *v16; // r0
  CEntity **v17; // r6
  int result; // r0

  *(_WORD *)(a1 + 2) = a3;
  *(_WORD *)a1 = a2;
  v17 = (CEntity **)(a1 + 8);
  v16 = *(CEntity **)(a1 + 8);
  *(_DWORD *)(a1 + 4) = a4;
  if ( v16 )
  {
    CEntity::CleanUpOldReference(v16, v17);
    *v17 = 0;
  }
  *(_DWORD *)(a1 + 12) = -1;
  *(_DWORD *)(a1 + 16) = -1082130432;
  *(_DWORD *)(a1 + 20) = a8;
  *(_DWORD *)(a1 + 24) = a9;
  *(_DWORD *)(a1 + 28) = a10;
  *(_DWORD *)(a1 + 32) = a14;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  CAESound::SetPosition(a1, a5, a6, a7);
  *(_BYTE *)(a1 + 84) = a12;
  *(_DWORD *)(a1 + 80) = a11;
  *(_WORD *)(a1 + 86) = a13;
  *(_WORD *)(a1 + 88) = 1;
  *(_WORD *)(a1 + 92) = a15;
  *(_WORD *)(a1 + 94) = 0;
  *(_DWORD *)(a1 + 96) = -1027080192;
  *(_DWORD *)(a1 + 100) = 1065353216;
  *(_WORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  result = 0xFFFF;
  *(_WORD *)(a1 + 112) = -1;
  return result;
}


// ============================================================

// Address: 0x3a7bf4
// Original: _ZN8CAESound12NewVPSLentryEv
// Demangled: CAESound::NewVPSLentry(void)
float __fastcall CAESound::NewVPSLentry(CAESound *this)
{
  __int16 v2; // r2
  float result; // r0
  float v4; // r2
  float v5; // s0
  float v6; // s16

  *((_WORD *)this + 47) = 0;
  *((_WORD *)this + 52) = 0;
  v2 = *(_WORD *)this;
  *((_DWORD *)this + 22) = 1;
  result = COERCE_FLOAT(CAEAudioHardware::GetSoundHeadroom((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 1), v2));
  v5 = *((float *)this + 8);
  v6 = *((float *)this + 7);
  *((float *)this + 27) = result;
  if ( v5 > 0.0 && v5 < v6 )
  {
    result = COERCE_FLOAT(CAEAudioUtility::GetRandomNumberInRange((CAEAudioUtility *)(LODWORD(v5) ^ 0x80000000), v5, v4));
    v6 = v6 + result;
  }
  *((float *)this + 25) = v6;
  return result;
}


// ============================================================

// Address: 0x3a7c5c
// Original: _ZN8CAESound18CalculateFrequencyEv
// Demangled: CAESound::CalculateFrequency(void)
float __fastcall CAESound::CalculateFrequency(float this, int a2, float a3)
{
  float v3; // r4
  float v4; // s0
  float v5; // s16

  v3 = this;
  v4 = *(float *)(LODWORD(this) + 32);
  v5 = *(float *)(LODWORD(this) + 28);
  if ( v4 > 0.0 && v4 < v5 )
  {
    this = COERCE_FLOAT(
             CAEAudioUtility::GetRandomNumberInRange(
               (CAEAudioUtility *)(LODWORD(v4) ^ 0x80000000),
               *(float *)(LODWORD(this) + 32),
               a3));
    v5 = v5 + this;
  }
  *(float *)(LODWORD(v3) + 100) = v5;
  return this;
}


// ============================================================

// Address: 0x3a7ca0
// Original: _ZN8CAESound16UpdateParametersEs
// Demangled: CAESound::UpdateParameters(short)
int (__fastcall ***__fastcall CAESound::UpdateParameters(CAESound *this, int a2))(_DWORD, CAESound *, int)
{
  int v4; // r0
  int v5; // r1
  int v6; // r0
  _DWORD *v7; // r3
  int (__fastcall ***result)(_DWORD, CAESound *, int); // r0

  v4 = *((unsigned __int16 *)this + 43);
  if ( (v4 & 0x80) != 0 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 20);
      v7 = (_DWORD *)(v6 + 48);
      if ( !v6 )
        v7 = (_DWORD *)(v5 + 4);
      CAESound::SetPosition(this, *v7, v7[1], v7[2]);
      v4 = *((unsigned __int16 *)this + 43);
    }
    else
    {
      *((_WORD *)this + 52) = 1;
    }
  }
  result = (int (__fastcall ***)(_DWORD, CAESound *, int))(v4 << 29);
  if ( (int)result < 0 )
  {
    result = (int (__fastcall ***)(_DWORD, CAESound *, int))*((_DWORD *)this + 1);
    if ( result )
    {
      result = (int (__fastcall ***)(_DWORD, CAESound *, int))(**result)(result, this, a2);
      if ( *((float *)this + 8) == 0.0 )
      {
        result = (int (__fastcall ***)(_DWORD, CAESound *, int))*((_DWORD *)this + 7);
        *((_DWORD *)this + 25) = result;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x3a7cfe
// Original: _ZN8CAESound31GetLifespanTiedToPhysicalEntityEv
// Demangled: CAESound::GetLifespanTiedToPhysicalEntity(void)
int __fastcall CAESound::GetLifespanTiedToPhysicalEntity(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 7) & 1;
}


// ============================================================

// Address: 0x3a7d08
// Original: _ZN8CAESound9StopSoundEv
// Demangled: CAESound::StopSound(void)
CEntity *__fastcall CAESound::StopSound(CAESound *this)
{
  CEntity *result; // r0
  char *v2; // r4

  v2 = (char *)this + 8;
  result = (CEntity *)*((_DWORD *)this + 2);
  *((_WORD *)v2 + 48) = 1;
  if ( result )
  {
    CEntity::CleanUpOldReference(result, (CEntity **)v2);
    result = 0;
    *(_DWORD *)v2 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x3a7d2a
// Original: _ZN8CAESound17GetRequestUpdatesEv
// Demangled: CAESound::GetRequestUpdates(void)
int __fastcall CAESound::GetRequestUpdates(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 2) & 1;
}


// ============================================================

// Address: 0x3a7d34
// Original: _ZN8CAESound15UpdateFrequencyEv
// Demangled: CAESound::UpdateFrequency(void)
int __fastcall CAESound::UpdateFrequency(int this)
{
  if ( *(float *)(this + 32) == 0.0 )
    *(_DWORD *)(this + 100) = *(_DWORD *)(this + 28);
  return this;
}


// ============================================================

// Address: 0x3a7d48
// Original: _ZN8CAESound26RegisterWithPhysicalEntityEP7CEntity
// Demangled: CAESound::RegisterWithPhysicalEntity(CEntity *)
CEntity *__fastcall CAESound::RegisterWithPhysicalEntity(CEntity **this, CEntity *a2)
{
  CEntity *result; // r0
  CEntity **v4; // r4

  v4 = this + 2;
  result = this[2];
  if ( result )
  {
    CEntity::CleanUpOldReference(result, v4);
    result = 0;
    *v4 = 0;
  }
  if ( a2 )
  {
    *v4 = a2;
    return (CEntity *)j_CEntity::RegisterReference(a2, v4);
  }
  return result;
}


// ============================================================

// Address: 0x3a7d74
// Original: _ZN8CAESound18StopSoundAndForgetEv
// Demangled: CAESound::StopSoundAndForget(void)
CEntity *__fastcall CAESound::StopSoundAndForget(CAESound *this)
{
  CEntity *result; // r0
  char *v2; // r4
  __int16 v3; // r1

  v2 = (char *)this + 8;
  result = (CEntity *)*((_DWORD *)this + 2);
  *((_WORD *)v2 + 48) = 1;
  v3 = *((_WORD *)v2 + 39);
  *((_DWORD *)v2 - 1) = 0;
  *((_WORD *)v2 + 39) = v3 & 0xFFFB;
  if ( result )
  {
    result = (CEntity *)CEntity::CleanUpOldReference(result, (CEntity **)v2);
    *(_DWORD *)v2 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x3a7da6
// Original: _ZN8CAESound24SetIndividualEnvironmentEtt
// Demangled: CAESound::SetIndividualEnvironment(ushort,ushort)
int __fastcall CAESound::SetIndividualEnvironment(int this, unsigned __int16 a2, int a3)
{
  __int16 v3; // r12
  __int16 v4; // r3

  v3 = *(_WORD *)(this + 86);
  v4 = v3 & ~a2;
  if ( a3 )
    v4 = v3 | a2;
  *(_WORD *)(this + 86) = v4;
  return this;
}


// ============================================================

// Address: 0x3a7dbc
// Original: _ZN8CAESound16GetUncancellableEv
// Demangled: CAESound::GetUncancellable(void)
int __fastcall CAESound::GetUncancellable(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 1) & 1;
}


// ============================================================

// Address: 0x3a7dc6
// Original: _ZN8CAESound11GetFrontEndEv
// Demangled: CAESound::GetFrontEnd(void)
int __fastcall CAESound::GetFrontEnd(CAESound *this)
{
  return *((_WORD *)this + 43) & 1;
}


// ============================================================

// Address: 0x3a7dd0
// Original: _ZN8CAESound13GetUnpausableEv
// Demangled: CAESound::GetUnpausable(void)
int __fastcall CAESound::GetUnpausable(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 4) & 1;
}


// ============================================================

// Address: 0x3a7dda
// Original: _ZN8CAESound17GetPlayPhysicallyEv
// Demangled: CAESound::GetPlayPhysically(void)
int __fastcall CAESound::GetPlayPhysically(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 3) & 1;
}


// ============================================================

// Address: 0x3a7de4
// Original: _ZN8CAESound18GetStartPercentageEv
// Demangled: CAESound::GetStartPercentage(void)
int __fastcall CAESound::GetStartPercentage(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 5) & 1;
}


// ============================================================

// Address: 0x3a7dee
// Original: _ZN8CAESound16GetMusicMasteredEv
// Demangled: CAESound::GetMusicMastered(void)
int __fastcall CAESound::GetMusicMastered(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 6) & 1;
}


// ============================================================

// Address: 0x3a7df8
// Original: _ZN8CAESound13GetUnduckableEv
// Demangled: CAESound::GetUnduckable(void)
int __fastcall CAESound::GetUnduckable(CAESound *this)
{
  return *((_BYTE *)this + 87) & 1;
}


// ============================================================

// Address: 0x3a7e02
// Original: _ZN8CAESound17GetUncompressableEv
// Demangled: CAESound::GetUncompressable(void)
int __fastcall CAESound::GetUncompressable(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 9) & 1;
}


// ============================================================

// Address: 0x3a7e0c
// Original: _ZN8CAESound12GetRolledOffEv
// Demangled: CAESound::GetRolledOff(void)
int __fastcall CAESound::GetRolledOff(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 10) & 1;
}


// ============================================================

// Address: 0x3a7e16
// Original: _ZN8CAESound16GetSmoothDuckingEv
// Demangled: CAESound::GetSmoothDucking(void)
int __fastcall CAESound::GetSmoothDucking(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 11) & 1;
}


// ============================================================

// Address: 0x3a7e20
// Original: _ZN8CAESound14GetForcedFrontEv
// Demangled: CAESound::GetForcedFront(void)
int __fastcall CAESound::GetForcedFront(CAESound *this)
{
  return (*((unsigned __int16 *)this + 43) >> 12) & 1;
}


// ============================================================

// Address: 0x3a7e2a
// Original: _ZN8CAESound16SoundHasFinishedEv
// Demangled: CAESound::SoundHasFinished(void)
CEntity *__fastcall CAESound::SoundHasFinished(CEntity **this)
{
  __int16 v2; // r0
  CEntity *v3; // r1
  int v4; // r0
  _DWORD *v5; // r3
  CEntity *v6; // r0
  CEntity *result; // r0

  v2 = *((_WORD *)this + 43);
  if ( (v2 & 0x80) != 0 )
  {
    v3 = this[2];
    if ( !v3 )
    {
      *((_WORD *)this + 52) = 1;
      if ( (v2 & 4) == 0 )
        goto LABEL_12;
      goto LABEL_7;
    }
    v4 = *((_DWORD *)v3 + 5);
    v5 = (_DWORD *)(v4 + 48);
    if ( !v4 )
      v5 = (_DWORD *)((char *)v3 + 4);
    CAESound::SetPosition(this, *v5, v5[1], v5[2]);
    v2 = *((_WORD *)this + 43);
  }
  if ( (v2 & 4) == 0 )
    goto LABEL_12;
LABEL_7:
  v6 = this[1];
  if ( v6 )
  {
    (**(void (__fastcall ***)(CEntity *, CEntity **, int))v6)(v6, this, -1);
    if ( *((float *)this + 8) == 0.0 )
      this[25] = this[7];
  }
LABEL_12:
  result = this[2];
  *((_WORD *)this + 44) = 0;
  if ( result )
  {
    result = (CEntity *)CEntity::CleanUpOldReference(result, this + 2);
    this[2] = 0;
  }
  this[23] = 0;
  return result;
}


// ============================================================

// Address: 0x3a7eac
// Original: _ZN8CAESound14UpdatePlayTimeEsss
// Demangled: CAESound::UpdatePlayTime(short,short,short)
int __fastcall CAESound::UpdatePlayTime(CAESound *this, int a2, unsigned __int16 a3, int a4)
{
  int result; // r0
  __int16 v7; // r2
  bool v8; // zf
  int v9; // r1
  int v10; // t0

  *((_WORD *)this + 56) = a2;
  result = *((unsigned __int16 *)this + 47);
  if ( !result )
  {
    result = *((unsigned __int16 *)this + 52);
    v7 = -1;
    if ( *((_WORD *)this + 52) )
    {
LABEL_3:
      *((_WORD *)this + 46) = v7;
      return result;
    }
    result = (int)(float)((float)(*((float *)this + 25) * (float)a4) + (float)*((__int16 *)this + 46));
    *((_WORD *)this + 46) = result;
    if ( result >= a2 )
    {
      v8 = a2 == 0;
      if ( a2 )
        v8 = a3 == 0xFFFF;
      if ( !v8 )
      {
        v10 = result / a2;
        v9 = result % a2;
        result = v10;
        v7 = v9 + a3;
      }
      goto LABEL_3;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3a7f16
// Original: _ZN8CAESound15CalculateVolumeEv
// Demangled: CAESound::CalculateVolume(void)
float __fastcall CAESound::CalculateVolume(CAESound *this, int a2, CVector *a3)
{
  float result; // r0
  float v5; // s16
  float v6; // r1
  float v7; // s0
  const CVector *v8; // r1
  float v9; // s0
  float v10; // [sp+4h] [bp-1Ch] BYREF
  float v11; // [sp+8h] [bp-18h]
  float v12; // [sp+Ch] [bp-14h]

  LODWORD(result) = *((unsigned __int8 *)this + 86) << 31;
  if ( result == 0.0 )
  {
    CAEAudioEnvironment::GetPositionRelativeToCamera((CAEAudioEnvironment *)&v10, (CAESound *)((char *)this + 36), a3);
    v5 = *((float *)this + 5);
    v7 = COERCE_FLOAT(
           CAEAudioEnvironment::GetDistanceAttenuation(
             COERCE_CAEAUDIOENVIRONMENT_(sqrtf((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12)) / *((float *)this + 6)),
             v6));
    result = COERCE_FLOAT(CAEAudioEnvironment::GetDirectionalMikeAttenuation((CAEAudioEnvironment *)&v10, v8));
    v9 = (float)(v5 + v7) + result;
  }
  else
  {
    v9 = *((float *)this + 5);
  }
  *((float *)this + 24) = v9 - *((float *)this + 27);
  return result;
}


// ============================================================

// Address: 0x3a7f9e
// Original: _ZN8CAESound19GetRelativePositionEP7CVector
// Demangled: CAESound::GetRelativePosition(CVector *)
int __fastcall CAESound::GetRelativePosition(int a1, CAEAudioEnvironment *a2)
{
  CVector *v2; // r2
  int result; // r0
  __int64 v4; // d16

  v2 = (CVector *)(a1 + 36);
  if ( !(*(unsigned __int8 *)(a1 + 86) << 31) )
    return sub_18B8EC(a2, v2, v2);
  v4 = *(_QWORD *)v2;
  result = *(_DWORD *)(a1 + 44);
  *((_DWORD *)a2 + 2) = result;
  *(_QWORD *)a2 = v4;
  return result;
}


// ============================================================

// Address: 0x3a7fc0
// Original: _ZN8CAESound39GetRelativePlaybackFrequencyWithDopplerEv
// Demangled: CAESound::GetRelativePlaybackFrequencyWithDoppler(void)
int __fastcall CAESound::GetRelativePlaybackFrequencyWithDoppler(CAESound *this)
{
  float v1; // s16
  float v3; // [sp+4h] [bp-14h]

  v1 = *((float *)this + 25);
  if ( !(*((unsigned __int8 *)this + 86) << 31) )
    v1 = v1
       * COERCE_FLOAT(
           CAEAudioEnvironment::GetDopplerRelativeFrequency(
             *((CAEAudioEnvironment **)this + 19),
             *((float *)this + 18),
             *((float *)this + 17),
             *((_DWORD *)this + 16),
             *((float *)this + 20),
             v3));
  return LODWORD(v1);
}


// ============================================================

// Address: 0x3a8000
// Original: _ZN8CAESound31GetSlowMoFrequencyScalingFactorEv
// Demangled: CAESound::GetSlowMoFrequencyScalingFactor(void)
float __fastcall CAESound::GetSlowMoFrequencyScalingFactor(CAESound *this)
{
  float v1; // s16
  CTimer *v2; // r0

  v1 = 1.0;
  v2 = (CTimer *)(*((unsigned __int8 *)this + 86) << 27);
  if ( (int)v2 >= 0
    && CTimer::GetIsSlowMotionActive(v2) == 1
    && *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) != 46 )
  {
    return 0.5;
  }
  return v1;
}


// ============================================================
