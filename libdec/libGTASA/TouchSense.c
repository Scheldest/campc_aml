
// Address: 0x18b948
// Original: j__ZN10TouchSenseC2Ev
// Demangled: TouchSense::TouchSense(void)
// attributes: thunk
void __fastcall TouchSense::TouchSense(TouchSense *this)
{
  _ZN10TouchSenseC2Ev(this);
}


// ============================================================

// Address: 0x190130
// Original: j__ZN10TouchSense10setIVTFileEPKc
// Demangled: TouchSense::setIVTFile(char const*)
// attributes: thunk
int __fastcall TouchSense::setIVTFile(TouchSense *this, const char *a2)
{
  return _ZN10TouchSense10setIVTFileEPKc(this, a2);
}


// ============================================================

// Address: 0x1943e4
// Original: j__ZN10TouchSense17playBuiltinEffectEiiii
// Demangled: TouchSense::playBuiltinEffect(int,int,int,int)
// attributes: thunk
int __fastcall TouchSense::playBuiltinEffect(TouchSense *this, int a2, int a3, int a4, int a5)
{
  return _ZN10TouchSense17playBuiltinEffectEiiii(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1954d0
// Original: j__ZN10TouchSense8instanceEv
// Demangled: TouchSense::instance(void)
// attributes: thunk
int __fastcall TouchSense::instance(TouchSense *this)
{
  return _ZN10TouchSense8instanceEv(this);
}


// ============================================================

// Address: 0x1993d8
// Original: j__ZN10TouchSense3runEv
// Demangled: TouchSense::run(void)
// attributes: thunk
int __fastcall TouchSense::run(TouchSense *this)
{
  return _ZN10TouchSense3runEv(this);
}


// ============================================================

// Address: 0x199cd4
// Original: j__ZN10TouchSenseD2Ev
// Demangled: TouchSense::~TouchSense()
// attributes: thunk
void __fastcall TouchSense::~TouchSense(TouchSense *this)
{
  _ZN10TouchSenseD2Ev(this);
}


// ============================================================

// Address: 0x19aa34
// Original: j__ZN10TouchSense20stopContinuousEffectEv
// Demangled: TouchSense::stopContinuousEffect(void)
// attributes: thunk
int __fastcall TouchSense::stopContinuousEffect(TouchSense *this)
{
  return _ZN10TouchSense20stopContinuousEffectEv(this);
}


// ============================================================

// Address: 0x19c3ec
// Original: j__ZN10TouchSense15setHapticsLevelEi
// Demangled: TouchSense::setHapticsLevel(int)
// attributes: thunk
int __fastcall TouchSense::setHapticsLevel(TouchSense *this, int a2)
{
  return _ZN10TouchSense15setHapticsLevelEi(this, a2);
}


// ============================================================

// Address: 0x19dba4
// Original: j__ZN10TouchSense28startContinuousBuiltinEffectEiiii
// Demangled: TouchSense::startContinuousBuiltinEffect(int,int,int,int)
// attributes: thunk
int __fastcall TouchSense::startContinuousBuiltinEffect(TouchSense *this, int a2, int a3, int a4, int a5)
{
  return _ZN10TouchSense28startContinuousBuiltinEffectEiiii(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x27044c
// Original: _ZN10TouchSense8instanceEv
// Demangled: TouchSense::instance(void)
void __fastcall TouchSense::instance(TouchSense *this)
{
  TouchSense *v1; // r0
  int v2; // r0

  if ( !g_touchSense )
  {
    v1 = (TouchSense *)operator new(0x30u);
    TouchSense::TouchSense(v1);
    g_touchSense = v2;
  }
}


// ============================================================

// Address: 0x270480
// Original: _ZN10TouchSense14deleteInstanceEv
// Demangled: TouchSense::deleteInstance(void)
void __fastcall TouchSense::deleteInstance(TouchSense *this)
{
  void *v1; // r0

  if ( g_touchSense )
  {
    TouchSense::~TouchSense((TouchSense *)g_touchSense);
    operator delete(v1);
  }
  g_touchSense = 0;
}


// ============================================================

// Address: 0x2704b0
// Original: _ZN10TouchSense10threadFuncEPv
// Demangled: TouchSense::threadFunc(void *)
int __fastcall TouchSense::threadFunc(TouchSense *this, void *a2)
{
  TouchSense::run(this);
  return 0;
}


// ============================================================

// Address: 0x2704bc
// Original: _ZN10TouchSense3runEv
// Demangled: TouchSense::run(void)
int __fastcall TouchSense::run(TouchSense *this)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  bool v5; // cc
  int v6; // r1
  int v7; // r0
  _DWORD *v8; // [sp+8h] [bp-40h]
  struct timeval tv; // [sp+18h] [bp-30h] BYREF
  __time_t tv_sec; // [sp+20h] [bp-28h] BYREF
  int v11; // [sp+24h] [bp-24h]
  int v12; // [sp+28h] [bp-20h]

  result = (unsigned __int8)UseTouchSense;
  if ( !UseTouchSense )
    return result;
  pthread_mutex_lock((pthread_mutex_t *)&g_accessMutex);
  if ( *((_BYTE *)this + 28) )
    goto LABEL_29;
  v8 = (_DWORD *)((char *)this + 40);
  pthread_cond_wait((pthread_cond_t *)&g_cond, (pthread_mutex_t *)&g_accessMutex);
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 4);
    v5 = v4 < -1;
    if ( v4 <= -1 )
      v5 = *((int *)this + 5) < 0;
    if ( v5 )
      break;
    do
    {
      gettimeofday(&tv, 0);
      tv_sec = tv.tv_sec;
      v6 = 1000 * tv.tv_usec + 1000000 * *((_DWORD *)this + 6);
      v11 = v6;
      if ( v6 >= 1000000000 )
      {
        v11 = v6 - 1000000000;
        tv_sec = tv.tv_sec + 1;
      }
      v7 = pthread_cond_timedwait(
             (pthread_cond_t *)&g_cond,
             (pthread_mutex_t *)&g_accessMutex,
             (const struct timespec *)&tv_sec);
    }
    while ( !v7 );
    if ( *((_BYTE *)this + 28) )
      goto LABEL_29;
    if ( v7 != 110 )
    {
      _android_log_print(6, "TouchSense-GTA3", "pthread_cond_timedwait error %d", v7);
      break;
    }
    if ( *((int *)this + 4) >= 0 )
    {
      *((_DWORD *)this + 4) = -1;
      goto LABEL_19;
    }
    if ( *((int *)this + 5) < 0 )
      goto LABEL_19;
    if ( UseTouchSense && *(int *)this >= 1 )
    {
      if ( *v8 != -1 )
      {
        ImmVibeGetEffectState();
        if ( v12 == 1 )
        {
          if ( *((int *)this + 2) < 20 )
            goto LABEL_16;
          ImmVibeStopPlayingEffect();
        }
        *v8 = -1;
      }
      ImmVibePlayUHLEffect();
      *((_DWORD *)this + 2) = 20;
    }
LABEL_16:
    v3 = *((unsigned __int8 *)this + 28);
    *((_DWORD *)this + 5) = -1;
    if ( v3 )
      goto LABEL_29;
LABEL_19:
    pthread_cond_wait((pthread_cond_t *)&g_cond, (pthread_mutex_t *)&g_accessMutex);
  }
  *((_BYTE *)this + 28) = 1;
LABEL_29:
  _android_log_print(3, "TouchSense-GTA3", "haptics thread exiting");
  return pthread_mutex_unlock((pthread_mutex_t *)&g_accessMutex);
}


// ============================================================

// Address: 0x270680
// Original: _ZN10TouchSenseC2Ev
// Demangled: TouchSense::TouchSense(void)
void __fastcall TouchSense::TouchSense(TouchSense *this)
{
  void *v2; // r5

  *((_BYTE *)this + 4) = 0;
  *(_DWORD *)this = 2;
  *((_DWORD *)this + 6) = 100;
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 11) = -1;
  *((_QWORD *)this + 1) = 0x6400000064LL;
  *((_QWORD *)this + 2) = -1LL;
  if ( UseTouchSense )
  {
    NVThreadGetCurrentJNIEnv();
    if ( ImmVibeInitialize2() <= -1 )
    {
      _android_log_print(6, "TouchSense-GTA3", "FAILED TO INITIALIZE TOUCHSENSE!");
      *(_DWORD *)this = 0;
    }
    else
    {
      if ( ImmVibeOpenDevice() <= -1 )
      {
        _android_log_print(6, "TouchSense-GTA3", "FAILED TO OPEN TOUCHSENSE DEVICE!");
        *(_DWORD *)this = 0;
      }
      else
      {
        v2 = malloc(0x28u);
        *(_DWORD *)v2 = this;
        *((_DWORD *)v2 + 1) = TouchSense::threadFunc;
        strncpy((char *)v2 + 8, "Touchsense", 0x1Fu);
        if ( !pthread_create((pthread_t *)&g_thread, 0, (void *(*)(void *))sub_27A128, v2) )
          return;
        free(v2);
        *(_DWORD *)this = 0;
        ImmVibeCloseDevice();
      }
      ImmVibeTerminate();
    }
  }
}


// ============================================================

// Address: 0x270800
// Original: _ZN10TouchSenseD2Ev
// Demangled: TouchSense::~TouchSense()
void __fastcall TouchSense::~TouchSense(TouchSense *this)
{
  void *v2; // r0

  if ( UseTouchSense )
  {
    pthread_mutex_lock((pthread_mutex_t *)&g_accessMutex);
    *((_BYTE *)this + 28) = 1;
    pthread_cond_signal((pthread_cond_t *)&g_cond);
    pthread_mutex_unlock((pthread_mutex_t *)&g_accessMutex);
    pthread_join(g_thread, 0);
    v2 = (void *)*((_DWORD *)this + 8);
    if ( v2 )
      operator delete[](v2);
    ImmVibeCloseDevice();
    ImmVibeTerminate();
  }
}


// ============================================================

// Address: 0x270868
// Original: _ZN10TouchSense10setIVTFileEPKc
// Demangled: TouchSense::setIVTFile(char const*)
int __fastcall TouchSense::setIVTFile(TouchSense *this, const char *a2)
{
  int *v4; // r0
  int v5; // r10
  FILE *v6; // r6
  int v7; // r4
  signed int Length; // r5
  int result; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r4
  void *v13; // r0
  off_t v14; // r10
  off_t v15; // r11
  signed int v16; // r2

  if ( !UseTouchSense )
    return 1;
  v4 = (int *)NvFOpen("GTA3/data/", a2, 0, 1);
  if ( !v4 )
  {
    _android_log_print(6, "TouchSense-GTA3", "Failed to open IVT file \"%s\"!", a2);
    return 0;
  }
  *((_BYTE *)this + 4) = 0;
  v5 = *v4;
  v6 = (FILE *)v4[1];
  if ( *v4 == 1 )
  {
    v7 = ftell(v6);
    fseek(v6, 0, 2);
    Length = ftell(v6);
    fseek(v6, v7, 0);
  }
  else
  {
    Length = AAsset_getLength((AAsset *)v6);
  }
  v10 = (void *)*((_DWORD *)this + 8);
  if ( v10 )
    operator delete[](v10);
  v11 = (void *)operator new[](Length);
  v12 = v11;
  *((_DWORD *)this + 8) = v11;
  if ( v5 != 1 )
  {
    v14 = AAsset_getLength((AAsset *)v6);
    v15 = AAsset_getLength((AAsset *)v6);
    v16 = AAsset_getRemainingLength((AAsset *)v6) - v15 + v14;
    if ( Length <= v16 )
      v16 = Length;
    if ( AAsset_read((AAsset *)v6, v12, v16) != Length )
      goto LABEL_12;
LABEL_18:
    result = 1;
    *((_BYTE *)this + 4) = 1;
    return result;
  }
  if ( fread(v11, 1u, Length, v6) == Length )
    goto LABEL_18;
LABEL_12:
  _android_log_print(6, "TouchSense-GTA3", "Failed to read IVT data from \"%s\"!", a2);
  v13 = (void *)*((_DWORD *)this + 8);
  if ( v13 )
    operator delete[](v13);
  result = 0;
  *((_DWORD *)this + 8) = 0;
  return result;
}


// ============================================================

// Address: 0x2709d0
// Original: _ZN10TouchSense10playEffectEiiii
// Demangled: TouchSense::playEffect(int,int,int,int)
int __fastcall TouchSense::playEffect(TouchSense *this, int a2, int a3, int a4, int a5)
{
  if ( UseTouchSense )
  {
    if ( *(_DWORD *)this < a2 )
      return 0;
    pthread_mutex_lock((pthread_mutex_t *)&g_accessMutex);
    *((_DWORD *)this + 4) = a3;
    *((_DWORD *)this + 5) = -1;
    *((_DWORD *)this + 6) = a4;
    pthread_cond_signal((pthread_cond_t *)&g_cond);
    pthread_mutex_unlock((pthread_mutex_t *)&g_accessMutex);
  }
  return 1;
}


// ============================================================

// Address: 0x270a34
// Original: _ZN10TouchSense18playEffectInternalEii
// Demangled: TouchSense::playEffectInternal(int,int)
bool __fastcall TouchSense::playEffectInternal(TouchSense *this, int a2, int a3)
{
  return *(_DWORD *)this > 0;
}


// ============================================================

// Address: 0x270a40
// Original: _ZN10TouchSense14hapticsEnabledEv
// Demangled: TouchSense::hapticsEnabled(void)
bool __fastcall TouchSense::hapticsEnabled(TouchSense *this)
{
  return *(_DWORD *)this > 0;
}


// ============================================================

// Address: 0x270a4c
// Original: _ZN10TouchSense10playEffectEiPKcii
// Demangled: TouchSense::playEffect(int,char const*,int,int)
int __fastcall TouchSense::playEffect(TouchSense *this, int a2, const char *a3, int a4, int a5)
{
  if ( !UseTouchSense )
    return 1;
  if ( *(_DWORD *)this >= a2 )
  {
    if ( !*((_BYTE *)this + 4) )
      TouchSense::setIVTFile(this, "gta3.ivt");
    ImmVibeGetIVTEffectIndexFromName();
  }
  return 0;
}


// ============================================================

// Address: 0x270af0
// Original: _ZN10TouchSense15getHapticsLevelEv
// Demangled: TouchSense::getHapticsLevel(void)
int __fastcall TouchSense::getHapticsLevel(TouchSense *this)
{
  return *(_DWORD *)this;
}


// ============================================================

// Address: 0x270af4
// Original: _ZN10TouchSense22getEffectIndexFromNameEPKc
// Demangled: TouchSense::getEffectIndexFromName(char const*)
int __fastcall TouchSense::getEffectIndexFromName(TouchSense *this, const char *a2)
{
  if ( !UseTouchSense )
    return 1;
  if ( !*((_BYTE *)this + 4) )
    TouchSense::setIVTFile(this, "gta3.ivt");
  ImmVibeGetIVTEffectIndexFromName();
  return -1;
}


// ============================================================

// Address: 0x270b3c
// Original: _ZN10TouchSense28startContinuousBuiltinEffectEiiii
// Demangled: TouchSense::startContinuousBuiltinEffect(int,int,int,int)
int __fastcall TouchSense::startContinuousBuiltinEffect(TouchSense *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v7; // r6
  int v8; // [sp+4h] [bp-14h]

  if ( UseTouchSense )
  {
    if ( *(_DWORD *)this < a2 )
      return 0;
    v7 = (_DWORD *)((char *)this + 44);
    if ( *((_DWORD *)this + 11) != -1 )
    {
      ImmVibeGetEffectState();
      if ( v8 == 1 )
      {
        if ( *((_DWORD *)this + 3) <= a5 )
          return 0;
        ImmVibeStopPlayingEffect();
      }
      *v7 = -1;
    }
    ImmVibePlayUHLEffect();
    *((_DWORD *)this + 3) = a5;
  }
  return 1;
}


// ============================================================

// Address: 0x270bac
// Original: _ZN10TouchSense20stopContinuousEffectEv
// Demangled: TouchSense::stopContinuousEffect(void)
int __fastcall TouchSense::stopContinuousEffect(TouchSense *this)
{
  int result; // r0
  bool v3; // zf

  result = (unsigned __int8)UseTouchSense;
  v3 = UseTouchSense == 0;
  if ( UseTouchSense )
  {
    result = *((_DWORD *)this + 11) + 1;
    v3 = result == 0;
  }
  if ( !v3 )
  {
    ImmVibeStopPlayingEffect();
    result = -1;
    *((_DWORD *)this + 11) = -1;
  }
  return result;
}


// ============================================================

// Address: 0x270bd8
// Original: _ZN10TouchSense17playBuiltinEffectEiiii
// Demangled: TouchSense::playBuiltinEffect(int,int,int,int)
int __fastcall TouchSense::playBuiltinEffect(TouchSense *this, int a2, int a3, int a4, int a5)
{
  if ( UseTouchSense )
  {
    if ( *(_DWORD *)this < a2 || *((_DWORD *)this + 5) != -1 )
      return 0;
    pthread_mutex_lock((pthread_mutex_t *)&g_accessMutex);
    *((_DWORD *)this + 4) = -1;
    *((_DWORD *)this + 5) = a3;
    *((_DWORD *)this + 6) = a4;
    pthread_cond_signal((pthread_cond_t *)&g_cond);
    pthread_mutex_unlock((pthread_mutex_t *)&g_accessMutex);
  }
  return 1;
}


// ============================================================

// Address: 0x270c40
// Original: _ZN10TouchSense25playBuiltinEffectInternalEii
// Demangled: TouchSense::playBuiltinEffectInternal(int,int)
int __fastcall TouchSense::playBuiltinEffectInternal(TouchSense *this, int a2, int a3)
{
  _DWORD *v5; // r6
  int v7; // [sp+4h] [bp-14h]

  if ( UseTouchSense )
  {
    if ( *(int *)this < 1 )
      return 0;
    v5 = (_DWORD *)((char *)this + 40);
    if ( *((_DWORD *)this + 10) != -1 )
    {
      ImmVibeGetEffectState();
      if ( v7 == 1 )
      {
        if ( *((_DWORD *)this + 2) < a3 )
          return 0;
        ImmVibeStopPlayingEffect();
      }
      *v5 = -1;
    }
    ImmVibePlayUHLEffect();
    *((_DWORD *)this + 2) = a3;
  }
  return 1;
}


// ============================================================

// Address: 0x270cac
// Original: _ZN10TouchSense14stopAllEffectsEv
// Demangled: TouchSense::stopAllEffects(void)
int __fastcall TouchSense::stopAllEffects(TouchSense *this)
{
  int result; // r0
  int v3; // r1
  int v4; // [sp+4h] [bp-Ch]

  result = (unsigned __int8)UseTouchSense;
  if ( UseTouchSense )
  {
    result = *(_DWORD *)this;
    if ( *(int *)this >= 1 )
    {
      if ( *((_DWORD *)this + 11) != -1 )
      {
        ImmVibeStopPlayingEffect();
        *((_DWORD *)this + 11) = -1;
      }
      v3 = *((_DWORD *)this + 10);
      result = v3 + 1;
      if ( v3 != -1 )
      {
        ImmVibeGetEffectState();
        if ( v4 == 1 )
          ImmVibeStopPlayingEffect();
        result = -1;
        *((_DWORD *)this + 10) = -1;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x270d00
// Original: _ZN10TouchSense15setHapticsLevelEi
// Demangled: TouchSense::setHapticsLevel(int)
_DWORD *__fastcall TouchSense::setHapticsLevel(_DWORD *this, int a2)
{
  *this = a2;
  return this;
}


// ============================================================
