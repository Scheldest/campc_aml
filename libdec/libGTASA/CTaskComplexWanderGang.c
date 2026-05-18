
// Address: 0x18ef14
// Original: j__ZN22CTaskComplexWanderGang11CanJoinGangEv
// Demangled: CTaskComplexWanderGang::CanJoinGang(void)
// attributes: thunk
int __fastcall CTaskComplexWanderGang::CanJoinGang(CTaskComplexWanderGang *this)
{
  return _ZN22CTaskComplexWanderGang11CanJoinGangEv(this);
}


// ============================================================

// Address: 0x19414c
// Original: j__ZN22CTaskComplexWanderGangC2Eihibf
// Demangled: CTaskComplexWanderGang::CTaskComplexWanderGang(int,uchar,int,bool,float)
// attributes: thunk
void __fastcall CTaskComplexWanderGang::CTaskComplexWanderGang(
        CTaskComplexWanderGang *this,
        int a2,
        unsigned __int8 a3,
        int a4,
        bool a5,
        float a6)
{
  _ZN22CTaskComplexWanderGangC2Eihibf(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19e3dc
// Original: j__ZN22CTaskComplexWanderGang19GetDistanceSqToNodeEP4CPed
// Demangled: CTaskComplexWanderGang::GetDistanceSqToNode(CPed *)
// attributes: thunk
int __fastcall CTaskComplexWanderGang::GetDistanceSqToNode(CTaskComplexWanderGang *this, CPed *a2)
{
  return _ZN22CTaskComplexWanderGang19GetDistanceSqToNodeEP4CPed(this, a2);
}


// ============================================================

// Address: 0x521968
// Original: _ZN22CTaskComplexWanderGangC2Eihibf
// Demangled: CTaskComplexWanderGang::CTaskComplexWanderGang(int,uchar,int,bool,float)
void __fastcall CTaskComplexWanderGang::CTaskComplexWanderGang(
        CTaskComplexWanderGang *this,
        int a2,
        unsigned __int8 a3,
        int a4,
        bool a5,
        float a6)
{
  int v9; // r0
  char v10; // r5
  int v11; // r1

  CTaskComplex::CTaskComplex(this);
  *(_BYTE *)(v9 + 16) = a3;
  *(_DWORD *)(v9 + 12) = a2;
  *(float *)(v9 + 20) = a6;
  *(_WORD *)(v9 + 24) = -1;
  *(_WORD *)(v9 + 28) = -1;
  *(_DWORD *)(v9 + 32) = 0;
  *(_WORD *)(v9 + 48) = 0;
  v10 = *(_BYTE *)(v9 + 36);
  *(_DWORD *)(v9 + 52) = a4;
  *(_DWORD *)(v9 + 40) = 0;
  *(_DWORD *)(v9 + 44) = 0;
  *(_BYTE *)(v9 + 36) = a5 | v10 & 0xF0;
  *(_DWORD *)v9 = &off_66C734;
  v11 = CTimer::m_snTimeInMilliseconds;
  *(_BYTE *)(v9 + 48) = 1;
  *(_DWORD *)(v9 + 40) = v11;
  *(_DWORD *)(v9 + 44) = a4;
}


// ============================================================

// Address: 0x5219d4
// Original: _ZN22CTaskComplexWanderGang11CanJoinGangEv
// Demangled: CTaskComplexWanderGang::CanJoinGang(void)
bool __fastcall CTaskComplexWanderGang::CanJoinGang(CTaskComplexWanderGang *this)
{
  unsigned int v2; // r1
  unsigned int v3; // r2

  if ( !*((_BYTE *)this + 48) )
    return 0;
  if ( *((_BYTE *)this + 49) )
  {
    v2 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 49) = 0;
    *((_DWORD *)this + 10) = v2;
    v3 = v2;
  }
  else
  {
    v3 = *((_DWORD *)this + 10);
    v2 = CTimer::m_snTimeInMilliseconds;
  }
  return v3 + *((_DWORD *)this + 11) <= v2;
}


// ============================================================

// Address: 0x521a1c
// Original: _ZN22CTaskComplexWanderGang19GetDistanceSqToNodeEP4CPed
// Demangled: CTaskComplexWanderGang::GetDistanceSqToNode(CPed *)
unsigned __int32 __fastcall CTaskComplexWanderGang::GetDistanceSqToNode(CTaskComplexWanderGang *this, CPed *a2)
{
  float32x2_t v2; // d0
  int v3; // r3
  float32x2_t v4; // d1
  __int16 *v5; // r2
  int v6; // r4
  float v7; // s6
  int v8; // r3
  float v9; // s8
  float *v10; // r2
  int v11; // r3
  __int16 *v12; // r0
  int v13; // r3
  float v14; // s6
  int v15; // r2
  float v16; // s8
  float *v17; // r0

  v2.n64_u32[0] = 1232348144;
  v3 = *((unsigned __int16 *)this + 14);
  v4.n64_u64[0] = v2.n64_u64[0];
  if ( v3 != 0xFFFF )
  {
    v4.n64_u64[0] = v2.n64_u64[0];
    if ( ThePaths[*((unsigned __int16 *)this + 14) + 513] )
    {
      v5 = (__int16 *)(ThePaths[v3 + 513] + 28 * *((unsigned __int16 *)this + 15));
      v6 = v5[5];
      v7 = (float)v5[4];
      v8 = *((_DWORD *)a2 + 5);
      v9 = (float)v5[6];
      v10 = (float *)(v8 + 48);
      if ( !v8 )
        v10 = (float *)((char *)a2 + 4);
      v4.n64_f32[0] = (float)((float)((float)((float)(v7 * 0.125) - *v10) * (float)((float)(v7 * 0.125) - *v10))
                            + (float)((float)((float)((float)v6 * 0.125) - v10[1])
                                    * (float)((float)((float)v6 * 0.125) - v10[1])))
                    + (float)((float)((float)(v9 * 0.125) - v10[2]) * (float)((float)(v9 * 0.125) - v10[2]));
    }
  }
  v11 = *((unsigned __int16 *)this + 12);
  if ( v11 != 0xFFFF && ThePaths[*((unsigned __int16 *)this + 12) + 513] )
  {
    v12 = (__int16 *)(ThePaths[v11 + 513] + 28 * *((unsigned __int16 *)this + 13));
    v13 = v12[5];
    v14 = (float)v12[4];
    v15 = *((_DWORD *)a2 + 5);
    v16 = (float)v12[6];
    v17 = (float *)(v15 + 48);
    if ( !v15 )
      v17 = (float *)((char *)a2 + 4);
    v2.n64_f32[0] = (float)((float)((float)((float)(v14 * 0.125) - *v17) * (float)((float)(v14 * 0.125) - *v17))
                          + (float)((float)((float)((float)v13 * 0.125) - v17[1])
                                  * (float)((float)((float)v13 * 0.125) - v17[1])))
                  + (float)((float)((float)(v16 * 0.125) - v17[2]) * (float)((float)(v16 * 0.125) - v17[2]));
  }
  return vmin_f32(v2, v4).n64_u32[0];
}


// ============================================================

// Address: 0x528b98
// Original: _ZN22CTaskComplexWanderGangD0Ev
// Demangled: CTaskComplexWanderGang::~CTaskComplexWanderGang()
void __fastcall CTaskComplexWanderGang::~CTaskComplexWanderGang(CTaskComplexWanderGang *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x528ba8
// Original: _ZNK22CTaskComplexWanderGang5CloneEv
// Demangled: CTaskComplexWanderGang::Clone(void)
int __fastcall CTaskComplexWanderGang::Clone(CTaskComplexWanderGang *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  char v4; // r8
  int v5; // r5
  int v6; // r6
  int result; // r0
  char v8; // r3

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, a2);
  v4 = *((_BYTE *)this + 36);
  v5 = *((_DWORD *)this + 13);
  v6 = *((_DWORD *)this + 3);
  LOBYTE(this) = *((_BYTE *)this + 16);
  CTaskComplex::CTaskComplex(v3);
  *(_BYTE *)(result + 16) = (_BYTE)this;
  *(_DWORD *)(result + 12) = v6;
  *(_DWORD *)(result + 20) = 1056964608;
  *(_WORD *)(result + 24) = -1;
  *(_WORD *)(result + 28) = -1;
  *(_DWORD *)(result + 32) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = v5;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  v8 = *(_BYTE *)(result + 36);
  *(_DWORD *)result = &off_66C734;
  *(_BYTE *)(result + 36) = v4 & 1 | v8 & 0xF0;
  *(_DWORD *)(result + 40) = CTimer::m_snTimeInMilliseconds;
  *(_DWORD *)(result + 44) = v5;
  *(_BYTE *)(result + 48) = 1;
  return result;
}


// ============================================================

// Address: 0x528c20
// Original: _ZNK22CTaskComplexWanderGang13GetWanderTypeEv
// Demangled: CTaskComplexWanderGang::GetWanderType(void)
int __fastcall CTaskComplexWanderGang::GetWanderType(CTaskComplexWanderGang *this)
{
  return 4;
}


// ============================================================

// Address: 0x528c24
// Original: _ZN22CTaskComplexWanderGang12ScanForStuffEP4CPed
// Demangled: CTaskComplexWanderGang::ScanForStuff(CPed *)
void __fastcall CTaskComplexWanderGang::ScanForStuff(CTaskComplexWanderGang *this, CPed *a2)
{
  ;
}


// ============================================================
