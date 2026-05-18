
// Address: 0x5241e8
// Original: _ZN28CTaskComplexWanderProstituteC2Eihb
// Demangled: CTaskComplexWanderProstitute::CTaskComplexWanderProstitute(int,uchar,bool)
void __fastcall CTaskComplexWanderProstitute::CTaskComplexWanderProstitute(
        CTaskComplexWanderProstitute *this,
        int a2,
        unsigned __int8 a3,
        bool a4)
{
  int v7; // r0
  char v8; // r2

  CTaskComplex::CTaskComplex(this);
  *(_BYTE *)(v7 + 16) = a3;
  *(_DWORD *)(v7 + 12) = a2;
  *(_DWORD *)(v7 + 20) = 1056964608;
  *(_WORD *)(v7 + 24) = -1;
  *(_WORD *)(v7 + 28) = -1;
  v8 = *(_BYTE *)(v7 + 36) & 0xF0;
  *(_DWORD *)(v7 + 32) = 0;
  *(_WORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 52) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_DWORD *)(v7 + 40) = 0;
  *(_DWORD *)(v7 + 44) = 0;
  *(_BYTE *)(v7 + 36) = v8 | a4;
  *(_DWORD *)v7 = &off_66C378;
}


// ============================================================

// Address: 0x52423c
// Original: _ZN28CTaskComplexWanderProstitute18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWanderProstitute::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexWanderProstitute::CreateFirstSubTask(CTaskComplexWanderProstitute *this, CVehicle **a2)
{
  int v4; // r2

  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v4 = 704;
  }
  else
  {
    (*(void (__fastcall **)(CTaskComplexWanderProstitute *, CVehicle **))(*(_DWORD *)this + 60))(this, a2);
    (*(void (__fastcall **)(CTaskComplexWanderProstitute *, CVehicle **, _DWORD, char *, char *, char *))(*(_DWORD *)this + 64))(
      this,
      a2,
      *((unsigned __int8 *)this + 16),
      (char *)this + 24,
      (char *)this + 28,
      (char *)this + 16);
    v4 = 900;
  }
  return CTaskComplexWander::CreateSubTask(this, a2, v4);
}


// ============================================================

// Address: 0x524298
// Original: _ZN28CTaskComplexWanderProstitute12ScanForStuffEP4CPed
// Demangled: CTaskComplexWanderProstitute::ScanForStuff(CPed *)
void __fastcall CTaskComplexWanderProstitute::ScanForStuff(__int64 this)
{
  __int64 v1; // kr00_8
  _DWORD *v2; // r0
  CPed *v3; // r5
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r1
  _DWORD *v19; // r10
  CEventGroup *v20; // r9
  _DWORD *v21; // r0
  int i; // r6
  bool v23; // zf
  int v24; // r1
  bool v25; // zf
  float v26; // s0
  int v27; // r0
  unsigned int v28; // r2
  float32x2_t v29; // d16
  unsigned __int64 v30; // d1
  _DWORD v31[2]; // [sp+4h] [bp-5Ch] BYREF
  __int16 v32; // [sp+Eh] [bp-52h]

  v1 = this;
  LODWORD(this) = CTimer::m_snTimeInMilliseconds;
  if ( !*(_BYTE *)(v1 + 48) )
  {
    HIDWORD(this) = 50;
    *(_QWORD *)(v1 + 40) = this;
    *(_BYTE *)(v1 + 48) = 1;
  }
  if ( (unsigned int)this >= *(_DWORD *)(v1 + 52) )
  {
    if ( *(_BYTE *)(v1 + 49) )
    {
      *(_BYTE *)(v1 + 49) = 0;
      HIDWORD(this) = this;
      *(_DWORD *)(v1 + 40) = this;
    }
    else
    {
      HIDWORD(this) = *(_DWORD *)(v1 + 40);
    }
    if ( HIDWORD(this) + *(_DWORD *)(v1 + 44) <= (unsigned int)this )
    {
      HIDWORD(this) = 50;
      *(_QWORD *)(v1 + 40) = this;
      *(_BYTE *)(v1 + 48) = 1;
      if ( !CTaskComplexWanderStandard::LookForGangMembers((CTaskComplexWanderStandard *)v1, (CPed *)HIDWORD(v1))
        && !CTaskComplexWanderStandard::LookForChatPartners((CTaskComplexWanderStandard *)v1, (CPed *)HIDWORD(v1)) )
      {
        CTaskComplexWanderStandard::LookForSexyCars((CTaskComplexWanderStandard *)v1, (CPed *)HIDWORD(v1));
      }
    }
  }
  if ( (unsigned int)CTimer::m_snTimeInMilliseconds > *(_DWORD *)(v1 + 56) )
  {
    *(_DWORD *)(v1 + 56) = CTimer::m_snTimeInMilliseconds + 2000;
    v2 = *(_DWORD **)(HIDWORD(v1) + 1088);
    v3 = (CPed *)v2[76];
    if ( !v3 || *((_DWORD *)v3 + 359) != 6 )
    {
      v4 = v2[77];
      if ( !v4 || *(_DWORD *)(v4 + 1436) != 6 )
      {
        v5 = v2[78];
        if ( !v5 || *(_DWORD *)(v5 + 1436) != 6 )
        {
          v6 = v2[79];
          if ( !v6 || *(_DWORD *)(v6 + 1436) != 6 )
          {
            v7 = v2[80];
            if ( !v7 || *(_DWORD *)(v7 + 1436) != 6 )
            {
              v8 = v2[81];
              if ( !v8 || *(_DWORD *)(v8 + 1436) != 6 )
              {
                v9 = v2[82];
                if ( !v9 || *(_DWORD *)(v9 + 1436) != 6 )
                {
                  v10 = v2[83];
                  if ( !v10 || *(_DWORD *)(v10 + 1436) != 6 )
                  {
                    v11 = v2[84];
                    if ( !v11 || *(_DWORD *)(v11 + 1436) != 6 )
                    {
                      v12 = v2[85];
                      if ( !v12 || *(_DWORD *)(v12 + 1436) != 6 )
                      {
                        v13 = v2[86];
                        if ( !v13 || *(_DWORD *)(v13 + 1436) != 6 )
                        {
                          v14 = v2[87];
                          if ( !v14 || *(_DWORD *)(v14 + 1436) != 6 )
                          {
                            v15 = v2[88];
                            if ( !v15 || *(_DWORD *)(v15 + 1436) != 6 )
                            {
                              v16 = v2[89];
                              if ( !v16 || *(_DWORD *)(v16 + 1436) != 6 )
                              {
                                v17 = v2[90];
                                if ( !v17 || *(_DWORD *)(v17 + 1436) != 6 )
                                {
                                  v18 = v2[91];
                                  if ( !v18 || *(_DWORD *)(v18 + 1436) != 6 )
                                  {
                                    v19 = v2 + 77;
                                    v20 = (CEventGroup *)(v2 + 26);
                                    v21 = &`vtable for'CEventAcquaintancePedRespect;
                                    for ( i = 0; ; ++i )
                                    {
                                      v23 = v3 == 0;
                                      if ( v3 )
                                      {
                                        v21 = (_DWORD *)*((_DWORD *)v3 + 273);
                                        v23 = v21 == 0;
                                      }
                                      if ( !v23 )
                                      {
                                        v24 = *((_DWORD *)v3 + 356);
                                        v25 = v24 == 0;
                                        if ( v24 )
                                          v25 = v21[42] == HIDWORD(v1);
                                        if ( !v25 )
                                        {
                                          v26 = (float)(unsigned __int16)rand();
                                          v27 = *((_DWORD *)v3 + 356);
                                          v28 = (int)(float)((float)(v26 * 0.000015259) * 50000.0);
                                          if ( *(_DWORD *)(*(_DWORD *)(v27 + 904) + 216) > v28 )
                                          {
                                            v29.n64_u64[0] = vmul_f32(
                                                               *(float32x2_t *)(v27 + 76),
                                                               (float32x2_t)0x4248000042480000LL).n64_u64[0];
                                            v30 = vmul_f32(v29, v29).n64_u64[0];
                                            if ( (float)((float)((float)((float)(*(float *)(v27 + 72) * 50.0)
                                                                       * (float)(*(float *)(v27 + 72) * 50.0))
                                                               + *(float *)&v30)
                                                       + *((float *)&v30 + 1)) < 4.0
                                              && CTaskComplexProstituteSolicit::IsTaskValid(
                                                   (CTaskComplexProstituteSolicit *)HIDWORD(v1),
                                                   (CPed *)v1,
                                                   (CPed *)v28) == 1 )
                                            {
                                              CEventAcquaintancePed::CEventAcquaintancePed(
                                                (CEventAcquaintancePed *)v31,
                                                v3);
                                              v32 = 1309;
                                              v31[0] = &off_6690E8;
                                              CEventGroup::Add(v20, (CEvent *)v31, 0);
                                              CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)v31);
                                            }
                                          }
                                        }
                                      }
                                      if ( i == 15 )
                                        break;
                                      v21 = (_DWORD *)(i + 1);
                                      v3 = (CPed *)v19[i];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// ============================================================

// Address: 0x526f60
// Original: _ZN28CTaskComplexWanderProstituteD0Ev
// Demangled: CTaskComplexWanderProstitute::~CTaskComplexWanderProstitute()
void __fastcall CTaskComplexWanderProstitute::~CTaskComplexWanderProstitute(CTaskComplexWanderProstitute *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x526f70
// Original: _ZNK28CTaskComplexWanderProstitute5CloneEv
// Demangled: CTaskComplexWanderProstitute::Clone(void)
int __fastcall CTaskComplexWanderProstitute::Clone(CTaskComplexWanderProstitute *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  char v4; // r5
  int v5; // r6
  int result; // r0
  char v7; // r2

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_3C, a2);
  v4 = *((_BYTE *)this + 36);
  v5 = *((_DWORD *)this + 3);
  LOBYTE(this) = *((_BYTE *)this + 16);
  CTaskComplex::CTaskComplex(v3);
  *(_BYTE *)(result + 16) = (_BYTE)this;
  *(_DWORD *)(result + 12) = v5;
  *(_DWORD *)(result + 20) = 1056964608;
  *(_WORD *)(result + 24) = -1;
  *(_WORD *)(result + 28) = -1;
  *(_DWORD *)(result + 32) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  v7 = *(_BYTE *)(result + 36);
  *(_DWORD *)result = &off_66C378;
  *(_BYTE *)(result + 36) = v4 & 1 | v7 & 0xF0;
  return result;
}


// ============================================================

// Address: 0x526fd4
// Original: _ZNK28CTaskComplexWanderProstitute13GetWanderTypeEv
// Demangled: CTaskComplexWanderProstitute::GetWanderType(void)
int __fastcall CTaskComplexWanderProstitute::GetWanderType(CTaskComplexWanderProstitute *this)
{
  return 7;
}


// ============================================================
