
// Address: 0x18a3b4
// Original: j__ZN15CLoadedCarGroup12RemoveMemberEi
// Demangled: CLoadedCarGroup::RemoveMember(int)
// attributes: thunk
int __fastcall CLoadedCarGroup::RemoveMember(CLoadedCarGroup *this, int a2)
{
  return _ZN15CLoadedCarGroup12RemoveMemberEi(this, a2);
}


// ============================================================

// Address: 0x18d230
// Original: j__ZN15CLoadedCarGroup9AddMemberEi
// Demangled: CLoadedCarGroup::AddMember(int)
// attributes: thunk
int __fastcall CLoadedCarGroup::AddMember(CLoadedCarGroup *this, int a2)
{
  return _ZN15CLoadedCarGroup9AddMemberEi(this, a2);
}


// ============================================================

// Address: 0x18ec00
// Original: j__ZN15CLoadedCarGroup12CountMembersEv
// Demangled: CLoadedCarGroup::CountMembers(void)
// attributes: thunk
int __fastcall CLoadedCarGroup::CountMembers(CLoadedCarGroup *this)
{
  return _ZN15CLoadedCarGroup12CountMembersEv(this);
}


// ============================================================

// Address: 0x192bb8
// Original: j__ZN15CLoadedCarGroup18PickLeastUsedModelEi
// Demangled: CLoadedCarGroup::PickLeastUsedModel(int)
// attributes: thunk
int __fastcall CLoadedCarGroup::PickLeastUsedModel(CLoadedCarGroup *this, int a2)
{
  return _ZN15CLoadedCarGroup18PickLeastUsedModelEi(this, a2);
}


// ============================================================

// Address: 0x19a88c
// Original: j__ZN15CLoadedCarGroup9GetMemberEi
// Demangled: CLoadedCarGroup::GetMember(int)
// attributes: thunk
int __fastcall CLoadedCarGroup::GetMember(CLoadedCarGroup *this, int a2)
{
  return _ZN15CLoadedCarGroup9GetMemberEi(this, a2);
}


// ============================================================

// Address: 0x19ae70
// Original: j__ZN15CLoadedCarGroup5ClearEv
// Demangled: CLoadedCarGroup::Clear(void)
// attributes: thunk
int __fastcall CLoadedCarGroup::Clear(CLoadedCarGroup *this)
{
  return _ZN15CLoadedCarGroup5ClearEv(this);
}


// ============================================================

// Address: 0x19caa8
// Original: j__ZN15CLoadedCarGroup13PickRandomCarEbb
// Demangled: CLoadedCarGroup::PickRandomCar(bool,bool)
// attributes: thunk
int __fastcall CLoadedCarGroup::PickRandomCar(CLoadedCarGroup *this, bool a2, bool a3)
{
  return _ZN15CLoadedCarGroup13PickRandomCarEbb(this, a2, a3);
}


// ============================================================

// Address: 0x1a1084
// Original: j__ZN15CLoadedCarGroup16SortBasedOnUsageEv
// Demangled: CLoadedCarGroup::SortBasedOnUsage(void)
// attributes: thunk
int __fastcall CLoadedCarGroup::SortBasedOnUsage(CLoadedCarGroup *this)
{
  return _ZN15CLoadedCarGroup16SortBasedOnUsageEv(this);
}


// ============================================================

// Address: 0x4d14d4
// Original: _ZN15CLoadedCarGroup13PickRandomCarEbb
// Demangled: CLoadedCarGroup::PickRandomCar(bool,bool)
int __fastcall CLoadedCarGroup::PickRandomCar(CLoadedCarGroup *this, int a2, int a3)
{
  int v5; // r0
  int v6; // r5
  int v7; // r10
  CLoadedCarGroup *v8; // r3
  int v9; // r0
  int v10; // r2
  float v11; // r6
  unsigned int v12; // r1
  CLoadedCarGroup *v13; // r2
  int v14; // t1
  float v15; // s16
  CLoadedCarGroup *v16; // r1
  int v17; // r0
  int v18; // r9
  float v19; // s0
  CTheScripts *v20; // r5
  int v21; // r0
  int v22; // r1
  __int16 *v23; // r2
  __int16 *v24; // r3
  __int16 *v25; // r6
  float *v26; // r10
  int v27; // r1
  int v28; // r1
  char *v30; // [sp+8h] [bp-68h]
  CLoadedCarGroup *v32; // [sp+Ch] [bp-64h]
  _WORD v33[48]; // [sp+10h] [bp-60h] BYREF

  v5 = CLoadedCarGroup::CountMembers(this);
  v6 = v5;
  if ( !v5 )
    return -1;
  if ( a3 != 1 )
  {
    if ( v5 >= 1 )
    {
      v9 = 0;
      v13 = this;
      do
      {
        v14 = *(__int16 *)v13;
        v13 = (CLoadedCarGroup *)((char *)v13 + 2);
        --v6;
        v9 += *(__int16 *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v14]) + 106);
      }
      while ( v6 );
      goto LABEL_13;
    }
    return -1;
  }
  memset(v33, 255, 0x2Eu);
  if ( v6 < 1 )
    return -1;
  v7 = 0;
  v8 = this;
  v9 = 0;
  do
  {
    v10 = *(__int16 *)v8;
    v11 = CModelInfo::ms_modelInfoPtrs[v10];
    v12 = *(char *)(LODWORD(v11) + 101);
    if ( v12 <= 8 && ((1 << v12) & 0x107) != 0 )
    {
      v33[v7] = v10;
      v9 += *(__int16 *)(LODWORD(v11) + 106);
      ++v7;
    }
    v8 = (CLoadedCarGroup *)((char *)v8 + 2);
    --v6;
  }
  while ( v6 );
LABEL_13:
  if ( !v9 )
    return -1;
  v15 = (float)v9;
  v16 = this;
  v30 = (char *)this + 2;
  if ( a3 )
    v16 = (CLoadedCarGroup *)v33;
  v32 = v16;
  v17 = 0;
  while ( 1 )
  {
    v18 = v17;
    v19 = (float)(unsigned __int16)rand();
    v20 = (CTheScripts *)*(__int16 *)v32;
    v21 = *(__int16 *)(LODWORD(CModelInfo::ms_modelInfoPtrs[(_DWORD)v20]) + 106);
    v22 = (int)(float)((float)(v19 * 0.000015259) * v15);
    if ( v22 <= v21 )
    {
      v26 = &CModelInfo::ms_modelInfoPtrs[(_DWORD)v20];
    }
    else
    {
      v23 = &v33[1];
      v24 = (__int16 *)v30;
      do
      {
        v25 = v24 + 1;
        if ( a3 )
          v24 = v23;
        v22 -= v21;
        v20 = (CTheScripts *)*v24;
        ++v23;
        v21 = *(__int16 *)(LODWORD(CModelInfo::ms_modelInfoPtrs[(_DWORD)v20]) + 106);
        v24 = v25;
      }
      while ( v22 > v21 );
      v26 = &CModelInfo::ms_modelInfoPtrs[(_DWORD)v20];
    }
    if ( !CTheScripts::HasCarModelBeenSuppressed(v20, v22)
      && !CTheScripts::HasVehicleModelBeenBlockedByScript(v20, v27)
      && !CStreaming::WeAreTryingToPhaseVehicleOut(v20, v28)
      && (a2 != 1 || *(__int16 *)(*(_DWORD *)v26 + 30) < 3) )
    {
      break;
    }
    v17 = v18 + 1;
    if ( v18 >= 9 )
      return -1;
  }
  return (int)v20;
}


// ============================================================

// Address: 0x4d1780
// Original: _ZN15CLoadedCarGroup9GetMemberEi
// Demangled: CLoadedCarGroup::GetMember(int)
int __fastcall CLoadedCarGroup::GetMember(CLoadedCarGroup *this, int a2)
{
  return *((__int16 *)this + a2);
}


// ============================================================

// Address: 0x4d17b0
// Original: _ZN15CLoadedCarGroup5ClearEv
// Demangled: CLoadedCarGroup::Clear(void)
void __fastcall CLoadedCarGroup::Clear(CLoadedCarGroup *this)
{
  memset(this, 255, 0x2Eu);
}


// ============================================================

// Address: 0x4d17be
// Original: _ZN15CLoadedCarGroup9AddMemberEi
// Demangled: CLoadedCarGroup::AddMember(int)
__int16 *__fastcall CLoadedCarGroup::AddMember(__int16 *this, __int16 a2)
{
  _WORD *v2; // r2
  int v3; // r3
  bool v4; // nf
  int v5; // r3
  bool v6; // nf
  int v7; // r3
  bool v8; // nf
  int v9; // r3
  bool v10; // nf
  int v11; // r3
  bool v12; // nf
  int v13; // r3
  bool v14; // nf
  int v15; // r3
  bool v16; // nf
  int v17; // r3
  bool v18; // nf
  int v19; // r3
  bool v20; // nf
  int v21; // r3
  bool v22; // nf
  int v23; // t1

  if ( *this < 0 )
  {
    v2 = this;
LABEL_37:
    *v2 = a2;
    return this;
  }
  v2 = this + 1;
  if ( this[1] <= -1 )
    goto LABEL_37;
  v2 = this + 2;
  v3 = this[2];
  v4 = v3 < 0;
  if ( v3 >= 0 )
  {
    v2 = this + 3;
    v4 = this[3] < 0;
  }
  if ( v4 )
    goto LABEL_37;
  v2 = this + 4;
  v5 = this[4];
  v6 = v5 < 0;
  if ( v5 >= 0 )
  {
    v2 = this + 5;
    v6 = this[5] < 0;
  }
  if ( v6 )
    goto LABEL_37;
  v2 = this + 6;
  v7 = this[6];
  v8 = v7 < 0;
  if ( v7 >= 0 )
  {
    v2 = this + 7;
    v8 = this[7] < 0;
  }
  if ( v8 )
    goto LABEL_37;
  v2 = this + 8;
  v9 = this[8];
  v10 = v9 < 0;
  if ( v9 >= 0 )
  {
    v2 = this + 9;
    v10 = this[9] < 0;
  }
  if ( v10 )
    goto LABEL_37;
  v2 = this + 10;
  v11 = this[10];
  v12 = v11 < 0;
  if ( v11 >= 0 )
  {
    v2 = this + 11;
    v12 = this[11] < 0;
  }
  if ( v12 )
    goto LABEL_37;
  v2 = this + 12;
  v13 = this[12];
  v14 = v13 < 0;
  if ( v13 >= 0 )
  {
    v2 = this + 13;
    v14 = this[13] < 0;
  }
  if ( v14 )
    goto LABEL_37;
  v2 = this + 14;
  v15 = this[14];
  v16 = v15 < 0;
  if ( v15 >= 0 )
  {
    v2 = this + 15;
    v16 = this[15] < 0;
  }
  if ( v16 )
    goto LABEL_37;
  v2 = this + 16;
  v17 = this[16];
  v18 = v17 < 0;
  if ( v17 >= 0 )
  {
    v2 = this + 17;
    v18 = this[17] < 0;
  }
  if ( v18 )
    goto LABEL_37;
  v2 = this + 18;
  v19 = this[18];
  v20 = v19 < 0;
  if ( v19 >= 0 )
  {
    v2 = this + 19;
    v20 = this[19] < 0;
  }
  if ( v20 )
    goto LABEL_37;
  v2 = this + 20;
  v21 = this[20];
  v22 = v21 < 0;
  if ( v21 >= 0 )
  {
    v2 = this + 21;
    v22 = this[21] < 0;
  }
  if ( v22 )
    goto LABEL_37;
  v23 = this[22];
  this += 22;
  if ( v23 < 0 )
    *this = a2;
  return this;
}


// ============================================================

// Address: 0x4d18ae
// Original: _ZN15CLoadedCarGroup12RemoveMemberEi
// Demangled: CLoadedCarGroup::RemoveMember(int)
__int16 *__fastcall CLoadedCarGroup::RemoveMember(__int16 *this, int a2)
{
  int v2; // r12
  int v3; // r5
  unsigned int v4; // lr
  int v5; // r2
  __int16 *v6; // r1
  unsigned int v7; // r3
  __int64 v8; // d17
  bool v9; // cc

  if ( *this == a2 )
  {
    v2 = 0;
    goto LABEL_45;
  }
  if ( this[1] == a2 )
  {
    v2 = 1;
    goto LABEL_45;
  }
  if ( this[2] == a2 )
  {
    v2 = 2;
    goto LABEL_45;
  }
  if ( this[3] == a2 )
  {
    v2 = 3;
    goto LABEL_45;
  }
  if ( this[4] == a2 )
  {
    v2 = 4;
    goto LABEL_45;
  }
  if ( this[5] == a2 )
  {
    v2 = 5;
    goto LABEL_45;
  }
  if ( this[6] == a2 )
  {
    v2 = 6;
    goto LABEL_45;
  }
  if ( this[7] == a2 )
  {
    v2 = 7;
    goto LABEL_45;
  }
  if ( this[8] == a2 )
  {
    v2 = 8;
    goto LABEL_45;
  }
  if ( this[9] == a2 )
  {
    v2 = 9;
    goto LABEL_45;
  }
  if ( this[10] == a2 )
  {
    v2 = 10;
    goto LABEL_45;
  }
  if ( this[11] == a2 )
  {
    v2 = 11;
    goto LABEL_45;
  }
  if ( this[12] == a2 )
  {
    v2 = 12;
    goto LABEL_45;
  }
  if ( this[13] == a2 )
  {
    v2 = 13;
    goto LABEL_45;
  }
  if ( this[14] == a2 )
  {
    v2 = 14;
    goto LABEL_45;
  }
  if ( this[15] == a2 )
  {
    v2 = 15;
    goto LABEL_45;
  }
  if ( this[16] == a2 )
  {
    v2 = 16;
    goto LABEL_45;
  }
  if ( this[17] == a2 )
  {
    v2 = 17;
    goto LABEL_45;
  }
  if ( this[18] == a2 )
  {
    v2 = 18;
    goto LABEL_45;
  }
  if ( this[19] == a2 )
  {
    v2 = 19;
    goto LABEL_45;
  }
  if ( this[20] == a2 )
  {
    v2 = 20;
    goto LABEL_45;
  }
  if ( this[21] == a2 )
  {
    v2 = 21;
LABEL_45:
    v3 = 22 - v2;
    if ( (unsigned int)(22 - v2) > 7 && (v4 = v3 & 0xFFFFFFF8, (v3 & 0xFFFFFFF8) != 0) )
    {
      v5 = v2 + v4;
      v6 = &this[v2];
      v7 = v3 & 0xFFFFFFF8;
      do
      {
        v7 -= 8;
        v8 = *(_QWORD *)(v6 + 5);
        *(_QWORD *)v6 = *(_QWORD *)(v6 + 1);
        *((_QWORD *)v6 + 1) = v8;
        v6 += 8;
      }
      while ( v7 );
      if ( v3 == v4 )
        goto LABEL_53;
    }
    else
    {
      v5 = v2;
    }
    do
    {
      v9 = v5 < 21;
      this[v5] = this[v5 + 1];
      ++v5;
    }
    while ( v9 );
LABEL_53:
    this[22] = -1;
    return this;
  }
  if ( this[22] == a2 )
    goto LABEL_53;
  return this;
}


// ============================================================

// Address: 0x4d1a3e
// Original: _ZN15CLoadedCarGroup12CountMembersEv
// Demangled: CLoadedCarGroup::CountMembers(void)
int __fastcall CLoadedCarGroup::CountMembers(CLoadedCarGroup *this)
{
  int result; // r0
  int v2; // r2

  if ( *(__int16 *)this < 0 )
    return 0;
  if ( *((__int16 *)this + 1) <= -1 )
    return 1;
  if ( *((__int16 *)this + 2) <= -1 )
    return 2;
  if ( *((__int16 *)this + 3) <= -1 )
    return 3;
  if ( *((__int16 *)this + 4) <= -1 )
    return 4;
  if ( *((__int16 *)this + 5) <= -1 )
    return 5;
  if ( *((__int16 *)this + 6) <= -1 )
    return 6;
  if ( *((__int16 *)this + 7) <= -1 )
    return 7;
  if ( *((__int16 *)this + 8) <= -1 )
    return 8;
  if ( *((__int16 *)this + 9) <= -1 )
    return 9;
  if ( *((__int16 *)this + 10) <= -1 )
    return 10;
  if ( *((__int16 *)this + 11) <= -1 )
    return 11;
  if ( *((__int16 *)this + 12) <= -1 )
    return 12;
  if ( *((__int16 *)this + 13) <= -1 )
    return 13;
  if ( *((__int16 *)this + 14) <= -1 )
    return 14;
  if ( *((__int16 *)this + 15) <= -1 )
    return 15;
  if ( *((__int16 *)this + 16) <= -1 )
    return 16;
  if ( *((__int16 *)this + 17) <= -1 )
    return 17;
  if ( *((__int16 *)this + 18) <= -1 )
    return 18;
  if ( *((__int16 *)this + 19) <= -1 )
    return 19;
  if ( *((__int16 *)this + 20) <= -1 )
    return 20;
  if ( *((__int16 *)this + 21) <= -1 )
    return 21;
  v2 = *((__int16 *)this + 22);
  result = 22;
  if ( v2 > -1 )
    return 23;
  return result;
}


// ============================================================

// Address: 0x4d1b58
// Original: _ZN15CLoadedCarGroup16SortBasedOnUsageEv
// Demangled: CLoadedCarGroup::SortBasedOnUsage(void)
int __fastcall CLoadedCarGroup::SortBasedOnUsage(CLoadedCarGroup *this)
{
  int result; // r0
  char *v3; // r12
  int v4; // r8
  int v5; // r2
  int v6; // lr
  bool v7; // zf
  char *v8; // r1
  int v9; // r4
  int v10; // r5

  result = CLoadedCarGroup::CountMembers(this);
  v3 = (char *)this + 2;
  v4 = result - 1;
  v5 = 0;
  v6 = 0;
  do
  {
LABEL_5:
    v8 = &v3[2 * v5];
    while ( v5 < v4 )
    {
      v9 = *(__int16 *)v8;
      ++v5;
      v10 = *((__int16 *)v8 - 1);
      v8 += 2;
      result = *(char *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v10]) + 104);
      if ( result < *(char *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v9]) + 104) )
      {
        result = (unsigned __int16)v9;
        *((_WORD *)v8 - 1) = v10;
        v6 = 1;
        *((_WORD *)v8 - 2) = v9;
        goto LABEL_5;
      }
    }
    v7 = v6 << 24 == 0;
    v5 = 0;
    v6 = 0;
  }
  while ( !v7 );
  return result;
}


// ============================================================

// Address: 0x4d1bd0
// Original: _ZN15CLoadedCarGroup18PickLeastUsedModelEi
// Demangled: CLoadedCarGroup::PickLeastUsedModel(int)
int __fastcall CLoadedCarGroup::PickLeastUsedModel(CLoadedCarGroup *this, int a2)
{
  CLoadedCarGroup *v3; // r5
  int v4; // r0
  int v5; // r12
  int v6; // lr
  int v7; // r6
  float v8; // r3
  int v9; // r4

  v3 = this;
  v4 = CLoadedCarGroup::CountMembers(this);
  if ( v4 >= 1 )
  {
    v5 = -1;
    v6 = 999;
    v7 = 999;
    while ( 1 )
    {
      v8 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)v3];
      v9 = *(__int16 *)(LODWORD(v8) + 30);
      if ( v7 <= v9 )
      {
        if ( v7 != v9 )
          goto LABEL_8;
        LODWORD(v8) = *(char *)(LODWORD(v8) + 104);
        if ( v6 <= SLODWORD(v8) )
          goto LABEL_8;
      }
      else
      {
        LOBYTE(v8) = *(_BYTE *)(LODWORD(v8) + 104);
      }
      v6 = SLOBYTE(v8);
      v5 = *(__int16 *)v3;
      v7 = v9;
LABEL_8:
      v3 = (CLoadedCarGroup *)((char *)v3 + 2);
      if ( !--v4 )
        goto LABEL_11;
    }
  }
  v6 = 999;
  v5 = -1;
LABEL_11:
  if ( v6 > a2 )
    return -1;
  return v5;
}


// ============================================================
