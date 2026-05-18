
// Address: 0x18a15c
// Original: j__ZN22CEventEditableResponseC2Ev
// Demangled: CEventEditableResponse::CEventEditableResponse(void)
// attributes: thunk
void __fastcall CEventEditableResponse::CEventEditableResponse(CEventEditableResponse *this)
{
  _ZN22CEventEditableResponseC2Ev(this);
}


// ============================================================

// Address: 0x18a168
// Original: j__ZNK22CEventEditableResponse22InformVehicleOccupantsEP4CPed
// Demangled: CEventEditableResponse::InformVehicleOccupants(CPed *)
// attributes: thunk
int __fastcall CEventEditableResponse::InformVehicleOccupants(CEventEditableResponse *this, CPed *a2)
{
  return _ZNK22CEventEditableResponse22InformVehicleOccupantsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18addc
// Original: j__ZNK22CEventEditableResponse25ComputeResponseTaskOfTypeEP4CPedi
// Demangled: CEventEditableResponse::ComputeResponseTaskOfType(CPed *,int)
// attributes: thunk
int __fastcall CEventEditableResponse::ComputeResponseTaskOfType(CEventEditableResponse *this, CPed *a2, int a3)
{
  return _ZNK22CEventEditableResponse25ComputeResponseTaskOfTypeEP4CPedi(this, a2, a3);
}


// ============================================================

// Address: 0x18c98c
// Original: j__ZN22CEventEditableResponse23ComputeResponseTaskTypeEP4CPedb
// Demangled: CEventEditableResponse::ComputeResponseTaskType(CPed *,bool)
// attributes: thunk
int __fastcall CEventEditableResponse::ComputeResponseTaskType(CEventEditableResponse *this, CPed *a2, bool a3)
{
  return _ZN22CEventEditableResponse23ComputeResponseTaskTypeEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x194700
// Original: j__ZNK22CEventEditableResponse11InformGroupEP4CPed
// Demangled: CEventEditableResponse::InformGroup(CPed *)
// attributes: thunk
int __fastcall CEventEditableResponse::InformGroup(CEventEditableResponse *this, CPed *a2)
{
  return _ZNK22CEventEditableResponse11InformGroupEP4CPed(this, a2);
}


// ============================================================

// Address: 0x198e4c
// Original: j__ZN22CEventEditableResponse23ComputeResponseTaskTypeEP9CPedGroup
// Demangled: CEventEditableResponse::ComputeResponseTaskType(CPedGroup *)
// attributes: thunk
int __fastcall CEventEditableResponse::ComputeResponseTaskType(CEventEditableResponse *this, CPedGroup *a2)
{
  return _ZN22CEventEditableResponse23ComputeResponseTaskTypeEP9CPedGroup(this, a2);
}


// ============================================================

// Address: 0x19a0a0
// Original: j__ZNK22CEventEditableResponse22InformRespectedFriendsEP4CPed
// Demangled: CEventEditableResponse::InformRespectedFriends(CPed *)
// attributes: thunk
int __fastcall CEventEditableResponse::InformRespectedFriends(CEventEditableResponse *this, CPed *a2)
{
  return _ZNK22CEventEditableResponse22InformRespectedFriendsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19a994
// Original: j__ZNK22CEventEditableResponse11WillRespondEv
// Demangled: CEventEditableResponse::WillRespond(void)
// attributes: thunk
int __fastcall CEventEditableResponse::WillRespond(CEventEditableResponse *this)
{
  return _ZNK22CEventEditableResponse11WillRespondEv(this);
}


// ============================================================

// Address: 0x19f0e0
// Original: j__ZNK22CEventEditableResponse13TriggerLookAtEP4CPed
// Demangled: CEventEditableResponse::TriggerLookAt(CPed *)
// attributes: thunk
int __fastcall CEventEditableResponse::TriggerLookAt(CEventEditableResponse *this, CPed *a2)
{
  return _ZNK22CEventEditableResponse13TriggerLookAtEP4CPed(this, a2);
}


// ============================================================

// Address: 0x2fcdf4
// Original: _ZNK22CEventEditableResponse5CloneEv
// Demangled: CEventEditableResponse::Clone(void)
int __fastcall CEventEditableResponse::Clone(CEventEditableResponse *this)
{
  int result; // r0

  result = (*(int (__fastcall **)(CEventEditableResponse *))(*(_DWORD *)this + 68))(this);
  *(_WORD *)(result + 10) = *((_WORD *)this + 5);
  *(_WORD *)(result + 12) = *((_WORD *)this + 6);
  *(_BYTE *)(result + 9) = *((_BYTE *)this + 9);
  return result;
}


// ============================================================

// Address: 0x2fce16
// Original: _ZNK22CEventEditableResponse19HasEditableResponseEv
// Demangled: CEventEditableResponse::HasEditableResponse(void)
int __fastcall CEventEditableResponse::HasEditableResponse(CEventEditableResponse *this)
{
  return 1;
}


// ============================================================

// Address: 0x370518
// Original: _ZN22CEventEditableResponse23ComputeResponseTaskTypeEP9CPedGroup
// Demangled: CEventEditableResponse::ComputeResponseTaskType(CPedGroup *)
int __fastcall CEventEditableResponse::ComputeResponseTaskType(CEventEditableResponse *this, CPedGroup *a2)
{
  int result; // r0
  int v5; // r8
  CPed *Leader; // r0
  const CEvent *v7; // r5
  const CPed *v8; // r2
  int v9; // r4
  int Member; // r0
  int v11; // r10
  int v12; // r4
  CDecisionMakerTypes *v13; // r0
  CDecisionMakerTypes *v14; // r0
  CPed *v15; // r0
  const CEvent *v16; // r4
  const CPed *v17; // r2
  int v18; // r5
  int v19; // r4
  CDecisionMakerTypes *v20; // r0
  CDecisionMakerTypes *v21; // r0

  result = *((unsigned __int16 *)this + 5);
  if ( result != 200 )
    return result;
  v5 = (*(int (__fastcall **)(CEventEditableResponse *))(*(_DWORD *)this + 8))(this);
  Leader = (CPed *)CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8));
  v7 = Leader;
  if ( !Leader || CPed::IsPlayer(Leader) == 1 )
  {
    v9 = 0;
    do
    {
      Member = CPedGroupMembership::GetMember((CPedGroup *)((char *)a2 + 8), v9);
      v7 = (const CEvent *)Member;
      if ( v9 > 5 )
        break;
      ++v9;
    }
    while ( !Member );
    if ( !Member )
    {
      *((_WORD *)this + 5) = 200;
LABEL_13:
      result = CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8));
      if ( result )
      {
        v15 = (CPed *)CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8));
        result = CPed::IsPlayer(v15);
        if ( result == 1 )
        {
          v16 = (const CEvent *)CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8));
          v18 = CEventSource::ComputeEventSourceType(this, v16, v17);
          v19 = *((_DWORD *)v16 + 289) & 0x100;
          v20 = (CDecisionMakerTypes *)CDecisionMakerTypes::m_pPedDecisionTypes;
          if ( !CDecisionMakerTypes::m_pPedDecisionTypes )
          {
            v21 = (CDecisionMakerTypes *)operator new(0xF1C0u);
            CDecisionMakerTypes::CDecisionMakerTypes(v21);
            CDecisionMakerTypes::m_pPedDecisionTypes = (int)v20;
          }
          result = CDecisionMakerTypes::MakeDecision(v20, a2, v5, v18, v19 != 0, 1200, 1700, 300, -1);
          *((_WORD *)this + 5) = result;
        }
      }
      return result;
    }
  }
  v11 = CEventSource::ComputeEventSourceType(this, v7, v8);
  v12 = *((_DWORD *)v7 + 289) & 0x100;
  v13 = (CDecisionMakerTypes *)CDecisionMakerTypes::m_pPedDecisionTypes;
  if ( !CDecisionMakerTypes::m_pPedDecisionTypes )
  {
    v14 = (CDecisionMakerTypes *)operator new(0xF1C0u);
    CDecisionMakerTypes::CDecisionMakerTypes(v14);
    CDecisionMakerTypes::m_pPedDecisionTypes = (int)v13;
  }
  LOWORD(result) = CDecisionMakerTypes::MakeDecision(v13, a2, v5, v11, v12 != 0, 1200, 1700, 300, -1);
  *((_WORD *)this + 5) = result;
  result = (unsigned __int16)result;
  if ( (unsigned __int16)result == 200 )
    goto LABEL_13;
  return result;
}


// ============================================================

// Address: 0x3706bc
// Original: _ZN22CEventEditableResponseC2Ev
// Demangled: CEventEditableResponse::CEventEditableResponse(void)
void __fastcall CEventEditableResponse::CEventEditableResponse(CEventEditableResponse *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_665DD0;
}


// ============================================================

// Address: 0x3706e0
// Original: _ZN22CEventEditableResponseD0Ev
// Demangled: CEventEditableResponse::~CEventEditableResponse()
void __fastcall __noreturn CEventEditableResponse::~CEventEditableResponse(CEventEditableResponse *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x3706e4
// Original: _ZN22CEventEditableResponse23ComputeResponseTaskTypeEP4CPedb
// Demangled: CEventEditableResponse::ComputeResponseTaskType(CPed *,bool)
int __fastcall CEventEditableResponse::ComputeResponseTaskType(CEventEditableResponse *this, CPed *a2, bool a3)
{
  int result; // r0
  __int16 *v7; // r5
  int v8; // r8
  const CPed *v9; // r2
  int v10; // r9
  int v11; // r4
  CDecisionMakerTypes *v12; // r0
  CDecisionMakerTypes *v13; // r0

  v7 = (__int16 *)((char *)this + 10);
  result = *((unsigned __int16 *)this + 5);
  if ( result == 200 )
  {
    v8 = (*(int (__fastcall **)(CEventEditableResponse *))(*(_DWORD *)this + 8))(this);
    v10 = CEventSource::ComputeEventSourceType(this, a2, v9);
    v11 = *((_DWORD *)a2 + 289) & 0x100;
    v12 = (CDecisionMakerTypes *)CDecisionMakerTypes::m_pPedDecisionTypes;
    if ( !CDecisionMakerTypes::m_pPedDecisionTypes )
    {
      v13 = (CDecisionMakerTypes *)operator new(0xF1C0u);
      CDecisionMakerTypes::CDecisionMakerTypes(v13);
      CDecisionMakerTypes::m_pPedDecisionTypes = (int)v12;
    }
    return CDecisionMakerTypes::MakeDecision(
             v12,
             a2,
             v8,
             v10,
             v11 != 0,
             1700,
             1200,
             300,
             -1,
             a3,
             v7,
             (__int16 *)this + 6);
  }
  return result;
}


// ============================================================

// Address: 0x37077c
// Original: _ZNK22CEventEditableResponse25ComputeResponseTaskOfTypeEP4CPedi
// Demangled: CEventEditableResponse::ComputeResponseTaskOfType(CPed *,int)
bool __fastcall CEventEditableResponse::ComputeResponseTaskOfType(CEventEditableResponse *this, CPed *a2, int a3)
{
  int v6; // r8
  const CPed *v7; // r2
  int v8; // r9
  int v9; // r4
  CDecisionMakerTypes *v10; // r0
  CDecisionMakerTypes *v11; // r0
  __int16 v13; // [sp+24h] [bp-1Ch] BYREF
  __int16 v14[13]; // [sp+26h] [bp-1Ah] BYREF

  v6 = (*(int (__fastcall **)(CEventEditableResponse *))(*(_DWORD *)this + 8))(this);
  v8 = CEventSource::ComputeEventSourceType(this, a2, v7);
  v9 = *((_DWORD *)a2 + 289) & 0x100;
  v10 = (CDecisionMakerTypes *)CDecisionMakerTypes::m_pPedDecisionTypes;
  if ( !CDecisionMakerTypes::m_pPedDecisionTypes )
  {
    v11 = (CDecisionMakerTypes *)operator new(0xF1C0u);
    CDecisionMakerTypes::CDecisionMakerTypes(v11);
    CDecisionMakerTypes::m_pPedDecisionTypes = (int)v10;
  }
  CDecisionMakerTypes::MakeDecision(v10, a2, v6, v8, v9 != 0, -1, -1, -1, a3, 0, v14, &v13);
  return v14[0] == a3;
}


// ============================================================

// Address: 0x370810
// Original: _ZNK22CEventEditableResponse11WillRespondEv
// Demangled: CEventEditableResponse::WillRespond(void)
bool __fastcall CEventEditableResponse::WillRespond(CEventEditableResponse *this)
{
  return *((unsigned __int16 *)this + 5) != 200;
}


// ============================================================

// Address: 0x37081c
// Original: _ZNK22CEventEditableResponse11InformGroupEP4CPed
// Demangled: CEventEditableResponse::InformGroup(CPed *)
int __fastcall CEventEditableResponse::InformGroup(CEventEditableResponse *this, CPed *a2)
{
  CPed *PedsGroup; // r6
  int v5; // r4
  int v6; // r5
  CEvent *v7; // r3
  int v8; // r0

  PedsGroup = (CPed *)CPedGroups::GetPedsGroup(a2, a2);
  v5 = 0;
  if ( PedsGroup )
  {
    v6 = (*(int (__fastcall **)(CEventEditableResponse *))(*(_DWORD *)this + 20))(this);
    *(_WORD *)(v6 + 10) = 200;
    *(_BYTE *)(v6 + 9) = 0;
    v8 = CInformGroupEventQueue::Add(a2, PedsGroup, (CPedGroup *)v6, v7);
    v5 = 1;
    if ( v6 )
    {
      if ( !v8 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
        return 1;
      }
    }
  }
  return v5;
}


// ============================================================

// Address: 0x370866
// Original: _ZNK22CEventEditableResponse22InformRespectedFriendsEP4CPed
// Demangled: CEventEditableResponse::InformRespectedFriends(CPed *)
bool __fastcall CEventEditableResponse::InformRespectedFriends(CEventEditableResponse *this, CPed *a2)
{
  int v3; // r0
  int v4; // r11
  float v5; // s16
  float v6; // s16
  int v7; // r6
  int v8; // r9
  int v9; // r8
  CPedType **v10; // r5
  int v11; // r1
  int v12; // r4
  CPedType **v13; // r0
  CPedType *v14; // r0
  int v15; // r1
  _DWORD *v16; // r2
  char *v17; // r0
  float32x2_t v18; // d16
  unsigned __int64 v19; // d1
  CPed *v20; // r4
  CEvent *v21; // r2
  bool v22; // cc
  int Acquaintances; // [sp+4h] [bp-34h]

  if ( !*((_BYTE *)this + 9) )
    return 0;
  v3 = *((_DWORD *)a2 + 272);
  v4 = *(_DWORD *)(v3 + 196);
  if ( !v4 )
    return 0;
  v5 = *(float *)(v3 + 200);
  Acquaintances = CAcquaintance::GetAcquaintances((CPed *)((char *)a2 + 1260), 0);
  if ( v4 >= 1 )
  {
    v6 = v5 * v5;
    v7 = 0;
    v8 = 0;
    v9 = *((_DWORD *)a2 + 272) + 304;
    while ( 1 )
    {
      v10 = *(CPedType ***)(v9 + 4 * v8);
      if ( v10 )
      {
        if ( *((_DWORD *)a2 + 359) == 6 )
        {
          if ( v10[359] == (CPedType *)byte_6 && !*(_DWORD *)(**(_DWORD **)(FindPlayerPed(0) + 1092) + 44) )
            goto LABEL_14;
        }
        else
        {
          if ( CPed::IsPlayer(a2) == 1 )
          {
            v12 = CAcquaintance::GetAcquaintances((CAcquaintance *)(v10 + 315), 0);
            v13 = (CPedType **)((char *)a2 + 1436);
          }
          else
          {
            v12 = Acquaintances;
            v13 = v10 + 359;
          }
          if ( (CPedType::GetPedFlag(*v13, v11) & v12) != 0 )
          {
LABEL_14:
            v14 = v10[5];
            v15 = *((_DWORD *)a2 + 5);
            v16 = (_DWORD *)((char *)v14 + 48);
            if ( !v14 )
              v16 = v10 + 1;
            v17 = (char *)(v15 + 48);
            if ( !v15 )
              v17 = (char *)a2 + 4;
            v18.n64_u64[0] = vsub_f32(*(float32x2_t *)(v17 + 4), *(float32x2_t *)(v16 + 1)).n64_u64[0];
            v19 = vmul_f32(v18, v18).n64_u64[0];
            if ( (float)((float)((float)((float)(*(float *)v17 - *(float *)v16) * (float)(*(float *)v17 - *(float *)v16))
                               + *(float *)&v19)
                       + *((float *)&v19 + 1)) < v6 )
            {
              v20 = (CPed *)(*(int (__fastcall **)(CEventEditableResponse *))(*(_DWORD *)this + 20))(this);
              *((_WORD *)v20 + 5) = 200;
              *((_BYTE *)v20 + 9) = 0;
              if ( CInformFriendsEventQueue::Add((CInformFriendsEventQueue *)v10, v20, v21) == 1 )
              {
                ++v7;
              }
              else if ( v20 )
              {
                (*(void (__fastcall **)(CPed *))(*(_DWORD *)v20 + 4))(v20);
              }
            }
          }
        }
      }
      v22 = v8 < 14;
      if ( v8 <= 14 )
      {
        ++v8;
        v22 = v7 < v4;
      }
      if ( !v22 )
        return v7 != 0;
    }
  }
  v7 = 0;
  return v7 != 0;
}


// ============================================================

// Address: 0x3709bc
// Original: _ZNK22CEventEditableResponse22InformVehicleOccupantsEP4CPed
// Demangled: CEventEditableResponse::InformVehicleOccupants(CPed *)
int __fastcall CEventEditableResponse::InformVehicleOccupants(CEventEditableResponse *this, CPed *a2)
{
  int v4; // r8
  CPed *v5; // r4
  bool v6; // zf
  int v7; // r6
  unsigned __int8 v8; // r0
  int v9; // r10
  CPed *v10; // r11
  bool v11; // zf
  int v12; // r6

  if ( *((unsigned __int8 *)a2 + 1157) << 31
    && (*(int (__fastcall **)(CEventEditableResponse *, CPed *))(*(_DWORD *)this + 56))(this, a2) == 1
    && *((_BYTE *)this + 9) )
  {
    v4 = *((_DWORD *)a2 + 356);
    v5 = *(CPed **)(v4 + 1124);
    v6 = v5 == 0;
    if ( v5 )
      v6 = v5 == a2;
    if ( !v6 )
    {
      v7 = (*(int (__fastcall **)(CEventEditableResponse *))(*(_DWORD *)this + 20))(this);
      *(_WORD *)(v7 + 10) = 200;
      *(_BYTE *)(v7 + 9) = 0;
      CEventGroup::Add((CEventGroup *)(*((_DWORD *)v5 + 272) + 104), (CEvent *)v7, 0);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    }
    v8 = *(_BYTE *)(v4 + 1164);
    if ( v8 )
    {
      v9 = 0;
      do
      {
        v10 = *(CPed **)(v4 + 1128 + 4 * v9);
        v11 = v10 == 0;
        if ( v10 )
          v11 = v10 == a2;
        if ( !v11 )
        {
          v12 = (*(int (__fastcall **)(CEventEditableResponse *))(*(_DWORD *)this + 20))(this);
          *(_WORD *)(v12 + 10) = 200;
          *(_BYTE *)(v12 + 9) = 0;
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)v10 + 272) + 104), (CEvent *)v12, 0);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
          v8 = *(_BYTE *)(v4 + 1164);
        }
        ++v9;
      }
      while ( v9 < v8 );
    }
  }
  return 1;
}


// ============================================================

// Address: 0x370a7c
// Original: _ZNK22CEventEditableResponse13TriggerLookAtEP4CPed
// Demangled: CEventEditableResponse::TriggerLookAt(CPed *)
int __fastcall CEventEditableResponse::TriggerLookAt(CEventEditableResponse *this, CPed *a2)
{
  int v3; // r0

  v3 = (*(int (__fastcall **)(CEventEditableResponse *))(*(_DWORD *)this + 44))(this);
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 58) & 7) == 3 )
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"CEventEditableResponse",
        a2,
        v3,
        2000,
        5,
        0,
        1,
        0.25,
        500,
        3,
        0);
    else
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"CEventEditableResponse",
        a2,
        v3,
        2000,
        -1,
        0,
        1,
        0.25,
        500,
        3,
        0);
  }
  return 1;
}


// ============================================================
