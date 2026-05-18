
// Address: 0x18c3fc
// Original: j__ZN20CTaskComplexSunbatheC2EP7CObjectb
// Demangled: CTaskComplexSunbathe::CTaskComplexSunbathe(CObject *,bool)
// attributes: thunk
void __fastcall CTaskComplexSunbathe::CTaskComplexSunbathe(CTaskComplexSunbathe *this, CObject *a2, bool a3)
{
  _ZN20CTaskComplexSunbatheC2EP7CObjectb(this, a2, a3);
}


// ============================================================

// Address: 0x18df84
// Original: j__ZN20CTaskComplexSunbathe11CanSunbatheEv
// Demangled: CTaskComplexSunbathe::CanSunbathe(void)
// attributes: thunk
int __fastcall CTaskComplexSunbathe::CanSunbathe(CTaskComplexSunbathe *this)
{
  return _ZN20CTaskComplexSunbathe11CanSunbatheEv(this);
}


// ============================================================

// Address: 0x198bf8
// Original: j__ZN20CTaskComplexSunbathe13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexSunbathe::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexSunbathe::CreateSubTask(CTaskComplexSunbathe *this, int a2, CPed *a3)
{
  return _ZN20CTaskComplexSunbathe13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x19a6ec
// Original: j__ZN20CTaskComplexSunbatheC2EP7CObjectb_0
// Demangled: CTaskComplexSunbathe::CTaskComplexSunbathe(CObject *,bool)
// attributes: thunk
void __fastcall CTaskComplexSunbathe::CTaskComplexSunbathe(CTaskComplexSunbathe *this, CObject *a2, bool a3)
{
  _ZN20CTaskComplexSunbatheC2EP7CObjectb(this, a2, a3);
}


// ============================================================

// Address: 0x4ed0f0
// Original: _ZN20CTaskComplexSunbatheC2EP7CObjectb
// Demangled: CTaskComplexSunbathe::CTaskComplexSunbathe(CObject *,bool)
void __fastcall CTaskComplexSunbathe::CTaskComplexSunbathe(CTaskComplexSunbathe *this, CObject *a2, bool a3)
{
  const char *v6; // r1
  const char *v7; // r1
  const char *v8; // r1
  const char *v9; // r1

  CTaskComplex::CTaskComplex(this);
  v6 = 0;
  *((_BYTE *)this + 12) = a3;
  *((_WORD *)this + 14) = 0;
  *(_DWORD *)((char *)this + 13) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_66A0C4;
  *((_DWORD *)this + 13) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 13);
    v6 = &byte_5;
    *(_BYTE *)(*((_DWORD *)this + 13) + 320) = (unsigned __int8)&byte_5;
  }
  *((_DWORD *)this + 9) = CAnimManager::GetAnimationBlock((CAnimManager *)"beach", v6);
  *((_DWORD *)this + 11) = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"beach", v7);
  *((_DWORD *)this + 10) = CAnimManager::GetAnimationBlock((CAnimManager *)"sunbathe", v8);
  *((_DWORD *)this + 12) = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"sunbathe", v9);
}


// ============================================================

// Address: 0x4ed174
// Original: _ZN20CTaskComplexSunbatheD2Ev
// Demangled: CTaskComplexSunbathe::~CTaskComplexSunbathe()
void __fastcall CTaskComplexSunbathe::~CTaskComplexSunbathe(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  _UNKNOWN **v4; // r1

  v3 = this + 13;
  v2 = this[13];
  v4 = &off_66A0C4;
  *this = (CEntity *)&off_66A0C4;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, v3);
    v4 = (_UNKNOWN **)(&stderr + 3);
    *((_BYTE *)*v3 + 320) = 3;
  }
  if ( *((_BYTE *)this + 14) )
  {
    CAnimManager::RemoveAnimBlockRef(this[11], (int)v4);
    *((_BYTE *)this + 14) = 0;
  }
  if ( *((_BYTE *)this + 15) )
  {
    CAnimManager::RemoveAnimBlockRef(this[12], (int)v4);
    *((_BYTE *)this + 15) = 0;
  }
  sub_18EDE8((CTaskComplex *)this);
}


// ============================================================

// Address: 0x4ed1c4
// Original: _ZN20CTaskComplexSunbatheD0Ev
// Demangled: CTaskComplexSunbathe::~CTaskComplexSunbathe()
void __fastcall CTaskComplexSunbathe::~CTaskComplexSunbathe(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  _UNKNOWN **v4; // r1
  void *v5; // r0

  v3 = this + 13;
  v2 = this[13];
  v4 = &off_66A0C4;
  *this = (CEntity *)&off_66A0C4;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, v3);
    v4 = (_UNKNOWN **)(&stderr + 3);
    *((_BYTE *)*v3 + 320) = 3;
  }
  if ( *((_BYTE *)this + 14) )
  {
    CAnimManager::RemoveAnimBlockRef(this[11], (int)v4);
    *((_BYTE *)this + 14) = 0;
  }
  if ( *((_BYTE *)this + 15) )
  {
    CAnimManager::RemoveAnimBlockRef(this[12], (int)v4);
    *((_BYTE *)this + 15) = 0;
  }
  CTaskComplex::~CTaskComplex((CTaskComplex *)this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4ed218
// Original: _ZN20CTaskComplexSunbathe13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexSunbathe::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexSunbathe::MakeAbortable(CTaskComplexSunbathe *this, CPed *a2, int a3, const CEvent *a4)
{
  int result; // r0

  if ( a4
    && ((*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 2
     || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 3)
    || (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         a3,
         a4) != 1 )
  {
    return 0;
  }
  result = 1;
  *((_BYTE *)this + 16) = 1;
  return result;
}


// ============================================================

// Address: 0x4ed268
// Original: _ZN20CTaskComplexSunbathe17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSunbathe::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexSunbathe::CreateNextSubTask(CTaskComplexSunbathe *this, CPed *a2)
{
  int v3; // r0
  bool v4; // zf
  unsigned int v5; // r1
  CPed *v6; // r2
  int result; // r0
  unsigned int v8; // r0
  unsigned int v9; // r1
  float *v10; // r0
  bool v11; // zf
  int v12; // r0
  int v13; // r5
  unsigned __int16 v14; // r0
  CPed *v15; // r2
  CTaskComplexSunbathe *v16; // r0
  int v17; // r1
  int v18; // r0
  bool v19; // zf
  int v20; // r0
  int v21; // r4
  int v22; // r0
  int v23; // r2
  int v24; // r0
  int v25; // r0
  int v26; // r4
  int v27; // r0
  int v28; // r4
  int v29; // r0
  int v30; // [sp+0h] [bp-18h]
  const char *v31; // [sp+4h] [bp-14h]
  int v32; // [sp+8h] [bp-10h]

  v3 = *((_DWORD *)a2 + 359);
  v4 = v3 == 22;
  if ( v3 != 22 )
    v4 = v3 == 5;
  if ( v4 )
    CInterestingEvents::Add();
  v5 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = (CPed *)(v5 - 418);
  result = 0;
  switch ( v5 )
  {
    case 0x1A2u:
      if ( !*(_BYTE *)(*((_DWORD *)this + 10) + 16) )
      {
        v16 = this;
        v17 = 202;
        return CTaskComplexSunbathe::CreateSubTask(v16, v17, v6);
      }
      if ( (unsigned __int8)(CClock::ms_nGameClockHours - 10) > 7u )
        goto LABEL_55;
      if ( (unsigned __int16)CWeather::NewWeatherType > 0x12u )
        goto LABEL_55;
      v5 = 420975;
      if ( ((1 << CWeather::NewWeatherType) & 0x66C6F) == 0 )
        goto LABEL_55;
      if ( *((_BYTE *)this + 28) )
      {
        if ( *((_BYTE *)this + 29) )
        {
          v8 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 29) = 0;
          *((_DWORD *)this + 5) = v8;
          v9 = v8;
        }
        else
        {
          v9 = *((_DWORD *)this + 5);
          v8 = CTimer::m_snTimeInMilliseconds;
        }
        v5 = v9 + *((_DWORD *)this + 6);
        if ( v5 <= v8 )
          goto LABEL_55;
      }
      v5 = *((_DWORD *)this + 8);
      if ( (v5 | 2) != 2 )
      {
LABEL_55:
        v27 = *((_DWORD *)this + 2);
        if ( !v27 || (*(int (__fastcall **)(int))(*(_DWORD *)v27 + 20))(v27) != 430 )
          goto LABEL_58;
        return *((_DWORD *)this + 2);
      }
      v25 = *((_DWORD *)this + 2);
      if ( v25 )
      {
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 20))(v25) == 429 )
          return *((_DWORD *)this + 2);
        v5 = *((_DWORD *)this + 8);
      }
      if ( v5 == 2 )
      {
        v26 = 257;
      }
      else
      {
        if ( v5 )
          goto LABEL_62;
        v26 = 254;
      }
      this = (CTaskComplexSunbathe *)(v26 + (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0));
LABEL_62:
      v29 = CTask::operator new((CTask *)&dword_20, v5);
      return CTaskSimpleRunAnim::CTaskSimpleRunAnim(v29, 48, (int)this, 1082130432, 429, (int)"idle sunbathing", 1);
    case 0x1A3u:
    case 0x1A4u:
    case 0x1A5u:
    case 0x1A6u:
    case 0x1A7u:
    case 0x1A8u:
    case 0x1A9u:
    case 0x1AAu:
    case 0x1ABu:
      return result;
    case 0x1ACu:
      if ( !*(_BYTE *)(*((_DWORD *)this + 9) + 16) )
        goto LABEL_43;
      v13 = CTimer::m_snTimeInMilliseconds;
      v14 = rand();
      *((_DWORD *)this + 5) = v13;
      *((_BYTE *)this + 28) = 1;
      *((_DWORD *)this + 6) = (int)(float)((float)((float)v14 * 0.000015259) * 80000.0) + 20000;
      result = CTaskComplexSunbathe::CreateSubTask(this, 418, v15);
      *((_BYTE *)this + 13) = 1;
      return result;
    case 0x1ADu:
      if ( !*(_BYTE *)(*((_DWORD *)this + 9) + 16) )
        goto LABEL_43;
      v16 = this;
      v17 = 418;
      return CTaskComplexSunbathe::CreateSubTask(v16, v17, v6);
    case 0x1AEu:
      v18 = *((_DWORD *)this + 2);
      if ( v18 )
      {
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 20))(v18) == 1302 )
          result = *((_DWORD *)this + 2);
        else
          result = 0;
      }
      else
      {
        result = 0;
      }
      *((_BYTE *)this + 13) = 0;
      return result;
    default:
      if ( v5 != 202 )
        return result;
      if ( *((_BYTE *)this + 13) )
      {
        v5 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
        v10 = *(float **)(v5 + 1424);
        v11 = v10 == 0;
        if ( v10 )
        {
          v5 = *(_DWORD *)(v5 + 1156) & 0x100;
          v11 = v5 == 0;
        }
        if ( (v11
           || (float)((float)((float)(v10[18] * v10[18]) + (float)(v10[19] * v10[19])) + (float)(v10[20] * v10[20])) <= 0.04)
          && *(_BYTE *)(*((_DWORD *)this + 10) + 16) )
        {
          v12 = *((_DWORD *)this + 2);
          if ( !v12 || (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 20))(v12) != 430 )
          {
LABEL_58:
            v28 = *((_DWORD *)this + 8);
            v22 = CTask::operator new((CTask *)&dword_20, v5);
            v30 = 430;
            v31 = "stop sunbathing";
            v32 = 0;
            v23 = v28 + 249;
            return CTaskSimpleRunAnim::CTaskSimpleRunAnim(v22, 48, v23, 1082130432, v30, (int)v31, v32);
          }
          return *((_DWORD *)this + 2);
        }
LABEL_43:
        v24 = *((_DWORD *)this + 2);
        if ( !v24 || (*(int (__fastcall **)(int))(*(_DWORD *)v24 + 20))(v24) != 1302 )
          return 0;
        return *((_DWORD *)this + 2);
      }
      v19 = *(_BYTE *)(*((_DWORD *)this + 10) + 16) == 0;
      if ( *(_BYTE *)(*((_DWORD *)this + 10) + 16) )
        v19 = *(_BYTE *)(*((_DWORD *)this + 9) + 16) == 0;
      if ( v19 )
        goto LABEL_43;
      v20 = *((_DWORD *)this + 2);
      if ( v20 && (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 20))(v20) == 428 )
        return *((_DWORD *)this + 2);
      v21 = *((_DWORD *)this + 8);
      v22 = CTask::operator new((CTask *)&dword_20, v5);
      v30 = 428;
      v31 = "start sunbathing";
      v32 = 1;
      v23 = v21 + 244;
      return CTaskSimpleRunAnim::CTaskSimpleRunAnim(v22, 48, v23, 1082130432, v30, (int)v31, v32);
  }
}


// ============================================================

// Address: 0x4ed584
// Original: _ZN20CTaskComplexSunbathe23ShouldLoadSunbatheAnimsEv
// Demangled: CTaskComplexSunbathe::ShouldLoadSunbatheAnims(void)
bool __fastcall CTaskComplexSunbathe::ShouldLoadSunbatheAnims(CTaskComplexSunbathe *this)
{
  int v1; // r1
  float *v2; // r0
  bool v3; // zf

  v1 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v2 = *(float **)(v1 + 1424);
  v3 = v2 == 0;
  if ( v2 )
    v3 = (*(_DWORD *)(v1 + 1156) & 0x100) == 0;
  return v3 || (float)((float)((float)(v2[18] * v2[18]) + (float)(v2[19] * v2[19])) + (float)(v2[20] * v2[20])) <= 0.04;
}


// ============================================================

// Address: 0x4ed5f0
// Original: _ZN20CTaskComplexSunbathe13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexSunbathe::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexSunbathe::CreateSubTask(CTaskComplexSunbathe *this, unsigned int a2, CPed *a3)
{
  CTaskComplexSunbathe *v3; // r5
  unsigned int v4; // r6
  int v5; // r0
  int v6; // r4
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r6
  int v10; // r1
  float v11; // s16
  unsigned __int16 v12; // r5
  int v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r4
  int v18; // r5
  int v19; // r5
  float *v20; // r0
  bool v21; // zf
  int v23; // [sp+0h] [bp-30h]
  const char *v24; // [sp+4h] [bp-2Ch]

  v3 = this;
  v4 = a2;
  v5 = *((_DWORD *)this + 2);
  if ( v5 && (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) == a2 )
    return *((_DWORD *)v3 + 2);
  v6 = 0;
  switch ( v4 )
  {
    case 0x1A2u:
      v7 = *((_DWORD *)v3 + 8);
      v8 = *(unsigned __int8 *)(*((_DWORD *)v3 + 10) + 16);
      v9 = v7 + 239;
      if ( *(_BYTE *)(*((_DWORD *)v3 + 10) + 16) && (v7 | 2) == 2 )
      {
        if ( *((_BYTE *)v3 + 28) )
        {
          v10 = *((_DWORD *)v3 + 5) + *((_DWORD *)v3 + 6);
          if ( v10 - CTimer::m_snTimeInMilliseconds <= 11000 )
            v11 = (float)(v10 + 1000 - CTimer::m_snTimeInMilliseconds - 3000);
          else
            v11 = 9000.0;
        }
        else
        {
          v11 = -2000.0;
        }
        v19 = (int)(float)(v11 * (float)((float)(unsigned __int16)rand() * 0.000015259)) + 3000;
      }
      else if ( *((_BYTE *)v3 + 28) )
      {
        v8 = *((_DWORD *)v3 + 5) + *((_DWORD *)v3 + 6) + 1000;
        v19 = v8 - CTimer::m_snTimeInMilliseconds;
      }
      else
      {
        v19 = 1000;
      }
      v6 = CTask::operator new((CTask *)&dword_34, v8);
      CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(v6, 47, v9, 1082130432, -4.0, v19, 418, (int)"sunbathe", 1);
      return v6;
    case 0x1A3u:
    case 0x1A4u:
    case 0x1A5u:
    case 0x1A6u:
    case 0x1A7u:
    case 0x1A8u:
    case 0x1A9u:
    case 0x1AAu:
    case 0x1ABu:
      return v6;
    case 0x1ACu:
      v13 = *((_DWORD *)v3 + 8);
      v6 = CTask::operator new((CTask *)&dword_20, a2);
      v14 = 1;
      v23 = 428;
      v24 = "start sunbathing";
      v15 = v13 + 244;
      goto LABEL_19;
    case 0x1ADu:
      v16 = *((_DWORD *)v3 + 8);
      if ( v16 == 2 )
      {
        v17 = 257;
      }
      else
      {
        if ( v16 )
          goto LABEL_24;
        v17 = 254;
      }
      v3 = (CTaskComplexSunbathe *)(v17 + (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0));
LABEL_24:
      v6 = CTask::operator new((CTask *)&dword_20, a2);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v6, 48, (int)v3, 1082130432, 429, (int)"idle sunbathing", 1);
      break;
    case 0x1AEu:
      v18 = *((_DWORD *)v3 + 8);
      v6 = CTask::operator new((CTask *)&dword_20, a2);
      v14 = 0;
      v23 = 430;
      v24 = "stop sunbathing";
      v15 = v18 + 249;
LABEL_19:
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v6, 48, v15, 1082130432, v23, (int)v24, v14);
      return v6;
    default:
      if ( v4 == 202 )
      {
        if ( !*(_BYTE *)(*((_DWORD *)v3 + 10) + 16) )
        {
          a2 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
          v20 = *(float **)(a2 + 1424);
          v21 = v20 == 0;
          if ( v20 )
          {
            a2 = *(_DWORD *)(a2 + 1156) & 0x100;
            v21 = a2 == 0;
          }
          if ( v21
            || (float)((float)((float)(v20[18] * v20[18]) + (float)(v20[19] * v20[19])) + (float)(v20[20] * v20[20])) <= 0.04 )
          {
            goto LABEL_30;
          }
        }
        if ( *(_BYTE *)(*((_DWORD *)v3 + 9) + 16) )
        {
          v6 = CTask::operator new((CTask *)&off_18, a2);
          v12 = rand();
          CTaskSimple::CTaskSimple((CTaskSimple *)v6);
          *(_WORD *)(v6 + 16) = 0;
          *(_DWORD *)v6 = &off_665760;
          *(_DWORD *)(v6 + 8) = 0;
          *(_DWORD *)(v6 + 12) = 0;
          *(_DWORD *)(v6 + 20) = (int)(float)((float)((float)v12 * 0.000015259) * 4000.0) + 1000;
        }
        else
        {
LABEL_30:
          v6 = CTask::operator new((CTask *)&off_18, a2);
          CTaskSimple::CTaskSimple((CTaskSimple *)v6);
          *(_WORD *)(v6 + 16) = 0;
          *(_DWORD *)(v6 + 20) = 10000;
          *(_DWORD *)(v6 + 8) = 0;
          *(_DWORD *)(v6 + 12) = 0;
          *(_DWORD *)v6 = &off_665760;
        }
      }
      return v6;
  }
  return v6;
}


// ============================================================

// Address: 0x4ed8e4
// Original: _ZN20CTaskComplexSunbathe11CanSunbatheEv
// Demangled: CTaskComplexSunbathe::CanSunbathe(void)
unsigned int __fastcall CTaskComplexSunbathe::CanSunbathe(CTaskComplexSunbathe *this)
{
  if ( (unsigned __int8)(CClock::ms_nGameClockHours - 10) > 7u || (unsigned __int16)CWeather::NewWeatherType > 0x12u )
    return 0;
  else
    return (0x66C6Fu >> CWeather::NewWeatherType) & 1;
}


// ============================================================

// Address: 0x4ed920
// Original: _ZN20CTaskComplexSunbathe18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSunbathe::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexSunbathe::CreateFirstSubTask(CTaskComplexSunbathe *this, CPed *a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r2
  int v7; // r1
  CPed *v8; // r2
  unsigned int v9; // r1
  float *v10; // r0
  bool v11; // zf
  int v13; // r0
  int v14; // r5
  unsigned __int16 v15; // r0
  CTaskComplexSunbathe *v16; // r0
  unsigned int v17; // r1
  int v18; // r4
  int v19; // r0

  rand();
  if ( *((_DWORD *)a2 + 359) == 5 )
  {
    v5 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0) + 2;
  }
  else if ( CPopulation::IsSunbather((CPopulation *)*((__int16 *)a2 + 19), v4) == 1 )
  {
    v5 = rand() & 1;
  }
  else
  {
    v5 = 1;
  }
  v7 = *((_DWORD *)this + 9);
  *((_DWORD *)this + 8) = v5;
  if ( !*(_BYTE *)(v7 + 16) )
    CStreaming::RequestModel((CStreaming *)(*((_DWORD *)this + 11) + 25575), 8, v6);
  if ( !*(_BYTE *)(*((_DWORD *)this + 10) + 16) )
    CStreaming::RequestModel((CStreaming *)(*((_DWORD *)this + 12) + 25575), 8, v6);
  *((_BYTE *)this + 13) = 0;
  v8 = (CPed *)&elf_hash_bucket[38];
  v9 = *(int *)((char *)CWorld::Players + *(__int16 *)&CWorld::PlayerInFocus * (__int16)&elf_hash_bucket[38]);
  v10 = *(float **)(v9 + 1424);
  v11 = v10 == 0;
  if ( v10 )
  {
    v9 = *(_DWORD *)(v9 + 1156) & 0x100;
    v11 = v9 == 0;
  }
  if ( !v11
    && (float)((float)((float)(v10[18] * v10[18]) + (float)(v10[19] * v10[19])) + (float)(v10[20] * v10[20])) > 0.04 )
  {
    if ( !*(_BYTE *)(*((_DWORD *)this + 9) + 16) )
      return 0;
    goto LABEL_23;
  }
  if ( !*((_BYTE *)this + 12) )
  {
    if ( *(_BYTE *)(*((_DWORD *)this + 9) + 16) )
    {
LABEL_23:
      v14 = CTimer::m_snTimeInMilliseconds;
      v15 = rand();
      *((_DWORD *)this + 5) = v14;
      *((_BYTE *)this + 28) = 1;
      *((_BYTE *)this + 13) = 1;
      *((_DWORD *)this + 6) = (int)(float)((float)((float)v15 * 0.000015259) * 80000.0) + 20000;
      v16 = this;
      v17 = 418;
      return CTaskComplexSunbathe::CreateSubTask(v16, v17, v8);
    }
LABEL_24:
    v16 = this;
    v17 = 202;
    return CTaskComplexSunbathe::CreateSubTask(v16, v17, v8);
  }
  if ( *((_DWORD *)this + 13) || !*(_BYTE *)(*((_DWORD *)this + 10) + 16) )
    goto LABEL_24;
  v13 = *((_DWORD *)this + 2);
  if ( v13 && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 20))(v13) == 428 )
    return *((_DWORD *)this + 2);
  v18 = *((_DWORD *)this + 8);
  v19 = CTask::operator new((CTask *)&dword_20, v9);
  return CTaskSimpleRunAnim::CTaskSimpleRunAnim(v19, 48, v18 + 244, 1082130432, 428, (int)"start sunbathing", 1);
}


// ============================================================

// Address: 0x4edacc
// Original: _ZN20CTaskComplexSunbathe14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSunbathe::ControlSubTask(CPed *)
int __fastcall CTaskComplexSunbathe::ControlSubTask(CTaskComplexSunbathe *this, CPed *a2, int a3)
{
  int v6; // r0
  int v7; // r1
  float *v8; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r0
  __int64 v12; // kr00_8

  if ( *((_BYTE *)this + 16) )
    return 0;
  if ( !*((_BYTE *)this + 14) )
  {
    v6 = *((_DWORD *)this + 11);
    if ( *(_BYTE *)(*((_DWORD *)this + 9) + 16) )
    {
      CAnimManager::AddAnimBlockRef((CAnimManager *)v6, *(unsigned __int8 *)(*((_DWORD *)this + 9) + 16));
      *((_BYTE *)this + 14) = 1;
    }
    else
    {
      CStreaming::RequestModel((CStreaming *)(v6 + 25575), 8, a3);
    }
  }
  if ( !*((_BYTE *)this + 15) )
  {
    v7 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
    v8 = *(float **)(v7 + 1424);
    v9 = v8 == 0;
    if ( v8 )
      v9 = (*(_DWORD *)(v7 + 1156) & 0x100) == 0;
    if ( v9 || (float)((float)((float)(v8[18] * v8[18]) + (float)(v8[19] * v8[19])) + (float)(v8[20] * v8[20])) <= 0.04 )
    {
      v10 = *((_DWORD *)this + 12);
      if ( *(_BYTE *)(*((_DWORD *)this + 10) + 16) )
      {
        CAnimManager::AddAnimBlockRef((CAnimManager *)v10, *(unsigned __int8 *)(*((_DWORD *)this + 10) + 16));
        *((_BYTE *)this + 15) = 1;
      }
      else
      {
        CStreaming::RequestModel((CStreaming *)(v10 + 25575), 8, 404);
      }
    }
  }
  if ( *((_BYTE *)this + 13) )
  {
    v11 = *((_DWORD *)a2 + 291);
    *((_DWORD *)a2 + 333) |= 8u;
    *((_DWORD *)a2 + 291) = v11 | 0x100000;
  }
  if ( (unsigned __int8)(CClock::ms_nGameClockHours - 10) > 7u
    || (unsigned __int16)CWeather::NewWeatherType > 0x12u
    || ((1 << CWeather::NewWeatherType) & 0x66C6F) == 0 )
  {
    if ( *((_BYTE *)this + 28) )
    {
      v12 = *(_QWORD *)((char *)this + 20);
      *((_BYTE *)this + 29) = 1;
      *((_DWORD *)this + 6) = HIDWORD(v12) - CTimer::m_snTimeInMilliseconds + v12;
    }
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 418 )
      (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
        *((_DWORD *)this + 2),
        a2,
        0,
        0);
  }
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f357c
// Original: _ZNK20CTaskComplexSunbathe5CloneEv
// Demangled: CTaskComplexSunbathe::Clone(void)
CTaskComplexSunbathe *__fastcall CTaskComplexSunbathe::Clone(CTaskComplexSunbathe *this, unsigned int a2)
{
  CTaskComplexSunbathe *v3; // r0

  v3 = (CTaskComplexSunbathe *)CTask::operator new((CTask *)&dword_38, a2);
  return sub_19A6E8(v3, *((CObject **)this + 13), *((_BYTE *)this + 12));
}


// ============================================================

// Address: 0x4f3594
// Original: _ZNK20CTaskComplexSunbathe11GetTaskTypeEv
// Demangled: CTaskComplexSunbathe::GetTaskType(void)
int __fastcall CTaskComplexSunbathe::GetTaskType(CTaskComplexSunbathe *this)
{
  return 417;
}


// ============================================================
