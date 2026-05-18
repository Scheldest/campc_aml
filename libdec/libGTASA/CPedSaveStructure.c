
// Address: 0x198554
// Original: j__ZN17CPedSaveStructure7ExtractEP4CPed
// Demangled: CPedSaveStructure::Extract(CPed *)
// attributes: thunk
int __fastcall CPedSaveStructure::Extract(CPedSaveStructure *this, CPed *a2)
{
  return _ZN17CPedSaveStructure7ExtractEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4846f0
// Original: _ZN17CPedSaveStructure9ConstructEP4CPed
// Demangled: CPedSaveStructure::Construct(CPed *)
void *__fastcall CPedSaveStructure::Construct(CPedSaveStructure *this, CPed *a2)
{
  int v4; // r0
  char *v5; // r1
  __int64 v6; // d16
  int v7; // r0
  float v8; // s0
  __int64 v9; // d16
  __int64 v10; // d17
  int v11; // r0
  int v12; // r1

  v4 = *((_DWORD *)a2 + 5);
  v5 = (char *)(v4 + 48);
  if ( !v4 )
    v5 = (char *)a2 + 4;
  v6 = *(_QWORD *)v5;
  *((_DWORD *)this + 2) = *((_DWORD *)v5 + 2);
  *(_QWORD *)this = v6;
  v7 = *((_DWORD *)a2 + 5);
  if ( v7 )
    v8 = atan2f(COERCE_FLOAT(*(_DWORD *)(v7 + 16) ^ 0x80000000), *(float *)(v7 + 20));
  else
    v8 = *((float *)a2 + 4);
  *((float *)this + 3) = v8;
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 337);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 339);
  *((_BYTE *)this + 388) = *((_BYTE *)a2 + 1096);
  *((_BYTE *)this + 389) = *((_BYTE *)a2 + 1820);
  *((_BYTE *)this + 390) = *((_BYTE *)a2 + 51);
  *((_BYTE *)this + 396) = *((_BYTE *)a2 + 1845);
  *((_BYTE *)this + 397) = *((_BYTE *)a2 + 1846);
  v9 = *(_QWORD *)((char *)a2 + 1156);
  v10 = *(_QWORD *)((char *)a2 + 1164);
  *((_DWORD *)this + 98) = -1;
  *((_QWORD *)this + 50) = v9;
  *((_QWORD *)this + 51) = v10;
  v11 = *((_DWORD *)a2 + 485);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 56);
    if ( !v12 )
      v12 = *((_DWORD *)a2 + 485);
    if ( *(_BYTE *)(v12 + 50) )
      *((_DWORD *)this + 98) = -286331153 * ((v11 - *(_DWORD *)CEntryExitManager::mp_poolEntryExits) >> 2);
  }
  return memcpy_0((char *)this + 24, (char *)a2 + 1444, 0x16Cu);
}


// ============================================================

// Address: 0x4847c0
// Original: _ZN17CPedSaveStructure7ExtractEP4CPed
// Demangled: CPedSaveStructure::Extract(CPed *)
int __fastcall CPedSaveStructure::Extract(CPedSaveStructure *this, CPed *a2)
{
  __int64 v4; // kr00_8
  int v5; // r3
  int v6; // r0
  _DWORD *v7; // r1
  int v8; // r6
  __int64 v9; // d17
  _DWORD *v10; // r5
  CStreaming *v11; // r0
  int v12; // r2
  bool v13; // r1
  CStreaming *v14; // r0
  int v15; // r2
  bool v16; // r1
  int v17; // r0
  int result; // r0

  v4 = *(_QWORD *)this;
  v5 = *((_DWORD *)a2 + 5);
  v6 = *((_DWORD *)this + 2);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 48) = v4;
    *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v4);
    v7 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
  }
  else
  {
    *(_QWORD *)((char *)a2 + 4) = v4;
    v7 = (_DWORD *)((char *)a2 + 12);
  }
  *v7 = v6;
  *((_DWORD *)a2 + 344) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 343) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 337) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 339) = *((_DWORD *)this + 5);
  *((_BYTE *)a2 + 1820) = *((_BYTE *)this + 389);
  CPed::SetCharCreatedBy(a2, *((_BYTE *)this + 388));
  v8 = 0;
  *((_BYTE *)a2 + 1845) = *((_BYTE *)this + 396);
  *((_BYTE *)a2 + 1846) = *((_BYTE *)this + 397);
  if ( IsMissionSave )
  {
    v9 = *((_QWORD *)this + 51);
    *(_QWORD *)((char *)a2 + 1156) = *((_QWORD *)this + 50);
    *(_QWORD *)((char *)a2 + 1164) = v9;
  }
  *((_DWORD *)a2 + 292) &= ~2u;
  do
  {
    v10 = (_DWORD *)((char *)this + v8);
    if ( *(_DWORD *)((char *)this + v8 + 24) )
    {
      v11 = *(CStreaming **)(CWeaponInfo::GetWeaponInfo() + 12);
      if ( v11 != (CStreaming *)-1 )
      {
        CStreaming::RequestModel(v11, 8, v12);
        CStreaming::LoadAllRequestedModels(0, v13);
      }
      v14 = *(CStreaming **)(CWeaponInfo::GetWeaponInfo() + 16);
      if ( v14 != (CStreaming *)-1 )
      {
        CStreaming::RequestModel(v14, 8, v15);
        CStreaming::LoadAllRequestedModels(0, v16);
      }
      CPed::GiveWeapon(a2, v10[6], v10[9], 0);
      *(_DWORD *)((char *)a2 + v8 + 1452) = v10[8];
    }
    v8 += 28;
  }
  while ( v8 != 364 );
  CPed::SetCurrentWeapon(a2, *((char *)this + 389));
  *((_BYTE *)a2 + 51) = *((_BYTE *)this + 390);
  v17 = *((_DWORD *)this + 98);
  if ( v17 == -1 || *(char *)(*(_DWORD *)(CEntryExitManager::mp_poolEntryExits + 4) + v17) < 0 )
    result = 0;
  else
    result = *(_DWORD *)CEntryExitManager::mp_poolEntryExits + 60 * v17;
  *((_DWORD *)a2 + 485) = result;
  return result;
}


// ============================================================
