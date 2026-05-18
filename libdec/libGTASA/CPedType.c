
// Address: 0x18aec8
// Original: j__ZN8CPedType4SaveEv
// Demangled: CPedType::Save(void)
// attributes: thunk
int __fastcall CPedType::Save(CPedType *this)
{
  return _ZN8CPedType4SaveEv(this);
}


// ============================================================

// Address: 0x18c730
// Original: j__ZN8CPedType39PoliceDontCareAboutCrimesAgainstPedTypeEi
// Demangled: CPedType::PoliceDontCareAboutCrimesAgainstPedType(int)
// attributes: thunk
int __fastcall CPedType::PoliceDontCareAboutCrimesAgainstPedType(CPedType *this, int a2)
{
  return _ZN8CPedType39PoliceDontCareAboutCrimesAgainstPedTypeEi(this, a2);
}


// ============================================================

// Address: 0x192030
// Original: j__ZN8CPedType11FindPedTypeEPc
// Demangled: CPedType::FindPedType(char *)
// attributes: thunk
int __fastcall CPedType::FindPedType(CPedType *this, char *a2)
{
  return _ZN8CPedType11FindPedTypeEPc(this, a2);
}


// ============================================================

// Address: 0x1945c0
// Original: j__ZN8CPedType24SetPedTypeAsAcquaintanceEiij
// Demangled: CPedType::SetPedTypeAsAcquaintance(int,int,uint)
// attributes: thunk
int __fastcall CPedType::SetPedTypeAsAcquaintance(CPedType *this, int a2, int a3, unsigned int a4)
{
  return _ZN8CPedType24SetPedTypeAsAcquaintanceEiij(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19672c
// Original: j__ZN8CPedType8ShutdownEv
// Demangled: CPedType::Shutdown(void)
// attributes: thunk
int __fastcall CPedType::Shutdown(CPedType *this)
{
  return _ZN8CPedType8ShutdownEv(this);
}


// ============================================================

// Address: 0x19724c
// Original: j__ZN8CPedType25ClearPedTypeAcquaintancesEii
// Demangled: CPedType::ClearPedTypeAcquaintances(int,int)
// attributes: thunk
int __fastcall CPedType::ClearPedTypeAcquaintances(CPedType *this, int a2, int a3)
{
  return _ZN8CPedType25ClearPedTypeAcquaintancesEii(this, a2, a3);
}


// ============================================================

// Address: 0x197e34
// Original: j__ZN8CPedType4LoadEv
// Demangled: CPedType::Load(void)
// attributes: thunk
int __fastcall CPedType::Load(CPedType *this)
{
  return _ZN8CPedType4LoadEv(this);
}


// ============================================================

// Address: 0x197fa8
// Original: j__ZN8CPedType23GetPedTypeAcquaintancesEi
// Demangled: CPedType::GetPedTypeAcquaintances(int)
// attributes: thunk
int __fastcall CPedType::GetPedTypeAcquaintances(CPedType *this, int a2)
{
  return _ZN8CPedType23GetPedTypeAcquaintancesEi(this, a2);
}


// ============================================================

// Address: 0x19852c
// Original: j__ZN8CPedType10InitialiseEv
// Demangled: CPedType::Initialise(void)
// attributes: thunk
int __fastcall CPedType::Initialise(CPedType *this)
{
  return _ZN8CPedType10InitialiseEv(this);
}


// ============================================================

// Address: 0x1990fc
// Original: j__ZN8CPedType26ClearPedTypeAsAcquaintanceEiij
// Demangled: CPedType::ClearPedTypeAsAcquaintance(int,int,uint)
// attributes: thunk
int __fastcall CPedType::ClearPedTypeAsAcquaintance(CPedType *this, int a2, int a3, unsigned int a4)
{
  return _ZN8CPedType26ClearPedTypeAsAcquaintanceEiij(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19d560
// Original: j__ZN8CPedType23GetPedTypeAcquaintancesEii
// Demangled: CPedType::GetPedTypeAcquaintances(int,int)
// attributes: thunk
int __fastcall CPedType::GetPedTypeAcquaintances(CPedType *this, int a2, int a3)
{
  return _ZN8CPedType23GetPedTypeAcquaintancesEii(this, a2, a3);
}


// ============================================================

// Address: 0x1a1410
// Original: j__ZN8CPedType10GetPedFlagEi
// Demangled: CPedType::GetPedFlag(int)
// attributes: thunk
int __fastcall CPedType::GetPedFlag(CPedType *this, int a2)
{
  return _ZN8CPedType10GetPedFlagEi(this, a2);
}


// ============================================================

// Address: 0x48e168
// Original: _ZN8CPedType4SaveEv
// Demangled: CPedType::Save(void)
int __fastcall CPedType::Save(CPedType *this)
{
  int i; // r6
  int Acquaintances; // r4
  CGenericGameStorage *v3; // r5
  int v4; // r2
  int v5; // r4
  CGenericGameStorage *v6; // r5
  int v7; // r2
  int v8; // r4
  CGenericGameStorage *v9; // r5
  int v10; // r2
  int v11; // r4
  CGenericGameStorage *v12; // r5
  int v13; // r2
  int v14; // r4
  CGenericGameStorage *v15; // r5
  int v16; // r2

  for ( i = 0; i != 640; i += 20 )
  {
    Acquaintances = CAcquaintance::GetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 0);
    v3 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v3 = Acquaintances;
    CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
    free(v3);
    v5 = CAcquaintance::GetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 1);
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    v8 = CAcquaintance::GetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 2);
    v9 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v9 = v8;
    CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
    free(v9);
    v11 = CAcquaintance::GetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 3);
    v12 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v12 = v11;
    CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
    free(v12);
    v14 = CAcquaintance::GetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 4);
    v15 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v15 = v14;
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
    free(v15);
  }
  return 1;
}


// ============================================================

// Address: 0x48e244
// Original: _ZN8CPedType4LoadEv
// Demangled: CPedType::Load(void)
int __fastcall CPedType::Load(CPedType *this, int a2, int a3)
{
  int i; // r5
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2
  unsigned int v9[5]; // [sp+4h] [bp-14h] BYREF

  for ( i = 0; i != 640; i += 20 )
  {
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, byte_4, a3);
    CAcquaintance::SetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 0, v9[0]);
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, byte_4, v4);
    CAcquaintance::SetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 1, v9[0]);
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, byte_4, v5);
    CAcquaintance::SetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 2, v9[0]);
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, byte_4, v6);
    CAcquaintance::SetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 3, v9[0]);
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, byte_4, v7);
    CAcquaintance::SetAcquaintances((CAcquaintance *)(CPedType::ms_apPedTypes + i), 4, v9[0]);
  }
  return 1;
}


// ============================================================

// Address: 0x4c2f08
// Original: _ZN8CPedType10InitialiseEv
// Demangled: CPedType::Initialise(void)
int __fastcall CPedType::Initialise(CPedType *this)
{
  _DWORD *v1; // r0
  CPedType *v2; // r0

  v1 = (_DWORD *)operator new[](0x288u);
  *v1 = 20;
  v1[1] = 32;
  CPedType::ms_apPedTypes = (int)(v1 + 2);
  memset(v1 + 2, 0, 0x280u);
  return CPedType::LoadPedData(v2);
}


// ============================================================

// Address: 0x4c2f38
// Original: _ZN8CPedType11LoadPedDataEv
// Demangled: CPedType::LoadPedData(void)
int __fastcall CPedType::LoadPedData(CPedType *this, int a2, const char *a3)
{
  CFileLoader *v3; // r4
  unsigned int v4; // r1
  unsigned int v5; // r1
  char *Line; // r9
  int v7; // r6
  int v8; // r0
  bool v9; // zf
  bool v10; // cc
  int v11; // r4
  char *v12; // r6
  int v13; // r5
  int v14; // r4
  char *v15; // r6
  int v16; // r5
  int v17; // r4
  char *v18; // r6
  int v19; // r5
  int v20; // r4
  char *v21; // r6
  int v22; // r5
  CFileLoader *v24; // [sp+14h] [bp-4Ch]
  int v25; // [sp+18h] [bp-48h]
  int v26; // [sp+18h] [bp-48h]
  int v27; // [sp+18h] [bp-48h]
  int v28; // [sp+18h] [bp-48h]
  char v29[32]; // [sp+20h] [bp-40h] BYREF
  int v30; // [sp+40h] [bp-20h]

  v3 = (CFileLoader *)CFileMgr::OpenFile((CFileMgr *)"DATA\\PED.DAT", "r", a3);
  Line = (char *)CFileLoader::LoadLine(v3, v4);
  if ( Line )
  {
    v7 = 32;
    v24 = v3;
    do
    {
      v8 = (unsigned __int8)*Line;
      v9 = v8 == 0;
      if ( *Line )
        v9 = v8 == 35;
      if ( !v9 )
      {
        sscanf(Line, "%s", v29);
        if ( !strcmp(v29, "Hate") )
        {
          v25 = v7;
          strtok(Line, (const char *)&dword_4C32D0);
          v11 = 0;
          v12 = strtok(0, (const char *)&dword_4C32D0);
          if ( v12 )
          {
            v11 = 0;
            do
            {
              v13 = 0;
              while ( strcmp(v12, aPedTypeNames[v13]) )
              {
                v10 = v13++ < 31;
                if ( !v10 )
                {
                  if ( !strcmp(v12, "PLAYER_NETWORK") )
                  {
                    v13 = 2;
                  }
                  else
                  {
                    v13 = 32;
                    if ( !strcmp(v12, "PLAYER_UNUSED") )
                      v13 = 3;
                  }
                  break;
                }
              }
              if ( v13 < 32 )
                v11 |= 1 << v13;
              v12 = strtok(0, (const char *)&dword_4C32D0);
            }
            while ( v12 );
          }
          v7 = v25;
          v5 = 5 * v25;
          *(_DWORD *)(CPedType::ms_apPedTypes + 20 * v25 + 16) = v11;
        }
        else if ( !strcmp(v29, "Dislike") )
        {
          v26 = v7;
          strtok(Line, (const char *)&dword_4C32D0);
          v14 = 0;
          v15 = strtok(0, (const char *)&dword_4C32D0);
          if ( v15 )
          {
            v14 = 0;
            do
            {
              v16 = 0;
              while ( strcmp(v15, aPedTypeNames[v16]) )
              {
                v10 = v16++ < 31;
                if ( !v10 )
                {
                  if ( !strcmp(v15, "PLAYER_NETWORK") )
                  {
                    v16 = 2;
                  }
                  else
                  {
                    v16 = 32;
                    if ( !strcmp(v15, "PLAYER_UNUSED") )
                      v16 = 3;
                  }
                  break;
                }
              }
              if ( v16 < 32 )
                v14 |= 1 << v16;
              v15 = strtok(0, (const char *)&dword_4C32D0);
            }
            while ( v15 );
          }
          v7 = v26;
          v5 = 5 * v26;
          *(_DWORD *)(CPedType::ms_apPedTypes + 20 * v26 + 12) = v14;
        }
        else if ( !strcmp(v29, "Like") )
        {
          v27 = v7;
          strtok(Line, (const char *)&dword_4C32D0);
          v17 = 0;
          v18 = strtok(0, (const char *)&dword_4C32D0);
          if ( v18 )
          {
            v17 = 0;
            do
            {
              v19 = 0;
              while ( strcmp(v18, aPedTypeNames[v19]) )
              {
                v10 = v19++ < 31;
                if ( !v10 )
                {
                  if ( !strcmp(v18, "PLAYER_NETWORK") )
                  {
                    v19 = 2;
                  }
                  else
                  {
                    v19 = 32;
                    if ( !strcmp(v18, "PLAYER_UNUSED") )
                      v19 = 3;
                  }
                  break;
                }
              }
              if ( v19 < 32 )
                v17 |= 1 << v19;
              v18 = strtok(0, (const char *)&dword_4C32D0);
            }
            while ( v18 );
          }
          v7 = v27;
          v5 = 5 * v27;
          *(_DWORD *)(CPedType::ms_apPedTypes + 20 * v27 + 4) = v17;
        }
        else
        {
          if ( strcmp(v29, "Respect") )
          {
            v7 = 0;
            while ( strcmp(v29, aPedTypeNames[v7]) )
            {
              v10 = v7++ < 31;
              if ( !v10 )
              {
                if ( !strcmp(v29, "PLAYER_NETWORK") )
                {
                  v7 = 2;
                }
                else
                {
                  v7 = 32;
                  if ( !strcmp(v29, "PLAYER_UNUSED") )
                    v7 = 3;
                }
                goto LABEL_76;
              }
            }
            goto LABEL_76;
          }
          v28 = v7;
          strtok(Line, (const char *)&dword_4C32D0);
          v20 = 0;
          v21 = strtok(0, (const char *)&dword_4C32D0);
          if ( v21 )
          {
            v20 = 0;
            do
            {
              v22 = 0;
              while ( strcmp(v21, aPedTypeNames[v22]) )
              {
                v10 = v22++ < 31;
                if ( !v10 )
                {
                  if ( !strcmp(v21, "PLAYER_NETWORK") )
                  {
                    v22 = 2;
                  }
                  else
                  {
                    v22 = 32;
                    if ( !strcmp(v21, "PLAYER_UNUSED") )
                      v22 = 3;
                  }
                  break;
                }
              }
              if ( v22 < 32 )
                v20 |= 1 << v22;
              v21 = strtok(0, (const char *)&dword_4C32D0);
            }
            while ( v21 );
          }
          v7 = v28;
          v5 = 5 * v28;
          *(_DWORD *)(CPedType::ms_apPedTypes + 20 * v28) = v20;
        }
        v3 = v24;
      }
LABEL_76:
      Line = (char *)CFileLoader::LoadLine(v3, v5);
    }
    while ( Line );
  }
  CFileMgr::CloseFile(v3, v5);
  return _stack_chk_guard - v30;
}


// ============================================================

// Address: 0x4c3320
// Original: _ZN8CPedType8ShutdownEv
// Demangled: CPedType::Shutdown(void)
void __fastcall CPedType::Shutdown(CPedType *this)
{
  if ( CPedType::ms_apPedTypes )
    sub_18E920((void *)(CPedType::ms_apPedTypes - 8));
}


// ============================================================

// Address: 0x4c3340
// Original: _ZN8CPedType11FindPedTypeEPc
// Demangled: CPedType::FindPedType(char *)
int __fastcall CPedType::FindPedType(CPedType *this, char *a2)
{
  int v3; // r5

  v3 = 0;
  while ( strcmp((const char *)this, aPedTypeNames[v3]) )
  {
    if ( v3++ >= 31 )
    {
      if ( !strcmp((const char *)this, "PLAYER_NETWORK") )
        return 2;
      v3 = 32;
      if ( !strcmp((const char *)this, "PLAYER_UNUSED") )
        return 3;
      return v3;
    }
  }
  return v3;
}


// ============================================================

// Address: 0x4c339c
// Original: _ZN8CPedType10GetPedFlagEi
// Demangled: CPedType::GetPedFlag(int)
int __fastcall CPedType::GetPedFlag(CPedType *this, int a2)
{
  int v2; // r1

  v2 = 0;
  if ( (int)this < 32 )
    return 1 << (char)this;
  return v2;
}


// ============================================================

// Address: 0x4c34e0
// Original: _ZN8CPedType23GetPedTypeAcquaintancesEi
// Demangled: CPedType::GetPedTypeAcquaintances(int)
int __fastcall CPedType::GetPedTypeAcquaintances(CPedType *this, int a2)
{
  return CPedType::ms_apPedTypes + 20 * (_DWORD)this;
}


// ============================================================

// Address: 0x4c34f8
// Original: _ZN8CPedType23GetPedTypeAcquaintancesEii
// Demangled: CPedType::GetPedTypeAcquaintances(int,int)
int __fastcall CPedType::GetPedTypeAcquaintances(CPedType *this, int a2, int a3)
{
  return *(_DWORD *)(CPedType::ms_apPedTypes + 20 * a2 + 4 * (_DWORD)this);
}


// ============================================================

// Address: 0x4c3514
// Original: _ZN8CPedType24SetPedTypeAsAcquaintanceEiij
// Demangled: CPedType::SetPedTypeAsAcquaintance(int,int,uint)
int __fastcall CPedType::SetPedTypeAsAcquaintance(int this, int a2, int a3, unsigned int a4)
{
  int v4; // r1
  int v5; // r4
  int *v6; // lr
  int v7; // r3
  int v8; // r12
  int v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int *v13; // lr
  int v14; // t1

  v4 = 5 * a2;
  v5 = CPedType::ms_apPedTypes;
  v6 = (int *)(CPedType::ms_apPedTypes + 4 * v4);
  v7 = v6[this];
  if ( (v7 & a3) == 0 )
  {
    v6[this] = v7 | a3;
    v8 = ~a3;
    if ( this )
    {
      v9 = *(_DWORD *)(v5 + 4 * v4);
      if ( (v9 & a3) != 0 )
        *v6 = v9 & v8;
      if ( this == 1 )
        goto LABEL_11;
    }
    v10 = v6[1];
    if ( (v10 & a3) != 0 )
      v6[1] = v10 & v8;
    if ( this != 2 )
    {
LABEL_11:
      v11 = v6[2];
      if ( (v11 & a3) != 0 )
        v6[2] = v11 & v8;
      if ( this == 3 )
        goto LABEL_15;
    }
    v12 = v6[3];
    if ( (v12 & a3) != 0 )
      v6[3] = v12 & v8;
    if ( this != 4 )
    {
LABEL_15:
      v14 = v6[4];
      v13 = v6 + 4;
      this = v14;
      if ( (v14 & a3) != 0 )
      {
        this &= v8;
        *v13 = this;
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x4c35ac
// Original: _ZN8CPedType26ClearPedTypeAsAcquaintanceEiij
// Demangled: CPedType::ClearPedTypeAsAcquaintance(int,int,uint)
int *__fastcall CPedType::ClearPedTypeAsAcquaintance(int *this, int a2, int a3, unsigned int a4)
{
  int v4; // r3
  int v5; // r1

  v4 = CPedType::ms_apPedTypes + 20 * a2;
  v5 = *(_DWORD *)(v4 + 4 * (_DWORD)this);
  if ( (v5 & a3) != 0 )
  {
    this = (int *)(v4 + 4 * (_DWORD)this);
    *this = v5 & ~a3;
  }
  return this;
}


// ============================================================

// Address: 0x4c35d4
// Original: _ZN8CPedType25ClearPedTypeAcquaintancesEii
// Demangled: CPedType::ClearPedTypeAcquaintances(int,int)
int __fastcall CPedType::ClearPedTypeAcquaintances(int this, int a2, int a3)
{
  *(_DWORD *)(CPedType::ms_apPedTypes + 20 * a2 + 4 * this) = 0;
  return this;
}


// ============================================================

// Address: 0x4c35f0
// Original: _ZN8CPedType39PoliceDontCareAboutCrimesAgainstPedTypeEi
// Demangled: CPedType::PoliceDontCareAboutCrimesAgainstPedType(int)
bool __fastcall CPedType::PoliceDontCareAboutCrimesAgainstPedType(CPedType *this, int a2)
{
  return this == (CPedType *)&dword_14 || (unsigned int)this - 7 < 0xB;
}


// ============================================================
