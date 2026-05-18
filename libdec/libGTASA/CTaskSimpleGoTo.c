
// Address: 0x18c7fc
// Original: j__ZN15CTaskSimpleGoTo7SetUpIKEP4CPed
// Demangled: CTaskSimpleGoTo::SetUpIK(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGoTo::SetUpIK(CTaskSimpleGoTo *this, CPed *a2)
{
  return _ZN15CTaskSimpleGoTo7SetUpIKEP4CPed(this, a2);
}


// ============================================================

// Address: 0x192da0
// Original: j__ZN15CTaskSimpleGoTo16HasCircledTargetEP4CPed
// Demangled: CTaskSimpleGoTo::HasCircledTarget(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGoTo::HasCircledTarget(CTaskSimpleGoTo *this, CPed *a2)
{
  return _ZN15CTaskSimpleGoTo16HasCircledTargetEP4CPed(this, a2);
}


// ============================================================

// Address: 0x194f24
// Original: j__ZN15CTaskSimpleGoToC2EiRK7CVectorf
// Demangled: CTaskSimpleGoTo::CTaskSimpleGoTo(int,CVector const&,float)
// attributes: thunk
void __fastcall CTaskSimpleGoTo::CTaskSimpleGoTo(CTaskSimpleGoTo *this, int a2, const CVector *a3, float a4)
{
  _ZN15CTaskSimpleGoToC2EiRK7CVectorf(this, a2, a3, a4);
}


// ============================================================

// Address: 0x197c4c
// Original: j__ZN15CTaskSimpleGoTo6QuitIKEP4CPed
// Demangled: CTaskSimpleGoTo::QuitIK(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGoTo::QuitIK(CTaskSimpleGoTo *this, CPed *a2)
{
  return _ZN15CTaskSimpleGoTo6QuitIKEP4CPed(this, a2);
}


// ============================================================

// Address: 0x51c7a0
// Original: _ZN15CTaskSimpleGoToC2EiRK7CVectorf
// Demangled: CTaskSimpleGoTo::CTaskSimpleGoTo(int,CVector const&,float)
void __fastcall CTaskSimpleGoTo::CTaskSimpleGoTo(CTaskSimpleGoTo *this, int a2, const CVector *a3, float a4)
{
  int v7; // r0
  char v8; // r2
  __int64 v9; // d16

  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)(v7 + 8) = a2;
  *(_DWORD *)v7 = &off_66C0B0;
  v8 = *(_BYTE *)(v7 + 28);
  v9 = *(_QWORD *)a3;
  *(_DWORD *)(v7 + 20) = *((_DWORD *)a3 + 2);
  *(float *)(v7 + 24) = a4;
  *(_BYTE *)(v7 + 28) = v8 & 0xC0;
  *(_QWORD *)(v7 + 12) = v9;
}


// ============================================================

// Address: 0x51c7e4
// Original: _ZN15CTaskSimpleGoToD0Ev
// Demangled: CTaskSimpleGoTo::~CTaskSimpleGoTo()
void __fastcall __noreturn CTaskSimpleGoTo::~CTaskSimpleGoTo(CTaskSimpleGoTo *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x51c7e6
// Original: _ZN15CTaskSimpleGoTo16HasCircledTargetEP4CPed
// Demangled: CTaskSimpleGoTo::HasCircledTarget(CPed *)
bool __fastcall CTaskSimpleGoTo::HasCircledTarget(CTaskSimpleGoTo *this, CPed *a2)
{
  int v2; // r3
  float *v3; // r2
  float v4; // s2
  float v5; // s0
  float v6; // s4
  char v7; // r1
  float v8; // s2
  char v9; // r1
  int v10; // r1

  v2 = *((_DWORD *)a2 + 5);
  v3 = (float *)(v2 + 48);
  if ( !v2 )
    v3 = (float *)((char *)a2 + 4);
  v4 = *v3;
  v5 = v3[1];
  if ( (*((_BYTE *)a2 + 1168) & 0x40) == 0 && fabsf(v3[2] - *((float *)this + 5)) >= 2.0 )
    return 0;
  v6 = *((float *)this + 3);
  if ( v4 >= v6 )
  {
    if ( v4 <= v6 )
      goto LABEL_10;
    v7 = 2;
  }
  else
  {
    v7 = 1;
  }
  *((_BYTE *)this + 28) = (v7 | *((_BYTE *)this + 28)) & 0xF | *((_BYTE *)this + 28) & 0xF0;
LABEL_10:
  v8 = *((float *)this + 4);
  if ( v5 < v8 )
  {
    v9 = 4;
LABEL_14:
    v10 = ((unsigned __int8)v9 | *((_BYTE *)this + 28)) & 0xF | (16 * (*((unsigned __int8 *)this + 28) >> 4));
    *((_BYTE *)this + 28) = v10;
    return (v10 & 0xF) == 0xF;
  }
  if ( v5 > v8 )
  {
    v9 = 8;
    goto LABEL_14;
  }
  LOBYTE(v10) = *((_BYTE *)this + 28);
  return (v10 & 0xF) == 0xF;
}


// ============================================================

// Address: 0x51c890
// Original: _ZN15CTaskSimpleGoTo7SetUpIKEP4CPed
// Demangled: CTaskSimpleGoTo::SetUpIK(CPed *)
int __fastcall CTaskSimpleGoTo::SetUpIK(CTaskSimpleGoTo *this, CPed *a2)
{
  int Pad; // r6
  int result; // r0
  bool v6; // zf
  int v7; // r0
  float *v8; // r6
  float *v9; // r1
  float v10; // s0
  float v11; // s4
  float v12; // s4
  float v13; // s6
  float v14[3]; // [sp+20h] [bp-28h] BYREF
  float v15; // [sp+2Ch] [bp-1Ch] BYREF
  float v16; // [sp+30h] [bp-18h]
  float v17; // [sp+34h] [bp-14h]

  Pad = CPad::GetPad(0, (int)a2);
  result = CEntity::GetIsOnScreen(a2);
  if ( result == 1 )
  {
    result = *((unsigned __int8 *)this + 28) << 27;
    if ( (*((_BYTE *)this + 28) & 0x10) == 0 )
    {
      result = IKChainManager_c::GetLookAtEntity((IKChainManager_c *)&g_ikChainMan, a2);
      if ( !result )
      {
        result = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 5);
        if ( !result )
        {
          result = FindPlayerPed(-1);
          v6 = result == (_DWORD)a2;
          if ( (CPed *)result == a2 )
          {
            result = *(unsigned __int16 *)(Pad + 272);
            v6 = result == 0;
          }
          if ( !v6 )
          {
            v7 = *((_DWORD *)this + 1);
            if ( !v7
              || (result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7), result != 917)
              && (result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 20))(*((_DWORD *)this + 1)),
                  result != 939) )
            {
              result = *((_DWORD *)a2 + 5);
              v8 = (float *)((char *)a2 + 4);
              v9 = (float *)((char *)a2 + 4);
              if ( result )
                v9 = (float *)(result + 48);
              v10 = *((float *)this + 3) - *v9;
              v11 = *((float *)this + 5) - v9[2];
              v16 = *((float *)this + 4) - v9[1];
              v15 = v10;
              v17 = v11;
              if ( (float)((float)((float)(v10 * v10) + (float)(v16 * v16)) + (float)(v11 * v11)) > 9.0 )
              {
                CVector::Normalise((CVector *)&v15);
                result = *((_DWORD *)a2 + 5);
                if ( (float)((float)((float)(v15 * *(float *)(result + 16)) + (float)(v16 * *(float *)(result + 20)))
                           + (float)(v17 * *(float *)(result + 24))) < *(float *)&dword_9FEFB0 )
                {
                  if ( result )
                    v8 = (float *)(result + 48);
                  v12 = (float)(v17 + v17) + v8[2];
                  v13 = *((float *)this + 3);
                  v14[1] = (float)(v16 + v16) + *((float *)this + 4);
                  v14[0] = (float)(v15 + v15) + v13;
                  v14[2] = v12 + 0.61;
                  IKChainManager_c::LookAt(
                    (int)&g_ikChainMan,
                    (int)"TaskGoTo",
                    a2,
                    0,
                    5000,
                    -1,
                    (int)v14,
                    0,
                    0.25,
                    500,
                    3,
                    0);
                  result = *((unsigned __int8 *)this + 28) | 0x10;
                  *((_BYTE *)this + 28) = result;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x51ca54
// Original: _ZN15CTaskSimpleGoTo6QuitIKEP4CPed
// Demangled: CTaskSimpleGoTo::QuitIK(CPed *)
int __fastcall CTaskSimpleGoTo::QuitIK(CTaskSimpleGoTo *this, CPed *a2)
{
  int result; // r0

  result = *((unsigned __int8 *)this + 28) << 27;
  if ( result < 0 )
  {
    result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2);
    if ( result )
      return sub_1A0F0C((IKChainManager_c *)&g_ikChainMan, a2, 250);
  }
  return result;
}


// ============================================================
