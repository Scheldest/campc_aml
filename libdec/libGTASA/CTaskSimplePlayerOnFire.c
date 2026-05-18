
// Address: 0x19ef6c
// Original: j__ZN23CTaskSimplePlayerOnFireC2Ev
// Demangled: CTaskSimplePlayerOnFire::CTaskSimplePlayerOnFire(void)
// attributes: thunk
void __fastcall CTaskSimplePlayerOnFire::CTaskSimplePlayerOnFire(CTaskSimplePlayerOnFire *this)
{
  _ZN23CTaskSimplePlayerOnFireC2Ev(this);
}


// ============================================================

// Address: 0x4ef8a0
// Original: _ZN23CTaskSimplePlayerOnFireC2Ev
// Demangled: CTaskSimplePlayerOnFire::CTaskSimplePlayerOnFire(void)
void __fastcall CTaskSimplePlayerOnFire::CTaskSimplePlayerOnFire(CTaskSimplePlayerOnFire *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_WORD *)(v1 + 16) = 0;
  *(_BYTE *)(v1 + 20) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)v1 = &off_66A438;
}


// ============================================================

// Address: 0x4ef8c4
// Original: _ZN23CTaskSimplePlayerOnFireD2Ev
// Demangled: CTaskSimplePlayerOnFire::~CTaskSimplePlayerOnFire()
// attributes: thunk
void __fastcall CTaskSimplePlayerOnFire::~CTaskSimplePlayerOnFire(CTaskSimplePlayerOnFire *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4ef8c8
// Original: _ZN23CTaskSimplePlayerOnFireD0Ev
// Demangled: CTaskSimplePlayerOnFire::~CTaskSimplePlayerOnFire()
void __fastcall CTaskSimplePlayerOnFire::~CTaskSimplePlayerOnFire(CTaskSimplePlayerOnFire *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ef8d8
// Original: _ZN23CTaskSimplePlayerOnFire10ProcessPedEP4CPed
// Demangled: CTaskSimplePlayerOnFire::ProcessPed(CPed *)
int __fastcall CTaskSimplePlayerOnFire::ProcessPed(CTaskSimplePlayerOnFire *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r6
  CLocalisation *v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r0
  _BYTE v12[52]; // [sp+10h] [bp-60h] BYREF
  double v13; // [sp+44h] [bp-2Ch]
  int v14; // [sp+4Ch] [bp-24h]
  double v15; // [sp+50h] [bp-20h]
  int v16; // [sp+58h] [bp-18h]

  if ( !*((_BYTE *)this + 16) )
  {
    *((_QWORD *)this + 1) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x138800000000LL;
    *((_BYTE *)this + 16) = 1;
  }
  if ( !*((_DWORD *)a2 + 462) )
    return 1;
  if ( *((_BYTE *)this + 17) )
  {
    v4 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 17) = 0;
    *((_DWORD *)this + 2) = v4;
    v5 = v4;
  }
  else
  {
    v5 = *((_DWORD *)this + 2);
    v4 = CTimer::m_snTimeInMilliseconds;
  }
  if ( v5 + *((_DWORD *)this + 3) <= v4 || CPedIntelligence::GetTaskSwim(*((CPedIntelligence **)a2 + 272)) )
  {
    CFire::Extinguish(*((CFire **)a2 + 462));
    return 1;
  }
  v6 = 0;
  if ( (CPed *)CWorld::Players[0] != a2 || !byte_96B7EA )
  {
    v15 = 0.0;
    v16 = 0;
    v8 = (CLocalisation *)(*((unsigned __int8 *)a2 + 70) << 28);
    if ( (*((_BYTE *)a2 + 70) & 8) != 0
      || ((v9 = *((_DWORD *)a2 + 462)) == 0 ? (v10 = 0) : (v10 = *(_DWORD *)(v9 + 20)),
          v11 = CPedDamageResponseCalculator::CPedDamageResponseCalculator(
                  (int)v12,
                  v10,
                  COERCE_INT((float)((float)(*((float *)a2 + 463) * 500.0) * *(float *)&CTimer::ms_fTimeStep) / 1000.0),
                  37,
                  3,
                  0),
          CPedDamageResponseCalculator::ComputeDamageResponse(v11, a2),
          CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v12),
          v8 = (CLocalisation *)(unsigned __int8)v16,
          !(_BYTE)v16) )
    {
      if ( CLocalisation::PedsOnFire(v8) )
        CPed::Say(a2, 0x15Au, 0, 0.1, 0, 0, 0);
      return 0;
    }
    else
    {
      if ( *((_BYTE *)this + 20) )
        return 1;
      if ( CLocalisation::PedsOnFire((CLocalisation *)*((unsigned __int8 *)this + 20)) )
        CPed::Say(a2, 0x15Au, 0, 0.1, 0, 0, 0);
      v6 = 0;
      CEventDamage::CEventDamage(
        (int)v12,
        0,
        CTimer::m_snTimeInMilliseconds,
        37,
        3,
        0,
        0,
        (*((_DWORD *)a2 + 289) >> 8) & 1);
      v14 = v16;
      v13 = v15;
      CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v12, 0);
      *((_BYTE *)this + 20) = 1;
      CEventDamage::~CEventDamage((CEventDamage *)v12);
    }
  }
  return v6;
}


// ============================================================

// Address: 0x4f3bd0
// Original: _ZNK23CTaskSimplePlayerOnFire5CloneEv
// Demangled: CTaskSimplePlayerOnFire::Clone(void)
int __fastcall CTaskSimplePlayerOnFire::Clone(CTaskSimplePlayerOnFire *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_WORD *)(result + 16) = 0;
  *(_BYTE *)(result + 20) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_66A438;
  return result;
}


// ============================================================

// Address: 0x4f3bf8
// Original: _ZNK23CTaskSimplePlayerOnFire11GetTaskTypeEv
// Demangled: CTaskSimplePlayerOnFire::GetTaskType(void)
int __fastcall CTaskSimplePlayerOnFire::GetTaskType(CTaskSimplePlayerOnFire *this)
{
  return 255;
}


// ============================================================

// Address: 0x4f3bfc
// Original: _ZN23CTaskSimplePlayerOnFire13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimplePlayerOnFire::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimplePlayerOnFire::MakeAbortable(
        CTaskSimplePlayerOnFire *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================

// Address: 0x4f3c00
// Original: _ZN23CTaskSimplePlayerOnFire9SerializeEv
// Demangled: CTaskSimplePlayerOnFire::Serialize(void)
int __fastcall CTaskSimplePlayerOnFire::Serialize(CTaskSimplePlayerOnFire *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimplePlayerOnFire *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimplePlayerOnFire *))(*(_DWORD *)this + 20))(this);
  if ( result != 255 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimplePlayerOnFire *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(255, v6);
  }
  return result;
}


// ============================================================
