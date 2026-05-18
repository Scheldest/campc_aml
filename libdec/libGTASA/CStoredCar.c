
// Address: 0x18c048
// Original: j__ZN10CStoredCar8StoreCarEP8CVehicle
// Demangled: CStoredCar::StoreCar(CVehicle *)
// attributes: thunk
int __fastcall CStoredCar::StoreCar(CStoredCar *this, CVehicle *a2)
{
  return _ZN10CStoredCar8StoreCarEP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x192a98
// Original: j__ZN10CStoredCar10RestoreCarEv
// Demangled: CStoredCar::RestoreCar(void)
// attributes: thunk
int __fastcall CStoredCar::RestoreCar(CStoredCar *this)
{
  return _ZN10CStoredCar10RestoreCarEv(this);
}


// ============================================================

// Address: 0x313a5c
// Original: _ZN10CStoredCar8StoreCarEP8CVehicle
// Demangled: CStoredCar::StoreCar(CVehicle *)
int __fastcall CStoredCar::StoreCar(CStoredCar *this, CVehicle *a2)
{
  __int16 v4; // r0
  char *v5; // r1
  int v6; // r0
  int *v7; // r2
  int v8; // r0
  char *v9; // r2
  int v10; // r0
  int v11; // r0
  char v12; // r0
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r0
  bool v17; // zf
  int result; // r0

  v4 = *((_WORD *)a2 + 19);
  v5 = (char *)a2 + 4;
  *((_WORD *)this + 9) = v4;
  v6 = *((_DWORD *)a2 + 5);
  v7 = (int *)v5;
  if ( v6 )
    v7 = (int *)(v6 + 48);
  v8 = *v7;
  v9 = v5;
  *(_DWORD *)this = v8;
  v10 = *((_DWORD *)a2 + 5);
  if ( v10 )
    v9 = (char *)(v10 + 48);
  *((_DWORD *)this + 1) = *((_DWORD *)v9 + 1);
  v11 = *((_DWORD *)a2 + 5);
  if ( v11 )
    v5 = (char *)(v11 + 48);
  *((_DWORD *)this + 2) = *((_DWORD *)v5 + 2);
  *((_BYTE *)this + 60) = (int)(float)(*(float *)(*((_DWORD *)a2 + 5) + 16) * 100.0);
  *((_BYTE *)this + 61) = (int)(float)(*(float *)(*((_DWORD *)a2 + 5) + 20) * 100.0);
  *((_BYTE *)this + 62) = (int)(float)(*(float *)(*((_DWORD *)a2 + 5) + 24) * 100.0);
  *((_BYTE *)this + 50) = *((_BYTE *)a2 + 1080);
  *((_BYTE *)this + 51) = *((_BYTE *)a2 + 1081);
  *((_BYTE *)this + 52) = *((_BYTE *)a2 + 1082);
  *((_BYTE *)this + 53) = *((_BYTE *)a2 + 1083);
  *((_BYTE *)this + 54) = *((_BYTE *)a2 + 470);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 228);
  *((_BYTE *)this + 55) = *((_BYTE *)a2 + 1084);
  v12 = *((_BYTE *)a2 + 1085);
  *((_WORD *)this + 8) = 0;
  *((_BYTE *)this + 56) = v12;
  v13 = (*((_DWORD *)a2 + 17) >> 18) & 1;
  *((_WORD *)this + 8) = v13;
  v14 = *((_DWORD *)a2 + 17);
  if ( (v14 & 0x80000) != 0 )
  {
    LOWORD(v13) = v13 | 2;
    *((_WORD *)this + 8) = v13;
    v14 = *((_DWORD *)a2 + 17);
  }
  if ( (v14 & 0x800000) != 0 )
  {
    LOWORD(v13) = v13 | 4;
    *((_WORD *)this + 8) = v13;
    v14 = *((_DWORD *)a2 + 17);
  }
  if ( (v14 & 0x100000) != 0 )
  {
    LOWORD(v13) = v13 | 8;
    *((_WORD *)this + 8) = v13;
    v14 = *((_DWORD *)a2 + 17);
  }
  if ( (v14 & 0x200000) != 0 )
  {
    LOWORD(v13) = v13 | 0x10;
    *((_WORD *)this + 8) = v13;
  }
  if ( (*((_BYTE *)a2 + 1074) & 0x10) != 0 )
  {
    LOWORD(v13) = v13 | 0x20;
    *((_WORD *)this + 8) = v13;
  }
  v15 = *((_DWORD *)a2 + 228);
  if ( (v15 & 0x20000) != 0 )
  {
    LOWORD(v13) = v13 | 0x40;
    *((_WORD *)this + 8) = v13;
    v15 = *((_DWORD *)a2 + 228);
  }
  if ( (v15 & 0x80000) != 0 )
    *((_WORD *)this + 8) = v13 | 0x80;
  v16 = *((_DWORD *)a2 + 360);
  v17 = v16 == 0;
  if ( v16 )
    v17 = v16 == 9;
  if ( v17 )
    *((_BYTE *)this + 57) = *((_BYTE *)a2 + 1202) & 7;
  *((_WORD *)this + 10) = *((_WORD *)a2 + 543);
  *((_WORD *)this + 11) = *((_WORD *)a2 + 544);
  *((_WORD *)this + 12) = *((_WORD *)a2 + 545);
  *((_WORD *)this + 13) = *((_WORD *)a2 + 546);
  *((_WORD *)this + 14) = *((_WORD *)a2 + 547);
  *((_WORD *)this + 15) = *((_WORD *)a2 + 548);
  *((_WORD *)this + 16) = *((_WORD *)a2 + 549);
  *((_WORD *)this + 17) = *((_WORD *)a2 + 550);
  *((_WORD *)this + 18) = *((_WORD *)a2 + 551);
  *((_WORD *)this + 19) = *((_WORD *)a2 + 552);
  *((_WORD *)this + 20) = *((_WORD *)a2 + 553);
  *((_WORD *)this + 21) = *((_WORD *)a2 + 554);
  *((_WORD *)this + 22) = *((_WORD *)a2 + 555);
  *((_WORD *)this + 23) = *((_WORD *)a2 + 556);
  *((_WORD *)this + 24) = *((_WORD *)a2 + 557);
  *((_BYTE *)this + 58) = CVehicle::GetRemapIndex(a2);
  result = *((unsigned __int8 *)a2 + 1166);
  *((_BYTE *)this + 59) = result;
  return result;
}


// ============================================================

// Address: 0x313c10
// Original: _ZN10CStoredCar10RestoreCarEv
// Demangled: CStoredCar::RestoreCar(void)
int __fastcall CStoredCar::RestoreCar(CStoredCar *this, int a2, int a3)
{
  int v4; // r2
  int i; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r5
  __int64 v25; // kr00_8
  int v26; // r3
  int v27; // r0
  _DWORD *v28; // r1
  float v29; // s0
  float v30; // s4
  float v31; // s2
  int v32; // r0
  int v33; // r3
  int v34; // r1
  unsigned int v35; // r2
  int v36; // r0
  __int16 v37; // r3
  unsigned int *v38; // r6
  __int64 v39; // r0

  CStreaming::RequestModel((CStreaming *)*((unsigned __int16 *)this + 9), 8, a3);
  for ( i = 0; i != 15; ++i )
  {
    v6 = *((unsigned __int16 *)this + i + 10);
    if ( v6 != 0xFFFF )
      CStreaming::RequestVehicleUpgrade((CStreaming *)(__int16)v6, 0, v4);
  }
  v7 = 5 * *((unsigned __int16 *)this + 9);
  if ( LOBYTE(CStreaming::ms_aInfoForModel[10 * *((unsigned __int16 *)this + 9) + 8]) != 1 )
    return 0;
  v8 = *((unsigned __int16 *)this + 10);
  if ( v8 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v8, v7) != 1 )
    return 0;
  v9 = *((unsigned __int16 *)this + 11);
  if ( v9 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v9, v7) != 1 )
    return 0;
  v10 = *((unsigned __int16 *)this + 12);
  if ( v10 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v10, v7) != 1 )
    return 0;
  v11 = *((unsigned __int16 *)this + 13);
  if ( v11 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v11, v7) != 1 )
    return 0;
  v12 = *((unsigned __int16 *)this + 14);
  if ( v12 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v12, v7) != 1 )
    return 0;
  v13 = *((unsigned __int16 *)this + 15);
  if ( v13 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v13, v7) != 1 )
    return 0;
  v14 = *((unsigned __int16 *)this + 16);
  if ( v14 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v14, v7) != 1 )
    return 0;
  v15 = *((unsigned __int16 *)this + 17);
  if ( v15 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v15, v7) != 1 )
    return 0;
  v16 = *((unsigned __int16 *)this + 18);
  if ( v16 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v16, v7) != 1 )
    return 0;
  v17 = *((unsigned __int16 *)this + 19);
  if ( v17 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v17, v7) != 1 )
    return 0;
  v18 = *((unsigned __int16 *)this + 20);
  if ( v18 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v18, v7) != 1 )
    return 0;
  v19 = *((unsigned __int16 *)this + 21);
  if ( v19 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v19, v7) != 1 )
    return 0;
  v20 = *((unsigned __int16 *)this + 22);
  if ( v20 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v20, v7) != 1 )
    return 0;
  v21 = *((unsigned __int16 *)this + 23);
  if ( v21 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v21, v7) != 1 )
    return 0;
  v22 = *((unsigned __int16 *)this + 24);
  if ( v22 != 0xFFFF && CStreaming::HasVehicleUpgradeLoaded((CStreaming *)(__int16)v22, v7) != 1 )
    return 0;
  CVehicleModelInfo::ms_compsToUse = *(_WORD *)((char *)this + 55);
  switch ( *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((unsigned __int16 *)this + 9)]) + 84) )
  {
    case 1:
      v23 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[557], (unsigned int)CModelInfo::ms_modelInfoPtrs);
      CMonsterTruck::CMonsterTruck((CMonsterTruck *)v23, *((unsigned __int16 *)this + 9), 1u);
      break;
    case 2:
      v23 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[565], (unsigned int)CModelInfo::ms_modelInfoPtrs);
      CQuadBike::CQuadBike((CQuadBike *)v23, *((unsigned __int16 *)this + 9), 1u);
      break;
    case 3:
      v23 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[588], (unsigned int)CModelInfo::ms_modelInfoPtrs);
      CHeli::CHeli((CHeli *)v23, *((unsigned __int16 *)this + 9), 1u);
      break;
    case 4:
      v23 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[583], (unsigned int)CModelInfo::ms_modelInfoPtrs);
      CPlane::CPlane((CPlane *)v23, *((unsigned __int16 *)this + 9), 1u);
      break;
    case 5:
      v23 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[448], (unsigned int)CModelInfo::ms_modelInfoPtrs);
      CBoat::CBoat((CBoat *)v23, *((unsigned __int16 *)this + 9), 1u);
      break;
    case 9:
      v23 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[459], (unsigned int)CModelInfo::ms_modelInfoPtrs);
      CBike::CBike((CBike *)v23, *((unsigned __int16 *)this + 9), 1u);
      goto LABEL_47;
    case 0xA:
      v23 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[468], (unsigned int)CModelInfo::ms_modelInfoPtrs);
      CBmx::CBmx((CBmx *)v23, *((unsigned __int16 *)this + 9), 1u);
LABEL_47:
      *(_BYTE *)(v23 + 1576) |= 0x10u;
      break;
    case 0xB:
      v23 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[579], (unsigned int)CModelInfo::ms_modelInfoPtrs);
      CTrailer::CTrailer((CTrailer *)v23, *((unsigned __int16 *)this + 9), 1u);
      break;
    default:
      v23 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[552], (unsigned int)CModelInfo::ms_modelInfoPtrs);
      CAutomobile::CAutomobile((CAutomobile *)v23, *((unsigned __int16 *)this + 9), 1u, 1u);
      break;
  }
  v25 = *(_QWORD *)this;
  v26 = *(_DWORD *)(v23 + 20);
  v27 = *((_DWORD *)this + 2);
  if ( v26 )
  {
    *(_DWORD *)(v26 + 48) = v25;
    *(_DWORD *)(*(_DWORD *)(v23 + 20) + 52) = HIDWORD(v25);
    v28 = (_DWORD *)(*(_DWORD *)(v23 + 20) + 56);
  }
  else
  {
    *(_QWORD *)(v23 + 4) = v25;
    v28 = (_DWORD *)(v23 + 12);
  }
  *v28 = v27;
  v29 = (float)*((char *)this + 60) / 100.0;
  v30 = (float)*((char *)this + 61) / 100.0;
  v31 = (float)*((char *)this + 62) / 100.0;
  *(float *)(*(_DWORD *)(v23 + 20) + 16) = v29;
  *(float *)(*(_DWORD *)(v23 + 20) + 20) = v30;
  *(float *)(*(_DWORD *)(v23 + 20) + 24) = v31;
  **(float **)(v23 + 20) = v30;
  *(float *)(*(_DWORD *)(v23 + 20) + 4) = -v29;
  *(_DWORD *)(*(_DWORD *)(v23 + 20) + 8) = 0;
  v32 = *(_DWORD *)(v23 + 20);
  *(_BYTE *)(v23 + 58) = *(_BYTE *)(v23 + 58) & 7 | 0x20;
  *(_DWORD *)(v32 + 32) = 0;
  *(_DWORD *)(*(_DWORD *)(v23 + 20) + 36) = 0;
  *(_DWORD *)(*(_DWORD *)(v23 + 20) + 40) = 1065353216;
  *(_DWORD *)(v23 + 1124) = 0;
  v33 = *(_DWORD *)(v23 + 1440);
  v34 = *(_DWORD *)(v23 + 1072);
  v35 = *(_DWORD *)(v23 + 1068) & 0xFFFDFF7F | 0x20000;
  *(_BYTE *)(v23 + 470) = *((_BYTE *)this + 54);
  v36 = *((_DWORD *)this + 3);
  *(_DWORD *)(v23 + 912) = v36;
  *(_DWORD *)(v23 + 1068) = v35;
  *(_DWORD *)(v23 + 1288) = 1;
  if ( !v33 )
    *(_BYTE *)(v23 + 1202) = *((_BYTE *)this + 57) & 7 | *(_BYTE *)(v23 + 1202) & 0xF8;
  v37 = *((_WORD *)this + 8);
  if ( (v37 & 1) != 0 )
  {
    *(_DWORD *)(v23 + 68) |= 0x40000u;
    v37 = *((_WORD *)this + 8);
  }
  if ( (v37 & 2) != 0 )
  {
    *(_DWORD *)(v23 + 68) |= 0x80000u;
    v37 = *((_WORD *)this + 8);
  }
  if ( (v37 & 4) != 0 )
  {
    *(_DWORD *)(v23 + 68) |= 0x800000u;
    v37 = *((_WORD *)this + 8);
  }
  if ( (v37 & 8) != 0 )
  {
    *(_DWORD *)(v23 + 68) |= 0x100000u;
    v37 = *((_WORD *)this + 8);
  }
  v38 = (unsigned int *)(v23 + 1068);
  if ( (v37 & 0x10) != 0 )
  {
    *(_DWORD *)(v23 + 68) |= 0x200000u;
    v37 = *((_WORD *)this + 8);
  }
  if ( (v37 & 0x20) != 0 )
  {
    *v38 = v35;
    *(_DWORD *)(v23 + 1072) = v34 | 0x100000;
    *(_BYTE *)(v23 + 450) = 1;
    v37 = *((_WORD *)this + 8);
  }
  if ( (v37 & 0x40) != 0 )
  {
    v36 |= 0x20000u;
    *(_DWORD *)(v23 + 912) = v36;
    v37 = *((_WORD *)this + 8);
  }
  if ( (v37 & 0x80) != 0 )
    *(_DWORD *)(v23 + 912) = v36 | 0x80000;
  *(_WORD *)(v23 + 1086) = *((_WORD *)this + 10);
  *(_WORD *)(v23 + 1088) = *((_WORD *)this + 11);
  *(_WORD *)(v23 + 1090) = *((_WORD *)this + 12);
  *(_WORD *)(v23 + 1092) = *((_WORD *)this + 13);
  *(_WORD *)(v23 + 1094) = *((_WORD *)this + 14);
  *(_WORD *)(v23 + 1096) = *((_WORD *)this + 15);
  *(_WORD *)(v23 + 1098) = *((_WORD *)this + 16);
  *(_WORD *)(v23 + 1100) = *((_WORD *)this + 17);
  *(_WORD *)(v23 + 1102) = *((_WORD *)this + 18);
  *(_WORD *)(v23 + 1104) = *((_WORD *)this + 19);
  *(_WORD *)(v23 + 1106) = *((_WORD *)this + 20);
  *(_WORD *)(v23 + 1108) = *((_WORD *)this + 21);
  *(_WORD *)(v23 + 1110) = *((_WORD *)this + 22);
  *(_WORD *)(v23 + 1112) = *((_WORD *)this + 23);
  *(_WORD *)(v23 + 1114) = *((_WORD *)this + 24);
  CVehicle::SetupUpgradesAfterLoad((CVehicle *)v23);
  CVehicle::SetRemap((CVehicle *)v23, *((char *)this + 58));
  HIDWORD(v39) = *(_DWORD *)(v23 + 1072) | 0x4000000;
  LODWORD(v39) = *v38 & 0xFFFFFFEF;
  *v38 = v39;
  *(_BYTE *)(v23 + 1166) = *((_BYTE *)this + 59);
  *(_BYTE *)(v23 + 1080) = *((_BYTE *)this + 50);
  *(_BYTE *)(v23 + 1081) = *((_BYTE *)this + 51);
  *(_BYTE *)(v23 + 1082) = *((_BYTE *)this + 52);
  *(_BYTE *)(v23 + 1083) = *((_BYTE *)this + 53);
  *(_QWORD *)v38 = v39;
  return v23;
}


// ============================================================
