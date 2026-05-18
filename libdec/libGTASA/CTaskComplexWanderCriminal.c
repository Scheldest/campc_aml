
// Address: 0x524004
// Original: _ZN26CTaskComplexWanderCriminal12ScanForStuffEP4CPed
// Demangled: CTaskComplexWanderCriminal::ScanForStuff(CPed *)
int __fastcall CTaskComplexWanderCriminal::ScanForStuff(CTaskComplexWanderCriminal *this, CPed *a2)
{
  int v4; // r6
  int v5; // s0
  __int64 v6; // r0

  if ( *((_BYTE *)this + 48)
    || (v4 = CTimer::m_snTimeInMilliseconds,
        *((_DWORD *)this + 10) = CTimer::m_snTimeInMilliseconds,
        *((_DWORD *)this + 11) = 50,
        *((_BYTE *)this + 48) = 1,
        v5 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 30000.0),
        LODWORD(v6) = *((unsigned __int8 *)this + 48),
        *((_DWORD *)this + 13) = v5 + v4,
        (_DWORD)v6) )
  {
    if ( *((_BYTE *)this + 49) )
    {
      LODWORD(v6) = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 49) = 0;
      *((_DWORD *)this + 10) = v6;
      HIDWORD(v6) = v6;
    }
    else
    {
      HIDWORD(v6) = *((_DWORD *)this + 10);
      LODWORD(v6) = CTimer::m_snTimeInMilliseconds;
    }
    if ( HIDWORD(v6) + *((_DWORD *)this + 11) <= (unsigned int)v6 )
    {
      HIDWORD(v6) = 50;
      *((_QWORD *)this + 5) = v6;
      HIDWORD(v6) = *((_DWORD *)this + 13);
      *((_BYTE *)this + 48) = 1;
      if ( (unsigned int)v6 >= HIDWORD(v6) )
        LODWORD(v6) = CTaskComplexWanderCriminal::LookForCarsToSteal(this, a2);
    }
  }
  return v6;
}


// ============================================================

// Address: 0x5240c4
// Original: _ZN26CTaskComplexWanderCriminal18LookForCarsToStealEP4CPed
// Demangled: CTaskComplexWanderCriminal::LookForCarsToSteal(CPed *)
void __fastcall CTaskComplexWanderCriminal::LookForCarsToSteal(CTaskComplexWanderCriminal *this, CPed *a2, _DWORD *a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d8
  int v6; // r11
  int v8; // r4
  CVehicle *v9; // r9
  int v10; // r0
  int v11; // r5
  CVehicle *v12; // r6
  int v13; // r0
  int v14; // r1
  char *v15; // r0
  float32x2_t v16; // d16
  unsigned __int64 v17; // d1
  bool v18; // nf
  _BYTE v20[56]; // [sp+0h] [bp-38h] BYREF

  v4.n64_u32[0] = 2139095039;
  v6 = *((_DWORD *)a2 + 272);
  v8 = 0;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v10 = v6 + 4 * v8;
      v11 = v8 + 1;
      v12 = *(CVehicle **)(v10 + 224);
      if ( v12 )
      {
        if ( CCarEnterExit::IsVehicleStealable(*(CCarEnterExit **)(v10 + 224), a2, (const CPed *)a3) )
          break;
      }
      ++v8;
      if ( v11 - 1 >= 15 )
        goto LABEL_13;
    }
    v13 = *((_DWORD *)v12 + 5);
    v14 = *((_DWORD *)a2 + 5);
    a3 = (_DWORD *)(v13 + 48);
    if ( !v13 )
      a3 = (_DWORD *)((char *)v12 + 4);
    v15 = (char *)(v14 + 48);
    if ( !v14 )
      v15 = (char *)a2 + 4;
    v16.n64_u64[0] = vsub_f32(*(float32x2_t *)(v15 + 4), *(float32x2_t *)(a3 + 1)).n64_u64[0];
    v17 = vmul_f32(v16, v16).n64_u64[0];
    v3.n64_f32[0] = (float)((float)((float)(*(float *)v15 - *(float *)a3) * (float)(*(float *)v15 - *(float *)a3))
                          + *(float *)&v17)
                  + *((float *)&v17 + 1);
    v18 = v3.n64_f32[0] < v4.n64_f32[0];
    v4.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
    if ( v18 )
      v9 = v12;
  }
  while ( v8++ < 15 );
LABEL_13:
  if ( v9 )
  {
    *((_DWORD *)this + 13) = CTimer::m_snTimeInMilliseconds + 30000;
    if ( (float)((float)((float)rand() * 4.6566e-10) + 0.0) < 0.2 )
    {
      CEventVehicleToSteal::CEventVehicleToSteal((CEventVehicleToSteal *)v20, v9);
      CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v20, 0);
      CEventVehicleToSteal::~CEventVehicleToSteal((CEventVehicleToSteal *)v20);
    }
  }
}


// ============================================================

// Address: 0x526eec
// Original: _ZN26CTaskComplexWanderCriminalD0Ev
// Demangled: CTaskComplexWanderCriminal::~CTaskComplexWanderCriminal()
void __fastcall CTaskComplexWanderCriminal::~CTaskComplexWanderCriminal(CTaskComplexWanderCriminal *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x526efc
// Original: _ZNK26CTaskComplexWanderCriminal5CloneEv
// Demangled: CTaskComplexWanderCriminal::Clone(void)
int __fastcall CTaskComplexWanderCriminal::Clone(CTaskComplexWanderCriminal *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  char v4; // r5
  int v5; // r6
  int result; // r0
  char v7; // r2

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, a2);
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
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  v7 = *(_BYTE *)(result + 36);
  *(_DWORD *)result = &off_66C634;
  *(_BYTE *)(result + 36) = v4 & 1 | v7 & 0xF0;
  return result;
}


// ============================================================

// Address: 0x526f5c
// Original: _ZNK26CTaskComplexWanderCriminal13GetWanderTypeEv
// Demangled: CTaskComplexWanderCriminal::GetWanderType(void)
int __fastcall CTaskComplexWanderCriminal::GetWanderType(CTaskComplexWanderCriminal *this)
{
  return 3;
}


// ============================================================
