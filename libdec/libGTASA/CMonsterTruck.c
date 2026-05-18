
// Address: 0x18da98
// Original: j__ZN13CMonsterTruck20SetupSuspensionLinesEv
// Demangled: CMonsterTruck::SetupSuspensionLines(void)
// attributes: thunk
int __fastcall CMonsterTruck::SetupSuspensionLines(CMonsterTruck *this)
{
  return _ZN13CMonsterTruck20SetupSuspensionLinesEv(this);
}


// ============================================================

// Address: 0x1a1148
// Original: j__ZN13CMonsterTruckC2Eih
// Demangled: CMonsterTruck::CMonsterTruck(int,uchar)
// attributes: thunk
void __fastcall CMonsterTruck::CMonsterTruck(CMonsterTruck *this, int a2, unsigned __int8 a3)
{
  _ZN13CMonsterTruckC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x5744cc
// Original: _ZN13CMonsterTruckC2Eih
// Demangled: CMonsterTruck::CMonsterTruck(int,uchar)
void __fastcall CMonsterTruck::CMonsterTruck(CMonsterTruck *this, int a2, unsigned __int8 a3)
{
  __int64 v4; // d16
  __int64 v5; // d17
  char v6; // r0

  CAutomobile::CAutomobile(this, a2, a3, 0);
  *(float *)&v4 = 1.0;
  *((float *)&v4 + 1) = 1.0;
  *(float *)&v5 = 1.0;
  *((float *)&v5 + 1) = 1.0;
  *(_QWORD *)((char *)this + 2460) = v4;
  *(_QWORD *)((char *)this + 2468) = v5;
  *(_DWORD *)this = &off_66DC6C;
  CMonsterTruck::SetupSuspensionLines(this);
  v6 = *((_BYTE *)this + 2172);
  *((_DWORD *)this + 361) = 1;
  *((_BYTE *)this + 2172) = v6 | 0x80;
}


// ============================================================

// Address: 0x574510
// Original: _ZN13CMonsterTruckD2Ev
// Demangled: CMonsterTruck::~CMonsterTruck()
// attributes: thunk
void __fastcall CMonsterTruck::~CMonsterTruck(CMonsterTruck *this)
{
  sub_19E4D4(this);
}


// ============================================================

// Address: 0x574514
// Original: _ZN13CMonsterTruckD0Ev
// Demangled: CMonsterTruck::~CMonsterTruck()
void __fastcall CMonsterTruck::~CMonsterTruck(CMonsterTruck *this)
{
  void *v1; // r0

  CAutomobile::~CAutomobile(this);
  sub_199F80(v1);
}


// ============================================================

// Address: 0x574524
// Original: _ZN13CMonsterTruck20SetupSuspensionLinesEv
// Demangled: CMonsterTruck::SetupSuspensionLines(void)
float *__fastcall CMonsterTruck::SetupSuspensionLines(CMonsterTruck *this)
{
  int v2; // r10
  void *v3; // r0
  unsigned int v4; // r1
  float *v5; // r11
  unsigned int v6; // r5
  int v7; // r8
  float v8; // s0
  float v9; // s0
  bool v10; // zf
  float v11; // s2
  float v12; // s0
  float v13; // s2
  float v14; // s4
  float v15; // s4
  float v16; // s4
  float v17; // s4
  float v18; // s0
  float *result; // r0
  float v20; // s0
  int v21; // [sp+14h] [bp-64h]
  int *v22; // [sp+18h] [bp-60h]
  CVehicleModelInfo *v23; // [sp+1Ch] [bp-5Ch]
  _BYTE v24[8]; // [sp+20h] [bp-58h] BYREF
  float v25; // [sp+28h] [bp-50h]
  _DWORD v26[19]; // [sp+2Ch] [bp-4Ch] BYREF

  v23 = (CVehicleModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]);
  v21 = *((_DWORD *)v23 + 11);
  v2 = *(_DWORD *)(v21 + 44);
  v22 = (int *)((char *)this + 2476);
  *((float *)this + 619) = *((float *)v23 + 22) * 0.5;
  v3 = *(void **)(v2 + 16);
  v4 = *(unsigned __int8 *)(v2 + 7);
  if ( !v3 )
    goto LABEL_4;
  if ( !(v4 << 31) )
  {
    CMemoryMgr::Free(v3, 0);
    v4 = *(unsigned __int8 *)(v2 + 7);
LABEL_4:
    *(_BYTE *)(v2 + 6) = 4;
    *(_BYTE *)(v2 + 7) = v4 | 1;
    *(_DWORD *)(v2 + 16) = CMemoryMgr::Malloc(0x90u, v4);
  }
  v5 = (float *)((char *)this + 2204);
  v6 = -1;
  v7 = 17;
  memset(v26, 0, 12);
  do
  {
    CVehicleModelInfo::GetWheelPosn(v23, v6 + 1, (CVector *)v24, 0);
    v8 = 1.0;
    if ( (int)(v6 + 1) < 2 )
      v8 = -1.0;
    *(float *)v26 = v8;
    CColDisk::Set(
      (CColDisk *)(*(_DWORD *)(v2 + 16) + v7 - 17),
      *v22,
      (const CVector *)v24,
      (const CVector *)v26,
      *(float *)v22 * 0.6,
      60,
      0xDu,
      0xFFu);
    if ( v6 <= 2 )
      *(_BYTE *)(*(_DWORD *)(v2 + 16) + v7) = (unsigned int)"TaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE18CreateFirstSubTaskEP4CPed" >> (8 * v6);
    v7 += 36;
    v9 = v25;
    v10 = v6++ == 2;
    *(v5 - 4) = v25 + *(float *)(*((_DWORD *)this + 226) + 184);
    *v5++ = v9 + *(float *)(*((_DWORD *)this + 226) + 188);
  }
  while ( !v10 );
  v11 = *(float *)v22;
  v12 = *(float *)v22
      + (float)((float)((float)(*((float *)this + 547) - *((float *)this + 551))
                      * (float)((float)(1.0 / (float)(*(float *)(*((_DWORD *)this + 226) + 172) * -4.0)) + 1.0))
              - *((float *)this + 547));
  *((float *)this + 555) = v12;
  v13 = v12 - v11;
  *((float *)this + 556) = v12;
  v14 = *((float *)v23 + 22);
  *((_DWORD *)this + 506) = 1065353216;
  *((float *)this + 531) = (float)(v14 * 0.5) - v12;
  v15 = *((float *)v23 + 22);
  *((_DWORD *)this + 507) = 1065353216;
  *((float *)this + 532) = (float)(v15 * 0.5) - v12;
  v16 = *((float *)v23 + 22);
  *((_DWORD *)this + 508) = 1065353216;
  *((float *)this + 533) = (float)(v16 * 0.5) - v12;
  v17 = *((float *)v23 + 22);
  *((_DWORD *)this + 509) = 1065353216;
  *((float *)this + 534) = (float)(v17 * 0.5) - v12;
  v18 = *(float *)(v21 + 8);
  result = (float *)v21;
  if ( v13 < v18 )
  {
    *(float *)(v21 + 8) = v13;
    v18 = v13;
  }
  if ( sqrtf(
         (float)((float)(*(float *)v21 * *(float *)v21) + (float)(*(float *)(v21 + 4) * *(float *)(v21 + 4)))
       + (float)(v18 * v18)) <= sqrtf(
                                  (float)((float)(*(float *)(v21 + 12) * *(float *)(v21 + 12))
                                        + (float)(*(float *)(v21 + 16) * *(float *)(v21 + 16)))
                                + (float)(*(float *)(v21 + 20) * *(float *)(v21 + 20))) )
    result = (float *)(v21 + 12);
  v20 = sqrtf((float)((float)(*result * *result) + (float)(result[1] * result[1])) + (float)(result[2] * result[2]));
  if ( *(float *)(v21 + 36) < v20 )
    *(float *)(v21 + 36) = v20;
  return result;
}


// ============================================================

// Address: 0x5747cc
// Original: _ZN13CMonsterTruck15ResetSuspensionEv
// Demangled: CMonsterTruck::ResetSuspension(void)
char *__fastcall CMonsterTruck::ResetSuspension(CMonsterTruck *this)
{
  __int64 v2; // d16
  __int64 v3; // d17
  __int64 v4; // d18
  __int64 v5; // d19
  char *result; // r0

  CAutomobile::ResetSuspension(this);
  *(float *)&v2 = 1.0;
  *((float *)&v2 + 1) = 1.0;
  *(float *)&v3 = 1.0;
  *((float *)&v3 + 1) = 1.0;
  v4 = *(_QWORD *)((char *)this + 2204);
  v5 = *(_QWORD *)((char *)this + 2212);
  *(_QWORD *)((char *)this + 2460) = v2;
  *(_QWORD *)((char *)this + 2468) = v3;
  result = (char *)this + 2124;
  *(_QWORD *)((char *)this + 2124) = v4;
  *(_QWORD *)((char *)this + 2132) = v5;
  return result;
}


// ============================================================

// Address: 0x5747f4
// Original: _ZN13CMonsterTruck14ProcessControlEv
// Demangled: CMonsterTruck::ProcessControl(void)
int __fastcall CMonsterTruck::ProcessControl(CMonsterTruck *this)
{
  float v1; // s2
  float *v3; // r8
  float v4; // s2
  float v5; // s0
  float v6; // s0
  float *v7; // r9
  float v8; // s2
  float v9; // s0
  float v10; // s2
  float *v11; // r5
  float v12; // s2
  float v13; // s0
  float v14; // s0
  float *v15; // r6
  float v16; // s2
  float v17; // s0
  int result; // r0
  float *v19; // r0
  float v20; // s0
  float v21; // s4
  float v22; // s2
  float v23; // s2
  float *v24; // r0
  float v25; // s4
  float v26; // s2
  float v27; // s2
  float *v28; // r0
  float v29; // s4
  float v30; // s2
  float v31; // s2
  float *v32; // r0
  float v33; // s2
  float v34; // s0
  float v35; // s0

  v1 = 1.0;
  v3 = (float *)((char *)this + 2024);
  if ( *((float *)this + 506) < 1.0 )
  {
    v4 = *((float *)this + 547);
    v5 = v4 - *((float *)this + 531);
    *v3 = v5;
    v1 = v5 / (float)(v4 - *((float *)this + 551));
    if ( v1 < 0.0 )
      v1 = 0.0;
  }
  v6 = 1.0;
  v7 = (float *)((char *)this + 2028);
  *v3 = v1;
  if ( *((float *)this + 507) < 1.0 )
  {
    v8 = *((float *)this + 548);
    v9 = v8 - *((float *)this + 532);
    *v7 = v9;
    v6 = v9 / (float)(v8 - *((float *)this + 552));
    if ( v6 < 0.0 )
      v6 = 0.0;
  }
  v10 = 1.0;
  v11 = (float *)((char *)this + 2032);
  *v7 = v6;
  if ( *((float *)this + 508) < 1.0 )
  {
    v12 = *((float *)this + 549);
    v13 = v12 - *((float *)this + 533);
    *v11 = v13;
    v10 = v13 / (float)(v12 - *((float *)this + 553));
    if ( v10 < 0.0 )
      v10 = 0.0;
  }
  v14 = 1.0;
  v15 = (float *)((char *)this + 2036);
  *v11 = v10;
  if ( *((float *)this + 509) < 1.0 )
  {
    v16 = *((float *)this + 550);
    v17 = v16 - *((float *)this + 534);
    *v15 = v17;
    v14 = v17 / (float)(v16 - *((float *)this + 554));
    if ( v14 < 0.0 )
      v14 = 0.0;
  }
  *v15 = v14;
  CAutomobile::ProcessControl(this);
  result = *((unsigned __int8 *)this + 28) << 25;
  if ( (*((_BYTE *)this + 28) & 0x40) == 0
    && (*((float *)this + 18) != 0.0
     || *((float *)this + 19) != 0.0
     || *((float *)this + 20) != 0.0
     || *((float *)this + 21) != 0.0
     || *((float *)this + 22) != 0.0
     || *((float *)this + 23) != 0.0) )
  {
    v19 = (float *)((char *)this + 2124);
    v20 = *(float *)&CTimer::ms_fTimeStep * (float)(fWheelExtensionRate * *((float *)this + 619));
    v21 = *((float *)this + 531) - v20;
    v22 = *((float *)this + 551);
    *((float *)this + 531) = v21;
    if ( v21 >= v22 )
    {
      v23 = *((float *)this + 547);
      if ( v21 > v23 )
        *v19 = v23;
    }
    else
    {
      *v19 = v22;
    }
    *v3 = 1.0;
    v24 = (float *)((char *)this + 2128);
    v25 = *((float *)this + 532) - v20;
    v26 = *((float *)this + 552);
    *((float *)this + 532) = v25;
    if ( v25 >= v26 )
    {
      v27 = *((float *)this + 548);
      if ( v25 > v27 )
        *v24 = v27;
    }
    else
    {
      *v24 = v26;
    }
    *v7 = 1.0;
    v28 = (float *)((char *)this + 2132);
    v29 = *((float *)this + 533) - v20;
    v30 = *((float *)this + 553);
    *((float *)this + 533) = v29;
    if ( v29 >= v30 )
    {
      v31 = *((float *)this + 549);
      if ( v29 > v31 )
        *v28 = v31;
    }
    else
    {
      *v28 = v30;
    }
    *v11 = 1.0;
    v32 = (float *)((char *)this + 2136);
    v33 = *((float *)this + 534) - v20;
    v34 = *((float *)this + 554);
    *((float *)this + 534) = v33;
    if ( v33 >= v34 )
    {
      v35 = *((float *)this + 550);
      if ( v33 > v35 )
        *v32 = v35;
    }
    else
    {
      *v32 = v34;
    }
    result = 1065353216;
    *v15 = 1.0;
  }
  return result;
}


// ============================================================

// Address: 0x574aec
// Original: _ZN13CMonsterTruck16ExtendSuspensionEv
// Demangled: CMonsterTruck::ExtendSuspension(void)
int __fastcall CMonsterTruck::ExtendSuspension(int this)
{
  float *v1; // r1
  float v2; // s0
  float v3; // s4
  float v4; // s2
  float v5; // s2
  float *v6; // r1
  float v7; // s4
  float v8; // s2
  float v9; // s2
  float *v10; // r1
  float v11; // s4
  float v12; // s2
  float v13; // s2
  float *v14; // r1
  float v15; // s2
  float v16; // s0
  float v17; // s0

  v1 = (float *)(this + 2124);
  v2 = (float)(fWheelExtensionRate * *(float *)(this + 2476)) * *(float *)&CTimer::ms_fTimeStep;
  v3 = *(float *)(this + 2124) - v2;
  v4 = *(float *)(this + 2204);
  *(float *)(this + 2124) = v3;
  if ( v3 >= v4 )
  {
    v5 = *(float *)(this + 2188);
    if ( v3 > v5 )
      *v1 = v5;
  }
  else
  {
    *v1 = v4;
  }
  v6 = (float *)(this + 2128);
  v7 = *(float *)(this + 2128) - v2;
  v8 = *(float *)(this + 2208);
  *(_DWORD *)(this + 2024) = 1065353216;
  *(float *)(this + 2128) = v7;
  if ( v7 >= v8 )
  {
    v9 = *(float *)(this + 2192);
    if ( v7 > v9 )
      *v6 = v9;
  }
  else
  {
    *v6 = v8;
  }
  v10 = (float *)(this + 2132);
  v11 = *(float *)(this + 2132) - v2;
  v12 = *(float *)(this + 2212);
  *(_DWORD *)(this + 2028) = 1065353216;
  *(float *)(this + 2132) = v11;
  if ( v11 >= v12 )
  {
    v13 = *(float *)(this + 2196);
    if ( v11 > v13 )
      *v10 = v13;
  }
  else
  {
    *v10 = v12;
  }
  v14 = (float *)(this + 2136);
  v15 = *(float *)(this + 2136) - v2;
  v16 = *(float *)(this + 2216);
  *(_DWORD *)(this + 2032) = 1065353216;
  *(float *)(this + 2136) = v15;
  if ( v15 >= v16 )
  {
    v17 = *(float *)(this + 2200);
    if ( v15 > v17 )
      *v14 = v17;
  }
  else
  {
    *v14 = v16;
  }
  *(_DWORD *)(this + 2036) = 1065353216;
  return this;
}


// ============================================================

// Address: 0x574c34
// Original: _ZN13CMonsterTruck28ProcessControlCollisionCheckEb
// Demangled: CMonsterTruck::ProcessControlCollisionCheck(bool)
float *__fastcall CMonsterTruck::ProcessControlCollisionCheck(CMonsterTruck *this, bool a2)
{
  float *v3; // r2
  float v4; // s0
  float v5; // s4
  float v6; // s2
  float v7; // s2
  float *v8; // r5
  float v9; // s2
  float v10; // s4
  float v11; // s2
  float v12; // s2
  float *v13; // r6
  float *v14; // r11
  float v15; // s2
  float v16; // s4
  float v17; // s2
  float v18; // s2
  float *v19; // r8
  float *v20; // r9
  float v21; // s2
  float v22; // s2
  float v23; // s0
  float v24; // s0
  float *v25; // r10
  float v26; // s0
  float v27; // s2
  float v28; // s4
  float v29; // s2
  float *result; // r0
  float v31; // s2
  float v32; // s4
  float v33; // s2
  float v34; // s2
  float v35; // s4
  float v36; // s2
  float v37; // s2
  float v38; // s0
  float *v39; // [sp+Ch] [bp-24h]
  float *v40; // [sp+10h] [bp-20h]

  v3 = (float *)((char *)this + 2124);
  v4 = *(float *)&CTimer::ms_fTimeStep * (float)(fWheelExtensionRate * *((float *)this + 619));
  v40 = (float *)((char *)this + 2204);
  v5 = *((float *)this + 531) - v4;
  v6 = *((float *)this + 551);
  *((float *)this + 531) = v5;
  if ( v5 >= v6 )
  {
    v7 = *((float *)this + 547);
    if ( v5 > v7 )
      *v3 = v7;
  }
  else
  {
    *v3 = v6;
  }
  v8 = (float *)((char *)this + 2128);
  v9 = *((float *)this + 532);
  *((_DWORD *)this + 506) = 1065353216;
  v10 = v9 - v4;
  v11 = *((float *)this + 552);
  *((float *)this + 532) = v10;
  if ( v10 >= v11 )
  {
    v12 = *((float *)this + 548);
    if ( v10 > v12 )
      *v8 = v12;
  }
  else
  {
    *v8 = v11;
  }
  v13 = (float *)((char *)this + 2132);
  v14 = (float *)((char *)this + 2024);
  v15 = *((float *)this + 533);
  *((_DWORD *)this + 507) = 1065353216;
  v16 = v15 - v4;
  v17 = *((float *)this + 553);
  *((float *)this + 533) = v16;
  if ( v16 >= v17 )
  {
    v18 = *((float *)this + 549);
    if ( v16 > v18 )
      *v13 = v18;
  }
  else
  {
    *v13 = v17;
  }
  v19 = (float *)((char *)this + 2136);
  v39 = (float *)((char *)this + 2124);
  v20 = (float *)((char *)this + 2028);
  v21 = *((float *)this + 534);
  *((_DWORD *)this + 508) = 1065353216;
  v22 = v21 - v4;
  v23 = *((float *)this + 554);
  *((float *)this + 534) = v22;
  if ( v22 >= v23 )
  {
    v24 = *((float *)this + 550);
    if ( v22 > v24 )
      *v19 = v24;
  }
  else
  {
    *v19 = v23;
  }
  v25 = (float *)((char *)this + 2032);
  *((_DWORD *)this + 509) = 1065353216;
  CAutomobile::ProcessControlCollisionCheck(this, a2);
  v26 = 1.0;
  v27 = 1.0;
  if ( *v14 < 1.0 )
  {
    v28 = *((float *)this + 547);
    v29 = v28 - *v39;
    *v14 = v29;
    v27 = v29 / (float)(v28 - *v40);
  }
  *v14 = v27;
  result = (float *)((char *)this + 2036);
  v31 = 1.0;
  if ( *v20 < 1.0 )
  {
    v32 = *((float *)this + 548);
    v33 = v32 - *v8;
    *v20 = v33;
    v31 = v33 / (float)(v32 - *((float *)this + 552));
  }
  *v20 = v31;
  v34 = 1.0;
  if ( *v25 < 1.0 )
  {
    v35 = *((float *)this + 549);
    v36 = v35 - *v13;
    *v25 = v36;
    v34 = v36 / (float)(v35 - *((float *)this + 553));
  }
  *v25 = v34;
  if ( *result < 1.0 )
  {
    v37 = *((float *)this + 550);
    v38 = v37 - *v19;
    *result = v38;
    v26 = v38 / (float)(v37 - *((float *)this + 554));
  }
  *result = v26;
  return result;
}


// ============================================================

// Address: 0x574e90
// Original: _ZN13CMonsterTruck17ProcessSuspensionEv
// Demangled: CMonsterTruck::ProcessSuspension(void)
char *__fastcall CMonsterTruck::ProcessSuspension(CMonsterTruck *this)
{
  float *v2; // r0
  float v3; // s10
  float v4; // s6
  float v5; // s2
  float v6; // s8
  float v7; // s4
  float v8; // s12
  float v9; // s14
  float v10; // s0
  float *v11; // r1
  float *v12; // r2
  float v13; // s14
  float v14; // s12
  float v15; // s1
  float v16; // s4
  float *v17; // r2
  float *v18; // r5
  float v19; // s14
  float v20; // s12
  float v21; // s10
  float *v22; // r6
  float v23; // s10
  float v24; // s8
  float v25; // s6
  int v26; // r10
  int v27; // r4
  int v28; // r8
  float *v29; // r9
  float v30; // s2
  float v31; // s4
  float *v32; // r0
  float v33; // s0
  float *v34; // r1
  float v35; // s4
  float *v36; // r0
  float v37; // s2
  char *result; // r0
  int v39; // r6
  int i; // r5
  char *v41; // r10
  float v42; // s0
  int v43; // [sp+Ch] [bp-10Ch]
  __int64 v44; // [sp+20h] [bp-F8h]
  float v45; // [sp+28h] [bp-F0h]
  float v46[3]; // [sp+30h] [bp-E8h] BYREF
  float v47[3]; // [sp+3Ch] [bp-DCh] BYREF
  float v48[3]; // [sp+48h] [bp-D0h] BYREF
  float v49[3]; // [sp+54h] [bp-C4h] BYREF
  float v50[3]; // [sp+60h] [bp-B8h] BYREF
  float v51[3]; // [sp+6Ch] [bp-ACh] BYREF
  float v52[3]; // [sp+78h] [bp-A0h] BYREF
  float v53[3]; // [sp+84h] [bp-94h] BYREF
  _BYTE v54[12]; // [sp+90h] [bp-88h] BYREF
  int v55; // [sp+9Ch] [bp-7Ch] BYREF
  int v56; // [sp+A8h] [bp-70h] BYREF
  int v57; // [sp+B4h] [bp-64h] BYREF
  float v58; // [sp+C0h] [bp-58h] BYREF
  float v59; // [sp+C4h] [bp-54h] BYREF
  float v60; // [sp+C8h] [bp-50h] BYREF
  float v61[19]; // [sp+CCh] [bp-4Ch] BYREF

  v2 = (float *)*((_DWORD *)this + 5);
  v3 = -v2[8];
  v4 = -v2[9];
  v5 = 0.0;
  v6 = -v2[10];
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  v50[1] = v4;
  v50[0] = v3;
  v50[2] = v6;
  v10 = *((float *)this + 506);
  v11 = (float *)((char *)this + 4);
  if ( v10 < 1.0 )
  {
    v12 = (float *)((char *)this + 4);
    if ( v2 )
      v12 = v2 + 12;
    v9 = *((float *)this + 464) - v12[2];
    v8 = *((float *)this + 463) - v12[1];
    v7 = *((float *)this + 462) - *v12;
  }
  v46[2] = v9;
  v13 = 0.0;
  v46[1] = v8;
  v14 = 0.0;
  v15 = 0.0;
  v51[2] = v6;
  v51[1] = v4;
  v46[0] = v7;
  v51[0] = v3;
  v16 = *((float *)this + 507);
  if ( v16 < 1.0 )
  {
    v17 = (float *)((char *)this + 4);
    if ( v2 )
      v17 = v2 + 12;
    v15 = *((float *)this + 475) - v17[2];
    v13 = *((float *)this + 474) - v17[1];
    v14 = *((float *)this + 473) - *v17;
  }
  v18 = (float *)((char *)this + 2032);
  v47[2] = v15;
  v47[1] = v13;
  v19 = 0.0;
  v47[0] = v14;
  v20 = 0.0;
  v52[2] = v6;
  v52[1] = v4;
  v52[0] = v3;
  v21 = 0.0;
  if ( *((float *)this + 508) < 1.0 )
  {
    if ( v2 )
      v11 = v2 + 12;
    v19 = *((float *)this + 486) - v11[2];
    v20 = *((float *)this + 485) - v11[1];
    v21 = *((float *)this + 484) - *v11;
  }
  v48[2] = v19;
  v22 = (float *)((char *)this + 2036);
  v48[1] = v20;
  v48[0] = v21;
  v23 = v2[8];
  v53[2] = v6;
  v24 = 0.0;
  v53[1] = v4;
  v53[0] = -v23;
  v25 = 0.0;
  if ( *((float *)this + 509) < 1.0 )
  {
    v24 = *((float *)this + 497) - v2[14];
    v5 = *((float *)this + 495) - v2[12];
    v25 = *((float *)this + 496) - v2[13];
  }
  v49[2] = v24;
  v49[1] = v25;
  v49[0] = v5;
  if ( v10 < 1.0 )
  {
    CPhysical::ApplySpringCollisionAlt(
      this,
      *(float *)(*((_DWORD *)this + 226) + 172),
      (CVector *)v50,
      (CVector *)v46,
      v10,
      *(float *)(*((_DWORD *)this + 226) + 192),
      (CMonsterTruck *)((char *)this + 1864),
      &v58);
    v16 = *((float *)this + 507);
  }
  if ( v16 < 1.0 )
    CPhysical::ApplySpringCollisionAlt(
      this,
      *(float *)(*((_DWORD *)this + 226) + 172),
      (CVector *)v51,
      (CVector *)v47,
      v16,
      1.0 - *(float *)(*((_DWORD *)this + 226) + 192),
      (CMonsterTruck *)((char *)this + 1908),
      &v59);
  if ( *v18 < 1.0 )
    CPhysical::ApplySpringCollisionAlt(
      this,
      *(float *)(*((_DWORD *)this + 226) + 172),
      (CVector *)v52,
      (CVector *)v48,
      *v18,
      *(float *)(*((_DWORD *)this + 226) + 192),
      (CMonsterTruck *)((char *)this + 1952),
      &v60);
  if ( *v22 < 1.0 )
    CPhysical::ApplySpringCollisionAlt(
      this,
      *(float *)(*((_DWORD *)this + 226) + 172),
      (CVector *)v53,
      (CVector *)v49,
      *v22,
      1.0 - *(float *)(*((_DWORD *)this + 226) + 192),
      (CMonsterTruck *)((char *)this + 1996),
      v61);
  v26 = 0;
  v27 = 0;
  v28 = 0;
  do
  {
    CPhysical::GetSpeed();
    v29 = (float *)&v54[v27 * 4];
    v29[2] = v45;
    *(_QWORD *)v29 = v44;
    if ( *(_DWORD *)((char *)this + v26 + 2300) )
    {
      CPhysical::GetSpeed();
      v30 = v29[1] - *((float *)&v44 + 1);
      v31 = v29[2] - v45;
      *v29 = *v29 - *(float *)&v44;
      v29[1] = v30;
      v29[2] = v31;
    }
    if ( *(float *)((char *)this + v26 + 2024) < 1.0 )
    {
      v32 = (float *)((char *)this + v28);
      v33 = *(float *)((char *)this + v28 + 1872);
      if ( v33 > 0.35 )
      {
        v34 = v32 + 467;
        v35 = v32[466];
        v36 = &v50[v27];
        v37 = -*v34;
        *v36 = -v35;
        v36[1] = v37;
        v36[2] = -v33;
      }
    }
    v27 += 3;
    v26 += 4;
    v28 += 44;
  }
  while ( v27 != 12 );
  if ( *((float *)this + 506) < 1.0 )
    CPhysical::ApplySpringDampening(
      this,
      *(float *)(*((_DWORD *)this + 226) + 176),
      v58,
      (CVector *)v50,
      (CVector *)v46,
      (CVector *)v54);
  result = (char *)this + 2028;
  if ( *((float *)this + 507) < 1.0 )
    result = (char *)CPhysical::ApplySpringDampening(
                       this,
                       *(float *)(*((_DWORD *)this + 226) + 176),
                       v59,
                       (CVector *)v51,
                       (CVector *)v47,
                       (CVector *)&v55);
  if ( *((float *)this + 508) < 1.0 )
    result = (char *)CPhysical::ApplySpringDampening(
                       this,
                       *(float *)(*((_DWORD *)this + 226) + 176),
                       v60,
                       (CVector *)v52,
                       (CVector *)v48,
                       (CVector *)&v56);
  if ( *((float *)this + 509) < 1.0 )
    result = (char *)CPhysical::ApplySpringDampening(
                       this,
                       *(float *)(*((_DWORD *)this + 226) + 176),
                       v61[0],
                       (CVector *)v53,
                       (CVector *)v49,
                       (CVector *)&v57);
  v39 = 0;
  for ( i = 0; i != 176; i += 44 )
  {
    v41 = (char *)this + v39;
    v42 = *(float *)((char *)this + v39 + 2024);
    if ( v42 < 1.0 )
    {
      result = (char *)*((_DWORD *)v41 + 575);
      if ( result )
      {
        if ( (result[58] & 7) == 2 )
        {
          if ( v42 < 0.5 )
            (*(void (__fastcall **)(char *, _DWORD, _DWORD, CMonsterTruck *, char *, char *, int, int))(*(_DWORD *)result + 228))(
              result,
              (float)((float)(1.0 - v42) * 0.05) * *((float *)this + 36),
              *((unsigned __int8 *)this + i + 1884),
              this,
              (char *)this + i + 1848,
              (char *)this + i + 1864,
              49,
              v43);
          result = (char *)this + i + 1872;
          if ( *(float *)result > 0.5 )
          {
            v43 = 1;
            result = (char *)CPhysical::ApplyForce();
          }
        }
      }
    }
    v39 += 4;
    *((_DWORD *)v41 + 575) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5754b0
// Original: _ZN13CMonsterTruck9PreRenderEv
// Demangled: CMonsterTruck::PreRender(void)
void __fastcall CMonsterTruck::PreRender(CMonsterTruck *this)
{
  float *v2; // r10
  float *v3; // r11
  float v4; // s0
  _DWORD *v5; // r0
  float *v6; // r8
  float v7; // s0
  float v8; // s0
  CVehicleModelInfo *v9; // r9
  int v10; // r1
  int v11; // [sp+18h] [bp-70h] BYREF
  _BYTE v12[64]; // [sp+24h] [bp-64h] BYREF
  int v13; // [sp+64h] [bp-24h]
  int v14; // [sp+68h] [bp-20h]

  v2 = (float *)((char *)this + 2124);
  v3 = (float *)((char *)this + 2132);
  v4 = *((float *)this + 547);
  v5 = (_DWORD *)((char *)this + 2192);
  v6 = (float *)((char *)this + 2136);
  if ( *((float *)this + 531) > v4 )
    *v2 = v4;
  if ( *((float *)this + 532) > *(float *)v5 )
    *((_DWORD *)this + 532) = *v5;
  v7 = *((float *)this + 549);
  if ( *v3 > v7 )
    *v3 = v7;
  v8 = *((float *)this + 550);
  if ( *v6 > v8 )
    *v6 = v8;
  CAutomobile::PreRender(this);
  v9 = (CVehicleModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]);
  v13 = 0;
  v14 = 0;
  CVehicleModelInfo::GetWheelPosn(v9, 0, (CVector *)&v11, 0);
  CVehicle::SetTransmissionRotation();
  CVehicleModelInfo::GetWheelPosn(v9, 1, (CVector *)&v11, 0);
  CVehicle::SetTransmissionRotation();
  if ( *((_WORD *)this + 19) == 406 )
  {
    v10 = *((_DWORD *)this + 429);
    if ( v10 )
      CVehicle::SetComponentRotation(
        (int)this,
        v10,
        0,
        COERCE_INT(CMonsterTruck::DUMPER_COL_ANGLEMULT * (float)*((unsigned __int16 *)this + 1088)),
        1);
  }
  CMatrix::~CMatrix((CMatrix *)v12);
}


// ============================================================

// Address: 0x575600
// Original: _ZN13CMonsterTruck22ProcessEntityCollisionEP7CEntityP9CColPoint
// Demangled: CMonsterTruck::ProcessEntityCollision(CEntity *,CColPoint *)
int __fastcall CMonsterTruck::ProcessEntityCollision(CEntity *this, int a2, int a3)
{
  int ColModel; // r10
  __int64 v6; // d17
  int v7; // r11
  CEntity *v8; // r0
  CMatrix *v9; // r6
  int v10; // r9
  CEntity *v11; // r5
  int v12; // r0
  int v13; // r12
  int v14; // r8
  int v15; // r11
  int v16; // r10
  int v17; // r6
  CEntity *v18; // r3
  char *v19; // r0
  float v20; // s0
  float *v21; // r1
  float *v22; // r5
  int v23; // r1
  bool v24; // zf
  int v25; // r0
  float *v26; // r1
  float v27; // s2
  float *v28; // r0
  float v29; // s4
  __int64 v30; // kr00_8
  unsigned int v31; // r1
  bool v32; // cc
  int v33; // r0
  int v34; // r1
  int *v36; // [sp+10h] [bp-48h]
  char *v37; // [sp+14h] [bp-44h]
  int v38; // [sp+18h] [bp-40h]
  __int64 *v40; // [sp+20h] [bp-38h]
  int v41; // [sp+24h] [bp-34h]
  _QWORD v42[6]; // [sp+28h] [bp-30h] BYREF

  if ( (*((_BYTE *)this + 58) & 0xF8) != 0x10 )
    *((_DWORD *)this + 267) |= 0x1000000u;
  ColModel = CEntity::GetColModel(this);
  v6 = *(_QWORD *)((char *)this + 2132);
  v7 = *(_DWORD *)(ColModel + 44);
  v42[0] = *(_QWORD *)((char *)this + 2124);
  v42[1] = v6;
  v8 = (CEntity *)a2;
  if ( (*((_BYTE *)this + 69) & 0x90) != 0 || (*(_BYTE *)(a2 + 58) & 7) == 3 )
    *(_BYTE *)(v7 + 6) = 0;
  v9 = *(CMatrix **)(a2 + 20);
  v10 = *((_DWORD *)this + 5);
  if ( !v9 )
  {
    CPlaceable::AllocateMatrix((CPlaceable *)a2);
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a2 + 4), *(CMatrix **)(a2 + 20));
    v8 = (CEntity *)a2;
    v9 = *(CMatrix **)(a2 + 20);
  }
  v11 = v8;
  v12 = CEntity::GetColModel(v8);
  v13 = CCollision::ProcessColModels(v10, ColModel, v9, v12, a3, (int)this + 1848, (int)v42, 0);
  v38 = v13;
  if ( *(_BYTE *)(v7 + 6) )
  {
    v37 = (char *)this + 2324;
    v36 = (int *)((char *)v11 + 28);
    v40 = (__int64 *)((char *)this + 28);
    v14 = 1412;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = v11;
    v41 = 0;
    do
    {
      v19 = (char *)this + v17;
      v20 = *(float *)((char *)v42 + v17);
      v21 = (float *)((char *)this + v17 + 2124);
      if ( v20 > *v21 && (!v13 || (*(_DWORD *)v40 & 1) != 0) )
      {
        v22 = (float *)((char *)this + v16);
        *((_DWORD *)v19 + 506) = 0;
        *v21 = v20;
        *((_BYTE *)this + v14) = *((_BYTE *)this + v16 + 1885);
        v23 = *((_BYTE *)v18 + 58) & 7;
        v24 = v23 == 4;
        ++v41;
        if ( v23 != 4 )
          v24 = v23 == 2;
        if ( v24 )
        {
          *((_DWORD *)v19 + 575) = v18;
          CEntity::RegisterReference(v18, (CEntity **)&v37[v17 - 24]);
          v13 = v38;
          v18 = (CEntity *)a2;
          v25 = *(_DWORD *)(a2 + 20);
          v26 = (float *)(v25 + 48);
          if ( !v25 )
            v26 = (float *)(a2 + 4);
          v27 = v22[463] - v26[1];
          v28 = (float *)&v37[v15];
          v29 = v22[464] - v26[2];
          *(v28 - 2) = v22[462] - *v26;
          *(float *)((char *)this + v15 + 2320) = v27;
          *v28 = v29;
          if ( (*(_BYTE *)(a2 + 58) & 7) == 2 )
            *((_BYTE *)this + v14) = *(_BYTE *)(a2 + v14);
        }
        *((_BYTE *)this + 190) = *((_BYTE *)v22 + 1883);
        if ( (*((_BYTE *)v18 + 58) & 7) == 1 )
        {
          *((_DWORD *)this + 292) = v18;
          v30 = *v40;
          v31 = *(_DWORD *)v40 & 0xBFFFFFFF | ((((unsigned int)*v36 >> 30) & 1) << 30);
          *(_DWORD *)v40 = v31;
          *((_DWORD *)this + 8) = HIDWORD(v30);
          *(_DWORD *)v40 = v31 & 0x7FFFFFFF | ((*v36 < 0) << 31);
          *((_DWORD *)this + 8) = HIDWORD(v30);
        }
      }
      v17 += 4;
      v15 += 12;
      ++v14;
      v16 += 44;
    }
    while ( v17 != 16 );
  }
  else
  {
    v18 = v11;
    *(_BYTE *)(v7 + 6) = 4;
    v41 = 0;
  }
  v32 = v13 < 0;
  if ( v13 <= 0 )
    v32 = v41 < 1;
  if ( !v32 )
  {
    CPhysical::AddCollisionRecord(this, v18);
    v33 = a2;
    if ( (*(_BYTE *)(a2 + 58) & 7) != 1 )
    {
      CPhysical::AddCollisionRecord((CPhysical *)a2, this);
      v33 = a2;
    }
    v13 = v38;
    if ( v38 >= 1 )
    {
      v34 = *(_BYTE *)(v33 + 58) & 7;
      if ( v34 == 1 || v34 == 4 && (*(_BYTE *)(v33 + 68) & 4) != 0 )
        *((_DWORD *)this + 7) |= 0x1000u;
    }
  }
  return v13;
}


// ============================================================

// Address: 0x57587a
// Original: _ZN13CMonsterTruck18SetUpWheelColModelEP9CColModel
// Demangled: CMonsterTruck::SetUpWheelColModel(CColModel *)
int __fastcall CMonsterTruck::SetUpWheelColModel(CMonsterTruck *this, CColModel *a2)
{
  return 0;
}


// ============================================================

// Address: 0x57587e
// Original: _ZN13CMonsterTruck9BurstTyreEhb
// Demangled: CMonsterTruck::BurstTyre(uchar,bool)
int __fastcall CMonsterTruck::BurstTyre(CMonsterTruck *this, unsigned __int8 a2, bool a3)
{
  return 0;
}


// ============================================================
