
// Address: 0x18ac7c
// Original: j__ZN18CInterestingEvents21ScanForNearbyEntitiesEv
// Demangled: CInterestingEvents::ScanForNearbyEntities(void)
// attributes: thunk
int __fastcall CInterestingEvents::ScanForNearbyEntities(CInterestingEvents *this)
{
  return _ZN18CInterestingEvents21ScanForNearbyEntitiesEv(this);
}


// ============================================================

// Address: 0x18f378
// Original: j__ZN18CInterestingEventsC2Ev
// Demangled: CInterestingEvents::CInterestingEvents(void)
// attributes: thunk
void __fastcall CInterestingEvents::CInterestingEvents(CInterestingEvents *this)
{
  _ZN18CInterestingEventsC2Ev(this);
}


// ============================================================

// Address: 0x193408
// Original: j__ZN18CInterestingEvents26InvalidateNonVisibleEventsEv
// Demangled: CInterestingEvents::InvalidateNonVisibleEvents(void)
// attributes: thunk
int __fastcall CInterestingEvents::InvalidateNonVisibleEvents(CInterestingEvents *this)
{
  return _ZN18CInterestingEvents26InvalidateNonVisibleEventsEv(this);
}


// ============================================================

// Address: 0x193aec
// Original: j__ZN18CInterestingEvents19GetInterestingEventEv
// Demangled: CInterestingEvents::GetInterestingEvent(void)
// attributes: thunk
int __fastcall CInterestingEvents::GetInterestingEvent(CInterestingEvents *this)
{
  return _ZN18CInterestingEvents19GetInterestingEventEv(this);
}


// ============================================================

// Address: 0x199b14
// Original: j__ZN18CInterestingEvents3AddENS_5ETypeEP7CEntity
// Demangled: CInterestingEvents::Add(CInterestingEvents::EType,CEntity *)
// attributes: thunk
int CInterestingEvents::Add()
{
  return _ZN18CInterestingEvents3AddENS_5ETypeEP7CEntity();
}


// ============================================================

// Address: 0x19afd8
// Original: j__ZN18CInterestingEvents15InvalidateEventEPK17TInterestingEvent
// Demangled: CInterestingEvents::InvalidateEvent(TInterestingEvent const*)
// attributes: thunk
int CInterestingEvents::InvalidateEvent()
{
  return _ZN18CInterestingEvents15InvalidateEventEPK17TInterestingEvent();
}


// ============================================================

// Address: 0x4bd070
// Original: _ZN18CInterestingEvents3AddENS_5ETypeEP7CEntity
// Demangled: CInterestingEvents::Add(CInterestingEvents::EType,CEntity *)
CEntity *__fastcall CInterestingEvents::Add(CEntity *result, CEntity *a2, float *a3)
{
  CEntity *v4; // r5
  bool v5; // zf
  char *v6; // r0
  double v7; // d16
  float v8; // s0
  float v9; // s4
  float v10; // s8
  int PlayerPed; // r10
  float *v12; // r4
  int v13; // r0
  float *v14; // r1
  float v15; // s2
  float v16; // s6
  float v17; // s0
  int v18; // r0
  __int64 v19; // d16
  int v20; // r0
  float v21; // s2
  float v22; // s0
  float *v23; // r1
  float v24; // s6
  unsigned int v25; // r10
  CEntity **v26; // r4
  unsigned int v27; // lr
  char *v28; // r2
  unsigned int v29; // r12
  int v30; // r11
  int v31; // r6
  int v32; // r1
  _BOOL4 v33; // r2
  _BOOL4 v34; // r1
  bool v35; // cc
  bool v36; // [sp+14h] [bp-34h]
  int *v37; // [sp+18h] [bp-30h]
  double v39; // [sp+20h] [bp-28h] BYREF
  float v40; // [sp+28h] [bp-20h]

  v4 = result;
  v5 = a3 == 0;
  if ( a3 )
  {
    result = (CEntity *)(*((_BYTE *)result + 300) & 1);
    v5 = (*((_BYTE *)v4 + 300) & 1) == 0;
  }
  if ( !v5 )
  {
    v6 = (char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF;
    v7 = *(double *)(v6 + 740);
    v40 = *((float *)v6 + 187);
    v39 = v7;
    if ( *((_DWORD *)v4 + 76) == CTimer::m_FrameCounter )
    {
      v8 = *((float *)v4 + 78);
      v9 = *((float *)v4 + 79);
      v10 = *((float *)v4 + 80);
    }
    else
    {
      *((_DWORD *)v4 + 76) = CTimer::m_FrameCounter;
      PlayerPed = FindPlayerPed(-1);
      v12 = (float *)(PlayerPed + 4);
      v13 = *(_DWORD *)(PlayerPed + 20);
      v14 = (float *)(PlayerPed + 4);
      v15 = *((float *)&v39 + 1);
      if ( v13 )
        v14 = (float *)(v13 + 48);
      v16 = v14[1];
      v17 = *v14 - *(float *)&v39;
      *((_DWORD *)v4 + 84) = 0;
      *((float *)v4 + 82) = v17;
      *((float *)v4 + 83) = v16 - v15;
      if ( COERCE_FLOAT(CVector::NormaliseAndMag((CEntity *)((char *)v4 + 328))) == 0.0 )
      {
        v18 = *(_DWORD *)(PlayerPed + 20);
        v19 = *(_QWORD *)(v18 + 16);
        *((_DWORD *)v4 + 84) = *(_DWORD *)(v18 + 24);
        *((_QWORD *)v4 + 41) = v19;
      }
      v8 = *((float *)v4 + 78);
      v20 = *(_DWORD *)(PlayerPed + 20);
      if ( v20 )
        v12 = (float *)(v20 + 48);
      v9 = (float)(v8 * *((float *)v4 + 82)) + *v12;
      v10 = (float)(v8 * *((float *)v4 + 83)) + v12[1];
      v21 = (float)(v8 * *((float *)v4 + 84)) + v12[2];
      *((float *)v4 + 79) = v9;
      *((float *)v4 + 80) = v10;
      *((float *)v4 + 81) = v21;
    }
    result = (CEntity *)*((_DWORD *)a3 + 5);
    v22 = v8 * v8;
    v23 = (float *)((char *)result + 48);
    if ( !result )
      v23 = a3 + 1;
    v24 = v23[1];
    if ( (float)((float)((float)(v9 - *v23) * (float)(v9 - *v23)) + (float)((float)(v10 - v24) * (float)(v10 - v24))) <= v22 )
    {
      result = (CEntity *)(*((unsigned __int8 *)v4 + 300) << 30);
      if ( (*((_BYTE *)v4 + 300) & 2) == 0
        || (float)((float)((float)((float)(*v23 * *((float *)v4 + 82)) + (float)(v24 * *((float *)v4 + 83)))
                         + (float)(v23[2] * *((float *)v4 + 84)))
                 - (float)((float)((float)(*((float *)v4 + 82) * *(float *)&v39)
                                 + (float)(*((float *)v4 + 83) * *((float *)&v39 + 1)))
                         + (float)(*((float *)v4 + 84) * v40))) >= 0.0 )
      {
        v25 = 0;
        result = (CEntity *)CWorld::GetIsLineOfSightClear(
                              (CWorld *)&v39,
                              (const CVector *)v23,
                              (const CVector *)((char *)&stderr + 1),
                              0,
                              0,
                              0,
                              0,
                              (CColLine *)((char *)&stderr + 1),
                              0,
                              v36);
        if ( result == (CEntity *)((char *)&stderr + 1) )
        {
          v26 = (CEntity **)((char *)v4 + 8);
          v27 = *((char *)v4 + 340);
          v28 = (char *)v4 + 4 * (_DWORD)a2;
          v29 = *((_DWORD *)v28 + 46);
          v37 = (int *)(v28 + 184);
          v30 = CTimer::m_snTimeInMilliseconds;
          while ( 1 )
          {
            result = *v26;
            v31 = v25;
            if ( !*v26 )
              break;
            v32 = (int)*(v26 - 2);
            if ( !v32 )
              goto LABEL_29;
            v33 = CTimer::m_snTimeInMilliseconds <= (unsigned int)*(v26 - 1) + *((unsigned __int16 *)v4 + v32 + 63);
            v34 = *((unsigned __int8 *)a2 + (_DWORD)v4 + 96) < (unsigned int)*((unsigned __int8 *)v4 + v32 + 96);
            v35 = v27 > v25;
            if ( v27 != v25 )
              v35 = CTimer::m_snTimeInMilliseconds > v29;
            if ( v35 && (!v34 || !v33) )
            {
LABEL_29:
              CEntity::CleanUpOldReference(result, v26);
              goto LABEL_31;
            }
            v26 += 3;
            ++v25;
            if ( v31 > 6 )
              return result;
          }
          *v26 = 0;
          *(v26 - 2) = 0;
LABEL_31:
          *(v26 - 2) = a2;
          *(v26 - 1) = (CEntity *)v30;
          *v26 = (CEntity *)a3;
          CEntity::RegisterReference((CEntity *)a3, v26);
          if ( (*((_BYTE *)v4 + 300) & 8) != 0 )
            v30 += *((unsigned __int16 *)v4 + (_DWORD)a2 + 63) >> 1;
          result = (CEntity *)v37;
          *v37 = v30;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4c1b60
// Original: _ZN18CInterestingEventsC2Ev
// Demangled: CInterestingEvents::CInterestingEvents(void)
void __fastcall CInterestingEvents::CInterestingEvents(CInterestingEvents *this)
{
  int8x8_t v1; // d20
  char v2; // r3
  int v3; // r2
  int v4; // r3
  unsigned __int64 v5; // d19
  unsigned int v6; // d18.s[0]
  char *v7; // r6

  *((_BYTE *)this + 340) = -1;
  *((_DWORD *)this + 77) = 0;
  v2 = *((_BYTE *)this + 300) & 0xF0 | 0xE;
  *((_DWORD *)this + 78) = 1106247680;
  *((_BYTE *)this + 300) = v2;
  v3 = CTimer::m_FrameCounter;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 76) = v3 - 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v4 = 0;
  if ( ((char *)this + 125 <= (char *)this + 184 || (char *)this + 96 >= (char *)this + 300)
    && ((char *)this + 125 <= (char *)this + 126 || (char *)this + 96 >= (char *)this + 184) )
  {
    v5 = vdup_n_s16(0x7D0u).n64_u64[0];
    v4 = 28;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *(_QWORD *)((char *)this + 126) = v5;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    v6 = (unsigned int)vuzp_s8((int8x8_t)0x5000500050005LL, v1);
    *((_DWORD *)this + 24) = v6;
    *(_QWORD *)((char *)this + 134) = v5;
    *((_DWORD *)this + 25) = v6;
    *((_DWORD *)this + 26) = v6;
    *((_DWORD *)this + 27) = v6;
    *((_DWORD *)this + 28) = v6;
    *((_DWORD *)this + 29) = v6;
    *((_DWORD *)this + 30) = v6;
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *(_QWORD *)((char *)this + 142) = v5;
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    *(_QWORD *)((char *)this + 150) = v5;
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    *(_QWORD *)((char *)this + 158) = v5;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
    *(_QWORD *)((char *)this + 166) = v5;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    *(_QWORD *)((char *)this + 174) = v5;
  }
  do
  {
    *((_DWORD *)this + v4 + 46) = 0;
    *((_WORD *)this + v4 + 63) = 2000;
    v7 = (char *)this + v4++;
    v7[96] = 5;
  }
  while ( v4 != 29 );
  *((_BYTE *)this + 122) = 9;
  *(_WORD *)((char *)this + 123) = 2570;
  *(_DWORD *)((char *)this + 118) = 151587081;
  *((_WORD *)this + 58) = 2055;
  *((_DWORD *)this + 25) = 33686018;
  *((_DWORD *)this + 26) = 100992004;
  *((_DWORD *)this + 27) = 151324166;
  *((_DWORD *)this + 28) = 101124105;
  *((_BYTE *)this + 99) = 1;
  *(_WORD *)((char *)this + 97) = 257;
  *((_DWORD *)this + 45) = 262148000;
  *((_DWORD *)this + 44) = 524294000;
  *((_QWORD *)this + 20) = 0x1770138817701770LL;
  *((_QWORD *)this + 21) = 1688875630395400000LL;
  *((_QWORD *)this + 18) = 0x1F40177017700BB8LL;
  *((_QWORD *)this + 19) = 0x1770177017701388LL;
  *((_QWORD *)this + 16) = 0xBB8138813881388LL;
  *((_QWORD *)this + 17) = 0xBB80BB80BB80BB8LL;
}


// ============================================================

// Address: 0x4c1db4
// Original: _ZN18CInterestingEventsD2Ev
// Demangled: CInterestingEvents::~CInterestingEvents()
void __fastcall CInterestingEvents::~CInterestingEvents(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  CEntity *v4; // r0
  CEntity *v5; // r0
  CEntity *v6; // r0
  CEntity *v7; // r0
  CEntity *v8; // r0
  CEntity *v9; // r0
  CEntity *v10; // r0

  v3 = this + 2;
  v2 = this[2];
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, v3);
    *v3 = 0;
  }
  v4 = this[5];
  if ( v4 )
  {
    CEntity::CleanUpOldReference(v4, this + 5);
    this[5] = 0;
  }
  v5 = this[8];
  if ( v5 )
  {
    CEntity::CleanUpOldReference(v5, this + 8);
    this[8] = 0;
  }
  v6 = this[11];
  if ( v6 )
  {
    CEntity::CleanUpOldReference(v6, this + 11);
    this[11] = 0;
  }
  v7 = this[14];
  if ( v7 )
  {
    CEntity::CleanUpOldReference(v7, this + 14);
    this[14] = 0;
  }
  v8 = this[17];
  if ( v8 )
  {
    CEntity::CleanUpOldReference(v8, this + 17);
    this[17] = 0;
  }
  v9 = this[20];
  if ( v9 )
  {
    CEntity::CleanUpOldReference(v9, this + 20);
    this[20] = 0;
  }
  v10 = this[23];
  if ( v10 )
  {
    CEntity::CleanUpOldReference(v10, this + 23);
    this[23] = 0;
  }
}


// ============================================================

// Address: 0x4c1e50
// Original: _ZN18CInterestingEvents21ScanForNearbyEntitiesEv
// Demangled: CInterestingEvents::ScanForNearbyEntities(void)
int __fastcall CInterestingEvents::ScanForNearbyEntities(CInterestingEvents *this)
{
  int result; // r0
  int PlayerPed; // r8
  float v4; // s16
  float v5; // s20
  float v6; // s18
  float *v7; // r4
  int v8; // r0
  float *v9; // r3
  float v10; // s2
  float *v11; // r0
  float v12; // s6
  float v13; // s0
  int v14; // r0
  __int64 v15; // d16
  int v16; // r0
  float v17; // s0
  float v18; // s26
  float v19; // r5
  float v20; // s0
  float v21; // s16
  float v22; // r0
  int v23; // r2
  int v24; // r1
  int v25; // r1
  int v26; // r2
  __int16 v27; // r0
  int v28; // r8
  __int64 *v29; // r5
  __int64 v30; // kr00_8
  int v31; // r2
  int v32; // r0
  __int64 *v33; // r5
  __int64 v34; // kr08_8
  char v35; // r1
  int v36; // r0
  bool v37; // zf
  bool v38; // cc
  int v39; // [sp+0h] [bp-78h]
  int v40; // [sp+4h] [bp-74h]
  int v41; // [sp+8h] [bp-70h]
  int v42; // [sp+18h] [bp-60h]
  int v43; // [sp+20h] [bp-58h]

  result = (unsigned __int8)byte_9EFB04 << 31;
  if ( result )
  {
    result = CTimer::m_snTimeInMilliseconds;
    if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 77)) >= 0x1F4 )
    {
      *((_DWORD *)this + 77) = CTimer::m_snTimeInMilliseconds;
      PlayerPed = FindPlayerPed(-1);
      if ( *((_DWORD *)this + 76) == CTimer::m_FrameCounter )
      {
        v4 = *((float *)this + 78);
        v5 = *((float *)this + 79);
        v6 = *((float *)this + 80);
      }
      else
      {
        v7 = (float *)(PlayerPed + 4);
        *((_DWORD *)this + 76) = CTimer::m_FrameCounter;
        v8 = *(_DWORD *)(PlayerPed + 20);
        v9 = (float *)(PlayerPed + 4);
        if ( v8 )
          v9 = (float *)(v8 + 48);
        v10 = v9[1];
        v11 = (float *)((char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF);
        v12 = v11[186];
        v13 = *v9 - v11[185];
        *((_DWORD *)this + 84) = 0;
        *((float *)this + 82) = v13;
        *((float *)this + 83) = v10 - v12;
        if ( COERCE_FLOAT(CVector::NormaliseAndMag((CInterestingEvents *)((char *)this + 328))) == 0.0 )
        {
          v14 = *(_DWORD *)(PlayerPed + 20);
          v15 = *(_QWORD *)(v14 + 16);
          *((_DWORD *)this + 84) = *(_DWORD *)(v14 + 24);
          *((_QWORD *)this + 41) = v15;
        }
        v4 = *((float *)this + 78);
        v16 = *(_DWORD *)(PlayerPed + 20);
        if ( v16 )
          v7 = (float *)(v16 + 48);
        v5 = (float)(v4 * *((float *)this + 82)) + *v7;
        v6 = (float)(v4 * *((float *)this + 83)) + v7[1];
        v17 = (float)(v4 * *((float *)this + 84)) + v7[2];
        *((float *)this + 79) = v5;
        *((float *)this + 80) = v6;
        *((float *)this + 81) = v17;
      }
      v18 = floorf((float)((float)(v5 - v4) / 50.0) + 60.0);
      v19 = floorf((float)((float)(v6 - v4) / 50.0) + 60.0);
      v20 = v6 + v4;
      v21 = floorf((float)((float)(v5 + v4) / 50.0) + 60.0);
      v22 = floorf((float)(v20 / 50.0) + 60.0);
      v23 = 119;
      v24 = (int)v22;
      if ( (int)v22 >= 119 )
        v24 = 119;
      v39 = v24;
      if ( (int)v21 < 119 )
        v23 = (int)v21;
      v25 = (int)v19;
      v43 = v23;
      v26 = 0;
      if ( (int)v19 <= 0 )
        v25 = 0;
      v41 = v25;
      if ( (int)v18 > 0 )
        v26 = (int)v18;
      v40 = v26;
      if ( (unsigned __int16)CWorld::ms_nCurrentScanCode == 0xFFFF )
      {
        CWorld::ClearScanCodes((CWorld *)((char *)&elf_hash_bucket[16320] + 3));
        v27 = 1;
      }
      else
      {
        v27 = CWorld::ms_nCurrentScanCode + 1;
      }
      CWorld::ms_nCurrentScanCode = v27;
      *(_WORD *)(PlayerPed + 48) = v27;
      result = v39;
      if ( v41 <= v39 )
      {
        do
        {
          if ( v40 <= v43 )
          {
            v28 = v40;
            v42 = (unsigned __int8)(16 * v41);
            do
            {
              v29 = (__int64 *)CWorld::ms_aRepeatSectors[3 * (v28 & 0xF | v42) + 1];
              while ( v29 )
              {
                v30 = *v29;
                v29 = (__int64 *)*((_DWORD *)v29 + 1);
                if ( *(unsigned __int16 *)(v30 + 48) != (unsigned __int16)CWorld::ms_nCurrentScanCode )
                {
                  v31 = *(_DWORD *)(v30 + 1100);
                  *(_WORD *)(v30 + 48) = CWorld::ms_nCurrentScanCode;
                  if ( v31 != 55 )
                  {
                    v32 = *(_DWORD *)(v30 + 1436);
                    if ( v32 == 6 || v32 == 22 || v32 == 20 || (unsigned int)(v32 - 7) <= 9 )
                      CInterestingEvents::Add();
                  }
                }
              }
              v33 = (__int64 *)CWorld::ms_aRepeatSectors[3 * (v28 & 0xF | v42)];
              while ( v33 )
              {
                v34 = *v33;
                v33 = (__int64 *)*((_DWORD *)v33 + 1);
                if ( *(unsigned __int16 *)(v34 + 48) != (unsigned __int16)CWorld::ms_nCurrentScanCode )
                {
                  v35 = *(_BYTE *)(v34 + 71);
                  *(_WORD *)(v34 + 48) = CWorld::ms_nCurrentScanCode;
                  if ( (v35 & 0x20) == 0 )
                  {
                    if ( *(_DWORD *)(v34 + 1124) )
                    {
                      v36 = *(unsigned __int8 *)(v34 + 957);
                      v37 = v36 == 0;
                      if ( *(_BYTE *)(v34 + 957) )
                        v37 = v36 == 6;
                      if ( !v37 )
                        CInterestingEvents::Add();
                    }
                  }
                }
              }
              v38 = v28++ < v43;
            }
            while ( v38 );
          }
          v38 = v41 < v39;
          result = ++v41;
        }
        while ( v38 );
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4c21e4
// Original: _ZN18CInterestingEvents19GetInterestingEventEv
// Demangled: CInterestingEvents::GetInterestingEvent(void)
_DWORD *__fastcall CInterestingEvents::GetInterestingEvent(CInterestingEvents *this)
{
  unsigned int v2; // r8
  int v3; // r0
  _DWORD *result; // r0
  _DWORD *v5; // r6
  int v6; // r10
  int v7; // r5
  int v8; // r11
  int v9; // r0
  int v10; // r0

  v2 = CTimer::m_snTimeInMilliseconds;
  if ( (*((_BYTE *)this + 300) & 4) == 0
    || (v3 = *((char *)this + 340), v3 == -1)
    || (result = (_DWORD *)((char *)this + 12 * v3), !result[2])
    || CTimer::m_snTimeInMilliseconds >= (unsigned int)*((unsigned __int16 *)this + *result + 63) + result[1] )
  {
    v5 = (_DWORD *)((char *)this + 4);
    v6 = -1;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( !v5[1] )
        goto LABEL_12;
      v9 = *(v5 - 1);
      if ( v2 >= *v5 + (unsigned int)*((unsigned __int16 *)this + v9 + 63) )
        goto LABEL_12;
      v10 = *((unsigned __int8 *)this + v9 + 96);
      if ( v8 < v10 )
        goto LABEL_11;
      if ( (rand() & 0xFF80u) <= 0x7F )
        break;
LABEL_12:
      ++v7;
      v5 += 3;
      if ( v7 == 8 )
      {
        *((_BYTE *)this + 340) = v6;
        result = (_DWORD *)((char *)this + 12 * v6);
        if ( v6 == -1 )
          return 0;
        return result;
      }
    }
    v10 = *((unsigned __int8 *)this + *(v5 - 1) + 96);
LABEL_11:
    v8 = v10;
    v6 = v7;
    goto LABEL_12;
  }
  return result;
}


// ============================================================

// Address: 0x4c229c
// Original: _ZN18CInterestingEvents15InvalidateEventEPK17TInterestingEvent
// Demangled: CInterestingEvents::InvalidateEvent(TInterestingEvent const*)
int __fastcall CInterestingEvents::InvalidateEvent(int a1, int a2)
{
  int result; // r0
  int v4; // r6
  int v5; // r5
  CEntity *v6; // r0
  CEntity **v7; // r5
  CEntity *v8; // t1

  if ( a1 == a2 )
  {
    v4 = 0;
  }
  else if ( a1 + 12 == a2 )
  {
    v4 = 1;
  }
  else if ( a1 + 24 == a2 )
  {
    v4 = 2;
  }
  else if ( a1 + 36 == a2 )
  {
    v4 = 3;
  }
  else if ( a1 + 48 == a2 )
  {
    v4 = 4;
  }
  else if ( a1 + 60 == a2 )
  {
    v4 = 5;
  }
  else if ( a1 + 72 == a2 )
  {
    v4 = 6;
  }
  else
  {
    result = a1 + 84;
    if ( a1 + 84 != a2 )
      return result;
    v4 = 7;
  }
  v5 = a1 + 12 * v4;
  v8 = *(CEntity **)(v5 + 8);
  v7 = (CEntity **)(v5 + 8);
  v6 = v8;
  *(v7 - 1) = 0;
  if ( v8 )
  {
    CEntity::CleanUpOldReference(v6, v7);
    *v7 = 0;
  }
  result = *(char *)(a1 + 340);
  if ( v4 == result )
  {
    result = 255;
    *(_BYTE *)(a1 + 340) = -1;
  }
  return result;
}


// ============================================================

// Address: 0x4c2334
// Original: _ZN18CInterestingEvents26InvalidateNonVisibleEventsEv
// Demangled: CInterestingEvents::InvalidateNonVisibleEvents(void)
CEntity *__fastcall CInterestingEvents::InvalidateNonVisibleEvents(CInterestingEvents *this)
{
  CEntity **v2; // r5
  CEntity *v3; // r4
  char *v4; // r0
  double v5; // d16
  CEntity *result; // r0
  int v7; // r2
  const CVector *v8; // r1
  CEntity *v9; // r0
  bool v10; // [sp+14h] [bp-2Ch]
  double v11; // [sp+18h] [bp-28h] BYREF
  int v12; // [sp+20h] [bp-20h]

  v2 = (CEntity **)((char *)this + 8);
  v3 = 0;
  v4 = (char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF;
  v5 = *(double *)(v4 + 740);
  v12 = *((_DWORD *)v4 + 187);
  v11 = v5;
  do
  {
    result = *v2;
    if ( *v2 )
    {
      v7 = *((_DWORD *)result + 5);
      v8 = (const CVector *)(v7 + 48);
      if ( !v7 )
        v8 = (CEntity *)((char *)result + 4);
      result = (CEntity *)CWorld::GetIsLineOfSightClear(
                            (CWorld *)&v11,
                            v8,
                            (const CVector *)((char *)&stderr + 1),
                            0,
                            0,
                            0,
                            0,
                            (CColLine *)((char *)&stderr + 1),
                            0,
                            v10);
      if ( !result )
      {
        v9 = *v2;
        *(v2 - 1) = 0;
        if ( v9 )
          CEntity::CleanUpOldReference(v9, v2);
        *v2 = 0;
        result = (CEntity *)*((char *)this + 340);
        if ( v3 == result )
          *((_BYTE *)this + 340) = -1;
      }
    }
    v3 = (CEntity *)((char *)v3 + 1);
    v2 += 3;
  }
  while ( v3 != (CEntity *)byte_8 );
  return result;
}


// ============================================================
