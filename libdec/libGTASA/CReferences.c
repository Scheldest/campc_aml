
// Address: 0x190060
// Original: j__ZN11CReferences25PruneAllReferencesInWorldEv
// Demangled: CReferences::PruneAllReferencesInWorld(void)
// attributes: thunk
int __fastcall CReferences::PruneAllReferencesInWorld(CReferences *this)
{
  return _ZN11CReferences25PruneAllReferencesInWorldEv(this);
}


// ============================================================

// Address: 0x199228
// Original: j__ZN11CReferences4InitEv
// Demangled: CReferences::Init(void)
// attributes: thunk
int __fastcall CReferences::Init(CReferences *this)
{
  return _ZN11CReferences4InitEv(this);
}


// ============================================================

// Address: 0x19d700
// Original: j__ZN11CReferences24RemoveReferencesToPlayerEv
// Demangled: CReferences::RemoveReferencesToPlayer(void)
// attributes: thunk
int __fastcall CReferences::RemoveReferencesToPlayer(CReferences *this)
{
  return _ZN11CReferences24RemoveReferencesToPlayerEv(this);
}


// ============================================================

// Address: 0x40e7c8
// Original: _ZN11CReferences4InitEv
// Demangled: CReferences::Init(void)
int *__fastcall CReferences::Init(CReferences *this)
{
  int *v1; // r0
  int v2; // r1
  int *result; // r0

  CReferences::pEmptyList = (int)&CReferences::aRefs;
  v1 = &dword_95AD50;
  v2 = 3000;
  do
  {
    *(v1 - 1) = (int)(v1 + 1);
    *v1 = 0;
    --v2;
    v1 += 2;
  }
  while ( v2 );
  result = &CReferences::aRefs;
  dword_960B04 = 0;
  return result;
}


// ============================================================

// Address: 0x40e80c
// Original: _ZN11CReferences8ListSizeEP10CReference
// Demangled: CReferences::ListSize(CReference *)
int __fastcall CReferences::ListSize(_DWORD *a1)
{
  int result; // r0

  result = 0;
  while ( a1 )
  {
    a1 = (_DWORD *)*a1;
    ++result;
  }
  return result;
}


// ============================================================

// Address: 0x40eb38
// Original: _ZN11CReferences24RemoveReferencesToPlayerEv
// Demangled: CReferences::RemoveReferencesToPlayer(void)
int __fastcall CReferences::RemoveReferencesToPlayer(CReferences *this)
{
  int PlayerVehicle; // r0
  _DWORD *v2; // r1
  _DWORD *v3; // r2
  _DWORD *v4; // r1
  _DWORD *v5; // r2
  int result; // r0
  int PlayerPed; // r0
  _DWORD *v8; // r1
  _DWORD *v9; // r3
  _DWORD *v10; // r1
  _DWORD *v11; // r2
  CPedGroupMembership *v12; // r4
  CPed *v13; // r0
  int v14; // r0

  if ( FindPlayerVehicle(-1, 0) )
  {
    PlayerVehicle = FindPlayerVehicle(-1, 0);
    v2 = *(_DWORD **)(PlayerVehicle + 40);
    if ( v2 )
    {
      do
      {
        v3 = (_DWORD *)v2[1];
        if ( *v3 == PlayerVehicle )
          *v3 = 0;
        v2 = (_DWORD *)*v2;
      }
      while ( v2 );
      v4 = *(_DWORD **)(PlayerVehicle + 40);
      if ( v4 )
      {
        do
        {
          v5 = v4;
          v4 = (_DWORD *)*v4;
          v5[1] = 0;
        }
        while ( v4 );
        *v5 = CReferences::pEmptyList;
        CReferences::pEmptyList = *(_DWORD *)(PlayerVehicle + 40);
        *(_DWORD *)(PlayerVehicle + 40) = 0;
      }
    }
  }
  result = FindPlayerPed(-1);
  if ( result )
  {
    PlayerPed = FindPlayerPed(-1);
    v8 = *(_DWORD **)(PlayerPed + 40);
    if ( v8 )
    {
      do
      {
        v9 = (_DWORD *)v8[1];
        if ( *v9 == PlayerPed )
          *v9 = 0;
        v8 = (_DWORD *)*v8;
      }
      while ( v8 );
      v10 = *(_DWORD **)(PlayerPed + 40);
      if ( v10 )
      {
        do
        {
          v11 = v10;
          v10 = (_DWORD *)*v10;
          v11[1] = 0;
        }
        while ( v10 );
        *v11 = CReferences::pEmptyList;
        CReferences::pEmptyList = *(_DWORD *)(PlayerPed + 40);
        *(_DWORD *)(PlayerPed + 40) = 0;
      }
    }
    v12 = (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *(_DWORD *)(*(_DWORD *)(FindPlayerPed(-1) + 1092) + 56)
                                                      + 2];
    v13 = (CPed *)FindPlayerPed(-1);
    CPedGroupMembership::SetLeader(v12, v13);
    v14 = FindPlayerPed(-1);
    return j_CPedGroup::Process((CPedGroup *)&CPedGroups::ms_groups[181 * *(_DWORD *)(*(_DWORD *)(v14 + 1092) + 56)]);
  }
  return result;
}


// ============================================================

// Address: 0x40ec3c
// Original: _ZN11CReferences25PruneAllReferencesInWorldEv
// Demangled: CReferences::PruneAllReferencesInWorld(void)
int __fastcall CReferences::PruneAllReferencesInWorld(CReferences *this)
{
  _DWORD *v1; // lr
  int v2; // r1
  int v3; // r0
  int v4; // r4
  int v5; // r5
  int *v6; // r6
  _DWORD *v7; // lr
  int v8; // r1
  int v9; // r0
  int v10; // r4
  int v11; // r5
  int *v12; // r6
  int result; // r0
  _DWORD *v14; // lr
  int v15; // r1
  int v16; // r4
  int v17; // r5
  int *v18; // r6

  v1 = (_DWORD *)CPools::ms_pPedPool;
  v2 = *(_DWORD *)(CPools::ms_pPedPool + 8);
  while ( v2 )
  {
    --v2;
    if ( *(char *)(v1[1] + v2) >= 0 )
    {
      v3 = *v1 + 1996 * v2;
      if ( v3 )
      {
        v4 = v3 + 40;
        v5 = *(_DWORD *)(v3 + 40);
        while ( v5 )
        {
          v6 = (int *)v4;
          v4 = v5;
          while ( 1 )
          {
            v5 = *(_DWORD *)v4;
            if ( **(_DWORD **)(v4 + 4) == v3 )
              break;
            *v6 = v5;
            *(_DWORD *)v4 = CReferences::pEmptyList;
            CReferences::pEmptyList = v4;
            *(_DWORD *)(v4 + 4) = 0;
            v4 = v5;
            if ( !v5 )
              goto LABEL_9;
          }
        }
      }
    }
LABEL_9:
    ;
  }
  v7 = (_DWORD *)CPools::ms_pVehiclePool;
  v8 = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
  while ( v8 )
  {
    --v8;
    if ( *(char *)(v7[1] + v8) >= 0 )
    {
      v9 = *v7 + 2604 * v8;
      if ( v9 )
      {
        v10 = v9 + 40;
        v11 = *(_DWORD *)(v9 + 40);
        while ( v11 )
        {
          v12 = (int *)v10;
          v10 = v11;
          while ( 1 )
          {
            v11 = *(_DWORD *)v10;
            if ( **(_DWORD **)(v10 + 4) == v9 )
              break;
            *v12 = v11;
            *(_DWORD *)v10 = CReferences::pEmptyList;
            CReferences::pEmptyList = v10;
            *(_DWORD *)(v10 + 4) = 0;
            v10 = v11;
            if ( !v11 )
              goto LABEL_18;
          }
        }
      }
    }
LABEL_18:
    ;
  }
  result = (int)&CPools::ms_pObjectPool;
  v14 = (_DWORD *)CPools::ms_pObjectPool;
  v15 = *(_DWORD *)(CPools::ms_pObjectPool + 8);
  while ( v15 )
  {
    --v15;
    result = *(char *)(v14[1] + v15);
    if ( result >= 0 )
    {
      result = *v14 + 420 * v15;
      if ( result )
      {
        v16 = result + 40;
        v17 = *(_DWORD *)(result + 40);
        while ( v17 )
        {
          v18 = (int *)v16;
          v16 = v17;
          while ( 1 )
          {
            v17 = *(_DWORD *)v16;
            if ( **(_DWORD **)(v16 + 4) == result )
              break;
            *v18 = v17;
            *(_DWORD *)v16 = CReferences::pEmptyList;
            CReferences::pEmptyList = v16;
            *(_DWORD *)(v16 + 4) = 0;
            v16 = v17;
            if ( !v17 )
              goto LABEL_27;
          }
        }
      }
    }
LABEL_27:
    ;
  }
  return result;
}


// ============================================================
