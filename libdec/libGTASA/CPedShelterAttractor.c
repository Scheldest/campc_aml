
// Address: 0x1964dc
// Original: j__ZN20CPedShelterAttractor15GetDisplacementEi
// Demangled: CPedShelterAttractor::GetDisplacement(int)
// attributes: thunk
int __fastcall CPedShelterAttractor::GetDisplacement(CPedShelterAttractor *this, int a2)
{
  return _ZN20CPedShelterAttractor15GetDisplacementEi(this, a2);
}


// ============================================================

// Address: 0x4a9218
// Original: _ZNK20CPedShelterAttractor15IsAtHeadOfQueueEP4CPed
// Demangled: CPedShelterAttractor::IsAtHeadOfQueue(CPed *)
int __fastcall CPedShelterAttractor::IsAtHeadOfQueue(CPedShelterAttractor *this, CPed *a2)
{
  return 1;
}


// ============================================================

// Address: 0x4a921c
// Original: _ZNK20CPedShelterAttractor17ComputeAttractPosEiR7CVector
// Demangled: CPedShelterAttractor::ComputeAttractPos(int,CVector &)
float *__fastcall CPedShelterAttractor::ComputeAttractPos(
        CPedShelterAttractor *this,
        CPedShelterAttractor *a2,
        CVector *a3)
{
  float *result; // r0
  float v6; // s2
  float v7; // s4

  result = (float *)*((_DWORD *)this + 1);
  if ( result )
  {
    result = (float *)CPedShelterAttractor::GetDisplacement(a2, (int)a2);
    v6 = *((float *)this + 21) + result[1];
    v7 = *((float *)this + 22) + result[2];
    *(float *)a3 = *((float *)this + 20) + *result;
    *((float *)a3 + 1) = v6;
    *((float *)a3 + 2) = v7;
  }
  return result;
}


// ============================================================

// Address: 0x4a9264
// Original: _ZN20CPedShelterAttractor15GetDisplacementEi
// Demangled: CPedShelterAttractor::GetDisplacement(int)
int __fastcall CPedShelterAttractor::GetDisplacement(CPedShelterAttractor *this, int a2)
{
  int v2; // r11
  float v3; // r5
  float v4; // r6
  float v5; // r5
  int v6; // r0
  int v7; // r9
  float v8; // s0
  float v9; // s24
  float v10; // s26
  int v11; // r1
  int v12; // r2
  float *v13; // r3
  unsigned int v14; // r8
  char *v15; // r5
  void *v16; // r6
  char *v17; // r0

  if ( !dword_9EE2CC )
  {
    v2 = 0;
    do
    {
      do
      {
        v3 = (float)((float)((float)rand() * 4.6566e-10) * 6.2832) + 0.0;
        v4 = cosf(v3);
        v5 = sinf(v3);
        v6 = rand();
        v7 = dword_9EE2CC;
        v8 = (float)((float)((float)v6 * 4.6566e-10) + (float)((float)v6 * 4.6566e-10)) + 0.0;
        v9 = v5 * v8;
        v10 = v4 * v8;
        if ( dword_9EE2CC < 1 )
          break;
        v11 = 0;
        v12 = 0;
        do
        {
          v13 = (float *)(dword_9EE2D0 + 12 * v11);
          if ( (float)((float)(v13[2] * v13[2])
                     + (float)((float)((float)(*v13 - v10) * (float)(*v13 - v10))
                             + (float)((float)(v13[1] - v9) * (float)(v13[1] - v9)))) < 1.0 )
          {
            v12 = 1;
            v11 = dword_9EE2CC;
          }
          ++v11;
        }
        while ( v11 < dword_9EE2CC );
      }
      while ( v12 << 31 );
      if ( CPedShelterAttractor::ms_displacements >= (unsigned int)(dword_9EE2CC + 1) )
      {
        v15 = (char *)dword_9EE2D0;
      }
      else
      {
        v14 = 4 * (dword_9EE2CC + 1) / 3u + 3;
        v15 = (char *)malloc(12 * v14);
        v16 = (void *)dword_9EE2D0;
        if ( dword_9EE2D0 )
        {
          memmove_1(v15, (const void *)dword_9EE2D0, 12 * v7);
          free(v16);
          v7 = dword_9EE2CC;
        }
        dword_9EE2D0 = (int)v15;
        CPedShelterAttractor::ms_displacements = v14;
      }
      ++v2;
      v17 = &v15[12 * v7];
      *((_DWORD *)v17 + 2) = 0;
      *(float *)v17 = v10;
      *((float *)v17 + 1) = v9;
      ++dword_9EE2CC;
    }
    while ( v2 != 5 );
  }
  return dword_9EE2D0 + 12 * (_DWORD)this;
}


// ============================================================

// Address: 0x4a9464
// Original: _ZNK20CPedShelterAttractor21ComputeAttractHeadingEiRf
// Demangled: CPedShelterAttractor::ComputeAttractHeading(int,float &)
int __fastcall CPedShelterAttractor::ComputeAttractHeading(CPedShelterAttractor *this, int a2, float *a3)
{
  int result; // r0

  result = rand();
  *a3 = (float)((float)((float)result * 4.6566e-10) * 6.2832) + 0.0;
  return result;
}


// ============================================================

// Address: 0x4a94a0
// Original: _ZN20CPedShelterAttractor18BroadcastDepartureEP4CPed
// Demangled: CPedShelterAttractor::BroadcastDeparture(CPed *)
int __fastcall CPedShelterAttractor::BroadcastDeparture(CPedShelterAttractor *this, CPed *a2)
{
  int result; // r0
  int v4; // lr
  int v5; // r5
  CPed *v6; // r6
  unsigned int v7; // r12
  CPed **v8; // r0
  size_t v9; // r2
  unsigned int v10; // r6
  int v11; // r0
  int v12; // r6
  int v13; // r11
  int i; // r8
  CPed *v15; // r10
  float v16; // s16
  unsigned int v17; // r1
  CTaskComplexGoToAttractor *v18; // r5
  float v19; // [sp+10h] [bp-38h] BYREF
  _BYTE v20[52]; // [sp+14h] [bp-34h] BYREF

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
      v7 = *((_DWORD *)this + 10);
      if ( v7 )
      {
        v8 = (CPed **)*((_DWORD *)this + 11);
        v9 = 20 * v7 - 20;
        v10 = 0;
        while ( *v8 != a2 )
        {
          ++v10;
          v8 += 5;
          v9 -= 20;
          if ( v10 >= v7 )
            goto LABEL_15;
        }
        memmove_1(v8, v8 + 5, v9);
        v4 = *((_DWORD *)this + 7);
        --*((_DWORD *)this + 10);
      }
LABEL_15:
      memmove_1(
        (void *)(*((_DWORD *)this + 8) + 4 * v5),
        (const void *)(*((_DWORD *)this + 8) + 4 * v5 + 4),
        4 * (0x3FFFFFFF - v5 + v4));
      v11 = *((_DWORD *)this + 4);
      v12 = *((_DWORD *)this + 7) - 1;
      *((_DWORD *)this + 7) = v12;
      if ( v11 >= 1 )
      {
        v13 = v11 - 1;
        for ( i = 0; ; ++i )
        {
          v15 = *(CPed **)(*((_DWORD *)this + 5) + 4 * i);
          (*(void (__fastcall **)(CPedShelterAttractor *, int, _BYTE *))(*(_DWORD *)this + 16))(this, v12, v20);
          (*(void (__fastcall **)(CPedShelterAttractor *, int, float *))(*(_DWORD *)this + 20))(this, v12, &v19);
          v16 = *((float *)this + 14);
          v18 = (CTaskComplexGoToAttractor *)CTask::operator new((CTask *)&word_2C, v17);
          CTaskComplexGoToAttractor::CTaskComplexGoToAttractor(v18, this, (const CVector *)v20, v19, v16, v12, 4);
          CPedAttractor::SetTaskForPed(this, v15, v18);
          if ( v13 == i )
            break;
          v12 = *((_DWORD *)this + 7);
        }
      }
      return 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4ac31e
// Original: _ZNK20CPedShelterAttractor7GetTypeEv
// Demangled: CPedShelterAttractor::GetType(void)
int __fastcall CPedShelterAttractor::GetType(CPedShelterAttractor *this)
{
  return 4;
}


// ============================================================

// Address: 0x4ac324
// Original: _ZN20CPedShelterAttractorD0Ev
// Demangled: CPedShelterAttractor::~CPedShelterAttractor()
void __fastcall CPedShelterAttractor::~CPedShelterAttractor(CPedShelterAttractor *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  int v7; // r0
  int v8; // r1

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
  v7 = CPools::ms_pPedAttractorPool;
  v8 = -1601513229 * (((int)this - *(_DWORD *)CPools::ms_pPedAttractorPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pPedAttractorPool + 4) + v8) |= 0x80u;
  if ( v8 < *(_DWORD *)(v7 + 12) )
    *(_DWORD *)(v7 + 12) = v8;
}


// ============================================================
