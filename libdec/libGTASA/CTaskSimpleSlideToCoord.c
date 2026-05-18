
// Address: 0x197a48
// Original: j__ZN23CTaskSimpleSlideToCoordC2ERK7CVectorff
// Demangled: CTaskSimpleSlideToCoord::CTaskSimpleSlideToCoord(CVector const&,float,float)
// attributes: thunk
void __fastcall CTaskSimpleSlideToCoord::CTaskSimpleSlideToCoord(
        CTaskSimpleSlideToCoord *this,
        const CVector *a2,
        float a3,
        float a4)
{
  _ZN23CTaskSimpleSlideToCoordC2ERK7CVectorff(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19f158
// Original: j__ZN23CTaskSimpleSlideToCoordC2ERK7CVectorffPKcS4_ifbi
// Demangled: CTaskSimpleSlideToCoord::CTaskSimpleSlideToCoord(CVector const&,float,float,char const*,char const*,int,float,bool,int)
// attributes: thunk
void __fastcall CTaskSimpleSlideToCoord::CTaskSimpleSlideToCoord(
        CTaskSimpleSlideToCoord *this,
        const CVector *a2,
        float a3,
        float a4,
        const char *a5,
        const char *a6,
        int a7,
        float a8,
        bool a9,
        int a10)
{
  _ZN23CTaskSimpleSlideToCoordC2ERK7CVectorffPKcS4_ifbi(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x5260ec
// Original: _ZN23CTaskSimpleSlideToCoordC2ERK7CVectorff
// Demangled: CTaskSimpleSlideToCoord::CTaskSimpleSlideToCoord(CVector const&,float,float)
void __fastcall CTaskSimpleSlideToCoord::CTaskSimpleSlideToCoord(
        CTaskSimpleSlideToCoord *this,
        const CVector *a2,
        float a3,
        float a4)
{
  int v7; // r0
  char v8; // r2
  __int64 v9; // d16

  CTaskSimpleAnim::CTaskSimpleAnim(this, 0);
  *(_WORD *)(v7 + 76) = 0;
  *(_DWORD *)(v7 + 68) = 0;
  *(_DWORD *)(v7 + 72) = 0;
  *(_DWORD *)v7 = &off_66C4F0;
  v8 = *(_BYTE *)(v7 + 120);
  v9 = *(_QWORD *)a2;
  *(_DWORD *)(v7 + 108) = *((_DWORD *)a2 + 2);
  *(float *)(v7 + 112) = a3;
  *(float *)(v7 + 116) = a4;
  *(_BYTE *)(v7 + 120) = v8 & 0xFC | 1;
  *(_QWORD *)(v7 + 100) = v9;
}


// ============================================================

// Address: 0x526140
// Original: _ZN23CTaskSimpleSlideToCoordC2ERK7CVectorffPKcS4_ifbi
// Demangled: CTaskSimpleSlideToCoord::CTaskSimpleSlideToCoord(CVector const&,float,float,char const*,char const*,int,float,bool,int)
void __fastcall CTaskSimpleSlideToCoord::CTaskSimpleSlideToCoord(
        CTaskSimpleSlideToCoord *this,
        const CVector *a2,
        float a3,
        float a4,
        const char *a5,
        const char *a6,
        int a7,
        float a8,
        bool a9,
        int a10)
{
  int v13; // r0
  __int64 v14; // d16
  char v15; // r2

  CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(this, a5, a6, a7, a8, a10, 0, a9, 0, 0);
  *(_DWORD *)v13 = &off_66C4F0;
  v14 = *(_QWORD *)a2;
  v15 = *(_BYTE *)(v13 + 120);
  *(_DWORD *)(v13 + 108) = *((_DWORD *)a2 + 2);
  *(float *)(v13 + 112) = a3;
  *(float *)(v13 + 116) = a4;
  *(_DWORD *)(v13 + 124) = -1;
  *(_BYTE *)(v13 + 120) = v15 | 3;
  *(_QWORD *)(v13 + 100) = v14;
}


// ============================================================

// Address: 0x5261ac
// Original: _ZN23CTaskSimpleSlideToCoordD2Ev
// Demangled: CTaskSimpleSlideToCoord::~CTaskSimpleSlideToCoord()
// attributes: thunk
void __fastcall CTaskSimpleSlideToCoord::~CTaskSimpleSlideToCoord(CTaskSimpleSlideToCoord *this)
{
  sub_191648(this);
}


// ============================================================

// Address: 0x5261b0
// Original: _ZN23CTaskSimpleSlideToCoordD0Ev
// Demangled: CTaskSimpleSlideToCoord::~CTaskSimpleSlideToCoord()
void __fastcall CTaskSimpleSlideToCoord::~CTaskSimpleSlideToCoord(CTaskSimpleSlideToCoord *this)
{
  void *v1; // r0

  CTaskSimpleAnim::~CTaskSimpleAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5261c0
// Original: _ZN23CTaskSimpleSlideToCoord13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSlideToCoord::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSlideToCoord::MakeAbortable(
        CTaskSimpleSlideToCoord *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( (*((_BYTE *)this + 120) & 2) != 0 )
    return sub_18D440(this, a2, a3, a4);
  else
    return 1;
}


// ============================================================

// Address: 0x5261d4
// Original: _ZN23CTaskSimpleSlideToCoord10ProcessPedEP4CPed
// Demangled: CTaskSimpleSlideToCoord::ProcessPed(CPed *)
bool __fastcall CTaskSimpleSlideToCoord::ProcessPed(CTaskSimpleSlideToCoord *this, float **a2)
{
  int v4; // r8
  int v5; // r0
  int v6; // r1
  CTaskSimpleStandStill *v7; // r0
  float *v8; // r0
  float v9; // s4
  float *v10; // r1
  float v11; // s6
  float v12; // s12
  float v13; // s8
  float v14; // s14
  float v15; // s0
  float v16; // s10
  float v17; // s6
  float v18; // s4
  float v19; // s8
  float v20; // s12
  float v21; // r1
  _BYTE v23[48]; // [sp+8h] [bp-30h] BYREF

  if ( (*((_BYTE *)this + 120) & 2) != 0 )
    v4 = CTaskSimpleRunNamedAnim::ProcessPed(this, (CPed *)a2);
  else
    v4 = 1;
  v5 = *((unsigned __int8 *)this + 120);
  if ( *((_DWORD *)this + 31) == -1 )
  {
    if ( (v5 & 2) != 0 )
    {
      if ( v4 != 1 )
        goto LABEL_10;
      v6 = CTimer::m_snTimeInMilliseconds + 500;
    }
    else
    {
      v6 = CTimer::m_snTimeInMilliseconds + 2000;
    }
    *((_DWORD *)this + 31) = v6;
  }
LABEL_10:
  if ( v5 << 31 )
  {
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v23, 20000, 0, 0, 8.0);
    CTaskSimpleStandStill::ProcessPed(v7, (CPed *)a2);
    if ( CPed::IsPlayer((CPed *)a2) == 1 )
      (*(void (__fastcall **)(_DWORD, float **, int, _DWORD))(**((_DWORD **)a2[272] + 5) + 28))(
        *((_DWORD *)a2[272] + 5),
        a2,
        2,
        0);
    a2[344] = (float *)*((_DWORD *)this + 28);
    *((_BYTE *)this + 120) &= ~1u;
    CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v23);
  }
  v8 = a2[5];
  v9 = *((float *)this + 25);
  v10 = v8 + 12;
  v11 = *((float *)this + 26);
  if ( !v8 )
    v10 = (float *)(a2 + 1);
  v12 = v10[1];
  v13 = 0.0;
  v14 = 0.0;
  v15 = (float)((float)((float)(*v10 - v9) * (float)(*v10 - v9)) + (float)((float)(v12 - v11) * (float)(v12 - v11)))
      + 0.0;
  if ( v15 >= 0.0025 )
  {
    v16 = *((float *)this + 29);
    v17 = (float)(v11 - v12) * v16;
    v18 = (float)(v9 - *v10) * v16;
    v19 = (float)(*((float *)this + 27) - v10[2]) * v16;
    v20 = v19 * v8[6];
    v13 = (float)((float)(v18 * *v8) + (float)(v17 * v8[1])) + (float)(v19 * v8[2]);
    v14 = (float)((float)(v18 * v8[4]) + (float)(v17 * v8[5])) + v20;
  }
  *((float *)a2 + 314) = v14;
  *((float *)a2 + 313) = v13;
  v21 = *((float *)this + 31);
  return LODWORD(v21) < CTimer::m_snTimeInMilliseconds
      || ((v15 < 0.0025) & (unsigned __int8)v4) == 1
      && COERCE_FLOAT(CGeneral::LimitRadianAngle(COERCE_CGENERAL_(*((float *)a2 + 343) - *((float *)a2 + 344)), v21) & 0x7FFFFFFF) < 0.1;
}


// ============================================================

// Address: 0x528714
// Original: _ZNK23CTaskSimpleSlideToCoord5CloneEv
// Demangled: CTaskSimpleSlideToCoord::Clone(void)
int __fastcall CTaskSimpleSlideToCoord::Clone(CTaskSimpleSlideToCoord *this, unsigned int a2)
{
  char v3; // r6
  CTaskSimpleRunNamedAnim *v4; // r0
  __int64 v5; // kr00_8
  __int64 *v6; // r5
  int result; // r0
  char v8; // r2
  __int64 v9; // d16
  char v10; // r1
  char v11; // r2

  v3 = *((_BYTE *)this + 120);
  v4 = (CTaskSimpleRunNamedAnim *)CTask::operator new((CTask *)&dword_80, a2);
  v5 = *((_QWORD *)this + 14);
  v6 = (__int64 *)((char *)this + 100);
  if ( (v3 & 2) != 0 )
  {
    CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(
      v4,
      (const char *)this + 13,
      (const char *)this + 37,
      *((_DWORD *)this + 23),
      *((float *)this + 14),
      *((_DWORD *)this + 16),
      0,
      (*((_BYTE *)this + 12) & 0x10) != 0,
      0,
      0);
    *(_DWORD *)result = &off_66C4F0;
    v11 = *(_BYTE *)(result + 120);
    v9 = *v6;
    *(_DWORD *)(result + 108) = *((_DWORD *)this + 27);
    *(_QWORD *)(result + 112) = v5;
    *(_DWORD *)(result + 124) = -1;
    v10 = v11 | 3;
  }
  else
  {
    CTaskSimpleAnim::CTaskSimpleAnim(v4, 0);
    *(_WORD *)(result + 76) = 0;
    *(_DWORD *)(result + 68) = 0;
    *(_DWORD *)(result + 72) = 0;
    *(_DWORD *)result = &off_66C4F0;
    v8 = *(_BYTE *)(result + 120);
    v9 = *v6;
    *(_DWORD *)(result + 108) = *((_DWORD *)this + 27);
    *(_QWORD *)(result + 112) = v5;
    v10 = v8 & 0xFC | 1;
  }
  *(_BYTE *)(result + 120) = v10;
  *(_QWORD *)(result + 100) = v9;
  return result;
}


// ============================================================

// Address: 0x5287d8
// Original: _ZNK23CTaskSimpleSlideToCoord11GetTaskTypeEv
// Demangled: CTaskSimpleSlideToCoord::GetTaskType(void)
int __fastcall CTaskSimpleSlideToCoord::GetTaskType(CTaskSimpleSlideToCoord *this)
{
  return 934;
}


// ============================================================
