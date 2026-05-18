
// Address: 0x18a9d0
// Original: j__ZN17CTheCarGenerators4LoadEv
// Demangled: CTheCarGenerators::Load(void)
// attributes: thunk
int __fastcall CTheCarGenerators::Load(CTheCarGenerators *this)
{
  return _ZN17CTheCarGenerators4LoadEv(this);
}


// ============================================================

// Address: 0x18b54c
// Original: j__ZN17CTheCarGenerators4SaveEv
// Demangled: CTheCarGenerators::Save(void)
// attributes: thunk
int __fastcall CTheCarGenerators::Save(CTheCarGenerators *this)
{
  return _ZN17CTheCarGenerators4SaveEv(this);
}


// ============================================================

// Address: 0x18e184
// Original: j__ZN17CTheCarGenerators4InitEv
// Demangled: CTheCarGenerators::Init(void)
// attributes: thunk
int __fastcall CTheCarGenerators::Init(CTheCarGenerators *this)
{
  return _ZN17CTheCarGenerators4InitEv(this);
}


// ============================================================

// Address: 0x18e780
// Original: j__ZN17CTheCarGenerators7ProcessEv
// Demangled: CTheCarGenerators::Process(void)
// attributes: thunk
int __fastcall CTheCarGenerators::Process(CTheCarGenerators *this)
{
  return _ZN17CTheCarGenerators7ProcessEv(this);
}


// ============================================================

// Address: 0x196dc8
// Original: j__ZN17CTheCarGenerators18CreateCarGeneratorEffffisshhhtthh
// Demangled: CTheCarGenerators::CreateCarGenerator(float,float,float,float,int,short,short,uchar,uchar,uchar,ushort,ushort,uchar,uchar)
// attributes: thunk
int __fastcall CTheCarGenerators::CreateCarGenerator(
        CTheCarGenerators *this,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        __int16 a7,
        __int16 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int16 a12,
        unsigned __int16 a13,
        unsigned __int8 a14,
        unsigned __int8 a15)
{
  return _ZN17CTheCarGenerators18CreateCarGeneratorEffffisshhhtthh(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15);
}


// ============================================================

// Address: 0x19dcc8
// Original: j__ZN17CTheCarGenerators19RemoveCarGeneratorsEh
// Demangled: CTheCarGenerators::RemoveCarGenerators(uchar)
// attributes: thunk
int __fastcall CTheCarGenerators::RemoveCarGenerators(CTheCarGenerators *this, unsigned __int8 a2)
{
  return _ZN17CTheCarGenerators19RemoveCarGeneratorsEh(this, a2);
}


// ============================================================

// Address: 0x48d934
// Original: _ZN17CTheCarGenerators4SaveEv
// Demangled: CTheCarGenerators::Save(void)
int __fastcall CTheCarGenerators::Save(CTheCarGenerators *this)
{
  int v1; // r0
  int v2; // r5
  CGenericGameStorage *v3; // r4
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r6
  __int16 *v8; // r5
  CGenericGameStorage *v9; // r4
  int v10; // r2
  CGenericGameStorage *v11; // r4
  __int64 v12; // d17
  __int64 v13; // d18
  __int64 v14; // d19
  int v15; // r2
  CGenericGameStorage *v16; // r4
  int v17; // r2
  int i; // r5
  _QWORD *v19; // r0
  __int64 v20; // d17
  void *v21; // r4
  int v22; // r2

  v1 = 0;
  v2 = 0;
  do
  {
    if ( !LOBYTE(CTheCarGenerators::CarGeneratorArray[v1 + 14]) && HIBYTE(CTheCarGenerators::CarGeneratorArray[v1 + 14]) )
      ++v2;
    v1 += 16;
  }
  while ( v1 != 8000 );
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  CGenericGameStorage::_SaveDataToWorkBuffer(
    (CGenericGameStorage *)&CTheCarGenerators::ProcessCounter,
    (char *)&stderr + 1,
    v5);
  CGenericGameStorage::_SaveDataToWorkBuffer(
    (CGenericGameStorage *)&CTheCarGenerators::GenerateEvenIfPlayerIsCloseCounter,
    (char *)&stderr + 1,
    v6);
  v7 = 0;
  v8 = CTheCarGenerators::CarGeneratorArray;
  do
  {
    if ( !*((_BYTE *)v8 + 28) && *((_BYTE *)v8 + 29) )
    {
      v9 = (CGenericGameStorage *)malloc(2u);
      *(_WORD *)v9 = v7;
      CGenericGameStorage::_SaveDataToWorkBuffer(v9, (char *)&stderr + 2, v10);
      free(v9);
      v11 = (CGenericGameStorage *)malloc(0x20u);
      v12 = *((_QWORD *)v8 + 1);
      v13 = *((_QWORD *)v8 + 2);
      v14 = *((_QWORD *)v8 + 3);
      *(_QWORD *)v11 = *(_QWORD *)v8;
      *((_QWORD *)v11 + 1) = v12;
      *((_QWORD *)v11 + 2) = v13;
      *((_QWORD *)v11 + 3) = v14;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, &dword_20, v15);
      free(v11);
    }
    ++v7;
    v8 += 16;
  }
  while ( v7 != 500 );
  v16 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v16 = dword_A065B8;
  CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
  free(v16);
  for ( i = 0; i != 60; i += 4 )
  {
    v19 = malloc(0x10u);
    v20 = *(_QWORD *)&CTheCarGenerators::m_SpecialPlateHandler[i + 2];
    v21 = v19;
    *v19 = *(_QWORD *)&CTheCarGenerators::m_SpecialPlateHandler[i];
    v19[1] = v20;
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v19, &word_10, v22);
    free(v21);
  }
  return 1;
}


// ============================================================

// Address: 0x48da64
// Original: _ZN17CTheCarGenerators4LoadEv
// Demangled: CTheCarGenerators::Load(void)
int __fastcall CTheCarGenerators::Load(CTheCarGenerators *this)
{
  int v1; // r2
  int v2; // r2
  int v3; // r2
  int v4; // r2
  int v5; // r5
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r2
  int v20; // r2
  _WORD v22[9]; // [sp+6h] [bp-12h] BYREF

  CTheCarGenerators::Init(this);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CTheCarGenerators::NumOfCarGenerators,
    byte_4,
    v1);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CTheCarGenerators::ProcessCounter,
    (char *)&stderr + 1,
    v2);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CTheCarGenerators::GenerateEvenIfPlayerIsCloseCounter,
    (char *)&stderr + 1,
    v3);
  if ( CTheCarGenerators::NumOfCarGenerators >= 1 )
  {
    v5 = 0;
    do
    {
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, (char *)&stderr + 2, v4);
      if ( v22[0] >> 2 <= 0x7Cu )
        CGenericGameStorage::_LoadDataFromWorkBuffer(
          (CGenericGameStorage *)&CTheCarGenerators::CarGeneratorArray[16 * v22[0]],
          &dword_20,
          v4);
      ++v5;
    }
    while ( CTheCarGenerators::NumOfCarGenerators > (unsigned __int16)v5 );
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A065B8, byte_4, v4);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)CTheCarGenerators::m_SpecialPlateHandler,
    &word_10,
    v6);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A064D8, &word_10, v7);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A064E8, &word_10, v8);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A064F8, &word_10, v9);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06508, &word_10, v10);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06518, &word_10, v11);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06528, &word_10, v12);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06538, &word_10, v13);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06548, &word_10, v14);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06558, &word_10, v15);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06568, &word_10, v16);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06578, &word_10, v17);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06588, &word_10, v18);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A06598, &word_10, v19);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&dword_A065A8, &word_10, v20);
  return 1;
}


// ============================================================

// Address: 0x56e350
// Original: _ZN17CTheCarGenerators7ProcessEv
// Demangled: CTheCarGenerators::Process(void)
int __fastcall CTheCarGenerators::Process(CTheCarGenerators *this)
{
  return 0;
}


// ============================================================

// Address: 0x56e3d4
// Original: _ZN17CTheCarGenerators18CreateCarGeneratorEffffisshhhtthh
// Demangled: CTheCarGenerators::CreateCarGenerator(float,float,float,float,int,short,short,uchar,uchar,uchar,ushort,ushort,uchar,uchar)
int __fastcall CTheCarGenerators::CreateCarGenerator(
        CTheCarGenerators *this,
        float a2,
        float a3,
        float a4,
        float a5,
        char a6,
        __int16 a7,
        __int16 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        __int16 a11,
        unsigned __int16 a12,
        unsigned __int16 a13,
        unsigned __int8 a14,
        unsigned __int8 a15)
{
  char v15; // cc
  float v17; // s0
  __int16 *v19; // r1
  int result; // r0
  float i; // s0
  char v22; // r2
  int v23; // r6

  v15 = (LODWORD(a5) != -1) & __CFADD__(LODWORD(a5), 1);
  if ( a5 != NAN )
    v15 = (unsigned int)(LODWORD(a5) - 400) > 0xE6;
  if ( v15 )
    return -1;
  v17 = a4;
  v19 = CTheCarGenerators::CarGeneratorArray;
  result = 0;
  while ( *((_BYTE *)v19 + 29) )
  {
    v19 += 16;
    v15 = result++ <= 498;
    if ( !v15 )
      return -1;
  }
  v19[3] = (int)(float)(a2 * 8.0);
  v19[2] = (int)(float)(*(float *)&this * 8.0);
  v19[4] = (int)(float)(a3 * 8.0);
  if ( a4 < 0.0 )
  {
    do
      v17 = v17 + 360.0;
    while ( v17 < 0.0 );
  }
  for ( ; v17 >= 360.0; v17 = v17 + -360.0 )
    ;
  for ( i = v17 * 0.017453; i < 0.0; i = i + 6.2832 )
    ;
  *((_BYTE *)v19 + 11) = a9;
  *v19 = LOWORD(a5);
  *((_BYTE *)v19 + 2) = a6;
  *((_BYTE *)v19 + 3) = a7;
  *((_BYTE *)v19 + 12) = a10;
  v19[7] = a11;
  v22 = *((_BYTE *)v19 + 13);
  v19[8] = a12;
  v19[12] = -1;
  v23 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)v19 + 10) = (unsigned int)(float)(i * 40.744);
  v19[13] = 0;
  *((_BYTE *)v19 + 28) = a13;
  *((_BYTE *)v19 + 29) = 1;
  *((_BYTE *)v19 + 13) = v22 & 0xE4 | (2 * a8) & 2 | (16 * (a14 & 1));
  *((_DWORD *)v19 + 5) = v23 + 1;
  ++CTheCarGenerators::NumOfCarGenerators;
  return result;
}


// ============================================================

// Address: 0x56e548
// Original: _ZN17CTheCarGenerators19RemoveCarGeneratorsEh
// Demangled: CTheCarGenerators::RemoveCarGenerators(uchar)
int __fastcall CTheCarGenerators::RemoveCarGenerators(int this, unsigned __int8 a2)
{
  int i; // r3

  for ( i = 0; i != 8000; i += 16 )
  {
    if ( LOBYTE(CTheCarGenerators::CarGeneratorArray[i + 14]) == this )
    {
      HIBYTE(CTheCarGenerators::CarGeneratorArray[i + 14]) = 0;
      LOBYTE(CTheCarGenerators::CarGeneratorArray[i + 14]) = 0;
      --CTheCarGenerators::NumOfCarGenerators;
    }
  }
  return this;
}


// ============================================================

// Address: 0x56e59c
// Original: _ZN17CTheCarGenerators4InitEv
// Demangled: CTheCarGenerators::Init(void)
int __fastcall CTheCarGenerators::Init(CTheCarGenerators *this)
{
  int result; // r0
  int v2; // r2
  __int16 *v3; // r3

  result = 0;
  CTheCarGenerators::GenerateEvenIfPlayerIsCloseCounter = 0;
  dword_A065B8 = 0;
  CTheCarGenerators::m_SpecialPlateHandler[0] = -1;
  byte_A064CC = 0;
  dword_A064D8 = -1;
  byte_A064DC = 0;
  byte_A064EC = 0;
  dword_A064E8 = -1;
  dword_A064F8 = -1;
  byte_A064FC = 0;
  dword_A06508 = -1;
  byte_A0650C = 0;
  dword_A06518 = -1;
  byte_A0651C = 0;
  byte_A0652C = 0;
  dword_A06528 = -1;
  byte_A0653C = 0;
  dword_A06538 = -1;
  byte_A0654C = 0;
  dword_A06548 = -1;
  byte_A0655C = 0;
  dword_A06558 = -1;
  byte_A0656C = 0;
  dword_A06568 = -1;
  byte_A0657C = 0;
  dword_A06578 = -1;
  byte_A0658C = 0;
  dword_A06588 = -1;
  byte_A0659C = 0;
  dword_A06598 = -1;
  byte_A065AC = 0;
  dword_A065A8 = -1;
  v2 = 0;
  CTheCarGenerators::ProcessCounter = 0;
  CTheCarGenerators::NumOfCarGenerators = 0;
  do
  {
    v3 = &CTheCarGenerators::CarGeneratorArray[v2];
    v2 += 16;
    *((_BYTE *)v3 + 29) = 0;
  }
  while ( v2 != 8000 );
  return result;
}


// ============================================================
