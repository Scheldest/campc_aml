
// Address: 0x18a690
// Original: j__ZN11CAudioZones16RegisterAudioBoxEPcibffffff
// Demangled: CAudioZones::RegisterAudioBox(char *,int,bool,float,float,float,float,float,float)
// attributes: thunk
int __fastcall CAudioZones::RegisterAudioBox(
        CAudioZones *this,
        char *a2,
        int a3,
        bool a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10)
{
  return _ZN11CAudioZones16RegisterAudioBoxEPcibffffff(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x18a910
// Original: j__ZN11CAudioZones4InitEv
// Demangled: CAudioZones::Init(void)
// attributes: thunk
int __fastcall CAudioZones::Init(CAudioZones *this)
{
  return _ZN11CAudioZones4InitEv(this);
}


// ============================================================

// Address: 0x18f614
// Original: j__ZN11CAudioZones6UpdateEb7CVector
// Demangled: CAudioZones::Update(bool,CVector)
// attributes: thunk
int CAudioZones::Update()
{
  return _ZN11CAudioZones6UpdateEb7CVector();
}


// ============================================================

// Address: 0x19ecec
// Original: j__ZN11CAudioZones19RegisterAudioSphereEPcibffff
// Demangled: CAudioZones::RegisterAudioSphere(char *,int,bool,float,float,float,float)
// attributes: thunk
int __fastcall CAudioZones::RegisterAudioSphere(
        CAudioZones *this,
        char *a2,
        int a3,
        bool a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  return _ZN11CAudioZones19RegisterAudioSphereEPcibffff(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x1a14a0
// Original: j__ZN11CAudioZones15SwitchAudioZoneEPcb
// Demangled: CAudioZones::SwitchAudioZone(char *,bool)
// attributes: thunk
int __fastcall CAudioZones::SwitchAudioZone(CAudioZones *this, char *a2, bool a3)
{
  return _ZN11CAudioZones15SwitchAudioZoneEPcb(this, a2, a3);
}


// ============================================================

// Address: 0x3bda0c
// Original: _ZN11CAudioZones4InitEv
// Demangled: CAudioZones::Init(void)
int *__fastcall CAudioZones::Init(CAudioZones *this)
{
  int *result; // r0

  result = &CAudioZones::m_NumBoxes;
  CAudioZones::m_NumBoxes = 0;
  CAudioZones::m_NumSpheres = 0;
  CAudioZones::m_NumActiveSpheres = 0;
  CAudioZones::m_NumActiveBoxes = 0;
  return result;
}


// ============================================================

// Address: 0x3bda44
// Original: _ZN11CAudioZones6UpdateEb7CVector
// Demangled: CAudioZones::Update(bool,CVector)
float *__fastcall CAudioZones::Update(int a1, float a2, float a3, float a4)
{
  float *result; // r0
  int v5; // r12
  int v6; // lr
  float *v7; // r0
  int v8; // r6
  __int16 *v12; // r1
  int v13; // r2
  int v14; // r3

  if ( a1
    || (CTimer::m_FrameCounter & 0xF) == 6
    || (result = LastUpdateCoors,
        sqrtf(
          (float)((float)((float)(a2 - LastUpdateCoors[0]) * (float)(a2 - LastUpdateCoors[0]))
                + (float)((float)(a3 - LastUpdateCoors[1]) * (float)(a3 - LastUpdateCoors[1])))
        + (float)((float)(a4 - LastUpdateCoors[2]) * (float)(a4 - LastUpdateCoors[2]))) >= 20.0) )
  {
    LastUpdateCoors[0] = a2;
    LastUpdateCoors[1] = a3;
    LastUpdateCoors[2] = a4;
    v5 = CAudioZones::m_NumSpheres;
    CAudioZones::m_NumActiveSpheres = 0;
    CAudioZones::m_NumActiveBoxes = 0;
    if ( CAudioZones::m_NumSpheres >= 1 )
    {
      v6 = 0;
      v7 = (float *)&unk_950C88;
      v8 = 0;
      do
      {
        if ( *((unsigned __int8 *)v7 - 2) << 31
          && v6 <= 9
          && sqrtf(
               (float)((float)((float)(a2 - *v7) * (float)(a2 - *v7))
                     + (float)((float)(a3 - v7[1]) * (float)(a3 - v7[1])))
             + (float)((float)(a4 - v7[2]) * (float)(a4 - v7[2]))) < v7[3] )
        {
          CAudioZones::m_NumActiveSpheres = v6 + 1;
          CAudioZones::m_aActiveSpheres[v6++] = v8;
        }
        ++v8;
        v7 += 7;
      }
      while ( v8 < v5 );
    }
    result = (float *)CAudioZones::m_NumBoxes;
    if ( CAudioZones::m_NumBoxes >= 1 )
    {
      v12 = &word_950CDC;
      v13 = 0;
      v14 = 0;
      do
      {
        if ( *((unsigned __int8 *)v12 - 2) << 31
          && (float)((float)*v12 * 0.125) < a2
          && (float)((float)v12[3] * 0.125) > a2
          && (float)((float)v12[1] * 0.125) < a3
          && (float)((float)v12[4] * 0.125) > a3
          && (float)((float)v12[2] * 0.125) < a4
          && v13 <= 9
          && (float)((float)v12[5] * 0.125) > a4 )
        {
          CAudioZones::m_NumActiveBoxes = v13 + 1;
          CAudioZones::m_aActiveBoxes[v13++] = v14;
        }
        ++v14;
        v12 += 12;
      }
      while ( v14 < (int)result );
    }
  }
  return result;
}


// ============================================================

// Address: 0x3bdc94
// Original: _ZN11CAudioZones19RegisterAudioSphereEPcibffff
// Demangled: CAudioZones::RegisterAudioSphere(char *,int,bool,float,float,float,float)
int __fastcall CAudioZones::RegisterAudioSphere(
        CAudioZones *this,
        char *a2,
        char a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  __int16 v8; // r6
  int v11; // r1
  int result; // r0
  char *v13; // r1
  char v14; // r2

  v8 = (__int16)a2;
  strcpy(&CAudioZones::m_aSpheres[28 * CAudioZones::m_NumSpheres], (const char *)this);
  v11 = 7 * CAudioZones::m_NumSpheres;
  result = ++CAudioZones::m_NumSpheres;
  v13 = &CAudioZones::m_aSpheres[4 * v11];
  *((_WORD *)v13 + 4) = v8;
  v14 = v13[10];
  *((_DWORD *)v13 + 3) = a4;
  *((float *)v13 + 4) = a5;
  *((float *)v13 + 5) = a6;
  *((float *)v13 + 6) = a7;
  v13[10] = v14 & 0xFE | a3;
  return result;
}


// ============================================================

// Address: 0x3bdd04
// Original: _ZN11CAudioZones16RegisterAudioBoxEPcibffffff
// Demangled: CAudioZones::RegisterAudioBox(char *,int,bool,float,float,float,float,float,float)
int __fastcall CAudioZones::RegisterAudioBox(
        CAudioZones *this,
        char *a2,
        char a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10)
{
  __int16 v10; // r9
  int result; // r0
  char *v14; // r1
  char v15; // r2

  v10 = (__int16)a2;
  strcpy((char *)&CAudioZones::m_aBoxes + 24 * CAudioZones::m_NumBoxes, (const char *)this);
  result = CAudioZones::m_NumBoxes + 1;
  v14 = (char *)&CAudioZones::m_aBoxes + 24 * CAudioZones::m_NumBoxes;
  v15 = v14[10];
  *((_WORD *)v14 + 4) = v10;
  CAudioZones::m_NumBoxes = result;
  *((_WORD *)v14 + 6) = (int)(float)(a4 * 8.0);
  *((_WORD *)v14 + 7) = (int)(float)(a5 * 8.0);
  *((_WORD *)v14 + 8) = (int)(float)(a6 * 8.0);
  *((_WORD *)v14 + 9) = (int)(float)(a7 * 8.0);
  *((_WORD *)v14 + 10) = (int)(float)(a8 * 8.0);
  *((_WORD *)v14 + 11) = (int)(float)(a9 * 8.0);
  v14[10] = v15 & 0xFE | a3;
  return result;
}


// ============================================================

// Address: 0x3bddcc
// Original: _ZN11CAudioZones15SwitchAudioZoneEPcb
// Demangled: CAudioZones::SwitchAudioZone(char *,bool)
int *__fastcall CAudioZones::SwitchAudioZone(CAudioZones *this, unsigned int a2, bool a3)
{
  int v5; // r9
  int v6; // r4
  char *v7; // r6
  int *result; // r0
  int v9; // r9
  int v10; // r4
  const char *v11; // r6

  v5 = CAudioZones::m_NumSpheres;
  if ( CAudioZones::m_NumSpheres >= 1 )
  {
    v6 = 0;
    v7 = CAudioZones::m_aSpheres;
    do
    {
      if ( !strcasecmp((const char *)this, v7) )
        v7[10] = v7[10] & 0xFE | a2;
      ++v6;
      v7 += 28;
    }
    while ( v6 < v5 );
  }
  result = &CAudioZones::m_NumBoxes;
  v9 = CAudioZones::m_NumBoxes;
  if ( CAudioZones::m_NumBoxes >= 1 )
  {
    v10 = 0;
    v11 = (const char *)&CAudioZones::m_aBoxes;
    do
    {
      result = (int *)strcasecmp((const char *)this, v11);
      if ( !result )
      {
        result = (int *)(v11[10] & 0xFE | a2);
        *((_BYTE *)v11 + 10) = (_BYTE)result;
      }
      ++v10;
      v11 += 24;
    }
    while ( v10 < v9 );
  }
  return result;
}


// ============================================================
