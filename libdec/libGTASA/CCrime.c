
// Address: 0x18f76c
// Original: j__ZN6CCrime11ReportCrimeE10eCrimeTypeP7CEntityP4CPed
// Demangled: CCrime::ReportCrime(eCrimeType,CEntity *,CPed *)
// attributes: thunk
int CCrime::ReportCrime()
{
  return _ZN6CCrime11ReportCrimeE10eCrimeTypeP7CEntityP4CPed();
}


// ============================================================

// Address: 0x3ea918
// Original: _ZN6CCrime11ReportCrimeE10eCrimeTypeP7CEntityP4CPed
// Demangled: CCrime::ReportCrime(eCrimeType,CEntity *,CPed *)
int *__fastcall CCrime::ReportCrime(int *result, int a2, int a3)
{
  unsigned int v5; // r4
  int v6; // r8
  int v7; // r0
  int v8; // r1
  double v9; // d16
  int PlayerPed; // r0
  int v11; // r0
  bool v12; // zf
  CPlayerPed *v13; // r0
  int v14; // r1
  CMessages *v15; // r0
  unsigned __int16 v16; // r3
  double v17; // [sp+8h] [bp-28h] BYREF
  int v18; // [sp+10h] [bp-20h]

  v5 = (unsigned int)result;
  if ( a3 )
  {
    result = *(int **)(a3 + 1436);
    if ( (unsigned int)result <= 1 )
    {
      if ( a2 && (result = (int *)(*(_BYTE *)(a2 + 58) & 7), result == (int *)((char *)&stderr + 3)) )
      {
        result = (int *)CPedType::PoliceDontCareAboutCrimesAgainstPedType(*(CPedType **)(a2 + 1436), a2);
        v6 = (int)result;
        if ( !v5 )
          return result;
      }
      else
      {
        v6 = 0;
        if ( !v5 )
          return result;
      }
      if ( v5 == 2
        && (*(_BYTE *)(a2 + 58) & 7) == 3
        && IsPedPointerValid((CPed *)a2) == 1
        && !*(_DWORD *)(**(_DWORD **)(a3 + 1092) + 44)
        && (*(_BYTE *)(a2 + 1158) & 0x80) != 0 )
      {
        result = (int *)(*(_DWORD *)(a2 + 1100) & 0xFFFFFFFE);
        if ( result != (int *)((char *)&dword_34 + 2) )
        {
          v15 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"GOODBOY");
          CMessages::AddBigMessage(v15, (unsigned __int16 *)&elf_hash_bucket[1187], 0, v16);
          result = &CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
          result[46] += 50;
        }
      }
      else
      {
        v7 = *(_DWORD *)(a3 + 20);
        v8 = a3 + 4;
        if ( v7 )
          v8 = v7 + 48;
        v9 = *(double *)v8;
        v18 = *(_DWORD *)(v8 + 8);
        v17 = v9;
        result = **(int ***)(FindPlayerPed(-1) + 1092);
        if ( *((float *)result + 5) >= 0.0 )
        {
          if ( CWanted::WorkOutPolicePresence()
            || v5 <= 0xE && ((1 << v5) & 0x6030) != 0 && CLocalisation::GermanGame((CLocalisation *)(1 << v5)) )
          {
            PlayerPed = FindPlayerPed(-1);
            CWanted::RegisterCrime_Immediately(**(_DWORD **)(PlayerPed + 1092), v5, (int)&v17, a2, v6);
            v11 = FindPlayerPed(-1);
            result = (int *)CWanted::SetWantedLevelNoDrop(**(CWanted ***)(v11 + 1092), 1);
          }
          else
          {
            FindPlayerPed(-1);
            result = (int *)CWanted::RegisterCrime();
          }
        }
        v12 = v5 == 19;
        if ( v5 != 19 )
          v12 = v5 == 5;
        if ( v12 )
        {
          v13 = (CPlayerPed *)FindPlayerPed(-1);
          v14 = 2;
        }
        else
        {
          if ( v5 != 3 )
            return result;
          v13 = (CPlayerPed *)FindPlayerPed(-1);
          v14 = 1;
        }
        return (int *)CPlayerPed::SetWantedLevelNoDrop(v13, v14);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x3eaae8
// Original: _ZN6CCrime27FindImmediateDetectionRangeE10eCrimeType
// Demangled: CCrime::FindImmediateDetectionRange(eCrimeType)
int __fastcall CCrime::FindImmediateDetectionRange(int a1)
{
  unsigned int v1; // r0

  v1 = a1 - 12;
  if ( v1 <= 8 )
    return dword_617060[v1];
  else
    return 1096810496;
}


// ============================================================
