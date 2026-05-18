
// Address: 0x18d5d8
// Original: j__ZN13CPedAttractor16BroadcastArrivalEP4CPed
// Demangled: CPedAttractor::BroadcastArrival(CPed *)
// attributes: thunk
int __fastcall CPedAttractor::BroadcastArrival(CPedAttractor *this, CPed *a2)
{
  return _ZN13CPedAttractor16BroadcastArrivalEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18fdbc
// Original: j__ZN13CPedAttractorC2EP9C2dEffectP7CEntityiifffffff
// Demangled: CPedAttractor::CPedAttractor(C2dEffect *,CEntity *,int,int,float,float,float,float,float,float,float)
// attributes: thunk
void __fastcall CPedAttractor::CPedAttractor(
        CPedAttractor *this,
        C2dEffect *a2,
        CEntity *a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12)
{
  _ZN13CPedAttractorC2EP9C2dEffectP7CEntityiifffffff(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}


// ============================================================

// Address: 0x196944
// Original: j__ZN13CPedAttractor11RegisterPedEP4CPed
// Demangled: CPedAttractor::RegisterPed(CPed *)
// attributes: thunk
int __fastcall CPedAttractor::RegisterPed(CPedAttractor *this, CPed *a2)
{
  return _ZN13CPedAttractor11RegisterPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19ccc0
// Original: j__ZN13CPedAttractor13SetTaskForPedEP4CPedP5CTask
// Demangled: CPedAttractor::SetTaskForPed(CPed *,CTask *)
// attributes: thunk
int __fastcall CPedAttractor::SetTaskForPed(CPedAttractor *this, CPed *a2, CTask *a3)
{
  return _ZN13CPedAttractor13SetTaskForPedEP4CPedP5CTask(this, a2, a3);
}


// ============================================================

// Address: 0x19dc40
// Original: j__ZNK13CPedAttractor13GetTaskForPedEP4CPed
// Demangled: CPedAttractor::GetTaskForPed(CPed *)
// attributes: thunk
int __fastcall CPedAttractor::GetTaskForPed(CPedAttractor *this, CPed *a2)
{
  return _ZNK13CPedAttractor13GetTaskForPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1a0830
// Original: j__ZNK13CPedAttractor14GetHeadOfQueueEv
// Demangled: CPedAttractor::GetHeadOfQueue(void)
// attributes: thunk
int __fastcall CPedAttractor::GetHeadOfQueue(CPedAttractor *this)
{
  return _ZNK13CPedAttractor14GetHeadOfQueueEv(this);
}


// ============================================================

// Address: 0x4a8544
// Original: _ZN13CPedAttractorC2EP9C2dEffectP7CEntityiifffffff
// Demangled: CPedAttractor::CPedAttractor(C2dEffect *,CEntity *,int,int,float,float,float,float,float,float,float)
void __fastcall CPedAttractor::CPedAttractor(
        CPedAttractor *this,
        C2dEffect *a2,
        CEntity *a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12)
{
  char *v14; // r9
  char *v15; // r10
  CVector *v16; // r8
  CMatrix ***v17; // r6
  CMatrix **v18; // r6
  double v19; // d16
  double v20; // d16
  double v21; // d16
  double v22; // d16
  _DWORD v23[18]; // [sp+0h] [bp-80h] BYREF
  double v24; // [sp+48h] [bp-38h]
  int v25; // [sp+50h] [bp-30h]
  double v26; // [sp+58h] [bp-28h] BYREF
  int v27; // [sp+60h] [bp-20h]

  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = a5;
  v14 = (char *)this + 104;
  v15 = (char *)this + 92;
  v16 = (CPedAttractor *)((char *)this + 80);
  *((_DWORD *)this + 29) = a4;
  *((float *)this + 13) = a6;
  *((float *)this + 14) = a7;
  *((float *)this + 15) = a8;
  *((float *)this + 16) = a9;
  *((float *)this + 17) = a10;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((float *)this + 18) = a11;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *((float *)this + 19) = a12;
  *(_DWORD *)this = &off_668DF8;
  *((_DWORD *)this + 2) = a3;
  v17 = (CMatrix ***)((char *)this + 8);
  if ( a3 )
  {
    CEntity::RegisterReference(a3, (CEntity **)this + 2);
    v18 = *v17;
  }
  else
  {
    v18 = 0;
  }
  v23[16] = 0;
  v23[17] = 0;
  if ( v18 )
  {
    if ( !v18[5] )
    {
      CPlaceable::AllocateMatrix((CPlaceable *)v18);
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v18 + 1), v18[5]);
    }
    CMatrix::operator=();
  }
  else
  {
    CMatrix::SetScale((CMatrix *)v23, 1.0);
  }
  CVector::FromMultiply(v16, (const CMatrix *)v23, a2);
  v19 = *((double *)a2 + 2);
  v25 = *((_DWORD *)a2 + 6);
  v24 = v19;
  Multiply3x3((const CMatrix *)&v26, (const CVector *)v23);
  v20 = v26;
  *((_DWORD *)v15 + 2) = v27;
  *(double *)v15 = v20;
  v21 = *(double *)((char *)a2 + 28);
  v25 = *((_DWORD *)a2 + 9);
  v24 = v21;
  Multiply3x3((const CMatrix *)&v26, (const CVector *)v23);
  v22 = v26;
  *((_DWORD *)v14 + 2) = v27;
  *(double *)v14 = v22;
  sub_5E6BC0((char *)this + 120, (const char *)(*((_DWORD *)this + 1) + 56));
  CMatrix::~CMatrix((CMatrix *)v23);
}


// ============================================================

// Address: 0x4a86e2
// Original: _ZNK13CPedAttractor15ComputeFreeSlotEv
// Demangled: CPedAttractor::ComputeFreeSlot(void)
int __fastcall CPedAttractor::ComputeFreeSlot(CPedAttractor *this)
{
  return *((_DWORD *)this + 7);
}


// ============================================================

// Address: 0x4a86e6
// Original: _ZNK13CPedAttractor21GetNoOfRegisteredPedsEv
// Demangled: CPedAttractor::GetNoOfRegisteredPeds(void)
int __fastcall CPedAttractor::GetNoOfRegisteredPeds(CPedAttractor *this)
{
  return *((_DWORD *)this + 7) + *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x4a86f0
// Original: _ZNK13CPedAttractor13GetTaskForPedEP4CPed
// Demangled: CPedAttractor::GetTaskForPed(CPed *)
int __fastcall CPedAttractor::GetTaskForPed(CPedAttractor *this, CPed *a2)
{
  int v2; // r2
  _BYTE *v3; // r5
  int v4; // r0
  int v6; // r4
  size_t v7; // r2
  unsigned int v8; // r3
  _DWORD *v9; // r0

  v2 = *((_DWORD *)this + 10);
  if ( v2 < 1 )
    return 0;
  v3 = (_BYTE *)(*((_DWORD *)this + 11) + 16);
  v4 = 0;
  while ( *((CPed **)v3 - 4) != a2 )
  {
    ++v4;
    v3 += 20;
    if ( v4 >= v2 )
      return 0;
  }
  v6 = *((_DWORD *)v3 - 3);
  if ( !*v3 && dword_9EE2C0 )
  {
    v7 = 4 * dword_9EE2C0 - 4;
    v8 = 0;
    v9 = (_DWORD *)dword_9EE2C4;
    while ( *v9 != v6 )
    {
      ++v8;
      ++v9;
      v7 -= 4;
      if ( v8 >= dword_9EE2C0 )
        goto LABEL_7;
    }
    memmove_1(v9, v9 + 1, v7);
    --dword_9EE2C0;
  }
LABEL_7:
  *v3 = 1;
  return v6;
}


// ============================================================

// Address: 0x4a877c
// Original: _ZN13CPedAttractor13SetTaskForPedEP4CPedP5CTask
// Demangled: CPedAttractor::SetTaskForPed(CPed *,CTask *)
int *__fastcall CPedAttractor::SetTaskForPed(CPedAttractor *this, CPed *a2, CTask *a3)
{
  int v5; // r5
  CPed **v7; // r4
  int v8; // r0
  unsigned int v9; // r11
  _DWORD *v10; // r0
  void *v11; // r9
  _DWORD *v12; // r4
  char *v13; // r1
  int v14; // r6
  unsigned int v15; // r9
  void *v16; // r5
  void *v17; // r4
  int *result; // r0
  int v19; // r0
  unsigned int v20; // r6
  size_t v21; // r2
  _DWORD *v22; // r3
  unsigned int v23; // r9
  void *v24; // r4
  __int16 v25; // [sp+1h] [bp-1Fh]
  char v26; // [sp+3h] [bp-1Dh]

  v5 = *((_DWORD *)this + 10);
  if ( v5 < 1 )
  {
LABEL_5:
    if ( *((_DWORD *)this + 9) >= (unsigned int)(v5 + 1) )
    {
      v12 = (_DWORD *)*((_DWORD *)this + 11);
    }
    else
    {
      v9 = 4 * (v5 + 1) / 3u + 3;
      v10 = malloc(20 * v9);
      v11 = (void *)*((_DWORD *)this + 11);
      v12 = v10;
      if ( v11 )
      {
        memmove_1(v10, *((const void **)this + 11), 20 * v5);
        free(v11);
        v5 = *((_DWORD *)this + 10);
      }
      *((_DWORD *)this + 11) = v12;
      *((_DWORD *)this + 9) = v9;
    }
    v12[5 * v5] = a2;
    v13 = (char *)&v12[5 * v5];
    *((_DWORD *)v13 + 1) = a3;
    *((_DWORD *)v13 + 2) = -1;
    *((_DWORD *)v13 + 3) = 0;
    v13[16] = 0;
    v13[19] = v26;
    *(_WORD *)(v13 + 17) = v25;
    ++*((_DWORD *)this + 10);
    v14 = dword_9EE2C0;
    if ( CPedAttractor::ms_tasks >= (unsigned int)(dword_9EE2C0 + 1) )
    {
      v16 = (void *)dword_9EE2C4;
    }
    else
    {
      v15 = 4 * (dword_9EE2C0 + 1) / 3u + 3;
      v16 = malloc(4 * v15);
      v17 = (void *)dword_9EE2C4;
      if ( dword_9EE2C4 )
      {
        memmove_1(v16, (const void *)dword_9EE2C4, 4 * v14);
        free(v17);
        v14 = dword_9EE2C0;
      }
      dword_9EE2C4 = (int)v16;
      CPedAttractor::ms_tasks = v15;
    }
  }
  else
  {
    v7 = (CPed **)(*((_DWORD *)this + 11) + 16);
    v8 = 0;
    while ( *(v7 - 4) != a2 )
    {
      ++v8;
      v7 += 5;
      if ( v8 >= v5 )
        goto LABEL_5;
    }
    if ( !*(_BYTE *)v7 )
    {
      v19 = (int)*(v7 - 3);
      if ( v19 )
      {
        if ( !dword_9EE2C0 )
          goto LABEL_25;
        v20 = 0;
        v21 = 4 * dword_9EE2C0 - 4;
        v22 = (_DWORD *)dword_9EE2C4;
        while ( *v22 != v19 )
        {
          ++v20;
          ++v22;
          v21 -= 4;
          if ( v20 >= dword_9EE2C0 )
            goto LABEL_24;
        }
        memmove_1(v22, v22 + 1, v21);
        --dword_9EE2C0;
        v19 = (int)*(v7 - 3);
LABEL_24:
        if ( v19 )
LABEL_25:
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 4))(v19);
      }
    }
    *(_BYTE *)v7 = 0;
    *(v7 - 3) = a3;
    v14 = dword_9EE2C0;
    if ( CPedAttractor::ms_tasks >= (unsigned int)(dword_9EE2C0 + 1) )
    {
      v16 = (void *)dword_9EE2C4;
    }
    else
    {
      v23 = 4 * (dword_9EE2C0 + 1) / 3u + 3;
      v16 = malloc(4 * v23);
      v24 = (void *)dword_9EE2C4;
      if ( dword_9EE2C4 )
      {
        memmove_1(v16, (const void *)dword_9EE2C4, 4 * v14);
        free(v24);
        v14 = dword_9EE2C0;
      }
      dword_9EE2C4 = (int)v16;
      CPedAttractor::ms_tasks = v23;
    }
  }
  result = &CPedAttractor::ms_tasks;
  *((_DWORD *)v16 + v14) = a3;
  ++dword_9EE2C0;
  return result;
}


// ============================================================

// Address: 0x4a89cc
// Original: _ZNK13CPedAttractor19IsRegisteredWithPedEPK4CPed
// Demangled: CPedAttractor::IsRegisteredWithPed(CPed const*)
int __fastcall CPedAttractor::IsRegisteredWithPed(CPedAttractor *this, const CPed *a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // r12
  int v6; // r0
  int v7; // r3

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 1 )
  {
LABEL_5:
    v4 = *((_DWORD *)this + 7);
    if ( v4 < 1 )
      return 0;
    v6 = *((_DWORD *)this + 8);
    v7 = 0;
    while ( *(const CPed **)(v6 + 4 * v7) != a2 )
    {
      if ( ++v7 >= v4 )
        return 0;
    }
  }
  else
  {
    v3 = 0;
    while ( *(const CPed **)(*((_DWORD *)this + 5) + 4 * v3) != a2 )
    {
      if ( ++v3 >= v2 )
        goto LABEL_5;
    }
  }
  return 1;
}


// ============================================================

// Address: 0x4a8a16
// Original: _ZN13CPedAttractor11RegisterPedEP4CPed
// Demangled: CPedAttractor::RegisterPed(CPed *)
int __fastcall CPedAttractor::RegisterPed(CPedAttractor *this, CPed *a2)
{
  unsigned int v4; // r6
  size_t v5; // r2
  CPed **v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r10
  _DWORD *v9; // r0
  void *v10; // r8
  _DWORD *v11; // r9
  int v13; // r9
  float v14; // s16
  unsigned int v15; // r1
  CTaskComplexGoToAttractor *v16; // r6
  float v17; // [sp+10h] [bp-30h] BYREF
  _BYTE v18[44]; // [sp+14h] [bp-2Ch] BYREF

  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    v5 = 4 * v4 - 4;
    v6 = (CPed **)*((_DWORD *)this + 5);
    v7 = 0;
    while ( *v6 != a2 )
    {
      ++v7;
      ++v6;
      v5 -= 4;
      if ( v7 >= v4 )
        goto LABEL_5;
    }
    memmove_1(v6, v6 + 1, v5);
    --*((_DWORD *)this + 4);
    return 0;
  }
  else
  {
LABEL_5:
    if ( (signed int)(*((_DWORD *)this + 7) + v4) >= *((_DWORD *)this + 12) )
    {
      return 0;
    }
    else
    {
      if ( *((_DWORD *)this + 3) >= v4 + 1 )
      {
        v11 = (_DWORD *)*((_DWORD *)this + 5);
      }
      else
      {
        v8 = 4 * (v4 + 1) / 3 + 3;
        v9 = malloc(4 * v8);
        v10 = (void *)*((_DWORD *)this + 5);
        v11 = v9;
        if ( v10 )
        {
          memmove_1(v9, *((const void **)this + 5), 4 * v4);
          free(v10);
          v4 = *((_DWORD *)this + 4);
        }
        *((_DWORD *)this + 5) = v11;
        *((_DWORD *)this + 3) = v8;
      }
      v11[v4] = a2;
      v13 = *((_DWORD *)this + 7);
      ++*((_DWORD *)this + 4);
      (*(void (__fastcall **)(CPedAttractor *, int, _BYTE *))(*(_DWORD *)this + 16))(this, v13, v18);
      (*(void (__fastcall **)(CPedAttractor *, int, float *))(*(_DWORD *)this + 20))(this, v13, &v17);
      v14 = *((float *)this + 14);
      v16 = (CTaskComplexGoToAttractor *)CTask::operator new((CTask *)&word_2C, v15);
      CTaskComplexGoToAttractor::CTaskComplexGoToAttractor(
        v16,
        this,
        (const CVector *)v18,
        v17,
        v14,
        v13,
        *((_DWORD *)this + 29));
      CPedAttractor::SetTaskForPed(this, a2, v16);
      return 1;
    }
  }
}


// ============================================================

// Address: 0x4a8b1a
// Original: _ZNK13CPedAttractor18ComputeAttractTimeEibRf
// Demangled: CPedAttractor::ComputeAttractTime(int,bool,float &)
float __fastcall CPedAttractor::ComputeAttractTime(CPedAttractor *this, int a2, int a3, float *a4)
{
  float *v4; // r1
  float result; // r0

  v4 = (float *)((char *)this + 56);
  if ( a3 )
    v4 = (float *)((char *)this + 60);
  result = *v4;
  *a4 = *v4;
  return result;
}


// ============================================================

// Address: 0x4a8b2c
// Original: _ZNK13CPedAttractor17ComputeAttractPosEiR7CVector
// Demangled: CPedAttractor::ComputeAttractPos(int,CVector &)
int __fastcall CPedAttractor::ComputeAttractPos(CPedAttractor *this, int a2, CVector *a3)
{
  int result; // r0
  float v6; // s12
  float v7; // s4
  float v8; // s0
  float v9; // s16
  float v10; // s16

  result = *((_DWORD *)this + 1);
  if ( result )
  {
    v6 = *((float *)this + 13);
    v7 = *((float *)this + 21) - (float)((float)(*((float *)this + 24) * (float)a2) * v6);
    v8 = *((float *)this + 22) - (float)((float)(*((float *)this + 25) * (float)a2) * v6);
    *(float *)a3 = *((float *)this + 20) - (float)((float)(*((float *)this + 23) * (float)a2) * v6);
    *((float *)a3 + 1) = v7;
    *((float *)a3 + 2) = v8;
    if ( a2 )
    {
      v9 = *((float *)this + 18);
      *(float *)a3 = *(float *)a3 + (float)((float)((float)(v9 + v9) * (float)((float)rand() * 4.6566e-10)) - v9);
      v10 = *((float *)this + 18);
      result = rand();
      *((float *)a3 + 1) = *((float *)a3 + 1)
                         + (float)((float)((float)(v10 + v10) * (float)((float)result * 4.6566e-10)) - v10);
    }
  }
  return result;
}


// ============================================================

// Address: 0x4a8bfc
// Original: _ZNK13CPedAttractor15ComputeDeltaPosEv
// Demangled: CPedAttractor::ComputeDeltaPos(void)
float __fastcall CPedAttractor::ComputeDeltaPos(CPedAttractor *this)
{
  float v1; // s16

  v1 = *((float *)this + 18);
  return (float)((float)(v1 + v1) * (float)((float)rand() * 4.6566e-10)) - v1;
}


// ============================================================

// Address: 0x4a8c38
// Original: _ZNK13CPedAttractor21ComputeAttractHeadingEiRf
// Demangled: CPedAttractor::ComputeAttractHeading(int,float &)
int __fastcall CPedAttractor::ComputeAttractHeading(CPedAttractor *this, int a2, float *a3)
{
  int result; // r0
  float v6; // s16
  float v7; // s0
  float v8; // [sp+0h] [bp-10h]

  result = *((int *)this + 1);
  if ( *(float *)&result != 0.0 )
  {
    if ( a2 )
    {
      *(_DWORD *)a3 = CGeneral::GetRadianAngleBetweenPoints(
                        *((CGeneral **)this + 23),
                        *((float *)this + 24),
                        0.0,
                        0.0,
                        v8);
      v6 = *((float *)this + 19);
      *(float *)&result = COERCE_FLOAT(rand());
      v7 = *a3 + (float)((float)((float)(v6 + v6) * (float)((float)result * 4.6566e-10)) - v6);
    }
    else
    {
      *(float *)&result = COERCE_FLOAT(
                            CGeneral::GetRadianAngleBetweenPoints(
                              *((CGeneral **)this + 26),
                              *((float *)this + 27),
                              0.0,
                              0.0,
                              v8));
      v7 = *(float *)&result;
    }
    *a3 = v7;
  }
  return result;
}


// ============================================================

// Address: 0x4a8ca4
// Original: _ZNK13CPedAttractor19ComputeDeltaHeadingEv
// Demangled: CPedAttractor::ComputeDeltaHeading(void)
float __fastcall CPedAttractor::ComputeDeltaHeading(CPedAttractor *this)
{
  float v1; // s16

  v1 = *((float *)this + 19);
  return (float)((float)(v1 + v1) * (float)((float)rand() * 4.6566e-10)) - v1;
}


// ============================================================

// Address: 0x4a8ce0
// Original: _ZN13CPedAttractor16BroadcastArrivalEP4CPed
// Demangled: CPedAttractor::BroadcastArrival(CPed *)
int __fastcall CPedAttractor::BroadcastArrival(CPedAttractor *this, CPed *a2)
{
  unsigned int v4; // r4
  int v5; // r0
  unsigned int v6; // r2
  CPed *v7; // r3
  unsigned int v8; // r9
  _DWORD *v9; // r0
  void *v10; // r8
  _DWORD *v11; // r6
  unsigned int v12; // r1
  size_t v13; // r2
  CPed **v14; // r0
  unsigned int v15; // r3
  int v16; // r0
  unsigned int v17; // r8
  int v18; // r4
  CPed *v19; // r11
  float v20; // s16
  unsigned int v21; // r1
  CTaskComplexGoToAttractor *v22; // r6
  unsigned int v23; // r1
  unsigned int v24; // r1
  CTaskComplexUsePairedAttractor *v25; // r4
  CTaskComplexWaitAtAttractor *v26; // r6
  int v27; // r0
  int v28; // r1
  int v29; // r2
  CPed *v30; // r4
  CPedAttractor *v31; // r0
  CPed *v32; // r1
  CTask *v33; // r2
  float v35; // [sp+10h] [bp-38h] BYREF
  _BYTE v36[52]; // [sp+14h] [bp-34h] BYREF

  v4 = *((_DWORD *)this + 7);
  if ( !v4 )
    goto LABEL_36;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *(CPed **)(*((_DWORD *)this + 8) + 4 * v6++);
    v5 |= v7 == a2;
  }
  while ( v6 < v4 && v7 != a2 );
  if ( !(v5 << 31) )
  {
LABEL_36:
    if ( *((_DWORD *)this + 6) >= v4 + 1 )
    {
      v11 = (_DWORD *)*((_DWORD *)this + 8);
    }
    else
    {
      v8 = 4 * (v4 + 1) / 3 + 3;
      v9 = malloc(4 * v8);
      v10 = (void *)*((_DWORD *)this + 8);
      v11 = v9;
      if ( v10 )
      {
        memmove_1(v9, *((const void **)this + 8), 4 * v4);
        free(v10);
        v4 = *((_DWORD *)this + 7);
      }
      *((_DWORD *)this + 8) = v11;
      *((_DWORD *)this + 6) = v8;
    }
    v11[v4] = a2;
    v12 = *((_DWORD *)this + 4);
    ++*((_DWORD *)this + 7);
    if ( v12 )
    {
      v13 = 4 * v12 - 4;
      v14 = (CPed **)*((_DWORD *)this + 5);
      v15 = 0;
      while ( *v14 != a2 )
      {
        ++v15;
        ++v14;
        v13 -= 4;
        if ( v15 >= v12 )
          goto LABEL_17;
      }
      memmove_1(v14, v14 + 1, v13);
      v16 = *((_DWORD *)this + 4) - 1;
      *((_DWORD *)this + 4) = v16;
      if ( !v16 )
        goto LABEL_19;
LABEL_17:
      v17 = 0;
      do
      {
        v18 = *((_DWORD *)this + 7);
        v19 = *(CPed **)(*((_DWORD *)this + 5) + 4 * v17);
        (*(void (__fastcall **)(CPedAttractor *, int, _BYTE *))(*(_DWORD *)this + 16))(this, v18, v36);
        (*(void (__fastcall **)(CPedAttractor *, int, float *))(*(_DWORD *)this + 20))(this, v18, &v35);
        v20 = *((float *)this + 14);
        v22 = (CTaskComplexGoToAttractor *)CTask::operator new((CTask *)&word_2C, v21);
        CTaskComplexGoToAttractor::CTaskComplexGoToAttractor(v22, this, (const CVector *)v36, v35, v20, v18, 4);
        CPedAttractor::SetTaskForPed(this, v19, v22);
        ++v17;
      }
      while ( v17 < *((_DWORD *)this + 4) );
    }
  }
LABEL_19:
  if ( (*(int (__fastcall **)(CPedAttractor *, CPed *))(*(_DWORD *)this + 12))(this, a2) == 1 )
  {
    if ( (**(int (__fastcall ***)(CPedAttractor *))this)(this) == 7 )
    {
      v25 = (CTaskComplexUsePairedAttractor *)CTask::operator new((CTask *)&dword_24, v24);
      CTaskComplexUsePairedAttractor::CTaskComplexUsePairedAttractor(v25, this);
    }
    else
    {
      v25 = (CTaskComplexUsePairedAttractor *)CTask::operator new((CTask *)&word_10, v24);
      CTaskComplexUseAttractor::CTaskComplexUseAttractor(v25, this);
    }
    v31 = this;
    v32 = a2;
    v33 = v25;
  }
  else
  {
    v26 = (CTaskComplexWaitAtAttractor *)CTask::operator new((CTask *)&dword_14, v23);
    v27 = *((_DWORD *)this + 7);
    if ( v27 < 1 )
    {
      v29 = -1;
    }
    else
    {
      v28 = 0;
      v29 = -1;
      do
      {
        v30 = *(CPed **)(*((_DWORD *)this + 8) + 4 * v28);
        if ( v30 == a2 )
          v29 = v28;
        ++v28;
      }
      while ( v28 < v27 && v30 != a2 );
    }
    CTaskComplexWaitAtAttractor::CTaskComplexWaitAtAttractor(v26, this, v29);
    v31 = this;
    v32 = a2;
    v33 = v26;
  }
  CPedAttractor::SetTaskForPed(v31, v32, v33);
  return 1;
}


// ============================================================

// Address: 0x4a8e96
// Original: _ZNK13CPedAttractor12GetQueueSlotEPK4CPed
// Demangled: CPedAttractor::GetQueueSlot(CPed const*)
int __fastcall CPedAttractor::GetQueueSlot(CPedAttractor *this, const CPed *a2)
{
  int v2; // r12
  int result; // r0
  int v4; // lr
  int v5; // r3
  const CPed *v6; // r2

  v2 = *((_DWORD *)this + 7);
  if ( v2 < 1 )
    return -1;
  v4 = *((_DWORD *)this + 8);
  v5 = 0;
  result = -1;
  do
  {
    v6 = *(const CPed **)(v4 + 4 * v5);
    if ( v6 == a2 )
      result = v5;
    ++v5;
  }
  while ( v5 < v2 && v6 != a2 );
  return result;
}


// ============================================================

// Address: 0x4a8ecc
// Original: _ZNK13CPedAttractor15IsAtHeadOfQueueEP4CPed
// Demangled: CPedAttractor::IsAtHeadOfQueue(CPed *)
bool __fastcall CPedAttractor::IsAtHeadOfQueue(CPedAttractor *this, CPed *a2)
{
  return **((_DWORD **)this + 8) == (_DWORD)a2;
}


// ============================================================

// Address: 0x4a8eda
// Original: _ZNK13CPedAttractor14GetHeadOfQueueEv
// Demangled: CPedAttractor::GetHeadOfQueue(void)
int __fastcall CPedAttractor::GetHeadOfQueue(CPedAttractor *this)
{
  if ( *((_DWORD *)this + 7) )
    return **(_DWORD **)((char *)&dword_20 + (_DWORD)this);
  else
    return 0;
}


// ============================================================

// Address: 0x4a8ee8
// Original: _ZNK13CPedAttractor14GetTailOfQueueEv
// Demangled: CPedAttractor::GetTailOfQueue(void)
int __fastcall CPedAttractor::GetTailOfQueue(CPedAttractor *this)
{
  int v1; // r1

  v1 = *((_DWORD *)this + 7);
  if ( v1 )
    return *(_DWORD *)(*(int *)((char *)&dword_20 + (_DWORD)this) + 4 * v1 - 4);
  else
    return 0;
}


// ============================================================

// Address: 0x4a8efc
// Original: _ZN13CPedAttractor18BroadcastDepartureEP4CPed
// Demangled: CPedAttractor::BroadcastDeparture(CPed *)
int __fastcall CPedAttractor::BroadcastDeparture(CPedAttractor *this, CPed *a2)
{
  int result; // r0
  int v4; // r5
  int v5; // r11
  CPed *v6; // r2
  int v7; // r10
  int v8; // r6
  float v9; // s16
  unsigned int v10; // r1
  CTaskComplexSequence *v11; // r9
  unsigned int v12; // r1
  CTaskSimpleStandStill *v13; // r8
  unsigned int v14; // r1
  CTaskComplexGoToAttractor *v15; // r5
  unsigned int v16; // r1
  CPed **v17; // r0
  size_t v18; // r2
  unsigned int v19; // r3
  int v20; // r0
  int v21; // r6
  int v22; // r11
  int i; // r8
  CPed *v24; // r10
  float v25; // s16
  unsigned int v26; // r1
  CTaskComplexGoToAttractor *v27; // r5
  int v29; // [sp+14h] [bp-44h]
  CPed *v30; // [sp+1Ch] [bp-3Ch]
  float v31; // [sp+20h] [bp-38h] BYREF
  _BYTE v32[52]; // [sp+24h] [bp-34h] BYREF

  result = 0;
  v4 = *((_DWORD *)this + 7);
  if ( v4 >= 1 )
  {
    v5 = -1;
    do
    {
      v6 = *(CPed **)(*((_DWORD *)this + 8) + 4 * result);
      if ( v6 == a2 )
        v5 = result;
      ++result;
    }
    while ( result < v4 && v6 != a2 );
    if ( v5 < 0 )
    {
      return 0;
    }
    else
    {
      v7 = v5 + 1;
      if ( v5 + 1 < v4 )
      {
        v29 = *((_DWORD *)this + 7);
        v8 = 2000 * v5 + 2000;
        do
        {
          v30 = *(CPed **)(*((_DWORD *)this + 8) + 4 * v7);
          (*(void (__fastcall **)(CPedAttractor *, int, _BYTE *))(*(_DWORD *)this + 16))(this, v7 - 1, v32);
          (*(void (__fastcall **)(CPedAttractor *, int, float *))(*(_DWORD *)this + 20))(this, v7 - 1, &v31);
          v9 = *((float *)this + 15);
          v11 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v10);
          CTaskComplexSequence::CTaskComplexSequence(v11);
          v13 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v12);
          CTaskSimpleStandStill::CTaskSimpleStandStill(v13, v8, 0, 0, 8.0);
          CTaskComplexSequence::AddTask(v11, v13);
          v15 = (CTaskComplexGoToAttractor *)CTask::operator new((CTask *)&word_2C, v14);
          CTaskComplexGoToAttractor::CTaskComplexGoToAttractor(v15, this, (const CVector *)v32, v31, v9, v7 - 1, 4);
          CTaskComplexSequence::AddTask(v11, v15);
          CPedAttractor::SetTaskForPed(this, v30, v11);
          ++v7;
          v8 += 2000;
        }
        while ( v29 != v7 );
      }
      v16 = *((_DWORD *)this + 10);
      if ( v16 )
      {
        v17 = (CPed **)*((_DWORD *)this + 11);
        v18 = 20 * v16 - 20;
        v19 = 0;
        while ( *v17 != a2 )
        {
          ++v19;
          v17 += 5;
          v18 -= 20;
          if ( v19 >= v16 )
            goto LABEL_18;
        }
        memmove_1(v17, v17 + 5, v18);
        --*((_DWORD *)this + 10);
      }
LABEL_18:
      memmove_1(
        (void *)(*((_DWORD *)this + 8) + 4 * v5),
        (const void *)(*((_DWORD *)this + 8) + 4 * v5 + 4),
        4 * (*((_DWORD *)this + 7) + 0x3FFFFFFF - v5));
      v20 = *((_DWORD *)this + 4);
      v21 = *((_DWORD *)this + 7) - 1;
      *((_DWORD *)this + 7) = v21;
      if ( v20 >= 1 )
      {
        v22 = v20 - 1;
        for ( i = 0; ; ++i )
        {
          v24 = *(CPed **)(*((_DWORD *)this + 5) + 4 * i);
          (*(void (__fastcall **)(CPedAttractor *, int, _BYTE *))(*(_DWORD *)this + 16))(this, v21, v32);
          (*(void (__fastcall **)(CPedAttractor *, int, float *))(*(_DWORD *)this + 20))(this, v21, &v31);
          v25 = *((float *)this + 14);
          v27 = (CTaskComplexGoToAttractor *)CTask::operator new((CTask *)&word_2C, v26);
          CTaskComplexGoToAttractor::CTaskComplexGoToAttractor(v27, this, (const CVector *)v32, v31, v25, v21, 4);
          CPedAttractor::SetTaskForPed(this, v24, v27);
          if ( v22 == i )
            break;
          v21 = *((_DWORD *)this + 7);
        }
      }
      return 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4a90ba
// Original: _ZN13CPedAttractor13DeRegisterPedEP4CPed
// Demangled: CPedAttractor::DeRegisterPed(CPed *)
int __fastcall CPedAttractor::DeRegisterPed(CPedAttractor *this, CPed *a2)
{
  unsigned int v4; // r1
  CPed **v5; // r0
  size_t v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r1
  size_t v9; // r2
  CPed **v10; // r0
  unsigned int v11; // r3

  v4 = *((_DWORD *)this + 10);
  if ( v4 )
  {
    v5 = (CPed **)*((_DWORD *)this + 11);
    v6 = 20 * v4 - 20;
    v7 = 0;
    while ( *v5 != a2 )
    {
      ++v7;
      v5 += 5;
      v6 -= 20;
      if ( v7 >= v4 )
        goto LABEL_7;
    }
    memmove_1(v5, v5 + 5, v6);
    --*((_DWORD *)this + 10);
  }
LABEL_7:
  v8 = *((_DWORD *)this + 4);
  if ( !v8 )
    return (*(int (__fastcall **)(CPedAttractor *, CPed *))(*(_DWORD *)this + 24))(this, a2);
  v9 = 4 * v8 - 4;
  v10 = (CPed **)*((_DWORD *)this + 5);
  v11 = 0;
  while ( *v10 != a2 )
  {
    ++v11;
    ++v10;
    v9 -= 4;
    if ( v11 >= v8 )
      return (*(int (__fastcall **)(CPedAttractor *, CPed *))(*(_DWORD *)this + 24))(this, a2);
  }
  memmove_1(v10, v10 + 1, v9);
  --*((_DWORD *)this + 4);
  return 1;
}


// ============================================================

// Address: 0x4a9140
// Original: _ZN13CPedAttractor13AbortPedTasksEv
// Demangled: CPedAttractor::AbortPedTasks(void)
_DWORD *__fastcall CPedAttractor::AbortPedTasks(_DWORD *this)
{
  _DWORD *v1; // r9
  int v2; // r5
  int v3; // r4
  _DWORD *v4; // r6

  v1 = this;
  v2 = this[10];
  if ( v2 >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = (_DWORD *)(v1[11] + v3);
      this = (_DWORD *)v4[1];
      *v4 = 0;
      if ( this )
        this = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*this + 4))(this);
      v3 += 20;
      --v2;
      v4[1] = 0;
      v4[2] = -1;
    }
    while ( v2 );
  }
  return this;
}


// ============================================================

// Address: 0x4a9184
// Original: _ZN13CPedAttractornwEj
// Demangled: CPedAttractor::operator new(uint)
int __fastcall CPedAttractor::operator new(CPedAttractor *this, unsigned int a2)
{
  int v2; // lr
  _DWORD *v3; // r1
  int result; // r0
  int v5; // r12
  int v6; // r2
  int v7; // r3

  v2 = 0;
  v3 = (_DWORD *)CPools::ms_pPedAttractorPool;
  result = *(_DWORD *)(CPools::ms_pPedAttractorPool + 12);
  v5 = *(_DWORD *)(CPools::ms_pPedAttractorPool + 8);
  do
  {
    v3[3] = ++result;
    if ( result == v5 )
    {
      result = 0;
      v3[3] = 0;
      if ( v2 << 31 )
        return result;
      v2 = 1;
    }
    v6 = v3[1];
    v7 = *(char *)(v6 + result);
  }
  while ( v7 > -1 );
  *(_BYTE *)(v6 + result) = v7 & 0x7F;
  *(_BYTE *)(v3[1] + v3[3]) = (*(_BYTE *)(v3[1] + v3[3]) + 1) & 0x7F | *(_BYTE *)(v3[1] + v3[3]) & 0x80;
  return *v3 + 236 * v3[3];
}


// ============================================================

// Address: 0x4a91e8
// Original: _ZN13CPedAttractordlEPv
// Demangled: CPedAttractor::operator delete(void *)
void __fastcall CPedAttractor::operator delete(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pPedAttractorPool;
  v2 = -1601513229 * ((a1 - *(_DWORD *)CPools::ms_pPedAttractorPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pPedAttractorPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x4ac31c
// Original: _ZN13CPedAttractorD0Ev
// Demangled: CPedAttractor::~CPedAttractor()
void __fastcall __noreturn CPedAttractor::~CPedAttractor(CPedAttractor *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x4ac43c
// Original: _ZN13CPedAttractorD2Ev
// Demangled: CPedAttractor::~CPedAttractor()
void __fastcall CPedAttractor::~CPedAttractor(CPedAttractor *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_668DF8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 11);
  *((_DWORD *)this + 10) = 0;
  if ( v4 )
  {
    free(v4);
    *((_DWORD *)this + 11) = 0;
  }
  v5 = (void *)*((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 9) = 0;
  if ( v5 )
  {
    free(v5);
    *((_DWORD *)this + 8) = 0;
  }
  v6 = (void *)*((_DWORD *)this + 5);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( v6 )
  {
    free(v6);
    *((_DWORD *)this + 5) = 0;
  }
  *((_DWORD *)this + 3) = 0;
}


// ============================================================
