
// Address: 0x19156c
// Original: j__ZNK43CTaskComplexUseClosestFreeScriptedAttractor32ComputeClosestFreeScriptedEffectERK4CPed
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::ComputeClosestFreeScriptedEffect(CPed const&)
// attributes: thunk
int __fastcall CTaskComplexUseClosestFreeScriptedAttractor::ComputeClosestFreeScriptedEffect(
        CTaskComplexUseClosestFreeScriptedAttractor *this,
        const CPed *a2)
{
  return _ZNK43CTaskComplexUseClosestFreeScriptedAttractor32ComputeClosestFreeScriptedEffectERK4CPed(this, a2);
}


// ============================================================

// Address: 0x195a3c
// Original: j__ZN43CTaskComplexUseClosestFreeScriptedAttractorC2Eb
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(bool)
// attributes: thunk
void __fastcall CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(
        CTaskComplexUseClosestFreeScriptedAttractor *this,
        bool a2)
{
  _ZN43CTaskComplexUseClosestFreeScriptedAttractorC2Eb(this, a2);
}


// ============================================================

// Address: 0x198e64
// Original: j__ZN43CTaskComplexUseClosestFreeScriptedAttractorD2Ev
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::~CTaskComplexUseClosestFreeScriptedAttractor()
// attributes: thunk
void __fastcall CTaskComplexUseClosestFreeScriptedAttractor::~CTaskComplexUseClosestFreeScriptedAttractor(
        CTaskComplexUseClosestFreeScriptedAttractor *this)
{
  _ZN43CTaskComplexUseClosestFreeScriptedAttractorD2Ev(this);
}


// ============================================================

// Address: 0x19d47c
// Original: j__ZN43CTaskComplexUseClosestFreeScriptedAttractorC2Eb_0
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(bool)
// attributes: thunk
void __fastcall CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(
        CTaskComplexUseClosestFreeScriptedAttractor *this,
        bool a2)
{
  _ZN43CTaskComplexUseClosestFreeScriptedAttractorC2Eb(this, a2);
}


// ============================================================

// Address: 0x4f09f8
// Original: _ZN43CTaskComplexUseClosestFreeScriptedAttractorC2Eb
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(bool)
void __fastcall CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(
        CTaskComplexUseClosestFreeScriptedAttractor *this,
        bool a2)
{
  _DWORD *v2; // r0

  CTaskComplex::CTaskComplex(this);
  v2[3] = 4;
  *v2 = &off_66A5B0;
}


// ============================================================

// Address: 0x4f0a14
// Original: _ZN43CTaskComplexUseClosestFreeScriptedAttractorD2Ev
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::~CTaskComplexUseClosestFreeScriptedAttractor()
// attributes: thunk
void __fastcall CTaskComplexUseClosestFreeScriptedAttractor::~CTaskComplexUseClosestFreeScriptedAttractor(
        CTaskComplexUseClosestFreeScriptedAttractor *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f0a18
// Original: _ZN43CTaskComplexUseClosestFreeScriptedAttractorD0Ev
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::~CTaskComplexUseClosestFreeScriptedAttractor()
void __fastcall CTaskComplexUseClosestFreeScriptedAttractor::~CTaskComplexUseClosestFreeScriptedAttractor(
        CTaskComplexUseClosestFreeScriptedAttractor *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f0a28
// Original: _ZN43CTaskComplexUseClosestFreeScriptedAttractor17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseClosestFreeScriptedAttractor::CreateNextSubTask(
        CTaskComplexUseClosestFreeScriptedAttractor *this,
        CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4f0a2c
// Original: _ZN43CTaskComplexUseClosestFreeScriptedAttractor18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexUseClosestFreeScriptedAttractor::CreateFirstSubTask(
        CTaskComplexUseClosestFreeScriptedAttractor *this,
        CPed *a2)
{
  int v3; // r4
  unsigned int v4; // r1
  int v5; // r0
  CTaskComplex *v6; // r0
  int v7; // r0
  CTaskComplex *v8; // r0
  void **v9; // r1
  int v10; // r2
  CTaskComplex *v11; // r0
  char *v12; // r1

  v3 = CTaskComplexUseClosestFreeScriptedAttractor::ComputeClosestFreeScriptedEffect(this, a2);
  if ( v3 )
  {
    CInterestingEvents::Add();
    v5 = *((_DWORD *)this + 3);
    if ( v5 == 7 )
    {
      v8 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, v4);
      CTaskComplex::CTaskComplex(v8);
      *(_DWORD *)(v7 + 12) = v3;
      *(_DWORD *)(v7 + 16) = 0;
      v9 = (void **)&`vtable for'CTaskComplexUseEffectSprinting;
      *(_DWORD *)(v7 + 20) = 0;
      *(_DWORD *)(v7 + 24) = 0;
      *(_BYTE *)(v7 + 32) = 0;
      v10 = 7;
    }
    else
    {
      if ( v5 != 6 )
      {
        v6 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, v4);
        CTaskComplex::CTaskComplex(v6);
        v12 = (char *)&`vtable for'CTaskComplexUseEffect;
        *(_DWORD *)(v7 + 12) = v3;
        *(_DWORD *)(v7 + 16) = 0;
        *(_DWORD *)(v7 + 20) = 0;
        *(_DWORD *)(v7 + 24) = 0;
        *(_DWORD *)(v7 + 28) = 4;
        *(_BYTE *)(v7 + 32) = 0;
LABEL_9:
        *(_DWORD *)v7 = v12 + 8;
        return;
      }
      v11 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, v4);
      CTaskComplex::CTaskComplex(v11);
      *(_DWORD *)(v7 + 12) = v3;
      *(_DWORD *)(v7 + 16) = 0;
      v9 = (void **)&`vtable for'CTaskComplexUseEffectRunning;
      *(_DWORD *)(v7 + 20) = 0;
      *(_DWORD *)(v7 + 24) = 0;
      *(_BYTE *)(v7 + 32) = 0;
      v10 = 6;
    }
    v12 = (char *)*v9;
    *(_DWORD *)(v7 + 28) = v10;
    goto LABEL_9;
  }
}


// ============================================================

// Address: 0x4f0af8
// Original: _ZNK43CTaskComplexUseClosestFreeScriptedAttractor32ComputeClosestFreeScriptedEffectERK4CPed
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::ComputeClosestFreeScriptedEffect(CPed const&)
_DWORD *__fastcall CTaskComplexUseClosestFreeScriptedAttractor::ComputeClosestFreeScriptedEffect(
        CTaskComplexUseClosestFreeScriptedAttractor *this,
        const CPed *a2)
{
  int v3; // r8
  float v4; // s16
  _DWORD *v5; // r10
  char *v6; // r4
  _DWORD *v7; // r5
  int *v8; // r12
  int v9; // r1
  int v10; // r6
  int v11; // r3
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v15; // r0
  char *v16; // r1
  float32x2_t v17; // d16
  unsigned __int64 v18; // d1
  float v19; // s18
  const CPed *v20; // r11
  int *v21; // r9
  CPedAttractorManager *PedAttractorManager; // r0
  int HasEmptySlot; // r6
  _BYTE v25[64]; // [sp+20h] [bp-78h] BYREF
  int v26; // [sp+60h] [bp-38h]
  int v27; // [sp+64h] [bp-34h]

  v3 = 0;
  v4 = 3.4028e38;
  v5 = 0;
  v6 = CScripted2dEffects::ms_activated;
  v7 = CScripted2dEffects::ms_effects;
  v8 = CScripted2dEffects::ms_userLists;
  do
  {
    if ( *v6 )
    {
      if ( !LOBYTE(v8[v3 + 8])
        || (v9 = *((__int16 *)a2 + 19), v10 = CScripted2dEffects::ms_userLists[v3], v10 == v9)
        || (v11 = CScripted2dEffects::ms_userLists[v3 + 1], v11 == v9)
        || (v12 = CScripted2dEffects::ms_userLists[v3 + 2], v12 == v9)
        || (v13 = CScripted2dEffects::ms_userLists[v3 + 3], v13 == v9)
        || (v14 = *((_DWORD *)a2 + 359), v10 == -2) && CScripted2dEffects::ms_userLists[v3 + 4] == v14
        || v11 == -2 && CScripted2dEffects::ms_userLists[v3 + 5] == v14
        || v12 == -2 && CScripted2dEffects::ms_userLists[v3 + 6] == v14
        || v13 == -2 && CScripted2dEffects::ms_userLists[v3 + 7] == v14 )
      {
        v15 = *((_DWORD *)a2 + 5);
        v16 = (char *)(v15 + 48);
        if ( !v15 )
          v16 = (char *)a2 + 4;
        v17.n64_u64[0] = vsub_f32(*(float32x2_t *)(v16 + 4), *(float32x2_t *)(v7 + 1)).n64_u64[0];
        v18 = vmul_f32(v17, v17).n64_u64[0];
        v19 = (float)((float)((float)(*(float *)v16 - *(float *)v7) * (float)(*(float *)v16 - *(float *)v7))
                    + *(float *)&v18)
            + *((float *)&v18 + 1);
        if ( v19 < v4 )
        {
          v26 = 0;
          v27 = 0;
          v20 = a2;
          v21 = v8;
          CMatrix::SetScale((CMatrix *)v25, 1.0);
          PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
          HasEmptySlot = CPedAttractorManager::HasEmptySlot(PedAttractorManager, (const C2dEffect *)v7, 0);
          CMatrix::~CMatrix((CMatrix *)v25);
          v8 = v21;
          if ( HasEmptySlot )
          {
            v4 = v19;
            v5 = v7;
          }
          a2 = v20;
        }
      }
    }
    v3 += 9;
    v7 += 16;
    ++v6;
  }
  while ( v3 != 576 );
  return v5;
}


// ============================================================

// Address: 0x4f0cb0
// Original: _ZN43CTaskComplexUseClosestFreeScriptedAttractor14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseClosestFreeScriptedAttractor::ControlSubTask(
        CTaskComplexUseClosestFreeScriptedAttractor *this,
        CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f3f14
// Original: _ZNK43CTaskComplexUseClosestFreeScriptedAttractor5CloneEv
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::Clone(void)
_DWORD *__fastcall CTaskComplexUseClosestFreeScriptedAttractor::Clone(
        CTaskComplexUseClosestFreeScriptedAttractor *this,
        unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  CTaskComplex::CTaskComplex(v2);
  result[3] = 4;
  *result = &off_66A5B0;
  return result;
}


// ============================================================

// Address: 0x4f3f38
// Original: _ZNK43CTaskComplexUseClosestFreeScriptedAttractor11GetTaskTypeEv
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::GetTaskType(void)
int __fastcall CTaskComplexUseClosestFreeScriptedAttractor::GetTaskType(
        CTaskComplexUseClosestFreeScriptedAttractor *this)
{
  return 258;
}


// ============================================================

// Address: 0x4f3f40
// Original: _ZN43CTaskComplexUseClosestFreeScriptedAttractor9SerializeEv
// Demangled: CTaskComplexUseClosestFreeScriptedAttractor::Serialize(void)
int __fastcall CTaskComplexUseClosestFreeScriptedAttractor::Serialize(
        CTaskComplexUseClosestFreeScriptedAttractor *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexUseClosestFreeScriptedAttractor *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexUseClosestFreeScriptedAttractor *))(*(_DWORD *)this + 20))(this);
  if ( result != 258 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexUseClosestFreeScriptedAttractor *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(258, v6);
  }
  return result;
}


// ============================================================
