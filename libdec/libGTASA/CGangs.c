
// Address: 0x18ddfc
// Original: j__ZN6CGangs4SaveEv
// Demangled: CGangs::Save(void)
// attributes: thunk
int __fastcall CGangs::Save(CGangs *this)
{
  return _ZN6CGangs4SaveEv(this);
}


// ============================================================

// Address: 0x19801c
// Original: j__ZN6CGangs18ChooseGangPedModelEs
// Demangled: CGangs::ChooseGangPedModel(short)
// attributes: thunk
int __fastcall CGangs::ChooseGangPedModel(CGangs *this, __int16 a2)
{
  return _ZN6CGangs18ChooseGangPedModelEs(this, a2);
}


// ============================================================

// Address: 0x198850
// Original: j__ZN6CGangs10InitialiseEv
// Demangled: CGangs::Initialise(void)
// attributes: thunk
int __fastcall CGangs::Initialise(CGangs *this)
{
  return _ZN6CGangs10InitialiseEv(this);
}


// ============================================================

// Address: 0x19abc8
// Original: j__ZN6CGangs14SetGangWeaponsEsiii
// Demangled: CGangs::SetGangWeapons(short,int,int,int)
// attributes: thunk
int __fastcall CGangs::SetGangWeapons(CGangs *this, __int16 a2, int a3, int a4, int a5)
{
  return _ZN6CGangs14SetGangWeaponsEsiii(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19c238
// Original: j__ZN6CGangs4LoadEv
// Demangled: CGangs::Load(void)
// attributes: thunk
int __fastcall CGangs::Load(CGangs *this)
{
  return _ZN6CGangs4LoadEv(this);
}


// ============================================================

// Address: 0x48db9c
// Original: _ZN6CGangs4SaveEv
// Demangled: CGangs::Save(void)
int __fastcall CGangs::Save(CGangs *this)
{
  CGenericGameStorage *v1; // r4
  __int64 v2; // d17
  int v3; // r2
  _QWORD *v4; // r0
  __int64 v5; // d17
  void *v6; // r4
  int v7; // r2
  CGenericGameStorage *v8; // r4
  __int64 v9; // d17
  int v10; // r2
  CGenericGameStorage *v11; // r4
  __int64 v12; // d17
  int v13; // r2
  CGenericGameStorage *v14; // r4
  __int64 v15; // d17
  int v16; // r2
  CGenericGameStorage *v17; // r4
  __int64 v18; // d17
  int v19; // r2
  CGenericGameStorage *v20; // r4
  __int64 v21; // d17
  int v22; // r2
  CGenericGameStorage *v23; // r4
  __int64 v24; // d17
  int v25; // r2
  CGenericGameStorage *v26; // r4
  __int64 v27; // d17
  int v28; // r2
  CGenericGameStorage *v29; // r4
  __int64 v30; // d17
  int v31; // r2

  v1 = (CGenericGameStorage *)malloc(0x10u);
  v2 = unk_9ECE3C;
  *(_QWORD *)v1 = *(_QWORD *)CGangs::Gang;
  *((_QWORD *)v1 + 1) = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v1, &word_10, v3);
  free(v1);
  v4 = malloc(0x10u);
  v5 = unk_9ECE4C;
  v6 = v4;
  *v4 = *(_QWORD *)&byte_9ECE44;
  v4[1] = v5;
  CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v4, &word_10, v7);
  free(v6);
  v8 = (CGenericGameStorage *)malloc(0x10u);
  v9 = unk_9ECE5C;
  *(_QWORD *)v8 = *(_QWORD *)&byte_9ECE54;
  *((_QWORD *)v8 + 1) = v9;
  CGenericGameStorage::_SaveDataToWorkBuffer(v8, &word_10, v10);
  free(v8);
  v11 = (CGenericGameStorage *)malloc(0x10u);
  v12 = unk_9ECE6C;
  *(_QWORD *)v11 = *(_QWORD *)&byte_9ECE64;
  *((_QWORD *)v11 + 1) = v12;
  CGenericGameStorage::_SaveDataToWorkBuffer(v11, &word_10, v13);
  free(v11);
  v14 = (CGenericGameStorage *)malloc(0x10u);
  v15 = unk_9ECE7C;
  *(_QWORD *)v14 = *(_QWORD *)&byte_9ECE74;
  *((_QWORD *)v14 + 1) = v15;
  CGenericGameStorage::_SaveDataToWorkBuffer(v14, &word_10, v16);
  free(v14);
  v17 = (CGenericGameStorage *)malloc(0x10u);
  v18 = unk_9ECE8C;
  *(_QWORD *)v17 = *(_QWORD *)&byte_9ECE84;
  *((_QWORD *)v17 + 1) = v18;
  CGenericGameStorage::_SaveDataToWorkBuffer(v17, &word_10, v19);
  free(v17);
  v20 = (CGenericGameStorage *)malloc(0x10u);
  v21 = unk_9ECE9C;
  *(_QWORD *)v20 = *(_QWORD *)&byte_9ECE94;
  *((_QWORD *)v20 + 1) = v21;
  CGenericGameStorage::_SaveDataToWorkBuffer(v20, &word_10, v22);
  free(v20);
  v23 = (CGenericGameStorage *)malloc(0x10u);
  v24 = unk_9ECEAC;
  *(_QWORD *)v23 = *(_QWORD *)&byte_9ECEA4;
  *((_QWORD *)v23 + 1) = v24;
  CGenericGameStorage::_SaveDataToWorkBuffer(v23, &word_10, v25);
  free(v23);
  v26 = (CGenericGameStorage *)malloc(0x10u);
  v27 = unk_9ECEBC;
  *(_QWORD *)v26 = *(_QWORD *)&byte_9ECEB4;
  *((_QWORD *)v26 + 1) = v27;
  CGenericGameStorage::_SaveDataToWorkBuffer(v26, &word_10, v28);
  free(v26);
  v29 = (CGenericGameStorage *)malloc(0x10u);
  v30 = unk_9ECECC;
  *(_QWORD *)v29 = *(_QWORD *)&byte_9ECEC4;
  *((_QWORD *)v29 + 1) = v30;
  CGenericGameStorage::_SaveDataToWorkBuffer(v29, &word_10, v31);
  free(v29);
  return 1;
}


// ============================================================

// Address: 0x48dd04
// Original: _ZN6CGangs4LoadEv
// Demangled: CGangs::Load(void)
int __fastcall CGangs::Load(CGangs *this, int a2, int a3)
{
  int v3; // r2
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2

  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)CGangs::Gang, &word_10, a3);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&byte_9ECE44, &word_10, v3);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&byte_9ECE54, &word_10, v4);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&byte_9ECE64, &word_10, v5);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&byte_9ECE74, &word_10, v6);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&byte_9ECE84, &word_10, v7);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&byte_9ECE94, &word_10, v8);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&byte_9ECEA4, &word_10, v9);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&byte_9ECEB4, &word_10, v10);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&byte_9ECEC4, &word_10, v11);
  return 1;
}


// ============================================================

// Address: 0x49ee50
// Original: _ZN6CGangs27SetWillAttackPlayerWithCopsE8ePedTypeb
// Demangled: CGangs::SetWillAttackPlayerWithCops(ePedType,bool)
unsigned int __fastcall CGangs::SetWillAttackPlayerWithCops(int a1, char a2)
{
  unsigned int result; // r0

  result = a1 - 7;
  if ( result <= 9 )
    CGangs::GangAttackWithCops[result] = a2;
  return result;
}


// ============================================================

// Address: 0x49ee68
// Original: _ZN6CGangs27GetWillAttackPlayerWithCopsE8ePedType
// Demangled: CGangs::GetWillAttackPlayerWithCops(ePedType)
bool __fastcall CGangs::GetWillAttackPlayerWithCops(int a1)
{
  unsigned int v1; // r0

  v1 = a1 - 7;
  return v1 <= 9 && CGangs::GangAttackWithCops[v1] != 0;
}


// ============================================================

// Address: 0x49ee98
// Original: _ZN6CGangs10InitialiseEv
// Demangled: CGangs::Initialise(void)
char *__fastcall CGangs::Initialise(CGangs *this)
{
  char *result; // r0

  result = CGangs::Gang;
  dword_9ECE38 = 22;
  unk_9ECE3C = 28;
  dword_9ECE40 = 0;
  *(_QWORD *)&dword_9ECE48 = 22LL;
  dword_9ECE50 = 0;
  *(_QWORD *)&dword_9ECE58 = 22LL;
  dword_9ECE60 = 0;
  dword_9ECE78 = 22;
  unk_9ECE7C = 28;
  dword_9ECE80 = 0;
  dword_9ECE88 = 24;
  unk_9ECE8C = 0;
  dword_9ECE90 = 0;
  dword_9ECE98 = 22;
  unk_9ECE9C = 30;
  dword_9ECEA0 = 0;
  dword_9ECEA8 = 22;
  unk_9ECEAC = 28;
  dword_9ECEB0 = 0;
  return result;
}


// ============================================================

// Address: 0x49eedc
// Original: _ZN6CGangs14SetGangWeaponsEsiii
// Demangled: CGangs::SetGangWeapons(short,int,int,int)
char *__fastcall CGangs::SetGangWeapons(char *this, int a2, int a3, int a4, int a5)
{
  if ( a2 >= 0 )
    *(_DWORD *)&CGangs::Gang[16 * (_DWORD)this + 4] = a2;
  if ( a3 >= 0 )
    *(_DWORD *)&CGangs::Gang[16 * (_DWORD)this + 8] = a3;
  if ( a4 >= 0 )
  {
    this = &CGangs::Gang[16 * (_DWORD)this];
    *((_DWORD *)this + 3) = a4;
  }
  return this;
}


// ============================================================

// Address: 0x49ef24
// Original: _ZN6CGangs23SetGangPedModelOverrideEsa
// Demangled: CGangs::SetGangPedModelOverride(short,signed char)
int __fastcall CGangs::SetGangPedModelOverride(CGangs *this, __int16 a2, signed __int8 a3)
{
  int result; // r0

  result = 16 * (_DWORD)this;
  CGangs::Gang[result] = a2;
  return result;
}


// ============================================================

// Address: 0x49ef34
// Original: _ZN6CGangs18ChooseGangPedModelEs
// Demangled: CGangs::ChooseGangPedModel(short)
int __fastcall CGangs::ChooseGangPedModel(CGangs *this, __int16 a2)
{
  int v2; // r2
  char *v3; // r0
  int result; // r0
  int v5; // r9
  CCarCtrl *v6; // r4
  int v7; // r1

  v2 = 16 * (_DWORD)this;
  v3 = (char *)this + 18;
  if ( (unsigned __int8)CGangs::Gang[v2] != 255 )
    return CPopulation::m_PedGroups[21 * CPopulation::m_TranslationArray[3 * (_DWORD)v3 + CPopulation::CurrentWorldZone]];
  v5 = 3 * (_DWORD)v3;
  CCarCtrl::InitSequence(
    (CCarCtrl *)CPopulation::m_nNumPedsInGroup[CPopulation::m_TranslationArray[3 * (_DWORD)v3]],
    (int)&CPopulation::m_TranslationArray);
  if ( CPopulation::m_nNumPedsInGroup[CPopulation::m_TranslationArray[v5]] < 1 )
    return -1;
  v6 = 0;
  v7 = (int)&CPopulation::m_TranslationArray;
  while ( 1 )
  {
    result = CPopulation::m_PedGroups[21 * CPopulation::m_TranslationArray[v5 + CPopulation::CurrentWorldZone]
                                    + CCarCtrl::FindSequenceElement(v6, v7)];
    v7 = LOBYTE(CStreaming::ms_aInfoForModel[10 * result + 8]);
    if ( v7 == 1 )
      break;
    v6 = (CCarCtrl *)((char *)v6 + 1);
    if ( (int)v6 >= CPopulation::m_nNumPedsInGroup[CPopulation::m_TranslationArray[v5]] )
      return -1;
  }
  return result;
}


// ============================================================
