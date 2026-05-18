
// Address: 0x484b68
// Original: _ZN22CGangWarsSaveStructure9ConstructEv
// Demangled: CGangWarsSaveStructure::Construct(void)
int __fastcall CGangWarsSaveStructure::Construct(int this)
{
  int v1; // r3
  int v2; // r3
  int v3; // r1
  int v4; // r3
  int v5; // r2
  __int64 v6; // d16
  __int64 v7; // d16

  *(_BYTE *)this = CGangWars::bGangWarsActive;
  v1 = CGangWars::TimeStarted;
  *(_DWORD *)(this + 4) = CGangWars::State;
  *(_DWORD *)(this + 8) = v1;
  *(_DWORD *)(this + 12) = -1;
  if ( CGangWars::pZoneInfoToFightOver && CTheZones::TotalNumberOfZoneInfos )
  {
    v2 = 0;
    v3 = CGangWars::pZoneInfoToFightOver - (_DWORD)&CTheZones::ZoneInfoArray + 17;
    while ( 1 )
    {
      v3 -= 17;
      if ( !v3 )
        break;
      if ( ++v2 >= (unsigned __int16)CTheZones::TotalNumberOfZoneInfos )
        goto LABEL_8;
    }
    *(_DWORD *)(this + 12) = v2;
  }
LABEL_8:
  *(_DWORD *)(this + 16) = -1;
  if ( CGangWars::pZoneToFightOver && CTheZones::TotalNumberOfNavigationZones )
  {
    v4 = CGangWars::pZoneToFightOver - (_DWORD)CTheZones::NavigationZoneArray + 32;
    v5 = 0;
    while ( 1 )
    {
      v4 -= 32;
      if ( !v4 )
        break;
      if ( ++v5 >= (unsigned __int16)CTheZones::TotalNumberOfNavigationZones )
        goto LABEL_15;
    }
    *(_DWORD *)(this + 16) = v5;
  }
LABEL_15:
  v6 = CGangWars::CoorsOfPlayerAtStartOfWar;
  *(_DWORD *)(this + 28) = dword_7A2310;
  *(_QWORD *)(this + 20) = v6;
  *(_DWORD *)(this + 32) = CGangWars::Gang1;
  *(_DWORD *)(this + 36) = CGangWars::Gang2;
  *(_DWORD *)(this + 40) = CGangWars::WarFerocity;
  *(_DWORD *)(this + 44) = CGangWars::LastTimeInArea;
  *(_DWORD *)(this + 48) = CGangWars::State2;
  *(_DWORD *)(this + 52) = CGangWars::TimeTillNextAttack;
  v7 = *(_QWORD *)&CGangWars::PointOfAttack;
  *(_DWORD *)(this + 64) = dword_7A2330;
  *(_QWORD *)(this + 56) = v7;
  *(_DWORD *)(this + 68) = CGangWars::FightTimer;
  *(_DWORD *)(this + 72) = CGangWars::RadarBlip;
  *(_BYTE *)(this + 76) = CGangWars::bPlayerIsCloseby;
  *(_DWORD *)(this + 80) = CGangWars::TerritoryUnderControlPercentage;
  *(_DWORD *)(this + 84) = CGangWars::Difficulty;
  *(_BYTE *)(this + 88) = CGangWars::bCanTriggerGangWarWhenOnAMission;
  *(_BYTE *)(this + 89) = CGangWars::bTrainingMission;
  *(_DWORD *)(this + 92) = CGangWars::ZoneInfoForTraining;
  return this;
}


// ============================================================

// Address: 0x484d30
// Original: _ZN22CGangWarsSaveStructure7ExtractEv
// Demangled: CGangWarsSaveStructure::Extract(void)
int __fastcall CGangWarsSaveStructure::Extract(CGangWarsSaveStructure *this)
{
  int v1; // r1
  char *v2; // r3
  int v3; // r1
  int *v4; // r3
  __int64 v5; // d16
  __int64 v6; // d16
  __int64 v7; // kr00_8
  int v8; // r3
  __int64 v9; // kr08_8
  int result; // r0

  CGangWars::bGangWarsActive = *(_BYTE *)this;
  CGangWars::State = *((_DWORD *)this + 1);
  CGangWars::TimeStarted = *((_DWORD *)this + 2);
  v1 = *((_DWORD *)this + 3);
  v2 = (char *)&CTheZones::ZoneInfoArray + 17 * v1;
  if ( v1 == -1 )
    v2 = 0;
  CGangWars::pZoneInfoToFightOver = (int)v2;
  v3 = *((_DWORD *)this + 4);
  v4 = &CTheZones::NavigationZoneArray[8 * v3];
  if ( v3 == -1 )
    v4 = 0;
  CGangWars::pZoneToFightOver = (int)v4;
  v5 = *(_QWORD *)((char *)this + 20);
  dword_7A2310 = *((_DWORD *)this + 7);
  CGangWars::CoorsOfPlayerAtStartOfWar = v5;
  CGangWars::Gang1 = *((_DWORD *)this + 8);
  CGangWars::Gang2 = *((_DWORD *)this + 9);
  CGangWars::WarFerocity = *((_DWORD *)this + 10);
  CGangWars::LastTimeInArea = *((_DWORD *)this + 11);
  CGangWars::State2 = *((_DWORD *)this + 12);
  CGangWars::TimeTillNextAttack = *((_DWORD *)this + 13);
  v6 = *((_QWORD *)this + 7);
  v7 = *((_QWORD *)this + 8);
  v8 = *((_DWORD *)this + 18);
  dword_7A2330 = *((_DWORD *)this + 16);
  *(_QWORD *)&CGangWars::PointOfAttack = v6;
  CGangWars::FightTimer = HIDWORD(v7);
  CGangWars::RadarBlip = v8;
  CGangWars::bPlayerIsCloseby = *((_BYTE *)this + 76);
  v9 = *((_QWORD *)this + 10);
  CGangWars::TerritoryUnderControlPercentage = *((_DWORD *)this + 20);
  CGangWars::Difficulty = HIDWORD(v9);
  CGangWars::bCanTriggerGangWarWhenOnAMission = *((_BYTE *)this + 88);
  CGangWars::bTrainingMission = *((_BYTE *)this + 89);
  result = *((_DWORD *)this + 23);
  CGangWars::ZoneInfoForTraining = result;
  return result;
}


// ============================================================
